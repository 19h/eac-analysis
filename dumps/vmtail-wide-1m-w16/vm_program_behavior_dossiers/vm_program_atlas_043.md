# VM Program atlas_043

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 043 |
| range | 0x31df8f..0x31e862 |
| first seen rank | 18 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 043:7,042:1 |
| outgoing | 043:7,048:1,052:1,044:1 |
| external/exit edges | 0 |
| blocks | 10 |
| rows | 554 |

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
| top opcodes | vmop_337_plus0x4_state_add_const_slot_multi_path:24,vmop_028_plus0x3_state_add_const_slot_u16_0:23,vmop_189_plus0x4_state_add_const_slot_... |
| state kinds | state_add_const:508,state_mixed:27,state_const_post:6,state_preserve:5,state_formula:5,state_affine:1,sampled_backedge:1,sampled_long_or_... |
| dispatch slots | slot_multi_path:376,slot_mba_stateful:121,slot_u16_0:34,slot_u16_1_sub_const:15,slot_const_or_affine:6,slot_unknown:2 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_043.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_043.c |

