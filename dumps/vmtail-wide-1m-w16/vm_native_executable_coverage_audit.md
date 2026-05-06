# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4598183
- uncovered executable bytes: 1052857
- recovered range rows: 58745
- uncovered gaps: 3262

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4594071 | 1052857 | 81.35% | 58485 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x5758cd-0x5762d0` | 2563 |
| `.text` | `0x2af175-0x2afb75` | 2560 |
| `.text` | `0x4e76f9-0x4e80f9` | 2560 |
| `.text` | `0x326bbb-0x3275b6` | 2555 |
| `.text` | `0x133da5-0x134781` | 2524 |
| `.text` | `0x55ee32-0x55f800` | 2510 |
| `.text` | `0x5149d8-0x5153a0` | 2504 |
| `.text` | `0x29b8c9-0x29c26e` | 2469 |
| `.text` | `0x75411-0x75db0` | 2463 |
| `.text` | `0x560262-0x560c00` | 2462 |
| `.text` | `0x35808a-0x358a24` | 2458 |
| `.text` | `0x53dc0b-0x53e5a0` | 2453 |
| `.text` | `0x2c464e-0x2c4fc5` | 2423 |
| `.text` | `0x33a87b-0x33b1f2` | 2423 |
| `.text` | `0x4e9179-0x4e9ae0` | 2407 |
| `.text` | `0x39d1b1-0x39db0e` | 2397 |
| `.text` | `0x27c241-0x27cb8e` | 2381 |
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
