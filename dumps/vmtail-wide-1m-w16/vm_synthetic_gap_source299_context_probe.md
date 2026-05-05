# Source 299 Context-Reentry Probe

Live VMTAIL register snapshots resolve the source-299 branch path for the unresolved context-reentry family and compare the concrete slot result with the next focused raw event. This audit does not promote sequence-only evidence into hard CFG.

Rows: `5`
Starts: `3`

## Mixes

### Start

| Value | Rows |
| --- | ---: |
| `0x122e3c` | 2 |
| `0x17452e` | 2 |
| `0x33710f` | 1 |

### Resolved Path Hash

| Value | Rows |
| --- | ---: |
| `833b04476f7a3399` | 3 |
| `745a7b95e00833b1` | 2 |

### Slot/File Class

| Value | Rows |
| --- | ---: |
| `after_dispatch_table/non_pointer_bytes` | 5 |

### Next Relation

| Value | Rows |
| --- | ---: |
| `no_following_event_in_run` | 2 |
| `next_event_is_observed_first_hop` | 2 |
| `next_event_is_terminal_reentry` | 1 |

### Interpretation

| Value | Rows |
| --- | ---: |
| `branch_resolved_but_observed_flow_is_sequence_only` | 3 |
| `branch_resolved_table_rejected` | 2 |

## Rows

| Start | Run | r8 Low | Path | Slot | Table | Next | Relation | Interpretation |
| --- | --- | ---: | --- | --- | --- | --- | --- | --- |
| `0x122e3c` | `vmtail-residual-122e3c-context` | `0x70` | `833b04476f7a3399` | `0xd9cf` | `after_dispatch_table/non_pointer_bytes` | `tail@0x2c0468->entry_165` | `next_event_is_terminal_reentry` | `branch_resolved_but_observed_flow_is_sequence_only` |
| `0x122e3c` | `vmtail-state-residual-targets` | `0x70` | `833b04476f7a3399` | `0xd9cf` | `after_dispatch_table/non_pointer_bytes` | `-` | `no_following_event_in_run` | `branch_resolved_table_rejected` |
| `0x17452e` | `vmtail-live-residual-targets` | `0x70` | `745a7b95e00833b1` | `0x8144` | `after_dispatch_table/non_pointer_bytes` | `-` | `no_following_event_in_run` | `branch_resolved_table_rejected` |
| `0x17452e` | `vmtail-state-residual-targets` | `0x70` | `745a7b95e00833b1` | `0x8144` | `after_dispatch_table/non_pointer_bytes` | `tail@0x122e38->entry_174` | `next_event_is_observed_first_hop` | `branch_resolved_but_observed_flow_is_sequence_only` |
| `0x33710f` | `vmtail-live-residual-targets` | `0xff` | `833b04476f7a3399` | `0x8548` | `after_dispatch_table/non_pointer_bytes` | `tail@0x333bc5->entry_174` | `next_event_is_observed_first_hop` | `branch_resolved_but_observed_flow_is_sequence_only` |
