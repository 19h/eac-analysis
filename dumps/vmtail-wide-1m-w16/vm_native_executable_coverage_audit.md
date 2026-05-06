# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3104246
- uncovered executable bytes: 2546794
- recovered range rows: 37521
- uncovered gaps: 2953

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3100134 | 2546794 | 54.89% | 37261 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x323cbb-0x3275b6` | 14587 |
| `.text` | `0x204034-0x20792d` | 14585 |
| `.text` | `0x3d52a7-0x3d8b9b` | 14580 |
| `.text` | `0x388fa8-0x38c897` | 14575 |
| `.text` | `0x4541e3-0x457abc` | 14553 |
| `.text` | `0x2892cb-0x28cb6f` | 14500 |
| `.text` | `0x20959e-0x20ce34` | 14486 |
| `.text` | `0x32b055-0x32e8e4` | 14479 |
| `.text` | `0x444067-0x4478f4` | 14477 |
| `.text` | `0x6d690-0x70ef4` | 14436 |
| `.text` | `0x29ccbf-0x2a04ec` | 14381 |
| `.text` | `0x468c34-0x46c45b` | 14375 |
| `.text` | `0x23a0b6-0x23d8b8` | 14338 |
| `.text` | `0x1c8755-0x1cbf51` | 14332 |
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
| `.text` | `0x332e23-0x3364f8` | 14037 |
| `.text` | `0x408de5-0x40c488` | 13987 |
| `.text` | `0x2d4869-0x2d7efd` | 13972 |
| `.text` | `0x2bafa9-0x2be60e` | 13925 |
| `.text` | `0x2812ee-0x28494c` | 13918 |
| `.text` | `0x2bfe00-0x2c342b` | 13867 |
| `.text` | `0x37171b-0x374d29` | 13838 |
| `.text` | `0x4e13f9-0x4e49f9` | 13824 |
| `.text` | `0x3bd3b5-0x3c09b1` | 13820 |
| `.text` | `0x480430-0x483a1a` | 13802 |
| `.text` | `0x3de280-0x3e185b` | 13787 |
| `.text` | `0x35548a-0x358a24` | 13722 |
| `.text` | `0x3953e1-0x398978` | 13719 |
| `.text` | `0x3d14ff-0x3d4a95` | 13718 |
| `.text` | `0x214a33-0x217fac` | 13689 |
| `.text` | `0x382e30-0x386394` | 13668 |
