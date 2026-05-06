#!/usr/bin/env python3
import argparse
import csv
import os
import re
import subprocess
import sys
import time
from pathlib import Path

from vm_executable_gap_retdec_probe import (
    DEFAULT_REJECT_CACHE,
    append_reject_cache,
    generator_fingerprint,
)


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


def range_file_path(root, index):
    return root / f"native_gap_retdec_batch{index:02d}.ranges"


def read_batch_ranges(path):
    ranges = []
    with path.open(errors="replace") as handle:
        for line in handle:
            selected = line.strip()
            if selected:
                ranges.append(selected)
    return ranges


def unique_quarantine_path(path):
    candidate = path.with_name(f"{path.stem}.failed{path.suffix}")
    if not candidate.exists():
        return candidate
    counter = 1
    while True:
        candidate = path.with_name(f"{path.stem}.failed{counter}{path.suffix}")
        if not candidate.exists():
            return candidate
        counter += 1


def quarantine_range_file(path):
    if not path.exists():
        return None
    target = unique_quarantine_path(path)
    path.replace(target)
    print(f"quarantined_range_file\t{path}\t{target}", flush=True)
    return target


def remove_sidecar(index):
    path = sidecar_path(index)
    if path.exists():
        path.unlink()
        print(f"removed_failed_sidecar\t{path}", flush=True)


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


def checkpoint(*, aggregate_syntax):
    touch_existing_sidecars()
    run(["make", "-s", "all-evidence-bundle"])
    run(
        [
            "python3",
            "vm_c_reconstruction_manifest.py",
            "--output",
            TRACE_DIR / "vm_c_reconstruction_manifest.tsv",
            "--markdown-output",
            TRACE_DIR / "vm_c_reconstruction_manifest.md",
        ]
    )
    if aggregate_syntax:
        run(
            [
                "gcc",
                "-std=c11",
                "-fsyntax-only",
                "-w",
                TRACE_DIR / "vm_recovered_source_all_evidence_bundle.c",
            ]
        )


def build_and_syntax_check(index, jobs, *, allow_failure):
    build_rc = run(["make", "-j", jobs, f"native-gap-retdec-batch{index}"], allow_failure=allow_failure)
    if build_rc:
        return False
    syntax_rc = run(["cc", "-std=c11", "-fsyntax-only", "-w", sidecar_path(index)], allow_failure=allow_failure)
    return syntax_rc == 0


def next_free_batch_index(root):
    index = max(existing_range_indices(root), default=-1) + 1
    while range_file_path(root, index).exists():
        index += 1
    return index


def salvage_failed_batch(index, args):
    original = range_file_path(args.root, index)
    ranges = read_batch_ranges(original) if original.exists() else []
    quarantine_range_file(original)
    remove_sidecar(index)
    if not ranges:
        return []

    print(f"salvage_batch_start\t{index}\t{len(ranges)}", flush=True)
    salvaged = []
    rejected = []
    for selected in ranges:
        salvage_index = next_free_batch_index(args.root)
        salvage_path = range_file_path(args.root, salvage_index)
        salvage_path.write_text(f"{selected}\n")
        print(f"salvage_try\t{selected}\tbatch={salvage_index}", flush=True)
        if build_and_syntax_check(salvage_index, args.jobs, allow_failure=True):
            salvaged.append(salvage_index)
            continue
        rejected.append(selected)
        quarantine_range_file(salvage_path)
        remove_sidecar(salvage_index)

    append_reject_cache(args.reject_cache, generator_fingerprint(), rejected, False)
    print(
        "salvage_batch_done\t"
        f"{index}\tsalvaged={','.join(str(item) for item in salvaged)}\t"
        f"rejected={len(rejected)}",
        flush=True,
    )
    return salvaged


def build_created_batches(created, args):
    rc = run(
        ["make", "-j", args.jobs, *[f"native-gap-retdec-batch{index}" for index in created]],
        allow_failure=args.salvage_failed_batches,
    )
    accepted = []
    failed = []
    for index in created:
        if rc and not build_and_syntax_check(index, args.jobs, allow_failure=True):
            failed.append(index)
            continue
        syntax_rc = run(
            ["cc", "-std=c11", "-fsyntax-only", "-w", sidecar_path(index)],
            allow_failure=args.salvage_failed_batches,
        )
        if syntax_rc == 0:
            accepted.append(index)
        else:
            failed.append(index)
    if failed and not args.salvage_failed_batches:
        raise subprocess.CalledProcessError(1, ["cc", "-std=c11", "-fsyntax-only"])

    salvaged = []
    for index in failed:
        salvaged.extend(salvage_failed_batch(index, args))
    return accepted + salvaged


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
    parser.add_argument("--probe-jobs", type=int, default=min(os.cpu_count() or 1, 4))
    parser.add_argument("--timeout", type=int, default=30)
    parser.add_argument("--checkpoint-frequency", type=int, default=0)
    parser.add_argument("--final-checkpoint", action="store_true")
    parser.add_argument("--aggregate-syntax", action="store_true")
    parser.add_argument("--root", type=Path, default=Path("."))
    parser.add_argument("--reject-cache", type=Path, default=DEFAULT_REJECT_CACHE)
    parser.add_argument(
        "--salvage-failed-batches",
        action="store_true",
        help="Quarantine failed multi-range batches, retry their ranges one at a time, cache rejects, and continue.",
    )
    args = parser.parse_args()

    baseline = read_coverage_metrics()
    created_total = []
    for round_index in range(1, args.rounds + 1):
        print(f"round_start\t{round_index}", flush=True)
        before = existing_range_indices(args.root)
        rc = run(
            [
                "python3",
                "vm_executable_gap_retdec_probe.py",
                "--root",
                args.root,
                "--chunk-bytes",
                hex(args.chunk_bytes),
                "--max-gap-chunks",
                args.max_gap_chunks,
                "--max-candidates",
                args.max_candidates,
                "--max-accepted",
                args.max_accepted,
                "--probe-jobs",
                args.probe_jobs,
                "--timeout",
                args.timeout,
                "--reject-cache",
                args.reject_cache,
            ],
            allow_failure=True,
        )
        if rc:
            print("executable_gap_probe_no_progress", flush=True)
            break
        created = sorted(existing_range_indices(args.root) - before)
        if not created:
            print("executable_gap_probe_no_created_batches", flush=True)
            break
        print("created_batches\t" + ",".join(str(index) for index in created), flush=True)
        built = build_created_batches(created, args)
        if not built:
            print("executable_gap_no_syntax_clean_batches", flush=True)
            break
        touch_existing_sidecars()
        run(["make", "-s", "native-executable-coverage-audit", "native-retdec-gap-queue"])
        print_delta(baseline, read_coverage_metrics())
        created_total.extend(built)
        if args.checkpoint_frequency > 0 and round_index % args.checkpoint_frequency == 0:
            checkpoint(aggregate_syntax=args.aggregate_syntax)
    if args.final_checkpoint and created_total:
        checkpoint(aggregate_syntax=args.aggregate_syntax)
    print("executable_gap_autopilot_created_batches\t" + ",".join(str(index) for index in created_total), flush=True)


if __name__ == "__main__":
    try:
        main()
    except subprocess.CalledProcessError as exc:
        sys.exit(exc.returncode)
