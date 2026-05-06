# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2789622
- uncovered executable bytes: 2861418
- recovered range rows: 33277
- uncovered gaps: 2873

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2785510 | 2861418 | 49.32% | 33017 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x3d93b9-0x3ddb5d` | 18340 |
| `.text` | `0x3c13dd-0x3c5b46` | 18281 |
| `.text` | `0x530eac-0x535610` | 18276 |
| `.text` | `0x51d9c0-0x522120` | 18272 |
| `.text` | `0x2660c2-0x26a821` | 18271 |
| `.text` | `0x3993b1-0x39db0e` | 18269 |
| `.text` | `0x244018-0x248752` | 18234 |
| `.text` | `0x3609be-0x3650ab` | 18157 |
| `.text` | `0x4e53f9-0x4e9ae0` | 18151 |
| `.text` | `0x331e23-0x3364f8` | 18133 |
| `.text` | `0x42461f-0x428ce3` | 18116 |
| `.text` | `0x3ade15-0x3b24aa` | 18069 |
| `.text` | `0x2d3869-0x2d7efd` | 18068 |
| `.text` | `0x2b9fa9-0x2be60e` | 18021 |
| `.text` | `0x2bee00-0x2c342b` | 17963 |
| `.text` | `0x467e34-0x46c45b` | 17959 |
| `.text` | `0x1ccc01-0x1d1223` | 17954 |
| `.text` | `0x37071b-0x374d29` | 17934 |
| `.text` | `0x4e03f9-0x4e49f9` | 17920 |
| `.text` | `0x1c7955-0x1cbf51` | 17916 |
| `.text` | `0x26a824-0x26ee18` | 17908 |
| `.text` | `0x2ce707-0x2d2cf4` | 17901 |
| `.text` | `0x1155bf-0x119b8e` | 17871 |
| `.text` | `0x2b5975-0x2b9f30` | 17851 |
| `.text` | `0x1bc5ce-0x1c0b59` | 17803 |
| `.text` | `0x213a33-0x217fac` | 17785 |
| `.text` | `0x22d066-0x231586` | 17696 |
| `.text` | `0x3883a8-0x38c897` | 17647 |
