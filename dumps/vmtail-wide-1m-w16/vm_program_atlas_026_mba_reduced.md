# VM Program Atlas 026 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x1a480d` | `needs_more_evidence` | `0x1a4a91` | 311 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1a4a9f` | `needs_more_evidence` | `0x1a4c73` | 356 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1a4c81` | `needs_more_evidence` | `0x1a4daa` | 334 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1a4dbb` | `needs_more_evidence` | `0x1a4fc9` | 356 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1a4fd7` | `needs_more_evidence` | `0x1a519e` | 80 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1a51af` | `needs_more_evidence` | `0x1a52c0` | 75 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1a52d0` | `needs_more_evidence` | `0x1a5438` | 278 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1a5446` | `needs_more_evidence` | `0x1a55ef` | 145 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1a5600` | `needs_more_evidence` | `0x1a5793` | 278 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1a57a1` | `needs_more_evidence` | `0x1a5968` | 321 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1a5979` | `needs_more_evidence` | `0x1a5a8a` | 316 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1a5a9a` | `needs_more_evidence` | `0x1a5d7e` | 311 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x1a5d8c` | `needs_more_evidence` | `0x1a5f3d` | 165 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |

- Concrete successor reductions emitted: `13` / `13` cases
- Cases with complete stateful formula inputs: `0` / `13` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
