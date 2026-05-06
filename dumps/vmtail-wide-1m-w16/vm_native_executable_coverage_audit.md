# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2257398
- uncovered executable bytes: 3393642
- recovered range rows: 25590
- uncovered gaps: 2726

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2253286 | 3393642 | 39.90% | 25330 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x474cee-0x47c22d` | 30015 |
| `.text` | `0x3f519e-0x3fc6bc` | 29982 |
| `.text` | `0x200434-0x20792d` | 29945 |
| `.text` | `0x3ab015-0x3b24aa` | 29845 |
| `.text` | `0xd8bc7-0xe0017` | 29776 |
| `.text` | `0x2364b6-0x23d8b8` | 29698 |
| `.text` | `0x128cdc-0x1300d5` | 29689 |
| `.text` | `0x3437d8-0x34abc6` | 29678 |
| `.text` | `0x2b2b75-0x2b9f30` | 29627 |
| `.text` | `0x1d925a-0x1e05a8` | 29518 |
| `.text` | `0x241418-0x248752` | 29498 |
| `.text` | `0x22a266-0x231586` | 29472 |
| `.text` | `0x19ac85-0x1a1fa3` | 29470 |
| `.text` | `0x3e7696-0x3ee99a` | 29444 |
| `.text` | `0x3202bb-0x3275b6` | 29435 |
| `.text` | `0x327655-0x32e8e4` | 29327 |
| `.text` | `0x1eeae8-0x1f5d10` | 29224 |
| `.text` | `0x1b99ce-0x1c0b59` | 29067 |
| `.text` | `0xf7d9c-0xfeebc` | 28960 |
| `.text` | `0x447f25-0x44f040` | 28955 |
| `.text` | `0x11f746-0x126851` | 28939 |
| `.text` | `0x3ff4d1-0x4065ad` | 28892 |
| `.text` | `0x421c1f-0x428ce3` | 28868 |
| `.text` | `0x3cd9ff-0x3d4a95` | 28822 |
| `.text` | `0x174eaa-0x17bf1f` | 28789 |
| `.text` | `0x36dd1b-0x374d29` | 28686 |
| `.text` | `0x2cbd07-0x2d2cf4` | 28653 |
| `.text` | `0x42e493-0x4353f8` | 28517 |
| `.text` | `0x275c41-0x27cb8e` | 28493 |
| `.text` | `0x411942-0x41883d` | 28411 |
| `.text` | `0x440a67-0x4478f4` | 28301 |
| `.text` | `0x37f530-0x386394` | 28260 |
| `.text` | `0x465634-0x46c45b` | 28199 |
| `.text` | `0x24dcbc-0x254abd` | 28161 |
| `.text` | `0x47cc30-0x483a1a` | 28138 |
| `.text` | `0x112dbf-0x119b8e` | 28111 |
| `.text` | `0x351c8a-0x358a24` | 28058 |
| `.text` | `0x263ac2-0x26a821` | 27999 |
| `.text` | `0x154913-0x15b5b2` | 27807 |
| `.text` | `0x30041e-0x307093` | 27765 |
