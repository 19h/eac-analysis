# x() VM Program Timeline

This is the chronological VM-program timeline for the primary x()-driven trace. It names recovered folded VM programs by first-seen order and joins structural behavior hypotheses, string references, and solved graph exits. It is still dynamic evidence, not a final proof of every unexecuted branch.

## Summary

| metric | value |
| --- | --- |
| trace | dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv |
| mapped rows | 769225 |
| unmapped rows | 0 |
| segments | 486 |
| programs first seen | 66 |
| declared trace unique programs | 66 |
| declared trace first program | 033@0x26cd71 |

## First-Seen Program Order

| rank | program | seq | rows | segments | tags | strings | outgoing |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 0 | 033 | 1 | 452 | 4 | control_transfer_or_native_bridge_candidate | - | 034:1 |
| 1 | 034 | 114 | 5745 | 4 | control_transfer_or_native_bridge_candidate | YYYYY | 033:1 |
| 2 | 032 | 3100 | 5416 | 3 | control_transfer_or_native_bridge_candidate | - | 032:14,033:1,external_or_exit:1 |
| 3 | 007 | 11614 | 1024 | 1 | control_transfer_or_native_bridge_candidate | - | 007:7,008:1 |
| 4 | 008 | 12638 | 188 | 1 | control_transfer_or_native_bridge_candidate | - | 008:2,009:1 |
| 5 | 009 | 12826 | 194 | 1 | control_transfer_or_native_bridge_candidate | - | 009:2,010:1 |
| 6 | 010 | 13020 | 1823 | 5 | control_transfer_or_native_bridge_candidate | - | 010:12,055:1,056:1,011:1 |
| 7 | 025 | 14353 | 929 | 3 | control_transfer_or_native_bridge_candidate | - | 025:6,external_or_exit:1 |
| 8 | 001 | 14830 | 380 | 1 | control_transfer_or_native_bridge_candidate | - | 001:2,002:1 |
| 9 | 002 | 15210 | 1080 | 2 | control_transfer_or_native_bridge_candidate | - | 002:7,003:1 |
| 10 | 000 | 15287 | 1086 | 3 | control_transfer_or_native_bridge_candidate | - | 000:6,external_or_exit:1 |
| 11 | 029 | 16090 | 73109 | 1 | control_transfer_or_native_bridge_candidate | - | 029:5,external_or_exit:1 |
| 12 | 030 | 89366 | 42753 | 1 | vm_dispatch_math_only_so_far | - | 030:4 |
| 13 | 003 | 133238 | 313 | 1 | control_transfer_or_native_bridge_candidate | - | 003:2,external_or_exit:1 |
| 14 | 004 | 133742 | 489 | 1 | control_transfer_or_native_bridge_candidate | - | 004:3,005:1 |
| 15 | 005 | 134231 | 157 | 1 | control_transfer_or_native_bridge_candidate | - | 005:1,006:1 |
| 16 | 006 | 134388 | 194 | 1 | control_transfer_or_native_bridge_candidate | - | 006:1,external_or_exit:1 |
| 17 | 042 | 135007 | 4724 | 1 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale | 042:27,043:1 |
| 18 | 043 | 139731 | 554 | 5 | control_transfer_or_native_bridge_candidate | - | 043:7,048:1,052:1,044:1 |
| 19 | 048 | 139785 | 3590 | 2 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale \|\| long double | 048:12,049:1 |
| 20 | 053 | 143140 | 7767 | 12 | control_transfer_or_native_bridge_candidate | - | 053:7,054:2 |
| 21 | 054 | 143992 | 400 | 12 | control_transfer_or_native_bridge_candidate | - | 053:1,048:1 |
| 22 | 049 | 146098 | 222 | 1 | control_transfer_or_native_bridge_candidate | - | external_or_exit:1 |
| 23 | 046 | 146443 | 3663 | 2 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale | 046:17,047:1 |
| 24 | 047 | 152828 | 220 | 1 | control_transfer_or_native_bridge_candidate | - | 047:1,external_or_exit:1 |
| 25 | 050 | 153171 | 3926 | 2 | control_transfer_or_native_bridge_candidate | - | 050:14,051:1 |
| 26 | 051 | 159819 | 220 | 1 | control_transfer_or_native_bridge_candidate | - | 051:1,external_or_exit:1 |
| 27 | 052 | 160163 | 3374 | 1 | tls_or_ssl;host_environment | dropping unexpected ChangeCipherSpec \|\| GLIBC_2.17 | 052:4,external_or_exit:1 |
| 28 | 044 | 163667 | 14 | 1 | control_transfer_or_native_bridge_candidate | - | 045:1 |
| 29 | 045 | 163681 | 520 | 1 | threading_sync | pthread_cond_wait | 045:3,external_or_exit:1 |
| 30 | 055 | 164325 | 11755 | 2 | tls_or_ssl;threading_sync;host_environment;cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale \|\| NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE \|\| /...#e9 | 055:43,041:1,external_or_exit:1 |
| 31 | 041 | 173820 | 502501 | 1 | crypto_hashing;cxx_runtime;disassembly_metadata | _ITM_registerTMCloneTable \|\| __freelocale \|\| blake3_hasher_finalize \|\| unsigned __int128 \|\| zydis_decoder_tree_root | 041:12,055:1 |
| 32 | 056 | 678705 | 6962 | 4 | control_transfer_or_native_bridge_candidate | - | 056:21,057:1 |
| 33 | 059 | 685299 | 8056 | 4 | cxx_runtime | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| basic...#a0 | 059:22,060:2 |
| 34 | 060 | 691618 | 429 | 4 | control_transfer_or_native_bridge_candidate | - | 060:2,059:1,056:1 |
| 35 | 061 | 693908 | 8004 | 4 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale | 061:20,062:2 |
| 36 | 062 | 700175 | 429 | 4 | control_transfer_or_native_bridge_candidate | :$23 | 062:2,061:1,056:1 |
| 37 | 063 | 702465 | 44029 | 151 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s | 063:25,064:2,065:1 |
| 38 | 064 | 707172 | 2975 | 150 | control_transfer_or_native_bridge_candidate | - | 063:1,065:1 |
| 39 | 065 | 707663 | 4441 | 26 | control_transfer_or_native_bridge_candidate | - | 065:4,063:1,056:1 |
| 40 | 057 | 754030 | 14 | 1 | control_transfer_or_native_bridge_candidate | - | 058:1 |
| 41 | 058 | 754044 | 70 | 1 | control_transfer_or_native_bridge_candidate | - | external_or_exit:1 |
| 42 | 011 | 754192 | 326 | 1 | control_transfer_or_native_bridge_candidate | - | 011:3,012:1 |
| 43 | 012 | 754518 | 632 | 1 | control_transfer_or_native_bridge_candidate | - | 012:4,013:1 |
| 44 | 013 | 755150 | 356 | 1 | control_transfer_or_native_bridge_candidate | - | 013:2,014:1 |
| 45 | 014 | 755506 | 320 | 2 | control_transfer_or_native_bridge_candidate | - | 014:2,015:1 |
| 46 | 022 | 755584 | 698 | 1 | control_transfer_or_native_bridge_candidate | unsigned __int128 | 022:4,023:1 |
| 47 | 023 | 756282 | 608 | 1 | control_transfer_or_native_bridge_candidate | - | 023:4,024:1 |
| 48 | 024 | 756890 | 325 | 1 | control_transfer_or_native_bridge_candidate | - | 024:2,external_or_exit:1 |
| 49 | 015 | 757457 | 642 | 2 | control_transfer_or_native_bridge_candidate | - | 015:6,016:1 |
| 50 | 031 | 758006 | 315 | 2 | cxx_runtime | _ZGTtdlPv | 031:1,external_or_exit:1 |
| 51 | 016 | 758298 | 319 | 3 | control_transfer_or_native_bridge_candidate | - | 016:2,017:1 |
| 52 | 028 | 758654 | 1317 | 1 | control_transfer_or_native_bridge_candidate | - | 028:8,external_or_exit:1 |
| 53 | 017 | 760050 | 157 | 2 | control_transfer_or_native_bridge_candidate | - | 017:1,018:1 |
| 54 | 026 | 760128 | 1496 | 1 | control_transfer_or_native_bridge_candidate | - | 026:12,027:1 |
| 55 | 027 | 761624 | 70 | 1 | control_transfer_or_native_bridge_candidate | - | external_or_exit:1 |
| 56 | 018 | 761773 | 229 | 2 | control_transfer_or_native_bridge_candidate | - | 018:2,019:1 |
| 57 | 021 | 761851 | 4230 | 13 | threading_sync | pthread_mutexattr_init | 021:25,external_or_exit:1 |
| 58 | 020 | 764171 | 477 | 3 | control_transfer_or_native_bridge_candidate | FILTERS_MODE_IPREFETCH | 020:2,external_or_exit:1 |
| 59 | 035 | 765167 | 1175 | 7 | control_transfer_or_native_bridge_candidate | - | 035:12,external_or_exit:1 |
| 60 | 036 | 766826 | 272 | 3 | control_transfer_or_native_bridge_candidate | - | 036:2,037:1 |
| 61 | 037 | 767404 | 157 | 2 | control_transfer_or_native_bridge_candidate | - | 037:1,038:1 |
| 62 | 038 | 767705 | 14 | 1 | control_transfer_or_native_bridge_candidate | - | 039:1 |
| 63 | 039 | 767719 | 476 | 4 | networking | socket | 039:3,040:1 |
| 64 | 019 | 768239 | 258 | 2 | control_transfer_or_native_bridge_candidate | - | 019:1,external_or_exit:1 |
| 65 | 040 | 768720 | 165 | 1 | cxx_runtime | basic_string::append | 040:1,035:1 |

