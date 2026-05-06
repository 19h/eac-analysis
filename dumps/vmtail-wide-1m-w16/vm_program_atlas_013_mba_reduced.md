# VM Program Atlas 013 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x11ef65` | `ready_for_mba_reduction` | `0x11f1b9` | 5 | `covered_synthetic_fallthrough` | `` |
| `0x11f1c5` | `ready_for_mba_reduction` | `0x11f39b` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x11f3a9` | `ready_for_mba_reduction` | `0x1209d2` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `3` / `3` cases
- Cases with complete stateful formula inputs: `3` / `3` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
