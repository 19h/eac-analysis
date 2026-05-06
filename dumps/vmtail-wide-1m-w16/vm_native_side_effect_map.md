# VM Native Side-Effect Map

This artifact connects native side-effect evidence to recovered VM evidence without overclaiming dataflow. Exact VM string/data rows are program-local references. Runtime rows are native offsets observed during x() runs and remain globally observed until a later bridge/dataflow proof binds them to a VM instruction.

## Evidence Classes

| class | rows | scope | provenance |
| --- | --- | --- | --- |
| native import surface | 258 | ELF-wide | vm_native_linkage_stubs.tsv |
| exact VM string/data refs | 52 | program-local | vm_string_role_annotations.tsv |
| runtime native side effects | 7330 | x() run observed, native-offset scoped | run.stderr TRACE lines |
| program rollup | 66 | all recovered VM programs | exact refs plus behavior hypotheses |

## Category Mix

| source | categories |
| --- | --- |
| imports | native_runtime_misc:94,cxx_runtime:38,threading_sync:22,crypto_hashing:17,filesystem_io:16,locale_i18n:14,memory_string:13,disassembly_me... |
| exact VM refs | cxx_runtime:18,locale_i18n:14,host_environment_inventory:4,threading_sync:4,compiler_metadata:3,tls_or_ssl:3,process_or_shell:2,literal_d... |
| runtime x() events | filesystem_io:7057,host_environment_inventory:7006,network:126,process_or_shell:65,memory_protection:62,env_check:48,crypto_hashing:32,th... |

## Runtime Operations

| operation | count |
| --- | --- |
| open | 4390 |
| readlink | 2570 |
| realpath | 122 |
| fopen | 100 |
| pthread_create | 93 |
| popen | 65 |
| mprotect | 62 |
| getaddrinfo | 62 |
| getenv | 48 |
| opendir | 14 |
| send | 4 |
| connect | 2 |
| recv | 2 |
| socket | 2 |
| close | 2 |

## Runtime Details

| detail | count |
| --- | --- |
| realpath:/dev/disk/by-id/../../nvm | 90 |
| fopen:/dev/urandom | 65 |
| open:/proc/self/maps | 34 |
| getenv:EAC_LAUNCHERDIR | 31 |
| fopen:/proc/bus/pci/devices | 31 |
| open:/sys/devices/virtual/dmi/id/board_name | 31 |
| open:/sys/devices/virtual/dmi/id/product_name | 31 |
| open:/proc/mounts | 31 |
| getaddrinfo:api.epicgames.dev | 31 |
| getaddrinfo:datarouter.ol.epicgames.com | 31 |
| popen:host -4 api.epicgames.dev | 30 |
| popen:host -4 datarouter.ol.epicgames.com | 30 |
| open:/etc/mtab | 13 |
| realpath:/dev/disk/by-id/../../sda1 | 12 |
| realpath:/dev/disk/by-id/../../sda | 10 |
| open:/sys/class/dmi/id/bios_date | 9 |
| open:/sys/class/dmi/id/bios_vendor | 9 |
| open:/sys/class/dmi/id/sys_vendor | 9 |
| readlink:/proc/self/exe | 8 |
| open:/sys/class/dmi/id/product_name | 7 |
| getenv:LD_AUDIT | 7 |
| getenv:LD_PRELOAD | 7 |
| open:/sys/class/block/nvme1n1p/device/model | 6 |
| opendir:/dev/disk/by-id/ | 6 |
| readlink:/dev/disk/by-id/ata-ST2000DM008-2UB102_ZFL6L34T-part1 | 6 |

## Programs With Exact Side-Effect References

