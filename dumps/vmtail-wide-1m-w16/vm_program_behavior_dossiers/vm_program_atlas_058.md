# VM Program atlas_058

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 058 |
| range | 0x3654e0..0x3655e4 |
| first seen rank | 41 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | control graph has external/exit edges but no exact string/data references; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;external_or_exit_edges_need_semantics;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 057:1 |
| outgoing | external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 1 |
| rows | 70 |

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
| top opcodes | vmop_189_plus0x4_state_add_const_slot_mba_stateful:6,vmop_258_plus0x4_state_add_const_slot_multi_path:6,vmop_176_plus0x4_state_add_const_... |
| state kinds | state_add_const:65,state_const_post:3,state_mixed:1,state_formula:1 |
| dispatch slots | slot_multi_path:49,slot_mba_stateful:15,slot_u16_0:3,slot_u16_1_sub_const:2,slot_const_or_affine:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_058.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_058.c |

