#!/usr/bin/env python3
"""Audit the MBA solution corpus."""

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

    catalog_path = root / "vm_semantic_opcode_catalog.tsv"
    readable_ops_path = root / "vm_program_readable_ops.tsv"
    refs_path = root / "vm_native_side_effect_vm_refs.tsv"
    inventory_path = root / "vm_mba_problem_inventory.tsv"
    observation_path = root / "vm_mba_observation_rows.tsv"
    atom_path = root / "vm_mba_formula_atoms.tsv"
    trace_path = root / "vm_mba_trace_inputs.tsv"
    md_path = root / "vm_mba_solution_corpus.md"

    ok = True
    for name, path in [
        ("opcode_catalog_exists", catalog_path),
        ("readable_ops_exists", readable_ops_path),
        ("vm_refs_exists", refs_path),
        ("mba_inventory_exists", inventory_path),
        ("mba_observations_exists", observation_path),
        ("mba_formula_atoms_exists", atom_path),
        ("mba_trace_inputs_exists", trace_path),
        ("mba_markdown_exists", md_path),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    catalog = read_tsv(catalog_path)
    readable_ops = read_tsv(readable_ops_path)
    inventory = read_tsv(inventory_path)
    observations = read_tsv(observation_path)
    atoms = read_tsv(atom_path)
    traces = read_tsv(trace_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")

    needs_catalog = {
        row["source_entry"]
        for row in catalog
        if "needs_algebraic_simplification" in row.get("readability_status", "")
        or row.get("dispatch_slot_kind") == "slot_unknown"
    }
    needs_rows = {
        row["source_entry"]
        for row in readable_ops
        if row.get("unresolved") != "none" or row.get("operation_family") == "unresolved_dispatch"
    }
    expected_sources = needs_catalog | needs_rows
    inventory_sources = {row["source_entry"] for row in inventory}
    atom_sources = {row["source_entry"] for row in atoms}
    trace_sources = {row["source_entry"] for row in traces}
    observation_sources = {row["source_entry"] for row in observations}

    ok &= check("inventory_covers_all_problem_sources", inventory_sources == expected_sources, f"inventory={len(inventory_sources)} expected={len(expected_sources)}")
    ok &= check("formula_atoms_cover_inventory", atom_sources == inventory_sources, f"atoms={len(atom_sources)} inventory={len(inventory_sources)}")
    ok &= check("trace_inputs_cover_inventory", trace_sources == inventory_sources, f"traces={len(trace_sources)} inventory={len(inventory_sources)}")
    ok &= check("observations_cover_inventory_sources", inventory_sources.issubset(observation_sources), f"missing={sorted(inventory_sources - observation_sources)[:8]}")

    expected_observations = [row for row in readable_ops if row["source_entry"] in expected_sources]
    ok &= check("observation_rows_cover_problem_ops", len(observations) == len(expected_observations), f"observations={len(observations)} expected={len(expected_observations)}")

    empty_required = [row["source_entry"] for row in inventory if not row.get("required_inputs")]
    empty_status = [row["source_entry"] for row in inventory if not row.get("status")]
    ok &= check("inventory_has_required_inputs", not empty_required, f"empty={empty_required[:8]}")
    ok &= check("inventory_has_status", not empty_status, f"empty={empty_status[:8]}")

    kind_counts = Counter(row.get("problem_kind", "") for row in inventory)
    status_counts = Counter(row.get("status", "") for row in inventory)
    ok &= check("problem_kinds_present", "algebraic_mba" in kind_counts and (kind_counts.get("dispatch_unknown", 0) or kind_counts.get("row_level_unresolved", 0)), f"kinds={dict(kind_counts)}")
    ok &= check("status_marks_reduction_and_trace_work", "ready_for_symbolic_reduction" in status_counts and "needs_dispatch_resolution_or_trace" in status_counts, f"statuses={dict(status_counts)}")

    observation_header = set(observations[0].keys() if observations else set())
    operand_columns = [f"b{index}" for index in range(16)] + [f"u16_{offset}" for offset in range(16)]
    required_operand_columns = {
        var
        for row in atoms
        for var in row.get("variables", "").split(";")
        if var.startswith("b") or var.startswith("u16_")
    }
    missing_operand_columns = [field for field in sorted(required_operand_columns) if field not in observation_header]
    ok &= check("observations_include_operand_columns", not missing_operand_columns, f"missing={missing_operand_columns}")
    missing_standard_operand_columns = [field for field in operand_columns if field not in observation_header]
    ok &= check("observations_include_standard_operand_window", not missing_standard_operand_columns, f"missing={missing_standard_operand_columns[:8]}")
    bad_observation_rows = [row.get("start_vm_ip", "") for row in observations if not row.get("bytes") or not row.get("state_semantics") or not row.get("dispatch_semantics")]
    ok &= check("observation_rows_have_core_evidence", not bad_observation_rows, f"bad={bad_observation_rows[:8]}")

    traced_sources = [row["source_entry"] for row in traces if row.get("trace_rows") and row["trace_rows"] != "0"]
    state_sample_sources = [row["source_entry"] for row in traces if row.get("pre_state_samples") or row.get("pre_flags_samples")]
    ok &= check("some_problem_sources_have_dynamic_trace_rows", bool(traced_sources), f"traced={len(traced_sources)}")
    ok &= check("state_trace_samples_are_preserved_when_available", bool(state_sample_sources), f"sources={len(state_sample_sources)}")

    formula_with_vars = [row["source_entry"] for row in atoms if row.get("variables")]
    formula_with_constants = [row["source_entry"] for row in atoms if row.get("constants")]
    ok &= check("formula_atoms_extract_variables", len(formula_with_vars) >= max(1, len(atoms) // 2), f"with_vars={len(formula_with_vars)} atoms={len(atoms)}")
    ok &= check("formula_atoms_extract_constants", len(formula_with_constants) >= max(1, len(atoms) // 2), f"with_consts={len(formula_with_constants)} atoms={len(atoms)}")
    ok &= check("markdown_explains_mba_tables_and_caveat", "Rows such as `case_state -> successor_vm_ip` are not final program behavior" in md_text and "evidence collection, not final reduction" in md_text, "explanation present")

    print(f"mba_solution_corpus_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_mba_expressions_not_yet_reduced")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
