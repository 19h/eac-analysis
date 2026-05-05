#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
RESIDUAL_STATE_DIR = Path("dumps/vmtail-state-residual-targets")
LIVE_RESIDUAL_DIR = Path("dumps/vmtail-live-residual-targets")


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
    ("synthetic_gap_residual_audit_tsv", TRACE_DIR / "vm_synthetic_gap_residual_audit.tsv"),
    ("synthetic_gap_residual_audit_md", TRACE_DIR / "vm_synthetic_gap_residual_audit.md"),
    ("synthetic_gap_concrete_state_audit_tsv", TRACE_DIR / "vm_synthetic_gap_concrete_state_audit.tsv"),
    ("synthetic_gap_concrete_state_audit_md", TRACE_DIR / "vm_synthetic_gap_concrete_state_audit.md"),
    ("synthetic_gap_state_trace_targets_tsv", TRACE_DIR / "vm_synthetic_gap_state_trace_targets.tsv"),
    ("synthetic_gap_state_trace_targets_md", TRACE_DIR / "vm_synthetic_gap_state_trace_targets.md"),
    ("synthetic_gap_live_context_audit_tsv", TRACE_DIR / "vm_synthetic_gap_live_context_audit.tsv"),
    ("synthetic_gap_live_context_audit_md", TRACE_DIR / "vm_synthetic_gap_live_context_audit.md"),
    ("synthetic_gap_table_read_diagnostic_tsv", TRACE_DIR / "vm_synthetic_gap_table_read_diagnostic.tsv"),
    ("synthetic_gap_table_read_diagnostic_md", TRACE_DIR / "vm_synthetic_gap_table_read_diagnostic.md"),
    ("synthetic_gap_table_memory_probe_tsv", TRACE_DIR / "vm_synthetic_gap_table_memory_probe.tsv"),
    ("synthetic_gap_table_memory_probe_md", TRACE_DIR / "vm_synthetic_gap_table_memory_probe.md"),
    ("synthetic_gap_runtime_table_memory_probe_tsv", TRACE_DIR / "vm_synthetic_gap_runtime_table_memory_probe.tsv"),
    ("synthetic_gap_runtime_table_memory_probe_md", TRACE_DIR / "vm_synthetic_gap_runtime_table_memory_probe.md"),
    ("synthetic_gap_sampled_control_correlation_tsv", TRACE_DIR / "vm_synthetic_gap_sampled_control_correlation.tsv"),
    ("synthetic_gap_sampled_control_correlation_md", TRACE_DIR / "vm_synthetic_gap_sampled_control_correlation.md"),
    ("synthetic_gap_focused_direct_trace_audit_tsv", TRACE_DIR / "vm_synthetic_gap_focused_direct_trace_audit.tsv"),
    ("synthetic_gap_focused_direct_trace_audit_md", TRACE_DIR / "vm_synthetic_gap_focused_direct_trace_audit.md"),
    ("synthetic_gap_focused_sequence_audit_tsv", TRACE_DIR / "vm_synthetic_gap_focused_sequence_audit.tsv"),
    ("synthetic_gap_focused_sequence_audit_md", TRACE_DIR / "vm_synthetic_gap_focused_sequence_audit.md"),
    ("synthetic_gap_observed_chain_bridge_tsv", TRACE_DIR / "vm_synthetic_gap_observed_chain_bridge.tsv"),
    ("synthetic_gap_observed_chain_bridge_md", TRACE_DIR / "vm_synthetic_gap_observed_chain_bridge.md"),
    ("synthetic_gap_observed_chain_replay_tsv", TRACE_DIR / "vm_synthetic_gap_observed_chain_replay.tsv"),
    ("synthetic_gap_observed_chain_replay_md", TRACE_DIR / "vm_synthetic_gap_observed_chain_replay.md"),
    ("synthetic_gap_chain_slot_reconciliation_tsv", TRACE_DIR / "vm_synthetic_gap_chain_slot_reconciliation.tsv"),
    ("synthetic_gap_chain_slot_reconciliation_md", TRACE_DIR / "vm_synthetic_gap_chain_slot_reconciliation.md"),
    ("synthetic_gap_symbolic_successors_tsv", TRACE_DIR / "vm_synthetic_gap_symbolic_successors.tsv"),
    ("synthetic_gap_symbolic_successors_md", TRACE_DIR / "vm_synthetic_gap_symbolic_successors.md"),
    ("synthetic_gap_live_in_roles_tsv", TRACE_DIR / "vm_synthetic_gap_live_in_roles.tsv"),
    ("synthetic_gap_live_in_roles_md", TRACE_DIR / "vm_synthetic_gap_live_in_roles.md"),
    ("live_in_final_tail_site_probe_tsv", TRACE_DIR / "vm_live_in_final_tail_site_probe.tsv"),
    ("live_in_final_tail_site_probe_md", TRACE_DIR / "vm_live_in_final_tail_site_probe.md"),
    ("synthetic_gap_live_in_reentry_probe_tsv", TRACE_DIR / "vm_synthetic_gap_live_in_reentry_probe.tsv"),
    ("synthetic_gap_live_in_reentry_probe_md", TRACE_DIR / "vm_synthetic_gap_live_in_reentry_probe.md"),
    ("synthetic_gap_allstatic_reentry_probe_tsv", TRACE_DIR / "vm_synthetic_gap_allstatic_reentry_probe.tsv"),
    ("synthetic_gap_allstatic_reentry_probe_md", TRACE_DIR / "vm_synthetic_gap_allstatic_reentry_probe.md"),
    ("trace_coverage_matrix_tsv", TRACE_DIR / "vm_trace_coverage_matrix.tsv"),
    ("trace_coverage_matrix_md", TRACE_DIR / "vm_trace_coverage_matrix.md"),
    ("static_coverage_audit_tsv", TRACE_DIR / "vm_static_coverage_audit.tsv"),
    ("static_coverage_audit_md", TRACE_DIR / "vm_static_coverage_audit.md"),
    ("residual_state_target_run_stderr", RESIDUAL_STATE_DIR / "run.stderr"),
    ("residual_state_target_trace_tsv", RESIDUAL_STATE_DIR / "vm_instruction_trace.tsv"),
    ("live_residual_target_run_stderr", LIVE_RESIDUAL_DIR / "run.stderr"),
    ("live_residual_target_trace_tsv", LIVE_RESIDUAL_DIR / "vm_instruction_trace.tsv"),
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
        add(rows, "artifact", f"{name}_path", path, "Generated reconstruction artifact.")
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
    add(rows, "c_shape", "handler_next_entry_table_offset_normalizations",
        count(r"r\.next_entry = vm_entry_from_table_offset\(r\.slot\);", handlers),
        "Handler fall-through slots normalized as dispatch-table byte offsets.")
    add(rows, "c_shape", "handler_next_entry_slot_index_normalizations",
        count(r"r\.next_entry = vm_entry_from_slot_index\(r\.slot\);", handlers),
        "Handler fall-through slots normalized as direct slot indices.")
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
    add(rows, "c_shape", "program_full_residual_audit_sites", count(r"residual audit @", program_full),
        "Residual synthetic gap audit sites carried into the full program sketch.")
    add(rows, "c_shape", "program_full_residual_audit_comments", count(r"residual audit: source=", program_full),
        "Per-start residual promotion-state comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_concrete_state_audit_sites", count(r"concrete-state audit @", program_full),
        "Residual concrete-state replay audit sites carried into the full program sketch.")
    add(rows, "c_shape", "program_full_concrete_state_audit_comments", count(r"concrete-state audit: source=", program_full),
        "Per-start concrete-state replay comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_live_context_audit_sites", count(r"live-context audit @", program_full),
        "Residual live-context replay audit sites carried into the full program sketch.")
    add(rows, "c_shape", "program_full_live_context_audit_comments", count(r"live-context audit: source=", program_full),
        "Per-start live GPR/scratch replay comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_table_read_diagnostic_sites", count(r"table-read diagnostic @", program_full),
        "Residual final table-read diagnostic sites carried into the full program sketch.")
    add(rows, "c_shape", "program_full_table_read_diagnostic_comments", count(r"table-read diagnostic: source=", program_full),
        "Per-start final table-read comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_table_memory_probe_sites", count(r"table-memory probe @", program_full),
        "Residual table-offset file mapping sites carried into the full program sketch.")
    add(rows, "c_shape", "program_full_table_memory_probe_comments", count(r"table-memory probe: source=", program_full),
        "Per-start residual table-offset file mapping comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_runtime_table_memory_probe_sites", count(r"runtime table-memory probe @", program_full),
        "Residual table-offset runtime mapped-memory comparison sites carried into the full program sketch.")
    add(rows, "c_shape", "program_full_runtime_table_memory_probe_comments", count(r"runtime table-memory probe: source=", program_full),
        "Per-start residual runtime mapped-memory comparison comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_sampled_control_correlation_sites", count(r"sampled-control correlation @", program_full),
        "Residual sampled-control correlation sites carried into the full program sketch.")
    add(rows, "c_shape", "program_full_sampled_control_correlation_comments", count(r"sampled-control correlation: source=", program_full),
        "Per-start sampled-control correlation comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_focused_direct_trace_audit_sites", count(r"focused direct trace @", program_full),
        "Residual focused direct-trace audit sites carried into the full program sketch.")
    add(rows, "c_shape", "program_full_focused_direct_trace_audit_comments", count(r"focused direct trace: source=", program_full),
        "Per-start focused direct-trace comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_focused_direct_bridge_sites", count(r"focused direct bridge @", program_full),
        "Focused residual-start direct trace rows promoted to concrete handler/block calls in the full program sketch.")
    add(rows, "c_shape", "program_full_focused_sequence_audit_sites", count(r"focused sequence audit @", program_full),
        "Residual focused raw-sequence audit sites carried into the full program sketch.")
    add(rows, "c_shape", "program_full_focused_sequence_audit_comments", count(r"focused sequence: source=", program_full),
        "Per-start focused raw-sequence comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_observed_chain_bridge_audit_sites", count(r"observed-chain bridge audit @", program_full),
        "Residual focused chain bridge audit sites carried into the full program sketch.")
    add(rows, "c_shape", "program_full_observed_chain_bridge_comments", count(r"observed-chain bridge: source=", program_full),
        "Per-start observed-chain bridge comments carried into the full program sketch.")
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
    add(rows, "c_shape", "program_full_allstatic_reentry_probe_sites", count(r"all-static reentry probe @", program_full),
        "Synthetic gap sites annotated with all-static immediate next-hook evidence.")
    add(rows, "c_shape", "program_full_allstatic_reentry_comments", count(r"all-static reentry: source=", program_full),
        "All-static reentry rows carried into the full program sketch.")
    add(rows, "c_shape", "program_full_observed_reentry_bridge_sites", count(r"observed reentry bridge @", program_full),
        "Disabled-by-default observed next-hook bridge snippets emitted beside dynamically stitched unresolved synthetic successors.")
    add(rows, "c_shape", "program_full_observed_reentry_bridge_macros", count(r"^#if VM_ENABLE_OBSERVED_REENTRY_BRIDGES$", program_full),
        "Disabled bridge bodies guarded by VM_ENABLE_OBSERVED_REENTRY_BRIDGES in the full program sketch.")
    add(rows, "c_shape", "program_full_observed_chain_terminal_bridge_sites", count(r"observed-chain terminal bridge @", program_full),
        "Disabled-by-default observed focused-chain terminal bridge snippets emitted beside unresolved synthetic successors.")
    add(rows, "c_shape", "program_full_observed_chain_terminal_bridge_macros", count(r"^#if VM_ENABLE_OBSERVED_CHAIN_BRIDGES$", program_full),
        "Disabled focused-chain terminal bridge bodies guarded by VM_ENABLE_OBSERVED_CHAIN_BRIDGES in the full program sketch.")
    add(rows, "c_shape", "program_full_observed_chain_replay_steps", count(r"observed-chain replay step:", program_full),
        "Observed focused-chain replay steps emitted inside disabled terminal bridge snippets in the full program sketch.")
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
    add(rows, "c_shape", "bundle_residual_audit_sites", count(r"residual audit @", bundle),
        "Residual synthetic gap audit sites carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_residual_audit_comments", count(r"residual audit: source=", bundle),
        "Per-start residual promotion-state comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_concrete_state_audit_sites", count(r"concrete-state audit @", bundle),
        "Residual concrete-state replay audit sites carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_concrete_state_audit_comments", count(r"concrete-state audit: source=", bundle),
        "Per-start concrete-state replay comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_live_context_audit_sites", count(r"live-context audit @", bundle),
        "Residual live-context replay audit sites carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_live_context_audit_comments", count(r"live-context audit: source=", bundle),
        "Per-start live GPR/scratch replay comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_table_read_diagnostic_sites", count(r"table-read diagnostic @", bundle),
        "Residual final table-read diagnostic sites carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_table_read_diagnostic_comments", count(r"table-read diagnostic: source=", bundle),
        "Per-start final table-read comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_table_memory_probe_sites", count(r"table-memory probe @", bundle),
        "Residual table-offset file mapping sites carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_table_memory_probe_comments", count(r"table-memory probe: source=", bundle),
        "Per-start residual table-offset file mapping comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_runtime_table_memory_probe_sites", count(r"runtime table-memory probe @", bundle),
        "Residual table-offset runtime mapped-memory comparison sites carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_runtime_table_memory_probe_comments", count(r"runtime table-memory probe: source=", bundle),
        "Per-start residual runtime mapped-memory comparison comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_sampled_control_correlation_sites", count(r"sampled-control correlation @", bundle),
        "Residual sampled-control correlation sites carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_sampled_control_correlation_comments", count(r"sampled-control correlation: source=", bundle),
        "Per-start sampled-control correlation comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_focused_direct_trace_audit_sites", count(r"focused direct trace @", bundle),
        "Residual focused direct-trace audit sites carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_focused_direct_trace_audit_comments", count(r"focused direct trace: source=", bundle),
        "Per-start focused direct-trace comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_focused_direct_bridge_sites", count(r"focused direct bridge @", bundle),
        "Focused residual-start direct trace rows promoted to concrete handler/block calls inside the combined source bundle.")
    add(rows, "c_shape", "bundle_focused_sequence_audit_sites", count(r"focused sequence audit @", bundle),
        "Residual focused raw-sequence audit sites carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_focused_sequence_audit_comments", count(r"focused sequence: source=", bundle),
        "Per-start focused raw-sequence comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_observed_chain_bridge_audit_sites", count(r"observed-chain bridge audit @", bundle),
        "Residual focused chain bridge audit sites carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_observed_chain_bridge_comments", count(r"observed-chain bridge: source=", bundle),
        "Per-start observed-chain bridge comments carried into the combined source bundle.")
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
    add(rows, "c_shape", "bundle_allstatic_reentry_probe_sites", count(r"all-static reentry probe @", bundle),
        "Synthetic gap sites annotated with all-static immediate next-hook evidence inside the combined source bundle.")
    add(rows, "c_shape", "bundle_allstatic_reentry_comments", count(r"all-static reentry: source=", bundle),
        "All-static reentry rows carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_observed_reentry_bridge_sites", count(r"observed reentry bridge @", bundle),
        "Disabled-by-default observed next-hook bridge snippets emitted beside dynamically stitched unresolved synthetic successors inside the combined source bundle.")
    add(rows, "c_shape", "bundle_observed_reentry_bridge_macros", count(r"^#if VM_ENABLE_OBSERVED_REENTRY_BRIDGES$", bundle),
        "Disabled bridge bodies guarded by VM_ENABLE_OBSERVED_REENTRY_BRIDGES inside the combined source bundle.")
    add(rows, "c_shape", "bundle_observed_chain_terminal_bridge_sites", count(r"observed-chain terminal bridge @", bundle),
        "Disabled-by-default observed focused-chain terminal bridge snippets emitted beside unresolved synthetic successors inside the combined source bundle.")
    add(rows, "c_shape", "bundle_observed_chain_terminal_bridge_macros", count(r"^#if VM_ENABLE_OBSERVED_CHAIN_BRIDGES$", bundle),
        "Disabled focused-chain terminal bridge bodies guarded by VM_ENABLE_OBSERVED_CHAIN_BRIDGES inside the combined source bundle.")
    add(rows, "c_shape", "bundle_observed_chain_replay_steps", count(r"observed-chain replay step:", bundle),
        "Observed focused-chain replay steps emitted inside disabled terminal bridge snippets in the combined source bundle.")


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
        ("dynamic_cross_trace", "network_policy_mix"),
        ("dynamic_cross_trace", "concrete_network_policy_mix"),
        ("dynamic_cross_trace", "spawn_policy_mix"),
        ("dynamic_cross_trace", "concrete_runtime_modes_seen"),
        ("dynamic_cross_trace", "concrete_instruction_traces_with_network_events"),
        ("dynamic_cross_trace", "concrete_instruction_traces_with_network_denied"),
        ("dynamic_cross_trace", "concrete_instruction_traces_with_network_fake"),
        ("dynamic_cross_trace", "concrete_instruction_traces_with_network_allowed"),
        ("dynamic_cross_trace", "concrete_instruction_traces_without_network_events"),
        ("dynamic_cross_trace", "concrete_network_host_mix"),
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
    dynamic_next_hooks = [
        f"{row.get('synthetic_start_vm_ip')}->{row.get('hidden_source_entry')}@{row.get('hidden_source_start_vm_ip')}->{row.get('hidden_pred_end_vm_ip')}"
        for row in chain_rows
        if row.get("status", "") == "dynamic_next_hook_matches_static_transfer"
    ]
    target_only = [
        row.get("synthetic_start_vm_ip", "")
        for row in chain_rows
        if row.get("status", "") == "hidden_chain_target_only"
    ]
    add(rows, "gap_chain", "synthetic_gap_chain_probe_rows", len(chain_rows),
        "Dynamic stitch rows replayed through candidate hidden-source handlers or inferred next-hook handlers.")
    add(rows, "gap_chain", "synthetic_gap_chain_status_mix",
        ",".join(f"{key}:{value}" for key, value in statuses.most_common()) or "-",
        "Status mix from the hidden-chain/next-hook replay probe.")
    add(rows, "gap_chain", "synthetic_gap_chain_full_matches",
        statuses.get("hidden_chain_matches_next_event", 0),
        "Hidden-chain probes whose predicted target entry and end VM IP both match the next hooked event.")
    add(rows, "gap_chain", "synthetic_gap_chain_dynamic_next_hook_matches",
        statuses.get("dynamic_next_hook_matches_static_transfer", 0),
        "Dynamically stitched next-hook handlers whose static transfer predicts the observed next target and end VM IP.")
    add(rows, "gap_chain", "synthetic_gap_chain_target_only",
        statuses.get("hidden_chain_target_only", 0),
        "Hidden-chain probes whose predicted target entry matches but the end VM IP still diverges.")
    add(rows, "gap_chain", "synthetic_gap_chain_full_match_paths", ",".join(full_matches) or "-",
        "Synthetic starts resolved through a hidden source and exact dynamic reentry match.")
    add(rows, "gap_chain", "synthetic_gap_chain_dynamic_next_hook_paths", ",".join(dynamic_next_hooks) or "-",
        "Dynamic stitch next-hook paths independently validated by static transfer replay.")
    add(rows, "gap_chain", "synthetic_gap_chain_target_only_starts", ",".join(target_only) or "-",
        "Synthetic starts with only target-level hidden-chain evidence.")


def synthetic_gap_residual_audit_metrics(rows):
    residual_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_residual_audit.tsv")
    reasons = Counter(row.get("residual_reason", "") for row in residual_rows)
    promotions = Counter(row.get("promotion_state", "") for row in residual_rows)
    chain_statuses = Counter()
    dynamic_validated = 0
    target_only_hints = 0
    for row in residual_rows:
        statuses = set()
        for part in (row.get("chain_statuses", "") or "").split(";"):
            if not part:
                continue
            status, _, count = part.partition(":")
            count_int = int(count or "1")
            statuses.add(status)
            chain_statuses[status] += count_int
        if "dynamic_next_hook_matches_static_transfer" in statuses:
            dynamic_validated += 1
        if "hidden_chain_target_only" in statuses:
            target_only_hints += 1
    starts = sorted({
        row.get("synthetic_start_vm_ip", "")
        for row in residual_rows
        if row.get("synthetic_start_vm_ip", "")
    }, key=lambda value: int(value, 16))

    add(rows, "gap_residual", "synthetic_gap_residual_audit_rows", len(residual_rows),
        "Remaining synthetic successor starts after hard hidden-chain promotions are removed.")
    add(rows, "gap_residual", "synthetic_gap_residual_reason_mix",
        ",".join(f"{key}:{value}" for key, value in reasons.most_common()) or "-",
        "Why each residual start is still not emitted as a hard CFG edge.")
    add(rows, "gap_residual", "synthetic_gap_residual_promotion_state_mix",
        ",".join(f"{key}:{value}" for key, value in promotions.most_common()) or "-",
        "Promotion state of each residual start after static, dynamic, and chain evidence is joined.")
    add(rows, "gap_residual", "synthetic_gap_residual_chain_status_mix",
        ",".join(f"{key}:{value}" for key, value in chain_statuses.most_common()) or "-",
        "Hidden-chain/next-hook statuses represented among residual starts.")
    add(rows, "gap_residual", "synthetic_gap_residual_dynamic_next_hook_validated", dynamic_validated,
        "Residual starts whose inferred next hooked handler is independently validated by static transfer replay.")
    add(rows, "gap_residual", "synthetic_gap_residual_target_only_hints", target_only_hints,
        "Residual starts that also carry target-only hidden-chain evidence.")
    add(rows, "gap_residual", "synthetic_gap_residual_starts", ",".join(starts) or "-",
        "Synthetic starts that remain explicit unresolved-tail calls in the full C sketch.")


