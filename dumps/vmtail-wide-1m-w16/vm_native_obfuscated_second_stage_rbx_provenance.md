# Native Obfuscated Second-Stage RBX Provenance

Single-step probe evidence for the upstream handler entry loaded into `rbx` before the proven `rbx << 3` dispatch-table addressing formula.

| entry | site | rows | handler entries | targets | checks | status |
| --- | --- | ---: | --- | --- | --- | --- |
| `0xc9849` | `0xcad88` | 2 | `0x143:1,0xa9:1` | `0xbb6e6:1,0x9af18:1` | `push:2 load:2 shift:2 vmip:2` | `rbx_stack_entry_to_dispatch_index_proven_for_observed_hits` |
| `0xcaf2a` | `0xcc3f5` | 2 | `0x56:1,0x136:1` | `0x8a37f:1,0xb8556:1` | `push:2 load:2 shift:2 vmip:2` | `rbx_stack_entry_to_dispatch_index_proven_for_observed_hits` |
| `0xc4258` | `0xc559d` | 2 | `0x143:1,0xa9:1` | `0xbb6e6:1,0x9af18:1` | `push:2 load:2 shift:2 vmip:2` | `rbx_stack_entry_to_dispatch_index_proven_for_observed_hits` |
| `0xc57b8` | `0xc6bce` | 2 | `0x56:1,0xa9:1` | `0x8a37f:1,0x9af18:1` | `push:2 load:2 shift:2 vmip:2` | `rbx_stack_entry_to_dispatch_index_proven_for_observed_hits` |
| `0xc6d58` | `0xc80b9` | 2 | `0x56:1,0x136:1` | `0x8a37f:1,0xb8556:1` | `push:2 load:2 shift:2 vmip:2` | `rbx_stack_entry_to_dispatch_index_proven_for_observed_hits` |
