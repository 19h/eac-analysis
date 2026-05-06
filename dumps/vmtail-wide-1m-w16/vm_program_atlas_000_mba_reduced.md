# VM Program Atlas 000 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0xd0ac0` | `ready_for_mba_reduction` | `0xd0c5f` | 354 | `fallthrough` | `` |
| `0xd0c5f` | `ready_for_mba_reduction` | `0xd0eb3` | 354 | `decoded_control` | `` |
| `0xd0c86` | `ready_for_mba_reduction` | `0xd0d43` | 264 | `covered_synthetic_fallthrough` | `` |
| `0xd0d51` | `ready_for_mba_reduction` | `0xd0c5f` | 354 | `decoded_control` | `` |
| `0xd0eb3` | `ready_for_mba_reduction` | `0xd1002` | 95 | `covered_synthetic_fallthrough` | `` |
| `0xd1010` | `ready_for_mba_reduction` | `0xd1284` | 356 | `covered_synthetic_fallthrough` | `` |
| `0xd1292` | `ready_for_mba_reduction` | `0xd1445` | 175 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `7` / `7` cases
- Cases with complete stateful formula inputs: `7` / `7` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
