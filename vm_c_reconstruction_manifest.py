#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


ARTIFACTS = [
    ("handlers_all", TRACE_DIR / "vm_handlers_pseudocode.c"),
    ("path_handlers_all", TRACE_DIR / "vm_path_handlers_pseudocode.c"),
    ("direct_blocks_top", TRACE_DIR / "vm_pseudocode_top.c"),
    ("program_blocks_top", TRACE_DIR / "vm_program_pseudocode_top.c"),
    ("program_blocks_full", TRACE_DIR / "vm_program_pseudocode_full.c"),
    ("source_bundle", TRACE_DIR / "vm_recovered_source_bundle.c"),
    ("synthetic_successor_gaps_tsv", TRACE_DIR / "vm_synthetic_successor_gaps.tsv"),
    ("synthetic_successor_gaps_md", TRACE_DIR / "vm_synthetic_successor_gaps.md"),
    ("synthetic_gap_transfer_probe_tsv", TRACE_DIR / "vm_synthetic_gap_transfer_probe.tsv"),
    ("synthetic_gap_transfer_probe_md", TRACE_DIR / "vm_synthetic_gap_transfer_probe.md"),
    ("synthetic_gap_dynamic_stitch_tsv", TRACE_DIR / "vm_synthetic_gap_dynamic_stitch.tsv"),
    ("synthetic_gap_dynamic_stitch_md", TRACE_DIR / "vm_synthetic_gap_dynamic_stitch.md"),
    ("synthetic_gap_symbolic_successors_tsv", TRACE_DIR / "vm_synthetic_gap_symbolic_successors.tsv"),
    ("synthetic_gap_symbolic_successors_md", TRACE_DIR / "vm_synthetic_gap_symbolic_successors.md"),
    ("synthetic_gap_live_in_roles_tsv", TRACE_DIR / "vm_synthetic_gap_live_in_roles.tsv"),
    ("synthetic_gap_live_in_roles_md", TRACE_DIR / "vm_synthetic_gap_live_in_roles.md"),
    ("trace_coverage_matrix_tsv", TRACE_DIR / "vm_trace_coverage_matrix.tsv"),
    ("trace_coverage_matrix_md", TRACE_DIR / "vm_trace_coverage_matrix.md"),
    ("static_coverage_audit_tsv", TRACE_DIR / "vm_static_coverage_audit.tsv"),
    ("static_coverage_audit_md", TRACE_DIR / "vm_static_coverage_audit.md"),
]


def read_text(path):
    path = Path(path)
    if not path.exists():
        return ""
    return path.read_text(errors="replace")


def read_tsv(path):
    path = Path(path)
    if not path.exists():
        return []
    with path.open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def add(rows, section, item, value, note):
    rows.append({
        "section": section,
        "item": item,
        "value": str(value),
        "note": note,
    })


def line_count(text):
    if not text:
        return 0
    return text.count("\n")


def file_size(path):
    path = Path(path)
    return path.stat().st_size if path.exists() else 0


def count(pattern, text):
    return len(re.findall(pattern, text, re.M))


def artifact_metrics(rows):
    for name, path in ARTIFACTS:
        text = read_text(path)
        add(rows, "artifact", f"{name}_path", path, "Generated C-like reconstruction artifact.")
        add(rows, "artifact", f"{name}_lines", line_count(text), "Current line count.")
        add(rows, "artifact", f"{name}_bytes", file_size(path), "Current file size in bytes.")


