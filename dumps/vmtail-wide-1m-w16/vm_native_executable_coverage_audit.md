# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4878583
- uncovered executable bytes: 772457
- recovered range rows: 62685
- uncovered gaps: 3180

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4874471 | 772457 | 86.32% | 62425 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x4e07f9-0x4e0e79` | 1664 |
| `.text` | `0x4e59f9-0x4e6079` | 1664 |
| `.text` | `0x4dc3f9-0x4dc8f9` | 1280 |
| `.text` | `0x491976-0x491e06` | 1168 |
| `.text` | `0x4dd3f9-0x4dd879` | 1152 |
| `.text` | `0x4e71f9-0x4e7679` | 1152 |
| `.text` | `0x4e76f9-0x4e7b79` | 1152 |
| `.text` | `0x1047ee-0x104c68` | 1146 |
| `.text` | `0x217b33-0x217fac` | 1145 |
| `.text` | `0x2e0d0e-0x2e117a` | 1132 |
| `.text` | `0x37c6ca-0x37cb28` | 1118 |
| `.text` | `0x548053-0x5484b0` | 1117 |
| `.text` | `0x57043a-0x570890` | 1110 |
| `.text` | `0x13a3a4-0x13a7f8` | 1108 |
| `.text` | `0x502b4f-0x502fa0` | 1105 |
| `.text` | `0x42c3c-0x4308a` | 1102 |
| `.text` | `0x49bb83-0x49bfd1` | 1102 |
| `.text` | `0x49526d-0x4956b0` | 1091 |
| `.text` | `0x4c9f4a-0x4ca380` | 1078 |
| `.text` | `0x46c034-0x46c45b` | 1063 |
| `.text` | `0x40c065-0x40c488` | 1059 |
| `.text` | `0x54a4c0-0x54a8d0` | 1040 |
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
| `.text` | `0x130b0e-0x130f0e` | 1024 |
| `.text` | `0x13110e-0x13150e` | 1024 |
| `.text` | `0x137da4-0x1381a4` | 1024 |
| `.text` | `0x138da4-0x1391a4` | 1024 |
| `.text` | `0x13ae09-0x13b209` | 1024 |
| `.text` | `0x13d068-0x13d468` | 1024 |
| `.text` | `0x13f668-0x13fa68` | 1024 |
