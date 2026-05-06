# VM Program atlas_004

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 004 |
| range | 0xd718e..0xd790a |
| first seen rank | 14 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 004:3 |
| outgoing | 004:3,005:1 |
| external/exit edges | 0 |
| blocks | 4 |
| rows | 489 |

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
| top opcodes | vmop_064_plus0x4_state_add_const_slot_multi_path:25,vmop_347_plus0x4_state_add_const_slot_multi_path:22,vmop_066_plus0x3_state_add_const_... |
| state kinds | state_add_const:461,state_mixed:19,state_const_post:4,state_preserve:3,state_formula:1,sampled_backedge:1 |
| dispatch slots | slot_multi_path:339,slot_mba_stateful:105,slot_u16_0:24,slot_u16_1_sub_const:15,slot_const_or_affine:5,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_004.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_004.c |

