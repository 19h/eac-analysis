# Native Obfuscated Control Model

Joined hidden-control model from ret-patch follow-up obfuscated islands through source278 RetDec-covered targets or the static second-stage dispatch-table model.

| entry | source | downstream | final model | targets | status |
| --- | --- | --- | --- | --- | --- |
| `0x23122` | `entry_195:1` | `0xe0017` | `entry_helper_to_source278_retdec_native_target` | `0xcdc60` | `entry_helper_to_source278_retdec_target_joined` |
| `0xe0017` | `entry_195:1` | `0xcdc60` | `source278_retdec_native_target` | `0xcdc60` | `source278_retdec_target_joined` |
| `0x17bf1f` | `entry_299:1` | `0xc9849` | `dispatch_table[stack_qword(rsp+0x88)]` | `323@0xbb6e6:1,169@0x9af18:1,310@0xb8556:2` | `end_to_end_second_stage_dispatch_model_joined` |
| `0x231586` | `entry_195:1` | `0xcf3c7` | `source278_retdec_native_target` | `0xcf3c7` | `source278_retdec_target_joined` |
| `0x337d35` | `entry_195:1` | `0xc6d58` | `dispatch_table[stack_qword(rsp+0x88)]` | `86@0x8a37f:1,310@0xb8556:3,169@0x9af18:4` | `end_to_end_second_stage_dispatch_model_joined` |
| `0x33b4b6` | `entry_299:1` | `0xc4258` | `dispatch_table[stack_qword(rsp+0x88)]` | `323@0xbb6e6:1,169@0x9af18:6,310@0xb8556:1` | `end_to_end_second_stage_dispatch_model_joined` |
| `0x33f109` | `entry_195:1` | `0xcaf2a` | `dispatch_table[stack_qword(rsp+0x88)]` | `86@0x8a37f:1,310@0xb8556:1,169@0x9af18:2` | `end_to_end_second_stage_dispatch_model_joined` |
| `0x36afd2` | `entry_195:1` | `0xc57b8` | `dispatch_table[stack_qword(rsp+0x88)]` | `86@0x8a37f:1,169@0x9af18:2,310@0xb8556:1` | `end_to_end_second_stage_dispatch_model_joined` |
