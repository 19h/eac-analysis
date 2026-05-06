#!/usr/bin/env python3
import argparse
import csv
import os
import re
import subprocess
import sys
import time
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
COVERAGE = TRACE_DIR / "vm_native_executable_coverage_audit.tsv"
RANGE_FILE_RE = re.compile(r"native_gap_retdec_batch([0-9]+)\.ranges$")


def run(cmd, *, allow_failure=False):
    print("+", " ".join(str(part) for part in cmd), flush=True)
    start = time.monotonic()
    proc = subprocess.run([str(part) for part in cmd])
    elapsed = time.monotonic() - start
    print(f"# elapsed {elapsed:.2f}s", flush=True)
    if proc.returncode and not allow_failure:
        raise subprocess.CalledProcessError(proc.returncode, cmd)
    return proc.returncode


def existing_range_indices(root):
    indices = set()
    for path in root.glob("native_gap_retdec_batch*.ranges"):
        match = RANGE_FILE_RE.match(path.name)
        if match:
            indices.add(int(match.group(1)))
    return indices


def sidecar_path(index):
    return TRACE_DIR / f"vm_native_gap_retdec_batch{index:02d}.c"


def read_coverage_metrics():
    metrics = {
        "native_executable_coverage_range_rows": "0",
        "native_executable_coverage_gap_rows": "0",
        "native_executable_coverage_recovered_bytes": "0",
        "native_executable_coverage_uncovered_bytes": "0",
    }
    if not COVERAGE.exists():
        return metrics
    recovered = 0
    uncovered = 0
    ranges = 0
    gaps = 0
    with COVERAGE.open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            if row.get("row_type") != "section":
                continue
            recovered += int(row.get("covered_bytes") or 0)
            uncovered += int(row.get("uncovered_bytes") or 0)
            ranges += int(row.get("range_count") or 0)
            gaps += int(row.get("merged_range_count") or 0)
    metrics["native_executable_coverage_range_rows"] = str(ranges)
    metrics["native_executable_coverage_gap_rows"] = str(gaps)
    metrics["native_executable_coverage_recovered_bytes"] = str(recovered)
    metrics["native_executable_coverage_uncovered_bytes"] = str(uncovered)
    return metrics


def print_delta(before, after):
    print("coverage_delta", flush=True)
    for key in [
        "native_executable_coverage_range_rows",
        "native_executable_coverage_gap_rows",
        "native_executable_coverage_recovered_bytes",
        "native_executable_coverage_uncovered_bytes",
    ]:
        old = before.get(key, "?")
        new = after.get(key, "?")
        suffix = ""
        if old.isdigit() and new.isdigit():
            suffix = f"\tdelta={int(new) - int(old):+d}"
        print(f"{key}\t{old}\t{new}{suffix}", flush=True)


def touch_existing_sidecars():
    for path in TRACE_DIR.glob("vm_native_gap_retdec_batch*.c"):
        path.touch()


def main():
    parser = argparse.ArgumentParser(
        description="Loop executable-gap RetDec probing, sidecar build, syntax check, and coverage refresh."
    )
    parser.add_argument("--rounds", type=int, default=4)
    parser.add_argument("--jobs", type=int, default=min(os.cpu_count() or 1, 8))
    parser.add_argument("--chunk-bytes", type=lambda value: int(value, 0), default=0x200)
    parser.add_argument("--max-gap-chunks", type=int, default=4)
    parser.add_argument("--max-candidates", type=int, default=64)
    parser.add_argument("--max-accepted", type=int, default=8)
    parser.add_argument("--timeout", type=int, default=30)
    args = parser.parse_args()

    baseline = read_coverage_metrics()
    created_total = []
    for round_index in range(1, args.rounds + 1):
        print(f"round_start\t{round_index}", flush=True)
        before = existing_range_indices(Path("."))
        rc = run(
            [
                "python3",
                "vm_executable_gap_retdec_probe.py",
                "--chunk-bytes",
                hex(args.chunk_bytes),
                "--max-gap-chunks",
                args.max_gap_chunks,
                "--max-candidates",
                args.max_candidates,
                "--max-accepted",
                args.max_accepted,
                "--timeout",
                args.timeout,
            ],
            allow_failure=True,
        )
        if rc:
            print("executable_gap_probe_no_progress", flush=True)
            break
        created = sorted(existing_range_indices(Path(".")) - before)
        if not created:
            print("executable_gap_probe_no_created_batches", flush=True)
            break
        print("created_batches\t" + ",".join(str(index) for index in created), flush=True)
        run(["make", "-j", args.jobs, *[f"native-gap-retdec-batch{index}" for index in created]])
        for index in created:
            run(["cc", "-std=c11", "-fsyntax-only", "-w", sidecar_path(index)])
        touch_existing_sidecars()
        run(["make", "-s", "native-executable-coverage-audit", "native-retdec-gap-queue"])
        print_delta(baseline, read_coverage_metrics())
        created_total.extend(created)
    print("executable_gap_autopilot_created_batches\t" + ",".join(str(index) for index in created_total), flush=True)


if __name__ == "__main__":
    try:
        main()
    except subprocess.CalledProcessError as exc:
        sys.exit(exc.returncode)
