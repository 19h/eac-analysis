# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3461878
- uncovered executable bytes: 2189162
- recovered range rows: 42622
- uncovered gaps: 3036

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3457766 | 2189162 | 61.23% | 42362 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x30461e-0x307093` | 10869 |
| `.text` | `0x2bbba9-0x2be60e` | 10853 |
| `.text` | `0x137da4-0x13a7f8` | 10836 |
| `.text` | `0x36859e-0x36afd2` | 10804 |
| `.text` | `0x1a80bb-0x1aaadd` | 10786 |
| `.text` | `0x1f760a-0x1fa01f` | 10773 |
| `.text` | `0x3bdfb5-0x3c09b1` | 10748 |
| `.text` | `0x12d6dc-0x1300d5` | 10745 |
| `.text` | `0x2998c9-0x29c26e` | 10661 |
| `.text` | `0x395fe1-0x398978` | 10647 |
| `.text` | `0xe2766-0xe50f4` | 10638 |
| `.text` | `0x33887b-0x33b1f2` | 10615 |
| `.text` | `0x119bc1-0x11c52d` | 10604 |
| `.text` | `0x429517-0x42be7d` | 10598 |
| `.text` | `0x383a30-0x386394` | 10596 |
| `.text` | `0x267ec2-0x26a821` | 10591 |
| `.text` | `0x20fa42-0x212399` | 10583 |
| `.text` | `0x27a241-0x27cb8e` | 10573 |
| `.text` | `0x1a56bb-0x1a7ffe` | 10563 |
| `.text` | `0x340873-0x343193` | 10528 |
| `.text` | `0x44c725-0x44f040` | 10523 |
| `.text` | `0x123f46-0x126851` | 10507 |
| `.text` | `0x15c8ec-0x15f1f0` | 10500 |
| `.text` | `0x324cbb-0x3275b6` | 10491 |
| `.text` | `0x3627be-0x3650ab` | 10477 |
| `.text` | `0x3b5cc9-0x3b85a9` | 10464 |
| `.text` | `0x403cd1-0x4065ad` | 10460 |
| `.text` | `0x4551e3-0x457abc` | 10457 |
| `.text` | `0x28a2cb-0x28cb6f` | 10404 |
| `.text` | `0x20a59e-0x20ce34` | 10390 |
| `.text` | `0x32c055-0x32e8e4` | 10383 |
| `.text` | `0x445067-0x4478f4` | 10381 |
| `.text` | `0x3b9859-0x3bc0e4` | 10379 |
| `.text` | `0x2de90e-0x2e117a` | 10348 |
| `.text` | `0x359445-0x35bc7b` | 10294 |
| `.text` | `0x1f34e8-0x1f5d10` | 10280 |
| `.text` | `0x23b0b6-0x23d8b8` | 10242 |
| `.text` | `0x26c624-0x26ee18` | 10228 |
| `.text` | `0x1c2f7d-0x1c5750` | 10195 |
| `.text` | `0x484a62-0x487214` | 10162 |