def synthetic_gap_concrete_state_audit_metrics(rows):
    audit_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_concrete_state_audit.tsv")
    classes = Counter(row.get("classification", "") for row in audit_rows)
    statuses = Counter()
    reasons = Counter()
    covered = [
        row.get("synthetic_start_vm_ip", "")
        for row in audit_rows
        if int(row.get("state_trace_rows", "0") or 0) > 0
    ]
    missing = [
        row.get("synthetic_start_vm_ip", "")
        for row in audit_rows
        if int(row.get("state_trace_rows", "0") or 0) == 0
    ]
    for row in audit_rows:
        for item in (row.get("concrete_status_mix", "") or "").split(","):
            if item and ":" in item:
                key, value = item.rsplit(":", 1)
                statuses[key] += int(value)
        for item in (row.get("unknown_reason_mix", "") or "").split(","):
            if item and ":" in item:
                key, value = item.rsplit(":", 1)
                reasons[key] += int(value)

    add(rows, "gap_concrete_state", "synthetic_gap_concrete_state_audit_rows", len(audit_rows),
        "Residual synthetic starts replayed with concrete state-aware predecessor state where available.")
    add(rows, "gap_concrete_state", "synthetic_gap_concrete_state_class_mix",
        ",".join(f"{key}:{value}" for key, value in classes.most_common()) or "-",
        "Concrete-state replay classification mix.")
    add(rows, "gap_concrete_state", "synthetic_gap_concrete_state_status_mix",
        ",".join(f"{key}:{value}" for key, value in statuses.most_common()) or "-",
        "Concrete replay terminal status mix across observed state variants.")
    add(rows, "gap_concrete_state", "synthetic_gap_concrete_state_unknown_reason_mix",
        ",".join(f"{key}:{value}" for key, value in reasons.most_common()) or "-",
        "Unknown-target reason mix across concrete replay variants.")
    add(rows, "gap_concrete_state", "synthetic_gap_concrete_state_rows_with_state", len(covered),
        "Residual starts whose predecessor state appears in the state-aware trace.")
    add(rows, "gap_concrete_state", "synthetic_gap_concrete_state_rows_missing_state", len(missing),
        "Residual starts still missing state-aware predecessor state.")
    add(rows, "gap_concrete_state", "synthetic_gap_concrete_state_covered_starts", ",".join(covered) or "-",
        "Residual starts checked with concrete state-aware predecessor state.")
    add(rows, "gap_concrete_state", "synthetic_gap_concrete_state_missing_starts", ",".join(missing) or "-",
        "Residual starts needing state-aware trace coverage before concrete replay can classify them.")


def synthetic_gap_state_trace_target_metrics(rows):
    target_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_state_trace_targets.tsv")
    source_mix = Counter(row.get("source_entry", "") for row in target_rows)
    start_site_mix = Counter(row.get("synthetic_start_event_site", "") for row in target_rows)
    next_site_mix = Counter(row.get("dynamic_next_site", "") for row in target_rows)
    capture_mix = Counter(row.get("capture_status", "") for row in target_rows)
    starts = [row.get("synthetic_start_vm_ip", "") for row in target_rows if row.get("synthetic_start_vm_ip", "")]
    focus_pairs = [
        f"{row.get('synthetic_start_vm_ip')}={row.get('minimal_focus_ips')}@{row.get('minimal_focus_sites')}"
        for row in target_rows
        if row.get("synthetic_start_vm_ip", "")
    ]
    seqs = [
        int(row.get("primary_predecessor_seq", "0") or 0)
        for row in target_rows
        if row.get("primary_predecessor_seq", "")
    ]

    add(rows, "gap_state_targets", "synthetic_gap_state_trace_target_rows", len(target_rows),
        "Residual starts still missing concrete predecessor state and now mapped to focused VMTAIL capture pairs.")
    add(rows, "gap_state_targets", "synthetic_gap_state_trace_target_source_mix",
        ",".join(f"{key}:{value}" for key, value in source_mix.most_common()) or "-",
        "Source-entry mix among missing state-trace targets.")
    add(rows, "gap_state_targets", "synthetic_gap_state_trace_target_start_site_mix",
        ",".join(f"{key}:{value}" for key, value in start_site_mix.most_common()) or "-",
        "Synthetic-start tail sites that need focused state capture.")
    add(rows, "gap_state_targets", "synthetic_gap_state_trace_target_next_site_mix",
        ",".join(f"{key}:{value}" for key, value in next_site_mix.most_common()) or "-",
        "Next-hook tail sites retained by the optional context capture.")
    add(rows, "gap_state_targets", "synthetic_gap_state_trace_target_capture_status_mix",
        ",".join(f"{key}:{value}" for key, value in capture_mix.most_common()) or "-",
        "Whether each baseline-missing state row has been captured by the supplemental focused trace.")
    add(rows, "gap_state_targets", "synthetic_gap_state_trace_target_primary_seq_range",
        f"{min(seqs)}..{max(seqs)}" if seqs else "-",
        "Primary trace sequence span containing the missing predecessor-state pairs.")
    add(rows, "gap_state_targets", "synthetic_gap_state_trace_target_starts", ",".join(starts) or "-",
        "Synthetic starts whose state-aware predecessor row should be captured next.")
    add(rows, "gap_state_targets", "synthetic_gap_state_trace_target_focus_pairs", ";".join(focus_pairs) or "-",
        "Per-start minimal focus IP/site pairs for a targeted VMTAIL state run.")


def synthetic_gap_live_context_audit_metrics(rows):
    live_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_live_context_audit.tsv")
    resolutions = Counter(row.get("live_resolution", "") for row in live_rows)
    statuses = Counter()
    reasons = Counter()
    resolved_branches = [
        row.get("synthetic_start_vm_ip", "")
        for row in live_rows
        if row.get("state_only_classification", "") == "concrete_branch_unknown"
        and row.get("live_resolution", "") != "live_branch_unknown"
    ]
    seedless = [
        row.get("synthetic_start_vm_ip", "")
        for row in live_rows
        if int(row.get("live_seed_rows", "0") or 0) == 0
    ]
    for row in live_rows:
        for item in (row.get("live_status_mix", "") or "").split(","):
            if item and ":" in item:
                key, value = item.rsplit(":", 1)
                statuses[key] += int(value)
        for item in (row.get("live_unknown_reason_mix", "") or "").split(","):
            if item and ":" in item:
                key, value = item.rsplit(":", 1)
                reasons[key] += int(value)

    add(rows, "gap_live_context", "synthetic_gap_live_context_audit_rows", len(live_rows),
        "Residual starts replayed with concrete state plus live entry GPR/frame-scratch seeds.")
    add(rows, "gap_live_context", "synthetic_gap_live_context_resolution_mix",
        ",".join(f"{key}:{value}" for key, value in resolutions.most_common()) or "-",
        "Live-context replay resolution mix.")
    add(rows, "gap_live_context", "synthetic_gap_live_context_status_mix",
        ",".join(f"{key}:{value}" for key, value in statuses.most_common()) or "-",
        "Live-context terminal status mix across replay variants.")
    add(rows, "gap_live_context", "synthetic_gap_live_context_unknown_reason_mix",
        ",".join(f"{key}:{value}" for key, value in reasons.most_common()) or "-",
        "Live-context unknown-target reason mix across replay variants.")
    add(rows, "gap_live_context", "synthetic_gap_live_context_branch_unknown_remaining",
        resolutions.get("live_branch_unknown", 0),
        "Residual starts that still have branch-unknown classification after live GPR/scratch seeding.")
    add(rows, "gap_live_context", "synthetic_gap_live_context_state_branch_unknown_resolved",
        len(resolved_branches),
        "State-only branch-unknown residual starts whose live-context replay reaches a final table read/oob instead.")
    add(rows, "gap_live_context", "synthetic_gap_live_context_state_branch_unknown_resolved_starts",
        ",".join(resolved_branches) or "-",
        "Starts whose branch uncertainty is removed by live entry GPR/scratch context.")
    add(rows, "gap_live_context", "synthetic_gap_live_context_seedless_starts",
        ",".join(seedless) or "-",
        "Starts still lacking live GPR/scratch seed rows.")


