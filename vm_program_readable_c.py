#!/usr/bin/env python3
"""Emit compileable per-program C readable VM pseudocode/data artifacts."""

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


def c_string(text: str) -> str:
    data = (text or "").encode("utf-8", errors="replace")
    out: list[str] = ['"']
    for byte in data:
        ch = chr(byte)
        if ch == "\\":
            out.append("\\\\")
        elif ch == '"':
            out.append('\\"')
        elif ch == "\n":
            out.append("\\n")
        elif ch == "\r":
            out.append("\\r")
        elif ch == "\t":
            out.append("\\t")
        elif 32 <= byte <= 126:
            out.append(ch)
        else:
            out.append(f"\\{byte:03o}")
    out.append('"')
    return "".join(out)


def c_ident(text: str) -> str:
    value = re.sub(r"[^A-Za-z0-9_]+", "_", text).strip("_")
    if not value or value[0].isdigit():
        value = "x_" + value
    return value


def h(text: str | None) -> str:
    value = (text or "").strip()
    if not value:
        return "0"
    try:
        return f"0x{parse_int(value):x}u"
    except ValueError:
        return "0"


def dec(text: str | None) -> str:
    value = parse_int(text)
    return str(value)


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 140 else cell[:137] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def group_by(rows: list[dict[str, str]], key: str) -> dict[str, list[dict[str, str]]]:
    grouped: dict[str, list[dict[str, str]]] = defaultdict(list)
    for row in rows:
        grouped[row.get(key, "")].append(row)
    return grouped


def preamble(program: str) -> list[str]:
    guard = f"VM_PROGRAM_ATLAS_{program}_READABLE_C"
    return [
        "/*",
        " * Auto-generated compileable readable VM program artifact.",
        " * This is pseudocode/data for analysis: concrete row transitions are preserved,",
        " * exact string/data references are embedded, and unresolved algebra remains marked.",
        " */",
        "#include <stdint.h>",
        "#include <stddef.h>",
        "",
        f"#ifndef {guard}",
        f"#define {guard}",
        "",
        "typedef struct VMReadableOp {",
        "    uint64_t start_vm_ip;",
        "    uint64_t end_vm_ip;",
        "    uint32_t source_entry;",
        "    uint32_t target_entry;",
        "    const char *opcode_name;",
        "    const char *bytes;",
        "    const char *operation_family;",
        "    const char *readability_grade;",
        "    const char *state_semantics;",
        "    const char *dispatch_semantics;",
        "    const char *ip_semantics;",
        "    const char *target;",
        "    const char *string_refs;",
        "    const char *side_effect_categories;",
        "    const char *unresolved;",
        "} VMReadableOp;",
        "",
        "typedef struct VMReadableEdge {",
        "    uint64_t case_state;",
        "    uint64_t successor_vm_ip;",
        "    int32_t successor_entry;",
        "    const char *target_program;",
        "    const char *relation;",
        "    const char *edge_kind;",
        "    const char *edge_delta;",
        "    const char *semantic_ir;",
        "} VMReadableEdge;",
        "",
        "typedef struct VMReadableStringRef {",
        "    uint32_t ref_index;",
        "    uint64_t site;",
        "    uint64_t row_start;",
        "    const char *text;",
        "    const char *section_name;",
        "    const char *role;",
        "    const char *categories;",
        "    const char *opcode_name;",
        "    const char *execution_claim;",
        "} VMReadableStringRef;",
        "",
        "typedef struct VMReadableProgram {",
        "    const char *program;",
        "    uint64_t range_start;",
        "    uint64_t range_end;",
        "    const VMReadableOp *ops;",
        "    size_t op_count;",
        "    const VMReadableEdge *edges;",
        "    size_t edge_count;",
        "    const VMReadableStringRef *strings;",
        "    size_t string_count;",
        "} VMReadableProgram;",
        "",
    ]


