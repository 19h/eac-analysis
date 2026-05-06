# VM Program Atlas 039 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x2bfe6f` | `ready_for_mba_reduction` | `0x2bff90` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x2bff9e` | `ready_for_mba_reduction` | `0x2c0230` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x2c023e` | `ready_for_mba_reduction` | `0x2c045a` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x2c0468` | `ready_for_mba_reduction` | `0x2c1156` | 171 | `decoded_control` | `` |

- Concrete successor reductions emitted: `4` / `4` cases
- Cases with complete stateful formula inputs: `4` / `4` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
