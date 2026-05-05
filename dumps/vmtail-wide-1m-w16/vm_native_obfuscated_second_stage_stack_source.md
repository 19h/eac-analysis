# Native Obfuscated Second-Stage Stack Source Proof

Capstone-backed static proof that the second-stage handler entry comes from `qword [rsp+0x88]`, is loaded into `rbx`, and is shifted before dispatch.

| entry | site | source | load | shift | load kind | status |
| --- | --- | --- | --- | --- | --- | --- |
| `0xc9849` | `0xcad88` | `0xcaca3: push [rsp+0x88]` | `0xcacb0` | `0xcacf1: shl rbx,3` | `mov_rbx_qword_rsp` | `static_stack_source_to_rbx_shift_proven` |
| `0xcaf2a` | `0xcc3f5` | `0xcc31c: push [rsp+0x88]` | `0xcc326` | `0xcc36a: shl rbx,3` | `mov_rbx_qword_rsp` | `static_stack_source_to_rbx_shift_proven` |
| `0xc4258` | `0xc559d` | `0xc54c6: push [rsp+0x88]` | `0xc54d3` | `0xc5512: shl rbx,3` | `mov_rbx_qword_rsp` | `static_stack_source_to_rbx_shift_proven` |
| `0xc57b8` | `0xc6bce` | `0xc6afc: push [rsp+0x88]` | `0xc6b09` | `0xc6b43: shl rbx,3` | `pop_rbx` | `static_stack_source_to_rbx_shift_proven` |
| `0xc6d58` | `0xc80b9` | `0xc7fdc: push [rsp+0x88]` | `0xc7fe6` | `0xc802e: shl rbx,3` | `mov_rbx_qword_rsp` | `static_stack_source_to_rbx_shift_proven` |
