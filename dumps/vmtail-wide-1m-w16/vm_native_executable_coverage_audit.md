# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4628448
- uncovered executable bytes: 1022592
- recovered range rows: 59093
- uncovered gaps: 3260

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4624336 | 1022592 | 81.89% | 58833 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x4e9179-0x4e9ae0` | 2407 |
| `.text` | `0x47b8ee-0x47c22d` | 2367 |
| `.text` | `0x4a8271-0x4a8bb0` | 2367 |
| `.text` | `0x2958b8-0x2961e3` | 2347 |
| `.text` | `0x125f46-0x126851` | 2315 |
| `.text` | `0x28596e-0x286264` | 2294 |
| `.text` | `0x54ff7a-0x550870` | 2294 |
| `.text` | `0x3b32b4-0x3b3b9d` | 2281 |
| `.text` | `0x4f924e-0x4f9b30` | 2274 |
| `.text` | `0x55cb8f-0x55d470` | 2273 |
| `.text` | `0x4571e3-0x457abc` | 2265 |
| `.text` | `0x4b44c3-0x4b4d90` | 2253 |
| `.text` | `0x34fa85-0x35033a` | 2229 |
| `.text` | `0x4f60fc-0x4f69b0` | 2228 |
| `.text` | `0x13fe68-0x140711` | 2217 |
| `.text` | `0x3b85b0-0x3b8e4b` | 2203 |
| `.text` | `0x20c59e-0x20ce34` | 2198 |
| `.text` | `0x32e055-0x32e8e4` | 2191 |
| `.text` | `0x32f90d-0x330190` | 2179 |
| `.text` | `0x1043ee-0x104c68` | 2170 |
| `.text` | `0x381c6-0x38a2e` | 2152 |
| `.text` | `0x519885-0x51a0ed` | 2152 |
| `.text` | `0x40dcdf-0x40e52b` | 2124 |
| `.text` | `0x46e87e-0x46f0b8` | 2106 |
| `.text` | `0x77a3d-0x7826e` | 2097 |
| `.text` | `0x33750c-0x337d35` | 2089 |
| `.text` | `0x1f54e8-0x1f5d10` | 2088 |
| `.text` | `0x4c0cae-0x4c14d0` | 2082 |
| `.text` | `0x2968a8-0x2970b7` | 2063 |
| `.text` | `0x4af02a-0x4af830` | 2054 |
| `.text` | `0x1fa226-0x1faa2a` | 2052 |
| `.text` | `0x23d0b6-0x23d8b8` | 2050 |
| `.text` | `0x24b77d-0x24bf7d` | 2048 |
| `.text` | `0x3b28b4-0x3b30b4` | 2048 |
| `.text` | `0x3e3496-0x3e3c96` | 2048 |
| `.text` | `0x40c4df-0x40ccdf` | 2048 |
| `.text` | `0x42081f-0x42101f` | 2048 |
| `.text` | `0x459c34-0x45a434` | 2048 |
| `.text` | `0x48a54d-0x48ad4d` | 2048 |
