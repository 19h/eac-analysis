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

/* VM program atlas 53: 0x33db28..0x33e849 */

static void vmdec_p053_bb_0329(VMState *vm, uint64_t vm_ip);
static void vmdec_p053_bb_0330(VMState *vm, uint64_t vm_ip);
static void vmdec_p053_bb_0331(VMState *vm, uint64_t vm_ip);
static void vmdec_p053_bb_0332(VMState *vm, uint64_t vm_ip);
static void vmdec_p053_bb_0333(VMState *vm, uint64_t vm_ip);
static void vmdec_p053_bb_0334(VMState *vm, uint64_t vm_ip);
static void vmdec_p053_bb_0335(VMState *vm, uint64_t vm_ip);
static void vmdec_p053_bb_0336(VMState *vm, uint64_t vm_ip);
static void vmdec_p053_bb_0337(VMState *vm, uint64_t vm_ip);

static void vmdec_p053_bb_0329(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 329: 0x33db28..0x33dcbd; rows=105, terminal=exact_instruction */
    /* 0x33db28..0x33db2c: exact_instruction, entry=310, bytes=e801ab00; next = 171@0x9b4b3:3, ip += +0x4; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    /* state preserved: state_preserve */
    next_entry = 171;
    vm_ip += 0x4;
    /* 0x33db2c..0x33db2e: exact_instruction, entry=171, bytes=9d00; next = 157@0x98a9a:3, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 157;
    vm_ip += 0x2;
    /* 0x33db2e..0x33db32: exact_instruction, entry=157, bytes=37cf9900; next = 347@0xc088d:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x33db32..0x33db36: exact_instruction, entry=347, bytes=cc81a000; next = 307@0xb8064:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33db36..0x33db39: exact_instruction, entry=307, bytes=faadb2; next = 287@0xb45d2:3, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 287;
    vm_ip += 0x3;
    /* 0x33db39..0x33db3d: exact_instruction, entry=287, bytes=da36e801; next = 333@0xbd8af:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33db3d..0x33db41: exact_instruction, entry=333, bytes=8fcfab00; next = 18@0x7be9b:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33db41..0x33db44: exact_instruction, entry=18, bytes=08b21a; next = 64@0x85059:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x33db44..0x33db48: exact_instruction, entry=64, bytes=58997ed7; next = 26@0x7dbbb:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x33db48..0x33db4c: exact_instruction, entry=26, bytes=183be801; next = 189@0x9e7af:3, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33db4c..0x33db50: exact_instruction, entry=189, bytes=e404d8e2; next = 333@0xbd8af:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33db50..0x33db54: exact_instruction, entry=333, bytes=6fd98900; next = 307@0xb8064:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33db54..0x33db57: exact_instruction, entry=307, bytes=5285b4; next = 346@0xc0535:3, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 346;
    vm_ip += 0x3;
    /* 0x33db57..0x33db5b: exact_instruction, entry=346, bytes=4e0fe801; next = 66@0x855ff:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33db5b..0x33db5e: exact_instruction, entry=66, bytes=3154da; next = 43@0x8173d:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x33db5e..0x33db62: exact_instruction, entry=43, bytes=32a9f6d0; next = 189@0x9e7af:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33db62..0x33db66: exact_instruction, entry=189, bytes=743728a0; next = 315@0xb9451:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33db66..0x33db6a: exact_instruction, entry=315, bytes=e80151f6; next = 196@0x9fbcd:3, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x33db6a..0x33db6e: exact_instruction, entry=196, bytes=aa7cd5ba; next = 114@0x90319:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33db6e..0x33db72: exact_instruction, entry=114, bytes=81502d9a; next = 28@0x7e390:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33db72..0x33db75: exact_instruction, entry=28, bytes=d80986; next = 315@0xb9451:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x33db75..0x33db79: exact_instruction, entry=315, bytes=e80149f6; next = 199@0xa0631:3, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33db79..0x33db7c: exact_instruction, entry=199, bytes=7f8e8a; next = 43@0x8173d:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x33db7c..0x33db80: exact_instruction, entry=43, bytes=33b3f7ca; next = 189@0x9e7af:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33db80..0x33db84: exact_instruction, entry=189, bytes=503e589e; next = 33@0x7f7c4:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x33db84..0x33db88: exact_instruction, entry=33, bytes=e801e082; next = 66@0x855ff:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33db88..0x33db8b: exact_instruction, entry=66, bytes=1d402a; next = 258@0xadf2c:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33db8b..0x33db8f: exact_instruction, entry=258, bytes=534d6083; next = 43@0x8173d:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x33db8f..0x33db93: exact_instruction, entry=43, bytes=3f749300; next = 26@0x7dbbb:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x33db93..0x33db97: exact_instruction, entry=26, bytes=a88ee801; next = 340@0xbf435:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33db97..0x33db9b: exact_instruction, entry=340, bytes=c8753800; next = 307@0xb8064:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33db9b..0x33db9e: exact_instruction, entry=307, bytes=d2f5ae; next = 168@0x9aa83:3, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x33db9e..0x33dba2: exact_instruction, entry=168, bytes=207826d9; next = 315@0xb9451:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33dba2..0x33dba6: exact_instruction, entry=315, bytes=e80199f5; next = 189@0x9e7af:3, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33dba6..0x33dbaa: exact_instruction, entry=189, bytes=f6d7b4dc; next = 268@0xb0007:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x33dbaa..0x33dbae: exact_instruction, entry=268, bytes=5a29320b; next = 215@0xa4609:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33dbae..0x33dbb1: exact_instruction, entry=215, bytes=f8085b; next = 287@0xb45d2:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 287;
    vm_ip += 0x3;
    /* 0x33dbb1..0x33dbb5: exact_instruction, entry=287, bytes=b2a8e801; next = 199@0xa0631:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33dbb5..0x33dbb8: exact_instruction, entry=199, bytes=b7e9f2; next = 337@0xbec0e:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33dbb8..0x33dbbc: exact_instruction, entry=337, bytes=6414555a; next = 333@0xbd8af:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33dbbc..0x33dbc0: exact_instruction, entry=333, bytes=cbf89d01; next = 287@0xb45d2:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x33dbc0..0x33dbc4: exact_instruction, entry=287, bytes=daa8e801; next = 258@0xadf2c:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33dbc4..0x33dbc8: exact_instruction, entry=258, bytes=efdf7dc5; next = 297@0xb64d7:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33dbc8..0x33dbcb: exact_instruction, entry=297, bytes=f50ef6; next = 168@0x9aa83:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x33dbcb..0x33dbcf: exact_instruction, entry=168, bytes=da582fd8; next = 315@0xb9451:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33dbcf..0x33dbd3: exact_instruction, entry=315, bytes=e80161f8; next = 258@0xadf2c:3, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33dbd3..0x33dbd7: exact_instruction, entry=258, bytes=afe07bb3; next = 43@0x8173d:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x33dbd7..0x33dbdb: exact_instruction, entry=43, bytes=35748900; next = 28@0x7e390:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33dbdb..0x33dbde: exact_instruction, entry=28, bytes=980708; next = 243@0xaab6a:3, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 243;
    vm_ip += 0x3;
    /* 0x33dbde..0x33dbe2: exact_instruction, entry=243, bytes=3698e801; next = 18@0x7be9b:3, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33dbe2..0x33dbe5: exact_instruction, entry=18, bytes=61083a; next = 268@0xb0007:3, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x33dbe5..0x33dbe9: exact_instruction, entry=268, bytes=9b9fdda4; next = 340@0xbf435:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33dbe9..0x33dbed: exact_instruction, entry=340, bytes=60c49100; next = 346@0xc0535:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x33dbed..0x33dbf1: exact_instruction, entry=346, bytes=c680e801; next = 66@0x855ff:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33dbf1..0x33dbf4: exact_instruction, entry=66, bytes=d3d15a; next = 203@0xa1484:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 203;
    vm_ip += 0x3;
    /* 0x33dbf4..0x33dbf8: exact_instruction, entry=203, bytes=df92afba; next = 347@0xc088d:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x33dbf8..0x33dbfc: exact_instruction, entry=347, bytes=3e081803; next = 26@0x7dbbb:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x33dbfc..0x33dc00: exact_instruction, entry=26, bytes=3b3ce801; next = 64@0x85059:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33dc00..0x33dc04: exact_instruction, entry=64, bytes=12597576; next = 168@0x9aa83:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x33dc04..0x33dc08: exact_instruction, entry=168, bytes=c5984dd8; next = 297@0xb64d7:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33dc08..0x33dc0b: exact_instruction, entry=297, bytes=756df9; next = 26@0x7dbbb:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 26;
    vm_ip += 0x3;
    /* 0x33dc0b..0x33dc0f: exact_instruction, entry=26, bytes=265ce801; next = 258@0xadf2c:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33dc0f..0x33dc13: exact_instruction, entry=258, bytes=6b99480b; next = 333@0xbd8af:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33dc13..0x33dc17: exact_instruction, entry=333, bytes=33e9b300; next = 297@0xb64d7:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33dc17..0x33dc1a: exact_instruction, entry=297, bytes=d49b75; next = 315@0xb9451:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x33dc1a..0x33dc1e: exact_instruction, entry=315, bytes=e80149f5; next = 167@0x9a8d2:3, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 167;
    vm_ip += 0x4;
    /* 0x33dc1e..0x33dc24: exact_instruction, entry=167, bytes=e8013d015221; next = 351@0xc1d48:3, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) ^ vm->state ^ 0x5f92615u;
    next_entry = 351;
    vm_ip += 0x6;
    /* 0x33dc24..0x33dc29: exact_instruction, entry=351, bytes=e801413210; next = 254@0xad32c:3, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) + vm->state - 0x7b3a2d18u;
    next_entry = 254;
    vm_ip += 0x5;
    /* 0x33dc29..0x33dc2d: exact_instruction, entry=254, bytes=dc965a47; next = 183@0x9d495:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) ^ vm->state + vm->flags | vm->flags | 0x617339d9u | 0x5635509u | 0x15874263u ^ 0x5bf4e999u & vm->flags - 0x35a18ac8u | 0x5feb6979u & 0x3e80b852u | U16(vm->ip + 0x2u) - 0x228a41a2u;
    next_entry = 183;
    vm_ip += 0x4;
    /* 0x33dc2d..0x33dc31: exact_instruction, entry=183, bytes=e801be7e; next = 64@0x85059:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0xfaa325cu ^ 0x694e1f66u | U16(vm->ip + 0x2u) - vm->state + 0xfaa325cu ^ 0x694e1f66u - 0x1aed554cu;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33dc31..0x33dc35: exact_instruction, entry=64, bytes=93e82b71; next = 43@0x8173d:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x33dc35..0x33dc39: exact_instruction, entry=43, bytes=c4cc60b5; next = 185@0x9d964:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33dc39..0x33dc3c: exact_instruction, entry=185, bytes=6b173a; next = 49@0x82820:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 49;
    vm_ip += 0x3;
    /* 0x33dc3c..0x33dc41: exact_instruction, entry=49, bytes=000e713d01; next = 198@0xa037e:3, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0x33dc41..0x33dc43: exact_instruction, entry=198, bytes=6711; next = 28@0x7e390:3, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 28;
    vm_ip += 0x2;
    /* 0x33dc43..0x33dc46: exact_instruction, entry=28, bytes=6004bc; next = 140@0x94e5a:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 140;
    vm_ip += 0x3;
    /* 0x33dc46..0x33dc4c: exact_instruction, entry=140, bytes=90f3e09c0b0d; next = 337@0xbec0e:3, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    next_entry = 337;
    vm_ip += 0x6;
    /* 0x33dc4c..0x33dc50: exact_instruction, entry=337, bytes=a096ed8e; next = 168@0x9aa83:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x33dc50..0x33dc54: exact_instruction, entry=168, bytes=d4d646d1; next = 70@0x8610e:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 70;
    vm_ip += 0x4;
    /* 0x33dc54..0x33dc59: exact_instruction, entry=70, bytes=29a2003d01; next = 198@0xa037e:3, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u ^ vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u | 0x528cef01u;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0x33dc59..0x33dc5b: exact_instruction, entry=198, bytes=aea0; next = 105@0x8e6b4:3, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 105;
    vm_ip += 0x2;
    /* 0x33dc5b..0x33dc60: exact_instruction, entry=105, bytes=dcc5400662; next = 200@0xa0a9e:3, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ 0x6808cf40u - 0x72c2e29bu & U16(vm->ip + 0x0u) + vm->state & vm->flags ^ 0x6808cf40u - 0x72c2e29bu + vm->flags ^ 0x6808cf40u - 0x72c2e29bu - U16(vm->ip + 0x2u);
    next_entry = 200;
    vm_ip += 0x5;
    /* 0x33dc60..0x33dc66: exact_instruction, entry=200, bytes=d0e1105f1002; next = 66@0x855ff:3, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - vm->flags ^ 0x64193a1au ^ 0x227666a1u + U32(vm->ip + 0x0u) ^ vm->flags & 0x21af07eu | 0x54bd1bfeu ^ 0x9ad7a2fu ^ 0x5c24c721u + U16(vm->ip + 0x4u);
    next_entry = 66;
    vm_ip += 0x6;
    /* 0x33dc66..0x33dc69: exact_instruction, entry=66, bytes=e28646; next = 317@0xba1e2:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 317;
    vm_ip += 0x3;
    /* 0x33dc69..0x33dc6d: exact_instruction, entry=317, bytes=b06effef; next = 83@0x8947b:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u ^ U16(vm->ip + 0x2u) + vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u & vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u & 0x19a77bau + vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u ^ vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | 0x501e3e6cu ^ vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u + U16(vm->ip + 0x0u) - vm->state - vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u ^ U16(vm->ip + 0x2u) + vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u & vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u & 0x19a77bau + vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u ^ vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | 0x501e3e6cu ^ vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u + 0x18e7b255u;
    next_entry = 83;
    vm_ip += 0x4;
    /* 0x33dc6d..0x33dc72: exact_instruction, entry=83, bytes=675b003d01; next = 256@0xad849:3, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x33dc72..0x33dc74: exact_instruction, entry=256, bytes=2ab9; next = 307@0xb8064:3, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 307;
    vm_ip += 0x2;
    /* 0x33dc74..0x33dc77: exact_instruction, entry=307, bytes=fad5af; next = 196@0x9fbcd:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 196;
    vm_ip += 0x3;
    /* 0x33dc77..0x33dc7b: exact_instruction, entry=196, bytes=de05c498; next = 340@0xbf435:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33dc7b..0x33dc7f: exact_instruction, entry=340, bytes=3ac66800; next = 121@0x91379:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 121;
    vm_ip += 0x4;
    /* 0x33dc7f..0x33dc83: exact_instruction, entry=121, bytes=2720cd35; next = 91@0x8b6de:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau + U16(vm->ip + 0x0u) + vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau - vm->flags;
    next_entry = 91;
    vm_ip += 0x4;
    /* 0x33dc83..0x33dc87: exact_instruction, entry=91, bytes=396ee801; next = 83@0x8947b:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x0u) ^ vm->state;
    next_entry = 83;
    vm_ip += 0x4;
    /* 0x33dc87..0x33dc8c: exact_instruction, entry=83, bytes=15aa003d01; next = 144@0x95887:3, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x33dc8c..0x33dc8e: exact_instruction, entry=144, bytes=1f9e; next = 345@0xc02e4:3, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 345;
    vm_ip += 0x2;
    /* 0x33dc8e..0x33dc94: exact_instruction, entry=345, bytes=78fff7a0f737; next = 64@0x85059:3, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags + U16(vm->ip + 0x0u) + vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags;
    next_entry = 64;
    vm_ip += 0x6;
    /* 0x33dc94..0x33dc98: exact_instruction, entry=64, bytes=9ebfd8a3; next = 28@0x7e390:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33dc98..0x33dc9b: exact_instruction, entry=28, bytes=e804c4; next = 157@0x98a9a:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x33dc9b..0x33dc9f: exact_instruction, entry=157, bytes=9bd46800; next = 320@0xbada5:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 320;
    vm_ip += 0x4;
    /* 0x33dc9f..0x33dca4: exact_instruction, entry=320, bytes=003d0189ba; next = 108@0x8f24b:3, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags - vm->flags - 0x7e143884u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x33dca4..0x33dca6: exact_instruction, entry=108, bytes=e5a9; next = 92@0x8b8cb:3, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 92;
    vm_ip += 0x2;
    /* 0x33dca6..0x33dcaa: exact_instruction, entry=92, bytes=d434ad77; next = 253@0xacfb1:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x2u) ^ vm->state ^ vm->flags | 0x39591837u | vm->flags | 0x39591837u | 0x1002fee7u + 0x2efa2a96u ^ U16(vm->ip + 0x0u) + vm->state & U16(vm->ip + 0x2u) ^ vm->state ^ vm->flags | 0x39591837u | vm->flags | 0x39591837u | 0x1002fee7u + 0x2efa2a96u + 0x604aa997u;
    next_entry = 253;
    vm_ip += 0x4;
    /* 0x33dcaa..0x33dcb0: exact_instruction, entry=253, bytes=96c125005820; next = 307@0xb8064:3, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x764111b0u + 0x6d2270cbu + U32(vm->ip + 0x2u) ^ vm->flags + vm->flags | 0x62c3b0ddu | 0x2b96d1d1u & 0x2d46e2e3u ^ U16(vm->ip + 0x0u) + 0x7c5d4802u;
    next_entry = 307;
    vm_ip += 0x6;
    /* 0x33dcb0..0x33dcb3: exact_instruction, entry=307, bytes=0485b2; next = 282@0xb3128:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 282;
    vm_ip += 0x3;
    /* 0x33dcb3..0x33dcb8: exact_instruction, entry=282, bytes=6000e4a93a; next = 52@0x833c7:3, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    next_entry = 52;
    vm_ip += 0x5;
    /* 0x33dcb8..0x33dcbd: exact_instruction, entry=52, bytes=ca34f73d01; next = 210@0xa2da3:3, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) + vm->state ^ 0x7823b2dau;
    next_entry = 210;
    vm_ip += 0x5;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x33dcbd, coverage=hidden_span_of_17:3 */
    {
        static const VMSyntheticTailEvidence tail = {
            UINT64_C(0x33dcb8),
            UINT64_C(0x33dcbd),
            52u,
            210u,
            "covered_synthetic_fallthrough",
            "hidden_span_of_17:3",
            "next = 210@0xa2da3:3, ip += +0x5; dispatch_model=static_100; state=state_add_const",
        };
        vm_program_synthetic_tail_evidence(vm, &tail);
    }
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p053_bb_0330(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 330: 0x33dcce..0x33dd15; rows=18, terminal=exact_instruction */
    /* 0x33dcce..0x33dcd2: exact_instruction, entry=180, bytes=1b0ce801; next = 196@0x9fbcd:3, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x0u) + 0x7920fa05u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x33dcd2..0x33dcd6: exact_instruction, entry=196, bytes=325fcda1; next = 337@0xbec0e:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33dcd6..0x33dcda: exact_instruction, entry=337, bytes=64716790; next = 307@0xb8064:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33dcda..0x33dcdd: exact_instruction, entry=307, bytes=4ecda9; next = 3@0x78c77:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 3;
    vm_ip += 0x3;
    /* 0x33dcdd..0x33dce2: exact_instruction, entry=3, bytes=41c0003d01; next = 198@0xa037e:3, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu ^ U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu + 0x4bc0d288u;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0x33dce2..0x33dce4: exact_instruction, entry=198, bytes=4924; next = 340@0xbf435:3, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 340;
    vm_ip += 0x2;
    /* 0x33dce4..0x33dce8: exact_instruction, entry=340, bytes=dc916800; next = 140@0x94e5a:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 140;
    vm_ip += 0x4;
    /* 0x33dce8..0x33dcee: exact_instruction, entry=140, bytes=db971e981d02; next = 18@0x7be9b:3, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    next_entry = 18;
    vm_ip += 0x6;
    /* 0x33dcee..0x33dcf1: exact_instruction, entry=18, bytes=f80e2e; next = 157@0x98a9a:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x33dcf1..0x33dcf5: exact_instruction, entry=157, bytes=53cd6800; next = 319@0xba72f:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 319;
    vm_ip += 0x4;
    /* 0x33dcf5..0x33dcfa: exact_instruction, entry=319, bytes=3d01862e00; next = 257@0xadbfd:3, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + U16(vm->ip + 0x2u) + vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + 0x7f20b820u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x33dcfa..0x33dcfc: exact_instruction, entry=257, bytes=7fb0; next = 17@0x7bae9:3, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 17;
    vm_ip += 0x2;
    /* 0x33dcfc..0x33dd01: exact_instruction, entry=17, bytes=95fe3a88a0; next = 307@0xb8064:3, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ 0x4365071cu & U16(vm->ip + 0x0u) ^ vm->state | vm->flags ^ 0x4365071cu + vm->flags ^ 0x4365071cu ^ 0x95f9698u + U16(vm->ip + 0x3u) - vm->state | vm->flags ^ 0x4365071cu & U16(vm->ip + 0x0u) ^ vm->state | vm->flags ^ 0x4365071cu + vm->flags ^ 0x4365071cu ^ 0x95f9698u;
    next_entry = 307;
    vm_ip += 0x5;
    /* 0x33dd01..0x33dd04: exact_instruction, entry=307, bytes=eb9db4; next = 349@0xc140b:3, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 349;
    vm_ip += 0x3;
    /* 0x33dd04..0x33dd08: exact_instruction, entry=349, bytes=b12cc80a; next = 345@0xc02e4:3, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x37932789u | 0x16ca0efdu ^ 0x78372234u & U16(vm->ip + 0x0u) ^ vm->state & vm->flags | 0x37932789u | 0x16ca0efdu ^ 0x78372234u - vm->flags + vm->flags + 0x5b8191bu - 0x48cf2626u - 0x7444487fu | 0x1897f25cu | vm->flags + 0x5b8191bu - 0x48cf2626u - 0x7444487fu ^ vm->state & vm->flags | 0x37932789u | 0x16ca0efdu ^ 0x78372234u & U16(vm->ip + 0x0u) ^ vm->state & vm->flags | 0x37932789u | 0x16ca0efdu ^ 0x78372234u - vm->flags + vm->flags + 0x5b8191bu - 0x48cf2626u - 0x7444487fu | 0x18eb935cu | 0x6cbcf01au | 0x6e5025ccu + U16(vm->ip + 0x2u);
    next_entry = 345;
    vm_ip += 0x4;
    /* 0x33dd08..0x33dd0e: exact_instruction, entry=345, bytes=c2fd0ee4a61a; next = 269@0xb045b:3, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags + U16(vm->ip + 0x0u) + vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags;
    next_entry = 269;
    vm_ip += 0x6;
    /* 0x33dd0e..0x33dd13: exact_instruction, entry=269, bytes=003d01f7ae; next = 160@0x994cf:3, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + U16(vm->ip + 0x3u) + vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + 0x4faa382u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x33dd13..0x33dd15: exact_instruction, entry=160, bytes=b82f; next = 165@0x9a24c:3, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 165;
    vm_ip += 0x2;
    /* terminal CFG edge: fallthrough, target_vm_ip=0x33dd15, coverage=- */
    vmdec_p053_bb_0331(vm, vm_ip);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p053_bb_0331(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 331: 0x33dd15..0x33de22; rows=72, terminal=exact_instruction */
    /* 0x33dd15..0x33dd17: exact_instruction, entry=165, bytes=7c00; next = 124@0x91e81:12, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 124;
    vm_ip += 0x2;
    /* 0x33dd17..0x33dd1d: exact_instruction, entry=124, bytes=e19d072eff80; next = 43@0x8173d:12, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u - U16(vm->ip + 0x4u) + vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ 0x3654c1a7u;
    next_entry = 43;
    vm_ip += 0x6;
    /* 0x33dd1d..0x33dd21: exact_instruction, entry=43, bytes=bc40c03e; next = 340@0xbf435:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33dd21..0x33dd25: exact_instruction, entry=340, bytes=b4556800; next = 297@0xb64d7:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33dd25..0x33dd28: exact_instruction, entry=297, bytes=f4b7d6; next = 79@0x885b0:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 79;
    vm_ip += 0x3;
    /* 0x33dd28..0x33dd2d: exact_instruction, entry=79, bytes=52853d0100; next = 173@0x9ba74:12, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x33dd2d..0x33dd2f: exact_instruction, entry=173, bytes=9f00; next = 62@0x84aa3:12, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 62;
    vm_ip += 0x2;
    /* 0x33dd2f..0x33dd33: exact_instruction, entry=62, bytes=d9a77d60; next = 307@0xb8064:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) ^ vm->flags + 0xd90ded5u ^ 0x5dbb6647u + U16(vm->ip + 0x0u) ^ vm->state | U16(vm->ip + 0x2u) ^ vm->flags + 0xd90ded5u ^ 0x5dbb6647u + 0x7ebb48a2u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33dd33..0x33dd36: exact_instruction, entry=307, bytes=7cf5ae; next = 168@0x9aa83:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x33dd36..0x33dd3a: exact_instruction, entry=168, bytes=28e706d5; next = 189@0x9e7af:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33dd3a..0x33dd3e: exact_instruction, entry=189, bytes=a7a864ea; next = 124@0x91e81:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 124;
    vm_ip += 0x4;
    /* 0x33dd3e..0x33dd44: exact_instruction, entry=124, bytes=9c4e8dd76f3f; next = 37@0x80685:12, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u - U16(vm->ip + 0x4u) + vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ 0x3654c1a7u;
    next_entry = 37;
    vm_ip += 0x6;
    /* 0x33dd44..0x33dd49: exact_instruction, entry=37, bytes=49c3003d01; next = 173@0x9ba74:12, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x504fc3du - 0x4eca0e49u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags + 0x504fc3du - 0x4eca0e49u ^ 0x384e1c86u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x33dd49..0x33dd4b: exact_instruction, entry=173, bytes=2f8a; next = 332@0xbd36d:12, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 332;
    vm_ip += 0x2;
    /* 0x33dd4b..0x33dd4f: exact_instruction, entry=332, bytes=9cd6efc1; next = 297@0xb64d7:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u ^ U16(vm->ip + 0x2u) ^ vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x42097e5du;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33dd4f..0x33dd52: exact_instruction, entry=297, bytes=7d0568; next = 347@0xc088d:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x33dd52..0x33dd56: exact_instruction, entry=347, bytes=f30d1740; next = 196@0x9fbcd:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x33dd56..0x33dd5a: exact_instruction, entry=196, bytes=78f7bcd8; next = 83@0x8947b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 83;
    vm_ip += 0x4;
    /* 0x33dd5a..0x33dd5f: exact_instruction, entry=83, bytes=69db003d01; next = 256@0xad849:12, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x33dd5f..0x33dd61: exact_instruction, entry=256, bytes=1e3d; next = 66@0x855ff:12, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 66;
    vm_ip += 0x2;
    /* 0x33dd61..0x33dd64: exact_instruction, entry=66, bytes=7fca2a; next = 114@0x90319:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x33dd64..0x33dd68: exact_instruction, entry=114, bytes=2da63af4; next = 20@0x7c62b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x33dd68..0x33dd6c: exact_instruction, entry=20, bytes=e8019a70; next = 114@0x90319:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33dd6c..0x33dd70: exact_instruction, entry=114, bytes=5ca763ea; next = 307@0xb8064:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33dd70..0x33dd73: exact_instruction, entry=307, bytes=7a25af; next = 174@0x9bd8f:12, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x33dd73..0x33dd77: exact_instruction, entry=174, bytes=e35de801; next = 261@0xaeda2:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 261;
    vm_ip += 0x4;
    /* 0x33dd77..0x33dd7d: exact_instruction, entry=261, bytes=e801af6d3d01; next = 347@0xc088d:12, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x2u) + 0x4c539d29u;
    next_entry = 347;
    vm_ip += 0x6;
    /* 0x33dd7d..0x33dd81: exact_instruction, entry=347, bytes=3a30bc88; next = 297@0xb64d7:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33dd81..0x33dd84: exact_instruction, entry=297, bytes=188f00; next = 176@0x9c10b:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33dd84..0x33dd88: exact_instruction, entry=176, bytes=e801d79a; next = 199@0xa0631:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33dd88..0x33dd8b: exact_instruction, entry=199, bytes=ea15ad; next = 64@0x85059:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x33dd8b..0x33dd8f: exact_instruction, entry=64, bytes=442579e6; next = 20@0x7c62b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x33dd8f..0x33dd93: exact_instruction, entry=20, bytes=e801ef04; next = 114@0x90319:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33dd93..0x33dd97: exact_instruction, entry=114, bytes=89524e06; next = 199@0xa0631:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33dd97..0x33dd9a: exact_instruction, entry=199, bytes=a3e4b6; next = 184@0x9d694:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x33dd9a..0x33dd9e: exact_instruction, entry=184, bytes=62fae801; next = 258@0xadf2c:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33dd9e..0x33dda2: exact_instruction, entry=258, bytes=f856ff75; next = 215@0xa4609:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33dda2..0x33dda5: exact_instruction, entry=215, bytes=7005c8; next = 174@0x9bd8f:12, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x33dda5..0x33dda9: exact_instruction, entry=174, bytes=1bb9e801; next = 114@0x90319:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33dda9..0x33ddad: exact_instruction, entry=114, bytes=95612926; next = 185@0x9d964:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33ddad..0x33ddb0: exact_instruction, entry=185, bytes=cb953a; next = 123@0x91a59:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x33ddb0..0x33ddb4: exact_instruction, entry=123, bytes=09c6e801; next = 340@0xbf435:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33ddb4..0x33ddb8: exact_instruction, entry=340, bytes=94109d01; next = 185@0x9d964:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33ddb8..0x33ddbb: exact_instruction, entry=185, bytes=406b3a; next = 176@0x9c10b:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33ddbb..0x33ddbf: exact_instruction, entry=176, bytes=e8018407; next = 337@0xbec0e:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33ddbf..0x33ddc3: exact_instruction, entry=337, bytes=47f58990; next = 215@0xa4609:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33ddc3..0x33ddc6: exact_instruction, entry=215, bytes=0805db; next = 161@0x9975a:12, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x33ddc6..0x33ddca: exact_instruction, entry=161, bytes=19d9e801; next = 340@0xbf435:12, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33ddca..0x33ddce: exact_instruction, entry=340, bytes=430d3800; next = 18@0x7be9b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33ddce..0x33ddd1: exact_instruction, entry=18, bytes=f00ed6; next = 158@0x99029:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0x33ddd1..0x33ddd5: exact_instruction, entry=158, bytes=e80100e4; next = 337@0xbec0e:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33ddd5..0x33ddd9: exact_instruction, entry=337, bytes=04715f1b; next = 185@0x9d964:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33ddd9..0x33dddc: exact_instruction, entry=185, bytes=d7a23a; next = 123@0x91a59:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x33dddc..0x33dde0: exact_instruction, entry=123, bytes=95cee801; next = 199@0xa0631:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33dde0..0x33dde3: exact_instruction, entry=199, bytes=cf361a; next = 337@0xbec0e:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33dde3..0x33dde7: exact_instruction, entry=337, bytes=8c751789; next = 174@0x9bd8f:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x33dde7..0x33ddeb: exact_instruction, entry=174, bytes=9b59e801; next = 185@0x9d964:12, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33ddeb..0x33ddee: exact_instruction, entry=185, bytes=14153a; next = 189@0x9e7af:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x33ddee..0x33ddf2: exact_instruction, entry=189, bytes=dcf6c0e7; next = 174@0x9bd8f:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x33ddf2..0x33ddf6: exact_instruction, entry=174, bytes=9548e801; next = 64@0x85059:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33ddf6..0x33ddfa: exact_instruction, entry=64, bytes=3178d40c; next = 28@0x7e390:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33ddfa..0x33ddfd: exact_instruction, entry=28, bytes=d803e2; next = 123@0x91a59:12, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x33ddfd..0x33de01: exact_instruction, entry=123, bytes=8ef2e801; next = 199@0xa0631:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33de01..0x33de04: exact_instruction, entry=199, bytes=b73ca2; next = 340@0xbf435:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x33de04..0x33de08: exact_instruction, entry=340, bytes=2cc28900; next = 20@0x7c62b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x33de08..0x33de0c: exact_instruction, entry=20, bytes=e801f97a; next = 189@0x9e7af:12, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33de0c..0x33de10: exact_instruction, entry=189, bytes=9cfa94e6; next = 66@0x855ff:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33de10..0x33de13: exact_instruction, entry=66, bytes=87ba2a; next = 123@0x91a59:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x33de13..0x33de17: exact_instruction, entry=123, bytes=8a64e801; next = 297@0xb64d7:12, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33de17..0x33de1a: exact_instruction, entry=297, bytes=8acd99; next = 340@0xbf435:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x33de1a..0x33de1e: exact_instruction, entry=340, bytes=8a569900; next = 123@0x91a59:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x33de1e..0x33de22: exact_instruction, entry=123, bytes=ef5ce801; next = 264@0xaf4cf:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 264;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x33de22, coverage=hidden_span_of_14:12 */
    {
        static const VMSyntheticTailEvidence tail = {
            UINT64_C(0x33de1e),
            UINT64_C(0x33de22),
            123u,
            264u,
            "covered_synthetic_fallthrough",
            "hidden_span_of_14:12",
            "next = 264@0xaf4cf:12, ip += +0x4; dispatch_model=static_100; state=state_add_const",
        };
        vm_program_synthetic_tail_evidence(vm, &tail);
    }
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p053_bb_0332(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 332: 0x33de30..0x33e02a; rows=134, terminal=exact_instruction */
    /* 0x33de30..0x33de32: exact_instruction, entry=171, bytes=a800; next = 168@0x9aa83:12, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 168;
    vm_ip += 0x2;
    /* 0x33de32..0x33de36: exact_instruction, entry=168, bytes=9900ced0; next = 64@0x85059:12, ip += +0x4; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33de36..0x33de3a: exact_instruction, entry=64, bytes=aa321c96; next = 185@0x9d964:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33de3a..0x33de3d: exact_instruction, entry=185, bytes=16153a; next = 33@0x7f7c4:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 33;
    vm_ip += 0x3;
    /* 0x33de3d..0x33de41: exact_instruction, entry=33, bytes=e801deb6; next = 258@0xadf2c:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33de41..0x33de45: exact_instruction, entry=258, bytes=796d7c2b; next = 66@0x855ff:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33de45..0x33de48: exact_instruction, entry=66, bytes=bc032a; next = 168@0x9aa83:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x33de48..0x33de4c: exact_instruction, entry=168, bytes=2a67add7; next = 287@0xb45d2:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x33de4c..0x33de50: exact_instruction, entry=287, bytes=b238e801; next = 258@0xadf2c:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33de50..0x33de54: exact_instruction, entry=258, bytes=b94a47de; next = 333@0xbd8af:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33de54..0x33de58: exact_instruction, entry=333, bytes=5fef8900; next = 18@0x7be9b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33de58..0x33de5b: exact_instruction, entry=18, bytes=e8900a; next = 26@0x7dbbb:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 26;
    vm_ip += 0x3;
    /* 0x33de5b..0x33de5f: exact_instruction, entry=26, bytes=5e2ae801; next = 337@0xbec0e:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33de5f..0x33de63: exact_instruction, entry=337, bytes=6b75d681; next = 172@0x9b68a:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x33de63..0x33de67: exact_instruction, entry=172, bytes=fe9bd30a; next = 28@0x7e390:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33de67..0x33de6a: exact_instruction, entry=28, bytes=d00002; next = 26@0x7dbbb:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 26;
    vm_ip += 0x3;
    /* 0x33de6a..0x33de6e: exact_instruction, entry=26, bytes=3636e801; next = 199@0xa0631:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33de6e..0x33de71: exact_instruction, entry=199, bytes=db5046; next = 333@0xbd8af:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x33de71..0x33de75: exact_instruction, entry=333, bytes=6fea2301; next = 340@0xbf435:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33de75..0x33de79: exact_instruction, entry=340, bytes=cc392301; next = 26@0x7dbbb:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x33de79..0x33de7d: exact_instruction, entry=26, bytes=13f5e801; next = 297@0xb64d7:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33de7d..0x33de80: exact_instruction, entry=297, bytes=74b756; next = 157@0x98a9a:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x33de80..0x33de84: exact_instruction, entry=157, bytes=e7d04701; next = 337@0xbec0e:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33de84..0x33de88: exact_instruction, entry=337, bytes=a0798f31; next = 26@0x7dbbb:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x33de88..0x33de8c: exact_instruction, entry=26, bytes=8e33e801; next = 28@0x7e390:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33de8c..0x33de8f: exact_instruction, entry=28, bytes=2006c0; next = 196@0x9fbcd:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 196;
    vm_ip += 0x3;
    /* 0x33de8f..0x33de93: exact_instruction, entry=196, bytes=122934fe; next = 258@0xadf2c:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33de93..0x33de97: exact_instruction, entry=258, bytes=68f57bc3; next = 346@0xc0535:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x33de97..0x33de9b: exact_instruction, entry=346, bytes=629ce801; next = 340@0xbf435:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33de9b..0x33de9f: exact_instruction, entry=340, bytes=91da3800; next = 172@0x9b68a:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x33de9f..0x33dea3: exact_instruction, entry=172, bytes=cc44fb0f; next = 185@0x9d964:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33dea3..0x33dea6: exact_instruction, entry=185, bytes=56073a; next = 305@0xb78b0:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 305;
    vm_ip += 0x3;
    /* 0x33dea6..0x33deaa: exact_instruction, entry=305, bytes=eaf5e801; next = 185@0x9d964:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33deaa..0x33dead: exact_instruction, entry=185, bytes=3b233a; next = 189@0x9e7af:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x33dead..0x33deb1: exact_instruction, entry=189, bytes=92e5ace1; next = 43@0x8173d:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x33deb1..0x33deb5: exact_instruction, entry=43, bytes=2f759b08; next = 315@0xb9451:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33deb5..0x33deb9: exact_instruction, entry=315, bytes=e80199f5; next = 189@0x9e7af:12, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33deb9..0x33debd: exact_instruction, entry=189, bytes=97cc48de; next = 157@0x98a9a:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x33debd..0x33dec1: exact_instruction, entry=157, bytes=a3a29d01; next = 297@0xb64d7:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33dec1..0x33dec4: exact_instruction, entry=297, bytes=ad09d1; next = 305@0xb78b0:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 305;
    vm_ip += 0x3;
    /* 0x33dec4..0x33dec8: exact_instruction, entry=305, bytes=1a7fe801; next = 43@0x8173d:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x33dec8..0x33decc: exact_instruction, entry=43, bytes=c3741f01; next = 64@0x85059:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33decc..0x33ded0: exact_instruction, entry=64, bytes=3856472f; next = 215@0xa4609:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33ded0..0x33ded3: exact_instruction, entry=215, bytes=d000e8; next = 26@0x7dbbb:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 26;
    vm_ip += 0x3;
    /* 0x33ded3..0x33ded7: exact_instruction, entry=26, bytes=8f03e801; next = 199@0xa0631:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33ded7..0x33deda: exact_instruction, entry=199, bytes=b24b55; next = 189@0x9e7af:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x33deda..0x33dede: exact_instruction, entry=189, bytes=a418c0eb; next = 172@0x9b68a:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x33dede..0x33dee2: exact_instruction, entry=172, bytes=b63d3b0b; next = 33@0x7f7c4:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x33dee2..0x33dee6: exact_instruction, entry=33, bytes=e8013c37; next = 333@0xbd8af:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33dee6..0x33deea: exact_instruction, entry=333, bytes=9b059100; next = 215@0xa4609:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33deea..0x33deed: exact_instruction, entry=215, bytes=e80500; next = 189@0x9e7af:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x33deed..0x33def1: exact_instruction, entry=189, bytes=ef9908d6; next = 305@0xb78b0:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x33def1..0x33def5: exact_instruction, entry=305, bytes=04f0e801; next = 114@0x90319:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33def5..0x33def9: exact_instruction, entry=114, bytes=d95a46a6; next = 18@0x7be9b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33def9..0x33defc: exact_instruction, entry=18, bytes=e80a3a; next = 333@0xbd8af:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x33defc..0x33df00: exact_instruction, entry=333, bytes=c7f8d300; next = 315@0xb9451:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33df00..0x33df04: exact_instruction, entry=315, bytes=e801e9f9; next = 307@0xb8064:12, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33df04..0x33df07: exact_instruction, entry=307, bytes=4255b4; next = 340@0xbf435:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x33df07..0x33df0b: exact_instruction, entry=340, bytes=cc727900; next = 268@0xb0007:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x33df0b..0x33df0f: exact_instruction, entry=268, bytes=727dee5c; next = 26@0x7dbbb:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x33df0f..0x33df13: exact_instruction, entry=26, bytes=b8b2e801; next = 268@0xb0007:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x33df13..0x33df17: exact_instruction, entry=268, bytes=016c1d4b; next = 28@0x7e390:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33df17..0x33df1a: exact_instruction, entry=28, bytes=e8051c; next = 189@0x9e7af:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x33df1a..0x33df1e: exact_instruction, entry=189, bytes=54ad38db; next = 315@0xb9451:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33df1e..0x33df22: exact_instruction, entry=315, bytes=e80149f5; next = 167@0x9a8d2:12, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 167;
    vm_ip += 0x4;
    /* 0x33df22..0x33df28: exact_instruction, entry=167, bytes=e8013d019220; next = 295@0xb60e0:12, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) ^ vm->state ^ 0x5f92615u;
    next_entry = 295;
    vm_ip += 0x6;
    /* 0x33df28..0x33df2d: exact_instruction, entry=295, bytes=e80112d210; next = 196@0x9fbcd:12, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) - 0x396ecbf2u;
    next_entry = 196;
    vm_ip += 0x5;
    /* 0x33df2d..0x33df31: exact_instruction, entry=196, bytes=62e6a500; next = 300@0xb6c36:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 300;
    vm_ip += 0x4;
    /* 0x33df31..0x33df35: exact_instruction, entry=300, bytes=3ff0f103; next = 183@0x9d495:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u ^ U16(vm->ip + 0x2u) - vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    next_entry = 183;
    vm_ip += 0x4;
    /* 0x33df35..0x33df39: exact_instruction, entry=183, bytes=e8018f92; next = 337@0xbec0e:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0xfaa325cu ^ 0x694e1f66u | U16(vm->ip + 0x2u) - vm->state + 0xfaa325cu ^ 0x694e1f66u - 0x1aed554cu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33df39..0x33df3d: exact_instruction, entry=337, bytes=4484adc5; next = 185@0x9d964:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33df3d..0x33df40: exact_instruction, entry=185, bytes=2ffe3a; next = 220@0xa522e:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 220;
    vm_ip += 0x3;
    /* 0x33df40..0x33df45: exact_instruction, entry=220, bytes=003d0148d4; next = 173@0x9ba74:12, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x33df45..0x33df47: exact_instruction, entry=173, bytes=8e02; next = 124@0x91e81:12, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 124;
    vm_ip += 0x2;
    /* 0x33df47..0x33df4d: exact_instruction, entry=124, bytes=e247002a4fc4; next = 189@0x9e7af:12, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u - U16(vm->ip + 0x4u) + vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ 0x3654c1a7u;
    next_entry = 189;
    vm_ip += 0x6;
    /* 0x33df4d..0x33df51: exact_instruction, entry=189, bytes=d32fbc96; next = 297@0xb64d7:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33df51..0x33df54: exact_instruction, entry=297, bytes=09c66c; next = 172@0x9b68a:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 172;
    vm_ip += 0x3;
    /* 0x33df54..0x33df58: exact_instruction, entry=172, bytes=5b39330c; next = 192@0x9f00a:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 192;
    vm_ip += 0x4;
    /* 0x33df58..0x33df5d: exact_instruction, entry=192, bytes=1d233d0100; next = 257@0xadbfd:12, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu - U16(vm->ip + 0x0u) ^ vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x33df5d..0x33df5f: exact_instruction, entry=257, bytes=f709; next = 332@0xbd36d:12, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 332;
    vm_ip += 0x2;
    /* 0x33df5f..0x33df63: exact_instruction, entry=332, bytes=5197d904; next = 307@0xb8064:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u ^ U16(vm->ip + 0x2u) ^ vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x42097e5du;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33df63..0x33df66: exact_instruction, entry=307, bytes=ae85ac; next = 90@0x8b334:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 90;
    vm_ip += 0x3;
    /* 0x33df66..0x33df6a: exact_instruction, entry=90, bytes=8ff55a3d; next = 330@0xbc9b8:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + vm->flags + 0x1c1030c0u + vm->flags & 0x4b6fdae0u | 0x4357e3c2u & U16(vm->ip + 0x2u) - vm->state + vm->flags + vm->flags + 0x1c1030c0u + vm->flags & 0x4b6fdae0u | 0x4357e3c2u + vm->flags & 0x4b6fdae0u | 0x59296ab9u | vm->flags & 0x4b6fdae0u | 0x3296b63du ^ 0x6ee390ceu ^ U16(vm->ip + 0x0u) + 0x224914c1u;
    next_entry = 330;
    vm_ip += 0x4;
    /* 0x33df6a..0x33df6f: exact_instruction, entry=330, bytes=d0033a377e; next = 122@0x9170d:12, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6460b705u & 0x786588bau ^ 0x2897b354u + U16(vm->ip + 0x0u);
    next_entry = 122;
    vm_ip += 0x5;
    /* 0x33df6f..0x33df74: exact_instruction, entry=122, bytes=f27b3d0171; next = 114@0x90319:12, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) + vm->state + vm->flags + 0x1af9be18u;
    next_entry = 114;
    vm_ip += 0x5;
    /* 0x33df74..0x33df78: exact_instruction, entry=114, bytes=8d7efaca; next = 66@0x855ff:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33df78..0x33df7b: exact_instruction, entry=66, bytes=d1c798; next = 176@0x9c10b:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33df7b..0x33df7f: exact_instruction, entry=176, bytes=e8015154; next = 119@0x90ebc:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 119;
    vm_ip += 0x4;
    /* 0x33df7f..0x33df85: exact_instruction, entry=119, bytes=e8013d019427; next = 215@0xa4609:12, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x4u) ^ vm->state + 0x7e7974a5u;
    next_entry = 215;
    vm_ip += 0x6;
    /* 0x33df85..0x33df88: exact_instruction, entry=215, bytes=000287; next = 64@0x85059:12, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x33df88..0x33df8c: exact_instruction, entry=64, bytes=f807d778; next = 20@0x7c62b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x33df8c..0x33df90: exact_instruction, entry=20, bytes=e801b391; next = 258@0xadf2c:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33df90..0x33df94: exact_instruction, entry=258, bytes=4c2d0deb; next = 66@0x855ff:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33df94..0x33df97: exact_instruction, entry=66, bytes=d1c32a; next = 176@0x9c10b:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33df97..0x33df9b: exact_instruction, entry=176, bytes=e801d54a; next = 18@0x7be9b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33df9b..0x33df9e: exact_instruction, entry=18, bytes=718ffa; next = 340@0xbf435:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x33df9e..0x33dfa2: exact_instruction, entry=340, bytes=dc8dd300; next = 174@0x9bd8f:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x33dfa2..0x33dfa6: exact_instruction, entry=174, bytes=b527e801; next = 258@0xadf2c:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33dfa6..0x33dfaa: exact_instruction, entry=258, bytes=df3481fb; next = 18@0x7be9b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33dfaa..0x33dfad: exact_instruction, entry=18, bytes=2806f6; next = 161@0x9975a:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x33dfad..0x33dfb1: exact_instruction, entry=161, bytes=02d1e801; next = 66@0x855ff:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33dfb1..0x33dfb4: exact_instruction, entry=66, bytes=82e368; next = 114@0x90319:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x33dfb4..0x33dfb8: exact_instruction, entry=114, bytes=d8977fd2; next = 20@0x7c62b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x33dfb8..0x33dfbc: exact_instruction, entry=20, bytes=e801bf74; next = 215@0xa4609:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33dfbc..0x33dfbf: exact_instruction, entry=215, bytes=880a3c; next = 337@0xbec0e:12, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33dfbf..0x33dfc3: exact_instruction, entry=337, bytes=7bf52a4e; next = 174@0x9bd8f:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x33dfc3..0x33dfc7: exact_instruction, entry=174, bytes=d354e801; next = 28@0x7e390:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33dfc7..0x33dfca: exact_instruction, entry=28, bytes=a00a42; next = 340@0xbf435:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x33dfca..0x33dfce: exact_instruction, entry=340, bytes=f4ed1300; next = 176@0x9c10b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x33dfce..0x33dfd2: exact_instruction, entry=176, bytes=e8019ad1; next = 114@0x90319:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33dfd2..0x33dfd6: exact_instruction, entry=114, bytes=e214b35a; next = 185@0x9d964:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33dfd6..0x33dfd9: exact_instruction, entry=185, bytes=c07a3a; next = 176@0x9c10b:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33dfd9..0x33dfdd: exact_instruction, entry=176, bytes=e8018cfe; next = 258@0xadf2c:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33dfdd..0x33dfe1: exact_instruction, entry=258, bytes=93d080ab; next = 199@0xa0631:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33dfe1..0x33dfe4: exact_instruction, entry=199, bytes=8e0949; next = 161@0x9975a:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x33dfe4..0x33dfe8: exact_instruction, entry=161, bytes=e178e801; next = 337@0xbec0e:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33dfe8..0x33dfec: exact_instruction, entry=337, bytes=1c8454a2; next = 307@0xb8064:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33dfec..0x33dfef: exact_instruction, entry=307, bytes=8675af; next = 184@0x9d694:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x33dfef..0x33dff3: exact_instruction, entry=184, bytes=e2eee801; next = 258@0xadf2c:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33dff3..0x33dff7: exact_instruction, entry=258, bytes=224c9166; next = 28@0x7e390:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33dff7..0x33dffa: exact_instruction, entry=28, bytes=f0043a; next = 158@0x99029:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 158;
    vm_ip += 0x3;
    /* 0x33dffa..0x33dffe: exact_instruction, entry=158, bytes=e80138db; next = 199@0xa0631:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33dffe..0x33e001: exact_instruction, entry=199, bytes=179f0a; next = 189@0x9e7af:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x33e001..0x33e005: exact_instruction, entry=189, bytes=e4648ca7; next = 161@0x9975a:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x33e005..0x33e009: exact_instruction, entry=161, bytes=2a75e801; next = 199@0xa0631:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e009..0x33e00c: exact_instruction, entry=199, bytes=520215; next = 64@0x85059:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x33e00c..0x33e010: exact_instruction, entry=64, bytes=9c1889c6; next = 158@0x99029:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0x33e010..0x33e014: exact_instruction, entry=158, bytes=e801ed7d; next = 114@0x90319:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33e014..0x33e018: exact_instruction, entry=114, bytes=7d9352da; next = 185@0x9d964:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e018..0x33e01b: exact_instruction, entry=185, bytes=6b063a; next = 176@0x9c10b:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33e01b..0x33e01f: exact_instruction, entry=176, bytes=e80181df; next = 185@0x9d964:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e01f..0x33e022: exact_instruction, entry=185, bytes=10a83a; next = 258@0xadf2c:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e022..0x33e026: exact_instruction, entry=258, bytes=b8bb89db; next = 20@0x7c62b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x33e026..0x33e02a: exact_instruction, entry=20, bytes=e801825c; next = 80@0x88a58:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 80;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x33e02a, coverage=hidden_span_of_17:12 */
    {
        static const VMSyntheticTailEvidence tail = {
            UINT64_C(0x33e026),
            UINT64_C(0x33e02a),
            20u,
            80u,
            "covered_synthetic_fallthrough",
            "hidden_span_of_17:12",
            "next = 80@0x88a58:12, ip += +0x4; dispatch_model=static_100; state=state_add_const",
        };
        vm_program_synthetic_tail_evidence(vm, &tail);
    }
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p053_bb_0333(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 333: 0x33e03b..0x33e157; rows=73, terminal=long_branch_forward */
    /* 0x33e03b..0x33e03d: exact_instruction, entry=171, bytes=4000; next = 64@0x85059:12, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 64;
    vm_ip += 0x2;
    /* 0x33e03d..0x33e041: exact_instruction, entry=64, bytes=45a29900; next = 28@0x7e390:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e041..0x33e044: exact_instruction, entry=28, bytes=60057e; next = 172@0x9b68a:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 172;
    vm_ip += 0x3;
    /* 0x33e044..0x33e048: exact_instruction, entry=172, bytes=9a2acb02; next = 287@0xb45d2:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x33e048..0x33e04c: exact_instruction, entry=287, bytes=069ae801; next = 215@0xa4609:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e04c..0x33e04f: exact_instruction, entry=215, bytes=60087c; next = 268@0xb0007:12, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x33e04f..0x33e053: exact_instruction, entry=268, bytes=99281128; next = 189@0x9e7af:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33e053..0x33e057: exact_instruction, entry=189, bytes=c3025498; next = 346@0xc0535:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x33e057..0x33e05b: exact_instruction, entry=346, bytes=8e45e801; next = 258@0xadf2c:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33e05b..0x33e05f: exact_instruction, entry=258, bytes=5f33f7fc; next = 43@0x8173d:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x33e05f..0x33e063: exact_instruction, entry=43, bytes=ad74c100; next = 18@0x7be9b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e063..0x33e066: exact_instruction, entry=18, bytes=f80bb6; next = 315@0xb9451:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x33e066..0x33e06a: exact_instruction, entry=315, bytes=e80191f0; next = 28@0x7e390:12, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e06a..0x33e06d: exact_instruction, entry=28, bytes=880a9b; next = 337@0xbec0e:12, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33e06d..0x33e071: exact_instruction, entry=337, bytes=c89870d1; next = 43@0x8173d:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x33e071..0x33e075: exact_instruction, entry=43, bytes=7e37d243; next = 26@0x7dbbb:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x33e075..0x33e079: exact_instruction, entry=26, bytes=b6f9e801; next = 337@0xbec0e:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e079..0x33e07d: exact_instruction, entry=337, bytes=3f8279b0; next = 307@0xb8064:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e07d..0x33e080: exact_instruction, entry=307, bytes=231db4; next = 333@0xbd8af:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x33e080..0x33e084: exact_instruction, entry=333, bytes=bbfa2301; next = 346@0xc0535:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x33e084..0x33e088: exact_instruction, entry=346, bytes=fde0e801; next = 196@0x9fbcd:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x33e088..0x33e08c: exact_instruction, entry=196, bytes=05c93499; next = 66@0x855ff:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33e08c..0x33e08f: exact_instruction, entry=66, bytes=068318; next = 337@0xbec0e:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33e08f..0x33e093: exact_instruction, entry=337, bytes=ac9da403; next = 346@0xc0535:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x33e093..0x33e097: exact_instruction, entry=346, bytes=3cfee801; next = 189@0x9e7af:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33e097..0x33e09b: exact_instruction, entry=189, bytes=a4b20ce4; next = 215@0xa4609:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e09b..0x33e09e: exact_instruction, entry=215, bytes=e804c4; next = 157@0x98a9a:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x33e09e..0x33e0a2: exact_instruction, entry=157, bytes=0305cb00; next = 305@0xb78b0:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x33e0a2..0x33e0a6: exact_instruction, entry=305, bytes=f466e801; next = 18@0x7be9b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e0a6..0x33e0a9: exact_instruction, entry=18, bytes=40053e; next = 168@0x9aa83:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x33e0a9..0x33e0ad: exact_instruction, entry=168, bytes=b7555ed7; next = 258@0xadf2c:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33e0ad..0x33e0b1: exact_instruction, entry=258, bytes=8ff4f6b2; next = 287@0xb45d2:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x33e0b1..0x33e0b5: exact_instruction, entry=287, bytes=e6a8e801; next = 268@0xb0007:12, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x33e0b5..0x33e0b9: exact_instruction, entry=268, bytes=3e910a6d; next = 340@0xbf435:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e0b9..0x33e0bd: exact_instruction, entry=340, bytes=e4751300; next = 215@0xa4609:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e0bd..0x33e0c0: exact_instruction, entry=215, bytes=d00068; next = 26@0x7dbbb:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 26;
    vm_ip += 0x3;
    /* 0x33e0c0..0x33e0c4: exact_instruction, entry=26, bytes=7805e801; next = 28@0x7e390:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e0c4..0x33e0c7: exact_instruction, entry=28, bytes=a00a8e; next = 340@0xbf435:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x33e0c7..0x33e0cb: exact_instruction, entry=340, bytes=040a9d01; next = 43@0x8173d:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x33e0cb..0x33e0cf: exact_instruction, entry=43, bytes=5609fa7d; next = 26@0x7dbbb:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x33e0cf..0x33e0d3: exact_instruction, entry=26, bytes=de0be801; next = 340@0xbf435:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e0d3..0x33e0d7: exact_instruction, entry=340, bytes=6ced0701; next = 18@0x7be9b:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e0d7..0x33e0da: exact_instruction, entry=18, bytes=708e8a; next = 203@0xa1484:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 203;
    vm_ip += 0x3;
    /* 0x33e0da..0x33e0de: exact_instruction, entry=203, bytes=9f9fc33a; next = 243@0xaab6a:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x33e0de..0x33e0e2: exact_instruction, entry=243, bytes=cd96e801; next = 333@0xbd8af:12, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33e0e2..0x33e0e6: exact_instruction, entry=333, bytes=3bf89100; next = 297@0xb64d7:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e0e6..0x33e0e9: exact_instruction, entry=297, bytes=d46385; next = 258@0xadf2c:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e0e9..0x33e0ed: exact_instruction, entry=258, bytes=178b463b; next = 33@0x7f7c4:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x33e0ed..0x33e0f1: exact_instruction, entry=33, bytes=e801ecc4; next = 64@0x85059:12, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33e0f1..0x33e0f5: exact_instruction, entry=64, bytes=6e20a07f; next = 66@0x855ff:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33e0f5..0x33e0f8: exact_instruction, entry=66, bytes=5cf618; next = 333@0xbd8af:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x33e0f8..0x33e0fc: exact_instruction, entry=333, bytes=c7f89100; next = 287@0xb45d2:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x33e0fc..0x33e100: exact_instruction, entry=287, bytes=daaee801; next = 66@0x855ff:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33e100..0x33e103: exact_instruction, entry=66, bytes=455df8; next = 333@0xbd8af:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x33e103..0x33e107: exact_instruction, entry=333, bytes=5bf9d300; next = 337@0xbec0e:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e107..0x33e10b: exact_instruction, entry=337, bytes=470f7807; next = 243@0xaab6a:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x33e10b..0x33e10f: exact_instruction, entry=243, bytes=5598e801; next = 18@0x7be9b:12, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e10f..0x33e112: exact_instruction, entry=18, bytes=e8051a; next = 189@0x9e7af:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x33e112..0x33e116: exact_instruction, entry=189, bytes=eea4d4a2; next = 172@0x9b68a:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x33e116..0x33e11a: exact_instruction, entry=172, bytes=cfb1bb03; next = 305@0xb78b0:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x33e11a..0x33e11e: exact_instruction, entry=305, bytes=dc08e801; next = 215@0xa4609:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e11e..0x33e121: exact_instruction, entry=215, bytes=a00a3c; next = 340@0xbf435:12, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x33e121..0x33e125: exact_instruction, entry=340, bytes=a006b300; next = 157@0x98a9a:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x33e125..0x33e129: exact_instruction, entry=157, bytes=834cb300; next = 33@0x7f7c4:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x33e129..0x33e12d: exact_instruction, entry=33, bytes=e801607d; next = 338@0xbf128:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 338;
    vm_ip += 0x4;
    /* 0x33e12d..0x33e133: exact_instruction, entry=338, bytes=14d13d01e801; next = 351@0xc1d48:12, ip += +0x6; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x0u) - vm->state - 0x4bf8be0cu;
    next_entry = 351;
    vm_ip += 0x6;
    /* 0x33e133..0x33e138: exact_instruction, entry=351, bytes=e801d03410; next = 154@0x97ce6:12, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) + vm->state - 0x7b3a2d18u;
    next_entry = 154;
    vm_ip += 0x5;
    /* 0x33e138..0x33e13c: exact_instruction, entry=154, bytes=65b46bfd; next = 203@0xa1484:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x33e13c..0x33e140: exact_instruction, entry=203, bytes=3f9e6f76; next = 199@0xa0631:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e140..0x33e143: exact_instruction, entry=199, bytes=1335de; next = 258@0xadf2c:12, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e143..0x33e147: exact_instruction, entry=258, bytes=d8832170; next = 242@0xaa87d:12, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 242;
    vm_ip += 0x4;
    /* 0x33e147..0x33e14c: exact_instruction, entry=242, bytes=3d018915f3; next = 246@0xab427:12, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x3u) - vm->state ^ 0x5c05e9b5u;
    next_entry = 246;
    vm_ip += 0x5;
    /* 0x33e14c..0x33e8de: long_branch_forward, entry=246, bytes=a5000000920700003d0122; next = table[165], ip += 0x792; validation=file_backed_operand;source_state=transition_model */
    /* state preserved: sampled_long_or_sparse */
    next_entry = (int)U32(vm->ip + 0x0);
    vm_ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* terminal CFG edge: decoded_control, target_vm_ip=0x33e8de, coverage=- */
    vm_program_external_edge(vm, 0x33e8de);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p053_bb_0334(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 334: 0x33e15d..0x33e2da; rows=101, terminal=exact_instruction */
    /* 0x33e15d..0x33e160: exact_instruction, entry=18, bytes=58117a; next = 43@0x8173d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x33e160..0x33e164: exact_instruction, entry=43, bytes=dc74c00e; next = 200@0xa0a9e:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 200;
    vm_ip += 0x4;
    /* 0x33e164..0x33e16a: exact_instruction, entry=200, bytes=e931175d7802; next = 79@0x885b0:9, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - vm->flags ^ 0x64193a1au ^ 0x227666a1u + U32(vm->ip + 0x0u) ^ vm->flags & 0x21af07eu | 0x54bd1bfeu ^ 0x9ad7a2fu ^ 0x5c24c721u + U16(vm->ip + 0x4u);
    next_entry = 79;
    vm_ip += 0x6;
    /* 0x33e16a..0x33e16f: exact_instruction, entry=79, bytes=404b3d0100; next = 108@0x8f24b:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x33e16f..0x33e171: exact_instruction, entry=108, bytes=a13e; next = 248@0xac110:9, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 248;
    vm_ip += 0x2;
    /* 0x33e171..0x33e175: exact_instruction, entry=248, bytes=8af87b0e; next = 258@0xadf2c:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags - vm->state | 0x5188b16eu & 0x6764746au - vm->state ^ 0x46157a61u + 0x17fe21adu ^ 0x35ad1d25u - 0x496039c5u ^ U16(vm->ip + 0x2u) ^ 0x4160066bu;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33e175..0x33e179: exact_instruction, entry=258, bytes=8c425d83; next = 168@0x9aa83:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x33e179..0x33e17d: exact_instruction, entry=168, bytes=37377ed3; next = 140@0x94e5a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 140;
    vm_ip += 0x4;
    /* 0x33e17d..0x33e183: exact_instruction, entry=140, bytes=928a57a6bfb8; next = 185@0x9d964:9, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    next_entry = 185;
    vm_ip += 0x6;
    /* 0x33e183..0x33e186: exact_instruction, entry=185, bytes=3a903a; next = 192@0x9f00a:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 192;
    vm_ip += 0x3;
    /* 0x33e186..0x33e18b: exact_instruction, entry=192, bytes=be343d0100; next = 198@0xa037e:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu - U16(vm->ip + 0x0u) ^ vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0x33e18b..0x33e18d: exact_instruction, entry=198, bytes=28d6; next = 340@0xbf435:9, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 340;
    vm_ip += 0x2;
    /* 0x33e18d..0x33e191: exact_instruction, entry=340, bytes=0c81b300; next = 172@0x9b68a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x33e191..0x33e195: exact_instruction, entry=172, bytes=d9218b0c; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e195..0x33e198: exact_instruction, entry=215, bytes=80063c; next = 208@0xa2361:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 208;
    vm_ip += 0x3;
    /* 0x33e198..0x33e19d: exact_instruction, entry=208, bytes=3a34b7c59d; next = 79@0x885b0:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du - U16(vm->ip + 0x3u) - vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du;
    next_entry = 79;
    vm_ip += 0x5;
    /* 0x33e19d..0x33e1a2: exact_instruction, entry=79, bytes=4a483d0100; next = 257@0xadbfd:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x33e1a2..0x33e1a4: exact_instruction, entry=257, bytes=2fb6; next = 203@0xa1484:9, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 203;
    vm_ip += 0x2;
    /* 0x33e1a4..0x33e1a8: exact_instruction, entry=203, bytes=9f910463; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e1a8..0x33e1ab: exact_instruction, entry=307, bytes=be8db4; next = 347@0xc088d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x33e1ab..0x33e1af: exact_instruction, entry=347, bytes=318e31e1; next = 121@0x91379:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 121;
    vm_ip += 0x4;
    /* 0x33e1af..0x33e1b3: exact_instruction, entry=121, bytes=74b906c2; next = 91@0x8b6de:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau + U16(vm->ip + 0x0u) + vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau - vm->flags;
    next_entry = 91;
    vm_ip += 0x4;
    /* 0x33e1b3..0x33e1b7: exact_instruction, entry=91, bytes=f299e801; next = 83@0x8947b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x0u) ^ vm->state;
    next_entry = 83;
    vm_ip += 0x4;
    /* 0x33e1b7..0x33e1bc: exact_instruction, entry=83, bytes=e999003d01; next = 198@0xa037e:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0x33e1bc..0x33e1be: exact_instruction, entry=198, bytes=4d42; next = 157@0x98a9a:9, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 157;
    vm_ip += 0x2;
    /* 0x33e1be..0x33e1c2: exact_instruction, entry=157, bytes=f3036800; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e1c2..0x33e1c5: exact_instruction, entry=307, bytes=e2c5b1; next = 258@0xadf2c:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e1c5..0x33e1c9: exact_instruction, entry=258, bytes=f7bfce7d; next = 124@0x91e81:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 124;
    vm_ip += 0x4;
    /* 0x33e1c9..0x33e1cf: exact_instruction, entry=124, bytes=5c8b30bf87cb; next = 320@0xbada5:9, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u - U16(vm->ip + 0x4u) + vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ 0x3654c1a7u;
    next_entry = 320;
    vm_ip += 0x6;
    /* 0x33e1cf..0x33e1d4: exact_instruction, entry=320, bytes=003d01b1cd; next = 256@0xad849:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags - vm->flags - 0x7e143884u;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x33e1d4..0x33e1d6: exact_instruction, entry=256, bytes=d635; next = 297@0xb64d7:9, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 297;
    vm_ip += 0x2;
    /* 0x33e1d6..0x33e1d9: exact_instruction, entry=297, bytes=c9fefa; next = 179@0x9ca8d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 179;
    vm_ip += 0x3;
    /* 0x33e1d9..0x33e1de: exact_instruction, entry=179, bytes=3adaef274c; next = 268@0xb0007:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ U16(vm->ip + 0x3u) ^ vm->flags + 0x7ef33dc5u ^ U16(vm->ip + 0x1u) - vm->state | vm->flags ^ U16(vm->ip + 0x3u) ^ vm->flags + 0x7ef33dc5u - 0x263c3887u;
    next_entry = 268;
    vm_ip += 0x5;
    /* 0x33e1de..0x33e1e2: exact_instruction, entry=268, bytes=cec82668; next = 189@0x9e7af:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33e1e2..0x33e1e6: exact_instruction, entry=189, bytes=0903d8d5; next = 301@0xb708d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 301;
    vm_ip += 0x4;
    /* 0x33e1e6..0x33e1eb: exact_instruction, entry=301, bytes=003d01e3f0; next = 160@0x994cf:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x33e1eb..0x33e1ed: exact_instruction, entry=160, bytes=a122; next = 322@0xbb3c9:9, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 322;
    vm_ip += 0x2;
    /* 0x33e1ed..0x33e1f1: exact_instruction, entry=322, bytes=0ef7371c; next = 333@0xbd8af:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u & U16(vm->ip + 0x2u) - vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u + 0x7ba65dc4u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33e1f1..0x33e1f5: exact_instruction, entry=333, bytes=83029d01; next = 114@0x90319:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33e1f5..0x33e1f9: exact_instruction, entry=114, bytes=8f6750b1; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e1f9..0x33e1fc: exact_instruction, entry=215, bytes=7802c8; next = 79@0x885b0:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 79;
    vm_ip += 0x3;
    /* 0x33e1fc..0x33e201: exact_instruction, entry=79, bytes=c0223d0100; next = 108@0x8f24b:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x33e201..0x33e203: exact_instruction, entry=108, bytes=85d6; next = 157@0x98a9a:9, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 157;
    vm_ip += 0x2;
    /* 0x33e203..0x33e207: exact_instruction, entry=157, bytes=b7431300; next = 260@0xae90b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 260;
    vm_ip += 0x4;
    /* 0x33e207..0x33e20b: exact_instruction, entry=260, bytes=180e18d3; next = 189@0x9e7af:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u - U16(vm->ip + 0x0u) - vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u ^ 0x470c080du;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33e20b..0x33e20f: exact_instruction, entry=189, bytes=8d75149f; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e20f..0x33e212: exact_instruction, entry=18, bytes=a84db6; next = 49@0x82820:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 49;
    vm_ip += 0x3;
    /* 0x33e212..0x33e217: exact_instruction, entry=49, bytes=0015c13d01; next = 256@0xad849:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x33e217..0x33e219: exact_instruction, entry=256, bytes=dda0; next = 340@0xbf435:9, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 340;
    vm_ip += 0x2;
    /* 0x33e219..0x33e21d: exact_instruction, entry=340, bytes=b419b300; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e21d..0x33e220: exact_instruction, entry=297, bytes=184fd1; next = 176@0x9c10b:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33e220..0x33e224: exact_instruction, entry=176, bytes=e8019f5a; next = 340@0xbf435:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e224..0x33e228: exact_instruction, entry=340, bytes=70d7b300; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e228..0x33e22b: exact_instruction, entry=215, bytes=70053c; next = 174@0x9bd8f:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x33e22b..0x33e22f: exact_instruction, entry=174, bytes=b716e801; next = 261@0xaeda2:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 261;
    vm_ip += 0x4;
    /* 0x33e22f..0x33e235: exact_instruction, entry=261, bytes=e801af6d3d01; next = 347@0xc088d:9, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x2u) + 0x4c539d29u;
    next_entry = 347;
    vm_ip += 0x6;
    /* 0x33e235..0x33e239: exact_instruction, entry=347, bytes=9e083844; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e239..0x33e23c: exact_instruction, entry=18, bytes=1211b4; next = 158@0x99029:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0x33e23c..0x33e240: exact_instruction, entry=158, bytes=e80138df; next = 114@0x90319:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33e240..0x33e244: exact_instruction, entry=114, bytes=bf6e00b2; next = 199@0xa0631:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e244..0x33e247: exact_instruction, entry=199, bytes=13102e; next = 184@0x9d694:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x33e247..0x33e24b: exact_instruction, entry=184, bytes=cabce801; next = 337@0xbec0e:9, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e24b..0x33e24f: exact_instruction, entry=337, bytes=609a1991; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e24f..0x33e252: exact_instruction, entry=18, bytes=1025fa; next = 158@0x99029:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0x33e252..0x33e256: exact_instruction, entry=158, bytes=e801bcfb; next = 258@0xadf2c:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33e256..0x33e25a: exact_instruction, entry=258, bytes=345b85db; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e25a..0x33e25d: exact_instruction, entry=28, bytes=800580; next = 176@0x9c10b:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33e25d..0x33e261: exact_instruction, entry=176, bytes=e801286d; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e261..0x33e264: exact_instruction, entry=215, bytes=90031c; next = 114@0x90319:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x33e264..0x33e268: exact_instruction, entry=114, bytes=bd6272af; next = 20@0x7c62b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x33e268..0x33e26c: exact_instruction, entry=20, bytes=e801327c; next = 114@0x90319:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33e26c..0x33e270: exact_instruction, entry=114, bytes=6aaf4dfb; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e270..0x33e273: exact_instruction, entry=18, bytes=c0057a; next = 184@0x9d694:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x33e273..0x33e277: exact_instruction, entry=184, bytes=ba35e801; next = 114@0x90319:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33e277..0x33e27b: exact_instruction, entry=114, bytes=d85dfe9a; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e27b..0x33e27e: exact_instruction, entry=297, bytes=18071f; next = 20@0x7c62b:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0x33e27e..0x33e282: exact_instruction, entry=20, bytes=e80124f5; next = 66@0x855ff:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33e282..0x33e285: exact_instruction, entry=66, bytes=43912a; next = 347@0xc088d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x33e285..0x33e289: exact_instruction, entry=347, bytes=750c9d00; next = 174@0x9bd8f:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x33e289..0x33e28d: exact_instruction, entry=174, bytes=31d0e801; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e28d..0x33e290: exact_instruction, entry=307, bytes=dc3db4; next = 337@0xbec0e:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33e290..0x33e294: exact_instruction, entry=337, bytes=5c75cb6f; next = 158@0x99029:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0x33e294..0x33e298: exact_instruction, entry=158, bytes=e801def9; next = 66@0x855ff:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33e298..0x33e29b: exact_instruction, entry=66, bytes=893d9c; next = 114@0x90319:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x33e29b..0x33e29f: exact_instruction, entry=114, bytes=b848768e; next = 161@0x9975a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x33e29f..0x33e2a3: exact_instruction, entry=161, bytes=b54ee801; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e2a3..0x33e2a6: exact_instruction, entry=28, bytes=880a79; next = 337@0xbec0e:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33e2a6..0x33e2aa: exact_instruction, entry=337, bytes=2b8d74c6; next = 174@0x9bd8f:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x33e2aa..0x33e2ae: exact_instruction, entry=174, bytes=b3cee801; next = 347@0xc088d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x33e2ae..0x33e2b2: exact_instruction, entry=347, bytes=6983a906; next = 66@0x855ff:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33e2b2..0x33e2b5: exact_instruction, entry=66, bytes=2f60ce; next = 176@0x9c10b:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33e2b5..0x33e2b9: exact_instruction, entry=176, bytes=e801d6db; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e2b9..0x33e2bc: exact_instruction, entry=307, bytes=2645ad; next = 114@0x90319:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x33e2bc..0x33e2c0: exact_instruction, entry=114, bytes=9b6374ac; next = 176@0x9c10b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x33e2c0..0x33e2c4: exact_instruction, entry=176, bytes=e801ea94; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e2c4..0x33e2c7: exact_instruction, entry=307, bytes=3a55b4; next = 340@0xbf435:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x33e2c7..0x33e2cb: exact_instruction, entry=340, bytes=4411ab00; next = 123@0x91a59:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x33e2cb..0x33e2cf: exact_instruction, entry=123, bytes=6da3e801; next = 337@0xbec0e:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e2cf..0x33e2d3: exact_instruction, entry=337, bytes=9f94d521; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e2d3..0x33e2d6: exact_instruction, entry=297, bytes=730730; next = 161@0x9975a:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x33e2d6..0x33e2da: exact_instruction, entry=161, bytes=86d7e801; next = 311@0xb86f8:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 311;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x33e2da, coverage=hidden_span_of_14:9 */
    {
        static const VMSyntheticTailEvidence tail = {
            UINT64_C(0x33e2d6),
            UINT64_C(0x33e2da),
            161u,
            311u,
            "covered_synthetic_fallthrough",
            "hidden_span_of_14:9",
            "next = 311@0xb86f8:9, ip += +0x4; dispatch_model=static_100; state=state_mixed",
        };
        vm_program_synthetic_tail_evidence(vm, &tail);
    }
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p053_bb_0335(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 335: 0x33e2e8..0x33e532; rows=156, terminal=exact_instruction */
    /* 0x33e2e8..0x33e2ea: exact_instruction, entry=165, bytes=4200; next = 66@0x855ff:9, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 66;
    vm_ip += 0x2;
    /* 0x33e2ea..0x33e2ed: exact_instruction, entry=66, bytes=a1953a; next = 258@0xadf2c:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e2ed..0x33e2f1: exact_instruction, entry=258, bytes=e1328aeb; next = 168@0x9aa83:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x33e2f1..0x33e2f5: exact_instruction, entry=168, bytes=6ccfa6d8; next = 315@0xb9451:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33e2f5..0x33e2f9: exact_instruction, entry=315, bytes=e80171f2; next = 64@0x85059:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33e2f9..0x33e2fd: exact_instruction, entry=64, bytes=2a8a2740; next = 157@0x98a9a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x33e2fd..0x33e301: exact_instruction, entry=157, bytes=3340ab00; next = 185@0x9d964:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e301..0x33e304: exact_instruction, entry=185, bytes=77723a; next = 243@0xaab6a:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 243;
    vm_ip += 0x3;
    /* 0x33e304..0x33e308: exact_instruction, entry=243, bytes=8518e801; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e308..0x33e30b: exact_instruction, entry=28, bytes=1008b0; next = 258@0xadf2c:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e30b..0x33e30f: exact_instruction, entry=258, bytes=1c2519e3; next = 172@0x9b68a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x33e30f..0x33e313: exact_instruction, entry=172, bytes=aea6e300; next = 346@0xc0535:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x33e313..0x33e317: exact_instruction, entry=346, bytes=4eb8e801; next = 189@0x9e7af:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33e317..0x33e31b: exact_instruction, entry=189, bytes=1b9fa4a2; next = 196@0x9fbcd:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x33e31b..0x33e31f: exact_instruction, entry=196, bytes=c2d704b0; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e31f..0x33e322: exact_instruction, entry=28, bytes=980717; next = 243@0xaab6a:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 243;
    vm_ip += 0x3;
    /* 0x33e322..0x33e326: exact_instruction, entry=243, bytes=369be801; next = 114@0x90319:9, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33e326..0x33e32a: exact_instruction, entry=114, bytes=e4640bac; next = 203@0xa1484:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x33e32a..0x33e32e: exact_instruction, entry=203, bytes=e7980077; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e32e..0x33e331: exact_instruction, entry=28, bytes=d809ec; next = 315@0xb9451:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x33e331..0x33e335: exact_instruction, entry=315, bytes=e80149f6; next = 199@0xa0631:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e335..0x33e338: exact_instruction, entry=199, bytes=e3397e; next = 189@0x9e7af:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x33e338..0x33e33c: exact_instruction, entry=189, bytes=9bc7a8a5; next = 43@0x8173d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x33e33c..0x33e340: exact_instruction, entry=43, bytes=673bcb45; next = 346@0xc0535:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x33e340..0x33e344: exact_instruction, entry=346, bytes=15d0e801; next = 114@0x90319:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33e344..0x33e348: exact_instruction, entry=114, bytes=695e46aa; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e348..0x33e34b: exact_instruction, entry=18, bytes=e8057a; next = 157@0x98a9a:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x33e34b..0x33e34f: exact_instruction, entry=157, bytes=fec8cb00; next = 26@0x7dbbb:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x33e34f..0x33e353: exact_instruction, entry=26, bytes=00e7e801; next = 203@0xa1484:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x33e353..0x33e357: exact_instruction, entry=203, bytes=8f9204be; next = 337@0xbec0e:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e357..0x33e35b: exact_instruction, entry=337, bytes=a39838f6; next = 199@0xa0631:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e35b..0x33e35e: exact_instruction, entry=199, bytes=7b2b06; next = 346@0xc0535:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 346;
    vm_ip += 0x3;
    /* 0x33e35e..0x33e362: exact_instruction, entry=346, bytes=42c1e801; next = 64@0x85059:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33e362..0x33e366: exact_instruction, entry=64, bytes=c69103c6; next = 333@0xbd8af:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33e366..0x33e36a: exact_instruction, entry=333, bytes=3fe91300; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e36a..0x33e36d: exact_instruction, entry=297, bytes=d8c775; next = 305@0xb78b0:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 305;
    vm_ip += 0x3;
    /* 0x33e36d..0x33e371: exact_instruction, entry=305, bytes=04dbe801; next = 64@0x85059:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33e371..0x33e375: exact_instruction, entry=64, bytes=698ffdfc; next = 172@0x9b68a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x33e375..0x33e379: exact_instruction, entry=172, bytes=b4278b0c; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e379..0x33e37c: exact_instruction, entry=215, bytes=d80944; next = 315@0xb9451:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x33e37c..0x33e380: exact_instruction, entry=315, bytes=e80119fa; next = 333@0xbd8af:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33e380..0x33e384: exact_instruction, entry=333, bytes=c3040701; next = 185@0x9d964:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e384..0x33e387: exact_instruction, entry=185, bytes=0c173a; next = 347@0xc088d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x33e387..0x33e38b: exact_instruction, entry=347, bytes=f7024b03; next = 315@0xb9451:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33e38b..0x33e38f: exact_instruction, entry=315, bytes=e80129f6; next = 203@0xa1484:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x33e38f..0x33e393: exact_instruction, entry=203, bytes=079a8d9b; next = 64@0x85059:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33e393..0x33e397: exact_instruction, entry=64, bytes=39040d64; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e397..0x33e39a: exact_instruction, entry=297, bytes=3bc857; next = 33@0x7f7c4:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 33;
    vm_ip += 0x3;
    /* 0x33e39a..0x33e39e: exact_instruction, entry=33, bytes=e801e8cc; next = 347@0xc088d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x33e39e..0x33e3a2: exact_instruction, entry=347, bytes=240d9800; next = 199@0xa0631:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e3a2..0x33e3a5: exact_instruction, entry=199, bytes=7f8c7a; next = 168@0x9aa83:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x33e3a5..0x33e3a9: exact_instruction, entry=168, bytes=7de6c6d7; next = 287@0xb45d2:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x33e3a9..0x33e3ad: exact_instruction, entry=287, bytes=989de801; next = 185@0x9d964:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e3ad..0x33e3b0: exact_instruction, entry=185, bytes=061e3a; next = 203@0xa1484:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 203;
    vm_ip += 0x3;
    /* 0x33e3b0..0x33e3b4: exact_instruction, entry=203, bytes=ef9d5f9b; next = 189@0x9e7af:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33e3b4..0x33e3b8: exact_instruction, entry=189, bytes=079d54e8; next = 26@0x7dbbb:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x33e3b8..0x33e3bc: exact_instruction, entry=26, bytes=0275e801; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e3bc..0x33e3bf: exact_instruction, entry=28, bytes=000266; next = 64@0x85059:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x33e3bf..0x33e3c3: exact_instruction, entry=64, bytes=c2911ccd; next = 196@0x9fbcd:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x33e3c3..0x33e3c7: exact_instruction, entry=196, bytes=053615c2; next = 346@0xc0535:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x33e3c7..0x33e3cb: exact_instruction, entry=346, bytes=ff15e801; next = 337@0xbec0e:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e3cb..0x33e3cf: exact_instruction, entry=337, bytes=0c95dbb0; next = 168@0x9aa83:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x33e3cf..0x33e3d3: exact_instruction, entry=168, bytes=b3c884d5; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e3d3..0x33e3d6: exact_instruction, entry=215, bytes=08015c; next = 33@0x7f7c4:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 33;
    vm_ip += 0x3;
    /* 0x33e3d6..0x33e3da: exact_instruction, entry=33, bytes=e8015233; next = 167@0x9a8d2:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 167;
    vm_ip += 0x4;
    /* 0x33e3da..0x33e3e0: exact_instruction, entry=167, bytes=e8013d01fd2b; next = 283@0xb3612:9, ip += +0x6; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) ^ vm->state ^ 0x5f92615u;
    next_entry = 283;
    vm_ip += 0x6;
    /* 0x33e3e0..0x33e3e5: exact_instruction, entry=283, bytes=10e801a461; next = 222@0xa5f3c:9, ip += +0x5; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    /* state preserved: state_preserve */
    next_entry = 222;
    vm_ip += 0x5;
    /* 0x33e3e5..0x33e3ea: exact_instruction, entry=222, bytes=066bc8be3a; next = 189@0x9e7af:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags | 0x11da3648u & 0x169ceafau & U16(vm->ip + 0x0u) - vm->state + vm->flags | 0x11da3648u & 0x169ceafau + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u | 0x39a63024u + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u + 0x17d780cau ^ U16(vm->ip + 0x2u) + vm->state + vm->flags | 0x11da3648u & 0x169ceafau & U16(vm->ip + 0x0u) - vm->state + vm->flags | 0x11da3648u & 0x169ceafau + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u | 0x39a63024u + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u + 0x17d780cau - 0x29e369dfu;
    next_entry = 189;
    vm_ip += 0x5;
    /* 0x33e3ea..0x33e3ee: exact_instruction, entry=189, bytes=03cb50e4; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e3ee..0x33e3f1: exact_instruction, entry=28, bytes=400548; next = 168@0x9aa83:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x33e3f1..0x33e3f5: exact_instruction, entry=168, bytes=5a61a6ce; next = 3@0x78c77:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 3;
    vm_ip += 0x4;
    /* 0x33e3f5..0x33e3fa: exact_instruction, entry=3, bytes=b122003d01; next = 108@0x8f24b:9, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu ^ U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu + 0x4bc0d288u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x33e3fa..0x33e3fc: exact_instruction, entry=108, bytes=4a3a; next = 337@0xbec0e:9, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 337;
    vm_ip += 0x2;
    /* 0x33e3fc..0x33e400: exact_instruction, entry=337, bytes=50838120; next = 350@0xc1926:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 350;
    vm_ip += 0x4;
    /* 0x33e400..0x33e404: exact_instruction, entry=350, bytes=fb820e38; next = 183@0x9d495:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    next_entry = 183;
    vm_ip += 0x4;
    /* 0x33e404..0x33e408: exact_instruction, entry=183, bytes=e8016e86; next = 157@0x98a9a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0xfaa325cu ^ 0x694e1f66u | U16(vm->ip + 0x2u) - vm->state + 0xfaa325cu ^ 0x694e1f66u - 0x1aed554cu;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x33e408..0x33e40c: exact_instruction, entry=157, bytes=af5b6800; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e40c..0x33e40f: exact_instruction, entry=28, bytes=8801ad; next = 49@0x82820:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 49;
    vm_ip += 0x3;
    /* 0x33e40f..0x33e414: exact_instruction, entry=49, bytes=00d5a53d01; next = 108@0x8f24b:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x33e414..0x33e416: exact_instruction, entry=108, bytes=649e; next = 168@0x9aa83:9, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 168;
    vm_ip += 0x2;
    /* 0x33e416..0x33e41a: exact_instruction, entry=168, bytes=c7697ed3; next = 140@0x94e5a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 140;
    vm_ip += 0x4;
    /* 0x33e41a..0x33e420: exact_instruction, entry=140, bytes=e287c7e41db6; next = 297@0xb64d7:9, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    next_entry = 297;
    vm_ip += 0x6;
    /* 0x33e420..0x33e423: exact_instruction, entry=297, bytes=f9e591; next = 337@0xbec0e:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33e423..0x33e427: exact_instruction, entry=337, bytes=64674ebf; next = 237@0xa8e1f:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 237;
    vm_ip += 0x4;
    /* 0x33e427..0x33e42c: exact_instruction, entry=237, bytes=00f3873d01; next = 144@0x95887:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x33e42c..0x33e42e: exact_instruction, entry=144, bytes=a79b; next = 179@0x9ca8d:9, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 179;
    vm_ip += 0x2;
    /* 0x33e42e..0x33e433: exact_instruction, entry=179, bytes=3ad0e2aee0; next = 203@0xa1484:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ U16(vm->ip + 0x3u) ^ vm->flags + 0x7ef33dc5u ^ U16(vm->ip + 0x1u) - vm->state | vm->flags ^ U16(vm->ip + 0x3u) ^ vm->flags + 0x7ef33dc5u - 0x263c3887u;
    next_entry = 203;
    vm_ip += 0x5;
    /* 0x33e433..0x33e437: exact_instruction, entry=203, bytes=179a7076; next = 66@0x855ff:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33e437..0x33e43a: exact_instruction, entry=66, bytes=fd0c3a; next = 189@0x9e7af:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x33e43a..0x33e43e: exact_instruction, entry=189, bytes=b70644ef; next = 220@0xa522e:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 220;
    vm_ip += 0x4;
    /* 0x33e43e..0x33e443: exact_instruction, entry=220, bytes=003d01ff15; next = 108@0x8f24b:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x33e443..0x33e445: exact_instruction, entry=108, bytes=cb72; next = 199@0xa0631:9, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 199;
    vm_ip += 0x2;
    /* 0x33e445..0x33e448: exact_instruction, entry=199, bytes=265149; next = 332@0xbd36d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 332;
    vm_ip += 0x3;
    /* 0x33e448..0x33e44c: exact_instruction, entry=332, bytes=31d7bfc3; next = 347@0xc088d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u ^ U16(vm->ip + 0x2u) ^ vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x42097e5du;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x33e44c..0x33e450: exact_instruction, entry=347, bytes=a80ea481; next = 43@0x8173d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x33e450..0x33e454: exact_instruction, entry=43, bytes=b418d06d; next = 49@0x82820:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0x33e454..0x33e459: exact_instruction, entry=49, bytes=0088823d01; next = 144@0x95887:9, ip += +0x5; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x33e459..0x33e45b: exact_instruction, entry=144, bytes=f798; next = 268@0xb0007:9, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 268;
    vm_ip += 0x2;
    /* 0x33e45b..0x33e45f: exact_instruction, entry=268, bytes=917d1167; next = 332@0xbd36d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 332;
    vm_ip += 0x4;
    /* 0x33e45f..0x33e463: exact_instruction, entry=332, bytes=51d7c7c7; next = 340@0xbf435:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u ^ U16(vm->ip + 0x2u) ^ vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x42097e5du;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e463..0x33e467: exact_instruction, entry=340, bytes=d8531300; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e467..0x33e46a: exact_instruction, entry=297, bytes=43c3b4; next = 49@0x82820:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 49;
    vm_ip += 0x3;
    /* 0x33e46a..0x33e46f: exact_instruction, entry=49, bytes=001d6c3d01; next = 257@0xadbfd:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x33e46f..0x33e471: exact_instruction, entry=257, bytes=c7b5; next = 189@0x9e7af:9, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 189;
    vm_ip += 0x2;
    /* 0x33e471..0x33e475: exact_instruction, entry=189, bytes=135198d6; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e475..0x33e478: exact_instruction, entry=297, bytes=ad521b; next = 184@0x9d694:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x33e478..0x33e47c: exact_instruction, entry=184, bytes=e004e801; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e47c..0x33e47f: exact_instruction, entry=18, bytes=880a3a; next = 337@0xbec0e:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33e47f..0x33e483: exact_instruction, entry=337, bytes=fced3b0b; next = 158@0x99029:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0x33e483..0x33e487: exact_instruction, entry=158, bytes=e801267d; next = 181@0x9d13f:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 181;
    vm_ip += 0x4;
    /* 0x33e487..0x33e48d: exact_instruction, entry=181, bytes=3d01e801ce44; next = 337@0xbec0e:9, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) - vm->state;
    next_entry = 337;
    vm_ip += 0x6;
    /* 0x33e48d..0x33e491: exact_instruction, entry=337, bytes=1488f5d0; next = 199@0xa0631:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e491..0x33e494: exact_instruction, entry=199, bytes=67fc1a; next = 123@0x91a59:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x33e494..0x33e498: exact_instruction, entry=123, bytes=5edee801; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e498..0x33e49b: exact_instruction, entry=215, bytes=880a08; next = 337@0xbec0e:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33e49b..0x33e49f: exact_instruction, entry=337, bytes=2877024b; next = 123@0x91a59:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x33e49f..0x33e4a3: exact_instruction, entry=123, bytes=488ce801; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e4a3..0x33e4a6: exact_instruction, entry=28, bytes=9003dc; next = 114@0x90319:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x33e4a6..0x33e4aa: exact_instruction, entry=114, bytes=0da28aeb; next = 176@0x9c10b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x33e4aa..0x33e4ae: exact_instruction, entry=176, bytes=e801de98; next = 189@0x9e7af:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33e4ae..0x33e4b2: exact_instruction, entry=189, bytes=910090eb; next = 66@0x855ff:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33e4b2..0x33e4b5: exact_instruction, entry=66, bytes=893e2e; next = 176@0x9c10b:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33e4b5..0x33e4b9: exact_instruction, entry=176, bytes=e80139c2; next = 337@0xbec0e:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e4b9..0x33e4bd: exact_instruction, entry=337, bytes=a8d7c8d6; next = 185@0x9d964:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e4bd..0x33e4c0: exact_instruction, entry=185, bytes=1bfe3a; next = 174@0x9bd8f:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x33e4c0..0x33e4c4: exact_instruction, entry=174, bytes=9d28e801; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e4c4..0x33e4c7: exact_instruction, entry=215, bytes=000288; next = 64@0x85059:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x33e4c7..0x33e4cb: exact_instruction, entry=64, bytes=4231cd93; next = 161@0x9975a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x33e4cb..0x33e4cf: exact_instruction, entry=161, bytes=95d9e801; next = 340@0xbf435:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e4cf..0x33e4d3: exact_instruction, entry=340, bytes=9c161300; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e4d3..0x33e4d6: exact_instruction, entry=297, bytes=7faf69; next = 184@0x9d694:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x33e4d6..0x33e4da: exact_instruction, entry=184, bytes=5a97e801; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e4da..0x33e4dd: exact_instruction, entry=307, bytes=cc9daf; next = 189@0x9e7af:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x33e4dd..0x33e4e1: exact_instruction, entry=189, bytes=28005cea; next = 123@0x91a59:9, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x33e4e1..0x33e4e5: exact_instruction, entry=123, bytes=3628e801; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e4e5..0x33e4e8: exact_instruction, entry=18, bytes=200b3a; next = 340@0xbf435:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x33e4e8..0x33e4ec: exact_instruction, entry=340, bytes=7c44cb00; next = 158@0x99029:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0x33e4ec..0x33e4f0: exact_instruction, entry=158, bytes=e8019520; next = 347@0xc088d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x33e4f0..0x33e4f4: exact_instruction, entry=347, bytes=ca838e07; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e4f4..0x33e4f7: exact_instruction, entry=18, bytes=8098ba; next = 176@0x9c10b:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33e4f7..0x33e4fb: exact_instruction, entry=176, bytes=e8012cd5; next = 258@0xadf2c:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33e4fb..0x33e4ff: exact_instruction, entry=258, bytes=fbe3b8a3; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e4ff..0x33e502: exact_instruction, entry=297, bytes=2145c1; next = 161@0x9975a:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x33e502..0x33e506: exact_instruction, entry=161, bytes=ba54e801; next = 189@0x9e7af:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33e506..0x33e50a: exact_instruction, entry=189, bytes=b9eb1c9e; next = 185@0x9d964:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e50a..0x33e50d: exact_instruction, entry=185, bytes=73113a; next = 123@0x91a59:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x33e50d..0x33e511: exact_instruction, entry=123, bytes=b13ee801; next = 199@0xa0631:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e511..0x33e514: exact_instruction, entry=199, bytes=778a5a; next = 258@0xadf2c:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e514..0x33e518: exact_instruction, entry=258, bytes=3af40370; next = 161@0x9975a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x33e518..0x33e51c: exact_instruction, entry=161, bytes=d279e801; next = 347@0xc088d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x33e51c..0x33e520: exact_instruction, entry=347, bytes=2e0b3281; next = 185@0x9d964:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e520..0x33e523: exact_instruction, entry=185, bytes=74003a; next = 176@0x9c10b:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33e523..0x33e527: exact_instruction, entry=176, bytes=e801ace4; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e527..0x33e52a: exact_instruction, entry=18, bytes=2a4924; next = 64@0x85059:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x33e52a..0x33e52e: exact_instruction, entry=64, bytes=200a10b9; next = 161@0x9975a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x33e52e..0x33e532: exact_instruction, entry=161, bytes=95f6e801; next = 264@0xaf4cf:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 264;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x33e532, coverage=hidden_span_of_14:9 */
    {
        static const VMSyntheticTailEvidence tail = {
            UINT64_C(0x33e52e),
            UINT64_C(0x33e532),
            161u,
            264u,
            "covered_synthetic_fallthrough",
            "hidden_span_of_14:9",
            "next = 264@0xaf4cf:9, ip += +0x4; dispatch_model=static_100; state=state_add_const",
        };
        vm_program_synthetic_tail_evidence(vm, &tail);
    }
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p053_bb_0336(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 336: 0x33e540..0x33e707; rows=121, terminal=exact_instruction */
    /* 0x33e540..0x33e542: exact_instruction, entry=171, bytes=c400; next = 196@0x9fbcd:9, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 196;
    vm_ip += 0x2;
    /* 0x33e542..0x33e546: exact_instruction, entry=196, bytes=4f6eb4f1; next = 114@0x90319:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33e546..0x33e54a: exact_instruction, entry=114, bytes=338b04ce; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e54a..0x33e54d: exact_instruction, entry=307, bytes=7e85b4; next = 346@0xc0535:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 346;
    vm_ip += 0x3;
    /* 0x33e54d..0x33e551: exact_instruction, entry=346, bytes=6ebbe801; next = 168@0x9aa83:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x33e551..0x33e555: exact_instruction, entry=168, bytes=6bdf5dd9; next = 340@0xbf435:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e555..0x33e559: exact_instruction, entry=340, bytes=b413ab00; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e559..0x33e55c: exact_instruction, entry=297, bytes=381772; next = 346@0xc0535:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 346;
    vm_ip += 0x3;
    /* 0x33e55c..0x33e560: exact_instruction, entry=346, bytes=255ae801; next = 337@0xbec0e:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e560..0x33e564: exact_instruction, entry=337, bytes=077c8700; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e564..0x33e567: exact_instruction, entry=28, bytes=2006a5; next = 196@0x9fbcd:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 196;
    vm_ip += 0x3;
    /* 0x33e567..0x33e56b: exact_instruction, entry=196, bytes=a2e2fdc0; next = 315@0xb9451:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33e56b..0x33e56f: exact_instruction, entry=315, bytes=e80119fa; next = 333@0xbd8af:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33e56f..0x33e573: exact_instruction, entry=333, bytes=73fa2800; next = 337@0xbec0e:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e573..0x33e577: exact_instruction, entry=337, bytes=4ce1b505; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e577..0x33e57a: exact_instruction, entry=28, bytes=d8095e; next = 315@0xb9451:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x33e57a..0x33e57e: exact_instruction, entry=315, bytes=e801d1fa; next = 340@0xbf435:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e57e..0x33e582: exact_instruction, entry=340, bytes=e8942301; next = 268@0xb0007:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x33e582..0x33e586: exact_instruction, entry=268, bytes=76ad1e6c; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e586..0x33e589: exact_instruction, entry=307, bytes=378db3; next = 315@0xb9451:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x33e589..0x33e58d: exact_instruction, entry=315, bytes=e80131f5; next = 168@0x9aa83:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x33e58d..0x33e591: exact_instruction, entry=168, bytes=efd8b1d7; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e591..0x33e594: exact_instruction, entry=307, bytes=e955b4; next = 340@0xbf435:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x33e594..0x33e598: exact_instruction, entry=340, bytes=748b4701; next = 33@0x7f7c4:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x33e598..0x33e59c: exact_instruction, entry=33, bytes=e801def5; next = 185@0x9d964:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e59c..0x33e59f: exact_instruction, entry=185, bytes=6b8c3a; next = 168@0x9aa83:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x33e59f..0x33e5a3: exact_instruction, entry=168, bytes=8a696bd9; next = 347@0xc088d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x33e5a3..0x33e5a7: exact_instruction, entry=347, bytes=32082c27; next = 243@0xaab6a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x33e5a7..0x33e5ab: exact_instruction, entry=243, bytes=859ee801; next = 196@0x9fbcd:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x33e5ab..0x33e5af: exact_instruction, entry=196, bytes=ce69dcff; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e5af..0x33e5b2: exact_instruction, entry=307, bytes=613db4; next = 337@0xbec0e:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33e5b2..0x33e5b6: exact_instruction, entry=337, bytes=d78138ff; next = 287@0xb45d2:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x33e5b6..0x33e5ba: exact_instruction, entry=287, bytes=5abde801; next = 189@0x9e7af:9, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33e5ba..0x33e5be: exact_instruction, entry=189, bytes=20e02ca7; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e5be..0x33e5c1: exact_instruction, entry=215, bytes=600848; next = 268@0xb0007:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x33e5c1..0x33e5c5: exact_instruction, entry=268, bytes=a95dc562; next = 33@0x7f7c4:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x33e5c5..0x33e5c9: exact_instruction, entry=33, bytes=e80118c6; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e5c9..0x33e5cc: exact_instruction, entry=297, bytes=b9b603; next = 189@0x9e7af:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x33e5cc..0x33e5d0: exact_instruction, entry=189, bytes=8471c4e8; next = 172@0x9b68a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x33e5d0..0x33e5d4: exact_instruction, entry=172, bytes=6f35eb03; next = 315@0xb9451:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33e5d4..0x33e5d8: exact_instruction, entry=315, bytes=e80171f2; next = 64@0x85059:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33e5d8..0x33e5dc: exact_instruction, entry=64, bytes=58252a7a; next = 43@0x8173d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x33e5dc..0x33e5e0: exact_instruction, entry=43, bytes=6e89caf0; next = 185@0x9d964:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e5e0..0x33e5e3: exact_instruction, entry=185, bytes=1b183a; next = 315@0xb9451:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x33e5e3..0x33e5e7: exact_instruction, entry=315, bytes=e80151f6; next = 196@0x9fbcd:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x33e5e7..0x33e5eb: exact_instruction, entry=196, bytes=97d925ff; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e5eb..0x33e5ee: exact_instruction, entry=28, bytes=100836; next = 258@0xadf2c:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e5ee..0x33e5f2: exact_instruction, entry=258, bytes=3c7385db; next = 315@0xb9451:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33e5f2..0x33e5f6: exact_instruction, entry=315, bytes=e801a9fa; next = 347@0xc088d:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x33e5f6..0x33e5fa: exact_instruction, entry=347, bytes=c0091284; next = 66@0x855ff:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33e5fa..0x33e5fd: exact_instruction, entry=66, bytes=6fd46e; next = 168@0x9aa83:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x33e5fd..0x33e601: exact_instruction, entry=168, bytes=a52d9ed9; next = 346@0xc0535:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x33e601..0x33e605: exact_instruction, entry=346, bytes=8820e801; next = 340@0xbf435:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e605..0x33e609: exact_instruction, entry=340, bytes=0c92d300; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e609..0x33e60c: exact_instruction, entry=307, bytes=d515af; next = 172@0x9b68a:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 172;
    vm_ip += 0x3;
    /* 0x33e60c..0x33e610: exact_instruction, entry=172, bytes=f8bfbb03; next = 305@0xb78b0:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x33e610..0x33e614: exact_instruction, entry=305, bytes=5a4ce801; next = 189@0x9e7af:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x33e614..0x33e618: exact_instruction, entry=189, bytes=6d874ceb; next = 185@0x9d964:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e618..0x33e61b: exact_instruction, entry=185, bytes=e3863a; next = 43@0x8173d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x33e61b..0x33e61f: exact_instruction, entry=43, bytes=36fa8287; next = 315@0xb9451:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33e61f..0x33e623: exact_instruction, entry=315, bytes=e80199f4; next = 157@0x98a9a:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x33e623..0x33e627: exact_instruction, entry=157, bytes=ffc2b300; next = 337@0xbec0e:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e627..0x33e62b: exact_instruction, entry=337, bytes=84692327; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e62b..0x33e62e: exact_instruction, entry=297, bytes=8ff8f2; next = 315@0xb9451:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x33e62e..0x33e632: exact_instruction, entry=315, bytes=e801e1fa; next = 338@0xbf128:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 338;
    vm_ip += 0x4;
    /* 0x33e632..0x33e638: exact_instruction, entry=338, bytes=dce23d01e801; next = 283@0xb3612:9, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x0u) - vm->state - 0x4bf8be0cu;
    next_entry = 283;
    vm_ip += 0x6;
    /* 0x33e638..0x33e63d: exact_instruction, entry=283, bytes=10e8010c5c; next = 43@0x8173d:9, ip += +0x5; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    /* state preserved: state_preserve */
    next_entry = 43;
    vm_ip += 0x5;
    /* 0x33e63d..0x33e641: exact_instruction, entry=43, bytes=ef6d9313; next = 340@0xbf435:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e641..0x33e645: exact_instruction, entry=340, bytes=d02bb300; next = 332@0xbd36d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 332;
    vm_ip += 0x4;
    /* 0x33e645..0x33e649: exact_instruction, entry=332, bytes=51c7b739; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u ^ U16(vm->ip + 0x2u) ^ vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x42097e5du;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e649..0x33e64c: exact_instruction, entry=18, bytes=d4493b; next = 242@0xaa87d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 242;
    vm_ip += 0x3;
    /* 0x33e64c..0x33e651: exact_instruction, entry=242, bytes=3d0167412a; next = 199@0xa0631:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x3u) - vm->state ^ 0x5c05e9b5u;
    next_entry = 199;
    vm_ip += 0x5;
    /* 0x33e651..0x33e654: exact_instruction, entry=199, bytes=ea579d; next = 64@0x85059:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x33e654..0x33e658: exact_instruction, entry=64, bytes=066ca3e6; next = 161@0x9975a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x33e658..0x33e65c: exact_instruction, entry=161, bytes=2952e801; next = 119@0x90ebc:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 119;
    vm_ip += 0x4;
    /* 0x33e65c..0x33e662: exact_instruction, entry=119, bytes=e8013d0120eb; next = 340@0xbf435:9, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x4u) ^ vm->state + 0x7e7974a5u;
    next_entry = 340;
    vm_ip += 0x6;
    /* 0x33e662..0x33e666: exact_instruction, entry=340, bytes=b092b300; next = 199@0xa0631:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e666..0x33e669: exact_instruction, entry=199, bytes=8306d6; next = 174@0x9bd8f:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x33e669..0x33e66d: exact_instruction, entry=174, bytes=db30e801; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e66d..0x33e670: exact_instruction, entry=28, bytes=d80a4e; next = 347@0xc088d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x33e670..0x33e674: exact_instruction, entry=347, bytes=6988fdc3; next = 20@0x7c62b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x33e674..0x33e678: exact_instruction, entry=20, bytes=e801b98f; next = 66@0x855ff:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33e678..0x33e67b: exact_instruction, entry=66, bytes=2c8f3a; next = 64@0x85059:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x33e67b..0x33e67f: exact_instruction, entry=64, bytes=6154ea36; next = 174@0x9bd8f:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x33e67f..0x33e683: exact_instruction, entry=174, bytes=6434e801; next = 199@0xa0631:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e683..0x33e686: exact_instruction, entry=199, bytes=1ee7a1; next = 258@0xadf2c:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e686..0x33e68a: exact_instruction, entry=258, bytes=b32f0b50; next = 174@0x9bd8f:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x33e68a..0x33e68e: exact_instruction, entry=174, bytes=7931e801; next = 199@0xa0631:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e68e..0x33e691: exact_instruction, entry=199, bytes=820f35; next = 258@0xadf2c:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e691..0x33e695: exact_instruction, entry=258, bytes=2d787570; next = 123@0x91a59:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x33e695..0x33e699: exact_instruction, entry=123, bytes=462fe801; next = 340@0xbf435:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e699..0x33e69d: exact_instruction, entry=340, bytes=44bf9d01; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e69d..0x33e6a0: exact_instruction, entry=215, bytes=d80348; next = 123@0x91a59:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x33e6a0..0x33e6a4: exact_instruction, entry=123, bytes=5de4e801; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e6a4..0x33e6a7: exact_instruction, entry=215, bytes=100840; next = 258@0xadf2c:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e6a7..0x33e6ab: exact_instruction, entry=258, bytes=8129a792; next = 176@0x9c10b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x33e6ab..0x33e6af: exact_instruction, entry=176, bytes=e8017a70; next = 347@0xc088d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x33e6af..0x33e6b3: exact_instruction, entry=347, bytes=e982c106; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e6b3..0x33e6b6: exact_instruction, entry=18, bytes=70074e; next = 158@0x99029:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0x33e6b6..0x33e6ba: exact_instruction, entry=158, bytes=e801e89b; next = 340@0xbf435:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e6ba..0x33e6be: exact_instruction, entry=340, bytes=a87dcb00; next = 199@0xa0631:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e6be..0x33e6c1: exact_instruction, entry=199, bytes=1f895a; next = 176@0x9c10b:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x33e6c1..0x33e6c5: exact_instruction, entry=176, bytes=e801f6b7; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e6c5..0x33e6c8: exact_instruction, entry=18, bytes=140c1a; next = 64@0x85059:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x33e6c8..0x33e6cc: exact_instruction, entry=64, bytes=a4171e7a; next = 184@0x9d694:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0x33e6cc..0x33e6d0: exact_instruction, entry=184, bytes=a000e801; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e6d0..0x33e6d3: exact_instruction, entry=28, bytes=880a80; next = 337@0xbec0e:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33e6d3..0x33e6d7: exact_instruction, entry=337, bytes=d49597f5; next = 161@0x9975a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x33e6d7..0x33e6db: exact_instruction, entry=161, bytes=7678e801; next = 337@0xbec0e:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e6db..0x33e6df: exact_instruction, entry=337, bytes=2c9ecaa0; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e6df..0x33e6e2: exact_instruction, entry=307, bytes=9625af; next = 174@0x9bd8f:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x33e6e2..0x33e6e6: exact_instruction, entry=174, bytes=7bc3e801; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e6e6..0x33e6e9: exact_instruction, entry=18, bytes=e81b52; next = 347@0xc088d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x33e6e9..0x33e6ed: exact_instruction, entry=347, bytes=e9ba8d08; next = 174@0x9bd8f:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x33e6ed..0x33e6f1: exact_instruction, entry=174, bytes=48a5e801; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e6f1..0x33e6f4: exact_instruction, entry=18, bytes=24bc7b; next = 340@0xbf435:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x33e6f4..0x33e6f8: exact_instruction, entry=340, bytes=20faab00; next = 174@0x9bd8f:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x33e6f8..0x33e6fc: exact_instruction, entry=174, bytes=59cae801; next = 114@0x90319:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33e6fc..0x33e700: exact_instruction, entry=114, bytes=f34e7c9c; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e700..0x33e703: exact_instruction, entry=28, bytes=d803cc; next = 123@0x91a59:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x33e703..0x33e707: exact_instruction, entry=123, bytes=a22ae801; next = 69@0x85f24:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 69;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x33e707, coverage=hidden_span_of_17:9 */
    {
        static const VMSyntheticTailEvidence tail = {
            UINT64_C(0x33e703),
            UINT64_C(0x33e707),
            123u,
            69u,
            "covered_synthetic_fallthrough",
            "hidden_span_of_17:9",
            "next = 69@0x85f24:9, ip += +0x4; dispatch_model=static_100; state=state_add_const",
        };
        vm_program_synthetic_tail_evidence(vm, &tail);
    }
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p053_bb_0337(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 337: 0x33e718..0x33e834; rows=73, terminal=long_branch_forward */
    /* 0x33e718..0x33e71a: exact_instruction, entry=171, bytes=1c00; next = 28@0x7e390:9, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 28;
    vm_ip += 0x2;
    /* 0x33e71a..0x33e71d: exact_instruction, entry=28, bytes=580110; next = 43@0x8173d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x33e71d..0x33e721: exact_instruction, entry=43, bytes=997fe501; next = 340@0xbf435:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e721..0x33e725: exact_instruction, entry=340, bytes=58159900; next = 305@0xb78b0:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x33e725..0x33e729: exact_instruction, entry=305, bytes=7599e801; next = 337@0xbec0e:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e729..0x33e72d: exact_instruction, entry=337, bytes=cce9ab00; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e72d..0x33e730: exact_instruction, entry=18, bytes=6881fa; next = 43@0x8173d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0x33e730..0x33e734: exact_instruction, entry=43, bytes=f70a137e; next = 33@0x7f7c4:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x33e734..0x33e738: exact_instruction, entry=33, bytes=e801a272; next = 185@0x9d964:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e738..0x33e73b: exact_instruction, entry=185, bytes=2b8d3a; next = 268@0xb0007:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x33e73b..0x33e73f: exact_instruction, entry=268, bytes=bf0cf92c; next = 347@0xc088d:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x33e73f..0x33e743: exact_instruction, entry=347, bytes=e0b1da18; next = 305@0xb78b0:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x33e743..0x33e747: exact_instruction, entry=305, bytes=eb25e801; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e747..0x33e74a: exact_instruction, entry=28, bytes=4005dc; next = 168@0x9aa83:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x33e74a..0x33e74e: exact_instruction, entry=168, bytes=af5fded9; next = 337@0xbec0e:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x33e74e..0x33e752: exact_instruction, entry=337, bytes=67972000; next = 243@0xaab6a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x33e752..0x33e756: exact_instruction, entry=243, bytes=3598e801; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e756..0x33e759: exact_instruction, entry=18, bytes=10083a; next = 258@0xadf2c:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e759..0x33e75d: exact_instruction, entry=258, bytes=a6de174c; next = 168@0x9aa83:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x33e75d..0x33e761: exact_instruction, entry=168, bytes=f36ff6d5; next = 243@0xaab6a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x33e761..0x33e765: exact_instruction, entry=243, bytes=5e9ee801; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e765..0x33e768: exact_instruction, entry=215, bytes=880a9b; next = 337@0xbec0e:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x33e768..0x33e76c: exact_instruction, entry=337, bytes=7b7df44b; next = 168@0x9aa83:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x33e76c..0x33e770: exact_instruction, entry=168, bytes=17c91fcf; next = 33@0x7f7c4:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x33e770..0x33e774: exact_instruction, entry=33, bytes=e8018ccd; next = 340@0xbf435:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x33e774..0x33e778: exact_instruction, entry=340, bytes=ac1bcb00; next = 196@0x9fbcd:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x33e778..0x33e77c: exact_instruction, entry=196, bytes=2cf5dde0; next = 307@0xb8064:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x33e77c..0x33e77f: exact_instruction, entry=307, bytes=22bdaa; next = 33@0x7f7c4:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 33;
    vm_ip += 0x3;
    /* 0x33e77f..0x33e783: exact_instruction, entry=33, bytes=e801f44b; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e783..0x33e786: exact_instruction, entry=297, bytes=e92686; next = 333@0xbd8af:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x33e786..0x33e78a: exact_instruction, entry=333, bytes=f3f13800; next = 64@0x85059:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33e78a..0x33e78e: exact_instruction, entry=64, bytes=0937207f; next = 315@0xb9451:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33e78e..0x33e792: exact_instruction, entry=315, bytes=e80119fa; next = 333@0xbd8af:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33e792..0x33e796: exact_instruction, entry=333, bytes=fff01300; next = 66@0x855ff:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33e796..0x33e799: exact_instruction, entry=66, bytes=995dcc; next = 347@0xc088d:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x33e799..0x33e79d: exact_instruction, entry=347, bytes=86839a02; next = 315@0xb9451:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33e79d..0x33e7a1: exact_instruction, entry=315, bytes=e801a9fa; next = 347@0xc088d:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x33e7a1..0x33e7a5: exact_instruction, entry=347, bytes=400b6083; next = 172@0x9b68a:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x33e7a5..0x33e7a9: exact_instruction, entry=172, bytes=192b8b0c; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e7a9..0x33e7ac: exact_instruction, entry=215, bytes=980744; next = 243@0xaab6a:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 243;
    vm_ip += 0x3;
    /* 0x33e7ac..0x33e7b0: exact_instruction, entry=243, bytes=a59ee801; next = 196@0x9fbcd:9, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x33e7b0..0x33e7b4: exact_instruction, entry=196, bytes=dd6a04f7; next = 28@0x7e390:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x33e7b4..0x33e7b7: exact_instruction, entry=28, bytes=10080b; next = 258@0xadf2c:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x33e7b7..0x33e7bb: exact_instruction, entry=258, bytes=8243bbc3; next = 33@0x7f7c4:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x33e7bb..0x33e7bf: exact_instruction, entry=33, bytes=e801e4c4; next = 64@0x85059:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x33e7bf..0x33e7c3: exact_instruction, entry=64, bytes=ad8d99f6; next = 203@0xa1484:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x33e7c3..0x33e7c7: exact_instruction, entry=203, bytes=4f916ddb; next = 297@0xb64d7:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x33e7c7..0x33e7ca: exact_instruction, entry=297, bytes=6d46bb; next = 33@0x7f7c4:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 33;
    vm_ip += 0x3;
    /* 0x33e7ca..0x33e7ce: exact_instruction, entry=33, bytes=e801227f; next = 18@0x7be9b:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x33e7ce..0x33e7d1: exact_instruction, entry=18, bytes=882b16; next = 347@0xc088d:9, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x33e7d1..0x33e7d5: exact_instruction, entry=347, bytes=15b19548; next = 333@0xbd8af:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x33e7d5..0x33e7d9: exact_instruction, entry=333, bytes=a7d99100; next = 315@0xb9451:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x33e7d9..0x33e7dd: exact_instruction, entry=315, bytes=e801b9f5; next = 185@0x9d964:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x33e7dd..0x33e7e0: exact_instruction, entry=185, bytes=97ea3a; next = 203@0xa1484:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 203;
    vm_ip += 0x3;
    /* 0x33e7e0..0x33e7e4: exact_instruction, entry=203, bytes=17906f86; next = 258@0xadf2c:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33e7e4..0x33e7e8: exact_instruction, entry=258, bytes=904abd0b; next = 33@0x7f7c4:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x33e7e8..0x33e7ec: exact_instruction, entry=33, bytes=e80124c8; next = 168@0x9aa83:9, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x33e7ec..0x33e7f0: exact_instruction, entry=168, bytes=f45846d5; next = 199@0xa0631:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x33e7f0..0x33e7f3: exact_instruction, entry=199, bytes=b34266; next = 189@0x9e7af:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x33e7f3..0x33e7f7: exact_instruction, entry=189, bytes=7d31e8d7; next = 305@0xb78b0:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x33e7f7..0x33e7fb: exact_instruction, entry=305, bytes=e4f1e801; next = 114@0x90319:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x33e7fb..0x33e7ff: exact_instruction, entry=114, bytes=f965a6ac; next = 66@0x855ff:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x33e7ff..0x33e802: exact_instruction, entry=66, bytes=e9950c; next = 172@0x9b68a:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 172;
    vm_ip += 0x3;
    /* 0x33e802..0x33e806: exact_instruction, entry=172, bytes=c3a03b0b; next = 33@0x7f7c4:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x33e806..0x33e80a: exact_instruction, entry=33, bytes=e8019837; next = 167@0x9a8d2:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 167;
    vm_ip += 0x4;
    /* 0x33e80a..0x33e810: exact_instruction, entry=167, bytes=e8013d01c52d; next = 351@0xc1d48:9, ip += +0x6; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) ^ vm->state ^ 0x5f92615u;
    next_entry = 351;
    vm_ip += 0x6;
    /* 0x33e810..0x33e815: exact_instruction, entry=351, bytes=e801d83710; next = 30@0x7e849:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) + vm->state - 0x7b3a2d18u;
    next_entry = 30;
    vm_ip += 0x5;
    /* 0x33e815..0x33e819: exact_instruction, entry=30, bytes=c807d3c4; next = 215@0xa4609:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags & 0x614d4b17u + 0x64fd160cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x33e819..0x33e81c: exact_instruction, entry=215, bytes=600830; next = 268@0xb0007:9, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x33e81c..0x33e820: exact_instruction, entry=268, bytes=d1462d6a; next = 258@0xadf2c:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x33e820..0x33e824: exact_instruction, entry=258, bytes=7cc4ad5c; next = 245@0xab141:9, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 245;
    vm_ip += 0x4;
    /* 0x33e824..0x33e829: exact_instruction, entry=245, bytes=a7503d01df; next = 75@0x873fc:9, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x0u) + vm->state ^ 0x3a835417u;
    next_entry = 75;
    vm_ip += 0x5;
    /* 0x33e829..0x33e889: long_branch_forward, entry=75, bytes=a5000000600000003d0122; next = table[165], ip += 0x60; validation=file_backed_operand;source_state=transition_model */
    /* state preserved: sampled_backedge */
    next_entry = (int)U32(vm->ip + 0x0);
    vm_ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* terminal CFG edge: decoded_control, target_vm_ip=0x33e889, coverage=- */
    vm_program_external_edge(vm, 0x33e889);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

void vm_program_atlas_053_decompiled(VMState *vm, uint64_t vm_ip) {
    switch (vm_ip) {
    case 0x33db28: vmdec_p053_bb_0329(vm, vm_ip); return;
    case 0x33dcce: vmdec_p053_bb_0330(vm, vm_ip); return;
    case 0x33dd15: vmdec_p053_bb_0331(vm, vm_ip); return;
    case 0x33de30: vmdec_p053_bb_0332(vm, vm_ip); return;
    case 0x33e03b: vmdec_p053_bb_0333(vm, vm_ip); return;
    case 0x33e15d: vmdec_p053_bb_0334(vm, vm_ip); return;
    case 0x33e2e8: vmdec_p053_bb_0335(vm, vm_ip); return;
    case 0x33e540: vmdec_p053_bb_0336(vm, vm_ip); return;
    case 0x33e718: vmdec_p053_bb_0337(vm, vm_ip); return;
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
enum { VM_PROGRAM_ATLAS_053_STRING_REF_COUNT = 0 };
/* No exact string-address references were found in this VM program's decompiled literals or bytecode immediates. */
/* === VM PROGRAM STRING REFERENCES END === */
