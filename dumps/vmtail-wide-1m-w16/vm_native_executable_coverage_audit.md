# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4486900
- uncovered executable bytes: 1164140
- recovered range rows: 57124
- uncovered gaps: 3270

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4482788 | 1164140 | 79.38% | 56864 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x3bb459-0x3bc0e4` | 3211 |
| `.text` | `0x269bc2-0x26a821` | 3167 |
| `.text` | `0x46e47e-0x46f0b8` | 3130 |
| `.text` | `0x1d0601-0x1d1223` | 3106 |
| `.text` | `0x37411b-0x374d29` | 3086 |
| `.text` | `0x2d1307-0x2d1f07` | 3072 |
| `.text` | `0x20ee40-0x20fa39` | 3065 |
| `.text` | `0x2d2107-0x2d2cf4` | 3053 |
| `.text` | `0x482e30-0x483a1a` | 3050 |
| `.text` | `0x133ba5-0x134781` | 3036 |
| `.text` | `0x23fe34-0x240a05` | 3025 |
| `.text` | `0x3a9474-0x3aa011` | 2973 |
| `.text` | `0x35ea21-0x35f5bc` | 2971 |
| `.text` | `0x4936c9-0x494251` | 2952 |
| `.text` | `0x35de8a-0x35ea08` | 2942 |
| `.text` | `0x4be57b-0x4bf0f0` | 2933 |
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
