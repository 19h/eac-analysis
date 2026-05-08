#!/usr/bin/env python3
"""Audit exact observed dispatch tables for slot-unknown VM opcodes."""

from __future__ import annotations

import argparse
import csv
import re
import shutil
import subprocess
from collections import Counter
from pathlib import Path


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", errors="replace") as handle:
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


def enum_count(text: str, name: str) -> int | None:
    match = re.search(rf"\b{name}\s*=\s*([0-9]+)\b", text)
    return int(match.group(1)) if match else None


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    paths = {
        "readable_isa": root / "vm_readable_isa.tsv",
        "readable_ops": root / "vm_program_readable_ops.tsv",
        "rows": root / "vm_slot_unknown_dispatch_rows.tsv",
        "summary": root / "vm_slot_unknown_dispatch_summary.tsv",
        "c": root / "vm_slot_unknown_dispatch_tables.c",
        "md": root / "vm_slot_unknown_dispatch_tables.md",
    }
    ok = True
    for name, path in paths.items():
        ok &= check(f"{name}_exists", path.exists(), str(path))
    if not ok:
        return 1

    isa = {row["source_entry"]: row for row in read_tsv(paths["readable_isa"])}
    ops = read_tsv(paths["readable_ops"])
    rows = read_tsv(paths["rows"])
    summary = read_tsv(paths["summary"])
    c_text = paths["c"].read_text(encoding="utf-8", errors="replace")
    md_text = paths["md"].read_text(encoding="utf-8", errors="replace")

    slot_unknown_entries = {
        entry
        for entry, row in isa.items()
        if row.get("dispatch_slot_kind") == "slot_unknown"
    }
    source_rows = [row for row in ops if row.get("source_entry") in slot_unknown_entries]
    summary_entries = {row["source_entry"] for row in summary}

    ok &= check("slot_unknown_entry_count", len(slot_unknown_entries) == 23, f"entries={len(slot_unknown_entries)}")
    ok &= check("summary_covers_slot_unknown_entries", summary_entries == slot_unknown_entries, f"summary={len(summary_entries)} source={len(slot_unknown_entries)}")
    ok &= check("rows_cover_slot_unknown_ops", len(rows) == len(source_rows), f"rows={len(rows)} source={len(source_rows)}")

    row_keys = {(row["program"], row["start_vm_ip"], row["source_entry"], row["bytes"], row["target_entry"]) for row in rows}
    source_keys = {(row["program"], row["start_vm_ip"], row["source_entry"], row["bytes"], row["target_entry"]) for row in source_rows}
    ok &= check("row_keys_match_source_ops", row_keys == source_keys, f"rows={len(row_keys)} source={len(source_keys)} missing={list(source_keys - row_keys)[:4]}")

    missing_targets = [row for row in rows if not row.get("target_entry") or not row.get("target")]
    ok &= check("all_slot_unknown_rows_have_targets", not missing_targets, f"missing={len(missing_targets)}")

    bad_summary: list[str] = []
    by_entry: Counter[str] = Counter(row["source_entry"] for row in rows)
    for row in summary:
        entry = row["source_entry"]
        if parse_int(row.get("rows")) != by_entry.get(entry, 0):
            bad_summary.append(f"{entry}:rows={row.get('rows')} expected={by_entry.get(entry, 0)}")
        if row.get("resolution_status") != "exact_observed_table_no_formula":
            bad_summary.append(f"{entry}:status={row.get('resolution_status')}")
    ok &= check("summary_counts_and_status_match_rows", not bad_summary, f"bad={bad_summary[:8]}")

    ok &= check("c_row_count_matches_rows", enum_count(c_text, "VM_SLOT_UNKNOWN_DISPATCH_ROW_COUNT") == len(rows), f"c={enum_count(c_text, 'VM_SLOT_UNKNOWN_DISPATCH_ROW_COUNT')} rows={len(rows)}")
    ok &= check("c_summary_count_matches_summary", enum_count(c_text, "VM_SLOT_UNKNOWN_DISPATCH_SUMMARY_COUNT") == len(summary), f"c={enum_count(c_text, 'VM_SLOT_UNKNOWN_DISPATCH_SUMMARY_COUNT')} summary={len(summary)}")
    c_ok, c_detail = syntax_check(paths["c"])
    ok &= check("slot_unknown_dispatch_c_compiles_c11_syntax", c_ok, c_detail[:600])
    ok &= check("markdown_states_exact_observed_not_formula", "not a symbolic dispatch formula" in md_text and "does not prove unobserved byte patterns" in md_text, "caveat present")

    print(f"slot_unknown_dispatch_tables_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_unobserved_slot_unknown_patterns_native_binding_and_program_intent_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
