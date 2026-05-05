# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 423580
- uncovered executable bytes: 5227460
- recovered range rows: 2576
- uncovered gaps: 252

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 423580 | 5223348 | 7.50% | 2576 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x36b11b-0x4886f0` | 1168853 |
| `.text` | `0x2316b6-0x2d2cf4` | 661054 |
| `.text` | `0x17c085-0x212399` | 615188 |
| `.text` | `0xe0166-0x15b5b2` | 504908 |
| `.text` | `0x2d2e69-0x337d35` | 413388 |
| `.text` | `0x33f273-0x36afd2` | 179551 |
| `.text` | `0x15b6f2-0x17bf1f` | 133165 |
| `.text` | `0x212547-0x231586` | 127039 |
| `.text` | `0x4d46ec-0x4ea160` | 88692 |
| `.text` | `0xcf5c7-0xe0017` | 68176 |
| `.text` | `0x514851-0x522540` | 56559 |
| `.text` | `0x49aac2-0x4a3b70` | 37038 |
| `.text` | `0x4ea2d5-0x4f3230` | 36699 |
| `.text` | `0x37dde-0x4096a` | 35724 |
| `.text` | `0x4f33d6-0x4fbb00` | 34602 |
| `.text` | `0x53c60b-0x542770` | 24933 |
| `.text` | `0x56c0f5-0x5720a0` | 24491 |
| `.text` | `0x57d6e5-0x583450` | 23915 |
| `.text` | `0x542916-0x5484b0` | 23450 |
| `.text` | `0x6c090-0x71a15` | 22917 |
| `.text` | `0x4a3d2c-0x4a9620` | 22772 |
| `.text` | `0x52b558-0x530c90` | 22328 |
| `.text` | `0x57299f-0x577f00` | 21857 |
| `.text` | `0x492a6e-0x497e60` | 21490 |
| `.text` | `0x55ee32-0x564190` | 21342 |
| `.text` | `0x61f0e-0x66ea2` | 20372 |
| `.text` | `0x5226f9-0x527483` | 19850 |
| `.text` | `0x530e56-0x535930` | 19162 |
| `.text` | `0x510269-0x5143e0` | 16759 |
| `.text` | `0x40c3e-0x44d7b` | 16701 |
| `.text` | `0x4c9a91-0x4cd900` | 15983 |
| `.text` | `0x4c0ae6-0x4c4730` | 15434 |
| `.text` | `0x54d9c6-0x5515b0` | 15338 |
| `.text` | `0x33b642-0x33f109` | 15047 |
| `.text` | `0x50189-0x53b22` | 14745 |
| `.text` | `0x4bcf54-0x4c0830` | 14556 |
| `.text` | `0x579f6e-0x57d580` | 13842 |
| `.text` | `0x4c62d6-0x4c98a0` | 13770 |
| `.text` | `0x53907d-0x53c4b0` | 13363 |
| `.text` | `0x535ad8-0x538ea0` | 13256 |
