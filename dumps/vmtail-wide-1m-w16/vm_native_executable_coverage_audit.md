# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3273462
- uncovered executable bytes: 2377578
- recovered range rows: 40022
- uncovered gaps: 2992

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3269350 | 2377578 | 57.89% | 39762 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x1dd45a-0x1e05a8` | 12622 |
| `.text` | `0x3f959e-0x3fc6bc` | 12574 |
| `.text` | `0x24a97d-0x24da7f` | 12546 |
| `.text` | `0x3244bb-0x3275b6` | 12539 |
| `.text` | `0x425c1f-0x428ce3` | 12484 |
| `.text` | `0x34d285-0x35033a` | 12469 |
| `.text` | `0x13d668-0x140711` | 12457 |
| `.text` | `0x158513-0x15b5b2` | 12447 |
| `.text` | `0x178eaa-0x17bf1f` | 12405 |
| `.text` | `0x1377a4-0x13a7f8` | 12372 |
| `.text` | `0x2c0400-0x2c342b` | 12331 |
| `.text` | `0x469434-0x46c45b` | 12327 |
| `.text` | `0x251abc-0x254abd` | 12289 |
| `.text` | `0x4e19f9-0x4e49f9` | 12288 |
| `.text` | `0x1c8f55-0x1cbf51` | 12284 |
| `.text` | `0x347bd8-0x34abc6` | 12270 |
| `.text` | `0x2cfd07-0x2d2cf4` | 12269 |
| `.text` | `0x4e6af9-0x4e9ae0` | 12263 |
| `.text` | `0x3de880-0x3e185b` | 12251 |
| `.text` | `0x215033-0x217fac` | 12153 |
| `.text` | `0x2a1719-0x2a468f` | 12150 |
| `.text` | `0x383430-0x386394` | 12132 |
| `.text` | `0x37776a-0x37a6c8` | 12126 |
| `.text` | `0x279c41-0x27cb8e` | 12109 |
| `.text` | `0x3a5939-0x3a8871` | 12088 |
| `.text` | `0x22e666-0x231586` | 12064 |
| `.text` | `0x340273-0x343193` | 12064 |
| `.text` | `0x44c125-0x44f040` | 12059 |
| `.text` | `0x415942-0x41883d` | 12027 |
| `.text` | `0x3899a8-0x38c897` | 12015 |
| `.text` | `0x3c9a79-0x3cc938` | 11967 |
| `.text` | `0x289ccb-0x28cb6f` | 11940 |
| `.text` | `0x28e64c-0x2914ea` | 11934 |
| `.text` | `0x32ba55-0x32e8e4` | 11919 |
| `.text` | `0x101dee-0x104c68` | 11898 |
| `.text` | `0x2de30e-0x2e117a` | 11884 |
| `.text` | `0x2bb7a9-0x2be60e` | 11877 |
| `.text` | `0x6e090-0x70ef4` | 11876 |
| `.text` | `0x2b7175-0x2b9f30` | 11707 |
| `.text` | `0x355c8a-0x358a24` | 11674 |
