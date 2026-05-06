# VM Program Behavior Dossiers

Readable per-program rollups for every recovered VM bytecode program. These are strategic dossiers: they consolidate current evidence and unresolved work, but they do not replace final per-instruction deobfuscation.

## Summary

| metric | value |
| --- | --- |
| programs | 66 |
| behavior tag mix | control_transfer_or_native_bridge_candidate:51,cxx_runtime:10,threading_sync:3,tls_or_ssl:3,host_environment:2,vm_dispatch_math_only_so_f... |
| unresolved mix | intent_not_final:57,no_exact_string_or_data_ref:48,external_or_exit_edges_need_semantics:21,needs_final_dataflow_confirmation:7 |

## Program Index

| program | first seen | summary | confidence | categories | strings | dossier |
| --- | --- | --- | --- | --- | --- | --- |
| 000 | 10 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_000.md |
| 001 | 8 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_001.md |
| 002 | 9 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_002.md |
| 003 | 13 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_003.md |
| 004 | 14 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_004.md |
| 005 | 15 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_005.md |
| 006 | 16 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_006.md |
| 007 | 3 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_007.md |
| 008 | 4 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_008.md |
| 009 | 5 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_009.md |
| 010 | 6 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_010.md |
| 011 | 42 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_011.md |
| 012 | 43 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_012.md |
| 013 | 44 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_013.md |
| 014 | 45 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_014.md |
| 015 | 49 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_015.md |
| 016 | 51 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_016.md |
| 017 | 53 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_017.md |
| 018 | 56 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_018.md |
| 019 | 64 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_019.md |
| 020 | 58 | host/environment inventory surface | low_to_medium | host_environment_inventory:1 | FILTERS_MODE_IPREFETCH | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_020.md |
| 021 | 57 | threading or synchronization surface | low_to_medium | threading_sync:1 | pthread_mutexattr_init | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_021.md |
| 022 | 46 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low_to_medium | compiler_metadata:1 | unsigned __int128 | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_022.md |
| 023 | 47 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_023.md |
| 024 | 48 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_024.md |
| 025 | 7 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_025.md |
| 026 | 54 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_026.md |
| 027 | 55 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_027.md |
| 028 | 52 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_028.md |
| 029 | 11 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_029.md |
| 030 | 12 | VM dispatch/math only so far; no behavioral data refs recovered | none | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_030.md |
| 031 | 50 | C++ runtime/support surface | low_to_medium | cxx_runtime:1 | _ZGTtdlPv | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_031.md |
| 032 | 2 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_032.md |
| 033 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_033.md |
| 034 | 1 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low_to_medium | literal_data:1 | YYYYY | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_034.md |
| 035 | 59 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_035.md |
| 036 | 60 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_036.md |
| 037 | 61 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_037.md |
| 038 | 62 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_038.md |
| 039 | 63 | network-facing logic or network import reference | low_to_medium | network:1 | socket | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_039.md |
| 040 | 65 | C++ runtime/support surface | low_to_medium | cxx_runtime:1 | basic_string::append | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_040.md |
| 041 | 31 | crypto/hash helper surface; C++ runtime/support surface; disassembly metadata surface | medium | cxx_runtime:1,locale_i18n:1,crypto_hashing:1,compiler_metadata:1,disassembly_metadata:1 | _ITM_registerTMCloneTable \|\| __freelocale \|\| blake3_hasher_finalize \|\| unsigned __int128 \|\| zydis_decoder_tree_root | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_041.md |
| 042 | 17 | C++ runtime/support surface | medium | cxx_runtime:2,locale_i18n:2 | _ITM_registerTMCloneTable \|\| __freelocale \|\| _ITM_registerTMCloneTable \|\| __freelocale | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_042.md |
| 043 | 18 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_043.md |
| 044 | 28 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_044.md |
| 045 | 29 | threading or synchronization surface | low_to_medium | threading_sync:1 | pthread_cond_wait | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_045.md |
| 046 | 23 | C++ runtime/support surface | medium | cxx_runtime:1,locale_i18n:1 | _ITM_registerTMCloneTable \|\| __freelocale | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_046.md |
| 047 | 24 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_047.md |
| 048 | 19 | C++ runtime/support surface | medium | cxx_runtime:1,locale_i18n:1,compiler_metadata:1 | _ITM_registerTMCloneTable \|\| __freelocale \|\| long double | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_048.md |
| 049 | 22 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_049.md |
| 050 | 25 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_050.md |
| 051 | 26 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_051.md |
| 052 | 27 | TLS/SSL protocol or library-adjacent logic; host/environment inventory surface | medium | tls_or_ssl:1,host_environment_inventory:1 | dropping unexpected ChangeCipherSpec \|\| GLIBC_2.17 | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_052.md |
| 053 | 20 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_053.md |
| 054 | 21 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_054.md |
| 055 | 30 | TLS/SSL protocol or library-adjacent logic; threading or synchronization surface; host/environment inventory surface; process or shell he... | medium | cxx_runtime:7,locale_i18n:6,threading_sync:2,tls_or_ssl:1,process_or_shell:1,host_environment_inventory:1 | _ITM_registerTMCloneTable \|\| __freelocale \|\| NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE \|\| _ITM_registerT... | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_055.md |
| 056 | 32 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_056.md |
| 057 | 40 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_057.md |
| 058 | 41 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_058.md |
| 059 | 33 | C++ runtime/support surface | medium | cxx_runtime:2,embedded_data_or_token:1,locale_i18n:1 | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| basic_string::_S_c... | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_059.md |
| 060 | 34 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_060.md |
| 061 | 35 | C++ runtime/support surface | medium | cxx_runtime:1,locale_i18n:1 | _ITM_registerTMCloneTable \|\| __freelocale | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_061.md |
| 062 | 36 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low_to_medium | unclassified_data:1 | :$23 | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_062.md |
| 063 | 37 | TLS/SSL protocol or library-adjacent logic; host/environment inventory surface; process or shell helper surface; C++ runtime/support surface | medium | process_or_shell:1,host_environment_inventory:1,cxx_runtime:1,locale_i18n:1,tls_or_ssl:1 | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_063.md |
| 064 | 38 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_064.md |
| 065 | 39 | control-transfer/native-bridge candidate with no exact side-effect reference yet | low | no_exact_side_effect_ref |  | dumps/vmtail-wide-1m-w16/vm_program_behavior_dossiers/vm_program_atlas_065.md |

## Caveat

A dossier row is a current evidence synthesis. Remaining items in the unresolved column are work still required before claiming full program understanding.
