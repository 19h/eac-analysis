#!/usr/bin/env python3
import argparse
import csv
import hashlib
import sys
from collections import Counter, defaultdict
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


FIELDS = [
    "family_id",
    "family_member_count",
    "family_rank",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "source_entry",
    "transfer_path_hash",
    "transfer_branch_unknown",
    "transfer_ip_expr",
    "slot_expr_hash",
    "operand_bytes",
    "footprint_len",
    "zero_seed_status",
    "zero_seed_pred_entry",
    "zero_seed_pred_delta",
    "table_diagnosis",
    "table_offset",
    "table_region",
    "table_alignment",
    "runtime_matches_file",
    "runtime_qword_class",
    "sampled_correlation_class",
    "sampled_target_entries",
    "sampled_deltas",
    "dynamic_next_source_entry",
    "dynamic_next_source_start_vm_ip",
    "dynamic_next_end_vm_ip",
    "observed_first_hop_target_entry",
    "observed_first_hop_vm_ip",
    "following_residual_start",
    "observed_chain_bridge_class",
    "terminal_dest_vm_ip",
    "terminal_dest_block",
    "terminal_dest_entry",
    "primary_vs_focused_first_hop",
    "family_key",
    "next_reconstruction_target",
]


def normalize_vm_ip(text):
    if not text:
        return ""
    try:
        return f"0x{parse_hex(text):x}"
    except (TypeError, ValueError):
        return text


def load_by_start(path):
    out = {}
    if not path or not Path(path).exists():
        return out
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if not start:
            continue
        row = dict(row)
        row["synthetic_start_vm_ip"] = start
        for key in (
            "missing_successor_vm_ip",
            "dynamic_next_source_start_vm_ip",
            "dynamic_next_end_vm_ip",
            "first_hop_vm_ip",
            "following_residual_start",
            "terminal_dest_vm_ip",
        ):
            if key in row:
                row[key] = normalize_vm_ip(row.get(key, ""))
        out[start] = row
    return out


def first_counter_label(text):
    if not text or text == "-":
        return ""
    return text.split(",", 1)[0].split(":", 1)[0]


def footprint_len(row):
    raw = row.get("footprint_len", "")
    if raw:
        return raw
    statuses = row.get("gap_statuses", "") or row.get("synthetic_statuses", "")
    if "target_footprint_of_" in statuses:
        return "0x" + statuses.split("target_footprint_of_", 1)[1].split(":", 1)[0]
    return ""


def short_hash(text, size=12):
    if not text:
        return ""
    return hashlib.sha256(text.encode()).hexdigest()[:size]


def family_key(bridge, transfer, table, sample):
    return "|".join([
        bridge.get("source_entry", ""),
        transfer.get("path_hash", ""),
        transfer.get("ip_expr", ""),
        short_hash(transfer.get("slot_expr", "")),
        footprint_len(sample) or footprint_len(transfer),
        table.get("diagnosis", ""),
        table.get("region", ""),
        bridge.get("observed_chain_bridge_class", ""),
        bridge.get("terminal_dest_block", ""),
        sample.get("sampled_correlation_class", ""),
        first_counter_label(sample.get("sampled_target_entries", "")),
    ])


def recommendation(row):
    klass = row.get("observed_chain_bridge_class", "")
    relation = row.get("primary_vs_focused_first_hop", "")
    source = row.get("source_entry", "")
    if klass == "sequence_chain_to_focused_direct_bridge":
        return "replay_first_indirect_hop_then_promoted_terminal"
    if relation == "focused_first_hop_matches_primary_next_end":
        return "isolate_context_reentry_first_hop"
    if source in {"175", "195", "299"}:
        return "solve_repeated_central_dispatch_family"
    return "solve_unique_transfer_family"


