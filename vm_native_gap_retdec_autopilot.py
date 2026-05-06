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
MANIFEST = TRACE_DIR / "vm_c_reconstruction_manifest.tsv"
QUEUE = TRACE_DIR / "vm_native_retdec_gap_queue.tsv"
ALL_EVIDENCE_BUNDLE = TRACE_DIR / "vm_recovered_source_all_evidence_bundle.c"
RANGE_FILE_RE = re.compile(r"native_gap_retdec_batch([0-9]+)\.ranges$")


def run(cmd, *, allow_failure=False, dry_run=False):
    print("+", " ".join(str(part) for part in cmd), flush=True)
    if dry_run:
        return 0
    start = time.monotonic()
    proc = subprocess.run([str(part) for part in cmd])
    elapsed = time.monotonic() - start
    print(f"# elapsed {elapsed:.2f}s", flush=True)
    if proc.returncode and not allow_failure:
        raise subprocess.CalledProcessError(proc.returncode, cmd)
    return proc.returncode


def existing_range_indices(root: Path):
    indices = set()
    for path in root.glob("native_gap_retdec_batch*.ranges"):
        match = RANGE_FILE_RE.match(path.name)
        if match:
            indices.add(int(match.group(1)))
    return indices


def created_indices(root: Path, before):
    return sorted(existing_range_indices(root) - before)


def sidecar_path(index: int):
    return TRACE_DIR / f"vm_native_gap_retdec_batch{index:02d}.c"


def touch_existing_sidecars():
    for path in TRACE_DIR.glob("vm_native_gap_retdec_batch*.c"):
        path.touch()


def read_manifest():
    if not MANIFEST.exists() or MANIFEST.stat().st_size == 0:
        return {}
    data = {}
    with MANIFEST.open(newline="", errors="replace") as handle:
        for row in csv.reader(handle, delimiter="\t"):
            if len(row) >= 3:
                data[row[1]] = row[2]
            elif len(row) >= 2:
                data[row[0]] = row[1]
    return data


def metric_int(manifest, key):
    try:
        return int(manifest.get(key, "0"))
    except ValueError:
        return 0


def print_manifest_delta(before, after):
    fields = [
        "source_all_evidence_bundle_lines",
        "all_evidence_bundle_sidecar_sections",
        "all_evidence_bundle_prefixed_retdec_functions",
        "native_retdec_gap_queue_rows",
        "native_retdec_gap_queue_total_uncovered_bytes",
        "native_executable_coverage_recovered_bytes",
        "native_executable_coverage_uncovered_bytes",
        "completion_status",
    ]
    print("manifest_delta", flush=True)
    for key in fields:
        old = before.get(key, "?")
        new = after.get(key, "?")
        if old != "?" and new != "?":
            delta = metric_int(after, key) - metric_int(before, key)
            suffix = f"\tdelta={delta:+d}" if old.isdigit() and new.isdigit() else ""
        else:
            suffix = ""
        print(f"{key}\t{old}\t{new}{suffix}", flush=True)


def plan_standard(args):
    before = existing_range_indices(Path("."))
    cmd = [
        "python3",
        "vm_native_gap_retdec_ranges_from_queue.py",
        "--batches",
        args.standard_batches,
        "--batch-size",
        args.standard_batch_size,
    ]
    if args.start_index is not None:
        cmd += ["--start-index", args.start_index]
    rc = run(cmd, allow_failure=True, dry_run=args.dry_run)
    if rc:
        print("standard_planner_no_progress", flush=True)
        return []
    return created_indices(Path("."), before)


def plan_split(args):
    before = existing_range_indices(Path("."))
    cmd = [
        "python3",
        "vm_native_gap_retdec_split_blocked.py",
        "--limit-rows",
        args.split_limit_rows,
        "--max-accepted",
        args.split_max_accepted,
        "--max-per-row",
        args.split_max_per_row,
        "--max-depth",
        args.split_max_depth,
        "--min-bytes",
        hex(args.split_min_bytes),
        "--timeout",
        args.split_timeout,
    ]
    if args.start_index is not None:
        cmd += ["--start-index", args.start_index]
        args.start_index += 1
    rc = run(cmd, allow_failure=True, dry_run=args.dry_run)
    if rc:
        print("split_planner_no_progress", flush=True)
        return []
    return created_indices(Path("."), before)


