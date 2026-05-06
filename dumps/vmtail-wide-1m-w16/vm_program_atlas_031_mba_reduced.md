# VM Program Atlas 031 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x2316bf` | `ready_for_mba_reduction` | `0x2319b3` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x2319c1` | `ready_for_mba_reduction` | `0x231b74` | 195 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `2` / `2` cases
- Cases with complete stateful formula inputs: `2` / `2` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
