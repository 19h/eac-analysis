# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5637740
- uncovered executable bytes: 13300
- recovered range rows: 86809
- uncovered gaps: 705

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5633628 | 13300 | 99.76% | 86549 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4db979-0x4db9b5` | 60 |
| `.text` | `0x4e4d31-0x4e4d69` | 56 |
| `.text` | `0x4e6bb1-0x4e6be9` | 56 |
| `.text` | `0x4e6c31-0x4e6c69` | 56 |
| `.text` | `0x4e72b1-0x4e72e9` | 56 |
| `.text` | `0x4e997a-0x4e99ad` | 51 |
| `.text` | `0x4dcff9-0x4dd029` | 48 |
| `.text` | `0x4e4f49-0x4e4f79` | 48 |
| `.text` | `0x4e6899-0x4e68c9` | 48 |
| `.text` | `0x4e7709-0x4e7739` | 48 |
| `.text` | `0x4e7ea9-0x4e7ed9` | 48 |
| `.text` | `0x4e82f9-0x4e8329` | 48 |
| `.text` | `0x4e8a09-0x4e8a39` | 48 |
| `.text` | `0x4e8af9-0x4e8b29` | 48 |
| `.text` | `0x4e92c9-0x4e92f9` | 48 |
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
