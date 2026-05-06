# VM String Role Annotations

This classifies exact VM string/data references into behavioral roles and joins them to recovered programs/opcodes. These are conservative annotations; they identify likely roles of referenced strings, not complete program intent by themselves.

## Summary

| metric | value |
| --- | --- |
| string refs | 52 |
| programs with refs | 18 |
| role mix | gnu_transactional_memory_runtime_symbol:14,locale_runtime_symbol:14,threading_import_symbol:4,cxx_runtime_type_or_exception_text:4,compil... |

## Program Role Mix

| program | first seen | refs | roles | tags | strings |
| --- | --- | --- | --- | --- | --- |
| 020 | 58 | 1 | cpu_or_runtime_configuration_name:1 | control_transfer_or_native_bridge_candidate | FILTERS_MODE_IPREFETCH |
| 021 | 57 | 1 | threading_import_symbol:1 | threading_sync | pthread_mutexattr_init |
| 022 | 46 | 1 | compiler_type_name:1 | control_transfer_or_native_bridge_candidate | unsigned __int128 |
| 031 | 50 | 1 | cxx_runtime_type_or_exception_text:1 | cxx_runtime | _ZGTtdlPv |
| 034 | 1 | 1 | literal_data_marker:1 | control_transfer_or_native_bridge_candidate | YYYYY |
| 039 | 63 | 1 | network_import_symbol:1 | networking | socket |
| 040 | 65 | 1 | cxx_runtime_type_or_exception_text:1 | cxx_runtime | basic_string::append |
| 041 | 31 | 5 | gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1,crypto_import_symbol:1,compiler_type_name:1,disassembly_metadata_symbol:1 | crypto_hashing;cxx_runtime;disassembly_metadata | _ITM_registerTMCloneTable \|\| __freelocale \|\| blake3_hasher_finalize \|\| unsigned __int128 \|\| zydis_decoder_tree_root |
| 042 | 17 | 4 | gnu_transactional_memory_runtime_symbol:2,locale_runtime_symbol:2 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale \|\| _ITM_registerTMCloneTable \|\| __freelocale |
| 045 | 29 | 1 | threading_import_symbol:1 | threading_sync | pthread_cond_wait |
| 046 | 23 | 2 | gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale |
| 048 | 19 | 3 | gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1,compiler_type_name:1 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale \|\| long double |
| 052 | 27 | 2 | tls_protocol_message:1,libc_version_requirement:1 | tls_or_ssl;host_environment | dropping unexpected ChangeCipherSpec \|\| GLIBC_2.17 |
| 055 | 30 | 17 | gnu_transactional_memory_runtime_symbol:6,locale_runtime_symbol:6,threading_import_symbol:2,cxx_runtime_type_or_exception_text:1,tls_libr... | tls_or_ssl;threading_sync;host_environment;cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale \|\| NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE \|\| _ITM_registerT... |
| 059 | 33 | 4 | embedded_token_or_encoded_blob:1,gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1,cxx_runtime_type_or_exception_text:1 | cxx_runtime | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| basic_string::_S_c... |
| 061 | 35 | 2 | gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale |
| 062 | 36 | 1 | unclassified_data_string:1 | control_transfer_or_native_bridge_candidate | :$23 |
| 063 | 37 | 4 | process_or_host_import_symbol:1,gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1,tls_protocol_message:1 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |

## Reference Roles

