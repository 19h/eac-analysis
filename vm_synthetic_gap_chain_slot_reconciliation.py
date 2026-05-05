#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
DISPATCH_ENTRIES = 360


FIELDS = [
    "chain_start_vm_ip",
    "step_index",
    "step_vm_ip",
    "step_source_entry",
    "step_role",
    "first_hop_kind",
    "first_hop_target_entry",
    "first_hop_slot_offset",
    "first_hop_vm_ip",
    "following_residual_start",
    "transfer_classification",
    "transfer_zero_seed_status",
    "transfer_ip_expr",
    "transfer_slot_expr",
    "table_diagnosis",
    "table_offset",
    "table_entry",
    "table_alignment",
    "table_region",
    "table_qword_class",
    "runtime_matches_file",
    "runtime_qword_class",
    "sampled_correlation_class",
    "sampled_target_entries",
    "dynamic_next_source_entry",
    "dynamic_next_source_start_vm_ip",
    "dynamic_next_end_vm_ip",
    "slot_target_relation",
    "reconciliation_class",
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
        if start:
            row = dict(row)
            row["synthetic_start_vm_ip"] = start
            out[start] = row
    return out


def parse_int(text):
    if text in (None, ""):
        return None
    try:
        return int(text, 0)
    except ValueError:
        return None


def slot_relation(first_target, table):
    target = parse_int(first_target)
    offset = parse_int(table.get("table_offset", ""))
    if target is None:
        return "", "no_first_hop_target"
    target_off = target * 8
    if offset is None:
        return f"0x{target_off:x}", "no_table_offset"
    alignment = offset & 7
    if alignment:
        return f"0x{target_off:x}", "table_offset_misaligned_vs_first_hop_slot"
    entry = offset // 8
    if entry == target:
        return f"0x{target_off:x}", "table_offset_matches_first_hop_slot"
    if entry < 0 or entry >= DISPATCH_ENTRIES:
        return f"0x{target_off:x}", "table_offset_oob_vs_first_hop_slot"
    return f"0x{target_off:x}", "table_offset_other_dispatch_slot"


def reconciliation_class(relation, transfer, table, runtime, sampled):
    if relation == "table_offset_matches_first_hop_slot":
        return "table_slot_matches_focused_first_hop"
    if relation in {"table_offset_misaligned_vs_first_hop_slot", "table_offset_oob_vs_first_hop_slot"}:
        return "table_read_rejects_focused_first_hop_as_direct_slot"
    if table.get("file_qword_class", "") == "non_pointer_bytes" or runtime.get("runtime_qword_class", "") == "non_pointer_bytes":
        return "table_bytes_non_pointer_for_focused_first_hop"
    if transfer.get("classification", "") == "symbolic_slot_expr":
        if sampled.get("dynamic_next_matches_sampled_target", "") == "yes":
            return "symbolic_slot_with_sampled_dynamic_target_support"
        return "symbolic_slot_sequence_only"
    if relation == "no_table_offset":
        return "focused_first_hop_without_table_probe"
    return "unclassified"


def build_rows(args):
    transfer = load_by_start(args.transfer_probe)
    table = load_by_start(args.table_memory_probe)
    runtime = load_by_start(args.runtime_table_memory_probe)
    sampled = load_by_start(args.sampled_control_correlation)

    rows = []
    for step in read_tsv(args.observed_chain_replay):
        start = normalize_vm_ip(step.get("step_vm_ip", ""))
        transfer_row = transfer.get(start, {})
        table_row = table.get(start, {})
        runtime_row = runtime.get(start, {})
        sampled_row = sampled.get(start, {})
        first_hop_slot, relation = slot_relation(step.get("first_hop_target_entry", ""), table_row)
        rows.append({
            "chain_start_vm_ip": normalize_vm_ip(step.get("chain_start_vm_ip", "")),
            "step_index": step.get("step_index", ""),
            "step_vm_ip": start,
            "step_source_entry": step.get("step_source_entry", ""),
            "step_role": step.get("step_role", ""),
            "first_hop_kind": step.get("first_hop_kind", ""),
            "first_hop_target_entry": step.get("first_hop_target_entry", ""),
            "first_hop_slot_offset": first_hop_slot,
            "first_hop_vm_ip": normalize_vm_ip(step.get("first_hop_vm_ip", "")),
            "following_residual_start": normalize_vm_ip(step.get("following_residual_start", "")),
            "transfer_classification": transfer_row.get("classification", ""),
            "transfer_zero_seed_status": transfer_row.get("zero_seed_status", ""),
            "transfer_ip_expr": transfer_row.get("ip_expr", ""),
            "transfer_slot_expr": transfer_row.get("slot_expr", ""),
            "table_diagnosis": table_row.get("diagnosis", ""),
            "table_offset": table_row.get("table_offset", ""),
            "table_entry": table_row.get("dispatch_entry", "") or table_row.get("nearest_dispatch_entry", ""),
            "table_alignment": table_row.get("alignment", ""),
            "table_region": table_row.get("region", ""),
            "table_qword_class": table_row.get("file_qword_class", ""),
            "runtime_matches_file": runtime_row.get("runtime_matches_file", ""),
            "runtime_qword_class": runtime_row.get("runtime_qword_class", ""),
            "sampled_correlation_class": sampled_row.get("sampled_correlation_class", ""),
            "sampled_target_entries": sampled_row.get("sampled_target_entries", ""),
            "dynamic_next_source_entry": sampled_row.get("dynamic_next_source_entry", "") or table_row.get("dynamic_next_source_entry", ""),
            "dynamic_next_source_start_vm_ip": normalize_vm_ip(sampled_row.get("dynamic_next_source_start_vm_ip", "") or table_row.get("dynamic_next_source_start_vm_ip", "")),
            "dynamic_next_end_vm_ip": normalize_vm_ip(sampled_row.get("dynamic_next_end_vm_ip", "") or table_row.get("dynamic_next_end_vm_ip", "")),
            "slot_target_relation": relation,
            "reconciliation_class": reconciliation_class(relation, transfer_row, table_row, runtime_row, sampled_row),
        })
    return rows


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    relation_mix = Counter(row.get("slot_target_relation", "") for row in rows)
    class_mix = Counter(row.get("reconciliation_class", "") for row in rows)
    role_mix = Counter(row.get("step_role", "") for row in rows)
    terminal_rows = [row for row in rows if row.get("step_role", "").endswith("terminal_step")]

    print("# Synthetic Gap Chain Slot Reconciliation\n")
    print(
        "Observed-chain replay steps are joined to symbolic transfer probes, table-read diagnostics, "
        "runtime table-memory probes, and sampled-control sidecars. The check asks whether the final "
        "symbolic/table slot evidence directly names the focused first-hop target entry.\n"
    )
    print(f"Rows: `{len(rows)}`")
    print(f"Terminal rows: `{len(terminal_rows)}`\n")

    print("## Slot Relation Mix\n")
    print("| Relation | Rows |")
    print("| --- | ---: |")
    for key, value in relation_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## Reconciliation Class Mix\n")
    print("| Class | Rows |")
    print("| --- | ---: |")
    for key, value in class_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## Step Role Mix\n")
    print("| Role | Rows |")
    print("| --- | ---: |")
    for key, value in role_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## Reconciliation Rows\n")
    print(
        "| Chain | Step | VM IP | Source | First Target | Target Slot | Table Offset | "
        "Table Region | Sampled | Dynamic Next | Relation | Class |"
    )
    print("| --- | ---: | --- | ---: | ---: | --- | --- | --- | --- | --- | --- | --- |")
    for row in rows:
        dynamic = "-"
        if row.get("dynamic_next_source_entry", ""):
            dynamic = (
                f"entry_{row.get('dynamic_next_source_entry')}@"
                f"{row.get('dynamic_next_source_start_vm_ip')}->{row.get('dynamic_next_end_vm_ip')}"
            )
        print(
            f"| `{row.get('chain_start_vm_ip', '')}` | {row.get('step_index', '')} | "
            f"`{row.get('step_vm_ip', '')}` | {row.get('step_source_entry', '') or '-'} | "
            f"{row.get('first_hop_target_entry', '') or '-'} | `{row.get('first_hop_slot_offset', '') or '-'}` | "
            f"`{row.get('table_offset', '') or '-'}` | `{row.get('table_region', '') or '-'}`/"
            f"`{row.get('table_qword_class', '') or '-'}` | "
            f"`{row.get('sampled_correlation_class', '') or '-'}` | `{dynamic}` | "
            f"`{row.get('slot_target_relation', '')}` | `{row.get('reconciliation_class', '')}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Reconcile observed-chain first-hop targets with symbolic/table slot evidence.")
    parser.add_argument("--observed-chain-replay", default=str(TRACE_DIR / "vm_synthetic_gap_observed_chain_replay.tsv"))
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
    print(f"synthetic_gap_chain_slot_reconciliation_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
