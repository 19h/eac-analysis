#!/usr/bin/env python3
import argparse
import csv
from collections import Counter, defaultdict
from dataclasses import dataclass
from pathlib import Path

from capstone import CS_ARCH_X86, CS_MODE_64, Cs
from capstone.x86_const import X86_OP_IMM, X86_OP_MEM, X86_OP_REG, X86_REG_RBP, X86_REG_RIP


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
FRAME_FLAGS_OFF = 0x23
FRAME_TABLE_OFF = 0x10F
FRAME_STATE_OFF = 0x170
FRAME_BYTE_OFF = 0x194
MASK64 = 0xffffffffffffffff
MASK32 = 0xffffffff
FRAME_RUNTIME_LOW8 = 0x6D


@dataclass(frozen=True)
class Ptr:
    kind: str
    off: int = 0


@dataclass(frozen=True)
class Unknown:
    reason: str = "unknown"


def is_unknown(value):
    return isinstance(value, Unknown)


def parse_int(text):
    if text is None or text == "" or text == "-":
        return None
    return int(text, 0)


def make_disassembler():
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    md.detail = True
    md.skipdata = True
    return md


def canon_reg(insn, reg_id):
    if not reg_id:
        return ""
    name = insn.reg_name(reg_id)
    return REG_ALIASES.get(name, name)


def reg_of(insn, op):
    if op.type != X86_OP_REG:
        return ""
    return canon_reg(insn, op.reg)


def mask_for_size(size):
    if size <= 0:
        return MASK64
    return (1 << (size * 8)) - 1


def op_bits(size):
    return 64 if size <= 0 else size * 8


def sign_extend(value, bits):
    sign = 1 << (bits - 1)
    mask = (1 << bits) - 1
    value &= mask
    return value - (1 << bits) if value & sign else value


def mem_ptr(insn, op, regs):
    if op.type != X86_OP_MEM:
        return None
    mem = op.mem
    if mem.base == X86_REG_RIP:
        return None
    base_ptr = Ptr("frame", 0) if mem.base == X86_REG_RBP else regs.get(canon_reg(insn, mem.base))
    index_value = regs.get(canon_reg(insn, mem.index), 0) if mem.index else 0
    if isinstance(base_ptr, Ptr) and isinstance(index_value, int):
        return Ptr(base_ptr.kind, base_ptr.off + index_value * mem.scale + mem.disp)
    if isinstance(base_ptr, Ptr) and not mem.index:
        return Ptr(base_ptr.kind, base_ptr.off + mem.disp)
    return None


def read_ip(data, off, size):
    if off < 0 or off + size > len(data):
        return Unknown("ip_oob")
    return int.from_bytes(data[off:off + size], "little")


def read_frame_mem(frame_mem, off, size):
    if not frame_mem:
        return Unknown(f"frame_{off:x}")
    exact = frame_mem.get((off, size))
    if exact is not None:
        return exact
    for (base, stored_size), value in frame_mem.items():
        if base != off or stored_size < size:
            continue
        if isinstance(value, int):
            return value & mask_for_size(size)
        if isinstance(value, Ptr) and size <= stored_size:
            return value
    return Unknown(f"frame_{off:x}")


def write_frame_mem(frame_mem, off, size, value):
    if frame_mem is None:
        return
    frame_mem[(off, size)] = value


def read_mem(insn, op, regs, frame, ip_bytes, frame_mem=None):
    ptr = mem_ptr(insn, op, regs)
    if ptr is None:
        return Unknown("mem_ptr")
    size = op.size or 8
    if ptr.kind == "frame":
        if ptr.off == FRAME_IP_OFF and size == 8:
            return Ptr("ip", 0)
        if ptr.off == FRAME_TABLE_OFF and size == 8:
            return Ptr("table", 0)
        if ptr.off == FRAME_STATE_OFF:
            return frame["state"] & mask_for_size(size)
        if ptr.off == FRAME_FLAGS_OFF:
            return frame["flags"] & mask_for_size(size)
        if ptr.off == FRAME_BYTE_OFF:
            return frame["byte"] & mask_for_size(size)
        return read_frame_mem(frame_mem, ptr.off, size)
    if ptr.kind == "ip":
        return read_ip(ip_bytes, ptr.off, size)
    return Unknown(ptr.kind)


