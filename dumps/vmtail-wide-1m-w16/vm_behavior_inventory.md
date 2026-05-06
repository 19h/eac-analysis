# VM Behavior Inventory

This report is intentionally conservative. The VM control-flow and per-instruction mechanical semantics are recovered into compileable folded C, but the original objective also requires human-readable intent for every VM bytecode program. That higher-level intent remains open and is tracked below.

## Coverage Checkpoint

| metric | value |
| --- | --- |
| folded VM programs | 66 |
| VM basic blocks / MBA cases | 499 / 499 |
| MBA successor cases ready / missing | 499 / 0 |
| VM IR rows | 71522 |
| programs seen in primary trace | 66 / 66 |
| mapped primary trace rows | 769225 |
| unmapped primary trace rows | 0 |
| string references | 52 refs in 18 programs |
| external / hidden-span folded edges | 81 / 266 |

## x() Entrypoint And Environment Evidence

| metric | value |
| --- | --- |
| x modes observed | 0,1,2 |
| runtime configs | x_mode_1:34,x_mode_0:1,x_mode_2:1 |
| trace classes | run_without_instruction_trace:9,memory_context_trace:6,raw_dynamic_trace:6,register_context_trace:5,synthetic_filled_... |
| instruction trace scenarios | 16 |
| concrete instruction trace scenarios | 12 |
| network policies | blocked_observed:34,fake_observed:1,not_observed:1 |
| network events denied / faked | 68 / 12 |
| network hosts | api.epicgames.dev:35,datarouter.ol.epicgames.com:35 |
| spawn commands | host -4 api.epicgames.dev:34,host -4 datarouter.ol.epicgames.com:34,lshw -C display 2>/dev/null:5 |

## Native Side-Effect Surface

| metric | value |
| --- | --- |
| interesting imported/linkage stubs | 48 |
| top imported/linkage stubs | mprotect@plt:1,sem_wait@plt:1,pthread_cond_destroy@plt:1,ioctl@plt:1,sem_destroy@plt:1,getaddrinfo@plt:1,gettimeofday... |

## VM Handler/ISA Surface

| metric | value |
| --- | --- |
| handler entries | 190 |
| handler dynamic events | 767566 |
| handler unique start IPs | 71355 |
| dominant deltas | +0x5:79,+0x4:56,+0x3:13,+0x6:12,+0x2:11,+0xa:10,+0xd:8,+0x20:1 |
| dominant shapes | VVVV:30,CCCCC:18,VVCC:11,VV:8,VVV:7,VVVCC:7,CCVV:6,VVVVVV:6,VVECCCVVEC:6,EECCE:6 |

## Program Ledger

