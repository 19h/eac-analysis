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
extern void vm_unresolved_synthetic_tail(VMState *vm, uint64_t vm_ip);

/* VM program atlas 2: 0xd476e..0xd57f4 */

static void vmdec_p002_bb_0010(VMState *vm, uint64_t vm_ip);
static void vmdec_p002_bb_0011(VMState *vm, uint64_t vm_ip);
static void vmdec_p002_bb_0012(VMState *vm, uint64_t vm_ip);
static void vmdec_p002_bb_0013(VMState *vm, uint64_t vm_ip);
static void vmdec_p002_bb_0014(VMState *vm, uint64_t vm_ip);
static void vmdec_p002_bb_0015(VMState *vm, uint64_t vm_ip);
static void vmdec_p002_bb_0016(VMState *vm, uint64_t vm_ip);
static void vmdec_p002_bb_0017(VMState *vm, uint64_t vm_ip);

static void vmdec_p002_bb_0010(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 10: 0xd476e..0xd4889; rows=77, terminal=exact_instruction */
    /* 0xd476e..0xd4770: exact_instruction, entry=354, bytes=c700; next = 199@0xa0631:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 199;
    vm_ip += 0x2;
    /* 0xd4770..0xd4773: exact_instruction, entry=199, bytes=df4c3a; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0xd4773..0xd4777: exact_instruction, entry=268, bytes=66561a2a; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd4777..0xd477b: exact_instruction, entry=258, bytes=8639889c; next = 350@0xc1926:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 350;
    vm_ip += 0x4;
    /* 0xd477b..0xd477f: exact_instruction, entry=350, bytes=d3bfe63e; next = 79@0x885b0:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    next_entry = 79;
    vm_ip += 0x4;
    /* 0xd477f..0xd4784: exact_instruction, entry=79, bytes=4a093d0100; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0xd4784..0xd4786: exact_instruction, entry=257, bytes=d7f1; next = 64@0x85059:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 64;
    vm_ip += 0x2;
    /* 0xd4786..0xd478a: exact_instruction, entry=64, bytes=bf854606; next = 350@0xc1926:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 350;
    vm_ip += 0x4;
    /* 0xd478a..0xd478e: exact_instruction, entry=350, bytes=dfa7ee3d; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd478e..0xd4792: exact_instruction, entry=43, bytes=7f741300; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4792..0xd4795: exact_instruction, entry=18, bytes=a8021a; next = 83@0x8947b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 83;
    vm_ip += 0x3;
    /* 0xd4795..0xd479a: exact_instruction, entry=83, bytes=518d003d01; next = 256@0xad849:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0xd479a..0xd479c: exact_instruction, entry=256, bytes=1620; next = 337@0xbec0e:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 337;
    vm_ip += 0x2;
    /* 0xd479c..0xd47a0: exact_instruction, entry=337, bytes=7f1671f8; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd47a0..0xd47a4: exact_instruction, entry=43, bytes=6eb302c7; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd47a4..0xd47a7: exact_instruction, entry=18, bytes=300b3a; next = 350@0xc1926:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 350;
    vm_ip += 0x3;
    /* 0xd47a7..0xd47ab: exact_instruction, entry=350, bytes=57c05634; next = 301@0xb708d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    next_entry = 301;
    vm_ip += 0x4;
    /* 0xd47ab..0xd47b0: exact_instruction, entry=301, bytes=003d010ff3; next = 198@0xa037e:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0xd47b0..0xd47b2: exact_instruction, entry=198, bytes=4a02; next = 114@0x90319:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 114;
    vm_ip += 0x2;
    /* 0xd47b2..0xd47b6: exact_instruction, entry=114, bytes=5666d9a9; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd47b6..0xd47b9: exact_instruction, entry=185, bytes=4ca650; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0xd47b9..0xd47bd: exact_instruction, entry=43, bytes=2ddbc1a6; next = 322@0xbb3c9:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 322;
    vm_ip += 0x4;
    /* 0xd47bd..0xd47c1: exact_instruction, entry=322, bytes=55093c35; next = 49@0x82820:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u & U16(vm->ip + 0x2u) - vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u + 0x7ba65dc4u;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0xd47c1..0xd47c6: exact_instruction, entry=49, bytes=00a7103d01; next = 352@0xc1ec4:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0xd47c6..0xd47c8: exact_instruction, entry=352, bytes=56db; next = 340@0xbf435:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 340;
    vm_ip += 0x2;
    /* 0xd47c8..0xd47cc: exact_instruction, entry=340, bytes=6850b300; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd47cc..0xd47cf: exact_instruction, entry=215, bytes=a00000; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd47cf..0xd47d3: exact_instruction, entry=20, bytes=e8015976; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd47d3..0xd47d6: exact_instruction, entry=297, bytes=81ede5; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd47d6..0xd47da: exact_instruction, entry=340, bytes=70a4b300; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0xd47da..0xd47de: exact_instruction, entry=184, bytes=9c2de801; next = 261@0xaeda2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 261;
    vm_ip += 0x4;
    /* 0xd47de..0xd47e4: exact_instruction, entry=261, bytes=e801e76a3d01; next = 258@0xadf2c:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x2u) + 0x4c539d29u;
    next_entry = 258;
    vm_ip += 0x6;
    /* 0xd47e4..0xd47e8: exact_instruction, entry=258, bytes=180b2166; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd47e8..0xd47eb: exact_instruction, entry=199, bytes=e66431; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd47eb..0xd47ef: exact_instruction, entry=176, bytes=e801ced5; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd47ef..0xd47f2: exact_instruction, entry=215, bytes=000284; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd47f2..0xd47f6: exact_instruction, entry=64, bytes=813b702a; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd47f6..0xd47fa: exact_instruction, entry=176, bytes=e801734c; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd47fa..0xd47fd: exact_instruction, entry=185, bytes=82f93a; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd47fd..0xd4801: exact_instruction, entry=340, bytes=100fd300; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd4801..0xd4805: exact_instruction, entry=176, bytes=e801aacc; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd4805..0xd4808: exact_instruction, entry=215, bytes=a00ae8; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd4808..0xd480c: exact_instruction, entry=340, bytes=9e049100; next = 158@0x99029:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0xd480c..0xd4810: exact_instruction, entry=158, bytes=e801d556; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4810..0xd4813: exact_instruction, entry=18, bytes=3053f2; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd4813..0xd4817: exact_instruction, entry=340, bytes=844b0701; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0xd4817..0xd481b: exact_instruction, entry=161, bytes=f558e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd481b..0xd481f: exact_instruction, entry=340, bytes=36929d01; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd481f..0xd4822: exact_instruction, entry=185, bytes=1e883a; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd4822..0xd4826: exact_instruction, entry=184, bytes=d8aae801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd4826..0xd4829: exact_instruction, entry=215, bytes=880ac8; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd4829..0xd482d: exact_instruction, entry=337, bytes=fc759c4a; next = 158@0x99029:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0xd482d..0xd4831: exact_instruction, entry=158, bytes=e8018600; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd4831..0xd4834: exact_instruction, entry=297, bytes=27284d; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd4834..0xd4838: exact_instruction, entry=258, bytes=71370deb; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0xd4838..0xd483c: exact_instruction, entry=184, bytes=a069e801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd483c..0xd4840: exact_instruction, entry=114, bytes=997f1ec4; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd4840..0xd4843: exact_instruction, entry=297, bytes=5708a4; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd4843..0xd4847: exact_instruction, entry=20, bytes=e8010d79; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd4847..0xd484a: exact_instruction, entry=199, bytes=ebdab6; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd484a..0xd484e: exact_instruction, entry=64, bytes=63ef47e7; next = 158@0x99029:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0xd484e..0xd4852: exact_instruction, entry=158, bytes=e8015e51; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4852..0xd4855: exact_instruction, entry=28, bytes=10088e; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd4855..0xd4859: exact_instruction, entry=258, bytes=566cd7db; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd4859..0xd485d: exact_instruction, entry=123, bytes=ae25e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd485d..0xd4860: exact_instruction, entry=28, bytes=880a46; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd4860..0xd4864: exact_instruction, entry=337, bytes=1c959cb1; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd4864..0xd4868: exact_instruction, entry=176, bytes=e801ceb8; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd4868..0xd486b: exact_instruction, entry=185, bytes=370b3a; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd486b..0xd486f: exact_instruction, entry=337, bytes=c4f1caf4; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0xd486f..0xd4873: exact_instruction, entry=161, bytes=76d8e801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd4873..0xd4877: exact_instruction, entry=337, bytes=d0914d01; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd4877..0xd487a: exact_instruction, entry=185, bytes=d3043a; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0xd487a..0xd487e: exact_instruction, entry=123, bytes=0936e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd487e..0xd4882: exact_instruction, entry=340, bytes=acbc9900; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4882..0xd4885: exact_instruction, entry=28, bytes=0805ce; next = 161@0x9975a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 161;
    vm_ip += 0x3;
    /* 0xd4885..0xd4889: exact_instruction, entry=161, bytes=8dd5e801; next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 264;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0xd4889, coverage=frontier_span_of_14:1 */
    vm_unresolved_synthetic_tail(vm, 0xd4889);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p002_bb_0011(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 11: 0xd4897..0xd4a83; rows=132, terminal=exact_instruction */
    /* 0xd4897..0xd4899: exact_instruction, entry=354, bytes=5101; next = 337@0xbec0e:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 337;
    vm_ip += 0x2;
    /* 0xd4899..0xd489d: exact_instruction, entry=337, bytes=88949900; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd489d..0xd48a0: exact_instruction, entry=185, bytes=530c3a; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0xd48a0..0xd48a4: exact_instruction, entry=168, bytes=14689dd9; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd48a4..0xd48a8: exact_instruction, entry=346, bytes=d23ce801; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd48a8..0xd48ab: exact_instruction, entry=185, bytes=e08a3a; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd48ab..0xd48af: exact_instruction, entry=64, bytes=dc5f22ca; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0xd48af..0xd48b3: exact_instruction, entry=168, bytes=72ecadd7; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0xd48b3..0xd48b7: exact_instruction, entry=287, bytes=c23ce801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd48b7..0xd48bb: exact_instruction, entry=64, bytes=f248f958; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd48bb..0xd48be: exact_instruction, entry=28, bytes=40059c; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 168;
    vm_ip += 0x3;
    /* 0xd48be..0xd48c2: exact_instruction, entry=168, bytes=c941a5d9; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd48c2..0xd48c6: exact_instruction, entry=346, bytes=d420e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd48c6..0xd48ca: exact_instruction, entry=340, bytes=63892800; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd48ca..0xd48cd: exact_instruction, entry=28, bytes=5801bd; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 43;
    vm_ip += 0x3;
    /* 0xd48cd..0xd48d1: exact_instruction, entry=43, bytes=808b54f7; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0xd48d1..0xd48d5: exact_instruction, entry=287, bytes=3626e801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd48d5..0xd48d9: exact_instruction, entry=337, bytes=5b6dac1d; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0xd48d9..0xd48dd: exact_instruction, entry=172, bytes=d512ab03; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd48dd..0xd48e0: exact_instruction, entry=307, bytes=2e85aa; next = 26@0x7dbbb:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 26;
    vm_ip += 0x3;
    /* 0xd48e0..0xd48e4: exact_instruction, entry=26, bytes=66f0e801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd48e4..0xd48e8: exact_instruction, entry=64, bytes=d94923c2; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd48e8..0xd48eb: exact_instruction, entry=18, bytes=340d1a; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0xd48eb..0xd48ef: exact_instruction, entry=268, bytes=77c0f92b; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0xd48ef..0xd48f3: exact_instruction, entry=315, bytes=e801e9f9; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd48f3..0xd48f6: exact_instruction, entry=307, bytes=d23db4; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd48f6..0xd48fa: exact_instruction, entry=337, bytes=04f9b3e0; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd48fa..0xd48fe: exact_instruction, entry=43, bytes=419835e3; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0xd48fe..0xd4902: exact_instruction, entry=243, bytes=9d92e801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd4902..0xd4906: exact_instruction, entry=347, bytes=f10ab906; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0xd4906..0xd490a: exact_instruction, entry=333, bytes=27f53800; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd490a..0xd490d: exact_instruction, entry=199, bytes=5f9032; next = 26@0x7dbbb:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 26;
    vm_ip += 0x3;
    /* 0xd490d..0xd4911: exact_instruction, entry=26, bytes=ea6de801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4911..0xd4914: exact_instruction, entry=307, bytes=6a9dae; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0xd4914..0xd4918: exact_instruction, entry=157, bytes=17c11300; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd4918..0xd491c: exact_instruction, entry=337, bytes=ac798b20; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0xd491c..0xd4920: exact_instruction, entry=26, bytes=d6d6e801; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd4920..0xd4923: exact_instruction, entry=185, bytes=2bf13a; next = 196@0x9fbcd:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 196;
    vm_ip += 0x3;
    /* 0xd4923..0xd4927: exact_instruction, entry=196, bytes=db742ddd; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd4927..0xd492b: exact_instruction, entry=189, bytes=f4805ce0; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0xd492b..0xd492f: exact_instruction, entry=315, bytes=e801b9f5; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd492f..0xd4932: exact_instruction, entry=185, bytes=6c043a; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd4932..0xd4936: exact_instruction, entry=347, bytes=b7080b53; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd4936..0xd493a: exact_instruction, entry=43, bytes=8117556b; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0xd493a..0xd493e: exact_instruction, entry=287, bytes=e24de801; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0xd493e..0xd4942: exact_instruction, entry=172, bytes=67770b0c; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd4942..0xd4945: exact_instruction, entry=199, bytes=93ce76; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd4945..0xd4949: exact_instruction, entry=189, bytes=c5b558dc; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0xd4949..0xd494d: exact_instruction, entry=315, bytes=e801e1f0; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd494d..0xd4950: exact_instruction, entry=18, bytes=680bba; next = 333@0xbd8af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0xd4950..0xd4954: exact_instruction, entry=333, bytes=7fe39100; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd4954..0xd4958: exact_instruction, entry=114, bytes=b78330cf; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0xd4958..0xd495c: exact_instruction, entry=26, bytes=2ae5e801; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd495c..0xd495f: exact_instruction, entry=66, bytes=e9191c; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd495f..0xd4963: exact_instruction, entry=347, bytes=f6bfea0a; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0xd4963..0xd4967: exact_instruction, entry=157, bytes=e39ed300; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0xd4967..0xd496b: exact_instruction, entry=287, bytes=849ee801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd496b..0xd496e: exact_instruction, entry=28, bytes=d80a17; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd496e..0xd4972: exact_instruction, entry=347, bytes=618b3d01; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0xd4972..0xd4976: exact_instruction, entry=203, bytes=d7987597; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0xd4976..0xd497a: exact_instruction, entry=26, bytes=fa9de801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd497a..0xd497d: exact_instruction, entry=215, bytes=600880; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 268;
    vm_ip += 0x3;
    /* 0xd497d..0xd4981: exact_instruction, entry=268, bytes=592abd2c; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd4981..0xd4985: exact_instruction, entry=347, bytes=beb7c819; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd4985..0xd4989: exact_instruction, entry=346, bytes=0282e801; next = 167@0x9a8d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 167;
    vm_ip += 0x4;
    /* 0xd4989..0xd498f: exact_instruction, entry=167, bytes=e8013d01f8f9; next = 295@0xb60e0:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) ^ vm->state ^ 0x5f92615u;
    next_entry = 295;
    vm_ip += 0x6;
    /* 0xd498f..0xd4994: exact_instruction, entry=295, bytes=e8011ad110; next = 165@0x9a24c:1, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) - 0x396ecbf2u;
    next_entry = 165;
    vm_ip += 0x5;
    /* 0xd4994..0xd4996: exact_instruction, entry=165, bytes=4000; next = 64@0x85059:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 64;
    vm_ip += 0x2;
    /* 0xd4996..0xd499a: exact_instruction, entry=64, bytes=2ba71300; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0xd499a..0xd499e: exact_instruction, entry=168, bytes=6322e6d8; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd499e..0xd49a1: exact_instruction, entry=307, bytes=b9a5b1; next = 254@0xad32c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 254;
    vm_ip += 0x3;
    /* 0xd49a1..0xd49a5: exact_instruction, entry=254, bytes=8b011a44; next = 79@0x885b0:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) ^ vm->state + vm->flags | vm->flags | 0x617339d9u | 0x5635509u | 0x15874263u ^ 0x5bf4e999u & vm->flags - 0x35a18ac8u | 0x5feb6979u & 0x3e80b852u | U16(vm->ip + 0x2u) - 0x228a41a2u;
    next_entry = 79;
    vm_ip += 0x4;
    /* 0xd49a5..0xd49aa: exact_instruction, entry=79, bytes=1e883d0100; next = 256@0xad849:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0xd49aa..0xd49ac: exact_instruction, entry=256, bytes=c160; next = 168@0x9aa83:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 168;
    vm_ip += 0x2;
    /* 0xd49ac..0xd49b0: exact_instruction, entry=168, bytes=5d0ba2d8; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd49b0..0xd49b4: exact_instruction, entry=347, bytes=b50aa101; next = 154@0x97ce6:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 154;
    vm_ip += 0x4;
    /* 0xd49b4..0xd49b8: exact_instruction, entry=154, bytes=b966af6d; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd49b8..0xd49bb: exact_instruction, entry=199, bytes=1fc732; next = 83@0x8947b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 83;
    vm_ip += 0x3;
    /* 0xd49bb..0xd49c0: exact_instruction, entry=83, bytes=1c58003d01; next = 108@0x8f24b:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0xd49c0..0xd49c2: exact_instruction, entry=108, bytes=d170; next = 66@0x855ff:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 66;
    vm_ip += 0x2;
    /* 0xd49c2..0xd49c5: exact_instruction, entry=66, bytes=d9ddde; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd49c5..0xd49c9: exact_instruction, entry=64, bytes=159f3371; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0xd49c9..0xd49cd: exact_instruction, entry=184, bytes=bc0ae801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd49cd..0xd49d1: exact_instruction, entry=337, bytes=50990743; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd49d1..0xd49d4: exact_instruction, entry=28, bytes=a00066; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd49d4..0xd49d8: exact_instruction, entry=20, bytes=e801b97a; next = 181@0x9d13f:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 181;
    vm_ip += 0x4;
    /* 0xd49d8..0xd49de: exact_instruction, entry=181, bytes=3d01e801c80a; next = 185@0x9d964:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) - vm->state;
    next_entry = 185;
    vm_ip += 0x6;
    /* 0xd49de..0xd49e1: exact_instruction, entry=185, bytes=bb653a; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd49e1..0xd49e5: exact_instruction, entry=340, bytes=58beb300; next = 20@0x7c62b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0xd49e5..0xd49e9: exact_instruction, entry=20, bytes=e8011fc7; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd49e9..0xd49ed: exact_instruction, entry=258, bytes=84234deb; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd49ed..0xd49f0: exact_instruction, entry=307, bytes=4aa5ae; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd49f0..0xd49f4: exact_instruction, entry=158, bytes=e8019ec4; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd49f4..0xd49f7: exact_instruction, entry=28, bytes=e8056e; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd49f7..0xd49fb: exact_instruction, entry=189, bytes=fcaff4e3; next = 20@0x7c62b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0xd49fb..0xd49ff: exact_instruction, entry=20, bytes=e801c472; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd49ff..0xd4a03: exact_instruction, entry=189, bytes=977a1cea; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd4a03..0xd4a06: exact_instruction, entry=215, bytes=a00008; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd4a06..0xd4a0a: exact_instruction, entry=20, bytes=e801ef99; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd4a0a..0xd4a0d: exact_instruction, entry=297, bytes=011dfa; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd4a0d..0xd4a11: exact_instruction, entry=258, bytes=94a097c3; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0xd4a11..0xd4a15: exact_instruction, entry=161, bytes=e274e801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd4a15..0xd4a19: exact_instruction, entry=189, bytes=f6242ca1; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd4a19..0xd4a1c: exact_instruction, entry=215, bytes=c00544; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd4a1c..0xd4a20: exact_instruction, entry=184, bytes=522ee801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4a20..0xd4a23: exact_instruction, entry=18, bytes=b24524; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd4a23..0xd4a27: exact_instruction, entry=114, bytes=89a776ef; next = 174@0x9bd8f:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0xd4a27..0xd4a2b: exact_instruction, entry=174, bytes=935ee801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd4a2b..0xd4a2f: exact_instruction, entry=347, bytes=19023987; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4a2f..0xd4a32: exact_instruction, entry=66, bytes=ffe0be; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd4a32..0xd4a36: exact_instruction, entry=176, bytes=e801665e; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd4a36..0xd4a3a: exact_instruction, entry=337, bytes=6c9a5f3a; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4a3a..0xd4a3d: exact_instruction, entry=18, bytes=84351a; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0xd4a3d..0xd4a41: exact_instruction, entry=174, bytes=c085e801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4a41..0xd4a44: exact_instruction, entry=18, bytes=8008a6; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd4a44..0xd4a48: exact_instruction, entry=189, bytes=6c7fd49f; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd4a48..0xd4a4c: exact_instruction, entry=176, bytes=e8018b16; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd4a4c..0xd4a50: exact_instruction, entry=189, bytes=e1fee49b; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4a50..0xd4a53: exact_instruction, entry=18, bytes=f02dba; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd4a53..0xd4a57: exact_instruction, entry=158, bytes=e801f4b6; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd4a57..0xd4a5a: exact_instruction, entry=199, bytes=3b59fe; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd4a5a..0xd4a5e: exact_instruction, entry=114, bytes=d632977a; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd4a5e..0xd4a62: exact_instruction, entry=123, bytes=b7aae801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd4a62..0xd4a66: exact_instruction, entry=114, bytes=777728ba; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4a66..0xd4a69: exact_instruction, entry=307, bytes=8635af; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd4a69..0xd4a6d: exact_instruction, entry=176, bytes=e801029a; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd4a6d..0xd4a70: exact_instruction, entry=185, bytes=dbab3a; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd4a70..0xd4a74: exact_instruction, entry=347, bytes=e30f2f83; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0xd4a74..0xd4a78: exact_instruction, entry=161, bytes=664ee801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4a78..0xd4a7b: exact_instruction, entry=18, bytes=8a0ad4; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd4a7b..0xd4a7f: exact_instruction, entry=337, bytes=fc111f0b; next = 158@0x99029:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0xd4a7f..0xd4a83: exact_instruction, entry=158, bytes=e80142a0; next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 278;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0xd4a83, coverage=hidden_span_of_14:1 */
    vm_unresolved_synthetic_tail(vm, 0xd4a83);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p002_bb_0012(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 12: 0xd4a91..0xd4beb; rows=91, terminal=exact_instruction */
    /* 0xd4a91..0xd4a93: exact_instruction, entry=171, bytes=c700; next = 199@0xa0631:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 199;
    vm_ip += 0x2;
    /* 0xd4a93..0xd4a96: exact_instruction, entry=199, bytes=474f3a; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd4a96..0xd4a9a: exact_instruction, entry=347, bytes=648cae01; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0xd4a9a..0xd4a9e: exact_instruction, entry=196, bytes=80b42dd7; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0xd4a9e..0xd4aa2: exact_instruction, entry=33, bytes=e801fcb4; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4aa2..0xd4aa5: exact_instruction, entry=66, bytes=69333a; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0xd4aa5..0xd4aa9: exact_instruction, entry=168, bytes=6656dcd0; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd4aa9..0xd4aad: exact_instruction, entry=64, bytes=1f531739; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0xd4aad..0xd4ab1: exact_instruction, entry=287, bytes=c62ae801; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0xd4ab1..0xd4ab5: exact_instruction, entry=196, bytes=cead55d8; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4ab5..0xd4ab8: exact_instruction, entry=66, bytes=014a3a; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd4ab8..0xd4abc: exact_instruction, entry=347, bytes=24bba00a; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0xd4abc..0xd4ac0: exact_instruction, entry=26, bytes=ec3fe801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4ac0..0xd4ac4: exact_instruction, entry=340, bytes=44a22800; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd4ac4..0xd4ac8: exact_instruction, entry=43, bytes=b3900fe4; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4ac8..0xd4acb: exact_instruction, entry=28, bytes=0801fe; next = 33@0x7f7c4:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 33;
    vm_ip += 0x3;
    /* 0xd4acb..0xd4acf: exact_instruction, entry=33, bytes=e8013680; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd4acf..0xd4ad3: exact_instruction, entry=43, bytes=5f7d2b00; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4ad3..0xd4ad6: exact_instruction, entry=307, bytes=8a45ad; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd4ad6..0xd4ada: exact_instruction, entry=114, bytes=916846ab; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0xd4ada..0xd4ade: exact_instruction, entry=315, bytes=e80191f0; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4ade..0xd4ae1: exact_instruction, entry=28, bytes=5801de; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 43;
    vm_ip += 0x3;
    /* 0xd4ae1..0xd4ae5: exact_instruction, entry=43, bytes=c71ebb60; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4ae5..0xd4ae9: exact_instruction, entry=340, bytes=fcb34701; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0xd4ae9..0xd4aed: exact_instruction, entry=305, bytes=3138e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4aed..0xd4af1: exact_instruction, entry=340, bytes=9c0dcb00; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4af1..0xd4af4: exact_instruction, entry=66, bytes=6722fc; next = 172@0x9b68a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 172;
    vm_ip += 0x3;
    /* 0xd4af4..0xd4af8: exact_instruction, entry=172, bytes=34a9e300; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd4af8..0xd4afc: exact_instruction, entry=346, bytes=1030e801; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0xd4afc..0xd4b00: exact_instruction, entry=172, bytes=b6979300; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4b00..0xd4b04: exact_instruction, entry=340, bytes=3a6f3800; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd4b04..0xd4b07: exact_instruction, entry=185, bytes=c4873a; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 287;
    vm_ip += 0x3;
    /* 0xd4b07..0xd4b0b: exact_instruction, entry=287, bytes=282ee801; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0xd4b0b..0xd4b0f: exact_instruction, entry=168, bytes=7edbddd2; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd4b0f..0xd4b13: exact_instruction, entry=114, bytes=c15c1e25; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4b13..0xd4b16: exact_instruction, entry=66, bytes=45b15c; next = 305@0xb78b0:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 305;
    vm_ip += 0x3;
    /* 0xd4b16..0xd4b1a: exact_instruction, entry=305, bytes=aed3e801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd4b1a..0xd4b1e: exact_instruction, entry=114, bytes=4f489803; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4b1e..0xd4b21: exact_instruction, entry=66, bytes=9114da; next = 333@0xbd8af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0xd4b21..0xd4b25: exact_instruction, entry=333, bytes=73f99d01; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0xd4b25..0xd4b29: exact_instruction, entry=305, bytes=2d11e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4b29..0xd4b2d: exact_instruction, entry=340, bytes=ec190701; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0xd4b2d..0xd4b31: exact_instruction, entry=172, bytes=98cfd30a; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4b31..0xd4b34: exact_instruction, entry=28, bytes=d00a0b; next = 346@0xc0535:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 346;
    vm_ip += 0x3;
    /* 0xd4b34..0xd4b38: exact_instruction, entry=346, bytes=c447e801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd4b38..0xd4b3c: exact_instruction, entry=64, bytes=7de46465; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4b3c..0xd4b3f: exact_instruction, entry=66, bytes=b00b08; next = 172@0x9b68a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 172;
    vm_ip += 0x3;
    /* 0xd4b3f..0xd4b43: exact_instruction, entry=172, bytes=752dab0d; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0xd4b43..0xd4b47: exact_instruction, entry=243, bytes=5518e801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4b47..0xd4b4a: exact_instruction, entry=18, bytes=60881a; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0xd4b4a..0xd4b4e: exact_instruction, entry=268, bytes=c19f756a; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd4b4e..0xd4b52: exact_instruction, entry=258, bytes=0ec3435c; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0xd4b52..0xd4b56: exact_instruction, entry=243, bytes=4598e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4b56..0xd4b59: exact_instruction, entry=28, bytes=400570; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 168;
    vm_ip += 0x3;
    /* 0xd4b59..0xd4b5d: exact_instruction, entry=168, bytes=5a689ed6; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd4b5d..0xd4b61: exact_instruction, entry=258, bytes=042191d3; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0xd4b61..0xd4b65: exact_instruction, entry=243, bytes=8598e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4b65..0xd4b68: exact_instruction, entry=28, bytes=9003b0; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd4b68..0xd4b6c: exact_instruction, entry=114, bytes=0745d8f9; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0xd4b6c..0xd4b70: exact_instruction, entry=203, bytes=d79215d7; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd4b70..0xd4b74: exact_instruction, entry=346, bytes=b24be801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd4b74..0xd4b78: exact_instruction, entry=189, bytes=02bc90de; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0xd4b78..0xd4b7c: exact_instruction, entry=168, bytes=af5776d4; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd4b7c..0xd4b7f: exact_instruction, entry=185, bytes=9b2b3a; next = 305@0xb78b0:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 305;
    vm_ip += 0x3;
    /* 0xd4b7f..0xd4b83: exact_instruction, entry=305, bytes=9dd9e801; next = 167@0x9a8d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 167;
    vm_ip += 0x4;
    /* 0xd4b83..0xd4b89: exact_instruction, entry=167, bytes=e8013d01d52f; next = 283@0xb3612:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) ^ vm->state ^ 0x5f92615u;
    next_entry = 283;
    vm_ip += 0x6;
    /* 0xd4b89..0xd4b8e: exact_instruction, entry=283, bytes=10e801c45c; next = 66@0x855ff:1, ip += +0x5; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    /* state preserved: state_preserve */
    next_entry = 66;
    vm_ip += 0x5;
    /* 0xd4b8e..0xd4b91: exact_instruction, entry=66, bytes=5fea7a; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd4b91..0xd4b95: exact_instruction, entry=340, bytes=e0666800; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0xd4b95..0xd4b99: exact_instruction, entry=268, bytes=7d324e17; next = 322@0xbb3c9:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 322;
    vm_ip += 0x4;
    /* 0xd4b99..0xd4b9d: exact_instruction, entry=322, bytes=5dd81967; next = 180@0x9cf32:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u & U16(vm->ip + 0x2u) - vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u + 0x7ba65dc4u;
    next_entry = 180;
    vm_ip += 0x4;
    /* 0xd4b9d..0xd4ba1: exact_instruction, entry=180, bytes=8307e801; next = 49@0x82820:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x0u) + 0x7920fa05u;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0xd4ba1..0xd4ba6: exact_instruction, entry=49, bytes=00e7213d01; next = 256@0xad849:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0xd4ba6..0xd4ba8: exact_instruction, entry=256, bytes=cd35; next = 140@0x94e5a:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 140;
    vm_ip += 0x2;
    /* 0xd4ba8..0xd4bae: exact_instruction, entry=140, bytes=1fb83cda91c2; next = 114@0x90319:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    next_entry = 114;
    vm_ip += 0x6;
    /* 0xd4bae..0xd4bb2: exact_instruction, entry=114, bytes=0e8a3f3f; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd4bb2..0xd4bb6: exact_instruction, entry=43, bytes=3d51492c; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4bb6..0xd4bb9: exact_instruction, entry=307, bytes=7a1db1; next = 237@0xa8e1f:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 237;
    vm_ip += 0x3;
    /* 0xd4bb9..0xd4bbe: exact_instruction, entry=237, bytes=00f9343d01; next = 144@0x95887:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0xd4bbe..0xd4bc0: exact_instruction, entry=144, bytes=f79b; next = 168@0x9aa83:1, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 168;
    vm_ip += 0x2;
    /* 0xd4bc0..0xd4bc4: exact_instruction, entry=168, bytes=d66c4ed3; next = 128@0x9299b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 128;
    vm_ip += 0x4;
    /* 0xd4bc4..0xd4bc9: exact_instruction, entry=128, bytes=3a79852313; next = 189@0x9e7af:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu - U16(vm->ip + 0x1u) + vm->state & vm->flags & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu + vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x4e6b72c6u | 0x7b467141u & U16(vm->ip + 0x3u) ^ vm->state & vm->flags & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu - U16(vm->ip + 0x1u) + vm->state & vm->flags & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu + vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x4e6b72c6u | 0x7b467141u + 0x539da50eu;
    next_entry = 189;
    vm_ip += 0x5;
    /* 0xd4bc9..0xd4bcd: exact_instruction, entry=189, bytes=030aacdf; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd4bcd..0xd4bd0: exact_instruction, entry=297, bytes=a9761c; next = 220@0xa522e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 220;
    vm_ip += 0x3;
    /* 0xd4bd0..0xd4bd5: exact_instruction, entry=220, bytes=003d0105a4; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0xd4bd5..0xd4bd7: exact_instruction, entry=257, bytes=f709; next = 333@0xbd8af:1, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 333;
    vm_ip += 0x2;
    /* 0xd4bd7..0xd4bdb: exact_instruction, entry=333, bytes=dbe91300; next = 322@0xbb3c9:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 322;
    vm_ip += 0x4;
    /* 0xd4bdb..0xd4bdf: exact_instruction, entry=322, bytes=0ba1227b; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u & U16(vm->ip + 0x2u) - vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u + 0x7ba65dc4u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd4bdf..0xd4be2: exact_instruction, entry=297, bytes=b5c683; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd4be2..0xd4be6: exact_instruction, entry=337, bytes=ac4a18cd; next = 125@0x922c4:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 125;
    vm_ip += 0x4;
    /* 0xd4be6..0xd4beb: exact_instruction, entry=125, bytes=f8c8cb3d01; next = 316@0xb987b:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state - 0x7b275316u;
    next_entry = 316;
    vm_ip += 0x5;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0xd4beb, coverage=hidden_span_of_17:1 */
    vm_unresolved_synthetic_tail(vm, 0xd4beb);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p002_bb_0013(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 13: 0xd4bfc..0xd4cb9; rows=51, terminal=exact_instruction */
    /* 0xd4bfc..0xd4bff: exact_instruction, entry=185, bytes=2b193a; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd4bff..0xd4c03: exact_instruction, entry=184, bytes=d015e801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd4c03..0xd4c07: exact_instruction, entry=258, bytes=84fab176; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd4c07..0xd4c0a: exact_instruction, entry=185, bytes=d3823a; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd4c0a..0xd4c0e: exact_instruction, entry=184, bytes=f285e801; next = 261@0xaeda2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 261;
    vm_ip += 0x4;
    /* 0xd4c0e..0xd4c14: exact_instruction, entry=261, bytes=e801d7643d01; next = 64@0x85059:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x2u) + 0x4c539d29u;
    next_entry = 64;
    vm_ip += 0x6;
    /* 0xd4c14..0xd4c18: exact_instruction, entry=64, bytes=b9837336; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd4c18..0xd4c1b: exact_instruction, entry=185, bytes=2f8c3a; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0xd4c1b..0xd4c1f: exact_instruction, entry=174, bytes=edc1e801; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4c1f..0xd4c22: exact_instruction, entry=66, bytes=c216ec; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd4c22..0xd4c26: exact_instruction, entry=258, bytes=10affce7; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd4c26..0xd4c2a: exact_instruction, entry=176, bytes=e8018ca1; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4c2a..0xd4c2d: exact_instruction, entry=18, bytes=0a0744; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd4c2d..0xd4c31: exact_instruction, entry=64, bytes=dac64ab9; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd4c31..0xd4c35: exact_instruction, entry=123, bytes=85bbe801; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd4c35..0xd4c38: exact_instruction, entry=199, bytes=564f31; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd4c38..0xd4c3c: exact_instruction, entry=189, bytes=8c358ce7; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0xd4c3c..0xd4c40: exact_instruction, entry=161, bytes=8a78e801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4c40..0xd4c43: exact_instruction, entry=307, bytes=5f8db4; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd4c43..0xd4c47: exact_instruction, entry=347, bytes=963ad009; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0xd4c47..0xd4c4b: exact_instruction, entry=161, bytes=9979e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4c4b..0xd4c4f: exact_instruction, entry=340, bytes=deae9d01; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4c4f..0xd4c52: exact_instruction, entry=66, bytes=8d19be; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd4c52..0xd4c56: exact_instruction, entry=158, bytes=e801bc6b; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4c56..0xd4c59: exact_instruction, entry=28, bytes=1008b6; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd4c59..0xd4c5d: exact_instruction, entry=258, bytes=0ea2e372; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0xd4c5d..0xd4c61: exact_instruction, entry=184, bytes=bae7e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4c61..0xd4c64: exact_instruction, entry=28, bytes=880ae6; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd4c64..0xd4c68: exact_instruction, entry=337, bytes=606550a5; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd4c68..0xd4c6c: exact_instruction, entry=176, bytes=e801ca30; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd4c6c..0xd4c70: exact_instruction, entry=189, bytes=cb00ecd7; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4c70..0xd4c73: exact_instruction, entry=307, bytes=ba8dad; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0xd4c73..0xd4c77: exact_instruction, entry=123, bytes=46d7e801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd4c77..0xd4c7b: exact_instruction, entry=337, bytes=db89aaee; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4c7b..0xd4c7e: exact_instruction, entry=18, bytes=e005fa; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd4c7e..0xd4c82: exact_instruction, entry=184, bytes=ea3be801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4c82..0xd4c86: exact_instruction, entry=340, bytes=983d2301; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4c86..0xd4c89: exact_instruction, entry=28, bytes=7005c4; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 174;
    vm_ip += 0x3;
    /* 0xd4c89..0xd4c8d: exact_instruction, entry=174, bytes=17afe801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4c8d..0xd4c90: exact_instruction, entry=28, bytes=a00aea; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd4c90..0xd4c94: exact_instruction, entry=340, bytes=707d2800; next = 158@0x99029:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0xd4c94..0xd4c98: exact_instruction, entry=158, bytes=e80115e7; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd4c98..0xd4c9c: exact_instruction, entry=347, bytes=1c069087; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd4c9c..0xd4c9f: exact_instruction, entry=199, bytes=d7037a; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd4c9f..0xd4ca3: exact_instruction, entry=20, bytes=e8010a6d; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd4ca3..0xd4ca7: exact_instruction, entry=258, bytes=a9b45c6b; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4ca7..0xd4caa: exact_instruction, entry=28, bytes=800573; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd4caa..0xd4cae: exact_instruction, entry=176, bytes=e8012045; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4cae..0xd4cb1: exact_instruction, entry=28, bytes=90038c; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd4cb1..0xd4cb5: exact_instruction, entry=114, bytes=7b4184f3; next = 174@0x9bd8f:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0xd4cb5..0xd4cb9: exact_instruction, entry=174, bytes=eb17e801; next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 311;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0xd4cb9, coverage=hidden_span_of_14:1 */
    vm_unresolved_synthetic_tail(vm, 0xd4cb9);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p002_bb_0014(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 14: 0xd4cc7..0xd5044; rows=232, terminal=exact_instruction */
    /* 0xd4cc7..0xd4cc9: exact_instruction, entry=165, bytes=c700; next = 199@0xa0631:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 199;
    vm_ip += 0x2;
    /* 0xd4cc9..0xd4ccc: exact_instruction, entry=199, bytes=1f4f3a; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd4ccc..0xd4cd0: exact_instruction, entry=340, bytes=74129900; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0xd4cd0..0xd4cd4: exact_instruction, entry=157, bytes=87cc9900; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0xd4cd4..0xd4cd8: exact_instruction, entry=33, bytes=e80174fd; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4cd8..0xd4cdc: exact_instruction, entry=340, bytes=a41bab00; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd4cdc..0xd4cdf: exact_instruction, entry=199, bytes=6a1aa5; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0xd4cdf..0xd4ce3: exact_instruction, entry=43, bytes=7a240e5f; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0xd4ce3..0xd4ce7: exact_instruction, entry=243, bytes=cd96e801; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0xd4ce7..0xd4ceb: exact_instruction, entry=333, bytes=03f18900; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4ceb..0xd4cee: exact_instruction, entry=66, bytes=9d4038; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd4cee..0xd4cf2: exact_instruction, entry=64, bytes=fbba0de8; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0xd4cf2..0xd4cf6: exact_instruction, entry=33, bytes=e8011442; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd4cf6..0xd4cfa: exact_instruction, entry=189, bytes=e4edfcda; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4cfa..0xd4cfd: exact_instruction, entry=307, bytes=be0dab; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0xd4cfd..0xd4d01: exact_instruction, entry=43, bytes=fcfc2880; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0xd4d01..0xd4d05: exact_instruction, entry=287, bytes=0a20e801; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd4d05..0xd4d09: exact_instruction, entry=43, bytes=0486a0ff; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd4d09..0xd4d0c: exact_instruction, entry=185, bytes=b3183a; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd4d0c..0xd4d10: exact_instruction, entry=258, bytes=dd03d7db; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0xd4d10..0xd4d14: exact_instruction, entry=305, bytes=8009e801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd4d14..0xd4d18: exact_instruction, entry=337, bytes=c8953f01; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0xd4d18..0xd4d1c: exact_instruction, entry=157, bytes=b7a94701; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4d1c..0xd4d1f: exact_instruction, entry=307, bytes=bf4db1; next = 243@0xaab6a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 243;
    vm_ip += 0x3;
    /* 0xd4d1f..0xd4d23: exact_instruction, entry=243, bytes=3d51e801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4d23..0xd4d26: exact_instruction, entry=307, bytes=3a0db0; next = 203@0xa1484:1, ip += +0x3; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 203;
    vm_ip += 0x3;
    /* 0xd4d26..0xd4d2a: exact_instruction, entry=203, bytes=079a67f6; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd4d2a..0xd4d2e: exact_instruction, entry=64, bytes=e7204787; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd4d2e..0xd4d32: exact_instruction, entry=346, bytes=1e20e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4d32..0xd4d36: exact_instruction, entry=340, bytes=4dc43800; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4d36..0xd4d39: exact_instruction, entry=28, bytes=e804e4; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 157;
    vm_ip += 0x3;
    /* 0xd4d39..0xd4d3d: exact_instruction, entry=157, bytes=b7f83800; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0xd4d3d..0xd4d41: exact_instruction, entry=287, bytes=b648e801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd4d41..0xd4d45: exact_instruction, entry=258, bytes=dbbb7d35; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0xd4d45..0xd4d49: exact_instruction, entry=172, bytes=e12da30a; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4d49..0xd4d4c: exact_instruction, entry=18, bytes=2c858b; next = 26@0x7dbbb:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 26;
    vm_ip += 0x3;
    /* 0xd4d4c..0xd4d50: exact_instruction, entry=26, bytes=eea3e801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd4d50..0xd4d54: exact_instruction, entry=337, bytes=5469bb0a; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4d54..0xd4d57: exact_instruction, entry=307, bytes=3a0dab; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0xd4d57..0xd4d5b: exact_instruction, entry=43, bytes=29749d09; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0xd4d5b..0xd4d5f: exact_instruction, entry=315, bytes=e801d1fa; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4d5f..0xd4d63: exact_instruction, entry=340, bytes=34330701; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd4d63..0xd4d66: exact_instruction, entry=215, bytes=680a48; next = 333@0xbd8af:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 333;
    vm_ip += 0x3;
    /* 0xd4d66..0xd4d6a: exact_instruction, entry=333, bytes=8be60701; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0xd4d6a..0xd4d6e: exact_instruction, entry=243, bytes=fd99e801; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd4d6e..0xd4d72: exact_instruction, entry=43, bytes=0d78c901; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd4d72..0xd4d76: exact_instruction, entry=189, bytes=c8fe1cdf; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4d76..0xd4d79: exact_instruction, entry=307, bytes=baadb2; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 287;
    vm_ip += 0x3;
    /* 0xd4d79..0xd4d7d: exact_instruction, entry=287, bytes=3ab6e801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd4d7d..0xd4d81: exact_instruction, entry=337, bytes=ef691ead; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4d81..0xd4d84: exact_instruction, entry=28, bytes=400564; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 168;
    vm_ip += 0x3;
    /* 0xd4d84..0xd4d88: exact_instruction, entry=168, bytes=45379dcf; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0xd4d88..0xd4d8c: exact_instruction, entry=26, bytes=2adae801; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd4d8c..0xd4d8f: exact_instruction, entry=297, bytes=3740b3; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0xd4d8f..0xd4d93: exact_instruction, entry=268, bytes=ba5ceee1; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd4d93..0xd4d97: exact_instruction, entry=347, bytes=fe855a03; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd4d97..0xd4d9b: exact_instruction, entry=346, bytes=cdc0e801; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0xd4d9b..0xd4d9f: exact_instruction, entry=168, bytes=394d1ed1; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4d9f..0xd4da2: exact_instruction, entry=66, bytes=3a4c2a; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd4da2..0xd4da6: exact_instruction, entry=114, bytes=9eb5f9f6; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd4da6..0xd4daa: exact_instruction, entry=346, bytes=339ee801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4daa..0xd4dad: exact_instruction, entry=307, bytes=9e9daf; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd4dad..0xd4db1: exact_instruction, entry=189, bytes=b300a4e6; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0xd4db1..0xd4db5: exact_instruction, entry=196, bytes=c9084c00; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0xd4db5..0xd4db9: exact_instruction, entry=33, bytes=e8017acd; next = 338@0xbf128:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 338;
    vm_ip += 0x4;
    /* 0xd4db9..0xd4dbf: exact_instruction, entry=338, bytes=44cf3d01e801; next = 295@0xb60e0:1, ip += +0x6; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x0u) - vm->state - 0x4bf8be0cu;
    next_entry = 295;
    vm_ip += 0x6;
    /* 0xd4dbf..0xd4dc4: exact_instruction, entry=295, bytes=e8011ad110; next = 165@0x9a24c:1, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) - 0x396ecbf2u;
    next_entry = 165;
    vm_ip += 0x5;
    /* 0xd4dc4..0xd4dc6: exact_instruction, entry=165, bytes=9d00; next = 157@0x98a9a:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 157;
    vm_ip += 0x2;
    /* 0xd4dc6..0xd4dca: exact_instruction, entry=157, bytes=8bd70701; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd4dca..0xd4dce: exact_instruction, entry=64, bytes=a0171247; next = 124@0x91e81:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 124;
    vm_ip += 0x4;
    /* 0xd4dce..0xd4dd4: exact_instruction, entry=124, bytes=f666180734b9; next = 18@0x7be9b:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u - U16(vm->ip + 0x4u) + vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ 0x3654c1a7u;
    next_entry = 18;
    vm_ip += 0x6;
    /* 0xd4dd4..0xd4dd7: exact_instruction, entry=18, bytes=b2299a; next = 52@0x833c7:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 52;
    vm_ip += 0x3;
    /* 0xd4dd7..0xd4ddc: exact_instruction, entry=52, bytes=d88bb13d01; next = 18@0x7be9b:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) + vm->state ^ 0x7823b2dau;
    next_entry = 18;
    vm_ip += 0x5;
    /* 0xd4ddc..0xd4ddf: exact_instruction, entry=18, bytes=b20e9c; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd4ddf..0xd4de3: exact_instruction, entry=258, bytes=60faa36b; next = 158@0x99029:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0xd4de3..0xd4de7: exact_instruction, entry=158, bytes=e801d2d1; next = 181@0x9d13f:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 181;
    vm_ip += 0x4;
    /* 0xd4de7..0xd4ded: exact_instruction, entry=181, bytes=3d01e8012ae9; next = 114@0x90319:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) - vm->state;
    next_entry = 114;
    vm_ip += 0x6;
    /* 0xd4ded..0xd4df1: exact_instruction, entry=114, bytes=29890ecf; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd4df1..0xd4df4: exact_instruction, entry=215, bytes=a0003c; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd4df4..0xd4df8: exact_instruction, entry=20, bytes=e8018574; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd4df8..0xd4dfc: exact_instruction, entry=114, bytes=fb415cf4; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd4dfc..0xd4dff: exact_instruction, entry=185, bytes=dfe83a; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0xd4dff..0xd4e03: exact_instruction, entry=174, bytes=bd24e801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4e03..0xd4e06: exact_instruction, entry=307, bytes=d555b4; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd4e06..0xd4e0a: exact_instruction, entry=340, bytes=1473d300; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd4e0a..0xd4e0e: exact_instruction, entry=176, bytes=e801f96b; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4e0e..0xd4e11: exact_instruction, entry=18, bytes=b5d81a; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd4e11..0xd4e15: exact_instruction, entry=340, bytes=30d79100; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0xd4e15..0xd4e19: exact_instruction, entry=184, bytes=42c7e801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4e19..0xd4e1c: exact_instruction, entry=307, bytes=3c8db4; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd4e1c..0xd4e20: exact_instruction, entry=347, bytes=2e3ed009; next = 20@0x7c62b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0xd4e20..0xd4e24: exact_instruction, entry=20, bytes=e801a17f; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4e24..0xd4e27: exact_instruction, entry=18, bytes=982616; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd4e27..0xd4e2b: exact_instruction, entry=189, bytes=fe8124df; next = 20@0x7c62b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0xd4e2b..0xd4e2f: exact_instruction, entry=20, bytes=e801c87f; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4e2f..0xd4e32: exact_instruction, entry=28, bytes=d80a16; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd4e32..0xd4e36: exact_instruction, entry=347, bytes=870e9b21; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd4e36..0xd4e3a: exact_instruction, entry=123, bytes=c098e801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd4e3a..0xd4e3e: exact_instruction, entry=258, bytes=25e76775; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4e3e..0xd4e41: exact_instruction, entry=18, bytes=90252e; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd4e41..0xd4e45: exact_instruction, entry=158, bytes=e80138f7; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd4e45..0xd4e49: exact_instruction, entry=114, bytes=a5485292; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4e49..0xd4e4c: exact_instruction, entry=18, bytes=c80d2e; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd4e4c..0xd4e50: exact_instruction, entry=184, bytes=2a13e801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd4e50..0xd4e54: exact_instruction, entry=189, bytes=3b3baca9; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd4e54..0xd4e57: exact_instruction, entry=199, bytes=223405; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd4e57..0xd4e5b: exact_instruction, entry=158, bytes=e801dd0d; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4e5b..0xd4e5e: exact_instruction, entry=28, bytes=0002ec; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd4e5e..0xd4e62: exact_instruction, entry=64, bytes=9c60b341; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0xd4e62..0xd4e66: exact_instruction, entry=184, bytes=dafee801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd4e66..0xd4e6a: exact_instruction, entry=347, bytes=2d02ab82; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd4e6a..0xd4e6d: exact_instruction, entry=297, bytes=b5e60e; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd4e6d..0xd4e71: exact_instruction, entry=20, bytes=e801b9f5; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd4e71..0xd4e75: exact_instruction, entry=337, bytes=309c89f6; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4e75..0xd4e78: exact_instruction, entry=66, bytes=75cae8; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd4e78..0xd4e7c: exact_instruction, entry=20, bytes=e801607e; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd4e7c..0xd4e7f: exact_instruction, entry=297, bytes=79eef5; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd4e7f..0xd4e83: exact_instruction, entry=340, bytes=88f2ab00; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd4e83..0xd4e87: exact_instruction, entry=123, bytes=e9c1e801; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd4e87..0xd4e8a: exact_instruction, entry=297, bytes=2946e2; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd4e8a..0xd4e8e: exact_instruction, entry=337, bytes=f0b81e6f; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd4e8e..0xd4e92: exact_instruction, entry=123, bytes=804fe801; next = 101@0x8ceb4:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 101;
    vm_ip += 0x4;
    /* 0xd4e92..0xd4e9f: exact_instruction, entry=101, bytes=1e1e020080003d0122e80154b0; next = 199@0xa0631:1, ip += +0xd; dispatch_model=affine_single_fallback; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0xbu) ^ vm->state ^ 0x44422ebbu;
    next_entry = 199;
    vm_ip += 0xd;
    /* 0xd4e9f..0xd4ea2: exact_instruction, entry=199, bytes=8e4607; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0xd4ea2..0xd4ea6: exact_instruction, entry=268, bytes=0457d229; next = 253@0xacfb1:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 253;
    vm_ip += 0x4;
    /* 0xd4ea6..0xd4eac: exact_instruction, entry=253, bytes=8ebb8ca5593f; next = 114@0x90319:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x764111b0u + 0x6d2270cbu + U32(vm->ip + 0x2u) ^ vm->flags + vm->flags | 0x62c3b0ddu | 0x2b96d1d1u & 0x2d46e2e3u ^ U16(vm->ip + 0x0u) + 0x7c5d4802u;
    next_entry = 114;
    vm_ip += 0x6;
    /* 0xd4eac..0xd4eb0: exact_instruction, entry=114, bytes=0863a7b0; next = 52@0x833c7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 52;
    vm_ip += 0x4;
    /* 0xd4eb0..0xd4eb5: exact_instruction, entry=52, bytes=135fbd3d01; next = 28@0x7e390:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) + vm->state ^ 0x7823b2dau;
    next_entry = 28;
    vm_ip += 0x5;
    /* 0xd4eb5..0xd4eb8: exact_instruction, entry=28, bytes=0002d0; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd4eb8..0xd4ebc: exact_instruction, entry=64, bytes=9ca20b37; next = 20@0x7c62b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0xd4ebc..0xd4ec0: exact_instruction, entry=20, bytes=e801d759; next = 40@0x8115d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 40;
    vm_ip += 0x4;
    /* 0xd4ec0..0xd4ec6: exact_instruction, entry=40, bytes=e8013d019003; next = 114@0x90319:1, ip += +0x6; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x4u) ^ vm->state;
    next_entry = 114;
    vm_ip += 0x6;
    /* 0xd4ec6..0xd4eca: exact_instruction, entry=114, bytes=54b71bfe; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd4eca..0xd4ecd: exact_instruction, entry=185, bytes=d41d3a; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd4ecd..0xd4ed1: exact_instruction, entry=184, bytes=ca1ee801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4ed1..0xd4ed5: exact_instruction, entry=340, bytes=52dc7900; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4ed5..0xd4ed8: exact_instruction, entry=28, bytes=0805be; next = 161@0x9975a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 161;
    vm_ip += 0x3;
    /* 0xd4ed8..0xd4edc: exact_instruction, entry=161, bytes=aa74e801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd4edc..0xd4edf: exact_instruction, entry=215, bytes=d80abc; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd4edf..0xd4ee3: exact_instruction, entry=347, bytes=5a8be601; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd4ee3..0xd4ee7: exact_instruction, entry=123, bytes=6d1ce801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4ee7..0xd4eeb: exact_instruction, entry=340, bytes=e86b9100; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd4eeb..0xd4eee: exact_instruction, entry=199, bytes=5e2bf9; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd4eee..0xd4ef2: exact_instruction, entry=20, bytes=e801834f; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4ef2..0xd4ef6: exact_instruction, entry=340, bytes=1c0d0701; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4ef6..0xd4ef9: exact_instruction, entry=18, bytes=1826da; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0xd4ef9..0xd4efd: exact_instruction, entry=174, bytes=a8dde801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd4efd..0xd4f01: exact_instruction, entry=114, bytes=e34c9c8e; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4f01..0xd4f04: exact_instruction, entry=307, bytes=e28dad; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0xd4f04..0xd4f08: exact_instruction, entry=123, bytes=9e2fe801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd4f08..0xd4f0c: exact_instruction, entry=347, bytes=1a069407; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd4f0c..0xd4f0f: exact_instruction, entry=199, bytes=caad45; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd4f0f..0xd4f13: exact_instruction, entry=184, bytes=9232e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4f13..0xd4f16: exact_instruction, entry=28, bytes=90030e; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd4f16..0xd4f1a: exact_instruction, entry=114, bytes=4a4c1b8f; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd4f1a..0xd4f1e: exact_instruction, entry=123, bytes=2b98e801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd4f1e..0xd4f22: exact_instruction, entry=337, bytes=9880492d; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd4f22..0xd4f25: exact_instruction, entry=199, bytes=17061a; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd4f25..0xd4f29: exact_instruction, entry=184, bytes=4a94e801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd4f29..0xd4f2d: exact_instruction, entry=64, bytes=4d613701; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd4f2d..0xd4f30: exact_instruction, entry=297, bytes=13acf1; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd4f30..0xd4f34: exact_instruction, entry=184, bytes=783ae801; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd4f34..0xd4f37: exact_instruction, entry=297, bytes=a9a6fe; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd4f37..0xd4f3b: exact_instruction, entry=258, bytes=0cc5f8eb; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd4f3b..0xd4f3f: exact_instruction, entry=176, bytes=e80183d0; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd4f3f..0xd4f43: exact_instruction, entry=64, bytes=d82017cf; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4f43..0xd4f46: exact_instruction, entry=28, bytes=080547; next = 161@0x9975a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 161;
    vm_ip += 0x3;
    /* 0xd4f46..0xd4f4a: exact_instruction, entry=161, bytes=7ef5e801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd4f4a..0xd4f4e: exact_instruction, entry=258, bytes=feb3394b; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4f4e..0xd4f51: exact_instruction, entry=28, bytes=a00054; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd4f51..0xd4f55: exact_instruction, entry=20, bytes=e8018d75; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4f55..0xd4f59: exact_instruction, entry=340, bytes=041dab00; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4f59..0xd4f5c: exact_instruction, entry=307, bytes=da35af; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd4f5c..0xd4f60: exact_instruction, entry=176, bytes=e8016245; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd4f60..0xd4f64: exact_instruction, entry=258, bytes=6ea507c6; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd4f64..0xd4f67: exact_instruction, entry=215, bytes=c00548; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd4f67..0xd4f6b: exact_instruction, entry=184, bytes=dcb3e801; next = 85@0x89b37:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 85;
    vm_ip += 0x4;
    /* 0xd4f6b..0xd4f78: exact_instruction, entry=85, bytes=1e1e020080003d0122e8010002; next = 64@0x85059:1, ip += +0xd; dispatch_model=affine_single_fallback; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    /* state preserved: state_preserve */
    next_entry = 64;
    vm_ip += 0xd;
    /* 0xd4f78..0xd4f7c: exact_instruction, entry=64, bytes=cb3307fd; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd4f7c..0xd4f7f: exact_instruction, entry=297, bytes=977cd8; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0xd4f7f..0xd4f83: exact_instruction, entry=157, bytes=63f00701; next = 345@0xc02e4:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 345;
    vm_ip += 0x4;
    /* 0xd4f83..0xd4f89: exact_instruction, entry=345, bytes=0d9943c64a91; next = 122@0x9170d:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags + U16(vm->ip + 0x0u) + vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags;
    next_entry = 122;
    vm_ip += 0x6;
    /* 0xd4f89..0xd4f8e: exact_instruction, entry=122, bytes=8d893d0129; next = 199@0xa0631:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) + vm->state + vm->flags + 0x1af9be18u;
    next_entry = 199;
    vm_ip += 0x5;
    /* 0xd4f8e..0xd4f91: exact_instruction, entry=199, bytes=871c3a; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd4f91..0xd4f95: exact_instruction, entry=258, bytes=e86c2d70; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0xd4f95..0xd4f99: exact_instruction, entry=184, bytes=08e0e801; next = 40@0x8115d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 40;
    vm_ip += 0x4;
    /* 0xd4f99..0xd4f9f: exact_instruction, entry=40, bytes=e8013d01e890; next = 66@0x855ff:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x4u) ^ vm->state;
    next_entry = 66;
    vm_ip += 0x6;
    /* 0xd4f9f..0xd4fa2: exact_instruction, entry=66, bytes=b01c2a; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd4fa2..0xd4fa6: exact_instruction, entry=340, bytes=f8a8b300; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd4fa6..0xd4faa: exact_instruction, entry=176, bytes=e8017ad1; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd4faa..0xd4fae: exact_instruction, entry=114, bytes=eb0ff45a; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4fae..0xd4fb1: exact_instruction, entry=18, bytes=904afa; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0xd4fb1..0xd4fb5: exact_instruction, entry=174, bytes=18c0e801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd4fb5..0xd4fb9: exact_instruction, entry=189, bytes=b091e892; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4fb9..0xd4fbc: exact_instruction, entry=307, bytes=6c25af; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0xd4fbc..0xd4fc0: exact_instruction, entry=174, bytes=ab36e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd4fc0..0xd4fc4: exact_instruction, entry=340, bytes=6c099100; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4fc4..0xd4fc7: exact_instruction, entry=28, bytes=80055e; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd4fc7..0xd4fcb: exact_instruction, entry=176, bytes=e801b220; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd4fcb..0xd4fcf: exact_instruction, entry=64, bytes=efa0c77f; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd4fcf..0xd4fd2: exact_instruction, entry=66, bytes=b5059e; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd4fd2..0xd4fd6: exact_instruction, entry=158, bytes=e8017411; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd4fd6..0xd4fda: exact_instruction, entry=64, bytes=fd13e926; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4fda..0xd4fdd: exact_instruction, entry=28, bytes=d803c2; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 123;
    vm_ip += 0x3;
    /* 0xd4fdd..0xd4fe1: exact_instruction, entry=123, bytes=d6e8e801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd4fe1..0xd4fe5: exact_instruction, entry=258, bytes=a980091f; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd4fe5..0xd4fe8: exact_instruction, entry=28, bytes=c005a2; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd4fe8..0xd4fec: exact_instruction, entry=184, bytes=42e2e801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd4fec..0xd4fef: exact_instruction, entry=18, bytes=120ed4; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd4fef..0xd4ff3: exact_instruction, entry=258, bytes=bbf6286b; next = 20@0x7c62b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0xd4ff3..0xd4ff7: exact_instruction, entry=20, bytes=e8019a47; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd4ff7..0xd4ffa: exact_instruction, entry=307, bytes=688db4; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd4ffa..0xd4ffe: exact_instruction, entry=347, bytes=f2074c88; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd4ffe..0xd5002: exact_instruction, entry=123, bytes=fd8be801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd5002..0xd5006: exact_instruction, entry=189, bytes=3d1400a9; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd5006..0xd5009: exact_instruction, entry=18, bytes=704756; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd5009..0xd500d: exact_instruction, entry=158, bytes=e80118d2; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd500d..0xd5010: exact_instruction, entry=18, bytes=f8492e; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd5010..0xd5014: exact_instruction, entry=189, bytes=503e3cdc; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd5014..0xd5018: exact_instruction, entry=123, bytes=2640e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd5018..0xd501c: exact_instruction, entry=340, bytes=018c2800; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd501c..0xd501f: exact_instruction, entry=66, bytes=8d3158; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd501f..0xd5023: exact_instruction, entry=158, bytes=e8012c46; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd5023..0xd5026: exact_instruction, entry=66, bytes=a3675a; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd5026..0xd502a: exact_instruction, entry=189, bytes=655b24a4; next = 20@0x7c62b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0xd502a..0xd502e: exact_instruction, entry=20, bytes=e8019212; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd502e..0xd5031: exact_instruction, entry=215, bytes=10083c; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd5031..0xd5035: exact_instruction, entry=258, bytes=87ffdd28; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd5035..0xd5039: exact_instruction, entry=176, bytes=e801a3df; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd5039..0xd503c: exact_instruction, entry=199, bytes=5e0ce1; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd503c..0xd5040: exact_instruction, entry=114, bytes=ab01233b; next = 158@0x99029:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0xd5040..0xd5044: exact_instruction, entry=158, bytes=e801524a; next = 69@0x85f24:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 69;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0xd5044, coverage=hidden_span_of_17:1 */
    vm_unresolved_synthetic_tail(vm, 0xd5044);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p002_bb_0015(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 15: 0xd5055..0xd521e; rows=121, terminal=exact_instruction */
    /* 0xd5055..0xd5057: exact_instruction, entry=171, bytes=a800; next = 168@0x9aa83:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 168;
    vm_ip += 0x2;
    /* 0xd5057..0xd505b: exact_instruction, entry=168, bytes=9900ded0; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd505b..0xd505e: exact_instruction, entry=66, bytes=7a4c2a; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd505e..0xd5062: exact_instruction, entry=114, bytes=7eb419f8; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd5062..0xd5066: exact_instruction, entry=346, bytes=639de801; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0xd5066..0xd506a: exact_instruction, entry=333, bytes=d3f4ab00; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd506a..0xd506e: exact_instruction, entry=189, bytes=d0bc2cab; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd506e..0xd5071: exact_instruction, entry=215, bytes=080148; next = 33@0x7f7c4:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 33;
    vm_ip += 0x3;
    /* 0xd5071..0xd5075: exact_instruction, entry=33, bytes=e8017633; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0xd5075..0xd5079: exact_instruction, entry=172, bytes=4ba9db0f; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd5079..0xd507d: exact_instruction, entry=189, bytes=48e430e2; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd507d..0xd5080: exact_instruction, entry=28, bytes=f808ec; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 287;
    vm_ip += 0x3;
    /* 0xd5080..0xd5084: exact_instruction, entry=287, bytes=b096e801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd5084..0xd5088: exact_instruction, entry=258, bytes=87902b79; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0xd5088..0xd508c: exact_instruction, entry=203, bytes=179ac4d6; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd508c..0xd508f: exact_instruction, entry=66, bytes=e5683a; next = 26@0x7dbbb:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 26;
    vm_ip += 0x3;
    /* 0xd508f..0xd5093: exact_instruction, entry=26, bytes=56c7e801; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0xd5093..0xd5097: exact_instruction, entry=203, bytes=9f91cff6; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd5097..0xd509a: exact_instruction, entry=307, bytes=ce3db4; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd509a..0xd509e: exact_instruction, entry=337, bytes=249113d1; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0xd509e..0xd50a2: exact_instruction, entry=315, bytes=e80131f5; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0xd50a2..0xd50a6: exact_instruction, entry=168, bytes=1761d1d4; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd50a6..0xd50a9: exact_instruction, entry=215, bytes=e8057c; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd50a9..0xd50ad: exact_instruction, entry=189, bytes=48654c96; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0xd50ad..0xd50b1: exact_instruction, entry=315, bytes=e80171f2; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd50b1..0xd50b5: exact_instruction, entry=64, bytes=52f24777; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd50b5..0xd50b8: exact_instruction, entry=28, bytes=4005f0; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 168;
    vm_ip += 0x3;
    /* 0xd50b8..0xd50bc: exact_instruction, entry=168, bytes=0b2d1bd8; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0xd50bc..0xd50c0: exact_instruction, entry=305, bytes=1009e801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd50c0..0xd50c3: exact_instruction, entry=307, bytes=c29daf; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd50c3..0xd50c7: exact_instruction, entry=189, bytes=2800e4e1; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0xd50c7..0xd50cb: exact_instruction, entry=268, bytes=a9c7366d; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd50cb..0xd50cf: exact_instruction, entry=346, bytes=169de801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd50cf..0xd50d2: exact_instruction, entry=307, bytes=179dae; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0xd50d2..0xd50d6: exact_instruction, entry=157, bytes=3fd11300; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd50d6..0xd50da: exact_instruction, entry=340, bytes=e4e71300; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0xd50da..0xd50de: exact_instruction, entry=315, bytes=e80161f8; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd50de..0xd50e2: exact_instruction, entry=258, bytes=109e93ff; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0xd50e2..0xd50e6: exact_instruction, entry=196, bytes=65afb4f6; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd50e6..0xd50e9: exact_instruction, entry=18, bytes=da0bd4; next = 315@0xb9451:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0xd50e9..0xd50ed: exact_instruction, entry=315, bytes=e80119fa; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0xd50ed..0xd50f1: exact_instruction, entry=333, bytes=b3e00701; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd50f1..0xd50f4: exact_instruction, entry=28, bytes=9003e4; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd50f4..0xd50f8: exact_instruction, entry=114, bytes=f5796aba; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd50f8..0xd50fc: exact_instruction, entry=346, bytes=e0a6e801; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd50fc..0xd50ff: exact_instruction, entry=185, bytes=e8163a; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd50ff..0xd5103: exact_instruction, entry=189, bytes=62f4ccdc; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0xd5103..0xd5107: exact_instruction, entry=333, bytes=d7099100; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0xd5107..0xd510b: exact_instruction, entry=315, bytes=e80129f1; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd510b..0xd510f: exact_instruction, entry=43, bytes=b3206f55; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd510f..0xd5113: exact_instruction, entry=64, bytes=d6128100; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd5113..0xd5116: exact_instruction, entry=185, bytes=8c933a; next = 243@0xaab6a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 243;
    vm_ip += 0x3;
    /* 0xd5116..0xd511a: exact_instruction, entry=243, bytes=a61ee801; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0xd511a..0xd511e: exact_instruction, entry=196, bytes=a7ea0dfc; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd511e..0xd5122: exact_instruction, entry=189, bytes=da002ceb; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd5122..0xd5125: exact_instruction, entry=185, bytes=73873a; next = 26@0x7dbbb:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 26;
    vm_ip += 0x3;
    /* 0xd5125..0xd5129: exact_instruction, entry=26, bytes=3f6fe801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd5129..0xd512c: exact_instruction, entry=18, bytes=0a6814; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0xd512c..0xd5130: exact_instruction, entry=43, bytes=971b2365; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd5130..0xd5134: exact_instruction, entry=347, bytes=bc010801; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0xd5134..0xd5138: exact_instruction, entry=287, bytes=0a3ee801; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0xd5138..0xd513c: exact_instruction, entry=172, bytes=25f69300; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd513c..0xd5140: exact_instruction, entry=340, bytes=8cbeb300; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd5140..0xd5143: exact_instruction, entry=28, bytes=08015a; next = 33@0x7f7c4:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 33;
    vm_ip += 0x3;
    /* 0xd5143..0xd5147: exact_instruction, entry=33, bytes=e8012e0b; next = 338@0xbf128:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 338;
    vm_ip += 0x4;
    /* 0xd5147..0xd514d: exact_instruction, entry=338, bytes=44d13d01e801; next = 295@0xb60e0:1, ip += +0x6; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x0u) - vm->state - 0x4bf8be0cu;
    next_entry = 295;
    vm_ip += 0x6;
    /* 0xd514d..0xd5152: exact_instruction, entry=295, bytes=e801d2cc10; next = 28@0x7e390:1, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) - 0x396ecbf2u;
    next_entry = 28;
    vm_ip += 0x5;
    /* 0xd5152..0xd5155: exact_instruction, entry=28, bytes=d80a4a; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd5155..0xd5159: exact_instruction, entry=347, bytes=3b8d4f13; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0xd5159..0xd515d: exact_instruction, entry=196, bytes=a8a704db; next = 124@0x91e81:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 124;
    vm_ip += 0x4;
    /* 0xd515d..0xd5163: exact_instruction, entry=124, bytes=9a0cdb5bdc7d; next = 52@0x833c7:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u - U16(vm->ip + 0x4u) + vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ 0x3654c1a7u;
    next_entry = 52;
    vm_ip += 0x6;
    /* 0xd5163..0xd5168: exact_instruction, entry=52, bytes=af71d73d01; next = 28@0x7e390:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) + vm->state ^ 0x7823b2dau;
    next_entry = 28;
    vm_ip += 0x5;
    /* 0xd5168..0xd516b: exact_instruction, entry=28, bytes=900333; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd516b..0xd516f: exact_instruction, entry=114, bytes=71779ebe; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd516f..0xd5173: exact_instruction, entry=176, bytes=e8015e96; next = 261@0xaeda2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 261;
    vm_ip += 0x4;
    /* 0xd5173..0xd5179: exact_instruction, entry=261, bytes=e8015f6d3d01; next = 337@0xbec0e:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x2u) + 0x4c539d29u;
    next_entry = 337;
    vm_ip += 0x6;
    /* 0xd5179..0xd517d: exact_instruction, entry=337, bytes=5c9a27f5; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd517d..0xd5180: exact_instruction, entry=18, bytes=a425fa; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd5180..0xd5184: exact_instruction, entry=176, bytes=e8010036; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd5184..0xd5188: exact_instruction, entry=189, bytes=b9f798e2; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd5188..0xd518b: exact_instruction, entry=199, bytes=466489; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd518b..0xd518f: exact_instruction, entry=176, bytes=e801eeae; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd518f..0xd5192: exact_instruction, entry=307, bytes=3e8db4; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd5192..0xd5196: exact_instruction, entry=347, bytes=e2099c51; next = 20@0x7c62b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0xd5196..0xd519a: exact_instruction, entry=20, bytes=e8018971; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd519a..0xd519d: exact_instruction, entry=215, bytes=e8053c; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd519d..0xd51a1: exact_instruction, entry=189, bytes=baa5e4e4; next = 174@0x9bd8f:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0xd51a1..0xd51a5: exact_instruction, entry=174, bytes=3fede801; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd51a5..0xd51a8: exact_instruction, entry=297, bytes=2e65b5; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd51a8..0xd51ac: exact_instruction, entry=189, bytes=2f1f34a6; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0xd51ac..0xd51b0: exact_instruction, entry=184, bytes=60e0e801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd51b0..0xd51b4: exact_instruction, entry=258, bytes=02320b79; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd51b4..0xd51b7: exact_instruction, entry=215, bytes=7005c8; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 174;
    vm_ip += 0x3;
    /* 0xd51b7..0xd51bb: exact_instruction, entry=174, bytes=1bdbe801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd51bb..0xd51bf: exact_instruction, entry=114, bytes=a148350f; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd51bf..0xd51c2: exact_instruction, entry=185, bytes=0ffa3a; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd51c2..0xd51c6: exact_instruction, entry=158, bytes=e801fb96; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd51c6..0xd51ca: exact_instruction, entry=114, bytes=a28e3242; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd51ca..0xd51cd: exact_instruction, entry=199, bytes=033f36; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd51cd..0xd51d1: exact_instruction, entry=20, bytes=e8013e47; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd51d1..0xd51d4: exact_instruction, entry=66, bytes=8b0e3a; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd51d4..0xd51d8: exact_instruction, entry=258, bytes=c8b24df4; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0xd51d8..0xd51dc: exact_instruction, entry=161, bytes=8a72e801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd51dc..0xd51e0: exact_instruction, entry=114, bytes=d41072c0; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd51e0..0xd51e3: exact_instruction, entry=215, bytes=0805c4; next = 161@0x9975a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 161;
    vm_ip += 0x3;
    /* 0xd51e3..0xd51e7: exact_instruction, entry=161, bytes=61d0e801; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd51e7..0xd51ea: exact_instruction, entry=66, bytes=1a63c8; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd51ea..0xd51ee: exact_instruction, entry=189, bytes=1367289c; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd51ee..0xd51f2: exact_instruction, entry=123, bytes=5280e801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd51f2..0xd51f6: exact_instruction, entry=337, bytes=d0857f44; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd51f6..0xd51f9: exact_instruction, entry=28, bytes=c00566; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd51f9..0xd51fd: exact_instruction, entry=184, bytes=aa87e801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd51fd..0xd5201: exact_instruction, entry=64, bytes=c77bd92e; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd5201..0xd5204: exact_instruction, entry=199, bytes=57b5da; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd5204..0xd5208: exact_instruction, entry=184, bytes=3238e801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd5208..0xd520c: exact_instruction, entry=189, bytes=99152ca1; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd520c..0xd520f: exact_instruction, entry=185, bytes=637c3a; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd520f..0xd5213: exact_instruction, entry=184, bytes=8275e801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd5213..0xd5216: exact_instruction, entry=215, bytes=a00a68; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd5216..0xd521a: exact_instruction, entry=340, bytes=9e469900; next = 158@0x99029:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0xd521a..0xd521e: exact_instruction, entry=158, bytes=e801a7dd; next = 321@0xbb1dd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 321;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0xd521e, coverage=hidden_span_of_17:1 */
    vm_unresolved_synthetic_tail(vm, 0xd521e);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p002_bb_0016(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 16: 0xd522f..0xd5641; rows=273, terminal=exact_instruction */
    /* 0xd522f..0xd5231: exact_instruction, entry=354, bytes=cb00; next = 203@0xa1484:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 203;
    vm_ip += 0x2;
    /* 0xd5231..0xd5235: exact_instruction, entry=203, bytes=979b3576; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd5235..0xd5239: exact_instruction, entry=114, bytes=7b8504bc; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd5239..0xd523c: exact_instruction, entry=28, bytes=f8084c; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 287;
    vm_ip += 0x3;
    /* 0xd523c..0xd5240: exact_instruction, entry=287, bytes=50ade801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd5240..0xd5244: exact_instruction, entry=114, bytes=c06e17bc; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd5244..0xd5248: exact_instruction, entry=43, bytes=2832c447; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd5248..0xd524b: exact_instruction, entry=66, bytes=e5acfe; next = 346@0xc0535:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 346;
    vm_ip += 0x3;
    /* 0xd524b..0xd524f: exact_instruction, entry=346, bytes=4f20e801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd524f..0xd5252: exact_instruction, entry=18, bytes=a04cc6; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd5252..0xd5256: exact_instruction, entry=340, bytes=2c8e8900; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0xd5256..0xd525a: exact_instruction, entry=268, bytes=c82c366d; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd525a..0xd525e: exact_instruction, entry=346, bytes=569ee801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd525e..0xd5262: exact_instruction, entry=347, bytes=0da2bf0a; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd5262..0xd5265: exact_instruction, entry=297, bytes=89be12; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0xd5265..0xd5269: exact_instruction, entry=157, bytes=3bdb2800; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0xd5269..0xd526d: exact_instruction, entry=26, bytes=7ea7e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd526d..0xd5271: exact_instruction, entry=340, bytes=d0092301; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd5271..0xd5274: exact_instruction, entry=18, bytes=820e24; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0xd5274..0xd5278: exact_instruction, entry=43, bytes=9577f10a; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0xd5278..0xd527c: exact_instruction, entry=305, bytes=1ffde801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd527c..0xd5280: exact_instruction, entry=258, bytes=00be857e; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd5280..0xd5283: exact_instruction, entry=18, bytes=00099e; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0xd5283..0xd5287: exact_instruction, entry=268, bytes=937a1163; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0xd5287..0xd528b: exact_instruction, entry=26, bytes=c65be801; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0xd528b..0xd528f: exact_instruction, entry=157, bytes=7bdacb00; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd528f..0xd5292: exact_instruction, entry=18, bytes=901333; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd5292..0xd5296: exact_instruction, entry=114, bytes=0c1be2e5; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0xd5296..0xd529a: exact_instruction, entry=33, bytes=e801a237; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd529a..0xd529d: exact_instruction, entry=215, bytes=6008a0; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 268;
    vm_ip += 0x3;
    /* 0xd529d..0xd52a1: exact_instruction, entry=268, bytes=6e2b0d68; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd52a1..0xd52a5: exact_instruction, entry=189, bytes=300358dd; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0xd52a5..0xd52a9: exact_instruction, entry=33, bytes=e80128c0; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd52a9..0xd52ad: exact_instruction, entry=43, bytes=7f7c0b01; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd52ad..0xd52b0: exact_instruction, entry=307, bytes=4a45ad; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd52b0..0xd52b4: exact_instruction, entry=114, bytes=8167f6ab; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0xd52b4..0xd52b8: exact_instruction, entry=287, bytes=524fe801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd52b8..0xd52bc: exact_instruction, entry=114, bytes=ffa1f8ec; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0xd52bc..0xd52c0: exact_instruction, entry=172, bytes=c6a2fb0f; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd52c0..0xd52c3: exact_instruction, entry=185, bytes=73993a; next = 243@0xaab6a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 243;
    vm_ip += 0x3;
    /* 0xd52c3..0xd52c7: exact_instruction, entry=243, bytes=551be801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd52c7..0xd52cb: exact_instruction, entry=114, bytes=956a1aad; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd52cb..0xd52ce: exact_instruction, entry=185, bytes=73a33a; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0xd52ce..0xd52d2: exact_instruction, entry=268, bytes=d9c95d69; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0xd52d2..0xd52d6: exact_instruction, entry=243, bytes=6598e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd52d6..0xd52d9: exact_instruction, entry=28, bytes=000230; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd52d9..0xd52dd: exact_instruction, entry=64, bytes=7249103e; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd52dd..0xd52e1: exact_instruction, entry=43, bytes=a2697615; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0xd52e1..0xd52e5: exact_instruction, entry=287, bytes=52cee801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd52e5..0xd52e8: exact_instruction, entry=18, bytes=60052a; next = 172@0x9b68a:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 172;
    vm_ip += 0x3;
    /* 0xd52e8..0xd52ec: exact_instruction, entry=172, bytes=1a933308; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd52ec..0xd52f0: exact_instruction, entry=64, bytes=0d74cd61; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0xd52f0..0xd52f4: exact_instruction, entry=33, bytes=e8017a8a; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0xd52f4..0xd52f8: exact_instruction, entry=268, bytes=68996a63; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd52f8..0xd52fb: exact_instruction, entry=28, bytes=d80a6f; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd52fb..0xd52ff: exact_instruction, entry=347, bytes=fb875702; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0xd52ff..0xd5303: exact_instruction, entry=315, bytes=e80119fa; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0xd5303..0xd5307: exact_instruction, entry=333, bytes=cff07900; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd5307..0xd530b: exact_instruction, entry=64, bytes=f637717f; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd530b..0xd530e: exact_instruction, entry=307, bytes=f23db3; next = 305@0xb78b0:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 305;
    vm_ip += 0x3;
    /* 0xd530e..0xd5312: exact_instruction, entry=305, bytes=8800e801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd5312..0xd5315: exact_instruction, entry=18, bytes=000232; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd5315..0xd5319: exact_instruction, entry=64, bytes=b032a697; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0xd5319..0xd531d: exact_instruction, entry=333, bytes=c3d0b300; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0xd531d..0xd5321: exact_instruction, entry=26, bytes=d8aee801; next = 167@0x9a8d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 167;
    vm_ip += 0x4;
    /* 0xd5321..0xd5327: exact_instruction, entry=167, bytes=e8013d0199d1; next = 295@0xb60e0:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) ^ vm->state ^ 0x5f92615u;
    next_entry = 295;
    vm_ip += 0x6;
    /* 0xd5327..0xd532c: exact_instruction, entry=295, bytes=e801aad210; next = 215@0xa4609:1, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) - 0x396ecbf2u;
    next_entry = 215;
    vm_ip += 0x5;
    /* 0xd532c..0xd532f: exact_instruction, entry=215, bytes=900323; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd532f..0xd5333: exact_instruction, entry=114, bytes=c9a586ef; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0xd5333..0xd5337: exact_instruction, entry=168, bytes=93007cd6; next = 254@0xad32c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 254;
    vm_ip += 0x4;
    /* 0xd5337..0xd533b: exact_instruction, entry=254, bytes=eca00a42; next = 13@0x7aee8:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) ^ vm->state + vm->flags | vm->flags | 0x617339d9u | 0x5635509u | 0x15874263u ^ 0x5bf4e999u & vm->flags - 0x35a18ac8u | 0x5feb6979u & 0x3e80b852u | U16(vm->ip + 0x2u) - 0x228a41a2u;
    next_entry = 13;
    vm_ip += 0x4;
    /* 0xd533b..0xd5340: exact_instruction, entry=13, bytes=6a753d0111; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x67934603u ^ vm->flags - 0x1c36555u | 0x771fee31u | 0x1490ac71u - 0x2de02e8u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0xd5340..0xd5342: exact_instruction, entry=257, bytes=17b3; next = 114@0x90319:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 114;
    vm_ip += 0x2;
    /* 0xd5342..0xd5346: exact_instruction, entry=114, bytes=154afa8e; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd5346..0xd5349: exact_instruction, entry=307, bytes=8655aa; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd5349..0xd534d: exact_instruction, entry=20, bytes=e8018e57; next = 261@0xaeda2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 261;
    vm_ip += 0x4;
    /* 0xd534d..0xd5353: exact_instruction, entry=261, bytes=e8015f6d3d01; next = 337@0xbec0e:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x2u) + 0x4c539d29u;
    next_entry = 337;
    vm_ip += 0x6;
    /* 0xd5353..0xd5357: exact_instruction, entry=337, bytes=632a0bee; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd5357..0xd535a: exact_instruction, entry=307, bytes=cf55aa; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd535a..0xd535e: exact_instruction, entry=20, bytes=e801fe76; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd535e..0xd5361: exact_instruction, entry=28, bytes=000206; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd5361..0xd5365: exact_instruction, entry=64, bytes=1ad3288b; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0xd5365..0xd5369: exact_instruction, entry=184, bytes=524ae801; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd5369..0xd536c: exact_instruction, entry=66, bytes=3dba78; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd536c..0xd5370: exact_instruction, entry=189, bytes=1bb63ce4; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd5370..0xd5374: exact_instruction, entry=123, bytes=c630e801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd5374..0xd5378: exact_instruction, entry=64, bytes=d8db4d4f; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd5378..0xd537b: exact_instruction, entry=297, bytes=febd26; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd537b..0xd537f: exact_instruction, entry=158, bytes=e8019caf; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd537f..0xd5382: exact_instruction, entry=66, bytes=7be2ca; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd5382..0xd5386: exact_instruction, entry=114, bytes=75580a9f; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0xd5386..0xd538a: exact_instruction, entry=184, bytes=cc11e801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd538a..0xd538e: exact_instruction, entry=347, bytes=0c01de83; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd538e..0xd5391: exact_instruction, entry=307, bytes=c075af; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd5391..0xd5395: exact_instruction, entry=184, bytes=726ae801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd5395..0xd5399: exact_instruction, entry=114, bytes=e181bece; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd5399..0xd539c: exact_instruction, entry=18, bytes=88052a; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd539c..0xd53a0: exact_instruction, entry=176, bytes=e801bc5c; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd53a0..0xd53a4: exact_instruction, entry=64, bytes=e08c40a1; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd53a4..0xd53a7: exact_instruction, entry=215, bytes=800520; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd53a7..0xd53ab: exact_instruction, entry=176, bytes=e801d581; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd53ab..0xd53ae: exact_instruction, entry=307, bytes=243db4; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd53ae..0xd53b2: exact_instruction, entry=337, bytes=74fac300; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd53b2..0xd53b6: exact_instruction, entry=123, bytes=2c12e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd53b6..0xd53ba: exact_instruction, entry=340, bytes=fc584701; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd53ba..0xd53bd: exact_instruction, entry=66, bytes=1fa15c; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0xd53bd..0xd53c1: exact_instruction, entry=123, bytes=e242e801; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd53c1..0xd53c4: exact_instruction, entry=199, bytes=bf4272; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd53c4..0xd53c8: exact_instruction, entry=64, bytes=27d81fc7; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd53c8..0xd53cc: exact_instruction, entry=176, bytes=e80196b5; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd53cc..0xd53cf: exact_instruction, entry=18, bytes=1c0cfa; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd53cf..0xd53d3: exact_instruction, entry=337, bytes=848d1c09; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0xd53d3..0xd53d7: exact_instruction, entry=161, bytes=8677e801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd53d7..0xd53da: exact_instruction, entry=307, bytes=df45ad; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd53da..0xd53de: exact_instruction, entry=114, bytes=13287c6d; next = 158@0x99029:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0xd53de..0xd53e2: exact_instruction, entry=158, bytes=e801e668; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd53e2..0xd53e6: exact_instruction, entry=337, bytes=5c9a25a0; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd53e6..0xd53e9: exact_instruction, entry=18, bytes=f823fa; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0xd53e9..0xd53ed: exact_instruction, entry=123, bytes=8e4ae801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd53ed..0xd53f1: exact_instruction, entry=337, bytes=5b66b47a; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd53f1..0xd53f4: exact_instruction, entry=18, bytes=a0003a; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd53f4..0xd53f8: exact_instruction, entry=20, bytes=e801d1f7; next = 284@0xb379b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 284;
    vm_ip += 0x4;
    /* 0xd53f8..0xd5405: exact_instruction, entry=284, bytes=1e1e020080003d019ae801c471; next = 239@0xa991e:1, ip += +0xd; dispatch_model=affine_single_fallback; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0xbu) - 0x14b96a4cu;
    next_entry = 239;
    vm_ip += 0xd;
    /* 0xd5405..0xd540b: exact_instruction, entry=239, bytes=f8d900b79285; next = 157@0x98a9a:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - U16(vm->ip + 0x4u) + vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - 0x3650a0aeu;
    next_entry = 157;
    vm_ip += 0x6;
    /* 0xd540b..0xd540f: exact_instruction, entry=157, bytes=6fac0701; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd540f..0xd5412: exact_instruction, entry=28, bytes=e805a3; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd5412..0xd5416: exact_instruction, entry=189, bytes=e8ee30e5; next = 122@0x9170d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 122;
    vm_ip += 0x4;
    /* 0xd5416..0xd541b: exact_instruction, entry=122, bytes=7e3f3d01b7; next = 258@0xadf2c:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) + vm->state + vm->flags + 0x1af9be18u;
    next_entry = 258;
    vm_ip += 0x5;
    /* 0xd541b..0xd541f: exact_instruction, entry=258, bytes=b71f84d3; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd541f..0xd5422: exact_instruction, entry=215, bytes=a0007f; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd5422..0xd5426: exact_instruction, entry=20, bytes=e801a31c; next = 261@0xaeda2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 261;
    vm_ip += 0x4;
    /* 0xd5426..0xd542c: exact_instruction, entry=261, bytes=e801d7643d01; next = 64@0x85059:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x2u) + 0x4c539d29u;
    next_entry = 64;
    vm_ip += 0x6;
    /* 0xd542c..0xd5430: exact_instruction, entry=64, bytes=a0461637; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd5430..0xd5433: exact_instruction, entry=18, bytes=e5286a; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0xd5433..0xd5437: exact_instruction, entry=123, bytes=8b4ee801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd5437..0xd543a: exact_instruction, entry=307, bytes=c3c5b1; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd543a..0xd543e: exact_instruction, entry=258, bytes=36c6df7c; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd543e..0xd5442: exact_instruction, entry=123, bytes=1e30e801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd5442..0xd5446: exact_instruction, entry=258, bytes=961c840b; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd5446..0xd5449: exact_instruction, entry=307, bytes=27bdae; next = 161@0x9975a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0xd5449..0xd544d: exact_instruction, entry=161, bytes=8279e801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd544d..0xd5451: exact_instruction, entry=337, bytes=08963fa2; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd5451..0xd5454: exact_instruction, entry=28, bytes=700542; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 174;
    vm_ip += 0x3;
    /* 0xd5454..0xd5458: exact_instruction, entry=174, bytes=d0a7e801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd5458..0xd545c: exact_instruction, entry=64, bytes=a8f522ea; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd545c..0xd545f: exact_instruction, entry=66, bytes=88975e; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd545f..0xd5463: exact_instruction, entry=20, bytes=e801a575; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd5463..0xd5467: exact_instruction, entry=337, bytes=540c95f7; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd5467..0xd546a: exact_instruction, entry=185, bytes=bf053a; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0xd546a..0xd546e: exact_instruction, entry=174, bytes=1d27e801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd546e..0xd5472: exact_instruction, entry=64, bytes=07d4c6c8; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd5472..0xd5475: exact_instruction, entry=18, bytes=1415a3; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd5475..0xd5479: exact_instruction, entry=158, bytes=e801baeb; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd5479..0xd547d: exact_instruction, entry=258, bytes=b6316bca; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd547d..0xd5480: exact_instruction, entry=307, bytes=a98dad; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0xd5480..0xd5484: exact_instruction, entry=123, bytes=f62ae801; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd5484..0xd5487: exact_instruction, entry=199, bytes=070ef2; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd5487..0xd548b: exact_instruction, entry=189, bytes=77f64ca6; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd548b..0xd548f: exact_instruction, entry=123, bytes=b66ee801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd548f..0xd5493: exact_instruction, entry=64, bytes=2ac6c7f7; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd5493..0xd5496: exact_instruction, entry=307, bytes=6a25af; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0xd5496..0xd549a: exact_instruction, entry=174, bytes=2b3be801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd549a..0xd549e: exact_instruction, entry=258, bytes=c566a1d5; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd549e..0xd54a1: exact_instruction, entry=185, bytes=cba83a; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0xd54a1..0xd54a5: exact_instruction, entry=123, bytes=b9d8e801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd54a5..0xd54a9: exact_instruction, entry=258, bytes=17337601; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd54a9..0xd54ac: exact_instruction, entry=18, bytes=a0062e; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd54ac..0xd54b0: exact_instruction, entry=176, bytes=e8015819; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd54b0..0xd54b3: exact_instruction, entry=28, bytes=880a4c; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd54b3..0xd54b7: exact_instruction, entry=337, bytes=206901f6; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0xd54b7..0xd54bb: exact_instruction, entry=184, bytes=fcb7e801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd54bb..0xd54bf: exact_instruction, entry=189, bytes=bf9598a5; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd54bf..0xd54c2: exact_instruction, entry=199, bytes=cfb7ba; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0xd54c2..0xd54c6: exact_instruction, entry=123, bytes=c62de801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd54c6..0xd54ca: exact_instruction, entry=337, bytes=bb9c7c97; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd54ca..0xd54cd: exact_instruction, entry=66, bytes=71c20c; next = 161@0x9975a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0xd54cd..0xd54d1: exact_instruction, entry=161, bytes=7655e801; next = 241@0xa9ffa:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 241;
    vm_ip += 0x4;
    /* 0xd54d1..0xd54de: exact_instruction, entry=241, bytes=1e1e020080003d0122e8010a8b; next = 333@0xbd8af:1, ip += +0xd; dispatch_model=affine_single_fallback; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0xbu) + vm->state;
    next_entry = 333;
    vm_ip += 0xd;
    /* 0xd54de..0xd54e2: exact_instruction, entry=333, bytes=dbf96800; next = 350@0xc1926:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 350;
    vm_ip += 0x4;
    /* 0xd54e2..0xd54e6: exact_instruction, entry=350, bytes=04c9863e; next = 91@0x8b6de:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    next_entry = 91;
    vm_ip += 0x4;
    /* 0xd54e6..0xd54ea: exact_instruction, entry=91, bytes=7006e801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x0u) ^ vm->state;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd54ea..0xd54ed: exact_instruction, entry=215, bytes=1008dc; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0xd54ed..0xd54f1: exact_instruction, entry=258, bytes=3233585b; next = 220@0xa522e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 220;
    vm_ip += 0x4;
    /* 0xd54f1..0xd54f6: exact_instruction, entry=220, bytes=003d01e71a; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0xd54f6..0xd54f8: exact_instruction, entry=257, bytes=3706; next = 203@0xa1484:1, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 203;
    vm_ip += 0x2;
    /* 0xd54f8..0xd54fc: exact_instruction, entry=203, bytes=ef9f14df; next = 253@0xacfb1:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 253;
    vm_ip += 0x4;
    /* 0xd54fc..0xd5502: exact_instruction, entry=253, bytes=0ec084da522d; next = 258@0xadf2c:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x764111b0u + 0x6d2270cbu + U32(vm->ip + 0x2u) ^ vm->flags + vm->flags | 0x62c3b0ddu | 0x2b96d1d1u & 0x2d46e2e3u ^ U16(vm->ip + 0x0u) + 0x7c5d4802u;
    next_entry = 258;
    vm_ip += 0x6;
    /* 0xd5502..0xd5506: exact_instruction, entry=258, bytes=399c18db; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd5506..0xd5509: exact_instruction, entry=18, bytes=1023f6; next = 70@0x8610e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 70;
    vm_ip += 0x3;
    /* 0xd5509..0xd550e: exact_instruction, entry=70, bytes=e9e2003d01; next = 108@0x8f24b:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u ^ vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u | 0x528cef01u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0xd550e..0xd5510: exact_instruction, entry=108, bytes=1a91; next = 189@0x9e7af:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 189;
    vm_ip += 0x2;
    /* 0xd5510..0xd5514: exact_instruction, entry=189, bytes=338e40ad; next = 154@0x97ce6:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 154;
    vm_ip += 0x4;
    /* 0xd5514..0xd5518: exact_instruction, entry=154, bytes=7c3b8c44; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0xd5518..0xd551c: exact_instruction, entry=196, bytes=0429fdbc; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd551c..0xd551f: exact_instruction, entry=215, bytes=8801e0; next = 49@0x82820:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 49;
    vm_ip += 0x3;
    /* 0xd551f..0xd5524: exact_instruction, entry=49, bytes=009a3b3d01; next = 108@0x8f24b:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0xd5524..0xd5526: exact_instruction, entry=108, bytes=dbdb; next = 273@0xb11ca:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 273;
    vm_ip += 0x2;
    /* 0xd5526..0xd552a: exact_instruction, entry=273, bytes=e9a9a676; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags | U16(vm->ip + 0x0u) + vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags - 0x2e0be660u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0xd552a..0xd552e: exact_instruction, entry=172, bytes=f23b0b0c; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd552e..0xd5531: exact_instruction, entry=199, bytes=3b5f76; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd5531..0xd5535: exact_instruction, entry=337, bytes=c398a4ee; next = 49@0x82820:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0xd5535..0xd553a: exact_instruction, entry=49, bytes=0068e93d01; next = 352@0xc1ec4:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0xd553a..0xd553c: exact_instruction, entry=352, bytes=c0e6; next = 185@0x9d964:1, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 185;
    vm_ip += 0x2;
    /* 0xd553c..0xd553f: exact_instruction, entry=185, bytes=a38d3a; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0xd553f..0xd5543: exact_instruction, entry=340, bytes=dba26800; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0xd5543..0xd5547: exact_instruction, entry=157, bytes=2fc86800; next = 124@0x91e81:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 124;
    vm_ip += 0x4;
    /* 0xd5547..0xd554d: exact_instruction, entry=124, bytes=014f00a69fcb; next = 320@0xbada5:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u - U16(vm->ip + 0x4u) + vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ 0x3654c1a7u;
    next_entry = 320;
    vm_ip += 0x6;
    /* 0xd554d..0xd5552: exact_instruction, entry=320, bytes=003d01f7c2; next = 160@0x994cf:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags - vm->flags - 0x7e143884u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0xd5552..0xd5554: exact_instruction, entry=160, bytes=1822; next = 337@0xbec0e:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 337;
    vm_ip += 0x2;
    /* 0xd5554..0xd5558: exact_instruction, entry=337, bytes=8cd21476; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd5558..0xd555b: exact_instruction, entry=297, bytes=8350de; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0xd555b..0xd555f: exact_instruction, entry=168, bytes=6061b9d5; next = 254@0xad32c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 254;
    vm_ip += 0x4;
    /* 0xd555f..0xd5563: exact_instruction, entry=254, bytes=4cc1ba41; next = 3@0x78c77:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) ^ vm->state + vm->flags | vm->flags | 0x617339d9u | 0x5635509u | 0x15874263u ^ 0x5bf4e999u & vm->flags - 0x35a18ac8u | 0x5feb6979u & 0x3e80b852u | U16(vm->ip + 0x2u) - 0x228a41a2u;
    next_entry = 3;
    vm_ip += 0x4;
    /* 0xd5563..0xd5568: exact_instruction, entry=3, bytes=6901003d01; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu ^ U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu + 0x4bc0d288u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0xd5568..0xd556a: exact_instruction, entry=257, bytes=cfc0; next = 28@0x7e390:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 28;
    vm_ip += 0x2;
    /* 0xd556a..0xd556d: exact_instruction, entry=28, bytes=900350; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd556d..0xd5571: exact_instruction, entry=114, bytes=6d64baab; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0xd5571..0xd5575: exact_instruction, entry=196, bytes=8d2c34b6; next = 254@0xad32c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 254;
    vm_ip += 0x4;
    /* 0xd5575..0xd5579: exact_instruction, entry=254, bytes=ea2b3a44; next = 83@0x8947b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) ^ vm->state + vm->flags | vm->flags | 0x617339d9u | 0x5635509u | 0x15874263u ^ 0x5bf4e999u & vm->flags - 0x35a18ac8u | 0x5feb6979u & 0x3e80b852u | U16(vm->ip + 0x2u) - 0x228a41a2u;
    next_entry = 83;
    vm_ip += 0x4;
    /* 0xd5579..0xd557e: exact_instruction, entry=83, bytes=551a003d01; next = 352@0xc1ec4:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0xd557e..0xd5580: exact_instruction, entry=352, bytes=b401; next = 28@0x7e390:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 28;
    vm_ip += 0x2;
    /* 0xd5580..0xd5583: exact_instruction, entry=28, bytes=880ac4; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd5583..0xd5587: exact_instruction, entry=337, bytes=0c91eb55; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd5587..0xd558b: exact_instruction, entry=176, bytes=e801bac8; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd558b..0xd558f: exact_instruction, entry=189, bytes=730074eb; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd558f..0xd5592: exact_instruction, entry=66, bytes=811e0a; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd5592..0xd5596: exact_instruction, entry=176, bytes=e8011de3; next = 181@0x9d13f:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 181;
    vm_ip += 0x4;
    /* 0xd5596..0xd559c: exact_instruction, entry=181, bytes=3d01e8012b50; next = 189@0x9e7af:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) - vm->state;
    next_entry = 189;
    vm_ip += 0x6;
    /* 0xd559c..0xd55a0: exact_instruction, entry=189, bytes=97063ca8; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd55a0..0xd55a3: exact_instruction, entry=185, bytes=23843a; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd55a3..0xd55a7: exact_instruction, entry=158, bytes=e8016b5b; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd55a7..0xd55ab: exact_instruction, entry=64, bytes=bbbf0c5a; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd55ab..0xd55ae: exact_instruction, entry=66, bytes=cc2b4a; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0xd55ae..0xd55b2: exact_instruction, entry=176, bytes=e8013106; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd55b2..0xd55b5: exact_instruction, entry=297, bytes=089f39; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0xd55b5..0xd55b9: exact_instruction, entry=189, bytes=155878a2; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0xd55b9..0xd55bd: exact_instruction, entry=161, bytes=a674e801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd55bd..0xd55c0: exact_instruction, entry=215, bytes=00021c; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 64;
    vm_ip += 0x3;
    /* 0xd55c0..0xd55c4: exact_instruction, entry=64, bytes=ee63159b; next = 174@0x9bd8f:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0xd55c4..0xd55c8: exact_instruction, entry=174, bytes=4f99e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd55c8..0xd55cc: exact_instruction, entry=340, bytes=acf20701; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd55cc..0xd55cf: exact_instruction, entry=199, bytes=c2bd9d; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd55cf..0xd55d3: exact_instruction, entry=158, bytes=e801e58e; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd55d3..0xd55d7: exact_instruction, entry=347, bytes=a884a402; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd55d7..0xd55da: exact_instruction, entry=215, bytes=a00008; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd55da..0xd55de: exact_instruction, entry=20, bytes=e801e97d; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd55de..0xd55e2: exact_instruction, entry=347, bytes=03be1708; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd55e2..0xd55e5: exact_instruction, entry=18, bytes=348f3b; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0xd55e5..0xd55e9: exact_instruction, entry=174, bytes=a0c9e801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd55e9..0xd55ed: exact_instruction, entry=337, bytes=b4969c90; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd55ed..0xd55f0: exact_instruction, entry=199, bytes=83a276; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0xd55f0..0xd55f4: exact_instruction, entry=123, bytes=2a12e801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0xd55f4..0xd55f8: exact_instruction, entry=114, bytes=a10a1d56; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd55f8..0xd55fb: exact_instruction, entry=28, bytes=a000de; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd55fb..0xd55ff: exact_instruction, entry=20, bytes=e801c9f5; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd55ff..0xd5603: exact_instruction, entry=347, bytes=978a4b01; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd5603..0xd5606: exact_instruction, entry=199, bytes=ea8f75; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0xd5606..0xd560a: exact_instruction, entry=184, bytes=f21ce801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd560a..0xd560e: exact_instruction, entry=340, bytes=40dd2301; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd560e..0xd5611: exact_instruction, entry=18, bytes=f20ec4; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0xd5611..0xd5615: exact_instruction, entry=158, bytes=e80198db; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd5615..0xd5618: exact_instruction, entry=66, bytes=7a9bce; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd5618..0xd561c: exact_instruction, entry=337, bytes=d8af11fb; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0xd561c..0xd5620: exact_instruction, entry=161, bytes=0250e801; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd5620..0xd5623: exact_instruction, entry=66, bytes=085368; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd5623..0xd5627: exact_instruction, entry=114, bytes=4faa27e3; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0xd5627..0xd562b: exact_instruction, entry=176, bytes=e801b6ab; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd562b..0xd562f: exact_instruction, entry=64, bytes=c38967f4; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd562f..0xd5632: exact_instruction, entry=18, bytes=8061ee; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0xd5632..0xd5636: exact_instruction, entry=20, bytes=e801a57f; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd5636..0xd5639: exact_instruction, entry=18, bytes=382b16; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd5639..0xd563d: exact_instruction, entry=337, bytes=14f771ea; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0xd563d..0xd5641: exact_instruction, entry=123, bytes=540ee801; next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 95;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0xd5641, coverage=hidden_span_of_14:1 */
    vm_unresolved_synthetic_tail(vm, 0xd5641);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p002_bb_0017(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 17: 0xd564f..0xd57df; rows=103, terminal=long_branch_forward */
    /* 0xd564f..0xd5651: exact_instruction, entry=354, bytes=5101; next = 337@0xbec0e:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 337;
    vm_ip += 0x2;
    /* 0xd5651..0xd5655: exact_instruction, entry=337, bytes=d8909900; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd5655..0xd5658: exact_instruction, entry=307, bytes=5a0dab; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0xd5658..0xd565c: exact_instruction, entry=43, bytes=fd559928; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0xd565c..0xd5660: exact_instruction, entry=305, bytes=2fdde801; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd5660..0xd5663: exact_instruction, entry=185, bytes=1ba33a; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd5663..0xd5667: exact_instruction, entry=347, bytes=fb8cef13; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0xd5667..0xd566b: exact_instruction, entry=168, bytes=265e44d8; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0xd566b..0xd566f: exact_instruction, entry=305, bytes=4805e801; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd566f..0xd5672: exact_instruction, entry=185, bytes=a3a93a; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0xd5672..0xd5676: exact_instruction, entry=268, bytes=1bca956a; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd5676..0xd567a: exact_instruction, entry=258, bytes=3eb81b5c; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0xd567a..0xd567e: exact_instruction, entry=346, bytes=4d5ee801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0xd567e..0xd5682: exact_instruction, entry=337, bytes=d8a5befb; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd5682..0xd5685: exact_instruction, entry=185, bytes=4b923a; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0xd5685..0xd5689: exact_instruction, entry=168, bytes=a768eed6; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0xd5689..0xd568d: exact_instruction, entry=243, bytes=8598e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd568d..0xd5690: exact_instruction, entry=28, bytes=6005b0; next = 172@0x9b68a:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 172;
    vm_ip += 0x3;
    /* 0xd5690..0xd5694: exact_instruction, entry=172, bytes=d0af3308; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd5694..0xd5698: exact_instruction, entry=64, bytes=cd4d5763; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0xd5698..0xd569c: exact_instruction, entry=287, bytes=8636e801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd569c..0xd56a0: exact_instruction, entry=347, bytes=c6069a82; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0xd56a0..0xd56a4: exact_instruction, entry=333, bytes=67f04701; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0xd56a4..0xd56a7: exact_instruction, entry=18, bytes=f88922; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 287;
    vm_ip += 0x3;
    /* 0xd56a7..0xd56ab: exact_instruction, entry=287, bytes=acb8e801; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0xd56ab..0xd56af: exact_instruction, entry=196, bytes=575b6dbf; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd56af..0xd56b2: exact_instruction, entry=297, bytes=0add01; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0xd56b2..0xd56b6: exact_instruction, entry=114, bytes=508db6be; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0xd56b6..0xd56ba: exact_instruction, entry=315, bytes=e80149f6; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0xd56ba..0xd56bd: exact_instruction, entry=199, bytes=7f7b92; next = 203@0xa1484:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 203;
    vm_ip += 0x3;
    /* 0xd56bd..0xd56c1: exact_instruction, entry=203, bytes=079af499; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd56c1..0xd56c5: exact_instruction, entry=64, bytes=5200b464; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0xd56c5..0xd56c9: exact_instruction, entry=33, bytes=e801be03; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0xd56c9..0xd56cd: exact_instruction, entry=157, bytes=d7db1300; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0xd56cd..0xd56d0: exact_instruction, entry=307, bytes=818db4; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0xd56d0..0xd56d4: exact_instruction, entry=347, bytes=12031c07; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0xd56d4..0xd56d8: exact_instruction, entry=26, bytes=e7d9e801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd56d8..0xd56dc: exact_instruction, entry=189, bytes=b0f3bc92; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd56dc..0xd56df: exact_instruction, entry=297, bytes=8556bb; next = 43@0x8173d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 43;
    vm_ip += 0x3;
    /* 0xd56df..0xd56e3: exact_instruction, entry=43, bytes=9210f66d; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0xd56e3..0xd56e7: exact_instruction, entry=305, bytes=0a94e801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd56e7..0xd56eb: exact_instruction, entry=64, bytes=00c14ea3; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0xd56eb..0xd56ef: exact_instruction, entry=203, bytes=4f91a39d; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd56ef..0xd56f2: exact_instruction, entry=297, bytes=6db66d; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 287;
    vm_ip += 0x3;
    /* 0xd56f2..0xd56f6: exact_instruction, entry=287, bytes=ba4ce801; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd56f6..0xd56f9: exact_instruction, entry=66, bytes=d55bd8; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0xd56f9..0xd56fd: exact_instruction, entry=337, bytes=6fec1f3b; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0xd56fd..0xd5701: exact_instruction, entry=268, bytes=9196b995; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0xd5701..0xd5705: exact_instruction, entry=26, bytes=1efbe801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd5705..0xd5708: exact_instruction, entry=215, bytes=680a04; next = 333@0xbd8af:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 333;
    vm_ip += 0x3;
    /* 0xd5708..0xd570c: exact_instruction, entry=333, bytes=fbf09100; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd570c..0xd5710: exact_instruction, entry=64, bytes=1a37797f; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0xd5710..0xd5714: exact_instruction, entry=243, bytes=0592e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd5714..0xd5718: exact_instruction, entry=340, bytes=e41ed300; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0xd5718..0xd571c: exact_instruction, entry=203, bytes=4f9160d6; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd571c..0xd571f: exact_instruction, entry=297, bytes=5d9eae; next = 346@0xc0535:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 346;
    vm_ip += 0x3;
    /* 0xd571f..0xd5723: exact_instruction, entry=346, bytes=e679e801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0xd5723..0xd5727: exact_instruction, entry=258, bytes=c02e6ad3; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd5727..0xd572a: exact_instruction, entry=28, bytes=400593; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 168;
    vm_ip += 0x3;
    /* 0xd572a..0xd572e: exact_instruction, entry=168, bytes=506086d6; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0xd572e..0xd5732: exact_instruction, entry=243, bytes=2598e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0xd5732..0xd5736: exact_instruction, entry=340, bytes=8c1bb300; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0xd5736..0xd5739: exact_instruction, entry=28, bytes=e8046e; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 157;
    vm_ip += 0x3;
    /* 0xd5739..0xd573d: exact_instruction, entry=157, bytes=3f7bb300; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0xd573d..0xd5741: exact_instruction, entry=26, bytes=e660e801; next = 167@0x9a8d2:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 167;
    vm_ip += 0x4;
    /* 0xd5741..0xd5747: exact_instruction, entry=167, bytes=e8013d0157e6; next = 283@0xb3612:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) ^ vm->state ^ 0x5f92615u;
    next_entry = 283;
    vm_ip += 0x6;
    /* 0xd5747..0xd574c: exact_instruction, entry=283, bytes=10e801b45c; next = 64@0x85059:1, ip += +0x5; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    /* state preserved: state_preserve */
    next_entry = 64;
    vm_ip += 0x5;
    /* 0xd574c..0xd5750: exact_instruction, entry=64, bytes=0f6b4f7f; next = 300@0xb6c36:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 300;
    vm_ip += 0x4;
    /* 0xd5750..0xd5754: exact_instruction, entry=300, bytes=c87eb743; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u ^ U16(vm->ip + 0x2u) - vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0xd5754..0xd5757: exact_instruction, entry=297, bytes=e73766; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0xd5757..0xd575b: exact_instruction, entry=268, bytes=b0326169; next = 220@0xa522e:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 220;
    vm_ip += 0x4;
    /* 0xd575b..0xd5760: exact_instruction, entry=220, bytes=003d01ab9c; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0xd5760..0xd5762: exact_instruction, entry=257, bytes=f7f5; next = 203@0xa1484:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 203;
    vm_ip += 0x2;
    /* 0xd5762..0xd5766: exact_instruction, entry=203, bytes=ef9d1463; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0xd5766..0xd576a: exact_instruction, entry=189, bytes=bcdd3cee; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0xd576a..0xd576d: exact_instruction, entry=215, bytes=e80704; next = 253@0xacfb1:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 253;
    vm_ip += 0x3;
    /* 0xd576d..0xd5773: exact_instruction, entry=253, bytes=66bf535b2b9c; next = 237@0xa8e1f:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x764111b0u + 0x6d2270cbu + U32(vm->ip + 0x2u) ^ vm->flags + vm->flags | 0x62c3b0ddu | 0x2b96d1d1u & 0x2d46e2e3u ^ U16(vm->ip + 0x0u) + 0x7c5d4802u;
    next_entry = 237;
    vm_ip += 0x6;
    /* 0xd5773..0xd5778: exact_instruction, entry=237, bytes=00ce503d01; next = 173@0x9ba74:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0xd5778..0xd577a: exact_instruction, entry=173, bytes=1e8b; next = 114@0x90319:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 114;
    vm_ip += 0x2;
    /* 0xd577a..0xd577e: exact_instruction, entry=114, bytes=3465a2ab; next = 222@0xa5f3c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 222;
    vm_ip += 0x4;
    /* 0xd577e..0xd5783: exact_instruction, entry=222, bytes=aa82d1bd3a; next = 168@0x9aa83:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags | 0x11da3648u & 0x169ceafau & U16(vm->ip + 0x0u) - vm->state + vm->flags | 0x11da3648u & 0x169ceafau + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u | 0x39a63024u + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u + 0x17d780cau ^ U16(vm->ip + 0x2u) + vm->state + vm->flags | 0x11da3648u & 0x169ceafau & U16(vm->ip + 0x0u) - vm->state + vm->flags | 0x11da3648u & 0x169ceafau + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u | 0x39a63024u + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u + 0x17d780cau - 0x29e369dfu;
    next_entry = 168;
    vm_ip += 0x5;
    /* 0xd5783..0xd5787: exact_instruction, entry=168, bytes=a27014d5; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0xd5787..0xd578a: exact_instruction, entry=185, bytes=e3843a; next = 220@0xa522e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 220;
    vm_ip += 0x3;
    /* 0xd578a..0xd578f: exact_instruction, entry=220, bytes=003d01d0e4; next = 198@0xa037e:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0xd578f..0xd5791: exact_instruction, entry=198, bytes=1ee0; next = 196@0x9fbcd:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 196;
    vm_ip += 0x2;
    /* 0xd5791..0xd5795: exact_instruction, entry=196, bytes=107d15bc; next = 154@0x97ce6:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 154;
    vm_ip += 0x4;
    /* 0xd5795..0xd5799: exact_instruction, entry=154, bytes=58029050; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0xd5799..0xd579d: exact_instruction, entry=64, bytes=37396800; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd579d..0xd57a0: exact_instruction, entry=66, bytes=9d88ce; next = 301@0xb708d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 301;
    vm_ip += 0x3;
    /* 0xd57a0..0xd57a5: exact_instruction, entry=301, bytes=003d014911; next = 173@0x9ba74:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0xd57a5..0xd57a7: exact_instruction, entry=173, bytes=930e; next = 189@0x9e7af:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 189;
    vm_ip += 0x2;
    /* 0xd57a7..0xd57ab: exact_instruction, entry=189, bytes=6c8adce7; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0xd57ab..0xd57af: exact_instruction, entry=43, bytes=dc773002; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0xd57af..0xd57b2: exact_instruction, entry=66, bytes=f99c0a; next = 239@0xa991e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 239;
    vm_ip += 0x3;
    /* 0xd57b2..0xd57b8: exact_instruction, entry=239, bytes=12219139dea2; next = 70@0x8610e:1, ip += +0x6; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - U16(vm->ip + 0x4u) + vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - 0x3650a0aeu;
    next_entry = 70;
    vm_ip += 0x6;
    /* 0xd57b8..0xd57bd: exact_instruction, entry=70, bytes=4293003d01; next = 173@0x9ba74:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u ^ vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u | 0x528cef01u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0xd57bd..0xd57bf: exact_instruction, entry=173, bytes=5f84; next = 146@0x96407:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 146;
    vm_ip += 0x2;
    /* 0xd57bf..0xd57c4: exact_instruction, entry=146, bytes=3a819303fe; next = 185@0x9d964:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags ^ 0x2e312e01u & vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u ^ U16(vm->ip + 0x3u) + vm->flags & 0xa6d4251u ^ 0x409c2e61u ^ U16(vm->ip + 0x1u) - vm->state + vm->flags ^ 0x2e312e01u & vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u ^ U16(vm->ip + 0x3u) + vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x2cff1885u;
    next_entry = 185;
    vm_ip += 0x5;
    /* 0xd57c4..0xd57c7: exact_instruction, entry=185, bytes=b72d3a; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0xd57c7..0xd57cb: exact_instruction, entry=157, bytes=b3441300; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0xd57cb..0xd57cf: exact_instruction, entry=347, bytes=33825706; next = 52@0x833c7:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 52;
    vm_ip += 0x4;
    /* 0xd57cf..0xd57d4: exact_instruction, entry=52, bytes=64cf353d01; next = 75@0x873fc:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) + vm->state ^ 0x7823b2dau;
    next_entry = 75;
    vm_ip += 0x5;
    /* 0xd57d4..0xd5a12: long_branch_forward, entry=75, bytes=620100003e0200003d0122; next = table[354], ip += 0x23e; validation=file_backed_operand;source_state=transition_model */
    /* state preserved: sampled_backedge */
    next_entry = (int)U32(vm->ip + 0x0);
    vm_ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* terminal CFG edge: decoded_control, target_vm_ip=0xd5a12, coverage=- */
    vm_unresolved_synthetic_tail(vm, 0xd5a12);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

void vm_program_atlas_002_decompiled(VMState *vm, uint64_t vm_ip) {
    switch (vm_ip) {
    case 0xd476e: vmdec_p002_bb_0010(vm, vm_ip); return;
    case 0xd4897: vmdec_p002_bb_0011(vm, vm_ip); return;
    case 0xd4a91: vmdec_p002_bb_0012(vm, vm_ip); return;
    case 0xd4bfc: vmdec_p002_bb_0013(vm, vm_ip); return;
    case 0xd4cc7: vmdec_p002_bb_0014(vm, vm_ip); return;
    case 0xd5055: vmdec_p002_bb_0015(vm, vm_ip); return;
    case 0xd522f: vmdec_p002_bb_0016(vm, vm_ip); return;
    case 0xd564f: vmdec_p002_bb_0017(vm, vm_ip); return;
    default: vm_unresolved_synthetic_tail(vm, vm_ip); return;
    }
}
