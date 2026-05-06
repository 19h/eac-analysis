# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 646159
- uncovered executable bytes: 5004881
- recovered range rows: 6873
- uncovered gaps: 1927

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 646159 | 5000769 | 11.44% | 6873 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x1347a4-0x15b5b2` | 159246 |
| `.text` | `0x17c085-0x1a1fa3` | 155422 |
| `.text` | `0x2e301e-0x307093` | 147573 |
| `.text` | `0x24dcbc-0x26ee18` | 135516 |
| `.text` | `0x3e1896-0x3fc6bc` | 110118 |
| `.text` | `0x40e542-0x428ce3` | 108449 |
| `.text` | `0x161eaa-0x17bf1f` | 106613 |
| `.text` | `0xe519c-0xfeebc` | 105760 |
| `.text` | `0x218066-0x231586` | 103712 |
| `.text` | `0x30eabb-0x3275b6` | 101115 |
| `.text` | `0x26ee41-0x28494c` | 88843 |
| `.text` | `0x46f0cb-0x484a4f` | 88452 |
| `.text` | `0x2a46b1-0x2b9f30` | 88191 |
| `.text` | `0x1e16e8-0x1f5d10` | 83496 |
| `.text` | `0x458234-0x46c45b` | 82471 |
| `.text` | `0x1061bf-0x119b8e` | 80335 |
| `.text` | `0x3a9474-0x3bc0e4` | 76912 |
| `.text` | `0x435467-0x4478f4` | 74893 |
| `.text` | `0x1f5e08-0x20792d` | 72485 |
| `.text` | `0x374d6a-0x386394` | 71210 |
| `.text` | `0xcf5c7-0xe0017` | 68176 |
| `.text` | `0x1d125a-0x1e15fc` | 66466 |
| `.text` | `0x1b07ce-0x1c0b59` | 66443 |
| `.text` | `0x2316b6-0x240a05` | 62287 |
| `.text` | `0x4dadf9-0x4e9ae0` | 60647 |
| `.text` | `0x3863a8-0x392b45` | 51101 |
| `.text` | `0x2c7707-0x2d2cf4` | 46573 |
| `.text` | `0x1c0b7d-0x1cbf51` | 46036 |
| `.text` | `0x20799e-0x212399` | 43515 |
| `.text` | `0x11c546-0x126851` | 41739 |
| `.text` | `0x447925-0x4519a6` | 41089 |
| `.text` | `0x3fc6d1-0x4065ad` | 40668 |
| `.text` | `0x3989b1-0x3a262e` | 40061 |
| `.text` | `0x36b11b-0x374d29` | 39950 |
| `.text` | `0x35ea21-0x368588` | 39783 |
| `.text` | `0x1268dc-0x1300d5` | 38905 |
| `.text` | `0x42be93-0x4353f8` | 38245 |
| `.text` | `0x3cc9ff-0x3d4a95` | 32918 |
| `.text` | `0x240a18-0x248752` | 32058 |
| `.text` | `0x3431d8-0x34abc6` | 31214 |
