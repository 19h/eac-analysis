# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2336502
- uncovered executable bytes: 3314538
- recovered range rows: 26792
- uncovered gaps: 2750

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2332390 | 3314538 | 41.30% | 26532 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x1d985a-0x1e05a8` | 27982 |
| `.text` | `0x3208bb-0x3275b6` | 27899 |
| `.text` | `0x154913-0x15b5b2` | 27807 |
| `.text` | `0x327c55-0x32e8e4` | 27791 |
| `.text` | `0x30041e-0x307093` | 27765 |
| `.text` | `0x343fd8-0x34abc6` | 27630 |
| `.text` | `0x2b3375-0x2b9f30` | 27579 |
| `.text` | `0x4756ee-0x47c22d` | 27455 |
| `.text` | `0x22aa66-0x231586` | 27424 |
| `.text` | `0x3ffad1-0x4065ad` | 27356 |
| `.text` | `0x3cdfff-0x3d4a95` | 27286 |
| `.text` | `0x3aba15-0x3b24aa` | 27285 |
| `.text` | `0x1ef2e8-0x1f5d10` | 27176 |
| `.text` | `0x236eb6-0x23d8b8` | 27138 |
| `.text` | `0x1296dc-0x1300d5` | 27129 |
| `.text` | `0x1ba1ce-0x1c0b59` | 27019 |
| `.text` | `0x19b685-0x1a1fa3` | 26910 |
| `.text` | `0x3e8096-0x3ee99a` | 26884 |
| `.text` | `0x201034-0x20792d` | 26873 |
| `.text` | `0x2862cb-0x28cb6f` | 26788 |
| `.text` | `0xd97c7-0xe0017` | 26704 |
| `.text` | `0x24e2bc-0x254abd` | 26625 |
| `.text` | `0x1c5755-0x1cbf51` | 26620 |
| `.text` | `0x51b9c0-0x522120` | 26464 |
| `.text` | `0x2640c2-0x26a821` | 26463 |
| `.text` | `0x242018-0x248752` | 26426 |
| `.text` | `0xf879c-0xfeebc` | 26400 |
| `.text` | `0x448925-0x44f040` | 26395 |
| `.text` | `0x120146-0x126851` | 26379 |
| `.text` | `0x42261f-0x428ce3` | 26308 |
| `.text` | `0x1758aa-0x17bf1f` | 26229 |
| `.text` | `0x36e71b-0x374d29` | 26126 |
| `.text` | `0x2cc707-0x2d2cf4` | 26093 |
| `.text` | `0x1135bf-0x119b8e` | 26063 |
| `.text` | `0x42ee93-0x4353f8` | 25957 |
| `.text` | `0x276641-0x27cb8e` | 25933 |
| `.text` | `0x3f619e-0x3fc6bc` | 25886 |
| `.text` | `0x412342-0x41883d` | 25851 |
| `.text` | `0x3863a8-0x38c897` | 25839 |
| `.text` | `0x441467-0x4478f4` | 25741 |
