# VM Program atlas_032

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 032 |
| range | 0x249468..0x24bd2a |
| first seen rank | 2 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | control graph has external/exit edges but no exact string/data references; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;external_or_exit_edges_need_semantics;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 032:14 |
| outgoing | 032:14,033:1,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 16 |
| rows | 2708 |

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
| top opcodes | vmop_018_plus0x3_state_add_const_slot_multi_path:120,vmop_028_plus0x3_state_add_const_slot_u16_0:103,vmop_258_plus0x4_state_add_const_slo... |
| state kinds | state_add_const:2548,state_mixed:119,state_const_post:36,state_preserve:3,state_simple:2 |
| dispatch slots | slot_multi_path:1799,slot_mba_stateful:633,slot_u16_0:165,slot_u16_1_sub_const:80,slot_const_or_affine:31 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_032.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_032.c |

