# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5641869
- uncovered executable bytes: 9171
- recovered range rows: 88355
- uncovered gaps: 618

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5637757 | 9171 | 99.83% | 88095 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x4e7029-0x4e7041` | 24 |
| `.text` | `0x4e70c1-0x4e70d9` | 24 |
| `.text` | `0x4e0a16-0x4e0a2b` | 21 |
| `.text` | `0x4e6b79-0x4e6b8e` | 21 |
| `.text` | `0x4e6c0e-0x4e6c23` | 21 |
| `.text` | `0x4e9952-0x4e9967` | 21 |
| `.text` | `0x4db80d-0x4db821` | 20 |
| `.text` | `0x4dc269-0x4dc27d` | 20 |
| `.text` | `0x4e62f9-0x4e630d` | 20 |
| `.text` | `0x4e78ed-0x4e7901` | 20 |
| `.text` | `0x4e790b-0x4e791f` | 20 |
| `.text` | `0x4e8553-0x4e8567` | 20 |
| `.text` | `0x4e8571-0x4e8585` | 20 |
| `.text` | `0x4e8dcd-0x4e8de1` | 20 |
| `.text` | `0x4e9894-0x4e98a8` | 20 |
| `.text` | `0x4dd534-0x4dd546` | 18 |
| `.text` | `0x4e89c9-0x4e89db` | 18 |
| `.text` | `0x48ddf3-0x48de04` | 17 |
| `.text` | `0x30b29-0x30b39` | 16 |
| `.text` | `0x31f83-0x31f93` | 16 |
