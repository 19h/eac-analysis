# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4524664
- uncovered executable bytes: 1126376
- recovered range rows: 57621
- uncovered gaps: 3266

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4520552 | 1126376 | 80.05% | 57361 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x11b9c1-0x11c52d` | 2924 |
| `.text` | `0x534aac-0x535610` | 2916 |
| `.text` | `0x4ffe7e-0x5009e0` | 2914 |
| `.text` | `0x3a88ad-0x3a940e` | 2913 |
| `.text` | `0x379b6a-0x37a6c8` | 2910 |
| `.text` | `0x1afc5a-0x1b07a5` | 2891 |
| `.text` | `0x43721-0x4425d` | 2876 |
| `.text` | `0x247c18-0x248752` | 2874 |
| `.text` | `0xc3726-0xc4258` | 2866 |
| `.text` | `0xfe39c-0xfeebc` | 2848 |
| `.text` | `0x3fbb9e-0x3fc6bc` | 2846 |
| `.text` | `0x3c6b6a-0x3c7677` | 2829 |
| `.text` | `0x4e3ef9-0x4e49f9` | 2816 |
| `.text` | `0x417d42-0x41883d` | 2811 |
| `.text` | `0x53907d-0x539b70` | 2803 |
| `.text` | `0x2fcf3-0x307d0` | 2781 |
| `.text` | `0x31783-0x32260` | 2781 |
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
