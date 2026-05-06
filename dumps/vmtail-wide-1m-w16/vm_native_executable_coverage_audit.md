# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4076662
- uncovered executable bytes: 1574378
- recovered range rows: 51604
- uncovered gaps: 3207

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4072550 | 1574378 | 72.11% | 51344 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x57094e-0x572060` | 5906 |
| `.text` | `0x15daec-0x15f1f0` | 5892 |
| `.text` | `0x206234-0x20792d` | 5881 |
| `.text` | `0x38b1a8-0x38c897` | 5871 |
| `.text` | `0x3b24b4-0x3b3b9d` | 5865 |
| `.text` | `0x42761f-0x428ce3` | 5828 |
| `.text` | `0x34ec85-0x35033a` | 5813 |
| `.text` | `0x159f13-0x15b5b2` | 5791 |
| `.text` | `0x2d6869-0x2d7efd` | 5780 |
| `.text` | `0x17a8aa-0x17bf1f` | 5749 |
| `.text` | `0x2d7f16-0x2d9584` | 5742 |
| `.text` | `0x34bbe6-0x34d253` | 5741 |
| `.text` | `0x13ac09-0x13c266` | 5725 |
| `.text` | `0xde9c7-0xe0017` | 5712 |
| `.text` | `0x40cedf-0x40e52b` | 5708 |
| `.text` | `0x2c1e00-0x2c342b` | 5675 |
| `.text` | `0x1a94bb-0x1aaadd` | 5666 |
| `.text` | `0x2534bc-0x254abd` | 5633 |
| `.text` | `0x1ca955-0x1cbf51` | 5628 |
| `.text` | `0x3e0280-0x3e185b` | 5595 |
| `.text` | `0x2b8975-0x2b9f30` | 5563 |
| `.text` | `0x3973e1-0x398978` | 5527 |
| `.text` | `0x3d34ff-0x3d4a95` | 5526 |
| `.text` | `0x2c3a4e-0x2c4fc5` | 5495 |
| `.text` | `0x2a3119-0x2a468f` | 5494 |
| `.text` | `0xcde60-0xcf3c7` | 5479 |
| `.text` | `0x433e93-0x4353f8` | 5477 |
| `.text` | `0x3a7339-0x3a8871` | 5432 |
| `.text` | `0x33b642-0x33cb73` | 5425 |
| `.text` | `0x230066-0x231586` | 5408 |
| `.text` | `0x24c57d-0x24da7f` | 5378 |
| `.text` | `0x4dd8f9-0x4dedf9` | 5376 |
| `.text` | `0x417342-0x41883d` | 5371 |
| `.text` | `0x4050d1-0x4065ad` | 5340 |
| `.text` | `0x1ad71e-0x1aebf9` | 5339 |
| `.text` | `0x3cb479-0x3cc938` | 5311 |
| `.text` | `0x29004c-0x2914ea` | 5278 |
| `.text` | `0x212547-0x2139db` | 5268 |
| `.text` | `0x4e3579-0x4e49f9` | 5248 |
| `.text` | `0x13010e-0x13158d` | 5247 |
