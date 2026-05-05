#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path

from capstone.x86_const import X86_OP_IMM, X86_OP_MEM, X86_OP_REG

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_static_dispatch_validate import eval_shift, read_dispatch_table, write_op
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
    concrete_compare_value,
    concrete_full_value,
    eval_bin,
    is_unknown,
    mask_for_size,
    mem_ptr,
    parse_int,
    preserve_stack_insn,
    read_frame_mem,
    read_skeletons,
    reg_of,
)
from vm_synthetic_gap_concrete_state_audit import decode_handlers, fmt_delta, path_hash, sort_hex_key, top_counter
from vm_synthetic_gap_live_context_audit import DEFAULT_GPR_RUNS, DEFAULT_STATE_TRACES, load_live_seeds, load_state_by_end, state_key
from vm_static_transfer_expr import clip


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


FIELDS = [
    "source_entry",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "gap_bytes",
    "state_trace_rows",
    "live_seed_rows",
    "variants_replayed",
    "terminal_status_mix",
    "terminal_reason_mix",
    "table_access_status_mix",
    "table_access_size_mix",
    "table_access_offset_mix",
    "table_access_entry_mix",
    "table_access_site_mix",
    "example_seq",
    "example_seed_count",
    "example_seed_site",
    "example_terminal_status",
    "example_terminal_reason",
    "example_table_status",
    "example_table_site",
    "example_table_operand",
    "example_table_size",
    "example_table_offset",
    "example_table_entry",
    "example_table_value_entry",
    "example_pred_delta",
    "example_pred_end_vm_ip",
    "example_path_hash",
    "example_path",
    "diagnosis",
]


def fmt_hex(value):
    if value is None:
        return ""
    return f"0x{value:x}"


def read_ip(data, off, size):
    if off < 0 or off + size > len(data):
        return Unknown("ip_oob")
    return int.from_bytes(data[off:off + size], "little")


def read_table_debug(table, off, size, insn, op, table_log):
    status = "ok"
    entry = ""
    value = None
    if size != 8 or off < 0 or off % 8:
        status = "table_read"
    else:
        entry_i = off // 8
        entry = str(entry_i)
        if entry_i < 0 or entry_i >= len(table):
            status = "table_oob"
        else:
            value = table[entry_i]
    table_log.append({
        "status": status,
        "site": f"0x{insn.address:x}",
        "operand": insn.op_str,
        "size": str(size),
        "offset": fmt_hex(off),
        "entry": entry,
        "value_entry": "" if value is None else str(table.index(value) if value in table else -1),
    })
    if status != "ok":
        return Unknown(status)
    return value


def read_mem_debug(insn, op, regs, frame, ip_bytes, table, frame_mem, table_log):
    ptr = mem_ptr(insn, op, regs)
    if ptr is None:
        return Unknown("mem_ptr")
    size = op.size or 8
    if ptr.kind == "frame":
        if ptr.off == FRAME_IP_OFF and size == 8:
            return Ptr("ip", frame["ip_delta"], 12, frame.get("ip_base_low12", 0))
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
    if ptr.kind == "table":
        return read_table_debug(table, ptr.off, size, insn, op, table_log)
    return Unknown(ptr.kind)


def read_op_debug(insn, op, regs, frame, ip_bytes, table, frame_mem, table_log):
    if op.type == X86_OP_IMM:
        return op.imm & 0xffffffffffffffff
    if op.type == X86_OP_REG:
        return regs.get(reg_of(insn, op), Unknown("reg"))
    if op.type == X86_OP_MEM:
        return read_mem_debug(insn, op, regs, frame, ip_bytes, table, frame_mem, table_log)
    return Unknown("op")


