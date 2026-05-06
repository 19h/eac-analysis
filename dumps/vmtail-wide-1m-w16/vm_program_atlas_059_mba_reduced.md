# VM Program Atlas 059 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x3674c3` | `needs_more_evidence` | `0x3676e5` | 171 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x3676e5` | `needs_more_evidence` | `0x36772d` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x367713` | `needs_more_evidence` | `0x3676e5` | 171 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36772d` | `needs_more_evidence` | `0x367931` | 165 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x367931` | `needs_more_evidence` | `0x367e96` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x367c1f` | `needs_more_evidence` | `0x367931` | 165 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x367e96` | `needs_more_evidence` | `0x368007` | 354 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x368007` | `needs_more_evidence` | `0x3682dd` | 165 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x368063` | `needs_more_evidence` | `0x368007` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x3682dd` | `needs_more_evidence` | `0x36848f` | 311 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36849d` | `needs_more_evidence` | `0x3686b9` | 311 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x3686c7` | `needs_more_evidence` | `0x368944` | 356 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x368952` | `needs_more_evidence` | `0x368a98` | 75 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x368aa9` | `needs_more_evidence` | `0x368c3b` | 356 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x368c49` | `needs_more_evidence` | `0x368dd8` | 334 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x368de9` | `needs_more_evidence` | `0x368e48` | 334 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x368e58` | `needs_more_evidence` | `0x368f60` | 165 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x368f60` | `needs_more_evidence` | `0x36906d` | 216 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36907b` | `needs_more_evidence` | `0x369275` | 321 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x369286` | `needs_more_evidence` | `0x369b28` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x3693a8` | `needs_more_evidence` | `0x369525` | 356 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x369533` | `needs_more_evidence` | `0x36977c` | 278 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36978a` | `needs_more_evidence` | `0x369951` | 69 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x369962` | `needs_more_evidence` | `0x369ad3` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |

- Concrete successor reductions emitted: `24` / `24` cases
- Cases with complete stateful formula inputs: `0` / `24` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
