# VM Program Atlas 060 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x369ad3` | `ready_for_mba_reduction` | `0x368f60` | 165 | `decoded_control` | `` |
| `0x369b28` | `ready_for_mba_reduction` | `0x369c4a` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x369c58` | `ready_for_mba_reduction` | `0x369edb` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x369ee9` | `ready_for_mba_reduction` | `0x364c72` | 310 | `decoded_control` | `` |

- Concrete successor reductions emitted: `4` / `4` cases
- Cases with complete stateful formula inputs: `4` / `4` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
