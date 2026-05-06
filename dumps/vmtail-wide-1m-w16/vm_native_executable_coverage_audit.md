# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3412982
- uncovered executable bytes: 2238058
- recovered range rows: 42040
- uncovered gaps: 3030

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3408870 | 2238058 | 60.36% | 41780 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x2dcf3-0x307d0` | 10973 |
| `.text` | `0x365ab6-0x368588` | 10962 |
| `.text` | `0x3afa15-0x3b24aa` | 10901 |
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
