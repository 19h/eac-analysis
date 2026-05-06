#!/usr/bin/env python3
"""Audit readable VM program behavior dossiers."""

from __future__ import annotations

import argparse
import csv
from pathlib import Path


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def parse_int(text: str | None) -> int:
    value = (text or "").strip()
    if not value:
        return 0
    try:
        return int(value, 16 if value.startswith("0x") else 10)
    except ValueError:
        return 0


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    inventory_path = root / "vm_behavior_inventory.tsv"
    first_seen_path = root / "vm_x_program_first_seen.tsv"
    string_roles_path = root / "vm_string_role_annotations.tsv"
    side_effect_programs_path = root / "vm_native_side_effect_programs.tsv"
    dossiers_tsv_path = root / "vm_program_behavior_dossiers.tsv"
    dossiers_md_path = root / "vm_program_behavior_dossiers.md"
    dossier_dir = root / "vm_program_behavior_dossiers"

    ok = True
    for name, path in [
        ("behavior_inventory_exists", inventory_path),
        ("first_seen_exists", first_seen_path),
        ("string_roles_exists", string_roles_path),
        ("side_effect_programs_exists", side_effect_programs_path),
        ("dossiers_tsv_exists", dossiers_tsv_path),
        ("dossiers_md_exists", dossiers_md_path),
        ("dossier_dir_exists", dossier_dir),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    inventory = read_tsv(inventory_path)
    first_seen = read_tsv(first_seen_path)
    string_roles = read_tsv(string_roles_path)
    side_effect_programs = read_tsv(side_effect_programs_path)
    dossiers = read_tsv(dossiers_tsv_path)
    md_text = dossiers_md_path.read_text(encoding="utf-8", errors="replace")

    inventory_programs = {row["program"] for row in inventory}
    first_seen_programs = {row["program"] for row in first_seen}
    side_effect_program_set = {row["program"] for row in side_effect_programs}
    dossier_programs = {row["program"] for row in dossiers}
    ok &= check("dossiers_cover_inventory_programs", dossier_programs == inventory_programs, f"dossiers={len(dossier_programs)} inventory={len(inventory_programs)}")
    ok &= check("dossiers_cover_first_seen_programs", dossier_programs == first_seen_programs, f"dossiers={len(dossier_programs)} first_seen={len(first_seen_programs)}")
    ok &= check("dossiers_cover_side_effect_programs", dossier_programs == side_effect_program_set, f"dossiers={len(dossier_programs)} side_effects={len(side_effect_program_set)}")
    ok &= check("dossiers_have_one_row_per_program", len(dossiers) == len(dossier_programs), f"rows={len(dossiers)} programs={len(dossier_programs)}")

    missing_files = [row["dossier"] for row in dossiers if not Path(row.get("dossier", "")).exists()]
    missing_vmops = [row["program"] for row in dossiers if row.get("vmops") and not Path(row["vmops"]).exists()]
    missing_source = [row["program"] for row in dossiers if row.get("source_c") and not Path(row["source_c"]).exists()]
    ok &= check("per_program_dossier_files_exist", not missing_files, f"missing={missing_files[:8]}")
    ok &= check("vmops_paths_exist", not missing_vmops, f"missing={missing_vmops[:8]}")
    ok &= check("source_c_paths_exist", not missing_source, f"missing={missing_source[:8]}")

    empty_summary = [row["program"] for row in dossiers if not row.get("summary")]
    empty_basis = [row["program"] for row in dossiers if not row.get("evidence_basis")]
    empty_unresolved = [row["program"] for row in dossiers if not row.get("unresolved")]
    ok &= check("every_dossier_has_summary", not empty_summary, f"empty={empty_summary[:8]}")
    ok &= check("every_dossier_has_evidence_basis", not empty_basis, f"empty={empty_basis[:8]}")
    ok &= check("every_dossier_has_unresolved_status", not empty_unresolved, f"empty={empty_unresolved[:8]}")

    string_programs = {row["program"] for row in string_roles}
    dossier_string_programs = {row["program"] for row in dossiers if parse_int(row.get("exact_vm_ref_count")) or row.get("role_mix")}
    ok &= check("string_programs_have_role_mix", string_programs.issubset(dossier_string_programs), f"missing={sorted(string_programs - dossier_string_programs)}")
    side_effect_categories = "\n".join(row.get("exact_side_effect_categories", "") for row in dossiers)
    required_category_markers = ["network", "threading_sync", "tls_or_ssl", "crypto_hashing", "disassembly_metadata", "cxx_runtime"]
    missing_categories = [marker for marker in required_category_markers if marker not in side_effect_categories]
    ok &= check("dossiers_include_expected_side_effect_categories", not missing_categories, f"missing={missing_categories}")
    ok &= check("markdown_marks_dossiers_not_final_proof", "do not replace final per-instruction deobfuscation" in md_text and "work still required" in md_text, "caveat present")

    print(f"program_behavior_dossiers_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_final_per_instruction_deobfuscation_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
