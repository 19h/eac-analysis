# Static-Only Tier4 Call/Ret Models

Native C-generated C/TSV evidence for tier4 static-only ranges with native call or ret side effects.
Rows are preserved as executable C model functions, but dispatch slots stay comment-only unless a primary RetDec tail is proven clean.

| metric | value |
| --- | ---: |
| tier4 rows | 37 |
| native call rows | 1 |
| multi-ret rows | 3 |
| candidate slot rows | 3 |
| executable dispatch-table slot rows | 0 |

| rank | entry | primary function | funcs | calls | rets | call/ret status | slot status | slot expr |
| ---: | ---: | --- | ---: | ---: | ---: | --- | --- | --- |
| 119 | 116 | `function_90a1b` | 2 | 0 | 1 | `native_ret_frame_cell` | `frame_cell_return_no_dispatch_slot` | `` |
| 120 | 309 | `function_b84a7` | 2 | 0 | 1 | `native_ret_frame_cell` | `frame_cell_return_no_dispatch_slot` | `` |
| 121 | 265 | `function_af57f` | 1 | 2 | 0 | `native_call_side_effect_collapsed_by_retdec` | `state_effect_only_no_dispatch_return` | `` |
| 122 | 233 | `function_a81c4` | 2 | 0 | 1 | `native_ret_result_prefix` | `state_effect_only_no_dispatch_return` | `` |
| 123 | 227 | `function_a6f03` | 2 | 0 | 1 | `native_ret_result_prefix` | `state_effect_only_no_dispatch_return` | `` |
| 124 | 58 | `function_8428c` | 2 | 0 | 1 | `native_ret_result_prefix` | `state_effect_only_no_dispatch_return` | `` |
| 125 | 288 | `function_b4980` | 3 | 0 | 1 | `native_ret_stack_prefix` | `state_pointer_return_no_dispatch_slot` | `` |
| 126 | 110 | `function_8f834` | 3 | 0 | 1 | `native_ret_prefix_over_clean_child_slot` | `overlap_dispatch_table_slot_comment_only` | `((state0 ^ s16(ip+3)) - 0x29ce8b8a) & 0xffff` |
| 127 | 126 | `function_92615` | 2 | 0 | 1 | `native_ret_stack_prefix` | `state_pointer_return_no_dispatch_slot` | `` |
| 128 | 303 | `function_b769c` | 4 | 0 | 1 | `native_ret_result_prefix` | `masked_noisy_overlap_return_no_dispatch_slot` | `` |
| 129 | 342 | `function_bfb99` | 2 | 0 | 1 | `native_ret_result_prefix` | `state_effect_only_no_dispatch_return` | `` |
| 130 | 353 | `function_c21c3` | 4 | 0 | 1 | `native_ret_result_prefix` | `state_effect_only_no_dispatch_return` | `` |
| 131 | 15 | `function_7b6cb` | 2 | 0 | 1 | `native_ret_frame_cell` | `frame_cell_return_no_dispatch_slot` | `` |
| 132 | 53 | `function_8371d` | 2 | 0 | 1 | `native_ret_frame_cell` | `frame_cell_return_no_dispatch_slot` | `` |
| 133 | 163 | `function_99e21` | 2 | 0 | 1 | `native_ret_prefix_over_raw_child_slot` | `overlap_raw_slot_comment_only` | `((((state0 - flags0 - 0x05d1cfd6) | 0x7c3f7914) ^ s16(ip+0)) - 0x51b094c3) & 0xffff` |
| 134 | 252 | `function_acefd` | 2 | 0 | 1 | `native_ret_frame_cell` | `frame_cell_return_no_dispatch_slot` | `` |
| 135 | 98 | `function_8c8ec` | 3 | 0 | 1 | `native_ret_stack_prefix` | `overlap_dispatch_deref_comment_only` | `` |
| 136 | 149 | `function_96eb4` | 2 | 0 | 1 | `native_ret_result_prefix` | `state_effect_only_no_dispatch_return` | `` |
| 137 | 226 | `function_a6e55` | 3 | 0 | 2 | `native_double_ret_shared_prefix` | `multi_ret_side_effect_no_dispatch_slot` | `` |
| 138 | 7 | `function_799c7` | 3 | 0 | 1 | `native_ret_prefix_over_clean_child_slot` | `overlap_dispatch_table_slot_comment_only` | `(s16(ip+0) + 0x4c6) & 0xffff` |
| 139 | 139 | `function_94ddf` | 3 | 0 | 1 | `native_ret_result_prefix` | `raw_mod_overlap_return_comment_only` | `` |
| 140 | 205 | `function_a1a95` | 3 | 0 | 1 | `native_ret_stack_prefix` | `masked_noisy_overlap_return_no_dispatch_slot` | `` |
| 141 | 143 | `function_957d9` | 4 | 0 | 1 | `native_ret_stack_prefix` | `masked_noisy_overlap_return_no_dispatch_slot` | `` |
| 142 | 202 | `function_a13d6` | 2 | 0 | 1 | `native_ret_stack_prefix` | `state_effect_only_no_dispatch_return` | `` |
| 143 | 270 | `function_b0930` | 3 | 0 | 1 | `native_ret_prefix_over_helper_call_stub` | `state_effect_only_no_dispatch_return` | `` |
| 144 | 29 | `function_7e7cd` | 3 | 0 | 1 | `native_ret_result_prefix` | `masked_noisy_overlap_return_no_dispatch_slot` | `` |
| 145 | 1 | `function_78835` | 4 | 0 | 1 | `native_ret_stack_prefix` | `state_effect_only_no_dispatch_return` | `` |
| 146 | 133 | `function_93ff3` | 4 | 0 | 1 | `native_ret_prefix_over_noisy_child` | `noisy_dispatch_base_candidate_comment_only` | `` |
| 147 | 113 | `function_9026f` | 2 | 0 | 1 | `native_ret_stack_prefix` | `state_effect_only_no_dispatch_return` | `` |
| 148 | 21 | `function_7ca98` | 4 | 0 | 1 | `native_ret_frame_cell` | `frame_cell_return_no_dispatch_slot` | `` |
| 149 | 219 | `function_a517b` | 2 | 0 | 1 | `native_ret_frame_cell` | `frame_cell_return_no_dispatch_slot` | `` |
| 150 | 11 | `function_7a4d8` | 1 | 0 | 1 | `native_ret_with_early_masked_return` | `early_masked_native_return_no_dispatch_slot` | `` |
| 151 | 132 | `function_93f79` | 5 | 0 | 2 | `native_double_ret_shared_prefix` | `multi_ret_side_effect_no_dispatch_slot` | `` |
| 152 | 194 | `function_9faa4` | 4 | 0 | 2 | `native_double_ret_shared_prefix` | `multi_ret_side_effect_no_dispatch_slot` | `` |
| 153 | 318 | `function_ba683` | 3 | 0 | 1 | `native_ret_stack_prefix` | `masked_noisy_overlap_return_no_dispatch_slot` | `` |
| 154 | 93 | `function_8bcef` | 3 | 0 | 1 | `native_ret_result_prefix` | `masked_noisy_overlap_return_no_dispatch_slot` | `` |
| 155 | 32 | `function_7efa8` | 3 | 0 | 1 | `native_ret_with_early_masked_return` | `early_masked_native_return_no_dispatch_slot` | `` |
