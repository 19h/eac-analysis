# VM Program Atlas 028 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x1ec0ab` | `ready_for_mba_reduction` | `0x1ec347` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x1ec355` | `ready_for_mba_reduction` | `0x1ec466` | 316 | `covered_synthetic_fallthrough` | `` |
| `0x1ec477` | `ready_for_mba_reduction` | `0x1ec5c3` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x1ec5d1` | `ready_for_mba_reduction` | `0x1ec87a` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x1ec888` | `ready_for_mba_reduction` | `0x1ecb65` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x1ecb73` | `ready_for_mba_reduction` | `0x1ecdd5` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x1ecde3` | `ready_for_mba_reduction` | `0x1ecfff` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x1ed00d` | `ready_for_mba_reduction` | `0x1ed229` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x1ed237` | `ready_for_mba_reduction` | `0x1ed483` | 195 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `9` / `9` cases
- Cases with complete stateful formula inputs: `9` / `9` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
