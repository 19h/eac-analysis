# VM Program Atlas 059 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x3674c3` | `ready_for_mba_reduction` | `0x3676e5` | 171 | `fallthrough` | `` |
| `0x3676e5` | `ready_for_mba_reduction` | `0x36772d` | 354 | `decoded_control` | `` |
| `0x367713` | `ready_for_mba_reduction` | `0x3676e5` | 171 | `decoded_control` | `` |
| `0x36772d` | `ready_for_mba_reduction` | `0x367931` | 165 | `fallthrough` | `` |
| `0x367931` | `ready_for_mba_reduction` | `0x367e96` | 354 | `decoded_control` | `` |
| `0x367c1f` | `ready_for_mba_reduction` | `0x367931` | 165 | `decoded_control` | `` |
| `0x367e96` | `ready_for_mba_reduction` | `0x368007` | 354 | `fallthrough` | `` |
| `0x368007` | `ready_for_mba_reduction` | `0x3682dd` | 165 | `decoded_control` | `` |
| `0x368063` | `ready_for_mba_reduction` | `0x368007` | 354 | `decoded_control` | `` |
| `0x3682dd` | `ready_for_mba_reduction` | `0x36848f` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x36849d` | `ready_for_mba_reduction` | `0x3686b9` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x3686c7` | `ready_for_mba_reduction` | `0x368944` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x368952` | `ready_for_mba_reduction` | `0x368a98` | 75 | `covered_synthetic_fallthrough` | `` |
| `0x368aa9` | `ready_for_mba_reduction` | `0x368c3b` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x368c49` | `ready_for_mba_reduction` | `0x368dd8` | 334 | `covered_synthetic_fallthrough` | `` |
| `0x368de9` | `ready_for_mba_reduction` | `0x368e48` | 334 | `covered_synthetic_fallthrough` | `` |
| `0x368e58` | `ready_for_mba_reduction` | `0x368f60` | 165 | `fallthrough` | `` |
| `0x368f60` | `ready_for_mba_reduction` | `0x36906d` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x36907b` | `ready_for_mba_reduction` | `0x369275` | 321 | `covered_synthetic_fallthrough` | `` |
| `0x369286` | `ready_for_mba_reduction` | `0x369b28` | 354 | `decoded_control` | `` |
| `0x3693a8` | `ready_for_mba_reduction` | `0x369525` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x369533` | `ready_for_mba_reduction` | `0x36977c` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x36978a` | `ready_for_mba_reduction` | `0x369951` | 69 | `covered_synthetic_fallthrough` | `` |
| `0x369962` | `ready_for_mba_reduction` | `0x369ad3` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `24` / `24` cases
- Cases with complete stateful formula inputs: `24` / `24` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
