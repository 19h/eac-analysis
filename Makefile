CC ?= gcc
CFLAGS ?= -O2 -g -Wall -Wextra -Wno-unused-parameter -Wno-nonnull-compare
LDFLAGS ?=

STATE_DIR ?= dumps/vmtail-state-wide-w16
TRACE ?= $(STATE_DIR)/vm_instruction_trace.tsv
GPR_RUN ?= dumps/vmtail-scratch-wide-w16/run.stderr

.PHONY: all clean fast-replay fast-validators fast-paths fast-gpr-paths

all: driver trace_preload.so vm_fast_path_profile

driver: driver.c
	$(CC) $(CFLAGS) -o $@ $< -ldl

trace_preload.so: trace_preload.c
	$(CC) $(CFLAGS) -fPIC -shared -o $@ $< -ldl -pthread

vm_fast_path_profile: vm_fast_path_profile.c
	$(CC) $(CFLAGS) -O3 -o $@ $< -lcapstone -lcrypto

fast-replay: fast-validators fast-paths fast-gpr-paths

fast-validators: vm_fast_path_profile
	./vm_fast_path_profile $(TRACE) --state-validate > $(STATE_DIR)/vm_state_static_validate_fast.tsv
	./vm_fast_path_profile $(TRACE) --dispatch-validate > $(STATE_DIR)/vm_static_dispatch_validate_fast.tsv

fast-paths: vm_fast_path_profile
	./vm_fast_path_profile $(TRACE) > $(STATE_DIR)/vm_static_path_profile_fast.tsv
	./vm_fast_path_profile $(TRACE) --by-path > $(STATE_DIR)/vm_static_path_variants_fast.tsv
	./vm_fast_path_profile $(TRACE) --branch-sites > $(STATE_DIR)/vm_branch_sites_fast.tsv

fast-gpr-paths: vm_fast_path_profile
	./vm_fast_path_profile $(TRACE) --gpr-run $(GPR_RUN) > $(STATE_DIR)/vm_static_path_profile_gpr_seeded_fast.tsv
	./vm_fast_path_profile $(TRACE) --gpr-run $(GPR_RUN) --by-path > $(STATE_DIR)/vm_static_path_variants_gpr_seeded_fast.tsv
	./vm_fast_path_profile $(TRACE) --gpr-run $(GPR_RUN) --branch-sites > $(STATE_DIR)/vm_branch_sites_gpr_seeded_fast.tsv

clean:
	rm -f driver trace_preload.so vm_fast_path_profile
