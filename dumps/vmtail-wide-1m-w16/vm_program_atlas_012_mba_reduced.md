# VM Program Atlas 012 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x11e574` | `ready_for_mba_reduction` | `0x11e695` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x11e6a3` | `ready_for_mba_reduction` | `0x11e962` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x11e970` | `ready_for_mba_reduction` | `0x11eb8c` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x11eb9a` | `ready_for_mba_reduction` | `0x11edcf` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x11eddd` | `ready_for_mba_reduction` | `0x11ef65` | 171 | `decoded_control` | `` |

- Concrete successor reductions emitted: `5` / `5` cases
- Cases with complete stateful formula inputs: `5` / `5` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