def c_shape_metrics(rows):
    handlers = read_text(TRACE_DIR / "vm_handlers_pseudocode.c")
    path_handlers = read_text(TRACE_DIR / "vm_path_handlers_pseudocode.c")
    direct_top = read_text(TRACE_DIR / "vm_pseudocode_top.c")
    program_top = read_text(TRACE_DIR / "vm_program_pseudocode_top.c")
    program_full = read_text(TRACE_DIR / "vm_program_pseudocode_full.c")
    bundle = read_text(TRACE_DIR / "vm_recovered_source_bundle.c")

    add(rows, "c_shape", "handler_functions", count(r"^static VMOpResult op_entry_\d{3}\(VMState \*vm\) \{", handlers),
        "All-entry handler/operator C functions.")
    add(rows, "c_shape", "path_specialized_functions", count(r"^static VMOpResult path_entry_\d{3}_[0-9a-f]+\(VMState \*vm\) \{", path_handlers),
        "Validated concrete branch-path C functions.")
    add(rows, "c_shape", "direct_top_block_defs", count(r"^static void bb_\d{4}\(VMState \*vm\) \{", direct_top),
        "Direct compact block functions.")
    add(rows, "c_shape", "direct_top_block_calls", count(r"^    bb_\d{4}\(vm\);$", direct_top),
        "Concrete block calls in the compact direct sketch.")
    add(rows, "c_shape", "program_top_block_defs", count(r"^static void prog_bb_\d{4}\(VMState \*vm, uint64_t vm_ip\) \{", program_top),
        "Program-layer compact block functions.")
    add(rows, "c_shape", "program_top_block_calls", count(r"^    prog_bb_\d{4}\(vm, vm_ip\);$", program_top),
        "Concrete block calls in the compact handler-call sketch.")
    add(rows, "c_shape", "program_full_block_defs", count(r"^static void prog_bb_\d{4}\(VMState \*vm, uint64_t vm_ip\) \{", program_full),
        "Full recovered VM basic-block functions.")
    add(rows, "c_shape", "program_full_block_prototypes", count(r"^static void prog_bb_\d{4}\(VMState \*vm, uint64_t vm_ip\);$", program_full),
        "Forward declarations enabling non-linear CFG calls.")
    add(rows, "c_shape", "program_full_op_calls", count(r"\br = op_entry_\d{3}\(vm\);", program_full),
        "Recovered bytecode operations rendered as handler calls.")
    add(rows, "c_shape", "program_full_next_fallbacks", count(r"next_entry = \(r\.next_entry >= 0\) \? r\.next_entry : \d+;", program_full),
        "Observed next-entry fallback assignments for exact rows.")
    add(rows, "c_shape", "program_full_block_calls", count(r"^    prog_bb_\d{4}\(vm, vm_ip\);$", program_full),
        "Concrete block-to-block calls in the full program sketch.")
    add(rows, "c_shape", "program_full_synthetic_successor_calls", count(r"synthetic successor after lifted delta", program_full),
        "Synthetic terminal spans whose lifted delta lands on a recovered block start.")
    add(rows, "c_shape", "program_full_synthetic_successor_gaps", count(r"synthetic successor 0x[0-9a-f]+ is outside this selected sketch", program_full),
        "Synthetic terminal spans whose lifted successor still lacks a recovered block start.")
    add(rows, "c_shape", "program_full_synthetic_gap_unresolved_calls", count(r"^    vm_unresolved_synthetic_tail\(vm, 0x[0-9a-f]+\);$", program_full),
        "Explicit unresolved-tail calls emitted for the remaining synthetic successor gaps.")
    add(rows, "c_shape", "program_full_default_unresolved_fallbacks", count(r"vm_unresolved_synthetic_tail\(vm, vm_ip\);", program_full),
        "Default dispatch fallback for VM IPs outside the recovered block switch.")
    add(rows, "c_shape", "program_full_self_loop_comments", count(r"self-loop edge retained as a CFG comment", program_full),
        "Recovered self-loops intentionally not emitted as direct recursive calls.")
    add(rows, "c_shape", "program_full_synthetic_tail_target_loads", count(r"next_entry = \(int\)U16\(vm->ip", program_full),
        "Executable target-entry loads recovered from synthetic tail schemas.")
    add(rows, "c_shape", "program_full_transfer_probe_evidence_sites", count(r"transfer probe evidence @", program_full),
        "Synthetic gap sites annotated with static transfer-probe evidence.")
    add(rows, "c_shape", "program_full_transfer_probe_comments", count(r"transfer probe: missing_successor=", program_full),
        "Static transfer-probe row comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_dynamic_stitch_evidence_sites", count(r"dynamic stitch evidence @", program_full),
        "Synthetic gap sites annotated with next-hooked-source dynamic stitch evidence.")
    add(rows, "c_shape", "program_full_dynamic_stitch_event_comments", count(r"dynamic stitch: event=", program_full),
        "Dynamic stitch event-instance comments carried into the full program sketch.")
    add(rows, "c_shape", "bundle_block_defs", count(r"^static void prog_bb_\d{4}\(VMState \*vm, uint64_t vm_ip\) \{", bundle),
        "Full program block functions inside the combined source bundle.")
    add(rows, "c_shape", "bundle_block_calls", count(r"^    prog_bb_\d{4}\(vm, vm_ip\);$", bundle),
        "Concrete block-to-block calls inside the combined source bundle.")
    add(rows, "c_shape", "bundle_synthetic_gap_unresolved_calls", count(r"^    vm_unresolved_synthetic_tail\(vm, 0x[0-9a-f]+\);$", bundle),
        "Explicit unresolved-tail calls inside the combined source bundle for remaining synthetic successor gaps.")
    add(rows, "c_shape", "bundle_transfer_probe_evidence_sites", count(r"transfer probe evidence @", bundle),
        "Synthetic gap sites annotated with transfer-probe evidence inside the combined source bundle.")
    add(rows, "c_shape", "bundle_transfer_probe_comments", count(r"transfer probe: missing_successor=", bundle),
        "Static transfer-probe row comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_dynamic_stitch_evidence_sites", count(r"dynamic stitch evidence @", bundle),
        "Synthetic gap sites annotated with dynamic stitch evidence inside the combined source bundle.")
    add(rows, "c_shape", "bundle_dynamic_stitch_event_comments", count(r"dynamic stitch: event=", bundle),
        "Dynamic stitch event-instance comments carried into the combined source bundle.")


