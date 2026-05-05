# Static-Only Tier5 Large Models

Native C-generated C/TSV evidence for the remaining large static-only single-function handlers.
These rows are linked to their RetDec sidecars and emitted as conservative model functions; no dispatch slot is promoted without a clean primary tail.

| metric | value |
| --- | ---: |
| tier5 rows | 9 |
| total native span bytes | 12514 |
| total native instructions | 2704 |
| max native span bytes | 1876 |
| candidate slot rows | 0 |
| executable dispatch-table slot rows | 0 |

| rank | entry | primary function | span | insns | large status | slot status | tail |
| ---: | ---: | --- | ---: | ---: | --- | --- | --- |
| 110 | 76 | `function_87d17` | 1059 | 234 | `large_single_function_state_machine` | `non_dispatch_frame_cell_return` | updates state/flags through two immediate-mixed rounds, ip += 6, returns frame+113 |
| 111 | 293 | `function_b593f` | 1098 | 233 | `large_single_function_predicate_machine` | `g2_mask_return_no_dispatch_slot` | updates frame[96], flags, state, ip += 10, returns g2 mask |
| 112 | 238 | `function_a94a5` | 1155 | 255 | `large_single_function_conditional_store` | `state_effect_only_no_dispatch_return` | optional operand-selected frame store, state/flag rewrite, ip += 5, returns result value |
| 113 | 306 | `function_b7bba` | 1207 | 258 | `large_single_function_noisy_dispatch_base_return` | `noisy_dispatch_base_candidate_comment_only` | references dispatch base but mixes g1/g2/g3 masks, frame pointer, wide constants, and state before return |
| 114 | 355 | `function_c240f` | 1301 | 283 | `large_single_function_conditional_store` | `masked_small_return_no_dispatch_slot` | optional operand-selected frame store, state rewrite, ip += 5, returns masked low pointer residue |
| 115 | 23 | `function_7d007` | 1521 | 329 | `large_single_function_flag_stack_cell` | `frame_ip_cell_return_no_dispatch_slot` | builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns frame+10 |
| 116 | 325 | `function_bba0f` | 1643 | 353 | `large_single_function_flag_stack_cell` | `raw_predicate_return_no_dispatch_slot` | builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns raw predicate |
| 117 | 236 | `function_a87b6` | 1654 | 351 | `large_single_function_flag_stack_cell` | `constant_return_no_dispatch_slot` | builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns constant 124 |
| 118 | 156 | `function_98354` | 1876 | 408 | `large_single_function_flag_stack_cell` | `constant_return_no_dispatch_slot` | builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns constant 1 |
