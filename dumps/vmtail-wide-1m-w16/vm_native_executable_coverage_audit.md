# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 346721
- uncovered executable bytes: 5304319
- recovered range rows: 2066
- uncovered gaps: 65

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 346721 | 5300207 | 6.13% | 2066 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x36b11b-0x48eb2b` | 1194512 |
| `.text` | `0x17c085-0x231586` | 742657 |
| `.text` | `0x2316b6-0x2d2cf4` | 661054 |
| `.text` | `0xe0166-0x15b5b2` | 504908 |
| `.text` | `0x500d66-0x568500` | 423834 |
| `.text` | `0x2d2e69-0x337d35` | 413388 |
| `.text` | `0x33f273-0x36afd2` | 179551 |
| `.text` | `0x4d3f8b-0x4fbb00` | 162677 |
| `.text` | `0x15b6f2-0x17bf1f` | 133165 |
| `.text` | `0x498422-0x4b2990` | 107886 |
| `.text` | `0x4b2b79-0x4c98a0` | 93479 |
| `.text` | `0x568eea-0x579d80` | 69270 |
| `.text` | `0xcf5c7-0xe0017` | 68176 |
| `.text` | `0x37b79-0x44d7b` | 53762 |
| `.text` | `0x5f246-0x6c010` | 52682 |
| `.text` | `0x44dfb-0x4f75e` | 43363 |
| `.text` | `0x4c9a91-0x4d3da0` | 41743 |
| `.text` | `0x579f6e-0x583650` | 38626 |
| `.text` | `0x48ec68-0x498230` | 38344 |
| `.text` | `0x5646b-0x5f1c6` | 36187 |
| `.text` | `0x25c34-0x2ceb0` | 29308 |
| `.text` | `0x6c090-0x72588` | 25848 |
| `.text` | `0x4f94a-0x53f76` | 17964 |
| `.text` | `0x33a3d-0x37af9` | 16572 |
| `.text` | `0x2d489-0x313eb` | 16226 |
| `.text` | `0x33b642-0x33f109` | 15047 |
| `.text` | `0x337e7b-0x33b4b6` | 13883 |
| `.text` | `0x4fbceb-0x4fed10` | 12325 |
| `.text` | `0x75008-0x779bd` | 10677 |
| `.text` | `0x31783-0x339bd` | 8762 |
| `.text` | `0x23154-0x2508e` | 7994 |
| `.text` | `0x72c20-0x748d8` | 7352 |
| `.text` | `0x4fef07-0x500b70` | 7273 |
| `.text` | `0xcc3f7-0xcdc60` | 6249 |
| `.text` | `0xc80bb-0xc9849` | 6030 |
| `.text` | `0xcde60-0xcf3c7` | 5479 |
| `.text` | `0x21e9e-0x230d4` | 4662 |
| `.text` | `0x5415e-0x5534e` | 4592 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 |
| `.text` | `0x55536-0x56274` | 3390 |
