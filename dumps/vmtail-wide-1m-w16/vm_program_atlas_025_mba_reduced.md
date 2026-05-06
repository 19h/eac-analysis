# VM Program Atlas 025 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x18b66f` | `ready_for_mba_reduction` | `0x18b88f` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x18b89d` | `ready_for_mba_reduction` | `0x18ba5b` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x18ba69` | `ready_for_mba_reduction` | `0x18bd8c` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x18bd9a` | `ready_for_mba_reduction` | `0x18beab` | 75 | `covered_synthetic_fallthrough` | `` |
| `0x18bebc` | `ready_for_mba_reduction` | `0x18c07a` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x18c088` | `ready_for_mba_reduction` | `0x18c2a6` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x18c2b4` | `ready_for_mba_reduction` | `0x18c467` | 195 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `7` / `7` cases
- Cases with complete stateful formula inputs: `7` / `7` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
