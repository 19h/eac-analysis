# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2309878
- uncovered executable bytes: 3341162
- recovered range rows: 26401
- uncovered gaps: 2737

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2305766 | 3341162 | 40.83% | 26141 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x42e493-0x4353f8` | 28517 |
| `.text` | `0x275c41-0x27cb8e` | 28493 |
| `.text` | `0x241818-0x248752` | 28474 |
| `.text` | `0x3f579e-0x3fc6bc` | 28446 |
| `.text` | `0x411942-0x41883d` | 28411 |
| `.text` | `0x440a67-0x4478f4` | 28301 |
| `.text` | `0x37f530-0x386394` | 28260 |
| `.text` | `0xd91c7-0xe0017` | 28240 |
| `.text` | `0x465634-0x46c45b` | 28199 |
| `.text` | `0x24dcbc-0x254abd` | 28161 |
| `.text` | `0x47cc30-0x483a1a` | 28138 |
| `.text` | `0x112dbf-0x119b8e` | 28111 |
| `.text` | `0x351c8a-0x358a24` | 28058 |
| `.text` | `0x263ac2-0x26a821` | 27999 |
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
| `.text` | `0x1c5755-0x1cbf51` | 26620 |
| `.text` | `0x51b9c0-0x522120` | 26464 |
| `.text` | `0xf879c-0xfeebc` | 26400 |
| `.text` | `0x448925-0x44f040` | 26395 |
| `.text` | `0x120146-0x126851` | 26379 |
| `.text` | `0x42261f-0x428ce3` | 26308 |
