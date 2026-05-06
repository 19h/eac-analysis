# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4792010
- uncovered executable bytes: 859030
- recovered range rows: 61418
- uncovered gaps: 3228

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4787898 | 859030 | 84.78% | 61158 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x4e07f9-0x4e0e79` | 1664 |
| `.text` | `0x4e59f9-0x4e6079` | 1664 |
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
| `.text` | `0x384a30-0x385030` | 1536 |
| `.text` | `0x3b5ec9-0x3b64c9` | 1536 |
| `.text` | `0x3b85b0-0x3b8bb0` | 1536 |
| `.text` | `0x3bac59-0x3bb259` | 1536 |
| `.text` | `0x41f81f-0x41fe1f` | 1536 |
| `.text` | `0x469a34-0x46a034` | 1536 |
| `.text` | `0x1cb955-0x1cbf51` | 1532 |
| `.text` | `0x50a506-0x50ab00` | 1530 |
| `.text` | `0x554506-0x554b00` | 1530 |
| `.text` | `0x72e5d-0x7343e` | 1505 |
| `.text` | `0x53fda4-0x540380` | 1500 |
| `.text` | `0x505298-0x505870` | 1496 |
| `.text` | `0x3d8bd6-0x3d91ad` | 1495 |
| `.text` | `0x3a750-0x3ad24` | 1492 |
| `.text` | `0x41c64-0x4221c` | 1464 |
| `.text` | `0x4d4948-0x4d4f00` | 1464 |
| `.text` | `0x5348f-0x53a3e` | 1455 |
| `.text` | `0x29bcc9-0x29c26e` | 1445 |
| `.text` | `0x3d44ff-0x3d4a95` | 1430 |
