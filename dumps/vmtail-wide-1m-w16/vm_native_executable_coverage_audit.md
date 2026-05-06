# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2205414
- uncovered executable bytes: 3445626
- recovered range rows: 24630
- uncovered gaps: 2720

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2205414 | 3441514 | 39.05% | 24630 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x1744aa-0x17bf1f` | 31349 |
| `.text` | `0xd85c7-0xe0017` | 31312 |
| `.text` | `0x36d31b-0x374d29` | 31246 |
| `.text` | `0x3431d8-0x34abc6` | 31214 |
| `.text` | `0x2cb307-0x2d2cf4` | 31213 |
| `.text` | `0x2b2575-0x2b9f30` | 31163 |
| `.text` | `0x42da93-0x4353f8` | 31077 |
| `.text` | `0x1d8c5a-0x1e05a8` | 31054 |
| `.text` | `0x275241-0x27cb8e` | 31053 |
| `.text` | `0x19a685-0x1a1fa3` | 31006 |
| `.text` | `0x410f42-0x41883d` | 30971 |
| `.text` | `0x42141f-0x428ce3` | 30916 |
| `.text` | `0x440067-0x4478f4` | 30861 |
| `.text` | `0x47c230-0x483a1a` | 30698 |
| `.text` | `0x1123bf-0x119b8e` | 30671 |
| `.text` | `0x1b93ce-0x1c0b59` | 30603 |
| `.text` | `0x2630c2-0x26a821` | 30559 |
| `.text` | `0x447925-0x44f040` | 30491 |
| `.text` | `0x200234-0x20792d` | 30457 |
| `.text` | `0x153f13-0x15b5b2` | 30367 |
| `.text` | `0x3cd3ff-0x3d4a95` | 30358 |
| `.text` | `0x2ffa1e-0x307093` | 30325 |
| `.text` | `0x37ed30-0x386394` | 30308 |
| `.text` | `0x464e34-0x46c45b` | 30247 |
| `.text` | `0x35148a-0x358a24` | 30106 |
| `.text` | `0x474cee-0x47c22d` | 30015 |
| `.text` | `0x3f519e-0x3fc6bc` | 29982 |
| `.text` | `0x3ab015-0x3b24aa` | 29845 |
| `.text` | `0x2364b6-0x23d8b8` | 29698 |
| `.text` | `0x128cdc-0x1300d5` | 29689 |
| `.text` | `0x241418-0x248752` | 29498 |
| `.text` | `0x22a266-0x231586` | 29472 |
| `.text` | `0x3e7696-0x3ee99a` | 29444 |
| `.text` | `0x3202bb-0x3275b6` | 29435 |
| `.text` | `0x327655-0x32e8e4` | 29327 |
| `.text` | `0x1eeae8-0x1f5d10` | 29224 |
| `.text` | `0xf7d9c-0xfeebc` | 28960 |
| `.text` | `0x11f746-0x126851` | 28939 |
| `.text` | `0x3ff4d1-0x4065ad` | 28892 |
| `.text` | `0x24dcbc-0x254abd` | 28161 |
