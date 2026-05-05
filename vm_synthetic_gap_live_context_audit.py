#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_static_dispatch_validate import read_dispatch_table
from vm_state_static_validate import MASK32, Ptr, make_disassembler, parse_int, read_skeletons
from vm_synthetic_gap_concrete_state_audit import (
    decode_handlers,
    execute_concrete,
    fmt_delta,
    fmt_hex,
    path_hash,
    sort_hex_key,
    top_counter,
)
from vm_static_transfer_expr import clip


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
LIVE_DIR = Path("dumps/vmtail-live-residual-targets")
DEFAULT_STATE_TRACES = [
    LIVE_DIR / "vm_instruction_trace.tsv",
    Path("dumps/vmtail-state-residual-targets/vm_instruction_trace.tsv"),
    Path("dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv"),
]
DEFAULT_GPR_RUNS = [
    LIVE_DIR / "run.stderr",
    Path("dumps/vmtail-state-residual-targets/run.stderr"),
]

REGS = [
    "rax", "rbx", "rcx", "rdx", "rsi", "rdi", "r8", "r9",
    "r10", "r11", "r12", "r13", "r14", "r15", "rbp", "rsp",
]

HEX_FIELD_RE = re.compile(r"\b([a-zA-Z0-9_]+)=0x([0-9a-fA-F]+)")
DEC_FIELD_RE = re.compile(r"\b(count)=([0-9]+)")


FIELDS = [
    "source_entry",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "gap_bytes",
    "state_trace_rows",
    "live_seed_rows",
    "live_status_mix",
    "live_unknown_reason_mix",
    "live_branch_unknown_events",
    "live_pred_entries",
    "live_pred_ends",
    "state_only_classification",
    "state_only_status_mix",
    "state_only_unknown_reason_mix",
    "dynamic_next_source_entry",
    "dynamic_next_source_start_vm_ip",
    "dynamic_next_end_vm_ip",
    "dynamic_next_tail_target_entry",
    "live_example_seq",
    "live_example_seed_count",
    "live_example_seed_site",
    "live_example_seed_target_off",
    "live_example_pre_state",
    "live_example_pre_flags",
    "live_example_pre_byte",
    "live_example_status",
    "live_example_unknown_reason",
    "live_example_pred_entry",
    "live_example_pred_target",
    "live_example_pred_delta",
    "live_example_pred_end_vm_ip",
    "live_example_steps",
    "live_example_unknown_ops",
    "live_example_branch_unknown",
    "live_example_path_hash",
    "live_example_path",
    "live_resolution",
]


def load_state_by_end(paths):
    by_end = defaultdict(list)
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


def parse_fields(line):
    fields = {key: int(value, 16) for key, value in HEX_FIELD_RE.findall(line)}
    for key, value in DEC_FIELD_RE.findall(line):
        fields[key] = int(value, 10)
    return fields


def normalize_seed(value, frame=None, frame_off=None, table=None, vm_ip=None, rsp=None):
    image_base = None
    if frame is not None and frame_off is not None:
        image_base = frame - frame_off
    if frame is not None and frame - 0x4000 <= value < frame + 0x4000:
        return Ptr("frame", value - frame)
    if frame is not None:
        for bias in (0x1a44e4ef, 0x61f749a7, 0x0da3b7d9):
            adjusted = (value + bias) & 0xffffffffffffffff
            if frame - 0x4000 <= adjusted < frame + 0x4000:
                return Ptr("frame", (adjusted - frame) - bias)
    if rsp is not None and rsp - 0x4000 <= value < rsp + 0x4000:
        return Ptr("stack", value - rsp, 12, rsp & 0xfff)
    if rsp is not None:
        for bias in (0x1a44e4ef, 0x61f749a7, 0x0da3b7d9):
            adjusted = (value + bias) & 0xffffffffffffffff
            if rsp - 0x4000 <= adjusted < rsp + 0x4000:
                return Ptr("stack", (adjusted - rsp) - bias, 12, rsp & 0xfff)
    if table is not None and table <= value < table + 360 * 8:
        return Ptr("table", value - table, 12, table & 0xfff)
    if vm_ip is not None and vm_ip - 0x10000 <= value < vm_ip + 0x10000:
        return Ptr("ip", value - vm_ip, 12, vm_ip & 0xfff)
    if image_base is not None and image_base <= value < image_base + 0x650000:
        return value - image_base
    return value


