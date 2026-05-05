# Synthetic Gap Sampled-Control Correlation

Correlation between residual synthetic starts, sampled-operand sidecars, table-memory rejection, and the next hooked VMTAIL source.

Rows: `20`

- dynamic next source matches a sampled target entry: `9`
- dynamic next delta matches a sampled delta: `0`
- exact gap bytes match a sampled operand row: `0`

## Correlation Mix

| Class | Rows |
| --- | ---: |
| `sequence_only_no_sampled_target_match` | 11 |
| `sampled_target_match_delta_mismatch` | 9 |

## Residual Starts

| Start | Source | Dynamic Next | Sampled Targets | Sampled Deltas | Table Region | Class |
| --- | ---: | --- | --- | --- | --- | --- |
| `0xd1445` | 175 | entry 310 @ 0xd4893 | `310:1` | `+0x2cef7:1` | `after_dispatch_table` | `sampled_target_match_delta_mismatch` |
| `0xd5ebc` | 195 | entry 169 @ 0x18bd96 | `310:2,86:1` | `-0x2306:1,-0x542a:1,-0x8c8e:1` | `after_dispatch_table` | `sequence_only_no_sampled_target_match` |
| `0xdaf39` | 195 | entry 310 @ 0x18c084 | `310:2,86:1` | `-0x2306:1,-0x542a:1,-0x8c8e:1` | `inside_dispatch_table_unaligned` | `sampled_target_match_delta_mismatch` |
| `0x122e3c` | 299 | entry 169 @ 0x2c0464 | `169:1,310:1` | `-0x7fe6:1,-0xcf8b:1` | `after_dispatch_table` | `sampled_target_match_delta_mismatch` |
| `0x12906f` | 278 | entry 310 @ 0x172d62 | `323:1,86:1` | `+0x221770:1,+0x2426ba:1` | `after_dispatch_table` | `sequence_only_no_sampled_target_match` |
| `0x17452e` | 299 | entry 310 @ 0x2bff9a | `169:1,310:1` | `-0x7fe6:1,-0xcf8b:1` | `after_dispatch_table` | `sampled_target_match_delta_mismatch` |
| `0x17a420` | 175 | entry 169 @ 0x120afe | `310:1` | `+0x2cef7:1` | `after_dispatch_table` | `sequence_only_no_sampled_target_match` |
| `0x18c467` | 195 | entry 310 @ 0x11d6ac | `310:2,86:1` | `-0x2306:1,-0x542a:1,-0x8c8e:1` | `inside_dispatch_table_unaligned` | `sampled_target_match_delta_mismatch` |
| `0x1a6041` | 175 | entry 169 @ 0x1221a0 | `310:1` | `+0x2cef7:1` | `after_dispatch_table` | `sequence_only_no_sampled_target_match` |
| `0x1ed483` | 195 | entry 310 @ 0x121ed0 | `310:2,86:1` | `-0x2306:1,-0x542a:1,-0x8c8e:1` | `after_dispatch_table` | `sampled_target_match_delta_mismatch` |
| `0x2304b8` | 195 | entry 169 @ 0xd100c | `310:2,86:1` | `-0x2306:1,-0x542a:1,-0x8c8e:1` | `after_dispatch_table` | `sequence_only_no_sampled_target_match` |
| `0x231b74` | 195 | entry 169 @ 0x121c8d | `310:2,86:1` | `-0x2306:1,-0x542a:1,-0x8c8e:1` | `after_dispatch_table` | `sequence_only_no_sampled_target_match` |
| `0x24bd2a` | 299 | entry 86 @ 0x11ac5a | `169:1,310:1` | `-0x7fe6:1,-0xcf8b:1` | `after_dispatch_table` | `sequence_only_no_sampled_target_match` |
| `0x31f2b1` | 195 | entry 169 @ 0x11d925 | `310:2,86:1` | `-0x2306:1,-0x542a:1,-0x8c8e:1` | `after_dispatch_table` | `sequence_only_no_sampled_target_match` |
| `0x333bc9` | 195 | entry 169 @ 0x31e249 | `310:2,86:1` | `-0x2306:1,-0x542a:1,-0x8c8e:1` | `after_dispatch_table` | `sequence_only_no_sampled_target_match` |
| `0x33710f` | 299 | entry 310 @ 0x31e05c | `169:1,310:1` | `-0x7fe6:1,-0xcf8b:1` | `after_dispatch_table` | `sampled_target_match_delta_mismatch` |
| `0x33a6cc` | 299 | entry 169 @ 0x31e436 | `169:1,310:1` | `-0x7fe6:1,-0xcf8b:1` | `after_dispatch_table` | `sampled_target_match_delta_mismatch` |
| `0x33d2d9` | 195 | entry 169 @ 0x31e623 | `310:2,86:1` | `-0x2306:1,-0x542a:1,-0x8c8e:1` | `after_dispatch_table` | `sequence_only_no_sampled_target_match` |
| `0x34556c` | 175 | entry 169 @ 0x11db12 | `310:1` | `+0x2cef7:1` | `after_dispatch_table` | `sequence_only_no_sampled_target_match` |
| `0x3655e4` | 195 | entry 310 @ 0x11dcff | `310:2,86:1` | `-0x2306:1,-0x542a:1,-0x8c8e:1` | `after_dispatch_table` | `sampled_target_match_delta_mismatch` |
