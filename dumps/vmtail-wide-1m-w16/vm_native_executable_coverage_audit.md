# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 4724613
- uncovered executable bytes: 926427
- recovered range rows: 60505
- uncovered gaps: 3247

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 4720501 | 926427 | 83.59% | 60245 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4dd8f9-0x4debf9` | 4864 |
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
| `.text` | `0x42861f-0x428ce3` | 1732 |
| `.text` | `0x540416-0x540ad0` | 1722 |
| `.text` | `0x548fd9-0x549690` | 1719 |
| `.text` | `0x53723b-0x5378f0` | 1717 |
| `.text` | `0x4cad5d-0x4cb410` | 1715 |
| `.text` | `0x52a8b6-0x52af50` | 1690 |
| `.text` | `0x2d7869-0x2d7efd` | 1684 |
| `.text` | `0x1a3fa9-0x1a4638` | 1679 |
| `.text` | `0x4e07f9-0x4e0e79` | 1664 |
| `.text` | `0x4e59f9-0x4e6079` | 1664 |
| `.text` | `0x52c360-0x52c9e0` | 1664 |
| `.text` | `0x17b8aa-0x17bf1f` | 1653 |
| `.text` | `0x2d8f16-0x2d9584` | 1646 |
| `.text` | `0x34cbe6-0x34d253` | 1645 |
| `.text` | `0x70890-0x70ef4` | 1636 |
| `.text` | `0xdf9c7-0xe0017` | 1616 |
| `.text` | `0x4d0eca-0x4d1510` | 1606 |
| `.text` | `0x33cb79-0x33d1ae` | 1589 |
