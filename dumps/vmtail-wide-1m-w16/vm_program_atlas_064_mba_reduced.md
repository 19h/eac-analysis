# VM Program Atlas 064 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x3716c7` | `ready_for_mba_reduction` | `0x37142c` | 354 | `decoded_control` | `` |
| `0x37171c` | `ready_for_mba_reduction` | `0x3717c4` | 165 | `decoded_control` | `` |

- Concrete successor reductions emitted: `2` / `2` cases
- Cases with complete stateful formula inputs: `2` / `2` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
