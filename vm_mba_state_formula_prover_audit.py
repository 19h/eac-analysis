#!/usr/bin/env python3
"""Audit Z3 proofs for MBA state formula reductions."""

from __future__ import annotations

import argparse
import csv
import shutil
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

    reductions_path = root / "vm_mba_state_formula_reductions.tsv"
    proofs_path = root / "vm_mba_state_formula_proofs.tsv"
    proof_dir = root / "vm_mba_state_formula_proofs"
    md_path = root / "vm_mba_state_formula_proofs.md"

    ok = True
    for name, path in [
        ("state_reductions_exists", reductions_path),
        ("state_proofs_exists", proofs_path),
        ("state_proof_dir_exists", proof_dir),
        ("state_proofs_markdown_exists", md_path),
    ]:
        ok &= check(name, path.exists(), str(path))
    ok &= check("z3_binary_available", shutil.which("z3") is not None, shutil.which("z3") or "not found")
    if not ok:
        return 1

    reductions = read_tsv(reductions_path)
    proofs = read_tsv(proofs_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")
    candidates = [row for row in reductions if row.get("status") == "candidate_simplified"]
    candidate_sources = {row["source_entry"] for row in candidates}
    proof_sources = {row["source_entry"] for row in proofs}
    ok &= check("proofs_cover_all_candidates", proof_sources == candidate_sources, f"proofs={len(proof_sources)} candidates={len(candidate_sources)}")
    ok &= check("proofs_have_one_row_per_candidate", len(proofs) == len(proof_sources), f"rows={len(proofs)} sources={len(proof_sources)}")

    status_counts = Counter(row.get("proof_status", "") for row in proofs)
    ok &= check("some_candidates_proved", status_counts.get("proved_equivalent", 0) > 0, f"statuses={dict(status_counts)}")
    ok &= check("parse_and_solver_errors_absent", not any(row.get("proof_status") in {"parse_or_emit_error", "solver_error", "solver_unparsed"} for row in proofs), f"statuses={dict(status_counts)}")
    missing_smt = [row["source_entry"] for row in proofs if row.get("smt2") and not Path(row["smt2"]).exists()]
    ok &= check("smt2_files_exist", not missing_smt, f"missing={missing_smt[:8]}")
    ok &= check("markdown_states_proof_scope", "not the dispatch formula" in md_text and "Z3 returned `unsat`" in md_text, "scope caveat present")

    print(f"mba_state_formula_prover_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_dispatch_formula_and_remaining_state_formula_reduction_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
