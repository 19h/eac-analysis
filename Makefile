CC ?= gcc
CFLAGS ?= -O2 -g -Wall -Wextra -Wno-unused-parameter -Wno-nonnull-compare
LDFLAGS ?=

STATE_DIR ?= dumps/vmtail-state-wide-w16
TRACE ?= $(STATE_DIR)/vm_instruction_trace.tsv
GPR_RUN ?= dumps/vmtail-scratch-wide-w16-fs337all-fs128/run.stderr
PRED_ROWS ?= 128
XFER_ROWS ?= 128

.PHONY: all clean fast-replay fast-state fast-gpr fast-predicates fast-state-predicates fast-gpr-predicates fast-transfer fast-state-transfer fast-gpr-transfer fast-validators fast-paths fast-gpr-paths long-branches hidden-transitions sampled-operands hidden-fill frontier-fill footprint-fill control-edges bytecode-ir bytecode-basic-blocks synthetic-spans synthetic-tails

all: driver trace_preload.so vm_fast_path_profile

driver: driver.c
	$(CC) $(CFLAGS) -o $@ $< -ldl

trace_preload.so: trace_preload.c
	$(CC) $(CFLAGS) -fPIC -shared -o $@ $< -ldl -pthread

vm_fast_path_profile: vm_fast_path_profile.c
	$(CC) $(CFLAGS) -O3 -o $@ $< -lcapstone -lcrypto

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

long-branches:
	python3 vm_long_branch_catalog.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv > dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv
	python3 vm_long_branch_catalog.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv --markdown --limit 30 > dumps/vmtail-wide-1m-w16/vm_long_branch_top.md

hidden-transitions:
	python3 vm_hidden_transition_catalog.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv > dumps/vmtail-wide-1m-w16/vm_hidden_transition_catalog.tsv
	python3 vm_hidden_transition_catalog.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv --markdown --limit 30 > dumps/vmtail-wide-1m-w16/vm_hidden_transition_top.md

sampled-operands:
	python3 vm_sampled_operand_catalog.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv > dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv
	python3 vm_sampled_operand_catalog.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv --markdown --limit 30 > dumps/vmtail-wide-1m-w16/vm_sampled_operand_top.md

hidden-fill: long-branches hidden-transitions sampled-operands
	python3 vm_trace_hidden_fill.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv > dumps/vmtail-wide-1m-w16/vm_instruction_trace_hiddenfill.tsv
	python3 vm_bytecode_recover.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_hiddenfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_segments_hiddenfill_sampled.tsv
	python3 vm_bytecode_blocks.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_hiddenfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_hiddenfill_sampled.tsv
	python3 vm_trace_hidden_fill.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill.tsv > dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill.tsv
	python3 vm_bytecode_recover.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_sampled.tsv
	python3 vm_bytecode_blocks.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_filefill_hiddenfill_sampled.tsv
	mkdir -p dumps/vmtail-wide-1m-w16-filefill-hiddenfill
	ln -sf ../vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill/vm_instruction_trace.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_sampled.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill/vm_bytecode_segments.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_isa_missing_exact.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill/vm_isa_missing_exact.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_handler_semantics.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill/vm_handler_semantics.tsv
	python3 vm_gap_report.py dumps/vmtail-wide-1m-w16-filefill-hiddenfill --long-branches dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv --hidden-transitions dumps/vmtail-wide-1m-w16/vm_hidden_transition_catalog.tsv --sampled-operands dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv > dumps/vmtail-wide-1m-w16/vm_gap_report_filefill_hiddenfill.tsv

frontier-fill: hidden-fill
	python3 vm_trace_frontier_fill.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill.tsv --segments dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_sampled.tsv > dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill.tsv
	python3 vm_bytecode_recover.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_sampled.tsv
	python3 vm_bytecode_blocks.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_filefill_hiddenfill_frontierfill_sampled.tsv
	mkdir -p dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill
	ln -sf ../vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill/vm_instruction_trace.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_sampled.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill/vm_bytecode_segments.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_isa_missing_exact.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill/vm_isa_missing_exact.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_handler_semantics.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill/vm_handler_semantics.tsv
	python3 vm_gap_report.py dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill --long-branches dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv --hidden-transitions dumps/vmtail-wide-1m-w16/vm_hidden_transition_catalog.tsv --sampled-operands dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv > dumps/vmtail-wide-1m-w16/vm_gap_report_filefill_hiddenfill_frontierfill.tsv

footprint-fill: frontier-fill
	python3 vm_trace_target_footprint_fill.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill.tsv --segments dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_sampled.tsv > dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv
	python3 vm_bytecode_recover.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_footprintfill_sampled.tsv
	python3 vm_bytecode_blocks.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv --include-sampled > dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_filefill_hiddenfill_frontierfill_footprintfill_sampled.tsv
	mkdir -p dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill
	ln -sf ../vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill/vm_instruction_trace.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_footprintfill_sampled.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill/vm_bytecode_segments.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_isa_missing_exact.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill/vm_isa_missing_exact.tsv
	ln -sf ../vmtail-wide-1m-w16/vm_handler_semantics.tsv dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill/vm_handler_semantics.tsv
	python3 vm_gap_report.py dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill --long-branches dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv --hidden-transitions dumps/vmtail-wide-1m-w16/vm_hidden_transition_catalog.tsv --sampled-operands dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv > dumps/vmtail-wide-1m-w16/vm_gap_report_filefill_hiddenfill_frontierfill_footprintfill.tsv

control-edges: footprint-fill
	python3 vm_bytecode_control_edges.py > dumps/vmtail-wide-1m-w16/vm_bytecode_control_edges.tsv
	python3 vm_bytecode_control_edges.py --markdown --limit 40 > dumps/vmtail-wide-1m-w16/vm_bytecode_control_edges_top.md

bytecode-ir: control-edges
	python3 vm_bytecode_ir.py > dumps/vmtail-wide-1m-w16/vm_bytecode_ir.tsv
	python3 vm_bytecode_ir.py --markdown --limit 50 > dumps/vmtail-wide-1m-w16/vm_bytecode_ir_top.md

bytecode-basic-blocks:
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

clean:
	rm -f driver trace_preload.so vm_fast_path_profile
