# VM Path Microcode Catalog

Top 30 concrete handler paths by state-trace event count.

## Entry 258 Path 4be73f077fec7fc7
- target: `0xadf2c`, class: `static_validated`
- events: `6275`, validation: `target=100.0%, ip=100.0%, ok:6275`
- source branch predicates: `0/256 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- sampled expression events: `70`
- slot: `70=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 ^ 0x11095fd5)) + (mask32(flags0 ^ 0x1769756e)))) ^ (mask32(u16_2 - (mask32(flags0 ^ 0x1769756e)))))))) ^ 0x5812e92c)) & 0xffff`
- ip advance: `70=0x4`
- path: `0xadf51:je:1;0xadfe1:je:0`
- top actual targets: `215@0xa4609:640,43@0x8173d:598,307@0xb8064:571,196@0x9fbcd:357,18@0x7be9b:345,26@0x7dbbb:308,315@0xb9451:295,220@0xa522e:281`
- state: `0xadf8e: state xor= state0 ^ 0x11095fd5 | 0xae01c: state add= state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e | 0xae101: state xor= state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e ^ u16_2 - flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e | 0xae2d0: state and= state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e ^ u16_2 - flags0 - 0x1510614f | 0xa1b079a...#ed232433f958`

## Entry 307 Path 53af157f8d5a451e
- target: `0xb8064`, class: `static_validated`
- events: `5955`, validation: `target=100.0%, ip=100.0%, ok:5955`
- source branch predicates: `128/256 unknown branches (50.0%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- sampled expression events: `122`
- slot: `122=(mask32(u16_1 - 0x665a9b5)) & 0xffff`
- ip advance: `122=0x3`
- path: `0xb80ac:je:0;0xb8188:je:1`
- top actual targets: `174@0x9bd8f:381,26@0x7dbbb:351,157@0x98a9a:349,114@0x90319:346,340@0xbf435:306,196@0x9fbcd:297,161@0x9975a:296,337@0xbec0e:248`
- state: `0xb80ed: state xor= state0 ^ b0 - flags0 | 0xb8162: state and= state0 ^ b0 - flags0 & flags0 & 0x5792b958 | 0xb81e7: state xor= state0 ^ b0 - flags0 & flags0 & 0x5792b958 ^ flags0 & 0x5792b958`

## Entry 337 Path 7b2b924aeb11e845
- target: `0xbec0e`, class: `static_validated`
- events: `4577`, validation: `target=100.0%, ip=100.0%, ok:4577`
- source branch predicates: `256/768 unknown branches (33.3%): derived_live_in:128,unknown_frame_field:128`
- source GPR+scratch-seeded branch predicates: `0/768 unknown branches (0.0%): `
- path: `0xbec7a:je:0;0xbeea3:je:0;0xbeee0:je:?;0xbef44:je:0;0xbef67:je:0;0xbefac:je:0`
- top actual targets: `66@0x855ff:427,174@0x9bd8f:411,315@0xb9451:289,253@0xacfb1:257,297@0xb64d7:227,123@0x91a59:186,307@0xb8064:180,176@0x9c10b:178`
- state: `0xbec32: state sub= state0 - flags0 | 0xbed93: state sub= state0 - flags0 - u16_2 + state0 - flags0 + flags0 | 0xbeec8: state add= state0 - flags0 - u16_2 + state0 - flags0 + flags0 + 0x2051de91 | 0xbef26: state and= state0 - flags0 - u16_2 + state0 - flags0 + flags0 + 0x2051de91 & flags0 + 0x61f749a7 | ...2 omitted... | 0xbf0ec: state or= state0 - flags0 - u16_2 + state0 - flags0 + flags0 + 0x2051de...#723ef5b65a29`

## Entry 18 Path bdfe2dc323c2ac6d
- target: `0x7be9b`, class: `static_validated`
- events: `4522`, validation: `target=100.0%, ip=100.0%, ok:4522`
- source branch predicates: `128/512 unknown branches (25.0%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `94`
- slot: `94=(mask32(u16_0 - (mask32((mask32((mask32(state0 & flags0)) - 0x6382ce20)) & flags0)))) & 0xffff`
- ip advance: `94=0x3`
- path: `0x7bed4:je:0;0x7befe:je:1;0x7bfe0:je:1;0x7c17e:je:0`
- top actual targets: `114@0x90319:413,258@0xadf2c:361,300@0xb6c36:283,105@0x8e6b4:222,337@0xbec0e:216,174@0x9bd8f:201,347@0xc088d:190,20@0x7c62b:179`
- state: `0x7bf3a: state and= state0 & flags0 | 0x954df65 + 0x5b466f3b | 0x7bf47: state sub= state0 & flags0 | 0x954df65 + 0x5b466f3b - 0x6382ce20 | 0x7bf89: state and= state0 & flags0 | 0x954df65 + 0x5b466f3b - 0x6382ce20 & flags0 | 0x954df65 + 0x5b466f3b | 0x7c2b1: state sub= state0 & flags0 | 0x954df65 + 0x5b466f3b - 0x6382ce20 & flags0 | 0x954df65 + 0x5b466f3b - u16_0 - state0 & flags0 | 0x954df65 + 0x5b46...#60dd151a1c9c`

