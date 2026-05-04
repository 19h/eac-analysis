#!/usr/bin/env python3
import argparse
import csv
import struct
from collections import Counter
from pathlib import Path

from capstone import CS_ARCH_X86, CS_GRP_CALL, CS_GRP_JUMP, CS_MODE_64, Cs
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


def read_dispatch_table(eac_path: Path, table_off=0xC3718, entries=360):
    data = eac_path.read_bytes()
    return [struct.unpack_from("<Q", data, table_off + idx * 8)[0] for idx in range(entries)]


def parse_int(text):
    if text == "":
        return None
    return int(text, 0)


def parse_vm_table(path: Path):
    rows = {}
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            entry = int(row["entry"])
            rows[entry] = {
                "target": parse_int(row["target"]),
                "tail_site": parse_int(row["tail_site"]),
                "tail_reg": row["tail_reg"],
                "tail_distance": parse_int(row["tail_distance"]),
                "target_hits": int(row["target_hits"]),
                "tail_site_hits": int(row["tail_site_hits"]),
                "observed_target": int(row["observed_target"]),
            }
    return rows


def parse_source_profile(path: Path):
    rows = {}
    if not path.exists():
        return rows
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            entry = int(row["source_entry"])
            rows[entry] = row
    return rows


def canonical_reg(md: Cs, reg_id):
    if reg_id == 0:
        return None
    return REG_ALIASES.get(md.reg_name(reg_id), md.reg_name(reg_id))


def read_reg(md: Cs, op):
    if op.type != X86_OP_REG:
        return None
    return canonical_reg(md, op.reg)


def written_reg(md: Cs, insn):
    if not insn.operands:
        return None
    op = insn.operands[0]
    if op.type != X86_OP_REG:
        return None
    return canonical_reg(md, op.reg)


def mem_size(op):
    return op.size or 0


def fmt_counts(counts: Counter):
    return ",".join(f"{key}:{count}" for key, count in counts.most_common())


def fmt_hex_counts(counts: Counter):
    return ",".join(f"0x{key:x}:{count}" for key, count in counts.most_common())


def update_known_reg(known_regs, dst, state):
    if dst is None:
        return
    if state is None:
        known_regs.pop(dst, None)
    else:
        known_regs[dst] = state


def mem_state(md: Cs, op, known_regs):
    if op.type != X86_OP_MEM:
        return None
    mem = op.mem
    if mem.base == X86_REG_RBP:
        return ("frame", mem.disp)
    if mem.base == X86_REG_RIP:
        return None
    base = canonical_reg(md, mem.base)
    if base not in known_regs:
        return None
    kind, offset = known_regs[base]
    return kind, offset + mem.disp


def analyze_handler(eac: bytes, start: int, stop: int):
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    md.detail = True
    known_regs = {}
    frame_reads = Counter()
    frame_writes = Counter()
    ip_reads = Counter()
    table_reads = Counter()
    mnemonics = Counter()
    insn_count = 0
    cond_jumps = 0
    jmp_count = 0
    call_count = 0
    ret_count = 0
    last_end = start

    for insn in md.disasm(eac[start:stop], start):
        insn_count += 1
        last_end = insn.address + insn.size
        mnemonics[insn.mnemonic] += 1

        if insn.group(CS_GRP_CALL):
            call_count += 1
        if insn.group(CS_GRP_JUMP):
            if insn.mnemonic == "jmp":
                jmp_count += 1
            else:
                cond_jumps += 1
        if insn.mnemonic.startswith("ret"):
            ret_count += 1

        for idx, op in enumerate(insn.operands):
            if op.type != X86_OP_MEM:
                continue
            state = mem_state(md, op, known_regs)
            if state is None:
                continue
            kind, offset = state
            is_write = idx == 0 and op.access & 2
            size = mem_size(op)
            if kind == "frame":
                target = frame_writes if is_write else frame_reads
                target[(offset, size)] += 1
            elif kind == "ip":
                ip_reads[(offset, size)] += 1
            elif kind == "table":
                table_reads[(offset, size)] += 1
            elif kind == "table_dyn":
                table_reads[("dyn", size)] += 1

        dst = written_reg(md, insn)
        new_state = None
        handled = False
        if dst is not None:
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
                    state = mem_state(md, src, known_regs)
                    if state == ("frame", FRAME_IP_OFF):
                        new_state = ("ip", 0)
                    elif state == ("frame", FRAME_TABLE_OFF):
                        new_state = ("table", 0)
                    handled = True
            elif insn.id == X86_INS_MOVZX and len(insn.operands) >= 2:
                handled = True
            elif insn.id in (X86_INS_ADD, X86_INS_SUB) and len(insn.operands) >= 2:
                src = insn.operands[1]
                if dst in known_regs:
                    kind, offset = known_regs[dst]
                    if src.type == X86_OP_IMM:
                        delta = src.imm if insn.id == X86_INS_ADD else -src.imm
                        new_state = (kind, offset + delta)
                    elif kind == "table" and insn.id == X86_INS_ADD:
                        new_state = ("table_dyn", offset)
                handled = True
            elif insn.id == X86_INS_LEA and len(insn.operands) >= 2:
                src = insn.operands[1]
                if src.type == X86_OP_MEM:
                    state = mem_state(md, src, known_regs)
                    if state is not None:
                        new_state = state
                handled = True
            elif insn.id == X86_INS_XOR and len(insn.operands) >= 2:
                a, b = insn.operands[0], insn.operands[1]
                if a.type == X86_OP_REG and b.type == X86_OP_REG and a.reg == b.reg:
                    handled = True

            if handled:
                update_known_reg(known_regs, dst, new_state)
            else:
                update_known_reg(known_regs, dst, None)

    return {
        "insns": insn_count,
        "span_bytes": max(0, last_end - start),
        "cond_jumps": cond_jumps,
        "jmps": jmp_count,
        "calls": call_count,
        "rets": ret_count,
        "frame_reads": fmt_hex_counts(Counter({off: count for (off, _size), count in frame_reads.items()})),
        "frame_writes": fmt_hex_counts(Counter({off: count for (off, _size), count in frame_writes.items()})),
        "ip_reads": fmt_counts(Counter({f"+0x{off:x}/{size}": count for (off, size), count in ip_reads.items()})),
        "table_reads": fmt_counts(Counter({
            (f"{off}/{size}" if isinstance(off, str) else f"+0x{off:x}/{size}"): count
            for (off, size), count in table_reads.items()
        })),
        "top_mnemonics": fmt_counts(mnemonics.most_common(8) and Counter(dict(mnemonics.most_common(8)))),
    }


