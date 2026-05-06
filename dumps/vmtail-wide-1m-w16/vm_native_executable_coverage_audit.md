# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 523254
- uncovered executable bytes: 5127786
- recovered range rows: 3459
- uncovered gaps: 635

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 523254 | 5123674 | 9.26% | 3459 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x3ddc80-0x4885ae` | 698670 |
| `.text` | `0x2316b6-0x28cb6f` | 373945 |
| `.text` | `0x1061bf-0x15b5b2` | 349171 |
| `.text` | `0x2962a8-0x2d2cf4` | 248396 |
| `.text` | `0x2d2e69-0x30d540` | 239319 |
| `.text` | `0x1a80bb-0x1e15fc` | 234817 |
| `.text` | `0x36b11b-0x3a262e` | 226579 |
| `.text` | `0x33f273-0x36afd2` | 179551 |
| `.text` | `0x30d658-0x337d35` | 173789 |
| `.text` | `0x17c085-0x1a3e94` | 163343 |
| `.text` | `0xe0166-0xfeebc` | 126294 |
| `.text` | `0x1f5e08-0x212399` | 116113 |
| `.text` | `0x161eaa-0x17bf1f` | 106613 |
| `.text` | `0x3a2739-0x3bc0e4` | 104875 |
| `.text` | `0x218066-0x231586` | 103712 |
| `.text` | `0x1e16e8-0x1f5d10` | 83496 |
| `.text` | `0x3cc9ff-0x3ddb5d` | 69982 |
| `.text` | `0xcf5c7-0xe0017` | 68176 |
| `.text` | `0x4d918b-0x4e9ae0` | 67925 |
| `.text` | `0x3bc1b5-0x3cc938` | 67459 |
| `.text` | `0x28cc4c-0x2961e3` | 38295 |
| `.text` | `0x519847-0x522540` | 36089 |
| `.text` | `0xfefee-0x1060ab` | 28861 |
| `.text` | `0x15b6f2-0x161df6` | 26372 |
| `.text` | `0x542916-0x5484b0` | 23450 |
| `.text` | `0x212547-0x217fac` | 23141 |
| `.text` | `0x57d6e5-0x582a30` | 21323 |
| `.text` | `0x6c090-0x713da` | 21322 |
| `.text` | `0x49ecb9-0x4a3b70` | 20151 |
| `.text` | `0x530e56-0x535930` | 19162 |
| `.text` | `0x5149d8-0x519050` | 18040 |
| `.text` | `0x4f74e2-0x4fbb00` | 17950 |
| `.text` | `0x4d486e-0x4d8cc0` | 17490 |
| `.text` | `0x4a48e0-0x4a8c40` | 17248 |
| `.text` | `0x55ee32-0x5630c0` | 17038 |
| `.text` | `0x1a3fa9-0x1a7ffe` | 16469 |
| `.text` | `0x4ea2d5-0x4ee130` | 15963 |
| `.text` | `0x33b642-0x33f109` | 15047 |
| `.text` | `0x56c0f5-0x56fab0` | 14779 |
| `.text` | `0x63514-0x66ea2` | 14734 |
