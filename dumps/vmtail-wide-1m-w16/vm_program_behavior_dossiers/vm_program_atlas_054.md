# VM Program atlas_054

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 054 |
| range | 0x33e889..0x33ea02 |
| first seen rank | 21 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 053:2 |
| outgoing | 053:1,048:1 |
| external/exit edges | 0 |
| blocks | 2 |
| rows | 92 |

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
| top opcodes | vmop_174_plus0x4_state_add_const_slot_mba_stateful:6,vmop_189_plus0x4_state_add_const_slot_mba_stateful:5,vmop_258_plus0x4_state_add_cons... |
| state kinds | state_add_const:82,state_mixed:5,state_const_post:2,sampled_backedge:2,state_formula:1 |
| dispatch slots | slot_multi_path:49,slot_mba_stateful:29,slot_u16_0:7,slot_const_or_affine:3,slot_u16_1_sub_const:2,slot_unknown:2 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_054.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_054.c |

