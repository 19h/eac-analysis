# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4324598
- uncovered executable bytes: 1326442
- recovered range rows: 55087
- uncovered gaps: 3264

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4320486 | 1326442 | 76.51% | 54827 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x35033e-0x3513ff` | 4289 |
| `.text` | `0x32917-0x339bd` | 4262 |
| `.text` | `0x103bee-0x104c68` | 4218 |
| `.text` | `0x54626c-0x5472e0` | 4212 |
| `.text` | `0x75dc4-0x76e22` | 4190 |
| `.text` | `0x3080af-0x309106` | 4183 |
| `.text` | `0x1e05ab-0x1e15fc` | 4177 |
| `.text` | `0x35ac45-0x35bc7b` | 4150 |
| `.text` | `0x483a20-0x484a4f` | 4143 |
| `.text` | `0x2c2400-0x2c342b` | 4139 |
| `.text` | `0x46f0cb-0x4700ec` | 4129 |
| `.text` | `0x2c6664-0x2c7675` | 4113 |
| `.text` | `0x1abd1c-0x1acd1b` | 4095 |
| `.text` | `0x160e00-0x161df6` | 4086 |
| `.text` | `0x23fa34-0x240a05` | 4049 |
| `.text` | `0x2b8f75-0x2b9f30` | 4027 |
| `.text` | `0x540f3d-0x541ef0` | 4019 |
| `.text` | `0x44f045-0x44ffd8` | 3987 |
| `.text` | `0xe4166-0xe50f4` | 3982 |
| `.text` | `0x2da780-0x2db70a` | 3978 |
| `.text` | `0x4932c9-0x494251` | 3976 |
| `.text` | `0x41bc40-0x41cbc6` | 3974 |
| `.text` | `0x32e91e-0x32f88d` | 3951 |
| `.text` | `0x65ce3-0x66c36` | 3923 |
| `.text` | `0x33e1c0-0x33f109` | 3913 |
| `.text` | `0x5f8a5-0x607e2` | 3901 |
| `.text` | `0x4fabd6-0x4fbb00` | 3882 |
| `.text` | `0x342273-0x343193` | 3872 |
| `.text` | `0x3eda96-0x3ee99a` | 3844 |
| `.text` | `0x53e869-0x53f740` | 3799 |
| `.text` | `0x30af1d-0x30bdcd` | 3760 |
| `.text` | `0x28bccb-0x28cb6f` | 3748 |
| `.text` | `0x15a713-0x15b5b2` | 3743 |
| `.text` | `0x52ec97-0x52fb30` | 3737 |
| `.text` | `0x446a67-0x4478f4` | 3725 |
| `.text` | `0x4e3b79-0x4e49f9` | 3712 |
| `.text` | `0x13b409-0x13c266` | 3677 |
| `.text` | `0x1a303d-0x1a3e94` | 3671 |
| `.text` | `0x2e219b-0x2e2fee` | 3667 |
