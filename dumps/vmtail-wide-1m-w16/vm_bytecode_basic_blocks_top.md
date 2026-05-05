# VM Bytecode Basic Blocks

Recovered 499 basic blocks from `dumps/vmtail-wide-1m-w16/vm_bytecode_ir.tsv`.

Top 40 blocks by aggregate event count.

| Events | Block | Start | Rows | Terminal | Successor | Kind | Tail IR |
| ---: | ---: | --- | ---: | --- | --- | --- | --- |
| 283556 | 227 | `0x3129aa` | 3116 | `0x3157e1` -> `0x31580e` | 228 | `decoded_control` | `next = table[171], ip += 0x2d` |
| 169715 | 226 | `0x310dca` | 1865 | `0x31297d` -> `0x3129aa` | 227 | `decoded_control` | `next = table[354], ip += 0x2d` |
| 44799 | 166 | `0x230122` | 175 | `0x2303ae` -> `0x22ffea` | 165 | `decoded_control` | `next = table[165], ip -= 0x3c4` |
| 28938 | 228 | `0x31580e` | 318 | `0x315cc0` -> `0x310b1c` | 225 | `decoded_control` | `next = table[171], ip -= 0x51a4` |
| 20480 | 165 | `0x22ffea` | 80 | `0x23010d` -> `0x230111` | ? | `covered_synthetic_fallthrough` | `next = 50@0x82e76:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| 17664 | 171 | `0x230e18` | 276 | `0x231217` -> `0x230839` | 169 | `decoded_control` | `next = table[171], ip -= 0x9de` |
| 16285 | 225 | `0x310b1c` | 178 | `0x310dba` -> `0x315cc8` | 229 | `decoded_control` | `next = table[354], ip += 0x4f0e` |
| 12535 | 169 | `0x230839` | 195 | `0x230b17` -> `0x230b1b` | ? | `covered_synthetic_fallthrough` | `next = 50@0x82e76:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| 12480 | 170 | `0x230b2c` | 195 | `0x230e03` -> `0x230e07` | ? | `covered_synthetic_fallthrough` | `next = 321@0xbb1dd:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| 8625 | 490 | `0x371488` | 69 | `0x37158e` -> `0x3716c7` | 491 | `decoded_control` | `next = table[354], ip += 0x139` |
| 8350 | 488 | `0x370f18` | 334 | `0x37142a` -> `0x37142c` | 489 | `fallthrough` | `next = 354@0xc2241:25, ip += +0x2; dispatch_model=static_100` |
| 7679 | 163 | `0x22ff44` | 30 | `0x22ffb1` -> `0x22ff44` | 163 | `decoded_control` | `next = table[171], ip -= 0x6d` |
| 5745 | 191 | `0x26db07` | 1437 | `0x26f077` -> `0x26cd71` | 190 | `decoded_control` | `sampled operand footprint 0x6; observed target table[86], delta -0x2306` |
| 3900 | 487 | `0x370cbe` | 156 | `0x370f06` -> `0x370f0a` | ? | `covered_synthetic_fallthrough` | `next = 264@0xaf4cf:25, ip += +0x4; dispatch_model=static_100` |
| 3600 | 486 | `0x370a91` | 144 | `0x370cac` -> `0x370cb0` | ? | `covered_synthetic_fallthrough` | `next = 356@0xc291a:25, ip += +0x4; dispatch_model=static_100` |
| 2875 | 489 | `0x37142c` | 20 | `0x371477` -> `0x37171c` | 492 | `decoded_control` | `next = table[354], ip += 0x2a5` |
| 2652 | 477 | `0x370258` | 102 | `0x3703d4` -> `0x3703d8` | ? | `covered_synthetic_fallthrough` | `next = 311@0xb86f8:26, ip += +0x4; dispatch_model=static_100` |
| 2625 | 491 | `0x3716c7` | 21 | `0x371714` -> `0x37142c` | 489 | `decoded_control` | `next = table[354], ip -= 0x2e8` |
| 2600 | 485 | `0x3708f2` | 104 | `0x370a7c` -> `0x370a81` | ? | `covered_synthetic_fallthrough` | `next = 246@0xab427:25, ip += +0x5; dispatch_model=static_100` |
| 2125 | 493 | `0x3717c4` | 85 | `0x3718fb` -> `0x3718ff` | ? | `covered_synthetic_fallthrough` | `next = 311@0xb86f8:25, ip += +0x4; dispatch_model=static_100` |
| 2050 | 484 | `0x3707b1` | 82 | `0x3708e0` -> `0x3708e4` | ? | `covered_synthetic_fallthrough` | `next = 264@0xaf4cf:25, ip += +0x4; dispatch_model=static_100` |
| 1900 | 479 | `0x370508` | 76 | `0x370620` -> `0x370624` | ? | `covered_synthetic_fallthrough` | `next = 95@0x8c41c:25, ip += +0x4; dispatch_model=static_100` |
| 1891 | 413 | `0x367931` | 190 | `0x367c0e` -> `0x367e96` | 415 | `decoded_control` | `next = table[354], ip += 0x288` |
| 1876 | 326 | `0x33bea5` | 469 | `0x33c5b0` -> `0x33be49` | 325 | `decoded_control` | `next = table[354], ip -= 0x767` |
| 1873 | 478 | `0x3703e6` | 73 | `0x3704f7` -> `0x370770` | 482 | `decoded_control` | `next = table[354], ip += 0x279` |
| 1800 | 480 | `0x370632` | 72 | `0x37073e` -> `0x370743` | ? | `covered_synthetic_fallthrough` | `next = 145@0x95b5c:25, ip += +0x5; dispatch_model=static_100` |
| 1800 | 494 | `0x37190d` | 72 | `0x371a1b` -> `0x371a20` | ? | `covered_synthetic_fallthrough` | `next = 316@0xb987b:25, ip += +0x5; dispatch_model=static_100` |
| 1644 | 310 | `0x3387ea` | 411 | `0x338e10` -> `0x338682` | 308 | `decoded_control` | `next = table[354], ip -= 0x78e` |
| 1630 | 443 | `0x36b8a7` | 163 | `0x36bb16` -> `0x36b592` | 441 | `decoded_control` | `next = table[171], ip -= 0x584` |
| 1608 | 332 | `0x33de30` | 134 | `0x33e026` -> `0x33e02a` | ? | `covered_synthetic_fallthrough` | `next = 80@0x88a58:12, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| 1495 | 384 | `0x343f3c` | 1495 | `0x345568` -> `0x34556c` | ? | `covered_synthetic_fallthrough` | `next = 175@0x9c08f:1, ip += +0x4; dispatch_model=static_100` |
| 1467 | 414 | `0x367c1f` | 163 | `0x367e8e` -> `0x367931` | 413 | `decoded_control` | `next = table[165], ip -= 0x55d` |
| 1420 | 442 | `0x36b6a4` | 130 | `0x36b896` -> `0x36bb1e` | 444 | `decoded_control` | `next = table[354], ip += 0x288` |
| 1404 | 335 | `0x33e2e8` | 156 | `0x33e52e` -> `0x33e532` | ? | `covered_synthetic_fallthrough` | `next = 264@0xaf4cf:9, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| 1135 | 467 | `0x36f14a` | 190 | `0x36f427` -> `0x36f6af` | 469 | `decoded_control` | `next = table[165], ip += 0x288` |
| 1089 | 336 | `0x33e540` | 121 | `0x33e703` -> `0x33e707` | ? | `covered_synthetic_fallthrough` | `next = 69@0x85f24:9, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| 946 | 359 | `0x34114f` | 190 | `0x34142c` -> `0x3416b4` | 361 | `decoded_control` | `next = table[165], ip += 0x288` |
| 946 | 374 | `0x342a01` | 190 | `0x342cde` -> `0x342f66` | 376 | `decoded_control` | `next = table[165], ip += 0x288` |
| 946 | 391 | `0x361802` | 946 | `0x362613` -> `0x362615` | 392 | `fallthrough` | `next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100` |
| 946 | 397 | `0x362f71` | 946 | `0x363d82` -> `0x363d84` | 398 | `fallthrough` | `next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100; state=state_add_const` |

