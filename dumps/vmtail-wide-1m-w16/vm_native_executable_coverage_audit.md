# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 395057
- uncovered executable bytes: 5255983
- recovered range rows: 2373
- uncovered gaps: 175

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 395057 | 5251871 | 6.99% | 2373 |
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
| `.text` | `0x4d46ec-0x4f3230` | 125764 |
| `.text` | `0xcf5c7-0xe0017` | 68176 |
| `.text` | `0x51455f-0x522540` | 57313 |
| `.text` | `0x37dde-0x44d7b` | 53149 |
| `.text` | `0x542916-0x54d0a0` | 42890 |
| `.text` | `0x53907d-0x542770` | 38643 |
| `.text` | `0x579f6e-0x583650` | 38626 |
| `.text` | `0x49aac2-0x4a3b70` | 37038 |
| `.text` | `0x4f33d6-0x4fbb00` | 34602 |
| `.text` | `0x4bcf54-0x4c5100` | 33196 |
| `.text` | `0x57299f-0x579d80` | 29665 |
| `.text` | `0x5299eb-0x530c90` | 29349 |
| `.text` | `0x4a3d2c-0x4aa650` | 26916 |
| `.text` | `0x56c0f5-0x572230` | 24891 |
| `.text` | `0x6c090-0x71a15` | 22917 |
| `.text` | `0x492a6e-0x497ff0` | 21890 |
| `.text` | `0x55ee32-0x564190` | 21342 |
| `.text` | `0x505a3a-0x50ab00` | 20678 |
| `.text` | `0x61f0e-0x66ea2` | 20372 |
| `.text` | `0x5226f9-0x527483` | 19850 |
| `.text` | `0x530e56-0x535930` | 19162 |
| `.text` | `0x4f94a-0x53f76` | 17964 |
| `.text` | `0x4cf540-0x4d3930` | 17392 |
| `.text` | `0x44dfb-0x4918e` | 17299 |
| `.text` | `0x510269-0x5143e0` | 16759 |
| `.text` | `0x4b8d92-0x4bcd80` | 16366 |
| `.text` | `0x4c9a91-0x4cd900` | 15983 |
| `.text` | `0x33d64-0x37af9` | 15765 |
| `.text` | `0x54d9c6-0x5515b0` | 15338 |
| `.text` | `0x33b642-0x33f109` | 15047 |
| `.text` | `0x2d489-0x30c30` | 14247 |
| `.text` | `0x337e7b-0x33b4b6` | 13883 |
