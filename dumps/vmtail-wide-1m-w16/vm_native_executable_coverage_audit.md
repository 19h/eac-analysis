# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4365035
- uncovered executable bytes: 1286005
- recovered range rows: 55565
- uncovered gaps: 3272

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4360923 | 1286005 | 77.22% | 55305 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
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
| `.text` | `0x44e225-0x44f040` | 3611 |
| `.text` | `0x2c6864-0x2c7675` | 3601 |
| `.text` | `0x2962a8-0x2970b7` | 3599 |
| `.text` | `0x393bcb-0x3949d5` | 3594 |
| `.text` | `0x3bfbb5-0x3c09b1` | 3580 |
| `.text` | `0x3912a0-0x392091` | 3569 |
| `.text` | `0x5260be-0x526ea0` | 3554 |
| `.text` | `0x486462-0x487214` | 3506 |
| `.text` | `0x3dcdb9-0x3ddb5d` | 3492 |
| `.text` | `0x48b066-0x48bde0` | 3450 |
| `.text` | `0x48a14d-0x48aec0` | 3443 |
| `.text` | `0x3c4ddd-0x3c5b46` | 3433 |
| `.text` | `0x385630-0x386394` | 3428 |
| `.text` | `0x39cdb1-0x39db0e` | 3421 |
| `.text` | `0x3643be-0x3650ab` | 3309 |
