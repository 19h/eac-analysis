# VM Program Atlas 020 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x128952` | `ready_for_mba_reduction` | `0x128b72` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x128b80` | `ready_for_mba_reduction` | `0x128de7` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x128df5` | `ready_for_mba_reduction` | `0x12906f` | 278 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `3` / `3` cases
- Cases with complete stateful formula inputs: `3` / `3` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
