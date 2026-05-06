CC ?= gcc
ALL_EVIDENCE_SYNTAX_CC ?= gcc
CFLAGS ?= -O2 -g -Wall -Wextra -Wno-unused-parameter -Wno-nonnull-compare
LDFLAGS ?=

STATE_DIR ?= dumps/vmtail-state-wide-w16
TRACE ?= $(STATE_DIR)/vm_instruction_trace.tsv
PRIMARY_DIR ?= dumps/vmtail-wide-1m-w16
PRIMARY_TRACE ?= $(PRIMARY_DIR)/vm_instruction_trace.tsv
RESIDUAL_STATE_DIR ?= dumps/vmtail-state-residual-targets
LIVE_RESIDUAL_DIR ?= dumps/vmtail-live-residual-targets
GPR_RUN ?= dumps/vmtail-scratch-wide-w16-fs337all-fs128/run.stderr
FOCUS_GPR_RUN ?= dumps/vmtail-mem-focus-starts/run.stderr
TAIL_MEM_RUN ?= dumps/vmtail-mem-focus-starts/run.stderr
TAIL_MEM_EXACT_RUN ?= dumps/vmtail-mem-focus-start-final-sites/run.stderr
GPR_RUN_ARGS ?= --gpr-run $(GPR_RUN) --gpr-run $(FOCUS_GPR_RUN)
TAIL_MEM_RUN_ARGS ?= --tail-mem-run $(TAIL_MEM_EXACT_RUN) --tail-mem-run $(TAIL_MEM_RUN)
PRED_ROWS ?= 128
XFER_ROWS ?= 128
TARGET_ONLY_HANDLER_RETDEC_C := $(PRIMARY_DIR)/vm_target_only_handlers_retdec.c
UNOBSERVED_HANDLER_RETDEC_CS := $(PRIMARY_DIR)/vm_unobserved_handlers_retdec_batch00.c $(PRIMARY_DIR)/vm_unobserved_handlers_retdec_batch01.c $(PRIMARY_DIR)/vm_unobserved_handlers_retdec_batch02.c $(PRIMARY_DIR)/vm_unobserved_handlers_retdec_batch03.c $(PRIMARY_DIR)/vm_unobserved_handlers_retdec_batch04.c $(PRIMARY_DIR)/vm_unobserved_handlers_retdec_batch05.c $(PRIMARY_DIR)/vm_unobserved_handlers_retdec_batch06.c
WEAK_HANDLER_RETDEC_C := $(PRIMARY_DIR)/vm_weak_handlers_retdec.c
VALIDATED_HANDLER_RETDEC_CS := $(PRIMARY_DIR)/vm_validated_handlers_retdec_batch00.c $(PRIMARY_DIR)/vm_validated_handlers_retdec_batch01.c $(PRIMARY_DIR)/vm_validated_handlers_retdec_batch02.c $(PRIMARY_DIR)/vm_validated_handlers_retdec_batch03.c $(PRIMARY_DIR)/vm_validated_handlers_retdec_batch04.c $(PRIMARY_DIR)/vm_validated_handlers_retdec_batch05.c $(PRIMARY_DIR)/vm_validated_handlers_retdec_batch06.c
HANDLER_RETDEC_INDEX_TSV := $(PRIMARY_DIR)/vm_handler_retdec_index.tsv
HANDLER_RETDEC_INDEX_MD := $(PRIMARY_DIR)/vm_handler_retdec_index.md
UNRESOLVED_FAMILY_C := $(PRIMARY_DIR)/vm_unresolved_family_chains.c
PSEUDOCODE_TOP_C := $(PRIMARY_DIR)/vm_pseudocode_top.c
PROGRAM_PSEUDOCODE_TOP_C := $(PRIMARY_DIR)/vm_program_pseudocode_top.c
PROGRAM_PSEUDOCODE_FULL_C := $(PRIMARY_DIR)/vm_program_pseudocode_full.c
HANDLERS_PSEUDOCODE_C := $(PRIMARY_DIR)/vm_handlers_pseudocode.c
HANDLERS_HOT_PSEUDOCODE_C := $(PRIMARY_DIR)/vm_handlers_hot_pseudocode.c
PATH_HANDLERS_PSEUDOCODE_C := $(PRIMARY_DIR)/vm_path_handlers_pseudocode.c
PATH_HANDLERS_HOT_PSEUDOCODE_C := $(PRIMARY_DIR)/vm_path_handlers_hot_pseudocode.c
PATH_HANDLERS_FRONTIER_PSEUDOCODE_C := $(PRIMARY_DIR)/vm_path_handlers_frontier_pseudocode.c
PATH_FRONTIER_SLOT_AUDIT_C := $(PRIMARY_DIR)/vm_path_frontier_slot_audit.c
PATH_FRONTIER_SLOT_AUDIT_TSV := $(PRIMARY_DIR)/vm_path_frontier_slot_audit.tsv
PATH_FRONTIER_SLOT_AUDIT_MD := $(PRIMARY_DIR)/vm_path_frontier_slot_audit.md
NATIVE_EXECUTABLE_COVERAGE_AUDIT_C := $(PRIMARY_DIR)/vm_native_executable_coverage_audit.c
NATIVE_EXECUTABLE_COVERAGE_AUDIT_TSV := $(PRIMARY_DIR)/vm_native_executable_coverage_audit.tsv
NATIVE_EXECUTABLE_COVERAGE_AUDIT_MD := $(PRIMARY_DIR)/vm_native_executable_coverage_audit.md
NATIVE_FUNCTION_INVENTORY_C := $(PRIMARY_DIR)/vm_native_function_inventory.c
NATIVE_FUNCTION_INVENTORY_TSV := $(PRIMARY_DIR)/vm_native_function_inventory.tsv
NATIVE_FUNCTION_INVENTORY_MD := $(PRIMARY_DIR)/vm_native_function_inventory.md
NATIVE_RETDEC_GAP_QUEUE_C := $(PRIMARY_DIR)/vm_native_retdec_gap_queue.c
NATIVE_RETDEC_GAP_QUEUE_TSV := $(PRIMARY_DIR)/vm_native_retdec_gap_queue.tsv
NATIVE_RETDEC_GAP_QUEUE_MD := $(PRIMARY_DIR)/vm_native_retdec_gap_queue.md
NATIVE_GAP_RETDEC_BATCH00_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch00.c
NATIVE_GAP_RETDEC_BATCH01_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch01.c
NATIVE_GAP_RETDEC_BATCH02_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch02.c
NATIVE_GAP_RETDEC_BATCH03_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch03.c
NATIVE_GAP_RETDEC_BATCH04_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch04.c
NATIVE_GAP_RETDEC_BATCH05_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch05.c
NATIVE_GAP_RETDEC_BATCH06_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch06.c
NATIVE_GAP_RETDEC_BATCH07_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch07.c
NATIVE_GAP_RETDEC_BATCH08_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch08.c
NATIVE_GAP_RETDEC_BATCH09_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch09.c
NATIVE_GAP_RETDEC_BATCH10_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch10.c
NATIVE_GAP_RETDEC_BATCH11_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch11.c
NATIVE_GAP_RETDEC_BATCH12_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch12.c
NATIVE_GAP_RETDEC_BATCH13_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch13.c
NATIVE_GAP_RETDEC_BATCH14_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch14.c
NATIVE_GAP_RETDEC_BATCH15_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch15.c
NATIVE_GAP_RETDEC_BATCH16_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch16.c
NATIVE_GAP_RETDEC_BATCH17_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch17.c
NATIVE_GAP_RETDEC_BATCH18_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch18.c
NATIVE_GAP_RETDEC_BATCH19_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch19.c
NATIVE_GAP_RETDEC_BATCH20_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch20.c
NATIVE_GAP_RETDEC_BATCH21_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch21.c
NATIVE_GAP_RETDEC_BATCH22_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch22.c
NATIVE_GAP_RETDEC_BATCH23_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch23.c
NATIVE_GAP_RETDEC_BATCH24_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch24.c
NATIVE_GAP_RETDEC_BATCH25_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch25.c
NATIVE_GAP_RETDEC_BATCH26_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch26.c
NATIVE_GAP_RETDEC_BATCH27_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch27.c
NATIVE_GAP_RETDEC_BATCH28_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch28.c
NATIVE_GAP_RETDEC_BATCH29_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch29.c
NATIVE_GAP_RETDEC_BATCH30_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch30.c
NATIVE_GAP_RETDEC_BATCH31_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch31.c
NATIVE_GAP_RETDEC_BATCH32_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch32.c
NATIVE_GAP_RETDEC_BATCH33_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch33.c
NATIVE_GAP_RETDEC_BATCH34_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch34.c
NATIVE_GAP_RETDEC_BATCH35_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch35.c
NATIVE_GAP_RETDEC_BATCH36_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch36.c
NATIVE_GAP_RETDEC_BATCH37_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch37.c
NATIVE_GAP_RETDEC_BATCH38_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch38.c
NATIVE_GAP_RETDEC_BATCH39_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch39.c
NATIVE_GAP_RETDEC_BATCH40_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch40.c
NATIVE_GAP_RETDEC_BATCH41_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch41.c
NATIVE_GAP_RETDEC_BATCH42_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch42.c
NATIVE_GAP_RETDEC_BATCH43_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch43.c
NATIVE_GAP_RETDEC_BATCH44_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch44.c
NATIVE_GAP_RETDEC_BATCH45_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch45.c
NATIVE_GAP_RETDEC_BATCH46_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch46.c
NATIVE_GAP_RETDEC_BATCH47_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch47.c
NATIVE_GAP_RETDEC_BATCH48_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch48.c
NATIVE_GAP_RETDEC_BATCH49_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch49.c
NATIVE_GAP_RETDEC_BATCH50_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch50.c
NATIVE_GAP_RETDEC_BATCH51_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch51.c
NATIVE_GAP_RETDEC_BATCH52_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch52.c
NATIVE_GAP_RETDEC_BATCH53_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch53.c
NATIVE_GAP_RETDEC_BATCH54_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch54.c
NATIVE_GAP_RETDEC_BATCH55_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch55.c
NATIVE_GAP_RETDEC_BATCH56_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch56.c
NATIVE_GAP_RETDEC_BATCH57_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch57.c
NATIVE_GAP_RETDEC_BATCH58_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch58.c
NATIVE_GAP_RETDEC_BATCH59_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch59.c
NATIVE_GAP_RETDEC_BATCH60_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch60.c
NATIVE_GAP_RETDEC_BATCH61_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch61.c
NATIVE_GAP_RETDEC_BATCH62_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch62.c
NATIVE_GAP_RETDEC_BATCH63_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch63.c
NATIVE_GAP_RETDEC_BATCH64_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch64.c
NATIVE_GAP_RETDEC_BATCH65_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch65.c
NATIVE_GAP_RETDEC_BATCH66_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch66.c
NATIVE_GAP_RETDEC_BATCH67_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch67.c
NATIVE_GAP_RETDEC_BATCH68_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch68.c
NATIVE_GAP_RETDEC_BATCH69_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch69.c
NATIVE_GAP_RETDEC_BATCH70_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch70.c
NATIVE_GAP_RETDEC_BATCH71_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch71.c
NATIVE_GAP_RETDEC_BATCH72_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch72.c
NATIVE_GAP_RETDEC_BATCH73_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch73.c
NATIVE_GAP_RETDEC_BATCH74_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch74.c
NATIVE_GAP_RETDEC_BATCH75_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch75.c
NATIVE_GAP_RETDEC_BATCH76_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch76.c
NATIVE_GAP_RETDEC_BATCH77_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch77.c
NATIVE_GAP_RETDEC_BATCH78_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch78.c
NATIVE_GAP_RETDEC_BATCH79_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch79.c
NATIVE_GAP_RETDEC_BATCH80_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch80.c
NATIVE_GAP_RETDEC_BATCH81_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch81.c
NATIVE_GAP_RETDEC_BATCH82_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch82.c
NATIVE_GAP_RETDEC_BATCH83_C := $(PRIMARY_DIR)/vm_native_gap_retdec_batch83.c
NATIVE_GAP_RETDEC_BATCH_CS := $(NATIVE_GAP_RETDEC_BATCH00_C) $(NATIVE_GAP_RETDEC_BATCH01_C) $(NATIVE_GAP_RETDEC_BATCH02_C) $(NATIVE_GAP_RETDEC_BATCH03_C) $(NATIVE_GAP_RETDEC_BATCH04_C) $(NATIVE_GAP_RETDEC_BATCH05_C) $(NATIVE_GAP_RETDEC_BATCH06_C) $(NATIVE_GAP_RETDEC_BATCH07_C) $(NATIVE_GAP_RETDEC_BATCH08_C) $(NATIVE_GAP_RETDEC_BATCH09_C) $(NATIVE_GAP_RETDEC_BATCH10_C) $(NATIVE_GAP_RETDEC_BATCH11_C) $(NATIVE_GAP_RETDEC_BATCH12_C) $(NATIVE_GAP_RETDEC_BATCH13_C) $(NATIVE_GAP_RETDEC_BATCH14_C) $(NATIVE_GAP_RETDEC_BATCH15_C) $(NATIVE_GAP_RETDEC_BATCH16_C) $(NATIVE_GAP_RETDEC_BATCH17_C) $(NATIVE_GAP_RETDEC_BATCH18_C) $(NATIVE_GAP_RETDEC_BATCH19_C) $(NATIVE_GAP_RETDEC_BATCH20_C) $(NATIVE_GAP_RETDEC_BATCH21_C) $(NATIVE_GAP_RETDEC_BATCH22_C) $(NATIVE_GAP_RETDEC_BATCH23_C) $(NATIVE_GAP_RETDEC_BATCH24_C) $(NATIVE_GAP_RETDEC_BATCH25_C) $(NATIVE_GAP_RETDEC_BATCH26_C) $(NATIVE_GAP_RETDEC_BATCH27_C) $(NATIVE_GAP_RETDEC_BATCH28_C) $(NATIVE_GAP_RETDEC_BATCH29_C) $(NATIVE_GAP_RETDEC_BATCH30_C) $(NATIVE_GAP_RETDEC_BATCH31_C) $(NATIVE_GAP_RETDEC_BATCH32_C) $(NATIVE_GAP_RETDEC_BATCH33_C) $(NATIVE_GAP_RETDEC_BATCH34_C) $(NATIVE_GAP_RETDEC_BATCH35_C) $(NATIVE_GAP_RETDEC_BATCH36_C) $(NATIVE_GAP_RETDEC_BATCH37_C) $(NATIVE_GAP_RETDEC_BATCH38_C) $(NATIVE_GAP_RETDEC_BATCH39_C) $(NATIVE_GAP_RETDEC_BATCH40_C) $(NATIVE_GAP_RETDEC_BATCH41_C) $(NATIVE_GAP_RETDEC_BATCH42_C) $(NATIVE_GAP_RETDEC_BATCH43_C) $(NATIVE_GAP_RETDEC_BATCH44_C) $(NATIVE_GAP_RETDEC_BATCH45_C) $(NATIVE_GAP_RETDEC_BATCH46_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH47_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH48_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH49_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH50_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH51_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH52_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH53_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH54_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH55_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH56_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH57_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH58_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH59_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH60_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH61_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH62_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH63_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH64_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH65_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH66_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH67_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH68_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH69_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH70_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH71_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH72_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH73_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH74_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH75_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH76_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH77_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH78_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH79_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH80_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH81_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH82_C)
NATIVE_GAP_RETDEC_BATCH_CS += $(NATIVE_GAP_RETDEC_BATCH83_C)
SOURCE_BUNDLE_C := $(PRIMARY_DIR)/vm_recovered_source_bundle.c
ALL_EVIDENCE_BUNDLE_C := $(PRIMARY_DIR)/vm_recovered_source_all_evidence_bundle.c
NATIVE_RET_PATCH_TARGETS_C := $(PRIMARY_DIR)/vm_native_ret_patch_targets.c
NATIVE_RET_PATCH_EPILOGUES_RETDEC_C := $(PRIMARY_DIR)/vm_native_ret_patch_epilogues_retdec.c
NATIVE_RET_PATCH_SOURCE278_RETDEC_C := $(PRIMARY_DIR)/vm_native_ret_patch_source278_retdec.c
RET_PATCH_FOLLOWUPS_C := $(PRIMARY_DIR)/vm_native_ret_patch_followups.c
RET_PATCH_FOLLOWUPS_TSV := $(PRIMARY_DIR)/vm_native_ret_patch_followups.tsv
RET_PATCH_FOLLOWUPS_MD := $(PRIMARY_DIR)/vm_native_ret_patch_followups.md
RET_PATCH_FOLLOWUP_RETDEC_C := $(PRIMARY_DIR)/vm_native_ret_patch_followup_retdec.c
NATIVE_OBFUSCATED_ISLANDS_C := $(PRIMARY_DIR)/vm_native_obfuscated_islands.c
NATIVE_OBFUSCATED_ISLANDS_TSV := $(PRIMARY_DIR)/vm_native_obfuscated_islands.tsv
NATIVE_OBFUSCATED_ISLANDS_MD := $(PRIMARY_DIR)/vm_native_obfuscated_islands.md
NATIVE_OBFUSCATED_SECOND_STAGE_C := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage.c
NATIVE_OBFUSCATED_SECOND_STAGE_TSV := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage.tsv
NATIVE_OBFUSCATED_SECOND_STAGE_MD := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage.md
NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_C := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_dynamic.c
NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_TSV := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_dynamic.tsv
NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_MD := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_dynamic.md
NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_RUNS := dumps/dispatch-obf-cad88/run.stderr dumps/dispatch-obf-cc3f5/run.stderr dumps/dispatch-obf-second-stage/run.stderr dumps/dispatch-obf-c6bce/run.stderr dumps/dispatch-obf-c80b9/run.stderr
NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_C := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_slot_proof.c
NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_TSV := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_slot_proof.tsv
NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_MD := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_slot_proof.md
NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_C := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_stack_source.c
NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_TSV := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_stack_source.tsv
NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_MD := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_stack_source.md
NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_C := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_rbx_provenance.c
NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_TSV := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_rbx_provenance.tsv
NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_MD := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_rbx_provenance.md
NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_RUNS := dumps/probe-obf-rbx-cad88/run.stderr dumps/probe-obf-rbx-cc3f5/run.stderr dumps/probe-obf-rbx-c559d/run.stderr dumps/probe-obf-rbx-c6bce/run.stderr dumps/probe-obf-rbx-c80b9/run.stderr
NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_C := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_model.c
NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_TSV := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_model.tsv
NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_MD := $(PRIMARY_DIR)/vm_native_obfuscated_second_stage_model.md
NATIVE_OBFUSCATED_CONTROL_MODEL_C := $(PRIMARY_DIR)/vm_native_obfuscated_control_model.c
NATIVE_OBFUSCATED_CONTROL_MODEL_TSV := $(PRIMARY_DIR)/vm_native_obfuscated_control_model.tsv
NATIVE_OBFUSCATED_CONTROL_MODEL_MD := $(PRIMARY_DIR)/vm_native_obfuscated_control_model.md
NATIVE_RET_PATCH_HIDDEN_BRIDGE_C := $(PRIMARY_DIR)/vm_native_ret_patch_hidden_bridge.c
NATIVE_RET_PATCH_HIDDEN_BRIDGE_TSV := $(PRIMARY_DIR)/vm_native_ret_patch_hidden_bridge.tsv
NATIVE_RET_PATCH_HIDDEN_BRIDGE_MD := $(PRIMARY_DIR)/vm_native_ret_patch_hidden_bridge.md
NATIVE_HANDLER_ENVIRONMENT_COVERAGE_C := $(PRIMARY_DIR)/vm_native_handler_environment_coverage.c
NATIVE_HANDLER_ENVIRONMENT_COVERAGE_TSV := $(PRIMARY_DIR)/vm_native_handler_environment_coverage.tsv
NATIVE_HANDLER_ENVIRONMENT_COVERAGE_MD := $(PRIMARY_DIR)/vm_native_handler_environment_coverage.md
CONFIG_COVERAGE_FRONTIER_C := $(PRIMARY_DIR)/vm_config_coverage_frontier.c
CONFIG_COVERAGE_FRONTIER_TSV := $(PRIMARY_DIR)/vm_config_coverage_frontier.tsv
CONFIG_COVERAGE_FRONTIER_MD := $(PRIMARY_DIR)/vm_config_coverage_frontier.md
BINARY_DATA_SECTIONS_C := $(PRIMARY_DIR)/vm_binary_data_sections.c
BINARY_DATA_SECTIONS_TSV := $(PRIMARY_DIR)/vm_binary_data_sections.tsv
BINARY_DATA_SECTIONS_MD := $(PRIMARY_DIR)/vm_binary_data_sections.md
STATIC_ONLY_HANDLER_QUEUE_C := $(PRIMARY_DIR)/vm_static_only_handler_queue.c
STATIC_ONLY_HANDLER_QUEUE_TSV := $(PRIMARY_DIR)/vm_static_only_handler_queue.tsv
STATIC_ONLY_HANDLER_QUEUE_MD := $(PRIMARY_DIR)/vm_static_only_handler_queue.md
STATIC_ONLY_TIER0_MODELS_C := $(PRIMARY_DIR)/vm_static_only_tier0_handler_models.c
STATIC_ONLY_TIER0_MODELS_TSV := $(PRIMARY_DIR)/vm_static_only_tier0_handler_models.tsv
STATIC_ONLY_TIER0_MODELS_MD := $(PRIMARY_DIR)/vm_static_only_tier0_handler_models.md
STATIC_ONLY_TIER1_MODELS_C := $(PRIMARY_DIR)/vm_static_only_tier1_handler_models.c
STATIC_ONLY_TIER1_MODELS_TSV := $(PRIMARY_DIR)/vm_static_only_tier1_handler_models.tsv
STATIC_ONLY_TIER1_MODELS_MD := $(PRIMARY_DIR)/vm_static_only_tier1_handler_models.md
STATIC_ONLY_TIER2_SPLIT_C := $(PRIMARY_DIR)/vm_static_only_tier2_split_models.c
STATIC_ONLY_TIER2_SPLIT_TSV := $(PRIMARY_DIR)/vm_static_only_tier2_split_models.tsv
STATIC_ONLY_TIER2_SPLIT_MD := $(PRIMARY_DIR)/vm_static_only_tier2_split_models.md
STATIC_ONLY_TIER3_SHARED_C := $(PRIMARY_DIR)/vm_static_only_tier3_shared_models.c
STATIC_ONLY_TIER3_SHARED_TSV := $(PRIMARY_DIR)/vm_static_only_tier3_shared_models.tsv
STATIC_ONLY_TIER3_SHARED_MD := $(PRIMARY_DIR)/vm_static_only_tier3_shared_models.md
STATIC_ONLY_TIER4_CALLRET_C := $(PRIMARY_DIR)/vm_static_only_tier4_callret_models.c
STATIC_ONLY_TIER4_CALLRET_TSV := $(PRIMARY_DIR)/vm_static_only_tier4_callret_models.tsv
STATIC_ONLY_TIER4_CALLRET_MD := $(PRIMARY_DIR)/vm_static_only_tier4_callret_models.md
STATIC_ONLY_TIER5_LARGE_C := $(PRIMARY_DIR)/vm_static_only_tier5_large_models.c
STATIC_ONLY_TIER5_LARGE_TSV := $(PRIMARY_DIR)/vm_static_only_tier5_large_models.tsv
STATIC_ONLY_TIER5_LARGE_MD := $(PRIMARY_DIR)/vm_static_only_tier5_large_models.md

.PHONY: all clean fast-replay fast-state fast-gpr fast-predicates fast-state-predicates fast-gpr-predicates fast-transfer fast-state-transfer fast-gpr-transfer fast-validators fast-paths fast-gpr-paths instruction-trace instruction-trace-refresh instruction-unique instruction-unique-fast-check bytecode-segments-fast-check bytecode-blocks-fast-check instruction-lift sampled-recovery file-atlas file-fill long-branches hidden-transitions sampled-operands hidden-fill frontier-fill footprint-fill control-edges bytecode-ir bytecode-basic-blocks synthetic-spans synthetic-tails synthetic-tail-lift synthetic-successor-gaps synthetic-gap-transfer-probe synthetic-gap-dynamic-stitch synthetic-gap-chain-probe synthetic-gap-residual-audit synthetic-gap-concrete-state-audit synthetic-gap-state-trace-targets synthetic-gap-live-context-audit synthetic-gap-table-read-diagnostic synthetic-gap-table-memory-probe synthetic-gap-runtime-table-memory-probe synthetic-gap-sampled-control-correlation synthetic-gap-focused-direct-trace-audit synthetic-gap-focused-sequence-audit synthetic-gap-observed-chain-bridge synthetic-gap-observed-chain-replay synthetic-gap-chain-slot-reconciliation synthetic-gap-unresolved-family-audit synthetic-gap-source299-context-probe synthetic-gap-source299-ret-patch-probe synthetic-gap-sampled-ret-patch-probe synthetic-gap-ret-patch-native-target-atlas native-ret-patch-target-pseudocode native-ret-patch-epilogues-retdec native-ret-patch-source278-retdec native-ret-patch-followups native-ret-patch-followup-retdec native-obfuscated-islands native-obfuscated-second-stage native-obfuscated-second-stage-dynamic native-obfuscated-second-stage-slot-proof native-obfuscated-second-stage-stack-source native-obfuscated-second-stage-rbx-provenance native-obfuscated-second-stage-model native-obfuscated-control-model native-ret-patch-hidden-bridge native-handler-environment-coverage config-coverage-frontier binary-data-sections static-only-handler-queue static-only-tier0-models static-only-tier1-models static-only-tier2-split static-only-tier3-shared static-only-tier4-callret static-only-tier5-large target-only-handlers-retdec unobserved-handlers-retdec unobserved-handlers-retdec-batch0 weak-handlers-retdec validated-handlers-retdec handler-retdec-index unresolved-family-chains path-frontier-slot-audit native-executable-coverage-audit native-function-inventory native-retdec-gap-queue native-gap-retdec-batch0 native-gap-retdec-batch1 native-gap-retdec-batch2 native-gap-retdec-batch3 native-gap-retdec-batch4 native-gap-retdec-batch5 native-gap-retdec-batch6 native-gap-retdec-batch7 native-gap-retdec-batch8 native-gap-retdec-batch9 native-gap-retdec-batch10 native-gap-retdec-batch11 native-gap-retdec-batch12 native-gap-retdec-batch13 native-gap-retdec-batch14 native-gap-retdec-batch15 native-gap-retdec-batch16 native-gap-retdec-batch17 native-gap-retdec-batch18 native-gap-retdec-batch19 native-gap-retdec-batch20 native-gap-retdec-batch21 native-gap-retdec-batch22 native-gap-retdec-batch23 native-gap-retdec-batch24 native-gap-retdec-batch25 native-gap-retdec-batch26 native-gap-retdec-batch27 native-gap-retdec-batch28 native-gap-retdec-batch29 native-gap-retdec-batch30 native-gap-retdec-batch31 native-gap-retdec-batch32 native-gap-retdec-batch33 native-gap-retdec-batch34 native-gap-retdec-batch35 native-gap-retdec-batch36 native-gap-retdec-batch37 native-gap-retdec-batch38 native-gap-retdec-batch39 native-gap-retdec-batch40 native-gap-retdec-batch41 native-gap-retdec-batch42 native-gap-retdec-batch43 native-gap-retdec-batch44 native-gap-retdec-batch45 native-gap-retdec-batch46 native-gap-retdec-batches synthetic-gap-live-snapshot-transfer-probe synthetic-gap-live-table-evidence synthetic-gap-symbolic-successors synthetic-gap-live-in-roles final-tail-site-probe synthetic-gap-live-in-reentry-probe synthetic-gap-allstatic-reentry-probe pseudocode pseudocode-full handler-pseudocode path-pseudocode source-bundle all-evidence-bundle pseudocode-syntax-check pseudocode-object-check pseudocode-link-check coverage-matrix coverage-audit c-reconstruction-manifest

all: driver trace_preload.so vm_fast_path_profile vm_instruction_unique_fast vm_bytecode_segments_fast vm_bytecode_blocks_fast vm_handler_retdec_index vm_unresolved_family_chains_dump vm_native_ret_patch_followups_dump vm_native_ret_patch_followup_retdec_dump vm_native_obfuscated_islands_dump vm_native_obfuscated_second_stage_dump vm_native_obfuscated_second_stage_dynamic_dump vm_native_obfuscated_second_stage_slot_proof_dump vm_native_obfuscated_second_stage_stack_source_dump vm_native_obfuscated_second_stage_rbx_provenance_dump vm_native_obfuscated_second_stage_model_dump vm_native_obfuscated_control_model_dump vm_native_ret_patch_hidden_bridge_dump vm_native_handler_environment_coverage_dump vm_config_coverage_frontier_dump vm_binary_data_sections_dump vm_static_only_handler_queue_dump vm_static_only_tier0_models_dump vm_static_only_tier1_models_dump vm_static_only_tier2_split_dump vm_static_only_tier3_shared_dump vm_static_only_tier4_callret_dump vm_static_only_tier5_large_dump

driver: driver.c
	$(CC) $(CFLAGS) -o $@ $< -ldl

trace_preload.so: trace_preload.c
	$(CC) $(CFLAGS) -fPIC -shared -o $@ $< -ldl -pthread

vm_fast_path_profile: vm_fast_path_profile.c
	$(CC) $(CFLAGS) -O3 -o $@ $< -lcapstone -lcrypto

vm_instruction_unique_fast: vm_instruction_unique_fast.c
	$(CC) $(CFLAGS) -O3 -o $@ $<

vm_bytecode_segments_fast: vm_bytecode_segments_fast.c
	$(CC) $(CFLAGS) -O3 -o $@ $< -lcrypto

vm_bytecode_blocks_fast: vm_bytecode_blocks_fast.c
	$(CC) $(CFLAGS) -O3 -o $@ $<

vm_handler_retdec_index: vm_handler_retdec_index.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_unresolved_family_chains_dump: vm_unresolved_family_chains_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_native_ret_patch_followups_dump: vm_native_ret_patch_followups_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_native_ret_patch_followup_retdec_dump: vm_native_ret_patch_followup_retdec_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_native_obfuscated_islands_dump: vm_native_obfuscated_islands_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_native_obfuscated_second_stage_dump: vm_native_obfuscated_second_stage_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_native_obfuscated_second_stage_dynamic_dump: vm_native_obfuscated_second_stage_dynamic_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_native_obfuscated_second_stage_slot_proof_dump: vm_native_obfuscated_second_stage_slot_proof_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $< -lcapstone

vm_native_obfuscated_second_stage_stack_source_dump: vm_native_obfuscated_second_stage_stack_source_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $< -lcapstone

vm_native_obfuscated_second_stage_rbx_provenance_dump: vm_native_obfuscated_second_stage_rbx_provenance_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_native_obfuscated_second_stage_model_dump: vm_native_obfuscated_second_stage_model_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_native_obfuscated_control_model_dump: vm_native_obfuscated_control_model_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_native_ret_patch_hidden_bridge_dump: vm_native_ret_patch_hidden_bridge_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_native_handler_environment_coverage_dump: vm_native_handler_environment_coverage_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_config_coverage_frontier_dump: vm_config_coverage_frontier_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_binary_data_sections_dump: vm_binary_data_sections_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_static_only_handler_queue_dump: vm_static_only_handler_queue_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_static_only_tier0_models_dump: vm_static_only_tier0_models_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_static_only_tier1_models_dump: vm_static_only_tier1_models_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_static_only_tier2_split_dump: vm_static_only_tier2_split_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_static_only_tier3_shared_dump: vm_static_only_tier3_shared_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_static_only_tier4_callret_dump: vm_static_only_tier4_callret_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

vm_static_only_tier5_large_dump: vm_static_only_tier5_large_dump.c
	$(CC) $(CFLAGS) -O2 -o $@ $<

fast-replay: fast-state fast-gpr

fast-state: vm_fast_path_profile
	./vm_fast_path_profile $(TRACE) --emit-dir $(STATE_DIR)

