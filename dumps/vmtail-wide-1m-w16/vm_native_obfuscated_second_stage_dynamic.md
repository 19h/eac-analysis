# Native Obfuscated Second-Stage Dynamic Dispatch

Indexes bounded driver traces for the five computed `jmp [rax]` sites emitted by `vm_native_obfuscated_second_stage.c`.

| entry | site | hits | observed targets | slot entries | base check | slot check | status |
| --- | --- | ---: | --- | --- | --- | --- | --- |
| `0xc9849` | `0xcad88` | 4 | `0xbb6e6:1,0x9af18:1,0xb8556:2` | `323@0xbb6e6:1,169@0x9af18:1,310@0xb8556:2` | `slot_minus_idx_matches_dispatch_table:4` | `slot_index_matches_handler_target:4` | `dynamic_computed_targets_observed` |
| `0xcaf2a` | `0xcc3f5` | 4 | `0x8a37f:1,0xb8556:1,0x9af18:2` | `86@0x8a37f:1,310@0xb8556:1,169@0x9af18:2` | `slot_minus_idx_matches_dispatch_table:4` | `slot_index_matches_handler_target:4` | `dynamic_computed_targets_observed` |
| `0xc4258` | `0xc559d` | 8 | `0xbb6e6:1,0x9af18:6,0xb8556:1` | `323@0xbb6e6:1,169@0x9af18:6,310@0xb8556:1` | `slot_minus_idx_matches_dispatch_table:8` | `slot_index_matches_handler_target:8` | `dynamic_computed_targets_observed` |
| `0xc57b8` | `0xc6bce` | 4 | `0x8a37f:1,0x9af18:2,0xb8556:1` | `86@0x8a37f:1,169@0x9af18:2,310@0xb8556:1` | `slot_minus_idx_matches_dispatch_table:4` | `slot_index_matches_handler_target:4` | `dynamic_computed_targets_observed` |
| `0xc6d58` | `0xc80b9` | 8 | `0x8a37f:1,0xb8556:3,0x9af18:4` | `86@0x8a37f:1,310@0xb8556:3,169@0x9af18:4` | `slot_minus_idx_matches_dispatch_table:8` | `slot_index_matches_handler_target:8` | `dynamic_computed_targets_observed` |
