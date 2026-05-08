# MBA State Formula Reductions

This pass compiles the original C-like state formulas and tests compact candidate expressions against deterministic random input vectors. It is a reduction aid, not a formal proof.

## Summary

| metric | value |
| --- | --- |
| source entries | 185 |
| random tests per entry | 4107 |
| status counts | candidate_simplified:35; unsolved_by_current_templates:150 |
| harness | dumps/vmtail-wide-1m-w16/vm_mba_state_formula_reducer_harness.c |
| reductions | dumps/vmtail-wide-1m-w16/vm_mba_state_formula_reductions.tsv |

## Candidate Rows

| source | status | template | candidate |
| --- | --- | --- | --- |
| 0 | unsolved_by_current_templates |  |  |
| 3 | unsolved_by_current_templates |  |  |
| 9 | unsolved_by_current_templates |  |  |
| 13 | unsolved_by_current_templates |  |  |
| 17 | unsolved_by_current_templates |  |  |
| 18 | unsolved_by_current_templates |  |  |
| 20 | unsolved_by_current_templates |  |  |
| 26 | unsolved_by_current_templates |  |  |
| 30 | unsolved_by_current_templates |  |  |
| 31 | candidate_simplified | identity | state0 |
| 33 | unsolved_by_current_templates |  |  |
| 35 | candidate_simplified | identity | state0 |
| 36 | unsolved_by_current_templates |  |  |
| 37 | unsolved_by_current_templates |  |  |
| 40 | unsolved_by_current_templates |  |  |
| 42 | unsolved_by_current_templates |  |  |
| 43 | candidate_simplified | identity | u16_2 |
| 48 | unsolved_by_current_templates |  |  |
| 49 | unsolved_by_current_templates |  |  |
| 52 | unsolved_by_current_templates |  |  |
| 54 | unsolved_by_current_templates |  |  |
| 56 | candidate_simplified | xor_const | u16_0 ^ 0x5380ff71u |
| 62 | unsolved_by_current_templates |  |  |
| 64 | unsolved_by_current_templates |  |  |
| 65 | candidate_simplified | identity | state0 |
| 66 | unsolved_by_current_templates |  |  |
| 69 | unsolved_by_current_templates |  |  |
| 70 | unsolved_by_current_templates |  |  |
| 74 | unsolved_by_current_templates |  |  |
| 75 | candidate_simplified | identity | state0 |
| 78 | unsolved_by_current_templates |  |  |
| 79 | unsolved_by_current_templates |  |  |
| 82 | unsolved_by_current_templates |  |  |
| 83 | unsolved_by_current_templates |  |  |
| 88 | unsolved_by_current_templates |  |  |
| 90 | unsolved_by_current_templates |  |  |
| 91 | candidate_simplified | identity | u16_0 |
| 92 | unsolved_by_current_templates |  |  |
| 94 | unsolved_by_current_templates |  |  |
| 95 | unsolved_by_current_templates |  |  |
| 99 | unsolved_by_current_templates |  |  |
| 101 | unsolved_by_current_templates |  |  |
| 102 | candidate_simplified | identity | state0 |
| 107 | unsolved_by_current_templates |  |  |
| 108 | unsolved_by_current_templates |  |  |
| 112 | unsolved_by_current_templates |  |  |
| 114 | unsolved_by_current_templates |  |  |
| 117 | candidate_simplified | identity | state0 |
| 118 | unsolved_by_current_templates |  |  |
| 119 | unsolved_by_current_templates |  |  |
| 121 | unsolved_by_current_templates |  |  |
| 122 | unsolved_by_current_templates |  |  |
| 123 | unsolved_by_current_templates |  |  |
| 124 | unsolved_by_current_templates |  |  |
| 125 | unsolved_by_current_templates |  |  |
| 127 | unsolved_by_current_templates |  |  |
| 128 | unsolved_by_current_templates |  |  |
| 129 | unsolved_by_current_templates |  |  |
| 130 | unsolved_by_current_templates |  |  |
| 131 | unsolved_by_current_templates |  |  |
| 136 | unsolved_by_current_templates |  |  |
| 140 | unsolved_by_current_templates |  |  |
| 142 | unsolved_by_current_templates |  |  |
| 144 | unsolved_by_current_templates |  |  |
| 145 | candidate_simplified | identity | state0 |
| 146 | unsolved_by_current_templates |  |  |
| 148 | candidate_simplified | and2_add_const | (state0 & flags0) + 0x0u |
| 151 | unsolved_by_current_templates |  |  |
| 153 | candidate_simplified | xor_const | u16_0 ^ 0x6f642592u |
| 154 | unsolved_by_current_templates |  |  |
| 157 | unsolved_by_current_templates |  |  |
| 158 | unsolved_by_current_templates |  |  |
| 160 | unsolved_by_current_templates |  |  |
| 161 | candidate_simplified | or_mask | state0 \| 0x69145e52u |
| 167 | unsolved_by_current_templates |  |  |
| 168 | unsolved_by_current_templates |  |  |
| 172 | unsolved_by_current_templates |  |  |
| 173 | unsolved_by_current_templates |  |  |
| 174 | unsolved_by_current_templates |  |  |
| 175 | unsolved_by_current_templates |  |  |

## Caveat

A `candidate_simplified` row means the candidate matched the compiled original for the generated vectors. It still needs formal proof or exhaustive bit-vector validation before replacing the original expression in final reconstructed C.
