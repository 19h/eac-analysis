# VM Trace Coverage Matrix

Dynamic VM bytecode coverage is scenario-specific; this matrix compares available run directories.

| Trace | Class | Mode | Tail Limit | Flags | Network | Rows | Sources | Targets | Starts | Bytes | Vs Primary Sources | Vs Primary Starts |
| --- | --- | ---: | ---: | --- | --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| `dumps/vmtail-mode0-w16` | `alternate_mode_trace` | 0 | 250000 | `tail` | `blocked_observed` | 249764 | 191 | 195 | 39725 | `0x22ed01` | `+0/-11` | `+0/-31797` |
| `dumps/vmtail-mode2-w16` | `alternate_mode_trace` | 2 | 250000 | `tail` | `blocked_observed` | 249764 | 191 | 195 | 39725 | `0x22ed01` | `+0/-11` | `+0/-31797` |
| `dumps/vmtail-fakenet-w16` | `fake_network_trace` | 1 | 250000 | `tail` | `fake_observed` | 249764 | 191 | 195 | 39725 | `0x22ed01` | `+0/-11` | `+0/-31797` |
| `dumps/vmtail-mem-focus-final-site-b265e` | `memory_context_trace` | 1 | 100 | `regs,mem` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-mem-focus-final-site-c2d35` | `memory_context_trace` | 1 | 100 | `regs,mem` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-mem-focus-final-sites` | `memory_context_trace` | 1 | 500 | `regs,mem` | `not_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-mem-focus-start-final-sites` | `memory_context_trace` | 1 | 100 | `regs,mem` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-mem-focus-starts` | `memory_context_trace` | 1 | 200 | `regs,mem` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-mem-smoke` | `memory_context_trace` | 1 | 1000 | `regs,mem` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-live-residual-targets` | `raw_dynamic_trace` | 1 | 96 | `regs,scratch` | `blocked_observed` | 3404 | 15 | 9 | 132 | `0x1d8a52` | `+0/-187` | `+5/-71395` |
| `dumps/vmtail-residual-122e3c-context` | `raw_dynamic_trace` | 1 | 32 | `regs,scratch` | `blocked_observed` | 3386 | 7 | 7 | 113 | `0xf82df` | `+0/-195` | `+0/-71409` |
| `dumps/vmtail-wide` | `raw_dynamic_trace` | 1 | 250000 | `tail` | `blocked_observed` | 249764 | 191 | 195 | 39725 | `0x22ed01` | `+0/-11` | `+0/-31797` |
| `dumps/vmtail-wide-1m` | `raw_dynamic_trace` | 1 | 1000000 | `tail` | `blocked_observed` | 769113 | 202 | 205 | 71510 | `0x259425` | `+0/-0` | `+0/-12` |
| `dumps/vmtail-wide-1m-w16` | `raw_dynamic_trace` | 1 | 1000000 | `tail` | `blocked_observed` | 769225 | 202 | 205 | 71522 | `0x259425` | `+0/-0` | `+0/-0` |
| `dumps/vmtail-wide-w16` | `raw_dynamic_trace` | 1 | 250000 | `tail` | `blocked_observed` | 249764 | 191 | 195 | 39725 | `0x22ed01` | `+0/-11` | `+0/-31797` |
| `dumps/vmtail-regs-smoke-w16` | `register_context_trace` | 1 | 50000 | `regs` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-regs-wide-w16` | `register_context_trace` | 1 | 250000 | `regs` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-scratch-wide-w16` | `register_context_trace` | 1 | 250000 | `regs,scratch` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-scratch-wide-w16-fs337all` | `register_context_trace` | 1 | 250000 | `regs,scratch` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-scratch-wide-w16-fs337all-fs128` | `register_context_trace` | 1 | 250000 | `regs,scratch` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/dispatch-detail` | `run_without_instruction_trace` | 1 | - | `-` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/dispatch-trap` | `run_without_instruction_trace` | 1 | - | `-` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/local-blocked-log` | `run_without_instruction_trace` | 1 | - | `-` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-allstatic` | `run_without_instruction_trace` | 1 | 250000 | `tail` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-auto1` | `run_without_instruction_trace` | 1 | 80000 | `tail` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-auto2` | `run_without_instruction_trace` | 1 | 120000 | `tail` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-auto3` | `run_without_instruction_trace` | 1 | 160000 | `tail` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-recursive` | `run_without_instruction_trace` | 1 | 30000 | `tail` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-trace` | `run_without_instruction_trace` | 1 | 12000 | `tail` | `blocked_observed` | 0 | 0 | 0 | 0 | `0x0` | `+0/-202` | `+0/-71522` |
| `dumps/vmtail-state-residual-targets` | `state_trace` | 1 | 64 | `regs,scratch` | `blocked_observed` | 3393 | 11 | 9 | 120 | `0xf8148` | `+0/-191` | `+1/-71403` |
| `dumps/vmtail-state-smoke-w16` | `state_trace` | 1 | 50000 | `tail` | `blocked_observed` | 49865 | 142 | 148 | 8651 | `0x29f9d` | `+0/-60` | `+0/-62871` |
| `dumps/vmtail-state-wide-w16` | `state_trace` | 1 | 250000 | `tail` | `blocked_observed` | 249764 | 191 | 195 | 39725 | `0x22ed01` | `+0/-11` | `+0/-31797` |
| `dumps/vmtail-wide-1m-w16-filefill` | `synthetic_filled_trace` | 1 | 1000000 | `synthetic` | `blocked_observed` | 769225 | 202 | 205 | 71522 | `0x259425` | `+0/-0` | `+0/-0` |
| `dumps/vmtail-wide-1m-w16-filefill-hiddenfill` | `synthetic_filled_trace` | 1 | 1000000 | `synthetic` | `blocked_observed` | 770754 | 205 | 205 | 71742 | `0x2597ff` | `+3/-0` | `+220/-0` |
| `dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill` | `synthetic_filled_trace` | 1 | 1000000 | `synthetic` | `blocked_observed` | 770800 | 205 | 205 | 71788 | `0x259863` | `+3/-0` | `+266/-0` |
| `dumps/vmtail-wide-1m-w16-filefill-hiddenfill-frontierfill-footprintfill` | `synthetic_filled_trace` | 1 | 1000000 | `synthetic` | `blocked_observed` | 770822 | 205 | 205 | 71809 | `0x25987b` | `+3/-0` | `+287/-0` |

`blocked_observed` means trace_preload saw network calls and denied them, so that row is not network-enabled coverage.
`fake_observed` means trace_preload satisfied network calls with local fake DNS/socket/TLS-error bytes, so that row is not real outbound coverage.
The static handler inventory is broader than any one row here, but these dynamic rows do not prove full program coverage.
