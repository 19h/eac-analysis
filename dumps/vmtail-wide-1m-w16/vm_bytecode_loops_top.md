# VM Bytecode Loop Backedges

Recovered 59 block-level backedges from `dumps/vmtail-wide-1m-w16/vm_bytecode_ir.tsv`.

## By Latch Events

Top 40 loops.

| Latch Events | Body Events | Header | Latch | Body Blocks | Body Rows | Kind | IR |
| ---: | ---: | --- | --- | ---: | ---: | --- | --- |
| 255 | 7679 | `0x22ff44` b163 | `0x22ffb1` b163 -> `0x22ff44` | 1 | 30 | `long_branch_backedge` | `next = table[171], ip -= 0x6d` |
| 255 | 65279 | `0x22ffea` b165 | `0x2303ae` b166 -> `0x22ffea` | 2 | 255 | `long_branch_backedge` | `next = table[165], ip -= 0x3c4` |
| 125 | 14125 | `0x37142c` b489 | `0x371714` b491 -> `0x37142c` | 3 | 110 | `long_branch_backedge` | `next = table[354], ip -= 0x2e8` |
| 91 | 498494 | `0x310b1c` b225 | `0x315cc0` b228 -> `0x310b1c` | 4 | 5477 | `long_branch_backedge` | `next = table[171], ip -= 0x51a4` |
| 64 | 42679 | `0x230839` b169 | `0x231217` b171 -> `0x230839` | 3 | 666 | `long_branch_backedge` | `next = table[171], ip -= 0x9de` |
| 41 | 499 | `0x36b346` b438 | `0x36b386` b439 -> `0x36b346` | 2 | 13 | `long_branch_backedge` | `next = table[354], ip -= 0x40` |
| 39 | 475 | `0x3676e5` b410 | `0x367725` b411 -> `0x3676e5` | 2 | 13 | `long_branch_backedge` | `next = table[171], ip -= 0x40` |
| 25 | 47614 | `0x370256` b476 | `0x371a43` b495 -> `0x370256` | 20 | 1451 | `long_branch_backedge` | `next = table[171], ip -= 0x17ed` |
| 22 | 271 | `0x36eefe` b464 | `0x36ef3e` b465 -> `0x36eefe` | 2 | 13 | `long_branch_backedge` | `next = table[165], ip -= 0x40` |
| 18 | 223 | `0x3427b5` b371 | `0x3427f5` b372 -> `0x3427b5` | 2 | 13 | `long_branch_backedge` | `next = table[171], ip -= 0x40` |
| 17 | 211 | `0x33192d` b274 | `0x33196d` b275 -> `0x33192d` | 2 | 13 | `long_branch_backedge` | `next = table[171], ip -= 0x40` |
| 17 | 211 | `0x340f03` b356 | `0x340f43` b357 -> `0x340f03` | 2 | 13 | `long_branch_backedge` | `next = table[171], ip -= 0x40` |
| 14 | 175 | `0x334c63` b294 | `0x334ca3` b295 -> `0x334c63` | 2 | 13 | `long_branch_backedge` | `next = table[165], ip -= 0x40` |
| 13 | 163 | `0x30eea2` b218 | `0x30eee2` b219 -> `0x30eea2` | 2 | 13 | `long_branch_backedge` | `next = table[165], ip -= 0x40` |
| 10 | 127 | `0x34017b` b347 | `0x3401bb` b348 -> `0x34017b` | 2 | 13 | `long_branch_backedge` | `next = table[354], ip -= 0x40` |
| 10 | 127 | `0x341a2d` b362 | `0x341a6d` b363 -> `0x341a2d` | 2 | 13 | `long_branch_backedge` | `next = table[171], ip -= 0x40` |
| 10 | 127 | `0x343ef4` b382 | `0x343f34` b383 -> `0x343ef4` | 2 | 13 | `long_branch_backedge` | `next = table[354], ip -= 0x40` |
| 10 | 3809 | `0x36b592` b441 | `0x36bb16` b443 -> `0x36b592` | 3 | 362 | `long_branch_backedge` | `next = table[171], ip -= 0x584` |
| 9 | 7587 | `0x33dd15` b331 | `0x33e8d6` b338 -> `0x33dd15` | 8 | 751 | `long_branch_backedge` | `next = table[165], ip -= 0xbc1` |
| 9 | 3358 | `0x367931` b413 | `0x367e8e` b414 -> `0x367931` | 2 | 353 | `long_branch_backedge` | `next = table[165], ip -= 0x55d` |
| 7 | 91 | `0x31b303` b232 | `0x31b343` b233 -> `0x31b303` | 2 | 13 | `long_branch_backedge` | `next = table[171], ip -= 0x40` |
| 7 | 91 | `0x31bfed` b241 | `0x31c02d` b242 -> `0x31bfed` | 2 | 13 | `long_branch_backedge` | `next = table[171], ip -= 0x40` |
| 5 | 67 | `0x33f6c8` b341 | `0x33f708` b342 -> `0x33f6c8` | 2 | 13 | `long_branch_backedge` | `next = table[354], ip -= 0x40` |
| 5 | 1950 | `0x36f14a` b467 | `0x36f6a7` b468 -> `0x36f14a` | 2 | 353 | `long_branch_backedge` | `next = table[165], ip -= 0x55d` |
| 4 | 603 | `0xd0c5f` b1 | `0xd0eab` b3 -> `0xd0c5f` | 3 | 150 | `long_branch_backedge` | `next = table[354], ip -= 0x24c` |
| 4 | 1643 | `0x331b79` b277 | `0x3320fd` b279 -> `0x331b79` | 3 | 362 | `long_branch_backedge` | `next = table[354], ip -= 0x584` |
| 4 | 2008 | `0x338682` b308 | `0x338e10` b310 -> `0x338682` | 3 | 498 | `long_branch_backedge` | `next = table[354], ip -= 0x78e` |
| 4 | 1972 | `0x33be49` b325 | `0x33c5b0` b326 -> `0x33be49` | 2 | 489 | `long_branch_backedge` | `next = table[354], ip -= 0x767` |
| 4 | 1598 | `0x34114f` b359 | `0x3416ac` b360 -> `0x34114f` | 2 | 353 | `long_branch_backedge` | `next = table[165], ip -= 0x55d` |
| 4 | 1598 | `0x342a01` b374 | `0x342f5e` b375 -> `0x342a01` | 2 | 353 | `long_branch_backedge` | `next = table[171], ip -= 0x55d` |
| 3 | 1242 | `0x30f0ee` b221 | `0x30f645` b222 -> `0x30f0ee` | 2 | 352 | `long_branch_backedge` | `next = table[354], ip -= 0x557` |
| 3 | 569 | `0x31bbae` b238 | `0x31be7c` b239 -> `0x31bbae` | 2 | 184 | `long_branch_backedge` | `next = table[165], ip -= 0x2ce` |
| 3 | 569 | `0x31c918` b248 | `0x31cbe6` b249 -> `0x31c918` | 2 | 184 | `long_branch_backedge` | `next = table[171], ip -= 0x2ce` |
| 3 | 1246 | `0x334eaf` b297 | `0x33540c` b298 -> `0x334eaf` | 2 | 353 | `long_branch_backedge` | `next = table[171], ip -= 0x55d` |
| 3 | 569 | `0x36152c` b389 | `0x3617fa` b390 -> `0x36152c` | 2 | 184 | `long_branch_backedge` | `next = table[171], ip -= 0x2ce` |
| 3 | 569 | `0x362c9b` b395 | `0x362f69` b396 -> `0x362c9b` | 2 | 184 | `long_branch_backedge` | `next = table[171], ip -= 0x2ce` |
| 3 | 569 | `0x368007` b416 | `0x3682d5` b417 -> `0x368007` | 2 | 184 | `long_branch_backedge` | `next = table[354], ip -= 0x2ce` |
| 3 | 2529 | `0x368f60` b426 | `0x369b20` b433 -> `0x368f60` | 8 | 751 | `long_branch_backedge` | `next = table[165], ip -= 0xbc0` |
| 3 | 2529 | `0x36c9b1` b452 | `0x36d571` b459 -> `0x36c9b1` | 8 | 751 | `long_branch_backedge` | `next = table[354], ip -= 0xbc0` |
| 2 | 386 | `0x335585` b300 | `0x335853` b301 -> `0x335585` | 2 | 184 | `long_branch_backedge` | `next = table[354], ip -= 0x2ce` |