def emit_program(
    root: Path,
    out_dir: Path,
    program: str,
    ops: list[dict[str, str]],
    edges: list[dict[str, str]],
    refs: list[dict[str, str]],
    dossier: dict[str, str],
) -> Path:
    path = out_dir / f"vm_program_atlas_{program}_readable.c"
    macro = f"VM_PROGRAM_ATLAS_{program}"
    start, end = "0", "0"
    if dossier.get("range") and ".." in dossier["range"]:
        start, end = dossier["range"].split("..", 1)

    lines = preamble(program)
    lines.extend(
        [
            f"/* VM program atlas {program}: {dossier.get('range', '')} */",
            f"/* summary: {dossier.get('summary', '')} */",
            f"/* unresolved: {dossier.get('unresolved', '')} */",
            "",
            f"static const VMReadableOp vm_program_atlas_{program}_ops[] = {{",
        ]
    )
    for row in ops:
        lines.append(
            "    {"
            f"{h(row.get('start_vm_ip'))}, {h(row.get('end_vm_ip'))}, "
            f"{dec(row.get('source_entry'))}u, {dec(row.get('target_entry'))}u, "
            f"{c_string(row.get('opcode_name', ''))}, {c_string(row.get('bytes', ''))}, "
            f"{c_string(row.get('operation_family', ''))}, {c_string(row.get('readability_grade', ''))}, "
            f"{c_string(row.get('state_semantics', ''))}, {c_string(row.get('dispatch_semantics', ''))}, "
            f"{c_string(row.get('ip_semantics', ''))}, {c_string(row.get('target', ''))}, "
            f"{c_string(row.get('string_refs', ''))}, {c_string(row.get('side_effect_categories', ''))}, "
            f"{c_string(row.get('unresolved', ''))}"
            "},"
        )
    lines.extend(
        [
            "};",
            f"enum {{ {macro}_OP_COUNT = (int)(sizeof(vm_program_atlas_{program}_ops) / sizeof(vm_program_atlas_{program}_ops[0])) }};",
            "",
            f"static const VMReadableEdge vm_program_atlas_{program}_edges[] = {{",
        ]
    )
    for row in edges:
        lines.append(
            "    {"
            f"{h(row.get('case_state'))}, {h(row.get('successor_vm_ip'))}, {dec(row.get('successor_entry'))}, "
            f"{c_string(row.get('target_program', ''))}, {c_string(row.get('relation', ''))}, "
            f"{c_string(row.get('edge_kind', ''))}, {c_string(row.get('edge_delta', ''))}, "
            f"{c_string(row.get('edge_semantic_ir', ''))}"
            "},"
        )
    lines.extend(
        [
            "};",
            f"enum {{ {macro}_EDGE_COUNT = (int)(sizeof(vm_program_atlas_{program}_edges) / sizeof(vm_program_atlas_{program}_edges[0])) }};",
            "",
            f"static const VMReadableStringRef vm_program_atlas_{program}_strings[] = {{",
        ]
    )
    for row in refs:
        lines.append(
            "    {"
            f"{dec(row.get('ref_index'))}u, {h(row.get('site'))}, {h(row.get('row_start'))}, "
            f"{c_string(row.get('text', ''))}, {c_string(row.get('section_name', ''))}, "
            f"{c_string(row.get('role', ''))}, {c_string(row.get('categories', ''))}, "
            f"{c_string(row.get('opcode_name', ''))}, {c_string(row.get('execution_claim', ''))}"
            "},"
        )
    lines.extend(
        [
            "};",
            f"enum {{ {macro}_STRING_REF_COUNT = (int)(sizeof(vm_program_atlas_{program}_strings) / sizeof(vm_program_atlas_{program}_strings[0])) }};",
            "",
            f"static const VMReadableProgram vm_program_atlas_{program}_readable_program = {{",
            f"    {c_string(program)}, {h(start)}, {h(end)},",
            f"    vm_program_atlas_{program}_ops, (size_t){macro}_OP_COUNT,",
            f"    vm_program_atlas_{program}_edges, (size_t){macro}_EDGE_COUNT,",
            f"    vm_program_atlas_{program}_strings, (size_t){macro}_STRING_REF_COUNT,",
            "};",
            "",
            f"const VMReadableProgram *vm_program_atlas_{program}_readable(void) {{",
            f"    return &vm_program_atlas_{program}_readable_program;",
            "}",
            "",
            f"#endif /* VM_PROGRAM_ATLAS_{program}_READABLE_C */",
            "",
        ]
    )
    path.write_text("\n".join(lines))
    return path


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    ops_path = root / "vm_program_readable_ops.tsv"
    edges_path = root / "vm_program_control_graph_edges.tsv"
    refs_path = root / "vm_native_side_effect_vm_refs.tsv"
    dossiers_path = root / "vm_program_behavior_dossiers.tsv"
    for path in [ops_path, edges_path, refs_path, dossiers_path]:
        if not path.exists():
            raise SystemExit(f"missing input: {path}")

    ops_by_program = group_by(read_tsv(ops_path), "program")
    edges_by_program = group_by(read_tsv(edges_path), "source_program")
    refs_by_program = group_by(read_tsv(refs_path), "program")
    dossiers = {row["program"]: row for row in read_tsv(dossiers_path)}

    out_dir = root / "vm_programs_readable_c"
    out_dir.mkdir(parents=True, exist_ok=True)
    for old in out_dir.glob("vm_program_atlas_*_readable.c"):
        old.unlink()

    manifest_rows: list[dict[str, object]] = []
    for program in sorted(ops_by_program, key=lambda value: parse_int(value)):
        ops = sorted(ops_by_program[program], key=lambda row: parse_int(row.get("start_vm_ip")))
        edges = sorted(edges_by_program.get(program, []), key=lambda row: parse_int(row.get("case_state")))
        refs = sorted(refs_by_program.get(program, []), key=lambda row: parse_int(row.get("ref_index")))
        dossier = dossiers.get(program, {})
        path = emit_program(root, out_dir, program, ops, edges, refs, dossier)
        family_mix = Counter(row.get("operation_family", "") for row in ops)
        manifest_rows.append(
            {
                "program": program,
                "path": str(path),
                "ops": len(ops),
                "edges": len(edges),
                "string_refs": len(refs),
                "range": dossier.get("range", ""),
                "summary": dossier.get("summary", ""),
                "unresolved": dossier.get("unresolved", ""),
                "family_mix": ",".join(f"{key}:{count}" for key, count in family_mix.most_common(8) if key),
            }
        )

    manifest_path = root / "vm_program_readable_c_manifest.tsv"
    md_path = root / "vm_program_readable_c.md"
    fields = ["program", "path", "ops", "edges", "string_refs", "range", "summary", "unresolved", "family_mix"]
    write_tsv(manifest_path, manifest_rows, fields)

    md_path.write_text(
        "\n".join(
            [
                "# Compileable VM Program Readable C",
                "",
                "This emits one compileable C artifact per recovered VM bytecode program. Each file embeds readable operation rows, solved block successor edges, and exact string/data references. It is an analysis artifact: unresolved algebra is preserved in strings rather than hidden behind invalid C expressions.",
                "",
                "## Summary",
                "",
                markdown_table(
                    ["metric", "value"],
                    [
                        ["programs", len(manifest_rows)],
                        ["ops", sum(parse_int(str(row["ops"])) for row in manifest_rows)],
                        ["edges", sum(parse_int(str(row["edges"])) for row in manifest_rows)],
                        ["string refs", sum(parse_int(str(row["string_refs"])) for row in manifest_rows)],
                        ["output dir", str(out_dir)],
                    ],
                ),
                "",
                "## Program Files",
                "",
                markdown_table(
                    ["program", "ops", "edges", "strings", "summary", "path"],
                    [[row["program"], row["ops"], row["edges"], row["string_refs"], row["summary"], row["path"]] for row in manifest_rows],
                ),
                "",
                "## Caveat",
                "",
                "These C files are designed to compile and preserve evidence. They are not a replacement for final MBA algebra reduction or a native binding proof.",
            ]
        )
        + "\n"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
