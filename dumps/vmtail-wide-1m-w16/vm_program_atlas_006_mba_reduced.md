# VM Program Atlas 006 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0xdac57` | `ready_for_mba_reduction` | `0xdad78` | 264 | `covered_synthetic_fallthrough` | `` |
| `0xdad86` | `ready_for_mba_reduction` | `0xdaf39` | 195 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `2` / `2` cases
- Cases with complete stateful formula inputs: `2` / `2` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
