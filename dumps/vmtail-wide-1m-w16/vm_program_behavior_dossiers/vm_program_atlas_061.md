# VM Program atlas_061

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 061 |
| range | 0x36b124..0x36d4e4 |
| first seen rank | 35 |
| summary | C++ runtime/support surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | medium |
| behavior tags | cxx_runtime |
| unresolved | needs_final_dataflow_confirmation |

## Control

| field | value |
| --- | --- |
| incoming | 061:20,062:1 |
| outgoing | 061:20,062:2 |
| external/exit edges | 0 |
| blocks | 22 |
| rows | 2335 |

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
| top opcodes | vmop_018_plus0x3_state_add_const_slot_multi_path:87,vmop_114_plus0x4_state_add_const_slot_multi_path:80,vmop_258_plus0x4_state_add_const_... |
| state kinds | state_add_const:2133,state_mixed:147,state_const_post:40,state_formula:5,state_preserve:3,sampled_long_or_sparse:3,sampled_backedge:2,exa... |
| dispatch slots | slot_multi_path:1502,slot_mba_stateful:593,slot_u16_0:139,slot_u16_1_sub_const:61,slot_const_or_affine:23,slot_u16_2:10,slot_unknown:7 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_061.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_061.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x36b361 | gnu_transactional_memory_runtime_symbol | cxx_runtime:1,locale_i18n:1 | _ITM_registerTMCloneTable | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 0x36b389 | locale_runtime_symbol | cxx_runtime:1,locale_i18n:1 | __freelocale | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |

