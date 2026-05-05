# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 465630
- uncovered executable bytes: 5185410
- recovered range rows: 2901
- uncovered gaps: 390

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 0 | 23 | 0.00% | 0 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 0 | 4064 | 0.00% | 0 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 0 | 16 | 0.00% | 0 |
| `.text` | `0x20c00-0x583650` | 5646928 | 465630 | 5181298 | 8.24% | 2901 |
| `.fini` | `0x583650-0x583659` | 9 | 0 | 9 | 0.00% | 0 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x3ddc80-0x4885ae` | 698670 |
| `.text` | `0x2316b6-0x2d2cf4` | 661054 |
| `.text` | `0x1a3fa9-0x212399` | 451568 |
| `.text` | `0x1061bf-0x15b5b2` | 349171 |
| `.text` | `0x3a2739-0x3ddb5d` | 242724 |
| `.text` | `0x2d2e69-0x30d540` | 239319 |
| `.text` | `0x36b11b-0x3a262e` | 226579 |
| `.text` | `0x33f273-0x36afd2` | 179551 |
| `.text` | `0x30d658-0x337d35` | 173789 |
| `.text` | `0x17c085-0x1a3e94` | 163343 |
| `.text` | `0x15b6f2-0x17bf1f` | 133165 |
| `.text` | `0x212547-0x231586` | 127039 |
| `.text` | `0xe0166-0xfeebc` | 126294 |
| `.text` | `0x4d8e02-0x4e9ae0` | 68830 |
| `.text` | `0xcf5c7-0xe0017` | 68176 |
| `.text` | `0x519847-0x522540` | 36089 |
| `.text` | `0x4f33d6-0x4fbb00` | 34602 |
| `.text` | `0x39101-0x4096a` | 30825 |
| `.text` | `0xfefee-0x1060ab` | 28861 |
| `.text` | `0x53c60b-0x542470` | 24165 |
| `.text` | `0x57d6e5-0x583450` | 23915 |
| `.text` | `0x542916-0x5484b0` | 23450 |
| `.text` | `0x52b558-0x530c90` | 22328 |
| `.text` | `0x492a6e-0x497e60` | 21490 |
| `.text` | `0x55ee32-0x564190` | 21342 |
| `.text` | `0x6c090-0x713da` | 21322 |
| `.text` | `0x49e89c-0x4a3b70` | 21204 |
| `.text` | `0x4ea2d5-0x4ef000` | 19755 |
| `.text` | `0x530e56-0x535930` | 19162 |
| `.text` | `0x5149d8-0x519120` | 18248 |
| `.text` | `0x4d46ec-0x4d8cc0` | 17876 |
| `.text` | `0x4a48e0-0x4a8c40` | 17248 |
| `.text` | `0x57391c-0x577a20` | 16644 |
| `.text` | `0x4ef117-0x4f2d50` | 15417 |
| `.text` | `0x33b642-0x33f109` | 15047 |
| `.text` | `0x56c0f5-0x56fab0` | 14779 |
| `.text` | `0x63514-0x66ea2` | 14734 |
| `.text` | `0x4bcf54-0x4c0830` | 14556 |
| `.text` | `0x5226f9-0x525bd0` | 13527 |
| `.text` | `0x53907d-0x53c4b0` | 13363 |
