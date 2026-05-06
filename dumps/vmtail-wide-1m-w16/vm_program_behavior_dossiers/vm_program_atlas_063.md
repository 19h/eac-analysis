# VM Program atlas_063

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 063 |
| range | 0x36ecdc..0x3715ae |
| first seen rank | 37 |
| summary | TLS/SSL protocol or library-adjacent logic; host/environment inventory surface; process or shell helper surface; C++ runtime/support surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | medium |
| behavior tags | tls_or_ssl;cxx_runtime;process_or_shell |
| unresolved | needs_final_dataflow_confirmation |

## Control

| field | value |
| --- | --- |
| incoming | 063:25,064:1,065:1 |
| outgoing | 063:25,064:2,065:1 |
| external/exit edges | 0 |
| blocks | 28 |
| rows | 2661 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | process_or_shell:1,host_environment_inventory:1,cxx_runtime:1,locale_i18n:1,tls_or_ssl:1 |
| role mix | process_or_host_import_symbol:1,gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1,tls_protocol_message:1 |
| top strings | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_018_plus0x3_state_add_const_slot_multi_path:93,vmop_028_plus0x3_state_add_const_slot_u16_0:89,vmop_337_plus0x4_state_add_const_slot_... |
| state kinds | state_add_const:2452,state_mixed:135,state_const_post:48,state_formula:8,sampled_long_or_sparse:6,sampled_backedge:5,state_preserve:4,sta... |
| dispatch slots | slot_multi_path:1659,slot_mba_stateful:728,slot_u16_0:147,slot_u16_1_sub_const:60,slot_const_or_affine:37,slot_u16_2:17,slot_unknown:12,s... |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_063.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_063.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x36ee05 | process_or_host_import_symbol | process_or_shell;host_environment_inventory | pclose | vmop_172_plus0x4_state_add_const_slot_mba_stateful |
| 0x36ef19 | gnu_transactional_memory_runtime_symbol | cxx_runtime | _ITM_registerTMCloneTable | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown |
| 0x36ef41 | locale_runtime_symbol | locale_i18n | __freelocale | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown |
| 0x37138e | tls_protocol_message | tls_or_ssl | client hello, adding server name extension: %s | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |

