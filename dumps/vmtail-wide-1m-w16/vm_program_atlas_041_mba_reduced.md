# VM Program Atlas 041 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x30e872` | `ready_for_mba_reduction` | `0x30eea2` | 165 | `fallthrough` | `` |
| `0x30eea2` | `ready_for_mba_reduction` | `0x30eeea` | 165 | `decoded_control` | `` |
| `0x30eed0` | `ready_for_mba_reduction` | `0x30eea2` | 165 | `decoded_control` | `` |
| `0x30eeea` | `ready_for_mba_reduction` | `0x30f0ee` | 354 | `fallthrough` | `` |
| `0x30f0ee` | `ready_for_mba_reduction` | `0x30f64d` | 171 | `decoded_control` | `` |
| `0x30f3d6` | `ready_for_mba_reduction` | `0x30f0ee` | 354 | `decoded_control` | `` |
| `0x30f64d` | `ready_for_mba_reduction` | `0x30fd84` | 210 | `covered_synthetic_fallthrough` | `` |
| `0x30fd95` | `ready_for_mba_reduction` | `0x310b1c` | 171 | `fallthrough` | `` |
| `0x310b1c` | `ready_for_mba_reduction` | `0x315cc8` | 354 | `decoded_control` | `` |
| `0x310dca` | `ready_for_mba_reduction` | `0x3129aa` | 354 | `decoded_control` | `` |
| `0x3129aa` | `ready_for_mba_reduction` | `0x31580e` | 171 | `decoded_control` | `` |
| `0x31580e` | `ready_for_mba_reduction` | `0x310b1c` | 171 | `decoded_control` | `` |
| `0x315cc8` | `ready_for_mba_reduction` | `0x343569` | 310 | `decoded_control` | `` |

- Concrete successor reductions emitted: `13` / `13` cases
- Cases with complete stateful formula inputs: `13` / `13` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