| program | site | role | confidence | text | opcode |
| --- | --- | --- | --- | --- | --- |
| 020 | 0x128e61 | cpu_or_runtime_configuration_name | medium | FILTERS_MODE_IPREFETCH | vmop_333_plus0x4_state_add_const_slot_multi_path |
| 021 | 0x172f32 | threading_import_symbol | high | pthread_mutexattr_init | vmop_337_plus0x4_state_add_const_slot_multi_path |
| 022 | 0x1772f2 | compiler_type_name | medium | unsigned __int128 | vmop_330_plus0x5_state_add_const_slot_u16_0 |
| 031 | 0x2318ea | cxx_runtime_type_or_exception_text | medium | _ZGTtdlPv | vmop_199_plus0x3_state_add_const_slot_multi_path |
| 034 | 0x26db58 | literal_data_marker | low | YYYYY | vmop_028_plus0x3_state_add_const_slot_u16_0 |
| 039 | 0x2c0363 | network_import_symbol | high | socket | vmop_172_plus0x4_state_add_const_slot_mba_stateful |
| 040 | 0x2c13a3 | cxx_runtime_type_or_exception_text | medium | basic_string::append | vmop_140_plus0x6_state_add_const_slot_multi_path |
| 041 | 0x30eebd | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 041 | 0x30eee5 | locale_runtime_symbol | medium | __freelocale | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 041 | 0x30f17b | crypto_import_symbol | high | blake3_hasher_finalize | vmop_199_plus0x3_state_add_const_slot_multi_path |
| 041 | 0x310859 | compiler_type_name | medium | unsigned __int128 | vmop_330_plus0x5_state_add_const_slot_u16_0 |
| 041 | 0x315809 | disassembly_metadata_symbol | high | zydis_decoder_tree_root | vmop_075_minus0x6d_sampled_backedge_slot_unknown |
| 042 | 0x31b31e | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 042 | 0x31b346 | locale_runtime_symbol | medium | __freelocale | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 042 | 0x31c008 | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_075_minus0x6d_sampled_backedge_slot_unknown |
| 042 | 0x31c030 | locale_runtime_symbol | medium | __freelocale | vmop_075_minus0x6d_sampled_backedge_slot_unknown |
| 045 | 0x31edb4 | threading_import_symbol | high | pthread_cond_wait | vmop_337_plus0x4_state_add_const_slot_multi_path |
| 046 | 0x331948 | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 046 | 0x331970 | locale_runtime_symbol | medium | __freelocale | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 048 | 0x334c7e | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown |
| 048 | 0x334ca6 | locale_runtime_symbol | medium | __freelocale | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown |
| 048 | 0x336b3c | compiler_type_name | medium | long double | vmop_028_plus0x3_state_add_const_slot_u16_0 |
| 052 | 0x33b7f2 | tls_protocol_message | high | dropping unexpected ChangeCipherSpec | vmop_066_plus0x3_state_add_const_slot_multi_path |
| 052 | 0x33c3d4 | libc_version_requirement | high | GLIBC_2.17 | vmop_246_plus0x78_sampled_long_or_sparse_slot_unknown |
| 055 | 0x33f6e3 | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown |
| 055 | 0x33f70b | locale_runtime_symbol | medium | __freelocale | vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown |
| 055 | 0x33f7c5 | cxx_runtime_type_or_exception_text | medium | NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE | vmop_189_plus0x4_state_add_const_slot_mba_stateful |
| 055 | 0x340196 | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 055 | 0x3401be | locale_runtime_symbol | medium | __freelocale | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 055 | 0x3403f3 | tls_library_source_path | high | /home/richard/code/mbedtls/library/ssl_tls.c | vmop_066_plus0x3_state_add_const_slot_multi_path |
| 055 | 0x3408e1 | threading_import_symbol | high | pthread_cond_timedwait | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 055 | 0x340f1e | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_075_minus0x6d_sampled_backedge_slot_unknown |
| 055 | 0x340f46 | locale_runtime_symbol | medium | __freelocale | vmop_075_minus0x6d_sampled_backedge_slot_unknown |
| 055 | 0x341a48 | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown |
| 055 | 0x341a70 | locale_runtime_symbol | medium | __freelocale | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown |
| 055 | 0x34230a | threading_import_symbol | high | pthread_mutex_destroy | vmop_172_plus0x4_state_add_const_slot_mba_stateful |
| 055 | 0x3427d0 | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 055 | 0x3427f8 | locale_runtime_symbol | medium | __freelocale | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 055 | 0x343f0f | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 055 | 0x343f37 | locale_runtime_symbol | medium | __freelocale | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 055 | 0x34448e | process_or_host_import_symbol | high | uname | vmop_172_plus0x4_state_add_const_slot_mba_stateful |
| 059 | 0x367607 | embedded_token_or_encoded_blob | medium | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w | vmop_199_plus0x3_state_add_const_slot_multi_path |
| 059 | 0x367700 | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown |
| 059 | 0x367728 | locale_runtime_symbol | medium | __freelocale | vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown |
| 059 | 0x367ee7 | cxx_runtime_type_or_exception_text | medium | basic_string::_S_construct null not valid | vmop_350_plus0x4_state_add_const_slot_mba_stateful |
| 061 | 0x36b361 | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 061 | 0x36b389 | locale_runtime_symbol | medium | __freelocale | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |
| 062 | 0x36d81e | unclassified_data_string | low | :$23 | vmop_140_plus0x6_state_add_const_slot_multi_path |
| 063 | 0x36ee05 | process_or_host_import_symbol | high | pclose | vmop_172_plus0x4_state_add_const_slot_mba_stateful |
| 063 | 0x36ef19 | gnu_transactional_memory_runtime_symbol | medium | _ITM_registerTMCloneTable | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown |
| 063 | 0x36ef41 | locale_runtime_symbol | medium | __freelocale | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown |
| 063 | 0x37138e | tls_protocol_message | high | client hello, adding server name extension: %s | vmop_316_minus0x3c4_sampled_backedge_slot_unknown |

## Artifacts

- Reference roles: `dumps/vmtail-wide-1m-w16/vm_string_role_annotations.tsv`
- Program role rollup: `dumps/vmtail-wide-1m-w16/vm_string_role_programs.tsv`