def read_op(insn, op, regs, frame, ip_bytes, frame_mem=None):
    if op.type == X86_OP_IMM:
        return op.imm & MASK64
    if op.type == X86_OP_REG:
        return regs.get(reg_of(insn, op), Unknown("reg"))
    if op.type == X86_OP_MEM:
        return read_mem(insn, op, regs, frame, ip_bytes, frame_mem)
    return Unknown("op")


def write_op(insn, op, value, regs, frame, frame_mem=None):
    if op.type == X86_OP_REG:
        reg = reg_of(insn, op)
        if not reg:
            return False
        if isinstance(value, int):
            value &= mask_for_size(op.size or 8)
        regs[reg] = value
        return True
    if op.type == X86_OP_MEM:
        ptr = mem_ptr(insn, op, regs)
        if ptr is None:
            return False
        if is_unknown(value):
            return False
        if ptr == Ptr("frame", FRAME_STATE_OFF):
            frame["state"] = value & MASK32
            return True
        if ptr == Ptr("frame", FRAME_FLAGS_OFF):
            frame["flags"] = value & MASK32
            return True
        if ptr == Ptr("frame", FRAME_BYTE_OFF):
            frame["byte"] = value & 0xff
            return True
        if ptr.kind == "frame":
            write_frame_mem(frame_mem, ptr.off, op.size or 8, value)
        return True
    return False


def eval_bin(mnemonic, left, right, size):
    if is_unknown(left) or is_unknown(right):
        return Unknown("binop")
    if isinstance(left, Ptr):
        if isinstance(right, int) and mnemonic in {"add", "sub"}:
            delta = right if mnemonic == "add" else -right
            return Ptr(left.kind, left.off + sign_extend(delta, op_bits(size)))
        if isinstance(right, Ptr) and mnemonic == "sub" and left.kind == right.kind:
            return (left.off - right.off) & mask_for_size(size)
        return Unknown("ptr_binop")
    if isinstance(right, Ptr):
        if isinstance(left, int) and mnemonic == "add":
            return Ptr(right.kind, right.off + sign_extend(left, op_bits(size)))
        return Unknown("ptr_binop")
    if not isinstance(left, int) or not isinstance(right, int):
        return Unknown("non_int")
    mask = mask_for_size(size)
    if mnemonic == "add":
        return (left + right) & mask
    if mnemonic == "sub":
        return (left - right) & mask
    if mnemonic == "xor":
        return (left ^ right) & mask
    if mnemonic == "and":
        return (left & right) & mask
    if mnemonic == "or":
        return (left | right) & mask
    return Unknown("op")


def cmp_zf(mnemonic, left, right, size):
    if is_unknown(left) or is_unknown(right):
        return None
    left_concrete = concrete_compare_value(left, size)
    right_concrete = concrete_compare_value(right, size)
    if left_concrete is not None and right_concrete is not None:
        left = left_concrete
        right = right_concrete
    if not isinstance(left, int) or not isinstance(right, int):
        if mnemonic == "cmp" and isinstance(left, Ptr) and isinstance(right, Ptr) and left.kind == right.kind:
            return left.off == right.off
        if mnemonic == "cmp" and size >= 8:
            if isinstance(left, Ptr) and isinstance(right, int) and right == 0:
                return False
            if isinstance(right, Ptr) and isinstance(left, int) and left == 0:
                return False
        if mnemonic == "test" and size >= 8 and isinstance(left, Ptr) and left == right:
            return False
        return None
    mask = mask_for_size(size)
    if mnemonic == "cmp":
        return ((left - right) & mask) == 0
    if mnemonic == "test":
        return (left & right) == 0
    return None


def concrete_compare_value(value, size):
    if isinstance(value, int):
        return value & mask_for_size(size)
    if isinstance(value, Ptr) and value.kind == "frame" and size == 1:
        return (FRAME_RUNTIME_LOW8 + value.off) & 0xff
    return None


