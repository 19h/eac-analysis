# VM Program atlas_028

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 028 |
| range | 0x1ec0ab..0x1ed483 |
| first seen rank | 52 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | control graph has external/exit edges but no exact string/data references; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;external_or_exit_edges_need_semantics;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 028:8 |
| outgoing | 028:8,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 9 |
| rows | 1317 |

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
| top opcodes | vmop_258_plus0x4_state_add_const_slot_multi_path:56,vmop_340_plus0x4_state_add_const_slot_multi_path:54,vmop_066_plus0x3_state_add_const_... |
| state kinds | state_add_const:1226,state_mixed:70,state_const_post:13,state_preserve:6,state_affine:1,state_formula:1 |
| dispatch slots | slot_multi_path:920,slot_mba_stateful:271,slot_u16_0:78,slot_u16_1_sub_const:36,slot_const_or_affine:11,slot_u16_2:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_028.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_028.c |

