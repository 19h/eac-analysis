#!/usr/bin/env python3
"""Map recovered VM string/data references to nearby VM-op rows."""

from __future__ import annotations

import argparse
import csv
from collections import defaultdict
from pathlib import Path


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def write_tsv(path: Path, rows: list[dict[str, object]], fields: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        for row in rows:
            writer.writerow({field: row.get(field, "") for field in fields})


def parse_int(text: str | None) -> int:
    value = (text or "").strip()
    if not value:
        return 0
    return int(value, 16 if value.startswith("0x") else 10)


def trim(text: str, limit: int = 180) -> str:
    value = (text or "").replace("\n", " ")
    return value if len(value) <= limit else value[: limit - 18] + f"...#{len(value):x}"


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 120 else cell[:117] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def find_context(rows: list[dict[str, str]], site: int) -> tuple[int, str, int]:
    if not rows:
        return -1, "missing_program_rows", 0
    best_idx = -1
    best_distance = 1 << 62
    for idx, row in enumerate(rows):
        start = parse_int(row.get("start_vm_ip"))
        end = parse_int(row.get("end_vm_ip"))
        if start <= site < end:
            return idx, "exact_row", 0
        distance = min(abs(site - start), abs(site - end))
        if distance < best_distance:
            best_idx = idx
            best_distance = distance
    return best_idx, "nearest_row", best_distance


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--window", type=int, default=3)
    args = parser.parse_args()
    root = args.root

    refs_path = root / "vm_program_folded_string_refs.tsv"
    ops_path = root / "vm_program_opcode_pseudocode.tsv"
    catalog_path = root / "vm_semantic_opcode_catalog.tsv"
    for path in [refs_path, ops_path, catalog_path]:
        if not path.exists():
            raise SystemExit(f"missing input: {path}")

    refs = read_tsv(refs_path)
    ops = read_tsv(ops_path)
    catalog = {row["source_entry"]: row for row in read_tsv(catalog_path)}
    ops_by_program: dict[str, list[dict[str, str]]] = defaultdict(list)
    for row in ops:
        ops_by_program[row["program"]].append(row)

    context_rows: list[dict[str, object]] = []
    for ref_index, ref in enumerate(refs):
        program = ref["program"]
        site = parse_int(ref.get("site"))
        rows = ops_by_program.get(program, [])
        idx, status, distance = find_context(rows, site)
        op = rows[idx] if idx >= 0 else {}
        cat = catalog.get(op.get("source_entry", ""), {})
        before = rows[max(0, idx - args.window):idx] if idx >= 0 else []
        after = rows[idx + 1:idx + 1 + args.window] if idx >= 0 else []
        context_rows.append(
            {
                "ref_index": ref_index,
                "program": program,
                "site": ref.get("site", ""),
                "value": ref.get("value", ""),
                "string_vaddr": ref.get("string_vaddr", ""),
                "section_name": ref.get("section_name", ""),
                "match_class": ref.get("match_class", ""),
                "text": ref.get("text", ""),
                "context_status": status,
                "distance_bytes": distance,
                "row_start": op.get("start_vm_ip", ""),
                "row_end": op.get("end_vm_ip", ""),
                "source_block": op.get("source_block", ""),
                "source_entry": op.get("source_entry", ""),
                "opcode_name": op.get("opcode_name", ""),
                "row_kind": op.get("row_kind", ""),
                "bytes": op.get("bytes", ""),
                "state_kind": op.get("state_kind", ""),
                "dispatch_slot_kind": op.get("dispatch_slot_kind", ""),
                "target": op.get("target", ""),
                "delta": op.get("delta", ""),
                "semantic_ir": trim(op.get("semantic_ir", "")),
                "opcode_state_preview": trim(cat.get("state_effect_preview", "")),
                "opcode_dispatch_preview": trim(cat.get("dispatch_slot_preview", "")),
                "prev_ops": " || ".join(f"{row['start_vm_ip']}:{row['opcode_name']}->{row['target']}" for row in before),
                "next_ops": " || ".join(f"{row['start_vm_ip']}:{row['opcode_name']}->{row['target']}" for row in after),
            }
        )

    fields = [
        "ref_index",
        "program",
        "site",
        "value",
        "string_vaddr",
        "section_name",
        "match_class",
        "text",
        "context_status",
        "distance_bytes",
        "row_start",
        "row_end",
        "source_block",
        "source_entry",
        "opcode_name",
        "row_kind",
        "bytes",
        "state_kind",
        "dispatch_slot_kind",
        "target",
        "delta",
        "semantic_ir",
        "opcode_state_preview",
        "opcode_dispatch_preview",
        "prev_ops",
        "next_ops",
    ]
    output_path = root / "vm_string_reference_context.tsv"
    write_tsv(output_path, context_rows, fields)

    md_path = root / "vm_string_reference_context.md"
    exact = sum(1 for row in context_rows if row["context_status"] == "exact_row")
    nearest = sum(1 for row in context_rows if row["context_status"] == "nearest_row")
    by_program: dict[str, int] = defaultdict(int)
    for row in context_rows:
        by_program[str(row["program"])] += 1
    md_lines = [
        "# VM String/Data Reference Context",
        "",
        "This maps every recovered string/data reference embedded in folded VM programs to the exact VM-op row when possible, otherwise the nearest VM-op row in the same program. It is a role-discovery aid: it shows where each string enters the VM bytecode stream, but final semantic roles still require annotating the surrounding operation sequence.",
        "",
        "## Summary",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["references", len(context_rows)],
                ["exact row matches", exact],
                ["nearest row matches", nearest],
                ["programs with references", len(by_program)],
                ["refs by program", ",".join(f"{program}:{count}" for program, count in sorted(by_program.items()))],
            ],
        ),
        "",
        "## References",
        "",
        markdown_table(
            ["program", "site", "text", "status", "row", "opcode", "target", "nearby"],
            [
                [
                    row["program"],
                    row["site"],
                    row["text"],
                    row["context_status"],
                    f"{row['row_start']}..{row['row_end']}",
                    row["opcode_name"],
                    row["target"],
                    row["prev_ops"] or row["next_ops"],
                ]
                for row in context_rows
            ],
        ),
        "",
        "## Artifact",
        "",
        f"- Full context TSV: `{output_path}`",
        "",
    ]
    md_path.write_text("\n".join(md_lines), encoding="utf-8")

    print(f"wrote {output_path}")
    print(f"wrote {md_path}")
    print(f"refs={len(context_rows)} exact={exact} nearest={nearest} programs={len(by_program)}")
    print("semantic_status=string_reference_context_ready;role_annotation_open")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