## Entry 66 Path f47171d373278492
- target: `0x855ff`, class: `static_validated`
- events: `4487`, validation: `target=100.0%, ip=100.0%, ok:4487`
- source branch predicates: `128/512 unknown branches (25.0%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `89`
- slot: `89=(mask32((mask32(u16_0 - (mask32((mask32((mask32((mask32((mask32(state0 & 0x2f6cb1f6)) - (mask32(b2 ^ (mask32(state0 & 0x2f6cb1f6)))))) ^ 0x745ff1d2)) & 0x13de2cdd)) - (mask32(flags0 ^ 0x42a6ffd6)))))) - 0x3cd18153)) & 0xffff`
- ip advance: `89=0x3`
- path: `0x85621:je:0;0x8566a:je:1;0x856f1:je:0;0x858d5:je:0`
- top actual targets: `337@0xbec0e:425,123@0x91a59:375,340@0xbf435:328,189@0x9e7af:317,158@0x99029:283,64@0x85059:278,49@0x82820:224,107@0x8eef4:219`
- state: `0x85710: state and= state0 & 0x2f6cb1f6 | 0x85829: state sub= state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 | 0x858b9: state xor= state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 ^ 0x745ff1d2 | 0x858f1: state and= state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 ^ 0x745ff1d2 & 0x13de2cdd | ...1 omitted... | 0x859d0: state xor= state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 ^ 0x745ff1d2 & 0x13de2cdd - fl...#a3a11d58dd06`

## Entry 347 Path cb333c548cc440f3
- target: `0xc088d`, class: `static_validated`
- events: `4411`, validation: `target=100.0%, ip=100.0%, ok:4411`
- source branch predicates: `128/256 unknown branches (50.0%): derived_live_in:128`
- source GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- sampled expression events: `92`
- slot: `92=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))) | (mask32((mask32(flags0 ^ (mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))) & 0x45223942)))) + (mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))) | 0x2efc96c5)))))) ^ 0...#38484e2d9466`
- ip advance: `92=0x4`
- path: `0xc093d:je:0;0xc09c2:je:1`
- top actual targets: `168@0x9aa83:468,174@0x9bd8f:356,28@0x7e390:336,297@0xb64d7:278,18@0x7be9b:270,158@0x99029:262,20@0x7c62b:247,118@0x90c23:191`
- state: `0xc08bf: state or= state0 | flags0 + 0x6fa972f0 | 0xc098d: state or= state0 | flags0 + 0x6fa972f0 | flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | flags0 + 0x6fa972f0 | 0x2efc96c5 | 0xc09ea: state xor= state0 | flags0 + 0x6fa972f0 | flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | flags0 + 0x6fa972f0 | 0x2efc96c5 ^ 0x5cf483c7 | 0xc0a20: state and= state0 | flags0 + 0x6fa97...#1a4e957ff170`

## Entry 215 Path 3c30635855970371
- target: `0xa4609`, class: `static_validated`
- events: `4283`, validation: `target=100.0%, ip=100.0%, ok:4283`
- source branch predicates: `0/512 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `83`
- slot: `83=u16_0 & 0xffff`
- ip advance: `83=0x3`
- path: `0xa4667:je:1;0xa46a3:je:1;0xa4746:je:1;0xa47d6:je:1`
- top actual targets: `114@0x90319:399,196@0x9fbcd:377,49@0x82820:342,172@0x9b68a:290,337@0xbec0e:226,340@0xbf435:175,157@0x98a9a:162,268@0xb0007:158`
- state: `0xa4652: state or= state0 | 0x760f463f | 0xa4719: state sub= state0 | 0x760f463f - flags0 | 0x77dcc51b ^ 0xee9796d ^ 0x717a207c | 0xa477a: state add= state0 | 0x760f463f - flags0 | 0x77dcc51b ^ 0xee9796d ^ 0x717a207c + 0x15a799dd | 0xa4794: state or= state0 | 0x760f463f - flags0 | 0x77dcc51b ^ 0xee9796d ^ 0x717a207c + 0x15a799dd | 0x6c5f0f12 | ...2 omitted... | 0xa49f0: state sub= state0 | 0x760f463f...#9c2573782834`

