# VM Program Atlas 002 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0xd476e` | `ready_for_mba_reduction` | `0xd4889` | 264 | `covered_synthetic_fallthrough` | `` |
| `0xd4897` | `ready_for_mba_reduction` | `0xd4a83` | 278 | `covered_synthetic_fallthrough` | `` |
| `0xd4a91` | `ready_for_mba_reduction` | `0xd4beb` | 316 | `covered_synthetic_fallthrough` | `` |
| `0xd4bfc` | `ready_for_mba_reduction` | `0xd4cb9` | 311 | `covered_synthetic_fallthrough` | `` |
| `0xd4cc7` | `ready_for_mba_reduction` | `0xd5044` | 69 | `covered_synthetic_fallthrough` | `` |
| `0xd5055` | `ready_for_mba_reduction` | `0xd521e` | 321 | `covered_synthetic_fallthrough` | `` |
| `0xd522f` | `ready_for_mba_reduction` | `0xd5641` | 95 | `covered_synthetic_fallthrough` | `` |
| `0xd564f` | `ready_for_mba_reduction` | `0xd5a12` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `8` / `8` cases
- Cases with complete stateful formula inputs: `8` / `8` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
