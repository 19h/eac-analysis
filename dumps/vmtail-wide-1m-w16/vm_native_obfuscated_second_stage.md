# Native Obfuscated Second-Stage Thunks

Indexes the five first-stage island downstreams that do not collapse to direct jumps. Each reaches a computed `jmp [rax]` site.

| entry | first stage | computed jump | internal loops | next linear entry | status | next action |
| --- | --- | --- | --- | --- | --- | --- |
| `0xc9849` | `0x17bf1f` | `0xcad88` | `0xca175->0xca166`, `0xcab3a->0xca97b` | `0xcaf2a` | `computed_indirect_target_unresolved` | `instrument_or_symbolically_collapse_jmp_rax_memory_target` |
| `0xcaf2a` | `0x33f109` | `0xcc3f5` | `0xcb941->0xcb932`, `0xcc23f->0xcc081` | `0xcc59c` | `computed_indirect_target_unresolved` | `instrument_or_symbolically_collapse_jmp_rax_memory_target` |
| `0xc4258` | `0x33b4b6` | `0xc559d` | `0xc4af1->0xc4ae2`, `0xc53a0->0xc524c` | `0xc57b8` | `computed_indirect_target_unresolved` | `instrument_or_symbolically_collapse_jmp_rax_memory_target` |
| `0xc57b8` | `0x36afd2` | `0xc6bce` | `0xc60ca->0xc60bb`, `0xc69d2->0xc68b4` | `0xc6d58` | `computed_indirect_target_unresolved` | `instrument_or_symbolically_collapse_jmp_rax_memory_target` |
| `0xc6d58` | `0x337d35` | `0xc80b9` | `0xc764f->0xc7640`, `0xc7e9a->0xc7d7a` | `0xc823b` | `computed_indirect_target_unresolved` | `instrument_or_symbolically_collapse_jmp_rax_memory_target` |
