# EAC ELF Reconstruction Notes

Target: `eac.elf`

SHA-256: `0b44ad59697129534189efdb75cde2b96245f831438e9f6a53cb7725f190d739`

## Current Artifacts

- `driver.c`: dlopen/dlsym harness for exported `x`, now also dumps the EAC memory maps, the output buffer, and the global sidecar context. Optional `EAC_DISPATCH_TRACE=1` patches selected dispatcher jumps to `int3`; `EAC_VMTAIL_TRACE=1` patches direct VM tail sites. Both trace modes log frame state plus sixteen 16-bit `ip_w*` lookahead words when detail data is available; `EAC_VMTAIL_REGS=1` also logs all GPRs at VM tail sites, and `EAC_VMTAIL_SCRATCH=1` logs the default hot frame scratch qwords plus any comma-separated `EAC_VMTAIL_SCRATCH_OFFSETS`.
- `trace_preload.c`: libc/network/process tracer with EAC-relative caller offsets. Network and process spawning are denied by default unless `EAC_TRACE_ALLOW_NETWORK=1` or `EAC_TRACE_ALLOW_SPAWN=1`.
- `recon_summary.py`: summarizes a dump directory, trace call sites, dispatcher edges, executable pointer fixups, memory-vs-file mutations, and context pointers.
- `vm_tail_scan.py`: ranks observed dispatch-table targets and suggests extra `EAC_VMTAIL_SITES=0xsite:reg,...` hooks using Capstone.
- `vm_trace_graph.py`: converts a traced run into VM edge TSV form; default output is site-based, and `--sequential` emits dynamic per-frame transitions from ordered trace events. It parses arbitrary `ip_wN` fields; legacy TSVs still print `w0..w5`, but exact byte reconstruction uses the full logged lookahead window.
- `vm_handler_table.py`: merges dispatch-table metadata, dynamic trace profiles, and static Capstone handler features into one TSV.
- `vm_bytecode_blocks.py`: reduces direct executed VM instruction rows into contiguous bytecode coverage blocks. Default mode uses exact consumed bytes; `--include-sampled` adds logged prefix/backedge byte windows as partial coverage only.
- `vm_bytecode_recover.py`: reconstructs VM byte values from instruction rows, verifies byte consistency, and emits segment hashes plus a unique instruction table. Default mode is exact-only; `--include-sampled` also inserts logged prefix/backedge byte windows without claiming the full instruction length is known.
- `vm_bytecode_cfg.py`: builds a bytecode block graph from instruction rows and recovered exact bytecode segments.
- `vm_bytecode_control_edges.py`: turns decoded long-branch and sampled-operand sidecars into explicit non-exact VM control-flow edges between recovered bytecode segments, with operand footprints and lifted target/IP-update pseudo-IR.
- `vm_bytecode_ir.py`: merges exact instruction lifts and decoded non-exact sidecars into a VM-IP sorted recovered bytecode IR table with source/target blocks, operand footprints, compact state/dispatch/IP expressions, validation provenance, and pseudo-IR.
- `vm_bytecode_basic_blocks.py`: splits the unified bytecode IR into recovered VM basic blocks, terminal edges with final-trace synthetic coverage status, Markdown block listings, and loop/backedge catalogs.
- `vm_synthetic_span_catalog.py`: catalogs byte-covered synthetic VM spans that still lack direct semantic IR rows, separating known handler/operand prefixes, unresolved tails, target-only spans, and footprint-only coverage.
- `vm_synthetic_tail_catalog.py`: aggregates unresolved suffix bytes from synthetic VM spans into exact tail variants, target-entry offsets, marker schemas, and recurring motifs.
- `vm_synthetic_tail_lift.py`: lifts unresolved synthetic suffix bytes back to VM-IP rows, tagging embedded target-entry mini-forms and feeding those comments into the C-like program sketches.
- `vm_gap_report.py`: ranks bytecode and handler coverage gaps from instruction rows, recovered segments, ISA missing-exact rows, decoded long-branch sidecars, adjacent hidden-transition sidecars, and per-handler semantic observations.
- `vm_isa_summary.py`: clusters exact recovered VM instruction signatures by source handler, fixed byte length, target distribution, and operand byte/word layout.
- `vm_semantic_templates.py`: merges ISA schemas with static handler features into per-handler rows and ranked semantic templates.
- `vm_handler_skeleton.py`: extracts normalized frame/IP/table access skeletons from handler disassembly and groups full, dispatch-tail, or canonical decode signatures.
- `vm_state_effects.py`: summarizes observed `frame+0x170`, `frame+0x23`, and `frame+0x194` changes per handler or per `(handler, delta, bytes)` signature from state-aware traces.
- `vm_state_affine.py`: fits and cross-validates affine formulas for the `frame+0x170` post-state from pre-state, instruction bytes, and optional traced flag/byte fields.
- `vm_state_static_slice.py`: statically tracks frame/IP pointers through handler code and emits symbolic update chains for `frame+0x170` and `frame+0x23`.
- `vm_state_static_validate.py`: concretely executes the static state slice over state-aware trace rows and validates predicted `frame+0x170` post-state.
- `vm_static_dispatch_validate.py`: concretely executes handler slices through the final table jump and validates predicted dispatch target plus VM IP advance.
- `vm_static_transfer_expr.py`: legacy Python version of the path-sensitive transfer-expression sampler. Routine refreshes now use `vm_fast_path_profile --transfer-expr`, which follows concrete state-aware trace paths while carrying symbolic expressions for the dispatch-table slot and VM IP advance; `--by-path` emits path-conditioned formula rows, and `--gpr-run` seeds handler-entry registers plus hot `fs0x...` scratch-frame fields.
- `vm_static_path_profile.py`: profiles concrete branch/path variants through static handler slices over the state-aware trace; `--gpr-run` seeds handler-entry registers and, when present, hot `fs0x...` scratch-frame fields from the previous VMTAIL snapshot to resolve live-in branch predicates.
- `vm_fast_path_profile.c`: native Capstone/OpenSSL reimplementation of the concrete replay core. It emits the same summary/by-path TSV schemas as `vm_static_path_profile.py`, native state/static-dispatch validation schemas, a `--branch-sites` full-trace branch-outcome TSV, SHA-256 path hashes, an `--emit-dir` batch mode that regenerates all `_fast.tsv` replay artifacts through `make fast-replay`, a `--branch-predicates` sampler, and a `--transfer-expr` sampler that replace the slow Python predicate/transfer replays for routine refreshes. The native model now preserves restore-trampoline `push`/`pop` register values, reads safe image-backed frame/IP values, normalizes frame/table/IP/stack pointers, and uses low-bit inequality proofs; `make fast-replay fast-predicates fast-transfer` refreshes replay, predicate, and transfer artifacts in `elapsed=0:31.69` on this host.
- `vm_branch_predicates.py`: catalogs each static-replay branch predicate, including observed outcomes, unresolved predicate classes, and top concrete/symbolic condition expressions; for normal refreshes it is now only needed to render Markdown from the native TSVs.
- `vm_dispatch_model_combine.py`: combines the static dispatch validator with affine fallback formulas for static-dispatch misses.
- `vm_tail_registers.py`: infers per-tail-site register roles from `EAC_VMTAIL_REGS=1` traces, including target value, dispatch-slot pointer, byte index, table pointer, and frame pointer. It can also join those roles back onto an instruction trace by source handler and tail site.
- `vm_tail_static_slots.py`: statically recovers consumed dispatch-slot temporaries for tail sites where the target is loaded from `table + byte_index` and the slot pointer is clobbered before the final jump.
- `vm_instruction_lift.py`: joins exact recovered VM instructions with per-signature state effects, compact state-affine tags, dynamic tail-register roles, static dispatch-slot provenance, and compact scalar/affine dispatch-formula tags.
- `vm_transition_model.py`: joins handler skeletons, static state chains, validation coverage, combined dispatch-model evidence, transfer expressions, long-control and sampled-operand bytecode lifts, state-only and GPR+scratch-seeded branch-predicate provenance, and tail operand provenance into a one-row-per-dispatch-entry transition model.
- `vm_microcode_catalog.py`: renders the joined handler reconstruction into a compact pseudo-IR catalog and a Markdown digest for high-volume handlers, now including source-level long-branch lifts, sampled-operand lifts, and state-only plus GPR+scratch-seeded branch-predicate summaries.
- `vm_path_microcode_catalog.py`: joins full concrete branch-path profiles with sampled path-conditioned transfer expressions into path-specialized pseudo-IR rows, carrying source branch-predicate context into each path row.
- `vm_path_pseudocode_dump.py`: renders validated path-specialized microcode rows into C-like concrete branch-path handler functions, using native GPR+scratch-seeded path rows by default.
- `vm_bytecode_file_atlas.py`: verifies recovered exact VM bytes against `eac.elf` and builds conservative file-backed bytecode atlas regions from observed segments plus small inferred gaps.
- `vm_trace_file_fill.py`: promotes bounded positive `prefix_32_of_N` rows to `file_span_of_N` rows by reading bytes from `eac.elf`, preserving them as sampled/file-backed coverage rather than exact consumed instructions.
- `vm_long_branch_catalog.py`: decodes sampled/backedge long-control bytecode rows whose first u32 is the target dispatch-table entry and whose second u32 is a signed VM-IP delta, verifies byte prefixes and static operand footprints against `eac.elf`, and emits TSV/Markdown lift summaries.
- `vm_hidden_transition_catalog.py`: catalogs adjacent trace pairs where the previous target handler is not the next hooked source, yielding file-backed hidden VM spans for unhooked or central-dispatch paths.
- `vm_trace_hidden_fill.py`: inserts those adjacent hidden spans as synthetic `hidden_span_of_N` rows so bytecode recovery can cover them as sampled/file-backed bytes.
- `vm_trace_frontier_fill.py`: inserts small file-backed `frontier_span_of_N` rows when an exact instruction lands at a recovered segment end and the next recovered segment starts within a conservative gap threshold.
- `vm_trace_target_footprint_fill.py`: inserts file-backed target-handler read footprints at exact destinations whose target handler has a known exact shape, sampled operand footprint, or decoded long-branch operand footprint.
- `vm_sampled_operand_catalog.py`: catalogs the remaining sampled non-long-branch rows with static operand footprints, verifies those operand bytes against `eac.elf`, and turns the last sparse prefix/backedge samples into explicit target/delta rows.
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
- `dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv`: decoded long-control bytecode variants from sampled/backedge rows.
- `dumps/vmtail-wide-1m-w16/vm_long_branch_top.md`: Markdown summary of the highest-volume long-control bytecode lifts.
- `dumps/vmtail-wide-1m-w16/vm_hidden_transition_catalog.tsv`: adjacent unhooked-span catalog for previous-target-to-next-hooked-source gaps.
- `dumps/vmtail-wide-1m-w16/vm_hidden_transition_top.md`: Markdown summary of the highest-volume hidden transition spans.
- `dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv`: byte-verified sampled operand variants for the remaining non-long sparse prefix/backedge rows.
- `dumps/vmtail-wide-1m-w16/vm_sampled_operand_top.md`: Markdown summary of those sampled operand variants.
- `dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill.tsv`: bounded prefix file-fill trace plus synthetic adjacent hidden-span rows.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_sampled.tsv`: sampled/file-backed byte recovery combining exact, sampled, bounded prefix file-fill, and adjacent hidden spans.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_filefill_hiddenfill_sampled.tsv`: contiguous blocks for the combined file-fill/hidden-fill trace.
- `dumps/vmtail-wide-1m-w16/vm_gap_report_filefill_hiddenfill.tsv`: gap report after combined file-fill and hidden-span coverage.
- `dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill.tsv`: combined file-fill/hidden-fill trace plus small exact-destination frontier spans.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_sampled.tsv`: sampled/file-backed byte recovery after small frontier fill.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_filefill_hiddenfill_frontierfill_sampled.tsv`: contiguous blocks for the combined file-fill/hidden-fill/frontier-fill trace.
- `dumps/vmtail-wide-1m-w16/vm_gap_report_filefill_hiddenfill_frontierfill.tsv`: gap report after combined file-fill, hidden-span, and frontier-span coverage.
- `dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv`: combined trace plus target-handler footprint spans for exact-destination starts.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_footprintfill_sampled.tsv`: best current sampled/file-backed byte recovery after target-footprint fill.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_blocks_filefill_hiddenfill_frontierfill_footprintfill_sampled.tsv`: contiguous blocks for the combined file-fill/hidden-fill/frontier-fill/footprint-fill trace.
- `dumps/vmtail-wide-1m-w16/vm_gap_report_filefill_hiddenfill_frontierfill_footprintfill.tsv`: best current gap report after all conservative file-backed fill passes.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_control_edges.tsv`: decoded long-branch plus sampled-operand VM control-flow edges mapped onto the best recovered bytecode segments.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_control_edges_top.md`: Markdown digest of the highest-volume decoded non-exact VM control-flow edges.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_ir.tsv`: unified VM-IP sorted recovered bytecode IR rows combining exact instruction lifts with decoded long-branch and sampled-operand sidecars, including compact symbolic state/dispatch/IP expression columns.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_ir_top.md`: Markdown digest of the highest-volume recovered bytecode IR rows.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_basic_blocks.tsv`: recovered VM basic blocks split from the unified bytecode IR.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_basic_block_edges.tsv`: terminal VM block edges, including decoded-control, exact fallthrough, and covered synthetic fallthrough terminals with target coverage statuses.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_basic_blocks_top.md`: Markdown digest and short listings for the hottest recovered VM basic blocks.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_loops.tsv`: block-level backedge and loop-body catalog derived from recovered bytecode blocks.
- `dumps/vmtail-wide-1m-w16/vm_bytecode_loops_top.md`: Markdown loop digest ranked by latch-event count and body-event count.
- `dumps/vmtail-wide-1m-w16/vm_synthetic_span_catalog.tsv`: semantic-gap catalog for file-backed synthetic spans from hidden, frontier, and target-footprint fill, including static target-only IP-advance splits and unresolved tail bytes.
- `dumps/vmtail-wide-1m-w16/vm_synthetic_span_top.md`: Markdown digest of the highest-volume synthetic span semantic gaps with tail u16 target-entry candidates.
- `dumps/vmtail-wide-1m-w16/vm_synthetic_tail_catalog.tsv`: aggregate catalog of unresolved synthetic suffix bytes after known-prefix splitting, grouped by exact tail variant, target offsets, and recurring motifs.
- `dumps/vmtail-wide-1m-w16/vm_synthetic_tail_top.md`: Markdown digest of the hottest unresolved synthetic tail variants.
- `dumps/vmtail-wide-1m-w16/vm_synthetic_tail_lift.tsv`: row-level lift of unresolved synthetic suffix bytes by VM IP, including embedded target-entry schemas and lift classes.
- `dumps/vmtail-wide-1m-w16/vm_synthetic_tail_lift_top.md`: Markdown digest of the highest-volume synthetic VM IP suffix lifts.
- `dumps/vmtail-wide-1m-w16/vm_handlers_pseudocode.c`: C-like static handler/operator reconstruction for all 360 dispatch entries.
- `dumps/vmtail-wide-1m-w16/vm_handlers_hot_pseudocode.c`: C-like handler/operator reconstruction for the 80 hottest observed dispatch entries.
- `dumps/vmtail-wide-1m-w16/vm_pseudocode_top.c`: C-like decompiler sketch for the hottest recovered VM basic blocks, with `VMState`, `U8/U16/U32` accessors, state assignments, dispatch/IP updates, terminal edges, and recovered synthetic terminal spans.
- `dumps/vmtail-wide-1m-w16/vm_program_pseudocode_top.c`: compact C-like bytecode program sketch where recovered VM basic blocks call `op_entry_NNN(vm)` handler functions.
- `dumps/vmtail-wide-1m-w16/vm_program_pseudocode_full.c`: full C-like bytecode program sketch for all recovered VM basic blocks and all recovered VM IR rows, with synthetic terminal spans lifted into explicit transitions.
- `dumps/vmtail-wide-1m-w16/vm_recovered_source_bundle.c`: single C-like reconstruction bundle combining the all-entry handler/operator layer with the full recovered VM bytecode program.
- `dumps/vmtail-wide-1m-w16/vm_trace_coverage_matrix.tsv`: cross-run dynamic coverage matrix comparing source handlers, target handlers, VM-IP starts, byte ranges, and segment bytes for the available trace scenarios.
- `dumps/vmtail-wide-1m-w16/vm_trace_coverage_matrix.md`: Markdown coverage summary that makes the scenario/path limitation explicit.
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
- `dumps/vmtail-wide-1m-w16/vm_path_microcode_catalog_fast.tsv`: compact pseudo-IR row per native state-only concrete source-handler branch path.
- `dumps/vmtail-wide-1m-w16/vm_path_microcode_fast_top.md`: Markdown digest for the top native state-only concrete branch paths.
- `dumps/vmtail-wide-1m-w16/vm_path_microcode_catalog_gpr_seeded.tsv`: compact pseudo-IR row per GPR+scratch-seeded concrete source-handler branch path.
- `dumps/vmtail-wide-1m-w16/vm_path_microcode_gpr_seeded_top.md`: Markdown digest for the top GPR+scratch-seeded concrete branch paths.
- `dumps/vmtail-wide-1m-w16/vm_path_microcode_catalog_gpr_seeded_fast.tsv`: compact pseudo-IR row per native GPR+scratch-seeded concrete source-handler branch path.
- `dumps/vmtail-wide-1m-w16/vm_path_microcode_gpr_seeded_fast_top.md`: Markdown digest for the top native GPR+scratch-seeded concrete branch paths.
- `dumps/vmtail-wide-1m-w16/vm_path_handlers_pseudocode.c`: C-like path-specialized handler functions for all 560 fully target/IP-validated native GPR+scratch-seeded concrete branch paths.
- `dumps/vmtail-wide-1m-w16/vm_path_handlers_hot_pseudocode.c`: C-like path-specialized handler functions for the 80 hottest validated concrete branch paths.
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
- `dumps/vmtail-state-wide-w16/vm_state_static_validate_fast.tsv`: native concrete validation of static state slices against the state-aware instruction trace.
- `dumps/vmtail-state-wide-w16/vm_static_dispatch_validate_fast.tsv`: native concrete validation of static dispatch target and VM IP advance against the state-aware instruction trace.
- `dumps/vmtail-state-wide-w16/vm_static_transfer_expr.tsv`: sampled path-sensitive symbolic dispatch-slot and VM IP-advance expressions, generated from up to 128 state-aware rows per source.
- `dumps/vmtail-state-wide-w16/vm_static_transfer_expr_gpr_seeded.tsv`: same native source-level transfer-expression sample, seeded with previous-tail GPRs and hot scratch-frame fields.
- `dumps/vmtail-state-wide-w16/vm_static_path_transfer_expr.tsv`: native path-conditioned symbolic dispatch-slot and IP-advance expressions over the same bounded transfer-expression sample.
- `dumps/vmtail-state-wide-w16/vm_static_path_transfer_expr_gpr_seeded.tsv`: native GPR+scratch-seeded path-conditioned symbolic dispatch-slot and IP-advance expressions.
- `dumps/vmtail-state-wide-w16/vm_static_path_profile.tsv`: per-source branch-path profile from concrete static handler replay over the full state-aware trace.
- `dumps/vmtail-state-wide-w16/vm_static_path_variants.tsv`: one row per distinct source-handler branch path, with per-path target distributions.
- `dumps/vmtail-state-wide-w16/vm_static_path_profile_gpr_seeded.tsv`: same path profile, but seeded with entry GPRs and hot scratch-frame fields from the previous `dumps/vmtail-scratch-wide-w16-fs337all-fs128/run.stderr` VMTAIL event.
- `dumps/vmtail-state-wide-w16/vm_static_path_variants_gpr_seeded.tsv`: one row per GPR+scratch-seeded source-handler branch path.
- `dumps/vmtail-state-wide-w16/vm_static_path_profile_fast.tsv` and `vm_static_path_variants_fast.tsv`: native path-profiler outputs for the state-only replay.
- `dumps/vmtail-state-wide-w16/vm_static_path_profile_gpr_seeded_fast.tsv` and `vm_static_path_variants_gpr_seeded_fast.tsv`: native path-profiler outputs for the GPR+scratch-seeded replay.
- `dumps/vmtail-state-wide-w16/vm_branch_sites_fast.tsv`: native full-trace branch-site outcome counts for the state-only replay.
- `dumps/vmtail-state-wide-w16/vm_branch_sites_gpr_seeded_fast.tsv`: native full-trace branch-site outcome counts for the GPR+scratch-seeded replay.
- `dumps/vmtail-state-wide-w16/vm_branch_predicates.tsv`: native bounded sampler row per source-handler branch site with outcome counts, unresolved predicate classes, and top condition expressions.
- `dumps/vmtail-state-wide-w16/vm_branch_predicates_top.md`: Markdown digest of the highest-volume unresolved branch predicates.
- `dumps/vmtail-state-wide-w16/vm_branch_predicates_gpr_seeded.tsv`: same native branch predicate catalog, seeded with previous-tail GPR snapshots and hot scratch-frame fields.
- `dumps/vmtail-state-wide-w16/vm_branch_predicates_gpr_seeded_top.md`: Markdown digest of the highest-volume unresolved GPR+scratch-seeded predicates.
- `dumps/vmtail-state-wide-w16/vm_branch_predicates_gpr_seeded_full.tsv`: unbounded GPR+scratch-seeded predicate provenance over all 1007971 dynamic branch evaluations; current unresolved count is zero.
- `dumps/vmtail-state-wide-w16/vm_dispatch_model_combined.tsv`: combined static-plus-affine dispatch model coverage for the state-aware instruction trace.
- `dumps/vmtail-state-wide-w16/vm_dispatch_formulas.tsv`: fitted dispatch-index formulas from the state-aware instruction trace.
- `dumps/vmtail-state-wide-w16/vm_dispatch_affine.tsv`: exact affine dispatch-index fits from the state-aware instruction trace.
- `dumps/vmtail-state-wide-w16/vm_dispatch_affine_cv.tsv`: 5-fold held-out validation of affine dispatch-index fits.
- `dumps/vmtail-regs-smoke-w16/run.stderr`: 50k VMTAIL trace with full GPR snapshots at each tail site.
- `dumps/vmtail-regs-smoke-w16/vm_tail_registers.tsv`: per-site/per-register role evidence from the GPR trace.
- `dumps/vmtail-regs-smoke-w16/vm_tail_register_summary.tsv`: compact one-row-per-site register-role summary for lifting dispatch tails.
- `dumps/vmtail-regs-wide-w16/run.stderr`: 250k VMTAIL trace with full GPR snapshots at each tail site.
- `dumps/vmtail-scratch-wide-w16-fs337all-fs128/run.stderr`: 250k VMTAIL trace with full GPR snapshots plus the default hot scratch-frame fields (`fs0x0`, `fs0x12`, `fs0x60`, `fs0x68`, `fs0x71`, `fs0x81`, `fs0xe1`, `fs0x13d`, `fs0x16f`, `fs0x1e8`), the entry-337 pointer-predicate offsets (`fs0x13`, `fs0x28`, `fs0x38`, `fs0x79`, `fs0x89`, `fs0x91`, `fs0x99`, `fs0xab`, `fs0xb3`, `fs0xcb`, `fs0xd3`, `fs0x107`, `fs0x123`, `fs0x147`, `fs0x19d`), and `fs0x128` for entry 95's final frame-bit predicate.
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
make long-branches
make hidden-transitions
make sampled-operands
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
make fast-state
make fast-state-transfer
make fast-state-predicates
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
mkdir -p dumps/vmtail-scratch-wide-w16-fs337all-fs128
timeout 60s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_DETAIL=1 \
  EAC_VMTAIL_TRACE=1 \
  EAC_VMTAIL_REGS=1 \
  EAC_VMTAIL_SCRATCH=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_VMTAIL_LIMIT=250000 \
  EAC_VMTAIL_SITES="$SPEC" \
  EAC_DUMP_DIR=dumps/vmtail-scratch-wide-w16-fs337all-fs128 \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/vmtail-scratch-wide-w16-fs337all-fs128/run.stdout \
  2>dumps/vmtail-scratch-wide-w16-fs337all-fs128/run.stderr
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
make fast-gpr-paths
make fast-gpr-transfer
make fast-gpr-predicates
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
python3 vm_path_microcode_catalog.py \
  --path-variants dumps/vmtail-state-wide-w16/vm_static_path_variants_fast.tsv \
  --path-transfer-expr dumps/vmtail-state-wide-w16/vm_static_path_transfer_expr.tsv \
  >dumps/vmtail-wide-1m-w16/vm_path_microcode_catalog_fast.tsv
