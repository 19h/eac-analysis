# VM Program Atlas 043 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x31df8f` | `ready_for_mba_reduction` | `0x334a3d` | 42 | `decoded_control` | `` |
| `0x31e060` | `ready_for_mba_reduction` | `0x31e171` | 145 | `covered_synthetic_fallthrough` | `` |
| `0x31e182` | `ready_for_mba_reduction` | `0x31e23f` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x31e24d` | `ready_for_mba_reduction` | `0x31e35e` | 316 | `covered_synthetic_fallthrough` | `` |
| `0x31e36f` | `ready_for_mba_reduction` | `0x31e42c` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x31e43a` | `ready_for_mba_reduction` | `0x31e54b` | 75 | `covered_synthetic_fallthrough` | `` |
| `0x31e55c` | `ready_for_mba_reduction` | `0x33b647` | 42 | `decoded_control` | `` |
| `0x31e627` | `ready_for_mba_reduction` | `0x31e738` | 246 | `covered_synthetic_fallthrough` | `` |
| `0x31e749` | `ready_for_mba_reduction` | `0x31e77f` | 354 | `decoded_control` | `` |
| `0x31e77f` | `ready_for_mba_reduction` | `0x31ea5c` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `10` / `10` cases
- Cases with complete stateful formula inputs: `10` / `10` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
