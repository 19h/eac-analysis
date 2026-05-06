#!/usr/bin/env python3
"""Build an auditable behavior inventory for the recovered ELF/VM program."""

from __future__ import annotations

import argparse
import csv
import re
from collections import Counter, defaultdict
from pathlib import Path
from typing import Iterable


INTERESTING_IMPORT_RE = re.compile(
    r"(socket|connect|send|recv|getaddr|host|dns|open|fopen|read|write|stat|"
    r"opendir|readdir|dlopen|dlsym|pthread|mutex|sem_|fork|exec|system|popen|"
    r"mprotect|ptrace|ioctl|clock|gettime|random|uuid)",
    re.IGNORECASE,
)


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


def parse_int(text: str | int | None) -> int:
    if text is None:
        return 0
    if isinstance(text, int):
        return text
    value = text.strip()
    if not value:
        return 0
    return int(value, 16 if value.startswith("0x") else 10)


def hx(value: int) -> str:
    return f"0x{value:x}"


def counter_text(counter: Counter[str], limit: int = 8) -> str:
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(limit) if key)


def split_counter_text(text: str) -> Counter[str]:
    counter: Counter[str] = Counter()
    for item in (text or "").split(","):
        item = item.strip()
        if not item:
            continue
        if ":" in item:
            key, count = item.rsplit(":", 1)
            try:
                counter[key] += int(count)
            except ValueError:
                counter[item] += 1
        else:
            counter[item] += 1
    return counter


def top_values(values: Iterable[str], limit: int = 8) -> str:
    return counter_text(Counter(value for value in values if value), limit)


def program_for_ip(program_ranges: list[tuple[int, int, str]], ip: int) -> str:
    for start, end, program in program_ranges:
        if start <= ip < end:
            return program
    return ""


def csv_escape_cell(text: object) -> str:
    value = str(text).replace("|", "\\|").replace("\n", " ")
    return value if len(value) <= 120 else value[:117] + "..."


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        lines.append("| " + " | ".join(csv_escape_cell(cell) for cell in row) + " |")
    return "\n".join(lines)


def aggregate_trace_matrix(rows: list[dict[str, str]]) -> dict[str, object]:
    x_modes = sorted({row["run_mode"] for row in rows if row.get("runtime_config", "").startswith("x_mode_") and row.get("run_mode") != ""}, key=int)
    trace_classes = Counter(row.get("trace_class", "") for row in rows)
    configs = Counter(row.get("runtime_config", "") for row in rows)
    network_policies = Counter(row.get("network_policy", "") for row in rows if row.get("network_policy"))
    hosts: Counter[str] = Counter()
    callers: Counter[str] = Counter()
    commands: Counter[str] = Counter()
    trace_rows = 0
    instruction_trace_scenarios = 0
    concrete_instruction_trace_scenarios = 0
    network_events = 0
    network_denied = 0
    network_fake = 0
    spawn_events = 0
    spawn_denied = 0
    for row in rows:
        row_trace = parse_int(row.get("trace_rows", "0"))
        trace_rows += row_trace
        if row_trace:
            instruction_trace_scenarios += 1
            if row.get("trace_class") not in {"synthetic_filled_trace"}:
                concrete_instruction_trace_scenarios += 1
        network_events += parse_int(row.get("network_events", "0"))
        network_denied += parse_int(row.get("network_denied_events", "0"))
        network_fake += parse_int(row.get("network_fake_events", "0"))
        spawn_events += parse_int(row.get("spawn_events", "0"))
        spawn_denied += parse_int(row.get("spawn_denied_events", "0"))
        hosts.update(split_counter_text(row.get("network_hosts", "")))
        callers.update(split_counter_text(row.get("network_callers", "")))
        commands.update(split_counter_text(row.get("spawn_commands", "")))
    return {
        "x_modes": ",".join(x_modes),
        "trace_classes": counter_text(trace_classes, 12),
        "runtime_configs": counter_text(configs, 12),
        "network_policies": counter_text(network_policies, 8),
        "network_hosts": counter_text(hosts, 8),
        "network_callers": counter_text(callers, 8),
        "spawn_commands": counter_text(commands, 8),
        "trace_rows_total_matrix": trace_rows,
        "instruction_trace_scenarios": instruction_trace_scenarios,
        "concrete_instruction_trace_scenarios": concrete_instruction_trace_scenarios,
        "network_events": network_events,
        "network_denied_events": network_denied,
        "network_fake_events": network_fake,
        "spawn_events": spawn_events,
        "spawn_denied_events": spawn_denied,
    }