def execute_debug(insns_by_addr, start, row, table, target_to_entry, max_steps, seed_regs=None, seed_frame_mem=None):
    ip_bytes = bytes.fromhex(row["bytes"])
    frame = {
        "state": parse_int(row["pre_state"]) & MASK32,
        "flags": parse_int(row.get("pre_flags", "0x0") or "0x0") & MASK32,
        "byte": parse_int(row.get("pre_byte", "0x0") or "0x0") & 0xff,
        "ip_delta": 0,
        "ip_base_low12": (parse_int(row.get("start_vm_ip", "0x0") or "0x0") or 0) & 0xfff,
    }
    regs = dict(seed_regs or {})
    regs["rbp"] = Ptr("frame", 0)
    frame_mem = dict(seed_frame_mem or {})
    pc = start
    zf = None
    steps = 0
    unknown = 0
    branch_unknown = 0
    path = []
    table_log = []

    while steps < max_steps:
        insn = insns_by_addr.get(pc)
        if insn is None:
            return None, None, frame["ip_delta"], "falloff", "", steps, unknown, branch_unknown, path, table_log
        steps += 1
        mnem = insn.mnemonic
        ops = insn.operands
        next_pc = insn.address + insn.size

        if mnem == "jmp":
            if ops and ops[0].type == X86_OP_IMM and ops[0].imm in insns_by_addr:
                pc = ops[0].imm
                continue
            value = read_op_debug(insn, ops[0], regs, frame, ip_bytes, table, frame_mem, table_log) if ops else Unknown("jmp")
            if isinstance(value, int):
                return target_to_entry.get(value), value, frame["ip_delta"], "ok", "", steps, unknown, branch_unknown, path, table_log
            reason = value.reason if isinstance(value, Unknown) else type(value).__name__
            return None, None, frame["ip_delta"], "unknown_target", reason, steps, unknown + 1, branch_unknown, path, table_log

        taken = branch_taken(mnem, zf)
        if taken is not None:
            if mnem.startswith("j") and mnem != "jmp":
                path.append(f"0x{insn.address:x}:{mnem}:{1 if taken else 0}")
            pc = ops[0].imm if taken and ops and ops[0].type == X86_OP_IMM else next_pc
            continue
        if mnem.startswith("j") and mnem != "jmp":
            branch_unknown += 1
            path.append(f"0x{insn.address:x}:{mnem}:?")
            pc = next_pc
            continue

        if mnem in {"cmp", "test"} and len(ops) >= 2:
            left = read_op_debug(insn, ops[0], regs, frame, ip_bytes, table, frame_mem, table_log)
            right = read_op_debug(insn, ops[1], regs, frame, ip_bytes, table, frame_mem, table_log)
            zf = cmp_zf(mnem, left, right, ops[0].size or ops[1].size or 8)
            if zf is None:
                unknown += 1
            pc = next_pc
            continue

        if not ops:
            pc = next_pc
            continue

        if preserve_stack_insn(mnem, ops):
            pc = next_pc
            continue

        if mnem in {"mov", "movabs", "movzx"} and len(ops) >= 2:
            value = read_op_debug(insn, ops[1], regs, frame, ip_bytes, table, frame_mem, table_log)
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

        if mnem in {"add", "sub", "xor", "and", "or", "shl", "shr"} and len(ops) >= 2:
            dst = read_op_debug(insn, ops[0], regs, frame, ip_bytes, table, frame_mem, table_log)
            src = read_op_debug(insn, ops[1], regs, frame, ip_bytes, table, frame_mem, table_log)
            if mnem == "xor" and ops[0].type == X86_OP_REG and ops[1].type == X86_OP_REG and ops[0].reg == ops[1].reg:
                value = 0
            elif mnem == "sub" and ops[0].type == X86_OP_REG and ops[1].type == X86_OP_REG and ops[0].reg == ops[1].reg:
                value = 0
            elif mnem in {"shl", "shr"}:
                value = eval_shift(mnem, dst, src, ops[0].size or 8)
            else:
                value = eval_bin(mnem, dst, src, ops[0].size or 8)
            if is_unknown(value):
                unknown += 1
            if not write_op(insn, ops[0], value, regs, frame, frame_mem):
                unknown += 1
            if mnem in {"and", "or", "xor", "sub"}:
                concrete_value = concrete_compare_value(value, ops[0].size or 8)
                zf = (concrete_value == 0) if concrete_value is not None else None
            pc = next_pc
            continue

        if ops[0].type == X86_OP_REG:
            regs[reg_of(insn, ops[0])] = Unknown(mnem)
        pc = next_pc

    return None, None, frame["ip_delta"], "step_limit", "", steps, unknown, branch_unknown, path, table_log


