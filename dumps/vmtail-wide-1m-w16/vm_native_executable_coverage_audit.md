# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3591670
- uncovered executable bytes: 2059370
- recovered range rows: 44453
- uncovered gaps: 3070

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3587558 | 2059370 | 63.53% | 44193 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x479aee-0x47c22d` | 10047 |
| `.text` | `0x15caec-0x15f1f0` | 9988 |
| `.text` | `0x24b37d-0x24da7f` | 9986 |
| `.text` | `0x205234-0x20792d` | 9977 |
| `.text` | `0x38a1a8-0x38c897` | 9967 |
| `.text` | `0x3484d8-0x34abc6` | 9966 |
| `.text` | `0x42661f-0x428ce3` | 9924 |
| `.text` | `0x34dc85-0x35033a` | 9909 |
| `.text` | `0x30971d-0x30bdcd` | 9904 |
| `.text` | `0x13e068-0x140711` | 9897 |
| `.text` | `0x158f13-0x15b5b2` | 9887 |
| `.text` | `0x445267-0x4478f4` | 9869 |
| `.text` | `0x1798aa-0x17bf1f` | 9845 |
| `.text` | `0x34abe6-0x34d253` | 9837 |
| `.text` | `0xdd9c7-0xe0017` | 9808 |
| `.text` | `0x2c0e00-0x2c342b` | 9771 |
| `.text` | `0x2c5064-0x2c7675` | 9745 |
| `.text` | `0x2524bc-0x254abd` | 9729 |
| `.text` | `0x1c9955-0x1cbf51` | 9724 |
| `.text` | `0x481430-0x483a1a` | 9706 |
| `.text` | `0x3df280-0x3e185b` | 9691 |
| `.text` | `0x2b7975-0x2b9f30` | 9659 |
| `.text` | `0x3db5b9-0x3ddb5d` | 9636 |
| `.text` | `0x35648a-0x358a24` | 9626 |
| `.text` | `0x2a2119-0x2a468f` | 9590 |
| `.text` | `0x37816a-0x37a6c8` | 9566 |
| `.text` | `0x3a6339-0x3a8871` | 9528 |
| `.text` | `0x22f066-0x231586` | 9504 |
| `.text` | `0x416342-0x41883d` | 9467 |
| `.text` | `0x3ca479-0x3cc938` | 9407 |
| `.text` | `0x409fe5-0x40c488` | 9379 |
| `.text` | `0x28f04c-0x2914ea` | 9374 |
| `.text` | `0x2d5a69-0x2d7efd` | 9364 |
| `.text` | `0x4dc979-0x4dedf9` | 9344 |
| `.text` | `0x4e2579-0x4e49f9` | 9344 |
| `.text` | `0x1027ee-0x104c68` | 9338 |
| `.text` | `0x6ea90-0x70ef4` | 9316 |
| `.text` | `0x37a6ca-0x37cb28` | 9310 |
| `.text` | `0x1383a4-0x13a7f8` | 9300 |
| `.text` | `0x4e76f9-0x4e9ae0` | 9191 |
