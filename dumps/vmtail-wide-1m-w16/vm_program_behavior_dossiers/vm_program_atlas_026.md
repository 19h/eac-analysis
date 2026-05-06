# VM Program atlas_026

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 026 |
| range | 0x1a480d..0x1a5f08 |
| first seen rank | 54 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 026:12 |
| outgoing | 026:12,027:1 |
| external/exit edges | 0 |
| blocks | 13 |
| rows | 1496 |

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
| top opcodes | vmop_337_plus0x4_state_add_const_slot_multi_path:63,vmop_028_plus0x3_state_add_const_slot_u16_0:62,vmop_064_plus0x4_state_add_const_slot_... |
| state kinds | state_add_const:1384,state_mixed:76,state_const_post:19,state_formula:9,state_simple:3,state_preserve:2,state_affine:2,sampled_backedge:1 |
| dispatch slots | slot_multi_path:958,slot_mba_stateful:359,slot_u16_0:105,slot_u16_1_sub_const:53,slot_const_or_affine:14,slot_unknown:5,slot_u16_2:2 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_026.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_026.c |

