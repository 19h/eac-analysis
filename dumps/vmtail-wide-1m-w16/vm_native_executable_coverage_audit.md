# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5199939
- uncovered executable bytes: 451101
- recovered range rows: 68509
- uncovered gaps: 2928

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5195827 | 451101 | 92.01% | 68249 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x4e07f9-0x4e0e79` | 1664 |
| `.text` | `0x4e59f9-0x4e6079` | 1664 |
| `.text` | `0x4dc3f9-0x4dc8f9` | 1280 |
| `.text` | `0x4e71f9-0x4e7679` | 1152 |
| `.text` | `0x4e76f9-0x4e7b79` | 1152 |
| `.text` | `0x4e4bf9-0x4e4ff9` | 1024 |
| `.text` | `0x4e6679-0x4e6a79` | 1024 |
| `.text` | `0x4e82f9-0x4e86f9` | 1024 |
| `.text` | `0x4e7cf9-0x4e8079` | 896 |
| `.text` | `0x4e54f9-0x4e57f9` | 768 |
| `.text` | `0x4e62f9-0x4e65f9` | 768 |
| `.text` | `0x4e88f9-0x4e8bf9` | 768 |
| `.text` | `0x4db4f9-0x4db779` | 640 |
| `.text` | `0x4dd0f9-0x4dd379` | 640 |
| `.text` | `0x4dd5f9-0x4dd879` | 640 |
| `.text` | `0x4e44f9-0x4e4779` | 640 |
| `.text` | `0x4e6ef9-0x4e7179` | 640 |
| `.text` | `0x304f3-0x306f3` | 512 |
| `.text` | `0x311b8-0x313b8` | 512 |
| `.text` | `0x31f83-0x32183` | 512 |
| `.text` | `0x32d17-0x32f17` | 512 |
| `.text` | `0x34f64-0x35164` | 512 |
| `.text` | `0x381c6-0x383c6` | 512 |
| `.text` | `0x42e3c-0x4303c` | 512 |
| `.text` | `0x604a5-0x606a5` | 512 |
| `.text` | `0x6354a-0x6374a` | 512 |
| `.text` | `0x6564a-0x6584a` | 512 |
| `.text` | `0x66c54-0x66e54` | 512 |
| `.text` | `0x6e490-0x6e690` | 512 |
| `.text` | `0x70490-0x70690` | 512 |
| `.text` | `0x70890-0x70a90` | 512 |
| `.text` | `0x75008-0x75208` | 512 |
| `.text` | `0x767c4-0x769c4` | 512 |
| `.text` | `0x77a3d-0x77c3d` | 512 |
| `.text` | `0x7803d-0x7823d` | 512 |
| `.text` | `0xc92bb-0xc94bb` | 512 |
| `.text` | `0xd0fc7-0xd11c7` | 512 |
| `.text` | `0xd1bc7-0xd1dc7` | 512 |
| `.text` | `0xd5bc7-0xd5dc7` | 512 |
