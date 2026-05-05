/*
 * Path-specialized VM handler pseudocode.
 * Each function is one concrete static-replay branch path with sampled transfer expressions.
 * This is syntax-checkable C, but still an analysis artifact rather than drop-in source.
 */
#include <stdint.h>

typedef struct VMState {
    uint8_t *ip;
    uint32_t state;
    uint32_t flags;
    uint8_t byte;
} VMState;

typedef struct VMOpResult {
    int next_entry;
    uint32_t slot;
} VMOpResult;

typedef VMOpResult (*VMPathFn)(VMState *vm);

typedef struct VMPathModelInfo {
    uint16_t entry;
    uint64_t path_key;
    uint32_t events;
    const char *source_class;
    const char *validation;
    VMPathFn function;
} VMPathModelInfo;

#define U8(p)  (*(const uint8_t *)(p))
#define U16(p) (*(const uint16_t *)(p))
#define U32(p) (*(const uint32_t *)(p))
#define mask32(x) ((uint32_t)(x))
#define mask16(x) ((uint16_t)(x))
#define mask8(x)  ((uint8_t)(x))

static int vm_entry_from_slot_index(uint32_t slot) {
    return slot < 360u ? (int)slot : -1;
}

static int vm_entry_from_table_offset(uint32_t slot) {
    return ((slot & 7u) == 0u && (slot >> 3) < 360u) ? (int)(slot >> 3) : -1;
}

static VMOpResult path_entry_307_53af157f8d5a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=307, native=0xb8064, path=53af157f8d5a451e, class=static_validated, events=6610 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=122 */
    /* branch path: 0xb80ac:je:0;0xb8188:je:1 */
    /* top actual targets: 174@0x9bd8f:418,157@0x98a9a:391,26@0x7dbbb:389,114@0x90319:383,340@0xbf435:337,196@0x9fbcd:327,161@0x9975a:322,337@0xbec0e:281 */
    /* operands: b0=var252(top=0x3a:9.2%);b1=var29(top=0x9d:8.1%);b2=var12(top=0xaf:24.2%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 ^ U8(vm->ip + 0x0u) - flags0 & flags0 & 0x5792b958u ^ flags0 & 0x5792b958u;
    vm->flags = flags0 & 0x5792b958u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) - 0x665a9b5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_258_4be73f077fec(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=258, native=0xadf2c, path=4be73f077fec7fc7, class=static_validated, events=6275 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=70 */
    /* branch path: 0xadf51:je:1;0xadfe1:je:0 */
    /* top actual targets: 215@0xa4609:640,43@0x8173d:598,307@0xb8064:571,18@0x7be9b:345,26@0x7dbbb:308,315@0xb9451:295,184@0x9d694:267,297@0xb64d7:258 */
    /* operands: b0=var255(top=0xf3:2.2%);b1=var256(top=0xab:1.9%);b2=var246(top=0x51:2.5%);b3=var240(top=0xeb:4.3%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 ^ 0x11095fd5u + flags0 - 0x1510614fu;
    vm->flags = flags0 - 0x1510614fu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 ^ 0x11095fd5u)) + (mask32(flags0 ^ 0x1769756eu)))) ^ (mask32(U16(vm->ip + 0x2u) - (mask32(flags0 ^ 0x1769756eu)))))))) ^ 0x5812e92cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_347_cb333c548cc4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=347, native=0xc088d, path=cb333c548cc440f3, class=static_validated, events=5868 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=92 */
    /* branch path: 0xc093d:je:0;0xc09c2:je:1 */
    /* top actual targets: 168@0x9aa83:626,174@0x9bd8f:457,28@0x7e390:455,18@0x7be9b:364,158@0x99029:350,20@0x7c62b:336,185@0x9d964:206,307@0xb8064:196 */
    /* operands: b0=var256(top=0xe6:2.1%);b1=var79(top=0x0b:6.4%);b2=var230(top=0xba:3.9%);b3=var101(top=0x82:10.2%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0u)))) | (mask32((mask32(flags0 ^ (mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0u)))) & 0x45223942u)))) + (mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0u)))) | 0x2efc96c5u)))))) ^ 0...#38484e2d9466; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_337_c8492588f16e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=337, native=0xbec0e, path=c8492588f16e2cbb, class=static_validated, events=5158 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=85 */
    /* branch path: 0xbec7a:je:0;0xbeea3:je:0;0xbeee0:je:0;0xbef44:je:0;0xbef67:je:0;0xbefac:je:0 */
    /* top actual targets: 66@0x855ff:430,315@0xb9451:289,297@0xb64d7:229,123@0x91a59:186,176@0x9c10b:178,43@0x8173d:178,18@0x7be9b:167,28@0x7e390:166 */
    /* operands: b0=var128(top=0x7c:3.3%);b1=var227(top=0x91:5.3%);b2=var254(top=0x9d:2.2%);b3=var253(top=0x00:7.9%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - U16(vm->ip + 0x2u) + state0 - flags0 + flags0 + 0x2051de91u & flags0 + 0x61f749a7u;
    vm->flags = flags0 + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) - (mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 - flags0)))) + flags0)))) + 0x2051de91u)) & (mask32(flags0 + 0x61f749a7u)))) | 0x51d7631au)) ^ (mask32((mask32((mask32(flags0 + 0x61f749a7u)) ^ 0x3de72107u)) & 0xe04b834u)))))) ^...#b95390b65598; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_199_454bb50b5a01(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=199, native=0xa0631, path=454bb50b5a012434, class=static_validated, events=4835 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=106 */
    /* branch path: 0xa0676:je:1;0xa0921:je:0;0xa094b:je:0;0xa0985:je:0 */
    /* top actual targets: 258@0xadf2c:429,184@0x9d694:424,114@0x90319:337,203@0xa1484:290,340@0xbf435:249,64@0x85059:197,189@0x9e7af:195,161@0x9975a:144 */
    /* operands: b0=var128(top=0xc7:3.5%);b1=var256(top=0x88:2.4%);b2=var179(top=0x3a:9.8%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 + U8(vm->ip + 0x2u) + flags0 ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + flags0 ^ 0x7353b039u - 0x24d1328au;
    vm->flags = flags0 ^ 0x7353b039u - 0x24d1328au & 0x4705559fu + 0x79865026u + 0x73a763f8u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 + (mask32(U8(vm->ip + 0x2u) + flags0)))) ^ 0x7e708197u)) & 0x20d5418u)) + flags0)))) + 0x3030bb89u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_018_bdfe2dc323c2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=18, native=0x7be9b, path=bdfe2dc323c2ac6d, class=static_validated, events=4728 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=94 */
    /* branch path: 0x7bed4:je:0;0x7befe:je:1;0x7bfe0:je:1;0x7c17e:je:0 */
    /* top actual targets: 114@0x90319:436,258@0xadf2c:381,337@0xbec0e:223,174@0x9bd8f:205,347@0xc088d:205,20@0x7c62b:184,196@0x9fbcd:182,189@0x9e7af:178 */
    /* operands: b0=var149(top=0xa0:5.4%);b1=var200(top=0x0a:6.4%);b2=var165(top=0x3a:10.5%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 & flags0)) - 0x6382ce20u)) & flags0)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_066_f47171d37327(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=66, native=0x855ff, path=f47171d373278492, class=static_validated, events=4708 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=89 */
    /* branch path: 0x85621:je:0;0x8566a:je:1;0x856f1:je:0;0x858d5:je:0 */
    /* top actual targets: 337@0xbec0e:443,123@0x91a59:392,340@0xbf435:344,189@0x9e7af:332,158@0x99029:301,64@0x85059:289,176@0x9c10b:163,184@0x9d694:157 */
    /* operands: b0=var248(top=0x65:2.5%);b1=var253(top=0xa8:2.1%);b2=var114(top=0x3a:8.4%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ state0 & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - flags0 - 0x50170614u;
    vm->flags = flags0 - 0x50170614u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 & 0x2f6cb1f6u)) - (mask32(U8(vm->ip + 0x2u) ^ (mask32(state0 & 0x2f6cb1f6u)))))) ^ 0x745ff1d2u)) & 0x13de2cddu)) - (mask32(flags0 ^ 0x42a6ffd6u)))))) - 0x3cd18153u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_215_3c3063585597(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=215, native=0xa4609, path=3c30635855970371, class=static_validated, events=4283 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=83 */
    /* branch path: 0xa4667:je:1;0xa46a3:je:1;0xa4746:je:1;0xa47d6:je:1 */
    /* top actual targets: 114@0x90319:399,196@0x9fbcd:377,172@0x9b68a:290,337@0xbec0e:226,340@0xbf435:175,157@0x98a9a:162,268@0xb0007:158,20@0x7c62b:154 */
    /* operands: b0=var29(top=0x88:10.5%);b1=var11(top=0x05:21.1%);b2=var114(top=0xc8:9.2%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_196_44a20faf942e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=196, native=0x9fbcd, path=44a20faf942e72a8, class=static_validated, events=4088 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=100 */
    /* branch path: 0x9fd8f:je:1;0x9fdf5:je:1 */
    /* top actual targets: 340@0xbf435:555,66@0x855ff:501,18@0x7be9b:338,215@0xa4609:287,189@0x9e7af:202,347@0xc088d:117,305@0xb78b0:111,258@0xadf2c:101 */
    /* operands: b0=var249(top=0xef:3.2%);b1=var250(top=0x6e:7.0%);b2=var62(top=0x0c:6.1%);b3=var110(top=0xf6:6.1%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | 0x52e5924au)) + (mask32((mask32((mask32(flags0 | 0x4083ed99u)) & (mask32((mask32(state0 | 0x52e5924au)) ^ 0x20047816u)))) & 0x7ca762c5u)))) + 0x37b5a024u)) + 0x2e12e35au)) ^ 0x44fb7fdbu)) + (mask32((mask32((mask32((mask32(...#4f1ee978b737; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_297_6091fdb2f82d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=297, native=0xb64d7, path=6091fdb2f82dc3fb, class=static_validated, events=4065 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=84 */
    /* branch path: 0xb64f9:je:0;0xb651f:je:0;0xb654f:je:1;0xb65c8:je:0;0xb65f5:je:1 */
    /* top actual targets: 196@0x9fbcd:493,347@0xc088d:424,203@0xa1484:299,258@0xadf2c:205,340@0xbf435:185,174@0x9bd8f:168,337@0xbec0e:124,43@0x8173d:94 */
    /* operands: b0=var222(top=0x89:5.5%);b1=var249(top=0x2e:3.1%);b2=var256(top=0xad:1.8%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 - 0x48220942u;
    vm->flags = flags0 + 0x283684b4u ^ 0x4a5a939au;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32(state0 - 0x48220942u)) | flags0)) ^ 0x6b7f38b7u)) + (mask32((mask32(U8(vm->ip + 0x0u) + (mask32((mask32((mask32(state0 - 0x48220942u)) | flags0)) ^ 0x6b7f38b7u)))) + flags0)))))) ^ 0x9f24ccbu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_340_02ae05a16ed8(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=340, native=0xbf435, path=02ae05a16ed89aae, class=static_validated, events=4010 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=71 */
    /* branch path: 0xbf457:je:0;0xbf48f:je:1;0xbf4d7:je:0 */
    /* top actual targets: 307@0xb8064:367,28@0x7e390:362,287@0xb45d2:254,345@0xc02e4:248,215@0xa4609:180,333@0xbd8af:173,18@0x7be9b:172,297@0xb64d7:147 */
    /* operands: b0=var221(top=0x4c:4.0%);b1=var255(top=0x16:2.8%);b2=var17(top=0xb3:15.9%);b3=enum2(0x00:21582,0x01:4530) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 - 0x2b2e5a26u ^ 0x7535dd25u;
    vm->flags = flags0 & 0x7036ca68u - 0x2caa6796u ^ 0x4ea9d032u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32(state0 - 0x2b2e5a26u)) ^ 0x7535dd25u)) | U16(vm->ip + 0x2u))))) + 0x9097995u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_185_fec4d0c2dccf(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=185, native=0x9d964, path=fec4d0c2dccf8472, class=static_validated, events=3823 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=71 */
    /* branch path: 0x9da8d:je:0;0x9dace:je:0;0x9db05:je:0;0x9db82:je:1 */
    /* top actual targets: 168@0x9aa83:251,203@0xa1484:251,347@0xc088d:250,337@0xbec0e:242,172@0x9b68a:203,64@0x85059:142,123@0x91a59:132,174@0x9bd8f:131 */
    /* operands: b0=var189(top=0xe3:2.6%);b1=var153(top=0x89:2.3%);b2=enum3(0x3a:20775,0x62:559,0x50:286) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 ^ flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 | 0x17e55682u)))) ^ 0x2000c224u)) & 0x1f29f35u)) + (mask32((mask32((mask32((mask32((mask32(flags0 | 0x17e55682u)) + 0x28030c24u)) ^ 0x30d03eecu)) | 0x7fa981au)) ^ 0x5ea8d1c5u)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_189_0474812a78a0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=189, native=0x9e7af, path=0474812a78a0c853, class=static_validated, events=3804 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=67 */
    /* branch path: 0x9e84f:je:0;0x9e880:je:0;0x9e8d1:je:0 */
    /* top actual targets: 307@0xb8064:424,297@0xb64d7:396,184@0x9d694:321,30@0x7e849:255,215@0xa4609:209,18@0x7be9b:161,28@0x7e390:139,66@0x855ff:137 */
    /* operands: b0=var256(top=0xec:1.7%);b1=var256(top=0x00:4.4%);b2=var64(top=0xbc:6.1%);b3=var64(top=0xe7:4.7%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 & 0x160e4f34u + U16(vm->ip + 0x2u) + state0 & 0x160e4f34u ^ 0x2a1ce984u;
    vm->flags = flags0 - 0x10705aceu & 0x49036387u & state0 & 0x160e4f34u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 & 0x160e4f34u)))) ^ 0x2a1ce984u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_333_5dba04465e0f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=333, native=0xbd8af, path=5dba04465e0f3b28, class=static_validated, events=3475 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=119 */
    /* branch path: 0xbd8d9:je:0;0xbd9ec:je:0;0xbda3c:je:0 */
    /* top actual targets: 305@0xb78b0:326,215@0xa4609:322,258@0xadf2c:294,337@0xbec0e:173,243@0xaab6a:152,28@0x7e390:142,114@0x90319:138,64@0x85059:127 */
    /* operands: b0=var64(top=0x83:8.1%);b1=var50(top=0xf9:6.4%);b2=var17(top=0x68:18.1%);b3=enum2(0x00:10031,0x01:2163) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ state0;
    vm->flags = flags0 ^ state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32(flags0 ^ state0)) | 0x37ccc6eau)))) - 0x61e56767u)) & (mask32(flags0 ^ state0)))) + (mask32((mask32(flags0 ^ state0)) | 0x71cc1ee8u)))) | 0x569ecec3u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_064_362f895a0530(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=64, native=0x85059, path=362f895a05304b24, class=static_validated, events=3435 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=77 */
    /* branch path: 0x8507f:je:1;0x850d9:je:1 */
    /* top actual targets: 199@0xa0631:332,121@0x91379:276,18@0x7be9b:247,28@0x7e390:233,215@0xa4609:221,185@0x9d964:161,307@0xb8064:158,66@0x855ff:138 */
    /* operands: b0=var256(top=0xef:1.6%);b1=var256(top=0x8a:1.6%);b2=var256(top=0x93:2.0%);b3=var252(top=0x00:3.6%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 - 0x79614de5u ^ U16(vm->ip + 0x2u) + flags0 + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ flags0 + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    vm->flags = flags0 + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 - 0x79614de5u)) ^ (mask32(U16(vm->ip + 0x2u) + flags0)))) ^ (mask32(flags0 + 0x729dddb0u)))))) + 0x2701cdcdu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_258_9273c2ebf377(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=258, native=0xadf2c, path=9273c2ebf377ada8, class=static_validated, events=3418 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=58 */
    /* branch path: 0xadf51:je:0;0xadfe1:je:1 */
    /* top actual targets: 172@0x9b68a:366,176@0x9c10b:328,157@0x98a9a:323,297@0xb64d7:222,199@0xa0631:171,18@0x7be9b:110,333@0xbd8af:108,66@0x855ff:106 */
    /* operands: b0=var255(top=0xf3:2.2%);b1=var256(top=0xab:1.9%);b2=var246(top=0x51:2.5%);b3=var240(top=0xeb:4.3%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 ^ 0x11095fd5u + flags0 - 0x1510614fu;
    vm->flags = flags0 - 0x1510614fu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 ^ 0x11095fd5u)) + (mask32((mask32((mask32(flags0 - 0x1510614fu)) | 0xa1b079au)) ^ 0x1769756eu)))) ^ (mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32(flags0 - 0x1510614fu)) | 0xa1b079au)) ^ 0x1769756eu)))))))) ^ 0x5812e92cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_174_1d005b75b330(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=174, native=0x9bd8f, path=1d005b75b3304463, class=static_validated, events=3318 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0x9bf10:jne:1 */
    /* top actual targets: 114@0x90319:446,258@0xadf2c:409,199@0xa0631:294,28@0x7e390:254,347@0xc088d:241,307@0xb8064:189,185@0x9d964:184,189@0x9e7af:173 */
    /* operands: b0=var191(top=0x03:3.1%);b1=var238(top=0x64:3.1%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 - flags0 & flags0 ^ flags0 + flags0 ^ 0x5fa9d2b1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32(state0 - flags0)) & flags0)) ^ flags0)) + flags0)) ^ 0x5fa9d2b1u)))) + 0x397fd954u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_189_8589bd83a0e8(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=189, native=0x9e7af, path=8589bd83a0e8cea0, class=static_validated, events=3116 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=42 */
    /* branch path: 0x9e84f:je:1;0x9e880:je:0;0x9e8d1:je:0 */
    /* top actual targets: 43@0x8173d:519,18@0x7be9b:194,28@0x7e390:162,161@0x9975a:147,174@0x9bd8f:123,215@0xa4609:88,199@0xa0631:87,185@0x9d964:79 */
    /* operands: b0=var256(top=0xec:1.7%);b1=var256(top=0x00:4.4%);b2=var64(top=0xbc:6.1%);b3=var64(top=0xe7:4.7%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 & 0x160e4f34u + U16(vm->ip + 0x2u) + state0 & 0x160e4f34u ^ 0x2a1ce984u;
    vm->flags = flags0 - 0x10705aceu & 0x49036387u & state0 & 0x160e4f34u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 & 0x160e4f34u)))) ^ 0x2a1ce984u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_184_e4bc9d81d7bb(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=184, native=0x9d694, path=e4bc9d81d7bb0910, class=static_validated, events=3100 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0x9d710:jne:1 */
    /* top actual targets: 28@0x7e390:471,66@0x855ff:426,337@0xbec0e:394,340@0xbf435:250,64@0x85059:182,114@0x90319:161,18@0x7be9b:159,347@0xc088d:125 */
    /* operands: b0=var96(top=0x5a:4.8%);b1=var242(top=0xf4:3.0%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 | 0x19d0d4du)))) + 0x3c030b15u)) ^ (mask32(flags0 + 0x7db9efb0u)))) ^ flags0)) - flags0)) ^ flags0)))) + 0x3f05b2f0u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_028_9b3b818dc141(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=28, native=0x7e390, path=9b3b818dc141b14f, class=static_validated, events=3051 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=48 */
    /* branch path: 0x7e549:je:1;0x7e584:je:1;0x7e5dc:je:0;0x7e604:je:0 */
    /* top actual targets: 189@0x9e7af:460,347@0xc088d:455,168@0x9aa83:264,287@0xb45d2:263,258@0xadf2c:163,64@0x85059:140,123@0x91a59:127,174@0x9bd8f:124 */
    /* operands: b0=var30(top=0xd8:12.5%);b1=var11(top=0x0a:24.2%);b2=var256(top=0x70:2.5%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ state0;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_028_e0fd2755e333(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=28, native=0x7e390, path=e0fd2755e33377c7, class=static_validated, events=2924 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=56 */
    /* branch path: 0x7e549:je:0;0x7e584:je:0;0x7e5dc:je:0;0x7e604:je:0 */
    /* top actual targets: 347@0xc088d:387,20@0x7c62b:279,340@0xbf435:158,114@0x90319:151,258@0xadf2c:142,189@0x9e7af:138,158@0x99029:111,43@0x8173d:96 */
    /* operands: b0=var30(top=0xd8:12.5%);b1=var11(top=0x0a:24.2%);b2=var256(top=0x70:2.5%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ state0;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_215_93bcd881b400(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=215, native=0xa4609, path=93bcd881b4003839, class=static_validated, events=2838 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=45 */
    /* branch path: 0xa4667:je:0;0xa46a3:je:0;0xa4746:je:0;0xa47d6:je:1 */
    /* top actual targets: 189@0x9e7af:389,258@0xadf2c:312,347@0xc088d:305,123@0x91a59:290,301@0xb708d:262,300@0xb6c36:256,337@0xbec0e:163,176@0x9c10b:95 */
    /* operands: b0=var29(top=0x88:10.5%);b1=var11(top=0x05:21.1%);b2=var114(top=0xc8:9.2%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_114_6d97aa419b6e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=114, native=0x90319, path=6d97aa419b6e45b1, class=static_validated, events=2743 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=44 */
    /* branch path: 0x90334:je:0;0x903d9:je:1;0x904a4:je:1;0x904ed:je:1;0x9052b:je:1 */
    /* top actual targets: 199@0xa0631:369,268@0xb0007:291,37@0x80685:234,66@0x855ff:136,18@0x7be9b:133,185@0x9d964:122,215@0xa4609:115,297@0xb64d7:108 */
    /* operands: b0=var255(top=0x99:2.0%);b1=var198(top=0x77:2.9%);b2=var250(top=0xa6:2.9%);b3=var248(top=0xcf:2.6%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 & state0;
    vm->flags = flags0 & state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bfu)))) + state0)) & 0x48367f78u)))) ^ 0x63bb548fu)) + (mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bfu)))) + state0)))) & 0x292b555du)) ^ (mask32((mask32(U16(vm->ip + 0x2u) + (...#81b58d825e9e; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_064_4db1c9febad3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=64, native=0x85059, path=4db1c9febad343e7, class=static_validated, events=2740 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=51 */
    /* branch path: 0x8507f:je:0;0x850d9:je:1 */
    /* top actual targets: 28@0x7e390:351,215@0xa4609:189,161@0x9975a:139,43@0x8173d:139,184@0x9d694:136,243@0xaab6a:113,18@0x7be9b:93,157@0x98a9a:92 */
    /* operands: b0=var256(top=0xef:1.6%);b1=var256(top=0x8a:1.6%);b2=var256(top=0x93:2.0%);b3=var252(top=0x00:3.6%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 - 0x79614de5u ^ U16(vm->ip + 0x2u) + flags0 + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ flags0 + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    vm->flags = flags0 + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 - 0x79614de5u)) ^ (mask32(U16(vm->ip + 0x2u) + (mask32(flags0 + 0x4cd0c9aeu)))))) ^ (mask32((mask32(flags0 + 0x4cd0c9aeu)) + 0x729dddb0u)))))) + 0x2701cdcdu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_340_2a0ce8aa7d3e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=340, native=0xbf435, path=2a0ce8aa7d3ecb4e, class=static_validated, events=2661 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=48 */
    /* branch path: 0xbf457:je:0;0xbf48f:je:0;0xbf4d7:je:0 */
    /* top actual targets: 161@0x9975a:286,66@0x855ff:272,18@0x7be9b:125,158@0x99029:115,20@0x7c62b:107,305@0xb78b0:103,176@0x9c10b:98,28@0x7e390:93 */
    /* operands: b0=var221(top=0x4c:4.0%);b1=var255(top=0x16:2.8%);b2=var17(top=0xb3:15.9%);b3=enum2(0x00:21582,0x01:4530) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 - 0x2b2e5a26u ^ 0x7535dd25u;
    vm->flags = flags0 & 0x7036ca68u - 0x2caa6796u ^ 0x4ea9d032u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32(state0 - 0x2b2e5a26u)) ^ 0x7535dd25u)) | U16(vm->ip + 0x2u))))) + 0x9097995u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_043_6350e9318aa5(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=43, native=0x8173d, path=6350e9318aa572ff, class=static_validated, events=2585 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=82 */
    /* branch path: 0x81762:je:0;0x817a0:je:1;0x81818:je:0 */
    /* top actual targets: 258@0xadf2c:315,340@0xbf435:177,307@0xb8064:156,18@0x7be9b:152,28@0x7e390:141,66@0x855ff:136,346@0xc0535:127,215@0xa4609:109 */
    /* operands: b0=var251(top=0x17:2.2%);b1=var251(top=0x74:5.0%);b2=var252(top=0xa3:3.3%);b3=var244(top=0x00:10.4%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 ^ U16(vm->ip + 0x2u) ^ state0;
    vm->flags = flags0 ^ 0x542b3101u & 0x494c0852u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ (mask32(U16(vm->ip + 0x2u) ^ state0)))))) - 0x64d373dcu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_043_b3c385ba08ea(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=43, native=0x8173d, path=b3c385ba08ea674a, class=static_validated, events=2558 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=43 */
    /* branch path: 0x81762:je:0;0x817a0:je:0;0x81818:je:0 */
    /* top actual targets: 26@0x7dbbb:499,347@0xc088d:396,199@0xa0631:290,287@0xb45d2:89,340@0xbf435:78,305@0xb78b0:70,258@0xadf2c:69,337@0xbec0e:68 */
    /* operands: b0=var251(top=0x17:2.2%);b1=var251(top=0x74:5.0%);b2=var252(top=0xa3:3.3%);b3=var244(top=0x00:10.4%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 ^ U16(vm->ip + 0x2u) ^ state0;
    vm->flags = flags0 ^ 0x542b3101u & 0x494c0852u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ (mask32(U16(vm->ip + 0x2u) ^ state0)))))) - 0x64d373dcu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_172_5946e9107680(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=172, native=0x9b68a, path=5946e91076802daf, class=static_validated, events=2423 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=86 */
    /* branch path: 0x9b76c:je:1 */
    /* top actual targets: 28@0x7e390:328,199@0xa0631:286,332@0xbd36d:257,258@0xadf2c:147,66@0x855ff:134,114@0x90319:127,18@0x7be9b:112,185@0x9d964:107 */
    /* operands: b0=var252(top=0xb3:4.2%);b1=var232(top=0xae:3.5%);b2=var30(top=0x23:12.0%);b3=var11(top=0x03:16.3%) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ state0 ^ 0x7070916cu - 0x6ecee241u ^ flags0 ^ 0x15bf847fu & state0;
    vm->flags = flags0 ^ 0x15bf847fu & state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ 0x715f0a33u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_028_a584853ff2ab(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=28, native=0x7e390, path=a584853ff2ab10f8, class=static_validated, events=2373 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=24 */
    /* branch path: 0x7e549:je:0;0x7e584:je:1;0x7e5dc:je:0;0x7e604:je:0 */
    /* top actual targets: 43@0x8173d:358,347@0xc088d:294,114@0x90319:124,258@0xadf2c:110,337@0xbec0e:92,189@0x9e7af:84,176@0x9c10b:65,340@0xbf435:60 */
    /* operands: b0=var30(top=0xd8:12.5%);b1=var11(top=0x0a:24.2%);b2=var256(top=0x70:2.5%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ state0;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_185_095a648478af(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=185, native=0x9d964, path=095a648478af979e, class=static_validated, events=2349 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=57 */
    /* branch path: 0x9da8d:je:0;0x9dace:je:0;0x9db05:je:0;0x9db82:je:0 */
    /* top actual targets: 168@0x9aa83:187,203@0xa1484:180,347@0xc088d:166,337@0xbec0e:165,172@0x9b68a:136,220@0xa522e:125,64@0x85059:95,123@0x91a59:93 */
    /* operands: b0=var189(top=0xe3:2.6%);b1=var153(top=0x89:2.3%);b2=enum3(0x3a:20775,0x62:559,0x50:286) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 ^ flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 | 0x17e55682u)))) ^ 0x2000c224u)) & 0x1f29f35u)) + (mask32((mask32((mask32((mask32((mask32(flags0 | 0x17e55682u)) + 0x28030c24u)) ^ 0x30d03eecu)) | 0x7fa981au)) ^ 0x5ea8d1c5u)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_337_70340f310082(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=337, native=0xbec0e, path=70340f3100826d12, class=static_validated, events=2344 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=43 */
    /* branch path: 0xbec7a:je:0;0xbeea3:je:0;0xbeee0:je:0;0xbef44:je:0;0xbef67:je:1;0xbefac:je:0 */
    /* top actual targets: 196@0x9fbcd:262,297@0xb64d7:160,185@0x9d964:139,3@0x78c77:132,215@0xa4609:128,28@0x7e390:125,305@0xb78b0:98,172@0x9b68a:90 */
    /* operands: b0=var128(top=0x7c:3.3%);b1=var227(top=0x91:5.3%);b2=var254(top=0x9d:2.2%);b3=var253(top=0x00:7.9%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - U16(vm->ip + 0x2u) + state0 - flags0 + flags0 + 0x2051de91u & flags0 + 0x61f749a7u;
    vm->flags = flags0 + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) - (mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 - flags0)))) + flags0)))) + 0x2051de91u)) & (mask32(flags0 + 0x61f749a7u)))) | 0x51d7631au)) ^ (mask32(flags0 + 0x61f749a7u)))))) ^ 0x2060ddeau)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_168_8eac2b09ff5f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=168, native=0x9aa83, path=8eac2b09ff5fd809, class=static_validated, events=2276 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=60 */
    /* branch path: 0x9aa9c:je:1;0x9aadd:je:1;0x9ab2f:je:1;0x9ab7f:je:0;0x9ad6a:je:0;0x9ad85:je:0 */
    /* top actual targets: 315@0xb9451:474,340@0xbf435:276,258@0xadf2c:156,64@0x85059:94,114@0x90319:76,305@0xb78b0:71,307@0xb8064:64,26@0x7dbbb:63 */
    /* operands: b0=var244(top=0xe3:6.9%);b1=var219(top=0x56:6.0%);b2=var192(top=0xde:4.8%);b3=var14(top=0xd9:19.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32(state0 | 0x6899d5d4u)) & (mask32(U16(vm->ip + 0x0u) + flags0)))))) + 0x553030a2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_347_98d7cb445c79(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=347, native=0xc088d, path=98d7cb445c7961a8, class=static_validated, events=2260 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=36 */
    /* branch path: 0xc093d:je:0;0xc09c2:je:0 */
    /* top actual targets: 37@0x80685:319,18@0x7be9b:274,128@0x9299b:256,307@0xb8064:189,297@0xb64d7:101,315@0xb9451:90,43@0x8173d:81,66@0x855ff:72 */
    /* operands: b0=var256(top=0xe6:2.1%);b1=var79(top=0x0b:6.4%);b2=var230(top=0xba:3.9%);b3=var101(top=0x82:10.2%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0u)))) | (mask32((mask32(flags0 ^ (mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0u)))) & 0x45223942u)))) + (mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0u)))) | 0x2efc96c5u)))))) ^ 0...#672c9fb24e71; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_172_9f43d3ef4465(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=172, native=0x9b68a, path=9f43d3ef44650cf6, class=static_validated, events=2107 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=42 */
    /* branch path: 0x9b76c:je:0 */
    /* top actual targets: 128@0x9299b:261,307@0xb8064:261,254@0xad32c:260,260@0xae90b:257,189@0x9e7af:146,340@0xbf435:69,215@0xa4609:66,346@0xc0535:52 */
    /* operands: b0=var252(top=0xb3:4.2%);b1=var232(top=0xae:3.5%);b2=var30(top=0x23:12.0%);b3=var11(top=0x03:16.3%) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ state0 ^ 0x7070916cu - 0x6ecee241u ^ flags0 ^ 0x15bf847fu & state0;
    vm->flags = flags0 ^ 0x15bf847fu & state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ 0x715f0a33u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_315_856d4d06835c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=315, native=0xb9451, path=856d4d06835c131a, class=static_validated, events=2024 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=79 */
    /* branch path: 0xb94cc:je:1;0xb961d:jne:1;0xb9652:jne:1;0xb9690:je:0;0xb969f:je:0;0xb971f:je:0 */
    /* top actual targets: 28@0x7e390:326,167@0x9a8d2:280,347@0xc088d:280,258@0xadf2c:99,199@0xa0631:97,337@0xbec0e:90,307@0xb8064:89,196@0x9fbcd:86 */
    /* operands: b0=0xe8;b1=0x01;b2=var18(top=0xe1:11.7%);b3=var10(top=0xfa:20.4%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ flags0 ^ 0x285c750cu;
    vm->flags = flags0 ^ 0x285c750cu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ 0x42c7f071u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_018_30ead7f21142(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=18, native=0x7be9b, path=30ead7f21142b97e, class=static_validated, events=2010 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=27 */
    /* branch path: 0x7bed4:je:0;0x7befe:je:0;0x7bfe0:je:0;0x7c17e:je:0 */
    /* top actual targets: 347@0xc088d:335,114@0x90319:297,174@0x9bd8f:90,161@0x9975a:81,64@0x85059:72,189@0x9e7af:70,123@0x91a59:68,258@0xadf2c:66 */
    /* operands: b0=var149(top=0xa0:5.4%);b1=var200(top=0x0a:6.4%);b2=var165(top=0x3a:10.5%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 & (mask32((mask32(flags0 | 0x954df65u)) + 0x5b466f3bu)))) - 0x6382ce20u)) & (mask32((mask32(flags0 | 0x954df65u)) + 0x5b466f3bu)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_305_e9d3813fa058(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=305, native=0xb78b0, path=e9d3813fa05892b0, class=static_validated, events=1981 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=85 */
    /* branch path: 0xb78db:je:0;0xb7924:je:1;0xb7978:jne:1;0xb7988:jne:1;0xb79a8:je:0;0xb79b7:je:0;0xb7a13:je:0;0xb7a4c:je:0 */
    /* top actual targets: 189@0x9e7af:318,199@0xa0631:256,307@0xb8064:170,297@0xb64d7:147,268@0xb0007:136,157@0x98a9a:109,338@0xbf128:76,28@0x7e390:74 */
    /* operands: b0=var237(top=0x40:4.1%);b1=var225(top=0x09:3.5%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x0u) + state0;
    vm->flags = flags0 & state0 & 0x14763e0cu + 0x47fe8c0bu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_049_14dc36f04060(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=49, native=0x82820, path=14dc36f04060df7a, class=static_validated, events=1844 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0x829d6:je:0;0x82c04:je:1;0x82cc1:je:0 */
    /* top actual targets: 144@0x95887:471,198@0xa037e:361,257@0xadbfd:320,108@0x8f24b:261,160@0x994cf:145,173@0x9ba74:135,352@0xc1ec4:110,256@0xad849:41 */
    /* operands: b0=0x00;b1=var168(top=0x78:8.6%);b2=var190(top=0xa7:6.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 & flags0 + flags0 - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + state0 & flags0 + flags0 - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    vm->flags = flags0 ^ state0 & flags0 + flags0 - 0x353700edu + 0x55a592d8u ^ 0x702de876u + state0 & flags0 + flags0 - 0x353700edu + 0x55a592d8u + 0x7a4ca08u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) + (mask32((mask32((mask32((mask32(state0 & flags0)) + flags0)) - 0x353700edu)) + 0x55a592d8u)))) + 0x55b8ef8du)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_203_4292cfe29555(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=203, native=0xa1484, path=4292cfe2955518a7, class=static_validated, events=1771 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=67 */
    /* branch path: 0xa149f:je:1;0xa1781:je:0 */
    /* top actual targets: 297@0xb64d7:365,258@0xadf2c:332,199@0xa0631:72,66@0x855ff:67,18@0x7be9b:66,300@0xb6c36:66,64@0x85059:60,114@0x90319:55 */
    /* operands: b0=var26(top=0x17:11.8%);b1=var11(top=0x91:19.4%);b2=var120(top=0x3f:5.5%);b3=var99(top=0x76:14.3%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x97da242u & flags0 + 0x97da242u ^ 0x370370f1u;
    vm->flags = flags0 + 0x97da242u & state0 - flags0 + 0x97da242u & flags0 + 0x97da242u ^ 0x370370f1u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ 0x4ccb9807u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_161_0cf4855e16d0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=161, native=0x9975a, path=0cf4855e16d07afb, class=static_validated, events=1767 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=68 */
    /* branch path: 0x99779:je:0;0x9988f:jne:1;0x9994f:je:0 */
    /* top actual targets: 66@0x855ff:342,18@0x7be9b:299,28@0x7e390:154,258@0xadf2c:129,347@0xc088d:94,337@0xbec0e:91,340@0xbf435:91,215@0xa4609:70 */
    /* operands: b0=var125(top=0x0e:5.8%);b1=var51(top=0x70:5.8%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x327a10ceu + 0xb99ee49u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 | 0x69145e52u)))) + 0x4c0132b4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_297_1438e06c94d0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=297, native=0xb64d7, path=1438e06c94d04486, class=static_validated, events=1718 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=34 */
    /* branch path: 0xb64f9:je:0;0xb651f:je:0;0xb654f:je:0;0xb65c8:je:0;0xb65f5:je:1 */
    /* top actual targets: 333@0xbd8af:252,260@0xae90b:233,268@0xb0007:112,340@0xbf435:110,184@0x9d694:102,258@0xadf2c:98,347@0xc088d:88,189@0x9e7af:68 */
    /* operands: b0=var222(top=0x89:5.5%);b1=var249(top=0x2e:3.1%);b2=var256(top=0xad:1.8%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 - 0x48220942u;
    vm->flags = flags0 + 0x283684b4u ^ 0x4a5a939au;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32(state0 - 0x48220942u)) | (mask32((mask32(flags0 + 0x283684b4u)) ^ 0x4a5a939au)))) ^ 0x6b7f38b7u)) + (mask32((mask32(U8(vm->ip + 0x0u) + (mask32((mask32((mask32(state0 - 0x48220942u)) | (mask32((mask32(flags0 + 0x283684b4u)) ^ 0x4a5a939au)))) ^ 0x6b7f38b7u)))) + (mask32(...#d4d3083a81fb; */
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_168_c62eeb38897c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=168, native=0x9aa83, path=c62eeb38897cc019, class=static_validated, events=1661 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=45 */
    /* branch path: 0x9aa9c:je:0;0x9aadd:je:1;0x9ab2f:je:1;0x9ab7f:je:0;0x9ad6a:je:0;0x9ad85:je:0 */
    /* top actual targets: 189@0x9e7af:270,337@0xbec0e:263,347@0xc088d:246,258@0xadf2c:100,254@0xad32c:64,215@0xa4609:51,26@0x7dbbb:49,346@0xc0535:49 */
    /* operands: b0=var244(top=0xe3:6.9%);b1=var219(top=0x56:6.0%);b2=var192(top=0xde:4.8%);b3=var14(top=0xd9:19.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32(state0 | 0x6899d5d4u)) & (mask32(U16(vm->ip + 0x0u) + (mask32((mask32(flags0 & 0x66031b5eu)) - 0x2eab70d9u)))))))) + 0x553030a2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_066_213fac87c705(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=66, native=0x855ff, path=213fac87c7056b3c, class=static_validated, events=1654 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=27 */
    /* branch path: 0x85621:je:0;0x8566a:je:0;0x856f1:je:0;0x858d5:je:0 */
    /* top actual targets: 300@0xb6c36:233,64@0x85059:119,340@0xbf435:108,315@0xb9451:81,258@0xadf2c:80,189@0x9e7af:70,337@0xbec0e:70,114@0x90319:56 */
    /* operands: b0=var248(top=0x65:2.5%);b1=var253(top=0xa8:2.1%);b2=var114(top=0x3a:8.4%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ state0 & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - flags0 - 0x50170614u;
    vm->flags = flags0 - 0x50170614u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 & 0x2f6cb1f6u)) - (mask32(U8(vm->ip + 0x2u) ^ (mask32(state0 & 0x2f6cb1f6u)))))) ^ 0x745ff1d2u)) & 0x13de2cddu)) - (mask32((mask32((mask32(flags0 - 0x50170614u)) | 0x7167293au)) ^ 0x42a6ffd6u)))))) - 0x3cd18153u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_268_0465db1cd6ce(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=268, native=0xb0007, path=0465db1cd6ce279e, class=static_validated, events=1618 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=54 */
    /* branch path: 0xb01e9:je:0;0xb0218:je:0;0xb026a:je:1;0xb029a:je:0;0xb02eb:je:0;0xb0307:je:1 */
    /* top actual targets: 243@0xaab6a:300,301@0xb708d:170,185@0x9d964:122,64@0x85059:95,346@0xc0535:87,18@0x7be9b:85,189@0x9e7af:80,340@0xbf435:47 */
    /* operands: b0=var247(top=0x4a:3.3%);b1=var251(top=0x1c:6.8%);b2=var127(top=0x3e:4.0%);b3=var202(top=0x6c:7.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32((mask32(state0 | 0x71bd1bb1u)) + (mask32((mask32(U16(vm->ip + 0x0u) - (mask32(state0 | 0x71bd1bb1u)))) - flags0)))) & (mask32((mask32((mask32(flags0 + 0x33c0c75bu)) & 0x174c40efu)) - 0x554d11eeu)))) | (mask32((mask32((mask32(flags0 + 0x33c0c75bu)) & 0x174c40efu)) - 0x554d11eu...#2c2c9c427f9a; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_158_cf24ba4d3b8d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=158, native=0x99029, path=cf24ba4d3b8dd524, class=static_validated, events=1603 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=79 */
    /* branch path: 0x99071:je:1;0x990e7:jne:1 */
    /* top actual targets: 340@0xbf435:343,258@0xadf2c:294,18@0x7be9b:109,337@0xbec0e:100,261@0xaeda2:92,347@0xc088d:87,189@0x9e7af:79,66@0x855ff:73 */
    /* operands: b0=0xe8;b1=0x01;b2=var224(top=0xf6:3.1%);b3=var226(top=0xd6:4.1%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 ^ 0x1fbfc3f3u ^ flags0 ^ 0x3c39b020u ^ 0x1f711c95u;
    vm->flags = flags0 ^ 0x3c39b020u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32(state0 ^ 0x1fbfc3f3u)) ^ (mask32(flags0 ^ 0x1f711c95u)))) | 0xfb6049eu)) ^ flags0)))) ^ 0x3ffdb46cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_176_bbe0d482f93a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=176, native=0x9c10b, path=bbe0d482f93ad097, class=static_validated, events=1598 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=78 */
    /* branch path: 0x9c1c7:jne:1;0x9c215:je:1;0x9c25d:je:0 */
    /* top actual targets: 28@0x7e390:340,307@0xb8064:157,337@0xbec0e:138,114@0x90319:136,189@0x9e7af:130,18@0x7be9b:101,340@0xbf435:100,64@0x85059:75 */
    /* operands: b0=0xe8;b1=0x01;b2=var235(top=0x82:3.5%);b3=var236(top=0x27:2.7%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 & flags0 & 0x2c46ace3u;
    vm->flags = flags0 - 0x14b22a15u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32(state0 & flags0)) & 0x2c46ace3u)) | flags0)))) ^ 0x37839d72u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_300_833b04476f7a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=300, native=0xb6c36, path=833b04476f7a3399, class=static_validated, events=1560 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=120 */
    /* branch path: 0xb6c57:je:0;0xb6c87:je:0;0xb6d00:je:1;0xb6f5c:je:0 */
    /* top actual targets: 258@0xadf2c:260,220@0xa522e:240,185@0x9d964:239,333@0xbd8af:239,337@0xbec0e:239,297@0xb64d7:127,301@0xb708d:60,183@0x9d495:47 */
    /* operands: b0=var134(top=0x12:10.9%);b1=var135(top=0x85:10.1%);b2=var96(top=0x60:10.2%);b3=var122(top=0x42:10.0%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + state0 & 0x2b7e7713u & 0x515f6307u + flags0 & 0x742354du + 0x2ff05a2bu;
    vm->flags = flags0 & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32((mask32(state0 & 0x2b7e7713u)) & 0x515f6307u)) - (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32(state0 & 0x2b7e7713u)) & 0x515f6307u)))) + flags0)))) | (mask32(flags0 & 0x1011ba33u)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_157_674a4baf101e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=157, native=0x98a9a, path=674a4baf101eb4d8, class=static_validated, events=1558 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=48 */
    /* branch path: 0x98ab4:je:1;0x98afb:je:1;0x98b42:je:1;0x98d6b:je:1;0x98db0:je:1;0x98e31:je:0;0x98e54:je:1 */
    /* top actual targets: 258@0xadf2c:332,66@0x855ff:303,185@0x9d964:101,199@0xa0631:97,118@0x90c23:64,148@0x96b6e:64,28@0x7e390:59,337@0xbec0e:49 */
    /* operands: b0=var125(top=0x03:4.1%);b1=var228(top=0xd8:4.3%);b2=var17(top=0x68:20.5%);b3=enum2(0x00:12160,0x01:2533) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u);
    vm->flags = flags0 + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) & 0x60d377f3u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 ^ 0x2f4dfd84u)) + U16(vm->ip + 0x2u))) | 0x1f5cd114u)) - (mask32((mask32(flags0 ^ 0x3d2638afu)) & (mask32((mask32(state0 ^ 0x2f4dfd84u)) + U16(vm->ip + 0x2u))))))))) ^ 0x17d39c9fu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_203_1f7d4c17755b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=203, native=0xa1484, path=1f7d4c17755b5949, class=static_validated, events=1512 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=61 */
    /* branch path: 0xa149f:je:0;0xa1781:je:0 */
    /* top actual targets: 315@0xb9451:265,52@0x833c7:256,347@0xc088d:100,346@0xc0535:93,220@0xa522e:67,320@0xbada5:67,300@0xb6c36:65,340@0xbf435:56 */
    /* operands: b0=var26(top=0x17:11.8%);b1=var11(top=0x91:19.4%);b2=var120(top=0x3f:5.5%);b3=var99(top=0x76:14.3%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x97da242u & flags0 + 0x97da242u ^ 0x370370f1u;
    vm->flags = flags0 + 0x97da242u & state0 - flags0 + 0x97da242u & flags0 + 0x97da242u ^ 0x370370f1u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ 0x4ccb9807u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_287_bae1d16b43d4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=287, native=0xb45d2, path=bae1d16b43d47f2d, class=static_validated, events=1510 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=76 */
    /* branch path: 0xb461d:je:0;0xb464a:je:1;0xb468d:je:0;0xb46fa:je:1;0xb47a7:jne:1;0xb47b8:jne:1;0xb47d9:je:0;0xb47e8:je:0;0xb4810:je:0 */
    /* top actual targets: 199@0xa0631:304,172@0x9b68a:150,347@0xc088d:130,307@0xb8064:95,189@0x9e7af:77,196@0x9fbcd:75,43@0x8173d:73,258@0xadf2c:63 */
    /* operands: b0=var120(top=0x86:4.7%);b1=var107(top=0xbe:5.0%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 & 0xa6ddb71u - flags0 - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u;
    vm->flags = flags0 - 0x67686890u + 0x609b810au - 0x1b65c97bu - 0x26941ac4u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 & 0xa6ddb71u)) - (mask32(flags0 + 0x6975e1b1u)))) - 0x4988e425u)) | 0x3ab14dd1u)))) ^ 0xa841ebdu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_173_45fd438f0ec9(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=173, native=0x9ba74, path=45fd438f0ec970b1, class=static_validated, events=1457 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=92 */
    /* branch path: 0x9bb4a:jne:1;0x9bb57:jne:1;0x9bb65:jne:1;0x9bb91:jne:0;0x9bbb5:je:0;0x9bbfa:je:0 */
    /* top actual targets: 349@0xc140b:263,340@0xbf435:104,28@0x7e390:103,185@0x9d964:84,203@0xa1484:74,297@0xb64d7:73,254@0xad32c:70,291@0xb4edd:64 */
    /* operands: b0=var117(top=0xaf:7.6%);b1=var32(top=0x0b:13.4%) */
    /* GPR+scratch branch profile: 0/804 unknown branches (0.0%): */
    vm->state = state0 + 0x5eced92du ^ 0x456d7018u;
    vm->flags = flags0 - state0 + 0x5eced92du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 + 0x5eced92du)) ^ 0x456d7018u)) | 0xebbbd20u)) & (mask32((mask32(flags0 - (mask32((mask32(state0 + 0x5eced92du)) | 0x1f8bac4cu)))) & 0x74128b65u)))))) + 0x1f118051u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_332_074498403375(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=332, native=0xbd36d, path=074498403375c74b, class=static_validated, events=1429 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=8 */
    /* branch path: 0xbd488:je:0;0xbd544:je:0;0xbd6ed:je:1;0xbd73d:je:1 */
    /* top actual targets: 347@0xc088d:265,114@0x90319:256,319@0xba72f:256,99@0x8c99a:256,258@0xadf2c:92,340@0xbf435:73,91@0x8b6de:31,18@0x7be9b:26 */
    /* operands: b0=var38(top=0x0b:15.7%);b1=var19(top=0xd7:43.6%);b2=var79(top=0xf7:9.8%);b3=var108(top=0xca:15.7%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((mask32((mask32((mask32((mask32(state0 | 0x30661b97u)) & 0x57d9fe65u)) | (mask32((mask32((mask32(flags0 & (mask32(state0 | 0x2f0ca7d2u)))) & (mask32((mask32(state0 | 0x30661b97u)) - 0x23cebdbcu)))) ^ (mask32((mask32(state0 | 0x30661b97u)) & 0x57d9fe65u)))))) & (mask32((...#3cd6875dc360; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_114_9062c46ada00(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=114, native=0x90319, path=9062c46ada00e046, class=static_validated, events=1420 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=24 */
    /* branch path: 0x90334:je:0;0x903d9:je:1;0x904a4:je:0;0x904ed:je:1;0x9052b:je:1 */
    /* top actual targets: 185@0x9d964:267,158@0x99029:244,215@0xa4609:138,307@0xb8064:102,20@0x7c62b:65,18@0x7be9b:63,196@0x9fbcd:57,66@0x855ff:47 */
    /* operands: b0=var255(top=0x99:2.0%);b1=var198(top=0x77:2.9%);b2=var250(top=0xa6:2.9%);b3=var248(top=0xcf:2.6%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 & state0;
    vm->flags = flags0 & state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bfu)))) + state0)) & 0x48367f78u)))) ^ 0x63bb548fu)) + (mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bfu)))) + state0)))) & 0x292b555du)) ^ (mask32((mask32(U16(vm->ip + 0x2u) + (...#47086c370ce0; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_114_2d4f31d7d7d3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=114, native=0x90319, path=2d4f31d7d7d3afb9, class=static_validated, events=1398 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=33 */
    /* branch path: 0x90334:je:0;0x903d9:je:0;0x904a4:je:1;0x904ed:je:1;0x9052b:je:1 */
    /* top actual targets: 66@0x855ff:365,20@0x7c62b:129,315@0xb9451:85,307@0xb8064:62,250@0xac802:55,199@0xa0631:45,161@0x9975a:42,18@0x7be9b:38 */
    /* operands: b0=var255(top=0x99:2.0%);b1=var198(top=0x77:2.9%);b2=var250(top=0xa6:2.9%);b3=var248(top=0xcf:2.6%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 & state0;
    vm->flags = flags0 & state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32((mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bfu)))) - 0x3dca653fu)) ^ 0x671da5f4u)) + state0)) & 0x48367f78u)))) ^ 0x63bb548fu)) + (mask32((mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5u...#8fb5e76f8e85; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_199_a3fd491b93ac(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=199, native=0xa0631, path=a3fd491b93ac1355, class=static_validated, events=1364 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=22 */
    /* branch path: 0xa0676:je:0;0xa0921:je:0;0xa094b:je:0;0xa0985:je:0 */
    /* top actual targets: 127@0x926c3:255,258@0xadf2c:79,189@0x9e7af:76,43@0x8173d:75,273@0xb11ca:68,174@0x9bd8f:58,340@0xbf435:45,196@0x9fbcd:44 */
    /* operands: b0=var128(top=0xc7:3.5%);b1=var256(top=0x88:2.4%);b2=var179(top=0x3a:9.8%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 + U8(vm->ip + 0x2u) + flags0 ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + flags0 ^ 0x7353b039u - 0x24d1328au;
    vm->flags = flags0 ^ 0x7353b039u - 0x24d1328au & 0x4705559fu + 0x79865026u + 0x73a763f8u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 + (mask32(U8(vm->ip + 0x2u) + (mask32((mask32(flags0 ^ 0x7353b039u)) - 0x24d1328au)))))) ^ 0x7e708197u)) & 0x20d5418u)) + (mask32((mask32(flags0 ^ 0x7353b039u)) - 0x24d1328au)))))) + 0x3030bb89u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_108_8877d7eba92e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=108, native=0x8f24b, path=8877d7eba92eb84b, class=static_validated, events=1363 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=67 */
    /* branch path: 0x8f368:jne:1;0x8f38e:jne:1;0x8f3a8:jne:1;0x8f438:jne:0;0x8f4f4:je:1;0x8f53a:je:0;0x8f55b:je:1 */
    /* top actual targets: 337@0xbec0e:291,333@0xbd8af:279,345@0xc02e4:88,307@0xb8064:81,260@0xae90b:68,172@0x9b68a:67,208@0xa2361:64,199@0xa0631:30 */
    /* operands: b0=var228(top=0xce:5.1%);b1=var237(top=0x85:6.6%) */
    /* GPR+scratch branch profile: 0/917 unknown branches (0.0%): */
    vm->state = state0 + 0x11961dc7u ^ 0x5fa19cc7u - flags0;
    vm->flags = flags0 ^ 0x1d98f07au & 0x60594c67u - 0x2e3abdaeu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 + 0x11961dc7u)) ^ 0x5fa19cc7u)) - flags0)))) + 0x36f124dbu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_243_72733eb95153(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=243, native=0xaab6a, path=72733eb95153883e, class=static_validated, events=1341 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=62 */
    /* branch path: 0xaac27:je:0;0xaad24:jne:1;0xaad35:jne:1;0xaad56:je:0;0xaad65:je:0 */
    /* top actual targets: 307@0xb8064:317,28@0x7e390:108,114@0x90319:94,338@0xbf128:83,18@0x7be9b:78,66@0x855ff:75,185@0x9d964:62,189@0x9e7af:57 */
    /* operands: b0=var61(top=0x45:8.6%);b1=var69(top=0x9e:13.6%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 ^ 0x47b31677u;
    vm->flags = flags0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32(state0 ^ 0x47b31677u)) | (mask32((mask32((mask32((mask32(flags0 | (mask32(state0 | 0x5f60d018u)))) + state0)) + 0x398f70f4u)) & 0x4ec4a2f1u)))) ^ 0x57df388cu)) & (mask32((mask32((mask32((mask32((mask32(flags0 | (mask32(state0 | 0x5f60d018u)))) + state0)...#222bd96ac46a; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_033_462a88e3c9a1(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=33, native=0x7f7c4, path=462a88e3c9a1365d, class=static_validated, events=1295 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=82 */
    /* branch path: 0x7f7fd:je:1;0x7f845:je:1;0x7f916:jne:1;0x7f927:jne:1;0x7f94a:je:0;0x7f95a:je:0;0x7f983:je:0;0x7f9b7:je:1;0x7f9e8:je:1 */
    /* top actual targets: 297@0xb64d7:282,307@0xb8064:88,157@0x98a9a:76,114@0x90319:65,258@0xadf2c:61,64@0x85059:59,172@0x9b68a:56,167@0x9a8d2:52 */
    /* operands: b0=0xe8;b1=0x01;b2=var122(top=0x34:5.8%);b3=var129(top=0xc8:6.6%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ state0 & 0x457915dcu & 0x16110d0au;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 | 0x15422921u)))) + 0x2d0713f3u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_114_102f846cb456(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=114, native=0x90319, path=102f846cb456dd47, class=static_validated, events=1293 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=13 */
    /* branch path: 0x90334:je:0;0x903d9:je:0;0x904a4:je:0;0x904ed:je:1;0x9052b:je:1 */
    /* top actual targets: 287@0xb45d2:245,332@0xbd36d:234,185@0x9d964:76,66@0x855ff:69,43@0x8173d:58,154@0x97ce6:56,307@0xb8064:49,28@0x7e390:46 */
    /* operands: b0=var255(top=0x99:2.0%);b1=var198(top=0x77:2.9%);b2=var250(top=0xa6:2.9%);b3=var248(top=0xcf:2.6%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 & state0;
    vm->flags = flags0 & state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32((mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bfu)))) - 0x3dca653fu)) ^ 0x671da5f4u)) + state0)) & 0x48367f78u)))) ^ 0x63bb548fu)) + (mask32((mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5u...#d1f0a102e70e; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_257_9572ab8966df(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=257, native=0xadbfd, path=9572ab8966df7a4c, class=static_validated, events=1285 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=79 */
    /* branch path: 0xadc1e:je:0;0xadcc0:jne:1;0xadccc:jne:1;0xadcd9:jne:1;0xadd06:jne:0;0xadd6a:je:0;0xadda4:je:0 */
    /* top actual targets: 172@0x9b68a:769,43@0x8173d:262,28@0x7e390:19,168@0x9aa83:16,333@0xbd8af:16,347@0xc088d:13,124@0x91e81:11,203@0xa1484:11 */
    /* operands: b0=var32(top=0xe7:10.9%);b1=var43(top=0xb5:9.7%) */
    /* GPR+scratch branch profile: 0/918 unknown branches (0.0%): */
    vm->state = state0 - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32(state0 - 0x509f61c9u)) + 0x1b9def5u)) - 0x7d4ca123u)) | 0x1d2af87u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_020_c81d765888be(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=20, native=0x7c62b, path=c81d765888be54d9, class=static_validated, events=1280 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=62 */
    /* branch path: 0x7c649:je:0;0x7c702:je:1;0x7c858:jne:1 */
    /* top actual targets: 181@0x9d13f:256,66@0x855ff:128,114@0x90319:120,297@0xb64d7:84,347@0xc088d:81,189@0x9e7af:72,337@0xbec0e:72,185@0x9d964:69 */
    /* operands: b0=0xe8;b1=0x01;b2=var220(top=0xa5:4.7%);b3=var173(top=0x77:9.9%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x58f71b08u & 0x17188826u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 | 0x180e72f2u)))) - 0x36332ac8u)) - (mask32(flags0 & 0x1fa2014fu)))) | 0x38e67f26u)) - flags0)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_315_6ac4fb503bb4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=315, native=0xb9451, path=6ac4fb503bb44b35, class=static_validated, events=1274 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=49 */
    /* branch path: 0xb94cc:je:0;0xb961d:jne:1;0xb9652:jne:1;0xb9690:je:0;0xb969f:je:0;0xb971f:je:0 */
    /* top actual targets: 215@0xa4609:288,28@0x7e390:278,114@0x90319:80,297@0xb64d7:73,157@0x98a9a:59,43@0x8173d:46,338@0xbf128:44,340@0xbf435:41 */
    /* operands: b0=0xe8;b1=0x01;b2=var18(top=0xe1:11.7%);b3=var10(top=0xfa:20.4%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ flags0 ^ 0x285c750cu;
    vm->flags = flags0 ^ 0x285c750cu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ 0x42c7f071u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_160_561db656c124(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=160, native=0x994cf, path=561db656c124c784, class=static_validated, events=1267 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=84 */
    /* branch path: 0x99521:jne:1;0x9952e:jne:1;0x9953c:jne:1;0x9956c:jne:0;0x995b7:je:1 */
    /* top actual targets: 172@0x9b68a:260,350@0xc1926:256,43@0x8173d:85,215@0xa4609:75,185@0x9d964:70,307@0xb8064:70,333@0xbd8af:64,18@0x7be9b:41 */
    /* operands: b0=var52(top=0x79:6.7%);b1=var12(top=0x2f:18.6%) */
    /* GPR+scratch branch profile: 0/652 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x559d4d7bu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 | 0x67f1fed6u)) & 0x256c03d7u)) | 0x72df8f7au)) & 0x5a1beb81u)))) - 0x4cf19f11u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_301_10c8c7c12593(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=301, native=0xb708d, path=10c8c7c12593d729, class=static_validated, events=1239 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=97 */
    /* branch path: 0xb7140:je:0;0xb71c5:je:0;0xb720a:je:0;0xb726f:je:1;0xb72a8:je:0;0xb73b9:je:1 */
    /* top actual targets: 160@0x994cf:457,352@0xc1ec4:282,198@0xa037e:244,257@0xadbfd:70,256@0xad849:65,173@0x9ba74:50,144@0x95887:39,108@0x8f24b:32 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var115(top=0xdf:19.9%);b4=var115(top=0x18:6.4%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ U16(vm->ip + 0x3u) - state0 & flags0 - 0x2c0febdfu;
    vm->flags = flags0 + 0x34c21ec8u + 0x4bcb296bu - 0x72148c24u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32(state0 & flags0)))) - 0x2c0febdfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_157_72c0228628af(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=157, native=0x98a9a, path=72c0228628af92a9, class=static_validated, events=1227 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=31 */
    /* branch path: 0x98ab4:je:1;0x98afb:je:1;0x98b42:je:1;0x98d6b:je:0;0x98db0:je:0;0x98e31:je:0;0x98e54:je:0 */
    /* top actual targets: 201@0xa0dca:261,28@0x7e390:72,340@0xbf435:71,154@0x97ce6:66,52@0x833c7:65,118@0x90c23:64,185@0x9d964:54,66@0x855ff:51 */
    /* operands: b0=var125(top=0x03:4.1%);b1=var228(top=0xd8:4.3%);b2=var17(top=0x68:20.5%);b3=enum2(0x00:12160,0x01:2533) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u);
    vm->flags = flags0 + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) & 0x60d377f3u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 ^ 0x2f4dfd84u)) + U16(vm->ip + 0x2u))) | 0x1f5cd114u)) - (mask32((mask32(flags0 ^ 0x3d2638afu)) & (mask32((mask32(state0 ^ 0x2f4dfd84u)) + U16(vm->ip + 0x2u))))))))) ^ 0x17d39c9fu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_026_433dde54934b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=26, native=0x7dbbb, path=433dde54934b5cb8, class=static_validated, events=1190 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=48 */
    /* branch path: 0x7dc03:je:1;0x7dc9b:je:0;0x7dd00:je:0;0x7dd5d:je:1;0x7ddeb:jne:1;0x7ddfc:jne:1;0x7de1d:je:0;0x7de2c:je:0;0x7de4d:je:0;0x7dea3:je:1 */
    /* top actual targets: 114@0x90319:302,43@0x8173d:106,258@0xadf2c:104,268@0xb0007:84,157@0x98a9a:81,347@0xc088d:49,28@0x7e390:47,18@0x7be9b:40 */
    /* operands: b0=var176(top=0x9e:4.5%);b1=var242(top=0xcf:3.6%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - 0x471264cau + flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x471264cau;
    vm->flags = flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x471264cau;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - 0x471264cau)) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(flags0 - (mask32(state0 ^ 0x5fcdb203u)))) ^ (mask32((mask32(state0 - 0x471264cau)) | 0x2a01f150u)))) | 0x7bdf07f3u)) + 0x104dd6dfu)) ^ 0x505df542u)) ^ 0xe71ae1du)) + (mask32((mask32(state0 -...#d83963d64636; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_198_280c64f01840(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=198, native=0xa037e, path=280c64f01840924f, class=static_validated, events=1182 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=87 */
    /* branch path: 0xa0391:je:0;0xa04a9:jne:1;0xa04b6:jne:1;0xa04c4:jne:1;0xa04f1:jne:0 */
    /* top actual targets: 18@0x7be9b:240,185@0x9d964:231,332@0xbd36d:60,90@0x8b334:58,157@0x98a9a:36,268@0xb0007:34,333@0xbd8af:33,66@0x855ff:33 */
    /* operands: b0=var217(top=0xe3:5.4%);b1=var220(top=0x54:5.3%) */
    /* GPR+scratch branch profile: 0/654 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u - U16(vm->ip + 0x0u) - state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u ^ 0x3fe99379u;
    vm->flags = flags0 + 0x15b2dfa5u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 + (mask32(flags0 - 0x5e173fc7u)))) - 0x3cd02127u)) + (mask32(flags0 + 0x15b2dfa5u)))))) ^ 0x3fe99379u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_256_1413958a75f2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=256, native=0xad849, path=1413958a75f2cf9a, class=static_validated, events=1176 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=120 */
    /* branch path: 0xad89b:jne:1;0xad8a7:jne:1;0xad8b4:jne:1;0xad8e1:jne:0;0xad973:je:0;0xad9da:je:0;0xada6f:je:0 */
    /* top actual targets: 340@0xbf435:295,157@0x98a9a:78,268@0xb0007:75,337@0xbec0e:73,273@0xb11ca:66,189@0x9e7af:51,114@0x90319:40,168@0x9aa83:38 */
    /* operands: b0=var155(top=0x3d:6.6%);b1=var156(top=0x27:6.6%) */
    /* GPR+scratch branch profile: 0/904 unknown branches (0.0%): */
    vm->state = state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au;
    vm->flags = flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au ^ state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32(state0 ^ 0x3e93f8dbu)) + 0x1734aabdu)) ^ (mask32((mask32(flags0 - (mask32(state0 ^ 0x3e93f8dbu)))) ^ 0x7a7f365au)))) | (mask32((mask32(flags0 - (mask32(state0 ^ 0x3e93f8dbu)))) ^ 0x7a7f365au)))) ^ 0x30de4dc1u)))) - 0x3817cdccu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_350_4fe792b99d9f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=350, native=0xc1926, path=4fe792b99d9f1417, class=static_validated, events=1176 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0xc1974:je:0 */
    /* top actual targets: 258@0xadf2c:257,281@0xb2db6:257,114@0x90319:80,215@0xa4609:67,185@0x9d964:66,220@0xa522e:64,320@0xbada5:64,183@0x9d495:62 */
    /* operands: b0=var143(top=0x12:10.9%);b1=var102(top=0xa6:10.6%);b2=var82(top=0xb7:10.6%);b3=var11(top=0x34:25.8%) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 + 0x5c4fb994u - 0x33be5a8bu ^ flags0 & state0 + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ state0 + 0x5c4fb994u - 0x33be5a8bu ^ flags0 & state0 + 0x5c4fb994u + 0x261f270fu;
    vm->flags = flags0 & state0 + 0x5c4fb994u + 0x261f270fu - 0x35f71c01u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((mask32((mask32(state0 + 0x5c4fb994u)) - 0x33be5a8bu)) ^ (mask32(flags0 & (mask32((mask32(state0 + 0x5c4fb994u)) + 0x261f270fu)))))) & (mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 + 0x5c4fb994u)) - 0x33be5a8bu)) ^ (mask32(flags0 & (mask32((mask32(state0 + 0x5c4fb994u)...#5ed56bcd5582; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_123_fdf798510785(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=123, native=0x91a59, path=fdf7985107851946, class=static_validated, events=1153 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=62 */
    /* branch path: 0x91a6a:je:0;0x91be2:jne:1;0x91c91:je:1;0x91cd7:je:0;0x91d11:je:1 */
    /* top actual targets: 18@0x7be9b:256,114@0x90319:125,199@0xa0631:90,347@0xc088d:88,66@0x855ff:77,337@0xbec0e:65,64@0x85059:63,215@0xa4609:59 */
    /* operands: b0=var226(top=0x56:3.4%);b1=var237(top=0x96:3.3%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + 0x3da77425u - U16(vm->ip + 0x0u) - state0 + 0x3da77425u ^ 0x1603b0a9u;
    vm->flags = flags0 & 0x6e640fcbu + 0x6b73b101u + 0x2261b554u + 0x4cd877bfu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32(state0 + 0x3da77425u)))) ^ 0x1603b0a9u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_346_7b6c336f65e8(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=346, native=0xc0535, path=7b6c336f65e8be9b, class=static_validated, events=1140 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=63 */
    /* branch path: 0xc056a:je:0;0xc05d7:je:1;0xc0628:je:0;0xc064e:je:0;0xc06a9:jne:1;0xc06ba:jne:1;0xc06dc:je:0;0xc06ec:je:0;0xc074c:je:1 */
    /* top actual targets: 114@0x90319:92,28@0x7e390:88,168@0x9aa83:84,66@0x855ff:83,157@0x98a9a:73,258@0xadf2c:65,64@0x85059:63,337@0xbec0e:62 */
    /* operands: b0=var232(top=0x22:3.1%);b1=var243(top=0x94:3.1%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    vm->flags = flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u - 0x3d02d701u - 0x727be02cu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ (mask32(flags0 ^ 0x45fbcef1u)))))) + 0x7f7eb061u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_287_85b8f11eb261(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=287, native=0xb45d2, path=85b8f11eb2613f99, class=static_validated, events=1102 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=52 */
    /* branch path: 0xb461d:je:0;0xb464a:je:0;0xb468d:je:0;0xb46fa:je:1;0xb47a7:jne:1;0xb47b8:jne:1;0xb47d9:je:0;0xb47e8:je:0;0xb4810:je:0 */
    /* top actual targets: 297@0xb64d7:309,28@0x7e390:288,258@0xadf2c:40,340@0xbf435:38,189@0x9e7af:32,307@0xb8064:32,338@0xbf128:29,66@0x855ff:29 */
    /* operands: b0=var120(top=0x86:4.7%);b1=var107(top=0xbe:5.0%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 & 0xa6ddb71u - flags0 - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u;
    vm->flags = flags0 - 0x67686890u + 0x609b810au - 0x1b65c97bu - 0x26941ac4u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 & 0xa6ddb71u)) - (mask32((mask32((mask32(flags0 - 0x67686890u)) + 0x609b810au)) + 0x6975e1b1u)))) - 0x4988e425u)) | 0x3ab14dd1u)))) ^ 0xa841ebdu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_157_fba811183513(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=157, native=0x98a9a, path=fba811183513b6e0, class=static_validated, events=1073 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=27 */
    /* branch path: 0x98ab4:je:0;0x98afb:je:1;0x98b42:je:1;0x98d6b:je:0;0x98db0:je:0;0x98e31:je:0;0x98e54:je:0 */
    /* top actual targets: 18@0x7be9b:257,346@0xc0535:83,179@0x9ca8d:68,66@0x855ff:67,49@0x82820:66,83@0x8947b:65,337@0xbec0e:60,189@0x9e7af:49 */
    /* operands: b0=var125(top=0x03:4.1%);b1=var228(top=0xd8:4.3%);b2=var17(top=0x68:20.5%);b3=enum2(0x00:12160,0x01:2533) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u);
    vm->flags = flags0 + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) & 0x60d377f3u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 ^ 0x2f4dfd84u)) + U16(vm->ip + 0x2u))) | 0x1f5cd114u)) - (mask32((mask32((mask32(flags0 + 0x3f0d8c6au)) ^ 0x3d2638afu)) & (mask32((mask32(state0 ^ 0x2f4dfd84u)) + U16(vm->ip + 0x2u))))))))) ^ 0x17d39c9fu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_273_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=273, native=0xb11ca, path=e3b0c44298fc1c14, class=static_validated, events=1072 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: - */
    /* top actual targets: 199@0xa0631:258,183@0x9d495:93,196@0x9fbcd:81,347@0xc088d:78,64@0x85059:68,307@0xb8064:67,105@0x8e6b4:64,70@0x8610e:64 */
    /* operands: b0=var112(top=0xab:12.1%);b1=var45(top=0xca:16.6%);b2=var136(top=0xce:12.1%);b3=var142(top=0x32:13.3%) */
    vm->state = state0 - flags0 + 0x4b959cd0u + flags0 & 0x908616eu + U16(vm->ip + 0x2u) - state0 - flags0 + 0x4b959cd0u + flags0 & 0x908616eu ^ flags0;
    vm->flags = flags0 + 0x1ad837ceu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32(state0 - flags0)) + 0x4b959cd0u)) + flags0)) & 0x908616eu)) + (mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32((mask32(state0 - flags0)) + 0x4b959cd0u)) + flags0)) & 0x908616eu)))) ^ flags0)))))) - 0x2e0be660u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_171_6a4f585c5930(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=171, native=0x9b4b3, path=6a4f585c5930d681, class=static_validated, events=1069 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0x9b594:je:1 */
    /* top actual targets: 196@0x9fbcd:351,322@0xbb3c9:256,337@0xbec0e:73,185@0x9d964:69,333@0xbd8af:29,43@0x8173d:28,340@0xbf435:23,66@0x855ff:22 */
    /* operands: b0=var30(top=0x42:16.1%);b1=enum2(0x00:1393,0x01:1140) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = 0x0u;
    vm->flags = 0x0u & 0x35efe488u + 0x44a4d3f8u;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_220_2b46c944c8ee(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=220, native=0xa522e, path=2b46c944c8ee5aef, class=static_validated, events=1037 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=76 */
    /* branch path: 0xa52aa:je:0;0xa5428:je:0;0xa54c3:je:0;0xa565d:je:1 */
    /* top actual targets: 144@0x95887:316,198@0xa037e:275,173@0x9ba74:120,256@0xad849:117,352@0xc1ec4:102,160@0x994cf:45,108@0x8f24b:42,257@0xadbfd:20 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var164(top=0x03:9.0%);b4=var199(top=0x7e:7.4%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32((mask32(state0 | flags0)) + 0x46462807u)) & 0x2332d827u)) - (mask32(flags0 - (mask32((mask32(state0 | flags0)) & 0x4297c9ddu)))))) + 0x6f8e6e16u)))) + 0x8f8037au)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_158_f28d957b796a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=158, native=0x99029, path=f28d957b796a4608, class=static_validated, events=1029 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=49 */
    /* branch path: 0x99071:je:0;0x990e7:jne:1 */
    /* top actual targets: 64@0x85059:354,307@0xb8064:94,114@0x90319:81,18@0x7be9b:61,340@0xbf435:53,258@0xadf2c:47,181@0x9d13f:42,189@0x9e7af:38 */
    /* operands: b0=0xe8;b1=0x01;b2=var224(top=0xf6:3.1%);b3=var226(top=0xd6:4.1%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 ^ 0x1fbfc3f3u ^ flags0 ^ 0x3c39b020u ^ 0x1f711c95u;
    vm->flags = flags0 ^ 0x3c39b020u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32(state0 ^ 0x1fbfc3f3u)) ^ (mask32((mask32(flags0 ^ 0x3c39b020u)) ^ 0x1f711c95u)))) | 0xfb6049eu)) ^ (mask32(flags0 ^ 0x3c39b020u)))))) ^ 0x3ffdb46cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_157_b6de45798a7e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=157, native=0x98a9a, path=b6de45798a7e1422, class=static_validated, events=975 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=22 */
    /* branch path: 0x98ab4:je:0;0x98afb:je:1;0x98b42:je:1;0x98d6b:je:1;0x98db0:je:1;0x98e31:je:0;0x98e54:je:1 */
    /* top actual targets: 189@0x9e7af:260,185@0x9d964:93,64@0x85059:86,319@0xba72f:69,260@0xae90b:65,199@0xa0631:55,340@0xbf435:48,26@0x7dbbb:33 */
    /* operands: b0=var125(top=0x03:4.1%);b1=var228(top=0xd8:4.3%);b2=var17(top=0x68:20.5%);b3=enum2(0x00:12160,0x01:2533) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u);
    vm->flags = flags0 + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) & 0x60d377f3u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 ^ 0x2f4dfd84u)) + U16(vm->ip + 0x2u))) | 0x1f5cd114u)) - (mask32((mask32((mask32(flags0 + 0x3f0d8c6au)) ^ 0x3d2638afu)) & (mask32((mask32(state0 ^ 0x2f4dfd84u)) + U16(vm->ip + 0x2u))))))))) ^ 0x17d39c9fu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_026_4676bd26495f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=26, native=0x7dbbb, path=4676bd26495ff772, class=static_validated, events=971 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=26 */
    /* branch path: 0x7dc03:je:0;0x7dc9b:je:1;0x7dd00:je:1;0x7dd5d:je:1;0x7ddeb:jne:1;0x7ddfc:jne:1;0x7de1d:je:0;0x7de2c:je:0;0x7de4d:je:0;0x7dea3:je:0 */
    /* top actual targets: 157@0x98a9a:280,168@0x9aa83:257,337@0xbec0e:108,66@0x855ff:67,340@0xbf435:35,185@0x9d964:32,199@0xa0631:30,64@0x85059:29 */
    /* operands: b0=var176(top=0x9e:4.5%);b1=var242(top=0xcf:3.6%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - 0x471264cau + flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x471264cau;
    vm->flags = flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x471264cau;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - 0x471264cau)) + (mask32((mask32((mask32((mask32((mask32(flags0 - (mask32(state0 ^ 0x5fcdb203u)))) & 0x637d285cu)) + 0x44b4a975u)) ^ (mask32((mask32(state0 - 0x471264cau)) | 0x2a01f150u)))) + (mask32((mask32(state0 - 0x471264cau)) + 0x1bfb4659u)))))))) ^ 0x6f23a80cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_268_0fdc3b6a8836(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=268, native=0xb0007, path=0fdc3b6a88369fd7, class=static_validated, events=957 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=33 */
    /* branch path: 0xb01e9:je:1;0xb0218:je:0;0xb026a:je:1;0xb029a:je:0;0xb02eb:je:0;0xb0307:je:1 */
    /* top actual targets: 49@0x82820:110,301@0xb708d:85,114@0x90319:81,243@0xaab6a:77,127@0x926c3:64,64@0x85059:53,189@0x9e7af:51,185@0x9d964:48 */
    /* operands: b0=var247(top=0x4a:3.3%);b1=var251(top=0x1c:6.8%);b2=var127(top=0x3e:4.0%);b3=var202(top=0x6c:7.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32((mask32(state0 | 0x71bd1bb1u)) + (mask32((mask32(U16(vm->ip + 0x0u) - (mask32(state0 | 0x71bd1bb1u)))) - flags0)))) & (mask32((mask32((mask32(flags0 + 0x33c0c75bu)) & 0x174c40efu)) - 0x554d11eeu)))) | (mask32((mask32((mask32(flags0 + 0x33c0c75bu)) & 0x174c40efu)) - 0x554d11eu...#2c2c9c427f9a; */
    vm->ip += 0x4;
    return r;
}

