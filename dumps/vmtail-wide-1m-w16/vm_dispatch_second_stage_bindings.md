# VM Dispatch Second-Stage Bindings

These rows close target-binding evidence for MBA dispatch handlers whose first-stage static transfer reaches the central dispatcher instead of a final VM handler. The binding is observed from `[DISPATCH] idx` lines; the slot index must be aligned, point into the normal dispatch table, and match the observed target entry.

| Source | Status | Events | Dispatch Sites | Idx Mix | Entry Mix | Note |
| ---: | --- | ---: | --- | --- | --- | --- |
| 78 | `second_stage_dispatch_validated` | 1 | `0xc80b9:1` | `0x9b0:1` | `310:1` | first-stage MBA tail enters central dispatch; final target validated from DISPATCH idx |
| 95 | `second_stage_dispatch_validated` | 95 | `0xcdac7:81,0xc80b9:14` | `0x548:61,0x9b0:31,0x2b0:2,0x150:1` | `169:61,310:31,86:2,42:1` | first-stage MBA tail enters central dispatch; final target validated from DISPATCH idx |
| 216 | `second_stage_dispatch_validated` | 112 | `0xcdac7:108,0xc80b9:4` | `0x9b0:82,0x548:30` | `310:82,169:30` | first-stage MBA tail enters central dispatch; final target validated from DISPATCH idx |
| 264 | `second_stage_dispatch_validated` | 50 | `0xcdac7:40,0xc80b9:10` | `0x548:32,0x9b0:18` | `169:32,310:18` | first-stage MBA tail enters central dispatch; final target validated from DISPATCH idx |
| 278 | `second_stage_dispatch_validated` | 83 | `0xcdac7:82,0xc80b9:1` | `0x548:56,0x9b0:26,0xa18:1` | `169:56,310:26,323:1` | first-stage MBA tail enters central dispatch; final target validated from DISPATCH idx |
| 311 | `second_stage_dispatch_validated` | 69 | `0xcdac7:55,0xc80b9:14` | `0x548:36,0x9b0:31,0x150:2` | `169:36,310:31,42:2` | first-stage MBA tail enters central dispatch; final target validated from DISPATCH idx |
| 321 | `second_stage_dispatch_validated` | 19 | `0xcdac7:19` | `0x548:16,0x9b0:3` | `169:16,310:3` | first-stage MBA tail enters central dispatch; final target validated from DISPATCH idx |
| 356 | `second_stage_dispatch_validated` | 116 | `0xcdac7:110,0xc80b9:6` | `0x9b0:61,0x548:55` | `310:61,169:55` | first-stage MBA tail enters central dispatch; final target validated from DISPATCH idx |
