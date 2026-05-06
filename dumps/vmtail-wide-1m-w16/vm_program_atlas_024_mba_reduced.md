# VM Program Atlas 024 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x179f43` | `ready_for_mba_reduction` | `0x17a04f` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x17a05d` | `ready_for_mba_reduction` | `0x17a25f` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x17a26d` | `ready_for_mba_reduction` | `0x17a420` | 175 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `3` / `3` cases
- Cases with complete stateful formula inputs: `3` / `3` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
