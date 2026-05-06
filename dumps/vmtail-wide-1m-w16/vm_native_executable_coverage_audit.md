# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3933174
- uncovered executable bytes: 1717866
- recovered range rows: 49497
- uncovered gaps: 3168

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3929062 | 1717866 | 69.57% | 49237 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x41cbcb-0x41e61c` | 6737 |
| `.text` | `0x36959e-0x36afd2` | 6708 |
| `.text` | `0x1a90bb-0x1aaadd` | 6690 |
| `.text` | `0x1f860a-0x1fa01f` | 6677 |
| `.text` | `0x5748cd-0x5762d0` | 6659 |
| `.text` | `0x44ffdf-0x4519a6` | 6599 |
| `.text` | `0x29a8c9-0x29c26e` | 6565 |
| `.text` | `0x35708a-0x358a24` | 6554 |
| `.text` | `0x396fe1-0x398978` | 6551 |
| `.text` | `0x33987b-0x33b1f2` | 6519 |
| `.text` | `0x11abc1-0x11c52d` | 6508 |
| `.text` | `0x384a30-0x386394` | 6500 |
| `.text` | `0x378d6a-0x37a6c8` | 6494 |
| `.text` | `0x27b241-0x27cb8e` | 6477 |
| `.text` | `0x1a66bb-0x1a7ffe` | 6467 |
| `.text` | `0x47a8ee-0x47c22d` | 6463 |
| `.text` | `0x124f46-0x126851` | 6411 |
| `.text` | `0x24c17d-0x24da7f` | 6402 |
| `.text` | `0x325cbb-0x3275b6` | 6395 |
| `.text` | `0x28496e-0x286264` | 6390 |
| `.text` | `0x404cd1-0x4065ad` | 6364 |
| `.text` | `0x4561e3-0x457abc` | 6361 |
| `.text` | `0x13ee68-0x140711` | 6313 |
| `.text` | `0x28b2cb-0x28cb6f` | 6308 |
| `.text` | `0x20b59e-0x20ce34` | 6294 |
| `.text` | `0x32d055-0x32e8e4` | 6287 |
| `.text` | `0x3ba859-0x3bc0e4` | 6283 |
| `.text` | `0x33650c-0x337d35` | 6185 |
| `.text` | `0x1f44e8-0x1f5d10` | 6184 |
| `.text` | `0x23c0b6-0x23d8b8` | 6146 |
| `.text` | `0x1f5e08-0x1f7607` | 6143 |
| `.text` | `0x4a6a5e-0x4a8259` | 6139 |
| `.text` | `0x26d624-0x26ee18` | 6132 |
| `.text` | `0x4e82f9-0x4e9ae0` | 6119 |
| `.text` | `0x4f74e2-0x4f8cc0` | 6110 |
| `.text` | `0x1c3f7d-0x1c5750` | 6099 |
| `.text` | `0x1183bf-0x119b8e` | 6095 |
| `.text` | `0x53ce0b-0x53e5a0` | 6037 |
| `.text` | `0xc80bb-0xc9849` | 6030 |
| `.text` | `0x1bf3ce-0x1c0b59` | 6027 |
