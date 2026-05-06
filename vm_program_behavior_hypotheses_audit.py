#!/usr/bin/env python3
"""Audit conservative program behavior hypotheses."""

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

    inventory_path = root / "vm_behavior_inventory.tsv"
    context_path = root / "vm_string_reference_context.tsv"
    hypotheses_path = root / "vm_program_behavior_hypotheses.tsv"
    md_path = root / "vm_program_behavior_hypotheses.md"
    for name, path in [
        ("behavior_inventory_exists", inventory_path),
        ("string_context_exists", context_path),
        ("hypotheses_tsv_exists", hypotheses_path),
        ("hypotheses_markdown_exists", md_path),
    ]:
        if not path.exists():
            print(f"{name}=missing\t{path}")
            return 1
        print(f"{name}=ok\t{path}")

    inventory = read_tsv(inventory_path)
    contexts = read_tsv(context_path)
    hypotheses = read_tsv(hypotheses_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")

    ok = True
    inv_programs = {row["program"] for row in inventory}
    hyp_programs = {row["program"] for row in hypotheses}
    ok &= check("hypotheses_cover_all_programs", hyp_programs == inv_programs, f"hyp={len(hyp_programs)} inv={len(inv_programs)}")
    ok &= check("hypotheses_have_one_row_per_program", len(hypotheses) == len(inv_programs), f"rows={len(hypotheses)} programs={len(inv_programs)}")

    context_counts: dict[str, int] = {}
    for row in contexts:
        context_counts[row["program"]] = context_counts.get(row["program"], 0) + 1
    bad_counts = [
        f"{row['program']}:hyp={row.get('string_refs')} ctx={context_counts.get(row['program'], 0)}"
        for row in hypotheses
        if parse_int(row.get("string_refs")) != context_counts.get(row["program"], 0)
    ]
    ok &= check("hypothesis_string_counts_match_context", not bad_counts, f"bad={bad_counts[:5]}")

    empty_tags = [row["program"] for row in hypotheses if not row.get("behavior_tags")]
    ok &= check("every_program_has_triage_tag", not empty_tags, f"empty={empty_tags[:5]}")
    tagged_string_programs = [
        row["program"]
        for row in hypotheses
        if parse_int(row.get("string_refs")) and row.get("confidence") == "none"
    ]
    ok &= check("string_programs_have_nonempty_confidence", not tagged_string_programs, f"bad={tagged_string_programs[:5]}")
    ok &= check("markdown_marks_hypotheses_not_claims", "not final behavior claims" in md_text, "conservative caveat present")

    print(f"program_behavior_hypotheses_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_hypotheses_need_confirmation")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
