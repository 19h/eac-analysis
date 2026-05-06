# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 1636070
- uncovered executable bytes: 4014970
- recovered range rows: 16485
- uncovered gaps: 2541

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 1636070 | 4010858 | 28.97% | 16485 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dadf9-0x4e9ae0` | 60647 |
| `.text` | `0x3190bb-0x3275b6` | 58619 |
| `.text` | `0xd1bc7-0xe0017` | 58448 |
| `.text` | `0x2abb75-0x2b9f30` | 58299 |
| `.text` | `0x1b27ce-0x1c0b59` | 58251 |
| `.text` | `0x45e234-0x46c45b` | 57895 |
| `.text` | `0x25c6c2-0x26a821` | 57695 |
| `.text` | `0x1d245a-0x1e05a8` | 57678 |
| `.text` | `0xf0d9c-0xfeebc` | 57632 |
| `.text` | `0x16deaa-0x17bf1f` | 57461 |
| `.text` | `0x1e7ce8-0x1f5d10` | 57384 |
| `.text` | `0x10bbbf-0x119b8e` | 57295 |
| `.text` | `0x223666-0x231586` | 57120 |
| `.text` | `0x194085-0x1a1fa3` | 57118 |
| `.text` | `0x14d713-0x15b5b2` | 56991 |
| `.text` | `0x2f921e-0x307093` | 56949 |
| `.text` | `0x26ee41-0x27cb8e` | 56653 |
| `.text` | `0x3ee99e-0x3fc6bc` | 56606 |
| `.text` | `0x439c67-0x4478f4` | 56461 |
| `.text` | `0x3e1896-0x3ee99a` | 53508 |
| `.text` | `0x1faa34-0x20792d` | 52985 |
| `.text` | `0x2316b6-0x23d8b8` | 49666 |
| `.text` | `0x4700ee-0x47c22d` | 49471 |
| `.text` | `0x2c7707-0x2d2cf4` | 46573 |
| `.text` | `0x41e61f-0x428ce3` | 42692 |
| `.text` | `0x11c546-0x126851` | 41739 |
| `.text` | `0x40e542-0x41883d` | 41723 |
| `.text` | `0x3fc6d1-0x4065ad` | 40668 |
| `.text` | `0x36b11b-0x374d29` | 39950 |
| `.text` | `0x37cb30-0x386394` | 39012 |
| `.text` | `0x1268dc-0x1300d5` | 38905 |
| `.text` | `0x42be93-0x4353f8` | 38245 |
| `.text` | `0x3aa015-0x3b24aa` | 33941 |
| `.text` | `0x3cc9ff-0x3d4a95` | 32918 |
| `.text` | `0x240a18-0x248752` | 32058 |
| `.text` | `0x3431d8-0x34abc6` | 31214 |
| `.text` | `0x47c230-0x483a1a` | 30698 |
| `.text` | `0x447925-0x44f040` | 30491 |
| `.text` | `0x35148a-0x358a24` | 30106 |
| `.text` | `0x327655-0x32e8e4` | 29327 |
