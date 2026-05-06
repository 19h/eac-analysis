# VM Program Atlas 018 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x122344` | `ready_for_mba_reduction` | `0x122466` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x122474` | `ready_for_mba_reduction` | `0x122615` | 75 | `covered_synthetic_fallthrough` | `` |
| `0x122626` | `ready_for_mba_reduction` | `0x122a46` | 171 | `decoded_control` | `` |

- Concrete successor reductions emitted: `3` / `3` cases
- Cases with complete stateful formula inputs: `3` / `3` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
