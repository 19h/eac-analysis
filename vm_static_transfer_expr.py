#!/usr/bin/env python3
import argparse
import csv
import hashlib
from collections import Counter, defaultdict
from dataclasses import dataclass
from pathlib import Path

from capstone.x86_const import X86_OP_IMM, X86_OP_MEM, X86_OP_REG, X86_REG_RBP, X86_REG_RIP

from vm_state_static_validate import (
    FRAME_BYTE_OFF,
    FRAME_FLAGS_OFF,
    FRAME_IP_OFF,
    FRAME_STATE_OFF,
    FRAME_TABLE_OFF,
    MASK32,
    Ptr,
    Unknown,
    branch_taken,
    cmp_zf,
    disassemble_region,
    eval_bin,
    is_unknown,
    make_disassembler,
    mask_for_size,
    mem_ptr,
    parse_int,
    read_skeletons,
    read_trace_rows,
    reg_of,
)
from vm_static_dispatch_validate import (
    eval_shift,
    parse_delta,
    read_dispatch_table,
    read_op as read_concrete_op,
    write_op as write_concrete_op,
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
for REG_IDX in range(8, 16):
    REG_ALIASES[f"r{REG_IDX}b"] = f"r{REG_IDX}"
    REG_ALIASES[f"r{REG_IDX}w"] = f"r{REG_IDX}"
    REG_ALIASES[f"r{REG_IDX}d"] = f"r{REG_IDX}"
    REG_ALIASES[f"r{REG_IDX}"] = f"r{REG_IDX}"


@dataclass(frozen=True)
class SymPtr:
    kind: str
    off: int = 0
    index: str = ""
    scale: int = 1


@dataclass(frozen=True)
class SymTarget:
    slot: str


def clip(text, max_len):
    if len(text) <= max_len:
        return text
    digest = hashlib.sha256(text.encode()).hexdigest()[:16]
    keep = max(16, max_len - 21)
    return f"{text[:keep]}...#{digest}"


def path_hash(path):
    return hashlib.sha256(";".join(path).encode()).hexdigest()[:16]


def fmt_imm(value):
    value &= 0xffffffffffffffff
    if value <= 0xffffffff:
        return f"0x{value:x}"
    return f"-0x{((-value) & 0xffffffffffffffff):x}"


def wrap(text):
    if text.startswith(("0x", "-0x", "state", "flags", "byte", "b", "u16_", "u32_", "IP[", "F[", "T[")):
        return text
    if text.startswith("(") and text.endswith(")"):
        return text
    return f"({text})"


def fmt_sym(value):
    if isinstance(value, int):
        return fmt_imm(value)
    if isinstance(value, SymPtr):
        return fmt_ptr(value)
    if isinstance(value, SymTarget):
        return f"T[{value.slot}]"
    if isinstance(value, Ptr):
        return f"{value.kind}+0x{value.off:x}" if value.off else value.kind
    if isinstance(value, Unknown):
        return f"?{value.reason}"
    return str(value)


def merge_expr(left, op, right, max_len):
    left = fmt_sym(left)
    right = fmt_sym(right)
    if left == "0x0" and op in {"+", "^", "|"}:
        return right
    if right == "0x0" and op in {"+", "-", "^", "|"}:
        return left
    if left == right and op in {"^", "-"}:
        return "0x0"
    return clip(f"{wrap(left)} {op} {wrap(right)}", max_len)


def add_index(base, extra, sign, max_len):
    extra = fmt_sym(extra)
    if extra == "0x0":
        return base
    if not base:
        return extra if sign > 0 else merge_expr("0x0", "-", extra, max_len)
    return merge_expr(base, "+" if sign > 0 else "-", extra, max_len)


def ptr_add(ptr, value, sign, max_len):
    if isinstance(value, str) and value.startswith("0x"):
        try:
            value = int(value, 0)
        except ValueError:
            pass
    if isinstance(value, int):
        return SymPtr(ptr.kind, ptr.off + sign * value, ptr.index, ptr.scale)
    return SymPtr(ptr.kind, ptr.off, add_index(ptr.index, value, sign, max_len), ptr.scale)


def fmt_ptr(ptr):
    pieces = [ptr.kind]
    if ptr.off:
        sign = "+" if ptr.off >= 0 else "-"
        pieces.append(f"{sign}0x{abs(ptr.off):x}")
    if ptr.index:
        if ptr.scale == 1:
            pieces.append(f"+{wrap(ptr.index)}")
        else:
            pieces.append(f"+{wrap(ptr.index)}*{ptr.scale}")
    return "".join(pieces)


def ptr_offset_expr(ptr, max_len):
    expr = ptr.index
    if ptr.scale != 1 and expr:
        expr = clip(f"{wrap(expr)}*{ptr.scale}", max_len)
    if ptr.off:
        off = fmt_imm(abs(ptr.off))
        if not expr:
            expr = fmt_imm(ptr.off)
        elif ptr.off > 0:
            expr = merge_expr(expr, "+", off, max_len)
        else:
            expr = merge_expr(expr, "-", off, max_len)
    return expr or "0x0"


def sym_mem_ptr(insn, op, regs, max_len):
    if op.type != X86_OP_MEM:
        return None
    mem = op.mem
    if mem.base == X86_REG_RIP:
        return None

    if mem.base == X86_REG_RBP:
        base_ptr = SymPtr("frame", 0)
    else:
        base_ptr = regs.get(reg_name(insn, mem.base), None)
    if not isinstance(base_ptr, SymPtr):
        return None

    ptr = SymPtr(base_ptr.kind, base_ptr.off + mem.disp, base_ptr.index, base_ptr.scale)
    if mem.index:
        index = regs.get(reg_name(insn, mem.index), reg_name(insn, mem.index))
        index_text = fmt_sym(index)
        if mem.scale != 1:
            index_text = clip(f"{wrap(index_text)}*{mem.scale}", max_len)
        ptr = SymPtr(ptr.kind, ptr.off, add_index(ptr.index, index_text, 1, max_len), 1)
    return ptr


def reg_name(insn, reg_id):
    if not reg_id:
        return ""
    name = insn.reg_name(reg_id)
    return REG_ALIASES.get(name, name)


def read_sym_mem(insn, op, regs, frame_expr, max_len):
    ptr = sym_mem_ptr(insn, op, regs, max_len)
    if ptr is None:
        return f"mem[{insn.op_str}]"
    size = op.size or 8
    if ptr.kind == "frame":
        if ptr.off == FRAME_IP_OFF and size == 8:
            index = "" if frame_expr["ip_delta_expr"] == "0x0" else frame_expr["ip_delta_expr"]
            return SymPtr("ip", int(frame_expr["ip_delta_const"]), index)
        if ptr.off == FRAME_TABLE_OFF and size == 8:
            return SymPtr("table", 0)
        if ptr.off == FRAME_STATE_OFF:
            return frame_expr["state"]
        if ptr.off == FRAME_FLAGS_OFF:
            return frame_expr["flags"]
        if ptr.off == FRAME_BYTE_OFF:
            return frame_expr["byte"]
        return f"F[0x{ptr.off:x}]"
    if ptr.kind == "ip":
        off = ptr_offset_expr(ptr, max_len)
        if ptr.index == "":
            off_num = ptr.off
            if size == 1:
                return f"b{off_num}"
            if size == 2:
                return f"u16_{off_num}"
            if size == 4:
                return f"u32_{off_num}"
        return f"IP[{off}]/{size}"
    if ptr.kind == "table":
        return SymTarget(ptr_offset_expr(ptr, max_len))
    return f"{fmt_ptr(ptr)}/{size}"


def read_sym_op(insn, op, regs, frame_expr, max_len):
    if op.type == X86_OP_IMM:
        return fmt_imm(op.imm)
    if op.type == X86_OP_REG:
        return regs.get(reg_name(insn, op.reg), reg_name(insn, op.reg))
    if op.type == X86_OP_MEM:
        return read_sym_mem(insn, op, regs, frame_expr, max_len)
    return insn.op_str


def write_sym_op(insn, op, value, regs, frame_expr, max_len):
    if op.type == X86_OP_REG:
        reg = reg_name(insn, op.reg)
        if reg:
            regs[reg] = value
            return True
        return False
    if op.type == X86_OP_MEM:
        ptr = sym_mem_ptr(insn, op, regs, max_len)
        if ptr is None:
            return False
        if ptr.kind == "frame" and ptr.off == FRAME_IP_OFF:
            if isinstance(value, SymPtr) and value.kind == "ip":
                frame_expr["ip_delta_const"] = value.off
                frame_expr["ip_delta_expr"] = ptr_offset_expr(value, max_len)
                return True
            return False
        if ptr.kind == "frame" and ptr.off == FRAME_STATE_OFF:
            frame_expr["state"] = fmt_sym(value)
            return True
        if ptr.kind == "frame" and ptr.off == FRAME_FLAGS_OFF:
            frame_expr["flags"] = fmt_sym(value)
            return True
        if ptr.kind == "frame" and ptr.off == FRAME_BYTE_OFF:
            frame_expr["byte"] = fmt_sym(value)
            return True
        return True
    return False


def apply_sym_bin(mnemonic, left, right, size, max_len):
    if mnemonic in {"add", "sub"} and isinstance(left, SymPtr):
        sign = 1 if mnemonic == "add" else -1
        return ptr_add(left, right, sign, max_len)
    if mnemonic == "xor" and fmt_sym(left) == fmt_sym(right):
        return "0x0"
    if mnemonic == "sub" and fmt_sym(left) == fmt_sym(right):
        return "0x0"
    op_map = {
        "add": "+",
        "sub": "-",
        "xor": "^",
        "and": "&",
        "or": "|",
        "shl": "<<",
        "shr": ">>",
    }
    expr = merge_expr(left, op_map.get(mnemonic, mnemonic), right, max_len)
    if size and size < 8 and mnemonic not in {"shl", "shr"}:
        return clip(f"mask{size * 8}({expr})", max_len)
    return expr


def execute(insns_by_addr, start, row, table, target_to_entry, max_steps, max_expr_len):
    ip_bytes = bytes.fromhex(row["bytes"])
    frame = {
        "state": parse_int(row["pre_state"]) & MASK32,
        "flags": parse_int(row.get("pre_flags", "0x0") or "0x0") & MASK32,
        "byte": parse_int(row.get("pre_byte", "0x0") or "0x0") & 0xff,
        "ip_delta": 0,
    }
    regs = {"rbp": Ptr("frame", 0)}
    sym_regs = {"rbp": SymPtr("frame", 0)}
    frame_expr = {
        "state": "state0",
        "flags": "flags0",
        "byte": "byte0",
        "ip_delta_const": 0,
        "ip_delta_expr": "0x0",
    }
    pc = start
    zf = None
    steps = 0
    unknown = 0
    branch_unknown = 0
    path = []

    while steps < max_steps:
        insn = insns_by_addr.get(pc)
        if insn is None:
            return None, None, frame["ip_delta"], "falloff", "", "", frame_expr["ip_delta_expr"], steps, unknown, branch_unknown, path
        steps += 1
        mnem = insn.mnemonic
        ops = insn.operands
        next_pc = insn.address + insn.size

        if mnem == "jmp":
            if ops and ops[0].type == X86_OP_IMM and ops[0].imm in insns_by_addr:
                pc = ops[0].imm
                continue
            value = read_concrete_op(insn, ops[0], regs, frame, ip_bytes, table) if ops else Unknown("jmp")
            sym_value = read_sym_op(insn, ops[0], sym_regs, frame_expr, max_expr_len) if ops else "?jmp"
            slot_expr = sym_value.slot if isinstance(sym_value, SymTarget) else ""
            target_expr = fmt_sym(sym_value)
            if isinstance(value, int):
                return (
                    target_to_entry.get(value),
                    value,
                    frame["ip_delta"],
                    "ok",
                    target_expr,
                    slot_expr,
                    frame_expr["ip_delta_expr"],
                    steps,
                    unknown,
                    branch_unknown,
                    path,
                )
            return None, None, frame["ip_delta"], "unknown_target", target_expr, slot_expr, frame_expr["ip_delta_expr"], steps, unknown + 1, branch_unknown, path

        taken = branch_taken(mnem, zf)
        if taken is not None:
            path.append(f"0x{insn.address:x}:{mnem}:{1 if taken else 0}")
            pc = ops[0].imm if taken and ops and ops[0].type == X86_OP_IMM else next_pc
            continue
        if mnem.startswith("j") and mnem != "jmp":
            path.append(f"0x{insn.address:x}:{mnem}:?")
            branch_unknown += 1
            pc = next_pc
            continue

        if mnem in {"cmp", "test"} and len(ops) >= 2:
            left = read_concrete_op(insn, ops[0], regs, frame, ip_bytes, table)
            right = read_concrete_op(insn, ops[1], regs, frame, ip_bytes, table)
            zf = cmp_zf(mnem, left, right, ops[0].size or ops[1].size or 8)
            if zf is None:
                unknown += 1
            pc = next_pc
            continue

        if not ops:
            pc = next_pc
            continue

        if mnem in {"mov", "movabs", "movzx"} and len(ops) >= 2:
            value = read_concrete_op(insn, ops[1], regs, frame, ip_bytes, table)
            sym_value = read_sym_op(insn, ops[1], sym_regs, frame_expr, max_expr_len)
            if mnem == "movzx":
                sym_value = fmt_sym(sym_value)
            if not write_concrete_op(insn, ops[0], value, regs, frame):
                unknown += 1
            if not write_sym_op(insn, ops[0], sym_value, sym_regs, frame_expr, max_expr_len):
                unknown += 1
            pc = next_pc
            continue

        if mnem == "lea" and len(ops) >= 2:
            ptr = mem_ptr(insn, ops[1], regs)
            sym_ptr = sym_mem_ptr(insn, ops[1], sym_regs, max_expr_len)
            if not write_concrete_op(insn, ops[0], ptr if ptr is not None else Unknown("lea"), regs, frame):
                unknown += 1
            if not write_sym_op(insn, ops[0], sym_ptr if sym_ptr is not None else f"lea({insn.op_str})", sym_regs, frame_expr, max_expr_len):
                unknown += 1
            pc = next_pc
            continue

        if mnem in {"add", "sub", "xor", "and", "or", "shl", "shr"} and len(ops) >= 2:
            dst = read_concrete_op(insn, ops[0], regs, frame, ip_bytes, table)
            src = read_concrete_op(insn, ops[1], regs, frame, ip_bytes, table)
            sym_dst = read_sym_op(insn, ops[0], sym_regs, frame_expr, max_expr_len)
            sym_src = read_sym_op(insn, ops[1], sym_regs, frame_expr, max_expr_len)
            if mnem == "xor" and ops[0].type == X86_OP_REG and ops[1].type == X86_OP_REG and ops[0].reg == ops[1].reg:
                value = 0
                sym_value = "0x0"
            elif mnem == "sub" and ops[0].type == X86_OP_REG and ops[1].type == X86_OP_REG and ops[0].reg == ops[1].reg:
                value = 0
                sym_value = "0x0"
            elif mnem in {"shl", "shr"}:
                value = eval_shift(mnem, dst, src, ops[0].size or 8)
                sym_value = apply_sym_bin(mnem, sym_dst, sym_src, ops[0].size or 8, max_expr_len)
            else:
                value = eval_bin(mnem, dst, src, ops[0].size or 8)
                sym_value = apply_sym_bin(mnem, sym_dst, sym_src, ops[0].size or 8, max_expr_len)
            if is_unknown(value):
                unknown += 1
            if not write_concrete_op(insn, ops[0], value, regs, frame):
                unknown += 1
            if not write_sym_op(insn, ops[0], sym_value, sym_regs, frame_expr, max_expr_len):
                unknown += 1
            if mnem in {"and", "or", "xor", "sub"}:
                zf = (value & mask_for_size(ops[0].size or 8)) == 0 if isinstance(value, int) else None
            pc = next_pc
            continue

        if ops[0].type == X86_OP_REG:
            regs[reg_of(insn, ops[0])] = Unknown(mnem)
            sym_regs[reg_name(insn, ops[0].reg)] = f"?{mnem}"
        pc = next_pc

    return None, None, frame["ip_delta"], "step_limit", "", "", frame_expr["ip_delta_expr"], steps, unknown, branch_unknown, path


def top_exprs(counter, max_items):
    parts = []
    for expr, count in counter.most_common(max_items):
        parts.append(f"{count}={expr}")
    return ";".join(parts)


def top_counter(counter, max_items):
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(max_items))


