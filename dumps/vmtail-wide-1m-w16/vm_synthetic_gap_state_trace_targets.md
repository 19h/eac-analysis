# Synthetic Gap State-Trace Targets

Focused targets for residual synthetic starts that were missing from the baseline state-wide predecessor trace.

- baseline-missing state rows: 9
- captured in supplemental focused trace: 9
- source mix: 175:3, 195:3, 299:2, 278:1
- synthetic-start site mix: 0x9c08c:4, 0x99b3a:2, 0x9c3f4:1, 0x992ca:1, 0x91e7f:1
- next-hook site mix: 0x9b0c5:5, 0xb86f5:4

Minimal capture logs the predecessor tail event plus the synthetic-start tail event, so `vm_trace_graph.py` can emit the missing state row with `end_vm_ip == synthetic_start_vm_ip`.

| Rank | Start | Source | Capture | Primary Seq | Pred IP | Sites | Next Hook | Goal |
| ---: | --- | ---: | --- | ---: | --- | --- | --- | --- |
| 1 | `0x34556c` | 175 | `captured_in_supplemental_trace` | 678580 | `0x345568` | `0xbf126 + 0x9c3f4` | `entry 169 0x11db12 -> 0x11db16` | emit vm_instruction_trace row with end_vm_ip=0x34556c |
| 2 | `0x3655e4` | 195 | `captured_in_supplemental_trace` | 754113 | `0x3655e0` | `0xae32f + 0x992ca` | `entry 310 0x11dcff -> 0x11dd03` | emit vm_instruction_trace row with end_vm_ip=0x3655e4 |
| 3 | `0x17a420` | 175 | `captured_in_supplemental_trace` | 757214 | `0x17a41c` | `0xae32f + 0x99b3a` | `entry 169 0x120afe -> 0x120b02` | emit vm_instruction_trace row with end_vm_ip=0x17a420 |
| 4 | `0x231b74` | 195 | `captured_in_supplemental_trace` | 758503 | `0x231b70` | `0xa4a5e + 0x9c08c` | `entry 169 0x121c8d -> 0x121c91` | emit vm_instruction_trace row with end_vm_ip=0x231b74 |
| 5 | `0x1ed483` | 195 | `captured_in_supplemental_trace` | 759970 | `0x1ed47f` | `0x90893 + 0x99b3a` | `entry 310 0x121ed0 -> 0x121ed4` | emit vm_instruction_trace row with end_vm_ip=0x1ed483 |
| 6 | `0x1a6041` | 175 | `captured_in_supplemental_trace` | 761693 | `0x1a603d` | `0xbf126 + 0x9c08c` | `entry 169 0x1221a0 -> 0x1221a4` | emit vm_instruction_trace row with end_vm_ip=0x1a6041 |
| 7 | `0x12906f` | 278 | `captured_in_supplemental_trace` | 764972 | `0x12906b` | `0x7c308 + 0x9c08c` | `entry 310 0x172d62 -> 0x172d66` | emit vm_instruction_trace row with end_vm_ip=0x12906f |
| 8 | `0x17452e` | 299 | `captured_in_supplemental_trace` | 767912 | `0x17452a` | `0x859f9 + 0x91e7f` | `entry 310 0x2bff9a -> 0x2bff9e` | emit vm_instruction_trace row with end_vm_ip=0x17452e |
| 9 | `0x122e3c` | 299 | `captured_in_supplemental_trace` | 768640 | `0x122e38` | `0x90893 + 0x9c08c` | `entry 169 0x2c0464 -> 0x2c0468` | emit vm_instruction_trace row with end_vm_ip=0x122e3c |

The `minimal_focus_env` TSV column gives a per-target focused VMTAIL environment. Set `ALL_TABLE_SPEC` from `python3 vm_tail_scan.py --all-table --eac eac.elf --window 0x1200 --limit 0` before using it. The `context_focus_env` variant also keeps the next hooked event, which is useful for sequence sanity checks but is not required for the concrete-state replay seed.
