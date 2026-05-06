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
    ("path_handlers_frontier", TRACE_DIR / "vm_path_handlers_frontier_pseudocode.c"),
    ("path_frontier_slot_audit_c", TRACE_DIR / "vm_path_frontier_slot_audit.c"),
    ("path_frontier_slot_audit_tsv", TRACE_DIR / "vm_path_frontier_slot_audit.tsv"),
    ("path_frontier_slot_audit_md", TRACE_DIR / "vm_path_frontier_slot_audit.md"),
    ("native_executable_coverage_audit_c", TRACE_DIR / "vm_native_executable_coverage_audit.c"),
    ("native_executable_coverage_audit_tsv", TRACE_DIR / "vm_native_executable_coverage_audit.tsv"),
    ("native_executable_coverage_audit_md", TRACE_DIR / "vm_native_executable_coverage_audit.md"),
    ("native_function_inventory_c", TRACE_DIR / "vm_native_function_inventory.c"),
    ("native_function_inventory_tsv", TRACE_DIR / "vm_native_function_inventory.tsv"),
    ("native_function_inventory_md", TRACE_DIR / "vm_native_function_inventory.md"),
    ("native_retdec_gap_queue_c", TRACE_DIR / "vm_native_retdec_gap_queue.c"),
    ("native_retdec_gap_queue_tsv", TRACE_DIR / "vm_native_retdec_gap_queue.tsv"),
    ("native_retdec_gap_queue_md", TRACE_DIR / "vm_native_retdec_gap_queue.md"),
    ("native_gap_retdec_batch00", TRACE_DIR / "vm_native_gap_retdec_batch00.c"),
    ("native_gap_retdec_batch01", TRACE_DIR / "vm_native_gap_retdec_batch01.c"),
    ("native_gap_retdec_batch02", TRACE_DIR / "vm_native_gap_retdec_batch02.c"),
    ("native_gap_retdec_batch03", TRACE_DIR / "vm_native_gap_retdec_batch03.c"),
    ("native_gap_retdec_batch04", TRACE_DIR / "vm_native_gap_retdec_batch04.c"),
    ("native_gap_retdec_batch05", TRACE_DIR / "vm_native_gap_retdec_batch05.c"),
    ("native_gap_retdec_batch06", TRACE_DIR / "vm_native_gap_retdec_batch06.c"),
    ("native_gap_retdec_batch07", TRACE_DIR / "vm_native_gap_retdec_batch07.c"),
    ("native_gap_retdec_batch08", TRACE_DIR / "vm_native_gap_retdec_batch08.c"),
    ("native_gap_retdec_batch09", TRACE_DIR / "vm_native_gap_retdec_batch09.c"),
    ("native_gap_retdec_batch10", TRACE_DIR / "vm_native_gap_retdec_batch10.c"),
    ("native_gap_retdec_batch11", TRACE_DIR / "vm_native_gap_retdec_batch11.c"),
    ("native_gap_retdec_batch12", TRACE_DIR / "vm_native_gap_retdec_batch12.c"),
    ("native_gap_retdec_batch13", TRACE_DIR / "vm_native_gap_retdec_batch13.c"),
    ("native_gap_retdec_batch14", TRACE_DIR / "vm_native_gap_retdec_batch14.c"),
    ("native_gap_retdec_batch15", TRACE_DIR / "vm_native_gap_retdec_batch15.c"),
    ("native_gap_retdec_batch16", TRACE_DIR / "vm_native_gap_retdec_batch16.c"),
    ("native_gap_retdec_batch17", TRACE_DIR / "vm_native_gap_retdec_batch17.c"),
    ("native_gap_retdec_batch18", TRACE_DIR / "vm_native_gap_retdec_batch18.c"),
    ("native_gap_retdec_batch19", TRACE_DIR / "vm_native_gap_retdec_batch19.c"),
    ("native_gap_retdec_batch20", TRACE_DIR / "vm_native_gap_retdec_batch20.c"),
    ("native_gap_retdec_batch21", TRACE_DIR / "vm_native_gap_retdec_batch21.c"),
    ("native_gap_retdec_batch22", TRACE_DIR / "vm_native_gap_retdec_batch22.c"),
    ("native_gap_retdec_batch23", TRACE_DIR / "vm_native_gap_retdec_batch23.c"),
    ("native_gap_retdec_batch24", TRACE_DIR / "vm_native_gap_retdec_batch24.c"),
    ("native_gap_retdec_batch25", TRACE_DIR / "vm_native_gap_retdec_batch25.c"),
    ("native_gap_retdec_batch26", TRACE_DIR / "vm_native_gap_retdec_batch26.c"),
    ("native_gap_retdec_batch27", TRACE_DIR / "vm_native_gap_retdec_batch27.c"),
    ("native_gap_retdec_batch28", TRACE_DIR / "vm_native_gap_retdec_batch28.c"),
    ("native_gap_retdec_batch29", TRACE_DIR / "vm_native_gap_retdec_batch29.c"),
    ("native_gap_retdec_batch30", TRACE_DIR / "vm_native_gap_retdec_batch30.c"),
    ("native_gap_retdec_batch31", TRACE_DIR / "vm_native_gap_retdec_batch31.c"),
    ("native_gap_retdec_batch32", TRACE_DIR / "vm_native_gap_retdec_batch32.c"),
    ("native_gap_retdec_batch33", TRACE_DIR / "vm_native_gap_retdec_batch33.c"),
    ("native_gap_retdec_batch34", TRACE_DIR / "vm_native_gap_retdec_batch34.c"),
    ("native_gap_retdec_batch35", TRACE_DIR / "vm_native_gap_retdec_batch35.c"),
    ("native_gap_retdec_batch36", TRACE_DIR / "vm_native_gap_retdec_batch36.c"),
    ("native_gap_retdec_batch37", TRACE_DIR / "vm_native_gap_retdec_batch37.c"),
    ("native_gap_retdec_batch38", TRACE_DIR / "vm_native_gap_retdec_batch38.c"),
    ("native_gap_retdec_batch39", TRACE_DIR / "vm_native_gap_retdec_batch39.c"),
    ("native_gap_retdec_batch40", TRACE_DIR / "vm_native_gap_retdec_batch40.c"),
    ("native_gap_retdec_batch41", TRACE_DIR / "vm_native_gap_retdec_batch41.c"),
    ("native_gap_retdec_batch42", TRACE_DIR / "vm_native_gap_retdec_batch42.c"),
    ("native_gap_retdec_batch43", TRACE_DIR / "vm_native_gap_retdec_batch43.c"),
    ("native_gap_retdec_batch44", TRACE_DIR / "vm_native_gap_retdec_batch44.c"),
    ("native_gap_retdec_batch45", TRACE_DIR / "vm_native_gap_retdec_batch45.c"),
    ("native_gap_retdec_batch46", TRACE_DIR / "vm_native_gap_retdec_batch46.c"),
    ("native_gap_retdec_batch47", TRACE_DIR / "vm_native_gap_retdec_batch47.c"),
    ("native_gap_retdec_batch48", TRACE_DIR / "vm_native_gap_retdec_batch48.c"),
    ("native_gap_retdec_batch49", TRACE_DIR / "vm_native_gap_retdec_batch49.c"),
    ("native_gap_retdec_batch50", TRACE_DIR / "vm_native_gap_retdec_batch50.c"),
    ("native_gap_retdec_batch51", TRACE_DIR / "vm_native_gap_retdec_batch51.c"),
    ("native_gap_retdec_batch52", TRACE_DIR / "vm_native_gap_retdec_batch52.c"),
    ("native_gap_retdec_batch53", TRACE_DIR / "vm_native_gap_retdec_batch53.c"),
    ("native_gap_retdec_batch54", TRACE_DIR / "vm_native_gap_retdec_batch54.c"),
    ("native_gap_retdec_batch55", TRACE_DIR / "vm_native_gap_retdec_batch55.c"),
    ("direct_blocks_top", TRACE_DIR / "vm_pseudocode_top.c"),
    ("program_blocks_top", TRACE_DIR / "vm_program_pseudocode_top.c"),
    ("program_blocks_full", TRACE_DIR / "vm_program_pseudocode_full.c"),
    ("source_bundle", TRACE_DIR / "vm_recovered_source_bundle.c"),
    ("source_all_evidence_bundle", TRACE_DIR / "vm_recovered_source_all_evidence_bundle.c"),
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
    ("synthetic_gap_unresolved_family_audit_tsv", TRACE_DIR / "vm_synthetic_gap_unresolved_family_audit.tsv"),
    ("synthetic_gap_unresolved_family_audit_md", TRACE_DIR / "vm_synthetic_gap_unresolved_family_audit.md"),
    ("synthetic_gap_source299_context_probe_tsv", TRACE_DIR / "vm_synthetic_gap_source299_context_probe.tsv"),
    ("synthetic_gap_source299_context_probe_md", TRACE_DIR / "vm_synthetic_gap_source299_context_probe.md"),
    ("synthetic_gap_source299_ret_patch_probe_tsv", TRACE_DIR / "vm_synthetic_gap_source299_ret_patch_probe.tsv"),
    ("synthetic_gap_source299_ret_patch_probe_md", TRACE_DIR / "vm_synthetic_gap_source299_ret_patch_probe.md"),
    ("synthetic_gap_sampled_ret_patch_probe_tsv", TRACE_DIR / "vm_synthetic_gap_sampled_ret_patch_probe.tsv"),
    ("synthetic_gap_sampled_ret_patch_probe_md", TRACE_DIR / "vm_synthetic_gap_sampled_ret_patch_probe.md"),
    ("synthetic_gap_ret_patch_native_target_atlas_tsv", TRACE_DIR / "vm_synthetic_gap_ret_patch_native_target_atlas.tsv"),
    ("synthetic_gap_ret_patch_native_target_atlas_md", TRACE_DIR / "vm_synthetic_gap_ret_patch_native_target_atlas.md"),
    ("native_ret_patch_targets", TRACE_DIR / "vm_native_ret_patch_targets.c"),
    ("native_ret_patch_epilogues_retdec", TRACE_DIR / "vm_native_ret_patch_epilogues_retdec.c"),
    ("native_ret_patch_source278_retdec", TRACE_DIR / "vm_native_ret_patch_source278_retdec.c"),
    ("native_ret_patch_followups_c", TRACE_DIR / "vm_native_ret_patch_followups.c"),
    ("native_ret_patch_followups_tsv", TRACE_DIR / "vm_native_ret_patch_followups.tsv"),
    ("native_ret_patch_followups_md", TRACE_DIR / "vm_native_ret_patch_followups.md"),
    ("native_ret_patch_followup_retdec", TRACE_DIR / "vm_native_ret_patch_followup_retdec.c"),
    ("native_obfuscated_islands_c", TRACE_DIR / "vm_native_obfuscated_islands.c"),
    ("native_obfuscated_islands_tsv", TRACE_DIR / "vm_native_obfuscated_islands.tsv"),
    ("native_obfuscated_islands_md", TRACE_DIR / "vm_native_obfuscated_islands.md"),
    ("native_obfuscated_second_stage_c", TRACE_DIR / "vm_native_obfuscated_second_stage.c"),
    ("native_obfuscated_second_stage_tsv", TRACE_DIR / "vm_native_obfuscated_second_stage.tsv"),
    ("native_obfuscated_second_stage_md", TRACE_DIR / "vm_native_obfuscated_second_stage.md"),
    ("native_obfuscated_second_stage_dynamic_c", TRACE_DIR / "vm_native_obfuscated_second_stage_dynamic.c"),
    ("native_obfuscated_second_stage_dynamic_tsv", TRACE_DIR / "vm_native_obfuscated_second_stage_dynamic.tsv"),
    ("native_obfuscated_second_stage_dynamic_md", TRACE_DIR / "vm_native_obfuscated_second_stage_dynamic.md"),
    ("native_obfuscated_second_stage_slot_proof_c", TRACE_DIR / "vm_native_obfuscated_second_stage_slot_proof.c"),
    ("native_obfuscated_second_stage_slot_proof_tsv", TRACE_DIR / "vm_native_obfuscated_second_stage_slot_proof.tsv"),
    ("native_obfuscated_second_stage_slot_proof_md", TRACE_DIR / "vm_native_obfuscated_second_stage_slot_proof.md"),
    ("native_obfuscated_second_stage_stack_source_c", TRACE_DIR / "vm_native_obfuscated_second_stage_stack_source.c"),
    ("native_obfuscated_second_stage_stack_source_tsv", TRACE_DIR / "vm_native_obfuscated_second_stage_stack_source.tsv"),
    ("native_obfuscated_second_stage_stack_source_md", TRACE_DIR / "vm_native_obfuscated_second_stage_stack_source.md"),
    ("native_obfuscated_second_stage_rbx_provenance_c", TRACE_DIR / "vm_native_obfuscated_second_stage_rbx_provenance.c"),
    ("native_obfuscated_second_stage_rbx_provenance_tsv", TRACE_DIR / "vm_native_obfuscated_second_stage_rbx_provenance.tsv"),
    ("native_obfuscated_second_stage_rbx_provenance_md", TRACE_DIR / "vm_native_obfuscated_second_stage_rbx_provenance.md"),
    ("native_obfuscated_second_stage_model_c", TRACE_DIR / "vm_native_obfuscated_second_stage_model.c"),
    ("native_obfuscated_second_stage_model_tsv", TRACE_DIR / "vm_native_obfuscated_second_stage_model.tsv"),
    ("native_obfuscated_second_stage_model_md", TRACE_DIR / "vm_native_obfuscated_second_stage_model.md"),
    ("native_obfuscated_control_model_c", TRACE_DIR / "vm_native_obfuscated_control_model.c"),
    ("native_obfuscated_control_model_tsv", TRACE_DIR / "vm_native_obfuscated_control_model.tsv"),
    ("native_obfuscated_control_model_md", TRACE_DIR / "vm_native_obfuscated_control_model.md"),
    ("native_ret_patch_hidden_bridge_c", TRACE_DIR / "vm_native_ret_patch_hidden_bridge.c"),
    ("native_ret_patch_hidden_bridge_tsv", TRACE_DIR / "vm_native_ret_patch_hidden_bridge.tsv"),
    ("native_ret_patch_hidden_bridge_md", TRACE_DIR / "vm_native_ret_patch_hidden_bridge.md"),
    ("native_handler_environment_coverage_c", TRACE_DIR / "vm_native_handler_environment_coverage.c"),
    ("native_handler_environment_coverage_tsv", TRACE_DIR / "vm_native_handler_environment_coverage.tsv"),
    ("native_handler_environment_coverage_md", TRACE_DIR / "vm_native_handler_environment_coverage.md"),
    ("config_coverage_frontier_c", TRACE_DIR / "vm_config_coverage_frontier.c"),
    ("config_coverage_frontier_tsv", TRACE_DIR / "vm_config_coverage_frontier.tsv"),
    ("config_coverage_frontier_md", TRACE_DIR / "vm_config_coverage_frontier.md"),
    ("binary_data_sections_c", TRACE_DIR / "vm_binary_data_sections.c"),
    ("binary_data_sections_tsv", TRACE_DIR / "vm_binary_data_sections.tsv"),
    ("binary_data_sections_md", TRACE_DIR / "vm_binary_data_sections.md"),
    ("static_only_handler_queue_c", TRACE_DIR / "vm_static_only_handler_queue.c"),
    ("static_only_handler_queue_tsv", TRACE_DIR / "vm_static_only_handler_queue.tsv"),
    ("static_only_handler_queue_md", TRACE_DIR / "vm_static_only_handler_queue.md"),
    ("static_only_tier0_models_c", TRACE_DIR / "vm_static_only_tier0_handler_models.c"),
    ("static_only_tier0_models_tsv", TRACE_DIR / "vm_static_only_tier0_handler_models.tsv"),
    ("static_only_tier0_models_md", TRACE_DIR / "vm_static_only_tier0_handler_models.md"),
    ("static_only_tier1_models_c", TRACE_DIR / "vm_static_only_tier1_handler_models.c"),
    ("static_only_tier1_models_tsv", TRACE_DIR / "vm_static_only_tier1_handler_models.tsv"),
    ("static_only_tier1_models_md", TRACE_DIR / "vm_static_only_tier1_handler_models.md"),
    ("static_only_tier2_split_c", TRACE_DIR / "vm_static_only_tier2_split_models.c"),
    ("static_only_tier2_split_tsv", TRACE_DIR / "vm_static_only_tier2_split_models.tsv"),
    ("static_only_tier2_split_md", TRACE_DIR / "vm_static_only_tier2_split_models.md"),
    ("static_only_tier3_shared_c", TRACE_DIR / "vm_static_only_tier3_shared_models.c"),
    ("static_only_tier3_shared_tsv", TRACE_DIR / "vm_static_only_tier3_shared_models.tsv"),
    ("static_only_tier3_shared_md", TRACE_DIR / "vm_static_only_tier3_shared_models.md"),
    ("static_only_tier4_callret_c", TRACE_DIR / "vm_static_only_tier4_callret_models.c"),
    ("static_only_tier4_callret_tsv", TRACE_DIR / "vm_static_only_tier4_callret_models.tsv"),
    ("static_only_tier4_callret_md", TRACE_DIR / "vm_static_only_tier4_callret_models.md"),
    ("static_only_tier5_large_c", TRACE_DIR / "vm_static_only_tier5_large_models.c"),
    ("static_only_tier5_large_tsv", TRACE_DIR / "vm_static_only_tier5_large_models.tsv"),
    ("static_only_tier5_large_md", TRACE_DIR / "vm_static_only_tier5_large_models.md"),
    ("target_only_handlers_retdec", TRACE_DIR / "vm_target_only_handlers_retdec.c"),
    ("unobserved_handlers_retdec_batch00", TRACE_DIR / "vm_unobserved_handlers_retdec_batch00.c"),
    ("unobserved_handlers_retdec_batch01", TRACE_DIR / "vm_unobserved_handlers_retdec_batch01.c"),
    ("unobserved_handlers_retdec_batch02", TRACE_DIR / "vm_unobserved_handlers_retdec_batch02.c"),
    ("unobserved_handlers_retdec_batch03", TRACE_DIR / "vm_unobserved_handlers_retdec_batch03.c"),
    ("unobserved_handlers_retdec_batch04", TRACE_DIR / "vm_unobserved_handlers_retdec_batch04.c"),
    ("unobserved_handlers_retdec_batch05", TRACE_DIR / "vm_unobserved_handlers_retdec_batch05.c"),
    ("unobserved_handlers_retdec_batch06", TRACE_DIR / "vm_unobserved_handlers_retdec_batch06.c"),
    ("weak_handlers_retdec", TRACE_DIR / "vm_weak_handlers_retdec.c"),
    ("validated_handlers_retdec_batch00", TRACE_DIR / "vm_validated_handlers_retdec_batch00.c"),
    ("validated_handlers_retdec_batch01", TRACE_DIR / "vm_validated_handlers_retdec_batch01.c"),
    ("validated_handlers_retdec_batch02", TRACE_DIR / "vm_validated_handlers_retdec_batch02.c"),
    ("validated_handlers_retdec_batch03", TRACE_DIR / "vm_validated_handlers_retdec_batch03.c"),
    ("validated_handlers_retdec_batch04", TRACE_DIR / "vm_validated_handlers_retdec_batch04.c"),
    ("validated_handlers_retdec_batch05", TRACE_DIR / "vm_validated_handlers_retdec_batch05.c"),
    ("validated_handlers_retdec_batch06", TRACE_DIR / "vm_validated_handlers_retdec_batch06.c"),
    ("handler_retdec_index_tsv", TRACE_DIR / "vm_handler_retdec_index.tsv"),
    ("handler_retdec_index_md", TRACE_DIR / "vm_handler_retdec_index.md"),
    ("unresolved_family_chains_c", TRACE_DIR / "vm_unresolved_family_chains.c"),
    ("synthetic_gap_live_snapshot_transfer_probe_tsv", TRACE_DIR / "vm_synthetic_gap_live_snapshot_transfer_probe.tsv"),
    ("synthetic_gap_live_snapshot_transfer_probe_md", TRACE_DIR / "vm_synthetic_gap_live_snapshot_transfer_probe.md"),
    ("synthetic_gap_live_table_evidence_tsv", TRACE_DIR / "vm_synthetic_gap_live_table_evidence.tsv"),
    ("synthetic_gap_live_table_evidence_md", TRACE_DIR / "vm_synthetic_gap_live_table_evidence.md"),
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
        return list(csv.DictReader(handle, delimiter="\t", quoting=csv.QUOTE_NONE))


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
    path_handlers_frontier = read_text(TRACE_DIR / "vm_path_handlers_frontier_pseudocode.c")
    path_frontier_slot_audit = read_text(TRACE_DIR / "vm_path_frontier_slot_audit.c")
    path_frontier_slot_audit_index = read_tsv(TRACE_DIR / "vm_path_frontier_slot_audit.tsv")
    direct_top = read_text(TRACE_DIR / "vm_pseudocode_top.c")
    program_top = read_text(TRACE_DIR / "vm_program_pseudocode_top.c")
    program_full = read_text(TRACE_DIR / "vm_program_pseudocode_full.c")
    bundle = read_text(TRACE_DIR / "vm_recovered_source_bundle.c")
    all_evidence_bundle = read_text(TRACE_DIR / "vm_recovered_source_all_evidence_bundle.c")
    native_ret_patch_targets = read_text(TRACE_DIR / "vm_native_ret_patch_targets.c")
    native_ret_patch_epilogues_retdec = read_text(TRACE_DIR / "vm_native_ret_patch_epilogues_retdec.c")
    native_ret_patch_source278_retdec = read_text(TRACE_DIR / "vm_native_ret_patch_source278_retdec.c")
    native_ret_patch_followups = read_text(TRACE_DIR / "vm_native_ret_patch_followups.c")
    native_ret_patch_followup_index = read_tsv(TRACE_DIR / "vm_native_ret_patch_followups.tsv")
    native_ret_patch_followup_retdec = read_text(TRACE_DIR / "vm_native_ret_patch_followup_retdec.c")
    native_obfuscated_islands = read_text(TRACE_DIR / "vm_native_obfuscated_islands.c")
    native_obfuscated_island_index = read_tsv(TRACE_DIR / "vm_native_obfuscated_islands.tsv")
    native_obfuscated_second_stage = read_text(TRACE_DIR / "vm_native_obfuscated_second_stage.c")
    native_obfuscated_second_stage_index = read_tsv(TRACE_DIR / "vm_native_obfuscated_second_stage.tsv")
    native_obfuscated_second_stage_dynamic = read_text(TRACE_DIR / "vm_native_obfuscated_second_stage_dynamic.c")
    native_obfuscated_second_stage_dynamic_index = read_tsv(TRACE_DIR / "vm_native_obfuscated_second_stage_dynamic.tsv")
    native_obfuscated_second_stage_slot_proof = read_text(TRACE_DIR / "vm_native_obfuscated_second_stage_slot_proof.c")
    native_obfuscated_second_stage_slot_proof_index = read_tsv(TRACE_DIR / "vm_native_obfuscated_second_stage_slot_proof.tsv")
    native_obfuscated_second_stage_stack_source = read_text(TRACE_DIR / "vm_native_obfuscated_second_stage_stack_source.c")
    native_obfuscated_second_stage_stack_source_index = read_tsv(TRACE_DIR / "vm_native_obfuscated_second_stage_stack_source.tsv")
    native_obfuscated_second_stage_rbx_provenance = read_text(TRACE_DIR / "vm_native_obfuscated_second_stage_rbx_provenance.c")
    native_obfuscated_second_stage_rbx_provenance_index = read_tsv(TRACE_DIR / "vm_native_obfuscated_second_stage_rbx_provenance.tsv")
    native_obfuscated_second_stage_model = read_text(TRACE_DIR / "vm_native_obfuscated_second_stage_model.c")
    native_obfuscated_second_stage_model_index = read_tsv(TRACE_DIR / "vm_native_obfuscated_second_stage_model.tsv")
    native_obfuscated_control_model = read_text(TRACE_DIR / "vm_native_obfuscated_control_model.c")
    native_obfuscated_control_model_index = read_tsv(TRACE_DIR / "vm_native_obfuscated_control_model.tsv")
    native_ret_patch_hidden_bridge = read_text(TRACE_DIR / "vm_native_ret_patch_hidden_bridge.c")
    native_ret_patch_hidden_bridge_index = read_tsv(TRACE_DIR / "vm_native_ret_patch_hidden_bridge.tsv")
    native_handler_environment_coverage = read_text(TRACE_DIR / "vm_native_handler_environment_coverage.c")
    native_handler_environment_coverage_index = read_tsv(TRACE_DIR / "vm_native_handler_environment_coverage.tsv")
    config_coverage_frontier = read_text(TRACE_DIR / "vm_config_coverage_frontier.c")
    config_coverage_frontier_index = read_tsv(TRACE_DIR / "vm_config_coverage_frontier.tsv")
    config_coverage_metric_rows = [row for row in config_coverage_frontier_index if row.get("row_type", "") == "metric"]
    config_coverage_frontier_rows = [row for row in config_coverage_frontier_index if row.get("row_type", "") == "frontier"]
    config_coverage_frontier_kinds = Counter(row.get("frontier_kind", "") for row in config_coverage_frontier_rows)
    native_executable_coverage_audit = read_text(TRACE_DIR / "vm_native_executable_coverage_audit.c")
    native_executable_coverage_audit_index = read_tsv(TRACE_DIR / "vm_native_executable_coverage_audit.tsv")
    native_executable_section_rows = [row for row in native_executable_coverage_audit_index if row.get("row_type", "") == "section"]
    native_executable_range_rows = [row for row in native_executable_coverage_audit_index if row.get("row_type", "") == "range"]
    native_executable_gap_rows = [row for row in native_executable_coverage_audit_index if row.get("row_type", "") == "gap"]
    native_function_inventory = read_text(TRACE_DIR / "vm_native_function_inventory.c")
    native_function_inventory_index = read_tsv(TRACE_DIR / "vm_native_function_inventory.tsv")
    native_function_kind_mix = Counter(row.get("kind", "") for row in native_function_inventory_index)
    native_retdec_gap_queue = read_text(TRACE_DIR / "vm_native_retdec_gap_queue.c")
    native_retdec_gap_queue_index = read_tsv(TRACE_DIR / "vm_native_retdec_gap_queue.tsv")
    native_retdec_gap_queue_tiers = Counter(row.get("priority_class", "") for row in native_retdec_gap_queue_index)
    native_gap_retdec_batch00 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch00.c")
    native_gap_retdec_batch01 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch01.c")
    native_gap_retdec_batch02 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch02.c")
    native_gap_retdec_batch03 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch03.c")
    native_gap_retdec_batch04 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch04.c")
    native_gap_retdec_batch05 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch05.c")
    native_gap_retdec_batch06 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch06.c")
    native_gap_retdec_batch07 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch07.c")
    native_gap_retdec_batch08 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch08.c")
    native_gap_retdec_batch09 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch09.c")
    native_gap_retdec_batch10 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch10.c")
    native_gap_retdec_batch11 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch11.c")
    native_gap_retdec_batch12 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch12.c")
    native_gap_retdec_batch13 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch13.c")
    native_gap_retdec_batch14 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch14.c")
    native_gap_retdec_batch15 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch15.c")
    native_gap_retdec_batch16 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch16.c")
    native_gap_retdec_batch17 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch17.c")
    native_gap_retdec_batch18 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch18.c")
    native_gap_retdec_batch19 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch19.c")
    native_gap_retdec_batch20 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch20.c")
    native_gap_retdec_batch21 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch21.c")
    native_gap_retdec_batch22 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch22.c")
    native_gap_retdec_batch23 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch23.c")
    native_gap_retdec_batch24 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch24.c")
    native_gap_retdec_batch25 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch25.c")
    native_gap_retdec_batch26 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch26.c")
    native_gap_retdec_batch27 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch27.c")
    native_gap_retdec_batch28 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch28.c")
    native_gap_retdec_batch29 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch29.c")
    native_gap_retdec_batch30 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch30.c")
    native_gap_retdec_batch31 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch31.c")
    native_gap_retdec_batch32 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch32.c")
    native_gap_retdec_batch33 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch33.c")
    native_gap_retdec_batch34 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch34.c")
    native_gap_retdec_batch35 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch35.c")
    native_gap_retdec_batch36 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch36.c")
    native_gap_retdec_batch37 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch37.c")
    native_gap_retdec_batch38 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch38.c")
    native_gap_retdec_batch39 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch39.c")
    native_gap_retdec_batch40 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch40.c")
    native_gap_retdec_batch41 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch41.c")
    native_gap_retdec_batch42 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch42.c")
    native_gap_retdec_batch43 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch43.c")
    native_gap_retdec_batch44 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch44.c")
    native_gap_retdec_batch45 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch45.c")
    native_gap_retdec_batch46 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch46.c")
    native_gap_retdec_batch47 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch47.c")
    native_gap_retdec_batch48 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch48.c")
    native_gap_retdec_batch49 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch49.c")
    native_gap_retdec_batch50 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch50.c")
    native_gap_retdec_batch51 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch51.c")
    native_gap_retdec_batch52 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch52.c")
    native_gap_retdec_batch53 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch53.c")
    native_gap_retdec_batch54 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch54.c")
    native_gap_retdec_batch55 = read_text(TRACE_DIR / "vm_native_gap_retdec_batch55.c")
    binary_data_sections = read_text(TRACE_DIR / "vm_binary_data_sections.c")
    binary_data_sections_index = read_tsv(TRACE_DIR / "vm_binary_data_sections.tsv")
    binary_data_string_rows = [row for row in binary_data_sections_index if row.get("kind", "") == "string"]
    binary_data_string_ref_c_rows = count(
        r"^    \{ \d+, 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, \d+, vm_eac_section_\d+_[A-Za-z0-9_]+ \+ 0x[0-9a-f]+ull, \"",
        binary_data_sections,
    )
    binary_data_section_metadata_c_rows = count(
        r'^    \{ "\.[^"]+", \d+, \d+, 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, (?:vm_eac_section_\d+_[A-Za-z0-9_]+|NULL) \},$',
        binary_data_sections,
    )
    binary_data_section_array_c_rows = count(r"^static const uint8_t vm_eac_section_\d+_", binary_data_sections)
    static_only_handler_queue = read_text(TRACE_DIR / "vm_static_only_handler_queue.c")
    static_only_handler_queue_index = read_tsv(TRACE_DIR / "vm_static_only_handler_queue.tsv")
    static_only_tier0_models = read_text(TRACE_DIR / "vm_static_only_tier0_handler_models.c")
    static_only_tier0_model_index = read_tsv(TRACE_DIR / "vm_static_only_tier0_handler_models.tsv")
    static_only_tier1_models = read_text(TRACE_DIR / "vm_static_only_tier1_handler_models.c")
    static_only_tier1_model_index = read_tsv(TRACE_DIR / "vm_static_only_tier1_handler_models.tsv")
    static_only_tier2_split = read_text(TRACE_DIR / "vm_static_only_tier2_split_models.c")
    static_only_tier2_split_index = read_tsv(TRACE_DIR / "vm_static_only_tier2_split_models.tsv")
    static_only_tier3_shared = read_text(TRACE_DIR / "vm_static_only_tier3_shared_models.c")
    static_only_tier3_shared_index = read_tsv(TRACE_DIR / "vm_static_only_tier3_shared_models.tsv")
    static_only_tier4_callret = read_text(TRACE_DIR / "vm_static_only_tier4_callret_models.c")
    static_only_tier4_callret_index = read_tsv(TRACE_DIR / "vm_static_only_tier4_callret_models.tsv")
    static_only_tier5_large = read_text(TRACE_DIR / "vm_static_only_tier5_large_models.c")
    static_only_tier5_large_index = read_tsv(TRACE_DIR / "vm_static_only_tier5_large_models.tsv")
    target_only_handlers_retdec = read_text(TRACE_DIR / "vm_target_only_handlers_retdec.c")
    unobserved_handlers_retdec_batches = [
        read_text(TRACE_DIR / f"vm_unobserved_handlers_retdec_batch{index:02d}.c")
        for index in range(7)
    ]
    unobserved_handlers_retdec_all = "\n".join(unobserved_handlers_retdec_batches)
    weak_handlers_retdec = read_text(TRACE_DIR / "vm_weak_handlers_retdec.c")
    validated_handlers_retdec_batches = [
        read_text(TRACE_DIR / f"vm_validated_handlers_retdec_batch{index:02d}.c")
        for index in range(7)
    ]
    validated_handlers_retdec_all = "\n".join(validated_handlers_retdec_batches)
    handler_retdec_sidecars = [
        target_only_handlers_retdec,
        unobserved_handlers_retdec_all,
        weak_handlers_retdec,
        validated_handlers_retdec_all,
    ]
    handler_retdec_sidecars_all = "\n".join(handler_retdec_sidecars)
    handler_retdec_index = read_tsv(TRACE_DIR / "vm_handler_retdec_index.tsv")
    unresolved_family_chains = read_text(TRACE_DIR / "vm_unresolved_family_chains.c")
    followup_classes = Counter(row.get("classification", "") for row in native_ret_patch_followup_index)
    followup_priorities = Counter(row.get("priority", "") for row in native_ret_patch_followup_index)
    obfuscated_downstream_statuses = Counter(
        row.get("downstream_status", "") for row in native_obfuscated_island_index
    )
    obfuscated_next_actions = Counter(row.get("next_action", "") for row in native_obfuscated_island_index)
    second_stage_statuses = Counter(row.get("status", "") for row in native_obfuscated_second_stage_index)
    second_stage_next_actions = Counter(row.get("next_action", "") for row in native_obfuscated_second_stage_index)
    second_stage_dynamic_statuses = Counter(
        row.get("dynamic_status", "") for row in native_obfuscated_second_stage_dynamic_index
    )
    second_stage_dynamic_targets = set()
    second_stage_dynamic_slot_checks = Counter()
    second_stage_dynamic_base_checks = Counter()
    for row in native_obfuscated_second_stage_dynamic_index:
        for item in row.get("target_mix", "").split(","):
            if item and item != "-":
                second_stage_dynamic_targets.add(item.split(":", 1)[0])
        for item in row.get("slot_target_check_mix", "").split(","):
            if item and item != "-":
                key, _, value = item.partition(":")
                second_stage_dynamic_slot_checks[key] += int(value or "0")
        for item in row.get("slot_base_check_mix", "").split(","):
            if item and item != "-":
                key, _, value = item.partition(":")
                second_stage_dynamic_base_checks[key] += int(value or "0")
    second_stage_slot_proof_static_statuses = Counter(
        row.get("static_status", "") for row in native_obfuscated_second_stage_slot_proof_index
    )
    second_stage_slot_proof_statuses = Counter(
        row.get("proof_status", "") for row in native_obfuscated_second_stage_slot_proof_index
    )
    second_stage_stack_source_statuses = Counter(
        row.get("stack_source_status", "") for row in native_obfuscated_second_stage_stack_source_index
    )
    second_stage_rbx_statuses = Counter(
        row.get("status", "") for row in native_obfuscated_second_stage_rbx_provenance_index
    )
    second_stage_model_statuses = Counter(
        row.get("model_status", "") for row in native_obfuscated_second_stage_model_index
    )
    obfuscated_control_model_statuses = Counter(
        row.get("control_status", "") for row in native_obfuscated_control_model_index
    )
    ret_patch_hidden_bridge_statuses = Counter(
        row.get("control_status", "") for row in native_ret_patch_hidden_bridge_index
    )
    ret_patch_hidden_bridge_edges = Counter(
        row.get("edge_kind", "") for row in native_ret_patch_hidden_bridge_index
    )
    handler_environment_statuses = Counter(
        row.get("coverage_status", "") for row in native_handler_environment_coverage_index
    )
    static_only_queue_tiers = Counter(
        row.get("priority_class", "") for row in static_only_handler_queue_index
    )

    add(rows, "c_shape", "handler_functions", count(r"^static VMOpResult op_entry_\d{3}\(VMState \*vm\) \{", handlers),
        "All-entry handler/operator C functions.")
    add(rows, "c_shape", "handler_next_entry_table_offset_normalizations",
        count(r"r\.next_entry = vm_entry_from_table_offset\(r\.slot\);", handlers),
        "Handler fall-through slots normalized as dispatch-table byte offsets.")
    add(rows, "c_shape", "handler_next_entry_slot_index_normalizations",
        count(r"r\.next_entry = vm_entry_from_slot_index\(r\.slot\);", handlers),
        "Handler fall-through slots normalized as direct slot indices.")
    add(rows, "c_shape", "handler_sampled_ret_patch_functions",
        count(r"native return-patch thunk", handlers),
        "Handler/operator functions rendered as native return-patch thunks instead of normal dispatch-table handlers.")
    add(rows, "c_shape", "handler_sampled_ret_patch_evidence_comments",
        count(r"ret-patch evidence: rows=", handlers),
        "Handler-layer sampled ret-patch evidence summaries.")
    add(rows, "c_shape", "handler_tier0_static_model_comments",
        count(r"tier0 static model: rank=", handlers),
        "Handler-layer tier0 static-only RetDec model annotations.")
    add(rows, "c_shape", "handler_tier0_static_slot_recoveries",
        count(r"tier0 static slot recovered from the RetDec single-function model", handlers),
        "Handler-layer static-only tier0 entries with executable slot recovery in VMState form.")
    add(rows, "c_shape", "handler_tier0_static_slot_comment_only",
        count(r"tier0 slot expression not executable in VMState model", handlers),
        "Handler-layer tier0 static-only rows kept comment-only because the slot expression needs frame state outside VMState.")
    add(rows, "c_shape", "handler_tier1_static_model_comments",
        count(r"tier1 static model: rank=", handlers),
        "Handler-layer tier1 static-only RetDec model annotations.")
    add(rows, "c_shape", "handler_tier1_static_slot_recoveries",
        count(r"tier1 static slot recovered from a clean RetDec dispatch-table tail", handlers),
        "Handler-layer static-only tier1 entries with executable dispatch-table slot recovery in VMState form.")
    add(rows, "c_shape", "handler_tier1_static_slot_comment_only",
        count(r"tier1 slot expression kept comment-only", handlers),
        "Handler-layer tier1 static-only rows with candidate/masked slots kept comment-only.")
    add(rows, "c_shape", "handler_tier2_split_model_comments",
        count(r"tier2 split model: rank=", handlers),
        "Handler-layer tier2 static-only RetDec split/model annotations.")
    add(rows, "c_shape", "handler_tier2_static_slot_recoveries",
        count(r"tier2 static slot recovered from a split RetDec primary tail", handlers),
        "Handler-layer static-only tier2 entries with executable dispatch-table slot recovery in VMState form.")
    add(rows, "c_shape", "handler_tier2_static_slot_comment_only",
        count(r"tier2 slot expression kept comment-only", handlers),
        "Handler-layer tier2 static-only rows with candidate slots kept comment-only.")
    add(rows, "c_shape", "handler_tier3_shared_model_comments",
        count(r"tier3 shared model: rank=", handlers),
        "Handler-layer tier3 static-only shared-range RetDec model annotations.")
    add(rows, "c_shape", "handler_tier3_static_slot_recoveries",
        count(r"tier3 static slot recovered from a shared RetDec primary tail", handlers),
        "Handler-layer static-only tier3 entries with executable dispatch-table slot recovery in VMState form.")
    add(rows, "c_shape", "handler_tier3_static_slot_comment_only",
        count(r"tier3 slot expression kept comment-only", handlers),
        "Handler-layer tier3 static-only rows with candidate slots kept comment-only.")
    add(rows, "c_shape", "handler_tier4_callret_model_comments",
        count(r"tier4 call/ret model: rank=", handlers),
        "Handler-layer tier4 static-only call/ret side-effect RetDec model annotations.")
    add(rows, "c_shape", "handler_tier4_static_slot_recoveries",
        count(r"tier4 static slot recovered from a call/ret RetDec primary tail", handlers),
        "Handler-layer static-only tier4 entries with executable dispatch-table slot recovery in VMState form.")
    add(rows, "c_shape", "handler_tier4_static_slot_comment_only",
        count(r"tier4 slot expression kept comment-only", handlers),
        "Handler-layer tier4 static-only rows with candidate slots kept comment-only.")
    add(rows, "c_shape", "handler_tier5_large_model_comments",
        count(r"tier5 large model: rank=", handlers),
        "Handler-layer tier5 large static-only RetDec model annotations.")
    add(rows, "c_shape", "handler_tier5_static_slot_recoveries",
        count(r"tier5 static slot recovered from a large RetDec primary tail", handlers),
        "Handler-layer static-only tier5 entries with executable dispatch-table slot recovery in VMState form.")
    add(rows, "c_shape", "handler_tier5_static_slot_comment_only",
        count(r"tier5 slot expression kept comment-only", handlers),
        "Handler-layer tier5 static-only rows with candidate slots kept comment-only.")
    add(rows, "c_shape", "native_ret_patch_target_functions",
        count(r"^static void native_retpatch_entry_", native_ret_patch_targets),
        "C-shaped native .text target helper functions emitted from sampled return-patch evidence.")
    add(rows, "c_shape", "native_ret_patch_target_dispatch_cases",
        count(r"^    case 0x[0-9a-f]+u:$", native_ret_patch_targets),
        "Native return-patch target offsets handled by the generated dispatcher.")
    add(rows, "c_shape", "native_ret_patch_target_bounded_epilogue_models",
        count(r"coarse native shape: bounded_epilogue_ret", native_ret_patch_targets),
        "Native return-patch target helpers classified as bounded native epilogues reaching ret.")
    add(rows, "c_shape", "native_ret_patch_target_tail_dispatchers",
        count(r"^void vm_native_ret_patch_tail\(VMState \*vm,", native_ret_patch_targets),
        "Syntax-checkable vm_native_ret_patch_tail implementation for the native target helper artifact.")
    add(rows, "c_shape", "native_ret_patch_epilogues_retdec_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_ret_patch_epilogues_retdec),
        "Targeted RetDec C functions for single-stack native return-patch epilogue targets.")
    add(rows, "c_shape", "native_ret_patch_epilogues_retdec_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_ret_patch_epilogues_retdec),
        "Tight single-stack native return-patch epilogue ranges selected for RetDec.")
    add(rows, "c_shape", "native_ret_patch_epilogues_retdec_stack_chk_guards",
        count(r"__stack_chk_fail\(\);", native_ret_patch_epilogues_retdec),
        "Stack-check failure paths preserved in the targeted native epilogue RetDec artifact.")
    add(rows, "c_shape", "native_ret_patch_source278_retdec_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_ret_patch_source278_retdec),
        "Targeted RetDec C functions for source278's double native return-patch trampoline chain.")
    add(rows, "c_shape", "native_ret_patch_source278_retdec_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_ret_patch_source278_retdec),
        "Native .text ranges selected for the source278 targeted RetDec artifact.")
    add(rows, "c_shape", "native_ret_patch_source278_retdec_tail_calls",
        count(r"\breturn function_[0-9a-f]+\(", native_ret_patch_source278_retdec),
        "Recovered C-shaped tail calls inside the source278 native trampoline chain.")
    add(rows, "c_shape", "native_ret_patch_followup_index_rows",
        len(native_ret_patch_followup_index),
        "Unique direct call/jump targets reached from native return-patch target windows.")
    add(rows, "c_shape", "native_ret_patch_followup_c_functions",
        count(r"^static void followup_target_[0-9a-f]+\(VMState \*vm,", native_ret_patch_followups),
        "Syntax-checkable C helper functions classifying native return-patch follow-up targets.")
    add(rows, "c_shape", "native_ret_patch_followup_dispatch_cases",
        count(r"^    case 0x[0-9a-f]+u:$", native_ret_patch_followups),
        "Dispatcher cases in the native return-patch follow-up C artifact.")
    add(rows, "c_shape", "native_ret_patch_followup_class_mix",
        ",".join(f"{key}:{value}" for key, value in followup_classes.most_common()) or "-",
        "Static classification mix for return-patch follow-up targets.")
    add(rows, "c_shape", "native_ret_patch_followup_priority_mix",
        ",".join(f"{key}:{value}" for key, value in followup_priorities.most_common()) or "-",
        "Next-action priority mix for return-patch follow-up targets.")
    add(rows, "c_shape", "native_ret_patch_followup_obfuscated_islands",
        followup_classes.get("obfuscated_native_island", 0),
        "Follow-up targets classified as native obfuscation islands rather than VM CFG successors.")
    add(rows, "c_shape", "native_ret_patch_followup_targeted_retdec_candidates",
        sum(value for key, value in followup_priorities.items() if "targeted" in key),
        "Follow-up targets that should get narrow targeted RetDec/static reconstruction before any broader sweep.")
    add(rows, "c_shape", "native_ret_patch_followup_retdec_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_ret_patch_followup_retdec),
        "Targeted RetDec C functions emitted for high-value native return-patch follow-up helpers.")
    add(rows, "c_shape", "native_ret_patch_followup_retdec_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_ret_patch_followup_retdec),
        "Narrow native helper ranges selected for return-patch follow-up RetDec.")
    add(rows, "c_shape", "native_ret_patch_followup_retdec_tail_calls",
        count(r"\breturn function_[0-9a-f]+\(", native_ret_patch_followup_retdec),
        "Recovered C-shaped tail calls/chains in the native return-patch follow-up helper artifact.")
    add(rows, "c_shape", "native_obfuscated_island_rows",
        len(native_obfuscated_island_index),
        "First-stage native obfuscated helper/island rows reached from return-patch follow-up control.")
    add(rows, "c_shape", "native_obfuscated_island_c_functions",
        count(r"^static void obfuscated_island_[0-9a-f]+\(VMState \*vm,", native_obfuscated_islands),
        "Syntax-checkable C helper functions for native obfuscated island collapse evidence.")
    add(rows, "c_shape", "native_obfuscated_island_dispatch_cases",
        count(r"^    case 0x[0-9a-f]+u:$", native_obfuscated_islands),
        "Dispatcher cases in the native obfuscated island C artifact.")
    add(rows, "c_shape", "native_obfuscated_island_downstream_status_mix",
        ",".join(f"{key}:{value}" for key, value in obfuscated_downstream_statuses.most_common()) or "-",
        "Status mix for collapsed downstream targets from native obfuscated islands.")
    add(rows, "c_shape", "native_obfuscated_island_next_action_mix",
        ",".join(f"{key}:{value}" for key, value in obfuscated_next_actions.most_common()) or "-",
        "Next-action mix for native obfuscated island downstreams.")
    add(rows, "c_shape", "native_obfuscated_island_source278_covered_downstreams",
        obfuscated_downstream_statuses.get("source278_retdec_covered", 0),
        "Collapsed downstream targets already represented by the source278 targeted RetDec sidecar.")
    add(rows, "c_shape", "native_obfuscated_island_second_stage_targets",
        obfuscated_downstream_statuses.get("second_stage_obfuscated_thunk", 0),
        "Collapsed downstream targets that remain second-stage stack/call obfuscation thunks.")
    add(rows, "c_shape", "native_obfuscated_island_entry_helpers",
        sum(1 for row in native_obfuscated_island_index if row.get("kind", "") == "entry_helper"),
        "Normal-prologue helper rows that enter the first native obfuscation island.")
    add(rows, "c_shape", "native_obfuscated_second_stage_rows",
        len(native_obfuscated_second_stage_index),
        "Second-stage native obfuscated downstream thunks reached after first-stage island collapse.")
    add(rows, "c_shape", "native_obfuscated_second_stage_c_functions",
        count(r"^static void second_stage_thunk_[0-9a-f]+\(VMState \*vm,", native_obfuscated_second_stage),
        "Syntax-checkable C helper functions for second-stage computed-thunk evidence.")
    add(rows, "c_shape", "native_obfuscated_second_stage_dispatch_cases",
        count(r"^    case 0x[0-9a-f]+u:$", native_obfuscated_second_stage),
        "Dispatcher cases in the native obfuscated second-stage C artifact.")
    add(rows, "c_shape", "native_obfuscated_second_stage_computed_jumps",
        sum(1 for row in native_obfuscated_second_stage_index if row.get("indirect_jmp_site", "")),
        "Second-stage thunks with an exact computed jmp [rax] native site.")
    add(rows, "c_shape", "native_obfuscated_second_stage_internal_loop_edges",
        sum(
            int(bool(row.get("loop1_jmp_site", ""))) + int(bool(row.get("loop2_jmp_site", "")))
            for row in native_obfuscated_second_stage_index
        ),
        "Internal loop edges recorded across second-stage computed thunks.")
    add(rows, "c_shape", "native_obfuscated_second_stage_status_mix",
        ",".join(f"{key}:{value}" for key, value in second_stage_statuses.most_common()) or "-",
        "Status mix for second-stage native computed thunks.")
    add(rows, "c_shape", "native_obfuscated_second_stage_next_action_mix",
        ",".join(f"{key}:{value}" for key, value in second_stage_next_actions.most_common()) or "-",
        "Next-action mix for second-stage native computed thunks.")
    add(rows, "c_shape", "native_obfuscated_second_stage_dynamic_rows",
        len(native_obfuscated_second_stage_dynamic_index),
        "Dynamic dispatch evidence rows for second-stage computed jmp [rax] sites.")
    add(rows, "c_shape", "native_obfuscated_second_stage_dynamic_c_functions",
        count(r"^static void second_stage_dynamic_[0-9a-f]+\(VMState \*vm,", native_obfuscated_second_stage_dynamic),
        "Syntax-checkable C helper functions for observed second-stage computed dispatch targets.")
    add(rows, "c_shape", "native_obfuscated_second_stage_dynamic_dispatch_cases",
        count(r"^    case 0x[0-9a-f]+u:$", native_obfuscated_second_stage_dynamic),
        "Dispatcher cases in the dynamic second-stage computed-dispatch C artifact.")
    add(rows, "c_shape", "native_obfuscated_second_stage_dynamic_observed_sites",
        sum(1 for row in native_obfuscated_second_stage_dynamic_index if int(row.get("hit_count", "0") or "0") > 0),
        "Second-stage computed dispatch sites with bounded dynamic target evidence.")
    add(rows, "c_shape", "native_obfuscated_second_stage_dynamic_total_hits",
        sum(int(row.get("hit_count", "0") or "0") for row in native_obfuscated_second_stage_dynamic_index),
        "Total focused dispatch hits recorded for the second-stage computed dispatch sites.")
    add(rows, "c_shape", "native_obfuscated_second_stage_dynamic_unique_targets",
        len(second_stage_dynamic_targets),
        "Unique native handler target offsets observed from the second-stage computed dispatch sites.")
    add(rows, "c_shape", "native_obfuscated_second_stage_dynamic_status_mix",
        ",".join(f"{key}:{value}" for key, value in second_stage_dynamic_statuses.most_common()) or "-",
        "Status mix for bounded dynamic second-stage dispatch target evidence.")
    add(rows, "c_shape", "native_obfuscated_second_stage_dynamic_slot_target_check_mix",
        ",".join(f"{key}:{value}" for key, value in second_stage_dynamic_slot_checks.most_common()) or "-",
        "Whether observed dispatch-table slot indices match the handler targets read by computed jmp [rax].")
    add(rows, "c_shape", "native_obfuscated_second_stage_dynamic_slot_base_check_mix",
        ",".join(f"{key}:{value}" for key, value in second_stage_dynamic_base_checks.most_common()) or "-",
        "Whether observed slot offsets minus slot indices equal the dispatch-table base.")
    add(rows, "c_shape", "native_obfuscated_second_stage_slot_proof_rows",
        len(native_obfuscated_second_stage_slot_proof_index),
        "Static slot-formula proof rows for second-stage computed jmp [rax] sites.")
    add(rows, "c_shape", "native_obfuscated_second_stage_slot_proof_c_functions",
        count(r"^static void second_stage_slot_formula_[0-9a-f]+\(VMState \*vm,", native_obfuscated_second_stage_slot_proof),
        "Syntax-checkable C helper functions for static second-stage slot formula proof.")
    add(rows, "c_shape", "native_obfuscated_second_stage_slot_proof_dispatch_cases",
        count(r"^    case 0x[0-9a-f]+u:$", native_obfuscated_second_stage_slot_proof),
        "Dispatcher cases in the second-stage slot proof C artifact.")
    add(rows, "c_shape", "native_obfuscated_second_stage_slot_proof_net_zero_rows",
        sum(1 for row in native_obfuscated_second_stage_slot_proof_index if row.get("net_rax_delta", "") == "0x0"),
        "Second-stage computed-jump static windows whose immediate add/sub ladder has net zero effect on rax.")
    add(rows, "c_shape", "native_obfuscated_second_stage_slot_proof_dynamic_hits",
        sum(int(row.get("dynamic_hits", "0") or "0") for row in native_obfuscated_second_stage_slot_proof_index),
        "Focused dynamic hits covered by the static slot-formula proof artifact.")
    add(rows, "c_shape", "native_obfuscated_second_stage_slot_proof_static_status_mix",
        ",".join(f"{key}:{value}" for key, value in second_stage_slot_proof_static_statuses.most_common()) or "-",
        "Static status mix for second-stage slot formula proof rows.")
    add(rows, "c_shape", "native_obfuscated_second_stage_slot_proof_status_mix",
        ",".join(f"{key}:{value}" for key, value in second_stage_slot_proof_statuses.most_common()) or "-",
        "Proof status mix after joining static slot formula proof with dynamic slot/base checks.")
    add(rows, "c_shape", "native_obfuscated_second_stage_stack_source_rows",
        len(native_obfuscated_second_stage_stack_source_index),
        "Static stack-source proof rows for second-stage handler-entry loads.")
    add(rows, "c_shape", "native_obfuscated_second_stage_stack_source_c_functions",
        count(r"^static void second_stage_stack_source_[0-9a-f]+\(VMState \*vm,", native_obfuscated_second_stage_stack_source),
        "Syntax-checkable C helper functions for second-stage stack-source evidence.")
    add(rows, "c_shape", "native_obfuscated_second_stage_stack_source_dispatch_cases",
        count(r"^    case 0x[0-9a-f]+u:$", native_obfuscated_second_stage_stack_source),
        "Dispatcher cases in the second-stage stack-source C artifact.")
    add(rows, "c_shape", "native_obfuscated_second_stage_stack_source_proven_rows",
        sum(1 for row in native_obfuscated_second_stage_stack_source_index if row.get("stack_source_status", "") == "static_stack_source_to_rbx_shift_proven"),
        "Rows where Capstone proves qword [rsp+0x88] reaches rbx before the shift.")
    add(rows, "c_shape", "native_obfuscated_second_stage_stack_source_status_mix",
        ",".join(f"{key}:{value}" for key, value in second_stage_stack_source_statuses.most_common()) or "-",
        "Status mix for static stack-source proof rows.")
    add(rows, "c_shape", "native_obfuscated_second_stage_rbx_provenance_rows",
        len(native_obfuscated_second_stage_rbx_provenance_index),
        "RBX handler-entry provenance rows for second-stage computed dispatch sites.")
    add(rows, "c_shape", "native_obfuscated_second_stage_rbx_provenance_c_functions",
        count(r"^static void second_stage_rbx_provenance_[0-9a-f]+\(VMState \*vm,", native_obfuscated_second_stage_rbx_provenance),
        "Syntax-checkable C helper functions for second-stage RBX provenance evidence.")
    add(rows, "c_shape", "native_obfuscated_second_stage_rbx_provenance_dispatch_cases",
        count(r"^    case 0x[0-9a-f]+u:$", native_obfuscated_second_stage_rbx_provenance),
        "Dispatcher cases in the second-stage RBX provenance C artifact.")
    add(rows, "c_shape", "native_obfuscated_second_stage_rbx_provenance_observed_rows",
        sum(int(row.get("observed_rows", "0") or "0") for row in native_obfuscated_second_stage_rbx_provenance_index),
        "Single-step probe observation rows tied to second-stage RBX provenance.")
    add(rows, "c_shape", "native_obfuscated_second_stage_rbx_provenance_shift_matches",
        sum(int(row.get("shift_rbx_to_dispatch_idx_matches", "0") or "0") for row in native_obfuscated_second_stage_rbx_provenance_index),
        "Observed rows where rbx before shl maps to dispatch idx by rbx << 3.")
    add(rows, "c_shape", "native_obfuscated_second_stage_rbx_provenance_status_mix",
        ",".join(f"{key}:{value}" for key, value in second_stage_rbx_statuses.most_common()) or "-",
        "Status mix for second-stage RBX stack-entry provenance.")
    add(rows, "c_shape", "native_obfuscated_second_stage_model_rows",
        len(native_obfuscated_second_stage_model_index),
        "Combined C model rows for second-stage computed dispatch thunks.")
    add(rows, "c_shape", "native_obfuscated_second_stage_model_c_functions",
        count(r"^static void second_stage_model_[0-9a-f]+\(VMState \*vm,", native_obfuscated_second_stage_model),
        "Syntax-checkable C helper functions for the combined second-stage stack/dispatch model.")
    add(rows, "c_shape", "native_obfuscated_second_stage_model_dispatch_cases",
        count(r"^    case 0x[0-9a-f]+u:$", native_obfuscated_second_stage_model),
        "Dispatcher cases in the combined second-stage model artifact.")
    add(rows, "c_shape", "native_obfuscated_second_stage_model_dynamic_hits",
        sum(int(row.get("dynamic_hits", "0") or "0") for row in native_obfuscated_second_stage_model_index),
        "Focused dynamic hits joined into the combined second-stage model artifact.")
    add(rows, "c_shape", "native_obfuscated_second_stage_model_rbx_observed_rows",
        sum(int(row.get("rbx_observed_rows", "0") or "0") for row in native_obfuscated_second_stage_model_index),
        "Single-step RBX provenance rows joined into the combined second-stage model artifact.")
    add(rows, "c_shape", "native_obfuscated_second_stage_model_status_mix",
        ",".join(f"{key}:{value}" for key, value in second_stage_model_statuses.most_common()) or "-",
        "Status mix for the combined second-stage C model.")
    add(rows, "c_shape", "native_obfuscated_control_model_rows",
        len(native_obfuscated_control_model_index),
        "Joined native obfuscated hidden-control rows from ret-patch followups through islands and second-stage models.")
    add(rows, "c_shape", "native_obfuscated_control_model_c_functions",
        count(r"^static uint64_t native_obfuscated_control_[0-9a-f]+\(VMState \*vm,", native_obfuscated_control_model),
        "Syntax-checkable C helper functions for joined native obfuscated hidden-control edges.")
    add(rows, "c_shape", "native_obfuscated_control_model_dispatch_cases",
        count(r"^    case 0x[0-9a-f]+u:$", native_obfuscated_control_model),
        "Dispatcher cases in the joined native obfuscated hidden-control model.")
    add(rows, "c_shape", "native_obfuscated_control_model_second_stage_rows",
        sum(1 for row in native_obfuscated_control_model_index if row.get("final_model", "") == "dispatch_table[stack_qword(rsp+0x88)]"),
        "Hidden-control rows joined to the static second-stage dispatch-table model.")
    add(rows, "c_shape", "native_obfuscated_control_model_source278_rows",
        sum(1 for row in native_obfuscated_control_model_index if "source278_retdec" in row.get("final_model", "")),
        "Hidden-control rows joined to source278 RetDec-covered native targets.")
    add(rows, "c_shape", "native_obfuscated_control_model_dynamic_hits",
        sum(int(row.get("dynamic_hits", "0") or "0") for row in native_obfuscated_control_model_index),
        "Focused dynamic hits carried through the joined hidden-control model.")
    add(rows, "c_shape", "native_obfuscated_control_model_status_mix",
        ",".join(f"{key}:{value}" for key, value in obfuscated_control_model_statuses.most_common()) or "-",
        "Status mix for joined native obfuscated hidden-control rows.")
    add(rows, "c_shape", "native_ret_patch_hidden_bridge_rows",
        len(native_ret_patch_hidden_bridge_index),
        "Ret-patch native target windows joined back to the hidden obfuscated-control C model.")
    add(rows, "c_shape", "native_ret_patch_hidden_bridge_c_functions",
        count(r"^static int ret_patch_hidden_[0-9]+_[0-9a-f]+_(?:call|jump)_[0-9a-f]+\(VMState \*vm,", native_ret_patch_hidden_bridge),
        "Syntax-checkable bridge helper functions mapping ret-patch exits to hidden-control entries.")
    add(rows, "c_shape", "native_ret_patch_hidden_bridge_dispatch_cases",
        count(r"^    case 0x[0-9a-f]+ull:$", native_ret_patch_hidden_bridge),
        "Dispatcher cases in the ret-patch hidden-control bridge artifact.")
    add(rows, "c_shape", "native_ret_patch_hidden_bridge_second_stage_rows",
        sum(1 for row in native_ret_patch_hidden_bridge_index if row.get("final_model", "") == "dispatch_table[stack_qword(rsp+0x88)]"),
        "Ret-patch bridge rows that flow into the static second-stage dispatch-table model.")
    add(rows, "c_shape", "native_ret_patch_hidden_bridge_source278_rows",
        sum(1 for row in native_ret_patch_hidden_bridge_index if "source278_retdec" in row.get("final_model", "")),
        "Ret-patch bridge rows that flow into source278 RetDec-covered native targets.")
    add(rows, "c_shape", "native_ret_patch_hidden_bridge_dynamic_hits",
        sum(int(row.get("dynamic_hits", "0") or "0") for row in native_ret_patch_hidden_bridge_index),
        "Focused second-stage dynamic hits reachable through the ret-patch hidden bridge.")
    add(rows, "c_shape", "native_ret_patch_hidden_bridge_edge_kind_mix",
        ",".join(f"{key}:{value}" for key, value in ret_patch_hidden_bridge_edges.most_common()) or "-",
        "Call/jump edge mix for ret-patch follow-up targets that enter hidden control.")
    add(rows, "c_shape", "native_ret_patch_hidden_bridge_status_mix",
        ",".join(f"{key}:{value}" for key, value in ret_patch_hidden_bridge_statuses.most_common()) or "-",
        "Status mix for ret-patch exits joined to hidden-control rows.")
    add(rows, "coverage", "native_handler_environment_coverage_rows",
        len(native_handler_environment_coverage_index),
        "Handler-level environment provenance rows generated from the cross-run trace matrix.")
    add(rows, "c_shape", "native_handler_environment_coverage_c_entries",
        count(r"^    \{ \d+, 0x[0-9a-f]+ull, 0x[0-9a-f]+u, 0x[0-9a-f]+u,", native_handler_environment_coverage),
        "Syntax-checkable C entries in the handler-level environment coverage map.")
    add(rows, "coverage", "native_handler_environment_coverage_concrete_source_rows",
        sum(1 for row in native_handler_environment_coverage_index if row.get("concrete_source", "") == "1"),
        "Dispatch entries observed as a source in at least one concrete instruction trace.")
    add(rows, "coverage", "native_handler_environment_coverage_concrete_target_rows",
        sum(1 for row in native_handler_environment_coverage_index if row.get("concrete_target", "") == "1"),
        "Dispatch entries observed as a target in at least one concrete instruction trace.")
    add(rows, "coverage", "native_handler_environment_coverage_blocked_source_rows",
        sum(1 for row in native_handler_environment_coverage_index if row.get("blocked_source", "") == "1"),
        "Dispatch entries observed as a source under blocked-network runs.")
    add(rows, "coverage", "native_handler_environment_coverage_blocked_target_rows",
        sum(1 for row in native_handler_environment_coverage_index if row.get("blocked_target", "") == "1"),
        "Dispatch entries observed as a target under blocked-network runs.")
    add(rows, "coverage", "native_handler_environment_coverage_fake_source_rows",
        sum(1 for row in native_handler_environment_coverage_index if row.get("fake_source", "") == "1"),
        "Dispatch entries observed as a source under fake-network runs.")
    add(rows, "coverage", "native_handler_environment_coverage_fake_target_rows",
        sum(1 for row in native_handler_environment_coverage_index if row.get("fake_target", "") == "1"),
        "Dispatch entries observed as a target under fake-network runs.")
    add(rows, "coverage", "native_handler_environment_coverage_synthetic_source_rows",
        sum(1 for row in native_handler_environment_coverage_index if row.get("synthetic_source", "") == "1"),
        "Dispatch entries seen as a source only through synthetic fill sidecars or mixed synthetic evidence.")
    add(rows, "coverage", "native_handler_environment_coverage_synthetic_target_rows",
        sum(1 for row in native_handler_environment_coverage_index if row.get("synthetic_target", "") == "1"),
        "Dispatch entries seen as a target only through synthetic fill sidecars or mixed synthetic evidence.")
    add(rows, "coverage", "native_handler_environment_coverage_static_only_rows",
        handler_environment_statuses.get("static_only_unobserved_in_trace_matrix", 0),
        "Dispatch entries present in the static handler table but not observed in the trace matrix.")
    add(rows, "coverage", "native_handler_environment_coverage_status_mix",
        ",".join(f"{key}:{value}" for key, value in handler_environment_statuses.most_common()) or "-",
        "Status mix for handler-level environment coverage.")
    add(rows, "coverage_frontier", "config_coverage_metric_rows",
        len(config_coverage_metric_rows),
        "C-carried coverage/config audit metric rows generated from trace/static coverage inputs.")
    add(rows, "coverage_frontier", "config_coverage_frontier_rows",
        len(config_coverage_frontier_rows),
        "C-carried frontier rows for scenario/config-limited coverage gaps.")
    add(rows, "coverage_frontier", "config_coverage_static_only_handler_rows",
        config_coverage_frontier_kinds.get("static_only_handler", 0),
        "Static-only handler frontier rows retained for targeted lifting or forced tracing.")
    add(rows, "coverage_frontier", "config_coverage_target_only_handler_rows",
        config_coverage_frontier_kinds.get("target_only_handler", 0),
        "Concrete target-only handler frontier rows lacking concrete source execution.")
    add(rows, "coverage_frontier", "config_coverage_path_unknown_target_rows",
        config_coverage_frontier_kinds.get("path_microcode_unknown_target", 0),
        "Path-specialized microcode rows whose target/IP validation remains incomplete.")
    add(rows, "coverage_frontier", "config_coverage_no_real_network_rows",
        config_coverage_frontier_kinds.get("no_real_network_allowed_trace", 0),
        "Frontier rows documenting that no concrete real-network-allowed instruction trace exists.")
    add(rows, "coverage_frontier", "config_coverage_synthetic_fill_only_rows",
        config_coverage_frontier_kinds.get("synthetic_fill_only", 0),
        "Derived synthetic-fill coverage rows that still need concrete trace or static proof.")
    add(rows, "c_shape", "config_coverage_metric_c_rows",
        count(r'^    \{ "(?:config_frontier|static_audit\.)', config_coverage_frontier),
        "Syntax-checkable C metric rows in the config coverage frontier artifact.")
    add(rows, "c_shape", "config_coverage_frontier_c_rows",
        count(r'^    \{ \d+, 0x[0-9a-f]+ull, \d+ull, 0x[0-9a-f]+u, "(?:static_only_handler|target_only_handler|path_microcode_unknown_target|no_real_network_allowed_trace|synthetic_fill_only)",', config_coverage_frontier),
        "Syntax-checkable C frontier rows in the config coverage frontier artifact.")
    native_exec_total_bytes = sum(int(row.get("bytes", "0") or "0") for row in native_executable_section_rows)
    native_exec_covered_bytes = sum(int(row.get("covered_bytes", "0") or "0") for row in native_executable_section_rows)
    native_exec_uncovered_bytes = sum(int(row.get("uncovered_bytes", "0") or "0") for row in native_executable_section_rows)
    native_exec_text_row = next((row for row in native_executable_section_rows if row.get("section", "") == ".text"), {})
    add(rows, "coverage_frontier", "native_executable_coverage_section_rows",
        len(native_executable_section_rows),
        "Executable ELF section rows audited against recovered native C sidecar ranges.")
    add(rows, "coverage_frontier", "native_executable_coverage_range_rows",
        len(native_executable_range_rows),
        "Recovered native executable range rows included in the executable coverage audit.")
    add(rows, "coverage_frontier", "native_executable_coverage_gap_rows",
        len(native_executable_gap_rows),
        "Uncovered executable gap rows retained as explicit native reconstruction frontier evidence.")
    add(rows, "coverage_frontier", "native_executable_coverage_total_bytes",
        native_exec_total_bytes,
        "Total executable ELF bytes in allocatable executable sections.")
    add(rows, "coverage_frontier", "native_executable_coverage_recovered_bytes",
        native_exec_covered_bytes,
        "Executable ELF bytes intersecting recovered native C sidecar ranges.")
    add(rows, "coverage_frontier", "native_executable_coverage_uncovered_bytes",
        native_exec_uncovered_bytes,
        "Executable ELF bytes not yet represented by recovered native C sidecar ranges.")
    add(rows, "coverage_frontier", "native_executable_coverage_percent_x100",
        (native_exec_covered_bytes * 10000) // native_exec_total_bytes if native_exec_total_bytes else 0,
        "Recovered executable-byte percentage scaled by 100.")
    add(rows, "coverage_frontier", "native_executable_text_coverage_x100",
        native_exec_text_row.get("coverage_x100", "0"),
        "Recovered .text executable-byte percentage scaled by 100.")
    add(rows, "c_shape", "native_executable_coverage_c_section_rows",
        count(r'^    \{ "\.[A-Za-z0-9_.]+", 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, \d+ull, \d+ull, \d+ull, \d+u, \d+u, \d+u \},', native_executable_coverage_audit),
        "Executable section coverage rows retained in C form.")
    add(rows, "c_shape", "native_executable_coverage_c_range_rows",
        count(r'^    \{ "\.[A-Za-z0-9_.]+", 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, \d+ull, "[^"]+", ', native_executable_coverage_audit),
        "Recovered native executable range rows retained in C form.")
    add(rows, "c_shape", "native_executable_coverage_c_gap_rows",
        count(r'^    \{ "\.[A-Za-z0-9_.]+", 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, \d+ull \},', native_executable_coverage_audit),
        "Uncovered native executable gap rows retained in C form.")
    native_function_text_intervals = []
    for row in native_function_inventory_index:
        if row.get("section", "") != ".text":
            continue
        start = int(row.get("offset", "0") or "0", 0)
        stop = int(row.get("end", "0") or "0", 0)
        if stop > start:
            native_function_text_intervals.append((start, stop))
    native_function_text_intervals.sort()
    native_function_text_merged = []
    for start, stop in native_function_text_intervals:
        if not native_function_text_merged or start > native_function_text_merged[-1][1]:
            native_function_text_merged.append([start, stop])
        else:
            native_function_text_merged[-1][1] = max(native_function_text_merged[-1][1], stop)
    add(rows, "coverage_frontier", "native_function_inventory_rows",
        len(native_function_inventory_index),
        "Radare2 native function-boundary rows rendered as weak C skeleton metadata.")
    add(rows, "coverage_frontier", "native_function_inventory_text_rows",
        sum(1 for row in native_function_inventory_index if row.get("section", "") == ".text"),
        "Radare2 function-boundary rows inside the ELF .text section.")
    add(rows, "coverage_frontier", "native_function_inventory_kind_mix",
        ",".join(f"{key}:{value}" for key, value in sorted(native_function_kind_mix.items())) or "-",
        "Kind mix for radare2 native function-boundary inventory rows.")
    add(rows, "coverage_frontier", "native_function_inventory_text_merged_bytes",
        sum(stop - start for start, stop in native_function_text_merged),
        "Merged .text bytes covered by radare2 native function-boundary inventory rows.")
    add(rows, "c_shape", "native_function_inventory_c_stub_functions",
        count(r"^static uint64_t native_stub_[A-Za-z0-9_]+\(void\) \{ return 0x[0-9a-f]+ull; \}$", native_function_inventory),
        "Weak native function skeleton stubs retained in C form.")
    add(rows, "c_shape", "native_function_inventory_c_metadata_rows",
        count(r'^    \{ "\.[A-Za-z0-9_.]+", 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, \d+u, \d+u, ', native_function_inventory),
        "Weak native function inventory metadata rows retained in C form.")
    add(rows, "coverage_frontier", "native_retdec_gap_queue_rows",
        len(native_retdec_gap_queue_index),
        "Native function-boundary rows whose bytes are not yet covered by semantic RetDec/native C sidecars.")
    add(rows, "coverage_frontier", "native_retdec_gap_queue_tier0_rows",
        native_retdec_gap_queue_tiers.get("tier0_small_native_gap", 0),
        "Small uncovered native functions queued for targeted single-function RetDec.")
    add(rows, "coverage_frontier", "native_retdec_gap_queue_tier1_rows",
        native_retdec_gap_queue_tiers.get("tier1_medium_native_gap", 0),
        "Medium uncovered native functions queued for targeted single-function RetDec.")
    add(rows, "coverage_frontier", "native_retdec_gap_queue_tier2_rows",
        native_retdec_gap_queue_tiers.get("tier2_large_native_gap", 0),
        "Large uncovered native functions queued for timed RetDec or manual split.")
    add(rows, "coverage_frontier", "native_retdec_gap_queue_tier3_rows",
        native_retdec_gap_queue_tiers.get("tier3_huge_or_noisy_native_gap", 0),
        "Huge or noisy uncovered native functions that need splitting/modeling before broad RetDec.")
    add(rows, "coverage_frontier", "native_retdec_gap_queue_total_uncovered_bytes",
        sum(int(row.get("semantic_uncovered_bytes", "0") or "0") for row in native_retdec_gap_queue_index),
        "Function-boundary uncovered .text bytes represented by the native RetDec gap queue.")
    add(rows, "coverage_frontier", "native_retdec_gap_queue_top10_ranges",
        ",".join(row.get("selected_range", "") for row in native_retdec_gap_queue_index[:10]),
        "Top ten ranked native function ranges to target next.")
    add(rows, "c_shape", "native_retdec_gap_queue_c_rows",
        count(r'^    \{ \d+u, 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, \d+u, \d+u, \d+u, \d+u, ', native_retdec_gap_queue),
        "Native RetDec gap queue rows retained in C form.")
    add(rows, "c_shape", "native_gap_retdec_batch00_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch00),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 00.")
    add(rows, "c_shape", "native_gap_retdec_batch00_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch00),
        "RetDec native C function bodies emitted for native gap batch 00.")
    add(rows, "c_shape", "native_gap_retdec_batch00_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch00),
        "RetDec address-range comments emitted for native gap batch 00.")
    add(rows, "c_shape", "native_gap_retdec_batch01_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch01),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 01.")
    add(rows, "c_shape", "native_gap_retdec_batch01_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch01),
        "RetDec native C function bodies emitted for native gap batch 01.")
    add(rows, "c_shape", "native_gap_retdec_batch01_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch01),
        "RetDec address-range comments emitted for native gap batch 01.")
    add(rows, "c_shape", "native_gap_retdec_batch02_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch02),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 02.")
    add(rows, "c_shape", "native_gap_retdec_batch02_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch02),
        "RetDec native C function bodies emitted for native gap batch 02.")
    add(rows, "c_shape", "native_gap_retdec_batch02_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch02),
        "RetDec address-range comments emitted for native gap batch 02.")
    add(rows, "c_shape", "native_gap_retdec_batch03_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch03),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 03.")
    add(rows, "c_shape", "native_gap_retdec_batch03_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch03),
        "RetDec native C function bodies emitted for native gap batch 03.")
    add(rows, "c_shape", "native_gap_retdec_batch03_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch03),
        "RetDec address-range comments emitted for native gap batch 03.")
    add(rows, "c_shape", "native_gap_retdec_batch04_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch04),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 04.")
    add(rows, "c_shape", "native_gap_retdec_batch04_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch04),
        "RetDec native C function bodies emitted for native gap batch 04.")
    add(rows, "c_shape", "native_gap_retdec_batch04_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch04),
        "RetDec address-range comments emitted for native gap batch 04.")
    add(rows, "c_shape", "native_gap_retdec_batch05_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch05),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 05.")
    add(rows, "c_shape", "native_gap_retdec_batch05_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch05),
        "RetDec native C function bodies emitted for native gap batch 05.")
    add(rows, "c_shape", "native_gap_retdec_batch05_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch05),
        "RetDec address-range comments emitted for native gap batch 05.")
    add(rows, "c_shape", "native_gap_retdec_batch06_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch06),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 06.")
    add(rows, "c_shape", "native_gap_retdec_batch06_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch06),
        "RetDec native C function bodies emitted for native gap batch 06.")
    add(rows, "c_shape", "native_gap_retdec_batch06_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch06),
        "RetDec address-range comments emitted for native gap batch 06.")
    add(rows, "c_shape", "native_gap_retdec_batch07_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch07),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 07.")
    add(rows, "c_shape", "native_gap_retdec_batch07_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch07),
        "RetDec native C function bodies emitted for native gap batch 07.")
    add(rows, "c_shape", "native_gap_retdec_batch07_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch07),
        "RetDec address-range comments emitted for native gap batch 07.")
    add(rows, "c_shape", "native_gap_retdec_batch08_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch08),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 08.")
    add(rows, "c_shape", "native_gap_retdec_batch08_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch08),
        "RetDec native C function bodies emitted for native gap batch 08.")
    add(rows, "c_shape", "native_gap_retdec_batch08_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch08),
        "RetDec address-range comments emitted for native gap batch 08.")
    add(rows, "c_shape", "native_gap_retdec_batch09_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch09),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 09.")
    add(rows, "c_shape", "native_gap_retdec_batch09_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch09),
        "RetDec native C function bodies emitted for native gap batch 09.")
    add(rows, "c_shape", "native_gap_retdec_batch09_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch09),
        "RetDec address-range comments emitted for native gap batch 09.")
    add(rows, "c_shape", "native_gap_retdec_batch10_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch10),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 10.")
    add(rows, "c_shape", "native_gap_retdec_batch10_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch10),
        "RetDec native C function bodies emitted for native gap batch 10.")
    add(rows, "c_shape", "native_gap_retdec_batch10_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch10),
        "RetDec address-range comments emitted for native gap batch 10.")
    add(rows, "c_shape", "native_gap_retdec_batch11_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch11),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 11.")
    add(rows, "c_shape", "native_gap_retdec_batch11_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch11),
        "RetDec native C function bodies emitted for native gap batch 11.")
    add(rows, "c_shape", "native_gap_retdec_batch11_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch11),
        "RetDec address-range comments emitted for native gap batch 11.")
    add(rows, "c_shape", "native_gap_retdec_batch12_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch12),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 12.")
    add(rows, "c_shape", "native_gap_retdec_batch12_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch12),
        "RetDec native C function bodies emitted for native gap batch 12.")
    add(rows, "c_shape", "native_gap_retdec_batch12_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch12),
        "RetDec address-range comments emitted for native gap batch 12.")
    add(rows, "c_shape", "native_gap_retdec_batch13_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch13),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 13.")
    add(rows, "c_shape", "native_gap_retdec_batch13_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch13),
        "RetDec native C function bodies emitted for native gap batch 13.")
    add(rows, "c_shape", "native_gap_retdec_batch13_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch13),
        "RetDec address-range comments emitted for native gap batch 13.")
    add(rows, "c_shape", "native_gap_retdec_batch14_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch14),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 14.")
    add(rows, "c_shape", "native_gap_retdec_batch14_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch14),
        "RetDec native C function bodies emitted for native gap batch 14.")
    add(rows, "c_shape", "native_gap_retdec_batch14_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch14),
        "RetDec address-range comments emitted for native gap batch 14.")
    add(rows, "c_shape", "native_gap_retdec_batch15_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch15),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 15.")
    add(rows, "c_shape", "native_gap_retdec_batch15_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch15),
        "RetDec native C function bodies emitted for native gap batch 15.")
    add(rows, "c_shape", "native_gap_retdec_batch15_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch15),
        "RetDec address-range comments emitted for native gap batch 15.")
    add(rows, "c_shape", "native_gap_retdec_batch16_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch16),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 16.")
    add(rows, "c_shape", "native_gap_retdec_batch16_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch16),
        "RetDec native C function bodies emitted for native gap batch 16.")
    add(rows, "c_shape", "native_gap_retdec_batch16_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch16),
        "RetDec address-range comments emitted for native gap batch 16.")
    add(rows, "c_shape", "native_gap_retdec_batch17_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch17),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 17.")
    add(rows, "c_shape", "native_gap_retdec_batch17_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch17),
        "RetDec native C function bodies emitted for native gap batch 17.")
    add(rows, "c_shape", "native_gap_retdec_batch17_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch17),
        "RetDec address-range comments emitted for native gap batch 17.")
    add(rows, "c_shape", "native_gap_retdec_batch18_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch18),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 18.")
    add(rows, "c_shape", "native_gap_retdec_batch18_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch18),
        "RetDec native C function bodies emitted for native gap batch 18.")
    add(rows, "c_shape", "native_gap_retdec_batch18_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch18),
        "RetDec address-range comments emitted for native gap batch 18.")
    add(rows, "c_shape", "native_gap_retdec_batch19_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch19),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 19.")
    add(rows, "c_shape", "native_gap_retdec_batch19_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch19),
        "RetDec native C function bodies emitted for native gap batch 19.")
    add(rows, "c_shape", "native_gap_retdec_batch19_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch19),
        "RetDec address-range comments emitted for native gap batch 19.")
    add(rows, "c_shape", "native_gap_retdec_batch20_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch20),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 20.")
    add(rows, "c_shape", "native_gap_retdec_batch20_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch20),
        "RetDec native C function bodies emitted for native gap batch 20.")
    add(rows, "c_shape", "native_gap_retdec_batch20_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch20),
        "RetDec address-range comments emitted for native gap batch 20.")
    add(rows, "c_shape", "native_gap_retdec_batch21_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch21),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 21.")
    add(rows, "c_shape", "native_gap_retdec_batch21_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch21),
        "RetDec native C function bodies emitted for native gap batch 21.")
    add(rows, "c_shape", "native_gap_retdec_batch21_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch21),
        "RetDec address-range comments emitted for native gap batch 21.")
    add(rows, "c_shape", "native_gap_retdec_batch22_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch22),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 22.")
    add(rows, "c_shape", "native_gap_retdec_batch22_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch22),
        "RetDec native C function bodies emitted for native gap batch 22.")
    add(rows, "c_shape", "native_gap_retdec_batch22_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch22),
        "RetDec address-range comments emitted for native gap batch 22.")
    add(rows, "c_shape", "native_gap_retdec_batch23_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch23),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 23.")
    add(rows, "c_shape", "native_gap_retdec_batch23_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", native_gap_retdec_batch23),
        "RetDec native C function bodies emitted for native gap batch 23.")
    add(rows, "c_shape", "native_gap_retdec_batch23_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch23),
        "RetDec address-range comments emitted for native gap batch 23.")
    add(rows, "c_shape", "native_gap_retdec_batch24_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch24),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 24.")
    add(rows, "c_shape", "native_gap_retdec_batch24_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch24),
        "RetDec native C function bodies emitted for native gap batch 24.")
    add(rows, "c_shape", "native_gap_retdec_batch24_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch24),
        "RetDec address-range comments emitted for native gap batch 24.")
    add(rows, "c_shape", "native_gap_retdec_batch25_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch25),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 25.")
    add(rows, "c_shape", "native_gap_retdec_batch25_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch25),
        "RetDec native C function bodies emitted for native gap batch 25.")
    add(rows, "c_shape", "native_gap_retdec_batch25_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch25),
        "RetDec address-range comments emitted for native gap batch 25.")
    add(rows, "c_shape", "native_gap_retdec_batch26_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch26),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 26.")
    add(rows, "c_shape", "native_gap_retdec_batch26_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch26),
        "RetDec native C function bodies emitted for native gap batch 26.")
    add(rows, "c_shape", "native_gap_retdec_batch26_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch26),
        "RetDec address-range comments emitted for native gap batch 26.")
    add(rows, "c_shape", "native_gap_retdec_batch27_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch27),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 27.")
    add(rows, "c_shape", "native_gap_retdec_batch27_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch27),
        "RetDec native C function bodies emitted for native gap batch 27.")
    add(rows, "c_shape", "native_gap_retdec_batch27_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch27),
        "RetDec address-range comments emitted for native gap batch 27.")
    add(rows, "c_shape", "native_gap_retdec_batch28_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch28),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 28.")
    add(rows, "c_shape", "native_gap_retdec_batch28_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch28),
        "RetDec native C function bodies emitted for native gap batch 28.")
    add(rows, "c_shape", "native_gap_retdec_batch28_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch28),
        "RetDec address-range comments emitted for native gap batch 28.")
    add(rows, "c_shape", "native_gap_retdec_batch29_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch29),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 29.")
    add(rows, "c_shape", "native_gap_retdec_batch29_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch29),
        "RetDec native C function bodies emitted for native gap batch 29.")
    add(rows, "c_shape", "native_gap_retdec_batch29_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch29),
        "RetDec address-range comments emitted for native gap batch 29.")
    add(rows, "c_shape", "native_gap_retdec_batch30_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch30),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 30.")
    add(rows, "c_shape", "native_gap_retdec_batch30_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch30),
        "RetDec native C function bodies emitted for native gap batch 30.")
    add(rows, "c_shape", "native_gap_retdec_batch30_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch30),
        "RetDec address-range comments emitted for native gap batch 30.")
    add(rows, "c_shape", "native_gap_retdec_batch31_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch31),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 31.")
    add(rows, "c_shape", "native_gap_retdec_batch31_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch31),
        "RetDec native C function bodies emitted for native gap batch 31.")
    add(rows, "c_shape", "native_gap_retdec_batch31_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch31),
        "RetDec address-range comments emitted for native gap batch 31.")
    add(rows, "c_shape", "native_gap_retdec_batch32_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch32),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 32.")
    add(rows, "c_shape", "native_gap_retdec_batch32_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch32),
        "RetDec native C function bodies emitted for native gap batch 32.")
    add(rows, "c_shape", "native_gap_retdec_batch32_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch32),
        "RetDec address-range comments emitted for native gap batch 32.")
    add(rows, "c_shape", "native_gap_retdec_batch33_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch33),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 33.")
    add(rows, "c_shape", "native_gap_retdec_batch33_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch33),
        "RetDec native C function bodies emitted for native gap batch 33.")
    add(rows, "c_shape", "native_gap_retdec_batch33_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch33),
        "RetDec address-range comments emitted for native gap batch 33.")
    add(rows, "c_shape", "native_gap_retdec_batch34_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch34),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 34.")
    add(rows, "c_shape", "native_gap_retdec_batch34_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch34),
        "RetDec native C function bodies emitted for native gap batch 34.")
    add(rows, "c_shape", "native_gap_retdec_batch34_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch34),
        "RetDec address-range comments emitted for native gap batch 34.")
    add(rows, "c_shape", "native_gap_retdec_batch35_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch35),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 35.")
    add(rows, "c_shape", "native_gap_retdec_batch35_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch35),
        "RetDec native C function bodies emitted for native gap batch 35.")
    add(rows, "c_shape", "native_gap_retdec_batch35_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch35),
        "RetDec address-range comments emitted for native gap batch 35.")
    add(rows, "c_shape", "native_gap_retdec_batch36_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch36),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 36.")
    add(rows, "c_shape", "native_gap_retdec_batch36_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch36),
        "RetDec native C function bodies emitted for native gap batch 36.")
    add(rows, "c_shape", "native_gap_retdec_batch36_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch36),
        "RetDec address-range comments emitted for native gap batch 36.")
    add(rows, "c_shape", "native_gap_retdec_batch37_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch37),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 37.")
    add(rows, "c_shape", "native_gap_retdec_batch37_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch37),
        "RetDec native C function bodies emitted for native gap batch 37.")
    add(rows, "c_shape", "native_gap_retdec_batch37_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch37),
        "RetDec address-range comments emitted for native gap batch 37.")
    add(rows, "c_shape", "native_gap_retdec_batch38_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch38),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 38.")
    add(rows, "c_shape", "native_gap_retdec_batch38_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch38),
        "RetDec native C function bodies emitted for native gap batch 38.")
    add(rows, "c_shape", "native_gap_retdec_batch38_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch38),
        "RetDec address-range comments emitted for native gap batch 38.")
    add(rows, "c_shape", "native_gap_retdec_batch39_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch39),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 39.")
    add(rows, "c_shape", "native_gap_retdec_batch39_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch39),
        "RetDec native C function bodies emitted for native gap batch 39.")
    add(rows, "c_shape", "native_gap_retdec_batch39_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch39),
        "RetDec address-range comments emitted for native gap batch 39.")
    add(rows, "c_shape", "native_gap_retdec_batch40_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch40),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 40.")
    add(rows, "c_shape", "native_gap_retdec_batch40_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch40),
        "RetDec native C function bodies emitted for native gap batch 40.")
    add(rows, "c_shape", "native_gap_retdec_batch40_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch40),
        "RetDec address-range comments emitted for native gap batch 40.")
    add(rows, "c_shape", "native_gap_retdec_batch41_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch41),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 41.")
    add(rows, "c_shape", "native_gap_retdec_batch41_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch41),
        "RetDec native C function bodies emitted for native gap batch 41.")
    add(rows, "c_shape", "native_gap_retdec_batch41_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch41),
        "RetDec address-range comments emitted for native gap batch 41.")
    add(rows, "c_shape", "native_gap_retdec_batch42_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch42),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 42.")
    add(rows, "c_shape", "native_gap_retdec_batch42_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch42),
        "RetDec native C function bodies emitted for native gap batch 42.")
    add(rows, "c_shape", "native_gap_retdec_batch42_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch42),
        "RetDec address-range comments emitted for native gap batch 42.")
    add(rows, "c_shape", "native_gap_retdec_batch43_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch43),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 43.")
    add(rows, "c_shape", "native_gap_retdec_batch43_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch43),
        "RetDec native C function bodies emitted for native gap batch 43.")
    add(rows, "c_shape", "native_gap_retdec_batch43_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch43),
        "RetDec address-range comments emitted for native gap batch 43.")
    add(rows, "c_shape", "native_gap_retdec_batch44_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch44),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 44.")
    add(rows, "c_shape", "native_gap_retdec_batch44_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch44),
        "RetDec native C function bodies emitted for native gap batch 44.")
    add(rows, "c_shape", "native_gap_retdec_batch44_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch44),
        "RetDec address-range comments emitted for native gap batch 44.")
    add(rows, "c_shape", "native_gap_retdec_batch45_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch45),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 45.")
    add(rows, "c_shape", "native_gap_retdec_batch45_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch45),
        "RetDec native C function bodies emitted for native gap batch 45.")
    add(rows, "c_shape", "native_gap_retdec_batch45_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch45),
        "RetDec address-range comments emitted for native gap batch 45.")
    add(rows, "c_shape", "native_gap_retdec_batch46_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch46),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 46.")
    add(rows, "c_shape", "native_gap_retdec_batch46_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch46),
        "RetDec native C function bodies emitted for native gap batch 46.")
    add(rows, "c_shape", "native_gap_retdec_batch46_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch46),
        "RetDec address-range comments emitted for native gap batch 46.")
    add(rows, "c_shape", "native_gap_retdec_batch47_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch47),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 47.")
    add(rows, "c_shape", "native_gap_retdec_batch47_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch47),
        "RetDec native C function bodies emitted for native gap batch 47.")
    add(rows, "c_shape", "native_gap_retdec_batch47_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch47),
        "RetDec address-range comments emitted for native gap batch 47.")
    add(rows, "c_shape", "native_gap_retdec_batch48_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch48),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 48.")
    add(rows, "c_shape", "native_gap_retdec_batch48_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch48),
        "RetDec native C function bodies emitted for native gap batch 48.")
    add(rows, "c_shape", "native_gap_retdec_batch48_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch48),
        "RetDec address-range comments emitted for native gap batch 48.")
    add(rows, "c_shape", "native_gap_retdec_batch49_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch49),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 49.")
    add(rows, "c_shape", "native_gap_retdec_batch49_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch49),
        "RetDec native C function bodies emitted for native gap batch 49.")
    add(rows, "c_shape", "native_gap_retdec_batch49_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch49),
        "RetDec address-range comments emitted for native gap batch 49.")
    add(rows, "c_shape", "native_gap_retdec_batch50_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch50),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 50.")
    add(rows, "c_shape", "native_gap_retdec_batch50_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch50),
        "RetDec native C function bodies emitted for native gap batch 50.")
    add(rows, "c_shape", "native_gap_retdec_batch50_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch50),
        "RetDec address-range comments emitted for native gap batch 50.")
    add(rows, "c_shape", "native_gap_retdec_batch51_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch51),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 51.")
    add(rows, "c_shape", "native_gap_retdec_batch51_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch51),
        "RetDec native C function bodies emitted for native gap batch 51.")
    add(rows, "c_shape", "native_gap_retdec_batch51_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch51),
        "RetDec address-range comments emitted for native gap batch 51.")
    add(rows, "c_shape", "native_gap_retdec_batch52_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch52),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 52.")
    add(rows, "c_shape", "native_gap_retdec_batch52_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch52),
        "RetDec native C function bodies emitted for native gap batch 52.")
    add(rows, "c_shape", "native_gap_retdec_batch52_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch52),
        "RetDec address-range comments emitted for native gap batch 52.")
    add(rows, "c_shape", "native_gap_retdec_batch53_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch53),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 53.")
    add(rows, "c_shape", "native_gap_retdec_batch53_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch53),
        "RetDec native C function bodies emitted for native gap batch 53.")
    add(rows, "c_shape", "native_gap_retdec_batch53_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch53),
        "RetDec address-range comments emitted for native gap batch 53.")
    add(rows, "c_shape", "native_gap_retdec_batch54_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch54),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 54.")
    add(rows, "c_shape", "native_gap_retdec_batch54_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch54),
        "RetDec native C function bodies emitted for native gap batch 54.")
    add(rows, "c_shape", "native_gap_retdec_batch54_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch54),
        "RetDec address-range comments emitted for native gap batch 54.")
    add(rows, "c_shape", "native_gap_retdec_batch55_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ rank=", native_gap_retdec_batch55),
        "Fixed top-ranked native gap queue ranges selected for RetDec batch 55.")
    add(rows, "c_shape", "native_gap_retdec_batch55_functions",
        count(r"^int64_t [A-Za-z_][A-Za-z0-9_]*\(.*\) \{", native_gap_retdec_batch55),
        "RetDec native C function bodies emitted for native gap batch 55.")
    add(rows, "c_shape", "native_gap_retdec_batch55_address_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", native_gap_retdec_batch55),
        "RetDec address-range comments emitted for native gap batch 55.")
    add(rows, "data_surface", "binary_data_section_rows",
        sum(1 for row in binary_data_sections_index if row.get("kind", "") == "section"),
        "Allocatable ELF sections tracked by the binary data carrier.")
    add(rows, "data_surface", "binary_data_emitted_section_rows",
        sum(1 for row in binary_data_sections_index
            if row.get("kind", "") == "section" and row.get("emitted_data", "") == "yes"),
        "Allocatable non-executable ELF sections emitted as exact C byte arrays.")
    add(rows, "data_surface", "binary_data_emitted_bytes",
        hex(sum(int(row.get("size", "0") or "0", 0) for row in binary_data_sections_index
                if row.get("kind", "") == "section" and row.get("emitted_data", "") == "yes")),
        "Exact bytes carried for allocatable non-executable ELF data sections.")
    add(rows, "data_surface", "binary_data_string_refs",
        len(binary_data_string_rows),
        "Printable string references indexed from emitted runtime data sections.")
    add(rows, "data_surface", "binary_data_string_bytes",
        hex(sum(int(row.get("size", "0") or "0", 0) for row in binary_data_string_rows)),
        "Exact printable bytes covered by the indexed runtime string rows.")
    add(rows, "data_surface", "binary_data_dispatch_table_rows",
        sum(1 for row in binary_data_sections_index if row.get("kind", "") == "dispatch_table"),
        "Embedded .text VM dispatch-table byte carriers.")
    add(rows, "c_shape", "binary_data_section_arrays",
        binary_data_section_array_c_rows,
        "C byte arrays emitted for exact runtime data sections.")
    add(rows, "c_shape", "binary_data_section_metadata_rows_in_c",
        binary_data_section_metadata_c_rows,
        "C metadata rows for all allocatable ELF sections, including NOBITS and executable code-section metadata.")
    add(rows, "data_surface", "binary_data_section_arrays_match_index",
        "yes" if binary_data_section_array_c_rows == sum(
            1 for row in binary_data_sections_index
            if row.get("kind", "") == "section" and row.get("emitted_data", "") == "yes"
        ) else "no",
        "Whether every TSV-indexed emitted runtime data section has an exact C byte array.")
    add(rows, "data_surface", "binary_data_section_metadata_rows_match_index",
        "yes" if binary_data_section_metadata_c_rows == sum(
            1 for row in binary_data_sections_index if row.get("kind", "") == "section"
        ) else "no",
        "Whether every TSV-indexed allocatable ELF section has a C metadata row.")
    add(rows, "c_shape", "binary_data_full_string_rows",
        binary_data_string_ref_c_rows,
        "C string-reference rows with full text and pointers into exact backing byte arrays.")
    add(rows, "c_shape", "binary_data_string_row_static_asserts",
        count(r"^_Static_assert\(sizeof\(k_vm_binary_string_refs\)", binary_data_sections),
        "C11 static assertion proving the emitted string-reference array count.")
    add(rows, "data_surface", "binary_data_string_rows_match_index",
        "yes" if binary_data_string_ref_c_rows == len(binary_data_string_rows) else "no",
        "Whether every TSV-indexed runtime string has a full C row in the data carrier.")
    add(rows, "c_shape", "binary_data_dispatch_table_offsets",
        count(r"^static const uint64_t vm_eac_dispatch_table_raw_offsets\[360\]", binary_data_sections),
        "Raw 360-entry VM dispatch-table offset array carried in C.")
    add(rows, "c_shape", "binary_data_dispatch_table_raw_bytes",
        count(r"^static const uint8_t vm_eac_dispatch_table_raw_bytes\[2880\]", binary_data_sections),
        "Raw VM dispatch-table byte array carried in C.")
    add(rows, "coverage", "static_only_handler_queue_rows",
        len(static_only_handler_queue_index),
        "Ranked static-only dispatch entries to convert from sidecar evidence into stronger handler C.")
    add(rows, "c_shape", "static_only_handler_queue_c_entries",
        count(r"^    \{ \d+, \d+, 0x[0-9a-f]+ull,", static_only_handler_queue),
        "Syntax-checkable C queue entries for static-only handler closure work.")
    add(rows, "coverage", "static_only_handler_queue_tier0_small_single_function",
        static_only_queue_tiers.get("tier0_single_function_small_static_replay", 0),
        "Small single-function static-only handlers ranked first for RetDec-to-handler inlining.")
    add(rows, "coverage", "static_only_handler_queue_tier1_medium_single_function",
        static_only_queue_tiers.get("tier1_single_function_medium_static_replay", 0),
        "Medium single-function static-only handlers ranked after tier0.")
    add(rows, "coverage", "static_only_handler_queue_tier2_small_shared_range",
        static_only_queue_tiers.get("tier2_small_shared_range_split", 0),
        "Small shared RetDec ranges that need chunk splitting before handler inlining.")
    add(rows, "coverage", "static_only_handler_queue_tier3_multi_function_shared_range",
        static_only_queue_tiers.get("tier3_multi_function_shared_range", 0),
        "Multi-function shared static-only ranges ranked behind single-function rows.")
    add(rows, "coverage", "static_only_handler_queue_tier4_call_ret_side_effect",
        static_only_queue_tiers.get("tier4_native_call_or_ret_side_effect", 0),
        "Static-only rows with native call/ret side effects requiring audit before inlining.")
    add(rows, "coverage", "static_only_handler_queue_tier5_large_static_replay",
        static_only_queue_tiers.get("tier5_large_static_replay", 0),
        "Large static-only rows deferred until smaller handlers are closed.")
    add(rows, "coverage", "static_only_handler_queue_single_function_rows",
        sum(1 for row in static_only_handler_queue_index if row.get("function_count", "") == "1"),
        "Static-only queue rows with one overlapping RetDec function.")
    add(rows, "coverage", "static_only_handler_queue_call_or_ret_rows",
        sum(1 for row in static_only_handler_queue_index
            if int(row.get("calls") or "0") > 0 or int(row.get("rets") or "0") > 0),
        "Static-only queue rows whose native skeleton has calls or rets.")
    add(rows, "coverage", "static_only_handler_queue_top10_entries",
        ",".join(row.get("entry", "") for row in static_only_handler_queue_index[:10]) or "-",
        "Top-ranked dispatch entries for the next static RetDec-to-handler conversion pass.")
    add(rows, "coverage", "static_only_tier0_model_rows",
        len(static_only_tier0_model_index),
        "Tier0 static-only handlers translated from RetDec sidecars into frame-level C models.")
    add(rows, "c_shape", "static_only_tier0_model_functions",
        count(r"^static VMTier0Result vm_tier0_entry_\d{3}\(VMTier0Frame \*vm\) \{", static_only_tier0_models),
        "Syntax-checkable frame-level C functions for tier0 static-only handlers.")
    add(rows, "c_shape", "static_only_tier0_model_dispatch_cases",
        count(r"^    case \d+: return vm_tier0_entry_\d{3}\(vm\);", static_only_tier0_models),
        "Dispatcher cases for the tier0 static-only handler model artifact.")
    add(rows, "coverage", "static_only_tier0_model_known_slot_rows",
        sum(1 for row in static_only_tier0_model_index
            if row.get("slot_status", "") and row.get("slot_status", "") != "unknown"),
        "Tier0 static-only model rows with a concrete slot or candidate slot expression.")
    add(rows, "coverage", "static_only_tier0_model_entries",
        ",".join(row.get("entry", "") for row in static_only_tier0_model_index) or "-",
        "Dispatch entries covered by the tier0 frame-level C model artifact.")
    add(rows, "coverage", "static_only_tier1_model_rows",
        len(static_only_tier1_model_index),
        "Tier1 static-only handlers promoted from queue rows into named C model functions.")
    add(rows, "c_shape", "static_only_tier1_model_functions",
        count(r"^static VMTier1Result vm_tier1_entry_\d{3}\(VMTier1Frame \*vm\) \{", static_only_tier1_models),
        "Syntax-checkable frame-level C functions for tier1 static-only handlers.")
    add(rows, "c_shape", "static_only_tier1_model_dispatch_cases",
        count(r"^    case \d+: return vm_tier1_entry_\d{3}\(vm\);", static_only_tier1_models),
        "Dispatcher cases for the tier1 static-only handler model artifact.")
    add(rows, "coverage", "static_only_tier1_model_candidate_slot_rows",
        sum(1 for row in static_only_tier1_model_index if row.get("slot_expr", "")),
        "Tier1 static-only model rows with RetDec-derived known or candidate slot expressions.")
    add(rows, "coverage", "static_only_tier1_model_executable_slot_rows",
        sum(1 for row in static_only_tier1_model_index
            if row.get("slot_status", "") == "retdec_dispatch_table_slot"),
        "Tier1 static-only model rows whose RetDec tail exposes a clean dispatch-table slot.")
    add(rows, "coverage", "static_only_tier1_model_entries",
        ",".join(row.get("entry", "") for row in static_only_tier1_model_index) or "-",
        "Dispatch entries covered by the tier1 static-only model artifact.")
    add(rows, "coverage", "static_only_tier2_split_rows",
        len(static_only_tier2_split_index),
        "Tier2 static-only shared-range rows split into primary handler model evidence.")
    add(rows, "c_shape", "static_only_tier2_split_functions",
        count(r"^static VMTier2Result vm_tier2_entry_\d{3}\(VMTier2Frame \*vm\) \{", static_only_tier2_split),
        "Syntax-checkable C functions for tier2 static-only split models.")
    add(rows, "c_shape", "static_only_tier2_split_dispatch_cases",
        count(r"^    case \d+: return vm_tier2_entry_\d{3}\(vm\);", static_only_tier2_split),
        "Dispatcher cases for the tier2 static-only split model artifact.")
    add(rows, "coverage", "static_only_tier2_split_candidate_slot_rows",
        sum(1 for row in static_only_tier2_split_index if row.get("slot_expr", "")),
        "Tier2 split rows with RetDec-derived known or candidate slot expressions.")
    add(rows, "coverage", "static_only_tier2_split_executable_slot_rows",
        sum(1 for row in static_only_tier2_split_index
            if row.get("slot_status", "") == "retdec_dispatch_table_slot"),
        "Tier2 split rows whose primary RetDec tail exposes a clean dispatch-table slot.")
    add(rows, "coverage", "static_only_tier2_split_entries",
        ",".join(row.get("entry", "") for row in static_only_tier2_split_index) or "-",
        "Dispatch entries covered by the tier2 static-only split model artifact.")
    add(rows, "coverage", "static_only_tier3_shared_rows",
        len(static_only_tier3_shared_index),
        "Tier3 static-only multi-function shared-range rows converted into primary handler model evidence.")
    add(rows, "c_shape", "static_only_tier3_shared_functions",
        count(r"^static VMTier3Result vm_tier3_entry_\d{3}\(VMTier3Frame \*vm\) \{", static_only_tier3_shared),
        "Syntax-checkable C functions for tier3 static-only shared-range models.")
    add(rows, "c_shape", "static_only_tier3_shared_dispatch_cases",
        count(r"^    case \d+: return vm_tier3_entry_\d{3}\(vm\);", static_only_tier3_shared),
        "Dispatcher cases for the tier3 static-only shared model artifact.")
    add(rows, "coverage", "static_only_tier3_shared_candidate_slot_rows",
        sum(1 for row in static_only_tier3_shared_index if row.get("slot_expr", "")),
        "Tier3 shared rows with RetDec-derived known or candidate slot expressions.")
    add(rows, "coverage", "static_only_tier3_shared_executable_slot_rows",
        sum(1 for row in static_only_tier3_shared_index
            if row.get("slot_status", "") == "retdec_dispatch_table_slot"),
        "Tier3 shared rows whose primary RetDec tail exposes a clean dispatch-table slot.")
    add(rows, "coverage", "static_only_tier3_shared_entries",
        ",".join(row.get("entry", "") for row in static_only_tier3_shared_index) or "-",
        "Dispatch entries covered by the tier3 static-only shared model artifact.")
    add(rows, "coverage", "static_only_tier4_callret_rows",
        len(static_only_tier4_callret_index),
        "Tier4 static-only native call/ret side-effect rows converted into primary handler model evidence.")
    add(rows, "c_shape", "static_only_tier4_callret_functions",
        count(r"^static VMTier4Result vm_tier4_entry_\d{3}\(VMTier4Frame \*vm\) \{", static_only_tier4_callret),
        "Syntax-checkable C functions for tier4 static-only call/ret models.")
    add(rows, "c_shape", "static_only_tier4_callret_dispatch_cases",
        count(r"^    case \d+: return vm_tier4_entry_\d{3}\(vm\);", static_only_tier4_callret),
        "Dispatcher cases for the tier4 static-only call/ret model artifact.")
    add(rows, "coverage", "static_only_tier4_callret_candidate_slot_rows",
        sum(1 for row in static_only_tier4_callret_index if row.get("slot_expr", "")),
        "Tier4 call/ret rows with RetDec-derived candidate slot expressions.")
    add(rows, "coverage", "static_only_tier4_callret_executable_slot_rows",
        sum(1 for row in static_only_tier4_callret_index
            if row.get("slot_status", "") == "retdec_dispatch_table_slot"),
        "Tier4 call/ret rows whose primary RetDec tail exposes a clean dispatch-table slot.")
    add(rows, "coverage", "static_only_tier4_callret_call_rows",
        sum(1 for row in static_only_tier4_callret_index
            if int(row.get("calls") or "0") > 0),
        "Tier4 call/ret rows whose native skeleton contains call side effects.")
    add(rows, "coverage", "static_only_tier4_callret_multi_ret_rows",
        sum(1 for row in static_only_tier4_callret_index
            if int(row.get("rets") or "0") > 1),
        "Tier4 call/ret rows whose native skeleton contains multiple ret side-effect sites.")
    add(rows, "coverage", "static_only_tier4_callret_entries",
        ",".join(row.get("entry", "") for row in static_only_tier4_callret_index) or "-",
        "Dispatch entries covered by the tier4 static-only call/ret model artifact.")
    add(rows, "coverage", "static_only_tier5_large_rows",
        len(static_only_tier5_large_index),
        "Tier5 large static-only rows converted into conservative primary handler model evidence.")
    add(rows, "c_shape", "static_only_tier5_large_functions",
        count(r"^static VMTier5Result vm_tier5_entry_\d{3}\(VMTier5Frame \*vm\) \{", static_only_tier5_large),
        "Syntax-checkable C functions for tier5 large static-only models.")
    add(rows, "c_shape", "static_only_tier5_large_dispatch_cases",
        count(r"^    case \d+: return vm_tier5_entry_\d{3}\(vm\);", static_only_tier5_large),
        "Dispatcher cases for the tier5 large static-only model artifact.")
    add(rows, "coverage", "static_only_tier5_large_candidate_slot_rows",
        sum(1 for row in static_only_tier5_large_index if row.get("slot_expr", "")),
        "Tier5 large rows with RetDec-derived candidate slot expressions.")
    add(rows, "coverage", "static_only_tier5_large_executable_slot_rows",
        sum(1 for row in static_only_tier5_large_index
            if row.get("slot_status", "") == "retdec_dispatch_table_slot"),
        "Tier5 large rows whose primary RetDec tail exposes a clean dispatch-table slot.")
    add(rows, "coverage", "static_only_tier5_large_total_span_bytes",
        sum(int(row.get("span_bytes") or "0") for row in static_only_tier5_large_index),
        "Total selected native span bytes for tier5 large static-only model rows.")
    add(rows, "coverage", "static_only_tier5_large_total_insns",
        sum(int(row.get("insns") or "0") for row in static_only_tier5_large_index),
        "Total selected native instructions for tier5 large static-only model rows.")
    add(rows, "coverage", "static_only_tier5_large_entries",
        ",".join(row.get("entry", "") for row in static_only_tier5_large_index) or "-",
        "Dispatch entries covered by the tier5 large static-only model artifact.")
    add(rows, "c_shape", "target_only_handler_retdec_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ entry=\d+ ", target_only_handlers_retdec),
        "Target-only VM handler native ranges selected for targeted RetDec.")
    add(rows, "c_shape", "target_only_handler_retdec_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", target_only_handlers_retdec),
        "Targeted RetDec C functions emitted from target-only VM handler native ranges.")
    add(rows, "c_shape", "target_only_handler_retdec_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", target_only_handlers_retdec),
        "Native address ranges emitted by RetDec for target-only handler coverage.")
    add(rows, "c_shape", "unobserved_handler_retdec_batches",
        sum(1 for text in unobserved_handlers_retdec_batches if text),
        "Generated targeted RetDec C batches for unobserved VM handler native ranges.")
    add(rows, "c_shape", "unobserved_handler_retdec_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ entry=\d+ ", unobserved_handlers_retdec_all),
        "Unobserved VM handler native ranges selected across targeted RetDec batches.")
    add(rows, "c_shape", "unobserved_handler_retdec_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", unobserved_handlers_retdec_all),
        "Targeted RetDec C functions emitted from all unobserved handler batches.")
    add(rows, "c_shape", "unobserved_handler_retdec_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", unobserved_handlers_retdec_all),
        "Native address ranges emitted by RetDec for all unobserved handler batches.")
    add(rows, "c_shape", "unobserved_handler_retdec_external_helpers",
        count(r"^int64_t (?:function|unknown)_[0-9a-f]+\(\);$", unobserved_handlers_retdec_all),
        "External helper prototypes referenced by the unobserved RetDec batches.")
    add(rows, "c_shape", "weak_handler_retdec_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ entry=\d+ ", weak_handlers_retdec),
        "Observed weak-recovery VM handler native ranges selected for targeted RetDec.")
    add(rows, "c_shape", "weak_handler_retdec_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", weak_handlers_retdec),
        "Targeted RetDec C functions emitted from observed weak-recovery handler ranges.")
    add(rows, "c_shape", "weak_handler_retdec_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", weak_handlers_retdec),
        "Native address ranges emitted by RetDec for observed weak-recovery handlers.")
    add(rows, "c_shape", "weak_handler_retdec_external_helpers",
        count(r"^int64_t (?:function|unknown)_[0-9a-f]+\(\);$", weak_handlers_retdec),
        "External helper prototypes referenced by the weak-handler RetDec artifact.")
    add(rows, "c_shape", "validated_handler_retdec_batches",
        sum(1 for text in validated_handlers_retdec_batches if text),
        "Generated targeted RetDec C batches for static-validated VM handler native ranges.")
    add(rows, "c_shape", "validated_handler_retdec_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ entry=\d+ ", validated_handlers_retdec_all),
        "Static-validated VM handler native ranges selected across targeted RetDec batches.")
    add(rows, "c_shape", "validated_handler_retdec_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", validated_handlers_retdec_all),
        "Targeted RetDec C functions emitted from all static-validated handler batches.")
    add(rows, "c_shape", "validated_handler_retdec_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", validated_handlers_retdec_all),
        "Native address ranges emitted by RetDec for all static-validated handler batches.")
    add(rows, "c_shape", "validated_handler_retdec_external_helpers",
        count(r"^int64_t (?:function|unknown)_[0-9a-f]+\(\);$", validated_handlers_retdec_all),
        "External helper prototypes referenced by the static-validated RetDec batches.")
    add(rows, "c_shape", "handler_retdec_sidecar_files",
        1 + sum(1 for text in unobserved_handlers_retdec_batches if text) + 1 +
        sum(1 for text in validated_handlers_retdec_batches if text),
        "Target-only, unobserved, weak, and static-validated native handler RetDec C sidecar files.")
    add(rows, "c_shape", "handler_retdec_sidecar_selected_ranges",
        count(r"^ \*   0x[0-9a-f]+-0x[0-9a-f]+ entry=\d+ ", handler_retdec_sidecars_all),
        "All VM dispatch-entry native handler ranges selected for targeted RetDec sidecars.")
    add(rows, "c_shape", "handler_retdec_sidecar_functions",
        count(r"^int64_t function_[0-9a-f]+\(.*\) \{", handler_retdec_sidecars_all),
        "All native C functions emitted across target-only, unobserved, weak, and static-validated handler RetDec sidecars.")
    add(rows, "c_shape", "handler_retdec_sidecar_ranges",
        count(r"^// Address range: 0x[0-9a-f]+ - 0x[0-9a-f]+$", handler_retdec_sidecars_all),
        "All native address ranges emitted by RetDec across handler sidecars.")
    add(rows, "c_shape", "handler_retdec_index_rows",
        len(handler_retdec_index),
        "Per-dispatch-entry index rows tying handler entries to native RetDec sidecar functions.")
    add(rows, "c_shape", "handler_retdec_index_entries",
        len({row.get("entry", "") for row in handler_retdec_index if row.get("entry", "")}),
        "Distinct VM dispatch entries present in the handler RetDec sidecar index.")
    add(rows, "c_shape", "handler_retdec_index_rows_with_functions",
        sum(1 for row in handler_retdec_index if int(row.get("function_count") or "0") > 0),
        "Handler RetDec index rows with at least one overlapping native C function.")
    add(rows, "c_shape", "unresolved_family_chain_functions",
        count(r"^static void residual_start_[0-9a-f]+\(VMState \*vm\) \{", unresolved_family_chains),
        "C-shaped evidence functions for residual native-ret-patch / observed-chain synthetic successor families.")
    add(rows, "c_shape", "unresolved_family_chain_native_ret_patch_records",
        count(r"evidence_native_ret_patch\(vm,", unresolved_family_chains),
        "Native return-patch target records referenced by residual family C evidence functions.")
    add(rows, "c_shape", "unresolved_family_chain_observed_steps",
        count(r"evidence_chain_step\(vm,", unresolved_family_chains),
        "Observed-chain reconciliation steps rendered into residual family C evidence functions.")
    add(rows, "c_shape", "unresolved_family_chain_dispatch_cases",
        count(r"^    case 0x[0-9a-f]+ull:$", unresolved_family_chains),
        "Dispatcher cases for residual synthetic successor family starts.")
    add(rows, "c_shape", "path_specialized_functions", count(r"^static VMOpResult path_entry_\d{3}_[0-9a-f]+\(VMState \*vm\) \{", path_handlers),
        "Validated concrete branch-path C functions.")
    add(rows, "c_shape", "path_specialized_model_rows",
        count(r"^    \{ \d+, 0x[0-9a-f]+ull, \d+u, ", path_handlers),
        "Validated concrete branch-path metadata rows.")
    add(rows, "c_shape", "path_specialized_dispatch_cases",
        count(r"^        case 0x[0-9a-f]+ull: return path_entry_\d{3}_[0-9a-f]+\(vm\);", path_handlers),
        "Validated concrete branch-path dispatcher cases keyed by path hash.")
    add(rows, "c_shape", "path_specialized_dispatcher_functions",
        count(r"^static VMOpResult vm_call_path_handler\(uint16_t entry, uint64_t path_key_value, VMState \*vm\) \{", path_handlers),
        "Dispatcher functions for calling validated concrete branch-path handlers by entry and path hash.")
    add(rows, "coverage_frontier", "path_frontier_functions",
        count(r"^static VMOpResult path_entry_\d{3}_[0-9a-f]+\(VMState \*vm\) \{", path_handlers_frontier),
        "Unvalidated path-specialized C functions retained as explicit frontier evidence.")
    add(rows, "coverage_frontier", "path_frontier_model_rows",
        count(r"^    \{ \d+, 0x[0-9a-f]+ull, \d+u, ", path_handlers_frontier),
        "Unvalidated path-specialized metadata rows retained in the frontier artifact.")
    add(rows, "coverage_frontier", "path_frontier_dispatch_cases",
        count(r"^        case 0x[0-9a-f]+ull: return path_entry_\d{3}_[0-9a-f]+\(vm\);", path_handlers_frontier),
        "Unvalidated path-specialized dispatcher cases keyed by entry/path hash.")
    add(rows, "coverage_frontier", "path_frontier_zero_validation_comments",
        count(r"validation: target=0\.0%, ip=0\.0%", path_handlers_frontier),
        "Frontier path functions explicitly marked with zero target/IP validation.")
    add(rows, "coverage_frontier", "path_frontier_slot_audit_rows",
        len(path_frontier_slot_audit_index),
        "Weak frontier path slot-expression audit rows.")
    add(rows, "coverage_frontier", "path_frontier_slot_audit_c_rows",
        count(r'^    \{ \d+u, 0x[0-9a-f]+ull, .*"not_promotable" \},$', path_frontier_slot_audit),
        "Weak frontier path slot-expression audit rows retained in C form.")
    add(rows, "coverage_frontier", "path_frontier_slot_audit_not_promotable_rows",
        sum(1 for row in path_frontier_slot_audit_index if row.get("verdict", "") == "not_promotable"),
        "Weak frontier path rows whose sampled slot expressions still cannot be promoted to hard CFG.")
    add(rows, "coverage_frontier", "path_frontier_slot_audit_direct_table_validated_rows",
        sum(int(row.get("direct_table_matches", "0") or "0") for row in path_frontier_slot_audit_index),
        "Total direct dispatch-table matches found while auditing weak frontier slot expressions.")
    add(rows, "coverage_frontier", "path_frontier_slot_audit_any_table_match_rows",
        sum(1 for row in path_frontier_slot_audit_index if int(row.get("direct_table_matches", "0") or "0") > 0),
        "Weak frontier path rows with at least one direct dispatch-table match.")
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
    add(rows, "c_shape", "program_full_live_table_evidence_sites", count(r"live table evidence @", program_full),
        "Per-live-row table-offset file/runtime evidence sites carried into the full program sketch.")
    add(rows, "c_shape", "program_full_live_table_evidence_comments", count(r"live table evidence: source=", program_full),
        "Per-live-row table-offset evidence comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_sampled_ret_patch_probe_sites", count(r"sampled ret-patch probe @", program_full),
        "Sampled native return-patch evidence sites carried into the full program sketch.")
    add(rows, "c_shape", "program_full_sampled_ret_patch_probe_comments", count(r"sampled ret-patch: source=", program_full),
        "Per-run sampled native return-patch comments carried into the full program sketch.")
    add(rows, "c_shape", "program_full_sampled_ret_patch_exit_calls", count(r"vm_native_ret_patch_tail\(vm, 0x", program_full),
        "Executable analysis-helper exits for sampled native return-patch synthetic tails in the full program sketch.")
    add(rows, "c_shape", "program_full_native_ret_patch_hidden_bridge_hooks", count(r"vm_native_ret_patch_hidden_bridge\(vm, 0x", program_full),
        "Optional full-program hooks from native return-patch exits into the hidden-control bridge artifact.")
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
    add(rows, "c_shape", "bundle_sampled_ret_patch_handler_functions",
        count(r"native return-patch thunk", bundle),
        "Native return-patch handler/operator functions inside the combined source bundle.")
    add(rows, "c_shape", "bundle_tier0_static_model_comments",
        count(r"tier0 static model: rank=", bundle),
        "Tier0 static-only RetDec model annotations inside the combined source bundle.")
    add(rows, "c_shape", "bundle_tier0_static_slot_recoveries",
        count(r"tier0 static slot recovered from the RetDec single-function model", bundle),
        "Executable tier0 static-only slot recoveries inside the combined source bundle.")
    add(rows, "c_shape", "bundle_tier1_static_model_comments",
        count(r"tier1 static model: rank=", bundle),
        "Tier1 static-only RetDec model annotations inside the combined source bundle.")
    add(rows, "c_shape", "bundle_tier1_static_slot_recoveries",
        count(r"tier1 static slot recovered from a clean RetDec dispatch-table tail", bundle),
        "Executable tier1 static-only slot recoveries inside the combined source bundle.")
    add(rows, "c_shape", "bundle_tier2_split_model_comments",
        count(r"tier2 split model: rank=", bundle),
        "Tier2 static-only split model annotations inside the combined source bundle.")
    add(rows, "c_shape", "bundle_tier2_static_slot_recoveries",
        count(r"tier2 static slot recovered from a split RetDec primary tail", bundle),
        "Executable tier2 static-only slot recoveries inside the combined source bundle.")
    add(rows, "c_shape", "bundle_tier3_shared_model_comments",
        count(r"tier3 shared model: rank=", bundle),
        "Tier3 static-only shared model annotations inside the combined source bundle.")
    add(rows, "c_shape", "bundle_tier3_static_slot_recoveries",
        count(r"tier3 static slot recovered from a shared RetDec primary tail", bundle),
        "Executable tier3 static-only slot recoveries inside the combined source bundle.")
    add(rows, "c_shape", "bundle_tier4_callret_model_comments",
        count(r"tier4 call/ret model: rank=", bundle),
        "Tier4 static-only call/ret model annotations inside the combined source bundle.")
    add(rows, "c_shape", "bundle_tier4_static_slot_recoveries",
        count(r"tier4 static slot recovered from a call/ret RetDec primary tail", bundle),
        "Executable tier4 static-only slot recoveries inside the combined source bundle.")
    add(rows, "c_shape", "bundle_tier5_large_model_comments",
        count(r"tier5 large model: rank=", bundle),
        "Tier5 large static-only model annotations inside the combined source bundle.")
    add(rows, "c_shape", "bundle_tier5_static_slot_recoveries",
        count(r"tier5 static slot recovered from a large RetDec primary tail", bundle),
        "Executable tier5 static-only slot recoveries inside the combined source bundle.")
    add(rows, "c_shape", "bundle_sampled_ret_patch_handler_evidence_comments",
        count(r"ret-patch evidence: rows=", bundle),
        "Handler-layer sampled ret-patch evidence summaries inside the combined source bundle.")
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
    add(rows, "c_shape", "bundle_live_table_evidence_sites", count(r"live table evidence @", bundle),
        "Per-live-row table-offset file/runtime evidence sites carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_live_table_evidence_comments", count(r"live table evidence: source=", bundle),
        "Per-live-row table-offset evidence comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_sampled_ret_patch_probe_sites", count(r"sampled ret-patch probe @", bundle),
        "Sampled native return-patch evidence sites carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_sampled_ret_patch_probe_comments", count(r"sampled ret-patch: source=", bundle),
        "Per-run sampled native return-patch comments carried into the combined source bundle.")
    add(rows, "c_shape", "bundle_sampled_ret_patch_exit_calls", count(r"vm_native_ret_patch_tail\(vm, 0x", bundle),
        "Executable analysis-helper exits for sampled native return-patch synthetic tails inside the combined source bundle.")
    add(rows, "c_shape", "bundle_native_ret_patch_hidden_bridge_hooks", count(r"vm_native_ret_patch_hidden_bridge\(vm, 0x", bundle),
        "Optional combined-bundle hooks from native return-patch exits into the hidden-control bridge artifact.")
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
    add(rows, "c_shape", "all_evidence_bundle_handler_functions",
        count(r"^static VMOpResult op_entry_\d{3}\(VMState \*vm\) \{", all_evidence_bundle),
        "All-entry handler/operator C functions present in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_program_blocks",
        count(r"^static void prog_bb_\d{4}\(VMState \*vm, uint64_t vm_ip\) \{", all_evidence_bundle),
        "Recovered VM bytecode block functions present in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_path_specialized_functions",
        count(r"^static eac_evidence_path_handlers_pseudocode__VMOpResult eac_evidence_path_handlers_pseudocode__path_entry_\d{3}_[0-9a-f]+\(EACEvidence_path_handlers_pseudocode__VMState \*vm\) \{", all_evidence_bundle),
        "Validated path-specialized handler functions retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_path_specialized_model_rows",
        count(r"^    \{ \d+, 0x[0-9a-f]+ull, \d+u, .*eac_evidence_path_handlers_pseudocode__path_entry_\d{3}_[0-9a-f]+ \},", all_evidence_bundle),
        "Validated path-specialized handler metadata rows retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_path_specialized_dispatch_cases",
        count(r"^        case 0x[0-9a-f]+ull: return eac_evidence_path_handlers_pseudocode__path_entry_\d{3}_[0-9a-f]+\(vm\);", all_evidence_bundle),
        "Validated path-specialized handler dispatcher cases retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_path_specialized_dispatchers",
        count(r"^static eac_evidence_path_handlers_pseudocode__VMOpResult eac_evidence_path_handlers_pseudocode__vm_call_path_handler\(uint16_t entry, uint64_t path_key_value, EACEvidence_path_handlers_pseudocode__VMState \*vm\) \{", all_evidence_bundle),
        "Validated path-specialized handler dispatcher functions retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_path_frontier_functions",
        count(r"^static eac_evidence_path_handlers_frontier_pseudocode__VMOpResult eac_evidence_path_handlers_frontier_pseudocode__path_entry_\d{3}_[0-9a-f]+\(EACEvidence_path_handlers_frontier_pseudocode__VMState \*vm\) \{", all_evidence_bundle),
        "Unvalidated path-specialized frontier functions retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_path_frontier_model_rows",
        count(r"^    \{ \d+, 0x[0-9a-f]+ull, \d+u, .*eac_evidence_path_handlers_frontier_pseudocode__path_entry_\d{3}_[0-9a-f]+ \},", all_evidence_bundle),
        "Unvalidated path-specialized frontier metadata rows retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_path_frontier_dispatch_cases",
        count(r"^        case 0x[0-9a-f]+ull: return eac_evidence_path_handlers_frontier_pseudocode__path_entry_\d{3}_[0-9a-f]+\(vm\);", all_evidence_bundle),
        "Unvalidated path-specialized frontier dispatcher cases retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_path_frontier_slot_audit_rows",
        count(r'^    \{ \d+u, 0x[0-9a-f]+ull, .*"not_promotable" \},$', all_evidence_bundle),
        "Weak frontier slot-expression audit rows retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_path_frontier_slot_audit_symbols",
        count(r"\beac_evidence_path_frontier_slot_audit__", all_evidence_bundle),
        "Prefixed path frontier slot-audit symbols retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_native_executable_coverage_section_rows",
        count(r'^    \{ "\.[A-Za-z0-9_.]+", 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, \d+ull, \d+ull, \d+ull, \d+u, \d+u, \d+u \},', all_evidence_bundle),
        "Native executable section coverage rows retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_native_executable_coverage_range_rows",
        count(r'^    \{ "\.[A-Za-z0-9_.]+", 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, \d+ull, "[^"]+", ', all_evidence_bundle),
        "Recovered native executable range rows retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_native_executable_coverage_gap_rows",
        count(r'^    \{ "\.[A-Za-z0-9_.]+", 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, \d+ull \},', all_evidence_bundle),
        "Uncovered native executable gap rows retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_native_executable_coverage_symbols",
        count(r"\beac_evidence_native_executable_coverage_audit__", all_evidence_bundle),
        "Prefixed native executable coverage audit symbols retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_native_function_inventory_stub_functions",
        count(r"^static uint64_t eac_evidence_native_function_inventory__native_stub_[A-Za-z0-9_]+\(void\) \{ return 0x[0-9a-f]+ull; \}$", all_evidence_bundle),
        "Weak native function skeleton stubs retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_native_function_inventory_metadata_rows",
        count(r'^    \{ "\.[A-Za-z0-9_.]+", 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, \d+u, \d+u, ', all_evidence_bundle),
        "Weak native function inventory metadata rows retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_native_function_inventory_symbols",
        count(r"\beac_evidence_native_function_inventory__", all_evidence_bundle),
        "Prefixed native function inventory symbols retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_native_retdec_gap_queue_rows",
        count(r'^    \{ \d+u, 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, \d+u, \d+u, \d+u, \d+u, ', all_evidence_bundle),
        "Native RetDec gap queue rows retained in the all-evidence single file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_native_retdec_gap_queue_symbols",
        count(r"\beac_evidence_native_retdec_gap_queue__", all_evidence_bundle),
        "Prefixed native RetDec gap queue symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch00_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch00__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 00 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch00_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch00__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 00 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch01_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch01__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 01 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch01_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch01__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 01 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch02_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch02__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 02 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch02_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch02__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 02 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch03_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch03__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 03 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch03_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch03__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 03 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch04_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch04__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 04 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch04_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch04__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 04 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch05_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch05__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 05 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch05_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch05__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 05 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch06_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch06__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 06 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch06_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch06__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 06 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch07_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch07__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 07 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch07_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch07__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 07 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch08_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch08__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 08 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch08_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch08__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 08 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch09_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch09__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 09 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch09_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch09__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 09 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch10_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch10__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 10 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch10_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch10__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 10 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch11_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch11__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 11 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch11_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch11__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 11 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch12_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch12__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 12 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch12_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch12__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 12 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch13_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch13__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 13 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch13_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch13__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 13 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch14_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch14__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 14 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch14_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch14__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 14 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch15_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch15__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 15 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch15_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch15__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 15 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch16_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch16__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 16 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch16_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch16__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 16 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch17_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch17__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 17 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch17_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch17__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 17 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch18_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch18__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 18 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch18_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch18__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 18 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch19_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch19__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 19 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch19_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch19__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 19 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch20_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch20__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 20 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch20_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch20__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 20 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch21_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch21__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 21 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch21_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch21__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 21 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch22_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch22__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 22 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch22_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch22__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 22 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch23_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch23__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 23 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch23_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch23__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 23 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch24_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch24__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 24 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch24_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch24__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 24 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch25_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch25__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 25 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch25_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch25__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 25 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch26_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch26__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 26 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch26_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch26__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 26 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch27_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch27__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 27 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch27_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch27__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 27 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch28_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch28__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 28 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch28_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch28__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 28 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch29_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch29__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 29 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch29_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch29__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 29 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch30_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch30__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 30 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch30_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch30__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 30 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch31_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch31__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 31 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch31_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch31__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 31 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch32_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch32__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 32 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch32_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch32__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 32 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch33_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch33__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 33 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch33_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch33__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 33 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch34_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch34__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 34 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch34_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch34__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 34 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch35_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch35__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 35 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch35_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch35__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 35 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch36_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch36__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 36 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch36_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch36__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 36 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch37_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch37__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 37 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch37_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch37__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 37 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch38_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch38__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 38 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch38_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch38__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 38 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch39_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch39__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 39 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch39_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch39__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 39 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch40_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch40__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 40 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch40_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch40__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 40 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch41_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch41__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 41 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch41_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch41__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 41 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch42_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch42__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 42 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch42_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch42__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 42 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch43_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch43__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 43 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch43_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch43__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 43 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch44_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch44__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 44 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch44_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch44__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 44 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch45_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch45__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 45 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch45_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch45__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 45 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch46_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch46__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 46 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch46_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch46__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 46 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch47_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch47__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 47 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch47_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch47__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 47 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch48_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch48__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 48 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch48_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch48__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 48 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch49_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch49__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 49 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch49_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch49__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 49 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch50_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch50__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 50 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch50_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch50__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 50 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch51_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch51__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 51 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch51_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch51__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 51 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch52_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch52__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 52 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch52_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch52__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 52 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch53_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch53__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 53 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch53_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch53__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 53 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch54_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch54__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 54 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch54_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch54__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 54 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch55_functions",
        count(r"^int64_t eac_evidence_native_gap_retdec_batch55__[A-Za-z_][A-Za-z0-9_]*\(.*\) \{", all_evidence_bundle),
        "RetDec native C function bodies from native gap batch 55 retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_native_gap_retdec_batch55_symbols",
        count(r"\beac_evidence_native_gap_retdec_batch55__", all_evidence_bundle),
        "Prefixed native gap RetDec batch 55 symbols retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_sidecar_sections",
        count(r"^/\* --- sidecar: ", all_evidence_bundle),
        "Renamed native RetDec/control sidecar files appended to the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_prefixed_retdec_functions",
        count(r"^int64_t eac_evidence_[A-Za-z0-9_]+__function_[0-9a-f]+\(.*\) \{", all_evidence_bundle),
        "RetDec native C functions carried in the all-evidence single file with per-sidecar symbol prefixes.")
    add(rows, "c_shape", "all_evidence_bundle_prefixed_symbols",
        count(r"\beac_evidence_[A-Za-z0-9_]+__", all_evidence_bundle),
        "Prefixed symbols used to keep overlapping native sidecar C in one translation unit.")
    add(rows, "coverage_frontier", "all_evidence_bundle_config_coverage_metric_rows",
        count(r'^    \{ "(?:config_frontier|static_audit\.)', all_evidence_bundle),
        "Config coverage audit metric rows retained in the all-evidence single C file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_config_coverage_frontier_rows",
        count(r'^    \{ \d+, 0x[0-9a-f]+ull, \d+ull, 0x[0-9a-f]+u, "(?:static_only_handler|target_only_handler|path_microcode_unknown_target|no_real_network_allowed_trace|synthetic_fill_only)",', all_evidence_bundle),
        "Config/path frontier rows retained in the all-evidence single C file.")
    add(rows, "coverage_frontier", "all_evidence_bundle_config_coverage_frontier_symbols",
        count(r"\beac_evidence_config_coverage_frontier__", all_evidence_bundle),
        "Prefixed config coverage frontier symbols retained in the all-evidence single C file.")
    all_evidence_binary_data_section_arrays = count(
        r"^static const uint8_t eac_evidence_binary_data_sections__vm_eac_section_\d+_",
        all_evidence_bundle,
    )
    all_evidence_binary_data_section_metadata_rows = count(
        r'^    \{ "\.[^"]+", \d+, \d+, 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, (?:eac_evidence_binary_data_sections__vm_eac_section_\d+_[A-Za-z0-9_]+|NULL) \},$',
        all_evidence_bundle,
    )
    all_evidence_binary_data_string_refs = count(
        r"^    \{ \d+, 0x[0-9a-f]+ull, 0x[0-9a-f]+ull, \d+, eac_evidence_binary_data_sections__vm_eac_section_\d+_[A-Za-z0-9_]+ \+ 0x[0-9a-f]+ull, \"",
        all_evidence_bundle,
    )
    add(rows, "data_surface", "all_evidence_bundle_binary_data_section_arrays",
        all_evidence_binary_data_section_arrays,
        "Exact binary data section arrays retained in the all-evidence single C file.")
    add(rows, "data_surface", "all_evidence_bundle_binary_data_section_metadata_rows",
        all_evidence_binary_data_section_metadata_rows,
        "All allocatable ELF section metadata rows retained in the all-evidence single C file.")
    add(rows, "data_surface", "all_evidence_bundle_binary_data_string_refs",
        all_evidence_binary_data_string_refs,
        "Full runtime string-reference rows retained in the all-evidence single C file.")
    add(rows, "data_surface", "all_evidence_bundle_binary_data_string_row_static_asserts",
        count(r"^_Static_assert\(sizeof\(eac_evidence_binary_data_sections__k_vm_binary_string_refs\)", all_evidence_bundle),
        "C11 static assertion retained for all-evidence runtime string-reference count.")
    add(rows, "data_surface", "all_evidence_bundle_binary_data_dispatch_table",
        count(r"\beac_evidence_binary_data_sections__vm_eac_dispatch_table_raw_offsets\[360\]", all_evidence_bundle),
        "Raw VM dispatch-table offset array retained in the all-evidence single C file.")
    add(rows, "data_surface", "all_evidence_bundle_binary_data_dispatch_table_raw_bytes",
        count(r"^static const uint8_t eac_evidence_binary_data_sections__vm_eac_dispatch_table_raw_bytes\[2880\]", all_evidence_bundle),
        "Raw VM dispatch-table byte array retained in the all-evidence single C file.")
    add(rows, "data_surface", "all_evidence_bundle_binary_data_surface_match",
        "yes" if (
            all_evidence_binary_data_section_arrays == binary_data_section_array_c_rows and
            all_evidence_binary_data_section_metadata_rows == binary_data_section_metadata_c_rows and
            all_evidence_binary_data_string_refs == binary_data_string_ref_c_rows and
            count(r"\beac_evidence_binary_data_sections__vm_eac_dispatch_table_raw_offsets\[360\]", all_evidence_bundle) == 1 and
            count(r"^static const uint8_t eac_evidence_binary_data_sections__vm_eac_dispatch_table_raw_bytes\[2880\]", all_evidence_bundle) == 1
        ) else "no",
        "Whether the all-evidence C file carries the same section arrays, section metadata, full strings, and raw dispatch-table bytes/offsets as the binary data carrier.")
    add(rows, "c_shape", "all_evidence_bundle_tier0_static_slot_recoveries",
        count(r"tier0 static slot recovered from the RetDec single-function model", all_evidence_bundle),
        "Executable tier0 static-only slot recoveries retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_tier1_static_slot_recoveries",
        count(r"tier1 static slot recovered from a clean RetDec dispatch-table tail", all_evidence_bundle),
        "Executable tier1 static-only slot recoveries retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_tier2_static_slot_recoveries",
        count(r"tier2 static slot recovered from a split RetDec primary tail", all_evidence_bundle),
        "Executable tier2 static-only slot recoveries retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_tier3_static_slot_recoveries",
        count(r"tier3 static slot recovered from a shared RetDec primary tail", all_evidence_bundle),
        "Executable tier3 static-only slot recoveries retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_tier4_static_slot_recoveries",
        count(r"tier4 static slot recovered from a call/ret RetDec primary tail", all_evidence_bundle),
        "Executable tier4 static-only slot recoveries retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_tier5_large_model_comments",
        count(r"tier5 large model: rank=", all_evidence_bundle),
        "Tier5 large static-only model annotations retained in the all-evidence single file.")
    add(rows, "c_shape", "all_evidence_bundle_tier5_static_slot_recoveries",
        count(r"tier5 static slot recovered from a large RetDec primary tail", all_evidence_bundle),
        "Executable tier5 static-only slot recoveries retained in the all-evidence single file.")


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