## Block Listings

### Block 227 `0x3129aa` events=283556 rows=3116 terminal=decoded_control

| VM IP | Kind | Source | Target | Delta | Events | IR |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| `0x3129aa` | `exact_instruction` | 354 | 43 | `+0x2` | 91 | `next = 43@0x8173d:91, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x3129ac` | `exact_instruction` | 43 | 254 | `+0x4` | 91 | `next = 254@0xad32c:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x3129b0` | `exact_instruction` | 254 | 183 | `+0x4` | 91 | `next = 183@0x9d495:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x3129b4` | `exact_instruction` | 183 | 114 | `+0x4` | 91 | `next = 114@0x90319:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x3129b8` | `exact_instruction` | 114 | 215 | `+0x4` | 91 | `next = 215@0xa4609:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x3129bc` | `exact_instruction` | 215 | 269 | `+0x3` | 91 | `next = 269@0xb045b:91, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x3129bf` | `exact_instruction` | 269 | 108 | `+0x5` | 91 | `next = 108@0x8f24b:91, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x3129c4` | `exact_instruction` | 108 | 345 | `+0x2` | 91 | `next = 345@0xc02e4:91, ip += +0x2; dispatch_model=static_100; state=state_add_const` |
| `0x3129c6` | `exact_instruction` | 345 | 196 | `+0x6` | 91 | `next = 196@0x9fbcd:91, ip += +0x6; dispatch_model=static_100; state=state_add_const` |
| `0x3129cc` | `exact_instruction` | 196 | 18 | `+0x4` | 91 | `next = 18@0x7be9b:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x3129d0` | `exact_instruction` | 18 | 337 | `+0x3` | 91 | `next = 337@0xbec0e:91, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x3129d3` | `exact_instruction` | 337 | 37 | `+0x4` | 91 | `next = 37@0x80685:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x3129d7` | `exact_instruction` | 37 | 352 | `+0x5` | 91 | `next = 352@0xc1ec4:91, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x3129dc` | `exact_instruction` | 352 | 307 | `+0x2` | 91 | `next = 307@0xb8064:91, ip += +0x2; dispatch_model=static_100; state=state_add_const` |
| `0x3129de` | `exact_instruction` | 307 | 179 | `+0x3` | 91 | `next = 179@0x9ca8d:91, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x3129e1` | `exact_instruction` | 179 | 337 | `+0x5` | 91 | `next = 337@0xbec0e:91, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x3129e6` | `exact_instruction` | 337 | 268 | `+0x4` | 91 | `next = 268@0xb0007:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x3129ea` | `exact_instruction` | 268 | 49 | `+0x4` | 91 | `next = 49@0x82820:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x3129ee` | `exact_instruction` | 49 | 144 | `+0x5` | 91 | `next = 144@0x95887:91, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x3129f3` | `exact_instruction` | 144 | 337 | `+0x2` | 91 | `next = 337@0xbec0e:91, ip += +0x2; dispatch_model=static_100; state=state_mixed` |

