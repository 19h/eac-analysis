# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3551222
- uncovered executable bytes: 2099818
- recovered range rows: 43886
- uncovered gaps: 3055

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3547110 | 2099818 | 62.81% | 43626 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x3b9859-0x3bc0e4` | 10379 |
| `.text` | `0x2de90e-0x2e117a` | 10348 |
| `.text` | `0x359445-0x35bc7b` | 10294 |
| `.text` | `0x1f34e8-0x1f5d10` | 10280 |
| `.text` | `0x23b0b6-0x23d8b8` | 10242 |
| `.text` | `0x12d8dc-0x1300d5` | 10233 |
| `.text` | `0x26c624-0x26ee18` | 10228 |
| `.text` | `0x1c2f7d-0x1c5750` | 10195 |
| `.text` | `0x484a62-0x487214` | 10162 |
| `.text` | `0x1be3ce-0x1c0b59` | 10123 |
| `.text` | `0x29311f-0x29589d` | 10110 |
| `.text` | `0x3c33dd-0x3c5b46` | 10089 |
| `.text` | `0x432c93-0x4353f8` | 10085 |
| `.text` | `0x1dde5a-0x1e05a8` | 10062 |
| `.text` | `0x27cb9f-0x27f2ea` | 10059 |
| `.text` | `0x479aee-0x47c22d` | 10047 |
| `.text` | `0x15caec-0x15f1f0` | 9988 |
| `.text` | `0x24b37d-0x24da7f` | 9986 |
| `.text` | `0x205234-0x20792d` | 9977 |
| `.text` | `0x38a1a8-0x38c897` | 9967 |
| `.text` | `0x3484d8-0x34abc6` | 9966 |
| `.text` | `0x42661f-0x428ce3` | 9924 |
| `.text` | `0x34dc85-0x35033a` | 9909 |
| `.text` | `0x30971d-0x30bdcd` | 9904 |
| `.text` | `0x13e068-0x140711` | 9897 |
| `.text` | `0x158f13-0x15b5b2` | 9887 |
| `.text` | `0x445267-0x4478f4` | 9869 |
| `.text` | `0x1798aa-0x17bf1f` | 9845 |
| `.text` | `0x34abe6-0x34d253` | 9837 |
| `.text` | `0xdd9c7-0xe0017` | 9808 |
| `.text` | `0x2c0e00-0x2c342b` | 9771 |
| `.text` | `0x2c5064-0x2c7675` | 9745 |
| `.text` | `0x2524bc-0x254abd` | 9729 |
| `.text` | `0x1c9955-0x1cbf51` | 9724 |
| `.text` | `0x481430-0x483a1a` | 9706 |
| `.text` | `0x3df280-0x3e185b` | 9691 |
| `.text` | `0x2b7975-0x2b9f30` | 9659 |
| `.text` | `0x3db5b9-0x3ddb5d` | 9636 |
| `.text` | `0x35648a-0x358a24` | 9626 |
| `.text` | `0x2a2119-0x2a468f` | 9590 |
