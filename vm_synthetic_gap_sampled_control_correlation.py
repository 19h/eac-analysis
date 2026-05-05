#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_static_dispatch_validate import parse_delta
from vm_synthetic_gap_concrete_state_audit import top_counter


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


FIELDS = [
    "source_entry",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "gap_bytes",
    "footprint_len",
    "span_semantic_gap_class",
    "span_source_observation",
    "sampled_candidate_rows",
    "sampled_target_entries",
    "sampled_deltas",
    "sampled_operand_byte_exact_matches",
    "dynamic_next_source_entry",
    "dynamic_next_source_start_vm_ip",
    "dynamic_next_end_vm_ip",
    "dynamic_next_delta",
    "dynamic_next_matches_sampled_target",
    "dynamic_next_delta_matches_sampled_delta",
    "table_memory_region",
    "table_memory_qword_class",
    "sampled_correlation_class",
    "sampled_variants_for_source",
]


def fmt_delta(value):
    if value is None:
        return ""
    sign = "-" if value < 0 else "+"
    return f"{sign}0x{abs(value):x}"


def compact_counter(items):
    return top_counter(Counter(item for item in items if item))


def split_counter_keys(text):
    out = []
    for item in (text or "").split(","):
        if not item or ":" not in item:
            continue
        key, count = item.rsplit(":", 1)
        try:
            repeat = int(count)
        except ValueError:
            repeat = 1
        out.extend([key] * repeat)
    return out


def load_sampled_candidates(path):
    candidates = {}
    if not path or not Path(path).exists():
        return candidates
    for row in read_tsv(path):
        try:
            footprint_len = parse_hex(row.get("operand_min_len", ""))
        except ValueError:
            continue
        key = (row.get("source_entry", ""), footprint_len)
        candidates.setdefault(key, []).append(row)
    return candidates


def load_table_memory(path):
    out = {}
    if not path or not Path(path).exists():
        return out
    for row in read_tsv(path):
        start = row.get("synthetic_start_vm_ip", "")
        if start:
            out[start] = row
    return out


def classify(candidates, byte_matches, target_match, delta_match):
    if not candidates:
        return "no_sampled_candidate"
    if byte_matches and target_match and delta_match:
        return "exact_sampled_candidate_matches_dynamic_next"
    if byte_matches and target_match:
        return "exact_sampled_bytes_target_match_delta_mismatch"
    if byte_matches:
        return "exact_sampled_bytes_only"
    if target_match and delta_match:
        return "sampled_target_delta_match"
    if target_match:
        return "sampled_target_match_delta_mismatch"
    return "sequence_only_no_sampled_target_match"


