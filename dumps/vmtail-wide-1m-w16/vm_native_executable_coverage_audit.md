# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4759015
- uncovered executable bytes: 892025
- recovered range rows: 60994
- uncovered gaps: 3241

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4754903 | 892025 | 84.20% | 60734 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x4cad5d-0x4cb410` | 1715 |
| `.text` | `0x52a8b6-0x52af50` | 1690 |
| `.text` | `0x2d7869-0x2d7efd` | 1684 |
| `.text` | `0x1a3fa9-0x1a4638` | 1679 |
| `.text` | `0x4e07f9-0x4e0e79` | 1664 |
| `.text` | `0x4e59f9-0x4e6079` | 1664 |
| `.text` | `0x52c360-0x52c9e0` | 1664 |
| `.text` | `0x17b8aa-0x17bf1f` | 1653 |
| `.text` | `0x2d8f16-0x2d9584` | 1646 |
| `.text` | `0x34cbe6-0x34d253` | 1645 |
| `.text` | `0x70890-0x70ef4` | 1636 |
| `.text` | `0xdf9c7-0xe0017` | 1616 |
| `.text` | `0x4d0eca-0x4d1510` | 1606 |
| `.text` | `0x33cb79-0x33d1ae` | 1589 |
| `.text` | `0x30db8-0x313eb` | 1587 |
| `.text` | `0x105a78-0x1060ab` | 1587 |
| `.text` | `0x30e458-0x30ea80` | 1576 |
| `.text` | `0x1aa4bb-0x1aaadd` | 1570 |
| `.text` | `0x4897c0-0x489dce` | 1550 |
| `.text` | `0x6524a-0x65850` | 1542 |
| `.text` | `0x2544bc-0x254abd` | 1537 |
| `.text` | `0x65ce3-0x662e3` | 1536 |
| `.text` | `0xd0dc7-0xd13c7` | 1536 |
| `.text` | `0xe2966-0xe2f66` | 1536 |
| `.text` | `0xea79c-0xead9c` | 1536 |
| `.text` | `0x103bee-0x1041ee` | 1536 |
| `.text` | `0x127adc-0x1280dc` | 1536 |
| `.text` | `0x164eaa-0x1654aa` | 1536 |
| `.text` | `0x17f285-0x17f885` | 1536 |
| `.text` | `0x199c85-0x19a285` | 1536 |
| `.text` | `0x234cb6-0x2352b6` | 1536 |
| `.text` | `0x235cb6-0x2362b6` | 1536 |
| `.text` | `0x27c241-0x27c841` | 1536 |
| `.text` | `0x2d1907-0x2d1f07` | 1536 |
| `.text` | `0x30561e-0x305c1e` | 1536 |
| `.text` | `0x30dc58-0x30e258` | 1536 |
| `.text` | `0x311cbb-0x3122bb` | 1536 |
| `.text` | `0x3144bb-0x314abb` | 1536 |
| `.text` | `0x359445-0x359a45` | 1536 |
