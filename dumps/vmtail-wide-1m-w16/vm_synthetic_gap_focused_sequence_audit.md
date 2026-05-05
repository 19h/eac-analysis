# Synthetic Gap Focused Sequence Audit

Raw focused VMTAIL sequence around residual starts, including indirect tail-site hops that are not hard CFG evidence.

Rows: `20`

- starts with raw focused start events: `20`
- starts with a following raw event: `20`
- starts whose next raw event is followed by another residual start: `14`

## Raw Class Mix

| Class | Rows |
| --- | ---: |
| `raw_next_tail_indirect_site` | 22 |
| `raw_next_dispatch` | 6 |
| `raw_start_seen_no_next_event` | 2 |

## Chain Terminals

| Terminal | Starts |
| --- | ---: |
| `focused_direct_promoted` | 12 |
| `raw_sequence_no_residual_successor` | 8 |

## Residual Sequence Chains

| Start | Source | Raw Next | Following Residual | Chain Terminal | Chain |
| --- | ---: | --- | --- | --- | --- |
| `0xd1445` | 175 | `tail 0xd5eb8 +0x4a73 -> entry 123` | `0xd5ebc` | `focused_direct_promoted` | `0xd1445 -> 0xd5ebc -> 0xdaf39 -> 0x18c467` |
| `0xd5ebc` | 195 | `tail 0xdaf35 +0x5079 -> entry 184` | `0xdaf39` | `focused_direct_promoted` | `0xd5ebc -> 0xdaf39 -> 0x18c467` |
| `0xdaf39` | 195 | `tail 0x18c463 +0xb152a -> entry 184` | `0x18c467` | `focused_direct_promoted` | `0xdaf39 -> 0x18c467` |
| `0x122e3c` | 299 | `tail 0x2c0468 +0x19d62c -> entry 165` | `-` | `raw_sequence_no_residual_successor` | `0x122e3c` |
| `0x12906f` | 278 | `tail 0x17452a +0x4b4bb -> entry 123` | `0x17452e` | `raw_sequence_no_residual_successor` | `0x12906f -> 0x17452e -> 0x122e3c` |
| `0x17452e` | 299 | `tail 0x122e38 -0x516f6 -> entry 174` | `0x122e3c` | `raw_sequence_no_residual_successor` | `0x17452e -> 0x122e3c` |
| `0x17a420` | 175 | `tail 0x231b70 +0xb7750 -> entry 174` | `0x231b74` | `raw_sequence_no_residual_successor` | `0x17a420 -> 0x231b74 -> 0x1ed483 -> 0x1a6041 -> 0x12906f -> 0x17452e -> 0x122e3c` |
| `0x18c467` | 195 | `dispatch 0x334a3d +0x1a85d6 -> entry 42` | `-` | `focused_direct_promoted` | `0x18c467` |
| `0x1a6041` | 175 | `tail 0x12906b -0x7cfd6 -> entry 174` | `0x12906f` | `raw_sequence_no_residual_successor` | `0x1a6041 -> 0x12906f -> 0x17452e -> 0x122e3c` |
| `0x1ed483` | 195 | `tail 0x1a603d -0x47446 -> entry 174` | `0x1a6041` | `raw_sequence_no_residual_successor` | `0x1ed483 -> 0x1a6041 -> 0x12906f -> 0x17452e -> 0x122e3c` |
| `0x2304b8` | 195 | `tail 0xd1441 -0x15f077 -> entry 158` | `0xd1445` | `focused_direct_promoted` | `0x2304b8 -> 0xd1445 -> 0xd5ebc -> 0xdaf39 -> 0x18c467` |
| `0x231b74` | 195 | `tail 0x1ed47f -0x446f5 -> entry 161` | `0x1ed483` | `raw_sequence_no_residual_successor` | `0x231b74 -> 0x1ed483 -> 0x1a6041 -> 0x12906f -> 0x17452e -> 0x122e3c` |
| `0x24bd2a` | 299 | `dispatch 0x26cd71 +0x21047 -> entry 86` | `-` | `focused_direct_promoted` | `0x24bd2a` |
| `0x31f2b1` | 195 | `dispatch 0x33f278 +0x1ffc7 -> entry 323` | `-` | `focused_direct_promoted` | `0x31f2b1` |
| `0x333bc9` | 195 | `tail 0x33a6c8 +0x6aff -> entry 176` | `0x33a6cc` | `focused_direct_promoted` | `0x333bc9 -> 0x33a6cc` |
| `0x33710f` | 299 | `tail 0x333bc5 -0x354a -> entry 174` | `0x333bc9` | `focused_direct_promoted` | `0x33710f -> 0x333bc9 -> 0x33a6cc` |
| `0x33a6cc` | 299 | `dispatch 0x33b647 +0xf7b -> entry 42` | `-` | `focused_direct_promoted` | `0x33a6cc` |
| `0x33d2d9` | 195 | `tail 0x31f2ad -0x1e02c -> entry 184` | `0x31f2b1` | `focused_direct_promoted` | `0x33d2d9 -> 0x31f2b1` |
| `0x34556c` | 175 | `dispatch 0x3603af +0x1ae43 -> entry 86` | `-` | `focused_direct_promoted` | `0x34556c` |
| `0x3655e4` | 195 | `tail 0x17a41c -0x1eb1c8 -> entry 161` | `0x17a420` | `raw_sequence_no_residual_successor` | `0x3655e4 -> 0x17a420 -> 0x231b74 -> 0x1ed483 -> 0x1a6041 -> 0x12906f -> 0x17452e -> 0x122e3c` |
