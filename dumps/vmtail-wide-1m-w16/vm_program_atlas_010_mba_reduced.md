# VM Program Atlas 010 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x11c2aa` | `ready_for_mba_reduction` | `0x11c3f9` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x11c407` | `ready_for_mba_reduction` | `0x11c682` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x11c690` | `ready_for_mba_reduction` | `0x11ca2a` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x11ca38` | `ready_for_mba_reduction` | `0x11ccf7` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x11cd05` | `ready_for_mba_reduction` | `0x11cf21` | 356 | `covered_synthetic_fallthrough` | `` |
| `0x11cf2f` | `ready_for_mba_reduction` | `0x11d207` | 278 | `covered_synthetic_fallthrough` | `` |
| `0x11d215` | `ready_for_mba_reduction` | `0x11d3d3` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x11d3e1` | `ready_for_mba_reduction` | `0x11d6a2` | 95 | `covered_synthetic_fallthrough` | `` |
| `0x11d6b0` | `ready_for_mba_reduction` | `0x11d91b` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x11d929` | `ready_for_mba_reduction` | `0x11da3a` | 145 | `covered_synthetic_fallthrough` | `` |
| `0x11da4b` | `ready_for_mba_reduction` | `0x33f278` | 323 | `decoded_control` | `` |
| `0x11db16` | `ready_for_mba_reduction` | `0x11dc27` | 210 | `covered_synthetic_fallthrough` | `` |
| `0x11dc37` | `ready_for_mba_reduction` | `0x3603af` | 86 | `decoded_control` | `` |
| `0x11dd03` | `ready_for_mba_reduction` | `0x11de14` | 210 | `covered_synthetic_fallthrough` | `` |
| `0x11de27` | `ready_for_mba_reduction` | `0x11de9f` | 171 | `decoded_control` | `` |

- Concrete successor reductions emitted: `15` / `15` cases
- Cases with complete stateful formula inputs: `15` / `15` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
