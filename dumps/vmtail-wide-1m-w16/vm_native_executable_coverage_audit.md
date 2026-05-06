# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4662419
- uncovered executable bytes: 988621
- recovered range rows: 59577
- uncovered gaps: 3254

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4658307 | 988621 | 82.49% | 59317 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x381c6-0x38a2e` | 2152 |
| `.text` | `0x519885-0x51a0ed` | 2152 |
| `.text` | `0x40dcdf-0x40e52b` | 2124 |
| `.text` | `0x46e87e-0x46f0b8` | 2106 |
| `.text` | `0x77a3d-0x7826e` | 2097 |
| `.text` | `0x33750c-0x337d35` | 2089 |
| `.text` | `0x1f54e8-0x1f5d10` | 2088 |
| `.text` | `0x4c0cae-0x4c14d0` | 2082 |
| `.text` | `0x2968a8-0x2970b7` | 2063 |
| `.text` | `0x4af02a-0x4af830` | 2054 |
| `.text` | `0x1fa226-0x1faa2a` | 2052 |
| `.text` | `0x23d0b6-0x23d8b8` | 2050 |
| `.text` | `0x24b77d-0x24bf7d` | 2048 |
| `.text` | `0x3b28b4-0x3b30b4` | 2048 |
| `.text` | `0x3e3496-0x3e3c96` | 2048 |
| `.text` | `0x40c4df-0x40ccdf` | 2048 |
| `.text` | `0x42081f-0x42101f` | 2048 |
| `.text` | `0x459c34-0x45a434` | 2048 |
| `.text` | `0x48a54d-0x48ad4d` | 2048 |
| `.text` | `0x53d20b-0x53da0b` | 2048 |
| `.text` | `0x1f6e08-0x1f7607` | 2047 |
| `.text` | `0x4a7a5e-0x4a8259` | 2043 |
| `.text` | `0x2b9b6-0x2c1b0` | 2042 |
| `.text` | `0x566f08-0x567700` | 2040 |
| `.text` | `0x26e624-0x26ee18` | 2036 |
| `.text` | `0x4f84e2-0x4f8cc0` | 2014 |
| `.text` | `0x3e1080-0x3e185b` | 2011 |
| `.text` | `0x6354a-0x63d20` | 2006 |
| `.text` | `0x26aae-0x27281` | 2003 |
| `.text` | `0x1193bf-0x119b8e` | 1999 |
| `.text` | `0x5124d4-0x512ca0` | 1996 |
| `.text` | `0x4511df-0x4519a6` | 1991 |
| `.text` | `0x488e87-0x489630` | 1961 |
| `.text` | `0x4f6c8e-0x4f7430` | 1954 |
| `.text` | `0x3981e1-0x398978` | 1943 |
| `.text` | `0x2be668-0x2bedfb` | 1939 |
| `.text` | `0xc90bb-0xc9849` | 1934 |
| `.text` | `0x1c03ce-0x1c0b59` | 1931 |
| `.text` | `0x15b6f2-0x15be73` | 1921 |
