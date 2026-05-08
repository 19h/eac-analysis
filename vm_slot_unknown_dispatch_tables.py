#!/usr/bin/env python3
"""Emit exact observed dispatch tables for opcode classes with no slot formula."""

from __future__ import annotations

import argparse
import csv
from collections import Counter, defaultdict
from pathlib import Path

from vm_program_readable_c import c_string, markdown_table, parse_int, read_tsv, write_tsv


def h(text: str | None) -> str:
    value = parse_int(text)
    return f"0x{value:x}u"


def dec(text: str | None) -> str:
    return str(parse_int(text))


def counter_text(counter: Counter[str], limit: int = 16) -> str:
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(limit) if key)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    isa_path = root / "vm_readable_isa.tsv"
    ops_path = root / "vm_program_readable_ops.tsv"
    for path in [isa_path, ops_path]:
        if not path.exists():
            raise SystemExit(f"missing input: {path}")

    isa = {row["source_entry"]: row for row in read_tsv(isa_path)}
    slot_unknown_entries = {
        entry
        for entry, row in isa.items()
        if row.get("dispatch_slot_kind") == "slot_unknown"
    }
    ops = [
        row
        for row in read_tsv(ops_path)
        if row.get("source_entry") in slot_unknown_entries
    ]

    rows: list[dict[str, object]] = []
    by_entry: dict[str, list[dict[str, str]]] = defaultdict(list)
    for row in ops:
        by_entry[row["source_entry"]].append(row)
        rows.append(
            {
                "source_entry": row.get("source_entry", ""),
                "opcode_name": row.get("opcode_name", ""),
                "program": row.get("program", ""),
                "start_vm_ip": row.get("start_vm_ip", ""),
                "end_vm_ip": row.get("end_vm_ip", ""),
                "bytes": row.get("bytes", ""),
                "target_entry": row.get("target_entry", ""),
                "target": row.get("target", ""),
                "delta": row.get("delta", ""),
                "state_kind": isa.get(row.get("source_entry", ""), {}).get("state_kind", ""),
                "table_status": "exact_observed_row",
            }
        )

    summary_rows: list[dict[str, object]] = []
    for entry in sorted(slot_unknown_entries, key=parse_int):
        entry_rows = by_entry.get(entry, [])
        byte_targets = {(row.get("bytes", ""), row.get("target_entry", ""), row.get("delta", "")) for row in entry_rows}
        summary_rows.append(
            {
                "source_entry": entry,
                "opcode_name": isa.get(entry, {}).get("opcode_name", ""),
                "state_kind": isa.get(entry, {}).get("state_kind", ""),
                "rows": len(entry_rows),
                "program_count": len({row.get("program", "") for row in entry_rows}),
                "byte_pattern_count": len({row.get("bytes", "") for row in entry_rows}),
                "byte_target_delta_count": len(byte_targets),
                "target_entries": ";".join(sorted({row.get("target_entry", "") for row in entry_rows if row.get("target_entry")}, key=parse_int)),
                "target_mix": counter_text(Counter(row.get("target_entry", "") for row in entry_rows)),
                "delta_mix": counter_text(Counter(row.get("delta", "") for row in entry_rows)),
                "programs": ";".join(sorted({row.get("program", "") for row in entry_rows if row.get("program")})),
                "resolution_status": "exact_observed_table_no_formula",
            }
        )

    rows_path = root / "vm_slot_unknown_dispatch_rows.tsv"
    summary_path = root / "vm_slot_unknown_dispatch_summary.tsv"
    c_path = root / "vm_slot_unknown_dispatch_tables.c"
    md_path = root / "vm_slot_unknown_dispatch_tables.md"
    write_tsv(
        rows_path,
        rows,
        [
            "source_entry",
            "opcode_name",
            "program",
            "start_vm_ip",
            "end_vm_ip",
            "bytes",
            "target_entry",
            "target",
            "delta",
            "state_kind",
            "table_status",
        ],
    )
    write_tsv(
        summary_path,
        summary_rows,
        [
            "source_entry",
            "opcode_name",
            "state_kind",
            "rows",
            "program_count",
            "byte_pattern_count",
            "byte_target_delta_count",
            "target_entries",
            "target_mix",
            "delta_mix",
            "programs",
            "resolution_status",
        ],
    )

    lines = [
        "/* Auto-generated exact observed dispatch tables for slot-unknown VM opcodes. */",
        "#include <stdint.h>",
        "#include <stddef.h>",
        "",
        "#ifndef VM_SLOT_UNKNOWN_DISPATCH_TABLES_C",
        "#define VM_SLOT_UNKNOWN_DISPATCH_TABLES_C",
        "",
        "typedef struct VMSlotUnknownDispatchRow {",
        "    uint32_t source_entry;",
        "    const char *opcode_name;",
        "    const char *program;",
        "    uint64_t start_vm_ip;",
        "    uint64_t end_vm_ip;",
        "    const char *bytes;",
        "    int32_t target_entry;",
        "    const char *target;",
        "    const char *delta;",
        "} VMSlotUnknownDispatchRow;",
        "",
        "typedef struct VMSlotUnknownDispatchSummary {",
        "    uint32_t source_entry;",
        "    const char *opcode_name;",
        "    uint32_t rows;",
        "    uint32_t byte_pattern_count;",
        "    const char *target_mix;",
        "    const char *resolution_status;",
        "} VMSlotUnknownDispatchSummary;",
        "",
        "static const VMSlotUnknownDispatchRow vm_slot_unknown_dispatch_rows[] = {",
    ]
    for row in rows:
        lines.append(
            "    {"
            f"{dec(str(row.get('source_entry', '')))}u, {c_string(str(row.get('opcode_name', '')))}, "
            f"{c_string(str(row.get('program', '')))}, {h(str(row.get('start_vm_ip', '')))}, {h(str(row.get('end_vm_ip', '')))}, "
            f"{c_string(str(row.get('bytes', '')))}, {dec(str(row.get('target_entry', '')))}, "
            f"{c_string(str(row.get('target', '')))}, {c_string(str(row.get('delta', '')))}"
            "},"
        )
    lines.extend(
        [
            "};",
            f"enum {{ VM_SLOT_UNKNOWN_DISPATCH_ROW_COUNT = {len(rows)} }};",
            "",
            "static const VMSlotUnknownDispatchSummary vm_slot_unknown_dispatch_summary[] = {",
        ]
    )
    for row in summary_rows:
        lines.append(
            "    {"
            f"{dec(str(row.get('source_entry', '')))}u, {c_string(str(row.get('opcode_name', '')))}, "
            f"{dec(str(row.get('rows', '')))}u, {dec(str(row.get('byte_pattern_count', '')))}u, "
            f"{c_string(str(row.get('target_mix', '')))}, {c_string(str(row.get('resolution_status', '')))}"
            "},"
        )
    lines.extend(
        [
            "};",
            f"enum {{ VM_SLOT_UNKNOWN_DISPATCH_SUMMARY_COUNT = {len(summary_rows)} }};",
            "",
            "const VMSlotUnknownDispatchRow *vm_slot_unknown_dispatch_row(size_t index) {",
            "    return index < (size_t)VM_SLOT_UNKNOWN_DISPATCH_ROW_COUNT ? &vm_slot_unknown_dispatch_rows[index] : 0;",
            "}",
            "",
            "const VMSlotUnknownDispatchSummary *vm_slot_unknown_dispatch_entry(size_t index) {",
            "    return index < (size_t)VM_SLOT_UNKNOWN_DISPATCH_SUMMARY_COUNT ? &vm_slot_unknown_dispatch_summary[index] : 0;",
            "}",
            "",
            "#endif /* VM_SLOT_UNKNOWN_DISPATCH_TABLES_C */",
            "",
        ]
    )
    c_path.write_text("\n".join(lines))

    md_path.write_text(
        "\n".join(
            [
                "# Slot-Unknown Dispatch Tables",
                "",
                "These tables cover opcode classes whose dispatch slot formula was not recovered. They do not solve the formula; they preserve the exact observed bytecode rows and concrete targets so the readable program artifacts can distinguish exact row evidence from missing dispatch algebra.",
                "",
                "## Summary",
                "",
                markdown_table(
                    ["metric", "value"],
                    [
                        ["slot-unknown entries", len(summary_rows)],
                        ["observed rows", len(rows)],
                        ["programs touched", len({row["program"] for row in rows})],
                        ["output C", c_path],
                    ],
                ),
                "",
                "## Entries",
                "",
                markdown_table(
                    ["entry", "rows", "targets", "deltas", "status"],
                    [
                        [
                            row["source_entry"],
                            row["rows"],
                            row["target_mix"],
                            row["delta_mix"],
                            row["resolution_status"],
                        ]
                        for row in summary_rows
                    ],
                ),
                "",
                "## Caveat",
                "",
                "`exact_observed_table_no_formula` is evidence-backed for recovered rows only. It is not a symbolic dispatch formula and does not prove unobserved byte patterns.",
            ]
        )
        + "\n"
    )
    print(f"slot_unknown_entries={len(summary_rows)}")
    print(f"slot_unknown_rows={len(rows)}")
    print(f"slot_unknown_c={c_path}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
