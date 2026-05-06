# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5029486
- uncovered executable bytes: 621554
- recovered range rows: 65215
- uncovered gaps: 3108

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5025374 | 621554 | 88.99% | 64955 |
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
| `.text` | `0x6fc90-0x6ff90` | 768 |
| `.text` | `0xda0c7-0xda3c7` | 768 |
| `.text` | `0xfe99c-0xfec9c` | 768 |
| `.text` | `0x136da4-0x1370a4` | 768 |
| `.text` | `0x24a47d-0x24a77d` | 768 |
| `.text` | `0x278041-0x278341` | 768 |
| `.text` | `0x47b3ee-0x47b6ee` | 768 |
| `.text` | `0x4e54f9-0x4e57f9` | 768 |
| `.text` | `0x4e62f9-0x4e65f9` | 768 |
| `.text` | `0x4e88f9-0x4e8bf9` | 768 |
| `.text` | `0x49e477-0x49e770` | 761 |
| `.text` | `0x3d88a7-0x3d8b9b` | 756 |
| `.text` | `0x490d34-0x491024` | 752 |
| `.text` | `0x4ced28-0x4cf010` | 744 |
| `.text` | `0x3b82c9-0x3b85a9` | 736 |
| `.text` | `0x528000-0x5282e0` | 736 |
| `.text` | `0x50e947-0x50ec20` | 729 |
| `.text` | `0x52d2ca-0x52d5a0` | 726 |
| `.text` | `0x336223-0x3364f8` | 725 |
| `.text` | `0x558b5b-0x558e30` | 725 |
| `.text` | `0x58a71-0x58d40` | 719 |
| `.text` | `0x2a46b1-0x2a496d` | 700 |
| `.text` | `0x56d0f5-0x56d3b0` | 699 |
| `.text` | `0x500d66-0x501020` | 698 |
| `.text` | `0x49efb-0x4a1b4` | 697 |
| `.text` | `0x4fef07-0x4ff1c0` | 697 |
| `.text` | `0x4b690-0x4b942` | 690 |
| `.text` | `0x2a023f-0x2a04ec` | 685 |
| `.text` | `0x75008-0x752b0` | 680 |
| `.text` | `0x5476e9-0x547990` | 679 |
