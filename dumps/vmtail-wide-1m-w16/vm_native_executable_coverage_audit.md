# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5554890
- uncovered executable bytes: 96150
- recovered range rows: 78373
- uncovered gaps: 2043

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5550778 | 96150 | 98.29% | 78113 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4e4d89-0x4e4ea9` | 288 |
| `.text` | `0x4e0c29-0x4e0d19` | 240 |
| `.text` | `0x4e8e19-0x4e8ef9` | 224 |
| `.text` | `0x4dadf9-0x4daeb9` | 192 |
| `.text` | `0x4dc239-0x4dc2f9` | 192 |
| `.text` | `0x4dcd79-0x4dce39` | 192 |
| `.text` | `0x4dd3f9-0x4dd4b9` | 192 |
| `.text` | `0x4e4939-0x4e49f9` | 192 |
| `.text` | `0x4e6359-0x4e6419` | 192 |
| `.text` | `0x4e74f9-0x4e75b1` | 184 |
| `.text` | `0x4e7d79-0x4e7e31` | 184 |
| `.text` | `0x4e4c39-0x4e4ce9` | 176 |
| `.text` | `0x4e5bf9-0x4e5ca9` | 176 |
| `.text` | `0x4e7ac9-0x4e7b79` | 176 |
| `.text` | `0x56f12b-0x56f1d9` | 174 |
| `.text` | `0x56f40b-0x56f4b9` | 174 |
| `.text` | `0x56f87b-0x56f929` | 174 |
| `.text` | `0x4e4879-0x4e4919` | 160 |
| `.text` | `0x4e5e39-0x4e5ed9` | 160 |
| `.text` | `0x4e8b39-0x4e8bd9` | 160 |
| `.text` | `0x4e3c79-0x4e3d09` | 144 |
| `.text` | `0x4e5759-0x4e57e9` | 144 |
| `.text` | `0x4e7ef9-0x4e7f89` | 144 |
| `.text` | `0x4e91f9-0x4e9289` | 144 |
| `.text` | `0x72dd3-0x72e54` | 129 |
| `.text` | `0x31f83-0x32003` | 128 |
| `.text` | `0x32d97-0x32e17` | 128 |
| `.text` | `0x34264-0x342e4` | 128 |
| `.text` | `0x34f64-0x34fe4` | 128 |
| `.text` | `0x385c6-0x38646` | 128 |
| `.text` | `0x604a5-0x60525` | 128 |
| `.text` | `0x6e510-0x6e590` | 128 |
| `.text` | `0x6fe90-0x6ff10` | 128 |
| `.text` | `0x70990-0x70a10` | 128 |
| `.text` | `0x75008-0x75088` | 128 |
| `.text` | `0x768c4-0x76944` | 128 |
| `.text` | `0x77a3d-0x77abd` | 128 |
| `.text` | `0xd0fc7-0xd1047` | 128 |
| `.text` | `0xd73c7-0xd7447` | 128 |
| `.text` | `0xda0c7-0xda147` | 128 |
