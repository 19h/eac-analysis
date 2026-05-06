#!/usr/bin/env python3
import argparse
import os
import re
import subprocess
import sys
import time
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
RANGE_FILE_RE = re.compile(r"native_gap_retdec_batch([0-9]+)\.ranges$")


def run(cmd, *, dry_run=False):
    print("+", " ".join(cmd), flush=True)
    if dry_run:
        return
    start = time.monotonic()
    subprocess.run(cmd, check=True)
    elapsed = time.monotonic() - start
    print(f"# elapsed {elapsed:.2f}s", flush=True)


def existing_range_indices(root: Path):
    indices = set()
    for path in root.glob("native_gap_retdec_batch*.ranges"):
        match = RANGE_FILE_RE.match(path.name)
        if match:
            indices.add(int(match.group(1)))
    return indices


def touch_existing_sidecars(trace_dir: Path):
    for path in trace_dir.glob("vm_native_gap_retdec_batch*.c"):
        path.touch()


def planned_indices(before, after):
    created = sorted(after - before)
    if created:
        return created
    raise SystemExit("planner did not create any new native gap range files")


def sidecar_path(index: int):
    return TRACE_DIR / f"vm_native_gap_retdec_batch{index:02d}.c"


def main():
    parser = argparse.ArgumentParser(
        description="Plan, generate, merge, and verify the next native RetDec gap checkpoint."
    )
    parser.add_argument("--batches", type=int, default=8)
    parser.add_argument("--batch-size", type=int, default=16)
    parser.add_argument("--jobs", type=int, default=min(os.cpu_count() or 1, 8))
    parser.add_argument("--start-index", type=int)
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument("--keep-old-mtimes", action="store_true")
    parser.add_argument("--skip-aggregate-syntax", action="store_true")
    args = parser.parse_args()

    if args.batches <= 0 or args.batch_size <= 0:
        raise SystemExit("--batches and --batch-size must be positive")

    before = existing_range_indices(Path("."))
    if not args.keep_old_mtimes and not args.dry_run:
        touch_existing_sidecars(TRACE_DIR)

    planner = [
        "python3",
        "vm_native_gap_retdec_ranges_from_queue.py",
        "--batches",
        str(args.batches),
        "--batch-size",
        str(args.batch_size),
    ]
    if args.start_index is not None:
        planner += ["--start-index", str(args.start_index)]
    run(planner, dry_run=args.dry_run)

    if args.dry_run:
        run(["make", "-n", "native-gap-retdec-batches"], dry_run=True)
        return

    indices = planned_indices(before, existing_range_indices(Path(".")))
    batch_targets = [f"native-gap-retdec-batch{index}" for index in indices]
    run(["make", "-j", str(args.jobs), *batch_targets])

    for index in indices:
        run(["cc", "-std=c11", "-fsyntax-only", "-w", str(sidecar_path(index))])

    run(["make", "-s", "native-executable-coverage-audit", "native-retdec-gap-queue"])
    run(["make", "-s", "all-evidence-bundle", "c-reconstruction-manifest"])

    if not args.skip_aggregate_syntax:
        run(["gcc", "-std=c11", "-fsyntax-only", "-w", str(TRACE_DIR / "vm_recovered_source_all_evidence_bundle.c")])

    print(
        "checkpoint_complete\t"
        + ",".join(f"{index:02d}" for index in indices),
        flush=True,
    )


if __name__ == "__main__":
    try:
        main()
    except subprocess.CalledProcessError as exc:
        sys.exit(exc.returncode)
