# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 338796
- uncovered executable bytes: 5312244
- recovered range rows: 2026
- uncovered gaps: 49

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 338796 | 5308132 | 5.99% | 2026 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x36b11b-0x48eb2b` | 1194512 |
| `.text` | `0x48ec68-0x583650` | 1001960 |
| `.text` | `0x17c085-0x231586` | 742657 |
| `.text` | `0x2316b6-0x2d2cf4` | 661054 |
| `.text` | `0xe0166-0x15b5b2` | 504908 |
| `.text` | `0x2d2e69-0x337d35` | 413388 |
| `.text` | `0x33f273-0x36afd2` | 179551 |
| `.text` | `0x15b6f2-0x17bf1f` | 133165 |
| `.text` | `0x44dfb-0x5f1c6` | 107467 |
| `.text` | `0xcf5c7-0xe0017` | 68176 |
| `.text` | `0x37b79-0x44d7b` | 53762 |
| `.text` | `0x5f246-0x6c010` | 52682 |
| `.text` | `0x2509a-0x2d409` | 33647 |
| `.text` | `0x6c090-0x72588` | 25848 |
| `.text` | `0x33a3d-0x37af9` | 16572 |
| `.text` | `0x2d489-0x313eb` | 16226 |
| `.text` | `0x33b642-0x33f109` | 15047 |
| `.text` | `0x337e7b-0x33b4b6` | 13883 |
| `.text` | `0x75008-0x779bd` | 10677 |
| `.text` | `0x31783-0x339bd` | 8762 |
| `.text` | `0x23154-0x2508e` | 7994 |
| `.text` | `0x72c20-0x748d8` | 7352 |
| `.text` | `0xcc3f7-0xcdc60` | 6249 |
| `.text` | `0xc80bb-0xc9849` | 6030 |
| `.text` | `0xcde60-0xcf3c7` | 5479 |
| `.text` | `0x21e9e-0x230d4` | 4662 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 |
| `.text` | `0x20c00-0x217cb` | 3019 |
| `.text` | `0xc3726-0xc4258` | 2866 |
| `.text` | `0x77a3d-0x78561` | 2852 |
| `.text` | `0x7261c-0x72bbc` | 1440 |
| `.text` | `0x74bbd-0x74f88` | 971 |
| `.text` | `0x21b05-0x21e1e` | 793 |
| `.text` | `0x3146b-0x31703` | 664 |
| `.text` | `0xc559f-0xc57b8` | 537 |
| `.text` | `0x2184b-0x21a50` | 517 |
| `.text` | `0x74958-0x74b3d` | 485 |
| `.text` | `0xcad8a-0xcaf2a` | 416 |
| `.text` | `0xc6bd0-0xc6d58` | 392 |
| `.text` | `0xabc66-0xabd6f` | 265 |
