# VM Sampled Operand Catalog

- trace rows: `769225`
- matched events: `13`
- catalog rows: `12`
- operand byte mismatches: `0`
- rejected rows: `exact:767575,long_branch:1637`

| Source | Target | Delta | Events | Footprint | Statuses | Lift |
| ---: | ---: | ---: | ---: | ---: | --- | --- |
| 95 | 86 | `+0x2341b` | 2 | `0xa` | `prefix_32_of_144411:2` | `sampled operand footprint 0xa; observed target table[86], delta +0x2341b` |
| 95 | 42 | `+0x1d02e` | 1 | `0xa` | `prefix_32_of_118830:1` | `sampled operand footprint 0xa; observed target table[42], delta +0x1d02e` |
| 175 | 310 | `+0x2cef7` | 1 | `0x6` | `prefix_32_of_184055:1` | `sampled operand footprint 0x6; observed target table[310], delta +0x2cef7` |
| 195 | 86 | `-0x2306` | 1 | `0x6` | `backedge_sample:1` | `sampled operand footprint 0x6; observed target table[86], delta -0x2306` |
| 195 | 310 | `-0x542a` | 1 | `0x6` | `backedge_sample:1` | `sampled operand footprint 0x6; observed target table[310], delta -0x542a` |
| 195 | 310 | `-0x8c8e` | 1 | `0x6` | `backedge_sample:1` | `sampled operand footprint 0x6; observed target table[310], delta -0x8c8e` |
| 278 | 323 | `+0x221770` | 1 | `0xa` | `prefix_32_of_2234224:1` | `sampled operand footprint 0xa; observed target table[323], delta +0x221770` |
| 278 | 86 | `+0x2426ba` | 1 | `0xa` | `prefix_32_of_2369210:1` | `sampled operand footprint 0xa; observed target table[86], delta +0x2426ba` |
| 299 | 169 | `-0x7fe6` | 1 | `0x6` | `backedge_sample:1` | `sampled operand footprint 0x6; observed target table[169], delta -0x7fe6` |
| 299 | 310 | `-0xcf8b` | 1 | `0x6` | `backedge_sample:1` | `sampled operand footprint 0x6; observed target table[310], delta -0xcf8b` |
| 311 | 42 | `+0x169eb` | 1 | `0xa` | `prefix_32_of_92651:1` | `sampled operand footprint 0xa; observed target table[42], delta +0x169eb` |
| 311 | 42 | `-0x34ced` | 1 | `0xa` | `backedge_sample:1` | `sampled operand footprint 0xa; observed target table[42], delta -0x34ced` |
