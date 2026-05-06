# VM Program atlas_001

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 001 |
| range | 0xd3fac..0xd4581 |
| first seen rank | 8 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 001:2 |
| outgoing | 001:2,002:1 |
| external/exit edges | 0 |
| blocks | 3 |
| rows | 380 |

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
| top opcodes | vmop_114_plus0x4_state_add_const_slot_multi_path:19,vmop_064_plus0x4_state_add_const_slot_multi_path:17,vmop_168_plus0x4_state_add_const_... |
| state kinds | state_add_const:351,state_mixed:21,state_const_post:4,state_preserve:2,state_formula:1,sampled_long_or_sparse:1 |
| dispatch slots | slot_multi_path:252,slot_mba_stateful:81,slot_u16_0:29,slot_u16_1_sub_const:12,slot_const_or_affine:4,slot_u16_2:1,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_001.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_001.c |

