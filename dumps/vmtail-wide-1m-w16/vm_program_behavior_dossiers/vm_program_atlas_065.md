# VM Program atlas_065

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 065 |
| range | 0x3717c4..0x371ff7 |
| first seen rank | 39 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 065:4,063:1,064:1 |
| outgoing | 065:4,063:1,056:1 |
| external/exit edges | 0 |
| blocks | 6 |
| rows | 529 |

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
| top opcodes | vmop_307_plus0x3_state_add_const_slot_u16_1_sub_const:24,vmop_340_plus0x4_state_add_const_slot_multi_path:23,vmop_114_plus0x4_state_add_c... |
| state kinds | state_add_const:494,state_mixed:22,state_const_post:8,state_preserve:2,exact:1,state_formula:1,sampled_backedge:1 |
| dispatch slots | slot_multi_path:345,slot_mba_stateful:116,slot_u16_0:34,slot_u16_1_sub_const:24,slot_const_or_affine:8,slot_unknown:2 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_065.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_065.c |

