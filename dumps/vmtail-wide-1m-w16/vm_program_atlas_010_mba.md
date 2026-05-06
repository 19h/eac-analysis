# VM Program Atlas 010 MBA Collection

- Program range: `0x11c2aa`..`0x11de59`
- Case states / blocks: `15`
- IR rows captured: `1823`
- Runtime observations captured: `335` from `21` trace files
- Case-start observations with concrete pre-state: `52`

## Reduction Readiness

- Ready for MBA reduction from collected evidence: `11` / `15` cases
- Missing additional stateful observations: `4` cases

| State | Status | Trace obs | Pre-state obs | Edge | Target | Needs |
| --- | --- | ---: | ---: | --- | --- | --- |
| `0x11c2aa` | `ready_for_mba_reduction` | 18 | 5 | `covered_synthetic_fallthrough` | `0x11c3f9` | `` |
| `0x11c407` | `ready_for_mba_reduction` | 18 | 5 | `covered_synthetic_fallthrough` | `0x11c682` | `` |
| `0x11c690` | `ready_for_mba_reduction` | 18 | 5 | `covered_synthetic_fallthrough` | `0x11ca2a` | `` |
| `0x11ca38` | `ready_for_mba_reduction` | 18 | 5 | `covered_synthetic_fallthrough` | `0x11ccf7` | `` |
| `0x11cd05` | `ready_for_mba_reduction` | 18 | 5 | `covered_synthetic_fallthrough` | `0x11cf21` | `` |
| `0x11cf2f` | `ready_for_mba_reduction` | 18 | 5 | `covered_synthetic_fallthrough` | `0x11d207` | `` |
| `0x11d215` | `ready_for_mba_reduction` | 18 | 5 | `covered_synthetic_fallthrough` | `0x11d3d3` | `` |
| `0x11d3e1` | `ready_for_mba_reduction` | 18 | 5 | `covered_synthetic_fallthrough` | `0x11d6a2` | `` |
| `0x11d6b0` | `ready_for_mba_reduction` | 17 | 4 | `covered_synthetic_fallthrough` | `0x11d91b` | `` |
| `0x11d929` | `ready_for_mba_reduction` | 17 | 4 | `covered_synthetic_fallthrough` | `0x11da3a` | `` |
| `0x11da4b` | `ready_for_mba_reduction` | 17 | 4 | `decoded_control` | `0x33f278` | `` |
| `0x11db16` | `needs_more_evidence` | 11 | 0 | `covered_synthetic_fallthrough` | `0x11dc27` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x11dc37` | `needs_more_evidence` | 11 | 0 | `decoded_control` | `0x3603af` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x11dd03` | `needs_more_evidence` | 11 | 0 | `covered_synthetic_fallthrough` | `0x11de14` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x11de27` | `needs_more_evidence` | 11 | 0 | `decoded_control` | `0x11de9f` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |

## Files

- `vm_program_atlas_010_mba_cases.tsv`: per-case static block, raw bytecode, edge, and observation summary.
- `vm_program_atlas_010_mba_observations.tsv`: all trace rows whose start is a case state or whose end enters a case state.
- `vm_program_atlas_010_mba_ir_rows.tsv`: all lifted IR rows inside the program.

- `vm_program_atlas_010_mba_requirements.tsv`: reduction-readiness checklist for each case.
- `vm_program_atlas_010_mba_missing.tsv`: focused list of cases still missing mandatory reduction inputs.
- `vm_program_atlas_010_mba_trace_targets.tsv`: focused VMTAIL capture env for cases still missing state/flags/byte.
- `vm_program_atlas_010_mba_frida_trace.js`: focused direct-instrumentation template for missing runtime fields.

## Missing For Full MBA Reduction

- Concrete state/flags/byte observations are still missing for: `0x11db16`, `0x11dc37`, `0x11dd03`, `0x11de27`.
- Native function entry address if using the generated Frida direct-dispatch logger.
- Runtime pointer value for `ctx->ip`, so alias checks against `&ctx->next` can be proven directly.
- Additional diverse observations if any MBA helper is not uniquely determined by the existing state traces.
