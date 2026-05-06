# VM Program Atlas 007 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x11ac5e` | `ready_for_mba_reduction` | `0x11aee0` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x11aeee` | `ready_for_mba_reduction` | `0x11b122` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x11b130` | `ready_for_mba_reduction` | `0x11b364` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x11b372` | `ready_for_mba_reduction` | `0x11b5a6` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x11b5b4` | `ready_for_mba_reduction` | `0x11b7e8` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x11b7f6` | `ready_for_mba_reduction` | `0x11ba2a` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x11ba38` | `ready_for_mba_reduction` | `0x11bb7e` | 145 | `covered_synthetic_fallthrough` | `` |
| `0x11bb8f` | `ready_for_mba_reduction` | `0x11bc28` | 171 | `decoded_control` | `` |

- Concrete successor reductions emitted: `8` / `8` cases
- Cases with complete stateful formula inputs: `8` / `8` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
