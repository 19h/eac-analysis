# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4978760
- uncovered executable bytes: 672280
- recovered range rows: 64423
- uncovered gaps: 3152

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4974648 | 672280 | 88.09% | 64163 |
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
| `.text` | `0x65ee3-0x662e3` | 1024 |
| `.text` | `0xd9fc7-0xda3c7` | 1024 |
| `.text` | `0x107fbf-0x1083bf` | 1024 |
| `.text` | `0x1089bf-0x108dbf` | 1024 |
| `.text` | `0x1093bf-0x1097bf` | 1024 |
| `.text` | `0x1099bf-0x109dbf` | 1024 |
| `.text` | `0x10bbbf-0x10bfbf` | 1024 |
| `.text` | `0x11c746-0x11cb46` | 1024 |
| `.text` | `0x120746-0x120b46` | 1024 |
| `.text` | `0x1272dc-0x1276dc` | 1024 |
| `.text` | `0x4e4bf9-0x4e4ff9` | 1024 |
| `.text` | `0x4e6679-0x4e6a79` | 1024 |
| `.text` | `0x4e82f9-0x4e86f9` | 1024 |
| `.text` | `0x391ca0-0x392091` | 1009 |
| `.text` | `0x483630-0x483a1a` | 1002 |
| `.text` | `0x6394a-0x63d20` | 982 |
| `.text` | `0x1c537d-0x1c5750` | 979 |
| `.text` | `0x74bbd-0x74f88` | 971 |
| `.text` | `0x3fba8-0x3ff6e` | 966 |
| `.text` | `0x4fc425-0x4fc7e0` | 955 |
| `.text` | `0x50998b-0x509d40` | 949 |
| `.text` | `0x6587a-0x65c24` | 938 |
| `.text` | `0x3dd7b9-0x3ddb5d` | 932 |
| `.text` | `0x540b66-0x540f00` | 922 |
| `.text` | `0x548a39-0x548dd0` | 919 |
| `.text` | `0x3d46ff-0x3d4a95` | 918 |
| `.text` | `0x490654-0x4909e4` | 912 |
| `.text` | `0x5436d2-0x543a60` | 910 |
| `.text` | `0x4df579-0x4df8f9` | 896 |
| `.text` | `0x4e7cf9-0x4e8079` | 896 |
| `.text` | `0x4bfd41-0x4c00c0` | 895 |
| `.text` | `0x7105c-0x713da` | 894 |
| `.text` | `0x511801-0x511b7f` | 894 |
| `.text` | `0x54a061-0x54a3d0` | 879 |
