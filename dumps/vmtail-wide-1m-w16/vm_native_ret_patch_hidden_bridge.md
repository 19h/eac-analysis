# Native Ret-Patch Hidden Bridge

Joined ret-patch native target windows to the hidden obfuscated-control model. These rows connect `vm_native_ret_patch_tail(...)` exits back to concrete C-shaped hidden-control helpers.

| source | VM IP | ret target | edge | hidden entry | model | targets | status |
| --- | --- | --- | --- | --- | --- | --- | --- |
| `entry_195` | `0xdaf39` | `0x230d4` | `call` | `0x23122` | `entry_helper_to_source278_retdec_native_target` | `0xcdc60` | `entry_helper_to_source278_retdec_target_joined` |
| `entry_195` | `0xdaf39` | `0x230d4` | `jump` | `0xe0017` | `source278_retdec_native_target` | `0xcdc60` | `source278_retdec_target_joined` |
| `entry_195` | `0x2304b8` | `0x44d7b` | `jump` | `0x231586` | `source278_retdec_native_target` | `0xcf3c7` | `source278_retdec_target_joined` |
| `entry_195` | `0x333bc9` | `0x748d8` | `jump` | `0x337d35` | `dispatch_table[stack_qword(rsp+0x88)]` | `86@0x8a37f:1,310@0xb8556:3,169@0x9af18:4` | `end_to_end_second_stage_dispatch_model_joined` |
| `entry_195` | `0x33d2d9` | `0x74f88` | `jump` | `0x33f109` | `dispatch_table[stack_qword(rsp+0x88)]` | `86@0x8a37f:1,310@0xb8556:1,169@0x9af18:2` | `end_to_end_second_stage_dispatch_model_joined` |
| `entry_195` | `0x3655e4` | `0x779bd` | `jump` | `0x36afd2` | `dispatch_table[stack_qword(rsp+0x88)]` | `86@0x8a37f:1,169@0x9af18:2,310@0xb8556:1` | `end_to_end_second_stage_dispatch_model_joined` |
| `entry_299` | `0x17452e` | `0x313eb` | `jump` | `0x17bf1f` | `dispatch_table[stack_qword(rsp+0x88)]` | `323@0xbb6e6:1,169@0x9af18:1,310@0xb8556:2` | `end_to_end_second_stage_dispatch_model_joined` |
| `entry_299` | `0x33710f` | `0x74b3d` | `jump` | `0x33b4b6` | `dispatch_table[stack_qword(rsp+0x88)]` | `323@0xbb6e6:1,169@0x9af18:6,310@0xb8556:1` | `end_to_end_second_stage_dispatch_model_joined` |
