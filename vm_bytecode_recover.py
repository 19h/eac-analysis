#!/usr/bin/env python3
import argparse
import csv
import hashlib
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


def load_rows(path: Path, include_sampled: bool):
    rows = []
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            delta = parse_signed_hex(row["delta"])
            status = row["byte_status"]
            byte_hex = row["bytes"]
            byte_len = len(byte_hex) // 2
            if status == "exact":
                if delta <= 0:
                    continue
                if len(byte_hex) != delta * 2:
                    raise ValueError(f"exact row has mismatched byte length: seq={row['seq']}")
            elif not include_sampled:
                continue
            elif byte_len == 0:
                continue
            row["_start"] = int(row["start_vm_ip"], 16)
            row["_end"] = int(row["end_vm_ip"], 16)
            row["_delta"] = delta
            row["_bytes"] = bytes.fromhex(byte_hex)
            rows.append(row)
    return rows


def recover_byte_map(rows):
    byte_counts = defaultdict(Counter)
    byte_events = defaultdict(int)
    for row in rows:
        start = row["_start"]
        for idx, value in enumerate(row["_bytes"]):
            byte_counts[start + idx][value] += 1
            byte_events[start + idx] += 1
    return byte_counts, byte_events


def merged_segments(offsets):
    segments = []
    for offset in sorted(offsets):
        if not segments or offset != segments[-1][1]:
            segments.append([offset, offset + 1])
            continue
        segments[-1][1] = offset + 1
    return [(start, end) for start, end in segments]


def dominant_byte(counts):
    return counts.most_common(1)[0][0]


def segment_bytes(byte_counts, start, end):
    return bytes(dominant_byte(byte_counts[offset]) for offset in range(start, end))


def conflict_stats(byte_counts, byte_events, start, end):
    offsets = 0
    events = 0
    for offset in range(start, end):
        counts = byte_counts[offset]
        if len(counts) <= 1:
            continue
        offsets += 1
        events += byte_events[offset] - counts.most_common(1)[0][1]
    return offsets, events


def row_segment_index(row, segments):
    start = row["_start"]
    lo = 0
    hi = len(segments)
    while lo < hi:
        mid = (lo + hi) // 2
        if segments[mid][1] <= start:
            lo = mid + 1
        else:
            hi = mid
    if lo < len(segments) and segments[lo][0] <= start < segments[lo][1]:
        return lo
    return None


def emit_segments(rows, byte_counts, byte_events, segments, max_items):
    segment_rows = defaultdict(list)
    for row in rows:
        idx = row_segment_index(row, segments)
        if idx is not None:
            segment_rows[idx].append(row)

    print(
        "segment\tstart\tend\tsize\tevents\tunique_start_ips\tunique_sources\t"
        "conflict_offsets\tconflict_events\tsha256\ttop_sources\ttop_targets\t"
        "top_deltas\thex_prefix\thex_suffix"
    )
    for idx, (start, end) in enumerate(segments):
        group = segment_rows[idx]
        data = segment_bytes(byte_counts, start, end)
        conflicts, conflict_events = conflict_stats(byte_counts, byte_events, start, end)
        sources = Counter(row["source_entry"] for row in group)
        targets = Counter(row["target_entry"] for row in group)
        deltas = Counter(row["delta"] for row in group)
        starts = {row["start_vm_ip"] for row in group}
        prefix = data[:64].hex()
        suffix = data[-64:].hex() if len(data) > 64 else ""
        print(
            f"{idx}\t0x{start:x}\t0x{end:x}\t0x{end - start:x}\t"
            f"{len(group)}\t{len(starts)}\t{len(sources)}\t"
            f"{conflicts}\t{conflict_events}\t{hashlib.sha256(data).hexdigest()}\t"
            f"{fmt_counter(sources, max_items)}\t"
            f"{fmt_counter(targets, max_items)}\t"
            f"{fmt_counter(deltas, max_items)}\t{prefix}\t{suffix}"
        )


def emit_unique_instructions(rows, max_items):
    groups = {}
    for row in rows:
        key = (row["start_vm_ip"], row["source_entry"], row["delta"], row["bytes"], row["byte_status"])
        if key not in groups:
            groups[key] = {
                "count": 0,
                "end_ips": Counter(),
                "targets": Counter(),
                "sites": Counter(),
                "source_target": row["source_target"],
            }
        group = groups[key]
        group["count"] += 1
        group["end_ips"][row["end_vm_ip"]] += 1
        group["targets"][f"{row['target_entry']}@{row['target']}"] += 1
        group["sites"][f"{row['kind']}@{row['site']}"] += 1

    print(
        "start_vm_ip\tsource_entry\tsource_target\tdelta\tbytes\tbyte_status\t"
        "count\ttop_end_ips\ttop_targets\ttop_sites"
    )
    for (start_ip, source_entry, delta, byte_hex, status), group in sorted(
        groups.items(), key=lambda item: (-item[1]["count"], int(item[0][0], 16), int(item[0][1]))
    ):
        print(
            f"{start_ip}\t{source_entry}\t{group['source_target']}\t{delta}\t"
            f"{byte_hex}\t{status}\t{group['count']}\t"
            f"{fmt_counter(group['end_ips'], max_items)}\t"
            f"{fmt_counter(group['targets'], max_items)}\t"
            f"{fmt_counter(group['sites'], max_items)}"
        )


def emit_summary(rows, byte_counts, byte_events, segments):
    conflict_offsets = 0
    conflict_events = 0
    for start, end in segments:
        offsets, events = conflict_stats(byte_counts, byte_events, start, end)
        conflict_offsets += offsets
        conflict_events += events
    total_bytes = sum(end - start for start, end in segments)
    print(
        f"rows={len(rows)} segments={len(segments)} bytes=0x{total_bytes:x} "
        f"conflict_offsets={conflict_offsets} conflict_events={conflict_events}",
        file=sys.stderr,
    )


def main():
    parser = argparse.ArgumentParser(description="Recover exact VM bytecode bytes from instruction trace rows.")
    parser.add_argument("trace", nargs="?", default="dumps/vmtail-wide/vm_instruction_trace.tsv")
    parser.add_argument("--instructions", action="store_true", help="emit deduplicated executed instruction rows")
    parser.add_argument("--include-sampled", action="store_true")
    parser.add_argument("--max-items", type=int, default=8)
    args = parser.parse_args()

    rows = load_rows(Path(args.trace), args.include_sampled)
    if args.instructions:
        emit_unique_instructions(rows, args.max_items)
        return

    byte_counts, byte_events = recover_byte_map(rows)
    segments = merged_segments(byte_counts)
    emit_summary(rows, byte_counts, byte_events, segments)
    emit_segments(rows, byte_counts, byte_events, segments, args.max_items)


if __name__ == "__main__":
    main()
