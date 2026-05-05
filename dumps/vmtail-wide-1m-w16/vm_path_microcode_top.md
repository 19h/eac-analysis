# VM Path Microcode Catalog

Top 30 concrete handler paths by state-trace event count.

## Entry 307 Path 594cbf6454cdfe82
- target: `0xb8064`, class: `static_validated`
- events: `7050`, validation: `target=100.0%, ip=100.0%, ok:7050`
- source branch predicates: `128/256 unknown branches (50.0%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- sampled expression events: `128`
- slot: `128=(mask32(u16_1 - 0x665a9b5)) & 0xffff`
- ip advance: `128=0x3`
- path: `0xb80ac:je:?;0xb8188:je:1`
- top actual targets: `174@0x9bd8f:450,157@0x98a9a:421,26@0x7dbbb:414,114@0x90319:410,340@0xbf435:358,196@0x9fbcd:351,161@0x9975a:344,337@0xbec0e:295`
- state: `0xb80ed: state xor= state0 ^ b0 - flags0 | 0xb8162: state and= state0 ^ b0 - flags0 & flags0 & 0x5792b958 | 0xb81e7: state xor= state0 ^ b0 - flags0 & flags0 & 0x5792b958 ^ flags0 & 0x5792b958`

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

## Entry 185 Path 6a2102f5edeb1c96
- target: `0x9d964`, class: `static_validated`
- events: `6172`, validation: `target=100.0%, ip=100.0%, ok:6172`
- source branch predicates: `128/512 unknown branches (25.0%): derived_live_in:128`
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `128`
- slot: `128=(mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 | 0x17e55682)))) ^ 0x2000c224)) & 0x1f29f35)) + (mask32((mask32((mask32((mask32((mask32(flags0 | 0x17e55682)) + 0x28030c24)) ^ 0x30d03eec)) | 0x7fa981a)) ^ 0x5ea8d1c5)))))) & 0xffff`
- ip advance: `128=0x3`
- path: `0x9da8d:je:0;0x9dace:je:0;0x9db05:je:0;0x9db82:je:?`
- top actual targets: `168@0x9aa83:438,203@0xa1484:431,347@0xc088d:416,337@0xbec0e:407,172@0x9b68a:339,220@0xa522e:292,332@0xbd36d:278,64@0x85059:237`
- state: `0x9da5f: state xor= state0 ^ flags0 | 0x17e55682 | 0x9da76: state xor= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 | 0x9db24: state and= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & 0x1f29f35 | 0x9dba1: state add= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & 0x1f29f35 + flags0 | 0x17e55682 + 0x28030c24 ^ 0x30d03eec | 0x7fa981a ^ 0x5ea8d1c5 | 0x9dc75: state or= state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & ...#3552952ce32a`

## Entry 347 Path 19fc60176c704f86
- target: `0xc088d`, class: `static_validated`
- events: `5886`, validation: `target=100.0%, ip=100.0%, ok:5886`
- source branch predicates: `128/256 unknown branches (50.0%): derived_live_in:128`
- source GPR+scratch-seeded branch predicates: `0/256 unknown branches (0.0%): `
- sampled expression events: `92`
- slot: `92=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))) | (mask32((mask32(flags0 ^ (mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))) & 0x45223942)))) + (mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))) | 0x2efc96c5)))))) ^ 0...#38484e2d9466`
- ip advance: `92=0x4`
- path: `0xc093d:je:?;0xc09c2:je:1`
- top actual targets: `168@0x9aa83:628,174@0x9bd8f:458,28@0x7e390:456,297@0xb64d7:377,18@0x7be9b:366,158@0x99029:351,20@0x7c62b:337,118@0x90c23:256`
- state: `0xc08bf: state or= state0 | flags0 + 0x6fa972f0 | 0xc098d: state or= state0 | flags0 + 0x6fa972f0 | flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | flags0 + 0x6fa972f0 | 0x2efc96c5 | 0xc09ea: state xor= state0 | flags0 + 0x6fa972f0 | flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | flags0 + 0x6fa972f0 | 0x2efc96c5 ^ 0x5cf483c7 | 0xc0a20: state and= state0 | flags0 + 0x6fa97...#1a4e957ff170`

