#!/usr/bin/env python3
import argparse
import csv
import re
import subprocess
import tempfile
from pathlib import Path

from vm_native_gap_retdec_ranges_from_queue import (
    KNOWN_BLOCKED_RANGES,
    RANGE_RE,
    next_batch_index,
    used_ranges,
)


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
DEFAULT_QUEUE = TRACE_DIR / "vm_native_retdec_gap_queue.tsv"


def parse_range(item):
    left, right = item.split("-", 1)
    return int(left, 16), int(right, 16)


def format_range(start, end):
    return f"0x{start:x}-0x{end:x}"


def split_range(item):
    start, end = parse_range(item)
    size = end - start
    if size < 2:
        return []
    mid = start + size // 2
    mid = max(start + 1, min(end - 1, (mid + 0xf) & ~0xf))
    return [format_range(start, mid), format_range(mid, end)]


def read_blocked_queue(path):
    rows = []
    with path.open(newline="", errors="replace") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        for row in reader:
            selected = row.get("selected_range", "").strip()
            if selected in KNOWN_BLOCKED_RANGES:
                rows.append(row)
    return rows


def candidate_order(rows, limit_rows):
    rows = sorted(
        rows,
        key=lambda row: (
            0 if row.get("priority_class") == "tier0_small_native_gap" else 1,
            int(row.get("semantic_uncovered_bytes") or row.get("bytes") or "0"),
        ),
    )
    for row in rows[:limit_rows]:
        yield row.get("selected_range", "").strip()


def try_range(selected, batch_index, timeout, keep_failed):
    with tempfile.TemporaryDirectory(prefix="eacsym-retdec-split-") as tmpdir:
        tmp = Path(tmpdir)
        ranges_file = tmp / "candidate.ranges"
        output_file = tmp / "candidate.c"
        ranges_file.write_text(f"{selected}\n")
        proc = subprocess.run(
            [
                "python3",
                "vm_native_gap_retdec_batch.py",
                "--batch-index",
                str(batch_index),
                "--ranges-file",
                str(ranges_file),
                "--timeout",
                str(timeout),
            ],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
        )
        if proc.returncode != 0:
            if keep_failed:
                output_file.write_text(proc.stdout + "\n/* stderr:\n" + proc.stderr + "\n*/\n")
                print(f"failed_output\t{selected}\t{output_file}")
            return False, "retdec_or_wrapper"
        output_file.write_text(proc.stdout)
        cc = subprocess.run(
            ["cc", "-std=c11", "-fsyntax-only", "-w", str(output_file)],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
        )
        if cc.returncode != 0:
            if keep_failed:
                print(cc.stderr)
                print(f"failed_output\t{selected}\t{output_file}")
            return False, "syntax"
        return True, "ok"


def salvage_range(selected, batch_index, timeout, min_bytes, max_depth, keep_failed):
    accepted = []
    rejected = []
    stack = [(selected, 0)]
    while stack:
        current, depth = stack.pop(0)
        if not RANGE_RE.match(current):
            continue
        start, end = parse_range(current)
        ok, reason = try_range(current, batch_index, timeout, keep_failed)
        print(f"try\t{current}\t{reason}")
        if ok:
            accepted.append(current)
            continue
        if depth >= max_depth or end - start <= min_bytes:
            rejected.append((current, reason))
            continue
        stack[0:0] = [(item, depth + 1) for item in split_range(current)]
    return accepted, rejected


def write_batch(path, ranges, dry_run):
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
    parser = argparse.ArgumentParser(
        description="Recover blocked native RetDec gap ranges by recursively trying smaller subranges."
    )
    parser.add_argument("--queue", type=Path, default=DEFAULT_QUEUE)
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--start-index", type=int)
    parser.add_argument("--limit-rows", type=int, default=8)
    parser.add_argument("--max-accepted", type=int, default=16)
    parser.add_argument("--min-bytes", type=lambda value: int(value, 0), default=0x30)
    parser.add_argument("--max-depth", type=int, default=3)
    parser.add_argument("--timeout", type=int, default=45)
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument("--keep-failed", action="store_true")
    args = parser.parse_args()

    batch_index = args.start_index if args.start_index is not None else next_batch_index(args.root)
    output = args.root / f"native_gap_retdec_batch{batch_index:02d}.ranges"
    excluded = used_ranges(args.root)
    accepted = []
    rejected = []
    for selected in candidate_order(read_blocked_queue(args.queue), args.limit_rows):
        if selected in excluded:
            continue
        ranges, failures = salvage_range(
            selected,
            batch_index,
            args.timeout,
            args.min_bytes,
            args.max_depth,
            args.keep_failed,
        )
        for item in ranges:
            if item not in excluded:
                accepted.append(item)
                excluded.add(item)
                if len(accepted) >= args.max_accepted:
                    write_batch(output, accepted, args.dry_run)
                    return
        rejected.extend(failures)

    if not accepted:
        raise SystemExit("no syntax-checkable split ranges found")
    write_batch(output, accepted, args.dry_run)
    if rejected:
        print(f"rejected_split_ranges={len(rejected)}")


if __name__ == "__main__":
    main()
