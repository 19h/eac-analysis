# VM Program Atlas 016 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x121b31` | `ready_for_mba_reduction` | `0x121c83` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x121c91` | `ready_for_mba_reduction` | `0x121ec6` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x121ed4` | `ready_for_mba_reduction` | `0x122074` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `3` / `3` cases
- Cases with complete stateful formula inputs: `3` / `3` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
