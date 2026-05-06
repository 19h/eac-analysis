# VM Program Atlas 063 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x36ecdc` | `needs_more_evidence` | `0x36eefe` | 165 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36eefe` | `needs_more_evidence` | `0x36ef46` | 171 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36ef2c` | `needs_more_evidence` | `0x36eefe` | 165 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36ef46` | `needs_more_evidence` | `0x36f14a` | 165 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36f14a` | `needs_more_evidence` | `0x36f6af` | 165 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36f438` | `needs_more_evidence` | `0x36f14a` | 165 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36f6af` | `needs_more_evidence` | `0x36f820` | 165 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36f820` | `needs_more_evidence` | `0x36faf6` | 171 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36f87c` | `needs_more_evidence` | `0x36f820` | 165 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36faf6` | `needs_more_evidence` | `0x36fca8` | 264 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36fcb6` | `needs_more_evidence` | `0x36fed4` | 356 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x36fee2` | `needs_more_evidence` | `0x370127` | 69 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x370138` | `needs_more_evidence` | `0x370249` | 246 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x370256` | `needs_more_evidence` | `0x370258` | 340 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x370258` | `needs_more_evidence` | `0x3703d8` | 311 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x3703e6` | `needs_more_evidence` | `0x370770` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x370508` | `needs_more_evidence` | `0x370624` | 95 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x370632` | `needs_more_evidence` | `0x370743` | 145 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x370756` | `needs_more_evidence` | `0x37078a` | 171 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x370770` | `needs_more_evidence` | `0x37078a` | 171 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x37078a` | `needs_more_evidence` | `0x371a63` | 165 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x3707b1` | `needs_more_evidence` | `0x3708e4` | 264 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x3708f2` | `needs_more_evidence` | `0x370a81` | 246 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x370a91` | `needs_more_evidence` | `0x370cb0` | 356 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x370cbe` | `needs_more_evidence` | `0x370f0a` | 264 | `covered_synthetic_fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x370f18` | `needs_more_evidence` | `0x37142c` | 354 | `fallthrough` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x37142c` | `needs_more_evidence` | `0x37171c` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |
| `0x371488` | `needs_more_evidence` | `0x3716c7` | 354 | `decoded_control` | `state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte` |

- Concrete successor reductions emitted: `28` / `28` cases
- Cases with complete stateful formula inputs: `0` / `28` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