## By Body Events

Top 40 loops.

| Latch Events | Body Events | Header | Latch | Body Blocks | Body Rows | Kind | IR |
| ---: | ---: | --- | --- | ---: | ---: | --- | --- |
| 1 | 541190 | `0x30e872` b217 | `0x34355f` b379 -> `0x30e872` | 163 | 27744 | `sampled_operand_backedge` | `sampled operand footprint 0xa; observed target table[42], delta -0x34ced` |
| 91 | 498494 | `0x310b1c` b225 | `0x315cc0` b228 -> `0x310b1c` | 4 | 5477 | `long_branch_backedge` | `next = table[171], ip -= 0x51a4` |
| 1 | 68567 | `0x36504c` b405 | `0x371fd7` b498 -> `0x36504c` | 94 | 9006 | `sampled_operand_backedge` | `sampled operand footprint 0x6; observed target table[310], delta -0xcf8b` |
| 255 | 65279 | `0x22ffea` b165 | `0x2303ae` b166 -> `0x22ffea` | 2 | 255 | `long_branch_backedge` | `next = table[165], ip -= 0x3c4` |
| 25 | 47614 | `0x370256` b476 | `0x371a43` b495 -> `0x370256` | 20 | 1451 | `long_branch_backedge` | `next = table[171], ip -= 0x17ed` |
| 64 | 42679 | `0x230839` b169 | `0x231217` b171 -> `0x230839` | 3 | 666 | `long_branch_backedge` | `next = table[171], ip -= 0x9de` |
| 1 | 17246 | `0x364e5f` b403 | `0x36daed` b462 -> `0x364e5f` | 60 | 5905 | `sampled_operand_backedge` | `sampled operand footprint 0x6; observed target table[310], delta -0x8c8e` |
| 1 | 16144 | `0x3369fc` b305 | `0x33e9e2` b339 -> `0x3369fc` | 35 | 5929 | `sampled_operand_backedge` | `sampled operand footprint 0x6; observed target table[169], delta -0x7fe6` |
| 125 | 14125 | `0x37142c` b489 | `0x371714` b491 -> `0x37142c` | 3 | 110 | `long_branch_backedge` | `next = table[354], ip -= 0x2e8` |
| 1 | 8937 | `0x364c72` b401 | `0x36a09c` b436 -> `0x364c72` | 36 | 3307 | `sampled_operand_backedge` | `sampled operand footprint 0x6; observed target table[310], delta -0x542a` |
| 255 | 7679 | `0x22ff44` b163 | `0x22ffb1` b163 -> `0x22ff44` | 1 | 30 | `long_branch_backedge` | `next = table[171], ip -= 0x6d` |
| 9 | 7587 | `0x33dd15` b331 | `0x33e8d6` b338 -> `0x33dd15` | 8 | 751 | `long_branch_backedge` | `next = table[165], ip -= 0xbc1` |
| 1 | 6197 | `0x26cd71` b190 | `0x26f077` b191 -> `0x26cd71` | 2 | 1550 | `sampled_operand_backedge` | `sampled operand footprint 0x6; observed target table[86], delta -0x2306` |
| 10 | 3809 | `0x36b592` b441 | `0x36bb16` b443 -> `0x36b592` | 3 | 362 | `long_branch_backedge` | `next = table[171], ip -= 0x584` |
| 9 | 3358 | `0x367931` b413 | `0x367e8e` b414 -> `0x367931` | 2 | 353 | `long_branch_backedge` | `next = table[165], ip -= 0x55d` |
| 3 | 2529 | `0x368f60` b426 | `0x369b20` b433 -> `0x368f60` | 8 | 751 | `long_branch_backedge` | `next = table[165], ip -= 0xbc0` |
| 3 | 2529 | `0x36c9b1` b452 | `0x36d571` b459 -> `0x36c9b1` | 8 | 751 | `long_branch_backedge` | `next = table[354], ip -= 0xbc0` |
| 4 | 2008 | `0x338682` b308 | `0x338e10` b310 -> `0x338682` | 3 | 498 | `long_branch_backedge` | `next = table[354], ip -= 0x78e` |
| 4 | 1972 | `0x33be49` b325 | `0x33c5b0` b326 -> `0x33be49` | 2 | 489 | `long_branch_backedge` | `next = table[354], ip -= 0x767` |
| 5 | 1950 | `0x36f14a` b467 | `0x36f6a7` b468 -> `0x36f14a` | 2 | 353 | `long_branch_backedge` | `next = table[165], ip -= 0x55d` |
| 1 | 1878 | `0x292f3e` b195 | `0x2c13cd` b216 -> `0x292f3e` | 22 | 1537 | `long_branch_backedge` | `next = table[171], ip -= 0x2e48f` |
| 4 | 1643 | `0x331b79` b277 | `0x3320fd` b279 -> `0x331b79` | 3 | 362 | `long_branch_backedge` | `next = table[354], ip -= 0x584` |
| 4 | 1598 | `0x34114f` b359 | `0x3416ac` b360 -> `0x34114f` | 2 | 353 | `long_branch_backedge` | `next = table[165], ip -= 0x55d` |
| 4 | 1598 | `0x342a01` b374 | `0x342f5e` b375 -> `0x342a01` | 2 | 353 | `long_branch_backedge` | `next = table[171], ip -= 0x55d` |
| 3 | 1246 | `0x334eaf` b297 | `0x33540c` b298 -> `0x334eaf` | 2 | 353 | `long_branch_backedge` | `next = table[171], ip -= 0x55d` |
| 3 | 1242 | `0x30f0ee` b221 | `0x30f645` b222 -> `0x30f0ee` | 2 | 352 | `long_branch_backedge` | `next = table[354], ip -= 0x557` |
| 2 | 966 | `0x360dfd` b386 | `0x3613b3` b387 -> `0x360dfd` | 2 | 377 | `long_branch_backedge` | `next = table[171], ip -= 0x5b6` |
| 2 | 927 | `0x3403c7` b350 | `0x34094b` b351 -> `0x3403c7` | 2 | 364 | `long_branch_backedge` | `next = table[354], ip -= 0x584` |
| 2 | 927 | `0x341c79` b365 | `0x3421fd` b366 -> `0x341c79` | 2 | 364 | `long_branch_backedge` | `next = table[354], ip -= 0x584` |
| 4 | 603 | `0xd0c5f` b1 | `0xd0eab` b3 -> `0xd0c5f` | 3 | 150 | `long_branch_backedge` | `next = table[354], ip -= 0x24c` |
| 1 | 577 | `0x31c239` b244 | `0x31c79f` b246 -> `0x31c239` | 3 | 355 | `long_branch_backedge` | `next = table[165], ip -= 0x566` |
| 3 | 569 | `0x31bbae` b238 | `0x31be7c` b239 -> `0x31bbae` | 2 | 184 | `long_branch_backedge` | `next = table[165], ip -= 0x2ce` |
| 3 | 569 | `0x31c918` b248 | `0x31cbe6` b249 -> `0x31c918` | 2 | 184 | `long_branch_backedge` | `next = table[171], ip -= 0x2ce` |
| 3 | 569 | `0x36152c` b389 | `0x3617fa` b390 -> `0x36152c` | 2 | 184 | `long_branch_backedge` | `next = table[171], ip -= 0x2ce` |
| 3 | 569 | `0x362c9b` b395 | `0x362f69` b396 -> `0x362c9b` | 2 | 184 | `long_branch_backedge` | `next = table[171], ip -= 0x2ce` |
| 3 | 569 | `0x368007` b416 | `0x3682d5` b417 -> `0x368007` | 2 | 184 | `long_branch_backedge` | `next = table[354], ip -= 0x2ce` |
| 1 | 533 | `0x362615` b392 | `0x362b22` b393 -> `0x362615` | 2 | 333 | `long_branch_backedge` | `next = table[354], ip -= 0x50d` |
| 1 | 511 | `0x31b54f` b235 | `0x31ba35` b236 -> `0x31b54f` | 2 | 322 | `long_branch_backedge` | `next = table[354], ip -= 0x4e6` |
| 1 | 511 | `0x33f914` b344 | `0x33fdfa` b345 -> `0x33f914` | 2 | 322 | `long_branch_backedge` | `next = table[171], ip -= 0x4e6` |
| 1 | 509 | `0x363d84` b398 | `0x364264` b399 -> `0x363d84` | 2 | 321 | `long_branch_backedge` | `next = table[165], ip -= 0x4e0` |

