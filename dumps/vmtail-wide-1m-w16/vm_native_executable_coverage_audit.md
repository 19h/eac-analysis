# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 1603302
- uncovered executable bytes: 4047738
- recovered range rows: 16014
- uncovered gaps: 2530

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 1603302 | 4043626 | 28.39% | 16014 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x3186bb-0x3275b6` | 61179 |
| `.text` | `0x438a67-0x4478f4` | 61069 |
| `.text` | `0x1e6ee8-0x1f5d10` | 60968 |
| `.text` | `0x4dadf9-0x4e9ae0` | 60647 |
| `.text` | `0x2ab375-0x2b9f30` | 60347 |
| `.text` | `0x25bcc2-0x26a821` | 60255 |
| `.text` | `0x1d1a5a-0x1e05a8` | 60238 |
| `.text` | `0xf039c-0xfeebc` | 60192 |
| `.text` | `0x16d4aa-0x17bf1f` | 60021 |
| `.text` | `0xd15c7-0xe0017` | 59984 |
| `.text` | `0x10b1bf-0x119b8e` | 59855 |
| `.text` | `0x222c66-0x231586` | 59680 |
| `.text` | `0x193685-0x1a1fa3` | 59678 |
| `.text` | `0x14cd13-0x15b5b2` | 59551 |
| `.text` | `0x2f881e-0x307093` | 59509 |
| `.text` | `0x45dc34-0x46c45b` | 59431 |
| `.text` | `0x1b25ce-0x1c0b59` | 58763 |
| `.text` | `0x26ee41-0x27cb8e` | 56653 |
| `.text` | `0x3ee99e-0x3fc6bc` | 56606 |
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
