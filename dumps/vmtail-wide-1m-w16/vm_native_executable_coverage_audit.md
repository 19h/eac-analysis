# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2619382
- uncovered executable bytes: 3031658
- recovered range rows: 30819
- uncovered gaps: 2833

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2615270 | 3031658 | 46.31% | 30559 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x37536a-0x37a6c8` | 21342 |
| `.text` | `0xf9b9c-0xfeebc` | 21280 |
| `.text` | `0x3f739e-0x3fc6bc` | 21278 |
| `.text` | `0x24877d-0x24da7f` | 21250 |
| `.text` | `0x3222bb-0x3275b6` | 21243 |
| `.text` | `0x413542-0x41883d` | 21243 |
| `.text` | `0x202634-0x20792d` | 21241 |
| `.text` | `0x3c7679-0x3cc938` | 21183 |
| `.text` | `0x3cf7ff-0x3d4a95` | 21142 |
| `.text` | `0x3ad215-0x3b24aa` | 21141 |
| `.text` | `0x176caa-0x17bf1f` | 21109 |
| `.text` | `0x301e1e-0x307093` | 21109 |
| `.text` | `0x1355a4-0x13a7f8` | 21076 |
| `.text` | `0x1cc001-0x1d1223` | 21026 |
| `.text` | `0x2386b6-0x23d8b8` | 20994 |
| `.text` | `0x2970c9-0x29c26e` | 20901 |
| `.text` | `0x3c09dd-0x3c5b46` | 20841 |
| `.text` | `0x430293-0x4353f8` | 20837 |
| `.text` | `0x3989b1-0x39db0e` | 20829 |
| `.text` | `0x121746-0x126851` | 20747 |
| `.text` | `0x35ffbe-0x3650ab` | 20717 |
| `.text` | `0x156513-0x15b5b2` | 20639 |
| `.text` | `0x2d2e69-0x2d7efd` | 20628 |
| `.text` | `0x2dc10e-0x2e117a` | 20588 |
| `.text` | `0x381330-0x386394` | 20580 |
| `.text` | `0x27f8ee-0x28494c` | 20574 |
| `.text` | `0x467434-0x46c45b` | 20519 |
| `.text` | `0x36fd1b-0x374d29` | 20494 |
| `.text` | `0x4df9f9-0x4e49f9` | 20480 |
| `.text` | `0x38d0a0-0x392091` | 20465 |
| `.text` | `0x2cdd07-0x2d2cf4` | 20461 |
| `.text` | `0x47ea30-0x483a1a` | 20458 |
| `.text` | `0x2b4f75-0x2b9f30` | 20411 |
| `.text` | `0xe0166-0xe50f4` | 20366 |
| `.text` | `0x1bbbce-0x1c0b59` | 20363 |
| `.text` | `0x51d1c0-0x522120` | 20320 |
| `.text` | `0x22c666-0x231586` | 20256 |
| `.text` | `0x19d085-0x1a1fa3` | 20254 |
| `.text` | `0x3879a8-0x38c897` | 20207 |
| `.text` | `0x4016d1-0x4065ad` | 20188 |