def load_live_seeds(paths):
    seeds = defaultdict(list)
    if isinstance(paths, (str, Path)):
        paths = [paths]
    for path in paths:
        path = Path(path)
        if not path.exists():
            continue
        with path.open(errors="replace") as handle:
            for line in handle:
                if not line.startswith("[VMTAIL]"):
                    continue
                raw = parse_fields(line)
                vm_ip_off = raw.get("vm_ip_off")
                if vm_ip_off is None:
                    continue
                frame = raw.get("frame")
                frame_off = raw.get("frame_off")
                table = raw.get("table")
                vm_ip = raw.get("vm_ip")
                rsp = raw.get("rsp")
                regs = {}
                for reg in REGS:
                    if reg in raw:
                        regs[reg] = normalize_seed(raw[reg], frame, frame_off, table, vm_ip, rsp)
                frame_mem = {}
                for key, value in raw.items():
                    if not key.startswith("fs0x"):
                        continue
                    off = int(key[4:], 16)
                    frame_mem[(off, 8)] = normalize_seed(value, frame, frame_off, table, vm_ip, rsp)
                seeds[f"0x{vm_ip_off:x}"].append({
                    "count": str(raw.get("count", "")),
                    "site": f"0x{raw.get('site', 0):x}" if "site" in raw else "",
                    "target_off": f"0x{raw.get('target_off', 0):x}" if "target_off" in raw else "",
                    "regs": regs,
                    "frame_mem": frame_mem,
                })
    return seeds


def state_key(row):
    return (
        row.get("post_state", "") or "0x0",
        row.get("post_flags", "") or "0x0",
        row.get("post_byte", "") or "0x0",
    )


def classify(statuses, reasons, branch_unknown):
    if not statuses:
        return "missing_live_context"
    if statuses.get("ok", 0):
        return "live_resolved_target"
    if reasons.get("table_oob", 0):
        return "live_table_oob"
    if branch_unknown:
        return "live_branch_unknown"
    if reasons.get("table_read", 0):
        return "live_unknown_target"
    return "live_unknown_target"


