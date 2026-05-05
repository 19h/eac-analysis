# Synthetic Gap Table-Memory Probe

File-backed view of the residual table-relative offsets reached by live-context replay.

Rows: `20`

## Region Mix

| Region | Offset Observations |
| --- | ---: |
| `after_dispatch_table` | 27 |
| `inside_dispatch_table_unaligned` | 2 |

## Qword Class Mix

| Class | Offset Observations |
| --- | ---: |
| `non_pointer_bytes` | 27 |
| `low32_text_offset` | 2 |

## Residual Offsets

| Start | Source | Offset | File Off | Section | Region | Align | File Qword | Qword Class | Dynamic Next |
| --- | ---: | --- | --- | --- | --- | ---: | --- | --- | --- |
| `0xd1445` | 175 | `0x4388` | `0xc7aa0` | `.text` | `after_dispatch_table` | 0 | `0xcbef815f3ffec5cb` | `non_pointer_bytes` | entry 310 @ 0xd4893 |
| `0xd5ebc` | 195 | `0x49bd` | `0xc80d5` | `.text` | `after_dispatch_table` | 5 | `0x485d41e8294c1dfc` | `non_pointer_bytes` | entry 169 @ 0x18bd96 |
| `0xdaf39` | 195 | `0x1be` | `0xc38d6` | `.text` | `inside_dispatch_table_unaligned` | 6 | `0x83e760000` | `non_pointer_bytes` | entry 310 @ 0x18c084 |
| `0x122e3c` | 299 | `0xd9cf` | `0xd10e7` | `.text` | `after_dispatch_table` | 7 | `0x3a19d200798e3800` | `non_pointer_bytes` | entry 169 @ 0x2c0464 |
| `0x12906f` | 278 | `0xea3c` | `0xd2154` | `.text` | `after_dispatch_table` | 4 | `0x7e01e8aea57a01aa` | `non_pointer_bytes` | entry 310 @ 0x172d62 |
| `0x17452e` | 299 | `0x8144` | `0xcb85c` | `.text` | `after_dispatch_table` | 4 | `0x8b487dbe3446c381` | `non_pointer_bytes` | entry 310 @ 0x2bff9a |
| `0x17a420` | 175 | `0xc62` | `0xc437a` | `.text` | `after_dispatch_table` | 2 | `0x7967d1026806c02b` | `non_pointer_bytes` | entry 169 @ 0x120afe |
| `0x18c467` | 195 | `0xdf` | `0xc37f7` | `.text` | `inside_dispatch_table_unaligned` | 7 | `0x7e39000` | `non_pointer_bytes` | entry 310 @ 0x11d6ac |
| `0x1a6041` | 175 | `0xe281` | `0xd1999` | `.text` | `after_dispatch_table` | 1 | `0x3a098667ae2c3a01` | `non_pointer_bytes` | entry 169 @ 0x1221a0 |
| `0x1ed483` | 195 | `0x40be` | `0xc77d6` | `.text` | `after_dispatch_table` | 6 | `0x874800000008ea81` | `low32_text_offset` | entry 310 @ 0x121ed0 |
| `0x2304b8` | 195 | `0x71e0` | `0xca8f8` | `.text` | `after_dispatch_table` | 0 | `0xe98101c183d1f77f` | `non_pointer_bytes` | entry 169 @ 0xd100c |
| `0x231b74` | 195 | `0x69c0` | `0xca0d8` | `.text` | `after_dispatch_table` | 0 | `0x5a79ff5d4468525e` | `non_pointer_bytes` | entry 169 @ 0x121c8d |
| `0x24bd2a` | 299 | `0x448f` | `0xc7ba7` | `.text` | `after_dispatch_table` | 7 | `0xd5f708edc101e5c1` | `non_pointer_bytes` | entry 86 @ 0x11ac5a |
| `0x31f2b1` | 195 | `0x68c3` | `0xc9fdb` | `.text` | `after_dispatch_table` | 3 | `0x814853fbdfb1ed81` | `non_pointer_bytes` | entry 169 @ 0x11d925 |
| `0x333bc9` | 195 | `0x48e2` | `0xc7ffa` | `.text` | `after_dispatch_table` | 2 | `0x8ba4924` | `non_pointer_bytes` | entry 169 @ 0x31e249 |
| `0x33710f` | 299 | `0x8548` | `0xcbc60` | `.text` | `after_dispatch_table` | 0 | `0x5487beb7f7f05` | `non_pointer_bytes` | entry 310 @ 0x31e05c |
| `0x33a6cc` | 299 | `0x115e` | `0xc4876` | `.text` | `after_dispatch_table` | 6 | `0x8ec81485b41` | `non_pointer_bytes` | entry 169 @ 0x31e436 |
| `0x33d2d9` | 195 | `0x31e2` | `0xc68fa` | `.text` | `after_dispatch_table` | 2 | `0xfcc2a8c38148c301` | `non_pointer_bytes` | entry 169 @ 0x31e623 |
| `0x34556c` | 175 | `0xfa95` | `0xd31ad` | `.text` | `after_dispatch_table` | 5 | `0x22e66d1635d4b215` | `non_pointer_bytes` | entry 169 @ 0x11db12 |
| `0x3655e4` | 195 | `0x29c3` | `0xc60db` | `.text` | `after_dispatch_table` | 3 | `0x99416808c4834824` | `non_pointer_bytes` | entry 310 @ 0x11dcff |
