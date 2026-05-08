#!/usr/bin/env python3
"""Collect the static and dynamic evidence needed for batch MBA reduction."""

from __future__ import annotations

import argparse
import csv
import re
from collections import Counter, defaultdict
from pathlib import Path


TRACE_PREFERENCE = [
    "vm_instruction_trace.tsv",
    "vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv",
]
VAR_RE = re.compile(r"\b(?:state0|flags0|u16_[0-9]+|b[0-9]+)\b")
CONST_RE = re.compile(r"0x[0-9a-fA-F]+")
BYTE_COLUMNS = [f"b{index}" for index in range(16)]
WORD_COLUMNS = [f"u16_{offset}" for offset in range(16)]


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


def norm_hex(text: str | None) -> str:
    value = (text or "").strip()
    if not value:
        return ""
    return f"0x{parse_int(value):x}"


def split_multi(text: str, separators: tuple[str, ...] = (";", ",", "||")) -> list[str]:
    parts = [text or ""]
    for sep in separators:
        next_parts: list[str] = []
        for part in parts:
            next_parts.extend(part.split(sep))
        parts = next_parts
    return [part.strip() for part in parts if part.strip()]


def join_limited(values: list[str] | set[str], limit: int = 24) -> str:
    ordered = sorted(set(values), key=lambda value: (parse_int(value), value))
    visible = ordered[:limit]
    suffix = f";...+{len(ordered) - limit}" if len(ordered) > limit else ""
    return ";".join(visible) + suffix


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 140 else cell[:137] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def bytes_to_values(hex_bytes: str) -> dict[str, str]:
    clean = re.sub(r"[^0-9a-fA-F]", "", hex_bytes or "")
    try:
        data = bytes.fromhex(clean)
    except ValueError:
        data = b""
    values: dict[str, str] = {}
    for index in range(16):
        values[f"b{index}"] = f"0x{data[index]:02x}" if index < len(data) else ""
    for offset in range(16):
        key = f"u16_{offset}"
        if offset + 1 < len(data):
            values[key] = f"0x{data[offset] | (data[offset + 1] << 8):04x}"
        else:
            values[key] = ""
    return values


def variables(text: str) -> set[str]:
    return set(VAR_RE.findall(text or ""))


def constants(text: str) -> set[str]:
    return {f"0x{int(value, 16):x}" for value in CONST_RE.findall(text or "")}


def operator_summary(text: str) -> str:
    counter = Counter()
    for token in ["mask32", "<<", ">>", "&", "|", "^", "~", "+", "-", "*"]:
        counter[token] = (text or "").count(token)
    return ";".join(f"{key}:{value}" for key, value in counter.items() if value)


def formula_text(catalog_row: dict[str, str], op_rows: list[dict[str, str]], field: str, fallback: str) -> str:
    value = catalog_row.get(field, "")
    if value:
        return value
    snippets = [row.get(fallback, "") for row in op_rows if row.get(fallback)]
    return snippets[0] if snippets else ""


def add_sample(samples: list[str], value: str, limit: int = 8) -> None:
    if value and value not in samples and len(samples) < limit:
        samples.append(value)


def trace_stats(root: Path, problem_sources: set[str]) -> tuple[dict[str, dict[str, object]], Counter[str], Counter[str]]:
    stats: dict[str, dict[str, object]] = defaultdict(
        lambda: {
            "trace_rows": 0,
            "trace_files": Counter(),
            "start_vm_ips": set(),
            "target_entries": set(),
            "byte_samples": [],
            "pre_state_samples": [],
            "pre_flags_samples": [],
            "post_state_samples": [],
            "post_flags_samples": [],
        }
    )
    primary_start_counts: Counter[str] = Counter()
    max_start_counts: Counter[str] = Counter()
    trace_paths = [root / name for name in TRACE_PREFERENCE if (root / name).exists()]
    if not trace_paths:
        return stats, primary_start_counts, max_start_counts

    primary_name = trace_paths[0].name
    max_name = trace_paths[-1].name
    for path in trace_paths:
        with path.open(newline="") as handle:
            for row in csv.DictReader(handle, delimiter="\t"):
                source = row.get("source_entry", "")
                if source not in problem_sources:
                    continue
                start = norm_hex(row.get("start_vm_ip"))
                if path.name == primary_name:
                    primary_start_counts[start] += 1
                if path.name == max_name:
                    max_start_counts[start] += 1
                entry = stats[source]
                entry["trace_rows"] = int(entry["trace_rows"]) + 1
                entry["trace_files"][path.name] += 1
                entry["start_vm_ips"].add(start)
                if row.get("target_entry"):
                    entry["target_entries"].add(row["target_entry"])
                add_sample(entry["byte_samples"], row.get("bytes", ""))
                add_sample(entry["pre_state_samples"], row.get("pre_state", ""))
                add_sample(entry["pre_flags_samples"], row.get("pre_flags", ""))
                add_sample(entry["post_state_samples"], row.get("post_state", ""))
                add_sample(entry["post_flags_samples"], row.get("post_flags", ""))
    return stats, primary_start_counts, max_start_counts


