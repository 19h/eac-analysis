# VM Program Atlas 046 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x33170b` | `ready_for_mba_reduction` | `0x33192d` | 171 | `fallthrough` | `` |
| `0x33192d` | `ready_for_mba_reduction` | `0x331975` | 171 | `decoded_control` | `` |
| `0x33195b` | `ready_for_mba_reduction` | `0x33192d` | 171 | `decoded_control` | `` |
| `0x331975` | `ready_for_mba_reduction` | `0x331b79` | 354 | `fallthrough` | `` |
| `0x331b79` | `ready_for_mba_reduction` | `0x331c7a` | 78 | `covered_synthetic_fallthrough` | `` |
| `0x331c8b` | `ready_for_mba_reduction` | `0x332105` | 354 | `decoded_control` | `` |
| `0x331e8e` | `ready_for_mba_reduction` | `0x331b79` | 354 | `decoded_control` | `` |
| `0x332105` | `ready_for_mba_reduction` | `0x332469` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x332477` | `ready_for_mba_reduction` | `0x3326a9` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x3326b7` | `ready_for_mba_reduction` | `0x33292f` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x33293d` | `ready_for_mba_reduction` | `0x332b71` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x332b7f` | `ready_for_mba_reduction` | `0x332de3` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x332df1` | `ready_for_mba_reduction` | `0x332f80` | 210 | `covered_synthetic_fallthrough` | `` |
| `0x332f90` | `ready_for_mba_reduction` | `0x333123` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x333131` | `ready_for_mba_reduction` | `0x3332c0` | 246 | `covered_synthetic_fallthrough` | `` |
| `0x3332d1` | `ready_for_mba_reduction` | `0x3334ac` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x3334ba` | `ready_for_mba_reduction` | `0x333722` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x333730` | `ready_for_mba_reduction` | `0x333882` | 171 | `decoded_control` | `` |

- Concrete successor reductions emitted: `18` / `18` cases
- Cases with complete stateful formula inputs: `18` / `18` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