static const VMPathModelInfo k_vm_path_models[] = {
    { 307, 0x53af157f8d5a451eull, 6610u, "static_validated", "target=100.0%, ip=100.0%, ok:6610", path_entry_307_53af157f8d5a },
    { 258, 0x4be73f077fec7fc7ull, 6275u, "static_validated", "target=100.0%, ip=100.0%, ok:6275", path_entry_258_4be73f077fec },
    { 347, 0xcb333c548cc440f3ull, 5868u, "static_validated", "target=100.0%, ip=100.0%, ok:5868", path_entry_347_cb333c548cc4 },
    { 337, 0xc8492588f16e2cbbull, 5158u, "static_validated", "target=100.0%, ip=100.0%, ok:5158", path_entry_337_c8492588f16e },
    { 199, 0x454bb50b5a012434ull, 4835u, "static_validated", "target=100.0%, ip=100.0%, ok:4835", path_entry_199_454bb50b5a01 },
    { 18, 0xbdfe2dc323c2ac6dull, 4728u, "static_validated", "target=100.0%, ip=100.0%, ok:4728", path_entry_018_bdfe2dc323c2 },
    { 66, 0xf47171d373278492ull, 4708u, "static_validated", "target=100.0%, ip=100.0%, ok:4708", path_entry_066_f47171d37327 },
    { 215, 0x3c30635855970371ull, 4283u, "static_validated", "target=100.0%, ip=100.0%, ok:4283", path_entry_215_3c3063585597 },
    { 196, 0x44a20faf942e72a8ull, 4088u, "static_validated", "target=100.0%, ip=100.0%, ok:4088", path_entry_196_44a20faf942e },
    { 297, 0x6091fdb2f82dc3fbull, 4065u, "static_validated", "target=100.0%, ip=100.0%, ok:4065", path_entry_297_6091fdb2f82d },
    { 340, 0x02ae05a16ed89aaeull, 4010u, "static_validated", "target=100.0%, ip=100.0%, ok:4010", path_entry_340_02ae05a16ed8 },
    { 185, 0xfec4d0c2dccf8472ull, 3823u, "static_validated", "target=100.0%, ip=100.0%, ok:3823", path_entry_185_fec4d0c2dccf },
    { 189, 0x0474812a78a0c853ull, 3804u, "static_validated", "target=100.0%, ip=100.0%, ok:3804", path_entry_189_0474812a78a0 },
    { 333, 0x5dba04465e0f3b28ull, 3475u, "static_validated", "target=100.0%, ip=100.0%, ok:3475", path_entry_333_5dba04465e0f },
    { 64, 0x362f895a05304b24ull, 3435u, "static_validated", "target=100.0%, ip=100.0%, ok:3435", path_entry_064_362f895a0530 },
    { 258, 0x9273c2ebf377ada8ull, 3418u, "static_validated", "target=100.0%, ip=100.0%, ok:3418", path_entry_258_9273c2ebf377 },
    { 174, 0x1d005b75b3304463ull, 3318u, "static_validated", "target=100.0%, ip=100.0%, ok:3318", path_entry_174_1d005b75b330 },
    { 189, 0x8589bd83a0e8cea0ull, 3116u, "static_validated", "target=100.0%, ip=100.0%, ok:3116", path_entry_189_8589bd83a0e8 },
    { 184, 0xe4bc9d81d7bb0910ull, 3100u, "static_validated", "target=100.0%, ip=100.0%, ok:3100", path_entry_184_e4bc9d81d7bb },
    { 28, 0x9b3b818dc141b14full, 3051u, "static_validated", "target=100.0%, ip=100.0%, ok:3051", path_entry_028_9b3b818dc141 },
    { 28, 0xe0fd2755e33377c7ull, 2924u, "static_validated", "target=100.0%, ip=100.0%, ok:2924", path_entry_028_e0fd2755e333 },
    { 215, 0x93bcd881b4003839ull, 2838u, "static_validated", "target=100.0%, ip=100.0%, ok:2838", path_entry_215_93bcd881b400 },
    { 114, 0x6d97aa419b6e45b1ull, 2743u, "static_validated", "target=100.0%, ip=100.0%, ok:2743", path_entry_114_6d97aa419b6e },
    { 64, 0x4db1c9febad343e7ull, 2740u, "static_validated", "target=100.0%, ip=100.0%, ok:2740", path_entry_064_4db1c9febad3 },
    { 340, 0x2a0ce8aa7d3ecb4eull, 2661u, "static_validated", "target=100.0%, ip=100.0%, ok:2661", path_entry_340_2a0ce8aa7d3e },
    { 43, 0x6350e9318aa572ffull, 2585u, "static_validated", "target=100.0%, ip=100.0%, ok:2585", path_entry_043_6350e9318aa5 },
    { 43, 0xb3c385ba08ea674aull, 2558u, "static_validated", "target=100.0%, ip=100.0%, ok:2558", path_entry_043_b3c385ba08ea },
    { 172, 0x5946e91076802dafull, 2423u, "static_validated", "target=100.0%, ip=100.0%, ok:2423", path_entry_172_5946e9107680 },
    { 28, 0xa584853ff2ab10f8ull, 2373u, "static_validated", "target=100.0%, ip=100.0%, ok:2373", path_entry_028_a584853ff2ab },
    { 185, 0x095a648478af979eull, 2349u, "static_validated", "target=100.0%, ip=100.0%, ok:2349", path_entry_185_095a648478af },
    { 337, 0x70340f3100826d12ull, 2344u, "static_validated", "target=100.0%, ip=100.0%, ok:2344", path_entry_337_70340f310082 },
    { 168, 0x8eac2b09ff5fd809ull, 2276u, "static_validated", "target=100.0%, ip=100.0%, ok:2276", path_entry_168_8eac2b09ff5f },
    { 347, 0x98d7cb445c7961a8ull, 2260u, "static_validated", "target=100.0%, ip=100.0%, ok:2260", path_entry_347_98d7cb445c79 },
    { 172, 0x9f43d3ef44650cf6ull, 2107u, "static_validated", "target=100.0%, ip=100.0%, ok:2107", path_entry_172_9f43d3ef4465 },
    { 315, 0x856d4d06835c131aull, 2024u, "static_validated", "target=100.0%, ip=100.0%, ok:2024", path_entry_315_856d4d06835c },
    { 18, 0x30ead7f21142b97eull, 2010u, "static_validated", "target=100.0%, ip=100.0%, ok:2010", path_entry_018_30ead7f21142 },
    { 305, 0xe9d3813fa05892b0ull, 1981u, "static_validated", "target=100.0%, ip=100.0%, ok:1981", path_entry_305_e9d3813fa058 },
    { 49, 0x14dc36f04060df7aull, 1844u, "static_validated", "target=100.0%, ip=100.0%, ok:1844", path_entry_049_14dc36f04060 },
    { 203, 0x4292cfe2955518a7ull, 1771u, "static_validated", "target=100.0%, ip=100.0%, ok:1771", path_entry_203_4292cfe29555 },
    { 161, 0x0cf4855e16d07afbull, 1767u, "static_validated", "target=100.0%, ip=100.0%, ok:1767", path_entry_161_0cf4855e16d0 },
    { 297, 0x1438e06c94d04486ull, 1718u, "static_validated", "target=100.0%, ip=100.0%, ok:1718", path_entry_297_1438e06c94d0 },
    { 168, 0xc62eeb38897cc019ull, 1661u, "static_validated", "target=100.0%, ip=100.0%, ok:1661", path_entry_168_c62eeb38897c },
    { 66, 0x213fac87c7056b3cull, 1654u, "static_validated", "target=100.0%, ip=100.0%, ok:1654", path_entry_066_213fac87c705 },
    { 268, 0x0465db1cd6ce279eull, 1618u, "static_validated", "target=100.0%, ip=100.0%, ok:1618", path_entry_268_0465db1cd6ce },
    { 158, 0xcf24ba4d3b8dd524ull, 1603u, "static_validated", "target=100.0%, ip=100.0%, ok:1603", path_entry_158_cf24ba4d3b8d },
    { 176, 0xbbe0d482f93ad097ull, 1598u, "static_validated", "target=100.0%, ip=100.0%, ok:1598", path_entry_176_bbe0d482f93a },
    { 300, 0x833b04476f7a3399ull, 1560u, "static_validated", "target=100.0%, ip=100.0%, ok:1560", path_entry_300_833b04476f7a },
    { 157, 0x674a4baf101eb4d8ull, 1558u, "static_validated", "target=100.0%, ip=100.0%, ok:1558", path_entry_157_674a4baf101e },
    { 203, 0x1f7d4c17755b5949ull, 1512u, "static_validated", "target=100.0%, ip=100.0%, ok:1512", path_entry_203_1f7d4c17755b },
    { 287, 0xbae1d16b43d47f2dull, 1510u, "static_validated", "target=100.0%, ip=100.0%, ok:1510", path_entry_287_bae1d16b43d4 },
    { 173, 0x45fd438f0ec970b1ull, 1457u, "static_validated", "target=100.0%, ip=100.0%, ok:1457", path_entry_173_45fd438f0ec9 },
    { 332, 0x074498403375c74bull, 1429u, "static_validated", "target=100.0%, ip=100.0%, ok:1429", path_entry_332_074498403375 },
    { 114, 0x9062c46ada00e046ull, 1420u, "static_validated", "target=100.0%, ip=100.0%, ok:1420", path_entry_114_9062c46ada00 },
    { 114, 0x2d4f31d7d7d3afb9ull, 1398u, "static_validated", "target=100.0%, ip=100.0%, ok:1398", path_entry_114_2d4f31d7d7d3 },
    { 199, 0xa3fd491b93ac1355ull, 1364u, "static_validated", "target=100.0%, ip=100.0%, ok:1364", path_entry_199_a3fd491b93ac },
    { 108, 0x8877d7eba92eb84bull, 1363u, "static_validated", "target=100.0%, ip=100.0%, ok:1363", path_entry_108_8877d7eba92e },
    { 243, 0x72733eb95153883eull, 1341u, "static_validated", "target=100.0%, ip=100.0%, ok:1341", path_entry_243_72733eb95153 },
    { 33, 0x462a88e3c9a1365dull, 1295u, "static_validated", "target=100.0%, ip=100.0%, ok:1295", path_entry_033_462a88e3c9a1 },
    { 114, 0x102f846cb456dd47ull, 1293u, "static_validated", "target=100.0%, ip=100.0%, ok:1293", path_entry_114_102f846cb456 },
    { 257, 0x9572ab8966df7a4cull, 1285u, "static_validated", "target=100.0%, ip=100.0%, ok:1285", path_entry_257_9572ab8966df },
    { 20, 0xc81d765888be54d9ull, 1280u, "static_validated", "target=100.0%, ip=100.0%, ok:1280", path_entry_020_c81d765888be },
    { 315, 0x6ac4fb503bb44b35ull, 1274u, "static_validated", "target=100.0%, ip=100.0%, ok:1274", path_entry_315_6ac4fb503bb4 },
    { 160, 0x561db656c124c784ull, 1267u, "static_validated", "target=100.0%, ip=100.0%, ok:1267", path_entry_160_561db656c124 },
    { 301, 0x10c8c7c12593d729ull, 1239u, "static_validated", "target=100.0%, ip=100.0%, ok:1239", path_entry_301_10c8c7c12593 },
    { 157, 0x72c0228628af92a9ull, 1227u, "static_validated", "target=100.0%, ip=100.0%, ok:1227", path_entry_157_72c0228628af },
    { 26, 0x433dde54934b5cb8ull, 1190u, "static_validated", "target=100.0%, ip=100.0%, ok:1190", path_entry_026_433dde54934b },
    { 198, 0x280c64f01840924full, 1182u, "static_validated", "target=100.0%, ip=100.0%, ok:1182", path_entry_198_280c64f01840 },
    { 256, 0x1413958a75f2cf9aull, 1176u, "static_validated", "target=100.0%, ip=100.0%, ok:1176", path_entry_256_1413958a75f2 },
    { 350, 0x4fe792b99d9f1417ull, 1176u, "static_validated", "target=100.0%, ip=100.0%, ok:1176", path_entry_350_4fe792b99d9f },
    { 123, 0xfdf7985107851946ull, 1153u, "static_validated", "target=100.0%, ip=100.0%, ok:1153", path_entry_123_fdf798510785 },
    { 346, 0x7b6c336f65e8be9bull, 1140u, "static_validated", "target=100.0%, ip=100.0%, ok:1140", path_entry_346_7b6c336f65e8 },
    { 287, 0x85b8f11eb2613f99ull, 1102u, "static_validated", "target=100.0%, ip=100.0%, ok:1102", path_entry_287_85b8f11eb261 },
    { 157, 0xfba811183513b6e0ull, 1073u, "static_validated", "target=100.0%, ip=100.0%, ok:1073", path_entry_157_fba811183513 },
    { 273, 0xe3b0c44298fc1c14ull, 1072u, "static_validated", "target=100.0%, ip=100.0%, ok:1072", path_entry_273_e3b0c44298fc },
    { 171, 0x6a4f585c5930d681ull, 1069u, "static_validated", "target=100.0%, ip=100.0%, ok:1069", path_entry_171_6a4f585c5930 },
    { 220, 0x2b46c944c8ee5aefull, 1037u, "static_validated", "target=100.0%, ip=100.0%, ok:1037", path_entry_220_2b46c944c8ee },
    { 158, 0xf28d957b796a4608ull, 1029u, "static_validated", "target=100.0%, ip=100.0%, ok:1029", path_entry_158_f28d957b796a },
    { 157, 0xb6de45798a7e1422ull, 975u, "static_validated", "target=100.0%, ip=100.0%, ok:975", path_entry_157_b6de45798a7e },
    { 26, 0x4676bd26495ff772ull, 971u, "static_validated", "target=100.0%, ip=100.0%, ok:971", path_entry_026_4676bd26495f },
    { 268, 0x0fdc3b6a88369fd7ull, 957u, "static_validated", "target=100.0%, ip=100.0%, ok:957", path_entry_268_0fdc3b6a8836 },
};