... 3096 more rows omitted.

### Block 226 `0x310dca` events=169715 rows=1865 terminal=decoded_control

| VM IP | Kind | Source | Target | Delta | Events | IR |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| `0x310dca` | `exact_instruction` | 260 | 183 | `+0x4` | 91 | `next = 183@0x9d495:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310dce` | `exact_instruction` | 183 | 196 | `+0x4` | 91 | `next = 196@0x9fbcd:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310dd2` | `exact_instruction` | 196 | 347 | `+0x4` | 91 | `next = 347@0xc088d:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310dd6` | `exact_instruction` | 347 | 83 | `+0x4` | 91 | `next = 83@0x8947b:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310dda` | `exact_instruction` | 83 | 198 | `+0x5` | 91 | `next = 198@0xa037e:91, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x310ddf` | `exact_instruction` | 198 | 268 | `+0x2` | 91 | `next = 268@0xb0007:91, ip += +0x2; dispatch_model=static_100; state=state_add_const` |
| `0x310de1` | `exact_instruction` | 268 | 253 | `+0x4` | 91 | `next = 253@0xacfb1:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310de5` | `exact_instruction` | 253 | 199 | `+0x6` | 91 | `next = 199@0xa0631:91, ip += +0x6; dispatch_model=static_100; state=state_add_const` |
| `0x310deb` | `exact_instruction` | 199 | 340 | `+0x3` | 91 | `next = 340@0xbf435:91, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x310dee` | `exact_instruction` | 340 | 320 | `+0x4` | 91 | `next = 320@0xbada5:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310df2` | `exact_instruction` | 320 | 352 | `+0x5` | 91 | `next = 352@0xc1ec4:91, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x310df7` | `exact_instruction` | 352 | 114 | `+0x2` | 91 | `next = 114@0x90319:91, ip += +0x2; dispatch_model=static_100; state=state_add_const` |
| `0x310df9` | `exact_instruction` | 114 | 28 | `+0x4` | 91 | `next = 28@0x7e390:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310dfd` | `exact_instruction` | 28 | 333 | `+0x3` | 91 | `next = 333@0xbd8af:91, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x310e00` | `exact_instruction` | 333 | 273 | `+0x4` | 91 | `next = 273@0xb11ca:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310e04` | `exact_instruction` | 273 | 3 | `+0x4` | 91 | `next = 3@0x78c77:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310e08` | `exact_instruction` | 3 | 257 | `+0x5` | 91 | `next = 257@0xadbfd:91, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x310e0d` | `exact_instruction` | 257 | 333 | `+0x2` | 91 | `next = 333@0xbd8af:91, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x310e0f` | `exact_instruction` | 333 | 340 | `+0x4` | 91 | `next = 340@0xbf435:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310e13` | `exact_instruction` | 340 | 30 | `+0x4` | 91 | `next = 30@0x7e849:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |

... 1845 more rows omitted.

### Block 166 `0x230122` events=44799 rows=175 terminal=decoded_control

| VM IP | Kind | Source | Target | Delta | Events | IR |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| `0x230122` | `exact_instruction` | 171 | 196 | `+0x2` | 256 | `next = 196@0x9fbcd:256, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x230124` | `exact_instruction` | 196 | 18 | `+0x4` | 256 | `next = 18@0x7be9b:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230128` | `exact_instruction` | 18 | 114 | `+0x3` | 256 | `next = 114@0x90319:256, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x23012b` | `exact_instruction` | 114 | 287 | `+0x4` | 256 | `next = 287@0xb45d2:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x23012f` | `exact_instruction` | 287 | 199 | `+0x4` | 256 | `next = 199@0xa0631:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230133` | `exact_instruction` | 199 | 203 | `+0x3` | 256 | `next = 203@0xa1484:256, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230136` | `exact_instruction` | 203 | 258 | `+0x4` | 256 | `next = 258@0xadf2c:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x23013a` | `exact_instruction` | 258 | 26 | `+0x4` | 256 | `next = 26@0x7dbbb:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x23013e` | `exact_instruction` | 26 | 28 | `+0x4` | 256 | `next = 28@0x7e390:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230142` | `exact_instruction` | 28 | 168 | `+0x3` | 256 | `next = 168@0x9aa83:256, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230145` | `exact_instruction` | 168 | 337 | `+0x4` | 256 | `next = 337@0xbec0e:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230149` | `exact_instruction` | 337 | 315 | `+0x4` | 256 | `next = 315@0xb9451:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x23014d` | `exact_instruction` | 315 | 347 | `+0x4` | 256 | `next = 347@0xc088d:256, ip += +0x4; dispatch_model=static_100; state=state_mixed` |
| `0x230151` | `exact_instruction` | 347 | 297 | `+0x4` | 256 | `next = 297@0xb64d7:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230155` | `exact_instruction` | 297 | 333 | `+0x3` | 256 | `next = 333@0xbd8af:256, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230158` | `exact_instruction` | 333 | 305 | `+0x4` | 256 | `next = 305@0xb78b0:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x23015c` | `exact_instruction` | 305 | 199 | `+0x4` | 256 | `next = 199@0xa0631:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230160` | `exact_instruction` | 199 | 114 | `+0x3` | 256 | `next = 114@0x90319:256, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230163` | `exact_instruction` | 114 | 268 | `+0x4` | 256 | `next = 268@0xb0007:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230167` | `exact_instruction` | 268 | 243 | `+0x4` | 256 | `next = 243@0xaab6a:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |

... 155 more rows omitted.

### Block 228 `0x31580e` events=28938 rows=318 terminal=decoded_control

| VM IP | Kind | Source | Target | Delta | Events | IR |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| `0x31580e` | `exact_instruction` | 171 | 337 | `+0x2` | 91 | `next = 337@0xbec0e:91, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x315810` | `exact_instruction` | 337 | 203 | `+0x4` | 91 | `next = 203@0xa1484:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x315814` | `exact_instruction` | 203 | 30 | `+0x4` | 91 | `next = 30@0x7e849:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x315818` | `exact_instruction` | 30 | 307 | `+0x4` | 91 | `next = 307@0xb8064:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x31581c` | `exact_instruction` | 307 | 301 | `+0x3` | 91 | `next = 301@0xb708d:91, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x31581f` | `exact_instruction` | 301 | 198 | `+0x5` | 91 | `next = 198@0xa037e:91, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x315824` | `exact_instruction` | 198 | 43 | `+0x2` | 91 | `next = 43@0x8173d:91, ip += +0x2; dispatch_model=static_100; state=state_add_const` |
| `0x315826` | `exact_instruction` | 43 | 140 | `+0x4` | 91 | `next = 140@0x94e5a:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x31582a` | `exact_instruction` | 140 | 340 | `+0x6` | 91 | `next = 340@0xbf435:91, ip += +0x6; dispatch_model=static_100; state=state_add_const` |
| `0x315830` | `exact_instruction` | 340 | 199 | `+0x4` | 91 | `next = 199@0xa0631:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x315834` | `exact_instruction` | 199 | 79 | `+0x3` | 91 | `next = 79@0x885b0:91, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x315837` | `exact_instruction` | 79 | 257 | `+0x5` | 91 | `next = 257@0xadbfd:91, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x31583c` | `exact_instruction` | 257 | 165 | `+0x2` | 91 | `next = 165@0x9a24c:91, ip += +0x2; dispatch_model=static_100; state=state_mixed` |
| `0x31583e` | `exact_instruction` | 165 | 203 | `+0x2` | 91 | `next = 203@0xa1484:91, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x315840` | `exact_instruction` | 203 | 30 | `+0x4` | 91 | `next = 30@0x7e849:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x315844` | `exact_instruction` | 30 | 91 | `+0x4` | 91 | `next = 91@0x8b6de:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x315848` | `exact_instruction` | 91 | 258 | `+0x4` | 91 | `next = 258@0xadf2c:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x31584c` | `exact_instruction` | 258 | 199 | `+0x4` | 91 | `next = 199@0xa0631:91, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x315850` | `exact_instruction` | 199 | 83 | `+0x3` | 91 | `next = 83@0x8947b:91, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x315853` | `exact_instruction` | 83 | 160 | `+0x5` | 91 | `next = 160@0x994cf:91, ip += +0x5; dispatch_model=static_100; state=state_add_const` |

... 298 more rows omitted.

### Block 165 `0x22ffea` events=20480 rows=80 terminal=covered_synthetic_fallthrough

