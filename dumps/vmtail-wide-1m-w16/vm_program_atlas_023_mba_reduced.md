# VM Program Atlas 023 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x177353` | `ready_for_mba_reduction` | `0x1774b8` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x1774c6` | `ready_for_mba_reduction` | `0x17776f` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x17777d` | `ready_for_mba_reduction` | `0x177930` | 334 | `covered_synthetic_fallthrough` | `` |
| `0x177940` | `ready_for_mba_reduction` | `0x177aeb` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x177af9` | `ready_for_mba_reduction` | `0x179f43` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `5` / `5` cases
- Cases with complete stateful formula inputs: `5` / `5` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
