# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5650301
- uncovered executable bytes: 739
- recovered range rows: 91711
- uncovered gaps: 128

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5646189 | 739 | 99.98% | 91451 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x31f83-0x31f8b` | 8 |
| `.text` | `0x32dd7-0x32ddf` | 8 |
| `.text` | `0x34f64-0x34f6c` | 8 |
| `.text` | `0x709e8-0x709f0` | 8 |
| `.text` | `0x153b23-0x153b2b` | 8 |
| `.text` | `0x153bcb-0x153bd3` | 8 |
| `.text` | `0x166caa-0x166cb2` | 8 |
| `.text` | `0x24e0dc-0x24e0e4` | 8 |
| `.text` | `0x251dbc-0x251dc4` | 8 |
| `.text` | `0x251e2c-0x251e34` | 8 |
| `.text` | `0x2fd0e6-0x2fd0ee` | 8 |
| `.text` | `0x306e1e-0x306e26` | 8 |
| `.text` | `0x3db8d9-0x3db8e1` | 8 |
| `.text` | `0x3dcdb9-0x3dcdc1` | 8 |
| `.text` | `0x431f13-0x431f1b` | 8 |
| `.text` | `0x4340f3-0x4340fb` | 8 |
| `.text` | `0x438ad7-0x438adf` | 8 |
| `.text` | `0x43e3c7-0x43e3cf` | 8 |
| `.text` | `0x43e867-0x43e86f` | 8 |
| `.text` | `0x444957-0x44495f` | 8 |
| `.text` | `0x447aed-0x447af5` | 8 |
| `.text` | `0x48ddf3-0x48ddfb` | 8 |
| `.text` | `0x4db559-0x4db561` | 8 |
| `.text` | `0x4db609-0x4db611` | 8 |
| `.text` | `0x4db6d1-0x4db6d9` | 8 |
| `.text` | `0x4dbfd1-0x4dbfd9` | 8 |
| `.text` | `0x4ddd39-0x4ddd41` | 8 |
| `.text` | `0x4ddd51-0x4ddd59` | 8 |
| `.text` | `0x4dddb9-0x4dddc1` | 8 |
| `.text` | `0x4ddf19-0x4ddf21` | 8 |
| `.text` | `0x4ddfc9-0x4ddfd1` | 8 |
| `.text` | `0x4deb39-0x4deb41` | 8 |
| `.text` | `0x4e0281-0x4e0289` | 8 |
| `.text` | `0x4e0401-0x4e0409` | 8 |
| `.text` | `0x4e0fa1-0x4e0fa9` | 8 |
| `.text` | `0x4e0fb1-0x4e0fb9` | 8 |
| `.text` | `0x4e45b9-0x4e45c1` | 8 |
| `.text` | `0x4e4679-0x4e4681` | 8 |
| `.text` | `0x4e469c-0x4e46a4` | 8 |
| `.text` | `0x4e49d1-0x4e49d9` | 8 |