def synthetic_gap_table_read_diagnostic_metrics(rows):
    diagnostic_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_table_read_diagnostic.tsv")
    diagnoses = Counter(row.get("diagnosis", "") for row in diagnostic_rows)
    table_statuses = Counter()
    table_sizes = Counter()
    table_offsets = Counter()
    table_entries = Counter()
    table_sites = Counter()
    starts = [row.get("synthetic_start_vm_ip", "") for row in diagnostic_rows if row.get("synthetic_start_vm_ip", "")]
    oob_starts = [
        row.get("synthetic_start_vm_ip", "")
        for row in diagnostic_rows
        if row.get("diagnosis", "") == "table_index_out_of_range"
    ]
    misaligned_starts = [
        row.get("synthetic_start_vm_ip", "")
        for row in diagnostic_rows
        if row.get("diagnosis", "") == "misaligned_or_non_qword_table_read"
    ]
    replayed_variants = 0

    def add_mix(counter, text):
        for item in (text or "").split(","):
            if item and ":" in item:
                key, value = item.rsplit(":", 1)
                counter[key] += int(value)

    for row in diagnostic_rows:
        replayed_variants += int(row.get("variants_replayed", "0") or 0)
        add_mix(table_statuses, row.get("table_access_status_mix", ""))
        add_mix(table_sizes, row.get("table_access_size_mix", ""))
        add_mix(table_offsets, row.get("table_access_offset_mix", ""))
        add_mix(table_entries, row.get("table_access_entry_mix", ""))
        add_mix(table_sites, row.get("table_access_site_mix", ""))

    add(rows, "gap_table_read", "synthetic_gap_table_read_diagnostic_rows", len(diagnostic_rows),
        "Residual starts whose final live-context dispatch-table access was diagnosed.")
    add(rows, "gap_table_read", "synthetic_gap_table_read_diagnostic_variants_replayed", replayed_variants,
        "Live-context residual replay variants contributing table-access diagnostics.")
    add(rows, "gap_table_read", "synthetic_gap_table_read_diagnostic_diagnosis_mix",
        ",".join(f"{key}:{value}" for key, value in diagnoses.most_common()) or "-",
        "Final residual table-access diagnosis mix.")
    add(rows, "gap_table_read", "synthetic_gap_table_read_diagnostic_status_mix",
        ",".join(f"{key}:{value}" for key, value in table_statuses.most_common()) or "-",
        "Concrete table-access status mix across diagnostic variants.")
    add(rows, "gap_table_read", "synthetic_gap_table_read_diagnostic_size_mix",
        ",".join(f"{key}:{value}" for key, value in table_sizes.most_common()) or "-",
        "Final table-access width mix.")
    add(rows, "gap_table_read", "synthetic_gap_table_read_diagnostic_offset_mix",
        ",".join(f"{key}:{value}" for key, value in table_offsets.most_common()) or "-",
        "Final table byte-offset mix across residual diagnostics.")
    add(rows, "gap_table_read", "synthetic_gap_table_read_diagnostic_entry_mix",
        ",".join(f"{key}:{value}" for key, value in table_entries.most_common()) or "-",
        "Final table entry-index mix when the offset maps to a normal qword slot.")
    add(rows, "gap_table_read", "synthetic_gap_table_read_diagnostic_site_mix",
        ",".join(f"{key}:{value}" for key, value in table_sites.most_common()) or "-",
        "Native final-tail sites that perform the residual table reads.")
    add(rows, "gap_table_read", "synthetic_gap_table_read_diagnostic_starts",
        ",".join(starts) or "-",
        "Residual synthetic starts covered by the table-read diagnostic.")
    add(rows, "gap_table_read", "synthetic_gap_table_read_diagnostic_oob_starts",
        ",".join(oob_starts) or "-",
        "Residual starts ending in a dispatch-table index outside the 360-entry model.")
    add(rows, "gap_table_read", "synthetic_gap_table_read_diagnostic_misaligned_starts",
        ",".join(misaligned_starts) or "-",
        "Residual starts ending in a concrete 8-byte table read at a non-qword-aligned offset.")


def synthetic_gap_table_memory_probe_metrics(rows):
    probe_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_table_memory_probe.tsv")
    regions = Counter()
    qword_classes = Counter()
    sections = Counter()
    starts_after_table = []
    starts_unaligned_table = []
    starts_non_pointer = []
    observations = 0
    for row in probe_rows:
        count_value = int(row.get("table_offset_count", "0") or 0)
        observations += count_value
        regions[row.get("region", "")] += count_value
        qword_classes[row.get("file_qword_class", "")] += count_value
        sections[row.get("section", "")] += count_value
        start = row.get("synthetic_start_vm_ip", "")
        if row.get("region", "") == "after_dispatch_table":
            starts_after_table.append(start)
        if row.get("region", "") == "inside_dispatch_table_unaligned":
            starts_unaligned_table.append(start)
        if row.get("file_qword_class", "") == "non_pointer_bytes":
            starts_non_pointer.append(start)

    add(rows, "gap_table_memory", "synthetic_gap_table_memory_probe_rows", len(probe_rows),
        "Residual table-relative offsets mapped back to file bytes and sections.")
    add(rows, "gap_table_memory", "synthetic_gap_table_memory_probe_observations", observations,
        "Offset observations counted across replay variants.")
    add(rows, "gap_table_memory", "synthetic_gap_table_memory_region_mix",
        ",".join(f"{key}:{value}" for key, value in regions.most_common()) or "-",
        "Whether residual table-relative offsets stay in the 360-entry table or point past it.")
    add(rows, "gap_table_memory", "synthetic_gap_table_memory_qword_class_mix",
        ",".join(f"{key}:{value}" for key, value in qword_classes.most_common()) or "-",
        "File qword interpretation at dispatch-table-base plus residual offset.")
    add(rows, "gap_table_memory", "synthetic_gap_table_memory_section_mix",
        ",".join(f"{key}:{value}" for key, value in sections.most_common()) or "-",
        "ELF section mix for residual table-relative offsets.")
    add(rows, "gap_table_memory", "synthetic_gap_table_memory_after_table_starts",
        ",".join(starts_after_table) or "-",
        "Residual starts whose table-relative offset lands after the 360-entry dispatch table.")
    add(rows, "gap_table_memory", "synthetic_gap_table_memory_unaligned_table_starts",
        ",".join(starts_unaligned_table) or "-",
        "Residual starts whose table-relative offset lands inside the table but at an unaligned byte offset.")
    add(rows, "gap_table_memory", "synthetic_gap_table_memory_non_pointer_starts",
        ",".join(starts_non_pointer) or "-",
        "Residual starts whose file qword is classified as ordinary/non-pointer bytes.")


def synthetic_gap_runtime_table_memory_probe_metrics(rows):
    probe_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_runtime_table_memory_probe.tsv")
    match_mix = Counter()
    runtime_qword_classes = Counter()
    mismatched_starts = []
    dispatch_target_starts = []
    observations = 0
    for row in probe_rows:
        count_value = int(row.get("table_offset_count", "0") or 0)
        observations += count_value
        match_mix[row.get("runtime_matches_file", "")] += count_value
        runtime_qword_classes[row.get("runtime_qword_class", "")] += count_value
        start = row.get("synthetic_start_vm_ip", "")
        if row.get("runtime_matches_file", "") != "yes":
            mismatched_starts.append(start)
        if row.get("runtime_qword_dispatch_entry", ""):
            dispatch_target_starts.append(start)

    add(rows, "gap_runtime_table_memory", "synthetic_gap_runtime_table_memory_probe_rows", len(probe_rows),
        "Residual table-relative offsets compared against postcall mapped EAC memory.")
    add(rows, "gap_runtime_table_memory", "synthetic_gap_runtime_table_memory_probe_observations", observations,
        "Offset observations counted across replay variants in the runtime memory probe.")
    add(rows, "gap_runtime_table_memory", "synthetic_gap_runtime_table_memory_match_mix",
        ",".join(f"{key}:{value}" for key, value in match_mix.most_common()) or "-",
        "Whether postcall mapped bytes match the original eac.elf bytes at residual offsets.")
    add(rows, "gap_runtime_table_memory", "synthetic_gap_runtime_table_memory_qword_class_mix",
        ",".join(f"{key}:{value}" for key, value in runtime_qword_classes.most_common()) or "-",
        "Runtime qword interpretation after loader relocation/patching.")
    add(rows, "gap_runtime_table_memory", "synthetic_gap_runtime_table_memory_mismatched_starts",
        ",".join(mismatched_starts) or "-",
        "Residual starts whose runtime bytes differ from file bytes.")
    add(rows, "gap_runtime_table_memory", "synthetic_gap_runtime_table_memory_dispatch_target_starts",
        ",".join(dispatch_target_starts) or "-",
        "Residual starts whose runtime qword resolves to a dispatch-table target.")


