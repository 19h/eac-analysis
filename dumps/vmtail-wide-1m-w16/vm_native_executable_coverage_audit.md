# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2384630
- uncovered executable bytes: 3266410
- recovered range rows: 27553
- uncovered gaps: 2764

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2380518 | 3266410 | 42.15% | 27293 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0xf879c-0xfeebc` | 26400 |
| `.text` | `0x448925-0x44f040` | 26395 |
| `.text` | `0x120146-0x126851` | 26379 |
| `.text` | `0x42261f-0x428ce3` | 26308 |
| `.text` | `0x328255-0x32e8e4` | 26255 |
| `.text` | `0x1758aa-0x17bf1f` | 26229 |
| `.text` | `0x36e71b-0x374d29` | 26126 |
| `.text` | `0x2cc707-0x2d2cf4` | 26093 |
| `.text` | `0x1135bf-0x119b8e` | 26063 |
| `.text` | `0x42ee93-0x4353f8` | 25957 |
| `.text` | `0x51bbc0-0x522120` | 25952 |
| `.text` | `0x276641-0x27cb8e` | 25933 |
| `.text` | `0x475cee-0x47c22d` | 25919 |
| `.text` | `0x3f619e-0x3fc6bc` | 25886 |
| `.text` | `0x412342-0x41883d` | 25851 |
| `.text` | `0x3863a8-0x38c897` | 25839 |
| `.text` | `0x3ce5ff-0x3d4a95` | 25750 |
| `.text` | `0x3ac015-0x3b24aa` | 25749 |
| `.text` | `0x441467-0x4478f4` | 25741 |
| `.text` | `0x300c1e-0x307093` | 25717 |
| `.text` | `0x37ff30-0x386394` | 25700 |
| `.text` | `0x466034-0x46c45b` | 25639 |
| `.text` | `0x3447d8-0x34abc6` | 25582 |
| `.text` | `0x47d630-0x483a1a` | 25578 |
| `.text` | `0x35268a-0x358a24` | 25498 |
| `.text` | `0x1ba7ce-0x1c0b59` | 25483 |
| `.text` | `0x1da25a-0x1e05a8` | 25422 |
| `.text` | `0x3212bb-0x3275b6` | 25339 |
| `.text` | `0x201634-0x20792d` | 25337 |
| `.text` | `0x330223-0x3364f8` | 25301 |
| `.text` | `0x155313-0x15b5b2` | 25247 |
| `.text` | `0xd9dc7-0xe0017` | 25168 |
| `.text` | `0x1c5d55-0x1cbf51` | 25084 |
| `.text` | `0x2b3d75-0x2b9f30` | 25019 |
| `.text` | `0x3a2739-0x3a8871` | 24888 |
| `.text` | `0x19be85-0x1a1fa3` | 24862 |
| `.text` | `0x4004d1-0x4065ad` | 24796 |
| `.text` | `0x4519e3-0x457abc` | 24793 |
| `.text` | `0x1347a4-0x13a7f8` | 24660 |
| `.text` | `0x1efce8-0x1f5d10` | 24616 |