def required_inputs(vars_: set[str]) -> str:
    requirements: list[str] = []
    if "state0" in vars_:
        requirements.append("pre_state")
    if "flags0" in vars_:
        requirements.append("pre_flags")
    byte_vars = sorted(var for var in vars_ if var.startswith("b") or var.startswith("u16_"))
    if byte_vars:
        requirements.append("raw_vm_bytes:" + ",".join(byte_vars))
    return ";".join(requirements) if requirements else "none"


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    catalog_path = root / "vm_semantic_opcode_catalog.tsv"
    readable_ops_path = root / "vm_program_readable_ops.tsv"
    refs_path = root / "vm_native_side_effect_vm_refs.tsv"
    for path in [catalog_path, readable_ops_path, refs_path]:
        if not path.exists():
            raise SystemExit(f"missing input: {path}")

    catalog = read_tsv(catalog_path)
    readable_ops = read_tsv(readable_ops_path)
    refs = read_tsv(refs_path)
    catalog_by_source = {row["source_entry"]: row for row in catalog}
    ops_by_source: dict[str, list[dict[str, str]]] = defaultdict(list)
    for row in readable_ops:
        ops_by_source[row["source_entry"]].append(row)

    needs_catalog = {
        row["source_entry"]
        for row in catalog
        if "needs_algebraic_simplification" in row.get("readability_status", "")
        or row.get("dispatch_slot_kind") == "slot_unknown"
    }
    needs_rows = {
        row["source_entry"]
        for row in readable_ops
        if row.get("unresolved") != "none" or row.get("operation_family") == "unresolved_dispatch"
    }
    problem_sources = needs_catalog | needs_rows
    trace_by_source, primary_start_counts, max_start_counts = trace_stats(root, problem_sources)

    refs_by_source: Counter[str] = Counter(row.get("source_entry", "") for row in refs)
    ref_categories_by_source: dict[str, set[str]] = defaultdict(set)
    for row in refs:
        ref_categories_by_source[row.get("source_entry", "")].update(split_multi(row.get("categories", "")))

    inventory_rows: list[dict[str, object]] = []
    atom_rows: list[dict[str, object]] = []
    trace_rows: list[dict[str, object]] = []
    observation_rows: list[dict[str, object]] = []

    for source in sorted(problem_sources, key=parse_int):
        cat = catalog_by_source.get(source, {})
        rows = ops_by_source.get(source, [])
        state_formula = formula_text(cat, rows, "state_effect_ir", "state_semantics")
        dispatch_formula = formula_text(cat, rows, "dispatch_slot_ir", "dispatch_semantics")
        combined_formula = "\n".join(part for part in [state_formula, dispatch_formula] if part)
        vars_ = variables(combined_formula)
        consts = constants(combined_formula)
        trace = trace_by_source.get(source, {})
        programs = {row.get("program", "") for row in rows if row.get("program")}
        target_entries = {row.get("target_entry", "") for row in rows if row.get("target_entry")}
        op_families = Counter(row.get("operation_family", "") for row in rows)
        unresolved = Counter(row.get("unresolved", "") for row in rows)
        problem_kind = "algebraic_mba"
        if any(row.get("operation_family") == "unresolved_dispatch" for row in rows) or cat.get("dispatch_slot_kind") == "slot_unknown":
            problem_kind = "dispatch_unknown"
        elif source in needs_rows - needs_catalog:
            problem_kind = "row_level_unresolved"
        status = "ready_for_symbolic_reduction" if rows else "missing_observation_rows"
        if problem_kind == "dispatch_unknown":
            status = "needs_dispatch_resolution_or_trace"

        inventory_rows.append(
            {
                "source_entry": source,
                "source_target": cat.get("source_target", ""),
                "opcode_name": cat.get("opcode_name", rows[0].get("opcode_name", "") if rows else ""),
                "problem_kind": problem_kind,
                "status": status,
                "readability_status": cat.get("readability_status", ""),
                "operation_family_mix": ";".join(f"{key}:{count}" for key, count in op_families.most_common() if key),
                "unresolved_mix": ";".join(f"{key}:{count}" for key, count in unresolved.most_common() if key),
                "dispatch_slot_kind": cat.get("dispatch_slot_kind", ""),
                "state_kind": cat.get("state_kind", ""),
                "delta": cat.get("delta", ""),
                "shape": cat.get("shape", ""),
                "word_shape": cat.get("word_shape", ""),
                "operand_layout": cat.get("operand_layout", ""),
                "word_layout": cat.get("word_layout", ""),
                "programs": join_limited(programs),
                "program_count": len(programs),
                "observation_rows": len(rows),
                "target_entries": join_limited(target_entries),
                "target_entry_count": len(target_entries),
                "trace_rows": trace.get("trace_rows", 0),
                "trace_files": ";".join(f"{key}:{value}" for key, value in trace.get("trace_files", Counter()).most_common()),
                "dynamic_start_vm_ip_count": len(trace.get("start_vm_ips", set())),
                "exact_string_refs": refs_by_source.get(source, 0),
                "side_effect_categories": join_limited(ref_categories_by_source.get(source, set())),
                "formula_variables": join_limited(vars_),
                "formula_constants": join_limited(consts),
                "required_inputs": required_inputs(vars_),
                "operator_summary": operator_summary(combined_formula),
                "state_formula": state_formula,
                "dispatch_formula": dispatch_formula,
                "next_step": "simplify_to_c_expression_or_table" if status == "ready_for_symbolic_reduction" else "collect_missing_dispatch_targets",
            }
        )

        atom_rows.append(
            {
                "source_entry": source,
                "opcode_name": inventory_rows[-1]["opcode_name"],
                "problem_kind": problem_kind,
                "variables": join_limited(vars_),
                "constants": join_limited(consts, 80),
                "constant_count": len(consts),
                "operator_summary": operator_summary(combined_formula),
                "requires_state": int("state0" in vars_),
                "requires_flags": int("flags0" in vars_),
                "requires_operands": ",".join(sorted(var for var in vars_ if var.startswith("b") or var.startswith("u16_"))),
                "state_formula": state_formula,
                "dispatch_formula": dispatch_formula,
            }
        )

        trace_files = trace.get("trace_files", Counter())
        trace_rows.append(
            {
                "source_entry": source,
                "opcode_name": inventory_rows[-1]["opcode_name"],
                "problem_kind": problem_kind,
                "trace_rows": trace.get("trace_rows", 0),
                "trace_files": ";".join(f"{key}:{value}" for key, value in trace_files.most_common()),
                "dynamic_start_vm_ips": join_limited(trace.get("start_vm_ips", set())),
                "dynamic_target_entries": join_limited(trace.get("target_entries", set())),
                "pre_state_samples": ";".join(trace.get("pre_state_samples", [])),
                "pre_flags_samples": ";".join(trace.get("pre_flags_samples", [])),
                "post_state_samples": ";".join(trace.get("post_state_samples", [])),
                "post_flags_samples": ";".join(trace.get("post_flags_samples", [])),
                "byte_samples": ";".join(trace.get("byte_samples", [])),
                "required_inputs": required_inputs(vars_),
                "capture_status": "has_state_samples" if trace.get("pre_state_samples") or trace.get("pre_flags_samples") else "no_state_samples_in_current_traces",
            }
        )

    for row in readable_ops:
        source = row["source_entry"]
        if source not in problem_sources:
            continue
        byte_values = bytes_to_values(row.get("bytes", ""))
        observation_rows.append(
            {
                "program": row.get("program", ""),
                "start_vm_ip": row.get("start_vm_ip", ""),
                "end_vm_ip": row.get("end_vm_ip", ""),
                "source_block": row.get("source_block", ""),
                "source_entry": source,
                "opcode_name": row.get("opcode_name", ""),
                "bytes": row.get("bytes", ""),
                **byte_values,
                "target_entry": row.get("target_entry", ""),
                "target": row.get("target", ""),
                "delta": row.get("delta", ""),
                "primary_trace_count": primary_start_counts.get(norm_hex(row.get("start_vm_ip")), 0),
                "max_trace_count": max_start_counts.get(norm_hex(row.get("start_vm_ip")), 0),
                "operation_family": row.get("operation_family", ""),
                "readability_grade": row.get("readability_grade", ""),
                "state_semantics": row.get("state_semantics", ""),
                "dispatch_semantics": row.get("dispatch_semantics", ""),
                "ip_semantics": row.get("ip_semantics", ""),
                "string_ref_indexes": row.get("string_ref_indexes", ""),
                "string_refs": row.get("string_refs", ""),
                "side_effect_categories": row.get("side_effect_categories", ""),
                "unresolved": row.get("unresolved", ""),
            }
        )

    inventory_fields = [
        "source_entry",
        "source_target",
        "opcode_name",
        "problem_kind",
        "status",
        "readability_status",
        "operation_family_mix",
        "unresolved_mix",
        "dispatch_slot_kind",
        "state_kind",
        "delta",
        "shape",
        "word_shape",
        "operand_layout",
        "word_layout",
        "programs",
        "program_count",
        "observation_rows",
        "target_entries",
        "target_entry_count",
        "trace_rows",
        "trace_files",
        "dynamic_start_vm_ip_count",
        "exact_string_refs",
        "side_effect_categories",
        "formula_variables",
        "formula_constants",
        "required_inputs",
        "operator_summary",
        "state_formula",
        "dispatch_formula",
        "next_step",
    ]
    atom_fields = [
        "source_entry",
        "opcode_name",
        "problem_kind",
        "variables",
        "constants",
        "constant_count",
        "operator_summary",
        "requires_state",
        "requires_flags",
        "requires_operands",
        "state_formula",
        "dispatch_formula",
    ]
    trace_fields = [
        "source_entry",
        "opcode_name",
        "problem_kind",
        "trace_rows",
        "trace_files",
        "dynamic_start_vm_ips",
        "dynamic_target_entries",
        "pre_state_samples",
        "pre_flags_samples",
        "post_state_samples",
        "post_flags_samples",
        "byte_samples",
        "required_inputs",
        "capture_status",
    ]
    observation_fields = [
        "program",
        "start_vm_ip",
        "end_vm_ip",
        "source_block",
        "source_entry",
        "opcode_name",
        "bytes",
        *BYTE_COLUMNS,
        *WORD_COLUMNS,
        "target_entry",
        "target",
        "delta",
        "primary_trace_count",
        "max_trace_count",
        "operation_family",
        "readability_grade",
        "state_semantics",
        "dispatch_semantics",
        "ip_semantics",
        "string_ref_indexes",
        "string_refs",
        "side_effect_categories",
        "unresolved",
    ]

    inventory_path = root / "vm_mba_problem_inventory.tsv"
    observation_path = root / "vm_mba_observation_rows.tsv"
    atom_path = root / "vm_mba_formula_atoms.tsv"
    trace_path = root / "vm_mba_trace_inputs.tsv"
    md_path = root / "vm_mba_solution_corpus.md"
    write_tsv(inventory_path, inventory_rows, inventory_fields)
    write_tsv(observation_path, observation_rows, observation_fields)
    write_tsv(atom_path, atom_rows, atom_fields)
    write_tsv(trace_path, trace_rows, trace_fields)

    kind_counts = Counter(row["problem_kind"] for row in inventory_rows)
    status_counts = Counter(row["status"] for row in inventory_rows)
    md_path.write_text(
        "\n".join(
            [
                "# MBA Solution Corpus",
                "",
                "This is the batch input set for reducing the remaining VM mixed-boolean arithmetic and unknown dispatch expressions. It preserves raw operands, formulas, observed row targets, exact string/data refs, and dynamic trace coverage by source entry.",
                "",
                "## Summary",
                "",
                markdown_table(
                    ["metric", "value"],
                    [
                        ["problem source entries", len(inventory_rows)],
                        ["catalog entries needing algebra", len(needs_catalog)],
                        ["row-level unresolved source entries", len(needs_rows)],
                        ["observation rows", len(observation_rows)],
                        ["formula atom rows", len(atom_rows)],
                        ["trace input rows", len(trace_rows)],
                        ["problem kinds", "; ".join(f"{key}:{value}" for key, value in kind_counts.items())],
                        ["statuses", "; ".join(f"{key}:{value}" for key, value in status_counts.items())],
                    ],
                ),
                "",
                "## Files",
                "",
                markdown_table(
                    ["file", "purpose"],
                    [
                        [inventory_path, "one row per MBA/problematic source entry with formulas, variables, constants, target set, and required inputs"],
                        [observation_path, "one row per static VM instruction observation for those source entries, including b0..b5/u16 operands and dynamic trace counts"],
                        [atom_path, "formula variable/constant/operator extraction for symbolic simplification"],
                        [trace_path, "dynamic trace samples and pre/post state availability by source entry"],
                    ],
                ),
                "",
                "## How to read the existing `*_mba_reduced.c` tables",
                "",
                "Rows such as `case_state -> successor_vm_ip` are not final program behavior. They are solved synthetic dispatcher edges. The `raw_u16_*` columns are the concrete VM bytes/words available to an MBA expression, and `observed_pre_state`/`observed_pre_flags` are runtime inputs needed when the expression depends on VM state.",
                "",
                "## Caveat",
                "",
                "This corpus is evidence collection, not final reduction. Entries with `needs_dispatch_resolution_or_trace` still require a dispatch proof or focused trace; entries with `ready_for_symbolic_reduction` have enough static row evidence to attempt automated algebraic simplification.",
            ]
        )
        + "\n"
    )

    print(f"mba_problem_entries={len(inventory_rows)}")
    print(f"mba_observation_rows={len(observation_rows)}")
    print(f"mba_formula_atom_rows={len(atom_rows)}")
    print(f"mba_trace_input_rows={len(trace_rows)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
