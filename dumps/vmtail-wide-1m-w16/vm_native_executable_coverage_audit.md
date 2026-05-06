# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5636460
- uncovered executable bytes: 14580
- recovered range rows: 86296
- uncovered gaps: 716

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5632348 | 14580 | 99.74% | 86036 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dae49-0x4dae89` | 64 |
| `.text` | `0x4dd9b9-0x4dd9f9` | 64 |
| `.text` | `0x4ddc79-0x4ddcb9` | 64 |
| `.text` | `0x4ddf39-0x4ddf79` | 64 |
| `.text` | `0x4de1f9-0x4de239` | 64 |
| `.text` | `0x4de4b9-0x4de4f9` | 64 |
| `.text` | `0x4de779-0x4de7b9` | 64 |
| `.text` | `0x4dea39-0x4dea79` | 64 |
| `.text` | `0x4e55b9-0x4e55f9` | 64 |
| `.text` | `0x4e5d59-0x4e5d99` | 64 |
| `.text` | `0x4e5db9-0x4e5df9` | 64 |
| `.text` | `0x4e5f09-0x4e5f49` | 64 |
| `.text` | `0x4e5f79-0x4e5fb9` | 64 |
| `.text` | `0x4e5fc9-0x4e6009` | 64 |
| `.text` | `0x4e6209-0x4e6249` | 64 |
| `.text` | `0x4e63b9-0x4e63f9` | 64 |
| `.text` | `0x4e6729-0x4e6769` | 64 |
| `.text` | `0x4e6799-0x4e67d9` | 64 |
| `.text` | `0x4e67e9-0x4e6829` | 64 |
| `.text` | `0x4e6849-0x4e6889` | 64 |
| `.text` | `0x4e68d9-0x4e6919` | 64 |
| `.text` | `0x4db979-0x4db9b5` | 60 |
| `.text` | `0x4e0f99-0x4e0fd5` | 60 |
| `.text` | `0x4e5a29-0x4e5a65` | 60 |
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
| `.text` | `0x4e469c-0x4e46bf` | 35 |
