# VM Program atlas_021

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 021 |
| range | 0x1705a9..0x17452e |
| first seen rank | 57 |
| summary | threading or synchronization surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | low_to_medium |
| behavior tags | threading_sync |
| unresolved | intent_not_final;external_or_exit_edges_need_semantics |

## Control

| field | value |
| --- | --- |
| incoming | 021:25 |
| outgoing | 021:25,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 26 |
| rows | 4230 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | threading_sync:1 |
| role mix | threading_import_symbol:1 |
| top strings | pthread_mutexattr_init |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_018_plus0x3_state_add_const_slot_multi_path:167,vmop_337_plus0x4_state_add_const_slot_multi_path:163,vmop_189_plus0x4_state_add_cons... |
| state kinds | state_add_const:3956,state_mixed:213,state_const_post:53,state_preserve:8 |
| dispatch slots | slot_multi_path:2797,slot_mba_stateful:1024,slot_u16_0:238,slot_u16_1_sub_const:134,slot_const_or_affine:37 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_021.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_021.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x172f32 | threading_import_symbol | threading_sync:1 | pthread_mutexattr_init | vmop_337_plus0x4_state_add_const_slot_multi_path |

