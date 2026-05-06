# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5460302
- uncovered executable bytes: 190738
- recovered range rows: 73788
- uncovered gaps: 2550

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5456190 | 190738 | 96.62% | 73528 |
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
| `.text` | `0x4daff9-0x4db1f9` | 512 |
| `.text` | `0x4db7f9-0x4db9f9` | 512 |
| `.text` | `0x4e03f9-0x4e05f9` | 512 |
| `.text` | `0x4e1479-0x4e1679` | 512 |
| `.text` | `0x4e19f9-0x4e1bf9` | 512 |
| `.text` | `0x4e1f79-0x4e2179` | 512 |
| `.text` | `0x4e3ef9-0x4e40f9` | 512 |
| `.text` | `0x4e47f9-0x4e49f9` | 512 |
| `.text` | `0x4e6af9-0x4e6cf9` | 512 |
| `.text` | `0x4e8cf9-0x4e8ef9` | 512 |
| `.text` | `0x4db279-0x4db3f9` | 384 |
| `.text` | `0x4e0ef9-0x4e1079` | 384 |
| `.text` | `0x4e4179-0x4e42f9` | 384 |
| `.text` | `0x4e9179-0x4e92f9` | 384 |
| `.text` | `0x72c6b-0x72dce` | 355 |
| `.text` | `0x3146b-0x3156b` | 256 |
| `.text` | `0x32d17-0x32e17` | 256 |
| `.text` | `0x34264-0x34364` | 256 |
| `.text` | `0x385c6-0x386c6` | 256 |
| `.text` | `0x40e90-0x40f90` | 256 |
| `.text` | `0x660e3-0x661e3` | 256 |
| `.text` | `0x6f090-0x6f190` | 256 |
