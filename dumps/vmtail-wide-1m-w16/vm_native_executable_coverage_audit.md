# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3225590
- uncovered executable bytes: 2425450
- recovered range rows: 39189
- uncovered gaps: 2980

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3221478 | 2425450 | 57.04% | 38929 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x361dbe-0x3650ab` | 13037 |
| `.text` | `0x3b52c9-0x3b85a9` | 13024 |
| `.text` | `0x4032d1-0x4065ad` | 13020 |
| `.text` | `0x4547e3-0x457abc` | 13017 |
| `.text` | `0x28e24c-0x2914ea` | 12958 |
| `.text` | `0x209b9e-0x20ce34` | 12950 |
| `.text` | `0x444667-0x4478f4` | 12941 |
| `.text` | `0x3b8e59-0x3bc0e4` | 12939 |
| `.text` | `0xdcdc7-0xe0017` | 12880 |
| `.text` | `0x358a45-0x35bc7b` | 12854 |
| `.text` | `0x29d2bf-0x2a04ec` | 12845 |
| `.text` | `0x1f2ae8-0x1f5d10` | 12840 |
| `.text` | `0x1ce001-0x1d1223` | 12834 |
| `.text` | `0x23a6b6-0x23d8b8` | 12802 |
| `.text` | `0x12cedc-0x1300d5` | 12793 |
| `.text` | `0x26bc24-0x26ee18` | 12788 |
| `.text` | `0x1315a5-0x134781` | 12764 |
| `.text` | `0x1c257d-0x1c5750` | 12755 |
| `.text` | `0x1169bf-0x119b8e` | 12751 |
| `.text` | `0x2990c9-0x29c26e` | 12709 |
| `.text` | `0xe1f66-0xe50f4` | 12686 |
| `.text` | `0x1bd9ce-0x1c0b59` | 12683 |
| `.text` | `0x29271f-0x29589d` | 12670 |
| `.text` | `0x3c29dd-0x3c5b46` | 12649 |
| `.text` | `0x428d17-0x42be7d` | 12646 |
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
