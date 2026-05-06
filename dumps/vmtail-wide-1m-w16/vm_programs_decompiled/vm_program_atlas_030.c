/*
 * Decompiled VM bytecode programs.
 * This layer inlines lifted bytecode-row semantics instead of handler-call sketches.
 * Rows whose symbolic expressions were clipped upstream are retained as comments,
 * so the artifact remains syntax-checkable while preserving audit visibility.
 */
#include <stdint.h>

typedef struct VMState {
    uint8_t *ip;
    uint32_t state;
    uint32_t flags;
    uint8_t byte;
} VMState;

#define U8(p)  (*(const uint8_t *)(p))
#define U16(p) (*(const uint16_t *)(p))
#define U32(p) (*(const uint32_t *)(p))
#define mask32(x) ((uint32_t)(x))
#define mask16(x) ((uint16_t)(x))
#define mask8(x)  ((uint8_t)(x))
static int64_t signed_vm_delta_u32(uint32_t raw) {
    return (raw & 0x80000000u) ? -(int64_t)(raw & 0x7fffffffu) : (int64_t)raw;
}

typedef struct VMSyntheticTailEvidence {
    uint64_t source_vm_ip;
    uint64_t target_vm_ip;
    uint32_t source_entry;
    uint32_t target_entry;
    const char *edge_kind;
    const char *coverage;
    const char *semantic;
} VMSyntheticTailEvidence;

static void vm_program_external_edge(VMState *vm, uint64_t target_vm_ip) {
    (void)vm;
    (void)target_vm_ip;
}

static void vm_program_unknown_entry(VMState *vm, uint64_t vm_ip) {
    (void)vm;
    (void)vm_ip;
}

static void vm_program_synthetic_tail_evidence(VMState *vm, const VMSyntheticTailEvidence *edge) {
    (void)vm;
    (void)edge;
}

/* VM program atlas 30: 0x230722..0x231237 */

static void vmdec_p030_bb_0168(VMState *vm, uint64_t vm_ip);
static void vmdec_p030_bb_0169(VMState *vm, uint64_t vm_ip);
static void vmdec_p030_bb_0170(VMState *vm, uint64_t vm_ip);
static void vmdec_p030_bb_0171(VMState *vm, uint64_t vm_ip);

