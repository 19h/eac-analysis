# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 382457
- uncovered executable bytes: 5268583
- recovered range rows: 2272
- uncovered gaps: 144

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 382457 | 5264471 | 6.77% | 2272 |
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
| `.text` | `0x4d3f8b-0x4f3230` | 127653 |
| `.text` | `0x212547-0x231586` | 127039 |
| `.text` | `0x510269-0x522540` | 74455 |
| `.text` | `0xcf5c7-0xe0017` | 68176 |
| `.text` | `0x37dde-0x44d7b` | 53149 |
| `.text` | `0x542916-0x54d0a0` | 42890 |
| `.text` | `0x53907d-0x542770` | 38643 |
| `.text` | `0x579f6e-0x583650` | 38626 |
| `.text` | `0x55ee32-0x567f20` | 37102 |
| `.text` | `0x49aac2-0x4a3b70` | 37038 |
| `.text` | `0x4f33d6-0x4fbb00` | 34602 |
| `.text` | `0x4bcf54-0x4c5100` | 33196 |
| `.text` | `0x54d247-0x555240` | 32761 |
| `.text` | `0x57299f-0x579d80` | 29665 |
| `.text` | `0x5299eb-0x530c90` | 29349 |
| `.text` | `0x4a3d2c-0x4aa650` | 26916 |
| `.text` | `0x6c090-0x72588` | 25848 |
| `.text` | `0x56c0f5-0x572230` | 24891 |
| `.text` | `0x26aae-0x2cafa` | 24652 |
| `.text` | `0x44dfb-0x4a6e6` | 22763 |
| `.text` | `0x492a6e-0x498230` | 22466 |
| `.text` | `0x61bbd-0x66ea2` | 21221 |
| `.text` | `0x505a3a-0x50ab00` | 20678 |
| `.text` | `0x5226f9-0x527483` | 19850 |
| `.text` | `0x530e56-0x535930` | 19162 |
| `.text` | `0x4f94a-0x53f76` | 17964 |
| `.text` | `0x4cf540-0x4d3930` | 17392 |
| `.text` | `0x33a3d-0x37af9` | 16572 |
| `.text` | `0x4b8d92-0x4bcd80` | 16366 |
| `.text` | `0x2d489-0x313eb` | 16226 |
| `.text` | `0x4c9a91-0x4cd900` | 15983 |
| `.text` | `0x48ec68-0x492898` | 15408 |
| `.text` | `0x33b642-0x33f109` | 15047 |
