# VM Program atlas_055

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 055 |
| range | 0x33f278..0x34556c |
| first seen rank | 30 |
| summary | TLS/SSL protocol or library-adjacent logic; threading or synchronization surface; host/environment inventory surface; process or shell he... |
| basis | exact string/data references plus opcode/control evidence |
| confidence | medium |
| behavior tags | tls_or_ssl;threading_sync;host_environment;cxx_runtime |
| unresolved | external_or_exit_edges_need_semantics |

## Control

| field | value |
| --- | --- |
| incoming | 055:43,010:1,041:1 |
| outgoing | 055:43,041:1,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 45 |
| rows | 6540 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 |
| role mix | gnu_transactional_memory_runtime_symbol:6,locale_runtime_symbol:6,threading_import_symbol:2,cxx_runtime_type_or_exception_text:1,tls_libr... |
| top strings | _ITM_registerTMCloneTable \|\| __freelocale \|\| NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE \|\| _ITM_registerT... |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_028_plus0x3_state_add_const_slot_u16_0:187,vmop_018_plus0x3_state_add_const_slot_multi_path:184,vmop_258_plus0x4_state_add_const_slo... |
| state kinds | state_add_const:6011,state_mixed:327,state_const_post:134,state_preserve:27,sampled_backedge:14,state_formula:12,sampled_long_or_sparse:1... |
| dispatch slots | slot_multi_path:3991,slot_mba_stateful:1895,slot_u16_0:331,slot_u16_1_sub_const:146,slot_const_or_affine:112,slot_u16_2:32,slot_unknown:2... |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_055.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_055.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x33f6e3 | gnu_transactional_memory_runtime_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | _ITM_registerTMCloneTable | vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown |
| 0x33f70b | locale_runtime_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | __freelocale | vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown |
| 0x33f7c5 | cxx_runtime_type_or_exception_text | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE | vmop_189_plus0x4_state_add_const_slot_mba_stateful |
| 0x340196 | gnu_transactional_memory_runtime_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | _ITM_registerTMCloneTable | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 0x3401be | locale_runtime_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | __freelocale | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 0x3403f3 | tls_library_source_path | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | /home/richard/code/mbedtls/library/ssl_tls.c | vmop_066_plus0x3_state_add_const_slot_multi_path |
| 0x3408e1 | threading_import_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | pthread_cond_timedwait | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 0x340f1e | gnu_transactional_memory_runtime_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | _ITM_registerTMCloneTable | vmop_075_minus0x6d_sampled_backedge_slot_unknown |
| 0x340f46 | locale_runtime_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | __freelocale | vmop_075_minus0x6d_sampled_backedge_slot_unknown |
| 0x341a48 | gnu_transactional_memory_runtime_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | _ITM_registerTMCloneTable | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown |
| 0x341a70 | locale_runtime_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | __freelocale | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown |
| 0x34230a | threading_import_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | pthread_mutex_destroy | vmop_172_plus0x4_state_add_const_slot_mba_stateful |
| 0x3427d0 | gnu_transactional_memory_runtime_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | _ITM_registerTMCloneTable | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 0x3427f8 | locale_runtime_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | __freelocale | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 0x343f0f | gnu_transactional_memory_runtime_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | _ITM_registerTMCloneTable | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 0x343f37 | locale_runtime_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | __freelocale | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 0x34448e | process_or_host_import_symbol | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | uname | vmop_172_plus0x4_state_add_const_slot_mba_stateful |

