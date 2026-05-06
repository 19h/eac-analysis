# VM Program Atlas 061 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x36b124` | `ready_for_mba_reduction` | `0x36b346` | 354 | `fallthrough` | `` |
| `0x36b346` | `ready_for_mba_reduction` | `0x36b38e` | 171 | `decoded_control` | `` |
| `0x36b374` | `ready_for_mba_reduction` | `0x36b346` | 354 | `decoded_control` | `` |
| `0x36b38e` | `ready_for_mba_reduction` | `0x36b592` | 171 | `fallthrough` | `` |
| `0x36b592` | `ready_for_mba_reduction` | `0x36b693` | 78 | `covered_synthetic_fallthrough` | `` |
| `0x36b6a4` | `ready_for_mba_reduction` | `0x36bb1e` | 354 | `decoded_control` | `` |
| `0x36b8a7` | `ready_for_mba_reduction` | `0x36b592` | 171 | `decoded_control` | `` |
| `0x36bb1e` | `ready_for_mba_reduction` | `0x36bee0` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x36beee` | `ready_for_mba_reduction` | `0x36c10a` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x36c118` | `ready_for_mba_reduction` | `0x36c395` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x36c3a3` | `ready_for_mba_reduction` | `0x36c4e9` | 145 | `covered_synthetic_fallthrough` | `` |
| `0x36c4fa` | `ready_for_mba_reduction` | `0x36c68c` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x36c69a` | `ready_for_mba_reduction` | `0x36c829` | 210 | `covered_synthetic_fallthrough` | `` |
| `0x36c839` | `ready_for_mba_reduction` | `0x36c899` | 75 | `covered_synthetic_fallthrough` | `` |
| `0x36c8aa` | `ready_for_mba_reduction` | `0x36c9b1` | 354 | `fallthrough` | `` |
| `0x36c9b1` | `ready_for_mba_reduction` | `0x36cabe` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x36cacc` | `ready_for_mba_reduction` | `0x36ccc6` | 50 | `covered_synthetic_fallthrough` | `` |
| `0x36ccd7` | `ready_for_mba_reduction` | `0x36d579` | 354 | `decoded_control` | `` |
| `0x36cdf9` | `ready_for_mba_reduction` | `0x36cf76` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x36cf84` | `ready_for_mba_reduction` | `0x36d1cd` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x36d1db` | `ready_for_mba_reduction` | `0x36d3a2` | 80 | `covered_synthetic_fallthrough` | `` |
| `0x36d3b3` | `ready_for_mba_reduction` | `0x36d524` | 354 | `decoded_control` | `` |

- Concrete successor reductions emitted: `22` / `22` cases
- Cases with complete stateful formula inputs: `22` / `22` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
