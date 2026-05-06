# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5583609
- uncovered executable bytes: 67431
- recovered range rows: 80067
- uncovered gaps: 1978

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5579497 | 67431 | 98.80% | 79807 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4e4d89-0x4e4ea9` | 288 |
| `.text` | `0x4e5e39-0x4e5ed9` | 160 |
| `.text` | `0x4e74f9-0x4e7595` | 156 |
| `.text` | `0x4e8e19-0x4e8eb1` | 152 |
| `.text` | `0x4e5759-0x4e57e9` | 144 |
| `.text` | `0x4e7ef9-0x4e7f89` | 144 |
| `.text` | `0x4e91f9-0x4e9289` | 144 |
| `.text` | `0x4e4c39-0x4e4cc5` | 140 |
| `.text` | `0x4e5bf9-0x4e5c85` | 140 |
| `.text` | `0x31f83-0x32003` | 128 |
| `.text` | `0x32d97-0x32e17` | 128 |
| `.text` | `0x34264-0x342e4` | 128 |
| `.text` | `0x34f64-0x34fe4` | 128 |
| `.text` | `0x385c6-0x38646` | 128 |
| `.text` | `0x604a5-0x60525` | 128 |
| `.text` | `0x6e510-0x6e590` | 128 |
| `.text` | `0x6fe90-0x6ff10` | 128 |
| `.text` | `0x70990-0x70a10` | 128 |
| `.text` | `0x72dd3-0x72e53` | 128 |
| `.text` | `0x75008-0x75088` | 128 |
| `.text` | `0x768c4-0x76944` | 128 |
| `.text` | `0x77a3d-0x77abd` | 128 |
| `.text` | `0xd0fc7-0xd1047` | 128 |
| `.text` | `0xd73c7-0xd7447` | 128 |
| `.text` | `0xda0c7-0xda147` | 128 |
| `.text` | `0xda1c7-0xda247` | 128 |
| `.text` | `0xda2c7-0xda347` | 128 |
| `.text` | `0xe2ee6-0xe2f66` | 128 |
| `.text` | `0xe7e1c-0xe7e9c` | 128 |
| `.text` | `0xe841c-0xe849c` | 128 |
| `.text` | `0xe979c-0xe981c` | 128 |
| `.text` | `0xea09c-0xea11c` | 128 |
| `.text` | `0xeb21c-0xeb29c` | 128 |
| `.text` | `0xec81c-0xec89c` | 128 |
| `.text` | `0xed11c-0xed19c` | 128 |
| `.text` | `0xed59c-0xed61c` | 128 |
| `.text` | `0xf699c-0xf6a1c` | 128 |
| `.text` | `0xf949c-0xf951c` | 128 |
| `.text` | `0xfa11c-0xfa19c` | 128 |
| `.text` | `0xfd59c-0xfd61c` | 128 |
