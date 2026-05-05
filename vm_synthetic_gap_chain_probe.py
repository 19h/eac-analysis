#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_state_static_validate import disassemble_region, make_disassembler, parse_int, read_skeletons
from vm_static_dispatch_validate import read_dispatch_table
from vm_static_transfer_expr import execute


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
CANDIDATE_RE = re.compile(r"^(?P<entry>\d+):")


def fmt_hex(value):
    return f"0x{value:x}"


def fmt_delta(value):
    sign = "+" if value >= 0 else "-"
    return f"{sign}0x{abs(value):x}"


def parse_candidate_entries(text):
    entries = []
    seen = set()
    for item in (text or "").split(","):
        match = CANDIDATE_RE.match(item)
        if not match:
            continue
        entry = int(match.group("entry"), 0)
        if entry not in seen:
            entries.append(entry)
            seen.add(entry)
    return entries


def load_gap_bytes(path):
    out = {}
    if not path or not Path(path).exists():
        return out
    for row in read_tsv(path):
        start = row.get("synthetic_start_vm_ip", "")
        if start:
            out[start] = row.get("gap_bytes", "") or row.get("operand_bytes", "")
    return out


def decode_handlers(eac, table, skeletons, window):
    md = make_disassembler()
    decoded = {}
    for entry_text, skel in skeletons.items():
        try:
            entry = int(entry_text, 0)
        except ValueError:
            continue
        target = parse_int(skel.get("target"))
        if target is None:
            continue
        tail_site = parse_int(skel.get("tail_site"))
        stop = tail_site + 16 if tail_site is not None else target + window
        if stop - target > window:
            stop = target + window
        _insns, by_addr = disassemble_region(md, eac, target, stop)
        decoded[entry] = (target, by_addr)
    return decoded


def classify(pred_entry, pred_end, dynamic_target, dynamic_end):
    target_match = dynamic_target is not None and pred_entry == dynamic_target
    end_match = dynamic_end is not None and pred_end == dynamic_end
    if target_match and end_match:
        return "hidden_chain_matches_next_event"
    if target_match:
        return "hidden_chain_target_only"
    if end_match:
        return "hidden_chain_end_only"
    return "hidden_chain_mismatch"


def better_candidate(row):
    status_rank = {
        "hidden_chain_matches_next_event": 0,
        "hidden_chain_target_only": 1,
        "hidden_chain_end_only": 2,
        "hidden_chain_mismatch": 3,
    }
    return (
        status_rank.get(row.get("status", ""), 9),
        int(row.get("hidden_source_delta_from_start", "+0x0").replace("+", ""), 16),
        int(row.get("hidden_source_entry", "0") or 0),
    )


def probe_dynamic_row(row, eac, table, target_to_entry, decoded, args):
    entries = parse_candidate_entries(row.get("candidate_entries", ""))
    if not entries:
        return []
    try:
        synthetic_start = parse_hex(row.get("synthetic_start_vm_ip", ""))
    except ValueError:
        return []
    try:
        dynamic_end = parse_hex(row.get("next_end_vm_ip", ""))
    except ValueError:
        dynamic_end = None
    try:
        dynamic_target = int(row.get("next_tail_target_entry", ""), 0)
    except ValueError:
        dynamic_target = None

    out = []
    for entry in entries:
        decoded_entry = decoded.get(entry)
        if not decoded_entry:
            continue
        target, by_addr = decoded_entry
        for offset in range(args.max_hidden_offset + 1):
            hidden_start = synthetic_start + offset
            byte_end = min(len(eac), hidden_start + args.bytes_window)
            probe = {
                "bytes": eac[hidden_start:byte_end].hex(),
                "pre_state": "0x0",
                "pre_flags": "0x0",
                "pre_byte": "0x0",
                "start_vm_ip": fmt_hex(hidden_start),
            }
            (
                pred_entry,
                pred_target,
                pred_delta,
                exec_status,
                target_expr,
                slot_expr,
                ip_expr,
                steps,
                unknown,
                branch_unknown,
                path,
            ) = execute(by_addr, target, probe, table, target_to_entry, args.max_steps, args.max_expr_len)
            if exec_status != "ok":
                continue
            pred_end = hidden_start + pred_delta
            status = classify(pred_entry, pred_end, dynamic_target, dynamic_end)
            if status == "hidden_chain_mismatch":
                continue
            out.append({
                "source_entry": row.get("source_entry", ""),
                "synthetic_start_vm_ip": row.get("synthetic_start_vm_ip", ""),
                "missing_successor_vm_ip": row.get("missing_successor_vm_ip", ""),
                "gap_bytes": row.get("gap_bytes", ""),
                "dynamic_resolution": row.get("resolution", ""),
                "start_event_count": row.get("start_event_count", ""),
                "start_site": row.get("start_site", ""),
                "next_event_count": row.get("next_event_count", ""),
                "next_site": row.get("next_site", ""),
                "dynamic_next_end_vm_ip": row.get("next_end_vm_ip", ""),
                "dynamic_next_tail_target_entry": row.get("next_tail_target_entry", ""),
                "candidate_entries": row.get("candidate_entries", ""),
                "hidden_source_entry": str(entry),
                "hidden_source_target": fmt_hex(target),
                "hidden_source_start_vm_ip": fmt_hex(hidden_start),
                "hidden_source_delta_from_start": fmt_delta(offset),
                "hidden_source_bytes": eac[hidden_start:hidden_start + args.max_bytes].hex(),
                "hidden_pred_entry": "" if pred_entry is None else str(pred_entry),
                "hidden_pred_target": "" if pred_target is None else fmt_hex(pred_target),
                "hidden_pred_delta": fmt_delta(pred_delta),
                "hidden_pred_end_vm_ip": fmt_hex(pred_end),
                "hidden_target_expr": target_expr,
                "hidden_slot_expr": slot_expr,
                "hidden_ip_expr": ip_expr,
                "steps": str(steps),
                "unknown_ops": str(unknown),
                "branch_unknown": str(branch_unknown),
                "path": ";".join(path),
                "status": status,
            })
    out.sort(key=better_candidate)
    return out[: args.max_rows_per_dynamic]


