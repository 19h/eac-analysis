# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 1881830
- uncovered executable bytes: 3769210
- recovered range rows: 19858
- uncovered gaps: 2619

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 1881830 | 3765098 | 33.32% | 19858 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x1b5dce-0x1c0b59` | 44427 |
| `.text` | `0x1eb0e8-0x1f5d10` | 44072 |
| `.text` | `0x232cb6-0x23d8b8` | 44034 |
| `.text` | `0x2c8107-0x2d2cf4` | 44013 |
| `.text` | `0x25fcc2-0x26a821` | 43871 |
| `.text` | `0xf439c-0xfeebc` | 43808 |
| `.text` | `0x3e3e96-0x3ee99a` | 43780 |
| `.text` | `0x4deff9-0x4e9ae0` | 43751 |
| `.text` | `0x150b13-0x15b5b2` | 43679 |
| `.text` | `0x43ce67-0x4478f4` | 43661 |
| `.text` | `0x461a34-0x46c45b` | 43559 |
| `.text` | `0x1d5c5a-0x1e05a8` | 43342 |
| `.text` | `0x226c66-0x231586` | 43296 |
| `.text` | `0x31ccbb-0x3275b6` | 43259 |
| `.text` | `0x1716aa-0x17bf1f` | 43125 |
| `.text` | `0xd57c7-0xe0017` | 43088 |
| `.text` | `0x10f3bf-0x119b8e` | 42959 |
| `.text` | `0x471aee-0x47c22d` | 42815 |
| `.text` | `0x3f1f9e-0x3fc6bc` | 42782 |
| `.text` | `0x1fd234-0x20792d` | 42745 |
| `.text` | `0x41e61f-0x428ce3` | 42692 |
| `.text` | `0x272641-0x27cb8e` | 42317 |
| `.text` | `0x197a85-0x1a1fa3` | 42270 |
| `.text` | `0x2fcc1e-0x307093` | 42101 |
| `.text` | `0x11c546-0x126851` | 41739 |
| `.text` | `0x40e542-0x41883d` | 41723 |
| `.text` | `0x2afd75-0x2b9f30` | 41403 |
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