| VM IP | Kind | Source | Target | Delta | Events | IR |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| `0x22ffea` | `exact_instruction` | 165 | 114 | `+0x2` | 256 | `next = 114@0x90319:256, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x22ffec` | `exact_instruction` | 114 | 30 | `+0x4` | 256 | `next = 30@0x7e849:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x22fff0` | `exact_instruction` | 30 | 203 | `+0x4` | 256 | `next = 203@0xa1484:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x22fff4` | `exact_instruction` | 203 | 297 | `+0x4` | 256 | `next = 297@0xb64d7:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x22fff8` | `exact_instruction` | 297 | 301 | `+0x3` | 256 | `next = 301@0xb708d:256, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x22fffb` | `exact_instruction` | 301 | 173 | `+0x5` | 256 | `next = 173@0x9ba74:256, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x230000` | `exact_instruction` | 173 | 64 | `+0x2` | 256 | `next = 64@0x85059:256, ip += +0x2; dispatch_model=static_100; state=state_mixed` |
| `0x230002` | `exact_instruction` | 64 | 121 | `+0x4` | 256 | `next = 121@0x91379:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230006` | `exact_instruction` | 121 | 307 | `+0x4` | 256 | `next = 307@0xb8064:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x23000a` | `exact_instruction` | 307 | 157 | `+0x3` | 256 | `next = 157@0x98a9a:256, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x23000d` | `exact_instruction` | 157 | 201 | `+0x4` | 256 | `next = 201@0xa0dca:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230011` | `exact_instruction` | 201 | 173 | `+0x5` | 256 | `next = 173@0x9ba74:256, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x230016` | `exact_instruction` | 173 | 196 | `+0x2` | 256 | `next = 196@0x9fbcd:256, ip += +0x2; dispatch_model=static_100; state=state_add_const` |
| `0x230018` | `exact_instruction` | 196 | 66 | `+0x4` | 256 | `next = 66@0x855ff:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x23001c` | `exact_instruction` | 66 | 300 | `+0x3` | 256 | `next = 300@0xb6c36:256, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x23001f` | `exact_instruction` | 300 | 337 | `+0x4` | 256 | `next = 337@0xbec0e:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230023` | `exact_instruction` | 337 | 79 | `+0x4` | 256 | `next = 79@0x885b0:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230027` | `exact_instruction` | 79 | 257 | `+0x5` | 256 | `next = 257@0xadbfd:256, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x23002c` | `exact_instruction` | 257 | 172 | `+0x2` | 256 | `next = 172@0x9b68a:256, ip += +0x2; dispatch_model=static_100; state=state_mixed` |
| `0x23002e` | `exact_instruction` | 172 | 307 | `+0x4` | 256 | `next = 307@0xb8064:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |

... 60 more rows omitted.

### Block 171 `0x230e18` events=17664 rows=276 terminal=decoded_control

| VM IP | Kind | Source | Target | Delta | Events | IR |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| `0x230e18` | `exact_instruction` | 165 | 333 | `+0x2` | 64 | `next = 333@0xbd8af:64, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x230e1a` | `exact_instruction` | 333 | 347 | `+0x4` | 64 | `next = 347@0xc088d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e1e` | `exact_instruction` | 347 | 28 | `+0x4` | 64 | `next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e22` | `exact_instruction` | 28 | 26 | `+0x3` | 64 | `next = 26@0x7dbbb:64, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230e25` | `exact_instruction` | 26 | 43 | `+0x4` | 64 | `next = 43@0x8173d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e29` | `exact_instruction` | 43 | 347 | `+0x4` | 64 | `next = 347@0xc088d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e2d` | `exact_instruction` | 347 | 18 | `+0x4` | 64 | `next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e31` | `exact_instruction` | 18 | 26 | `+0x3` | 64 | `next = 26@0x7dbbb:64, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230e34` | `exact_instruction` | 26 | 337 | `+0x4` | 64 | `next = 337@0xbec0e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e38` | `exact_instruction` | 337 | 172 | `+0x4` | 64 | `next = 172@0x9b68a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e3c` | `exact_instruction` | 172 | 185 | `+0x4` | 64 | `next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e40` | `exact_instruction` | 185 | 33 | `+0x3` | 64 | `next = 33@0x7f7c4:64, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230e43` | `exact_instruction` | 33 | 66 | `+0x4` | 64 | `next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e47` | `exact_instruction` | 66 | 258 | `+0x3` | 64 | `next = 258@0xadf2c:64, ip += +0x3; dispatch_model=static_100; state=state_const_post` |
| `0x230e4a` | `exact_instruction` | 258 | 172 | `+0x4` | 64 | `next = 172@0x9b68a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e4e` | `exact_instruction` | 172 | 305 | `+0x4` | 64 | `next = 305@0xb78b0:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e52` | `exact_instruction` | 305 | 268 | `+0x4` | 64 | `next = 268@0xb0007:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e56` | `exact_instruction` | 268 | 215 | `+0x4` | 64 | `next = 215@0xa4609:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230e5a` | `exact_instruction` | 215 | 340 | `+0x3` | 64 | `next = 340@0xbf435:64, ip += +0x3; dispatch_model=static_100; state=state_mixed` |
| `0x230e5d` | `exact_instruction` | 340 | 305 | `+0x4` | 64 | `next = 305@0xb78b0:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |

... 256 more rows omitted.

### Block 225 `0x310b1c` events=16285 rows=178 terminal=decoded_control

| VM IP | Kind | Source | Target | Delta | Events | IR |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| `0x310b1c` | `exact_instruction` | 171 | 333 | `+0x2` | 92 | `next = 333@0xbd8af:92, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x310b1e` | `exact_instruction` | 333 | 189 | `+0x4` | 92 | `next = 189@0x9e7af:92, ip += +0x4; dispatch_model=static_100; state=state_const_post` |
| `0x310b22` | `exact_instruction` | 189 | 215 | `+0x4` | 92 | `next = 215@0xa4609:92, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310b26` | `exact_instruction` | 215 | 273 | `+0x3` | 92 | `next = 273@0xb11ca:92, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x310b29` | `exact_instruction` | 273 | 183 | `+0x4` | 92 | `next = 183@0x9d495:92, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310b2d` | `exact_instruction` | 183 | 220 | `+0x4` | 92 | `next = 220@0xa522e:92, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310b31` | `exact_instruction` | 220 | 108 | `+0x5` | 92 | `next = 108@0x8f24b:92, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x310b36` | `exact_instruction` | 108 | 185 | `+0x2` | 92 | `next = 185@0x9d964:92, ip += +0x2; dispatch_model=static_100; state=state_add_const` |
| `0x310b38` | `exact_instruction` | 185 | 168 | `+0x3` | 92 | `next = 168@0x9aa83:92, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x310b3b` | `exact_instruction` | 168 | 340 | `+0x4` | 92 | `next = 340@0xbf435:92, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310b3f` | `exact_instruction` | 340 | 345 | `+0x4` | 92 | `next = 345@0xc02e4:92, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310b43` | `exact_instruction` | 345 | 37 | `+0x6` | 92 | `next = 37@0x80685:92, ip += +0x6; dispatch_model=static_100; state=state_add_const` |
| `0x310b49` | `exact_instruction` | 37 | 173 | `+0x5` | 92 | `next = 173@0x9ba74:92, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x310b4e` | `exact_instruction` | 173 | 273 | `+0x2` | 92 | `next = 273@0xb11ca:92, ip += +0x2; dispatch_model=static_100; state=state_add_const` |
| `0x310b50` | `exact_instruction` | 273 | 168 | `+0x4` | 92 | `next = 168@0x9aa83:92, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310b54` | `exact_instruction` | 168 | 28 | `+0x4` | 92 | `next = 28@0x7e390:92, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310b58` | `exact_instruction` | 28 | 337 | `+0x3` | 92 | `next = 337@0xbec0e:92, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x310b5b` | `exact_instruction` | 337 | 83 | `+0x4` | 92 | `next = 83@0x8947b:92, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x310b5f` | `exact_instruction` | 83 | 256 | `+0x5` | 92 | `next = 256@0xad849:92, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x310b64` | `exact_instruction` | 256 | 307 | `+0x2` | 92 | `next = 307@0xb8064:92, ip += +0x2; dispatch_model=static_100; state=state_add_const` |