| program | first seen | categories | roles | strings | tags |
| --- | --- | --- | --- | --- | --- |
| 020 | 58 | host_environment_inventory:1 | cpu_or_runtime_configuration_name:1 | FILTERS_MODE_IPREFETCH | control_transfer_or_native_bridge_candidate |
| 021 | 57 | threading_sync:1 | threading_import_symbol:1 | pthread_mutexattr_init | threading_sync |
| 022 | 46 | compiler_metadata:1 | compiler_type_name:1 | unsigned __int128 | control_transfer_or_native_bridge_candidate |
| 031 | 50 | cxx_runtime:1 | cxx_runtime_type_or_exception_text:1 | _ZGTtdlPv | cxx_runtime |
| 034 | 1 | literal_data:1 | literal_data_marker:1 | YYYYY | control_transfer_or_native_bridge_candidate |
| 039 | 63 | network:1 | network_import_symbol:1 | socket | networking |
| 040 | 65 | cxx_runtime:1 | cxx_runtime_type_or_exception_text:1 | basic_string::append | cxx_runtime |
| 041 | 31 | cxx_runtime:1,locale_i18n:1,crypto_hashing:1,compiler_metadata:1,disassembly_metadata:1 | gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1,crypto_import_symbol:1,compiler_type_name:1,disassembly_metadata_symbol:1 | _ITM_registerTMCloneTable \|\| __freelocale \|\| blake3_hasher_finalize \|\| unsigned __int128 \|\| zydis_decoder_tree_root | crypto_hashing;cxx_runtime;disassembly_metadata |
| 042 | 17 | cxx_runtime:2,locale_i18n:2 | gnu_transactional_memory_runtime_symbol:2,locale_runtime_symbol:2 | _ITM_registerTMCloneTable \|\| __freelocale \|\| _ITM_registerTMCloneTable \|\| __freelocale | cxx_runtime |
| 045 | 29 | threading_sync:1 | threading_import_symbol:1 | pthread_cond_wait | threading_sync |
| 046 | 23 | cxx_runtime:1,locale_i18n:1 | gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1 | _ITM_registerTMCloneTable \|\| __freelocale | cxx_runtime |
| 048 | 19 | cxx_runtime:1,locale_i18n:1,compiler_metadata:1 | gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1,compiler_type_name:1 | _ITM_registerTMCloneTable \|\| __freelocale \|\| long double | cxx_runtime |
| 052 | 27 | tls_or_ssl:1,host_environment_inventory:1 | tls_protocol_message:1,libc_version_requirement:1 | dropping unexpected ChangeCipherSpec \|\| GLIBC_2.17 | tls_or_ssl;host_environment |
| 055 | 30 | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | gnu_transactional_memory_runtime_symbol:6,locale_runtime_symbol:6,threading_import_symbol:2,cxx_runtime_type_or_exception_text:1,tls_libr... | _ITM_registerTMCloneTable \|\| __freelocale \|\| NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE \|\| _ITM_registerT... | tls_or_ssl;threading_sync;host_environment;cxx_runtime |
| 059 | 33 | cxx_runtime:2,embedded_data_or_token:1,locale_i18n:1 | embedded_token_or_encoded_blob:1,gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1,cxx_runtime_type_or_exception_text:1 | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| basic_string::_S_c... | cxx_runtime |
| 061 | 35 | cxx_runtime:1,locale_i18n:1 | gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1 | _ITM_registerTMCloneTable \|\| __freelocale | cxx_runtime |
| 062 | 36 | unclassified_data:1 | unclassified_data_string:1 | :$23 | control_transfer_or_native_bridge_candidate |
| 063 | 37 | process_or_shell:1,host_environment_inventory:1,cxx_runtime:1,locale_i18n:1,tls_or_ssl:1 | process_or_host_import_symbol:1,gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1,tls_protocol_message:1 | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s | tls_or_ssl;cxx_runtime;process_or_shell |

## Caveat

Runtime native calls are concrete x() observations, but this table does not claim a per-VM-instruction caller binding for those native offsets. Exact VM references prove that the recovered VM program references the string/data item; they do not by themselves prove the referenced import was invoked on that path.
