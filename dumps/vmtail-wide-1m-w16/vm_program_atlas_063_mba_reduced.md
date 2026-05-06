# VM Program Atlas 063 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x36ecdc` | `ready_for_mba_reduction` | `0x36eefe` | 165 | `fallthrough` | `` |
| `0x36eefe` | `ready_for_mba_reduction` | `0x36ef46` | 171 | `decoded_control` | `` |
| `0x36ef2c` | `ready_for_mba_reduction` | `0x36eefe` | 165 | `decoded_control` | `` |
| `0x36ef46` | `ready_for_mba_reduction` | `0x36f14a` | 165 | `fallthrough` | `` |
| `0x36f14a` | `ready_for_mba_reduction` | `0x36f6af` | 165 | `decoded_control` | `` |
| `0x36f438` | `ready_for_mba_reduction` | `0x36f14a` | 165 | `decoded_control` | `` |
| `0x36f6af` | `ready_for_mba_reduction` | `0x36f820` | 165 | `fallthrough` | `` |
| `0x36f820` | `ready_for_mba_reduction` | `0x36faf6` | 171 | `decoded_control` | `` |
| `0x36f87c` | `ready_for_mba_reduction` | `0x36f820` | 165 | `decoded_control` | `` |
| `0x36faf6` | `ready_for_mba_reduction` | `0x36fca8` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x36fcb6` | `ready_for_mba_reduction` | `0x36fed4` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x36fee2` | `ready_for_mba_reduction` | `0x370127` | 69 | `covered_synthetic_fallthrough` | `` |
| `0x370138` | `ready_for_mba_reduction` | `0x370249` | 246 | `covered_synthetic_fallthrough` | `` |
| `0x370256` | `ready_for_mba_reduction` | `0x370258` | 340 | `fallthrough` | `` |
| `0x370258` | `ready_for_mba_reduction` | `0x3703d8` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x3703e6` | `ready_for_mba_reduction` | `0x370770` | 354 | `decoded_control` | `` |
| `0x370508` | `ready_for_mba_reduction` | `0x370624` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x370632` | `ready_for_mba_reduction` | `0x370743` | 145 | `covered_synthetic_fallthrough` | `` |
| `0x370756` | `ready_for_mba_reduction` | `0x37078a` | 171 | `decoded_control` | `` |
| `0x370770` | `ready_for_mba_reduction` | `0x37078a` | 171 | `fallthrough` | `` |
| `0x37078a` | `ready_for_mba_reduction` | `0x371a63` | 165 | `decoded_control` | `` |
| `0x3707b1` | `ready_for_mba_reduction` | `0x3708e4` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x3708f2` | `ready_for_mba_reduction` | `0x370a81` | 246 | `covered_synthetic_fallthrough` | `` |
| `0x370a91` | `ready_for_mba_reduction` | `0x370cb0` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x370cbe` | `ready_for_mba_reduction` | `0x370f0a` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x370f18` | `ready_for_mba_reduction` | `0x37142c` | 354 | `fallthrough` | `` |
| `0x37142c` | `ready_for_mba_reduction` | `0x37171c` | 354 | `decoded_control` | `` |
| `0x371488` | `ready_for_mba_reduction` | `0x3716c7` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `28` / `28` cases
- Cases with complete stateful formula inputs: `28` / `28` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