## Entry 66 Path 17a660c8e4b68f56
- target: `0x855ff`, class: `static_validated`
- events: `5310`, validation: `target=100.0%, ip=100.0%, ok:5310`
- source branch predicates: `128/512 unknown branches (25.0%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `99`
- slot: `99=(mask32((mask32(u16_0 - (mask32((mask32((mask32((mask32((mask32(state0 & 0x2f6cb1f6)) - (mask32(b2 ^ (mask32(state0 & 0x2f6cb1f6)))))) ^ 0x745ff1d2)) & 0x13de2cdd)) - (mask32(flags0 ^ 0x42a6ffd6)))))) - 0x3cd18153)) & 0xffff`
- ip advance: `99=0x3`
- path: `0x85621:je:?;0x8566a:je:1;0x856f1:je:0;0x858d5:je:0`
- top actual targets: `337@0xbec0e:493,123@0x91a59:437,340@0xbf435:387,189@0x9e7af:374,64@0x85059:341,158@0x99029:338,49@0x82820:262,107@0x8eef4:256`
- state: `0x85710: state and= state0 & 0x2f6cb1f6 | 0x85829: state sub= state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 | 0x858b9: state xor= state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 ^ 0x745ff1d2 | 0x858f1: state and= state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 ^ 0x745ff1d2 & 0x13de2cdd | ...1 omitted... | 0x859d0: state xor= state0 & 0x2f6cb1f6 - b2 ^ state0 & 0x2f6cb1f6 ^ 0x745ff1d2 & 0x13de2cdd - fl...#a3a11d58dd06`

## Entry 18 Path 52cb94c676146085
- target: `0x7be9b`, class: `static_validated`
- events: `5184`, validation: `target=100.0%, ip=100.0%, ok:5184`
- source branch predicates: `128/512 unknown branches (25.0%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `99`
- slot: `99=(mask32(u16_0 - (mask32((mask32((mask32(state0 & flags0)) - 0x6382ce20)) & flags0)))) & 0xffff`
- ip advance: `99=0x3`
- path: `0x7bed4:je:?;0x7befe:je:1;0x7bfe0:je:1;0x7c17e:je:0`
- top actual targets: `114@0x90319:474,258@0xadf2c:418,300@0xb6c36:323,105@0x8e6b4:257,337@0xbec0e:240,347@0xc088d:235,174@0x9bd8f:219,20@0x7c62b:202`
- state: `0x7bf3a: state and= state0 & flags0 | 0x954df65 + 0x5b466f3b | 0x7bf47: state sub= state0 & flags0 | 0x954df65 + 0x5b466f3b - 0x6382ce20 | 0x7bf89: state and= state0 & flags0 | 0x954df65 + 0x5b466f3b - 0x6382ce20 & flags0 | 0x954df65 + 0x5b466f3b | 0x7c2b1: state sub= state0 & flags0 | 0x954df65 + 0x5b466f3b - 0x6382ce20 & flags0 | 0x954df65 + 0x5b466f3b - u16_0 - state0 & flags0 | 0x954df65 + 0x5b46...#60dd151a1c9c`

## Entry 337 Path e3cfac752b646934
- target: `0xbec0e`, class: `static_validated`
- events: `5158`, validation: `target=100.0%, ip=100.0%, ok:5158`
- source branch predicates: `256/768 unknown branches (33.3%): derived_live_in:128,unknown_frame_field:128`
- source GPR+scratch-seeded branch predicates: `0/768 unknown branches (0.0%): `
- sampled expression events: `85`
- slot: `85=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) - (mask32((mask32(u16_2 + (mask32(state0 - flags0)))) + flags0)))) + 0x2051de91)) & (mask32(flags0 + 0x61f749a7)))) | 0x51d7631a)) ^ (mask32((mask32((mask32(flags0 + 0x61f749a7)) ^ 0x3de72107)) & 0xe04b834)))))) ^...#b95390b65598`
- ip advance: `85=0x4`
- path: `0xbec7a:je:0;0xbeea3:je:?;0xbeee0:je:?;0xbef44:je:0;0xbef67:je:0;0xbefac:je:0`
- top actual targets: `66@0x855ff:430,174@0x9bd8f:411,315@0xb9451:289,253@0xacfb1:260,297@0xb64d7:229,307@0xb8064:193,123@0x91a59:186,176@0x9c10b:178`
- state: `0xbec32: state sub= state0 - flags0 | 0xbed93: state sub= state0 - flags0 - u16_2 + state0 - flags0 + flags0 | 0xbeec8: state add= state0 - flags0 - u16_2 + state0 - flags0 + flags0 + 0x2051de91 | 0xbef26: state and= state0 - flags0 - u16_2 + state0 - flags0 + flags0 + 0x2051de91 & flags0 + 0x61f749a7 | ...2 omitted... | 0xbf0ec: state or= state0 - flags0 - u16_2 + state0 - flags0 + flags0 + 0x2051de...#723ef5b65a29`

