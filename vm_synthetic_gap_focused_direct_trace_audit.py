#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_synthetic_gap_concrete_state_audit import top_counter


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
DEFAULT_FOCUSED_TRACES = [
    Path("dumps/vmtail-live-residual-targets/vm_instruction_trace.tsv"),
    Path("dumps/vmtail-state-residual-targets/vm_instruction_trace.tsv"),
]


FIELDS = [
    "source_entry",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "focused_trace_rows",
    "focused_unique_transfers",
    "focused_trace_files",
    "focused_source_entries",
    "focused_target_entries",
    "focused_targets",
    "focused_end_vm_ips",
    "focused_deltas",
    "focused_sites",
    "focused_byte_statuses",
    "focused_dest_blocks",
    "focused_dest_ir_starts",
    "focused_dest_ir_ends",
    "focused_dest_segments",
    "dynamic_next_source_entry",
    "dynamic_next_source_start_vm_ip",
    "dynamic_next_end_vm_ip",
    "dynamic_next_source_matches_focused_source",
    "dynamic_next_start_matches_focused_start",
    "dynamic_next_end_matches_focused_end",
    "focused_direct_class",
    "promotion_candidate",
    "promotion_blocker",
    "example_trace_file",
    "example_seq",
    "example_source_entry",
    "example_start_vm_ip",
    "example_end_vm_ip",
    "example_delta",
    "example_target_entry",
    "example_target",
    "example_site",
    "example_byte_status",
    "example_bytes",
    "example_dest_block",
    "example_dest_segment",
]


def compact(items):
    return top_counter(Counter(item for item in items if item))


def normalize_trace_name(path):
    path = Path(path)
    try:
        return str(path.relative_to(Path.cwd()))
    except ValueError:
        return str(path)


def load_blocks(path):
    by_start = {}
    if not path or not Path(path).exists():
        return by_start
    for row in read_tsv(path):
        start = row.get("start_vm_ip", "")
        if start:
            by_start.setdefault(start, []).append(row)
    return by_start


def load_ir(path):
    by_start = {}
    by_end = {}
    if not path or not Path(path).exists():
        return by_start, by_end
    for row in read_tsv(path):
        start = row.get("start_vm_ip", "")
        end = row.get("end_vm_ip", "")
        if start:
            by_start.setdefault(start, []).append(row)
        if end:
            by_end.setdefault(end, []).append(row)
    return by_start, by_end


def load_segments(path):
    segments = []
    if not path or not Path(path).exists():
        return segments
    for row in read_tsv(path):
        try:
            start = parse_hex(row.get("start", ""))
            end = parse_hex(row.get("end", ""))
        except ValueError:
            continue
        segments.append((start, end, row))
    return segments


def segments_containing(segments, addr_text):
    try:
        addr = parse_hex(addr_text)
    except ValueError:
        return []
    out = []
    for start, end, row in segments:
        if start <= addr < end:
            out.append(row)
    return out


def load_focused_rows(paths, residual_starts):
    rows_by_start = {}
    for path in paths:
        path = Path(path)
        if not path.exists():
            continue
        trace_name = normalize_trace_name(path)
        for row in read_tsv(path):
            start = row.get("start_vm_ip", "")
            if start not in residual_starts:
                continue
            copied = dict(row)
            copied["trace_file"] = trace_name
            rows_by_start.setdefault(start, []).append(copied)
    return rows_by_start


def row_signature(row):
    return (
        row.get("source_entry", ""),
        row.get("start_vm_ip", ""),
        row.get("end_vm_ip", ""),
        row.get("delta", ""),
        row.get("target_entry", ""),
        row.get("target", ""),
        row.get("site", ""),
        row.get("bytes", ""),
        row.get("byte_status", ""),
    )


def unique_rows(rows):
    seen = set()
    out = []
    for row in rows:
        sig = row_signature(row)
        if sig in seen:
            continue
        seen.add(sig)
        out.append(row)
    return out


def byte_backed(row):
    status = row.get("byte_status", "")
    return (
        status == "exact"
        or status.startswith("prefix_")
        or status.startswith("file_span_")
        or status.startswith("hidden_span_")
        or status.startswith("frontier_span_")
        or status.startswith("target_footprint_")
    )


def classify(unique, dest_blocks):
    if not unique:
        return "no_focused_direct_trace", "no", "no focused trace row starts at the residual VM IP"
    if len(unique) != 1:
        recovered = sum(1 for row in unique if dest_blocks.get(row.get("end_vm_ip", "")))
        if recovered == len(unique):
            return "conflicting_direct_traces_to_recovered_blocks", "no", "multiple unique focused transfers"
        if recovered:
            return "mixed_direct_trace_destinations", "no", "some focused transfers do not land on recovered block starts"
        return "direct_trace_to_uncovered_destination", "no", "focused transfers do not land on recovered block starts"
    row = unique[0]
    end = row.get("end_vm_ip", "")
    if not dest_blocks.get(end):
        return "direct_trace_to_uncovered_destination", "no", "focused transfer destination is not a recovered block start"
    required = ("source_entry", "target_entry", "target", "delta", "bytes")
    missing = [field for field in required if not row.get(field, "")]
    if missing:
        return "direct_trace_to_recovered_block", "no", "missing " + ",".join(missing)
    if not byte_backed(row):
        return "direct_trace_to_recovered_block", "no", "focused trace row is not file/prefix byte-backed"
    return "direct_trace_to_recovered_block", "yes", "-"


def build_rows(args):
    residual_rows = list(read_tsv(args.residual_audit))
    residual_starts = {row.get("synthetic_start_vm_ip", "") for row in residual_rows}
    focused_by_start = load_focused_rows(args.trace, residual_starts)
    blocks_by_start = load_blocks(args.blocks)
    ir_by_start, ir_by_end = load_ir(args.ir)
    segments = load_segments(args.segments)

    out = []
    for residual in residual_rows:
        start = residual.get("synthetic_start_vm_ip", "")
        rows = focused_by_start.get(start, [])
        unique = unique_rows(rows)
        end_ips = [row.get("end_vm_ip", "") for row in unique]
        dest_blocks = {
            end: blocks_by_start.get(end, [])
            for end in end_ips
            if end
        }
        cls, candidate, blocker = classify(unique, dest_blocks)
        example = unique[0] if unique else {}
        example_end = example.get("end_vm_ip", "")
        example_blocks = dest_blocks.get(example_end, [])
        example_block = example_blocks[0].get("block", "") if example_blocks else ""
        example_segments = segments_containing(segments, example_end)
        example_segment = ""
        if example_segments:
            seg = example_segments[0]
            example_segment = f"{seg.get('segment', '')}:{seg.get('start', '')}..{seg.get('end', '')}"

        dynamic_source = residual.get("dynamic_next_source_entry", "")
        dynamic_start = residual.get("dynamic_next_source_start_vm_ip", "")
        dynamic_end = residual.get("dynamic_next_end_vm_ip", "")
        focused_sources = {row.get("source_entry", "") for row in unique}
        focused_starts = {row.get("start_vm_ip", "") for row in unique}
        focused_ends = {row.get("end_vm_ip", "") for row in unique}

        block_matches = []
        ir_start_matches = []
        ir_end_matches = []
        segment_matches = []
        for end in end_ips:
            for block in blocks_by_start.get(end, []):
                block_matches.append(f"{block.get('block', '')}@{block.get('start_vm_ip', '')}")
            for row in ir_by_start.get(end, []):
                ir_start_matches.append(f"{row.get('source_entry', '')}@{row.get('start_vm_ip', '')}")
            for row in ir_by_end.get(end, []):
                ir_end_matches.append(f"{row.get('source_entry', '')}@{row.get('start_vm_ip', '')}->{row.get('end_vm_ip', '')}")
            for seg in segments_containing(segments, end):
                segment_matches.append(f"{seg.get('segment', '')}:{seg.get('start', '')}..{seg.get('end', '')}")

        out.append({
            "source_entry": residual.get("source_entry", ""),
            "synthetic_start_vm_ip": start,
            "missing_successor_vm_ip": residual.get("missing_successor_vm_ip", ""),
            "focused_trace_rows": str(len(rows)),
            "focused_unique_transfers": str(len(unique)),
            "focused_trace_files": compact(row.get("trace_file", "") for row in rows),
            "focused_source_entries": compact(row.get("source_entry", "") for row in unique),
            "focused_target_entries": compact(row.get("target_entry", "") for row in unique),
            "focused_targets": compact(row.get("target", "") for row in unique),
            "focused_end_vm_ips": compact(row.get("end_vm_ip", "") for row in unique),
            "focused_deltas": compact(row.get("delta", "") for row in unique),
            "focused_sites": compact(row.get("site", "") for row in unique),
            "focused_byte_statuses": compact(row.get("byte_status", "") for row in unique),
            "focused_dest_blocks": compact(block_matches),
            "focused_dest_ir_starts": compact(ir_start_matches),
            "focused_dest_ir_ends": compact(ir_end_matches),
            "focused_dest_segments": compact(segment_matches),
            "dynamic_next_source_entry": dynamic_source,
            "dynamic_next_source_start_vm_ip": dynamic_start,
            "dynamic_next_end_vm_ip": dynamic_end,
            "dynamic_next_source_matches_focused_source": "yes" if dynamic_source and dynamic_source in focused_sources else "no",
            "dynamic_next_start_matches_focused_start": "yes" if dynamic_start and dynamic_start in focused_starts else "no",
            "dynamic_next_end_matches_focused_end": "yes" if dynamic_end and dynamic_end in focused_ends else "no",
            "focused_direct_class": cls,
            "promotion_candidate": candidate,
            "promotion_blocker": blocker,
            "example_trace_file": example.get("trace_file", ""),
            "example_seq": example.get("seq", ""),
            "example_source_entry": example.get("source_entry", ""),
            "example_start_vm_ip": example.get("start_vm_ip", ""),
            "example_end_vm_ip": example_end,
            "example_delta": example.get("delta", ""),
            "example_target_entry": example.get("target_entry", ""),
            "example_target": example.get("target", ""),
            "example_site": example.get("site", ""),
            "example_byte_status": example.get("byte_status", ""),
            "example_bytes": example.get("bytes", ""),
            "example_dest_block": example_block,
            "example_dest_segment": example_segment,
        })
    return out


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    writer.writerows(rows)


