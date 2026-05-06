# VM Program atlas_062

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 062 |
| range | 0x36d524..0x36db0d |
| first seen rank | 36 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | exact string/data references plus opcode/control evidence |
| confidence | low_to_medium |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final |

## Control

| field | value |
| --- | --- |
| incoming | 061:2,062:2 |
| outgoing | 062:2,061:1,056:1 |
| external/exit edges | 0 |
| blocks | 4 |
| rows | 387 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | unclassified_data:1 |
| role mix | unclassified_data_string:1 |
| top strings | :$23 |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_028_plus0x3_state_add_const_slot_u16_0:19,vmop_337_plus0x4_state_add_const_slot_multi_path:19,vmop_114_plus0x4_state_add_const_slot_... |
| state kinds | state_add_const:359,state_mixed:17,state_const_post:7,sampled_backedge:2,state_preserve:1,state_formula:1 |
| dispatch slots | slot_multi_path:264,slot_mba_stateful:75,slot_u16_0:27,slot_u16_1_sub_const:11,slot_const_or_affine:8,slot_unknown:2 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_062.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_062.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x36d81e | unclassified_data_string | unclassified_data:1 | :$23 | vmop_140_plus0x6_state_add_const_slot_multi_path |

