#!/usr/bin/env python3
"""Build a whole-VM control graph from solved program MBA successors."""

from __future__ import annotations

import argparse
import csv
import re
from collections import Counter, defaultdict
from pathlib import Path


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def write_tsv(path: Path, rows: list[dict[str, object]], fields: list[str]) -> None:
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        for row in rows:
            writer.writerow({field: row.get(field, "") for field in fields})


def parse_int(text: str | int | None) -> int:
    if isinstance(text, int):
        return text
    value = (text or "").strip()
    if not value:
        return 0
    return int(value, 16 if value.startswith("0x") else 10)


def program_for_ip(ranges: list[tuple[int, int, str]], ip: int) -> str:
    for start, end, program in ranges:
        if start <= ip < end:
            return program
    return ""


def counter_text(counter: Counter[str], limit: int = 12) -> str:
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(limit) if key)


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 120 else cell[:117] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root
    manifest_path = root / "vm_programs_decompiled_folded_manifest.tsv"
    if not manifest_path.exists():
        raise SystemExit(f"missing input: {manifest_path}")

    manifest = read_tsv(manifest_path)
    ranges = sorted((parse_int(row["start"]), parse_int(row["end"]), row["program"]) for row in manifest)
    program_set = {row["program"] for row in manifest}

    edges: list[dict[str, object]] = []
    for reduced_path in sorted(root.glob("vm_program_atlas_*_mba_reduced.tsv")):
        match = re.search(r"vm_program_atlas_([0-9]{3})_mba_reduced\.tsv$", reduced_path.name)
        if not match:
            continue
        program = match.group(1)
        if program not in program_set:
            continue
        for row in read_tsv(reduced_path):
            successor_ip = parse_int(row.get("successor_vm_ip"))
            target_program = program_for_ip(ranges, successor_ip)
            if not target_program:
                relation = "external_or_exit"
            elif target_program == program:
                relation = "intra_program"
            else:
                relation = "inter_program"
            edges.append(
                {
                    "source_program": program,
                    "case_state": row.get("case_state", ""),
                    "block": row.get("block", ""),
                    "terminal_kind": row.get("terminal_kind", ""),
                    "successor_vm_ip": row.get("successor_vm_ip", ""),
                    "target_program": target_program,
                    "relation": relation,
                    "successor_entry": row.get("successor_entry", ""),
                    "edge_kind": row.get("edge_kind", ""),
                    "edge_delta": row.get("edge_delta", ""),
                    "edge_semantic_ir": row.get("edge_semantic_ir", ""),
                    "status": row.get("status", ""),
                }
            )

    edge_fields = [
        "source_program",
        "case_state",
        "block",
        "terminal_kind",
        "successor_vm_ip",
        "target_program",
        "relation",
        "successor_entry",
        "edge_kind",
        "edge_delta",
        "edge_semantic_ir",
        "status",
    ]
    edge_path = root / "vm_program_control_graph_edges.tsv"
    write_tsv(edge_path, edges, edge_fields)

    incoming: dict[str, Counter[str]] = defaultdict(Counter)
    outgoing: dict[str, Counter[str]] = defaultdict(Counter)
    relation_by_program: dict[str, Counter[str]] = defaultdict(Counter)
    target_mix_by_program: dict[str, Counter[str]] = defaultdict(Counter)
    for edge in edges:
        src = str(edge["source_program"])
        dst = str(edge["target_program"])
        relation = str(edge["relation"])
        relation_by_program[src][relation] += 1
        if dst:
            outgoing[src][dst] += 1
            incoming[dst][src] += 1
            target_mix_by_program[src][dst] += 1
        else:
            target_mix_by_program[src]["external_or_exit"] += 1

    summary_rows: list[dict[str, object]] = []
    for row in manifest:
        program = row["program"]
        rels = relation_by_program[program]
        summary_rows.append(
            {
                "program": program,
                "range": f"{row['start']}..{row['end']}",
                "blocks": row["blocks"],
                "rows": row["rows"],
                "incoming_edges": sum(incoming[program].values()),
                "incoming_programs": counter_text(incoming[program]),
                "outgoing_edges": sum(outgoing[program].values()) + target_mix_by_program[program].get("external_or_exit", 0),
                "outgoing_targets": counter_text(target_mix_by_program[program]),
                "intra_program_edges": rels.get("intra_program", 0),
                "inter_program_edges": rels.get("inter_program", 0),
                "external_or_exit_edges": rels.get("external_or_exit", 0),
            }
        )

    summary_path = root / "vm_program_control_graph_summary.tsv"
    summary_fields = [
        "program",
        "range",
        "blocks",
        "rows",
        "incoming_edges",
        "incoming_programs",
        "outgoing_edges",
        "outgoing_targets",
        "intra_program_edges",
        "inter_program_edges",
        "external_or_exit_edges",
    ]
    write_tsv(summary_path, summary_rows, summary_fields)

    relation_mix = Counter(str(edge["relation"]) for edge in edges)
    inter_edges = [edge for edge in edges if edge["relation"] == "inter_program"]
    external_edges = [edge for edge in edges if edge["relation"] == "external_or_exit"]
    md_path = root / "vm_program_control_graph.md"
    md_lines = [
        "# VM Program Control Graph",
        "",
        "This graph is built from solved MBA successor edges. It shows how recovered VM bytecode programs flow into themselves, into other VM programs, or out to a currently external/exit target. It is control-flow evidence, not final semantic intent.",
        "",
        "## Summary",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["programs", len(program_set)],
                ["solved successor edges", len(edges)],
                ["relation mix", counter_text(relation_mix)],
                ["inter-program edges", len(inter_edges)],
                ["external/exit edges", len(external_edges)],
            ],
        ),
        "",
        "## Program Summary",
        "",
        markdown_table(
            ["program", "incoming", "outgoing targets", "intra", "inter", "external/exit"],
            [
                [
                    row["program"],
                    row["incoming_programs"] or "-",
                    row["outgoing_targets"] or "-",
                    row["intra_program_edges"],
                    row["inter_program_edges"],
                    row["external_or_exit_edges"],
                ]
                for row in summary_rows
            ],
        ),
        "",
        "## Inter-Program Edges",
        "",
        markdown_table(
            ["source", "case", "target_program", "target_ip", "edge", "semantic"],
            [
                [
                    edge["source_program"],
                    edge["case_state"],
                    edge["target_program"],
                    edge["successor_vm_ip"],
                    edge["edge_kind"],
                    edge["edge_semantic_ir"],
                ]
                for edge in inter_edges[:200]
            ],
        ),
        "",
        "## Artifacts",
        "",
        f"- Edge list: `{edge_path}`",
        f"- Program summary: `{summary_path}`",
        "",
    ]
    md_path.write_text("\n".join(md_lines), encoding="utf-8")

    print(f"wrote {edge_path}")
    print(f"wrote {summary_path}")
    print(f"wrote {md_path}")
    print(f"programs={len(program_set)} edges={len(edges)} relation_mix={counter_text(relation_mix)}")
    print("semantic_status=control_graph_ready;external_edge_resolution_open")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