... 158 more rows omitted.

### Block 169 `0x230839` events=12535 rows=195 terminal=covered_synthetic_fallthrough

| VM IP | Kind | Source | Target | Delta | Events | IR |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| `0x230839` | `exact_instruction` | 171 | 185 | `+0x2` | 65 | `next = 185@0x9d964:65, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x23083b` | `exact_instruction` | 185 | 347 | `+0x3` | 65 | `next = 347@0xc088d:65, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x23083e` | `exact_instruction` | 347 | 30 | `+0x4` | 65 | `next = 30@0x7e849:65, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230842` | `exact_instruction` | 30 | 157 | `+0x4` | 65 | `next = 157@0x98a9a:65, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230846` | `exact_instruction` | 157 | 52 | `+0x4` | 65 | `next = 52@0x833c7:65, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x23084a` | `exact_instruction` | 52 | 64 | `+0x5` | 65 | `next = 64@0x85059:65, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x23084f` | `exact_instruction` | 64 | 199 | `+0x4` | 65 | `next = 199@0xa0631:65, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230853` | `exact_instruction` | 199 | 184 | `+0x3` | 65 | `next = 184@0x9d694:65, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230856` | `exact_instruction` | 184 | 40 | `+0x4` | 65 | `next = 40@0x8115d:65, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x23085a` | `exact_instruction` | 40 | 114 | `+0x6` | 65 | `next = 114@0x90319:65, ip += +0x6; dispatch_model=static_100; state=state_add_const` |
| `0x230860` | `exact_instruction` | 114 | 66 | `+0x4` | 65 | `next = 66@0x855ff:65, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230864` | `exact_instruction` | 66 | 176 | `+0x3` | 65 | `next = 176@0x9c10b:65, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230867` | `exact_instruction` | 176 | 258 | `+0x4` | 65 | `next = 258@0xadf2c:65, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x23086b` | `exact_instruction` | 258 | 18 | `+0x4` | 65 | `next = 18@0x7be9b:65, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x23086f` | `exact_instruction` | 18 | 161 | `+0x3` | 65 | `next = 161@0x9975a:65, ip += +0x3; dispatch_model=static_100; state=state_mixed` |
| `0x230872` | `exact_instruction` | 161 | 215 | `+0x4` | 65 | `next = 215@0xa4609:65, ip += +0x4; dispatch_model=static_100; state=state_mixed` |
| `0x230876` | `exact_instruction` | 215 | 189 | `+0x3` | 65 | `next = 189@0x9e7af:65, ip += +0x3; dispatch_model=static_100; state=state_mixed` |
| `0x230879` | `exact_instruction` | 189 | 176 | `+0x4` | 65 | `next = 176@0x9c10b:65, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x23087d` | `exact_instruction` | 176 | 114 | `+0x4` | 65 | `next = 114@0x90319:65, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230881` | `exact_instruction` | 114 | 66 | `+0x4` | 65 | `next = 66@0x855ff:65, ip += +0x4; dispatch_model=static_100; state=state_add_const` |

... 175 more rows omitted.

### Block 170 `0x230b2c` events=12480 rows=195 terminal=covered_synthetic_fallthrough

| VM IP | Kind | Source | Target | Delta | Events | IR |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| `0x230b2c` | `exact_instruction` | 171 | 196 | `+0x2` | 64 | `next = 196@0x9fbcd:64, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x230b2e` | `exact_instruction` | 196 | 189 | `+0x4` | 64 | `next = 189@0x9e7af:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230b32` | `exact_instruction` | 189 | 28 | `+0x4` | 64 | `next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230b36` | `exact_instruction` | 28 | 315 | `+0x3` | 64 | `next = 315@0xb9451:64, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230b39` | `exact_instruction` | 315 | 297 | `+0x4` | 64 | `next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_mixed` |
| `0x230b3d` | `exact_instruction` | 297 | 268 | `+0x3` | 64 | `next = 268@0xb0007:64, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230b40` | `exact_instruction` | 268 | 189 | `+0x4` | 64 | `next = 189@0x9e7af:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230b44` | `exact_instruction` | 189 | 287 | `+0x4` | 64 | `next = 287@0xb45d2:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230b48` | `exact_instruction` | 287 | 307 | `+0x4` | 64 | `next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230b4c` | `exact_instruction` | 307 | 64 | `+0x3` | 64 | `next = 64@0x85059:64, ip += +0x3; dispatch_model=static_100; state=state_mixed` |
| `0x230b4f` | `exact_instruction` | 64 | 268 | `+0x4` | 64 | `next = 268@0xb0007:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230b53` | `exact_instruction` | 268 | 346 | `+0x4` | 64 | `next = 346@0xc0535:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230b57` | `exact_instruction` | 346 | 114 | `+0x4` | 64 | `next = 114@0x90319:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230b5b` | `exact_instruction` | 114 | 196 | `+0x4` | 64 | `next = 196@0x9fbcd:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230b5f` | `exact_instruction` | 196 | 66 | `+0x4` | 64 | `next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230b63` | `exact_instruction` | 66 | 243 | `+0x3` | 64 | `next = 243@0xaab6a:64, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230b66` | `exact_instruction` | 243 | 114 | `+0x4` | 64 | `next = 114@0x90319:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230b6a` | `exact_instruction` | 114 | 199 | `+0x4` | 64 | `next = 199@0xa0631:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x230b6e` | `exact_instruction` | 199 | 172 | `+0x3` | 64 | `next = 172@0x9b68a:64, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x230b71` | `exact_instruction` | 172 | 287 | `+0x4` | 64 | `next = 287@0xb45d2:64, ip += +0x4; dispatch_model=static_100; state=state_add_const` |

