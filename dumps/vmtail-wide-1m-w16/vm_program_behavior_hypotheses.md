# VM Program Behavior Hypotheses

These are conservative hypotheses from recovered strings/data references, VM-op context, imported side-effect surface, and observed runtime environment. They are not final behavior claims; each tag needs confirmation by reducing the nearby opcode window and linking it to native/import bridge targets.

## Global Side-Effect Hints

| metric | value |
| --- | --- |
| import-derived tags | tls_or_ssl;networking;threading_sync;host_environment;crypto_hashing;cxx_runtime;disassembly_metadata;process_or_shell |
| import evidence | tls_or_ssl:tls; networking:socket,connect,recv,send,getaddrinfo; threading_sync:pthread,mutex,cond,sem_; host_environ... |
| network hosts | api.epicgames.dev:35,datarouter.ol.epicgames.com:35 |
| spawn commands | host -4 api.epicgames.dev:34,host -4 datarouter.ol.epicgames.com:34,lshw -C display 2>/dev/null:5 |

## Summary

| metric | value |
| --- | --- |
| programs | 66 |
| programs with non-empty hypotheses | 65 |
| tag mix | control_transfer_or_native_bridge_candidate:51,cxx_runtime:10,threading_sync:3,tls_or_ssl:3,host_environment:2,vm_dis... |
| confidence mix | low:47,low_to_medium:9,medium:9,none:1 |

## Program Hypotheses

