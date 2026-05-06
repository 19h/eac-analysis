# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 627240
- uncovered executable bytes: 5023800
- recovered range rows: 5593
- uncovered gaps: 1465

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 627240 | 5019688 | 11.10% | 5593 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x24dcbc-0x286264` | 230824 |
| `.text` | `0x4519e3-0x488452` | 223855 |
| `.text` | `0x2da780-0x30d540` | 208320 |
| `.text` | `0x13010e-0x15b5b2` | 177316 |
| `.text` | `0x17c085-0x1a1fa3` | 155422 |
| `.text` | `0x3e1896-0x4065ad` | 150807 |
| `.text` | `0x374d6a-0x392b45` | 122331 |
| `.text` | `0x29c2bf-0x2b9f30` | 121969 |
| `.text` | `0x1aec5a-0x1cbf51` | 119543 |
| `.text` | `0x40c4df-0x428ce3` | 116740 |
| `.text` | `0x2316b6-0x24da7f` | 115657 |
| `.text` | `0x161eaa-0x17bf1f` | 106613 |
| `.text` | `0xe519c-0xfeebc` | 105760 |
| `.text` | `0x35148a-0x36afd2` | 105288 |
| `.text` | `0x218066-0x231586` | 103712 |
| `.text` | `0x30eabb-0x3275b6` | 101115 |
| `.text` | `0x1e16e8-0x1f5d10` | 83496 |
| `.text` | `0x1061bf-0x119b8e` | 80335 |
| `.text` | `0x3a9474-0x3bc0e4` | 76912 |
| `.text` | `0x435467-0x4478f4` | 74893 |
| `.text` | `0x1f5e08-0x20792d` | 72485 |
| `.text` | `0xcf5c7-0xe0017` | 68176 |
| `.text` | `0x4d9305-0x4e9ae0` | 67547 |
| `.text` | `0x3bc1b5-0x3cc938` | 67459 |
| `.text` | `0x1d125a-0x1e15fc` | 66466 |
| `.text` | `0x119bc1-0x126851` | 52368 |
| `.text` | `0x428d17-0x4353f8` | 50913 |
| `.text` | `0x3cc9ff-0x3d8b9b` | 49564 |
| `.text` | `0x2c7707-0x2d2cf4` | 46573 |
| `.text` | `0x20799e-0x212399` | 43515 |
| `.text` | `0x447925-0x4519a6` | 41089 |
| `.text` | `0x3431d8-0x34d253` | 41083 |
| `.text` | `0x3989b1-0x3a262e` | 40061 |
| `.text` | `0x36b11b-0x374d29` | 39950 |
| `.text` | `0x1268dc-0x1300d5` | 38905 |
| `.text` | `0x51a12b-0x522540` | 33813 |
| `.text` | `0x330223-0x337d35` | 31506 |
| `.text` | `0x2d2e69-0x2da6fc` | 30867 |
| `.text` | `0x327655-0x32e8e4` | 29327 |
| `.text` | `0xfefee-0x1060ab` | 28861 |
