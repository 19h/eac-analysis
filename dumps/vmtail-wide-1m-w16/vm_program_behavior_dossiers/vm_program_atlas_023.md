# VM Program atlas_023

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 023 |
| range | 0x177353..0x177ca2 |
| first seen rank | 47 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 023:4,022:1 |
| outgoing | 023:4,024:1 |
| external/exit edges | 0 |
| blocks | 5 |
| rows | 608 |

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
| top opcodes | vmop_028_plus0x3_state_add_const_slot_u16_0:29,vmop_337_plus0x4_state_add_const_slot_multi_path:25,vmop_064_plus0x4_state_add_const_slot_... |
| state kinds | state_add_const:557,state_mixed:37,state_const_post:11,state_preserve:1,state_formula:1,exact:1 |
| dispatch slots | slot_multi_path:387,slot_mba_stateful:145,slot_u16_0:49,slot_u16_1_sub_const:19,slot_const_or_affine:4,slot_u16_2:2,slot_unknown:2 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_023.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_023.c |

