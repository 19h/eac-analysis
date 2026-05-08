# MBA Dispatch Formula Compiler Reductions

This pass uses the full, unclipped Python transfer-expression extraction, translates GCC -O3 assembly for each dispatch slot expression back into C-like arithmetic, and proves equivalence with Z3. The proof covers the slot expression only. The `observed_expr_count` prefix is the number of observed rows using that expression, not a target entry.

## Summary

| metric | value |
| --- | --- |
| algebraic dispatch entries | 160 |
| dispatch expression variants | 208 |
| reduction statuses | compiler_expression_recovered:208 |
| proof statuses | proved_equivalent:208 |
| proved and shorter | 185 |
| target binding statuses | target_binding_not_validated:8; target_binding_validated:200 |
| full transfer input | dumps/vmtail-wide-1m-w16/vm_static_transfer_expr_full_python.tsv |
| harness | dumps/vmtail-wide-1m-w16/vm_mba_dispatch_formula_compiler_reducer_harness.c |
| assembly | dumps/vmtail-wide-1m-w16/vm_mba_dispatch_formula_compiler_reducer.s |
| proof dir | dumps/vmtail-wide-1m-w16/vm_mba_dispatch_formula_compiler_proofs |

## Entry Summary

| entry | kind | variants | proofs | target binding | preview |
| --- | --- | --- | --- | --- | --- |
| 0 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 48=(((0xdae5febfu + (state0 ^ 0x1966e0e7u)) + u16_0) & 0xffffu) & 0xffffu |
| 3 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((((((((state0 - 0x1c03cc82u) - flags0) - flags0) \| 0x38c49877u) - 0x2652a796u) ^ u16_0) + 0x4bc0d288u) & 0xffffu) & 0xffffu |
| 13 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 5=(((u16_0 - 0x5ad3c2e8u) - (((((0xfe3c9aabu + flags0) \| 0x779fee71u) - 0x2de02e8u) ^ state0) ^ 0x67934603u)) & 0xffffu) & 0xffffu |
| 17 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((u16_3 - ((((u16_0 ^ (state0 \| (flags0 ^ 0x4365071cu))) + (flags0 ^ 0x4365071cu)) & (state0 \| (flags0 ^ 0x4365071cu))) ^ 0x95f9698... |
| 18 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 99=((u16_0 - (((state0 & flags0) - 0x6382ce20u) & flags0)) & 0xffffu) & 0xffffu ; 29=((u16_0 - (((state0 & ((flags0 \| 0x954df65u) + 0x5b... |
| 20 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 67=((((((((state0 \| flags0) \| 0x180e72f2u) - (flags0 & 0x1fa2014fu)) - 0x36332ac8u) \| 0x38e67f26u) - flags0) ^ u16_2) & 0xffffu) & 0xf... |
| 26 | slot_multi_path | 4 | proved_equivalent:4 | target_binding_validated:4 | 48=(((((0x8dd67cc5u + (((((flags0 - (state0 ^ 0x5fcdb203u)) ^ ((0xb8ed9b36u + state0) \| 0x2a01f150u)) \| 0x7bdf07f3u) + 0x104dd6dfu) ^ 0... |
| 30 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 113=(((((state0 \| flags0) + 0x64fd160cu) ^ u16_0) + 0x5903fc84u) & 0xffffu) & 0xffffu ; 15=((((((flags0 & 0x614d4b17u) \| state0) + 0x64... |
| 31 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 2=(((state0 + u16_2) - 0x72a124afu) & 0xffffu) & 0xffffu |
| 33 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((0x2d0713f3u + (state0 \| 0x15422921u)) + u16_2) & 0xffffu) & 0xffffu |
| 35 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 1=(((u16_0 - state0) ^ 0x2c39edf6u) & 0xffffu) & 0xffffu |
| 36 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 4=((u16_0 - ((((state0 + flags0) ^ (flags0 & 0x30820186u)) ^ 0x72d0ef43u) \| 0x7af5a860u)) & 0xffffu) & 0xffffu |
| 37 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((((state0 - 0x53cf0a86u) - flags0) ^ u16_0) ^ 0x384e1c86u) & 0xffffu) & 0xffffu |
| 40 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((state0 ^ u16_4) & 0xffffu) & 0xffffu |
| 43 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((u16_0 ^ u16_2) - 0x64d373dcu) & 0xffffu) & 0xffffu |
| 48 | slot_multi_path | 3 | proved_equivalent:3 | target_binding_validated:3 | 78=(((((((((((u16_3 + state0) ^ flags0) & state0) - (flags0 & 0x6134e706u)) + 0x4f1a7667u) & (flags0 & 0x6134e706u)) ^ 0x79fc8ff4u) \| (0... |
| 49 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((0x76278178u + (u16_1 + flags0)) + (flags0 & state0)) & 0xffffu) & 0xffffu |
| 52 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((state0 + u16_0) ^ 0x7823b2dau) & 0xffffu) & 0xffffu |
| 54 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 1=(((((state0 & flags0) - 0x68b4ad2fu) ^ u16_0) ^ 0x437360e7u) & 0xffffu) & 0xffffu |
| 56 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 6=(((u16_0 - state0) ^ 0x5380ff71u) & 0xffffu) & 0xffffu |
| 62 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 36=(((((((flags0 + 0xd90ded5u) ^ u16_2) \| state0) ^ u16_0) ^ 0x5dbb6647u) + 0x7ebb48a2u) & 0xffffu) & 0xffffu |
| 64 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 77=(((u16_0 + 0x2701cdcdu) - (((0x869eb21bu + state0) ^ (u16_2 + flags0)) ^ (flags0 + 0x729dddb0u))) & 0xffffu) & 0xffffu ; 51=(((u16_0 +... |
| 65 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 9=(((state0 ^ u16_0) - 0x5db84d25u) & 0xffffu) & 0xffffu |
| 66 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 99=((((0xc32e7eadu + (flags0 ^ 0x42a6ffd6u)) + u16_0) - ((((state0 & 0x2f6cb1f6u) - (b2 ^ (state0 & 0x2f6cb1f6u))) ^ 0x745ff1d2u) & 0x13d... |
| 70 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((0x37bbf653u + u16_0) - (((((((0xfb3ee75du + flags0) + state0) ^ state0) \| 0x58fb4a0cu) ^ ((state0 - ((((0xfb3ee75du + flags0) + s... |
| 74 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 25=(((u16_0 - 0x33d7fc12u) - (((0x619b65dcu + state0) - ((state0 - 0x7af5a4e2u) & flags0)) ^ 0x65dcaffcu)) & 0xffffu) & 0xffffu |
| 78 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_not_validated:1 | 1=(((((((((state0 - (flags0 ^ 0x6e42b8abu)) & 0xd4da920u) \| (flags0 ^ 0x2e238e7eu)) - 0x6110d031u) ^ flags0) ^ 0x33b51ad5u) + 0x60a9dba6... |
| 79 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((((((((state0 - (flags0 ^ 0x6e42b8abu)) & 0xd4da920u) \| (flags0 ^ 0x2e238e7eu)) - 0x6110d031u) ^ flags0) ^ 0x33b51ad5u) + 0x60a9db... |
| 82 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((0x5cc5e4d8u + (flags0 + state0)) + u16_0) & 0xffffu) & 0xffffu |
| 83 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((((0x2c3e26b4u + ((state0 & 0x122d7f19u) \| flags0)) + u16_0) ^ 0x4b7ebb84u) & 0xffffu) & 0xffffu |
| 88 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((((0xe3630316u + (state0 \| flags0)) + u16_1) ^ 0x415462f5u) & 0xffffu) & 0xffffu |
| 90 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((u16_0 + 0x224914c1u) & 0xffffu) & 0xffffu |
| 91 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((state0 ^ u16_0) & 0xffffu) & 0xffffu |
| 92 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 84=(((0x8f44d42du + ((((~u16_2) & state0) \| flags0) \| 0x395bfef7u)) + u16_0) & 0xffffu) & 0xffffu ; 44=(((0x8f44d42du + ((((~u16_2) & s... |
| 94 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 74=((((((state0 & ((0x551fa912u + state0) ^ flags0)) & 0x7af574e5u) + ((0x551fa912u + state0) ^ flags0)) \| 0x23f8268cu) ^ u16_1) & 0xfff... |
| 95 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_not_validated:1 | 92=((u16_4 + 0x1f18e1aau) & 0xffffu) & 0xffffu |
| 99 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((state0 ^ u16_1) - 0x48503105u) & 0xffffu) & 0xffffu |
| 101 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 1=(((state0 ^ u16_11) ^ 0x44422ebbu) & 0xffffu) & 0xffffu |
| 102 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 64=(((state0 + u16_11) + 0x7b88d4e3u) & 0xffffu) & 0xffffu |
| 107 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((state0 ^ u16_0) & 0xffffu) & 0xffffu |
| 108 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((((((state0 + 0x11961dc7u) ^ 0x5fa19cc7u) - flags0) ^ u16_0) + 0x36f124dbu) & 0xffffu) & 0xffffu |
| 114 | slot_multi_path | 4 | proved_equivalent:4 | target_binding_validated:4 | 51=((((0x667e49d1u + (((((state0 \| 0x6729b5bfu) & flags0) + state0) & 0x1c8b6feeu) ^ 0x6b040388u)) + u16_0) + ((((((state0 \| 0x6729b5bf... |
| 118 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((state0 ^ u16_1) - 0x52d3aa4u) & 0xffffu) & 0xffffu |
| 119 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((state0 ^ u16_4) + 0x7e7974a5u) & 0xffffu) & 0xffffu |
| 121 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((((0xaee5788cu + (u16_0 - flags0)) + (((0x3154e54au + flags0) ^ state0) * 0x2u)) ^ u16_2) + 0x7609a96cu) & 0xffffu) & 0xffffu |
| 122 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 121=(((0x1af9be18u + (flags0 + state0)) + u16_0) & 0xffffu) & 0xffffu |
| 123 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((((u16_0 - 0x3da77425u) - state0) ^ 0x1603b0a9u) & 0xffffu) & 0xffffu |
| 124 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 71=(((((u32_0 - ((flags0 - ((((state0 - 0x7c31e804u) ^ flags0) ^ 0x2bb25e3u) \| 0x50ef8024u)) ^ flags0)) & ((flags0 - ((((state0 - 0x7c31... |
| 125 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 19=(((state0 + u16_0) - 0x7b275316u) & 0xffffu) & 0xffffu |
| 127 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((u16_0 + 0xf376a6au) - state0) & 0xffffu) & 0xffffu |
| 128 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 109=((((((flags0 - 0x68bb0762u) - u16_1) \| 0x7b467141u) ^ u16_3) + 0x539da50eu) & 0xffffu) & 0xffffu ; 19=((((((((flags0 ^ 0x46f37ee7u) ... |
| 129 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((u16_0 - (((0xa54be084u + flags0) + (((flags0 \| 0x77ecded8u) & state0) * 0x2u)) & 0x63b683du)) & 0xffffu) & 0xffffu |
| 130 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 4=(((0xaede00cdu + ((state0 \| ((flags0 - 0x42718c2au) - state0)) + u16_0)) + (((flags0 - 0x42718c2au) - state0) & 0x3a044344u)) & 0xffff... |
| 131 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 10=((((((((state0 \| 0x8fb57c3u) - 0x45a18ca4u) \| (((((0xb98b8ec3u + flags0) - (state0 \| 0x8fb57c3u)) ^ 0x4382f497u) - 0x95703a1u) ^ 0x... |
| 136 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 2=(((state0 ^ u16_0) - 0x2eae4eacu) & 0xffffu) & 0xffffu |
| 140 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 112=((((state0 - ((flags0 - (state0 \| 0xf17c331u)) \| 0x16a9ca8cu)) ^ u16_0) ^ 0x6e089febu) & 0xffffu) & 0xffffu ; 16=((((state0 - (((0x... |
| 144 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((((state0 & 0x1000068u) ^ u16_0) ^ 0x6367b3ddu) - 0x2f1222e2u) & 0xffffu) & 0xffffu |
| 146 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 99=(((u16_1 + 0x2cff1885u) - (((((state0 + flags0) ^ 0x2e312e01u) & (0x7d882664u + flags0)) + 0x4a5b7e16u) ^ (flags0 + u16_3))) & 0xffffu... |
| 148 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 105=(((u16_3 - (state0 & flags0)) ^ 0x502e5379u) & 0xffffu) & 0xffffu |
| 151 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 34=(((0x77236c60u + (flags0 + state0)) + u16_3) & 0xffffu) & 0xffffu |
| 153 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 10=(((u16_0 - state0) ^ 0x6f642592u) & 0xffffu) & 0xffffu |
| 154 | slot_multi_path | 3 | proved_equivalent:3 | target_binding_validated:3 | 81=((((((0x9aca28b9u + (u16_2 ^ state0)) + u16_0) + (flags0 \| 0x7ed018fbu)) - state0) - ((flags0 \| 0x7ed018fbu) ^ 0x18426e67u)) & 0xfff... |
| 157 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 79=(((((((state0 ^ 0x2f4dfd84u) + u16_2) \| 0x1f5cd114u) + u16_0) - (((state0 ^ 0x2f4dfd84u) + u16_2) & (flags0 ^ 0x3d2638afu))) ^ 0x17d3... |
| 158 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 79=(((((((state0 ^ flags0) ^ 0xcedf66u) \| 0xfb6049eu) ^ flags0) + u16_2) ^ 0x3ffdb46cu) & 0xffffu) & 0xffffu ; 49=((((((((state0 ^ flags... |
| 160 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((((state0 & 0x80381u) \| 0x521b8b80u) ^ u16_0) - 0x4cf19f11u) & 0xffffu) & 0xffffu |
| 161 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((0x4c0132b4u + (state0 \| 0x69145e52u)) + u16_0) & 0xffffu) & 0xffffu |
| 167 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((state0 ^ u16_4) ^ 0x5f92615u) & 0xffffu) & 0xffffu |
| 168 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 74=(((0x553030a2u + ((u16_0 + flags0) & (state0 \| 0x6899d5d4u))) + u16_2) & 0xffffu) & 0xffffu ; 54=(((0x553030a2u + (((0xd1548f27u + (f... |
| 172 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((u16_2 & 0xffffu) & 0xffffu) ^ 0xa33u |
| 173 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((((((flags0 - ((0x5eced92du + state0) \| 0x1f8bac4cu)) & (((0x5eced92du + state0) ^ 0x456d7018u) \| 0xebbbd20u)) & 0x74128b65u) ^ u1... |
| 174 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((0x397fd954u + (((((0xffffffffu + flags0) - state0) & flags0) + flags0) ^ 0x5fa9d2b1u)) + u16_0) & 0xffffu) & 0xffffu |
| 176 | slot_multi_path | 2 | proved_equivalent:2 | target_binding_validated:2 | 78=(((u16_2 - flags0) ^ 0x37839d72u) & 0xffffu) & 0xffffu ; 50=(((u16_2 - (((state0 & flags0) & 0x2c46ace3u) \| (flags0 - 0x14b22a15u))) ... |
| 179 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((u16_1 - 0x263c3887u) - (((state0 \| flags0) ^ (flags0 + 0x7ef33dc5u)) ^ u16_3)) & 0xffffu) & 0xffffu |
| 180 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((u16_0 + 0x7920fa05u) & 0xffffu) & 0xffffu |
| 181 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((u16_4 - state0) & 0xffffu) & 0xffffu |
| 183 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((u16_2 - 0x1aed554cu) - ((state0 + 0xfaa325cu) ^ 0x694e1f66u)) & 0xffffu) & 0xffffu |
| 184 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=(((u16_0 + 0x3f05b2f0u) - ((((((state0 \| flags0) \| 0x19d0d4du) + 0x3c030b15u) ^ ((0x7db9efb0u + flags0) ^ flags0)) - flags0) ^ flag... |
| 185 | slot_multi_path | 1 | proved_equivalent:1 | target_binding_validated:1 | 128=((((((state0 ^ (flags0 \| 0x17e55682u)) ^ 0x2000c224u) & 0x1f29f35u) + ((((flags0 \| 0x17e55682u) + 0x28030c24u) \| 0x7fa981au) ^ 0x6... |
| 186 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 29=(((state0 + u16_3) + 0x72198f10u) & 0xffffu) & 0xffffu |
| 187 | slot_mba_stateful | 1 | proved_equivalent:1 | target_binding_validated:1 | 5=((u16_3 - state0) & 0xffffu) & 0xffffu |

## Caveat

`proved_equivalent` proves only that the reduced slot expression matches the original slot expression under byte/u16 range constraints. Rows with `target_binding_not_validated` still need dispatch-table/second-stage target binding work. Slot-unknown opcodes are not solved by this pass.