def emit_markdown(rows):
    classes = Counter(row.get("focused_direct_class", "") for row in rows)
    candidates = [row for row in rows if row.get("promotion_candidate", "") == "yes"]
    with_rows = [row for row in rows if int(row.get("focused_trace_rows", "0") or 0) > 0]
    print("# Synthetic Gap Focused Direct-Trace Audit\n")
    print("Focused live/state residual traces checked for rows that start exactly at the residual synthetic VM IP.\n")
    print(f"Rows: `{len(rows)}`\n")
    print(f"- residual starts with focused direct rows: `{len(with_rows)}`")
    print(f"- hard bridge candidates to recovered block starts: `{len(candidates)}`")
    print(f"- unique recovered destinations: `{len({row.get('example_end_vm_ip', '') for row in candidates})}`\n")
    print("## Class Mix\n")
    print("| Class | Rows |")
    print("| --- | ---: |")
    for key, value in classes.most_common():
        print(f"| `{key}` | {value} |")
    print("\n## Direct Trace Rows\n")
    print("| Start | Source | Focused Transfer | Dest Block | Target | Candidate | Class |")
    print("| --- | ---: | --- | --- | --- | --- | --- |")
    for row in rows:
        transfer = "-"
        if row.get("example_end_vm_ip", ""):
            transfer = f"{row.get('example_start_vm_ip')} -> {row.get('example_end_vm_ip')} ({row.get('example_delta')})"
        dest = "-"
        if row.get("example_dest_block", ""):
            dest = f"{row.get('example_dest_block')}@{row.get('example_end_vm_ip')}"
        target = "-"
        if row.get("example_target_entry", ""):
            target = f"entry {row.get('example_target_entry')} / {row.get('example_target')}"
        print(
            f"| `{row.get('synthetic_start_vm_ip', '')}` | {row.get('source_entry', '')} | "
            f"`{transfer}` | `{dest}` | `{target}` | "
            f"`{row.get('promotion_candidate', '')}` | `{row.get('focused_direct_class', '')}` |"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Audit focused residual traces for direct rows starting at unresolved synthetic gap VM IPs."
    )
    parser.add_argument("--residual-audit", default=str(TRACE_DIR / "vm_synthetic_gap_residual_audit.tsv"))
    parser.add_argument("--blocks", default=str(TRACE_DIR / "vm_bytecode_basic_blocks.tsv"))
    parser.add_argument("--ir", default=str(TRACE_DIR / "vm_bytecode_ir.tsv"))
    parser.add_argument("--segments", default=str(TRACE_DIR / "vm_bytecode_segments_filefill_hiddenfill_frontierfill_footprintfill_sampled.tsv"))
    parser.add_argument("--trace", action="append", default=[str(path) for path in DEFAULT_FOCUSED_TRACES])
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_focused_direct_trace_audit_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