def synthetic_gap_unresolved_family_metrics(rows):
    family_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_unresolved_family_audit.tsv")
    family_ids = Counter(row.get("family_id", "") for row in family_rows)
    source_mix = Counter(row.get("source_entry", "") for row in family_rows)
    chain_classes = Counter(row.get("observed_chain_bridge_class", "") for row in family_rows)
    table_diagnoses = Counter(row.get("table_diagnosis", "") for row in family_rows)
    next_targets = Counter(row.get("next_reconstruction_target", "") for row in family_rows)
    family_members = {}
    for row in family_rows:
        family_id = row.get("family_id", "")
        if not family_id:
            continue
        family_members.setdefault(family_id, []).append(row.get("synthetic_start_vm_ip", ""))
    multi_member_families = []
    for family_id, members in sorted(
        family_members.items(),
        key=lambda item: int(item[0].rsplit("_", 1)[1]) if "_" in item[0] else 0,
    ):
        if len(members) > 1:
            multi_member_families.append(f"{family_id}:{len(members)}[{','.join(members)}]")

    add(rows, "gap_unresolved_family", "synthetic_gap_unresolved_family_rows", len(family_rows),
        "Default-unresolved synthetic successor calls clustered by transfer/table/sample/observed-chain evidence family.")
    add(rows, "gap_unresolved_family", "synthetic_gap_unresolved_family_count", len(family_ids),
        "Distinct unresolved evidence families.")
    add(rows, "gap_unresolved_family", "synthetic_gap_unresolved_family_source_mix",
        ",".join(f"{key}:{value}" for key, value in source_mix.most_common()) or "-",
        "Source handler distribution across unresolved evidence families.")
    add(rows, "gap_unresolved_family", "synthetic_gap_unresolved_family_chain_class_mix",
        ",".join(f"{key}:{value}" for key, value in chain_classes.most_common()) or "-",
        "Observed chain terminal classes for unresolved family rows.")
    add(rows, "gap_unresolved_family", "synthetic_gap_unresolved_family_table_diagnosis_mix",
        ",".join(f"{key}:{value}" for key, value in table_diagnoses.most_common()) or "-",
        "Table-memory rejection classes represented by unresolved families.")
    add(rows, "gap_unresolved_family", "synthetic_gap_unresolved_family_next_target_mix",
        ",".join(f"{key}:{value}" for key, value in next_targets.most_common()) or "-",
        "Recommended next reconstruction targets for unresolved families.")
    add(rows, "gap_unresolved_family", "synthetic_gap_unresolved_family_multi_member_families",
        ";".join(multi_member_families) or "-",
        "Unresolved families that cover more than one start VM IP.")


