# VM Program atlas_003

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 003 |
| range | 0xd5a12..0xd5ebc |
| first seen rank | 13 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | control graph has external/exit edges but no exact string/data references; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;external_or_exit_edges_need_semantics;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 003:2,002:1 |
| outgoing | 003:2,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 3 |
| rows | 313 |

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
| top opcodes | vmop_347_plus0x4_state_add_const_slot_multi_path:25,vmop_189_plus0x4_state_add_const_slot_mba_stateful:16,vmop_028_plus0x3_state_add_cons... |
| state kinds | state_add_const:288,state_mixed:21,state_const_post:4 |
| dispatch slots | slot_multi_path:208,slot_mba_stateful:67,slot_u16_0:29,slot_u16_1_sub_const:5,slot_const_or_affine:4 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_003.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_003.c |