fast-gpr: vm_fast_path_profile
	./vm_fast_path_profile $(TRACE) --gpr-run $(GPR_RUN) --emit-dir $(STATE_DIR)

fast-predicates: fast-state-predicates fast-gpr-predicates

fast-state-predicates: vm_fast_path_profile
	./vm_fast_path_profile $(TRACE) --branch-predicates --max-rows-per-source $(PRED_ROWS) > $(STATE_DIR)/vm_branch_predicates.tsv
	python3 vm_branch_predicates.py --markdown --from-tsv $(STATE_DIR)/vm_branch_predicates.tsv > $(STATE_DIR)/vm_branch_predicates_top.md

fast-gpr-predicates: vm_fast_path_profile
	./vm_fast_path_profile $(TRACE) --gpr-run $(GPR_RUN) --branch-predicates --max-rows-per-source $(PRED_ROWS) > $(STATE_DIR)/vm_branch_predicates_gpr_seeded.tsv
	python3 vm_branch_predicates.py --markdown --from-tsv $(STATE_DIR)/vm_branch_predicates_gpr_seeded.tsv > $(STATE_DIR)/vm_branch_predicates_gpr_seeded_top.md

fast-transfer: fast-state-transfer fast-gpr-transfer

fast-state-transfer: vm_fast_path_profile
	./vm_fast_path_profile $(TRACE) --transfer-expr --max-rows-per-source $(XFER_ROWS) --max-expr-len 320 --top 5 > $(STATE_DIR)/vm_static_transfer_expr.tsv
	./vm_fast_path_profile $(TRACE) --transfer-expr --by-path --max-rows-per-source $(XFER_ROWS) --max-expr-len 320 --top 5 > $(STATE_DIR)/vm_static_path_transfer_expr.tsv

fast-gpr-transfer: vm_fast_path_profile
	./vm_fast_path_profile $(TRACE) --gpr-run $(GPR_RUN) --transfer-expr --max-rows-per-source $(XFER_ROWS) --max-expr-len 320 --top 5 > $(STATE_DIR)/vm_static_transfer_expr_gpr_seeded.tsv
	./vm_fast_path_profile $(TRACE) --gpr-run $(GPR_RUN) --transfer-expr --by-path --max-rows-per-source $(XFER_ROWS) --max-expr-len 320 --top 5 > $(STATE_DIR)/vm_static_path_transfer_expr_gpr_seeded.tsv

fast-validators fast-paths: fast-state

fast-gpr-paths: fast-gpr

$(PRIMARY_TRACE): $(PRIMARY_DIR)/run.stderr vm_trace_graph.py eac.elf
	python3 vm_trace_graph.py $(PRIMARY_DIR) --eac eac.elf --window 0x1200 --instruction-trace > $(PRIMARY_TRACE)

instruction-trace: $(PRIMARY_TRACE)

instruction-trace-refresh:
	python3 vm_trace_graph.py $(PRIMARY_DIR) --eac eac.elf --window 0x1200 --instruction-trace > $(PRIMARY_TRACE)

instruction-unique: $(PRIMARY_TRACE) vm_instruction_unique_fast
	./vm_instruction_unique_fast $(PRIMARY_TRACE) > dumps/vmtail-wide-1m-w16/vm_instruction_unique.tsv

instruction-unique-fast-check: $(PRIMARY_TRACE) vm_instruction_unique_fast
	python3 vm_bytecode_recover.py $(PRIMARY_TRACE) --instructions > /tmp/eacsym-vm_instruction_unique_python.tsv
	./vm_instruction_unique_fast $(PRIMARY_TRACE) > /tmp/eacsym-vm_instruction_unique_fast.tsv
	cmp /tmp/eacsym-vm_instruction_unique_python.tsv /tmp/eacsym-vm_instruction_unique_fast.tsv

bytecode-segments-fast-check: $(PRIMARY_TRACE) vm_bytecode_segments_fast
	python3 vm_bytecode_recover.py $(PRIMARY_TRACE) > /tmp/eacsym-vm_bytecode_segments_python.tsv
	./vm_bytecode_segments_fast $(PRIMARY_TRACE) > /tmp/eacsym-vm_bytecode_segments_fast.tsv
	cmp /tmp/eacsym-vm_bytecode_segments_python.tsv /tmp/eacsym-vm_bytecode_segments_fast.tsv
	python3 vm_bytecode_recover.py $(PRIMARY_TRACE) --include-sampled > /tmp/eacsym-vm_bytecode_segments_sampled_python.tsv
	./vm_bytecode_segments_fast $(PRIMARY_TRACE) --include-sampled > /tmp/eacsym-vm_bytecode_segments_sampled_fast.tsv
	cmp /tmp/eacsym-vm_bytecode_segments_sampled_python.tsv /tmp/eacsym-vm_bytecode_segments_sampled_fast.tsv
	python3 vm_bytecode_recover.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv --include-sampled > /tmp/eacsym-vm_bytecode_segments_final_python.tsv
	./vm_bytecode_segments_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv --include-sampled > /tmp/eacsym-vm_bytecode_segments_final_fast.tsv
	cmp /tmp/eacsym-vm_bytecode_segments_final_python.tsv /tmp/eacsym-vm_bytecode_segments_final_fast.tsv

bytecode-blocks-fast-check: $(PRIMARY_TRACE) vm_bytecode_blocks_fast
	python3 vm_bytecode_blocks.py $(PRIMARY_TRACE) > /tmp/eacsym-vm_bytecode_blocks_python.tsv
	./vm_bytecode_blocks_fast $(PRIMARY_TRACE) > /tmp/eacsym-vm_bytecode_blocks_fast.tsv
	cmp /tmp/eacsym-vm_bytecode_blocks_python.tsv /tmp/eacsym-vm_bytecode_blocks_fast.tsv
	python3 vm_bytecode_blocks.py $(PRIMARY_TRACE) --include-sampled > /tmp/eacsym-vm_bytecode_blocks_sampled_python.tsv
	./vm_bytecode_blocks_fast $(PRIMARY_TRACE) --include-sampled > /tmp/eacsym-vm_bytecode_blocks_sampled_fast.tsv
	cmp /tmp/eacsym-vm_bytecode_blocks_sampled_python.tsv /tmp/eacsym-vm_bytecode_blocks_sampled_fast.tsv
	python3 vm_bytecode_blocks.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv --include-sampled > /tmp/eacsym-vm_bytecode_blocks_final_python.tsv
	./vm_bytecode_blocks_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv --include-sampled > /tmp/eacsym-vm_bytecode_blocks_final_fast.tsv
	cmp /tmp/eacsym-vm_bytecode_blocks_final_python.tsv /tmp/eacsym-vm_bytecode_blocks_final_fast.tsv

instruction-lift: instruction-unique
	python3 vm_instruction_lift.py > dumps/vmtail-wide-1m-w16/vm_instruction_lift.tsv

sampled-recovery: $(PRIMARY_TRACE) vm_bytecode_segments_fast vm_bytecode_blocks_fast
	./vm_bytecode_segments_fast $(PRIMARY_TRACE) --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_segments_sampled.tsv
	./vm_bytecode_blocks_fast $(PRIMARY_TRACE) --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_sampled.tsv

file-atlas: sampled-recovery instruction-unique
	python3 vm_bytecode_file_atlas.py --max-gap 0x20 > dumps/vmtail-wide-1m-w16/vm_bytecode_file_atlas.tsv

long-branches: $(PRIMARY_TRACE)
	python3 vm_long_branch_catalog.py $(PRIMARY_TRACE) > dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv
	python3 vm_long_branch_catalog.py $(PRIMARY_TRACE) --markdown --limit 30 > dumps/vmtail-wide-1m-w16/vm_long_branch_top.md

hidden-transitions: $(PRIMARY_TRACE)
	python3 vm_hidden_transition_catalog.py $(PRIMARY_TRACE) > dumps/vmtail-wide-1m-w16/vm_hidden_transition_catalog.tsv
	python3 vm_hidden_transition_catalog.py $(PRIMARY_TRACE) --markdown --limit 30 > dumps/vmtail-wide-1m-w16/vm_hidden_transition_top.md

sampled-operands: $(PRIMARY_TRACE)
	python3 vm_sampled_operand_catalog.py $(PRIMARY_TRACE) > dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv
	python3 vm_sampled_operand_catalog.py $(PRIMARY_TRACE) --markdown --limit 30 > dumps/vmtail-wide-1m-w16/vm_sampled_operand_top.md

file-fill: $(PRIMARY_TRACE) file-atlas long-branches hidden-transitions sampled-operands vm_bytecode_segments_fast vm_bytecode_blocks_fast
	python3 vm_trace_file_fill.py $(PRIMARY_TRACE) > dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill.tsv
	./vm_bytecode_segments_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_sampled.tsv
	./vm_bytecode_blocks_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_filefill_sampled.tsv
	mkdir -p dumps/vmtail-wide-1m-w16-filefill
	ln -sf ../vmtail-wide-1m-w16/vm_instruction_trace_filefill.tsv dumps/vmtail-wide-1m-w16-filefill/vm_instruction_trace.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_bytecode_segments_filefill_sampled.tsv dumps/vmtail-wide-1m-w16-filefill/vm_bytecode_segments.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_isa_missing_exact.tsv dumps/vmtail-wide-1m-w16-filefill/vm_isa_missing_exact.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_handler_semantics.tsv dumps/vmtail-wide-1m-w16-filefill/vm_handler_semantics.tsv
	python3 vm_gap_report.py dumps/vmtail-wide-1m-w16-filefill --long-branches dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv --hidden-transitions dumps/vmtail-wide-1m-w16/vm_hidden_transition_catalog.tsv --sampled-operands dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv > dumps/vmtail-wide-1m-w16/vm_gap_report_filefill.tsv

hidden-fill: file-fill long-branches hidden-transitions sampled-operands vm_bytecode_segments_fast vm_bytecode_blocks_fast
	python3 vm_trace_hidden_fill.py $(PRIMARY_TRACE) > dumps/vmtail-wide-1m-w16/vm_instruction_trace_hiddenfill.tsv
	./vm_bytecode_segments_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace_hiddenfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_segments_hiddenfill_sampled.tsv
	./vm_bytecode_blocks_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace_hiddenfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_hiddenfill_sampled.tsv
	python3 vm_trace_hidden_fill.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill.tsv > dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill.tsv
	./vm_bytecode_segments_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_sampled.tsv
	./vm_bytecode_blocks_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_filefill_hiddenfill_sampled.tsv
	mkdir -p dumps/vmtail-wide-1m-w16-filefill-hiddenfill
	ln -sf ../vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill/vm_instruction_trace.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_sampled.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill/vm_bytecode_segments.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_isa_missing_exact.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill/vm_isa_missing_exact.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_handler_semantics.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill/vm_handler_semantics.tsv
	python3 vm_gap_report.py dumps/vmtail-wide-1m-w16-filefill-hiddenfill --long-branches dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv --hidden-transitions dumps/vmtail-wide-1m-w16/vm_hidden_transition_catalog.tsv --sampled-operands dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv > dumps/vmtail-wide-1m-w16/vm_gap_report_filefill_hiddenfill.tsv

frontier-fill: hidden-fill vm_bytecode_segments_fast vm_bytecode_blocks_fast
	python3 vm_trace_frontier_fill.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill.tsv --segments dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_sampled.tsv > dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill.tsv
	./vm_bytecode_segments_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_sampled.tsv
	./vm_bytecode_blocks_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_filefill_hiddenfill_frontierfill_sampled.tsv
	mkdir -p dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill
	ln -sf ../vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill/vm_instruction_trace.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_sampled.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill/vm_bytecode_segments.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_isa_missing_exact.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill/vm_isa_missing_exact.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_handler_semantics.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill/vm_handler_semantics.tsv
	python3 vm_gap_report.py dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill --long-branches dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv --hidden-transitions dumps/vmtail-wide-1m-w16/vm_hidden_transition_catalog.tsv --sampled-operands dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv > dumps/vmtail-wide-1m-w16/vm_gap_report_filefill_hiddenfill_frontierfill.tsv

footprint-fill: frontier-fill vm_bytecode_segments_fast vm_bytecode_blocks_fast
	python3 vm_trace_target_footprint_fill.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill.tsv --segments dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_sampled.tsv > dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv
	./vm_bytecode_segments_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_footprintfill_sampled.tsv
	./vm_bytecode_blocks_fast dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_filefill_hiddenfill_frontierfill_footprintfill_sampled.tsv
	mkdir -p dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill
	ln -sf ../vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill/vm_instruction_trace.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_footprintfill_sampled.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill/vm_bytecode_segments.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_isa_missing_exact.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill/vm_isa_missing_exact.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_handler_semantics.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill/vm_handler_semantics.tsv
	python3 vm_gap_report.py dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill --long-branches dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv --hidden-transitions dumps/vmtail-wide-1m-w16/vm_hidden_transition_catalog.tsv --sampled-operands dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv > dumps/vmtail-wide-1m-w16/vm_gap_report_filefill_hiddenfill_frontierfill_footprintfill.tsv

control-edges: footprint-fill
	python3 vm_bytecode_control_edges.py > dumps/vmtail-wide-1m-w16/vm_bytecode_control_edges.tsv
	python3 vm_bytecode_control_edges.py --markdown --limit 40 > dumps/vmtail-wide-1m-w16/vm_bytecode_control_edges_top.md

bytecode-ir: control-edges instruction-lift
	python3 vm_bytecode_ir.py > dumps/vmtail-wide-1m-w16/vm_bytecode_ir.tsv
	python3 vm_bytecode_ir.py --markdown --limit 50 > dumps/vmtail-wide-1m-w16/vm_bytecode_ir_top.md

bytecode-basic-blocks: bytecode-ir
	python3 vm_bytecode_basic_blocks.py > dumps/vmtail-wide-1m-w16/vm_bytecode_basic_blocks.tsv
	python3 vm_bytecode_basic_blocks.py --edges > dumps/vmtail-wide-1m-w16/vm_bytecode_basic_block_edges.tsv
	python3 vm_bytecode_basic_blocks.py --markdown --limit 40 --detail-blocks 12 --rows-per-block 20 > dumps/vmtail-wide-1m-w16/vm_bytecode_basic_blocks_top.md
	python3 vm_bytecode_basic_blocks.py --loops > dumps/vmtail-wide-1m-w16/vm_bytecode_loops.tsv
	python3 vm_bytecode_basic_blocks.py --loops --markdown --limit 40 > dumps/vmtail-wide-1m-w16/vm_bytecode_loops_top.md

synthetic-spans: bytecode-basic-blocks
	python3 vm_synthetic_span_catalog.py > dumps/vmtail-wide-1m-w16/vm_synthetic_span_catalog.tsv
	python3 vm_synthetic_span_catalog.py --markdown --limit 50 > dumps/vmtail-wide-1m-w16/vm_synthetic_span_top.md

synthetic-tails: synthetic-spans
	python3 vm_synthetic_tail_catalog.py > dumps/vmtail-wide-1m-w16/vm_synthetic_tail_catalog.tsv
	python3 vm_synthetic_tail_catalog.py --markdown --limit 50 > dumps/vmtail-wide-1m-w16/vm_synthetic_tail_top.md

synthetic-tail-lift: synthetic-tails
	python3 vm_synthetic_tail_lift.py > dumps/vmtail-wide-1m-w16/vm_synthetic_tail_lift.tsv
	python3 vm_synthetic_tail_lift.py --markdown --limit 50 > dumps/vmtail-wide-1m-w16/vm_synthetic_tail_lift_top.md

synthetic-successor-gaps: synthetic-tail-lift bytecode-basic-blocks
	python3 vm_synthetic_successor_gap_report.py > dumps/vmtail-wide-1m-w16/vm_synthetic_successor_gaps.tsv
	python3 vm_synthetic_successor_gap_report.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_successor_gaps.md

synthetic-gap-transfer-probe: synthetic-successor-gaps
	python3 vm_synthetic_gap_transfer_probe.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_transfer_probe.tsv
	python3 vm_synthetic_gap_transfer_probe.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_transfer_probe.md

