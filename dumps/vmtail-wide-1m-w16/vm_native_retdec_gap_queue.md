# Native RetDec Gap Queue

Ranks native function skeletons whose byte ranges are not yet covered by semantic RetDec/native C sidecars.

- queued functions: 6
- class mix: tier0_small_native_gap:1, tier1_medium_native_gap:3, tier2_large_native_gap:2

| rank | range | bytes | uncovered | class | action | name |
| ---: | --- | ---: | ---: | --- | --- | --- |
| 1 | `0x6b7a0-0x6b8bb` | 283 | 16 | `tier0_small_native_gap` | `targeted_retdec_single_function` | `fcn.0006b7a0` |
| 2 | `0x4d1510-0x4d19b5` | 1189 | 533 | `tier1_medium_native_gap` | `targeted_retdec_single_function` | `fcn.004d1510` |
| 3 | `0x4b3910-0x4b3cce` | 958 | 462 | `tier1_medium_native_gap` | `targeted_retdec_single_function` | `fcn.004b3910` |
| 4 | `0x415ae-0x418c6` | 792 | 134 | `tier1_medium_native_gap` | `targeted_retdec_single_function` | `fcn.000415ae` |
| 5 | `0x4a4be0-0x4a6a5e` | 7806 | 5854 | `tier2_large_native_gap` | `targeted_retdec_with_timeout` | `fcn.004a4be0` |
| 6 | `0x3e19c-0x3f89f` | 5891 | 2943 | `tier2_large_native_gap` | `targeted_retdec_with_timeout` | `fcn.0003e19c` |
