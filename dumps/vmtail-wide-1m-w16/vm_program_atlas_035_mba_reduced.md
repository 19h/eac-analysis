# VM Program Atlas 035 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x292986` | `ready_for_mba_reduction` | `0x292b48` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x292b56` | `ready_for_mba_reduction` | `0x292de8` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x292df6` | `ready_for_mba_reduction` | `0x292f3e` | 171 | `fallthrough` | `` |
| `0x292f3e` | `ready_for_mba_reduction` | `0x293001` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x29300f` | `ready_for_mba_reduction` | `0x293222` | 78 | `covered_synthetic_fallthrough` | `` |
| `0x293233` | `ready_for_mba_reduction` | `0x293344` | 334 | `covered_synthetic_fallthrough` | `` |
| `0x293355` | `ready_for_mba_reduction` | `0x293470` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x29347e` | `ready_for_mba_reduction` | `0x2935da` | 210 | `covered_synthetic_fallthrough` | `` |
| `0x2935eb` | `ready_for_mba_reduction` | `0x2935fd` | 75 | `covered_synthetic_fallthrough` | `` |
| `0x29360e` | `ready_for_mba_reduction` | `0x293620` | 145 | `covered_synthetic_fallthrough` | `` |
| `0x293630` | `ready_for_mba_reduction` | `0x293643` | 75 | `covered_synthetic_fallthrough` | `` |
| `0x293654` | `ready_for_mba_reduction` | `0x293666` | 316 | `covered_synthetic_fallthrough` | `` |
| `0x293677` | `ready_for_mba_reduction` | `0x293689` | 246 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `13` / `13` cases
- Cases with complete stateful formula inputs: `13` / `13` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
