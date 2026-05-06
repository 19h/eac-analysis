# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 561957
- uncovered executable bytes: 5089083
- recovered range rows: 3995
- uncovered gaps: 850

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 561957 | 5084971 | 9.95% | 3995 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x3ddc80-0x488452` | 698322 |
| `.text` | `0x24db08-0x28cb6f` | 258151 |
| `.text` | `0x1268dc-0x15b5b2` | 216278 |
| `.text` | `0x2da780-0x30d540` | 208320 |
| `.text` | `0x2962a8-0x2c342b` | 184707 |
| `.text` | `0x36b11b-0x392b45` | 162346 |
| `.text` | `0x17c085-0x1a1fa3` | 155422 |
| `.text` | `0x1a80bb-0x1cbf51` | 147094 |
| `.text` | `0x1061bf-0x126851` | 132754 |
| `.text` | `0x1f5e08-0x212399` | 116113 |
| `.text` | `0x2316b6-0x24da7f` | 115657 |
| `.text` | `0x161eaa-0x17bf1f` | 106613 |
| `.text` | `0x30d658-0x3275b6` | 106334 |
| `.text` | `0xe519c-0xfeebc` | 105760 |
| `.text` | `0x35148a-0x36afd2` | 105288 |
| `.text` | `0x3a2739-0x3bc0e4` | 104875 |
| `.text` | `0x218066-0x231586` | 103712 |
| `.text` | `0x1cc001-0x1e15fc` | 87547 |
| `.text` | `0x1e16e8-0x1f5d10` | 83496 |
| `.text` | `0x33f273-0x3513ff` | 74124 |
| `.text` | `0x3cc9ff-0x3ddb5d` | 69982 |
| `.text` | `0xcf5c7-0xe0017` | 68176 |
| `.text` | `0x4d918b-0x4e9ae0` | 67925 |
| `.text` | `0x3bc1b5-0x3cc938` | 67459 |
| `.text` | `0x392bcb-0x3a262e` | 64099 |
| `.text` | `0x2c7707-0x2d2cf4` | 46573 |
| `.text` | `0x28cc4c-0x2961e3` | 38295 |
| `.text` | `0x519847-0x522540` | 36089 |
| `.text` | `0x327655-0x330190` | 35643 |
| `.text` | `0x330223-0x337d35` | 31506 |
| `.text` | `0x2d2e69-0x2da6fc` | 30867 |
| `.text` | `0xfefee-0x1060ab` | 28861 |
| `.text` | `0x15b6f2-0x161df6` | 26372 |
| `.text` | `0x212547-0x217fac` | 23141 |
| `.text` | `0x6c090-0x713da` | 21322 |
| `.text` | `0xe0166-0xe50f4` | 20366 |
| `.text` | `0x530e56-0x535930` | 19162 |
| `.text` | `0x4a48e0-0x4a8c40` | 17248 |
| `.text` | `0x4ea2d5-0x4ee130` | 15963 |
| `.text` | `0x33b642-0x33f109` | 15047 |
