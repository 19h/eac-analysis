#!/usr/bin/env python3
"""Run focused VMTAIL captures for VM program MBA cases missing stateful inputs."""

from __future__ import annotations

import argparse
import csv
import os
import re
import subprocess
from pathlib import Path


VMTAIL_RE = re.compile(r"\bvm_ip_off=0x([0-9a-fA-F]+)\b")


def read_missing(root: Path) -> list[dict[str, str]]:
    rows: list[dict[str, str]] = []
    seen: set[str] = set()
    for path in sorted(root.glob("vm_program_atlas_*_mba_missing.tsv")):
        with path.open(newline="") as handle:
            for row in csv.DictReader(handle, delimiter="\t"):
                state = row.get("state", "")
                if not state or state in seen:
                    continue
                seen.add(state)
                rows.append({
                    "program": row.get("program", ""),
                    "state": state,
                    "reason": row.get("reason", ""),
                    "source": str(path),
                })
    rows.sort(key=lambda row: int(row["state"], 16))
    return rows


def chunks(rows: list[dict[str, str]], size: int) -> list[list[dict[str, str]]]:
    return [rows[idx:idx + size] for idx in range(0, len(rows), size)]


def all_table_spec(eac: Path, window: int) -> str:
    proc = subprocess.run(
        ["python3", "vm_tail_scan.py", "--all-table", "--eac", str(eac), "--window", hex(window), "--limit", "0"],
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        check=True,
    )
    for line in proc.stdout.splitlines():
        if line.startswith("EAC_VMTAIL_SITES="):
            return line.split("=", 1)[1]
    raise SystemExit("vm_tail_scan.py did not emit EAC_VMTAIL_SITES")


def executable_relative(path: Path) -> str:
    text = str(path)
    if path.is_absolute() or "/" in text:
        return text
    return f"./{text}"


def captured_states(stderr_path: Path) -> set[str]:
    states: set[str] = set()
    if not stderr_path.exists():
        return states
    with stderr_path.open(errors="replace") as handle:
        for line in handle:
            if not line.startswith("[VMTAIL]"):
                continue
            match = VMTAIL_RE.search(line)
            if match:
                states.add(f"0x{int(match.group(1), 16):x}")
    return states


def write_plan(path: Path, rows: list[dict[str, str]]) -> None:
    fields = ["batch", "programs", "states", "state_count", "run_dir"]
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)


def write_summary(path: Path, rows: list[dict[str, str]]) -> None:
    fields = [
        "batch",
        "state_count",
        "captured_count",
        "missing_after_run",
        "returncode",
        "timeout_seconds",
        "run_dir",
        "captured_states",
        "uncaptured_states",
    ]
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--eac", type=Path, default=Path("eac.elf"))
    parser.add_argument("--batch-size", type=int, default=80)
    parser.add_argument("--timeout", type=int, default=90)
    parser.add_argument("--window", type=lambda value: int(value, 0), default=0x1200)
    parser.add_argument("--tag", default="all")
    parser.add_argument("--sleep-seconds", default="3")
    parser.add_argument("--tail-limit-multiplier", type=int, default=128)
    parser.add_argument("--stop-after-matches", type=int, default=0)
    parser.add_argument("--plan-only", action="store_true")
    parser.add_argument("--rereduce", action="store_true")
    args = parser.parse_args()

    missing = read_missing(args.root)
    if not missing:
        print("missing_cases=0")
        return 0
    if args.batch_size <= 0 or args.batch_size > 128:
        raise SystemExit("--batch-size must be in 1..128 because driver focus IP capacity is 128")

    batches = chunks(missing, args.batch_size)
    plan_rows: list[dict[str, str]] = []
    for idx, batch in enumerate(batches):
        states = [row["state"] for row in batch]
        programs = sorted({row["program"] for row in batch})
        run_dir = Path("dumps") / f"vmtail-mba-focus-{args.tag}-{idx:03d}"
        plan_rows.append({
            "batch": str(idx),
            "programs": ",".join(programs),
            "states": ",".join(states),
            "state_count": str(len(states)),
            "run_dir": str(run_dir),
        })

    plan_path = args.root / f"vm_program_mba_focus_{args.tag}_plan.tsv"
    write_plan(plan_path, plan_rows)
    print(f"plan={plan_path} batches={len(plan_rows)} missing_cases={len(missing)}")
    if args.plan_only:
        return 0

    table_spec = all_table_spec(args.eac, args.window)
    base_env = os.environ.copy()
    base_env.update({
        "EAC_LAUNCHERDIR": "/tmp/fake_launcher",
        "EAC_TRACE_FAKE_NETWORK": "1",
        "EAC_FAST_EXIT": "1",
        "EAC_DISPATCH_TRACE": "1",
        "EAC_DISPATCH_LIMIT": "1",
        "EAC_VMTAIL_TRACE": "1",
        "EAC_VMTAIL_REGS": "1",
        "EAC_VMTAIL_SCRATCH": "1",
        "EAC_VMTAIL_SITES": table_spec,
        "LD_PRELOAD": "./trace_preload.so",
    })

    summary_rows: list[dict[str, str]] = []
    for row in plan_rows:
        run_dir = Path(row["run_dir"])
        run_dir.mkdir(parents=True, exist_ok=True)
        states = row["states"].split(",") if row["states"] else []
        tail_limit = max(16, len(states) * max(1, args.tail_limit_multiplier))
        env = base_env.copy()
        env.update({
            "EAC_VMTAIL_FOCUS_IPS": ",".join(states),
            "EAC_VMTAIL_LIMIT": str(tail_limit),
            "EAC_VMTAIL_STOP_AFTER_MATCHES": str(args.stop_after_matches),
        })
        stdout_path = run_dir / "run.stdout"
        stderr_path = run_dir / "run.stderr"
        cmd = [
            "timeout",
            str(args.timeout),
            "./driver",
            executable_relative(args.eac),
            "1",
            "x",
            "0x800",
            str(args.sleep_seconds),
        ]
        with stdout_path.open("w") as stdout, stderr_path.open("w") as stderr:
            proc = subprocess.run(cmd, env=env, stdout=stdout, stderr=stderr)
        captured = captured_states(stderr_path)
        wanted = set(states)
        uncaptured = sorted(wanted - captured, key=lambda value: int(value, 16))
        summary_rows.append({
            "batch": row["batch"],
            "state_count": str(len(states)),
            "captured_count": str(len(captured & wanted)),
            "missing_after_run": str(len(uncaptured)),
            "returncode": str(proc.returncode),
            "timeout_seconds": str(args.timeout),
            "run_dir": str(run_dir),
            "captured_states": ",".join(sorted(captured & wanted, key=lambda value: int(value, 16))),
            "uncaptured_states": ",".join(uncaptured),
        })
        print(
            f"batch={row['batch']} states={len(states)} captured={len(captured & wanted)} "
            f"uncaptured={len(uncaptured)} returncode={proc.returncode} dir={run_dir}"
        )

    summary_path = args.root / f"vm_program_mba_focus_{args.tag}_summary.tsv"
    write_summary(summary_path, summary_rows)
    print(f"summary={summary_path}")

    if args.rereduce:
        subprocess.run(["python3", "vm_program_mba_all_reduce.py", "--root", str(args.root), "--elf", str(args.eac)], check=True)

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