python3 vm_path_microcode_catalog.py \
  --path-variants dumps/vmtail-state-wide-w16/vm_static_path_variants_fast.tsv \
  --path-transfer-expr dumps/vmtail-state-wide-w16/vm_static_path_transfer_expr.tsv \
  --markdown --limit 30 \
  >dumps/vmtail-wide-1m-w16/vm_path_microcode_fast_top.md
python3 vm_path_microcode_catalog.py \
  --path-variants dumps/vmtail-state-wide-w16/vm_static_path_variants_gpr_seeded.tsv \
  --path-transfer-expr dumps/vmtail-state-wide-w16/vm_static_path_transfer_expr_gpr_seeded.tsv \
  >dumps/vmtail-wide-1m-w16/vm_path_microcode_catalog_gpr_seeded.tsv
python3 vm_path_microcode_catalog.py \
  --path-variants dumps/vmtail-state-wide-w16/vm_static_path_variants_gpr_seeded.tsv \
  --path-transfer-expr dumps/vmtail-state-wide-w16/vm_static_path_transfer_expr_gpr_seeded.tsv \
  --markdown --limit 30 \
  >dumps/vmtail-wide-1m-w16/vm_path_microcode_gpr_seeded_top.md
python3 vm_path_microcode_catalog.py \
  --path-variants dumps/vmtail-state-wide-w16/vm_static_path_variants_gpr_seeded_fast.tsv \
  --path-transfer-expr dumps/vmtail-state-wide-w16/vm_static_path_transfer_expr_gpr_seeded.tsv \
  >dumps/vmtail-wide-1m-w16/vm_path_microcode_catalog_gpr_seeded_fast.tsv