def coverage_metrics(rows):
    wanted = {
        ("static_handler_inventory", "dispatch_entries"),
        ("static_handler_inventory", "entries_not_seen_as_targets"),
        ("static_handler_inventory", "handler_pseudocode_functions"),
        ("bytecode_program_layer", "vm_ir_rows"),
        ("bytecode_program_layer", "basic_blocks"),
        ("dynamic_primary_trace", "source_handlers_seen"),
        ("dynamic_primary_trace", "target_handlers_seen"),
        ("dynamic_primary_trace", "unique_vm_ip_starts"),
        ("dynamic_cross_trace", "coverage_matrix_rows"),
        ("dynamic_cross_trace", "instruction_trace_scenarios"),
        ("dynamic_cross_trace", "concrete_instruction_trace_scenarios"),
        ("dynamic_cross_trace", "run_dirs_without_instruction_trace"),
        ("dynamic_cross_trace", "run_dirs_with_tail_mem"),
        ("dynamic_cross_trace", "concrete_runtime_modes_seen"),
        ("dynamic_cross_trace", "max_concrete_source_handlers_seen"),
        ("dynamic_cross_trace", "max_concrete_target_handlers_seen"),
        ("dynamic_cross_trace", "max_concrete_vm_ip_starts_seen"),
        ("dynamic_cross_trace", "union_source_handlers_seen"),
        ("dynamic_cross_trace", "union_target_handlers_seen"),
        ("dynamic_cross_trace", "union_vm_ip_starts_seen"),
        ("dynamic_cross_trace", "concrete_traces_adding_sources_vs_primary"),
        ("dynamic_cross_trace", "concrete_traces_missing_primary_sources"),
        ("validated_static_model", "dispatch_model_100pct_handlers"),
    }
    for row in read_tsv(TRACE_DIR / "vm_static_coverage_audit.tsv"):
        key = (row.get("scope", ""), row.get("metric", ""))
        if key in wanted:
            add(rows, "coverage", f"{key[0]}_{key[1]}", row.get("value", ""), row.get("note", ""))


def synthetic_gap_probe_metrics(rows):
    probe_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_transfer_probe.tsv")
    classes = Counter(row.get("classification", "") for row in probe_rows)
    statuses = Counter(row.get("zero_seed_status", "") for row in probe_rows)
    live_sources = sorted({
        row.get("source_entry", "")
        for row in probe_rows
        if row.get("classification", "") == "live_in_dispatch_regs" and row.get("source_entry", "")
    }, key=lambda value: int(value, 0))

    add(rows, "gap_probe", "synthetic_gap_transfer_probe_rows", len(probe_rows),
        "Rows probed from the remaining synthetic successor gaps.")
    add(rows, "gap_probe", "synthetic_gap_transfer_probe_symbolic_slot_expr", classes.get("symbolic_slot_expr", 0),
        "Gaps whose suffix transfer reduces to a symbolic dispatch-table slot/IP expression.")
    add(rows, "gap_probe", "synthetic_gap_transfer_probe_live_in_dispatch_regs", classes.get("live_in_dispatch_regs", 0),
        "Gaps whose suffix target still depends on live-in central-dispatch GPRs.")
    add(rows, "gap_probe", "synthetic_gap_transfer_probe_zero_seed_ok", statuses.get("ok", 0),
        "Zero-seeded probe paths that reached a concrete dispatch target while preserving symbolic expressions.")
    add(rows, "gap_probe", "synthetic_gap_transfer_probe_zero_seed_unknown_target", statuses.get("unknown_target", 0),
        "Zero-seeded probe paths whose final target could not be concretized.")
    add(rows, "gap_probe", "synthetic_gap_transfer_probe_live_in_sources", ",".join(live_sources) or "-",
        "Source entries represented by the live-in central-dispatch register cases.")


