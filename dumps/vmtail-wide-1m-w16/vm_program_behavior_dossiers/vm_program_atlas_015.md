# VM Program atlas_015

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 015 |
| range | 0x1210d6..0x121ada |
| first seen rank | 49 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 015:6,014:1 |
| outgoing | 015:6,016:1 |
| external/exit edges | 0 |
| blocks | 7 |
| rows | 642 |

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
| top opcodes | vmop_114_plus0x4_state_add_const_slot_multi_path:31,vmop_018_plus0x3_state_add_const_slot_multi_path:26,vmop_258_plus0x4_state_add_const_... |
| state kinds | state_add_const:582,state_mixed:46,state_const_post:9,state_formula:2,sampled_long_or_sparse:2,state_affine:1 |
| dispatch slots | slot_multi_path:414,slot_mba_stateful:153,slot_u16_0:44,slot_u16_1_sub_const:20,slot_const_or_affine:8,slot_unknown:2,slot_u16_0_sub_const:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_015.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_015.c |

