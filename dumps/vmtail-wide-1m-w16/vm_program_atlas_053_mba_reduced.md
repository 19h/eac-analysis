# VM Program Atlas 053 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x33db28` | `ready_for_mba_reduction` | `0x33dcbd` | 210 | `covered_synthetic_fallthrough` | `` |
| `0x33dcce` | `ready_for_mba_reduction` | `0x33dd15` | 165 | `fallthrough` | `` |
| `0x33dd15` | `ready_for_mba_reduction` | `0x33de22` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x33de30` | `ready_for_mba_reduction` | `0x33e02a` | 80 | `covered_synthetic_fallthrough` | `` |
| `0x33e03b` | `ready_for_mba_reduction` | `0x33e8de` | 165 | `decoded_control` | `` |
| `0x33e15d` | `ready_for_mba_reduction` | `0x33e2da` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x33e2e8` | `ready_for_mba_reduction` | `0x33e532` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x33e540` | `ready_for_mba_reduction` | `0x33e707` | 69 | `covered_synthetic_fallthrough` | `` |
| `0x33e718` | `ready_for_mba_reduction` | `0x33e889` | 165 | `decoded_control` | `` |

- Concrete successor reductions emitted: `9` / `9` cases
- Cases with complete stateful formula inputs: `9` / `9` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
