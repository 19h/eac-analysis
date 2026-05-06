# VM Program atlas_046

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 046 |
| range | 0x33170b..0x33384d |
| first seen rank | 23 |
| summary | C++ runtime/support surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | medium |
| behavior tags | cxx_runtime |
| unresolved | needs_final_dataflow_confirmation |

## Control

| field | value |
| --- | --- |
| incoming | 046:17 |
| outgoing | 046:17,047:1 |
| external/exit edges | 0 |
| blocks | 18 |
| rows | 2184 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | cxx_runtime:1,locale_i18n:1 |
| role mix | gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1 |
| top strings | _ITM_registerTMCloneTable \|\| __freelocale |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_018_plus0x3_state_add_const_slot_multi_path:70,vmop_340_plus0x4_state_add_const_slot_multi_path:70,vmop_258_plus0x4_state_add_const_... |
| state kinds | state_add_const:2007,state_mixed:123,state_const_post:46,state_preserve:3,sampled_long_or_sparse:2,sampled_backedge:2,exact:1 |
| dispatch slots | slot_multi_path:1410,slot_mba_stateful:559,slot_u16_0:122,slot_u16_1_sub_const:59,slot_const_or_affine:24,slot_unknown:5,slot_u16_2:5 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_046.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_046.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x331948 | gnu_transactional_memory_runtime_symbol | cxx_runtime | _ITM_registerTMCloneTable | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 0x331970 | locale_runtime_symbol | locale_i18n | __freelocale | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |

