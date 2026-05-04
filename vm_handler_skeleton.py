#!/usr/bin/env python3
import argparse
import csv
import hashlib
import struct
from collections import Counter, defaultdict
from pathlib import Path

from capstone import CS_ARCH_X86, CS_GRP_JUMP, CS_MODE_64, Cs
from capstone.x86_const import (
    X86_INS_ADD,
    X86_INS_LEA,
    X86_INS_MOV,
    X86_INS_MOVZX,
    X86_INS_SUB,
    X86_INS_XOR,
    X86_OP_IMM,
    X86_OP_MEM,
    X86_OP_REG,
    X86_REG_RBP,
    X86_REG_RIP,
)


REG_ALIASES = {
    "al": "rax", "ah": "rax", "ax": "rax", "eax": "rax", "rax": "rax",
    "bl": "rbx", "bh": "rbx", "bx": "rbx", "ebx": "rbx", "rbx": "rbx",
    "cl": "rcx", "ch": "rcx", "cx": "rcx", "ecx": "rcx", "rcx": "rcx",
    "dl": "rdx", "dh": "rdx", "dx": "rdx", "edx": "rdx", "rdx": "rdx",
    "sil": "rsi", "si": "rsi", "esi": "rsi", "rsi": "rsi",
    "dil": "rdi", "di": "rdi", "edi": "rdi", "rdi": "rdi",
    "bpl": "rbp", "bp": "rbp", "ebp": "rbp", "rbp": "rbp",
    "spl": "rsp", "sp": "rsp", "esp": "rsp", "rsp": "rsp",
}
for idx in range(8, 16):
    REG_ALIASES[f"r{idx}b"] = f"r{idx}"
    REG_ALIASES[f"r{idx}w"] = f"r{idx}"
    REG_ALIASES[f"r{idx}d"] = f"r{idx}"
    REG_ALIASES[f"r{idx}"] = f"r{idx}"

FRAME_IP_OFF = 0x0A
FRAME_TABLE_OFF = 0x10F
FRAME_STATE_OFF = 0x170
MAX_PTR_ADVANCE = 0x40


def read_dispatch_table(eac_path: Path, table_off=0xC3718, entries=360):
    data = eac_path.read_bytes()
    return [struct.unpack_from("<Q", data, table_off + idx * 8)[0] for idx in range(entries)]


def parse_int(text):
    if text == "":
        return None
    return int(text, 0)


def parse_table(path, key):
    rows = {}
    if not path.exists():
        return rows
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            rows[int(row[key], 10)] = row
    return rows


def parse_vm_table(path):
    rows = {}
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            entry = int(row["entry"], 10)
            rows[entry] = {
                "tail_site": parse_int(row["tail_site"]),
                "tail_reg": row["tail_reg"],
            }
    return rows


def next_target_after(target, targets, window):
    candidates = [candidate for candidate in targets if candidate > target]
    if not candidates:
        return target + window
    return min(min(candidates), target + window)


def canonical_reg(md, reg_id):
    if reg_id == 0:
        return None
    name = md.reg_name(reg_id)
    return REG_ALIASES.get(name, name)


def read_reg(md, op):
    if op.type != X86_OP_REG:
        return None
    return canonical_reg(md, op.reg)


def written_reg(md, insn):
    if not insn.operands:
        return None
    op = insn.operands[0]
    if op.type != X86_OP_REG:
        return None
    return canonical_reg(md, op.reg)


def op_size(op):
    return op.size or 0


def fmt_off(offset):
    if isinstance(offset, str):
        return offset
    sign = "-" if offset < 0 else "+"
    return f"{sign}0x{abs(offset):x}"


def mem_state(md, op, known_regs):
    if op.type != X86_OP_MEM:
        return None
    mem = op.mem
    if mem.base == X86_REG_RIP:
        return None
    if mem.base == X86_REG_RBP:
        return ("frame", mem.disp)
    base = canonical_reg(md, mem.base)
    if base not in known_regs:
        return None
    kind, offset = known_regs[base]
    return kind, offset + mem.disp


def should_keep_frame_offset(offset):
    return offset in {
        0x0, 0x0A, 0x23, 0x60, 0x71, 0x81, 0xE1, 0xF3,
        0x10F, 0x16F, 0x170, 0x194, 0x199, 0x1DC,
    }


def update_reg(known_regs, reg, state):
    if reg is None:
        return
    if state is None:
        known_regs.pop(reg, None)
    else:
        known_regs[reg] = state


def state_from_mem_load(state):
    if state == ("frame", FRAME_IP_OFF):
        return ("ip", 0)
    if state == ("frame", FRAME_TABLE_OFF):
        return ("table", 0)
    return None


def record_mem_ops(tokens, md, insn, known_regs):
    for idx, op in enumerate(insn.operands):
        if op.type != X86_OP_MEM:
            continue
        state = mem_state(md, op, known_regs)
        if state is None:
            continue
        kind, offset = state
        is_write = idx == 0 and op.access & 2
        size = op_size(op)
        direction = "W" if is_write else "R"
        if kind == "frame":
            if should_keep_frame_offset(offset):
                tokens.append(f"{direction}F{fmt_off(offset)}/{size}:{insn.mnemonic}")
        elif kind == "ip":
            tokens.append(f"{direction}IP{fmt_off(offset)}/{size}:{insn.mnemonic}")
        elif kind == "table":
            tokens.append(f"{direction}T{fmt_off(offset)}/{size}:{insn.mnemonic}")
        elif kind == "table_dyn":
            tokens.append(f"{direction}Tdyn/{size}:{insn.mnemonic}")


def update_known_from_insn(tokens, md, insn, known_regs):
    dst = written_reg(md, insn)
    if dst is None:
        return

    new_state = None
    handled = False
    if insn.id == X86_INS_MOV and len(insn.operands) >= 2:
        src = insn.operands[1]
        if src.type == X86_OP_REG:
            src_reg = read_reg(md, src)
            if src.reg == X86_REG_RBP:
                new_state = ("frame", 0)
            elif src_reg in known_regs:
                new_state = known_regs[src_reg]
            handled = True
        elif src.type == X86_OP_MEM:
            new_state = state_from_mem_load(mem_state(md, src, known_regs))
            handled = True
    elif insn.id == X86_INS_MOVZX and len(insn.operands) >= 2:
        handled = True
    elif insn.id in (X86_INS_ADD, X86_INS_SUB) and len(insn.operands) >= 2:
        src = insn.operands[1]
        if dst in known_regs:
            kind, offset = known_regs[dst]
            if src.type == X86_OP_IMM:
                delta = src.imm if insn.id == X86_INS_ADD else -src.imm
                if kind in {"ip", "table"}:
                    if abs(delta) <= MAX_PTR_ADVANCE:
                        new_state = (kind, offset + delta)
                        tokens.append(f"{kind.upper()}ADV{format_delta(delta)}")
                    else:
                        new_state = None
                else:
                    new_state = (kind, offset + delta)
            elif kind == "table" and insn.id == X86_INS_ADD:
                new_state = ("table_dyn", offset)
                tokens.append("TDYN")
        handled = True
    elif insn.id == X86_INS_LEA and len(insn.operands) >= 2:
        src = insn.operands[1]
        if src.type == X86_OP_MEM:
            new_state = mem_state(md, src, known_regs)
        handled = True
    elif insn.id == X86_INS_XOR and len(insn.operands) >= 2:
        a, b = insn.operands[0], insn.operands[1]
        if a.type == X86_OP_REG and b.type == X86_OP_REG and a.reg == b.reg:
            handled = True

    if handled:
        update_reg(known_regs, dst, new_state)
    else:
        update_reg(known_regs, dst, None)


def format_delta(delta):
    sign = "-" if delta < 0 else "+"
    return f"{sign}0x{abs(delta):x}"


def analyze_handler(eac, start, stop):
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    md.detail = True
    known_regs = {}
    tokens = []
    relevant_counts = Counter()
    insns = 0
    for insn in md.disasm(eac[start:stop], start):
        insns += 1
        before = len(tokens)
        record_mem_ops(tokens, md, insn, known_regs)
        update_known_from_insn(tokens, md, insn, known_regs)
        if insn.group(CS_GRP_JUMP) and insn.mnemonic == "jmp":
            if insn.operands and insn.operands[0].type == X86_OP_REG:
                reg = read_reg(md, insn.operands[0])
                tokens.append(f"JMP:{reg}")
        for token in tokens[before:]:
            relevant_counts[token.split(":", 1)[0]] += 1
    skeleton = ";".join(tokens)
    dispatch = final_dispatch_tokens(tokens)
    dispatch_skeleton = ";".join(dispatch)
    decode = decode_signature_tokens(dispatch)
    decode_signature = ";".join(decode)
    digest = hashlib.sha256(skeleton.encode()).hexdigest()[:16]
    dispatch_digest = hashlib.sha256(dispatch_skeleton.encode()).hexdigest()[:16]
    decode_digest = hashlib.sha256(decode_signature.encode()).hexdigest()[:16]
    return {
        "insns": insns,
        "relevant_ops": len(tokens),
        "skeleton_hash": digest,
        "skeleton": skeleton,
        "dispatch_ops": len(dispatch),
        "dispatch_hash": dispatch_digest,
        "dispatch_skeleton": dispatch_skeleton,
        "decode_ops": len(decode),
        "decode_hash": decode_digest,
        "decode_signature": decode_signature,
        "top_ops": ",".join(f"{key}:{count}" for key, count in relevant_counts.most_common(12)),
    }


def final_dispatch_tokens(tokens):
    if not tokens:
        return []
    tdyn = None
    for idx, token in enumerate(tokens):
        if token == "TDYN":
            tdyn = idx
    if tdyn is None:
        return tokens[-12:]
    last_ip = None
    last_table = None
    for idx, token in enumerate(tokens[:tdyn + 1]):
        if token.startswith("RF+0xa/8"):
            last_ip = idx
        elif token.startswith("RF+0x10f/8"):
            last_table = idx
    starts = [idx for idx in (last_ip, last_table) if idx is not None]
    if not starts:
        return tokens[max(0, tdyn - 6):]
    return tokens[min(starts):]


def decode_signature_tokens(tokens):
    keep = []
    for token in tokens:
        if token.startswith("IPADV"):
            keep.append(token)
        elif token.startswith("RIP"):
            keep.append(token)
        elif token.startswith("RF+0x170/") or token.startswith("WF+0x170/"):
            keep.append(token)
        elif token == "TDYN" or token.startswith("RTdyn/"):
            keep.append(token)
        elif token.startswith("WF+0xa/"):
            keep.append(token)
    return keep


def semantic_meta(row):
    if not row:
        return {
            "observation": "",
            "events": "0",
            "delta": "",
            "shape": "",
            "constant_bytes": "",
            "top_targets": "",
        }
    return {
        "observation": row.get("observation", ""),
        "events": row.get("events", "0"),
        "delta": row.get("delta", ""),
        "shape": row.get("shape", ""),
        "constant_bytes": row.get("constant_bytes", ""),
        "top_targets": row.get("top_targets", ""),
    }


def emit_skeletons(args):
    dump_dir = Path(args.dump_dir)
    eac_path = Path(args.eac)
    eac = eac_path.read_bytes()
    table = read_dispatch_table(eac_path)
    vm_table = parse_vm_table(dump_dir / args.vm_table)
    semantics = parse_table(dump_dir / args.semantics, "entry")
    sorted_targets = sorted(set(table))
    print(
        "entry\ttarget\tobservation\tevents\tdelta\tshape\tconstant_bytes\t"
        "tail_site\tstatic_stop\tinsns\trelevant_ops\tskeleton_hash\ttop_ops\t"
        "dispatch_ops\tdispatch_hash\tdecode_ops\tdecode_hash\ttop_targets\t"
        "decode_signature\tdispatch_skeleton\tskeleton"
    )
    for entry, target in enumerate(table):
        tail_site = vm_table.get(entry, {}).get("tail_site")
        if tail_site is not None:
            stop = tail_site + 16
        else:
            stop = next_target_after(target, sorted_targets, args.window)
        stop = min(stop, len(eac))
        analysis = analyze_handler(eac, target, stop)
        meta = semantic_meta(semantics.get(entry))
        print(
            f"{entry}\t0x{target:x}\t{meta['observation']}\t{meta['events']}\t"
            f"{meta['delta']}\t{meta['shape']}\t{meta['constant_bytes']}\t"
            f"{f'0x{tail_site:x}' if tail_site is not None else ''}\t"
            f"0x{stop:x}\t{analysis['insns']}\t{analysis['relevant_ops']}\t"
            f"{analysis['skeleton_hash']}\t{analysis['top_ops']}\t"
            f"{analysis['dispatch_ops']}\t{analysis['dispatch_hash']}\t"
            f"{analysis['decode_ops']}\t{analysis['decode_hash']}\t"
            f"{meta['top_targets']}\t{analysis['decode_signature']}\t"
            f"{analysis['dispatch_skeleton']}\t{analysis['skeleton']}"
        )


