# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2156262
- uncovered executable bytes: 3494778
- recovered range rows: 23924
- uncovered gaps: 2706

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2156262 | 3490666 | 38.18% | 23924 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x2626c2-0x26a821` | 33119 |
| `.text` | `0xf6d9c-0xfeebc` | 33056 |
| `.text` | `0x3e6896-0x3ee99a` | 33028 |
| `.text` | `0x1ff834-0x20792d` | 33017 |
| `.text` | `0x3fe4d1-0x4065ad` | 32988 |
| `.text` | `0x153513-0x15b5b2` | 32927 |
| `.text` | `0x3cc9ff-0x3d4a95` | 32918 |
| `.text` | `0x37e330-0x386394` | 32868 |
| `.text` | `0x2cad07-0x2d2cf4` | 32749 |
| `.text` | `0x3f479e-0x3fc6bc` | 32542 |
| `.text` | `0x410942-0x41883d` | 32507 |
| `.text` | `0x235ab6-0x23d8b8` | 32258 |
| `.text` | `0x1282dc-0x1300d5` | 32249 |
| `.text` | `0x1b8dce-0x1c0b59` | 32139 |
| `.text` | `0x274e41-0x27cb8e` | 32077 |
| `.text` | `0x4744ee-0x47c22d` | 32063 |
| `.text` | `0x240a18-0x248752` | 32058 |
| `.text` | `0x31f8bb-0x3275b6` | 31995 |
| `.text` | `0x2ff41e-0x307093` | 31861 |
| `.text` | `0x1ee0e8-0x1f5d10` | 31784 |
| `.text` | `0x464834-0x46c45b` | 31783 |
| `.text` | `0x42d893-0x4353f8` | 31589 |
| `.text` | `0x229a66-0x231586` | 31520 |
| `.text` | `0x19a485-0x1a1fa3` | 31518 |
| `.text` | `0x11ed46-0x126851` | 31499 |
| `.text` | `0x3aaa15-0x3b24aa` | 31381 |
| `.text` | `0x1744aa-0x17bf1f` | 31349 |
| `.text` | `0xd85c7-0xe0017` | 31312 |
| `.text` | `0x36d31b-0x374d29` | 31246 |
| `.text` | `0x3431d8-0x34abc6` | 31214 |
| `.text` | `0x2b2575-0x2b9f30` | 31163 |
| `.text` | `0x1d8c5a-0x1e05a8` | 31054 |
| `.text` | `0x42141f-0x428ce3` | 30916 |
| `.text` | `0x440067-0x4478f4` | 30861 |
| `.text` | `0x47c230-0x483a1a` | 30698 |
| `.text` | `0x1123bf-0x119b8e` | 30671 |
| `.text` | `0x447925-0x44f040` | 30491 |
| `.text` | `0x35148a-0x358a24` | 30106 |
| `.text` | `0x327655-0x32e8e4` | 29327 |
| `.text` | `0x24dcbc-0x254abd` | 28161 |
