# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5641224
- uncovered executable bytes: 9816
- recovered range rows: 88098
- uncovered gaps: 634

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5637112 | 9816 | 99.82% | 87838 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x18de85-0x18dea5` | 32 |
| `.text` | `0x234e16-0x234e36` | 32 |
| `.text` | `0x400171-0x400191` | 32 |
| `.text` | `0x40eaa2-0x40eac2` | 32 |
| `.text` | `0x4dae19-0x4dae39` | 32 |
| `.text` | `0x4db279-0x4db299` | 32 |
| `.text` | `0x4db2b9-0x4db2d9` | 32 |
| `.text` | `0x4db529-0x4db549` | 32 |
| `.text` | `0x4dbcd9-0x4dbcf9` | 32 |
| `.text` | `0x4db309-0x4db327` | 30 |
| `.text` | `0x4e79d9-0x4e79f7` | 30 |
| `.text` | `0x4e9603-0x4e9621` | 30 |
| `.text` | `0x4e46cd-0x4e46e9` | 28 |
| `.text` | `0x4e4955-0x4e4971` | 28 |
| `.text` | `0x4e4cf9-0x4e4d15` | 28 |
| `.text` | `0x4e5547-0x4e5563` | 28 |
| `.text` | `0x4e5b39-0x4e5b55` | 28 |
| `.text` | `0x4e7e15-0x4e7e31` | 28 |
| `.text` | `0x4e9952-0x4e996d` | 27 |
| `.text` | `0x4af89d-0x4af8b6` | 25 |
| `.text` | `0x4db669-0x4db681` | 24 |
| `.text` | `0x4db8d9-0x4db8f1` | 24 |
| `.text` | `0x4dbb19-0x4dbb31` | 24 |
| `.text` | `0x4dbe19-0x4dbe31` | 24 |
| `.text` | `0x4dc8c5-0x4dc8dd` | 24 |
| `.text` | `0x4dcb85-0x4dcb9d` | 24 |
| `.text` | `0x4dd039-0x4dd051` | 24 |
| `.text` | `0x4e4651-0x4e4669` | 24 |
| `.text` | `0x4e4721-0x4e4739` | 24 |
| `.text` | `0x4e4749-0x4e4761` | 24 |
| `.text` | `0x4e4cd1-0x4e4ce9` | 24 |
| `.text` | `0x4e4f19-0x4e4f31` | 24 |
| `.text` | `0x4e5ce1-0x4e5cf9` | 24 |
| `.text` | `0x4e5db9-0x4e5dd1` | 24 |
| `.text` | `0x4e6379-0x4e6391` | 24 |
| `.text` | `0x4e6539-0x4e6551` | 24 |
| `.text` | `0x4e6939-0x4e6951` | 24 |
| `.text` | `0x4e6975-0x4e698d` | 24 |
| `.text` | `0x4e6c99-0x4e6cb1` | 24 |
| `.text` | `0x4e6fa9-0x4e6fc1` | 24 |
