#!/usr/bin/env python3
"""Build readable per-program behavior dossiers from recovered VM evidence."""

from __future__ import annotations

import argparse
import csv
from collections import Counter, defaultdict
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
    try:
        return int(value, 16 if value.startswith("0x") else 10)
    except ValueError:
        return 0


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 140 else cell[:137] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def split_items(text: str, sep: str = ";") -> list[str]:
    return [item for item in str(text).split(sep) if item]


def counter_text(counter: Counter[str], limit: int = 8) -> str:
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(limit) if key)


def summarize_program(tags: str, categories: str, strings: str, external_edges: str, confidence: str) -> tuple[str, str]:
    tag_set = set(split_items(tags))
    category_set: set[str] = set()
    for item in str(categories).split(","):
        name = item.split(":", 1)[0]
        if name and name != "no_exact_side_effect_ref":
            category_set.add(name)

    phrases: list[str] = []
    if "networking" in tag_set or "network" in category_set:
        phrases.append("network-facing logic or network import reference")
    if "tls_or_ssl" in tag_set or "tls_or_ssl" in category_set:
        phrases.append("TLS/SSL protocol or library-adjacent logic")
    if "crypto_hashing" in tag_set or "crypto_hashing" in category_set:
        phrases.append("crypto/hash helper surface")
    if "threading_sync" in tag_set or "threading_sync" in category_set:
        phrases.append("threading or synchronization surface")
    if "host_environment" in tag_set or "host_environment_inventory" in category_set:
        phrases.append("host/environment inventory surface")
    if "process_or_shell" in tag_set or "process_or_shell" in category_set:
        phrases.append("process or shell helper surface")
    if "cxx_runtime" in tag_set or "cxx_runtime" in category_set:
        phrases.append("C++ runtime/support surface")
    if "disassembly_metadata" in tag_set or "disassembly_metadata" in category_set:
        phrases.append("disassembly metadata surface")

    if not phrases:
        if "vm_dispatch_math_only_so_far" in tag_set:
            phrases.append("VM dispatch/math only so far; no behavioral data refs recovered")
        elif "control_transfer_or_native_bridge_candidate" in tag_set:
            phrases.append("control-transfer/native-bridge candidate with no exact side-effect reference yet")
        else:
            phrases.append("structural VM program with unresolved high-level intent")

    if strings:
        evidence = "exact string/data references plus opcode/control evidence"
    elif parse_int(external_edges):
        evidence = "control graph has external/exit edges but no exact string/data references"
    else:
        evidence = "timeline/control/opcode evidence only"
    if confidence in {"low", "none"}:
        evidence += "; confidence is intentionally conservative"
    return "; ".join(phrases), evidence


def source_path_for_program(root: Path, program: str) -> str:
    folded = root / "vm_programs_decompiled_folded" / f"vm_program_atlas_{program}.c"
    split = root / "vm_programs_decompiled" / f"vm_program_atlas_{program}.c"
    if folded.exists():
        return str(folded)
    if split.exists():
        return str(split)
    return ""


