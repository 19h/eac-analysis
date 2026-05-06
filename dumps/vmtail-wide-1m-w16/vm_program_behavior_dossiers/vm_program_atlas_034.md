# VM Program atlas_034

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 034 |
| range | 0x26db07..0x26f097 |
| first seen rank | 1 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | exact string/data references plus opcode/control evidence |
| confidence | low_to_medium |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final |

## Control

| field | value |
| --- | --- |
| incoming | 033:1 |
| outgoing | 033:1 |
| external/exit edges | 0 |
| blocks | 1 |
| rows | 1437 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | literal_data:1 |
| role mix | literal_data_marker:1 |
| top strings | YYYYY |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_340_plus0x4_state_add_const_slot_multi_path:58,vmop_258_plus0x4_state_add_const_slot_multi_path:56,vmop_018_plus0x3_state_add_const_... |
| state kinds | state_add_const:1330,state_mixed:72,state_const_post:19,state_preserve:13,state_formula:2,sampled_backedge:1 |
| dispatch slots | slot_multi_path:958,slot_mba_stateful:322,slot_u16_0:94,slot_u16_1_sub_const:41,slot_const_or_affine:21,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_034.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_034.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x26db58 | literal_data_marker | literal_data | YYYYY | vmop_028_plus0x3_state_add_const_slot_u16_0 |

