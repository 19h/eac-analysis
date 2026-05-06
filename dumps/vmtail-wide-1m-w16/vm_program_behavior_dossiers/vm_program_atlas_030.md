# VM Program atlas_030

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 030 |
| range | 0x230722..0x231237 |
| first seen rank | 12 |
| summary | VM dispatch/math only so far; no behavioral data refs recovered |
| basis | timeline/control/opcode evidence only; confidence is intentionally conservative |
| confidence | none |
| behavior tags | vm_dispatch_math_only_so_far |
| unresolved | intent_not_final;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 030:4 |
| outgoing | 030:4 |
| external/exit edges | 0 |
| blocks | 4 |
| rows | 740 |

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
| top opcodes | vmop_347_plus0x4_state_add_const_slot_multi_path:29,vmop_018_plus0x3_state_add_const_slot_multi_path:24,vmop_307_plus0x3_state_add_const_... |
| state kinds | state_add_const:683,state_mixed:33,state_const_post:17,state_preserve:4,state_formula:2,exact:1 |
| dispatch slots | slot_multi_path:476,slot_mba_stateful:191,slot_u16_0:41,slot_u16_1_sub_const:24,slot_const_or_affine:5,slot_u16_2:1,slot_u16_0_sub_const:... |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_030.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_030.c |

