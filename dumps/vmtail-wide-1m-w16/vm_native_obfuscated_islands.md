# Native Obfuscated Island Map

Collapses the obfuscated native islands reached by return-patch follow-up control into their next concrete native targets.

- island/helper rows: 8
- downstreams already covered by source278 RetDec: 2
- downstreams still requiring second-stage obfuscation collapse: 5

| entry | kind | range | final jump | downstream | downstream status | sources | next action |
| --- | --- | --- | --- | --- | --- | --- | --- |
| `0x23122` | `entry_helper` | `0x23122-0x2314f` | `0x2314a` | `0xe0017` | `first_stage_obfuscated_island` | `entry_195:1` | `follow_downstream_island` |
| `0xe0017` | `stack_obfuscated_island` | `0xe0017-0xe0166` | `0xe0161` | `0xcdc60` | `source278_retdec_covered` | `entry_195:1` | `join_existing_source278_retdec` |
| `0x17bf1f` | `stack_obfuscated_island` | `0x17bf1f-0x17c085` | `0x17c080` | `0xc9849` | `second_stage_obfuscated_thunk` | `entry_299:1` | `decode_downstream_stack_thunk` |
| `0x231586` | `stack_obfuscated_island` | `0x231586-0x2316b6` | `0x2316b1` | `0xcf3c7` | `source278_retdec_covered` | `entry_195:1` | `join_existing_source278_retdec` |
| `0x337d35` | `stack_obfuscated_island` | `0x337d35-0x337e7b` | `0x337e76` | `0xc6d58` | `second_stage_obfuscated_thunk` | `entry_195:1` | `decode_downstream_stack_thunk` |
| `0x33b4b6` | `stack_obfuscated_island` | `0x33b4b6-0x33b642` | `0x33b63d` | `0xc4258` | `second_stage_obfuscated_thunk` | `entry_299:1` | `decode_downstream_stack_thunk` |
| `0x33f109` | `stack_obfuscated_island` | `0x33f109-0x33f273` | `0x33f26e` | `0xcaf2a` | `second_stage_obfuscated_thunk` | `entry_195:1` | `decode_downstream_stack_thunk` |
| `0x36afd2` | `stack_obfuscated_island` | `0x36afd2-0x36b11b` | `0x36b116` | `0xc57b8` | `second_stage_obfuscated_thunk` | `entry_195:1` | `decode_downstream_stack_thunk` |
