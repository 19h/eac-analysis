# VM Program atlas_060

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 060 |
| range | 0x369ad3..0x36a0bc |
| first seen rank | 34 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 059:2,060:2 |
| outgoing | 060:2,059:1,056:1 |
| external/exit edges | 0 |
| blocks | 4 |
| rows | 387 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | no_exact_side_effect_ref |
| role mix |  |
| top strings |  |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_018_plus0x3_state_add_const_slot_multi_path:21,vmop_337_plus0x4_state_add_const_slot_multi_path:18,vmop_064_plus0x4_state_add_const_... |
| state kinds | state_add_const:362,state_mixed:15,state_const_post:6,sampled_backedge:2,state_preserve:1,state_formula:1 |
| dispatch slots | slot_multi_path:261,slot_mba_stateful:89,slot_u16_0:19,slot_u16_1_sub_const:11,slot_const_or_affine:5,slot_unknown:2 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_060.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_060.c |

