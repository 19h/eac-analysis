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

static VMOpResult path_entry_020_c49963356ba8(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=20, native=0x7c62b, path=c49963356ba8fe1d, class=static_validated, events=943 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=55 */
    /* branch path: 0x7c649:je:0;0x7c702:je:0;0x7c858:jne:1 */
    /* top actual targets: 114@0x90319:295,258@0xadf2c:125,64@0x85059:88,18@0x7be9b:46,185@0x9d964:41,337@0xbec0e:37,189@0x9e7af:36,347@0xc088d:31 */
    /* operands: b0=0xe8;b1=0x01;b2=var220(top=0xa5:4.7%);b3=var173(top=0x77:9.9%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x58f71b08u & 0x17188826u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 | 0x180e72f2u)))) - 0x36332ac8u)) - (mask32((mask32((mask32(flags0 ^ 0x58f71b08u)) & 0x17188826u)) & 0x1fa2014fu)))) | 0x38e67f26u)) - (mask32((mask32(flags0 ^ 0x58f71b08u)) & 0x17188826u)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_176_b375be1a950b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=176, native=0x9c10b, path=b375be1a950bc98f, class=static_validated, events=914 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=50 */
    /* branch path: 0x9c1c7:jne:1;0x9c215:je:0;0x9c25d:je:0 */
    /* top actual targets: 258@0xadf2c:105,28@0x7e390:99,189@0x9e7af:80,321@0xbb1dd:64,307@0xb8064:63,18@0x7be9b:57,337@0xbec0e:56,340@0xbf435:51 */
    /* operands: b0=0xe8;b1=0x01;b2=var235(top=0x82:3.5%);b3=var236(top=0x27:2.7%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 & flags0 & 0x2c46ace3u;
    vm->flags = flags0 - 0x14b22a15u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32(state0 & flags0)) & 0x2c46ace3u)) | (mask32(flags0 - 0x14b22a15u)))))) ^ 0x37839d72u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_161_0ca40c0e59db(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=161, native=0x9975a, path=0ca40c0e59dbe6e9, class=static_validated, events=899 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=60 */
    /* branch path: 0x99779:je:0;0x9988f:jne:1;0x9994f:je:1 */
    /* top actual targets: 337@0xbec0e:113,215@0xa4609:103,347@0xc088d:82,114@0x90319:66,28@0x7e390:63,189@0x9e7af:55,297@0xb64d7:49,185@0x9d964:45 */
    /* operands: b0=var125(top=0x0e:5.8%);b1=var51(top=0x70:5.8%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x327a10ceu + 0xb99ee49u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 | 0x69145e52u)))) + 0x4c0132b4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_192_d4c8fd95d9a6(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=192, native=0x9f00a, path=d4c8fd95d9a6d339, class=static_validated, events=894 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=113 */
    /* branch path: 0x9f0c6:je:0;0x9f163:je:0;0x9f2a8:jne:1;0x9f2ce:jne:1;0x9f2ea:jne:1;0x9f309:jne:0;0x9f512:je:1 */
    /* top actual targets: 198@0xa037e:288,257@0xadbfd:273,173@0x9ba74:97,256@0xad849:93,108@0x8f24b:89,160@0x994cf:24,352@0xc1ec4:16,144@0x95887:14 */
    /* operands: b0=var148(top=0x4e:11.2%);b1=var139(top=0xd7:10.9%);b2=0x3d;b3=0x01;b4=var23(top=0x00:90.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0 + flags0 + flags0 + state0 + flags0 ^ 0x5d641cd7u;
    vm->flags = flags0 + state0 + flags0 ^ 0x5d641cd7u;
    /* r.slot = (mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 + flags0)) + (mask32((mask32((mask32((mask32((mask32(flags0 + (mask32((mask32(state0 + flags0)) ^ 0x5d641cd7u)))) | 0x76a1e6e7u)) ^ 0x1ea5bfdcu)) & 0x4f4379b7u)) | 0x563159ceu)))) + (mask32((mask32((mask32((mask32((mask32(flags0 + (mask32((mask32(state0 + flags...#41021c953f7f; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_220_a21119ff7642(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=220, native=0xa522e, path=a21119ff764203f4, class=static_validated, events=889 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=52 */
    /* branch path: 0xa52aa:je:0;0xa5428:je:0;0xa54c3:je:1;0xa565d:je:1 */
    /* top actual targets: 108@0x8f24b:358,144@0x95887:281,160@0x994cf:84,352@0xc1ec4:49,173@0x9ba74:39,257@0xadbfd:37,198@0xa037e:26,256@0xad849:15 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var164(top=0x03:9.0%);b4=var199(top=0x7e:7.4%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32((mask32(state0 | flags0)) + 0x46462807u)) & 0x2332d827u)) - (mask32(flags0 - (mask32((mask32(state0 | flags0)) & 0x4297c9ddu)))))) + 0x6f8e6e16u)))) + 0x8f8037au)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_196_9917c35930d4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=196, native=0x9fbcd, path=9917c35930d48ca1, class=static_validated, events=865 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=28 */
    /* branch path: 0x9fd8f:je:0;0x9fdf5:je:1 */
    /* top actual targets: 189@0x9e7af:283,33@0x7f7c4:258,18@0x7be9b:68,258@0xadf2c:42,307@0xb8064:38,185@0x9d964:33,199@0xa0631:22,340@0xbf435:17 */
    /* operands: b0=var249(top=0xef:3.2%);b1=var250(top=0x6e:7.0%);b2=var62(top=0x0c:6.1%);b3=var110(top=0xf6:6.1%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | 0x52e5924au)) + (mask32((mask32((mask32(flags0 | 0x4083ed99u)) & (mask32((mask32(state0 | 0x52e5924au)) ^ 0x20047816u)))) & 0x7ca762c5u)))) + 0x37b5a024u)) + 0x2e12e35au)) ^ 0x44fb7fdbu)) + (mask32((mask32((mask32((mask32(...#4f1ee978b737; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_079_66d9f51d9c82(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=79, native=0x885b0, path=66d9f51d9c82b5fc, class=static_validated, events=863 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=84 */
    /* branch path: 0x8860f:je:0;0x886fb:je:0;0x887f1:je:1 */
    /* top actual targets: 257@0xadbfd:306,160@0x994cf:264,108@0x8f24b:59,144@0x95887:56,173@0x9ba74:52,198@0xa037e:46,256@0xad849:42,352@0xc1ec4:38 */
    /* operands: b0=var64(top=0x9e:15.9%);b1=var86(top=0x28:12.3%);b2=0x3d;b3=0x01;b4=0x00 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u;
    vm->flags = flags0 ^ 0xc7e744fu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x623ccce4u)))) & 0xd4da920u)) | (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x225dfa31u)))) - 0x6110d031u)) ^ 0x3fcb6e9au)) ^ (mask32(flags0 ^ 0xc7e744fu)))) + 0x60a9dba6u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_243_4dd686abf865(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=243, native=0xaab6a, path=4dd686abf8650c2a, class=static_validated, events=848 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=66 */
    /* branch path: 0xaac27:je:1;0xaad24:jne:1;0xaad35:jne:1;0xaad56:je:0;0xaad65:je:0 */
    /* top actual targets: 167@0x9a8d2:108,66@0x855ff:61,340@0xbf435:56,189@0x9e7af:54,18@0x7be9b:49,28@0x7e390:49,347@0xc088d:41,215@0xa4609:38 */
    /* operands: b0=var61(top=0x45:8.6%);b1=var69(top=0x9e:13.6%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 ^ 0x47b31677u;
    vm->flags = flags0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32(state0 ^ 0x47b31677u)) | (mask32((mask32(flags0 | (mask32(state0 | 0x5f60d018u)))) + state0)))) ^ 0x57df388cu)) & (mask32((mask32((mask32(flags0 | (mask32(state0 | 0x5f60d018u)))) + state0)) & (mask32((mask32((mask32(state0 ^ 0x47b31677u)) | (mask32((m...#5148afdaf710; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_173_a18349357a38(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=173, native=0x9ba74, path=a18349357a38cb5c, class=static_validated, events=788 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=28 */
    /* branch path: 0x9bb4a:jne:1;0x9bb57:jne:1;0x9bb65:jne:0;0x9bb7a:je:0;0x9bb91:jne:1;0x9bbb5:je:0;0x9bbfa:je:0 */
    /* top actual targets: 64@0x85059:308,196@0x9fbcd:252,114@0x90319:62,203@0xa1484:60,154@0x97ce6:14,121@0x91379:8,189@0x9e7af:8,345@0xc02e4:8 */
    /* operands: b0=var117(top=0xaf:7.6%);b1=var32(top=0x0b:13.4%) */
    /* GPR+scratch branch profile: 0/804 unknown branches (0.0%): */
    vm->state = state0 + 0x5eced92du ^ 0x456d7018u;
    vm->flags = flags0 - state0 + 0x5eced92du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 + 0x5eced92du)) ^ 0x456d7018u)) | 0xebbbd20u)) & (mask32((mask32(flags0 - (mask32((mask32(state0 + 0x5eced92du)) | 0x1f8bac4cu)))) & 0x74128b65u)))))) + 0x1f118051u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_003_d35e83d5fc67(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=3, native=0x78c77, path=d35e83d5fc67b2c6, class=static_validated, events=785 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=92 */
    /* branch path: 0x78c93:je:0;0x78cd4:je:0;0x79161:je:1 */
    /* top actual targets: 160@0x994cf:181,173@0x9ba74:140,352@0xc1ec4:112,257@0xadbfd:89,144@0x95887:85,256@0xad849:63,108@0x8f24b:59,198@0xa037e:56 */
    /* operands: b0=var20(top=0x19:19.7%);b1=var60(top=0x26:9.2%);b2=0x00;b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x1c03cc82u - flags0;
    vm->flags = flags0 ^ 0x1f2b12e0u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) - 0x1c03cc82u)) - flags0)) | 0x38c49877u)) - 0x742d9511u)) + 0x4ddaed7bu)))) + 0x4bc0d288u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_352_f355f88fd20c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=352, native=0xc1ec4, path=f355f88fd20c15a3, class=static_validated, events=781 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=73 */
    /* branch path: 0xc1f17:je:0;0xc1f5b:je:0;0xc1fba:jne:1;0xc1fc6:jne:1;0xc1fd3:jne:1;0xc2000:jne:0;0xc2027:je:0 */
    /* top actual targets: 258@0xadf2c:78,121@0x91379:68,208@0xa2361:59,196@0x9fbcd:52,340@0xbf435:42,307@0xb8064:36,347@0xc088d:31,172@0x9b68a:26 */
    /* operands: b0=var124(top=0x16:8.0%);b1=var55(top=0xdb:8.3%) */
    /* GPR+scratch branch profile: 0/912 unknown branches (0.0%): */
    vm->state = state0 & 0x31863366u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 & 0x31863366u)))) + 0x331dfc06u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_128_1cc26e6017ea(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=128, native=0x9299b, path=1cc26e6017eab5d3, class=static_validated, events=773 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=104 */
    /* branch path: 0x929dd:je:1;0x92a2e:je:1;0x92a94:je:0;0x92cb8:jne:0;0x92cdb:jne:1;0x92ceb:jne:1;0x92d07:jne:1;0x92d9f:je:1 */
    /* top actual targets: 215@0xa4609:256,268@0xb0007:256,64@0x85059:256,99@0x8c99a:2,172@0x9b68a:1,196@0x9fbcd:1,307@0xb8064:1 */
    /* operands: b0=enum4(0x62:840,0x3a:175,0x50:118,0x32:25);b1=var10(top=0x79:57.3%);b2=var17(top=0x04:24.0%);b3=var77(top=0xb7:22.4%);b4=var50(top=0x94:25.1%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 & flags0 & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u;
    vm->flags = flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x7ee52541u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x3u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32(flags0 & 0x7036ea56u)))) + 0x277b426cu)) - 0x57b04ce2u)) - (mask32(flags0 | 0x36a392ffu)))) | 0x38cd3aecu)) - (mask32(U16(vm->ip + 0x1u) + (mask32((mask32((mask32((mask32((mask32(state0 & (mask32(flags0 & 0x7036ea56u)...#a4fc43487c07; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_269_002580e3f415(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=269, native=0xb045b, path=002580e3f4159fc1, class=static_validated, events=763 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=101 */
    /* branch path: 0xb061d:je:1;0xb0723:je:1 */
    /* top actual targets: 160@0x994cf:294,108@0x8f24b:138,257@0xadbfd:71,256@0xad849:70,173@0x9ba74:55,198@0xa037e:54,352@0xc1ec4:48,144@0x95887:33 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var122(top=0xf7:15.2%);b4=var137(top=0xbe:17.0%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 & state0 & 0x6f7fff69u & flags0 & state0;
    vm->flags = flags0 & state0 + 0x46ecf942u + 0x6cc73334u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + (mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 & state0)))) & 0x6f7fff69u)) & (mask32(flags0 & state0)))) | (mask32((mask32(flags0 & state0)) ^ 0x4f60a287u)))))) + 0x4faa382u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_345_7e0925f660bb(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=345, native=0xc02e4, path=7e0925f660bbdbe8, class=static_validated, events=751 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=113 */
    /* branch path: 0xc0300:je:0;0xc037b:je:0;0xc03a7:je:1 */
    /* top actual targets: 52@0x833c7:270,192@0x9f00a:65,114@0x90319:64,196@0x9fbcd:38,172@0x9b68a:28,168@0x9aa83:24,340@0xbf435:20,64@0x85059:19 */
    /* operands: b0=var164(top=0x69:13.6%);b1=var150(top=0x3f:13.6%);b2=var165(top=0x11:13.6%);b3=var164(top=0x1c:13.6%);b4=var162(top=0xc4:13.6%);b5=var157(top=0x34:13.6%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 + U32(vm->ip + 0x2u) ^ state0 + flags0 + U16(vm->ip + 0x0u) + state0 + U32(vm->ip + 0x2u) ^ state0 + flags0;
    vm->flags = flags0 & 0xe71dcd4u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + (mask32(state0 + (mask32((mask32(U32(vm->ip + 0x2u) ^ state0)) + flags0)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_033_7af422a11315(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=33, native=0x7f7c4, path=7af422a11315895a, class=static_validated, events=738 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=46 */
    /* branch path: 0x7f7fd:je:0;0x7f845:je:0;0x7f916:jne:1;0x7f927:jne:1;0x7f94a:je:0;0x7f95a:je:0;0x7f983:je:0;0x7f9b7:je:0;0x7f9e8:je:0 */
    /* top actual targets: 258@0xadf2c:94,66@0x855ff:90,340@0xbf435:43,167@0x9a8d2:41,157@0x98a9a:35,185@0x9d964:35,268@0xb0007:34,64@0x85059:33 */
    /* operands: b0=0xe8;b1=0x01;b2=var122(top=0x34:5.8%);b3=var129(top=0xc8:6.6%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ state0 & 0x457915dcu & 0x16110d0au;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 | 0x15422921u)))) + 0x2d0713f3u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_121_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=121, native=0x91379, path=e3b0c44298fc1c14, class=static_validated, events=737 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: - */
    /* top actual targets: 307@0xb8064:271,91@0x8b6de:68,168@0x9aa83:65,180@0x9cf32:55,183@0x9d495:48,114@0x90319:32,258@0xadf2c:18,28@0x7e390:16 */
    /* operands: b0=var124(top=0x7b:11.8%);b1=var131(top=0x93:11.6%);b2=var140(top=0x37:11.7%);b3=var145(top=0x2f:11.6%) */
    vm->state = state0 ^ flags0 + 0x3154e54au - 0x288d43bau + U16(vm->ip + 0x0u) + state0 ^ flags0 + 0x3154e54au - 0x288d43bau - flags0;
    vm->flags = flags0 ^ 0x1753e9d0u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((mask32(state0 ^ (mask32(flags0 + 0x3154e54au)))) - 0x288d43bau)) + (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32(state0 ^ (mask32(flags0 + 0x3154e54au)))) - 0x288d43bau)))) - flags0)))))) + 0x7609a96cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_167_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=167, native=0x9a8d2, path=e3b0c44298fc1c14, class=static_validated, events=726 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: - */
    /* top actual targets: 351@0xc1d48:432,283@0xb3612:206,295@0xb60e0:88 */
    /* operands: b0=0xe8;b1=0x01;b2=0x3d;b3=0x01;b4=var87(top=0xf5:13.7%);b5=var97(top=0x2d:11.6%) */
    vm->state = state0 - U16(vm->ip + 0x4u) ^ state0 ^ 0x5f92615u;
    vm->flags = flags0 - 0x69d75971u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x4u) ^ state0)) ^ 0x5f92615u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_260_beb0ded0c6bd(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=260, native=0xae90b, path=beb0ded0c6bd2168, class=static_validated, events=723 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=63 */
    /* branch path: 0xae92e:je:1;0xaea48:je:1;0xaea75:je:0 */
    /* top actual targets: 340@0xbf435:256,28@0x7e390:65,172@0x9b68a:64,258@0xadf2c:64,292@0xb540f:64,91@0x8b6de:40,183@0x9d495:37,180@0x9cf32:28 */
    /* operands: b0=var69(top=0x38:9.9%);b1=var13(top=0x0f:27.6%);b2=var108(top=0x38:9.7%);b3=var54(top=0x00:20.7%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 + 0x581f6275u ^ flags0 - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u;
    vm->flags = flags0 - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 + 0x581f6275u)) ^ (mask32(flags0 & 0x2efb7283u)))) | 0x7ba7e961u)) + flags0)) | (mask32(flags0 & 0x5af0e1dbu)))) | 0x17270855u)) | flags0)) | flags0)) & (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mas...#b58b3f0e6056; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_254_654b5ded1981(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=254, native=0xad32c, path=654b5ded1981085b, class=static_validated, events=712 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=119 */
    /* branch path: 0xad53c:je:0;0xad598:je:1 */
    /* top actual targets: 66@0x855ff:261,297@0xb64d7:81,28@0x7e390:64,347@0xc088d:64,49@0x82820:64,183@0x9d495:49,180@0x9cf32:33,91@0x8b6de:23 */
    /* operands: b0=var150(top=0x74:15.5%);b1=var153(top=0x9c:13.1%);b2=var24(top=0x42:14.4%);b3=var12(top=0x47:31.7%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 + flags0 - U16(vm->ip + 0x0u) ^ state0 + flags0;
    vm->flags = flags0 - 0x35a18ac8u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) - 0x228a41a2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_268_e08fa0239f68(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=268, native=0xb0007, path=e08fa0239f68c868, class=static_validated, events=702 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=24 */
    /* branch path: 0xb01e9:je:0;0xb0218:je:1;0xb026a:je:1;0xb029a:je:0;0xb02eb:je:0;0xb0307:je:1 */
    /* top actual targets: 28@0x7e390:131,215@0xa4609:105,332@0xbd36d:48,154@0x97ce6:43,337@0xbec0e:41,307@0xb8064:38,305@0xb78b0:31,340@0xbf435:31 */
    /* operands: b0=var247(top=0x4a:3.3%);b1=var251(top=0x1c:6.8%);b2=var127(top=0x3e:4.0%);b3=var202(top=0x6c:7.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32((mask32(state0 | 0x71bd1bb1u)) + (mask32((mask32(U16(vm->ip + 0x0u) - (mask32(state0 | 0x71bd1bb1u)))) - flags0)))) & (mask32(flags0 + 0x33c0c75bu)))) | (mask32(flags0 + 0x33c0c75bu)))))) + 0x73efcc77u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_123_5321b7c3bbe1(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=123, native=0x91a59, path=5321b7c3bbe1e7b9, class=static_validated, events=699 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=29 */
    /* branch path: 0x91a6a:je:0;0x91be2:jne:1;0x91c91:je:0;0x91cd7:je:0;0x91d11:je:0 */
    /* top actual targets: 50@0x82e76:209,337@0xbec0e:139,64@0x85059:50,189@0x9e7af:49,340@0xbf435:35,114@0x90319:28,199@0xa0631:28,95@0x8c41c:25 */
    /* operands: b0=var226(top=0x56:3.4%);b1=var237(top=0x96:3.3%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + 0x3da77425u - U16(vm->ip + 0x0u) - state0 + 0x3da77425u ^ 0x1603b0a9u;
    vm->flags = flags0 & 0x6e640fcbu + 0x6b73b101u + 0x2261b554u + 0x4cd877bfu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32(state0 + 0x3da77425u)))) ^ 0x1603b0a9u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_160_c44c0307f0fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=160, native=0x994cf, path=c44c0307f0fc4574, class=static_validated, events=676 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=32 */
    /* branch path: 0x99521:jne:1;0x9952e:jne:1;0x9953c:jne:1;0x9956c:jne:0;0x995b7:je:0 */
    /* top actual targets: 185@0x9d964:258,307@0xb8064:68,291@0xb4edd:65,168@0x9aa83:25,28@0x7e390:22,43@0x8173d:22,157@0x98a9a:21,114@0x90319:20 */
    /* operands: b0=var52(top=0x79:6.7%);b1=var12(top=0x2f:18.6%) */
    /* GPR+scratch branch profile: 0/652 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x559d4d7bu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 | 0x67f1fed6u)) & 0x256c03d7u)) | 0x72df8f7au)) & 0x5a1beb81u)))) - 0x4cf19f11u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_320_5f045809296d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=320, native=0xbada5, path=5f045809296d5b3d, class=static_validated, events=654 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=114 */
    /* branch path: 0xbae90:jne:1;0xbae9e:jne:1;0xbaead:jne:1;0xbaebb:jne:0;0xbb012:je:1 */
    /* top actual targets: 256@0xad849:116,108@0x8f24b:111,160@0x994cf:110,198@0xa037e:107,173@0x9ba74:75,352@0xc1ec4:58,257@0xadbfd:43,144@0x95887:34 */
    /* operands: b0=var24(top=0x00:83.6%);b1=0x3d;b2=0x01;b3=var107(top=0xac:9.1%);b4=var106(top=0x0c:6.1%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 & flags0 - flags0 - 0x7e143884u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32(state0 & flags0)) - flags0)) - 0x7e143884u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_253_1b329325bc7a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=253, native=0xacfb1, path=1b329325bc7a0ef6, class=static_validated, events=648 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=121 */
    /* branch path: 0xacff9:je:0;0xad075:je:0 */
    /* top actual targets: 297@0xb64d7:266,28@0x7e390:38,337@0xbec0e:31,199@0xa0631:29,114@0x90319:28,237@0xa8e1f:19,340@0xbf435:19,66@0x855ff:16 */
    /* operands: b0=var26(top=0x86:22.2%);b1=var11(top=0xc2:20.1%);b2=var177(top=0x34:17.8%);b3=var157(top=0xa1:13.2%);b4=var160(top=0x04:13.3%);b5=var155(top=0x08:13.9%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + 0x7c5d4802u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_322_fd79160f5b9f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=322, native=0xbb3c9, path=fd79160f5b9f1866, class=static_validated, events=646 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=122 */
    /* branch path: 0xbb4c1:je:0 */
    /* top actual targets: 157@0x98a9a:256,337@0xbec0e:130,91@0x8b6de:66,3@0x78c77:65,183@0x9d495:42,347@0xc088d:27,28@0x7e390:14,180@0x9cf32:9 */
    /* operands: b0=var132(top=0x13:14.0%);b1=var123(top=0x00:19.2%);b2=var119(top=0x57:13.9%);b3=var104(top=0x96:14.7%) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 + U16(vm->ip + 0x0u) ^ flags0;
    vm->flags = flags0 - 0x58d38f71u + 0xdc60e0au ^ 0xb71b18du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32(state0 + (mask32(U16(vm->ip + 0x0u) ^ flags0)))) | 0x2d680d90u)) + 0x69cbe1a0u)))) + 0x7ba65dc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_052_a5bdf2611636(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=52, native=0x833c7, path=a5bdf261163619f8, class=static_validated, events=643 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0x834bc:jne:1;0x834ca:jne:1;0x834d9:jne:1;0x834ee:jne:0;0x835bd:je:0 */
    /* top actual targets: 75@0x873fc:286,316@0xb987b:265,210@0xa2da3:41,145@0x95b5c:26,334@0xbdd18:17,246@0xab427:8 */
    /* operands: b0=var48(top=0x82:23.2%);b1=var45(top=0xb0:23.9%);b2=var40(top=0x47:23.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + U16(vm->ip + 0x0u) + state0 ^ 0x7823b2dau;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + state0)) ^ 0x7823b2dau)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_165_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=165, native=0x9a24c, path=e3b0c44298fc1c14, class=static_validated, events=632 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: - */
    /* top actual targets: 114@0x90319:271,333@0xbd8af:94,268@0xb0007:31,340@0xbf435:31,203@0xa1484:29,18@0x7be9b:27,64@0x85059:20,157@0x98a9a:16 */
    /* operands: b0=var30(top=0x72:19.5%);b1=enum2(0x00:1070,0x01:755) */
    vm->state = 0x0u;
    vm->flags = 0x0u;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_346_66817cf32267(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=346, native=0xc0535, path=66817cf32267dc25, class=static_validated, events=613 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=49 */
    /* branch path: 0xc056a:je:0;0xc05d7:je:0;0xc0628:je:0;0xc064e:je:0;0xc06a9:jne:1;0xc06ba:jne:1;0xc06dc:je:0;0xc06ec:je:0;0xc074c:je:0 */
    /* top actual targets: 28@0x7e390:74,157@0x98a9a:63,340@0xbf435:44,185@0x9d964:41,167@0x9a8d2:32,172@0x9b68a:32,203@0xa1484:31,64@0x85059:30 */
    /* operands: b0=var232(top=0x22:3.1%);b1=var243(top=0x94:3.1%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    vm->flags = flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u - 0x3d02d701u - 0x727be02cu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ (mask32((mask32((mask32(flags0 ^ 0x3f746ab3u)) ^ 0x3f5501a6u)) ^ 0x45fbcef1u)))))) + 0x7f7eb061u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_066_4690fe4f5b08(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=66, native=0x855ff, path=4690fe4f5b0885c4, class=static_validated, events=602 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=10 */
    /* branch path: 0x85621:je:1;0x8566a:je:1;0x856f1:je:0;0x858d5:je:0 */
    /* top actual targets: 64@0x85059:52,337@0xbec0e:50,123@0x91a59:45,340@0xbf435:43,189@0x9e7af:42,158@0x99029:37,43@0x8173d:27,176@0x9c10b:25 */
    /* operands: b0=var248(top=0x65:2.5%);b1=var253(top=0xa8:2.1%);b2=var114(top=0x3a:8.4%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ state0 & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - flags0 - 0x50170614u;
    vm->flags = flags0 - 0x50170614u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 & 0x2f6cb1f6u)) - (mask32(U8(vm->ip + 0x2u) ^ (mask32(state0 & 0x2f6cb1f6u)))))) ^ 0x745ff1d2u)) & 0x13de2cddu)) - (mask32(flags0 ^ 0x42a6ffd6u)))))) - 0x3cd18153u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_026_a8425a0f38d9(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=26, native=0x7dbbb, path=a8425a0f38d9fe8d, class=static_validated, events=561 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=43 */
    /* branch path: 0x7dc03:je:0;0x7dc9b:je:0;0x7dd00:je:0;0x7dd5d:je:1;0x7ddeb:jne:1;0x7ddfc:jne:1;0x7de1d:je:0;0x7de2c:je:0;0x7de4d:je:0;0x7dea3:je:1 */
    /* top actual targets: 28@0x7e390:272,168@0x9aa83:32,340@0xbf435:32,258@0xadf2c:30,268@0xb0007:26,43@0x8173d:20,199@0xa0631:19,172@0x9b68a:18 */
    /* operands: b0=var176(top=0x9e:4.5%);b1=var242(top=0xcf:3.6%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - 0x471264cau + flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x471264cau;
    vm->flags = flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x471264cau;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - 0x471264cau)) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(flags0 - (mask32(state0 ^ 0x5fcdb203u)))) & 0x637d285cu)) + 0x44b4a975u)) ^ (mask32((mask32(state0 - 0x471264cau)) | 0x2a01f150u)))) | 0x7bdf07f3u)) + 0x104dd6dfu)) ^ 0x505dfu...#43f92fd4e4c8; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_154_2bda520e96f2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=154, native=0x97ce6, path=2bda520e96f2c598, class=static_validated, events=542 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=81 */
    /* branch path: 0x97d15:je:1;0x97d58:je:1 */
    /* top actual targets: 196@0x9fbcd:78,49@0x82820:67,66@0x855ff:66,320@0xbada5:64,37@0x80685:64,91@0x8b6de:39,180@0x9cf32:31,183@0x9d495:23 */
    /* operands: b0=var156(top=0xb3:7.0%);b1=var157(top=0x2d:5.8%);b2=var145(top=0x8f:5.7%);b3=var133(top=0x00:11.5%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 - U16(vm->ip + 0x2u) ^ state0 - flags0 + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu;
    vm->flags = flags0 + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 - (mask32(U16(vm->ip + 0x2u) ^ state0)))) - (mask32(flags0 | 0x7ed018fbu)))) + (mask32((mask32(flags0 | 0x7ed018fbu)) ^ 0x18426e67u)))))) - 0x6535d747u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_351_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=351, native=0xc1d48, path=e3b0c44298fc1c14, class=static_validated, events=542 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: - */
    /* top actual targets: 297@0xb64d7:256,189@0x9e7af:28,258@0xadf2c:28,172@0x9b68a:26,28@0x7e390:21,121@0x91379:17,254@0xad32c:17,333@0xbd8af:16 */
    /* operands: b0=0xe8;b1=0x01;b2=var81(top=0x1b:13.9%);b3=var76(top=0x22:13.9%);b4=0x10 */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + state0)) - 0x7b3a2d18u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_260_d8192970ef3a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=260, native=0xae90b, path=d8192970ef3a82a2, class=static_validated, events=541 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=64 */
    /* branch path: 0xae92e:je:0;0xaea48:je:0;0xaea75:je:0 */
    /* top actual targets: 189@0x9e7af:266,297@0xb64d7:66,301@0xb708d:65,180@0x9cf32:29,183@0x9d495:29,215@0xa4609:15,64@0x85059:15,91@0x8b6de:14 */
    /* operands: b0=var69(top=0x38:9.9%);b1=var13(top=0x0f:27.6%);b2=var108(top=0x38:9.7%);b3=var54(top=0x00:20.7%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 + 0x581f6275u ^ flags0 - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u;
    vm->flags = flags0 - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 + 0x581f6275u)) ^ (mask32((mask32((mask32(flags0 - 0x705f9ad2u)) + 0x760922e2u)) & 0x2efb7283u)))) | 0x7ba7e961u)) + (mask32((mask32(flags0 - 0x705f9ad2u)) + 0x760922e2u)))) | (mask32((mask32((mask32(flags0 ...#8a08f6a34a8d; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_257_4da4fe40de22(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=257, native=0xadbfd, path=4da4fe40de22a206, class=static_validated, events=531 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=26 */
    /* branch path: 0xadc1e:je:0;0xadcc0:jne:1;0xadccc:jne:1;0xadcd9:jne:1;0xadd06:jne:0;0xadd6a:je:0;0xadda4:je:1 */
    /* top actual targets: 308@0xb837c:81,347@0xc088d:74,337@0xbec0e:33,189@0x9e7af:29,203@0xa1484:26,66@0x855ff:24,345@0xc02e4:14,196@0x9fbcd:11 */
    /* operands: b0=var32(top=0xe7:10.9%);b1=var43(top=0xb5:9.7%) */
    /* GPR+scratch branch profile: 0/918 unknown branches (0.0%): */
    vm->state = state0 - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32(state0 - 0x509f61c9u)) + 0x1b9def5u)) - 0x7d4ca123u)) | 0x1d2af87u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_099_4ebfcdebd7bc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=99, native=0x8c99a, path=4ebfcdebd7bce70e, class=static_validated, events=530 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=127 */
    /* branch path: 0x8ca79:jne:0;0x8ca94:jne:1;0x8cb4e:je:1 */
    /* top actual targets: 198@0xa037e:383,173@0x9ba74:129,256@0xad849:6,160@0x994cf:4,108@0x8f24b:3,144@0x95887:2,257@0xadbfd:2,352@0xc1ec4:1 */
    /* operands: b0=0x00;b1=var24(top=0x09:36.8%);b2=var20(top=0x7a:36.8%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x1u) ^ state0 - 0x48503105u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) ^ state0)) - 0x48503105u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_123_d2e29b026964(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=123, native=0x91a59, path=d2e29b026964fcf1, class=static_validated, events=527 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=19 */
    /* branch path: 0x91a6a:je:0;0x91be2:jne:1;0x91c91:je:0;0x91cd7:je:0;0x91d11:je:1 */
    /* top actual targets: 66@0x855ff:83,185@0x9d964:73,258@0xadf2c:60,337@0xbec0e:54,50@0x82e76:53,114@0x90319:31,199@0xa0631:29,340@0xbf435:26 */
    /* operands: b0=var226(top=0x56:3.4%);b1=var237(top=0x96:3.3%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + 0x3da77425u - U16(vm->ip + 0x0u) - state0 + 0x3da77425u ^ 0x1603b0a9u;
    vm->flags = flags0 & 0x6e640fcbu + 0x6b73b101u + 0x2261b554u + 0x4cd877bfu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32(state0 + 0x3da77425u)))) ^ 0x1603b0a9u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_030_2208c3d00e21(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=2208c3d00e21a891, class=static_validated, events=522 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=71 */
    /* branch path: 0x7e868:je:0;0x7e896:je:0;0x7e8b1:je:0;0x7e913:je:0;0x7e92e:je:1;0x7eb45:je:1 */
    /* top actual targets: 203@0xa1484:163,192@0x9f00a:152,157@0x98a9a:42,183@0x9d495:29,337@0xbec0e:22,91@0x8b6de:22,180@0x9cf32:15,114@0x90319:9 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | flags0)) + 0x64fd160cu)))) + 0x5903fc84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_340_bb7a9a08ec38(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=340, native=0xbf435, path=bb7a9a08ec3867b1, class=static_validated, events=514 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=3 */
    /* branch path: 0xbf457:je:1;0xbf48f:je:1;0xbf4d7:je:0 */
    /* top actual targets: 307@0xb8064:54,28@0x7e390:53,287@0xb45d2:36,345@0xc02e4:33,333@0xbd8af:24,203@0xa1484:20,18@0x7be9b:19,157@0x98a9a:17 */
    /* operands: b0=var221(top=0x4c:4.0%);b1=var255(top=0x16:2.8%);b2=var17(top=0xb3:15.9%);b3=enum2(0x00:21582,0x01:4530) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 - 0x2b2e5a26u ^ 0x7535dd25u;
    vm->flags = flags0 & 0x7036ca68u - 0x2caa6796u ^ 0x4ea9d032u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32(state0 - 0x2b2e5a26u)) ^ 0x7535dd25u)) | U16(vm->ip + 0x2u))))) + 0x9097995u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_300_745a7b95e008(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=300, native=0xb6c36, path=745a7b95e00833b1, class=static_validated, events=510 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=8 */
    /* branch path: 0xb6c57:je:0;0xb6c87:je:0;0xb6d00:je:0;0xb6f5c:je:0 */
    /* top actual targets: 258@0xadf2c:239,64@0x85059:73,301@0xb708d:59,91@0x8b6de:34,183@0x9d495:31,220@0xa522e:15,269@0xb045b:12,180@0x9cf32:9 */
    /* operands: b0=var134(top=0x12:10.9%);b1=var135(top=0x85:10.1%);b2=var96(top=0x60:10.2%);b3=var122(top=0x42:10.0%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + state0 & 0x2b7e7713u & 0x515f6307u + flags0 & 0x742354du + 0x2ff05a2bu;
    vm->flags = flags0 & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32((mask32(state0 & 0x2b7e7713u)) & 0x515f6307u)) - (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32(state0 & 0x2b7e7713u)) & 0x515f6307u)))) + (mask32((mask32(flags0 & 0x742354du)) + 0x2ff05a2bu)))))) | (mask32((mask32((mask32(flags0 & 0x742354du)) + 0x2ff05a2bu)) & 0x1011ba33u)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_037_92113252d882(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=37, native=0x80685, path=92113252d88219f9, class=static_validated, events=492 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=54 */
    /* branch path: 0x806c4:je:0;0x8075e:je:1;0x807c6:je:0;0x808c1:jne:1;0x808d1:jne:1;0x808ef:jne:1;0x8090d:jne:0;0x8099e:je:0;0x809da:je:0;0x80ac9:je:1 */
    /* top actual targets: 256@0xad849:291,160@0x994cf:78,144@0x95887:38,173@0x9ba74:25,352@0xc1ec4:22,108@0x8f24b:19,257@0xadbfd:15,198@0xa037e:4 */
    /* operands: b0=var141(top=0xc1:12.7%);b1=var150(top=0x3e:12.6%);b2=var27(top=0x00:78.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x504fc3du - 0x4eca0e49u;
    vm->flags = flags0 & 0x714eea75u + 0x53097984u ^ state0 - flags0 + 0x504fc3du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - (mask32(flags0 + 0x504fc3du)))) - 0x4eca0e49u)))) ^ 0x384e1c86u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_198_505403243bd3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=198, native=0xa037e, path=505403243bd35b86, class=static_validated, events=484 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=14 */
    /* branch path: 0xa0391:je:0;0xa04a9:jne:0;0xa04b6:jne:1;0xa04c4:jne:1;0xa04f1:jne:1 */
    /* top actual targets: 215@0xa4609:225,337@0xbec0e:225,43@0x8173d:13,258@0xadf2c:12,114@0x90319:3,121@0x91379:1,157@0x98a9a:1,171@0x9b4b3:1 */
    /* operands: b0=var217(top=0xe3:5.4%);b1=var220(top=0x54:5.3%) */
    /* GPR+scratch branch profile: 0/654 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u - U16(vm->ip + 0x0u) - state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u ^ 0x3fe99379u;
    vm->flags = flags0 + 0x15b2dfa5u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 + (mask32(flags0 - 0x5e173fc7u)))) - 0x3cd02127u)) + (mask32(flags0 + 0x15b2dfa5u)))))) ^ 0x3fe99379u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_144_4d9c1fd43009(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=144, native=0x95887, path=4d9c1fd4300908d8, class=static_validated, events=480 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=46 */
    /* branch path: 0x959a6:jne:1;0x959b1:jne:1;0x959bd:jne:1;0x959e9:jne:0;0x95a08:je:0 */
    /* top actual targets: 43@0x8173d:27,268@0xb0007:26,114@0x90319:22,146@0x96407:22,124@0x91e81:19,189@0x9e7af:18,208@0xa2361:15,168@0x9aa83:12 */
    /* operands: b0=var32(top=0x87:10.1%);b1=var11(top=0x99:16.2%) */
    /* GPR+scratch branch profile: 0/661 unknown branches (0.0%): */
    vm->state = state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    vm->flags = flags0 - 0x387407b9u + 0x2cd392b6u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 & 0x61f88068u)) & 0x1d022eeeu)) ^ 0x6367b3ddu)))) - 0x2f1222e2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_301_d1d08c84dc4f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=301, native=0xb708d, path=d1d08c84dc4f1a8d, class=static_validated, events=475 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=11 */
    /* branch path: 0xb7140:je:0;0xb71c5:je:0;0xb720a:je:0;0xb726f:je:0;0xb72a8:je:0;0xb73b9:je:1 */
    /* top actual targets: 173@0x9ba74:277,160@0x994cf:36,257@0xadbfd:35,144@0x95887:34,108@0x8f24b:32,352@0xc1ec4:26,198@0xa037e:23,256@0xad849:12 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var115(top=0xdf:19.9%);b4=var115(top=0x18:6.4%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ U16(vm->ip + 0x3u) - state0 & flags0 - 0x2c0febdfu;
    vm->flags = flags0 + 0x34c21ec8u + 0x4bcb296bu - 0x72148c24u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32(state0 & flags0)))) - 0x2c0febdfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_319_9a21b656ce3d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=319, native=0xba72f, path=9a21b656ce3dc52b, class=static_validated, events=475 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=70 */
    /* branch path: 0xba74a:je:1;0xba78b:je:1;0xba89f:je:0;0xba975:jne:1;0xba983:jne:1;0xba992:jne:1;0xba9a0:jne:0;0xbaa0a:je:0;0xbab08:je:1 */
    /* top actual targets: 173@0x9ba74:355,256@0xad849:35,144@0x95887:24,108@0x8f24b:16,257@0xadbfd:14,352@0xc1ec4:11,160@0x994cf:10,198@0xa037e:10 */
    /* operands: b0=0x3d;b1=0x01;b2=var42(top=0xe6:28.4%);b3=var47(top=0x2e:17.5%);b4=var21(top=0x00:79.0%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32(state0 & (mask32(flags0 & (mask32(state0 + 0x4fa9822eu)))))) | 0x5ed258f1u)) | (mask32(flags0 & (mask32(state0 + 0x4fa9822eu)))))) ^ (mask32((mask32(flags0 & (mask32(state0 + 0x4fa9822eu)))) + 0x2ba77993u)))))) + 0x7f20b820u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_091_0d50d52eb7de(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=91, native=0x8b6de, path=0d50d52eb7de2693, class=static_validated, events=474 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=111 */
    /* branch path: 0x8b6ee:je:0 */
    /* top actual targets: 258@0xadf2c:39,340@0xbf435:37,337@0xbec0e:29,79@0x885b0:27,83@0x8947b:26,220@0xa522e:24,347@0xc088d:23,3@0x78c77:23 */
    /* operands: b0=var142(top=0x78:5.9%);b1=var143(top=0x04:6.4%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 ^ U16(vm->ip + 0x0u) ^ state0;
    vm->flags = flags0 ^ state0 ^ 0x3f03cfb3u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_198_a16a8badeb00(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=198, native=0xa037e, path=a16a8badeb00f044, class=static_validated, events=467 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=12 */
    /* branch path: 0xa0391:je:0;0xa04a9:jne:1;0xa04b6:jne:1;0xa04c4:jne:0;0xa04da:je:0;0xa04f1:jne:1 */
    /* top actual targets: 300@0xb6c36:269,258@0xadf2c:63,350@0xc1926:54,189@0x9e7af:11,28@0x7e390:9,64@0x85059:9,121@0x91379:6,43@0x8173d:6 */
    /* operands: b0=var217(top=0xe3:5.4%);b1=var220(top=0x54:5.3%) */
    /* GPR+scratch branch profile: 0/654 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u - U16(vm->ip + 0x0u) - state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u ^ 0x3fe99379u;
    vm->flags = flags0 + 0x15b2dfa5u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 + (mask32(flags0 - 0x5e173fc7u)))) - 0x3cd02127u)) + (mask32(flags0 + 0x15b2dfa5u)))))) ^ 0x3fe99379u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_297_4649b816d12a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=297, native=0xb64d7, path=4649b816d12abef9, class=static_validated, events=465 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0xb64f9:je:1;0xb651f:je:1;0xb654f:je:1;0xb65c8:je:0;0xb65f5:je:1 */
    /* top actual targets: 196@0x9fbcd:52,347@0xc088d:42,258@0xadf2c:25,301@0xb708d:25,340@0xbf435:23,174@0x9bd8f:20,337@0xbec0e:20,114@0x90319:14 */
    /* operands: b0=var222(top=0x89:5.5%);b1=var249(top=0x2e:3.1%);b2=var256(top=0xad:1.8%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 - 0x48220942u;
    vm->flags = flags0 + 0x283684b4u ^ 0x4a5a939au;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32(state0 - 0x48220942u)) | flags0)) ^ 0x6b7f38b7u)) + (mask32((mask32(U8(vm->ip + 0x0u) + (mask32((mask32((mask32(state0 - 0x48220942u)) | flags0)) ^ 0x6b7f38b7u)))) + flags0)))))) ^ 0x9f24ccbu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_018_3fb41280ccd8(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=18, native=0x7be9b, path=3fb41280ccd8685b, class=static_validated, events=456 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=5 */
    /* branch path: 0x7bed4:je:1;0x7befe:je:1;0x7bfe0:je:1;0x7c17e:je:0 */
    /* top actual targets: 114@0x90319:38,258@0xadf2c:37,347@0xc088d:30,300@0xb6c36:27,105@0x8e6b4:23,189@0x9e7af:21,20@0x7c62b:18,196@0x9fbcd:17 */
    /* operands: b0=var149(top=0xa0:5.4%);b1=var200(top=0x0a:6.4%);b2=var165(top=0x3a:10.5%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 & flags0)) - 0x6382ce20u)) & flags0)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_160_3240613169d3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=160, native=0x994cf, path=3240613169d3e063, class=static_validated, events=453 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x99521:jne:0;0x9952e:jne:1;0x9953c:jne:1;0x9956c:jne:1;0x995b7:je:1 */
    /* top actual targets: 215@0xa4609:256,64@0x85059:128,340@0xbf435:64,189@0x9e7af:3,157@0x98a9a:2 */
    /* operands: b0=var52(top=0x79:6.7%);b1=var12(top=0x2f:18.6%) */
    /* GPR+scratch branch profile: 0/652 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x559d4d7bu;
    return r;
}

static VMOpResult path_entry_181_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=181, native=0x9d13f, path=e3b0c44298fc1c14, class=static_validated, events=453 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: - */
    /* top actual targets: 215@0xa4609:256,189@0x9e7af:32,337@0xbec0e:27,347@0xc088d:18,114@0x90319:17,64@0x85059:17,258@0xadf2c:16,66@0x855ff:16 */
    /* operands: b0=0x3d;b1=0x01;b2=0xe8;b3=0x01;b4=var72(top=0xe0:18.2%);b5=var69(top=0x0b:24.8%) */
    vm->state = state0 - U16(vm->ip + 0x4u) - state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x4u) - state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_332_4ddafdbbeaa3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=332, native=0xbd36d, path=4ddafdbbeaa3d928, class=static_validated, events=451 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=120 */
    /* branch path: 0xbd488:je:0;0xbd544:je:0;0xbd6ed:je:0;0xbd73d:je:0 */
    /* top actual targets: 90@0x8b334:256,43@0x8173d:69,183@0x9d495:30,196@0x9fbcd:15,307@0xb8064:14,3@0x78c77:14,180@0x9cf32:11,91@0x8b6de:7 */
    /* operands: b0=var38(top=0x0b:15.7%);b1=var19(top=0xd7:43.6%);b2=var79(top=0xf7:9.8%);b3=var108(top=0xca:15.7%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((mask32((mask32((mask32((mask32(state0 | 0x30661b97u)) & 0x57d9fe65u)) | (mask32((mask32((mask32(flags0 & (mask32(state0 | 0x2f0ca7d2u)))) & (mask32((mask32(state0 | 0x30661b97u)) - 0x23cebdbcu)))) ^ (mask32((mask32(state0 | 0x30661b97u)) & 0x57d9fe65u)))))) & (mask32((...#3cd6875dc360; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_090_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=90, native=0x8b334, path=e3b0c44298fc1c14, class=static_validated, events=441 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: - */
    /* top actual targets: 49@0x82820:257,260@0xae90b:64,330@0xbc9b8:16,28@0x7e390:11,66@0x855ff:10,300@0xb6c36:8,239@0xa991e:6,301@0xb708d:6 */
    /* operands: b0=var23(top=0xc7:45.7%);b1=var11(top=0xec:49.6%);b2=var79(top=0xee:45.1%);b3=var80(top=0xaa:45.3%) */
    vm->state = state0 + flags0 + flags0 + 0x1c1030c0u + flags0 & 0x4b6fdae0u;
    vm->flags = flags0 & 0x4b6fdae0u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + 0x224914c1u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_307_d225712c0754(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=307, native=0xb8064, path=d225712c0754a6b5, class=static_validated, events=440 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0xb80ac:je:1;0xb8188:je:1 */
    /* top actual targets: 174@0x9bd8f:32,157@0x98a9a:30,114@0x90319:27,26@0x7dbbb:25,196@0x9fbcd:24,161@0x9975a:22,340@0xbf435:21,176@0x9c10b:20 */
    /* operands: b0=var252(top=0x3a:9.2%);b1=var29(top=0x9d:8.1%);b2=var12(top=0xaf:24.2%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 ^ U8(vm->ip + 0x0u) - flags0 & flags0 & 0x5792b958u ^ flags0 & 0x5792b958u;
    vm->flags = flags0 & 0x5792b958u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) - 0x665a9b5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_124_720d13cce365(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=124, native=0x91e81, path=720d13cce365bff2, class=static_validated, events=424 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=71 */
    /* branch path: 0x91eac:je:1;0x91efe:je:0 */
    /* top actual targets: 157@0x98a9a:73,192@0x9f00a:38,268@0xb0007:35,43@0x8173d:31,307@0xb8064:28,185@0x9d964:24,189@0x9e7af:19,337@0xbec0e:17 */
    /* operands: b0=var166(top=0xc1:12.6%);b1=var177(top=0x7f:8.9%);b2=var34(top=0x00:43.4%);b3=var144(top=0x1b:7.3%);b4=var91(top=0x4f:12.2%);b5=var36(top=0xcb:25.7%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 - 0x7c31e804u ^ flags0 + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u;
    vm->flags = flags0 + 0x57b29524u - 0x2c2f20afu - state0 - 0x7c31e804u ^ flags0 + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x4u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - 0x7c31e804u)) ^ flags0)) ^ 0x2bb25e3u)) | 0x50ef8024u)) + (mask32(flags0 - (mask32((mask32((mask32((mask32(state0 - 0x7c31e804u)) ^ flags0)) ^ 0x2bb25e3u)) | 0x50ef8024u)))))) ^ (mask32(flags0 - (mask32((mask32((mask32((...#ac1733a63517; */
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_144_2f8ce0fc3cde(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=144, native=0x95887, path=2f8ce0fc3cdeca85, class=static_validated, events=406 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=5 */
    /* branch path: 0x959a6:jne:1;0x959b1:jne:1;0x959bd:jne:0;0x959d3:je:0;0x959e9:jne:1;0x95a08:je:1 */
    /* top actual targets: 18@0x7be9b:249,347@0xc088d:67,268@0xb0007:64,189@0x9e7af:4,172@0x9b68a:3,307@0xb8064:3,215@0xa4609:2,253@0xacfb1:2 */
    /* operands: b0=var32(top=0x87:10.1%);b1=var11(top=0x99:16.2%) */
    /* GPR+scratch branch profile: 0/661 unknown branches (0.0%): */
    vm->state = state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    vm->flags = flags0 - 0x387407b9u + 0x2cd392b6u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 & 0x61f88068u)) & 0x1d022eeeu)) ^ 0x6367b3ddu)))) - 0x2f1222e2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_268_c1e3dfd197d9(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=268, native=0xb0007, path=c1e3dfd197d904df, class=static_validated, events=405 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=17 */
    /* branch path: 0xb01e9:je:1;0xb0218:je:1;0xb026a:je:1;0xb029a:je:0;0xb02eb:je:0;0xb0307:je:1 */
    /* top actual targets: 28@0x7e390:78,337@0xbec0e:41,332@0xbd36d:26,154@0x97ce6:25,26@0x7dbbb:19,114@0x90319:18,189@0x9e7af:15,18@0x7be9b:15 */
    /* operands: b0=var247(top=0x4a:3.3%);b1=var251(top=0x1c:6.8%);b2=var127(top=0x3e:4.0%);b3=var202(top=0x6c:7.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32((mask32(state0 | 0x71bd1bb1u)) + (mask32((mask32(U16(vm->ip + 0x0u) - (mask32(state0 | 0x71bd1bb1u)))) - flags0)))) & (mask32(flags0 + 0x33c0c75bu)))) | (mask32(flags0 + 0x33c0c75bu)))))) + 0x73efcc77u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_305_ec1b94f05ced(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=305, native=0xb78b0, path=ec1b94f05ced6b81, class=static_validated, events=398 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=27 */
    /* branch path: 0xb78db:je:0;0xb7924:je:0;0xb7978:jne:1;0xb7988:jne:1;0xb79a8:je:0;0xb79b7:je:0;0xb7a13:je:0;0xb7a4c:je:0 */
    /* top actual targets: 157@0x98a9a:72,203@0xa1484:72,340@0xbf435:32,347@0xc088d:31,196@0x9fbcd:26,43@0x8173d:24,258@0xadf2c:21,64@0x85059:19 */
    /* operands: b0=var237(top=0x40:4.1%);b1=var225(top=0x09:3.5%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x0u) + state0;
    vm->flags = flags0 & state0 & 0x14763e0cu + 0x47fe8c0bu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_083_51cc8bda8af2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=83, native=0x8947b, path=51cc8bda8af23024, class=static_validated, events=397 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=69 */
    /* branch path: 0x895f2:je:1;0x8963c:je:0;0x89666:je:1;0x896a4:je:0 */
    /* top actual targets: 173@0x9ba74:137,160@0x994cf:55,108@0x8f24b:53,256@0xad849:38,352@0xc1ec4:33,198@0xa037e:32,257@0xadbfd:31,144@0x95887:18 */
    /* operands: b0=var179(top=0xa8:5.0%);b1=var175(top=0x19:9.8%);b2=0x00;b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & 0x122d7f19u;
    vm->flags = flags0 ^ 0xe368451u - 0x1f36e121u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 & 0x122d7f19u)) | flags0)) + 0x60e2eab8u)) - 0x34a4c404u)))) ^ 0x4b7ebb84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_239_5b37691aa242(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=239, native=0xa991e, path=5b37691aa2424c6a, class=static_validated, events=391 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=42 */
    /* branch path: 0xa9967:je:0;0xa99c8:je:1;0xa9b87:je:1 */
    /* top actual targets: 297@0xb64d7:30,320@0xbada5:24,196@0x9fbcd:22,258@0xadf2c:22,28@0x7e390:21,66@0x855ff:21,70@0x8610e:21,157@0x98a9a:20 */
    /* operands: b0=var140(top=0x2a:5.5%);b1=var65(top=0x02:11.2%);b2=var36(top=0xc1:13.6%);b3=var23(top=0x21:15.7%);b4=var72(top=0xbe:8.8%);b5=var29(top=0xa6:21.0%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu & U32(vm->ip + 0x0u) - state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu - U16(vm->ip + 0x4u) + state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu & U32(vm->ip + 0x0u) - state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu - 0x3650a0aeu;
    vm->flags = flags0 & state0 + 0x40a7aa16u + flags0 + 0x627d85abu + 0x29b54516u & 0x66aaa5eu ^ 0x7efd4127u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x4u) + (mask32((mask32((mask32((mask32(state0 + 0x40a7aa16u)) + flags0)) & 0x39d16b3eu)) & (mask32(U32(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 + 0x40a7aa16u)) + flags0)) & 0x39d16b3eu)))))))) - 0x3650a0aeu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_292_0997af338ad0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=292, native=0xb540f, path=0997af338ad030ee, class=static_validated, events=389 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=124 */
    /* branch path: 0xb5688:jne:0;0xb56bb:jne:1;0xb56c8:jne:1;0xb56f3:jne:1;0xb5771:je:0;0xb57c8:je:0 */
    /* top actual targets: 185@0x9d964:256,307@0xb8064:64,350@0xc1926:64,220@0xa522e:2,140@0x94e5a:1,317@0xba1e2:1,349@0xc140b:1 */
    /* operands: b0=enum4(0x62:422,0x50:105,0x3a:98,0x32:26);b1=var53(top=0xdc:39.3%);b2=var55(top=0x7b:39.3%);b3=var69(top=0xd0:39.5%);b4=var63(top=0xaa:39.5%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x592d1456u ^ 0x6ef9e3c1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) ^ (mask32((mask32(state0 | flags0)) + (mask32(U16(vm->ip + 0x1u) - (mask32(state0 | flags0)))))))) + 0x628c34bcu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_108_fab5693be0e9(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=108, native=0x8f24b, path=fab5693be0e97629, class=static_validated, events=386 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=38 */
    /* branch path: 0x8f368:jne:1;0x8f38e:jne:1;0x8f3a8:jne:1;0x8f438:jne:0;0x8f4f4:je:0;0x8f53a:je:0;0x8f55b:je:1 */
    /* top actual targets: 208@0xa2361:64,28@0x7e390:25,43@0x8173d:25,154@0x97ce6:17,297@0xb64d7:17,168@0x9aa83:16,258@0xadf2c:16,215@0xa4609:15 */
    /* operands: b0=var228(top=0xce:5.1%);b1=var237(top=0x85:6.6%) */
    /* GPR+scratch branch profile: 0/917 unknown branches (0.0%): */
    vm->state = state0 + 0x11961dc7u ^ 0x5fa19cc7u - flags0;
    vm->flags = flags0 ^ 0x1d98f07au & 0x60594c67u - 0x2e3abdaeu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 + 0x11961dc7u)) ^ 0x5fa19cc7u)) - flags0)))) + 0x36f124dbu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_283_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=283, native=0xb3612, path=e3b0c44298fc1c14, class=static_validated, events=381 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: - */
    /* top actual targets: 258@0xadf2c:86,260@0xae90b:66,333@0xbd8af:29,168@0x9aa83:27,215@0xa4609:27,185@0x9d964:17,307@0xb8064:17,189@0x9e7af:15 */
    /* operands: b0=0x10;b1=0xe8;b2=0x01;b3=var22(top=0x1c:12.9%);b4=var10(top=0x62:23.3%) */
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x3u) - 0x8ad5ab4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_144_df981a914db0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=144, native=0x95887, path=df981a914db02de7, class=static_validated, events=376 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=26 */
    /* branch path: 0x959a6:jne:1;0x959b1:jne:1;0x959bd:jne:1;0x959e9:jne:0;0x95a08:je:1 */
    /* top actual targets: 347@0xc088d:28,66@0x855ff:24,239@0xa991e:23,203@0xa1484:22,28@0x7e390:21,253@0xacfb1:17,297@0xb64d7:17,268@0xb0007:14 */
    /* operands: b0=var32(top=0x87:10.1%);b1=var11(top=0x99:16.2%) */
    /* GPR+scratch branch profile: 0/661 unknown branches (0.0%): */
    vm->state = state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    vm->flags = flags0 - 0x387407b9u + 0x2cd392b6u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 & 0x61f88068u)) & 0x1d022eeeu)) ^ 0x6367b3ddu)))) - 0x2f1222e2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_108_fadb67a2878c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=108, native=0x8f24b, path=fadb67a2878c38a3, class=static_validated, events=365 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=21 */
    /* branch path: 0x8f368:jne:1;0x8f38e:jne:1;0x8f3a8:jne:0;0x8f3ec:je:0;0x8f438:jne:1;0x8f4f4:je:1;0x8f53a:je:0;0x8f55b:je:1 */
    /* top actual targets: 215@0xa4609:246,171@0x9b4b3:13,18@0x7be9b:11,28@0x7e390:10,340@0xbf435:10,124@0x91e81:9,199@0xa0631:8,337@0xbec0e:7 */
    /* operands: b0=var228(top=0xce:5.1%);b1=var237(top=0x85:6.6%) */
    /* GPR+scratch branch profile: 0/917 unknown branches (0.0%): */
    vm->state = state0 + 0x11961dc7u ^ 0x5fa19cc7u - flags0;
    vm->flags = flags0 ^ 0x1d98f07au & 0x60594c67u - 0x2e3abdaeu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 + 0x11961dc7u)) ^ 0x5fa19cc7u)) - flags0)))) + 0x36f124dbu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_340_69e377434a33(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=340, native=0xbf435, path=69e377434a334c1b, class=static_validated, events=364 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0xbf457:je:1;0xbf48f:je:0;0xbf4d7:je:0 */
    /* top actual targets: 66@0x855ff:37,161@0x9975a:35,192@0x9f00a:32,305@0xb78b0:19,18@0x7be9b:18,20@0x7c62b:18,158@0x99029:17,185@0x9d964:16 */
    /* operands: b0=var221(top=0x4c:4.0%);b1=var255(top=0x16:2.8%);b2=var17(top=0xb3:15.9%);b3=enum2(0x00:21582,0x01:4530) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 - 0x2b2e5a26u ^ 0x7535dd25u;
    vm->flags = flags0 & 0x7036ca68u - 0x2caa6796u ^ 0x4ea9d032u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32(state0 - 0x2b2e5a26u)) ^ 0x7535dd25u)) | U16(vm->ip + 0x2u))))) + 0x9097995u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_114_9fb28485e66f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=114, native=0x90319, path=9fb28485e66f63b4, class=static_validated, events=359 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0x90334:je:1;0x903d9:je:1;0x904a4:je:1;0x904ed:je:1;0x9052b:je:1 */
    /* top actual targets: 199@0xa0631:50,268@0xb0007:29,66@0x855ff:27,37@0x80685:26,185@0x9d964:25,30@0x7e849:25,18@0x7be9b:20,297@0xb64d7:14 */
    /* operands: b0=var255(top=0x99:2.0%);b1=var198(top=0x77:2.9%);b2=var250(top=0xa6:2.9%);b3=var248(top=0xcf:2.6%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 & state0;
    vm->flags = flags0 & state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bfu)))) + state0)) & 0x48367f78u)))) ^ 0x63bb548fu)) + (mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bfu)))) + state0)))) & 0x292b555du)) ^ (mask32((mask32(U16(vm->ip + 0x2u) + (...#81b58d825e9e; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_183_7633afa8259c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=183, native=0x9d495, path=7633afa8259cedcd, class=static_validated, events=359 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=70 */
    /* branch path: 0x9d556:je:1 */
    /* top actual targets: 337@0xbec0e:34,172@0x9b68a:26,189@0x9e7af:20,297@0xb64d7:20,220@0xa522e:19,199@0xa0631:18,340@0xbf435:18,114@0x90319:15 */
    /* operands: b0=0xe8;b1=0x01;b2=var142(top=0xc6:8.5%);b3=var152(top=0x84:7.4%) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 + 0xfaa325cu ^ 0x694e1f66u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32(state0 + 0xfaa325cu)) ^ 0x694e1f66u)))) - 0x1aed554cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_257_4f54f5b6f3a2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=257, native=0xadbfd, path=4f54f5b6f3a20391, class=static_validated, events=357 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=18 */
    /* branch path: 0xadc1e:je:0;0xadcc0:jne:1;0xadccc:jne:1;0xadcd9:jne:0;0xadcf0:je:0;0xadd06:jne:1;0xadd6a:je:0;0xadda4:je:0 */
    /* top actual targets: 157@0x98a9a:247,215@0xa4609:62,165@0x9a24c:13,203@0xa1484:13,168@0x9aa83:5,28@0x7e390:5,350@0xc1926:4,266@0xaf8af:3 */
    /* operands: b0=var32(top=0xe7:10.9%);b1=var43(top=0xb5:9.7%) */
    /* GPR+scratch branch profile: 0/918 unknown branches (0.0%): */
    vm->state = state0 - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32(state0 - 0x509f61c9u)) + 0x1b9def5u)) - 0x7d4ca123u)) | 0x1d2af87u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_079_4fa9d758759c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=79, native=0x885b0, path=4fa9d758759c0b0e, class=static_validated, events=353 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=34 */
    /* branch path: 0x8860f:je:0;0x886fb:je:1;0x887f1:je:1 */
    /* top actual targets: 198@0xa037e:76,256@0xad849:69,257@0xadbfd:51,108@0x8f24b:50,144@0x95887:40,173@0x9ba74:33,160@0x994cf:24,352@0xc1ec4:10 */
    /* operands: b0=var64(top=0x9e:15.9%);b1=var86(top=0x28:12.3%);b2=0x3d;b3=0x01;b4=0x00 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u;
    vm->flags = flags0 ^ 0xc7e744fu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x623ccce4u)))) & 0xd4da920u)) | (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x225dfa31u)))) - 0x6110d031u)) ^ 0x3fcb6e9au)) ^ (mask32(flags0 ^ 0xc7e744fu)))) + 0x60a9dba6u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_237_69c6b0e5ccc4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=69c6b0e5ccc43bb0, class=static_validated, events=351 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=101 */
    /* branch path: 0xa8efb:je:0;0xa8f3c:je:0;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:1;0xa9025:jne:0;0xa90d7:je:1;0xa9292:je:0 */
    /* top actual targets: 352@0xc1ec4:258,108@0x8f24b:64,256@0xad849:14,198@0xa037e:9,173@0x9ba74:5,144@0x95887:1 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) ^ (mask32((mask32((mask32(state0 - (mask32(flags0 ^ 0x22900c8u)))) - (mask32((mask32(flags0 + 0x3fbeaa1du)) ^ 0x8178b71u)))) - 0x4813dbcu)))) - 0x4f4105f2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_352_b17f769d0eb2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=352, native=0xc1ec4, path=b17f769d0eb20d52, class=static_validated, events=350 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=39 */
    /* branch path: 0xc1f17:je:0;0xc1f5b:je:1;0xc1fba:jne:1;0xc1fc6:jne:1;0xc1fd3:jne:1;0xc2000:jne:0;0xc2027:je:0 */
    /* top actual targets: 292@0xb540f:255,121@0x91379:11,258@0xadf2c:9,208@0xa2361:7,140@0x94e5a:5,168@0x9aa83:4,189@0x9e7af:4,18@0x7be9b:4 */
    /* operands: b0=var124(top=0x16:8.0%);b1=var55(top=0xdb:8.3%) */
    /* GPR+scratch branch profile: 0/912 unknown branches (0.0%): */
    vm->state = state0 & 0x31863366u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 & 0x31863366u)))) + 0x331dfc06u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_281_bf19bc7c26ba(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=281, native=0xb2db6, path=bf19bc7c26ba5d0e, class=static_validated, events=347 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0xb2fc0:je:0 */
    /* top actual targets: 269@0xb045b:257,292@0xb540f:9,105@0x8e6b4:7,330@0xbc9b8:5,48@0x82477:5,131@0x937d0:4,254@0xad32c:4,56@0x83e76:4 */
    /* operands: b0=var61(top=0x8d:46.1%);b1=var59(top=0x0d:46.3%);b2=var45(top=0x68:49.5%);b3=var49(top=0x7c:46.3%) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 - 0x31642a8cu ^ 0x5b9839d1u;
    vm->flags = flags0 - 0x1ec23851u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32(state0 - 0x31642a8cu)) ^ 0x5b9839d1u)) | flags0)) & (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32(state0 - 0x31642a8cu)) ^ 0x5b9839d1u)) | flags0)))) - flags0)))) - (mask32(flags0 - 0x1ec23851u)))) ^ 0x6445395fu)))) - 0x519e8380u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_352_7741bb1ac2cf(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=352, native=0xc1ec4, path=7741bb1ac2cf28bd, class=static_validated, events=347 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xc1f17:je:0;0xc1f5b:je:0;0xc1fba:jne:0;0xc1fc6:jne:1;0xc1fd3:jne:1;0xc2000:jne:1;0xc2027:je:0 */
    /* top actual targets: 258@0xadf2c:225,154@0x97ce6:57,307@0xb8064:56,172@0x9b68a:2,121@0x91379:1,168@0x9aa83:1,199@0xa0631:1,268@0xb0007:1 */
    /* operands: b0=var124(top=0x16:8.0%);b1=var55(top=0xdb:8.3%) */
    /* GPR+scratch branch profile: 0/912 unknown branches (0.0%): */
    vm->state = state0 & 0x31863366u;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_319_862159fb6429(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=319, native=0xba72f, path=862159fb64299b44, class=static_validated, events=337 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=56 */
    /* branch path: 0xba74a:je:0;0xba78b:je:1;0xba89f:je:0;0xba975:jne:1;0xba983:jne:1;0xba992:jne:1;0xba9a0:jne:0;0xbaa0a:je:0;0xbab08:je:1 */
    /* top actual targets: 257@0xadbfd:267,108@0x8f24b:22,256@0xad849:16,198@0xa037e:11,173@0x9ba74:8,144@0x95887:6,352@0xc1ec4:5,160@0x994cf:2 */
    /* operands: b0=0x3d;b1=0x01;b2=var42(top=0xe6:28.4%);b3=var47(top=0x2e:17.5%);b4=var21(top=0x00:79.0%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32(state0 & (mask32((mask32((mask32(flags0 | 0x6be63b72u)) ^ 0x55d6ffe2u)) & (mask32(state0 + 0x4fa9822eu)))))) | 0x5ed258f1u)) | (mask32((mask32((mask32(flags0 | 0x6be63b72u)) ^ 0x55d6ffe2u)) & (mask32(state0 + 0x4fa9822eu)))))) ^ (mask32((mask32((mask32((...#6127f02aa5ff; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_144_9f3cc1c99e54(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=144, native=0x95887, path=9f3cc1c99e54d1d6, class=static_validated, events=329 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=35 */
    /* branch path: 0x959a6:jne:0;0x959b1:jne:1;0x959bd:jne:1;0x959e9:jne:1;0x95a08:je:0 */
    /* top actual targets: 258@0xadf2c:256,157@0x98a9a:64,18@0x7be9b:1,203@0xa1484:1,215@0xa4609:1,273@0xb11ca:1,300@0xb6c36:1,322@0xbb3c9:1 */
    /* operands: b0=var32(top=0x87:10.1%);b1=var11(top=0x99:16.2%) */
    /* GPR+scratch branch profile: 0/661 unknown branches (0.0%): */
    vm->state = state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    vm->flags = flags0 - 0x387407b9u + 0x2cd392b6u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 & 0x61f88068u)) & 0x1d022eeeu)) ^ 0x6367b3ddu)))) - 0x2f1222e2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_105_cf8d4e548fe3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=105, native=0x8e6b4, path=cf8d4e548fe382ef, class=static_validated, events=328 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=127 */
    /* branch path: 0x8e713:je:0;0x8e925:jne:0;0x8e94d:jne:1;0x8e96f:jne:1;0x8e9a6:jne:1 */
    /* top actual targets: 350@0xc1926:256,291@0xb4edd:65,200@0xa0a9e:3,18@0x7be9b:1,301@0xb708d:1,317@0xba1e2:1,66@0x855ff:1 */
    /* operands: b0=var58(top=0x28:38.2%);b1=var76(top=0xa6:38.2%);b2=var22(top=0xf0:39.0%);b3=var11(top=0x0a:41.4%);b4=enum4(0x62:366,0x32:151,0x50:84,0x3a:70) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu & U16(vm->ip + 0x0u) + state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu + flags0 ^ 0x6808cf40u - 0x72c2e29bu - U16(vm->ip + 0x2u);
    vm->flags = flags0 ^ 0x6808cf40u - 0x72c2e29bu ^ 0x35dcbb88u;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_070_490afcdddd0d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=70, native=0x8610e, path=490afcdddd0d9c29, class=static_validated, events=327 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=29 */
    /* branch path: 0x86334:jne:1;0x8634a:jne:1;0x8635f:jne:1;0x8636c:jne:0;0x8648a:je:1;0x865a3:je:0 */
    /* top actual targets: 256@0xad849:85,198@0xa037e:45,108@0x8f24b:43,160@0x994cf:39,144@0x95887:38,352@0xc1ec4:37,257@0xadbfd:23,173@0x9ba74:17 */
    /* operands: b0=var93(top=0x8b:15.8%);b1=var143(top=0xb7:16.0%);b2=var23(top=0x00:58.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ flags0 - flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0;
    vm->flags = flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 ^ flags0)) ^ flags0)) - (mask32((mask32((mask32((mask32(flags0 + (mask32((mask32((mask32(state0 ^ flags0)) ^ flags0)) + 0x55fafa0cu)))) - 0x5abc12afu)) ^ (mask32((mask32(state0 ^ flags0)) ^ flags0)))) | 0x58fb4a0cu)))) ^ 0x62ac6845u)) ^...#d1a49f5217c6; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_118_0c2ec304c56d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=118, native=0x90c23, path=0c2ec304c56dd3de, class=static_validated, events=325 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0x90c71:je:0;0x90c94:je:1;0x90d19:je:0 */
    /* top actual targets: 332@0xbd36d:256,322@0xbb3c9:64,172@0x9b68a:3,208@0xa2361:2 */
    /* operands: b0=0x62;b1=var12(top=0xa6:64.3%);b2=var12(top=0x2b:64.3%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x1u) ^ state0 - 0x52d3aa4u;
    vm->flags = flags0 ^ 0x41355bdbu + 0x392f8e74u + 0x860cb96u & 0x276ac31au - 0x5cecff55u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) ^ state0)) - 0x52d3aa4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_168_5a46469f23bd(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=168, native=0x9aa83, path=5a46469f23bdd3cc, class=static_validated, events=322 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=14 */
    /* branch path: 0x9aa9c:je:1;0x9aadd:je:1;0x9ab2f:je:1;0x9ab7f:je:1;0x9ad6a:je:0;0x9ad85:je:0 */
    /* top actual targets: 315@0xb9451:79,340@0xbf435:43,258@0xadf2c:19,28@0x7e390:10,64@0x85059:10,66@0x855ff:10,243@0xaab6a:9,26@0x7dbbb:9 */
    /* operands: b0=var244(top=0xe3:6.9%);b1=var219(top=0x56:6.0%);b2=var192(top=0xde:4.8%);b3=var14(top=0xd9:19.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32(state0 | 0x6899d5d4u)) & (mask32(U16(vm->ip + 0x0u) + flags0)))))) + 0x553030a2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_127_a24732f3bf1e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=127, native=0x926c3, path=a24732f3bf1ecb29, class=static_validated, events=320 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0x92773:jne:1;0x92782:jne:1;0x92798:jne:1;0x927ad:jne:0;0x92862:je:0 */
    /* top actual targets: 108@0x8f24b:256,257@0xadbfd:64 */
    /* operands: b0=enum3(0xdf:256,0x7b:64,0x99:64);b1=enum3(0x22:256,0xc7:64,0xa1:64);b2=enum3(0xc9:256,0x79:64,0x2b:64);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - state0)) + 0xf376a6au)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_083_5a30d3b6ba88(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=83, native=0x8947b, path=5a30d3b6ba886a30, class=static_validated, events=317 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=59 */
    /* branch path: 0x895f2:je:0;0x8963c:je:0;0x89666:je:1;0x896a4:je:0 */
    /* top actual targets: 160@0x994cf:79,108@0x8f24b:49,144@0x95887:44,198@0xa037e:43,352@0xc1ec4:38,256@0xad849:30,257@0xadbfd:24,173@0x9ba74:10 */
    /* operands: b0=var179(top=0xa8:5.0%);b1=var175(top=0x19:9.8%);b2=0x00;b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & 0x122d7f19u;
    vm->flags = flags0 ^ 0xe368451u - 0x1f36e121u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 & 0x122d7f19u)) | flags0)) + 0x60e2eab8u)) - 0x34a4c404u)))) ^ 0x4b7ebb84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_180_840c57e172be(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=180, native=0x9cf32, path=840c57e172be5a2e, class=static_validated, events=303 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=93 */
    /* branch path: 0x9cfd4:je:1;0x9cffa:je:0 */
    /* top actual targets: 297@0xb64d7:28,168@0x9aa83:23,203@0xa1484:23,79@0x885b0:18,18@0x7be9b:17,114@0x90319:15,49@0x82820:14,157@0x98a9a:12 */
    /* operands: b0=var20(top=0x3b:19.2%);b1=var11(top=0x0b:23.6%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x3f2841fbu + state0 ^ 0x417a1c15u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + 0x7920fa05u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_338_55cdaf5314f0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=338, native=0xbf128, path=55cdaf5314f06009, class=static_validated, events=300 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=98 */
    /* branch path: 0xbf141:je:0;0xbf15d:je:0 */
    /* top actual targets: 283@0xb3612:133,351@0xc1d48:89,295@0xb60e0:78 */
    /* operands: b0=var85(top=0xc4:10.6%);b1=var91(top=0xc7:10.6%);b2=0x3d;b3=0x01;b4=0xe8;b5=0x01 */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 - U16(vm->ip + 0x0u) - state0 - 0x4bf8be0cu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - state0)) - 0x4bf8be0cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_169_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=169, native=0x9af18, path=e3b0c44298fc1c14, class=static_validated, events=296 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: - */
    /* top actual targets: 171@0x9b4b3:124,354@0xc2241:110,165@0x9a24c:62 */
    /* operands: b0=enum3(0xab:756,0x62:658,0xa5:382);b1=enum2(0x00:1138,0x01:658);b2=0xe8;b3=0x01 */
    vm->state = state0 + 0x18f09018u - 0x47a20f40u;
    vm->flags = flags0 ^ 0x3fd04ca8u;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_189_7483e4cd2418(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=189, native=0x9e7af, path=7483e4cd2418f22c, class=static_validated, events=296 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=15 */
    /* branch path: 0x9e84f:je:0;0x9e880:je:1;0x9e8d1:je:0 */
    /* top actual targets: 307@0xb8064:33,297@0xb64d7:26,184@0x9d694:25,30@0x7e849:20,215@0xa4609:19,176@0x9c10b:12,333@0xbd8af:11,66@0x855ff:11 */
    /* operands: b0=var256(top=0xec:1.7%);b1=var256(top=0x00:4.4%);b2=var64(top=0xbc:6.1%);b3=var64(top=0xe7:4.7%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 & 0x160e4f34u + U16(vm->ip + 0x2u) + state0 & 0x160e4f34u ^ 0x2a1ce984u;
    vm->flags = flags0 - 0x10705aceu & 0x49036387u & state0 & 0x160e4f34u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 & 0x160e4f34u)))) ^ 0x2a1ce984u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_349_15bcc1ea74bf(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=349, native=0xc140b, path=15bcc1ea74bf0193, class=static_validated, events=293 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0xc164c:je:1;0xc173f:je:0;0xc177b:je:0;0xc17c3:je:1 */
    /* top actual targets: 17@0x7bae9:256,282@0xb3128:7,105@0x8e6b4:5,28@0x7e390:5,322@0xbb3c9:5,199@0xa0631:4,200@0xa0a9e:2,215@0xa4609:2 */
    /* operands: b0=var68(top=0x00:50.9%);b1=var71(top=0xad:51.3%);b2=var20(top=0x88:53.7%);b3=var11(top=0x00:59.2%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0 + 0x5b8191bu - 0x48cf2626u - 0x7444487fu ^ state0 & flags0;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_026_2328e09ca352(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=26, native=0x7dbbb, path=2328e09ca352b2ff, class=static_validated, events=286 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=11 */
    /* branch path: 0x7dc03:je:1;0x7dc9b:je:1;0x7dd00:je:1;0x7dd5d:je:1;0x7ddeb:jne:1;0x7ddfc:jne:1;0x7de1d:je:0;0x7de2c:je:0;0x7de4d:je:0;0x7dea3:je:0 */
    /* top actual targets: 215@0xa4609:65,172@0x9b68a:30,185@0x9d964:30,157@0x98a9a:19,114@0x90319:16,64@0x85059:16,167@0x9a8d2:15,196@0x9fbcd:15 */
    /* operands: b0=var176(top=0x9e:4.5%);b1=var242(top=0xcf:3.6%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - 0x471264cau + flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x471264cau;
    vm->flags = flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x471264cau;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - 0x471264cau)) + (mask32((mask32((mask32(flags0 - (mask32(state0 ^ 0x5fcdb203u)))) ^ (mask32((mask32(state0 - 0x471264cau)) | 0x2a01f150u)))) + (mask32((mask32(state0 - 0x471264cau)) + 0x1bfb4659u)))))))) ^ 0x6f23a80cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_200_432568af12e4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=200, native=0xa0a9e, path=432568af12e4447b, class=static_validated, events=268 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=76 */
    /* branch path: 0xa0ae2:je:0;0xa0b3f:je:1;0xa0bb1:je:1;0xa0bf9:je:1 */
    /* top actual targets: 297@0xb64d7:30,185@0x9d964:26,199@0xa0631:25,18@0x7be9b:22,268@0xb0007:14,307@0xb8064:10,337@0xbec0e:9,66@0x855ff:9 */
    /* operands: b0=var132(top=0xa4:13.0%);b1=var124(top=0xc1:9.3%);b2=var103(top=0x10:19.7%);b3=var102(top=0x5f:26.1%);b4=var28(top=0x48:16.1%);b5=var11(top=0x09:19.9%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 + flags0 - flags0 ^ 0x64193a1au ^ 0x227666a1u + U32(vm->ip + 0x0u) ^ flags0 & 0x21af07eu;
    vm->flags = flags0 & 0x21af07eu;
    r.slot = (uint32_t)(U16(vm->ip + 0x4u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_201_1519cd726560(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=201, native=0xa0dca, path=1519cd726560d643, class=static_validated, events=266 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0xa0f21:je:0;0xa0fa7:je:0;0xa10cd:jne:1;0xa10e7:jne:1;0xa10f6:jne:0;0xa1117:jne:1;0xa1190:je:0;0xa124a:je:0 */
    /* top actual targets: 173@0x9ba74:256,256@0xad849:5,144@0x95887:4,257@0xadbfd:1 */
    /* operands: b0=0x3d;b1=0x01;b2=enum5(0xa1:257,0x39:76,0xb9:4,0x69:2,0x41:2);b3=enum4(0xc5:261,0xc8:74,0xc4:4,0xc6:2);b4=var11(top=0xe1:75.1%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ 0x1940e110u ^ 0x5efd26e6u & flags0 ^ 0x71fea721u ^ flags0 & 0x3f73d5c3u;
    vm->flags = flags0 & state0 ^ flags0 ^ 0x1940e110u ^ 0x5efd26e6u & flags0 ^ 0x71fea721u ^ flags0 & 0x3f73d5c3u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) - 0x289c039u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_144_543db112a670(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=144, native=0x95887, path=543db112a6706a4e, class=static_validated, events=259 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x959a6:jne:0;0x959b1:jne:1;0x959bd:jne:1;0x959e9:jne:1;0x95a08:je:1 */
    /* top actual targets: 168@0x9aa83:256,185@0x9d964:1,196@0x9fbcd:1,333@0xbd8af:1 */
    /* operands: b0=var32(top=0x87:10.1%);b1=var11(top=0x99:16.2%) */
    /* GPR+scratch branch profile: 0/661 unknown branches (0.0%): */
    vm->state = state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    vm->flags = flags0 - 0x387407b9u + 0x2cd392b6u;
    return r;
}

static VMOpResult path_entry_070_4550a35d86c6(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=70, native=0x8610e, path=4550a35d86c6e9dc, class=static_validated, events=256 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=88 */
    /* branch path: 0x86334:jne:1;0x8634a:jne:1;0x8635f:jne:0;0x8636c:jne:1;0x8648a:je:0;0x865a3:je:0 */
    /* top actual targets: 108@0x8f24b:256 */
    /* operands: b0=var93(top=0x8b:15.8%);b1=var143(top=0xb7:16.0%);b2=var23(top=0x00:58.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ flags0 - flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0;
    vm->flags = flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 ^ flags0)) ^ flags0)) - (mask32((mask32((mask32((mask32(flags0 + (mask32((mask32((mask32(state0 ^ flags0)) ^ flags0)) + 0x55fafa0cu)))) - 0x5abc12afu)) ^ (mask32((mask32(state0 ^ flags0)) ^ flags0)))) | 0x58fb4a0cu)))) ^ 0x62ac6845u)) ^...#d1a49f5217c6; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_107_e5cd368af7da(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=107, native=0x8eef4, path=e5cd368af7da2ede, class=static_validated, events=256 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0x8f00a:jne:1;0x8f02a:jne:1;0x8f03d:jne:1;0x8f060:jne:0;0x8f14a:je:0 */
    /* top actual targets: 160@0x994cf:256 */
    /* operands: b0=0x9e;b1=0xd4;b2=0xa9;b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 - U16(vm->ip + 0x0u) ^ state0;
    vm->flags = flags0 & 0x2f7d4e8du;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_183_9c00903a53cb(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=183, native=0x9d495, path=9c00903a53cb9c74, class=static_validated, events=252 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=58 */
    /* branch path: 0x9d556:je:0 */
    /* top actual targets: 18@0x7be9b:20,157@0x98a9a:19,66@0x855ff:18,269@0xb045b:17,114@0x90319:16,196@0x9fbcd:16,168@0x9aa83:14,333@0xbd8af:14 */
    /* operands: b0=0xe8;b1=0x01;b2=var142(top=0xc6:8.5%);b3=var152(top=0x84:7.4%) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 + 0xfaa325cu ^ 0x694e1f66u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32(state0 + 0xfaa325cu)) ^ 0x694e1f66u)))) - 0x1aed554cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_261_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=261, native=0xaeda2, path=e3b0c44298fc1c14, class=static_validated, events=250 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: - */
    /* top actual targets: 347@0xc088d:102,114@0x90319:30,297@0xb64d7:30,18@0x7be9b:27,337@0xbec0e:18,189@0x9e7af:14,215@0xa4609:14,258@0xadf2c:7 */
    /* operands: b0=0xe8;b1=0x01;b2=var13(top=0x67:30.3%);b3=enum8(0x6d:289,0x66:215,0x6c:193,0x68:145,0x63:115,0x69:97);b4=0x3d;b5=0x01 */
    vm->state = state0 + U16(vm->ip + 0x2u) + 0x4c539d29u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) + 0x4c539d29u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_168_cb8a5cbea557(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=168, native=0x9aa83, path=cb8a5cbea557e0e9, class=static_validated, events=245 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0x9aa9c:je:0;0x9aadd:je:1;0x9ab2f:je:1;0x9ab7f:je:1;0x9ad6a:je:0;0x9ad85:je:0 */
    /* top actual targets: 347@0xc088d:44,189@0x9e7af:43,337@0xbec0e:42,258@0xadf2c:14,320@0xbada5:8,346@0xc0535:8,307@0xb8064:7,33@0x7f7c4:7 */
    /* operands: b0=var244(top=0xe3:6.9%);b1=var219(top=0x56:6.0%);b2=var192(top=0xde:4.8%);b3=var14(top=0xd9:19.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32(state0 | 0x6899d5d4u)) & (mask32(U16(vm->ip + 0x0u) + (mask32((mask32(flags0 & 0x66031b5eu)) - 0x2eab70d9u)))))))) + 0x553030a2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_189_6f9a1c43a43f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=189, native=0x9e7af, path=6f9a1c43a43f01ae, class=static_validated, events=243 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x9e84f:je:1;0x9e880:je:1;0x9e8d1:je:0 */
    /* top actual targets: 43@0x8173d:39,305@0xb78b0:24,319@0xba72f:19,28@0x7e390:15,297@0xb64d7:11,157@0x98a9a:10,18@0x7be9b:10,174@0x9bd8f:9 */
    /* operands: b0=var256(top=0xec:1.7%);b1=var256(top=0x00:4.4%);b2=var64(top=0xbc:6.1%);b3=var64(top=0xe7:4.7%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 & 0x160e4f34u + U16(vm->ip + 0x2u) + state0 & 0x160e4f34u ^ 0x2a1ce984u;
    vm->flags = flags0 - 0x10705aceu & 0x49036387u & state0 & 0x160e4f34u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 & 0x160e4f34u)))) ^ 0x2a1ce984u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_017_e50010ea5d8a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=17, native=0x7bae9, path=e50010ea5d8a73bf, class=static_validated, events=241 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=118 */
    /* branch path: 0x7bafa:je:0;0x7bbdd:jne:0;0x7bbea:jne:1;0x7bbf8:jne:1;0x7bc05:jne:1;0x7bc7b:je:0;0x7bd0e:je:1 */
    /* top actual targets: 300@0xb6c36:238,140@0x94e5a:1,199@0xa0631:1,350@0xc1926:1 */
    /* operands: b0=var54(top=0x12:33.9%);b1=var37(top=0xff:35.9%);b2=enum4(0x3a:321,0x62:293,0x32:75,0x50:69);b3=var28(top=0x10:34.4%);b4=var12(top=0xa0:35.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x4365071cu - 0x69693e45u & 0x3d8b48f7u - 0x1b99cfe0u + 0x7ec4552au & 0x2b98de46u + 0x459da9b2u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32(state0 | (mask32(flags0 ^ 0x4365071cu)))) & (mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 | (mask32(flags0 ^ 0x4365071cu)))))) + (mask32(flags0 ^ 0x4365071cu)))))) ^ 0x95f9698u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_305_718cb0102314(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=305, native=0xb78b0, path=718cb0102314ed52, class=static_validated, events=240 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=10 */
    /* branch path: 0xb78db:je:1;0xb7924:je:1;0xb7978:jne:1;0xb7988:jne:1;0xb79a8:je:0;0xb79b7:je:0;0xb7a13:je:0;0xb7a4c:je:0 */
    /* top actual targets: 189@0x9e7af:36,199@0xa0631:31,307@0xb8064:17,215@0xa4609:13,28@0x7e390:13,338@0xbf128:13,258@0xadf2c:11,268@0xb0007:11 */
    /* operands: b0=var237(top=0x40:4.1%);b1=var225(top=0x09:3.5%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x0u) + state0;
    vm->flags = flags0 & state0 & 0x14763e0cu + 0x47fe8c0bu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_040_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=40, native=0x8115d, path=e3b0c44298fc1c14, class=static_validated, events=235 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: - */
    /* top actual targets: 114@0x90319:69,64@0x85059:21,66@0x855ff:21,215@0xa4609:20,340@0xbf435:20,297@0xb64d7:17,199@0xa0631:16,18@0x7be9b:15 */
    /* operands: b0=0xe8;b1=0x01;b2=0x3d;b3=0x01;b4=var77(top=0xb0:10.2%);b5=var73(top=0x03:10.1%) */
    vm->state = state0 & U16(vm->ip + 0x4u) ^ state0;
    vm->flags = flags0 - state0 ^ 0x3dd6f909u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x4u) ^ state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_297_f974a1d6cd96(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=297, native=0xb64d7, path=f974a1d6cd969c6b, class=static_validated, events=235 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xb64f9:je:1;0xb651f:je:1;0xb654f:je:0;0xb65c8:je:0;0xb65f5:je:1 */
    /* top actual targets: 333@0xbd8af:29,260@0xae90b:25,268@0xb0007:22,340@0xbf435:19,184@0x9d694:16,258@0xadf2c:13,301@0xb708d:10,347@0xc088d:10 */
    /* operands: b0=var222(top=0x89:5.5%);b1=var249(top=0x2e:3.1%);b2=var256(top=0xad:1.8%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 - 0x48220942u;
    vm->flags = flags0 + 0x283684b4u ^ 0x4a5a939au;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32(state0 - 0x48220942u)) | (mask32((mask32(flags0 + 0x283684b4u)) ^ 0x4a5a939au)))) ^ 0x6b7f38b7u)) + (mask32((mask32(U8(vm->ip + 0x0u) + (mask32((mask32((mask32(state0 - 0x48220942u)) | (mask32((mask32(flags0 + 0x283684b4u)) ^ 0x4a5a939au)))) ^ 0x6b7f38b7u)))) + (mask32(...#d4d3083a81fb; */
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_037_80dfe08b6a27(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=37, native=0x80685, path=80dfe08b6a278d90, class=static_validated, events=231 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=34 */
    /* branch path: 0x806c4:je:0;0x8075e:je:1;0x807c6:je:0;0x808c1:jne:1;0x808d1:jne:1;0x808ef:jne:0;0x8090d:jne:1;0x8099e:je:0;0x809da:je:0;0x80ac9:je:0 */
    /* top actual targets: 257@0xadbfd:228,352@0xc1ec4:3 */
    /* operands: b0=var141(top=0xc1:12.7%);b1=var150(top=0x3e:12.6%);b2=var27(top=0x00:78.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x504fc3du - 0x4eca0e49u;
    vm->flags = flags0 & 0x714eea75u + 0x53097984u ^ state0 - flags0 + 0x504fc3du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - (mask32(flags0 + 0x504fc3du)))) - 0x4eca0e49u)))) ^ 0x384e1c86u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_354_00cfcc3534d4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=354, native=0xc2241, path=00cfcc3534d46b1f, class=static_validated, events=231 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=97 */
    /* branch path: 0xc22d7:je:1 */
    /* top actual targets: 340@0xbf435:32,43@0x8173d:22,185@0x9d964:21,268@0xb0007:20,203@0xa1484:17,168@0x9aa83:16,307@0xb8064:15,64@0x85059:14 */
    /* operands: b0=var33(top=0xb9:13.4%);b1=enum2(0x00:1252,0x01:620) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = 0x0u;
    vm->flags = 0x0u;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_066_7777b50c0354(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=66, native=0x855ff, path=7777b50c03549a09, class=static_validated, events=225 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x85621:je:1;0x8566a:je:0;0x856f1:je:0;0x858d5:je:0 */
    /* top actual targets: 300@0xb6c36:23,64@0x85059:17,340@0xbf435:15,243@0xaab6a:14,258@0xadf2c:14,315@0xb9451:13,337@0xbec0e:11,114@0x90319:10 */
    /* operands: b0=var248(top=0x65:2.5%);b1=var253(top=0xa8:2.1%);b2=var114(top=0x3a:8.4%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ state0 & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - flags0 - 0x50170614u;
    vm->flags = flags0 - 0x50170614u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 & 0x2f6cb1f6u)) - (mask32(U8(vm->ip + 0x2u) ^ (mask32(state0 & 0x2f6cb1f6u)))))) ^ 0x745ff1d2u)) & 0x13de2cddu)) - (mask32((mask32((mask32(flags0 - 0x50170614u)) | 0x7167293au)) ^ 0x42a6ffd6u)))))) - 0x3cd18153u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_123_1a385d201ce5(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=123, native=0x91a59, path=1a385d201ce552ed, class=static_validated, events=223 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0x91a6a:je:1;0x91be2:jne:1;0x91c91:je:1;0x91cd7:je:0;0x91d11:je:1 */
    /* top actual targets: 18@0x7be9b:54,114@0x90319:21,347@0xc088d:18,199@0xa0631:16,185@0x9d964:11,189@0x9e7af:11,66@0x855ff:11,215@0xa4609:10 */
    /* operands: b0=var226(top=0x56:3.4%);b1=var237(top=0x96:3.3%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + 0x3da77425u - U16(vm->ip + 0x0u) - state0 + 0x3da77425u ^ 0x1603b0a9u;
    vm->flags = flags0 & 0x6e640fcbu + 0x6b73b101u + 0x2261b554u + 0x4cd877bfu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32(state0 + 0x3da77425u)))) ^ 0x1603b0a9u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_124_2ee011e83876(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=124, native=0x91e81, path=2ee011e838763ccd, class=static_validated, events=215 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=57 */
    /* branch path: 0x91eac:je:0;0x91efe:je:0 */
    /* top actual targets: 43@0x8173d:71,320@0xbada5:26,37@0x80685:15,114@0x90319:9,172@0x9b68a:6,28@0x7e390:6,307@0xb8064:6,52@0x833c7:6 */
    /* operands: b0=var166(top=0xc1:12.6%);b1=var177(top=0x7f:8.9%);b2=var34(top=0x00:43.4%);b3=var144(top=0x1b:7.3%);b4=var91(top=0x4f:12.2%);b5=var36(top=0xcb:25.7%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 - 0x7c31e804u ^ flags0 + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u;
    vm->flags = flags0 + 0x57b29524u - 0x2c2f20afu - state0 - 0x7c31e804u ^ flags0 + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x4u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - 0x7c31e804u)) ^ (mask32((mask32(flags0 + 0x57b29524u)) - 0x2c2f20afu)))) ^ 0x2bb25e3u)) | 0x50ef8024u)) + (mask32((mask32((mask32(flags0 + 0x57b29524u)) - 0x2c2f20afu)) - (mask32((mask32((mask32((mask32(state0 - 0x7c31e80u...#3edf825bbda7; */
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_217_dc7b945dcdb3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=217, native=0xa4b11, path=dc7b945dcdb3a561, class=static_validated, events=205 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=127 */
    /* branch path: 0xa4bfa:jne:0;0xa4c0e:jne:1;0xa4cf8:je:1 */
    /* top actual targets: 198@0xa037e:66,352@0xc1ec4:65,144@0x95887:64,108@0x8f24b:4,173@0x9ba74:3,160@0x994cf:1,256@0xad849:1,257@0xadbfd:1 */
    /* operands: b0=0x00;b1=var19(top=0x0c:29.8%);b2=var18(top=0x87:30.7%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 ^ flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) - (mask32(state0 ^ flags0)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_352_4a8edb2c1ffd(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=352, native=0xc1ec4, path=4a8edb2c1ffd3095, class=static_validated, events=204 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=14 */
    /* branch path: 0xc1f17:je:0;0xc1f5b:je:0;0xc1fba:jne:1;0xc1fc6:jne:1;0xc1fd3:jne:0;0xc1fe9:je:0;0xc2000:jne:1;0xc2027:je:0 */
    /* top actual targets: 189@0x9e7af:56,157@0x98a9a:52,196@0x9fbcd:10,333@0xbd8af:10,199@0xa0631:9,258@0xadf2c:7,66@0x855ff:7,337@0xbec0e:6 */
    /* operands: b0=var124(top=0x16:8.0%);b1=var55(top=0xdb:8.3%) */
    /* GPR+scratch branch profile: 0/912 unknown branches (0.0%): */
    vm->state = state0 & 0x31863366u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 & 0x31863366u)))) + 0x331dfc06u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_108_13f7c681a869(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=108, native=0x8f24b, path=13f7c681a86939e7, class=static_validated, events=200 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x8f368:jne:0;0x8f38e:jne:1;0x8f3a8:jne:1;0x8f438:jne:1;0x8f4f4:je:1;0x8f53a:je:0;0x8f55b:je:1 */
    /* top actual targets: 43@0x8173d:67,28@0x7e390:64,307@0xb8064:64,185@0x9d964:2,189@0x9e7af:1,297@0xb64d7:1,333@0xbd8af:1 */
    /* operands: b0=var228(top=0xce:5.1%);b1=var237(top=0x85:6.6%) */
    /* GPR+scratch branch profile: 0/917 unknown branches (0.0%): */
    vm->state = state0 + 0x11961dc7u ^ 0x5fa19cc7u - flags0;
    vm->flags = flags0 ^ 0x1d98f07au & 0x60594c67u - 0x2e3abdaeu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 + 0x11961dc7u)) ^ 0x5fa19cc7u)) - flags0)))) + 0x36f124dbu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_114_58b862ae748a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=114, native=0x90319, path=58b862ae748a5f39, class=static_validated, events=200 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=3 */
    /* branch path: 0x90334:je:1;0x903d9:je:0;0x904a4:je:1;0x904ed:je:1;0x9052b:je:1 */
    /* top actual targets: 66@0x855ff:38,20@0x7c62b:22,315@0xb9451:14,161@0x9975a:12,199@0xa0631:12,250@0xac802:9,305@0xb78b0:7,185@0x9d964:6 */
    /* operands: b0=var255(top=0x99:2.0%);b1=var198(top=0x77:2.9%);b2=var250(top=0xa6:2.9%);b3=var248(top=0xcf:2.6%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 & state0;
    vm->flags = flags0 & state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32((mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bfu)))) - 0x3dca653fu)) ^ 0x671da5f4u)) + state0)) & 0x48367f78u)))) ^ 0x63bb548fu)) + (mask32((mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5u...#8fb5e76f8e85; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_018_b2353417ac42(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=18, native=0x7be9b, path=b2353417ac420d7f, class=static_validated, events=198 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x7bed4:je:1;0x7befe:je:0;0x7bfe0:je:0;0x7c17e:je:0 */
    /* top actual targets: 347@0xc088d:29,114@0x90319:26,174@0x9bd8f:11,203@0xa1484:10,337@0xbec0e:9,189@0x9e7af:8,43@0x8173d:8,157@0x98a9a:6 */
    /* operands: b0=var149(top=0xa0:5.4%);b1=var200(top=0x0a:6.4%);b2=var165(top=0x3a:10.5%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 & (mask32((mask32(flags0 | 0x954df65u)) + 0x5b466f3bu)))) - 0x6382ce20u)) & (mask32((mask32(flags0 | 0x954df65u)) + 0x5b466f3bu)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_140_87e7b3551035(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, path=87e7b35510351d03, class=static_validated, events=197 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=41 */
    /* branch path: 0x94e85:je:1;0x94f11:je:0;0x94fab:je:0;0x94fdd:je:0;0x95000:je:0;0x9504c:je:0 */
    /* top actual targets: 190@0x9eacb:57,185@0x9d964:34,172@0x9b68a:16,189@0x9e7af:13,64@0x85059:13,196@0x9fbcd:12,297@0xb64d7:9,215@0xa4609:6 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x6f549f79u - state0;
    vm->flags = flags0 - 0x6f549f79u - state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 - (mask32((mask32(flags0 - (mask32(state0 | 0xf17c331u)))) | 0x16a9ca8cu)))))) ^ 0x6e089febu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_154_5b78998740ff(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=154, native=0x97ce6, path=5b78998740ff7852, class=static_validated, events=193 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=31 */
    /* branch path: 0x97d15:je:0;0x97d58:je:0 */
    /* top actual targets: 258@0xadf2c:64,297@0xb64d7:64,180@0x9cf32:25,91@0x8b6de:17,183@0x9d495:6,269@0xb045b:4,282@0xb3128:4,301@0xb708d:4 */
    /* operands: b0=var156(top=0xb3:7.0%);b1=var157(top=0x2d:5.8%);b2=var145(top=0x8f:5.7%);b3=var133(top=0x00:11.5%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 - U16(vm->ip + 0x2u) ^ state0 - flags0 + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu;
    vm->flags = flags0 + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 - (mask32(U16(vm->ip + 0x2u) ^ state0)))) - (mask32((mask32((mask32((mask32((mask32(flags0 + 0x60c316f3u)) & 0x56154bafu)) + 0xbc52893u)) & 0x57dbe69eu)) | 0x7ed018fbu)))) + (mask32((mask32((mask32((mask32((mask32((mask32(flags0 + 0x60c316f3u)) & 0x56154bafu)) + 0xbc5u...#164645fedfad; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_295_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=295, native=0xb60e0, path=e3b0c44298fc1c14, class=static_validated, events=190 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: - */
    /* top actual targets: 258@0xadf2c:32,28@0x7e390:27,66@0x855ff:27,64@0x85059:18,43@0x8173d:16,157@0x98a9a:14,196@0x9fbcd:13,114@0x90319:6 */
    /* operands: b0=0xe8;b1=0x01;b2=var22(top=0x02:41.3%);b3=var11(top=0xd4:23.8%);b4=0x10 */
    vm->state = state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) - 0x396ecbf2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_322_10e8593b486b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=322, native=0xbb3c9, path=10e8593b486b88a6, class=static_validated, events=188 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0xbb4c1:je:1 */
    /* top actual targets: 99@0x8c99a:64,220@0xa522e:14,49@0x82820:14,64@0x85059:14,347@0xc088d:13,91@0x8b6de:11,333@0xbd8af:10,180@0x9cf32:8 */
    /* operands: b0=var132(top=0x13:14.0%);b1=var123(top=0x00:19.2%);b2=var119(top=0x57:13.9%);b3=var104(top=0x96:14.7%) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 + U16(vm->ip + 0x0u) ^ flags0;
    vm->flags = flags0 - 0x58d38f71u + 0xdc60e0au ^ 0xb71b18du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32(state0 + (mask32(U16(vm->ip + 0x0u) ^ flags0)))) | 0x2d680d90u)) + 0x69cbe1a0u)))) + 0x7ba65dc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_256_9b71fe6ab7a5(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=256, native=0xad849, path=9b71fe6ab7a5d549, class=static_validated, events=184 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=8 */
    /* branch path: 0xad89b:jne:1;0xad8a7:jne:1;0xad8b4:jne:0;0xad8ca:je:0;0xad8e1:jne:1;0xad973:je:0;0xad9da:je:0;0xada6f:je:0 */
    /* top actual targets: 268@0xb0007:62,273@0xb11ca:19,332@0xbd36d:14,307@0xb8064:12,66@0x855ff:10,168@0x9aa83:9,199@0xa0631:7,260@0xae90b:5 */
    /* operands: b0=var155(top=0x3d:6.6%);b1=var156(top=0x27:6.6%) */
    /* GPR+scratch branch profile: 0/904 unknown branches (0.0%): */
    vm->state = state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au;
    vm->flags = flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au ^ state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32(state0 ^ 0x3e93f8dbu)) + 0x1734aabdu)) ^ (mask32((mask32(flags0 - (mask32(state0 ^ 0x3e93f8dbu)))) ^ 0x7a7f365au)))) | (mask32((mask32(flags0 - (mask32(state0 ^ 0x3e93f8dbu)))) ^ 0x7a7f365au)))) ^ 0x30de4dc1u)))) - 0x3817cdccu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_291_dc818c3d8f0d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=291, native=0xb4edd, path=dc818c3d8f0dea4a, class=static_validated, events=178 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=74 */
    /* branch path: 0xb4f4a:je:0;0xb4f8e:je:1;0xb4fd9:je:0;0xb5234:je:0 */
    /* top actual targets: 292@0xb540f:60,330@0xbc9b8:54,28@0x7e390:8,307@0xb8064:8,301@0xb708d:6,17@0x7bae9:5,269@0xb045b:5,345@0xc02e4:5 */
    /* operands: b0=var55(top=0x07:19.2%);b1=var70(top=0xc4:19.2%);b2=var58(top=0x3b:27.8%);b3=var67(top=0x8e:19.0%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ U16(vm->ip + 0x0u) - flags0 ^ 0x5acd2fau ^ 0x12648cbeu - flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu;
    vm->flags = flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32(state0 ^ flags0)) ^ (mask32(U16(vm->ip + 0x0u) - (mask32(flags0 ^ 0x12648cbeu)))))) - (mask32((mask32((mask32(flags0 ^ 0x12648cbeu)) ^ 0x2e91bd1cu)) + 0x610956a9u)))) & (mask32((mask32((mask32((mask32((mask32(flags0 ^ 0x12648cbeu)) ^ 0x2e91bd1cu)) | 0x55d764bbu)) ^ 0...#e630c000dc4d; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_180_8d3726fc6281(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=180, native=0x9cf32, path=8d3726fc6281a26d, class=static_validated, events=175 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=35 */
    /* branch path: 0x9cfd4:je:0;0x9cffa:je:0 */
    /* top actual targets: 168@0x9aa83:21,269@0xb045b:20,79@0x885b0:20,157@0x98a9a:18,337@0xbec0e:17,258@0xadf2c:8,333@0xbd8af:8,347@0xc088d:7 */
    /* operands: b0=var20(top=0x3b:19.2%);b1=var11(top=0x0b:23.6%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x3f2841fbu + state0 ^ 0x417a1c15u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + 0x7920fa05u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_114_8af1b9e4f1a2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=114, native=0x90319, path=8af1b9e4f1a2f90c, class=static_validated, events=168 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x90334:je:1;0x903d9:je:1;0x904a4:je:0;0x904ed:je:1;0x9052b:je:1 */
    /* top actual targets: 185@0x9d964:34,158@0x99029:26,215@0xa4609:15,307@0xb8064:12,18@0x7be9b:10,196@0x9fbcd:9,20@0x7c62b:9,26@0x7dbbb:6 */
    /* operands: b0=var255(top=0x99:2.0%);b1=var198(top=0x77:2.9%);b2=var250(top=0xa6:2.9%);b3=var248(top=0xcf:2.6%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 & state0;
    vm->flags = flags0 & state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bfu)))) + state0)) & 0x48367f78u)))) ^ 0x63bb548fu)) + (mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bfu)))) + state0)))) & 0x292b555du)) ^ (mask32((mask32(U16(vm->ip + 0x2u) + (...#47086c370ce0; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_144_b6537cd5d26d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=144, native=0x95887, path=b6537cd5d26d3942, class=static_validated, events=168 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=16 */
    /* branch path: 0x959a6:jne:1;0x959b1:jne:1;0x959bd:jne:0;0x959d3:je:0;0x959e9:jne:1;0x95a08:je:0 */
    /* top actual targets: 154@0x97ce6:63,268@0xb0007:13,28@0x7e390:10,185@0x9d964:8,332@0xbd36d:8,350@0xc1926:6,140@0x94e5a:5,172@0x9b68a:5 */
    /* operands: b0=var32(top=0x87:10.1%);b1=var11(top=0x99:16.2%) */
    /* GPR+scratch branch profile: 0/661 unknown branches (0.0%): */
    vm->state = state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    vm->flags = flags0 - 0x387407b9u + 0x2cd392b6u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 & 0x61f88068u)) & 0x1d022eeeu)) ^ 0x6367b3ddu)))) - 0x2f1222e2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_192_84d195541895(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=192, native=0x9f00a, path=84d195541895864c, class=static_validated, events=168 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0x9f0c6:je:1;0x9f163:je:1;0x9f2a8:jne:1;0x9f2ce:jne:1;0x9f2ea:jne:1;0x9f309:jne:0;0x9f512:je:1 */
    /* top actual targets: 108@0x8f24b:72,198@0xa037e:26,256@0xad849:26,257@0xadbfd:16,173@0x9ba74:12,160@0x994cf:10,352@0xc1ec4:4,144@0x95887:2 */
    /* operands: b0=var148(top=0x4e:11.2%);b1=var139(top=0xd7:10.9%);b2=0x3d;b3=0x01;b4=var23(top=0x00:90.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0 + flags0 + flags0 + state0 + flags0 ^ 0x5d641cd7u;
    vm->flags = flags0 + state0 + flags0 ^ 0x5d641cd7u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 + flags0)) + (mask32(flags0 + (mask32((mask32(state0 + flags0)) ^ 0x5d641cd7u)))))) + (mask32(flags0 + (mask32((mask32(state0 + flags0)) ^ 0x5d641cd7u)))))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_198_de24412b1496(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=198, native=0xa037e, path=de24412b149602c5, class=static_validated, events=159 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=10 */
    /* branch path: 0xa0391:je:1;0xa04a9:jne:1;0xa04b6:jne:1;0xa04c4:jne:1;0xa04f1:jne:0 */
    /* top actual targets: 185@0x9d964:33,18@0x7be9b:33,90@0x8b334:11,332@0xbd36d:8,340@0xbf435:7,199@0xa0631:6,258@0xadf2c:5,66@0x855ff:5 */
    /* operands: b0=var217(top=0xe3:5.4%);b1=var220(top=0x54:5.3%) */
    /* GPR+scratch branch profile: 0/654 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u - U16(vm->ip + 0x0u) - state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u ^ 0x3fe99379u;
    vm->flags = flags0 + 0x15b2dfa5u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 + (mask32(flags0 - 0x5e173fc7u)))) - 0x3cd02127u)) + (mask32(flags0 + 0x15b2dfa5u)))))) ^ 0x3fe99379u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_119_4c73699f6323(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=119, native=0x90ebc, path=4c73699f63238b6f, class=static_validated, events=158 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=99 */
    /* branch path: 0x90f2a:je:1 */
    /* top actual targets: 347@0xc088d:64,297@0xb64d7:15,64@0x85059:15,28@0x7e390:14,18@0x7be9b:13,215@0xa4609:12,340@0xbf435:9,114@0x90319:6 */
    /* operands: b0=0xe8;b1=0x01;b2=0x3d;b3=0x01;b4=var72(top=0xb9:10.3%);b5=var72(top=0x8f:10.0%) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x1d17883du ^ 0x5928e32au;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x4u) ^ state0)) + 0x7e7974a5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_239_28ac4d307c83(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=239, native=0xa991e, path=28ac4d307c83df98, class=static_validated, events=155 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=70 */
    /* branch path: 0xa9967:je:0;0xa99c8:je:0;0xa9b87:je:1 */
    /* top actual targets: 297@0xb64d7:61,199@0xa0631:19,28@0x7e390:15,320@0xbada5:15,185@0x9d964:11,172@0x9b68a:4,189@0x9e7af:4,291@0xb4edd:4 */
    /* operands: b0=var140(top=0x2a:5.5%);b1=var65(top=0x02:11.2%);b2=var36(top=0xc1:13.6%);b3=var23(top=0x21:15.7%);b4=var72(top=0xbe:8.8%);b5=var29(top=0xa6:21.0%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu & U32(vm->ip + 0x0u) - state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu - U16(vm->ip + 0x4u) + state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu & U32(vm->ip + 0x0u) - state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu - 0x3650a0aeu;
    vm->flags = flags0 & state0 + 0x40a7aa16u + flags0 + 0x627d85abu + 0x29b54516u & 0x66aaa5eu ^ 0x7efd4127u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x4u) + (mask32((mask32((mask32((mask32(state0 + 0x40a7aa16u)) + flags0)) & 0x39d16b3eu)) & (mask32(U32(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 + 0x40a7aa16u)) + flags0)) & 0x39d16b3eu)))))))) - 0x3650a0aeu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_020_954a153a601a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=20, native=0x7c62b, path=954a153a601a1e13, class=static_validated, events=154 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=5 */
    /* branch path: 0x7c649:je:1;0x7c702:je:1;0x7c858:jne:1 */
    /* top actual targets: 181@0x9d13f:29,189@0x9e7af:19,66@0x855ff:16,347@0xc088d:11,114@0x90319:10,258@0xadf2c:9,337@0xbec0e:9,185@0x9d964:8 */
    /* operands: b0=0xe8;b1=0x01;b2=var220(top=0xa5:4.7%);b3=var173(top=0x77:9.9%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x58f71b08u & 0x17188826u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 | 0x180e72f2u)))) - 0x36332ac8u)) - (mask32(flags0 & 0x1fa2014fu)))) | 0x38e67f26u)) - flags0)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_346_3b28db7f7819(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=346, native=0xc0535, path=3b28db7f78198053, class=static_validated, events=151 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0xc056a:je:1;0xc05d7:je:1;0xc0628:je:1;0xc064e:je:0;0xc06a9:jne:1;0xc06ba:jne:1;0xc06dc:je:0;0xc06ec:je:0;0xc074c:je:1 */
    /* top actual targets: 114@0x90319:18,28@0x7e390:18,168@0x9aa83:14,258@0xadf2c:12,66@0x855ff:12,347@0xc088d:9,64@0x85059:9,157@0x98a9a:8 */
    /* operands: b0=var232(top=0x22:3.1%);b1=var243(top=0x94:3.1%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    vm->flags = flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u - 0x3d02d701u - 0x727be02cu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ (mask32(flags0 ^ 0x45fbcef1u)))))) + 0x7f7eb061u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_301_eed7c9ccfebc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=301, native=0xb708d, path=eed7c9ccfebc34e6, class=static_validated, events=149 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xb7140:je:0;0xb71c5:je:0;0xb720a:je:1;0xb726f:je:1;0xb72a8:je:0;0xb73b9:je:1 */
    /* top actual targets: 352@0xc1ec4:45,198@0xa037e:37,160@0x994cf:31,257@0xadbfd:9,173@0x9ba74:8,108@0x8f24b:7,144@0x95887:7,256@0xad849:5 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var115(top=0xdf:19.9%);b4=var115(top=0x18:6.4%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ U16(vm->ip + 0x3u) - state0 & flags0 - 0x2c0febdfu;
    vm->flags = flags0 + 0x34c21ec8u + 0x4bcb296bu - 0x72148c24u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32(state0 & flags0)))) - 0x2c0febdfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_160_9fbaf1bff4b8(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=160, native=0x994cf, path=9fbaf1bff4b8248b, class=static_validated, events=147 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=11 */
    /* branch path: 0x99521:jne:1;0x9952e:jne:1;0x9953c:jne:0;0x99554:je:0;0x9956c:jne:1;0x995b7:je:1 */
    /* top actual targets: 64@0x85059:66,18@0x7be9b:18,258@0xadf2c:7,340@0xbf435:7,189@0x9e7af:6,43@0x8173d:6,66@0x855ff:6,268@0xb0007:4 */
    /* operands: b0=var52(top=0x79:6.7%);b1=var12(top=0x2f:18.6%) */
    /* GPR+scratch branch profile: 0/652 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x559d4d7bu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 | 0x67f1fed6u)) & 0x256c03d7u)) | 0x72df8f7au)) & 0x5a1beb81u)))) - 0x4cf19f11u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_160_f0b499c4c681(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=160, native=0x994cf, path=f0b499c4c681c814, class=static_validated, events=145 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x99521:jne:1;0x9952e:jne:1;0x9953c:jne:0;0x99554:je:0;0x9956c:jne:1;0x995b7:je:0 */
    /* top actual targets: 189@0x9e7af:64,196@0x9fbcd:64,347@0xc088d:4,185@0x9d964:3,28@0x7e390:2,333@0xbd8af:2,345@0xc02e4:2,268@0xb0007:1 */
    /* operands: b0=var52(top=0x79:6.7%);b1=var12(top=0x2f:18.6%) */
    /* GPR+scratch branch profile: 0/652 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x559d4d7bu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 | 0x67f1fed6u)) & 0x256c03d7u)) | 0x72df8f7au)) & 0x5a1beb81u)))) - 0x4cf19f11u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_114_51eab4ff7ea0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=114, native=0x90319, path=51eab4ff7ea038c9, class=static_validated, events=141 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x90334:je:1;0x903d9:je:0;0x904a4:je:0;0x904ed:je:1;0x9052b:je:1 */
    /* top actual targets: 287@0xb45d2:27,332@0xbd36d:26,43@0x8173d:12,154@0x97ce6:9,66@0x855ff:9,28@0x7e390:6,196@0x9fbcd:5,157@0x98a9a:4 */
    /* operands: b0=var255(top=0x99:2.0%);b1=var198(top=0x77:2.9%);b2=var250(top=0xa6:2.9%);b3=var248(top=0xcf:2.6%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 & state0;
    vm->flags = flags0 & state0;
    return r;
}

static VMOpResult path_entry_030_2c3a503057ba(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=2c3a503057ba4a40, class=static_validated, events=138 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=12 */
    /* branch path: 0x7e868:je:0;0x7e896:je:0;0x7e8b1:je:0;0x7e913:je:0;0x7e92e:je:0;0x7eb45:je:0 */
    /* top actual targets: 307@0xb8064:31,91@0x8b6de:18,183@0x9d495:16,180@0x9cf32:15,172@0x9b68a:11,333@0xbd8af:11,185@0x9d964:10,49@0x82820:10 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | (mask32(flags0 & 0x614d4b17u)))) + 0x64fd160cu)))) + 0x5903fc84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_310_c0f3368511d5(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=310, native=0xb8556, path=c0f3368511d55f61, class=static_validated, events=138 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=73 */
    /* branch path: 0xb8595:je:1;0xb8617:je:1 */
    /* top actual targets: 165@0x9a24c:57,354@0xc2241:49,171@0x9b4b3:32 */
    /* operands: b0=0xe8;b1=0x01;b2=enum3(0xa5:666,0x62:566,0xab:382);b3=enum2(0x00:1048,0x01:566) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->flags = flags0 ^ 0x595c3465u + 0x102a61feu ^ 0x6856726u ^ 0x622d58d3u;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_269_6901ad8af83f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=269, native=0xb045b, path=6901ad8af83fa830, class=static_validated, events=137 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=27 */
    /* branch path: 0xb061d:je:0;0xb0723:je:1 */
    /* top actual targets: 108@0x8f24b:40,352@0xc1ec4:39,173@0x9ba74:20,144@0x95887:18,160@0x994cf:7,257@0xadbfd:6,198@0xa037e:5,256@0xad849:2 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var122(top=0xf7:15.2%);b4=var137(top=0xbe:17.0%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 & state0 & 0x6f7fff69u & flags0 & state0;
    vm->flags = flags0 & state0 + 0x46ecf942u + 0x6cc73334u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + (mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 & state0)))) & 0x6f7fff69u)) & (mask32(flags0 & state0)))) | (mask32((mask32(flags0 & state0)) ^ 0x4f60a287u)))))) + 0x4faa382u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_208_0be4b13bf60b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=208, native=0xa2361, path=0be4b13bf60bd4a5, class=static_validated, events=136 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=45 */
    /* branch path: 0xa237a:je:1;0xa23bd:je:1;0xa24d5:je:1;0xa2510:je:1;0xa26dc:jne:0;0xa270b:jne:1;0xa272d:jne:1;0xa2755:jne:1 */
    /* top actual targets: 172@0x9b68a:64,49@0x82820:64,118@0x90c23:3,189@0x9e7af:2,340@0xbf435:2,203@0xa1484:1 */
    /* operands: b0=enum3(0x3a:404,0x62:335,0x50:63);b1=var62(top=0xa7:15.7%);b2=var77(top=0xf1:15.7%);b3=var29(top=0xa5:28.8%);b4=var52(top=0xe2:19.6%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    vm->flags = flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    /* r.slot = (mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32(state0 + (mask32((mask32((mask32((mask32((mask32(flags0 ^ (mask32(state0 + 0x7ad87935u)))) ^ 0x39b69246u)) ^ (mask32(state0 | 0x7a909dc0u)))) ^ 0x58abcfc7u)) | 0x1477a707u)))) - (mask32((mask32((mask32((mask32(flags0 ^ (mask32(state0 + 0x7ad87935u)))) ^ 0x39b69u...#9f40b863da92; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_256_421c06cce516(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=256, native=0xad849, path=421c06cce5162555, class=static_validated, events=136 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xad89b:jne:0;0xad8a7:jne:1;0xad8b4:jne:1;0xad8e1:jne:1;0xad973:je:0;0xad9da:je:0;0xada6f:je:0 */
    /* top actual targets: 199@0xa0631:64,258@0xadf2c:64,307@0xb8064:3,157@0x98a9a:1,168@0x9aa83:1,268@0xb0007:1,300@0xb6c36:1,66@0x855ff:1 */
    /* operands: b0=var155(top=0x3d:6.6%);b1=var156(top=0x27:6.6%) */
    /* GPR+scratch branch profile: 0/904 unknown branches (0.0%): */
    vm->state = state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au;
    vm->flags = flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au ^ state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au;
    return r;
}

static VMOpResult path_entry_129_88af73056853(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=129, native=0x92f21, path=88af7305685357cd, class=static_validated, events=134 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=128 */
    /* branch path: 0x93007:je:1 */
    /* top actual targets: 215@0xa4609:64,99@0x8c99a:64,199@0xa0631:2,146@0x96407:1,172@0x9b68a:1,217@0xa4b11:1,300@0xb6c36:1 */
    /* operands: b0=var10(top=0xf0:46.0%);b1=var10(top=0x06:46.0%);b2=enum2(0x62:137,0x32:2) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0 + state0 & flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 & (mask32(flags0 | 0x77ecded8u)))) + 0x14f8aa88u)) + 0x5f119f37u)) + (mask32(flags0 + (mask32((mask32((mask32((mask32(state0 & (mask32(flags0 | 0x77ecded8u)))) + 0x14f8aa88u)) + 0x5f119f37u)) - 0x42c8b2fau)))))) & 0x63b683du)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_154_77c4db6928c8(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=154, native=0x97ce6, path=77c4db6928c83d65, class=static_validated, events=134 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=16 */
    /* branch path: 0x97d15:je:0;0x97d58:je:1 */
    /* top actual targets: 185@0x9d964:77,180@0x9cf32:20,203@0xa1484:13,105@0x8e6b4:4,183@0x9d495:4,18@0x7be9b:4,28@0x7e390:2,297@0xb64d7:2 */
    /* operands: b0=var156(top=0xb3:7.0%);b1=var157(top=0x2d:5.8%);b2=var145(top=0x8f:5.7%);b3=var133(top=0x00:11.5%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 - U16(vm->ip + 0x2u) ^ state0 - flags0 + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu;
    vm->flags = flags0 + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 - (mask32(U16(vm->ip + 0x2u) ^ state0)))) - (mask32((mask32((mask32(flags0 + 0x60c316f3u)) & 0x56154bafu)) | 0x7ed018fbu)))) + (mask32((mask32((mask32((mask32(flags0 + 0x60c316f3u)) & 0x56154bafu)) | 0x7ed018fbu)) ^ 0x18426e67u)))))) - 0x6535d747u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_257_71946a671fa6(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=257, native=0xadbfd, path=71946a671fa6f0c7, class=static_validated, events=133 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xadc1e:je:0;0xadcc0:jne:0;0xadccc:jne:1;0xadcd9:jne:1;0xadd06:jne:1;0xadd6a:je:0;0xadda4:je:1 */
    /* top actual targets: 273@0xb11ca:64,340@0xbf435:64,350@0xc1926:2,18@0x7be9b:1,203@0xa1484:1,333@0xbd8af:1 */
    /* operands: b0=var32(top=0xe7:10.9%);b1=var43(top=0xb5:9.7%) */
    /* GPR+scratch branch profile: 0/918 unknown branches (0.0%): */
    vm->state = state0 - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_208_b204364d3b79(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=208, native=0xa2361, path=b204364d3b79fdd3, class=static_validated, events=130 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=46 */
    /* branch path: 0xa237a:je:0;0xa23bd:je:0;0xa24d5:je:0;0xa2510:je:0;0xa26dc:jne:0;0xa270b:jne:1;0xa272d:jne:1;0xa2755:jne:1 */
    /* top actual targets: 340@0xbf435:64,79@0x885b0:64,99@0x8c99a:2 */
    /* operands: b0=enum3(0x3a:404,0x62:335,0x50:63);b1=var62(top=0xa7:15.7%);b2=var77(top=0xf1:15.7%);b3=var29(top=0xa5:28.8%);b4=var52(top=0xe2:19.6%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    vm->flags = flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    /* r.slot = (mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32(state0 + (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(flags0 - 0x24472ebau)) ^ 0x60ff2036u)) + 0x7627b830u)) - 0x42fb6768u)) ^ (mask32(state0 + 0x7ad87935u)))) ^ 0x39b69246u)) ^ (mask32(state0 | 0x7a909dc0u)))) ^ 0x58abcfc7u)) | 0x1477au...#fb4d75de8e9e; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_200_b0da9afbed11(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=200, native=0xa0a9e, path=b0da9afbed11b699, class=static_validated, events=128 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=38 */
    /* branch path: 0xa0ae2:je:0;0xa0b3f:je:0;0xa0bb1:je:0;0xa0bf9:je:1 */
    /* top actual targets: 43@0x8173d:15,3@0x78c77:13,49@0x82820:13,319@0xba72f:11,79@0x885b0:9,18@0x7be9b:6,168@0x9aa83:5,203@0xa1484:5 */
    /* operands: b0=var132(top=0xa4:13.0%);b1=var124(top=0xc1:9.3%);b2=var103(top=0x10:19.7%);b3=var102(top=0x5f:26.1%);b4=var28(top=0x48:16.1%);b5=var11(top=0x09:19.9%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 + flags0 - flags0 ^ 0x64193a1au ^ 0x227666a1u + U32(vm->ip + 0x0u) ^ flags0 & 0x21af07eu;
    vm->flags = flags0 & 0x21af07eu;
    r.slot = (uint32_t)(U16(vm->ip + 0x4u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_237_b6812e27a723(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=b6812e27a7233063, class=static_validated, events=128 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=5 */
    /* branch path: 0xa8efb:je:0;0xa8f3c:je:1;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:1;0xa9025:jne:0;0xa90d7:je:1;0xa9292:je:1 */
    /* top actual targets: 160@0x994cf:28,144@0x95887:26,256@0xad849:21,173@0x9ba74:16,257@0xadbfd:14,108@0x8f24b:9,198@0xa037e:9,352@0xc1ec4:5 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) ^ (mask32((mask32((mask32(state0 - (mask32(flags0 ^ 0x22900c8u)))) - (mask32(flags0 ^ 0x8178b71u)))) - 0x4813dbcu)))) - 0x4f4105f2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_310_edf2aaace7a1(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=310, native=0xb8556, path=edf2aaace7a1b424, class=static_validated, events=128 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=55 */
    /* branch path: 0xb8595:je:0;0xb8617:je:1 */
    /* top actual targets: 165@0x9a24c:56,354@0xc2241:42,171@0x9b4b3:30 */
    /* operands: b0=0xe8;b1=0x01;b2=enum3(0xa5:666,0x62:566,0xab:382);b3=enum2(0x00:1048,0x01:566) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->flags = flags0 ^ 0x595c3465u + 0x102a61feu ^ 0x6856726u ^ 0x622d58d3u;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_319_810a97207860(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=319, native=0xba72f, path=810a972078607739, class=static_validated, events=128 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xba74a:je:0;0xba78b:je:1;0xba89f:je:0;0xba975:jne:1;0xba983:jne:1;0xba992:jne:0;0xba9a0:jne:1;0xbaa0a:je:0;0xbab08:je:0 */
    /* top actual targets: 160@0x994cf:128 */
    /* operands: b0=0x3d;b1=0x01;b2=var42(top=0xe6:28.4%);b3=var47(top=0x2e:17.5%);b4=var21(top=0x00:79.0%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_123_e1fad68b7f37(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=123, native=0x91a59, path=e1fad68b7f3778ca, class=static_validated, events=127 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x91a6a:je:1;0x91be2:jne:1;0x91c91:je:0;0x91cd7:je:0;0x91d11:je:0 */
    /* top actual targets: 50@0x82e76:47,337@0xbec0e:21,64@0x85059:8,114@0x90319:7,340@0xbf435:7,347@0xc088d:7,261@0xaeda2:4,185@0x9d964:3 */
    /* operands: b0=var226(top=0x56:3.4%);b1=var237(top=0x96:3.3%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + 0x3da77425u - U16(vm->ip + 0x0u) - state0 + 0x3da77425u ^ 0x1603b0a9u;
    vm->flags = flags0 & 0x6e640fcbu + 0x6b73b101u + 0x2261b554u + 0x4cd877bfu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32(state0 + 0x3da77425u)))) ^ 0x1603b0a9u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_333_d227bd696970(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=333, native=0xbd8af, path=d227bd6969706e50, class=static_validated, events=127 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0xbd8d9:je:1;0xbd9ec:je:0;0xbda3c:je:0 */
    /* top actual targets: 215@0xa4609:13,258@0xadf2c:11,305@0xb78b0:11,243@0xaab6a:9,26@0x7dbbb:7,18@0x7be9b:6,185@0x9d964:5,28@0x7e390:5 */
    /* operands: b0=var64(top=0x83:8.1%);b1=var50(top=0xf9:6.4%);b2=var17(top=0x68:18.1%);b3=enum2(0x00:10031,0x01:2163) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ state0;
    vm->flags = flags0 ^ state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32(flags0 ^ state0)) | 0x37ccc6eau)))) - 0x61e56767u)) & (mask32(flags0 ^ state0)))) + (mask32((mask32(flags0 ^ state0)) | 0x71cc1ee8u)))) | 0x569ecec3u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_237_d1a4d3040fe2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=d1a4d3040fe2d0f7, class=static_validated, events=123 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0xa8efb:je:0;0xa8f3c:je:0;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:1;0xa9025:jne:0;0xa90d7:je:1;0xa9292:je:1 */
    /* top actual targets: 352@0xc1ec4:76,144@0x95887:15,198@0xa037e:9,160@0x994cf:8,256@0xad849:5,257@0xadbfd:5,108@0x8f24b:4,173@0x9ba74:1 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) ^ (mask32((mask32((mask32(state0 - (mask32(flags0 ^ 0x22900c8u)))) - (mask32((mask32(flags0 + 0x3fbeaa1du)) ^ 0x8178b71u)))) - 0x4813dbcu)))) - 0x4f4105f2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_179_5d3cc1137073(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=179, native=0x9ca8d, path=5d3cc113707387d4, class=static_validated, events=120 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=49 */
    /* branch path: 0x9cad3:je:0;0x9cc3c:je:0;0x9cd28:jne:1;0x9cd50:jne:1;0x9cd62:jne:1;0x9cd9f:jne:0 */
    /* top actual targets: 268@0xb0007:22,337@0xbec0e:22,203@0xa1484:13,43@0x8173d:13,79@0x885b0:8,49@0x82820:7,172@0x9b68a:6,196@0x9fbcd:4 */
    /* operands: b0=enum4(0x3a:406,0x50:128,0x32:125,0x62:78);b1=var79(top=0x9e:21.0%);b2=var79(top=0x35:21.6%);b3=var62(top=0x64:17.6%);b4=var72(top=0xfe:17.0%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x7ef33dc5u & 0x7f151ac8u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32(state0 | flags0)) ^ (mask32(U16(vm->ip + 0x3u) ^ (mask32(flags0 + 0x7ef33dc5u)))))))) - 0x263c3887u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_030_1ea9b38d2eb4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=1ea9b38d2eb43e53, class=static_validated, events=118 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=17 */
    /* branch path: 0x7e868:je:0;0x7e896:je:0;0x7e8b1:je:0;0x7e913:je:1;0x7e92e:je:1;0x7eb45:je:1 */
    /* top actual targets: 192@0x9f00a:39,203@0xa1484:38,157@0x98a9a:8,91@0x8b6de:7,114@0x90319:5,183@0x9d495:5,307@0xb8064:3,196@0x9fbcd:2 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | flags0)) + 0x64fd160cu)))) + 0x5903fc84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_020_f2702c2e2c8b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=20, native=0x7c62b, path=f2702c2e2c8b820b, class=static_validated, events=113 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0x7c649:je:1;0x7c702:je:0;0x7c858:jne:1 */
    /* top actual targets: 114@0x90319:29,64@0x85059:16,258@0xadf2c:13,189@0x9e7af:9,297@0xb64d7:6,307@0xb8064:6,337@0xbec0e:6,18@0x7be9b:5 */
    /* operands: b0=0xe8;b1=0x01;b2=var220(top=0xa5:4.7%);b3=var173(top=0x77:9.9%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x58f71b08u & 0x17188826u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 | 0x180e72f2u)))) - 0x36332ac8u)) - (mask32((mask32((mask32(flags0 ^ 0x58f71b08u)) & 0x17188826u)) & 0x1fa2014fu)))) | 0x38e67f26u)) - (mask32((mask32(flags0 ^ 0x58f71b08u)) & 0x17188826u)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_254_121148e630ad(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=254, native=0xad32c, path=121148e630ade341, class=static_validated, events=110 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0xad53c:je:0;0xad598:je:0 */
    /* top actual targets: 91@0x8b6de:27,180@0x9cf32:17,196@0x9fbcd:17,64@0x85059:13,183@0x9d495:11,28@0x7e390:5,79@0x885b0:5,301@0xb708d:4 */
    /* operands: b0=var150(top=0x74:15.5%);b1=var153(top=0x9c:13.1%);b2=var24(top=0x42:14.4%);b3=var12(top=0x47:31.7%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 + flags0 - U16(vm->ip + 0x0u) ^ state0 + flags0;
    vm->flags = flags0 - 0x35a18ac8u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) - 0x228a41a2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_345_2d9de867d680(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=345, native=0xc02e4, path=2d9de867d680c76f, class=static_validated, events=109 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=15 */
    /* branch path: 0xc0300:je:1;0xc037b:je:0;0xc03a7:je:1 */
    /* top actual targets: 52@0x833c7:33,192@0x9f00a:11,114@0x90319:9,189@0x9e7af:6,196@0x9fbcd:6,168@0x9aa83:4,18@0x7be9b:3,215@0xa4609:3 */
    /* operands: b0=var164(top=0x69:13.6%);b1=var150(top=0x3f:13.6%);b2=var165(top=0x11:13.6%);b3=var164(top=0x1c:13.6%);b4=var162(top=0xc4:13.6%);b5=var157(top=0x34:13.6%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 + U32(vm->ip + 0x2u) ^ state0 + flags0 + U16(vm->ip + 0x0u) + state0 + U32(vm->ip + 0x2u) ^ state0 + flags0;
    vm->flags = flags0 & 0xe71dcd4u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + (mask32(state0 + (mask32((mask32(U32(vm->ip + 0x2u) ^ state0)) + flags0)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_003_9d0c60f8ad22(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=3, native=0x78c77, path=9d0c60f8ad22292d, class=static_validated, events=108 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=23 */
    /* branch path: 0x78c93:je:0;0x78cd4:je:1;0x79161:je:1 */
    /* top actual targets: 160@0x994cf:23,173@0x9ba74:22,256@0xad849:12,108@0x8f24b:11,144@0x95887:11,257@0xadbfd:11,352@0xc1ec4:11,198@0xa037e:7 */
    /* operands: b0=var20(top=0x19:19.7%);b1=var60(top=0x26:9.2%);b2=0x00;b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x1c03cc82u - flags0;
    vm->flags = flags0 ^ 0x1f2b12e0u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) - 0x1c03cc82u)) - flags0)) | 0x38c49877u)) - 0x742d9511u)) + 0x4ddaed7bu)))) + 0x4bc0d288u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_003_f456fd2897d8(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=3, native=0x78c77, path=f456fd2897d83326, class=static_validated, events=106 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=13 */
    /* branch path: 0x78c93:je:1;0x78cd4:je:0;0x79161:je:1 */
    /* top actual targets: 173@0x9ba74:20,352@0xc1ec4:19,160@0x994cf:17,144@0x95887:14,256@0xad849:14,108@0x8f24b:9,198@0xa037e:8,257@0xadbfd:5 */
    /* operands: b0=var20(top=0x19:19.7%);b1=var60(top=0x26:9.2%);b2=0x00;b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x1c03cc82u - flags0;
    vm->flags = flags0 ^ 0x1f2b12e0u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) - 0x1c03cc82u)) - flags0)) | 0x38c49877u)) - 0x742d9511u)) + 0x4ddaed7bu)))) + 0x4bc0d288u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_140_0831c016cdc8(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, path=0831c016cdc8d67e, class=static_validated, events=104 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=43 */
    /* branch path: 0x94e85:je:1;0x94f11:je:0;0x94fab:je:0;0x94fdd:je:0;0x95000:je:0;0x9504c:je:1 */
    /* top actual targets: 307@0xb8064:61,28@0x7e390:15,185@0x9d964:6,151@0x97311:4,168@0x9aa83:4,340@0xbf435:4,203@0xa1484:3,215@0xa4609:2 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x6f549f79u - state0;
    vm->flags = flags0 - 0x6f549f79u - state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 - (mask32((mask32(flags0 - (mask32(state0 | 0xf17c331u)))) | 0x16a9ca8cu)))))) ^ 0x6e089febu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_122_fbbf0c4194ed(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=122, native=0x9170d, path=fbbf0c4194ed2eeb, class=static_validated, events=103 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=103 */
    /* branch path: 0x9183d:jne:1;0x9184b:jne:1;0x9185a:jne:1;0x91872:jne:0;0x91935:je:0 */
    /* top actual targets: 210@0xa2da3:36,145@0x95b5c:16,258@0xadf2c:13,114@0x90319:12,246@0xab427:12,316@0xb987b:7,75@0x873fc:6,334@0xbdd18:1 */
    /* operands: b0=var38(top=0x63:30.3%);b1=var40(top=0x71:30.1%);b2=0x3d;b3=0x01;b4=var37(top=0xd7:30.1%) */
    /* GPR+scratch branch profile: 0/605 unknown branches (0.0%): */
    vm->state = state0 + flags0 - U16(vm->ip + 0x0u) + state0 + flags0 + 0x1af9be18u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 + flags0)))) + 0x1af9be18u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_354_d69e7237559a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=354, native=0xc2241, path=d69e7237559ac86b, class=static_validated, events=103 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=31 */
    /* branch path: 0xc22d7:je:0 */
    /* top actual targets: 157@0x98a9a:27,189@0x9e7af:27,168@0x9aa83:17,340@0xbf435:5,154@0x97ce6:4,28@0x7e390:4,347@0xc088d:4,199@0xa0631:3 */
    /* operands: b0=var33(top=0xb9:13.4%);b1=enum2(0x00:1252,0x01:620) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = 0x0u;
    vm->flags = 0x0u;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_123_6c1f6f694e20(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=123, native=0x91a59, path=6c1f6f694e202ea6, class=static_validated, events=99 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0x91a6a:je:1;0x91be2:jne:1;0x91c91:je:0;0x91cd7:je:0;0x91d11:je:1 */
    /* top actual targets: 258@0xadf2c:17,66@0x855ff:13,185@0x9d964:12,50@0x82e76:11,337@0xbec0e:9,307@0xb8064:7,199@0xa0631:6,189@0x9e7af:5 */
    /* operands: b0=var226(top=0x56:3.4%);b1=var237(top=0x96:3.3%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + 0x3da77425u - U16(vm->ip + 0x0u) - state0 + 0x3da77425u ^ 0x1603b0a9u;
    vm->flags = flags0 & 0x6e640fcbu + 0x6b73b101u + 0x2261b554u + 0x4cd877bfu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32(state0 + 0x3da77425u)))) ^ 0x1603b0a9u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_037_ded58e16470e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=37, native=0x80685, path=ded58e16470e6196, class=static_validated, events=97 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0x806c4:je:0;0x8075e:je:0;0x807c6:je:0;0x808c1:jne:1;0x808d1:jne:1;0x808ef:jne:1;0x8090d:jne:0;0x8099e:je:0;0x809da:je:0;0x80ac9:je:1 */
    /* top actual targets: 160@0x994cf:41,173@0x9ba74:18,144@0x95887:12,198@0xa037e:10,108@0x8f24b:9,352@0xc1ec4:5,257@0xadbfd:2 */
    /* operands: b0=var141(top=0xc1:12.7%);b1=var150(top=0x3e:12.6%);b2=var27(top=0x00:78.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x504fc3du - 0x4eca0e49u;
    vm->flags = flags0 & 0x714eea75u + 0x53097984u ^ state0 - flags0 + 0x504fc3du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - (mask32(flags0 + 0x504fc3du)))) - 0x4eca0e49u)))) ^ 0x384e1c86u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_082_c9d038ee6902(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=82, native=0x8920e, path=c9d038ee69022ef7, class=static_validated, events=95 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=94 */
    /* branch path: 0x8922d:je:0;0x8925b:je:1;0x89293:je:1;0x892c8:je:0;0x89338:je:0 */
    /* top actual targets: 99@0x8c99a:48,333@0xbd8af:47 */
    /* operands: b0=var11(top=0x3e:45.1%);b1=var9(top=0xb1:45.1%);b2=0x62 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + flags0 + 0x1bc90d20u;
    vm->flags = flags0 + 0x1bc90d20u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 + flags0)))) + 0x5cc5e4d8u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_092_a78244aaaf9f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=92, native=0x8b8cb, path=a78244aaaf9f074f, class=static_validated, events=95 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=84 */
    /* branch path: 0x8b8e4:je:0;0x8ba76:je:0;0x8ba9f:je:0;0x8bb1c:je:0;0x8bb58:je:0 */
    /* top actual targets: 282@0xb3128:65,48@0x82477:5,154@0x97ce6:4,74@0x86d43:4,83@0x8947b:4,215@0xa4609:3,17@0x7bae9:2,105@0x8e6b4:1 */
    /* operands: b0=var27(top=0xa4:24.1%);b1=var13(top=0x34:22.1%);b2=var66(top=0xc5:20.8%);b3=var66(top=0x6f:20.8%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x2u) ^ state0 ^ flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 & (mask32((mask32(U16(vm->ip + 0x2u) ^ state0)) ^ (mask32(flags0 | 0x39591837u)))))) | (mask32(flags0 | 0x39591837u)))) | 0x1002fee7u)) + 0x2efa2a96u)))) + 0x604aa997u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_300_4d693d0a1589(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=300, native=0xb6c36, path=4d693d0a15894860, class=static_validated, events=95 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xb6c57:je:1;0xb6c87:je:0;0xb6d00:je:1;0xb6f5c:je:0 */
    /* top actual targets: 185@0x9d964:18,220@0xa522e:18,333@0xbd8af:18,337@0xbec0e:18,297@0xb64d7:9,301@0xb708d:5,17@0x7bae9:2,203@0xa1484:2 */
    /* operands: b0=var134(top=0x12:10.9%);b1=var135(top=0x85:10.1%);b2=var96(top=0x60:10.2%);b3=var122(top=0x42:10.0%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + state0 & 0x2b7e7713u & 0x515f6307u + flags0 & 0x742354du + 0x2ff05a2bu;
    vm->flags = flags0 & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    return r;
}

static VMOpResult path_entry_291_a45cbc7ff009(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=291, native=0xb4edd, path=a45cbc7ff0090f2e, class=static_validated, events=94 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=36 */
    /* branch path: 0xb4f4a:je:0;0xb4f8e:je:0;0xb4fd9:je:0;0xb5234:je:0 */
    /* top actual targets: 18@0x7be9b:55,79@0x885b0:16,140@0x94e5a:7,66@0x855ff:3,273@0xb11ca:2,307@0xb8064:2,330@0xbc9b8:2,121@0x91379:1 */
    /* operands: b0=var55(top=0x07:19.2%);b1=var70(top=0xc4:19.2%);b2=var58(top=0x3b:27.8%);b3=var67(top=0x8e:19.0%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ U16(vm->ip + 0x0u) - flags0 ^ 0x5acd2fau ^ 0x12648cbeu - flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu;
    vm->flags = flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32(state0 ^ flags0)) ^ (mask32(U16(vm->ip + 0x0u) - (mask32((mask32(flags0 ^ 0x5acd2fau)) ^ 0x12648cbeu)))))) - (mask32((mask32((mask32((mask32(flags0 ^ 0x5acd2fau)) ^ 0x12648cbeu)) ^ 0x2e91bd1cu)) + 0x610956a9u)))) & (mask32((mask32((mask32((mask32((mask32((mask32(fla...#f51d194d0649; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_148_7ae8cd365d3d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=148, native=0x96b6e, path=7ae8cd365d3d8af2, class=static_validated, events=90 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=90 */
    /* branch path: 0x96c9a:jne:1;0x96ca8:jne:1;0x96cb7:jne:0;0x96cd9:jne:1;0x96d8c:je:0 */
    /* top actual targets: 160@0x994cf:70,173@0x9ba74:10,108@0x8f24b:4,352@0xc1ec4:4,144@0x95887:2 */
    /* operands: b0=0x3d;b1=0x01;b2=var16(top=0xad:44.4%);b3=var12(top=0x79:53.5%);b4=var15(top=0x56:47.9%) */
    /* GPR+scratch branch profile: 0/525 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32(state0 & flags0)))) ^ 0x502e5379u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_043_9e91a389bb6a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=43, native=0x8173d, path=9e91a389bb6a0180, class=static_validated, events=86 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x81762:je:0;0x817a0:je:0;0x81818:je:1 */
    /* top actual targets: 26@0x7dbbb:22,347@0xc088d:16,220@0xa522e:12,129@0x92f21:4,215@0xa4609:3,337@0xbec0e:3,18@0x7be9b:2,200@0xa0a9e:2 */
    /* operands: b0=var251(top=0x17:2.2%);b1=var251(top=0x74:5.0%);b2=var252(top=0xa3:3.3%);b3=var244(top=0x00:10.4%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 ^ U16(vm->ip + 0x2u) ^ state0;
    vm->flags = flags0 ^ 0x542b3101u & 0x494c0852u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ (mask32(U16(vm->ip + 0x2u) ^ state0)))))) - 0x64d373dcu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_079_62f69f49161a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=79, native=0x885b0, path=62f69f49161a8ee2, class=static_validated, events=85 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=8 */
    /* branch path: 0x8860f:je:1;0x886fb:je:0;0x887f1:je:1 */
    /* top actual targets: 160@0x994cf:29,257@0xadbfd:27,198@0xa037e:9,144@0x95887:7,108@0x8f24b:6,352@0xc1ec4:3,173@0x9ba74:2,256@0xad849:2 */
    /* operands: b0=var64(top=0x9e:15.9%);b1=var86(top=0x28:12.3%);b2=0x3d;b3=0x01;b4=0x00 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u;
    vm->flags = flags0 ^ 0xc7e744fu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x623ccce4u)))) & 0xd4da920u)) | (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x225dfa31u)))) - 0x6110d031u)) ^ 0x3fcb6e9au)) ^ (mask32(flags0 ^ 0xc7e744fu)))) + 0x60a9dba6u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_119_73da1b628e20(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=119, native=0x90ebc, path=73da1b628e200f11, class=static_validated, events=85 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=29 */
    /* branch path: 0x90f2a:je:0 */
    /* top actual targets: 337@0xbec0e:19,340@0xbf435:17,28@0x7e390:14,64@0x85059:14,347@0xc088d:6,189@0x9e7af:4,114@0x90319:3,215@0xa4609:3 */
    /* operands: b0=0xe8;b1=0x01;b2=0x3d;b3=0x01;b4=var72(top=0xb9:10.3%);b5=var72(top=0x8f:10.0%) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x1d17883du ^ 0x5928e32au;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x4u) ^ state0)) + 0x7e7974a5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_052_e530d65417b7(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=52, native=0x833c7, path=e530d65417b7204a, class=static_validated, events=83 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x834bc:jne:1;0x834ca:jne:1;0x834d9:jne:0;0x834ee:jne:1;0x835bd:je:0 */
    /* top actual targets: 64@0x85059:65,196@0x9fbcd:13,28@0x7e390:2,18@0x7be9b:1,334@0xbdd18:1,347@0xc088d:1 */
    /* operands: b0=var48(top=0x82:23.2%);b1=var45(top=0xb0:23.9%);b2=var40(top=0x47:23.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + U16(vm->ip + 0x0u) + state0 ^ 0x7823b2dau;
    return r;
}

static VMOpResult path_entry_179_21983abea23f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=179, native=0x9ca8d, path=21983abea23f320f, class=static_validated, events=81 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=11 */
    /* branch path: 0x9cad3:je:0;0x9cc3c:je:0;0x9cd28:jne:1;0x9cd50:jne:1;0x9cd62:jne:0;0x9cd9f:jne:1 */
    /* top actual targets: 157@0x98a9a:8,3@0x78c77:8,43@0x8173d:6,18@0x7be9b:5,268@0xb0007:5,307@0xb8064:5,64@0x85059:5,172@0x9b68a:4 */
    /* operands: b0=enum4(0x3a:406,0x50:128,0x32:125,0x62:78);b1=var79(top=0x9e:21.0%);b2=var79(top=0x35:21.6%);b3=var62(top=0x64:17.6%);b4=var72(top=0xfe:17.0%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x7ef33dc5u & 0x7f151ac8u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32(state0 | flags0)) ^ (mask32(U16(vm->ip + 0x3u) ^ (mask32(flags0 + 0x7ef33dc5u)))))))) - 0x263c3887u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_346_b2d30c72cdaa(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=346, native=0xc0535, path=b2d30c72cdaa0b05, class=static_validated, events=81 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=5 */
    /* branch path: 0xc056a:je:1;0xc05d7:je:0;0xc0628:je:1;0xc064e:je:0;0xc06a9:jne:1;0xc06ba:jne:1;0xc06dc:je:0;0xc06ec:je:0;0xc074c:je:0 */
    /* top actual targets: 28@0x7e390:12,157@0x98a9a:10,340@0xbf435:8,167@0x9a8d2:6,43@0x8173d:6,114@0x90319:4,185@0x9d964:4,189@0x9e7af:4 */
    /* operands: b0=var232(top=0x22:3.1%);b1=var243(top=0x94:3.1%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    vm->flags = flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u - 0x3d02d701u - 0x727be02cu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ (mask32((mask32((mask32(flags0 ^ 0x3f746ab3u)) ^ 0x3f5501a6u)) ^ 0x45fbcef1u)))))) + 0x7f7eb061u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_043_e9d08a79d9eb(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=43, native=0x8173d, path=e9d08a79d9eba2a1, class=static_validated, events=80 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x81762:je:0;0x817a0:je:1;0x81818:je:1 */
    /* top actual targets: 258@0xadf2c:11,28@0x7e390:7,66@0x855ff:6,297@0xb64d7:5,346@0xc0535:5,18@0x7be9b:4,215@0xa4609:4,199@0xa0631:3 */
    /* operands: b0=var251(top=0x17:2.2%);b1=var251(top=0x74:5.0%);b2=var252(top=0xa3:3.3%);b3=var244(top=0x00:10.4%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 ^ U16(vm->ip + 0x2u) ^ state0;
    vm->flags = flags0 ^ 0x542b3101u & 0x494c0852u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ (mask32(U16(vm->ip + 0x2u) ^ state0)))))) - 0x64d373dcu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_030_eaa0e2d5033a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=eaa0e2d5033a3455, class=static_validated, events=79 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0x7e868:je:1;0x7e896:je:0;0x7e8b1:je:0;0x7e913:je:0;0x7e92e:je:1;0x7eb45:je:1 */
    /* top actual targets: 203@0xa1484:25,192@0x9f00a:23,157@0x98a9a:11,183@0x9d495:4,196@0x9fbcd:3,91@0x8b6de:3,185@0x9d964:2,337@0xbec0e:2 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | flags0)) + 0x64fd160cu)))) + 0x5903fc84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_140_37f6663c73c0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, path=37f6663c73c012c8, class=static_validated, events=79 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=17 */
    /* branch path: 0x94e85:je:1;0x94f11:je:0;0x94fab:je:0;0x94fdd:je:0;0x95000:je:1;0x9504c:je:1 */
    /* top actual targets: 347@0xc088d:13,337@0xbec0e:8,320@0xbada5:7,297@0xb64d7:6,64@0x85059:6,66@0x855ff:6,151@0x97311:4,168@0x9aa83:4 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x6f549f79u - state0;
    vm->flags = flags0 - 0x6f549f79u - state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 - (mask32((mask32(flags0 - (mask32(state0 | 0xf17c331u)))) | 0x16a9ca8cu)))))) ^ 0x6e089febu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_088_2f26e461d122(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=88, native=0x8aa14, path=2f26e461d122ec9a, class=static_validated, events=77 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=61 */
    /* branch path: 0x8aa9c:je:0;0x8acf1:jne:1;0x8ad18:jne:1;0x8ad2e:jne:0;0x8ad3a:jne:1;0x8aeac:je:0 */
    /* top actual targets: 352@0xc1ec4:61,173@0x9ba74:8,256@0xad849:6,108@0x8f24b:2 */
    /* operands: b0=var11(top=0x41:43.0%);b1=var11(top=0xeb:43.0%);b2=var11(top=0xa6:43.0%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) + (mask32((mask32(state0 | flags0)) - 0x1c9cfceau)))) ^ 0x415462f5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_320_8d912487d9d4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=320, native=0xbada5, path=8d912487d9d4ff9c, class=static_validated, events=77 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=14 */
    /* branch path: 0xbae90:jne:1;0xbae9e:jne:1;0xbaead:jne:1;0xbaebb:jne:0;0xbb012:je:0 */
    /* top actual targets: 257@0xadbfd:16,256@0xad849:14,198@0xa037e:13,108@0x8f24b:12,144@0x95887:10,160@0x994cf:6,173@0x9ba74:3,352@0xc1ec4:3 */
    /* operands: b0=var24(top=0x00:83.6%);b1=0x3d;b2=0x01;b3=var107(top=0xac:9.1%);b4=var106(top=0x0c:6.1%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 & flags0 - flags0 - 0x7e143884u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32(state0 & flags0)) - flags0)) - 0x7e143884u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_201_e0921d3affc3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=201, native=0xa0dca, path=e0921d3affc3a863, class=static_validated, events=74 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa0f21:je:0;0xa0fa7:je:0;0xa10cd:jne:1;0xa10e7:jne:1;0xa10f6:jne:0;0xa1117:jne:1;0xa1190:je:1;0xa124a:je:0 */
    /* top actual targets: 256@0xad849:66,160@0x994cf:4,198@0xa037e:2,173@0x9ba74:1,257@0xadbfd:1 */
    /* operands: b0=0x3d;b1=0x01;b2=enum5(0xa1:257,0x39:76,0xb9:4,0x69:2,0x41:2);b3=enum4(0xc5:261,0xc8:74,0xc4:4,0xc6:2);b4=var11(top=0xe1:75.1%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ 0x1940e110u ^ 0x5efd26e6u & flags0 ^ 0x71fea721u ^ flags0 & 0x3f73d5c3u;
    vm->flags = flags0 & state0 ^ flags0 ^ 0x1940e110u ^ 0x5efd26e6u & flags0 ^ 0x71fea721u ^ flags0 & 0x3f73d5c3u;
    return r;
}

static VMOpResult path_entry_319_63730cfda0ff(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=319, native=0xba72f, path=63730cfda0ffb9fb, class=static_validated, events=73 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xba74a:je:1;0xba78b:je:1;0xba89f:je:0;0xba975:jne:1;0xba983:jne:1;0xba992:jne:0;0xba9a0:jne:1;0xbaa0a:je:0;0xbab08:je:0 */
    /* top actual targets: 144@0x95887:64,160@0x994cf:5,108@0x8f24b:4 */
    /* operands: b0=0x3d;b1=0x01;b2=var42(top=0xe6:28.4%);b3=var47(top=0x2e:17.5%);b4=var21(top=0x00:79.0%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_091_85e125aa3669(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=91, native=0x8b6de, path=85e125aa366913b1, class=static_validated, events=72 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=17 */
    /* branch path: 0x8b6ee:je:1 */
    /* top actual targets: 79@0x885b0:7,203@0xa1484:6,83@0x8947b:6,3@0x78c77:5,215@0xa4609:4,340@0xbf435:4,347@0xc088d:4,18@0x7be9b:3 */
    /* operands: b0=var142(top=0x78:5.9%);b1=var143(top=0x04:6.4%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 ^ U16(vm->ip + 0x0u) ^ state0;
    vm->flags = flags0 ^ state0 ^ 0x3f03cfb3u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_301_df3ac6b87011(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=301, native=0xb708d, path=df3ac6b87011e3cf, class=static_validated, events=72 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xb7140:je:0;0xb71c5:je:0;0xb720a:je:1;0xb726f:je:0;0xb72a8:je:0;0xb73b9:je:1 */
    /* top actual targets: 173@0x9ba74:45,108@0x8f24b:7,144@0x95887:7,257@0xadbfd:5,160@0x994cf:2,198@0xa037e:2,256@0xad849:2,352@0xc1ec4:2 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var115(top=0xdf:19.9%);b4=var115(top=0x18:6.4%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ U16(vm->ip + 0x3u) - state0 & flags0 - 0x2c0febdfu;
    vm->flags = flags0 + 0x34c21ec8u + 0x4bcb296bu - 0x72148c24u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32(state0 & flags0)))) - 0x2c0febdfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_349_91e884abd6c4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=349, native=0xc140b, path=91e884abd6c40602, class=static_validated, events=72 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xc164c:je:0;0xc173f:je:0;0xc177b:je:0;0xc17c3:je:1 */
    /* top actual targets: 28@0x7e390:12,18@0x7be9b:7,282@0xb3128:7,49@0x82820:6,345@0xc02e4:5,17@0x7bae9:4,350@0xc1926:4,3@0x78c77:3 */
    /* operands: b0=var68(top=0x00:50.9%);b1=var71(top=0xad:51.3%);b2=var20(top=0x88:53.7%);b3=var11(top=0x00:59.2%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0 + 0x5b8191bu - 0x48cf2626u - 0x7444487fu ^ state0 & flags0;
    return r;
}

static VMOpResult path_entry_094_c3dbc7318668(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=94, native=0x8bd69, path=c3dbc73186689cb3, class=static_validated, events=71 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=71 */
    /* branch path: 0x8bfbc:jne:1;0x8bfc9:jne:1;0x8bff0:jne:0;0x8c003:jne:1;0x8c0f2:je:0;0x8c1e9:je:0 */
    /* top actual targets: 173@0x9ba74:68,160@0x994cf:3 */
    /* operands: b0=enum8(0x8b:64,0x19:10,0x57:4,0xa1:3,0x01:3,0xd9:3);b1=enum7(0xa6:68,0x3e:10,0x3d:3,0xbe:3,0xc6:3,0xe7:3);b2=enum6(0xeb:67,0xa2:10,0x32:6,0x2b:4,0x6b:3,0x29:1);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/444 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ state0 + 0x551fa912u & 0x7af574e5u + flags0 ^ state0 + 0x551fa912u;
    vm->flags = flags0 ^ state0 + 0x551fa912u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) ^ (mask32((mask32((mask32(state0 & (mask32((mask32(flags0 ^ (mask32(state0 + 0x551fa912u)))) & 0x7af574e5u)))) + (mask32(flags0 ^ (mask32(state0 + 0x551fa912u)))))) | 0x23f8268cu)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_250_2a741755722e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=250, native=0xac802, path=2a741755722e5bae, class=static_validated, events=71 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=71 */
    /* branch path: 0xac869:je:0;0xac9ef:je:1;0xaca3e:je:1 */
    /* top actual targets: 43@0x8173d:68,196@0x9fbcd:3 */
    /* operands: b0=0x62;b1=enum6(0xd8:64,0x9e:4,0x99:3,0xf9:2,0x12:1,0x28:1);b2=enum6(0xc4:64,0x09:4,0x77:3,0x01:2,0x52:1,0x14:1) */
    /* GPR+scratch branch profile: 0/216 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 + flags0 ^ flags0;
    vm->flags = flags0 & 0x68a0e4dau + 0x40c8070au - 0x1d26ca9du - 0xc88b898u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 ^ flags0)) + flags0)) ^ (mask32(flags0 | 0x75c2d7adu)))) + 0x3d28c7fcu)) - 0xb911f97u)))) + 0x71ad6fc6u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_140_6bc8436c10d6(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, path=6bc8436c10d6a24d, class=static_validated, events=70 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=14 */
    /* branch path: 0x94e85:je:0;0x94f11:je:0;0x94fab:je:0;0x94fdd:je:0;0x95000:je:1;0x9504c:je:1 */
    /* top actual targets: 340@0xbf435:15,199@0xa0631:11,258@0xadf2c:6,189@0x9e7af:4,319@0xba72f:4,172@0x9b68a:3,192@0x9f00a:3,337@0xbec0e:3 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x6f549f79u - state0;
    vm->flags = flags0 - 0x6f549f79u - state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 - (mask32((mask32((mask32(flags0 - 0x6f549f79u)) - (mask32(state0 | 0xf17c331u)))) | 0x16a9ca8cu)))))) ^ 0x6e089febu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_179_46e84a014b0f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=179, native=0x9ca8d, path=46e84a014b0ff9a5, class=static_validated, events=70 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=68 */
    /* branch path: 0x9cad3:je:0;0x9cc3c:je:0;0x9cd28:jne:0;0x9cd50:jne:1;0x9cd62:jne:1;0x9cd9f:jne:1 */
    /* top actual targets: 18@0x7be9b:64,114@0x90319:3,99@0x8c99a:3 */
    /* operands: b0=enum4(0x3a:406,0x50:128,0x32:125,0x62:78);b1=var79(top=0x9e:21.0%);b2=var79(top=0x35:21.6%);b3=var62(top=0x64:17.6%);b4=var72(top=0xfe:17.0%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x7ef33dc5u & 0x7f151ac8u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32(state0 | flags0)) ^ (mask32(U16(vm->ip + 0x3u) ^ (mask32(flags0 + 0x7ef33dc5u)))))))) - 0x263c3887u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_173_7c3ef1df81b0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=173, native=0x9ba74, path=7c3ef1df81b040da, class=static_validated, events=69 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x9bb4a:jne:0;0x9bb57:jne:1;0x9bb65:jne:1;0x9bb91:jne:1;0x9bbb5:je:0;0x9bbfa:je:0 */
    /* top actual targets: 333@0xbd8af:64,199@0xa0631:1,300@0xb6c36:1,30@0x7e849:1,337@0xbec0e:1,64@0x85059:1 */
    /* operands: b0=var117(top=0xaf:7.6%);b1=var32(top=0x0b:13.4%) */
    /* GPR+scratch branch profile: 0/804 unknown branches (0.0%): */
    vm->state = state0 + 0x5eced92du ^ 0x456d7018u;
    vm->flags = flags0 - state0 + 0x5eced92du;
    return r;
}

static VMOpResult path_entry_030_eaabefc5557b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=eaabefc5557bf4e4, class=static_validated, events=68 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=8 */
    /* branch path: 0x7e868:je:0;0x7e896:je:0;0x7e8b1:je:1;0x7e913:je:0;0x7e92e:je:1;0x7eb45:je:1 */
    /* top actual targets: 203@0xa1484:26,192@0x9f00a:25,91@0x8b6de:5,180@0x9cf32:3,157@0x98a9a:2,114@0x90319:1,185@0x9d964:1,196@0x9fbcd:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | flags0)) + 0x64fd160cu)))) + 0x5903fc84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_282_110886fc03b9(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=282, native=0xb3128, path=110886fc03b9bb84, class=static_validated, events=68 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=65 */
    /* branch path: 0xb3145:je:0;0xb3178:je:0;0xb31f8:je:1;0xb3253:je:0;0xb3455:jne:0;0xb348a:jne:1;0xb34a1:jne:1;0xb34b6:jne:1 */
    /* top actual targets: 280@0xb2661:62,18@0x7be9b:2,273@0xb11ca:2,199@0xa0631:1,28@0x7e390:1 */
    /* operands: b0=var62(top=0x2d:24.2%);b1=var45(top=0x22:24.2%);b2=var79(top=0x05:23.8%);b3=var73(top=0x57:23.8%);b4=enum3(0x3a:103,0x62:87,0x50:79) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    vm->flags = flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u ^ 0x171f71e1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ (mask32((mask32((mask32(flags0 - 0x54c8658au)) & 0x259f380du)) - 0x334721c0u)))))) ^ 0x644d2bc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_037_194221f5813b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=37, native=0x80685, path=194221f5813b7238, class=static_validated, events=67 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x806c4:je:1;0x8075e:je:1;0x807c6:je:0;0x808c1:jne:1;0x808d1:jne:1;0x808ef:jne:1;0x8090d:jne:0;0x8099e:je:0;0x809da:je:0;0x80ac9:je:1 */
    /* top actual targets: 256@0xad849:35,160@0x994cf:15,257@0xadbfd:4,352@0xc1ec4:4,108@0x8f24b:3,173@0x9ba74:3,144@0x95887:2,198@0xa037e:1 */
    /* operands: b0=var141(top=0xc1:12.7%);b1=var150(top=0x3e:12.6%);b2=var27(top=0x00:78.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x504fc3du - 0x4eca0e49u;
    vm->flags = flags0 & 0x714eea75u + 0x53097984u ^ state0 - flags0 + 0x504fc3du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - (mask32(flags0 + 0x504fc3du)))) - 0x4eca0e49u)))) ^ 0x384e1c86u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_108_328fde791392(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=108, native=0x8f24b, path=328fde791392e830, class=static_validated, events=67 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x8f368:jne:0;0x8f38e:jne:1;0x8f3a8:jne:1;0x8f438:jne:1;0x8f4f4:je:0;0x8f53a:je:0;0x8f55b:je:1 */
    /* top actual targets: 340@0xbf435:64,258@0xadf2c:3 */
    /* operands: b0=var228(top=0xce:5.1%);b1=var237(top=0x85:6.6%) */
    /* GPR+scratch branch profile: 0/917 unknown branches (0.0%): */
    vm->state = state0 + 0x11961dc7u ^ 0x5fa19cc7u - flags0;
    vm->flags = flags0 ^ 0x1d98f07au & 0x60594c67u - 0x2e3abdaeu;
    return r;
}

static VMOpResult path_entry_198_b2dfe23c48db(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=198, native=0xa037e, path=b2dfe23c48dbc369, class=static_validated, events=66 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0xa0391:je:1;0xa04a9:jne:1;0xa04b6:jne:1;0xa04c4:jne:0;0xa04da:je:0;0xa04f1:jne:1 */
    /* top actual targets: 300@0xb6c36:38,350@0xc1926:7,258@0xadf2c:6,157@0x98a9a:2,28@0x7e390:2,333@0xbd8af:2,64@0x85059:2,66@0x855ff:2 */
    /* operands: b0=var217(top=0xe3:5.4%);b1=var220(top=0x54:5.3%) */
    /* GPR+scratch branch profile: 0/654 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u - U16(vm->ip + 0x0u) - state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u ^ 0x3fe99379u;
    vm->flags = flags0 + 0x15b2dfa5u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 + (mask32(flags0 - 0x5e173fc7u)))) - 0x3cd02127u)) + (mask32(flags0 + 0x15b2dfa5u)))))) ^ 0x3fe99379u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_118_c682e41fb0d4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=118, native=0x90c23, path=c682e41fb0d4fdce, class=static_validated, events=65 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x90c71:je:0;0x90c94:je:0;0x90d19:je:0 */
    /* top actual targets: 217@0xa4b11:64,99@0x8c99a:1 */
    /* operands: b0=0x62;b1=var12(top=0xa6:64.3%);b2=var12(top=0x2b:64.3%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x1u) ^ state0 - 0x52d3aa4u;
    vm->flags = flags0 ^ 0x41355bdbu + 0x392f8e74u + 0x860cb96u & 0x276ac31au - 0x5cecff55u;
    return r;
}

static VMOpResult path_entry_128_19d51e80d17f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=128, native=0x9299b, path=19d51e80d17f4b6e, class=static_validated, events=65 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x929dd:je:0;0x92a2e:je:1;0x92a94:je:0;0x92cb8:jne:0;0x92cdb:jne:1;0x92ceb:jne:1;0x92d07:jne:1;0x92d9f:je:1 */
    /* top actual targets: 3@0x78c77:64,82@0x8920e:1 */
    /* operands: b0=enum4(0x62:840,0x3a:175,0x50:118,0x32:25);b1=var10(top=0x79:57.3%);b2=var17(top=0x04:24.0%);b3=var77(top=0xb7:22.4%);b4=var50(top=0x94:25.1%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 & flags0 & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u;
    vm->flags = flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x7ee52541u;
    return r;
}

static VMOpResult path_entry_190_253e76a61958(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=190, native=0x9eacb, path=253e76a61958e7ba, class=static_validated, events=65 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=65 */
    /* branch path: 0x9eae9:je:0;0x9ebff:jne:1;0x9ec18:jne:1;0x9ec2d:jne:0;0x9ec3b:jne:1;0x9ecd6:je:0 */
    /* top actual targets: 257@0xadbfd:57,144@0x95887:4,352@0xc1ec4:4 */
    /* operands: b0=0x3d;b1=0x01;b2=var10(top=0x00:55.8%);b3=var9(top=0xf7:57.1%);b4=var10(top=0x01:55.8%) */
    /* GPR+scratch branch profile: 0/486 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 + 0x20f4b909u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + state0)) + 0x20f4b909u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_208_c98768020b64(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=208, native=0xa2361, path=c98768020b6486fc, class=static_validated, events=65 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=23 */
    /* branch path: 0xa237a:je:1;0xa23bd:je:1;0xa24d5:je:0;0xa2510:je:0;0xa26dc:jne:0;0xa270b:jne:1;0xa272d:jne:1;0xa2755:jne:1 */
    /* top actual targets: 297@0xb64d7:64,129@0x92f21:1 */
    /* operands: b0=enum3(0x3a:404,0x62:335,0x50:63);b1=var62(top=0xa7:15.7%);b2=var77(top=0xf1:15.7%);b3=var29(top=0xa5:28.8%);b4=var52(top=0xe2:19.6%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    vm->flags = flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    /* r.slot = (mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32(state0 + (mask32((mask32((mask32((mask32((mask32(flags0 ^ (mask32(state0 + 0x7ad87935u)))) ^ 0x39b69246u)) ^ (mask32(state0 | 0x7a909dc0u)))) ^ 0x58abcfc7u)) | 0x1477a707u)))) - (mask32((mask32((mask32((mask32(flags0 ^ (mask32(state0 + 0x7ad87935u)))) ^ 0x39b69u...#381a82da1018; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_222_3c5c7e2ac616(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=222, native=0xa5f3c, path=3c5c7e2ac6164709, class=static_validated, events=65 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=64 */
    /* branch path: 0xa5fbf:je:1;0xa600d:je:1;0xa6222:jne:0;0xa622f:jne:1;0xa6250:jne:1;0xa6276:jne:1 */
    /* top actual targets: 220@0xa522e:64,307@0xb8064:1 */
    /* operands: b0=var60(top=0x10:25.6%);b1=var60(top=0xf8:25.2%);b2=var58(top=0xd9:25.2%);b3=var46(top=0x4e:25.2%);b4=enum4(0x3a:97,0x50:89,0x62:67,0x32:1) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)) & (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)))) + flags0)))) | 0x39a63024u)) + (mask32(flags0 + 0x17d780cau)))))) - 0x29e369dfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_83fc504d18fb(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=83fc504d18fb94cb, class=static_validated, events=65 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=65 */
    /* branch path: 0xbc9d3:je:1;0xbca25:je:1;0xbcaa5:je:0;0xbcabc:je:0;0xbcaf6:je:0;0xbcd08:jne:0;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:1 */
    /* top actual targets: 18@0x7be9b:62,349@0xc140b:2,3@0x78c77:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_070_864fa49bd935(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=70, native=0x8610e, path=864fa49bd935a147, class=static_validated, events=64 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x86334:jne:0;0x8634a:jne:1;0x8635f:jne:1;0x8636c:jne:1;0x8648a:je:0;0x865a3:je:0 */
    /* top actual targets: 108@0x8f24b:64 */
    /* operands: b0=var93(top=0x8b:15.8%);b1=var143(top=0xb7:16.0%);b2=var23(top=0x00:58.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ flags0 - flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0;
    vm->flags = flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0;
    return r;
}

static VMOpResult path_entry_127_191047779859(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=127, native=0x926c3, path=1910477798590f8b, class=static_validated, events=64 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x92773:jne:1;0x92782:jne:1;0x92798:jne:0;0x927ad:jne:1;0x92862:je:0 */
    /* top actual targets: 144@0x95887:64 */
    /* operands: b0=enum3(0xdf:256,0x7b:64,0x99:64);b1=enum3(0x22:256,0xc7:64,0xa1:64);b2=enum3(0xc9:256,0x79:64,0x2b:64);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0;
    return r;
}

static VMOpResult path_entry_198_0519bbb8248a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=198, native=0xa037e, path=0519bbb8248a91ec, class=static_validated, events=64 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=3 */
    /* branch path: 0xa0391:je:1;0xa04a9:jne:0;0xa04b6:jne:1;0xa04c4:jne:1;0xa04f1:jne:1 */
    /* top actual targets: 215@0xa4609:31,337@0xbec0e:31,258@0xadf2c:1,64@0x85059:1 */
    /* operands: b0=var217(top=0xe3:5.4%);b1=var220(top=0x54:5.3%) */
    /* GPR+scratch branch profile: 0/654 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u - U16(vm->ip + 0x0u) - state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u ^ 0x3fe99379u;
    vm->flags = flags0 + 0x15b2dfa5u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 + (mask32(flags0 - 0x5e173fc7u)))) - 0x3cd02127u)) + (mask32(flags0 + 0x15b2dfa5u)))))) ^ 0x3fe99379u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_257_79d49ec65a67(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=257, native=0xadbfd, path=79d49ec65a6724a0, class=static_validated, events=64 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xadc1e:je:0;0xadcc0:jne:1;0xadccc:jne:1;0xadcd9:jne:0;0xadcf0:je:0;0xadd06:jne:1;0xadd6a:je:0;0xadda4:je:1 */
    /* top actual targets: 18@0x7be9b:7,185@0x9d964:6,340@0xbf435:5,140@0x94e5a:4,239@0xa991e:4,266@0xaf8af:4,337@0xbec0e:4,124@0x91e81:3 */
    /* operands: b0=var32(top=0xe7:10.9%);b1=var43(top=0xb5:9.7%) */
    /* GPR+scratch branch profile: 0/918 unknown branches (0.0%): */
    vm->state = state0 - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32(state0 - 0x509f61c9u)) + 0x1b9def5u)) - 0x7d4ca123u)) | 0x1d2af87u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_280_fa9f86757a33(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=280, native=0xb2661, path=fa9f86757a332e73, class=static_validated, events=64 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=64 */
    /* branch path: 0xb2754:je:1;0xb2845:jne:0;0xb2867:jne:1;0xb287d:jne:1;0xb2897:jne:1;0xb2922:je:0;0xb2a90:je:0;0xb2c0a:je:1;0xb2c50:je:0 */
    /* top actual targets: 257@0xadbfd:64 */
    /* operands: b0=enum5(0x37:66,0x2f:17,0x8f:10,0x5f:8,0x97:7);b1=enum4(0x48:71,0x45:19,0x43:10,0x46:8);b2=var11(top=0xc5:63.0%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/774 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x70ead2e5u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - 0x267d402fu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_319_0c39ce7926ed(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=319, native=0xba72f, path=0c39ce7926ed9f89, class=static_validated, events=64 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xba74a:je:1;0xba78b:je:1;0xba89f:je:0;0xba975:jne:0;0xba983:jne:1;0xba992:jne:1;0xba9a0:jne:1;0xbaa0a:je:0;0xbab08:je:0 */
    /* top actual targets: 352@0xc1ec4:64 */
    /* operands: b0=0x3d;b1=0x01;b2=var42(top=0xe6:28.4%);b3=var47(top=0x2e:17.5%);b4=var21(top=0x00:79.0%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_088_69c76b98c1eb(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=88, native=0x8aa14, path=69c76b98c1eb4755, class=static_validated, events=63 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=62 */
    /* branch path: 0x8aa9c:je:0;0x8acf1:jne:0;0x8ad18:jne:1;0x8ad2e:jne:1;0x8ad3a:jne:1;0x8aeac:je:0 */
    /* top actual targets: 257@0xadbfd:63 */
    /* operands: b0=var11(top=0x41:43.0%);b1=var11(top=0xeb:43.0%);b2=var11(top=0xa6:43.0%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) + (mask32((mask32(state0 | flags0)) - 0x1c9cfceau)))) ^ 0x415462f5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_092_4e1b79c9e1b3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=92, native=0x8b8cb, path=4e1b79c9e1b36bcb, class=static_validated, events=63 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=44 */
    /* branch path: 0x8b8e4:je:1;0x8ba76:je:0;0x8ba9f:je:0;0x8bb1c:je:1;0x8bb58:je:0 */
    /* top actual targets: 18@0x7be9b:7,28@0x7e390:6,215@0xa4609:5,322@0xbb3c9:5,199@0xa0631:4,348@0xc0d7d:4,49@0x82820:4,253@0xacfb1:3 */
    /* operands: b0=var27(top=0xa4:24.1%);b1=var13(top=0x34:22.1%);b2=var66(top=0xc5:20.8%);b3=var66(top=0x6f:20.8%) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x2u) ^ state0 ^ flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 & (mask32((mask32(U16(vm->ip + 0x2u) ^ state0)) ^ flags0)))) | flags0)) | 0x1002fee7u)) + 0x2efa2a96u)))) + 0x604aa997u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_102_5f8dbcaf34a4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=102, native=0x8d71d, path=5f8dbcaf34a472a5, class=affine_dispatch_fallback, events=63 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=63 */
    /* branch path: 0x8d7dc:je:0;0x8d7e6:je:0;0x8d82d:jne:1;0x8d85e:jne:1;0x8d8d1:jne:1;0x8d925:jne:1;0x8d96c:jne:0;0x8d989:je:1;0x8d9b0:je:1;0x8d9f6:jne:1;0x8da74:jne:1;0x8daed:jne:1;0x8db72:jne:1;0x8dc26:jne:1;0x8dc81:jne:1;0x8dcd4:jne:1;0x8dd26:jne:1;0x8dd78:jne:1;0x8ddb3:jne:1;0x8de04:je:1 */
    /* top actual targets: 268@0xb0007:63 */
    /* operands: b0=0x47;b1=0x4e;b2=0x04;b3=0x00;b4=0x80;b5=0x00;b6=0x3d;b7=0x01;b8=0x89;b9=0xe8;b10=0x01;b11=0xb9;...+1 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0xbu) + state0)) + 0x7b88d4e3u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xd;
    return r;
}

static VMOpResult path_entry_146_257a736ac20e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=146, native=0x96407, path=257a736ac20e565e, class=static_validated, events=62 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=60 */
    /* branch path: 0x96428:je:0;0x96492:je:1;0x966c4:jne:0;0x966d3:jne:1;0x966f8:jne:1;0x9671d:jne:1 */
    /* top actual targets: 70@0x8610e:59,185@0x9d964:1,331@0xbcfc8:1,82@0x8920e:1 */
    /* operands: b0=enum3(0x3a:379,0x50:122,0x62:77);b1=var58(top=0x09:27.5%);b2=var66(top=0x6e:15.9%);b3=var52(top=0x47:16.6%);b4=var53(top=0x92:18.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u;
    vm->flags = flags0 & 0xa6d4251u ^ 0x409c2e61u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 + flags0)) ^ 0x2e312e01u)) & (mask32(flags0 + 0x7d882664u)))) + 0x4a5b7e16u)) ^ (mask32(U16(vm->ip + 0x3u) + flags0)))))) + 0x2cff1885u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_146_a468acc2971f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=146, native=0x96407, path=a468acc2971f7d3c, class=static_validated, events=59 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=16 */
    /* branch path: 0x96428:je:0;0x96492:je:1;0x966c4:jne:1;0x966d3:jne:1;0x966f8:jne:1;0x9671d:jne:0 */
    /* top actual targets: 172@0x9b68a:17,258@0xadf2c:16,28@0x7e390:4,185@0x9d964:3,220@0xa522e:3,337@0xbec0e:3,347@0xc088d:3,66@0x855ff:3 */
    /* operands: b0=enum3(0x3a:379,0x50:122,0x62:77);b1=var58(top=0x09:27.5%);b2=var66(top=0x6e:15.9%);b3=var52(top=0x47:16.6%);b4=var53(top=0x92:18.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u;
    vm->flags = flags0 & 0xa6d4251u ^ 0x409c2e61u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 + flags0)) ^ 0x2e312e01u)) & (mask32(flags0 + 0x7d882664u)))) + 0x4a5b7e16u)) ^ (mask32(U16(vm->ip + 0x3u) + flags0)))))) + 0x2cff1885u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_301_7535310231cf(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=301, native=0xb708d, path=7535310231cf8aa5, class=static_validated, events=58 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=5 */
    /* branch path: 0xb7140:je:0;0xb71c5:je:1;0xb720a:je:0;0xb726f:je:1;0xb72a8:je:0;0xb73b9:je:1 */
    /* top actual targets: 352@0xc1ec4:13,198@0xa037e:12,160@0x994cf:8,256@0xad849:8,108@0x8f24b:5,173@0x9ba74:5,257@0xadbfd:4,144@0x95887:3 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var115(top=0xdf:19.9%);b4=var115(top=0x18:6.4%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ U16(vm->ip + 0x3u) - state0 & flags0 - 0x2c0febdfu;
    vm->flags = flags0 + 0x34c21ec8u + 0x4bcb296bu - 0x72148c24u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32(state0 & flags0)))) - 0x2c0febdfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_173_68b4556c1b76(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=173, native=0x9ba74, path=68b4556c1b76c061, class=static_validated, events=52 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=8 */
    /* branch path: 0x9bb4a:jne:1;0x9bb57:jne:1;0x9bb65:jne:0;0x9bb7a:je:1;0x9bb91:jne:1;0x9bbb5:je:0;0x9bbfa:je:0 */
    /* top actual targets: 64@0x85059:18,196@0x9fbcd:13,114@0x90319:4,168@0x9aa83:3,203@0xa1484:3,30@0x7e849:3,260@0xae90b:2,185@0x9d964:1 */
    /* operands: b0=var117(top=0xaf:7.6%);b1=var32(top=0x0b:13.4%) */
    /* GPR+scratch branch profile: 0/804 unknown branches (0.0%): */
    vm->state = state0 + 0x5eced92du ^ 0x456d7018u;
    vm->flags = flags0 - state0 + 0x5eced92du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 + 0x5eced92du)) ^ 0x456d7018u)) | 0xebbbd20u)) & (mask32((mask32(flags0 - (mask32((mask32(state0 + 0x5eced92du)) | 0x1f8bac4cu)))) & 0x74128b65u)))))) + 0x1f118051u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_239_db0d47c56823(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=239, native=0xa991e, path=db0d47c5682396a7, class=static_validated, events=51 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0xa9967:je:1;0xa99c8:je:1;0xa9b87:je:1 */
    /* top actual targets: 237@0xa8e1f:5,268@0xb0007:4,28@0x7e390:4,258@0xadf2c:3,320@0xbada5:3,105@0x8e6b4:2,122@0x9170d:2,157@0x98a9a:2 */
    /* operands: b0=var140(top=0x2a:5.5%);b1=var65(top=0x02:11.2%);b2=var36(top=0xc1:13.6%);b3=var23(top=0x21:15.7%);b4=var72(top=0xbe:8.8%);b5=var29(top=0xa6:21.0%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu & U32(vm->ip + 0x0u) - state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu - U16(vm->ip + 0x4u) + state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu & U32(vm->ip + 0x0u) - state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu - 0x3650a0aeu;
    vm->flags = flags0 & state0 + 0x40a7aa16u + flags0 + 0x627d85abu + 0x29b54516u & 0x66aaa5eu ^ 0x7efd4127u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x4u) + (mask32((mask32((mask32((mask32(state0 + 0x40a7aa16u)) + flags0)) & 0x39d16b3eu)) & (mask32(U32(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 + 0x40a7aa16u)) + flags0)) & 0x39d16b3eu)))))))) - 0x3650a0aeu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_352_42ed6a9e671e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=352, native=0xc1ec4, path=42ed6a9e671e5d3e, class=static_validated, events=51 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xc1f17:je:0;0xc1f5b:je:1;0xc1fba:jne:0;0xc1fc6:jne:1;0xc1fd3:jne:1;0xc2000:jne:1;0xc2027:je:0 */
    /* top actual targets: 258@0xadf2c:31,154@0x97ce6:9,307@0xb8064:9,199@0xa0631:1,322@0xbb3c9:1 */
    /* operands: b0=var124(top=0x16:8.0%);b1=var55(top=0xdb:8.3%) */
    /* GPR+scratch branch profile: 0/912 unknown branches (0.0%): */
    vm->state = state0 & 0x31863366u;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_070_8056e776ed72(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=70, native=0x8610e, path=8056e776ed725f33, class=static_validated, events=50 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=11 */
    /* branch path: 0x86334:jne:1;0x8634a:jne:1;0x8635f:jne:1;0x8636c:jne:0;0x8648a:je:0;0x865a3:je:0 */
    /* top actual targets: 198@0xa037e:18,144@0x95887:16,256@0xad849:5,257@0xadbfd:4,173@0x9ba74:3,160@0x994cf:2,352@0xc1ec4:2 */
    /* operands: b0=var93(top=0x8b:15.8%);b1=var143(top=0xb7:16.0%);b2=var23(top=0x00:58.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ flags0 - flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0;
    vm->flags = flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 ^ flags0)) ^ flags0)) - (mask32((mask32((mask32((mask32(flags0 + (mask32((mask32((mask32(state0 ^ flags0)) ^ flags0)) + 0x55fafa0cu)))) - 0x5abc12afu)) ^ (mask32((mask32(state0 ^ flags0)) ^ flags0)))) | 0x58fb4a0cu)))) ^ 0x62ac6845u)) ^...#d1a49f5217c6; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_000_886532d40d9e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=0, native=0x78561, path=886532d40d9edf1c, class=static_validated, events=48 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=48 */
    /* branch path: 0x78634:jne:1;0x7864f:jne:1;0x78668:jne:1;0x7867f:jne:0;0x786fc:je:0 */
    /* top actual targets: 144@0x95887:31,257@0xadbfd:10,108@0x8f24b:7 */
    /* operands: b0=enum5(0x8d:41,0x4a:17,0xbe:14,0xef:10,0x1a:7);b1=enum5(0xc2:41,0x34:17,0x06:14,0x7f:10,0xf6:7);b2=0x3d;b3=0x01;b4=enum5(0x35:41,0xa3:17,0xe5:14,0x0f:10,0xb5:7) */
    /* GPR+scratch branch profile: 0/240 unknown branches (0.0%): */
    vm->state = state0 ^ 0x1966e0e7u - U16(vm->ip + 0x0u) + state0 ^ 0x1966e0e7u - 0x251a0141u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 ^ 0x1966e0e7u)))) - 0x251a0141u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_300_935ecabfe4d4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=300, native=0xb6c36, path=935ecabfe4d43423, class=static_validated, events=45 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xb6c57:je:1;0xb6c87:je:0;0xb6d00:je:0;0xb6f5c:je:0 */
    /* top actual targets: 258@0xadf2c:18,301@0xb708d:5,180@0x9cf32:4,183@0x9d495:4,64@0x85059:4,91@0x8b6de:2,220@0xa522e:1,269@0xb045b:1 */
    /* operands: b0=var134(top=0x12:10.9%);b1=var135(top=0x85:10.1%);b2=var96(top=0x60:10.2%);b3=var122(top=0x42:10.0%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + state0 & 0x2b7e7713u & 0x515f6307u + flags0 & 0x742354du + 0x2ff05a2bu;
    vm->flags = flags0 & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    return r;
}

static VMOpResult path_entry_338_ac191ebd9279(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=338, native=0xbf128, path=ac191ebd92796431, class=static_validated, events=45 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=14 */
    /* branch path: 0xbf141:je:1;0xbf15d:je:0 */
    /* top actual targets: 283@0xb3612:21,295@0xb60e0:12,351@0xc1d48:12 */
    /* operands: b0=var85(top=0xc4:10.6%);b1=var91(top=0xc7:10.6%);b2=0x3d;b3=0x01;b4=0xe8;b5=0x01 */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 - U16(vm->ip + 0x0u) - state0 - 0x4bf8be0cu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - state0)) - 0x4bf8be0cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_140_fd084cebec9a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, path=fd084cebec9a7aec, class=static_validated, events=43 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x94e85:je:0;0x94f11:je:0;0x94fab:je:0;0x94fdd:je:0;0x95000:je:0;0x9504c:je:0 */
    /* top actual targets: 37@0x80685:15,347@0xc088d:14,215@0xa4609:4,330@0xbc9b8:2,70@0x8610e:2,189@0x9e7af:1,18@0x7be9b:1,196@0x9fbcd:1 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x6f549f79u - state0;
    vm->flags = flags0 - 0x6f549f79u - state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 - (mask32((mask32((mask32(flags0 - 0x6f549f79u)) - (mask32(state0 | 0xf17c331u)))) | 0x16a9ca8cu)))))) ^ 0x6e089febu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_305_f53034a3ecb1(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=305, native=0xb78b0, path=f53034a3ecb104a1, class=static_validated, events=43 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0xb78db:je:1;0xb7924:je:0;0xb7978:jne:1;0xb7988:jne:1;0xb79a8:je:0;0xb79b7:je:0;0xb7a13:je:0;0xb7a4c:je:0 */
    /* top actual targets: 203@0xa1484:10,157@0x98a9a:6,347@0xc088d:4,43@0x8173d:4,196@0x9fbcd:3,258@0xadf2c:3,64@0x85059:3,172@0x9b68a:2 */
    /* operands: b0=var237(top=0x40:4.1%);b1=var225(top=0x09:3.5%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x0u) + state0;
    vm->flags = flags0 & state0 & 0x14763e0cu + 0x47fe8c0bu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_317_4895684b48c6(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=317, native=0xba1e2, path=4895684b48c64b41, class=static_validated, events=43 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=43 */
    /* branch path: 0xba1fd:je:0;0xba223:je:1;0xba266:je:1;0xba2ec:je:0;0xba503:je:0 */
    /* top actual targets: 28@0x7e390:7,18@0x7be9b:5,239@0xa991e:4,292@0xb540f:4,345@0xc02e4:4,83@0x8947b:3,121@0x91379:2,300@0xb6c36:2 */
    /* operands: b0=var40(top=0xe7:25.9%);b1=var56(top=0xc8:26.1%);b2=var50(top=0x08:49.3%);b3=var60(top=0xdc:25.5%) */
    /* GPR+scratch branch profile: 0/330 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u;
    vm->flags = flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) | flags0)) ^ (mask32(U16(vm->ip + 0x2u) + flags0)))) & (mask32(flags0 & 0x19a77bau)))) + flags0)) | flags0)) ^ (mask32(flags0 | 0x501e3e6cu)))) ^ flags0)))) + 0x18e7b255u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_338_04bd85f2d26e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=338, native=0xbf128, path=04bd85f2d26ed064, class=static_validated, events=42 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=16 */
    /* branch path: 0xbf141:je:0;0xbf15d:je:1 */
    /* top actual targets: 283@0xb3612:21,295@0xb60e0:12,351@0xc1d48:9 */
    /* operands: b0=var85(top=0xc4:10.6%);b1=var91(top=0xc7:10.6%);b2=0x3d;b3=0x01;b4=0xe8;b5=0x01 */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0 - U16(vm->ip + 0x0u) - state0 - 0x4bf8be0cu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - state0)) - 0x4bf8be0cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_128_a63c04819ab1(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=128, native=0x9299b, path=a63c04819ab1404c, class=static_validated, events=41 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=18 */
    /* branch path: 0x929dd:je:0;0x92a2e:je:1;0x92a94:je:0;0x92cb8:jne:1;0x92cdb:jne:1;0x92ceb:jne:1;0x92d07:jne:0;0x92d9f:je:1 */
    /* top actual targets: 83@0x8947b:6,220@0xa522e:5,3@0x78c77:5,199@0xa0631:4,307@0xb8064:4,64@0x85059:4,337@0xbec0e:3,185@0x9d964:2 */
    /* operands: b0=enum4(0x62:840,0x3a:175,0x50:118,0x32:25);b1=var10(top=0x79:57.3%);b2=var17(top=0x04:24.0%);b3=var77(top=0xb7:22.4%);b4=var50(top=0x94:25.1%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 & flags0 & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u;
    vm->flags = flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x7ee52541u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x3u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32(flags0 & 0x7036ea56u)))) + 0x277b426cu)) - 0x57b04ce2u)) - (mask32((mask32((mask32(flags0 ^ 0x46f37ee7u)) & 0x706a6a76u)) | 0x36a392ffu)))) | 0x38cd3aecu)) - (mask32(U16(vm->ip + 0x1u) + (mask32((mask32((mask32((mask32...#7647f41314cb; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_146_fd72c17f0895(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=146, native=0x96407, path=fd72c17f0895e2c7, class=static_validated, events=40 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=16 */
    /* branch path: 0x96428:je:0;0x96492:je:1;0x966c4:jne:1;0x966d3:jne:1;0x966f8:jne:0;0x9671d:jne:1 */
    /* top actual targets: 28@0x7e390:15,3@0x78c77:4,64@0x85059:4,337@0xbec0e:3,79@0x885b0:3,189@0x9e7af:2,18@0x7be9b:2,83@0x8947b:2 */
    /* operands: b0=enum3(0x3a:379,0x50:122,0x62:77);b1=var58(top=0x09:27.5%);b2=var66(top=0x6e:15.9%);b3=var52(top=0x47:16.6%);b4=var53(top=0x92:18.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u;
    vm->flags = flags0 & 0xa6d4251u ^ 0x409c2e61u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 + flags0)) ^ 0x2e312e01u)) & (mask32(flags0 + 0x7d882664u)))) + 0x4a5b7e16u)) ^ (mask32(U16(vm->ip + 0x3u) + flags0)))))) + 0x2cff1885u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_048_cdbfce58bb9a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=48, native=0x82477, path=cdbfce58bb9a536e, class=static_validated, events=38 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=38 */
    /* branch path: 0x824a2:je:1;0x8259a:jne:1;0x825a7:jne:1;0x825b4:jne:0;0x825c0:jne:1;0x8260a:je:1 */
    /* top actual targets: 28@0x7e390:5,92@0x8b8cb:5,18@0x7be9b:4,254@0xad32c:4,3@0x78c77:4,186@0x9dcae:3,291@0xb4edd:3,301@0xb708d:3 */
    /* operands: b0=var36(top=0xa8:11.3%);b1=var50(top=0x80:14.1%);b2=enum4(0x3a:109,0x50:80,0x62:69,0x32:25);b3=var73(top=0x01:9.5%);b4=var76(top=0x3b:9.2%) */
    /* GPR+scratch branch profile: 0/714 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 ^ flags0 ^ 0x8881ae0u - 0x1accc893u + 0x4f1a7667u - flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u & flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    vm->flags = flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    /* r.slot = (mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32((mask32(U16(vm->ip + 0x3u) + state0)) ^ flags0)))) + 0x4f1a7667u)) - (mask32(flags0 & 0x6134e706u)))) & (mask32(flags0 & 0x6134e706u)))) ^ 0x79fc8ff4u)) | (mask32((mask32(flags0 & 0x6134e706u)) - 0x430c028cu)))) & (mask32((mask32(fla...#1ef66cded6f8; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_037_565bf9ecba9d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=37, native=0x80685, path=565bf9ecba9ddc06, class=static_validated, events=36 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0x806c4:je:0;0x8075e:je:0;0x807c6:je:0;0x808c1:jne:1;0x808d1:jne:1;0x808ef:jne:1;0x8090d:jne:0;0x8099e:je:0;0x809da:je:0;0x80ac9:je:0 */
    /* top actual targets: 144@0x95887:14,108@0x8f24b:5,198@0xa037e:4,256@0xad849:4,352@0xc1ec4:4,173@0x9ba74:3,160@0x994cf:2 */
    /* operands: b0=var141(top=0xc1:12.7%);b1=var150(top=0x3e:12.6%);b2=var27(top=0x00:78.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x504fc3du - 0x4eca0e49u;
    vm->flags = flags0 & 0x714eea75u + 0x53097984u ^ state0 - flags0 + 0x504fc3du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - (mask32(flags0 + 0x504fc3du)))) - 0x4eca0e49u)))) ^ 0x384e1c86u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_079_e56fb50ce276(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=79, native=0x885b0, path=e56fb50ce276e515, class=static_validated, events=36 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x8860f:je:1;0x886fb:je:1;0x887f1:je:1 */
    /* top actual targets: 256@0xad849:12,108@0x8f24b:8,198@0xa037e:5,144@0x95887:4,173@0x9ba74:4,160@0x994cf:2,257@0xadbfd:1 */
    /* operands: b0=var64(top=0x9e:15.9%);b1=var86(top=0x28:12.3%);b2=0x3d;b3=0x01;b4=0x00 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u;
    vm->flags = flags0 ^ 0xc7e744fu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x623ccce4u)))) & 0xd4da920u)) | (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x225dfa31u)))) - 0x6110d031u)) ^ 0x3fcb6e9au)) ^ (mask32(flags0 ^ 0xc7e744fu)))) + 0x60a9dba6u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_222_8dbc619ae0cc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=222, native=0xa5f3c, path=8dbc619ae0cc1785, class=static_validated, events=36 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=14 */
    /* branch path: 0xa5fbf:je:1;0xa600d:je:1;0xa6222:jne:1;0xa622f:jne:1;0xa6250:jne:0;0xa6276:jne:1 */
    /* top actual targets: 269@0xb045b:9,301@0xb708d:5,185@0x9d964:4,28@0x7e390:4,64@0x85059:4,347@0xc088d:3,268@0xb0007:2,297@0xb64d7:2 */
    /* operands: b0=var60(top=0x10:25.6%);b1=var60(top=0xf8:25.2%);b2=var58(top=0xd9:25.2%);b3=var46(top=0x4e:25.2%);b4=enum4(0x3a:97,0x50:89,0x62:67,0x32:1) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)) & (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)))) + flags0)))) | 0x39a63024u)) + (mask32(flags0 + 0x17d780cau)))))) - 0x29e369dfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_140_2b28f4fd86e6(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, path=2b28f4fd86e6bf94, class=static_validated, events=35 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0x94e85:je:1;0x94f11:je:1;0x94fab:je:0;0x94fdd:je:0;0x95000:je:0;0x9504c:je:0 */
    /* top actual targets: 185@0x9d964:7,190@0x9eacb:7,215@0xa4609:3,269@0xb045b:2,297@0xb64d7:2,64@0x85059:2,172@0x9b68a:1,189@0x9e7af:1 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x6f549f79u - state0;
    vm->flags = flags0 - 0x6f549f79u - state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 - (mask32((mask32(flags0 - (mask32(state0 | 0xf17c331u)))) | 0x16a9ca8cu)))))) ^ 0x6e089febu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_062_9d873e475d78(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=62, native=0x84aa3, path=9d873e475d78b52b, class=static_validated, events=34 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=34 */
    /* branch path: 0x84c20:je:0 */
    /* top actual targets: 157@0x98a9a:16,307@0xb8064:11,124@0x91e81:1,200@0xa0a9e:1,253@0xacfb1:1,28@0x7e390:1,297@0xb64d7:1,337@0xbec0e:1 */
    /* operands: b0=var14(top=0xf9:77.5%);b1=var14(top=0xc9:75.8%);b2=var16(top=0xa3:75.8%);b3=var16(top=0x52:75.8%) */
    /* GPR+scratch branch profile: 0/36 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0xd90ded5u - 0x219c02d3u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | (mask32(U16(vm->ip + 0x2u) ^ (mask32(flags0 + 0xd90ded5u)))))) ^ 0x5dbb6647u)))) + 0x7ebb48a2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_128_51e06e44bdfa(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=128, native=0x9299b, path=51e06e44bdfa5e39, class=static_validated, events=34 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x929dd:je:1;0x92a2e:je:1;0x92a94:je:0;0x92cb8:jne:1;0x92cdb:jne:1;0x92ceb:jne:0;0x92d07:jne:1;0x92d9f:je:1 */
    /* top actual targets: 157@0x98a9a:5,199@0xa0631:4,307@0xb8064:4,333@0xbd8af:4,347@0xc088d:4,172@0x9b68a:3,269@0xb045b:3,79@0x885b0:2 */
    /* operands: b0=enum4(0x62:840,0x3a:175,0x50:118,0x32:25);b1=var10(top=0x79:57.3%);b2=var17(top=0x04:24.0%);b3=var77(top=0xb7:22.4%);b4=var50(top=0x94:25.1%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 & flags0 & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u;
    vm->flags = flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x7ee52541u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x3u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32(flags0 & 0x7036ea56u)))) + 0x277b426cu)) - 0x57b04ce2u)) - (mask32(flags0 | 0x36a392ffu)))) | 0x38cd3aecu)) - (mask32(U16(vm->ip + 0x1u) + (mask32((mask32((mask32((mask32((mask32(state0 & (mask32(flags0 & 0x7036ea56u)...#a4fc43487c07; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_237_27ecdfb73972(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=27ecdfb73972e605, class=static_validated, events=34 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0xa8efb:je:0;0xa8f3c:je:1;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:1;0xa9025:jne:0;0xa90d7:je:0;0xa9292:je:1 */
    /* top actual targets: 108@0x8f24b:17,160@0x994cf:8,198@0xa037e:5,173@0x9ba74:4 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) ^ (mask32((mask32((mask32(state0 - (mask32(flags0 ^ 0x22900c8u)))) - (mask32(flags0 ^ 0x8178b71u)))) - 0x4813dbcu)))) - 0x4f4105f2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_242_456829fdf152(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=242, native=0xaa87d, path=456829fdf152b164, class=static_validated, events=33 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=33 */
    /* branch path: 0xaa954:jne:0;0xaa96f:jne:1;0xaa97d:jne:1;0xaa98d:jne:1;0xaaa4a:je:0 */
    /* top actual targets: 75@0x873fc:14,246@0xab427:12,145@0x95b5c:4,210@0xa2da3:2,316@0xb987b:1 */
    /* operands: b0=0x3d;b1=0x01;b2=var15(top=0xb3:50.8%);b3=var17(top=0xef:50.8%);b4=var16(top=0x3b:50.8%) */
    /* GPR+scratch branch profile: 0/215 unknown branches (0.0%): */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - state0)) ^ 0x5c05e9b5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_282_37bb4e0d23db(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=282, native=0xb3128, path=37bb4e0d23db2fcd, class=static_validated, events=33 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=19 */
    /* branch path: 0xb3145:je:0;0xb3178:je:1;0xb31f8:je:1;0xb3253:je:0;0xb3455:jne:1;0xb348a:jne:1;0xb34a1:jne:0;0xb34b6:jne:1 */
    /* top actual targets: 90@0x8b334:8,281@0xb2db6:7,240@0xa9cf7:5,66@0x855ff:5,92@0x8b8cb:5,185@0x9d964:1,297@0xb64d7:1,300@0xb6c36:1 */
    /* operands: b0=var62(top=0x2d:24.2%);b1=var45(top=0x22:24.2%);b2=var79(top=0x05:23.8%);b3=var73(top=0x57:23.8%);b4=enum3(0x3a:103,0x62:87,0x50:79) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    vm->flags = flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u ^ 0x171f71e1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ (mask32(flags0 - 0x334721c0u)))))) ^ 0x644d2bc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_336_c859f7b91488(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=336, native=0xbe8cd, path=c859f7b914885127, class=static_validated, events=33 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=33 */
    /* branch path: 0xbea07:jne:1;0xbea19:jne:1;0xbea33:jne:0;0xbea49:jne:1;0xbeb01:je:0 */
    /* top actual targets: 256@0xad849:12,108@0x8f24b:6,144@0x95887:5,198@0xa037e:4,352@0xc1ec4:4,173@0x9ba74:2 */
    /* operands: b0=0x3d;b1=0x01;b2=enum5(0xe8:19,0x88:8,0x80:8,0x68:5,0xd8:4);b3=enum6(0x01:12,0x0a:8,0x0c:8,0x02:7,0x0d:5,0x0f:4);b4=var14(top=0x33:9.1%) */
    /* GPR+scratch branch profile: 0/165 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x2u) ^ 0x114009e8u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ 0x114009e8u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_192_d15bf3105a90(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=192, native=0x9f00a, path=d15bf3105a909314, class=static_validated, events=32 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=5 */
    /* branch path: 0x9f0c6:je:0;0x9f163:je:0;0x9f2a8:jne:1;0x9f2ce:jne:1;0x9f2ea:jne:1;0x9f309:jne:0;0x9f512:je:0 */
    /* top actual targets: 198@0xa037e:15,144@0x95887:9,256@0xad849:4,352@0xc1ec4:4 */
    /* operands: b0=var148(top=0x4e:11.2%);b1=var139(top=0xd7:10.9%);b2=0x3d;b3=0x01;b4=var23(top=0x00:90.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0 + flags0 + flags0 + state0 + flags0 ^ 0x5d641cd7u;
    vm->flags = flags0 + state0 + flags0 ^ 0x5d641cd7u;
    /* r.slot = (mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 + flags0)) + (mask32((mask32((mask32((mask32((mask32(flags0 + (mask32((mask32(state0 + flags0)) ^ 0x5d641cd7u)))) | 0x76a1e6e7u)) ^ 0x1ea5bfdcu)) & 0x4f4379b7u)) | 0x563159ceu)))) + (mask32((mask32((mask32((mask32((mask32(flags0 + (mask32((mask32(state0 + flags...#41021c953f7f; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_301_084f0136b506(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=301, native=0xb708d, path=084f0136b5068bc0, class=static_validated, events=32 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xb7140:je:0;0xb71c5:je:1;0xb720a:je:0;0xb726f:je:0;0xb72a8:je:0;0xb73b9:je:1 */
    /* top actual targets: 173@0x9ba74:9,108@0x8f24b:6,160@0x994cf:4,198@0xa037e:4,144@0x95887:3,352@0xc1ec4:3,256@0xad849:2,257@0xadbfd:1 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var115(top=0xdf:19.9%);b4=var115(top=0x18:6.4%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ U16(vm->ip + 0x3u) - state0 & flags0 - 0x2c0febdfu;
    vm->flags = flags0 + 0x34c21ec8u + 0x4bcb296bu - 0x72148c24u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32(state0 & flags0)))) - 0x2c0febdfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_168_b0214fdf2129(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=168, native=0x9aa83, path=b0214fdf21298e2b, class=static_validated, events=31 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x9aa9c:je:1;0x9aadd:je:1;0x9ab2f:je:1;0x9ab7f:je:0;0x9ad6a:je:1;0x9ad85:je:0 */
    /* top actual targets: 315@0xb9451:5,185@0x9d964:3,114@0x90319:2,18@0x7be9b:2,258@0xadf2c:2,305@0xb78b0:2,337@0xbec0e:2,340@0xbf435:2 */
    /* operands: b0=var244(top=0xe3:6.9%);b1=var219(top=0x56:6.0%);b2=var192(top=0xde:4.8%);b3=var14(top=0xd9:19.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du;
    return r;
}

static VMOpResult path_entry_326_e11efe953947(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=326, native=0xbc06d, path=e11efe9539472b4f, class=static_validated, events=31 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=31 */
    /* branch path: 0xbc141:jne:1;0xbc150:jne:1;0xbc160:jne:1;0xbc16f:jne:0;0xbc202:je:0 */
    /* top actual targets: 108@0x8f24b:18,352@0xc1ec4:13 */
    /* operands: b0=enum3(0x31:39,0x55:18,0xdd:13);b1=enum2(0xde:57,0xbe:13);b2=enum2(0xed:57,0xe5:13);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/155 unknown branches (0.0%): */
    vm->state = state0 & flags0 + U16(vm->ip + 0x1u) ^ 0x50d4eebeu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) ^ 0x50d4eebeu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_fdf1e1a4967a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=fdf1e1a4967a8ab0, class=static_validated, events=31 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=10 */
    /* branch path: 0xbc9d3:je:1;0xbca25:je:1;0xbcaa5:je:0;0xbcabc:je:0;0xbcaf6:je:0;0xbcd08:jne:1;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:0 */
    /* top actual targets: 260@0xae90b:14,253@0xacfb1:3,291@0xb4edd:3,79@0x885b0:2,83@0x8947b:2,18@0x7be9b:1,281@0xb2db6:1,307@0xb8064:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_048_4208c9305465(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=48, native=0x82477, path=4208c930546548cc, class=static_validated, events=30 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=30 */
    /* branch path: 0x824a2:je:1;0x8259a:jne:1;0x825a7:jne:1;0x825b4:jne:1;0x825c0:jne:0;0x8260a:je:1 */
    /* top actual targets: 297@0xb64d7:9,52@0x833c7:5,200@0xa0a9e:4,239@0xa991e:4,92@0x8b8cb:3,154@0x97ce6:1,185@0x9d964:1,220@0xa522e:1 */
    /* operands: b0=var36(top=0xa8:11.3%);b1=var50(top=0x80:14.1%);b2=enum4(0x3a:109,0x50:80,0x62:69,0x32:25);b3=var73(top=0x01:9.5%);b4=var76(top=0x3b:9.2%) */
    /* GPR+scratch branch profile: 0/714 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 ^ flags0 ^ 0x8881ae0u - 0x1accc893u + 0x4f1a7667u - flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u & flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    vm->flags = flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    /* r.slot = (mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32((mask32(U16(vm->ip + 0x3u) + state0)) ^ flags0)))) + 0x4f1a7667u)) - (mask32(flags0 & 0x6134e706u)))) & (mask32(flags0 & 0x6134e706u)))) ^ 0x79fc8ff4u)) | (mask32((mask32(flags0 & 0x6134e706u)) - 0x430c028cu)))) & (mask32((mask32(fla...#1ef66cded6f8; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_253_4464700b2a37(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=253, native=0xacfb1, path=4464700b2a37d81a, class=static_validated, events=30 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xacff9:je:1;0xad075:je:0 */
    /* top actual targets: 18@0x7be9b:4,192@0x9f00a:3,237@0xa8e1f:3,199@0xa0631:2,258@0xadf2c:2,28@0x7e390:2,333@0xbd8af:2,340@0xbf435:2 */
    /* operands: b0=var26(top=0x86:22.2%);b1=var11(top=0xc2:20.1%);b2=var177(top=0x34:17.8%);b3=var157(top=0xa1:13.2%);b4=var160(top=0x04:13.3%);b5=var155(top=0x08:13.9%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + 0x7c5d4802u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_017_b16cdfb63ec2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=17, native=0x7bae9, path=b16cdfb63ec2fb2e, class=static_validated, events=28 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=3 */
    /* branch path: 0x7bafa:je:0;0x7bbdd:jne:1;0x7bbea:jne:1;0x7bbf8:jne:0;0x7bc05:jne:1;0x7bc7b:je:0;0x7bd0e:je:1 */
    /* top actual targets: 280@0xb2661:5,30@0x7e849:5,90@0x8b334:5,28@0x7e390:4,220@0xa522e:3,336@0xbe8cd:2,185@0x9d964:1,215@0xa4609:1 */
    /* operands: b0=var54(top=0x12:33.9%);b1=var37(top=0xff:35.9%);b2=enum4(0x3a:321,0x62:293,0x32:75,0x50:69);b3=var28(top=0x10:34.4%);b4=var12(top=0xa0:35.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x4365071cu - 0x69693e45u & 0x3d8b48f7u - 0x1b99cfe0u + 0x7ec4552au & 0x2b98de46u + 0x459da9b2u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32(state0 | (mask32(flags0 ^ 0x4365071cu)))) & (mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 | (mask32(flags0 ^ 0x4365071cu)))))) + (mask32(flags0 ^ 0x4365071cu)))))) ^ 0x95f9698u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_037_419814ebfbf6(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=37, native=0x80685, path=419814ebfbf68e1b, class=static_validated, events=28 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0x806c4:je:0;0x8075e:je:1;0x807c6:je:0;0x808c1:jne:1;0x808d1:jne:1;0x808ef:jne:1;0x8090d:jne:0;0x8099e:je:0;0x809da:je:0;0x80ac9:je:0 */
    /* top actual targets: 108@0x8f24b:12,160@0x994cf:5,173@0x9ba74:4,198@0xa037e:4,352@0xc1ec4:3 */
    /* operands: b0=var141(top=0xc1:12.7%);b1=var150(top=0x3e:12.6%);b2=var27(top=0x00:78.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x504fc3du - 0x4eca0e49u;
    vm->flags = flags0 & 0x714eea75u + 0x53097984u ^ state0 - flags0 + 0x504fc3du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - (mask32(flags0 + 0x504fc3du)))) - 0x4eca0e49u)))) ^ 0x384e1c86u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_037_5f0bdd450998(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=37, native=0x80685, path=5f0bdd4509987674, class=static_validated, events=28 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0x806c4:je:1;0x8075e:je:1;0x807c6:je:0;0x808c1:jne:1;0x808d1:jne:1;0x808ef:jne:0;0x8090d:jne:1;0x8099e:je:0;0x809da:je:0;0x80ac9:je:0 */
    /* top actual targets: 257@0xadbfd:28 */
    /* operands: b0=var141(top=0xc1:12.7%);b1=var150(top=0x3e:12.6%);b2=var27(top=0x00:78.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x504fc3du - 0x4eca0e49u;
    vm->flags = flags0 & 0x714eea75u + 0x53097984u ^ state0 - flags0 + 0x504fc3du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - (mask32(flags0 + 0x504fc3du)))) - 0x4eca0e49u)))) ^ 0x384e1c86u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_128_91bf05f3f343(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=128, native=0x9299b, path=91bf05f3f343e4b6, class=static_validated, events=28 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x929dd:je:1;0x92a2e:je:1;0x92a94:je:0;0x92cb8:jne:1;0x92cdb:jne:1;0x92ceb:jne:1;0x92d07:jne:0;0x92d9f:je:1 */
    /* top actual targets: 168@0x9aa83:4,185@0x9d964:4,196@0x9fbcd:4,297@0xb64d7:4,301@0xb708d:3,333@0xbd8af:2,114@0x90319:1,157@0x98a9a:1 */
    /* operands: b0=enum4(0x62:840,0x3a:175,0x50:118,0x32:25);b1=var10(top=0x79:57.3%);b2=var17(top=0x04:24.0%);b3=var77(top=0xb7:22.4%);b4=var50(top=0x94:25.1%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 & flags0 & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u;
    vm->flags = flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x7ee52541u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x3u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32(flags0 & 0x7036ea56u)))) + 0x277b426cu)) - 0x57b04ce2u)) - (mask32(flags0 | 0x36a392ffu)))) | 0x38cd3aecu)) - (mask32(U16(vm->ip + 0x1u) + (mask32((mask32((mask32((mask32((mask32(state0 & (mask32(flags0 & 0x7036ea56u)...#a4fc43487c07; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_151_002987b231bc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=151, native=0x97311, path=002987b231bcd1c1, class=static_validated, events=28 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=28 */
    /* branch path: 0x9744b:jne:1;0x9746b:jne:1;0x97489:jne:0;0x9749f:jne:1;0x9754e:je:0 */
    /* top actual targets: 198@0xa037e:14,144@0x95887:4,160@0x994cf:4,352@0xc1ec4:4,173@0x9ba74:2 */
    /* operands: b0=0x3d;b1=0x01;b2=var11(top=0xa7:13.3%);b3=var11(top=0x07:13.3%);b4=var12(top=0xc3:13.3%) */
    /* GPR+scratch branch profile: 0/170 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ U16(vm->ip + 0x3u) + state0 + flags0 + 0x77236c60u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + (mask32(state0 + flags0)))) + 0x77236c60u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_222_0256233ac969(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=222, native=0xa5f3c, path=0256233ac9698073, class=static_validated, events=28 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=16 */
    /* branch path: 0xa5fbf:je:1;0xa600d:je:1;0xa6222:jne:1;0xa622f:jne:1;0xa6250:jne:1;0xa6276:jne:0 */
    /* top actual targets: 215@0xa4609:4,258@0xadf2c:4,307@0xb8064:4,18@0x7be9b:3,297@0xb64d7:3,168@0x9aa83:2,220@0xa522e:2,3@0x78c77:2 */
    /* operands: b0=var60(top=0x10:25.6%);b1=var60(top=0xf8:25.2%);b2=var58(top=0xd9:25.2%);b3=var46(top=0x4e:25.2%);b4=enum4(0x3a:97,0x50:89,0x62:67,0x32:1) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)) & (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)))) + flags0)))) | 0x39a63024u)) + (mask32(flags0 + 0x17d780cau)))))) - 0x29e369dfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_222_3949013ea151(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=222, native=0xa5f3c, path=3949013ea1513bf7, class=static_validated, events=27 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=15 */
    /* branch path: 0xa5fbf:je:0;0xa600d:je:0;0xa6222:jne:1;0xa622f:jne:1;0xa6250:jne:1;0xa6276:jne:0 */
    /* top actual targets: 189@0x9e7af:9,114@0x90319:6,196@0x9fbcd:3,3@0x78c77:3,203@0xa1484:2,268@0xb0007:2,301@0xb708d:1,83@0x8947b:1 */
    /* operands: b0=var60(top=0x10:25.6%);b1=var60(top=0xf8:25.2%);b2=var58(top=0xd9:25.2%);b3=var46(top=0x4e:25.2%);b4=enum4(0x3a:97,0x50:89,0x62:67,0x32:1) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0;
    vm->flags = flags0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)) & (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)))) + (mask32((mask32((mask32((mask32(flags0 | 0x5b15ab43u)) | 0x4cc95222u)) | 0x70d72f46u...#496f2a93f8d6; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_192_25b32187cd64(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=192, native=0x9f00a, path=25b32187cd64fd25, class=static_validated, events=26 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x9f0c6:je:1;0x9f163:je:1;0x9f2a8:jne:1;0x9f2ce:jne:1;0x9f2ea:jne:1;0x9f309:jne:0;0x9f512:je:0 */
    /* top actual targets: 108@0x8f24b:14,198@0xa037e:4,352@0xc1ec4:3,144@0x95887:2,173@0x9ba74:2,256@0xad849:1 */
    /* operands: b0=var148(top=0x4e:11.2%);b1=var139(top=0xd7:10.9%);b2=0x3d;b3=0x01;b4=var23(top=0x00:90.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0 + flags0 + flags0 + state0 + flags0 ^ 0x5d641cd7u;
    vm->flags = flags0 + state0 + flags0 ^ 0x5d641cd7u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 + flags0)) + (mask32(flags0 + (mask32((mask32(state0 + flags0)) ^ 0x5d641cd7u)))))) + (mask32(flags0 + (mask32((mask32(state0 + flags0)) ^ 0x5d641cd7u)))))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_200_a42a6e0e16cb(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=200, native=0xa0a9e, path=a42a6e0e16cb3fb1, class=static_validated, events=26 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0xa0ae2:je:1;0xa0b3f:je:1;0xa0bb1:je:1;0xa0bf9:je:1 */
    /* top actual targets: 297@0xb64d7:4,333@0xbd8af:3,18@0x7be9b:2,199@0xa0631:2,340@0xbf435:2,66@0x855ff:2,168@0x9aa83:1,237@0xa8e1f:1 */
    /* operands: b0=var132(top=0xa4:13.0%);b1=var124(top=0xc1:9.3%);b2=var103(top=0x10:19.7%);b3=var102(top=0x5f:26.1%);b4=var28(top=0x48:16.1%);b5=var11(top=0x09:19.9%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 + flags0 - flags0 ^ 0x64193a1au ^ 0x227666a1u + U32(vm->ip + 0x0u) ^ flags0 & 0x21af07eu;
    vm->flags = flags0 & 0x21af07eu;
    r.slot = (uint32_t)(U16(vm->ip + 0x4u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_208_945ec9e23a70(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=208, native=0xa2361, path=945ec9e23a70eb7d, class=static_validated, events=26 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=3 */
    /* branch path: 0xa237a:je:1;0xa23bd:je:1;0xa24d5:je:1;0xa2510:je:1;0xa26dc:jne:1;0xa270b:jne:1;0xa272d:jne:1;0xa2755:jne:0 */
    /* top actual targets: 307@0xb8064:13,43@0x8173d:7,269@0xb045b:4,215@0xa4609:1,333@0xbd8af:1 */
    /* operands: b0=enum3(0x3a:404,0x62:335,0x50:63);b1=var62(top=0xa7:15.7%);b2=var77(top=0xf1:15.7%);b3=var29(top=0xa5:28.8%);b4=var52(top=0xe2:19.6%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    vm->flags = flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    /* r.slot = (mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32(state0 + (mask32((mask32((mask32((mask32((mask32(flags0 ^ (mask32(state0 + 0x7ad87935u)))) ^ 0x39b69246u)) ^ (mask32(state0 | 0x7a909dc0u)))) ^ 0x58abcfc7u)) | 0x1477a707u)))) - (mask32((mask32((mask32((mask32(flags0 ^ (mask32(state0 + 0x7ad87935u)))) ^ 0x39b69u...#9f40b863da92; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_282_768b388698cb(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=282, native=0xb3128, path=768b388698cbf73e, class=static_validated, events=26 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=15 */
    /* branch path: 0xb3145:je:0;0xb3178:je:1;0xb31f8:je:1;0xb3253:je:0;0xb3455:jne:1;0xb348a:jne:1;0xb34a1:jne:1;0xb34b6:jne:0 */
    /* top actual targets: 199@0xa0631:10,52@0x833c7:3,18@0x7be9b:2,90@0x8b334:2,92@0x8b8cb:2,124@0x91e81:1,154@0x97ce6:1,200@0xa0a9e:1 */
    /* operands: b0=var62(top=0x2d:24.2%);b1=var45(top=0x22:24.2%);b2=var79(top=0x05:23.8%);b3=var73(top=0x57:23.8%);b4=enum3(0x3a:103,0x62:87,0x50:79) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    vm->flags = flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u ^ 0x171f71e1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ (mask32(flags0 - 0x334721c0u)))))) ^ 0x644d2bc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_292_02749dce4a15(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=292, native=0xb540f, path=02749dce4a153b19, class=static_validated, events=26 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xb5688:jne:1;0xb56bb:jne:1;0xb56c8:jne:0;0xb56f3:jne:1;0xb5771:je:0;0xb57c8:je:0 */
    /* top actual targets: 199@0xa0631:7,90@0x8b334:5,349@0xc140b:4,92@0x8b8cb:4,332@0xbd36d:2,348@0xc0d7d:2,18@0x7be9b:1,254@0xad32c:1 */
    /* operands: b0=enum4(0x62:422,0x50:105,0x3a:98,0x32:26);b1=var53(top=0xdc:39.3%);b2=var55(top=0x7b:39.3%);b3=var69(top=0xd0:39.5%);b4=var63(top=0xaa:39.5%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x592d1456u ^ 0x6ef9e3c1u;
    return r;
}

static VMOpResult path_entry_108_cf3c455192fb(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=108, native=0x8f24b, path=cf3c455192fb1112, class=static_validated, events=25 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x8f368:jne:1;0x8f38e:jne:1;0x8f3a8:jne:0;0x8f3ec:je:1;0x8f438:jne:1;0x8f4f4:je:1;0x8f53a:je:0;0x8f55b:je:1 */
    /* top actual targets: 215@0xa4609:13,337@0xbec0e:3,18@0x7be9b:2,28@0x7e390:2,254@0xad32c:1,273@0xb11ca:1,333@0xbd8af:1,340@0xbf435:1 */
    /* operands: b0=var228(top=0xce:5.1%);b1=var237(top=0x85:6.6%) */
    /* GPR+scratch branch profile: 0/917 unknown branches (0.0%): */
    vm->state = state0 + 0x11961dc7u ^ 0x5fa19cc7u - flags0;
    vm->flags = flags0 ^ 0x1d98f07au & 0x60594c67u - 0x2e3abdaeu;
    return r;
}

static VMOpResult path_entry_146_30e223e338ce(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=146, native=0x96407, path=30e223e338ce2615, class=static_validated, events=25 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=12 */
    /* branch path: 0x96428:je:0;0x96492:je:0;0x966c4:jne:1;0x966d3:jne:1;0x966f8:jne:1;0x9671d:jne:0 */
    /* top actual targets: 258@0xadf2c:11,79@0x885b0:6,301@0xb708d:2,172@0x9b68a:1,203@0xa1484:1,337@0xbec0e:1,340@0xbf435:1,43@0x8173d:1 */
    /* operands: b0=enum3(0x3a:379,0x50:122,0x62:77);b1=var58(top=0x09:27.5%);b2=var66(top=0x6e:15.9%);b3=var52(top=0x47:16.6%);b4=var53(top=0x92:18.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u;
    vm->flags = flags0 & 0xa6d4251u ^ 0x409c2e61u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 + flags0)) ^ 0x2e312e01u)) & (mask32((mask32((mask32(flags0 & 0xa6d4251u)) ^ 0x409c2e61u)) + 0x7d882664u)))) + 0x4a5b7e16u)) ^ (mask32(U16(vm->ip + 0x3u) + (mask32((mask32(flags0 & 0xa6d4251u)) ^ 0x409c2e61u)))))))) + 0x2cff1885u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_082_7e7337c12e79(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=82, native=0x8920e, path=7e7337c12e791cef, class=static_validated, events=24 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=24 */
    /* branch path: 0x8922d:je:0;0x8925b:je:1;0x89293:je:1;0x892c8:je:1;0x89338:je:1 */
    /* top actual targets: 333@0xbd8af:14,99@0x8c99a:10 */
    /* operands: b0=var11(top=0x3e:45.1%);b1=var9(top=0xb1:45.1%);b2=0x62 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + flags0 + 0x1bc90d20u;
    vm->flags = flags0 + 0x1bc90d20u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 + flags0)))) + 0x5cc5e4d8u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_105_91b6ae9102ae(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=105, native=0x8e6b4, path=91b6ae9102ae61fe, class=static_validated, events=24 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x8e713:je:0;0x8e925:jne:1;0x8e94d:jne:1;0x8e96f:jne:0;0x8e9a6:jne:1 */
    /* top actual targets: 254@0xad32c:5,273@0xb11ca:4,332@0xbd36d:4,345@0xc02e4:3,291@0xb4edd:2,317@0xba1e2:2,269@0xb045b:1,281@0xb2db6:1 */
    /* operands: b0=var58(top=0x28:38.2%);b1=var76(top=0xa6:38.2%);b2=var22(top=0xf0:39.0%);b3=var11(top=0x0a:41.4%);b4=enum4(0x62:366,0x32:151,0x50:84,0x3a:70) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu & U16(vm->ip + 0x0u) + state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu + flags0 ^ 0x6808cf40u - 0x72c2e29bu - U16(vm->ip + 0x2u);
    vm->flags = flags0 ^ 0x6808cf40u - 0x72c2e29bu ^ 0x35dcbb88u;
    return r;
}

static VMOpResult path_entry_146_5e2464f8cfc2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=146, native=0x96407, path=5e2464f8cfc23b1a, class=static_validated, events=23 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=8 */
    /* branch path: 0x96428:je:0;0x96492:je:0;0x966c4:jne:1;0x966d3:jne:1;0x966f8:jne:0;0x9671d:jne:1 */
    /* top actual targets: 79@0x885b0:7,28@0x7e390:5,189@0x9e7af:4,220@0xa522e:3,268@0xb0007:2,347@0xc088d:1,3@0x78c77:1 */
    /* operands: b0=enum3(0x3a:379,0x50:122,0x62:77);b1=var58(top=0x09:27.5%);b2=var66(top=0x6e:15.9%);b3=var52(top=0x47:16.6%);b4=var53(top=0x92:18.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u;
    vm->flags = flags0 & 0xa6d4251u ^ 0x409c2e61u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 + flags0)) ^ 0x2e312e01u)) & (mask32((mask32((mask32(flags0 & 0xa6d4251u)) ^ 0x409c2e61u)) + 0x7d882664u)))) + 0x4a5b7e16u)) ^ (mask32(U16(vm->ip + 0x3u) + (mask32((mask32(flags0 & 0xa6d4251u)) ^ 0x409c2e61u)))))))) + 0x2cff1885u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_030_b259ea1acea9(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=b259ea1acea9e423, class=static_validated, events=22 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x7e868:je:1;0x7e896:je:0;0x7e8b1:je:0;0x7e913:je:0;0x7e92e:je:0;0x7eb45:je:0 */
    /* top actual targets: 307@0xb8064:9,180@0x9cf32:4,185@0x9d964:3,91@0x8b6de:2,172@0x9b68a:1,183@0x9d495:1,269@0xb045b:1,49@0x82820:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | (mask32(flags0 & 0x614d4b17u)))) + 0x64fd160cu)))) + 0x5903fc84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_105_60e314aeef6f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=105, native=0x8e6b4, path=60e314aeef6f3feb, class=static_validated, events=22 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x8e713:je:1;0x8e925:jne:1;0x8e94d:jne:1;0x8e96f:jne:1;0x8e9a6:jne:0 */
    /* top actual targets: 122@0x9170d:5,297@0xb64d7:5,185@0x9d964:3,253@0xacfb1:3,18@0x7be9b:2,322@0xbb3c9:1,349@0xc140b:1,3@0x78c77:1 */
    /* operands: b0=var58(top=0x28:38.2%);b1=var76(top=0xa6:38.2%);b2=var22(top=0xf0:39.0%);b3=var11(top=0x0a:41.4%);b4=enum4(0x62:366,0x32:151,0x50:84,0x3a:70) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu & U16(vm->ip + 0x0u) + state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu + flags0 ^ 0x6808cf40u - 0x72c2e29bu - U16(vm->ip + 0x2u);
    vm->flags = flags0 ^ 0x6808cf40u - 0x72c2e29bu ^ 0x35dcbb88u;
    return r;
}

static VMOpResult path_entry_108_6bdaae24c23e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=108, native=0x8f24b, path=6bdaae24c23e2042, class=static_validated, events=22 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x8f368:jne:1;0x8f38e:jne:1;0x8f3a8:jne:0;0x8f3ec:je:0;0x8f438:jne:1;0x8f4f4:je:0;0x8f53a:je:0;0x8f55b:je:1 */
    /* top actual targets: 168@0x9aa83:6,258@0xadf2c:4,28@0x7e390:3,337@0xbec0e:3,185@0x9d964:1,189@0x9e7af:1,273@0xb11ca:1,307@0xb8064:1 */
    /* operands: b0=var228(top=0xce:5.1%);b1=var237(top=0x85:6.6%) */
    /* GPR+scratch branch profile: 0/917 unknown branches (0.0%): */
    vm->state = state0 + 0x11961dc7u ^ 0x5fa19cc7u - flags0;
    vm->flags = flags0 ^ 0x1d98f07au & 0x60594c67u - 0x2e3abdaeu;
    return r;
}

static VMOpResult path_entry_144_97b8099c72e3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=144, native=0x95887, path=97b8099c72e3d6d4, class=static_validated, events=22 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x959a6:jne:1;0x959b1:jne:1;0x959bd:jne:0;0x959d3:je:1;0x959e9:jne:1;0x95a08:je:1 */
    /* top actual targets: 18@0x7be9b:14,347@0xc088d:3,66@0x855ff:3,266@0xaf8af:2 */
    /* operands: b0=var32(top=0x87:10.1%);b1=var11(top=0x99:16.2%) */
    /* GPR+scratch branch profile: 0/661 unknown branches (0.0%): */
    vm->state = state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    vm->flags = flags0 - 0x387407b9u + 0x2cd392b6u;
    return r;
}

static VMOpResult path_entry_208_5273b21feba7(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=208, native=0xa2361, path=5273b21feba7b6a2, class=static_validated, events=22 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xa237a:je:1;0xa23bd:je:1;0xa24d5:je:1;0xa2510:je:1;0xa26dc:jne:1;0xa270b:jne:1;0xa272d:jne:0;0xa2755:jne:1 */
    /* top actual targets: 18@0x7be9b:5,258@0xadf2c:4,307@0xb8064:4,168@0x9aa83:3,196@0x9fbcd:3,172@0x9b68a:1,43@0x8173d:1,79@0x885b0:1 */
    /* operands: b0=enum3(0x3a:404,0x62:335,0x50:63);b1=var62(top=0xa7:15.7%);b2=var77(top=0xf1:15.7%);b3=var29(top=0xa5:28.8%);b4=var52(top=0xe2:19.6%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    vm->flags = flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    /* r.slot = (mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32(state0 + (mask32((mask32((mask32((mask32((mask32(flags0 ^ (mask32(state0 + 0x7ad87935u)))) ^ 0x39b69246u)) ^ (mask32(state0 | 0x7a909dc0u)))) ^ 0x58abcfc7u)) | 0x1477a707u)))) - (mask32((mask32((mask32((mask32(flags0 ^ (mask32(state0 + 0x7ad87935u)))) ^ 0x39b69u...#9f40b863da92; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_237_749e34fb357a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=749e34fb357a9d94, class=static_validated, events=22 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa8efb:je:1;0xa8f3c:je:1;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:1;0xa9025:jne:0;0xa90d7:je:1;0xa9292:je:1 */
    /* top actual targets: 144@0x95887:8,256@0xad849:5,198@0xa037e:3,160@0x994cf:2,173@0x9ba74:2,108@0x8f24b:1,257@0xadbfd:1 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    return r;
}

static VMOpResult path_entry_239_69142fcd451d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=239, native=0xa991e, path=69142fcd451d17de, class=static_validated, events=22 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0xa9967:je:1;0xa99c8:je:0;0xa9b87:je:1 */
    /* top actual targets: 297@0xb64d7:6,199@0xa0631:4,28@0x7e390:3,157@0x98a9a:2,185@0x9d964:2,320@0xbada5:2,319@0xba72f:1,37@0x80685:1 */
    /* operands: b0=var140(top=0x2a:5.5%);b1=var65(top=0x02:11.2%);b2=var36(top=0xc1:13.6%);b3=var23(top=0x21:15.7%);b4=var72(top=0xbe:8.8%);b5=var29(top=0xa6:21.0%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu & U32(vm->ip + 0x0u) - state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu - U16(vm->ip + 0x4u) + state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu & U32(vm->ip + 0x0u) - state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu - 0x3650a0aeu;
    vm->flags = flags0 & state0 + 0x40a7aa16u + flags0 + 0x627d85abu + 0x29b54516u & 0x66aaa5eu ^ 0x7efd4127u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x4u) + (mask32((mask32((mask32((mask32(state0 + 0x40a7aa16u)) + flags0)) & 0x39d16b3eu)) & (mask32(U32(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 + 0x40a7aa16u)) + flags0)) & 0x39d16b3eu)))))))) - 0x3650a0aeu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_253_efa9099da97e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=253, native=0xacfb1, path=efa9099da97e022a, class=static_validated, events=22 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=5 */
    /* branch path: 0xacff9:je:0;0xad075:je:1 */
    /* top actual targets: 18@0x7be9b:3,28@0x7e390:3,49@0x82820:3,70@0x8610e:2,114@0x90319:1,168@0x9aa83:1,172@0x9b68a:1,189@0x9e7af:1 */
    /* operands: b0=var26(top=0x86:22.2%);b1=var11(top=0xc2:20.1%);b2=var177(top=0x34:17.8%);b3=var157(top=0xa1:13.2%);b4=var160(top=0x04:13.3%);b5=var155(top=0x08:13.9%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + 0x7c5d4802u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_291_983583bc036a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=291, native=0xb4edd, path=983583bc036af2da, class=static_validated, events=22 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=10 */
    /* branch path: 0xb4f4a:je:1;0xb4f8e:je:1;0xb4fd9:je:0;0xb5234:je:0 */
    /* top actual targets: 330@0xbc9b8:12,292@0xb540f:4,185@0x9d964:1,269@0xb045b:1,273@0xb11ca:1,307@0xb8064:1,56@0x83e76:1,66@0x855ff:1 */
    /* operands: b0=var55(top=0x07:19.2%);b1=var70(top=0xc4:19.2%);b2=var58(top=0x3b:27.8%);b3=var67(top=0x8e:19.0%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ U16(vm->ip + 0x0u) - flags0 ^ 0x5acd2fau ^ 0x12648cbeu - flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu;
    vm->flags = flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32(state0 ^ flags0)) ^ (mask32(U16(vm->ip + 0x0u) - (mask32(flags0 ^ 0x12648cbeu)))))) - (mask32((mask32((mask32(flags0 ^ 0x12648cbeu)) ^ 0x2e91bd1cu)) + 0x610956a9u)))) & (mask32((mask32((mask32((mask32((mask32(flags0 ^ 0x12648cbeu)) ^ 0x2e91bd1cu)) | 0x55d764bbu)) ^ 0...#e630c000dc4d; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_292_ea3398581b24(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=292, native=0xb540f, path=ea3398581b2413d0, class=static_validated, events=22 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xb5688:jne:1;0xb56bb:jne:1;0xb56c8:jne:1;0xb56f3:jne:0;0xb5771:je:0;0xb57c8:je:0 */
    /* top actual targets: 18@0x7be9b:4,281@0xb2db6:4,92@0x8b8cb:3,28@0x7e390:2,317@0xba1e2:2,140@0x94e5a:1,200@0xa0a9e:1,215@0xa4609:1 */
    /* operands: b0=enum4(0x62:422,0x50:105,0x3a:98,0x32:26);b1=var53(top=0xdc:39.3%);b2=var55(top=0x7b:39.3%);b3=var69(top=0xd0:39.5%);b4=var63(top=0xaa:39.5%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x592d1456u ^ 0x6ef9e3c1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) ^ (mask32((mask32(state0 | flags0)) + (mask32(U16(vm->ip + 0x1u) - (mask32(state0 | flags0)))))))) + 0x628c34bcu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_319_b759a5ef6216(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=319, native=0xba72f, path=b759a5ef62168bb4, class=static_validated, events=22 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0xba74a:je:1;0xba78b:je:1;0xba89f:je:0;0xba975:jne:1;0xba983:jne:1;0xba992:jne:1;0xba9a0:jne:0;0xbaa0a:je:0;0xbab08:je:0 */
    /* top actual targets: 173@0x9ba74:9,257@0xadbfd:4,144@0x95887:3,108@0x8f24b:2,160@0x994cf:2,352@0xc1ec4:2 */
    /* operands: b0=0x3d;b1=0x01;b2=var42(top=0xe6:28.4%);b3=var47(top=0x2e:17.5%);b4=var21(top=0x00:79.0%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32(state0 & (mask32(flags0 & (mask32(state0 + 0x4fa9822eu)))))) | 0x5ed258f1u)) | (mask32(flags0 & (mask32(state0 + 0x4fa9822eu)))))) ^ (mask32((mask32(flags0 & (mask32(state0 + 0x4fa9822eu)))) + 0x2ba77993u)))))) + 0x7f20b820u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_030_135476ff0b34(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=135476ff0b343a05, class=static_validated, events=21 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7e868:je:0;0x7e896:je:0;0x7e8b1:je:1;0x7e913:je:0;0x7e92e:je:0;0x7eb45:je:0 */
    /* top actual targets: 307@0xb8064:11,91@0x8b6de:3,172@0x9b68a:1,180@0x9cf32:1,183@0x9d495:1,185@0x9d964:1,333@0xbd8af:1,337@0xbec0e:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    return r;
}

static VMOpResult path_entry_292_35cf8772598e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=292, native=0xb540f, path=35cf8772598e55cb, class=static_validated, events=21 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xb5688:jne:1;0xb56bb:jne:1;0xb56c8:jne:0;0xb56f3:jne:1;0xb5771:je:0;0xb57c8:je:1 */
    /* top actual targets: 322@0xbb3c9:5,345@0xc02e4:5,332@0xbd36d:4,74@0x86d43:4,185@0x9d964:2,317@0xba1e2:1 */
    /* operands: b0=enum4(0x62:422,0x50:105,0x3a:98,0x32:26);b1=var53(top=0xdc:39.3%);b2=var55(top=0x7b:39.3%);b3=var69(top=0xd0:39.5%);b4=var63(top=0xaa:39.5%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x592d1456u ^ 0x6ef9e3c1u;
    return r;
}

static VMOpResult path_entry_352_f73d8af7bb1a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=352, native=0xc1ec4, path=f73d8af7bb1af6c4, class=static_validated, events=21 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0xc1f17:je:0;0xc1f5b:je:1;0xc1fba:jne:1;0xc1fc6:jne:1;0xc1fd3:jne:0;0xc1fe9:je:0;0xc2000:jne:1;0xc2027:je:0 */
    /* top actual targets: 157@0x98a9a:9,189@0x9e7af:6,66@0x855ff:3,273@0xb11ca:1,300@0xb6c36:1,337@0xbec0e:1 */
    /* operands: b0=var124(top=0x16:8.0%);b1=var55(top=0xdb:8.3%) */
    /* GPR+scratch branch profile: 0/912 unknown branches (0.0%): */
    vm->state = state0 & 0x31863366u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 & 0x31863366u)))) + 0x331dfc06u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_186_834a23ba9197(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=186, native=0x9dcae, path=834a23ba91970f51, class=static_validated, events=20 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=20 */
    /* branch path: 0x9dcd5:je:1;0x9de1f:jne:1;0x9de2e:jne:1;0x9de4c:jne:0;0x9de68:jne:1;0x9df1c:je:0 */
    /* top actual targets: 257@0xadbfd:9,144@0x95887:4,173@0x9ba74:3,160@0x994cf:2,198@0xa037e:2 */
    /* operands: b0=var13(top=0x55:20.0%);b1=0x3d;b2=0x01;b3=var13(top=0xb8:20.0%);b4=var11(top=0x73:22.0%) */
    /* GPR+scratch branch profile: 0/174 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 + 0x72198f10u;
    vm->flags = flags0 & 0x2dc3128fu + 0x6176101u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + state0)) + 0x72198f10u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_208_4cb95a94c541(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=208, native=0xa2361, path=4cb95a94c54102a3, class=static_validated, events=20 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0xa237a:je:0;0xa23bd:je:0;0xa24d5:je:1;0xa2510:je:1;0xa26dc:jne:1;0xa270b:jne:1;0xa272d:jne:1;0xa2755:jne:0 */
    /* top actual targets: 79@0x885b0:9,258@0xadf2c:4,269@0xb045b:4,203@0xa1484:2,215@0xa4609:1 */
    /* operands: b0=enum3(0x3a:404,0x62:335,0x50:63);b1=var62(top=0xa7:15.7%);b2=var77(top=0xf1:15.7%);b3=var29(top=0xa5:28.8%);b4=var52(top=0xe2:19.6%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    vm->flags = flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    /* r.slot = (mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32(state0 + (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(flags0 - 0x24472ebau)) ^ 0x60ff2036u)) + 0x7627b830u)) - 0x42fb6768u)) ^ (mask32(state0 + 0x7ad87935u)))) ^ 0x39b69246u)) ^ (mask32(state0 | 0x7a909dc0u)))) ^ 0x58abcfc7u)) | 0x1477au...#941f16f47f0a; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_222_155b8bfb7079(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=222, native=0xa5f3c, path=155b8bfb7079c907, class=static_validated, events=20 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=18 */
    /* branch path: 0xa5fbf:je:0;0xa600d:je:0;0xa6222:jne:1;0xa622f:jne:1;0xa6250:jne:0;0xa6276:jne:1 */
    /* top actual targets: 203@0xa1484:4,268@0xb0007:4,297@0xb64d7:4,199@0xa0631:2,28@0x7e390:2,49@0x82820:2,172@0x9b68a:1,258@0xadf2c:1 */
    /* operands: b0=var60(top=0x10:25.6%);b1=var60(top=0xf8:25.2%);b2=var58(top=0xd9:25.2%);b3=var46(top=0x4e:25.2%);b4=enum4(0x3a:97,0x50:89,0x62:67,0x32:1) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0;
    vm->flags = flags0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)) & (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)))) + (mask32((mask32((mask32((mask32(flags0 | 0x5b15ab43u)) | 0x4cc95222u)) | 0x70d72f46u...#496f2a93f8d6; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_105_8ec2bf719d63(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=105, native=0x8e6b4, path=8ec2bf719d6351c7, class=static_validated, events=19 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x8e713:je:1;0x8e925:jne:1;0x8e94d:jne:1;0x8e96f:jne:0;0x8e9a6:jne:1 */
    /* top actual targets: 121@0x91379:4,199@0xa0631:4,18@0x7be9b:3,291@0xb4edd:3,281@0xb2db6:2,345@0xc02e4:1,49@0x82820:1,66@0x855ff:1 */
    /* operands: b0=var58(top=0x28:38.2%);b1=var76(top=0xa6:38.2%);b2=var22(top=0xf0:39.0%);b3=var11(top=0x0a:41.4%);b4=enum4(0x62:366,0x32:151,0x50:84,0x3a:70) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu & U16(vm->ip + 0x0u) + state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu + flags0 ^ 0x6808cf40u - 0x72c2e29bu - U16(vm->ip + 0x2u);
    vm->flags = flags0 ^ 0x6808cf40u - 0x72c2e29bu ^ 0x35dcbb88u;
    return r;
}

static VMOpResult path_entry_208_975d39be5ca8(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=208, native=0xa2361, path=975d39be5ca8b73a, class=static_validated, events=19 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xa237a:je:0;0xa23bd:je:0;0xa24d5:je:0;0xa2510:je:0;0xa26dc:jne:1;0xa270b:jne:1;0xa272d:jne:1;0xa2755:jne:0 */
    /* top actual targets: 114@0x90319:13,83@0x8947b:3,333@0xbd8af:2,258@0xadf2c:1 */
    /* operands: b0=enum3(0x3a:404,0x62:335,0x50:63);b1=var62(top=0xa7:15.7%);b2=var77(top=0xf1:15.7%);b3=var29(top=0xa5:28.8%);b4=var52(top=0xe2:19.6%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    vm->flags = flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    /* r.slot = (mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32(state0 + (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(flags0 - 0x24472ebau)) ^ 0x60ff2036u)) + 0x7627b830u)) - 0x42fb6768u)) ^ (mask32(state0 + 0x7ad87935u)))) ^ 0x39b69246u)) ^ (mask32(state0 | 0x7a909dc0u)))) ^ 0x58abcfc7u)) | 0x1477au...#fb4d75de8e9e; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_352_e0e1a73fcf72(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=352, native=0xc1ec4, path=e0e1a73fcf72bd35, class=static_validated, events=19 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xc1f17:je:0;0xc1f5b:je:0;0xc1fba:jne:1;0xc1fc6:jne:1;0xc1fd3:jne:0;0xc1fe9:je:1;0xc2000:jne:1;0xc2027:je:0 */
    /* top actual targets: 189@0x9e7af:3,337@0xbec0e:3,157@0x98a9a:2,168@0x9aa83:2,297@0xb64d7:2,66@0x855ff:2,300@0xb6c36:1,322@0xbb3c9:1 */
    /* operands: b0=var124(top=0x16:8.0%);b1=var55(top=0xdb:8.3%) */
    /* GPR+scratch branch profile: 0/912 unknown branches (0.0%): */
    vm->state = state0 & 0x31863366u;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_017_b69efde9694f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=17, native=0x7bae9, path=b69efde9694fd2f9, class=static_validated, events=18 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0x7bafa:je:1;0x7bbdd:jne:0;0x7bbea:jne:1;0x7bbf8:jne:1;0x7bc05:jne:1;0x7bc7b:je:0;0x7bd0e:je:1 */
    /* top actual targets: 300@0xb6c36:18 */
    /* operands: b0=var54(top=0x12:33.9%);b1=var37(top=0xff:35.9%);b2=enum4(0x3a:321,0x62:293,0x32:75,0x50:69);b3=var28(top=0x10:34.4%);b4=var12(top=0xa0:35.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x4365071cu - 0x69693e45u & 0x3d8b48f7u - 0x1b99cfe0u + 0x7ec4552au & 0x2b98de46u + 0x459da9b2u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32(state0 | (mask32(flags0 ^ 0x4365071cu)))) & (mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 | (mask32(flags0 ^ 0x4365071cu)))))) + (mask32(flags0 ^ 0x4365071cu)))))) ^ 0x95f9698u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_037_ceda862ca5f0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=37, native=0x80685, path=ceda862ca5f0ddeb, class=static_validated, events=18 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=3 */
    /* branch path: 0x806c4:je:1;0x8075e:je:0;0x807c6:je:0;0x808c1:jne:1;0x808d1:jne:1;0x808ef:jne:1;0x8090d:jne:0;0x8099e:je:0;0x809da:je:0;0x80ac9:je:1 */
    /* top actual targets: 160@0x994cf:8,144@0x95887:2,198@0xa037e:2,257@0xadbfd:2,352@0xc1ec4:2,108@0x8f24b:1,173@0x9ba74:1 */
    /* operands: b0=var141(top=0xc1:12.7%);b1=var150(top=0x3e:12.6%);b2=var27(top=0x00:78.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x504fc3du - 0x4eca0e49u;
    vm->flags = flags0 & 0x714eea75u + 0x53097984u ^ state0 - flags0 + 0x504fc3du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - (mask32(flags0 + 0x504fc3du)))) - 0x4eca0e49u)))) ^ 0x384e1c86u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_125_640e99e97634(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=125, native=0x922c4, path=640e99e97634cb74, class=static_validated, events=18 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=18 */
    /* branch path: 0x923cb:jne:0;0x923df:jne:1;0x923f7:jne:1;0x9240b:jne:1;0x924eb:je:0 */
    /* top actual targets: 316@0xb987b:14,246@0xab427:2,145@0x95b5c:1,75@0x873fc:1 */
    /* operands: b0=var25(top=0x2b:70.5%);b1=var25(top=0x60:70.5%);b2=var24(top=0x21:70.5%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/95 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x0u) + state0 - 0x7b275316u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + state0)) - 0x7b275316u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_347_c9afc1bcaa30(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=347, native=0xc088d, path=c9afc1bcaa30b134, class=static_validated, events=18 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xc093d:je:1;0xc09c2:je:1 */
    /* top actual targets: 297@0xb64d7:3,118@0x90c23:2,168@0x9aa83:2,18@0x7be9b:2,148@0x96b6e:1,158@0x99029:1,174@0x9bd8f:1,184@0x9d694:1 */
    /* operands: b0=var256(top=0xe6:2.1%);b1=var79(top=0x0b:6.4%);b2=var230(top=0xba:3.9%);b3=var101(top=0x82:10.2%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ state0;
    return r;
}

static VMOpResult path_entry_348_8800803f96b6(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=348, native=0xc0d7d, path=8800803f96b6b819, class=static_validated, events=18 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=18 */
    /* branch path: 0xc0e89:je:0;0xc0fff:jne:1;0xc101b:jne:1;0xc103b:jne:0;0xc1049:jne:1;0xc10e5:je:1;0xc11b6:je:0;0xc1278:je:1 */
    /* top actual targets: 173@0x9ba74:5,160@0x994cf:4,352@0xc1ec4:4,198@0xa037e:3,108@0x8f24b:1,257@0xadbfd:1 */
    /* operands: b0=var11(top=0xc5:21.6%);b1=var13(top=0x7c:16.2%);b2=0x3d;b3=0x01;b4=var15(top=0x13:16.2%) */
    /* GPR+scratch branch profile: 0/224 unknown branches (0.0%): */
    vm->state = state0 & 0x4ead272u + flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 & 0x4ead272u)) + flags0)) | (mask32(flags0 | 0x2730b0ccu)))) & 0x19c08712u)))) - 0x369ef0d5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_017_d362a1b2b30b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=17, native=0x7bae9, path=d362a1b2b30bce4e, class=static_validated, events=17 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7bafa:je:0;0x7bbdd:jne:1;0x7bbea:jne:1;0x7bbf8:jne:0;0x7bc05:jne:1;0x7bc7b:je:1;0x7bd0e:je:1 */
    /* top actual targets: 185@0x9d964:5,260@0xae90b:4,349@0xc140b:4,200@0xa0a9e:1,215@0xa4609:1,350@0xc1926:1,66@0x855ff:1 */
    /* operands: b0=var54(top=0x12:33.9%);b1=var37(top=0xff:35.9%);b2=enum4(0x3a:321,0x62:293,0x32:75,0x50:69);b3=var28(top=0x10:34.4%);b4=var12(top=0xa0:35.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x4365071cu - 0x69693e45u & 0x3d8b48f7u - 0x1b99cfe0u + 0x7ec4552au & 0x2b98de46u + 0x459da9b2u;
    return r;
}

static VMOpResult path_entry_122_d9b4f55f629e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=122, native=0x9170d, path=d9b4f55f629e1412, class=static_validated, events=17 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=17 */
    /* branch path: 0x9183d:jne:1;0x9184b:jne:1;0x9185a:jne:0;0x91872:jne:1;0x91935:je:0 */
    /* top actual targets: 316@0xb987b:14,199@0xa0631:1,210@0xa2da3:1,258@0xadf2c:1 */
    /* operands: b0=var38(top=0x63:30.3%);b1=var40(top=0x71:30.1%);b2=0x3d;b3=0x01;b4=var37(top=0xd7:30.1%) */
    /* GPR+scratch branch profile: 0/605 unknown branches (0.0%): */
    vm->state = state0 + flags0 - U16(vm->ip + 0x0u) + state0 + flags0 + 0x1af9be18u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 + flags0)))) + 0x1af9be18u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_198_edebcddd4017(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=198, native=0xa037e, path=edebcddd401771d5, class=static_validated, events=17 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa0391:je:0;0xa04a9:jne:1;0xa04b6:jne:1;0xa04c4:jne:0;0xa04da:je:1;0xa04f1:jne:1 */
    /* top actual targets: 300@0xb6c36:11,350@0xc1926:3,253@0xacfb1:1,260@0xae90b:1,337@0xbec0e:1 */
    /* operands: b0=var217(top=0xe3:5.4%);b1=var220(top=0x54:5.3%) */
    /* GPR+scratch branch profile: 0/654 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u - U16(vm->ip + 0x0u) - state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u ^ 0x3fe99379u;
    vm->flags = flags0 + 0x15b2dfa5u;
    return r;
}

static VMOpResult path_entry_251_08d0f0bf716b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=251, native=0xacbc5, path=08d0f0bf716bc8f7, class=static_validated, events=17 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=17 */
    /* branch path: 0xaccad:jne:1;0xaccd2:jne:1;0xaccea:jne:1;0xacd02:jne:0;0xacdb0:je:0 */
    /* top actual targets: 198@0xa037e:17 */
    /* operands: b0=0x3d;b1=0x01;b2=enum2(0x83:22,0x1f:17);b3=enum2(0x39:22,0xef:17);b4=enum2(0x06:22,0xa5:17) */
    /* GPR+scratch branch profile: 0/85 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) - state0 ^ 0x7cf1b821u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - state0)) ^ 0x7cf1b821u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_290_8f4e1239977a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=290, native=0xb4c00, path=8f4e1239977a47c6, class=static_validated, events=17 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=17 */
    /* branch path: 0xb4cc0:jne:1;0xb4cd4:jne:1;0xb4ce5:jne:1;0xb4cfb:jne:0;0xb4d9d:je:0 */
    /* top actual targets: 257@0xadbfd:17 */
    /* operands: b0=0x3d;b1=0x01;b2=enum3(0x5f:10,0x77:10,0x46:7);b3=enum3(0x3c:10,0x94:10,0x7c:7);b4=enum3(0xd5:10,0xbb:10,0x8f:7) */
    /* GPR+scratch branch profile: 0/85 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x3acb356du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 | (mask32(flags0 & 0x3acb356du)))))) ^ 0x29d9517bu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_291_04cf4f539f61(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=291, native=0xb4edd, path=04cf4f539f6182dc, class=static_validated, events=17 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=8 */
    /* branch path: 0xb4f4a:je:1;0xb4f8e:je:0;0xb4fd9:je:0;0xb5234:je:0 */
    /* top actual targets: 18@0x7be9b:9,140@0x94e5a:2,350@0xc1926:2,79@0x885b0:2,154@0x97ce6:1,239@0xa991e:1 */
    /* operands: b0=var55(top=0x07:19.2%);b1=var70(top=0xc4:19.2%);b2=var58(top=0x3b:27.8%);b3=var67(top=0x8e:19.0%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ U16(vm->ip + 0x0u) - flags0 ^ 0x5acd2fau ^ 0x12648cbeu - flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu;
    vm->flags = flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32(state0 ^ flags0)) ^ (mask32(U16(vm->ip + 0x0u) - (mask32((mask32(flags0 ^ 0x5acd2fau)) ^ 0x12648cbeu)))))) - (mask32((mask32((mask32((mask32(flags0 ^ 0x5acd2fau)) ^ 0x12648cbeu)) ^ 0x2e91bd1cu)) + 0x610956a9u)))) & (mask32((mask32((mask32((mask32((mask32((mask32(fla...#f51d194d0649; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_026_27c8df69e312(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=26, native=0x7dbbb, path=27c8df69e312fe92, class=static_validated, events=16 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7dc03:je:1;0x7dc9b:je:1;0x7dd00:je:1;0x7dd5d:je:1;0x7ddeb:jne:1;0x7ddfc:jne:1;0x7de1d:je:0;0x7de2c:je:0;0x7de4d:je:0;0x7dea3:je:1 */
    /* top actual targets: 203@0xa1484:14,167@0x9a8d2:1,340@0xbf435:1 */
    /* operands: b0=var176(top=0x9e:4.5%);b1=var242(top=0xcf:3.6%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - 0x471264cau + flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x471264cau;
    vm->flags = flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x471264cau;
    return r;
}

static VMOpResult path_entry_030_4ed836df8347(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=4ed836df83473778, class=static_validated, events=16 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7e868:je:0;0x7e896:je:0;0x7e8b1:je:0;0x7e913:je:1;0x7e92e:je:0;0x7eb45:je:0 */
    /* top actual targets: 307@0xb8064:6,180@0x9cf32:2,183@0x9d495:2,49@0x82820:2,196@0x9fbcd:1,269@0xb045b:1,333@0xbd8af:1,79@0x885b0:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    return r;
}

static VMOpResult path_entry_030_d29615831c79(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=d29615831c79b855, class=static_validated, events=16 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x7e868:je:0;0x7e896:je:1;0x7e8b1:je:0;0x7e913:je:0;0x7e92e:je:1;0x7eb45:je:1 */
    /* top actual targets: 192@0x9f00a:6,203@0xa1484:6,157@0x98a9a:1,183@0x9d495:1,282@0xb3128:1,307@0xb8064:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | flags0)) + 0x64fd160cu)))) + 0x5903fc84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_074_41fbb3da3a73(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=74, native=0x86d43, path=41fbb3da3a73d4ca, class=static_validated, events=16 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=16 */
    /* branch path: 0x86dd0:je:0;0x870b5:jne:1;0x870cd:jne:1;0x870f3:jne:0;0x87104:jne:1;0x871d5:je:0;0x872c2:je:1 */
    /* top actual targets: 160@0x994cf:5,352@0xc1ec4:5,198@0xa037e:4,144@0x95887:1,173@0x9ba74:1 */
    /* operands: b0=var13(top=0x4c:15.2%);b1=var13(top=0x2c:15.2%);b2=0x3d;b3=0x01;b4=var12(top=0x7f:18.2%) */
    /* GPR+scratch branch profile: 0/175 unknown branches (0.0%): */
    vm->state = state0 - flags0 & state0 - 0x7af5a4e2u - 0x619b65dcu ^ 0x65dcaffcu + 0x33d7fc12u;
    vm->flags = flags0 & state0 - 0x7af5a4e2u - 0x619b65dcu - state0 - flags0 & state0 - 0x7af5a4e2u - 0x619b65dcu ^ 0x65dcaffcu ^ 0x6adfe823u ^ 0x1a77c224u + 0x403a8d37u & 0x7bf9a401u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 - (mask32((mask32(flags0 & (mask32(state0 - 0x7af5a4e2u)))) - 0x619b65dcu)))) ^ 0x65dcaffcu)) + 0x33d7fc12u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_257_4c767eeb8531(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=257, native=0xadbfd, path=4c767eeb8531119d, class=static_validated, events=16 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xadc1e:je:0;0xadcc0:jne:1;0xadccc:jne:1;0xadcd9:jne:0;0xadcf0:je:1;0xadd06:jne:1;0xadd6a:je:0;0xadda4:je:0 */
    /* top actual targets: 157@0x98a9a:13,215@0xa4609:2,266@0xaf8af:1 */
    /* operands: b0=var32(top=0xe7:10.9%);b1=var43(top=0xb5:9.7%) */
    /* GPR+scratch branch profile: 0/918 unknown branches (0.0%): */
    vm->state = state0 - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_105_3baff5e6f167(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=105, native=0x8e6b4, path=3baff5e6f167d75f, class=static_validated, events=15 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x8e713:je:0;0x8e925:jne:1;0x8e94d:jne:1;0x8e96f:jne:1;0x8e9a6:jne:0 */
    /* top actual targets: 317@0xba1e2:4,319@0xba72f:3,192@0x9f00a:2,92@0x8b8cb:2,215@0xa4609:1,260@0xae90b:1,291@0xb4edd:1,49@0x82820:1 */
    /* operands: b0=var58(top=0x28:38.2%);b1=var76(top=0xa6:38.2%);b2=var22(top=0xf0:39.0%);b3=var11(top=0x0a:41.4%);b4=enum4(0x62:366,0x32:151,0x50:84,0x3a:70) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu & U16(vm->ip + 0x0u) + state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu + flags0 ^ 0x6808cf40u - 0x72c2e29bu - U16(vm->ip + 0x2u);
    vm->flags = flags0 ^ 0x6808cf40u - 0x72c2e29bu ^ 0x35dcbb88u;
    return r;
}

static VMOpResult path_entry_148_bcd4bee02985(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=148, native=0x96b6e, path=bcd4bee0298575db, class=static_validated, events=15 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=15 */
    /* branch path: 0x96c9a:jne:1;0x96ca8:jne:1;0x96cb7:jne:1;0x96cd9:jne:0;0x96d8c:je:0 */
    /* top actual targets: 144@0x95887:4,160@0x994cf:4,352@0xc1ec4:4,257@0xadbfd:3 */
    /* operands: b0=0x3d;b1=0x01;b2=var16(top=0xad:44.4%);b3=var12(top=0x79:53.5%);b4=var15(top=0x56:47.9%) */
    /* GPR+scratch branch profile: 0/525 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32(state0 & flags0)))) ^ 0x502e5379u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_200_a215be4cf4cc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=200, native=0xa0a9e, path=a215be4cf4ccdb3b, class=static_validated, events=15 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0xa0ae2:je:1;0xa0b3f:je:0;0xa0bb1:je:0;0xa0bf9:je:1 */
    /* top actual targets: 168@0x9aa83:1,190@0x9eacb:1,192@0x9f00a:1,203@0xa1484:1,237@0xa8e1f:1,291@0xb4edd:1,297@0xb64d7:1,317@0xba1e2:1 */
    /* operands: b0=var132(top=0xa4:13.0%);b1=var124(top=0xc1:9.3%);b2=var103(top=0x10:19.7%);b3=var102(top=0x5f:26.1%);b4=var28(top=0x48:16.1%);b5=var11(top=0x09:19.9%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 + flags0 - flags0 ^ 0x64193a1au ^ 0x227666a1u + U32(vm->ip + 0x0u) ^ flags0 & 0x21af07eu;
    vm->flags = flags0 & 0x21af07eu;
    r.slot = (uint32_t)(U16(vm->ip + 0x4u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_256_17cbf48c3743(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=256, native=0xad849, path=17cbf48c37434a4a, class=static_validated, events=15 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xad89b:jne:1;0xad8a7:jne:1;0xad8b4:jne:0;0xad8ca:je:1;0xad8e1:jne:1;0xad973:je:0;0xad9da:je:0;0xada6f:je:0 */
    /* top actual targets: 18@0x7be9b:3,268@0xb0007:3,43@0x8173d:3,124@0x91e81:1,157@0x98a9a:1,199@0xa0631:1,239@0xa991e:1,337@0xbec0e:1 */
    /* operands: b0=var155(top=0x3d:6.6%);b1=var156(top=0x27:6.6%) */
    /* GPR+scratch branch profile: 0/904 unknown branches (0.0%): */
    vm->state = state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au;
    vm->flags = flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au ^ state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au;
    return r;
}

static VMOpResult path_entry_257_803f19f81035(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=257, native=0xadbfd, path=803f19f8103572d0, class=static_validated, events=15 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xadc1e:je:0;0xadcc0:jne:1;0xadccc:jne:1;0xadcd9:jne:0;0xadcf0:je:1;0xadd06:jne:1;0xadd6a:je:0;0xadda4:je:1 */
    /* top actual targets: 18@0x7be9b:3,215@0xa4609:3,260@0xae90b:2,28@0x7e390:2,124@0x91e81:1,172@0x9b68a:1,185@0x9d964:1,199@0xa0631:1 */
    /* operands: b0=var32(top=0xe7:10.9%);b1=var43(top=0xb5:9.7%) */
    /* GPR+scratch branch profile: 0/918 unknown branches (0.0%): */
    vm->state = state0 - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_280_82ff788ea715(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=280, native=0xb2661, path=82ff788ea71516d6, class=static_validated, events=15 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=15 */
    /* branch path: 0xb2754:je:0;0xb2845:jne:1;0xb2867:jne:1;0xb287d:jne:0;0xb2897:jne:1;0xb2922:je:0;0xb2a90:je:0;0xb2c0a:je:0;0xb2c50:je:0 */
    /* top actual targets: 198@0xa037e:5,160@0x994cf:4,173@0x9ba74:4,257@0xadbfd:2 */
    /* operands: b0=enum5(0x37:66,0x2f:17,0x8f:10,0x5f:8,0x97:7);b1=enum4(0x48:71,0x45:19,0x43:10,0x46:8);b2=var11(top=0xc5:63.0%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/774 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x70ead2e5u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - 0x267d402fu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_43ae8e8d051c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=43ae8e8d051c8e1e, class=static_validated, events=15 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0xbc9d3:je:1;0xbca25:je:1;0xbcaa5:je:0;0xbcabc:je:0;0xbcaf6:je:0;0xbcd08:jne:1;0xbcd41:jne:1;0xbcd64:jne:0;0xbcd99:jne:1 */
    /* top actual targets: 281@0xb2db6:5,28@0x7e390:4,345@0xc02e4:2,269@0xb045b:1,332@0xbd36d:1,66@0x855ff:1,79@0x885b0:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_017_72cbc47e853a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=17, native=0x7bae9, path=72cbc47e853a8f13, class=static_validated, events=14 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7bafa:je:0;0x7bbdd:jne:1;0x7bbea:jne:1;0x7bbf8:jne:1;0x7bc05:jne:0;0x7bc7b:je:1;0x7bd0e:je:1 */
    /* top actual targets: 140@0x94e5a:4,307@0xb8064:3,200@0xa0a9e:2,185@0x9d964:1,199@0xa0631:1,220@0xa522e:1,3@0x78c77:1,83@0x8947b:1 */
    /* operands: b0=var54(top=0x12:33.9%);b1=var37(top=0xff:35.9%);b2=enum4(0x3a:321,0x62:293,0x32:75,0x50:69);b3=var28(top=0x10:34.4%);b4=var12(top=0xa0:35.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x4365071cu - 0x69693e45u & 0x3d8b48f7u - 0x1b99cfe0u + 0x7ec4552au & 0x2b98de46u + 0x459da9b2u;
    return r;
}

static VMOpResult path_entry_030_053d78aacc7d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=053d78aacc7d5f1e, class=static_validated, events=14 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x7e868:je:0;0x7e896:je:0;0x7e8b1:je:1;0x7e913:je:1;0x7e92e:je:1;0x7eb45:je:1 */
    /* top actual targets: 192@0x9f00a:4,203@0xa1484:4,91@0x8b6de:2,180@0x9cf32:1,183@0x9d495:1,196@0x9fbcd:1,337@0xbec0e:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | flags0)) + 0x64fd160cu)))) + 0x5903fc84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_048_2eb8ab60948f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=48, native=0x82477, path=2eb8ab60948f0d63, class=static_validated, events=14 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=14 */
    /* branch path: 0x824a2:je:0;0x8259a:jne:1;0x825a7:jne:1;0x825b4:jne:0;0x825c0:jne:1;0x8260a:je:1 */
    /* top actual targets: 300@0xb6c36:6,239@0xa991e:2,254@0xad32c:2,291@0xb4edd:2,154@0x97ce6:1,220@0xa522e:1 */
    /* operands: b0=var36(top=0xa8:11.3%);b1=var50(top=0x80:14.1%);b2=enum4(0x3a:109,0x50:80,0x62:69,0x32:25);b3=var73(top=0x01:9.5%);b4=var76(top=0x3b:9.2%) */
    /* GPR+scratch branch profile: 0/714 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 ^ flags0 ^ 0x8881ae0u - 0x1accc893u + 0x4f1a7667u - flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u & flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    vm->flags = flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    /* r.slot = (mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32((mask32(U16(vm->ip + 0x3u) + state0)) ^ (mask32((mask32(flags0 ^ 0x8881ae0u)) - 0x1accc893u)))))) + 0x4f1a7667u)) - (mask32((mask32((mask32(flags0 ^ 0x8881ae0u)) - 0x1accc893u)) & 0x6134e706u)))) & (mask32((mask32((mask32(flags0 ^ 0x...#0334916c6242; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_128_783948577846(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=128, native=0x9299b, path=783948577846d23d, class=static_validated, events=14 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x929dd:je:0;0x92a2e:je:1;0x92a94:je:0;0x92cb8:jne:1;0x92cdb:jne:1;0x92ceb:jne:0;0x92d07:jne:1;0x92d9f:je:1 */
    /* top actual targets: 297@0xb64d7:4,258@0xadf2c:3,172@0x9b68a:2,307@0xb8064:2,185@0x9d964:1,196@0x9fbcd:1,301@0xb708d:1 */
    /* operands: b0=enum4(0x62:840,0x3a:175,0x50:118,0x32:25);b1=var10(top=0x79:57.3%);b2=var17(top=0x04:24.0%);b3=var77(top=0xb7:22.4%);b4=var50(top=0x94:25.1%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 & flags0 & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u;
    vm->flags = flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x7ee52541u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x3u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32(flags0 & 0x7036ea56u)))) + 0x277b426cu)) - 0x57b04ce2u)) - (mask32((mask32((mask32(flags0 ^ 0x46f37ee7u)) & 0x706a6a76u)) | 0x36a392ffu)))) | 0x38cd3aecu)) - (mask32(U16(vm->ip + 0x1u) + (mask32((mask32((mask32((mask32...#7647f41314cb; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_208_1d1b9f2d7e08(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=208, native=0xa2361, path=1d1b9f2d7e080b9d, class=static_validated, events=14 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa237a:je:1;0xa23bd:je:1;0xa24d5:je:0;0xa2510:je:0;0xa26dc:jne:1;0xa270b:jne:1;0xa272d:jne:1;0xa2755:jne:0 */
    /* top actual targets: 269@0xb045b:3,333@0xbd8af:3,3@0x78c77:3,347@0xc088d:2,157@0x98a9a:1,203@0xa1484:1,220@0xa522e:1 */
    /* operands: b0=enum3(0x3a:404,0x62:335,0x50:63);b1=var62(top=0xa7:15.7%);b2=var77(top=0xf1:15.7%);b3=var29(top=0xa5:28.8%);b4=var52(top=0xe2:19.6%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    vm->flags = flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    return r;
}

static VMOpResult path_entry_319_6ed74e1c0868(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=319, native=0xba72f, path=6ed74e1c0868ca96, class=static_validated, events=14 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xba74a:je:0;0xba78b:je:1;0xba89f:je:0;0xba975:jne:1;0xba983:jne:1;0xba992:jne:1;0xba9a0:jne:0;0xbaa0a:je:0;0xbab08:je:0 */
    /* top actual targets: 173@0x9ba74:13,198@0xa037e:1 */
    /* operands: b0=0x3d;b1=0x01;b2=var42(top=0xe6:28.4%);b3=var47(top=0x2e:17.5%);b4=var21(top=0x00:79.0%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_292_2c3454329a9d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=292, native=0xb540f, path=2c3454329a9de726, class=static_validated, events=13 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xb5688:jne:1;0xb56bb:jne:1;0xb56c8:jne:1;0xb56f3:jne:0;0xb5771:je:0;0xb57c8:je:1 */
    /* top actual targets: 52@0x833c7:5,90@0x8b334:2,185@0x9d964:1,200@0xa0a9e:1,215@0xa4609:1,317@0xba1e2:1,79@0x885b0:1,92@0x8b8cb:1 */
    /* operands: b0=enum4(0x62:422,0x50:105,0x3a:98,0x32:26);b1=var53(top=0xdc:39.3%);b2=var55(top=0x7b:39.3%);b3=var69(top=0xd0:39.5%);b4=var63(top=0xaa:39.5%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x592d1456u ^ 0x6ef9e3c1u;
    return r;
}

static VMOpResult path_entry_330_b7d06ed05876(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=b7d06ed058761c11, class=static_validated, events=13 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=12 */
    /* branch path: 0xbc9d3:je:1;0xbca25:je:1;0xbcaa5:je:0;0xbcabc:je:0;0xbcaf6:je:1;0xbcd08:jne:1;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:0 */
    /* top actual targets: 122@0x9170d:10,154@0x97ce6:1,215@0xa4609:1,307@0xb8064:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_048_bfec44d3b65a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=48, native=0x82477, path=bfec44d3b65a5ada, class=static_validated, events=12 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=12 */
    /* branch path: 0x824a2:je:0;0x8259a:jne:1;0x825a7:jne:1;0x825b4:jne:1;0x825c0:jne:0;0x8260a:je:1 */
    /* top actual targets: 124@0x91e81:2,154@0x97ce6:2,28@0x7e390:2,92@0x8b8cb:2,199@0xa0631:1,260@0xae90b:1,273@0xb11ca:1,291@0xb4edd:1 */
    /* operands: b0=var36(top=0xa8:11.3%);b1=var50(top=0x80:14.1%);b2=enum4(0x3a:109,0x50:80,0x62:69,0x32:25);b3=var73(top=0x01:9.5%);b4=var76(top=0x3b:9.2%) */
    /* GPR+scratch branch profile: 0/714 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 ^ flags0 ^ 0x8881ae0u - 0x1accc893u + 0x4f1a7667u - flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u & flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    vm->flags = flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    /* r.slot = (mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32((mask32(U16(vm->ip + 0x3u) + state0)) ^ (mask32((mask32(flags0 ^ 0x8881ae0u)) - 0x1accc893u)))))) + 0x4f1a7667u)) - (mask32((mask32((mask32(flags0 ^ 0x8881ae0u)) - 0x1accc893u)) & 0x6134e706u)))) & (mask32((mask32((mask32(flags0 ^ 0x...#0334916c6242; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_087_1375abfb67f0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=87, native=0x8a49e, path=1375abfb67f018cf, class=static_validated, events=12 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=12 */
    /* branch path: 0x8a6d9:jne:1;0x8a6e5:jne:1;0x8a6f2:jne:0;0x8a6fe:jne:1;0x8a816:je:0 */
    /* top actual targets: 108@0x8f24b:4,256@0xad849:4,257@0xadbfd:4 */
    /* operands: b0=0x3d;b1=0x01;b2=enum3(0x08:4,0x60:4,0x00:4);b3=enum2(0x08:8,0x03:4);b4=enum3(0x09:4,0x81:4,0x47:4) */
    /* GPR+scratch branch profile: 0/60 unknown branches (0.0%): */
    vm->state = state0 + 0x42559993u;
    vm->flags = flags0 - 0x4356d657u;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_237_27ad2349dd7d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=27ad2349dd7dd3e1, class=static_validated, events=12 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa8efb:je:1;0xa8f3c:je:0;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:1;0xa9025:jne:0;0xa90d7:je:1;0xa9292:je:1 */
    /* top actual targets: 352@0xc1ec4:7,256@0xad849:2,144@0x95887:1,173@0x9ba74:1,198@0xa037e:1 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    return r;
}

static VMOpResult path_entry_237_c2b81e454407(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=c2b81e454407492c, class=static_validated, events=12 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0xa8efb:je:0;0xa8f3c:je:0;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:1;0xa9025:jne:0;0xa90d7:je:0;0xa9292:je:1 */
    /* top actual targets: 108@0x8f24b:4,198@0xa037e:4,256@0xad849:4 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) ^ (mask32((mask32((mask32(state0 - (mask32(flags0 ^ 0x22900c8u)))) - (mask32((mask32(flags0 + 0x3fbeaa1du)) ^ 0x8178b71u)))) - 0x4813dbcu)))) - 0x4f4105f2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_245_4792d8a1d8a3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=245, native=0xab141, path=4792d8a1d8a3dbb5, class=static_validated, events=12 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=12 */
    /* branch path: 0xab25a:jne:0;0xab26a:jne:1;0xab27d:jne:1;0xab28c:jne:1;0xab2e4:je:0 */
    /* top actual targets: 75@0x873fc:11,145@0x95b5c:1 */
    /* operands: b0=var17(top=0xcb:34.7%);b1=var18(top=0x13:34.7%);b2=0x3d;b3=0x01;b4=var16(top=0xdf:45.3%) */
    /* GPR+scratch branch profile: 0/60 unknown branches (0.0%): */
    vm->state = state0 ^ U16(vm->ip + 0x0u) + state0 ^ 0x3a835417u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + state0)) ^ 0x3a835417u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_248_bd9bcc498bac(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=248, native=0xac110, path=bd9bcc498bac531a, class=static_validated, events=12 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=12 */
    /* branch path: 0xac120:je:0;0xac2b8:je:0 */
    /* top actual targets: 258@0xadf2c:8,157@0x98a9a:2,124@0x91e81:1,189@0x9e7af:1 */
    /* operands: b0=enum7(0x8a:9,0x60:4,0xa7:2,0x8c:2,0x3b:1,0xcd:1);b1=enum7(0xf8:9,0x74:4,0xb6:2,0xea:2,0xe6:1,0x7d:1);b2=enum6(0x7b:9,0x2b:4,0x83:4,0x8b:1,0xa3:1,0xfb:1);b3=enum5(0x0e:9,0x03:6,0x02:2,0x05:2,0x0c:1) */
    /* GPR+scratch branch profile: 0/30 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - state0;
    vm->flags = flags0 - state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ 0x4160066bu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_282_01946c2fdff8(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=282, native=0xb3128, path=01946c2fdff8179f, class=static_validated, events=12 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0xb3145:je:0;0xb3178:je:0;0xb31f8:je:1;0xb3253:je:0;0xb3455:jne:1;0xb348a:jne:1;0xb34a1:jne:1;0xb34b6:jne:0 */
    /* top actual targets: 124@0x91e81:2,317@0xba1e2:2,121@0x91379:1,18@0x7be9b:1,215@0xa4609:1,260@0xae90b:1,269@0xb045b:1,291@0xb4edd:1 */
    /* operands: b0=var62(top=0x2d:24.2%);b1=var45(top=0x22:24.2%);b2=var79(top=0x05:23.8%);b3=var73(top=0x57:23.8%);b4=enum3(0x3a:103,0x62:87,0x50:79) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    vm->flags = flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u ^ 0x171f71e1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ (mask32((mask32((mask32(flags0 - 0x54c8658au)) & 0x259f380du)) - 0x334721c0u)))))) ^ 0x644d2bc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_2dd08985aba7(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=2dd08985aba7ad6b, class=static_validated, events=12 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0xbc9d3:je:0;0xbca25:je:1;0xbcaa5:je:0;0xbcabc:je:0;0xbcaf6:je:0;0xbcd08:jne:1;0xbcd41:jne:1;0xbcd64:jne:0;0xbcd99:jne:1 */
    /* top actual targets: 291@0xb4edd:5,297@0xb64d7:2,349@0xc140b:2,49@0x82820:2,83@0x8947b:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_017_3ad7bed6fbe2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=17, native=0x7bae9, path=3ad7bed6fbe2a097, class=static_validated, events=11 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7bafa:je:0;0x7bbdd:jne:1;0x7bbea:jne:1;0x7bbf8:jne:1;0x7bc05:jne:0;0x7bc7b:je:0;0x7bd0e:je:1 */
    /* top actual targets: 317@0xba1e2:3,253@0xacfb1:2,140@0x94e5a:1,18@0x7be9b:1,239@0xa991e:1,28@0x7e390:1,322@0xbb3c9:1,66@0x855ff:1 */
    /* operands: b0=var54(top=0x12:33.9%);b1=var37(top=0xff:35.9%);b2=enum4(0x3a:321,0x62:293,0x32:75,0x50:69);b3=var28(top=0x10:34.4%);b4=var12(top=0xa0:35.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x4365071cu - 0x69693e45u & 0x3d8b48f7u - 0x1b99cfe0u + 0x7ec4552au & 0x2b98de46u + 0x459da9b2u;
    return r;
}

static VMOpResult path_entry_048_e1d1ed5c9b53(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=48, native=0x82477, path=e1d1ed5c9b53d930, class=static_validated, events=11 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=11 */
    /* branch path: 0x824a2:je:0;0x8259a:jne:1;0x825a7:jne:1;0x825b4:jne:1;0x825c0:jne:0;0x8260a:je:0 */
    /* top actual targets: 52@0x833c7:5,317@0xba1e2:3,199@0xa0631:1,301@0xb708d:1,79@0x885b0:1 */
    /* operands: b0=var36(top=0xa8:11.3%);b1=var50(top=0x80:14.1%);b2=enum4(0x3a:109,0x50:80,0x62:69,0x32:25);b3=var73(top=0x01:9.5%);b4=var76(top=0x3b:9.2%) */
    /* GPR+scratch branch profile: 0/714 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 ^ flags0 ^ 0x8881ae0u - 0x1accc893u + 0x4f1a7667u - flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u & flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    vm->flags = flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    /* r.slot = (mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32((mask32(U16(vm->ip + 0x3u) + state0)) ^ (mask32((mask32(flags0 ^ 0x8881ae0u)) - 0x1accc893u)))))) + 0x4f1a7667u)) - (mask32((mask32((mask32((mask32((mask32(flags0 ^ 0x8881ae0u)) - 0x1accc893u)) & 0x6134e706u)) & 0x7e86fbd3u)) ^ 0x41bau...#9fb39bf6f58a; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_160_100da339bec0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=160, native=0x994cf, path=100da339bec0f3ae, class=static_validated, events=11 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x99521:jne:1;0x9952e:jne:1;0x9953c:jne:0;0x99554:je:1;0x9956c:jne:1;0x995b7:je:1 */
    /* top actual targets: 332@0xbd36d:3,64@0x85059:3,66@0x855ff:2,172@0x9b68a:1,199@0xa0631:1,258@0xadf2c:1 */
    /* operands: b0=var52(top=0x79:6.7%);b1=var12(top=0x2f:18.6%) */
    /* GPR+scratch branch profile: 0/652 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x559d4d7bu;
    return r;
}

static VMOpResult path_entry_208_3e22accc122d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=208, native=0xa2361, path=3e22accc122d463e, class=static_validated, events=11 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa237a:je:0;0xa23bd:je:0;0xa24d5:je:1;0xa2510:je:1;0xa26dc:jne:1;0xa270b:jne:1;0xa272d:jne:0;0xa2755:jne:1 */
    /* top actual targets: 280@0xb2661:4,307@0xb8064:4,3@0x78c77:2,269@0xb045b:1 */
    /* operands: b0=enum3(0x3a:404,0x62:335,0x50:63);b1=var62(top=0xa7:15.7%);b2=var77(top=0xf1:15.7%);b3=var29(top=0xa5:28.8%);b4=var52(top=0xe2:19.6%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    vm->flags = flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    return r;
}

static VMOpResult path_entry_317_ce011ef19553(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=317, native=0xba1e2, path=ce011ef195537ada, class=static_validated, events=11 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=11 */
    /* branch path: 0xba1fd:je:0;0xba223:je:0;0xba266:je:0;0xba2ec:je:0;0xba503:je:0 */
    /* top actual targets: 297@0xb64d7:2,121@0x91379:1,17@0x7bae9:1,185@0x9d964:1,199@0xa0631:1,200@0xa0a9e:1,282@0xb3128:1,322@0xbb3c9:1 */
    /* operands: b0=var40(top=0xe7:25.9%);b1=var56(top=0xc8:26.1%);b2=var50(top=0x08:49.3%);b3=var60(top=0xdc:25.5%) */
    /* GPR+scratch branch profile: 0/330 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u;
    vm->flags = flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - (mask32((mask32((mask32((mask32(flags0 + 0x189c9c80u)) - 0x4373d071u)) ^ 0x12461866u)) & 0x2d8e67e2u)))) | (mask32((mask32((mask32((mask32(flags0 + 0x189c9c80u)) - 0x4373d071u)) ^ 0x12461866u)) & 0x2d8e67e2u)))) ^ ...#3c36dcb3546a; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_048_899dc1a680af(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=48, native=0x82477, path=899dc1a680afec06, class=static_validated, events=10 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=10 */
    /* branch path: 0x824a2:je:1;0x8259a:jne:0;0x825a7:jne:1;0x825b4:jne:1;0x825c0:jne:1;0x8260a:je:1 */
    /* top actual targets: 18@0x7be9b:2,185@0x9d964:1,199@0xa0631:1,269@0xb045b:1,297@0xb64d7:1,30@0x7e849:1,317@0xba1e2:1,345@0xc02e4:1 */
    /* operands: b0=var36(top=0xa8:11.3%);b1=var50(top=0x80:14.1%);b2=enum4(0x3a:109,0x50:80,0x62:69,0x32:25);b3=var73(top=0x01:9.5%);b4=var76(top=0x3b:9.2%) */
    /* GPR+scratch branch profile: 0/714 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 ^ flags0 ^ 0x8881ae0u - 0x1accc893u + 0x4f1a7667u - flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u & flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    vm->flags = flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    /* r.slot = (mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32((mask32(U16(vm->ip + 0x3u) + state0)) ^ flags0)))) + 0x4f1a7667u)) - (mask32(flags0 & 0x6134e706u)))) & (mask32(flags0 & 0x6134e706u)))) ^ 0x79fc8ff4u)) | (mask32((mask32(flags0 & 0x6134e706u)) - 0x430c028cu)))) & (mask32((mask32(fla...#1ef66cded6f8; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_131_5aae32890a23(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=131, native=0x937d0, path=5aae32890a23d4ea, class=static_validated, events=10 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=10 */
    /* branch path: 0x9395a:je:1;0x93a40:jne:1;0x93a65:jne:1;0x93a74:jne:0;0x93a99:jne:1;0x93b5d:je:0;0x93b8f:je:0;0x93bd0:je:0;0x93cc3:je:0;0x93cf0:je:0;0x93da3:je:0;0x93e3d:je:1 */
    /* top actual targets: 108@0x8f24b:4,160@0x994cf:4,144@0x95887:1,173@0x9ba74:1 */
    /* operands: b0=var17(top=0xc5:15.2%);b1=var16(top=0x97:21.2%);b2=var18(top=0x58:15.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/168 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x75229706u - 0x1ec4fc3du - state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x1u) + (mask32((mask32((mask32((mask32((mask32(state0 | 0x8fb57c3u)) - 0x45a18ca4u)) | (mask32((mask32((mask32((mask32(flags0 - (mask32((mask32(state0 | 0x8fb57c3u)) + 0x4674713du)))) ^ 0x4382f497u)) - 0x95703a1u)) ^ 0xea909d9u)))) - (mask32((mask32((mask32((mask32((mask32((mask32(flags0 - (m...#a154e422c74f; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_140_07522c801eb3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, path=07522c801eb36725, class=static_validated, events=10 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x94e85:je:1;0x94f11:je:1;0x94fab:je:0;0x94fdd:je:0;0x95000:je:0;0x9504c:je:1 */
    /* top actual targets: 28@0x7e390:4,307@0xb8064:4,203@0xa1484:1,215@0xa4609:1 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x6f549f79u - state0;
    vm->flags = flags0 - 0x6f549f79u - state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 - (mask32((mask32(flags0 - (mask32(state0 | 0xf17c331u)))) | 0x16a9ca8cu)))))) ^ 0x6e089febu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_144_10e64be0b987(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=144, native=0x95887, path=10e64be0b987b8fc, class=static_validated, events=10 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x959a6:jne:1;0x959b1:jne:1;0x959bd:jne:0;0x959d3:je:1;0x959e9:jne:1;0x95a08:je:0 */
    /* top actual targets: 154@0x97ce6:3,347@0xc088d:2,199@0xa0631:1,203@0xa1484:1,254@0xad32c:1,337@0xbec0e:1,66@0x855ff:1 */
    /* operands: b0=var32(top=0x87:10.1%);b1=var11(top=0x99:16.2%) */
    /* GPR+scratch branch profile: 0/661 unknown branches (0.0%): */
    vm->state = state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    vm->flags = flags0 - 0x387407b9u + 0x2cd392b6u;
    return r;
}

static VMOpResult path_entry_153_4e59423688cc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=153, native=0x979ab, path=4e59423688cc6baf, class=static_validated, events=10 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=10 */
    /* branch path: 0x97aee:jne:1;0x97b04:jne:1;0x97b1b:jne:0;0x97b2d:jne:1;0x97bab:je:0 */
    /* top actual targets: 144@0x95887:5,173@0x9ba74:5 */
    /* operands: b0=enum2(0xda:5,0xb5:5);b1=enum2(0xa5:5,0x8b:5);b2=0x3d;b3=0x01;b4=enum2(0x0b:5,0x97:5) */
    /* GPR+scratch branch profile: 0/50 unknown branches (0.0%): */
    vm->state = state0 + U16(vm->ip + 0x0u) - state0 ^ 0x6f642592u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - state0)) ^ 0x6f642592u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_242_4b247eef8954(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=242, native=0xaa87d, path=4b247eef89548bf1, class=static_validated, events=10 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=10 */
    /* branch path: 0xaa954:jne:1;0xaa96f:jne:1;0xaa97d:jne:1;0xaa98d:jne:0;0xaaa4a:je:0 */
    /* top actual targets: 199@0xa0631:9,114@0x90319:1 */
    /* operands: b0=0x3d;b1=0x01;b2=var15(top=0xb3:50.8%);b3=var17(top=0xef:50.8%);b4=var16(top=0x3b:50.8%) */
    /* GPR+scratch branch profile: 0/215 unknown branches (0.0%): */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - state0)) ^ 0x5c05e9b5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_346_3468299b08f6(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=346, native=0xc0535, path=3468299b08f6c85a, class=static_validated, events=10 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0xc056a:je:0;0xc05d7:je:1;0xc0628:je:0;0xc064e:je:1;0xc06a9:jne:1;0xc06ba:jne:1;0xc06dc:je:0;0xc06ec:je:0;0xc074c:je:1 */
    /* top actual targets: 114@0x90319:2,258@0xadf2c:2,157@0x98a9a:1,199@0xa0631:1,215@0xa4609:1,307@0xb8064:1,337@0xbec0e:1,66@0x855ff:1 */
    /* operands: b0=var232(top=0x22:3.1%);b1=var243(top=0x94:3.1%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    vm->flags = flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u - 0x3d02d701u - 0x727be02cu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ (mask32(flags0 ^ 0x45fbcef1u)))))) + 0x7f7eb061u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_065_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=65, native=0x85371, path=e3b0c44298fc1c14, class=static_validated, events=9 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: - */
    /* top actual targets: 199@0xa0631:2,43@0x8173d:2,215@0xa4609:1,239@0xa991e:1,28@0x7e390:1,333@0xbd8af:1,64@0x85059:1 */
    /* operands: b0=var16(top=0x05:17.4%);b1=var14(top=0x57:17.4%);b2=var15(top=0x5d:17.4%);b3=var15(top=0xff:17.4%) */
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ state0)) - 0x5db84d25u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_074_a48439e79cea(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=74, native=0x86d43, path=a48439e79ceaf02d, class=static_validated, events=9 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0x86dd0:je:0;0x870b5:jne:1;0x870cd:jne:1;0x870f3:jne:0;0x87104:jne:1;0x871d5:je:0;0x872c2:je:0 */
    /* top actual targets: 108@0x8f24b:5,160@0x994cf:4 */
    /* operands: b0=var13(top=0x4c:15.2%);b1=var13(top=0x2c:15.2%);b2=0x3d;b3=0x01;b4=var12(top=0x7f:18.2%) */
    /* GPR+scratch branch profile: 0/175 unknown branches (0.0%): */
    vm->state = state0 - flags0 & state0 - 0x7af5a4e2u - 0x619b65dcu ^ 0x65dcaffcu + 0x33d7fc12u;
    vm->flags = flags0 & state0 - 0x7af5a4e2u - 0x619b65dcu - state0 - flags0 & state0 - 0x7af5a4e2u - 0x619b65dcu ^ 0x65dcaffcu ^ 0x6adfe823u ^ 0x1a77c224u + 0x403a8d37u & 0x7bf9a401u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 - (mask32((mask32(flags0 & (mask32(state0 - 0x7af5a4e2u)))) - 0x619b65dcu)))) ^ 0x65dcaffcu)) + 0x33d7fc12u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_082_29cda8c222ea(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=82, native=0x8920e, path=29cda8c222ea76c8, class=static_validated, events=9 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0x8922d:je:1;0x8925b:je:1;0x89293:je:1;0x892c8:je:0;0x89338:je:0 */
    /* top actual targets: 99@0x8c99a:5,333@0xbd8af:4 */
    /* operands: b0=var11(top=0x3e:45.1%);b1=var9(top=0xb1:45.1%);b2=0x62 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + flags0 + 0x1bc90d20u;
    vm->flags = flags0 + 0x1bc90d20u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 + flags0)))) + 0x5cc5e4d8u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_186_3ab9de526826(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=186, native=0x9dcae, path=3ab9de5268261224, class=static_validated, events=9 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0x9dcd5:je:0;0x9de1f:jne:1;0x9de2e:jne:1;0x9de4c:jne:0;0x9de68:jne:1;0x9df1c:je:0 */
    /* top actual targets: 144@0x95887:5,160@0x994cf:2,256@0xad849:2 */
    /* operands: b0=var13(top=0x55:20.0%);b1=0x3d;b2=0x01;b3=var13(top=0xb8:20.0%);b4=var11(top=0x73:22.0%) */
    /* GPR+scratch branch profile: 0/174 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 + 0x72198f10u;
    vm->flags = flags0 & 0x2dc3128fu + 0x6176101u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + state0)) + 0x72198f10u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_282_8d87a955d012(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=282, native=0xb3128, path=8d87a955d012957b, class=static_validated, events=9 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=9 */
    /* branch path: 0xb3145:je:0;0xb3178:je:1;0xb31f8:je:1;0xb3253:je:0;0xb3455:jne:0;0xb348a:jne:1;0xb34a1:jne:1;0xb34b6:jne:1 */
    /* top actual targets: 185@0x9d964:3,199@0xa0631:1,200@0xa0a9e:1,253@0xacfb1:1,28@0x7e390:1,307@0xb8064:1,90@0x8b334:1 */
    /* operands: b0=var62(top=0x2d:24.2%);b1=var45(top=0x22:24.2%);b2=var79(top=0x05:23.8%);b3=var73(top=0x57:23.8%);b4=enum3(0x3a:103,0x62:87,0x50:79) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    vm->flags = flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u ^ 0x171f71e1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ (mask32(flags0 - 0x334721c0u)))))) ^ 0x644d2bc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_282_ef445ab22930(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=282, native=0xb3128, path=ef445ab229304f72, class=static_validated, events=9 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0xb3145:je:0;0xb3178:je:0;0xb31f8:je:1;0xb3253:je:0;0xb3455:jne:1;0xb348a:jne:1;0xb34a1:jne:0;0xb34b6:jne:1 */
    /* top actual targets: 49@0x82820:4,348@0xc0d7d:2,239@0xa991e:1,254@0xad32c:1,297@0xb64d7:1 */
    /* operands: b0=var62(top=0x2d:24.2%);b1=var45(top=0x22:24.2%);b2=var79(top=0x05:23.8%);b3=var73(top=0x57:23.8%);b4=enum3(0x3a:103,0x62:87,0x50:79) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    vm->flags = flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u ^ 0x171f71e1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ (mask32((mask32((mask32(flags0 - 0x54c8658au)) & 0x259f380du)) - 0x334721c0u)))))) ^ 0x644d2bc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_017_51459034a0e3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=17, native=0x7bae9, path=51459034a0e3c66a, class=static_validated, events=8 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7bafa:je:0;0x7bbdd:jne:0;0x7bbea:jne:1;0x7bbf8:jne:1;0x7bc05:jne:1;0x7bc7b:je:1;0x7bd0e:je:1 */
    /* top actual targets: 83@0x8947b:4,215@0xa4609:1,253@0xacfb1:1,345@0xc02e4:1,66@0x855ff:1 */
    /* operands: b0=var54(top=0x12:33.9%);b1=var37(top=0xff:35.9%);b2=enum4(0x3a:321,0x62:293,0x32:75,0x50:69);b3=var28(top=0x10:34.4%);b4=var12(top=0xa0:35.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x4365071cu - 0x69693e45u & 0x3d8b48f7u - 0x1b99cfe0u + 0x7ec4552au & 0x2b98de46u + 0x459da9b2u;
    return r;
}

static VMOpResult path_entry_030_0defeb8f23af(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=0defeb8f23af57dd, class=static_validated, events=8 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x7e868:je:0;0x7e896:je:1;0x7e8b1:je:0;0x7e913:je:0;0x7e92e:je:0;0x7eb45:je:0 */
    /* top actual targets: 307@0xb8064:4,180@0x9cf32:2,269@0xb045b:1,91@0x8b6de:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | (mask32(flags0 & 0x614d4b17u)))) + 0x64fd160cu)))) + 0x5903fc84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_030_2621ea48488b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=2621ea48488bf1ba, class=static_validated, events=8 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7e868:je:1;0x7e896:je:0;0x7e8b1:je:0;0x7e913:je:1;0x7e92e:je:1;0x7eb45:je:1 */
    /* top actual targets: 192@0x9f00a:2,203@0xa1484:2,183@0x9d495:1,258@0xadf2c:1,307@0xb8064:1,337@0xbec0e:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    return r;
}

static VMOpResult path_entry_140_3605b5606844(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, path=3605b56068445282, class=static_validated, events=8 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x94e85:je:1;0x94f11:je:1;0x94fab:je:0;0x94fdd:je:0;0x95000:je:1;0x9504c:je:1 */
    /* top actual targets: 203@0xa1484:2,320@0xbada5:2,189@0x9e7af:1,220@0xa522e:1,347@0xc088d:1,66@0x855ff:1 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x6f549f79u - state0;
    vm->flags = flags0 - 0x6f549f79u - state0;
    return r;
}

static VMOpResult path_entry_190_439f3423415e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=190, native=0x9eacb, path=439f3423415e8685, class=static_validated, events=8 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=8 */
    /* branch path: 0x9eae9:je:0;0x9ebff:jne:1;0x9ec18:jne:1;0x9ec2d:jne:1;0x9ec3b:jne:0;0x9ecd6:je:0 */
    /* top actual targets: 352@0xc1ec4:5,257@0xadbfd:3 */
    /* operands: b0=0x3d;b1=0x01;b2=var10(top=0x00:55.8%);b3=var9(top=0xf7:57.1%);b4=var10(top=0x01:55.8%) */
    /* GPR+scratch branch profile: 0/486 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 + 0x20f4b909u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + state0)) + 0x20f4b909u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_237_eb8d278d8351(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=eb8d278d835174a2, class=static_validated, events=8 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xa8efb:je:1;0xa8f3c:je:0;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:1;0xa9025:jne:0;0xa90d7:je:1;0xa9292:je:0 */
    /* top actual targets: 108@0x8f24b:7,256@0xad849:1 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) ^ (mask32((mask32((mask32(state0 - (mask32(flags0 ^ 0x22900c8u)))) - (mask32((mask32(flags0 + 0x3fbeaa1du)) ^ 0x8178b71u)))) - 0x4813dbcu)))) - 0x4f4105f2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_253_d391132b7c63(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=253, native=0xacfb1, path=d391132b7c63a0fb, class=static_validated, events=8 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xacff9:je:1;0xad075:je:1 */
    /* top actual targets: 18@0x7be9b:1,268@0xb0007:1,330@0xbc9b8:1,333@0xbd8af:1,3@0x78c77:1,43@0x8173d:1,66@0x855ff:1,90@0x8b334:1 */
    /* operands: b0=var26(top=0x86:22.2%);b1=var11(top=0xc2:20.1%);b2=var177(top=0x34:17.8%);b3=var157(top=0xa1:13.2%);b4=var160(top=0x04:13.3%);b5=var155(top=0x08:13.9%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + 0x7c5d4802u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    return r;
}

static VMOpResult path_entry_348_5821166bf2c3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=348, native=0xc0d7d, path=5821166bf2c3c775, class=static_validated, events=8 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=8 */
    /* branch path: 0xc0e89:je:0;0xc0fff:jne:1;0xc101b:jne:1;0xc103b:jne:0;0xc1049:jne:1;0xc10e5:je:0;0xc11b6:je:0;0xc1278:je:0 */
    /* top actual targets: 257@0xadbfd:5,352@0xc1ec4:2,144@0x95887:1 */
    /* operands: b0=var11(top=0xc5:21.6%);b1=var13(top=0x7c:16.2%);b2=0x3d;b3=0x01;b4=var15(top=0x13:16.2%) */
    /* GPR+scratch branch profile: 0/224 unknown branches (0.0%): */
    vm->state = state0 & 0x4ead272u + flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 & 0x4ead272u)) + flags0)) | (mask32((mask32((mask32((mask32(flags0 | 0x2730b0ccu)) - 0x5c278a20u)) & 0x31691179u)) - 0x5c3efee3u)))) & 0x19c08712u)))) - 0x369ef0d5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_140_a6b6d11ed888(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, path=a6b6d11ed8885762, class=static_validated, events=7 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x94e85:je:0;0x94f11:je:1;0x94fab:je:0;0x94fdd:je:0;0x95000:je:1;0x9504c:je:1 */
    /* top actual targets: 199@0xa0631:3,340@0xbf435:2,220@0xa522e:1,319@0xba72f:1 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x6f549f79u - state0;
    vm->flags = flags0 - 0x6f549f79u - state0;
    return r;
}

static VMOpResult path_entry_190_0fd8f618435a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=190, native=0x9eacb, path=0fd8f618435a1ab6, class=static_validated, events=7 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0x9eae9:je:1;0x9ebff:jne:1;0x9ec18:jne:1;0x9ec2d:jne:0;0x9ec3b:jne:1;0x9ecd6:je:0 */
    /* top actual targets: 257@0xadbfd:7 */
    /* operands: b0=0x3d;b1=0x01;b2=var10(top=0x00:55.8%);b3=var9(top=0xf7:57.1%);b4=var10(top=0x01:55.8%) */
    /* GPR+scratch branch profile: 0/486 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 + 0x20f4b909u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + state0)) + 0x20f4b909u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_199_be91d6d11747(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=199, native=0xa0631, path=be91d6d11747a1db, class=static_validated, events=7 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa0676:je:1;0xa0921:je:0;0xa094b:je:1;0xa0985:je:0 */
    /* top actual targets: 184@0x9d694:2,203@0xa1484:1,258@0xadf2c:1,301@0xb708d:1,70@0x8610e:1,79@0x885b0:1 */
    /* operands: b0=var128(top=0xc7:3.5%);b1=var256(top=0x88:2.4%);b2=var179(top=0x3a:9.8%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 + U8(vm->ip + 0x2u) + flags0 ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + flags0 ^ 0x7353b039u - 0x24d1328au;
    vm->flags = flags0 ^ 0x7353b039u - 0x24d1328au & 0x4705559fu + 0x79865026u + 0x73a763f8u;
    return r;
}

static VMOpResult path_entry_208_12ce32491e57(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=208, native=0xa2361, path=12ce32491e57c736, class=static_validated, events=7 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa237a:je:1;0xa23bd:je:1;0xa24d5:je:0;0xa2510:je:0;0xa26dc:jne:1;0xa270b:jne:1;0xa272d:jne:0;0xa2755:jne:1 */
    /* top actual targets: 168@0x9aa83:4,203@0xa1484:2,79@0x885b0:1 */
    /* operands: b0=enum3(0x3a:404,0x62:335,0x50:63);b1=var62(top=0xa7:15.7%);b2=var77(top=0xf1:15.7%);b3=var29(top=0xa5:28.8%);b4=var52(top=0xe2:19.6%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    vm->flags = flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    return r;
}

static VMOpResult path_entry_280_69b3e6542a96(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=280, native=0xb2661, path=69b3e6542a966a82, class=static_validated, events=7 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0xb2754:je:1;0xb2845:jne:1;0xb2867:jne:1;0xb287d:jne:0;0xb2897:jne:1;0xb2922:je:0;0xb2a90:je:0;0xb2c0a:je:1;0xb2c50:je:0 */
    /* top actual targets: 256@0xad849:5,198@0xa037e:2 */
    /* operands: b0=enum5(0x37:66,0x2f:17,0x8f:10,0x5f:8,0x97:7);b1=enum4(0x48:71,0x45:19,0x43:10,0x46:8);b2=var11(top=0xc5:63.0%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/774 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x70ead2e5u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - 0x267d402fu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_317_30e8e4255b6f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=317, native=0xba1e2, path=30e8e4255b6ffbe3, class=static_validated, events=7 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=7 */
    /* branch path: 0xba1fd:je:0;0xba223:je:0;0xba266:je:1;0xba2ec:je:0;0xba503:je:0 */
    /* top actual targets: 282@0xb3128:4,215@0xa4609:1,269@0xb045b:1,322@0xbb3c9:1 */
    /* operands: b0=var40(top=0xe7:25.9%);b1=var56(top=0xc8:26.1%);b2=var50(top=0x08:49.3%);b3=var60(top=0xdc:25.5%) */
    /* GPR+scratch branch profile: 0/330 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u;
    vm->flags = flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - (mask32((mask32(flags0 + 0x189c9c80u)) - 0x4373d071u)))) | (mask32((mask32(flags0 + 0x189c9c80u)) - 0x4373d071u)))) ^ (mask32(U16(vm->ip + 0x2u) + (mask32((mask32(flags0 + 0x189c9c80u)) - 0x4373d071u)))))) & (mask32((mask32((...#6112e3293856; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_330_5a27835f4eb7(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=5a27835f4eb7b870, class=static_validated, events=7 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xbc9d3:je:0;0xbca25:je:1;0xbcaa5:je:0;0xbcabc:je:0;0xbcaf6:je:0;0xbcd08:jne:1;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:0 */
    /* top actual targets: 237@0xa8e1f:4,185@0x9d964:3 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    return r;
}

static VMOpResult path_entry_030_116d895b36cc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=116d895b36cc80f2, class=static_validated, events=6 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x7e868:je:0;0x7e896:je:1;0x7e8b1:je:1;0x7e913:je:0;0x7e92e:je:1;0x7eb45:je:1 */
    /* top actual targets: 192@0x9f00a:2,203@0xa1484:2,307@0xb8064:1,91@0x8b6de:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | flags0)) + 0x64fd160cu)))) + 0x5903fc84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_056_664a05c7f6a5(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=56, native=0x83e76, path=664a05c7f6a51f15, class=static_validated, events=6 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0x83fa8:jne:1;0x83fbe:jne:1;0x83fce:jne:0;0x83fee:jne:1;0x8408f:je:0 */
    /* top actual targets: 108@0x8f24b:4,160@0x994cf:2 */
    /* operands: b0=enum4(0x8d:11,0x02:10,0x34:4,0x42:2);b1=enum4(0x76:11,0xf0:10,0x75:4,0x66:2);b2=0x3d;b3=0x01;b4=enum4(0x4b:11,0x1b:10,0xb7:4,0x27:2) */
    /* GPR+scratch branch profile: 0/30 unknown branches (0.0%): */
    vm->state = state0 + U16(vm->ip + 0x0u) - state0 ^ 0x5380ff71u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - state0)) ^ 0x5380ff71u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_146_3a37a8c7d50f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=146, native=0x96407, path=3a37a8c7d50f8d93, class=static_validated, events=6 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x96428:je:1;0x96492:je:0;0x966c4:jne:1;0x966d3:jne:1;0x966f8:jne:1;0x9671d:jne:0 */
    /* top actual targets: 258@0xadf2c:2,268@0xb0007:1,301@0xb708d:1,337@0xbec0e:1,83@0x8947b:1 */
    /* operands: b0=enum3(0x3a:379,0x50:122,0x62:77);b1=var58(top=0x09:27.5%);b2=var66(top=0x6e:15.9%);b3=var52(top=0x47:16.6%);b4=var53(top=0x92:18.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u;
    vm->flags = flags0 & 0xa6d4251u ^ 0x409c2e61u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 + flags0)) ^ 0x2e312e01u)) & (mask32((mask32((mask32(flags0 & 0xa6d4251u)) ^ 0x409c2e61u)) + 0x7d882664u)))) + 0x4a5b7e16u)) ^ (mask32(U16(vm->ip + 0x3u) + (mask32((mask32(flags0 & 0xa6d4251u)) ^ 0x409c2e61u)))))))) + 0x2cff1885u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_151_9c9489444f2d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=151, native=0x97311, path=9c9489444f2ddd0b, class=static_validated, events=6 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0x9744b:jne:1;0x9746b:jne:1;0x97489:jne:1;0x9749f:jne:0;0x9754e:je:0 */
    /* top actual targets: 173@0x9ba74:4,198@0xa037e:2 */
    /* operands: b0=0x3d;b1=0x01;b2=var11(top=0xa7:13.3%);b3=var11(top=0x07:13.3%);b4=var12(top=0xc3:13.3%) */
    /* GPR+scratch branch profile: 0/170 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ U16(vm->ip + 0x3u) + state0 + flags0 + 0x77236c60u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + (mask32(state0 + flags0)))) + 0x77236c60u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_173_800ab7eb123b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=173, native=0x9ba74, path=800ab7eb123b8ca2, class=static_validated, events=6 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x9bb4a:jne:1;0x9bb57:jne:1;0x9bb65:jne:1;0x9bb91:jne:0;0x9bbb5:je:0;0x9bbfa:je:1 */
    /* top actual targets: 196@0x9fbcd:1,203@0xa1484:1,297@0xb64d7:1,340@0xbf435:1,349@0xc140b:1,43@0x8173d:1 */
    /* operands: b0=var117(top=0xaf:7.6%);b1=var32(top=0x0b:13.4%) */
    /* GPR+scratch branch profile: 0/804 unknown branches (0.0%): */
    vm->state = state0 + 0x5eced92du ^ 0x456d7018u;
    vm->flags = flags0 - state0 + 0x5eced92du;
    return r;
}

static VMOpResult path_entry_208_77086d10d578(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=208, native=0xa2361, path=77086d10d578902b, class=static_validated, events=6 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa237a:je:0;0xa23bd:je:0;0xa24d5:je:0;0xa2510:je:0;0xa26dc:jne:1;0xa270b:jne:1;0xa272d:jne:0;0xa2755:jne:1 */
    /* top actual targets: 43@0x8173d:6 */
    /* operands: b0=enum3(0x3a:404,0x62:335,0x50:63);b1=var62(top=0xa7:15.7%);b2=var77(top=0xf1:15.7%);b3=var29(top=0xa5:28.8%);b4=var52(top=0xe2:19.6%) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    vm->flags = flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    return r;
}

static VMOpResult path_entry_268_80c25c32cafe(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=268, native=0xb0007, path=80c25c32cafec1f8, class=static_validated, events=6 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xb01e9:je:0;0xb0218:je:0;0xb026a:je:1;0xb029a:je:1;0xb02eb:je:0;0xb0307:je:1 */
    /* top actual targets: 243@0xaab6a:2,301@0xb708d:1,33@0x7f7c4:1,346@0xc0535:1,64@0x85059:1 */
    /* operands: b0=var247(top=0x4a:3.3%);b1=var251(top=0x1c:6.8%);b2=var127(top=0x3e:4.0%);b3=var202(top=0x6c:7.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u;
    return r;
}

static VMOpResult path_entry_301_1dbe9282449f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=301, native=0xb708d, path=1dbe9282449f81a6, class=static_validated, events=6 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0xb7140:je:0;0xb71c5:je:1;0xb720a:je:1;0xb726f:je:0;0xb72a8:je:0;0xb73b9:je:1 */
    /* top actual targets: 108@0x8f24b:2,144@0x95887:2,173@0x9ba74:1,352@0xc1ec4:1 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var115(top=0xdf:19.9%);b4=var115(top=0x18:6.4%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ U16(vm->ip + 0x3u) - state0 & flags0 - 0x2c0febdfu;
    vm->flags = flags0 + 0x34c21ec8u + 0x4bcb296bu - 0x72148c24u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32(state0 & flags0)))) - 0x2c0febdfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_301_537b51ceef7e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=301, native=0xb708d, path=537b51ceef7e6603, class=static_validated, events=6 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xb7140:je:0;0xb71c5:je:1;0xb720a:je:1;0xb726f:je:1;0xb72a8:je:0;0xb73b9:je:1 */
    /* top actual targets: 198@0xa037e:2,352@0xc1ec4:2,108@0x8f24b:1,173@0x9ba74:1 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var115(top=0xdf:19.9%);b4=var115(top=0x18:6.4%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ U16(vm->ip + 0x3u) - state0 & flags0 - 0x2c0febdfu;
    vm->flags = flags0 + 0x34c21ec8u + 0x4bcb296bu - 0x72148c24u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32(state0 & flags0)))) - 0x2c0febdfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_357_b76f0c121339(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=357, native=0xc29cf, path=b76f0c1213392f8e, class=static_validated, events=6 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=6 */
    /* branch path: 0xc2b01:jne:1;0xc2b1d:jne:1;0xc2b39:jne:0;0xc2b57:jne:1;0xc2c03:je:0 */
    /* top actual targets: 144@0x95887:3,352@0xc1ec4:3 */
    /* operands: b0=enum2(0xf0:3,0x11:3);b1=enum2(0xfd:3,0x6a:3);b2=enum2(0xb1:3,0x91:3);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/30 unknown branches (0.0%): */
    vm->state = state0 ^ flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ flags0)))) + 0x70d7d4a7u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_082_aebb1ed46015(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=82, native=0x8920e, path=aebb1ed46015c55e, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x8922d:je:0;0x8925b:je:0;0x89293:je:0;0x892c8:je:0;0x89338:je:0 */
    /* top actual targets: 168@0x9aa83:2,217@0xa4b11:2,307@0xb8064:1 */
    /* operands: b0=var11(top=0x3e:45.1%);b1=var9(top=0xb1:45.1%);b2=0x62 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + flags0 + 0x1bc90d20u;
    vm->flags = flags0 + 0x1bc90d20u;
    return r;
}

static VMOpResult path_entry_105_2a64ac183a13(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=105, native=0x8e6b4, path=2a64ac183a132956, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x8e713:je:1;0x8e925:jne:0;0x8e94d:jne:1;0x8e96f:jne:1;0x8e9a6:jne:1 */
    /* top actual targets: 28@0x7e390:2,281@0xb2db6:1,83@0x8947b:1,90@0x8b334:1 */
    /* operands: b0=var58(top=0x28:38.2%);b1=var76(top=0xa6:38.2%);b2=var22(top=0xf0:39.0%);b3=var11(top=0x0a:41.4%);b4=enum4(0x62:366,0x32:151,0x50:84,0x3a:70) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu & U16(vm->ip + 0x0u) + state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu + flags0 ^ 0x6808cf40u - 0x72c2e29bu - U16(vm->ip + 0x2u);
    vm->flags = flags0 ^ 0x6808cf40u - 0x72c2e29bu ^ 0x35dcbb88u;
    return r;
}

static VMOpResult path_entry_146_0adf5fc71f1c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=146, native=0x96407, path=0adf5fc71f1c5ca9, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=5 */
    /* branch path: 0x96428:je:0;0x96492:je:0;0x966c4:jne:0;0x966d3:jne:1;0x966f8:jne:1;0x9671d:jne:1 */
    /* top actual targets: 66@0x855ff:4,217@0xa4b11:1 */
    /* operands: b0=enum3(0x3a:379,0x50:122,0x62:77);b1=var58(top=0x09:27.5%);b2=var66(top=0x6e:15.9%);b3=var52(top=0x47:16.6%);b4=var53(top=0x92:18.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u;
    vm->flags = flags0 & 0xa6d4251u ^ 0x409c2e61u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 + flags0)) ^ 0x2e312e01u)) & (mask32((mask32((mask32(flags0 & 0xa6d4251u)) ^ 0x409c2e61u)) + 0x7d882664u)))) + 0x4a5b7e16u)) ^ (mask32(U16(vm->ip + 0x3u) + (mask32((mask32(flags0 & 0xa6d4251u)) ^ 0x409c2e61u)))))))) + 0x2cff1885u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_146_0f4c59e10324(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=146, native=0x96407, path=0f4c59e1032400ca, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=5 */
    /* branch path: 0x96428:je:1;0x96492:je:1;0x966c4:jne:0;0x966d3:jne:1;0x966f8:jne:1;0x9671d:jne:1 */
    /* top actual targets: 70@0x8610e:5 */
    /* operands: b0=enum3(0x3a:379,0x50:122,0x62:77);b1=var58(top=0x09:27.5%);b2=var66(top=0x6e:15.9%);b3=var52(top=0x47:16.6%);b4=var53(top=0x92:18.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u;
    vm->flags = flags0 & 0xa6d4251u ^ 0x409c2e61u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 + flags0)) ^ 0x2e312e01u)) & (mask32(flags0 + 0x7d882664u)))) + 0x4a5b7e16u)) ^ (mask32(U16(vm->ip + 0x3u) + flags0)))))) + 0x2cff1885u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_146_982557705575(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=146, native=0x96407, path=982557705575dc3d, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x96428:je:1;0x96492:je:1;0x966c4:jne:1;0x966d3:jne:1;0x966f8:jne:1;0x9671d:jne:0 */
    /* top actual targets: 172@0x9b68a:1,220@0xa522e:1,258@0xadf2c:1,337@0xbec0e:1,66@0x855ff:1 */
    /* operands: b0=enum3(0x3a:379,0x50:122,0x62:77);b1=var58(top=0x09:27.5%);b2=var66(top=0x6e:15.9%);b3=var52(top=0x47:16.6%);b4=var53(top=0x92:18.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u;
    vm->flags = flags0 & 0xa6d4251u ^ 0x409c2e61u;
    return r;
}

static VMOpResult path_entry_146_eec5c478bb68(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=146, native=0x96407, path=eec5c478bb68b13f, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x96428:je:1;0x96492:je:1;0x966c4:jne:1;0x966d3:jne:1;0x966f8:jne:0;0x9671d:jne:1 */
    /* top actual targets: 189@0x9e7af:2,28@0x7e390:1,3@0x78c77:1,79@0x885b0:1 */
    /* operands: b0=enum3(0x3a:379,0x50:122,0x62:77);b1=var58(top=0x09:27.5%);b2=var66(top=0x6e:15.9%);b3=var52(top=0x47:16.6%);b4=var53(top=0x92:18.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u;
    vm->flags = flags0 & 0xa6d4251u ^ 0x409c2e61u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 + flags0)) ^ 0x2e312e01u)) & (mask32(flags0 + 0x7d882664u)))) + 0x4a5b7e16u)) ^ (mask32(U16(vm->ip + 0x3u) + flags0)))))) + 0x2cff1885u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_160_283d4be70a6d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=160, native=0x994cf, path=283d4be70a6d81ca, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x99521:jne:1;0x9952e:jne:1;0x9953c:jne:0;0x99554:je:1;0x9956c:jne:1;0x995b7:je:0 */
    /* top actual targets: 185@0x9d964:2,333@0xbd8af:2,28@0x7e390:1 */
    /* operands: b0=var52(top=0x79:6.7%);b1=var12(top=0x2f:18.6%) */
    /* GPR+scratch branch profile: 0/652 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x559d4d7bu;
    return r;
}

static VMOpResult path_entry_187_2778a69fcfd9(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=187, native=0x9e07d, path=2778a69fcfd9605e, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=5 */
    /* branch path: 0x9e15a:jne:1;0x9e173:jne:1;0x9e18c:jne:1;0x9e1a0:jne:0;0x9e23d:je:0 */
    /* top actual targets: 173@0x9ba74:5 */
    /* operands: b0=0x3d;b1=0x3d;b2=0x01;b3=0x89;b4=0x76 */
    /* GPR+scratch branch profile: 0/25 unknown branches (0.0%): */
    vm->state = state0 + U16(vm->ip + 0x3u) - state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x3u) - state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_237_c32fe92f14d4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=c32fe92f14d4a45c, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa8efb:je:0;0xa8f3c:je:0;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:0;0xa9025:jne:1;0xa90d7:je:0;0xa9292:je:0 */
    /* top actual targets: 257@0xadbfd:3,160@0x994cf:2 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    return r;
}

static VMOpResult path_entry_237_ec8f6cd1ef50(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=ec8f6cd1ef50287f, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa8efb:je:0;0xa8f3c:je:0;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:1;0xa9025:jne:0;0xa90d7:je:0;0xa9292:je:0 */
    /* top actual targets: 160@0x994cf:5 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    return r;
}

static VMOpResult path_entry_240_7d2cd2d791a8(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=240, native=0xa9cf7, path=7d2cd2d791a87439, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=5 */
    /* branch path: 0xa9e2b:jne:1;0xa9e48:jne:1;0xa9e62:jne:0;0xa9e7e:jne:1;0xa9edd:je:0 */
    /* top actual targets: 173@0x9ba74:5 */
    /* operands: b0=enum2(0x99:5,0xb9:2);b1=0x3d;b2=0x01;b3=enum2(0x62:5,0x87:2);b4=enum2(0x9f:5,0x27:2) */
    /* GPR+scratch branch profile: 0/25 unknown branches (0.0%): */
    vm->state = state0 - U16(vm->ip + 0x3u) - state0 - 0x7bec2197u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - state0)) - 0x7bec2197u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_256_83cda8f6067f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=256, native=0xad849, path=83cda8f6067fce2a, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xad89b:jne:1;0xad8a7:jne:1;0xad8b4:jne:1;0xad8e1:jne:0;0xad973:je:0;0xad9da:je:1;0xada6f:je:0 */
    /* top actual targets: 292@0xb540f:5 */
    /* operands: b0=var155(top=0x3d:6.6%);b1=var156(top=0x27:6.6%) */
    /* GPR+scratch branch profile: 0/904 unknown branches (0.0%): */
    vm->state = state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au;
    vm->flags = flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au ^ state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au;
    return r;
}

static VMOpResult path_entry_347_ec89a4d6c19b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=347, native=0xc088d, path=ec89a4d6c19be592, class=static_validated, events=5 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xc093d:je:1;0xc09c2:je:0 */
    /* top actual targets: 128@0x9299b:1,18@0x7be9b:1,201@0xa0dca:1,307@0xb8064:1,37@0x80685:1 */
    /* operands: b0=var256(top=0xe6:2.1%);b1=var79(top=0x0b:6.4%);b2=var230(top=0xba:3.9%);b3=var101(top=0x82:10.2%) */
    /* GPR+scratch branch profile: 0/256 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ state0;
    return r;
}

static VMOpResult path_entry_013_b7836cdca753(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=13, native=0x7aee8, path=b7836cdca7530662, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x7af0e:je:0;0x7b058:je:0;0x7b089:jne:1;0x7b097:jne:1;0x7b0a6:jne:0;0x7b0b4:jne:1;0x7b0f2:je:0;0x7b14c:je:0;0x7b179:je:0 */
    /* top actual targets: 256@0xad849:4 */
    /* operands: b0=enum2(0x9e:4,0x6a:1);b1=enum2(0x7e:4,0x75:1);b2=0x3d;b3=0x01;b4=enum2(0x25:4,0x11:1) */
    /* GPR+scratch branch profile: 0/45 unknown branches (0.0%): */
    vm->state = state0 ^ 0x67934603u ^ flags0 - 0x1c36555u;
    vm->flags = flags0 - 0x1c36555u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32(state0 ^ 0x67934603u)) ^ (mask32((mask32((mask32((mask32(flags0 - 0x1c36555u)) | 0x771fee31u)) | 0x1490ac71u)) - 0x2de02e8u)))))) - 0x5ad3c2e8u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_030_b1a9b0ebcd6b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=b1a9b0ebcd6b9c74, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x7e868:je:0;0x7e896:je:1;0x7e8b1:je:0;0x7e913:je:1;0x7e92e:je:1;0x7eb45:je:1 */
    /* top actual targets: 192@0x9f00a:2,203@0xa1484:2 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | flags0)) + 0x64fd160cu)))) + 0x5903fc84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_036_6eb380f706ec(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=36, native=0x800a1, path=6eb380f706ec49f0, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x800b2:je:0;0x80346:je:0;0x803d6:jne:1;0x803e9:jne:1;0x803f7:jne:0;0x80404:jne:1;0x804d8:je:0 */
    /* top actual targets: 108@0x8f24b:4 */
    /* operands: b0=0x5c;b1=0xc2;b2=0xa3;b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/28 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ flags0 & 0x73966fc6u & 0x348b11beu ^ 0x72d0ef43u;
    vm->flags = flags0 & 0x73966fc6u & 0x348b11beu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32(state0 + flags0)) ^ (mask32((mask32(flags0 & 0x73966fc6u)) & 0x348b11beu)))) ^ 0x72d0ef43u)) | 0x7af5a860u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_086_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=86, native=0x8a37f, path=e3b0c44298fc1c14, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: - */
    /* top actual targets: 310@0xb8556:4 */
    /* operands: b0=enum2(0x36:4,0xa9:1);b1=enum2(0x01:4,0x00:1);b2=0x00;b3=0x00 */
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_088_78722b39f0b4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=88, native=0x8aa14, path=78722b39f0b4a864, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x8aa9c:je:1;0x8acf1:jne:1;0x8ad18:jne:1;0x8ad2e:jne:0;0x8ad3a:jne:1;0x8aeac:je:0 */
    /* top actual targets: 352@0xc1ec4:4 */
    /* operands: b0=var11(top=0x41:43.0%);b1=var11(top=0xeb:43.0%);b2=var11(top=0xa6:43.0%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) + (mask32((mask32(state0 | flags0)) - 0x1c9cfceau)))) ^ 0x415462f5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_130_ebeafe43f7b7(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=130, native=0x931d3, path=ebeafe43f7b7b773, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x933d5:je:1;0x93509:jne:1;0x93524:jne:1;0x93546:jne:1;0x9355b:jne:0;0x93611:je:1;0x93660:je:0 */
    /* top actual targets: 144@0x95887:4 */
    /* operands: b0=enum2(0x78:4,0xa1:1);b1=enum2(0xf5:4,0xc3:1);b2=0x3d;b3=0x01;b4=enum2(0x00:4,0x4b:1) */
    /* GPR+scratch branch profile: 0/28 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - state0 + 0x42718c2au + 0x3941798u - 0x1b3f106eu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32(state0 | (mask32(flags0 - (mask32(state0 + 0x42718c2au)))))) + (mask32((mask32(flags0 - (mask32(state0 + 0x42718c2au)))) & 0x3a044344u)))))) - 0x5121ff33u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_131_ce8a72bd979f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=131, native=0x937d0, path=ce8a72bd979fb259, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0x9395a:je:0;0x93a40:jne:1;0x93a65:jne:1;0x93a74:jne:0;0x93a99:jne:1;0x93b5d:je:0;0x93b8f:je:0;0x93bd0:je:0;0x93cc3:je:0;0x93cf0:je:0;0x93da3:je:0;0x93e3d:je:1 */
    /* top actual targets: 108@0x8f24b:4 */
    /* operands: b0=var17(top=0xc5:15.2%);b1=var16(top=0x97:21.2%);b2=var18(top=0x58:15.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/168 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x75229706u - 0x1ec4fc3du - state0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x1u) + (mask32((mask32((mask32((mask32((mask32(state0 | 0x8fb57c3u)) - 0x45a18ca4u)) | (mask32((mask32((mask32((mask32((mask32((mask32(flags0 + 0x75229706u)) - 0x1ec4fc3du)) - (mask32((mask32(state0 | 0x8fb57c3u)) + 0x4674713du)))) ^ 0x4382f497u)) - 0x95703a1u)) ^ 0xea909d9u)))) - (mask32((mask...#6790f617ef78; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_140_b52184b986bd(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, path=b52184b986bd204d, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x94e85:je:0;0x94f11:je:0;0x94fab:je:0;0x94fdd:je:0;0x95000:je:0;0x9504c:je:1 */
    /* top actual targets: 237@0xa8e1f:3,172@0x9b68a:1 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x6f549f79u - state0;
    vm->flags = flags0 - 0x6f549f79u - state0;
    return r;
}

static VMOpResult path_entry_214_976254d9e1ab(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=214, native=0xa3fe9, path=976254d9e1abe997, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xa4069:je:0;0xa4279:jne:1;0xa428a:jne:1;0xa42ad:jne:0;0xa42cd:jne:1;0xa445d:je:0 */
    /* top actual targets: 257@0xadbfd:4 */
    /* operands: b0=0xd2;b1=0xbd;b2=0xb3;b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/24 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 + 0x784f7133u ^ 0x7e64782u & 0x5bda5c23u + 0x352ca91cu;
    vm->flags = flags0 + 0x784f7133u & 0x4cc9d7bu & 0x79233229u - 0x234dc07au - 0x2ce4baeeu;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 + 0x784f7133u)))) ^ 0x7e64782u)) & 0x5bda5c23u)) + 0x352ca91cu)) | (mask32((mask32((mask32((mask32((mask32(flags0 + 0x784f7133u)) & 0x4cc9d7bu)) & 0x79233229u)) - 0x234dc07au)) - 0x2ce4baeeu)))) - 0x3231759eu)))) - 0x...#efed1af306b7; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_221_7ed8075b3f9e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=221, native=0xa5889, path=7ed8075b3f9e17ff, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xa5934:je:0;0xa5976:je:1;0xa5a54:jne:1;0xa5a6e:jne:1;0xa5a8f:jne:0;0xa5ab4:jne:1;0xa5bbc:je:0;0xa5ca0:je:1;0xa5d2f:je:0;0xa5d51:je:1;0xa5d98:je:0 */
    /* top actual targets: 256@0xad849:4 */
    /* operands: b0=0x53;b1=0x00;b2=0x08;b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/44 unknown branches (0.0%): */
    vm->state = state0 ^ U16(vm->ip + 0x1u);
    vm->flags = flags0;
    r.slot = (uint32_t)(U16(vm->ip + 0x1u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_231_833ef5dc8aae(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=231, native=0xa799b, path=833ef5dc8aaea91e, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xa79c0:je:0;0xa7a10:je:0;0xa7ada:je:0;0xa7b4c:jne:1;0xa7b5a:jne:1;0xa7b69:jne:0;0xa7b77:jne:1;0xa7cf4:je:0;0xa7d99:je:0 */
    /* top actual targets: 198@0xa037e:4 */
    /* operands: b0=0x3d;b1=0x01;b2=0x03;b3=0x6c;b4=0xa7 */
    /* GPR+scratch branch profile: 0/36 unknown branches (0.0%): */
    vm->state = state0 + flags0 + 0x37d0b9a9u ^ 0x6307e167u + flags0 + 0x37d0b9a9u ^ 0x6307e167u ^ 0x69e2cccdu ^ 0x500184bu;
    vm->flags = flags0 + 0x37d0b9a9u ^ 0x6307e167u + state0 + flags0 + 0x37d0b9a9u ^ 0x6307e167u + flags0 + 0x37d0b9a9u ^ 0x6307e167u & 0x65be02aeu - 0x474578d0u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32((mask32(state0 + (mask32((mask32(flags0 + 0x37d0b9a9u)) ^ 0x6307e167u)))) + (mask32((mask32(flags0 + 0x37d0b9a9u)) ^ 0x6307e167u)))) ^ 0x69e2cccdu)) ^ 0x500184bu)) - 0x796ead7fu)))) + 0x5041c185u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_267_995f3a6ce826(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=267, native=0xafa1f, path=995f3a6ce826c58c, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xafacf:je:0;0xafb4a:jne:1;0xafb58:jne:1;0xafb67:jne:0;0xafb75:jne:1;0xafcff:je:0;0xafe47:je:1 */
    /* top actual targets: 144@0x95887:4 */
    /* operands: b0=0xb7;b1=0xce;b2=0xc9;b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/28 unknown branches (0.0%): */
    vm->state = state0 & 0x22c7ea36u;
    vm->flags = flags0;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32(state0 & 0x22c7ea36u)) | (mask32((mask32((mask32((mask32(flags0 | 0x10c4506bu)) ^ 0x5cdc1fadu)) + 0x50bb45dbu)) - 0x13e853feu)))) & (mask32((mask32((mask32((mask32((mask32(flags0 | 0x10c4506bu)) ^ 0x5cdc1fadu)) + 0x50bb45dbu)) - 0x13e853feu)) & 0x18f9e0e8u)))))) ^ ...#e5c9d55f4c6c; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_268_c111a20b4053(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=268, native=0xb0007, path=c111a20b40539ba2, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xb01e9:je:0;0xb0218:je:1;0xb026a:je:1;0xb029a:je:1;0xb02eb:je:0;0xb0307:je:1 */
    /* top actual targets: 28@0x7e390:2,189@0x9e7af:1,305@0xb78b0:1 */
    /* operands: b0=var247(top=0x4a:3.3%);b1=var251(top=0x1c:6.8%);b2=var127(top=0x3e:4.0%);b3=var202(top=0x6c:7.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u;
    return r;
}

static VMOpResult path_entry_292_e5e4f2718bba(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=292, native=0xb540f, path=e5e4f2718bba17ce, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xb5688:jne:0;0xb56bb:jne:1;0xb56c8:jne:1;0xb56f3:jne:1;0xb5771:je:0;0xb57c8:je:1 */
    /* top actual targets: 3@0x78c77:2,28@0x7e390:1,349@0xc140b:1 */
    /* operands: b0=enum4(0x62:422,0x50:105,0x3a:98,0x32:26);b1=var53(top=0xdc:39.3%);b2=var55(top=0x7b:39.3%);b3=var69(top=0xd0:39.5%);b4=var63(top=0xaa:39.5%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x592d1456u ^ 0x6ef9e3c1u;
    return r;
}

static VMOpResult path_entry_313_e763e24efa84(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=313, native=0xb8b42, path=e763e24efa841a3b, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xb8b53:je:0;0xb8b78:je:0;0xb8c38:je:0;0xb8d19:jne:1;0xb8d27:jne:1;0xb8d36:jne:0;0xb8d44:jne:1;0xb8de9:je:1;0xb8e6a:je:0 */
    /* top actual targets: 352@0xc1ec4:4 */
    /* operands: b0=0x3d;b1=0x01;b2=0x7e;b3=0x59;b4=0xff */
    /* GPR+scratch branch profile: 0/36 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x40989976u;
    vm->flags = flags0 - state0 - flags0 + 0x40989976u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32((mask32(state0 - (mask32(flags0 + 0x40989976u)))) | 0x2f39160au)) ^ (mask32((mask32((mask32((mask32(flags0 - (mask32((mask32((mask32(state0 - (mask32(flags0 + 0x40989976u)))) | 0x2f39160au)) ^ 0x7af00ac1u)))) ^ (mask32((mask32((mask32(state0 - (mask32(...#3dc98223fd15; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_317_57351ad76f77(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=317, native=0xba1e2, path=57351ad76f77e260, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xba1fd:je:1;0xba223:je:1;0xba266:je:1;0xba2ec:je:0;0xba503:je:0 */
    /* top actual targets: 199@0xa0631:1,239@0xa991e:1,28@0x7e390:1,83@0x8947b:1 */
    /* operands: b0=var40(top=0xe7:25.9%);b1=var56(top=0xc8:26.1%);b2=var50(top=0x08:49.3%);b3=var60(top=0xdc:25.5%) */
    /* GPR+scratch branch profile: 0/330 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u;
    vm->flags = flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) | flags0)) ^ (mask32(U16(vm->ip + 0x2u) + flags0)))) & (mask32(flags0 & 0x19a77bau)))) + flags0)) | flags0)) ^ (mask32(flags0 | 0x501e3e6cu)))) ^ flags0)))) + 0x18e7b255u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_330_daf9e02bbbbe(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=daf9e02bbbbef0f1, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xbc9d3:je:1;0xbca25:je:1;0xbcaa5:je:0;0xbcabc:je:0;0xbcaf6:je:1;0xbcd08:jne:0;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:1 */
    /* top actual targets: 269@0xb045b:2,273@0xb11ca:1,301@0xb708d:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_359_7517feae529a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=359, native=0xc3406, path=7517feae529a3779, class=static_validated, events=4 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=4 */
    /* branch path: 0xc35b2:je:1;0xc362d:je:0 */
    /* top actual targets: 108@0x8f24b:4 */
    /* operands: b0=0x3d;b1=0x01;b2=enum2(0x1f:4,0xc3:2);b3=enum2(0xfc:4,0xde:2);b4=0x00 */
    /* GPR+scratch branch profile: 0/8 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 & (mask32(flags0 | 0x16bae797u)))))) - 0x6683bbe1u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_017_ec84997f8853(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=17, native=0x7bae9, path=ec84997f8853a491, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x7bafa:je:1;0x7bbdd:jne:1;0x7bbea:jne:1;0x7bbf8:jne:0;0x7bc05:jne:1;0x7bc7b:je:0;0x7bd0e:je:1 */
    /* top actual targets: 220@0xa522e:1,336@0xbe8cd:1,350@0xc1926:1 */
    /* operands: b0=var54(top=0x12:33.9%);b1=var37(top=0xff:35.9%);b2=enum4(0x3a:321,0x62:293,0x32:75,0x50:69);b3=var28(top=0x10:34.4%);b4=var12(top=0xa0:35.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x4365071cu - 0x69693e45u & 0x3d8b48f7u - 0x1b99cfe0u + 0x7ec4552au & 0x2b98de46u + 0x459da9b2u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32(state0 | (mask32(flags0 ^ 0x4365071cu)))) & (mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 | (mask32(flags0 ^ 0x4365071cu)))))) + (mask32(flags0 ^ 0x4365071cu)))))) ^ 0x95f9698u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_030_5376a30fd039(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=5376a30fd039c061, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7e868:je:0;0x7e896:je:0;0x7e8b1:je:1;0x7e913:je:1;0x7e92e:je:0;0x7eb45:je:0 */
    /* top actual targets: 307@0xb8064:2,183@0x9d495:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    return r;
}

static VMOpResult path_entry_030_d3ae225233fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=d3ae225233fc186d, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7e868:je:0;0x7e896:je:1;0x7e8b1:je:1;0x7e913:je:0;0x7e92e:je:0;0x7eb45:je:0 */
    /* top actual targets: 180@0x9cf32:1,333@0xbd8af:1,91@0x8b6de:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    return r;
}

static VMOpResult path_entry_037_5fff89a42f0f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=37, native=0x80685, path=5fff89a42f0fb915, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x806c4:je:1;0x8075e:je:1;0x807c6:je:0;0x808c1:jne:1;0x808d1:jne:1;0x808ef:jne:1;0x8090d:jne:0;0x8099e:je:0;0x809da:je:0;0x80ac9:je:0 */
    /* top actual targets: 108@0x8f24b:1,160@0x994cf:1,352@0xc1ec4:1 */
    /* operands: b0=var141(top=0xc1:12.7%);b1=var150(top=0x3e:12.6%);b2=var27(top=0x00:78.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x504fc3du - 0x4eca0e49u;
    vm->flags = flags0 & 0x714eea75u + 0x53097984u ^ state0 - flags0 + 0x504fc3du;
    return r;
}

static VMOpResult path_entry_037_972249a0a1aa(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=37, native=0x80685, path=972249a0a1aafc69, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x806c4:je:1;0x8075e:je:0;0x807c6:je:0;0x808c1:jne:1;0x808d1:jne:1;0x808ef:jne:1;0x8090d:jne:0;0x8099e:je:0;0x809da:je:0;0x80ac9:je:0 */
    /* top actual targets: 160@0x994cf:2,144@0x95887:1 */
    /* operands: b0=var141(top=0xc1:12.7%);b1=var150(top=0x3e:12.6%);b2=var27(top=0x00:78.2%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x504fc3du - 0x4eca0e49u;
    vm->flags = flags0 & 0x714eea75u + 0x53097984u ^ state0 - flags0 + 0x504fc3du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - (mask32(flags0 + 0x504fc3du)))) - 0x4eca0e49u)))) ^ 0x384e1c86u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_042_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=42, native=0x815ea, path=e3b0c44298fc1c14, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=3 */
    /* branch path: - */
    /* top actual targets: 169@0x9af18:2,310@0xb8556:1 */
    /* operands: b0=0x00;b1=0x00;b2=enum2(0xa9:2,0x36:1);b3=enum2(0x00:2,0x01:1) */
    vm->state = state0 - flags0 ^ state0 - 0x327f38a4u - 0x471012aeu ^ 0x160c3a44u;
    vm->flags = flags0 ^ state0 - 0x327f38a4u - 0x471012aeu ^ 0x160c3a44u;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_094_588d50dbd5db(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=94, native=0x8bd69, path=588d50dbd5db53e1, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=3 */
    /* branch path: 0x8bfbc:jne:1;0x8bfc9:jne:1;0x8bff0:jne:0;0x8c003:jne:1;0x8c0f2:je:1;0x8c1e9:je:0 */
    /* top actual targets: 144@0x95887:3 */
    /* operands: b0=enum8(0x8b:64,0x19:10,0x57:4,0xa1:3,0x01:3,0xd9:3);b1=enum7(0xa6:68,0x3e:10,0x3d:3,0xbe:3,0xc6:3,0xe7:3);b2=enum6(0xeb:67,0xa2:10,0x32:6,0x2b:4,0x6b:3,0x29:1);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/444 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ state0 + 0x551fa912u & 0x7af574e5u + flags0 ^ state0 + 0x551fa912u;
    vm->flags = flags0 ^ state0 + 0x551fa912u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) ^ (mask32((mask32((mask32(state0 & (mask32((mask32(flags0 ^ (mask32(state0 + 0x551fa912u)))) & 0x7af574e5u)))) + (mask32(flags0 ^ (mask32(state0 + 0x551fa912u)))))) | 0x23f8268cu)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_146_78bdb2f1461a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=146, native=0x96407, path=78bdb2f1461a8520, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x96428:je:1;0x96492:je:0;0x966c4:jne:1;0x966d3:jne:1;0x966f8:jne:0;0x9671d:jne:1 */
    /* top actual targets: 220@0xa522e:1,347@0xc088d:1,79@0x885b0:1 */
    /* operands: b0=enum3(0x3a:379,0x50:122,0x62:77);b1=var58(top=0x09:27.5%);b2=var66(top=0x6e:15.9%);b3=var52(top=0x47:16.6%);b4=var53(top=0x92:18.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u;
    vm->flags = flags0 & 0xa6d4251u ^ 0x409c2e61u;
    return r;
}

static VMOpResult path_entry_237_5f6701a24240(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=5f6701a2424033a3, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xa8efb:je:1;0xa8f3c:je:0;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:1;0xa9025:jne:0;0xa90d7:je:0;0xa9292:je:1 */
    /* top actual targets: 108@0x8f24b:2,256@0xad849:1 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) ^ (mask32((mask32((mask32(state0 - (mask32(flags0 ^ 0x22900c8u)))) - (mask32((mask32(flags0 + 0x3fbeaa1du)) ^ 0x8178b71u)))) - 0x4813dbcu)))) - 0x4f4105f2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_257_dfbbea61e449(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=257, native=0xadbfd, path=dfbbea61e449eaa3, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xadc1e:je:0;0xadcc0:jne:1;0xadccc:jne:1;0xadcd9:jne:1;0xadd06:jne:0;0xadd6a:je:1;0xadda4:je:1 */
    /* top actual targets: 157@0x98a9a:1,333@0xbd8af:1,337@0xbec0e:1 */
    /* operands: b0=var32(top=0xe7:10.9%);b1=var43(top=0xb5:9.7%) */
    /* GPR+scratch branch profile: 0/918 unknown branches (0.0%): */
    vm->state = state0 - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_257_fbb7ebf89ced(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=257, native=0xadbfd, path=fbb7ebf89cedfec3, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xadc1e:je:0;0xadcc0:jne:0;0xadccc:jne:1;0xadcd9:jne:1;0xadd06:jne:1;0xadd6a:je:0;0xadda4:je:0 */
    /* top actual targets: 268@0xb0007:2,114@0x90319:1 */
    /* operands: b0=var32(top=0xe7:10.9%);b1=var43(top=0xb5:9.7%) */
    /* GPR+scratch branch profile: 0/918 unknown branches (0.0%): */
    vm->state = state0 - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_282_4e1a08b51254(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=282, native=0xb3128, path=4e1a08b512545ea9, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0xb3145:je:1;0xb3178:je:0;0xb31f8:je:1;0xb3253:je:0;0xb3455:jne:1;0xb348a:jne:1;0xb34a1:jne:1;0xb34b6:jne:0 */
    /* top actual targets: 124@0x91e81:2,83@0x8947b:1 */
    /* operands: b0=var62(top=0x2d:24.2%);b1=var45(top=0x22:24.2%);b2=var79(top=0x05:23.8%);b3=var73(top=0x57:23.8%);b4=enum3(0x3a:103,0x62:87,0x50:79) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    vm->flags = flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u ^ 0x171f71e1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ (mask32((mask32((mask32(flags0 - 0x54c8658au)) & 0x259f380du)) - 0x334721c0u)))))) ^ 0x644d2bc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_282_f370d941d5fe(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=282, native=0xb3128, path=f370d941d5feed1e, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0xb3145:je:1;0xb3178:je:0;0xb31f8:je:1;0xb3253:je:0;0xb3455:jne:0;0xb348a:jne:1;0xb34a1:jne:1;0xb34b6:jne:1 */
    /* top actual targets: 280@0xb2661:2,349@0xc140b:1 */
    /* operands: b0=var62(top=0x2d:24.2%);b1=var45(top=0x22:24.2%);b2=var79(top=0x05:23.8%);b3=var73(top=0x57:23.8%);b4=enum3(0x3a:103,0x62:87,0x50:79) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    vm->flags = flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u ^ 0x171f71e1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ (mask32((mask32((mask32(flags0 - 0x54c8658au)) & 0x259f380du)) - 0x334721c0u)))))) ^ 0x644d2bc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_20af7b550e1c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=20af7b550e1c50be, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=3 */
    /* branch path: 0xbc9d3:je:1;0xbca25:je:1;0xbcaa5:je:1;0xbcabc:je:0;0xbcaf6:je:1;0xbcd08:jne:1;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:0 */
    /* top actual targets: 122@0x9170d:2,18@0x7be9b:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_5fac0740b3f4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=5fac0740b3f4045a, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=3 */
    /* branch path: 0xbc9d3:je:0;0xbca25:je:1;0xbcaa5:je:0;0xbcabc:je:0;0xbcaf6:je:1;0xbcd08:jne:0;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:1 */
    /* top actual targets: 269@0xb045b:1,291@0xb4edd:1,301@0xb708d:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_8268b83bf72f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=8268b83bf72fa338, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xbc9d3:je:0;0xbca25:je:1;0xbcaa5:je:0;0xbcabc:je:0;0xbcaf6:je:1;0xbcd08:jne:1;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:0 */
    /* top actual targets: 154@0x97ce6:1,349@0xc140b:1,90@0x8b334:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_e9d6ac0e93b3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=e9d6ac0e93b396fb, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=3 */
    /* branch path: 0xbc9d3:je:0;0xbca25:je:1;0xbcaa5:je:0;0xbcabc:je:0;0xbcaf6:je:0;0xbcd08:jne:0;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:1 */
    /* top actual targets: 3@0x78c77:2,92@0x8b8cb:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_331_b418e41fa05a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=331, native=0xbcfc8, path=b418e41fa05a8dd2, class=static_validated, events=3 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=3 */
    /* branch path: 0xbd003:je:1;0xbd0b8:je:0;0xbd0f8:je:0;0xbd166:je:0;0xbd1bb:je:0;0xbd1f8:je:0 */
    /* top actual targets: 99@0x8c99a:2,168@0x9aa83:1 */
    /* operands: b0=enum7(0x68:125,0xf0:25,0xe8:3,0x40:1,0x08:1,0x30:1);b1=enum7(0x6b:125,0xb9:25,0xe7:3,0xef:1,0xe5:1,0xde:1);b2=enum2(0x32:150,0x62:7) */
    /* GPR+scratch branch profile: 0/30 unknown branches (0.0%): */
    vm->state = state0 & 0x3eb8b067u + flags0 & flags0 ^ 0x1f891278u + flags0 + 0x6859cefdu;
    vm->flags = flags0 ^ 0x168dd881u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32(state0 & 0x3eb8b067u)) + flags0)) & (mask32(flags0 ^ 0x1f891278u)))) + flags0)) + 0x6859cefdu)) | 0x47dd4277u)))) - 0x35a6d51u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_017_80e74d2f1533(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=17, native=0x7bae9, path=80e74d2f15336754, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7bafa:je:1;0x7bbdd:jne:1;0x7bbea:jne:1;0x7bbf8:jne:1;0x7bc05:jne:0;0x7bc7b:je:0;0x7bd0e:je:1 */
    /* top actual targets: 185@0x9d964:1,317@0xba1e2:1 */
    /* operands: b0=var54(top=0x12:33.9%);b1=var37(top=0xff:35.9%);b2=enum4(0x3a:321,0x62:293,0x32:75,0x50:69);b3=var28(top=0x10:34.4%);b4=var12(top=0xa0:35.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x4365071cu - 0x69693e45u & 0x3d8b48f7u - 0x1b99cfe0u + 0x7ec4552au & 0x2b98de46u + 0x459da9b2u;
    return r;
}

static VMOpResult path_entry_017_b32a005b1bc3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=17, native=0x7bae9, path=b32a005b1bc32374, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7bafa:je:1;0x7bbdd:jne:1;0x7bbea:jne:1;0x7bbf8:jne:0;0x7bc05:jne:1;0x7bc7b:je:1;0x7bd0e:je:1 */
    /* top actual targets: 215@0xa4609:1,269@0xb045b:1 */
    /* operands: b0=var54(top=0x12:33.9%);b1=var37(top=0xff:35.9%);b2=enum4(0x3a:321,0x62:293,0x32:75,0x50:69);b3=var28(top=0x10:34.4%);b4=var12(top=0xa0:35.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x4365071cu - 0x69693e45u & 0x3d8b48f7u - 0x1b99cfe0u + 0x7ec4552au & 0x2b98de46u + 0x459da9b2u;
    return r;
}

static VMOpResult path_entry_017_d8729a7a9827(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=17, native=0x7bae9, path=d8729a7a98279df5, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7bafa:je:1;0x7bbdd:jne:1;0x7bbea:jne:1;0x7bbf8:jne:1;0x7bc05:jne:0;0x7bc7b:je:1;0x7bd0e:je:1 */
    /* top actual targets: 200@0xa0a9e:1,220@0xa522e:1 */
    /* operands: b0=var54(top=0x12:33.9%);b1=var37(top=0xff:35.9%);b2=enum4(0x3a:321,0x62:293,0x32:75,0x50:69);b3=var28(top=0x10:34.4%);b4=var12(top=0xa0:35.0%) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ 0x4365071cu - 0x69693e45u & 0x3d8b48f7u - 0x1b99cfe0u + 0x7ec4552au & 0x2b98de46u + 0x459da9b2u;
    return r;
}

static VMOpResult path_entry_030_ce3f2f6f70dc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=ce3f2f6f70dc85dd, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7e868:je:0;0x7e896:je:1;0x7e8b1:je:1;0x7e913:je:1;0x7e92e:je:1;0x7eb45:je:1 */
    /* top actual targets: 192@0x9f00a:1,203@0xa1484:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    return r;
}

static VMOpResult path_entry_031_7c575499fb7c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=31, native=0x7ecd2, path=7c575499fb7c10f7, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x7eda5:jne:1;0x7edb6:jne:1;0x7edc5:jne:0;0x7eddd:jne:1;0x7ee6c:je:0 */
    /* top actual targets: 352@0xc1ec4:2 */
    /* operands: b0=0x3d;b1=0x01;b2=0xdf;b3=0x2e;b4=0xed */
    /* GPR+scratch branch profile: 0/10 unknown branches (0.0%): */
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + state0)) - 0x72a124afu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_048_4554738dd02e(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=48, native=0x82477, path=4554738dd02e4626, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x824a2:je:0;0x8259a:jne:0;0x825a7:jne:1;0x825b4:jne:1;0x825c0:jne:1;0x8260a:je:1 */
    /* top actual targets: 3@0x78c77:1,90@0x8b334:1 */
    /* operands: b0=var36(top=0xa8:11.3%);b1=var50(top=0x80:14.1%);b2=enum4(0x3a:109,0x50:80,0x62:69,0x32:25);b3=var73(top=0x01:9.5%);b4=var76(top=0x3b:9.2%) */
    /* GPR+scratch branch profile: 0/714 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 ^ flags0 ^ 0x8881ae0u - 0x1accc893u + 0x4f1a7667u - flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u & flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    vm->flags = flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    /* r.slot = (mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32((mask32(U16(vm->ip + 0x3u) + state0)) ^ (mask32((mask32(flags0 ^ 0x8881ae0u)) - 0x1accc893u)))))) + 0x4f1a7667u)) - (mask32((mask32((mask32(flags0 ^ 0x8881ae0u)) - 0x1accc893u)) & 0x6134e706u)))) & (mask32((mask32((mask32(flags0 ^ 0x...#0334916c6242; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_048_af9211b7c30a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=48, native=0x82477, path=af9211b7c30a7a32, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x824a2:je:0;0x8259a:jne:1;0x825a7:jne:1;0x825b4:jne:0;0x825c0:jne:1;0x8260a:je:0 */
    /* top actual targets: 300@0xb6c36:2 */
    /* operands: b0=var36(top=0xa8:11.3%);b1=var50(top=0x80:14.1%);b2=enum4(0x3a:109,0x50:80,0x62:69,0x32:25);b3=var73(top=0x01:9.5%);b4=var76(top=0x3b:9.2%) */
    /* GPR+scratch branch profile: 0/714 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 ^ flags0 ^ 0x8881ae0u - 0x1accc893u + 0x4f1a7667u - flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u & flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    vm->flags = flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    /* r.slot = (mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32((mask32(U16(vm->ip + 0x3u) + state0)) ^ (mask32((mask32(flags0 ^ 0x8881ae0u)) - 0x1accc893u)))))) + 0x4f1a7667u)) - (mask32((mask32((mask32((mask32((mask32(flags0 ^ 0x8881ae0u)) - 0x1accc893u)) & 0x6134e706u)) & 0x7e86fbd3u)) ^ 0x41bau...#9fb39bf6f58a; */
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_062_46d2270df907(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=62, native=0x84aa3, path=46d2270df907c1b4, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x84c20:je:1 */
    /* top actual targets: 307@0xb8064:2 */
    /* operands: b0=var14(top=0xf9:77.5%);b1=var14(top=0xc9:75.8%);b2=var16(top=0xa3:75.8%);b3=var16(top=0x52:75.8%) */
    /* GPR+scratch branch profile: 0/36 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0xd90ded5u - 0x219c02d3u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | (mask32(U16(vm->ip + 0x2u) ^ (mask32(flags0 + 0xd90ded5u)))))) ^ 0x5dbb6647u)))) + 0x7ebb48a2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_129_2d7de7f338ef(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=129, native=0x92f21, path=2d7de7f338ef1eb3, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x93007:je:0 */
    /* top actual targets: 217@0xa4b11:1,347@0xc088d:1 */
    /* operands: b0=var10(top=0xf0:46.0%);b1=var10(top=0x06:46.0%);b2=enum2(0x62:137,0x32:2) */
    /* GPR+scratch branch profile: 0/128 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0 + state0 & flags0;
    return r;
}

static VMOpResult path_entry_136_2c34239f0338(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=136, native=0x9461b, path=2c34239f03385794, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0x9473e:jne:1;0x9475a:jne:1;0x9477b:jne:0;0x947a6:jne:1;0x94851:je:0 */
    /* top actual targets: 198@0xa037e:2 */
    /* operands: b0=0x75;b1=0xd8;b2=0x3d;b3=0x01;b4=0x5b */
    /* GPR+scratch branch profile: 0/10 unknown branches (0.0%): */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ state0)) - 0x2eae4eacu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_140_f699aebd2ab3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, path=f699aebd2ab38d8b, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x94e85:je:0;0x94f11:je:1;0x94fab:je:0;0x94fdd:je:0;0x95000:je:0;0x9504c:je:0 */
    /* top actual targets: 18@0x7be9b:2 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x6f549f79u - state0;
    vm->flags = flags0 - 0x6f549f79u - state0;
    return r;
}

static VMOpResult path_entry_160_b5dc6ce09827(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=160, native=0x994cf, path=b5dc6ce098276a10, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x99521:jne:0;0x9952e:jne:1;0x9953c:jne:1;0x9956c:jne:1;0x995b7:je:0 */
    /* top actual targets: 185@0x9d964:1,30@0x7e849:1 */
    /* operands: b0=var52(top=0x79:6.7%);b1=var12(top=0x2f:18.6%) */
    /* GPR+scratch branch profile: 0/652 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x559d4d7bu;
    return r;
}

static VMOpResult path_entry_173_0a4b2fe7c989(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=173, native=0x9ba74, path=0a4b2fe7c989472d, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x9bb4a:jne:1;0x9bb57:jne:1;0x9bb65:jne:0;0x9bb7a:je:0;0x9bb91:jne:1;0x9bbb5:je:0;0x9bbfa:je:1 */
    /* top actual targets: 203@0xa1484:1,337@0xbec0e:1 */
    /* operands: b0=var117(top=0xaf:7.6%);b1=var32(top=0x0b:13.4%) */
    /* GPR+scratch branch profile: 0/804 unknown branches (0.0%): */
    vm->state = state0 + 0x5eced92du ^ 0x456d7018u;
    vm->flags = flags0 - state0 + 0x5eced92du;
    return r;
}

static VMOpResult path_entry_198_5fd34b2586cb(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=198, native=0xa037e, path=5fd34b2586cb4fcb, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa0391:je:1;0xa04a9:jne:1;0xa04b6:jne:1;0xa04c4:jne:0;0xa04da:je:1;0xa04f1:jne:1 */
    /* top actual targets: 300@0xb6c36:2 */
    /* operands: b0=var217(top=0xe3:5.4%);b1=var220(top=0x54:5.3%) */
    /* GPR+scratch branch profile: 0/654 unknown branches (0.0%): */
    vm->state = state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u - U16(vm->ip + 0x0u) - state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u ^ 0x3fe99379u;
    vm->flags = flags0 + 0x15b2dfa5u;
    return r;
}

static VMOpResult path_entry_237_220aec61f5cb(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=220aec61f5cb2605, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa8efb:je:1;0xa8f3c:je:1;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:1;0xa9025:jne:0;0xa90d7:je:0;0xa9292:je:1 */
    /* top actual targets: 108@0x8f24b:1,160@0x994cf:1 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    return r;
}

static VMOpResult path_entry_248_21850699e16f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=248, native=0xac110, path=21850699e16fcd1a, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0xac120:je:1;0xac2b8:je:0 */
    /* top actual targets: 189@0x9e7af:1,258@0xadf2c:1 */
    /* operands: b0=enum7(0x8a:9,0x60:4,0xa7:2,0x8c:2,0x3b:1,0xcd:1);b1=enum7(0xf8:9,0x74:4,0xb6:2,0xea:2,0xe6:1,0x7d:1);b2=enum6(0x7b:9,0x2b:4,0x83:4,0x8b:1,0xa3:1,0xfb:1);b3=enum5(0x0e:9,0x03:6,0x02:2,0x05:2,0x0c:1) */
    /* GPR+scratch branch profile: 0/30 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - state0;
    vm->flags = flags0 - state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ 0x4160066bu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_268_06903b8c2657(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=268, native=0xb0007, path=06903b8c26572b18, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xb01e9:je:1;0xb0218:je:0;0xb026a:je:1;0xb029a:je:1;0xb02eb:je:0;0xb0307:je:1 */
    /* top actual targets: 199@0xa0631:1,347@0xc088d:1 */
    /* operands: b0=var247(top=0x4a:3.3%);b1=var251(top=0x1c:6.8%);b2=var127(top=0x3e:4.0%);b3=var202(top=0x6c:7.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u;
    return r;
}

static VMOpResult path_entry_268_23ad013654b7(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=268, native=0xb0007, path=23ad013654b73764, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xb01e9:je:1;0xb0218:je:1;0xb026a:je:1;0xb029a:je:1;0xb02eb:je:0;0xb0307:je:1 */
    /* top actual targets: 26@0x7dbbb:1,337@0xbec0e:1 */
    /* operands: b0=var247(top=0x4a:3.3%);b1=var251(top=0x1c:6.8%);b2=var127(top=0x3e:4.0%);b3=var202(top=0x6c:7.2%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u;
    return r;
}

static VMOpResult path_entry_330_5c2cab85f9af(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=5c2cab85f9afab52, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xbc9d3:je:1;0xbca25:je:1;0xbcaa5:je:1;0xbcabc:je:0;0xbcaf6:je:1;0xbcd08:jne:1;0xbcd41:jne:1;0xbcd64:jne:0;0xbcd99:jne:1 */
    /* top actual targets: 30@0x7e849:1,92@0x8b8cb:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_688bf75cfe02(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=688bf75cfe02a663, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0xbc9d3:je:1;0xbca25:je:1;0xbcaa5:je:1;0xbcabc:je:0;0xbcaf6:je:0;0xbcd08:jne:0;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:1 */
    /* top actual targets: 18@0x7be9b:2 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_d53dca47d629(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=d53dca47d6295059, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=2 */
    /* branch path: 0xbc9d3:je:1;0xbca25:je:1;0xbcaa5:je:0;0xbcabc:je:0;0xbcaf6:je:1;0xbcd08:jne:1;0xbcd41:jne:1;0xbcd64:jne:0;0xbcd99:jne:1 */
    /* top actual targets: 220@0xa522e:1,239@0xa991e:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_352_ddee6711eeae(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=352, native=0xc1ec4, path=ddee6711eeae4b11, class=static_validated, events=2 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xc1f17:je:0;0xc1f5b:je:1;0xc1fba:jne:1;0xc1fc6:jne:1;0xc1fd3:jne:0;0xc1fe9:je:1;0xc2000:jne:1;0xc2027:je:0 */
    /* top actual targets: 157@0x98a9a:1,171@0x9b4b3:1 */
    /* operands: b0=var124(top=0x16:8.0%);b1=var55(top=0xdb:8.3%) */
    /* GPR+scratch branch profile: 0/912 unknown branches (0.0%): */
    vm->state = state0 & 0x31863366u;
    vm->flags = flags0;
    return r;
}

static VMOpResult path_entry_013_19d8a9a4824d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=13, native=0x7aee8, path=19d8a9a4824de2a0, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x7af0e:je:0;0x7b058:je:0;0x7b089:jne:0;0x7b097:jne:1;0x7b0a6:jne:1;0x7b0b4:jne:1;0x7b0f2:je:0;0x7b14c:je:0;0x7b179:je:0 */
    /* top actual targets: 257@0xadbfd:1 */
    /* operands: b0=enum2(0x9e:4,0x6a:1);b1=enum2(0x7e:4,0x75:1);b2=0x3d;b3=0x01;b4=enum2(0x25:4,0x11:1) */
    /* GPR+scratch branch profile: 0/45 unknown branches (0.0%): */
    vm->state = state0 ^ 0x67934603u ^ flags0 - 0x1c36555u;
    vm->flags = flags0 - 0x1c36555u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32(state0 ^ 0x67934603u)) ^ (mask32((mask32((mask32((mask32(flags0 - 0x1c36555u)) | 0x771fee31u)) | 0x1490ac71u)) - 0x2de02e8u)))))) - 0x5ad3c2e8u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_030_c8764df718f2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=c8764df718f2a620, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7e868:je:1;0x7e896:je:1;0x7e8b1:je:0;0x7e913:je:0;0x7e92e:je:1;0x7eb45:je:1 */
    /* top actual targets: 157@0x98a9a:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    return r;
}

static VMOpResult path_entry_030_fba3c9c2e17c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, path=fba3c9c2e17c050b, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7e868:je:1;0x7e896:je:1;0x7e8b1:je:0;0x7e913:je:0;0x7e92e:je:0;0x7eb45:je:0 */
    /* top actual targets: 307@0xb8064:1 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x614d4b17u;
    return r;
}

static VMOpResult path_entry_033_02a7dbac9483(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=33, native=0x7f7c4, path=02a7dbac9483710b, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7f7fd:je:1;0x7f845:je:1;0x7f916:jne:1;0x7f927:jne:1;0x7f94a:je:0;0x7f95a:je:0;0x7f983:je:1;0x7f9b7:je:1;0x7f9e8:je:1 */
    /* top actual targets: 114@0x90319:1 */
    /* operands: b0=0xe8;b1=0x01;b2=var122(top=0x34:5.8%);b3=var129(top=0xc8:6.6%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ state0 & 0x457915dcu & 0x16110d0au;
    return r;
}

static VMOpResult path_entry_033_4c69f6d00599(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=33, native=0x7f7c4, path=4c69f6d005993dcf, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x7f7fd:je:0;0x7f845:je:0;0x7f916:jne:1;0x7f927:jne:1;0x7f94a:je:0;0x7f95a:je:0;0x7f983:je:1;0x7f9b7:je:0;0x7f9e8:je:0 */
    /* top actual targets: 337@0xbec0e:1 */
    /* operands: b0=0xe8;b1=0x01;b2=var122(top=0x34:5.8%);b3=var129(top=0xc8:6.6%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 ^ state0 & 0x457915dcu & 0x16110d0au;
    return r;
}

static VMOpResult path_entry_035_c66298eb8aac(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=35, native=0x7fd4d, path=c66298eb8aac69a6, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x7fe93:jne:0;0x7feab:jne:1;0x7ff5d:je:1 */
    /* top actual targets: 256@0xad849:1 */
    /* operands: b0=0x69;b1=0xf8;b2=0x00;b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/3 unknown branches (0.0%): */
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - state0)) ^ 0x2c39edf6u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_054_101e5bd73623(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=54, native=0x837cb, path=101e5bd73623ffe7, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x8393d:jne:1;0x83956:jne:1;0x8396c:jne:0;0x83985:jne:1;0x83a29:je:0 */
    /* top actual targets: 256@0xad849:1 */
    /* operands: b0=0xf1;b1=0x1b;b2=0xbd;b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/5 unknown branches (0.0%): */
    vm->state = state0 & flags0 - 0x68b4ad2fu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 & flags0)) - 0x68b4ad2fu)))) ^ 0x437360e7u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_082_02562957f798(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=82, native=0x8920e, path=02562957f79852a7, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x8922d:je:1;0x8925b:je:1;0x89293:je:1;0x892c8:je:1;0x89338:je:1 */
    /* top actual targets: 99@0x8c99a:1 */
    /* operands: b0=var11(top=0x3e:45.1%);b1=var9(top=0xb1:45.1%);b2=0x62 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + flags0 + 0x1bc90d20u;
    vm->flags = flags0 + 0x1bc90d20u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 + flags0)))) + 0x5cc5e4d8u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_082_1606fb4d642d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=82, native=0x8920e, path=1606fb4d642df6a7, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x8922d:je:1;0x8925b:je:0;0x89293:je:0;0x892c8:je:0;0x89338:je:0 */
    /* top actual targets: 307@0xb8064:1 */
    /* operands: b0=var11(top=0x3e:45.1%);b1=var9(top=0xb1:45.1%);b2=0x62 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + flags0 + 0x1bc90d20u;
    vm->flags = flags0 + 0x1bc90d20u;
    return r;
}

static VMOpResult path_entry_085_0c1933f1b1ee(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=85, native=0x89b37, path=0c1933f1b1ee8d9e, class=affine_dispatch_fallback, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x89bd0:je:1;0x89bf4:je:0;0x89c4b:jne:1;0x89c91:jne:1;0x89cee:jne:1;0x89d1a:jne:1;0x89d86:jne:1;0x89e0b:jne:1;0x89e7b:jne:1;0x89f0f:jne:1;0x89f91:jne:1;0x8a053:jne:1;0x8a090:jne:1;0x8a0d9:jne:1;0x8a10b:jne:1;0x8a14e:jne:1;0x8a192:jne:1;0x8a1e5:je:0 */
    /* top actual targets: 64@0x85059:1 */
    /* operands: b0=0x1e;b1=0x1e;b2=0x02;b3=0x00;b4=0x80;b5=0x00;b6=0x3d;b7=0x01;b8=0x22;b9=0xe8;b10=0x01;b11=0x00;...+1 */
    /* GPR+scratch branch profile: 0/18 unknown branches (0.0%): */
    r.slot = (uint32_t)(U16(vm->ip + 0xbu) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xd;
    return r;
}

static VMOpResult path_entry_088_81ed0e3e63ff(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=88, native=0x8aa14, path=81ed0e3e63ffdef8, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x8aa9c:je:1;0x8acf1:jne:0;0x8ad18:jne:1;0x8ad2e:jne:1;0x8ad3a:jne:1;0x8aeac:je:0 */
    /* top actual targets: 257@0xadbfd:1 */
    /* operands: b0=var11(top=0x41:43.0%);b1=var11(top=0xeb:43.0%);b2=var11(top=0xa6:43.0%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) + (mask32((mask32(state0 | flags0)) - 0x1c9cfceau)))) ^ 0x415462f5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_099_83df7909478a(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=99, native=0x8c99a, path=83df7909478a8cf0, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x8ca79:jne:1;0x8ca94:jne:0;0x8cb4e:je:1 */
    /* top actual targets: 198@0xa037e:1 */
    /* operands: b0=0x00;b1=var24(top=0x09:36.8%);b2=var20(top=0x7a:36.8%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x1u) ^ state0 - 0x48503105u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) ^ state0)) - 0x48503105u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_101_310931333360(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=101, native=0x8ceb4, path=3109313333601288, class=affine_dispatch_fallback, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x8cf5a:je:1;0x8cf84:je:0;0x8cfcc:jne:1;0x8d00f:jne:1;0x8d082:jne:1;0x8d0eb:jne:1;0x8d140:jne:1;0x8d1c6:jne:1;0x8d275:jne:1;0x8d2cf:jne:1;0x8d31e:jne:1;0x8d3df:jne:1;0x8d41a:jne:1;0x8d462:jne:1;0x8d4a5:jne:1;0x8d4e6:jne:1;0x8d530:jne:1;0x8d57c:je:0 */
    /* top actual targets: 199@0xa0631:1 */
    /* operands: b0=0x1e;b1=0x1e;b2=0x02;b3=0x00;b4=0x80;b5=0x00;b6=0x3d;b7=0x01;b8=0x22;b9=0xe8;b10=0x01;b11=0x54;...+1 */
    /* GPR+scratch branch profile: 0/18 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0xbu) ^ state0 ^ 0x44422ebbu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0xbu) ^ state0)) ^ 0x44422ebbu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xd;
    return r;
}

static VMOpResult path_entry_102_ce1c74c71b8b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=102, native=0x8d71d, path=ce1c74c71b8b49af, class=affine_dispatch_fallback, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x8d7dc:je:0;0x8d7e6:je:0;0x8d82d:jne:1;0x8d85e:jne:1;0x8d8d1:jne:1;0x8d925:jne:1;0x8d96c:jne:0;0x8d989:je:0;0x8d9b0:je:1;0x8d9f6:jne:1;0x8da74:jne:1;0x8daed:jne:1;0x8db72:jne:1;0x8dc26:jne:1;0x8dc81:jne:1;0x8dcd4:jne:1;0x8dd26:jne:1;0x8dd78:jne:1;0x8ddb3:jne:1;0x8de04:je:0 */
    /* top actual targets: 268@0xb0007:1 */
    /* operands: b0=0x47;b1=0x4e;b2=0x04;b3=0x00;b4=0x80;b5=0x00;b6=0x3d;b7=0x01;b8=0x89;b9=0xe8;b10=0x01;b11=0xb9;...+1 */
    /* GPR+scratch branch profile: 0/1280 unknown branches (0.0%): */
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0xbu) + state0)) + 0x7b88d4e3u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xd;
    return r;
}

static VMOpResult path_entry_105_d1e679141ab1(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=105, native=0x8e6b4, path=d1e679141ab1ec6f, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x8e713:je:1;0x8e925:jne:1;0x8e94d:jne:0;0x8e96f:jne:1;0x8e9a6:jne:1 */
    /* top actual targets: 83@0x8947b:1 */
    /* operands: b0=var58(top=0x28:38.2%);b1=var76(top=0xa6:38.2%);b2=var22(top=0xf0:39.0%);b3=var11(top=0x0a:41.4%);b4=enum4(0x62:366,0x32:151,0x50:84,0x3a:70) */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu & U16(vm->ip + 0x0u) + state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu + flags0 ^ 0x6808cf40u - 0x72c2e29bu - U16(vm->ip + 0x2u);
    vm->flags = flags0 ^ 0x6808cf40u - 0x72c2e29bu ^ 0x35dcbb88u;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_108_5f4b9f379e40(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=108, native=0x8f24b, path=5f4b9f379e40e547, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x8f368:jne:1;0x8f38e:jne:0;0x8f3a8:jne:1;0x8f438:jne:1;0x8f4f4:je:1;0x8f53a:je:0;0x8f55b:je:1 */
    /* top actual targets: 114@0x90319:1 */
    /* operands: b0=var228(top=0xce:5.1%);b1=var237(top=0x85:6.6%) */
    /* GPR+scratch branch profile: 0/917 unknown branches (0.0%): */
    vm->state = state0 + 0x11961dc7u ^ 0x5fa19cc7u - flags0;
    vm->flags = flags0 ^ 0x1d98f07au & 0x60594c67u - 0x2e3abdaeu;
    return r;
}

static VMOpResult path_entry_108_ab195e204d83(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=108, native=0x8f24b, path=ab195e204d83a97c, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x8f368:jne:1;0x8f38e:jne:1;0x8f3a8:jne:0;0x8f3ec:je:1;0x8f438:jne:1;0x8f4f4:je:0;0x8f53a:je:0;0x8f55b:je:1 */
    /* top actual targets: 337@0xbec0e:1 */
    /* operands: b0=var228(top=0xce:5.1%);b1=var237(top=0x85:6.6%) */
    /* GPR+scratch branch profile: 0/917 unknown branches (0.0%): */
    vm->state = state0 + 0x11961dc7u ^ 0x5fa19cc7u - flags0;
    vm->flags = flags0 ^ 0x1d98f07au & 0x60594c67u - 0x2e3abdaeu;
    return r;
}

static VMOpResult path_entry_122_d05c9b2323c5(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=122, native=0x9170d, path=d05c9b2323c578d9, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x9183d:jne:0;0x9184b:jne:1;0x9185a:jne:1;0x91872:jne:1;0x91935:je:0 */
    /* top actual targets: 334@0xbdd18:1 */
    /* operands: b0=var38(top=0x63:30.3%);b1=var40(top=0x71:30.1%);b2=0x3d;b3=0x01;b4=var37(top=0xd7:30.1%) */
    /* GPR+scratch branch profile: 0/605 unknown branches (0.0%): */
    vm->state = state0 + flags0 - U16(vm->ip + 0x0u) + state0 + flags0 + 0x1af9be18u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 + flags0)))) + 0x1af9be18u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_123_7ca4af5fe495(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=123, native=0x91a59, path=7ca4af5fe495d779, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x91a6a:je:0;0x91be2:jne:1;0x91c91:je:0;0x91cd7:je:1;0x91d11:je:0 */
    /* top actual targets: 258@0xadf2c:1 */
    /* operands: b0=var226(top=0x56:3.4%);b1=var237(top=0x96:3.3%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/640 unknown branches (0.0%): */
    vm->state = state0 + 0x3da77425u - U16(vm->ip + 0x0u) - state0 + 0x3da77425u ^ 0x1603b0a9u;
    vm->flags = flags0 & 0x6e640fcbu + 0x6b73b101u + 0x2261b554u + 0x4cd877bfu;
    return r;
}

static VMOpResult path_entry_125_6855c7694d2c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=125, native=0x922c4, path=6855c7694d2cef8f, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x923cb:jne:1;0x923df:jne:1;0x923f7:jne:1;0x9240b:jne:0;0x924eb:je:0 */
    /* top actual targets: 316@0xb987b:1 */
    /* operands: b0=var25(top=0x2b:70.5%);b1=var25(top=0x60:70.5%);b2=var24(top=0x21:70.5%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/95 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x0u) + state0 - 0x7b275316u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + state0)) - 0x7b275316u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_140_cec80b7303cf(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, path=cec80b7303cf8610, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x94e85:je:0;0x94f11:je:1;0x94fab:je:0;0x94fdd:je:0;0x95000:je:0;0x9504c:je:1 */
    /* top actual targets: 203@0xa1484:1 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 - flags0 - 0x6f549f79u - state0;
    vm->flags = flags0 - 0x6f549f79u - state0;
    return r;
}

static VMOpResult path_entry_157_3ac6dab09bb3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=157, native=0x98a9a, path=3ac6dab09bb33a9c, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0x98ab4:je:1;0x98afb:je:1;0x98b42:je:1;0x98d6b:je:1;0x98db0:je:1;0x98e31:je:1;0x98e54:je:1 */
    /* top actual targets: 258@0xadf2c:1 */
    /* operands: b0=var125(top=0x03:4.1%);b1=var228(top=0xd8:4.3%);b2=var17(top=0x68:20.5%);b3=enum2(0x00:12160,0x01:2533) */
    /* GPR+scratch branch profile: 0/896 unknown branches (0.0%): */
    vm->state = state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u);
    vm->flags = flags0 + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) & 0x60d377f3u;
    return r;
}

static VMOpResult path_entry_190_2ec827c425d2(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=190, native=0x9eacb, path=2ec827c425d26b05, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0x9eae9:je:1;0x9ebff:jne:1;0x9ec18:jne:1;0x9ec2d:jne:1;0x9ec3b:jne:0;0x9ecd6:je:0 */
    /* top actual targets: 257@0xadbfd:1 */
    /* operands: b0=0x3d;b1=0x01;b2=var10(top=0x00:55.8%);b3=var9(top=0xf7:57.1%);b4=var10(top=0x01:55.8%) */
    /* GPR+scratch branch profile: 0/486 unknown branches (0.0%): */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 + 0x20f4b909u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + state0)) + 0x20f4b909u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_199_1c2914d9ca04(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=199, native=0xa0631, path=1c2914d9ca049a16, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa0676:je:0;0xa0921:je:0;0xa094b:je:1;0xa0985:je:0 */
    /* top actual targets: 127@0x926c3:1 */
    /* operands: b0=var128(top=0xc7:3.5%);b1=var256(top=0x88:2.4%);b2=var179(top=0x3a:9.8%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 + U8(vm->ip + 0x2u) + flags0 ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + flags0 ^ 0x7353b039u - 0x24d1328au;
    vm->flags = flags0 ^ 0x7353b039u - 0x24d1328au & 0x4705559fu + 0x79865026u + 0x73a763f8u;
    return r;
}

static VMOpResult path_entry_209_d8f8bc3805cf(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=209, native=0xa2935, path=d8f8bc3805cfbed9, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xa295d:je:1;0xa29e3:je:1;0xa2ab8:jne:1;0xa2ac5:jne:1;0xa2ad2:jne:1;0xa2ade:jne:0;0xa2b7f:je:0;0xa2bdc:je:0;0xa2c02:je:0 */
    /* top actual targets: 257@0xadbfd:1 */
    /* operands: b0=enum2(0x9c:1,0x80:1);b1=enum2(0x9c:1,0x0f:1);b2=0x3d;b3=0x01;b4=enum2(0xd9:1,0x85:1) */
    /* GPR+scratch branch profile: 0/9 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 & (mask32(flags0 | 0x22939484u)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_217_dbf8044244c4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=217, native=0xa4b11, path=dbf8044244c4dd26, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xa4bfa:jne:1;0xa4c0e:jne:0;0xa4cf8:je:1 */
    /* top actual targets: 352@0xc1ec4:1 */
    /* operands: b0=0x00;b1=var19(top=0x0c:29.8%);b2=var18(top=0x87:30.7%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 ^ flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) - (mask32(state0 ^ flags0)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_222_3072da87febd(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=222, native=0xa5f3c, path=3072da87febdb44f, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xa5fbf:je:1;0xa600d:je:1;0xa6222:jne:1;0xa622f:jne:0;0xa6250:jne:1;0xa6276:jne:1 */
    /* top actual targets: 35@0x7fd4d:1 */
    /* operands: b0=var60(top=0x10:25.6%);b1=var60(top=0xf8:25.2%);b2=var58(top=0xd9:25.2%);b3=var46(top=0x4e:25.2%);b4=enum4(0x3a:97,0x50:89,0x62:67,0x32:1) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0 + flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)) & (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)))) + flags0)))) | 0x39a63024u)) + (mask32(flags0 + 0x17d780cau)))))) - 0x29e369dfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_237_8f76701e339c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, path=8f76701e339cb0f5, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xa8efb:je:0;0xa8f3c:je:1;0xa8fc9:je:0;0xa9000:jne:1;0xa900c:jne:1;0xa9019:jne:0;0xa9025:jne:1;0xa90d7:je:0;0xa9292:je:1 */
    /* top actual targets: 108@0x8f24b:1 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    return r;
}

static VMOpResult path_entry_241_09dd52184bb3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=241, native=0xa9ffa, path=09dd52184bb38480, class=affine_dispatch_fallback, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xaa0ad:je:1;0xaa0df:je:1;0xaa127:jne:1;0xaa177:jne:1;0xaa1d4:jne:1;0xaa20d:jne:1;0xaa242:jne:1;0xaa2bd:jne:1;0xaa365:jne:1;0xaa3f3:jne:1;0xaa45e:jne:1;0xaa501:jne:1;0xaa542:jne:1;0xaa5ac:jne:1;0xaa601:jne:1;0xaa630:jne:1;0xaa66f:jne:1;0xaa6d6:je:1 */
    /* top actual targets: 333@0xbd8af:1 */
    /* operands: b0=enum2(0x1e:1,0xc6:1);b1=enum2(0x1e:1,0xf1:1);b2=enum2(0x02:1,0x05:1);b3=0x00;b4=0x80;b5=0x00;b6=0x3d;b7=0x01;b8=0x22;b9=0xe8;b10=0x01;b11=enum2(0x0a:1,0xb6:1);...+1 */
    /* GPR+scratch branch profile: 0/18 unknown branches (0.0%): */
    vm->state = state0 - U16(vm->ip + 0xbu) + state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0xbu) + state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xd;
    return r;
}

static VMOpResult path_entry_248_acbff1ba210f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=248, native=0xac110, path=acbff1ba210ff976, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xac120:je:0;0xac2b8:je:1 */
    /* top actual targets: 345@0xc02e4:1 */
    /* operands: b0=enum7(0x8a:9,0x60:4,0xa7:2,0x8c:2,0x3b:1,0xcd:1);b1=enum7(0xf8:9,0x74:4,0xb6:2,0xea:2,0xe6:1,0x7d:1);b2=enum6(0x7b:9,0x2b:4,0x83:4,0x8b:1,0xa3:1,0xfb:1);b3=enum5(0x0e:9,0x03:6,0x02:2,0x05:2,0x0c:1) */
    /* GPR+scratch branch profile: 0/30 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - state0;
    vm->flags = flags0 - state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ 0x4160066bu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_250_f3368a160347(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=250, native=0xac802, path=f3368a1603473e1e, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xac869:je:0;0xac9ef:je:0;0xaca3e:je:1 */
    /* top actual targets: 157@0x98a9a:1 */
    /* operands: b0=0x62;b1=enum6(0xd8:64,0x9e:4,0x99:3,0xf9:2,0x12:1,0x28:1);b2=enum6(0xc4:64,0x09:4,0x77:3,0x01:2,0x52:1,0x14:1) */
    /* GPR+scratch branch profile: 0/216 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 + flags0 ^ flags0;
    vm->flags = flags0 & 0x68a0e4dau + 0x40c8070au - 0x1d26ca9du - 0xc88b898u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 ^ flags0)) + flags0)) ^ (mask32(flags0 | 0x75c2d7adu)))) + 0x3d28c7fcu)) - 0xb911f97u)))) + 0x71ad6fc6u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_257_706f0fbb9354(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=257, native=0xadbfd, path=706f0fbb93540b86, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xadc1e:je:0;0xadcc0:jne:1;0xadccc:jne:0;0xadcd9:jne:1;0xadd06:jne:1;0xadd6a:je:0;0xadda4:je:1 */
    /* top actual targets: 64@0x85059:1 */
    /* operands: b0=var32(top=0xe7:10.9%);b1=var43(top=0xb5:9.7%) */
    /* GPR+scratch branch profile: 0/918 unknown branches (0.0%): */
    vm->state = state0 - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32(state0 - 0x509f61c9u)) + 0x1b9def5u)) - 0x7d4ca123u)) | 0x1d2af87u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    return r;
}

static VMOpResult path_entry_260_2a5fb4d289ee(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=260, native=0xae90b, path=2a5fb4d289ee3b20, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xae92e:je:0;0xaea48:je:0;0xaea75:je:1 */
    /* top actual targets: 203@0xa1484:1 */
    /* operands: b0=var69(top=0x38:9.9%);b1=var13(top=0x0f:27.6%);b2=var108(top=0x38:9.7%);b3=var54(top=0x00:20.7%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 + 0x581f6275u ^ flags0 - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u;
    vm->flags = flags0 - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 + 0x581f6275u)) ^ (mask32((mask32((mask32(flags0 - 0x705f9ad2u)) + 0x760922e2u)) & 0x2efb7283u)))) | 0x7ba7e961u)) + (mask32((mask32(flags0 - 0x705f9ad2u)) + 0x760922e2u)))) | (mask32((mask32((mask32(flags0 ...#8a08f6a34a8d; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_260_5a379914f038(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=260, native=0xae90b, path=5a379914f0381e9f, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xae92e:je:1;0xaea48:je:1;0xaea75:je:1 */
    /* top actual targets: 105@0x8e6b4:1 */
    /* operands: b0=var69(top=0x38:9.9%);b1=var13(top=0x0f:27.6%);b2=var108(top=0x38:9.7%);b3=var54(top=0x00:20.7%) */
    /* GPR+scratch branch profile: 0/384 unknown branches (0.0%): */
    vm->state = state0 + 0x581f6275u ^ flags0 - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u;
    vm->flags = flags0 - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u;
    return r;
}

static VMOpResult path_entry_282_5f2049fc4206(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=282, native=0xb3128, path=5f2049fc4206797a, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xb3145:je:1;0xb3178:je:1;0xb31f8:je:1;0xb3253:je:0;0xb3455:jne:1;0xb348a:jne:1;0xb34a1:jne:0;0xb34b6:jne:1 */
    /* top actual targets: 185@0x9d964:1 */
    /* operands: b0=var62(top=0x2d:24.2%);b1=var45(top=0x22:24.2%);b2=var79(top=0x05:23.8%);b3=var73(top=0x57:23.8%);b4=enum3(0x3a:103,0x62:87,0x50:79) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    vm->flags = flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u ^ 0x171f71e1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ (mask32(flags0 - 0x334721c0u)))))) ^ 0x644d2bc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_282_773356a8125f(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=282, native=0xb3128, path=773356a8125f572c, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xb3145:je:1;0xb3178:je:1;0xb31f8:je:1;0xb3253:je:0;0xb3455:jne:1;0xb348a:jne:1;0xb34a1:jne:1;0xb34b6:jne:0 */
    /* top actual targets: 18@0x7be9b:1 */
    /* operands: b0=var62(top=0x2d:24.2%);b1=var45(top=0x22:24.2%);b2=var79(top=0x05:23.8%);b3=var73(top=0x57:23.8%);b4=enum3(0x3a:103,0x62:87,0x50:79) */
    /* GPR+scratch branch profile: 0/1024 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    vm->flags = flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u ^ 0x171f71e1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ (mask32(flags0 - 0x334721c0u)))))) ^ 0x644d2bc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_284_c64644ae256c(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=284, native=0xb379b, path=c64644ae256c2283, class=affine_dispatch_fallback, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xb3856:je:0;0xb385f:je:0;0xb38dd:jne:0;0xb38ea:jne:0;0xb3917:jne:1;0xb3965:jne:1;0xb39b2:jne:1;0xb39df:jne:1;0xb3a68:jne:1;0xb3af4:jne:1;0xb3b4d:jne:1;0xb3bd3:jne:1;0xb3c88:jne:1;0xb3cd2:jne:1;0xb3d1c:jne:1;0xb3d77:jne:1;0xb3db0:jne:1;0xb3df9:jne:1;0xb3e3a:je:0 */
    /* top actual targets: 239@0xa991e:1 */
    /* operands: b0=0x1e;b1=0x1e;b2=0x02;b3=0x00;b4=0x80;b5=0x00;b6=0x3d;b7=0x01;b8=0x9a;b9=0xe8;b10=0x01;b11=0xc4;...+1 */
    /* GPR+scratch branch profile: 0/19 unknown branches (0.0%): */
    vm->state = state0 - U16(vm->ip + 0xbu) - 0x14b96a4cu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0xbu) - 0x14b96a4cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xd;
    return r;
}

static VMOpResult path_entry_285_f79371fd7cb4(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=285, native=0xb3ff4, path=f79371fd7cb4721f, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xb40c0:jne:1;0xb40e0:jne:1;0xb40fd:jne:0;0xb410f:jne:1;0xb4198:je:0 */
    /* top actual targets: 160@0x994cf:1 */
    /* operands: b0=0x3d;b1=0x01;b2=0x67;b3=0x85;b4=0x4f */
    /* GPR+scratch branch profile: 0/5 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 + U16(vm->ip + 0x2u) - state0 ^ flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ flags0)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_292_5ab24bee3c6b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=292, native=0xb540f, path=5ab24bee3c6b71f5, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xb5688:jne:1;0xb56bb:jne:0;0xb56c8:jne:1;0xb56f3:jne:1;0xb5771:je:0;0xb57c8:je:0 */
    /* top actual targets: 124@0x91e81:1 */
    /* operands: b0=enum4(0x62:422,0x50:105,0x3a:98,0x32:26);b1=var53(top=0xdc:39.3%);b2=var55(top=0x7b:39.3%);b3=var69(top=0xd0:39.5%);b4=var63(top=0xaa:39.5%) */
    /* GPR+scratch branch profile: 0/768 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 - 0x592d1456u ^ 0x6ef9e3c1u;
    return r;
}

static VMOpResult path_entry_314_edc2d63ecc90(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=314, native=0xb8fcf, path=edc2d63ecc901b43, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xb9027:je:1;0xb92f2:je:0 */
    /* top actual targets: 189@0x9e7af:1 */
    /* operands: b0=0x2c;b1=0x74;b2=0xfa;b3=0x95;b4=0xff;b5=0xff;b6=0xff;b7=0xff;b8=0x6a;b9=0xbb */
    /* GPR+scratch branch profile: 0/2 unknown branches (0.0%): */
    vm->state = state0 - U32(vm->ip + 0x0u) ^ state0 + 0x477d7abbu;
    vm->flags = flags0 ^ state0 - 0x35ede369u + 0x6124f239u + 0x374b6378u - 0x36a041e8u + state0 - U32(vm->ip + 0x0u) ^ state0 - 0x7ff540aeu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x8u) + (mask32((mask32(state0 - (mask32(U32(vm->ip + 0x0u) ^ state0)))) + 0x477d7abbu)))) - 0x5861bc11u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xa;
    return r;
}

static VMOpResult path_entry_317_6d5f43d16e2b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=317, native=0xba1e2, path=6d5f43d16e2bf73e, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xba1fd:je:1;0xba223:je:0;0xba266:je:0;0xba2ec:je:0;0xba503:je:0 */
    /* top actual targets: 48@0x82477:1 */
    /* operands: b0=var40(top=0xe7:25.9%);b1=var56(top=0xc8:26.1%);b2=var50(top=0x08:49.3%);b3=var60(top=0xdc:25.5%) */
    /* GPR+scratch branch profile: 0/330 unknown branches (0.0%): */
    vm->state = state0 - flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u;
    vm->flags = flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u;
    /* r.slot = (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - (mask32((mask32((mask32((mask32(flags0 + 0x189c9c80u)) - 0x4373d071u)) ^ 0x12461866u)) & 0x2d8e67e2u)))) | (mask32((mask32((mask32((mask32(flags0 + 0x189c9c80u)) - 0x4373d071u)) ^ 0x12461866u)) & 0x2d8e67e2u)))) ^ ...#3c36dcb3546a; */
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_323_78dcf8948d5b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=323, native=0xbb6e6, path=78dcf8948d5b31b3, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xbb707:je:1;0xbb766:je:0;0xbb7ba:je:0 */
    /* top actual targets: 310@0xb8556:1 */
    /* operands: b0=0x36;b1=0x01;b2=0x00;b3=0x00 */
    /* GPR+scratch branch profile: 0/3 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 - flags0;
    vm->flags = flags0 + 0x5de5c852u + 0xa0d232au + 0x1ce63a22u ^ 0x34d95df5u;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_330_1c2a7cd724ae(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=1c2a7cd724ae0e42, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xbc9d3:je:1;0xbca25:je:1;0xbcaa5:je:1;0xbcabc:je:0;0xbcaf6:je:0;0xbcd08:jne:1;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:0 */
    /* top actual targets: 18@0x7be9b:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_3ba719b17520(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=3ba719b1752004a7, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xbc9d3:je:0;0xbca25:je:1;0xbcaa5:je:1;0xbcabc:je:0;0xbcaf6:je:1;0xbcd08:jne:1;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:0 */
    /* top actual targets: 185@0x9d964:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_695df04a75c7(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=695df04a75c73264, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xbc9d3:je:0;0xbca25:je:1;0xbcaa5:je:1;0xbcabc:je:0;0xbcaf6:je:0;0xbcd08:jne:0;0xbcd41:jne:1;0xbcd64:jne:1;0xbcd99:jne:1 */
    /* top actual targets: 220@0xa522e:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_330_722343a64206(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, path=722343a64206d485, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xbc9d3:je:0;0xbca25:je:1;0xbcaa5:je:0;0xbcabc:je:0;0xbcaf6:je:1;0xbcd08:jne:1;0xbcd41:jne:1;0xbcd64:jne:0;0xbcd99:jne:1 */
    /* top actual targets: 18@0x7be9b:1 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0;
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_331_5fbed292e10b(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=331, native=0xbcfc8, path=5fbed292e10b3080, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xbd003:je:0;0xbd0b8:je:0;0xbd0f8:je:0;0xbd166:je:0;0xbd1bb:je:0;0xbd1f8:je:0 */
    /* top actual targets: 99@0x8c99a:1 */
    /* operands: b0=enum7(0x68:125,0xf0:25,0xe8:3,0x40:1,0x08:1,0x30:1);b1=enum7(0x6b:125,0xb9:25,0xe7:3,0xef:1,0xe5:1,0xde:1);b2=enum2(0x32:150,0x62:7) */
    /* GPR+scratch branch profile: 0/30 unknown branches (0.0%): */
    vm->state = state0 & 0x3eb8b067u + flags0 & flags0 ^ 0x1f891278u + flags0 + 0x6859cefdu;
    vm->flags = flags0 ^ 0x168dd881u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32(state0 & 0x3eb8b067u)) + flags0)) & (mask32(flags0 ^ 0x1f891278u)))) + flags0)) + 0x6859cefdu)) | 0x47dd4277u)))) - 0x35a6d51u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_331_82c778544ad3(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=331, native=0xbcfc8, path=82c778544ad3dff8, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xbd003:je:0;0xbd0b8:je:1;0xbd0f8:je:0;0xbd166:je:0;0xbd1bb:je:0;0xbd1f8:je:0 */
    /* top actual targets: 222@0xa5f3c:1 */
    /* operands: b0=enum7(0x68:125,0xf0:25,0xe8:3,0x40:1,0x08:1,0x30:1);b1=enum7(0x6b:125,0xb9:25,0xe7:3,0xef:1,0xe5:1,0xde:1);b2=enum2(0x32:150,0x62:7) */
    /* GPR+scratch branch profile: 0/30 unknown branches (0.0%): */
    vm->state = state0 & 0x3eb8b067u + flags0 & flags0 ^ 0x1f891278u + flags0 + 0x6859cefdu;
    vm->flags = flags0 ^ 0x168dd881u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32(state0 & 0x3eb8b067u)) + flags0)) & (mask32(flags0 ^ 0x1f891278u)))) + flags0)) + 0x6859cefdu)) | 0x47dd4277u)))) - 0x35a6d51u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    return r;
}

static VMOpResult path_entry_346_570b341c1819(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=346, native=0xc0535, path=570b341c1819f56e, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xc056a:je:0;0xc05d7:je:0;0xc0628:je:0;0xc064e:je:1;0xc06a9:jne:1;0xc06ba:jne:1;0xc06dc:je:0;0xc06ec:je:0;0xc074c:je:0 */
    /* top actual targets: 167@0x9a8d2:1 */
    /* operands: b0=var232(top=0x22:3.1%);b1=var243(top=0x94:3.1%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    vm->flags = flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u - 0x3d02d701u - 0x727be02cu;
    return r;
}

static VMOpResult path_entry_346_928c0bda79e1(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=346, native=0xc0535, path=928c0bda79e19d1a, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xc056a:je:1;0xc05d7:je:1;0xc0628:je:1;0xc064e:je:1;0xc06a9:jne:1;0xc06ba:jne:1;0xc06dc:je:0;0xc06ec:je:0;0xc074c:je:1 */
    /* top actual targets: 114@0x90319:1 */
    /* operands: b0=var232(top=0x22:3.1%);b1=var243(top=0x94:3.1%);b2=0xe8;b3=0x01 */
    /* GPR+scratch branch profile: 0/1152 unknown branches (0.0%): */
    vm->state = state0 ^ flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    vm->flags = flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u - 0x3d02d701u - 0x727be02cu;
    return r;
}

static VMOpResult path_entry_348_9b1901656de0(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=348, native=0xc0d7d, path=9b1901656de004c9, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xc0e89:je:1;0xc0fff:jne:1;0xc101b:jne:1;0xc103b:jne:0;0xc1049:jne:1;0xc10e5:je:1;0xc11b6:je:0;0xc1278:je:1 */
    /* top actual targets: 257@0xadbfd:1 */
    /* operands: b0=var11(top=0xc5:21.6%);b1=var13(top=0x7c:16.2%);b2=0x3d;b3=0x01;b4=var15(top=0x13:16.2%) */
    /* GPR+scratch branch profile: 0/224 unknown branches (0.0%): */
    vm->state = state0 & 0x4ead272u + flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 & 0x4ead272u)) + flags0)) | (mask32(flags0 | 0x2730b0ccu)))) & 0x19c08712u)))) - 0x369ef0d5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_348_f2c2c381e953(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=348, native=0xc0d7d, path=f2c2c381e9538cab, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=1 */
    /* branch path: 0xc0e89:je:1;0xc0fff:jne:1;0xc101b:jne:1;0xc103b:jne:0;0xc1049:jne:1;0xc10e5:je:0;0xc11b6:je:0;0xc1278:je:0 */
    /* top actual targets: 160@0x994cf:1 */
    /* operands: b0=var11(top=0xc5:21.6%);b1=var13(top=0x7c:16.2%);b2=0x3d;b3=0x01;b4=var15(top=0x13:16.2%) */
    /* GPR+scratch branch profile: 0/224 unknown branches (0.0%): */
    vm->state = state0 & 0x4ead272u + flags0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 & 0x4ead272u)) + flags0)) | (mask32((mask32((mask32((mask32(flags0 | 0x2730b0ccu)) - 0x5c278a20u)) & 0x31691179u)) - 0x5c3efee3u)))) & 0x19c08712u)))) - 0x369ef0d5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_349_56d1c3533025(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=349, native=0xc140b, path=56d1c35330251181, class=static_validated, events=1 */
    /* validation: target=100.0%, ip=100.0%, sample_expr_events=- */
    /* branch path: 0xc164c:je:1;0xc173f:je:0;0xc177b:je:0;0xc17c3:je:0 */
    /* top actual targets: 199@0xa0631:1 */
    /* operands: b0=var68(top=0x00:50.9%);b1=var71(top=0xad:51.3%);b2=var20(top=0x88:53.7%);b3=var11(top=0x00:59.2%) */
    /* GPR+scratch branch profile: 0/512 unknown branches (0.0%): */
    vm->state = state0 & flags0;
    vm->flags = flags0 + 0x5b8191bu - 0x48cf2626u - 0x7444487fu ^ state0 & flags0;
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
    { 20, 0xc49963356ba8fe1dull, 943u, "static_validated", "target=100.0%, ip=100.0%, ok:943", path_entry_020_c49963356ba8 },
    { 176, 0xb375be1a950bc98full, 914u, "static_validated", "target=100.0%, ip=100.0%, ok:914", path_entry_176_b375be1a950b },
    { 161, 0x0ca40c0e59dbe6e9ull, 899u, "static_validated", "target=100.0%, ip=100.0%, ok:899", path_entry_161_0ca40c0e59db },
    { 192, 0xd4c8fd95d9a6d339ull, 894u, "static_validated", "target=100.0%, ip=100.0%, ok:894", path_entry_192_d4c8fd95d9a6 },
    { 220, 0xa21119ff764203f4ull, 889u, "static_validated", "target=100.0%, ip=100.0%, ok:889", path_entry_220_a21119ff7642 },
    { 196, 0x9917c35930d48ca1ull, 865u, "static_validated", "target=100.0%, ip=100.0%, ok:865", path_entry_196_9917c35930d4 },
    { 79, 0x66d9f51d9c82b5fcull, 863u, "static_validated", "target=100.0%, ip=100.0%, ok:863", path_entry_079_66d9f51d9c82 },
    { 243, 0x4dd686abf8650c2aull, 848u, "static_validated", "target=100.0%, ip=100.0%, ok:848", path_entry_243_4dd686abf865 },
    { 173, 0xa18349357a38cb5cull, 788u, "static_validated", "target=100.0%, ip=100.0%, ok:788", path_entry_173_a18349357a38 },
    { 3, 0xd35e83d5fc67b2c6ull, 785u, "static_validated", "target=100.0%, ip=100.0%, ok:785", path_entry_003_d35e83d5fc67 },
    { 352, 0xf355f88fd20c15a3ull, 781u, "static_validated", "target=100.0%, ip=100.0%, ok:781", path_entry_352_f355f88fd20c },
    { 128, 0x1cc26e6017eab5d3ull, 773u, "static_validated", "target=100.0%, ip=100.0%, ok:773", path_entry_128_1cc26e6017ea },
    { 269, 0x002580e3f4159fc1ull, 763u, "static_validated", "target=100.0%, ip=100.0%, ok:763", path_entry_269_002580e3f415 },
    { 345, 0x7e0925f660bbdbe8ull, 751u, "static_validated", "target=100.0%, ip=100.0%, ok:751", path_entry_345_7e0925f660bb },
    { 33, 0x7af422a11315895aull, 738u, "static_validated", "target=100.0%, ip=100.0%, ok:738", path_entry_033_7af422a11315 },
    { 121, 0xe3b0c44298fc1c14ull, 737u, "static_validated", "target=100.0%, ip=100.0%, ok:737", path_entry_121_e3b0c44298fc },
    { 167, 0xe3b0c44298fc1c14ull, 726u, "static_validated", "target=100.0%, ip=100.0%, ok:726", path_entry_167_e3b0c44298fc },
    { 260, 0xbeb0ded0c6bd2168ull, 723u, "static_validated", "target=100.0%, ip=100.0%, ok:723", path_entry_260_beb0ded0c6bd },
    { 254, 0x654b5ded1981085bull, 712u, "static_validated", "target=100.0%, ip=100.0%, ok:712", path_entry_254_654b5ded1981 },
    { 268, 0xe08fa0239f68c868ull, 702u, "static_validated", "target=100.0%, ip=100.0%, ok:702", path_entry_268_e08fa0239f68 },
    { 123, 0x5321b7c3bbe1e7b9ull, 699u, "static_validated", "target=100.0%, ip=100.0%, ok:699", path_entry_123_5321b7c3bbe1 },
    { 160, 0xc44c0307f0fc4574ull, 676u, "static_validated", "target=100.0%, ip=100.0%, ok:676", path_entry_160_c44c0307f0fc },
    { 320, 0x5f045809296d5b3dull, 654u, "static_validated", "target=100.0%, ip=100.0%, ok:654", path_entry_320_5f045809296d },
    { 253, 0x1b329325bc7a0ef6ull, 648u, "static_validated", "target=100.0%, ip=100.0%, ok:648", path_entry_253_1b329325bc7a },
    { 322, 0xfd79160f5b9f1866ull, 646u, "static_validated", "target=100.0%, ip=100.0%, ok:646", path_entry_322_fd79160f5b9f },
    { 52, 0xa5bdf261163619f8ull, 643u, "static_validated", "target=100.0%, ip=100.0%, ok:643", path_entry_052_a5bdf2611636 },
    { 165, 0xe3b0c44298fc1c14ull, 632u, "static_validated", "target=100.0%, ip=100.0%, ok:632", path_entry_165_e3b0c44298fc },
    { 346, 0x66817cf32267dc25ull, 613u, "static_validated", "target=100.0%, ip=100.0%, ok:613", path_entry_346_66817cf32267 },
    { 66, 0x4690fe4f5b0885c4ull, 602u, "static_validated", "target=100.0%, ip=100.0%, ok:602", path_entry_066_4690fe4f5b08 },
    { 26, 0xa8425a0f38d9fe8dull, 561u, "static_validated", "target=100.0%, ip=100.0%, ok:561", path_entry_026_a8425a0f38d9 },
    { 154, 0x2bda520e96f2c598ull, 542u, "static_validated", "target=100.0%, ip=100.0%, ok:542", path_entry_154_2bda520e96f2 },
    { 351, 0xe3b0c44298fc1c14ull, 542u, "static_validated", "target=100.0%, ip=100.0%, ok:542", path_entry_351_e3b0c44298fc },
    { 260, 0xd8192970ef3a82a2ull, 541u, "static_validated", "target=100.0%, ip=100.0%, ok:541", path_entry_260_d8192970ef3a },
    { 257, 0x4da4fe40de22a206ull, 531u, "static_validated", "target=100.0%, ip=100.0%, ok:531", path_entry_257_4da4fe40de22 },
    { 99, 0x4ebfcdebd7bce70eull, 530u, "static_validated", "target=100.0%, ip=100.0%, ok:530", path_entry_099_4ebfcdebd7bc },
    { 123, 0xd2e29b026964fcf1ull, 527u, "static_validated", "target=100.0%, ip=100.0%, ok:527", path_entry_123_d2e29b026964 },
    { 30, 0x2208c3d00e21a891ull, 522u, "static_validated", "target=100.0%, ip=100.0%, ok:522", path_entry_030_2208c3d00e21 },
    { 340, 0xbb7a9a08ec3867b1ull, 514u, "static_validated", "target=100.0%, ip=100.0%, ok:514", path_entry_340_bb7a9a08ec38 },
    { 300, 0x745a7b95e00833b1ull, 510u, "static_validated", "target=100.0%, ip=100.0%, ok:510", path_entry_300_745a7b95e008 },
    { 37, 0x92113252d88219f9ull, 492u, "static_validated", "target=100.0%, ip=100.0%, ok:492", path_entry_037_92113252d882 },
    { 198, 0x505403243bd35b86ull, 484u, "static_validated", "target=100.0%, ip=100.0%, ok:484", path_entry_198_505403243bd3 },
    { 144, 0x4d9c1fd4300908d8ull, 480u, "static_validated", "target=100.0%, ip=100.0%, ok:480", path_entry_144_4d9c1fd43009 },
    { 301, 0xd1d08c84dc4f1a8dull, 475u, "static_validated", "target=100.0%, ip=100.0%, ok:475", path_entry_301_d1d08c84dc4f },
    { 319, 0x9a21b656ce3dc52bull, 475u, "static_validated", "target=100.0%, ip=100.0%, ok:475", path_entry_319_9a21b656ce3d },
    { 91, 0x0d50d52eb7de2693ull, 474u, "static_validated", "target=100.0%, ip=100.0%, ok:474", path_entry_091_0d50d52eb7de },
    { 198, 0xa16a8badeb00f044ull, 467u, "static_validated", "target=100.0%, ip=100.0%, ok:467", path_entry_198_a16a8badeb00 },
    { 297, 0x4649b816d12abef9ull, 465u, "static_validated", "target=100.0%, ip=100.0%, ok:465", path_entry_297_4649b816d12a },
    { 18, 0x3fb41280ccd8685bull, 456u, "static_validated", "target=100.0%, ip=100.0%, ok:456", path_entry_018_3fb41280ccd8 },
    { 160, 0x3240613169d3e063ull, 453u, "static_validated", "target=100.0%, ip=100.0%, ok:453", path_entry_160_3240613169d3 },
    { 181, 0xe3b0c44298fc1c14ull, 453u, "static_validated", "target=100.0%, ip=100.0%, ok:453", path_entry_181_e3b0c44298fc },
    { 332, 0x4ddafdbbeaa3d928ull, 451u, "static_validated", "target=100.0%, ip=100.0%, ok:451", path_entry_332_4ddafdbbeaa3 },
    { 90, 0xe3b0c44298fc1c14ull, 441u, "static_validated", "target=100.0%, ip=100.0%, ok:441", path_entry_090_e3b0c44298fc },
    { 307, 0xd225712c0754a6b5ull, 440u, "static_validated", "target=100.0%, ip=100.0%, ok:440", path_entry_307_d225712c0754 },
    { 124, 0x720d13cce365bff2ull, 424u, "static_validated", "target=100.0%, ip=100.0%, ok:424", path_entry_124_720d13cce365 },
    { 144, 0x2f8ce0fc3cdeca85ull, 406u, "static_validated", "target=100.0%, ip=100.0%, ok:406", path_entry_144_2f8ce0fc3cde },
    { 268, 0xc1e3dfd197d904dfull, 405u, "static_validated", "target=100.0%, ip=100.0%, ok:405", path_entry_268_c1e3dfd197d9 },
    { 305, 0xec1b94f05ced6b81ull, 398u, "static_validated", "target=100.0%, ip=100.0%, ok:398", path_entry_305_ec1b94f05ced },
    { 83, 0x51cc8bda8af23024ull, 397u, "static_validated", "target=100.0%, ip=100.0%, ok:397", path_entry_083_51cc8bda8af2 },
    { 239, 0x5b37691aa2424c6aull, 391u, "static_validated", "target=100.0%, ip=100.0%, ok:391", path_entry_239_5b37691aa242 },
    { 292, 0x0997af338ad030eeull, 389u, "static_validated", "target=100.0%, ip=100.0%, ok:389", path_entry_292_0997af338ad0 },
    { 108, 0xfab5693be0e97629ull, 386u, "static_validated", "target=100.0%, ip=100.0%, ok:386", path_entry_108_fab5693be0e9 },
    { 283, 0xe3b0c44298fc1c14ull, 381u, "static_validated", "target=100.0%, ip=100.0%, ok:381", path_entry_283_e3b0c44298fc },
    { 144, 0xdf981a914db02de7ull, 376u, "static_validated", "target=100.0%, ip=100.0%, ok:376", path_entry_144_df981a914db0 },
    { 108, 0xfadb67a2878c38a3ull, 365u, "static_validated", "target=100.0%, ip=100.0%, ok:365", path_entry_108_fadb67a2878c },
    { 340, 0x69e377434a334c1bull, 364u, "static_validated", "target=100.0%, ip=100.0%, ok:364", path_entry_340_69e377434a33 },
    { 114, 0x9fb28485e66f63b4ull, 359u, "static_validated", "target=100.0%, ip=100.0%, ok:359", path_entry_114_9fb28485e66f },
    { 183, 0x7633afa8259cedcdull, 359u, "static_validated", "target=100.0%, ip=100.0%, ok:359", path_entry_183_7633afa8259c },
    { 257, 0x4f54f5b6f3a20391ull, 357u, "static_validated", "target=100.0%, ip=100.0%, ok:357", path_entry_257_4f54f5b6f3a2 },
    { 79, 0x4fa9d758759c0b0eull, 353u, "static_validated", "target=100.0%, ip=100.0%, ok:353", path_entry_079_4fa9d758759c },
    { 237, 0x69c6b0e5ccc43bb0ull, 351u, "static_validated", "target=100.0%, ip=100.0%, ok:351", path_entry_237_69c6b0e5ccc4 },
    { 352, 0xb17f769d0eb20d52ull, 350u, "static_validated", "target=100.0%, ip=100.0%, ok:350", path_entry_352_b17f769d0eb2 },
    { 281, 0xbf19bc7c26ba5d0eull, 347u, "static_validated", "target=100.0%, ip=100.0%, ok:347", path_entry_281_bf19bc7c26ba },
    { 352, 0x7741bb1ac2cf28bdull, 347u, "static_validated", "target=100.0%, ip=100.0%, ok:347", path_entry_352_7741bb1ac2cf },
    { 319, 0x862159fb64299b44ull, 337u, "static_validated", "target=100.0%, ip=100.0%, ok:337", path_entry_319_862159fb6429 },
    { 144, 0x9f3cc1c99e54d1d6ull, 329u, "static_validated", "target=100.0%, ip=100.0%, ok:329", path_entry_144_9f3cc1c99e54 },
    { 105, 0xcf8d4e548fe382efull, 328u, "static_validated", "target=100.0%, ip=100.0%, ok:328", path_entry_105_cf8d4e548fe3 },
    { 70, 0x490afcdddd0d9c29ull, 327u, "static_validated", "target=100.0%, ip=100.0%, ok:327", path_entry_070_490afcdddd0d },
    { 118, 0x0c2ec304c56dd3deull, 325u, "static_validated", "target=100.0%, ip=100.0%, ok:325", path_entry_118_0c2ec304c56d },
    { 168, 0x5a46469f23bdd3ccull, 322u, "static_validated", "target=100.0%, ip=100.0%, ok:322", path_entry_168_5a46469f23bd },
    { 127, 0xa24732f3bf1ecb29ull, 320u, "static_validated", "target=100.0%, ip=100.0%, ok:320", path_entry_127_a24732f3bf1e },
    { 83, 0x5a30d3b6ba886a30ull, 317u, "static_validated", "target=100.0%, ip=100.0%, ok:317", path_entry_083_5a30d3b6ba88 },
    { 180, 0x840c57e172be5a2eull, 303u, "static_validated", "target=100.0%, ip=100.0%, ok:303", path_entry_180_840c57e172be },
    { 338, 0x55cdaf5314f06009ull, 300u, "static_validated", "target=100.0%, ip=100.0%, ok:300", path_entry_338_55cdaf5314f0 },
    { 169, 0xe3b0c44298fc1c14ull, 296u, "static_validated", "target=100.0%, ip=100.0%, ok:296", path_entry_169_e3b0c44298fc },
    { 189, 0x7483e4cd2418f22cull, 296u, "static_validated", "target=100.0%, ip=100.0%, ok:296", path_entry_189_7483e4cd2418 },
    { 349, 0x15bcc1ea74bf0193ull, 293u, "static_validated", "target=100.0%, ip=100.0%, ok:293", path_entry_349_15bcc1ea74bf },
    { 26, 0x2328e09ca352b2ffull, 286u, "static_validated", "target=100.0%, ip=100.0%, ok:286", path_entry_026_2328e09ca352 },
    { 200, 0x432568af12e4447bull, 268u, "static_validated", "target=100.0%, ip=100.0%, ok:268", path_entry_200_432568af12e4 },
    { 201, 0x1519cd726560d643ull, 266u, "static_validated", "target=100.0%, ip=100.0%, ok:266", path_entry_201_1519cd726560 },
    { 144, 0x543db112a6706a4eull, 259u, "static_validated", "target=100.0%, ip=100.0%, ok:259", path_entry_144_543db112a670 },
    { 70, 0x4550a35d86c6e9dcull, 256u, "static_validated", "target=100.0%, ip=100.0%, ok:256", path_entry_070_4550a35d86c6 },
    { 107, 0xe5cd368af7da2edeull, 256u, "static_validated", "target=100.0%, ip=100.0%, ok:256", path_entry_107_e5cd368af7da },
    { 183, 0x9c00903a53cb9c74ull, 252u, "static_validated", "target=100.0%, ip=100.0%, ok:252", path_entry_183_9c00903a53cb },
    { 261, 0xe3b0c44298fc1c14ull, 250u, "static_validated", "target=100.0%, ip=100.0%, ok:250", path_entry_261_e3b0c44298fc },
    { 168, 0xcb8a5cbea557e0e9ull, 245u, "static_validated", "target=100.0%, ip=100.0%, ok:245", path_entry_168_cb8a5cbea557 },
    { 189, 0x6f9a1c43a43f01aeull, 243u, "static_validated", "target=100.0%, ip=100.0%, ok:243", path_entry_189_6f9a1c43a43f },
    { 17, 0xe50010ea5d8a73bfull, 241u, "static_validated", "target=100.0%, ip=100.0%, ok:241", path_entry_017_e50010ea5d8a },
    { 305, 0x718cb0102314ed52ull, 240u, "static_validated", "target=100.0%, ip=100.0%, ok:240", path_entry_305_718cb0102314 },
    { 40, 0xe3b0c44298fc1c14ull, 235u, "static_validated", "target=100.0%, ip=100.0%, ok:235", path_entry_040_e3b0c44298fc },
    { 297, 0xf974a1d6cd969c6bull, 235u, "static_validated", "target=100.0%, ip=100.0%, ok:235", path_entry_297_f974a1d6cd96 },
    { 37, 0x80dfe08b6a278d90ull, 231u, "static_validated", "target=100.0%, ip=100.0%, ok:231", path_entry_037_80dfe08b6a27 },
    { 354, 0x00cfcc3534d46b1full, 231u, "static_validated", "target=100.0%, ip=100.0%, ok:231", path_entry_354_00cfcc3534d4 },
    { 66, 0x7777b50c03549a09ull, 225u, "static_validated", "target=100.0%, ip=100.0%, ok:225", path_entry_066_7777b50c0354 },
    { 123, 0x1a385d201ce552edull, 223u, "static_validated", "target=100.0%, ip=100.0%, ok:223", path_entry_123_1a385d201ce5 },
    { 124, 0x2ee011e838763ccdull, 215u, "static_validated", "target=100.0%, ip=100.0%, ok:215", path_entry_124_2ee011e83876 },
    { 217, 0xdc7b945dcdb3a561ull, 205u, "static_validated", "target=100.0%, ip=100.0%, ok:205", path_entry_217_dc7b945dcdb3 },
    { 352, 0x4a8edb2c1ffd3095ull, 204u, "static_validated", "target=100.0%, ip=100.0%, ok:204", path_entry_352_4a8edb2c1ffd },
    { 108, 0x13f7c681a86939e7ull, 200u, "static_validated", "target=100.0%, ip=100.0%, ok:200", path_entry_108_13f7c681a869 },
    { 114, 0x58b862ae748a5f39ull, 200u, "static_validated", "target=100.0%, ip=100.0%, ok:200", path_entry_114_58b862ae748a },
    { 18, 0xb2353417ac420d7full, 198u, "static_validated", "target=100.0%, ip=100.0%, ok:198", path_entry_018_b2353417ac42 },
    { 140, 0x87e7b35510351d03ull, 197u, "static_validated", "target=100.0%, ip=100.0%, ok:197", path_entry_140_87e7b3551035 },
    { 154, 0x5b78998740ff7852ull, 193u, "static_validated", "target=100.0%, ip=100.0%, ok:193", path_entry_154_5b78998740ff },
    { 295, 0xe3b0c44298fc1c14ull, 190u, "static_validated", "target=100.0%, ip=100.0%, ok:190", path_entry_295_e3b0c44298fc },
    { 322, 0x10e8593b486b88a6ull, 188u, "static_validated", "target=100.0%, ip=100.0%, ok:188", path_entry_322_10e8593b486b },
    { 256, 0x9b71fe6ab7a5d549ull, 184u, "static_validated", "target=100.0%, ip=100.0%, ok:184", path_entry_256_9b71fe6ab7a5 },
    { 291, 0xdc818c3d8f0dea4aull, 178u, "static_validated", "target=100.0%, ip=100.0%, ok:178", path_entry_291_dc818c3d8f0d },
    { 180, 0x8d3726fc6281a26dull, 175u, "static_validated", "target=100.0%, ip=100.0%, ok:175", path_entry_180_8d3726fc6281 },
    { 114, 0x8af1b9e4f1a2f90cull, 168u, "static_validated", "target=100.0%, ip=100.0%, ok:168", path_entry_114_8af1b9e4f1a2 },
    { 144, 0xb6537cd5d26d3942ull, 168u, "static_validated", "target=100.0%, ip=100.0%, ok:168", path_entry_144_b6537cd5d26d },
    { 192, 0x84d195541895864cull, 168u, "static_validated", "target=100.0%, ip=100.0%, ok:168", path_entry_192_84d195541895 },
    { 198, 0xde24412b149602c5ull, 159u, "static_validated", "target=100.0%, ip=100.0%, ok:159", path_entry_198_de24412b1496 },
    { 119, 0x4c73699f63238b6full, 158u, "static_validated", "target=100.0%, ip=100.0%, ok:158", path_entry_119_4c73699f6323 },
    { 239, 0x28ac4d307c83df98ull, 155u, "static_validated", "target=100.0%, ip=100.0%, ok:155", path_entry_239_28ac4d307c83 },
    { 20, 0x954a153a601a1e13ull, 154u, "static_validated", "target=100.0%, ip=100.0%, ok:154", path_entry_020_954a153a601a },
    { 346, 0x3b28db7f78198053ull, 151u, "static_validated", "target=100.0%, ip=100.0%, ok:151", path_entry_346_3b28db7f7819 },
    { 301, 0xeed7c9ccfebc34e6ull, 149u, "static_validated", "target=100.0%, ip=100.0%, ok:149", path_entry_301_eed7c9ccfebc },
    { 160, 0x9fbaf1bff4b8248bull, 147u, "static_validated", "target=100.0%, ip=100.0%, ok:147", path_entry_160_9fbaf1bff4b8 },
    { 160, 0xf0b499c4c681c814ull, 145u, "static_validated", "target=100.0%, ip=100.0%, ok:145", path_entry_160_f0b499c4c681 },
    { 114, 0x51eab4ff7ea038c9ull, 141u, "static_validated", "target=100.0%, ip=100.0%, ok:141", path_entry_114_51eab4ff7ea0 },
    { 30, 0x2c3a503057ba4a40ull, 138u, "static_validated", "target=100.0%, ip=100.0%, ok:138", path_entry_030_2c3a503057ba },
    { 310, 0xc0f3368511d55f61ull, 138u, "static_validated", "target=100.0%, ip=100.0%, ok:138", path_entry_310_c0f3368511d5 },
    { 269, 0x6901ad8af83fa830ull, 137u, "static_validated", "target=100.0%, ip=100.0%, ok:137", path_entry_269_6901ad8af83f },
    { 208, 0x0be4b13bf60bd4a5ull, 136u, "static_validated", "target=100.0%, ip=100.0%, ok:136", path_entry_208_0be4b13bf60b },
    { 256, 0x421c06cce5162555ull, 136u, "static_validated", "target=100.0%, ip=100.0%, ok:136", path_entry_256_421c06cce516 },
    { 129, 0x88af7305685357cdull, 134u, "static_validated", "target=100.0%, ip=100.0%, ok:134", path_entry_129_88af73056853 },
    { 154, 0x77c4db6928c83d65ull, 134u, "static_validated", "target=100.0%, ip=100.0%, ok:134", path_entry_154_77c4db6928c8 },
    { 257, 0x71946a671fa6f0c7ull, 133u, "static_validated", "target=100.0%, ip=100.0%, ok:133", path_entry_257_71946a671fa6 },
    { 208, 0xb204364d3b79fdd3ull, 130u, "static_validated", "target=100.0%, ip=100.0%, ok:130", path_entry_208_b204364d3b79 },
    { 200, 0xb0da9afbed11b699ull, 128u, "static_validated", "target=100.0%, ip=100.0%, ok:128", path_entry_200_b0da9afbed11 },
    { 237, 0xb6812e27a7233063ull, 128u, "static_validated", "target=100.0%, ip=100.0%, ok:128", path_entry_237_b6812e27a723 },
    { 310, 0xedf2aaace7a1b424ull, 128u, "static_validated", "target=100.0%, ip=100.0%, ok:128", path_entry_310_edf2aaace7a1 },
    { 319, 0x810a972078607739ull, 128u, "static_validated", "target=100.0%, ip=100.0%, ok:128", path_entry_319_810a97207860 },
    { 123, 0xe1fad68b7f3778caull, 127u, "static_validated", "target=100.0%, ip=100.0%, ok:127", path_entry_123_e1fad68b7f37 },
    { 333, 0xd227bd6969706e50ull, 127u, "static_validated", "target=100.0%, ip=100.0%, ok:127", path_entry_333_d227bd696970 },
    { 237, 0xd1a4d3040fe2d0f7ull, 123u, "static_validated", "target=100.0%, ip=100.0%, ok:123", path_entry_237_d1a4d3040fe2 },
    { 179, 0x5d3cc113707387d4ull, 120u, "static_validated", "target=100.0%, ip=100.0%, ok:120", path_entry_179_5d3cc1137073 },
    { 30, 0x1ea9b38d2eb43e53ull, 118u, "static_validated", "target=100.0%, ip=100.0%, ok:118", path_entry_030_1ea9b38d2eb4 },
    { 20, 0xf2702c2e2c8b820bull, 113u, "static_validated", "target=100.0%, ip=100.0%, ok:113", path_entry_020_f2702c2e2c8b },
    { 254, 0x121148e630ade341ull, 110u, "static_validated", "target=100.0%, ip=100.0%, ok:110", path_entry_254_121148e630ad },
    { 345, 0x2d9de867d680c76full, 109u, "static_validated", "target=100.0%, ip=100.0%, ok:109", path_entry_345_2d9de867d680 },
    { 3, 0x9d0c60f8ad22292dull, 108u, "static_validated", "target=100.0%, ip=100.0%, ok:108", path_entry_003_9d0c60f8ad22 },
    { 3, 0xf456fd2897d83326ull, 106u, "static_validated", "target=100.0%, ip=100.0%, ok:106", path_entry_003_f456fd2897d8 },
    { 140, 0x0831c016cdc8d67eull, 104u, "static_validated", "target=100.0%, ip=100.0%, ok:104", path_entry_140_0831c016cdc8 },
    { 122, 0xfbbf0c4194ed2eebull, 103u, "static_validated", "target=100.0%, ip=100.0%, ok:103", path_entry_122_fbbf0c4194ed },
    { 354, 0xd69e7237559ac86bull, 103u, "static_validated", "target=100.0%, ip=100.0%, ok:103", path_entry_354_d69e7237559a },
    { 123, 0x6c1f6f694e202ea6ull, 99u, "static_validated", "target=100.0%, ip=100.0%, ok:99", path_entry_123_6c1f6f694e20 },
    { 37, 0xded58e16470e6196ull, 97u, "static_validated", "target=100.0%, ip=100.0%, ok:97", path_entry_037_ded58e16470e },
    { 82, 0xc9d038ee69022ef7ull, 95u, "static_validated", "target=100.0%, ip=100.0%, ok:95", path_entry_082_c9d038ee6902 },
    { 92, 0xa78244aaaf9f074full, 95u, "static_validated", "target=100.0%, ip=100.0%, ok:95", path_entry_092_a78244aaaf9f },
    { 300, 0x4d693d0a15894860ull, 95u, "static_validated", "target=100.0%, ip=100.0%, ok:95", path_entry_300_4d693d0a1589 },
    { 291, 0xa45cbc7ff0090f2eull, 94u, "static_validated", "target=100.0%, ip=100.0%, ok:94", path_entry_291_a45cbc7ff009 },
    { 148, 0x7ae8cd365d3d8af2ull, 90u, "static_validated", "target=100.0%, ip=100.0%, ok:90", path_entry_148_7ae8cd365d3d },
    { 43, 0x9e91a389bb6a0180ull, 86u, "static_validated", "target=100.0%, ip=100.0%, ok:86", path_entry_043_9e91a389bb6a },
    { 79, 0x62f69f49161a8ee2ull, 85u, "static_validated", "target=100.0%, ip=100.0%, ok:85", path_entry_079_62f69f49161a },
    { 119, 0x73da1b628e200f11ull, 85u, "static_validated", "target=100.0%, ip=100.0%, ok:85", path_entry_119_73da1b628e20 },
    { 52, 0xe530d65417b7204aull, 83u, "static_validated", "target=100.0%, ip=100.0%, ok:83", path_entry_052_e530d65417b7 },
    { 179, 0x21983abea23f320full, 81u, "static_validated", "target=100.0%, ip=100.0%, ok:81", path_entry_179_21983abea23f },
    { 346, 0xb2d30c72cdaa0b05ull, 81u, "static_validated", "target=100.0%, ip=100.0%, ok:81", path_entry_346_b2d30c72cdaa },
    { 43, 0xe9d08a79d9eba2a1ull, 80u, "static_validated", "target=100.0%, ip=100.0%, ok:80", path_entry_043_e9d08a79d9eb },
    { 30, 0xeaa0e2d5033a3455ull, 79u, "static_validated", "target=100.0%, ip=100.0%, ok:79", path_entry_030_eaa0e2d5033a },
    { 140, 0x37f6663c73c012c8ull, 79u, "static_validated", "target=100.0%, ip=100.0%, ok:79", path_entry_140_37f6663c73c0 },
    { 88, 0x2f26e461d122ec9aull, 77u, "static_validated", "target=100.0%, ip=100.0%, ok:77", path_entry_088_2f26e461d122 },
    { 320, 0x8d912487d9d4ff9cull, 77u, "static_validated", "target=100.0%, ip=100.0%, ok:77", path_entry_320_8d912487d9d4 },
    { 201, 0xe0921d3affc3a863ull, 74u, "static_validated", "target=100.0%, ip=100.0%, ok:74", path_entry_201_e0921d3affc3 },
    { 319, 0x63730cfda0ffb9fbull, 73u, "static_validated", "target=100.0%, ip=100.0%, ok:73", path_entry_319_63730cfda0ff },
    { 91, 0x85e125aa366913b1ull, 72u, "static_validated", "target=100.0%, ip=100.0%, ok:72", path_entry_091_85e125aa3669 },
    { 301, 0xdf3ac6b87011e3cfull, 72u, "static_validated", "target=100.0%, ip=100.0%, ok:72", path_entry_301_df3ac6b87011 },
    { 349, 0x91e884abd6c40602ull, 72u, "static_validated", "target=100.0%, ip=100.0%, ok:72", path_entry_349_91e884abd6c4 },
    { 94, 0xc3dbc73186689cb3ull, 71u, "static_validated", "target=100.0%, ip=100.0%, ok:71", path_entry_094_c3dbc7318668 },
    { 250, 0x2a741755722e5baeull, 71u, "static_validated", "target=100.0%, ip=100.0%, ok:71", path_entry_250_2a741755722e },
    { 140, 0x6bc8436c10d6a24dull, 70u, "static_validated", "target=100.0%, ip=100.0%, ok:70", path_entry_140_6bc8436c10d6 },
    { 179, 0x46e84a014b0ff9a5ull, 70u, "static_validated", "target=100.0%, ip=100.0%, ok:70", path_entry_179_46e84a014b0f },
    { 173, 0x7c3ef1df81b040daull, 69u, "static_validated", "target=100.0%, ip=100.0%, ok:69", path_entry_173_7c3ef1df81b0 },
    { 30, 0xeaabefc5557bf4e4ull, 68u, "static_validated", "target=100.0%, ip=100.0%, ok:68", path_entry_030_eaabefc5557b },
    { 282, 0x110886fc03b9bb84ull, 68u, "static_validated", "target=100.0%, ip=100.0%, ok:68", path_entry_282_110886fc03b9 },
    { 37, 0x194221f5813b7238ull, 67u, "static_validated", "target=100.0%, ip=100.0%, ok:67", path_entry_037_194221f5813b },
    { 108, 0x328fde791392e830ull, 67u, "static_validated", "target=100.0%, ip=100.0%, ok:67", path_entry_108_328fde791392 },
    { 198, 0xb2dfe23c48dbc369ull, 66u, "static_validated", "target=100.0%, ip=100.0%, ok:66", path_entry_198_b2dfe23c48db },
    { 118, 0xc682e41fb0d4fdceull, 65u, "static_validated", "target=100.0%, ip=100.0%, ok:65", path_entry_118_c682e41fb0d4 },
    { 128, 0x19d51e80d17f4b6eull, 65u, "static_validated", "target=100.0%, ip=100.0%, ok:65", path_entry_128_19d51e80d17f },
    { 190, 0x253e76a61958e7baull, 65u, "static_validated", "target=100.0%, ip=100.0%, ok:65", path_entry_190_253e76a61958 },
    { 208, 0xc98768020b6486fcull, 65u, "static_validated", "target=100.0%, ip=100.0%, ok:65", path_entry_208_c98768020b64 },
    { 222, 0x3c5c7e2ac6164709ull, 65u, "static_validated", "target=100.0%, ip=100.0%, ok:65", path_entry_222_3c5c7e2ac616 },
    { 330, 0x83fc504d18fb94cbull, 65u, "static_validated", "target=100.0%, ip=100.0%, ok:65", path_entry_330_83fc504d18fb },
    { 70, 0x864fa49bd935a147ull, 64u, "static_validated", "target=100.0%, ip=100.0%, ok:64", path_entry_070_864fa49bd935 },
    { 127, 0x1910477798590f8bull, 64u, "static_validated", "target=100.0%, ip=100.0%, ok:64", path_entry_127_191047779859 },
    { 198, 0x0519bbb8248a91ecull, 64u, "static_validated", "target=100.0%, ip=100.0%, ok:64", path_entry_198_0519bbb8248a },
    { 257, 0x79d49ec65a6724a0ull, 64u, "static_validated", "target=100.0%, ip=100.0%, ok:64", path_entry_257_79d49ec65a67 },
    { 280, 0xfa9f86757a332e73ull, 64u, "static_validated", "target=100.0%, ip=100.0%, ok:64", path_entry_280_fa9f86757a33 },
    { 319, 0x0c39ce7926ed9f89ull, 64u, "static_validated", "target=100.0%, ip=100.0%, ok:64", path_entry_319_0c39ce7926ed },
    { 88, 0x69c76b98c1eb4755ull, 63u, "static_validated", "target=100.0%, ip=100.0%, ok:63", path_entry_088_69c76b98c1eb },
    { 92, 0x4e1b79c9e1b36bcbull, 63u, "static_validated", "target=100.0%, ip=100.0%, ok:63", path_entry_092_4e1b79c9e1b3 },
    { 102, 0x5f8dbcaf34a472a5ull, 63u, "affine_dispatch_fallback", "target=100.0%, ip=100.0%, ok:63", path_entry_102_5f8dbcaf34a4 },
    { 146, 0x257a736ac20e565eull, 62u, "static_validated", "target=100.0%, ip=100.0%, ok:62", path_entry_146_257a736ac20e },
    { 146, 0xa468acc2971f7d3cull, 59u, "static_validated", "target=100.0%, ip=100.0%, ok:59", path_entry_146_a468acc2971f },
    { 301, 0x7535310231cf8aa5ull, 58u, "static_validated", "target=100.0%, ip=100.0%, ok:58", path_entry_301_7535310231cf },
    { 173, 0x68b4556c1b76c061ull, 52u, "static_validated", "target=100.0%, ip=100.0%, ok:52", path_entry_173_68b4556c1b76 },
    { 239, 0xdb0d47c5682396a7ull, 51u, "static_validated", "target=100.0%, ip=100.0%, ok:51", path_entry_239_db0d47c56823 },
    { 352, 0x42ed6a9e671e5d3eull, 51u, "static_validated", "target=100.0%, ip=100.0%, ok:51", path_entry_352_42ed6a9e671e },
    { 70, 0x8056e776ed725f33ull, 50u, "static_validated", "target=100.0%, ip=100.0%, ok:50", path_entry_070_8056e776ed72 },
    { 0, 0x886532d40d9edf1cull, 48u, "static_validated", "target=100.0%, ip=100.0%, ok:48", path_entry_000_886532d40d9e },
    { 300, 0x935ecabfe4d43423ull, 45u, "static_validated", "target=100.0%, ip=100.0%, ok:45", path_entry_300_935ecabfe4d4 },
    { 338, 0xac191ebd92796431ull, 45u, "static_validated", "target=100.0%, ip=100.0%, ok:45", path_entry_338_ac191ebd9279 },
    { 140, 0xfd084cebec9a7aecull, 43u, "static_validated", "target=100.0%, ip=100.0%, ok:43", path_entry_140_fd084cebec9a },
    { 305, 0xf53034a3ecb104a1ull, 43u, "static_validated", "target=100.0%, ip=100.0%, ok:43", path_entry_305_f53034a3ecb1 },
    { 317, 0x4895684b48c64b41ull, 43u, "static_validated", "target=100.0%, ip=100.0%, ok:43", path_entry_317_4895684b48c6 },
    { 338, 0x04bd85f2d26ed064ull, 42u, "static_validated", "target=100.0%, ip=100.0%, ok:42", path_entry_338_04bd85f2d26e },
    { 128, 0xa63c04819ab1404cull, 41u, "static_validated", "target=100.0%, ip=100.0%, ok:41", path_entry_128_a63c04819ab1 },
    { 146, 0xfd72c17f0895e2c7ull, 40u, "static_validated", "target=100.0%, ip=100.0%, ok:40", path_entry_146_fd72c17f0895 },
    { 48, 0xcdbfce58bb9a536eull, 38u, "static_validated", "target=100.0%, ip=100.0%, ok:38", path_entry_048_cdbfce58bb9a },
    { 37, 0x565bf9ecba9ddc06ull, 36u, "static_validated", "target=100.0%, ip=100.0%, ok:36", path_entry_037_565bf9ecba9d },
    { 79, 0xe56fb50ce276e515ull, 36u, "static_validated", "target=100.0%, ip=100.0%, ok:36", path_entry_079_e56fb50ce276 },
    { 222, 0x8dbc619ae0cc1785ull, 36u, "static_validated", "target=100.0%, ip=100.0%, ok:36", path_entry_222_8dbc619ae0cc },
    { 140, 0x2b28f4fd86e6bf94ull, 35u, "static_validated", "target=100.0%, ip=100.0%, ok:35", path_entry_140_2b28f4fd86e6 },
    { 62, 0x9d873e475d78b52bull, 34u, "static_validated", "target=100.0%, ip=100.0%, ok:34", path_entry_062_9d873e475d78 },
    { 128, 0x51e06e44bdfa5e39ull, 34u, "static_validated", "target=100.0%, ip=100.0%, ok:34", path_entry_128_51e06e44bdfa },
    { 237, 0x27ecdfb73972e605ull, 34u, "static_validated", "target=100.0%, ip=100.0%, ok:34", path_entry_237_27ecdfb73972 },
    { 242, 0x456829fdf152b164ull, 33u, "static_validated", "target=100.0%, ip=100.0%, ok:33", path_entry_242_456829fdf152 },
    { 282, 0x37bb4e0d23db2fcdull, 33u, "static_validated", "target=100.0%, ip=100.0%, ok:33", path_entry_282_37bb4e0d23db },
    { 336, 0xc859f7b914885127ull, 33u, "static_validated", "target=100.0%, ip=100.0%, ok:33", path_entry_336_c859f7b91488 },
    { 192, 0xd15bf3105a909314ull, 32u, "static_validated", "target=100.0%, ip=100.0%, ok:32", path_entry_192_d15bf3105a90 },
    { 301, 0x084f0136b5068bc0ull, 32u, "static_validated", "target=100.0%, ip=100.0%, ok:32", path_entry_301_084f0136b506 },
    { 168, 0xb0214fdf21298e2bull, 31u, "static_validated", "target=100.0%, ip=100.0%, ok:31", path_entry_168_b0214fdf2129 },
    { 326, 0xe11efe9539472b4full, 31u, "static_validated", "target=100.0%, ip=100.0%, ok:31", path_entry_326_e11efe953947 },
    { 330, 0xfdf1e1a4967a8ab0ull, 31u, "static_validated", "target=100.0%, ip=100.0%, ok:31", path_entry_330_fdf1e1a4967a },
    { 48, 0x4208c930546548ccull, 30u, "static_validated", "target=100.0%, ip=100.0%, ok:30", path_entry_048_4208c9305465 },
    { 253, 0x4464700b2a37d81aull, 30u, "static_validated", "target=100.0%, ip=100.0%, ok:30", path_entry_253_4464700b2a37 },
    { 17, 0xb16cdfb63ec2fb2eull, 28u, "static_validated", "target=100.0%, ip=100.0%, ok:28", path_entry_017_b16cdfb63ec2 },
    { 37, 0x419814ebfbf68e1bull, 28u, "static_validated", "target=100.0%, ip=100.0%, ok:28", path_entry_037_419814ebfbf6 },
    { 37, 0x5f0bdd4509987674ull, 28u, "static_validated", "target=100.0%, ip=100.0%, ok:28", path_entry_037_5f0bdd450998 },
    { 128, 0x91bf05f3f343e4b6ull, 28u, "static_validated", "target=100.0%, ip=100.0%, ok:28", path_entry_128_91bf05f3f343 },
    { 151, 0x002987b231bcd1c1ull, 28u, "static_validated", "target=100.0%, ip=100.0%, ok:28", path_entry_151_002987b231bc },
    { 222, 0x0256233ac9698073ull, 28u, "static_validated", "target=100.0%, ip=100.0%, ok:28", path_entry_222_0256233ac969 },
    { 222, 0x3949013ea1513bf7ull, 27u, "static_validated", "target=100.0%, ip=100.0%, ok:27", path_entry_222_3949013ea151 },
    { 192, 0x25b32187cd64fd25ull, 26u, "static_validated", "target=100.0%, ip=100.0%, ok:26", path_entry_192_25b32187cd64 },
    { 200, 0xa42a6e0e16cb3fb1ull, 26u, "static_validated", "target=100.0%, ip=100.0%, ok:26", path_entry_200_a42a6e0e16cb },
    { 208, 0x945ec9e23a70eb7dull, 26u, "static_validated", "target=100.0%, ip=100.0%, ok:26", path_entry_208_945ec9e23a70 },
    { 282, 0x768b388698cbf73eull, 26u, "static_validated", "target=100.0%, ip=100.0%, ok:26", path_entry_282_768b388698cb },
    { 292, 0x02749dce4a153b19ull, 26u, "static_validated", "target=100.0%, ip=100.0%, ok:26", path_entry_292_02749dce4a15 },
    { 108, 0xcf3c455192fb1112ull, 25u, "static_validated", "target=100.0%, ip=100.0%, ok:25", path_entry_108_cf3c455192fb },
    { 146, 0x30e223e338ce2615ull, 25u, "static_validated", "target=100.0%, ip=100.0%, ok:25", path_entry_146_30e223e338ce },
    { 82, 0x7e7337c12e791cefull, 24u, "static_validated", "target=100.0%, ip=100.0%, ok:24", path_entry_082_7e7337c12e79 },
    { 105, 0x91b6ae9102ae61feull, 24u, "static_validated", "target=100.0%, ip=100.0%, ok:24", path_entry_105_91b6ae9102ae },
    { 146, 0x5e2464f8cfc23b1aull, 23u, "static_validated", "target=100.0%, ip=100.0%, ok:23", path_entry_146_5e2464f8cfc2 },
    { 30, 0xb259ea1acea9e423ull, 22u, "static_validated", "target=100.0%, ip=100.0%, ok:22", path_entry_030_b259ea1acea9 },
    { 105, 0x60e314aeef6f3febull, 22u, "static_validated", "target=100.0%, ip=100.0%, ok:22", path_entry_105_60e314aeef6f },
    { 108, 0x6bdaae24c23e2042ull, 22u, "static_validated", "target=100.0%, ip=100.0%, ok:22", path_entry_108_6bdaae24c23e },
    { 144, 0x97b8099c72e3d6d4ull, 22u, "static_validated", "target=100.0%, ip=100.0%, ok:22", path_entry_144_97b8099c72e3 },
    { 208, 0x5273b21feba7b6a2ull, 22u, "static_validated", "target=100.0%, ip=100.0%, ok:22", path_entry_208_5273b21feba7 },
    { 237, 0x749e34fb357a9d94ull, 22u, "static_validated", "target=100.0%, ip=100.0%, ok:22", path_entry_237_749e34fb357a },
    { 239, 0x69142fcd451d17deull, 22u, "static_validated", "target=100.0%, ip=100.0%, ok:22", path_entry_239_69142fcd451d },
    { 253, 0xefa9099da97e022aull, 22u, "static_validated", "target=100.0%, ip=100.0%, ok:22", path_entry_253_efa9099da97e },
    { 291, 0x983583bc036af2daull, 22u, "static_validated", "target=100.0%, ip=100.0%, ok:22", path_entry_291_983583bc036a },
    { 292, 0xea3398581b2413d0ull, 22u, "static_validated", "target=100.0%, ip=100.0%, ok:22", path_entry_292_ea3398581b24 },
    { 319, 0xb759a5ef62168bb4ull, 22u, "static_validated", "target=100.0%, ip=100.0%, ok:22", path_entry_319_b759a5ef6216 },
    { 30, 0x135476ff0b343a05ull, 21u, "static_validated", "target=100.0%, ip=100.0%, ok:21", path_entry_030_135476ff0b34 },
    { 292, 0x35cf8772598e55cbull, 21u, "static_validated", "target=100.0%, ip=100.0%, ok:21", path_entry_292_35cf8772598e },
    { 352, 0xf73d8af7bb1af6c4ull, 21u, "static_validated", "target=100.0%, ip=100.0%, ok:21", path_entry_352_f73d8af7bb1a },
    { 186, 0x834a23ba91970f51ull, 20u, "static_validated", "target=100.0%, ip=100.0%, ok:20", path_entry_186_834a23ba9197 },
    { 208, 0x4cb95a94c54102a3ull, 20u, "static_validated", "target=100.0%, ip=100.0%, ok:20", path_entry_208_4cb95a94c541 },
    { 222, 0x155b8bfb7079c907ull, 20u, "static_validated", "target=100.0%, ip=100.0%, ok:20", path_entry_222_155b8bfb7079 },
    { 105, 0x8ec2bf719d6351c7ull, 19u, "static_validated", "target=100.0%, ip=100.0%, ok:19", path_entry_105_8ec2bf719d63 },
    { 208, 0x975d39be5ca8b73aull, 19u, "static_validated", "target=100.0%, ip=100.0%, ok:19", path_entry_208_975d39be5ca8 },
    { 352, 0xe0e1a73fcf72bd35ull, 19u, "static_validated", "target=100.0%, ip=100.0%, ok:19", path_entry_352_e0e1a73fcf72 },
    { 17, 0xb69efde9694fd2f9ull, 18u, "static_validated", "target=100.0%, ip=100.0%, ok:18", path_entry_017_b69efde9694f },
    { 37, 0xceda862ca5f0ddebull, 18u, "static_validated", "target=100.0%, ip=100.0%, ok:18", path_entry_037_ceda862ca5f0 },
    { 125, 0x640e99e97634cb74ull, 18u, "static_validated", "target=100.0%, ip=100.0%, ok:18", path_entry_125_640e99e97634 },
    { 347, 0xc9afc1bcaa30b134ull, 18u, "static_validated", "target=100.0%, ip=100.0%, ok:18", path_entry_347_c9afc1bcaa30 },
    { 348, 0x8800803f96b6b819ull, 18u, "static_validated", "target=100.0%, ip=100.0%, ok:18", path_entry_348_8800803f96b6 },
    { 17, 0xd362a1b2b30bce4eull, 17u, "static_validated", "target=100.0%, ip=100.0%, ok:17", path_entry_017_d362a1b2b30b },
    { 122, 0xd9b4f55f629e1412ull, 17u, "static_validated", "target=100.0%, ip=100.0%, ok:17", path_entry_122_d9b4f55f629e },
    { 198, 0xedebcddd401771d5ull, 17u, "static_validated", "target=100.0%, ip=100.0%, ok:17", path_entry_198_edebcddd4017 },
    { 251, 0x08d0f0bf716bc8f7ull, 17u, "static_validated", "target=100.0%, ip=100.0%, ok:17", path_entry_251_08d0f0bf716b },
    { 290, 0x8f4e1239977a47c6ull, 17u, "static_validated", "target=100.0%, ip=100.0%, ok:17", path_entry_290_8f4e1239977a },
    { 291, 0x04cf4f539f6182dcull, 17u, "static_validated", "target=100.0%, ip=100.0%, ok:17", path_entry_291_04cf4f539f61 },
    { 26, 0x27c8df69e312fe92ull, 16u, "static_validated", "target=100.0%, ip=100.0%, ok:16", path_entry_026_27c8df69e312 },
    { 30, 0x4ed836df83473778ull, 16u, "static_validated", "target=100.0%, ip=100.0%, ok:16", path_entry_030_4ed836df8347 },
    { 30, 0xd29615831c79b855ull, 16u, "static_validated", "target=100.0%, ip=100.0%, ok:16", path_entry_030_d29615831c79 },
    { 74, 0x41fbb3da3a73d4caull, 16u, "static_validated", "target=100.0%, ip=100.0%, ok:16", path_entry_074_41fbb3da3a73 },
    { 257, 0x4c767eeb8531119dull, 16u, "static_validated", "target=100.0%, ip=100.0%, ok:16", path_entry_257_4c767eeb8531 },
    { 105, 0x3baff5e6f167d75full, 15u, "static_validated", "target=100.0%, ip=100.0%, ok:15", path_entry_105_3baff5e6f167 },
    { 148, 0xbcd4bee0298575dbull, 15u, "static_validated", "target=100.0%, ip=100.0%, ok:15", path_entry_148_bcd4bee02985 },
    { 200, 0xa215be4cf4ccdb3bull, 15u, "static_validated", "target=100.0%, ip=100.0%, ok:15", path_entry_200_a215be4cf4cc },
    { 256, 0x17cbf48c37434a4aull, 15u, "static_validated", "target=100.0%, ip=100.0%, ok:15", path_entry_256_17cbf48c3743 },
    { 257, 0x803f19f8103572d0ull, 15u, "static_validated", "target=100.0%, ip=100.0%, ok:15", path_entry_257_803f19f81035 },
    { 280, 0x82ff788ea71516d6ull, 15u, "static_validated", "target=100.0%, ip=100.0%, ok:15", path_entry_280_82ff788ea715 },
    { 330, 0x43ae8e8d051c8e1eull, 15u, "static_validated", "target=100.0%, ip=100.0%, ok:15", path_entry_330_43ae8e8d051c },
    { 17, 0x72cbc47e853a8f13ull, 14u, "static_validated", "target=100.0%, ip=100.0%, ok:14", path_entry_017_72cbc47e853a },
    { 30, 0x053d78aacc7d5f1eull, 14u, "static_validated", "target=100.0%, ip=100.0%, ok:14", path_entry_030_053d78aacc7d },
    { 48, 0x2eb8ab60948f0d63ull, 14u, "static_validated", "target=100.0%, ip=100.0%, ok:14", path_entry_048_2eb8ab60948f },
    { 128, 0x783948577846d23dull, 14u, "static_validated", "target=100.0%, ip=100.0%, ok:14", path_entry_128_783948577846 },
    { 208, 0x1d1b9f2d7e080b9dull, 14u, "static_validated", "target=100.0%, ip=100.0%, ok:14", path_entry_208_1d1b9f2d7e08 },
    { 319, 0x6ed74e1c0868ca96ull, 14u, "static_validated", "target=100.0%, ip=100.0%, ok:14", path_entry_319_6ed74e1c0868 },
    { 292, 0x2c3454329a9de726ull, 13u, "static_validated", "target=100.0%, ip=100.0%, ok:13", path_entry_292_2c3454329a9d },
    { 330, 0xb7d06ed058761c11ull, 13u, "static_validated", "target=100.0%, ip=100.0%, ok:13", path_entry_330_b7d06ed05876 },
    { 48, 0xbfec44d3b65a5adaull, 12u, "static_validated", "target=100.0%, ip=100.0%, ok:12", path_entry_048_bfec44d3b65a },
    { 87, 0x1375abfb67f018cfull, 12u, "static_validated", "target=100.0%, ip=100.0%, ok:12", path_entry_087_1375abfb67f0 },
    { 237, 0x27ad2349dd7dd3e1ull, 12u, "static_validated", "target=100.0%, ip=100.0%, ok:12", path_entry_237_27ad2349dd7d },
    { 237, 0xc2b81e454407492cull, 12u, "static_validated", "target=100.0%, ip=100.0%, ok:12", path_entry_237_c2b81e454407 },
    { 245, 0x4792d8a1d8a3dbb5ull, 12u, "static_validated", "target=100.0%, ip=100.0%, ok:12", path_entry_245_4792d8a1d8a3 },
    { 248, 0xbd9bcc498bac531aull, 12u, "static_validated", "target=100.0%, ip=100.0%, ok:12", path_entry_248_bd9bcc498bac },
    { 282, 0x01946c2fdff8179full, 12u, "static_validated", "target=100.0%, ip=100.0%, ok:12", path_entry_282_01946c2fdff8 },
    { 330, 0x2dd08985aba7ad6bull, 12u, "static_validated", "target=100.0%, ip=100.0%, ok:12", path_entry_330_2dd08985aba7 },
    { 17, 0x3ad7bed6fbe2a097ull, 11u, "static_validated", "target=100.0%, ip=100.0%, ok:11", path_entry_017_3ad7bed6fbe2 },
    { 48, 0xe1d1ed5c9b53d930ull, 11u, "static_validated", "target=100.0%, ip=100.0%, ok:11", path_entry_048_e1d1ed5c9b53 },
    { 160, 0x100da339bec0f3aeull, 11u, "static_validated", "target=100.0%, ip=100.0%, ok:11", path_entry_160_100da339bec0 },
    { 208, 0x3e22accc122d463eull, 11u, "static_validated", "target=100.0%, ip=100.0%, ok:11", path_entry_208_3e22accc122d },
    { 317, 0xce011ef195537adaull, 11u, "static_validated", "target=100.0%, ip=100.0%, ok:11", path_entry_317_ce011ef19553 },
    { 48, 0x899dc1a680afec06ull, 10u, "static_validated", "target=100.0%, ip=100.0%, ok:10", path_entry_048_899dc1a680af },
    { 131, 0x5aae32890a23d4eaull, 10u, "static_validated", "target=100.0%, ip=100.0%, ok:10", path_entry_131_5aae32890a23 },
    { 140, 0x07522c801eb36725ull, 10u, "static_validated", "target=100.0%, ip=100.0%, ok:10", path_entry_140_07522c801eb3 },
    { 144, 0x10e64be0b987b8fcull, 10u, "static_validated", "target=100.0%, ip=100.0%, ok:10", path_entry_144_10e64be0b987 },
    { 153, 0x4e59423688cc6bafull, 10u, "static_validated", "target=100.0%, ip=100.0%, ok:10", path_entry_153_4e59423688cc },
    { 242, 0x4b247eef89548bf1ull, 10u, "static_validated", "target=100.0%, ip=100.0%, ok:10", path_entry_242_4b247eef8954 },
    { 346, 0x3468299b08f6c85aull, 10u, "static_validated", "target=100.0%, ip=100.0%, ok:10", path_entry_346_3468299b08f6 },
    { 65, 0xe3b0c44298fc1c14ull, 9u, "static_validated", "target=100.0%, ip=100.0%, ok:9", path_entry_065_e3b0c44298fc },
    { 74, 0xa48439e79ceaf02dull, 9u, "static_validated", "target=100.0%, ip=100.0%, ok:9", path_entry_074_a48439e79cea },
    { 82, 0x29cda8c222ea76c8ull, 9u, "static_validated", "target=100.0%, ip=100.0%, ok:9", path_entry_082_29cda8c222ea },
    { 186, 0x3ab9de5268261224ull, 9u, "static_validated", "target=100.0%, ip=100.0%, ok:9", path_entry_186_3ab9de526826 },
    { 282, 0x8d87a955d012957bull, 9u, "static_validated", "target=100.0%, ip=100.0%, ok:9", path_entry_282_8d87a955d012 },
    { 282, 0xef445ab229304f72ull, 9u, "static_validated", "target=100.0%, ip=100.0%, ok:9", path_entry_282_ef445ab22930 },
    { 17, 0x51459034a0e3c66aull, 8u, "static_validated", "target=100.0%, ip=100.0%, ok:8", path_entry_017_51459034a0e3 },
    { 30, 0x0defeb8f23af57ddull, 8u, "static_validated", "target=100.0%, ip=100.0%, ok:8", path_entry_030_0defeb8f23af },
    { 30, 0x2621ea48488bf1baull, 8u, "static_validated", "target=100.0%, ip=100.0%, ok:8", path_entry_030_2621ea48488b },
    { 140, 0x3605b56068445282ull, 8u, "static_validated", "target=100.0%, ip=100.0%, ok:8", path_entry_140_3605b5606844 },
    { 190, 0x439f3423415e8685ull, 8u, "static_validated", "target=100.0%, ip=100.0%, ok:8", path_entry_190_439f3423415e },
    { 237, 0xeb8d278d835174a2ull, 8u, "static_validated", "target=100.0%, ip=100.0%, ok:8", path_entry_237_eb8d278d8351 },
    { 253, 0xd391132b7c63a0fbull, 8u, "static_validated", "target=100.0%, ip=100.0%, ok:8", path_entry_253_d391132b7c63 },
    { 348, 0x5821166bf2c3c775ull, 8u, "static_validated", "target=100.0%, ip=100.0%, ok:8", path_entry_348_5821166bf2c3 },
    { 140, 0xa6b6d11ed8885762ull, 7u, "static_validated", "target=100.0%, ip=100.0%, ok:7", path_entry_140_a6b6d11ed888 },
    { 190, 0x0fd8f618435a1ab6ull, 7u, "static_validated", "target=100.0%, ip=100.0%, ok:7", path_entry_190_0fd8f618435a },
    { 199, 0xbe91d6d11747a1dbull, 7u, "static_validated", "target=100.0%, ip=100.0%, ok:7", path_entry_199_be91d6d11747 },
    { 208, 0x12ce32491e57c736ull, 7u, "static_validated", "target=100.0%, ip=100.0%, ok:7", path_entry_208_12ce32491e57 },
    { 280, 0x69b3e6542a966a82ull, 7u, "static_validated", "target=100.0%, ip=100.0%, ok:7", path_entry_280_69b3e6542a96 },
    { 317, 0x30e8e4255b6ffbe3ull, 7u, "static_validated", "target=100.0%, ip=100.0%, ok:7", path_entry_317_30e8e4255b6f },
    { 330, 0x5a27835f4eb7b870ull, 7u, "static_validated", "target=100.0%, ip=100.0%, ok:7", path_entry_330_5a27835f4eb7 },
    { 30, 0x116d895b36cc80f2ull, 6u, "static_validated", "target=100.0%, ip=100.0%, ok:6", path_entry_030_116d895b36cc },
    { 56, 0x664a05c7f6a51f15ull, 6u, "static_validated", "target=100.0%, ip=100.0%, ok:6", path_entry_056_664a05c7f6a5 },
    { 146, 0x3a37a8c7d50f8d93ull, 6u, "static_validated", "target=100.0%, ip=100.0%, ok:6", path_entry_146_3a37a8c7d50f },
    { 151, 0x9c9489444f2ddd0bull, 6u, "static_validated", "target=100.0%, ip=100.0%, ok:6", path_entry_151_9c9489444f2d },
    { 173, 0x800ab7eb123b8ca2ull, 6u, "static_validated", "target=100.0%, ip=100.0%, ok:6", path_entry_173_800ab7eb123b },
    { 208, 0x77086d10d578902bull, 6u, "static_validated", "target=100.0%, ip=100.0%, ok:6", path_entry_208_77086d10d578 },
    { 268, 0x80c25c32cafec1f8ull, 6u, "static_validated", "target=100.0%, ip=100.0%, ok:6", path_entry_268_80c25c32cafe },
    { 301, 0x1dbe9282449f81a6ull, 6u, "static_validated", "target=100.0%, ip=100.0%, ok:6", path_entry_301_1dbe9282449f },
    { 301, 0x537b51ceef7e6603ull, 6u, "static_validated", "target=100.0%, ip=100.0%, ok:6", path_entry_301_537b51ceef7e },
    { 357, 0xb76f0c1213392f8eull, 6u, "static_validated", "target=100.0%, ip=100.0%, ok:6", path_entry_357_b76f0c121339 },
    { 82, 0xaebb1ed46015c55eull, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_082_aebb1ed46015 },
    { 105, 0x2a64ac183a132956ull, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_105_2a64ac183a13 },
    { 146, 0x0adf5fc71f1c5ca9ull, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_146_0adf5fc71f1c },
    { 146, 0x0f4c59e1032400caull, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_146_0f4c59e10324 },
    { 146, 0x982557705575dc3dull, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_146_982557705575 },
    { 146, 0xeec5c478bb68b13full, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_146_eec5c478bb68 },
    { 160, 0x283d4be70a6d81caull, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_160_283d4be70a6d },
    { 187, 0x2778a69fcfd9605eull, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_187_2778a69fcfd9 },
    { 237, 0xc32fe92f14d4a45cull, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_237_c32fe92f14d4 },
    { 237, 0xec8f6cd1ef50287full, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_237_ec8f6cd1ef50 },
    { 240, 0x7d2cd2d791a87439ull, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_240_7d2cd2d791a8 },
    { 256, 0x83cda8f6067fce2aull, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_256_83cda8f6067f },
    { 347, 0xec89a4d6c19be592ull, 5u, "static_validated", "target=100.0%, ip=100.0%, ok:5", path_entry_347_ec89a4d6c19b },
    { 13, 0xb7836cdca7530662ull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_013_b7836cdca753 },
    { 30, 0xb1a9b0ebcd6b9c74ull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_030_b1a9b0ebcd6b },
    { 36, 0x6eb380f706ec49f0ull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_036_6eb380f706ec },
    { 86, 0xe3b0c44298fc1c14ull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_086_e3b0c44298fc },
    { 88, 0x78722b39f0b4a864ull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_088_78722b39f0b4 },
    { 130, 0xebeafe43f7b7b773ull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_130_ebeafe43f7b7 },
    { 131, 0xce8a72bd979fb259ull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_131_ce8a72bd979f },
    { 140, 0xb52184b986bd204dull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_140_b52184b986bd },
    { 214, 0x976254d9e1abe997ull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_214_976254d9e1ab },
    { 221, 0x7ed8075b3f9e17ffull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_221_7ed8075b3f9e },
    { 231, 0x833ef5dc8aaea91eull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_231_833ef5dc8aae },
    { 267, 0x995f3a6ce826c58cull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_267_995f3a6ce826 },
    { 268, 0xc111a20b40539ba2ull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_268_c111a20b4053 },
    { 292, 0xe5e4f2718bba17ceull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_292_e5e4f2718bba },
    { 313, 0xe763e24efa841a3bull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_313_e763e24efa84 },
    { 317, 0x57351ad76f77e260ull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_317_57351ad76f77 },
    { 330, 0xdaf9e02bbbbef0f1ull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_330_daf9e02bbbbe },
    { 359, 0x7517feae529a3779ull, 4u, "static_validated", "target=100.0%, ip=100.0%, ok:4", path_entry_359_7517feae529a },
    { 17, 0xec84997f8853a491ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_017_ec84997f8853 },
    { 30, 0x5376a30fd039c061ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_030_5376a30fd039 },
    { 30, 0xd3ae225233fc186dull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_030_d3ae225233fc },
    { 37, 0x5fff89a42f0fb915ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_037_5fff89a42f0f },
    { 37, 0x972249a0a1aafc69ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_037_972249a0a1aa },
    { 42, 0xe3b0c44298fc1c14ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_042_e3b0c44298fc },
    { 94, 0x588d50dbd5db53e1ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_094_588d50dbd5db },
    { 146, 0x78bdb2f1461a8520ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_146_78bdb2f1461a },
    { 237, 0x5f6701a2424033a3ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_237_5f6701a24240 },
    { 257, 0xdfbbea61e449eaa3ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_257_dfbbea61e449 },
    { 257, 0xfbb7ebf89cedfec3ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_257_fbb7ebf89ced },
    { 282, 0x4e1a08b512545ea9ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_282_4e1a08b51254 },
    { 282, 0xf370d941d5feed1eull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_282_f370d941d5fe },
    { 330, 0x20af7b550e1c50beull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_330_20af7b550e1c },
    { 330, 0x5fac0740b3f4045aull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_330_5fac0740b3f4 },
    { 330, 0x8268b83bf72fa338ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_330_8268b83bf72f },
    { 330, 0xe9d6ac0e93b396fbull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_330_e9d6ac0e93b3 },
    { 331, 0xb418e41fa05a8dd2ull, 3u, "static_validated", "target=100.0%, ip=100.0%, ok:3", path_entry_331_b418e41fa05a },
    { 17, 0x80e74d2f15336754ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_017_80e74d2f1533 },
    { 17, 0xb32a005b1bc32374ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_017_b32a005b1bc3 },
    { 17, 0xd8729a7a98279df5ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_017_d8729a7a9827 },
    { 30, 0xce3f2f6f70dc85ddull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_030_ce3f2f6f70dc },
    { 31, 0x7c575499fb7c10f7ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_031_7c575499fb7c },
    { 48, 0x4554738dd02e4626ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_048_4554738dd02e },
    { 48, 0xaf9211b7c30a7a32ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_048_af9211b7c30a },
    { 62, 0x46d2270df907c1b4ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_062_46d2270df907 },
    { 129, 0x2d7de7f338ef1eb3ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_129_2d7de7f338ef },
    { 136, 0x2c34239f03385794ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_136_2c34239f0338 },
    { 140, 0xf699aebd2ab38d8bull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_140_f699aebd2ab3 },
    { 160, 0xb5dc6ce098276a10ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_160_b5dc6ce09827 },
    { 173, 0x0a4b2fe7c989472dull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_173_0a4b2fe7c989 },
    { 198, 0x5fd34b2586cb4fcbull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_198_5fd34b2586cb },
    { 237, 0x220aec61f5cb2605ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_237_220aec61f5cb },
    { 248, 0x21850699e16fcd1aull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_248_21850699e16f },
    { 268, 0x06903b8c26572b18ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_268_06903b8c2657 },
    { 268, 0x23ad013654b73764ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_268_23ad013654b7 },
    { 330, 0x5c2cab85f9afab52ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_330_5c2cab85f9af },
    { 330, 0x688bf75cfe02a663ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_330_688bf75cfe02 },
    { 330, 0xd53dca47d6295059ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_330_d53dca47d629 },
    { 352, 0xddee6711eeae4b11ull, 2u, "static_validated", "target=100.0%, ip=100.0%, ok:2", path_entry_352_ddee6711eeae },
    { 13, 0x19d8a9a4824de2a0ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_013_19d8a9a4824d },
    { 30, 0xc8764df718f2a620ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_030_c8764df718f2 },
    { 30, 0xfba3c9c2e17c050bull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_030_fba3c9c2e17c },
    { 33, 0x02a7dbac9483710bull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_033_02a7dbac9483 },
    { 33, 0x4c69f6d005993dcfull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_033_4c69f6d00599 },
    { 35, 0xc66298eb8aac69a6ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_035_c66298eb8aac },
    { 54, 0x101e5bd73623ffe7ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_054_101e5bd73623 },
    { 82, 0x02562957f79852a7ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_082_02562957f798 },
    { 82, 0x1606fb4d642df6a7ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_082_1606fb4d642d },
    { 85, 0x0c1933f1b1ee8d9eull, 1u, "affine_dispatch_fallback", "target=100.0%, ip=100.0%, ok:1", path_entry_085_0c1933f1b1ee },
    { 88, 0x81ed0e3e63ffdef8ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_088_81ed0e3e63ff },
    { 99, 0x83df7909478a8cf0ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_099_83df7909478a },
    { 101, 0x3109313333601288ull, 1u, "affine_dispatch_fallback", "target=100.0%, ip=100.0%, ok:1", path_entry_101_310931333360 },
    { 102, 0xce1c74c71b8b49afull, 1u, "affine_dispatch_fallback", "target=100.0%, ip=100.0%, ok:1", path_entry_102_ce1c74c71b8b },
    { 105, 0xd1e679141ab1ec6full, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_105_d1e679141ab1 },
    { 108, 0x5f4b9f379e40e547ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_108_5f4b9f379e40 },
    { 108, 0xab195e204d83a97cull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_108_ab195e204d83 },
    { 122, 0xd05c9b2323c578d9ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_122_d05c9b2323c5 },
    { 123, 0x7ca4af5fe495d779ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_123_7ca4af5fe495 },
    { 125, 0x6855c7694d2cef8full, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_125_6855c7694d2c },
    { 140, 0xcec80b7303cf8610ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_140_cec80b7303cf },
    { 157, 0x3ac6dab09bb33a9cull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_157_3ac6dab09bb3 },
    { 190, 0x2ec827c425d26b05ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_190_2ec827c425d2 },
    { 199, 0x1c2914d9ca049a16ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_199_1c2914d9ca04 },
    { 209, 0xd8f8bc3805cfbed9ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_209_d8f8bc3805cf },
    { 217, 0xdbf8044244c4dd26ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_217_dbf8044244c4 },
    { 222, 0x3072da87febdb44full, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_222_3072da87febd },
    { 237, 0x8f76701e339cb0f5ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_237_8f76701e339c },
    { 241, 0x09dd52184bb38480ull, 1u, "affine_dispatch_fallback", "target=100.0%, ip=100.0%, ok:1", path_entry_241_09dd52184bb3 },
    { 248, 0xacbff1ba210ff976ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_248_acbff1ba210f },
    { 250, 0xf3368a1603473e1eull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_250_f3368a160347 },
    { 257, 0x706f0fbb93540b86ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_257_706f0fbb9354 },
    { 260, 0x2a5fb4d289ee3b20ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_260_2a5fb4d289ee },
    { 260, 0x5a379914f0381e9full, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_260_5a379914f038 },
    { 282, 0x5f2049fc4206797aull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_282_5f2049fc4206 },
    { 282, 0x773356a8125f572cull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_282_773356a8125f },
    { 284, 0xc64644ae256c2283ull, 1u, "affine_dispatch_fallback", "target=100.0%, ip=100.0%, ok:1", path_entry_284_c64644ae256c },
    { 285, 0xf79371fd7cb4721full, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_285_f79371fd7cb4 },
    { 292, 0x5ab24bee3c6b71f5ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_292_5ab24bee3c6b },
    { 314, 0xedc2d63ecc901b43ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_314_edc2d63ecc90 },
    { 317, 0x6d5f43d16e2bf73eull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_317_6d5f43d16e2b },
    { 323, 0x78dcf8948d5b31b3ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_323_78dcf8948d5b },
    { 330, 0x1c2a7cd724ae0e42ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_330_1c2a7cd724ae },
    { 330, 0x3ba719b1752004a7ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_330_3ba719b17520 },
    { 330, 0x695df04a75c73264ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_330_695df04a75c7 },
    { 330, 0x722343a64206d485ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_330_722343a64206 },
    { 331, 0x5fbed292e10b3080ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_331_5fbed292e10b },
    { 331, 0x82c778544ad3dff8ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_331_82c778544ad3 },
    { 346, 0x570b341c1819f56eull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_346_570b341c1819 },
    { 346, 0x928c0bda79e19d1aull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_346_928c0bda79e1 },
    { 348, 0x9b1901656de004c9ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_348_9b1901656de0 },
    { 348, 0xf2c2c381e9538cabull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_348_f2c2c381e953 },
    { 349, 0x56d1c35330251181ull, 1u, "static_validated", "target=100.0%, ip=100.0%, ok:1", path_entry_349_56d1c3533025 },
};

static unsigned vm_path_model_count(void) {
    return (unsigned)(sizeof(k_vm_path_models) / sizeof(k_vm_path_models[0]));
}

static VMOpResult vm_call_path_handler(uint16_t entry, uint64_t path_key_value, VMState *vm) {
    switch (entry) {
    case 0:
        switch (path_key_value) {
        case 0x886532d40d9edf1cull: return path_entry_000_886532d40d9e(vm);
        default: break;
        }
        break;
    case 3:
        switch (path_key_value) {
        case 0x9d0c60f8ad22292dull: return path_entry_003_9d0c60f8ad22(vm);
        case 0xd35e83d5fc67b2c6ull: return path_entry_003_d35e83d5fc67(vm);
        case 0xf456fd2897d83326ull: return path_entry_003_f456fd2897d8(vm);
        default: break;
        }
        break;
    case 13:
        switch (path_key_value) {
        case 0x19d8a9a4824de2a0ull: return path_entry_013_19d8a9a4824d(vm);
        case 0xb7836cdca7530662ull: return path_entry_013_b7836cdca753(vm);
        default: break;
        }
        break;
    case 17:
        switch (path_key_value) {
        case 0x3ad7bed6fbe2a097ull: return path_entry_017_3ad7bed6fbe2(vm);
        case 0x51459034a0e3c66aull: return path_entry_017_51459034a0e3(vm);
        case 0x72cbc47e853a8f13ull: return path_entry_017_72cbc47e853a(vm);
        case 0x80e74d2f15336754ull: return path_entry_017_80e74d2f1533(vm);
        case 0xb16cdfb63ec2fb2eull: return path_entry_017_b16cdfb63ec2(vm);
        case 0xb32a005b1bc32374ull: return path_entry_017_b32a005b1bc3(vm);
        case 0xb69efde9694fd2f9ull: return path_entry_017_b69efde9694f(vm);
        case 0xd362a1b2b30bce4eull: return path_entry_017_d362a1b2b30b(vm);
        case 0xd8729a7a98279df5ull: return path_entry_017_d8729a7a9827(vm);
        case 0xe50010ea5d8a73bfull: return path_entry_017_e50010ea5d8a(vm);
        case 0xec84997f8853a491ull: return path_entry_017_ec84997f8853(vm);
        default: break;
        }
        break;
    case 18:
        switch (path_key_value) {
        case 0x30ead7f21142b97eull: return path_entry_018_30ead7f21142(vm);
        case 0x3fb41280ccd8685bull: return path_entry_018_3fb41280ccd8(vm);
        case 0xb2353417ac420d7full: return path_entry_018_b2353417ac42(vm);
        case 0xbdfe2dc323c2ac6dull: return path_entry_018_bdfe2dc323c2(vm);
        default: break;
        }
        break;
    case 20:
        switch (path_key_value) {
        case 0x954a153a601a1e13ull: return path_entry_020_954a153a601a(vm);
        case 0xc49963356ba8fe1dull: return path_entry_020_c49963356ba8(vm);
        case 0xc81d765888be54d9ull: return path_entry_020_c81d765888be(vm);
        case 0xf2702c2e2c8b820bull: return path_entry_020_f2702c2e2c8b(vm);
        default: break;
        }
        break;
    case 26:
        switch (path_key_value) {
        case 0x2328e09ca352b2ffull: return path_entry_026_2328e09ca352(vm);
        case 0x27c8df69e312fe92ull: return path_entry_026_27c8df69e312(vm);
        case 0x433dde54934b5cb8ull: return path_entry_026_433dde54934b(vm);
        case 0x4676bd26495ff772ull: return path_entry_026_4676bd26495f(vm);
        case 0xa8425a0f38d9fe8dull: return path_entry_026_a8425a0f38d9(vm);
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
    case 30:
        switch (path_key_value) {
        case 0x053d78aacc7d5f1eull: return path_entry_030_053d78aacc7d(vm);
        case 0x0defeb8f23af57ddull: return path_entry_030_0defeb8f23af(vm);
        case 0x116d895b36cc80f2ull: return path_entry_030_116d895b36cc(vm);
        case 0x135476ff0b343a05ull: return path_entry_030_135476ff0b34(vm);
        case 0x1ea9b38d2eb43e53ull: return path_entry_030_1ea9b38d2eb4(vm);
        case 0x2208c3d00e21a891ull: return path_entry_030_2208c3d00e21(vm);
        case 0x2621ea48488bf1baull: return path_entry_030_2621ea48488b(vm);
        case 0x2c3a503057ba4a40ull: return path_entry_030_2c3a503057ba(vm);
        case 0x4ed836df83473778ull: return path_entry_030_4ed836df8347(vm);
        case 0x5376a30fd039c061ull: return path_entry_030_5376a30fd039(vm);
        case 0xb1a9b0ebcd6b9c74ull: return path_entry_030_b1a9b0ebcd6b(vm);
        case 0xb259ea1acea9e423ull: return path_entry_030_b259ea1acea9(vm);
        case 0xc8764df718f2a620ull: return path_entry_030_c8764df718f2(vm);
        case 0xce3f2f6f70dc85ddull: return path_entry_030_ce3f2f6f70dc(vm);
        case 0xd29615831c79b855ull: return path_entry_030_d29615831c79(vm);
        case 0xd3ae225233fc186dull: return path_entry_030_d3ae225233fc(vm);
        case 0xeaa0e2d5033a3455ull: return path_entry_030_eaa0e2d5033a(vm);
        case 0xeaabefc5557bf4e4ull: return path_entry_030_eaabefc5557b(vm);
        case 0xfba3c9c2e17c050bull: return path_entry_030_fba3c9c2e17c(vm);
        default: break;
        }
        break;
    case 31:
        switch (path_key_value) {
        case 0x7c575499fb7c10f7ull: return path_entry_031_7c575499fb7c(vm);
        default: break;
        }
        break;
    case 33:
        switch (path_key_value) {
        case 0x02a7dbac9483710bull: return path_entry_033_02a7dbac9483(vm);
        case 0x462a88e3c9a1365dull: return path_entry_033_462a88e3c9a1(vm);
        case 0x4c69f6d005993dcfull: return path_entry_033_4c69f6d00599(vm);
        case 0x7af422a11315895aull: return path_entry_033_7af422a11315(vm);
        default: break;
        }
        break;
    case 35:
        switch (path_key_value) {
        case 0xc66298eb8aac69a6ull: return path_entry_035_c66298eb8aac(vm);
        default: break;
        }
        break;
    case 36:
        switch (path_key_value) {
        case 0x6eb380f706ec49f0ull: return path_entry_036_6eb380f706ec(vm);
        default: break;
        }
        break;
    case 37:
        switch (path_key_value) {
        case 0x194221f5813b7238ull: return path_entry_037_194221f5813b(vm);
        case 0x419814ebfbf68e1bull: return path_entry_037_419814ebfbf6(vm);
        case 0x565bf9ecba9ddc06ull: return path_entry_037_565bf9ecba9d(vm);
        case 0x5f0bdd4509987674ull: return path_entry_037_5f0bdd450998(vm);
        case 0x5fff89a42f0fb915ull: return path_entry_037_5fff89a42f0f(vm);
        case 0x80dfe08b6a278d90ull: return path_entry_037_80dfe08b6a27(vm);
        case 0x92113252d88219f9ull: return path_entry_037_92113252d882(vm);
        case 0x972249a0a1aafc69ull: return path_entry_037_972249a0a1aa(vm);
        case 0xceda862ca5f0ddebull: return path_entry_037_ceda862ca5f0(vm);
        case 0xded58e16470e6196ull: return path_entry_037_ded58e16470e(vm);
        default: break;
        }
        break;
    case 40:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_040_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 42:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_042_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 43:
        switch (path_key_value) {
        case 0x6350e9318aa572ffull: return path_entry_043_6350e9318aa5(vm);
        case 0x9e91a389bb6a0180ull: return path_entry_043_9e91a389bb6a(vm);
        case 0xb3c385ba08ea674aull: return path_entry_043_b3c385ba08ea(vm);
        case 0xe9d08a79d9eba2a1ull: return path_entry_043_e9d08a79d9eb(vm);
        default: break;
        }
        break;
    case 48:
        switch (path_key_value) {
        case 0x2eb8ab60948f0d63ull: return path_entry_048_2eb8ab60948f(vm);
        case 0x4208c930546548ccull: return path_entry_048_4208c9305465(vm);
        case 0x4554738dd02e4626ull: return path_entry_048_4554738dd02e(vm);
        case 0x899dc1a680afec06ull: return path_entry_048_899dc1a680af(vm);
        case 0xaf9211b7c30a7a32ull: return path_entry_048_af9211b7c30a(vm);
        case 0xbfec44d3b65a5adaull: return path_entry_048_bfec44d3b65a(vm);
        case 0xcdbfce58bb9a536eull: return path_entry_048_cdbfce58bb9a(vm);
        case 0xe1d1ed5c9b53d930ull: return path_entry_048_e1d1ed5c9b53(vm);
        default: break;
        }
        break;
    case 49:
        switch (path_key_value) {
        case 0x14dc36f04060df7aull: return path_entry_049_14dc36f04060(vm);
        default: break;
        }
        break;
    case 52:
        switch (path_key_value) {
        case 0xa5bdf261163619f8ull: return path_entry_052_a5bdf2611636(vm);
        case 0xe530d65417b7204aull: return path_entry_052_e530d65417b7(vm);
        default: break;
        }
        break;
    case 54:
        switch (path_key_value) {
        case 0x101e5bd73623ffe7ull: return path_entry_054_101e5bd73623(vm);
        default: break;
        }
        break;
    case 56:
        switch (path_key_value) {
        case 0x664a05c7f6a51f15ull: return path_entry_056_664a05c7f6a5(vm);
        default: break;
        }
        break;
    case 62:
        switch (path_key_value) {
        case 0x46d2270df907c1b4ull: return path_entry_062_46d2270df907(vm);
        case 0x9d873e475d78b52bull: return path_entry_062_9d873e475d78(vm);
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
    case 65:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_065_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 66:
        switch (path_key_value) {
        case 0x213fac87c7056b3cull: return path_entry_066_213fac87c705(vm);
        case 0x4690fe4f5b0885c4ull: return path_entry_066_4690fe4f5b08(vm);
        case 0x7777b50c03549a09ull: return path_entry_066_7777b50c0354(vm);
        case 0xf47171d373278492ull: return path_entry_066_f47171d37327(vm);
        default: break;
        }
        break;
    case 70:
        switch (path_key_value) {
        case 0x4550a35d86c6e9dcull: return path_entry_070_4550a35d86c6(vm);
        case 0x490afcdddd0d9c29ull: return path_entry_070_490afcdddd0d(vm);
        case 0x8056e776ed725f33ull: return path_entry_070_8056e776ed72(vm);
        case 0x864fa49bd935a147ull: return path_entry_070_864fa49bd935(vm);
        default: break;
        }
        break;
    case 74:
        switch (path_key_value) {
        case 0x41fbb3da3a73d4caull: return path_entry_074_41fbb3da3a73(vm);
        case 0xa48439e79ceaf02dull: return path_entry_074_a48439e79cea(vm);
        default: break;
        }
        break;
    case 79:
        switch (path_key_value) {
        case 0x4fa9d758759c0b0eull: return path_entry_079_4fa9d758759c(vm);
        case 0x62f69f49161a8ee2ull: return path_entry_079_62f69f49161a(vm);
        case 0x66d9f51d9c82b5fcull: return path_entry_079_66d9f51d9c82(vm);
        case 0xe56fb50ce276e515ull: return path_entry_079_e56fb50ce276(vm);
        default: break;
        }
        break;
    case 82:
        switch (path_key_value) {
        case 0x02562957f79852a7ull: return path_entry_082_02562957f798(vm);
        case 0x1606fb4d642df6a7ull: return path_entry_082_1606fb4d642d(vm);
        case 0x29cda8c222ea76c8ull: return path_entry_082_29cda8c222ea(vm);
        case 0x7e7337c12e791cefull: return path_entry_082_7e7337c12e79(vm);
        case 0xaebb1ed46015c55eull: return path_entry_082_aebb1ed46015(vm);
        case 0xc9d038ee69022ef7ull: return path_entry_082_c9d038ee6902(vm);
        default: break;
        }
        break;
    case 83:
        switch (path_key_value) {
        case 0x51cc8bda8af23024ull: return path_entry_083_51cc8bda8af2(vm);
        case 0x5a30d3b6ba886a30ull: return path_entry_083_5a30d3b6ba88(vm);
        default: break;
        }
        break;
    case 85:
        switch (path_key_value) {
        case 0x0c1933f1b1ee8d9eull: return path_entry_085_0c1933f1b1ee(vm);
        default: break;
        }
        break;
    case 86:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_086_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 87:
        switch (path_key_value) {
        case 0x1375abfb67f018cfull: return path_entry_087_1375abfb67f0(vm);
        default: break;
        }
        break;
    case 88:
        switch (path_key_value) {
        case 0x2f26e461d122ec9aull: return path_entry_088_2f26e461d122(vm);
        case 0x69c76b98c1eb4755ull: return path_entry_088_69c76b98c1eb(vm);
        case 0x78722b39f0b4a864ull: return path_entry_088_78722b39f0b4(vm);
        case 0x81ed0e3e63ffdef8ull: return path_entry_088_81ed0e3e63ff(vm);
        default: break;
        }
        break;
    case 90:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_090_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 91:
        switch (path_key_value) {
        case 0x0d50d52eb7de2693ull: return path_entry_091_0d50d52eb7de(vm);
        case 0x85e125aa366913b1ull: return path_entry_091_85e125aa3669(vm);
        default: break;
        }
        break;
    case 92:
        switch (path_key_value) {
        case 0x4e1b79c9e1b36bcbull: return path_entry_092_4e1b79c9e1b3(vm);
        case 0xa78244aaaf9f074full: return path_entry_092_a78244aaaf9f(vm);
        default: break;
        }
        break;
    case 94:
        switch (path_key_value) {
        case 0x588d50dbd5db53e1ull: return path_entry_094_588d50dbd5db(vm);
        case 0xc3dbc73186689cb3ull: return path_entry_094_c3dbc7318668(vm);
        default: break;
        }
        break;
    case 99:
        switch (path_key_value) {
        case 0x4ebfcdebd7bce70eull: return path_entry_099_4ebfcdebd7bc(vm);
        case 0x83df7909478a8cf0ull: return path_entry_099_83df7909478a(vm);
        default: break;
        }
        break;
    case 101:
        switch (path_key_value) {
        case 0x3109313333601288ull: return path_entry_101_310931333360(vm);
        default: break;
        }
        break;
    case 102:
        switch (path_key_value) {
        case 0x5f8dbcaf34a472a5ull: return path_entry_102_5f8dbcaf34a4(vm);
        case 0xce1c74c71b8b49afull: return path_entry_102_ce1c74c71b8b(vm);
        default: break;
        }
        break;
    case 105:
        switch (path_key_value) {
        case 0x2a64ac183a132956ull: return path_entry_105_2a64ac183a13(vm);
        case 0x3baff5e6f167d75full: return path_entry_105_3baff5e6f167(vm);
        case 0x60e314aeef6f3febull: return path_entry_105_60e314aeef6f(vm);
        case 0x8ec2bf719d6351c7ull: return path_entry_105_8ec2bf719d63(vm);
        case 0x91b6ae9102ae61feull: return path_entry_105_91b6ae9102ae(vm);
        case 0xcf8d4e548fe382efull: return path_entry_105_cf8d4e548fe3(vm);
        case 0xd1e679141ab1ec6full: return path_entry_105_d1e679141ab1(vm);
        default: break;
        }
        break;
    case 107:
        switch (path_key_value) {
        case 0xe5cd368af7da2edeull: return path_entry_107_e5cd368af7da(vm);
        default: break;
        }
        break;
    case 108:
        switch (path_key_value) {
        case 0x13f7c681a86939e7ull: return path_entry_108_13f7c681a869(vm);
        case 0x328fde791392e830ull: return path_entry_108_328fde791392(vm);
        case 0x5f4b9f379e40e547ull: return path_entry_108_5f4b9f379e40(vm);
        case 0x6bdaae24c23e2042ull: return path_entry_108_6bdaae24c23e(vm);
        case 0x8877d7eba92eb84bull: return path_entry_108_8877d7eba92e(vm);
        case 0xab195e204d83a97cull: return path_entry_108_ab195e204d83(vm);
        case 0xcf3c455192fb1112ull: return path_entry_108_cf3c455192fb(vm);
        case 0xfab5693be0e97629ull: return path_entry_108_fab5693be0e9(vm);
        case 0xfadb67a2878c38a3ull: return path_entry_108_fadb67a2878c(vm);
        default: break;
        }
        break;
    case 114:
        switch (path_key_value) {
        case 0x102f846cb456dd47ull: return path_entry_114_102f846cb456(vm);
        case 0x2d4f31d7d7d3afb9ull: return path_entry_114_2d4f31d7d7d3(vm);
        case 0x51eab4ff7ea038c9ull: return path_entry_114_51eab4ff7ea0(vm);
        case 0x58b862ae748a5f39ull: return path_entry_114_58b862ae748a(vm);
        case 0x6d97aa419b6e45b1ull: return path_entry_114_6d97aa419b6e(vm);
        case 0x8af1b9e4f1a2f90cull: return path_entry_114_8af1b9e4f1a2(vm);
        case 0x9062c46ada00e046ull: return path_entry_114_9062c46ada00(vm);
        case 0x9fb28485e66f63b4ull: return path_entry_114_9fb28485e66f(vm);
        default: break;
        }
        break;
    case 118:
        switch (path_key_value) {
        case 0x0c2ec304c56dd3deull: return path_entry_118_0c2ec304c56d(vm);
        case 0xc682e41fb0d4fdceull: return path_entry_118_c682e41fb0d4(vm);
        default: break;
        }
        break;
    case 119:
        switch (path_key_value) {
        case 0x4c73699f63238b6full: return path_entry_119_4c73699f6323(vm);
        case 0x73da1b628e200f11ull: return path_entry_119_73da1b628e20(vm);
        default: break;
        }
        break;
    case 121:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_121_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 122:
        switch (path_key_value) {
        case 0xd05c9b2323c578d9ull: return path_entry_122_d05c9b2323c5(vm);
        case 0xd9b4f55f629e1412ull: return path_entry_122_d9b4f55f629e(vm);
        case 0xfbbf0c4194ed2eebull: return path_entry_122_fbbf0c4194ed(vm);
        default: break;
        }
        break;
    case 123:
        switch (path_key_value) {
        case 0x1a385d201ce552edull: return path_entry_123_1a385d201ce5(vm);
        case 0x5321b7c3bbe1e7b9ull: return path_entry_123_5321b7c3bbe1(vm);
        case 0x6c1f6f694e202ea6ull: return path_entry_123_6c1f6f694e20(vm);
        case 0x7ca4af5fe495d779ull: return path_entry_123_7ca4af5fe495(vm);
        case 0xd2e29b026964fcf1ull: return path_entry_123_d2e29b026964(vm);
        case 0xe1fad68b7f3778caull: return path_entry_123_e1fad68b7f37(vm);
        case 0xfdf7985107851946ull: return path_entry_123_fdf798510785(vm);
        default: break;
        }
        break;
    case 124:
        switch (path_key_value) {
        case 0x2ee011e838763ccdull: return path_entry_124_2ee011e83876(vm);
        case 0x720d13cce365bff2ull: return path_entry_124_720d13cce365(vm);
        default: break;
        }
        break;
    case 125:
        switch (path_key_value) {
        case 0x640e99e97634cb74ull: return path_entry_125_640e99e97634(vm);
        case 0x6855c7694d2cef8full: return path_entry_125_6855c7694d2c(vm);
        default: break;
        }
        break;
    case 127:
        switch (path_key_value) {
        case 0x1910477798590f8bull: return path_entry_127_191047779859(vm);
        case 0xa24732f3bf1ecb29ull: return path_entry_127_a24732f3bf1e(vm);
        default: break;
        }
        break;
    case 128:
        switch (path_key_value) {
        case 0x19d51e80d17f4b6eull: return path_entry_128_19d51e80d17f(vm);
        case 0x1cc26e6017eab5d3ull: return path_entry_128_1cc26e6017ea(vm);
        case 0x51e06e44bdfa5e39ull: return path_entry_128_51e06e44bdfa(vm);
        case 0x783948577846d23dull: return path_entry_128_783948577846(vm);
        case 0x91bf05f3f343e4b6ull: return path_entry_128_91bf05f3f343(vm);
        case 0xa63c04819ab1404cull: return path_entry_128_a63c04819ab1(vm);
        default: break;
        }
        break;
    case 129:
        switch (path_key_value) {
        case 0x2d7de7f338ef1eb3ull: return path_entry_129_2d7de7f338ef(vm);
        case 0x88af7305685357cdull: return path_entry_129_88af73056853(vm);
        default: break;
        }
        break;
    case 130:
        switch (path_key_value) {
        case 0xebeafe43f7b7b773ull: return path_entry_130_ebeafe43f7b7(vm);
        default: break;
        }
        break;
    case 131:
        switch (path_key_value) {
        case 0x5aae32890a23d4eaull: return path_entry_131_5aae32890a23(vm);
        case 0xce8a72bd979fb259ull: return path_entry_131_ce8a72bd979f(vm);
        default: break;
        }
        break;
    case 136:
        switch (path_key_value) {
        case 0x2c34239f03385794ull: return path_entry_136_2c34239f0338(vm);
        default: break;
        }
        break;
    case 140:
        switch (path_key_value) {
        case 0x07522c801eb36725ull: return path_entry_140_07522c801eb3(vm);
        case 0x0831c016cdc8d67eull: return path_entry_140_0831c016cdc8(vm);
        case 0x2b28f4fd86e6bf94ull: return path_entry_140_2b28f4fd86e6(vm);
        case 0x3605b56068445282ull: return path_entry_140_3605b5606844(vm);
        case 0x37f6663c73c012c8ull: return path_entry_140_37f6663c73c0(vm);
        case 0x6bc8436c10d6a24dull: return path_entry_140_6bc8436c10d6(vm);
        case 0x87e7b35510351d03ull: return path_entry_140_87e7b3551035(vm);
        case 0xa6b6d11ed8885762ull: return path_entry_140_a6b6d11ed888(vm);
        case 0xb52184b986bd204dull: return path_entry_140_b52184b986bd(vm);
        case 0xcec80b7303cf8610ull: return path_entry_140_cec80b7303cf(vm);
        case 0xf699aebd2ab38d8bull: return path_entry_140_f699aebd2ab3(vm);
        case 0xfd084cebec9a7aecull: return path_entry_140_fd084cebec9a(vm);
        default: break;
        }
        break;
    case 144:
        switch (path_key_value) {
        case 0x10e64be0b987b8fcull: return path_entry_144_10e64be0b987(vm);
        case 0x2f8ce0fc3cdeca85ull: return path_entry_144_2f8ce0fc3cde(vm);
        case 0x4d9c1fd4300908d8ull: return path_entry_144_4d9c1fd43009(vm);
        case 0x543db112a6706a4eull: return path_entry_144_543db112a670(vm);
        case 0x97b8099c72e3d6d4ull: return path_entry_144_97b8099c72e3(vm);
        case 0x9f3cc1c99e54d1d6ull: return path_entry_144_9f3cc1c99e54(vm);
        case 0xb6537cd5d26d3942ull: return path_entry_144_b6537cd5d26d(vm);
        case 0xdf981a914db02de7ull: return path_entry_144_df981a914db0(vm);
        default: break;
        }
        break;
    case 146:
        switch (path_key_value) {
        case 0x0adf5fc71f1c5ca9ull: return path_entry_146_0adf5fc71f1c(vm);
        case 0x0f4c59e1032400caull: return path_entry_146_0f4c59e10324(vm);
        case 0x257a736ac20e565eull: return path_entry_146_257a736ac20e(vm);
        case 0x30e223e338ce2615ull: return path_entry_146_30e223e338ce(vm);
        case 0x3a37a8c7d50f8d93ull: return path_entry_146_3a37a8c7d50f(vm);
        case 0x5e2464f8cfc23b1aull: return path_entry_146_5e2464f8cfc2(vm);
        case 0x78bdb2f1461a8520ull: return path_entry_146_78bdb2f1461a(vm);
        case 0x982557705575dc3dull: return path_entry_146_982557705575(vm);
        case 0xa468acc2971f7d3cull: return path_entry_146_a468acc2971f(vm);
        case 0xeec5c478bb68b13full: return path_entry_146_eec5c478bb68(vm);
        case 0xfd72c17f0895e2c7ull: return path_entry_146_fd72c17f0895(vm);
        default: break;
        }
        break;
    case 148:
        switch (path_key_value) {
        case 0x7ae8cd365d3d8af2ull: return path_entry_148_7ae8cd365d3d(vm);
        case 0xbcd4bee0298575dbull: return path_entry_148_bcd4bee02985(vm);
        default: break;
        }
        break;
    case 151:
        switch (path_key_value) {
        case 0x002987b231bcd1c1ull: return path_entry_151_002987b231bc(vm);
        case 0x9c9489444f2ddd0bull: return path_entry_151_9c9489444f2d(vm);
        default: break;
        }
        break;
    case 153:
        switch (path_key_value) {
        case 0x4e59423688cc6bafull: return path_entry_153_4e59423688cc(vm);
        default: break;
        }
        break;
    case 154:
        switch (path_key_value) {
        case 0x2bda520e96f2c598ull: return path_entry_154_2bda520e96f2(vm);
        case 0x5b78998740ff7852ull: return path_entry_154_5b78998740ff(vm);
        case 0x77c4db6928c83d65ull: return path_entry_154_77c4db6928c8(vm);
        default: break;
        }
        break;
    case 157:
        switch (path_key_value) {
        case 0x3ac6dab09bb33a9cull: return path_entry_157_3ac6dab09bb3(vm);
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
        case 0x100da339bec0f3aeull: return path_entry_160_100da339bec0(vm);
        case 0x283d4be70a6d81caull: return path_entry_160_283d4be70a6d(vm);
        case 0x3240613169d3e063ull: return path_entry_160_3240613169d3(vm);
        case 0x561db656c124c784ull: return path_entry_160_561db656c124(vm);
        case 0x9fbaf1bff4b8248bull: return path_entry_160_9fbaf1bff4b8(vm);
        case 0xb5dc6ce098276a10ull: return path_entry_160_b5dc6ce09827(vm);
        case 0xc44c0307f0fc4574ull: return path_entry_160_c44c0307f0fc(vm);
        case 0xf0b499c4c681c814ull: return path_entry_160_f0b499c4c681(vm);
        default: break;
        }
        break;
    case 161:
        switch (path_key_value) {
        case 0x0ca40c0e59dbe6e9ull: return path_entry_161_0ca40c0e59db(vm);
        case 0x0cf4855e16d07afbull: return path_entry_161_0cf4855e16d0(vm);
        default: break;
        }
        break;
    case 165:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_165_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 167:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_167_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 168:
        switch (path_key_value) {
        case 0x5a46469f23bdd3ccull: return path_entry_168_5a46469f23bd(vm);
        case 0x8eac2b09ff5fd809ull: return path_entry_168_8eac2b09ff5f(vm);
        case 0xb0214fdf21298e2bull: return path_entry_168_b0214fdf2129(vm);
        case 0xc62eeb38897cc019ull: return path_entry_168_c62eeb38897c(vm);
        case 0xcb8a5cbea557e0e9ull: return path_entry_168_cb8a5cbea557(vm);
        default: break;
        }
        break;
    case 169:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_169_e3b0c44298fc(vm);
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
        case 0x0a4b2fe7c989472dull: return path_entry_173_0a4b2fe7c989(vm);
        case 0x45fd438f0ec970b1ull: return path_entry_173_45fd438f0ec9(vm);
        case 0x68b4556c1b76c061ull: return path_entry_173_68b4556c1b76(vm);
        case 0x7c3ef1df81b040daull: return path_entry_173_7c3ef1df81b0(vm);
        case 0x800ab7eb123b8ca2ull: return path_entry_173_800ab7eb123b(vm);
        case 0xa18349357a38cb5cull: return path_entry_173_a18349357a38(vm);
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
        case 0xb375be1a950bc98full: return path_entry_176_b375be1a950b(vm);
        case 0xbbe0d482f93ad097ull: return path_entry_176_bbe0d482f93a(vm);
        default: break;
        }
        break;
    case 179:
        switch (path_key_value) {
        case 0x21983abea23f320full: return path_entry_179_21983abea23f(vm);
        case 0x46e84a014b0ff9a5ull: return path_entry_179_46e84a014b0f(vm);
        case 0x5d3cc113707387d4ull: return path_entry_179_5d3cc1137073(vm);
        default: break;
        }
        break;
    case 180:
        switch (path_key_value) {
        case 0x840c57e172be5a2eull: return path_entry_180_840c57e172be(vm);
        case 0x8d3726fc6281a26dull: return path_entry_180_8d3726fc6281(vm);
        default: break;
        }
        break;
    case 181:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_181_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 183:
        switch (path_key_value) {
        case 0x7633afa8259cedcdull: return path_entry_183_7633afa8259c(vm);
        case 0x9c00903a53cb9c74ull: return path_entry_183_9c00903a53cb(vm);
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
    case 186:
        switch (path_key_value) {
        case 0x3ab9de5268261224ull: return path_entry_186_3ab9de526826(vm);
        case 0x834a23ba91970f51ull: return path_entry_186_834a23ba9197(vm);
        default: break;
        }
        break;
    case 187:
        switch (path_key_value) {
        case 0x2778a69fcfd9605eull: return path_entry_187_2778a69fcfd9(vm);
        default: break;
        }
        break;
    case 189:
        switch (path_key_value) {
        case 0x0474812a78a0c853ull: return path_entry_189_0474812a78a0(vm);
        case 0x6f9a1c43a43f01aeull: return path_entry_189_6f9a1c43a43f(vm);
        case 0x7483e4cd2418f22cull: return path_entry_189_7483e4cd2418(vm);
        case 0x8589bd83a0e8cea0ull: return path_entry_189_8589bd83a0e8(vm);
        default: break;
        }
        break;
    case 190:
        switch (path_key_value) {
        case 0x0fd8f618435a1ab6ull: return path_entry_190_0fd8f618435a(vm);
        case 0x253e76a61958e7baull: return path_entry_190_253e76a61958(vm);
        case 0x2ec827c425d26b05ull: return path_entry_190_2ec827c425d2(vm);
        case 0x439f3423415e8685ull: return path_entry_190_439f3423415e(vm);
        default: break;
        }
        break;
    case 192:
        switch (path_key_value) {
        case 0x25b32187cd64fd25ull: return path_entry_192_25b32187cd64(vm);
        case 0x84d195541895864cull: return path_entry_192_84d195541895(vm);
        case 0xd15bf3105a909314ull: return path_entry_192_d15bf3105a90(vm);
        case 0xd4c8fd95d9a6d339ull: return path_entry_192_d4c8fd95d9a6(vm);
        default: break;
        }
        break;
    case 196:
        switch (path_key_value) {
        case 0x44a20faf942e72a8ull: return path_entry_196_44a20faf942e(vm);
        case 0x9917c35930d48ca1ull: return path_entry_196_9917c35930d4(vm);
        default: break;
        }
        break;
    case 198:
        switch (path_key_value) {
        case 0x0519bbb8248a91ecull: return path_entry_198_0519bbb8248a(vm);
        case 0x280c64f01840924full: return path_entry_198_280c64f01840(vm);
        case 0x505403243bd35b86ull: return path_entry_198_505403243bd3(vm);
        case 0x5fd34b2586cb4fcbull: return path_entry_198_5fd34b2586cb(vm);
        case 0xa16a8badeb00f044ull: return path_entry_198_a16a8badeb00(vm);
        case 0xb2dfe23c48dbc369ull: return path_entry_198_b2dfe23c48db(vm);
        case 0xde24412b149602c5ull: return path_entry_198_de24412b1496(vm);
        case 0xedebcddd401771d5ull: return path_entry_198_edebcddd4017(vm);
        default: break;
        }
        break;
    case 199:
        switch (path_key_value) {
        case 0x1c2914d9ca049a16ull: return path_entry_199_1c2914d9ca04(vm);
        case 0x454bb50b5a012434ull: return path_entry_199_454bb50b5a01(vm);
        case 0xa3fd491b93ac1355ull: return path_entry_199_a3fd491b93ac(vm);
        case 0xbe91d6d11747a1dbull: return path_entry_199_be91d6d11747(vm);
        default: break;
        }
        break;
    case 200:
        switch (path_key_value) {
        case 0x432568af12e4447bull: return path_entry_200_432568af12e4(vm);
        case 0xa215be4cf4ccdb3bull: return path_entry_200_a215be4cf4cc(vm);
        case 0xa42a6e0e16cb3fb1ull: return path_entry_200_a42a6e0e16cb(vm);
        case 0xb0da9afbed11b699ull: return path_entry_200_b0da9afbed11(vm);
        default: break;
        }
        break;
    case 201:
        switch (path_key_value) {
        case 0x1519cd726560d643ull: return path_entry_201_1519cd726560(vm);
        case 0xe0921d3affc3a863ull: return path_entry_201_e0921d3affc3(vm);
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
    case 208:
        switch (path_key_value) {
        case 0x0be4b13bf60bd4a5ull: return path_entry_208_0be4b13bf60b(vm);
        case 0x12ce32491e57c736ull: return path_entry_208_12ce32491e57(vm);
        case 0x1d1b9f2d7e080b9dull: return path_entry_208_1d1b9f2d7e08(vm);
        case 0x3e22accc122d463eull: return path_entry_208_3e22accc122d(vm);
        case 0x4cb95a94c54102a3ull: return path_entry_208_4cb95a94c541(vm);
        case 0x5273b21feba7b6a2ull: return path_entry_208_5273b21feba7(vm);
        case 0x77086d10d578902bull: return path_entry_208_77086d10d578(vm);
        case 0x945ec9e23a70eb7dull: return path_entry_208_945ec9e23a70(vm);
        case 0x975d39be5ca8b73aull: return path_entry_208_975d39be5ca8(vm);
        case 0xb204364d3b79fdd3ull: return path_entry_208_b204364d3b79(vm);
        case 0xc98768020b6486fcull: return path_entry_208_c98768020b64(vm);
        default: break;
        }
        break;
    case 209:
        switch (path_key_value) {
        case 0xd8f8bc3805cfbed9ull: return path_entry_209_d8f8bc3805cf(vm);
        default: break;
        }
        break;
    case 214:
        switch (path_key_value) {
        case 0x976254d9e1abe997ull: return path_entry_214_976254d9e1ab(vm);
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
    case 217:
        switch (path_key_value) {
        case 0xdbf8044244c4dd26ull: return path_entry_217_dbf8044244c4(vm);
        case 0xdc7b945dcdb3a561ull: return path_entry_217_dc7b945dcdb3(vm);
        default: break;
        }
        break;
    case 220:
        switch (path_key_value) {
        case 0x2b46c944c8ee5aefull: return path_entry_220_2b46c944c8ee(vm);
        case 0xa21119ff764203f4ull: return path_entry_220_a21119ff7642(vm);
        default: break;
        }
        break;
    case 221:
        switch (path_key_value) {
        case 0x7ed8075b3f9e17ffull: return path_entry_221_7ed8075b3f9e(vm);
        default: break;
        }
        break;
    case 222:
        switch (path_key_value) {
        case 0x0256233ac9698073ull: return path_entry_222_0256233ac969(vm);
        case 0x155b8bfb7079c907ull: return path_entry_222_155b8bfb7079(vm);
        case 0x3072da87febdb44full: return path_entry_222_3072da87febd(vm);
        case 0x3949013ea1513bf7ull: return path_entry_222_3949013ea151(vm);
        case 0x3c5c7e2ac6164709ull: return path_entry_222_3c5c7e2ac616(vm);
        case 0x8dbc619ae0cc1785ull: return path_entry_222_8dbc619ae0cc(vm);
        default: break;
        }
        break;
    case 231:
        switch (path_key_value) {
        case 0x833ef5dc8aaea91eull: return path_entry_231_833ef5dc8aae(vm);
        default: break;
        }
        break;
    case 237:
        switch (path_key_value) {
        case 0x220aec61f5cb2605ull: return path_entry_237_220aec61f5cb(vm);
        case 0x27ad2349dd7dd3e1ull: return path_entry_237_27ad2349dd7d(vm);
        case 0x27ecdfb73972e605ull: return path_entry_237_27ecdfb73972(vm);
        case 0x5f6701a2424033a3ull: return path_entry_237_5f6701a24240(vm);
        case 0x69c6b0e5ccc43bb0ull: return path_entry_237_69c6b0e5ccc4(vm);
        case 0x749e34fb357a9d94ull: return path_entry_237_749e34fb357a(vm);
        case 0x8f76701e339cb0f5ull: return path_entry_237_8f76701e339c(vm);
        case 0xb6812e27a7233063ull: return path_entry_237_b6812e27a723(vm);
        case 0xc2b81e454407492cull: return path_entry_237_c2b81e454407(vm);
        case 0xc32fe92f14d4a45cull: return path_entry_237_c32fe92f14d4(vm);
        case 0xd1a4d3040fe2d0f7ull: return path_entry_237_d1a4d3040fe2(vm);
        case 0xeb8d278d835174a2ull: return path_entry_237_eb8d278d8351(vm);
        case 0xec8f6cd1ef50287full: return path_entry_237_ec8f6cd1ef50(vm);
        default: break;
        }
        break;
    case 239:
        switch (path_key_value) {
        case 0x28ac4d307c83df98ull: return path_entry_239_28ac4d307c83(vm);
        case 0x5b37691aa2424c6aull: return path_entry_239_5b37691aa242(vm);
        case 0x69142fcd451d17deull: return path_entry_239_69142fcd451d(vm);
        case 0xdb0d47c5682396a7ull: return path_entry_239_db0d47c56823(vm);
        default: break;
        }
        break;
    case 240:
        switch (path_key_value) {
        case 0x7d2cd2d791a87439ull: return path_entry_240_7d2cd2d791a8(vm);
        default: break;
        }
        break;
    case 241:
        switch (path_key_value) {
        case 0x09dd52184bb38480ull: return path_entry_241_09dd52184bb3(vm);
        default: break;
        }
        break;
    case 242:
        switch (path_key_value) {
        case 0x456829fdf152b164ull: return path_entry_242_456829fdf152(vm);
        case 0x4b247eef89548bf1ull: return path_entry_242_4b247eef8954(vm);
        default: break;
        }
        break;
    case 243:
        switch (path_key_value) {
        case 0x4dd686abf8650c2aull: return path_entry_243_4dd686abf865(vm);
        case 0x72733eb95153883eull: return path_entry_243_72733eb95153(vm);
        default: break;
        }
        break;
    case 245:
        switch (path_key_value) {
        case 0x4792d8a1d8a3dbb5ull: return path_entry_245_4792d8a1d8a3(vm);
        default: break;
        }
        break;
    case 248:
        switch (path_key_value) {
        case 0x21850699e16fcd1aull: return path_entry_248_21850699e16f(vm);
        case 0xacbff1ba210ff976ull: return path_entry_248_acbff1ba210f(vm);
        case 0xbd9bcc498bac531aull: return path_entry_248_bd9bcc498bac(vm);
        default: break;
        }
        break;
    case 250:
        switch (path_key_value) {
        case 0x2a741755722e5baeull: return path_entry_250_2a741755722e(vm);
        case 0xf3368a1603473e1eull: return path_entry_250_f3368a160347(vm);
        default: break;
        }
        break;
    case 251:
        switch (path_key_value) {
        case 0x08d0f0bf716bc8f7ull: return path_entry_251_08d0f0bf716b(vm);
        default: break;
        }
        break;
    case 253:
        switch (path_key_value) {
        case 0x1b329325bc7a0ef6ull: return path_entry_253_1b329325bc7a(vm);
        case 0x4464700b2a37d81aull: return path_entry_253_4464700b2a37(vm);
        case 0xd391132b7c63a0fbull: return path_entry_253_d391132b7c63(vm);
        case 0xefa9099da97e022aull: return path_entry_253_efa9099da97e(vm);
        default: break;
        }
        break;
    case 254:
        switch (path_key_value) {
        case 0x121148e630ade341ull: return path_entry_254_121148e630ad(vm);
        case 0x654b5ded1981085bull: return path_entry_254_654b5ded1981(vm);
        default: break;
        }
        break;
    case 256:
        switch (path_key_value) {
        case 0x1413958a75f2cf9aull: return path_entry_256_1413958a75f2(vm);
        case 0x17cbf48c37434a4aull: return path_entry_256_17cbf48c3743(vm);
        case 0x421c06cce5162555ull: return path_entry_256_421c06cce516(vm);
        case 0x83cda8f6067fce2aull: return path_entry_256_83cda8f6067f(vm);
        case 0x9b71fe6ab7a5d549ull: return path_entry_256_9b71fe6ab7a5(vm);
        default: break;
        }
        break;
    case 257:
        switch (path_key_value) {
        case 0x4c767eeb8531119dull: return path_entry_257_4c767eeb8531(vm);
        case 0x4da4fe40de22a206ull: return path_entry_257_4da4fe40de22(vm);
        case 0x4f54f5b6f3a20391ull: return path_entry_257_4f54f5b6f3a2(vm);
        case 0x706f0fbb93540b86ull: return path_entry_257_706f0fbb9354(vm);
        case 0x71946a671fa6f0c7ull: return path_entry_257_71946a671fa6(vm);
        case 0x79d49ec65a6724a0ull: return path_entry_257_79d49ec65a67(vm);
        case 0x803f19f8103572d0ull: return path_entry_257_803f19f81035(vm);
        case 0x9572ab8966df7a4cull: return path_entry_257_9572ab8966df(vm);
        case 0xdfbbea61e449eaa3ull: return path_entry_257_dfbbea61e449(vm);
        case 0xfbb7ebf89cedfec3ull: return path_entry_257_fbb7ebf89ced(vm);
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
    case 260:
        switch (path_key_value) {
        case 0x2a5fb4d289ee3b20ull: return path_entry_260_2a5fb4d289ee(vm);
        case 0x5a379914f0381e9full: return path_entry_260_5a379914f038(vm);
        case 0xbeb0ded0c6bd2168ull: return path_entry_260_beb0ded0c6bd(vm);
        case 0xd8192970ef3a82a2ull: return path_entry_260_d8192970ef3a(vm);
        default: break;
        }
        break;
    case 261:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_261_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 267:
        switch (path_key_value) {
        case 0x995f3a6ce826c58cull: return path_entry_267_995f3a6ce826(vm);
        default: break;
        }
        break;
    case 268:
        switch (path_key_value) {
        case 0x0465db1cd6ce279eull: return path_entry_268_0465db1cd6ce(vm);
        case 0x06903b8c26572b18ull: return path_entry_268_06903b8c2657(vm);
        case 0x0fdc3b6a88369fd7ull: return path_entry_268_0fdc3b6a8836(vm);
        case 0x23ad013654b73764ull: return path_entry_268_23ad013654b7(vm);
        case 0x80c25c32cafec1f8ull: return path_entry_268_80c25c32cafe(vm);
        case 0xc111a20b40539ba2ull: return path_entry_268_c111a20b4053(vm);
        case 0xc1e3dfd197d904dfull: return path_entry_268_c1e3dfd197d9(vm);
        case 0xe08fa0239f68c868ull: return path_entry_268_e08fa0239f68(vm);
        default: break;
        }
        break;
    case 269:
        switch (path_key_value) {
        case 0x002580e3f4159fc1ull: return path_entry_269_002580e3f415(vm);
        case 0x6901ad8af83fa830ull: return path_entry_269_6901ad8af83f(vm);
        default: break;
        }
        break;
    case 273:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_273_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 280:
        switch (path_key_value) {
        case 0x69b3e6542a966a82ull: return path_entry_280_69b3e6542a96(vm);
        case 0x82ff788ea71516d6ull: return path_entry_280_82ff788ea715(vm);
        case 0xfa9f86757a332e73ull: return path_entry_280_fa9f86757a33(vm);
        default: break;
        }
        break;
    case 281:
        switch (path_key_value) {
        case 0xbf19bc7c26ba5d0eull: return path_entry_281_bf19bc7c26ba(vm);
        default: break;
        }
        break;
    case 282:
        switch (path_key_value) {
        case 0x01946c2fdff8179full: return path_entry_282_01946c2fdff8(vm);
        case 0x110886fc03b9bb84ull: return path_entry_282_110886fc03b9(vm);
        case 0x37bb4e0d23db2fcdull: return path_entry_282_37bb4e0d23db(vm);
        case 0x4e1a08b512545ea9ull: return path_entry_282_4e1a08b51254(vm);
        case 0x5f2049fc4206797aull: return path_entry_282_5f2049fc4206(vm);
        case 0x768b388698cbf73eull: return path_entry_282_768b388698cb(vm);
        case 0x773356a8125f572cull: return path_entry_282_773356a8125f(vm);
        case 0x8d87a955d012957bull: return path_entry_282_8d87a955d012(vm);
        case 0xef445ab229304f72ull: return path_entry_282_ef445ab22930(vm);
        case 0xf370d941d5feed1eull: return path_entry_282_f370d941d5fe(vm);
        default: break;
        }
        break;
    case 283:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_283_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 284:
        switch (path_key_value) {
        case 0xc64644ae256c2283ull: return path_entry_284_c64644ae256c(vm);
        default: break;
        }
        break;
    case 285:
        switch (path_key_value) {
        case 0xf79371fd7cb4721full: return path_entry_285_f79371fd7cb4(vm);
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
    case 290:
        switch (path_key_value) {
        case 0x8f4e1239977a47c6ull: return path_entry_290_8f4e1239977a(vm);
        default: break;
        }
        break;
    case 291:
        switch (path_key_value) {
        case 0x04cf4f539f6182dcull: return path_entry_291_04cf4f539f61(vm);
        case 0x983583bc036af2daull: return path_entry_291_983583bc036a(vm);
        case 0xa45cbc7ff0090f2eull: return path_entry_291_a45cbc7ff009(vm);
        case 0xdc818c3d8f0dea4aull: return path_entry_291_dc818c3d8f0d(vm);
        default: break;
        }
        break;
    case 292:
        switch (path_key_value) {
        case 0x02749dce4a153b19ull: return path_entry_292_02749dce4a15(vm);
        case 0x0997af338ad030eeull: return path_entry_292_0997af338ad0(vm);
        case 0x2c3454329a9de726ull: return path_entry_292_2c3454329a9d(vm);
        case 0x35cf8772598e55cbull: return path_entry_292_35cf8772598e(vm);
        case 0x5ab24bee3c6b71f5ull: return path_entry_292_5ab24bee3c6b(vm);
        case 0xe5e4f2718bba17ceull: return path_entry_292_e5e4f2718bba(vm);
        case 0xea3398581b2413d0ull: return path_entry_292_ea3398581b24(vm);
        default: break;
        }
        break;
    case 295:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_295_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 297:
        switch (path_key_value) {
        case 0x1438e06c94d04486ull: return path_entry_297_1438e06c94d0(vm);
        case 0x4649b816d12abef9ull: return path_entry_297_4649b816d12a(vm);
        case 0x6091fdb2f82dc3fbull: return path_entry_297_6091fdb2f82d(vm);
        case 0xf974a1d6cd969c6bull: return path_entry_297_f974a1d6cd96(vm);
        default: break;
        }
        break;
    case 300:
        switch (path_key_value) {
        case 0x4d693d0a15894860ull: return path_entry_300_4d693d0a1589(vm);
        case 0x745a7b95e00833b1ull: return path_entry_300_745a7b95e008(vm);
        case 0x833b04476f7a3399ull: return path_entry_300_833b04476f7a(vm);
        case 0x935ecabfe4d43423ull: return path_entry_300_935ecabfe4d4(vm);
        default: break;
        }
        break;
    case 301:
        switch (path_key_value) {
        case 0x084f0136b5068bc0ull: return path_entry_301_084f0136b506(vm);
        case 0x10c8c7c12593d729ull: return path_entry_301_10c8c7c12593(vm);
        case 0x1dbe9282449f81a6ull: return path_entry_301_1dbe9282449f(vm);
        case 0x537b51ceef7e6603ull: return path_entry_301_537b51ceef7e(vm);
        case 0x7535310231cf8aa5ull: return path_entry_301_7535310231cf(vm);
        case 0xd1d08c84dc4f1a8dull: return path_entry_301_d1d08c84dc4f(vm);
        case 0xdf3ac6b87011e3cfull: return path_entry_301_df3ac6b87011(vm);
        case 0xeed7c9ccfebc34e6ull: return path_entry_301_eed7c9ccfebc(vm);
        default: break;
        }
        break;
    case 305:
        switch (path_key_value) {
        case 0x718cb0102314ed52ull: return path_entry_305_718cb0102314(vm);
        case 0xe9d3813fa05892b0ull: return path_entry_305_e9d3813fa058(vm);
        case 0xec1b94f05ced6b81ull: return path_entry_305_ec1b94f05ced(vm);
        case 0xf53034a3ecb104a1ull: return path_entry_305_f53034a3ecb1(vm);
        default: break;
        }
        break;
    case 307:
        switch (path_key_value) {
        case 0x53af157f8d5a451eull: return path_entry_307_53af157f8d5a(vm);
        case 0xd225712c0754a6b5ull: return path_entry_307_d225712c0754(vm);
        default: break;
        }
        break;
    case 310:
        switch (path_key_value) {
        case 0xc0f3368511d55f61ull: return path_entry_310_c0f3368511d5(vm);
        case 0xedf2aaace7a1b424ull: return path_entry_310_edf2aaace7a1(vm);
        default: break;
        }
        break;
    case 313:
        switch (path_key_value) {
        case 0xe763e24efa841a3bull: return path_entry_313_e763e24efa84(vm);
        default: break;
        }
        break;
    case 314:
        switch (path_key_value) {
        case 0xedc2d63ecc901b43ull: return path_entry_314_edc2d63ecc90(vm);
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
    case 317:
        switch (path_key_value) {
        case 0x30e8e4255b6ffbe3ull: return path_entry_317_30e8e4255b6f(vm);
        case 0x4895684b48c64b41ull: return path_entry_317_4895684b48c6(vm);
        case 0x57351ad76f77e260ull: return path_entry_317_57351ad76f77(vm);
        case 0x6d5f43d16e2bf73eull: return path_entry_317_6d5f43d16e2b(vm);
        case 0xce011ef195537adaull: return path_entry_317_ce011ef19553(vm);
        default: break;
        }
        break;
    case 319:
        switch (path_key_value) {
        case 0x0c39ce7926ed9f89ull: return path_entry_319_0c39ce7926ed(vm);
        case 0x63730cfda0ffb9fbull: return path_entry_319_63730cfda0ff(vm);
        case 0x6ed74e1c0868ca96ull: return path_entry_319_6ed74e1c0868(vm);
        case 0x810a972078607739ull: return path_entry_319_810a97207860(vm);
        case 0x862159fb64299b44ull: return path_entry_319_862159fb6429(vm);
        case 0x9a21b656ce3dc52bull: return path_entry_319_9a21b656ce3d(vm);
        case 0xb759a5ef62168bb4ull: return path_entry_319_b759a5ef6216(vm);
        default: break;
        }
        break;
    case 320:
        switch (path_key_value) {
        case 0x5f045809296d5b3dull: return path_entry_320_5f045809296d(vm);
        case 0x8d912487d9d4ff9cull: return path_entry_320_8d912487d9d4(vm);
        default: break;
        }
        break;
    case 322:
        switch (path_key_value) {
        case 0x10e8593b486b88a6ull: return path_entry_322_10e8593b486b(vm);
        case 0xfd79160f5b9f1866ull: return path_entry_322_fd79160f5b9f(vm);
        default: break;
        }
        break;
    case 323:
        switch (path_key_value) {
        case 0x78dcf8948d5b31b3ull: return path_entry_323_78dcf8948d5b(vm);
        default: break;
        }
        break;
    case 326:
        switch (path_key_value) {
        case 0xe11efe9539472b4full: return path_entry_326_e11efe953947(vm);
        default: break;
        }
        break;
    case 330:
        switch (path_key_value) {
        case 0x1c2a7cd724ae0e42ull: return path_entry_330_1c2a7cd724ae(vm);
        case 0x20af7b550e1c50beull: return path_entry_330_20af7b550e1c(vm);
        case 0x2dd08985aba7ad6bull: return path_entry_330_2dd08985aba7(vm);
        case 0x3ba719b1752004a7ull: return path_entry_330_3ba719b17520(vm);
        case 0x43ae8e8d051c8e1eull: return path_entry_330_43ae8e8d051c(vm);
        case 0x5a27835f4eb7b870ull: return path_entry_330_5a27835f4eb7(vm);
        case 0x5c2cab85f9afab52ull: return path_entry_330_5c2cab85f9af(vm);
        case 0x5fac0740b3f4045aull: return path_entry_330_5fac0740b3f4(vm);
        case 0x688bf75cfe02a663ull: return path_entry_330_688bf75cfe02(vm);
        case 0x695df04a75c73264ull: return path_entry_330_695df04a75c7(vm);
        case 0x722343a64206d485ull: return path_entry_330_722343a64206(vm);
        case 0x8268b83bf72fa338ull: return path_entry_330_8268b83bf72f(vm);
        case 0x83fc504d18fb94cbull: return path_entry_330_83fc504d18fb(vm);
        case 0xb7d06ed058761c11ull: return path_entry_330_b7d06ed05876(vm);
        case 0xd53dca47d6295059ull: return path_entry_330_d53dca47d629(vm);
        case 0xdaf9e02bbbbef0f1ull: return path_entry_330_daf9e02bbbbe(vm);
        case 0xe9d6ac0e93b396fbull: return path_entry_330_e9d6ac0e93b3(vm);
        case 0xfdf1e1a4967a8ab0ull: return path_entry_330_fdf1e1a4967a(vm);
        default: break;
        }
        break;
    case 331:
        switch (path_key_value) {
        case 0x5fbed292e10b3080ull: return path_entry_331_5fbed292e10b(vm);
        case 0x82c778544ad3dff8ull: return path_entry_331_82c778544ad3(vm);
        case 0xb418e41fa05a8dd2ull: return path_entry_331_b418e41fa05a(vm);
        default: break;
        }
        break;
    case 332:
        switch (path_key_value) {
        case 0x074498403375c74bull: return path_entry_332_074498403375(vm);
        case 0x4ddafdbbeaa3d928ull: return path_entry_332_4ddafdbbeaa3(vm);
        default: break;
        }
        break;
    case 333:
        switch (path_key_value) {
        case 0x5dba04465e0f3b28ull: return path_entry_333_5dba04465e0f(vm);
        case 0xd227bd6969706e50ull: return path_entry_333_d227bd696970(vm);
        default: break;
        }
        break;
    case 336:
        switch (path_key_value) {
        case 0xc859f7b914885127ull: return path_entry_336_c859f7b91488(vm);
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
    case 338:
        switch (path_key_value) {
        case 0x04bd85f2d26ed064ull: return path_entry_338_04bd85f2d26e(vm);
        case 0x55cdaf5314f06009ull: return path_entry_338_55cdaf5314f0(vm);
        case 0xac191ebd92796431ull: return path_entry_338_ac191ebd9279(vm);
        default: break;
        }
        break;
    case 340:
        switch (path_key_value) {
        case 0x02ae05a16ed89aaeull: return path_entry_340_02ae05a16ed8(vm);
        case 0x2a0ce8aa7d3ecb4eull: return path_entry_340_2a0ce8aa7d3e(vm);
        case 0x69e377434a334c1bull: return path_entry_340_69e377434a33(vm);
        case 0xbb7a9a08ec3867b1ull: return path_entry_340_bb7a9a08ec38(vm);
        default: break;
        }
        break;
    case 345:
        switch (path_key_value) {
        case 0x2d9de867d680c76full: return path_entry_345_2d9de867d680(vm);
        case 0x7e0925f660bbdbe8ull: return path_entry_345_7e0925f660bb(vm);
        default: break;
        }
        break;
    case 346:
        switch (path_key_value) {
        case 0x3468299b08f6c85aull: return path_entry_346_3468299b08f6(vm);
        case 0x3b28db7f78198053ull: return path_entry_346_3b28db7f7819(vm);
        case 0x570b341c1819f56eull: return path_entry_346_570b341c1819(vm);
        case 0x66817cf32267dc25ull: return path_entry_346_66817cf32267(vm);
        case 0x7b6c336f65e8be9bull: return path_entry_346_7b6c336f65e8(vm);
        case 0x928c0bda79e19d1aull: return path_entry_346_928c0bda79e1(vm);
        case 0xb2d30c72cdaa0b05ull: return path_entry_346_b2d30c72cdaa(vm);
        default: break;
        }
        break;
    case 347:
        switch (path_key_value) {
        case 0x98d7cb445c7961a8ull: return path_entry_347_98d7cb445c79(vm);
        case 0xc9afc1bcaa30b134ull: return path_entry_347_c9afc1bcaa30(vm);
        case 0xcb333c548cc440f3ull: return path_entry_347_cb333c548cc4(vm);
        case 0xec89a4d6c19be592ull: return path_entry_347_ec89a4d6c19b(vm);
        default: break;
        }
        break;
    case 348:
        switch (path_key_value) {
        case 0x5821166bf2c3c775ull: return path_entry_348_5821166bf2c3(vm);
        case 0x8800803f96b6b819ull: return path_entry_348_8800803f96b6(vm);
        case 0x9b1901656de004c9ull: return path_entry_348_9b1901656de0(vm);
        case 0xf2c2c381e9538cabull: return path_entry_348_f2c2c381e953(vm);
        default: break;
        }
        break;
    case 349:
        switch (path_key_value) {
        case 0x15bcc1ea74bf0193ull: return path_entry_349_15bcc1ea74bf(vm);
        case 0x56d1c35330251181ull: return path_entry_349_56d1c3533025(vm);
        case 0x91e884abd6c40602ull: return path_entry_349_91e884abd6c4(vm);
        default: break;
        }
        break;
    case 350:
        switch (path_key_value) {
        case 0x4fe792b99d9f1417ull: return path_entry_350_4fe792b99d9f(vm);
        default: break;
        }
        break;
    case 351:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_351_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 352:
        switch (path_key_value) {
        case 0x42ed6a9e671e5d3eull: return path_entry_352_42ed6a9e671e(vm);
        case 0x4a8edb2c1ffd3095ull: return path_entry_352_4a8edb2c1ffd(vm);
        case 0x7741bb1ac2cf28bdull: return path_entry_352_7741bb1ac2cf(vm);
        case 0xb17f769d0eb20d52ull: return path_entry_352_b17f769d0eb2(vm);
        case 0xddee6711eeae4b11ull: return path_entry_352_ddee6711eeae(vm);
        case 0xe0e1a73fcf72bd35ull: return path_entry_352_e0e1a73fcf72(vm);
        case 0xf355f88fd20c15a3ull: return path_entry_352_f355f88fd20c(vm);
        case 0xf73d8af7bb1af6c4ull: return path_entry_352_f73d8af7bb1a(vm);
        default: break;
        }
        break;
    case 354:
        switch (path_key_value) {
        case 0x00cfcc3534d46b1full: return path_entry_354_00cfcc3534d4(vm);
        case 0xd69e7237559ac86bull: return path_entry_354_d69e7237559a(vm);
        default: break;
        }
        break;
    case 357:
        switch (path_key_value) {
        case 0xb76f0c1213392f8eull: return path_entry_357_b76f0c121339(vm);
        default: break;
        }
        break;
    case 359:
        switch (path_key_value) {
        case 0x7517feae529a3779ull: return path_entry_359_7517feae529a(vm);
        default: break;
        }
        break;
    default: break;
    }
    return (VMOpResult){ .next_entry = -1, .slot = 0xffffffffu };
}