## Entry 196 Path 44a20faf942e72a8
- target: `0x9fbcd`, class: `static_validated`
- events: `4088`, validation: `target=100.0%, ip=100.0%, ok:4088`
- source branch predicates: `0/256 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- sampled expression events: `100`
- slot: `100=(mask32((mask32(u16_2 + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | 0x52e5924a)) + (mask32((mask32((mask32(flags0 | 0x4083ed99)) & (mask32((mask32(state0 | 0x52e5924a)) ^ 0x20047816)))) & 0x7ca762c5)))) + 0x37b5a024)) + 0x2e12e35a)) ^ 0x44fb7fdb)) + (mask32((mask32((mask32((mask32(...#4f1ee978b737`
- ip advance: `100=0x4`
- path: `0x9fd8f:je:1;0x9fdf5:je:1`
- top actual targets: `340@0xbf435:555,66@0x855ff:501,18@0x7be9b:338,215@0xa4609:287,273@0xb11ca:262,189@0x9e7af:202,347@0xc088d:117,305@0xb78b0:111`
- state: `0x9fbd7: state or= state0 | 0x52e5924a | 0x9fe36: state add= state0 | 0x52e5924a + flags0 | 0x4083ed99 & state0 | 0x52e5924a ^ 0x20047816 & 0x7ca762c5 - 0x5ff2f608 + 0x789b1461 | 0x9fe43: state add= state0 | 0x52e5924a + flags0 | 0x4083ed99 & state0 | 0x52e5924a ^ 0x20047816 & 0x7ca762c5 - 0x5ff2f608 + 0x789b1461 + 0x37b5a024 | 0x9fe9d: state add= state0 | 0x52e5924a + flags0 | 0x4083ed99 & state0 | ...#808a1b8132f1`

## Entry 297 Path 6091fdb2f82dc3fb
- target: `0xb64d7`, class: `static_validated`
- events: `3766`, validation: `target=100.0%, ip=100.0%, ok:3766`
- source branch predicates: `256/640 unknown branches (40.0%): live_in_reg:256`
- source GPR+scratch-seeded branch predicates: `0/640 unknown branches (0.0%): `
- sampled expression events: `84`
- slot: `84=(mask32((mask32(u16_1 - (mask32((mask32((mask32((mask32(state0 - 0x48220942)) | flags0)) ^ 0x6b7f38b7)) + (mask32((mask32(b0 + (mask32((mask32((mask32(state0 - 0x48220942)) | flags0)) ^ 0x6b7f38b7)))) + flags0)))))) ^ 0x9f24ccb)) & 0xffff`
- ip advance: `84=0x3`
- path: `0xb64f9:je:0;0xb651f:je:0;0xb654f:je:1;0xb65c8:je:0;0xb65f5:je:1`
- top actual targets: `196@0x9fbcd:471,347@0xc088d:395,203@0xa1484:296,301@0xb708d:228,258@0xadf2c:192,340@0xbf435:166,174@0x9bd8f:152,114@0x90319:122`
- state: `0xb64ee: state sub= state0 - 0x48220942 | 0xb662c: state or= state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb | 0xb6638: state xor= state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb ^ 0x6b7f38b7 | 0xb675f: state add= state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb ^ 0x6b7f38b7 + b0 + state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x66...#ea12cb176032`

## Entry 185 Path fec4d0c2dccf8472
- target: `0x9d964`, class: `static_validated`
- events: `3723`, validation: `target=100.0%, ip=100.0%, ok:3723`
- source branch predicates: `128/512 unknown branches (25.0%): derived_live_in:128`
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `71`
- slot: `71=(mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 | 0x17e55682)))) ^ 0x2000c224)) & 0x1f29f35)) + (mask32((mask32((mask32((mask32((mask32(flags0 | 0x17e55682)) + 0x28030c24)) ^ 0x30d03eec)) | 0x7fa981a)) ^ 0x5ea8d1c5)))))) & 0xffff`
- ip advance: `71=0x3`
- path: `0x9da8d:je:0;0x9dace:je:0;0x9db05:je:0;0x9db82:je:1`
- top actual targets: `332@0xbd36d:270,203@0xa1484:244,168@0x9aa83:244,347@0xc088d:238,337@0xbec0e:237,172@0x9b68a:196,220@0xa522e:165,64@0x85059:136`
- state: `0x9da5f: state xor= state0 ^ flags0 | 0x17e55682 | 0x9da76: state xor= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 | 0x9db24: state and= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & 0x1f29f35 | 0x9dba1: state add= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & 0x1f29f35 + flags0 | 0x17e55682 + 0x28030c24 ^ 0x30d03eec | 0x7fa981a ^ 0x5ea8d1c5 | 0x9dc75: state or= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & ...#3552952ce32a`

## Entry 340 Path 02ae05a16ed89aae
- target: `0xbf435`, class: `static_validated`
- events: `3507`, validation: `target=100.0%, ip=100.0%, ok:3507`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `71`
- slot: `71=(mask32((mask32(u16_0 + (mask32((mask32((mask32(state0 - 0x2b2e5a26)) ^ 0x7535dd25)) | u16_2)))) + 0x9097995)) & 0xffff`
- ip advance: `71=0x4`
- path: `0xbf457:je:0;0xbf48f:je:1;0xbf4d7:je:0`
- top actual targets: `307@0xb8064:323,28@0x7e390:315,287@0xb45d2:228,345@0xc02e4:219,215@0xa4609:157,333@0xbd8af:151,18@0x7be9b:148,297@0xb64d7:130`
- state: `0xbf4be: state sub= state0 - 0x2b2e5a26 | 0xbf4f6: state xor= state0 - 0x2b2e5a26 ^ 0x7535dd25 | 0xbf616: state or= state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 | 0xbf82b: state sub= state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 - u16_0 + state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 + 0x9097995`

## Entry 199 Path 454bb50b5a012434
- target: `0xa0631`, class: `static_validated`
- events: `3476`, validation: `target=100.0%, ip=100.0%, ok:3476`
- source branch predicates: `128/512 unknown branches (25.0%): derived_live_in:128`
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `106`
- slot: `106=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 + (mask32(b2 + flags0)))) ^ 0x7e708197)) & 0x20d5418)) + flags0)))) + 0x3030bb89)) & 0xffff`
- ip advance: `106=0x3`
- path: `0xa0676:je:1;0xa0921:je:0;0xa094b:je:0;0xa0985:je:0`
- top actual targets: `184@0x9d694:310,258@0xadf2c:307,114@0x90319:231,203@0xa1484:203,340@0xbf435:196,79@0x885b0:195,301@0xb708d:187,70@0x8610e:173`
- state: `0xa07a1: state add= state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a | 0xa0856: state xor= state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a ^ 0x7e708197 | 0xa0891: state and= state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a ^ 0x7e708197 & 0x20d5418 | 0xa08b8: state add= state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a ^ 0x7e708197 & 0x20d5418 + flags0 ^ 0x7353b039 - 0x24d1328a`

## Entry 64 Path 362f895a05304b24
- target: `0x85059`, class: `static_validated`
- events: `3435`, validation: `target=100.0%, ip=100.0%, ok:3435`
- source branch predicates: `0/256 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- sampled expression events: `77`
- slot: `77=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 - 0x79614de5)) ^ (mask32(u16_2 + flags0)))) ^ (mask32(flags0 + 0x729dddb0)))))) + 0x2701cdcd)) & 0xffff`
- ip advance: `77=0x4`
- path: `0x8507f:je:1;0x850d9:je:1`
- top actual targets: `199@0xa0631:332,121@0x91379:276,18@0x7be9b:247,28@0x7e390:233,215@0xa4609:221,185@0x9d964:161,307@0xb8064:158,66@0x855ff:138`
- state: `0x850ab: state sub= state0 - 0x79614de5 | 0x851aa: state xor= state0 - 0x79614de5 ^ u16_2 + flags0 + 0x4cd0c9ae + 0x711675f2 & 0x5b249a06 | 0x85202: state xor= state0 - 0x79614de5 ^ u16_2 + flags0 + 0x4cd0c9ae + 0x711675f2 & 0x5b249a06 ^ flags0 + 0x4cd0c9ae + 0x711675f2 & 0x5b249a06 + 0x729dddb0`

## Entry 258 Path 9273c2ebf377ada8
- target: `0xadf2c`, class: `static_validated`
- events: `3418`, validation: `target=100.0%, ip=100.0%, ok:3418`
- source branch predicates: `0/256 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- sampled expression events: `58`
- slot: `58=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 ^ 0x11095fd5)) + (mask32((mask32((mask32(flags0 - 0x1510614f)) | 0xa1b079a)) ^ 0x1769756e)))) ^ (mask32(u16_2 - (mask32((mask32((mask32(flags0 - 0x1510614f)) | 0xa1b079a)) ^ 0x1769756e)))))))) ^ 0x5812e92c)) & 0xffff`
- ip advance: `58=0x4`
- path: `0xadf51:je:0;0xadfe1:je:1`
- top actual targets: `172@0x9b68a:366,176@0x9c10b:328,157@0x98a9a:323,297@0xb64d7:222,199@0xa0631:171,18@0x7be9b:110,333@0xbd8af:108,66@0x855ff:106`
- state: `0xadf8e: state xor= state0 ^ 0x11095fd5 | 0xae01c: state add= state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e | 0xae101: state xor= state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e ^ u16_2 - flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e | 0xae2d0: state and= state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e ^ u16_2 - flags0 - 0x1510614f | 0xa1b079a...#ed232433f958`

