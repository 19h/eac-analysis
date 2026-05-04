#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path


DEFAULT_TRACE_DIRS = [
    "dumps/vmtail-wide",
    "dumps/vmtail-wide-w16",
    "dumps/vmtail-wide-1m",
    "dumps/vmtail-wide-1m-w16",
    "dumps/vmtail-mode0-w16",
    "dumps/vmtail-mode2-w16",
    "dumps/vmtail-state-wide-w16",
]


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def parse_hex(text):
    if not text:
        return 0
    return int(text, 16)


def merge_intervals(intervals):
    if not intervals:
        return []
    intervals = sorted(intervals)
    merged = [list(intervals[0])]
    for start, end in intervals[1:]:
        last = merged[-1]
        if start <= last[1]:
            if end > last[1]:
                last[1] = end
        else:
            merged.append([start, end])
    return [(start, end) for start, end in merged]


def interval_bytes(intervals):
    return sum(end - start for start, end in merge_intervals(intervals))


def fmt_counter(counter, limit):
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(limit))


def classify_dir(path):
    text = str(path)
    if "filefill" in text or "hiddenfill" in text or "frontierfill" in text or "footprintfill" in text:
        return "synthetic_filled_trace"
    if "state" in text:
        return "state_trace"
    if "mode" in text:
        return "alternate_mode_trace"
    return "raw_dynamic_trace"


def load_trace(path):
    rows = 0
    source_entries = set()
    target_entries = set()
    start_ips = set()
    intervals = []
    exact_intervals = []
    statuses = Counter()
    kinds = Counter()
    events_by_source = Counter()
    events_by_target = Counter()
    for row in read_tsv(path):
        rows += 1
        source = row.get("source_entry", "")
        target = row.get("target_entry", "")
        if source:
            source_entries.add(source)
            events_by_source[source] += 1
        if target:
            target_entries.add(target)
            events_by_target[target] += 1
        start = row.get("start_vm_ip", "")
        end = row.get("end_vm_ip", "")
        if start:
            start_ips.add(start)
        status = row.get("byte_status", "")
        kind = row.get("kind", "")
        if status:
            statuses[status] += 1
        if kind:
            kinds[kind] += 1
        try:
            start_i = parse_hex(start)
            end_i = parse_hex(end)
        except ValueError:
            continue
        if end_i > start_i:
            intervals.append((start_i, end_i))
            if status == "exact":
                exact_intervals.append((start_i, end_i))
    return {
        "rows": rows,
        "source_entries": source_entries,
        "target_entries": target_entries,
        "start_ips": start_ips,
        "intervals": intervals,
        "exact_intervals": exact_intervals,
        "statuses": statuses,
        "kinds": kinds,
        "events_by_source": events_by_source,
        "events_by_target": events_by_target,
    }


def load_segments(path):
    if not Path(path).exists():
        return None
    rows = 0
    bytes_total = 0
    conflicts = 0
    for row in read_tsv(path):
        rows += 1
        try:
            bytes_total += parse_hex(row.get("size", "0x0"))
        except ValueError:
            pass
        try:
            conflicts += int(row.get("conflict_offsets", "0") or 0)
        except ValueError:
            pass
    return rows, bytes_total, conflicts


def segment_path_for(trace_dir):
    trace_dir = Path(trace_dir)
    sampled = trace_dir / "vm_bytecode_segments_sampled.tsv"
    plain = trace_dir / "vm_bytecode_segments.tsv"
    if sampled.exists():
        return sampled
    if plain.exists():
        return plain
    return None


