# VM Program atlas_057

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 057 |
| range | 0x365458..0x3654a8 |
| first seen rank | 40 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 056:1 |
| outgoing | 058:1 |
| external/exit edges | 0 |
| blocks | 1 |
| rows | 14 |

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
| top opcodes | vmop_165_plus0x2_state_const_post_slot_const_or_affine:2,vmop_028_plus0x3_state_add_const_slot_u16_0:2,vmop_189_plus0x4_state_add_const_s... |
| state kinds | state_add_const:10,state_const_post:2,state_formula:1,sampled_long_or_sparse:1 |
| dispatch slots | slot_multi_path:5,slot_mba_stateful:4,slot_const_or_affine:2,slot_u16_0:2,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_057.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_057.c |

