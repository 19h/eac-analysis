# VM Program atlas_048

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 048 |
| range | 0x334a3d..0x336d93 |
| first seen rank | 19 |
| summary | C++ runtime/support surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | medium |
| behavior tags | cxx_runtime |
| unresolved | needs_final_dataflow_confirmation |

## Control

| field | value |
| --- | --- |
| incoming | 048:12,043:1,054:1 |
| outgoing | 048:12,049:1 |
| external/exit edges | 0 |
| blocks | 13 |
| rows | 2333 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | cxx_runtime:1,locale_i18n:1,compiler_metadata:1 |
| role mix | gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1,compiler_type_name:1 |
| top strings | _ITM_registerTMCloneTable \|\| __freelocale \|\| long double |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_340_plus0x4_state_add_const_slot_multi_path:73,vmop_064_plus0x4_state_add_const_slot_multi_path:73,vmop_018_plus0x3_state_add_const_... |
| state kinds | state_add_const:2152,state_mixed:126,state_const_post:35,state_preserve:12,sampled_backedge:4,sampled_long_or_sparse:2,exact:1,state_form... |
| dispatch slots | slot_multi_path:1473,slot_mba_stateful:604,slot_u16_0:134,slot_u16_1_sub_const:59,slot_const_or_affine:48,slot_u16_2:8,slot_unknown:7 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_048.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_048.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x334c7e | gnu_transactional_memory_runtime_symbol | cxx_runtime | _ITM_registerTMCloneTable | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown |
| 0x334ca6 | locale_runtime_symbol | locale_i18n | __freelocale | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown |
| 0x336b3c | compiler_type_name | compiler_metadata | long double | vmop_028_plus0x3_state_add_const_slot_u16_0 |