def main():
    parser = argparse.ArgumentParser(
        description="Extract path-sensitive symbolic VM dispatch target and IP-advance expressions."
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
    parser.add_argument("--max-expr-len", type=int, default=240)
    parser.add_argument("--top", type=int, default=3)
    parser.add_argument("--by-path", action="store_true")
    parser.add_argument("--max-path-len", type=int, default=260)
    args = parser.parse_args()

    eac = Path(args.eac).read_bytes()
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    md = make_disassembler()
    skeletons = read_skeletons(args.skeletons)
    decoded = {}
    counts = defaultdict(int)
    stats = defaultdict(Counter)
    targets = {}
    target_exprs = defaultdict(Counter)
    slot_exprs = defaultdict(Counter)
    ip_exprs = defaultdict(Counter)
    path_stats = defaultdict(Counter)
    path_target_exprs = defaultdict(Counter)
    path_slot_exprs = defaultdict(Counter)
    path_ip_exprs = defaultdict(Counter)
    path_actual_targets = defaultdict(Counter)
    path_texts = {}

    for row in read_trace_rows(args.trace):
        if row.get("byte_status") != "exact" or not row.get("pre_state"):
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
            _insns, by_addr = disassemble_region(md, eac, target, stop)
            decoded[source] = (target, by_addr)
        target, by_addr = decoded[source]
        pred_entry, pred_target, pred_delta, status, target_expr, slot_expr, ip_expr, steps, unknown, branch_unknown, path = execute(
            by_addr, target, row, table, target_to_entry, args.max_steps, args.max_expr_len
        )
        actual_entry = int(row["target_entry"])
        actual_target = parse_int(row["target"])
        actual_delta = parse_delta(row["delta"])
        target_ok = status == "ok" and pred_entry == actual_entry and pred_target == actual_target
        ip_ok = pred_delta == actual_delta

        bucket = stats[source]
        bucket["events"] += 1
        bucket["steps"] += steps
        bucket["unknown_ops"] += unknown
        bucket["branch_unknown"] += branch_unknown
        bucket[f"status_{status}"] += 1
        if target_ok:
            bucket["target_matched"] += 1
        else:
            bucket["target_mismatched"] += 1
            if "example" not in bucket:
                bucket["example"] = 1
                bucket["example_status"] = status
                bucket["example_pred_entry"] = -1 if pred_entry is None else pred_entry
                bucket["example_actual_entry"] = actual_entry
                bucket["example_bytes"] = row.get("bytes", "")
                bucket["example_target_expr"] = target_expr
        if ip_ok:
            bucket["ip_matched"] += 1
        else:
            bucket["ip_mismatched"] += 1

        if target_expr:
            target_exprs[source][target_expr] += 1
        if slot_expr:
            slot_exprs[source][slot_expr] += 1
        if ip_expr:
            ip_exprs[source][ip_expr] += 1
        digest = path_hash(path)
        path_key = (source, digest)
        path_bucket = path_stats[path_key]
        path_bucket["events"] += 1
        path_bucket["target_matched" if target_ok else "target_mismatched"] += 1
        path_bucket["ip_matched" if ip_ok else "ip_mismatched"] += 1
        path_bucket[f"status_{status}"] += 1
        path_bucket["source_target"] = skel.get("target", "")
        if target_expr:
            path_target_exprs[path_key][target_expr] += 1
        if slot_expr:
            path_slot_exprs[path_key][slot_expr] += 1
        if ip_expr:
            path_ip_exprs[path_key][ip_expr] += 1
        path_actual_targets[path_key][f"{actual_entry}@0x{actual_target:x}"] += 1
        path_texts[path_key] = ";".join(path) if path else "-"
        targets[source] = skel.get("target", "")
        counts[source] += 1

    if args.by_path:
        print(
            "source_entry\tsource_target\tpath_hash\tevents\ttarget_matched_events\t"
            "target_coverage_pct\tip_matched_events\tip_coverage_pct\tstatuses\t"
            "unique_target_exprs\tunique_slot_exprs\tunique_ip_exprs\t"
            "top_target_exprs\ttop_slot_exprs\ttop_ip_exprs\ttop_actual_targets\tpath"
        )
        for (source, digest), bucket in sorted(
            path_stats.items(), key=lambda item: (-item[1]["events"], int(item[0][0]), item[0][1])
        ):
            events = bucket["events"]
            statuses = ",".join(
                f"{key[7:]}:{value}" for key, value in sorted(bucket.items())
                if key.startswith("status_")
            )
            print(
                f"{source}\t{bucket.get('source_target', '')}\t{digest}\t{events}\t"
                f"{bucket['target_matched']}\t"
                f"{bucket['target_matched'] * 100.0 / events if events else 0.0:.1f}\t"
                f"{bucket['ip_matched']}\t"
                f"{bucket['ip_matched'] * 100.0 / events if events else 0.0:.1f}\t"
                f"{statuses}\t{len(path_target_exprs[(source, digest)])}\t"
                f"{len(path_slot_exprs[(source, digest)])}\t"
                f"{len(path_ip_exprs[(source, digest)])}\t"
                f"{top_exprs(path_target_exprs[(source, digest)], args.top)}\t"
                f"{top_exprs(path_slot_exprs[(source, digest)], args.top)}\t"
                f"{top_exprs(path_ip_exprs[(source, digest)], args.top)}\t"
                f"{top_counter(path_actual_targets[(source, digest)], args.top)}\t"
                f"{clip(path_texts[(source, digest)], args.max_path_len)}"
            )
        return

    print(
        "source_entry\tsource_target\tevents\ttarget_matched_events\t"
        "target_coverage_pct\ttarget_mismatched_events\tip_matched_events\t"
        "ip_coverage_pct\tip_mismatched_events\tunknown_ops\tbranch_unknown\t"
        "avg_steps\tstatuses\tunique_target_exprs\tunique_slot_exprs\t"
        "unique_ip_exprs\ttop_target_exprs\ttop_slot_exprs\ttop_ip_exprs\t"
        "example_status\texample_pred_entry\texample_actual_entry\t"
        "example_bytes\texample_target_expr"
    )
    for source, bucket in sorted(stats.items(), key=lambda item: (-item[1]["events"], int(item[0]))):
        events = bucket["events"]
        target_matched = bucket["target_matched"]
        ip_matched = bucket["ip_matched"]
        statuses = ",".join(
            f"{key[7:]}:{value}" for key, value in sorted(bucket.items())
            if key.startswith("status_")
        )
        print(
            f"{source}\t{targets.get(source, '')}\t{events}\t{target_matched}\t"
            f"{target_matched * 100.0 / events if events else 0.0:.1f}\t"
            f"{bucket['target_mismatched']}\t{ip_matched}\t"
            f"{ip_matched * 100.0 / events if events else 0.0:.1f}\t"
            f"{bucket['ip_mismatched']}\t{bucket['unknown_ops']}\t"
            f"{bucket['branch_unknown']}\t{bucket['steps'] / events if events else 0.0:.1f}\t"
            f"{statuses}\t{len(target_exprs[source])}\t{len(slot_exprs[source])}\t"
            f"{len(ip_exprs[source])}\t{top_exprs(target_exprs[source], args.top)}\t"
            f"{top_exprs(slot_exprs[source], args.top)}\t"
            f"{top_exprs(ip_exprs[source], args.top)}\t"
            f"{bucket.get('example_status', '')}\t"
            f"{bucket.get('example_pred_entry', '')}\t"
            f"{bucket.get('example_actual_entry', '')}\t"
            f"{bucket.get('example_bytes', '')}\t"
            f"{bucket.get('example_target_expr', '')}"
        )


if __name__ == "__main__":
    main()
