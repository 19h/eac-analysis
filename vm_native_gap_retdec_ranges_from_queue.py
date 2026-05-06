#!/usr/bin/env python3
import argparse
import csv
import re
from pathlib import Path


DEFAULT_QUEUE = Path("dumps/vmtail-wide-1m-w16/vm_native_retdec_gap_queue.tsv")
RANGE_RE = re.compile(r"^0x[0-9a-f]+-0x[0-9a-f]+$")
RANGE_FILE_RE = re.compile(r"native_gap_retdec_batch([0-9]+)\.ranges$")

KNOWN_BLOCKED_RANGES = {
    "0x62b92-0x62d6d",
    "0x4b1ca0-0x4b1e79",
    "0x4bfaf0-0x4bfcc3",
    "0x4ad2a0-0x4ad440",
    "0x57c4c0-0x57c64f",
    "0x4b16c0-0x4b17fb",
    "0x570310-0x57043a",
    "0x54ea90-0x54ebb0",
    "0x54ebd0-0x54ecf0",
    "0x6b7a0-0x6b8bb",
    "0x54e240-0x54e308",
    "0x53fce0-0x53fda4",
    "0x4c3770-0x4c37fa",
    "0x492814-0x492897",
    "0x4aa540-0x4aa5bf",
    "0x59c58-0x59cd1",
    "0x773b0-0x77429",
    "0x52586-0x525ef",
    "0x4aa5d0-0x4aa639",
    "0x4c3060-0x4c30b5",
    "0x4a95d0-0x4a9612",
    "0x4b03a0-0x4b03de",
    "0x4883d8-0x488414",
    "0x4b4e10-0x4b4e4c",
    "0x57cf40-0x57d4d7",
    "0x4d1510-0x4d19b5",
    "0x4b3910-0x4b3cce",
    "0x4aa830-0x4aab60",
    "0x415ae-0x418c6",
    "0x554b00-0x554de0",
    "0x5790b0-0x5792c3",
    "0x57c770-0x57c987",
    "0x5bb9c-0x5bda0",
}


def existing_range_files(root: Path):
    files = []
    for path in root.glob("native_gap_retdec_batch*.ranges"):
        match = RANGE_FILE_RE.match(path.name)
        if match:
            files.append((int(match.group(1)), path))
    return sorted(files)


def used_ranges(root: Path):
    used = set()
    for _, path in existing_range_files(root):
        for line in path.read_text().splitlines():
            item = line.strip()
            if RANGE_RE.match(item):
                used.add(item)
    return used


def next_batch_index(root: Path):
    files = existing_range_files(root)
    return files[-1][0] + 1 if files else 0


def queue_ranges(path: Path):
    with path.open(newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        for row in reader:
            selected = row.get("selected_range", "").strip()
            if RANGE_RE.match(selected):
                yield selected


def write_batch(path: Path, ranges, dry_run: bool):
    body = "".join(f"{item}\n" for item in ranges)
    if dry_run:
        print(f"would_write\t{path}\t{len(ranges)}")
        print(body, end="")
        return
    if path.exists():
        raise SystemExit(f"refusing to overwrite existing range file: {path}")
    path.write_text(body)
    print(f"wrote\t{path}\t{len(ranges)}")


def main():
    parser = argparse.ArgumentParser(description="Create native RetDec range batches from the current gap queue.")
    parser.add_argument("--queue", type=Path, default=DEFAULT_QUEUE)
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--start-index", type=int)
    parser.add_argument("--batches", type=int, default=4)
    parser.add_argument("--batch-size", type=int, default=16)
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()

    start_index = args.start_index if args.start_index is not None else next_batch_index(args.root)
    excluded = used_ranges(args.root) | KNOWN_BLOCKED_RANGES
    selected = []
    for item in queue_ranges(args.queue):
        if item in excluded:
            continue
        selected.append(item)
        excluded.add(item)
        if len(selected) == args.batches * args.batch_size:
            break

    if len(selected) < args.batches * args.batch_size:
        raise SystemExit(f"queue only supplied {len(selected)} usable ranges")

    for batch_offset in range(args.batches):
        begin = batch_offset * args.batch_size
        end = begin + args.batch_size
        index = start_index + batch_offset
        path = args.root / f"native_gap_retdec_batch{index:02d}.ranges"
        write_batch(path, selected[begin:end], args.dry_run)


if __name__ == "__main__":
    main()
