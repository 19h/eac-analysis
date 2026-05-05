# Synthetic Gap Live Snapshot Transfer Probe

Replays unresolved synthetic-gap source handlers from selected VMTAIL run snapshots. Rows with full GPR snapshots can resolve register-dependent native branches; frame-only rows are weaker evidence and are kept separate. This probe does not promote sequence-only next events into hard CFG edges.

Rows: `31`
Unresolved starts represented: `15`
Starts with matching live events: `15`
Starts without matching live events: `0`

## Mixes

### Row Kind

| Value | Rows |
| --- | ---: |
| `live_event` | 31 |

### Seed Quality

| Value | Rows |
| --- | ---: |
| `full_gpr_snapshot` | 24 |
| `frame_only_snapshot` | 7 |

### Source Entry

| Value | Rows |
| --- | ---: |
| `195` | 16 |
| `299` | 7 |
| `175` | 6 |
| `278` | 2 |

### Live Status

| Value | Rows |
| --- | ---: |
| `unknown_target` | 31 |

### Live Table Diagnosis

| Value | Rows |
| --- | ---: |
| `misaligned_or_non_qword_table_read` | 23 |
| `table_index_out_of_range` | 8 |

### Branch Resolution

| Value | Rows |
| --- | ---: |
| `branch_unknown_unchanged_zero` | 24 |
| `branch_unknown_removed` | 6 |
| `branch_unknown_still_same` | 1 |

### Next Relation

| Value | Rows |
| --- | ---: |
| `next_event_is_observed_first_hop` | 20 |
| `next_event_differs_from_family_chain` | 7 |
| `next_event_is_terminal_reentry` | 2 |
| `no_following_event_in_run` | 2 |

### Interpretation

| Value | Rows |
| --- | ---: |
| `live_table_rejected_or_symbolic` | 25 |
| `live_branches_resolved_sequence_only` | 4 |
| `live_branches_resolved_table_rejected` | 2 |

## Rows

