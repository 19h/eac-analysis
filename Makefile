CC ?= gcc
CFLAGS ?= -O2 -g -Wall -Wextra -Wno-unused-parameter -Wno-nonnull-compare
LDFLAGS ?=

STATE_DIR ?= dumps/vmtail-state-wide-w16
TRACE ?= $(STATE_DIR)/vm_instruction_trace.tsv
PRIMARY_DIR ?= dumps/vmtail-wide-1m-w16
PRIMARY_TRACE ?= $(PRIMARY_DIR)/vm_instruction_trace.tsv
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

.PHONY: all clean fast-replay fast-state fast-gpr fast-predicates fast-state-predicates fast-gpr-predicates fast-transfer fast-state-transfer fast-gpr-transfer fast-validators fast-paths fast-gpr-paths instruction-trace instruction-trace-refresh instruction-unique instruction-unique-fast-check bytecode-segments-fast-check bytecode-blocks-fast-check instruction-lift sampled-recovery file-atlas file-fill long-branches hidden-transitions sampled-operands hidden-fill frontier-fill footprint-fill control-edges bytecode-ir bytecode-basic-blocks synthetic-spans synthetic-tails synthetic-tail-lift synthetic-successor-gaps synthetic-gap-transfer-probe synthetic-gap-dynamic-stitch synthetic-gap-chain-probe synthetic-gap-residual-audit synthetic-gap-concrete-state-audit synthetic-gap-state-trace-targets synthetic-gap-live-context-audit synthetic-gap-table-read-diagnostic synthetic-gap-table-memory-probe synthetic-gap-runtime-table-memory-probe synthetic-gap-sampled-control-correlation synthetic-gap-focused-direct-trace-audit synthetic-gap-focused-sequence-audit synthetic-gap-observed-chain-bridge synthetic-gap-observed-chain-replay synthetic-gap-chain-slot-reconciliation synthetic-gap-unresolved-family-audit synthetic-gap-source299-context-probe synthetic-gap-source299-ret-patch-probe synthetic-gap-sampled-ret-patch-probe synthetic-gap-ret-patch-native-target-atlas native-ret-patch-target-pseudocode native-ret-patch-epilogues-retdec native-ret-patch-source278-retdec native-ret-patch-followups native-ret-patch-followup-retdec native-obfuscated-islands native-obfuscated-second-stage native-obfuscated-second-stage-dynamic native-obfuscated-second-stage-slot-proof native-obfuscated-second-stage-stack-source native-obfuscated-second-stage-rbx-provenance native-obfuscated-second-stage-model native-obfuscated-control-model native-ret-patch-hidden-bridge target-only-handlers-retdec unobserved-handlers-retdec unobserved-handlers-retdec-batch0 weak-handlers-retdec validated-handlers-retdec handler-retdec-index unresolved-family-chains synthetic-gap-live-snapshot-transfer-probe synthetic-gap-live-table-evidence synthetic-gap-symbolic-successors synthetic-gap-live-in-roles final-tail-site-probe synthetic-gap-live-in-reentry-probe synthetic-gap-allstatic-reentry-probe pseudocode pseudocode-full handler-pseudocode path-pseudocode source-bundle pseudocode-syntax-check pseudocode-object-check pseudocode-link-check coverage-matrix coverage-audit c-reconstruction-manifest

all: driver trace_preload.so vm_fast_path_profile vm_instruction_unique_fast vm_bytecode_segments_fast vm_bytecode_blocks_fast vm_handler_retdec_index vm_unresolved_family_chains_dump vm_native_ret_patch_followups_dump vm_native_ret_patch_followup_retdec_dump vm_native_obfuscated_islands_dump vm_native_obfuscated_second_stage_dump vm_native_obfuscated_second_stage_dynamic_dump vm_native_obfuscated_second_stage_slot_proof_dump vm_native_obfuscated_second_stage_stack_source_dump vm_native_obfuscated_second_stage_rbx_provenance_dump vm_native_obfuscated_second_stage_model_dump vm_native_obfuscated_control_model_dump vm_native_ret_patch_hidden_bridge_dump

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

native-ret-patch-target-pseudocode:
	python3 vm_native_ret_patch_targets_pseudocode.py > dumps/vmtail-wide-1m-w16/vm_native_ret_patch_targets.c

native-ret-patch-epilogues-retdec:
	python3 vm_native_ret_patch_epilogues_retdec.py > dumps/vmtail-wide-1m-w16/vm_native_ret_patch_epilogues_retdec.c

