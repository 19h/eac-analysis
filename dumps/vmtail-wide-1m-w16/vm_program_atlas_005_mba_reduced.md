# VM Program Atlas 005 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0xda38f` | `ready_for_mba_reduction` | `0xda4b0` | 264 | `covered_synthetic_fallthrough` | `` |
| `0xda4be` | `ready_for_mba_reduction` | `0xdac57` | 165 | `decoded_control` | `` |

- Concrete successor reductions emitted: `2` / `2` cases
- Cases with complete stateful formula inputs: `2` / `2` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
