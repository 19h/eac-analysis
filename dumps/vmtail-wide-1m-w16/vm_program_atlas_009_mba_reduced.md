# VM Program Atlas 009 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x11bf5d` | `ready_for_mba_reduction` | `0x11c0ac` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x11c0ba` | `ready_for_mba_reduction` | `0x11c200` | 334 | `covered_synthetic_fallthrough` | `` |
| `0x11c211` | `ready_for_mba_reduction` | `0x11c2aa` | 165 | `decoded_control` | `` |

- Concrete successor reductions emitted: `3` / `3` cases
- Cases with complete stateful formula inputs: `3` / `3` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