def branch_taken(mnemonic, zf):
    if mnemonic in {"je", "jz"}:
        return zf if zf is not None else None
    if mnemonic in {"jne", "jnz"}:
        return (not zf) if zf is not None else None
    return None


def disassemble_region(md, data, start, stop):
    start = max(0, start)
    stop = min(len(data), stop)
    insns = list(md.disasm(data[start:stop], start))
    return insns, {insn.address: insn for insn in insns}


def execute(insns_by_addr, start, tail_site, row, max_steps):
    ip_bytes = bytes.fromhex(row["bytes"])
    frame = {
        "state": parse_int(row["pre_state"]) & MASK32,
        "flags": parse_int(row.get("pre_flags", "0x0") or "0x0") & MASK32,
        "byte": parse_int(row.get("pre_byte", "0x0") or "0x0") & 0xff,
    }
    regs = {"rbp": Ptr("frame", 0)}
    frame_mem = {}
    pc = start
    zf = None
    steps = 0
    unknown = 0
    branch_unknown = 0

    while steps < max_steps:
        if tail_site is not None and pc == tail_site:
            return frame["state"], "ok", steps, unknown, branch_unknown
        insn = insns_by_addr.get(pc)
        if insn is None:
            return frame["state"], "falloff", steps, unknown, branch_unknown
        steps += 1
        mnem = insn.mnemonic
        ops = insn.operands
        next_pc = insn.address + insn.size

        if mnem == "jmp":
            if ops and ops[0].type == X86_OP_IMM and ops[0].imm in insns_by_addr:
                pc = ops[0].imm
                continue
            return frame["state"], "ok", steps, unknown, branch_unknown

        taken = branch_taken(mnem, zf)
        if taken is not None:
            pc = ops[0].imm if taken and ops and ops[0].type == X86_OP_IMM else next_pc
            continue
        if mnem.startswith("j") and mnem != "jmp":
            branch_unknown += 1
            pc = next_pc
            continue

        if mnem in {"cmp", "test"} and len(ops) >= 2:
            left = read_op(insn, ops[0], regs, frame, ip_bytes, frame_mem)
            right = read_op(insn, ops[1], regs, frame, ip_bytes, frame_mem)
            zf = cmp_zf(mnem, left, right, ops[0].size or ops[1].size or 8)
            if zf is None:
                unknown += 1
            pc = next_pc
            continue

        if not ops:
            pc = next_pc
            continue

        if mnem in {"mov", "movabs"} and len(ops) >= 2:
            value = read_op(insn, ops[1], regs, frame, ip_bytes, frame_mem)
            if not write_op(insn, ops[0], value, regs, frame, frame_mem):
                unknown += 1
            pc = next_pc
            continue

        if mnem == "movzx" and len(ops) >= 2:
            value = read_op(insn, ops[1], regs, frame, ip_bytes, frame_mem)
            if not write_op(insn, ops[0], value, regs, frame, frame_mem):
                unknown += 1
            pc = next_pc
            continue

        if mnem == "lea" and len(ops) >= 2:
            ptr = mem_ptr(insn, ops[1], regs)
            if not write_op(insn, ops[0], ptr if ptr is not None else Unknown("lea"), regs, frame, frame_mem):
                unknown += 1
            pc = next_pc
            continue

        if mnem in {"add", "sub", "xor", "and", "or"} and len(ops) >= 2:
            dst = read_op(insn, ops[0], regs, frame, ip_bytes, frame_mem)
            src = read_op(insn, ops[1], regs, frame, ip_bytes, frame_mem)
            if mnem == "xor" and ops[0].type == X86_OP_REG and ops[1].type == X86_OP_REG and ops[0].reg == ops[1].reg:
                value = 0
            elif mnem == "sub" and ops[0].type == X86_OP_REG and ops[1].type == X86_OP_REG and ops[0].reg == ops[1].reg:
                value = 0
            else:
                value = eval_bin(mnem, dst, src, ops[0].size or 8)
            if is_unknown(value):
                unknown += 1
            if not write_op(insn, ops[0], value, regs, frame, frame_mem):
                unknown += 1
            if mnem in {"and", "or", "xor", "sub"}:
                zf = (value & mask_for_size(ops[0].size or 8)) == 0 if isinstance(value, int) else None
            pc = next_pc
            continue

        if ops[0].type == X86_OP_REG:
            regs[reg_of(insn, ops[0])] = Unknown(mnem)
        pc = next_pc

    return frame["state"], "step_limit", steps, unknown, branch_unknown


