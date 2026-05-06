# VM Program atlas_018

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 018 |
| range | 0x122344..0x1226e6 |
| first seen rank | 56 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 018:2,017:1 |
| outgoing | 018:2,019:1 |
| external/exit edges | 0 |
| blocks | 3 |
| rows | 229 |

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
| top opcodes | vmop_258_plus0x4_state_add_const_slot_multi_path:14,vmop_114_plus0x4_state_add_const_slot_multi_path:9,vmop_018_plus0x3_state_add_const_s... |
| state kinds | state_add_const:213,state_mixed:12,state_const_post:2,state_preserve:1,sampled_long_or_sparse:1 |
| dispatch slots | slot_multi_path:160,slot_mba_stateful:47,slot_u16_0:11,slot_u16_1_sub_const:7,slot_const_or_affine:3,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_018.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_018.c |

