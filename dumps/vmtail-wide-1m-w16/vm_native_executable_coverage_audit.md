# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3996662
- uncovered executable bytes: 1654378
- recovered range rows: 50471
- uncovered gaps: 3192

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3992550 | 1654378 | 70.70% | 50211 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x20b59e-0x20ce34` | 6294 |
| `.text` | `0x32d055-0x32e8e4` | 6287 |
| `.text` | `0x3ba859-0x3bc0e4` | 6283 |
| `.text` | `0x33650c-0x337d35` | 6185 |
| `.text` | `0x1f44e8-0x1f5d10` | 6184 |
| `.text` | `0x23c0b6-0x23d8b8` | 6146 |
| `.text` | `0x1f5e08-0x1f7607` | 6143 |
| `.text` | `0x4a6a5e-0x4a8259` | 6139 |
| `.text` | `0x26d624-0x26ee18` | 6132 |
| `.text` | `0x4e82f9-0x4e9ae0` | 6119 |
| `.text` | `0x4f74e2-0x4f8cc0` | 6110 |
| `.text` | `0x1c3f7d-0x1c5750` | 6099 |
| `.text` | `0x1183bf-0x119b8e` | 6095 |
| `.text` | `0x4501df-0x4519a6` | 6087 |
| `.text` | `0x53ce0b-0x53e5a0` | 6037 |
| `.text` | `0xc80bb-0xc9849` | 6030 |
| `.text` | `0x1bf3ce-0x1c0b59` | 6027 |
| `.text` | `0x492ac9-0x494251` | 6024 |
| `.text` | `0x29411f-0x29589d` | 6014 |
| `.text` | `0x30bdd1-0x30d540` | 5999 |
| `.text` | `0x433c93-0x4353f8` | 5989 |
| `.text` | `0x5209c0-0x522120` | 5984 |
| `.text` | `0x1dee5a-0x1e05a8` | 5966 |
| `.text` | `0x247018-0x248752` | 5946 |
| `.text` | `0x1a0885-0x1a1fa3` | 5918 |
| `.text` | `0x3b3ba4-0x3b52bf` | 5915 |
| `.text` | `0x57094e-0x572060` | 5906 |
| `.text` | `0x15daec-0x15f1f0` | 5892 |
| `.text` | `0x206234-0x20792d` | 5881 |
| `.text` | `0x38b1a8-0x38c897` | 5871 |
| `.text` | `0x3b24b4-0x3b3b9d` | 5865 |
| `.text` | `0x42761f-0x428ce3` | 5828 |
| `.text` | `0x34ec85-0x35033a` | 5813 |
| `.text` | `0x159f13-0x15b5b2` | 5791 |
| `.text` | `0x2d6869-0x2d7efd` | 5780 |
| `.text` | `0x17a8aa-0x17bf1f` | 5749 |
| `.text` | `0x2d7f16-0x2d9584` | 5742 |
| `.text` | `0x34bbe6-0x34d253` | 5741 |
| `.text` | `0x13ac09-0x13c266` | 5725 |
| `.text` | `0xde9c7-0xe0017` | 5712 |
