# VM Program Atlas 036 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x2bec2e` | `ready_for_mba_reduction` | `0x2bed4f` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x2bed5d` | `ready_for_mba_reduction` | `0x2bef26` | 80 | `covered_synthetic_fallthrough` | `` |
| `0x2bef37` | `ready_for_mba_reduction` | `0x2bf297` | 165 | `decoded_control` | `` |

- Concrete successor reductions emitted: `3` / `3` cases
- Cases with complete stateful formula inputs: `3` / `3` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
