# VM Program Atlas 008 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x11bc28` | `ready_for_mba_reduction` | `0x11bd5f` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x11bd6d` | `ready_for_mba_reduction` | `0x11beb3` | 334 | `covered_synthetic_fallthrough` | `` |
| `0x11bec4` | `ready_for_mba_reduction` | `0x11bf5d` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `3` / `3` cases
- Cases with complete stateful formula inputs: `3` / `3` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
