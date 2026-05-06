# VM Program Atlas 015 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x1210d6` | `ready_for_mba_reduction` | `0x121199` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x1211a7` | `ready_for_mba_reduction` | `0x121435` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x121443` | `ready_for_mba_reduction` | `0x121690` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x12169e` | `ready_for_mba_reduction` | `0x1217c7` | 316 | `covered_synthetic_fallthrough` | `` |
| `0x1217d8` | `ready_for_mba_reduction` | `0x121924` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x121932` | `ready_for_mba_reduction` | `0x121a8a` | 171 | `decoded_control` | `` |
| `0x121a8a` | `ready_for_mba_reduction` | `0x121b31` | 171 | `decoded_control` | `` |

- Concrete successor reductions emitted: `7` / `7` cases
- Cases with complete stateful formula inputs: `7` / `7` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
