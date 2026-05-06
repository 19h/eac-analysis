# VM Program atlas_019

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 019 |
| range | 0x122a46..0x122e3c |
| first seen rank | 64 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | control graph has external/exit edges but no exact string/data references; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;external_or_exit_edges_need_semantics;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 018:1,019:1 |
| outgoing | 019:1,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 2 |
| rows | 258 |

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
| top opcodes | vmop_028_plus0x3_state_add_const_slot_u16_0:15,vmop_340_plus0x4_state_add_const_slot_multi_path:12,vmop_018_plus0x3_state_add_const_slot_... |
| state kinds | state_add_const:247,state_mixed:6,state_const_post:4,exact:1 |
| dispatch slots | slot_multi_path:164,slot_mba_stateful:62,slot_u16_0:18,slot_const_or_affine:6,slot_u16_1_sub_const:5,slot_u16_2:2,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_019.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_019.c |

