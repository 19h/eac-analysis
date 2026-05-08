# MBA State Formula Proofs

This pass translates candidate state formula reductions into SMT-LIB QF_BV queries and asks Z3 whether the original formula and candidate can differ under byte/u16 range constraints.

## Summary

| metric | value |
| --- | --- |
| candidate reductions | 38 |
| proof rows | 38 |
| status counts | proved_equivalent:38 |
| proof dir | dumps/vmtail-wide-1m-w16/vm_mba_state_formula_proofs |

## Proof Rows

| source | status | template | candidate |
| --- | --- | --- | --- |
| 31 | proved_equivalent | identity | state0 |
| 35 | proved_equivalent | identity | state0 |
| 43 | proved_equivalent | identity | u16_2 |
| 56 | proved_equivalent | xor_const | u16_0 ^ 0x5380ff71u |
| 65 | proved_equivalent | identity | state0 |
| 75 | proved_equivalent | identity | state0 |
| 91 | proved_equivalent | identity | u16_0 |
| 102 | proved_equivalent | identity | state0 |
| 117 | proved_equivalent | identity | state0 |
| 145 | proved_equivalent | identity | state0 |
| 148 | proved_equivalent | and2_add_const | (state0 & flags0) + 0x0u |
| 153 | proved_equivalent | xor_const | u16_0 ^ 0x6f642592u |
| 160 | proved_equivalent | or2_or_mask | (state0 \| u16_0) \| 0x777b8ff6u |
| 161 | proved_equivalent | or_mask | state0 \| 0x69145e52u |
| 181 | proved_equivalent | const_sub | 0x0u - u16_4 |
| 187 | proved_equivalent | identity | u16_3 |
| 210 | proved_equivalent | identity | state0 |
| 216 | proved_equivalent | xor2_const | state0 ^ flags0 ^ 0x0u |
| 217 | proved_equivalent | xor2_const | state0 ^ flags0 ^ 0x0u |
| 225 | proved_equivalent | or2_add_const | (state0 \| flags0) + 0x0u |
| 237 | proved_equivalent | xor_const | u16_1 ^ 0xb7c30a76u |
| 240 | proved_equivalent | const_sub | 0x8413de69u - u16_3 |
| 246 | proved_equivalent | identity | state0 |
| 261 | proved_equivalent | add2_const | state0 + u16_2 + 0x4c539d29u |
| 266 | proved_equivalent | identity | state0 |
| 283 | proved_equivalent | identity | state0 |
| 284 | proved_equivalent | sub2_const | state0 - u16_11 + 0xeb4695b4u |
| 302 | proved_equivalent | identity | state0 |
| 308 | proved_equivalent | identity | state0 |
| 316 | proved_equivalent | identity | state0 |
| 320 | proved_equivalent | and_mask | state0 & 0x81ebc77cu |
| 332 | proved_equivalent | or2_or_mask | (state0 \| u16_2) \| 0x1cf75fdfu |
| 334 | proved_equivalent | identity | state0 |
| 336 | proved_equivalent | and2_xor_const | (state0 & u16_2) ^ 0x114009e8u |
| 338 | proved_equivalent | const_sub | 0xb40741f4u - u16_0 |
| 346 | proved_equivalent | xor2_const | state0 ^ flags0 ^ 0x45daa5e4u |
| 356 | proved_equivalent | xor2_const | state0 ^ flags0 ^ 0x0u |
| 357 | proved_equivalent | xor2_const | state0 ^ flags0 ^ 0x0u |

## Caveat

`proved_equivalent` means Z3 returned `unsat` for a disequality query over 32-bit bit-vectors with byte/u16 zero-extension constraints. It proves the candidate state expression equivalent to the original expression, not the dispatch formula.
