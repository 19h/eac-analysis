# Compileable VM Program Readable C

This emits one compileable C artifact per recovered VM bytecode program. Each file embeds readable operation rows, solved block successor edges, and exact string/data references. It is an analysis artifact: unresolved algebra is preserved in strings rather than hidden behind invalid C expressions.

## Summary

| metric | value |
| --- | --- |
| programs | 66 |
| ops | 71522 |
| edges | 499 |
| string refs | 52 |
| output dir | dumps/vmtail-wide-1m-w16/vm_programs_readable_c |

## Program Files

| program | ops | edges | strings | summary | path |
| --- | --- | --- | --- | --- | --- |
| 000 | 633 | 7 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_000_readable.c |
| 001 | 380 | 3 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_001_readable.c |
| 002 | 1080 | 8 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_002_readable.c |
| 003 | 313 | 3 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_003_readable.c |
| 004 | 489 | 4 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_004_readable.c |
| 005 | 157 | 2 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_005_readable.c |
| 006 | 194 | 2 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_006_readable.c |
| 007 | 1024 | 8 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_007_readable.c |
| 008 | 188 | 3 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_008_readable.c |
| 009 | 194 | 3 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_009_readable.c |
| 010 | 1823 | 15 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_010_readable.c |
| 011 | 326 | 4 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_011_readable.c |
| 012 | 632 | 5 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_012_readable.c |
| 013 | 356 | 3 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_013_readable.c |
| 014 | 320 | 3 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_014_readable.c |
| 015 | 642 | 7 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_015_readable.c |
| 016 | 319 | 3 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_016_readable.c |
| 017 | 157 | 2 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_017_readable.c |
| 018 | 229 | 3 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_018_readable.c |
| 019 | 258 | 2 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_019_readable.c |
| 020 | 477 | 3 | 1 | host/environment inventory surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_020_readable.c |
| 021 | 4230 | 26 | 1 | threading or synchronization surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_021_readable.c |
| 022 | 698 | 5 | 1 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_022_readable.c |
| 023 | 608 | 5 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_023_readable.c |
| 024 | 325 | 3 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_024_readable.c |
| 025 | 929 | 7 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_025_readable.c |
| 026 | 1496 | 13 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_026_readable.c |
| 027 | 70 | 1 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_027_readable.c |
| 028 | 1317 | 9 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_028_readable.c |
| 029 | 436 | 6 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_029_readable.c |
| 030 | 740 | 4 | 0 | VM dispatch/math only so far; no behavioral data refs recovered | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_030_readable.c |
| 031 | 315 | 2 | 1 | C++ runtime/support surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_031_readable.c |
| 032 | 2708 | 16 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_032_readable.c |
| 033 | 113 | 1 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_033_readable.c |
| 034 | 1437 | 1 | 1 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_034_readable.c |
| 035 | 834 | 13 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_035_readable.c |
| 036 | 272 | 3 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_036_readable.c |
| 037 | 157 | 2 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_037_readable.c |
| 038 | 14 | 1 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_038_readable.c |
| 039 | 476 | 4 | 1 | network-facing logic or network import reference | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_039_readable.c |
| 040 | 165 | 2 | 1 | C++ runtime/support surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_040_readable.c |
| 041 | 8444 | 13 | 5 | crypto/hash helper surface; C++ runtime/support surface; disassembly metadata surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_041_readable.c |
| 042 | 3387 | 28 | 4 | C++ runtime/support surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_042_readable.c |
| 043 | 554 | 10 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_043_readable.c |
| 044 | 14 | 1 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_044_readable.c |
| 045 | 520 | 4 | 1 | threading or synchronization surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_045_readable.c |
| 046 | 2184 | 18 | 2 | C++ runtime/support surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_046_readable.c |
| 047 | 220 | 2 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_047_readable.c |
| 048 | 2333 | 13 | 3 | C++ runtime/support surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_048_readable.c |
| 049 | 222 | 1 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_049_readable.c |
| 050 | 2416 | 15 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_050_readable.c |
| 051 | 220 | 2 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_051_readable.c |
| 052 | 1891 | 5 | 2 | TLS/SSL protocol or library-adjacent logic; host/environment inventory surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_052_readable.c |
| 053 | 853 | 9 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_053_readable.c |
| 054 | 92 | 2 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_054_readable.c |
| 055 | 6540 | 45 | 17 | TLS/SSL protocol or library-adjacent logic; threading or synchronization surface; host/environment inventory surface; process or shell he... | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_055_readable.c |
| 056 | 5215 | 22 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_056_readable.c |
| 057 | 14 | 1 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_057_readable.c |
| 058 | 70 | 1 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_058_readable.c |
| 059 | 2468 | 24 | 4 | C++ runtime/support surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_059_readable.c |
| 060 | 387 | 4 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_060_readable.c |
| 061 | 2335 | 22 | 2 | C++ runtime/support surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_061_readable.c |
| 062 | 387 | 4 | 1 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_062_readable.c |
| 063 | 2661 | 28 | 4 | TLS/SSL protocol or library-adjacent logic; host/environment inventory surface; process or shell helper surface; C++ runtime/support surface | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_063_readable.c |
| 064 | 35 | 2 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_064_readable.c |
| 065 | 529 | 6 | 0 | control-transfer/native-bridge candidate with no exact side-effect reference yet | dumps/vmtail-wide-1m-w16/vm_programs_readable_c/vm_program_atlas_065_readable.c |

## Caveat

These C files are designed to compile and preserve evidence. They are not a replacement for final MBA algebra reduction or a native binding proof.
