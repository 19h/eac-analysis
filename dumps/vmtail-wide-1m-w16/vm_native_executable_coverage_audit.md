# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5649233
- uncovered executable bytes: 1807
- recovered range rows: 91198
- uncovered gaps: 219

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5645121 | 1807 | 99.96% | 90938 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x30b29-0x30b39` | 16 |
| `.text` | `0x4afc7c-0x4afc8b` | 15 |
| `.text` | `0x4e8d5d-0x4e8d6c` | 15 |
| `.text` | `0x4e8d8a-0x4e8d99` | 15 |
| `.text` | `0x4fbf14-0x4fbf23` | 15 |
| `.text` | `0x4e0cef-0x4e0cfd` | 14 |
| `.text` | `0x4e4939-0x4e4947` | 14 |
| `.text` | `0x4e75a3-0x4e75b1` | 14 |
| `.text` | `0x4ef2c3-0x4ef2d1` | 14 |
| `.text` | `0x58cb1-0x58cbe` | 13 |
| `.text` | `0x4af877-0x4af884` | 13 |
| `.text` | `0x4af8c3-0x4af8d0` | 13 |
| `.text` | `0x4e3d75-0x4e3d82` | 13 |
| `.text` | `0x4e98ca-0x4e98d7` | 13 |
| `.text` | `0x1fc470-0x1fc47c` | 12 |
| `.text` | `0x1fc864-0x1fc870` | 12 |
| `.text` | `0x1fc948-0x1fc954` | 12 |
| `.text` | `0x347f50-0x347f5c` | 12 |
| `.text` | `0x348028-0x348034` | 12 |
| `.text` | `0x3a2e95-0x3a2ea1` | 12 |
| `.text` | `0x3e3552-0x3e355e` | 12 |
| `.text` | `0x3efc46-0x3efc52` | 12 |
| `.text` | `0x4db649-0x4db655` | 12 |
| `.text` | `0x4db739-0x4db745` | 12 |
| `.text` | `0x4dbe61-0x4dbe6d` | 12 |
| `.text` | `0x4dd605-0x4dd611` | 12 |
| `.text` | `0x4dd919-0x4dd925` | 12 |
| `.text` | `0x4ddbd9-0x4ddbe5` | 12 |
| `.text` | `0x4dde99-0x4ddea5` | 12 |
| `.text` | `0x4de159-0x4de165` | 12 |
| `.text` | `0x4de419-0x4de425` | 12 |
| `.text` | `0x4de6d9-0x4de6e5` | 12 |
| `.text` | `0x4de999-0x4de9a5` | 12 |
| `.text` | `0x4e0c49-0x4e0c55` | 12 |
| `.text` | `0x4e0dc9-0x4e0dd5` | 12 |
| `.text` | `0x4e0fed-0x4e0ff9` | 12 |
| `.text` | `0x4e18e9-0x4e18f5` | 12 |
| `.text` | `0x4e190d-0x4e1919` | 12 |
| `.text` | `0x4e3ca9-0x4e3cb5` | 12 |
| `.text` | `0x4e3f79-0x4e3f85` | 12 |
