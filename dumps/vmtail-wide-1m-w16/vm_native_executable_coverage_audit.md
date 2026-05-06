# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4237046
- uncovered executable bytes: 1413994
- recovered range rows: 53853
- uncovered gaps: 3246

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4232934 | 1413994 | 74.95% | 53593 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x211042-0x212399` | 4951 |
| `.text` | `0x543e11-0x545160` | 4943 |
| `.text` | `0x33b842-0x33cb73` | 4913 |
| `.text` | `0x3a1314-0x3a262e` | 4890 |
| `.text` | `0x3ed696-0x3ee99a` | 4868 |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x3d78a7-0x3d8b9b` | 4852 |
| `.text` | `0x3498d8-0x34abc6` | 4846 |
| `.text` | `0x3b28b4-0x3b3b9d` | 4841 |
| `.text` | `0x335223-0x3364f8` | 4821 |
| `.text` | `0x56c0f5-0x56d3b0` | 4795 |
| `.text` | `0x15a313-0x15b5b2` | 4767 |
| `.text` | `0x5528f6-0x553b6f` | 4729 |
| `.text` | `0x305e1e-0x307093` | 4725 |
| `.text` | `0x29f2bf-0x2a04ec` | 4653 |
| `.text` | `0x4dadf9-0x4dbff9` | 4608 |
| `.text` | `0x1abb1c-0x1acd1b` | 4607 |
| `.text` | `0x736db-0x748d8` | 4605 |
| `.text` | `0x12eedc-0x1300d5` | 4601 |
| `.text` | `0x2c3e4e-0x2c4fc5` | 4471 |
| `.text` | `0x23e8c9-0x23fa28` | 4447 |
| `.text` | `0x2d959d-0x2da6fc` | 4447 |
| `.text` | `0x505da6-0x506f00` | 4442 |
| `.text` | `0x48723e-0x488396` | 4440 |
| `.text` | `0x27e19f-0x27f2ea` | 4427 |
| `.text` | `0x1a6ebb-0x1a7ffe` | 4419 |
| `.text` | `0x247618-0x248752` | 4410 |
| `.text` | `0x3b28f-0x3c371` | 4322 |
| `.text` | `0x5034d6-0x5045a0` | 4298 |
| `.text` | `0x35033e-0x3513ff` | 4289 |
| `.text` | `0x32917-0x339bd` | 4262 |
| `.text` | `0x103bee-0x104c68` | 4218 |
| `.text` | `0x54626c-0x5472e0` | 4212 |
| `.text` | `0x75dc4-0x76e22` | 4190 |
| `.text` | `0x3080af-0x309106` | 4183 |
| `.text` | `0x1e05ab-0x1e15fc` | 4177 |
| `.text` | `0x35ac45-0x35bc7b` | 4150 |
| `.text` | `0x483a20-0x484a4f` | 4143 |
| `.text` | `0x2c2400-0x2c342b` | 4139 |
| `.text` | `0x46f0cb-0x4700ec` | 4129 |
