#!/usr/bin/env python3
"""Audit observed second-stage dispatch binding artifacts."""

from __future__ import annotations

import argparse
import csv
import subprocess
from collections import Counter
from pathlib import Path


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}: {'ok' if ok else 'FAIL'} - {detail}")
    return ok


def syntax_check(path: Path) -> tuple[bool, str]:
    result = subprocess.run(
        ["gcc", "-std=c11", "-fsyntax-only", "-Wall", "-Wextra", "-Wno-unused-variable", "-Wno-unused-function", str(path)],
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        check=False,
    )
    return result.returncode == 0, (result.stderr or result.stdout).strip() or "compiled"


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()

    summary_path = args.root / "vm_dispatch_second_stage_binding_summary.tsv"
    rows_path = args.root / "vm_dispatch_second_stage_binding_rows.tsv"
    c_path = args.root / "vm_dispatch_second_stage_bindings.c"
    md_path = args.root / "vm_dispatch_second_stage_bindings.md"
    reductions_path = args.root / "vm_mba_dispatch_formula_compiler_reductions_by_entry.tsv"

    summary = read_tsv(summary_path)
    rows = read_tsv(rows_path)
    reductions = read_tsv(reductions_path)
    md_text = md_path.read_text(errors="replace")

    open_entries = {
        row["source_entry"]
        for row in reductions
        if "target_binding_not_validated" in row.get("target_binding_mix", "")
    }
    summary_entries = {row["source_entry"] for row in summary}
    statuses = Counter(row.get("validation_status", "") for row in summary)
    bad_rows = [
        f"{row.get('source_entry')}:{row.get('start_vm_ip')} idx={row.get('idx')} target={row.get('target_entry')}"
        for row in rows
        if row.get("idx_matches_target_entry") != "yes" or row.get("table_is_default") != "yes"
    ]
    bad_summary = [
        f"{row.get('source_entry')}:status={row.get('validation_status')}:events={row.get('events')}:bad={row.get('bad_events')}"
        for row in summary
        if row.get("validation_status") != "second_stage_dispatch_validated"
        or int(row.get("events", "0") or 0) <= 0
        or int(row.get("bad_events", "0") or 0) != 0
    ]

    ok = True
    ok &= check("second_stage_binding_covers_open_dispatch_entries", summary_entries == open_entries, f"summary={sorted(summary_entries)} open={sorted(open_entries)}")
    ok &= check("second_stage_binding_all_validated", statuses == {"second_stage_dispatch_validated": len(summary)}, f"statuses={dict(statuses)}")
    ok &= check("second_stage_binding_rows_match_dispatch_idx", not bad_rows, f"bad={bad_rows[:8]} rows={len(rows)}")
    ok &= check("second_stage_binding_summary_consistent", not bad_summary, f"bad={bad_summary[:8]}")
    c_ok, c_detail = syntax_check(c_path)
    ok &= check("second_stage_binding_c_compiles_c11_syntax", c_ok, c_detail[:600])
    ok &= check(
        "second_stage_binding_markdown_explains_scope",
        "first-stage static transfer reaches" in md_text and "[`DISPATCH`] idx" not in md_text and "`[DISPATCH] idx`" in md_text,
        "scope text present",
    )

    print(f"dispatch_second_stage_binding_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_native_binding_real_server_paths_and_program_intent_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