| program | range | strings | tags | confidence | evidence | next action |
| --- | --- | --- | --- | --- | --- | --- |
| 000 | 0xd0ac0..0xd1445 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 001 | 0xd3fac..0xd4581 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 002 | 0xd476e..0xd57f4 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 003 | 0xd5a12..0xd5ebc | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 004 | 0xd718e..0xd790a | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 005 | 0xda38f..0xda607 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 006 | 0xdac57..0xdaf39 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 007 | 0x11ac5e..0x11bbf4 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 008 | 0x11bc28..0x11bf29 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 009 | 0x11bf5d..0x11c276 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 010 | 0x11c2aa..0x11de59 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 011 | 0x11de9f..0x11e3bb | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 012 | 0x11e574..0x11ef0e | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 013 | 0x11ef65..0x11f4da | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 014 | 0x1209d2..0x120ebe | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 015 | 0x1210d6..0x121ada | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 016 | 0x121b31..0x12201d | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 017 | 0x122074..0x1222ed | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 018 | 0x122344..0x1226e6 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 019 | 0x122a46..0x122e3c | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 020 | 0x128952..0x12906f | FILTERS_MODE_IPREFETCH | control_transfer_or_native_bridge_candidate | low_to_medium | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 021 | 0x1705a9..0x17452e | pthread_mutexattr_init | threading_sync | low_to_medium | threading_sync:pthread,mutex | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 022 | 0x176883..0x17731c | unsigned __int128 | control_transfer_or_native_bridge_candidate | low_to_medium | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 023 | 0x177353..0x177ca2 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 024 | 0x179f43..0x17a420 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 025 | 0x18b66f..0x18c467 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 026 | 0x1a480d..0x1a5f08 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 027 | 0x1a5f3d..0x1a6041 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 028 | 0x1ec0ab..0x1ed483 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 029 | 0x22fe2d..0x2304b8 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 030 | 0x230722..0x231237 | - | vm_dispatch_math_only_so_far | none | no program-local string/data evidence yet | defer until control graph names this program or new data refs appear |
| 031 | 0x2316bf..0x231b74 | _ZGTtdlPv | cxx_runtime | low_to_medium | cxx_runtime:_z | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 032 | 0x249468..0x24bd2a | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 033 | 0x26cd71..0x26cf3b | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 034 | 0x26db07..0x26f097 | YYYYY | control_transfer_or_native_bridge_candidate | low_to_medium | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 035 | 0x292986..0x293689 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 036 | 0x2bec2e..0x2bf068 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 037 | 0x2bf297..0x2bf50f | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 038 | 0x2bf97c..0x2bf9cc | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 039 | 0x2bfe6f..0x2c05b1 | socket | networking | low_to_medium | networking:socket | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 040 | 0x2c1156..0x2c13ed | basic_string::append | cxx_runtime | low_to_medium | cxx_runtime:basic_string | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 041 | 0x30e872..0x316692 | _ITM_registerTMCloneTable; __freelocale; blake3_hasher_finalize; unsigned __int128; zydis_decoder_tree_root | crypto_hashing;cxx_runtime;disassembly_metadata | medium | crypto_hashing:blake3,hasher,hash; cxx_runtime:__freelocale,_itm; disassembly_metadata:zydis | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 042 | 0x31aa27..0x31ddb5 | _ITM_registerTMCloneTable; __freelocale; _ITM_registerTMCloneTable; __freelocale | cxx_runtime | medium | cxx_runtime:__freelocale,_itm | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 043 | 0x31df8f..0x31e862 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 044 | 0x31ea5c..0x31eaac | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 045 | 0x31eae4..0x31f2b1 | pthread_cond_wait | threading_sync | low_to_medium | threading_sync:pthread,cond | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 046 | 0x33170b..0x33384d | _ITM_registerTMCloneTable; __freelocale | cxx_runtime | medium | cxx_runtime:__freelocale,_itm | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 047 | 0x333882..0x333bc9 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 048 | 0x334a3d..0x336d93 | _ITM_registerTMCloneTable; __freelocale; long double | cxx_runtime | medium | cxx_runtime:__freelocale,_itm | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 049 | 0x336dc8..0x33710f | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 050 | 0x337e84..0x33a350 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 051 | 0x33a385..0x33a6cc | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 052 | 0x33b647..0x33d2d9 | dropping unexpected ChangeCipherSpec; GLIBC_2.17 | tls_or_ssl;host_environment | medium | tls_or_ssl:changecipherspec; host_environment:glibc | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 053 | 0x33db28..0x33e849 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 054 | 0x33e889..0x33ea02 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 055 | 0x33f278..0x34556c | _ITM_registerTMCloneTable; __freelocale; NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE; _ITM_r... | tls_or_ssl;threading_sync;host_environment;cxx_runtime | medium | tls_or_ssl:ssl,tls,mbedtls; threading_sync:pthread,mutex,cond; host_environment:uname,/home/; cxx_runtime:__freelocal... | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 056 | 0x3603af..0x36525e | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 057 | 0x365458..0x3654a8 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 058 | 0x3654e0..0x3655e4 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 059 | 0x3674c3..0x369a93 | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w; _ITM_registerTMCloneTable; __freelocale; basic_stri... | cxx_runtime | medium | cxx_runtime:basic_string,__freelocale,_itm | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 060 | 0x369ad3..0x36a0bc | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 061 | 0x36b124..0x36d4e4 | _ITM_registerTMCloneTable; __freelocale | cxx_runtime | medium | cxx_runtime:__freelocale,_itm | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 062 | 0x36d524..0x36db0d | :$23 | control_transfer_or_native_bridge_candidate | low_to_medium | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 063 | 0x36ecdc..0x3715ae | pclose; _ITM_registerTMCloneTable; __freelocale; client hello, adding server name extension: %s | tls_or_ssl;cxx_runtime;process_or_shell | medium | tls_or_ssl:client hello,server name extension; cxx_runtime:__freelocale,_itm; process_or_shell:pclose | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 064 | 0x3716c7..0x37176c | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |
| 065 | 0x3717c4..0x371ff7 | - | control_transfer_or_native_bridge_candidate | low | external_or_hidden folded edge present | confirm tags by reducing nearby opcode windows and native/import bridge targets |

## Artifact

- Hypotheses TSV: `dumps/vmtail-wide-1m-w16/vm_program_behavior_hypotheses.tsv`
