# Static-Only Tier3 Shared-Range Models

Native C-generated C/TSV evidence for tier3 static-only multi-function shared ranges.
Rows with clean dispatch-table tails are executable in the generated model; noisy or masked tails are preserved as comments.

| metric | value |
| --- | ---: |
| tier3 rows | 40 |
| candidate slot rows | 5 |
| executable dispatch-table slot rows | 2 |

| rank | entry | primary function | funcs | share status | slot status | slot expr |
| ---: | ---: | --- | ---: | --- | --- | --- |
| 70 | 327 | `function_bc320` | 3 | `primary_plus_two_empty_overlap_stubs` | `state_effect_only_no_dispatch_return` | `` |
| 71 | 109 | `function_8f6d1` | 3 | `primary_plus_tiny_overlap_stubs` | `constant_return_no_dispatch_slot` | `` |
| 72 | 115 | `function_90895` | 3 | `primary_plus_empty_overlap_stubs` | `non_dispatch_predicate_return` | `` |
| 73 | 304 | `function_b7717` | 3 | `primary_plus_empty_overlap_stubs` | `masked_noisy_return_no_dispatch_slot` | `` |
| 74 | 135 | `function_94478` | 3 | `primary_plus_empty_overlap_stubs` | `noisy_dispatch_return_candidate` | `((state0 ^ s16(ip+5)) - 0x7ed035c5) & 0xffff` |
| 75 | 141 | `function_951c2` | 3 | `primary_plus_empty_overlap_stubs` | `masked_noisy_return_no_dispatch_slot` | `` |
| 76 | 341 | `function_bf889` | 2 | `primary_plus_empty_overlap_stub` | `constant_like_predicate_return` | `` |
| 77 | 120 | `function_9106a` | 2 | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | `` |
| 78 | 147 | `function_96918` | 3 | `primary_plus_empty_overlap_stubs` | `state_effect_only_no_dispatch_return` | `` |
| 79 | 275 | `function_b180e` | 2 | `primary_plus_empty_overlap_stub` | `retdec_raw_mod_slot` | `((state0 ^ s16(ip+1)) - 0x26ed1596) & 0xffff` |
| 80 | 152 | `function_9768c` | 2 | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | `` |
| 81 | 19 | `function_7c30a` | 2 | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | `` |
| 82 | 296 | `function_b625d` | 3 | `primary_plus_empty_overlap_stubs` | `state_effect_only_no_dispatch_return` | `` |
| 83 | 329 | `function_bc676` | 2 | `primary_plus_empty_overlap_stub` | `noisy_dispatch_base_candidate` | `` |
| 84 | 177 | `function_9c3f7` | 2 | `primary_plus_large_neighbor_body` | `masked_return_slot_requires_g3` | `` |
| 85 | 103 | `function_8df9c` | 2 | `primary_plus_empty_overlap_stub` | `non_dispatch_predicate_return` | `` |
| 86 | 24 | `function_7d5ec` | 2 | `primary_plus_empty_overlap_stub` | `retdec_dispatch_table_slot` | `((((0x7d53d38d - state0 + s16(ip+6)) & state0) ^ s16(ip+2)) + 0x565) & 0xffff` |
| 87 | 343 | `function_bfc0d` | 2 | `primary_plus_large_neighbor_body` | `state_effect_only_no_dispatch_return` | `` |
| 88 | 51 | `function_83061` | 2 | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | `` |
| 89 | 8 | `function_79a3d` | 2 | `primary_plus_empty_overlap_stub` | `retdec_dispatch_table_slot` | `(s16(ip+0) + 0x4c6) & 0xffff` |
| 90 | 277 | `function_b1fd5` | 2 | `primary_plus_empty_overlap_stub` | `noisy_dispatch_base_candidate` | `` |
| 91 | 4 | `function_792f8` | 2 | `primary_plus_empty_overlap_stub` | `g2_mask_return_no_dispatch_slot` | `` |
| 92 | 212 | `function_a3a4b` | 2 | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | `` |
| 93 | 211 | `function_a36c9` | 2 | `primary_plus_empty_overlap_stub` | `masked_noisy_return_no_dispatch_slot` | `` |
| 94 | 312 | `function_b87aa` | 2 | `primary_plus_empty_overlap_stub` | `masked_dispatch_base_requires_g3` | `` |
| 95 | 104 | `function_8e2ef` | 2 | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | `` |
| 96 | 27 | `function_7dfbf` | 2 | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | `` |
| 97 | 89 | `function_8b028` | 3 | `primary_plus_empty_overlap_stubs` | `non_dispatch_pointer_return` | `` |
| 98 | 230 | `function_a757f` | 2 | `primary_plus_empty_overlap_stub` | `noisy_dispatch_base_candidate` | `` |
| 99 | 294 | `function_b5d7c` | 3 | `primary_plus_empty_overlap_stubs` | `masked_noisy_return_no_dispatch_slot` | `` |
| 100 | 2 | `function_788e2` | 3 | `primary_plus_empty_overlap_stubs` | `state_effect_only_no_dispatch_return` | `` |
| 101 | 166 | `function_9a46e` | 2 | `primary_plus_empty_overlap_stub` | `masked_return_slot_requires_g3` | `` |
| 102 | 271 | `function_b09ab` | 2 | `primary_plus_empty_overlap_stub` | `constant_pointer_return_no_dispatch_slot` | `` |
| 103 | 10 | `function_7a04f` | 2 | `primary_plus_empty_overlap_stub` | `noisy_dispatch_base_candidate` | `` |
| 104 | 249 | `function_ac440` | 3 | `primary_plus_empty_overlap_stubs` | `retdec_raw_mod_slot` | `((s16(ip+0) - state0 + 0x4522afca) & 0xffff)` |
| 105 | 207 | `function_a1ecf` | 2 | `primary_plus_empty_overlap_stub` | `masked_dispatch_base_candidate` | `` |
| 106 | 134 | `function_9406d` | 3 | `primary_plus_empty_overlap_stubs` | `noisy_dispatch_base_candidate` | `` |
| 107 | 223 | `function_a6470` | 3 | `primary_plus_empty_overlap_stubs` | `noisy_dispatch_base_candidate` | `` |
| 108 | 22 | `function_7cb43` | 3 | `primary_plus_empty_overlap_stubs` | `state_effect_only_no_dispatch_return` | `` |
| 109 | 81 | `function_88c3f` | 2 | `primary_plus_empty_overlap_stub` | `state_effect_only_no_dispatch_return` | `` |
