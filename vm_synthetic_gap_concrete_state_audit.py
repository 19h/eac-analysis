#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path

from capstone.x86_const import X86_OP_IMM, X86_OP_REG

from vm_pseudocode_dump import c_comment, parse_hex, read_tsv
from vm_static_dispatch_validate import (
    eval_shift,
    read_dispatch_table,
    read_op,
    write_op,
)
from vm_state_static_validate import (
    MASK32,
    Ptr,
    Unknown,
    branch_taken,
    cmp_zf,
    concrete_compare_value,
    disassemble_region,
    eval_bin,
    is_unknown,
    make_disassembler,
    parse_int,
    preserve_stack_insn,
    read_skeletons,
    reg_of,
)
from vm_static_transfer_expr import clip, path_hash


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
STATE_TRACES = [
    Path("dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv"),
    Path("dumps/vmtail-state-residual-targets/vm_instruction_trace.tsv"),
]


FIELDS = [
    "source_entry",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "gap_bytes",
    "state_trace_rows",
    "state_variants",
    "concrete_status_mix",
    "unknown_reason_mix",
    "branch_unknown_events",
    "concrete_pred_entries",
    "concrete_pred_ends",
    "dynamic_next_source_entry",
    "dynamic_next_source_start_vm_ip",
    "dynamic_next_end_vm_ip",
    "dynamic_next_tail_target_entry",
    "state_example_seq",
    "state_example_pre_state",
    "state_example_pre_flags",
    "state_example_pre_byte",
    "example_status",
    "example_unknown_reason",
    "example_pred_entry",
    "example_pred_target",
    "example_pred_delta",
    "example_pred_end_vm_ip",
    "example_steps",
    "example_unknown_ops",
    "example_branch_unknown",
    "example_path_hash",
    "example_path",
    "classification",
]


def fmt_hex(value):
    return "" if value is None else f"0x{value:x}"


def fmt_delta(value):
    sign = "+" if value >= 0 else "-"
    return f"{sign}0x{abs(value):x}"


def sort_hex_key(text):
    try:
        return parse_hex(text)
    except (TypeError, ValueError):
        return 0


def top_counter(counter, limit=8):
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(limit)) or "-"


def state_key(row):
    return (
        row.get("post_state", "") or "0x0",
        row.get("post_flags", "") or "0x0",
        row.get("post_byte", "") or "0x0",
    )


def load_state_by_end(paths):
    by_end = defaultdict(list)
    if not paths:
        return by_end
    if isinstance(paths, (str, Path)):
        paths = [paths]
    for path in paths:
        path = Path(path)
        if not path.exists():
            continue
        for row in read_tsv(path):
            end = row.get("end_vm_ip", "")
            if not end or not row.get("post_state", ""):
                continue
            by_end[end].append(row)
    for rows in by_end.values():
        rows.sort(key=lambda row: int(row.get("seq", "0") or 0))
    return by_end


def execute_concrete(insns_by_addr, start, row, table, target_to_entry, max_steps, seed_regs=None, seed_frame_mem=None):
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

    while steps < max_steps:
        insn = insns_by_addr.get(pc)
        if insn is None:
            return None, None, frame["ip_delta"], "falloff", "falloff", steps, unknown, branch_unknown, path
        steps += 1
        mnem = insn.mnemonic
        ops = insn.operands
        next_pc = insn.address + insn.size

        if mnem == "jmp":
            if ops and ops[0].type == X86_OP_IMM and ops[0].imm in insns_by_addr:
                pc = ops[0].imm
                continue
            value = read_op(insn, ops[0], regs, frame, ip_bytes, table, frame_mem) if ops else Unknown("jmp")
            if isinstance(value, int):
                return (
                    target_to_entry.get(value),
                    value,
                    frame["ip_delta"],
                    "ok",
                    "",
                    steps,
                    unknown,
                    branch_unknown,
                    path,
                )
            reason = value.reason if isinstance(value, Unknown) else type(value).__name__
            return None, None, frame["ip_delta"], "unknown_target", reason, steps, unknown + 1, branch_unknown, path

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
            left = read_op(insn, ops[0], regs, frame, ip_bytes, table, frame_mem)
            right = read_op(insn, ops[1], regs, frame, ip_bytes, table, frame_mem)
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
            value = read_op(insn, ops[1], regs, frame, ip_bytes, table, frame_mem)
            if not write_op(insn, ops[0], value, regs, frame, frame_mem):
                unknown += 1
            pc = next_pc
            continue

        if mnem == "lea" and len(ops) >= 2:
            from vm_state_static_validate import mem_ptr
            ptr = mem_ptr(insn, ops[1], regs)
            if not write_op(insn, ops[0], ptr if ptr is not None else Unknown("lea"), regs, frame, frame_mem):
                unknown += 1
            pc = next_pc
            continue

        if mnem in {"add", "sub", "xor", "and", "or", "shl", "shr"} and len(ops) >= 2:
            dst = read_op(insn, ops[0], regs, frame, ip_bytes, table, frame_mem)
            src = read_op(insn, ops[1], regs, frame, ip_bytes, table, frame_mem)
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

    return None, None, frame["ip_delta"], "step_limit", "step_limit", steps, unknown, branch_unknown, path


