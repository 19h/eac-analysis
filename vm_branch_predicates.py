#!/usr/bin/env python3
import argparse
import csv
import hashlib
import re
import sys
from collections import Counter, defaultdict
from dataclasses import dataclass
from pathlib import Path

from capstone.x86_const import X86_OP_IMM, X86_OP_MEM, X86_OP_REG

from vm_state_static_validate import (
    FRAME_BYTE_OFF,
    FRAME_FLAGS_OFF,
    FRAME_IP_OFF,
    FRAME_STATE_OFF,
    FRAME_TABLE_OFF,
    LowBits,
    MASK32,
    MASK64,
    Ptr,
    Unknown,
    branch_taken,
    cmp_zf,
    concrete_compare_value,
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
from vm_static_dispatch_validate import eval_shift, parse_delta, read_dispatch_table


FIELD_RE = re.compile(r"\b([a-z][a-z0-9_]*)=0x([0-9a-f]+)")
COUNT_RE = re.compile(r"\bcount=([0-9]+)")
TRACE_RE = re.compile(r"^\[VMTAIL\]")
REG_NAMES = {
    "rax", "rbx", "rcx", "rdx", "rsi", "rdi",
    "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15",
    "rbp", "rsp",
}


@dataclass(frozen=True)
class Tracked:
    value: object
    expr: str
    classes: frozenset


def clip(text, max_len):
    if len(text) <= max_len:
        return text
    digest = hashlib.sha256(text.encode()).hexdigest()[:12]
    keep = max(16, max_len - 17)
    return f"{text[:keep]}...#{digest}"


def fmt_value(value):
    if isinstance(value, int):
        return f"0x{value:x}"
    if isinstance(value, LowBits):
        return f"low{value.bits}(0x{value.value:x})"
    if isinstance(value, Ptr):
        sign = "+" if value.off >= 0 else "-"
        return f"{value.kind}{sign}0x{abs(value.off):x}"
    if isinstance(value, Unknown):
        return f"?{value.reason}"
    return str(value)


def tracked_unknown(reason, expr=None, classes=()):
    return Tracked(Unknown(reason), expr or f"?{reason}", frozenset({"unknown", *classes}))


def tracked_const(value, size=8):
    return Tracked(value & mask_for_size(size), f"0x{value & mask_for_size(size):x}", frozenset({"constant"}))


def tracked_seed_value(reg, value, fields):
    frame = fields.get("frame")
    table = fields.get("table")
    vm_ip = fields.get("vm_ip")
    image_base = None
    if frame is not None and fields.get("frame_off") is not None:
        image_base = frame - fields["frame_off"]

    classes = {"gpr_seed"}
    if frame is not None and frame - 0x4000 <= value < frame + 0x4000:
        classes.add("frame_pointer")
        return Tracked(Ptr("frame", value - frame), f"seed({reg})", frozenset(classes))
    if table is not None and table <= value < table + 360 * 8:
        classes.add("dispatch_table_pointer")
        return Tracked(Ptr("table", value - table), f"seed({reg})", frozenset(classes))
    if vm_ip is not None and vm_ip - 0x10000 <= value < vm_ip + 0x10000:
        classes.add("vm_ip_pointer")
        return Tracked(Ptr("ip", value - vm_ip), f"seed({reg})", frozenset(classes))
    if image_base is not None and image_base <= value < image_base + 0x650000:
        classes.add("image_offset")
        return Tracked(value - image_base, f"seed({reg})", frozenset(classes))
    return Tracked(value, f"seed({reg})", frozenset(classes))


def parse_gpr_fields(line):
    fields = {name: int(value_s, 16) for name, value_s in FIELD_RE.findall(line)}
    count = COUNT_RE.search(line)
    if count:
        fields["count"] = int(count.group(1), 10)
    return fields


def load_gpr_seeds(path):
    if not path:
        return {}
    seeds = {}
    with Path(path).open(errors="replace") as handle:
        for line in handle:
            if not TRACE_RE.search(line):
                continue
            fields = parse_gpr_fields(line)
            count = fields.get("count")
            if count is None:
                continue
            regs = {
                reg: tracked_seed_value(reg, fields[reg], fields)
                for reg in REG_NAMES
                if reg in fields
            }
            frame_mem = {}
            for name, value in fields.items():
                if not name.startswith("fs"):
                    continue
                off_s = name[2:]
                if off_s.startswith("0x"):
                    off_s = off_s[2:]
                try:
                    off = int(off_s, 16)
                except ValueError:
                    continue
                frame_mem[(off, 8)] = Tracked(
                    value,
                    f"seed_frame(0x{off:x})",
                    frozenset({"frame_scratch_seed"}),
                )
            if frame_mem:
                regs["__frame_mem__"] = frame_mem
            # Instruction row N starts at the previous VMTAIL event's exit state.
            seeds[str(count + 1)] = regs
    return seeds


def combine_expr(mnemonic, left, right, max_expr_len):
    op = {"add": "+", "sub": "-", "xor": "^", "and": "&", "or": "|", "shl": "<<", "shr": ">>"}.get(mnemonic, mnemonic)
    return clip(f"({left.expr} {op} {right.expr})", max_expr_len)


def narrow_tracked(item, size, op_name, max_expr_len):
    if size <= 0 or size >= 8:
        return item
    mask = mask_for_size(size)
    bits = size * 8
    classes = set(item.classes)
    value = item.value
    expr = item.expr
    if isinstance(value, int):
        value &= mask
    elif isinstance(value, Ptr) and value.kind == "frame" and size == 1:
        classes.add("frame_ptr_low8")
        expr = f"low8({expr})"
    elif isinstance(value, Ptr):
        classes.add("ptr_partial")
        expr = f"low{bits}({expr})"
    elif isinstance(value, Unknown):
        expr = f"low{bits}({expr})"
    return Tracked(value, clip(expr, max_expr_len), frozenset(classes))


def concrete_regs(regs):
    return {reg: tracked.value for reg, tracked in regs.items()}


def read_tracked_frame_mem(frame_mem, off, size):
    if not frame_mem:
        return tracked_unknown(f"frame_{off:x}", f"frame+0x{off:x}", {"unknown_frame_field"})
    exact = frame_mem.get((off, size))
    if exact is not None:
        return exact
    for (base, stored_size), value in frame_mem.items():
        if base != off or stored_size < size:
            continue
        if isinstance(value.value, int):
            narrowed = value.value & mask_for_size(size)
            return Tracked(narrowed, value.expr, value.classes)
        if isinstance(value.value, Ptr) and size <= stored_size:
            return value
    return tracked_unknown(f"frame_{off:x}", f"frame+0x{off:x}", {"unknown_frame_field"})


def write_tracked_frame_mem(frame_mem, off, size, value):
    if frame_mem is None:
        return
    frame_mem[(off, size)] = value


def read_ip(data, off, size):
    if off < 0 or off + size > len(data):
        return tracked_unknown("ip_oob", f"ip[0x{off:x}:{size}]", {"vm_ip_read"})
    value = int.from_bytes(data[off:off + size], "little")
    return Tracked(value, f"u{size * 8}_{off}", frozenset({"vm_bytecode"}))


def read_table(table, off, size):
    if size != 8 or off < 0 or off % 8:
        return tracked_unknown("table_read", f"table+0x{off:x}", {"table_read"})
    entry = off // 8
    if entry < 0 or entry >= len(table):
        return tracked_unknown("table_oob", f"table[{entry}]", {"table_read"})
    return Tracked(table[entry], f"table[{entry}]", frozenset({"table_dispatch_target"}))


def read_mem_tracked(insn, op, regs, frame, frame_tracked, ip_bytes, table, frame_mem=None):
    ptr = mem_ptr(insn, op, concrete_regs(regs))
    if ptr is None:
        return tracked_unknown("mem_ptr", f"mem[{insn.op_str}]", {"unknown_memory_pointer"})
    size = op.size or 8
    if ptr.kind == "frame":
        if ptr.off == FRAME_IP_OFF and size == 8:
            return Tracked(Ptr("ip", frame["ip_delta"]), frame_tracked["ip_ptr"].expr, frozenset({"vm_ip_pointer"}))
        if ptr.off == FRAME_TABLE_OFF and size == 8:
            return Tracked(Ptr("table", 0), "dispatch_table", frozenset({"dispatch_table_pointer"}))
        if ptr.off == FRAME_STATE_OFF:
            return narrow_tracked(frame_tracked["state"], size, "state", 256)
        if ptr.off == FRAME_FLAGS_OFF:
            return narrow_tracked(frame_tracked["flags"], size, "flags", 256)
        if ptr.off == FRAME_BYTE_OFF:
            return narrow_tracked(frame_tracked["byte"], size, "vm_byte", 256)
        return read_tracked_frame_mem(frame_mem, ptr.off, size)
    if ptr.kind == "ip":
        return read_ip(ip_bytes, ptr.off, size)
    if ptr.kind == "table":
        return read_table(table, ptr.off, size)
    return tracked_unknown(ptr.kind, fmt_value(ptr), {"unknown_pointer_kind"})


def read_op_tracked(insn, op, regs, frame, frame_tracked, ip_bytes, table, max_expr_len, frame_mem=None):
    if op.type == X86_OP_IMM:
        return tracked_const(op.imm & MASK64, op.size or 8)
    if op.type == X86_OP_REG:
        reg = reg_of(insn, op)
        op_name = insn.reg_name(op.reg)
        if reg in regs:
            return narrow_tracked(regs[reg], op.size or 8, op_name, max_expr_len)
        return tracked_unknown(f"livein_{reg or op_name}", f"live_in({reg or op_name})", {"live_in_reg"})
    if op.type == X86_OP_MEM:
        return read_mem_tracked(insn, op, regs, frame, frame_tracked, ip_bytes, table, frame_mem)
    return tracked_unknown("op", insn.op_str)


def write_op_tracked(insn, op, item, regs, frame, frame_tracked, max_expr_len, frame_mem=None):
    if op.type == X86_OP_REG:
        reg = reg_of(insn, op)
        if not reg:
            return False
        value = item.value
        if isinstance(value, int):
            value &= mask_for_size(op.size or 8)
        regs[reg] = Tracked(value, clip(item.expr, max_expr_len), item.classes)
        return True
    if op.type == X86_OP_MEM:
        ptr = mem_ptr(insn, op, concrete_regs(regs))
        if ptr is None or is_unknown(item.value):
            return False
        if ptr == Ptr("frame", FRAME_IP_OFF):
            if isinstance(item.value, Ptr) and item.value.kind == "ip":
                frame["ip_delta"] = item.value.off
                frame_tracked["ip_ptr"] = Tracked(
                    item.value, clip(item.expr, max_expr_len), item.classes | frozenset({"vm_ip_pointer"})
                )
                return True
            return False
        if ptr == Ptr("frame", FRAME_STATE_OFF):
            frame["state"] = item.value & MASK32
            frame_tracked["state"] = Tracked(frame["state"], clip(item.expr, max_expr_len), item.classes | frozenset({"state"}))
            return True
        if ptr == Ptr("frame", FRAME_FLAGS_OFF):
            frame["flags"] = item.value & MASK32
            frame_tracked["flags"] = Tracked(frame["flags"], clip(item.expr, max_expr_len), item.classes | frozenset({"flags"}))
            return True
        if ptr == Ptr("frame", FRAME_BYTE_OFF):
            frame["byte"] = item.value & 0xff
            frame_tracked["byte"] = Tracked(frame["byte"], clip(item.expr, max_expr_len), item.classes | frozenset({"vm_byte"}))
            return True
        if ptr.kind == "frame":
            write_tracked_frame_mem(frame_mem, ptr.off, op.size or 8, item)
        return True
    return False


def eval_bin_tracked(mnemonic, left, right, size, max_expr_len):
    if mnemonic in {"shl", "shr"}:
        value = eval_shift(mnemonic, left.value, right.value, size)
    else:
        value = eval_bin(mnemonic, left.value, right.value, size)
    classes = set(left.classes) | set(right.classes)
    if is_unknown(value):
        classes.add("derived_unknown")
    if "live_in_reg" in classes and (set(left.classes) != {"live_in_reg"} or set(right.classes) != {"constant"}):
        classes.add("derived_live_in")
    return Tracked(value, combine_expr(mnemonic, left, right, max_expr_len), frozenset(classes))


def self_zero(insn, ops):
    return (
        len(ops) >= 2
        and ops[0].type == X86_OP_REG
        and ops[1].type == X86_OP_REG
        and ops[0].reg == ops[1].reg
        and insn.mnemonic in {"xor", "sub"}
    )


def classify_condition(condition, branch_mnemonic, outcome):
    if condition is None:
        return "missing_condition"
    if outcome is None and branch_mnemonic not in {"je", "jz", "jne", "jnz"}:
        return "unsupported_jcc"
    if condition["zf"] is not None:
        return "resolved"
    classes = set(condition["left"].classes) | set(condition["right"].classes)
    if "live_in_reg" in classes:
        return "derived_live_in" if "derived_live_in" in classes or "derived_unknown" in classes else "live_in_reg"
    if "gpr_seed" in classes:
        return "seeded_gpr_unresolved"
    if "unknown_memory_pointer" in classes:
        return "unknown_memory_pointer"
    if "unknown_frame_field" in classes:
        return "unknown_frame_field"
    if "vm_bytecode" in classes:
        return "vm_bytecode_unresolved"
    if "state" in classes or "flags" in classes or "vm_byte" in classes:
        return "state_unresolved"
    if "unknown" in classes:
        return "unknown_operand"
    return "unresolved"


def condition_text(condition, max_len):
    if condition is None:
        return "-"
    left = condition["left"]
    right = condition["right"]
    classes = ",".join(sorted(set(left.classes) | set(right.classes)))
    text = (
        f"0x{condition['site']:x}:{condition['mnemonic']}:{condition['op_str']}:"
        f"{left.expr}({fmt_value(left.value)}) ? {right.expr}({fmt_value(right.value)})"
        f":zf={condition['zf']}:{classes}"
    )
    return clip(text, max_len)


def update_branch(stats, source, target, insn, outcome, condition, steps, max_len):
    site = f"0x{insn.address:x}"
    key = (source, site, insn.mnemonic)
    bucket = stats[key]
    bucket["source_entry"] = source
    bucket["source_target"] = target
    bucket["branch_site"] = site
    bucket["branch_mnemonic"] = insn.mnemonic
    bucket["events"] += 1
    bucket["steps"] += steps
    if outcome is True:
        bucket["taken_events"] += 1
        outcome_s = "taken"
    elif outcome is False:
        bucket["not_taken_events"] += 1
        outcome_s = "not_taken"
    else:
        bucket["unknown_events"] += 1
        outcome_s = "unknown"
    pred_class = classify_condition(condition, insn.mnemonic, outcome)
    bucket["classes"][pred_class] += 1
    bucket["outcomes"][outcome_s] += 1
    if condition is None:
        bucket["condition_sites"]["-"] += 1
        bucket["condition_mnemonics"]["-"] += 1
        bucket["condition_ops"]["-"] += 1
        bucket["left_exprs"]["-"] += 1
        bucket["right_exprs"]["-"] += 1
        bucket["left_values"]["-"] += 1
        bucket["right_values"]["-"] += 1
        bucket["condition_texts"]["-"] += 1
        return
    left = condition["left"]
    right = condition["right"]
    bucket["condition_sites"][f"0x{condition['site']:x}"] += 1
    bucket["condition_mnemonics"][condition["mnemonic"]] += 1
    bucket["condition_ops"][condition["op_str"]] += 1
    bucket["left_exprs"][left.expr] += 1
    bucket["right_exprs"][right.expr] += 1
    bucket["left_values"][fmt_value(left.value)] += 1
    bucket["right_values"][fmt_value(right.value)] += 1
    bucket["zf"][str(condition["zf"])] += 1
    bucket["condition_texts"][condition_text(condition, max_len)] += 1


def execute(
    insns_by_addr,
    start,
    row,
    table,
    target_to_entry,
    max_steps,
    max_expr_len,
    stats,
    source,
    source_target,
    initial_regs=None,
):
    ip_bytes = bytes.fromhex(row["bytes"])
    frame = {
        "state": parse_int(row["pre_state"]) & MASK32,
        "flags": parse_int(row.get("pre_flags", "0x0") or "0x0") & MASK32,
        "byte": parse_int(row.get("pre_byte", "0x0") or "0x0") & 0xff,
        "ip_delta": 0,
    }
    frame_tracked = {
        "state": Tracked(frame["state"], "state0", frozenset({"state"})),
        "flags": Tracked(frame["flags"], "flags0", frozenset({"flags"})),
        "byte": Tracked(frame["byte"], "vm_byte0", frozenset({"vm_byte"})),
        "ip_ptr": Tracked(Ptr("ip", 0), "ip+0x0", frozenset({"vm_ip_pointer"})),
    }
    regs = dict(initial_regs or {})
    frame_mem = dict(regs.pop("__frame_mem__", {}))
    regs["rbp"] = Tracked(Ptr("frame", 0), "frame", frozenset({"frame_pointer"}))
    pc = start
    zf = None
    condition = None
    steps = 0
    unknown = 0
    branch_unknown = 0

    while steps < max_steps:
        insn = insns_by_addr.get(pc)
        if insn is None:
            return None, None, frame["ip_delta"], "falloff", steps, unknown, branch_unknown
        steps += 1
        mnem = insn.mnemonic
        ops = insn.operands
        next_pc = insn.address + insn.size

        if mnem == "jmp":
            if ops and ops[0].type == X86_OP_IMM and ops[0].imm in insns_by_addr:
                pc = ops[0].imm
                continue
            value = read_op_tracked(insn, ops[0], regs, frame, frame_tracked, ip_bytes, table, max_expr_len, frame_mem) if ops else tracked_unknown("jmp")
            if isinstance(value.value, int):
                return target_to_entry.get(value.value), value.value, frame["ip_delta"], "ok", steps, unknown, branch_unknown
            return None, None, frame["ip_delta"], "unknown_target", steps, unknown + 1, branch_unknown

        taken = branch_taken(mnem, zf)
        if taken is not None:
            update_branch(stats, source, source_target, insn, taken, condition, steps, max_expr_len)
            pc = ops[0].imm if taken and ops and ops[0].type == X86_OP_IMM else next_pc
            continue
        if mnem.startswith("j") and mnem != "jmp":
            update_branch(stats, source, source_target, insn, None, condition, steps, max_expr_len)
            branch_unknown += 1
            pc = next_pc
            continue

        if mnem in {"cmp", "test"} and len(ops) >= 2:
            left = read_op_tracked(insn, ops[0], regs, frame, frame_tracked, ip_bytes, table, max_expr_len, frame_mem)
            right = read_op_tracked(insn, ops[1], regs, frame, frame_tracked, ip_bytes, table, max_expr_len, frame_mem)
            size = ops[0].size or ops[1].size or 8
            zf = cmp_zf(mnem, left.value, right.value, size)
            if zf is None:
                unknown += 1
            condition = {
                "site": insn.address,
                "mnemonic": mnem,
                "op_str": insn.op_str,
                "left": left,
                "right": right,
                "size": size,
                "zf": zf,
            }
            pc = next_pc
            continue

        if not ops:
            pc = next_pc
            continue

        if mnem in {"mov", "movabs", "movzx"} and len(ops) >= 2:
            value = read_op_tracked(insn, ops[1], regs, frame, frame_tracked, ip_bytes, table, max_expr_len, frame_mem)
            if not write_op_tracked(insn, ops[0], value, regs, frame, frame_tracked, max_expr_len, frame_mem):
                unknown += 1
            pc = next_pc
            continue

        if mnem == "lea" and len(ops) >= 2:
            ptr = mem_ptr(insn, ops[1], concrete_regs(regs))
            if ptr is None:
                value = tracked_unknown("lea", f"lea({insn.op_str})", {"unknown_memory_pointer"})
            else:
                value = Tracked(ptr, f"{ptr.kind}+0x{ptr.off:x}", frozenset({f"{ptr.kind}_pointer"}))
            if not write_op_tracked(insn, ops[0], value, regs, frame, frame_tracked, max_expr_len, frame_mem):
                unknown += 1
            pc = next_pc
            continue

        if mnem in {"add", "sub", "xor", "and", "or", "shl", "shr"} and len(ops) >= 2:
            left = read_op_tracked(insn, ops[0], regs, frame, frame_tracked, ip_bytes, table, max_expr_len, frame_mem)
            right = read_op_tracked(insn, ops[1], regs, frame, frame_tracked, ip_bytes, table, max_expr_len, frame_mem)
            if self_zero(insn, ops):
                value = Tracked(0, "0x0", frozenset({"constant"}))
            else:
                value = eval_bin_tracked(mnem, left, right, ops[0].size or 8, max_expr_len)
            if is_unknown(value.value):
                unknown += 1
            if not write_op_tracked(insn, ops[0], value, regs, frame, frame_tracked, max_expr_len, frame_mem):
                unknown += 1
            concrete_value = concrete_compare_value(value.value, ops[0].size or 8)
            if concrete_value is not None and mnem in {"and", "or", "xor", "sub"}:
                zf = concrete_value == 0
                condition = {
                    "site": insn.address,
                    "mnemonic": mnem,
                    "op_str": insn.op_str,
                    "left": value,
                    "right": tracked_const(0, ops[0].size or 8),
                    "size": ops[0].size or 8,
                    "zf": zf,
                }
            elif mnem in {"and", "or", "xor", "sub"}:
                zf = None
                condition = {
                    "site": insn.address,
                    "mnemonic": mnem,
                    "op_str": insn.op_str,
                    "left": value,
                    "right": tracked_const(0, ops[0].size or 8),
                    "size": ops[0].size or 8,
                    "zf": None,
                }
            pc = next_pc
            continue

        if ops[0].type == X86_OP_REG:
            reg = reg_of(insn, ops[0])
            regs[reg] = tracked_unknown(mnem, f"?{mnem}({insn.op_str})", {f"unhandled_{mnem}"})
        pc = next_pc

    return None, None, frame["ip_delta"], "step_limit", steps, unknown, branch_unknown


def fmt_counter(counter, limit, max_len=None):
    parts = []
    for key, value in counter.most_common(limit):
        label = clip(str(key), max_len) if max_len else str(key)
        parts.append(f"{label}:{value}")
    return ",".join(parts)


def make_bucket():
    return {
        "events": 0,
        "steps": 0,
        "taken_events": 0,
        "not_taken_events": 0,
        "unknown_events": 0,
        "classes": Counter(),
        "outcomes": Counter(),
        "condition_sites": Counter(),
        "condition_mnemonics": Counter(),
        "condition_ops": Counter(),
        "left_exprs": Counter(),
        "right_exprs": Counter(),
        "left_values": Counter(),
        "right_values": Counter(),
        "zf": Counter(),
        "condition_texts": Counter(),
    }


def emit_tsv(stats, args):
    fieldnames = [
        "source_entry",
        "source_target",
        "branch_site",
        "branch_mnemonic",
        "events",
        "taken_events",
        "not_taken_events",
        "unknown_events",
        "unknown_pct",
        "avg_steps_to_branch",
        "top_predicate_classes",
        "condition_sites",
        "condition_mnemonics",
        "top_condition_ops",
        "top_left_exprs",
        "top_right_exprs",
        "top_left_values",
        "top_right_values",
        "zf_values",
        "top_conditions",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fieldnames, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for (_source, _site, _mnem), bucket in sorted(
        stats.items(), key=lambda item: (-item[1]["unknown_events"], -item[1]["events"], int(item[1]["source_entry"]))
    ):
        events = bucket["events"]
        writer.writerow(
            {
                "source_entry": bucket["source_entry"],
                "source_target": bucket["source_target"],
                "branch_site": bucket["branch_site"],
                "branch_mnemonic": bucket["branch_mnemonic"],
                "events": events,
                "taken_events": bucket["taken_events"],
                "not_taken_events": bucket["not_taken_events"],
                "unknown_events": bucket["unknown_events"],
                "unknown_pct": f"{bucket['unknown_events'] * 100.0 / events if events else 0.0:.1f}",
                "avg_steps_to_branch": f"{bucket['steps'] / events if events else 0.0:.1f}",
                "top_predicate_classes": fmt_counter(bucket["classes"], args.top),
                "condition_sites": fmt_counter(bucket["condition_sites"], args.top),
                "condition_mnemonics": fmt_counter(bucket["condition_mnemonics"], args.top),
                "top_condition_ops": fmt_counter(bucket["condition_ops"], args.top, args.max_cell_len),
                "top_left_exprs": fmt_counter(bucket["left_exprs"], args.top, args.max_cell_len),
                "top_right_exprs": fmt_counter(bucket["right_exprs"], args.top, args.max_cell_len),
                "top_left_values": fmt_counter(bucket["left_values"], args.top, args.max_cell_len),
                "top_right_values": fmt_counter(bucket["right_values"], args.top, args.max_cell_len),
                "zf_values": fmt_counter(bucket["zf"], args.top),
                "top_conditions": fmt_counter(bucket["condition_texts"], args.top, args.max_cell_len),
            }
        )


def emit_markdown(stats, args):
    total_events = sum(bucket["events"] for bucket in stats.values())
    total_unknown = sum(bucket["unknown_events"] for bucket in stats.values())
    classes = Counter()
    for bucket in stats.values():
        for key, value in bucket["classes"].items():
            if key != "resolved":
                classes[key] += value
    print("# VM Branch Predicate Catalog")
    print()
    print(f"- branch events: `{total_events}`")
    print(f"- unknown branch events: `{total_unknown}`")
    print(f"- unknown classes: `{fmt_counter(classes, args.top)}`")
    print()
    print("## Top Unknown Branches")
    print()
    for (_source, _site, _mnem), bucket in sorted(
        stats.items(), key=lambda item: (-item[1]["unknown_events"], -item[1]["events"], int(item[1]["source_entry"]))
    )[: args.markdown_limit]:
        if not bucket["unknown_events"]:
            continue
        print(
            f"- entry `{bucket['source_entry']}` branch `{bucket['branch_site']}:{bucket['branch_mnemonic']}`: "
            f"`{bucket['unknown_events']}/{bucket['events']}` unknown; "
            f"class `{fmt_counter(bucket['classes'], 3)}`"
        )
        print(f"  condition: `{fmt_counter(bucket['condition_texts'], 1, args.max_cell_len)}`")


def parse_counter_text(text):
    counter = Counter()
    for part in (text or "").split(","):
        if not part:
            continue
        key, sep, value = part.rpartition(":")
        if not sep:
            continue
        try:
            counter[key] += int(value)
        except ValueError:
            continue
    return counter


def emit_markdown_from_tsv(path, args):
    rows = list(read_trace_rows(path))
    total_events = sum(int(row.get("events", "0") or 0) for row in rows)
    total_unknown = sum(int(row.get("unknown_events", "0") or 0) for row in rows)
    classes = Counter()
    for row in rows:
        for key, value in parse_counter_text(row.get("top_predicate_classes", "")).items():
            if key != "resolved":
                classes[key] += value

    print("# VM Branch Predicate Catalog")
    print()
    print(f"- branch events: `{total_events}`")
    print(f"- unknown branch events: `{total_unknown}`")
    print(f"- unknown classes: `{fmt_counter(classes, args.top)}`")
    print()
    print("## Top Unknown Branches")
    print()
    for row in sorted(
        rows,
        key=lambda item: (
            -int(item.get("unknown_events", "0") or 0),
            -int(item.get("events", "0") or 0),
            int(item.get("source_entry", "0") or 0),
        ),
    )[: args.markdown_limit]:
        unknown = int(row.get("unknown_events", "0") or 0)
        if not unknown:
            continue
        print(
            f"- entry `{row.get('source_entry', '')}` branch "
            f"`{row.get('branch_site', '')}:{row.get('branch_mnemonic', '')}`: "
            f"`{unknown}/{row.get('events', '')}` unknown; "
            f"class `{row.get('top_predicate_classes', '')}`"
        )
        print(f"  condition: `{clip(row.get('top_conditions', ''), args.max_cell_len)}`")


def main():
    parser = argparse.ArgumentParser(
        description="Catalog static branch predicates encountered while replaying state-aware VM handler rows."
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
    parser.add_argument("--max-expr-len", type=int, default=320)
    parser.add_argument("--max-cell-len", type=int, default=260)
    parser.add_argument("--top", type=int, default=5)
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--markdown-limit", type=int, default=30)
    parser.add_argument(
        "--gpr-run",
        help="seed handler-entry registers from the previous VMTAIL line in an EAC_VMTAIL_REGS run.stderr",
    )
    parser.add_argument(
        "--from-tsv",
        help="render markdown from an existing vm_branch_predicates.tsv instead of replaying the trace",
    )
    args = parser.parse_args()

    if args.from_tsv:
        if not args.markdown:
            raise SystemExit("--from-tsv is only supported together with --markdown")
        emit_markdown_from_tsv(args.from_tsv, args)
        return

    eac = Path(args.eac).read_bytes()
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    md = make_disassembler()
    skeletons = read_skeletons(args.skeletons)
    gpr_seeds = load_gpr_seeds(args.gpr_run)
    decoded = {}
    counts = defaultdict(int)
    stats = defaultdict(make_bucket)
    status_counts = Counter()
    target_matches = 0
    ip_matches = 0
    rows = 0

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
        pred_entry, pred_target, pred_delta, status, _steps, _unknown, _branch_unknown = execute(
            by_addr,
            target,
            row,
            table,
            target_to_entry,
            args.max_steps,
            args.max_expr_len,
            stats,
            source,
            skel.get("target", ""),
            gpr_seeds.get(row.get("seq", "")),
        )
        rows += 1
        counts[source] += 1
        status_counts[status] += 1
        actual_entry = int(row["target_entry"])
        actual_target = parse_int(row["target"])
        actual_delta = parse_delta(row["delta"])
        if status == "ok" and pred_entry == actual_entry and pred_target == actual_target:
            target_matches += 1
        if pred_delta == actual_delta:
            ip_matches += 1

    if args.markdown:
        emit_markdown(stats, args)
    else:
        emit_tsv(stats, args)

    print(f"# rows={rows}", file=sys.stderr)
    print(f"# sources={len(counts)}", file=sys.stderr)
    print(f"# statuses={fmt_counter(status_counts, args.top)}", file=sys.stderr)
    print(f"# target_matches={target_matches}/{rows}", file=sys.stderr)
    print(f"# ip_matches={ip_matches}/{rows}", file=sys.stderr)


if __name__ == "__main__":
    main()
