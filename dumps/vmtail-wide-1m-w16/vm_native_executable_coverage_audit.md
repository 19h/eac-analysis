# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3717750
- uncovered executable bytes: 1933290
- recovered range rows: 46298
- uncovered gaps: 3113

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3713638 | 1933290 | 65.76% | 46038 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x39b7b1-0x39db0e` | 9053 |
| `.text` | `0x210042-0x212399` | 9047 |
| `.text` | `0x340e73-0x343193` | 8992 |
| `.text` | `0x3a0314-0x3a262e` | 8986 |
| `.text` | `0x3ec696-0x3ee99a` | 8964 |
| `.text` | `0x24b77d-0x24da7f` | 8962 |
| `.text` | `0x3d68a7-0x3d8b9b` | 8948 |
| `.text` | `0x334223-0x3364f8` | 8917 |
| `.text` | `0x28a8cb-0x28cb6f` | 8868 |
| `.text` | `0x2826ee-0x28494c` | 8798 |
| `.text` | `0x1385a4-0x13a7f8` | 8788 |
| `.text` | `0x46a234-0x46c45b` | 8743 |
| `.text` | `0x1aab1c-0x1acd1b` | 8703 |
| `.text` | `0x12dedc-0x1300d5` | 8697 |
| `.text` | `0x23d8c9-0x23fa28` | 8543 |
| `.text` | `0x27d19f-0x27f2ea` | 8523 |
| `.text` | `0x348ad8-0x34abc6` | 8430 |
| `.text` | `0x102bee-0x104c68` | 8314 |
| `.text` | `0x3070af-0x309106` | 8279 |
| `.text` | `0x40c4df-0x40e52b` | 8268 |
| `.text` | `0x359c45-0x35bc7b` | 8246 |
| `.text` | `0x15fe00-0x161df6` | 8182 |
| `.text` | `0x53c60b-0x53e5a0` | 8085 |
| `.text` | `0xe3166-0xe50f4` | 8078 |
| `.text` | `0x41ac40-0x41cbc6` | 8070 |
| `.text` | `0x33d1c0-0x33f109` | 8009 |
| `.text` | `0x4f9bd6-0x4fbb00` | 7978 |
| `.text` | `0x1acd1e-0x1aebf9` | 7899 |
| `.text` | `0x309f1d-0x30bdcd` | 7856 |
| `.text` | `0x445a67-0x4478f4` | 7821 |
| `.text` | `0x1a203d-0x1a3e94` | 7767 |
| `.text` | `0x2e119b-0x2e2fee` | 7763 |
| `.text` | `0x392bcb-0x3949d5` | 7690 |
| `.text` | `0x3902a0-0x392091` | 7665 |
| `.text` | `0x3c3ddd-0x3c5b46` | 7529 |
| `.text` | `0x3b68c9-0x3b85a9` | 7392 |
| `.text` | `0x33d64-0x35a0a` | 7334 |
| `.text` | `0x268bc2-0x26a821` | 7263 |
| `.text` | `0x46d47e-0x46f0b8` | 7226 |
| `.text` | `0x29e8bf-0x2a04ec` | 7213 |
