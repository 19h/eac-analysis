# VM Hidden Transition Catalog

- trace pairs: `769224`
- inferred hidden-span events: `1529`
- catalog rows: `121`
- rejected pairs: `directly_observed:767619,non_positive_delta:39,too_large:37`

| Hidden Source | Next Hooked Source | Delta | Events | Starts | Observation | Lift |
| ---: | ---: | ---: | ---: | ---: | --- | --- |
| 50 | 171 | `+0x11` | 320 | 2 | `target_only:320` | `inferred table[50] -> table[171], ip += 0x11` |
| 334 | 183 | `+0x11` | 126 | 2 | `sampled_long_or_sparse:126` | `inferred table[334] -> table[183], ip += 0x11` |
| 75 | 260 | `+0x10` | 93 | 2 | `sampled_backedge:93` | `inferred table[75] -> table[260], ip += 0x10` |
| 321 | 165 | `+0x11` | 66 | 3 | `exact:66` | `inferred table[321] -> table[165], ip += 0x11` |
| 264 | 171 | `+0xe` | 58 | 15 | `exact:58` | `inferred table[264] -> table[171], ip += 0xe` |
| 316 | 196 | `+0x16` | 41 | 1 | `sampled_backedge:41` | `inferred table[316] -> table[196], ip += 0x16` |
| 311 | 165 | `+0xe` | 39 | 6 | `exact:39` | `inferred table[311] -> table[165], ip += 0xe` |
| 334 | 114 | `+0x16` | 39 | 1 | `sampled_long_or_sparse:39` | `inferred table[334] -> table[114], ip += 0x16` |
| 356 | 171 | `+0xe` | 33 | 9 | `exact:33` | `inferred table[356] -> table[171], ip += 0xe` |
| 95 | 165 | `+0xe` | 32 | 8 | `exact:32` | `inferred table[95] -> table[165], ip += 0xe` |
| 264 | 165 | `+0xe` | 31 | 6 | `exact:31` | `inferred table[264] -> table[165], ip += 0xe` |
| 311 | 171 | `+0xe` | 31 | 7 | `exact:31` | `inferred table[311] -> table[171], ip += 0xe` |
| 145 | 66 | `+0x11` | 26 | 2 | `sampled_long_or_sparse:26` | `inferred table[145] -> table[66], ip += 0x11` |
| 145 | 196 | `+0x13` | 25 | 1 | `sampled_long_or_sparse:25` | `inferred table[145] -> table[196], ip += 0x13` |
| 246 | 347 | `+0x10` | 25 | 1 | `sampled_long_or_sparse:25` | `inferred table[246] -> table[347], ip += 0x10` |
| 316 | 268 | `+0x10` | 25 | 1 | `sampled_backedge:25` | `inferred table[316] -> table[268], ip += 0x10` |
| 316 | 203 | `+0x11` | 25 | 1 | `sampled_backedge:25` | `inferred table[316] -> table[203], ip += 0x11` |
| 145 | 203 | `+0x16` | 22 | 1 | `sampled_long_or_sparse:22` | `inferred table[145] -> table[203], ip += 0x16` |
| 216 | 171 | `+0xe` | 19 | 12 | `exact:19` | `inferred table[216] -> table[171], ip += 0xe` |
| 210 | 157 | `+0x16` | 18 | 1 | `sampled_long_or_sparse:18` | `inferred table[210] -> table[157], ip += 0x16` |
| 75 | 168 | `+0x16` | 17 | 1 | `sampled_backedge:17` | `inferred table[75] -> table[168], ip += 0x16` |
| 80 | 171 | `+0x11` | 17 | 4 | `target_only:17` | `inferred table[80] -> table[171], ip += 0x11` |
| 210 | 340 | `+0x16` | 17 | 1 | `sampled_long_or_sparse:17` | `inferred table[210] -> table[340], ip += 0x16` |
| 78 | 165 | `+0x11` | 16 | 2 | `exact:16` | `inferred table[78] -> table[165], ip += 0x11` |
| 69 | 171 | `+0x11` | 15 | 4 | `exact:15` | `inferred table[69] -> table[171], ip += 0x11` |
| 278 | 354 | `+0xe` | 15 | 11 | `exact:15` | `inferred table[278] -> table[354], ip += 0xe` |
| 95 | 354 | `+0xe` | 14 | 11 | `exact:14` | `inferred table[95] -> table[354], ip += 0xe` |
| 145 | 215 | `+0x16` | 14 | 1 | `sampled_long_or_sparse:14` | `inferred table[145] -> table[215], ip += 0x16` |
| 210 | 199 | `+0x16` | 13 | 1 | `sampled_long_or_sparse:13` | `inferred table[210] -> table[199], ip += 0x16` |
| 356 | 354 | `+0xe` | 13 | 9 | `exact:13` | `inferred table[356] -> table[354], ip += 0xe` |