def synthetic_gap_sampled_control_correlation_metrics(rows):
    corr_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_sampled_control_correlation.tsv")
    classes = Counter(row.get("sampled_correlation_class", "") for row in corr_rows)
    sampled_targets = Counter()
    dynamic_targets = Counter(row.get("dynamic_next_source_entry", "") for row in corr_rows)
    target_matches = [
        row.get("synthetic_start_vm_ip", "")
        for row in corr_rows
        if row.get("dynamic_next_matches_sampled_target", "") == "yes"
    ]
    delta_matches = [
        row.get("synthetic_start_vm_ip", "")
        for row in corr_rows
        if row.get("dynamic_next_delta_matches_sampled_delta", "") == "yes"
    ]
    byte_matches = [
        row.get("synthetic_start_vm_ip", "")
        for row in corr_rows
        if row.get("sampled_operand_byte_exact_matches", "") not in {"", "-"}
    ]
    for row in corr_rows:
        for item in (row.get("sampled_target_entries", "") or "").split(","):
            if item and ":" in item:
                key, value = item.rsplit(":", 1)
                sampled_targets[key] += int(value)

    add(rows, "gap_sampled_control", "synthetic_gap_sampled_control_correlation_rows", len(corr_rows),
        "Residual starts correlated with sampled-operand target/delta sidecars.")
    add(rows, "gap_sampled_control", "synthetic_gap_sampled_control_class_mix",
        ",".join(f"{key}:{value}" for key, value in classes.most_common()) or "-",
        "Correlation class mix against sampled-operand evidence and dynamic next-hook sequence.")
    add(rows, "gap_sampled_control", "synthetic_gap_sampled_control_dynamic_target_mix",
        ",".join(f"{key}:{value}" for key, value in dynamic_targets.most_common()) or "-",
        "Next hooked source entries observed after residual synthetic starts.")
    add(rows, "gap_sampled_control", "synthetic_gap_sampled_control_sampled_target_mix",
        ",".join(f"{key}:{value}" for key, value in sampled_targets.most_common()) or "-",
        "Sampled-operand target-entry evidence available for the same source/footprint length.")
    add(rows, "gap_sampled_control", "synthetic_gap_sampled_control_target_match_starts",
        ",".join(target_matches) or "-",
        "Residual starts whose dynamic next hooked source entry appears in sampled-operand target evidence.")
    add(rows, "gap_sampled_control", "synthetic_gap_sampled_control_delta_match_starts",
        ",".join(delta_matches) or "-",
        "Residual starts whose dynamic next hooked source delta matches a sampled-operand delta.")
    add(rows, "gap_sampled_control", "synthetic_gap_sampled_control_exact_byte_match_starts",
        ",".join(byte_matches) or "-",
        "Residual starts whose exact footprint bytes appear in sampled-operand observations.")


def synthetic_gap_focused_direct_trace_audit_metrics(rows):
    audit_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_focused_direct_trace_audit.tsv")
    classes = Counter(row.get("focused_direct_class", "") for row in audit_rows)
    candidates = [
        row.get("synthetic_start_vm_ip", "")
        for row in audit_rows
        if row.get("promotion_candidate", "") == "yes"
    ]
    direct_rows = [
        row.get("synthetic_start_vm_ip", "")
        for row in audit_rows
        if int(row.get("focused_trace_rows", "0") or 0) > 0
    ]
    destinations = [
        row.get("example_end_vm_ip", "")
        for row in audit_rows
        if row.get("promotion_candidate", "") == "yes" and row.get("example_end_vm_ip", "")
    ]
    targets = Counter()
    sources = Counter()
    for row in audit_rows:
        if row.get("promotion_candidate", "") != "yes":
            continue
        targets[row.get("example_target_entry", "")] += 1
        sources[row.get("example_source_entry", "")] += 1

    add(rows, "gap_focused_direct", "synthetic_gap_focused_direct_trace_audit_rows", len(audit_rows),
        "Residual starts audited against focused live/state traces for rows that start exactly at the residual VM IP.")
    add(rows, "gap_focused_direct", "synthetic_gap_focused_direct_class_mix",
        ",".join(f"{key}:{value}" for key, value in classes.most_common()) or "-",
        "Direct focused trace class mix.")
    add(rows, "gap_focused_direct", "synthetic_gap_focused_direct_starts_with_rows", len(direct_rows),
        "Residual starts that have at least one focused trace row starting exactly at the synthetic start.")
    add(rows, "gap_focused_direct", "synthetic_gap_focused_direct_bridge_candidates", len(candidates),
        "Focused direct rows whose destination is a recovered block start and whose source/target/delta bytes are promotion-ready.")
    add(rows, "gap_focused_direct", "synthetic_gap_focused_direct_candidate_starts",
        ",".join(candidates) or "-",
        "Residual starts promoted into focused direct handler/block bridges.")
    add(rows, "gap_focused_direct", "synthetic_gap_focused_direct_candidate_destinations",
        ",".join(destinations) or "-",
        "Recovered block starts reached by focused direct bridges.")
    add(rows, "gap_focused_direct", "synthetic_gap_focused_direct_candidate_sources",
        ",".join(f"{key}:{value}" for key, value in sources.most_common()) or "-",
        "Source entries represented by focused direct bridges.")
    add(rows, "gap_focused_direct", "synthetic_gap_focused_direct_candidate_targets",
        ",".join(f"{key}:{value}" for key, value in targets.most_common()) or "-",
        "Target entries represented by focused direct bridges.")


def synthetic_gap_focused_sequence_audit_metrics(rows):
    audit_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_focused_sequence_audit.tsv")
    classes = Counter()
    terminals = Counter(row.get("chain_terminal", "") for row in audit_rows)
    candidates = Counter(row.get("sequence_promotion_candidate", "") for row in audit_rows)
    linked = [
        f"{row.get('synthetic_start_vm_ip')}->{row.get('example_following_residual_start')}"
        for row in audit_rows
        if row.get("example_following_residual_start", "")
    ]
    no_successor = [
        row.get("synthetic_start_vm_ip", "")
        for row in audit_rows
        if row.get("chain_terminal", "") == "raw_sequence_no_residual_successor"
    ]
    for row in audit_rows:
        for item in (row.get("raw_sequence_class_mix", "") or "").split(","):
            if item and ":" in item:
                key, value = item.rsplit(":", 1)
                classes[key] += int(value)

    add(rows, "gap_focused_sequence", "synthetic_gap_focused_sequence_audit_rows", len(audit_rows),
        "Residual starts audited against raw focused VMTAIL order, including indirect tail-site hops.")
    add(rows, "gap_focused_sequence", "synthetic_gap_focused_sequence_class_mix",
        ",".join(f"{key}:{value}" for key, value in classes.most_common()) or "-",
        "Raw focused sequence class mix across residual starts.")
    add(rows, "gap_focused_sequence", "synthetic_gap_focused_sequence_chain_terminal_mix",
        ",".join(f"{key}:{value}" for key, value in terminals.most_common()) or "-",
        "Where residual-start chains terminate after following residual-to-residual raw links.")
    add(rows, "gap_focused_sequence", "synthetic_gap_focused_sequence_candidate_mix",
        ",".join(f"{key}:{value}" for key, value in candidates.most_common()) or "-",
        "Promotion status of focused raw-sequence evidence.")
    add(rows, "gap_focused_sequence", "synthetic_gap_focused_sequence_residual_links", len(linked),
        "Residual starts whose next raw focused event is followed by another residual start.")
    add(rows, "gap_focused_sequence", "synthetic_gap_focused_sequence_residual_link_paths",
        ",".join(linked) or "-",
        "Raw focused residual-to-residual links.")
    add(rows, "gap_focused_sequence", "synthetic_gap_focused_sequence_no_successor_starts",
        ",".join(no_successor) or "-",
        "Residual starts whose chain does not reach a focused direct bridge in the current focused traces.")


