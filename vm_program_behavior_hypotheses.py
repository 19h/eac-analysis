#!/usr/bin/env python3
"""Derive conservative per-program behavior hypotheses from recovered evidence."""

from __future__ import annotations

import argparse
import csv
from collections import Counter, defaultdict
from pathlib import Path


TAG_RULES = [
    ("tls_or_ssl", ["ssl", "tls", "changecipherspec", "client hello", "server name extension", "mbedtls"]),
    ("networking", ["socket", "connect", "recv", "send", "getaddrinfo", "api.epicgames", "datarouter"]),
    ("threading_sync", ["pthread", "mutex", "cond", "sem_"]),
    ("host_environment", ["uname", "lshw", "glibc", "/home/", "display"]),
    ("crypto_hashing", ["blake3", "hasher", "hash"]),
    ("cxx_runtime", ["basic_string", "_z", "__freelocale", "_itm"]),
    ("disassembly_metadata", ["zydis"]),
    ("process_or_shell", ["pclose", "popen", "system("]),
]


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


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 120 else cell[:117] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def tag_strings(texts: list[str]) -> tuple[list[str], list[str]]:
    tags: list[str] = []
    evidence: list[str] = []
    joined = "\n".join(texts).lower()
    for tag, needles in TAG_RULES:
        hits = [needle for needle in needles if needle in joined]
        if hits:
            tags.append(tag)
            evidence.append(f"{tag}:{','.join(hits)}")
    return tags, evidence