def synthetic_gap_source299_context_probe_metrics(rows):
    probe_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_source299_context_probe.tsv")
    starts = Counter(row.get("synthetic_start_vm_ip", "") for row in probe_rows)
    families = Counter(row.get("family_id", "") for row in probe_rows)
    paths = Counter(row.get("resolved_path_hash", "") for row in probe_rows)
    slot_classes = Counter(
        f"{row.get('slot_region', '')}/{row.get('file_qword_class', '')}"
        for row in probe_rows
    )
    next_relations = Counter(row.get("next_relation", "") for row in probe_rows)
    interpretations = Counter(row.get("interpretation", "") for row in probe_rows)
    b6c57 = Counter(row.get("branch_b6c57", "") for row in probe_rows)
    rejected_slots = [
        f"{row.get('synthetic_start_vm_ip')}:{row.get('resolved_slot')}"
        for row in probe_rows
        if row.get("file_qword_class", "") != "dispatch_target_pointer"
    ]

    add(rows, "gap_source299_context", "synthetic_gap_source299_context_probe_rows", len(probe_rows),
        "Live VMTAIL source-299 residual snapshots with resolved branch path and concrete slot/table class.")
    add(rows, "gap_source299_context", "synthetic_gap_source299_context_probe_starts", len(starts),
        "Distinct source-299 residual VM starts represented in the context probe.")
    add(rows, "gap_source299_context", "synthetic_gap_source299_context_probe_family_mix",
        ",".join(f"{key}:{value}" for key, value in families.most_common()) or "-",
        "Unresolved-family coverage in the source-299 context probe.")
    add(rows, "gap_source299_context", "synthetic_gap_source299_context_probe_path_mix",
        ",".join(f"{key}:{value}" for key, value in paths.most_common()) or "-",
        "Resolved source-299 branch path hashes after live r8/flag evidence is applied.")
    add(rows, "gap_source299_context", "synthetic_gap_source299_context_probe_b6c57_mix",
        ",".join(f"{key}:{value}" for key, value in b6c57.most_common()) or "-",
        "Live resolution of the former unknown cmp r8b,0 branch at native 0xb6c57.")
    add(rows, "gap_source299_context", "synthetic_gap_source299_context_probe_slot_file_mix",
        ",".join(f"{key}:{value}" for key, value in slot_classes.most_common()) or "-",
        "Concrete slot/table-file class after the source-299 branch path is resolved.")
    add(rows, "gap_source299_context", "synthetic_gap_source299_context_probe_next_relation_mix",
        ",".join(f"{key}:{value}" for key, value in next_relations.most_common()) or "-",
        "Relation between the next raw focused event and the observed-chain family row.")
    add(rows, "gap_source299_context", "synthetic_gap_source299_context_probe_interpretation_mix",
        ",".join(f"{key}:{value}" for key, value in interpretations.most_common()) or "-",
        "Whether the resolved branch/table evidence supports hard CFG or remains sequence-only.")
    add(rows, "gap_source299_context", "synthetic_gap_source299_context_probe_rejected_slots",
        ",".join(rejected_slots) or "-",
        "Concrete source-299 slot offsets that still reject as dispatch-table pointers.")