## Entry 199 Path e093012d964a45b0
- target: `0xa0631`, class: `static_validated`
- events: `4842`, validation: `target=100.0%, ip=100.0%, ok:4842`
- source branch predicates: `128/512 unknown branches (25.0%): derived_live_in:128`
- source GPR+scratch-seeded branch predicates: `0/512 unknown branches (0.0%): `
- sampled expression events: `106`
- slot: `106=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 + (mask32(b2 + flags0)))) ^ 0x7e708197)) & 0x20d5418)) + flags0)))) + 0x3030bb89)) & 0xffff`
- ip advance: `106=0x3`
- path: `0xa0676:je:1;0xa0921:je:0;0xa094b:je:?;0xa0985:je:0`
- top actual targets: `258@0xadf2c:430,184@0x9d694:426,114@0x90319:337,203@0xa1484:291,79@0x885b0:282,301@0xb708d:272,70@0x8610e:257,340@0xbf435:249`
- state: `0xa07a1: state add= state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a | 0xa0856: state xor= state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a ^ 0x7e708197 | 0xa0891: state and= state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a ^ 0x7e708197 & 0x20d5418 | 0xa08b8: state add= state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a ^ 0x7e708197 & 0x20d5418 + flags0 ^ 0x7353b039 - 0x24d1328a`

## Entry 297 Path 544fc165c2f587e5
- target: `0xb64d7`, class: `static_validated`
- events: `4530`, validation: `target=100.0%, ip=100.0%, ok:4530`
- source branch predicates: `256/640 unknown branches (40.0%): live_in_reg:256`
- source GPR+scratch-seeded branch predicates: `0/640 unknown branches (0.0%): `
- sampled expression events: `90`
- slot: `90=(mask32((mask32(u16_1 - (mask32((mask32((mask32((mask32(state0 - 0x48220942)) | flags0)) ^ 0x6b7f38b7)) + (mask32((mask32(b0 + (mask32((mask32((mask32(state0 - 0x48220942)) | flags0)) ^ 0x6b7f38b7)))) + flags0)))))) ^ 0x9f24ccb)) & 0xffff`
- ip advance: `90=0x3`
- path: `0xb64f9:je:?;0xb651f:je:?;0xb654f:je:1;0xb65c8:je:0;0xb65f5:je:1`
- top actual targets: `196@0x9fbcd:545,347@0xc088d:466,203@0xa1484:305,301@0xb708d:263,258@0xadf2c:230,340@0xbf435:208,174@0x9bd8f:188,114@0x90319:152`
- state: `0xb64ee: state sub= state0 - 0x48220942 | 0xb662c: state or= state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb | 0xb6638: state xor= state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb ^ 0x6b7f38b7 | 0xb675f: state add= state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x6650e9bb ^ 0x6b7f38b7 + b0 + state0 - 0x48220942 | flags0 + 0x283684b4 ^ 0x4a5a939a | 0x66...#ea12cb176032`

