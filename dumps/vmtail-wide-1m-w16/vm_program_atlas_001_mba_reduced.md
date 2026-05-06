# VM Program Atlas 001 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0xd3fac` | `ready_for_mba_reduction` | `0xd420b` | 321 | `covered_synthetic_fallthrough` | `` |
| `0xd421c` | `ready_for_mba_reduction` | `0xd43cf` | 80 | `covered_synthetic_fallthrough` | `` |
| `0xd43e0` | `ready_for_mba_reduction` | `0xd476e` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `3` / `3` cases
- Cases with complete stateful formula inputs: `3` / `3` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