python3 vm_path_microcode_catalog.py \
  --path-variants dumps/vmtail-state-wide-w16/vm_static_path_variants_gpr_seeded_fast.tsv \
  --path-transfer-expr dumps/vmtail-state-wide-w16/vm_static_path_transfer_expr_gpr_seeded.tsv \
  --markdown --limit 30 \
  >dumps/vmtail-wide-1m-w16/vm_path_microcode_gpr_seeded_fast_top.md
make path-pseudocode
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
make footprint-fill
make control-edges
make bytecode-ir
make bytecode-basic-blocks
make synthetic-tail-lift
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
| `decoded_long_branch_sample` | 58 | 1171 |
| `decoded_long_branch_source` | 9 | 1392 |
| `hidden_transition_destination` | 217 | 874 |
| `sampled_operand_known` | 12 | 13 |
| `sampled_operand_source` | 3 | 6 |
| `uncovered_exact_destination` | 67 | 68 |
| `target_only_entry` | 3 | 0 |
| `unobserved_entry` | 155 | 0 |

`vm_hidden_transition_catalog.py` attacks the remaining exact-destination holes from the dynamic sequence itself. When row N targets handler X but row N+1 is the next hooked source Y in the same frame, the bytes from row N's end VM IP to row N+1's start VM IP are a file-backed adjacent hidden span. The catalog has 121 grouped rows, 1529 hidden-span events, and 272 unique hidden starts. The top row is target-only entry 50 to next hooked entry 171, `+0x11`, 320 events over starts `0x230111` and `0x230b1b`.