## Entry 340 Path 2ca475fa7cfdda22
- target: `0xbf435`, class: `static_validated`
- events: `4524`, validation: `target=100.0%, ip=100.0%, ok:4524`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `74`
- slot: `74=(mask32((mask32(u16_0 + (mask32((mask32((mask32(state0 - 0x2b2e5a26)) ^ 0x7535dd25)) | u16_2)))) + 0x9097995)) & 0xffff`
- ip advance: `74=0x4`
- path: `0xbf457:je:?;0xbf48f:je:1;0xbf4d7:je:0`
- top actual targets: `307@0xb8064:421,28@0x7e390:415,287@0xb45d2:290,345@0xc02e4:281,333@0xbd8af:197,215@0xa4609:197,18@0x7be9b:191,297@0xb64d7:161`
- state: `0xbf4be: state sub= state0 - 0x2b2e5a26 | 0xbf4f6: state xor= state0 - 0x2b2e5a26 ^ 0x7535dd25 | 0xbf616: state or= state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 | 0xbf82b: state sub= state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 - u16_0 + state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 + 0x9097995`

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

## Entry 189 Path 2354512d8d26396d
- target: `0x9e7af`, class: `static_validated`
- events: `4100`, validation: `target=100.0%, ip=100.0%, ok:4100`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `82`
- slot: `82=(mask32((mask32(u16_2 + (mask32(state0 & 0x160e4f34)))) ^ 0x2a1ce984)) & 0xffff`
- ip advance: `82=0x4`
- path: `0x9e84f:je:0;0x9e880:je:?;0x9e8d1:je:0`
- top actual targets: `307@0xb8064:457,297@0xb64d7:422,184@0x9d694:346,30@0x7e849:275,215@0xa4609:228,18@0x7be9b:170,66@0x855ff:148,28@0x7e390:146`
- state: `0x9e8b9: state and= state0 & 0x160e4f34 | 0x9ea69: state add= state0 & 0x160e4f34 + u16_2 + state0 & 0x160e4f34 ^ 0x2a1ce984`

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

## Entry 333 Path 9d487206b525255d
- target: `0xbd8af`, class: `static_validated`
- events: `3602`, validation: `target=100.0%, ip=100.0%, ok:3602`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `128`
- slot: `128=(mask32(u16_0 - (mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32(flags0 ^ state0)) | 0x37ccc6ea)))) - 0x61e56767)) & (mask32(flags0 ^ state0)))) + (mask32((mask32(flags0 ^ state0)) | 0x71cc1ee8)))) | 0x569ecec3)))) & 0xffff`
- ip advance: `128=0x4`
- path: `0xbd8d9:je:?;0xbd9ec:je:0;0xbda3c:je:0`
- top actual targets: `305@0xb78b0:337,215@0xa4609:335,258@0xadf2c:305,337@0xbec0e:177,243@0xaab6a:161,28@0x7e390:147,114@0x90319:141,64@0x85059:131`
- state: `0xbd90b: state xor= state0 ^ flags0 ^ state0 | 0x37ccc6ea | 0xbd918: state sub= state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 | 0xbd980: state and= state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 & flags0 ^ state0 | 0xbd9ae: state add= state0 ^ flags0 ^ state0 | 0x37ccc6ea - 0x61e56767 & flags0 ^ state0 + flags0 ^ state0 | 0x71cc1ee8 | ...1 omitted... | 0xbdcb2: state add= state0 ^ flags0 ^ s...#5c8d72a16b9b`

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

## Entry 189 Path 0e89e1344064f5b1
- target: `0x9e7af`, class: `static_validated`
- events: `3359`, validation: `target=100.0%, ip=100.0%, ok:3359`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `46`
- slot: `46=(mask32((mask32(u16_2 + (mask32(state0 & 0x160e4f34)))) ^ 0x2a1ce984)) & 0xffff`
- ip advance: `46=0x4`
- path: `0x9e84f:je:1;0x9e880:je:?;0x9e8d1:je:0`
- top actual targets: `43@0x8173d:558,305@0xb78b0:319,319@0xba72f:257,18@0x7be9b:204,28@0x7e390:177,157@0x98a9a:170,161@0x9975a:153,174@0x9bd8f:132`
- state: `0x9e8b9: state and= state0 & 0x160e4f34 | 0x9ea69: state add= state0 & 0x160e4f34 + u16_2 + state0 & 0x160e4f34 ^ 0x2a1ce984`

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

