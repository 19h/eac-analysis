# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5047007
- uncovered executable bytes: 604033
- recovered range rows: 65516
- uncovered gaps: 3092

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5042895 | 604033 | 89.30% | 65256 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x4e07f9-0x4e0e79` | 1664 |
| `.text` | `0x4e59f9-0x4e6079` | 1664 |
| `.text` | `0x4dc3f9-0x4dc8f9` | 1280 |
| `.text` | `0x4e71f9-0x4e7679` | 1152 |
| `.text` | `0x4e76f9-0x4e7b79` | 1152 |
| `.text` | `0x4e4bf9-0x4e4ff9` | 1024 |
| `.text` | `0x4e6679-0x4e6a79` | 1024 |
| `.text` | `0x4e82f9-0x4e86f9` | 1024 |
| `.text` | `0x4e7cf9-0x4e8079` | 896 |
| `.text` | `0x4e54f9-0x4e57f9` | 768 |
| `.text` | `0x4e62f9-0x4e65f9` | 768 |
| `.text` | `0x4e88f9-0x4e8bf9` | 768 |
| `.text` | `0x3146b-0x31703` | 664 |
| `.text` | `0x3b2215-0x3b24aa` | 661 |
| `.text` | `0x496d5f-0x496ff0` | 657 |
| `.text` | `0x52d607-0x52d890` | 649 |
| `.text` | `0x48fdac-0x490032` | 646 |
| `.text` | `0xda0c7-0xda347` | 640 |
| `.text` | `0x4db4f9-0x4db779` | 640 |
| `.text` | `0x4dd0f9-0x4dd379` | 640 |
| `.text` | `0x4dd5f9-0x4dd879` | 640 |
| `.text` | `0x4dfef9-0x4e0179` | 640 |
| `.text` | `0x4e13f9-0x4e1679` | 640 |
| `.text` | `0x4e44f9-0x4e4779` | 640 |
| `.text` | `0x4e6ef9-0x4e7179` | 640 |
| `.text` | `0x5538f6-0x553b6f` | 633 |
| `.text` | `0x48dcd-0x49044` | 631 |
| `.text` | `0x306e1e-0x307093` | 629 |
| `.text` | `0x489e44-0x48a0b7` | 627 |
| `.text` | `0x52dc7e-0x52def0` | 626 |
| `.text` | `0x545c4-0x54834` | 624 |
| `.text` | `0x559ba-0x55c2a` | 624 |
| `.text` | `0x563de3-0x564050` | 621 |
| `.text` | `0x58a71-0x58cd8` | 615 |
| `.text` | `0x38c36-0x38e9c` | 614 |
| `.text` | `0x50316a-0x5033d0` | 614 |
| `.text` | `0x505a3a-0x505ca0` | 614 |
| `.text` | `0x4fc11b-0x4fc380` | 613 |
| `.text` | `0x5563ab-0x556610` | 613 |