synthetic-gap-dynamic-stitch: synthetic-successor-gaps
	python3 vm_synthetic_gap_dynamic_stitch.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_dynamic_stitch.tsv
	python3 vm_synthetic_gap_dynamic_stitch.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_dynamic_stitch.md

synthetic-gap-chain-probe: synthetic-gap-dynamic-stitch
	python3 vm_synthetic_gap_chain_probe.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_chain_probe.tsv
	python3 vm_synthetic_gap_chain_probe.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_chain_probe.md

synthetic-gap-residual-audit: synthetic-gap-transfer-probe synthetic-gap-dynamic-stitch synthetic-gap-chain-probe synthetic-spans bytecode-basic-blocks
	python3 vm_synthetic_gap_residual_audit.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_residual_audit.tsv
	python3 vm_synthetic_gap_residual_audit.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_residual_audit.md

synthetic-gap-concrete-state-audit: synthetic-gap-residual-audit
	python3 vm_synthetic_gap_concrete_state_audit.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_concrete_state_audit.tsv
	python3 vm_synthetic_gap_concrete_state_audit.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_concrete_state_audit.md

synthetic-gap-state-trace-targets: synthetic-gap-concrete-state-audit synthetic-gap-dynamic-stitch
	python3 vm_synthetic_gap_state_trace_targets.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_state_trace_targets.tsv
	python3 vm_synthetic_gap_state_trace_targets.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_state_trace_targets.md

synthetic-gap-live-context-audit: synthetic-gap-concrete-state-audit synthetic-gap-state-trace-targets
	python3 vm_synthetic_gap_live_context_audit.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_context_audit.tsv
	python3 vm_synthetic_gap_live_context_audit.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_context_audit.md

synthetic-gap-table-read-diagnostic: synthetic-gap-live-context-audit
	python3 vm_synthetic_gap_table_read_diagnostic.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_table_read_diagnostic.tsv
	python3 vm_synthetic_gap_table_read_diagnostic.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_table_read_diagnostic.md

synthetic-gap-table-memory-probe: synthetic-gap-table-read-diagnostic
	python3 vm_synthetic_gap_table_memory_probe.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_table_memory_probe.tsv
	python3 vm_synthetic_gap_table_memory_probe.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_table_memory_probe.md

synthetic-gap-runtime-table-memory-probe: synthetic-gap-table-memory-probe
	python3 vm_synthetic_gap_runtime_table_memory_probe.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_runtime_table_memory_probe.tsv
	python3 vm_synthetic_gap_runtime_table_memory_probe.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_runtime_table_memory_probe.md

synthetic-gap-sampled-control-correlation: synthetic-gap-table-memory-probe sampled-operands
	python3 vm_synthetic_gap_sampled_control_correlation.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_sampled_control_correlation.tsv
	python3 vm_synthetic_gap_sampled_control_correlation.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_sampled_control_correlation.md

synthetic-gap-focused-direct-trace-audit: synthetic-gap-residual-audit bytecode-ir bytecode-basic-blocks
	python3 vm_synthetic_gap_focused_direct_trace_audit.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_focused_direct_trace_audit.tsv
	python3 vm_synthetic_gap_focused_direct_trace_audit.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_focused_direct_trace_audit.md

synthetic-gap-focused-sequence-audit: synthetic-gap-focused-direct-trace-audit
	python3 vm_synthetic_gap_focused_sequence_audit.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_focused_sequence_audit.tsv
	python3 vm_synthetic_gap_focused_sequence_audit.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_focused_sequence_audit.md

synthetic-gap-observed-chain-bridge: synthetic-gap-focused-sequence-audit bytecode-basic-blocks
	python3 vm_synthetic_gap_observed_chain_bridge.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_observed_chain_bridge.tsv
	python3 vm_synthetic_gap_observed_chain_bridge.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_observed_chain_bridge.md

synthetic-gap-observed-chain-replay: synthetic-gap-observed-chain-bridge
	python3 vm_synthetic_gap_observed_chain_replay.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_observed_chain_replay.tsv
	python3 vm_synthetic_gap_observed_chain_replay.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_observed_chain_replay.md

synthetic-gap-chain-slot-reconciliation: synthetic-gap-observed-chain-replay synthetic-gap-transfer-probe synthetic-gap-table-memory-probe synthetic-gap-runtime-table-memory-probe synthetic-gap-sampled-control-correlation
	python3 vm_synthetic_gap_chain_slot_reconciliation.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_chain_slot_reconciliation.tsv
	python3 vm_synthetic_gap_chain_slot_reconciliation.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_chain_slot_reconciliation.md

synthetic-gap-unresolved-family-audit: synthetic-gap-observed-chain-bridge synthetic-gap-transfer-probe synthetic-gap-table-memory-probe synthetic-gap-runtime-table-memory-probe synthetic-gap-sampled-control-correlation
	python3 vm_synthetic_gap_unresolved_family_audit.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_unresolved_family_audit.tsv
	python3 vm_synthetic_gap_unresolved_family_audit.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_unresolved_family_audit.md

synthetic-gap-source299-context-probe: synthetic-gap-unresolved-family-audit
	python3 vm_synthetic_gap_source299_context_probe.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_source299_context_probe.tsv
	python3 vm_synthetic_gap_source299_context_probe.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_source299_context_probe.md

synthetic-gap-source299-ret-patch-probe: synthetic-gap-source299-context-probe
	python3 vm_synthetic_gap_source299_ret_patch_probe.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_source299_ret_patch_probe.tsv
	python3 vm_synthetic_gap_source299_ret_patch_probe.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_source299_ret_patch_probe.md

synthetic-gap-sampled-ret-patch-probe: synthetic-gap-source299-ret-patch-probe
	python3 vm_synthetic_gap_sampled_ret_patch_probe.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_sampled_ret_patch_probe.tsv
	python3 vm_synthetic_gap_sampled_ret_patch_probe.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_sampled_ret_patch_probe.md

synthetic-gap-ret-patch-native-target-atlas: synthetic-gap-sampled-ret-patch-probe
	python3 vm_synthetic_gap_ret_patch_native_target_atlas.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_ret_patch_native_target_atlas.tsv
	python3 vm_synthetic_gap_ret_patch_native_target_atlas.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_ret_patch_native_target_atlas.md

$(NATIVE_RET_PATCH_TARGETS_C): vm_native_ret_patch_targets_pseudocode.py $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv eac.elf
	python3 vm_native_ret_patch_targets_pseudocode.py > $@

native-ret-patch-target-pseudocode: $(NATIVE_RET_PATCH_TARGETS_C)

$(NATIVE_RET_PATCH_EPILOGUES_RETDEC_C): vm_native_ret_patch_epilogues_retdec.py $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv eac.elf
	python3 vm_native_ret_patch_epilogues_retdec.py > $@

native-ret-patch-epilogues-retdec: $(NATIVE_RET_PATCH_EPILOGUES_RETDEC_C)

$(NATIVE_RET_PATCH_SOURCE278_RETDEC_C): vm_native_ret_patch_source278_retdec.py $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv eac.elf
	python3 vm_native_ret_patch_source278_retdec.py > $@

native-ret-patch-source278-retdec: $(NATIVE_RET_PATCH_SOURCE278_RETDEC_C)

$(RET_PATCH_FOLLOWUPS_C): vm_native_ret_patch_followups_dump $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv
	./vm_native_ret_patch_followups_dump --c > $@

$(RET_PATCH_FOLLOWUPS_TSV): vm_native_ret_patch_followups_dump $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv
	./vm_native_ret_patch_followups_dump --tsv > $@

$(RET_PATCH_FOLLOWUPS_MD): vm_native_ret_patch_followups_dump $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv
	./vm_native_ret_patch_followups_dump --markdown > $@

native-ret-patch-followups: $(RET_PATCH_FOLLOWUPS_C) $(RET_PATCH_FOLLOWUPS_TSV) $(RET_PATCH_FOLLOWUPS_MD)

$(RET_PATCH_FOLLOWUP_RETDEC_C): vm_native_ret_patch_followup_retdec_dump $(RET_PATCH_FOLLOWUPS_TSV) eac.elf
	./vm_native_ret_patch_followup_retdec_dump > $@

native-ret-patch-followup-retdec: $(RET_PATCH_FOLLOWUP_RETDEC_C)

$(NATIVE_OBFUSCATED_ISLANDS_C): vm_native_obfuscated_islands_dump $(RET_PATCH_FOLLOWUPS_TSV)
	./vm_native_obfuscated_islands_dump --c > $@

$(NATIVE_OBFUSCATED_ISLANDS_TSV): vm_native_obfuscated_islands_dump $(RET_PATCH_FOLLOWUPS_TSV)
	./vm_native_obfuscated_islands_dump --tsv > $@

$(NATIVE_OBFUSCATED_ISLANDS_MD): vm_native_obfuscated_islands_dump $(RET_PATCH_FOLLOWUPS_TSV)
	./vm_native_obfuscated_islands_dump --markdown > $@

native-obfuscated-islands: $(NATIVE_OBFUSCATED_ISLANDS_C) $(NATIVE_OBFUSCATED_ISLANDS_TSV) $(NATIVE_OBFUSCATED_ISLANDS_MD)

$(NATIVE_OBFUSCATED_SECOND_STAGE_C): vm_native_obfuscated_second_stage_dump $(NATIVE_OBFUSCATED_ISLANDS_TSV)
	./vm_native_obfuscated_second_stage_dump --c > $@

$(NATIVE_OBFUSCATED_SECOND_STAGE_TSV): vm_native_obfuscated_second_stage_dump $(NATIVE_OBFUSCATED_ISLANDS_TSV)
	./vm_native_obfuscated_second_stage_dump --tsv > $@

$(NATIVE_OBFUSCATED_SECOND_STAGE_MD): vm_native_obfuscated_second_stage_dump $(NATIVE_OBFUSCATED_ISLANDS_TSV)
	./vm_native_obfuscated_second_stage_dump --markdown > $@

native-obfuscated-second-stage: $(NATIVE_OBFUSCATED_SECOND_STAGE_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_MD)

$(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_C): vm_native_obfuscated_second_stage_dynamic_dump $(NATIVE_OBFUSCATED_SECOND_STAGE_TSV) $(PRIMARY_DIR)/vm_handler_table.tsv $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_RUNS)
	./vm_native_obfuscated_second_stage_dynamic_dump --c > $@

$(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_TSV): vm_native_obfuscated_second_stage_dynamic_dump $(NATIVE_OBFUSCATED_SECOND_STAGE_TSV) $(PRIMARY_DIR)/vm_handler_table.tsv $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_RUNS)
	./vm_native_obfuscated_second_stage_dynamic_dump --tsv > $@

$(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_MD): vm_native_obfuscated_second_stage_dynamic_dump $(NATIVE_OBFUSCATED_SECOND_STAGE_TSV) $(PRIMARY_DIR)/vm_handler_table.tsv $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_RUNS)
	./vm_native_obfuscated_second_stage_dynamic_dump --markdown > $@

native-obfuscated-second-stage-dynamic: $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_MD)

$(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_C): vm_native_obfuscated_second_stage_slot_proof_dump $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_TSV) eac.elf
	./vm_native_obfuscated_second_stage_slot_proof_dump --c > $@

$(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_TSV): vm_native_obfuscated_second_stage_slot_proof_dump $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_TSV) eac.elf
	./vm_native_obfuscated_second_stage_slot_proof_dump --tsv > $@

$(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_MD): vm_native_obfuscated_second_stage_slot_proof_dump $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_TSV) eac.elf
	./vm_native_obfuscated_second_stage_slot_proof_dump --markdown > $@

native-obfuscated-second-stage-slot-proof: $(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_MD)

$(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_C): vm_native_obfuscated_second_stage_stack_source_dump eac.elf
	./vm_native_obfuscated_second_stage_stack_source_dump --c > $@

$(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_TSV): vm_native_obfuscated_second_stage_stack_source_dump eac.elf
	./vm_native_obfuscated_second_stage_stack_source_dump --tsv > $@

$(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_MD): vm_native_obfuscated_second_stage_stack_source_dump eac.elf
	./vm_native_obfuscated_second_stage_stack_source_dump --markdown > $@

native-obfuscated-second-stage-stack-source: $(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_MD)

$(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_C): vm_native_obfuscated_second_stage_rbx_provenance_dump $(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_RUNS)
	./vm_native_obfuscated_second_stage_rbx_provenance_dump --c > $@

$(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_TSV): vm_native_obfuscated_second_stage_rbx_provenance_dump $(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_RUNS)
	./vm_native_obfuscated_second_stage_rbx_provenance_dump --tsv > $@

$(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_MD): vm_native_obfuscated_second_stage_rbx_provenance_dump $(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_RUNS)
	./vm_native_obfuscated_second_stage_rbx_provenance_dump --markdown > $@

native-obfuscated-second-stage-rbx-provenance: $(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_MD)

$(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_C): vm_native_obfuscated_second_stage_model_dump $(NATIVE_OBFUSCATED_SECOND_STAGE_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_TSV)
	./vm_native_obfuscated_second_stage_model_dump --c > $@

$(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_TSV): vm_native_obfuscated_second_stage_model_dump $(NATIVE_OBFUSCATED_SECOND_STAGE_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_TSV)
	./vm_native_obfuscated_second_stage_model_dump --tsv > $@

$(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_MD): vm_native_obfuscated_second_stage_model_dump $(NATIVE_OBFUSCATED_SECOND_STAGE_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_TSV)
	./vm_native_obfuscated_second_stage_model_dump --markdown > $@

native-obfuscated-second-stage-model: $(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_MD)

$(NATIVE_OBFUSCATED_CONTROL_MODEL_C): vm_native_obfuscated_control_model_dump $(NATIVE_OBFUSCATED_ISLANDS_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_TSV)
	./vm_native_obfuscated_control_model_dump --c > $@

$(NATIVE_OBFUSCATED_CONTROL_MODEL_TSV): vm_native_obfuscated_control_model_dump $(NATIVE_OBFUSCATED_ISLANDS_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_TSV)
	./vm_native_obfuscated_control_model_dump --tsv > $@

$(NATIVE_OBFUSCATED_CONTROL_MODEL_MD): vm_native_obfuscated_control_model_dump $(NATIVE_OBFUSCATED_ISLANDS_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_TSV)
	./vm_native_obfuscated_control_model_dump --markdown > $@

native-obfuscated-control-model: $(NATIVE_OBFUSCATED_CONTROL_MODEL_C) $(NATIVE_OBFUSCATED_CONTROL_MODEL_TSV) $(NATIVE_OBFUSCATED_CONTROL_MODEL_MD)

$(NATIVE_RET_PATCH_HIDDEN_BRIDGE_C): vm_native_ret_patch_hidden_bridge_dump $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv $(NATIVE_OBFUSCATED_CONTROL_MODEL_TSV)
	./vm_native_ret_patch_hidden_bridge_dump --c > $@

$(NATIVE_RET_PATCH_HIDDEN_BRIDGE_TSV): vm_native_ret_patch_hidden_bridge_dump $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv $(NATIVE_OBFUSCATED_CONTROL_MODEL_TSV)
	./vm_native_ret_patch_hidden_bridge_dump --tsv > $@

$(NATIVE_RET_PATCH_HIDDEN_BRIDGE_MD): vm_native_ret_patch_hidden_bridge_dump $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv $(NATIVE_OBFUSCATED_CONTROL_MODEL_TSV)
	./vm_native_ret_patch_hidden_bridge_dump --markdown > $@

native-ret-patch-hidden-bridge: $(NATIVE_RET_PATCH_HIDDEN_BRIDGE_C) $(NATIVE_RET_PATCH_HIDDEN_BRIDGE_TSV) $(NATIVE_RET_PATCH_HIDDEN_BRIDGE_MD)

$(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_C): vm_native_handler_environment_coverage_dump $(PRIMARY_DIR)/vm_handler_table.tsv $(PRIMARY_DIR)/vm_trace_coverage_matrix.tsv
	./vm_native_handler_environment_coverage_dump --c > $@

$(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_TSV): vm_native_handler_environment_coverage_dump $(PRIMARY_DIR)/vm_handler_table.tsv $(PRIMARY_DIR)/vm_trace_coverage_matrix.tsv
	./vm_native_handler_environment_coverage_dump --tsv > $@

