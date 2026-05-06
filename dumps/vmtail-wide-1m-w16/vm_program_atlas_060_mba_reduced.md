# VM Program Atlas 060 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x369ad3` | `needs_more_evidence` | `0x368f60` | 165 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x369b28` | `needs_more_evidence` | `0x369c4a` | 95 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x369c58` | `needs_more_evidence` | `0x369edb` | 278 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x369ee9` | `needs_more_evidence` | `0x364c72` | 310 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |

- Concrete successor reductions emitted: `4` / `4` cases
- Cases with complete stateful formula inputs: `0` / `4` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