def emit_groups(args):
    dump_dir = Path(args.dump_dir)
    rows = []
    with (dump_dir / args.skeletons).open(newline="") as handle:
        rows = list(csv.DictReader(handle, delimiter="\t"))
    groups = {}
    for row in rows:
        hash_column = {
            "decode": "decode_hash",
            "dispatch": "dispatch_hash",
            "skeleton": "skeleton_hash",
        }[args.group_key]
        skeleton_column = {
            "decode": "decode_signature",
            "dispatch": "dispatch_skeleton",
            "skeleton": "skeleton",
        }[args.group_key]
        key = (
            row["observation"],
            row["delta"],
            row["shape"],
            row["constant_bytes"],
            row[hash_column],
        )
        group = groups.setdefault(
            key,
            {
                "events": 0,
                "entries": Counter(),
                "targets": Counter(),
                "ops": Counter(),
                "skeleton": row[skeleton_column],
            },
        )
        events = int(row["events"] or "0", 10)
        group["events"] += events
        group["entries"][f"{row['entry']}@{row['target']}"] += max(events, 1)
        group["targets"].update(parse_counts(row["top_targets"]))
        group["ops"].update(parse_counts(row["top_ops"]))

    print(
        "observation\tdelta\tshape\tconstant_bytes\tskeleton_hash\tevents\t"
        "entries\ttop_entries\ttop_targets\ttop_ops\tskeleton"
    )
    for key, group in sorted(groups.items(), key=lambda item: (-item[1]["events"], item[0])):
        if group["events"] < args.min_events:
            continue
        obs, delta, shape, constants, digest = key
        print(
            f"{obs}\t{delta}\t{shape}\t{constants}\t{digest}\t{group['events']}\t"
            f"{len(group['entries'])}\t{fmt_counts(group['entries'], args.max_items)}\t"
            f"{fmt_counts(group['targets'], args.max_items)}\t"
            f"{fmt_counts(group['ops'], args.max_items)}\t{group['skeleton']}"
        )


def parse_counts(text):
    counts = Counter()
    if not text:
        return counts
    for item in text.split(","):
        if not item or ":" not in item:
            continue
        key, value = item.rsplit(":", 1)
        try:
            counts[key] += int(value, 10)
        except ValueError:
            continue
    return counts


def fmt_counts(counter, max_items):
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(max_items))


def main():
    parser = argparse.ArgumentParser(
        description="Extract normalized frame/IP/table access skeletons from VM handlers."
    )
    parser.add_argument("dump_dir", nargs="?", default="dumps/vmtail-wide-1m")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--vm-table", default="vm_table.tsv")
    parser.add_argument("--semantics", default="vm_handler_semantics.tsv")
    parser.add_argument("--window", type=lambda text: int(text, 0), default=0x1200)
    parser.add_argument("--groups", action="store_true")
    parser.add_argument("--group-key", choices=("decode", "dispatch", "skeleton"), default="decode")
    parser.add_argument("--skeletons", default="vm_handler_skeletons.tsv")
    parser.add_argument("--min-events", type=int, default=1)
    parser.add_argument("--max-items", type=int, default=6)
    args = parser.parse_args()

    if args.groups:
        emit_groups(args)
    else:
        emit_skeletons(args)


if __name__ == "__main__":
    main()
