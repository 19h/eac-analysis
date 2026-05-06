# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3071990
- uncovered executable bytes: 2579050
- recovered range rows: 37087
- uncovered gaps: 2944

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3067878 | 2579050 | 54.32% | 36827 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x22dc66-0x231586` | 14624 |
| `.text` | `0x44b725-0x44f040` | 14619 |
| `.text` | `0x3eb096-0x3ee99a` | 14596 |
| `.text` | `0x323cbb-0x3275b6` | 14587 |
| `.text` | `0x204034-0x20792d` | 14585 |
| `.text` | `0x3d52a7-0x3d8b9b` | 14580 |
| `.text` | `0x388fa8-0x38c897` | 14575 |
| `.text` | `0x4541e3-0x457abc` | 14553 |
| `.text` | `0x2892cb-0x28cb6f` | 14500 |
| `.text` | `0x20959e-0x20ce34` | 14486 |
| `.text` | `0x32b055-0x32e8e4` | 14479 |
| `.text` | `0x444067-0x4478f4` | 14477 |
| `.text` | `0x6d690-0x70ef4` | 14436 |
| `.text` | `0x29ccbf-0x2a04ec` | 14381 |
| `.text` | `0x468c34-0x46c45b` | 14375 |
| `.text` | `0x23a0b6-0x23d8b8` | 14338 |
| `.text` | `0x1c8755-0x1cbf51` | 14332 |
| `.text` | `0x4e62f9-0x4e9ae0` | 14311 |
| `.text` | `0x2b6775-0x2b9f30` | 14267 |
| `.text` | `0x3da3b9-0x3ddb5d` | 14244 |
| `.text` | `0x419440-0x41cbc6` | 14214 |
| `.text` | `0x3c23dd-0x3c5b46` | 14185 |
| `.text` | `0x376f6a-0x37a6c8` | 14174 |
| `.text` | `0x39a3b1-0x39db0e` | 14173 |
| `.text` | `0x1dce5a-0x1e05a8` | 14158 |
| `.text` | `0x39ef14-0x3a262e` | 14106 |
