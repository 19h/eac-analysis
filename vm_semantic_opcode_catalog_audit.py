#!/usr/bin/env python3
"""Audit structural opcode catalog and per-program VM-op listings."""

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
    return int(value, 16 if value.startswith("0x") else 10)


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    manifest_path = root / "vm_programs_decompiled_folded_manifest.tsv"
    ir_path = root / "vm_bytecode_ir_decompile.tsv"
    catalog_path = root / "vm_semantic_opcode_catalog.tsv"
    pseudocode_path = root / "vm_program_opcode_pseudocode.tsv"
    pseudo_manifest_path = root / "vm_program_opcode_pseudocode_manifest.tsv"
    md_path = root / "vm_semantic_opcode_catalog.md"
    output_dir = root / "vm_programs_opcode_pseudocode"

    ok = True
    for name, path in [
        ("folded_manifest_exists", manifest_path),
        ("ir_exists", ir_path),
        ("opcode_catalog_exists", catalog_path),
        ("program_opcode_tsv_exists", pseudocode_path),
        ("program_opcode_manifest_exists", pseudo_manifest_path),
        ("opcode_markdown_exists", md_path),
        ("program_opcode_dir_exists", output_dir),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    manifest = read_tsv(manifest_path)
    ir_rows = read_tsv(ir_path)
    catalog = read_tsv(catalog_path)
    pseudocode = read_tsv(pseudocode_path)
    pseudo_manifest = read_tsv(pseudo_manifest_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")

    ir_entries = {row["source_entry"] for row in ir_rows if row.get("source_entry")}
    catalog_entries = {row["source_entry"] for row in catalog}
    ok &= check("catalog_covers_ir_source_entries", catalog_entries == ir_entries, f"catalog={len(catalog_entries)} ir={len(ir_entries)}")

    manifest_programs = {row["program"] for row in manifest}
    pseudo_programs = {row["program"] for row in pseudo_manifest}
    ok &= check("program_opcode_manifest_covers_programs", pseudo_programs == manifest_programs, f"pseudo={len(pseudo_programs)} manifest={len(manifest_programs)}")
    ok &= check("program_opcode_rows_cover_ir_rows", len(pseudocode) == len(ir_rows), f"opcode_rows={len(pseudocode)} ir_rows={len(ir_rows)}")

    rows_by_program: dict[str, int] = {}
    for row in pseudocode:
        rows_by_program[row["program"]] = rows_by_program.get(row["program"], 0) + 1
    bad_program_rows = [
        f"{row['program']}:manifest={row.get('rows')} pseudocode={rows_by_program.get(row['program'], 0)}"
        for row in pseudo_manifest
        if parse_int(row.get("rows")) != rows_by_program.get(row["program"], 0)
    ]
    ok &= check("program_opcode_manifest_row_counts_match", not bad_program_rows, f"bad={bad_program_rows[:5]}")

    missing_files = [row["path"] for row in pseudo_manifest if not Path(row["path"]).exists()]
    ok &= check("program_opcode_files_exist", not missing_files, f"missing={missing_files[:5]}")

    bad_files = []
    for row in pseudo_manifest:
        path = Path(row["path"])
        if not path.exists():
            continue
        text = path.read_text(encoding="utf-8", errors="replace")
        op_lines = [line for line in text.splitlines() if line.strip().startswith("0x")]
        if len(op_lines) != parse_int(row.get("rows")):
            bad_files.append(f"{row['program']}:file_lines={len(op_lines)} rows={row.get('rows')}")
    ok &= check("program_opcode_file_rows_match_manifest", not bad_files, f"bad={bad_files[:5]}")

    slot_kinds = {row.get("dispatch_slot_kind", "") for row in catalog}
    state_kinds = {row.get("state_kind", "") for row in catalog}
    needs_simplification = [row for row in catalog if "needs_algebraic_simplification" in row.get("readability_status", "")]
    ok &= check("catalog_has_dispatch_slot_classes", len(slot_kinds) >= 3, f"slot_kinds={sorted(slot_kinds)}")
    ok &= check("catalog_has_state_classes", len(state_kinds) >= 3, f"state_kinds={sorted(state_kinds)}")
    ok &= check("catalog_marks_simplification_gap", bool(needs_simplification), f"needs_simplification={len(needs_simplification)}")
    ok &= check("markdown_marks_structural_not_complete", "not a completed source-level deobfuscation" in md_text, "conservative caveat present")

    print(f"opcode_catalog_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_algebraic_and_intent_gaps_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
