# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5615154
- uncovered executable bytes: 35886
- recovered range rows: 81924
- uncovered gaps: 1895

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5611042 | 35886 | 99.36% | 81664 |
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
| `.text` | `0x4e0299-0x4e02e9` | 80 |
| `.text` | `0x4e78d9-0x4e7929` | 80 |
| `.text` | `0x4e79d9-0x4e7a29` | 80 |
| `.text` | `0x4e8549-0x4e8599` | 80 |
| `.text` | `0x4dd519-0x4dd561` | 72 |
| `.text` | `0x5882e-0x58874` | 70 |
| `.text` | `0x67622-0x67668` | 70 |
| `.text` | `0x4e4679-0x4e46bf` | 70 |
| `.text` | `0x4e997a-0x4e99bf` | 69 |
| `.text` | `0x48ddc0-0x48de04` | 68 |
| `.text` | `0x30b29-0x30b6a` | 65 |
| `.text` | `0x3ee959-0x3ee99a` | 65 |
| `.text` | `0x56eeb8-0x56eef9` | 65 |
| `.text` | `0x56f028-0x56f069` | 65 |
| `.text` | `0x56f308-0x56f349` | 65 |
| `.text` | `0x56f778-0x56f7b9` | 65 |
| `.text` | `0xe97dc-0xe981c` | 64 |
| `.text` | `0xeb21c-0xeb25c` | 64 |
| `.text` | `0xec81c-0xec85c` | 64 |
| `.text` | `0xed15c-0xed19c` | 64 |
| `.text` | `0xed59c-0xed5dc` | 64 |
| `.text` | `0xf69dc-0xf6a1c` | 64 |
