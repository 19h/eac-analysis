#!/usr/bin/env python3
"""Audit dynamic trace-to-VM-program path mapping artifacts."""

from __future__ import annotations

import argparse
import csv
from collections import Counter, defaultdict
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
    coverage_path = root / "vm_trace_coverage_matrix.tsv"
    summary_path = root / "vm_trace_program_path_summary.tsv"
    programs_path = root / "vm_trace_program_path_programs.tsv"
    edges_path = root / "vm_trace_program_path_edges.tsv"
    md_path = root / "vm_trace_program_path.md"

    ok = True
    for name, path in [
        ("folded_manifest_exists", manifest_path),
        ("coverage_matrix_exists", coverage_path),
        ("trace_program_summary_exists", summary_path),
        ("trace_program_rows_exists", programs_path),
        ("trace_program_edges_exists", edges_path),
        ("trace_program_markdown_exists", md_path),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    manifest = read_tsv(manifest_path)
    coverage = read_tsv(coverage_path)
    summary = read_tsv(summary_path)
    program_rows = read_tsv(programs_path)
    edges = read_tsv(edges_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")

    manifest_programs = {row["program"] for row in manifest}
    ok &= check("summary_covers_coverage_rows", len(summary) == len(coverage), f"summary={len(summary)} coverage={len(coverage)}")

    coverage_by_trace = {row["trace_dir"]: row for row in coverage}
    summary_by_trace = {row["trace_dir"]: row for row in summary}
    ok &= check("summary_trace_ids_match_coverage", set(summary_by_trace) == set(coverage_by_trace), f"summary={len(summary_by_trace)} coverage={len(coverage_by_trace)}")

    bad_trace_counts: list[str] = []
    concrete_traces = 0
    for row in summary:
        trace_path = row.get("trace_path", "")
        has_trace = parse_int(row.get("has_instruction_trace"))
        path_exists = bool(trace_path) and Path(trace_path).exists()
        if has_trace != int(path_exists):
            bad_trace_counts.append(f"{row['trace_dir']}:has={has_trace} exists={int(path_exists)}")
            continue
        if not has_trace:
            continue
        concrete_traces += 1
        trace_rows = len(read_tsv(Path(trace_path)))
        mapped = parse_int(row.get("mapped_rows"))
        unmapped = parse_int(row.get("unmapped_rows"))
        if mapped + unmapped != trace_rows:
            bad_trace_counts.append(f"{row['trace_dir']}:mapped+unmapped={mapped + unmapped} trace_rows={trace_rows}")
        if mapped == 0 or not row.get("first_program"):
            bad_trace_counts.append(f"{row['trace_dir']}:no_mapped_programs")
    ok &= check("trace_row_counts_match_inputs", not bad_trace_counts, f"bad={bad_trace_counts[:5]}")
    ok &= check("has_concrete_instruction_traces", concrete_traces > 0, f"concrete_traces={concrete_traces}")

    programs_by_trace: dict[str, Counter[str]] = defaultdict(Counter)
    for row in program_rows:
        programs_by_trace[row["trace_dir"]][row["program"]] += parse_int(row.get("rows"))

    bad_programs = [
        f"{row['trace_dir']}:{row['program']}"
        for row in program_rows
        if row["program"] not in manifest_programs
    ]
    ok &= check("program_rows_reference_manifest_programs", not bad_programs, f"bad={bad_programs[:5]}")

    bad_unique_counts: list[str] = []
    bad_mapped_counts: list[str] = []
    for row in summary:
        trace = row["trace_dir"]
        expected_unique = len(programs_by_trace.get(trace, {}))
        if parse_int(row.get("unique_programs")) != expected_unique:
            bad_unique_counts.append(f"{trace}:summary={row.get('unique_programs')} rows={expected_unique}")
        expected_mapped = sum(programs_by_trace.get(trace, Counter()).values())
        if parse_int(row.get("mapped_rows")) != expected_mapped:
            bad_mapped_counts.append(f"{trace}:summary={row.get('mapped_rows')} rows={expected_mapped}")
    ok &= check("summary_unique_program_counts_match_rows", not bad_unique_counts, f"bad={bad_unique_counts[:5]}")
    ok &= check("summary_mapped_row_counts_match_rows", not bad_mapped_counts, f"bad={bad_mapped_counts[:5]}")

    bad_edges = [
        f"{row['trace_dir']}:{row['source_program']}->{row['target_program']}"
        for row in edges
        if row["source_program"] not in manifest_programs or row["target_program"] not in manifest_programs
    ]
    ok &= check("edges_reference_manifest_programs", not bad_edges, f"bad={bad_edges[:5]}")
    nonpositive_edges = [f"{row['trace_dir']}:{row['source_program']}->{row['target_program']}" for row in edges if parse_int(row.get("count")) <= 0]
    ok &= check("edge_counts_are_positive", not nonpositive_edges, f"bad={nonpositive_edges[:5]}")

    x_concrete = [
        row
        for row in summary
        if row.get("runtime_config", "").startswith("x_mode_") and parse_int(row.get("has_instruction_trace"))
    ]
    x_modes = {row.get("run_mode", "") for row in x_concrete}
    x_first = {row.get("first_program", "") for row in x_concrete}
    ok &= check("x_modes_0_1_2_have_program_paths", {"0", "1", "2"}.issubset(x_modes), f"x_modes={sorted(x_modes)}")
    ok &= check("x_concrete_traces_have_roots", "" not in x_first and bool(x_first), f"first_programs={sorted(x_first)}")
    ok &= check("markdown_marks_dynamic_not_exhaustive", "not proof that every possible configuration or network response has executed" in md_text, "conservative caveat present")

    print(f"trace_program_path_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_dynamic_path_globality_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
