#!/usr/bin/env python3
"""Audit compiler-reduced MBA dispatch slot expressions."""

from __future__ import annotations

import argparse
import csv
import shutil
import subprocess
from collections import Counter
from pathlib import Path

from vm_mba_state_formula_prover import Parser


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def syntax_check(path: Path) -> tuple[bool, str]:
    compiler = shutil.which("gcc") or shutil.which("clang")
    if not compiler:
        return False, "no C compiler found"
    result = subprocess.run(
        [compiler, "-std=c11", "-pedantic-errors", "-fsyntax-only", "-w", str(path)],
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        check=False,
    )
    return result.returncode == 0, (result.stderr or result.stdout).strip()


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    paths = {
        "readable_isa": root / "vm_readable_isa.tsv",
        "full_transfer_expr": root / "vm_static_transfer_expr_full_python.tsv",
        "dispatch_reductions": root / "vm_mba_dispatch_formula_compiler_reductions.tsv",
        "dispatch_reductions_by_entry": root / "vm_mba_dispatch_formula_compiler_reductions_by_entry.tsv",
        "dispatch_reductions_md": root / "vm_mba_dispatch_formula_compiler_reductions.md",
        "dispatch_harness": root / "vm_mba_dispatch_formula_compiler_reducer_harness.c",
        "dispatch_asm": root / "vm_mba_dispatch_formula_compiler_reducer.s",
        "dispatch_proof_dir": root / "vm_mba_dispatch_formula_compiler_proofs",
    }

    ok = True
    for name, path in paths.items():
        ok &= check(f"{name}_exists", path.exists(), str(path))
    if not ok:
        return 1

    isa = read_tsv(paths["readable_isa"])
    transfer = read_tsv(paths["full_transfer_expr"])
    reductions = read_tsv(paths["dispatch_reductions"])
    summary = read_tsv(paths["dispatch_reductions_by_entry"])
    md_text = paths["dispatch_reductions_md"].read_text(encoding="utf-8", errors="replace")

    algebraic_entries = {
        row["source_entry"]
        for row in isa
        if row.get("dispatch_slot_kind") in {"slot_multi_path", "slot_mba_stateful"}
    }
    slot_unknown_entries = {
        row["source_entry"]
        for row in isa
        if row.get("dispatch_slot_kind") == "slot_unknown"
    }
    transfer_by_entry = {row["source_entry"]: row for row in transfer}
    summary_by_entry = {row["source_entry"]: row for row in summary}

    ok &= check("algebraic_dispatch_entries_expected", len(algebraic_entries) == 160, f"entries={len(algebraic_entries)}")
    ok &= check("slot_unknown_entries_remain_separate", len(slot_unknown_entries) == 23, f"entries={len(slot_unknown_entries)}")
    ok &= check("summary_covers_algebraic_dispatch_entries", set(summary_by_entry) == algebraic_entries, f"summary={len(summary_by_entry)} algebraic={len(algebraic_entries)}")

    missing_transfer = sorted(algebraic_entries - set(transfer_by_entry), key=lambda value: int(value))
    ok &= check("full_transfer_covers_algebraic_entries", not missing_transfer, f"missing={missing_transfer[:8]}")

    clipped = [row["source_entry"] for row in transfer if "...#" in row.get("top_slot_exprs", "")]
    ok &= check("full_transfer_expressions_are_unclipped", not clipped, f"clipped={clipped[:8]}")

    parse_errors: list[str] = []
    expected_variant_count = 0
    for entry in sorted(algebraic_entries, key=lambda value: int(value)):
        text = transfer_by_entry.get(entry, {}).get("top_slot_exprs", "")
        for variant in text.split(";"):
            if not variant:
                continue
            _count, sep, expr = variant.partition("=")
            if not sep:
                parse_errors.append(f"{entry}:missing_equals")
                continue
            expected_variant_count += 1
            try:
                Parser(expr).parse()
            except Exception as exc:
                parse_errors.append(f"{entry}:{exc}")
    ok &= check("full_transfer_slot_expressions_parse", not parse_errors, f"errors={parse_errors[:8]} variants={expected_variant_count}")
    ok &= check("reduction_rows_match_transfer_variants", len(reductions) == expected_variant_count, f"reductions={len(reductions)} variants={expected_variant_count}")

    reduction_statuses = Counter(row.get("reduction_status", "") for row in reductions)
    proof_statuses = Counter(row.get("proof_status", "") for row in reductions)
    target_statuses = Counter(row.get("target_binding_status", "") for row in reductions)
    ok &= check("all_dispatch_expressions_recovered", reduction_statuses == {"compiler_expression_recovered": len(reductions)}, f"statuses={dict(reduction_statuses)}")
    ok &= check("all_dispatch_expressions_proved", proof_statuses == {"proved_equivalent": len(reductions)}, f"proofs={dict(proof_statuses)}")
    ok &= check("target_binding_gaps_remain_visible", target_statuses.get("target_binding_not_validated", 0) == 8 and target_statuses.get("target_binding_validated", 0) == 200, f"targets={dict(target_statuses)}")

    bad_summary: list[str] = []
    for row in summary:
        variants = int(row.get("variant_count", "0") or 0)
        proved = int(row.get("proved_variants", "0") or 0)
        if variants <= 0 or proved != variants:
            bad_summary.append(f"{row.get('source_entry')}:variants={variants}:proved={proved}")
        if not row.get("reduced_dispatch_preview", ""):
            bad_summary.append(f"{row.get('source_entry')}:missing_preview")
    ok &= check("summary_marks_all_variants_proved", not bad_summary, f"bad={bad_summary[:8]}")

    missing_smt = [row["smt2"] for row in reductions if row.get("smt2") and not Path(row["smt2"]).exists()]
    ok &= check("dispatch_smt2_files_exist", not missing_smt, f"missing={missing_smt[:8]}")

    harness_ok, harness_detail = syntax_check(paths["dispatch_harness"])
    ok &= check("dispatch_harness_compiles_c11_syntax", harness_ok, harness_detail[:600])
    ok &= check("markdown_states_dispatch_proof_scope", "slot expression only" in md_text and "Slot-unknown opcodes are not solved" in md_text, "scope caveat present")

    print(f"mba_dispatch_formula_compiler_reducer_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_slot_unknown_dispatch_native_binding_and_program_intent_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
