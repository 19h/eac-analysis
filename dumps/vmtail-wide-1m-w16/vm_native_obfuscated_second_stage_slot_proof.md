# Native Obfuscated Second-Stage Slot Formula Proof

Capstone-backed static proof for the five second-stage computed `jmp [rax]` sites, joined to focused dynamic slot evidence.

| entry | site | formula | net delta | dynamic hits | base check | slot check | proof status |
| --- | --- | --- | ---: | ---: | --- | --- | --- |
| `0xc9849` | `0xcad88` | `rax_final=rax_initial+(rbx<<3)` | `0x0` | 4 | `slot_minus_idx_matches_dispatch_table:4` | `slot_index_matches_handler_target:4` | `static_dynamic_slot_formula_proven_for_observed_hits` |
| `0xcaf2a` | `0xcc3f5` | `rax_final=rax_initial+(rbx<<3)` | `0x0` | 4 | `slot_minus_idx_matches_dispatch_table:4` | `slot_index_matches_handler_target:4` | `static_dynamic_slot_formula_proven_for_observed_hits` |
| `0xc4258` | `0xc559d` | `rax_final=rax_initial+(rbx<<3)` | `0x0` | 8 | `slot_minus_idx_matches_dispatch_table:8` | `slot_index_matches_handler_target:8` | `static_dynamic_slot_formula_proven_for_observed_hits` |
| `0xc57b8` | `0xc6bce` | `rax_final=rax_initial+(rbx<<3)` | `0x0` | 4 | `slot_minus_idx_matches_dispatch_table:4` | `slot_index_matches_handler_target:4` | `static_dynamic_slot_formula_proven_for_observed_hits` |
| `0xc6d58` | `0xc80b9` | `rax_final=rax_initial+(rbx<<3)` | `0x0` | 8 | `slot_minus_idx_matches_dispatch_table:8` | `slot_index_matches_handler_target:8` | `static_dynamic_slot_formula_proven_for_observed_hits` |