def build_rows(args):
    sampled_by_source_len = load_sampled_candidates(args.sampled_operands)
    table_memory = load_table_memory(args.table_memory_probe)
    rows = []
    for residual in read_tsv(args.residual_audit):
        start = residual.get("synthetic_start_vm_ip", "")
        gap_bytes = residual.get("gap_bytes", "")
        try:
            footprint_len = len(bytes.fromhex(gap_bytes))
        except ValueError:
            footprint_len = 0
        candidates = sampled_by_source_len.get((residual.get("source_entry", ""), footprint_len), [])
        sampled_targets = [row.get("target_entry", "") for row in candidates]
        sampled_deltas = [row.get("delta", "") for row in candidates]
        sampled_delta_values = set()
        for delta in sampled_deltas:
            try:
                sampled_delta_values.add(parse_delta(delta))
            except (TypeError, ValueError):
                pass

        byte_matches = []
        for row in candidates:
            for byte_variant in split_counter_keys(row.get("top_operand_bytes", "")):
                if byte_variant == gap_bytes:
                    byte_matches.append(f"{row.get('target_entry', '')}:{row.get('delta', '')}")

        dynamic_next = residual.get("dynamic_next_source_entry", "")
        target_match = dynamic_next in sampled_targets
        try:
            dynamic_delta_value = parse_hex(residual.get("dynamic_next_source_start_vm_ip", "")) - parse_hex(start)
        except ValueError:
            dynamic_delta_value = None
        delta_match = dynamic_delta_value in sampled_delta_values if dynamic_delta_value is not None else False
        memory = table_memory.get(start, {})

        rows.append({
            "source_entry": residual.get("source_entry", ""),
            "synthetic_start_vm_ip": start,
            "missing_successor_vm_ip": residual.get("missing_successor_vm_ip", ""),
            "gap_bytes": gap_bytes,
            "footprint_len": f"0x{footprint_len:x}",
            "span_semantic_gap_class": residual.get("span_semantic_gap_class", ""),
            "span_source_observation": residual.get("span_source_observation", ""),
            "sampled_candidate_rows": str(len(candidates)),
            "sampled_target_entries": compact_counter(sampled_targets),
            "sampled_deltas": compact_counter(sampled_deltas),
            "sampled_operand_byte_exact_matches": ",".join(byte_matches) or "-",
            "dynamic_next_source_entry": dynamic_next,
            "dynamic_next_source_start_vm_ip": residual.get("dynamic_next_source_start_vm_ip", ""),
            "dynamic_next_end_vm_ip": residual.get("dynamic_next_end_vm_ip", ""),
            "dynamic_next_delta": fmt_delta(dynamic_delta_value),
            "dynamic_next_matches_sampled_target": "yes" if target_match else "no",
            "dynamic_next_delta_matches_sampled_delta": "yes" if delta_match else "no",
            "table_memory_region": memory.get("region", ""),
            "table_memory_qword_class": memory.get("file_qword_class", ""),
            "sampled_correlation_class": classify(candidates, byte_matches, target_match, delta_match),
            "sampled_variants_for_source": residual.get("sampled_variants_for_source", ""),
        })
    return rows


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    writer.writerows(rows)


def emit_markdown(rows):
    classes = Counter(row.get("sampled_correlation_class", "") for row in rows)
    target_matches = sum(1 for row in rows if row.get("dynamic_next_matches_sampled_target") == "yes")
    delta_matches = sum(1 for row in rows if row.get("dynamic_next_delta_matches_sampled_delta") == "yes")
    byte_matches = sum(1 for row in rows if row.get("sampled_operand_byte_exact_matches") != "-")
    print("# Synthetic Gap Sampled-Control Correlation\n")
    print("Correlation between residual synthetic starts, sampled-operand sidecars, table-memory rejection, and the next hooked VMTAIL source.\n")
    print(f"Rows: `{len(rows)}`\n")
    print(f"- dynamic next source matches a sampled target entry: `{target_matches}`")
    print(f"- dynamic next delta matches a sampled delta: `{delta_matches}`")
    print(f"- exact gap bytes match a sampled operand row: `{byte_matches}`\n")
    print("## Correlation Mix\n")
    print("| Class | Rows |")
    print("| --- | ---: |")
    for key, value in classes.most_common():
        print(f"| `{key}` | {value} |")
    print("\n## Residual Starts\n")
    print("| Start | Source | Dynamic Next | Sampled Targets | Sampled Deltas | Table Region | Class |")
    print("| --- | ---: | --- | --- | --- | --- | --- |")
    for row in rows:
        dynamic_next = row.get("dynamic_next_source_start_vm_ip", "") or "-"
        if row.get("dynamic_next_source_entry", ""):
            dynamic_next = f"entry {row.get('dynamic_next_source_entry')} @ {dynamic_next}"
        print(
            f"| `{row.get('synthetic_start_vm_ip', '')}` | {row.get('source_entry', '')} | "
            f"{dynamic_next} | `{row.get('sampled_target_entries', '-')}` | "
            f"`{row.get('sampled_deltas', '-')}` | `{row.get('table_memory_region', '-')}` | "
            f"`{row.get('sampled_correlation_class', '')}` |"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Correlate residual synthetic gaps with sampled-operand hidden-control sidecars."
    )
    parser.add_argument("--residual-audit", default=str(TRACE_DIR / "vm_synthetic_gap_residual_audit.tsv"))
    parser.add_argument("--sampled-operands", default=str(TRACE_DIR / "vm_sampled_operand_catalog.tsv"))
    parser.add_argument("--table-memory-probe", default=str(TRACE_DIR / "vm_synthetic_gap_table_memory_probe.tsv"))
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_sampled_control_correlation_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
