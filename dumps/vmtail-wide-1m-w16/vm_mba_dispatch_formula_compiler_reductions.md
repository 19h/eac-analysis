# MBA Dispatch Formula Compiler Reductions

This pass uses the full, unclipped Python transfer-expression extraction, translates GCC -O3 assembly for each dispatch slot expression back into C-like arithmetic, and proves equivalence with Z3. The proof covers the slot expression only. The `observed_expr_count` prefix is the number of observed rows using that expression, not a target entry.

## Summary

| metric | value |
| --- | --- |
| algebraic dispatch entries | 160 |
| dispatch expression variants | 208 |
| reduction statuses | compiler_expression_recovered:208 |
| proof statuses | candidate_refuted:202; proved_equivalent:6 |
| proved and shorter | 0 |
| target binding statuses | target_binding_not_validated:8; target_binding_validated:200 |
| full transfer input | dumps/vmtail-wide-1m-w16/vm_static_transfer_expr_full_python.tsv |
| harness | dumps/vmtail-wide-1m-w16/vm_mba_dispatch_formula_compiler_reducer_harness.c |
| assembly | dumps/vmtail-wide-1m-w16/vm_mba_dispatch_formula_compiler_reducer.s |
| proof dir | dumps/vmtail-wide-1m-w16/vm_mba_dispatch_formula_compiler_proofs |

## Entry Summary

| entry | kind | variants | proofs | target binding | preview |
| --- | --- | --- | --- | --- | --- |
| 0 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 3 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 13 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 17 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 18 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 20 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 26 | slot_multi_path | 4 | candidate_refuted:4 | target_binding_validated:4 |  |
| 30 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 31 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 33 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 35 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 36 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 37 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 40 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 43 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 48 | slot_multi_path | 3 | candidate_refuted:3 | target_binding_validated:3 |  |
| 49 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 52 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 54 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 56 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 62 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 64 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 65 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 66 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 70 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 74 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 78 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_not_validated:1 |  |
| 79 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 82 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 83 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 88 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 90 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 91 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 92 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 94 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 95 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_not_validated:1 |  |
| 99 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 101 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 102 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 107 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 108 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 114 | slot_multi_path | 4 | candidate_refuted:4 | target_binding_validated:4 |  |
| 118 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 119 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 121 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 122 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 123 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 124 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 125 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 127 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 128 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 129 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 130 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 131 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 136 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 140 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 144 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 146 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 148 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 151 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 153 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 154 | slot_multi_path | 3 | candidate_refuted:3 | target_binding_validated:3 |  |
| 157 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 158 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 160 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 161 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 167 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 168 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 172 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((u16_2 & 0xffffu) & 0xffffu) ^ 0xa33u |
| 173 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 174 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 176 | slot_multi_path | 2 | candidate_refuted:2 | target_binding_validated:2 |  |
| 179 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 180 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 181 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 183 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 184 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 185 | slot_multi_path | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 186 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |
| 187 | slot_mba_stateful | 1 | candidate_refuted:1 | target_binding_validated:1 |  |

## Caveat

`proved_equivalent` proves only that the reduced slot expression matches the original slot expression under byte/u16 range constraints. Rows with `target_binding_not_validated` still need dispatch-table/second-stage target binding work. Slot-unknown opcodes are not solved by this pass.