def read_skeletons(path):
    rows = {}
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            entry = row.get("entry", "")
            rows[entry] = row
    return rows


def read_trace_rows(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def main():
    parser = argparse.ArgumentParser(
        description="Validate static VM state slices against state-aware dynamic trace rows."
    )
    parser.add_argument(
        "trace",
        nargs="?",
        default="dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv",
    )
    parser.add_argument("--skeletons", default="dumps/vmtail-wide-1m-w16/vm_handler_skeletons.tsv")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--window", type=lambda value: int(value, 0), default=0x1200)
    parser.add_argument("--max-steps", type=int, default=2000)
    parser.add_argument("--max-rows-per-source", type=int, default=0)
    args = parser.parse_args()

    data = Path(args.eac).read_bytes()
    md = make_disassembler()
    skeletons = read_skeletons(args.skeletons)
    decoded = {}
    counts = defaultdict(int)
    stats = defaultdict(Counter)
    targets = {}

    for row in read_trace_rows(args.trace):
        if row.get("byte_status") != "exact" or not row.get("pre_state") or not row.get("post_state"):
            continue
        source = row["source_entry"]
        if args.max_rows_per_source and counts[source] >= args.max_rows_per_source:
            continue
        skel = skeletons.get(source)
        if not skel:
            continue
        if source not in decoded:
            target = parse_int(skel.get("target"))
            tail_site = parse_int(skel.get("tail_site"))
            if target is None:
                continue
            stop = tail_site + 16 if tail_site is not None else target + args.window
            if stop - target > args.window:
                stop = target + args.window
            insns, by_addr = disassemble_region(md, data, target, stop)
            decoded[source] = (target, tail_site, by_addr)
        target, tail_site, by_addr = decoded[source]
        predicted, status, steps, unknown, branch_unknown = execute(
            by_addr, target, tail_site, row, args.max_steps
        )
        actual = parse_int(row["post_state"]) & MASK32
        bucket = stats[source]
        bucket["events"] += 1
        bucket["steps"] += steps
        bucket["unknown_ops"] += unknown
        bucket["branch_unknown"] += branch_unknown
        bucket[f"status_{status}"] += 1
        if predicted == actual and status == "ok":
            bucket["matched"] += 1
        else:
            bucket["mismatched"] += 1
            if "example" not in bucket:
                bucket["example_pred"] = predicted
                bucket["example_actual"] = actual
                bucket["example_status"] = status
                bucket["example_bytes"] = row.get("bytes", "")
        targets[source] = skel.get("target", "")
        counts[source] += 1

    print(
        "source_entry\tsource_target\tevents\tmatched_events\tcoverage_pct\t"
        "mismatched_events\tunknown_ops\tbranch_unknown\tavg_steps\tstatuses\t"
        "example_pred\texample_actual\texample_status\texample_bytes"
    )
    for source, bucket in sorted(stats.items(), key=lambda item: (-item[1]["events"], int(item[0]))):
        events = bucket["events"]
        matched = bucket["matched"]
        pct = matched * 100.0 / events if events else 0.0
        statuses = ",".join(
            f"{key[7:]}:{value}" for key, value in sorted(bucket.items())
            if key.startswith("status_")
        )
        print(
            f"{source}\t{targets.get(source, '')}\t{events}\t{matched}\t{pct:.1f}\t"
            f"{bucket['mismatched']}\t{bucket['unknown_ops']}\t{bucket['branch_unknown']}\t"
            f"{bucket['steps'] / events if events else 0.0:.1f}\t{statuses}\t"
            f"0x{bucket.get('example_pred', 0) & MASK32:x}\t"
            f"0x{bucket.get('example_actual', 0) & MASK32:x}\t"
            f"{bucket.get('example_status', '')}\t{bucket.get('example_bytes', '')}"
        )


if __name__ == "__main__":
    main()