... 175 more rows omitted.

### Block 490 `0x371488` events=8625 rows=69 terminal=decoded_control

| VM IP | Kind | Source | Target | Delta | Events | IR |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| `0x371488` | `exact_instruction` | 183 | 297 | `+0x4` | 125 | `next = 297@0xb64d7:125, ip += +0x4; dispatch_model=static_100` |
| `0x37148c` | `exact_instruction` | 297 | 157 | `+0x3` | 125 | `next = 157@0x98a9a:125, ip += +0x3; dispatch_model=static_100` |
| `0x37148f` | `exact_instruction` | 157 | 258 | `+0x4` | 125 | `next = 258@0xadf2c:125, ip += +0x4; dispatch_model=static_100` |
| `0x371493` | `exact_instruction` | 258 | 83 | `+0x4` | 125 | `next = 83@0x8947b:125, ip += +0x4; dispatch_model=static_100` |
| `0x371497` | `exact_instruction` | 83 | 257 | `+0x5` | 125 | `next = 257@0xadbfd:125, ip += +0x5; dispatch_model=static_100` |
| `0x37149c` | `exact_instruction` | 257 | 297 | `+0x2` | 125 | `next = 297@0xb64d7:125, ip += +0x2; dispatch_model=static_100` |
| `0x37149e` | `exact_instruction` | 297 | 43 | `+0x3` | 125 | `next = 43@0x8173d:125, ip += +0x3; dispatch_model=static_100` |
| `0x3714a1` | `exact_instruction` | 43 | 239 | `+0x4` | 125 | `next = 239@0xa991e:125, ip += +0x4; dispatch_model=static_100` |
| `0x3714a5` | `exact_instruction` | 239 | 340 | `+0x6` | 125 | `next = 340@0xbf435:125, ip += +0x6; dispatch_model=static_100` |
| `0x3714ab` | `exact_instruction` | 340 | 320 | `+0x4` | 125 | `next = 320@0xbada5:125, ip += +0x4; dispatch_model=static_100` |
| `0x3714af` | `exact_instruction` | 320 | 173 | `+0x5` | 125 | `next = 173@0x9ba74:125, ip += +0x5; dispatch_model=static_100` |
| `0x3714b4` | `exact_instruction` | 173 | 337 | `+0x2` | 125 | `next = 337@0xbec0e:125, ip += +0x2; dispatch_model=static_100` |
| `0x3714b6` | `exact_instruction` | 337 | 203 | `+0x4` | 125 | `next = 203@0xa1484:125, ip += +0x4; dispatch_model=static_100` |
| `0x3714ba` | `exact_instruction` | 203 | 208 | `+0x4` | 125 | `next = 208@0xa2361:125, ip += +0x4; dispatch_model=static_100` |
| `0x3714be` | `exact_instruction` | 208 | 307 | `+0x5` | 125 | `next = 307@0xb8064:125, ip += +0x5; dispatch_model=static_100` |
| `0x3714c3` | `exact_instruction` | 307 | 301 | `+0x3` | 125 | `next = 301@0xb708d:125, ip += +0x3; dispatch_model=static_100` |
| `0x3714c6` | `exact_instruction` | 301 | 352 | `+0x5` | 125 | `next = 352@0xc1ec4:125, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x3714cb` | `exact_instruction` | 352 | 172 | `+0x2` | 125 | `next = 172@0x9b68a:125, ip += +0x2; dispatch_model=static_100; state=state_add_const` |
| `0x3714cd` | `exact_instruction` | 172 | 254 | `+0x4` | 125 | `next = 254@0xad32c:125, ip += +0x4; dispatch_model=static_100` |
| `0x3714d1` | `exact_instruction` | 254 | 28 | `+0x4` | 125 | `next = 28@0x7e390:125, ip += +0x4; dispatch_model=static_100` |

... 49 more rows omitted.

### Block 488 `0x370f18` events=8350 rows=334 terminal=fallthrough

