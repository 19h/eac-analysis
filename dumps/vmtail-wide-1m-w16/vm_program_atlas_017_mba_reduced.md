# VM Program Atlas 017 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x122074` | `ready_for_mba_reduction` | `0x122196` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x1221a4` | `ready_for_mba_reduction` | `0x122344` | 171 | `decoded_control` | `` |

- Concrete successor reductions emitted: `2` / `2` cases
- Cases with complete stateful formula inputs: `2` / `2` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
