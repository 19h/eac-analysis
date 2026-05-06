# VM Program Atlas 047 MBA Reduction

This artifact reduces each collected dispatcher/MBA case to the concrete successor edge proven by the static bytecode edge model and trace observations.

| Case | Status | Successor | Entry | Edge | Missing |
| --- | --- | --- | ---: | --- | --- |
| `0x333882` | `ready_for_mba_reduction` | `0x333a08` | 216 | `covered_synthetic_fallthrough` | `` |
| `0x333a16` | `ready_for_mba_reduction` | `0x333bc9` | 195 | `covered_synthetic_fallthrough` | `` |

- Concrete successor reductions emitted: `2` / `2` cases
- Cases with complete stateful formula inputs: `2` / `2` cases
- Remaining work is expression-level simplification of the native MBA formulas for cases whose input state is absent, not successor discovery.
