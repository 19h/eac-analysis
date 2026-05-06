# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2903158
- uncovered executable bytes: 2747882
- recovered range rows: 34799
- uncovered gaps: 2893

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2899046 | 2747882 | 51.33% | 34539 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x44ad25-0x44f040` | 17179 |
| `.text` | `0x122546-0x126851` | 17163 |
| `.text` | `0x3ea696-0x3ee99a` | 17156 |
| `.text` | `0x24977d-0x24da7f` | 17154 |
| `.text` | `0x3232bb-0x3275b6` | 17147 |
| `.text` | `0x203634-0x20792d` | 17145 |
| `.text` | `0x2888cb-0x28cb6f` | 17060 |
| `.text` | `0x28d24c-0x2914ea` | 17054 |
| `.text` | `0x443667-0x4478f4` | 17037 |
| `.text` | `0x2dcf0e-0x2e117a` | 17004 |
| `.text` | `0x6cc90-0x70ef4` | 16996 |
| `.text` | `0xdbdc7-0xe0017` | 16976 |
| `.text` | `0x29c2bf-0x2a04ec` | 16941 |
| `.text` | `0x1f1ae8-0x1f5d10` | 16936 |
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
