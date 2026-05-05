#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter
from pathlib import Path


def read_tsv(path):
    path = Path(path)
    if not path.exists():
        return []
    with path.open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def parse_hex(text):
    if not text:
        return 0
    return int(text, 16)


def merge_intervals(intervals):
    if not intervals:
        return []
    merged = []
    for start, end in sorted(intervals):
        if not merged or start > merged[-1][1]:
            merged.append([start, end])
        elif end > merged[-1][1]:
            merged[-1][1] = end
    return [(start, end) for start, end in merged]


def interval_bytes(intervals):
    return sum(end - start for start, end in merge_intervals(intervals))


def compact_counter(counter):
    return ", ".join(f"{key}:{value}" for key, value in counter.most_common())


def add(rows, scope, metric, value, note):
    rows.append({
        "scope": scope,
        "metric": metric,
        "value": str(value),
        "note": note,
    })


def dynamic_metrics(rows, trace_dir):
    trace = read_tsv(trace_dir / "vm_instruction_trace.tsv")
    sources = set()
    targets = set()
    starts = set()
    intervals = []
    for row in trace:
        if row.get("source_entry"):
            sources.add(row["source_entry"])
        if row.get("target_entry"):
            targets.add(row["target_entry"])
        if row.get("start_vm_ip"):
            starts.add(row["start_vm_ip"])
        try:
            start = parse_hex(row.get("start_vm_ip", ""))
            end = parse_hex(row.get("end_vm_ip", ""))
        except ValueError:
            continue
        if end > start:
            intervals.append((start, end))

    add(rows, "dynamic_primary_trace", "instruction_rows", len(trace),
        "Executed VM instruction rows in the primary run.")
    add(rows, "dynamic_primary_trace", "source_handlers_seen", len(sources),
        "Handlers directly executed as VM source entries by this scenario.")
    add(rows, "dynamic_primary_trace", "target_handlers_seen", len(targets),
        "Handlers reached as dispatch targets by this scenario.")
    add(rows, "dynamic_primary_trace", "unique_vm_ip_starts", len(starts),
        "Distinct VM bytecode starts observed in this scenario.")
    add(rows, "dynamic_primary_trace", "covered_byte_ranges", len(merge_intervals(intervals)),
        "Merged dynamic bytecode intervals from start/end VM IP.")
    add(rows, "dynamic_primary_trace", "covered_bytes", f"0x{interval_bytes(intervals):x}",
        "Scenario-specific byte coverage; not a full-program proof.")
    return sources, targets, starts


def static_metrics(rows, trace_dir, sources):
    handler_table = read_tsv(trace_dir / "vm_handler_table.tsv")
    handler_semantics = read_tsv(trace_dir / "vm_handler_semantics.tsv")
    transition_model = read_tsv(trace_dir / "vm_transition_model.tsv")
    state_slices = read_tsv(trace_dir / "vm_state_static_slice.tsv")
    microcode = read_tsv(trace_dir / "vm_microcode_catalog.tsv")
    handler_c = trace_dir / "vm_handlers_pseudocode.c"

    observed_targets = Counter(row.get("observed_target", "") for row in handler_table)
    observations = Counter(row.get("observation", "") for row in handler_semantics)
    handler_classes = Counter()
    handler_functions = 0
    if handler_c.exists():
        text = handler_c.read_text(errors="replace")
        handler_functions = len(re.findall(r"^static VMOpResult op_entry_\d{3}\(", text, re.M))
        handler_classes.update(re.findall(r"class=([a-z0-9_]+)", text))

    add(rows, "static_handler_inventory", "dispatch_entries", len(handler_table),
        "Rows in the dispatch-table handler inventory.")
    add(rows, "static_handler_inventory", "entries_with_dynamic_source_events", len(sources),
        "Subset of dispatch entries directly executed as sources in the primary trace.")
    add(rows, "static_handler_inventory", "entries_seen_as_targets", observed_targets.get("1", 0),
        "Dispatch entries reached as targets by the primary trace.")
    add(rows, "static_handler_inventory", "entries_not_seen_as_targets", observed_targets.get("0", 0),
        "Entries still inventoried statically despite no target hit in the primary trace.")
    add(rows, "static_handler_inventory", "handler_observation_mix", compact_counter(observations),
        "Dynamic observation class joined with static handler features.")
    add(rows, "static_handler_inventory", "static_state_slice_entries", len(state_slices),
        "Static state/flag slices over native handler code.")
    add(rows, "static_handler_inventory", "transition_model_entries", len(transition_model),
        "One consolidated reconstruction row per dispatch entry.")
    add(rows, "static_handler_inventory", "microcode_entries", len(microcode),
        "One compact pseudo-IR row per dispatch entry.")
    add(rows, "static_handler_inventory", "handler_pseudocode_functions", handler_functions,
        "C-like op_entry_NNN functions emitted for dispatch entries.")
    add(rows, "static_handler_inventory", "handler_pseudocode_classes", compact_counter(handler_classes),
        "Recovery class mix in the all-entry handler pseudocode.")


