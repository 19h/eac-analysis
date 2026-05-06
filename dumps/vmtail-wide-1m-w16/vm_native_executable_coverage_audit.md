# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4944200
- uncovered executable bytes: 706840
- recovered range rows: 63802
- uncovered gaps: 3157

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4940088 | 706840 | 87.48% | 63542 |
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
| `.text` | `0x130b0e-0x130f0e` | 1024 |
| `.text` | `0x13110e-0x13150e` | 1024 |
| `.text` | `0x137da4-0x1381a4` | 1024 |
| `.text` | `0x138da4-0x1391a4` | 1024 |
| `.text` | `0x13ae09-0x13b209` | 1024 |
| `.text` | `0x13d068-0x13d468` | 1024 |
| `.text` | `0x13f668-0x13fa68` | 1024 |
| `.text` | `0x146f13-0x147313` | 1024 |
| `.text` | `0x149113-0x149513` | 1024 |
| `.text` | `0x14c513-0x14c913` | 1024 |
| `.text` | `0x14d113-0x14d513` | 1024 |
| `.text` | `0x150b13-0x150f13` | 1024 |
| `.text` | `0x163aaa-0x163eaa` | 1024 |
| `.text` | `0x1662aa-0x1666aa` | 1024 |
| `.text` | `0x16aaaa-0x16aeaa` | 1024 |
| `.text` | `0x180085-0x180485` | 1024 |
| `.text` | `0x182285-0x182685` | 1024 |
| `.text` | `0x182c85-0x183085` | 1024 |
| `.text` | `0x18a885-0x18ac85` | 1024 |
| `.text` | `0x18e685-0x18ea85` | 1024 |
| `.text` | `0x18ee85-0x18f285` | 1024 |
| `.text` | `0x193085-0x193485` | 1024 |
| `.text` | `0x198e85-0x199285` | 1024 |
| `.text` | `0x1ac31c-0x1ac71c` | 1024 |
