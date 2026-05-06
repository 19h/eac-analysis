# VM Program atlas_011

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 011 |
| range | 0x11de9f..0x11e3bb |
| first seen rank | 42 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 011:3,010:1 |
| outgoing | 011:3,012:1 |
| external/exit edges | 0 |
| blocks | 4 |
| rows | 326 |

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
| top opcodes | vmop_199_plus0x3_state_add_const_slot_multi_path:15,vmop_347_plus0x4_state_add_const_slot_multi_path:15,vmop_337_plus0x4_state_add_const_... |
| state kinds | state_add_const:303,state_mixed:12,state_const_post:7,state_formula:2,state_preserve:1,sampled_backedge:1 |
| dispatch slots | slot_multi_path:234,slot_mba_stateful:65,slot_u16_0:12,slot_u16_1_sub_const:9,slot_const_or_affine:4,slot_u16_2:1,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_011.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_011.c |

