# VM Program atlas_045

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 045 |
| range | 0x31eae4..0x31f2b1 |
| first seen rank | 29 |
| summary | threading or synchronization surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | low_to_medium |
| behavior tags | threading_sync |
| unresolved | intent_not_final;external_or_exit_edges_need_semantics |

## Control

| field | value |
| --- | --- |
| incoming | 045:3,044:1 |
| outgoing | 045:3,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 4 |
| rows | 520 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | threading_sync:1 |
| role mix | threading_import_symbol:1 |
| top strings | pthread_cond_wait |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_189_plus0x4_state_add_const_slot_mba_stateful:21,vmop_064_plus0x4_state_add_const_slot_multi_path:20,vmop_114_plus0x4_state_add_cons... |
| state kinds | state_add_const:482,state_mixed:30,state_const_post:6,state_formula:1,state_preserve:1 |
| dispatch slots | slot_multi_path:335,slot_mba_stateful:124,slot_u16_0:36,slot_u16_1_sub_const:19,slot_const_or_affine:6 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_045.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_045.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x31edb4 | threading_import_symbol | threading_sync:1 | pthread_cond_wait | vmop_337_plus0x4_state_add_const_slot_multi_path |

