# Synthetic Gap Observed Chain Bridge Audit

Focused residual traces expose raw VMTAIL chain paths that either terminate in a focused direct bridge or in the dedicated `0x122e3c -> 0x2c0468` context reentry. These rows are bridge evidence, not hard CFG promotion, unless the focused direct trace starts exactly at the residual VM IP.

Rows: `20`

## Bridge Class Mix

| Class | Rows |
| --- | ---: |
| `sequence_chain_to_recovered_context_reentry` | 8 |
| `sequence_chain_to_focused_direct_bridge` | 7 |
| `hard_focused_direct_bridge_already_promoted` | 5 |

## Bridge Action Mix

| Action | Rows |
| --- | ---: |
| `disabled_observed_chain_bridge` | 15 |
| `hard_cfg` | 5 |

## Primary vs Focused First Hop

| Relation | Rows |
| --- | ---: |
| `focused_first_hop_differs_from_primary_next_hook` | 19 |
| `focused_first_hop_matches_primary_next_end` | 1 |

## Observed Chain Bridges

| Start | Source | First Hop | Following Residual | Chain | Bridge Class | Action | Terminal Dest | Primary Next | Relation |
| --- | ---: | --- | --- | --- | --- | --- | --- | --- | --- |
| `0xd1445` | 175 | `tail 0xd5eb8 +0x4a73 -> entry 123` | `0xd5ebc` | `0xd1445 -> 0xd5ebc -> 0xdaf39 -> 0x18c467` | `sequence_chain_to_focused_direct_bridge` | `disabled_observed_chain_bridge` | `prog_bb_0293 @ 0x334a3d` | `entry 310 @ 0xd4893 -> 0xd4897` | `focused_first_hop_differs_from_primary_next_hook` |
| `0xd5ebc` | 195 | `tail 0xdaf35 +0x5079 -> entry 184` | `0xdaf39` | `0xd5ebc -> 0xdaf39 -> 0x18c467` | `sequence_chain_to_focused_direct_bridge` | `disabled_observed_chain_bridge` | `prog_bb_0293 @ 0x334a3d` | `entry 169 @ 0x18bd96 -> 0x18bd9a` | `focused_first_hop_differs_from_primary_next_hook` |
| `0xdaf39` | 195 | `tail 0x18c463 +0xb152a -> entry 184` | `0x18c467` | `0xdaf39 -> 0x18c467` | `sequence_chain_to_focused_direct_bridge` | `disabled_observed_chain_bridge` | `prog_bb_0293 @ 0x334a3d` | `entry 310 @ 0x18c084 -> 0x18c088` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x122e3c` | 299 | `tail 0x2c0468 +0x19d62c -> entry 165` | `-` | `0x122e3c` | `sequence_chain_to_recovered_context_reentry` | `disabled_observed_chain_bridge` | `prog_bb_0214 @ 0x2c0468` | `entry 169 @ 0x2c0464 -> 0x2c0468` | `focused_first_hop_matches_primary_next_end` |
| `0x12906f` | 278 | `tail 0x17452a +0x4b4bb -> entry 123` | `0x17452e` | `0x12906f -> 0x17452e -> 0x122e3c` | `sequence_chain_to_recovered_context_reentry` | `disabled_observed_chain_bridge` | `prog_bb_0214 @ 0x2c0468` | `entry 310 @ 0x172d62 -> 0x172d66` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x17452e` | 299 | `tail 0x122e38 -0x516f6 -> entry 174` | `0x122e3c` | `0x17452e -> 0x122e3c` | `sequence_chain_to_recovered_context_reentry` | `disabled_observed_chain_bridge` | `prog_bb_0214 @ 0x2c0468` | `entry 310 @ 0x2bff9a -> 0x2bff9e` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x17a420` | 175 | `tail 0x231b70 +0xb7750 -> entry 174` | `0x231b74` | `0x17a420 -> 0x231b74 -> 0x1ed483 -> 0x1a6041 -> 0x12906f -> 0x17452e -> 0x122e3c` | `sequence_chain_to_recovered_context_reentry` | `disabled_observed_chain_bridge` | `prog_bb_0214 @ 0x2c0468` | `entry 169 @ 0x120afe -> 0x120b02` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x18c467` | 195 | `dispatch 0x334a3d +0x1a85d6 -> entry 42` | `-` | `0x18c467` | `hard_focused_direct_bridge_already_promoted` | `hard_cfg` | `prog_bb_0293 @ 0x334a3d` | `entry 310 @ 0x11d6ac -> 0x11d6b0` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x1a6041` | 175 | `tail 0x12906b -0x7cfd6 -> entry 174` | `0x12906f` | `0x1a6041 -> 0x12906f -> 0x17452e -> 0x122e3c` | `sequence_chain_to_recovered_context_reentry` | `disabled_observed_chain_bridge` | `prog_bb_0214 @ 0x2c0468` | `entry 169 @ 0x1221a0 -> 0x1221a4` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x1ed483` | 195 | `tail 0x1a603d -0x47446 -> entry 174` | `0x1a6041` | `0x1ed483 -> 0x1a6041 -> 0x12906f -> 0x17452e -> 0x122e3c` | `sequence_chain_to_recovered_context_reentry` | `disabled_observed_chain_bridge` | `prog_bb_0214 @ 0x2c0468` | `entry 310 @ 0x121ed0 -> 0x121ed4` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x2304b8` | 195 | `tail 0xd1441 -0x15f077 -> entry 158` | `0xd1445` | `0x2304b8 -> 0xd1445 -> 0xd5ebc -> 0xdaf39 -> 0x18c467` | `sequence_chain_to_focused_direct_bridge` | `disabled_observed_chain_bridge` | `prog_bb_0293 @ 0x334a3d` | `entry 169 @ 0xd100c -> 0xd1010` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x231b74` | 195 | `tail 0x1ed47f -0x446f5 -> entry 161` | `0x1ed483` | `0x231b74 -> 0x1ed483 -> 0x1a6041 -> 0x12906f -> 0x17452e -> 0x122e3c` | `sequence_chain_to_recovered_context_reentry` | `disabled_observed_chain_bridge` | `prog_bb_0214 @ 0x2c0468` | `entry 169 @ 0x121c8d -> 0x121c91` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x24bd2a` | 299 | `dispatch 0x26cd71 +0x21047 -> entry 86` | `-` | `0x24bd2a` | `hard_focused_direct_bridge_already_promoted` | `hard_cfg` | `prog_bb_0190 @ 0x26cd71` | `entry 86 @ 0x11ac5a -> 0x11ac5e` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x31f2b1` | 195 | `dispatch 0x33f278 +0x1ffc7 -> entry 323` | `-` | `0x31f2b1` | `hard_focused_direct_bridge_already_promoted` | `hard_cfg` | `prog_bb_0340 @ 0x33f278` | `entry 169 @ 0x11d925 -> 0x11d929` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x333bc9` | 195 | `tail 0x33a6c8 +0x6aff -> entry 176` | `0x33a6cc` | `0x333bc9 -> 0x33a6cc` | `sequence_chain_to_focused_direct_bridge` | `disabled_observed_chain_bridge` | `prog_bb_0324 @ 0x33b647` | `entry 169 @ 0x31e249 -> 0x31e24d` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x33710f` | 299 | `tail 0x333bc5 -0x354a -> entry 174` | `0x333bc9` | `0x33710f -> 0x333bc9 -> 0x33a6cc` | `sequence_chain_to_focused_direct_bridge` | `disabled_observed_chain_bridge` | `prog_bb_0324 @ 0x33b647` | `entry 310 @ 0x31e05c -> 0x31e060` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x33a6cc` | 299 | `dispatch 0x33b647 +0xf7b -> entry 42` | `-` | `0x33a6cc` | `hard_focused_direct_bridge_already_promoted` | `hard_cfg` | `prog_bb_0324 @ 0x33b647` | `entry 169 @ 0x31e436 -> 0x31e43a` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x33d2d9` | 195 | `tail 0x31f2ad -0x1e02c -> entry 184` | `0x31f2b1` | `0x33d2d9 -> 0x31f2b1` | `sequence_chain_to_focused_direct_bridge` | `disabled_observed_chain_bridge` | `prog_bb_0340 @ 0x33f278` | `entry 169 @ 0x31e623 -> 0x31e627` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x34556c` | 175 | `dispatch 0x3603af +0x1ae43 -> entry 86` | `-` | `0x34556c` | `hard_focused_direct_bridge_already_promoted` | `hard_cfg` | `prog_bb_0385 @ 0x3603af` | `entry 169 @ 0x11db12 -> 0x11db16` | `focused_first_hop_differs_from_primary_next_hook` |
| `0x3655e4` | 195 | `tail 0x17a41c -0x1eb1c8 -> entry 161` | `0x17a420` | `0x3655e4 -> 0x17a420 -> 0x231b74 -> 0x1ed483 -> 0x1a6041 -> 0x12906f -> 0x17452e -> 0x122e3c` | `sequence_chain_to_recovered_context_reentry` | `disabled_observed_chain_bridge` | `prog_bb_0214 @ 0x2c0468` | `entry 310 @ 0x11dcff -> 0x11dd03` | `focused_first_hop_differs_from_primary_next_hook` |
