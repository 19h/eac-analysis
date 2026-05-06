#!/usr/bin/env python3
"""Audit the primary x() VM-program timeline."""

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

    manifest_path = root / "vm_programs_decompiled_folded_manifest.tsv"
    path_summary_path = root / "vm_trace_program_path_summary.tsv"
    string_context_path = root / "vm_string_reference_context.tsv"
    timeline_path = root / "vm_x_program_timeline.tsv"
    first_seen_path = root / "vm_x_program_first_seen.tsv"
    md_path = root / "vm_x_program_timeline.md"

    ok = True
    for name, path in [
        ("folded_manifest_exists", manifest_path),
        ("trace_program_path_summary_exists", path_summary_path),
        ("string_context_exists", string_context_path),
        ("x_program_timeline_exists", timeline_path),
        ("x_program_first_seen_exists", first_seen_path),
        ("x_program_timeline_markdown_exists", md_path),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    manifest = read_tsv(manifest_path)
    path_summary = read_tsv(path_summary_path)
    contexts = read_tsv(string_context_path)
    timeline = read_tsv(timeline_path)
    first_seen = read_tsv(first_seen_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")

    manifest_programs = {row["program"] for row in manifest}
    timeline_programs = {row["program"] for row in timeline}
    first_seen_programs = {row["program"] for row in first_seen}

    primary = next((row for row in path_summary if row.get("trace_dir") == str(root)), None)
    if primary is None:
        primary = next((row for row in path_summary if row.get("trace_dir", "").endswith(root.name)), None)
    ok &= check("primary_trace_path_summary_present", primary is not None, str(root))
    primary_mapped = parse_int(primary.get("mapped_rows")) if primary else 0

    ok &= check("timeline_has_segments", len(timeline) > 0, f"segments={len(timeline)}")
    ok &= check("timeline_starts_at_observed_x_vm_root", bool(timeline) and timeline[0]["program"] == "033", f"first={timeline[0]['program'] if timeline else ''}")
    ok &= check("first_seen_covers_manifest_programs", first_seen_programs == manifest_programs, f"first_seen={len(first_seen_programs)} manifest={len(manifest_programs)}")
    ok &= check("timeline_covers_manifest_programs", timeline_programs == manifest_programs, f"timeline={len(timeline_programs)} manifest={len(manifest_programs)}")

    row_total = sum(parse_int(row.get("row_count")) for row in timeline)
    ok &= check("timeline_row_total_matches_primary_mapped_rows", row_total == primary_mapped, f"timeline_rows={row_total} primary_mapped={primary_mapped}")
    ok &= check("first_seen_has_one_row_per_program", len(first_seen) == len(manifest_programs), f"rows={len(first_seen)} programs={len(manifest_programs)}")

    context_counts: dict[str, int] = {}
    for row in contexts:
        context_counts[row["program"]] = context_counts.get(row["program"], 0) + 1
    bad_string_counts = [
        f"{row['program']}:timeline={row.get('string_refs')} context={context_counts.get(row['program'], 0)}"
        for row in first_seen
        if parse_int(row.get("string_refs")) != context_counts.get(row["program"], 0)
    ]
    ok &= check("first_seen_string_counts_match_context", not bad_string_counts, f"bad={bad_string_counts[:5]}")
    missing_string_text = [
        row["program"]
        for row in first_seen
        if parse_int(row.get("string_refs")) > 0 and not row.get("top_strings")
    ]
    ok &= check("string_programs_have_timeline_strings", not missing_string_text, f"missing={missing_string_text[:5]}")
    ok &= check("markdown_marks_dynamic_not_final", "not a final proof of every unexecuted branch" in md_text, "conservative caveat present")

    print(f"x_program_timeline_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_unexecuted_branches_and_final_intent_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
