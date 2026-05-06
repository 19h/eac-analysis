# VM Program Atlas 051 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x33a385` | `ready_for_mba_reduction` | `0x33a50b` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x33a519` | `ready_for_mba_reduction` | `0x33a6cc` | 299 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `2` / `2` cases
- Cases with complete stateful formula inputs: `2` / `2` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
