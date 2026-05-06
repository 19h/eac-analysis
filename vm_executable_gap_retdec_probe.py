#!/usr/bin/env python3
import argparse
import csv
import subprocess
import tempfile
from concurrent.futures import FIRST_COMPLETED, ThreadPoolExecutor, wait
from pathlib import Path

from vm_native_gap_retdec_ranges_from_queue import RANGE_RE, next_batch_index, used_ranges


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
DEFAULT_COVERAGE = TRACE_DIR / "vm_native_executable_coverage_audit.tsv"


def format_range(start, end):
    return f"0x{start:x}-0x{end:x}"


def read_gaps(path):
    gaps = []
    with path.open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            if row.get("row_type") != "gap" or row.get("section") != ".text":
                continue
            start = int(row["start"], 16)
            stop = int(row["stop"], 16)
            size = stop - start
            if size > 0:
                gaps.append((size, start, stop))
    return sorted(gaps, reverse=True)


def candidate_ranges(gaps, chunk_bytes, max_gap_chunks, used):
    for _, start, stop in gaps:
        emitted = 0
        pos = start
        while pos < stop and emitted < max_gap_chunks:
            end = min(stop, pos + chunk_bytes)
            item = format_range(pos, end)
            if item not in used:
                yield item
                emitted += 1
            pos = end


def parse_range(selected):
    start, stop = selected.split("-", 1)
    return int(start, 16), int(stop, 16)


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


def probe_candidates(candidates, batch_index, timeout, keep_failed, probe_jobs, max_accepted):
    accepted = []
    pending = {}
    candidates = iter(candidates)

    def submit_next(executor):
        try:
            selected = next(candidates)
        except StopIteration:
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
                submit_next(executor)

        for future in pending:
            future.cancel()

    return sorted(accepted, key=parse_range)


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
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--start-index", type=int)
    parser.add_argument("--chunk-bytes", type=lambda value: int(value, 0), default=0x200)
    parser.add_argument("--max-gap-chunks", type=int, default=4)
    parser.add_argument("--max-candidates", type=int, default=64)
    parser.add_argument("--max-accepted", type=int, default=8)
    parser.add_argument("--probe-jobs", type=int, default=4)
    parser.add_argument("--timeout", type=int, default=45)
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument("--keep-failed", action="store_true")
    args = parser.parse_args()

    batch_index = args.start_index if args.start_index is not None else next_batch_index(args.root)
    output = args.root / f"native_gap_retdec_batch{batch_index:02d}.ranges"
    used = {item for item in used_ranges(args.root) if RANGE_RE.match(item)}
    probe_jobs = max(1, args.probe_jobs)
    candidates = []
    for selected in candidate_ranges(read_gaps(args.coverage), args.chunk_bytes, args.max_gap_chunks, used):
        if len(candidates) >= args.max_candidates:
            break
        candidates.append(selected)

    accepted = probe_candidates(
        candidates,
        batch_index,
        args.timeout,
        args.keep_failed,
        probe_jobs,
        args.max_accepted,
    )

    if not accepted:
        raise SystemExit("no syntax-checkable executable gap chunks found")
    write_batch(output, accepted, args.dry_run)


if __name__ == "__main__":
    main()
