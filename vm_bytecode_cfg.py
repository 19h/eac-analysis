#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path


def parse_signed_hex(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def fmt_counter(counter, max_items):
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(max_items))


def load_segments(path: Path):
    segments = []
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            segments.append({
                "idx": int(row["segment"]),
                "start": int(row["start"], 16),
                "end": int(row["end"], 16),
            })
    segments.sort(key=lambda row: row["start"])
    return segments


def find_segment(segments, offset):
    lo = 0
    hi = len(segments)
    while lo < hi:
        mid = (lo + hi) // 2
        if segments[mid]["end"] <= offset:
            lo = mid + 1
        else:
            hi = mid
    if lo < len(segments):
        segment = segments[lo]
        if segment["start"] <= offset < segment["end"]:
            return segment
    return None


def find_boundary_segment(segments, offset):
    for segment in segments:
        if segment["start"] == offset:
            return segment
    return None


def segment_label(segment):
    if segment is None:
        return ""
    return str(segment["idx"])


def segment_range(segment):
    if segment is None:
        return ""
    return f"0x{segment['start']:x}-0x{segment['end']:x}"


def edge_class(start_block, end_block, start, end, status):
    if status.startswith("backedge") or end < start:
        return "backedge"
    if status != "exact":
        return "sampled_jump"
    if end_block is None:
        return "out_of_recovered"
    if start_block["idx"] == end_block["idx"]:
        return "intra_block"
    if end_block["start"] == end:
        return "next_block"
    return "inter_block"


def main():
    parser = argparse.ArgumentParser(description="Build a bytecode block graph from VM instruction trace rows.")
    parser.add_argument("trace", nargs="?", default="dumps/vmtail-wide/vm_instruction_trace.tsv")
    parser.add_argument("--segments", default="dumps/vmtail-wide/vm_bytecode_segments.tsv")
    parser.add_argument("--max-items", type=int, default=8)
    args = parser.parse_args()

    segments = load_segments(Path(args.segments))
    boundary_by_start = {segment["start"]: segment for segment in segments}
    edges = {}
    skipped = 0

    with Path(args.trace).open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            start = int(row["start_vm_ip"], 16)
            end = int(row["end_vm_ip"], 16)
            start_block = find_segment(segments, start)
            if start_block is None:
                skipped += 1
                continue
            end_block = find_segment(segments, end)
            if end_block is None:
                end_block = boundary_by_start.get(end)
            cls = edge_class(start_block, end_block, start, end, row["byte_status"])
            key = (start_block["idx"], end_block["idx"] if end_block is not None else -1, cls)
            if key not in edges:
                edges[key] = {
                    "events": 0,
                    "unique_start_ips": set(),
                    "sources": Counter(),
                    "targets": Counter(),
                    "deltas": Counter(),
                    "statuses": Counter(),
                    "start_range": segment_range(start_block),
                    "end_range": segment_range(end_block),
                }
            edge = edges[key]
            edge["events"] += 1
            edge["unique_start_ips"].add(row["start_vm_ip"])
            edge["sources"][row["source_entry"]] += 1
            edge["targets"][row["target_entry"]] += 1
            edge["deltas"][row["delta"]] += 1
            edge["statuses"][row["byte_status"]] += 1

    print(
        "source_block\tsource_range\ttarget_block\ttarget_range\tclass\t"
        "events\tunique_start_ips\ttop_sources\ttop_targets\ttop_deltas\tbyte_statuses"
    )
    for (source_idx, target_idx, cls), edge in sorted(
        edges.items(), key=lambda item: (-item[1]["events"], item[0][0], item[0][1], item[0][2])
    ):
        print(
            f"{source_idx}\t{edge['start_range']}\t"
            f"{'' if target_idx < 0 else target_idx}\t{edge['end_range']}\t{cls}\t"
            f"{edge['events']}\t{len(edge['unique_start_ips'])}\t"
            f"{fmt_counter(edge['sources'], args.max_items)}\t"
            f"{fmt_counter(edge['targets'], args.max_items)}\t"
            f"{fmt_counter(edge['deltas'], args.max_items)}\t"
            f"{fmt_counter(edge['statuses'], args.max_items)}"
        )

    print(f"edges={len(edges)} skipped_no_source_block={skipped}", file=sys.stderr)


if __name__ == "__main__":
    main()
