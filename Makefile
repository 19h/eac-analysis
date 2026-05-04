CC ?= gcc
CFLAGS ?= -O2 -g -Wall -Wextra -Wno-unused-parameter -Wno-nonnull-compare
LDFLAGS ?=

STATE_DIR ?= dumps/vmtail-state-wide-w16
TRACE ?= $(STATE_DIR)/vm_instruction_trace.tsv
GPR_RUN ?= dumps/vmtail-scratch-wide-w16-fs337all/run.stderr
PRED_ROWS ?= 128
XFER_ROWS ?= 128

.PHONY: all clean fast-replay fast-state fast-gpr fast-predicates fast-state-predicates fast-gpr-predicates fast-transfer fast-state-transfer fast-gpr-transfer fast-validators fast-paths fast-gpr-paths

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

clean:
	rm -f driver trace_preload.so vm_fast_path_profile