def synthetic_gap_source299_ret_patch_probe_metrics(rows):
    probe_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_source299_ret_patch_probe.tsv")
    starts = Counter(row.get("synthetic_start_vm_ip", "") for row in probe_rows)
    families = Counter(row.get("family_id", "") for row in probe_rows)
    seed_mix = Counter(row.get("seed_quality", "") for row in probe_rows)
    relation_mix = Counter(row.get("ret_patch_relation", "") for row in probe_rows)
    interpretation_mix = Counter(row.get("interpretation", "") for row in probe_rows)
    section_mix = Counter(row.get("patched_ret_section", "") for row in probe_rows)
    base_source_mix = Counter(
        "mapped_frame_qword" if row.get("ret_patch_base_source", "").startswith("postcall_map_") else "inferred_image_base"
        for row in probe_rows
    )
    patched_targets = sorted({
        f"{row.get('synthetic_start_vm_ip')}:{row.get('patched_ret_eac_off')}"
        for row in probe_rows
        if row.get("patched_ret_eac_off", "")
    }, key=lambda value: (int(value.split(":", 1)[0] or "0", 16), value))
    direct_base_rows = [
        row.get("synthetic_start_vm_ip", "")
        for row in probe_rows
        if row.get("ret_patch_base_source", "").startswith("postcall_map_")
    ]

    add(rows, "gap_source299_ret_patch", "synthetic_gap_source299_ret_patch_probe_rows", len(probe_rows),
        "Live source-299 residual events decoded as native return-patch control transfers.")
    add(rows, "gap_source299_ret_patch", "synthetic_gap_source299_ret_patch_probe_starts", len(starts),
        "Distinct source-299 residual VM starts represented by the return-patch probe.")
    add(rows, "gap_source299_ret_patch", "synthetic_gap_source299_ret_patch_probe_family_mix",
        ",".join(f"{key}:{value}" for key, value in families.most_common()) or "-",
        "Unresolved-family coverage in the source-299 return-patch probe.")
    add(rows, "gap_source299_ret_patch", "synthetic_gap_source299_ret_patch_probe_seed_mix",
        ",".join(f"{key}:{value}" for key, value in seed_mix.most_common()) or "-",
        "Snapshot strength for source-299 return-patch rows.")
    add(rows, "gap_source299_ret_patch", "synthetic_gap_source299_ret_patch_probe_base_source_mix",
        ",".join(f"{key}:{value}" for key, value in base_source_mix.most_common()) or "-",
        "Whether the ret-patch base is directly read from a postcall map or inferred from event image-base crosschecks.")
    add(rows, "gap_source299_ret_patch", "synthetic_gap_source299_ret_patch_probe_section_mix",
        ",".join(f"{key}:{value}" for key, value in section_mix.most_common()) or "-",
        "ELF sections reached by decoded native return-patch targets.")
    add(rows, "gap_source299_ret_patch", "synthetic_gap_source299_ret_patch_probe_relation_mix",
        ",".join(f"{key}:{value}" for key, value in relation_mix.most_common()) or "-",
        "Relation between decoded native return-patch targets and VM-IP chain targets.")
    add(rows, "gap_source299_ret_patch", "synthetic_gap_source299_ret_patch_probe_interpretation_mix",
        ",".join(f"{key}:{value}" for key, value in interpretation_mix.most_common()) or "-",
        "Interpretation of source-299 as hidden native return-patch control rather than normal table dispatch.")
    add(rows, "gap_source299_ret_patch", "synthetic_gap_source299_ret_patch_probe_patched_targets",
        ",".join(patched_targets) or "-",
        "Unique source-299 residual starts and decoded native return-patch file offsets.")
    add(rows, "gap_source299_ret_patch", "synthetic_gap_source299_ret_patch_probe_direct_base_starts",
        ",".join(direct_base_rows) or "-",
        "Rows where frame+0xbb was directly read from the postcall mapped image.")


