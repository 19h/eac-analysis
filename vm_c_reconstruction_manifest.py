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
    ("synthetic_gap_chain_probe_tsv", TRACE_DIR / "vm_synthetic_gap_chain_probe.tsv"),
    ("synthetic_gap_chain_probe_md", TRACE_DIR / "vm_synthetic_gap_chain_probe.md"),
    ("synthetic_gap_symbolic_successors_tsv", TRACE_DIR / "vm_synthetic_gap_symbolic_successors.tsv"),
    ("synthetic_gap_symbolic_successors_md", TRACE_DIR / "vm_synthetic_gap_symbolic_successors.md"),
    ("synthetic_gap_live_in_roles_tsv", TRACE_DIR / "vm_synthetic_gap_live_in_roles.tsv"),
    ("synthetic_gap_live_in_roles_md", TRACE_DIR / "vm_synthetic_gap_live_in_roles.md"),
    ("live_in_final_tail_site_probe_tsv", TRACE_DIR / "vm_live_in_final_tail_site_probe.tsv"),
    ("live_in_final_tail_site_probe_md", TRACE_DIR / "vm_live_in_final_tail_site_probe.md"),
    ("synthetic_gap_live_in_reentry_probe_tsv", TRACE_DIR / "vm_synthetic_gap_live_in_reentry_probe.tsv"),
    ("synthetic_gap_live_in_reentry_probe_md", TRACE_DIR / "vm_synthetic_gap_live_in_reentry_probe.md"),
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
    add(rows, "c_shape", "program_full_symbolic_successor_audit_sites", count(r"symbolic successor audit @", program_full),
        "Synthetic gap sites annotated with symbolic-slot successor audit evidence.")
    add(rows, "c_shape", "program_full_symbolic_successor_comments", count(r"symbolic successor: source=", program_full),
        "Symbolic-slot successor candidate comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_hidden_chain_probe_sites", count(r"hidden chain probe @", program_full),
        "Synthetic gap sites annotated with hidden-handler-chain probe evidence.")
    add(rows, "c_shape", "program_full_hidden_chain_comments", count(r"hidden chain: source=", program_full),
        "Hidden-handler-chain candidate comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_hidden_chain_resolved_calls", count(r"hidden source entry_\d+ replayed from", program_full),
        "Hidden-chain matches emitted as concrete handler calls before reentering a recovered block.")
    add(rows, "c_shape", "program_full_live_in_role_evidence_sites", count(r"live-in role evidence @", program_full),
        "Synthetic gap sites annotated with prioritized live-in register role evidence.")
    add(rows, "c_shape", "program_full_live_in_role_comments", count(r"live-in role: source=", program_full),
        "Live-in role row comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_final_tail_site_proof_comments", count(r"final-tail site proof:", program_full),
        "Exact native final-tail site proof comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_live_in_reentry_probe_sites", count(r"live-in reentry probe @", program_full),
        "Synthetic gap sites annotated with joined live-in/dynamic-reentry evidence.")
    add(rows, "c_shape", "program_full_live_in_reentry_comments", count(r"live-in reentry: source=", program_full),
        "Live-in reentry rows carried into the full program sketch.")
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
    add(rows, "c_shape", "bundle_symbolic_successor_audit_sites", count(r"symbolic successor audit @", bundle),
        "Synthetic gap sites annotated with symbolic-slot successor audit evidence inside the combined source bundle.")
    add(rows, "c_shape", "bundle_symbolic_successor_comments", count(r"symbolic successor: source=", bundle),
        "Symbolic-slot successor candidate comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_hidden_chain_probe_sites", count(r"hidden chain probe @", bundle),
        "Synthetic gap sites annotated with hidden-handler-chain probe evidence inside the combined source bundle.")
    add(rows, "c_shape", "bundle_hidden_chain_comments", count(r"hidden chain: source=", bundle),
        "Hidden-handler-chain candidate comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_hidden_chain_resolved_calls", count(r"hidden source entry_\d+ replayed from", bundle),
        "Hidden-chain matches emitted as concrete handler calls inside the combined source bundle.")
    add(rows, "c_shape", "bundle_live_in_role_evidence_sites", count(r"live-in role evidence @", bundle),
        "Synthetic gap sites annotated with prioritized live-in register role evidence inside the combined source bundle.")
    add(rows, "c_shape", "bundle_live_in_role_comments", count(r"live-in role: source=", bundle),
        "Live-in role row comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_final_tail_site_proof_comments", count(r"final-tail site proof:", bundle),
        "Exact native final-tail site proof comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_live_in_reentry_probe_sites", count(r"live-in reentry probe @", bundle),
        "Synthetic gap sites annotated with joined live-in/dynamic-reentry evidence inside the combined source bundle.")
    add(rows, "c_shape", "bundle_live_in_reentry_comments", count(r"live-in reentry: source=", bundle),
        "Live-in reentry rows carried into the combined source bundle.")


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


