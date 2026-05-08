#!/usr/bin/env python3
"""Audit compiler-recovered MBA state formula reductions."""

from __future__ import annotations

import argparse
import csv
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
    reductions_path = root / "vm_mba_state_formula_compiler_reductions.tsv"
    md_path = root / "vm_mba_state_formula_compiler_reductions.md"
    asm_path = root / "vm_mba_state_formula_compiler_reducer.s"
    smt_dir = root / "vm_mba_state_formula_compiler_proofs"

    ok = True
    for name, path in [
        ("mba_inventory_exists", inventory_path),
        ("compiler_reductions_exists", reductions_path),
        ("compiler_reductions_markdown_exists", md_path),
        ("compiler_assembly_exists", asm_path),
        ("compiler_proof_dir_exists", smt_dir),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    inventory = read_tsv(inventory_path)
    reductions = read_tsv(reductions_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")
    inventory_sources = {row["source_entry"] for row in inventory}
    reduction_sources = {row["source_entry"] for row in reductions}
    ok &= check("compiler_reductions_cover_inventory", reduction_sources == inventory_sources, f"reductions={len(reduction_sources)} inventory={len(inventory_sources)}")
    ok &= check("compiler_reductions_have_one_row_per_source", len(reductions) == len(reduction_sources), f"rows={len(reductions)} sources={len(reduction_sources)}")

    reduction_counts = Counter(row.get("reduction_status", "") for row in reductions)
    proof_counts = Counter(row.get("proof_status", "") for row in reductions)
    ok &= check("most_compiler_expressions_recovered", reduction_counts.get("compiler_expression_recovered", 0) >= max(1, len(reductions) * 9 // 10), f"statuses={dict(reduction_counts)}")
    ok &= check("most_compiler_expressions_proved", proof_counts.get("proved_equivalent", 0) >= max(1, len(reductions) * 9 // 10), f"proofs={dict(proof_counts)}")
    shorter = [
        row
        for row in reductions
        if row.get("proof_status") == "proved_equivalent"
        and int(row.get("candidate_chars") or 0) < int(row.get("original_chars") or 0)
    ]
    ok &= check("some_proved_reductions_are_shorter", bool(shorter), f"shorter={len(shorter)}")
    missing_smt = [row["source_entry"] for row in reductions if row.get("smt2") and not Path(row["smt2"]).exists()]
    ok &= check("compiler_smt2_files_exist", not missing_smt, f"missing={missing_smt[:8]}")
    ok &= check("markdown_states_compiler_reduction_scope", "does not prove dispatch expressions" in md_text and "GCC -O3" in md_text, "scope caveat present")

    print(f"mba_state_formula_compiler_reducer_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_dispatch_formula_and_program_intent_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
