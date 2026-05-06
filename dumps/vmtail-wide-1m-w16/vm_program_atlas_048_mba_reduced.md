# VM Program Atlas 048 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x334a3d` | `ready_for_mba_reduction` | `0x334c63` | 165 | `fallthrough` | `` |
| `0x334c63` | `ready_for_mba_reduction` | `0x334cab` | 354 | `decoded_control` | `` |
| `0x334c91` | `ready_for_mba_reduction` | `0x334c63` | 165 | `decoded_control` | `` |
| `0x334cab` | `ready_for_mba_reduction` | `0x334eaf` | 171 | `fallthrough` | `` |
| `0x334eaf` | `ready_for_mba_reduction` | `0x335414` | 165 | `decoded_control` | `` |
| `0x33519c` | `ready_for_mba_reduction` | `0x334eaf` | 171 | `decoded_control` | `` |
| `0x335414` | `ready_for_mba_reduction` | `0x335585` | 354 | `fallthrough` | `` |
| `0x335585` | `ready_for_mba_reduction` | `0x33585b` | 171 | `decoded_control` | `` |
| `0x3355e0` | `ready_for_mba_reduction` | `0x335585` | 354 | `decoded_control` | `` |
| `0x33585b` | `ready_for_mba_reduction` | `0x3364c6` | 334 | `covered_synthetic_fallthrough` | `` |
| `0x3364d7` | `ready_for_mba_reduction` | `0x336806` | 145 | `covered_synthetic_fallthrough` | `` |
| `0x336817` | `ready_for_mba_reduction` | `0x3369f2` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x3369fc` | `ready_for_mba_reduction` | `0x336dc8` | 165 | `decoded_control` | `` |

- Concrete successor reductions emitted: `13` / `13` cases
- Cases with complete stateful formula inputs: `13` / `13` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
