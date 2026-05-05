# Synthetic Gap Chain Slot Reconciliation

Observed-chain replay steps are joined to symbolic transfer probes, table-read diagnostics, runtime table-memory probes, and sampled-control sidecars. The check asks whether the final symbolic/table slot evidence directly names the focused first-hop target entry.

Rows: `57`
Terminal rows: `15`

## Slot Relation Mix

| Relation | Rows |
| --- | ---: |
| `table_offset_misaligned_vs_first_hop_slot` | 50 |
| `table_offset_oob_vs_first_hop_slot` | 7 |

## Reconciliation Class Mix

| Class | Rows |
| --- | ---: |
| `table_read_rejects_focused_first_hop_as_direct_slot` | 57 |

## Step Role Mix

| Role | Rows |
| --- | ---: |
| `residual_chain_step` | 42 |
| `context_reentry_terminal_step` | 8 |
| `focused_direct_terminal_step` | 7 |

## Reconciliation Rows

| Chain | Step | VM IP | Source | First Target | Target Slot | Table Offset | Table Region | Sampled | Dynamic Next | Relation | Class |
| --- | ---: | --- | ---: | ---: | --- | --- | --- | --- | --- | --- | --- |
| `0xd1445` | 0 | `0xd1445` | 175 | 123 | `0x3d8` | `0x4388` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0xd4893->0xd4897` | `table_offset_oob_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0xd1445` | 1 | `0xd5ebc` | 195 | 184 | `0x5c0` | `0x49bd` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x18bd96->0x18bd9a` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0xd1445` | 2 | `0xdaf39` | 195 | 184 | `0x5c0` | `0x1be` | `inside_dispatch_table_unaligned`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x18c084->0x18c088` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0xd1445` | 3 | `0x18c467` | 195 | 42 | `0x150` | `0xdf` | `inside_dispatch_table_unaligned`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x11d6ac->0x11d6b0` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0xd5ebc` | 0 | `0xd5ebc` | 195 | 184 | `0x5c0` | `0x49bd` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x18bd96->0x18bd9a` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0xd5ebc` | 1 | `0xdaf39` | 195 | 184 | `0x5c0` | `0x1be` | `inside_dispatch_table_unaligned`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x18c084->0x18c088` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0xd5ebc` | 2 | `0x18c467` | 195 | 42 | `0x150` | `0xdf` | `inside_dispatch_table_unaligned`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x11d6ac->0x11d6b0` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0xdaf39` | 0 | `0xdaf39` | 195 | 184 | `0x5c0` | `0x1be` | `inside_dispatch_table_unaligned`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x18c084->0x18c088` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0xdaf39` | 1 | `0x18c467` | 195 | 42 | `0x150` | `0xdf` | `inside_dispatch_table_unaligned`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x11d6ac->0x11d6b0` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x122e3c` | 0 | `0x122e3c` | 299 | 165 | `0x528` | `0xd9cf` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_169@0x2c0464->0x2c0468` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x12906f` | 0 | `0x12906f` | 278 | 123 | `0x3d8` | `0xea3c` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_310@0x172d62->0x172d66` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x12906f` | 1 | `0x17452e` | 299 | 174 | `0x570` | `0x8144` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x2bff9a->0x2bff9e` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x12906f` | 2 | `0x122e3c` | 299 | 165 | `0x528` | `0xd9cf` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_169@0x2c0464->0x2c0468` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x17452e` | 0 | `0x17452e` | 299 | 174 | `0x570` | `0x8144` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x2bff9a->0x2bff9e` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x17452e` | 1 | `0x122e3c` | 299 | 165 | `0x528` | `0xd9cf` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_169@0x2c0464->0x2c0468` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x17a420` | 0 | `0x17a420` | 175 | 174 | `0x570` | `0xc62` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x120afe->0x120b02` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x17a420` | 1 | `0x231b74` | 195 | 161 | `0x508` | `0x69c0` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x121c8d->0x121c91` | `table_offset_oob_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x17a420` | 2 | `0x1ed483` | 195 | 174 | `0x570` | `0x40be` | `after_dispatch_table`/`low32_text_offset` | `sampled_target_match_delta_mismatch` | `entry_310@0x121ed0->0x121ed4` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x17a420` | 3 | `0x1a6041` | 175 | 174 | `0x570` | `0xe281` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x1221a0->0x1221a4` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x17a420` | 4 | `0x12906f` | 278 | 123 | `0x3d8` | `0xea3c` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_310@0x172d62->0x172d66` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x17a420` | 5 | `0x17452e` | 299 | 174 | `0x570` | `0x8144` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x2bff9a->0x2bff9e` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x17a420` | 6 | `0x122e3c` | 299 | 165 | `0x528` | `0xd9cf` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_169@0x2c0464->0x2c0468` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x1a6041` | 0 | `0x1a6041` | 175 | 174 | `0x570` | `0xe281` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x1221a0->0x1221a4` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x1a6041` | 1 | `0x12906f` | 278 | 123 | `0x3d8` | `0xea3c` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_310@0x172d62->0x172d66` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x1a6041` | 2 | `0x17452e` | 299 | 174 | `0x570` | `0x8144` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x2bff9a->0x2bff9e` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x1a6041` | 3 | `0x122e3c` | 299 | 165 | `0x528` | `0xd9cf` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_169@0x2c0464->0x2c0468` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x1ed483` | 0 | `0x1ed483` | 195 | 174 | `0x570` | `0x40be` | `after_dispatch_table`/`low32_text_offset` | `sampled_target_match_delta_mismatch` | `entry_310@0x121ed0->0x121ed4` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x1ed483` | 1 | `0x1a6041` | 175 | 174 | `0x570` | `0xe281` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x1221a0->0x1221a4` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x1ed483` | 2 | `0x12906f` | 278 | 123 | `0x3d8` | `0xea3c` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_310@0x172d62->0x172d66` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x1ed483` | 3 | `0x17452e` | 299 | 174 | `0x570` | `0x8144` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x2bff9a->0x2bff9e` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x1ed483` | 4 | `0x122e3c` | 299 | 165 | `0x528` | `0xd9cf` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_169@0x2c0464->0x2c0468` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x2304b8` | 0 | `0x2304b8` | 195 | 158 | `0x4f0` | `0x71e0` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0xd100c->0xd1010` | `table_offset_oob_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x2304b8` | 1 | `0xd1445` | 175 | 123 | `0x3d8` | `0x4388` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0xd4893->0xd4897` | `table_offset_oob_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x2304b8` | 2 | `0xd5ebc` | 195 | 184 | `0x5c0` | `0x49bd` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x18bd96->0x18bd9a` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x2304b8` | 3 | `0xdaf39` | 195 | 184 | `0x5c0` | `0x1be` | `inside_dispatch_table_unaligned`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x18c084->0x18c088` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x2304b8` | 4 | `0x18c467` | 195 | 42 | `0x150` | `0xdf` | `inside_dispatch_table_unaligned`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x11d6ac->0x11d6b0` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x231b74` | 0 | `0x231b74` | 195 | 161 | `0x508` | `0x69c0` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x121c8d->0x121c91` | `table_offset_oob_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x231b74` | 1 | `0x1ed483` | 195 | 174 | `0x570` | `0x40be` | `after_dispatch_table`/`low32_text_offset` | `sampled_target_match_delta_mismatch` | `entry_310@0x121ed0->0x121ed4` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x231b74` | 2 | `0x1a6041` | 175 | 174 | `0x570` | `0xe281` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x1221a0->0x1221a4` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x231b74` | 3 | `0x12906f` | 278 | 123 | `0x3d8` | `0xea3c` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_310@0x172d62->0x172d66` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x231b74` | 4 | `0x17452e` | 299 | 174 | `0x570` | `0x8144` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x2bff9a->0x2bff9e` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x231b74` | 5 | `0x122e3c` | 299 | 165 | `0x528` | `0xd9cf` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_169@0x2c0464->0x2c0468` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x333bc9` | 0 | `0x333bc9` | 195 | 176 | `0x580` | `0x48e2` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x31e249->0x31e24d` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x333bc9` | 1 | `0x33a6cc` | 299 | 42 | `0x150` | `0x115e` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_169@0x31e436->0x31e43a` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x33710f` | 0 | `0x33710f` | 299 | 174 | `0x570` | `0x8548` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x31e05c->0x31e060` | `table_offset_oob_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x33710f` | 1 | `0x333bc9` | 195 | 176 | `0x580` | `0x48e2` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x31e249->0x31e24d` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x33710f` | 2 | `0x33a6cc` | 299 | 42 | `0x150` | `0x115e` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_169@0x31e436->0x31e43a` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x33d2d9` | 0 | `0x33d2d9` | 195 | 184 | `0x5c0` | `0x31e2` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x31e623->0x31e627` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x33d2d9` | 1 | `0x31f2b1` | 195 | 323 | `0xa18` | `0x68c3` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x11d925->0x11d929` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x3655e4` | 0 | `0x3655e4` | 195 | 161 | `0x508` | `0x29c3` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x11dcff->0x11dd03` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x3655e4` | 1 | `0x17a420` | 175 | 174 | `0x570` | `0xc62` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x120afe->0x120b02` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x3655e4` | 2 | `0x231b74` | 195 | 161 | `0x508` | `0x69c0` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x121c8d->0x121c91` | `table_offset_oob_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x3655e4` | 3 | `0x1ed483` | 195 | 174 | `0x570` | `0x40be` | `after_dispatch_table`/`low32_text_offset` | `sampled_target_match_delta_mismatch` | `entry_310@0x121ed0->0x121ed4` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x3655e4` | 4 | `0x1a6041` | 175 | 174 | `0x570` | `0xe281` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_169@0x1221a0->0x1221a4` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x3655e4` | 5 | `0x12906f` | 278 | 123 | `0x3d8` | `0xea3c` | `after_dispatch_table`/`non_pointer_bytes` | `sequence_only_no_sampled_target_match` | `entry_310@0x172d62->0x172d66` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x3655e4` | 6 | `0x17452e` | 299 | 174 | `0x570` | `0x8144` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_310@0x2bff9a->0x2bff9e` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
| `0x3655e4` | 7 | `0x122e3c` | 299 | 165 | `0x528` | `0xd9cf` | `after_dispatch_table`/`non_pointer_bytes` | `sampled_target_match_delta_mismatch` | `entry_169@0x2c0464->0x2c0468` | `table_offset_misaligned_vs_first_hop_slot` | `table_read_rejects_focused_first_hop_as_direct_slot` |
