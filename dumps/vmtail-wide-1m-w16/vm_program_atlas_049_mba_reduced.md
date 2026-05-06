# VM Program Atlas 049 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x336dc8` | `ready_for_mba_reduction` | `0x33710f` | 299 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `1` / `1` cases
- Cases with complete stateful formula inputs: `1` / `1` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