`vm_trace_hidden_fill.py` inserts those spans as synthetic `hidden_span_of_N` rows. On the raw trace it adds 1529 rows / `0x6577` event-bytes and raises sampled recovery to 117 segments / `0x43a91` bytes with 0 conflicts. Composed after bounded prefix file-fill, it gives 83 segments / `0x453ee` bytes with 0 conflicts. In `vm_gap_report_filefill_hiddenfill.tsv`, the `hidden_transition_destination` class disappears because those spans are now covered; remaining uncovered exact destinations are only 67 rows / 68 events.

`vm_sampled_operand_catalog.py` covers the final non-long sampled rows. It matches 13 events across 12 source/target/delta variants with 0 operand byte mismatches. Entries 175, 195, and 299 use 6-byte static operand footprints, while entries 95, 278, and 311 use 10-byte footprints. With that sidecar loaded, the best gap report has no generic `backedge_sample`, `prefix_long_jump`, or `missing_exact_source` buckets; those rows become `sampled_operand_known` and the remaining source-level sparse rows become `sampled_operand_source`.

`vm_trace_frontier_fill.py` then handles the exact-destination boundary frontiers conservatively. It only inserts a file-backed span when an exact positive instruction lands at the end of a recovered segment and the next recovered segment starts within `0x20` bytes. On the combined file-fill/hidden-fill trace this inserts 45 rows / `0x269` event-bytes (`frontier_span_of_10`: 4, `frontier_span_of_14`: 40, `frontier_span_of_17`: 1), raises sampled/file-backed byte recovery to 38 segments / `0x45657` bytes, and still has 0 byte conflicts. The remaining uncovered exact destinations drop to 22 rows / 23 events.

`vm_trace_target_footprint_fill.py` covers those remaining exact-destination starts as target-handler read footprints instead of full instructions. Every remaining exact frontier lands on a handler with a known footprint: sampled operands for entries 175, 195, and 299; exact 10-byte shapes for entries 278 and 356; and a decoded long-branch operand footprint for entry 246. This inserts 23 rows / `0x97` event-bytes (`sampled_operand`: 20 rows, `exact_shape`: 2 rows, `long_branch_operand`: 1 row), raises sampled/file-backed recovery to 38 segments / `0x456e8` bytes, keeps 0 conflicts, and removes the `uncovered_exact_destination` class from the best gap report.

`vm_gap_report.py` prioritizes the remaining coverage holes. Against exact-only segments it reports:

| Gap Class | Rows | Events |
| --- | ---: | ---: |
| `decoded_long_branch_sample` | 127 | 1637 |
| `decoded_long_branch_source` | 9 | 1392 |
| `hidden_transition_destination` | 272 | 2117 |
| `sampled_operand_known` | 12 | 13 |
| `sampled_operand_source` | 3 | 6 |
| `target_only_entry` | 3 | 0 |
| `uncovered_exact_destination` | 173 | 1137 |
| `uncovered_source_start` | 158 | 1650 |
| `unobserved_entry` | 155 | 0 |

Against the combined file-fill/hidden-fill/frontier-fill/footprint-fill segments, `uncovered_source_start`, `hidden_transition_destination`, generic backedge/prefix samples, generic missing exact sources, and uncovered exact destinations disappear. The current best gap classes are:

| Gap Class | Rows | Events |
| --- | ---: | ---: |
| `decoded_long_branch_sample` | 58 | 1171 |
| `decoded_long_branch_source` | 9 | 1392 |
| `sampled_operand_known` | 12 | 13 |
| `sampled_operand_source` | 3 | 6 |
| `target_only_entry` | 3 | 0 |
| `unobserved_entry` | 155 | 0 |

The highest-priority remaining dynamic gaps are:

| Events | Gap | Detail |
| ---: | --- | --- |
| 447 | decoded long-branch source entry 316 (`0xb987b`) | aggregate of 13 decoded target/delta variants; top variants go to entries 165, 171, and 354 |
| 276 | decoded long-branch source entry 75 (`0x873fc`) | aggregate of 12 decoded target/delta variants; top variant goes to entry 171 |
| 200 | decoded long-branch source entry 266 (`0xaf8af`) | aggregate of 13 decoded target/delta variants; top variants go to entries 354 and 171 |
| 142 | decoded long-branch source entry 145 (`0x95b5c`) | aggregate of 11 decoded target/delta variants; top variant goes to entry 354 |
| 122 | decoded long-branch source entry 117 (`0x90acd`) | aggregate of 14 decoded target/delta variants; top variants go to entries 354 and 165 |
| 109 | decoded long-branch source entry 302 (`0xb7586`) | aggregate of 9 decoded target/delta variants; top variant goes to entry 171 |
| 255 | decoded long-branch sample entry 316 -> 165 | `next = table[165], ip -= 0x3c4`; exact consumed bytes still unavailable |
| 255 | decoded long-branch sample entry 75 -> 171 | `next = table[171], ip -= 0x6d`; exact consumed bytes still unavailable |

`vm_long_branch_catalog.py` now decodes the repeated sampled/backedge long-control format behind most of those source gaps. The format is file-backed and byte-verified: u32 target dispatch entry followed by a u32 signed VM-IP delta, where the high bit marks a negative/backedge delta. The catalog has 128 variants, 1638 events, 10 source handlers, 1151 backedge events, 487 forward events, 0 file-byte mismatches, and 0 operand-byte mismatches; `vm_gap_report.py` uses it to recategorize 9 missing-exact source rows / 1392 events as decoded long-branch sources.

That directly lifts the top missing-source rows into pseudo-IR instead of opaque sampled-only control flow: entry 75 has `255=next = table[171], ip -= 0x6d`; entry 316 has `255=next = table[165], ip -= 0x3c4` plus `91=next = table[171], ip += 0x2d` and `91=next = table[354], ip += 0x2d`; entry 145 has `125=next = table[354], ip += 0x139`; entry 266 has `125=next = table[354], ip -= 0x2e8`. These rows still need exact consumed-byte boundaries, but their dispatch target and VM-IP update are no longer unknown.