static void vmdec_p030_bb_0168(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 168: 0x230722..0x230839; rows=74, terminal=exact_instruction */
    /* 0x230722..0x230726: exact_instruction, entry=310, bytes=e8016201; next = 354@0xc2241:1, ip += +0x4; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    /* state preserved: state_preserve */
    next_entry = 354;
    vm_ip += 0x4;
    /* 0x230726..0x230728: exact_instruction, entry=354, bytes=d700; next = 215@0xa4609:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 215;
    vm_ip += 0x2;
    /* 0x230728..0x23072b: exact_instruction, entry=215, bytes=680a88; next = 333@0xbd8af:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x23072b..0x23072f: exact_instruction, entry=333, bytes=c3f99900; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x23072f..0x230733: exact_instruction, entry=347, bytes=fc801c08; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x230733..0x230737: exact_instruction, entry=33, bytes=e8013404; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x230737..0x23073b: exact_instruction, entry=114, bytes=81868e42; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x23073b..0x23073e: exact_instruction, entry=18, bytes=4c0d2a; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x23073e..0x230742: exact_instruction, entry=168, bytes=2a56a6cf; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x230742..0x230746: exact_instruction, entry=26, bytes=26bbe801; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x230746..0x23074a: exact_instruction, entry=268, bytes=189cc268; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x23074a..0x23074d: exact_instruction, entry=199, bytes=5e3539; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x23074d..0x230751: exact_instruction, entry=189, bytes=9cbb5c91; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x230751..0x230755: exact_instruction, entry=315, bytes=e801e9f9; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230755..0x230758: exact_instruction, entry=307, bytes=bed5af; next = 196@0x9fbcd:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 196;
    vm_ip += 0x3;
    /* 0x230758..0x23075c: exact_instruction, entry=196, bytes=def524f1; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x23075c..0x230760: exact_instruction, entry=64, bytes=4bae5325; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x230760..0x230764: exact_instruction, entry=305, bytes=9093e801; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x230764..0x230768: exact_instruction, entry=196, bytes=599fb4ee; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230768..0x23076b: exact_instruction, entry=18, bytes=da14d4; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x23076b..0x23076f: exact_instruction, entry=347, bytes=97017784; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x23076f..0x230773: exact_instruction, entry=287, bytes=28b4e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x230773..0x230777: exact_instruction, entry=340, bytes=74654701; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x230777..0x23077b: exact_instruction, entry=203, bytes=179ae3fa; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x23077b..0x23077e: exact_instruction, entry=66, bytes=ed143a; next = 315@0xb9451:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x23077e..0x230782: exact_instruction, entry=315, bytes=e80149f6; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x230782..0x230785: exact_instruction, entry=199, bytes=2a1d5d; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x230785..0x230789: exact_instruction, entry=43, bytes=422f2e58; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x230789..0x23078d: exact_instruction, entry=114, bytes=9558329c; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x23078d..0x230791: exact_instruction, entry=346, bytes=58e9e801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x230791..0x230795: exact_instruction, entry=347, bytes=e9873b06; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x230795..0x230799: exact_instruction, entry=172, bytes=db397b03; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x230799..0x23079c: exact_instruction, entry=297, bytes=0cbf1c; next = 346@0xc0535:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 346;
    vm_ip += 0x3;
    /* 0x23079c..0x2307a0: exact_instruction, entry=346, bytes=c18fe801; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x2307a0..0x2307a4: exact_instruction, entry=196, bytes=bf4dd4b6; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x2307a4..0x2307a7: exact_instruction, entry=18, bytes=8a4634; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x2307a7..0x2307ab: exact_instruction, entry=189, bytes=8e42ece3; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x2307ab..0x2307af: exact_instruction, entry=243, bytes=7d92e801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x2307af..0x2307b3: exact_instruction, entry=347, bytes=c40e5e02; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x2307b3..0x2307b6: exact_instruction, entry=28, bytes=4005e4; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x2307b6..0x2307ba: exact_instruction, entry=168, bytes=705992d8; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x2307ba..0x2307be: exact_instruction, entry=346, bytes=9a59e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x2307be..0x2307c1: exact_instruction, entry=28, bytes=5801ea; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x2307c1..0x2307c5: exact_instruction, entry=43, bytes=27f9fb8c; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x2307c5..0x2307c9: exact_instruction, entry=64, bytes=74cc5737; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x2307c9..0x2307cd: exact_instruction, entry=26, bytes=acfde801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x2307cd..0x2307d0: exact_instruction, entry=18, bytes=e825b3; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x2307d0..0x2307d4: exact_instruction, entry=189, bytes=50a594e5; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x2307d4..0x2307d8: exact_instruction, entry=196, bytes=97181cf8; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x2307d8..0x2307dc: exact_instruction, entry=315, bytes=e801d1fa; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x2307dc..0x2307e0: exact_instruction, entry=340, bytes=829f9100; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x2307e0..0x2307e3: exact_instruction, entry=185, bytes=7c293a; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x2307e3..0x2307e7: exact_instruction, entry=43, bytes=8954ed29; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x2307e7..0x2307eb: exact_instruction, entry=305, bytes=fbdae801; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x2307eb..0x2307ef: exact_instruction, entry=157, bytes=47cad300; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x2307ef..0x2307f2: exact_instruction, entry=185, bytes=a30f3a; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x2307f2..0x2307f6: exact_instruction, entry=189, bytes=fe5c3cd1; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x2307f6..0x2307fa: exact_instruction, entry=315, bytes=e80171f2; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x2307fa..0x2307fe: exact_instruction, entry=64, bytes=92a32138; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x2307fe..0x230801: exact_instruction, entry=215, bytes=600800; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x230801..0x230805: exact_instruction, entry=268, bytes=8f38dd29; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x230805..0x230809: exact_instruction, entry=243, bytes=e59de801; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x230809..0x23080d: exact_instruction, entry=172, bytes=18b2bb00; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x23080d..0x230811: exact_instruction, entry=337, bytes=1405d544; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230811..0x230814: exact_instruction, entry=307, bytes=5e3db3; next = 305@0xb78b0:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 305;
    vm_ip += 0x3;
    /* 0x230814..0x230818: exact_instruction, entry=305, bytes=90e2e801; next = 338@0xbf128:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 338;
    vm_ip += 0x4;
    /* 0x230818..0x23081e: exact_instruction, entry=338, bytes=04d13d01e801; next = 351@0xc1d48:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x0u) - vm->state - 0x4bf8be0cu;
    next_entry = 351;
    vm_ip += 0x6;
    /* 0x23081e..0x230823: exact_instruction, entry=351, bytes=e801703a10; next = 332@0xbd36d:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) + vm->state - 0x7b3a2d18u;
    next_entry = 332;
    vm_ip += 0x5;
    /* 0x230823..0x230827: exact_instruction, entry=332, bytes=1917f791; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u ^ U16(vm->ip + 0x2u) ^ vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x42097e5du;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230827..0x23082a: exact_instruction, entry=18, bytes=0c4a11; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x23082a..0x23082e: exact_instruction, entry=189, bytes=da5e70e1; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x23082e..0x230832: exact_instruction, entry=196, bytes=51f2e4f8; next = 88@0x8aa14:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 88;
    vm_ip += 0x4;
    /* 0x230832..0x230837: exact_instruction, entry=88, bytes=e5b8553d01; next = 352@0xc1ec4:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags - 0x1c9cfceau ^ U16(vm->ip + 0x1u) + vm->state | vm->flags - 0x1c9cfceau ^ 0x415462f5u;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x230837..0x230839: exact_instruction, entry=352, bytes=2ef6; next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 171;
    vm_ip += 0x2;
    /* terminal CFG edge: fallthrough, target_vm_ip=0x230839, coverage=- */
    vmdec_p030_bb_0169(vm, vm_ip);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p030_bb_0169(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 169: 0x230839..0x230b1b; rows=195, terminal=exact_instruction */
    /* 0x230839..0x23083b: exact_instruction, entry=171, bytes=b900; next = 185@0x9d964:65, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 185;
    vm_ip += 0x2;
    /* 0x23083b..0x23083e: exact_instruction, entry=185, bytes=1bab50; next = 347@0xc088d:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x23083e..0x230842: exact_instruction, entry=347, bytes=23881714; next = 30@0x7e849:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 30;
    vm_ip += 0x4;
    /* 0x230842..0x230846: exact_instruction, entry=30, bytes=8f080549; next = 157@0x98a9a:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags & 0x614d4b17u + 0x64fd160cu;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x230846..0x23084a: exact_instruction, entry=157, bytes=eb37d300; next = 52@0x833c7:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 52;
    vm_ip += 0x4;
    /* 0x23084a..0x23084f: exact_instruction, entry=52, bytes=e64b113d01; next = 64@0x85059:65, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) + vm->state ^ 0x7823b2dau;
    next_entry = 64;
    vm_ip += 0x5;
    /* 0x23084f..0x230853: exact_instruction, entry=64, bytes=84a6be66; next = 199@0xa0631:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x230853..0x230856: exact_instruction, entry=199, bytes=92f195; next = 184@0x9d694:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x230856..0x23085a: exact_instruction, entry=184, bytes=02f3e801; next = 40@0x8115d:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 40;
    vm_ip += 0x4;
    /* 0x23085a..0x230860: exact_instruction, entry=40, bytes=e8013d0162a6; next = 114@0x90319:65, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x4u) ^ vm->state;
    next_entry = 114;
    vm_ip += 0x6;
    /* 0x230860..0x230864: exact_instruction, entry=114, bytes=496be620; next = 66@0x855ff:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230864..0x230867: exact_instruction, entry=66, bytes=15b7dc; next = 176@0x9c10b:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x230867..0x23086b: exact_instruction, entry=176, bytes=e801697b; next = 258@0xadf2c:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x23086b..0x23086f: exact_instruction, entry=258, bytes=0057e4b3; next = 18@0x7be9b:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x23086f..0x230872: exact_instruction, entry=18, bytes=282636; next = 161@0x9975a:65, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x230872..0x230876: exact_instruction, entry=161, bytes=aa75e801; next = 215@0xa4609:65, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x230876..0x230879: exact_instruction, entry=215, bytes=e80568; next = 189@0x9e7af:65, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x230879..0x23087d: exact_instruction, entry=189, bytes=ec9dd0a4; next = 176@0x9c10b:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x23087d..0x230881: exact_instruction, entry=176, bytes=e8016247; next = 114@0x90319:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x230881..0x230885: exact_instruction, entry=114, bytes=1b21845b; next = 66@0x855ff:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230885..0x230888: exact_instruction, entry=66, bytes=5dd22e; next = 123@0x91a59:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x230888..0x23088c: exact_instruction, entry=123, bytes=307de801; next = 337@0xbec0e:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x23088c..0x230890: exact_instruction, entry=337, bytes=0c868048; next = 215@0xa4609:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x230890..0x230893: exact_instruction, entry=215, bytes=08055f; next = 161@0x9975a:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x230893..0x230897: exact_instruction, entry=161, bytes=4dcfe801; next = 28@0x7e390:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230897..0x23089a: exact_instruction, entry=28, bytes=100851; next = 258@0xadf2c:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x23089a..0x23089e: exact_instruction, entry=258, bytes=d90d4b31; next = 123@0x91a59:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x23089e..0x2308a2: exact_instruction, entry=123, bytes=0631e801; next = 337@0xbec0e:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x2308a2..0x2308a6: exact_instruction, entry=337, bytes=088eb693; next = 185@0x9d964:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x2308a6..0x2308a9: exact_instruction, entry=185, bytes=c3fb3a; next = 161@0x9975a:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x2308a9..0x2308ad: exact_instruction, entry=161, bytes=f9d7e801; next = 337@0xbec0e:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x2308ad..0x2308b1: exact_instruction, entry=337, bytes=07835d00; next = 297@0xb64d7:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x2308b1..0x2308b4: exact_instruction, entry=297, bytes=8b2309; next = 174@0x9bd8f:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x2308b4..0x2308b8: exact_instruction, entry=174, bytes=f069e801; next = 64@0x85059:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x2308b8..0x2308bc: exact_instruction, entry=64, bytes=e0e61200; next = 199@0xa0631:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x2308bc..0x2308bf: exact_instruction, entry=199, bytes=feabd1; next = 161@0x9975a:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x2308bf..0x2308c3: exact_instruction, entry=161, bytes=89d6e801; next = 258@0xadf2c:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x2308c3..0x2308c7: exact_instruction, entry=258, bytes=fa98121a; next = 297@0xb64d7:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x2308c7..0x2308ca: exact_instruction, entry=297, bytes=114d45; next = 184@0x9d694:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x2308ca..0x2308ce: exact_instruction, entry=184, bytes=d2f1e801; next = 28@0x7e390:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x2308ce..0x2308d1: exact_instruction, entry=28, bytes=e80510; next = 189@0x9e7af:65, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x2308d1..0x2308d5: exact_instruction, entry=189, bytes=2cb26ce7; next = 161@0x9975a:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x2308d5..0x2308d9: exact_instruction, entry=161, bytes=aa79e801; next = 347@0xc088d:65, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x2308d9..0x2308dd: exact_instruction, entry=347, bytes=e508af80; next = 18@0x7be9b:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x2308dd..0x2308e0: exact_instruction, entry=18, bytes=a0107a; next = 20@0x7c62b:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0x2308e0..0x2308e4: exact_instruction, entry=20, bytes=e8012177; next = 258@0xadf2c:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x2308e4..0x2308e8: exact_instruction, entry=258, bytes=34231deb; next = 297@0xb64d7:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x2308e8..0x2308eb: exact_instruction, entry=297, bytes=213e17; next = 174@0x9bd8f:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x2308eb..0x2308ef: exact_instruction, entry=174, bytes=67ace801; next = 189@0x9e7af:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x2308ef..0x2308f3: exact_instruction, entry=189, bytes=04a840e4; next = 28@0x7e390:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x2308f3..0x2308f6: exact_instruction, entry=28, bytes=f0040e; next = 158@0x99029:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 158;
    vm_ip += 0x3;
    /* 0x2308f6..0x2308fa: exact_instruction, entry=158, bytes=e80160d9; next = 64@0x85059:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x2308fa..0x2308fe: exact_instruction, entry=64, bytes=dab1f8f4; next = 215@0xa4609:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x2308fe..0x230901: exact_instruction, entry=215, bytes=c0057b; next = 184@0x9d694:65, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x230901..0x230905: exact_instruction, entry=184, bytes=d4ebe801; next = 102@0x8d71d:65, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 102;
    vm_ip += 0x4;
    /* 0x230905..0x230912: exact_instruction, entry=102, bytes=474e040080003d0189e801b994; next = 268@0xb0007:64, ip += +0xd; dispatch_model=affine_robust_fallback; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    /* state preserved: state_preserve */
    next_entry = 268;
    vm_ip += 0xd;
    /* 0x230912..0x230916: exact_instruction, entry=268, bytes=ddba2e68; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x230916..0x230919: exact_instruction, entry=185, bytes=86093a; next = 347@0xc088d:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x230919..0x23091d: exact_instruction, entry=347, bytes=c5836f20; next = 254@0xad32c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 254;
    vm_ip += 0x4;
    /* 0x23091d..0x230921: exact_instruction, entry=254, bytes=6b7c2a43; next = 49@0x82820:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) ^ vm->state + vm->flags | vm->flags | 0x617339d9u | 0x5635509u | 0x15874263u ^ 0x5bf4e999u & vm->flags - 0x35a18ac8u | 0x5feb6979u & 0x3e80b852u | U16(vm->ip + 0x2u) - 0x228a41a2u;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0x230921..0x230926: exact_instruction, entry=49, bytes=0068de3d01; next = 108@0x8f24b:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x230926..0x230928: exact_instruction, entry=108, bytes=2863; next = 345@0xc02e4:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 345;
    vm_ip += 0x2;
    /* 0x230928..0x23092e: exact_instruction, entry=345, bytes=cb7b753282e4; next = 114@0x90319:64, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags + U16(vm->ip + 0x0u) + vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags;
    next_entry = 114;
    vm_ip += 0x6;
    /* 0x23092e..0x230932: exact_instruction, entry=114, bytes=5677a628; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x230932..0x230935: exact_instruction, entry=185, bytes=2c9e3a; next = 196@0x9fbcd:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 196;
    vm_ip += 0x3;
    /* 0x230935..0x230939: exact_instruction, entry=196, bytes=256eac05; next = 237@0xa8e1f:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 237;
    vm_ip += 0x4;
    /* 0x230939..0x23093e: exact_instruction, entry=237, bytes=0050983d01; next = 352@0xc1ec4:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x23093e..0x230940: exact_instruction, entry=352, bytes=5807; next = 208@0xa2361:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 208;
    vm_ip += 0x2;
    /* 0x230940..0x230945: exact_instruction, entry=208, bytes=6258af2dd6; next = 340@0xbf435:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du - U16(vm->ip + 0x3u) - vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du;
    next_entry = 340;
    vm_ip += 0x5;
    /* 0x230945..0x230949: exact_instruction, entry=340, bytes=08cbb300; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230949..0x23094c: exact_instruction, entry=18, bytes=e02a7a; next = 268@0xb0007:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x23094c..0x230950: exact_instruction, entry=268, bytes=63fa6d23; next = 49@0x82820:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0x230950..0x230955: exact_instruction, entry=49, bytes=0038a53d01; next = 108@0x8f24b:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x230955..0x230957: exact_instruction, entry=108, bytes=cc90; next = 307@0xb8064:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 307;
    vm_ip += 0x2;
    /* 0x230957..0x23095a: exact_instruction, entry=307, bytes=8e55b4; next = 340@0xbf435:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x23095a..0x23095e: exact_instruction, entry=340, bytes=d4936800; next = 203@0xa1484:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x23095e..0x230962: exact_instruction, entry=203, bytes=6791457b; next = 300@0xb6c36:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 300;
    vm_ip += 0x4;
    /* 0x230962..0x230966: exact_instruction, entry=300, bytes=8f825542; next = 301@0xb708d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u ^ U16(vm->ip + 0x2u) - vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    next_entry = 301;
    vm_ip += 0x4;
    /* 0x230966..0x23096b: exact_instruction, entry=301, bytes=003d01df20; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x23096b..0x23096d: exact_instruction, entry=160, bytes=e92b; next = 43@0x8173d:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 43;
    vm_ip += 0x2;
    /* 0x23096d..0x230971: exact_instruction, entry=43, bytes=ccf5b08b; next = 340@0xbf435:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x230971..0x230975: exact_instruction, entry=340, bytes=f4a06800; next = 239@0xa991e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 239;
    vm_ip += 0x4;
    /* 0x230975..0x23097b: exact_instruction, entry=239, bytes=2f4c8138f6a8; next = 297@0xb64d7:64, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - U16(vm->ip + 0x4u) + vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - 0x3650a0aeu;
    next_entry = 297;
    vm_ip += 0x6;
    /* 0x23097b..0x23097e: exact_instruction, entry=297, bytes=59cef8; next = 192@0x9f00a:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 192;
    vm_ip += 0x3;
    /* 0x23097e..0x230983: exact_instruction, entry=192, bytes=ad0d3d0100; next = 108@0x8f24b:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu - U16(vm->ip + 0x0u) ^ vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x230983..0x230985: exact_instruction, entry=108, bytes=7ae1; next = 208@0xa2361:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 208;
    vm_ip += 0x2;
    /* 0x230985..0x23098a: exact_instruction, entry=208, bytes=62e8671553; next = 297@0xb64d7:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du - U16(vm->ip + 0x3u) - vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du;
    next_entry = 297;
    vm_ip += 0x5;
    /* 0x23098a..0x23098d: exact_instruction, entry=297, bytes=6ee182; next = 268@0xb0007:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x23098d..0x230991: exact_instruction, entry=268, bytes=3a6b1630; next = 337@0xbec0e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x230991..0x230995: exact_instruction, entry=337, bytes=4c7c0c08; next = 301@0xb708d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 301;
    vm_ip += 0x4;
    /* 0x230995..0x23099a: exact_instruction, entry=301, bytes=003d010b10; next = 352@0xc1ec4:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x23099a..0x23099c: exact_instruction, entry=352, bytes=6efb; next = 307@0xb8064:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 307;
    vm_ip += 0x2;
    /* 0x23099c..0x23099f: exact_instruction, entry=307, bytes=043db4; next = 337@0xbec0e:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x23099f..0x2309a3: exact_instruction, entry=337, bytes=dc61a3e0; next = 268@0xb0007:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x2309a3..0x2309a7: exact_instruction, entry=268, bytes=e2941e66; next = 127@0x926c3:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 127;
    vm_ip += 0x4;
    /* 0x2309a7..0x2309ac: exact_instruction, entry=127, bytes=7bc7793d01; next = 144@0x95887:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x0u) - vm->state + 0xf376a6au;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x2309ac..0x2309ae: exact_instruction, entry=144, bytes=ff98; next = 268@0xb0007:64, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 268;
    vm_ip += 0x2;
    /* 0x2309ae..0x2309b2: exact_instruction, entry=268, bytes=26435a65; next = 114@0x90319:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x2309b2..0x2309b6: exact_instruction, entry=114, bytes=9643398b; next = 215@0xa4609:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x2309b6..0x2309b9: exact_instruction, entry=215, bytes=880816; next = 273@0xb11ca:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 273;
    vm_ip += 0x3;
    /* 0x2309b9..0x2309bd: exact_instruction, entry=273, bytes=1ba80e33; next = 82@0x8920e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags | U16(vm->ip + 0x0u) + vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags - 0x2e0be660u;
    next_entry = 82;
    vm_ip += 0x4;
    /* 0x2309bd..0x2309c0: exact_instruction, entry=82, bytes=3eb162; next = 99@0x8c99a:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + 0x1bc90d20u | 0x2d688b3eu - U16(vm->ip + 0x0u) + vm->state + vm->flags + 0x1bc90d20u | 0x2d688b3eu + 0x5cc5e4d8u;
    next_entry = 99;
    vm_ip += 0x3;
    /* 0x2309c0..0x2309c5: exact_instruction, entry=99, bytes=00df5e3d01; next = 198@0xa037e:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x1u) ^ vm->state - 0x48503105u;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0x2309c5..0x2309c7: exact_instruction, entry=198, bytes=4a6d; next = 300@0xb6c36:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 300;
    vm_ip += 0x2;
    /* 0x2309c7..0x2309cb: exact_instruction, entry=300, bytes=a763ef5c; next = 64@0x85059:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u ^ U16(vm->ip + 0x2u) - vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x2309cb..0x2309cf: exact_instruction, entry=64, bytes=ce03971c; next = 215@0xa4609:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x2309cf..0x2309d2: exact_instruction, entry=215, bytes=680a5b; next = 333@0xbd8af:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x2309d2..0x2309d6: exact_instruction, entry=333, bytes=37e96800; next = 301@0xb708d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 301;
    vm_ip += 0x4;
    /* 0x2309d6..0x2309db: exact_instruction, entry=301, bytes=003d01df71; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x2309db..0x2309dd: exact_instruction, entry=160, bytes=f922; next = 333@0xbd8af:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 333;
    vm_ip += 0x2;
    /* 0x2309dd..0x2309e1: exact_instruction, entry=333, bytes=770a6800; next = 337@0xbec0e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x2309e1..0x2309e5: exact_instruction, entry=337, bytes=2810f1f5; next = 199@0xa0631:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x2309e5..0x2309e8: exact_instruction, entry=199, bytes=0fb30a; next = 345@0xc02e4:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 345;
    vm_ip += 0x3;
    /* 0x2309e8..0x2309ee: exact_instruction, entry=345, bytes=d008cc3a74e3; next = 192@0x9f00a:64, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags + U16(vm->ip + 0x0u) + vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags;
    next_entry = 192;
    vm_ip += 0x6;
    /* 0x2309ee..0x2309f3: exact_instruction, entry=192, bytes=32c73d0100; next = 256@0xad849:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu - U16(vm->ip + 0x0u) ^ vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x2309f3..0x2309f5: exact_instruction, entry=256, bytes=2533; next = 273@0xb11ca:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 273;
    vm_ip += 0x2;
    /* 0x2309f5..0x2309f9: exact_instruction, entry=273, bytes=ade81b3f; next = 105@0x8e6b4:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags | U16(vm->ip + 0x0u) + vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags - 0x2e0be660u;
    next_entry = 105;
    vm_ip += 0x4;
    /* 0x2309f9..0x2309fe: exact_instruction, entry=105, bytes=c226180962; next = 291@0xb4edd:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ 0x6808cf40u - 0x72c2e29bu & U16(vm->ip + 0x0u) + vm->state & vm->flags ^ 0x6808cf40u - 0x72c2e29bu + vm->flags ^ 0x6808cf40u - 0x72c2e29bu - U16(vm->ip + 0x2u);
    next_entry = 291;
    vm_ip += 0x5;
    /* 0x2309fe..0x230a02: exact_instruction, entry=291, bytes=87333b18; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ U16(vm->ip + 0x0u) - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu | 0x55d764bbu ^ 0x17a0094au - 0x1f6881d8u | U16(vm->ip + 0x2u) + vm->state ^ vm->flags ^ U16(vm->ip + 0x0u) - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu | 0x55d764bbu ^ 0x17a0094au - 0x1f6881d8u + 0xa61c44cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230a02..0x230a05: exact_instruction, entry=18, bytes=d94e22; next = 269@0xb045b:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 269;
    vm_ip += 0x3;
    /* 0x230a05..0x230a0a: exact_instruction, entry=269, bytes=003d0150c3; next = 108@0x8f24b:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + U16(vm->ip + 0x3u) + vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + 0x4faa382u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x230a0a..0x230a0c: exact_instruction, entry=108, bytes=6c3f; next = 28@0x7e390:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 28;
    vm_ip += 0x2;
    /* 0x230a0c..0x230a0f: exact_instruction, entry=28, bytes=d80a6f; next = 347@0xc088d:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x230a0f..0x230a13: exact_instruction, entry=347, bytes=5e826c00; next = 268@0xb0007:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x230a13..0x230a17: exact_instruction, entry=268, bytes=e0ad79b1; next = 154@0x97ce6:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 154;
    vm_ip += 0x4;
    /* 0x230a17..0x230a1b: exact_instruction, entry=154, bytes=4df4e37d; next = 49@0x82820:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0x230a1b..0x230a20: exact_instruction, entry=49, bytes=0030843d01; next = 198@0xa037e:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0x230a20..0x230a22: exact_instruction, entry=198, bytes=a351; next = 332@0xbd36d:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 332;
    vm_ip += 0x2;
    /* 0x230a22..0x230a26: exact_instruction, entry=332, bytes=7397f706; next = 258@0xadf2c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u ^ U16(vm->ip + 0x2u) ^ vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x42097e5du;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x230a26..0x230a2a: exact_instruction, entry=258, bytes=888eb3c9; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x230a2a..0x230a2d: exact_instruction, entry=185, bytes=e3ae3a; next = 203@0xa1484:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 203;
    vm_ip += 0x3;
    /* 0x230a2d..0x230a31: exact_instruction, entry=203, bytes=0792159a; next = 320@0xbada5:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 320;
    vm_ip += 0x4;
    /* 0x230a31..0x230a36: exact_instruction, entry=320, bytes=003d01e839; next = 256@0xad849:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags - vm->flags - 0x7e143884u;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x230a36..0x230a38: exact_instruction, entry=256, bytes=f217; next = 268@0xb0007:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 268;
    vm_ip += 0x2;
    /* 0x230a38..0x230a3c: exact_instruction, entry=268, bytes=3c09c6e8; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230a3c..0x230a3f: exact_instruction, entry=28, bytes=1008c3; next = 258@0xadf2c:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x230a3f..0x230a43: exact_instruction, entry=258, bytes=e471594b; next = 208@0xa2361:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 208;
    vm_ip += 0x4;
    /* 0x230a43..0x230a48: exact_instruction, entry=208, bytes=621f11950a; next = 49@0x82820:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du - U16(vm->ip + 0x3u) - vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du;
    next_entry = 49;
    vm_ip += 0x5;
    /* 0x230a48..0x230a4d: exact_instruction, entry=49, bytes=009e393d01; next = 144@0x95887:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x230a4d..0x230a4f: exact_instruction, entry=144, bytes=5794; next = 157@0x98a9a:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 157;
    vm_ip += 0x2;
    /* 0x230a4f..0x230a53: exact_instruction, entry=157, bytes=1f2fb300; next = 154@0x97ce6:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 154;
    vm_ip += 0x4;
    /* 0x230a53..0x230a57: exact_instruction, entry=154, bytes=77e7716d; next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x230a57..0x230a5a: exact_instruction, entry=297, bytes=09e6df; next = 337@0xbec0e:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x230a5a..0x230a5e: exact_instruction, entry=337, bytes=b0bc9871; next = 3@0x78c77:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 3;
    vm_ip += 0x4;
    /* 0x230a5e..0x230a63: exact_instruction, entry=3, bytes=8105003d01; next = 173@0x9ba74:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu ^ U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu + 0x4bc0d288u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x230a63..0x230a65: exact_instruction, entry=173, bytes=f708; next = 297@0xb64d7:64, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 297;
    vm_ip += 0x2;
    /* 0x230a65..0x230a68: exact_instruction, entry=297, bytes=31ad62; next = 340@0xbf435:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x230a68..0x230a6c: exact_instruction, entry=340, bytes=6020b300; next = 158@0x99029:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0x230a6c..0x230a70: exact_instruction, entry=158, bytes=e80145fe; next = 261@0xaeda2:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 261;
    vm_ip += 0x4;
    /* 0x230a70..0x230a76: exact_instruction, entry=261, bytes=e801af6d3d01; next = 347@0xc088d:64, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x2u) + 0x4c539d29u;
    next_entry = 347;
    vm_ip += 0x6;
    /* 0x230a76..0x230a7a: exact_instruction, entry=347, bytes=96867a07; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x230a7a..0x230a7d: exact_instruction, entry=185, bytes=34043a; next = 158@0x99029:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0x230a7d..0x230a81: exact_instruction, entry=158, bytes=e801f4e2; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230a81..0x230a84: exact_instruction, entry=307, bytes=f955b4; next = 340@0xbf435:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x230a84..0x230a88: exact_instruction, entry=340, bytes=dc2a7900; next = 174@0x9bd8f:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x230a88..0x230a8c: exact_instruction, entry=174, bytes=ffeee801; next = 347@0xc088d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x230a8c..0x230a90: exact_instruction, entry=347, bytes=2688da04; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230a90..0x230a93: exact_instruction, entry=307, bytes=fa25af; next = 174@0x9bd8f:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x230a93..0x230a97: exact_instruction, entry=174, bytes=439ce801; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x230a97..0x230a9a: exact_instruction, entry=185, bytes=7ce63a; next = 337@0xbec0e:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x230a9a..0x230a9e: exact_instruction, entry=337, bytes=14eb9511; next = 123@0x91a59:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x230a9e..0x230aa2: exact_instruction, entry=123, bytes=3c1be801; next = 114@0x90319:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x230aa2..0x230aa6: exact_instruction, entry=114, bytes=ed8b92cf; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230aa6..0x230aa9: exact_instruction, entry=307, bytes=4235af; next = 176@0x9c10b:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x230aa9..0x230aad: exact_instruction, entry=176, bytes=e801f2b5; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230aad..0x230ab0: exact_instruction, entry=307, bytes=428db4; next = 347@0xc088d:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x230ab0..0x230ab4: exact_instruction, entry=347, bytes=94851e29; next = 174@0x9bd8f:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x230ab4..0x230ab8: exact_instruction, entry=174, bytes=4937e801; next = 347@0xc088d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x230ab8..0x230abc: exact_instruction, entry=347, bytes=7e0a1a82; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230abc..0x230abf: exact_instruction, entry=18, bytes=d815fa; next = 123@0x91a59:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x230abf..0x230ac3: exact_instruction, entry=123, bytes=ae37e801; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x230ac3..0x230ac6: exact_instruction, entry=185, bytes=98fe3a; next = 347@0xc088d:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x230ac6..0x230aca: exact_instruction, entry=347, bytes=960abc80; next = 161@0x9975a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x230aca..0x230ace: exact_instruction, entry=161, bytes=0951e801; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230ace..0x230ad1: exact_instruction, entry=66, bytes=732368; next = 64@0x85059:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x230ad1..0x230ad5: exact_instruction, entry=64, bytes=9b422380; next = 184@0x9d694:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0x230ad5..0x230ad9: exact_instruction, entry=184, bytes=c291e801; next = 64@0x85059:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x230ad9..0x230add: exact_instruction, entry=64, bytes=5d5b37ff; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230add..0x230ae0: exact_instruction, entry=28, bytes=700546; next = 174@0x9bd8f:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x230ae0..0x230ae4: exact_instruction, entry=174, bytes=180fe801; next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x230ae4..0x230ae7: exact_instruction, entry=297, bytes=fd59ea; next = 347@0xc088d:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x230ae7..0x230aeb: exact_instruction, entry=347, bytes=c7883bc2; next = 161@0x9975a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x230aeb..0x230aef: exact_instruction, entry=161, bytes=b2d5e801; next = 215@0xa4609:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x230aef..0x230af2: exact_instruction, entry=215, bytes=880ac8; next = 337@0xbec0e:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x230af2..0x230af6: exact_instruction, entry=337, bytes=c0f4b10a; next = 176@0x9c10b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x230af6..0x230afa: exact_instruction, entry=176, bytes=e801ca18; next = 189@0x9e7af:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x230afa..0x230afe: exact_instruction, entry=189, bytes=89000cef; next = 215@0xa4609:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x230afe..0x230b01: exact_instruction, entry=215, bytes=a00048; next = 20@0x7c62b:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 20;
    vm_ip += 0x3;
    /* 0x230b01..0x230b05: exact_instruction, entry=20, bytes=e80131fd; next = 64@0x85059:64, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x230b05..0x230b09: exact_instruction, entry=64, bytes=904ac637; next = 199@0xa0631:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x230b09..0x230b0c: exact_instruction, entry=199, bytes=6affa5; next = 176@0x9c10b:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x230b0c..0x230b10: exact_instruction, entry=176, bytes=e8010ad2; next = 337@0xbec0e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x230b10..0x230b14: exact_instruction, entry=337, bytes=809989c6; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230b14..0x230b17: exact_instruction, entry=28, bytes=d80376; next = 123@0x91a59:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x230b17..0x230b1b: exact_instruction, entry=123, bytes=564de801; next = 50@0x82e76:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 50;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x230b1b, coverage=hidden_span_of_17:64 */
    {
        static const VMSyntheticTailEvidence tail = {
            UINT64_C(0x230b17),
            UINT64_C(0x230b1b),
            123u,
            50u,
            "covered_synthetic_fallthrough",
            "hidden_span_of_17:64",
            "next = 50@0x82e76:64, ip += +0x4; dispatch_model=static_100; state=state_add_const",
        };
        vm_program_synthetic_tail_evidence(vm, &tail);
    }
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p030_bb_0170(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 170: 0x230b2c..0x230e07; rows=195, terminal=exact_instruction */
    /* 0x230b2c..0x230b2e: exact_instruction, entry=171, bytes=c400; next = 196@0x9fbcd:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 196;
    vm_ip += 0x2;
    /* 0x230b2e..0x230b32: exact_instruction, entry=196, bytes=4f6e0cf4; next = 189@0x9e7af:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x230b32..0x230b36: exact_instruction, entry=189, bytes=9cf844e0; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230b36..0x230b39: exact_instruction, entry=28, bytes=d80992; next = 315@0xb9451:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x230b39..0x230b3d: exact_instruction, entry=315, bytes=e80139f9; next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x230b3d..0x230b40: exact_instruction, entry=297, bytes=0313a3; next = 268@0xb0007:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x230b40..0x230b44: exact_instruction, entry=268, bytes=f7f67168; next = 189@0x9e7af:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x230b44..0x230b48: exact_instruction, entry=189, bytes=c3045cd7; next = 287@0xb45d2:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x230b48..0x230b4c: exact_instruction, entry=287, bytes=2a47e801; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230b4c..0x230b4f: exact_instruction, entry=307, bytes=bab5ab; next = 64@0x85059:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x230b4f..0x230b53: exact_instruction, entry=64, bytes=b5198978; next = 268@0xb0007:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x230b53..0x230b57: exact_instruction, entry=268, bytes=ec45762c; next = 346@0xc0535:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x230b57..0x230b5b: exact_instruction, entry=346, bytes=0e97e801; next = 114@0x90319:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x230b5b..0x230b5f: exact_instruction, entry=114, bytes=0758909f; next = 196@0x9fbcd:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x230b5f..0x230b63: exact_instruction, entry=196, bytes=024234c0; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230b63..0x230b66: exact_instruction, entry=66, bytes=5a8018; next = 243@0xaab6a:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 243;
    vm_ip += 0x3;
    /* 0x230b66..0x230b6a: exact_instruction, entry=243, bytes=559be801; next = 114@0x90319:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x230b6a..0x230b6e: exact_instruction, entry=114, bytes=e16a36ad; next = 199@0xa0631:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x230b6e..0x230b71: exact_instruction, entry=199, bytes=0f0e7a; next = 172@0x9b68a:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 172;
    vm_ip += 0x3;
    /* 0x230b71..0x230b75: exact_instruction, entry=172, bytes=44efcb02; next = 287@0xb45d2:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x230b75..0x230b79: exact_instruction, entry=287, bytes=069ee801; next = 172@0x9b68a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x230b79..0x230b7d: exact_instruction, entry=172, bytes=4999a30a; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230b7d..0x230b80: exact_instruction, entry=18, bytes=e01d9e; next = 114@0x90319:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x230b80..0x230b84: exact_instruction, entry=114, bytes=bd7b3240; next = 315@0xb9451:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x230b84..0x230b88: exact_instruction, entry=315, bytes=e80161f8; next = 258@0xadf2c:64, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x230b88..0x230b8c: exact_instruction, entry=258, bytes=0d197176; next = 199@0xa0631:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x230b8c..0x230b8f: exact_instruction, entry=199, bytes=9e6ce9; next = 43@0x8173d:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x230b8f..0x230b93: exact_instruction, entry=43, bytes=4e559a29; next = 287@0xb45d2:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x230b93..0x230b97: exact_instruction, entry=287, bytes=6a94e801; next = 347@0xc088d:64, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x230b97..0x230b9b: exact_instruction, entry=347, bytes=550bfb02; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230b9b..0x230b9e: exact_instruction, entry=18, bytes=20183e; next = 196@0x9fbcd:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 196;
    vm_ip += 0x3;
    /* 0x230b9e..0x230ba2: exact_instruction, entry=196, bytes=79c1ccff; next = 305@0xb78b0:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x230ba2..0x230ba6: exact_instruction, entry=305, bytes=56f5e801; next = 203@0xa1484:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x230ba6..0x230baa: exact_instruction, entry=203, bytes=df92cf99; next = 347@0xc088d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x230baa..0x230bae: exact_instruction, entry=347, bytes=86825842; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230bae..0x230bb1: exact_instruction, entry=307, bytes=bc85aa; next = 26@0x7dbbb:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 26;
    vm_ip += 0x3;
    /* 0x230bb1..0x230bb5: exact_instruction, entry=26, bytes=2694e801; next = 268@0xb0007:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x230bb5..0x230bb9: exact_instruction, entry=268, bytes=acc50a64; next = 64@0x85059:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x230bb9..0x230bbd: exact_instruction, entry=64, bytes=2b0b1cd3; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x230bbd..0x230bc0: exact_instruction, entry=185, bytes=fb143a; next = 315@0xb9451:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x230bc0..0x230bc4: exact_instruction, entry=315, bytes=e801e1f3; next = 114@0x90319:64, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x230bc4..0x230bc8: exact_instruction, entry=114, bytes=c06fa7bb; next = 43@0x8173d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x230bc8..0x230bcc: exact_instruction, entry=43, bytes=d4336847; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230bcc..0x230bcf: exact_instruction, entry=28, bytes=d00aa8; next = 346@0xc0535:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 346;
    vm_ip += 0x3;
    /* 0x230bcf..0x230bd3: exact_instruction, entry=346, bytes=3490e801; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230bd3..0x230bd6: exact_instruction, entry=28, bytes=e805a5; next = 189@0x9e7af:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x230bd6..0x230bda: exact_instruction, entry=189, bytes=8225c49a; next = 268@0xb0007:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x230bda..0x230bde: exact_instruction, entry=268, bytes=c609026a; next = 243@0xaab6a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x230bde..0x230be2: exact_instruction, entry=243, bytes=d51ae801; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230be2..0x230be5: exact_instruction, entry=66, bytes=b90e0a; next = 43@0x8173d:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x230be5..0x230be9: exact_instruction, entry=43, bytes=73f3c78d; next = 347@0xc088d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x230be9..0x230bed: exact_instruction, entry=347, bytes=14822001; next = 243@0xaab6a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x230bed..0x230bf1: exact_instruction, entry=243, bytes=459ae801; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230bf1..0x230bf4: exact_instruction, entry=28, bytes=e80570; next = 189@0x9e7af:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x230bf4..0x230bf8: exact_instruction, entry=189, bytes=34f148e6; next = 157@0x98a9a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x230bf8..0x230bfc: exact_instruction, entry=157, bytes=0b45d300; next = 346@0xc0535:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x230bfc..0x230c00: exact_instruction, entry=346, bytes=a04ae801; next = 157@0x98a9a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x230c00..0x230c04: exact_instruction, entry=157, bytes=8b837900; next = 258@0xadf2c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x230c04..0x230c08: exact_instruction, entry=258, bytes=8ac3ef91; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230c08..0x230c0b: exact_instruction, entry=66, bytes=d7903a; next = 315@0xb9451:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x230c0b..0x230c0f: exact_instruction, entry=315, bytes=e80149f6; next = 199@0xa0631:64, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x230c0f..0x230c12: exact_instruction, entry=199, bytes=7f05d2; next = 340@0xbf435:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x230c12..0x230c16: exact_instruction, entry=340, bytes=dc62b300; next = 333@0xbd8af:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x230c16..0x230c1a: exact_instruction, entry=333, bytes=5bf7b300; next = 243@0xaab6a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x230c1a..0x230c1e: exact_instruction, entry=243, bytes=5592e801; next = 338@0xbf128:64, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 338;
    vm_ip += 0x4;
    /* 0x230c1e..0x230c24: exact_instruction, entry=338, bytes=94d13d01e801; next = 283@0xb3612:64, ip += +0x6; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x0u) - vm->state - 0x4bf8be0cu;
    next_entry = 283;
    vm_ip += 0x6;
    /* 0x230c24..0x230c29: exact_instruction, entry=283, bytes=10e801c462; next = 258@0xadf2c:64, ip += +0x5; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    /* state preserved: state_preserve */
    next_entry = 258;
    vm_ip += 0x5;
    /* 0x230c29..0x230c2d: exact_instruction, entry=258, bytes=2ec0e775; next = 168@0x9aa83:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x230c2d..0x230c31: exact_instruction, entry=168, bytes=6856bed6; next = 254@0xad32c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 254;
    vm_ip += 0x4;
    /* 0x230c31..0x230c35: exact_instruction, entry=254, bytes=99c88242; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) ^ vm->state + vm->flags | vm->flags | 0x617339d9u | 0x5635509u | 0x15874263u ^ 0x5bf4e999u & vm->flags - 0x35a18ac8u | 0x5feb6979u & 0x3e80b852u | U16(vm->ip + 0x2u) - 0x228a41a2u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230c35..0x230c38: exact_instruction, entry=28, bytes=f80906; next = 319@0xba72f:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 319;
    vm_ip += 0x3;
    /* 0x230c38..0x230c3d: exact_instruction, entry=319, bytes=3d017e2b73; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + U16(vm->ip + 0x2u) + vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + 0x7f20b820u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x230c3d..0x230c3f: exact_instruction, entry=160, bytes=792f; next = 189@0x9e7af:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 189;
    vm_ip += 0x2;
    /* 0x230c3f..0x230c43: exact_instruction, entry=189, bytes=f842c4d4; next = 332@0xbd36d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 332;
    vm_ip += 0x4;
    /* 0x230c43..0x230c47: exact_instruction, entry=332, bytes=93d7f3cc; next = 43@0x8173d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u ^ U16(vm->ip + 0x2u) ^ vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x42097e5du;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x230c47..0x230c4b: exact_instruction, entry=43, bytes=b339574e; next = 129@0x92f21:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 129;
    vm_ip += 0x4;
    /* 0x230c4b..0x230c4e: exact_instruction, entry=129, bytes=f00662; next = 215@0xa4609:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x77ecded8u + 0x14f8aa88u + 0x5f119f37u + vm->flags + vm->state & vm->flags | 0x77ecded8u + 0x14f8aa88u + 0x5f119f37u - 0x42c8b2fau - 0x3f4e9109u + 0x5d5f2ae2u & 0x63b683du & U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x77ecded8u + 0x14f8aa88u + 0x5f119f37u + vm->flags + vm->state & vm->flags | 0x77ecded8u + 0x14f8aa88u + 0x5f119f37u - 0x42c8b2fau - 0x3f4e9109u + 0x5d5f2ae2u & 0x63b683du;
    next_entry = 215;
    vm_ip += 0x3;
    /* 0x230c4e..0x230c51: exact_instruction, entry=215, bytes=c8061e; next = 217@0xa4b11:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 217;
    vm_ip += 0x3;
    /* 0x230c51..0x230c56: exact_instruction, entry=217, bytes=000cc23d01; next = 198@0xa037e:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0x230c56..0x230c58: exact_instruction, entry=198, bytes=aadb; next = 258@0xadf2c:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 258;
    vm_ip += 0x2;
    /* 0x230c58..0x230c5c: exact_instruction, entry=258, bytes=7ae87a97; next = 30@0x7e849:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 30;
    vm_ip += 0x4;
    /* 0x230c5c..0x230c60: exact_instruction, entry=30, bytes=b652a300; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags & 0x614d4b17u + 0x64fd160cu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230c60..0x230c63: exact_instruction, entry=307, bytes=9615b2; next = 268@0xb0007:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x230c63..0x230c67: exact_instruction, entry=268, bytes=b12cc663; next = 49@0x82820:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0x230c67..0x230c6c: exact_instruction, entry=49, bytes=009e263d01; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x230c6c..0x230c6e: exact_instruction, entry=160, bytes=2823; next = 307@0xb8064:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 307;
    vm_ip += 0x2;
    /* 0x230c6e..0x230c71: exact_instruction, entry=307, bytes=b245ad; next = 114@0x90319:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x230c71..0x230c75: exact_instruction, entry=114, bytes=6a98a35d; next = 124@0x91e81:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 124;
    vm_ip += 0x4;
    /* 0x230c75..0x230c7b: exact_instruction, entry=124, bytes=5b4e00a04fc4; next = 157@0x98a9a:64, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u - U16(vm->ip + 0x4u) + vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ 0x3654c1a7u;
    next_entry = 157;
    vm_ip += 0x6;
    /* 0x230c7b..0x230c7f: exact_instruction, entry=157, bytes=53c26800; next = 319@0xba72f:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 319;
    vm_ip += 0x4;
    /* 0x230c7f..0x230c84: exact_instruction, entry=319, bytes=3d01e62b00; next = 173@0x9ba74:64, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + U16(vm->ip + 0x2u) + vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + 0x7f20b820u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x230c84..0x230c86: exact_instruction, entry=173, bytes=a689; next = 291@0xb4edd:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 291;
    vm_ip += 0x2;
    /* 0x230c86..0x230c8a: exact_instruction, entry=291, bytes=478e3bcc; next = 292@0xb540f:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ U16(vm->ip + 0x0u) - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu | 0x55d764bbu ^ 0x17a0094au - 0x1f6881d8u | U16(vm->ip + 0x2u) + vm->state ^ vm->flags ^ U16(vm->ip + 0x0u) - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu | 0x55d764bbu ^ 0x17a0094au - 0x1f6881d8u + 0xa61c44cu;
    next_entry = 292;
    vm_ip += 0x4;
    /* 0x230c8a..0x230c8f: exact_instruction, entry=292, bytes=62217e15a8; next = 350@0xc1926:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + U16(vm->ip + 0x1u) - vm->state | vm->flags & U16(vm->ip + 0x3u) ^ vm->state | vm->flags + U16(vm->ip + 0x1u) - vm->state | vm->flags + 0x628c34bcu;
    next_entry = 350;
    vm_ip += 0x5;
    /* 0x230c8f..0x230c93: exact_instruction, entry=350, bytes=32e3873a; next = 215@0xa4609:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x230c93..0x230c96: exact_instruction, entry=215, bytes=8801c3; next = 49@0x82820:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 49;
    vm_ip += 0x3;
    /* 0x230c96..0x230c9b: exact_instruction, entry=49, bytes=00d0023d01; next = 173@0x9ba74:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x230c9b..0x230c9d: exact_instruction, entry=173, bytes=5703; next = 333@0xbd8af:64, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 333;
    vm_ip += 0x2;
    /* 0x230c9d..0x230ca1: exact_instruction, entry=333, bytes=8be96800; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230ca1..0x230ca4: exact_instruction, entry=307, bytes=52c5b3; next = 322@0xbb3c9:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 322;
    vm_ip += 0x3;
    /* 0x230ca4..0x230ca8: exact_instruction, entry=322, bytes=0ba1ff9b; next = 337@0xbec0e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u & U16(vm->ip + 0x2u) - vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u + 0x7ba65dc4u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x230ca8..0x230cac: exact_instruction, entry=337, bytes=93fb60f6; next = 83@0x8947b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 83;
    vm_ip += 0x4;
    /* 0x230cac..0x230cb1: exact_instruction, entry=83, bytes=fba4003d01; next = 173@0x9ba74:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x230cb1..0x230cb3: exact_instruction, entry=173, bytes=6b0a; next = 340@0xbf435:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 340;
    vm_ip += 0x2;
    /* 0x230cb3..0x230cb7: exact_instruction, entry=340, bytes=3c126800; next = 154@0x97ce6:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 154;
    vm_ip += 0x4;
    /* 0x230cb7..0x230cbb: exact_instruction, entry=154, bytes=d82d2875; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x230cbb..0x230cbe: exact_instruction, entry=185, bytes=44a83a; next = 168@0x9aa83:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x230cbe..0x230cc2: exact_instruction, entry=168, bytes=e3671ed9; next = 320@0xbada5:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 320;
    vm_ip += 0x4;
    /* 0x230cc2..0x230cc7: exact_instruction, entry=320, bytes=003d01a824; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags - vm->flags - 0x7e143884u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x230cc7..0x230cc9: exact_instruction, entry=160, bytes=2923; next = 307@0xb8064:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 307;
    vm_ip += 0x2;
    /* 0x230cc9..0x230ccc: exact_instruction, entry=307, bytes=36f5ae; next = 168@0x9aa83:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x230ccc..0x230cd0: exact_instruction, entry=168, bytes=d85e6ed7; next = 258@0xadf2c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x230cd0..0x230cd4: exact_instruction, entry=258, bytes=7d7adc2a; next = 222@0xa5f3c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 222;
    vm_ip += 0x4;
    /* 0x230cd4..0x230cd9: exact_instruction, entry=222, bytes=10f8d94e62; next = 220@0xa522e:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags | 0x11da3648u & 0x169ceafau & U16(vm->ip + 0x0u) - vm->state + vm->flags | 0x11da3648u & 0x169ceafau + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u | 0x39a63024u + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u + 0x17d780cau ^ U16(vm->ip + 0x2u) + vm->state + vm->flags | 0x11da3648u & 0x169ceafau & U16(vm->ip + 0x0u) - vm->state + vm->flags | 0x11da3648u & 0x169ceafau + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u | 0x39a63024u + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u + 0x17d780cau - 0x29e369dfu;
    next_entry = 220;
    vm_ip += 0x5;
    /* 0x230cd9..0x230cde: exact_instruction, entry=220, bytes=003d01835a; next = 256@0xad849:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x230cde..0x230ce0: exact_instruction, entry=256, bytes=b243; next = 258@0xadf2c:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 258;
    vm_ip += 0x2;
    /* 0x230ce0..0x230ce4: exact_instruction, entry=258, bytes=161247c7; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230ce4..0x230ce7: exact_instruction, entry=66, bytes=ffc12a; next = 154@0x97ce6:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 154;
    vm_ip += 0x3;
    /* 0x230ce7..0x230ceb: exact_instruction, entry=154, bytes=0df90b3e; next = 196@0x9fbcd:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x230ceb..0x230cef: exact_instruction, entry=196, bytes=2b6904fd; next = 220@0xa522e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 220;
    vm_ip += 0x4;
    /* 0x230cef..0x230cf4: exact_instruction, entry=220, bytes=003d01a07d; next = 352@0xc1ec4:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x230cf4..0x230cf6: exact_instruction, entry=352, bytes=c0d6; next = 121@0x91379:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 121;
    vm_ip += 0x2;
    /* 0x230cf6..0x230cfa: exact_instruction, entry=121, bytes=b94b0c3c; next = 168@0x9aa83:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau + U16(vm->ip + 0x0u) + vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau - vm->flags;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x230cfa..0x230cfe: exact_instruction, entry=168, bytes=275726d7; next = 258@0xadf2c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x230cfe..0x230d02: exact_instruction, entry=258, bytes=1ffe66be; next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x230d02..0x230d05: exact_instruction, entry=297, bytes=851ef0; next = 301@0xb708d:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 301;
    vm_ip += 0x3;
    /* 0x230d05..0x230d0a: exact_instruction, entry=301, bytes=003d0159f2; next = 173@0x9ba74:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x230d0a..0x230d0c: exact_instruction, entry=173, bytes=5305; next = 185@0x9d964:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 185;
    vm_ip += 0x2;
    /* 0x230d0c..0x230d0f: exact_instruction, entry=185, bytes=732b3a; next = 337@0xbec0e:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x230d0f..0x230d13: exact_instruction, entry=337, bytes=8c916dd4; next = 168@0x9aa83:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x230d13..0x230d17: exact_instruction, entry=168, bytes=44d006da; next = 350@0xc1926:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 350;
    vm_ip += 0x4;
    /* 0x230d17..0x230d1b: exact_instruction, entry=350, bytes=ad9eb437; next = 320@0xbada5:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    next_entry = 320;
    vm_ip += 0x4;
    /* 0x230d1b..0x230d20: exact_instruction, entry=320, bytes=003d01ca28; next = 198@0xa037e:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags - vm->flags - 0x7e143884u;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0x230d20..0x230d22: exact_instruction, entry=198, bytes=be7c; next = 90@0x8b334:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 90;
    vm_ip += 0x2;
    /* 0x230d22..0x230d26: exact_instruction, entry=90, bytes=5ff3bd85; next = 260@0xae90b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + vm->flags + 0x1c1030c0u + vm->flags & 0x4b6fdae0u | 0x4357e3c2u & U16(vm->ip + 0x2u) - vm->state + vm->flags + vm->flags + 0x1c1030c0u + vm->flags & 0x4b6fdae0u | 0x4357e3c2u + vm->flags & 0x4b6fdae0u | 0x59296ab9u | vm->flags & 0x4b6fdae0u | 0x3296b63du ^ 0x6ee390ceu ^ U16(vm->ip + 0x0u) + 0x224914c1u;
    next_entry = 260;
    vm_ip += 0x4;
    /* 0x230d26..0x230d2a: exact_instruction, entry=260, bytes=b6018700; next = 292@0xb540f:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u - U16(vm->ip + 0x0u) - vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u ^ 0x470c080du;
    next_entry = 292;
    vm_ip += 0x4;
    /* 0x230d2a..0x230d2f: exact_instruction, entry=292, bytes=62550089d4; next = 307@0xb8064:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + U16(vm->ip + 0x1u) - vm->state | vm->flags & U16(vm->ip + 0x3u) ^ vm->state | vm->flags + U16(vm->ip + 0x1u) - vm->state | vm->flags + 0x628c34bcu;
    next_entry = 307;
    vm_ip += 0x5;
    /* 0x230d2f..0x230d32: exact_instruction, entry=307, bytes=b995b0; next = 220@0xa522e:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 220;
    vm_ip += 0x3;
    /* 0x230d32..0x230d37: exact_instruction, entry=220, bytes=003d01a39f; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x230d37..0x230d39: exact_instruction, entry=160, bytes=902a; next = 64@0x85059:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 64;
    vm_ip += 0x2;
    /* 0x230d39..0x230d3d: exact_instruction, entry=64, bytes=138f5c72; next = 215@0xa4609:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x230d3d..0x230d40: exact_instruction, entry=215, bytes=2006d5; next = 196@0x9fbcd:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 196;
    vm_ip += 0x3;
    /* 0x230d40..0x230d44: exact_instruction, entry=196, bytes=6242a5da; next = 140@0x94e5a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 140;
    vm_ip += 0x4;
    /* 0x230d44..0x230d4a: exact_instruction, entry=140, bytes=19fc81f13f7c; next = 190@0x9eacb:64, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    next_entry = 190;
    vm_ip += 0x6;
    /* 0x230d4a..0x230d4f: exact_instruction, entry=190, bytes=3d01dd0de3; next = 257@0xadbfd:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x3u) + vm->state + 0x20f4b909u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x230d4f..0x230d51: exact_instruction, entry=257, bytes=47f6; next = 215@0xa4609:64, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 215;
    vm_ip += 0x2;
    /* 0x230d51..0x230d54: exact_instruction, entry=215, bytes=880adc; next = 337@0xbec0e:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x230d54..0x230d58: exact_instruction, entry=337, bytes=7bed600b; next = 174@0x9bd8f:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x230d58..0x230d5c: exact_instruction, entry=174, bytes=6b67e801; next = 119@0x90ebc:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 119;
    vm_ip += 0x4;
    /* 0x230d5c..0x230d62: exact_instruction, entry=119, bytes=e8013d01ca55; next = 347@0xc088d:64, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x4u) ^ vm->state + 0x7e7974a5u;
    next_entry = 347;
    vm_ip += 0x6;
    /* 0x230d62..0x230d66: exact_instruction, entry=347, bytes=d6863807; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x230d66..0x230d69: exact_instruction, entry=185, bytes=dc023a; next = 123@0x91a59:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x230d69..0x230d6d: exact_instruction, entry=123, bytes=ba30e801; next = 258@0xadf2c:64, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x230d6d..0x230d71: exact_instruction, entry=258, bytes=bf16c706; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230d71..0x230d74: exact_instruction, entry=307, bytes=c475af; next = 184@0x9d694:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x230d74..0x230d78: exact_instruction, entry=184, bytes=722fe801; next = 340@0xbf435:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x230d78..0x230d7c: exact_instruction, entry=340, bytes=2031d300; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230d7c..0x230d7f: exact_instruction, entry=18, bytes=124a24; next = 174@0x9bd8f:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x230d7f..0x230d83: exact_instruction, entry=174, bytes=babbe801; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230d83..0x230d86: exact_instruction, entry=28, bytes=d80aa7; next = 347@0xc088d:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x230d86..0x230d8a: exact_instruction, entry=347, bytes=610c5583; next = 174@0x9bd8f:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x230d8a..0x230d8e: exact_instruction, entry=174, bytes=8848e801; next = 114@0x90319:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x230d8e..0x230d92: exact_instruction, entry=114, bytes=2ca332d5; next = 199@0xa0631:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x230d92..0x230d95: exact_instruction, entry=199, bytes=d75f92; next = 158@0x99029:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0x230d95..0x230d99: exact_instruction, entry=158, bytes=e80122e7; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230d99..0x230d9c: exact_instruction, entry=18, bytes=d8443e; next = 347@0xc088d:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x230d9c..0x230da0: exact_instruction, entry=347, bytes=e98ef104; next = 123@0x91a59:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x230da0..0x230da4: exact_instruction, entry=123, bytes=4216e801; next = 199@0xa0631:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x230da4..0x230da7: exact_instruction, entry=199, bytes=9619b9; next = 340@0xbf435:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x230da7..0x230dab: exact_instruction, entry=340, bytes=6c6a1300; next = 176@0x9c10b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x230dab..0x230daf: exact_instruction, entry=176, bytes=e801c565; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230daf..0x230db2: exact_instruction, entry=28, bytes=9003dd; next = 114@0x90319:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x230db2..0x230db6: exact_instruction, entry=114, bytes=92aeabf9; next = 20@0x7c62b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x230db6..0x230dba: exact_instruction, entry=20, bytes=e801fb77; next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x230dba..0x230dbd: exact_instruction, entry=297, bytes=01ad6b; next = 340@0xbf435:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x230dbd..0x230dc1: exact_instruction, entry=340, bytes=3069cb00; next = 20@0x7c62b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x230dc1..0x230dc5: exact_instruction, entry=20, bytes=e8017f31; next = 189@0x9e7af:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x230dc5..0x230dc9: exact_instruction, entry=189, bytes=70fb14e5; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230dc9..0x230dcc: exact_instruction, entry=18, bytes=f829b6; next = 123@0x91a59:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x230dcc..0x230dd0: exact_instruction, entry=123, bytes=2649e801; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230dd0..0x230dd3: exact_instruction, entry=66, bytes=a5176e; next = 64@0x85059:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x230dd3..0x230dd7: exact_instruction, entry=64, bytes=d5b1ffaa; next = 161@0x9975a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x230dd7..0x230ddb: exact_instruction, entry=161, bytes=4a59e801; next = 347@0xc088d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x230ddb..0x230ddf: exact_instruction, entry=347, bytes=e509af80; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230ddf..0x230de2: exact_instruction, entry=18, bytes=70167a; next = 174@0x9bd8f:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x230de2..0x230de6: exact_instruction, entry=174, bytes=28cfe801; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230de6..0x230de9: exact_instruction, entry=307, bytes=d945ad; next = 114@0x90319:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x230de9..0x230ded: exact_instruction, entry=114, bytes=6b9804dd; next = 184@0x9d694:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0x230ded..0x230df1: exact_instruction, entry=184, bytes=12c4e801; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230df1..0x230df4: exact_instruction, entry=66, bytes=259138; next = 114@0x90319:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x230df4..0x230df8: exact_instruction, entry=114, bytes=786876b0; next = 20@0x7c62b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x230df8..0x230dfc: exact_instruction, entry=20, bytes=e8011b72; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230dfc..0x230dff: exact_instruction, entry=66, bytes=1a113a; next = 340@0xbf435:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x230dff..0x230e03: exact_instruction, entry=340, bytes=0ea39900; next = 176@0x9c10b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x230e03..0x230e07: exact_instruction, entry=176, bytes=e80145c4; next = 321@0xbb1dd:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 321;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x230e07, coverage=hidden_span_of_17:64 */
    {
        static const VMSyntheticTailEvidence tail = {
            UINT64_C(0x230e03),
            UINT64_C(0x230e07),
            176u,
            321u,
            "covered_synthetic_fallthrough",
            "hidden_span_of_17:64",
            "next = 321@0xbb1dd:64, ip += +0x4; dispatch_model=static_100; state=state_add_const",
        };
        vm_program_synthetic_tail_evidence(vm, &tail);
    }
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p030_bb_0171(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 171: 0x230e18..0x23121f; rows=276, terminal=long_branch_backedge */
    /* 0x230e18..0x230e1a: exact_instruction, entry=165, bytes=4d01; next = 333@0xbd8af:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 333;
    vm_ip += 0x2;
    /* 0x230e1a..0x230e1e: exact_instruction, entry=333, bytes=c3e99900; next = 347@0xc088d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x230e1e..0x230e22: exact_instruction, entry=347, bytes=04801c08; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230e22..0x230e25: exact_instruction, entry=28, bytes=d000a2; next = 26@0x7dbbb:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 26;
    vm_ip += 0x3;
    /* 0x230e25..0x230e29: exact_instruction, entry=26, bytes=1611e801; next = 43@0x8173d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x230e29..0x230e2d: exact_instruction, entry=43, bytes=f5c841b6; next = 347@0xc088d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x230e2d..0x230e31: exact_instruction, entry=347, bytes=7a0b1483; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230e31..0x230e34: exact_instruction, entry=18, bytes=d20b4c; next = 26@0x7dbbb:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 26;
    vm_ip += 0x3;
    /* 0x230e34..0x230e38: exact_instruction, entry=26, bytes=aa6fe801; next = 337@0xbec0e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x230e38..0x230e3c: exact_instruction, entry=337, bytes=f30de33d; next = 172@0x9b68a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x230e3c..0x230e40: exact_instruction, entry=172, bytes=3ef5fb0f; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x230e40..0x230e43: exact_instruction, entry=185, bytes=520a3a; next = 33@0x7f7c4:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 33;
    vm_ip += 0x3;
    /* 0x230e43..0x230e47: exact_instruction, entry=33, bytes=e801a2c2; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230e47..0x230e4a: exact_instruction, entry=66, bytes=bb542a; next = 258@0xadf2c:64, ip += +0x3; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x230e4a..0x230e4e: exact_instruction, entry=258, bytes=c3beea35; next = 172@0x9b68a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x230e4e..0x230e52: exact_instruction, entry=172, bytes=6230bb03; next = 305@0xb78b0:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x230e52..0x230e56: exact_instruction, entry=305, bytes=6558e801; next = 268@0xb0007:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x230e56..0x230e5a: exact_instruction, entry=268, bytes=d5ab5d90; next = 215@0xa4609:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x230e5a..0x230e5d: exact_instruction, entry=215, bytes=a00afc; next = 340@0xbf435:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x230e5d..0x230e61: exact_instruction, entry=340, bytes=c0482301; next = 305@0xb78b0:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x230e61..0x230e65: exact_instruction, entry=305, bytes=b5cae801; next = 268@0xb0007:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x230e65..0x230e69: exact_instruction, entry=268, bytes=a04d2e62; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230e69..0x230e6c: exact_instruction, entry=18, bytes=dd182a; next = 347@0xc088d:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x230e6c..0x230e70: exact_instruction, entry=347, bytes=92305e89; next = 315@0xb9451:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x230e70..0x230e74: exact_instruction, entry=315, bytes=e80161f2; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230e74..0x230e77: exact_instruction, entry=66, bytes=f9e0ec; next = 172@0x9b68a:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 172;
    vm_ip += 0x3;
    /* 0x230e77..0x230e7b: exact_instruction, entry=172, bytes=bbaedb0f; next = 189@0x9e7af:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x230e7b..0x230e7f: exact_instruction, entry=189, bytes=3ad8209c; next = 26@0x7dbbb:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x230e7f..0x230e83: exact_instruction, entry=26, bytes=4a6ee801; next = 258@0xadf2c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x230e83..0x230e87: exact_instruction, entry=258, bytes=f913aa90; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x230e87..0x230e8a: exact_instruction, entry=18, bytes=78072e; next = 203@0xa1484:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 203;
    vm_ip += 0x3;
    /* 0x230e8a..0x230e8e: exact_instruction, entry=203, bytes=d792e495; next = 346@0xc0535:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x230e8e..0x230e92: exact_instruction, entry=346, bytes=9a0ce801; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230e92..0x230e95: exact_instruction, entry=66, bytes=19290e; next = 64@0x85059:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x230e95..0x230e99: exact_instruction, entry=64, bytes=dd8723d0; next = 43@0x8173d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x230e99..0x230e9d: exact_instruction, entry=43, bytes=ed2a4154; next = 346@0xc0535:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x230e9d..0x230ea1: exact_instruction, entry=346, bytes=37c6e801; next = 157@0x98a9a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x230ea1..0x230ea5: exact_instruction, entry=157, bytes=53d99d01; next = 199@0xa0631:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x230ea5..0x230ea8: exact_instruction, entry=199, bytes=cecab9; next = 189@0x9e7af:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x230ea8..0x230eac: exact_instruction, entry=189, bytes=f89a4ce0; next = 315@0xb9451:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x230eac..0x230eb0: exact_instruction, entry=315, bytes=e80151f6; next = 196@0x9fbcd:64, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x230eb0..0x230eb4: exact_instruction, entry=196, bytes=94a92de5; next = 189@0x9e7af:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x230eb4..0x230eb8: exact_instruction, entry=189, bytes=ae881cd8; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230eb8..0x230ebb: exact_instruction, entry=307, bytes=3a3db3; next = 305@0xb78b0:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 305;
    vm_ip += 0x3;
    /* 0x230ebb..0x230ebf: exact_instruction, entry=305, bytes=e884e801; next = 157@0x98a9a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x230ebf..0x230ec3: exact_instruction, entry=157, bytes=47529100; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x230ec3..0x230ec6: exact_instruction, entry=185, bytes=43813a; next = 337@0xbec0e:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x230ec6..0x230eca: exact_instruction, entry=337, bytes=0894c674; next = 305@0xb78b0:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x230eca..0x230ece: exact_instruction, entry=305, bytes=6ebfe801; next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x230ece..0x230ed1: exact_instruction, entry=297, bytes=0906ba; next = 258@0xadf2c:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x230ed1..0x230ed5: exact_instruction, entry=258, bytes=360126eb; next = 333@0xbd8af:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x230ed5..0x230ed9: exact_instruction, entry=333, bytes=bbd09100; next = 26@0x7dbbb:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x230ed9..0x230edd: exact_instruction, entry=26, bytes=78ade801; next = 215@0xa4609:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x230edd..0x230ee0: exact_instruction, entry=215, bytes=580168; next = 43@0x8173d:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x230ee0..0x230ee4: exact_instruction, entry=43, bytes=28c254bc; next = 340@0xbf435:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x230ee4..0x230ee8: exact_instruction, entry=340, bytes=18d0d300; next = 305@0xb78b0:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x230ee8..0x230eec: exact_instruction, entry=305, bytes=954ee801; next = 157@0x98a9a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x230eec..0x230ef0: exact_instruction, entry=157, bytes=7ab37900; next = 64@0x85059:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x230ef0..0x230ef4: exact_instruction, entry=64, bytes=bcb261f0; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x230ef4..0x230ef7: exact_instruction, entry=307, bytes=02adb2; next = 287@0xb45d2:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 287;
    vm_ip += 0x3;
    /* 0x230ef7..0x230efb: exact_instruction, entry=287, bytes=eabde801; next = 172@0x9b68a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x230efb..0x230eff: exact_instruction, entry=172, bytes=456f2308; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x230eff..0x230f02: exact_instruction, entry=66, bytes=fd304a; next = 64@0x85059:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x230f02..0x230f06: exact_instruction, entry=64, bytes=d9b4ebc3; next = 243@0xaab6a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x230f06..0x230f0a: exact_instruction, entry=243, bytes=9da3e801; next = 167@0x9a8d2:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 167;
    vm_ip += 0x4;
    /* 0x230f0a..0x230f10: exact_instruction, entry=167, bytes=e8013d01f525; next = 283@0xb3612:64, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) ^ vm->state ^ 0x5f92615u;
    next_entry = 283;
    vm_ip += 0x6;
    /* 0x230f10..0x230f15: exact_instruction, entry=283, bytes=10e801d462; next = 260@0xae90b:64, ip += +0x5; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    /* state preserved: state_preserve */
    next_entry = 260;
    vm_ip += 0x5;
    /* 0x230f15..0x230f19: exact_instruction, entry=260, bytes=d8014830; next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u - U16(vm->ip + 0x0u) - vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u ^ 0x470c080du;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x230f19..0x230f1c: exact_instruction, entry=297, bytes=8965ab; next = 258@0xadf2c:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x230f1c..0x230f20: exact_instruction, entry=258, bytes=66f02d03; next = 172@0x9b68a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x230f20..0x230f24: exact_instruction, entry=172, bytes=82bbf308; next = 88@0x8aa14:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 88;
    vm_ip += 0x4;
    /* 0x230f24..0x230f29: exact_instruction, entry=88, bytes=41eba63d01; next = 352@0xc1ec4:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags - 0x1c9cfceau ^ U16(vm->ip + 0x1u) + vm->state | vm->flags - 0x1c9cfceau ^ 0x415462f5u;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x230f29..0x230f2b: exact_instruction, entry=352, bytes=e009; next = 189@0x9e7af:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 189;
    vm_ip += 0x2;
    /* 0x230f2b..0x230f2f: exact_instruction, entry=189, bytes=5de14ce8; next = 157@0x98a9a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x230f2f..0x230f33: exact_instruction, entry=157, bytes=03456800; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x230f33..0x230f36: exact_instruction, entry=185, bytes=1f7b3a; next = 322@0xbb3c9:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 322;
    vm_ip += 0x3;
    /* 0x230f36..0x230f3a: exact_instruction, entry=322, bytes=ec6ca603; next = 3@0x78c77:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u & U16(vm->ip + 0x2u) - vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u + 0x7ba65dc4u;
    next_entry = 3;
    vm_ip += 0x4;
    /* 0x230f3a..0x230f3f: exact_instruction, entry=3, bytes=9965003d01; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu ^ U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu + 0x4bc0d288u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x230f3f..0x230f41: exact_instruction, entry=160, bytes=482e; next = 215@0xa4609:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 215;
    vm_ip += 0x2;
    /* 0x230f41..0x230f44: exact_instruction, entry=215, bytes=600827; next = 268@0xb0007:64, ip += +0x3; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x230f44..0x230f48: exact_instruction, entry=268, bytes=b3db326a; next = 254@0xad32c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 254;
    vm_ip += 0x4;
    /* 0x230f48..0x230f4c: exact_instruction, entry=254, bytes=93587a4c; next = 347@0xc088d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) ^ vm->state + vm->flags | vm->flags | 0x617339d9u | 0x5635509u | 0x15874263u ^ 0x5bf4e999u & vm->flags - 0x35a18ac8u | 0x5feb6979u & 0x3e80b852u | U16(vm->ip + 0x2u) - 0x228a41a2u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x230f4c..0x230f50: exact_instruction, entry=347, bytes=8d3bef82; next = 37@0x80685:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 37;
    vm_ip += 0x4;
    /* 0x230f50..0x230f55: exact_instruction, entry=37, bytes=f402003d01; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x504fc3du - 0x4eca0e49u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags + 0x504fc3du - 0x4eca0e49u ^ 0x384e1c86u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x230f55..0x230f57: exact_instruction, entry=160, bytes=a923; next = 291@0xb4edd:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 291;
    vm_ip += 0x2;
    /* 0x230f57..0x230f5b: exact_instruction, entry=291, bytes=a60303e0; next = 330@0xbc9b8:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ U16(vm->ip + 0x0u) - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu | 0x55d764bbu ^ 0x17a0094au - 0x1f6881d8u | U16(vm->ip + 0x2u) + vm->state ^ vm->flags ^ U16(vm->ip + 0x0u) - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu | 0x55d764bbu ^ 0x17a0094au - 0x1f6881d8u + 0xa61c44cu;
    next_entry = 330;
    vm_ip += 0x4;
    /* 0x230f5b..0x230f60: exact_instruction, entry=330, bytes=9000628777; next = 18@0x7be9b:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6460b705u & 0x786588bau ^ 0x2897b354u + U16(vm->ip + 0x0u);
    next_entry = 18;
    vm_ip += 0x5;
    /* 0x230f60..0x230f63: exact_instruction, entry=18, bytes=800ae2; next = 300@0xb6c36:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 300;
    vm_ip += 0x3;
    /* 0x230f63..0x230f67: exact_instruction, entry=300, bytes=f00d60f4; next = 301@0xb708d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u ^ U16(vm->ip + 0x2u) - vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    next_entry = 301;
    vm_ip += 0x4;
    /* 0x230f67..0x230f6c: exact_instruction, entry=301, bytes=003d01ef72; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x230f6c..0x230f6e: exact_instruction, entry=160, bytes=912a; next = 64@0x85059:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 64;
    vm_ip += 0x2;
    /* 0x230f6e..0x230f72: exact_instruction, entry=64, bytes=3a229407; next = 140@0x94e5a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 140;
    vm_ip += 0x4;
    /* 0x230f72..0x230f78: exact_instruction, entry=140, bytes=da96a2d676c4; next = 307@0xb8064:64, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    next_entry = 307;
    vm_ip += 0x6;
    /* 0x230f78..0x230f7b: exact_instruction, entry=307, bytes=889dae; next = 157@0x98a9a:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x230f7b..0x230f7f: exact_instruction, entry=157, bytes=37c19100; next = 148@0x96b6e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 148;
    vm_ip += 0x4;
    /* 0x230f7f..0x230f84: exact_instruction, entry=148, bytes=3d01ad7956; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x230f84..0x230f86: exact_instruction, entry=160, bytes=912a; next = 64@0x85059:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 64;
    vm_ip += 0x2;
    /* 0x230f86..0x230f8a: exact_instruction, entry=64, bytes=127164d8; next = 215@0xa4609:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x230f8a..0x230f8d: exact_instruction, entry=215, bytes=e804dd; next = 157@0x98a9a:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x230f8d..0x230f91: exact_instruction, entry=157, bytes=d3c77900; next = 118@0x90c23:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 118;
    vm_ip += 0x4;
    /* 0x230f91..0x230f94: exact_instruction, entry=118, bytes=625890; next = 322@0xbb3c9:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x1u) ^ vm->state - 0x52d3aa4u;
    next_entry = 322;
    vm_ip += 0x3;
    /* 0x230f94..0x230f98: exact_instruction, entry=322, bytes=c4c0ed94; next = 99@0x8c99a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u & U16(vm->ip + 0x2u) - vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u + 0x7ba65dc4u;
    next_entry = 99;
    vm_ip += 0x4;
    /* 0x230f98..0x230f9d: exact_instruction, entry=99, bytes=0075353d01; next = 173@0x9ba74:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x1u) ^ vm->state - 0x48503105u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x230f9d..0x230f9f: exact_instruction, entry=173, bytes=0284; next = 203@0xa1484:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 203;
    vm_ip += 0x2;
    /* 0x230f9f..0x230fa3: exact_instruction, entry=203, bytes=67914d7a; next = 300@0xb6c36:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 300;
    vm_ip += 0x4;
    /* 0x230fa3..0x230fa7: exact_instruction, entry=300, bytes=83854108; next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u ^ U16(vm->ip + 0x2u) - vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x230fa7..0x230faa: exact_instruction, entry=297, bytes=783b0e; next = 347@0xc088d:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x230faa..0x230fae: exact_instruction, entry=347, bytes=b40e1883; next = 201@0xa0dca:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 201;
    vm_ip += 0x4;
    /* 0x230fae..0x230fb3: exact_instruction, entry=201, bytes=3d0139c86b; next = 256@0xad849:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x1940e110u ^ 0x5efd26e6u & vm->flags ^ 0x71fea721u ^ vm->flags & 0x3f73d5c3u | 0x4f2c497cu | 0x6499103u & vm->flags & vm->state ^ vm->flags ^ 0x1940e110u ^ 0x5efd26e6u & vm->flags ^ 0x71fea721u ^ vm->flags & 0x3f73d5c3u | 0x4f2c497cu + 0x2daa0966u - 0x708b6fb1u - 0x7e894c58u - U16(vm->ip + 0x2u) - 0x289c039u;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x230fb3..0x230fb5: exact_instruction, entry=256, bytes=f61f; next = 268@0xb0007:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 268;
    vm_ip += 0x2;
    /* 0x230fb5..0x230fb9: exact_instruction, entry=268, bytes=7bf826d8; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x230fb9..0x230fbc: exact_instruction, entry=28, bytes=e8051b; next = 189@0x9e7af:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x230fbc..0x230fc0: exact_instruction, entry=189, bytes=c7a570dc; next = 260@0xae90b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 260;
    vm_ip += 0x4;
    /* 0x230fc0..0x230fc4: exact_instruction, entry=260, bytes=78017932; next = 301@0xb708d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u - U16(vm->ip + 0x0u) - vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u ^ 0x470c080du;
    next_entry = 301;
    vm_ip += 0x4;
    /* 0x230fc4..0x230fc9: exact_instruction, entry=301, bytes=003d016f08; next = 257@0xadbfd:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x230fc9..0x230fcb: exact_instruction, entry=257, bytes=670a; next = 347@0xc088d:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 347;
    vm_ip += 0x2;
    /* 0x230fcb..0x230fcf: exact_instruction, entry=347, bytes=5d3e6f88; next = 43@0x8173d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x230fcf..0x230fd3: exact_instruction, entry=43, bytes=ec21d05c; next = 300@0xb6c36:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 300;
    vm_ip += 0x4;
    /* 0x230fd3..0x230fd7: exact_instruction, entry=300, bytes=39b8cf48; next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u ^ U16(vm->ip + 0x2u) - vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x230fd7..0x230fda: exact_instruction, entry=297, bytes=00177e; next = 237@0xa8e1f:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 237;
    vm_ip += 0x3;
    /* 0x230fda..0x230fdf: exact_instruction, entry=237, bytes=006aca3d01; next = 108@0x8f24b:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x230fdf..0x230fe1: exact_instruction, entry=108, bytes=4676; next = 307@0xb8064:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 307;
    vm_ip += 0x2;
    /* 0x230fe1..0x230fe4: exact_instruction, entry=307, bytes=3fc5b1; next = 258@0xadf2c:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x230fe4..0x230fe8: exact_instruction, entry=258, bytes=8441e9dc; next = 196@0x9fbcd:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x230fe8..0x230fec: exact_instruction, entry=196, bytes=579044f2; next = 128@0x9299b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 128;
    vm_ip += 0x4;
    /* 0x230fec..0x230ff1: exact_instruction, entry=128, bytes=627b056920; next = 3@0x78c77:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu - U16(vm->ip + 0x1u) + vm->state & vm->flags & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu + vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x4e6b72c6u | 0x7b467141u & U16(vm->ip + 0x3u) ^ vm->state & vm->flags & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu - U16(vm->ip + 0x1u) + vm->state & vm->flags & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu + vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x4e6b72c6u | 0x7b467141u + 0x539da50eu;
    next_entry = 3;
    vm_ip += 0x5;
    /* 0x230ff1..0x230ff6: exact_instruction, entry=3, bytes=19c7003d01; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu ^ U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu + 0x4bc0d288u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x230ff6..0x230ff8: exact_instruction, entry=160, bytes=3022; next = 340@0xbf435:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 340;
    vm_ip += 0x2;
    /* 0x230ff8..0x230ffc: exact_instruction, entry=340, bytes=14a28900; next = 273@0xb11ca:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 273;
    vm_ip += 0x4;
    /* 0x230ffc..0x231000: exact_instruction, entry=273, bytes=32ebc412; next = 196@0x9fbcd:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags | U16(vm->ip + 0x0u) + vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags - 0x2e0be660u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x231000..0x231004: exact_instruction, entry=196, bytes=9fb154f9; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x231004..0x231007: exact_instruction, entry=66, bytes=9ec252; next = 319@0xba72f:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 319;
    vm_ip += 0x3;
    /* 0x231007..0x23100c: exact_instruction, entry=319, bytes=3d01bb690b; next = 144@0x95887:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + U16(vm->ip + 0x2u) + vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + 0x7f20b820u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x23100c..0x23100e: exact_instruction, entry=144, bytes=4f94; next = 154@0x97ce6:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 154;
    vm_ip += 0x2;
    /* 0x23100e..0x231012: exact_instruction, entry=154, bytes=37ef4100; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x231012..0x231015: exact_instruction, entry=66, bytes=15b180; next = 337@0xbec0e:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x231015..0x231019: exact_instruction, entry=337, bytes=57b8dfd0; next = 82@0x8920e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 82;
    vm_ip += 0x4;
    /* 0x231019..0x23101c: exact_instruction, entry=82, bytes=20b962; next = 333@0xbd8af:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + 0x1bc90d20u | 0x2d688b3eu - U16(vm->ip + 0x0u) + vm->state + vm->flags + 0x1bc90d20u | 0x2d688b3eu + 0x5cc5e4d8u;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x23101c..0x231020: exact_instruction, entry=333, bytes=e7d29100; next = 99@0x8c99a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 99;
    vm_ip += 0x4;
    /* 0x231020..0x231025: exact_instruction, entry=99, bytes=00d2e53d01; next = 198@0xa037e:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x1u) ^ vm->state - 0x48503105u;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0x231025..0x231027: exact_instruction, entry=198, bytes=907c; next = 350@0xc1926:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 350;
    vm_ip += 0x2;
    /* 0x231027..0x23102b: exact_instruction, entry=350, bytes=11a7ae3f; next = 114@0x90319:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x23102b..0x23102f: exact_instruction, entry=114, bytes=e3546c95; next = 250@0xac802:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 250;
    vm_ip += 0x4;
    /* 0x23102f..0x231032: exact_instruction, entry=250, bytes=62d8c4; next = 43@0x8173d:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags + vm->flags ^ vm->flags | 0x75c2d7adu + 0x3d28c7fcu - 0xb911f97u | U16(vm->ip + 0x1u) - vm->state ^ vm->flags + vm->flags ^ vm->flags | 0x75c2d7adu + 0x3d28c7fcu - 0xb911f97u + 0x71ad6fc6u;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x231032..0x231036: exact_instruction, entry=43, bytes=a34ed733; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x231036..0x231039: exact_instruction, entry=307, bytes=507db0; next = 217@0xa4b11:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 217;
    vm_ip += 0x3;
    /* 0x231039..0x23103e: exact_instruction, entry=217, bytes=0000133d01; next = 352@0xc1ec4:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x23103e..0x231040: exact_instruction, entry=352, bytes=e208; next = 157@0x98a9a:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 157;
    vm_ip += 0x2;
    /* 0x231040..0x231044: exact_instruction, entry=157, bytes=aa6b9900; next = 260@0xae90b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 260;
    vm_ip += 0x4;
    /* 0x231044..0x231048: exact_instruction, entry=260, bytes=450079ff; next = 258@0xadf2c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u - U16(vm->ip + 0x0u) - vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u ^ 0x470c080du;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x231048..0x23104c: exact_instruction, entry=258, bytes=5c432dbb; next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x23104c..0x23104f: exact_instruction, entry=297, bytes=1fe4e4; next = 319@0xba72f:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 319;
    vm_ip += 0x3;
    /* 0x23104f..0x231054: exact_instruction, entry=319, bytes=3d01fe29a1; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + U16(vm->ip + 0x2u) + vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + 0x7f20b820u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x231054..0x231056: exact_instruction, entry=160, bytes=b12e; next = 196@0x9fbcd:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 196;
    vm_ip += 0x2;
    /* 0x231056..0x23105a: exact_instruction, entry=196, bytes=a5343400; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x23105a..0x23105d: exact_instruction, entry=66, bytes=cac118; next = 273@0xb11ca:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 273;
    vm_ip += 0x3;
    /* 0x23105d..0x231061: exact_instruction, entry=273, bytes=ffb06014; next = 347@0xc088d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags | U16(vm->ip + 0x0u) + vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags - 0x2e0be660u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x231061..0x231065: exact_instruction, entry=347, bytes=560aac00; next = 3@0x78c77:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 3;
    vm_ip += 0x4;
    /* 0x231065..0x23106a: exact_instruction, entry=3, bytes=0126003d01; next = 173@0x9ba74:64, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu ^ U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu + 0x4bc0d288u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x23106a..0x23106c: exact_instruction, entry=173, bytes=2306; next = 203@0xa1484:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 203;
    vm_ip += 0x2;
    /* 0x23106c..0x231070: exact_instruction, entry=203, bytes=4f910476; next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x231070..0x231073: exact_instruction, entry=297, bytes=6dde57; next = 114@0x90319:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x231073..0x231077: exact_instruction, entry=114, bytes=cb8614d0; next = 154@0x97ce6:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 154;
    vm_ip += 0x4;
    /* 0x231077..0x23107b: exact_instruction, entry=154, bytes=b32df52f; next = 320@0xbada5:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 320;
    vm_ip += 0x4;
    /* 0x23107b..0x231080: exact_instruction, entry=320, bytes=003d01dcca; next = 108@0x8f24b:64, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags - vm->flags - 0x7e143884u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x231080..0x231082: exact_instruction, entry=108, bytes=bd99; next = 172@0x9b68a:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 172;
    vm_ip += 0x2;
    /* 0x231082..0x231086: exact_instruction, entry=172, bytes=ec062302; next = 258@0xadf2c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x231086..0x23108a: exact_instruction, entry=258, bytes=ca2255f2; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x23108a..0x23108d: exact_instruction, entry=307, bytes=4045ae; next = 146@0x96407:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 146;
    vm_ip += 0x3;
    /* 0x23108d..0x231092: exact_instruction, entry=146, bytes=6209ac10cf; next = 70@0x8610e:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags ^ 0x2e312e01u & vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u ^ U16(vm->ip + 0x3u) + vm->flags & 0xa6d4251u ^ 0x409c2e61u ^ U16(vm->ip + 0x1u) - vm->state + vm->flags ^ 0x2e312e01u & vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u ^ U16(vm->ip + 0x3u) + vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x2cff1885u;
    next_entry = 70;
    vm_ip += 0x5;
    /* 0x231092..0x231097: exact_instruction, entry=70, bytes=d9501b3d01; next = 108@0x8f24b:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u ^ vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u | 0x528cef01u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x231097..0x231099: exact_instruction, entry=108, bytes=ec1b; next = 340@0xbf435:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 340;
    vm_ip += 0x2;
    /* 0x231099..0x23109d: exact_instruction, entry=340, bytes=e5116800; next = 157@0x98a9a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x23109d..0x2310a1: exact_instruction, entry=157, bytes=73c56800; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x2310a1..0x2310a4: exact_instruction, entry=66, bytes=ae533e; next = 350@0xc1926:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 350;
    vm_ip += 0x3;
    /* 0x2310a4..0x2310a8: exact_instruction, entry=350, bytes=9b28563a; next = 220@0xa522e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    next_entry = 220;
    vm_ip += 0x4;
    /* 0x2310a8..0x2310ad: exact_instruction, entry=220, bytes=003d010460; next = 173@0x9ba74:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x2310ad..0x2310af: exact_instruction, entry=173, bytes=ae01; next = 28@0x7e390:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 28;
    vm_ip += 0x2;
    /* 0x2310af..0x2310b2: exact_instruction, entry=28, bytes=58010b; next = 43@0x8173d:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x2310b2..0x2310b6: exact_instruction, entry=43, bytes=587ab401; next = 258@0xadf2c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x2310b6..0x2310ba: exact_instruction, entry=258, bytes=3a1f5dd3; next = 154@0x97ce6:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 154;
    vm_ip += 0x4;
    /* 0x2310ba..0x2310be: exact_instruction, entry=154, bytes=97359900; next = 37@0x80685:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 37;
    vm_ip += 0x4;
    /* 0x2310be..0x2310c3: exact_instruction, entry=37, bytes=f445003d01; next = 256@0xad849:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x504fc3du - 0x4eca0e49u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags + 0x504fc3du - 0x4eca0e49u ^ 0x384e1c86u;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x2310c3..0x2310c5: exact_instruction, entry=256, bytes=a5d6; next = 337@0xbec0e:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 337;
    vm_ip += 0x2;
    /* 0x2310c5..0x2310c9: exact_instruction, entry=337, bytes=5499f1ff; next = 43@0x8173d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x2310c9..0x2310cd: exact_instruction, entry=43, bytes=cb362743; next = 66@0x855ff:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x2310cd..0x2310d0: exact_instruction, entry=66, bytes=119444; next = 208@0xa2361:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 208;
    vm_ip += 0x3;
    /* 0x2310d0..0x2310d5: exact_instruction, entry=208, bytes=62986d255c; next = 79@0x885b0:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du - U16(vm->ip + 0x3u) - vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du;
    next_entry = 79;
    vm_ip += 0x5;
    /* 0x2310d5..0x2310da: exact_instruction, entry=79, bytes=3a483d0100; next = 256@0xad849:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x2310da..0x2310dc: exact_instruction, entry=256, bytes=c53d; next = 199@0xa0631:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 199;
    vm_ip += 0x2;
    /* 0x2310dc..0x2310df: exact_instruction, entry=199, bytes=7a57e3; next = 273@0xb11ca:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 273;
    vm_ip += 0x3;
    /* 0x2310df..0x2310e3: exact_instruction, entry=273, bytes=83c7dd3a; next = 64@0x85059:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags | U16(vm->ip + 0x0u) + vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags - 0x2e0be660u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x2310e3..0x2310e7: exact_instruction, entry=64, bytes=68641de5; next = 157@0x98a9a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x2310e7..0x2310eb: exact_instruction, entry=157, bytes=bb8e9900; next = 118@0x90c23:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 118;
    vm_ip += 0x4;
    /* 0x2310eb..0x2310ee: exact_instruction, entry=118, bytes=62a852; next = 217@0xa4b11:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x1u) ^ vm->state - 0x52d3aa4u;
    next_entry = 217;
    vm_ip += 0x3;
    /* 0x2310ee..0x2310f3: exact_instruction, entry=217, bytes=00ed873d01; next = 144@0x95887:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x2310f3..0x2310f5: exact_instruction, entry=144, bytes=0f9e; next = 347@0xc088d:64, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 347;
    vm_ip += 0x2;
    /* 0x2310f5..0x2310f9: exact_instruction, entry=347, bytes=2e0ff882; next = 124@0x91e81:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 124;
    vm_ip += 0x4;
    /* 0x2310f9..0x2310ff: exact_instruction, entry=124, bytes=e97f03e0d540; next = 43@0x8173d:64, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u - U16(vm->ip + 0x4u) + vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ 0x3654c1a7u;
    next_entry = 43;
    vm_ip += 0x6;
    /* 0x2310ff..0x231103: exact_instruction, entry=43, bytes=f504617e; next = 215@0xa4609:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x231103..0x231106: exact_instruction, entry=215, bytes=f0025e; next = 94@0x8bd69:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 94;
    vm_ip += 0x3;
    /* 0x231106..0x23110b: exact_instruction, entry=94, bytes=8ba6eb3d01; next = 173@0x9ba74:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ vm->state + 0x551fa912u & 0x7af574e5u + vm->flags ^ vm->state + 0x551fa912u | 0x23f8268cu - U16(vm->ip + 0x1u) ^ vm->state & vm->flags ^ vm->state + 0x551fa912u & 0x7af574e5u + vm->flags ^ vm->state + 0x551fa912u | 0x23f8268cu;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x23110b..0x23110d: exact_instruction, entry=173, bytes=1f08; next = 114@0x90319:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 114;
    vm_ip += 0x2;
    /* 0x23110d..0x231111: exact_instruction, entry=114, bytes=a9624625; next = 260@0xae90b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 260;
    vm_ip += 0x4;
    /* 0x231111..0x231115: exact_instruction, entry=260, bytes=2009a400; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u - U16(vm->ip + 0x0u) - vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u ^ 0x470c080du;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x231115..0x231118: exact_instruction, entry=28, bytes=5801d9; next = 43@0x8173d:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x231118..0x23111c: exact_instruction, entry=43, bytes=8c726805; next = 129@0x92f21:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 129;
    vm_ip += 0x4;
    /* 0x23111c..0x23111f: exact_instruction, entry=129, bytes=2c6362; next = 99@0x8c99a:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x77ecded8u + 0x14f8aa88u + 0x5f119f37u + vm->flags + vm->state & vm->flags | 0x77ecded8u + 0x14f8aa88u + 0x5f119f37u - 0x42c8b2fau - 0x3f4e9109u + 0x5d5f2ae2u & 0x63b683du & U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x77ecded8u + 0x14f8aa88u + 0x5f119f37u + vm->flags + vm->state & vm->flags | 0x77ecded8u + 0x14f8aa88u + 0x5f119f37u - 0x42c8b2fau - 0x3f4e9109u + 0x5d5f2ae2u & 0x63b683du;
    next_entry = 99;
    vm_ip += 0x3;
    /* 0x23111f..0x231124: exact_instruction, entry=99, bytes=007d363d01; next = 173@0x9ba74:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x1u) ^ vm->state - 0x48503105u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x231124..0x231126: exact_instruction, entry=173, bytes=ae00; next = 64@0x85059:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 64;
    vm_ip += 0x2;
    /* 0x231126..0x23112a: exact_instruction, entry=64, bytes=e50f677d; next = 350@0xc1926:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 350;
    vm_ip += 0x4;
    /* 0x23112a..0x23112e: exact_instruction, entry=350, bytes=f9117c39; next = 185@0x9d964:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x23112e..0x231131: exact_instruction, entry=185, bytes=eba63a; next = 157@0x98a9a:64, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x231131..0x231135: exact_instruction, entry=157, bytes=f6c46800; next = 83@0x8947b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 83;
    vm_ip += 0x4;
    /* 0x231135..0x23113a: exact_instruction, entry=83, bytes=81bc003d01; next = 160@0x994cf:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x23113a..0x23113c: exact_instruction, entry=160, bytes=582f; next = 185@0x9d964:64, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 185;
    vm_ip += 0x2;
    /* 0x23113c..0x23113f: exact_instruction, entry=185, bytes=2a8f3a; next = 268@0xb0007:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x23113f..0x231143: exact_instruction, entry=268, bytes=9d0c7e71; next = 332@0xbd36d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 332;
    vm_ip += 0x4;
    /* 0x231143..0x231147: exact_instruction, entry=332, bytes=51e7a1ab; next = 340@0xbf435:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u ^ U16(vm->ip + 0x2u) ^ vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x42097e5du;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x231147..0x23114b: exact_instruction, entry=340, bytes=f27d6800; next = 192@0x9f00a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 192;
    vm_ip += 0x4;
    /* 0x23114b..0x231150: exact_instruction, entry=192, bytes=dd973d0100; next = 108@0x8f24b:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu - U16(vm->ip + 0x0u) ^ vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x231150..0x231152: exact_instruction, entry=108, bytes=4138; next = 208@0xa2361:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 208;
    vm_ip += 0x2;
    /* 0x231152..0x231157: exact_instruction, entry=208, bytes=6200d9cde2; next = 172@0x9b68a:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du - U16(vm->ip + 0x3u) - vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du;
    next_entry = 172;
    vm_ip += 0x5;
    /* 0x231157..0x23115b: exact_instruction, entry=172, bytes=002f8b0c; next = 215@0xa4609:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x23115b..0x23115e: exact_instruction, entry=215, bytes=880a67; next = 337@0xbec0e:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x23115e..0x231162: exact_instruction, entry=337, bytes=03e9220d; next = 319@0xba72f:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 319;
    vm_ip += 0x4;
    /* 0x231162..0x231167: exact_instruction, entry=319, bytes=3d017e7965; next = 352@0xc1ec4:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + U16(vm->ip + 0x2u) + vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + 0x7f20b820u;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x231167..0x231169: exact_instruction, entry=352, bytes=68e8; next = 154@0x97ce6:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 154;
    vm_ip += 0x2;
    /* 0x231169..0x23116d: exact_instruction, entry=154, bytes=699d8b24; next = 258@0xadf2c:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x23116d..0x231171: exact_instruction, entry=258, bytes=b2292156; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x231171..0x231174: exact_instruction, entry=18, bytes=0806f6; next = 157@0x98a9a:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x231174..0x231178: exact_instruction, entry=157, bytes=02ccb300; next = 49@0x82820:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0x231178..0x23117d: exact_instruction, entry=49, bytes=007c013d01; next = 108@0x8f24b:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x23117d..0x23117f: exact_instruction, entry=108, bytes=a945; next = 43@0x8173d:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 43;
    vm_ip += 0x2;
    /* 0x23117f..0x231183: exact_instruction, entry=43, bytes=d0edbc99; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x231183..0x231186: exact_instruction, entry=18, bytes=100a3a; next = 322@0xbb3c9:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 322;
    vm_ip += 0x3;
    /* 0x231186..0x23118a: exact_instruction, entry=322, bytes=4c9ff78d; next = 337@0xbec0e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u & U16(vm->ip + 0x2u) - vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u + 0x7ba65dc4u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x23118a..0x23118e: exact_instruction, entry=337, bytes=f0586800; next = 3@0x78c77:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 3;
    vm_ip += 0x4;
    /* 0x23118e..0x231193: exact_instruction, entry=3, bytes=990c003d01; next = 352@0xc1ec4:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu ^ U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu + 0x4bc0d288u;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x231193..0x231195: exact_instruction, entry=352, bytes=aad8; next = 258@0xadf2c:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 258;
    vm_ip += 0x2;
    /* 0x231195..0x231199: exact_instruction, entry=258, bytes=25fe3cab; next = 199@0xa0631:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x231199..0x23119c: exact_instruction, entry=199, bytes=f70b2a; next = 333@0xbd8af:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x23119c..0x2311a0: exact_instruction, entry=333, bytes=83076800; next = 273@0xb11ca:64, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 273;
    vm_ip += 0x4;
    /* 0x2311a0..0x2311a4: exact_instruction, entry=273, bytes=b5c7c3a1; next = 70@0x8610e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags | U16(vm->ip + 0x0u) + vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags - 0x2e0be660u;
    next_entry = 70;
    vm_ip += 0x4;
    /* 0x2311a4..0x2311a9: exact_instruction, entry=70, bytes=79b2003d01; next = 256@0xad849:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u ^ vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u | 0x528cef01u;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x2311a9..0x2311ab: exact_instruction, entry=256, bytes=95f4; next = 157@0x98a9a:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 157;
    vm_ip += 0x2;
    /* 0x2311ab..0x2311af: exact_instruction, entry=157, bytes=f74fb300; next = 179@0x9ca8d:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 179;
    vm_ip += 0x4;
    /* 0x2311af..0x2311b4: exact_instruction, entry=179, bytes=629e35442e; next = 18@0x7be9b:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ U16(vm->ip + 0x3u) ^ vm->flags + 0x7ef33dc5u ^ U16(vm->ip + 0x1u) - vm->state | vm->flags ^ U16(vm->ip + 0x3u) ^ vm->flags + 0x7ef33dc5u - 0x263c3887u;
    next_entry = 18;
    vm_ip += 0x5;
    /* 0x2311b4..0x2311b7: exact_instruction, entry=18, bytes=88126a; next = 337@0xbec0e:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x2311b7..0x2311bb: exact_instruction, entry=337, bytes=0c983b03; next = 88@0x8aa14:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 88;
    vm_ip += 0x4;
    /* 0x2311bb..0x2311c0: exact_instruction, entry=88, bytes=8709003d01; next = 257@0xadbfd:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags - 0x1c9cfceau ^ U16(vm->ip + 0x1u) + vm->state | vm->flags - 0x1c9cfceau ^ 0x415462f5u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x2311c0..0x2311c2: exact_instruction, entry=257, bytes=0fc8; next = 273@0xb11ca:64, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 273;
    vm_ip += 0x2;
    /* 0x2311c2..0x2311c6: exact_instruction, entry=273, bytes=0dadab29; next = 307@0xb8064:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags | U16(vm->ip + 0x0u) + vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags - 0x2e0be660u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x2311c6..0x2311c9: exact_instruction, entry=307, bytes=c855b4; next = 340@0xbf435:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x2311c9..0x2311cd: exact_instruction, entry=340, bytes=d4706800; next = 203@0xa1484:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x2311cd..0x2311d1: exact_instruction, entry=203, bytes=e79e15fb; next = 220@0xa522e:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 220;
    vm_ip += 0x4;
    /* 0x2311d1..0x2311d6: exact_instruction, entry=220, bytes=003d013fba; next = 108@0x8f24b:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x2311d6..0x2311d8: exact_instruction, entry=108, bytes=6b21; next = 260@0xae90b:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 260;
    vm_ip += 0x2;
    /* 0x2311d8..0x2311dc: exact_instruction, entry=260, bytes=160e87ae; next = 172@0x9b68a:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u - U16(vm->ip + 0x0u) - vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u ^ 0x470c080du;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x2311dc..0x2311e0: exact_instruction, entry=172, bytes=4479a309; next = 114@0x90319:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x2311e0..0x2311e4: exact_instruction, entry=114, bytes=362dbf75; next = 18@0x7be9b:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x2311e4..0x2311e7: exact_instruction, entry=18, bytes=88100a; next = 192@0x9f00a:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 192;
    vm_ip += 0x3;
    /* 0x2311e7..0x2311ec: exact_instruction, entry=192, bytes=edb33d0100; next = 173@0x9ba74:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu - U16(vm->ip + 0x0u) ^ vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x2311ec..0x2311ee: exact_instruction, entry=173, bytes=bf0c; next = 254@0xad32c:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 254;
    vm_ip += 0x2;
    /* 0x2311ee..0x2311f2: exact_instruction, entry=254, bytes=f28eea4a; next = 297@0xb64d7:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) ^ vm->state + vm->flags | vm->flags | 0x617339d9u | 0x5635509u | 0x15874263u ^ 0x5bf4e999u & vm->flags - 0x35a18ac8u | 0x5feb6979u & 0x3e80b852u | U16(vm->ip + 0x2u) - 0x228a41a2u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x2311f2..0x2311f5: exact_instruction, entry=297, bytes=b11d41; next = 92@0x8b8cb:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 92;
    vm_ip += 0x3;
    /* 0x2311f5..0x2311f9: exact_instruction, entry=92, bytes=a434c56f; next = 282@0xb3128:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x2u) ^ vm->state ^ vm->flags | 0x39591837u | vm->flags | 0x39591837u | 0x1002fee7u + 0x2efa2a96u ^ U16(vm->ip + 0x0u) + vm->state & U16(vm->ip + 0x2u) ^ vm->state ^ vm->flags | 0x39591837u | vm->flags | 0x39591837u | 0x1002fee7u + 0x2efa2a96u + 0x604aa997u;
    next_entry = 282;
    vm_ip += 0x4;
    /* 0x2311f9..0x2311fe: exact_instruction, entry=282, bytes=2d22055762; next = 280@0xb2661:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    next_entry = 280;
    vm_ip += 0x5;
    /* 0x2311fe..0x231203: exact_instruction, entry=280, bytes=3748c53d01; next = 257@0xadbfd:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x70ead2e5u | vm->flags | vm->flags & 0x43b06801u - vm->flags | 0x4f5422beu | vm->flags | 0x2fca37a8u - 0x3d94b3d1u + vm->flags | 0x2fca37a8u | 0x214abc1fu ^ 0x1e5dc934u & 0x7b3ce1ecu + U16(vm->ip + 0x0u) - 0x267d402fu;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x231203..0x231205: exact_instruction, entry=257, bytes=3ffa; next = 340@0xbf435:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 340;
    vm_ip += 0x2;
    /* 0x231205..0x231209: exact_instruction, entry=340, bytes=143aab00; next = 333@0xbd8af:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x231209..0x23120d: exact_instruction, entry=333, bytes=cbd0ab00; next = 28@0x7e390:64, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x23120d..0x231210: exact_instruction, entry=28, bytes=f8038c; next = 127@0x926c3:64, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 127;
    vm_ip += 0x3;
    /* 0x231210..0x231215: exact_instruction, entry=127, bytes=99a12b3d01; next = 257@0xadbfd:64, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x0u) - vm->state + 0xf376a6au;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x231215..0x231217: exact_instruction, entry=257, bytes=27f9; next = 308@0xb837c:64, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 308;
    vm_ip += 0x2;
    /* 0x231217..0x230839: long_branch_backedge, entry=308, bytes=ab000000de090080; next = table[171], ip -= 0x9de; validation=file_backed_operand;source_state=transition_model */
    /* state preserved: exact */
    next_entry = (int)U32(vm->ip + 0x0);
    vm_ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* terminal CFG edge: decoded_control, target_vm_ip=0x230839, coverage=- */
    vmdec_p030_bb_0169(vm, vm_ip);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

void vm_program_atlas_030_decompiled(VMState *vm, uint64_t vm_ip) {
    switch (vm_ip) {
    case 0x230722: vmdec_p030_bb_0168(vm, vm_ip); return;
    case 0x230839: vmdec_p030_bb_0169(vm, vm_ip); return;
    case 0x230b2c: vmdec_p030_bb_0170(vm, vm_ip); return;
    case 0x230e18: vmdec_p030_bb_0171(vm, vm_ip); return;
    default: vm_program_unknown_entry(vm, vm_ip); return;
    }
}

/* === VM PROGRAM STRING REFERENCES BEGIN === */
typedef struct VMProgramStringRef {
    const char *source;
    uint64_t site;
    uint64_t value;
    uint64_t string_vaddr;
    uint64_t string_offset;
    uint64_t string_size;
    const char *section;
    const char *match_class;
    const char *text;
} VMProgramStringRef;
enum { VM_PROGRAM_ATLAS_030_STRING_REF_COUNT = 0 };
/* No exact string-address references were found in this VM program's decompiled literals or bytecode immediates. */
/* === VM PROGRAM STRING REFERENCES END === */
