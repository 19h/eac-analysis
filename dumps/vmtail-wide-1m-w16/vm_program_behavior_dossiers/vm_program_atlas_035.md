# VM Program atlas_035

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 035 |
| range | 0x292986..0x293689 |
| first seen rank | 59 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | control graph has external/exit edges but no exact string/data references; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;external_or_exit_edges_need_semantics;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 035:12,040:1 |
| outgoing | 035:12,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 13 |
| rows | 834 |

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
| top opcodes | vmop_028_plus0x3_state_add_const_slot_u16_0:42,vmop_189_plus0x4_state_add_const_slot_mba_stateful:36,vmop_114_plus0x4_state_add_const_slo... |
| state kinds | state_add_const:775,state_mixed:42,state_const_post:13,state_preserve:3,state_formula:1 |
| dispatch slots | slot_multi_path:538,slot_mba_stateful:202,slot_u16_0:61,slot_u16_1_sub_const:24,slot_const_or_affine:8,slot_u16_2:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_035.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_035.c |