$(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_MD): vm_native_handler_environment_coverage_dump $(PRIMARY_DIR)/vm_handler_table.tsv $(PRIMARY_DIR)/vm_trace_coverage_matrix.tsv
	./vm_native_handler_environment_coverage_dump --markdown > $@

native-handler-environment-coverage: $(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_C) $(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_TSV) $(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_MD)

$(CONFIG_COVERAGE_FRONTIER_C): vm_config_coverage_frontier_dump $(PRIMARY_DIR)/vm_trace_coverage_matrix.tsv $(PRIMARY_DIR)/vm_static_coverage_audit.tsv $(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_TSV) $(PRIMARY_DIR)/vm_path_microcode_catalog_gpr_seeded_fast.tsv
	./vm_config_coverage_frontier_dump --c > $@

$(CONFIG_COVERAGE_FRONTIER_TSV): vm_config_coverage_frontier_dump $(PRIMARY_DIR)/vm_trace_coverage_matrix.tsv $(PRIMARY_DIR)/vm_static_coverage_audit.tsv $(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_TSV) $(PRIMARY_DIR)/vm_path_microcode_catalog_gpr_seeded_fast.tsv
	./vm_config_coverage_frontier_dump --tsv > $@

$(CONFIG_COVERAGE_FRONTIER_MD): vm_config_coverage_frontier_dump $(PRIMARY_DIR)/vm_trace_coverage_matrix.tsv $(PRIMARY_DIR)/vm_static_coverage_audit.tsv $(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_TSV) $(PRIMARY_DIR)/vm_path_microcode_catalog_gpr_seeded_fast.tsv
	./vm_config_coverage_frontier_dump --markdown > $@

config-coverage-frontier: $(CONFIG_COVERAGE_FRONTIER_C) $(CONFIG_COVERAGE_FRONTIER_TSV) $(CONFIG_COVERAGE_FRONTIER_MD)

$(BINARY_DATA_SECTIONS_C): vm_binary_data_sections_dump eac.elf
	./vm_binary_data_sections_dump --c > $@

$(BINARY_DATA_SECTIONS_TSV): vm_binary_data_sections_dump eac.elf
	./vm_binary_data_sections_dump --tsv > $@

$(BINARY_DATA_SECTIONS_MD): vm_binary_data_sections_dump eac.elf
	./vm_binary_data_sections_dump --markdown > $@

binary-data-sections: $(BINARY_DATA_SECTIONS_C) $(BINARY_DATA_SECTIONS_TSV) $(BINARY_DATA_SECTIONS_MD)

$(STATIC_ONLY_HANDLER_QUEUE_C): vm_static_only_handler_queue_dump $(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_TSV) $(HANDLER_RETDEC_INDEX_TSV) $(PRIMARY_DIR)/vm_handler_semantics.tsv
	./vm_static_only_handler_queue_dump --c > $@

$(STATIC_ONLY_HANDLER_QUEUE_TSV): vm_static_only_handler_queue_dump $(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_TSV) $(HANDLER_RETDEC_INDEX_TSV) $(PRIMARY_DIR)/vm_handler_semantics.tsv
	./vm_static_only_handler_queue_dump --tsv > $@

$(STATIC_ONLY_HANDLER_QUEUE_MD): vm_static_only_handler_queue_dump $(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_TSV) $(HANDLER_RETDEC_INDEX_TSV) $(PRIMARY_DIR)/vm_handler_semantics.tsv
	./vm_static_only_handler_queue_dump --markdown > $@

static-only-handler-queue: $(STATIC_ONLY_HANDLER_QUEUE_C) $(STATIC_ONLY_HANDLER_QUEUE_TSV) $(STATIC_ONLY_HANDLER_QUEUE_MD)

$(STATIC_ONLY_TIER0_MODELS_C): vm_static_only_tier0_models_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier0_models_dump --c > $@

$(STATIC_ONLY_TIER0_MODELS_TSV): vm_static_only_tier0_models_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier0_models_dump --tsv > $@

$(STATIC_ONLY_TIER0_MODELS_MD): vm_static_only_tier0_models_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier0_models_dump --markdown > $@

static-only-tier0-models: $(STATIC_ONLY_TIER0_MODELS_C) $(STATIC_ONLY_TIER0_MODELS_TSV) $(STATIC_ONLY_TIER0_MODELS_MD)

$(STATIC_ONLY_TIER1_MODELS_C): vm_static_only_tier1_models_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier1_models_dump --c > $@

$(STATIC_ONLY_TIER1_MODELS_TSV): vm_static_only_tier1_models_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier1_models_dump --tsv > $@

$(STATIC_ONLY_TIER1_MODELS_MD): vm_static_only_tier1_models_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier1_models_dump --markdown > $@

static-only-tier1-models: $(STATIC_ONLY_TIER1_MODELS_C) $(STATIC_ONLY_TIER1_MODELS_TSV) $(STATIC_ONLY_TIER1_MODELS_MD)

$(STATIC_ONLY_TIER2_SPLIT_C): vm_static_only_tier2_split_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier2_split_dump --c > $@

$(STATIC_ONLY_TIER2_SPLIT_TSV): vm_static_only_tier2_split_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier2_split_dump --tsv > $@

$(STATIC_ONLY_TIER2_SPLIT_MD): vm_static_only_tier2_split_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier2_split_dump --markdown > $@

static-only-tier2-split: $(STATIC_ONLY_TIER2_SPLIT_C) $(STATIC_ONLY_TIER2_SPLIT_TSV) $(STATIC_ONLY_TIER2_SPLIT_MD)

$(STATIC_ONLY_TIER3_SHARED_C): vm_static_only_tier3_shared_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier3_shared_dump --c > $@

$(STATIC_ONLY_TIER3_SHARED_TSV): vm_static_only_tier3_shared_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier3_shared_dump --tsv > $@

$(STATIC_ONLY_TIER3_SHARED_MD): vm_static_only_tier3_shared_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier3_shared_dump --markdown > $@

static-only-tier3-shared: $(STATIC_ONLY_TIER3_SHARED_C) $(STATIC_ONLY_TIER3_SHARED_TSV) $(STATIC_ONLY_TIER3_SHARED_MD)

$(STATIC_ONLY_TIER4_CALLRET_C): vm_static_only_tier4_callret_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier4_callret_dump --c > $@

$(STATIC_ONLY_TIER4_CALLRET_TSV): vm_static_only_tier4_callret_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier4_callret_dump --tsv > $@

$(STATIC_ONLY_TIER4_CALLRET_MD): vm_static_only_tier4_callret_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier4_callret_dump --markdown > $@

static-only-tier4-callret: $(STATIC_ONLY_TIER4_CALLRET_C) $(STATIC_ONLY_TIER4_CALLRET_TSV) $(STATIC_ONLY_TIER4_CALLRET_MD)

$(STATIC_ONLY_TIER5_LARGE_C): vm_static_only_tier5_large_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier5_large_dump --c > $@

$(STATIC_ONLY_TIER5_LARGE_TSV): vm_static_only_tier5_large_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier5_large_dump --tsv > $@

$(STATIC_ONLY_TIER5_LARGE_MD): vm_static_only_tier5_large_dump $(STATIC_ONLY_HANDLER_QUEUE_TSV)
	./vm_static_only_tier5_large_dump --markdown > $@

static-only-tier5-large: $(STATIC_ONLY_TIER5_LARGE_C) $(STATIC_ONLY_TIER5_LARGE_TSV) $(STATIC_ONLY_TIER5_LARGE_MD)

$(TARGET_ONLY_HANDLER_RETDEC_C): vm_target_only_handlers_retdec.py $(PRIMARY_DIR)/vm_handler_semantics.tsv $(PRIMARY_DIR)/vm_handler_table.tsv eac.elf
	python3 vm_target_only_handlers_retdec.py > $@

target-only-handlers-retdec: $(TARGET_ONLY_HANDLER_RETDEC_C)

$(PRIMARY_DIR)/vm_unobserved_handlers_retdec_batch%.c: vm_unobserved_handlers_retdec_batch.py $(PRIMARY_DIR)/vm_handler_semantics.tsv $(PRIMARY_DIR)/vm_handler_table.tsv eac.elf
	python3 vm_unobserved_handlers_retdec_batch.py --batch-index $* --batch-size 24 > $@

unobserved-handlers-retdec-batch0: $(PRIMARY_DIR)/vm_unobserved_handlers_retdec_batch00.c

unobserved-handlers-retdec: $(UNOBSERVED_HANDLER_RETDEC_CS)

$(WEAK_HANDLER_RETDEC_C): vm_weak_handlers_retdec.py $(PRIMARY_DIR)/vm_microcode_catalog.tsv $(PRIMARY_DIR)/vm_handler_table.tsv eac.elf
	python3 vm_weak_handlers_retdec.py > $@

weak-handlers-retdec: $(WEAK_HANDLER_RETDEC_C)

$(PRIMARY_DIR)/vm_validated_handlers_retdec_batch%.c: vm_validated_handlers_retdec_batch.py $(PRIMARY_DIR)/vm_microcode_catalog.tsv $(PRIMARY_DIR)/vm_handler_table.tsv eac.elf
	python3 vm_validated_handlers_retdec_batch.py --batch-index $* --batch-size 24 > $@

validated-handlers-retdec: $(VALIDATED_HANDLER_RETDEC_CS)

$(HANDLER_RETDEC_INDEX_TSV): vm_handler_retdec_index $(TARGET_ONLY_HANDLER_RETDEC_C) $(UNOBSERVED_HANDLER_RETDEC_CS) $(WEAK_HANDLER_RETDEC_C) $(VALIDATED_HANDLER_RETDEC_CS)
	./vm_handler_retdec_index > $@

$(HANDLER_RETDEC_INDEX_MD): vm_handler_retdec_index $(TARGET_ONLY_HANDLER_RETDEC_C) $(UNOBSERVED_HANDLER_RETDEC_CS) $(WEAK_HANDLER_RETDEC_C) $(VALIDATED_HANDLER_RETDEC_CS)
	./vm_handler_retdec_index --markdown > $@

handler-retdec-index: $(HANDLER_RETDEC_INDEX_TSV) $(HANDLER_RETDEC_INDEX_MD)

$(UNRESOLVED_FAMILY_C): vm_unresolved_family_chains_dump $(PRIMARY_DIR)/vm_synthetic_gap_unresolved_family_audit.tsv $(PRIMARY_DIR)/vm_synthetic_gap_chain_slot_reconciliation.tsv $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv
	./vm_unresolved_family_chains_dump > $@

unresolved-family-chains: $(UNRESOLVED_FAMILY_C)

synthetic-gap-live-snapshot-transfer-probe: synthetic-gap-unresolved-family-audit
	python3 vm_synthetic_gap_live_snapshot_transfer_probe.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_snapshot_transfer_probe.tsv
	python3 vm_synthetic_gap_live_snapshot_transfer_probe.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_snapshot_transfer_probe.md

synthetic-gap-live-table-evidence: synthetic-gap-live-snapshot-transfer-probe
	python3 vm_synthetic_gap_live_table_evidence.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_table_evidence.tsv
	python3 vm_synthetic_gap_live_table_evidence.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_table_evidence.md

synthetic-gap-symbolic-successors: synthetic-gap-transfer-probe synthetic-gap-dynamic-stitch bytecode-ir bytecode-basic-blocks
	python3 vm_synthetic_gap_symbolic_successors.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_symbolic_successors.tsv
	python3 vm_synthetic_gap_symbolic_successors.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_symbolic_successors.md

synthetic-gap-live-in-roles: synthetic-gap-transfer-probe
	python3 vm_synthetic_gap_live_in_roles.py $(GPR_RUN_ARGS) $(TAIL_MEM_RUN_ARGS) > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_in_roles.tsv
	python3 vm_synthetic_gap_live_in_roles.py $(GPR_RUN_ARGS) $(TAIL_MEM_RUN_ARGS) --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_in_roles.md

final-tail-site-probe: synthetic-gap-live-in-roles
	python3 vm_live_in_final_tail_site_probe.py > dumps/vmtail-wide-1m-w16/vm_live_in_final_tail_site_probe.tsv
	python3 vm_live_in_final_tail_site_probe.py --markdown > dumps/vmtail-wide-1m-w16/vm_live_in_final_tail_site_probe.md

synthetic-gap-live-in-reentry-probe: synthetic-gap-dynamic-stitch synthetic-gap-live-in-roles final-tail-site-probe
	python3 vm_synthetic_gap_live_in_reentry_probe.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_in_reentry_probe.tsv
	python3 vm_synthetic_gap_live_in_reentry_probe.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_in_reentry_probe.md

synthetic-gap-allstatic-reentry-probe: synthetic-gap-live-in-reentry-probe
	python3 vm_synthetic_gap_allstatic_reentry_probe.py > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_allstatic_reentry_probe.tsv
	python3 vm_synthetic_gap_allstatic_reentry_probe.py --markdown > dumps/vmtail-wide-1m-w16/vm_synthetic_gap_allstatic_reentry_probe.md

$(PSEUDOCODE_TOP_C): vm_pseudocode_dump.py
	python3 vm_pseudocode_dump.py --limit-blocks 60 --rows-per-block 32 > $@

$(PROGRAM_PSEUDOCODE_TOP_C): vm_program_pseudocode_dump.py vm_pseudocode_dump.py
	python3 vm_program_pseudocode_dump.py --limit-blocks 80 --rows-per-block 80 > $@

pseudocode: $(PSEUDOCODE_TOP_C) $(PROGRAM_PSEUDOCODE_TOP_C)

$(PROGRAM_PSEUDOCODE_FULL_C): vm_program_pseudocode_dump.py vm_pseudocode_dump.py
	python3 vm_program_pseudocode_dump.py --limit-blocks 0 --rows-per-block 0 > $@

pseudocode-full: $(PROGRAM_PSEUDOCODE_FULL_C)

$(HANDLERS_PSEUDOCODE_C): vm_handler_pseudocode_dump.py $(PRIMARY_DIR)/vm_handler_semantics.tsv $(PRIMARY_DIR)/vm_handler_table.tsv $(STATIC_ONLY_HANDLER_QUEUE_TSV) $(STATIC_ONLY_TIER0_MODELS_TSV) $(STATIC_ONLY_TIER1_MODELS_TSV) $(STATIC_ONLY_TIER2_SPLIT_TSV) $(STATIC_ONLY_TIER3_SHARED_TSV) $(STATIC_ONLY_TIER4_CALLRET_TSV) $(STATIC_ONLY_TIER5_LARGE_TSV)
	python3 vm_handler_pseudocode_dump.py --all > $@

$(HANDLERS_HOT_PSEUDOCODE_C): vm_handler_pseudocode_dump.py $(PRIMARY_DIR)/vm_handler_semantics.tsv $(PRIMARY_DIR)/vm_handler_table.tsv $(STATIC_ONLY_HANDLER_QUEUE_TSV) $(STATIC_ONLY_TIER0_MODELS_TSV) $(STATIC_ONLY_TIER1_MODELS_TSV) $(STATIC_ONLY_TIER2_SPLIT_TSV) $(STATIC_ONLY_TIER3_SHARED_TSV) $(STATIC_ONLY_TIER4_CALLRET_TSV) $(STATIC_ONLY_TIER5_LARGE_TSV)
	python3 vm_handler_pseudocode_dump.py --limit 80 > $@

handler-pseudocode: $(HANDLERS_PSEUDOCODE_C) $(HANDLERS_HOT_PSEUDOCODE_C)

$(PATH_HANDLERS_PSEUDOCODE_C): vm_path_pseudocode_dump.py $(PRIMARY_DIR)/vm_handler_semantics.tsv $(PRIMARY_DIR)/vm_handler_table.tsv
	python3 vm_path_pseudocode_dump.py --validated-only > $@

$(PATH_HANDLERS_HOT_PSEUDOCODE_C): vm_path_pseudocode_dump.py $(PRIMARY_DIR)/vm_handler_semantics.tsv $(PRIMARY_DIR)/vm_handler_table.tsv
	python3 vm_path_pseudocode_dump.py --validated-only --limit 80 > $@

