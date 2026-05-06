# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2539894
- uncovered executable bytes: 3111146
- recovered range rows: 29712
- uncovered gaps: 2810

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2535782 | 3111146 | 44.90% | 29452 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x47e030-0x483a1a` | 23018 |
| `.text` | `0x2b4575-0x2b9f30` | 22971 |
| `.text` | `0x1bb1ce-0x1c0b59` | 22923 |
| `.text` | `0x374d6a-0x37a6c8` | 22878 |
| `.text` | `0x22bc66-0x231586` | 22816 |
| `.text` | `0x19c685-0x1a1fa3` | 22814 |
| `.text` | `0x3f6d9e-0x3fc6bc` | 22814 |
| `.text` | `0x321cbb-0x3275b6` | 22779 |
| `.text` | `0x386fa8-0x38c897` | 22767 |
| `.text` | `0x4521e3-0x457abc` | 22745 |
| `.text` | `0x330c23-0x3364f8` | 22741 |
| `.text` | `0x3cf1ff-0x3d4a95` | 22678 |
| `.text` | `0x442067-0x4478f4` | 22669 |
| `.text` | `0x134fa4-0x13a7f8` | 22612 |
| `.text` | `0xda7c7-0xe0017` | 22608 |
| `.text` | `0x1c6755-0x1cbf51` | 22524 |
| `.text` | `0x12a8dc-0x1300d5` | 22521 |
| `.text` | `0x38c8a0-0x392091` | 22513 |
| `.text` | `0x35328a-0x358a24` | 22426 |
| `.text` | `0x1dae5a-0x1e05a8` | 22350 |
| `.text` | `0x476aee-0x47c22d` | 22335 |
| `.text` | `0x3a3139-0x3a8871` | 22328 |
| `.text` | `0x449925-0x44f040` | 22299 |
| `.text` | `0x400ed1-0x4065ad` | 22236 |
| `.text` | `0x42361f-0x428ce3` | 22212 |
| `.text` | `0x27f2ee-0x28494c` | 22110 |
| `.text` | `0x1f06e8-0x1f5d10` | 22056 |
| `.text` | `0x3455d8-0x34abc6` | 21998 |
| `.text` | `0x1145bf-0x119b8e` | 21967 |
| `.text` | `0x51cbc0-0x522120` | 21856 |
| `.text` | `0x277641-0x27cb8e` | 21837 |
| `.text` | `0x243218-0x248752` | 21818 |
| `.text` | `0x3e9496-0x3ee99a` | 21764 |
| `.text` | `0x2876cb-0x28cb6f` | 21668 |
| `.text` | `0x406fe5-0x40c488` | 21667 |
| `.text` | `0x20799e-0x20ce34` | 21654 |
| `.text` | `0x329455-0x32e8e4` | 21647 |
| `.text` | `0xff7ee-0x104c68` | 21626 |
| `.text` | `0x2384b6-0x23d8b8` | 21506 |
| `.text` | `0x24f6bc-0x254abd` | 21505 |
