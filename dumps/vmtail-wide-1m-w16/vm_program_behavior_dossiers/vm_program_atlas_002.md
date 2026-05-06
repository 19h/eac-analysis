# VM Program atlas_002

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 002 |
| range | 0xd476e..0xd57f4 |
| first seen rank | 9 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 002:7,001:1 |
| outgoing | 002:7,003:1 |
| external/exit edges | 0 |
| blocks | 8 |
| rows | 1080 |

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
| top opcodes | vmop_028_plus0x3_state_add_const_slot_u16_0:51,vmop_018_plus0x3_state_add_const_slot_multi_path:47,vmop_064_plus0x4_state_add_const_slot_... |
| state kinds | state_add_const:1019,state_mixed:46,state_const_post:10,state_preserve:3,state_formula:1,sampled_backedge:1 |
| dispatch slots | slot_multi_path:727,slot_mba_stateful:224,slot_u16_0:79,slot_u16_1_sub_const:39,slot_const_or_affine:10,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_002.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_002.c |

