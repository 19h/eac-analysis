# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5618173
- uncovered executable bytes: 32867
- recovered range rows: 82208
- uncovered gaps: 1878

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5614061 | 32867 | 99.41% | 81948 |
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
| `.text` | `0x4dc819-0x4dc899` | 128 |
| `.text` | `0x4e4899-0x4e4919` | 128 |
| `.text` | `0x4e4ef9-0x4e4f79` | 128 |
| `.text` | `0x4e53f9-0x4e5479` | 128 |
| `.text` | `0x4e5639-0x4e56b9` | 128 |
| `.text` | `0x4e60f9-0x4e6179` | 128 |
| `.text` | `0x4e7d79-0x4e7df9` | 128 |
| `.text` | `0x4e83b9-0x4e8439` | 128 |
| `.text` | `0x4e8b49-0x4e8bc9` | 128 |
| `.text` | `0xe97dc-0xe981c` | 64 |
| `.text` | `0xeb21c-0xeb25c` | 64 |
| `.text` | `0xec81c-0xec85c` | 64 |
| `.text` | `0xed15c-0xed19c` | 64 |
| `.text` | `0xed59c-0xed5dc` | 64 |
| `.text` | `0xf69dc-0xf6a1c` | 64 |
| `.text` | `0xf949c-0xf94dc` | 64 |
| `.text` | `0xfa11c-0xfa15c` | 64 |
| `.text` | `0x12cf1c-0x12cf5c` | 64 |
| `.text` | `0x12f11c-0x12f15c` | 64 |
| `.text` | `0x12fbdc-0x12fc1c` | 64 |
| `.text` | `0x130d4e-0x130d8e` | 64 |
| `.text` | `0x14f393-0x14f3d3` | 64 |
| `.text` | `0x150c93-0x150cd3` | 64 |
| `.text` | `0x152d13-0x152d53` | 64 |
| `.text` | `0x163aaa-0x163aea` | 64 |
| `.text` | `0x1665ea-0x16662a` | 64 |
| `.text` | `0x166caa-0x166cea` | 64 |
| `.text` | `0x192885-0x1928c5` | 64 |
| `.text` | `0x193085-0x1930c5` | 64 |
| `.text` | `0x194745-0x194785` | 64 |
| `.text` | `0x196945-0x196985` | 64 |
