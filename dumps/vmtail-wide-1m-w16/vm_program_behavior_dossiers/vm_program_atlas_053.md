# VM Program atlas_053

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 053 |
| range | 0x33db28..0x33e849 |
| first seen rank | 20 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 053:7,054:1 |
| outgoing | 053:7,054:2 |
| external/exit edges | 0 |
| blocks | 9 |
| rows | 853 |

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
| top opcodes | vmop_340_plus0x4_state_add_const_slot_multi_path:36,vmop_337_plus0x4_state_add_const_slot_multi_path:36,vmop_189_plus0x4_state_add_const_... |
| state kinds | state_add_const:782,state_mixed:54,state_const_post:9,state_preserve:3,state_formula:2,sampled_long_or_sparse:1,state_affine:1,sampled_ba... |
| dispatch slots | slot_multi_path:557,slot_mba_stateful:199,slot_u16_0:57,slot_u16_1_sub_const:26,slot_const_or_affine:10,slot_u16_2:2,slot_unknown:2 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_053.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_053.c |