## String-Bearing Programs In Timeline

| rank | program | seq | tags | strings |
| --- | --- | --- | --- | --- |
| 1 | 034 | 114 | control_transfer_or_native_bridge_candidate | YYYYY |
| 17 | 042 | 135007 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale |
| 19 | 048 | 139785 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale \|\| long double |
| 23 | 046 | 146443 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale |
| 27 | 052 | 160163 | tls_or_ssl;host_environment | dropping unexpected ChangeCipherSpec \|\| GLIBC_2.17 |
| 29 | 045 | 163681 | threading_sync | pthread_cond_wait |
| 30 | 055 | 164325 | tls_or_ssl;threading_sync;host_environment;cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale \|\| NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE \|\| /...#e9 |
| 31 | 041 | 173820 | crypto_hashing;cxx_runtime;disassembly_metadata | _ITM_registerTMCloneTable \|\| __freelocale \|\| blake3_hasher_finalize \|\| unsigned __int128 \|\| zydis_decoder_tree_root |
| 33 | 059 | 685299 | cxx_runtime | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| basic...#a0 |
| 35 | 061 | 693908 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale |
| 36 | 062 | 700175 | control_transfer_or_native_bridge_candidate | :$23 |
| 37 | 063 | 702465 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| 46 | 022 | 755584 | control_transfer_or_native_bridge_candidate | unsigned __int128 |
| 50 | 031 | 758006 | cxx_runtime | _ZGTtdlPv |
| 57 | 021 | 761851 | threading_sync | pthread_mutexattr_init |
| 58 | 020 | 764171 | control_transfer_or_native_bridge_candidate | FILTERS_MODE_IPREFETCH |
| 63 | 039 | 767719 | networking | socket |
| 65 | 040 | 768720 | cxx_runtime | basic_string::append |

