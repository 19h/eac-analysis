# VM Program Atlas 014 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x1209d2` | `ready_for_mba_reduction` | `0x120af4` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x120b02` | `ready_for_mba_reduction` | `0x120d67` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x120d75` | `ready_for_mba_reduction` | `0x1210d6` | 165 | `decoded_control` | `` |

- Concrete successor reductions emitted: `3` / `3` cases
- Cases with complete stateful formula inputs: `3` / `3` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
