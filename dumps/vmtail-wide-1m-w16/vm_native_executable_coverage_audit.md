# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3502326
- uncovered executable bytes: 2148714
- recovered range rows: 43135
- uncovered gaps: 3044

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3498214 | 2148714 | 61.94% | 42875 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x383a30-0x386394` | 10596 |
| `.text` | `0x267ec2-0x26a821` | 10591 |
| `.text` | `0x20fa42-0x212399` | 10583 |
| `.text` | `0x27a241-0x27cb8e` | 10573 |
| `.text` | `0x1a56bb-0x1a7ffe` | 10563 |
| `.text` | `0x340873-0x343193` | 10528 |
| `.text` | `0x44c725-0x44f040` | 10523 |
| `.text` | `0x123f46-0x126851` | 10507 |
| `.text` | `0x15c8ec-0x15f1f0` | 10500 |
| `.text` | `0x324cbb-0x3275b6` | 10491 |
| `.text` | `0x3627be-0x3650ab` | 10477 |
| `.text` | `0x3b5cc9-0x3b85a9` | 10464 |
| `.text` | `0x403cd1-0x4065ad` | 10460 |
| `.text` | `0x4551e3-0x457abc` | 10457 |
| `.text` | `0x28a2cb-0x28cb6f` | 10404 |
| `.text` | `0x20a59e-0x20ce34` | 10390 |
| `.text` | `0x32c055-0x32e8e4` | 10383 |
| `.text` | `0x445067-0x4478f4` | 10381 |
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
| `.text` | `0x24b37d-0x24da7f` | 9986 |
| `.text` | `0x205234-0x20792d` | 9977 |
| `.text` | `0x38a1a8-0x38c897` | 9967 |
| `.text` | `0x3484d8-0x34abc6` | 9966 |
| `.text` | `0x42661f-0x428ce3` | 9924 |
| `.text` | `0x34dc85-0x35033a` | 9909 |
