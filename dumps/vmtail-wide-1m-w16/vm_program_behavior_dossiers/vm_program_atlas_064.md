# VM Program atlas_064

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 064 |
| range | 0x3716c7..0x37176c |
| first seen rank | 38 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 063:2 |
| outgoing | 063:1,065:1 |
| external/exit edges | 0 |
| blocks | 2 |
| rows | 35 |

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
| top opcodes | vmop_354_plus0x2_state_const_post_slot_const_or_affine:2,vmop_347_plus0x4_state_add_const_slot_multi_path:2,vmop_154_plus0x4_state_add_co... |
| state kinds | state_add_const:28,state_const_post:4,sampled_backedge:1,state_formula:1,sampled_long_or_sparse:1 |
| dispatch slots | slot_multi_path:17,slot_mba_stateful:11,slot_const_or_affine:3,slot_unknown:2,slot_u16_0:1,slot_u16_1_sub_const:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_064.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_064.c |

