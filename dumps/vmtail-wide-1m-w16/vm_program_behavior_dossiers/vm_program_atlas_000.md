# VM Program atlas_000

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 000 |
| range | 0xd0ac0..0xd1445 |
| first seen rank | 10 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | control graph has external/exit edges but no exact string/data references; confidence is intentionally conservative |
| confidence | low |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;external_or_exit_edges_need_semantics;no_exact_string_or_data_ref |

## Control

| field | value |
| --- | --- |
| incoming | 000:6 |
| outgoing | 000:6,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 7 |
| rows | 633 |

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
| top opcodes | vmop_018_plus0x3_state_add_const_slot_multi_path:39,vmop_347_plus0x4_state_add_const_slot_multi_path:26,vmop_337_plus0x4_state_add_const_... |
| state kinds | state_add_const:593,state_mixed:23,state_const_post:12,state_preserve:3,sampled_long_or_sparse:1,sampled_backedge:1 |
| dispatch slots | slot_multi_path:431,slot_mba_stateful:149,slot_u16_0:28,slot_u16_1_sub_const:15,slot_const_or_affine:8,slot_unknown:2 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_000.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_000.c |

