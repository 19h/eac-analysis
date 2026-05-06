# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4561587
- uncovered executable bytes: 1089453
- recovered range rows: 58253
- uncovered gaps: 3265

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4557475 | 1089453 | 80.70% | 57993 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x367ab6-0x368588` | 2770 |
| `.text` | `0x501d23-0x5027f0` | 2765 |
| `.text` | `0x496fb-0x4a1b4` | 2745 |
| `.text` | `0x523b0b-0x5245c0` | 2741 |
| `.text` | `0x536e3b-0x5378f0` | 2741 |
| `.text` | `0x39209e-0x392b45` | 2727 |
| `.text` | `0x3b1a15-0x3b24aa` | 2709 |
| `.text` | `0x2e070e-0x2e117a` | 2668 |
| `.text` | `0x2bdba9-0x2be60e` | 2661 |
| `.text` | `0x283eee-0x28494c` | 2654 |
| `.text` | `0x3086af-0x309106` | 2647 |
| `.text` | `0x41dbcb-0x41e61c` | 2641 |
| `.text` | `0x5180b6-0x518b00` | 2634 |
| `.text` | `0x36a59e-0x36afd2` | 2612 |
| `.text` | `0x484020-0x484a4f` | 2607 |
| `.text` | `0x1f960a-0x1fa01f` | 2581 |
| `.text` | `0x54b98c-0x54c396` | 2570 |
| `.text` | `0x1fa026-0x1faa2a` | 2564 |
| `.text` | `0x5758cd-0x5762d0` | 2563 |
| `.text` | `0x2af175-0x2afb75` | 2560 |
| `.text` | `0x4e76f9-0x4e80f9` | 2560 |
| `.text` | `0x326bbb-0x3275b6` | 2555 |
| `.text` | `0x133da5-0x134781` | 2524 |
| `.text` | `0x55ee32-0x55f800` | 2510 |
| `.text` | `0x5149d8-0x5153a0` | 2504 |
| `.text` | `0x29b8c9-0x29c26e` | 2469 |
| `.text` | `0x75411-0x75db0` | 2463 |
| `.text` | `0x560262-0x560c00` | 2462 |
| `.text` | `0x35808a-0x358a24` | 2458 |
| `.text` | `0x53dc0b-0x53e5a0` | 2453 |
| `.text` | `0x2c464e-0x2c4fc5` | 2423 |
| `.text` | `0x33a87b-0x33b1f2` | 2423 |
| `.text` | `0x4e9179-0x4e9ae0` | 2407 |
| `.text` | `0x39d1b1-0x39db0e` | 2397 |
| `.text` | `0x27c241-0x27cb8e` | 2381 |
| `.text` | `0x47b8ee-0x47c22d` | 2367 |
| `.text` | `0x4a8271-0x4a8bb0` | 2367 |
| `.text` | `0x2958b8-0x2961e3` | 2347 |
| `.text` | `0x125f46-0x126851` | 2315 |
