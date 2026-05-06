# VM Trace Program Paths

This maps each available x()-driven instruction trace onto the 66 recovered folded VM bytecode programs. It is dynamic path evidence, not proof that every possible configuration or network response has executed.

## Summary

| metric | value |
| --- | --- |
| coverage rows | 36 |
| instruction traces mapped | 16 |
| program rows | 650 |
| program switch edges | 1045 |
| x trace first-program mix | 033:16 |
| network policy mix | blocked_observed:34,fake_observed:1,not_observed:1 |

## x() Trace Roots

| trace | mode | network | rows | programs | first | last | top programs |
| --- | --- | --- | --- | --- | --- | --- | --- |
| dumps/vmtail-mode0-w16 | 0 | blocked_observed | 249764 | 32 | 033@0x26cd71 | 041@0x311ffd | 041:75945,029:73109,030:42753,055:9495,053:7767,034:5745,032:5416,042:4724,050:3926,046:3663,048:3590,052:3374 |
| dumps/vmtail-mode2-w16 | 2 | blocked_observed | 249764 | 32 | 033@0x26cd71 | 041@0x311ffd | 041:75945,029:73109,030:42753,055:9495,053:7767,034:5745,032:5416,042:4724,050:3926,046:3663,048:3590,052:3374 |
| dumps/vmtail-fakenet-w16 | 1 | fake_observed | 249764 | 32 | 033@0x26cd71 | 041@0x311ffd | 041:75945,029:73109,030:42753,055:9495,053:7767,034:5745,032:5416,042:4724,050:3926,046:3663,048:3590,052:3374 |
| dumps/vmtail-live-residual-targets | 1 | blocked_observed | 3399 | 24 | 033@0x26cd71 | 021@0x17452a | 041:3291,034:30,056:21,055:20,048:9,052:6,033:4,032:2,029:1,000:1,003:1,006:1 |
| dumps/vmtail-residual-122e3c-context | 1 | blocked_observed | 3386 | 10 | 033@0x26cd71 | 039@0x2c0468 | 041:3291,034:32,056:21,055:20,048:9,052:6,033:4,049:1,019:1,039:1 |
| dumps/vmtail-wide | 1 | blocked_observed | 249764 | 32 | 033@0x26cd71 | 041@0x311ffd | 041:75945,029:73109,030:42753,055:9495,053:7767,034:5745,032:5416,042:4724,050:3926,046:3663,048:3590,052:3374 |
| dumps/vmtail-wide-1m | 1 | blocked_observed | 769113 | 66 | 033@0x26cd71 | 035@0x2932de | 041:502501,029:73109,063:44029,030:42753,055:11755,059:8056,061:8004,053:7767,056:6962,034:5745,032:5416,042:4724 |
| dumps/vmtail-wide-1m-w16 | 1 | blocked_observed | 769225 | 66 | 033@0x26cd71 | 035@0x293469 | 041:502501,029:73109,063:44029,030:42753,055:11755,059:8056,061:8004,053:7767,056:6962,034:5745,032:5416,042:4724 |
| dumps/vmtail-wide-w16 | 1 | blocked_observed | 249764 | 32 | 033@0x26cd71 | 041@0x311ffd | 041:75945,029:73109,030:42753,055:9495,053:7767,034:5745,032:5416,042:4724,050:3926,046:3663,048:3590,052:3374 |
| dumps/vmtail-state-residual-targets | 1 | blocked_observed | 3392 | 16 | 033@0x26cd71 | 019@0x122e38 | 041:3291,034:32,056:21,055:20,048:9,052:6,033:4,049:1,058:1,024:1,031:1,028:1 |
| dumps/vmtail-state-smoke-w16 | 1 | blocked_observed | 49865 | 12 | 033@0x26cd71 | 029@0x22ffec | 029:33776,034:5745,032:5416,010:1333,007:1024,000:803,025:477,033:452,001:380,009:194,008:188,002:77 |
| dumps/vmtail-state-wide-w16 | 1 | blocked_observed | 249764 | 32 | 033@0x26cd71 | 041@0x311ffd | 041:75945,029:73109,030:42753,055:9495,053:7767,034:5745,032:5416,042:4724,050:3926,046:3663,048:3590,052:3374 |
| dumps/vmtail-wide-1m-w16-filefill | 1 | blocked_observed | 769225 | 66 | 033@0x26cd71 | 035@0x293469 | 041:502501,029:73109,063:44029,030:42753,055:11755,059:8056,061:8004,053:7767,056:6962,034:5745,032:5416,042:4724 |
| dumps/vmtail-wide-1m-w16-filefill-hiddenfill | 1 | blocked_observed | 770754 | 66 | 033@0x26cd71 | 035@0x293469 | 041:502609,029:73367,063:44413,030:42881,055:11845,059:8134,061:8093,053:7830,056:6974,034:5745,032:5444,042:4756 |
| dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill | 1 | blocked_observed | 770800 | 66 | 033@0x26cd71 | 035@0x293469 | 041:502609,029:73367,063:44413,030:42881,055:11845,059:8134,061:8093,053:7830,056:6977,034:5745,032:5444,042:4756 |
| dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill | 1 | blocked_observed | 770800 | 66 | 033@0x26cd71 | 035@0x293469 | 041:502609,029:73367,063:44413,030:42881,055:11845,059:8134,061:8093,053:7830,056:6977,034:5745,032:5444,042:4756 |

## Primary Trace Program Path

- Trace: `dumps/vmtail-wide-1m-w16`
- First mapped program: `033` at `0x26cd71`
- Last mapped program: `035` at `0x293469`
- Unique programs in trace: `66`
- Top programs: `041:502501,029:73109,063:44029,030:42753,055:11755,059:8056,061:8004,053:7767,056:6962,034:5745,032:5416,042:4724`
- Compressed path: `033x113 -> 034x1437 -> 033x113 -> 034x1436 -> 032x333 -> 033x113 -> 034x1436 -> 032x2708 -> 033x113 -> 034x1436 -> 032x2375 -> 007x1024 -> 008x188 -> 009x194 -> 010x1333 -> 025x477 -> 001x380 -> 002x77 -> 000x803 -> 029x73109 -> 000x167 -> 030x42753 -> 000x116 -> 002x1003 -> 003x313 -> 025x191 -> 004x489 -> 005x157 -> 006x194 -> 025x261 -> 010x164 -> 042x4724 -> 043x54 -> 048x3355 -> 053x852 -> 054x21 -> 053x729 -> 054x21 -> 053x729 -> 054x21 -> 053x279 -> 054x71 -> 048x235 -> 049x222 -> 043x123 -> 046x3431 -> 053x852 -> 054x21 -> 053x729 -> 054x21 -> 053x729 -> 054x21 -> 053x279 -> 054x70 -> 046x232 -> 047x220 -> 043x123 -> 050x3694 -> 053x852 -> 054x21 -> 053x729 -> 054x21 -> 053x729 -> 054x21 -> 053x279 -> 054x70 -> 050x232 -> 051x220 -> 043x124 -> 052x3374 -> 043x130 -> 044x14 -> 045x520 -> 010x124 -> 055x9495 -> 041x502501 -> 055x2260 -> 010x124 -> 056x6594 -> 059x6319 -> ...+406`

## Artifacts

- Trace summary: `dumps/vmtail-wide-1m-w16/vm_trace_program_path_summary.tsv`
- Per-trace program rows: `dumps/vmtail-wide-1m-w16/vm_trace_program_path_programs.tsv`
- Dynamic program switch edges: `dumps/vmtail-wide-1m-w16/vm_trace_program_path_edges.tsv`
