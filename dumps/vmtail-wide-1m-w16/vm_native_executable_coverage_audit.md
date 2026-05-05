# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 354373
- uncovered executable bytes: 5296667
- recovered range rows: 2098
- uncovered gaps: 81

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 354373 | 5292555 | 6.27% | 2098 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x36b11b-0x48eb2b` | 1194512 |
| `.text` | `0x17c085-0x231586` | 742657 |
| `.text` | `0x2316b6-0x2d2cf4` | 661054 |
| `.text` | `0xe0166-0x15b5b2` | 504908 |
| `.text` | `0x2d2e69-0x337d35` | 413388 |
| `.text` | `0x500d66-0x538ea0` | 229690 |
| `.text` | `0x33f273-0x36afd2` | 179551 |
| `.text` | `0x4d3f8b-0x4fbb00` | 162677 |
| `.text` | `0x53907d-0x55c790` | 145171 |
| `.text` | `0x15b6f2-0x17bf1f` | 133165 |
| `.text` | `0x498422-0x4aa650` | 74286 |
| `.text` | `0x4b860e-0x4c98a0` | 70290 |
| `.text` | `0xcf5c7-0xe0017` | 68176 |
| `.text` | `0x37b79-0x44d7b` | 53762 |
| `.text` | `0x5f246-0x6c010` | 52682 |
| `.text` | `0x55cb8f-0x567f20` | 45969 |
| `.text` | `0x4c9a91-0x4d3da0` | 41743 |
| `.text` | `0x579f6e-0x583650` | 38626 |
| `.text` | `0x4aa829-0x4b2990` | 33127 |
| `.text` | `0x57299f-0x579d80` | 29665 |
| `.text` | `0x56b4a7-0x5725b0` | 28937 |
| `.text` | `0x6c090-0x72588` | 25848 |
| `.text` | `0x26aae-0x2cafa` | 24652 |
| `.text` | `0x44dfb-0x4a6e6` | 22763 |
| `.text` | `0x4b2b79-0x4b8430` | 22711 |
| `.text` | `0x5733f-0x5cb26` | 22503 |
| `.text` | `0x492a6e-0x498230` | 22466 |
| `.text` | `0x4f94a-0x53f76` | 17964 |
| `.text` | `0x33a3d-0x37af9` | 16572 |
| `.text` | `0x2d489-0x313eb` | 16226 |
| `.text` | `0x48ec68-0x492898` | 15408 |
| `.text` | `0x33b642-0x33f109` | 15047 |
| `.text` | `0x337e7b-0x33b4b6` | 13883 |
| `.text` | `0x4fbceb-0x4fed10` | 12325 |
| `.text` | `0x75008-0x779bd` | 10677 |
| `.text` | `0x4cee6-0x4f75e` | 10360 |
| `.text` | `0x5cd02-0x5f1c6` | 9412 |
| `.text` | `0x4a8c5-0x4cd00` | 9275 |
| `.text` | `0x568eea-0x56b2c0` | 9174 |
| `.text` | `0x31783-0x339bd` | 8762 |