def confidence_for(tags: list[str], string_count: int, exact_count: int, external_edges: int) -> str:
    if not tags:
        return "none"
    if exact_count >= 2 and string_count >= 2 and external_edges:
        return "medium"
    if exact_count >= 1 and string_count >= 1:
        return "low_to_medium"
    return "low"


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    inventory_path = root / "vm_behavior_inventory.tsv"
    context_path = root / "vm_string_reference_context.tsv"
    coverage_path = root / "vm_trace_coverage_matrix.tsv"
    imports_path = root / "vm_native_linkage_stubs.tsv"
    for path in [inventory_path, context_path, coverage_path, imports_path]:
        if not path.exists():
            raise SystemExit(f"missing input: {path}")

    inventory = read_tsv(inventory_path)
    contexts = read_tsv(context_path)
    coverage = read_tsv(coverage_path)
    imports = read_tsv(imports_path)

    strings_by_program: dict[str, list[str]] = defaultdict(list)
    exact_by_program: Counter[str] = Counter()
    opcode_by_program: dict[str, Counter[str]] = defaultdict(Counter)
    for row in contexts:
        program = row["program"]
        text = row.get("text", "")
        if text:
            strings_by_program[program].append(text)
        if row.get("context_status") == "exact_row":
            exact_by_program[program] += 1
        opcode_by_program[program][row.get("opcode_name", "")] += 1

    import_symbols = [row.get("symbol", "") for row in imports]
    global_import_tags, global_import_evidence = tag_strings(import_symbols)
    network_hosts = Counter()
    spawn_commands = Counter()
    for row in coverage:
        for item in row.get("network_hosts", "").split(","):
            if ":" in item:
                key, count = item.rsplit(":", 1)
                try:
                    network_hosts[key] += int(count)
                except ValueError:
                    pass
        for item in row.get("spawn_commands", "").split(","):
            if ":" in item:
                key, count = item.rsplit(":", 1)
                try:
                    spawn_commands[key] += int(count)
                except ValueError:
                    pass

    rows: list[dict[str, object]] = []
    for inv in inventory:
        program = inv["program"]
        texts = strings_by_program.get(program, [])
        tags, evidence = tag_strings(texts)
        if not tags and parse_int(inv.get("folded_external_edges")):
            tags = ["control_transfer_or_native_bridge_candidate"]
            evidence = ["external_or_hidden folded edge present"]
        if not tags:
            tags = ["vm_dispatch_math_only_so_far"]
            evidence = ["no program-local string/data evidence yet"]
        confidence = confidence_for(tags, len(texts), exact_by_program[program], parse_int(inv.get("folded_external_edges")))
        if tags == ["vm_dispatch_math_only_so_far"]:
            confidence = "none"
        rows.append(
            {
                "program": program,
                "range": f"{inv['start']}..{inv['end']}",
                "blocks": inv["blocks"],
                "rows": inv["ir_rows"],
                "primary_trace_rows": inv["primary_trace_rows"],
                "string_refs": len(texts),
                "exact_string_contexts": exact_by_program[program],
                "top_string_texts": "; ".join(texts[:8]),
                "top_string_opcodes": ",".join(f"{op}:{count}" for op, count in opcode_by_program[program].most_common(6) if op),
                "behavior_tags": ";".join(tags),
                "confidence": confidence,
                "evidence": "; ".join(evidence),
                "external_edges": inv.get("folded_external_edges", ""),
                "next_action": "confirm tags by reducing nearby opcode windows and native/import bridge targets" if confidence != "none" else "defer until control graph names this program or new data refs appear",
            }
        )

    fields = [
        "program",
        "range",
        "blocks",
        "rows",
        "primary_trace_rows",
        "string_refs",
        "exact_string_contexts",
        "top_string_texts",
        "top_string_opcodes",
        "behavior_tags",
        "confidence",
        "evidence",
        "external_edges",
        "next_action",
    ]
    output_path = root / "vm_program_behavior_hypotheses.tsv"
    write_tsv(output_path, rows, fields)

    tag_mix = Counter()
    for row in rows:
        for tag in str(row["behavior_tags"]).split(";"):
            tag_mix[tag] += 1
    confidence_mix = Counter(str(row["confidence"]) for row in rows)
    md_path = root / "vm_program_behavior_hypotheses.md"
    interesting = [row for row in rows if row["confidence"] != "none"]
    md_lines = [
        "# VM Program Behavior Hypotheses",
        "",
        "These are conservative hypotheses from recovered strings/data references, VM-op context, imported side-effect surface, and observed runtime environment. They are not final behavior claims; each tag needs confirmation by reducing the nearby opcode window and linking it to native/import bridge targets.",
        "",
        "## Global Side-Effect Hints",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["import-derived tags", ";".join(global_import_tags)],
                ["import evidence", "; ".join(global_import_evidence)],
                ["network hosts", ",".join(f"{host}:{count}" for host, count in network_hosts.most_common())],
                ["spawn commands", ",".join(f"{cmd}:{count}" for cmd, count in spawn_commands.most_common())],
            ],
        ),
        "",
        "## Summary",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["programs", len(rows)],
                ["programs with non-empty hypotheses", len(interesting)],
                ["tag mix", ",".join(f"{tag}:{count}" for tag, count in tag_mix.most_common())],
                ["confidence mix", ",".join(f"{key}:{count}" for key, count in confidence_mix.most_common())],
            ],
        ),
        "",
        "## Program Hypotheses",
        "",
        markdown_table(
            ["program", "range", "strings", "tags", "confidence", "evidence", "next action"],
            [
                [
                    row["program"],
                    row["range"],
                    row["top_string_texts"] or "-",
                    row["behavior_tags"],
                    row["confidence"],
                    row["evidence"],
                    row["next_action"],
                ]
                for row in rows
            ],
        ),
        "",
        "## Artifact",
        "",
        f"- Hypotheses TSV: `{output_path}`",
        "",
    ]
    md_path.write_text("\n".join(md_lines), encoding="utf-8")

    print(f"wrote {output_path}")
    print(f"wrote {md_path}")
    print(f"programs={len(rows)} tagged={len(interesting)} tag_mix={','.join(f'{k}:{v}' for k,v in tag_mix.most_common())}")
    print("semantic_status=program_hypotheses_ready;confirmation_open")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
