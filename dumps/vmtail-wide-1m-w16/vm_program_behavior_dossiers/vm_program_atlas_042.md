# VM Program atlas_042

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 042 |
| range | 0x31aa27..0x31ddb5 |
| first seen rank | 17 |
| summary | C++ runtime/support surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | medium |
| behavior tags | cxx_runtime |
| unresolved | needs_final_dataflow_confirmation |

## Control

| field | value |
| --- | --- |
| incoming | 042:27 |
| outgoing | 042:27,043:1 |
| external/exit edges | 0 |
| blocks | 28 |
| rows | 3387 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | cxx_runtime:2,locale_i18n:2 |
| role mix | gnu_transactional_memory_runtime_symbol:2,locale_runtime_symbol:2 |
| top strings | _ITM_registerTMCloneTable \|\| __freelocale \|\| _ITM_registerTMCloneTable \|\| __freelocale |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_018_plus0x3_state_add_const_slot_multi_path:103,vmop_028_plus0x3_state_add_const_slot_u16_0:101,vmop_258_plus0x4_state_add_const_slo... |
| state kinds | state_add_const:3092,state_mixed:200,state_const_post:69,sampled_backedge:7,state_preserve:6,state_simple:4,sampled_long_or_sparse:4,stat... |
| dispatch slots | slot_multi_path:2109,slot_mba_stateful:947,slot_u16_0:186,slot_u16_1_sub_const:74,slot_const_or_affine:38,slot_u16_2:19,slot_unknown:13,s... |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_042.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_042.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x31b31e | gnu_transactional_memory_runtime_symbol | cxx_runtime | _ITM_registerTMCloneTable | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 0x31b346 | locale_runtime_symbol | locale_i18n | __freelocale | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 0x31c008 | gnu_transactional_memory_runtime_symbol | cxx_runtime | _ITM_registerTMCloneTable | vmop_075_minus0x6d_sampled_backedge_slot_unknown |
| 0x31c030 | locale_runtime_symbol | locale_i18n | __freelocale | vmop_075_minus0x6d_sampled_backedge_slot_unknown |

