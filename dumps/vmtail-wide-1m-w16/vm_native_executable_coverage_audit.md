# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5642985
- uncovered executable bytes: 8055
- recovered range rows: 88868
- uncovered gaps: 570

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5638873 | 8055 | 99.85% | 88608 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x30b29-0x30b39` | 16 |
| `.text` | `0x31f83-0x31f93` | 16 |
| `.text` | `0x32dd7-0x32de7` | 16 |
| `.text` | `0x34f64-0x34f74` | 16 |
| `.text` | `0x385c6-0x385d6` | 16 |
| `.text` | `0x604c5-0x604d5` | 16 |
| `.text` | `0x6fe90-0x6fea0` | 16 |
| `.text` | `0x709e0-0x709f0` | 16 |
| `.text` | `0x72cab-0x72cbb` | 16 |
| `.text` | `0x72d2b-0x72d3b` | 16 |
| `.text` | `0x72dd3-0x72de3` | 16 |
| `.text` | `0x72e13-0x72e23` | 16 |
| `.text` | `0x75008-0x75018` | 16 |
| `.text` | `0x77a9d-0x77aad` | 16 |
| `.text` | `0xd0fc7-0xd0fd7` | 16 |
| `.text` | `0xd73d7-0xd73e7` | 16 |
| `.text` | `0xda107-0xda117` | 16 |
| `.text` | `0xda1c7-0xda1d7` | 16 |
| `.text` | `0xda2d7-0xda2e7` | 16 |
| `.text` | `0xdae07-0xdae17` | 16 |
| `.text` | `0xe2f26-0xe2f36` | 16 |
| `.text` | `0xed15c-0xed16c` | 16 |
| `.text` | `0xed5cc-0xed5dc` | 16 |
| `.text` | `0xf949c-0xf94ac` | 16 |
| `.text` | `0xfc0ac-0xfc0bc` | 16 |
| `.text` | `0x100c7e-0x100c8e` | 16 |
| `.text` | `0x1035fe-0x10360e` | 16 |
| `.text` | `0x105a78-0x105a88` | 16 |
| `.text` | `0x10f7bf-0x10f7cf` | 16 |
| `.text` | `0x11253f-0x11254f` | 16 |
| `.text` | `0x120926-0x120936` | 16 |
| `.text` | `0x1227d6-0x1227e6` | 16 |
| `.text` | `0x1273ac-0x1273bc` | 16 |
| `.text` | `0x12901c-0x12902c` | 16 |
| `.text` | `0x12a90c-0x12a91c` | 16 |
| `.text` | `0x12cf3c-0x12cf4c` | 16 |
| `.text` | `0x130d5e-0x130d6e` | 16 |
| `.text` | `0x138df4-0x138e04` | 16 |
| `.text` | `0x13a5e4-0x13a5f4` | 16 |
| `.text` | `0x13d0d8-0x13d0e8` | 16 |
