# VM Program Atlas 065 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x3717c4` | `ready_for_mba_reduction` | `0x3718ff` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x37190d` | `ready_for_mba_reduction` | `0x371a20` | 316 | `covered_synthetic_fallthrough` | `` |
| `0x371a30` | `ready_for_mba_reduction` | `0x370256` | 171 | `decoded_control` | `` |
| `0x371a63` | `needs_more_evidence` | `0x371b85` | 95 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x371b93` | `needs_more_evidence` | `0x371e16` | 311 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x371e24` | `needs_more_evidence` | `0x36504c` | 310 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |

- Concrete successor reductions emitted: `6` / `6` cases
- Cases with complete stateful formula inputs: `3` / `6` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