def load_opcode_stats(root: Path) -> tuple[dict[str, Counter[str]], dict[str, Counter[str]], dict[str, Counter[str]]]:
    rows = read_tsv(root / "vm_program_opcode_pseudocode.tsv")
    opcodes: dict[str, Counter[str]] = defaultdict(Counter)
    state_kinds: dict[str, Counter[str]] = defaultdict(Counter)
    slot_kinds: dict[str, Counter[str]] = defaultdict(Counter)
    for row in rows:
        program = row.get("program", "")
        opcodes[program][row.get("opcode_name", "")] += 1
        state_kinds[program][row.get("state_kind", "")] += 1
        slot_kinds[program][row.get("dispatch_slot_kind", "")] += 1
    return opcodes, state_kinds, slot_kinds


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    required = [
        root / "vm_behavior_inventory.tsv",
        root / "vm_program_behavior_hypotheses.tsv",
        root / "vm_program_control_graph_summary.tsv",
        root / "vm_x_program_first_seen.tsv",
        root / "vm_string_role_annotations.tsv",
        root / "vm_native_side_effect_programs.tsv",
        root / "vm_program_opcode_pseudocode.tsv",
        root / "vm_program_opcode_pseudocode_manifest.tsv",
    ]
    for path in required:
        if not path.exists():
            raise SystemExit(f"missing input: {path}")

    inventory = {row["program"]: row for row in read_tsv(root / "vm_behavior_inventory.tsv")}
    hypotheses = {row["program"]: row for row in read_tsv(root / "vm_program_behavior_hypotheses.tsv")}
    control = {row["program"]: row for row in read_tsv(root / "vm_program_control_graph_summary.tsv")}
    first_seen = {row["program"]: row for row in read_tsv(root / "vm_x_program_first_seen.tsv")}
    side_effects = {row["program"]: row for row in read_tsv(root / "vm_native_side_effect_programs.tsv")}
    opcode_manifest = {row["program"]: row for row in read_tsv(root / "vm_program_opcode_pseudocode_manifest.tsv")}
    opcodes, state_kinds, slot_kinds = load_opcode_stats(root)

    string_rows_by_program: dict[str, list[dict[str, str]]] = defaultdict(list)
    role_mix_by_program: dict[str, Counter[str]] = defaultdict(Counter)
    for row in read_tsv(root / "vm_string_role_annotations.tsv"):
        program = row.get("program", "")
        string_rows_by_program[program].append(row)
        role_mix_by_program[program][row.get("role", "")] += 1

    dossier_dir = root / "vm_program_behavior_dossiers"
    dossier_dir.mkdir(parents=True, exist_ok=True)
    rows: list[dict[str, object]] = []
    for program in sorted(inventory, key=lambda value: parse_int(value)):
        inv = inventory.get(program, {})
        hyp = hypotheses.get(program, {})
        graph = control.get(program, {})
        first = first_seen.get(program, {})
        side = side_effects.get(program, {})
        manifest = opcode_manifest.get(program, {})
        strings = string_rows_by_program.get(program, [])

        summary, basis = summarize_program(
            hyp.get("behavior_tags", ""),
            side.get("exact_side_effect_categories", ""),
            side.get("top_strings", ""),
            graph.get("external_or_exit_edges", ""),
            hyp.get("confidence", ""),
        )
        unresolved: list[str] = []
        if hyp.get("confidence") in {"low", "none", "low_to_medium"}:
            unresolved.append("intent_not_final")
        if graph.get("external_or_exit_edges") and parse_int(graph.get("external_or_exit_edges")):
            unresolved.append("external_or_exit_edges_need_semantics")
        if not strings:
            unresolved.append("no_exact_string_or_data_ref")
        if "needs_algebraic_simplification" in counter_text(opcodes.get(program, Counter()), 20):
            unresolved.append("opcode_algebraic_simplification_open")
        if not unresolved:
            unresolved.append("needs_final_dataflow_confirmation")

        dossier_path = dossier_dir / f"vm_program_atlas_{program}.md"
        source_path = source_path_for_program(root, program)
        vmops_path = manifest.get("path", "")
        rows.append(
            {
                "program": program,
                "first_seen_rank": first.get("first_seen_rank", ""),
                "range": inv.get("range", hyp.get("range", "")),
                "rows": inv.get("ir_rows", manifest.get("rows", "")),
                "blocks": inv.get("blocks", manifest.get("blocks", "")),
                "summary": summary,
                "evidence_basis": basis,
                "behavior_tags": hyp.get("behavior_tags", ""),
                "confidence": hyp.get("confidence", ""),
                "exact_side_effect_categories": side.get("exact_side_effect_categories", ""),
                "role_mix": counter_text(role_mix_by_program.get(program, Counter())),
                "top_strings": side.get("top_strings", ""),
                "outgoing_targets": graph.get("outgoing_targets", ""),
                "incoming_programs": graph.get("incoming_programs", ""),
                "external_or_exit_edges": graph.get("external_or_exit_edges", ""),
                "top_opcodes": counter_text(opcodes.get(program, Counter()), 10),
                "state_kind_mix": counter_text(state_kinds.get(program, Counter()), 8),
                "dispatch_slot_mix": counter_text(slot_kinds.get(program, Counter()), 8),
                "source_c": source_path,
                "vmops": vmops_path,
                "dossier": str(dossier_path),
                "unresolved": ";".join(unresolved),
                "next_action": side.get("next_action") or hyp.get("next_action", ""),
            }
        )

        md_lines = [
            f"# VM Program atlas_{program}",
            "",
            "This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.",
            "",
            "## Summary",
            "",
            markdown_table(
                ["field", "value"],
                [
                    ["program", program],
                    ["range", inv.get("range", hyp.get("range", ""))],
                    ["first seen rank", first.get("first_seen_rank", "")],
                    ["summary", summary],
                    ["basis", basis],
                    ["confidence", hyp.get("confidence", "")],
                    ["behavior tags", hyp.get("behavior_tags", "")],
                    ["unresolved", ";".join(unresolved)],
                ],
            ),
            "",
            "## Control",
            "",
            markdown_table(
                ["field", "value"],
                [
                    ["incoming", graph.get("incoming_programs", "")],
                    ["outgoing", graph.get("outgoing_targets", "")],
                    ["external/exit edges", graph.get("external_or_exit_edges", "")],
                    ["blocks", inv.get("blocks", manifest.get("blocks", ""))],
                    ["rows", inv.get("ir_rows", manifest.get("rows", ""))],
                ],
            ),
            "",
            "## Data And Side Effects",
            "",
            markdown_table(
                ["field", "value"],
                [
                    ["exact categories", side.get("exact_side_effect_categories", "")],
                    ["role mix", counter_text(role_mix_by_program.get(program, Counter()))],
                    ["top strings", side.get("top_strings", "")],
                    ["runtime native binding", side.get("runtime_native_binding", "")],
                ],
            ),
            "",
            "## Opcode Shape",
            "",
            markdown_table(
                ["field", "value"],
                [
                    ["top opcodes", counter_text(opcodes.get(program, Counter()), 12)],
                    ["state kinds", counter_text(state_kinds.get(program, Counter()), 8)],
                    ["dispatch slots", counter_text(slot_kinds.get(program, Counter()), 8)],
                    ["vmops file", vmops_path],
                    ["recovered C", source_path],
                ],
            ),
            "",
        ]
        if strings:
            md_lines.extend(
                [
                    "## Exact String/Data References",
                    "",
                    markdown_table(
                        ["site", "role", "categories", "text", "opcode"],
                        [
                            [
                                row.get("site", ""),
                                row.get("role", ""),
                                side.get("exact_side_effect_categories", ""),
                                row.get("text", ""),
                                row.get("opcode_name", ""),
                            ]
                            for row in strings
                        ],
                    ),
                    "",
                ]
            )
        dossier_path.write_text("\n".join(md_lines) + "\n")

    fields = [
        "program",
        "first_seen_rank",
        "range",
        "rows",
        "blocks",
        "summary",
        "evidence_basis",
        "behavior_tags",
        "confidence",
        "exact_side_effect_categories",
        "role_mix",
        "top_strings",
        "outgoing_targets",
        "incoming_programs",
        "external_or_exit_edges",
        "top_opcodes",
        "state_kind_mix",
        "dispatch_slot_mix",
        "source_c",
        "vmops",
        "dossier",
        "unresolved",
        "next_action",
    ]
    out_tsv = root / "vm_program_behavior_dossiers.tsv"
    out_md = root / "vm_program_behavior_dossiers.md"
    write_tsv(out_tsv, rows, fields)

    summary_mix = Counter()
    unresolved_mix = Counter()
    for row in rows:
        for item in split_items(str(row["behavior_tags"])):
            summary_mix[item] += 1
        for item in split_items(str(row["unresolved"])):
            unresolved_mix[item] += 1

    out_md.write_text(
        "\n".join(
            [
                "# VM Program Behavior Dossiers",
                "",
                "Readable per-program rollups for every recovered VM bytecode program. These are strategic dossiers: they consolidate current evidence and unresolved work, but they do not replace final per-instruction deobfuscation.",
                "",
                "## Summary",
                "",
                markdown_table(
                    ["metric", "value"],
                    [
                        ["programs", len(rows)],
                        ["behavior tag mix", counter_text(summary_mix, 12)],
                        ["unresolved mix", counter_text(unresolved_mix, 12)],
                    ],
                ),
                "",
                "## Program Index",
                "",
                markdown_table(
                    ["program", "first seen", "summary", "confidence", "categories", "strings", "dossier"],
                    [
                        [
                            row["program"],
                            row["first_seen_rank"],
                            row["summary"],
                            row["confidence"],
                            row["exact_side_effect_categories"],
                            row["top_strings"],
                            row["dossier"],
                        ]
                        for row in rows
                    ],
                ),
                "",
                "## Caveat",
                "",
                "A dossier row is a current evidence synthesis. Remaining items in the unresolved column are work still required before claiming full program understanding.",
            ]
        )
        + "\n"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