def synthetic_gap_sampled_ret_patch_probe_metrics(rows):
    probe_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_sampled_ret_patch_probe.tsv")
    sources = Counter(row.get("source_entry", "") for row in probe_rows)
    starts = Counter(row.get("synthetic_start_vm_ip", "") for row in probe_rows)
    kind_mix = Counter(row.get("ret_patch_kind", "") or "single_stack_return" for row in probe_rows)
    families = Counter(row.get("family_id", "") for row in probe_rows)
    seed_mix = Counter(row.get("seed_quality", "") for row in probe_rows)
    relation_mix = Counter(row.get("ret_patch_relation", "") for row in probe_rows)
    relation2_mix = Counter(row.get("ret_patch2_relation", "") for row in probe_rows if row.get("ret_patch2_relation", ""))
    interpretation_mix = Counter(row.get("interpretation", "") for row in probe_rows)
    section_mix = Counter(row.get("patched_ret_section", "") for row in probe_rows)
    section2_mix = Counter(row.get("patched_ret2_section", "") for row in probe_rows if row.get("patched_ret2_section", ""))
    base_source_mix = Counter(
        "mapped_frame_qword" if row.get("ret_patch_base_source", "").startswith("postcall_map_") else "inferred_image_base"
        for row in probe_rows
    )
    patched_targets = sorted({
        (
            f"entry_{row.get('source_entry')}:{row.get('synthetic_start_vm_ip')}:"
            f"{row.get('patched_ret_eac_off')}"
            f"{'->' + row.get('patched_ret2_eac_off') if row.get('patched_ret2_eac_off', '') else ''}"
        )
        for row in probe_rows
        if row.get("patched_ret_eac_off", "")
    }, key=lambda value: (
        int(value.split(":", 2)[0].replace("entry_", "") or "0", 10),
        int(value.split(":", 2)[1] or "0", 16),
        value,
    ))
    direct_base_rows = [
        f"entry_{row.get('source_entry')}:{row.get('synthetic_start_vm_ip')}"
        for row in probe_rows
        if row.get("ret_patch_base_source", "").startswith("postcall_map_")
    ]

    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_rows", len(probe_rows),
        "Live sampled residual events decoded as native return-patch control transfers.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_sources", len(sources),
        "Distinct source handlers represented by the sampled return-patch probe.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_source_mix",
        ",".join(f"entry_{key}:{value}" for key, value in sources.most_common()) or "-",
        "Source-handler coverage in the sampled return-patch probe.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_kind_mix",
        ",".join(f"{key}:{value}" for key, value in kind_mix.most_common()) or "-",
        "Single-stack versus double-stack native return-patch rows.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_starts", len(starts),
        "Distinct residual VM starts represented by the sampled return-patch probe.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_family_mix",
        ",".join(f"{key}:{value}" for key, value in families.most_common()) or "-",
        "Unresolved-family coverage in the sampled return-patch probe.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_seed_mix",
        ",".join(f"{key}:{value}" for key, value in seed_mix.most_common()) or "-",
        "Snapshot strength for sampled return-patch rows.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_base_source_mix",
        ",".join(f"{key}:{value}" for key, value in base_source_mix.most_common()) or "-",
        "Whether the ret-patch base is directly read from a postcall map or inferred from event image-base crosschecks.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_section_mix",
        ",".join(f"{key}:{value}" for key, value in section_mix.most_common()) or "-",
        "ELF sections reached by decoded native return-patch targets.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_section2_mix",
        ",".join(f"{key}:{value}" for key, value in section2_mix.most_common()) or "-",
        "ELF sections reached by second stacked native return-patch targets.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_relation_mix",
        ",".join(f"{key}:{value}" for key, value in relation_mix.most_common()) or "-",
        "Relation between decoded native return-patch targets and VM-IP chain targets.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_relation2_mix",
        ",".join(f"{key}:{value}" for key, value in relation2_mix.most_common()) or "-",
        "Relation between second stacked return-patch targets and VM-IP chain targets.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_interpretation_mix",
        ",".join(f"{key}:{value}" for key, value in interpretation_mix.most_common()) or "-",
        "Interpretation of sampled return-patch control rather than normal table dispatch.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_patched_targets",
        ",".join(patched_targets) or "-",
        "Unique sampled residual starts and decoded native return-patch file offsets.")
    add(rows, "gap_sampled_ret_patch", "synthetic_gap_sampled_ret_patch_probe_direct_base_starts",
        ",".join(direct_base_rows) or "-",
        "Rows where frame+0xbb was directly read from the postcall mapped image.")


def synthetic_gap_ret_patch_native_target_atlas_metrics(rows):
    atlas_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_ret_patch_native_target_atlas.tsv")
    sources = Counter(row.get("source_entry", "") for row in atlas_rows)
    slots = Counter(row.get("ret_slot", "") for row in atlas_rows)
    ret_seen = Counter(row.get("ret_seen", "") for row in atlas_rows)
    section_mix = Counter(row.get("patched_ret_section", "") for row in atlas_rows)
    kind_mix = Counter(row.get("ret_patch_kind", "") for row in atlas_rows)
    jump_rows = [row for row in atlas_rows if row.get("jump_targets", "") not in ("", "-")]
    call_rows = [row for row in atlas_rows if row.get("call_targets", "") not in ("", "-")]

    add(rows, "gap_ret_patch_native_atlas", "synthetic_gap_ret_patch_native_target_atlas_rows", len(atlas_rows),
        "Unique native .text return-patch targets with disassembly windows.")
    add(rows, "gap_ret_patch_native_atlas", "synthetic_gap_ret_patch_native_target_atlas_source_mix",
        ",".join(f"entry_{key}:{value}" for key, value in sources.most_common()) or "-",
        "Source-handler mix for native return-patch target windows.")
    add(rows, "gap_ret_patch_native_atlas", "synthetic_gap_ret_patch_native_target_atlas_slot_mix",
        ",".join(f"{key}:{value}" for key, value in slots.most_common()) or "-",
        "First versus second stacked return-patch target windows.")
    add(rows, "gap_ret_patch_native_atlas", "synthetic_gap_ret_patch_native_target_atlas_kind_mix",
        ",".join(f"{key}:{value}" for key, value in kind_mix.most_common()) or "-",
        "Single-stack versus double-stack native return-patch target windows.")
    add(rows, "gap_ret_patch_native_atlas", "synthetic_gap_ret_patch_native_target_atlas_section_mix",
        ",".join(f"{key}:{value}" for key, value in section_mix.most_common()) or "-",
        "ELF sections reached by native return-patch target windows.")
    add(rows, "gap_ret_patch_native_atlas", "synthetic_gap_ret_patch_native_target_atlas_ret_seen_mix",
        ",".join(f"{key}:{value}" for key, value in ret_seen.most_common()) or "-",
        "Whether the bounded native target disassembly window reaches a native ret instruction.")
    add(rows, "gap_ret_patch_native_atlas", "synthetic_gap_ret_patch_native_target_atlas_rows_with_calls", len(call_rows),
        "Native return-patch target windows containing a direct call in the bounded window.")
    add(rows, "gap_ret_patch_native_atlas", "synthetic_gap_ret_patch_native_target_atlas_rows_with_jumps", len(jump_rows),
        "Native return-patch target windows containing a direct jump/conditional branch in the bounded window.")