| program | range | blocks | rows | primary trace rows | edges | strings | status | next action |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 000 | 0xd0ac0..0xd1445 | 7 | 633 | 1086 | covered_synthetic_fallthrough:4,decoded_control:2,fallthrough:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 001 | 0xd3fac..0xd4581 | 3 | 380 | 380 | covered_synthetic_fallthrough:2,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 002 | 0xd476e..0xd57f4 | 8 | 1080 | 1080 | covered_synthetic_fallthrough:7,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 003 | 0xd5a12..0xd5ebc | 3 | 313 | 313 | covered_synthetic_fallthrough:3 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 004 | 0xd718e..0xd790a | 4 | 489 | 489 | covered_synthetic_fallthrough:3,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 005 | 0xda38f..0xda607 | 2 | 157 | 157 | covered_synthetic_fallthrough:1,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 006 | 0xdac57..0xdaf39 | 2 | 194 | 194 | covered_synthetic_fallthrough:2 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 007 | 0x11ac5e..0x11bbf4 | 8 | 1024 | 1024 | covered_synthetic_fallthrough:7,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 008 | 0x11bc28..0x11bf29 | 3 | 188 | 188 | covered_synthetic_fallthrough:2,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 009 | 0x11bf5d..0x11c276 | 3 | 194 | 194 | covered_synthetic_fallthrough:2,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 010 | 0x11c2aa..0x11de59 | 15 | 1823 | 1823 | covered_synthetic_fallthrough:12,decoded_control:3 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 011 | 0x11de9f..0x11e3bb | 4 | 326 | 326 | covered_synthetic_fallthrough:3,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 012 | 0x11e574..0x11ef0e | 5 | 632 | 632 | covered_synthetic_fallthrough:4,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 013 | 0x11ef65..0x11f4da | 3 | 356 | 356 | covered_synthetic_fallthrough:2,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 014 | 0x1209d2..0x120ebe | 3 | 320 | 320 | covered_synthetic_fallthrough:2,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 015 | 0x1210d6..0x121ada | 7 | 642 | 642 | covered_synthetic_fallthrough:5,decoded_control:2 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 016 | 0x121b31..0x12201d | 3 | 319 | 319 | covered_synthetic_fallthrough:2,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 017 | 0x122074..0x1222ed | 2 | 157 | 157 | covered_synthetic_fallthrough:1,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 018 | 0x122344..0x1226e6 | 3 | 229 | 229 | covered_synthetic_fallthrough:2,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 019 | 0x122a46..0x122e3c | 2 | 258 | 258 | covered_synthetic_fallthrough:2 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 020 | 0x128952..0x12906f | 3 | 477 | 477 | covered_synthetic_fallthrough:3 | FILTERS_MODE_IPREFETCH | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 021 | 0x1705a9..0x17452e | 26 | 4230 | 4230 | covered_synthetic_fallthrough:26 | pthread_mutexattr_init | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 022 | 0x176883..0x17731c | 5 | 698 | 698 | covered_synthetic_fallthrough:4,decoded_control:1 | unsigned __int128 | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 023 | 0x177353..0x177ca2 | 5 | 608 | 608 | covered_synthetic_fallthrough:4,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 024 | 0x179f43..0x17a420 | 3 | 325 | 325 | covered_synthetic_fallthrough:3 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 025 | 0x18b66f..0x18c467 | 7 | 929 | 929 | covered_synthetic_fallthrough:7 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 026 | 0x1a480d..0x1a5f08 | 13 | 1496 | 1496 | covered_synthetic_fallthrough:12,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 027 | 0x1a5f3d..0x1a6041 | 1 | 70 | 70 | covered_synthetic_fallthrough:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 028 | 0x1ec0ab..0x1ed483 | 9 | 1317 | 1317 | covered_synthetic_fallthrough:9 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 029 | 0x22fe2d..0x2304b8 | 6 | 436 | 73109 | fallthrough:2,decoded_control:2,covered_synthetic_fallthrough:2 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 030 | 0x230722..0x231237 | 4 | 740 | 42753 | covered_synthetic_fallthrough:2,fallthrough:1,decoded_control:1 | - | semantic_intent_unknown | name repeated VM idioms from handler/state formulas |
| 031 | 0x2316bf..0x231b74 | 2 | 315 | 315 | covered_synthetic_fallthrough:2 | _ZGTtdlPv | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 032 | 0x249468..0x24bd2a | 16 | 2708 | 5416 | covered_synthetic_fallthrough:15,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 033 | 0x26cd71..0x26cf3b | 1 | 113 | 452 | decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 034 | 0x26db07..0x26f097 | 1 | 1437 | 5745 | decoded_control:1 | YYYYY | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 035 | 0x292986..0x293689 | 13 | 834 | 1175 | covered_synthetic_fallthrough:12,fallthrough:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 036 | 0x2bec2e..0x2bf068 | 3 | 272 | 272 | covered_synthetic_fallthrough:2,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 037 | 0x2bf297..0x2bf50f | 2 | 157 | 157 | covered_synthetic_fallthrough:1,decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 038 | 0x2bf97c..0x2bf9cc | 1 | 14 | 14 | decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 039 | 0x2bfe6f..0x2c05b1 | 4 | 476 | 476 | covered_synthetic_fallthrough:3,decoded_control:1 | socket | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 040 | 0x2c1156..0x2c13ed | 2 | 165 | 165 | covered_synthetic_fallthrough:1,decoded_control:1 | basic_string::append | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 041 | 0x30e872..0x316692 | 13 | 8444 | 502501 | decoded_control:9,fallthrough:3,covered_synthetic_fallthrough:1 | _ITM_registerTMCloneTable; __freelocale; blake3_hasher_finalize; unsigned __int128; zydis_decoder_tree_root | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 042 | 0x31aa27..0x31ddb5 | 28 | 3387 | 4724 | decoded_control:13,covered_synthetic_fallthrough:9,fallthrough:6 | _ITM_registerTMCloneTable; __freelocale | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 043 | 0x31df8f..0x31e862 | 10 | 554 | 554 | covered_synthetic_fallthrough:6,decoded_control:4 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 044 | 0x31ea5c..0x31eaac | 1 | 14 | 14 | decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 045 | 0x31eae4..0x31f2b1 | 4 | 520 | 520 | covered_synthetic_fallthrough:4 | pthread_cond_wait | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 046 | 0x33170b..0x33384d | 18 | 2184 | 3663 | covered_synthetic_fallthrough:11,decoded_control:5,fallthrough:2 | _ITM_registerTMCloneTable; __freelocale | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 047 | 0x333882..0x333bc9 | 2 | 220 | 220 | covered_synthetic_fallthrough:2 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 048 | 0x334a3d..0x336d93 | 13 | 2333 | 3590 | decoded_control:7,fallthrough:3,covered_synthetic_fallthrough:3 | _ITM_registerTMCloneTable; __freelocale; long double | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 049 | 0x336dc8..0x33710f | 1 | 222 | 222 | covered_synthetic_fallthrough:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 050 | 0x337e84..0x33a350 | 15 | 2416 | 3926 | covered_synthetic_fallthrough:11,decoded_control:3,fallthrough:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 051 | 0x33a385..0x33a6cc | 2 | 220 | 220 | covered_synthetic_fallthrough:2 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 052 | 0x33b647..0x33d2d9 | 5 | 1891 | 3374 | decoded_control:2,covered_synthetic_fallthrough:2,fallthrough:1 | dropping unexpected ChangeCipherSpec; GLIBC_2.17 | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 053 | 0x33db28..0x33e849 | 9 | 853 | 7767 | covered_synthetic_fallthrough:6,decoded_control:2,fallthrough:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 054 | 0x33e889..0x33ea02 | 2 | 92 | 400 | decoded_control:2 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 055 | 0x33f278..0x34556c | 45 | 6540 | 11755 | decoded_control:29,fallthrough:14,covered_synthetic_fallthrough:2 | _ITM_registerTMCloneTable; __freelocale; NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE; /home/... | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 056 | 0x3603af..0x36525e | 22 | 5215 | 6962 | decoded_control:12,fallthrough:5,covered_synthetic_fallthrough:5 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 057 | 0x365458..0x3654a8 | 1 | 14 | 14 | decoded_control:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 058 | 0x3654e0..0x3655e4 | 1 | 70 | 70 | covered_synthetic_fallthrough:1 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 059 | 0x3674c3..0x369a93 | 24 | 2468 | 8056 | covered_synthetic_fallthrough:12,decoded_control:8,fallthrough:4 | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w; _ITM_registerTMCloneTable; __freelocale; basic_stri... | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 060 | 0x369ad3..0x36a0bc | 4 | 387 | 429 | decoded_control:2,covered_synthetic_fallthrough:2 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 061 | 0x36b124..0x36d4e4 | 22 | 2335 | 8004 | covered_synthetic_fallthrough:13,decoded_control:6,fallthrough:3 | _ITM_registerTMCloneTable; __freelocale | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 062 | 0x36d524..0x36db0d | 4 | 387 | 429 | decoded_control:2,covered_synthetic_fallthrough:2 | :$23 | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 063 | 0x36ecdc..0x3715ae | 28 | 2661 | 44029 | decoded_control:11,covered_synthetic_fallthrough:11,fallthrough:6 | pclose; _ITM_registerTMCloneTable; __freelocale; client hello, adding server name extension: %s | semantic_intent_unknown;string_reference_intent_needs_context;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;propagate string refs to nearby VM operations;stitch external edg... |
| 064 | 0x3716c7..0x37176c | 2 | 35 | 2975 | decoded_control:2 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |
| 065 | 0x3717c4..0x371ff7 | 6 | 529 | 4441 | covered_synthetic_fallthrough:4,decoded_control:2 | - | semantic_intent_unknown;cross_program_control_context_needs_callgraph | name repeated VM idioms from handler/state formulas;stitch external edges into whole-program control graph |