native-ret-patch-source278-retdec:
	python3 vm_native_ret_patch_source278_retdec.py > dumps/vmtail-wide-1m-w16/vm_native_ret_patch_source278_retdec.c

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

pseudocode: bytecode-basic-blocks synthetic-tail-lift synthetic-gap-transfer-probe synthetic-gap-dynamic-stitch synthetic-gap-chain-probe synthetic-gap-residual-audit synthetic-gap-concrete-state-audit synthetic-gap-live-context-audit synthetic-gap-table-read-diagnostic synthetic-gap-table-memory-probe synthetic-gap-runtime-table-memory-probe synthetic-gap-live-table-evidence synthetic-gap-sampled-ret-patch-probe synthetic-gap-sampled-control-correlation synthetic-gap-focused-direct-trace-audit synthetic-gap-focused-sequence-audit synthetic-gap-observed-chain-bridge synthetic-gap-symbolic-successors synthetic-gap-live-in-roles final-tail-site-probe synthetic-gap-live-in-reentry-probe synthetic-gap-allstatic-reentry-probe
	python3 vm_pseudocode_dump.py --limit-blocks 60 --rows-per-block 32 > dumps/vmtail-wide-1m-w16/vm_pseudocode_top.c
	python3 vm_program_pseudocode_dump.py --limit-blocks 80 --rows-per-block 80 > dumps/vmtail-wide-1m-w16/vm_program_pseudocode_top.c

pseudocode-full: bytecode-basic-blocks synthetic-tail-lift synthetic-gap-transfer-probe synthetic-gap-dynamic-stitch synthetic-gap-chain-probe synthetic-gap-residual-audit synthetic-gap-concrete-state-audit synthetic-gap-live-context-audit synthetic-gap-table-read-diagnostic synthetic-gap-table-memory-probe synthetic-gap-runtime-table-memory-probe synthetic-gap-live-table-evidence synthetic-gap-sampled-ret-patch-probe synthetic-gap-sampled-control-correlation synthetic-gap-focused-direct-trace-audit synthetic-gap-focused-sequence-audit synthetic-gap-observed-chain-bridge synthetic-gap-symbolic-successors synthetic-gap-live-in-roles final-tail-site-probe synthetic-gap-live-in-reentry-probe synthetic-gap-allstatic-reentry-probe
	python3 vm_program_pseudocode_dump.py --limit-blocks 0 --rows-per-block 0 > dumps/vmtail-wide-1m-w16/vm_program_pseudocode_full.c

handler-pseudocode: synthetic-gap-sampled-ret-patch-probe
	python3 vm_handler_pseudocode_dump.py --all > dumps/vmtail-wide-1m-w16/vm_handlers_pseudocode.c
	python3 vm_handler_pseudocode_dump.py --limit 80 > dumps/vmtail-wide-1m-w16/vm_handlers_hot_pseudocode.c

path-pseudocode:
	python3 vm_path_pseudocode_dump.py --validated-only > dumps/vmtail-wide-1m-w16/vm_path_handlers_pseudocode.c
	python3 vm_path_pseudocode_dump.py --validated-only --limit 80 > dumps/vmtail-wide-1m-w16/vm_path_handlers_hot_pseudocode.c

source-bundle: handler-pseudocode pseudocode-full
	python3 vm_recovered_source_bundle.py > dumps/vmtail-wide-1m-w16/vm_recovered_source_bundle.c

pseudocode-syntax-check: pseudocode source-bundle path-pseudocode native-ret-patch-target-pseudocode native-ret-patch-epilogues-retdec native-ret-patch-source278-retdec native-ret-patch-followups native-ret-patch-followup-retdec native-obfuscated-islands native-obfuscated-second-stage native-obfuscated-second-stage-dynamic native-obfuscated-second-stage-slot-proof native-obfuscated-second-stage-stack-source native-obfuscated-second-stage-rbx-provenance native-obfuscated-second-stage-model native-obfuscated-control-model native-ret-patch-hidden-bridge target-only-handlers-retdec unobserved-handlers-retdec weak-handlers-retdec validated-handlers-retdec unresolved-family-chains
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_handlers_pseudocode.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_path_handlers_pseudocode.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_pseudocode_top.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_program_pseudocode_top.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_program_pseudocode_full.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_recovered_source_bundle.c
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
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_target_only_handlers_retdec.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses -Wno-sign-compare -Wno-pointer-to-int-cast -Wno-tautological-constant-out-of-range-compare dumps/vmtail-wide-1m-w16/vm_unobserved_handlers_retdec_batch0*.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses -Wno-sign-compare -Wno-pointer-to-int-cast -Wno-tautological-constant-out-of-range-compare dumps/vmtail-wide-1m-w16/vm_weak_handlers_retdec.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-unused-parameter -Wno-uninitialized -Wno-parentheses -Wno-sign-compare -Wno-pointer-to-int-cast -Wno-tautological-constant-out-of-range-compare -Wno-return-stack-address -Wno-deprecated-non-prototype dumps/vmtail-wide-1m-w16/vm_validated_handlers_retdec_batch0*.c
	$(CC) -std=c11 -fsyntax-only -Wall -Wextra -Wno-unused-function dumps/vmtail-wide-1m-w16/vm_unresolved_family_chains.c