def synthetic_gap_live_snapshot_transfer_probe_metrics(rows):
    probe_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_live_snapshot_transfer_probe.tsv")
    live_rows = [row for row in probe_rows if row.get("row_kind", "") == "live_event"]
    starts = Counter(row.get("synthetic_start_vm_ip", "") for row in probe_rows)
    live_starts = Counter(row.get("synthetic_start_vm_ip", "") for row in live_rows)
    source_mix = Counter(row.get("source_entry", "") for row in probe_rows)
    seed_mix = Counter(row.get("seed_quality", "") for row in live_rows)
    status_mix = Counter(row.get("live_status", "") for row in live_rows)
    table_diagnosis_mix = Counter(row.get("live_table_diagnosis", "") for row in live_rows)
    table_offset_mix = Counter(row.get("live_table_offset", "") for row in live_rows)
    branch_mix = Counter(row.get("branch_resolution", "") for row in probe_rows)
    next_relation_mix = Counter(row.get("next_relation", "") for row in live_rows)
    interpretation_mix = Counter(row.get("interpretation", "") for row in probe_rows)
    path_shift_rows = sorted({
        f"{row.get('synthetic_start_vm_ip')}:{row.get('family_transfer_path_hash')}->{row.get('live_path_hash')}"
        for row in live_rows
        if row.get("family_transfer_path_hash", "") and row.get("live_path_hash", "")
        and row.get("family_transfer_path_hash", "") != row.get("live_path_hash", "")
    }, key=lambda value: int(value.split(":", 1)[0] or "0", 16))
    full_gpr_starts = sorted({
        row.get("synthetic_start_vm_ip", "")
        for row in live_rows
        if row.get("seed_quality", "") == "full_gpr_snapshot"
    }, key=lambda value: int(value or "0", 16))
    frame_only_starts = sorted({
        row.get("synthetic_start_vm_ip", "")
        for row in live_rows
        if row.get("seed_quality", "") == "frame_only_snapshot"
    }, key=lambda value: int(value or "0", 16))

    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_rows", len(probe_rows),
        "Unresolved synthetic-gap starts replayed from selected live VMTAIL snapshots, including alternate fakenet/config rows.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_live_rows", len(live_rows),
        "Rows with matching live VMTAIL events in the selected runs.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_starts", len(starts),
        "Distinct unresolved starts represented by the live snapshot transfer probe.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_live_starts", len(live_starts),
        "Distinct unresolved starts with at least one matching live event.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_source_mix",
        ",".join(f"{key}:{value}" for key, value in source_mix.most_common()) or "-",
        "Source-handler distribution across live snapshot transfer rows.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_seed_mix",
        ",".join(f"{key}:{value}" for key, value in seed_mix.most_common()) or "-",
        "Snapshot strength: full GPR/register snapshots versus frame-only alternate-config rows.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_status_mix",
        ",".join(f"{key}:{value}" for key, value in status_mix.most_common()) or "-",
        "Transfer interpreter result after applying available live snapshot state.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_table_diagnosis_mix",
        ",".join(f"{key}:{value}" for key, value in table_diagnosis_mix.most_common()) or "-",
        "Concrete final table-read diagnosis for each live snapshot replay.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_table_offset_mix",
        ",".join(f"{key}:{value}" for key, value in table_offset_mix.most_common()) or "-",
        "Concrete final table offsets reached by live snapshot replay.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_branch_resolution_mix",
        ",".join(f"{key}:{value}" for key, value in branch_mix.most_common()) or "-",
        "Whether live snapshots remove formerly unknown native branch predicates.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_next_relation_mix",
        ",".join(f"{key}:{value}" for key, value in next_relation_mix.most_common()) or "-",
        "Relation between the next raw event and the unresolved-family observed chain.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_interpretation_mix",
        ",".join(f"{key}:{value}" for key, value in interpretation_mix.most_common()) or "-",
        "Whether live transfer evidence supports hard CFG or remains sequence-only/table-rejected.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_full_gpr_starts",
        ",".join(full_gpr_starts) or "-",
        "Unresolved starts covered by at least one full GPR live snapshot.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_frame_only_starts",
        ",".join(frame_only_starts) or "-",
        "Unresolved starts also observed in alternate/config rows without GPR snapshots.")
    add(rows, "gap_live_snapshot_transfer", "synthetic_gap_live_snapshot_transfer_probe_path_shift_rows",
        ",".join(path_shift_rows) or "-",
        "Rows where the live branch path differs from the zero-seed unresolved-family transfer path.")


