# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5642427
- uncovered executable bytes: 8613
- recovered range rows: 88612
- uncovered gaps: 599

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5638315 | 8613 | 99.84% | 88352 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4e6b79-0x4e6b8e` | 21 |
| `.text` | `0x4db80d-0x4db821` | 20 |
| `.text` | `0x4dc269-0x4dc27d` | 20 |
| `.text` | `0x4e62f9-0x4e630d` | 20 |
| `.text` | `0x4e78ed-0x4e7901` | 20 |
| `.text` | `0x4e790b-0x4e791f` | 20 |
| `.text` | `0x4e8553-0x4e8567` | 20 |
| `.text` | `0x4dd534-0x4dd546` | 18 |
| `.text` | `0x4e89c9-0x4e89db` | 18 |
| `.text` | `0x48ddf3-0x48de04` | 17 |
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
