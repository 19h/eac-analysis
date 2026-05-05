# Static-only Tier1 Handler Models

These models promote the 43 medium single-function static-only handlers from the queue into named C-shaped model functions.
Only RetDec tails that expose a real dispatch-table slot are marked executable in the primary VMState handler layer.

| Metric | Value |
| --- | ---: |
| models | 43 |
| known or candidate slot expressions | 9 |
| executable dispatch-table slot recoveries | 3 |
| source tier | tier1 single-function medium static replay |

| Rank | Entry | Target | RetDec function | Model | Slot status | IP advance |
| ---: | ---: | --- | --- | --- | --- | ---: |
| 12 | 159 | `0x992cd` | `function_992cd` | `vm_tier1_entry_159` | `state_effect_only_no_dispatch_return` | 9 |
| 13 | 244 | `0xaaf3e` | `function_aaf3e` | `vm_tier1_entry_244` | `state_pointer_return_no_dispatch_slot` | 9 |
| 14 | 12 | `0x7acd8` | `function_7acd8` | `vm_tier1_entry_012` | `retdec_dispatch_table_slot` | 8 |
| 15 | 234 | `0xa823e` | `function_a823e` | `vm_tier1_entry_234` | `state_effect_only_no_dispatch_return` | 11 |
| 16 | 213 | `0xa3dc7` | `function_a3dc7` | `vm_tier1_entry_213` | `state_effect_only_no_dispatch_return` | 8 |
| 17 | 100 | `0x8cc81` | `function_8cc81` | `vm_tier1_entry_100` | `retdec_dispatch_table_slot` | 11 |
| 18 | 224 | `0xa68c2` | `function_a68c2` | `vm_tier1_entry_224` | `state_effect_only_no_dispatch_return` | 9 |
| 19 | 63 | `0x84e1d` | `function_84e1d` | `vm_tier1_entry_063` | `state_effect_only_no_dispatch_return` | 11 |
| 20 | 182 | `0x9d24c` | `function_9d24c` | `vm_tier1_entry_182` | `state_effect_only_no_dispatch_return` | 8 |
| 21 | 279 | `0xb23f7` | `function_b23f7` | `vm_tier1_entry_279` | `noisy_dispatch_return_candidate` | 5 |
| 22 | 25 | `0x7d941` | `function_7d941` | `vm_tier1_entry_025` | `state_effect_only_no_dispatch_return` | 11 |
| 23 | 228 | `0xa6f79` | `function_a6f79` | `vm_tier1_entry_228` | `state_effect_only_no_dispatch_return` | 11 |
| 24 | 77 | `0x88131` | `function_88131` | `vm_tier1_entry_077` | `state_effect_only_no_dispatch_return` | 5 |
| 25 | 59 | `0x84302` | `function_84302` | `vm_tier1_entry_059` | `state_effect_only_no_dispatch_return` | 11 |
| 26 | 6 | `0x7971e` | `function_7971e` | `vm_tier1_entry_006` | `state_effect_only_no_dispatch_return` | 9 |
| 27 | 155 | `0x980ab` | `function_980ab` | `vm_tier1_entry_155` | `state_effect_only_no_dispatch_return` | 9 |
| 28 | 298 | `0xb6902` | `function_b6902` | `vm_tier1_entry_298` | `pointer_effect_no_state_slot` | 9 |
| 29 | 162 | `0x99b3c` | `function_99b3c` | `vm_tier1_entry_162` | `state_effect_only_no_dispatch_return` | 11 |
| 30 | 286 | `0xb42e2` | `function_b42e2` | `vm_tier1_entry_286` | `state_effect_only_no_dispatch_return` | 5 |
| 31 | 84 | `0x8983b` | `function_8983b` | `vm_tier1_entry_084` | `masked_return_slot_requires_g3` | 5 |
| 32 | 14 | `0x7b3be` | `function_7b3be` | `vm_tier1_entry_014` | `state_effect_only_no_dispatch_return` | 5 |
| 33 | 197 | `0xa006b` | `function_a006b` | `vm_tier1_entry_197` | `state_effect_only_no_dispatch_return` | 5 |
| 34 | 193 | `0x9f77c` | `function_9f77c` | `vm_tier1_entry_193` | `state_effect_only_no_dispatch_return` | 9 |
| 35 | 72 | `0x868bd` | `function_868bd` | `vm_tier1_entry_072` | `state_effect_only_no_dispatch_return` | 11 |
| 36 | 97 | `0x8c5b9` | `function_8c5b9` | `vm_tier1_entry_097` | `state_effect_only_no_dispatch_return` | 5 |
| 37 | 55 | `0x83b40` | `function_83b40` | `vm_tier1_entry_055` | `state_effect_only_no_dispatch_return` | 5 |
| 38 | 61 | `0x84762` | `function_84762` | `vm_tier1_entry_061` | `state_effect_only_no_dispatch_return` | 11 |
| 39 | 178 | `0x9c74a` | `function_9c74a` | `vm_tier1_entry_178` | `compare_only_no_state_slot` | 11 |
| 40 | 41 | `0x8129d` | `function_8129d` | `vm_tier1_entry_041` | `state_effect_only_no_dispatch_return` | 5 |
| 41 | 235 | `0xa8450` | `function_a8450` | `vm_tier1_entry_235` | `masked_return_slot_requires_g3` | 5 |
| 42 | 262 | `0xaef02` | `function_aef02` | `vm_tier1_entry_262` | `retdec_dispatch_table_slot` | 11 |
| 43 | 16 | `0x7b77c` | `function_7b77c` | `vm_tier1_entry_016` | `state_effect_only_no_dispatch_return` | 5 |
| 44 | 344 | `0xbff6a` | `function_bff6a` | `vm_tier1_entry_344` | `state_effect_only_no_dispatch_return` | 5 |
| 45 | 106 | `0x8eb79` | `function_8eb79` | `vm_tier1_entry_106` | `masked_dispatch_table_slot_requires_g3` | 5 |
| 46 | 218 | `0xa4df7` | `function_a4df7` | `vm_tier1_entry_218` | `state_effect_only_no_dispatch_return` | 5 |
| 47 | 206 | `0xa1b3e` | `function_a1b3e` | `vm_tier1_entry_206` | `state_effect_only_no_dispatch_return` | 5 |
| 48 | 272 | `0xb0e30` | `function_b0e30` | `vm_tier1_entry_272` | `state_effect_only_no_dispatch_return` | 11 |
| 49 | 68 | `0x85b89` | `function_85b89` | `vm_tier1_entry_068` | `state_effect_only_no_dispatch_return` | 5 |
| 50 | 247 | `0xabd6f` | `function_abd6f` | `vm_tier1_entry_247` | `state_effect_only_no_dispatch_return` | 5 |
| 51 | 44 | `0x81b7f` | `function_81b7f` | `vm_tier1_entry_044` | `masked_table_load_requires_g5` | 5 |
| 52 | 164 | `0x99e99` | `function_99e99` | `vm_tier1_entry_164` | `retdec_raw_mod_slot` | 5 |
| 53 | 150 | `0x96f2a` | `function_96f2a` | `vm_tier1_entry_150` | `state_effect_only_no_dispatch_return` | 5 |
| 54 | 170 | `0x9b0c8` | `function_9b0c8` | `vm_tier1_entry_170` | `state_effect_only_no_dispatch_return` | 11 |
