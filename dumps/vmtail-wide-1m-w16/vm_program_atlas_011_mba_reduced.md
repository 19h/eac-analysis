# VM Program Atlas 011 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x11de9f` | `ready_for_mba_reduction` | `0x11e02d` | 78 | `covered_synthetic_fallthrough` | `` |
| `0x11e03e` | `ready_for_mba_reduction` | `0x11e14f` | 316 | `covered_synthetic_fallthrough` | `` |
| `0x11e15f` | `ready_for_mba_reduction` | `0x11e27c` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x11e28a` | `ready_for_mba_reduction` | `0x11e574` | 165 | `decoded_control` | `` |

- Concrete successor reductions emitted: `4` / `4` cases
- Cases with complete stateful formula inputs: `4` / `4` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
