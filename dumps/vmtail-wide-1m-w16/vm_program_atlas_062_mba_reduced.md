# VM Program Atlas 062 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x36d524` | `ready_for_mba_reduction` | `0x36c9b1` | 354 | `decoded_control` | `` |
| `0x36d579` | `ready_for_mba_reduction` | `0x36d69b` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x36d6a9` | `ready_for_mba_reduction` | `0x36d92c` | 264 | `covered_synthetic_fallthrough` | `` |
| `0x36d93a` | `ready_for_mba_reduction` | `0x364e5f` | 310 | `decoded_control` | `` |

- Concrete successor reductions emitted: `4` / `4` cases
- Cases with complete stateful formula inputs: `4` / `4` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