def make_rows(args):
    trace_dirs = [Path(path) for path in (args.trace_dir or DEFAULT_TRACE_DIRS)]
    traces = []
    for trace_dir in trace_dirs:
        path = trace_dir / "vm_instruction_trace.tsv"
        if not path.exists():
            continue
        traces.append((trace_dir, path, load_trace(path)))

    if not traces:
        return []

    primary = None
    for trace_dir, _path, data in traces:
        if str(trace_dir) == args.primary:
            primary = data
            break
    if primary is None:
        primary = traces[0][2]

    union_sources = set()
    union_targets = set()
    union_starts = set()
    union_intervals = []
    for _trace_dir, _path, data in traces:
        union_sources.update(data["source_entries"])
        union_targets.update(data["target_entries"])
        union_starts.update(data["start_ips"])
        union_intervals.extend(data["intervals"])

    rows = []
    for trace_dir, path, data in traces:
        segment_path = segment_path_for(trace_dir)
        segment_rows = ""
        segment_bytes = ""
        segment_conflicts = ""
        if segment_path:
            seg = load_segments(segment_path)
            if seg:
                segment_rows, segment_bytes_i, segment_conflicts = seg
                segment_bytes = f"0x{segment_bytes_i:x}"
        extra_sources = data["source_entries"] - primary["source_entries"]
        missing_sources = primary["source_entries"] - data["source_entries"]
        extra_targets = data["target_entries"] - primary["target_entries"]
        missing_targets = primary["target_entries"] - data["target_entries"]
        extra_starts = data["start_ips"] - primary["start_ips"]
        missing_starts = primary["start_ips"] - data["start_ips"]
        rows.append({
            "trace_dir": str(trace_dir),
            "trace_class": classify_dir(trace_dir),
            "trace_rows": str(data["rows"]),
            "source_entries": str(len(data["source_entries"])),
            "target_entries": str(len(data["target_entries"])),
            "start_vm_ips": str(len(data["start_ips"])),
            "covered_byte_ranges": str(len(merge_intervals(data["intervals"]))),
            "covered_bytes": f"0x{interval_bytes(data['intervals']):x}",
            "exact_covered_bytes": f"0x{interval_bytes(data['exact_intervals']):x}",
            "segment_rows": str(segment_rows),
            "segment_bytes": str(segment_bytes),
            "segment_conflict_offsets": str(segment_conflicts),
            "source_entries_vs_primary": f"+{len(extra_sources)}/-{len(missing_sources)}",
            "target_entries_vs_primary": f"+{len(extra_targets)}/-{len(missing_targets)}",
            "start_vm_ips_vs_primary": f"+{len(extra_starts)}/-{len(missing_starts)}",
            "source_entries_vs_union": f"{len(data['source_entries'])}/{len(union_sources)}",
            "target_entries_vs_union": f"{len(data['target_entries'])}/{len(union_targets)}",
            "start_vm_ips_vs_union": f"{len(data['start_ips'])}/{len(union_starts)}",
            "byte_statuses": fmt_counter(data["statuses"], args.max_items),
            "kinds": fmt_counter(data["kinds"], args.max_items),
            "top_sources": fmt_counter(data["events_by_source"], args.max_items),
            "top_targets": fmt_counter(data["events_by_target"], args.max_items),
            "path": str(path),
        })
    rows.sort(key=lambda row: (row["trace_class"], row["trace_dir"]))
    return rows


def emit_tsv(rows):
    fields = [
        "trace_dir",
        "trace_class",
        "trace_rows",
        "source_entries",
        "target_entries",
        "start_vm_ips",
        "covered_byte_ranges",
        "covered_bytes",
        "exact_covered_bytes",
        "segment_rows",
        "segment_bytes",
        "segment_conflict_offsets",
        "source_entries_vs_primary",
        "target_entries_vs_primary",
        "start_vm_ips_vs_primary",
        "source_entries_vs_union",
        "target_entries_vs_union",
        "start_vm_ips_vs_union",
        "byte_statuses",
        "kinds",
        "top_sources",
        "top_targets",
        "path",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    print("# VM Trace Coverage Matrix\n")
    print("Dynamic VM bytecode coverage is scenario-specific; this matrix compares available run directories.\n")
    print("| Trace | Class | Rows | Sources | Targets | Starts | Bytes | Segment Bytes | Vs Primary Sources | Vs Primary Starts |")
    print("| --- | --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: |")
    for row in rows:
        print(
            f"| `{row['trace_dir']}` | `{row['trace_class']}` | {row['trace_rows']} | "
            f"{row['source_entries']} | {row['target_entries']} | {row['start_vm_ips']} | "
            f"`{row['covered_bytes']}` | `{row['segment_bytes'] or '-'}` | "
            f"`{row['source_entries_vs_primary']}` | `{row['start_vm_ips_vs_primary']}` |"
        )
    print("\nThe static handler inventory is broader than any one row here, but these dynamic rows do not prove full program coverage.")


def main():
    parser = argparse.ArgumentParser(description="Compare VM dynamic trace coverage across run scenarios.")
    parser.add_argument("--trace-dir", action="append", help="Trace directory containing vm_instruction_trace.tsv")
    parser.add_argument("--primary", default="dumps/vmtail-wide-1m-w16")
    parser.add_argument("--max-items", type=int, default=8)
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = make_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"trace_coverage_rows={len(rows)} primary={args.primary}", file=sys.stderr)


if __name__ == "__main__":
    main()