| VM IP | Kind | Source | Target | Delta | Events | IR |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| `0x370f18` | `exact_instruction` | 171 | 199 | `+0x2` | 25 | `next = 199@0xa0631:25, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x370f1a` | `exact_instruction` | 199 | 333 | `+0x3` | 25 | `next = 333@0xbd8af:25, ip += +0x3; dispatch_model=static_100` |
| `0x370f1d` | `exact_instruction` | 333 | 337 | `+0x4` | 25 | `next = 337@0xbec0e:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f21` | `exact_instruction` | 337 | 305 | `+0x4` | 25 | `next = 305@0xb78b0:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f25` | `exact_instruction` | 305 | 297 | `+0x4` | 25 | `next = 297@0xb64d7:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f29` | `exact_instruction` | 297 | 196 | `+0x3` | 25 | `next = 196@0x9fbcd:25, ip += +0x3; dispatch_model=static_100` |
| `0x370f2c` | `exact_instruction` | 196 | 64 | `+0x4` | 25 | `next = 64@0x85059:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f30` | `exact_instruction` | 64 | 315 | `+0x4` | 25 | `next = 315@0xb9451:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f34` | `exact_instruction` | 315 | 64 | `+0x4` | 25 | `next = 64@0x85059:25, ip += +0x4; dispatch_model=static_100; state=state_mixed` |
| `0x370f38` | `exact_instruction` | 64 | 18 | `+0x4` | 25 | `next = 18@0x7be9b:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f3c` | `exact_instruction` | 18 | 157 | `+0x3` | 25 | `next = 157@0x98a9a:25, ip += +0x3; dispatch_model=static_100` |
| `0x370f3f` | `exact_instruction` | 157 | 346 | `+0x4` | 25 | `next = 346@0xc0535:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f43` | `exact_instruction` | 346 | 337 | `+0x4` | 25 | `next = 337@0xbec0e:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f47` | `exact_instruction` | 337 | 168 | `+0x4` | 25 | `next = 168@0x9aa83:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f4b` | `exact_instruction` | 168 | 28 | `+0x4` | 25 | `next = 28@0x7e390:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f4f` | `exact_instruction` | 28 | 26 | `+0x3` | 25 | `next = 26@0x7dbbb:25, ip += +0x3; dispatch_model=static_100` |
| `0x370f52` | `exact_instruction` | 26 | 268 | `+0x4` | 25 | `next = 268@0xb0007:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f56` | `exact_instruction` | 268 | 337 | `+0x4` | 25 | `next = 337@0xbec0e:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f5a` | `exact_instruction` | 337 | 18 | `+0x4` | 25 | `next = 18@0x7be9b:25, ip += +0x4; dispatch_model=static_100` |
| `0x370f5e` | `exact_instruction` | 18 | 346 | `+0x3` | 25 | `next = 346@0xc0535:25, ip += +0x3; dispatch_model=static_100` |

... 314 more rows omitted.

### Block 163 `0x22ff44` events=7679 rows=30 terminal=decoded_control

| VM IP | Kind | Source | Target | Delta | Events | IR |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| `0x22ff44` | `exact_instruction` | 171 | 322 | `+0x2` | 256 | `next = 322@0xbb3c9:256, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x22ff46` | `exact_instruction` | 322 | 157 | `+0x4` | 256 | `next = 157@0x98a9a:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x22ff4a` | `exact_instruction` | 157 | 258 | `+0x4` | 256 | `next = 258@0xadf2c:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x22ff4e` | `exact_instruction` | 258 | 215 | `+0x4` | 256 | `next = 215@0xa4609:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x22ff52` | `exact_instruction` | 215 | 301 | `+0x3` | 256 | `next = 301@0xb708d:256, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x22ff55` | `exact_instruction` | 301 | 160 | `+0x5` | 256 | `next = 160@0x994cf:256, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x22ff5a` | `exact_instruction` | 160 | 172 | `+0x2` | 256 | `next = 172@0x9b68a:256, ip += +0x2; dispatch_model=static_100; state=state_const_post` |
| `0x22ff5c` | `exact_instruction` | 172 | 28 | `+0x4` | 256 | `next = 28@0x7e390:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x22ff60` | `exact_instruction` | 28 | 300 | `+0x3` | 256 | `next = 300@0xb6c36:256, ip += +0x3; dispatch_model=static_100; state=state_mixed` |
| `0x22ff63` | `exact_instruction` | 300 | 258 | `+0x4` | 256 | `next = 258@0xadf2c:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x22ff67` | `exact_instruction` | 258 | 237 | `+0x4` | 256 | `next = 237@0xa8e1f:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x22ff6b` | `exact_instruction` | 237 | 352 | `+0x5` | 256 | `next = 352@0xc1ec4:256, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x22ff70` | `exact_instruction` | 352 | 292 | `+0x2` | 256 | `next = 292@0xb540f:256, ip += +0x2; dispatch_model=static_100; state=state_mixed` |
| `0x22ff72` | `exact_instruction` | 292 | 185 | `+0x5` | 256 | `next = 185@0x9d964:256, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x22ff77` | `exact_instruction` | 185 | 332 | `+0x3` | 256 | `next = 332@0xbd36d:256, ip += +0x3; dispatch_model=static_100; state=state_add_const` |
| `0x22ff7a` | `exact_instruction` | 332 | 90 | `+0x4` | 256 | `next = 90@0x8b334:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x22ff7e` | `exact_instruction` | 90 | 49 | `+0x4` | 256 | `next = 49@0x82820:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |
| `0x22ff82` | `exact_instruction` | 49 | 144 | `+0x5` | 256 | `next = 144@0x95887:256, ip += +0x5; dispatch_model=static_100; state=state_add_const` |
| `0x22ff87` | `exact_instruction` | 144 | 258 | `+0x2` | 256 | `next = 258@0xadf2c:256, ip += +0x2; dispatch_model=static_100; state=state_mixed` |
| `0x22ff89` | `exact_instruction` | 258 | 43 | `+0x4` | 256 | `next = 43@0x8173d:256, ip += +0x4; dispatch_model=static_100; state=state_add_const` |

... 10 more rows omitted.

