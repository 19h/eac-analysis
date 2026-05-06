#!/usr/bin/env python3
"""Emit compact reduced C/TSV summaries for collected VM-program MBA cases."""

from __future__ import annotations

import argparse
import csv
from pathlib import Path


def parse_int(text: str) -> int:
    text = text or "0"
    return int(text, 16 if text.startswith("0x") else 10)


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def write_tsv(path: Path, fields: list[str], rows: list[dict[str, str]]) -> None:
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)


def c_string(text: str) -> str:
    return '"' + (text or "").replace("\\", "\\\\").replace('"', '\\"') + '"'


def hx(text: str) -> str:
    if not text:
        return "0x0"
    return f"0x{parse_int(text):x}"


def counter_top(text: str) -> str:
    if not text:
        return ""
    return text.split(",", 1)[0].split(":", 1)[0]


def safe_symbol(state: str) -> str:
    return state.replace("0x", "").lower()


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--program", type=int, default=10)
    parser.add_argument("--out-prefix", type=Path)
    args = parser.parse_args()

    prefix = args.out_prefix or args.root / f"vm_program_atlas_{args.program:03d}_mba"
    cases_path = prefix.with_name(prefix.name + "_cases.tsv")
    requirements_path = prefix.with_name(prefix.name + "_requirements.tsv")
    reduced_path = prefix.with_name(prefix.name + "_reduced.tsv")
    c_path = prefix.with_name(prefix.name + "_reduced.c")
    md_path = prefix.with_name(prefix.name + "_reduced.md")

    cases = read_tsv(cases_path)
    requirements = {row["state"]: row for row in read_tsv(requirements_path)}
    rows: list[dict[str, str]] = []
    for case in cases:
        req = requirements.get(case["state"], {})
        successor_vm_ip = case.get("edge_target_vm_ip", "")
        successor_entry = case.get("edge_target_entry", "")
        row = {
            "program": case["program"],
            "case_state": case["state"],
            "status": req.get("status", "needs_more_evidence"),
            "block": case.get("block", ""),
            "row_count": case.get("rows", ""),
            "terminal_kind": case.get("terminal_kind", ""),
            "successor_vm_ip": successor_vm_ip,
            "successor_entry": successor_entry,
            "edge_kind": case.get("edge_kind", ""),
            "edge_delta": case.get("edge_delta", ""),
            "edge_semantic_ir": case.get("edge_semantic_ir", ""),
            "raw_bytes_0_5": " ".join(case.get(f"raw_b{i}", "") for i in range(6)).strip(),
            "raw_u16_0": case.get("raw_u16_0", ""),
            "raw_u16_1": case.get("raw_u16_1", ""),
            "raw_u16_2": case.get("raw_u16_2", ""),
            "raw_u16_4": case.get("raw_u16_4", ""),
            "observed_pre_state": counter_top(case.get("observed_pre_state", "")),
            "observed_pre_flags": counter_top(case.get("observed_pre_flags", "")),
            "observed_pre_byte": "",
            "observed_first_target_entry": counter_top(case.get("observed_target_entry", "")),
            "trace_observations": case.get("trace_observations", "0"),
            "trace_with_pre_state": case.get("trace_with_pre_state", "0"),
            "reduction": "concrete_successor_edge",
            "missing": req.get("needs", ""),
        }
        rows.append(row)

    fields = list(rows[0].keys()) if rows else []
    write_tsv(reduced_path, fields, rows)

    guard = f"VM_PROGRAM_ATLAS_{args.program:03d}_MBA_REDUCED_C"
    with c_path.open("w") as handle:
        handle.write("/* Auto-generated compact MBA successor reduction. */\n")
        handle.write("#include <stdint.h>\n#include <stddef.h>\n\n")
        handle.write(f"#ifndef {guard}\n#define {guard}\n\n")
        handle.write("typedef struct VMProgramAtlasMBAReducedCase {\n")
        handle.write("    uint32_t case_state;\n")
        handle.write("    uint32_t successor_vm_ip;\n")
        handle.write("    int32_t successor_entry;\n")
        handle.write("    const char *status;\n")
        handle.write("    const char *edge_kind;\n")
        handle.write("    const char *edge_semantic;\n")
        handle.write("    uint16_t raw_u16_0;\n")
        handle.write("    uint16_t raw_u16_1;\n")
        handle.write("    uint16_t raw_u16_2;\n")
        handle.write("    uint16_t raw_u16_4;\n")
        handle.write("    uint32_t observed_pre_state;\n")
        handle.write("    uint32_t observed_pre_flags;\n")
        handle.write("    const char *missing;\n")
        handle.write("} VMProgramAtlasMBAReducedCase;\n\n")
        array_name = f"vm_program_atlas_{args.program:03d}_mba_reduced_cases"
        handle.write(f"static const VMProgramAtlasMBAReducedCase {array_name}[] = {{\n")
        for row in rows:
            handle.write("    {")
            handle.write(f"{hx(row['case_state'])}u, ")
            handle.write(f"{hx(row['successor_vm_ip'])}u, ")
            handle.write(f"{parse_int(row['successor_entry']) if row['successor_entry'] else -1}, ")
            handle.write(f"{c_string(row['status'])}, ")
            handle.write(f"{c_string(row['edge_kind'])}, ")
            handle.write(f"{c_string(row['edge_semantic_ir'])}, ")
            handle.write(f"{hx(row['raw_u16_0'])}u, {hx(row['raw_u16_1'])}u, {hx(row['raw_u16_2'])}u, {hx(row['raw_u16_4'])}u, ")
            handle.write(f"{hx(row['observed_pre_state'])}u, {hx(row['observed_pre_flags'])}u, ")
            handle.write(f"{c_string(row['missing'])}")
            handle.write("},\n")
        handle.write("};\n\n")
        handle.write(f"enum {{ VM_PROGRAM_ATLAS_{args.program:03d}_MBA_REDUCED_CASE_COUNT = ")
        handle.write(f"sizeof({array_name}) / sizeof({array_name}[0]) }};\n\n")
        handle.write(f"static const VMProgramAtlasMBAReducedCase *vm_program_atlas_{args.program:03d}_mba_case(uint32_t state) {{\n")
        handle.write(f"    for (size_t i = 0; i < VM_PROGRAM_ATLAS_{args.program:03d}_MBA_REDUCED_CASE_COUNT; ++i) {{\n")
        handle.write(f"        if ({array_name}[i].case_state == state) {{\n")
        handle.write(f"            return &{array_name}[i];\n")
        handle.write("        }\n")
        handle.write("    }\n")
        handle.write("    return 0;\n")
        handle.write("}\n\n")
        for row in rows:
            sym = safe_symbol(row["case_state"])
            handle.write(f"static uint32_t vm_program_atlas_{args.program:03d}_mba_successor_{sym}(void) {{\n")
            handle.write(f"    return {hx(row['successor_vm_ip'])}u;\n")
            handle.write("}\n\n")
        handle.write(f"#endif /* {guard} */\n")

    with md_path.open("w") as handle:
        handle.write(f"# VM Program Atlas {args.program:03d} MBA Reduction\n\n")
        handle.write("This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.\n\n")
        handle.write("| Case | Status | Successor | Entry | Edge | Missing |\n")
        handle.write("| --- | --- | --- | ---: | --- | --- |\n")
        for row in rows:
            handle.write(
                f"| `{row['case_state']}` | `{row['status']}` | `{row['successor_vm_ip']}` | "
                f"{row['successor_entry'] or '-1'} | `{row['edge_kind']}` | `{row['missing']}` |\n"
            )
        handle.write("\n")
        ready = sum(1 for row in rows if row["status"] == "ready_for_mba_reduction")
        handle.write(f"- Concrete successor reductions emitted: `{len(rows)}` / `{len(rows)}` cases\n")
        handle.write(f"- Cases with complete stateful formula inputs: `{ready}` / `{len(rows)}` cases\n")
        handle.write("- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.\n")

    print(f"program={args.program:03d} reduced_cases={len(rows)} out={c_path}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
