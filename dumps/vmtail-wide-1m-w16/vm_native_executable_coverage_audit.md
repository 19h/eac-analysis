# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4831786
- uncovered executable bytes: 819254
- recovered range rows: 62027
- uncovered gaps: 3210

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4827674 | 819254 | 85.49% | 61767 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x4e07f9-0x4e0e79` | 1664 |
| `.text` | `0x4e59f9-0x4e6079` | 1664 |
| `.text` | `0x3a750-0x3ad24` | 1492 |
| `.text` | `0x41c64-0x4221c` | 1464 |
| `.text` | `0x4d4948-0x4d4f00` | 1464 |
| `.text` | `0x5348f-0x53a3e` | 1455 |
| `.text` | `0x29bcc9-0x29c26e` | 1445 |
| `.text` | `0x3d44ff-0x3d4a95` | 1430 |
| `.text` | `0x2a4119-0x2a468f` | 1398 |
| `.text` | `0xcee60-0xcf3c7` | 1383 |
| `.text` | `0x434e93-0x4353f8` | 1381 |
| `.text` | `0x494833-0x494d90` | 1373 |
| `.text` | `0x4c885e-0x4c8db0` | 1362 |
| `.text` | `0x48ca52-0x48cfa2` | 1360 |
| `.text` | `0x3a8339-0x3a8871` | 1336 |
| `.text` | `0x52cd59-0x52d290` | 1335 |
| `.text` | `0x4bcf54-0x4bd480` | 1324 |
| `.text` | `0x231066-0x231586` | 1312 |
| `.text` | `0x2c34b3-0x2c39c6` | 1299 |
| `.text` | `0x4f564b-0x4f5b50` | 1285 |
| `.text` | `0x24d57d-0x24da7f` | 1282 |
| `.text` | `0x4b5ade-0x4b5fe0` | 1282 |
| `.text` | `0x550d9f-0x5512a0` | 1281 |
| `.text` | `0x3db8b9-0x3dbdb9` | 1280 |
| `.text` | `0x466e34-0x467334` | 1280 |
| `.text` | `0x4dc3f9-0x4dc8f9` | 1280 |
| `.text` | `0x4e44f9-0x4e49f9` | 1280 |
| `.text` | `0x4e76f9-0x4e7bf9` | 1280 |
| `.text` | `0x418342-0x41883d` | 1275 |
| `.text` | `0x55b9cc-0x55bec0` | 1268 |
| `.text` | `0x6771a-0x67c0c` | 1266 |
| `.text` | `0x34a6d8-0x34abc6` | 1262 |
| `.text` | `0x51a12b-0x51a610` | 1253 |
| `.text` | `0x3b80c9-0x3b85a9` | 1248 |
| `.text` | `0x4060d1-0x4065ad` | 1244 |
| `.text` | `0x1ae71e-0x1aebf9` | 1243 |
| `.text` | `0x37459-0x37930` | 1239 |
| `.text` | `0x4c2b91-0x4c3060` | 1231 |
| `.text` | `0x3cc479-0x3cc938` | 1215 |