def classify(state_rows, statuses, reasons, branch_unknown):
    if not state_rows:
        return "missing_concrete_state_trace"
    if statuses.get("ok", 0):
        return "concrete_target_resolved"
    if reasons.get("table_oob", 0):
        return "concrete_table_oob"
    if branch_unknown:
        return "concrete_branch_unknown"
    if statuses.get("unknown_target", 0):
        return "concrete_unknown_target"
    return "concrete_unresolved"


def decode_handlers(eac, skeletons, window):
    md = make_disassembler()
    decoded = {}
    for source, skel in skeletons.items():
        target = parse_int(skel.get("target"))
        tail_site = parse_int(skel.get("tail_site"))
        if target is None:
            continue
        stop = tail_site + 16 if tail_site is not None else target + window
        if stop - target > window:
            stop = target + window
        _insns, by_addr = disassemble_region(md, eac, target, stop)
        decoded[source] = (target, by_addr)
    return decoded


def build_rows(args):
    eac = Path(args.eac).read_bytes()
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    skeletons = read_skeletons(args.skeletons)
    decoded = decode_handlers(eac, skeletons, args.window)
    state_by_end = load_state_by_end(args.state_trace)

    out = []
    for residual in sorted(read_tsv(args.residual_audit), key=lambda row: sort_hex_key(row.get("synthetic_start_vm_ip", ""))):
        start = residual.get("synthetic_start_vm_ip", "")
        source = residual.get("source_entry", "")
        state_rows = state_by_end.get(start, [])
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
        pred_entries = Counter()
        pred_ends = Counter()
        branch_unknown_events = 0
        example = {}
        decoded_source = decoded.get(source)
        for state_row in variants:
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
            pred_entry, pred_target, pred_delta, status, reason, steps, unknown, branch_unknown, path = execute_concrete(
                by_addr,
                target,
                probe,
                table,
                target_to_entry,
                args.max_steps,
            )
            statuses[status] += 1
            if reason:
                reasons[reason] += 1
            if pred_entry is not None:
                pred_entries[str(pred_entry)] += 1
            try:
                pred_end = parse_hex(start) + pred_delta
                pred_ends[f"0x{pred_end:x}"] += 1
            except (TypeError, ValueError):
                pred_end = None
            branch_unknown_events += branch_unknown
            if not example:
                example = {
                    "seq": state_row.get("seq", ""),
                    "pre_state": probe["pre_state"],
                    "pre_flags": probe["pre_flags"],
                    "pre_byte": probe["pre_byte"],
                    "status": status,
                    "reason": reason,
                    "pred_entry": "" if pred_entry is None else str(pred_entry),
                    "pred_target": fmt_hex(pred_target),
                    "pred_delta": fmt_delta(pred_delta),
                    "pred_end": fmt_hex(pred_end),
                    "steps": str(steps),
                    "unknown": str(unknown),
                    "branch_unknown": str(branch_unknown),
                    "path_hash": path_hash(path),
                    "path": clip(";".join(path) if path else "-", args.max_path_len),
                }

        out.append({
            "source_entry": source,
            "synthetic_start_vm_ip": start,
            "missing_successor_vm_ip": residual.get("missing_successor_vm_ip", ""),
            "gap_bytes": residual.get("gap_bytes", ""),
            "state_trace_rows": str(len(state_rows)),
            "state_variants": str(len(variants)),
            "concrete_status_mix": top_counter(statuses),
            "unknown_reason_mix": top_counter(reasons),
            "branch_unknown_events": str(branch_unknown_events),
            "concrete_pred_entries": top_counter(pred_entries),
            "concrete_pred_ends": top_counter(pred_ends),
            "dynamic_next_source_entry": residual.get("dynamic_next_source_entry", ""),
            "dynamic_next_source_start_vm_ip": residual.get("dynamic_next_source_start_vm_ip", ""),
            "dynamic_next_end_vm_ip": residual.get("dynamic_next_end_vm_ip", ""),
            "dynamic_next_tail_target_entry": residual.get("dynamic_next_tail_target_entry", ""),
            "state_example_seq": example.get("seq", ""),
            "state_example_pre_state": example.get("pre_state", ""),
            "state_example_pre_flags": example.get("pre_flags", ""),
            "state_example_pre_byte": example.get("pre_byte", ""),
            "example_status": example.get("status", ""),
            "example_unknown_reason": example.get("reason", ""),
            "example_pred_entry": example.get("pred_entry", ""),
            "example_pred_target": example.get("pred_target", ""),
            "example_pred_delta": example.get("pred_delta", ""),
            "example_pred_end_vm_ip": example.get("pred_end", ""),
            "example_steps": example.get("steps", ""),
            "example_unknown_ops": example.get("unknown", ""),
            "example_branch_unknown": example.get("branch_unknown", ""),
            "example_path_hash": example.get("path_hash", ""),
            "example_path": example.get("path", ""),
            "classification": classify(state_rows, statuses, reasons, branch_unknown_events),
        })
    return out


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    classes = Counter(row.get("classification", "") for row in rows)
    statuses = Counter()
    reasons = Counter()
    for row in rows:
        for item in (row.get("concrete_status_mix", "") or "").split(","):
            if item and ":" in item:
                key, value = item.rsplit(":", 1)
                statuses[key] += int(value)
        for item in (row.get("unknown_reason_mix", "") or "").split(","):
            if item and ":" in item:
                key, value = item.rsplit(":", 1)
                reasons[key] += int(value)

    print("# Synthetic Gap Concrete-State Audit\n")
    print("Concrete replay of residual synthetic-gap handlers using post-state from the state-aware predecessor edge when available.\n")
    print(f"Rows: `{len(rows)}`\n")
    print("## Classification Mix\n")
    print("| Classification | Rows |")
    print("| --- | ---: |")
    for key, value in classes.most_common():
        print(f"| `{key}` | {value} |")
    print()
    print("## Concrete Status Mix\n")
    print("| Status | Variants |")
    print("| --- | ---: |")
    for key, value in statuses.most_common():
        print(f"| `{key}` | {value} |")
    print()
    print("## Unknown Reason Mix\n")
    print("| Reason | Variants |")
    print("| --- | ---: |")
    for key, value in reasons.most_common():
        print(f"| `{key}` | {value} |")
    print()
    print("## Residual Starts\n")
    print("| Start | Source | State rows | Status | Reason | Pred end | Next hook | Class |")
    print("| --- | ---: | ---: | --- | --- | --- | --- | --- |")
    for row in rows:
        next_hook = "-"
        if row.get("dynamic_next_source_entry", ""):
            next_hook = (
                f"{row.get('dynamic_next_source_entry')}@{row.get('dynamic_next_source_start_vm_ip')}"
                f"->{row.get('dynamic_next_end_vm_ip')}"
            )
        print(
            f"| `{row.get('synthetic_start_vm_ip', '')}` | {row.get('source_entry', '')} | "
            f"{row.get('state_trace_rows', '0')} | `{row.get('concrete_status_mix', '-')}` | "
            f"`{row.get('unknown_reason_mix', '-')}` | `{row.get('concrete_pred_ends', '-')}` | "
            f"`{next_hook}` | `{row.get('classification', '')}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Replay residual synthetic gaps using concrete state-trace predecessor state.")
    parser.add_argument("--residual-audit", default=str(TRACE_DIR / "vm_synthetic_gap_residual_audit.tsv"))
    parser.add_argument("--state-trace", action="append", dest="state_trace",
        help="State-aware instruction trace to use; may be supplied multiple times. Defaults to the wide state trace plus the focused residual-target trace when present.")
    parser.add_argument("--skeletons", default=str(TRACE_DIR / "vm_handler_skeletons.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--window", type=lambda value: int(value, 0), default=0x1200)
    parser.add_argument("--max-steps", type=int, default=2000)
    parser.add_argument("--max-state-variants", type=int, default=8)
    parser.add_argument("--max-path-len", type=int, default=220)
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()
    if not args.state_trace:
        args.state_trace = [str(path) for path in STATE_TRACES]

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_concrete_state_audit_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
