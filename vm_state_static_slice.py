#!/usr/bin/env python3
import argparse
import csv
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


@dataclass(frozen=True)
class Ptr:
    kind: str
    off: int = 0


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


def fmt_imm(value):
    value &= 0xffffffffffffffff
    if value <= 0xffffffff:
        return f"0x{value:x}"
    return f"-0x{((-value) & 0xffffffffffffffff):x}"


def fmt_ptr(ptr):
    if ptr.off == 0:
        return ptr.kind
    sign = "+" if ptr.off >= 0 else "-"
    return f"{ptr.kind}{sign}0x{abs(ptr.off):x}"


def wrap(expr):
    if expr.startswith(("0x", "-", "state", "flags", "vm_byte", "b", "u16_", "u32_", "table", "ip", "frame")):
        return expr
    return f"({expr})"


def binexpr(left, op, right):
    if left == "0x0" and op == "^":
        return right
    if right == "0x0" and op in {"^", "+", "|"}:
        return left
    return f"{wrap(left)} {op} {wrap(right)}"


def mem_ptr(insn, op, regs):
    if op.type != X86_OP_MEM:
        return None
    mem = op.mem
    if mem.base == X86_REG_RIP:
        return None
    if mem.base == X86_REG_RBP:
        return Ptr("frame", mem.disp)
    base = canon_reg(insn, mem.base)
    value = regs.get(base)
    if isinstance(value, Ptr):
        return Ptr(value.kind, value.off + mem.disp)
    return None


def read_mem(insn, op, regs, state_expr, flags_expr, byte_expr):
    ptr = mem_ptr(insn, op, regs)
    if ptr is None:
        return f"mem[{insn.op_str}]"
    if ptr.kind == "frame":
        if ptr.off == FRAME_IP_OFF and op.size == 8:
            return Ptr("ip", 0)
        if ptr.off == FRAME_TABLE_OFF and op.size == 8:
            return Ptr("table", 0)
        if ptr.off == FRAME_STATE_OFF:
            return state_expr
        if ptr.off == FRAME_FLAGS_OFF:
            return flags_expr
        if ptr.off == FRAME_BYTE_OFF:
            return byte_expr
        return f"F[{ptr.off:#x}]"
    if ptr.kind == "ip":
        if op.size == 1:
            return f"b{ptr.off}"
        if op.size == 2:
            return f"u16_{ptr.off}"
        if op.size == 4:
            return f"u32_{ptr.off}"
        return f"IP[{ptr.off:#x}]/{op.size}"
    if ptr.kind == "table":
        return f"T[{ptr.off:#x}]"
    return f"{fmt_ptr(ptr)}/{op.size}"


def read_op(insn, op, regs, state_expr, flags_expr, byte_expr):
    if op.type == X86_OP_IMM:
        return fmt_imm(op.imm)
    if op.type == X86_OP_REG:
        return regs.get(reg_of(insn, op), reg_of(insn, op))
    if op.type == X86_OP_MEM:
        return read_mem(insn, op, regs, state_expr, flags_expr, byte_expr)
    return insn.op_str


def write_reg(insn, op, value, regs):
    reg = reg_of(insn, op)
    if reg:
        regs[reg] = value


def apply_op(old, mnemonic, src):
    op_map = {
        "add": "+",
        "sub": "-",
        "xor": "^",
        "and": "&",
        "or": "|",
    }
    if mnemonic == "mov":
        return src
    op = op_map.get(mnemonic)
    if op is None:
        return f"{mnemonic}({old},{src})"
    return binexpr(old, op, src)


def update_reg_arith(insn, regs, state_expr, flags_expr, byte_expr):
    dst, src = insn.operands[0], insn.operands[1]
    dst_reg = reg_of(insn, dst)
    if not dst_reg:
        return
    old = regs.get(dst_reg, dst_reg)
    src_expr = read_op(insn, src, regs, state_expr, flags_expr, byte_expr)
    if insn.mnemonic in {"add", "sub"} and isinstance(old, Ptr) and src.type == X86_OP_IMM:
        delta = src.imm if insn.mnemonic == "add" else -src.imm
        regs[dst_reg] = Ptr(old.kind, old.off + delta)
        return
    if insn.mnemonic == "xor" and dst.type == X86_OP_REG and src.type == X86_OP_REG and dst.reg == src.reg:
        regs[dst_reg] = "0x0"
        return
    if isinstance(old, Ptr):
        regs.pop(dst_reg, None)
        return
    regs[dst_reg] = apply_op(str(old), insn.mnemonic, str(src_expr))


def disassemble_region(md, data, start, stop):
    start = max(0, start)
    stop = min(len(data), stop)
    return list(md.disasm(data[start:stop], start))


