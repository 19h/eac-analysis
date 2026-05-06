#!/usr/bin/env python3
"""Run reconstruction autopilot passes with compact status and optional RECON.md notes."""

from __future__ import annotations

import argparse
import datetime as dt
import re
import subprocess
import sys
import time
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
RECON_MD = Path("RECON.md")
STATUS_KEYS = [
    "latest_batch",
    "bundle_lines",
    "bundle_bytes",
    "sidecar_sections",
    "prefixed_functions",
    "prefixed_symbols",
    "text_recovered_range_rows",
    "text_gap_rows",
    "audit_gap_rows",
    "text_covered_bytes",
    "text_uncovered_bytes",
    "text_coverage_x100",
    "uncovered_carrier_gaps",
    "uncovered_carrier_bytes",
    "reject_cache_rejects",
    "completion_status",
]
FUNCTION_RE = re.compile(r"^.*function_[0-9a-f]+\(.*\) \{")


def run_capture(cmd: list[str], *, check: bool = True) -> subprocess.CompletedProcess[str]:
    return subprocess.run(
        cmd,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
        check=check,
    )


def read_status(*, fast: bool) -> dict[str, str]:
    cmd = ["python3", "vm_reconstruction_status.py", "--root", str(TRACE_DIR)]
    if fast:
        cmd.append("--fast")
    proc = run_capture(cmd)
    status: dict[str, str] = {}
    for line in proc.stdout.splitlines():
        if "=" not in line:
            continue
        key, value = line.split("=", 1)
        if key in STATUS_KEYS or key == "root":
            status[key] = value
    missing = [key for key in STATUS_KEYS if key not in status]
    if missing:
        raise SystemExit(f"status output missing keys: {', '.join(missing)}")
    return status


def int_status(status: dict[str, str], key: str) -> int:
    return int(status[key])


def coverage_percent(status: dict[str, str]) -> str:
    return f"{int_status(status, 'text_coverage_x100') / 100:.2f}%"


def batch_sidecar(batch: int) -> Path:
    return TRACE_DIR / f"vm_native_gap_retdec_batch{batch}.c"


def count_batch_functions(batch: int) -> int:
    path = batch_sidecar(batch)
    if not path.exists():
        path = TRACE_DIR / f"vm_native_gap_retdec_batch{batch:02d}.c"
    if not path.exists():
        return 0
    count = 0
    with path.open(encoding="utf-8", errors="replace") as handle:
        for line in handle:
            if FUNCTION_RE.match(line):
                count += 1
    return count


def append_recon_note(before: dict[str, str], after: dict[str, str], log_path: Path) -> None:
    before_latest = int_status(before, "latest_batch")
    after_latest = int_status(after, "latest_batch")
    if after_latest <= before_latest:
        batch_text = "no new batches"
        function_text = "no new function sidecars"
    else:
        batches = list(range(before_latest + 1, after_latest + 1))
        counts = [f"{batch}={count_batch_functions(batch)}" for batch in batches]
        batch_text = f"batches {batches[0]}-{batches[-1]}"
        function_text = ", ".join(counts)

    recovered_delta = int_status(after, "text_covered_bytes") - int_status(before, "text_covered_bytes")
    uncovered_delta = int_status(after, "text_uncovered_bytes") - int_status(before, "text_uncovered_bytes")
    timestamp = dt.datetime.now().isoformat(timespec="seconds")
    note = (
        f"\nUnattended reconstruction checkpoint `{timestamp}` added {batch_text}. "
        f"Batch function counts: {function_text}. "
        f"This pass changed semantic `.text` coverage by {recovered_delta:+d} bytes and uncovered `.text` by {uncovered_delta:+d} bytes. "
        f"Current status is latest batch `{after['latest_batch']}`, `{after['bundle_lines']}` all-evidence lines / `{after['bundle_bytes']}` bytes, "
        f"`{after['sidecar_sections']}` sidecar sections, `{after['prefixed_functions']}` prefixed RetDec/manual native functions, "
        f"`{after['prefixed_symbols']}` prefixed evidence symbols, `{after['text_recovered_range_rows']}` recovered `.text` range rows, "
        f"`{after['text_covered_bytes']}` recovered `.text` bytes, `{after['text_uncovered_bytes']}` uncovered `.text` bytes "
        f"({coverage_percent(after)}), and an exact carrier matching `{after['uncovered_carrier_gaps']}` gap rows / "
        f"`{after['uncovered_carrier_bytes']}` bytes. `completion_status` remains `{after['completion_status']}`. "
        f"Full autopilot log: `{log_path}`.\n"
    )
    with RECON_MD.open("a", encoding="utf-8") as handle:
        handle.write(note)


def print_status(label: str, status: dict[str, str]) -> None:
    print(
        f"{label}\tlatest_batch={status['latest_batch']}\t"
        f"text={status['text_covered_bytes']}/"
        f"{int_status(status, 'text_covered_bytes') + int_status(status, 'text_uncovered_bytes')}"
        f"\tcoverage={coverage_percent(status)}\t"
        f"uncovered={status['text_uncovered_bytes']}\t"
        f"gaps={status['text_gap_rows']}\t"
        f"completion={status['completion_status']}",
        flush=True,
    )


