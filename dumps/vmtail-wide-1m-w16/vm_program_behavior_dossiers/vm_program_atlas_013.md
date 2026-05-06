# VM Program atlas_013

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 013 |
| range | 0x11ef65..0x11f4da |
| first seen rank | 44 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 013:2,012:1 |
| outgoing | 013:2,014:1 |
| external/exit edges | 0 |
| blocks | 3 |
| rows | 356 |

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
| top opcodes | vmop_114_plus0x4_state_add_const_slot_multi_path:19,vmop_297_plus0x3_state_add_const_slot_multi_path:15,vmop_066_plus0x3_state_add_const_... |
| state kinds | state_add_const:323,state_mixed:23,state_const_post:8,state_affine:1,sampled_long_or_sparse:1 |
| dispatch slots | slot_multi_path:242,slot_mba_stateful:77,slot_u16_0:20,slot_u16_1_sub_const:11,slot_const_or_affine:5,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_013.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_013.c |

