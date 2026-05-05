# Synthetic Gap Focused Direct-Trace Audit

Focused live/state residual traces checked for rows that start exactly at the residual synthetic VM IP.

Rows: `20`

- residual starts with focused direct rows: `5`
- hard bridge candidates to recovered block starts: `5`
- unique recovered destinations: `5`

## Class Mix

| Class | Rows |
| --- | ---: |
| `no_focused_direct_trace` | 15 |
| `direct_trace_to_recovered_block` | 5 |

## Direct Trace Rows

| Start | Source | Focused Transfer | Dest Block | Target | Candidate | Class |
| --- | ---: | --- | --- | --- | --- | --- |
| `0xd1445` | 175 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0xd5ebc` | 195 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0xdaf39` | 195 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0x122e3c` | 299 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0x12906f` | 278 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0x17452e` | 299 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0x17a420` | 175 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0x18c467` | 195 | `0x18c467 -> 0x334a3d (+0x1a85d6)` | `293@0x334a3d` | `entry 42 / 0x815ea` | `yes` | `direct_trace_to_recovered_block` |
| `0x1a6041` | 175 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0x1ed483` | 195 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0x2304b8` | 195 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0x231b74` | 195 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0x24bd2a` | 299 | `0x24bd2a -> 0x26cd71 (+0x21047)` | `190@0x26cd71` | `entry 86 / 0x8a37f` | `yes` | `direct_trace_to_recovered_block` |
| `0x31f2b1` | 195 | `0x31f2b1 -> 0x33f278 (+0x1ffc7)` | `340@0x33f278` | `entry 323 / 0xbb6e6` | `yes` | `direct_trace_to_recovered_block` |
| `0x333bc9` | 195 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0x33710f` | 299 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0x33a6cc` | 299 | `0x33a6cc -> 0x33b647 (+0xf7b)` | `324@0x33b647` | `entry 42 / 0x815ea` | `yes` | `direct_trace_to_recovered_block` |
| `0x33d2d9` | 195 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
| `0x34556c` | 175 | `0x34556c -> 0x3603af (+0x1ae43)` | `385@0x3603af` | `entry 86 / 0x8a37f` | `yes` | `direct_trace_to_recovered_block` |
| `0x3655e4` | 195 | `-` | `-` | `-` | `no` | `no_focused_direct_trace` |
