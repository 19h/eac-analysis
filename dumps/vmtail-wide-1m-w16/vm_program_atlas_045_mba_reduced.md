# VM Program Atlas 045 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x31eae4` | `ready_for_mba_reduction` | `0x31ec6a` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x31ec78` | `ready_for_mba_reduction` | `0x31eead` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x31eebb` | `ready_for_mba_reduction` | `0x31f0f0` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x31f0fe` | `ready_for_mba_reduction` | `0x31f2b1` | 195 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `4` / `4` cases
- Cases with complete stateful formula inputs: `4` / `4` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
