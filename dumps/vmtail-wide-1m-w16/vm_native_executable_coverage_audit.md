# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2516854
- uncovered executable bytes: 3134186
- recovered range rows: 29426
- uncovered gaps: 2801

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2512742 | 3134186 | 44.49% | 29166 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x120d46-0x126851` | 23307 |
| `.text` | `0x412d42-0x41883d` | 23291 |
| `.text` | `0x386da8-0x38c897` | 23279 |
| `.text` | `0x35f5be-0x3650ab` | 23277 |
| `.text` | `0x2870cb-0x28cb6f` | 23204 |
| `.text` | `0x155b13-0x15b5b2` | 23199 |
| `.text` | `0x30161e-0x307093` | 23157 |
| `.text` | `0x2db70e-0x2e117a` | 23148 |
| `.text` | `0x380930-0x386394` | 23140 |
| `.text` | `0x466a34-0x46c45b` | 23079 |
| `.text` | `0x36f31b-0x374d29` | 23054 |
| `.text` | `0x4deff9-0x4e49f9` | 23040 |
| `.text` | `0x2cd307-0x2d2cf4` | 23021 |
| `.text` | `0x47e030-0x483a1a` | 23018 |
| `.text` | `0x2b4575-0x2b9f30` | 22971 |
| `.text` | `0x1bb1ce-0x1c0b59` | 22923 |
| `.text` | `0x374d6a-0x37a6c8` | 22878 |
| `.text` | `0x22bc66-0x231586` | 22816 |
| `.text` | `0x19c685-0x1a1fa3` | 22814 |
| `.text` | `0x3f6d9e-0x3fc6bc` | 22814 |
| `.text` | `0x321cbb-0x3275b6` | 22779 |
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
