# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2820854
- uncovered executable bytes: 2830186
- recovered range rows: 33694
- uncovered gaps: 2877

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2816742 | 2830186 | 49.88% | 33434 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x4020d1-0x4065ad` | 17628 |
| `.text` | `0x4535e3-0x457abc` | 17625 |
| `.text` | `0x13c268-0x140711` | 17577 |
| `.text` | `0x20899e-0x20ce34` | 17558 |
| `.text` | `0x1007ee-0x104c68` | 17530 |
| `.text` | `0x177aaa-0x17bf1f` | 17525 |
| `.text` | `0xdbbc7-0xe0017` | 17488 |
| `.text` | `0x12bcdc-0x1300d5` | 17401 |
| `.text` | `0x38dca0-0x392091` | 17393 |
| `.text` | `0x3467d8-0x34abc6` | 17390 |
| `.text` | `0x35468a-0x358a24` | 17306 |
| `.text` | `0x418840-0x41cbc6` | 17286 |
| `.text` | `0x29151f-0x29589d` | 17278 |
| `.text` | `0x431093-0x4353f8` | 17253 |
| `.text` | `0x1dc25a-0x1e05a8` | 17230 |
| `.text` | `0x278841-0x27cb8e` | 17229 |