`vm_bytecode_control_edges.py` maps those decoded non-exact control variants onto the best recovered bytecode segments. It emits 140 decoded control-edge rows covering 1651 events with 0 missing source IPs and 0 missing target IPs. The split is 43 long-branch backedge rows / 1151 events, 85 long-branch forward rows / 487 events, 6 sampled-operand backedge rows / 6 events, and 6 sampled-operand forward rows / 7 events. Operand footprint coverage is 677 events at 8 bytes and 961 at 11 bytes for long branches, plus 6 events at 6 bytes and 7 events at 10 bytes for sampled operands. This makes the remaining non-exact control flow visible as segment-to-segment VM CFG edges rather than only per-handler gap rows.

`vm_bytecode_ir.py` merges the exact instruction lifts and decoded sidecars into one VM-IP sorted behavior table. It emits 71513 rows: 71355 exact instruction rows / 767566 events, 53 non-exact long-branch backedge rows / 1151 events, 93 non-exact long-branch forward rows / 486 events, 6 sampled-operand backedge rows / 6 events, and 6 sampled-operand forward rows / 7 events. The remaining long-branch forward event is already exact at VM IP `0x122aaa`, so it stays in the exact row count but is annotated with `vm_instruction_lift+long_branch`, `target_u32@+0,delta_u32@+4`, and `next = table[171], ip += 0x20`. Exact rows also join the transition model into compact `state_effect_ir`, `dispatch_expr_ir`, and `ip_advance_expr_ir` columns, so the table carries handler behavior rather than only handler IDs and byte advances. This gives a single per-VM-IP listing for the recovered bytecode behavior rather than separate exact-lift and decoded-gap views.

`vm_bytecode_basic_blocks.py` compresses that IR into 498 recovered VM basic blocks while preserving all 769216 IR events. Terminal split: 340 exact-instruction terminals, 53 long-branch backedge terminals, 93 long-branch forward terminals, 6 sampled-operand backedge terminals, and 6 sampled-operand forward terminals. Edge split: 158 decoded-control terminals, 53 known fallthrough terminals, and 287 covered synthetic fallthrough terminals where the exact instruction lands on a byte-covered but nonsemantic `hidden_span`, `frontier_span`, or `target_footprint` row from the final file-backed trace. Those 287 terminals account for 996 terminal events and are mostly covered by `hidden_span_of_17` (488 events), `hidden_span_of_14` (349), `hidden_span_of_16` (61), `frontier_span_of_14` (40), and `target_footprint_of_6` (20); no terminal target is now completely uncovered in the best trace. The loop catalog has 59 block-level backedges: 53 long-branch and 6 sampled-operand. The hottest latch-count loops are `0x22ffb1 -> 0x22ff44` / 255 events, `0x2303ae -> 0x22ffea` / 255 events, `0x371714 -> 0x37142c` / 125 events, and `0x315cc0 -> 0x310b1c` / 91 events; by loop-body event count the largest recovered regions are the sampled-operand loop `0x34355f -> 0x30e872` with 541190 body events / 27744 IR rows and the long-branch loop `0x315cc0 -> 0x310b1c` with 498494 body events / 5477 IR rows.

`vm_synthetic_span_catalog.py` turns those byte-covered synthetic rows into an explicit semantic-gap catalog. The final file-backed trace has 1597 synthetic rows grouped into 148 source/target/status classes, with 996 terminal events linked back to covered synthetic block terminals. All groups are now typed: 134 groups / 1227 events are `known_prefix_plus_tail`, 6 groups / 23 events are `operand_footprint_only`, 5 groups / 343 events are `target_only_prefix_plus_tail`, and 3 groups / 4 events are `single_known_footprint`. By known-prefix source, 93 groups / 728 events have decoded long-branch operand prefixes, 47 groups / 506 events have exact handler-shape prefixes, 5 groups / 343 events have static target-only IP-advance prefixes, and 3 groups / 20 events have sampled-operand prefixes. The biggest former target-only island is entry 50: its hidden `0x11` spans now split at the native tail-site IP update `tail_ip_add@0x833be`, giving an `0xb` handler prefix plus a 6-byte unresolved tail. The hot target-171 tails are `8000e801ab00` / 256 events and `8000ab00e801` / 64 events, with the observed target entry `171` appearing as a little-endian u16 at tail offset `+0x4` or `+0x2` respectively; the target-165 variant has `8000e801a500` / 4 events with entry `165` at tail offset `+0x4`. Entry 80 similarly splits `0x5 + 0xc`, and entry 5 splits `0x9 + 0x3`. The remaining high-volume synthetic spans are therefore not raw unknowns but known 5/9/10/11/13-byte prefixes plus compact unresolved tails.

`vm_synthetic_tail_catalog.py` aggregates those compact tails across all synthetic groups. There are 116 exact unresolved tail variants covering 1570 events. By tail length: `0x6` has 66 variants / 628 events, `0x4` has 7 variants / 501 events, `0xb` has 14 variants / 230 events, `0x5` has 21 variants / 166 events, `0xc` has 5 variants / 18 events, `0x8` has 2 variants / 26 events, and `0x3` has 1 variant / 1 event. The hottest target-bearing forms are small endian target words plus the recurring `e801` marker: `a500e801` -> target 165 / 154 events, `e801ab00` -> target 171 / 105 events, `ab00e801` -> target 171 / 87 events, `e801a500` -> target 165 / 64 events, `e8016201` -> target 354 / 50 events, and `6201e801` -> target 354 / 40 events. The longer 11-byte tail family is dominated by sampled long-control leftovers with paired `3d01`/`9d01` motifs, while the target-only entry 50 tails remain the special `8000...` forms above.

`vm_synthetic_tail_lift.py` maps those suffix variants back to individual synthetic VM IPs. The current lift covers 313 VM IPs / 1570 suffix events: 843 events have the observed target entry encoded directly in the suffix, 1073 events have a recognized schema, 603 events overlap a known decoded long-control branch at the same VM IP, another 123 events decode directly from an inline long-control prefix (`target_u32@+0,delta_u32@+4`) even when no catalog row covers that hidden/file-fill site, and only 1 event remains observed-target-only. The generated program/source sketches now include `synthetic tail lift:` comments on the synthetic edges they contain, so the C-like view shows schemas such as `8000+e801+target_u16@4`, `target_u16@0+e801`, and `e801+target_u16@2` next to the recovered transition. Fully encoded single-offset target tails are promoted to executable C-like target loads: direct block sketches use `next_entry = (int)U16(vm->ip + prefix + tail_offset)`, while handler-call sketches emit the post-prefix `U16(vm->ip + tail_offset)` after `op_entry_NNN(vm)`. The remaining long-tail family is no longer only a dangling schema: block comments now point at either the overlapping long-control branch, for example `316->171/+0x30` or `334->354/+0x2a5`, or the decoded inline long-control prefix, without pretending the shorter hidden edge is the whole branch.

`vm_pseudocode_dump.py` is the first direct C-like reconstruction artifact. It renders the recovered VM IR as block functions over a `VMState { ip, state, flags, byte }`, translating `state0`, `flags0`, `u16_N`, `u32_N`, and byte operands into C-like expressions and emitting `next_entry = ...; vm->ip += ...;` for each recovered VM instruction. `make pseudocode` writes `dumps/vmtail-wide-1m-w16/vm_pseudocode_top.c`; the current file contains 60 hottest VM basic blocks / 12349 lines, with long blocks truncated to 32 recovered IR statements each. Its 21 selected synthetic terminal spans are now lifted into explicit source/target/delta comments plus `next_entry = ...` and `vm->ip += ...` statements; 19 selected synthetic terminal spans carry row-level synthetic-tail schemas, 15 emit direct `U16(vm->ip + offset)` target loads, 17 internal synthetic rows now carry overlapping long-control comments, and 4 terminal synthetic edges carry decoded inline long-control-prefix comments. The only remaining `vm_unresolved_synthetic_tail` use is the default switch fallback. This is not polished source yet, but it is now a concrete C-shaped view of recovered behavior instead of only TSVs.

`vm_handler_pseudocode_dump.py` factors the VM ISA/operator layer out of the bytecode path. `make handler-pseudocode` emits `vm_handlers_pseudocode.c` for all 360 dispatch entries and `vm_handlers_hot_pseudocode.c` for the 80 hottest observed entries. The full file is 7210 lines and covers 166 `static_validated`, 155 `unobserved_static`, 13 `affine_dispatch_fallback`, 11 `partial`, 9 `sampled_only`, 3 `target_only`, and 3 `sampled_operand_lifted` handlers. Each `op_entry_NNN(VMState *vm)` carries native handler address, operand layout, native IP reads, state/flag expressions where safe, slot/IP updates where single-valued, observed top targets, validation status, and explicit comments for handlers not directly executed as source rows. When a single slot expression is recovered, the dump now normalizes it into `r.next_entry` as either a direct entry index or an 8-byte table offset; 120 handlers currently get such executable next-entry assignments. When a handler has no source-row execution but the native tail site contains a constant VM-IP update, the dump emits that static `vm->ip += ...` fallback; the current full file contains 157 such native-tail IP advances, including target-only entries 5, 50, and 80. This is the static/global C-like layer; the block pseudocode remains the dynamic bytecode path layer.