## Entry 174 Path 1d005b75b3304463
- target: `0x9bd8f`, class: `static_validated`
- events: `3318`, validation: `target=100.0%, ip=100.0%, ok:3318`
- source branch predicates: `0/128 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/128 unknown branches (0.0%): `
- sampled expression events: `128`
- slot: `128=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32((mask32(state0 - flags0)) & flags0)) ^ flags0)) + flags0)) ^ 0x5fa9d2b1)))) + 0x397fd954)) & 0xffff`
- ip advance: `128=0x4`
- path: `0x9bf10:jne:1`
- top actual targets: `114@0x90319:446,258@0xadf2c:409,199@0xa0631:294,28@0x7e390:254,347@0xc088d:241,307@0xb8064:189,185@0x9d964:184,189@0x9e7af:173`
- state: `0x9bda5: state sub= state0 - flags0 | 0x9be01: state and= state0 - flags0 & flags0 | 0x9be52: state xor= state0 - flags0 & flags0 ^ flags0 | 0x9be7a: state add= state0 - flags0 & flags0 ^ flags0 + flags0 | ...1 omitted... | 0x9c02c: state or= state0 - flags0 & flags0 ^ flags0 + flags0 ^ 0x5fa9d2b1 | u16_0 + state0 - flags0 & flags0 ^ flags0 + flags0 ^ 0x5fa9d2b1 + 0x397fd954`