def build_rows(args):
    bridge_by_start = load_by_start(args.observed_chain_bridge)
    transfer_by_start = load_by_start(args.transfer_probe)
    table_by_start = load_by_start(args.table_memory_probe)
    runtime_by_start = load_by_start(args.runtime_table_memory_probe)
    sample_by_start = load_by_start(args.sampled_control_correlation)

    raw_rows = []
    for start, bridge in sorted(bridge_by_start.items(), key=lambda item: parse_hex(item[0])):
        if bridge.get("bridge_action", "") != "disabled_observed_chain_bridge":
            continue
        transfer = transfer_by_start.get(start, {})
        table = table_by_start.get(start, {})
        runtime = runtime_by_start.get(start, {})
        sample = sample_by_start.get(start, {})
        key = family_key(bridge, transfer, table, sample)
        raw_rows.append((key, {
            "synthetic_start_vm_ip": start,
            "missing_successor_vm_ip": bridge.get("missing_successor_vm_ip", ""),
            "source_entry": bridge.get("source_entry", ""),
            "transfer_path_hash": transfer.get("path_hash", ""),
            "transfer_branch_unknown": transfer.get("branch_unknown", ""),
            "transfer_ip_expr": transfer.get("ip_expr", ""),
            "slot_expr_hash": short_hash(transfer.get("slot_expr", "")),
            "operand_bytes": transfer.get("operand_bytes", ""),
            "footprint_len": footprint_len(sample) or footprint_len(transfer),
            "zero_seed_status": transfer.get("zero_seed_status", ""),
            "zero_seed_pred_entry": transfer.get("zero_seed_pred_entry", ""),
            "zero_seed_pred_delta": transfer.get("zero_seed_pred_delta", ""),
            "table_diagnosis": table.get("diagnosis", ""),
            "table_offset": table.get("table_offset", ""),
            "table_region": table.get("region", ""),
            "table_alignment": table.get("alignment", ""),
            "runtime_matches_file": runtime.get("runtime_matches_file", ""),
            "runtime_qword_class": runtime.get("runtime_qword_class", ""),
            "sampled_correlation_class": sample.get("sampled_correlation_class", ""),
            "sampled_target_entries": sample.get("sampled_target_entries", ""),
            "sampled_deltas": sample.get("sampled_deltas", ""),
            "dynamic_next_source_entry": sample.get("dynamic_next_source_entry", "") or table.get("dynamic_next_source_entry", ""),
            "dynamic_next_source_start_vm_ip": normalize_vm_ip(sample.get("dynamic_next_source_start_vm_ip", "") or table.get("dynamic_next_source_start_vm_ip", "")),
            "dynamic_next_end_vm_ip": normalize_vm_ip(sample.get("dynamic_next_end_vm_ip", "") or table.get("dynamic_next_end_vm_ip", "")),
            "observed_first_hop_target_entry": bridge.get("first_hop_target_entry", ""),
            "observed_first_hop_vm_ip": bridge.get("first_hop_vm_ip", ""),
            "following_residual_start": bridge.get("following_residual_start", ""),
            "observed_chain_bridge_class": bridge.get("observed_chain_bridge_class", ""),
            "terminal_dest_vm_ip": bridge.get("terminal_dest_vm_ip", ""),
            "terminal_dest_block": bridge.get("terminal_dest_block", ""),
            "terminal_dest_entry": bridge.get("terminal_dest_entry", ""),
            "primary_vs_focused_first_hop": bridge.get("primary_vs_focused_first_hop", ""),
            "family_key": key,
        }))

    members = Counter(key for key, _row in raw_rows)
    ordered_families = [
        key for key, _count in sorted(
            members.items(),
            key=lambda item: (-item[1], min(parse_hex(row["synthetic_start_vm_ip"]) for row_key, row in raw_rows if row_key == item[0])),
        )
    ]
    family_ids = {key: f"ufam_{idx:02d}" for idx, key in enumerate(ordered_families)}
    family_ranks = {key: str(idx) for idx, key in enumerate(ordered_families)}

    rows = []
    for key, row in raw_rows:
        out = {
            "family_id": family_ids[key],
            "family_member_count": str(members[key]),
            "family_rank": family_ranks[key],
            **row,
        }
        out["next_reconstruction_target"] = recommendation(out)
        rows.append(out)
    return rows


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    by_family = defaultdict(list)
    for row in rows:
        by_family[row.get("family_id", "")].append(row)

    source_mix = Counter(row.get("source_entry", "") for row in rows)
    action_mix = Counter(row.get("next_reconstruction_target", "") for row in rows)
    class_mix = Counter(row.get("observed_chain_bridge_class", "") for row in rows)
    table_mix = Counter(row.get("table_diagnosis", "") for row in rows)

    print("# Synthetic Gap Unresolved Family Audit\n")
    print(
        "The 15 default-unresolved synthetic successor calls are clustered by transfer path, slot expression, "
        "table rejection, sampled sidecar, and observed terminal class. This is triage for the next hard-CFG "
        "recovery step; it does not promote sequence-only evidence.\n"
    )
    print(f"Unresolved starts: `{len(rows)}`")
    print(f"Families: `{len(by_family)}`\n")

    print("## Mixes\n")
    for title, counter in [
        ("Source Entry", source_mix),
        ("Observed Chain Class", class_mix),
        ("Table Diagnosis", table_mix),
        ("Recommended Next Target", action_mix),
    ]:
        print(f"\n### {title}\n")
        print("| Value | Rows |")
        print("| --- | ---: |")
        for key, value in counter.most_common():
            print(f"| `{key or '-'}` | {value} |")

    print("\n## Families\n")
    print(
        "| Family | Rows | Source | Path Hash | Slot Hash | IP | Footprint | Table | "
        "Sampled | Chain Class | Terminal | Next Target | Members |"
    )
    print("| --- | ---: | ---: | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |")
    for family_id, fam_rows in sorted(by_family.items(), key=lambda item: int(item[0].rsplit("_", 1)[1])):
        first = fam_rows[0]
        members = ", ".join(row["synthetic_start_vm_ip"] for row in fam_rows)
        terminal = f"prog_bb_{int(first['terminal_dest_block'] or 0):04d}@{first['terminal_dest_vm_ip']}" if first.get("terminal_dest_block") else first.get("terminal_dest_vm_ip", "")
        print(
            f"| `{family_id}` | {len(fam_rows)} | {first.get('source_entry') or '-'} | "
            f"`{first.get('transfer_path_hash') or '-'}` | `{first.get('slot_expr_hash') or '-'}` | "
            f"`{first.get('transfer_ip_expr') or '-'}` | `{first.get('footprint_len') or '-'}` | "
            f"`{first.get('table_diagnosis') or '-'}`/`{first.get('table_region') or '-'}` | "
            f"`{first.get('sampled_target_entries') or '-'}` | `{first.get('observed_chain_bridge_class') or '-'}` | "
            f"`{terminal or '-'}` | `{first.get('next_reconstruction_target') or '-'}` | `{members}` |"
        )

    print("\n## Starts\n")
    print(
        "| Start | Family | Source | Missing | First Hop | Dynamic Next | Sampled | Table | Terminal |"
    )
    print("| --- | --- | ---: | --- | --- | --- | --- | --- | --- |")
    for row in rows:
        first_hop = f"entry_{row.get('observed_first_hop_target_entry') or '-'}@{row.get('observed_first_hop_vm_ip') or '-'}"
        dynamic = f"entry_{row.get('dynamic_next_source_entry') or '-'}@{row.get('dynamic_next_source_start_vm_ip') or '-'}->{row.get('dynamic_next_end_vm_ip') or '-'}"
        terminal = f"prog_bb_{int(row['terminal_dest_block'] or 0):04d}@{row['terminal_dest_vm_ip']}" if row.get("terminal_dest_block") else row.get("terminal_dest_vm_ip", "")
        table = f"{row.get('table_diagnosis') or '-'} {row.get('table_offset') or '-'}"
        print(
            f"| `{row.get('synthetic_start_vm_ip')}` | `{row.get('family_id')}` | {row.get('source_entry') or '-'} | "
            f"`{row.get('missing_successor_vm_ip')}` | `{first_hop}` | `{dynamic}` | "
            f"`{row.get('sampled_target_entries') or '-'}` | `{table}` | `{terminal or '-'}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Cluster default-unresolved synthetic successor calls by recovery evidence family.")
    parser.add_argument("--observed-chain-bridge", default=str(TRACE_DIR / "vm_synthetic_gap_observed_chain_bridge.tsv"))
    parser.add_argument("--transfer-probe", default=str(TRACE_DIR / "vm_synthetic_gap_transfer_probe.tsv"))
    parser.add_argument("--table-memory-probe", default=str(TRACE_DIR / "vm_synthetic_gap_table_memory_probe.tsv"))
    parser.add_argument("--runtime-table-memory-probe", default=str(TRACE_DIR / "vm_synthetic_gap_runtime_table_memory_probe.tsv"))
    parser.add_argument("--sampled-control-correlation", default=str(TRACE_DIR / "vm_synthetic_gap_sampled_control_correlation.tsv"))
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_unresolved_family_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
