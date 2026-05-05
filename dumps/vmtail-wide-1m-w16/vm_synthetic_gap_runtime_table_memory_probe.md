# Synthetic Gap Runtime Table-Memory Probe

Postcall mapped-memory view of the residual table-relative offsets, used to check whether runtime relocation/patching turns rejected file bytes into usable dispatch targets.

Rows: `20`
Runtime maps: `4`
Runtime image base: `0x706c54a00000`
Runtime mapped image size: `0x64b000`

## Runtime/File Match Mix

| Match | Offset Observations |
| --- | ---: |
| `yes` | 27 |
| `no` | 2 |

## Runtime Qword Class Mix

| Class | Offset Observations |
| --- | ---: |
| `non_pointer_bytes` | 27 |
| `low32_text_offset` | 2 |

## File Qword Class Mix

| Class | Offset Observations |
| --- | ---: |
| `non_pointer_bytes` | 27 |
| `low32_text_offset` | 2 |

## Region Mix

| Region | Offset Observations |
| --- | ---: |
| `after_dispatch_table` | 27 |
| `inside_dispatch_table_unaligned` | 2 |

## Mismatched Runtime Bytes

| Start | Offset | File Off | Region | File Qword | Runtime Qword | Runtime Class | Runtime Target |
| --- | --- | --- | --- | --- | --- | --- | --- |
| `0xdaf39` | `0x1be` | `0xc38d6` | `inside_dispatch_table_unaligned` | `0x83e760000` | `0x706c54a83e760000` | `non_pointer_bytes` | - |
| `0x18c467` | `0xdf` | `0xc37f7` | `inside_dispatch_table_unaligned` | `0x7e39000` | `0x706c54a7e39000` | `non_pointer_bytes` | - |

## Residual Offsets

| Start | Source | Offset | File Off | Runtime VA | Match | Region | File Class | Runtime Class | Runtime Target | Dynamic Next |
| --- | ---: | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| `0xd1445` | 175 | `0x4388` | `0xc7aa0` | `0x706c54ac7aa0` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 310 @ 0xd4893 |
| `0xd5ebc` | 195 | `0x49bd` | `0xc80d5` | `0x706c54ac80d5` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 169 @ 0x18bd96 |
| `0xdaf39` | 195 | `0x1be` | `0xc38d6` | `0x706c54ac38d6` | `no` | `inside_dispatch_table_unaligned` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 310 @ 0x18c084 |
| `0x122e3c` | 299 | `0xd9cf` | `0xd10e7` | `0x706c54ad10e7` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 169 @ 0x2c0464 |
| `0x12906f` | 278 | `0xea3c` | `0xd2154` | `0x706c54ad2154` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 310 @ 0x172d62 |
| `0x17452e` | 299 | `0x8144` | `0xcb85c` | `0x706c54acb85c` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 310 @ 0x2bff9a |
| `0x17a420` | 175 | `0xc62` | `0xc437a` | `0x706c54ac437a` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 169 @ 0x120afe |
| `0x18c467` | 195 | `0xdf` | `0xc37f7` | `0x706c54ac37f7` | `no` | `inside_dispatch_table_unaligned` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 310 @ 0x11d6ac |
| `0x1a6041` | 175 | `0xe281` | `0xd1999` | `0x706c54ad1999` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 169 @ 0x1221a0 |
| `0x1ed483` | 195 | `0x40be` | `0xc77d6` | `0x706c54ac77d6` | `yes` | `after_dispatch_table` | `low32_text_offset` | `low32_text_offset` | 0x8ea81 | entry 310 @ 0x121ed0 |
| `0x2304b8` | 195 | `0x71e0` | `0xca8f8` | `0x706c54aca8f8` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 169 @ 0xd100c |
| `0x231b74` | 195 | `0x69c0` | `0xca0d8` | `0x706c54aca0d8` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 169 @ 0x121c8d |
| `0x24bd2a` | 299 | `0x448f` | `0xc7ba7` | `0x706c54ac7ba7` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 86 @ 0x11ac5a |
| `0x31f2b1` | 195 | `0x68c3` | `0xc9fdb` | `0x706c54ac9fdb` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 169 @ 0x11d925 |
| `0x333bc9` | 195 | `0x48e2` | `0xc7ffa` | `0x706c54ac7ffa` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 169 @ 0x31e249 |
| `0x33710f` | 299 | `0x8548` | `0xcbc60` | `0x706c54acbc60` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 310 @ 0x31e05c |
| `0x33a6cc` | 299 | `0x115e` | `0xc4876` | `0x706c54ac4876` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 169 @ 0x31e436 |
| `0x33d2d9` | 195 | `0x31e2` | `0xc68fa` | `0x706c54ac68fa` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 169 @ 0x31e623 |
| `0x34556c` | 175 | `0xfa95` | `0xd31ad` | `0x706c54ad31ad` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 169 @ 0x11db12 |
| `0x3655e4` | 195 | `0x29c3` | `0xc60db` | `0x706c54ac60db` | `yes` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | - | entry 310 @ 0x11dcff |

## Runtime Dispatch Targets

No residual runtime qword resolved to a dispatch-table target.