`vm_program_pseudocode_dump.py` then renders the recovered bytecode program in terms of that handler layer. `make pseudocode` emits `vm_program_pseudocode_top.c`, currently 25900 lines: 80 hottest VM basic blocks, 6182 `op_entry_NNN(vm)` calls, 6153 exact-row `next_entry` fallback assignments, 154 referenced handler prototypes, 29 recovered synthetic terminal spans, 27 terminal synthetic-tail lift comments, 17 internal synthetic-tail lift comments, 6 decoded long-control prefix comments, and 21 executable synthetic-tail target loads. Those synthetic terminals are no longer opaque calls: each one now carries source handler, observed target handler where available, total VM-IP delta, status, site, top bytes, row-level tail schema where recovered, and decoded inline long-control prefixes where present, then emits explicit `op_entry_NNN(vm)`, `next_entry = ...`, and `vm_ip += ...` statements. `make pseudocode-full` emits `vm_program_pseudocode_full.c`, currently 292908 lines / 17 MiB: all 498 recovered VM basic blocks, 71642 `op_entry_NNN(vm)` calls, 71355 exact-row `next_entry` fallback assignments, 205 referenced handler prototypes, all 287 covered synthetic fallthroughs lifted into explicit recovered transitions, 261 terminal synthetic-tail lift comments, 52 internal synthetic-tail lift comments, 48 decoded long-control prefix comments, and 212 executable synthetic-tail target loads. The only remaining `vm_unresolved_synthetic_tail` use in both program sketches is the default switch fallback for VM IPs outside the selected/recovered block set. `make source-bundle` writes `vm_recovered_source_bundle.c`, currently 299902 lines / 18 MiB, combining all 360 `op_entry_NNN` handler bodies with the full 498-block bytecode program, 287 recovered synthetic transitions, 313 synthetic-tail lift comments, 52 overlap comments, 48 decoded-prefix comments, and 212 synthetic-tail target-load expressions in one source-style artifact. This is the most readable C-shaped program artifact so far: native handler arithmetic, bytecode block order, bytes, VM IPs, expected next entries, decoded control edges, recovered per-instruction `vm_ip` progress, recovered synthetic edges, synthetic suffix schemas, direct suffix target loads, and long-control overlap/prefix annotations are now available together in the source bundle, with the separate `vm_handlers_pseudocode.c` and `vm_program_pseudocode_*.c` files kept as smaller views.

Coverage caveat: the C-like bytecode/CFG artifacts are dynamic-path reconstructions, not proof that every VM program path has been executed. `vm_trace_coverage_matrix.py` compares the raw available runs. The current primary `vmtail-wide-1m-w16` run observes 202 source handlers, 205 target handlers, and 71513 unique VM-IP starts; the shorter `wide`, `wide-w16`, `mode0-w16`, `mode2-w16`, and `state-wide-w16` runs each observe only 191 source handlers, 195 target handlers, and 39725 VM-IP starts, adding no source handlers beyond the primary and missing 11 primary sources. The static handler inventory is broader: the dispatch table and microcode catalog cover 360 handler entries, of which 202 have source events in the primary run. So static handler semantics, handler pseudocode, operand-layout recovery, and dispatch-table inventory are not limited to the no-network path. The recovered VM bytecode listing still is scenario/path coverage until we add traces from other configs, enable/shape network-dependent paths, or force unexplored VM branches through static/symbolic exploration.

The static skeletons agree with that decode. All 10 long-control source handlers read a u16 at VM IP `+0x0` for the table entry and u32 at `+0x4` for the signed delta. The shorter form appears in entries 117, 266, 302, and 308, while entries 75, 145, 210, 246, 316, and 334 also read u16 at `+0x8` and byte at `+0xa`. That gives 677 events with an 8-byte minimum operand footprint and 961 events with an 11-byte footprint without claiming the whole branch span is linear instruction bytes.

The best next trace targets are therefore exact byte-length and semantic-resolution holes rather than broad reruns: they isolate long-control VM IP bands (`0x22ffb1`, `0x370xxx`, `0x371xxx`, `0x310dba`, `0x31297d`, `0x3157e1`, `0x315cc0`) and sparse source handlers (`316`, `75`, `266`, `145`, `117`, `302`, plus footprint-filled target starts for `175`, `195`, `299`, `278`, `356`, and `246`) that still block full bytecode/ISA recovery.

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

The static state validator concretely executes the static state slice over the state-aware trace, following simple `je`/`jne` branches when the compare/test value is known. The native `vm_fast_path_profile --state-validate` mode now emits the same validation schema in about 7 seconds on this host, replacing the roughly 5-minute Python full-trace refresh for routine runs. It validates the static state model for 248903 of 248906 state-trace instruction rows, or 99.9988% of the trace. The only mismatches are one-event sources 101, 241, and 284 with long control-flow-like byte windows. In the lifted long catalog, 71339 exact rows and 767542 events come from sources with 100% static state validation. All 48 robust dispatch-affine sources are in that 100% static-state set, covering 9197 rows and 101596 events.

The static dispatch validator extends the same concrete slice through the final table lookup and VM IP write. The native `vm_fast_path_profile --dispatch-validate` mode now emits the same schema in about 7 seconds as well. It validates both dispatch target and `frame+0x0a` advance for 248300 of 248906 state-trace rows, or 99.7565%. The 606 misses are concentrated in 13 sources that use native `ret`/stack control-flow or long control-flow-like windows before the VM tail: entries 356, 216, 95, 278, 311, 102, 264, 321, 85, 78, 284, 241, and 101. In the lifted long catalog, 71237 exact rows and 764108 events come from sources with 100% static dispatch/IP validation. The validator covers 43 of the 48 robust dispatch-affine sources at 100%, covering 9139 exact rows and 99661 events.

`vm_dispatch_model_combine.py` closes that dynamic gap by preferring the static dispatch validator and falling back to affine dispatch bit formulas for static-target misses. On the state-aware trace, the combined model validates all 248906 exact instruction rows:

| Dispatch Model | Sources | Events |
| --- | ---: | ---: |
| `static_100` | 166 | 248300 |
| `affine_robust_fallback` | 5 | 360 |
| `affine_partial_fallback` | 3 | 241 |
| `affine_single_fallback` | 5 | 5 |

The affine fallback uses formulas fitted over state/post-state/byte features, so it is a validated dynamic dispatch model rather than a purely static one. In the lifted long catalog, the combined model tags 71343 rows and 767546 events; 12 exact rows and 20 events remain untagged only because their source handlers were not present in the state-aware trace.

`vm_transition_model.py` consolidates the handler-level reconstruction into `vm_transition_model.tsv`, one row for each of the 360 dispatch entries. It joins the long-run handler skeleton, static state/flag update chain, state and dispatch validation percentages, affine CV status, sampled transfer expressions, decoded long-control bytecode lifts with operand footprints, sampled-operand lifts with operand footprints, branch-predicate provenance, combined dispatch model, and tail operand provenance. The observation mix is 190 exact-covered entries, 155 unobserved entries, 7 sampled backedge entries, 4 sampled long/sparse entries, 3 target-only entries, and 1 central/long-control-flow entry.

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
| with branch-predicate provenance | 163 | 748543 |
| with tail target register/operand | 181 | 765570 |
| with live/static slot temp | 181 | 765570 |
| with byte/static index register | 156 | 704763 |

The long-control sidecar attaches decoded target/IP-update variants and static operand footprints to 10 transition-model entries, covering 1638 sampled/backedge catalog events across 128 variants. The sampled-operand sidecar attaches 13 additional sparse non-long sampled events across 12 variants to 6 entries: 95, 175, 195, 278, 299, and 311. These sidecars are tracked separately from the `observed_events` column because some sampled rows, notably source entry 308 and the central/sparse sampled operands, are underrepresented in exact source-profile event counts.

Combined dispatch-model distribution in the transition model:

| Dispatch Model | Entries | Long-Run Events |
| --- | ---: | ---: |
| `static_100` | 166 | 764108 |
| `affine_robust_fallback` | 5 | 1935 |
| `affine_partial_fallback` | 3 | 1497 |
| `affine_single_fallback` | 5 | 6 |