## Entry 333 Path 5dba04465e0f3b28
- target: `0xbd8af`, class: `static_validated`
- events: `3222`, validation: `target=100.0%, ip=100.0%, ok:3222`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `119`
- slot: `119=(mask32(u16_0 - (mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32(flags0 ^ state0)) | 0x37ccc6ea)))) - 0x61e56767)) & (mask32(flags0 ^ state0)))) + (mask32((mask32(flags0 ^ state0)) | 0x71cc1ee8)))) | 0x569ecec3)))) & 0xffff`
- ip advance: `119=0x4`
- path: `0xbd8d9:je:0;0xbd9ec:je:0;0xbda3c:je:0`
- top actual targets: `305@0xb78b0:306,215@0xa4609:297,258@0xadf2c:274,337@0xbec0e:164,28@0x7e390:138,243@0xaab6a:133,114@0x90319:128,64@0x85059:109`
- state: `0xbd90b: state xor= state0 ^ flags0 ^ state0 | 0x37ccc6ea | 0xbd918: state sub= state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 | 0xbd980: state and= state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 & flags0 ^ state0 | 0xbd9ae: state add= state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 & flags0 ^ state0 + flags0 ^ state0 | 0x71cc1ee8 | ...1 omitted... | 0xbdcb2: state add= state0 ^ flags0 ^ s...#5c8d72a16b9b`

## Entry 184 Path e4bc9d81d7bb0910
- target: `0x9d694`, class: `static_validated`
- events: `3100`, validation: `target=100.0%, ip=100.0%, ok:3100`
- source branch predicates: `0/128 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/128 unknown branches (0.0%): `
- sampled expression events: `128`
- slot: `128=(mask32((mask32(u16_0 - (mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 | 0x19d0d4d)))) + 0x3c030b15)) ^ (mask32(flags0 + 0x7db9efb0)))) ^ flags0)) - flags0)) ^ flags0)))) + 0x3f05b2f0)) & 0xffff`
- ip advance: `128=0x4`
- path: `0x9d710:jne:1`
- top actual targets: `28@0x7e390:471,66@0x855ff:426,337@0xbec0e:394,340@0xbf435:250,64@0x85059:182,114@0x90319:161,18@0x7be9b:159,347@0xc088d:125`
- state: `0x9d6b2: state or= state0 | flags0 | 0x19d0d4d | 0x9d6c2: state add= state0 | flags0 | 0x19d0d4d + 0x3c030b15 | 0x9d76b: state xor= state0 | flags0 | 0x19d0d4d + 0x3c030b15 ^ flags0 + 0x7db9efb0 | 0x9d791: state xor= state0 | flags0 | 0x19d0d4d + 0x3c030b15 ^ flags0 + 0x7db9efb0 ^ flags0 | ...2 omitted... | 0x9d8fd: state add= state0 | flags0 | 0x19d0d4d + 0x3c030b15 ^ flags0 + 0x7db9efb0 ^ flags0 - ...#5aa85880693c`

