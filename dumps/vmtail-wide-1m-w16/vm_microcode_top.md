# VM Handler Microcode Catalog

Top 30 observed dispatch entries by long-run event count.

## Entry 258 @ 0xadf2c
- class: `static_validated`
- events: `28058`, delta: `+0x4`, shape: `VVVV`
- operands: `b0=var255(top=0xf3:2.2%);b1=var256(top=0xab:1.9%);b2=var246(top=0x51:2.5%);b3=var240(top=0xeb:4.3%)`
- words: `w0=var2202(top=0xd5f3:0.9%);w1=var1895(top=0x4fd6:0.9%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 9693 state events`
- branch predicates: `0/256 unknown branches (0.0%): `
- GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- flags: `0xadf61: flags sub= flags0 - 0x1510614f | 0xadf71: flags or= flags0 - 0x1510614f | 0xa1b079a | 0xadfb6: flags xor= flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e | 0xae110: flags sub= flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e - 0x63deb9c4`
- state: `0xadf8e: state xor= state0 ^ 0x11095fd5 | 0xae01c: state add= state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e | 0xae101: state xor= state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e ^ u16_2 - flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e | 0xae2d0: state and= state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e ^ u16_2 - flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e & u16_0 - state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e ^ u1...#2d91502c2543`
- slot: `70=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 ^ 0x11095fd5)) + (mask32(flags0 ^ 0x1769756e)))) ^ (mask32(u16_2 - (mask32(flags0 ^ 0x1769756e)))))))) ^ 0x5812e92c)) & 0xffff | 58=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 ^ 0x11095fd5)) + (mask32((mask32((mask32(flags0 - 0x1510614f)) | 0xa1b079a)) ^ 0x1769756e)))) ^ (mask32(u16_2 - (mask32((mask32((mask32(flags0 - 0x1...#2e5ba1fe7d39`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `307@0xb8064:1689,199@0xa0631:1547,297@0xb64d7:1508,215@0xa4609:1365,18@0x7be9b:1334,43@0x8173d:1325`

## Entry 28 @ 0x7e390
- class: `static_validated`
- events: `26610`, delta: `+0x3`, shape: `VVV`
- operands: `b0=var30(top=0xd8:12.5%);b1=var11(top=0x0a:24.2%);b2=var256(top=0x70:2.5%)`
- words: `w0=var87(top=0x0ad8:8.1%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `3 paths over 8348 state events`
- branch predicates: `0/512 unknown branches (0.0%): `
- GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- flags: `0x7e3ac: flags xor= flags0 ^ state0 | 0xb9ad02a | 0x7e4be: flags and= flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 | 0x7e514: flags sub= flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | 0x7e559: flags add= flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a + 0x43078fb1 | ...2 omitted... | 0x7e659: flags xor= flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a + 0x43078fb1 & 0x282416bb ^ 0x53f50e0b ^ state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a - 0x7e20fbab`
- state: `0x7e52d: state or= state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | 0x7e67f: state or= state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a + 0x43078fb1 & 0x282416bb ^ 0x53f50e0b ^ state0 | flags0 ^ state0 ...#4cb4905f543e | 0x7e6a4: state xor= state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a + 0x43078fb1 & 0x282416bb ^ 0x53f50e0b ^ state0 | flags0 ^ state0 ...#98ed50a3da1e | 0x7e799: state or= state0 | flags0 ^ state0 | 0...#7866ea8f70fe`
- slot: `128=u16_0 & 0xffff`
- tail: `next = table[slot]; ip += 128=0x3`
- top targets: `347@0xc088d:2147,258@0xadf2c:1654,340@0xbf435:1637,337@0xbec0e:1601,114@0x90319:1452,189@0x9e7af:1398`

## Entry 337 @ 0xbec0e
- class: `static_validated`
- events: `26534`, delta: `+0x4`, shape: `VVVV`
- operands: `b0=var128(top=0x7c:3.3%);b1=var227(top=0x91:5.3%);b2=var254(top=0x9d:2.2%);b3=var253(top=0x00:7.9%)`
- words: `w0=var1927(top=0x9124:1.0%);w1=var1949(top=0x0099:1.3%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 7502 state events`
- branch predicates: `256/768 unknown branches (33.3%): derived_live_in:128,unknown_frame_field:128`
- unknown branch sites: `0xbeea3:je:unknown_frame_field:128,0xbeee0:je:derived_live_in:128`
- GPR+scratch-seeded branch predicates: `0/768 unknown branches (0.0%): `
- flags: `0xbedb6: flags add= flags0 + 0x61f749a7 | 0xbef77: flags xor= flags0 + 0x61f749a7 ^ 0x3de72107 | 0xbef89: flags and= flags0 + 0x61f749a7 ^ 0x3de72107 & 0xe04b834`
- state: `0xbec32: state sub= state0 - flags0 | 0xbed93: state sub= state0 - flags0 - u16_2 + state0 - flags0 + flags0 | 0xbeec8: state add= state0 - flags0 - u16_2 + state0 - flags0 + flags0 + 0x2051de91 | 0xbef26: state and= state0 - flags0 - u16_2 + state0 - flags0 + flags0 + 0x2051de91 & flags0 + 0x61f749a7 | ...2 omitted... | 0xbf0ec: state or= state0 - flags0 - u16_2 + state0 - flags0 + flags0 + 0x2051de91 & flags0 + 0x61f749a7 | 0x51d7631a ^ flags0 + 0x61f749a7 ^ 0x3de72107 & 0xe04b834 | u16_0 + state0 - flags0 - u16_2 + state0 - flags0 + fla...#7246741bd7fd`
- slot: `85=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) - (mask32((mask32(u16_2 + (mask32(state0 - flags0)))) + flags0)))) + 0x2051de91)) & (mask32(flags0 + 0x61f749a7))...#70dcd015f490 | 43=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) - (mask32((mask32(u16_2 + (mask32(state0 - flags0)))) + flags0)))) + 0x2051de91)) & (mask32(flags0 + 0x61f749a7))...#cdd3e2f1e474`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `297@0xb64d7:1787,66@0x855ff:1591,307@0xb8064:1382,28@0x7e390:1313,18@0x7be9b:1254,215@0xa4609:1178`

