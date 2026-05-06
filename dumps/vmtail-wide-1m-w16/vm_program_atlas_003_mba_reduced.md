# VM Program Atlas 003 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0xd5a12` | `ready_for_mba_reduction` | `0xd5b17` | 264 | `covered_synthetic_fallthrough` | `` |
| `0xd5b25` | `ready_for_mba_reduction` | `0xd5cfb` | 356 | `covered_synthetic_fallthrough` | `` |
| `0xd5d09` | `ready_for_mba_reduction` | `0xd5ebc` | 195 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `3` / `3` cases
- Cases with complete stateful formula inputs: `3` / `3` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
