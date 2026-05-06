# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5621400
- uncovered executable bytes: 29640
- recovered range rows: 82491
- uncovered gaps: 1853

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5617288 | 29640 | 99.47% | 82231 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4e4d89-0x4e4ea9` | 288 |
| `.text` | `0x4e5e39-0x4e5ed9` | 160 |
| `.text` | `0x4e74f9-0x4e7595` | 156 |
| `.text` | `0x4e8e19-0x4e8eb1` | 152 |
| `.text` | `0x4e5759-0x4e57e9` | 144 |
| `.text` | `0x4e7ef9-0x4e7f89` | 144 |
| `.text` | `0x4e91f9-0x4e9289` | 144 |
| `.text` | `0x4e4c39-0x4e4cc5` | 140 |
| `.text` | `0x4e5bf9-0x4e5c85` | 140 |
| `.text` | `0x4dc819-0x4dc899` | 128 |
| `.text` | `0x4e4899-0x4e4919` | 128 |
| `.text` | `0x4e4ef9-0x4e4f79` | 128 |
| `.text` | `0x4e53f9-0x4e5479` | 128 |
| `.text` | `0x4e5639-0x4e56b9` | 128 |
| `.text` | `0x4e60f9-0x4e6179` | 128 |
| `.text` | `0x4e7d79-0x4e7df9` | 128 |
| `.text` | `0x4e83b9-0x4e8439` | 128 |
| `.text` | `0x4e8b49-0x4e8bc9` | 128 |
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
| `.text` | `0x4e72a9-0x4e72e9` | 64 |