def build_rows(args):
    eac = Path(args.eac).read_bytes()
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    skeletons = read_skeletons(args.skeletons)
    decoded = decode_handlers(eac, table, skeletons, args.window)
    gap_bytes = load_gap_bytes(args.dynamic_stitch)

    out = []
    for row in read_tsv(args.dynamic_stitch):
        if row.get("resolution", "") != "ambiguous_next_source":
            continue
        start = row.get("synthetic_start_vm_ip", "")
        if start and not row.get("gap_bytes", ""):
            row["gap_bytes"] = gap_bytes.get(start, "")
        out.extend(probe_dynamic_row(row, eac, table, target_to_entry, decoded, args))
    out.sort(key=lambda row: (parse_hex(row["synthetic_start_vm_ip"]), better_candidate(row)))
    return out


def emit_tsv(rows):
    fields = [
        "source_entry",
        "synthetic_start_vm_ip",
        "missing_successor_vm_ip",
        "gap_bytes",
        "dynamic_resolution",
        "start_event_count",
        "start_site",
        "next_event_count",
        "next_site",
        "dynamic_next_end_vm_ip",
        "dynamic_next_tail_target_entry",
        "candidate_entries",
        "hidden_source_entry",
        "hidden_source_target",
        "hidden_source_start_vm_ip",
        "hidden_source_delta_from_start",
        "hidden_source_bytes",
        "hidden_pred_entry",
        "hidden_pred_target",
        "hidden_pred_delta",
        "hidden_pred_end_vm_ip",
        "hidden_target_expr",
        "hidden_slot_expr",
        "hidden_ip_expr",
        "steps",
        "unknown_ops",
        "branch_unknown",
        "path",
        "status",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow({field: row.get(field, "") for field in fields})


def emit_markdown(rows):
    statuses = Counter(row.get("status", "") for row in rows)
    print("# Synthetic Gap Hidden Chain Probe\n")
    print("Probe of ambiguous dynamic stitches by replaying candidate next-source handlers at short offsets after the synthetic gap.")
    print("A full match means the candidate handler's static transfer predicts both the next hooked target entry and the next hooked VM IP.\n")
    print(f"Rows: {len(rows)}.")
    print(f"Status mix: {', '.join(f'{key}:{value}' for key, value in statuses.most_common()) or '-'}.\n")
    print("| Synthetic Start | Source | Hidden Source | Hidden Start | Pred End | Pred Entry | Dynamic End | Dynamic Entry | Status |")
    print("| --- | ---: | ---: | --- | --- | ---: | --- | ---: | --- |")
    for row in rows:
        print(
            f"| `{row.get('synthetic_start_vm_ip', '')}` | {row.get('source_entry', '')} | "
            f"{row.get('hidden_source_entry', '')} | `{row.get('hidden_source_start_vm_ip', '')}` | "
            f"`{row.get('hidden_pred_end_vm_ip', '')}` | {row.get('hidden_pred_entry', '')} | "
            f"`{row.get('dynamic_next_end_vm_ip', '')}` | {row.get('dynamic_next_tail_target_entry', '')} | "
            f"`{row.get('status', '')}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Resolve ambiguous synthetic gap dynamic stitches through hidden handler chains.")
    parser.add_argument("--dynamic-stitch", default=str(TRACE_DIR / "vm_synthetic_gap_dynamic_stitch.tsv"))
    parser.add_argument("--skeletons", default=str(TRACE_DIR / "vm_handler_skeletons.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--window", type=lambda value: int(value, 0), default=0x1200)
    parser.add_argument("--bytes-window", type=lambda value: int(value, 0), default=0x100)
    parser.add_argument("--max-hidden-offset", type=lambda value: int(value, 0), default=0x40)
    parser.add_argument("--max-steps", type=int, default=2000)
    parser.add_argument("--max-expr-len", type=int, default=420)
    parser.add_argument("--max-bytes", type=int, default=32)
    parser.add_argument("--max-rows-per-dynamic", type=int, default=4)
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_chain_probe_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
