# VM Program Atlas 052 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x33b647` | `ready_for_mba_reduction` | `0x33be49` | 354 | `fallthrough` | `` |
| `0x33be49` | `ready_for_mba_reduction` | `0x33c5b8` | 171 | `decoded_control` | `` |
| `0x33bea5` | `ready_for_mba_reduction` | `0x33be49` | 354 | `decoded_control` | `` |
| `0x33c5b8` | `ready_for_mba_reduction` | `0x33cd0f` | 316 | `covered_synthetic_fallthrough` | `` |
| `0x33cd1f` | `ready_for_mba_reduction` | `0x33d2d9` | 195 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `5` / `5` cases
- Cases with complete stateful formula inputs: `5` / `5` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