## Entry 340 @ 0xbf435
- class: `static_validated`
- events: `26112`, delta: `+0x4`, shape: `VVVE`
- operands: `b0=var221(top=0x4c:4.0%);b1=var255(top=0x16:2.8%);b2=var17(top=0xb3:15.9%);b3=enum2(0x00:21582,0x01:4530)`
- words: `w0=var1969(top=0x0f7c:1.4%);w1=var17(top=0x00b3:15.9%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 7549 state events`
- branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- unknown branch sites: `0xbf457:je:live_in_reg:128`
- GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- flags: `0xbf49f: flags and= flags0 & 0x7036ca68 | 0xbf4b0: flags sub= flags0 & 0x7036ca68 - 0x2caa6796 | 0xbf651: flags xor= flags0 & 0x7036ca68 - 0x2caa6796 ^ 0x4ea9d032`
- state: `0xbf4be: state sub= state0 - 0x2b2e5a26 | 0xbf4f6: state xor= state0 - 0x2b2e5a26 ^ 0x7535dd25 | 0xbf616: state or= state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 | 0xbf82b: state sub= state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 - u16_0 + state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 + 0x9097995`
- slot: `128=(mask32((mask32(u16_0 + (mask32((mask32((mask32(state0 - 0x2b2e5a26)) ^ 0x7535dd25)) | u16_2)))) + 0x9097995)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `307@0xb8064:1748,28@0x7e390:1702,66@0x855ff:1362,185@0x9d964:1352,215@0xa4609:1274,18@0x7be9b:1062`

## Entry 18 @ 0x7be9b
- class: `static_validated`
- events: `25448`, delta: `+0x3`, shape: `VVV`
- operands: `b0=var149(top=0xa0:5.4%);b1=var200(top=0x0a:6.4%);b2=var165(top=0x3a:10.5%)`
- words: `w0=var1783(top=0x0620:1.2%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 7392 state events`
- branch predicates: `128/512 unknown branches (25.0%): live_in_reg:128`
- unknown branch sites: `0x7bed4:je:live_in_reg:128`
- GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- flags: `0x7bf0e: flags or= flags0 | 0x954df65 | 0x7bf1e: flags add= flags0 | 0x954df65 + 0x5b466f3b | 0x7bff0: flags add= flags0 | 0x954df65 + 0x5b466f3b + 0x4872934a | 0x7c0fa: flags sub= flags0 | 0x954df65 + 0x5b466f3b + 0x4872934a - 0x6a461e06 | ...1 omitted... | 0x7c19f: flags or= flags0 | 0x954df65 + 0x5b466f3b + 0x4872934a - 0x6a461e06 - 0x2d264ba3 | 0x52561d19`
- state: `0x7bf3a: state and= state0 & flags0 | 0x954df65 + 0x5b466f3b | 0x7bf47: state sub= state0 & flags0 | 0x954df65 + 0x5b466f3b - 0x6382ce20 | 0x7bf89: state and= state0 & flags0 | 0x954df65 + 0x5b466f3b - 0x6382ce20 & flags0 | 0x954df65 + 0x5b466f3b | 0x7c2b1: state sub= state0 & flags0 | 0x954df65 + 0x5b466f3b - 0x6382ce20 & flags0 | 0x954df65 + 0x5b466f3b - u16_0 - state0 & flags0 | 0x954df65 + 0x5b466f3b - 0x6382ce20 & flags0 | 0x954df65 + 0x5b466f3b`
- slot: `99=(mask32(u16_0 - (mask32((mask32((mask32(state0 & flags0)) - 0x6382ce20)) & flags0)))) & 0xffff | 29=(mask32(u16_0 - (mask32((mask32((mask32(state0 & (mask32((mask32(flags0 | 0x954df65)) + 0x5b466f3b)))) - 0x6382ce20)) & (mask32((mask32(flags0 | 0x954df65)) + 0x5b466f3b)))))) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x3`
- top targets: `114@0x90319:1729,189@0x9e7af:1581,347@0xc088d:1461,258@0xadf2c:1384,337@0xbec0e:1249,174@0x9bd8f:1212`

## Entry 114 @ 0x90319
- class: `static_validated`
- events: `25300`, delta: `+0x4`, shape: `VVVV`
- operands: `b0=var255(top=0x99:2.0%);b1=var198(top=0x77:2.9%);b2=var250(top=0xa6:2.9%);b3=var248(top=0xcf:2.6%)`
- words: `w0=var2171(top=0x67d1:1.0%);w1=var2097(top=0xaca6:1.1%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `4 paths over 7722 state events`
- branch predicates: `128/640 unknown branches (20.0%): live_in_reg:128`
- unknown branch sites: `0x90334:je:live_in_reg:128`
- GPR+scratch-seeded branch predicates: `0/640 unknown branches (0.0%): `
- flags: `0x90389: flags and= flags0 & state0 | 0x6729b5bf | 0x903e9: flags sub= flags0 & state0 | 0x6729b5bf - 0x3dca653f | 0x903f9: flags xor= flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 | 0x90416: flags add= flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 | ...6 omitted... | 0x90670: flags and= flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 - 0x3b2cb159 & 0xfc7215c & 0x662844c - 0x7bdaf9d9 ^ 0x257a9d7d ^ 0x665346b9 & 0x1c8b6fee`
- state: `0x90434: state xor= state0 ^ flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 & 0x48367f78 | 0x90442: state xor= state0 ^ flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 & 0x48367f78 ^ 0x63bb548f | 0x9047d: state add= state0 ^ flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 & 0x48367f78 ^ 0x63bb548f + flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 | 0x904ce: state and= state0 ^ flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 & 0x48367f78 ^ 0x63bb548f + flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 & 0x292b555d | ...2 om...#b794c085653d`
- slot: `51=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bf)))) + state0)) & 0x48367f78)))) ^ 0x63bb548f)) + (mask32((mas...#c641ff3c3e67 | 36=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32((mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bf)))) - 0x3dca653f)) ^ 0x671da5f4)) + state0)) ...#2b79eeb26734`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `66@0x855ff:2041,185@0x9d964:1516,215@0xa4609:1500,18@0x7be9b:1307,20@0x7c62b:1184,158@0x99029:1132`

## Entry 189 @ 0x9e7af
- class: `static_validated`
- events: `25112`, delta: `+0x4`, shape: `VVVV`
- operands: `b0=var256(top=0xec:1.7%);b1=var256(top=0x00:4.4%);b2=var64(top=0xbc:6.1%);b3=var64(top=0xe7:4.7%)`
- words: `w0=var2134(top=0xf73e:1.4%);w1=var1336(top=0xd6ec:1.7%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 7459 state events`
- branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- unknown branch sites: `0x9e880:je:live_in_reg:128`
- GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- flags: `0x9e802: flags sub= flags0 - 0x10705ace | 0x9e869: flags and= flags0 - 0x10705ace & 0x49036387 | 0x9e92d: flags and= flags0 - 0x10705ace & 0x49036387 & state0 & 0x160e4f34 | 0x1ca9af86 | 0x9e946: flags xor= flags0 - 0x10705ace & 0x49036387 & state0 & 0x160e4f34 | 0x1ca9af86 ^ 0x4ac58a82`
- state: `0x9e8b9: state and= state0 & 0x160e4f34 | 0x9ea69: state add= state0 & 0x160e4f34 + u16_2 + state0 & 0x160e4f34 ^ 0x2a1ce984`
- slot: `128=(mask32((mask32(u16_2 + (mask32(state0 & 0x160e4f34)))) ^ 0x2a1ce984)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `18@0x7be9b:1894,297@0xb64d7:1503,215@0xa4609:1354,174@0x9bd8f:1273,307@0xb8064:1197,43@0x8173d:1121`

## Entry 347 @ 0xc088d
- class: `static_validated`
- events: `24299`, delta: `+0x4`, shape: `VVVV`
- operands: `b0=var256(top=0xe6:2.1%);b1=var79(top=0x0b:6.4%);b2=var230(top=0xba:3.9%);b3=var101(top=0x82:10.2%)`
- words: `w0=var1845(top=0x8d20:1.4%);w1=var1485(top=0x02ad:1.5%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 8151 state events`
- branch predicates: `128/256 unknown branches (50.0%): derived_live_in:128`
- unknown branch sites: `0xc093d:je:derived_live_in:128`
- GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- flags: `0xc0952: flags xor= flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 | 0xc0973: flags add= flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | flags0 + 0x6fa972f0 | 0x2efc96c5 | 0xc09d2: flags or= flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | flags0 + 0x6fa972f0 | 0x2efc96c5 | 0x6630614f | 0xc09e3: flags xor= flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | flags0 + 0x6fa972f0 | 0x2efc96c5 | 0x6630614f ^ 0x1a7ef2ae | ...1 omitted... | 0xc0b53: flags xor= flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | flags0 + 0x6fa972f0 | 0x2efc96c5 | 0x6630614f ^ 0x1a7ef2ae | ...#a6e72f829c55`
- state: `0xc08bf: state or= state0 | flags0 + 0x6fa972f0 | 0xc098d: state or= state0 | flags0 + 0x6fa972f0 | flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | flags0 + 0x6fa972f0 | 0x2efc96c5 | 0xc09ea: state xor= state0 | flags0 + 0x6fa972f0 | flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | flags0 + 0x6fa972f0 | 0x2efc96c5 ^ 0x5cf483c7 | 0xc0a20: state and= state0 | flags0 + 0x6fa972f0 | flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | flags0 + 0x6fa972f0 | 0x2efc96c5 ^ 0x5cf483c7 & flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | ...#b2a6f52463ad | ...2 omitted... | 0xc0c...#4ab75977c806`
- slot: `92=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))) | (mask32((mask32(flags0 ^ (mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))...#ff65f5013123 | 36=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))) | (mask32((mask32(flags0 ^ (mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))...#65eb4914bbdc`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `18@0x7be9b:1928,307@0xb8064:1577,297@0xb64d7:1475,28@0x7e390:1302,168@0x9aa83:1257,184@0x9d694:1071`

## Entry 307 @ 0xb8064
- class: `static_validated`
- events: `24095`, delta: `+0x3`, shape: `VVV`
- operands: `b0=var252(top=0x3a:9.2%);b1=var29(top=0x9d:8.1%);b2=var12(top=0xaf:24.2%)`
- words: `w0=var1340(top=0x3d3a:1.5%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `1 paths over 7050 state events`
- branch predicates: `128/256 unknown branches (50.0%): live_in_reg:128`
- unknown branch sites: `0xb80ac:je:live_in_reg:128`
- GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- flags: `0xb80fa: flags and= flags0 & 0x5792b958`
- state: `0xb80ed: state xor= state0 ^ b0 - flags0 | 0xb8162: state and= state0 ^ b0 - flags0 & flags0 & 0x5792b958 | 0xb81e7: state xor= state0 ^ b0 - flags0 & flags0 & 0x5792b958 ^ flags0 & 0x5792b958`
- slot: `128=(mask32(u16_1 - 0x665a9b5)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x3`
- top targets: `114@0x90319:1754,176@0x9c10b:1332,189@0x9e7af:1166,337@0xbec0e:1159,258@0xadf2c:1055,340@0xbf435:1046`

## Entry 64 @ 0x85059
- class: `static_validated`
- events: `23678`, delta: `+0x4`, shape: `VVVV`
- operands: `b0=var256(top=0xef:1.6%);b1=var256(top=0x8a:1.6%);b2=var256(top=0x93:2.0%);b3=var252(top=0x00:3.6%)`
- words: `w0=var2176(top=0x8a33:1.1%);w1=var1967(top=0x0091:1.3%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 6175 state events`
- branch predicates: `0/256 unknown branches (0.0%): `
- GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- flags: `0x85099: flags add= flags0 + 0x4cd0c9ae | 0x850e8: flags add= flags0 + 0x4cd0c9ae + 0x711675f2 | 0x850f7: flags and= flags0 + 0x4cd0c9ae + 0x711675f2 & 0x5b249a06 | 0x851b7: flags add= flags0 + 0x4cd0c9ae + 0x711675f2 & 0x5b249a06 + 0x729dddb0`
- state: `0x850ab: state sub= state0 - 0x79614de5 | 0x851aa: state xor= state0 - 0x79614de5 ^ u16_2 + flags0 + 0x4cd0c9ae + 0x711675f2 & 0x5b249a06 | 0x85202: state xor= state0 - 0x79614de5 ^ u16_2 + flags0 + 0x4cd0c9ae + 0x711675f2 & 0x5b249a06 ^ flags0 + 0x4cd0c9ae + 0x711675f2 & 0x5b249a06 + 0x729dddb0`
- slot: `77=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 - 0x79614de5)) ^ (mask32(u16_2 + flags0)))) ^ (mask32(flags0 + 0x729dddb0)))))) + 0x2701cdcd)) & 0xffff | 51=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 - 0x79614de5)) ^ (mask32(u16_2 + (mask32(flags0 + 0x4cd0c9ae)))))) ^ (mask32((mask32(flags0 + 0x4cd0c9ae)) + 0x729dddb0)))))) + 0x2701cdcd)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `18@0x7be9b:2091,28@0x7e390:1633,199@0xa0631:1345,184@0x9d694:1255,215@0xa4609:1065,66@0x855ff:1024`

