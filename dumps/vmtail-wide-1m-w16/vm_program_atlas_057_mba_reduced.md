# VM Program Atlas 057 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x365458` | `ready_for_mba_reduction` | `0x3654e0` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `1` / `1` cases
- Cases with complete stateful formula inputs: `1` / `1` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
