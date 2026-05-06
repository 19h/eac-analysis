# VM Program atlas_047

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 047 |
| range | 0x333882..0x333bc9 |
| first seen rank | 24 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | control graph has external/exit edges but no exact string/data references; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;external_or_exit_edges_need_semantics;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 046:1,047:1 |
| outgoing | 047:1,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 2 |
| rows | 220 |

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
| top opcodes | vmop_215_plus0x3_state_mixed_slot_u16_0:11,vmop_114_plus0x4_state_add_const_slot_multi_path:10,vmop_185_plus0x3_state_add_const_slot_mult... |
| state kinds | state_add_const:203,state_mixed:14,state_const_post:3 |
| dispatch slots | slot_multi_path:144,slot_mba_stateful:53,slot_u16_0:16,slot_u16_1_sub_const:5,slot_const_or_affine:2 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_047.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_047.c |

