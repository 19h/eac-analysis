# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 1828582
- uncovered executable bytes: 3822458
- recovered range rows: 19080
- uncovered gaps: 2599

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 1828582 | 3818346 | 32.38% | 19080 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x1fc034-0x20792d` | 47353 |
| `.text` | `0xd47c7-0xe0017` | 47184 |
| `.text` | `0x10e3bf-0x119b8e` | 47055 |
| `.text` | `0x1b53ce-0x1c0b59` | 46987 |
| `.text` | `0xf379c-0xfeebc` | 46880 |
| `.text` | `0x1ea6e8-0x1f5d10` | 46632 |
| `.text` | `0x460e34-0x46c45b` | 46631 |
| `.text` | `0x2c7707-0x2d2cf4` | 46573 |
| `.text` | `0x271641-0x27cb8e` | 46413 |
| `.text` | `0x470cee-0x47c22d` | 46399 |
| `.text` | `0x3f119e-0x3fc6bc` | 46366 |
| `.text` | `0x3e3496-0x3ee99a` | 46340 |
| `.text` | `0x43c467-0x4478f4` | 46221 |
| `.text` | `0x170aaa-0x17bf1f` | 46197 |
| `.text` | `0x2fbc1e-0x307093` | 46197 |
| `.text` | `0x1d525a-0x1e05a8` | 45902 |
| `.text` | `0x31c2bb-0x3275b6` | 45819 |
| `.text` | `0x150313-0x15b5b2` | 45727 |
| `.text` | `0x2326b6-0x23d8b8` | 45570 |
| `.text` | `0x2aed75-0x2b9f30` | 45499 |
| `.text` | `0x25f8c2-0x26a821` | 44895 |
| `.text` | `0x226666-0x231586` | 44832 |
| `.text` | `0x197085-0x1a1fa3` | 44830 |
| `.text` | `0x4deff9-0x4e9ae0` | 43751 |
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
