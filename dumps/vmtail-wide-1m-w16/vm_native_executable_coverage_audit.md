# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2663414
- uncovered executable bytes: 2987626
- recovered range rows: 31494
- uncovered gaps: 2841

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2659302 | 2987626 | 47.09% | 31234 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x353c8a-0x358a24` | 19866 |
| `.text` | `0x265ac2-0x26a821` | 19807 |
| `.text` | `0x1db85a-0x1e05a8` | 19790 |
| `.text` | `0x277e41-0x27cb8e` | 19789 |
| `.text` | `0x4774ee-0x47c22d` | 19775 |
| `.text` | `0x243a18-0x248752` | 19770 |
| `.text` | `0x3a3b39-0x3a8871` | 19768 |
| `.text` | `0x44a325-0x44f040` | 19739 |
| `.text` | `0x3228bb-0x3275b6` | 19707 |
| `.text` | `0x42401f-0x428ce3` | 19652 |
| `.text` | `0x3c7c79-0x3cc938` | 19647 |
| `.text` | `0x287ecb-0x28cb6f` | 19620 |
