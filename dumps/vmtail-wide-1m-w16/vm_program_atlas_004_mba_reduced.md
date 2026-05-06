# VM Program Atlas 004 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0xd718e` | `ready_for_mba_reduction` | `0xd73ae` | 278 | `covered_synthetic_fallthrough` | `` |
| `0xd73bc` | `ready_for_mba_reduction` | `0xd75f1` | 264 | `covered_synthetic_fallthrough` | `` |
| `0xd75ff` | `ready_for_mba_reduction` | `0xd77c8` | 69 | `covered_synthetic_fallthrough` | `` |
| `0xd77d9` | `ready_for_mba_reduction` | `0xda38f` | 171 | `decoded_control` | `` |

- Concrete successor reductions emitted: `4` / `4` cases
- Cases with complete stateful formula inputs: `4` / `4` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
