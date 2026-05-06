# VM Program Atlas 032 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x249468` | `ready_for_mba_reduction` | `0x24972b` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x249739` | `ready_for_mba_reduction` | `0x26cd71` | 86 | `decoded_control` | `` |
| `0x249964` | `ready_for_mba_reduction` | `0x249b99` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x249ba7` | `ready_for_mba_reduction` | `0x249ddc` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x249dea` | `ready_for_mba_reduction` | `0x24a01f` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x24a02d` | `ready_for_mba_reduction` | `0x24a292` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x24a2a0` | `ready_for_mba_reduction` | `0x24a4d5` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x24a4e3` | `ready_for_mba_reduction` | `0x24a8c5` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x24a8d3` | `ready_for_mba_reduction` | `0x24ab6a` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x24ab78` | `ready_for_mba_reduction` | `0x24ae0f` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x24ae1d` | `ready_for_mba_reduction` | `0x24b052` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x24b060` | `ready_for_mba_reduction` | `0x24b39b` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x24b3a9` | `ready_for_mba_reduction` | `0x24b640` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x24b64e` | `ready_for_mba_reduction` | `0x24b883` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x24b891` | `ready_for_mba_reduction` | `0x24bb69` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x24bb77` | `ready_for_mba_reduction` | `0x24bd2a` | 299 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `16` / `16` cases
- Cases with complete stateful formula inputs: `16` / `16` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
