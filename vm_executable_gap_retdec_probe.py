#!/usr/bin/env python3
import argparse
import csv
import hashlib
import subprocess
import tempfile
from collections import deque
from concurrent.futures import FIRST_COMPLETED, ThreadPoolExecutor, wait
from pathlib import Path

from vm_native_gap_retdec_ranges_from_queue import RANGE_RE, next_batch_index, used_ranges


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
DEFAULT_COVERAGE = TRACE_DIR / "vm_native_executable_coverage_audit.tsv"
DEFAULT_REJECT_CACHE = TRACE_DIR / "vm_executable_gap_retdec_reject_cache.tsv"
RETDEC_GENERATOR = Path("vm_native_gap_retdec_batch.py")


def format_range(start, end):
    return f"0x{start:x}-0x{end:x}"


def read_gaps(path, sections):
    wanted = set(sections)
    gaps = []
    with path.open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            section = row.get("section")
            if row.get("row_type") != "gap" or ("all" not in wanted and section not in wanted):
                continue
            start = int(row["start"], 16)
            stop = int(row["stop"], 16)
            size = stop - start
            if size > 0:
                gaps.append((size, start, stop))
    return sorted(gaps, reverse=True)


def split_bounds(start, stop, min_chunk_bytes):
    size = stop - start
    if size <= min_chunk_bytes or size < 2:
        return []
    mid = start + size // 2
    if mid <= start or mid >= stop:
        return []
    return [(start, mid), (mid, stop)]


def expand_candidate(start, stop, used, rejected, min_chunk_bytes):
    selected = format_range(start, stop)
    if selected not in used:
        yield selected
        return
    if selected not in rejected:
        return
    for child_start, child_stop in split_bounds(start, stop, min_chunk_bytes):
        yield from expand_candidate(child_start, child_stop, used, rejected, min_chunk_bytes)


def candidate_ranges(gaps, chunk_bytes, max_gap_chunks, used, rejected, min_chunk_bytes):
    for _, start, stop in gaps:
        emitted = 0
        pos = start
        while pos < stop and emitted < max_gap_chunks:
            end = min(stop, pos + chunk_bytes)
            for item in expand_candidate(pos, end, used, rejected, min_chunk_bytes):
                yield item
                emitted += 1
                if emitted >= max_gap_chunks:
                    break
            pos = end


def generator_fingerprint():
    data = RETDEC_GENERATOR.read_bytes()
    return hashlib.sha256(data).hexdigest()[:16]


def read_reject_cache(path, generator_key):
    rejected = set()
    if not path.exists():
        return rejected
    with path.open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            selected = (row.get("range") or "").strip()
            if row.get("generator_key") == generator_key and RANGE_RE.match(selected):
                rejected.add(selected)
    return rejected


def append_reject_cache(path, generator_key, rejected, dry_run):
    if not rejected:
        return
    rows = sorted(set(rejected), key=lambda item: (*parse_range(item), item))
    if dry_run:
        print(f"would_append_reject_cache\t{path}\t{len(rows)}")
        return
    path.parent.mkdir(parents=True, exist_ok=True)
    write_header = not path.exists() or path.stat().st_size == 0
    with path.open("a", newline="") as handle:
        writer = csv.writer(handle, delimiter="\t")
        if write_header:
            writer.writerow(["range", "generator_key"])
        for selected in rows:
            writer.writerow([selected, generator_key])
    print(f"appended_reject_cache\t{path}\t{len(rows)}")


def parse_range(selected):
    start, stop = selected.split("-", 1)
    return int(start, 16), int(stop, 16)


def split_range(selected, min_chunk_bytes):
    start, stop = parse_range(selected)
    return [format_range(start, stop) for start, stop in split_bounds(start, stop, min_chunk_bytes)]


def try_range(selected, batch_index, timeout, keep_failed):
    with tempfile.TemporaryDirectory(prefix="eacsym-exec-gap-retdec-") as tmpdir:
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
                print(f"failed_retdec\t{selected}\t{tmp}")
                print(proc.stderr)
            return False
        output_file.write_text(proc.stdout)
        cc = subprocess.run(
            ["cc", "-std=c11", "-fsyntax-only", "-w", str(output_file)],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
        )
        if cc.returncode != 0:
            if keep_failed:
                print(f"failed_syntax\t{selected}\t{output_file}")
                print(cc.stderr)
            return False
        return True