def slice_row(md, data, row, window):
    entry = row.get("entry", "")
    target = parse_int(row.get("target"))
    tail_site = parse_int(row.get("tail_site"))
    if target is None:
        return None
    stop = tail_site + 1 if tail_site is not None else target + window
    if stop - target > window:
        stop = target + window

    regs = {"rbp": Ptr("frame", 0)}
    state_expr = "state0"
    flags_expr = "flags0"
    byte_expr = "byte0"
    state_updates = []
    flags_updates = []
    ip_reads = []
    branches = []
    insn_count = 0

    for insn in disassemble_region(md, data, target, stop):
        insn_count += 1
        if insn.address == tail_site:
            break
        mnem = insn.mnemonic
        ops = insn.operands
        if mnem.startswith("j") and mnem != "jmp":
            branches.append(f"0x{insn.address:x}:{mnem}")
            continue
        if not ops:
            continue

        dst = ops[0]
        if dst.type == X86_OP_MEM and len(ops) >= 2:
            ptr = mem_ptr(insn, dst, regs)
            src = read_op(insn, ops[1], regs, state_expr, flags_expr, byte_expr)
            if ptr == Ptr("frame", FRAME_STATE_OFF):
                state_expr = apply_op(state_expr, mnem, str(src))
                state_updates.append(f"0x{insn.address:x}:{mnem}:{state_expr}")
                continue
            if ptr == Ptr("frame", FRAME_FLAGS_OFF):
                flags_expr = apply_op(flags_expr, mnem, str(src))
                flags_updates.append(f"0x{insn.address:x}:{mnem}:{flags_expr}")
                continue

        if dst.type == X86_OP_REG:
            if mnem == "mov" and len(ops) >= 2:
                src = ops[1]
                if src.type == X86_OP_REG and src.reg == X86_REG_RBP:
                    write_reg(insn, dst, Ptr("frame", 0), regs)
                else:
                    value = read_op(insn, src, regs, state_expr, flags_expr, byte_expr)
                    write_reg(insn, dst, value, regs)
                    if isinstance(value, str) and value.startswith(("b", "u16_", "u32_")):
                        ip_reads.append(f"0x{insn.address:x}:{value}")
                continue
            if mnem == "movzx" and len(ops) >= 2:
                value = read_op(insn, ops[1], regs, state_expr, flags_expr, byte_expr)
                write_reg(insn, dst, value, regs)
                if isinstance(value, str) and value.startswith(("b", "u16_", "u32_")):
                    ip_reads.append(f"0x{insn.address:x}:{value}")
                continue
            if mnem == "lea" and len(ops) >= 2:
                ptr = mem_ptr(insn, ops[1], regs)
                write_reg(insn, dst, ptr if ptr is not None else f"lea({insn.op_str})", regs)
                continue
            if mnem in {"add", "sub", "xor", "and", "or"} and len(ops) >= 2:
                update_reg_arith(insn, regs, state_expr, flags_expr, byte_expr)
                continue

        if dst.type == X86_OP_REG:
            regs.pop(reg_of(insn, dst), None)

    return {
        "entry": entry,
        "target": row.get("target", ""),
        "events": row.get("events", ""),
        "tail_site": row.get("tail_site", ""),
        "insns_seen": insn_count,
        "state_update_count": len(state_updates),
        "flag_update_count": len(flags_updates),
        "branch_count": len(branches),
        "ip_reads": ",".join(dict.fromkeys(ip_reads)),
        "state_updates": ";".join(state_updates),
        "final_state_expr": state_expr,
        "flag_updates": ";".join(flags_updates),
        "branches": ",".join(branches),
    }


def read_rows(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def main():
    parser = argparse.ArgumentParser(
        description="Statically slice symbolic VM state/flag updates from handler code."
    )
    parser.add_argument(
        "skeletons",
        nargs="?",
        default="dumps/vmtail-wide-1m-w16/vm_handler_skeletons.tsv",
    )
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--entries", default="", help="comma-separated dispatch entries to include")
    parser.add_argument("--window", type=lambda value: int(value, 0), default=0x1200)
    args = parser.parse_args()

    selected = {item.strip() for item in args.entries.split(",") if item.strip()}
    data = Path(args.eac).read_bytes()
    md = make_disassembler()
    fields = [
        "entry", "target", "events", "tail_site", "insns_seen",
        "state_update_count", "flag_update_count", "branch_count",
        "ip_reads", "state_updates", "final_state_expr", "flag_updates", "branches",
    ]
    print("\t".join(fields))
    for row in read_rows(args.skeletons):
        if selected and row.get("entry", "") not in selected:
            continue
        result = slice_row(md, data, row, args.window)
        if result is None:
            continue
        print("\t".join(str(result.get(field, "")) for field in fields))


if __name__ == "__main__":
    main()
