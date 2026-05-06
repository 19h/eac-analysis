# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 1730278
- uncovered executable bytes: 3920762
- recovered range rows: 17697
- uncovered gaps: 2572

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 1730278 | 3916650 | 30.64% | 17697 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x195285-0x1a1fa3` | 52510 |
| `.text` | `0x31a8bb-0x3275b6` | 52475 |
| `.text` | `0x14e913-0x15b5b2` | 52383 |
| `.text` | `0x16f2aa-0x17bf1f` | 52341 |
| `.text` | `0xd33c7-0xe0017` | 52304 |
| `.text` | `0x1e90e8-0x1f5d10` | 52264 |
| `.text` | `0x1b3fce-0x1c0b59` | 52107 |
| `.text` | `0x270041-0x27cb8e` | 52045 |
| `.text` | `0xf239c-0xfeebc` | 52000 |
| `.text` | `0x43ae67-0x4478f4` | 51853 |
| `.text` | `0x45fa34-0x46c45b` | 51751 |
| `.text` | `0x3e2096-0x3ee99a` | 51460 |
| `.text` | `0x2fa81e-0x307093` | 51317 |
| `.text` | `0x10d3bf-0x119b8e` | 51151 |
| `.text` | `0x3eff9e-0x3fc6bc` | 50974 |
| `.text` | `0x2ad975-0x2b9f30` | 50619 |
| `.text` | `0x1d405a-0x1e05a8` | 50510 |
| `.text` | `0x225066-0x231586` | 50464 |
| `.text` | `0x1fb434-0x20792d` | 50425 |
| `.text` | `0x25e4c2-0x26a821` | 50015 |
| `.text` | `0x2316b6-0x23d8b8` | 49666 |
| `.text` | `0x4700ee-0x47c22d` | 49471 |
| `.text` | `0x2c7707-0x2d2cf4` | 46573 |
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
