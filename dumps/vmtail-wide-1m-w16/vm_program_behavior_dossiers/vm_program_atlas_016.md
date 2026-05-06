# VM Program atlas_016

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 016 |
| range | 0x121b31..0x12201d |
| first seen rank | 51 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 016:2,015:1 |
| outgoing | 016:2,017:1 |
| external/exit edges | 0 |
| blocks | 3 |
| rows | 319 |

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
| top opcodes | vmop_189_plus0x4_state_add_const_slot_mba_stateful:19,vmop_340_plus0x4_state_add_const_slot_multi_path:17,vmop_018_plus0x3_state_add_cons... |
| state kinds | state_add_const:300,state_mixed:13,state_const_post:4,state_formula:1,sampled_long_or_sparse:1 |
| dispatch slots | slot_multi_path:201,slot_mba_stateful:86,slot_u16_0:16,slot_u16_1_sub_const:12,slot_const_or_affine:3,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_016.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_016.c |