pseudocode-object-check: source-bundle
	$(CC) -std=c11 -O0 -g0 -fno-strict-aliasing -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses -c dumps/vmtail-wide-1m-w16/vm_recovered_source_bundle.c -o /tmp/eacsym-vm_recovered_source_bundle.o

pseudocode-link-check: source-bundle
	$(CC) -std=c11 -O0 -g0 -fno-strict-aliasing -Wall -Wextra -Wno-unused-variable -Wno-unused-function -Wno-parentheses dumps/vmtail-wide-1m-w16/vm_recovered_source_bundle.c vm_recovered_source_harness.c -o /tmp/eacsym-vm_recovered_source_smoke
	/tmp/eacsym-vm_recovered_source_smoke

coverage-matrix:
	python3 vm_trace_coverage_matrix.py > dumps/vmtail-wide-1m-w16/vm_trace_coverage_matrix.tsv
	python3 vm_trace_coverage_matrix.py --from-tsv dumps/vmtail-wide-1m-w16/vm_trace_coverage_matrix.tsv --markdown > dumps/vmtail-wide-1m-w16/vm_trace_coverage_matrix.md

coverage-audit: coverage-matrix
	python3 vm_static_coverage_audit.py > dumps/vmtail-wide-1m-w16/vm_static_coverage_audit.tsv
	python3 vm_static_coverage_audit.py --from-tsv dumps/vmtail-wide-1m-w16/vm_static_coverage_audit.tsv --markdown > dumps/vmtail-wide-1m-w16/vm_static_coverage_audit.md

c-reconstruction-manifest: pseudocode-syntax-check pseudocode-object-check pseudocode-link-check coverage-audit synthetic-gap-transfer-probe synthetic-gap-dynamic-stitch synthetic-gap-chain-probe synthetic-gap-residual-audit synthetic-gap-concrete-state-audit synthetic-gap-state-trace-targets synthetic-gap-live-context-audit synthetic-gap-table-read-diagnostic synthetic-gap-table-memory-probe synthetic-gap-runtime-table-memory-probe synthetic-gap-sampled-control-correlation synthetic-gap-focused-direct-trace-audit synthetic-gap-focused-sequence-audit synthetic-gap-observed-chain-bridge synthetic-gap-observed-chain-replay synthetic-gap-chain-slot-reconciliation synthetic-gap-unresolved-family-audit synthetic-gap-source299-context-probe synthetic-gap-source299-ret-patch-probe synthetic-gap-sampled-ret-patch-probe synthetic-gap-ret-patch-native-target-atlas native-ret-patch-target-pseudocode native-ret-patch-epilogues-retdec native-ret-patch-source278-retdec native-ret-patch-followups native-ret-patch-followup-retdec native-obfuscated-islands native-obfuscated-second-stage native-obfuscated-second-stage-dynamic native-obfuscated-second-stage-slot-proof native-obfuscated-second-stage-stack-source native-obfuscated-second-stage-rbx-provenance native-obfuscated-second-stage-model native-obfuscated-control-model native-ret-patch-hidden-bridge target-only-handlers-retdec unobserved-handlers-retdec weak-handlers-retdec validated-handlers-retdec handler-retdec-index unresolved-family-chains synthetic-gap-live-snapshot-transfer-probe synthetic-gap-live-table-evidence synthetic-gap-symbolic-successors synthetic-gap-live-in-roles final-tail-site-probe synthetic-gap-live-in-reentry-probe synthetic-gap-allstatic-reentry-probe
	python3 vm_c_reconstruction_manifest.py > dumps/vmtail-wide-1m-w16/vm_c_reconstruction_manifest.tsv
	python3 vm_c_reconstruction_manifest.py --markdown > dumps/vmtail-wide-1m-w16/vm_c_reconstruction_manifest.md

clean:
	rm -f driver trace_preload.so vm_fast_path_profile
