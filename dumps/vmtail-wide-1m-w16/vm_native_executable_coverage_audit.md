# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2437622
- uncovered executable bytes: 3213418
- recovered range rows: 28266
- uncovered gaps: 2775

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2433510 | 3213418 | 43.09% | 28006 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x3212bb-0x3275b6` | 25339 |
| `.text` | `0x201634-0x20792d` | 25337 |
| `.text` | `0x330223-0x3364f8` | 25301 |
| `.text` | `0x155313-0x15b5b2` | 25247 |
| `.text` | `0x441667-0x4478f4` | 25229 |
| `.text` | `0xd9dc7-0xe0017` | 25168 |
| `.text` | `0x1c5d55-0x1cbf51` | 25084 |
| `.text` | `0x2b3d75-0x2b9f30` | 25019 |
| `.text` | `0x3a2739-0x3a8871` | 24888 |
| `.text` | `0x19be85-0x1a1fa3` | 24862 |
| `.text` | `0x4004d1-0x4065ad` | 24796 |
| `.text` | `0x4519e3-0x457abc` | 24793 |
| `.text` | `0x1347a4-0x13a7f8` | 24660 |
| `.text` | `0x1efce8-0x1f5d10` | 24616 |
| `.text` | `0x36ed1b-0x374d29` | 24590 |
| `.text` | `0x2378b6-0x23d8b8` | 24578 |
| `.text` | `0x12a0dc-0x1300d5` | 24569 |
| `.text` | `0x113bbf-0x119b8e` | 24527 |
| `.text` | `0x51c1c0-0x522120` | 24416 |
| `.text` | `0x4762ee-0x47c22d` | 24383 |
| `.text` | `0x242818-0x248752` | 24378 |
| `.text` | `0x22b666-0x231586` | 24352 |
| `.text` | `0x3e8a96-0x3ee99a` | 24324 |
| `.text` | `0x286ccb-0x28cb6f` | 24228 |
| `.text` | `0x4065e5-0x40c488` | 24227 |
| `.text` | `0x3cebff-0x3d4a95` | 24214 |
| `.text` | `0x328a55-0x32e8e4` | 24207 |
| `.text` | `0x24ecbc-0x254abd` | 24065 |
| `.text` | `0x352c8a-0x358a24` | 23962 |
| `.text` | `0x264ac2-0x26a821` | 23903 |
| `.text` | `0x1da85a-0x1e05a8` | 23886 |
| `.text` | `0xf919c-0xfeebc` | 23840 |
| `.text` | `0x449325-0x44f040` | 23835 |
| `.text` | `0x42301f-0x428ce3` | 23748 |
| `.text` | `0x3ac815-0x3b24aa` | 23701 |
| `.text` | `0xfefee-0x104c68` | 23674 |
| `.text` | `0x1762aa-0x17bf1f` | 23669 |
| `.text` | `0x344fd8-0x34abc6` | 23534 |
| `.text` | `0x2cd107-0x2d2cf4` | 23533 |
| `.text` | `0x42f893-0x4353f8` | 23397 |