def next_target_after(target, targets, window):
    candidates = [candidate for candidate in targets if candidate > target]
    if not candidates:
        return target + window
    return min(min(candidates), target + window)


def main():
    parser = argparse.ArgumentParser(description="Build a combined static/dynamic VM handler table.")
    parser.add_argument("dump_dir", nargs="?", default="dumps/vmtail-allstatic")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--window", type=lambda text: int(text, 0), default=0x900)
    args = parser.parse_args()

    dump_dir = Path(args.dump_dir)
    eac_path = Path(args.eac)
    eac = eac_path.read_bytes()
    table = read_dispatch_table(eac_path)
    vm_rows = parse_vm_table(dump_dir / "vm_table.tsv")
    profiles = parse_source_profile(dump_dir / "vm_source_profile.tsv")
    sorted_targets = sorted(set(table))

    columns = [
        "entry", "target", "observed_target", "target_hits",
        "tail_site", "tail_reg", "tail_distance", "tail_site_hits",
        "source_events", "unique_vm_ips", "top_ip_deltas", "top_targets", "top_sites",
        "static_stop", "insns", "span_bytes", "cond_jumps", "jmps", "calls", "rets",
        "frame_reads", "frame_writes", "ip_reads", "table_reads", "top_mnemonics",
    ]
    print("\t".join(columns))
    for entry, target in enumerate(table):
        vm = vm_rows.get(entry, {})
        profile = profiles.get(entry, {})
        tail_site = vm.get("tail_site")
        if tail_site is not None:
            stop = tail_site + 16
        else:
            stop = next_target_after(target, sorted_targets, args.window)
        stop = min(stop, len(eac))
        static = analyze_handler(eac, target, stop)
        row = {
            "entry": str(entry),
            "target": f"0x{target:x}",
            "observed_target": str(vm.get("observed_target", 0)),
            "target_hits": str(vm.get("target_hits", 0)),
            "tail_site": f"0x{tail_site:x}" if tail_site is not None else "",
            "tail_reg": vm.get("tail_reg", ""),
            "tail_distance": f"0x{vm['tail_distance']:x}" if vm.get("tail_distance") is not None else "",
            "tail_site_hits": str(vm.get("tail_site_hits", 0)),
            "source_events": profile.get("count", "0"),
            "unique_vm_ips": profile.get("unique_vm_ips", "0"),
            "top_ip_deltas": profile.get("top_ip_deltas", ""),
            "top_targets": profile.get("top_targets", ""),
            "top_sites": profile.get("top_sites", ""),
            "static_stop": f"0x{stop:x}",
        }
        row.update({key: str(value) for key, value in static.items()})
        print("\t".join(row[column] for column in columns))


if __name__ == "__main__":
    main()
