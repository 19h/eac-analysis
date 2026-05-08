#!/usr/bin/env python3
"""Audit MBA state formula reducer outputs."""

from __future__ import annotations

import argparse
import csv
import shutil
import subprocess
from collections import Counter
from pathlib import Path


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    inventory_path = root / "vm_mba_problem_inventory.tsv"
    reductions_path = root / "vm_mba_state_formula_reductions.tsv"
    harness_path = root / "vm_mba_state_formula_reducer_harness.c"
    so_path = root / "vm_mba_state_formula_reducer_harness.so"
    md_path = root / "vm_mba_state_formula_reductions.md"

    ok = True
    for name, path in [
        ("mba_inventory_exists", inventory_path),
        ("state_reductions_exists", reductions_path),
        ("state_reducer_harness_exists", harness_path),
        ("state_reducer_shared_object_exists", so_path),
        ("state_reductions_markdown_exists", md_path),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    inventory = read_tsv(inventory_path)
    reductions = read_tsv(reductions_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")
    inventory_sources = {row["source_entry"] for row in inventory}
    reduction_sources = {row["source_entry"] for row in reductions}
    ok &= check("reductions_cover_inventory", reduction_sources == inventory_sources, f"reductions={len(reduction_sources)} inventory={len(inventory_sources)}")
    ok &= check("reductions_have_one_row_per_source", len(reductions) == len(reduction_sources), f"rows={len(reductions)} sources={len(reduction_sources)}")

    status_counts = Counter(row.get("status", "") for row in reductions)
    ok &= check("reducer_found_some_candidates", status_counts.get("candidate_simplified", 0) > 0, f"statuses={dict(status_counts)}")
    ok &= check("unsolved_rows_remain_visible", status_counts.get("unsolved_by_current_templates", 0) > 0, f"statuses={dict(status_counts)}")
    empty_validation = [row["source_entry"] for row in reductions if not row.get("validation")]
    ok &= check("reduction_rows_mark_validation_strength", not empty_validation, f"empty={empty_validation[:8]}")

    compiler = shutil.which("gcc") or shutil.which("clang")
    ok &= check("c_compiler_available", compiler is not None, compiler or "not found")
    if compiler:
        result = subprocess.run(
            [compiler, "-std=c11", "-fsyntax-only", "-w", str(harness_path)],
            text=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            check=False,
        )
        ok &= check("state_reducer_harness_compiles_c11_syntax", result.returncode == 0, (result.stderr or result.stdout).strip()[:800])

    ok &= check("markdown_marks_not_formal_proof", "not a formal proof" in md_text and "needs formal proof" in md_text, "caveat present")
    print(f"mba_state_formula_reducer_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_formal_mba_proof_and_dispatch_reduction_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