## Entry 66 @ 0x855ff
- class: `static_validated`
- events: `22739`, delta: `+0x3`, shape: `VVV`
- operands: `b0=var248(top=0x65:2.5%);b1=var253(top=0xa8:2.1%);b2=var114(top=0x3a:8.4%)`
- words: `w0=var2074(top=0xc1e2:1.1%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 7189 state events`
- branch predicates: `128/512 unknown branches (25.0%): live_in_reg:128`
- unknown branch sites: `0x85621:je:live_in_reg:128`
- GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- flags: `0x85679: flags sub= flags0 - 0x50170614 | 0x85688: flags or= flags0 - 0x50170614 | 0x7167293a | 0x85864: flags xor= flags0 - 0x50170614 | 0x7167293a ^ 0x42a6ffd6`
- state: `0x85710: state and= state0 & 0x2f6cb1f6 | 0x85829: state sub= state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 | 0x858b9: state xor= state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 ^ 0x745ff1d2 | 0x858f1: state and= state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 ^ 0x745ff1d2 & 0x13de2cdd | ...1 omitted... | 0x859d0: state xor= state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 ^ 0x745ff1d2 & 0x13de2cdd - flags0 - 0x50170614 | 0x7167293a ^ 0x42a6ffd6 ^ u16_0 - state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 ^ 0x745ff1d2 & 0x13de2cdd...#fa82cf391b8b`
- slot: `99=(mask32((mask32(u16_0 - (mask32((mask32((mask32((mask32((mask32(state0 & 0x2f6cb1f6)) - (mask32(b2 ^ (mask32(state0 & 0x2f6cb1f6)))))) ^ 0x745ff1d2)) & 0x13de2cdd)) - (mask32(flags0 ^ 0x42a6ffd6)))))) - ...#921995e973bc | 29=(mask32((mask32(u16_0 - (mask32((mask32((mask32((mask32((mask32(state0 & 0x2f6cb1f6)) - (mask32(b2 ^ (mask32(state0 & 0x2f6cb1f6)))))) ^ 0x745ff1d2)) & 0x13de2cdd)) - (mask32((mask32((mask32(flags0 - 0x5...#0b5fd959eb50`
- tail: `next = table[slot]; ip += 128=0x3`
- top targets: `337@0xbec0e:1650,64@0x85059:1561,340@0xbf435:1336,184@0x9d694:1324,189@0x9e7af:1320,258@0xadf2c:1075`

## Entry 185 @ 0x9d964
- class: `static_validated`
- events: `21620`, delta: `+0x3`, shape: `VVE`
- operands: `b0=var189(top=0xe3:2.6%);b1=var153(top=0x89:2.3%);b2=enum3(0x3a:20775,0x62:559,0x50:286)`
- words: `w0=var1732(top=0x288b:1.2%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `1 paths over 6172 state events`
- branch predicates: `128/512 unknown branches (25.0%): derived_live_in:128`
- unknown branch sites: `0x9db82:je:derived_live_in:128`
- GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- flags: `0x9da22: flags or= flags0 | 0x17e55682 | 0x9da9d: flags add= flags0 | 0x17e55682 + 0x28030c24 | 0x9daad: flags xor= flags0 | 0x17e55682 + 0x28030c24 ^ 0x30d03eec | 0x9dade: flags or= flags0 | 0x17e55682 + 0x28030c24 ^ 0x30d03eec | 0x7fa981a | 0x9daee: flags xor= flags0 | 0x17e55682 + 0x28030c24 ^ 0x30d03eec | 0x7fa981a ^ 0x5ea8d1c5`
- state: `0x9da5f: state xor= state0 ^ flags0 | 0x17e55682 | 0x9da76: state xor= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 | 0x9db24: state and= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & 0x1f29f35 | 0x9dba1: state add= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & 0x1f29f35 + flags0 | 0x17e55682 + 0x28030c24 ^ 0x30d03eec | 0x7fa981a ^ 0x5ea8d1c5 | 0x9dc75: state or= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & 0x1f29f35 + flags0 | 0x17e55682 + 0x28030c24 ^ 0x30d03eec | 0x7fa981a ^ 0x5ea8d1c5 | u16_0 ^ state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & 0x1f29f35 + flags0 | 0...#5a14740e36ed`
- slot: `128=(mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 | 0x17e55682)))) ^ 0x2000c224)) & 0x1f29f35)) + (mask32((mask32((mask32((mask32((mask32(flags0 | 0x17e55682)) + 0x28030c24)) ^ 0x30...#9720c2374b63`
- tail: `next = table[slot]; ip += 128=0x3`
- top targets: `337@0xbec0e:1336,64@0x85059:1324,347@0xc088d:1270,174@0x9bd8f:1182,258@0xadf2c:1100,168@0x9aa83:964`

