# VM Program Atlas 061 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x36b124` | `needs_more_evidence` | `0x36b346` | 354 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36b346` | `needs_more_evidence` | `0x36b38e` | 171 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36b374` | `needs_more_evidence` | `0x36b346` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36b38e` | `needs_more_evidence` | `0x36b592` | 171 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36b592` | `needs_more_evidence` | `0x36b693` | 78 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36b6a4` | `needs_more_evidence` | `0x36bb1e` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36b8a7` | `needs_more_evidence` | `0x36b592` | 171 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36bb1e` | `needs_more_evidence` | `0x36bee0` | 95 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36beee` | `needs_more_evidence` | `0x36c10a` | 216 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36c118` | `needs_more_evidence` | `0x36c395` | 95 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36c3a3` | `needs_more_evidence` | `0x36c4e9` | 145 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36c4fa` | `needs_more_evidence` | `0x36c68c` | 216 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36c69a` | `needs_more_evidence` | `0x36c829` | 210 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36c839` | `needs_more_evidence` | `0x36c899` | 75 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36c8aa` | `needs_more_evidence` | `0x36c9b1` | 354 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36c9b1` | `needs_more_evidence` | `0x36cabe` | 216 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36cacc` | `needs_more_evidence` | `0x36ccc6` | 50 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36ccd7` | `needs_more_evidence` | `0x36d579` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36cdf9` | `needs_more_evidence` | `0x36cf76` | 356 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36cf84` | `needs_more_evidence` | `0x36d1cd` | 216 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36d1db` | `needs_more_evidence` | `0x36d3a2` | 80 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36d3b3` | `needs_more_evidence` | `0x36d524` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |

- Concrete successor reductions emitted: `22` / `22` cases
- Cases with complete stateful formula inputs: `0` / `22` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
