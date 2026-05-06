# VM Program Atlas 022 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x176883` | `needs_more_evidence` | `0x176aa5` | 264 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x176ab3` | `needs_more_evidence` | `0x176c87` | 95 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x176c95` | `needs_more_evidence` | `0x176e97` | 216 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x176ea5` | `needs_more_evidence` | `0x1770e9` | 95 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1770f7` | `needs_more_evidence` | `0x177353` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |

- Concrete successor reductions emitted: `5` / `5` cases
- Cases with complete stateful formula inputs: `0` / `5` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