def load_import_summary(root: Path) -> dict[str, object]:
    path = root / "vm_native_linkage_stubs.tsv"
    if not path.exists():
        return {"interesting_import_count": 0, "interesting_imports": ""}
    imports: Counter[str] = Counter()
    for row in read_tsv(path):
        symbol = row.get("symbol", "")
        if INTERESTING_IMPORT_RE.search(symbol):
            imports[symbol] += 1
    return {
        "interesting_import_count": sum(imports.values()),
        "interesting_imports": counter_text(imports, 40),
    }


def classify_program(row: dict[str, object]) -> tuple[str, str, str]:
    status = ["mechanical_vm_semantics_folded"]
    gaps = ["semantic_intent_unknown"]
    next_actions = ["name repeated VM idioms from handler/state formulas"]
    if parse_int(row.get("string_ref_count")):
        status.append("string_refs_present")
        gaps.append("string_reference_intent_needs_context")
        next_actions.append("propagate string refs to nearby VM operations")
    if parse_int(row.get("folded_external_edges")):
        status.append("cross_program_or_hidden_span_edges")
        gaps.append("cross_program_control_context_needs_callgraph")
        next_actions.append("stitch external edges into whole-program control graph")
    if parse_int(row.get("primary_trace_rows")) == 0:
        status.append("not_seen_in_primary_trace")
        gaps.append("runtime_path_not_primary_observed")
        next_actions.append("cover with alternate mode or static path proof")
    return ";".join(status), ";".join(gaps), ";".join(dict.fromkeys(next_actions))


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    manifest_path = root / "vm_programs_decompiled_folded_manifest.tsv"
    blocks_path = root / "vm_bytecode_basic_blocks.tsv"
    ir_path = root / "vm_bytecode_ir_decompile.tsv"
    trace_path = root / "vm_instruction_trace.tsv"
    coverage_path = root / "vm_trace_coverage_matrix.tsv"
    strings_path = root / "vm_program_folded_string_refs.tsv"
    handlers_path = root / "vm_isa_handlers.tsv"

    required = [manifest_path, blocks_path, ir_path, trace_path, coverage_path, strings_path, handlers_path]
    missing = [str(path) for path in required if not path.exists()]
    if missing:
        raise SystemExit(f"missing inputs: {', '.join(missing)}")

    manifest = read_tsv(manifest_path)
    program_ranges = sorted((parse_int(row["start"]), parse_int(row["end"]), row["program"]) for row in manifest)
    program_rows: dict[str, dict[str, object]] = {}
    for row in manifest:
        program = row["program"]
        program_rows[program] = {
            "program": program,
            "path": row["path"],
            "entrypoint": row["entrypoint"],
            "start": row["start"],
            "end": row["end"],
            "size": row["size"],
            "blocks": parse_int(row["blocks"]),
            "ir_rows": parse_int(row["rows"]),
            "mba_cases": parse_int(row["mba_cases"]),
            "state_inlined": parse_int(row["state_inlined"]),
            "state_summarized": parse_int(row["state_summarized"]),
            "state_preserved": parse_int(row["state_preserved"]),
            "concrete_next_entry": parse_int(row["concrete_next_entry"]),
            "decoded_long_control": parse_int(row["decoded_long_control"]),
            "folded_internal_edges": parse_int(row["folded_internal_edges"]),
            "folded_hidden_span_edges": parse_int(row["folded_hidden_span_edges"]),
            "folded_external_edges": parse_int(row["folded_external_edges"]),
            "primary_trace_rows": 0,
            "primary_trace_unique_ips": 0,
            "primary_trace_kind_mix": "",
            "string_ref_count": 0,
            "strings": "",
            "row_kind_mix": "",
            "edge_kind_mix": "",
            "state_ir_mix": "",
            "byte_status_mix": "",
            "top_source_entries": "",
            "top_target_entries": "",
            "top_primary_trace_sources": "",
            "top_primary_trace_targets": "",
            "mba_ready_cases": 0,
            "mba_missing_cases": 0,
            "mba_edge_kind_mix": "",
            "status": "",
            "semantic_gap": "",
            "next_action": "",
        }

    block_edge_mix: dict[str, Counter[str]] = defaultdict(Counter)
    for row in read_tsv(blocks_path):
        program = program_for_ip(program_ranges, parse_int(row["start_vm_ip"]))
        if program:
            block_edge_mix[program][row.get("edge_kind", "")] += 1

    ir_row_kinds: dict[str, Counter[str]] = defaultdict(Counter)
    ir_state_kinds: dict[str, Counter[str]] = defaultdict(Counter)
    ir_byte_statuses: dict[str, Counter[str]] = defaultdict(Counter)
    ir_sources: dict[str, Counter[str]] = defaultdict(Counter)
    ir_targets: dict[str, Counter[str]] = defaultdict(Counter)
    unmapped_ir_rows = 0
    with ir_path.open(newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        for row in reader:
            program = program_for_ip(program_ranges, parse_int(row["start_vm_ip"]))
            if not program:
                unmapped_ir_rows += 1
                continue
            ir_row_kinds[program][row.get("row_kind", "")] += 1
            ir_state_kinds[program][row.get("state_ir", "")] += 1
            ir_byte_statuses[program][row.get("byte_status", "")] += 1
            ir_sources[program][row.get("source_entry", "")] += 1
            ir_targets[program][row.get("target_entry", "")] += 1

    trace_counts: dict[str, int] = defaultdict(int)
    trace_unique: dict[str, set[int]] = defaultdict(set)
    trace_kinds: dict[str, Counter[str]] = defaultdict(Counter)
    trace_sources: dict[str, Counter[str]] = defaultdict(Counter)
    trace_targets: dict[str, Counter[str]] = defaultdict(Counter)
    trace_unmapped = 0
    with trace_path.open(newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        for row in reader:
            ip = parse_int(row.get("start_vm_ip", "0"))
            program = program_for_ip(program_ranges, ip)
            if not program:
                trace_unmapped += 1
                continue
            trace_counts[program] += 1
            trace_unique[program].add(ip)
            trace_kinds[program][row.get("kind", "")] += 1
            trace_sources[program][row.get("source_entry", "")] += 1
            trace_targets[program][row.get("target_entry", "")] += 1

    string_texts: dict[str, list[str]] = defaultdict(list)
    for row in read_tsv(strings_path):
        program = row.get("program", "")
        text = row.get("text", "")
        if program in program_rows and text not in string_texts[program]:
            string_texts[program].append(text)

    for reduced_path in sorted(root.glob("vm_program_atlas_*_mba_reduced.tsv")):
        match = re.search(r"vm_program_atlas_([0-9]{3})_mba_reduced\.tsv$", reduced_path.name)
        if not match:
            continue
        program = match.group(1)
        if program not in program_rows:
            continue
        edge_counter: Counter[str] = Counter()
        ready = 0
        missing_cases = 0
        for row in read_tsv(reduced_path):
            if row.get("status") == "ready_for_mba_reduction":
                ready += 1
            else:
                missing_cases += 1
            edge_counter[row.get("edge_kind", "")] += 1
        program_rows[program]["mba_ready_cases"] = ready
        program_rows[program]["mba_missing_cases"] = missing_cases
        program_rows[program]["mba_edge_kind_mix"] = counter_text(edge_counter)

    for program, row in program_rows.items():
        row["row_kind_mix"] = counter_text(ir_row_kinds[program])
        row["edge_kind_mix"] = counter_text(block_edge_mix[program])
        row["state_ir_mix"] = counter_text(ir_state_kinds[program])
        row["byte_status_mix"] = counter_text(ir_byte_statuses[program])
        row["top_source_entries"] = counter_text(ir_sources[program])
        row["top_target_entries"] = counter_text(ir_targets[program])
        row["primary_trace_rows"] = trace_counts[program]
        row["primary_trace_unique_ips"] = len(trace_unique[program])
        row["primary_trace_kind_mix"] = counter_text(trace_kinds[program])
        row["top_primary_trace_sources"] = counter_text(trace_sources[program])
        row["top_primary_trace_targets"] = counter_text(trace_targets[program])
        row["string_ref_count"] = len(string_texts[program])
        row["strings"] = "; ".join(string_texts[program][:10])
        status, gap, next_action = classify_program(row)
        row["status"] = status
        row["semantic_gap"] = gap
        row["next_action"] = next_action

    inventory_fields = [
        "program",
        "path",
        "entrypoint",
        "start",
        "end",
        "size",
        "blocks",
        "ir_rows",
        "mba_cases",
        "mba_ready_cases",
        "mba_missing_cases",
        "row_kind_mix",
        "edge_kind_mix",
        "mba_edge_kind_mix",
        "state_ir_mix",
        "byte_status_mix",
        "top_source_entries",
        "top_target_entries",
        "primary_trace_rows",
        "primary_trace_unique_ips",
        "primary_trace_kind_mix",
        "top_primary_trace_sources",
        "top_primary_trace_targets",
        "state_inlined",
        "state_summarized",
        "state_preserved",
        "concrete_next_entry",
        "decoded_long_control",
        "folded_internal_edges",
        "folded_hidden_span_edges",
        "folded_external_edges",
        "string_ref_count",
        "strings",
        "status",
        "semantic_gap",
        "next_action",
    ]
    inventory_rows = [program_rows[row["program"]] for row in manifest]
    inventory_path = root / "vm_behavior_inventory.tsv"
    write_tsv(inventory_path, inventory_rows, inventory_fields)

    coverage_rows = read_tsv(coverage_path)
    x_summary = aggregate_trace_matrix(coverage_rows)
    import_summary = load_import_summary(root)

    handler_rows = read_tsv(handlers_path)
    handler_summary = {
        "handler_rows": len(handler_rows),
        "handler_events": sum(parse_int(row.get("events", "0")) for row in handler_rows),
        "handler_unique_start_ips": sum(parse_int(row.get("unique_start_ips", "0")) for row in handler_rows),
        "dominant_deltas": counter_text(Counter(row.get("dominant_delta", "") for row in handler_rows), 10),
        "dominant_shapes": counter_text(Counter(row.get("dominant_shape", "") for row in handler_rows), 10),
    }

    totals = {
        "programs": len(inventory_rows),
        "blocks": sum(parse_int(row["blocks"]) for row in inventory_rows),
        "ir_rows": sum(parse_int(row["ir_rows"]) for row in inventory_rows),
        "mba_cases": sum(parse_int(row["mba_cases"]) for row in inventory_rows),
        "mba_ready_cases": sum(parse_int(row["mba_ready_cases"]) for row in inventory_rows),
        "mba_missing_cases": sum(parse_int(row["mba_missing_cases"]) for row in inventory_rows),
        "string_refs": sum(parse_int(row["string_ref_count"]) for row in inventory_rows),
        "programs_with_strings": sum(1 for row in inventory_rows if parse_int(row["string_ref_count"])),
        "programs_seen_primary": sum(1 for row in inventory_rows if parse_int(row["primary_trace_rows"])),
        "programs_not_seen_primary": sum(1 for row in inventory_rows if not parse_int(row["primary_trace_rows"])),
        "primary_trace_rows_mapped": sum(parse_int(row["primary_trace_rows"]) for row in inventory_rows),
        "primary_trace_rows_unmapped": trace_unmapped,
        "ir_rows_unmapped": unmapped_ir_rows,
        "external_edges": sum(parse_int(row["folded_external_edges"]) for row in inventory_rows),
        "hidden_span_edges": sum(parse_int(row["folded_hidden_span_edges"]) for row in inventory_rows),
    }

    gap_rows: list[dict[str, object]] = [
        {
            "priority": "P0",
            "requirement": "human-readable intent for every VM bytecode program",
            "current_evidence": f"{totals['programs']} folded C files with {totals['ir_rows']} VM IR rows and {totals['mba_ready_cases']} solved MBA block successors",
            "status": "open",
            "missing": "program-level purpose names and reduced idiom names are not yet assigned",
            "next_action": "cluster repeated VM state formulas and replace structural expressions with named operations",
        },
        {
            "priority": "P0",
            "requirement": "initial x() behavior across environment configurations",
            "current_evidence": f"x modes observed={x_summary['x_modes']}; network_hosts={x_summary['network_hosts']}; policies={x_summary['network_policies']}",
            "status": "partial",
            "missing": "real server responses were not exercised; network behavior is blocked/faked in available traces",
            "next_action": "keep real network disabled, but model request construction and response parsing from static/data evidence",
        },
        {
            "priority": "P0",
            "requirement": "whole-program path coverage, not just no-network execution",
            "current_evidence": f"trace scenarios={x_summary['instruction_trace_scenarios']} concrete={x_summary['concrete_instruction_trace_scenarios']} configs={x_summary['runtime_configs']}",
            "status": "partial",
            "missing": "dynamic globality of every possible bytecode path is not proven",
            "next_action": "stitch static program graph with alternate-mode traces and mark unobserved branches explicitly",
        },
        {
            "priority": "P1",
            "requirement": "string/data role annotation",
            "current_evidence": f"{totals['string_refs']} folded string refs in {totals['programs_with_strings']} programs plus binary data section inventory",
            "status": "partial",
            "missing": "string refs are present but not yet semantically tied to individual VM operations",
            "next_action": "for each referenced string/data item, identify nearby load/use operation and annotate role",
        },
        {
            "priority": "P1",
            "requirement": "native/import side-effect model",
            "current_evidence": f"{import_summary['interesting_import_count']} interesting imported/native linkage stubs: {import_summary['interesting_imports']}",
            "status": "partial",
            "missing": "imports are inventoried but not fully connected to VM bytecode call sites and program intents",
            "next_action": "map VM/native bridges to imported side effects and annotate reads, writes, network, process, and threading behavior",
        },
        {
            "priority": "P1",
            "requirement": "unobfuscated individual VM instruction semantics",
            "current_evidence": f"{handler_summary['handler_rows']} handler entries cataloged; dominant_shapes={handler_summary['dominant_shapes']}",
            "status": "partial",
            "missing": "many handler formulas are still structural MBA expressions rather than named operations",
            "next_action": "reduce handler formulas into a compact VM ISA with named opcodes and operands",
        },
    ]
    gap_path = root / "vm_behavior_gap_register.tsv"
    write_tsv(gap_path, gap_rows, ["priority", "requirement", "current_evidence", "status", "missing", "next_action"])

    md_lines = [
        "# VM Behavior Inventory",
        "",
        "This report is intentionally conservative. The VM control-flow and per-instruction mechanical semantics are recovered into compileable folded C, but the original objective also requires human-readable intent for every VM bytecode program. That higher-level intent remains open and is tracked below.",
        "",
        "## Coverage Checkpoint",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["folded VM programs", totals["programs"]],
                ["VM basic blocks / MBA cases", f"{totals['blocks']} / {totals['mba_cases']}"],
                ["MBA successor cases ready / missing", f"{totals['mba_ready_cases']} / {totals['mba_missing_cases']}"],
                ["VM IR rows", totals["ir_rows"]],
                ["programs seen in primary trace", f"{totals['programs_seen_primary']} / {totals['programs']}"],
                ["mapped primary trace rows", totals["primary_trace_rows_mapped"]],
                ["unmapped primary trace rows", totals["primary_trace_rows_unmapped"]],
                ["string references", f"{totals['string_refs']} refs in {totals['programs_with_strings']} programs"],
                ["external / hidden-span folded edges", f"{totals['external_edges']} / {totals['hidden_span_edges']}"],
            ],
        ),
        "",
        "## x() Entrypoint And Environment Evidence",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["x modes observed", x_summary["x_modes"]],
                ["runtime configs", x_summary["runtime_configs"]],
                ["trace classes", x_summary["trace_classes"]],
                ["instruction trace scenarios", x_summary["instruction_trace_scenarios"]],
                ["concrete instruction trace scenarios", x_summary["concrete_instruction_trace_scenarios"]],
                ["network policies", x_summary["network_policies"]],
                ["network events denied / faked", f"{x_summary['network_denied_events']} / {x_summary['network_fake_events']}"],
                ["network hosts", x_summary["network_hosts"]],
                ["spawn commands", x_summary["spawn_commands"]],
            ],
        ),
        "",
        "## Native Side-Effect Surface",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["interesting imported/linkage stubs", import_summary["interesting_import_count"]],
                ["top imported/linkage stubs", import_summary["interesting_imports"]],
            ],
        ),
        "",
        "## VM Handler/ISA Surface",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["handler entries", handler_summary["handler_rows"]],
                ["handler dynamic events", handler_summary["handler_events"]],
                ["handler unique start IPs", handler_summary["handler_unique_start_ips"]],
                ["dominant deltas", handler_summary["dominant_deltas"]],
                ["dominant shapes", handler_summary["dominant_shapes"]],
            ],
        ),
        "",
        "## Program Ledger",
        "",
        markdown_table(
            [
                "program",
                "range",
                "blocks",
                "rows",
                "primary trace rows",
                "edges",
                "strings",
                "status",
                "next action",
            ],
            [
                [
                    row["program"],
                    f"{row['start']}..{row['end']}",
                    row["blocks"],
                    row["ir_rows"],
                    row["primary_trace_rows"],
                    row["edge_kind_mix"],
                    row["strings"] or "-",
                    row["semantic_gap"],
                    row["next_action"],
                ]
                for row in inventory_rows
            ],
        ),
        "",
        "## Gap Register",
        "",
        markdown_table(
            ["priority", "requirement", "status", "missing", "next action"],
            [[row["priority"], row["requirement"], row["status"], row["missing"], row["next_action"]] for row in gap_rows],
        ),
        "",
        "## Artifacts",
        "",
        f"- Per-program ledger: `{inventory_path}`",
        f"- Gap register: `{gap_path}`",
        "- Folded per-program C files: `dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/`",
        "- Existing folded-C compile audit: `make program-decompiled-folded-audit`",
        "",
    ]
    md_path = root / "vm_behavior_inventory.md"
    md_path.write_text("\n".join(md_lines), encoding="utf-8")

    print(f"wrote {inventory_path}")
    print(f"wrote {gap_path}")
    print(f"wrote {md_path}")
    print(f"programs={totals['programs']} blocks={totals['blocks']} rows={totals['ir_rows']} mba_ready={totals['mba_ready_cases']} gaps={len(gap_rows)}")
    print("objective_status=not_complete_human_intent_open")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
