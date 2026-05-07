#!/usr/bin/env python3
"""Audit the readable VM ISA layer."""

from __future__ import annotations

import argparse
import csv
from collections import Counter
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


def split_refs(text: str) -> set[str]:
    return {part.strip() for part in str(text).split("||") if part.strip()}


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    catalog_path = root / "vm_semantic_opcode_catalog.tsv"
    program_ops_path = root / "vm_program_opcode_pseudocode.tsv"
    old_manifest_path = root / "vm_program_opcode_pseudocode_manifest.tsv"
    vm_refs_path = root / "vm_native_side_effect_vm_refs.tsv"
    isa_path = root / "vm_readable_isa.tsv"
    program_readable_path = root / "vm_program_readable_ops.tsv"
    manifest_path = root / "vm_program_readable_ops_manifest.tsv"
    md_path = root / "vm_readable_isa.md"
    readable_dir = root / "vm_programs_readable_ops"

    ok = True
    for name, path in [
        ("opcode_catalog_exists", catalog_path),
        ("program_ops_exists", program_ops_path),
        ("program_ops_manifest_exists", old_manifest_path),
        ("vm_side_effect_refs_exists", vm_refs_path),
        ("readable_isa_exists", isa_path),
        ("program_readable_ops_exists", program_readable_path),
        ("program_readable_manifest_exists", manifest_path),
        ("readable_isa_markdown_exists", md_path),
        ("readable_program_dir_exists", readable_dir),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    catalog = read_tsv(catalog_path)
    program_ops = read_tsv(program_ops_path)
    old_manifest = read_tsv(old_manifest_path)
    vm_refs = read_tsv(vm_refs_path)
    isa = read_tsv(isa_path)
    program_readable = read_tsv(program_readable_path)
    manifest = read_tsv(manifest_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")

    ok &= check("readable_isa_covers_opcode_catalog", len(isa) == len(catalog), f"isa={len(isa)} catalog={len(catalog)}")
    ok &= check("program_readable_rows_cover_program_ops", len(program_readable) == len(program_ops), f"readable={len(program_readable)} ops={len(program_ops)}")
    ok &= check("readable_manifest_covers_program_manifest", len(manifest) == len(old_manifest), f"readable={len(manifest)} old={len(old_manifest)}")

    catalog_entries = {row["source_entry"] for row in catalog}
    isa_entries = {row["source_entry"] for row in isa}
    ok &= check("readable_isa_entry_keys_match_catalog", isa_entries == catalog_entries, f"isa={len(isa_entries)} catalog={len(catalog_entries)}")

    empty_fields = [
        f"{row.get('source_entry')}:{field}"
        for row in isa
        for field in ["operation_family", "readability_grade", "ip_semantics", "operand_model", "state_semantics", "dispatch_semantics", "semantic_c", "unresolved"]
        if not row.get(field)
    ]
    ok &= check("every_isa_entry_has_readable_fields", not empty_fields, f"empty={empty_fields[:8]}")

    manifest_counts = {row["program"]: parse_int(row.get("rows")) for row in manifest}
    readable_counts: Counter[str] = Counter(row["program"] for row in program_readable)
    bad_counts = [f"{program}:manifest={count} rows={readable_counts.get(program, 0)}" for program, count in manifest_counts.items() if readable_counts.get(program, 0) != count]
    ok &= check("program_manifest_counts_match_rows", not bad_counts, f"bad={bad_counts[:8]}")

    missing_files = [row["path"] for row in manifest if not Path(row.get("path", "")).exists()]
    ok &= check("program_readable_files_exist", not missing_files, f"missing={missing_files[:8]}")

    input_ref_indexes = {row["ref_index"] for row in vm_refs if row.get("ref_index")}
    output_ref_indexes: set[str] = set()
    for row in program_readable:
        output_ref_indexes.update(split_refs(row.get("string_ref_indexes", "")))
    ok &= check("string_refs_propagated_to_readable_rows", input_ref_indexes == output_ref_indexes, f"input={len(input_ref_indexes)} output={len(output_ref_indexes)} missing={sorted(input_ref_indexes - output_ref_indexes)[:8]}")

    family_mix = Counter(row.get("operation_family", "") for row in isa)
    required_families = {"operand_table_dispatch", "fixed_or_affine_dispatch", "obfuscated_table_dispatch", "unresolved_dispatch", "long_or_backedge_control"}
    ok &= check("expected_operation_families_present", required_families.issubset(set(family_mix)), f"missing={sorted(required_families - set(family_mix))}")

    source_needs_algebra = [row for row in catalog if "needs_algebraic_simplification" in row.get("readability_status", "")]
    readable_algebra = [row for row in isa if "algebraic_state_or_slot_formula" in row.get("unresolved", "")]
    ok &= check("algebraic_gaps_preserved", len(readable_algebra) >= len(source_needs_algebra), f"readable={len(readable_algebra)} source={len(source_needs_algebra)}")
    ok &= check("markdown_preserves_not_fully_deobfuscated_caveat", "not fully deobfuscated arithmetic" in md_text and "open work" in md_text, "caveat present")

    print(f"readable_isa_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_mba_algebra_and_program_intent_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