def synthetic_gap_observed_chain_bridge_metrics(rows):
    bridge_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_observed_chain_bridge.tsv")
    classes = Counter(row.get("observed_chain_bridge_class", "") for row in bridge_rows)
    actions = Counter(row.get("bridge_action", "") for row in bridge_rows)
    relations = Counter(row.get("primary_vs_focused_first_hop", "") for row in bridge_rows)
    disabled = [
        row.get("synthetic_start_vm_ip", "")
        for row in bridge_rows
        if row.get("bridge_action", "") == "disabled_observed_chain_bridge"
    ]
    hard = [
        row.get("synthetic_start_vm_ip", "")
        for row in bridge_rows
        if row.get("bridge_action", "") == "hard_cfg"
    ]
    context = [
        row.get("synthetic_start_vm_ip", "")
        for row in bridge_rows
        if row.get("observed_chain_bridge_class", "") == "sequence_chain_to_recovered_context_reentry"
    ]
    direct_terminal = [
        row.get("synthetic_start_vm_ip", "")
        for row in bridge_rows
        if row.get("observed_chain_bridge_class", "") == "sequence_chain_to_focused_direct_bridge"
    ]

    add(rows, "gap_observed_chain", "synthetic_gap_observed_chain_bridge_rows", len(bridge_rows),
        "Focused raw-sequence residual chains joined to terminal focused direct bridges or recovered context reentries.")
    add(rows, "gap_observed_chain", "synthetic_gap_observed_chain_bridge_class_mix",
        ",".join(f"{key}:{value}" for key, value in classes.most_common()) or "-",
        "Observed focused residual chain bridge classes.")
    add(rows, "gap_observed_chain", "synthetic_gap_observed_chain_bridge_action_mix",
        ",".join(f"{key}:{value}" for key, value in actions.most_common()) or "-",
        "Whether observed chain evidence is hard CFG or disabled/comment-only bridge evidence.")
    add(rows, "gap_observed_chain", "synthetic_gap_observed_chain_primary_relation_mix",
        ",".join(f"{key}:{value}" for key, value in relations.most_common()) or "-",
        "Whether the focused first hop matches or diverges from the primary dynamic next-hook bridge.")
    add(rows, "gap_observed_chain", "synthetic_gap_observed_chain_disabled_bridge_starts",
        ",".join(disabled) or "-",
        "Residual starts with focused sequence evidence strong enough for disabled observed-chain bridge snippets, not hard CFG.")
    add(rows, "gap_observed_chain", "synthetic_gap_observed_chain_hard_cfg_starts",
        ",".join(hard) or "-",
        "Residual starts already promoted by focused direct rows starting exactly at the residual VM IP.")
    add(rows, "gap_observed_chain", "synthetic_gap_observed_chain_context_reentry_starts",
        ",".join(context) or "-",
        "Residual starts whose focused chain terminates at the recovered 0x122e3c context reentry.")
    add(rows, "gap_observed_chain", "synthetic_gap_observed_chain_focused_direct_terminal_starts",
        ",".join(direct_terminal) or "-",
        "Residual starts whose focused chain terminates in a focused direct bridge.")


def synthetic_gap_observed_chain_replay_metrics(rows):
    replay_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_observed_chain_replay.tsv")
    chains = []
    seen = set()
    for row in replay_rows:
        start = row.get("chain_start_vm_ip", "")
        if start and start not in seen:
            seen.add(start)
            chains.append(start)
    unique_steps = sorted({
        row.get("step_vm_ip", "")
        for row in replay_rows
        if row.get("step_vm_ip", "")
    }, key=lambda value: int(value, 16))
    roles = Counter(row.get("step_role", "") for row in replay_rows)
    actions = Counter(row.get("step_bridge_action", "") for row in replay_rows)
    chain_classes = Counter(
        row.get("chain_bridge_class", "")
        for row in replay_rows
        if row.get("step_index", "") == "0"
    )
    terminals = Counter(
        f"prog_bb_{int(row.get('terminal_dest_block', '0') or 0):04d}@{row.get('terminal_dest_vm_ip', '')}"
        for row in replay_rows
        if row.get("step_index", "") == "0" and row.get("terminal_dest_block", "")
    )

    add(rows, "gap_observed_chain_replay", "synthetic_gap_observed_chain_replay_rows", len(replay_rows),
        "Expanded disabled observed-chain bridge replay steps.")
    add(rows, "gap_observed_chain_replay", "synthetic_gap_observed_chain_replay_chains", len(chains),
        "Disabled observed-chain bridge snippets represented by replay rows.")
    add(rows, "gap_observed_chain_replay", "synthetic_gap_observed_chain_replay_unique_step_starts", len(unique_steps),
        "Unique residual/focused-direct VM starts represented in the replay rows.")
    add(rows, "gap_observed_chain_replay", "synthetic_gap_observed_chain_replay_step_role_mix",
        ",".join(f"{key}:{value}" for key, value in roles.most_common()) or "-",
        "Role of each emitted replay step within the disabled chain snippets.")
    add(rows, "gap_observed_chain_replay", "synthetic_gap_observed_chain_replay_step_action_mix",
        ",".join(f"{key}:{value}" for key, value in actions.most_common()) or "-",
        "Hard/direct versus disabled/comment-only classification of the per-step source rows.")
    add(rows, "gap_observed_chain_replay", "synthetic_gap_observed_chain_replay_chain_class_mix",
        ",".join(f"{key}:{value}" for key, value in chain_classes.most_common()) or "-",
        "Terminal class of each disabled observed-chain replay snippet.")
    add(rows, "gap_observed_chain_replay", "synthetic_gap_observed_chain_replay_terminal_mix",
        ",".join(f"{key}:{value}" for key, value in terminals.most_common()) or "-",
        "Recovered terminal blocks reached by disabled observed-chain replay snippets.")
    add(rows, "gap_observed_chain_replay", "synthetic_gap_observed_chain_replay_chain_starts",
        ",".join(chains) or "-",
        "Disabled observed-chain replay snippet starts.")
    add(rows, "gap_observed_chain_replay", "synthetic_gap_observed_chain_replay_unique_step_start_list",
        ",".join(unique_steps) or "-",
        "Unique VM starts that appear as replay steps.")


def synthetic_gap_chain_slot_reconciliation_metrics(rows):
    recon_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_chain_slot_reconciliation.tsv")
    relations = Counter(row.get("slot_target_relation", "") for row in recon_rows)
    classes = Counter(row.get("reconciliation_class", "") for row in recon_rows)
    roles = Counter(row.get("step_role", "") for row in recon_rows)
    terminals = [
        row for row in recon_rows
        if row.get("step_role", "").endswith("terminal_step")
    ]
    sampled_supported = [
        row.get("step_vm_ip", "")
        for row in recon_rows
        if row.get("reconciliation_class", "") == "symbolic_slot_with_sampled_dynamic_target_support"
    ]
    rejecting = [
        row.get("step_vm_ip", "")
        for row in recon_rows
        if row.get("reconciliation_class", "") == "table_read_rejects_focused_first_hop_as_direct_slot"
    ]

    add(rows, "gap_chain_slot_reconciliation", "synthetic_gap_chain_slot_reconciliation_rows", len(recon_rows),
        "Observed-chain replay steps reconciled against symbolic transfer and table-read evidence.")
    add(rows, "gap_chain_slot_reconciliation", "synthetic_gap_chain_slot_reconciliation_terminal_rows", len(terminals),
        "Terminal replay steps included in the slot reconciliation audit.")
    add(rows, "gap_chain_slot_reconciliation", "synthetic_gap_chain_slot_reconciliation_relation_mix",
        ",".join(f"{key}:{value}" for key, value in relations.most_common()) or "-",
        "Whether table offsets directly match focused first-hop target slots.")
    add(rows, "gap_chain_slot_reconciliation", "synthetic_gap_chain_slot_reconciliation_class_mix",
        ",".join(f"{key}:{value}" for key, value in classes.most_common()) or "-",
        "Final reconciliation class between slot/table evidence and focused first-hop targets.")
    add(rows, "gap_chain_slot_reconciliation", "synthetic_gap_chain_slot_reconciliation_role_mix",
        ",".join(f"{key}:{value}" for key, value in roles.most_common()) or "-",
        "Replay step roles represented in the slot reconciliation audit.")
    add(rows, "gap_chain_slot_reconciliation", "synthetic_gap_chain_slot_sampled_supported_steps",
        ",".join(sampled_supported) or "-",
        "Step VM starts whose symbolic slot also has sampled dynamic-target support.")
    add(rows, "gap_chain_slot_reconciliation", "synthetic_gap_chain_slot_table_rejecting_steps",
        ",".join(rejecting) or "-",
        "Step VM starts where table-read evidence rejects the focused first-hop as a direct slot.")


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


