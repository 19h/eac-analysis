# Native Obfuscated Second-Stage C Model

Combined C-shaped model for the five second-stage computed thunks, joining static structure, dynamic targets, slot proof, and RBX provenance.

| entry | site | model | handler entries | targets | status |
| --- | --- | --- | --- | --- | --- |
| `0xc9849` | `0xcad88` | `target = dispatch_table[stack_qword(rsp+0x88)]` | `0x143:1,0xa9:1` | `323@0xbb6e6:1,169@0x9af18:1,310@0xb8556:2` | `observed_stack_handler_entry_dispatch_model` |
| `0xcaf2a` | `0xcc3f5` | `target = dispatch_table[stack_qword(rsp+0x88)]` | `0x56:1,0x136:1` | `86@0x8a37f:1,310@0xb8556:1,169@0x9af18:2` | `observed_stack_handler_entry_dispatch_model` |
| `0xc4258` | `0xc559d` | `target = dispatch_table[stack_qword(rsp+0x88)]` | `0x143:1,0xa9:1` | `323@0xbb6e6:1,169@0x9af18:6,310@0xb8556:1` | `observed_stack_handler_entry_dispatch_model` |
| `0xc57b8` | `0xc6bce` | `target = dispatch_table[stack_qword(rsp+0x88)]` | `0x56:1,0xa9:1` | `86@0x8a37f:1,169@0x9af18:2,310@0xb8556:1` | `observed_stack_handler_entry_dispatch_model` |
| `0xc6d58` | `0xc80b9` | `target = dispatch_table[stack_qword(rsp+0x88)]` | `0x56:1,0x136:1` | `86@0x8a37f:1,310@0xb8556:3,169@0x9af18:4` | `observed_stack_handler_entry_dispatch_model` |
