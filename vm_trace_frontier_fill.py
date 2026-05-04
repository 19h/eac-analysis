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


def fmt_delta(value):
    sign = "+" if value >= 0 else "-"
    return f"{sign}0x{abs(value):x}"


def word_at(data, index):
    start = index * 2
    chunk = data[start:start + 2]
    if len(chunk) != 2:
        return ""
    return f"0x{int.from_bytes(chunk, 'little'):x}"


def load_segments(path):
    segments = []
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            segments.append((int(row["start"], 16), int(row["end"], 16)))
    return sorted(segments)


def build_frontiers(segments, max_gap):
    frontiers = {}
    for idx, (_start, end) in enumerate(segments[:-1]):
        next_start = segments[idx + 1][0]
        gap = next_start - end
        if 0 < gap <= max_gap:
            frontiers[end] = (next_start, gap)
    return frontiers


def load_start_observations(trace):
    observations = defaultdict(Counter)
    with Path(trace).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            try:
                start = int(row["start_vm_ip"], 16)
            except (KeyError, ValueError):
                continue
            source = row.get("source_entry", "")
            target = row.get("source_target", "")
            if source or target:
                observations[start][(source, target)] += 1
    return observations


def frontier_candidate(row, frontiers):
    if row.get("byte_status") != "exact":
        return None
    try:
        delta = parse_signed_hex(row["delta"])
        end = int(row["end_vm_ip"], 16)
    except (KeyError, ValueError):
        return None
    if delta <= 0:
        return None
    if end not in frontiers:
        return None
    next_start, gap = frontiers[end]
    return end, next_start, gap


def synthetic_row(row, start, end, delta, data, observations, fieldnames):
    target_entry = ""
    target = ""
    if observations.get(end):
        (target_entry, target), _count = observations[end].most_common(1)[0]

    out = {field: "" for field in fieldnames}
    out.update({
        "seq": f"{row.get('seq', '')}.f",
        "frame": row.get("frame", ""),
        "source_entry": row.get("target_entry", ""),
        "source_target": row.get("target", ""),
        "start_vm_ip": f"0x{start:x}",
        "end_vm_ip": f"0x{end:x}",
        "delta": fmt_delta(delta),
        "kind": "frontier",
        "site": "exact_destination_gap",
        "target_entry": target_entry,
        "target": target,
        "bytes": data.hex(),
        "byte_status": f"frontier_span_of_{delta}",
    })
    for idx in range(16):
        key = f"w{idx}"
        if key in out:
            out[key] = word_at(data, idx)
    return out


def main():
    parser = argparse.ArgumentParser(
        description="Insert file-backed synthetic rows for small exact-destination frontier gaps."
    )
    parser.add_argument("trace", nargs="?", default="dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill.tsv")
    parser.add_argument(
        "--segments",
        default="dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_sampled.tsv",
    )
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--max-gap", type=lambda value: int(value, 0), default=0x20)
    args = parser.parse_args()

    eac = Path(args.eac).read_bytes()
    segments = load_segments(args.segments)
    frontiers = build_frontiers(segments, args.max_gap)
    observations = load_start_observations(args.trace)
    rows = 0
    inserted = 0
    inserted_bytes = 0

    with Path(args.trace).open(newline="", errors="replace") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        fieldnames = list(reader.fieldnames or [])
        writer = csv.DictWriter(sys.stdout, fieldnames=fieldnames, delimiter="\t", lineterminator="\n")
        writer.writeheader()

        for row in reader:
            rows += 1
            writer.writerow(row)
            candidate = frontier_candidate(row, frontiers)
            if candidate is None:
                continue
            start, end, delta = candidate
            data = eac[start:end]
            if len(data) != delta:
                continue
            writer.writerow(synthetic_row(row, start, end, delta, data, observations, fieldnames))
            inserted += 1
            inserted_bytes += delta

    print(f"# input_rows={rows}", file=sys.stderr)
    print(f"# inserted_frontier_rows={inserted}", file=sys.stderr)
    print(f"# inserted_frontier_event_bytes=0x{inserted_bytes:x}", file=sys.stderr)
    print(f"# max_gap=0x{args.max_gap:x}", file=sys.stderr)


if __name__ == "__main__":
    main()
