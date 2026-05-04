#!/usr/bin/env python3
import argparse
import csv
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
            status = row["byte_status"]
            delta = parse_signed_hex(row["delta"])
            if delta <= 0:
                continue
            if not include_sampled and status != "exact":
                continue
            start = int(row["start_vm_ip"], 16)
            end = int(row["end_vm_ip"], 16)
            if end <= start:
                continue
            rows.append((start, end, row))
    return rows


def merge_intervals(rows):
    intervals = sorted((start, end) for start, end, _row in rows)
    merged = []
    for start, end in intervals:
        if not merged or start > merged[-1][1]:
            merged.append([start, end])
            continue
        if end > merged[-1][1]:
            merged[-1][1] = end
    return [(start, end) for start, end in merged]


def assign_blocks(rows, blocks):
    block_rows = defaultdict(list)
    block_idx = 0
    for start, _end, row in sorted(rows, key=lambda item: item[0]):
        while block_idx < len(blocks) and start >= blocks[block_idx][1]:
            block_idx += 1
        if block_idx >= len(blocks):
            break
        block_start, block_end = blocks[block_idx]
        if block_start <= start < block_end:
            block_rows[block_idx].append(row)
    return block_rows


def main():
    parser = argparse.ArgumentParser(description="Summarize executed VM bytecode into contiguous blocks.")
    parser.add_argument("trace", nargs="?", default="dumps/vmtail-wide/vm_instruction_trace.tsv")
    parser.add_argument("--include-sampled", action="store_true")
    parser.add_argument("--max-items", type=int, default=8)
    args = parser.parse_args()

    rows = load_rows(Path(args.trace), args.include_sampled)
    blocks = merge_intervals(rows)
    block_rows = assign_blocks(rows, blocks)

    print(
        "block\tstart\tend\tsize\tevents\tunique_start_ips\tunique_sources\t"
        "top_sources\ttop_targets\ttop_deltas\tbyte_statuses"
    )
    for idx, (start, end) in enumerate(blocks):
        group = block_rows[idx]
        start_ips = {row["start_vm_ip"] for row in group}
        sources = Counter(row["source_entry"] for row in group)
        targets = Counter(row["target_entry"] for row in group)
        deltas = Counter(row["delta"] for row in group)
        statuses = Counter(row["byte_status"] for row in group)
        print(
            f"{idx}\t0x{start:x}\t0x{end:x}\t0x{end - start:x}\t"
            f"{len(group)}\t{len(start_ips)}\t{len(sources)}\t"
            f"{fmt_counter(sources, args.max_items)}\t"
            f"{fmt_counter(targets, args.max_items)}\t"
            f"{fmt_counter(deltas, args.max_items)}\t"
            f"{fmt_counter(statuses, args.max_items)}"
        )


if __name__ == "__main__":
    main()