def autopilot_cmd(args: argparse.Namespace) -> list[str]:
    cmd = [
        "python3",
        "vm_executable_gap_retdec_autopilot.py",
        "--rounds",
        str(args.rounds_per_pass),
        "--jobs",
        str(args.jobs),
        "--probe-jobs",
        str(args.probe_jobs),
        "--chunk-bytes",
        hex(args.chunk_bytes),
        "--min-chunk-bytes",
        hex(args.min_chunk_bytes),
        "--max-split-candidates",
        str(args.max_split_candidates),
        "--max-gap-chunks",
        str(args.max_gap_chunks),
        "--max-candidates",
        str(args.max_candidates),
        "--max-accepted",
        str(args.max_accepted),
        "--timeout",
        str(args.timeout),
        "--salvage-failed-batches",
    ]
    if args.run_checkpoint:
        cmd.append("--final-checkpoint")
        if args.completion_audit:
            cmd.append("--completion-audit")
    if args.aggregate_syntax:
        cmd.append("--aggregate-syntax")
    if args.skip_manifest:
        cmd.append("--skip-manifest")
    for section in args.section:
        cmd.extend(["--section", section])
    return cmd


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--passes", type=int, default=1)
    parser.add_argument("--rounds-per-pass", type=int, default=24)
    parser.add_argument("--jobs", type=int, default=8)
    parser.add_argument("--probe-jobs", type=int, default=8)
    parser.add_argument("--chunk-bytes", type=lambda value: int(value, 0), default=0x200)
    parser.add_argument("--min-chunk-bytes", type=lambda value: int(value, 0), default=0x80)
    parser.add_argument("--max-split-candidates", type=int, default=64)
    parser.add_argument("--max-gap-chunks", type=int, default=5)
    parser.add_argument("--max-candidates", type=int, default=192)
    parser.add_argument("--max-accepted", type=int, default=8)
    parser.add_argument("--timeout", type=int, default=30)
    parser.add_argument("--section", action="append", default=[".text"])
    parser.add_argument("--max-seconds", type=int, default=0)
    parser.add_argument("--log-dir", type=Path, default=TRACE_DIR / "unattended_logs")
    parser.add_argument("--append-recon", action="store_true")
    parser.add_argument("--aggregate-syntax", action="store_true")
    parser.add_argument("--skip-manifest", action=argparse.BooleanOptionalAction, default=True)
    parser.add_argument("--keep-going-on-failure", action="store_true")
    parser.add_argument(
        "--checkpoint-every-passes",
        type=int,
        default=1,
        help="Run the expensive all-evidence bundle/audit checkpoint every N passes; 0 means only at the end.",
    )
    parser.add_argument("--completion-audit", action=argparse.BooleanOptionalAction, default=True)
    parser.add_argument(
        "--fast-status",
        action=argparse.BooleanOptionalAction,
        default=True,
        help="Use coverage artifacts for interim status instead of rebuilding/scanning the large bundle.",
    )
    args = parser.parse_args()

    args.log_dir.mkdir(parents=True, exist_ok=True)
    started = time.monotonic()
    before_all = read_status(fast=args.fast_status)
    print_status("start", before_all)
    last_checkpoint_batch = int_status(before_all, "latest_batch")

    for pass_index in range(1, args.passes + 1):
        if args.max_seconds and time.monotonic() - started >= args.max_seconds:
            print(f"stop_reason=max_seconds elapsed={time.monotonic() - started:.1f}", flush=True)
            break

        before = read_status(fast=args.fast_status)
        stamp = dt.datetime.now().strftime("%Y%m%d-%H%M%S")
        log_path = args.log_dir / f"reconstruction-autopilot-pass{pass_index:03d}-{stamp}.log"
        due_checkpoint = (
            pass_index == args.passes
            or (args.checkpoint_every_passes > 0 and pass_index % args.checkpoint_every_passes == 0)
        )
        args.run_checkpoint = due_checkpoint
        cmd = autopilot_cmd(args)
        print(f"pass_start\t{pass_index}\tcheckpoint={int(due_checkpoint)}\tlog={log_path}", flush=True)
        with log_path.open("w", encoding="utf-8") as log:
            log.write("+ " + " ".join(cmd) + "\n")
            log.flush()
            proc = subprocess.run(cmd, stdout=log, stderr=subprocess.STDOUT, text=True)
        print(f"pass_exit\t{pass_index}\trc={proc.returncode}", flush=True)
        if proc.returncode and not args.keep_going_on_failure:
            print(f"failure_log={log_path}", flush=True)
            return proc.returncode

        after = read_status(fast=args.fast_status and not due_checkpoint)
        print_status("after_pass", after)
        delta = int_status(after, "text_covered_bytes") - int_status(before, "text_covered_bytes")
        print(
            f"pass_delta\t{pass_index}\tcovered_bytes={delta:+d}\t"
            f"latest_batch={before['latest_batch']}->{after['latest_batch']}",
            flush=True,
        )
        if due_checkpoint:
            last_checkpoint_batch = int_status(after, "latest_batch")
        if args.append_recon and due_checkpoint:
            append_recon_note(before, after, log_path)
        if delta <= 0:
            print("stop_reason=no_semantic_coverage_progress", flush=True)
            break

    after_all = read_status(fast=args.fast_status)
    if args.completion_audit and int_status(after_all, "latest_batch") > last_checkpoint_batch:
        print("final_checkpoint_start", flush=True)
        run_capture(["make", "-s", "uncovered-executable-gaps", "all-evidence-bundle", "reconstruction-completion-audit"])
        after_all = read_status(fast=False)
        print("final_checkpoint_done", flush=True)
    print_status("finish", after_all)
    print(
        "total_delta\t"
        f"covered_bytes={int_status(after_all, 'text_covered_bytes') - int_status(before_all, 'text_covered_bytes'):+d}\t"
        f"uncovered_bytes={int_status(after_all, 'text_uncovered_bytes') - int_status(before_all, 'text_uncovered_bytes'):+d}\t"
        f"latest_batch={before_all['latest_batch']}->{after_all['latest_batch']}",
        flush=True,
    )
    return 0


if __name__ == "__main__":
    sys.exit(main())