def build_rows(args):
    eac = Path(args.eac).read_bytes()
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    skeletons = read_skeletons(args.skeletons)
    decoded = decode_handlers(eac, skeletons, args.window)
    state_by_end = load_state_by_end(args.state_trace)
    live_seeds = load_live_seeds(args.gpr_run)
    state_only_by_start = {
        row.get("synthetic_start_vm_ip", ""): row
        for row in read_tsv(args.concrete_state_audit)
    }

    rows = []
    for residual in sorted(read_tsv(args.residual_audit), key=lambda row: sort_hex_key(row.get("synthetic_start_vm_ip", ""))):
        start = residual.get("synthetic_start_vm_ip", "")
        source = residual.get("source_entry", "")
        state_rows = state_by_end.get(start, [])
        seeds = live_seeds.get(start, [])
        variants = []
        seen = set()
        for row in state_rows:
            key = state_key(row)
            if key in seen:
                continue
            seen.add(key)
            variants.append(row)
            if len(variants) >= args.max_state_variants:
                break
        decoded_source = decoded.get(source)
        statuses = Counter()
        reasons = Counter()
        pred_entries = Counter()
        pred_ends = Counter()
        branch_unknown_events = 0
        example = {}

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
                pred_entry, pred_target, pred_delta, status, reason, steps, unknown, branch_unknown, path = execute_concrete(
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
                        "seed_count": seed.get("count", ""),
                        "seed_site": seed.get("site", ""),
                        "seed_target_off": seed.get("target_off", ""),
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

        state_only = state_only_by_start.get(start, {})
        rows.append({
            "source_entry": source,
            "synthetic_start_vm_ip": start,
            "missing_successor_vm_ip": residual.get("missing_successor_vm_ip", ""),
            "gap_bytes": residual.get("gap_bytes", ""),
            "state_trace_rows": str(len(state_rows)),
            "live_seed_rows": str(len(seeds)),
            "live_status_mix": top_counter(statuses),
            "live_unknown_reason_mix": top_counter(reasons),
            "live_branch_unknown_events": str(branch_unknown_events),
            "live_pred_entries": top_counter(pred_entries),
            "live_pred_ends": top_counter(pred_ends),
            "state_only_classification": state_only.get("classification", ""),
            "state_only_status_mix": state_only.get("concrete_status_mix", ""),
            "state_only_unknown_reason_mix": state_only.get("unknown_reason_mix", ""),
            "dynamic_next_source_entry": residual.get("dynamic_next_source_entry", ""),
            "dynamic_next_source_start_vm_ip": residual.get("dynamic_next_source_start_vm_ip", ""),
            "dynamic_next_end_vm_ip": residual.get("dynamic_next_end_vm_ip", ""),
            "dynamic_next_tail_target_entry": residual.get("dynamic_next_tail_target_entry", ""),
            "live_example_seq": example.get("seq", ""),
            "live_example_seed_count": example.get("seed_count", ""),
            "live_example_seed_site": example.get("seed_site", ""),
            "live_example_seed_target_off": example.get("seed_target_off", ""),
            "live_example_pre_state": example.get("pre_state", ""),
            "live_example_pre_flags": example.get("pre_flags", ""),
            "live_example_pre_byte": example.get("pre_byte", ""),
            "live_example_status": example.get("status", ""),
            "live_example_unknown_reason": example.get("reason", ""),
            "live_example_pred_entry": example.get("pred_entry", ""),
            "live_example_pred_target": example.get("pred_target", ""),
            "live_example_pred_delta": example.get("pred_delta", ""),
            "live_example_pred_end_vm_ip": example.get("pred_end", ""),
            "live_example_steps": example.get("steps", ""),
            "live_example_unknown_ops": example.get("unknown", ""),
            "live_example_branch_unknown": example.get("branch_unknown", ""),
            "live_example_path_hash": example.get("path_hash", ""),
            "live_example_path": example.get("path", ""),
            "live_resolution": classify(statuses, reasons, branch_unknown_events),
        })
    return rows


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    resolutions = Counter(row.get("live_resolution", "") for row in rows)
    statuses = Counter()
    reasons = Counter()
    for row in rows:
        for item in (row.get("live_status_mix", "") or "").split(","):
            if item and ":" in item:
                key, value = item.rsplit(":", 1)
                statuses[key] += int(value)
        for item in (row.get("live_unknown_reason_mix", "") or "").split(","):
            if item and ":" in item:
                key, value = item.rsplit(":", 1)
                reasons[key] += int(value)
    print("# Synthetic Gap Live-Context Audit\n")
    print("Residual tail replay seeded with concrete predecessor state plus live GPR/frame-scratch snapshots at the synthetic-start tail event.\n")
    print(f"Rows: `{len(rows)}`\n")
    print("## Resolution Mix\n")
    print("| Resolution | Rows |")
    print("| --- | ---: |")
    for key, value in resolutions.most_common():
        print(f"| `{key}` | {value} |")
    print("\n## Live Status Mix\n")
    print("| Status | Variants |")
    print("| --- | ---: |")
    for key, value in statuses.most_common():
        print(f"| `{key}` | {value} |")
    print("\n## Live Unknown Reason Mix\n")
    print("| Reason | Variants |")
    print("| --- | ---: |")
    for key, value in reasons.most_common():
        print(f"| `{key}` | {value} |")
    print("\n## Residual Starts\n")
    print("| Start | Source | Seeds | Live Status | Reason | Pred End | State-only | Live Resolution |")
    print("| --- | ---: | ---: | --- | --- | --- | --- | --- |")
    for row in rows:
        print(
            f"| `{row.get('synthetic_start_vm_ip', '')}` | {row.get('source_entry', '')} | "
            f"{row.get('live_seed_rows', '0')} | `{row.get('live_status_mix', '-')}` | "
            f"`{row.get('live_unknown_reason_mix', '-')}` | `{row.get('live_pred_ends', '-')}` | "
            f"`{row.get('state_only_classification', '')}` | `{row.get('live_resolution', '')}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Replay residual synthetic gaps with state plus live GPR/scratch entry context.")
    parser.add_argument("--residual-audit", default=str(TRACE_DIR / "vm_synthetic_gap_residual_audit.tsv"))
    parser.add_argument("--concrete-state-audit", default=str(TRACE_DIR / "vm_synthetic_gap_concrete_state_audit.tsv"))
    parser.add_argument("--state-trace", action="append",
        help="State-aware instruction trace; may be supplied multiple times. Defaults to live residual, residual supplement, then wide state traces.")
    parser.add_argument("--gpr-run", action="append",
        help="Focused VMTAIL run.stderr with live GPR/scratch seeds; may be supplied multiple times. Defaults to all residual focused runs.")
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
    print(f"synthetic_gap_live_context_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
