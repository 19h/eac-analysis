# VM Program Atlas 021 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x1705a9` | `ready_for_mba_reduction` | `0x170856` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x170864` | `ready_for_mba_reduction` | `0x170b41` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x170b4f` | `ready_for_mba_reduction` | `0x170db1` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x170dbf` | `ready_for_mba_reduction` | `0x170fdb` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x170fe9` | `ready_for_mba_reduction` | `0x171205` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x171213` | `ready_for_mba_reduction` | `0x1714bc` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x1714ca` | `ready_for_mba_reduction` | `0x1717a7` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x1717b5` | `ready_for_mba_reduction` | `0x171a17` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x171a25` | `ready_for_mba_reduction` | `0x171c41` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x171c4f` | `ready_for_mba_reduction` | `0x171e6b` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x171e79` | `ready_for_mba_reduction` | `0x172122` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x172130` | `ready_for_mba_reduction` | `0x17240d` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x17241b` | `ready_for_mba_reduction` | `0x17264d` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x17265b` | `ready_for_mba_reduction` | `0x172877` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x172885` | `ready_for_mba_reduction` | `0x172aa1` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x172aaf` | `ready_for_mba_reduction` | `0x172d58` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x172d66` | `ready_for_mba_reduction` | `0x173043` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x173051` | `ready_for_mba_reduction` | `0x1732b3` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x1732c1` | `ready_for_mba_reduction` | `0x1734dd` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x1734eb` | `ready_for_mba_reduction` | `0x173707` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x173715` | `ready_for_mba_reduction` | `0x1739be` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x1739cc` | `ready_for_mba_reduction` | `0x173ca9` | 311 | `covered_synthetic_fallthrough` | `` |
| `0x173cb7` | `ready_for_mba_reduction` | `0x173f19` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x173f27` | `ready_for_mba_reduction` | `0x174143` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x174151` | `ready_for_mba_reduction` | `0x17436d` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x17437b` | `ready_for_mba_reduction` | `0x17452e` | 299 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `26` / `26` cases
- Cases with complete stateful formula inputs: `26` / `26` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
