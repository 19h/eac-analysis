# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3186038
- uncovered executable bytes: 2465002
- recovered range rows: 38679
- uncovered gaps: 2973

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3181926 | 2465002 | 56.34% | 38419 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x3955e1-0x398978` | 13207 |
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
| `.text` | `0x29d2bf-0x2a04ec` | 12845 |
| `.text` | `0x1f2ae8-0x1f5d10` | 12840 |
| `.text` | `0x1ce001-0x1d1223` | 12834 |
| `.text` | `0x23a6b6-0x23d8b8` | 12802 |
| `.text` | `0x12cedc-0x1300d5` | 12793 |
| `.text` | `0x26bc24-0x26ee18` | 12788 |
| `.text` | `0x1315a5-0x134781` | 12764 |
| `.text` | `0x1c257d-0x1c5750` | 12755 |
| `.text` | `0x1169bf-0x119b8e` | 12751 |
| `.text` | `0x2990c9-0x29c26e` | 12709 |
