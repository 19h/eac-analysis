# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 2465782
- uncovered executable bytes: 3185258
- recovered range rows: 28676
- uncovered gaps: 2782

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 2461670 | 3185258 | 43.59% | 28416 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x12a0dc-0x1300d5` | 24569 |
| `.text` | `0x113bbf-0x119b8e` | 24527 |
| `.text` | `0x51c1c0-0x522120` | 24416 |
| `.text` | `0x4762ee-0x47c22d` | 24383 |
| `.text` | `0x242818-0x248752` | 24378 |
| `.text` | `0x22b666-0x231586` | 24352 |
| `.text` | `0x3e8a96-0x3ee99a` | 24324 |
| `.text` | `0x4006d1-0x4065ad` | 24284 |
| `.text` | `0x286ccb-0x28cb6f` | 24228 |
| `.text` | `0x4065e5-0x40c488` | 24227 |
| `.text` | `0x3cebff-0x3d4a95` | 24214 |
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
| `.text` | `0x30161e-0x307093` | 23157 |
| `.text` | `0x2db70e-0x2e117a` | 23148 |
| `.text` | `0x380930-0x386394` | 23140 |
| `.text` | `0x466a34-0x46c45b` | 23079 |
| `.text` | `0x36f31b-0x374d29` | 23054 |
| `.text` | `0x4deff9-0x4e49f9` | 23040 |
