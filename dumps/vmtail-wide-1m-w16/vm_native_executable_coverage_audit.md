# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2733686
- uncovered executable bytes: 2917354
- recovered range rows: 32478
- uncovered gaps: 2858

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2729574 | 2917354 | 48.33% | 32218 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x3228bb-0x3275b6` | 19707 |
| `.text` | `0x42401f-0x428ce3` | 19652 |
| `.text` | `0x3c7c79-0x3cc938` | 19647 |
| `.text` | `0x287ecb-0x28cb6f` | 19620 |
| `.text` | `0x3ad815-0x3b24aa` | 19605 |
| `.text` | `0x1f10e8-0x1f5d10` | 19496 |
| `.text` | `0x1cc601-0x1d1223` | 19490 |
| `.text` | `0x1c0b7d-0x1c5750` | 19411 |
| `.text` | `0x114fbf-0x119b8e` | 19407 |
| `.text` | `0xe0566-0xe50f4` | 19342 |
| `.text` | `0x430893-0x4353f8` | 19301 |
| `.text` | `0x3f7b9e-0x3fc6bc` | 19230 |
| `.text` | `0x39db14-0x3a262e` | 19226 |
| `.text` | `0x121d46-0x126851` | 19211 |
| `.text` | `0x3e9e96-0x3ee99a` | 19204 |
| `.text` | `0x4079e5-0x40c488` | 19107 |
| `.text` | `0x156b13-0x15b5b2` | 19103 |
| `.text` | `0x329e55-0x32e8e4` | 19087 |
| `.text` | `0x1774aa-0x17bf1f` | 19061 |
| `.text` | `0x27feee-0x28494c` | 19038 |
| `.text` | `0x238eb6-0x23d8b8` | 18946 |
| `.text` | `0x2500bc-0x254abd` | 18945 |
| `.text` | `0x38d6a0-0x392091` | 18929 |
| `.text` | `0x47f030-0x483a1a` | 18922 |
| `.text` | `0x2978c9-0x29c26e` | 18853 |
| `.text` | `0x3d91b9-0x3ddb5d` | 18852 |
| `.text` | `0x375d6a-0x37a6c8` | 18782 |
| `.text` | `0xfa59c-0xfeebc` | 18720 |
| `.text` | `0x19d685-0x1a1fa3` | 18718 |
| `.text` | `0x24917d-0x24da7f` | 18690 |
| `.text` | `0x413f42-0x41883d` | 18683 |
| `.text` | `0x203034-0x20792d` | 18681 |
| `.text` | `0x28cc4c-0x2914ea` | 18590 |
| `.text` | `0x3d01ff-0x3d4a95` | 18582 |
| `.text` | `0x443067-0x4478f4` | 18573 |
| `.text` | `0x30281e-0x307093` | 18549 |
| `.text` | `0x2dc90e-0x2e117a` | 18540 |
| `.text` | `0x6c690-0x70ef4` | 18532 |
| `.text` | `0x381b30-0x386394` | 18532 |
| `.text` | `0x135fa4-0x13a7f8` | 18516 |