$(PATH_HANDLERS_FRONTIER_PSEUDOCODE_C): vm_path_pseudocode_dump.py $(PRIMARY_DIR)/vm_handler_semantics.tsv $(PRIMARY_DIR)/vm_handler_table.tsv
	python3 vm_path_pseudocode_dump.py --unvalidated-only > $@

$(PATH_FRONTIER_SLOT_AUDIT_C): vm_path_frontier_slot_audit.py $(PRIMARY_DIR)/vm_path_microcode_catalog_gpr_seeded_fast.tsv $(TRACE) eac.elf
	python3 vm_path_frontier_slot_audit.py --c > $@

$(PATH_FRONTIER_SLOT_AUDIT_TSV): vm_path_frontier_slot_audit.py $(PRIMARY_DIR)/vm_path_microcode_catalog_gpr_seeded_fast.tsv $(TRACE) eac.elf
	python3 vm_path_frontier_slot_audit.py > $@

$(PATH_FRONTIER_SLOT_AUDIT_MD): vm_path_frontier_slot_audit.py $(PRIMARY_DIR)/vm_path_microcode_catalog_gpr_seeded_fast.tsv $(TRACE) eac.elf
	python3 vm_path_frontier_slot_audit.py --markdown > $@

path-frontier-slot-audit: $(PATH_FRONTIER_SLOT_AUDIT_C) $(PATH_FRONTIER_SLOT_AUDIT_TSV) $(PATH_FRONTIER_SLOT_AUDIT_MD)

$(NATIVE_EXECUTABLE_COVERAGE_AUDIT_C): vm_native_executable_coverage_audit.py eac.elf $(HANDLER_RETDEC_INDEX_TSV) $(RET_PATCH_FOLLOWUP_RETDEC_C) $(NATIVE_RET_PATCH_EPILOGUES_RETDEC_C) $(NATIVE_RET_PATCH_SOURCE278_RETDEC_C) $(NATIVE_GAP_RETDEC_BATCH_CS) $(TARGET_ONLY_HANDLER_RETDEC_C) $(UNOBSERVED_HANDLER_RETDEC_CS) $(WEAK_HANDLER_RETDEC_C) $(VALIDATED_HANDLER_RETDEC_CS) $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv $(NATIVE_OBFUSCATED_ISLANDS_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_TSV)
	python3 vm_native_executable_coverage_audit.py --c > $@

$(NATIVE_EXECUTABLE_COVERAGE_AUDIT_TSV): vm_native_executable_coverage_audit.py eac.elf $(HANDLER_RETDEC_INDEX_TSV) $(RET_PATCH_FOLLOWUP_RETDEC_C) $(NATIVE_RET_PATCH_EPILOGUES_RETDEC_C) $(NATIVE_RET_PATCH_SOURCE278_RETDEC_C) $(NATIVE_GAP_RETDEC_BATCH_CS) $(TARGET_ONLY_HANDLER_RETDEC_C) $(UNOBSERVED_HANDLER_RETDEC_CS) $(WEAK_HANDLER_RETDEC_C) $(VALIDATED_HANDLER_RETDEC_CS) $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv $(NATIVE_OBFUSCATED_ISLANDS_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_TSV)
	python3 vm_native_executable_coverage_audit.py > $@