def synthetic_gap_allstatic_reentry_metrics(rows):
    allstatic_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_allstatic_reentry_probe.tsv")
    statuses = Counter(row.get("allstatic_status", "") for row in allstatic_rows)
    evidence = Counter(row.get("allstatic_evidence_class", "") for row in allstatic_rows)
    actions = Counter(row.get("hard_cfg_action", "") for row in allstatic_rows)
    all_starts = sorted({
        row.get("synthetic_start_vm_ip", "")
        for row in allstatic_rows
        if row.get("synthetic_start_vm_ip", "")
    }, key=lambda value: int(value, 16))
    seen_rows = [
        row for row in allstatic_rows
        if int(row.get("allstatic_start_events", "0") or 0) > 0
    ]
    seen_starts = sorted({
        row.get("synthetic_start_vm_ip", "")
        for row in seen_rows
        if row.get("synthetic_start_vm_ip", "")
    }, key=lambda value: int(value, 16))
    exact_rows = [
        row for row in allstatic_rows
        if int(row.get("allstatic_exact_match_events", "0") or 0) > 0
    ]
    exact_starts = sorted({
        row.get("synthetic_start_vm_ip", "")
        for row in exact_rows
        if row.get("synthetic_start_vm_ip", "")
    }, key=lambda value: int(value, 16))
    dynamic_match_rows = [
        row for row in allstatic_rows
        if row.get("allstatic_status", "") == "allstatic_next_matches_dynamic_reentry"
    ]
    paths = [
        f"{row.get('synthetic_start_vm_ip')}->{row.get('inferred_next_source_entry')}@"
        f"{row.get('inferred_next_source_start_vm_ip')}->{row.get('expected_next_end_vm_ip')}"
        for row in dynamic_match_rows
    ]

    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_probe_rows", len(allstatic_rows),
        "Rows correlating live-in dynamic reentry expectations with the all-static VMTAIL sequence.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_unique_starts", len(all_starts),
        "Unique live-in synthetic starts represented by the all-static reentry probe.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_seen_rows", len(seen_rows),
        "Rows whose live-in start appeared in the all-static trace.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_seen_starts", len(seen_starts),
        "Unique live-in starts seen in the all-static trace.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_exact_match_rows", len(exact_rows),
        "Rows where the immediate next all-static tail hook matched the dynamic reentry event.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_exact_match_starts", len(exact_starts),
        "Unique live-in starts with an exact immediate-next all-static match.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_dynamic_match_rows", len(dynamic_match_rows),
        "Byte-matched dynamic reentry rows corroborated by all-static immediate next-hook evidence.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_not_seen_rows",
        statuses.get("not_seen_in_allstatic", 0),
        "Rows absent from the 250k-event all-static trace window.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_status_mix",
        ",".join(f"{key}:{value}" for key, value in statuses.most_common()) or "-",
        "All-static correlation status mix.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_evidence_mix",
        ",".join(f"{key}:{value}" for key, value in evidence.most_common()) or "-",
        "All-static evidence class mix.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_action_mix",
        ",".join(f"{key}:{value}" for key, value in actions.most_common()) or "-",
        "Whether all-static rows are hard CFG promotions or comment-only evidence.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_hard_promotions",
        actions.get("hard_cfg", 0),
        "Rows promoted to hard CFG edges by this probe; should remain zero without hidden-chain replay.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_seen_starts_list",
        ",".join(seen_starts) or "-",
        "Live-in starts observed in the all-static trace window.")
    add(rows, "gap_allstatic_reentry", "synthetic_gap_allstatic_reentry_dynamic_match_paths",
        ",".join(paths) or "-",
        "All-static corroborated next-hooked reentries retained as comment-only evidence.")


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


def native_acceleration_metrics(rows):
    makefile = read_text("Makefile")
    unique_source = read_text("vm_instruction_unique_fast.c")
    unique_binary = Path("vm_instruction_unique_fast")
    segment_source = read_text("vm_bytecode_segments_fast.c")
    segment_binary = Path("vm_bytecode_segments_fast")
    add(rows, "native_acceleration", "instruction_unique_fast_source_lines", line_count(unique_source),
        "Native exact-instruction reducer source size.")
    add(rows, "native_acceleration", "instruction_unique_fast_binary_bytes", file_size(unique_binary),
        "Current compiled native exact-instruction reducer size.")
    add(rows, "native_acceleration", "instruction_unique_uses_native_reducer",
        "yes" if "./vm_instruction_unique_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv" in makefile else "no",
        "Whether the instruction-unique Make target uses the native reducer.")
    add(rows, "native_acceleration", "instruction_unique_fast_check", "make instruction-unique-fast-check",
        "Byte-for-byte parity gate against vm_bytecode_recover.py --instructions.")
    add(rows, "native_acceleration", "bytecode_segments_fast_source_lines", line_count(segment_source),
        "Native bytecode segment reducer source size.")
    add(rows, "native_acceleration", "bytecode_segments_fast_binary_bytes", file_size(segment_binary),
        "Current compiled native bytecode segment reducer size.")
    add(rows, "native_acceleration", "bytecode_segments_sampled_uses_native_reducer",
        "yes" if "./vm_bytecode_segments_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv --include-sampled" in makefile else "no",
        "Whether sampled bytecode segment recovery uses the native reducer.")
    add(rows, "native_acceleration", "bytecode_segments_fast_check", "make bytecode-segments-fast-check",
        "Byte-for-byte parity gate against vm_bytecode_recover.py raw exact, raw sampled, and final augmented sampled segment modes.")


def build_rows():
    rows = []
    artifact_metrics(rows)
    c_shape_metrics(rows)
    coverage_metrics(rows)
    synthetic_gap_probe_metrics(rows)
    synthetic_gap_dynamic_stitch_metrics(rows)
    synthetic_gap_symbolic_successor_metrics(rows)
    synthetic_gap_chain_probe_metrics(rows)
    synthetic_gap_residual_audit_metrics(rows)
    synthetic_gap_concrete_state_audit_metrics(rows)
    synthetic_gap_state_trace_target_metrics(rows)
    synthetic_gap_live_context_audit_metrics(rows)
    synthetic_gap_table_read_diagnostic_metrics(rows)
    synthetic_gap_table_memory_probe_metrics(rows)
    synthetic_gap_runtime_table_memory_probe_metrics(rows)
    synthetic_gap_sampled_control_correlation_metrics(rows)
    synthetic_gap_focused_direct_trace_audit_metrics(rows)
    synthetic_gap_focused_sequence_audit_metrics(rows)
    synthetic_gap_observed_chain_bridge_metrics(rows)
    synthetic_gap_observed_chain_replay_metrics(rows)
    synthetic_gap_chain_slot_reconciliation_metrics(rows)
    synthetic_gap_live_in_role_metrics(rows)
    synthetic_gap_final_tail_site_metrics(rows)
    synthetic_gap_live_in_reentry_metrics(rows)
    synthetic_gap_allstatic_reentry_metrics(rows)
    native_acceleration_metrics(rows)
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