## Entry 189 Path 0474812a78a0c853
- target: `0x9e7af`, class: `static_validated`
- events: `3092`, validation: `target=100.0%, ip=100.0%, ok:3092`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `67`
- slot: `67=(mask32((mask32(u16_2 + (mask32(state0 & 0x160e4f34)))) ^ 0x2a1ce984)) & 0xffff`
- ip advance: `67=0x4`
- path: `0x9e84f:je:0;0x9e880:je:0;0x9e8d1:je:0`
- top actual targets: `307@0xb8064:342,297@0xb64d7:317,184@0x9d694:261,30@0x7e849:203,215@0xa4609:177,18@0x7be9b:133,66@0x855ff:119,28@0x7e390:113`
- state: `0x9e8b9: state and= state0 & 0x160e4f34 | 0x9ea69: state add= state0 & 0x160e4f34 + u16_2 + state0 & 0x160e4f34 ^ 0x2a1ce984`

## Entry 28 Path 9b3b818dc141b14f
- target: `0x7e390`, class: `static_validated`
- events: `3051`, validation: `target=100.0%, ip=100.0%, ok:3051`
- source branch predicates: `0/512 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `48`
- slot: `48=u16_0 & 0xffff`
- ip advance: `48=0x3`
- path: `0x7e549:je:1;0x7e584:je:1;0x7e5dc:je:0;0x7e604:je:0`
- top actual targets: `189@0x9e7af:460,347@0xc088d:455,168@0x9aa83:264,287@0xb45d2:263,258@0xadf2c:163,64@0x85059:140,123@0x91a59:127,174@0x9bd8f:124`
- state: `0x7e52d: state or= state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | 0x7e67f: state or= state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a + 0x43078fb1 & 0x282416bb ^ 0x53f50e0b ^ state0 | flags0 ^ state0 ...#4cb4905f543e | 0x7e6a4: state xor= state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48...#a12e03bc9b67`

## Entry 28 Path e0fd2755e33377c7
- target: `0x7e390`, class: `static_validated`
- events: `2924`, validation: `target=100.0%, ip=100.0%, ok:2924`
- source branch predicates: `0/512 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `56`
- slot: `56=u16_0 & 0xffff`
- ip advance: `56=0x3`
- path: `0x7e549:je:0;0x7e584:je:0;0x7e5dc:je:0;0x7e604:je:0`
- top actual targets: `347@0xc088d:387,20@0x7c62b:279,340@0xbf435:158,114@0x90319:151,258@0xadf2c:142,189@0x9e7af:138,158@0x99029:111,337@0xbec0e:104`
- state: `0x7e52d: state or= state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | 0x7e67f: state or= state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a + 0x43078fb1 & 0x282416bb ^ 0x53f50e0b ^ state0 | flags0 ^ state0 ...#4cb4905f543e | 0x7e6a4: state xor= state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48...#a12e03bc9b67`

## Entry 215 Path 93bcd881b4003839
- target: `0xa4609`, class: `static_validated`
- events: `2838`, validation: `target=100.0%, ip=100.0%, ok:2838`
- source branch predicates: `0/512 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `45`
- slot: `45=u16_0 & 0xffff`
- ip advance: `45=0x3`
- path: `0xa4667:je:0;0xa46a3:je:0;0xa4746:je:0;0xa47d6:je:1`
- top actual targets: `189@0x9e7af:389,258@0xadf2c:312,347@0xc088d:305,123@0x91a59:290,301@0xb708d:262,300@0xb6c36:256,337@0xbec0e:163,176@0x9c10b:95`
- state: `0xa4652: state or= state0 | 0x760f463f | 0xa4719: state sub= state0 | 0x760f463f - flags0 | 0x77dcc51b ^ 0xee9796d ^ 0x717a207c | 0xa477a: state add= state0 | 0x760f463f - flags0 | 0x77dcc51b ^ 0xee9796d ^ 0x717a207c + 0x15a799dd | 0xa4794: state or= state0 | 0x760f463f - flags0 | 0x77dcc51b ^ 0xee9796d ^ 0x717a207c + 0x15a799dd | 0x6c5f0f12 | ...2 omitted... | 0xa49f0: state sub= state0 | 0x760f463f...#9c2573782834`