static unsigned vm_path_model_count(void) {
    return (unsigned)(sizeof(k_vm_path_models) / sizeof(k_vm_path_models[0]));
}

static VMOpResult vm_call_path_handler(uint16_t entry, uint64_t path_key_value, VMState *vm) {
    switch (entry) {
    case 18:
        switch (path_key_value) {
        case 0x30ead7f21142b97eull: return path_entry_018_30ead7f21142(vm);
        case 0xbdfe2dc323c2ac6dull: return path_entry_018_bdfe2dc323c2(vm);
        default: break;
        }
        break;
    case 20:
        switch (path_key_value) {
        case 0xc81d765888be54d9ull: return path_entry_020_c81d765888be(vm);
        default: break;
        }
        break;
    case 26:
        switch (path_key_value) {
        case 0x433dde54934b5cb8ull: return path_entry_026_433dde54934b(vm);
        case 0x4676bd26495ff772ull: return path_entry_026_4676bd26495f(vm);
        default: break;
        }
        break;
    case 28:
        switch (path_key_value) {
        case 0x9b3b818dc141b14full: return path_entry_028_9b3b818dc141(vm);
        case 0xa584853ff2ab10f8ull: return path_entry_028_a584853ff2ab(vm);
        case 0xe0fd2755e33377c7ull: return path_entry_028_e0fd2755e333(vm);
        default: break;
        }
        break;
    case 33:
        switch (path_key_value) {
        case 0x462a88e3c9a1365dull: return path_entry_033_462a88e3c9a1(vm);
        default: break;
        }
        break;
    case 43:
        switch (path_key_value) {
        case 0x6350e9318aa572ffull: return path_entry_043_6350e9318aa5(vm);
        case 0xb3c385ba08ea674aull: return path_entry_043_b3c385ba08ea(vm);
        default: break;
        }
        break;
    case 49:
        switch (path_key_value) {
        case 0x14dc36f04060df7aull: return path_entry_049_14dc36f04060(vm);
        default: break;
        }
        break;
    case 64:
        switch (path_key_value) {
        case 0x362f895a05304b24ull: return path_entry_064_362f895a0530(vm);
        case 0x4db1c9febad343e7ull: return path_entry_064_4db1c9febad3(vm);
        default: break;
        }
        break;
    case 66:
        switch (path_key_value) {
        case 0x213fac87c7056b3cull: return path_entry_066_213fac87c705(vm);
        case 0xf47171d373278492ull: return path_entry_066_f47171d37327(vm);
        default: break;
        }
        break;
    case 108:
        switch (path_key_value) {
        case 0x8877d7eba92eb84bull: return path_entry_108_8877d7eba92e(vm);
        default: break;
        }
        break;
    case 114:
        switch (path_key_value) {
        case 0x102f846cb456dd47ull: return path_entry_114_102f846cb456(vm);
        case 0x2d4f31d7d7d3afb9ull: return path_entry_114_2d4f31d7d7d3(vm);
        case 0x6d97aa419b6e45b1ull: return path_entry_114_6d97aa419b6e(vm);
        case 0x9062c46ada00e046ull: return path_entry_114_9062c46ada00(vm);
        default: break;
        }
        break;
    case 123:
        switch (path_key_value) {
        case 0xfdf7985107851946ull: return path_entry_123_fdf798510785(vm);
        default: break;
        }
        break;
    case 157:
        switch (path_key_value) {
        case 0x674a4baf101eb4d8ull: return path_entry_157_674a4baf101e(vm);
        case 0x72c0228628af92a9ull: return path_entry_157_72c0228628af(vm);
        case 0xb6de45798a7e1422ull: return path_entry_157_b6de45798a7e(vm);
        case 0xfba811183513b6e0ull: return path_entry_157_fba811183513(vm);
        default: break;
        }
        break;
    case 158:
        switch (path_key_value) {
        case 0xcf24ba4d3b8dd524ull: return path_entry_158_cf24ba4d3b8d(vm);
        case 0xf28d957b796a4608ull: return path_entry_158_f28d957b796a(vm);
        default: break;
        }
        break;
    case 160:
        switch (path_key_value) {
        case 0x561db656c124c784ull: return path_entry_160_561db656c124(vm);
        default: break;
        }
        break;
    case 161:
        switch (path_key_value) {
        case 0x0cf4855e16d07afbull: return path_entry_161_0cf4855e16d0(vm);
        default: break;
        }
        break;
    case 168:
        switch (path_key_value) {
        case 0x8eac2b09ff5fd809ull: return path_entry_168_8eac2b09ff5f(vm);
        case 0xc62eeb38897cc019ull: return path_entry_168_c62eeb38897c(vm);
        default: break;
        }
        break;
    case 171:
        switch (path_key_value) {
        case 0x6a4f585c5930d681ull: return path_entry_171_6a4f585c5930(vm);
        default: break;
        }
        break;
    case 172:
        switch (path_key_value) {
        case 0x5946e91076802dafull: return path_entry_172_5946e9107680(vm);
        case 0x9f43d3ef44650cf6ull: return path_entry_172_9f43d3ef4465(vm);
        default: break;
        }
        break;
    case 173:
        switch (path_key_value) {
        case 0x45fd438f0ec970b1ull: return path_entry_173_45fd438f0ec9(vm);
        default: break;
        }
        break;
    case 174:
        switch (path_key_value) {
        case 0x1d005b75b3304463ull: return path_entry_174_1d005b75b330(vm);
        default: break;
        }
        break;
    case 176:
        switch (path_key_value) {
        case 0xbbe0d482f93ad097ull: return path_entry_176_bbe0d482f93a(vm);
        default: break;
        }
        break;
    case 184:
        switch (path_key_value) {
        case 0xe4bc9d81d7bb0910ull: return path_entry_184_e4bc9d81d7bb(vm);
        default: break;
        }
        break;
    case 185:
        switch (path_key_value) {
        case 0x095a648478af979eull: return path_entry_185_095a648478af(vm);
        case 0xfec4d0c2dccf8472ull: return path_entry_185_fec4d0c2dccf(vm);
        default: break;
        }
        break;
    case 189:
        switch (path_key_value) {
        case 0x0474812a78a0c853ull: return path_entry_189_0474812a78a0(vm);
        case 0x8589bd83a0e8cea0ull: return path_entry_189_8589bd83a0e8(vm);
        default: break;
        }
        break;
    case 196:
        switch (path_key_value) {
        case 0x44a20faf942e72a8ull: return path_entry_196_44a20faf942e(vm);
        default: break;
        }
        break;
    case 198:
        switch (path_key_value) {
        case 0x280c64f01840924full: return path_entry_198_280c64f01840(vm);
        default: break;
        }
        break;
    case 199:
        switch (path_key_value) {
        case 0x454bb50b5a012434ull: return path_entry_199_454bb50b5a01(vm);
        case 0xa3fd491b93ac1355ull: return path_entry_199_a3fd491b93ac(vm);
        default: break;
        }
        break;
    case 203:
        switch (path_key_value) {
        case 0x1f7d4c17755b5949ull: return path_entry_203_1f7d4c17755b(vm);
        case 0x4292cfe2955518a7ull: return path_entry_203_4292cfe29555(vm);
        default: break;
        }
        break;
    case 215:
        switch (path_key_value) {
        case 0x3c30635855970371ull: return path_entry_215_3c3063585597(vm);
        case 0x93bcd881b4003839ull: return path_entry_215_93bcd881b400(vm);
        default: break;
        }
        break;
    case 220:
        switch (path_key_value) {
        case 0x2b46c944c8ee5aefull: return path_entry_220_2b46c944c8ee(vm);
        default: break;
        }
        break;
    case 243:
        switch (path_key_value) {
        case 0x72733eb95153883eull: return path_entry_243_72733eb95153(vm);
        default: break;
        }
        break;
    case 256:
        switch (path_key_value) {
        case 0x1413958a75f2cf9aull: return path_entry_256_1413958a75f2(vm);
        default: break;
        }
        break;
    case 257:
        switch (path_key_value) {
        case 0x9572ab8966df7a4cull: return path_entry_257_9572ab8966df(vm);
        default: break;
        }
        break;
    case 258:
        switch (path_key_value) {
        case 0x4be73f077fec7fc7ull: return path_entry_258_4be73f077fec(vm);
        case 0x9273c2ebf377ada8ull: return path_entry_258_9273c2ebf377(vm);
        default: break;
        }
        break;
    case 268:
        switch (path_key_value) {
        case 0x0465db1cd6ce279eull: return path_entry_268_0465db1cd6ce(vm);
        case 0x0fdc3b6a88369fd7ull: return path_entry_268_0fdc3b6a8836(vm);
        default: break;
        }
        break;
    case 273:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_273_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 287:
        switch (path_key_value) {
        case 0x85b8f11eb2613f99ull: return path_entry_287_85b8f11eb261(vm);
        case 0xbae1d16b43d47f2dull: return path_entry_287_bae1d16b43d4(vm);
        default: break;
        }
        break;
    case 297:
        switch (path_key_value) {
        case 0x1438e06c94d04486ull: return path_entry_297_1438e06c94d0(vm);
        case 0x6091fdb2f82dc3fbull: return path_entry_297_6091fdb2f82d(vm);
        default: break;
        }
        break;
    case 300:
        switch (path_key_value) {
        case 0x833b04476f7a3399ull: return path_entry_300_833b04476f7a(vm);
        default: break;
        }
        break;
    case 301:
        switch (path_key_value) {
        case 0x10c8c7c12593d729ull: return path_entry_301_10c8c7c12593(vm);
        default: break;
        }
        break;
    case 305:
        switch (path_key_value) {
        case 0xe9d3813fa05892b0ull: return path_entry_305_e9d3813fa058(vm);
        default: break;
        }
        break;
    case 307:
        switch (path_key_value) {
        case 0x53af157f8d5a451eull: return path_entry_307_53af157f8d5a(vm);
        default: break;
        }
        break;
    case 315:
        switch (path_key_value) {
        case 0x6ac4fb503bb44b35ull: return path_entry_315_6ac4fb503bb4(vm);
        case 0x856d4d06835c131aull: return path_entry_315_856d4d06835c(vm);
        default: break;
        }
        break;
    case 332:
        switch (path_key_value) {
        case 0x074498403375c74bull: return path_entry_332_074498403375(vm);
        default: break;
        }
        break;
    case 333:
        switch (path_key_value) {
        case 0x5dba04465e0f3b28ull: return path_entry_333_5dba04465e0f(vm);
        default: break;
        }
        break;
    case 337:
        switch (path_key_value) {
        case 0x70340f3100826d12ull: return path_entry_337_70340f310082(vm);
        case 0xc8492588f16e2cbbull: return path_entry_337_c8492588f16e(vm);
        default: break;
        }
        break;
    case 340:
        switch (path_key_value) {
        case 0x02ae05a16ed89aaeull: return path_entry_340_02ae05a16ed8(vm);
        case 0x2a0ce8aa7d3ecb4eull: return path_entry_340_2a0ce8aa7d3e(vm);
        default: break;
        }
        break;
    case 346:
        switch (path_key_value) {
        case 0x7b6c336f65e8be9bull: return path_entry_346_7b6c336f65e8(vm);
        default: break;
        }
        break;
    case 347:
        switch (path_key_value) {
        case 0x98d7cb445c7961a8ull: return path_entry_347_98d7cb445c79(vm);
        case 0xcb333c548cc440f3ull: return path_entry_347_cb333c548cc4(vm);
        default: break;
        }
        break;
    case 350:
        switch (path_key_value) {
        case 0x4fe792b99d9f1417ull: return path_entry_350_4fe792b99d9f(vm);
        default: break;
        }
        break;
    default: break;
    }
    return (VMOpResult){ .next_entry = -1, .slot = 0xffffffffu };
}
