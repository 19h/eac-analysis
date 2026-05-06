# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3335158
- uncovered executable bytes: 2315882
- recovered range rows: 40864
- uncovered gaps: 3009

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3331046 | 2315882 | 58.98% | 40604 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x101dee-0x104c68` | 11898 |
| `.text` | `0x2de30e-0x2e117a` | 11884 |
| `.text` | `0x2bb7a9-0x2be60e` | 11877 |
| `.text` | `0x6e090-0x70ef4` | 11876 |
| `.text` | `0x2b7175-0x2b9f30` | 11707 |
| `.text` | `0x355c8a-0x358a24` | 11674 |
| `.text` | `0x419e40-0x41cbc6` | 11654 |
| `.text` | `0x35bc8a-0x35ea08` | 11646 |
| `.text` | `0x215233-0x217fac` | 11641 |
| `.text` | `0x432693-0x4353f8` | 11621 |
| `.text` | `0x51f3c0-0x522120` | 11616 |
| `.text` | `0x39adb1-0x39db0e` | 11613 |
| `.text` | `0x4794ee-0x47c22d` | 11583 |
| `.text` | `0x39f914-0x3a262e` | 11546 |
| `.text` | `0x3ebc96-0x3ee99a` | 11524 |
| `.text` | `0x204c34-0x20792d` | 11513 |
| `.text` | `0x3d5ea7-0x3d8b9b` | 11508 |
| `.text` | `0x347ed8-0x34abc6` | 11502 |
| `.text` | `0x2daf3-0x307d0` | 11485 |
| `.text` | `0x333823-0x3364f8` | 11477 |
| `.text` | `0x30911d-0x30bdcd` | 11440 |
| `.text` | `0x4097e5-0x40c488` | 11427 |
| `.text` | `0x2d5269-0x2d7efd` | 11412 |
| `.text` | `0x4e1d79-0x4e49f9` | 11392 |
| `.text` | `0x281cee-0x28494c` | 11358 |
| `.text` | `0xdd3c7-0xe0017` | 11344 |
| `.text` | `0x46c47e-0x46f0b8` | 11322 |
| `.text` | `0x29d8bf-0x2a04ec` | 11309 |
| `.text` | `0x469834-0x46c45b` | 11303 |
| `.text` | `0x1ce601-0x1d1223` | 11298 |
| `.text` | `0x37211b-0x374d29` | 11278 |
| `.text` | `0x4dc1f9-0x4dedf9` | 11264 |
| `.text` | `0x3bddb5-0x3c09b1` | 11260 |
| `.text` | `0x20ce40-0x20fa39` | 11257 |
| `.text` | `0x15f200-0x161df6` | 11254 |
| `.text` | `0x38f4a0-0x392091` | 11249 |
| `.text` | `0x2d0107-0x2d2cf4` | 11245 |
| `.text` | `0x480e30-0x483a1a` | 11242 |
| `.text` | `0x131ba5-0x134781` | 11228 |
| `.text` | `0x116fbf-0x119b8e` | 11215 |
