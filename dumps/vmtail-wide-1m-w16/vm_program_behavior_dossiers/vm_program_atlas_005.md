# VM Program atlas_005

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 005 |
| range | 0xda38f..0xda607 |
| first seen rank | 15 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 004:1,005:1 |
| outgoing | 005:1,006:1 |
| external/exit edges | 0 |
| blocks | 2 |
| rows | 157 |

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
| top opcodes | vmop_018_plus0x3_state_add_const_slot_multi_path:10,vmop_258_plus0x4_state_add_const_slot_multi_path:8,vmop_114_plus0x4_state_add_const_s... |
| state kinds | state_add_const:143,state_mixed:9,state_const_post:2,state_preserve:1,state_formula:1,sampled_long_or_sparse:1 |
| dispatch slots | slot_multi_path:101,slot_mba_stateful:39,slot_u16_0:10,slot_u16_1_sub_const:4,slot_const_or_affine:2,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_005.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_005.c |

