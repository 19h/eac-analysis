# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3165558
- uncovered executable bytes: 2485482
- recovered range rows: 38446
- uncovered gaps: 2972

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3161446 | 2485482 | 55.98% | 38186 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x480430-0x483a1a` | 13802 |
| `.text` | `0x3de280-0x3e185b` | 13787 |
| `.text` | `0x3da5b9-0x3ddb5d` | 13732 |
| `.text` | `0x35548a-0x358a24` | 13722 |
| `.text` | `0x3953e1-0x398978` | 13719 |
| `.text` | `0x3d14ff-0x3d4a95` | 13718 |
| `.text` | `0x214a33-0x217fac` | 13689 |
| `.text` | `0x382e30-0x386394` | 13668 |
| `.text` | `0x5320ac-0x535610` | 13668 |
| `.text` | `0x245218-0x248752` | 13626 |
| `.text` | `0x33fc73-0x343193` | 13600 |
| `.text` | `0x19ea85-0x1a1fa3` | 13598 |
| `.text` | `0x415342-0x41883d` | 13563 |
| `.text` | `0x361bbe-0x3650ab` | 13549 |
| `.text` | `0x3650b6-0x368588` | 13522 |
| `.text` | `0x3c9479-0x3cc938` | 13503 |
| `.text` | `0x3af015-0x3b24aa` | 13461 |
| `.text` | `0x1017ee-0x104c68` | 13434 |
| `.text` | `0x303c1e-0x307093` | 13429 |
| `.text` | `0x2ddd0e-0x2e117a` | 13420 |
| `.text` | `0x38eca0-0x392091` | 13297 |
| `.text` | `0x337e7b-0x33b1f2` | 13175 |
| `.text` | `0x51edc0-0x522120` | 13152 |
| `.text` | `0x2674c2-0x26a821` | 13151 |
| `.text` | `0x1a4cbb-0x1a7ffe` | 13123 |
| `.text` | `0x478eee-0x47c22d` | 13119 |
| `.text` | `0xfbb9c-0xfeebc` | 13088 |
| `.text` | `0x123546-0x126851` | 13067 |
| `.text` | `0x15beec-0x15f1f0` | 13060 |
| `.text` | `0x3eb696-0x3ee99a` | 13060 |
| `.text` | `0x204634-0x20792d` | 13049 |
| `.text` | `0x3b52c9-0x3b85a9` | 13024 |
| `.text` | `0x4032d1-0x4065ad` | 13020 |
| `.text` | `0x4547e3-0x457abc` | 13017 |
| `.text` | `0x28e24c-0x2914ea` | 12958 |
| `.text` | `0x209b9e-0x20ce34` | 12950 |
| `.text` | `0x444667-0x4478f4` | 12941 |
| `.text` | `0x3b8e59-0x3bc0e4` | 12939 |
| `.text` | `0xdcdc7-0xe0017` | 12880 |
| `.text` | `0x358a45-0x35bc7b` | 12854 |