def build_and_check(indices, args):
    if not indices:
        return
    targets = [f"native-gap-retdec-batch{index}" for index in indices]
    run(["make", "-j", args.jobs, *targets], dry_run=args.dry_run)
    for index in indices:
        run(["cc", "-std=c11", "-fsyntax-only", "-w", sidecar_path(index)], dry_run=args.dry_run)


def refresh_aggregate(*, syntax, dry_run):
    if not dry_run:
        touch_existing_sidecars()
    run(["make", "-s", "native-executable-coverage-audit", "native-retdec-gap-queue"], dry_run=dry_run)
    run(["make", "-s", "all-evidence-bundle"], dry_run=dry_run)
    run(
        [
            "python3",
            "vm_c_reconstruction_manifest.py",
            "--output",
            MANIFEST,
        ],
        dry_run=dry_run,
    )
    if syntax:
        run(["gcc", "-std=c11", "-fsyntax-only", "-w", ALL_EVIDENCE_BUNDLE], dry_run=dry_run)


def main():
    parser = argparse.ArgumentParser(
        description="Repeatedly salvage native RetDec gaps, build syntax-clean sidecars, and refresh the C reconstruction."
    )
    parser.add_argument("--mode", choices=["auto", "standard", "split"], default="auto")
    parser.add_argument("--rounds", type=int, default=4)
    parser.add_argument("--split-passes-per-round", type=int, default=3)
    parser.add_argument("--standard-batches", type=int, default=2)
    parser.add_argument("--standard-batch-size", type=int, default=16)
    parser.add_argument("--split-limit-rows", type=int, default=16)
    parser.add_argument("--split-max-accepted", type=int, default=8)
    parser.add_argument("--split-max-per-row", type=int, default=1)
    parser.add_argument("--split-min-bytes", type=lambda value: int(value, 0), default=0x18)
    parser.add_argument("--split-max-depth", type=int, default=4)
    parser.add_argument("--split-timeout", type=int, default=45)
    parser.add_argument("--jobs", type=int, default=min(os.cpu_count() or 1, 8))
    parser.add_argument("--start-index", type=int)
    parser.add_argument("--aggregate-syntax", choices=["every", "final", "never"], default="final")
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()

    if args.rounds <= 0:
        raise SystemExit("--rounds must be positive")

    baseline = read_manifest()
    total_created = []
    for round_index in range(1, args.rounds + 1):
        print(f"round_start\t{round_index}", flush=True)
        created = []

        if args.mode in {"auto", "standard"}:
            created.extend(plan_standard(args))

        if args.mode == "split" or (args.mode == "auto" and not created):
            for _ in range(args.split_passes_per_round):
                new_indices = plan_split(args)
                if not new_indices:
                    break
                created.extend(new_indices)

        created = sorted(set(created))
        if not created:
            print("autopilot_no_progress", flush=True)
            break

        print("created_batches\t" + ",".join(str(index) for index in created), flush=True)
        build_and_check(created, args)
        total_created.extend(created)

        refresh_aggregate(syntax=args.aggregate_syntax == "every", dry_run=args.dry_run)
        print_manifest_delta(baseline, read_manifest())

    if total_created and args.aggregate_syntax == "final":
        run(["gcc", "-std=c11", "-fsyntax-only", "-w", ALL_EVIDENCE_BUNDLE], dry_run=args.dry_run)

    print("autopilot_created_batches\t" + ",".join(str(index) for index in sorted(set(total_created))), flush=True)


if __name__ == "__main__":
    try:
        main()
    except subprocess.CalledProcessError as exc:
        sys.exit(exc.returncode)