## Gap Register

| priority | requirement | status | missing | next action |
| --- | --- | --- | --- | --- |
| P0 | human-readable intent for every VM bytecode program | open | program-level purpose names and reduced idiom names are not yet assigned | cluster repeated VM state formulas and replace structural expressions with named operations |
| P0 | initial x() behavior across environment configurations | partial | real server responses were not exercised; network behavior is blocked/faked in available traces | keep real network disabled, but model request construction and response parsing from static/data evidence |
| P0 | whole-program path coverage, not just no-network execution | partial | dynamic globality of every possible bytecode path is not proven | stitch static program graph with alternate-mode traces and mark unobserved branches explicitly |
| P1 | string/data role annotation | partial | string refs are present but not yet semantically tied to individual VM operations | for each referenced string/data item, identify nearby load/use operation and annotate role |
| P1 | native/import side-effect model | partial | imports are inventoried but not fully connected to VM bytecode call sites and program intents | map VM/native bridges to imported side effects and annotate reads, writes, network, process, and threading behavior |
| P1 | unobfuscated individual VM instruction semantics | partial | many handler formulas are still structural MBA expressions rather than named operations | reduce handler formulas into a compact VM ISA with named opcodes and operands |

## Artifacts

- Per-program ledger: `dumps/vmtail-wide-1m-w16/vm_behavior_inventory.tsv`
- Gap register: `dumps/vmtail-wide-1m-w16/vm_behavior_gap_register.tsv`
- Folded per-program C files: `dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/`
- Existing folded-C compile audit: `make program-decompiled-folded-audit`
