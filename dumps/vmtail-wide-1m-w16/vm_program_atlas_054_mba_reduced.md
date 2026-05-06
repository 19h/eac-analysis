# VM Program Atlas 054 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x33e889` | `ready_for_mba_reduction` | `0x33dd15` | 165 | `decoded_control` | `` |
| `0x33e8de` | `ready_for_mba_reduction` | `0x3369fc` | 169 | `decoded_control` | `` |

- Concrete successor reductions emitted: `2` / `2` cases
- Cases with complete stateful formula inputs: `2` / `2` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
