# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2559862
- uncovered executable bytes: 3091178
- recovered range rows: 30002
- uncovered gaps: 2816

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2555750 | 3091178 | 45.25% | 29742 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x2654c2-0x26a821` | 21343 |
| `.text` | `0x37536a-0x37a6c8` | 21342 |
| `.text` | `0xf9b9c-0xfeebc` | 21280 |
| `.text` | `0x3f739e-0x3fc6bc` | 21278 |
| `.text` | `0x24877d-0x24da7f` | 21250 |
| `.text` | `0x3222bb-0x3275b6` | 21243 |
| `.text` | `0x413542-0x41883d` | 21243 |
| `.text` | `0x202634-0x20792d` | 21241 |
| `.text` | `0x3c7679-0x3cc938` | 21183 |
| `.text` | `0x3ad215-0x3b24aa` | 21141 |