## Initial Segments

| segment | program | seq range | rows | tags | strings |
| --- | --- | --- | --- | --- | --- |
| 0 | 033 | 1..113 | 113 | control_transfer_or_native_bridge_candidate | - |
| 1 | 034 | 114..1550 | 1437 | control_transfer_or_native_bridge_candidate | YYYYY |
| 2 | 033 | 1551..1663 | 113 | control_transfer_or_native_bridge_candidate | - |
| 3 | 034 | 1664..3099 | 1436 | control_transfer_or_native_bridge_candidate | YYYYY |
| 4 | 032 | 3100..3432 | 333 | control_transfer_or_native_bridge_candidate | - |
| 5 | 033 | 3433..3545 | 113 | control_transfer_or_native_bridge_candidate | - |
| 6 | 034 | 3546..4981 | 1436 | control_transfer_or_native_bridge_candidate | YYYYY |
| 7 | 032 | 4982..7689 | 2708 | control_transfer_or_native_bridge_candidate | - |
| 8 | 033 | 7690..7802 | 113 | control_transfer_or_native_bridge_candidate | - |
| 9 | 034 | 7803..9238 | 1436 | control_transfer_or_native_bridge_candidate | YYYYY |
| 10 | 032 | 9239..11613 | 2375 | control_transfer_or_native_bridge_candidate | - |
| 11 | 007 | 11614..12637 | 1024 | control_transfer_or_native_bridge_candidate | - |
| 12 | 008 | 12638..12825 | 188 | control_transfer_or_native_bridge_candidate | - |
| 13 | 009 | 12826..13019 | 194 | control_transfer_or_native_bridge_candidate | - |
| 14 | 010 | 13020..14352 | 1333 | control_transfer_or_native_bridge_candidate | - |
| 15 | 025 | 14353..14829 | 477 | control_transfer_or_native_bridge_candidate | - |
| 16 | 001 | 14830..15209 | 380 | control_transfer_or_native_bridge_candidate | - |
| 17 | 002 | 15210..15286 | 77 | control_transfer_or_native_bridge_candidate | - |
| 18 | 000 | 15287..16089 | 803 | control_transfer_or_native_bridge_candidate | - |
| 19 | 029 | 16090..89198 | 73109 | control_transfer_or_native_bridge_candidate | - |
| 20 | 000 | 89199..89365 | 167 | control_transfer_or_native_bridge_candidate | - |
| 21 | 030 | 89366..132118 | 42753 | vm_dispatch_math_only_so_far | - |
| 22 | 000 | 132119..132234 | 116 | control_transfer_or_native_bridge_candidate | - |
| 23 | 002 | 132235..133237 | 1003 | control_transfer_or_native_bridge_candidate | - |
| 24 | 003 | 133238..133550 | 313 | control_transfer_or_native_bridge_candidate | - |
| 25 | 025 | 133551..133741 | 191 | control_transfer_or_native_bridge_candidate | - |
| 26 | 004 | 133742..134230 | 489 | control_transfer_or_native_bridge_candidate | - |
| 27 | 005 | 134231..134387 | 157 | control_transfer_or_native_bridge_candidate | - |
| 28 | 006 | 134388..134581 | 194 | control_transfer_or_native_bridge_candidate | - |
| 29 | 025 | 134582..134842 | 261 | control_transfer_or_native_bridge_candidate | - |
| 30 | 010 | 134843..135006 | 164 | control_transfer_or_native_bridge_candidate | - |
| 31 | 042 | 135007..139730 | 4724 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale |
| 32 | 043 | 139731..139784 | 54 | control_transfer_or_native_bridge_candidate | - |
| 33 | 048 | 139785..143139 | 3355 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale \|\| long double |
| 34 | 053 | 143140..143991 | 852 | control_transfer_or_native_bridge_candidate | - |
| 35 | 054 | 143992..144012 | 21 | control_transfer_or_native_bridge_candidate | - |
| 36 | 053 | 144013..144741 | 729 | control_transfer_or_native_bridge_candidate | - |
| 37 | 054 | 144742..144762 | 21 | control_transfer_or_native_bridge_candidate | - |
| 38 | 053 | 144763..145491 | 729 | control_transfer_or_native_bridge_candidate | - |
| 39 | 054 | 145492..145512 | 21 | control_transfer_or_native_bridge_candidate | - |
| 40 | 053 | 145513..145791 | 279 | control_transfer_or_native_bridge_candidate | - |
| 41 | 054 | 145792..145862 | 71 | control_transfer_or_native_bridge_candidate | - |
| 42 | 048 | 145863..146097 | 235 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale \|\| long double |
| 43 | 049 | 146098..146319 | 222 | control_transfer_or_native_bridge_candidate | - |
| 44 | 043 | 146320..146442 | 123 | control_transfer_or_native_bridge_candidate | - |
| 45 | 046 | 146443..149873 | 3431 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale |
| 46 | 053 | 149874..150725 | 852 | control_transfer_or_native_bridge_candidate | - |
| 47 | 054 | 150726..150746 | 21 | control_transfer_or_native_bridge_candidate | - |
| 48 | 053 | 150747..151475 | 729 | control_transfer_or_native_bridge_candidate | - |
| 49 | 054 | 151476..151496 | 21 | control_transfer_or_native_bridge_candidate | - |
| 50 | 053 | 151497..152225 | 729 | control_transfer_or_native_bridge_candidate | - |
| 51 | 054 | 152226..152246 | 21 | control_transfer_or_native_bridge_candidate | - |
| 52 | 053 | 152247..152525 | 279 | control_transfer_or_native_bridge_candidate | - |
| 53 | 054 | 152526..152595 | 70 | control_transfer_or_native_bridge_candidate | - |
| 54 | 046 | 152596..152827 | 232 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale |
| 55 | 047 | 152828..153047 | 220 | control_transfer_or_native_bridge_candidate | - |
| 56 | 043 | 153048..153170 | 123 | control_transfer_or_native_bridge_candidate | - |
| 57 | 050 | 153171..156864 | 3694 | control_transfer_or_native_bridge_candidate | - |
| 58 | 053 | 156865..157716 | 852 | control_transfer_or_native_bridge_candidate | - |
| 59 | 054 | 157717..157737 | 21 | control_transfer_or_native_bridge_candidate | - |
| 60 | 053 | 157738..158466 | 729 | control_transfer_or_native_bridge_candidate | - |
| 61 | 054 | 158467..158487 | 21 | control_transfer_or_native_bridge_candidate | - |
| 62 | 053 | 158488..159216 | 729 | control_transfer_or_native_bridge_candidate | - |
| 63 | 054 | 159217..159237 | 21 | control_transfer_or_native_bridge_candidate | - |
| 64 | 053 | 159238..159516 | 279 | control_transfer_or_native_bridge_candidate | - |
| 65 | 054 | 159517..159586 | 70 | control_transfer_or_native_bridge_candidate | - |
| 66 | 050 | 159587..159818 | 232 | control_transfer_or_native_bridge_candidate | - |
| 67 | 051 | 159819..160038 | 220 | control_transfer_or_native_bridge_candidate | - |
| 68 | 043 | 160039..160162 | 124 | control_transfer_or_native_bridge_candidate | - |
| 69 | 052 | 160163..163536 | 3374 | tls_or_ssl;host_environment | dropping unexpected ChangeCipherSpec \|\| GLIBC_2.17 |
| 70 | 043 | 163537..163666 | 130 | control_transfer_or_native_bridge_candidate | - |
| 71 | 044 | 163667..163680 | 14 | control_transfer_or_native_bridge_candidate | - |
| 72 | 045 | 163681..164200 | 520 | threading_sync | pthread_cond_wait |
| 73 | 010 | 164201..164324 | 124 | control_transfer_or_native_bridge_candidate | - |
| 74 | 055 | 164325..173819 | 9495 | tls_or_ssl;threading_sync;host_environment;cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale \|\| NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE \|\| /...#b2 |
| 75 | 041 | 173820..676320 | 502501 | crypto_hashing;cxx_runtime;disassembly_metadata | _ITM_registerTMCloneTable \|\| __freelocale \|\| blake3_hasher_finalize \|\| unsigned __int128 \|\| ...+1 |
| 76 | 055 | 676321..678580 | 2260 | tls_or_ssl;threading_sync;host_environment;cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale \|\| NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE \|\| /...#b2 |
| 77 | 010 | 678581..678704 | 124 | control_transfer_or_native_bridge_candidate | - |
| 78 | 056 | 678705..685298 | 6594 | control_transfer_or_native_bridge_candidate | - |
| 79 | 059 | 685299..691617 | 6319 | cxx_runtime | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| basic...#a0 |
| 80 | 060 | 691618..691638 | 21 | control_transfer_or_native_bridge_candidate | - |
| 81 | 059 | 691639..692367 | 729 | cxx_runtime | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| basic...#a0 |
| 82 | 060 | 692368..692388 | 21 | control_transfer_or_native_bridge_candidate | - |
| 83 | 059 | 692389..693117 | 729 | cxx_runtime | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| basic...#a0 |
| 84 | 060 | 693118..693138 | 21 | control_transfer_or_native_bridge_candidate | - |
| 85 | 059 | 693139..693417 | 279 | cxx_runtime | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| basic...#a0 |
| 86 | 060 | 693418..693783 | 366 | control_transfer_or_native_bridge_candidate | - |
| 87 | 056 | 693784..693907 | 124 | control_transfer_or_native_bridge_candidate | - |
| 88 | 061 | 693908..700174 | 6267 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale |
| 89 | 062 | 700175..700195 | 21 | control_transfer_or_native_bridge_candidate | :$23 |
| 90 | 061 | 700196..700924 | 729 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale |
| 91 | 062 | 700925..700945 | 21 | control_transfer_or_native_bridge_candidate | :$23 |
| 92 | 061 | 700946..701674 | 729 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale |
| 93 | 062 | 701675..701695 | 21 | control_transfer_or_native_bridge_candidate | :$23 |
| 94 | 061 | 701696..701974 | 279 | cxx_runtime | _ITM_registerTMCloneTable \|\| __freelocale |
| 95 | 062 | 701975..702340 | 366 | control_transfer_or_native_bridge_candidate | :$23 |
| 96 | 056 | 702341..702464 | 124 | control_transfer_or_native_bridge_candidate | - |
| 97 | 063 | 702465..707171 | 4707 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| 98 | 064 | 707172..707192 | 21 | control_transfer_or_native_bridge_candidate | - |
| 99 | 063 | 707193..707280 | 88 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| 100 | 064 | 707281..707301 | 21 | control_transfer_or_native_bridge_candidate | - |
| 101 | 063 | 707302..707389 | 88 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| 102 | 064 | 707390..707410 | 21 | control_transfer_or_native_bridge_candidate | - |
| 103 | 063 | 707411..707498 | 88 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| 104 | 064 | 707499..707519 | 21 | control_transfer_or_native_bridge_candidate | - |
| 105 | 063 | 707520..707607 | 88 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| 106 | 064 | 707608..707628 | 21 | control_transfer_or_native_bridge_candidate | - |
| 107 | 063 | 707629..707648 | 20 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| 108 | 064 | 707649..707662 | 14 | control_transfer_or_native_bridge_candidate | - |
| 109 | 065 | 707663..707825 | 163 | control_transfer_or_native_bridge_candidate | - |
| 110 | 063 | 707826..709068 | 1243 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| 111 | 064 | 709069..709089 | 21 | control_transfer_or_native_bridge_candidate | - |
| 112 | 063 | 709090..709177 | 88 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| 113 | 064 | 709178..709198 | 21 | control_transfer_or_native_bridge_candidate | - |
| 114 | 063 | 709199..709286 | 88 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| 115 | 064 | 709287..709307 | 21 | control_transfer_or_native_bridge_candidate | - |
| 116 | 063 | 709308..709395 | 88 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| 117 | 064 | 709396..709416 | 21 | control_transfer_or_native_bridge_candidate | - |
| 118 | 063 | 709417..709504 | 88 | tls_or_ssl;cxx_runtime;process_or_shell | pclose \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| client hello, adding server name extension: %s |
| 119 | 064 | 709505..709525 | 21 | control_transfer_or_native_bridge_candidate | - |

## Artifacts

- Timeline: `dumps/vmtail-wide-1m-w16/vm_x_program_timeline.tsv`
- First-seen program table: `dumps/vmtail-wide-1m-w16/vm_x_program_first_seen.tsv`