def synthetic_gap_dynamic_stitch_metrics(rows):
    stitch_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_dynamic_stitch.tsv")
    resolutions = Counter(row.get("resolution", "") for row in stitch_rows)
    stitched_starts = {
        row.get("synthetic_start_vm_ip", "")
        for row in stitch_rows
        if row.get("resolution", "") == "dynamic_stitch_to_next_hooked_source" and row.get("synthetic_start_vm_ip", "")
    }
    ambiguous_starts = {
        row.get("synthetic_start_vm_ip", "")
        for row in stitch_rows
        if row.get("resolution", "") == "ambiguous_next_source" and row.get("synthetic_start_vm_ip", "")
    }
    only_ambiguous_starts = sorted(ambiguous_starts - stitched_starts)
    add(rows, "gap_stitch", "synthetic_gap_dynamic_stitch_rows", len(stitch_rows),
        "Event-instance rows stitched from raw VMTAIL order for the remaining synthetic successor gaps.")
    add(rows, "gap_stitch", "synthetic_gap_dynamic_stitch_to_next_hooked_source",
        resolutions.get("dynamic_stitch_to_next_hooked_source", 0),
        "Rows whose next hooked source start is inferred from tail-site, fixed-delta, and byte-match evidence.")
    add(rows, "gap_stitch", "synthetic_gap_dynamic_stitch_ambiguous_next_source",
        resolutions.get("ambiguous_next_source", 0),
        "Rows whose next hooked source could not be inferred with the byte-match gate.")
    add(rows, "gap_stitch", "synthetic_gap_dynamic_stitched_unique_starts", len(stitched_starts),
        "Unique synthetic starts with at least one dynamically stitched next-hooked-source row.")
    add(rows, "gap_stitch", "synthetic_gap_dynamic_ambiguous_unique_starts", len(ambiguous_starts),
        "Unique synthetic starts that still have an ambiguous dynamic stitch row.")
    add(rows, "gap_stitch", "synthetic_gap_dynamic_only_ambiguous_unique_starts", len(only_ambiguous_starts),
        "Unique synthetic starts with no dynamically stitched next-hooked-source row.")
    add(rows, "gap_stitch", "synthetic_gap_dynamic_only_ambiguous_starts", ",".join(only_ambiguous_starts) or "-",
        "Synthetic start IPs that remain only ambiguous in the dynamic stitch report.")


def synthetic_gap_symbolic_successor_metrics(rows):
    symbolic_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_symbolic_successors.tsv")
    status_counts = Counter()
    for row in symbolic_rows:
        for status in (row.get("status", "") or "").split(","):
            if status:
                status_counts[status] += 1
    recovered = [
        row.get("concrete_dest_vm_ip", "")
        for row in symbolic_rows
        if "recovered_exact_entry_match" in (row.get("status", "") or "")
    ]
    uncovered = [
        row.get("concrete_dest_vm_ip", "")
        for row in symbolic_rows
        if "uncovered_dest" in (row.get("status", "") or "")
    ]
    add(rows, "gap_symbolic", "synthetic_gap_symbolic_successor_rows", len(symbolic_rows),
        "Symbolic-slot transfer-probe successor candidates audited against recovered bytecode rows.")
    add(rows, "gap_symbolic", "synthetic_gap_symbolic_recovered_exact_entry_match",
        status_counts.get("recovered_exact_entry_match", 0),
        "Candidate destinations that land on an exact recovered IR row with the predicted source entry.")
    add(rows, "gap_symbolic", "synthetic_gap_symbolic_mid_block_split_needed",
        status_counts.get("mid_block_split_needed", 0),
        "Candidate destinations that are inside a recovered block but not at a current block entry.")
    add(rows, "gap_symbolic", "synthetic_gap_symbolic_uncovered_dest",
        status_counts.get("uncovered_dest", 0),
        "Candidate destinations that do not land in current recovered bytecode coverage.")
    add(rows, "gap_symbolic", "synthetic_gap_symbolic_dynamic_next_end_mismatch",
        status_counts.get("dynamic_next_end_mismatch", 0),
        "Candidate destinations that differ from the next hooked VMTAIL event end IP.")
    add(rows, "gap_symbolic", "synthetic_gap_symbolic_recovered_destinations", ",".join(recovered) or "-",
        "Concrete symbolic-slot destinations already present in recovered IR.")
    add(rows, "gap_symbolic", "synthetic_gap_symbolic_uncovered_destinations", ",".join(uncovered) or "-",
        "Concrete symbolic-slot destinations not yet present in recovered IR.")


