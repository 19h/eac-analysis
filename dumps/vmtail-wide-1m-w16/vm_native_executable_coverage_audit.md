# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3254006
- uncovered executable bytes: 2397034
- recovered range rows: 39728
- uncovered gaps: 2987

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3249894 | 2397034 | 57.55% | 39468 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
