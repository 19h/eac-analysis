# Native RetDec Gap Queue

Ranks native function skeletons whose byte ranges are not yet covered by semantic RetDec/native C sidecars.

- queued functions: 3
- class mix: tier0_small_native_gap:1, tier1_medium_native_gap:1, tier2_large_native_gap:1

| rank | range | bytes | uncovered | class | action | name |
| ---: | --- | ---: | ---: | --- | --- | --- |
| 1 | `0x6b7a0-0x6b8bb` | 283 | 16 | `tier0_small_native_gap` | `targeted_retdec_single_function` | `fcn.0006b7a0` |
| 2 | `0x4b3910-0x4b3cce` | 958 | 16 | `tier1_medium_native_gap` | `targeted_retdec_single_function` | `fcn.004b3910` |
| 3 | `0x3e19c-0x3f89f` | 5891 | 1247 | `tier2_large_native_gap` | `targeted_retdec_with_timeout` | `fcn.0003e19c` |
