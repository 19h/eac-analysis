# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4125814
- uncovered executable bytes: 1525226
- recovered range rows: 52230
- uncovered gaps: 3215

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4121702 | 1525226 | 72.99% | 51970 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
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
| `.text` | `0x6fa90-0x70ef4` | 5220 |
| `.text` | `0x2834ee-0x28494c` | 5214 |
| `.text` | `0x37b6ca-0x37cb28` | 5214 |
| `.text` | `0x1393a4-0x13a7f8` | 5204 |
| `.text` | `0x104c78-0x1060ab` | 5171 |
| `.text` | `0x30d658-0x30ea80` | 5160 |
| `.text` | `0x46b034-0x46c45b` | 5159 |
| `.text` | `0x40b065-0x40c488` | 5155 |
| `.text` | `0x2c6264-0x2c7675` | 5137 |
| `.text` | `0x1c437d-0x1c5750` | 5075 |
| `.text` | `0x50898b-0x509d40` | 5045 |
| `.text` | `0x53d20b-0x53e5a0` | 5013 |
| `.text` | `0x216c33-0x217fac` | 4985 |
| `.text` | `0x42ab17-0x42be7d` | 4966 |
| `.text` | `0x39c7b1-0x39db0e` | 4957 |
| `.text` | `0x211042-0x212399` | 4951 |
