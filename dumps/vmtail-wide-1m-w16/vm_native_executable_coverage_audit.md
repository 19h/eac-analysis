# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4694080
- uncovered executable bytes: 956960
- recovered range rows: 60056
- uncovered gaps: 3253

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4689968 | 956960 | 83.05% | 59796 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
| `.text` | `0x23d0b6-0x23d8b6` | 2048 |
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
| `.text` | `0x4e6ef9-0x4e7679` | 1920 |
| `.text` | `0x29511f-0x29589d` | 1918 |
| `.text` | `0x5451a2-0x545920` | 1918 |
| `.text` | `0x30cdd1-0x30d540` | 1903 |
| `.text` | `0x542c82-0x5433f0` | 1902 |
| `.text` | `0x5219c0-0x522120` | 1888 |
| `.text` | `0x494633-0x494d90` | 1885 |
| `.text` | `0x457ac3-0x45821d` | 1882 |
| `.text` | `0x664e3-0x66c36` | 1875 |
| `.text` | `0x1dfe5a-0x1e05a8` | 1870 |
| `.text` | `0x295ab8-0x2961e3` | 1835 |
| `.text` | `0x1a1885-0x1a1fa3` | 1822 |
| `.text` | `0x3b4ba4-0x3b52bf` | 1819 |
| `.text` | `0x57194e-0x572060` | 1810 |
| `.text` | `0x15eaec-0x15f1f0` | 1796 |
| `.text` | `0x207234-0x20792d` | 1785 |
| `.text` | `0x38c1a8-0x38c897` | 1775 |
| `.text` | `0x3b34b4-0x3b3b9d` | 1769 |
| `.text` | `0x54ae8c-0x54b560` | 1748 |
