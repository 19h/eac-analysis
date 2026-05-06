# VM Program Atlas 037 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x2bf297` | `ready_for_mba_reduction` | `0x2bf3b8` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x2bf3c6` | `ready_for_mba_reduction` | `0x2bf97c` | 165 | `decoded_control` | `` |

- Concrete successor reductions emitted: `2` / `2` cases
- Cases with complete stateful formula inputs: `2` / `2` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
