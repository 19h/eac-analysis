# Static-only Tier2 Shared-Range Split Models

These models split the 15 small shared-range static-only RetDec rows into primary handler evidence plus overlap/neighbor classifications.
Only primary tails that expose a clean dispatch-table slot are marked executable in the primary VMState handler layer.

| Metric | Value |
| --- | ---: |
| models | 15 |
| known or candidate slot expressions | 5 |
| executable dispatch-table slot recoveries | 5 |
| source tier | tier2 small shared RetDec ranges |

| Rank | Entry | Target | Primary function | Split status | Slot status | IP advance |
| ---: | ---: | --- | --- | --- | --- | ---: |
| 55 | 204 | `0xa1939` | `function_a1939` | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | 8 |
| 56 | 34 | `0x7fba3` | `function_7fba3` | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | 9 |
| 57 | 45 | `0x81f2e` | `function_81f2e` | `primary_prefix_before_neighbor_entry_46` | `state_effect_only_no_dispatch_return` | 9 |
| 58 | 60 | `0x84596` | `function_84596` | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | 9 |
| 59 | 289 | `0xb4a2b` | `function_b4a2b` | `primary_plus_empty_overlap_stub` | `state_pointer_return_no_dispatch_slot` | 8 |
| 60 | 46 | `0x820e1` | `function_820e1` | `primary_before_tier0_entry_47_overlap` | `retdec_dispatch_table_slot` | 8 |
| 61 | 328 | `0xbc466` | `function_bc466` | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | 11 |
| 62 | 191 | `0x9ede9` | `function_9ede9` | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | 5 |
| 63 | 111 | `0x8f8ae` | `function_8f8ae` | `primary_plus_empty_overlap_stub` | `retdec_dispatch_table_slot` | 5 |
| 64 | 263 | `0xaf26d` | `function_af26d` | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | 11 |
| 65 | 39 | `0x80ef6` | `function_80ef6` | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | 11 |
| 66 | 335 | `0xbe648` | `function_be648` | `primary_plus_empty_overlap_stub` | `retdec_dispatch_table_slot` | 8 |
| 67 | 274 | `0xb1548` | `function_b1548` | `primary_before_large_neighbor_body` | `state_effect_only_no_dispatch_return` | 11 |
| 68 | 137 | `0x94973` | `function_94973` | `primary_plus_empty_overlap_stub` | `retdec_dispatch_table_slot` | 9 |
| 69 | 232 | `0xa7ef8` | `function_a7ef8` | `primary_before_large_neighbor_body` | `retdec_dispatch_table_slot` | 9 |
