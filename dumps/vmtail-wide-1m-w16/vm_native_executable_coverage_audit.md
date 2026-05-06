# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2931318
- uncovered executable bytes: 2719722
- recovered range rows: 35209
- uncovered gaps: 2900

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2927206 | 2719722 | 51.83% | 34949 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4e07f9-0x4e49f9` | 16896 |
| `.text` | `0x1c157d-0x1c5750` | 16851 |
| `.text` | `0x2980c9-0x29c26e` | 16805 |
| `.text` | `0xe0f66-0xe50f4` | 16782 |
| `.text` | `0x2a0519-0x2a468f` | 16758 |
| `.text` | `0x3c19dd-0x3c5b46` | 16745 |
| `.text` | `0x51dfc0-0x522120` | 16736 |
| `.text` | `0x3999b1-0x39db0e` | 16733 |
| `.text` | `0x3f859e-0x3fc6bc` | 16670 |
| `.text` | `0x39e514-0x3a262e` | 16666 |
| `.text` | `0x3d4aa7-0x3d8b9b` | 16628 |
| `.text` | `0x360fbe-0x3650ab` | 16621 |
| `.text` | `0x4e59f9-0x4e9ae0` | 16615 |
| `.text` | `0x4083e5-0x40c488` | 16547 |
| `.text` | `0x157513-0x15b5b2` | 16543 |
| `.text` | `0x32a855-0x32e8e4` | 16527 |
| `.text` | `0x2808ee-0x28494c` | 16478 |
| `.text` | `0x1367a4-0x13a7f8` | 16468 |
| `.text` | `0x370d1b-0x374d29` | 16398 |
| `.text` | `0x2398b6-0x23d8b8` | 16386 |
| `.text` | `0x250abc-0x254abd` | 16385 |
| `.text` | `0x3bc9b5-0x3c09b1` | 16380 |
| `.text` | `0x2ced07-0x2d2cf4` | 16365 |
| `.text` | `0x47fa30-0x483a1a` | 16362 |
| `.text` | `0x2b5f75-0x2b9f30` | 16315 |
| `.text` | `0x3949e1-0x398978` | 16279 |
| `.text` | `0x3d0aff-0x3d4a95` | 16278 |
| `.text` | `0x214033-0x217fac` | 16249 |
| `.text` | `0x382430-0x386394` | 16228 |
| `.text` | `0x37676a-0x37a6c8` | 16222 |
| `.text` | `0x33f273-0x343193` | 16160 |
| `.text` | `0x19e085-0x1a1fa3` | 16158 |
| `.text` | `0x414942-0x41883d` | 16123 |
| `.text` | `0x3889a8-0x38c897` | 16111 |
| `.text` | `0x453be3-0x457abc` | 16089 |
| `.text` | `0x3c8a79-0x3cc938` | 16063 |
| `.text` | `0x208f9e-0x20ce34` | 16022 |
| `.text` | `0x3ae615-0x3b24aa` | 16021 |
| `.text` | `0x30321e-0x307093` | 15989 |
| `.text` | `0x2ba7a9-0x2be60e` | 15973 |
