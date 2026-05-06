# VM Program Atlas 022 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x176883` | `ready_for_mba_reduction` | `0x176aa5` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x176ab3` | `ready_for_mba_reduction` | `0x176c87` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x176c95` | `ready_for_mba_reduction` | `0x176e97` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x176ea5` | `ready_for_mba_reduction` | `0x1770e9` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x1770f7` | `ready_for_mba_reduction` | `0x177353` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `5` / `5` cases
- Cases with complete stateful formula inputs: `5` / `5` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
