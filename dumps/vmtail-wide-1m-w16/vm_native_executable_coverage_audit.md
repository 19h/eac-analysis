# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4447762
- uncovered executable bytes: 1203278
- recovered range rows: 56630
- uncovered gaps: 3273

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4443650 | 1203278 | 78.69% | 56370 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x5260be-0x526ea0` | 3554 |
| `.text` | `0x486462-0x487214` | 3506 |
| `.text` | `0x3dcdb9-0x3ddb5d` | 3492 |
| `.text` | `0x44f245-0x44ffd8` | 3475 |
| `.text` | `0x48b066-0x48bde0` | 3450 |
| `.text` | `0x48a14d-0x48aec0` | 3443 |
| `.text` | `0x3c4ddd-0x3c5b46` | 3433 |
| `.text` | `0x385630-0x386394` | 3428 |
| `.text` | `0x39cdb1-0x39db0e` | 3421 |
| `.text` | `0x4fadd6-0x4fbb00` | 3370 |
| `.text` | `0x3643be-0x3650ab` | 3309 |
| `.text` | `0x3b78c9-0x3b85a9` | 3296 |
| `.text` | `0x53ea69-0x53f740` | 3287 |
| `.text` | `0x34d64-0x35a0a` | 3238 |
| `.text` | `0x52a2b6-0x52af50` | 3226 |
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
