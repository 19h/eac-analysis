# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2754166
- uncovered executable bytes: 2896874
- recovered range rows: 32769
- uncovered gaps: 2861

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2750054 | 2896874 | 48.70% | 32509 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x3c8079-0x3cc938` | 18623 |
| `.text` | `0x28cc4c-0x2914ea` | 18590 |
| `.text` | `0x3d01ff-0x3d4a95` | 18582 |
| `.text` | `0x443067-0x4478f4` | 18573 |
| `.text` | `0x30281e-0x307093` | 18549 |
| `.text` | `0x2dc90e-0x2e117a` | 18540 |
| `.text` | `0x6c690-0x70ef4` | 18532 |
| `.text` | `0x381b30-0x386394` | 18532 |
| `.text` | `0x135fa4-0x13a7f8` | 18516 |
| `.text` | `0x3bc1b5-0x3c09b1` | 18428 |
| `.text` | `0x3c13dd-0x3c5b46` | 18281 |
| `.text` | `0x530eac-0x535610` | 18276 |
| `.text` | `0x51d9c0-0x522120` | 18272 |
| `.text` | `0x2660c2-0x26a821` | 18271 |
| `.text` | `0x3993b1-0x39db0e` | 18269 |
| `.text` | `0x244018-0x248752` | 18234 |
| `.text` | `0x3609be-0x3650ab` | 18157 |
| `.text` | `0x4e53f9-0x4e9ae0` | 18151 |
| `.text` | `0x331e23-0x3364f8` | 18133 |
