# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3766134
- uncovered executable bytes: 1884906
- recovered range rows: 47066
- uncovered gaps: 3126

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3762022 | 1884906 | 66.62% | 46806 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x341473-0x343193` | 7456 |
| `.text` | `0x3b68c9-0x3b85a9` | 7392 |
| `.text` | `0x33d64-0x35a0a` | 7334 |
| `.text` | `0x28aecb-0x28cb6f` | 7332 |
| `.text` | `0x268bc2-0x26a821` | 7263 |
| `.text` | `0x46d47e-0x46f0b8` | 7226 |
| `.text` | `0x29e8bf-0x2a04ec` | 7213 |
| `.text` | `0x1cf601-0x1d1223` | 7202 |
| `.text` | `0x37311b-0x374d29` | 7182 |
| `.text` | `0x5746cd-0x5762d0` | 7171 |
| `.text` | `0x3bedb5-0x3c09b1` | 7164 |
| `.text` | `0x20de40-0x20fa39` | 7161 |
| `.text` | `0x2d1107-0x2d2cf4` | 7149 |
| `.text` | `0x481e30-0x483a1a` | 7146 |
| `.text` | `0x132ba5-0x134781` | 7132 |
| `.text` | `0x117fbf-0x119b8e` | 7119 |
| `.text` | `0x485662-0x487214` | 7090 |
| `.text` | `0x3dbfb9-0x3ddb5d` | 7076 |
| `.text` | `0x3d2eff-0x3d4a95` | 7062 |
| `.text` | `0x35ce8a-0x35ea08` | 7038 |
| `.text` | `0x4bd57b-0x4bf0f0` | 7029 |
| `.text` | `0x533aac-0x535610` | 7012 |
