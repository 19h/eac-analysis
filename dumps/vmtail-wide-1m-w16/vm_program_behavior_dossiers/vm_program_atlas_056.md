# VM Program atlas_056

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 056 |
| range | 0x3603af..0x36525e |
| first seen rank | 32 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 056:21,010:1,060:1,062:1,065:1 |
| outgoing | 056:21,057:1 |
| external/exit edges | 0 |
| blocks | 22 |
| rows | 5215 |

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
| top opcodes | vmop_337_plus0x4_state_add_const_slot_multi_path:178,vmop_018_plus0x3_state_add_const_slot_multi_path:174,vmop_066_plus0x3_state_add_cons... |
| state kinds | state_add_const:4816,state_mixed:250,state_const_post:85,state_preserve:38,state_formula:12,sampled_backedge:6,sampled_long_or_sparse:4,e... |
| dispatch slots | slot_multi_path:3331,slot_mba_stateful:1358,slot_u16_0:264,slot_u16_1_sub_const:134,slot_const_or_affine:89,slot_u16_2:23,slot_unknown:14... |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_056.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_056.c |