## Entry 114 Path e5a1993fcdaf9cd5
- target: `0x90319`, class: `static_validated`
- events: `3102`, validation: `target=100.0%, ip=100.0%, ok:3102`
- source branch predicates: `128/640 unknown branches (20.0%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/640 unknown branches (0.0%): `
- sampled expression events: `51`
- slot: `51=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bf)))) + state0)) & 0x48367f78)))) ^ 0x63bb548f)) + (mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bf)))) + state0)))) & 0x292b555d)) ^ (mask32((mask32(u16_2 + (...#81b58d825e9e`
- ip advance: `51=0x4`
- path: `0x90334:je:?;0x903d9:je:1;0x904a4:je:1;0x904ed:je:1;0x9052b:je:1`
- top actual targets: `199@0xa0631:419,268@0xb0007:320,37@0x80685:260,30@0x7e849:259,66@0x855ff:163,18@0x7be9b:153,185@0x9d964:147,215@0xa4609:130`
- state: `0x90434: state xor= state0 ^ flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 & 0x48367f78 | 0x90442: state xor= state0 ^ flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 & 0x48367f78 ^ 0x63bb548f | 0x9047d: state add= state0 ^ flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f4 + state0 & 0x48367f78 ^ 0x63bb548f + flags0 & state0 | 0x6729b5bf - 0x3dca653f ^ 0x671da5f...#68100f93e696`

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

## Entry 340 Path 0fcb0849ee1c8e9a
- target: `0xbf435`, class: `static_validated`
- events: `3025`, validation: `target=100.0%, ip=100.0%, ok:3025`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `54`
- slot: `54=(mask32((mask32(u16_0 + (mask32((mask32((mask32(state0 - 0x2b2e5a26)) ^ 0x7535dd25)) | u16_2)))) + 0x9097995)) & 0xffff`
- ip advance: `54=0x4`
- path: `0xbf457:je:?;0xbf48f:je:0;0xbf4d7:je:0`
- top actual targets: `161@0x9975a:321,66@0x855ff:309,192@0x9f00a:256,18@0x7be9b:143,158@0x99029:132,20@0x7c62b:125,305@0xb78b0:122,176@0x9c10b:110`
- state: `0xbf4be: state sub= state0 - 0x2b2e5a26 | 0xbf4f6: state xor= state0 - 0x2b2e5a26 ^ 0x7535dd25 | 0xbf616: state or= state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 | 0xbf82b: state sub= state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 - u16_0 + state0 - 0x2b2e5a26 ^ 0x7535dd25 | u16_2 + 0x9097995`

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

## Entry 43 Path cd5d6af99a29906c
- target: `0x8173d`, class: `static_validated`
- events: `2665`, validation: `target=100.0%, ip=100.0%, ok:2665`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `84`
- slot: `84=(mask32((mask32(u16_0 ^ (mask32(state0 ^ (mask32(u16_2 ^ state0)))))) - 0x64d373dc)) & 0xffff`
- ip advance: `84=0x4`
- path: `0x81762:je:0;0x817a0:je:1;0x81818:je:?`
- top actual targets: `258@0xadf2c:326,340@0xbf435:180,307@0xb8064:158,18@0x7be9b:156,28@0x7e390:148,66@0x855ff:142,346@0xc0535:132,215@0xa4609:113`
- state: `0x81951: state xor= state0 ^ u16_2 ^ state0`

## Entry 43 Path 67213943b44586b3
- target: `0x8173d`, class: `static_validated`
- events: `2644`, validation: `target=100.0%, ip=100.0%, ok:2644`
- source branch predicates: `128/384 unknown branches (33.3%): live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/384 unknown branches (0.0%): `
- sampled expression events: `44`
- slot: `44=(mask32((mask32(u16_0 ^ (mask32(state0 ^ (mask32(u16_2 ^ state0)))))) - 0x64d373dc)) & 0xffff`
- ip advance: `44=0x4`
- path: `0x81762:je:0;0x817a0:je:0;0x81818:je:?`
- top actual targets: `26@0x7dbbb:521,347@0xc088d:412,199@0xa0631:290,220@0xa522e:278,287@0xb45d2:89,340@0xbf435:80,305@0xb78b0:72,258@0xadf2c:71`
- state: `0x81951: state xor= state0 ^ u16_2 ^ state0`

