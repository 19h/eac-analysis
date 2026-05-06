# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2123494
- uncovered executable bytes: 3527546
- recovered range rows: 23362
- uncovered gaps: 2692

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2123494 | 3523434 | 37.60% | 23362 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x2fea1e-0x307093` | 34421 |
| `.text` | `0x1ed6e8-0x1f5d10` | 34344 |
| `.text` | `0x127adc-0x1300d5` | 34297 |
| `.text` | `0x42ce93-0x4353f8` | 34149 |
| `.text` | `0x229066-0x231586` | 34080 |
| `.text` | `0x11e346-0x126851` | 34059 |
| `.text` | `0x410342-0x41883d` | 34043 |
| `.text` | `0x42081f-0x428ce3` | 33988 |
| `.text` | `0x3aa015-0x3b24aa` | 33941 |
| `.text` | `0x173aaa-0x17bf1f` | 33909 |
| `.text` | `0xd7bc7-0xe0017` | 33872 |
| `.text` | `0x36c91b-0x374d29` | 33806 |
| `.text` | `0x2354b6-0x23d8b8` | 33794 |
| `.text` | `0x1d825a-0x1e05a8` | 33614 |
| `.text` | `0x473eee-0x47c22d` | 33599 |
| `.text` | `0x199c85-0x1a1fa3` | 33566 |
| `.text` | `0x43f667-0x4478f4` | 33421 |
| `.text` | `0x1119bf-0x119b8e` | 33231 |
| `.text` | `0x2b1d75-0x2b9f30` | 33211 |
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
| `.text` | `0x1b8dce-0x1c0b59` | 32139 |
| `.text` | `0x274e41-0x27cb8e` | 32077 |
| `.text` | `0x240a18-0x248752` | 32058 |
| `.text` | `0x31f8bb-0x3275b6` | 31995 |
| `.text` | `0x464834-0x46c45b` | 31783 |
| `.text` | `0x3431d8-0x34abc6` | 31214 |
| `.text` | `0x47c230-0x483a1a` | 30698 |
| `.text` | `0x447925-0x44f040` | 30491 |
| `.text` | `0x35148a-0x358a24` | 30106 |
| `.text` | `0x327655-0x32e8e4` | 29327 |
| `.text` | `0x24dcbc-0x254abd` | 28161 |
