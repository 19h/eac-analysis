# Synthetic Gap Residual Audit

Central audit of synthetic-successor starts that remain unresolved after static transfer, dynamic stitch, and hidden-chain replay evidence is joined.

Residual rows: `20`

## Reason Mix

| Reason | Rows |
| --- | ---: |
| `sequence_observed_skip_not_static_replayed` | 20 |

## Promotion State Mix

| Promotion state | Rows |
| --- | ---: |
| `not_promoted_dynamic_next_hook_only` | 19 |
| `not_promoted_dynamic_next_hook_with_target_only_hint` | 1 |

## Chain Status Mix

| Chain status | Rows |
| --- | ---: |
| `dynamic_next_hook_matches_static_transfer` | 20 |
| `hidden_chain_target_only` | 1 |

## Residual Starts

| Start | Source | Gap | Next hook | Next end block | Chain statuses | Reason |
| --- | ---: | --- | --- | --- | --- | --- |
| `0xd1445` | 175 | `target_footprint_of_6:1` | `310@0xd4893->0xd4897` | `prog_bb_0011` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0xd5ebc` | 195 | `target_footprint_of_6:1` | `169@0x18bd96->0x18bd9a` | `prog_bb_0135` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0xdaf39` | 195 | `target_footprint_of_6:1` | `310@0x18c084->0x18c088` | `prog_bb_0137` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x122e3c` | 299 | `target_footprint_of_6:1` | `169@0x2c0464->0x2c0468` | `prog_bb_0214` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x12906f` | 278 | `target_footprint_of_10:1` | `310@0x172d62->0x172d66` | `prog_bb_0109` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x17452e` | 299 | `target_footprint_of_6:1` | `310@0x2bff9a->0x2bff9e` | `prog_bb_0212` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x17a420` | 175 | `target_footprint_of_6:1` | `169@0x120afe->0x120b02` | `prog_bb_0071` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x18c467` | 195 | `target_footprint_of_6:1` | `310@0x11d6ac->0x11d6b0` | `prog_bb_0051` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x1a6041` | 175 | `target_footprint_of_6:1` | `169@0x1221a0->0x1221a4` | `prog_bb_0084` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x1ed483` | 195 | `target_footprint_of_6:1` | `310@0x121ed0->0x121ed4` | `prog_bb_0082` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x2304b8` | 195 | `target_footprint_of_6:1` | `169@0xd100c->0xd1010` | `prog_bb_0005` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x231b74` | 195 | `target_footprint_of_6:1` | `169@0x121c8d->0x121c91` | `prog_bb_0081` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x24bd2a` | 299 | `target_footprint_of_6:2` | `86@0x11ac5a->0x11ac5e` | `prog_bb_0029` | `dynamic_next_hook_matches_static_transfer:1;hidden_chain_target_only:1` | `sequence_observed_skip_not_static_replayed` |
| `0x31f2b1` | 195 | `target_footprint_of_6:1` | `169@0x11d925->0x11d929` | `prog_bb_0052` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x333bc9` | 195 | `target_footprint_of_6:1` | `169@0x31e249->0x31e24d` | `prog_bb_0261` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x33710f` | 299 | `target_footprint_of_6:1` | `310@0x31e05c->0x31e060` | `prog_bb_0259` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x33a6cc` | 299 | `target_footprint_of_6:1` | `169@0x31e436->0x31e43a` | `prog_bb_0263` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x33d2d9` | 195 | `target_footprint_of_6:1` | `169@0x31e623->0x31e627` | `prog_bb_0265` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x34556c` | 175 | `target_footprint_of_6:1` | `169@0x11db12->0x11db16` | `prog_bb_0054` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |
| `0x3655e4` | 195 | `target_footprint_of_6:1` | `310@0x11dcff->0x11dd03` | `prog_bb_0056` | `dynamic_next_hook_matches_static_transfer:1` | `sequence_observed_skip_not_static_replayed` |

## Sampled Operand Context

| Start | Sampled variants | Source sampled IR |
| --- | --- | --- |
| `0xd1445` | `310:+0x2cef7:513307008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta +0x2cef7` |
| `0xd5ebc` | `86:-0x2306:7e5606008000:1,310:-0x542a:517c07008000:1,310:-0x8c8e:ad7e07008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta -0x542a | 1=sampled operand footprint 0x6, observe...` |
| `0xdaf39` | `86:-0x2306:7e5606008000:1,310:-0x542a:517c07008000:1,310:-0x8c8e:ad7e07008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta -0x542a | 1=sampled operand footprint 0x6, observe...` |
| `0x122e3c` | `169:-0x7fe6:795007008000:1,310:-0xcf8b:f68107008000:1` | `1=sampled operand footprint 0x6, observed target table[169], delta -0x7fe6 | 1=sampled operand footprint 0x6, observe...` |
| `0x12906f` | `323:+0x221770:9d451200800020540700:1,86:+0x2426ba:11471200800040750700:1` | `1=sampled operand footprint 0xa, observed target table[323], delta +0x221770 | 1=sampled operand footprint 0xa, obser...` |
| `0x17452e` | `169:-0x7fe6:795007008000:1,310:-0xcf8b:f68107008000:1` | `1=sampled operand footprint 0x6, observed target table[169], delta -0x7fe6 | 1=sampled operand footprint 0x6, observe...` |
| `0x17a420` | `310:+0x2cef7:513307008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta +0x2cef7` |
| `0x18c467` | `86:-0x2306:7e5606008000:1,310:-0x542a:517c07008000:1,310:-0x8c8e:ad7e07008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta -0x542a | 1=sampled operand footprint 0x6, observe...` |
| `0x1a6041` | `310:+0x2cef7:513307008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta +0x2cef7` |
| `0x1ed483` | `86:-0x2306:7e5606008000:1,310:-0x542a:517c07008000:1,310:-0x8c8e:ad7e07008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta -0x542a | 1=sampled operand footprint 0x6, observe...` |
| `0x2304b8` | `86:-0x2306:7e5606008000:1,310:-0x542a:517c07008000:1,310:-0x8c8e:ad7e07008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta -0x542a | 1=sampled operand footprint 0x6, observe...` |
| `0x231b74` | `86:-0x2306:7e5606008000:1,310:-0x542a:517c07008000:1,310:-0x8c8e:ad7e07008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta -0x542a | 1=sampled operand footprint 0x6, observe...` |
| `0x24bd2a` | `169:-0x7fe6:795007008000:1,310:-0xcf8b:f68107008000:1` | `1=sampled operand footprint 0x6, observed target table[169], delta -0x7fe6 | 1=sampled operand footprint 0x6, observe...` |
| `0x31f2b1` | `86:-0x2306:7e5606008000:1,310:-0x542a:517c07008000:1,310:-0x8c8e:ad7e07008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta -0x542a | 1=sampled operand footprint 0x6, observe...` |
| `0x333bc9` | `86:-0x2306:7e5606008000:1,310:-0x542a:517c07008000:1,310:-0x8c8e:ad7e07008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta -0x542a | 1=sampled operand footprint 0x6, observe...` |
| `0x33710f` | `169:-0x7fe6:795007008000:1,310:-0xcf8b:f68107008000:1` | `1=sampled operand footprint 0x6, observed target table[169], delta -0x7fe6 | 1=sampled operand footprint 0x6, observe...` |
| `0x33a6cc` | `169:-0x7fe6:795007008000:1,310:-0xcf8b:f68107008000:1` | `1=sampled operand footprint 0x6, observed target table[169], delta -0x7fe6 | 1=sampled operand footprint 0x6, observe...` |
| `0x33d2d9` | `86:-0x2306:7e5606008000:1,310:-0x542a:517c07008000:1,310:-0x8c8e:ad7e07008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta -0x542a | 1=sampled operand footprint 0x6, observe...` |
| `0x34556c` | `310:+0x2cef7:513307008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta +0x2cef7` |
| `0x3655e4` | `86:-0x2306:7e5606008000:1,310:-0x542a:517c07008000:1,310:-0x8c8e:ad7e07008000:1` | `1=sampled operand footprint 0x6, observed target table[310], delta -0x542a | 1=sampled operand footprint 0x6, observe...` |
