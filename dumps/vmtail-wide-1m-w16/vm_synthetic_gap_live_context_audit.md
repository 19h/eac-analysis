# Synthetic Gap Live-Context Audit

Residual tail replay seeded with concrete predecessor state plus live GPR/frame-scratch snapshots at the synthetic-start tail event.

Rows: `20`

## Resolution Mix

| Resolution | Rows |
| --- | ---: |
| `live_unknown_target` | 16 |
| `live_table_oob` | 4 |

## Live Status Mix

| Status | Variants |
| --- | ---: |
| `unknown_target` | 29 |

## Live Unknown Reason Mix

| Reason | Variants |
| --- | ---: |
| `table_read` | 24 |
| `table_oob` | 5 |

## Residual Starts

| Start | Source | Seeds | Live Status | Reason | Pred End | State-only | Live Resolution |
| --- | ---: | ---: | --- | --- | --- | --- | --- |
| `0xd1445` | 175 | 1 | `unknown_target:1` | `table_oob:1` | `0xd1449:1` | `concrete_table_oob` | `live_table_oob` |
| `0xd5ebc` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0xd5ec0:1` | `concrete_unknown_target` | `live_unknown_target` |
| `0xdaf39` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0xdaf3d:1` | `concrete_unknown_target` | `live_unknown_target` |
| `0x122e3c` | 299 | 1 | `unknown_target:1` | `table_read:1` | `0x122e40:1` | `concrete_branch_unknown` | `live_unknown_target` |
| `0x12906f` | 278 | 2 | `unknown_target:2` | `table_read:2` | `0x129074:2` | `concrete_unknown_target` | `live_unknown_target` |
| `0x17452e` | 299 | 2 | `unknown_target:2` | `table_read:2` | `0x174532:2` | `concrete_branch_unknown` | `live_unknown_target` |
| `0x17a420` | 175 | 2 | `unknown_target:2` | `table_read:2` | `0x17a424:2` | `concrete_unknown_target` | `live_unknown_target` |
| `0x18c467` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0x18c46b:1` | `concrete_unknown_target` | `live_unknown_target` |
| `0x1a6041` | 175 | 2 | `unknown_target:2` | `table_read:2` | `0x1a6045:2` | `concrete_unknown_target` | `live_unknown_target` |
| `0x1ed483` | 195 | 2 | `unknown_target:2` | `table_read:2` | `0x1ed487:2` | `concrete_unknown_target` | `live_unknown_target` |
| `0x2304b8` | 195 | 1 | `unknown_target:1` | `table_oob:1` | `0x2304bc:1` | `concrete_table_oob` | `live_table_oob` |
| `0x231b74` | 195 | 2 | `unknown_target:2` | `table_oob:2` | `0x231b78:2` | `concrete_table_oob` | `live_table_oob` |
| `0x24bd2a` | 299 | 2 | `unknown_target:2` | `table_read:2` | `0x24bd2e:2` | `concrete_branch_unknown` | `live_unknown_target` |
| `0x31f2b1` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0x31f2b5:1` | `concrete_unknown_target` | `live_unknown_target` |
| `0x333bc9` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0x333bcd:1` | `concrete_unknown_target` | `live_unknown_target` |
| `0x33710f` | 299 | 1 | `unknown_target:1` | `table_oob:1` | `0x337113:1` | `concrete_table_oob` | `live_table_oob` |
| `0x33a6cc` | 299 | 1 | `unknown_target:1` | `table_read:1` | `0x33a6d0:1` | `concrete_branch_unknown` | `live_unknown_target` |
| `0x33d2d9` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0x33d2dd:1` | `concrete_unknown_target` | `live_unknown_target` |
| `0x34556c` | 175 | 2 | `unknown_target:2` | `table_read:2` | `0x345570:2` | `concrete_unknown_target` | `live_unknown_target` |
| `0x3655e4` | 195 | 2 | `unknown_target:2` | `table_read:2` | `0x3655e8:2` | `concrete_unknown_target` | `live_unknown_target` |
