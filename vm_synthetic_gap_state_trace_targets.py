#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
DEFAULT_CONCRETE_AUDIT = TRACE_DIR / "vm_synthetic_gap_concrete_state_audit.tsv"
DEFAULT_RESIDUAL_AUDIT = TRACE_DIR / "vm_synthetic_gap_residual_audit.tsv"
DEFAULT_DYNAMIC_STITCH = TRACE_DIR / "vm_synthetic_gap_dynamic_stitch.tsv"
DEFAULT_PRIMARY_TRACE = TRACE_DIR / "vm_instruction_trace.tsv"


def read_tsv(path):
    path = Path(path)
    if not path.exists():
        return []
    with path.open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def parse_int(text, default=0):
    if text in (None, ""):
        return default
    try:
        return int(text, 0)
    except ValueError:
        return default


def sort_hex_key(text):
    try:
        return int(text, 16)
    except (TypeError, ValueError):
        return 1 << 63


def first_by(rows, key, value):
    for row in rows:
        if row.get(key, "") == value:
            return row
    return {}


def rows_by_key(rows, key):
    grouped = defaultdict(list)
    for row in rows:
        grouped[row.get(key, "")].append(row)
    return grouped


def best_stitch(rows):
    if not rows:
        return {}
    return sorted(
        rows,
        key=lambda row: (
            row.get("resolution", "") != "dynamic_stitch_to_next_hooked_source",
            parse_int(row.get("start_event_count", ""), 1 << 62),
            parse_int(row.get("next_event_count", ""), 1 << 62),
        ),
    )[0]