## Entry 215 @ 0xa4609
- class: `static_validated`
- events: `21174`, delta: `+0x3`, shape: `VVV`
- operands: `b0=var29(top=0x88:10.5%);b1=var11(top=0x05:21.1%);b2=var114(top=0xc8:9.2%)`
- words: `w0=var88(top=0x0390:6.4%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 7121 state events`
- branch predicates: `0/512 unknown branches (0.0%): `
- GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- flags: `0xa4681: flags or= flags0 | 0x77dcc51b | 0xa46b3: flags xor= flags0 | 0x77dcc51b ^ 0xee9796d | 0xa4756: flags add= flags0 | 0x77dcc51b ^ 0xee9796d + 0x269ea56a | 0xa4768: flags xor= flags0 | 0x77dcc51b ^ 0xee9796d + 0x269ea56a ^ 0x6abba0b9 | ...1 omitted... | 0xa48ef: flags add= flags0 | 0x77dcc51b ^ 0xee9796d + 0x269ea56a ^ 0x6abba0b9 - 0x4d415ee2 + 0x5966d257`
- state: `0xa4652: state or= state0 | 0x760f463f | 0xa4719: state sub= state0 | 0x760f463f - flags0 | 0x77dcc51b ^ 0xee9796d ^ 0x717a207c | 0xa477a: state add= state0 | 0x760f463f - flags0 | 0x77dcc51b ^ 0xee9796d ^ 0x717a207c + 0x15a799dd | 0xa4794: state or= state0 | 0x760f463f - flags0 | 0x77dcc51b ^ 0xee9796d ^ 0x717a207c + 0x15a799dd | 0x6c5f0f12 | ...2 omitted... | 0xa49f0: state sub= state0 | 0x760f463f - flags0 | 0x77dcc51b ^ 0xee9796d ^ 0x717a207c + 0x15a799dd | 0x6c5f0f12 + b2 + state0 | 0x760f463f - flags0 | 0x77dcc51b ^ 0xee9796d ^ 0x717a207c + 0x15a799dd | 0x6c5f0f12 | 0x38d2bdd3 - u16_0`
- slot: `128=u16_0 & 0xffff`
- tail: `next = table[slot]; ip += 128=0x3`
- top targets: `114@0x90319:1359,337@0xbec0e:1186,347@0xc088d:1123,189@0x9e7af:1119,258@0xadf2c:1070,340@0xbf435:1042`

## Entry 297 @ 0xb64d7
- class: `static_validated`
- events: `20640`, delta: `+0x3`, shape: `VVV`
- operands: `b0=var222(top=0x89:5.5%);b1=var249(top=0x2e:3.1%);b2=var256(top=0xad:1.8%)`
- words: `w0=var1599(top=0x2e89:2.1%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 6483 state events`
- branch predicates: `256/640 unknown branches (40.0%): live_in_reg:256`
- unknown branch sites: `0xb64f9:je:live_in_reg:128,0xb651f:je:live_in_reg:128`
- GPR+scratch-seeded branch predicates: `0/640 unknown branches (0.0%): `
- flags: `0xb655f: flags add= flags0 + 0x283684b4 | 0xb656f: flags xor= flags0 + 0x283684b4 ^ 0x4a5a939a | 0xb660f: flags or= flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb | 0xb6781: flags add= flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb + 0xe00fc8a`
- state: `0xb64ee: state sub= state0 - 0x48220942 | 0xb662c: state or= state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb | 0xb6638: state xor= state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb ^ 0x6b7f38b7 | 0xb675f: state add= state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb ^ 0x6b7f38b7 + b0 + state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb ^ 0x6b7f38b7 + flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb | 0xb68a4: state sub= state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb ^ 0x6b7f38b7 + b0 + state0 - 0x48220942 | flags0 + 0x283684b4 ...#5cbcb91e7d87`
- slot: `90=(mask32((mask32(u16_1 - (mask32((mask32((mask32((mask32(state0 - 0x48220942)) | flags0)) ^ 0x6b7f38b7)) + (mask32((mask32(b0 + (mask32((mask32((mask32(state0 - 0x48220942)) | flags0)) ^ 0x6b7f38b7)))) + ...#1cd190d01d02 | 38=(mask32((mask32(u16_1 - (mask32((mask32((mask32((mask32(state0 - 0x48220942)) | (mask32((mask32(flags0 + 0x283684b4)) ^ 0x4a5a939a)))) ^ 0x6b7f38b7)) + (mask32((mask32(b0 + (mask32((mask32((mask32(state0...#7c8518f30604`
- tail: `next = table[slot]; ip += 128=0x3`
- top targets: `347@0xc088d:1305,258@0xadf2c:1285,340@0xbf435:1194,114@0x90319:909,123@0x91a59:902,43@0x8173d:896`

## Entry 199 @ 0xa0631
- class: `static_validated`
- events: `19641`, delta: `+0x3`, shape: `VVV`
- operands: `b0=var128(top=0xc7:3.5%);b1=var256(top=0x88:2.4%);b2=var179(top=0x3a:9.8%)`
- words: `w0=var1708(top=0xc186:1.3%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 6207 state events`
- branch predicates: `128/512 unknown branches (25.0%): derived_live_in:128`
- unknown branch sites: `0xa094b:je:derived_live_in:128`
- GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- flags: `0xa0686: flags xor= flags0 ^ 0x7353b039 | 0xa0698: flags sub= flags0 ^ 0x7353b039 - 0x24d1328a | 0xa08d2: flags and= flags0 ^ 0x7353b039 - 0x24d1328a & 0x4705559f | 0xa08f6: flags add= flags0 ^ 0x7353b039 - 0x24d1328a & 0x4705559f + 0x79865026 | ...2 omitted... | 0xa0995: flags and= flags0 ^ 0x7353b039 - 0x24d1328a & 0x4705559f + 0x79865026 + 0x73a763f8 | 0x3383da68 & 0x16833a14`
- state: `0xa07a1: state add= state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a | 0xa0856: state xor= state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a ^ 0x7e708197 | 0xa0891: state and= state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a ^ 0x7e708197 & 0x20d5418 | 0xa08b8: state add= state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a ^ 0x7e708197 & 0x20d5418 + flags0 ^ 0x7353b039 - 0x24d1328a`
- slot: `106=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 + (mask32(b2 + flags0)))) ^ 0x7e708197)) & 0x20d5418)) + flags0)))) + 0x3030bb89)) & 0xffff | 22=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 + (mask32(b2 + (mask32((mask32(flags0 ^ 0x7353b039)) - 0x24d1328a)))))) ^ 0x7e708197)) & 0x20d5418)) + (mask32((mask32(flags0 ^ 0x7353b039))...#ac9d0d548603`
- tail: `next = table[slot]; ip += 128=0x3`
- top targets: `258@0xadf2c:1481,64@0x85059:1221,340@0xbf435:993,189@0x9e7af:968,184@0x9d694:957,346@0xc0535:947`

