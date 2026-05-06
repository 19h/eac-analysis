# VM Program Atlas 019 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x122a46` | `needs_more_evidence` | `0x122c7b` | 278 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x122c89` | `needs_more_evidence` | `0x122e3c` | 299 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |

- Concrete successor reductions emitted: `2` / `2` cases
- Cases with complete stateful formula inputs: `0` / `2` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
