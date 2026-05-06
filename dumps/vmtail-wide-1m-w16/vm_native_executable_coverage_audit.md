# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2996214
- uncovered executable bytes: 2654826
- recovered range rows: 36086
- uncovered gaps: 2922

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2992102 | 2654826 | 52.98% | 35826 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x3c8a79-0x3cc938` | 16063 |
| `.text` | `0x208f9e-0x20ce34` | 16022 |
| `.text` | `0x3ae615-0x3b24aa` | 16021 |
| `.text` | `0x30321e-0x307093` | 15989 |
| `.text` | `0x2ba7a9-0x2be60e` | 15973 |
| `.text` | `0x468634-0x46c45b` | 15911 |
| `.text` | `0x250cbc-0x254abd` | 15873 |
| `.text` | `0x38e2a0-0x392091` | 15857 |
| `.text` | `0x3d9db9-0x3ddb5d` | 15780 |
| `.text` | `0x354c8a-0x358a24` | 15770 |
| `.text` | `0x5318ac-0x535610` | 15716 |
| `.text` | `0x266ac2-0x26a821` | 15711 |
| `.text` | `0x1dc85a-0x1e05a8` | 15694 |
| `.text` | `0x4784ee-0x47c22d` | 15679 |
| `.text` | `0x244a18-0x248752` | 15674 |
| `.text` | `0xfb19c-0xfeebc` | 15648 |
| `.text` | `0x332823-0x3364f8` | 15573 |
| `.text` | `0x42501f-0x428ce3` | 15556 |
| `.text` | `0x28d84c-0x2914ea` | 15518 |
| `.text` | `0x2d4269-0x2d7efd` | 15508 |
| `.text` | `0x1782aa-0x17bf1f` | 15477 |
| `.text` | `0xdc3c7-0xe0017` | 15440 |
| `.text` | `0x2bf800-0x2c342b` | 15403 |
| `.text` | `0x1f20e8-0x1f5d10` | 15400 |
| `.text` | `0x1cd601-0x1d1223` | 15394 |
| `.text` | `0x1c8355-0x1cbf51` | 15356 |
| `.text` | `0x26b224-0x26ee18` | 15348 |
| `.text` | `0x3ddc80-0x3e185b` | 15323 |
| `.text` | `0x115fbf-0x119b8e` | 15311 |
| `.text` | `0xe1566-0xe50f4` | 15246 |
| `.text` | `0x1bcfce-0x1c0b59` | 15243 |
| `.text` | `0x419040-0x41cbc6` | 15238 |
| `.text` | `0x291d1f-0x29589d` | 15230 |
| `.text` | `0x51e5c0-0x522120` | 15200 |
| `.text` | `0x22da66-0x231586` | 15136 |
| `.text` | `0x3f8b9e-0x3fc6bc` | 15134 |
| `.text` | `0x122d46-0x126851` | 15115 |
| `.text` | `0x249f7d-0x24da7f` | 15106 |
| `.text` | `0x402ad1-0x4065ad` | 15068 |
| `.text` | `0x13cc68-0x140711` | 15017 |
