# Synthetic Gap Unresolved Family Audit

The 15 default-unresolved synthetic successor calls are clustered by transfer path, slot expression, table rejection, sampled sidecar, and observed terminal class. This is triage for the next hard-CFG recovery step; it does not promote sequence-only evidence.

Unresolved starts: `15`
Families: `13`

## Mixes


### Source Entry

| Value | Rows |
| --- | ---: |
| `195` | 8 |
| `175` | 3 |
| `299` | 3 |
| `278` | 1 |

### Observed Chain Class

| Value | Rows |
| --- | ---: |
| `sequence_chain_to_recovered_context_reentry` | 8 |
| `sequence_chain_to_focused_direct_bridge` | 7 |

### Table Diagnosis

| Value | Rows |
| --- | ---: |
| `misaligned_or_non_qword_table_read` | 11 |
| `table_index_out_of_range` | 4 |

### Recommended Next Target

| Value | Rows |
| --- | ---: |
| `replay_first_indirect_hop_then_promoted_terminal` | 7 |
| `solve_repeated_central_dispatch_family` | 6 |
| `isolate_context_reentry_first_hop` | 1 |
| `solve_unique_transfer_family` | 1 |

## Families

| Family | Rows | Source | Path Hash | Slot Hash | IP | Footprint | Table | Sampled | Chain Class | Terminal | Next Target | Members |
| --- | ---: | ---: | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| `ufam_00` | 2 | 299 | `b75ed1b046c72a97` | `c6f36fb6c762` | `0x4` | `0x6` | `misaligned_or_non_qword_table_read`/`after_dispatch_table` | `169:1,310:1` | `sequence_chain_to_recovered_context_reentry` | `prog_bb_0214@0x2c0468` | `isolate_context_reentry_first_hop` | `0x122e3c, 0x17452e` |
| `ufam_01` | 2 | 175 | `bbe0d482f93ad097` | `c9fce5d05b97` | `0x4` | `0x6` | `misaligned_or_non_qword_table_read`/`after_dispatch_table` | `310:1` | `sequence_chain_to_recovered_context_reentry` | `prog_bb_0214@0x2c0468` | `solve_repeated_central_dispatch_family` | `0x17a420, 0x1a6041` |
| `ufam_02` | 1 | 175 | `bbe0d482f93ad097` | `c9fce5d05b97` | `0x4` | `0x6` | `table_index_out_of_range`/`after_dispatch_table` | `310:1` | `sequence_chain_to_focused_direct_bridge` | `prog_bb_0293@0x334a3d` | `replay_first_indirect_hop_then_promoted_terminal` | `0xd1445` |
| `ufam_03` | 1 | 195 | `44a20faf942e72a8` | `c0ec087b210b` | `0x4` | `0x6` | `misaligned_or_non_qword_table_read`/`after_dispatch_table` | `310:2,86:1` | `sequence_chain_to_focused_direct_bridge` | `prog_bb_0293@0x334a3d` | `replay_first_indirect_hop_then_promoted_terminal` | `0xd5ebc` |
| `ufam_04` | 1 | 195 | `44a20faf942e72a8` | `c0ec087b210b` | `0x4` | `0x6` | `misaligned_or_non_qword_table_read`/`inside_dispatch_table_unaligned` | `310:2,86:1` | `sequence_chain_to_focused_direct_bridge` | `prog_bb_0293@0x334a3d` | `replay_first_indirect_hop_then_promoted_terminal` | `0xdaf39` |
| `ufam_05` | 1 | 278 | `bdce1bd00d4b09a0` | `4ec538428441` | `0x5` | `0xa` | `misaligned_or_non_qword_table_read`/`after_dispatch_table` | `323:1,86:1` | `sequence_chain_to_recovered_context_reentry` | `prog_bb_0214@0x2c0468` | `solve_unique_transfer_family` | `0x12906f` |
| `ufam_06` | 1 | 195 | `9917c35930d48ca1` | `c0ec087b210b` | `0x4` | `0x6` | `misaligned_or_non_qword_table_read`/`after_dispatch_table` | `310:2,86:1` | `sequence_chain_to_recovered_context_reentry` | `prog_bb_0214@0x2c0468` | `solve_repeated_central_dispatch_family` | `0x1ed483` |
| `ufam_07` | 1 | 195 | `9917c35930d48ca1` | `c0ec087b210b` | `0x4` | `0x6` | `table_index_out_of_range`/`after_dispatch_table` | `310:2,86:1` | `sequence_chain_to_focused_direct_bridge` | `prog_bb_0293@0x334a3d` | `replay_first_indirect_hop_then_promoted_terminal` | `0x2304b8` |
| `ufam_08` | 1 | 195 | `44a20faf942e72a8` | `c0ec087b210b` | `0x4` | `0x6` | `table_index_out_of_range`/`after_dispatch_table` | `310:2,86:1` | `sequence_chain_to_recovered_context_reentry` | `prog_bb_0214@0x2c0468` | `solve_repeated_central_dispatch_family` | `0x231b74` |
| `ufam_09` | 1 | 195 | `44a20faf942e72a8` | `c0ec087b210b` | `0x4` | `0x6` | `misaligned_or_non_qword_table_read`/`after_dispatch_table` | `310:2,86:1` | `sequence_chain_to_focused_direct_bridge` | `prog_bb_0324@0x33b647` | `replay_first_indirect_hop_then_promoted_terminal` | `0x333bc9` |
| `ufam_10` | 1 | 299 | `b75ed1b046c72a97` | `c6f36fb6c762` | `0x4` | `0x6` | `table_index_out_of_range`/`after_dispatch_table` | `169:1,310:1` | `sequence_chain_to_focused_direct_bridge` | `prog_bb_0324@0x33b647` | `replay_first_indirect_hop_then_promoted_terminal` | `0x33710f` |
| `ufam_11` | 1 | 195 | `9917c35930d48ca1` | `c0ec087b210b` | `0x4` | `0x6` | `misaligned_or_non_qword_table_read`/`after_dispatch_table` | `310:2,86:1` | `sequence_chain_to_focused_direct_bridge` | `prog_bb_0340@0x33f278` | `replay_first_indirect_hop_then_promoted_terminal` | `0x33d2d9` |
| `ufam_12` | 1 | 195 | `44a20faf942e72a8` | `c0ec087b210b` | `0x4` | `0x6` | `misaligned_or_non_qword_table_read`/`after_dispatch_table` | `310:2,86:1` | `sequence_chain_to_recovered_context_reentry` | `prog_bb_0214@0x2c0468` | `solve_repeated_central_dispatch_family` | `0x3655e4` |