def compact_counter(items):
    counter = Counter(item for item in items if item)
    return ",".join(f"{key}:{value}" for key, value in counter.most_common()) or "-"


def build_rows(args):
    eac = Path(args.eac).read_bytes()
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    decoded = decode_handlers(eac, read_skeletons(args.skeletons), args.window)
    state_by_end = load_state_by_end(args.state_trace)
    live_seeds = load_live_seeds(args.gpr_run)

    out = []
    for residual in sorted(read_tsv(args.residual_audit), key=lambda row: sort_hex_key(row.get("synthetic_start_vm_ip", ""))):
        start = residual.get("synthetic_start_vm_ip", "")
        source = residual.get("source_entry", "")
        state_rows = state_by_end.get(start, [])
        seeds = live_seeds.get(start, [])
        variants = []
        seen = set()
        for state_row in state_rows:
            key = state_key(state_row)
            if key in seen:
                continue
            seen.add(key)
            variants.append(state_row)
            if len(variants) >= args.max_state_variants:
                break

        statuses = Counter()
        reasons = Counter()
        table_statuses = []
        table_sizes = []
        table_offsets = []
        table_entries = []
        table_sites = []
        example = {}
        decoded_source = decoded.get(source)
        for state_row in variants:
            for seed in seeds[:args.max_live_seeds]:
                if not decoded_source:
                    statuses["missing_source_decode"] += 1
                    continue
                target, by_addr = decoded_source
                probe = {
                    "bytes": residual.get("gap_bytes", ""),
                    "pre_state": state_row.get("post_state", "0x0") or "0x0",
                    "pre_flags": state_row.get("post_flags", "0x0") or "0x0",
                    "pre_byte": state_row.get("post_byte", "0x0") or "0x0",
                    "start_vm_ip": start,
                }
                pred_entry, _pred_target, pred_delta, status, reason, _steps, _unknown, _branch_unknown, path, table_log = execute_debug(
                    by_addr,
                    target,
                    probe,
                    table,
                    target_to_entry,
                    args.max_steps,
                    seed_regs=seed["regs"],
                    seed_frame_mem=seed["frame_mem"],
                )
                statuses[status] += 1
                if reason:
                    reasons[reason] += 1
                for item in table_log:
                    table_statuses.append(item["status"])
                    table_sizes.append(item["size"])
                    table_offsets.append(item["offset"])
                    table_entries.append(item["entry"] or "-")
                    table_sites.append(item["site"])
                if not example:
                    selected = next((item for item in reversed(table_log) if item["status"] != "ok"), table_log[-1] if table_log else {})
                    try:
                        pred_end = parse_hex(start) + pred_delta
                    except (TypeError, ValueError):
                        pred_end = None
                    example = {
                        "seq": state_row.get("seq", ""),
                        "seed_count": seed.get("count", ""),
                        "seed_site": seed.get("site", ""),
                        "terminal_status": status,
                        "terminal_reason": reason,
                        "table_status": selected.get("status", ""),
                        "table_site": selected.get("site", ""),
                        "table_operand": selected.get("operand", ""),
                        "table_size": selected.get("size", ""),
                        "table_offset": selected.get("offset", ""),
                        "table_entry": selected.get("entry", ""),
                        "table_value_entry": selected.get("value_entry", ""),
                        "pred_delta": fmt_delta(pred_delta),
                        "pred_end": "" if pred_end is None else f"0x{pred_end:x}",
                        "path_hash": path_hash(path),
                        "path": clip(";".join(path) if path else "-", args.max_path_len),
                    }

        diagnosis = "no_table_access"
        if any(status == "table_oob" for status in table_statuses):
            diagnosis = "table_index_out_of_range"
        elif any(status == "table_read" for status in table_statuses):
            diagnosis = "misaligned_or_non_qword_table_read"
        elif any(status == "ok" for status in table_statuses):
            diagnosis = "table_read_ok_but_target_unknown_later"

        out.append({
            "source_entry": source,
            "synthetic_start_vm_ip": start,
            "missing_successor_vm_ip": residual.get("missing_successor_vm_ip", ""),
            "gap_bytes": residual.get("gap_bytes", ""),
            "state_trace_rows": str(len(state_rows)),
            "live_seed_rows": str(len(seeds)),
            "variants_replayed": str(sum(statuses.values())),
            "terminal_status_mix": top_counter(statuses),
            "terminal_reason_mix": top_counter(reasons),
            "table_access_status_mix": compact_counter(table_statuses),
            "table_access_size_mix": compact_counter(table_sizes),
            "table_access_offset_mix": compact_counter(table_offsets),
            "table_access_entry_mix": compact_counter(table_entries),
            "table_access_site_mix": compact_counter(table_sites),
            "example_seq": example.get("seq", ""),
            "example_seed_count": example.get("seed_count", ""),
            "example_seed_site": example.get("seed_site", ""),
            "example_terminal_status": example.get("terminal_status", ""),
            "example_terminal_reason": example.get("terminal_reason", ""),
            "example_table_status": example.get("table_status", ""),
            "example_table_site": example.get("table_site", ""),
            "example_table_operand": example.get("table_operand", ""),
            "example_table_size": example.get("table_size", ""),
            "example_table_offset": example.get("table_offset", ""),
            "example_table_entry": example.get("table_entry", ""),
            "example_table_value_entry": example.get("table_value_entry", ""),
            "example_pred_delta": example.get("pred_delta", ""),
            "example_pred_end_vm_ip": example.get("pred_end", ""),
            "example_path_hash": example.get("path_hash", ""),
            "example_path": example.get("path", ""),
            "diagnosis": diagnosis,
        })
    return out


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    diagnoses = Counter(row.get("diagnosis", "") for row in rows)
    print("# Synthetic Gap Table-Read Diagnostic\n")
    print("Diagnostic view of the final dispatch-table memory access reached by live-context residual replay.\n")
    print(f"Rows: `{len(rows)}`\n")
    print("## Diagnosis Mix\n")
    print("| Diagnosis | Rows |")
    print("| --- | ---: |")
    for key, value in diagnoses.most_common():
        print(f"| `{key}` | {value} |")
    print("\n## Residual Starts\n")
    print("| Start | Source | Table Status | Size | Offset | Entry | Site | Diagnosis |")
    print("| --- | ---: | --- | --- | --- | --- | --- | --- |")
    for row in rows:
        print(
            f"| `{row.get('synthetic_start_vm_ip', '')}` | {row.get('source_entry', '')} | "
            f"`{row.get('table_access_status_mix', '-')}` | `{row.get('table_access_size_mix', '-')}` | "
            f"`{row.get('table_access_offset_mix', '-')}` | `{row.get('table_access_entry_mix', '-')}` | "
            f"`{row.get('table_access_site_mix', '-')}` | `{row.get('diagnosis', '')}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Diagnose final table-read/table-oob mechanics in live-context residual replay.")
    parser.add_argument("--residual-audit", default=str(TRACE_DIR / "vm_synthetic_gap_residual_audit.tsv"))
    parser.add_argument("--state-trace", action="append")
    parser.add_argument("--gpr-run", action="append")
    parser.add_argument("--skeletons", default=str(TRACE_DIR / "vm_handler_skeletons.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--window", type=lambda value: int(value, 0), default=0x1200)
    parser.add_argument("--max-steps", type=int, default=2000)
    parser.add_argument("--max-state-variants", type=int, default=8)
    parser.add_argument("--max-live-seeds", type=int, default=8)
    parser.add_argument("--max-path-len", type=int, default=220)
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()
    if not args.state_trace:
        args.state_trace = [str(path) for path in DEFAULT_STATE_TRACES]
    if not args.gpr_run:
        args.gpr_run = [str(path) for path in DEFAULT_GPR_RUNS]
    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_table_read_diagnostic_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