def collect_primary_rows_ending_at(trace_path, end_vm_ips):
    wanted = set(end_vm_ips)
    found = defaultdict(list)
    if not wanted or not Path(trace_path).exists():
        return found
    with Path(trace_path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            end_vm_ip = row.get("end_vm_ip", "")
            if end_vm_ip in wanted:
                found[end_vm_ip].append(row)
    return found


def compact_join(items):
    values = [item for item in items if item]
    return ",".join(values) if values else "-"


def pair_env(pred_ip, start_ip, pred_site, start_site, next_end_ip="", next_site="", include_next=False):
    ips = [pred_ip, start_ip]
    sites = [pred_site, start_site]
    stop_after = 2
    if include_next:
        ips.append(next_end_ip)
        sites.append(next_site)
        stop_after = 3
    ips_s = compact_join(ips)
    sites_s = compact_join(sites)
    if ips_s == "-":
        return "-"
    parts = [
        "EAC_VMTAIL_TRACE=1",
        "EAC_VMTAIL_REGS=1",
        "EAC_VMTAIL_SCRATCH=1",
        f"EAC_VMTAIL_LIMIT={max(16, stop_after + 4)}",
        "EAC_VMTAIL_SITES=$ALL_TABLE_SPEC",
        f"EAC_VMTAIL_FOCUS_IPS={ips_s}",
        f"EAC_VMTAIL_STOP_AFTER_MATCHES={stop_after}",
    ]
    if sites_s != "-":
        parts.insert(6, f"EAC_VMTAIL_FOCUS_SITES={sites_s}")
    return " ".join(parts)


def build_rows(args):
    concrete_rows = read_tsv(args.concrete_audit)
    residual_rows = read_tsv(args.residual_audit)
    stitch_rows = read_tsv(args.dynamic_stitch)
    residual_by_start = {row.get("synthetic_start_vm_ip", ""): row for row in residual_rows}
    stitch_by_start = rows_by_key(stitch_rows, "synthetic_start_vm_ip")

    missing = [
        row for row in concrete_rows
        if parse_int(row.get("state_trace_rows", "0")) == 0
    ]
    starts = [row.get("synthetic_start_vm_ip", "") for row in missing]
    primary_at_start = collect_primary_rows_ending_at(args.primary_trace, starts)
    predecessor_starts = []
    for start in starts:
        if primary_at_start.get(start):
            predecessor_starts.append(primary_at_start[start][0].get("start_vm_ip", ""))
    primary_at_predecessor = collect_primary_rows_ending_at(args.primary_trace, predecessor_starts)

    rows = []
    for audit in missing:
        start = audit.get("synthetic_start_vm_ip", "")
        residual = residual_by_start.get(start, {})
        stitch = best_stitch(stitch_by_start.get(start, []))
        predecessor = (primary_at_start.get(start) or [{}])[0]
        predecessor_event = (primary_at_predecessor.get(predecessor.get("start_vm_ip", "")) or [{}])[0]

        pred_ip = predecessor.get("start_vm_ip", "")
        pred_site = predecessor_event.get("site", "")
        start_site = predecessor.get("site", "") or stitch.get("start_site", "")
        next_site = stitch.get("next_site", "")
        next_end_ip = stitch.get("next_end_vm_ip", "") or audit.get("dynamic_next_end_vm_ip", "")
        focus_pair = compact_join([pred_ip, start])
        focus_sites = compact_join([pred_site, start_site])
        context_ips = compact_join([pred_ip, start, next_end_ip])
        context_sites = compact_join([pred_site, start_site, next_site])

        row = {
            "rank": "0",
            "source_entry": audit.get("source_entry", ""),
            "synthetic_start_vm_ip": start,
            "missing_successor_vm_ip": audit.get("missing_successor_vm_ip", ""),
            "gap_bytes": audit.get("gap_bytes", ""),
            "concrete_classification": audit.get("classification", ""),
            "state_trace_rows": audit.get("state_trace_rows", "0"),
            "primary_predecessor_seq": predecessor.get("seq", ""),
            "primary_predecessor_source_entry": predecessor.get("source_entry", ""),
            "primary_predecessor_start_vm_ip": pred_ip,
            "primary_predecessor_end_vm_ip": predecessor.get("end_vm_ip", ""),
            "primary_predecessor_event_site": pred_site,
            "synthetic_start_event_site": start_site,
            "dynamic_start_event_count": stitch.get("start_event_count", ""),
            "dynamic_next_event_count": stitch.get("next_event_count", ""),
            "dynamic_next_site": next_site,
            "dynamic_next_end_vm_ip": next_end_ip,
            "dynamic_next_tail_target_entry": stitch.get("next_tail_target_entry", "") or audit.get("dynamic_next_tail_target_entry", ""),
            "dynamic_next_source_entry": stitch.get("inferred_next_source_entry", "") or audit.get("dynamic_next_source_entry", ""),
            "dynamic_next_source_start_vm_ip": stitch.get("inferred_next_source_start_vm_ip", "") or audit.get("dynamic_next_source_start_vm_ip", ""),
            "dynamic_next_source_delta": stitch.get("inferred_next_source_delta", ""),
            "dynamic_hidden_delta": stitch.get("inferred_hidden_delta", ""),
            "dynamic_candidate_entries": stitch.get("candidate_entries", ""),
            "residual_reason": residual.get("residual_reason", ""),
            "promotion_state": residual.get("promotion_state", ""),
            "chain_statuses": residual.get("chain_statuses", ""),
            "dynamic_next_end_block": residual.get("dynamic_next_end_block", ""),
            "span_source_observation": residual.get("span_source_observation", ""),
            "sampled_variants_for_source": residual.get("sampled_variants_for_source", ""),
            "state_capture_goal": f"emit vm_instruction_trace row with end_vm_ip={start}",
            "minimal_focus_ips": focus_pair,
            "minimal_focus_sites": focus_sites,
            "context_focus_ips": context_ips,
            "context_focus_sites": context_sites,
            "minimal_focus_env": pair_env(pred_ip, start, pred_site, start_site),
            "context_focus_env": pair_env(pred_ip, start, pred_site, start_site, next_end_ip, next_site, include_next=True),
            "trace_note": "capture predecessor and synthetic-start VMTAIL events in one frame so post_state/post_flags/post_byte are available",
        }
        rows.append(row)

    rows.sort(key=lambda row: (parse_int(row.get("primary_predecessor_seq", ""), 1 << 62), sort_hex_key(row.get("synthetic_start_vm_ip", ""))))
    for index, row in enumerate(rows, 1):
        row["rank"] = str(index)
    return rows


FIELDS = [
    "rank",
    "source_entry",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "gap_bytes",
    "concrete_classification",
    "state_trace_rows",
    "primary_predecessor_seq",
    "primary_predecessor_source_entry",
    "primary_predecessor_start_vm_ip",
    "primary_predecessor_end_vm_ip",
    "primary_predecessor_event_site",
    "synthetic_start_event_site",
    "dynamic_start_event_count",
    "dynamic_next_event_count",
    "dynamic_next_site",
    "dynamic_next_end_vm_ip",
    "dynamic_next_tail_target_entry",
    "dynamic_next_source_entry",
    "dynamic_next_source_start_vm_ip",
    "dynamic_next_source_delta",
    "dynamic_hidden_delta",
    "dynamic_candidate_entries",
    "residual_reason",
    "promotion_state",
    "chain_statuses",
    "dynamic_next_end_block",
    "span_source_observation",
    "sampled_variants_for_source",
    "state_capture_goal",
    "minimal_focus_ips",
    "minimal_focus_sites",
    "context_focus_ips",
    "context_focus_sites",
    "minimal_focus_env",
    "context_focus_env",
    "trace_note",
]


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    source_mix = Counter(row.get("source_entry", "") for row in rows)
    start_sites = Counter(row.get("synthetic_start_event_site", "") for row in rows)
    next_sites = Counter(row.get("dynamic_next_site", "") for row in rows)
    print("# Synthetic Gap State-Trace Targets\n")
    print("Focused targets for residual synthetic starts that still lack state-aware predecessor rows.\n")
    print(f"- missing state rows: {len(rows)}")
    print(f"- source mix: {', '.join(f'{key}:{value}' for key, value in source_mix.most_common()) or '-'}")
    print(f"- synthetic-start site mix: {', '.join(f'{key}:{value}' for key, value in start_sites.most_common()) or '-'}")
    print(f"- next-hook site mix: {', '.join(f'{key}:{value}' for key, value in next_sites.most_common()) or '-'}\n")
    print("Minimal capture logs the predecessor tail event plus the synthetic-start tail event, so `vm_trace_graph.py` can emit the missing state row with `end_vm_ip == synthetic_start_vm_ip`.\n")
    print("| Rank | Start | Source | Primary Seq | Pred IP | Sites | Next Hook | Goal |")
    print("| ---: | --- | ---: | ---: | --- | --- | --- | --- |")
    for row in rows:
        sites = f"{row.get('primary_predecessor_event_site') or '-'} + {row.get('synthetic_start_event_site') or '-'}"
        next_hook = (
            f"entry {row.get('dynamic_next_source_entry') or '-'} "
            f"{row.get('dynamic_next_source_start_vm_ip') or '-'} -> {row.get('dynamic_next_end_vm_ip') or '-'}"
        )
        print(
            f"| {row['rank']} | `{row['synthetic_start_vm_ip']}` | {row['source_entry']} | "
            f"{row.get('primary_predecessor_seq') or '-'} | `{row.get('primary_predecessor_start_vm_ip') or '-'}` | "
            f"`{sites}` | `{next_hook}` | {row['state_capture_goal']} |"
        )
    print("\nThe `minimal_focus_env` TSV column gives a per-target focused VMTAIL environment. Set `ALL_TABLE_SPEC` from `python3 vm_tail_scan.py --all-table --eac eac.elf --window 0x1200 --limit 0` before using it. The `context_focus_env` variant also keeps the next hooked event, which is useful for sequence sanity checks but is not required for the concrete-state replay seed.")


def main():
    parser = argparse.ArgumentParser(description="List focused state-trace targets for residual synthetic gaps missing concrete predecessor state.")
    parser.add_argument("--concrete-audit", default=str(DEFAULT_CONCRETE_AUDIT))
    parser.add_argument("--residual-audit", default=str(DEFAULT_RESIDUAL_AUDIT))
    parser.add_argument("--dynamic-stitch", default=str(DEFAULT_DYNAMIC_STITCH))
    parser.add_argument("--primary-trace", default=str(DEFAULT_PRIMARY_TRACE))
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"state_trace_targets={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