def program_metrics(rows, trace_dir):
    bytecode_ir = read_tsv(trace_dir / "vm_bytecode_ir.tsv")
    basic_blocks = read_tsv(trace_dir / "vm_bytecode_basic_blocks.tsv")
    block_edges = read_tsv(trace_dir / "vm_bytecode_basic_block_edges.tsv")
    program_c = trace_dir / "vm_program_pseudocode_full.c"

    row_kinds = Counter(row.get("row_kind", "") for row in bytecode_ir)
    terminal_kinds = Counter(row.get("terminal_kind", "") for row in basic_blocks)
    edge_kinds = Counter(row.get("edge_kind", "") for row in block_edges)
    program_blocks = 0
    if program_c.exists():
        text = program_c.read_text(errors="replace")
        program_blocks = len(re.findall(r"^static void prog_bb_\d{4}\(", text, re.M))

    add(rows, "bytecode_program_layer", "vm_ir_rows", len(bytecode_ir),
        "Recovered VM program rows used by the block/program pseudocode layer.")
    add(rows, "bytecode_program_layer", "vm_ir_row_kinds", compact_counter(row_kinds),
        "Exact rows plus decoded sampled/control sidecars.")
    add(rows, "bytecode_program_layer", "basic_blocks", len(basic_blocks),
        "Recovered VM basic blocks from the available bytecode slice.")
    add(rows, "bytecode_program_layer", "program_pseudocode_blocks", program_blocks,
        "C-like prog_bb_NNNN functions in the full program sketch.")
    add(rows, "bytecode_program_layer", "block_terminal_kinds", compact_counter(terminal_kinds),
        "How recovered blocks terminate.")
    add(rows, "bytecode_program_layer", "block_edge_kinds", compact_counter(edge_kinds),
        "Decoded, direct fallthrough, and covered synthetic fallthrough edges.")


def validation_metrics(rows, trace_dir):
    transition_model = read_tsv(trace_dir / "vm_transition_model.tsv")
    state_100 = 0
    state_events = 0
    dispatch_100 = 0
    dispatch_events = 0
    for row in transition_model:
        events = int(row.get("observed_events") or 0)
        if row.get("state_static_pct") == "100.0":
            state_100 += 1
            state_events += events
        if row.get("static_dispatch_pct") == "100.0" and row.get("static_ip_pct") == "100.0":
            dispatch_100 += 1
            dispatch_events += events
    add(rows, "validated_static_model", "state_static_100pct_handlers", state_100,
        f"Handlers whose static state slice matched all validated state-trace rows; events={state_events}.")
    add(rows, "validated_static_model", "dispatch_ip_static_100pct_handlers", dispatch_100,
        f"Handlers whose static dispatch/IP slice matched all validated state-trace rows; events={dispatch_events}.")


def build_rows(args):
    trace_dir = Path(args.trace_dir)
    rows = []
    sources, _targets, _starts = dynamic_metrics(rows, trace_dir)
    static_metrics(rows, trace_dir, sources)
    program_metrics(rows, trace_dir)
    validation_metrics(rows, trace_dir)
    add(rows, "caveat", "dynamic_bytecode_globality", "not_proven",
        "The handler layer is global over the dispatch table; the bytecode/CFG layer remains scenario/path coverage plus file-backed and decoded sidecars.")
    return rows


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=["scope", "metric", "value", "note"], delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    print("# Static Vs Dynamic Coverage Audit\n")
    print("This separates the global/static handler reconstruction from scenario-specific dynamic bytecode coverage.\n")
    print("| Scope | Metric | Value | Note |")
    print("| --- | --- | ---: | --- |")
    for row in rows:
        print(f"| `{row['scope']}` | `{row['metric']}` | `{row['value']}` | {row['note']} |")
    print("\nBottom line: the all-entry handler/operator layer is not limited to the blocked-network run. The recovered VM bytecode program layer still is not a proof of every possible program path.")


def main():
    parser = argparse.ArgumentParser(description="Audit static/global versus dynamic/path VM reconstruction coverage.")
    parser.add_argument("--trace-dir", default="dumps/vmtail-wide-1m-w16")
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"static_coverage_audit_rows={len(rows)} trace_dir={args.trace_dir}", file=sys.stderr)


if __name__ == "__main__":
    main()
