# VM Program Atlas 050 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x337e84` | `ready_for_mba_reduction` | `0x338682` | 354 | `fallthrough` | `` |
| `0x338682` | `ready_for_mba_reduction` | `0x338e18` | 165 | `decoded_control` | `` |
| `0x3386de` | `ready_for_mba_reduction` | `0x3387d9` | 69 | `covered_synthetic_fallthrough` | `` |
| `0x3387ea` | `ready_for_mba_reduction` | `0x338682` | 354 | `decoded_control` | `` |
| `0x338e18` | `ready_for_mba_reduction` | `0x338f6c` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x338f7a` | `ready_for_mba_reduction` | `0x3391ac` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x3391ba` | `ready_for_mba_reduction` | `0x339432` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x339440` | `ready_for_mba_reduction` | `0x339674` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x339682` | `ready_for_mba_reduction` | `0x3398e6` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x3398f4` | `ready_for_mba_reduction` | `0x339a83` | 316 | `covered_synthetic_fallthrough` | `` |
| `0x339a94` | `ready_for_mba_reduction` | `0x339c26` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x339c34` | `ready_for_mba_reduction` | `0x339dc3` | 246 | `covered_synthetic_fallthrough` | `` |
| `0x339dd4` | `ready_for_mba_reduction` | `0x339faf` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x339fbd` | `ready_for_mba_reduction` | `0x33a225` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x33a233` | `ready_for_mba_reduction` | `0x33a385` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `15` / `15` cases
- Cases with complete stateful formula inputs: `15` / `15` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
