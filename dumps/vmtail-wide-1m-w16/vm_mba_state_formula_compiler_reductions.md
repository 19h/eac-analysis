# MBA State Formula Compiler Reductions

This pass translates GCC -O3 straight-line assembly for each original MBA state formula back into a C-like expression and proves that expression equivalent to the original with Z3.

## Summary

| metric | value |
| --- | --- |
| source entries | 185 |
| reduction statuses | compiler_expression_recovered:180; translator_or_proof_error:5 |
| proof statuses | not_proved:5; proved_equivalent:180 |
| proved and shorter | 115 |
| assembly | dumps/vmtail-wide-1m-w16/vm_mba_state_formula_compiler_reducer.s |
| proof dir | dumps/vmtail-wide-1m-w16/vm_mba_state_formula_compiler_proofs |

## Examples

| source | proof | chars | candidate |
| --- | --- | --- | --- |
| 0 | proved_equivalent | 62 -> 57 | (((0x1966e0e7u + state0) - u16_0) ^ state0) ^ 0xf44cdfa6u |
| 3 | proved_equivalent | 176 -> 133 | (((u16_0 ^ (((0xe3fc337eu + state0) - flags0) - flags0)) ^ 0x1271f0e1u) \| (((0xe3fc337eu + state0) - flags0) - flags0)) \| 0x5e32c369u |
| 9 | proved_equivalent | 36 -> 41 | ((u16_3 - state0) & state0) ^ 0x25d88329u |
| 13 | proved_equivalent | 78 -> 62 | (((flags0 - 0x1c36555u) ^ state0) ^ 0x67934603u) \| 0x77bfefb9u |
| 17 | proved_equivalent | 213 -> 185 | ((((u16_0 & 0x4365071cu) ^ flags0) \| state0) \| (((0x4365071cu + flags0) ^ flags0) ^ 0x4a3a9184u)) \| ((((u16_3 + 0x95f9698u) - state0) ... |
| 18 | proved_equivalent | 185 -> 83 | ((((0x649b4ea0u - (u16_0 + state0)) \| state0) \| 0x1188080u) & flags0) \| 0x649b4ea0u |
| 20 | proved_equivalent | 285 -> 165 | ((((0xe1db482au - flags0) ^ 0x10000000u) \| (flags0 \| state0)) \| ((0x38e67f26u - flags0) ^ 0x10100800u)) \| (((u16_2 & 0x10100800u) ^ (... |
| 26 | proved_equivalent | 470 -> 258 | ((((((state0 - 0x6b3e5bb1u) - u16_0) & 0xe71ae1du) ^ ((0xb8ed9b36u + flags0) ^ (0xb8ed9b36u + state0))) ^ 0xd470bb91u) \| ((((state0 - 0x... |
| 30 | proved_equivalent | 41 -> 31 | (flags0 & 0xc64a6123u) \| state0 |
| 31 | proved_equivalent | 6 -> 6 | state0 |
| 33 | proved_equivalent | 62 -> 57 | (((u16_2 + state0) & 0x15422921u) \| state0) \| 0x42493d14u |
| 35 | proved_equivalent | 6 -> 6 | state0 |
| 36 | proved_equivalent | 163 -> 148 | (((((u16_0 + flags0) - state0) ^ (flags0 & 0x30820186u)) ^ 0x8254723u) \| (((state0 + flags0) ^ (flags0 & 0x30820186u)) ^ 0x72d0ef43u)) \... |
| 37 | proved_equivalent | 104 -> 95 | ((u16_0 ^ ((0xb63aedf4u + state0) - flags0)) ^ 0x384e1c86u) \| ((0xb63aedf4u + state0) - flags0) |
| 40 | proved_equivalent | 23 -> 17 | (~u16_4) & state0 |
| 42 | proved_equivalent | 63 -> 58 | ((state0 - flags0) ^ (state0 - 0x798f4b52u)) ^ 0x160c3a44u |
| 43 | proved_equivalent | 23 -> 5 | u16_2 |
| 48 | proved_equivalent | 813 -> 313 | ((((((((0x57357ce9u + state0) - u16_0) & (u16_3 + state0)) ^ flags0) ^ (0x3cd5c8b4u - flags0)) ^ (flags0 & 0x41ba58a6u)) ^ (flags0 & 0x15... |
| 49 | proved_equivalent | 124 -> 101 | (((0x206e91ebu + (flags0 + flags0)) + state0) - u16_1) & (((flags0 + flags0) + 0x76278178u) & state0) |
| 52 | proved_equivalent | 36 -> 39 | (u16_0 + (state0 * 0x2u)) ^ 0x7823b2dau |
| 54 | proved_equivalent | 28 -> 31 | (flags0 - 0x68b4ad2fu) & state0 |
| 56 | proved_equivalent | 36 -> 19 | u16_0 ^ 0x5380ff71u |
| 62 | proved_equivalent | 120 -> 118 | (((u16_0 + 0x5dbb6647u) ^ ((0xd90ded5u + flags0) ^ u16_2)) \| (((0xd90ded5u + flags0) ^ u16_2) ^ 0xdc76aee9u)) \| state0 |
| 64 | proved_equivalent | 136 -> 116 | ((state0 - 0x79614de5u) ^ ((0xbde73fa0u + flags0) & 0xcdc277b6u)) ^ (((flags0 + u16_2) - 0x4218c060u) & 0x5b249a06u) |
| 65 | proved_equivalent | 6 -> 6 | state0 |
| 66 | proved_equivalent | 264 -> 232 | ((((((u16_0 - state0) & (0x2f6cb1f6u - b2)) ^ ((0xc3c726c9u - flags0) & 0x745ff1d2u)) ^ (state0 & 0x2f6cb1f6u)) ^ 0x33c1d6ecu) \| ((((0x2... |
| 69 | proved_equivalent | 396 -> 188 | ((((((state0 + flags0) ^ (state0 ^ flags0)) ^ (0xfb3ee75du + flags0)) ^ 0x3a572249u) \| ((0xfb3ee75du + flags0) ^ state0)) \| (((0xfb3ee7... |
| 70 | proved_equivalent | 396 -> 188 | ((((((state0 + flags0) ^ (state0 ^ flags0)) ^ (0xfb3ee75du + flags0)) ^ 0x3a572249u) \| (state0 ^ (0xfb3ee75du + flags0))) \| ((state0 ^ ... |
| 74 | proved_equivalent | 76 -> 58 | ((state0 - flags0) & (state0 + 0x236ef542u)) ^ 0x99b4ac0eu |
| 75 | proved_equivalent | 6 -> 6 | state0 |
| 78 | proved_equivalent | 303 -> 56 | (((state0 - flags0) ^ 0xc72fc6fu) \| u16_0) \| 0x9fd07f20u |
| 79 | proved_equivalent | 303 -> 56 | (((state0 - flags0) ^ 0xc72fc6fu) \| u16_0) \| 0x9fd07f20u |
| 82 | proved_equivalent | 106 -> 95 | ((((flags0 + state0) - u16_0) + 0x4931985eu) \| ((flags0 + state0) + 0x1bc90d20u)) \| 0x8a2e7016u |
| 83 | proved_equivalent | 132 -> 111 | (((((0x2c3e26b4u + state0) + flags0) - u16_0) \| state0) & 0x122d7f19u) \| ((flags0 + 0x2c3e26b4u) ^ 0x4b7ebb84u) |
| 88 | proved_equivalent | 80 -> 95 | (((u16_1 + state0) ^ (0xe3630316u + flags0)) \| ((0xe3630316u + flags0) ^ 0x415462f5u)) \| state0 |
| 90 | proved_equivalent | 259 -> 279 | (((((((u16_2 - state0) + ((0x1c1030c0u + flags0) + (flags0 * 0x2u))) & 0x4347c2c0u) \| (flags0 & 0x4b6fdae0u)) \| ((flags0 + 0x4357e3c2u)... |
| 91 | proved_equivalent | 23 -> 5 | u16_0 |
| 92 | proved_equivalent | 210 -> 113 | ((((((u16_0 + state0) & u16_2) ^ (state0 ^ flags0)) ^ 0x3efd297du) \| flags0) \| ((~u16_2) & state0)) \| 0xbf5fdb37u |
| 94 | proved_equivalent | 199 -> 138 | ((((0x7af574e5u + flags0) & (0x551fa912u + state0)) ^ ((state0 & flags0) ^ (0x551fa912u + state0))) \| (0x23f8268cu - u16_1)) \| 0x23f8268cu |
| 95 | proved_equivalent | 27 -> 30 | (u16_4 + 0x1f18e1aau) ^ state0 |
| 99 | proved_equivalent | 36 -> 41 | (u16_1 & state0) ^ (state0 - 0x48503105u) |
| 101 | proved_equivalent | 37 -> 34 | ((~u16_11) & state0) ^ 0x44422ebbu |
| 102 | proved_equivalent | 6 -> 6 | state0 |
| 107 | proved_equivalent | 23 -> 25 | (state0 - u16_0) ^ state0 |
| 108 | proved_equivalent | 41 -> 47 | (state0 + 0x11961dc7u) ^ (0x5fa19cc7u - flags0) |
| 112 | proved_equivalent | 692 -> 486 | (((((u16_3 ^ (state0 & flags0)) ^ ((0x40561547u - flags0) & 0x40c1f4e9u)) ^ ((0x40561547u - flags0) & 0x982041u)) ^ ((((0x488765f3u + sta... |
| 114 | proved_equivalent | 1374 -> 567 | ((((((((0x63bb548fu + flags0) & state0) ^ ((0x671da5f4u + state0) & 0x48367f78u)) ^ 0x295f5080u) \| (((~flags0) & state0) \| (((0x2bf0f49... |
| 117 | proved_equivalent | 6 -> 6 | state0 |
| 118 | proved_equivalent | 35 -> 40 | (u16_1 & state0) ^ (state0 - 0x52d3aa4u) |
| 119 | proved_equivalent | 36 -> 41 | ((0x7e7974a5u + state0) ^ u16_4) \| state0 |
| 121 | proved_equivalent | 102 -> 66 | (((0x8c7a190u + (flags0 + state0)) + u16_0) ^ state0) ^ 0x8c7a190u |
| 122 | proved_equivalent | 54 -> 50 | (0x1af9be18u - u16_0) + ((flags0 + state0) * 0x2u) |
| 123 | proved_equivalent | 62 -> 35 | (0x7b4ee84au - u16_0) ^ 0x1603b0a9u |
| 124 | proved_equivalent | 1298 -> 411 | (((((((((u32_0 - 0x7c31e804u) - state0) & 0x50ef8024u) ^ (0x2b837475u + flags0)) ^ 0x2bb25e3u) \| (((0x83ce17fcu + state0) ^ (0x2b837475u... |
| 125 | proved_equivalent | 36 -> 41 | ((0x84d8aceau + u16_0) + state0) & state0 |
| 127 | proved_equivalent | 35 -> 40 | ((u16_0 + 0xf376a6au) - state0) \| state0 |
| 128 | not_proved | 810 -> 0 |  |
| 129 | proved_equivalent | 353 -> 68 | ((((0xebf72897u + state0) + flags0) \| state0) & flags0) \| 0x63b0834u |
| 130 | proved_equivalent | 236 -> 101 | (((0x6d381f7eu + (flags0 - state0)) + (flags0 - state0)) & 0xfae64754u) \| ((u16_0 + state0) \| state0) |
| 131 | proved_equivalent | 826 -> 219 | (((((((0x4c0c1704u + state0) - u16_1) ^ 0x7bed302fu) \| state0) \| ((flags0 + 0x565d9ac9u) - state0)) \| ((0x6506a4a2u - (state0 + flags0... |
| 136 | proved_equivalent | 36 -> 41 | ((0xd151b154u + state0) ^ u16_0) \| state0 |
| 140 | proved_equivalent | 148 -> 62 | ((u16_0 + 0x16a9ca8cu) \| (0x90ab6087u - flags0)) \| 0x7fb7d777u |
| 142 | proved_equivalent | 1682 -> 330 | ((((((((((0x9e0dd673u - u16_8) ^ (state0 ^ flags0)) ^ 0x99e1ef7fu) \| flags0) \| (state0 ^ 0x2f86f9e3u)) \| ((state0 ^ flags0) ^ 0x5727d2... |
| 144 | proved_equivalent | 114 -> 35 | (u16_0 & 0x6367b3ddu) ^ 0x345590fbu |
| 145 | proved_equivalent | 6 -> 6 | state0 |
| 146 | proved_equivalent | 284 -> 63 | (((u16_1 + flags0) - state0) ^ (state0 + flags0)) ^ 0x2d076887u |
| 148 | proved_equivalent | 15 -> 15 | state0 & flags0 |
| 151 | proved_equivalent | 54 -> 63 | ((0x77236c60u + (flags0 + state0)) + u16_3) ^ (flags0 + state0) |
| 153 | proved_equivalent | 36 -> 19 | u16_0 ^ 0x6f642592u |
| 154 | not_proved | 388 -> 0 |  |
| 157 | proved_equivalent | 338 -> 269 | ((((u16_0 + state0) ^ (0x2f4dfd84u + u16_2)) ^ (((0x869c849au - flags0) ^ (0x2f4dfd84u + u16_2)) ^ (state0 & 0x3d2638afu))) ^ 0x3aeb4349u... |
| 158 | proved_equivalent | 200 -> 110 | (((0x3c39b020u + u16_2) + state0) ^ 0x33416bd8u) \| (((state0 ^ flags0) ^ 0x3cf76f46u) \| (flags0 ^ 0xc7200d2u)) |
| 160 | proved_equivalent | 140 -> 30 | (state0 \| u16_0) \| 0x777b8ff6u |
| 161 | proved_equivalent | 19 -> 20 | state0 \| 0x69145e52u |
| 167 | proved_equivalent | 35 -> 40 | ((state0 - u16_4) ^ state0) ^ 0x5f92615u |
| 168 | proved_equivalent | 252 -> 110 | (((((u16_0 + flags0) & 0x20118084u) ^ 0x400a0425u) \| state0) \| ((state0 + u16_2) & 0x4ee70776u)) \| 0xa4173818u |
| 172 | proved_equivalent | 140 -> 113 | (((((u16_0 + 0x1a1af2bu) ^ (state0 & 0x15bf847fu)) ^ flags0) ^ 0x1a1af2bu) \| (u16_2 ^ 0x715f0a33u)) \| 0x3eba9edfu |
| 173 | proved_equivalent | 226 -> 174 | (((((flags0 + 0x5eced92du) - state0) & 0xebbbd20u) \| (((u16_0 & 0x14028844u) ^ (0x5eced92du + state0)) ^ 0x456d7018u)) \| ((0x5eced92du ... |
| 174 | proved_equivalent | 134 -> 145 | (((((u16_0 + state0) - flags0) & flags0) ^ (flags0 + flags0)) ^ 0x9929ac05u) \| ((((state0 - flags0) & flags0) ^ (flags0 + flags0)) ^ 0x5... |
| 175 | proved_equivalent | 50 -> 58 | ((state0 & flags0) & 0x2c46ace3u) \| (flags0 - 0x14b22a15u) |

## Caveat

`proved_equivalent` proves the compiler-recovered state expression equivalent to the original state expression. It does not prove dispatch expressions or full program intent.
