# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2705526
- uncovered executable bytes: 2945514
- recovered range rows: 32071
- uncovered gaps: 2851

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2701414 | 2945514 | 47.83% | 31811 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0xffdee-0x104c68` | 20090 |
| `.text` | `0x6c090-0x70ef4` | 20068 |
| `.text` | `0xdb1c7-0xe0017` | 20048 |
| `.text` | `0x1c7155-0x1cbf51` | 19964 |
| `.text` | `0x12b2dc-0x1300d5` | 19961 |
| `.text` | `0x345dd8-0x34abc6` | 19950 |
| `.text` | `0x353c8a-0x358a24` | 19866 |
| `.text` | `0x265ac2-0x26a821` | 19807 |
| `.text` | `0x1db85a-0x1e05a8` | 19790 |
| `.text` | `0x277e41-0x27cb8e` | 19789 |
| `.text` | `0x4774ee-0x47c22d` | 19775 |
| `.text` | `0x243a18-0x248752` | 19770 |
| `.text` | `0x3a3b39-0x3a8871` | 19768 |
| `.text` | `0x44a325-0x44f040` | 19739 |
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
