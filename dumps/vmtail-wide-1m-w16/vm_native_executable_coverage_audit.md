# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5613238
- uncovered executable bytes: 37802
- recovered range rows: 81767
- uncovered gaps: 1899

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5609126 | 37802 | 99.33% | 81507 |
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
| `.text` | `0x1178df-0x11793f` | 96 |
| `.text` | `0x1fc434-0x1fc494` | 96 |
| `.text` | `0x1fc834-0x1fc894` | 96 |
| `.text` | `0x1fc8f4-0x1fc954` | 96 |
| `.text` | `0x347f38-0x347f98` | 96 |
| `.text` | `0x347ff8-0x348058` | 96 |
| `.text` | `0x3a2e59-0x3a2eb9` | 96 |
| `.text` | `0x3e3516-0x3e3576` | 96 |
| `.text` | `0x3efbfe-0x3efc5e` | 96 |
| `.text` | `0x47954e-0x4795ae` | 96 |
| `.text` | `0x4e8a59-0x4e8ab9` | 96 |
| `.text` | `0x6af3e-0x6af9a` | 92 |
| `.text` | `0x4e9a86-0x4e9ae0` | 90 |
| `.text` | `0x373a1-0x373f8` | 87 |
| `.text` | `0x6b43e-0x6b492` | 84 |
| `.text` | `0x50294e-0x5029a0` | 82 |
| `.text` | `0x4db309-0x4db359` | 80 |
| `.text` | `0x4db579-0x4db5c9` | 80 |
| `.text` | `0x4db7f9-0x4db849` | 80 |
| `.text` | `0x4dc269-0x4dc2b9` | 80 |
| `.text` | `0x4dc539-0x4dc589` | 80 |
| `.text` | `0x4e0299-0x4e02e9` | 80 |