The model is intentionally keyed by dispatch entry rather than bytecode instruction. Eleven exact-observed entries, covering 20 long-run events, still have no dispatch model tag because they were absent from the state-aware trace; the other blank rows are unobserved or sampled-only entry classes.

`vm_fast_path_profile --transfer-expr` adds a path-sensitive symbolic view of the same static dispatch mechanism. It follows concrete branches from the state-aware trace, but carries symbolic expressions for the table-slot byte offset and `frame+0x0a` IP advance. The current artifact is deliberately bounded to at most 128 rows per source, so its event counts are expression-sampling counts rather than full-trace coverage counts. The native sampler emits the four bounded source/path transfer TSVs in about 10 seconds total on this host. On that sample it covers all 179 state-aware source handlers and agrees with the concrete target/IP validator for the same 166 static-dispatch-clean handlers:

| Transfer-Expression Coverage | Sources | Sample Events |
| --- | ---: | ---: |
| sampled source handlers | 179 | 16691 |
| 100% target/IP agreement | 166 | 16085 |
| with dispatch-slot expression | 166 | 16085 |
| single observed slot expression | 127 | 11378 |
| multiple observed slot expressions | 39 | 4707 |
| single observed IP-advance expression | 179 | 16691 |

Representative recovered dispatch-slot expressions now appear directly in `vm_transition_model.tsv`. For example, entry 28 dispatches through `table[u16_0 & 0xffff]` with `ip += 0x3`, while entry 0 dispatches through `table[((u16_0 + (state0 ^ 0x1966e0e7)) - 0x251a0141) & 0xffff]` with `ip += 0x5`, modulo the 32-bit masks shown in the TSV.

The GPR+scratch-seeded source-level transfer sample preserves the same 171 source rows with 100% target/IP agreement while removing sampled branch uncertainty entirely. With the enriched `fs0x128` trace and native pointer model, all 179 sampled source rows and all 16691 sampled events carry dispatch-slot expressions.

The native `--transfer-expr --by-path` view of the same bounded transfer-expression sample is `vm_static_path_transfer_expr.tsv`. It resolves the apparent multi-formula source handlers into concrete branch-path formulas. In the 128-row-per-source sample it observes 352 source-path rows across all 179 state-aware sources. All 341 source-path rows with 100% target/IP agreement have exactly one slot expression and one IP-advance expression:

| Path-Conditioned Transfer Expressions | Source-Paths | Sample Events |
| --- | ---: | ---: |
| sampled source-path rows | 352 | 16691 |
| 100% target/IP agreement | 341 | 16153 |
| with dispatch-slot expression | 352 | 16691 |
| single slot expression per path | 352 | 16691 |
| multiple slot expressions per path | 0 | 0 |

This is useful because source-level handlers such as entries 18, 20, 26, 64, 66, 114, 258, and 337 have multiple observed slot formulas, but each sampled concrete branch path has a single formula. That gives a clean route to path-specialized devirtualized blocks.

The seeded `--by-path` transfer-expression view observes 462 GPR+scratch-seeded source-path rows in the same 16691-row sample; 452 rows covering 16153 sample events have 100% target/IP agreement, and every sampled source-path row has a dispatch-slot expression plus an IP-advance expression. Joining those seeded expression rows back to the native seeded path table covers 462 of 570 concrete paths, covering 245646 state-trace events.

`vm_static_path_profile.py` explains why some handlers have multiple sampled transfer expressions. It replays the full state-aware trace through the static handler interpreter and records concrete branch outcomes as path hashes. The source-level profile exactly preserves the static dispatch validator's coverage: 248300 of 248906 state-trace rows validate target and IP, and the same 606 rows end in unresolved native/long-control-flow paths. Across 179 state-aware source handlers, the replay observes 400 distinct branch paths:

| Path Profile | Sources/Paths | State-Trace Events |
| --- | ---: | ---: |
| source handlers profiled | 179 | 248906 |
| sources with 100% target/IP validation | 166 | 248300 |
| sources with one observed path | 74 | 39028 |
| sources with multiple observed paths | 105 | 209878 |
| distinct source-path rows | 400 | 248906 |

The most path-diverse source is entry 330 with 12 observed paths over 169 state-trace events. Other high-diversity handlers include entries 208 with 11 paths, 237 and 48 with 8 paths each, and entries 108, 257, 319, 292, and 105 with 7 paths each. The high-volume handlers are usually much simpler: entry 258 has two concrete paths, entry 28 has three, and entries 337, 340, 189, 347, 307, 64, and 66 have one or two dominant paths. These path counts are now joined into `vm_transition_model.tsv` and summarized in `vm_microcode_catalog.tsv`.

`vm_fast_path_profile` is the native version of this concrete replay loop. It uses Capstone C for handler decoding, OpenSSL SHA-256 for path hashes, and direct TSV streaming for trace rows. On the full GPR+scratch-seeded 248906-row trace it preserves the static target/IP coverage at 248368 validated events while eliminating all branch-unknown events. The `--emit-dir` batch mode regenerates all `_fast.tsv` replay artifacts in two passes, and `make fast-replay fast-predicates fast-transfer` refreshes replay, predicate, and transfer artifacts in `elapsed=0:31.69`. Its image-backed frame/IP reads, restore-trampoline `push`/`pop` preservation, biased frame and stack pointer normalization, low-bit pointer arithmetic, and `fs0x128` scratch seeding produce 570 native seeded source-path rows, 560 fully target/IP-validated paths, 0 branch-unknown events, and 58252 unknown ops. The matched `_fast.tsv` path microcode catalogs now use those native path rows for the concrete devirtualized view.

The native `--branch-sites` mode gives full-trace branch outcome counts without the slow Python provenance pass. It emits 855 branch-site rows and accounts for 1007971 dynamic branch evaluations. State-only replay leaves 207821 branch events unresolved, while GPR+scratch seeding now resolves every branch outcome:

| Native Branch Sites | Rows | Dynamic Branch Events | Unknown Branch Events |
| --- | ---: | ---: | ---: |
| state-only replay | 855 | 1007971 | 207821 |
| GPR+scratch-seeded replay | 855 | 1007971 | 0 |

The static interpreter also resolves opaque pointer predicates by using the traced VM frame location (`base+0x7836d`). Since the image base is page-aligned, the low byte of `rbp+off` is stable; byte-sized comparisons such as `cmp $0, %r12b` after `r12 = rbp + 0x170` can be resolved without knowing the absolute ASLR base. The interpreter preserves commutative `int + pointer` arithmetic, propagates known low bits through mixed pointer arithmetic, compares same-base pointers by offset, proves inequality when known low bits differ, and clears `ZF` when unknown flag-clobbering arithmetic is encountered instead of accidentally reusing stale flags. It normalizes scratch seeds that become frame or stack pointers only after obfuscating biases (`0x1a44e4ef`, `0x61f749a7`, `0xda3b7d9`), carries stable low bits for dispatch-table and stack pointers, and treats restore-trampoline `push`/`pop` register operands as register-preserving. The enriched scratch traces add all 16 dynamic frame offsets used by entry 337's `0xbeee0` pointer predicate and `fs0x128` for entry 95's final frame-bit predicate, removing both from the unresolved predicate catalog. Target/IP coverage remains unchanged, but path and branch records are now fully concrete under GPR+scratch seeding.

`vm_fast_path_profile --branch-predicates` explains branch predicates by replaying concrete values plus symbolic/provenance labels for the last compare/test or flag-producing arithmetic. The current TSV artifacts are bounded to 128 rows per source; the native sampler emits the state-only and GPR+scratch-seeded catalogs in a few seconds each. Use native `--branch-sites` for full-trace outcome counts. The bounded state-only sample emits 855 source-handler branch-site rows and accounts for 68949 dynamic branch events; 11176 remain unresolved without GPR seeding. The GPR+scratch-seeded bounded catalog has 0 unresolved events, and the unbounded `vm_branch_predicates_gpr_seeded_full.tsv` confirms 0 unresolved events across all 1007971 dynamic branch evaluations.

Sampled unresolved branch-predicate classes:

| Class | Dynamic Branch Events | Interpretation |
| --- | ---: | --- |
| `live_in_reg` | 6154 | branch depends on a register value carried from a previous handler |
| `unknown_frame_field` | 3547 | frame field was neither one of the modeled VM fields nor a seeded scratch value |
| `derived_live_in` | 1475 | condition derives from live-in data through arithmetic before the compare |

Top sampled unresolved branch sites:

