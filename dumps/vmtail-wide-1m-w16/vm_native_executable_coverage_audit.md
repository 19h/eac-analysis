# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2639094
- uncovered executable bytes: 3011946
- recovered range rows: 31124
- uncovered gaps: 2839

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2634982 | 3011946 | 46.66% | 30864 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x452be3-0x457abc` | 20185 |
| `.text` | `0x331623-0x3364f8` | 20181 |
| `.text` | `0x207f9e-0x20ce34` | 20118 |
| `.text` | `0x442a67-0x4478f4` | 20109 |
| `.text` | `0xffdee-0x104c68` | 20090 |
| `.text` | `0x6c090-0x70ef4` | 20068 |
| `.text` | `0xdb1c7-0xe0017` | 20048 |
| `.text` | `0x1c7155-0x1cbf51` | 19964 |
| `.text` | `0x12b2dc-0x1300d5` | 19961 |
| `.text` | `0x345dd8-0x34abc6` | 19950 |