def probe_candidates(
    candidates,
    batch_index,
    timeout,
    keep_failed,
    probe_jobs,
    max_accepted,
    min_chunk_bytes,
    max_split_candidates,
    used,
):
    accepted = []
    rejected = []
    pending = {}
    queue = deque(candidates)
    seen = set(candidates)
    split_candidates = 0

    def submit_next(executor):
        try:
            selected = queue.popleft()
        except IndexError:
            return False
        future = executor.submit(try_range, selected, batch_index, timeout, keep_failed)
        pending[future] = selected
        return True

    with ThreadPoolExecutor(max_workers=probe_jobs) as executor:
        for _ in range(probe_jobs):
            if not submit_next(executor):
                break

        while pending and len(accepted) < max_accepted:
            done, _ = wait(pending, return_when=FIRST_COMPLETED)
            for future in done:
                selected = pending.pop(future)
                ok = future.result()
                print(f"try\t{selected}\t{'ok' if ok else 'reject'}", flush=True)
                if ok:
                    accepted.append(selected)
                    if len(accepted) >= max_accepted:
                        break
                else:
                    rejected.append(selected)
                    for split in split_range(selected, min_chunk_bytes):
                        if split in seen or split in used:
                            continue
                        if split_candidates >= max_split_candidates:
                            break
                        queue.appendleft(split)
                        seen.add(split)
                        split_candidates += 1
                        print(f"split\t{selected}\t{split}", flush=True)
                submit_next(executor)

        for future in pending:
            future.cancel()

    return sorted(accepted, key=parse_range), rejected


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
        description="Probe largest executable coverage gaps for syntax-clean targeted RetDec chunks."
    )
    parser.add_argument("--coverage", type=Path, default=DEFAULT_COVERAGE)
    parser.add_argument(
        "--section",
        action="append",
        default=None,
        help="Coverage section to probe; repeat for multiple sections, or use 'all'.",
    )
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--start-index", type=int)
    parser.add_argument("--chunk-bytes", type=lambda value: int(value, 0), default=0x200)
    parser.add_argument(
        "--min-chunk-bytes",
        type=lambda value: int(value, 0),
        default=None,
        help="If a candidate rejects, recursively split it down to this size and probe subranges.",
    )
    parser.add_argument(
        "--max-split-candidates",
        type=int,
        default=64,
        help="Maximum additional subrange probes created by adaptive splitting.",
    )
    parser.add_argument("--max-gap-chunks", type=int, default=4)
    parser.add_argument("--max-candidates", type=int, default=64)
    parser.add_argument("--max-accepted", type=int, default=8)
    parser.add_argument("--probe-jobs", type=int, default=4)
    parser.add_argument("--timeout", type=int, default=45)
    parser.add_argument("--reject-cache", type=Path, default=DEFAULT_REJECT_CACHE)
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument("--keep-failed", action="store_true")
    args = parser.parse_args()

    batch_index = args.start_index if args.start_index is not None else next_batch_index(args.root)
    sections = args.section or [".text"]
    min_chunk_bytes = args.min_chunk_bytes if args.min_chunk_bytes is not None else args.chunk_bytes
    output = args.root / f"native_gap_retdec_batch{batch_index:02d}.ranges"
    generator_key = generator_fingerprint()
    used = {item for item in used_ranges(args.root) if RANGE_RE.match(item)}
    rejected = read_reject_cache(args.reject_cache, generator_key)
    used.update(rejected)
    probe_jobs = max(1, args.probe_jobs)
    candidates = []
    for selected in candidate_ranges(
        read_gaps(args.coverage, sections),
        args.chunk_bytes,
        args.max_gap_chunks,
        used,
        rejected,
        min_chunk_bytes,
    ):
        if len(candidates) >= args.max_candidates:
            break
        candidates.append(selected)

    accepted, rejected = probe_candidates(
        candidates,
        batch_index,
        args.timeout,
        args.keep_failed,
        probe_jobs,
        args.max_accepted,
        min_chunk_bytes,
        max(0, args.max_split_candidates),
        used,
    )

    if not accepted:
        append_reject_cache(args.reject_cache, generator_key, rejected, args.dry_run)
        raise SystemExit("no syntax-checkable executable gap chunks found")
    write_batch(output, accepted, args.dry_run)
    append_reject_cache(args.reject_cache, generator_key, rejected, args.dry_run)


if __name__ == "__main__":
    main()