def synthetic_gap_live_table_evidence_metrics(rows):
    evidence_rows = read_tsv(TRACE_DIR / "vm_synthetic_gap_live_table_evidence.tsv")
    starts = Counter(row.get("synthetic_start_vm_ip", "") for row in evidence_rows)
    evidence_mix = Counter(row.get("evidence_class", "") for row in evidence_rows)
    seed_mix = Counter(row.get("seed_quality", "") for row in evidence_rows)
    region_mix = Counter(row.get("region", "") for row in evidence_rows)
    file_qword_mix = Counter(row.get("file_qword_class", "") for row in evidence_rows)
    runtime_qword_mix = Counter(row.get("runtime_qword_class", "") for row in evidence_rows)
    runtime_match_mix = Counter(row.get("runtime_matches_file", "") for row in evidence_rows)
    dispatch_decodes = [
        row.get("synthetic_start_vm_ip", "")
        for row in evidence_rows
        if row.get("file_qword_dispatch_entry", "") or row.get("runtime_qword_dispatch_entry", "")
    ]
    weak_rows = [
        row.get("synthetic_start_vm_ip", "")
        for row in evidence_rows
        if row.get("seed_quality", "") == "frame_only_snapshot"
    ]

    add(rows, "gap_live_table_evidence", "synthetic_gap_live_table_evidence_rows", len(evidence_rows),
        "Per-live-row file/runtime evidence for concrete table offsets reached by unresolved live-snapshot replay.")
    add(rows, "gap_live_table_evidence", "synthetic_gap_live_table_evidence_starts", len(starts),
        "Distinct unresolved starts represented by the live table evidence audit.")
    add(rows, "gap_live_table_evidence", "synthetic_gap_live_table_evidence_class_mix",
        ",".join(f"{key}:{value}" for key, value in evidence_mix.most_common()) or "-",
        "Final evidence class for whether a rejected table offset can explain a direct dispatch edge.")
    add(rows, "gap_live_table_evidence", "synthetic_gap_live_table_evidence_seed_mix",
        ",".join(f"{key}:{value}" for key, value in seed_mix.most_common()) or "-",
        "Snapshot strength preserved by the live table evidence audit.")
    add(rows, "gap_live_table_evidence", "synthetic_gap_live_table_evidence_region_mix",
        ",".join(f"{key}:{value}" for key, value in region_mix.most_common()) or "-",
        "Where the concrete table offsets land relative to the dispatch table.")
    add(rows, "gap_live_table_evidence", "synthetic_gap_live_table_evidence_file_qword_mix",
        ",".join(f"{key}:{value}" for key, value in file_qword_mix.most_common()) or "-",
        "File qword classification at each concrete table-derived file offset.")
    add(rows, "gap_live_table_evidence", "synthetic_gap_live_table_evidence_runtime_qword_mix",
        ",".join(f"{key}:{value}" for key, value in runtime_qword_mix.most_common()) or "-",
        "Runtime qword classification at each concrete table-derived mapped offset.")
    add(rows, "gap_live_table_evidence", "synthetic_gap_live_table_evidence_runtime_match_mix",
        ",".join(f"{key}:{value}" for key, value in runtime_match_mix.most_common()) or "-",
        "Whether runtime mapped bytes match eac.elf at the rejected offsets.")
    add(rows, "gap_live_table_evidence", "synthetic_gap_live_table_evidence_dispatch_decode_starts",
        ",".join(dispatch_decodes) or "-",
        "Live table evidence rows where file/runtime bytes decode as dispatch-table targets.")
    add(rows, "gap_live_table_evidence", "synthetic_gap_live_table_evidence_frame_only_starts",
        ",".join(weak_rows) or "-",
        "Frame-only alternate/config evidence rows kept separate from full-GPR rows.")


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
        "Regenerates and warning-checks the generated C-like reconstruction artifacts with C11 -fsyntax-only.")
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
    block_source = read_text("vm_bytecode_blocks_fast.c")
    block_binary = Path("vm_bytecode_blocks_fast")
    followups_source = read_text("vm_native_ret_patch_followups_dump.c")
    followups_binary = Path("vm_native_ret_patch_followups_dump")
    followup_retdec_source = read_text("vm_native_ret_patch_followup_retdec_dump.c")
    followup_retdec_binary = Path("vm_native_ret_patch_followup_retdec_dump")
    obfuscated_islands_source = read_text("vm_native_obfuscated_islands_dump.c")
    obfuscated_islands_binary = Path("vm_native_obfuscated_islands_dump")
    obfuscated_second_stage_source = read_text("vm_native_obfuscated_second_stage_dump.c")
    obfuscated_second_stage_binary = Path("vm_native_obfuscated_second_stage_dump")
    obfuscated_second_stage_dynamic_source = read_text("vm_native_obfuscated_second_stage_dynamic_dump.c")
    obfuscated_second_stage_dynamic_binary = Path("vm_native_obfuscated_second_stage_dynamic_dump")
    obfuscated_second_stage_slot_proof_source = read_text("vm_native_obfuscated_second_stage_slot_proof_dump.c")
    obfuscated_second_stage_slot_proof_binary = Path("vm_native_obfuscated_second_stage_slot_proof_dump")
    obfuscated_second_stage_stack_source_source = read_text("vm_native_obfuscated_second_stage_stack_source_dump.c")
    obfuscated_second_stage_stack_source_binary = Path("vm_native_obfuscated_second_stage_stack_source_dump")
    obfuscated_second_stage_rbx_source = read_text("vm_native_obfuscated_second_stage_rbx_provenance_dump.c")
    obfuscated_second_stage_rbx_binary = Path("vm_native_obfuscated_second_stage_rbx_provenance_dump")
    obfuscated_second_stage_model_source = read_text("vm_native_obfuscated_second_stage_model_dump.c")
    obfuscated_second_stage_model_binary = Path("vm_native_obfuscated_second_stage_model_dump")
    obfuscated_control_model_source = read_text("vm_native_obfuscated_control_model_dump.c")
    obfuscated_control_model_binary = Path("vm_native_obfuscated_control_model_dump")
    ret_patch_hidden_bridge_source = read_text("vm_native_ret_patch_hidden_bridge_dump.c")
    ret_patch_hidden_bridge_binary = Path("vm_native_ret_patch_hidden_bridge_dump")
    handler_environment_coverage_source = read_text("vm_native_handler_environment_coverage_dump.c")
    handler_environment_coverage_binary = Path("vm_native_handler_environment_coverage_dump")
    config_coverage_frontier_source = read_text("vm_config_coverage_frontier_dump.c")
    config_coverage_frontier_binary = Path("vm_config_coverage_frontier_dump")
    binary_data_sections_source = read_text("vm_binary_data_sections_dump.c")
    binary_data_sections_binary = Path("vm_binary_data_sections_dump")
    static_only_handler_queue_source = read_text("vm_static_only_handler_queue_dump.c")
    static_only_handler_queue_binary = Path("vm_static_only_handler_queue_dump")
    static_only_tier0_models_source = read_text("vm_static_only_tier0_models_dump.c")
    static_only_tier0_models_binary = Path("vm_static_only_tier0_models_dump")
    static_only_tier1_models_source = read_text("vm_static_only_tier1_models_dump.c")
    static_only_tier1_models_binary = Path("vm_static_only_tier1_models_dump")
    static_only_tier2_split_source = read_text("vm_static_only_tier2_split_dump.c")
    static_only_tier2_split_binary = Path("vm_static_only_tier2_split_dump")
    static_only_tier3_shared_source = read_text("vm_static_only_tier3_shared_dump.c")
    static_only_tier3_shared_binary = Path("vm_static_only_tier3_shared_dump")
    static_only_tier4_callret_source = read_text("vm_static_only_tier4_callret_dump.c")
    static_only_tier4_callret_binary = Path("vm_static_only_tier4_callret_dump")
    static_only_tier5_large_source = read_text("vm_static_only_tier5_large_dump.c")
    static_only_tier5_large_binary = Path("vm_static_only_tier5_large_dump")
    add(rows, "native_acceleration", "instruction_unique_fast_source_lines", line_count(unique_source),
        "Native exact-instruction reducer source size.")
    add(rows, "native_acceleration", "instruction_unique_fast_binary_bytes", file_size(unique_binary),
        "Current compiled native exact-instruction reducer size.")
    add(rows, "native_acceleration", "instruction_unique_uses_native_reducer",
        "yes" if (
            "./vm_instruction_unique_fast $(PRIMARY_TRACE)" in makefile
            or "./vm_instruction_unique_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv" in makefile
        ) else "no",
        "Whether the instruction-unique Make target uses the native reducer.")
    add(rows, "native_acceleration", "instruction_unique_fast_check", "make instruction-unique-fast-check",
        "Byte-for-byte parity gate against vm_bytecode_recover.py --instructions.")
    add(rows, "native_acceleration", "bytecode_segments_fast_source_lines", line_count(segment_source),
        "Native bytecode segment reducer source size.")
    add(rows, "native_acceleration", "bytecode_segments_fast_binary_bytes", file_size(segment_binary),
        "Current compiled native bytecode segment reducer size.")
    add(rows, "native_acceleration", "bytecode_segments_sampled_uses_native_reducer",
        "yes" if (
            "./vm_bytecode_segments_fast $(PRIMARY_TRACE) --include-sampled" in makefile
            or "./vm_bytecode_segments_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv --include-sampled" in makefile
        ) else "no",
        "Whether sampled bytecode segment recovery uses the native reducer.")
    add(rows, "native_acceleration", "bytecode_segments_fast_check", "make bytecode-segments-fast-check",
        "Byte-for-byte parity gate against vm_bytecode_recover.py raw exact, raw sampled, and final augmented sampled segment modes.")
    add(rows, "native_acceleration", "bytecode_blocks_fast_source_lines", line_count(block_source),
        "Native bytecode block reducer source size.")
    add(rows, "native_acceleration", "bytecode_blocks_fast_binary_bytes", file_size(block_binary),
        "Current compiled native bytecode block reducer size.")
    add(rows, "native_acceleration", "bytecode_blocks_sampled_uses_native_reducer",
        "yes" if (
            "./vm_bytecode_blocks_fast $(PRIMARY_TRACE) --include-sampled" in makefile
            or "./vm_bytecode_blocks_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv --include-sampled" in makefile
        ) else "no",
        "Whether sampled bytecode block recovery uses the native reducer.")
    add(rows, "native_acceleration", "bytecode_blocks_fast_check", "make bytecode-blocks-fast-check",
        "Byte-for-byte parity gate against vm_bytecode_blocks.py raw exact, raw sampled, and final augmented sampled block modes.")
    add(rows, "native_acceleration", "primary_trace_file_backed_make_target",
        "yes" if "$(PRIMARY_TRACE):" in makefile and "instruction-trace-refresh:" in makefile else "no",
        "Primary instruction trace is a file-backed dependency; force refresh remains explicit.")
    add(rows, "native_acceleration", "primary_trace_refresh_target", "make instruction-trace-refresh",
        "Explicit command to rebuild the primary raw instruction trace from run.stderr.")
    add(rows, "native_acceleration", "pseudocode_syntax_check_uses_file_targets",
        "yes" if "pseudocode-syntax-check: $(PSEUDOCODE_TOP_C)" in makefile else "no",
        "Whether the C syntax gate depends on concrete generated files instead of phony pseudocode aggregates.")
    add(rows, "native_acceleration", "pseudocode_object_link_checks_use_source_file_target",
        "yes" if "pseudocode-object-check: $(SOURCE_BUNDLE_C)" in makefile and "pseudocode-link-check: $(SOURCE_BUNDLE_C)" in makefile else "no",
        "Whether object/link smoke checks avoid phony source-bundle regeneration when the bundle is unchanged.")
    add(rows, "native_acceleration", "all_evidence_bundle_uses_file_target",
        "yes" if "$(ALL_EVIDENCE_BUNDLE_C):" in makefile and "all-evidence-bundle: $(ALL_EVIDENCE_BUNDLE_C)" in makefile else "no",
        "Whether the single all-evidence C bundle is a concrete generated file target.")
    add(rows, "native_acceleration", "c_reconstruction_manifest_uses_file_targets",
        "yes" if "c-reconstruction-manifest: pseudocode-syntax-check pseudocode-object-check pseudocode-link-check $(C_RECONSTRUCTION_MANIFEST_INPUTS)" in makefile else "no",
        "Whether the manifest refresh depends on concrete generated artifacts instead of phony reconstruction aggregate targets.")
    add(rows, "native_acceleration", "native_ret_patch_followups_dump_source_lines", line_count(followups_source),
        "Native return-patch follow-up classifier/generator source size.")
    add(rows, "native_acceleration", "native_ret_patch_followups_dump_binary_bytes", file_size(followups_binary),
        "Current compiled native return-patch follow-up classifier/generator size.")
    add(rows, "native_acceleration", "native_ret_patch_followups_uses_native_generator",
        "yes" if "./vm_native_ret_patch_followups_dump --c" in makefile else "no",
        "Whether the ret-patch follow-up C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "native_ret_patch_followup_retdec_dump_source_lines", line_count(followup_retdec_source),
        "Native wrapper/postprocessor source size for the targeted follow-up RetDec sidecar.")
    add(rows, "native_acceleration", "native_ret_patch_followup_retdec_dump_binary_bytes", file_size(followup_retdec_binary),
        "Current compiled native wrapper/postprocessor size for follow-up RetDec.")
    add(rows, "native_acceleration", "native_ret_patch_followup_retdec_uses_native_wrapper",
        "yes" if "./vm_native_ret_patch_followup_retdec_dump >" in makefile else "no",
        "Whether the follow-up RetDec sidecar is generated through a native wrapper/postprocessor.")
    add(rows, "native_acceleration", "native_obfuscated_islands_dump_source_lines", line_count(obfuscated_islands_source),
        "Native obfuscated-island collapse classifier/generator source size.")
    add(rows, "native_acceleration", "native_obfuscated_islands_dump_binary_bytes", file_size(obfuscated_islands_binary),
        "Current compiled native obfuscated-island classifier/generator size.")
    add(rows, "native_acceleration", "native_obfuscated_islands_uses_native_generator",
        "yes" if "./vm_native_obfuscated_islands_dump --c" in makefile else "no",
        "Whether the native obfuscated-island C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_dump_source_lines", line_count(obfuscated_second_stage_source),
        "Native second-stage obfuscated-thunk classifier/generator source size.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_dump_binary_bytes", file_size(obfuscated_second_stage_binary),
        "Current compiled native second-stage obfuscated-thunk classifier/generator size.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_uses_native_generator",
        "yes" if "./vm_native_obfuscated_second_stage_dump --c" in makefile else "no",
        "Whether the second-stage obfuscated-thunk C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_dynamic_dump_source_lines", line_count(obfuscated_second_stage_dynamic_source),
        "Native dynamic dispatch trace-index generator source size for second-stage computed thunks.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_dynamic_dump_binary_bytes", file_size(obfuscated_second_stage_dynamic_binary),
        "Current compiled native dynamic dispatch trace-index generator size.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_dynamic_uses_native_generator",
        "yes" if "./vm_native_obfuscated_second_stage_dynamic_dump --c" in makefile else "no",
        "Whether the second-stage dynamic dispatch C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_slot_proof_dump_source_lines", line_count(obfuscated_second_stage_slot_proof_source),
        "Native Capstone-backed slot-formula proof generator source size for second-stage computed thunks.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_slot_proof_dump_binary_bytes", file_size(obfuscated_second_stage_slot_proof_binary),
        "Current compiled native slot-formula proof generator size.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_slot_proof_uses_native_generator",
        "yes" if "./vm_native_obfuscated_second_stage_slot_proof_dump --c" in makefile else "no",
        "Whether the second-stage slot proof C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_stack_source_dump_source_lines", line_count(obfuscated_second_stage_stack_source_source),
        "Native Capstone-backed stack-source proof generator source size for second-stage computed thunks.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_stack_source_dump_binary_bytes", file_size(obfuscated_second_stage_stack_source_binary),
        "Current compiled native stack-source proof generator size.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_stack_source_uses_native_generator",
        "yes" if "./vm_native_obfuscated_second_stage_stack_source_dump --c" in makefile else "no",
        "Whether the second-stage stack-source proof C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_rbx_provenance_dump_source_lines", line_count(obfuscated_second_stage_rbx_source),
        "Native RBX provenance trace-index generator source size for second-stage computed thunks.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_rbx_provenance_dump_binary_bytes", file_size(obfuscated_second_stage_rbx_binary),
        "Current compiled native RBX provenance generator size.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_rbx_provenance_uses_native_generator",
        "yes" if "./vm_native_obfuscated_second_stage_rbx_provenance_dump --c" in makefile else "no",
        "Whether the second-stage RBX provenance C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_model_dump_source_lines", line_count(obfuscated_second_stage_model_source),
        "Native combined C model generator source size for second-stage computed thunks.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_model_dump_binary_bytes", file_size(obfuscated_second_stage_model_binary),
        "Current compiled native combined second-stage model generator size.")
    add(rows, "native_acceleration", "native_obfuscated_second_stage_model_uses_native_generator",
        "yes" if "./vm_native_obfuscated_second_stage_model_dump --c" in makefile else "no",
        "Whether the combined second-stage model C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "native_obfuscated_control_model_dump_source_lines", line_count(obfuscated_control_model_source),
        "Native joined hidden-control model generator source size.")
    add(rows, "native_acceleration", "native_obfuscated_control_model_dump_binary_bytes", file_size(obfuscated_control_model_binary),
        "Current compiled native joined hidden-control model generator size.")
    add(rows, "native_acceleration", "native_obfuscated_control_model_uses_native_generator",
        "yes" if "./vm_native_obfuscated_control_model_dump --c" in makefile else "no",
        "Whether the joined hidden-control C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "native_ret_patch_hidden_bridge_dump_source_lines", line_count(ret_patch_hidden_bridge_source),
        "Native ret-patch hidden-control bridge generator source size.")
    add(rows, "native_acceleration", "native_ret_patch_hidden_bridge_dump_binary_bytes", file_size(ret_patch_hidden_bridge_binary),
        "Current compiled native ret-patch hidden bridge generator size.")
    add(rows, "native_acceleration", "native_ret_patch_hidden_bridge_uses_native_generator",
        "yes" if "./vm_native_ret_patch_hidden_bridge_dump --c" in makefile else "no",
        "Whether the ret-patch hidden bridge C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "native_handler_environment_coverage_dump_source_lines", line_count(handler_environment_coverage_source),
        "Native handler environment coverage generator source size.")
    add(rows, "native_acceleration", "native_handler_environment_coverage_dump_binary_bytes", file_size(handler_environment_coverage_binary),
        "Current compiled native handler environment coverage generator size.")
    add(rows, "native_acceleration", "native_handler_environment_coverage_uses_native_generator",
        "yes" if "./vm_native_handler_environment_coverage_dump --c" in makefile else "no",
        "Whether the handler environment coverage C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "config_coverage_frontier_dump_source_lines", line_count(config_coverage_frontier_source),
        "Native configuration coverage frontier generator source size.")
    add(rows, "native_acceleration", "config_coverage_frontier_dump_binary_bytes", file_size(config_coverage_frontier_binary),
        "Current compiled native configuration coverage frontier generator size.")
    add(rows, "native_acceleration", "config_coverage_frontier_uses_native_generator",
        "yes" if "./vm_config_coverage_frontier_dump --c" in makefile else "no",
        "Whether the config coverage frontier C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "binary_data_sections_dump_source_lines", line_count(binary_data_sections_source),
        "Native ELF data-section carrier generator source size.")
    add(rows, "native_acceleration", "binary_data_sections_dump_binary_bytes", file_size(binary_data_sections_binary),
        "Current compiled native ELF data-section carrier generator size.")
    add(rows, "native_acceleration", "binary_data_sections_uses_native_generator",
        "yes" if "./vm_binary_data_sections_dump --c" in makefile else "no",
        "Whether binary data section C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "static_only_handler_queue_dump_source_lines", line_count(static_only_handler_queue_source),
        "Native static-only handler closure queue generator source size.")
    add(rows, "native_acceleration", "static_only_handler_queue_dump_binary_bytes", file_size(static_only_handler_queue_binary),
        "Current compiled static-only handler closure queue generator size.")
    add(rows, "native_acceleration", "static_only_handler_queue_uses_native_generator",
        "yes" if "./vm_static_only_handler_queue_dump --c" in makefile else "no",
        "Whether the static-only handler closure queue C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "static_only_tier0_models_dump_source_lines", line_count(static_only_tier0_models_source),
        "Native static-only tier0 frame-model generator source size.")
    add(rows, "native_acceleration", "static_only_tier0_models_dump_binary_bytes", file_size(static_only_tier0_models_binary),
        "Current compiled static-only tier0 frame-model generator size.")
    add(rows, "native_acceleration", "static_only_tier0_models_uses_native_generator",
        "yes" if "./vm_static_only_tier0_models_dump --c" in makefile else "no",
        "Whether the tier0 static-only frame-model C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "static_only_tier1_models_dump_source_lines", line_count(static_only_tier1_models_source),
        "Native static-only tier1 model generator source size.")
    add(rows, "native_acceleration", "static_only_tier1_models_dump_binary_bytes", file_size(static_only_tier1_models_binary),
        "Current compiled static-only tier1 model generator size.")
    add(rows, "native_acceleration", "static_only_tier1_models_uses_native_generator",
        "yes" if "./vm_static_only_tier1_models_dump --c" in makefile else "no",
        "Whether the tier1 static-only model C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "static_only_tier2_split_dump_source_lines", line_count(static_only_tier2_split_source),
        "Native static-only tier2 split/model generator source size.")
    add(rows, "native_acceleration", "static_only_tier2_split_dump_binary_bytes", file_size(static_only_tier2_split_binary),
        "Current compiled static-only tier2 split/model generator size.")
    add(rows, "native_acceleration", "static_only_tier2_split_uses_native_generator",
        "yes" if "./vm_static_only_tier2_split_dump --c" in makefile else "no",
        "Whether the tier2 static-only split/model C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "static_only_tier3_shared_dump_source_lines", line_count(static_only_tier3_shared_source),
        "Native static-only tier3 shared/model generator source size.")
    add(rows, "native_acceleration", "static_only_tier3_shared_dump_binary_bytes", file_size(static_only_tier3_shared_binary),
        "Current compiled static-only tier3 shared/model generator size.")
    add(rows, "native_acceleration", "static_only_tier3_shared_uses_native_generator",
        "yes" if "./vm_static_only_tier3_shared_dump --c" in makefile else "no",
        "Whether the tier3 static-only shared-model C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "static_only_tier4_callret_dump_source_lines", line_count(static_only_tier4_callret_source),
        "Native static-only tier4 call/ret model generator source size.")
    add(rows, "native_acceleration", "static_only_tier4_callret_dump_binary_bytes", file_size(static_only_tier4_callret_binary),
        "Current compiled static-only tier4 call/ret model generator size.")
    add(rows, "native_acceleration", "static_only_tier4_callret_uses_native_generator",
        "yes" if "./vm_static_only_tier4_callret_dump --c" in makefile else "no",
        "Whether the tier4 static-only call/ret C/TSV/Markdown artifacts are generated by the native C tool.")
    add(rows, "native_acceleration", "static_only_tier5_large_dump_source_lines", line_count(static_only_tier5_large_source),
        "Native static-only tier5 large-handler model generator source size.")
    add(rows, "native_acceleration", "static_only_tier5_large_dump_binary_bytes", file_size(static_only_tier5_large_binary),
        "Current compiled static-only tier5 large-handler model generator size.")
    add(rows, "native_acceleration", "static_only_tier5_large_uses_native_generator",
        "yes" if "./vm_static_only_tier5_large_dump --c" in makefile else "no",
        "Whether the tier5 large static-only C/TSV/Markdown artifacts are generated by the native C tool.")


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
    synthetic_gap_unresolved_family_metrics(rows)
    synthetic_gap_source299_context_probe_metrics(rows)
    synthetic_gap_source299_ret_patch_probe_metrics(rows)
    synthetic_gap_sampled_ret_patch_probe_metrics(rows)
    synthetic_gap_ret_patch_native_target_atlas_metrics(rows)
    synthetic_gap_live_snapshot_transfer_probe_metrics(rows)
    synthetic_gap_live_table_evidence_metrics(rows)
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
