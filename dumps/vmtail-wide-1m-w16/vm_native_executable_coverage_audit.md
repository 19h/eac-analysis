# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2000614
- uncovered executable bytes: 3650426
- recovered range rows: 21590
- uncovered gaps: 2653

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2000614 | 3646314 | 35.42% | 21590 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x37cb30-0x386394` | 39012 |
| `.text` | `0x2340b6-0x23d8b8` | 38914 |
| `.text` | `0x1268dc-0x1300d5` | 38905 |
| `.text` | `0x2610c2-0x26a821` | 38751 |
| `.text` | `0x1d6e5a-0x1e05a8` | 38734 |
| `.text` | `0xf579c-0xfeebc` | 38688 |
| `.text` | `0x3e5296-0x3ee99a` | 38660 |
| `.text` | `0x31debb-0x3275b6` | 38651 |
| `.text` | `0x41f61f-0x428ce3` | 38596 |
| `.text` | `0x43e267-0x4478f4` | 38541 |
| `.text` | `0xd69c7-0xe0017` | 38480 |
| `.text` | `0x36b71b-0x374d29` | 38414 |
| `.text` | `0x1105bf-0x119b8e` | 38351 |
| `.text` | `0x42be93-0x4353f8` | 38245 |
| `.text` | `0x273641-0x27cb8e` | 38221 |
| `.text` | `0x472cee-0x47c22d` | 38207 |
| `.text` | `0x198a85-0x1a1fa3` | 38174 |
| `.text` | `0x152113-0x15b5b2` | 38047 |
| `.text` | `0x172aaa-0x17bf1f` | 38005 |
| `.text` | `0x1ec8e8-0x1f5d10` | 37928 |
| `.text` | `0x2c9907-0x2d2cf4` | 37869 |
| `.text` | `0x2b0b75-0x2b9f30` | 37819 |
| `.text` | `0x228266-0x231586` | 37664 |
| `.text` | `0x3f339e-0x3fc6bc` | 37662 |
| `.text` | `0x40f542-0x41883d` | 37627 |
| `.text` | `0x1fe634-0x20792d` | 37625 |
| `.text` | `0x3fd2d1-0x4065ad` | 37596 |
| `.text` | `0x463234-0x46c45b` | 37415 |
| `.text` | `0x1b79ce-0x1c0b59` | 37259 |
| `.text` | `0x2fe01e-0x307093` | 36981 |
| `.text` | `0x11d946-0x126851` | 36619 |
| `.text` | `0x3aa015-0x3b24aa` | 33941 |
| `.text` | `0x3cc9ff-0x3d4a95` | 32918 |
| `.text` | `0x240a18-0x248752` | 32058 |
| `.text` | `0x3431d8-0x34abc6` | 31214 |
| `.text` | `0x47c230-0x483a1a` | 30698 |
| `.text` | `0x447925-0x44f040` | 30491 |
| `.text` | `0x35148a-0x358a24` | 30106 |
| `.text` | `0x327655-0x32e8e4` | 29327 |
| `.text` | `0x24dcbc-0x254abd` | 28161 |