## Entry 43 @ 0x8173d
- class: `static_validated`
- events: `16136`, delta: `+0x4`, shape: `VVVV`
- operands: `b0=var251(top=0x17:2.2%);b1=var251(top=0x74:5.0%);b2=var252(top=0xa3:3.3%);b3=var244(top=0x00:10.4%)`
- words: `w0=var1390(top=0x7bb7:1.6%);w1=var1246(top=0x005f:2.2%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 5309 state events`
- branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- unknown branch sites: `0x81818:je:live_in_reg:128`
- GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- flags: `0x817b0: flags xor= flags0 ^ 0x542b3101 | 0x8198e: flags and= flags0 ^ 0x542b3101 & 0x494c0852`
- state: `0x81951: state xor= state0 ^ u16_2 ^ state0`
- slot: `128=(mask32((mask32(u16_0 ^ (mask32(state0 ^ (mask32(u16_2 ^ state0)))))) - 0x64d373dc)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `347@0xc088d:1058,287@0xb45d2:806,337@0xbec0e:770,26@0x7dbbb:765,189@0x9e7af:762,297@0xb64d7:745`

## Entry 157 @ 0x98a9a
- class: `static_validated`
- events: `14693`, delta: `+0x4`, shape: `VVVE`
- operands: `b0=var125(top=0x03:4.1%);b1=var228(top=0xd8:4.3%);b2=var17(top=0x68:20.5%);b3=enum2(0x00:12160,0x01:2533)`
- words: `w0=var1238(top=0x8b7b:1.7%);w1=var17(top=0x0068:20.5%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `4 paths over 4834 state events`
- branch predicates: `128/896 unknown branches (14.3%): unknown_frame_field:128`
- unknown branch sites: `0x98e31:je:unknown_frame_field:128`
- GPR+scratch-seeded branch predicates: `0/896 unknown branches (0.0%): `
- flags: `0x98ace: flags add= flags0 + 0x3f0d8c6a | 0x98b0b: flags add= flags0 + 0x3f0d8c6a + 0x2832271c | 0x98b1b: flags xor= flags0 + 0x3f0d8c6a + 0x2832271c ^ 0x520e3305 | 0x98b52: flags and= flags0 + 0x3f0d8c6a + 0x2832271c ^ 0x520e3305 & 0x7edaa354 | ...6 omitted... | 0x98e75: flags add= flags0 + 0x3f0d8c6a + 0x2832271c ^ 0x520e3305 & 0x7edaa354 ^ 0x68e1604d ^ 0x3d2638af & state0 ^ 0x2f4dfd84 + u16_2 & 0x60d377f3 | 0x16c8bc3 + 0x3c968e24 + 0x6fc3a660`
- state: `0x98b21: state xor= state0 ^ 0x2f4dfd84 | 0x98c64: state add= state0 ^ 0x2f4dfd84 + u16_2 | 0x98d26: state or= state0 ^ 0x2f4dfd84 + u16_2 | 0x1f5cd114 | 0x98d43: state sub= state0 ^ 0x2f4dfd84 + u16_2 | 0x1f5cd114 - flags0 + 0x3f0d8c6a + 0x2832271c ^ 0x520e3305 & 0x7edaa354 ^ 0x68e1604d ^ 0x3d2638af & state0 ^ 0x2f4dfd84 + u16_2 | 0x98fba: state xor= state0 ^ 0x2f4dfd84 + u16_2 | 0x1f5cd114 - flags0 + 0x3f0d8c6a + 0x2832271c ^ 0x520e3305 & 0x7edaa354 ^ 0x68e1604d ^ 0x3d2638af & state0 ^ 0x2f4dfd84 + u16_2 ^ u16_0 + state0 ^ 0x2f4dfd84 + u16_2 | 0x1f5...#5fe96d68601e`
- slot: `79=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32(state0 ^ 0x2f4dfd84)) + u16_2)) | 0x1f5cd114)) - (mask32((mask32(flags0 ^ 0x3d2638af)) & (mask32((mask32(state0 ^ 0x2f4dfd84)) + u16_2)))))))) ^ 0x...#f97c7f052dc0 | 49=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32(state0 ^ 0x2f4dfd84)) + u16_2)) | 0x1f5cd114)) - (mask32((mask32((mask32(flags0 + 0x3f0d8c6a)) ^ 0x3d2638af)) & (mask32((mask32(state0 ^ 0x2f4dfd84...#57e552ee959b`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `18@0x7be9b:993,199@0xa0631:922,66@0x855ff:885,340@0xbf435:831,64@0x85059:828,185@0x9d964:813`

## Entry 196 @ 0x9fbcd
- class: `static_validated`
- events: `14371`, delta: `+0x4`, shape: `VVVV`
- operands: `b0=var249(top=0xef:3.2%);b1=var250(top=0x6e:7.0%);b2=var62(top=0x0c:6.1%);b3=var110(top=0xf6:6.1%)`
- words: `w0=var1095(top=0x6efd:2.4%);w1=var745(top=0xf40c:3.6%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 4953 state events`
- branch predicates: `0/256 unknown branches (0.0%): `
- GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- flags: `0x9fcff: flags or= flags0 | 0x4083ed99 | 0x9fdae: flags and= flags0 | 0x4083ed99 & state0 | 0x52e5924a ^ 0x20047816 | 0x9fdbb: flags and= flags0 | 0x4083ed99 & state0 | 0x52e5924a ^ 0x20047816 & 0x7ca762c5 | 0x9fe05: flags sub= flags0 | 0x4083ed99 & state0 | 0x52e5924a ^ 0x20047816 & 0x7ca762c5 - 0x5ff2f608 | ...1 omitted... | 0x9fe81: flags add= flags0 | 0x4083ed99 & state0 | 0x52e5924a ^ 0x20047816 & 0x7ca762c5 - 0x5ff2f608 + 0x789b1461 + 0x32c4b127`
- state: `0x9fbd7: state or= state0 | 0x52e5924a | 0x9fe36: state add= state0 | 0x52e5924a + flags0 | 0x4083ed99 & state0 | 0x52e5924a ^ 0x20047816 & 0x7ca762c5 - 0x5ff2f608 + 0x789b1461 | 0x9fe43: state add= state0 | 0x52e5924a + flags0 | 0x4083ed99 & state0 | 0x52e5924a ^ 0x20047816 & 0x7ca762c5 - 0x5ff2f608 + 0x789b1461 + 0x37b5a024 | 0x9fe9d: state add= state0 | 0x52e5924a + flags0 | 0x4083ed99 & state0 | 0x52e5924a ^ 0x20047816 & 0x7ca762c5 - 0x5ff2f608 + 0x789b1461 + 0x37b5a024 + 0x2e12e35a | ...2 omitted... | 0x9ff29: state and= state0 | 0x52e5924a + flags0 | 0x4083ed99 & state0 | 0x52e5924a ^ 0x20047816 & 0x7ca762c5 -...#a2f7c53652c1`
- slot: `128=(mask32((mask32(u16_2 + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | 0x52e5924a)) + (mask32((mask32((mask32(flags0 | 0x4083ed99)) & (mask32((mask32(state0 | 0x52e5924a)) ^ 0x20047816)...#bb377d5c9375`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `18@0x7be9b:1113,189@0x9e7af:988,340@0xbf435:880,66@0x855ff:807,258@0xadf2c:771,33@0x7f7c4:666`

## Entry 168 @ 0x9aa83
- class: `static_validated`
- events: `14368`, delta: `+0x4`, shape: `VVVV`
- operands: `b0=var244(top=0xe3:6.9%);b1=var219(top=0x56:6.0%);b2=var192(top=0xde:4.8%);b3=var14(top=0xd9:19.8%)`
- words: `w0=var1171(top=0x564c:2.4%);w1=var620(top=0xd9ae:2.5%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 4535 state events`
- branch predicates: `256/768 unknown branches (33.3%): derived_live_in:128,live_in_reg:128`
- unknown branch sites: `0x9ab7f:je:live_in_reg:128,0x9ad6a:je:derived_live_in:128`
- GPR+scratch-seeded branch predicates: `0/768 unknown branches (0.0%): `
- flags: `0x9aaac: flags and= flags0 & 0x66031b5e | 0x9aabd: flags sub= flags0 & 0x66031b5e - 0x2eab70d9 | 0x9aaed: flags xor= flags0 & 0x66031b5e - 0x2eab70d9 ^ 0x7c2abc25 | 0x9aafe: flags and= flags0 & 0x66031b5e - 0x2eab70d9 ^ 0x7c2abc25 & 0x46cbe42d | ...4 omitted... | 0x9ada6: flags sub= flags0 & 0x66031b5e - 0x2eab70d9 ^ 0x7c2abc25 & 0x46cbe42d & 0x69af076d | 0x4ee70776 + 0x665b83da & 0x6f276977 - 0x62cd6083`
- state: `0x9ab11: state or= state0 | 0x6899d5d4 | 0x9ac87: state and= state0 | 0x6899d5d4 & u16_0 + flags0 & 0x66031b5e - 0x2eab70d9 ^ 0x7c2abc25 & 0x46cbe42d & 0x69af076d | 0x4ee70776 | 0x9aeba: state and= state0 | 0x6899d5d4 & u16_0 + flags0 & 0x66031b5e - 0x2eab70d9 ^ 0x7c2abc25 & 0x46cbe42d & 0x69af076d | 0x4ee70776 & u16_2 + state0 | 0x6899d5d4 & u16_0 + flags0 & 0x66031b5e - 0x2eab70d9 ^ 0x7c2abc25 & ...#19fd4973bc0f`
- slot: `74=(mask32((mask32(u16_2 + (mask32((mask32(state0 | 0x6899d5d4)) & (mask32(u16_0 + flags0)))))) + 0x553030a2)) & 0xffff | 54=(mask32((mask32(u16_2 + (mask32((mask32(state0 | 0x6899d5d4)) & (mask32(u16_0 + (mask32((mask32(flags0 & 0x66031b5e)) - 0x2eab70d9)))))))) + 0x553030a2)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `340@0xbf435:964,258@0xadf2c:861,337@0xbec0e:839,305@0xb78b0:795,189@0x9e7af:776,26@0x7dbbb:749`

## Entry 172 @ 0x9b68a
- class: `static_validated`
- events: `12531`, delta: `+0x4`, shape: `VVVV`
- operands: `b0=var252(top=0xb3:4.2%);b1=var232(top=0xae:3.5%);b2=var30(top=0x23:12.0%);b3=var11(top=0x03:16.3%)`
- words: `w0=var1039(top=0xa03e:2.0%);w1=var67(top=0x0ad3:6.8%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 4530 state events`
- branch predicates: `0/128 unknown branches (0.0%): `
- GPR+scratch-seeded branch predicates: `0/128 unknown branches (0.0%): `
- flags: `0x9b77c: flags xor= flags0 ^ 0x15bf847f | 0x9b7aa: flags and= flags0 ^ 0x15bf847f & state0 | 0x3eba9edf | 0x9b8c0: flags or= flags0 ^ 0x15bf847f & state0 | 0x3eba9edf | 0x7bf184c4`
- state: `0x9b7c5: state xor= state0 ^ 0x7070916c | 0x9b7d5: state sub= state0 ^ 0x7070916c - 0x6ecee241 | 0x9b8a2: state add= state0 ^ 0x7070916c - 0x6ecee241 + u16_0 ^ state0 ^ 0x7070916c - 0x6ecee241 ^ flags0 ^ 0x15bf847f & state0 | 0x3eba9edf | 0x9ba15: state or= state0 ^ 0x7070916c - 0x6ecee241 + u16_0 ^ state0 ^ 0x7070916c - 0x6ecee241 ^ flags0 ^ 0x15bf847f & state0 | 0x3eba9edf | u16_2 ^ 0x715f0a33`
- slot: `128=(mask32(u16_2 ^ 0x715f0a33)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `28@0x7e390:851,258@0xadf2c:760,199@0xa0631:756,305@0xb78b0:674,340@0xbf435:647,189@0x9e7af:642`

## Entry 333 @ 0xbd8af
- class: `static_validated`
- events: `12194`, delta: `+0x4`, shape: `VVVE`
- operands: `b0=var64(top=0x83:8.1%);b1=var50(top=0xf9:6.4%);b2=var17(top=0x68:18.1%);b3=enum2(0x00:10031,0x01:2163)`
- words: `w0=var783(top=0xf983:2.2%);w1=var17(top=0x0068:18.1%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `1 paths over 3602 state events`
- branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- unknown branch sites: `0xbd8d9:je:live_in_reg:128`
- GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- flags: `0xbd8d0: flags xor= flags0 ^ state0 | 0xbda1e: flags or= flags0 ^ state0 | state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 & flags0 ^ state0 + flags0 ^ state0 | 0x71cc1ee8 | 0x569ecec3 | 0x79528121 | 0xbda4c: flags and= flags0 ^ state0 | state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 & flags0 ^ state0 + flags0 ^ state0 | 0x71cc1ee8 | 0x569ecec3 | 0x79528121 & 0x491c3392 | 0xbda5c: flags sub= flags0 ^ state0 | state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 & flags0 ^ state0 + flags0 ^ state0 | 0x71cc1ee8 | 0x569ecec3 | 0x79528121 & 0x491c3392 - 0x69576a7a | 0xbdb48: flags and= flags0 ^ state0 | state0 ^ fl...#f21f30a922c0`
- state: `0xbd90b: state xor= state0 ^ flags0 ^ state0 | 0x37ccc6ea | 0xbd918: state sub= state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 | 0xbd980: state and= state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 & flags0 ^ state0 | 0xbd9ae: state add= state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 & flags0 ^ state0 + flags0 ^ state0 | 0x71cc1ee8 | ...1 omitted... | 0xbdcb2: state add= state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 & flags0 ^ state0 + flags0 ^ state0 | 0x71cc1ee8 | 0x569ecec3 + u16_0 - state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 & flags0 ^ state0 + flags0 ^ ...#3000aca71b5e`
- slot: `128=(mask32(u16_0 - (mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32(flags0 ^ state0)) | 0x37ccc6ea)))) - 0x61e56767)) & (mask32(flags0 ^ state0)))) + (mask32((mask32(flags0 ^ state0)) | 0x71...#3558817d6cd6`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `305@0xb78b0:766,114@0x90319:750,199@0xa0631:703,243@0xaab6a:667,64@0x85059:626,18@0x7be9b:613`

## Entry 184 @ 0x9d694
- class: `static_validated`
- events: `12094`, delta: `+0x4`, shape: `VVCC`
- operands: `b0=var96(top=0x5a:4.8%);b1=var242(top=0xf4:3.0%);b2=0xe8;b3=0x01`
- words: `w0=var833(top=0x632a:2.1%);w1=0x01e8`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `1 paths over 3100 state events`
- branch predicates: `0/128 unknown branches (0.0%): `
- GPR+scratch-seeded branch predicates: `0/128 unknown branches (0.0%): `
- flags: `0x9d80c: flags and= flags0 & state0 | flags0 | 0x19d0d4d + 0x3c030b15 ^ flags0 + 0x7db9efb0 ^ flags0 - flags0 ^ flags0 & 0x54b71e92`
- state: `0x9d6b2: state or= state0 | flags0 | 0x19d0d4d | 0x9d6c2: state add= state0 | flags0 | 0x19d0d4d + 0x3c030b15 | 0x9d76b: state xor= state0 | flags0 | 0x19d0d4d + 0x3c030b15 ^ flags0 + 0x7db9efb0 | 0x9d791: state xor= state0 | flags0 | 0x19d0d4d + 0x3c030b15 ^ flags0 + 0x7db9efb0 ^ flags0 | ...2 omitted... | 0x9d8fd: state add= state0 | flags0 | 0x19d0d4d + 0x3c030b15 ^ flags0 + 0x7db9efb0 ^ flags0 - flags0 ^ flags0 + u16_0 - state0 | flags0 | 0x19d0d4d + 0x3c030b15 ^ flags0 + 0x7db9efb0 ^ flags0 - flags0 ^ flags0 + 0x3f05b2f0`
- slot: `128=(mask32((mask32(u16_0 - (mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 | 0x19d0d4d)))) + 0x3c030b15)) ^ (mask32(flags0 + 0x7db9efb0)))) ^ flags0)) - flags0)) ^ flags0)))) + 0x3f05b2f0)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `340@0xbf435:1208,28@0x7e390:1166,337@0xbec0e:993,66@0x855ff:931,18@0x7be9b:885,114@0x90319:813`

## Entry 268 @ 0xb0007
- class: `static_validated`
- events: `12038`, delta: `+0x4`, shape: `VVVV`
- operands: `b0=var247(top=0x4a:3.3%);b1=var251(top=0x1c:6.8%);b2=var127(top=0x3e:4.0%);b3=var202(top=0x6c:7.2%)`
- words: `w0=var1073(top=0x1c4a:3.2%);w1=var916(top=0x6b72:2.1%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 3696 state events`
- branch predicates: `256/768 unknown branches (33.3%): derived_live_in:256`
- unknown branch sites: `0xb01e9:je:derived_live_in:128,0xb029a:je:derived_live_in:128`
- GPR+scratch-seeded branch predicates: `0/768 unknown branches (0.0%): `
- flags: `0xb017a: flags add= flags0 + 0x33c0c75b | 0xb0228: flags and= flags0 + 0x33c0c75b & 0x174c40ef | 0xb023a: flags sub= flags0 + 0x33c0c75b & 0x174c40ef - 0x554d11ee | 0xb0284: flags and= flags0 + 0x33c0c75b & 0x174c40ef - 0x554d11ee & 0x30ef8696 | 0xb0317: flags add= flags0 + 0x33c0c75b & 0x174c40ef - 0x554d11ee & 0x30ef8696 + 0x12696b26`
- state: `0xb0087: state or= state0 | 0x71bd1bb1 | 0xb0155: state add= state0 | 0x71bd1bb1 + u16_0 - state0 | 0x71bd1bb1 - flags0 | 0xb02c5: state and= state0 | 0x71bd1bb1 + u16_0 - state0 | 0x71bd1bb1 - flags0 & flags0 + 0x33c0c75b & 0x174c40ef - 0x554d11ee & 0x30ef8696 | 0xb034b: state or= state0 | 0x71bd1bb1 + u16_0 - state0 | 0x71bd1bb1 - flags0 & flags0 + 0x33c0c75b & 0x174c40ef - 0x554d11ee & 0x30ef8696 | flags0 + 0x33c0c75b & 0x174c40ef - 0x554d11ee & 0x30ef8696 + 0x12696b26 | 0xb0422: state xor= state0 | 0x71bd1bb1 + u16_0 - state0 | 0x71bd1bb1 - flags0 & flags0 + 0x33c0c75b & 0x174c40ef - 0x554d11ee & 0x30ef8696 | fl...#f0a52f44cbc7`
- slot: `87=(mask32((mask32(u16_2 - (mask32((mask32((mask32((mask32(state0 | 0x71bd1bb1)) + (mask32((mask32(u16_0 - (mask32(state0 | 0x71bd1bb1)))) - flags0)))) & (mask32((mask32((mask32(flags0 + 0x33c0c75b)) & 0x17...#c9358457d4d3 | 41=(mask32((mask32(u16_2 - (mask32((mask32((mask32((mask32(state0 | 0x71bd1bb1)) + (mask32((mask32(u16_0 - (mask32(state0 | 0x71bd1bb1)))) - flags0)))) & (mask32(flags0 + 0x33c0c75b)))) | (mask32(flags0 + 0...#0448ed8b5adb`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `243@0xaab6a:816,28@0x7e390:796,64@0x85059:710,185@0x9d964:693,215@0xa4609:585,305@0xb78b0:479`

## Entry 174 @ 0x9bd8f
- class: `static_validated`
- events: `11742`, delta: `+0x4`, shape: `VVCC`
- operands: `b0=var191(top=0x03:3.1%);b1=var238(top=0x64:3.1%);b2=0xe8;b3=0x01`
- words: `w0=var867(top=0x6c03:2.2%);w1=0x01e8`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `1 paths over 3318 state events`
- branch predicates: `0/128 unknown branches (0.0%): `
- GPR+scratch-seeded branch predicates: `0/128 unknown branches (0.0%): `
- state: `0x9bda5: state sub= state0 - flags0 | 0x9be01: state and= state0 - flags0 & flags0 | 0x9be52: state xor= state0 - flags0 & flags0 ^ flags0 | 0x9be7a: state add= state0 - flags0 & flags0 ^ flags0 + flags0 | ...1 omitted... | 0x9c02c: state or= state0 - flags0 & flags0 ^ flags0 + flags0 ^ 0x5fa9d2b1 | u16_0 + state0 - flags0 & flags0 ^ flags0 + flags0 ^ 0x5fa9d2b1 + 0x397fd954`
- slot: `128=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32((mask32(state0 - flags0)) & flags0)) ^ flags0)) + flags0)) ^ 0x5fa9d2b1)))) + 0x397fd954)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `28@0x7e390:1083,258@0xadf2c:1081,114@0x90319:941,347@0xc088d:812,337@0xbec0e:757,185@0x9d964:748`

## Entry 305 @ 0xb78b0
- class: `static_validated`
- events: `10874`, delta: `+0x4`, shape: `VVCC`
- operands: `b0=var237(top=0x40:4.1%);b1=var225(top=0x09:3.5%);b2=0xe8;b3=0x01`
- words: `w0=var731(top=0x0cb5:2.4%);w1=0x01e8`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 2662 state events`
- branch predicates: `256/1024 unknown branches (25.0%): live_in_reg:128,unknown_frame_field:128`
- unknown branch sites: `0xb78db:je:live_in_reg:128,0xb7978:jne:unknown_frame_field:128`
- GPR+scratch-seeded branch predicates: `0/1024 unknown branches (0.0%): `
- flags: `0xb78d4: flags and= flags0 & state0 | 0xb7934: flags and= flags0 & state0 & 0x14763e0c | 0xb7945: flags add= flags0 & state0 & 0x14763e0c + 0x47fe8c0b`
- state: `0xb7b55: state and= state0 & u16_0 + state0`
- slot: `128=(mask32(u16_0 + state0)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `307@0xb8064:1290,189@0x9e7af:771,297@0xb64d7:684,28@0x7e390:581,338@0xbf128:576,199@0xa0631:546`

## Entry 123 @ 0x91a59
- class: `static_validated`
- events: `10598`, delta: `+0x4`, shape: `VVCC`
- operands: `b0=var226(top=0x56:3.4%);b1=var237(top=0x96:3.3%);b2=0xe8;b3=0x01`
- words: `w0=var861(top=0xde81:2.4%);w1=0x01e8`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `4 paths over 2829 state events`
- branch predicates: `128/640 unknown branches (20.0%): live_in_reg:128`
- unknown branch sites: `0x91a6a:je:live_in_reg:128`
- GPR+scratch-seeded branch predicates: `0/640 unknown branches (0.0%): `
- flags: `0x91c64: flags and= flags0 & 0x6e640fcb | 0x91ca1: flags add= flags0 & 0x6e640fcb + 0x6b73b101 | 0x91cb2: flags add= flags0 & 0x6e640fcb + 0x6b73b101 + 0x2261b554 | 0x91d2b: flags add= flags0 & 0x6e640fcb + 0x6b73b101 + 0x2261b554 + 0x4cd877bf`
- state: `0x91d4d: state add= state0 + 0x3da77425 | 0x91e2a: state sub= state0 + 0x3da77425 - u16_0 - state0 + 0x3da77425 ^ 0x1603b0a9`
- slot: `128=(mask32((mask32(u16_0 - (mask32(state0 + 0x3da77425)))) ^ 0x1603b0a9)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `337@0xbec0e:1011,114@0x90319:972,66@0x855ff:944,347@0xc088d:901,64@0x85059:880,18@0x7be9b:646`

## Entry 176 @ 0x9c10b
- class: `static_validated`
- events: `10138`, delta: `+0x4`, shape: `CCVV`
- operands: `b0=0xe8;b1=0x01;b2=var235(top=0x82:3.5%);b3=var236(top=0x27:2.7%)`
- words: `w0=0x01e8;w1=var847(top=0x2e82:2.5%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 2512 state events`
- branch predicates: `0/384 unknown branches (0.0%): `
- GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- flags: `0x9c22f: flags sub= flags0 - 0x14b22a15`
- state: `0x9c16e: state and= state0 & flags0 | 0x9c17f: state and= state0 & flags0 & 0x2c46ace3 | 0x9c296: state or= state0 & flags0 & 0x2c46ace3 | flags0 - 0x14b22a15`
- slot: `78=(mask32((mask32(u16_2 - (mask32((mask32((mask32(state0 & flags0)) & 0x2c46ace3)) | flags0)))) ^ 0x37839d72)) & 0xffff | 50=(mask32((mask32(u16_2 - (mask32((mask32((mask32(state0 & flags0)) & 0x2c46ace3)) | (mask32(flags0 - 0x14b22a15)))))) ^ 0x37839d72)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `307@0xb8064:959,28@0x7e390:933,189@0x9e7af:821,340@0xbf435:797,18@0x7be9b:752,337@0xbec0e:714`

## Entry 315 @ 0xb9451
- class: `static_validated`
- events: `9921`, delta: `+0x4`, shape: `CCVV`
- operands: `b0=0xe8;b1=0x01;b2=var18(top=0xe1:11.7%);b3=var10(top=0xfa:20.4%)`
- words: `w0=0x01e8;w1=var25(top=0xf091:10.1%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 3298 state events`
- branch predicates: `128/768 unknown branches (16.7%): unknown_frame_field:128`
- unknown branch sites: `0xb961d:jne:unknown_frame_field:128`
- GPR+scratch-seeded branch predicates: `0/768 unknown branches (0.0%): `
- flags: `0xb94e6: flags xor= flags0 ^ 0x285c750c`
- state: `0xb949b: state and= state0 & 0x7562ddb5 | 0xb94b8: state xor= state0 & 0x7562ddb5 ^ 0x25ede89c | 0xb950c: state sub= state0 & 0x7562ddb5 ^ 0x25ede89c - 0x19140c1b | 0xb96fb: state xor= state0 & 0x7562ddb5 ^ 0x25ede89c - 0x19140c1b ^ flags0 ^ 0x285c750c | 0xb9839: state or= state0 & 0x7562ddb5 ^ 0x25ede89c - 0x19140c1b ^ flags0 ^ 0x285c750c | u16_2 ^ 0x42c7f071`
- slot: `128=(mask32(u16_2 ^ 0x42c7f071)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `28@0x7e390:1006,337@0xbec0e:731,307@0xb8064:617,215@0xa4609:544,64@0x85059:543,157@0x98a9a:512`

## Entry 26 @ 0x7dbbb
- class: `static_validated`
- events: `9886`, delta: `+0x4`, shape: `VVCC`
- operands: `b0=var176(top=0x9e:4.5%);b1=var242(top=0xcf:3.6%);b2=0xe8;b3=0x01`
- words: `w0=var832(top=0x5a9e:2.6%);w1=0x01e8`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `5 paths over 3024 state events`
- branch predicates: `128/1280 unknown branches (10.0%): unknown_frame_field:128`
- unknown branch sites: `0x7ddeb:jne:unknown_frame_field:128`
- GPR+scratch-seeded branch predicates: `0/1280 unknown branches (0.0%): `
- flags: `0x7dbd8: flags sub= flags0 - state0 ^ 0x5fcdb203 | 0x7dc13: flags and= flags0 - state0 ^ 0x5fcdb203 & 0x637d285c | 0x7dc24: flags add= flags0 - state0 ^ 0x5fcdb203 & 0x637d285c + 0x44b4a975 | 0x7dc66: flags xor= flags0 - state0 ^ 0x5fcdb203 & 0x637d285c + 0x44b4a975 ^ state0 - 0x471264ca | 0x2a01f150 | ...8 omitted... | 0x7dec4: flags and= flags0 - state0 ^ 0x5fcdb203 & 0x637d285c + 0x44b4a975 ^ state0 - 0x471264ca | 0x2a01f150 | 0x7bdf07f3 + 0x104dd6df ^ 0x505df542 ^ 0xe71ae1d & 0x6dbe9345 + 0x521a2f7b + state0 - 0x471264ca + 0x1bfb4659 |...#716c05804890`
- state: `0x7dbe5: state sub= state0 - 0x471264ca | 0x7de85: state add= state0 - 0x471264ca + flags0 - state0 ^ 0x5fcdb203 & 0x637d285c + 0x44b4a975 ^ state0 - 0x471264ca | 0x2a01f150 | 0x7bdf07f3 + 0x104dd6df ^ 0x505df542 ^ 0xe71ae1d & 0x6dbe9345 + 0x521a2f7b + state0 - 0x4...#131b0c9f19b5 | 0x7df78: state sub= state0 - 0x471264ca + flags0 - state0 ^ 0x5fcdb203 & 0x637d285c + 0x44b4a975 ^ state0 - 0x471264ca | 0x2a01f150 | 0x7bdf07f3 + 0x104dd6df ^ 0x505df542 ^ 0xe71ae1d & 0x6dbe9345 + 0x521a2f7b + state0 - 0x4...#50422e60bb19`
- slot: `48=(mask32((mask32(u16_0 ^ (mask32((mask32(state0 - 0x471264ca)) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(flags0 - (mask32(state0 ^ 0x5fcdb203)))) ^ (mask32((mask32(state0 - 0x471264ca)) | ...#4dd3c457ce92 | 43=(mask32((mask32(u16_0 ^ (mask32((mask32(state0 - 0x471264ca)) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(flags0 - (mask32(state0 ^ 0x5fcdb203)))) & 0x637d285c)) + 0x44b4a97...#f947b75a6a0a`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `157@0x98a9a:959,66@0x855ff:687,114@0x90319:655,28@0x7e390:652,258@0xadf2c:567,185@0x9d964:518`

## Entry 203 @ 0xa1484
- class: `static_validated`
- events: `9820`, delta: `+0x4`, shape: `VVVV`
- operands: `b0=var26(top=0x17:11.8%);b1=var11(top=0x91:19.4%);b2=var120(top=0x3f:5.5%);b3=var99(top=0x76:14.3%)`
- words: `w0=var62(top=0x9017:7.1%);w1=var838(top=0x7635:3.0%)`
- validation: `state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128`
- paths: `2 paths over 3283 state events`
- branch predicates: `0/256 unknown branches (0.0%): `
- GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- flags: `0xa14b9: flags add= flags0 + 0x97da242 | 0xa157e: flags and= flags0 + 0x97da242 & state0 - flags0 + 0x97da242 & flags0 + 0x97da242 ^ 0x370370f1 | 0x1f1759c & 0x71376753 | 0xa16ce: flags add= flags0 + 0x97da242 & state0 - flags0 + 0x97da242 & flags0 + 0x97da242 ^ 0x370370f1 | 0x1f1759c & 0x71376753 + 0x2c217984`
- state: `0xa14d8: state sub= state0 - flags0 + 0x97da242 | 0xa1506: state and= state0 - flags0 + 0x97da242 & flags0 + 0x97da242 ^ 0x370370f1 | 0xa1514: state or= state0 - flags0 + 0x97da242 & flags0 + 0x97da242 ^ 0x370370f1 | 0x1f1759c | 0xa17e3: state or= state0 - flags0 + 0x97da242 & flags0 + 0x97da242 ^ 0x370370f1 | 0x1f1759c | flags0 + 0x97da242 & state0 - flags0 + 0x97da242 & flags0 + 0x97da242 ^ 0x370370f1 | 0x1f1759c & 0x71376753 + 0x2c217984 | 0x24d2add8 | ...3 omitted... | 0xa18da: state and= state0 - flags0 + 0x97da242 & flags0 + 0x97da242 ^ 0x370370f1 | 0x1f1759c | flags0 + 0x97da242 & state0 - flags0 + 0x97da242 ...#71e44fa5934d`
- slot: `128=(mask32(u16_0 ^ 0x4ccb9807)) & 0xffff`
- tail: `next = table[slot]; ip += 128=0x4`
- top targets: `258@0xadf2c:699,297@0xb64d7:584,64@0x85059:479,315@0xb9451:473,189@0x9e7af:461,66@0x855ff:445`

