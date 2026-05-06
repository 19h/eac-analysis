# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2862710
- uncovered executable bytes: 2788330
- recovered range rows: 34275
- uncovered gaps: 2889

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2858598 | 2788330 | 50.62% | 34015 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x22d066-0x231586` | 17696 |
| `.text` | `0x3883a8-0x38c897` | 17647 |
| `.text` | `0x4020d1-0x4065ad` | 17628 |
| `.text` | `0x4535e3-0x457abc` | 17625 |
| `.text` | `0x13c268-0x140711` | 17577 |
| `.text` | `0x20899e-0x20ce34` | 17558 |
| `.text` | `0x1007ee-0x104c68` | 17530 |
| `.text` | `0x177aaa-0x17bf1f` | 17525 |
| `.text` | `0xdbbc7-0xe0017` | 17488 |
| `.text` | `0x12bcdc-0x1300d5` | 17401 |
| `.text` | `0x38dca0-0x392091` | 17393 |
| `.text` | `0x3467d8-0x34abc6` | 17390 |
| `.text` | `0x35468a-0x358a24` | 17306 |
| `.text` | `0x418840-0x41cbc6` | 17286 |
| `.text` | `0x29151f-0x29589d` | 17278 |
| `.text` | `0x431093-0x4353f8` | 17253 |
| `.text` | `0x1dc25a-0x1e05a8` | 17230 |
| `.text` | `0x278841-0x27cb8e` | 17229 |
| `.text` | `0x477eee-0x47c22d` | 17215 |
| `.text` | `0x3a4539-0x3a8871` | 17208 |
| `.text` | `0xfab9c-0xfeebc` | 17184 |
| `.text` | `0x44ad25-0x44f040` | 17179 |
| `.text` | `0x122546-0x126851` | 17163 |
| `.text` | `0x3ea696-0x3ee99a` | 17156 |
| `.text` | `0x24977d-0x24da7f` | 17154 |
| `.text` | `0x3232bb-0x3275b6` | 17147 |
| `.text` | `0x203634-0x20792d` | 17145 |
| `.text` | `0x2888cb-0x28cb6f` | 17060 |
| `.text` | `0x28d24c-0x2914ea` | 17054 |
| `.text` | `0x443667-0x4478f4` | 17037 |
| `.text` | `0x2dcf0e-0x2e117a` | 17004 |
| `.text` | `0x6cc90-0x70ef4` | 16996 |
| `.text` | `0x29c2bf-0x2a04ec` | 16941 |
| `.text` | `0x1f1ae8-0x1f5d10` | 16936 |
| `.text` | `0x4e07f9-0x4e49f9` | 16896 |
| `.text` | `0x1c157d-0x1c5750` | 16851 |
| `.text` | `0x2980c9-0x29c26e` | 16805 |
| `.text` | `0xe0f66-0xe50f4` | 16782 |
| `.text` | `0x2a0519-0x2a468f` | 16758 |
| `.text` | `0x3c19dd-0x3c5b46` | 16745 |