## Starts

| Start | Family | Source | Missing | First Hop | Dynamic Next | Sampled | Table | Terminal |
| --- | --- | ---: | --- | --- | --- | --- | --- | --- |
| `0xd1445` | `ufam_02` | 175 | `0xd144b` | `entry_123@0xd5eb8` | `entry_310@0xd4893->0xd4897` | `310:1` | `table_index_out_of_range 0x4388` | `prog_bb_0293@0x334a3d` |
| `0xd5ebc` | `ufam_03` | 195 | `0xd5ec2` | `entry_184@0xdaf35` | `entry_169@0x18bd96->0x18bd9a` | `310:2,86:1` | `misaligned_or_non_qword_table_read 0x49bd` | `prog_bb_0293@0x334a3d` |
| `0xdaf39` | `ufam_04` | 195 | `0xdaf3f` | `entry_184@0x18c463` | `entry_310@0x18c084->0x18c088` | `310:2,86:1` | `misaligned_or_non_qword_table_read 0x1be` | `prog_bb_0293@0x334a3d` |
| `0x122e3c` | `ufam_00` | 299 | `0x122e42` | `entry_165@0x2c0468` | `entry_169@0x2c0464->0x2c0468` | `169:1,310:1` | `misaligned_or_non_qword_table_read 0xd9cf` | `prog_bb_0214@0x2c0468` |
| `0x12906f` | `ufam_05` | 278 | `0x129079` | `entry_123@0x17452a` | `entry_310@0x172d62->0x172d66` | `323:1,86:1` | `misaligned_or_non_qword_table_read 0xea3c` | `prog_bb_0214@0x2c0468` |
| `0x17452e` | `ufam_00` | 299 | `0x174534` | `entry_174@0x122e38` | `entry_310@0x2bff9a->0x2bff9e` | `169:1,310:1` | `misaligned_or_non_qword_table_read 0x8144` | `prog_bb_0214@0x2c0468` |
| `0x17a420` | `ufam_01` | 175 | `0x17a426` | `entry_174@0x231b70` | `entry_169@0x120afe->0x120b02` | `310:1` | `misaligned_or_non_qword_table_read 0xc62` | `prog_bb_0214@0x2c0468` |
| `0x1a6041` | `ufam_01` | 175 | `0x1a6047` | `entry_174@0x12906b` | `entry_169@0x1221a0->0x1221a4` | `310:1` | `misaligned_or_non_qword_table_read 0xe281` | `prog_bb_0214@0x2c0468` |
| `0x1ed483` | `ufam_06` | 195 | `0x1ed489` | `entry_174@0x1a603d` | `entry_310@0x121ed0->0x121ed4` | `310:2,86:1` | `misaligned_or_non_qword_table_read 0x40be` | `prog_bb_0214@0x2c0468` |
| `0x2304b8` | `ufam_07` | 195 | `0x2304be` | `entry_158@0xd1441` | `entry_169@0xd100c->0xd1010` | `310:2,86:1` | `table_index_out_of_range 0x71e0` | `prog_bb_0293@0x334a3d` |
| `0x231b74` | `ufam_08` | 195 | `0x231b7a` | `entry_161@0x1ed47f` | `entry_169@0x121c8d->0x121c91` | `310:2,86:1` | `table_index_out_of_range 0x69c0` | `prog_bb_0214@0x2c0468` |
| `0x333bc9` | `ufam_09` | 195 | `0x333bcf` | `entry_176@0x33a6c8` | `entry_169@0x31e249->0x31e24d` | `310:2,86:1` | `misaligned_or_non_qword_table_read 0x48e2` | `prog_bb_0324@0x33b647` |
| `0x33710f` | `ufam_10` | 299 | `0x337115` | `entry_174@0x333bc5` | `entry_310@0x31e05c->0x31e060` | `169:1,310:1` | `table_index_out_of_range 0x8548` | `prog_bb_0324@0x33b647` |
| `0x33d2d9` | `ufam_11` | 195 | `0x33d2df` | `entry_184@0x31f2ad` | `entry_169@0x31e623->0x31e627` | `310:2,86:1` | `misaligned_or_non_qword_table_read 0x31e2` | `prog_bb_0340@0x33f278` |
| `0x3655e4` | `ufam_12` | 195 | `0x3655ea` | `entry_161@0x17a41c` | `entry_310@0x11dcff->0x11dd03` | `310:2,86:1` | `misaligned_or_non_qword_table_read 0x29c3` | `prog_bb_0214@0x2c0468` |
