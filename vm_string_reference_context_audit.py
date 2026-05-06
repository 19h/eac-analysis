#!/usr/bin/env python3
"""Audit VM string/data reference context coverage."""

from __future__ import annotations

import argparse
import csv
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

    refs_path = root / "vm_program_folded_string_refs.tsv"
    context_path = root / "vm_string_reference_context.tsv"
    md_path = root / "vm_string_reference_context.md"
    ops_path = root / "vm_program_opcode_pseudocode.tsv"

    ok = True
    for name, path in [
        ("string_refs_exists", refs_path),
        ("context_tsv_exists", context_path),
        ("context_markdown_exists", md_path),
        ("opcode_pseudocode_exists", ops_path),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    refs = read_tsv(refs_path)
    contexts = read_tsv(context_path)
    ops = read_tsv(ops_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")
    op_keys = {(row["program"], row["start_vm_ip"], row["end_vm_ip"], row["source_entry"]) for row in ops}

    ok &= check("context_covers_all_string_refs", len(contexts) == len(refs), f"contexts={len(contexts)} refs={len(refs)}")
    missing_context = [row for row in contexts if row.get("context_status") == "missing_program_rows" or not row.get("opcode_name")]
    ok &= check("context_has_opcode_for_each_ref", not missing_context, f"missing={len(missing_context)}")
    exact_or_nearest = [row for row in contexts if row.get("context_status") in {"exact_row", "nearest_row"}]
    ok &= check("context_statuses_are_resolved", len(exact_or_nearest) == len(contexts), f"resolved={len(exact_or_nearest)} contexts={len(contexts)}")

    bad_op_links = [
        f"{row['program']}:{row['site']}->{row.get('row_start')}"
        for row in contexts
        if (row["program"], row.get("row_start", ""), row.get("row_end", ""), row.get("source_entry", "")) not in op_keys
    ]
    ok &= check("context_rows_link_to_opcode_rows", not bad_op_links, f"bad={bad_op_links[:5]}")
    ok &= check("markdown_marks_role_annotation_open", "final semantic roles still require" in md_text, "conservative caveat present")

    print(f"string_context_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_role_annotation_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
