# VM Program Atlas 030 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x230722` | `ready_for_mba_reduction` | `0x230839` | 171 | `fallthrough` | `` |
| `0x230839` | `ready_for_mba_reduction` | `0x230b1b` | 50 | `covered_synthetic_fallthrough` | `` |
| `0x230b2c` | `ready_for_mba_reduction` | `0x230e07` | 321 | `covered_synthetic_fallthrough` | `` |
| `0x230e18` | `ready_for_mba_reduction` | `0x230839` | 171 | `decoded_control` | `` |

- Concrete successor reductions emitted: `4` / `4` cases
- Cases with complete stateful formula inputs: `4` / `4` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
