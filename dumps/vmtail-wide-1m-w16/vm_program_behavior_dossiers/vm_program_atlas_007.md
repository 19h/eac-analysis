# VM Program atlas_007

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 007 |
| range | 0x11ac5e..0x11bbf4 |
| first seen rank | 3 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 007:7 |
| outgoing | 007:7,008:1 |
| external/exit edges | 0 |
| blocks | 8 |
| rows | 1024 |

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
| top opcodes | vmop_337_plus0x4_state_add_const_slot_multi_path:48,vmop_340_plus0x4_state_add_const_slot_multi_path:43,vmop_189_plus0x4_state_add_const_... |
| state kinds | state_add_const:951,state_mixed:60,state_const_post:9,state_preserve:3,exact:1 |
| dispatch slots | slot_multi_path:689,slot_mba_stateful:231,slot_u16_0:62,slot_u16_1_sub_const:32,slot_const_or_affine:9,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_007.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_007.c |