$(NATIVE_EXECUTABLE_COVERAGE_AUDIT_MD): vm_native_executable_coverage_audit.py eac.elf $(HANDLER_RETDEC_INDEX_TSV) $(RET_PATCH_FOLLOWUP_RETDEC_C) $(NATIVE_RET_PATCH_EPILOGUES_RETDEC_C) $(NATIVE_RET_PATCH_SOURCE278_RETDEC_C) $(NATIVE_GAP_RETDEC_BATCH_CS) $(TARGET_ONLY_HANDLER_RETDEC_C) $(UNOBSERVED_HANDLER_RETDEC_CS) $(WEAK_HANDLER_RETDEC_C) $(VALIDATED_HANDLER_RETDEC_CS) $(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv $(NATIVE_OBFUSCATED_ISLANDS_TSV) $(NATIVE_OBFUSCATED_SECOND_STAGE_TSV)
	python3 vm_native_executable_coverage_audit.py --markdown > $@

native-executable-coverage-audit: $(NATIVE_EXECUTABLE_COVERAGE_AUDIT_C) $(NATIVE_EXECUTABLE_COVERAGE_AUDIT_TSV) $(NATIVE_EXECUTABLE_COVERAGE_AUDIT_MD)

$(NATIVE_FUNCTION_INVENTORY_TSV): vm_native_function_inventory.py eac.elf
	python3 vm_native_function_inventory.py > $@

$(NATIVE_FUNCTION_INVENTORY_C): vm_native_function_inventory.py $(NATIVE_FUNCTION_INVENTORY_TSV)
	python3 vm_native_function_inventory.py --from-tsv $(NATIVE_FUNCTION_INVENTORY_TSV) --c > $@

$(NATIVE_FUNCTION_INVENTORY_MD): vm_native_function_inventory.py $(NATIVE_FUNCTION_INVENTORY_TSV)
	python3 vm_native_function_inventory.py --from-tsv $(NATIVE_FUNCTION_INVENTORY_TSV) --markdown > $@

native-function-inventory: $(NATIVE_FUNCTION_INVENTORY_C) $(NATIVE_FUNCTION_INVENTORY_TSV) $(NATIVE_FUNCTION_INVENTORY_MD)

$(NATIVE_GAP_RETDEC_BATCH00_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 0 > $@

$(NATIVE_GAP_RETDEC_BATCH01_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 1 > $@

$(NATIVE_GAP_RETDEC_BATCH02_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 2 > $@

$(NATIVE_GAP_RETDEC_BATCH03_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 3 > $@

$(NATIVE_GAP_RETDEC_BATCH04_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 4 > $@

$(NATIVE_GAP_RETDEC_BATCH05_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 5 > $@

$(NATIVE_GAP_RETDEC_BATCH06_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 6 > $@

$(NATIVE_GAP_RETDEC_BATCH07_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 7 > $@

$(NATIVE_GAP_RETDEC_BATCH08_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 8 > $@

$(NATIVE_GAP_RETDEC_BATCH09_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 9 > $@

$(NATIVE_GAP_RETDEC_BATCH10_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 10 > $@

$(NATIVE_GAP_RETDEC_BATCH11_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 11 > $@

$(NATIVE_GAP_RETDEC_BATCH12_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 12 > $@

$(NATIVE_GAP_RETDEC_BATCH13_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 13 > $@

$(NATIVE_GAP_RETDEC_BATCH14_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 14 > $@

$(NATIVE_GAP_RETDEC_BATCH15_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 15 > $@

$(NATIVE_GAP_RETDEC_BATCH16_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 16 > $@

$(NATIVE_GAP_RETDEC_BATCH17_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 17 > $@

$(NATIVE_GAP_RETDEC_BATCH18_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 18 > $@

$(NATIVE_GAP_RETDEC_BATCH19_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 19 > $@

$(NATIVE_GAP_RETDEC_BATCH20_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 20 > $@

$(NATIVE_GAP_RETDEC_BATCH21_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 21 > $@

$(NATIVE_GAP_RETDEC_BATCH22_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 22 > $@

$(NATIVE_GAP_RETDEC_BATCH23_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 23 > $@

$(NATIVE_GAP_RETDEC_BATCH24_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 24 > $@

$(NATIVE_GAP_RETDEC_BATCH25_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 25 > $@

$(NATIVE_GAP_RETDEC_BATCH26_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 26 > $@

$(NATIVE_GAP_RETDEC_BATCH27_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 27 > $@

$(NATIVE_GAP_RETDEC_BATCH28_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 28 > $@

$(NATIVE_GAP_RETDEC_BATCH29_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 29 > $@

$(NATIVE_GAP_RETDEC_BATCH30_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 30 > $@

$(NATIVE_GAP_RETDEC_BATCH31_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 31 > $@

$(NATIVE_GAP_RETDEC_BATCH32_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 32 > $@

$(NATIVE_GAP_RETDEC_BATCH33_C): vm_native_gap_retdec_batch.py eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 33 > $@

$(NATIVE_GAP_RETDEC_BATCH34_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch34.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 34 --ranges-file native_gap_retdec_batch34.ranges > $@

$(NATIVE_GAP_RETDEC_BATCH35_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch35.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 35 --ranges-file native_gap_retdec_batch35.ranges > $@

$(NATIVE_GAP_RETDEC_BATCH36_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch36.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 36 --ranges-file native_gap_retdec_batch36.ranges > $@

$(NATIVE_GAP_RETDEC_BATCH37_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch37.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 37 --ranges-file native_gap_retdec_batch37.ranges > $@

$(NATIVE_GAP_RETDEC_BATCH38_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch38.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 38 --ranges-file native_gap_retdec_batch38.ranges > $@

$(NATIVE_GAP_RETDEC_BATCH39_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch39.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 39 --ranges-file native_gap_retdec_batch39.ranges > $@

$(NATIVE_GAP_RETDEC_BATCH40_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch40.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 40 --ranges-file native_gap_retdec_batch40.ranges > $@

$(NATIVE_GAP_RETDEC_BATCH41_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch41.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 41 --ranges-file native_gap_retdec_batch41.ranges > $@

$(NATIVE_GAP_RETDEC_BATCH42_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch42.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 42 --ranges-file native_gap_retdec_batch42.ranges > $@

$(NATIVE_GAP_RETDEC_BATCH43_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch43.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 43 --ranges-file native_gap_retdec_batch43.ranges > $@

$(NATIVE_GAP_RETDEC_BATCH44_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch44.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 44 --ranges-file native_gap_retdec_batch44.ranges > $@

$(NATIVE_GAP_RETDEC_BATCH45_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch45.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 45 --ranges-file native_gap_retdec_batch45.ranges > $@

$(NATIVE_GAP_RETDEC_BATCH46_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch46.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 46 --ranges-file native_gap_retdec_batch46.ranges > $@

.PHONY: native-gap-retdec-batch47
$(NATIVE_GAP_RETDEC_BATCH47_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch47.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 47 --ranges-file native_gap_retdec_batch47.ranges > $@

.PHONY: native-gap-retdec-batch48
$(NATIVE_GAP_RETDEC_BATCH48_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch48.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 48 --ranges-file native_gap_retdec_batch48.ranges > $@

.PHONY: native-gap-retdec-batch49
$(NATIVE_GAP_RETDEC_BATCH49_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch49.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 49 --ranges-file native_gap_retdec_batch49.ranges > $@

.PHONY: native-gap-retdec-batch50
$(NATIVE_GAP_RETDEC_BATCH50_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch50.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 50 --ranges-file native_gap_retdec_batch50.ranges > $@

.PHONY: native-gap-retdec-batch51
$(NATIVE_GAP_RETDEC_BATCH51_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch51.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 51 --ranges-file native_gap_retdec_batch51.ranges > $@

.PHONY: native-gap-retdec-batch52
$(NATIVE_GAP_RETDEC_BATCH52_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch52.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 52 --ranges-file native_gap_retdec_batch52.ranges > $@

.PHONY: native-gap-retdec-batch53
$(NATIVE_GAP_RETDEC_BATCH53_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch53.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 53 --ranges-file native_gap_retdec_batch53.ranges > $@

.PHONY: native-gap-retdec-batch54
$(NATIVE_GAP_RETDEC_BATCH54_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch54.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 54 --ranges-file native_gap_retdec_batch54.ranges > $@

.PHONY: native-gap-retdec-batch55
$(NATIVE_GAP_RETDEC_BATCH55_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch55.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 55 --ranges-file native_gap_retdec_batch55.ranges > $@

.PHONY: native-gap-retdec-batch56
$(NATIVE_GAP_RETDEC_BATCH56_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch56.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 56 --ranges-file native_gap_retdec_batch56.ranges > $@

.PHONY: native-gap-retdec-batch57
$(NATIVE_GAP_RETDEC_BATCH57_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch57.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 57 --ranges-file native_gap_retdec_batch57.ranges > $@

.PHONY: native-gap-retdec-batch58
$(NATIVE_GAP_RETDEC_BATCH58_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch58.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 58 --ranges-file native_gap_retdec_batch58.ranges > $@

.PHONY: native-gap-retdec-batch59
$(NATIVE_GAP_RETDEC_BATCH59_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch59.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 59 --ranges-file native_gap_retdec_batch59.ranges > $@

.PHONY: native-gap-retdec-batch60
$(NATIVE_GAP_RETDEC_BATCH60_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch60.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 60 --ranges-file native_gap_retdec_batch60.ranges > $@

.PHONY: native-gap-retdec-batch61
$(NATIVE_GAP_RETDEC_BATCH61_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch61.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 61 --ranges-file native_gap_retdec_batch61.ranges > $@

.PHONY: native-gap-retdec-batch62
$(NATIVE_GAP_RETDEC_BATCH62_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch62.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 62 --ranges-file native_gap_retdec_batch62.ranges > $@

.PHONY: native-gap-retdec-batch63
$(NATIVE_GAP_RETDEC_BATCH63_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch63.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 63 --ranges-file native_gap_retdec_batch63.ranges > $@

.PHONY: native-gap-retdec-batch64
$(NATIVE_GAP_RETDEC_BATCH64_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch64.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 64 --ranges-file native_gap_retdec_batch64.ranges > $@

.PHONY: native-gap-retdec-batch65
$(NATIVE_GAP_RETDEC_BATCH65_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch65.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 65 --ranges-file native_gap_retdec_batch65.ranges > $@

.PHONY: native-gap-retdec-batch66
$(NATIVE_GAP_RETDEC_BATCH66_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch66.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 66 --ranges-file native_gap_retdec_batch66.ranges > $@

.PHONY: native-gap-retdec-batch67
$(NATIVE_GAP_RETDEC_BATCH67_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch67.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 67 --ranges-file native_gap_retdec_batch67.ranges > $@

.PHONY: native-gap-retdec-batch68
$(NATIVE_GAP_RETDEC_BATCH68_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch68.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 68 --ranges-file native_gap_retdec_batch68.ranges > $@

.PHONY: native-gap-retdec-batch69
$(NATIVE_GAP_RETDEC_BATCH69_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch69.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 69 --ranges-file native_gap_retdec_batch69.ranges > $@

.PHONY: native-gap-retdec-batch70
$(NATIVE_GAP_RETDEC_BATCH70_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch70.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 70 --ranges-file native_gap_retdec_batch70.ranges > $@

.PHONY: native-gap-retdec-batch71
$(NATIVE_GAP_RETDEC_BATCH71_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch71.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 71 --ranges-file native_gap_retdec_batch71.ranges > $@

.PHONY: native-gap-retdec-batch72
$(NATIVE_GAP_RETDEC_BATCH72_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch72.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 72 --ranges-file native_gap_retdec_batch72.ranges > $@

.PHONY: native-gap-retdec-batch73
$(NATIVE_GAP_RETDEC_BATCH73_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch73.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 73 --ranges-file native_gap_retdec_batch73.ranges > $@

.PHONY: native-gap-retdec-batch74
$(NATIVE_GAP_RETDEC_BATCH74_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch74.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 74 --ranges-file native_gap_retdec_batch74.ranges > $@

.PHONY: native-gap-retdec-batch75
$(NATIVE_GAP_RETDEC_BATCH75_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch75.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 75 --ranges-file native_gap_retdec_batch75.ranges > $@

.PHONY: native-gap-retdec-batch76
$(NATIVE_GAP_RETDEC_BATCH76_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch76.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 76 --ranges-file native_gap_retdec_batch76.ranges > $@

.PHONY: native-gap-retdec-batch77
$(NATIVE_GAP_RETDEC_BATCH77_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch77.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 77 --ranges-file native_gap_retdec_batch77.ranges > $@

.PHONY: native-gap-retdec-batch78
$(NATIVE_GAP_RETDEC_BATCH78_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch78.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 78 --ranges-file native_gap_retdec_batch78.ranges > $@

.PHONY: native-gap-retdec-batch79
$(NATIVE_GAP_RETDEC_BATCH79_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch79.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 79 --ranges-file native_gap_retdec_batch79.ranges > $@

.PHONY: native-gap-retdec-batch80
$(NATIVE_GAP_RETDEC_BATCH80_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch80.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 80 --ranges-file native_gap_retdec_batch80.ranges > $@

.PHONY: native-gap-retdec-batch81
$(NATIVE_GAP_RETDEC_BATCH81_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch81.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 81 --ranges-file native_gap_retdec_batch81.ranges > $@

.PHONY: native-gap-retdec-batch82
$(NATIVE_GAP_RETDEC_BATCH82_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch82.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 82 --ranges-file native_gap_retdec_batch82.ranges > $@

.PHONY: native-gap-retdec-batch83
$(NATIVE_GAP_RETDEC_BATCH83_C): vm_native_gap_retdec_batch.py native_gap_retdec_batch83.ranges eac.elf
	python3 vm_native_gap_retdec_batch.py --batch-index 83 --ranges-file native_gap_retdec_batch83.ranges > $@

native-gap-retdec-batch0: $(NATIVE_GAP_RETDEC_BATCH00_C)
native-gap-retdec-batch1: $(NATIVE_GAP_RETDEC_BATCH01_C)
native-gap-retdec-batch2: $(NATIVE_GAP_RETDEC_BATCH02_C)
native-gap-retdec-batch3: $(NATIVE_GAP_RETDEC_BATCH03_C)
native-gap-retdec-batch4: $(NATIVE_GAP_RETDEC_BATCH04_C)
native-gap-retdec-batch5: $(NATIVE_GAP_RETDEC_BATCH05_C)
native-gap-retdec-batch6: $(NATIVE_GAP_RETDEC_BATCH06_C)
native-gap-retdec-batch7: $(NATIVE_GAP_RETDEC_BATCH07_C)
native-gap-retdec-batch8: $(NATIVE_GAP_RETDEC_BATCH08_C)
native-gap-retdec-batch9: $(NATIVE_GAP_RETDEC_BATCH09_C)
native-gap-retdec-batch10: $(NATIVE_GAP_RETDEC_BATCH10_C)
native-gap-retdec-batch11: $(NATIVE_GAP_RETDEC_BATCH11_C)
native-gap-retdec-batch12: $(NATIVE_GAP_RETDEC_BATCH12_C)
native-gap-retdec-batch13: $(NATIVE_GAP_RETDEC_BATCH13_C)
native-gap-retdec-batch14: $(NATIVE_GAP_RETDEC_BATCH14_C)
native-gap-retdec-batch15: $(NATIVE_GAP_RETDEC_BATCH15_C)
native-gap-retdec-batch16: $(NATIVE_GAP_RETDEC_BATCH16_C)
native-gap-retdec-batch17: $(NATIVE_GAP_RETDEC_BATCH17_C)
native-gap-retdec-batch18: $(NATIVE_GAP_RETDEC_BATCH18_C)
native-gap-retdec-batch19: $(NATIVE_GAP_RETDEC_BATCH19_C)
native-gap-retdec-batch20: $(NATIVE_GAP_RETDEC_BATCH20_C)
native-gap-retdec-batch21: $(NATIVE_GAP_RETDEC_BATCH21_C)
native-gap-retdec-batch22: $(NATIVE_GAP_RETDEC_BATCH22_C)
native-gap-retdec-batch23: $(NATIVE_GAP_RETDEC_BATCH23_C)
native-gap-retdec-batch24: $(NATIVE_GAP_RETDEC_BATCH24_C)
native-gap-retdec-batch25: $(NATIVE_GAP_RETDEC_BATCH25_C)
native-gap-retdec-batch26: $(NATIVE_GAP_RETDEC_BATCH26_C)
native-gap-retdec-batch27: $(NATIVE_GAP_RETDEC_BATCH27_C)
native-gap-retdec-batch28: $(NATIVE_GAP_RETDEC_BATCH28_C)
native-gap-retdec-batch29: $(NATIVE_GAP_RETDEC_BATCH29_C)
native-gap-retdec-batch30: $(NATIVE_GAP_RETDEC_BATCH30_C)
native-gap-retdec-batch31: $(NATIVE_GAP_RETDEC_BATCH31_C)
native-gap-retdec-batch32: $(NATIVE_GAP_RETDEC_BATCH32_C)
native-gap-retdec-batch33: $(NATIVE_GAP_RETDEC_BATCH33_C)
native-gap-retdec-batch34: $(NATIVE_GAP_RETDEC_BATCH34_C)
native-gap-retdec-batch35: $(NATIVE_GAP_RETDEC_BATCH35_C)
native-gap-retdec-batch36: $(NATIVE_GAP_RETDEC_BATCH36_C)
native-gap-retdec-batch37: $(NATIVE_GAP_RETDEC_BATCH37_C)
native-gap-retdec-batch38: $(NATIVE_GAP_RETDEC_BATCH38_C)
native-gap-retdec-batch39: $(NATIVE_GAP_RETDEC_BATCH39_C)
native-gap-retdec-batch40: $(NATIVE_GAP_RETDEC_BATCH40_C)
native-gap-retdec-batch41: $(NATIVE_GAP_RETDEC_BATCH41_C)
native-gap-retdec-batch42: $(NATIVE_GAP_RETDEC_BATCH42_C)
native-gap-retdec-batch43: $(NATIVE_GAP_RETDEC_BATCH43_C)
native-gap-retdec-batch44: $(NATIVE_GAP_RETDEC_BATCH44_C)
native-gap-retdec-batch45: $(NATIVE_GAP_RETDEC_BATCH45_C)
native-gap-retdec-batch46: $(NATIVE_GAP_RETDEC_BATCH46_C)
native-gap-retdec-batch47: $(NATIVE_GAP_RETDEC_BATCH47_C)
native-gap-retdec-batch48: $(NATIVE_GAP_RETDEC_BATCH48_C)
native-gap-retdec-batch49: $(NATIVE_GAP_RETDEC_BATCH49_C)
native-gap-retdec-batch50: $(NATIVE_GAP_RETDEC_BATCH50_C)
native-gap-retdec-batch51: $(NATIVE_GAP_RETDEC_BATCH51_C)
native-gap-retdec-batch52: $(NATIVE_GAP_RETDEC_BATCH52_C)
native-gap-retdec-batch53: $(NATIVE_GAP_RETDEC_BATCH53_C)
native-gap-retdec-batch54: $(NATIVE_GAP_RETDEC_BATCH54_C)
native-gap-retdec-batch55: $(NATIVE_GAP_RETDEC_BATCH55_C)
native-gap-retdec-batch56: $(NATIVE_GAP_RETDEC_BATCH56_C)
native-gap-retdec-batch57: $(NATIVE_GAP_RETDEC_BATCH57_C)
native-gap-retdec-batch58: $(NATIVE_GAP_RETDEC_BATCH58_C)
native-gap-retdec-batch59: $(NATIVE_GAP_RETDEC_BATCH59_C)
native-gap-retdec-batch60: $(NATIVE_GAP_RETDEC_BATCH60_C)
native-gap-retdec-batch61: $(NATIVE_GAP_RETDEC_BATCH61_C)
native-gap-retdec-batch62: $(NATIVE_GAP_RETDEC_BATCH62_C)
native-gap-retdec-batch63: $(NATIVE_GAP_RETDEC_BATCH63_C)
native-gap-retdec-batch64: $(NATIVE_GAP_RETDEC_BATCH64_C)
native-gap-retdec-batch65: $(NATIVE_GAP_RETDEC_BATCH65_C)
native-gap-retdec-batch66: $(NATIVE_GAP_RETDEC_BATCH66_C)
native-gap-retdec-batch67: $(NATIVE_GAP_RETDEC_BATCH67_C)
native-gap-retdec-batch68: $(NATIVE_GAP_RETDEC_BATCH68_C)
native-gap-retdec-batch69: $(NATIVE_GAP_RETDEC_BATCH69_C)
native-gap-retdec-batch70: $(NATIVE_GAP_RETDEC_BATCH70_C)
native-gap-retdec-batch71: $(NATIVE_GAP_RETDEC_BATCH71_C)
native-gap-retdec-batch72: $(NATIVE_GAP_RETDEC_BATCH72_C)
native-gap-retdec-batch73: $(NATIVE_GAP_RETDEC_BATCH73_C)
native-gap-retdec-batch74: $(NATIVE_GAP_RETDEC_BATCH74_C)
native-gap-retdec-batch75: $(NATIVE_GAP_RETDEC_BATCH75_C)
native-gap-retdec-batch76: $(NATIVE_GAP_RETDEC_BATCH76_C)
native-gap-retdec-batch77: $(NATIVE_GAP_RETDEC_BATCH77_C)
native-gap-retdec-batch78: $(NATIVE_GAP_RETDEC_BATCH78_C)
native-gap-retdec-batch79: $(NATIVE_GAP_RETDEC_BATCH79_C)
native-gap-retdec-batch80: $(NATIVE_GAP_RETDEC_BATCH80_C)
native-gap-retdec-batch81: $(NATIVE_GAP_RETDEC_BATCH81_C)
native-gap-retdec-batch82: $(NATIVE_GAP_RETDEC_BATCH82_C)
native-gap-retdec-batch83: $(NATIVE_GAP_RETDEC_BATCH83_C)
native-gap-retdec-batches: $(NATIVE_GAP_RETDEC_BATCH_CS)

$(NATIVE_RETDEC_GAP_QUEUE_TSV): vm_native_retdec_gap_queue.py $(NATIVE_FUNCTION_INVENTORY_TSV) $(NATIVE_EXECUTABLE_COVERAGE_AUDIT_TSV)
	python3 vm_native_retdec_gap_queue.py --inventory $(NATIVE_FUNCTION_INVENTORY_TSV) --coverage $(NATIVE_EXECUTABLE_COVERAGE_AUDIT_TSV) > $@

$(NATIVE_RETDEC_GAP_QUEUE_C): vm_native_retdec_gap_queue.py $(NATIVE_RETDEC_GAP_QUEUE_TSV)
	python3 vm_native_retdec_gap_queue.py --from-tsv $(NATIVE_RETDEC_GAP_QUEUE_TSV) --c > $@

$(NATIVE_RETDEC_GAP_QUEUE_MD): vm_native_retdec_gap_queue.py $(NATIVE_RETDEC_GAP_QUEUE_TSV)
	python3 vm_native_retdec_gap_queue.py --from-tsv $(NATIVE_RETDEC_GAP_QUEUE_TSV) --markdown > $@

native-retdec-gap-queue: $(NATIVE_RETDEC_GAP_QUEUE_C) $(NATIVE_RETDEC_GAP_QUEUE_TSV) $(NATIVE_RETDEC_GAP_QUEUE_MD)

path-pseudocode: $(PATH_HANDLERS_PSEUDOCODE_C) $(PATH_HANDLERS_HOT_PSEUDOCODE_C) $(PATH_HANDLERS_FRONTIER_PSEUDOCODE_C) $(PATH_FRONTIER_SLOT_AUDIT_C) $(PATH_FRONTIER_SLOT_AUDIT_TSV) $(PATH_FRONTIER_SLOT_AUDIT_MD)

$(SOURCE_BUNDLE_C): vm_recovered_source_bundle.py $(HANDLERS_PSEUDOCODE_C) $(PROGRAM_PSEUDOCODE_FULL_C)
	python3 vm_recovered_source_bundle.py > $@

source-bundle: $(SOURCE_BUNDLE_C)

$(ALL_EVIDENCE_BUNDLE_C): vm_recovered_source_all_evidence_bundle.py $(SOURCE_BUNDLE_C) $(PATH_HANDLERS_PSEUDOCODE_C) $(PATH_HANDLERS_FRONTIER_PSEUDOCODE_C) $(PATH_FRONTIER_SLOT_AUDIT_C) $(NATIVE_EXECUTABLE_COVERAGE_AUDIT_C) $(NATIVE_FUNCTION_INVENTORY_C) $(NATIVE_RETDEC_GAP_QUEUE_C) $(NATIVE_GAP_RETDEC_BATCH_CS) $(NATIVE_RET_PATCH_TARGETS_C) $(NATIVE_RET_PATCH_EPILOGUES_RETDEC_C) $(NATIVE_RET_PATCH_SOURCE278_RETDEC_C) $(RET_PATCH_FOLLOWUPS_C) $(RET_PATCH_FOLLOWUP_RETDEC_C) $(NATIVE_OBFUSCATED_ISLANDS_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_C) $(NATIVE_OBFUSCATED_CONTROL_MODEL_C) $(NATIVE_RET_PATCH_HIDDEN_BRIDGE_C) $(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_C) $(CONFIG_COVERAGE_FRONTIER_C) $(BINARY_DATA_SECTIONS_C) $(STATIC_ONLY_HANDLER_QUEUE_C) $(STATIC_ONLY_TIER0_MODELS_C) $(STATIC_ONLY_TIER1_MODELS_C) $(STATIC_ONLY_TIER2_SPLIT_C) $(STATIC_ONLY_TIER3_SHARED_C) $(STATIC_ONLY_TIER4_CALLRET_C) $(STATIC_ONLY_TIER5_LARGE_C) $(TARGET_ONLY_HANDLER_RETDEC_C) $(UNOBSERVED_HANDLER_RETDEC_CS) $(WEAK_HANDLER_RETDEC_C) $(VALIDATED_HANDLER_RETDEC_CS) $(UNRESOLVED_FAMILY_C)
	python3 vm_recovered_source_all_evidence_bundle.py > $@

all-evidence-bundle: $(ALL_EVIDENCE_BUNDLE_C)

pseudocode-syntax-check: $(PSEUDOCODE_TOP_C) $(PROGRAM_PSEUDOCODE_TOP_C) $(PROGRAM_PSEUDOCODE_FULL_C) $(HANDLERS_PSEUDOCODE_C) $(PATH_HANDLERS_PSEUDOCODE_C) $(PATH_HANDLERS_FRONTIER_PSEUDOCODE_C) $(PATH_FRONTIER_SLOT_AUDIT_C) $(NATIVE_EXECUTABLE_COVERAGE_AUDIT_C) $(NATIVE_FUNCTION_INVENTORY_C) $(NATIVE_RETDEC_GAP_QUEUE_C) $(NATIVE_GAP_RETDEC_BATCH_CS) $(SOURCE_BUNDLE_C) $(ALL_EVIDENCE_BUNDLE_C) $(NATIVE_RET_PATCH_TARGETS_C) $(NATIVE_RET_PATCH_EPILOGUES_RETDEC_C) $(NATIVE_RET_PATCH_SOURCE278_RETDEC_C) $(RET_PATCH_FOLLOWUPS_C) $(RET_PATCH_FOLLOWUP_RETDEC_C) $(NATIVE_OBFUSCATED_ISLANDS_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_C) $(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_C) $(NATIVE_OBFUSCATED_CONTROL_MODEL_C) $(NATIVE_RET_PATCH_HIDDEN_BRIDGE_C) $(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_C) $(CONFIG_COVERAGE_FRONTIER_C) $(BINARY_DATA_SECTIONS_C) $(STATIC_ONLY_HANDLER_QUEUE_C) $(STATIC_ONLY_TIER0_MODELS_C) $(STATIC_ONLY_TIER1_MODELS_C) $(STATIC_ONLY_TIER2_SPLIT_C) $(STATIC_ONLY_TIER3_SHARED_C) $(STATIC_ONLY_TIER4_CALLRET_C) $(STATIC_ONLY_TIER5_LARGE_C) $(TARGET_ONLY_HANDLER_RETDEC_C) $(UNOBSERVED_HANDLER_RETDEC_CS) $(WEAK_HANDLER_RETDEC_C) $(VALIDATED_HANDLER_RETDEC_CS) $(UNRESOLVED_FAMILY_C)
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_handlers_pseudocode.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_path_handlers_pseudocode.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_path_handlers_frontier_pseudocode.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_path_frontier_slot_audit.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_executable_coverage_audit.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_function_inventory.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_retdec_gap_queue.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses -Wno-sign-compare -Wno-pointer-to-int-cast -Wno-deprecated-non-prototype -Wno-unused-label dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch00.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses -Wno-sign-compare -Wno-pointer-to-int-cast -Wno-deprecated-non-prototype -Wno-unused-label -Wno-pointer-integer-compare dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch01.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses -Wno-sign-compare -Wno-pointer-to-int-cast -Wno-deprecated-non-prototype -Wno-unused-label -Wno-pointer-integer-compare -Wno-bool-compare -Wno-unknown-warning-option -Wno-tautological-constant-out-of-range-compare dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch02.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses -Wno-sign-compare -Wno-pointer-to-int-cast -Wno-deprecated-non-prototype -Wno-unused-label -Wno-pointer-integer-compare -Wno-bool-compare -Wno-unknown-warning-option -Wno-tautological-constant-out-of-range-compare -Wno-type-limits -Wno-return-stack-address dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch03.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch04.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch05.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch06.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch07.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch08.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch09.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch10.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch11.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch12.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch13.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch14.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch15.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch16.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch17.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch18.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch19.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch20.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch21.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch22.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch23.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch24.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch25.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch26.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch27.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch28.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch29.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch30.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch31.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch32.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch33.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch34.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch35.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch36.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch37.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch38.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch39.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch40.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch41.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch42.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch43.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch44.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch45.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch46.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch47.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch48.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch49.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch50.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch51.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch52.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch53.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch54.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch55.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch56.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch57.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch58.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch59.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch60.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch61.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch62.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch63.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch64.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch65.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch66.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch67.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch68.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch69.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch70.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch71.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch72.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch73.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch74.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch75.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch76.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch77.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch78.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch79.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch80.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch81.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch82.c
	$(CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_native_gap_retdec_batch83.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_pseudocode_top.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_program_pseudocode_top.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_program_pseudocode_full.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_recovered_source_bundle.c
	$(ALL_EVIDENCE_SYNTAX_CC) -std=c11 -fsyntax-only -w dumps/vmtail-wide-1m-w16/vm_recovered_source_all_evidence_bundle.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_native_ret_patch_targets.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_native_ret_patch_epilogues_retdec.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_native_ret_patch_source278_retdec.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_ret_patch_followups.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses -Wno-incompatible-pointer-types dumps/vmtail-wide-1m-w16/vm_native_ret_patch_followup_retdec.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_obfuscated_islands.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage_dynamic.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage_slot_proof.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage_stack_source.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage_rbx_provenance.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage_model.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_obfuscated_control_model.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_ret_patch_hidden_bridge.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_native_handler_environment_coverage.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable dumps/vmtail-wide-1m-w16/vm_config_coverage_frontier.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable dumps/vmtail-wide-1m-w16/vm_binary_data_sections.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_static_only_handler_queue.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_static_only_tier0_handler_models.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_static_only_tier1_handler_models.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_static_only_tier2_split_models.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_static_only_tier3_shared_models.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_static_only_tier4_callret_models.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_static_only_tier5_large_models.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_target_only_handlers_retdec.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses -Wno-sign-compare -Wno-pointer-to-int-cast -Wno-tautological-constant-out-of-range-compare dumps/vmtail-wide-1m-w16/vm_unobserved_handlers_retdec_batch0*.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses -Wno-sign-compare -Wno-pointer-to-int-cast -Wno-tautological-constant-out-of-range-compare dumps/vmtail-wide-1m-w16/vm_weak_handlers_retdec.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses -Wno-sign-compare -Wno-pointer-to-int-cast -Wno-tautological-constant-out-of-range-compare -Wno-return-stack-address -Wno-deprecated-non-prototype dumps/vmtail-wide-1m-w16/vm_validated_handlers_retdec_batch0*.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_unresolved_family_chains.c

pseudocode-object-check: $(SOURCE_BUNDLE_C)
	$(CC) -std=c11 -O0 -g0 -fno-strict-aliasing -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses -c dumps/vmtail-wide-1m-w16/vm_recovered_source_bundle.c -o /tmp/eacsym-vm_recovered_source_bundle.o

pseudocode-link-check: $(SOURCE_BUNDLE_C)
	$(CC) -std=c11 -O0 -g0 -fno-strict-aliasing -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_recovered_source_bundle.c vm_recovered_source_harness.c -o /tmp/eacsym-vm_recovered_source_smoke
	/tmp/eacsym-vm_recovered_source_smoke

coverage-matrix:
	python3 vm_trace_coverage_matrix.py > dumps/vmtail-wide-1m-w16/vm_trace_coverage_matrix.tsv
	python3 vm_trace_coverage_matrix.py --from-tsv dumps/vmtail-wide-1m-w16/vm_trace_coverage_matrix.tsv --markdown > dumps/vmtail-wide-1m-w16/vm_trace_coverage_matrix.md

coverage-audit: coverage-matrix
	python3 vm_static_coverage_audit.py > dumps/vmtail-wide-1m-w16/vm_static_coverage_audit.tsv
	python3 vm_static_coverage_audit.py --from-tsv dumps/vmtail-wide-1m-w16/vm_static_coverage_audit.tsv --markdown > dumps/vmtail-wide-1m-w16/vm_static_coverage_audit.md

C_RECONSTRUCTION_MANIFEST_INPUTS := \
	$(HANDLERS_PSEUDOCODE_C) \
	$(PATH_HANDLERS_PSEUDOCODE_C) \
	$(PATH_HANDLERS_FRONTIER_PSEUDOCODE_C) \
	$(PATH_FRONTIER_SLOT_AUDIT_C) \
	$(PATH_FRONTIER_SLOT_AUDIT_TSV) \
	$(PATH_FRONTIER_SLOT_AUDIT_MD) \
	$(NATIVE_EXECUTABLE_COVERAGE_AUDIT_C) \
	$(NATIVE_EXECUTABLE_COVERAGE_AUDIT_TSV) \
	$(NATIVE_EXECUTABLE_COVERAGE_AUDIT_MD) \
	$(NATIVE_FUNCTION_INVENTORY_C) \
	$(NATIVE_FUNCTION_INVENTORY_TSV) \
	$(NATIVE_FUNCTION_INVENTORY_MD) \
	$(NATIVE_RETDEC_GAP_QUEUE_C) \
	$(NATIVE_RETDEC_GAP_QUEUE_TSV) \
	$(NATIVE_RETDEC_GAP_QUEUE_MD) \
	$(NATIVE_GAP_RETDEC_BATCH_CS) \
	$(PSEUDOCODE_TOP_C) \
	$(PROGRAM_PSEUDOCODE_TOP_C) \
	$(PROGRAM_PSEUDOCODE_FULL_C) \
	$(SOURCE_BUNDLE_C) \
	$(ALL_EVIDENCE_BUNDLE_C) \
	$(PRIMARY_DIR)/vm_synthetic_successor_gaps.tsv \
	$(PRIMARY_DIR)/vm_synthetic_successor_gaps.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_transfer_probe.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_transfer_probe.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_dynamic_stitch.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_dynamic_stitch.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_chain_probe.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_chain_probe.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_residual_audit.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_residual_audit.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_concrete_state_audit.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_concrete_state_audit.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_state_trace_targets.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_state_trace_targets.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_live_context_audit.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_live_context_audit.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_table_read_diagnostic.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_table_read_diagnostic.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_table_memory_probe.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_table_memory_probe.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_runtime_table_memory_probe.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_runtime_table_memory_probe.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_sampled_control_correlation.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_sampled_control_correlation.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_focused_direct_trace_audit.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_focused_direct_trace_audit.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_focused_sequence_audit.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_focused_sequence_audit.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_observed_chain_bridge.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_observed_chain_bridge.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_observed_chain_replay.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_observed_chain_replay.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_chain_slot_reconciliation.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_chain_slot_reconciliation.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_unresolved_family_audit.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_unresolved_family_audit.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_source299_context_probe.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_source299_context_probe.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_source299_ret_patch_probe.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_source299_ret_patch_probe.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_sampled_ret_patch_probe.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_sampled_ret_patch_probe.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_ret_patch_native_target_atlas.md \
	$(NATIVE_RET_PATCH_TARGETS_C) \
	$(NATIVE_RET_PATCH_EPILOGUES_RETDEC_C) \
	$(NATIVE_RET_PATCH_SOURCE278_RETDEC_C) \
	$(RET_PATCH_FOLLOWUPS_C) \
	$(RET_PATCH_FOLLOWUPS_TSV) \
	$(RET_PATCH_FOLLOWUPS_MD) \
	$(RET_PATCH_FOLLOWUP_RETDEC_C) \
	$(NATIVE_OBFUSCATED_ISLANDS_C) \
	$(NATIVE_OBFUSCATED_ISLANDS_TSV) \
	$(NATIVE_OBFUSCATED_ISLANDS_MD) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_C) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_TSV) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_MD) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_C) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_TSV) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_DYNAMIC_MD) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_C) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_TSV) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_SLOT_PROOF_MD) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_C) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_TSV) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_STACK_SOURCE_MD) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_C) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_TSV) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_RBX_PROVENANCE_MD) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_C) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_TSV) \
	$(NATIVE_OBFUSCATED_SECOND_STAGE_MODEL_MD) \
	$(NATIVE_OBFUSCATED_CONTROL_MODEL_C) \
	$(NATIVE_OBFUSCATED_CONTROL_MODEL_TSV) \
	$(NATIVE_OBFUSCATED_CONTROL_MODEL_MD) \
	$(NATIVE_RET_PATCH_HIDDEN_BRIDGE_C) \
	$(NATIVE_RET_PATCH_HIDDEN_BRIDGE_TSV) \
	$(NATIVE_RET_PATCH_HIDDEN_BRIDGE_MD) \
	$(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_C) \
	$(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_TSV) \
	$(NATIVE_HANDLER_ENVIRONMENT_COVERAGE_MD) \
	$(CONFIG_COVERAGE_FRONTIER_C) \
	$(CONFIG_COVERAGE_FRONTIER_TSV) \
	$(CONFIG_COVERAGE_FRONTIER_MD) \
	$(BINARY_DATA_SECTIONS_C) \
	$(BINARY_DATA_SECTIONS_TSV) \
	$(BINARY_DATA_SECTIONS_MD) \
	$(STATIC_ONLY_HANDLER_QUEUE_C) \
	$(STATIC_ONLY_HANDLER_QUEUE_TSV) \
	$(STATIC_ONLY_HANDLER_QUEUE_MD) \
	$(STATIC_ONLY_TIER0_MODELS_C) \
	$(STATIC_ONLY_TIER0_MODELS_TSV) \
	$(STATIC_ONLY_TIER0_MODELS_MD) \
	$(STATIC_ONLY_TIER1_MODELS_C) \
	$(STATIC_ONLY_TIER1_MODELS_TSV) \
	$(STATIC_ONLY_TIER1_MODELS_MD) \
	$(STATIC_ONLY_TIER2_SPLIT_C) \
	$(STATIC_ONLY_TIER2_SPLIT_TSV) \
	$(STATIC_ONLY_TIER2_SPLIT_MD) \
	$(STATIC_ONLY_TIER3_SHARED_C) \
	$(STATIC_ONLY_TIER3_SHARED_TSV) \
	$(STATIC_ONLY_TIER3_SHARED_MD) \
	$(STATIC_ONLY_TIER4_CALLRET_C) \
	$(STATIC_ONLY_TIER4_CALLRET_TSV) \
	$(STATIC_ONLY_TIER4_CALLRET_MD) \
	$(STATIC_ONLY_TIER5_LARGE_C) \
	$(STATIC_ONLY_TIER5_LARGE_TSV) \
	$(STATIC_ONLY_TIER5_LARGE_MD) \
	$(TARGET_ONLY_HANDLER_RETDEC_C) \
	$(UNOBSERVED_HANDLER_RETDEC_CS) \
	$(WEAK_HANDLER_RETDEC_C) \
	$(VALIDATED_HANDLER_RETDEC_CS) \
	$(HANDLER_RETDEC_INDEX_TSV) \
	$(HANDLER_RETDEC_INDEX_MD) \
	$(UNRESOLVED_FAMILY_C) \
	$(PRIMARY_DIR)/vm_synthetic_gap_live_snapshot_transfer_probe.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_live_snapshot_transfer_probe.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_live_table_evidence.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_live_table_evidence.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_symbolic_successors.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_symbolic_successors.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_live_in_roles.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_live_in_roles.md \
	$(PRIMARY_DIR)/vm_live_in_final_tail_site_probe.tsv \
	$(PRIMARY_DIR)/vm_live_in_final_tail_site_probe.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_live_in_reentry_probe.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_live_in_reentry_probe.md \
	$(PRIMARY_DIR)/vm_synthetic_gap_allstatic_reentry_probe.tsv \
	$(PRIMARY_DIR)/vm_synthetic_gap_allstatic_reentry_probe.md \
	$(PRIMARY_DIR)/vm_trace_coverage_matrix.tsv \
	$(PRIMARY_DIR)/vm_trace_coverage_matrix.md \
	$(PRIMARY_DIR)/vm_static_coverage_audit.tsv \
	$(PRIMARY_DIR)/vm_static_coverage_audit.md \
	$(RESIDUAL_STATE_DIR)/run.stderr \
	$(RESIDUAL_STATE_DIR)/vm_instruction_trace.tsv \
	$(LIVE_RESIDUAL_DIR)/run.stderr \
	$(LIVE_RESIDUAL_DIR)/vm_instruction_trace.tsv

C_RECONSTRUCTION_NATIVE_ACCELERATION_INPUTS := \
	Makefile \
	vm_c_reconstruction_manifest.py \
	vm_instruction_unique_fast.c vm_instruction_unique_fast \
	vm_bytecode_segments_fast.c vm_bytecode_segments_fast \
	vm_bytecode_blocks_fast.c vm_bytecode_blocks_fast \
	vm_native_ret_patch_followups_dump.c vm_native_ret_patch_followups_dump \
	vm_native_ret_patch_followup_retdec_dump.c vm_native_ret_patch_followup_retdec_dump \
	vm_native_obfuscated_islands_dump.c vm_native_obfuscated_islands_dump \
	vm_native_obfuscated_second_stage_dump.c vm_native_obfuscated_second_stage_dump \
	vm_native_obfuscated_second_stage_dynamic_dump.c vm_native_obfuscated_second_stage_dynamic_dump \
	vm_native_obfuscated_second_stage_slot_proof_dump.c vm_native_obfuscated_second_stage_slot_proof_dump \
	vm_native_obfuscated_second_stage_stack_source_dump.c vm_native_obfuscated_second_stage_stack_source_dump \
	vm_native_obfuscated_second_stage_rbx_provenance_dump.c vm_native_obfuscated_second_stage_rbx_provenance_dump \
	vm_native_obfuscated_second_stage_model_dump.c vm_native_obfuscated_second_stage_model_dump \
	vm_native_obfuscated_control_model_dump.c vm_native_obfuscated_control_model_dump \
	vm_native_ret_patch_hidden_bridge_dump.c vm_native_ret_patch_hidden_bridge_dump \
	vm_native_handler_environment_coverage_dump.c vm_native_handler_environment_coverage_dump \
	vm_config_coverage_frontier_dump.c vm_config_coverage_frontier_dump \
	vm_binary_data_sections_dump.c vm_binary_data_sections_dump \
	vm_static_only_handler_queue_dump.c vm_static_only_handler_queue_dump \
	vm_static_only_tier0_models_dump.c vm_static_only_tier0_models_dump \
	vm_static_only_tier1_models_dump.c vm_static_only_tier1_models_dump \
	vm_static_only_tier2_split_dump.c vm_static_only_tier2_split_dump \
	vm_static_only_tier3_shared_dump.c vm_static_only_tier3_shared_dump \
	vm_static_only_tier4_callret_dump.c vm_static_only_tier4_callret_dump \
	vm_static_only_tier5_large_dump.c vm_static_only_tier5_large_dump

c-reconstruction-manifest: pseudocode-syntax-check pseudocode-object-check pseudocode-link-check $(C_RECONSTRUCTION_MANIFEST_INPUTS) $(C_RECONSTRUCTION_NATIVE_ACCELERATION_INPUTS)
	python3 vm_c_reconstruction_manifest.py > dumps/vmtail-wide-1m-w16/vm_c_reconstruction_manifest.tsv
	python3 vm_c_reconstruction_manifest.py --markdown > dumps/vmtail-wide-1m-w16/vm_c_reconstruction_manifest.md

clean:
	rm -f driver trace_preload.so vm_fast_path_profile