## Entry 64 Path 4db1c9febad343e7
- target: `0x85059`, class: `static_validated`
- events: `2740`, validation: `target=100.0%, ip=100.0%, ok:2740`
- source branch predicates: `0/256 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- sampled expression events: `51`
- slot: `51=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 - 0x79614de5)) ^ (mask32(u16_2 + (mask32(flags0 + 0x4cd0c9ae)))))) ^ (mask32((mask32(flags0 + 0x4cd0c9ae)) + 0x729dddb0)))))) + 0x2701cdcd)) & 0xffff`
- ip advance: `51=0x4`
- path: `0x8507f:je:0;0x850d9:je:1`
- top actual targets: `28@0x7e390:351,199@0xa0631:277,215@0xa4609:189,43@0x8173d:139,161@0x9975a:139,184@0x9d694:136,243@0xaab6a:113,18@0x7be9b:93`
- state: `0x850ab: state sub= state0 - 0x79614de5 | 0x851aa: state xor= state0 - 0x79614de5 ^ u16_2 + flags0 + 0x4cd0c9ae + 0x711675f2 & 0x5b249a06 | 0x85202: state xor= state0 - 0x79614de5 ^ u16_2 + flags0 + 0x4cd0c9ae + 0x711675f2 & 0x5b249a06 ^ flags0 + 0x4cd0c9ae + 0x711675f2 & 0x5b249a06 + 0x729dddb0`

## Entry 189 Path 8589bd83a0e8cea0
- target: `0x9e7af`, class: `static_validated`
- events: `2547`, validation: `target=100.0%, ip=100.0%, ok:2547`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `42`
- slot: `42=(mask32((mask32(u16_2 + (mask32(state0 & 0x160e4f34)))) ^ 0x2a1ce984)) & 0xffff`
- ip advance: `42=0x4`
- path: `0x9e84f:je:1;0x9e880:je:0;0x9e8d1:je:0`
- top actual targets: `43@0x8173d:419,305@0xb78b0:241,319@0xba72f:190,18@0x7be9b:156,157@0x98a9a:134,28@0x7e390:127,161@0x9975a:111,174@0x9bd8f:103`
- state: `0x9e8b9: state and= state0 & 0x160e4f34 | 0x9ea69: state add= state0 & 0x160e4f34 + u16_2 + state0 & 0x160e4f34 ^ 0x2a1ce984`

## Entry 114 Path 6d97aa419b6e45b1
- target: `0x90319`, class: `static_validated`
- events: `2534`, validation: `target=100.0%, ip=100.0%, ok:2534`
- source branch predicates: `128/640 unknown branches (20.0%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/640 unknown branches (0.0%): `
- sampled expression events: `44`
- slot: `44=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bf)))) + state0)) & 0x48367f78)))) ^ 0x63bb548f)) + (mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bf)))) + state0)))) & 0x292b555d)) ^ (mask32((mask32(u16_2 + (...#81b58d825e9e`
- ip advance: `44=0x4`
- path: `0x90334:je:0;0x903d9:je:1;0x904a4:je:1;0x904ed:je:1;0x9052b:je:1`
- top actual targets: `199@0xa0631:346,268@0xb0007:271,37@0x80685:224,30@0x7e849:224,66@0x855ff:124,18@0x7be9b:121,185@0x9d964:110,215@0xa4609:107`
- state: `0x90434: state xor= state0 ^ flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 & 0x48367f78 | 0x90442: state xor= state0 ^ flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 & 0x48367f78 ^ 0x63bb548f | 0x9047d: state add= state0 ^ flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 & 0x48367f78 ^ 0x63bb548f + flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f...#68100f93e696`

## Entry 43 Path 6350e9318aa572ff
- target: `0x8173d`, class: `static_validated`
- events: `2427`, validation: `target=100.0%, ip=100.0%, ok:2427`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `82`
- slot: `82=(mask32((mask32(u16_0 ^ (mask32(state0 ^ (mask32(u16_2 ^ state0)))))) - 0x64d373dc)) & 0xffff`
- ip advance: `82=0x4`
- path: `0x81762:je:0;0x817a0:je:1;0x81818:je:0`
- top actual targets: `258@0xadf2c:294,340@0xbf435:163,307@0xb8064:149,18@0x7be9b:141,66@0x855ff:133,28@0x7e390:131,346@0xc0535:122,215@0xa4609:107`
- state: `0x81951: state xor= state0 ^ u16_2 ^ state0`

## Entry 172 Path 5946e91076802daf
- target: `0x9b68a`, class: `static_validated`
- events: `2423`, validation: `target=100.0%, ip=100.0%, ok:2423`
- source branch predicates: `0/128 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/128 unknown branches (0.0%): `
- sampled expression events: `86`
- slot: `86=(mask32(u16_2 ^ 0x715f0a33)) & 0xffff`
- ip advance: `86=0x4`
- path: `0x9b76c:je:1`
- top actual targets: `28@0x7e390:328,199@0xa0631:286,332@0xbd36d:257,258@0xadf2c:147,66@0x855ff:134,114@0x90319:127,18@0x7be9b:112,185@0x9d964:107`
- state: `0x9b7c5: state xor= state0 ^ 0x7070916c | 0x9b7d5: state sub= state0 ^ 0x7070916c - 0x6ecee241 | 0x9b8a2: state add= state0 ^ 0x7070916c - 0x6ecee241 + u16_0 ^ state0 ^ 0x7070916c - 0x6ecee241 ^ flags0 ^ 0x15bf847f & state0 | 0x3eba9edf | 0x9ba15: state or= state0 ^ 0x7070916c - 0x6ecee241 + u16_0 ^ state0 ^ 0x7070916c - 0x6ecee241 ^ flags0 ^ 0x15bf847f & state0 | 0x3eba9edf | u16_2 ^ 0x715f0a33`

## Entry 43 Path b3c385ba08ea674a
- target: `0x8173d`, class: `static_validated`
- events: `2399`, validation: `target=100.0%, ip=100.0%, ok:2399`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `43`
- slot: `43=(mask32((mask32(u16_0 ^ (mask32(state0 ^ (mask32(u16_2 ^ state0)))))) - 0x64d373dc)) & 0xffff`
- ip advance: `43=0x4`
- path: `0x81762:je:0;0x817a0:je:0;0x81818:je:0`
- top actual targets: `26@0x7dbbb:464,347@0xc088d:371,199@0xa0631:288,220@0xa522e:248,287@0xb45d2:85,340@0xbf435:75,258@0xadf2c:67,305@0xb78b0:65`
- state: `0x81951: state xor= state0 ^ u16_2 ^ state0`

## Entry 28 Path a584853ff2ab10f8
- target: `0x7e390`, class: `static_validated`
- events: `2373`, validation: `target=100.0%, ip=100.0%, ok:2373`
- source branch predicates: `0/512 unknown branches (0.0%): `
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `24`
- slot: `24=u16_0 & 0xffff`
- ip advance: `24=0x3`
- path: `0x7e549:je:0;0x7e584:je:1;0x7e5dc:je:0;0x7e604:je:0`
- top actual targets: `43@0x8173d:358,347@0xc088d:294,300@0xb6c36:256,128@0x9299b:256,114@0x90319:124,258@0xadf2c:110,337@0xbec0e:92,189@0x9e7af:84`
- state: `0x7e52d: state or= state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | 0x7e67f: state or= state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a + 0x43078fb1 & 0x282416bb ^ 0x53f50e0b ^ state0 | flags0 ^ state0 ...#4cb4905f543e | 0x7e6a4: state xor= state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48...#a12e03bc9b67`

## Entry 340 Path 2a0ce8aa7d3ecb4e
- target: `0xbf435`, class: `static_validated`
- events: `2329`, validation: `target=100.0%, ip=100.0%, ok:2329`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `48`
- slot: `48=(mask32((mask32(u16_0 + (mask32((mask32((mask32(state0 - 0x2b2e5a26)) ^ 0x7535dd25)) | u16_2)))) + 0x9097995)) & 0xffff`
- ip advance: `48=0x4`
- path: `0xbf457:je:0;0xbf48f:je:0;0xbf4d7:je:0`
- top actual targets: `161@0x9975a:252,66@0x855ff:240,192@0x9f00a:198,18@0x7be9b:108,158@0x99029:99,20@0x7c62b:97,305@0xb78b0:94,176@0x9c10b:83`
- state: `0xbf4be: state sub= state0 - 0x2b2e5a26 | 0xbf4f6: state xor= state0 - 0x2b2e5a26 ^ 0x7535dd25 | 0xbf616: state or= state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 | 0xbf82b: state sub= state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 - u16_0 + state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 + 0x9097995`

## Entry 185 Path 095a648478af979e
- target: `0x9d964`, class: `static_validated`
- events: `2189`, validation: `target=100.0%, ip=100.0%, ok:2189`
- source branch predicates: `128/512 unknown branches (25.0%): derived_live_in:128`
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `57`
- slot: `57=(mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 | 0x17e55682)))) ^ 0x2000c224)) & 0x1f29f35)) + (mask32((mask32((mask32((mask32((mask32(flags0 | 0x17e55682)) + 0x28030c24)) ^ 0x30d03eec)) | 0x7fa981a)) ^ 0x5ea8d1c5)))))) & 0xffff`
- ip advance: `57=0x3`
- path: `0x9da8d:je:0;0x9dace:je:0;0x9db05:je:0;0x9db82:je:0`
- top actual targets: `168@0x9aa83:173,203@0xa1484:162,347@0xc088d:159,337@0xbec0e:154,172@0x9b68a:124,220@0xa522e:110,123@0x91a59:88,64@0x85059:85`
- state: `0x9da5f: state xor= state0 ^ flags0 | 0x17e55682 | 0x9da76: state xor= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 | 0x9db24: state and= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & 0x1f29f35 | 0x9dba1: state add= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & 0x1f29f35 + flags0 | 0x17e55682 + 0x28030c24 ^ 0x30d03eec | 0x7fa981a ^ 0x5ea8d1c5 | 0x9dc75: state or= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & ...#3552952ce32a`

