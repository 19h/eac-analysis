# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2949878
- uncovered executable bytes: 2701162
- recovered range rows: 35440
- uncovered gaps: 2906

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2945766 | 2701162 | 52.16% | 35180 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x2a0719-0x2a468f` | 16246 |
| `.text` | `0x382430-0x386394` | 16228 |
| `.text` | `0x37676a-0x37a6c8` | 16222 |
| `.text` | `0x33f273-0x343193` | 16160 |
| `.text` | `0x19e085-0x1a1fa3` | 16158 |
| `.text` | `0x414942-0x41883d` | 16123 |
| `.text` | `0x3889a8-0x38c897` | 16111 |
| `.text` | `0x3611be-0x3650ab` | 16109 |
| `.text` | `0x453be3-0x457abc` | 16089 |
| `.text` | `0x3c8a79-0x3cc938` | 16063 |
| `.text` | `0x208f9e-0x20ce34` | 16022 |
| `.text` | `0x3ae615-0x3b24aa` | 16021 |
| `.text` | `0x30321e-0x307093` | 15989 |
| `.text` | `0x2ba7a9-0x2be60e` | 15973 |
| `.text` | `0x468634-0x46c45b` | 15911 |
| `.text` | `0x38e2a0-0x392091` | 15857 |
| `.text` | `0x3d9db9-0x3ddb5d` | 15780 |
| `.text` | `0x354c8a-0x358a24` | 15770 |
| `.text` | `0x5318ac-0x535610` | 15716 |
| `.text` | `0x266ac2-0x26a821` | 15711 |
| `.text` | `0x1dc85a-0x1e05a8` | 15694 |
| `.text` | `0x4784ee-0x47c22d` | 15679 |
| `.text` | `0x244a18-0x248752` | 15674 |
| `.text` | `0xfb19c-0xfeebc` | 15648 |
