# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5638341
- uncovered executable bytes: 12699
- recovered range rows: 87066
- uncovered gaps: 700

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5634229 | 12699 | 99.77% | 86806 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dcff9-0x4dd029` | 48 |
| `.text` | `0x4e4f49-0x4e4f79` | 48 |
| `.text` | `0x4e7a01-0x4e7a29` | 40 |
| `.text` | `0x4e0fb1-0x4e0fd5` | 36 |
| `.text` | `0x4e469c-0x4e46bf` | 35 |
| `.text` | `0x18de85-0x18dea5` | 32 |
| `.text` | `0x234e16-0x234e36` | 32 |
| `.text` | `0x400171-0x400191` | 32 |
| `.text` | `0x40eaa2-0x40eac2` | 32 |
| `.text` | `0x4dae19-0x4dae39` | 32 |
| `.text` | `0x4db279-0x4db299` | 32 |
| `.text` | `0x4db2b9-0x4db2d9` | 32 |
| `.text` | `0x4db529-0x4db549` | 32 |
| `.text` | `0x4dbcd9-0x4dbcf9` | 32 |
| `.text` | `0x4dbfb9-0x4dbfd9` | 32 |
| `.text` | `0x4dc239-0x4dc259` | 32 |
| `.text` | `0x4dc3f9-0x4dc419` | 32 |
| `.text` | `0x4dc629-0x4dc649` | 32 |
| `.text` | `0x4dc679-0x4dc699` | 32 |
| `.text` | `0x4dc6f9-0x4dc719` | 32 |
| `.text` | `0x4dc7c9-0x4dc7e9` | 32 |
| `.text` | `0x4dca39-0x4dca59` | 32 |
| `.text` | `0x4dcd79-0x4dcd99` | 32 |
| `.text` | `0x4dcdb9-0x4dcdd9` | 32 |
| `.text` | `0x4dcdf9-0x4dce19` | 32 |
| `.text` | `0x4dd0f9-0x4dd119` | 32 |
| `.text` | `0x4dd219-0x4dd239` | 32 |
| `.text` | `0x4dd299-0x4dd2b9` | 32 |
| `.text` | `0x4dd2f9-0x4dd319` | 32 |
| `.text` | `0x4dd339-0x4dd359` | 32 |
| `.text` | `0x4dd6d9-0x4dd6f9` | 32 |
| `.text` | `0x4dd799-0x4dd7b9` | 32 |
| `.text` | `0x4dd989-0x4dd9a9` | 32 |
| `.text` | `0x4dda39-0x4dda59` | 32 |
| `.text` | `0x4dda79-0x4dda99` | 32 |
| `.text` | `0x4ddae9-0x4ddb09` | 32 |
| `.text` | `0x4ddc49-0x4ddc69` | 32 |
| `.text` | `0x4ddcf9-0x4ddd19` | 32 |
| `.text` | `0x4ddd39-0x4ddd59` | 32 |
| `.text` | `0x4ddda9-0x4dddc9` | 32 |
