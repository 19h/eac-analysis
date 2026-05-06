# VM Program Atlas 056 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x3603af` | `ready_for_mba_reduction` | `0x360dfd` | 171 | `fallthrough` | `` |
| `0x360dfd` | `ready_for_mba_reduction` | `0x3613bb` | 165 | `decoded_control` | `` |
| `0x361143` | `ready_for_mba_reduction` | `0x360dfd` | 171 | `decoded_control` | `` |
| `0x3613bb` | `ready_for_mba_reduction` | `0x36152c` | 171 | `fallthrough` | `` |
| `0x36152c` | `ready_for_mba_reduction` | `0x361802` | 354 | `decoded_control` | `` |
| `0x361587` | `ready_for_mba_reduction` | `0x36152c` | 171 | `decoded_control` | `` |
| `0x361802` | `ready_for_mba_reduction` | `0x362615` | 354 | `fallthrough` | `` |
| `0x362615` | `ready_for_mba_reduction` | `0x362b2a` | 171 | `decoded_control` | `` |
| `0x36292a` | `ready_for_mba_reduction` | `0x362615` | 354 | `decoded_control` | `` |
| `0x362b2a` | `ready_for_mba_reduction` | `0x362c9b` | 171 | `fallthrough` | `` |
| `0x362c9b` | `ready_for_mba_reduction` | `0x362f71` | 354 | `decoded_control` | `` |
| `0x362cf7` | `ready_for_mba_reduction` | `0x362c9b` | 171 | `decoded_control` | `` |
| `0x362f71` | `ready_for_mba_reduction` | `0x363d84` | 165 | `fallthrough` | `` |
| `0x363d84` | `ready_for_mba_reduction` | `0x36426c` | 165 | `decoded_control` | `` |
| `0x36406b` | `ready_for_mba_reduction` | `0x363d84` | 165 | `decoded_control` | `` |
| `0x36426c` | `ready_for_mba_reduction` | `0x364c68` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x364c72` | `ready_for_mba_reduction` | `0x364d87` | 316 | `covered_synthetic_fallthrough` | `` |
| `0x364d98` | `ready_for_mba_reduction` | `0x364e55` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x364e5f` | `ready_for_mba_reduction` | `0x364f74` | 334 | `covered_synthetic_fallthrough` | `` |
| `0x364f84` | `ready_for_mba_reduction` | `0x365042` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x36504c` | `ready_for_mba_reduction` | `0x365190` | 165 | `decoded_control` | `` |
| `0x365190` | `ready_for_mba_reduction` | `0x365458` | 165 | `decoded_control` | `` |

- Concrete successor reductions emitted: `22` / `22` cases
- Cases with complete stateful formula inputs: `22` / `22` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
