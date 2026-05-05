# Static-Only Handler Closure Queue

Ranked queue for converting dispatch entries that are static-only in the current trace matrix into stronger C-shaped handler evidence. Lower ranks are smaller, cleaner RetDec ranges.

| metric | value |
| --- | ---: |
| static-only queue rows | 155 |
| tier0 single-function small | 11 |
| tier1 single-function medium | 43 |
| tier2 small shared range | 15 |
| tier3 multi-function shared range | 40 |
| tier4 call/ret side-effect | 37 |
| tier5 large/static deferred | 9 |
| single-function rows | 65 |
| multi-function rows | 90 |
| rows with native call/ret side effects | 37 |

## Top Queue

| rank | entry | target | span | funcs | sidecar | class | next action |
| ---: | ---: | --- | ---: | ---: | --- | --- | --- |
| 1 | 57 | 0x841f9 | 157 | 1 | `vm_unobserved_handlers_retdec_batch00.c` | `tier0_single_function_small_static_replay` | `inline_retdec_function_into_handler_model` |
| 2 | 255 | 0xad768 | 238 | 1 | `vm_unobserved_handlers_retdec_batch00.c` | `tier0_single_function_small_static_replay` | `inline_retdec_function_into_handler_model` |
| 3 | 96 | 0x8c4cf | 246 | 1 | `vm_unobserved_handlers_retdec_batch00.c` | `tier0_single_function_small_static_replay` | `inline_retdec_function_into_handler_model` |
| 4 | 71 | 0x86766 | 353 | 1 | `vm_unobserved_handlers_retdec_batch00.c` | `tier0_single_function_small_static_replay` | `inline_retdec_function_into_handler_model` |
| 5 | 73 | 0x86be4 | 364 | 1 | `vm_unobserved_handlers_retdec_batch00.c` | `tier0_single_function_small_static_replay` | `inline_retdec_function_into_handler_model` |
| 6 | 339 | 0xbf2d5 | 365 | 1 | `vm_unobserved_handlers_retdec_batch00.c` | `tier0_single_function_small_static_replay` | `inline_retdec_function_into_handler_model` |
| 7 | 324 | 0xbb8aa | 370 | 1 | `vm_unobserved_handlers_retdec_batch00.c` | `tier0_single_function_small_static_replay` | `inline_retdec_function_into_handler_model` |
| 8 | 38 | 0x80d79 | 394 | 1 | `vm_unobserved_handlers_retdec_batch00.c` | `tier0_single_function_small_static_replay` | `inline_retdec_function_into_handler_model` |
| 9 | 67 | 0x859fc | 409 | 1 | `vm_unobserved_handlers_retdec_batch00.c` | `tier0_single_function_small_static_replay` | `inline_retdec_function_into_handler_model` |
| 10 | 138 | 0x94c3a | 431 | 1 | `vm_unobserved_handlers_retdec_batch00.c` | `tier0_single_function_small_static_replay` | `inline_retdec_function_into_handler_model` |
| 11 | 47 | 0x822bc | 456 | 1 | `vm_unobserved_handlers_retdec_batch00.c` | `tier0_single_function_small_static_replay` | `inline_retdec_function_into_handler_model` |
| 12 | 159 | 0x992cd | 526 | 1 | `vm_unobserved_handlers_retdec_batch00.c` | `tier1_single_function_medium_static_replay` | `inline_retdec_function_after_operand_rewrite` |
| 13 | 244 | 0xaaf3e | 528 | 1 | `vm_unobserved_handlers_retdec_batch01.c` | `tier1_single_function_medium_static_replay` | `inline_retdec_function_after_operand_rewrite` |
| 14 | 12 | 0x7acd8 | 541 | 1 | `vm_unobserved_handlers_retdec_batch01.c` | `tier1_single_function_medium_static_replay` | `inline_retdec_function_after_operand_rewrite` |
| 15 | 234 | 0xa823e | 542 | 1 | `vm_unobserved_handlers_retdec_batch01.c` | `tier1_single_function_medium_static_replay` | `inline_retdec_function_after_operand_rewrite` |
| 16 | 213 | 0xa3dc7 | 559 | 1 | `vm_unobserved_handlers_retdec_batch01.c` | `tier1_single_function_medium_static_replay` | `inline_retdec_function_after_operand_rewrite` |
| 17 | 100 | 0x8cc81 | 572 | 1 | `vm_unobserved_handlers_retdec_batch01.c` | `tier1_single_function_medium_static_replay` | `inline_retdec_function_after_operand_rewrite` |
| 18 | 224 | 0xa68c2 | 580 | 1 | `vm_unobserved_handlers_retdec_batch01.c` | `tier1_single_function_medium_static_replay` | `inline_retdec_function_after_operand_rewrite` |
| 19 | 63 | 0x84e1d | 584 | 1 | `vm_unobserved_handlers_retdec_batch01.c` | `tier1_single_function_medium_static_replay` | `inline_retdec_function_after_operand_rewrite` |
| 20 | 182 | 0x9d24c | 598 | 1 | `vm_unobserved_handlers_retdec_batch01.c` | `tier1_single_function_medium_static_replay` | `inline_retdec_function_after_operand_rewrite` |