def synthetic_gap_chain_probe_metrics(rows):
    chain_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_chain_probe.tsv")
    statuses = Counter(row.get("status", "") for row in chain_rows)
    full_matches = [
        f"{row.get('synthetic_start_vm_ip')}->{row.get('hidden_source_entry')}@{row.get('hidden_source_start_vm_ip')}->{row.get('hidden_pred_end_vm_ip')}"
        for row in chain_rows
        if row.get("status", "") == "hidden_chain_matches_next_event"
    ]
    target_only = [
        row.get("synthetic_start_vm_ip", "")
        for row in chain_rows
        if row.get("status", "") == "hidden_chain_target_only"
    ]
    add(rows, "gap_chain", "synthetic_gap_chain_probe_rows", len(chain_rows),
        "Ambiguous dynamic stitch rows replayed through candidate hidden-source handlers.")
    add(rows, "gap_chain", "synthetic_gap_chain_full_matches",
        statuses.get("hidden_chain_matches_next_event", 0),
        "Hidden-chain probes whose predicted target entry and end VM IP both match the next hooked event.")
    add(rows, "gap_chain", "synthetic_gap_chain_target_only",
        statuses.get("hidden_chain_target_only", 0),
        "Hidden-chain probes whose predicted target entry matches but the end VM IP still diverges.")
    add(rows, "gap_chain", "synthetic_gap_chain_full_match_paths", ",".join(full_matches) or "-",
        "Synthetic starts resolved through a hidden source and exact dynamic reentry match.")
    add(rows, "gap_chain", "synthetic_gap_chain_target_only_starts", ",".join(target_only) or "-",
        "Synthetic starts with only target-level hidden-chain evidence.")


