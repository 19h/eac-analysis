# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3040630
- uncovered executable bytes: 2610410
- recovered range rows: 36699
- uncovered gaps: 2934

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3036518 | 2610410 | 53.77% | 36439 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x42521f-0x428ce3` | 15044 |
| `.text` | `0x13cc68-0x140711` | 15017 |
| `.text` | `0x157b13-0x15b5b2` | 15007 |
| `.text` | `0x1011ee-0x104c68` | 14970 |
| `.text` | `0x1784aa-0x17bf1f` | 14965 |
| `.text` | `0x2dd70e-0x2e117a` | 14956 |
| `.text` | `0x136da4-0x13a7f8` | 14932 |
| `.text` | `0x2510bc-0x254abd` | 14849 |
| `.text` | `0x12c6dc-0x1300d5` | 14841 |
| `.text` | `0x3471d8-0x34abc6` | 14830 |
| `.text` | `0x2cf307-0x2d2cf4` | 14829 |
| `.text` | `0x1c1d7d-0x1c5750` | 14803 |
| `.text` | `0x2988c9-0x29c26e` | 14757 |
| `.text` | `0x2a0d19-0x2a468f` | 14710 |
| `.text` | `0x431a93-0x4353f8` | 14693 |
| `.text` | `0x279241-0x27cb8e` | 14669 |
| `.text` | `0x1a46bb-0x1a7ffe` | 14659 |
| `.text` | `0x3a4f39-0x3a8871` | 14648 |
| `.text` | `0x44b725-0x44f040` | 14619 |
| `.text` | `0x3eb096-0x3ee99a` | 14596 |
| `.text` | `0x323cbb-0x3275b6` | 14587 |
| `.text` | `0x204034-0x20792d` | 14585 |
| `.text` | `0x3d52a7-0x3d8b9b` | 14580 |
| `.text` | `0x388fa8-0x38c897` | 14575 |
| `.text` | `0x4541e3-0x457abc` | 14553 |
| `.text` | `0x2892cb-0x28cb6f` | 14500 |
| `.text` | `0x20959e-0x20ce34` | 14486 |
