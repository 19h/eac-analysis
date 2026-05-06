# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2485366
- uncovered executable bytes: 3165674
- recovered range rows: 28944
- uncovered gaps: 2790

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2481254 | 3165674 | 43.93% | 28684 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x328a55-0x32e8e4` | 24207 |
| `.text` | `0x237ab6-0x23d8b8` | 24066 |
| `.text` | `0x24ecbc-0x254abd` | 24065 |
| `.text` | `0x352c8a-0x358a24` | 23962 |
| `.text` | `0x264ac2-0x26a821` | 23903 |
| `.text` | `0x1da85a-0x1e05a8` | 23886 |
| `.text` | `0xf919c-0xfeebc` | 23840 |
| `.text` | `0x449325-0x44f040` | 23835 |
| `.text` | `0x201c34-0x20792d` | 23801 |
| `.text` | `0x42301f-0x428ce3` | 23748 |
| `.text` | `0x155913-0x15b5b2` | 23711 |
| `.text` | `0x3ac815-0x3b24aa` | 23701 |
| `.text` | `0xfefee-0x104c68` | 23674 |
| `.text` | `0x1762aa-0x17bf1f` | 23669 |
| `.text` | `0x344fd8-0x34abc6` | 23534 |
| `.text` | `0x2cd107-0x2d2cf4` | 23533 |
| `.text` | `0x42f893-0x4353f8` | 23397 |
| `.text` | `0x277041-0x27cb8e` | 23373 |
| `.text` | `0x3f6b9e-0x3fc6bc` | 23326 |
| `.text` | `0x120d46-0x126851` | 23307 |
| `.text` | `0x412d42-0x41883d` | 23291 |
| `.text` | `0x386da8-0x38c897` | 23279 |
| `.text` | `0x35f5be-0x3650ab` | 23277 |
| `.text` | `0x2870cb-0x28cb6f` | 23204 |
| `.text` | `0x30161e-0x307093` | 23157 |
| `.text` | `0x2db70e-0x2e117a` | 23148 |
| `.text` | `0x380930-0x386394` | 23140 |
| `.text` | `0x466a34-0x46c45b` | 23079 |
| `.text` | `0x36f31b-0x374d29` | 23054 |
| `.text` | `0x4deff9-0x4e49f9` | 23040 |
| `.text` | `0x47e030-0x483a1a` | 23018 |
| `.text` | `0x2b4575-0x2b9f30` | 22971 |
| `.text` | `0x1bb1ce-0x1c0b59` | 22923 |
| `.text` | `0x374d6a-0x37a6c8` | 22878 |
| `.text` | `0x22bc66-0x231586` | 22816 |
| `.text` | `0x19c685-0x1a1fa3` | 22814 |
| `.text` | `0x321cbb-0x3275b6` | 22779 |
| `.text` | `0x4521e3-0x457abc` | 22745 |
| `.text` | `0x330c23-0x3364f8` | 22741 |
| `.text` | `0x3cf1ff-0x3d4a95` | 22678 |