def synthetic_gap_live_in_role_metrics(rows):
    role_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_live_in_roles.tsv")
    resolutions = Counter(row.get("resolution", "") for row in role_rows)
    role_classes = Counter()
    gpr_event_rows = [row for row in role_rows if row.get("event_site", "")]
    missing_gpr_rows = [row for row in role_rows if not row.get("event_site", "")]
    tail_event_rows = [row for row in role_rows if row.get("tail_event_site", "")]
    final_tail_event_rows = [row for row in role_rows if row.get("tail_event_site_match", "") == "1"]
    total_mem_matches = (
        resolutions.get("final_tail_mem_deref_matches_event_target", 0)
        + resolutions.get("tail_mem_deref_matches_event_target_at_observed_site", 0)
        + resolutions.get("tail_mem_deref_matches_event_target", 0)
    )
    observed_without_match = sum(
        value
        for key, value in resolutions.items()
        if "mem_deref_observed" in key and "matches_event_target" not in key
    )
    missing_sources = sorted({
        row.get("source_entry", "")
        for row in missing_gpr_rows
        if row.get("source_entry", "")
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
        "Live-in synthetic gap transfer-probe rows joined against prioritized GPR/scratch and focused VMTAIL traces.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_gpr_events_found",
        len(gpr_event_rows),
        "Rows whose synthetic start VM IP was present in a prioritized GPR/scratch or focused VMTAIL trace.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_missing_gpr_events", resolutions.get("missing_gpr_event", 0),
        "Rows with no start GPR event and no memory observation strong enough to refine the row.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_rows_without_start_gpr_event", len(missing_gpr_rows),
        "Rows still missing a start-site GPR event after prioritized trace fallback.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_mem_deref_unresolved",
        resolutions.get("live_regs_named_mem_deref_unresolved", 0),
        "Rows where live registers are named but the target expression still depends on an event-local qword dereference.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_tail_mem_events_found", len(tail_event_rows),
        "Rows with a memory-enabled VMTAIL event at the synthetic start or missing-successor IP.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_tail_event_site_matches", len(final_tail_event_rows),
        "Rows where that memory-enabled event was at the exact final native tail site for the source.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_tail_mem_deref_matches",
        total_mem_matches,
        "Rows whose event-local qword memory read matched the observed target handler.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_final_tail_mem_deref_matches",
        resolutions.get("final_tail_mem_deref_matches_event_target", 0),
        "Rows whose qword memory read matched the observed target handler at the exact final native tail site.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_observed_site_mem_deref_matches",
        resolutions.get("tail_mem_deref_matches_event_target_at_observed_site", 0),
        "Rows whose qword memory read matched the observed target handler at a non-final observed VMTAIL site.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_tail_mem_deref_observed_without_match",
        observed_without_match,
        "Rows with a qword memory read that did not match the observed target handler or lacked the paired start GPR event.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_final_tail_sites",
        ",".join(final_tail_sites) or "-",
        "Native final-tail hook sites needed to resolve the live-in qword dereferences.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_role_class_mix",
        ",".join(f"{key}:{value}" for key, value in role_classes.most_common()) or "-",
        "Register value classes observed in the target expressions.")
    add(rows, "gap_live_in", "synthetic_gap_live_in_missing_gpr_sources", ",".join(missing_sources) or "-",
        "Source entries represented among rows missing a GPR/scratch event at the synthetic start.")


def parse_ratio(text):
    if not text or "/" not in text:
        return 0, 0
    left, right = text.split("/", 1)
    try:
        return int(left, 0), int(right, 0)
    except ValueError:
        return 0, 0


def synthetic_gap_final_tail_site_metrics(rows):
    probe_rows = read_tsv(TRACE_DIR / "vm_live_in_final_tail_site_probe.tsv")
    observed_rows = [row for row in probe_rows if int(row.get("events", "0") or 0) > 0]
    exact_target_reg_rows = 0
    exact_deref_rows = 0
    total_events = 0
    total_deref_matches = 0
    summaries = []
    for row in probe_rows:
        events = int(row.get("events", "0") or 0)
        total_events += events
        target_num, target_den = parse_ratio(row.get("target_reg_equals_target", ""))
        if events and target_num == target_den == events:
            exact_target_reg_rows += 1
        deref_ok = True if events else False
        for part in (row.get("deref_mem_matches_target", "") or "").split(","):
            if not part or ":" not in part:
                continue
            reg, ratio = part.split(":", 1)
            num, den = parse_ratio(ratio)
            total_deref_matches += num
            if num != den or den != events:
                deref_ok = False
            summaries.append(f"{row.get('source_entry')}@{row.get('final_tail_site')}:{reg}={num}/{den}")
        if deref_ok:
            exact_deref_rows += 1

    add(rows, "gap_live_in", "final_tail_site_probe_rows", len(probe_rows),
        "Live-in final-tail source classes checked with memory-enabled exact native-site probes.")
    add(rows, "gap_live_in", "final_tail_site_probe_observed_rows", len(observed_rows),
        "Final-tail source classes with at least one exact-site VMTAIL event in the focused probes.")
    add(rows, "gap_live_in", "final_tail_site_probe_events", total_events,
        "Exact native final-tail VMTAIL events summarized by the final-tail probe artifact.")
    add(rows, "gap_live_in", "final_tail_site_probe_target_reg_full_matches", exact_target_reg_rows,
        "Rows whose final-tail jump register equaled the observed native target for every exact-site event.")
    add(rows, "gap_live_in", "final_tail_site_probe_deref_full_matches", exact_deref_rows,
        "Rows whose expected dereference mem_<reg> equaled the observed native target for every exact-site event.")
    add(rows, "gap_live_in", "final_tail_site_probe_deref_match_events", total_deref_matches,
        "Total exact-site events whose expected dereference mem_<reg> matched the observed native target.")
    add(rows, "gap_live_in", "final_tail_site_probe_deref_match_summary", ",".join(summaries) or "-",
        "Per-source exact-site dereference match counts.")


def synthetic_gap_live_in_reentry_metrics(rows):
    reentry_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_live_in_reentry_probe.tsv")
    classes = Counter(row.get("reentry_class", "") for row in reentry_rows)
    actions = Counter(row.get("hard_cfg_action", "") for row in reentry_rows)
    dynamic_rows = [
        row for row in reentry_rows
        if row.get("dynamic_resolution", "") == "dynamic_stitch_to_next_hooked_source"
    ]
    dynamic_starts = sorted({
        row.get("synthetic_start_vm_ip", "")
        for row in dynamic_rows
        if row.get("synthetic_start_vm_ip", "")
    }, key=lambda value: int(value, 16))
    all_starts = sorted({
        row.get("synthetic_start_vm_ip", "")
        for row in reentry_rows
        if row.get("synthetic_start_vm_ip", "")
    }, key=lambda value: int(value, 16))
    ambiguous_starts = sorted({
        row.get("synthetic_start_vm_ip", "")
        for row in reentry_rows
        if row.get("reentry_class", "") == "ambiguous_dynamic_reentry"
    }, key=lambda value: int(value, 16))
    exact_rows = [
        row for row in reentry_rows
        if row.get("reentry_class", "") == "exact_tail_dynamic_reentry_not_promoted"
    ]
    source_proof_rows = [
        row for row in reentry_rows
        if row.get("source_final_tail_proof_full", "") == "1"
    ]
    next_hooked_paths = [
        f"{row.get('synthetic_start_vm_ip')}->{row.get('inferred_next_source_entry')}@"
        f"{row.get('inferred_next_source_start_vm_ip')}->{row.get('next_end_vm_ip')}"
        for row in dynamic_rows
    ]

    add(rows, "gap_live_in_reentry", "synthetic_gap_live_in_reentry_probe_rows", len(reentry_rows),
        "Rows joining live-in gaps to dynamic next-hooked reentry and final-tail source proof.")
    add(rows, "gap_live_in_reentry", "synthetic_gap_live_in_reentry_unique_starts", len(all_starts),
        "Unique live-in synthetic starts represented by the reentry probe.")
    add(rows, "gap_live_in_reentry", "synthetic_gap_live_in_reentry_dynamic_rows", len(dynamic_rows),
        "Rows with byte-matched dynamic next-hooked-source evidence.")
    add(rows, "gap_live_in_reentry", "synthetic_gap_live_in_reentry_dynamic_unique_starts", len(dynamic_starts),
        "Unique live-in starts with byte-matched dynamic next-hooked-source evidence.")
    add(rows, "gap_live_in_reentry", "synthetic_gap_live_in_reentry_source_tail_proof_rows", len(source_proof_rows),
        "Rows whose source class has full exact-final-tail target-register and dereference proof.")
    add(rows, "gap_live_in_reentry", "synthetic_gap_live_in_reentry_exact_tail_rows", len(exact_rows),
        "Rows where the live-in start was also captured at the exact final native tail site.")
    add(rows, "gap_live_in_reentry", "synthetic_gap_live_in_reentry_ambiguous_rows",
        classes.get("ambiguous_dynamic_reentry", 0),
        "Event rows without a unique byte-matched next hooked source.")
    add(rows, "gap_live_in_reentry", "synthetic_gap_live_in_reentry_class_mix",
        ",".join(f"{key}:{value}" for key, value in classes.most_common()) or "-",
        "Conservative reentry evidence classes.")
    add(rows, "gap_live_in_reentry", "synthetic_gap_live_in_reentry_action_mix",
        ",".join(f"{key}:{value}" for key, value in actions.most_common()) or "-",
        "Whether rows are hard CFG promotions or comment-only evidence.")
    add(rows, "gap_live_in_reentry", "synthetic_gap_live_in_reentry_hard_promotions",
        actions.get("hard_cfg", 0),
        "Rows promoted to hard CFG edges by this probe; should remain zero without hidden-chain replay.")
    add(rows, "gap_live_in_reentry", "synthetic_gap_live_in_reentry_ambiguous_starts",
        ",".join(ambiguous_starts) or "-",
        "Live-in starts that still have an ambiguous dynamic event row.")
    add(rows, "gap_live_in_reentry", "synthetic_gap_live_in_reentry_next_hooked_paths",
        ",".join(next_hooked_paths) or "-",
        "Byte-matched next-hooked reentries retained as comment-only evidence.")


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
    synthetic_gap_chain_probe_metrics(rows)
    synthetic_gap_live_in_role_metrics(rows)
    synthetic_gap_final_tail_site_metrics(rows)
    synthetic_gap_live_in_reentry_metrics(rows)
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