| Start | Source | Family | Run | Seed | Status | Table | Branches | Path | Next | Interpretation |
| --- | ---: | --- | --- | --- | --- | --- | ---: | --- | --- | --- |
| `0xd1445` | 175 | `ufam_02` | `vmtail-fakenet-w16` | `frame_only_snapshot` | `unknown_target` | `table_index_out_of_range/0x4388` | `0` | `bbe0d482f93ad097` | `tail@0xd4897->entry_354` | `live_table_rejected_or_symbolic` |
| `0xd1445` | 175 | `ufam_02` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `table_index_out_of_range/0x4388` | `0` | `bbe0d482f93ad097` | `tail@0xd5eb8->entry_123` | `live_table_rejected_or_symbolic` |
| `0xd5ebc` | 195 | `ufam_03` | `vmtail-fakenet-w16` | `frame_only_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x49bd` | `0` | `44a20faf942e72a8` | `tail@0x18bd9a->entry_171` | `live_table_rejected_or_symbolic` |
| `0xd5ebc` | 195 | `ufam_03` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x49bd` | `0` | `44a20faf942e72a8` | `tail@0xdaf35->entry_184` | `live_table_rejected_or_symbolic` |
| `0xdaf39` | 195 | `ufam_04` | `vmtail-fakenet-w16` | `frame_only_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x1be` | `0` | `44a20faf942e72a8` | `tail@0x18c088->entry_171` | `live_table_rejected_or_symbolic` |
| `0xdaf39` | 195 | `ufam_04` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x1be` | `0` | `44a20faf942e72a8` | `tail@0x18c463->entry_184` | `live_table_rejected_or_symbolic` |
| `0x122e3c` | 299 | `ufam_00` | `vmtail-residual-122e3c-context` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0xd9cf` | `0` | `833b04476f7a3399` | `tail@0x2c0468->entry_165` | `live_branches_resolved_sequence_only` |
| `0x122e3c` | 299 | `ufam_00` | `vmtail-residual-122e3c-context-postcall` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0xd9cf` | `0` | `833b04476f7a3399` | `tail@0x2c0468->entry_165` | `live_branches_resolved_sequence_only` |
| `0x122e3c` | 299 | `ufam_00` | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0xd9cf` | `0` | `833b04476f7a3399` | `-` | `live_branches_resolved_table_rejected` |
| `0x12906f` | 278 | `ufam_05` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0xea3c` | `0` | `a604fbe70c42f7fd` | `tail@0x17452a->entry_123` | `live_table_rejected_or_symbolic` |
| `0x12906f` | 278 | `ufam_05` | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0xea3c` | `0` | `a604fbe70c42f7fd` | `tail@0x17452a->entry_123` | `live_table_rejected_or_symbolic` |
| `0x17452e` | 299 | `ufam_00` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x8144` | `0` | `745a7b95e00833b1` | `-` | `live_branches_resolved_table_rejected` |
| `0x17452e` | 299 | `ufam_00` | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x8144` | `0` | `745a7b95e00833b1` | `tail@0x122e38->entry_174` | `live_branches_resolved_sequence_only` |
| `0x17a420` | 175 | `ufam_01` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0xc62` | `0` | `b375be1a950bc98f` | `tail@0x231b70->entry_174` | `live_table_rejected_or_symbolic` |
| `0x17a420` | 175 | `ufam_01` | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0xc62` | `0` | `b375be1a950bc98f` | `tail@0x231b70->entry_174` | `live_table_rejected_or_symbolic` |
| `0x1a6041` | 175 | `ufam_01` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0xe281` | `0` | `bbe0d482f93ad097` | `tail@0x12906b->entry_174` | `live_table_rejected_or_symbolic` |
| `0x1a6041` | 175 | `ufam_01` | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0xe281` | `0` | `bbe0d482f93ad097` | `tail@0x12906b->entry_174` | `live_table_rejected_or_symbolic` |
| `0x1ed483` | 195 | `ufam_06` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x40be` | `0` | `44a20faf942e72a8` | `tail@0x1a603d->entry_174` | `live_table_rejected_or_symbolic` |
| `0x1ed483` | 195 | `ufam_06` | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x40be` | `0` | `44a20faf942e72a8` | `tail@0x1a603d->entry_174` | `live_table_rejected_or_symbolic` |
| `0x2304b8` | 195 | `ufam_07` | `vmtail-fakenet-w16` | `frame_only_snapshot` | `unknown_target` | `table_index_out_of_range/0x71e0` | `0` | `9917c35930d48ca1` | `tail@0xd1010->entry_165` | `live_table_rejected_or_symbolic` |
| `0x2304b8` | 195 | `ufam_07` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `table_index_out_of_range/0x71e0` | `0` | `9917c35930d48ca1` | `tail@0xd1441->entry_158` | `live_table_rejected_or_symbolic` |
| `0x231b74` | 195 | `ufam_08` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `table_index_out_of_range/0x69c0` | `0` | `44a20faf942e72a8` | `tail@0x1ed47f->entry_161` | `live_table_rejected_or_symbolic` |
| `0x231b74` | 195 | `ufam_08` | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `table_index_out_of_range/0x69c0` | `0` | `44a20faf942e72a8` | `tail@0x1ed47f->entry_161` | `live_table_rejected_or_symbolic` |
| `0x333bc9` | 195 | `ufam_09` | `vmtail-fakenet-w16` | `frame_only_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x48e2` | `0` | `9917c35930d48ca1` | `tail@0x31e24d->entry_165` | `live_table_rejected_or_symbolic` |
| `0x333bc9` | 195 | `ufam_09` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x48e2` | `0` | `9917c35930d48ca1` | `tail@0x33a6c8->entry_176` | `live_table_rejected_or_symbolic` |
| `0x33710f` | 299 | `ufam_10` | `vmtail-fakenet-w16` | `frame_only_snapshot` | `unknown_target` | `table_index_out_of_range/0x8548` | `1` | `b75ed1b046c72a97` | `tail@0x31e060->entry_165` | `live_table_rejected_or_symbolic` |
| `0x33710f` | 299 | `ufam_10` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `table_index_out_of_range/0x8548` | `0` | `833b04476f7a3399` | `tail@0x333bc5->entry_174` | `live_branches_resolved_sequence_only` |
| `0x33d2d9` | 195 | `ufam_11` | `vmtail-fakenet-w16` | `frame_only_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x31e2` | `0` | `44a20faf942e72a8` | `tail@0x31e627->entry_165` | `live_table_rejected_or_symbolic` |
| `0x33d2d9` | 195 | `ufam_11` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x31e2` | `0` | `44a20faf942e72a8` | `tail@0x31f2ad->entry_184` | `live_table_rejected_or_symbolic` |
| `0x3655e4` | 195 | `ufam_12` | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x29c3` | `0` | `44a20faf942e72a8` | `tail@0x17a41c->entry_161` | `live_table_rejected_or_symbolic` |
| `0x3655e4` | 195 | `ufam_12` | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `unknown_target` | `misaligned_or_non_qword_table_read/0x29c3` | `0` | `44a20faf942e72a8` | `tail@0x17a41c->entry_161` | `live_table_rejected_or_symbolic` |
