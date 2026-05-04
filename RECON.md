# EAC ELF Reconstruction Notes

Target: `eac.elf`

SHA-256: `0b44ad59697129534189efdb75cde2b96245f831438e9f6a53cb7725f190d739`

## Current Artifacts

- `driver.c`: dlopen/dlsym harness for exported `x`, now also dumps the EAC memory maps, the output buffer, and the global sidecar context. Optional `EAC_DISPATCH_TRACE=1` patches selected dispatcher jumps to `int3`; `EAC_VMTAIL_TRACE=1` patches direct VM tail sites. Both trace modes log frame state plus sixteen 16-bit `ip_w*` lookahead words when detail data is available; `EAC_VMTAIL_REGS=1` also logs all GPRs at VM tail sites.
- `trace_preload.c`: libc/network/process tracer with EAC-relative caller offsets. Network and process spawning are denied by default unless `EAC_TRACE_ALLOW_NETWORK=1` or `EAC_TRACE_ALLOW_SPAWN=1`.
- `recon_summary.py`: summarizes a dump directory, trace call sites, dispatcher edges, executable pointer fixups, memory-vs-file mutations, and context pointers.
- `vm_tail_scan.py`: ranks observed dispatch-table targets and suggests extra `EAC_VMTAIL_SITES=0xsite:reg,...` hooks using Capstone.
- `vm_trace_graph.py`: converts a traced run into VM edge TSV form; default output is site-based, and `--sequential` emits dynamic per-frame transitions from ordered trace events. It parses arbitrary `ip_wN` fields; legacy TSVs still print `w0..w5`, but exact byte reconstruction uses the full logged lookahead window.
- `vm_handler_table.py`: merges dispatch-table metadata, dynamic trace profiles, and static Capstone handler features into one TSV.
- `vm_bytecode_blocks.py`: reduces direct executed VM instruction rows into contiguous bytecode coverage blocks. Default mode uses exact consumed bytes; `--include-sampled` adds logged prefix/backedge byte windows as partial coverage only.
- `vm_bytecode_recover.py`: reconstructs VM byte values from instruction rows, verifies byte consistency, and emits segment hashes plus a unique instruction table. Default mode is exact-only; `--include-sampled` also inserts logged prefix/backedge byte windows without claiming the full instruction length is known.
- `vm_bytecode_cfg.py`: builds a bytecode block graph from instruction rows and recovered exact bytecode segments.
- `vm_gap_report.py`: ranks bytecode and handler coverage gaps from instruction rows, recovered segments, ISA missing-exact rows, and per-handler semantic observations.
- `vm_isa_summary.py`: clusters exact recovered VM instruction signatures by source handler, fixed byte length, target distribution, and operand byte/word layout.
- `vm_semantic_templates.py`: merges ISA schemas with static handler features into per-handler rows and ranked semantic templates.
- `vm_handler_skeleton.py`: extracts normalized frame/IP/table access skeletons from handler disassembly and groups full, dispatch-tail, or canonical decode signatures.
- `vm_state_effects.py`: summarizes observed `frame+0x170`, `frame+0x23`, and `frame+0x194` changes per handler or per `(handler, delta, bytes)` signature from state-aware traces.
- `vm_state_affine.py`: fits and cross-validates affine formulas for the `frame+0x170` post-state from pre-state, instruction bytes, and optional traced flag/byte fields.
- `vm_state_static_slice.py`: statically tracks frame/IP pointers through handler code and emits symbolic update chains for `frame+0x170` and `frame+0x23`.
- `vm_state_static_validate.py`: concretely executes the static state slice over state-aware trace rows and validates predicted `frame+0x170` post-state.
- `vm_static_dispatch_validate.py`: concretely executes handler slices through the final table jump and validates predicted dispatch target plus VM IP advance.
- `vm_static_transfer_expr.py`: follows concrete state-aware trace paths while carrying symbolic expressions for the dispatch-table slot and VM IP advance; `--by-path` emits path-conditioned formula rows.
- `vm_static_path_profile.py`: profiles concrete branch/path variants through static handler slices over the state-aware trace.
- `vm_branch_predicates.py`: catalogs each static-replay branch predicate, including observed outcomes, unresolved predicate classes, and top concrete/symbolic condition expressions.
- `vm_dispatch_model_combine.py`: combines the static dispatch validator with affine fallback formulas for static-dispatch misses.
- `vm_tail_registers.py`: infers per-tail-site register roles from `EAC_VMTAIL_REGS=1` traces, including target value, dispatch-slot pointer, byte index, table pointer, and frame pointer. It can also join those roles back onto an instruction trace by source handler and tail site.
- `vm_tail_static_slots.py`: statically recovers consumed dispatch-slot temporaries for tail sites where the target is loaded from `table + byte_index` and the slot pointer is clobbered before the final jump.
- `vm_instruction_lift.py`: joins exact recovered VM instructions with per-signature state effects, compact state-affine tags, dynamic tail-register roles, static dispatch-slot provenance, and compact scalar/affine dispatch-formula tags.
- `vm_transition_model.py`: joins handler skeletons, static state chains, validation coverage, combined dispatch-model evidence, transfer expressions, branch-predicate provenance, and tail operand provenance into a one-row-per-dispatch-entry transition model.
- `vm_microcode_catalog.py`: renders the joined handler reconstruction into a compact pseudo-IR catalog and a Markdown digest for high-volume handlers, now including source-level branch-predicate summaries.
- `vm_path_microcode_catalog.py`: joins full concrete branch-path profiles with sampled path-conditioned transfer expressions into path-specialized pseudo-IR rows, carrying source branch-predicate context into each path row.
- `vm_bytecode_file_atlas.py`: verifies recovered exact VM bytes against `eac.elf` and builds conservative file-backed bytecode atlas regions from observed segments plus small inferred gaps.
- `vm_trace_file_fill.py`: promotes bounded positive `prefix_32_of_N` rows to `file_span_of_N` rows by reading bytes from `eac.elf`, preserving them as sampled/file-backed coverage rather than exact consumed instructions.
- `vm_instruction_compare.py`: compares exact unique VM instruction catalogs by stable instruction key.
- `vm_dispatch_formula.py`: fits simple expressions for the final dispatch byte index `target_entry * 8` from VM bytes plus rolling state.
- `vm_dispatch_formula_validate.py`: validates byte-only dispatch formulas against the long exact unique-instruction catalog.
- `vm_dispatch_affine.py`: fits exact GF(2) affine dispatch-index bit formulas from byte, state, and post-state features in a state-aware trace.
- `vm_dispatch_affine_cv.py`: cross-validates affine dispatch-index formulas by training on held-out folds of the state-aware trace.
- `dumps/local-blocked-log/run.stderr`: blocked-network trace from the harness.
- `dumps/local-blocked-log/postcall_*` and `postsleep_*`: in-memory EAC map/context/output dumps.
- `dumps/dispatch-trap/run.stderr`: targeted dispatcher trace with fast harness exit.
- `dumps/vmtail-allstatic/run.stderr`: dispatcher trace plus all statically found dispatch-table tail sites.
- `dumps/vmtail-allstatic/vm_table.tsv`: one row per dispatch-table entry with static tail candidate and observed hit counts.
- `dumps/vmtail-allstatic/vm_edges.tsv`: recovered VM edge list from the all-static trace.
- `dumps/vmtail-allstatic/vm_seq_edges.tsv`: dynamic sequential VM edge list from the same trace.
- `dumps/vmtail-allstatic/vm_source_profile.tsv`: per-source handler profile of outgoing sites, targets, VM IP deltas, and the first six logged `ip_w*` words.
- `dumps/vmtail-allstatic/vm_handler_table.tsv`: combined static/dynamic handler table for all 360 dispatch entries.
- `dumps/vmtail-wide/*`: repeat of the all-static trace using a wider `0x1200` static tail-site scan, covering long-tail handlers that the earlier `0x800` scan missed.
- `dumps/vmtail-wide/vm_instruction_trace.tsv`: direct executed VM instruction rows with source handler, start/end VM IP, target handler, logged words, consumed bytes, and byte exactness.
- `dumps/vmtail-wide/vm_bytecode_blocks.tsv`: contiguous exact bytecode coverage ranges derived from `vm_instruction_trace.tsv`.
- `dumps/vmtail-wide/vm_bytecode_segments.tsv`: conflict-checked exact byte segments with SHA-256 hashes and byte previews.
- `dumps/vmtail-wide/vm_instruction_unique.tsv`: deduplicated exact instruction rows collapsed by `(start_vm_ip, source_entry, delta, bytes)`.
- `dumps/vmtail-wide/vm_bytecode_block_edges.tsv`: aggregate control-flow edges between recovered bytecode segments.
- `dumps/vmtail-wide-1m/*`: earlier longer `0x1200` wide-tail run using the old shorter lookahead. The harness reached about 767k VM tail events before fast exit and expanded exact bytecode recovery from `0x24948` to `0x41d31` bytes with no byte conflicts.
- `dumps/vmtail-wide-w16/*`: current 250k comparison run with sixteen `ip_w*` words. It keeps the same direct graph shape as `dumps/vmtail-wide` but improves exact byte recovery to `0x24c51` bytes and reduces prefix-only instruction rows from 697 to 90.
- `dumps/vmtail-wide-1m-w16/*`: current long `0x1200` wide-tail run with sixteen `ip_w*` words. It improves long-run exact recovery from `0x41d31` to `0x421d3` bytes, raises exact-covered handlers from 171 to 190, and leaves no byte conflicts.
- `dumps/vmtail-wide-1m-w16/vm_isa_handlers.tsv`: exact-covered handler schema summary.
- `dumps/vmtail-wide-1m-w16/vm_isa_patterns.tsv`: exact-covered `(source handler, byte length)` operand-layout summary.
- `dumps/vmtail-wide-1m-w16/vm_isa_families.tsv`: operand-layout families grouped by byte length, shape, and constant byte positions.
- `dumps/vmtail-wide-1m-w16/vm_isa_missing_exact.tsv`: dynamic source handlers that still have no exact positive byte schema.
- `dumps/vmtail-wide-1m-w16/vm_handler_semantics.tsv`: one semantic row per dispatch-table entry, combining observation class, ISA shape, frame/IP/table access patterns, and dynamic target profile.
- `dumps/vmtail-wide-1m-w16/vm_semantic_templates.tsv`: ranked semantic templates grouped by observation class, byte shape, constant positions, static IP reads, frame writes, and dispatch-table access.
- `dumps/vmtail-wide-1m-w16/vm_handler_skeletons.tsv`: one row per dispatch-table entry with full normalized frame/IP/table skeleton, final dispatch suffix, and canonical decode signature.
- `dumps/vmtail-wide-1m-w16/vm_handler_decode_groups.tsv`: observed handlers grouped by canonical decode signature.
- `dumps/vmtail-wide-1m-w16/vm_handler_dispatch_groups.tsv`: observed handlers grouped by final dispatch-tail skeleton.
- `dumps/vmtail-wide-1m-w16/vm_handler_skeleton_groups.tsv`: observed handlers grouped by full normalized handler skeleton.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_segments_sampled.tsv`: exact plus sampled byte-window recovery; conflict-checked but not full-instruction exactness for sampled rows.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_sampled.tsv`: contiguous coverage blocks for exact plus sampled byte windows.
- `dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill.tsv`: bounded file-backed span trace with 466 promoted `file_span_of_N` rows.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_sampled.tsv`: sampled/file-backed byte recovery from `vm_instruction_trace_filefill.tsv`.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_filefill_sampled.tsv`: contiguous coverage blocks for sampled/file-backed recovery.
- `dumps/vmtail-wide-1m-w16/vm_gap_report_filefill.tsv`: gap report after bounded file-span coverage.
- `dumps/vmtail-wide-1m-w16/vm_state_static_slice.tsv`: static symbolic state/flag update chains for all dispatch entries.
- `dumps/vmtail-wide-1m-w16/vm_state_static_slice_entry258.tsv`: focused static state slice for the high-volume nonlinear entry 258.
- `dumps/vmtail-wide-1m-w16/vm_handler_tail_roles.tsv`: long-run source-handler/tail-site rows joined with register roles inferred from the 50k GPR smoke trace.
- `dumps/vmtail-wide-1m-w16/vm_handler_tail_roles_wide_regs.tsv`: same join using the 250k GPR trace for better low-frequency site coverage.
- `dumps/vmtail-wide-1m-w16/vm_tail_static_slots.tsv`: static dispatch-slot provenance joined to each long-run source-handler/tail-site row.
- `dumps/vmtail-wide-1m-w16/vm_instruction_lift.tsv`: one enriched row per exact recovered unique VM instruction.
- `dumps/vmtail-wide-1m-w16/vm_transition_model.tsv`: one consolidated transition-model row per dispatch entry.
- `dumps/vmtail-wide-1m-w16/vm_microcode_catalog.tsv`: compact pseudo-IR row per dispatch entry.
- `dumps/vmtail-wide-1m-w16/vm_microcode_top.md`: Markdown digest for the top observed dispatch entries by long-run event count.
- `dumps/vmtail-wide-1m-w16/vm_path_microcode_catalog.tsv`: compact pseudo-IR row per concrete source-handler branch path.
- `dumps/vmtail-wide-1m-w16/vm_path_microcode_top.md`: Markdown digest for the top concrete branch paths by state-trace event count.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_file_atlas.tsv`: file-backed VM bytecode atlas built from sampled bytecode segments with `--max-gap 0x20`.
- `dumps/vmtail-wide-1m-w16/vm_dispatch_formula_validate.tsv`: validation of byte-only dispatch formulas against long exact unique instructions.
- `dumps/vmtail-wide-1m-w16/vm_gap_report.tsv`: exact-segment coverage gap ranking.
- `dumps/vmtail-wide-1m-w16/vm_gap_report_sampled.tsv`: gap ranking after adding sampled byte-window coverage.
- `dumps/vmtail-mode0-w16/*` and `dumps/vmtail-mode2-w16/*`: 250k wide-tail traces for accepted alternate `x` modes 0 and 2.
- `dumps/vmtail-mode-compare.tsv`: exact unique-instruction comparison for mode 0, mode 1 250k, mode 1 long, and mode 2.
- `dumps/vmtail-state-wide-w16/run.stderr`: 250k state-aware VMTAIL trace. VMTAIL rows include `vm_flags`, `vm_state`, and `vm_byte` after each handler.
- `dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv`: state-aware instruction rows with appended `pre_*`, `post_*`, and `state_delta` columns.
- `dumps/vmtail-state-wide-w16/vm_state_effects.tsv`: per-handler frame-state effect summary.
- `dumps/vmtail-state-wide-w16/vm_state_signatures.tsv`: per-signature frame-state effect summary keyed by source handler, byte delta, byte status, and byte sequence.
- `dumps/vmtail-state-wide-w16/vm_state_affine.tsv`: affine `frame+0x170` post-state formulas using pre-state and instruction bytes, with 5-fold validation.
- `dumps/vmtail-state-wide-w16/vm_state_affine_fullfields.tsv`: affine `frame+0x170` post-state formulas using all traced state fields, with 5-fold validation.
- `dumps/vmtail-state-wide-w16/vm_state_static_validate.tsv`: concrete validation of static state slices against the state-aware instruction trace.
- `dumps/vmtail-state-wide-w16/vm_static_dispatch_validate.tsv`: concrete validation of static dispatch target and VM IP advance against the state-aware instruction trace.
- `dumps/vmtail-state-wide-w16/vm_static_transfer_expr.tsv`: sampled path-sensitive symbolic dispatch-slot and VM IP-advance expressions, generated from up to 128 state-aware rows per source.
- `dumps/vmtail-state-wide-w16/vm_static_path_transfer_expr.tsv`: path-conditioned symbolic dispatch-slot and IP-advance expressions over the same bounded transfer-expression sample.
- `dumps/vmtail-state-wide-w16/vm_static_path_profile.tsv`: per-source branch-path profile from concrete static handler replay over the full state-aware trace.
- `dumps/vmtail-state-wide-w16/vm_static_path_variants.tsv`: one row per distinct source-handler branch path, with per-path target distributions.
- `dumps/vmtail-state-wide-w16/vm_branch_predicates.tsv`: one row per source-handler branch site with outcome counts, unresolved predicate classes, and top condition expressions.
- `dumps/vmtail-state-wide-w16/vm_branch_predicates_top.md`: Markdown digest of the highest-volume unresolved branch predicates.
- `dumps/vmtail-state-wide-w16/vm_dispatch_model_combined.tsv`: combined static-plus-affine dispatch model coverage for the state-aware instruction trace.
- `dumps/vmtail-state-wide-w16/vm_dispatch_formulas.tsv`: fitted dispatch-index formulas from the state-aware instruction trace.
- `dumps/vmtail-state-wide-w16/vm_dispatch_affine.tsv`: exact affine dispatch-index fits from the state-aware instruction trace.
- `dumps/vmtail-state-wide-w16/vm_dispatch_affine_cv.tsv`: 5-fold held-out validation of affine dispatch-index fits.
- `dumps/vmtail-regs-smoke-w16/run.stderr`: 50k VMTAIL trace with full GPR snapshots at each tail site.
- `dumps/vmtail-regs-smoke-w16/vm_tail_registers.tsv`: per-site/per-register role evidence from the GPR trace.
- `dumps/vmtail-regs-smoke-w16/vm_tail_register_summary.tsv`: compact one-row-per-site register-role summary for lifting dispatch tails.
- `dumps/vmtail-regs-wide-w16/run.stderr`: 250k VMTAIL trace with full GPR snapshots at each tail site.
- `dumps/vmtail-regs-wide-w16/vm_tail_registers.tsv`: per-site/per-register role evidence from the 250k GPR trace.
- `dumps/vmtail-regs-wide-w16/vm_tail_register_summary.tsv`: compact one-row-per-site register-role summary from the 250k GPR trace.

Reproduction:

```sh
make
mkdir -p dumps/local-blocked-log
env EAC_DUMP_DIR=dumps/local-blocked-log \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 1 \
  >dumps/local-blocked-log/run.stdout \
  2>dumps/local-blocked-log/run.stderr
python3 recon_summary.py dumps/local-blocked-log --eac eac.elf
```

Dispatcher trace:

```sh
make
mkdir -p dumps/dispatch-trap
timeout 30s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/dispatch-trap/run.stdout \
  2>dumps/dispatch-trap/run.stderr
python3 recon_summary.py dumps/dispatch-trap --eac eac.elf
```

Dispatcher plus recursive direct VM tail trace:

```sh
make
mkdir -p dumps/vmtail-recursive
timeout 30s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_DETAIL=1 \
  EAC_VMTAIL_TRACE=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_VMTAIL_LIMIT=30000 \
  EAC_DUMP_DIR=dumps/vmtail-recursive \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/vmtail-recursive/run.stdout \
  2>dumps/vmtail-recursive/run.stderr
python3 recon_summary.py dumps/vmtail-recursive --eac eac.elf
python3 vm_tail_scan.py dumps/vmtail-recursive --eac eac.elf --limit 24
```

Extra tail hooks can be supplied without recompiling:

```sh
EAC_VMTAIL_SITES='0xb0458:r15,0xbf126:rbx,0xbf886:r15' ...
```

All-table static tail trace:

```sh
make
mkdir -p dumps/vmtail-allstatic
SPEC=$(python3 vm_tail_scan.py --all-table --eac eac.elf --window 0x800 --limit 0 \
  | sed -n 's/^EAC_VMTAIL_SITES=//p')
timeout 30s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_DETAIL=1 \
  EAC_VMTAIL_TRACE=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_VMTAIL_LIMIT=250000 \
  EAC_VMTAIL_SITES="$SPEC" \
  EAC_DUMP_DIR=dumps/vmtail-allstatic \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/vmtail-allstatic/run.stdout \
  2>dumps/vmtail-allstatic/run.stderr
python3 recon_summary.py dumps/vmtail-allstatic --eac eac.elf
python3 vm_tail_scan.py dumps/vmtail-allstatic --eac eac.elf --window 0x800 --table-report \
  >dumps/vmtail-allstatic/vm_table.tsv
python3 vm_trace_graph.py dumps/vmtail-allstatic --eac eac.elf \
  >dumps/vmtail-allstatic/vm_edges.tsv
python3 vm_trace_graph.py dumps/vmtail-allstatic --eac eac.elf --sequential \
  >dumps/vmtail-allstatic/vm_seq_edges.tsv
python3 vm_trace_graph.py dumps/vmtail-allstatic --eac eac.elf --source-profile \
  >dumps/vmtail-allstatic/vm_source_profile.tsv
python3 vm_handler_table.py dumps/vmtail-allstatic --eac eac.elf \
  >dumps/vmtail-allstatic/vm_handler_table.tsv
```

Wide-tail rerun with the current 16-word tracer:

```sh
make
mkdir -p dumps/vmtail-wide-w16
SPEC=$(python3 vm_tail_scan.py --all-table --eac eac.elf --window 0x1200 --limit 0 \
  | sed -n 's/^EAC_VMTAIL_SITES=//p')
timeout 30s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_DETAIL=1 \
  EAC_VMTAIL_TRACE=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_VMTAIL_LIMIT=250000 \
  EAC_VMTAIL_SITES="$SPEC" \
  EAC_DUMP_DIR=dumps/vmtail-wide-w16 \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/vmtail-wide-w16/run.stdout \
  2>dumps/vmtail-wide-w16/run.stderr
python3 vm_tail_scan.py dumps/vmtail-wide-w16 --eac eac.elf --window 0x1200 --table-report \
  >dumps/vmtail-wide-w16/vm_table.tsv
python3 vm_trace_graph.py dumps/vmtail-wide-w16 --eac eac.elf --window 0x1200 --sequential \
  >dumps/vmtail-wide-w16/vm_seq_edges.tsv
python3 vm_trace_graph.py dumps/vmtail-wide-w16 --eac eac.elf --window 0x1200 --source-profile \
  >dumps/vmtail-wide-w16/vm_source_profile.tsv
python3 vm_trace_graph.py dumps/vmtail-wide-w16 --eac eac.elf --window 0x1200 --instruction-trace \
  >dumps/vmtail-wide-w16/vm_instruction_trace.tsv
python3 vm_handler_table.py dumps/vmtail-wide-w16 --eac eac.elf --window 0x1200 \
  >dumps/vmtail-wide-w16/vm_handler_table.tsv
python3 vm_bytecode_blocks.py dumps/vmtail-wide-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-wide-w16/vm_bytecode_blocks.tsv
python3 vm_bytecode_recover.py dumps/vmtail-wide-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-wide-w16/vm_bytecode_segments.tsv
python3 vm_bytecode_recover.py dumps/vmtail-wide-w16/vm_instruction_trace.tsv --instructions \
  >dumps/vmtail-wide-w16/vm_instruction_unique.tsv
python3 vm_bytecode_cfg.py dumps/vmtail-wide-w16/vm_instruction_trace.tsv \
  --segments dumps/vmtail-wide-w16/vm_bytecode_segments.tsv \
  >dumps/vmtail-wide-w16/vm_bytecode_block_edges.tsv
```

Long wide-tail rerun with the current 16-word tracer:

```sh
make
mkdir -p dumps/vmtail-wide-1m-w16
SPEC=$(python3 vm_tail_scan.py --all-table --eac eac.elf --window 0x1200 --limit 0 \
  | sed -n 's/^EAC_VMTAIL_SITES=//p')
timeout 75s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_DETAIL=1 \
  EAC_VMTAIL_TRACE=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_VMTAIL_LIMIT=1000000 \
  EAC_VMTAIL_SITES="$SPEC" \
  EAC_DUMP_DIR=dumps/vmtail-wide-1m-w16 \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/vmtail-wide-1m-w16/run.stdout \
  2>dumps/vmtail-wide-1m-w16/run.stderr
python3 recon_summary.py dumps/vmtail-wide-1m-w16 --eac eac.elf \
  >dumps/vmtail-wide-1m-w16/recon_summary.txt
python3 vm_tail_scan.py dumps/vmtail-wide-1m-w16 --eac eac.elf --window 0x1200 --table-report \
  >dumps/vmtail-wide-1m-w16/vm_table.tsv
python3 vm_trace_graph.py dumps/vmtail-wide-1m-w16 --eac eac.elf --window 0x1200 \
  >dumps/vmtail-wide-1m-w16/vm_edges.tsv
python3 vm_trace_graph.py dumps/vmtail-wide-1m-w16 --eac eac.elf --window 0x1200 --sequential \
  >dumps/vmtail-wide-1m-w16/vm_seq_edges.tsv
python3 vm_trace_graph.py dumps/vmtail-wide-1m-w16 --eac eac.elf --window 0x1200 --source-profile \
  >dumps/vmtail-wide-1m-w16/vm_source_profile.tsv
python3 vm_trace_graph.py dumps/vmtail-wide-1m-w16 --eac eac.elf --window 0x1200 --instruction-trace \
  >dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv
python3 vm_handler_table.py dumps/vmtail-wide-1m-w16 --eac eac.elf --window 0x1200 \
  >dumps/vmtail-wide-1m-w16/vm_handler_table.tsv
python3 vm_bytecode_blocks.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-wide-1m-w16/vm_bytecode_blocks.tsv
python3 vm_bytecode_recover.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-wide-1m-w16/vm_bytecode_segments.tsv
python3 vm_bytecode_recover.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv --instructions \
  >dumps/vmtail-wide-1m-w16/vm_instruction_unique.tsv
python3 vm_bytecode_cfg.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv \
  --segments dumps/vmtail-wide-1m-w16/vm_bytecode_segments.tsv \
  >dumps/vmtail-wide-1m-w16/vm_bytecode_block_edges.tsv
python3 vm_bytecode_blocks.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv --include-sampled \
  >dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_sampled.tsv
python3 vm_bytecode_recover.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv --include-sampled \
  >dumps/vmtail-wide-1m-w16/vm_bytecode_segments_sampled.tsv
python3 vm_gap_report.py dumps/vmtail-wide-1m-w16 \
  >dumps/vmtail-wide-1m-w16/vm_gap_report.tsv
python3 vm_gap_report.py dumps/vmtail-wide-1m-w16 \
  --segments dumps/vmtail-wide-1m-w16/vm_bytecode_segments_sampled.tsv \
  >dumps/vmtail-wide-1m-w16/vm_gap_report_sampled.tsv
python3 vm_isa_summary.py dumps/vmtail-wide-1m-w16/vm_instruction_unique.tsv \
  >dumps/vmtail-wide-1m-w16/vm_isa_handlers.tsv
python3 vm_isa_summary.py dumps/vmtail-wide-1m-w16/vm_instruction_unique.tsv --patterns \
  >dumps/vmtail-wide-1m-w16/vm_isa_patterns.tsv
python3 vm_isa_summary.py dumps/vmtail-wide-1m-w16/vm_instruction_unique.tsv --families \
  >dumps/vmtail-wide-1m-w16/vm_isa_families.tsv
python3 vm_isa_summary.py dumps/vmtail-wide-1m-w16/vm_instruction_unique.tsv \
  --source-profile dumps/vmtail-wide-1m-w16/vm_source_profile.tsv \
  --missing-exact \
  >dumps/vmtail-wide-1m-w16/vm_isa_missing_exact.tsv
python3 vm_semantic_templates.py dumps/vmtail-wide-1m-w16 \
  >dumps/vmtail-wide-1m-w16/vm_semantic_templates.tsv
python3 vm_semantic_templates.py dumps/vmtail-wide-1m-w16 --per-handler \
  >dumps/vmtail-wide-1m-w16/vm_handler_semantics.tsv
python3 vm_handler_skeleton.py dumps/vmtail-wide-1m-w16 \
  >dumps/vmtail-wide-1m-w16/vm_handler_skeletons.tsv
python3 vm_handler_skeleton.py dumps/vmtail-wide-1m-w16 --groups --group-key decode \
  >dumps/vmtail-wide-1m-w16/vm_handler_decode_groups.tsv
python3 vm_handler_skeleton.py dumps/vmtail-wide-1m-w16 --groups --group-key dispatch \
  >dumps/vmtail-wide-1m-w16/vm_handler_dispatch_groups.tsv
python3 vm_handler_skeleton.py dumps/vmtail-wide-1m-w16 --groups --group-key skeleton \
  >dumps/vmtail-wide-1m-w16/vm_handler_skeleton_groups.tsv
```

State-aware wide-tail rerun:

```sh
make
mkdir -p dumps/vmtail-state-wide-w16
SPEC=$(python3 vm_tail_scan.py --all-table --eac eac.elf --window 0x1200 --limit 0 \
  | sed -n 's/^EAC_VMTAIL_SITES=//p')
timeout 45s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_DETAIL=1 \
  EAC_VMTAIL_TRACE=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_VMTAIL_LIMIT=250000 \
  EAC_VMTAIL_SITES="$SPEC" \
  EAC_DUMP_DIR=dumps/vmtail-state-wide-w16 \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/vmtail-state-wide-w16/run.stdout \
  2>dumps/vmtail-state-wide-w16/run.stderr
python3 vm_trace_graph.py dumps/vmtail-state-wide-w16 --eac eac.elf --window 0x1200 --instruction-trace \
  >dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv
python3 vm_state_effects.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-state-wide-w16/vm_state_effects.tsv
python3 vm_state_effects.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv --by-signature \
  >dumps/vmtail-state-wide-w16/vm_state_signatures.tsv
python3 vm_state_affine.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv --cv-folds 5 \
  >dumps/vmtail-state-wide-w16/vm_state_affine.tsv
python3 vm_state_affine.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv \
  --include-flags --include-vm-byte --cv-folds 5 \
  >dumps/vmtail-state-wide-w16/vm_state_affine_fullfields.tsv
python3 vm_state_static_validate.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-state-wide-w16/vm_state_static_validate.tsv
python3 vm_static_dispatch_validate.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-state-wide-w16/vm_static_dispatch_validate.tsv
python3 vm_static_transfer_expr.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv \
  --max-rows-per-source 128 --max-expr-len 320 --top 5 \
  >dumps/vmtail-state-wide-w16/vm_static_transfer_expr.tsv
python3 vm_static_transfer_expr.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv \
  --max-rows-per-source 128 --max-expr-len 320 --top 5 --by-path \
  >dumps/vmtail-state-wide-w16/vm_static_path_transfer_expr.tsv
python3 vm_static_path_profile.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-state-wide-w16/vm_static_path_profile.tsv
python3 vm_static_path_profile.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv --by-path \
  >dumps/vmtail-state-wide-w16/vm_static_path_variants.tsv
python3 vm_branch_predicates.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-state-wide-w16/vm_branch_predicates.tsv
python3 vm_branch_predicates.py --markdown \
  --from-tsv dumps/vmtail-state-wide-w16/vm_branch_predicates.tsv \
  >dumps/vmtail-state-wide-w16/vm_branch_predicates_top.md
python3 vm_dispatch_model_combine.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-state-wide-w16/vm_dispatch_model_combined.tsv
python3 vm_dispatch_formula.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-state-wide-w16/vm_dispatch_formulas.tsv
python3 vm_dispatch_affine.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-state-wide-w16/vm_dispatch_affine.tsv
python3 vm_dispatch_affine_cv.py dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-state-wide-w16/vm_dispatch_affine_cv.tsv
```

Register-role VM tail wide trace:

```sh
make
mkdir -p dumps/vmtail-regs-wide-w16
SPEC=$(python3 vm_tail_scan.py --all-table --eac eac.elf --window 0x1200 --limit 0 \
  | sed -n 's/^EAC_VMTAIL_SITES=//p')
timeout 45s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_DETAIL=1 \
  EAC_VMTAIL_TRACE=1 \
  EAC_VMTAIL_REGS=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_VMTAIL_LIMIT=250000 \
  EAC_VMTAIL_SITES="$SPEC" \
  EAC_DUMP_DIR=dumps/vmtail-regs-wide-w16 \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/vmtail-regs-wide-w16/run.stdout \
  2>dumps/vmtail-regs-wide-w16/run.stderr
python3 vm_tail_registers.py dumps/vmtail-regs-wide-w16 --eac eac.elf \
  >dumps/vmtail-regs-wide-w16/vm_tail_registers.tsv
python3 vm_tail_registers.py dumps/vmtail-regs-wide-w16 --eac eac.elf --site-summary \
  >dumps/vmtail-regs-wide-w16/vm_tail_register_summary.tsv
python3 vm_tail_registers.py dumps/vmtail-regs-wide-w16 --eac eac.elf \
  --instruction-trace dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv \
  >dumps/vmtail-wide-1m-w16/vm_handler_tail_roles_wide_regs.tsv
python3 vm_tail_static_slots.py dumps/vmtail-wide-1m-w16/vm_handler_tail_roles_wide_regs.tsv \
  --eac eac.elf \
  >dumps/vmtail-wide-1m-w16/vm_tail_static_slots.tsv
python3 vm_instruction_lift.py \
  >dumps/vmtail-wide-1m-w16/vm_instruction_lift.tsv
python3 vm_transition_model.py \
  >dumps/vmtail-wide-1m-w16/vm_transition_model.tsv
python3 vm_microcode_catalog.py \
  >dumps/vmtail-wide-1m-w16/vm_microcode_catalog.tsv
python3 vm_microcode_catalog.py --markdown --limit 30 \
  >dumps/vmtail-wide-1m-w16/vm_microcode_top.md
python3 vm_path_microcode_catalog.py \
  >dumps/vmtail-wide-1m-w16/vm_path_microcode_catalog.tsv
python3 vm_path_microcode_catalog.py --markdown --limit 30 \
  >dumps/vmtail-wide-1m-w16/vm_path_microcode_top.md
python3 vm_dispatch_formula_validate.py \
  >dumps/vmtail-wide-1m-w16/vm_dispatch_formula_validate.tsv
python3 vm_bytecode_file_atlas.py --max-gap 0x20 \
  >dumps/vmtail-wide-1m-w16/vm_bytecode_file_atlas.tsv
python3 vm_trace_file_fill.py dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv \
  --eac eac.elf \
  --max-delta 0x400 \
  >dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill.tsv
python3 vm_state_static_slice.py \
  >dumps/vmtail-wide-1m-w16/vm_state_static_slice.tsv
python3 vm_state_static_slice.py --entries 258 \
  >dumps/vmtail-wide-1m-w16/vm_state_static_slice_entry258.tsv
python3 vm_bytecode_recover.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill.tsv \
  --include-sampled \
  >dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_sampled.tsv
python3 vm_bytecode_blocks.py dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill.tsv \
  --include-sampled \
  >dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_filefill_sampled.tsv
mkdir -p dumps/vmtail-wide-1m-w16-filefill
ln -sf ../vmtail-wide-1m-w16/vm_instruction_trace_filefill.tsv \
  dumps/vmtail-wide-1m-w16-filefill/vm_instruction_trace.tsv
ln -sf ../vmtail-wide-1m-w16/vm_bytecode_segments_filefill_sampled.tsv \
  dumps/vmtail-wide-1m-w16-filefill/vm_bytecode_segments.tsv
ln -sf ../vmtail-wide-1m-w16/vm_isa_missing_exact.tsv \
  dumps/vmtail-wide-1m-w16-filefill/vm_isa_missing_exact.tsv
ln -sf ../vmtail-wide-1m-w16/vm_handler_semantics.tsv \
  dumps/vmtail-wide-1m-w16-filefill/vm_handler_semantics.tsv
python3 vm_gap_report.py dumps/vmtail-wide-1m-w16-filefill \
  >dumps/vmtail-wide-1m-w16/vm_gap_report_filefill.tsv
```

Mode-variation checks:

```sh
make
SPEC=$(python3 vm_tail_scan.py --all-table --eac eac.elf --window 0x1200 --limit 0 \
  | sed -n 's/^EAC_VMTAIL_SITES=//p')
for MODE in 0 2; do
  DIR=dumps/vmtail-mode${MODE}-w16
  mkdir -p "$DIR"
  timeout 45s env EAC_FAST_EXIT=1 \
    EAC_DISPATCH_TRACE=1 \
    EAC_DISPATCH_DETAIL=1 \
    EAC_VMTAIL_TRACE=1 \
    EAC_DISPATCH_LIMIT=4096 \
    EAC_VMTAIL_LIMIT=250000 \
    EAC_VMTAIL_SITES="$SPEC" \
    EAC_DUMP_DIR="$DIR" \
    EAC_LAUNCHERDIR=/tmp/fake_launcher \
    LD_PRELOAD=./trace_preload.so \
    ./driver ./eac.elf "$MODE" x 0x800 0 \
    >"$DIR/run.stdout" \
    2>"$DIR/run.stderr"
  python3 vm_trace_graph.py "$DIR" --eac eac.elf --window 0x1200 --instruction-trace \
    >"$DIR/vm_instruction_trace.tsv"
  python3 vm_bytecode_recover.py "$DIR/vm_instruction_trace.tsv" \
    >"$DIR/vm_bytecode_segments.tsv"
  python3 vm_bytecode_recover.py "$DIR/vm_instruction_trace.tsv" --instructions \
    >"$DIR/vm_instruction_unique.tsv"
  python3 vm_bytecode_recover.py "$DIR/vm_instruction_trace.tsv" --include-sampled \
    >"$DIR/vm_bytecode_segments_sampled.tsv"
done
python3 vm_instruction_compare.py \
  dumps/vmtail-wide-1m-w16/vm_instruction_unique.tsv \
  dumps/vmtail-wide-w16/vm_instruction_unique.tsv \
  dumps/vmtail-mode0-w16/vm_instruction_unique.tsv \
  dumps/vmtail-mode2-w16/vm_instruction_unique.tsv \
  >dumps/vmtail-mode-compare.tsv
```

## ELF Overview

- ELF64 x86-64 shared object, stripped, PIE, NX stack, partial RELRO.
- Entry point: `0x20c00`.
- Only meaningful product export: `x` at `0x380dc`, size `234`.
- Embedded libraries/symbol surfaces include Zydis, BLAKE3, mbedTLS/PolarSSL strings, and libstdc++ support code.
- `.text` is large (`0x562a50`) and the first load segment is mapped RWE by the ELF headers. At runtime the loader maps the main code page range as `rwxp`.
- `.init_array` has 22 constructors from `0x21700`, `0x20dca`, ... `0x215b0`.

## Exported Entry `x`

`x(void *buf, uint32_t len)` is a small ABI gate and bootstrap:

- rejects `len <= 0x13`;
- requires `*(u32 *)(buf+0) <= 2`;
- requires `*(u32 *)(buf+4) == len`;
- requires `*(u32 *)(buf+8) == 1`;
- one-shot guards on global byte `base+0x84cdd0`;
- rejects `*(u32 *)(buf+0x14) > 2`;
- allocates `0x23f0`;
- calls constructor `0x2cafa`;
- stores the allocated context at global `base+0x84cdd8` and `base+0x84cd20`;
- chooses output pointer from `*(u64 *)(buf+0x0c)`, else fallback `base+0x84cde0`;
- calls main setup `0x2ceb0(ctx, mode2, game, product, sandbox, launcher, extra, out)`.

Synthetic input fields used by the harness:

- `buf+0x1c`: game name
- `buf+0x5c`: product name
- `buf+0x9c`: sandbox name
- `buf+0xdc`: launcher path/name
- `buf+0x2dc`: extra string

Observed return: `0`; `out[0] = 1`.

## Context Object

The primary sidecar object is `0x23f0` bytes.

Important offsets from `postcall_ctx`:

- `ctx+0x0000 = eac+0x842bb0`: primary vtable
- `ctx+0x0008 = eac+0x83c430`
- `ctx+0x0020 = eac+0x83c918`
- `ctx+0x09e0 = eac+0x842d48`
- `ctx+0x1648 = eac+0x842f60`
- `ctx+0x1a78 = eac+0x842f60`
- `ctx+0x1c30 = eac+0x842f60`
- `ctx+0x1dd0 = eac+0x842f60`
- `ctx+0x2080 = eac+0x83c4c0`
- `ctx+0x2090 = eac+0x842f60`
- `ctx+0x2238` points to an inline/small heap vector area near `ctx+0x2268`
- `ctx+0x2388` and `ctx+0x2390` point near `ctx+0x2378`

Vtable `eac+0x842bb0` relocates to:

- `0x2ccd6`: destructor body
- `0x2ce82`: destructor plus free
- `0x2d520`
- `0x3331c`

Constructor `0x2cafa` initializes subobjects at:

- `ctx+0x1a50`
- `ctx+0x1a78`
- `ctx+0x1c30`
- `ctx+0x1dd0`
- `ctx+0x1f78`
- `ctx+0x2080`
- `ctx+0x22a8`
- `ctx+0x2330`

## Runtime Behavior From Blocked Trace

Call-site catalog from `dumps/local-blocked-log/run.stderr`:

- `0x72b70`: creates three worker threads.
- Thread start is `0x729fe`, a thunk that invokes `arg->vtable[4](arg)`.
- `0x6b74f`: DNS via `getaddrinfo`.
- `0x6b7f7`: fallback `host -4 ...` via `popen`.
- `0x1a689b` and `0x1a6a09`: `mprotect` page 0 RW then R.
- `0x4c000b`: reads `/dev/urandom`.
- `0x3376ac`, `0x334271`, `0x33ae27`, `0x33d5f1`: self process comm/cmdline/status/maps.
- `0x58b24`: `/proc/mounts`, `/proc/modules`, and later `/proc/self/maps`.
- `0x36a519`, `0x36e0cf`: DMI board/product.
- `0x3722d8`: `/proc/bus/pci/devices`.
- `0x30d25c`: hardware and OS identity files under `/sys/class/dmi`, `/sys/class/block`, `/proc/cpuinfo`, `/etc/machine-id`, `/etc/hostname`.
- `0x2ef009`, `0x2efed1`, `0x2f0707`: enumerate `/dev/disk/by-id`, `readlink`, `realpath`.
- `0x2cb09b`: `lshw -C display`.
- `0x2f9551`: `/proc/net/route`.
- `0x305069`, `0x305d88`, `0x306735`: enumerate `/sys/class/net`.
- `0x350c8d`, `0x161ea8`: checks `LD_PRELOAD`.
- `0x35284b`, `0x161468`: checks `LD_AUDIT`.
- `0x162bce`: checks `_EAC_DEV`.
- `0x3909b`, `0x2042b6`: locates and hashes/reads `/proc/self/exe` (`driver` in this harness).
- `0x208abf`, `0x220c4d`, `0x221670`, `0x22d2ca`: process enumeration over `/proc/<pid>/{exe,comm,cmdline}`.

Network endpoints attempted with network denied:

- `api.epicgames.dev:443`
- `datarouter.ol.epicgames.com:443`

## Runtime Mutation / Anti-Dump

`postcall` memory differs from the file in ways that are not only dynamic relocations:

- page 0 (`off 0x0`) differs at bytes `0x1-0x4` and `0x19-0x1e`;
- after `mprotect(base, 0x1000, RW)` and `mprotect(base, 0x1000, R)`, the ELF magic is corrupted from `7f 45 4c 46` to `7f c5 ac e6`;
- ELF header entry bytes at `0x19-0x1e` are rewritten to a loaded pointer-like value;
- executable map `off 0x1000` has 1573 byte differences postcall;
- an executable-section zero slab starting around file offset `0x7836c` is filled with live pointers/state. Dispatch tracing shows the active obfuscation/VM frame is `base+0x7836d`, exactly inside this slab. There are no matching ELF relocation entries for those offsets;
- executable file range `0xc3718-0xc4258` is a 360-entry pointer table. The file stores raw offsets, while runtime memory stores `base + offset`. No ELF relocation entries exist for the sampled slots, so this is a custom/runtime fixup region inside `.text`;
- `postcall` to `postsleep` changes continue in the same slab and in writable data, indicating worker-thread state updates.

This is a practical anti-dump indicator: dumpers relying on loaded ELF headers will see a deliberately damaged header, while static `.text` also contains runtime-filled data islands.

## Obfuscation Shape

Many call sites are not normal compiler output. They use:

- `pushf` prologues;
- redundant pushes/pops and `xchg [rsp], reg`;
- stack-pointer arithmetic through memory;
- immediate arithmetic to synthesize small constants or target offsets;
- jumps into shared dispatcher-like blocks, especially `0xc823b`, `0xcdc60`, and related ranges;
- inline high-entropy byte spans that break linear disassembly between real basic blocks.

Dynamic dispatcher recovery from `EAC_DISPATCH_TRACE=1`:

- both dispatcher sites currently sampled, `0xc80b9` and `0xcdac7`, use the same fixed-up table base `0xc3718`;
- table byte index is held in `rbx` after the dispatcher's `shl rbx, 3`, so entry index is `idx / 8`;
- detailed tracing confirms `*(u64 *)(frame+0x10f) == base+0xc3718` on every sampled central dispatch and VM tail;
- all 3385 sampled dispatches used frame `base+0x7836d`;
- the frame field at `+0x0a` behaves like an encoded instruction pointer. It points into jump-over bytecode/data islands inside `.text`; top observed offsets include `0x310ca5`, `0x310ef0`, `0x311163`, `0x3113a5`, `0x3115e7`, and `0x311829`;
- observed edges in the synthetic blocked-network path:

| Count | Site | Table Entry | Slot | Target |
| ---: | --- | ---: | --- | --- |
| 1747 | `0xcdac7` | 169 | `0xc3c60` | `0x9af18` |
| 1562 | `0xcdac7` | 310 | `0xc40c8` | `0xb8556` |
| 36 | `0xc80b9` | 310 | `0xc40c8` | `0xb8556` |
| 31 | `0xc80b9` | 169 | `0xc3c60` | `0x9af18` |
| 5 | `0xc80b9` | 86 | `0xc39c8` | `0x8a37f` |
| 2 | `0xc80b9` | 42 | `0xc3868` | `0x815ea` |
| 1 | `0xcdac7` | 323 | `0xc4130` | `0xbb6e6` |
| 1 | `0xcdac7` | 42 | `0xc3868` | `0x815ea` |

The dispatch table at file offset `0xc3718` has 360 unique raw file-offset targets. The loader/custom runtime fixes all 360 qwords to `base + target`. Initial high-frequency entries from the central dispatcher and first tail layer:

| Entry | Slot | Target |
| ---: | --- | --- |
| 42 | `0xc3868` | `0x815ea` |
| 86 | `0xc39c8` | `0x8a37f` |
| 165 | `0xc3c40` | `0x9a24c` |
| 169 | `0xc3c60` | `0x9af18` |
| 171 | `0xc3c70` | `0x9b4b3` |
| 310 | `0xc40c8` | `0xb8556` |
| 323 | `0xc4130` | `0xbb6e6` |
| 354 | `0xc4228` | `0xc2241` |

`EAC_VMTAIL_TRACE=1` additionally patches selected register tail jumps in the observed handler blocks:

- `0x8173b`: `jmp rax`
- `0x8a49b`: `jmp r8`
- `0x9a46b`: `jmp r9`
- `0x9b0c5`: `jmp r10`
- `0x9b687`: `jmp r14`
- `0xb86f5`: `jmp r13`
- `0xbb8a8`: `jmp rax`
- `0xbba0c`: `jmp r12`
- `0xc240d`: `jmp rdx`

Additional sites can be injected with `EAC_VMTAIL_SITES=0xsite:reg,...`; the driver patches those sites and emulates the original register jump from the signal context. `vm_tail_scan.py` generates these strings from prior traces.

Static table scanning found 348 of the 360 dispatch-table entries have an apparent `jmp reg` tail within `0x800` bytes of the table target. These collapse to 300 unique candidate tail sites. The 12 table entries without a candidate under that window are:

`32`, `69`, `75`, `85`, `101`, `102`, `210`, `241`, `246`, `284`, `316`, `334`.

The first tail pass showed entries 165, 171, and 354 as hot second-layer handlers. Adding their tail sites expanded the current synthetic run to 10834 direct VM tail jumps, all using frame `base+0x7836d` and table `base+0xc3718`. Tail targets were concentrated on:

| Count | Tail Target Entry | Target |
| ---: | ---: | --- |
| 1689 | 171 | `0x9b4b3` |
| 1345 | 354 | `0xc2241` |
| 1309 | 165 | `0x9a24c` |
| 528 | 268 | `0xb0007` |
| 469 | 337 | `0xbec0e` |
| 449 | 340 | `0xbf435` |
| 415 | 114 | `0x90319` |
| 413 | 157 | `0x98a9a` |
| 412 | 333 | `0xbd8af` |

The auto-expanded pass in `dumps/vmtail-auto3` used three waves of scanner-suggested sites. It hit the configured `EAC_VMTAIL_LIMIT=160000`, observed 172 of the 360 dispatch-table entries, and expanded VM instruction-pointer coverage to 31149 unique offsets. Current bands include `0xd0ac0-0xdaf35`, `0x11ac5e-0x11db08`, `0x18b66f-0x18c463`, `0x22fe2d-0x231210`, `0x249468-0x24bd26`, `0x26cd75-0x26f073`, `0x30e876-0x31f2ad`, and `0x33170b-0x34355b`.

The all-static pass in `dumps/vmtail-allstatic` hit `EAC_VMTAIL_LIMIT=250000`, observed 192 table entries through tail targets and 195 table entries including central dispatch, and expanded VM instruction-pointer coverage to 39738 unique offsets. All 250000 tail targets resolved to known dispatch-table entries, so the static candidate tail hooks are coherent for this path.

The recovered static-site VM graph from that run has 4263 distinct edge rows in `vm_edges.tsv` over the synthetic blocked-network path.

The sequential VM graph in `vm_seq_edges.tsv` is built from consecutive trace events per VM frame and stops at the tail logging cap by default. A tail event is treated as a direct edge only when its tail site statically belongs to the previous target handler; central-dispatch events are kept as central-dispatch edges. This avoids falsely treating helper returns or uninstrumented intermediate paths as direct VM branches.

The older `dumps/vmtail-allstatic` graph skipped 842 unhooked-source candidates and 588 indirect-site candidates. It kept 4274 direct transition rows over 249120 observed branch events: 4241 tail rows, 33 central-dispatch rows, 181 source entries, 195 target entries, and 4262 distinct source-target entry pairs.

The wider `dumps/vmtail-wide` rerun used an all-table `0x1200` tail scan. It removed the unhooked-source gap and skipped only 782 indirect-site candidates. Its direct graph has 4296 transition rows over 249764 observed branch events: 4263 tail rows, 33 central-dispatch rows, 191 source entries, 195 target entries, and 4284 distinct source-target entry pairs.

The current `dumps/vmtail-wide-w16` comparison run repeats that 250k trace with sixteen `ip_w*` lookahead words. The direct graph stayed the same size, but instruction recovery improved from 248299 to 248906 exact rows, prefix-only rows dropped from 697 to 90, and exact byte recovery grew from `0x24948` to `0x24c51` bytes with no conflicts.

The current long `dumps/vmtail-wide-1m-w16` run used the same `0x1200` all-table scan with `EAC_VMTAIL_LIMIT=1000000`. It produced 767437 complete VMTAIL line records and 3385 central-dispatch records. After direct-edge filtering it skipped 1605 indirect-site candidates and kept 4795 transition rows over 769216 branch events: 4756 tail rows covering 765832 events, 39 central-dispatch rows covering 3384 events, 202 source entries, 205 target entries, and 4782 distinct source-target entry pairs.

Top sequential VM transitions in the long run:

| Count | Source Entry | Site | Target Entry | Target | VM IP Delta |
| ---: | ---: | --- | ---: | --- | --- |
| 2147 | 28 | `0x7e7ca` | 347 | `0xc088d` | `+0x3` |
| 2091 | 64 | `0x8536e` | 18 | `0x7be9b` | `+0x4` |
| 2041 | 114 | `0x90893` | 66 | `0x855ff` | `+0x4` |
| 1928 | 347 | `0xc0d7b` | 18 | `0x7be9b` | `+0x4` |
| 1894 | 189 | `0x9eac9` | 18 | `0x7be9b` | `+0x4` |
| 1787 | 337 | `0xbf126` | 297 | `0xb64d7` | `+0x4` |
| 1754 | 307 | `0xb837a` | 114 | `0x90319` | `+0x3` |
| 1748 | 340 | `0xbf886` | 307 | `0xb8064` | `+0x4` |
| 1729 | 18 | `0x7c308` | 114 | `0x90319` | `+0x3` |
| 1702 | 340 | `0xbf886` | 28 | `0x7e390` | `+0x4` |

The source profile in `vm_source_profile.tsv` covers 191 source handlers in the 250k wide run. The current long W16 profile covers 202 source handlers. The hottest long-run sources are strongly site-stable:

| Events | Source Entry | Source Target | Outgoing Site | VM IP Delta |
| ---: | ---: | --- | --- | --- |
| 28058 | 258 | `0xadf2c` | `0xae32f` | `+0x4` |
| 26610 | 28 | `0x7e390` | `0x7e7ca` | `+0x3` |
| 26534 | 337 | `0xbec0e` | `0xbf126` | `+0x4` |
| 26112 | 340 | `0xbf435` | `0xbf886` | `+0x4` |
| 25448 | 18 | `0x7be9b` | `0x7c308` | `+0x3` |
| 25300 | 114 | `0x90319` | `0x90893` | `+0x4` |
| 25112 | 189 | `0x9e7af` | `0x9eac9` | `+0x4` |
| 24299 | 347 | `0xc088d` | `0xc0d7b` | `+0x4` |
| 24095 | 307 | `0xb8064` | `0xb837a` | `+0x3` |
| 23678 | 64 | `0x85059` | `0x8536e` | `+0x4` |

The combined handler table in `vm_handler_table.tsv` now provides one row for every dispatch-table entry. It includes static span length, conditional-branch/jump/call/return counts, frame-relative reads/writes, inferred bytecode-pointer reads, inferred dispatch-table reads, and the dynamic source profile where available. The static dataflow is intentionally lightweight: it tracks registers derived from `rbp`, the VM bytecode pointer loaded from `frame+0x0a`, and the dispatch table loaded from `frame+0x10f`.

Current handler-table facts:

- 360 dispatch entries are present.
- The `0x800`/`0x900` scan missed 12 long-tail entries; the `0x1200` wide scan finds a candidate for every dispatch entry.
- 11 of those previously missed entries were observed as targets in the wide runs; entry 32 (`0x7efa8`) remains unobserved even in `vmtail-wide-1m-w16`.
- Entry 69 (`0x85f24`) is still special. The wide linear scan associates it with entry 70's tail site after a `ret`, so its dynamic edges should be treated as helper-return/continuation behavior rather than a normal direct tail. In `vmtail-wide-1m-w16` it was reached 23 times as a target but only contributes 2 direct source events after filtering; it reads richer bytecode operands through `frame+0x0a` and writes `frame+0x1dc`.
- All 360 wide handler-table rows now have an inferred dispatch-table read, but entry 69's read belongs to the post-`ret` linear span and should not be interpreted as its own direct tail path.
- Only entries 264 (`0xaf4cf`) and 265 (`0xaf57f`) contain direct `call` instructions in the scanned span. Entry 264 was observed and fans into central-dispatch targets 169, 171, 310, 354, and 165.

Weighted by source events in the long run, dominant VM IP deltas are:

| Events | VM IP Delta |
| ---: | --- |
| 463848 | `+0x4` |
| 182878 | `+0x3` |
| 51707 | `+0x5` |
| 45212 | `+0x2` |
| 20476 | `+0x6` |
| 3275 | `+0xa` |
| 255 | `-0x6d` |
| 255 | `-0x3c4` |
| 230 | `-0x40` |
| 182 | `+0x2d` |

The executed-instruction listing in `vm_instruction_trace.tsv` has 769216 direct rows from the current long W16 trace. Each row attributes a branch to the previous direct source handler and records the bytecode pointer before and after that handler. The `bytes` column is exact when the positive delta fits in the logged `ip_w*` window, otherwise it is marked as a prefix or backedge sample. The current driver logs 32 bytes of VM bytecode lookahead, so prefix statuses are now `prefix_32_of_N`.

Instruction-trace coverage:

- 202 source handlers.
- 71513 unique start VM IP offsets.
- 64472 distinct `(source_entry, delta, bytes)` signatures.
- 767566 rows have exact consumed bytes.
- 1157 rows are backedge samples.
- 493 rows are positive jumps longer than the logged byte window and keep only a 32-byte prefix sample.

The exact bytecode block reducer in `vm_bytecode_blocks.tsv` merges exact positive instruction intervals. It produced 445 contiguous blocks covering `0x421d3` bytes of VM bytecode and 767566 exact instruction events. The largest event bands are:

| Events | Band | Blocks | Exact Bytes |
| ---: | --- | ---: | ---: |
| 488367 | `0x310000` | 41 | `0x9a78` |
| 87614 | `0x230000` | 7 | `0x1300` |
| 47699 | `0x370000` | 21 | `0x1bdb` |
| 27989 | `0x220000` | 2 | `0x2d3` |
| 27184 | `0x360000` | 75 | `0xb52e` |
| 24595 | `0x330000` | 64 | `0xa9df` |
| 19619 | `0x300000` | 6 | `0x2500` |
| 10358 | `0x340000` | 26 | `0x527a` |
| 6192 | `0x260000` | 2 | `0x171a` |
| 5859 | `0x170000` | 39 | `0x561e` |

The bytecode recovery pass in `vm_bytecode_segments.tsv` inserts every exact byte slice into a sparse VM byte map and checks that repeated observations agree byte-for-byte. Current result:

- 767566 exact rows inserted.
- 445 recovered byte segments.
- `0x421d3` total exact bytes.
- 0 conflicting byte offsets.
- 0 conflicting byte observations.

The sampled recovery pass in `vm_bytecode_segments_sampled.tsv` additionally inserts the logged byte windows from prefix-only long jumps and backedge samples. These bytes are valid observed lookahead bytes, but the full VM instruction length remains unknown for sampled rows. Current sampled result:

- 769216 trace rows inserted as exact or sampled byte windows.
- 337 recovered byte segments after sampled windows merge nearby exact segments.
- `0x42dbd` total observed bytes, adding `0xbea` bytes over exact-only recovery.
- 0 conflicting byte offsets.
- 0 conflicting byte observations.

`vm_instruction_unique.tsv` collapses the exact trace to 71355 unique executed instruction signatures. The most repeated signatures are still the loop body beginning at `0x22ff44`, where many adjacent rows execute exactly 256 times. Example rows:

| Count | Start VM IP | Source Entry | Delta | Bytes | Target Entry |
| ---: | --- | ---: | --- | --- | ---: |
| 256 | `0x22ff44` | 171 | `+0x2` | `4201` | 322 |
| 256 | `0x22ff46` | 322 | `+0x4` | `13005796` | 157 |
| 256 | `0x22ff4a` | 157 | `+0x4` | `7b8b6800` | 258 |
| 256 | `0x22ff4e` | 258 | `+0x4` | `f3d5ce87` | 215 |
| 256 | `0x22ff52` | 215 | `+0x3` | `6809c8` | 301 |

`vm_isa_summary.py` clusters those exact signatures into handler-level schemas. Because it only accepts exact positive byte slices, it deliberately excludes backedges and prefix-only long jumps. Current exact-covered result:

- 190 source handlers have exact positive byte schemas.
- 190 `(source handler, byte length)` patterns are present, so every exact-covered source handler is fixed-width in this run.
- 12 dynamic source handlers, accounting for 1398 direct events, remain outside the exact schema set because they only appeared through backedges, long positive jumps with prefix samples, or other non-exact rows.

Exact fixed-width distribution:

| Events | Source Handlers | VM IP Delta |
| ---: | ---: | --- |
| 463848 | 56 | `+0x4` |
| 182878 | 13 | `+0x3` |
| 51707 | 79 | `+0x5` |
| 45212 | 11 | `+0x2` |
| 20476 | 12 | `+0x6` |
| 3275 | 10 | `+0xa` |
| 169 | 8 | `+0xd` |
| 1 | 1 | `+0x20` |

The family view groups those 190 exact handler schemas into 75 operand-layout families covering all 767566 exact events. The shape alphabet is event-weighted per byte position: `C` = constant, `E` = small enum, `V` = high-cardinality variable.

Top exact ISA families:

| Events | Entries | Delta | Shape | Constant Bytes |
| ---: | ---: | --- | --- | --- |
| 259824 | 30 | `+0x4` | `VVVV` | none |
| 160347 | 7 | `+0x3` | `VVV` | none |
| 97037 | 11 | `+0x4` | `VVCC` | `b2=0xe8,b3=0x01` |
| 52999 | 3 | `+0x4` | `VVVE` | none |
| 50549 | 6 | `+0x4` | `CCVV` | `b0=0xe8,b1=0x01` |
| 38982 | 8 | `+0x2` | `VV` | none |
| 21759 | 2 | `+0x3` | `VVE` | none |
| 11883 | 6 | `+0x6` | `VVVVVV` | none |
| 10568 | 3 | `+0x5` | `CCCVV` | `b0=0x00,b1=0x3d,b2=0x01` |
| 6648 | 7 | `+0x5` | `VVVCC` | `b3=0x3d,b4=0x01` |

High-weight operand-layout patterns show repeated constants inside otherwise encoded operands:

| Events | Entry | Target | Delta | Shape | Stable Bytes |
| ---: | ---: | --- | --- | --- | --- |
| 12094 | 184 | `0x9d694` | `+0x4` | `VVCC` | `b2=0xe8,b3=0x01` |
| 11742 | 174 | `0x9bd8f` | `+0x4` | `VVCC` | `b2=0xe8,b3=0x01` |
| 10874 | 305 | `0xb78b0` | `+0x4` | `VVCC` | `b2=0xe8,b3=0x01` |
| 10598 | 123 | `0x91a59` | `+0x4` | `VVCC` | `b2=0xe8,b3=0x01` |
| 10138 | 176 | `0x9c10b` | `+0x4` | `CCVV` | `b0=0xe8,b1=0x01` |
| 9921 | 315 | `0xb9451` | `+0x4` | `CCVV` | `b0=0xe8,b1=0x01` |
| 4380 | 301 | `0xb708d` | `+0x5` | `CCCVV` | `b0=0x00,b1=0x3d,b2=0x01` |
| 3576 | 220 | `0xa522e` | `+0x5` | `CCCVV` | `b0=0x00,b1=0x3d,b2=0x01` |
| 2509 | 167 | `0x9a8d2` | `+0x6` | `CCCCVV` | `b0=0xe8,b1=0x01,b2=0x3d,b3=0x01` |

Two central-dispatch targets now have compact enum/constant schemas in exact coverage:

| Events | Entry | Target | Delta | Shape | Operand Layout |
| ---: | ---: | --- | --- | --- | --- |
| 1796 | 169 | `0x9af18` | `+0x4` | `EECC` | `b0={0xab,0x62,0xa5}; b1={0x00,0x01}; b2=0xe8; b3=0x01` |
| 1614 | 310 | `0xb8556` | `+0x4` | `CCEE` | `b0=0xe8; b1=0x01; b2={0xa5,0x62,0xab}; b3={0x00,0x01}` |

`vm_semantic_templates.tsv` adds static handler behavior to the ISA families. Its template key is:

`observation class + VM IP delta + byte shape + constant byte positions + static IP reads + frame writes + dispatch-table reads + call/return counts`.

Current semantic-template coverage:

- 360 per-handler semantic rows.
- 150 ranked semantic templates.
- 139 exact templates covering 190 source handlers and 767566 exact events.
- 1 `central_or_long` template covering 1 non-exact event.
- 6 `sampled_backedge` templates covering 1159 non-exact events.
- 4 `sampled_long_or_sparse` templates covering 238 non-exact events.
- 155 dispatch entries remain unobserved on this synthetic path.

Top exact semantic templates:

| Events | Entries | Delta | Shape | Constants | IP Reads | Frame Writes |
| ---: | ---: | --- | --- | --- | --- | --- |
| 77036 | 3 | `+0x4` | `VVVV` | none | `+0x2/2,+0x0/2` | `0x23,0x170,0x0,0x16f,0xa` |
| 71699 | 3 | `+0x3` | `VVV` | none | `+0x2/1,+0x0/2` | `0x23,0x170,0x194,0xa` |
| 63478 | 8 | `+0x4` | `VVCC` | `b2=0xe8,b3=0x01` | `+0x2/2,+0x0/2` | `0x23,0x170,0xa` |
| 50833 | 2 | `+0x4` | `VVVV` | none | `+0x2/2,+0x0/2` | `0x170,0x23,0x0,0x16f,0xa` |
| 44735 | 2 | `+0x3` | `VVV` | none | `+0x0/1,+0x1/2` | `0x170,0x23,0x194,0xa` |
| 43913 | 2 | `+0x3` | `VVV` | none | `+0x2/1,+0x0/2` | `0x170,0x23,0x194,0xa` |
| 41302 | 5 | `+0x4` | `CCVV` | `b0=0xe8,b1=0x01` | `+0x0/2,+0x2/2` | `0x170,0x23,0xa` |
| 39922 | 5 | `+0x4` | `VVVV` | none | `+0x0/2,+0x2/2` | `0x170,0x23,0x81,0xa` |

`vm_handler_skeleton.py` keeps ordered access skeletons instead of just sets. The full skeleton is still intentionally noisy, so the most useful grouping is the canonical decode signature, which keeps only:

`IPADV*`, `RIP*`, `RF/WF+0x170`, `TDYN`, `RTdyn`, and the final `WF+0xa` VM-IP write.

Current decode-signature coverage:

- 360 per-handler skeleton rows.
- 186 observed decode groups covering 202 observed source handlers in the classified source profile.
- 175 exact decode groups covering 190 exact handlers and 767566 exact events.
- 1 `central_or_long` decode group covering 1 event.
- 6 `sampled_backedge` decode groups covering 1159 events.
- 4 `sampled_long_or_sparse` decode groups covering 238 events.

Top exact decode groups:

| Events | Entries | Delta | Shape | Decode Signature |
| ---: | ---: | --- | --- | --- |
| 43048 | 4 | `+0x4` | `VVVV` | `IPADV+0x0;RIP+0x0/2;RF+0x170:xor;TDYN;RTdyn;WF+0xa` |
| 28649 | 2 | `+0x4` | `VVVV` | `IPADV+0x0;RIP+0x0/2;RF+0x170:add;WF+0x170:or;TDYN;RTdyn;WF+0xa` |
| 28058 | 1 | `+0x4` | `VVVV` | `IPADV+0x0;RIP+0x0/2;RF+0x170:sub;WF+0x170:and;TDYN;RTdyn;WF+0xa` |
| 26610 | 1 | `+0x3` | `VVV` | `IPADV+0x0;RIP+0x0/2;WF+0x170:or;TDYN;RTdyn;WF+0xa` |
| 26112 | 1 | `+0x4` | `VVVE` | `IPADV+0x0;RIP+0x0/2;RF+0x170:add;WF+0x170:sub;TDYN;RTdyn;WF+0xa` |
| 25448 | 1 | `+0x3` | `VVV` | `IPADV+0x0;RIP+0x0/2;RF+0x170:sub;WF+0x170:sub;TDYN;RTdyn;WF+0xa` |
| 25300 | 1 | `+0x4` | `VVVV` | `IPADV+0x0;RIP+0x0/2;RF+0x170:add;WF+0x170:sub;TDYN;RTdyn;WF+0xa` |
| 25112 | 1 | `+0x4` | `VVVV` | `IPADV+0x2;RIP+0x2/2;RF+0x170:add;WF+0x170:add;TDYN;RTdyn;WF+0xa` |

The bytecode block graph in `vm_bytecode_block_edges.tsv` aggregates instruction rows by recovered bytecode segment. It has 890 aggregate edges. By event weight:

| Events | Edge Rows | Class |
| ---: | ---: | --- |
| 764312 | 445 | `intra_block` |
| 3254 | 445 | `out_of_recovered` |

The `out_of_recovered` edges are exact positive steps whose destination offset has not yet been recovered as an exact byte segment start; these are useful targets for varied-input traces.

Alternate accepted `x` modes do not currently expand the VM path. Mode 0 and mode 2 both returned success (`out[0] = 1`) and produced 250000 VMTAIL rows plus 3385 DISPATCH rows, but their exact unique instruction catalogs are identical to the existing 250k mode-1 trace:

| Catalog | Rows | Events | New Rows vs Long Mode 1 | New Events |
| --- | ---: | ---: | ---: | ---: |
| `dumps/vmtail-wide-w16/vm_instruction_unique.tsv` | 39636 | 248906 | 0 | 0 |
| `dumps/vmtail-mode0-w16/vm_instruction_unique.tsv` | 39636 | 248906 | 0 | 0 |
| `dumps/vmtail-mode2-w16/vm_instruction_unique.tsv` | 39636 | 248906 | 0 | 0 |

This means the next coverage gains are more likely to come from deeper state/path exploration or targeted VM IP gaps than from the public mode field alone.

Every exact recovered VM instruction byte sequence in `vm_instruction_unique.tsv` matches `eac.elf` at the same VM IP file offset: 71355 exact instruction byte checks, 0 mismatches. This proves the observed VM bytecode is file-backed on this path rather than dynamically decrypted into unrelated memory.

`vm_bytecode_file_atlas.tsv` uses that fact conservatively. With sampled segments and `--max-gap 0x20`, it builds 67 file-backed VM bytecode atlas regions:

| Metric | Value |
| --- | ---: |
| atlas regions | 67 |
| file-backed atlas size | `0x43d34` |
| observed sampled bytes | `0x42dbd` |
| inferred small-gap bytes | `0xf77` |
| observed events represented by atlas segments | 769216 |
| summed unique start IPs | 71513 |

The inferred gap bytes are not claimed as executed instructions. They are byte-accurate ELF contents between nearby observed VM bytecode spans and are useful for static decode experiments, especially around exact-destination gaps such as `0x230111`, `0x230b1b`, `0x230e07`, and `0x3703d8`.

`vm_trace_file_fill.py` applies the same file-backed fact to bounded positive prefix rows. It promotes only positive `prefix_32_of_N` rows with `N <= 0x400` to `file_span_of_N`, preserving the distinction from exact consumed instructions. On the long trace:

- 71355 exact instruction rows verified against `eac.elf`.
- 0 exact byte mismatches.
- 466 prefix rows promoted to bounded file-backed spans.

The resulting sampled/file-backed recovery has 300 segments and `0x44749` bytes, up from `0x42dbd` in sampled-only recovery. Gap deltas after bounded file-fill:

| Gap Class | Rows | Events |
| --- | ---: | ---: |
| `uncovered_exact_destination` | 284 | 942 |
| `prefix_long_jump` | 21 | 27 |
| `backedge_sample` | 49 | 1157 |
| `missing_exact_source` | 12 | 1398 |
| `target_only_entry` | 3 | 0 |
| `unobserved_entry` | 155 | 0 |

`vm_gap_report.py` prioritizes the remaining coverage holes. Against exact-only segments it reports:

| Gap Class | Rows | Events |
| --- | ---: | ---: |
| `uncovered_exact_destination` | 445 | 3254 |
| `uncovered_source_start` | 158 | 1650 |
| `missing_exact_source` | 12 | 1398 |
| `backedge_sample` | 49 | 1157 |
| `prefix_long_jump` | 90 | 493 |
| `target_only_entry` | 3 | 0 |
| `unobserved_entry` | 155 | 0 |

Against sampled byte-window segments, `uncovered_source_start` disappears and exact-destination gaps fall to 287 rows / 996 events. The highest-priority remaining dynamic gaps are:

| Events | Gap | Detail |
| ---: | --- | --- |
| 447 | missing exact source entry 316 (`0xb987b`) | mostly backedge `-0x3c4` to entry 165 and short forward jumps to entries 354/171 |
| 276 | missing exact source entry 75 (`0x873fc`) | mostly backedge `-0x6d` to entry 171 |
| 256 | exact destination `0x230111` | exact source 123, target entry 50, next sampled segment starts at `0x230122` |
| 200 | missing exact source entry 266 (`0xaf8af`) | backedges to entries 354/171/165 |
| 142 | missing exact source entry 145 (`0x95b5c`) | long positive jumps, including `+0x139` to entry 354 |

Those gaps are better next trace targets than broad reruns: they isolate specific VM IP bands (`0x22ffb1`, `0x230111`, `0x370xxx`, `0x371xxx`, `0x310dba`, `0x31297d`, `0x3157e1`, `0x315cc0`) and sparse source handlers (`316`, `75`, `266`, `145`, `117`, `302`) that still block full bytecode/ISA recovery.

The state-aware trace in `dumps/vmtail-state-wide-w16` adds `vm_flags`, `vm_state`, and `vm_byte` to every VMTAIL row. `vm_trace_graph.py --instruction-trace` uses consecutive events as pre/post snapshots for the source handler and appends:

`pre_flags`, `post_flags`, `pre_state`, `post_state`, `state_delta`, `pre_byte`, `post_byte`.

This gives the first direct dynamic semantics for the rolling state at `frame+0x170`. The 250k state trace has 250000 VMTAIL records, 3385 DISPATCH records, and 249764 direct instruction rows after filtering. Handler-level grouping is intentionally broad and mostly mixed because each handler covers many byte operands:

| Events | Handlers | State Class |
| ---: | ---: | --- |
| 244984 | 138 | `state_mixed` |
| 2124 | 28 | `state_preserve` |
| 2035 | 3 | `state_const_post` |
| 621 | 22 | `state_add_const` |

Per-signature grouping is much more informative. Keying by `(source handler, delta, byte_status, bytes)` shows that most observed VM instructions have a deterministic state transform:

| Events | Signatures | State Class |
| ---: | ---: | --- |
| 221807 | 35132 | `state_add_const` |
| 18749 | 1048 | `state_mixed` |
| 6902 | 362 | `state_const_post` |
| 2306 | 240 | `state_preserve` |

Top deterministic state-add signatures:

| Events | Entry | Delta | Bytes | State Add | Target |
| ---: | ---: | --- | --- | --- | --- |
| 256 | 17 | `+0x5` | `12ff6210a0` | `-0x7fff6076` | 300 |
| 256 | 18 | `+0x3` | `4804c6` | `+0x60c92c45` | 105 |
| 256 | 18 | `+0x3` | `580eaa` | `+0x1d32d080` | 258 |
| 256 | 18 | `+0x3` | `584f3c` | `-0x5b689fc` | 347 |
| 256 | 20 | `+0x4` | `e801874a` | `+0x5a0c98e5` | 181 |
| 256 | 26 | `+0x4` | `13cfe801` | `+0x6add1670` | 168 |
| 256 | 28 | `+0x3` | `00049a` | `-0x46223400` | 128 |
| 256 | 258 | `+0x4` | `f3d5ce87` | `+0x383d0514` | 215 |

Top state-preserving signatures are mostly loop/backedge or central-dispatch-adjacent rows:

| Events | Entry | Delta | Bytes | Target |
| ---: | ---: | --- | --- | ---: |
| 255 | 75 | `-0x6d` | `ab0000006d0000803d019a5ae9e544f6d9c39fb63a3668ff1418b4e9c6cf3d01` | 171 |
| 255 | 316 | `-0x3c4` | `a5000000c40300803d019a6cb3e80548381b90d9800d6d4dbe452b0a0126003d` | 165 |
| 113 | 310 | `+0x4` | `e801a500` | 165 |
| 91 | 310 | `+0x4` | `e8016201` | 354 |
| 86 | 283 | `+0x5` | `10e801c462` | 258 |

This strongly suggests the VM dispatch state is not opaque per handler: for most concrete bytecode signatures, `frame+0x170` advances by a deterministic 32-bit addend, while target selection still depends on the rolling state and decoded bytes.

`vm_state_affine.py` fits reusable source-handler formulas for the post-handler `frame+0x170` value. With only pre-state and instruction bytes, 92 of 179 state-trace source handlers fit exactly and 40 survive 5-fold held-out validation, covering 16163 state-trace events. Adding the traced `frame+0x23` flags and `frame+0x194` byte raises this to 105 exact-fit sources and 41 robust sources covering 18160 state-trace events. The one robust handler gained by the extra fields is entry 346, whose state update is affine over pre-state and flags.

Representative robust state-affine fits from `vm_state_affine_fullfields.tsv`:

| Entry | Events | Unique Post States | Terms | Notes |
| ---: | ---: | ---: | --- | --- |
| 43 | 5309 | 753 | 7 state + 9 byte + const | low post bits come from instruction bytes; bits 9-15 preserve state |
| 333 | 3602 | 526 | 14 byte + const | post-state is a compact byte-derived value |
| 161 | 2666 | 372 | 18 state + const | masks/sets fixed pre-state bits |
| 346 | 1997 | 423 | 32 state + 42 flags + const | requires the traced flags field |
| 171 | 1069 | 1 | 0 | clears state to zero |
| 91 | 546 | 193 | 7 state + 9 byte | combines preserved state bits with instruction bytes |

In the lifted long catalog, robust state-affine sources cover 5413 exact rows and 60256 events. The intersection of robust state-affine and robust dispatch-affine evidence covers 35 source handlers, 1019 exact rows, and 10319 long-run events; this is the current strongest subset for direct devirtualized handler semantics. The high-volume mixed handlers still fail affine state modeling, so they likely use arithmetic carry/borrow or untraced intermediate state rather than a pure GF(2) update.

`vm_state_static_slice.py` statically slices the same state mechanism directly from handler code. It tracks frame pointers, VM IP reads, and writes to `frame+0x170`/`frame+0x23`. Across all 360 dispatch entries, 327 entries have at least one static state write, covering 764423 long-run events. The state update count distribution is:

| State Writes | Entries | Long-Run Events |
| ---: | ---: | ---: |
| 0 | 33 | 4541 |
| 1 | 109 | 67694 |
| 2 | 59 | 65512 |
| 3 | 36 | 100665 |
| 4 | 31 | 160304 |
| 5 | 32 | 146798 |
| 6 | 23 | 68838 |
| 7 | 15 | 131229 |
| 8+ | 22 | 23383 |

The static slice explains why the high-volume affine failures are hard: 123 entries have four or more state writes, covering 530552 long-run events. Entry 258 is the best current example. Its branch-linearized static state chain has four writes:

1. `state ^= 0x11095fd5`
2. `state += flags'`
3. `state ^= u16_2 - flags'`
4. `state &= (u16_0 - state) ^ 0x5812e92c`

Here `flags'` is itself conditionally transformed from `frame+0x23` by subtract/or/xor constants. The final `AND` after subtracting the evolving state is non-affine and matches the dynamic failure mode.

`vm_state_static_validate.py` concretely executes the static state slice over the state-aware trace, following simple `je`/`jne` branches when the compare/test value is known. This validates the static state model for 248903 of 248906 state-trace instruction rows, or 99.9988% of the trace. The only mismatches are one-event sources 101, 241, and 284 with long control-flow-like byte windows. In the lifted long catalog, 71339 exact rows and 767542 events come from sources with 100% static state validation. All 48 robust dispatch-affine sources are in that 100% static-state set, covering 9197 rows and 101596 events.

`vm_static_dispatch_validate.py` extends the same concrete slice through the final table lookup and VM IP write. It validates both dispatch target and `frame+0x0a` advance for 248300 of 248906 state-trace rows, or 99.7565%. The 606 misses are concentrated in 13 sources that use native `ret`/stack control-flow or long control-flow-like windows before the VM tail: entries 356, 216, 95, 278, 311, 102, 264, 321, 85, 78, 284, 241, and 101. In the lifted long catalog, 71237 exact rows and 764108 events come from sources with 100% static dispatch/IP validation. The validator covers 43 of the 48 robust dispatch-affine sources at 100%, covering 9139 exact rows and 99661 events.

`vm_dispatch_model_combine.py` closes that dynamic gap by preferring the static dispatch validator and falling back to affine dispatch bit formulas for static-target misses. On the state-aware trace, the combined model validates all 248906 exact instruction rows:

| Dispatch Model | Sources | Events |
| --- | ---: | ---: |
| `static_100` | 166 | 248300 |
| `affine_robust_fallback` | 5 | 360 |
| `affine_partial_fallback` | 3 | 241 |
| `affine_single_fallback` | 5 | 5 |

The affine fallback uses formulas fitted over state/post-state/byte features, so it is a validated dynamic dispatch model rather than a purely static one. In the lifted long catalog, the combined model tags 71343 rows and 767546 events; 12 exact rows and 20 events remain untagged only because their source handlers were not present in the state-aware trace.

`vm_transition_model.py` consolidates the handler-level reconstruction into `vm_transition_model.tsv`, one row for each of the 360 dispatch entries. It joins the long-run handler skeleton, static state/flag update chain, state and dispatch validation percentages, affine CV status, sampled transfer expressions, branch-predicate provenance, combined dispatch model, and tail operand provenance. The observation mix is 190 exact-covered entries, 155 unobserved entries, 7 sampled backedge entries, 4 sampled long/sparse entries, 3 target-only entries, and 1 central/long-control-flow entry.

Handler-level coverage in the transition model:

| Coverage | Entries | Long-Run Events |
| --- | ---: | ---: |
| observed in skeleton profile | 202 | 768964 |
| with static state writes | 327 | 764423 |
| with static state validation | 179 | 767546 |
| with 100% static state validation | 176 | 767542 |
| with static dispatch/IP validation | 179 | 767546 |
| with 100% static dispatch/IP validation | 166 | 764108 |
| with combined dispatch model | 179 | 767546 |
| with branch-predicate provenance | 179 | 767546 |
| with tail target register/operand | 181 | 765570 |
| with live/static slot temp | 181 | 765570 |
| with byte/static index register | 156 | 704763 |

Combined dispatch-model distribution in the transition model:

| Dispatch Model | Entries | Long-Run Events |
| --- | ---: | ---: |
| `static_100` | 166 | 764108 |
| `affine_robust_fallback` | 5 | 1935 |
| `affine_partial_fallback` | 3 | 1497 |
| `affine_single_fallback` | 5 | 6 |

The model is intentionally keyed by dispatch entry rather than bytecode instruction. Eleven exact-observed entries, covering 20 long-run events, still have no dispatch model tag because they were absent from the state-aware trace; the other blank rows are unobserved or sampled-only entry classes.

`vm_static_transfer_expr.py` adds a path-sensitive symbolic view of the same static dispatch mechanism. It follows concrete branches from the state-aware trace, but carries symbolic expressions for the table-slot byte offset and `frame+0x0a` IP advance. The current artifact is deliberately bounded to at most 128 rows per source, so its event counts are expression-sampling counts rather than full-trace coverage counts. On that sample it covers all 179 state-aware source handlers and agrees with the concrete target/IP validator for the same 166 static-dispatch-clean handlers:

| Transfer-Expression Coverage | Sources | Sample Events |
| --- | ---: | ---: |
| sampled source handlers | 179 | 16691 |
| 100% target/IP agreement | 166 | 16085 |
| with dispatch-slot expression | 166 | 16085 |
| single observed slot expression | 127 | 11378 |
| multiple observed slot expressions | 39 | 4707 |
| single observed IP-advance expression | 179 | 16691 |

Representative recovered dispatch-slot expressions now appear directly in `vm_transition_model.tsv`. For example, entry 28 dispatches through `table[u16_0 & 0xffff]` with `ip += 0x3`, while entry 0 dispatches through `table[((u16_0 + (state0 ^ 0x1966e0e7)) - 0x251a0141) & 0xffff]` with `ip += 0x5`, modulo the 32-bit masks shown in the TSV.

The `--by-path` view of the same bounded transfer-expression sample is `vm_static_path_transfer_expr.tsv`. It resolves the apparent multi-formula source handlers into concrete branch-path formulas. In the 128-row-per-source sample it observes 348 source-path rows across all 179 state-aware sources. All 335 source-path rows with a resolved static target have exactly one slot expression and one IP-advance expression:

| Path-Conditioned Transfer Expressions | Source-Paths | Sample Events |
| --- | ---: | ---: |
| sampled source-path rows | 348 | 16691 |
| 100% target/IP agreement | 335 | 16085 |
| with dispatch-slot expression | 335 | 16085 |
| single slot expression per path | 335 | 16085 |
| multiple slot expressions per path | 0 | 0 |

This is useful because source-level handlers such as entries 18, 20, 26, 64, 66, 114, 258, and 337 have multiple observed slot formulas, but each sampled concrete branch path has a single formula. That gives a clean route to path-specialized devirtualized blocks.

`vm_static_path_profile.py` explains why some handlers have multiple sampled transfer expressions. It replays the full state-aware trace through the static handler interpreter and records concrete branch outcomes as path hashes. The source-level profile exactly preserves the static dispatch validator's coverage: 248300 of 248906 state-trace rows validate target and IP, and the same 606 rows end in unresolved native/long-control-flow paths. Across 179 state-aware source handlers, the replay observes 399 distinct branch paths:

| Path Profile | Sources/Paths | State-Trace Events |
| --- | ---: | ---: |
| source handlers profiled | 179 | 248906 |
| sources with 100% target/IP validation | 166 | 248300 |
| sources with one observed path | 75 | 43981 |
| sources with multiple observed paths | 104 | 204925 |
| distinct source-path rows | 399 | 248906 |

The most path-diverse source is entry 330 with 12 observed paths over 169 state-trace events. Other high-diversity handlers include entries 208 with 11 paths, 237 and 48 with 8 paths each, and entries 108, 257, 319, 292, and 105 with 7 paths each. The high-volume handlers are usually much simpler: entry 258 has two concrete paths, entry 28 has three, and entries 337, 340, 189, 347, 307, 64, and 66 have one or two dominant paths. These path counts are now joined into `vm_transition_model.tsv` and summarized in `vm_microcode_catalog.tsv`.

The static interpreter also resolves a narrow class of opaque pointer predicates by using the traced VM frame location (`base+0x7836d`). Since the image base is page-aligned, the low byte of `rbp+off` is stable; byte-sized comparisons such as `cmp $0, %r12b` after `r12 = rbp + 0x170` can be resolved without knowing the absolute ASLR base. The interpreter also preserves commutative `int + pointer` arithmetic, compares same-base pointers by offset, and clears `ZF` when unknown flag-clobbering arithmetic is encountered instead of accidentally reusing stale flags. Target/IP coverage remains unchanged, but path and branch records are more faithful. Entry 28 is the clearest high-volume example: its two former pointer-byte unknown branches now resolve to `je:0`, and the handler remains 100% target/IP validated over 8348 state-trace events.

`vm_branch_predicates.py` explains the remaining `?` branches by replaying the full state-aware trace with concrete values plus symbolic/provenance labels for the last compare/test or flag-producing arithmetic. It emits 855 source-handler branch-site rows and accounts for 1007971 dynamic branch events. Of those, 220254 are still unresolved, now matching the `branch_unknown` total in both `vm_state_static_validate.tsv` and `vm_static_path_profile.tsv`.

Unresolved branch-predicate classes:

| Class | Dynamic Branch Events | Interpretation |
| --- | ---: | --- |
| `live_in_reg` | 106661 | direct low-byte predicate on a register not initialized in the current handler slice |
| `unknown_frame_field` | 53296 | predicate derived from a scratch frame field outside the modeled VM IP/state/flags/byte/table fields |
| `derived_live_in` | 47633 | arithmetic expression involving one or more live-in registers |
| `unresolved` | 5799 | no stronger provenance class after concrete replay |
| `vm_bytecode_unresolved` | 4953 | expression includes bytecode words but still depends on unknown operands |
| `unknown_memory_pointer` | 1774 | load address could not be reduced to modeled frame/IP/table pointers |
| `unknown_operand` | 138 | remaining unsupported or unknown operand case |

Top unresolved branch sites:

| Entry | Branch | Unknown / Events | Class | Top Condition |
| ---: | --- | ---: | --- | --- |
| 347 | `0xc093d:je` | 8151 / 8151 | `derived_live_in` | `low8(((live_in(r11) + 0x386de7c7) - live_in(rsi))) == 0` |
| 114 | `0x90334:je` | 7722 / 7722 | `live_in_reg` | `live_in(rsi) == 0` |
| 340 | `0xbf457:je` | 7549 / 7549 | `live_in_reg` | `live_in(r10) == 0` |
| 337 | `0xbeea3:je` | 7502 / 7502 | `unknown_frame_field` | expression derived from `frame+0x81` and `frame+0x23` |
| 337 | `0xbeee0:je` | 7502 / 7502 | `derived_live_in` | expression mixes `live_in(rdi)`, frame scratch fields, and constants |
| 189 | `0x9e880:je` | 7459 / 7459 | `live_in_reg` | `live_in(r8) == 0` |
| 18 | `0x7bed4:je` | 7392 / 7392 | `live_in_reg` | `live_in(rdi) == 0` |
| 66 | `0x85621:je` | 7189 / 7189 | `live_in_reg` | `live_in(r14) == 0` |
| 307 | `0xb80ac:je` | 7050 / 7050 | `live_in_reg` | `live_in(r13) == 0` |
| 297 | `0xb64f9:je` | 6483 / 6483 | `live_in_reg` | `live_in(rsi) == 0` |

This turns the earlier undifferentiated branch uncertainty into a concrete next target: most unresolved path predicates are not unknown bytecode semantics; they are live-in scratch registers or scratch frame fields carried across handler boundaries. The likely next payoff is a sequential GPR/liveness pass that seeds handler-entry registers from the previous VMTAIL snapshot.

`vm_microcode_catalog.py` is the compact human-facing index over the reconstructed handlers. It joins the transition model, ISA operand layouts, static state/flag update chains, and source-level branch-predicate summaries into pseudo-IR rows. The TSV keeps one row per dispatch entry, while `vm_microcode_top.md` renders the top 30 observed entries by event count with clipped expression hashes that point back to the full lower-level TSVs.

Microcode catalog class distribution:

| Class | Entries | Long-Run Events |
| --- | ---: | ---: |
| `static_validated` | 166 | 764108 |
| `affine_dispatch_fallback` | 13 | 3438 |
| `sampled_only` | 11 | 1397 |
| `partial` | 12 | 21 |
| `unobserved_static` | 155 | 0 |
| `target_only` | 3 | 0 |

The catalog currently has state/flag pseudo-IR for 327 entries covering 764423 long-run events, dispatch-slot pseudo-IR or model tags for 179 entries covering 767546 events, branch-predicate summaries for 179 entries covering 767546 events, and operand-layout summaries for the 190 exact-covered handlers covering 767566 events.

`vm_path_microcode_catalog.py` specializes that catalog by concrete handler branch path. It joins the full `vm_static_path_variants.tsv` state-trace path counts with the sampled `vm_static_path_transfer_expr.tsv` slot/IP formulas and the source-level microcode, including source branch-predicate context. This is the closest current artifact to path-specialized devirtualized blocks:

| Path Microcode Coverage | Paths | State-Trace Events |
| --- | ---: | ---: |
| concrete source-handler paths | 399 | 248906 |
| 100% target/IP validated paths | 386 | 248300 |
| paths with sampled expression rows | 348 | 246298 |
| paths with sampled slot expression | 335 | 245692 |
| paths from static-validated sources | 386 | 248300 |
| paths from affine-dispatch fallback sources | 13 | 606 |

The top path row is entry 307 path `594cbf6454cdfe82`, with 7050 state-trace events and slot expression `(u16_1 - 0x665a9b5) & 0xffff`, followed by entry 258 path `4be73f077fec7fc7` with 6275 events and its non-affine state-derived slot expression. The Markdown digest `vm_path_microcode_top.md` is useful for quickly inspecting these high-volume specialized blocks.

The register-role trace in `dumps/vmtail-regs-wide-w16` logs all GPRs for 250000 VMTAIL events. `vm_tail_registers.py` compares each register to the current dispatch target, `frame+0x10f` table base, `table + target_entry*8`, and `target_entry*8`.

Per role-row totals:

| Role | Rows | Events |
| --- | ---: | ---: |
| `frame_pointer` | 228 | 301059 |
| `target_value` | 201 | 276083 |
| `slot_pointer` | 170 | 250297 |
| `table_slot_match` | 170 | 250297 |
| `byte_index` | 183 | 212985 |
| `table_slot_other` | 37 | 19848 |
| `table_value` | 10 | 2541 |
| `entry_index` | 32 | 2336 |

The compact site summary has 187 tail/dispatcher sites. All 187 have a 100% target register or target memory operand and frame register. Of those, 162 have a 100% dispatch-slot pointer register, 146 have a 100% byte-index register, and 127 have both. This recovers the register allocation for the final dispatch calculation at most observed tail sites.

Top register-role sites:

| Site | Events | Target | Slot Ptr | Byte Index | Frame | Top Targets |
| ---: | ---: | --- | --- | --- | --- | --- |
| `0xae32f` | 9696 | `r11` | `r10` | `rcx` | `rbp` | 215,43,307,297 |
| `0x7e7ca` | 8351 | `r11` | `rbx` | `r14` | `rbp` | 347,189,43,258 |
| `0xc0d7b` | 8166 | `rdi` | `r8` | partial `r11` | `r10` | 18,168,28,297 |
| `0x90893` | 7732 | `rdi` | `r11` | `rdx` | `rbp` | 66,185,199,158 |
| `0xbf886` | 7554 | `r15` | `r8` | `r14` | `r11` | 28,307,66,161 |
| `0xbf126` | 7506 | `rbx` | `r10` | `r11` | `rbp` | 66,174,297,196 |
| `0x9eac9` | 7466 | `rdx` | `r11` | `r13` | `rbp` | 43,307,297,18 |
| `0x7c308` | 7406 | `rcx` | `r13` | partial `r9` | `rbp` | 114,347,258,300 |
| `0x859f9` | 7189 | `r8` | `r11` | `rdx` | `rbp` | 337,340,64,123 |
| `0xa4a5e` | 7122 | `r14` | `r8` | `rcx` | `rbp` | 189,114,347,258 |

Joining the site-role table back onto the long instruction trace gives 208 source-handler/tail-site rows covering 769216 instruction events and 202 unique source handlers. The 250k register trace plus central-dispatch traps covers 199 rows and 769199 long-run instruction events. In the joined long trace:

- 175 source/site rows have a live dispatch-slot register, covering 747389 instruction events.
- 168 rows have a byte-index register, covering 705637 events.
- 150 rows have both live slot and byte-index registers, covering 686337 events.

Top joined handler-tail roles:

| Entry | Handler | Site | Events | Target | Slot Ptr | Byte Index | Top Targets |
| ---: | ---: | ---: | ---: | --- | --- | --- | --- |
| 258 | `0xadf2c` | `0xae32f` | 28058 | `r11` | `r10` | `rcx` | 307,199,297,215 |
| 28 | `0x7e390` | `0x7e7ca` | 26610 | `r11` | `rbx` | `r14` | 347,258,340,337 |
| 337 | `0xbec0e` | `0xbf126` | 26534 | `rbx` | `r10` | `r11` | 297,66,307,28 |
| 340 | `0xbf435` | `0xbf886` | 26112 | `r15` | `r8` | `r14` | 307,28,66,185 |
| 18 | `0x7be9b` | `0x7c308` | 25448 | `rcx` | `r13` | none | 114,189,347,258 |
| 114 | `0x90319` | `0x90893` | 25300 | `rdi` | `r11` | `rdx` | 66,185,215,18 |
| 189 | `0x9e7af` | `0x9eac9` | 25112 | `rdx` | `r11` | `r13` | 18,297,215,174 |
| 347 | `0xc088d` | `0xc0d7b` | 24299 | `rdi` | `r8` | partial `r11` | 18,307,297,28 |

The central dispatcher rows are not `jmp reg` tails: `0xc80b9` and `0xcdac7` both execute `jmp *(%rax)` after computing `rax = table + rbx`. The dispatch trap logs `slot=RAX`, `idx=RBX`, `frame=RBP`, and `target=*(RAX)`, so `vm_tail_registers.py` now treats those DISPATCH rows as register-role evidence too.

`vm_tail_static_slots.tsv` then fills the high-frequency live-slot gaps by slicing backward from the final target load:

| Static Kind | Rows | Events | Meaning |
| --- | ---: | ---: | --- |
| `live_slot` | 157 | 744005 | slot pointer still live at the tail snapshot |
| `consumed_slot` | 24 | 21810 | slot temp found statically, then clobbered before the jump |
| `central_indirect` | 18 | 3384 | central `jmp *(%rax)` dispatcher rows |
| `no_static_load` | 9 | 17 | only tiny low-count rows remain unresolved |

Top consumed-slot recoveries:

| Entry | Site | Events | Target | Byte Index | Static Slot Temp | Load Site | Index Add |
| ---: | ---: | ---: | --- | --- | --- | ---: | ---: |
| 20 | `0x7ca96` | 9485 | `rcx` | `rax` | `r14` | `0x7ca6a` | `0x7ca5d` |
| 256 | `0xadbfa` | 3880 | `r9` | `r14` | `r10` | `0xadbd0` | `0xadbae` |
| 273 | `0xb1545` | 2115 | `r9` | `rsi` | `r13` | `0xb1519` | `0xb1502` |
| 345 | `0xc0532` | 1883 | `r14` | `r11` | `r9` | `0xc050e` | `0xc050b` |
| 292 | `0xb593d` | 651 | `rbx` | static `r9` | `r14` | `0xb590a` | `0xb58f2` |
| 90 | `0x8b6db` | 567 | `r12` | static `r12` | `r15` | `0x8b6a1` | `0x8b695` |
| 281 | `0xb3125` | 555 | `r12` | `rcx` | `rdx` | `0xb30f5` | `0xb30eb` |
| 291 | `0xb540d` | 479 | `rdx` | `r10` | `r9` | `0xb53d1` | `0xb53bb` |
| 316 | `0xba0cc` | 447 | `rax` | static `rdi` | `r10` | `0xb9fb8` | `0xb9fa7` |

After central-dispatch integration and static consumed-slot recovery, only 17 long-run instruction events lack any register/static tail-slot evidence.

`vm_instruction_lift.tsv` is the current highest-level recovered instruction catalog. It joins exact unique bytecode instructions, per-signature state effects from the state-aware trace, compact state-affine tags, static state/dispatch validation tags, tail target registers, live/static slot provenance, and compact dispatch-formula tags.

Coverage in the lift catalog:

| Coverage | Rows | Events |
| --- | ---: | ---: |
| exact unique instructions | 71355 | 767566 |
| with state-effect signature | 43154 | 684374 |
| with tail target register/operand | 71345 | 767549 |
| with live/static slot temp | 71345 | 767549 |
| with byte/static index register | 65869 | 706851 |
| from source with state-affine fit | 8074 | 86525 |
| from source with robust state-affine CV | 5413 | 60256 |
| from source with static state validation | 71343 | 767546 |
| from source with 100% static state validation | 71339 | 767542 |
| from source with static dispatch/IP validation | 71343 | 767546 |
| from source with 100% static dispatch/IP validation | 71237 | 764108 |
| with combined dispatch model | 71343 | 767546 |
| with scalar dispatch formula tag | 71343 | 767546 |
| from source with affine dispatch fit | 11753 | 126720 |
| from source with robust affine CV | 9197 | 101596 |
| from source with robust state and dispatch CV | 1019 | 10319 |

State classes in the lifted exact catalog:

| State Class | Rows | Events |
| --- | ---: | ---: |
| `state_add_const` | 36946 | 601868 |
| `state_mixed` | 4315 | 55646 |
| `state_const_post` | 1576 | 19423 |
| `state_preserve` | 317 | 7437 |
| not observed in state trace | 28201 | 83192 |

The lift catalog also carries the best fitted dispatch-index formula per source handler where available. `vm_dispatch_formula.py` models the final dispatch byte index as `target_entry * 8` and searches simple byte/state expressions. This is intentionally conservative; formulas that are only constant-majority are useful for triage but not treated as decoded semantics.

High-confidence byte-only dispatch formulas validated against the long exact catalog:

| Entry | Formula | Events | Meaning |
| ---: | --- | ---: | --- |
| 28 | `u16_0` | 26610 | first instruction word is direct byte index |
| 215 | `u16_0` | 21174 | first instruction word is direct byte index |
| 171 | `(u16_0&0x1ff)*8` | 2533 | low 9 bits select dispatch entry |
| 354 | `(u16_0&0x1ff)*8` | 1872 | low 9 bits select dispatch entry |
| 165 | `(u16_0&0x1ff)*8` | 1825 | low 9 bits select dispatch entry |
| 169 | `(u16_0&0x1ff)*8` | 1796 | low 9 bits select dispatch entry |
| 310 | `(u16_2&0x1ff)*8` | 1614 | third byte-aligned word selects entry |
| 200 | `u16_4` | 1511 | word at byte offset 4 is direct byte index |
| 105 | `u16_2` | 671 | word at byte offset 2 is direct byte index |
| 349 | `u16_2` | 503 | word at byte offset 2 is direct byte index |

Byte-only formulas fully validated for 16 source handlers and 60551 long-run exact events. Direct `u16_*` formulas account for 54436 matched events; masked `u16_*` formulas account for 9753 matched events. State-dependent formulas cannot be validated against the state-less long catalog, but the state-aware trace gives full fits for these handlers:

| Entry | Formula | State-Trace Events | Unique Targets |
| ---: | --- | ---: | ---: |
| 305 | `(state+u16_0)&0x1fff` | 2662 | 25 |
| 91 | `(state^u16_0)&0x1fff` | 546 | 30 |
| 107 | `(state-u16_0)&0x7ff` | 256 | 1 |
| 217 | `(u16_1-post)&0x1fff` | 206 | 8 |
| 74 | `(u16_0-post)&0x1fff` | 25 | 6 |

`vm_dispatch_affine.py` adds a broader GF(2) affine solver over byte bits, pre-dispatch state bits, and post-state bits. It exactly fits 108 of 179 state-trace source handlers, covering 44812 of 248906 state-trace events; 71 high-volume handlers remain inconsistent under this model. The lifted long catalog carries the affine fit status by source handler, tagging 11753 exact rows and 126720 long-run events as belonging to state-trace-fitted sources.

`vm_dispatch_affine_cv.py` applies a 5-fold held-out check to the same feature family. It finds 48 robust source handlers covering 33784 state-trace events with 100% held-out prediction. Another 50 sources are partial, covering 11207 state-trace events, 70 sources have no train-fold fit, and 11 one-off sources have no usable held-out split. In the lifted long catalog, the robust affine subset covers 9197 exact rows and 101596 events. Non-robust affine rows are triage hypotheses unless they are simple byte-only forms or otherwise independently validated.

Representative robust affine fits from the state-aware trace:

| Entry | Events | Unique Targets | Terms | Notes |
| ---: | ---: | ---: | --- | --- |
| 28 | 8348 | 80 | 9 byte | equivalent to direct `u16_0` index bits |
| 215 | 7121 | 78 | 9 byte | equivalent to direct `u16_0` index bits |
| 172 | 4530 | 64 | 9 byte + constants | byte-offset 2/3 index bits with fixed inversions |
| 315 | 3298 | 25 | 9 byte + constants | byte-offset 2/3 index bits with fixed inversions |
| 203 | 3283 | 59 | 8 byte + 1 post | mostly direct `u16_0`, with bit 11 from post-state |

Top auto3 tail targets:

| Count | Entry | Target |
| ---: | ---: | --- |
| 6477 | 258 | `0xadf2c` |
| 6033 | 28 | `0x7e390` |
| 5986 | 347 | `0xc088d` |
| 5505 | 114 | `0x90319` |
| 5327 | 189 | `0x9e7af` |
| 5089 | 66 | `0x855ff` |
| 4900 | 340 | `0xbf435` |
| 4663 | 18 | `0x7be9b` |
| 4656 | 337 | `0xbec0e` |

New high-value next entries from `vm_tail_scan.py dumps/vmtail-auto3` include 161 (`0x9975a`), 176 (`0x9c10b`), 301 (`0xb708d`), 144 (`0x95887`), 160 (`0x994cf`), 319 (`0xba72f`), 198 (`0xa037e`), 260 (`0xae90b`), 257 (`0xadbfd`), and 30 (`0x7e849`).

The observed handler blocks consistently read 16-bit words from the current `frame+0x0a` bytecode pointer, combine them with `frame+0x170` state, index through `frame+0x10f`, advance `frame+0x0a`, then tail-jump to the resolved handler. The raw 16-bit words are not direct table indices; the selected target depends on the per-frame rolling state.

The most useful next deobfuscation path is broader dynamic basic-block recovery rather than linear disassembly:

1. Use EAC-relative hook call sites as anchors for side-effectful blocks.
2. Break or instrument dispatcher entries (`0xc823b`, `0xcdc60`, and neighbors) to log logical next targets.
3. Normalize stack VM sequences into direct register assignments/jumps.
4. Re-run with throttled `/proc` tracing so long-running workers can complete without producing noisy logs.
