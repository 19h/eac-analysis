#!/usr/bin/env python3
"""Audit VM string role annotations."""

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


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    context_path = root / "vm_string_reference_context.tsv"
    role_path = root / "vm_string_role_annotations.tsv"
    program_path = root / "vm_string_role_programs.tsv"
    md_path = root / "vm_string_role_annotations.md"

    ok = True
    for name, path in [
        ("string_context_exists", context_path),
        ("string_role_annotations_exists", role_path),
        ("string_role_programs_exists", program_path),
        ("string_role_markdown_exists", md_path),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    contexts = read_tsv(context_path)
    roles = read_tsv(role_path)
    programs = read_tsv(program_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")

    ok &= check("role_rows_cover_string_context", len(roles) == len(contexts), f"roles={len(roles)} contexts={len(contexts)}")
    context_keys = {(row["ref_index"], row["program"], row["site"], row["text"]) for row in contexts}
    role_keys = {(row["ref_index"], row["program"], row["site"], row["text"]) for row in roles}
    ok &= check("role_rows_match_context_keys", role_keys == context_keys, f"roles={len(role_keys)} contexts={len(context_keys)}")

    missing_roles = [f"{row['program']}:{row['site']}" for row in roles if not row.get("role")]
    ok &= check("every_string_ref_has_role", not missing_roles, f"missing={missing_roles[:5]}")

    context_counts: dict[str, int] = {}
    for row in contexts:
        context_counts[row["program"]] = context_counts.get(row["program"], 0) + 1
    program_counts = {row["program"]: parse_int(row.get("string_refs")) for row in programs}
    ok &= check("program_rollup_covers_string_programs", set(program_counts) == set(context_counts), f"programs={len(program_counts)} context_programs={len(context_counts)}")
    bad_counts = [
        f"{program}:rollup={program_counts.get(program)} context={count}"
        for program, count in context_counts.items()
        if program_counts.get(program) != count
    ]
    ok &= check("program_rollup_counts_match_context", not bad_counts, f"bad={bad_counts[:5]}")

    role_mix = Counter(row.get("role", "") for row in roles)
    required_roles = {
        "network_import_symbol",
        "threading_import_symbol",
        "tls_protocol_message",
        "tls_library_source_path",
        "crypto_import_symbol",
        "disassembly_metadata_symbol",
        "cxx_runtime_type_or_exception_text",
    }
    ok &= check("expected_behavioral_roles_present", required_roles.issubset(set(role_mix)), f"missing={sorted(required_roles - set(role_mix))}")
    high_or_medium = [row for row in roles if row.get("role_confidence") in {"high", "medium"}]
    ok &= check("most_roles_have_medium_or_high_confidence", len(high_or_medium) >= len(roles) * 3 // 4, f"medium_high={len(high_or_medium)} refs={len(roles)}")
    ok &= check("markdown_marks_roles_not_complete_intent", "not complete program intent by themselves" in md_text, "conservative caveat present")

    print(f"string_role_annotations_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_program_intent_and_dataflow_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
