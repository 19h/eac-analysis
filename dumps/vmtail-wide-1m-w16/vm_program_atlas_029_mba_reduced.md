# VM Program Atlas 029 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x22fe2d` | `ready_for_mba_reduction` | `0x22ff44` | 171 | `fallthrough` | `` |
| `0x22ff44` | `ready_for_mba_reduction` | `0x22ff44` | 171 | `decoded_control` | `` |
| `0x22ffc2` | `ready_for_mba_reduction` | `0x22ffea` | 165 | `fallthrough` | `` |
| `0x22ffea` | `ready_for_mba_reduction` | `0x230111` | 50 | `covered_synthetic_fallthrough` | `` |
| `0x230122` | `ready_for_mba_reduction` | `0x22ffea` | 165 | `decoded_control` | `` |
| `0x2303be` | `ready_for_mba_reduction` | `0x2304b8` | 195 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `6` / `6` cases
- Cases with complete stateful formula inputs: `6` / `6` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
