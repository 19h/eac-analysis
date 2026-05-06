# VM Program Atlas 055 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x33f278` | `ready_for_mba_reduction` | `0x33f6c8` | 354 | `fallthrough` | `` |
| `0x33f6c8` | `ready_for_mba_reduction` | `0x33f710` | 171 | `decoded_control` | `` |
| `0x33f6f6` | `ready_for_mba_reduction` | `0x33f6c8` | 354 | `decoded_control` | `` |
| `0x33f710` | `ready_for_mba_reduction` | `0x33f914` | 171 | `fallthrough` | `` |
| `0x33f914` | `ready_for_mba_reduction` | `0x33fe02` | 165 | `decoded_control` | `` |
| `0x33fc02` | `ready_for_mba_reduction` | `0x33f914` | 171 | `decoded_control` | `` |
| `0x33fe02` | `ready_for_mba_reduction` | `0x34017b` | 354 | `fallthrough` | `` |
| `0x34017b` | `ready_for_mba_reduction` | `0x3401c3` | 171 | `decoded_control` | `` |
| `0x3401a9` | `ready_for_mba_reduction` | `0x34017b` | 354 | `decoded_control` | `` |
| `0x3401c3` | `ready_for_mba_reduction` | `0x3403c7` | 354 | `fallthrough` | `` |
| `0x3403c7` | `ready_for_mba_reduction` | `0x340953` | 354 | `decoded_control` | `` |
| `0x3406dc` | `ready_for_mba_reduction` | `0x3403c7` | 354 | `decoded_control` | `` |
| `0x340953` | `ready_for_mba_reduction` | `0x340ac4` | 354 | `fallthrough` | `` |
| `0x340ac4` | `ready_for_mba_reduction` | `0x340d9a` | 171 | `decoded_control` | `` |
| `0x340b20` | `ready_for_mba_reduction` | `0x340ac4` | 354 | `decoded_control` | `` |
| `0x340d9a` | `ready_for_mba_reduction` | `0x340f03` | 171 | `fallthrough` | `` |
| `0x340f03` | `ready_for_mba_reduction` | `0x340f4b` | 165 | `decoded_control` | `` |
| `0x340f31` | `ready_for_mba_reduction` | `0x340f03` | 171 | `decoded_control` | `` |
| `0x340f4b` | `ready_for_mba_reduction` | `0x34114f` | 165 | `fallthrough` | `` |
| `0x34114f` | `ready_for_mba_reduction` | `0x3416b4` | 165 | `decoded_control` | `` |
| `0x34143d` | `ready_for_mba_reduction` | `0x34114f` | 165 | `decoded_control` | `` |
| `0x3416b4` | `ready_for_mba_reduction` | `0x341a2d` | 171 | `fallthrough` | `` |
| `0x341a2d` | `ready_for_mba_reduction` | `0x341a75` | 354 | `decoded_control` | `` |
| `0x341a5b` | `ready_for_mba_reduction` | `0x341a2d` | 171 | `decoded_control` | `` |
| `0x341a75` | `ready_for_mba_reduction` | `0x341c79` | 354 | `fallthrough` | `` |
| `0x341c79` | `ready_for_mba_reduction` | `0x342205` | 171 | `decoded_control` | `` |
| `0x341f8e` | `ready_for_mba_reduction` | `0x341c79` | 354 | `decoded_control` | `` |
| `0x342205` | `ready_for_mba_reduction` | `0x342376` | 165 | `fallthrough` | `` |
| `0x342376` | `ready_for_mba_reduction` | `0x34264c` | 354 | `decoded_control` | `` |
| `0x3423d2` | `ready_for_mba_reduction` | `0x342376` | 165 | `decoded_control` | `` |
| `0x34264c` | `ready_for_mba_reduction` | `0x3427b5` | 171 | `fallthrough` | `` |
| `0x3427b5` | `ready_for_mba_reduction` | `0x3427fd` | 171 | `decoded_control` | `` |
| `0x3427e3` | `ready_for_mba_reduction` | `0x3427b5` | 171 | `decoded_control` | `` |
| `0x3427fd` | `ready_for_mba_reduction` | `0x342a01` | 171 | `fallthrough` | `` |
| `0x342a01` | `ready_for_mba_reduction` | `0x342f66` | 165 | `decoded_control` | `` |
| `0x342cef` | `ready_for_mba_reduction` | `0x342a01` | 171 | `decoded_control` | `` |
| `0x342f66` | `ready_for_mba_reduction` | `0x3430d7` | 171 | `fallthrough` | `` |
| `0x3430d7` | `ready_for_mba_reduction` | `0x3433ad` | 354 | `decoded_control` | `` |
| `0x343132` | `ready_for_mba_reduction` | `0x3430d7` | 171 | `decoded_control` | `` |
| `0x3433ad` | `ready_for_mba_reduction` | `0x30e872` | 42 | `decoded_control` | `` |
| `0x343569` | `ready_for_mba_reduction` | `0x34367e` | 145 | `covered_synthetic_fallthrough` | `` |
| `0x34368f` | `needs_more_evidence` | `0x343ef4` | 354 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x343ef4` | `needs_more_evidence` | `0x343f3c` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x343f22` | `needs_more_evidence` | `0x343ef4` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x343f3c` | `needs_more_evidence` | `0x34556c` | 175 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |

- Concrete successor reductions emitted: `45` / `45` cases
- Cases with complete stateful formula inputs: `41` / `45` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