## Entry 168 Path e7cc215af77d8ef7
- target: `0x9aa83`, class: `static_validated`
- events: `2629`, validation: `target=100.0%, ip=100.0%, ok:2629`
- source branch predicates: `256/768 unknown branches (33.3%): derived_live_in:128,live_in_reg:128`
- source GPR+scratch-seeded branch predicates: `0/768 unknown branches (0.0%): `
- sampled expression events: `74`
- slot: `74=(mask32((mask32(u16_2 + (mask32((mask32(state0 | 0x6899d5d4)) & (mask32(u16_0 + flags0)))))) + 0x553030a2)) & 0xffff`
- ip advance: `74=0x4`
- path: `0x9aa9c:je:1;0x9aadd:je:1;0x9ab2f:je:1;0x9ab7f:je:?;0x9ad6a:je:?;0x9ad85:je:0`
- top actual targets: `315@0xb9451:558,340@0xbf435:321,258@0xadf2c:177,64@0x85059:105,114@0x90319:86,305@0xb78b0:78,26@0x7dbbb:73,307@0xb8064:71`
- state: `0x9ab11: state or= state0 | 0x6899d5d4 | 0x9ac87: state and= state0 | 0x6899d5d4 & u16_0 + flags0 & 0x66031b5e - 0x2eab70d9 ^ 0x7c2abc25 & 0x46cbe42d & 0x69af076d | 0x4ee70776 | 0x9aeba: state and= state0 | 0x6899d5d4 & u16_0 + flags0 & 0x66031b5e - 0x2eab70d9 ^ 0x7c2abc25 & 0x46cbe42d & 0x69af076d | 0x4ee70776 & u16_2 + state0 | 0x6899d5d4 & u16_0 + flags0 & 0x66031b5e - 0x2eab70d9 ^ 0x7c2abc25 & ...#19fd4973bc0f`

## Entry 268 Path 2a7cfed8554aeeea
- target: `0xb0007`, class: `static_validated`
- events: `2583`, validation: `target=100.0%, ip=100.0%, ok:2583`
- source branch predicates: `256/768 unknown branches (33.3%): derived_live_in:256`
- source GPR+scratch-seeded branch predicates: `0/768 unknown branches (0.0%): `
- sampled expression events: `87`
- slot: `87=(mask32((mask32(u16_2 - (mask32((mask32((mask32((mask32(state0 | 0x71bd1bb1)) + (mask32((mask32(u16_0 - (mask32(state0 | 0x71bd1bb1)))) - flags0)))) & (mask32((mask32((mask32(flags0 + 0x33c0c75b)) & 0x174c40ef)) - 0x554d11ee)))) | (mask32((mask32((mask32(flags0 + 0x33c0c75b)) & 0x174c40ef)) - 0x554d11e...#2c2c9c427f9a`
- ip advance: `87=0x4`
- path: `0xb01e9:je:?;0xb0218:je:0;0xb026a:je:1;0xb029a:je:?;0xb02eb:je:0;0xb0307:je:1`
- top actual targets: `243@0xaab6a:379,301@0xb708d:256,185@0x9d964:170,49@0x82820:151,64@0x85059:149,189@0x9e7af:131,346@0xc0535:121,18@0x7be9b:111`
- state: `0xb0087: state or= state0 | 0x71bd1bb1 | 0xb0155: state add= state0 | 0x71bd1bb1 + u16_0 - state0 | 0x71bd1bb1 - flags0 | 0xb02c5: state and= state0 | 0x71bd1bb1 + u16_0 - state0 | 0x71bd1bb1 - flags0 & flags0 + 0x33c0c75b & 0x174c40ef - 0x554d11ee & 0x30ef8696 | 0xb034b: state or= state0 | 0x71bd1bb1 + u16_0 - state0 | 0x71bd1bb1 - flags0 & flags0 + 0x33c0c75b & 0x174c40ef - 0x554d11ee & 0x30ef8696 ...#49c71901c45e`

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

