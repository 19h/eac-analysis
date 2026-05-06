# VM Program Atlas 042 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x31aa27` | `ready_for_mba_reduction` | `0x31aec3` | 321 | `covered_synthetic_fallthrough` | `` |
| `0x31aed4` | `ready_for_mba_reduction` | `0x31b303` | 171 | `fallthrough` | `` |
| `0x31b303` | `ready_for_mba_reduction` | `0x31b34b` | 165 | `decoded_control` | `` |
| `0x31b331` | `ready_for_mba_reduction` | `0x31b303` | 171 | `decoded_control` | `` |
| `0x31b34b` | `ready_for_mba_reduction` | `0x31b54f` | 354 | `fallthrough` | `` |
| `0x31b54f` | `ready_for_mba_reduction` | `0x31ba3d` | 354 | `decoded_control` | `` |
| `0x31b83d` | `ready_for_mba_reduction` | `0x31b54f` | 354 | `decoded_control` | `` |
| `0x31ba3d` | `ready_for_mba_reduction` | `0x31bbae` | 165 | `fallthrough` | `` |
| `0x31bbae` | `ready_for_mba_reduction` | `0x31be84` | 354 | `decoded_control` | `` |
| `0x31bc0a` | `ready_for_mba_reduction` | `0x31bbae` | 165 | `decoded_control` | `` |
| `0x31be84` | `ready_for_mba_reduction` | `0x31bfed` | 171 | `fallthrough` | `` |
| `0x31bfed` | `ready_for_mba_reduction` | `0x31c035` | 165 | `decoded_control` | `` |
| `0x31c01b` | `ready_for_mba_reduction` | `0x31bfed` | 171 | `decoded_control` | `` |
| `0x31c035` | `ready_for_mba_reduction` | `0x31c239` | 165 | `fallthrough` | `` |
| `0x31c239` | `ready_for_mba_reduction` | `0x31c33a` | 69 | `covered_synthetic_fallthrough` | `` |
| `0x31c34b` | `ready_for_mba_reduction` | `0x31c7a7` | 354 | `decoded_control` | `` |
| `0x31c5a7` | `ready_for_mba_reduction` | `0x31c239` | 165 | `decoded_control` | `` |
| `0x31c7a7` | `ready_for_mba_reduction` | `0x31c918` | 171 | `fallthrough` | `` |
| `0x31c918` | `ready_for_mba_reduction` | `0x31cbee` | 354 | `decoded_control` | `` |
| `0x31c974` | `ready_for_mba_reduction` | `0x31c918` | 171 | `decoded_control` | `` |
| `0x31cbee` | `ready_for_mba_reduction` | `0x31cd8c` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x31cd9a` | `ready_for_mba_reduction` | `0x31cfb6` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x31cfc4` | `ready_for_mba_reduction` | `0x31d273` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x31d281` | `ready_for_mba_reduction` | `0x31d49d` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x31d4ab` | `ready_for_mba_reduction` | `0x31d75a` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x31d768` | `ready_for_mba_reduction` | `0x31d984` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x31d992` | `ready_for_mba_reduction` | `0x31dc41` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x31dc4f` | `ready_for_mba_reduction` | `0x31df8f` | 171 | `decoded_control` | `` |

- Concrete successor reductions emitted: `28` / `28` cases
- Cases with complete stateful formula inputs: `28` / `28` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
