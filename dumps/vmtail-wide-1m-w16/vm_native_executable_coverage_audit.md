# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3359350
- uncovered executable bytes: 2291690
- recovered range rows: 41260
- uncovered gaps: 3015

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3355238 | 2291690 | 59.41% | 41000 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x2de50e-0x2e117a` | 11372 |
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
| `.text` | `0x3dafb9-0x3ddb5d` | 11172 |
| `.text` | `0x3d1eff-0x3d4a95` | 11158 |
| `.text` | `0x292d1f-0x29589d` | 11134 |
| `.text` | `0x35be8a-0x35ea08` | 11134 |
| `.text` | `0x532aac-0x535610` | 11108 |
| `.text` | `0x245c18-0x248752` | 11066 |
| `.text` | `0xfc39c-0xfeebc` | 11040 |
| `.text` | `0x19f485-0x1a1fa3` | 11038 |
| `.text` | `0x3f9b9e-0x3fc6bc` | 11038 |
| `.text` | `0x365ab6-0x368588` | 10962 |
| `.text` | `0x3afa15-0x3b24aa` | 10901 |
| `.text` | `0x30461e-0x307093` | 10869 |
| `.text` | `0x2bbba9-0x2be60e` | 10853 |
