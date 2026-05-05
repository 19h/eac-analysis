# Synthetic Gap Concrete-State Audit

Concrete replay of residual synthetic-gap handlers using post-state from the state-aware predecessor edge when available.

Rows: `20`

## Classification Mix

| Classification | Rows |
| --- | ---: |
| `concrete_unknown_target` | 12 |
| `concrete_table_oob` | 4 |
| `concrete_branch_unknown` | 4 |

## Concrete Status Mix

| Status | Variants |
| --- | ---: |
| `unknown_target` | 20 |

## Unknown Reason Mix

| Reason | Variants |
| --- | ---: |
| `table_read` | 16 |
| `table_oob` | 4 |

## Residual Starts

| Start | Source | State rows | Status | Reason | Pred end | Next hook | Class |
| --- | ---: | ---: | --- | --- | --- | --- | --- |
| `0xd1445` | 175 | 1 | `unknown_target:1` | `table_oob:1` | `0xd1449:1` | `310@0xd4893->0xd4897` | `concrete_table_oob` |
| `0xd5ebc` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0xd5ec0:1` | `169@0x18bd96->0x18bd9a` | `concrete_unknown_target` |
| `0xdaf39` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0xdaf3d:1` | `310@0x18c084->0x18c088` | `concrete_unknown_target` |
| `0x122e3c` | 299 | 1 | `unknown_target:1` | `table_read:1` | `0x122e40:1` | `169@0x2c0464->0x2c0468` | `concrete_branch_unknown` |
| `0x12906f` | 278 | 1 | `unknown_target:1` | `table_read:1` | `0x129074:1` | `310@0x172d62->0x172d66` | `concrete_unknown_target` |
| `0x17452e` | 299 | 1 | `unknown_target:1` | `table_read:1` | `0x174532:1` | `310@0x2bff9a->0x2bff9e` | `concrete_branch_unknown` |
| `0x17a420` | 175 | 1 | `unknown_target:1` | `table_read:1` | `0x17a424:1` | `169@0x120afe->0x120b02` | `concrete_unknown_target` |
| `0x18c467` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0x18c46b:1` | `310@0x11d6ac->0x11d6b0` | `concrete_unknown_target` |
| `0x1a6041` | 175 | 1 | `unknown_target:1` | `table_read:1` | `0x1a6045:1` | `169@0x1221a0->0x1221a4` | `concrete_unknown_target` |
| `0x1ed483` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0x1ed487:1` | `310@0x121ed0->0x121ed4` | `concrete_unknown_target` |
| `0x2304b8` | 195 | 1 | `unknown_target:1` | `table_oob:1` | `0x2304bc:1` | `169@0xd100c->0xd1010` | `concrete_table_oob` |
| `0x231b74` | 195 | 1 | `unknown_target:1` | `table_oob:1` | `0x231b78:1` | `169@0x121c8d->0x121c91` | `concrete_table_oob` |
| `0x24bd2a` | 299 | 2 | `unknown_target:1` | `table_read:1` | `0x24bd2e:1` | `86@0x11ac5a->0x11ac5e` | `concrete_branch_unknown` |
| `0x31f2b1` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0x31f2b5:1` | `169@0x11d925->0x11d929` | `concrete_unknown_target` |
| `0x333bc9` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0x333bcd:1` | `169@0x31e249->0x31e24d` | `concrete_unknown_target` |
| `0x33710f` | 299 | 1 | `unknown_target:1` | `table_oob:1` | `0x337113:1` | `310@0x31e05c->0x31e060` | `concrete_table_oob` |
| `0x33a6cc` | 299 | 1 | `unknown_target:1` | `table_read:1` | `0x33a6d0:1` | `169@0x31e436->0x31e43a` | `concrete_branch_unknown` |
| `0x33d2d9` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0x33d2dd:1` | `169@0x31e623->0x31e627` | `concrete_unknown_target` |
| `0x34556c` | 175 | 1 | `unknown_target:1` | `table_read:1` | `0x345570:1` | `169@0x11db12->0x11db16` | `concrete_unknown_target` |
| `0x3655e4` | 195 | 1 | `unknown_target:1` | `table_read:1` | `0x3655e8:1` | `310@0x11dcff->0x11dd03` | `concrete_unknown_target` |