def synthetic_gap_live_in_role_metrics(rows):
    role_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_live_in_roles.tsv")
    resolutions = Counter(row.get("resolution", "") for row in role_rows)
    role_classes = Counter()
    missing_sources = sorted({
        row.get("source_entry", "")
        for row in role_rows
        if row.get("resolution") == "missing_gpr_event" and row.get("source_entry", "")
    }, key=lambda value: int(value, 0))
    final_tail_sites = sorted({
        f"{row.get('source_entry')}@{row.get('final_tail_site')}:{row.get('final_tail_target_reg')}"
        for row in role_rows
        if row.get("source_entry") and row.get("final_tail_site")
    }, key=lambda value: (int(value.split("@", 1)[0], 0), value))
    for row in role_rows:
        for cls in row.get("role_classes", "").split(","):
            if cls:
                role_classes[cls] += 1

    add(rows, "gap_live_in", "synthetic_gap_live_in_role_rows", len(role_rows),
        "Live-in synthetic gap transfer-probe rows joined against the GPR/scratch VMTAIL trace.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_gpr_events_found",
        len(role_rows) - resolutions.get("missing_gpr_event", 0),
        "Rows whose synthetic start VM IP was present in the GPR/scratch trace.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_missing_gpr_events", resolutions.get("missing_gpr_event", 0),
        "Rows still requiring a GPR/scratch trace at that synthetic start.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_mem_deref_unresolved",
        resolutions.get("live_regs_named_mem_deref_unresolved", 0),
        "Rows where live registers are named but the target expression still depends on an event-local qword dereference.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_tail_mem_deref_matches",
        resolutions.get("tail_mem_deref_matches_event_target", 0),
        "Rows whose final-tail qword memory read matched the event target handler.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_final_tail_sites",
        ",".join(final_tail_sites) or "-",
        "Native final-tail hook sites needed to resolve the live-in qword dereferences.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_role_class_mix",
        ",".join(f"{key}:{value}" for key, value in role_classes.most_common()) or "-",
        "Register value classes observed in the target expressions.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_missing_gpr_sources", ",".join(missing_sources) or "-",
        "Source entries represented among rows missing a GPR/scratch event at the synthetic start.")


def gate_metrics(rows):
    add(rows, "gate", "syntax_check", "make pseudocode-syntax-check",
        "Regenerates and warning-checks all six C-like source artifacts with C11 -fsyntax-only.")
    add(rows, "gate", "object_check", "make pseudocode-object-check",
        "Codegen-compiles the combined source bundle to /tmp/eacsym-vm_recovered_source_bundle.o.")
    add(rows, "gate", "link_smoke_check", "make pseudocode-link-check",
        "Links the bundle with vm_recovered_source_harness.c and runs the smoke executable.")
    add(rows, "gate", "bundle_object_bytes", file_size("/tmp/eacsym-vm_recovered_source_bundle.o"),
        "Size of the most recent bundle object produced by the object gate.")
    add(rows, "gate", "smoke_executable_bytes", file_size("/tmp/eacsym-vm_recovered_source_smoke"),
        "Size of the most recent linked smoke executable.")


def build_rows():
    rows = []
    artifact_metrics(rows)
    c_shape_metrics(rows)
    coverage_metrics(rows)
    synthetic_gap_probe_metrics(rows)
    synthetic_gap_dynamic_stitch_metrics(rows)
    synthetic_gap_symbolic_successor_metrics(rows)
    synthetic_gap_live_in_role_metrics(rows)
    gate_metrics(rows)
    add(rows, "caveat", "completion_status", "not_complete",
        "This is a mechanically checked C reconstruction of recovered layers, not proof that every VM bytecode path has been found.")
    return rows


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=["section", "item", "value", "note"], delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    print("# C Reconstruction Manifest\n")
    print("Reproducible inventory of the current C-shaped reconstruction artifacts and gates.\n")
    print("| Section | Item | Value | Note |")
    print("| --- | --- | ---: | --- |")
    for row in rows:
        print(f"| `{row['section']}` | `{row['item']}` | `{row['value']}` | {row['note']} |")


def main():
    parser = argparse.ArgumentParser(description="Emit a manifest of C-like VM reconstruction artifacts.")
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()
    rows = build_rows()
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)


if __name__ == "__main__":
    main()
