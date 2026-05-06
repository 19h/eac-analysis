# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3128310
- uncovered executable bytes: 2522730
- recovered range rows: 37877
- uncovered gaps: 2955

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3124198 | 2522730 | 55.32% | 37617 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4e62f9-0x4e9ae0` | 14311 |
| `.text` | `0x2b6775-0x2b9f30` | 14267 |
| `.text` | `0x3da3b9-0x3ddb5d` | 14244 |
| `.text` | `0x419440-0x41cbc6` | 14214 |
| `.text` | `0x3c23dd-0x3c5b46` | 14185 |
| `.text` | `0x431c93-0x4353f8` | 14181 |
| `.text` | `0x376f6a-0x37a6c8` | 14174 |
| `.text` | `0x39a3b1-0x39db0e` | 14173 |
| `.text` | `0x1dce5a-0x1e05a8` | 14158 |
| `.text` | `0x39ef14-0x3a262e` | 14106 |
| `.text` | `0x3d54a7-0x3d8b9b` | 14068 |
| `.text` | `0x332e23-0x3364f8` | 14037 |
| `.text` | `0x408de5-0x40c488` | 13987 |
| `.text` | `0x2d4869-0x2d7efd` | 13972 |
| `.text` | `0x2bafa9-0x2be60e` | 13925 |
| `.text` | `0x2812ee-0x28494c` | 13918 |
| `.text` | `0x2bfe00-0x2c342b` | 13867 |
| `.text` | `0x37171b-0x374d29` | 13838 |
| `.text` | `0x4e13f9-0x4e49f9` | 13824 |
| `.text` | `0x1c8955-0x1cbf51` | 13820 |
| `.text` | `0x3bd3b5-0x3c09b1` | 13820 |
| `.text` | `0x480430-0x483a1a` | 13802 |
| `.text` | `0x3de280-0x3e185b` | 13787 |
| `.text` | `0x35548a-0x358a24` | 13722 |
| `.text` | `0x3953e1-0x398978` | 13719 |
| `.text` | `0x3d14ff-0x3d4a95` | 13718 |
| `.text` | `0x214a33-0x217fac` | 13689 |
| `.text` | `0x382e30-0x386394` | 13668 |
| `.text` | `0x5320ac-0x535610` | 13668 |
| `.text` | `0x245218-0x248752` | 13626 |
| `.text` | `0x33fc73-0x343193` | 13600 |
| `.text` | `0x19ea85-0x1a1fa3` | 13598 |
| `.text` | `0x415342-0x41883d` | 13563 |
| `.text` | `0x361bbe-0x3650ab` | 13549 |
| `.text` | `0x3650b6-0x368588` | 13522 |
| `.text` | `0x3c9479-0x3cc938` | 13503 |
| `.text` | `0x3af015-0x3b24aa` | 13461 |
| `.text` | `0x1017ee-0x104c68` | 13434 |
| `.text` | `0x303c1e-0x307093` | 13429 |
| `.text` | `0x2ddd0e-0x2e117a` | 13420 |