| Entry | Branch | Unknown / Events | Class | Top Condition |
| ---: | --- | ---: | --- | --- |
| 3 | `0x78c93:je` | 128 / 128 | `live_in_reg` | branch depends on an unseeded live-in register |
| 3 | `0x78cd4:je` | 128 / 128 | `live_in_reg` | branch depends on an unseeded live-in register |
| 17 | `0x7bafa:je` | 128 / 128 | `live_in_reg` | branch depends on an unseeded live-in register |
| 18 | `0x7bed4:je` | 128 / 128 | `live_in_reg` | branch depends on an unseeded live-in register |
| 20 | `0x7c649:je` | 128 / 128 | `live_in_reg` | branch depends on an unseeded live-in register |
| 26 | `0x7ddeb:jne` | 128 / 128 | `unknown_frame_field` | compares VM bytecode-derived frame pointer against an unseeded frame scratch field |
| 30 | `0x7e868:je` | 128 / 128 | `live_in_reg` | branch depends on an unseeded live-in register |
| 30 | `0x7e896:je` | 128 / 128 | `live_in_reg` | branch depends on an unseeded live-in register |

This is the state-only baseline. The GPR+scratch-seeded predicate catalog is now fully resolved, so it no longer has a top-unknown list.

That next pass is now implemented in the native path/predicate replay via `vm_fast_path_profile --gpr-run`. The GPR+scratch trace and state-aware trace start with the same VMTAIL sequence, so row `N` can seed handler-entry registers and hot `fs0x...` frame fields from VMTAIL event `N-1`. Register values are normalized back into the static interpreter's model: values near the VM frame become `Ptr("frame", off)`, table-slot pointers become `Ptr("table", off)`, VM-bytecode pointers become `Ptr("ip", off)`, and other in-image code pointers become file offsets.

The full GPR+scratch-seeded replay slightly improves dispatch/IP validation coverage, and the latest native pointer normalization resolves the former branch uncertainty:

| Path Replay | Source-Path Rows | Target/IP Validated Events | Unknown Branch Events | Unknown Ops |
| --- | ---: | ---: | ---: | ---: |
| state-only static replay | 400 | 248300 / 248906 | 209434 | 12896277 |
| state-only native replay | 403 | 248368 / 248906 | 207821 | 11007609 |
| GPR+scratch-seeded replay | 737 | 248363 / 248906 | 40939 | 4593720 |
| GPR+scratch-seeded native replay | 570 | 248368 / 248906 | 0 | 58252 |

The path-row count first increases because formerly unknown live-in predicates split into concrete taken/not-taken paths. The newest native seeded table then collapses formerly `?` path fragments after biased scratch-frame, stack-pointer, image-backed, low-bit, restore-trampoline, and `fs0x128` predicates resolve. It has 570 source-path rows over the same 248906 state-trace events; 560 of those paths, covering 248368 events, validate target and IP at 100%. Top branch-unknown reductions by source are:

| Entry | Events | Unknown Branches Before | Unknown Branches After | Reduction |
| ---: | ---: | ---: | ---: | ---: |
| 337 | 7502 | 15004 | 0 | 15004 |
| 297 | 6483 | 12966 | 0 | 12966 |
| 168 | 4535 | 9070 | 0 | 9070 |
| 347 | 8151 | 8151 | 0 | 8151 |
| 301 | 2037 | 8148 | 0 | 8148 |
| 346 | 1997 | 7988 | 0 | 7988 |
| 114 | 7722 | 7722 | 0 | 7722 |
| 340 | 7549 | 7549 | 0 | 7549 |
| 189 | 7459 | 7459 | 0 | 7459 |
| 268 | 3696 | 7392 | 0 | 7392 |
| 18 | 7392 | 7392 | 0 | 7392 |

This confirms that cross-handler register carry and hot scratch-frame fields are real VM control-flow state, not merely junk. With the current enriched trace and native model, no GPR+scratch-seeded branch predicates remain unresolved in the observed state trace.

The bounded GPR+scratch-seeded predicate catalog confirms the same reduction at branch-site level over the same 68949 sampled branch events:

| Predicate Catalog | Unknown Branch Events | Top Remaining Classes |
| --- | ---: | --- |
| state-only predicates | 11176 | `live_in_reg:6154`, `unknown_frame_field:3547`, `derived_live_in:1475` |
| GPR+scratch-seeded predicates | 0 | `resolved:68949` |
| GPR+scratch-seeded full predicates | 0 | `resolved:1007971` |

The largest full-path-profile reductions are direct proof that seeding resolves live-in and scratch-frame predicates, especially entries 337, 297, 168, 347, 301, 346, 114, 340, and 189. Full-trace native branch-site counts now show no remaining GPR+scratch-seeded unknown sites.

`vm_microcode_catalog.py` is the compact human-facing index over the reconstructed handlers. It joins the transition model, ISA operand layouts, static state/flag update chains, sampled/backedge long-control bytecode lifts with operand footprints, sampled-operand bytecode lifts with operand footprints, and source-level state-only plus GPR+scratch-seeded branch-predicate summaries into pseudo-IR rows. The TSV keeps one row per dispatch entry, while `vm_microcode_top.md` renders the top 30 observed entries by event count with clipped expression hashes that point back to the full lower-level TSVs.

Microcode catalog class distribution:

| Class | Entries | Long-Run Events |
| --- | ---: | ---: |
| `static_validated` | 166 | 764108 |
| `affine_dispatch_fallback` | 13 | 3438 |
| `sampled_only` | 9 | 1392 |
| `sampled_operand_lifted` | 3 | 6 |
| `partial` | 11 | 20 |
| `unobserved_static` | 155 | 0 |
| `target_only` | 3 | 0 |

The catalog currently has state/flag pseudo-IR for 335 entries covering 766060 long-run events, dispatch-slot pseudo-IR or model tags for 179 entries covering 767546 events, long-control tail IR and 8/11-byte operand footprints for 10 sparse sampled/backedge source handlers, sampled-operand tail IR and 6/10-byte operand footprints for 6 sparse/exact source handlers covering 13 sampled events, state-only and GPR+scratch-seeded branch-predicate summaries for 163 entries covering 748543 events, and operand-layout summaries for the 190 exact-covered handlers covering 767566 events.

`vm_path_microcode_catalog.py` specializes that catalog by concrete handler branch path. It joins the full `vm_static_path_variants.tsv` state-trace path counts with the sampled `vm_static_path_transfer_expr.tsv` slot/IP formulas and the source-level microcode, including source branch-predicate and GPR+scratch-seeded predicate context. This is the closest current artifact to path-specialized devirtualized blocks:

| Path Microcode Coverage | Paths | State-Trace Events |
| --- | ---: | ---: |
| concrete source-handler paths | 400 | 248906 |
| 100% target/IP validated paths | 387 | 248300 |
| paths with sampled expression rows | 343 | 245901 |
| paths with sampled slot expression | 343 | 245901 |
| paths from static-validated sources | 387 | 248300 |
| paths from affine-dispatch fallback sources | 13 | 606 |

The native state-only path microcode variant is the better match for the refreshed low-bit path formulas: it has 403 concrete path rows, 392 fully target/IP-validated paths, sampled expression rows for 352 paths covering 246298 events, and sampled slot expressions for the same 352 paths. The top native path row is entry 307 path `594cbf6454cdfe82`, with 7050 state-trace events and slot expression `(u16_1 - 0x665a9b5) & 0xffff`, followed by entry 258 path `4be73f077fec7fc7` with 6275 events and its non-affine state-derived slot expression. The Markdown digests `vm_path_microcode_top.md` and `vm_path_microcode_fast_top.md` are useful for quickly inspecting these high-volume specialized blocks.

The legacy GPR+scratch-seeded path microcode variant uses `vm_static_path_variants_gpr_seeded.tsv` and `vm_static_path_transfer_expr_gpr_seeded.tsv`. It has 737 concrete path rows; 724 paths covering 248363 state-trace events validate target and IP at 100%. The native seeded variant is the stronger concrete view after biased scratch-frame, stack-pointer, image-backed, low-bit, restore-trampoline, and `fs0x128` normalization: 570 paths, 560 validated paths, and sampled expression/slot rows for 462 paths covering 245646 events.

`vm_path_pseudocode_dump.py` renders the native GPR+scratch-seeded path microcode into concrete C-like branch-path functions. `make path-pseudocode` writes `vm_path_handlers_pseudocode.c` and `vm_path_handlers_hot_pseudocode.c`. The full file currently has 560 validated `path_entry_NNN_hash(VMState *vm)` functions, 383 executable next-entry assignments (373 direct entry-index formulas and 10 table-offset formulas), 452 concrete VM-IP updates, and 69 long or clipped slot formulas preserved as comments instead of emitted as invalid C. This splits multi-variant handlers into separate concrete branch paths; it is still path evidence from the state/GPR trace set, not proof that every runtime config branch has been exercised.

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
