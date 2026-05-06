#!/usr/bin/env python3
"""Audit the whole-VM program control graph artifacts."""

from __future__ import annotations

import argparse
import csv
import re
from collections import Counter, defaultdict
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


def program_for_ip(ranges: list[tuple[int, int, str]], ip: int) -> str:
    for start, end, program in ranges:
        if start <= ip < end:
            return program
    return ""


def counter_text(counter: Counter[str]) -> str:
    return ",".join(f"{key}:{count}" for key, count in sorted(counter.items()))


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    manifest_path = root / "vm_programs_decompiled_folded_manifest.tsv"
    edge_path = root / "vm_program_control_graph_edges.tsv"
    summary_path = root / "vm_program_control_graph_summary.tsv"
    md_path = root / "vm_program_control_graph.md"

    ok = True
    for name, path in [
        ("folded_manifest_exists", manifest_path),
        ("control_graph_edges_exists", edge_path),
        ("control_graph_summary_exists", summary_path),
        ("control_graph_markdown_exists", md_path),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    manifest = read_tsv(manifest_path)
    edges = read_tsv(edge_path)
    summary = read_tsv(summary_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")

    manifest_programs = {row["program"] for row in manifest}
    ranges = sorted((parse_int(row["start"]), parse_int(row["end"]), row["program"]) for row in manifest)

    reduced_files = sorted(root.glob("vm_program_atlas_*_mba_reduced.tsv"))
    reduced_programs: set[str] = set()
    reduced_edge_total = 0
    bad_reduced_names: list[str] = []
    for path in reduced_files:
        match = re.search(r"vm_program_atlas_([0-9]{3})_mba_reduced\.tsv$", path.name)
        if not match:
            bad_reduced_names.append(path.name)
            continue
        reduced_programs.add(match.group(1))
        reduced_edge_total += len(read_tsv(path))

    edge_programs = {row["source_program"] for row in edges}
    summary_programs = {row["program"] for row in summary}

    ok &= check("reduced_files_cover_manifest_programs", reduced_programs == manifest_programs, f"reduced={len(reduced_programs)} manifest={len(manifest_programs)} bad_names={bad_reduced_names[:5]}")
    ok &= check("edge_rows_match_reduced_rows", len(edges) == reduced_edge_total, f"edges={len(edges)} reduced_rows={reduced_edge_total}")
    ok &= check("edges_cover_manifest_programs", edge_programs == manifest_programs, f"edge_programs={len(edge_programs)} manifest={len(manifest_programs)}")
    ok &= check("summary_covers_manifest_programs", summary_programs == manifest_programs, f"summary={len(summary_programs)} manifest={len(manifest_programs)}")
    ok &= check("summary_has_one_row_per_program", len(summary) == len(manifest_programs), f"summary_rows={len(summary)} programs={len(manifest_programs)}")

    relation_counts = Counter(row.get("relation", "") for row in edges)
    valid_relations = {"intra_program", "inter_program", "external_or_exit"}
    invalid_relations = sorted(set(relation_counts) - valid_relations)
    ok &= check("edge_relations_are_known", not invalid_relations, f"relations={counter_text(relation_counts)} invalid={invalid_relations}")
    ok &= check("graph_has_inter_program_evidence", relation_counts["inter_program"] > 0, f"inter_program={relation_counts['inter_program']}")
    ok &= check("graph_keeps_external_edges_visible", relation_counts["external_or_exit"] > 0, f"external_or_exit={relation_counts['external_or_exit']}")

    bad_targets: list[str] = []
    bad_relations: list[str] = []
    for row in edges:
        source = row["source_program"]
        ip = parse_int(row.get("successor_vm_ip"))
        expected_target = program_for_ip(ranges, ip)
        actual_target = row.get("target_program", "")
        relation = row.get("relation", "")
        if actual_target != expected_target:
            bad_targets.append(f"{source}:{row.get('case_state')} ip={row.get('successor_vm_ip')} actual={actual_target} expected={expected_target}")
            continue
        expected_relation = "external_or_exit" if not expected_target else ("intra_program" if expected_target == source else "inter_program")
        if relation != expected_relation:
            bad_relations.append(f"{source}:{row.get('case_state')} target={actual_target} actual={relation} expected={expected_relation}")
    ok &= check("edge_targets_match_manifest_ranges", not bad_targets, f"bad={bad_targets[:5]}")
    ok &= check("edge_relations_match_targets", not bad_relations, f"bad={bad_relations[:5]}")

    aggregate: dict[str, Counter[str]] = defaultdict(Counter)
    for row in edges:
        program = row["source_program"]
        aggregate[program]["outgoing_edges"] += 1
        aggregate[program][row.get("relation", "")] += 1

    bad_summary: list[str] = []
    for row in summary:
        program = row["program"]
        expected = aggregate[program]
        checks = {
            "outgoing_edges": expected["outgoing_edges"],
            "intra_program_edges": expected["intra_program"],
            "inter_program_edges": expected["inter_program"],
            "external_or_exit_edges": expected["external_or_exit"],
        }
        for field, expected_value in checks.items():
            if parse_int(row.get(field)) != expected_value:
                bad_summary.append(f"{program}:{field}=actual {row.get(field)} expected {expected_value}")
    ok &= check("summary_counts_match_edge_rows", not bad_summary, f"bad={bad_summary[:5]}")

    not_ready = [f"{row['source_program']}:{row.get('case_state')}:{row.get('status')}" for row in edges if row.get("status") != "ready_for_mba_reduction"]
    ok &= check("control_graph_uses_ready_mba_rows", not not_ready, f"not_ready={not_ready[:5]}")
    ok &= check("markdown_marks_control_evidence_only", "not final semantic intent" in md_text, "conservative caveat present")

    print(f"program_control_graph_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_external_edges_and_semantic_intent_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
