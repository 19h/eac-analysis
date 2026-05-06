# VM Program atlas_010

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 010 |
| range | 0x11c2aa..0x11de59 |
| first seen rank | 6 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 010:12,009:1 |
| outgoing | 010:12,055:1,056:1,011:1 |
| external/exit edges | 0 |
| blocks | 15 |
| rows | 1823 |

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
| top opcodes | vmop_114_plus0x4_state_add_const_slot_multi_path:77,vmop_028_plus0x3_state_add_const_slot_u16_0:69,vmop_347_plus0x4_state_add_const_slot_... |
| state kinds | state_add_const:1695,state_mixed:99,state_const_post:20,state_preserve:5,state_affine:3,sampled_backedge:1 |
| dispatch slots | slot_multi_path:1228,slot_mba_stateful:406,slot_u16_0:120,slot_u16_1_sub_const:51,slot_const_or_affine:17,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_010.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_010.c |

