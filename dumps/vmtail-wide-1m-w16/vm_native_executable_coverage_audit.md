# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 1930982
- uncovered executable bytes: 3720058
- recovered range rows: 20556
- uncovered gaps: 2633

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 1930982 | 3715946 | 34.19% | 20556 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4deff9-0x4e9ae0` | 43751 |
| `.text` | `0x2fcc1e-0x307093` | 42101 |
| `.text` | `0x1b67ce-0x1c0b59` | 41867 |
| `.text` | `0x197c85-0x1a1fa3` | 41758 |
| `.text` | `0x11c546-0x126851` | 41739 |
| `.text` | `0x40e542-0x41883d` | 41723 |
| `.text` | `0x2336b6-0x23d8b8` | 41474 |
| `.text` | `0x2afd75-0x2b9f30` | 41403 |
| `.text` | `0x2606c2-0x26a821` | 41311 |
| `.text` | `0x3e4896-0x3ee99a` | 41220 |
| `.text` | `0x31d4bb-0x3275b6` | 41211 |
| `.text` | `0x41ec1f-0x428ce3` | 41156 |
| `.text` | `0x43d867-0x4478f4` | 41101 |
| `.text` | `0x462434-0x46c45b` | 40999 |
| `.text` | `0x10fbbf-0x119b8e` | 40911 |
| `.text` | `0xf4f9c-0xfeebc` | 40736 |
| `.text` | `0x3fc6d1-0x4065ad` | 40668 |
| `.text` | `0x151713-0x15b5b2` | 40607 |
| `.text` | `0x1720aa-0x17bf1f` | 40565 |
| `.text` | `0xd61c7-0xe0017` | 40528 |
| `.text` | `0x2c8f07-0x2d2cf4` | 40429 |
| `.text` | `0x1d685a-0x1e05a8` | 40270 |
| `.text` | `0x4724ee-0x47c22d` | 40255 |
| `.text` | `0x227866-0x231586` | 40224 |
| `.text` | `0x3f299e-0x3fc6bc` | 40222 |
| `.text` | `0x1ec0e8-0x1f5d10` | 39976 |
| `.text` | `0x36b11b-0x374d29` | 39950 |
| `.text` | `0x273041-0x27cb8e` | 39757 |
| `.text` | `0x1fde34-0x20792d` | 39673 |
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
