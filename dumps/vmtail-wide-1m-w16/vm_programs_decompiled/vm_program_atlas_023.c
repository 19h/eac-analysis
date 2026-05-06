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

/* VM program atlas 23: 0x177353..0x177ca2 */

static void vmdec_p023_bb_0124(VMState *vm, uint64_t vm_ip);
static void vmdec_p023_bb_0125(VMState *vm, uint64_t vm_ip);
static void vmdec_p023_bb_0126(VMState *vm, uint64_t vm_ip);
static void vmdec_p023_bb_0127(VMState *vm, uint64_t vm_ip);
static void vmdec_p023_bb_0128(VMState *vm, uint64_t vm_ip);

static void vmdec_p023_bb_0124(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 124: 0x177353..0x1774b8; rows=96, terminal=exact_instruction */
    /* 0x177353..0x177355: exact_instruction, entry=354, bytes=5e01; next = 350@0xc1926:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 350;
    vm_ip += 0x2;
    /* 0x177355..0x177359: exact_instruction, entry=350, bytes=e15e0638; next = 183@0x9d495:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    next_entry = 183;
    vm_ip += 0x4;
    /* 0x177359..0x17735d: exact_instruction, entry=183, bytes=e801d68b; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0xfaa325cu ^ 0x694e1f66u | U16(vm->ip + 0x2u) - vm->state + 0xfaa325cu ^ 0x694e1f66u - 0x1aed554cu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x17735d..0x177361: exact_instruction, entry=337, bytes=b094ded1; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x177361..0x177365: exact_instruction, entry=203, bytes=bf9e3422; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177365..0x177368: exact_instruction, entry=215, bytes=980204; next = 83@0x8947b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 83;
    vm_ip += 0x3;
    /* 0x177368..0x17736d: exact_instruction, entry=83, bytes=d517003d01; next = 160@0x994cf:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x17736d..0x17736f: exact_instruction, entry=160, bytes=a02a; next = 66@0x855ff:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 66;
    vm_ip += 0x2;
    /* 0x17736f..0x177372: exact_instruction, entry=66, bytes=88aeaa; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x177372..0x177376: exact_instruction, entry=64, bytes=207b6b41; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x177376..0x17737a: exact_instruction, entry=43, bytes=a93cfd47; next = 239@0xa991e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 239;
    vm_ip += 0x4;
    /* 0x17737a..0x177380: exact_instruction, entry=239, bytes=3a6ad108d6a1; next = 37@0x80685:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - U16(vm->ip + 0x4u) + vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - 0x3650a0aeu;
    next_entry = 37;
    vm_ip += 0x6;
    /* 0x177380..0x177385: exact_instruction, entry=37, bytes=dcf8003d01; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x504fc3du - 0x4eca0e49u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags + 0x504fc3du - 0x4eca0e49u ^ 0x384e1c86u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x177385..0x177387: exact_instruction, entry=257, bytes=d7f0; next = 30@0x7e849:1, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 30;
    vm_ip += 0x2;
    /* 0x177387..0x17738b: exact_instruction, entry=30, bytes=2f026ca4; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags & 0x614d4b17u + 0x64fd160cu;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x17738b..0x17738f: exact_instruction, entry=114, bytes=3c6bbb27; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x17738f..0x177392: exact_instruction, entry=28, bytes=e8048c; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x177392..0x177396: exact_instruction, entry=157, bytes=838f0701; next = 49@0x82820:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0x177396..0x17739b: exact_instruction, entry=49, bytes=006d743d01; next = 198@0xa037e:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0x17739b..0x17739d: exact_instruction, entry=198, bytes=a03c; next = 196@0x9fbcd:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 196;
    vm_ip += 0x2;
    /* 0x17739d..0x1773a1: exact_instruction, entry=196, bytes=08f10d93; next = 121@0x91379:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 121;
    vm_ip += 0x4;
    /* 0x1773a1..0x1773a5: exact_instruction, entry=121, bytes=00875634; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau + U16(vm->ip + 0x0u) + vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau - vm->flags;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x1773a5..0x1773a8: exact_instruction, entry=297, bytes=33e4ec; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x1773a8..0x1773ac: exact_instruction, entry=114, bytes=767b5940; next = 79@0x885b0:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 79;
    vm_ip += 0x4;
    /* 0x1773ac..0x1773b1: exact_instruction, entry=79, bytes=dec43d0100; next = 144@0x95887:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x1773b1..0x1773b3: exact_instruction, entry=144, bytes=ff9e; next = 337@0xbec0e:1, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 337;
    vm_ip += 0x2;
    /* 0x1773b3..0x1773b7: exact_instruction, entry=337, bytes=d37ae8fd; next = 121@0x91379:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 121;
    vm_ip += 0x4;
    /* 0x1773b7..0x1773bb: exact_instruction, entry=121, bytes=44be020c; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau + U16(vm->ip + 0x0u) + vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau - vm->flags;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x1773bb..0x1773be: exact_instruction, entry=297, bytes=0b30ca; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x1773be..0x1773c2: exact_instruction, entry=168, bytes=f35eded5; next = 220@0xa522e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 220;
    vm_ip += 0x4;
    /* 0x1773c2..0x1773c7: exact_instruction, entry=220, bytes=003d01c73a; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x1773c7..0x1773c9: exact_instruction, entry=257, bytes=1fc8; next = 268@0xb0007:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 268;
    vm_ip += 0x2;
    /* 0x1773c9..0x1773cd: exact_instruction, entry=268, bytes=60c06505; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x1773cd..0x1773d1: exact_instruction, entry=337, bytes=73868c32; next = 253@0xacfb1:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 253;
    vm_ip += 0x4;
    /* 0x1773d1..0x1773d7: exact_instruction, entry=253, bytes=96c13c300408; next = 307@0xb8064:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x764111b0u + 0x6d2270cbu + U32(vm->ip + 0x2u) ^ vm->flags + vm->flags | 0x62c3b0ddu | 0x2b96d1d1u & 0x2d46e2e3u ^ U16(vm->ip + 0x0u) + 0x7c5d4802u;
    next_entry = 307;
    vm_ip += 0x6;
    /* 0x1773d7..0x1773da: exact_instruction, entry=307, bytes=9eb5af; next = 192@0x9f00a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 192;
    vm_ip += 0x3;
    /* 0x1773da..0x1773df: exact_instruction, entry=192, bytes=1e5e3d0100; next = 256@0xad849:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu - U16(vm->ip + 0x0u) ^ vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x1773df..0x1773e1: exact_instruction, entry=256, bytes=f11b; next = 203@0xa1484:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 203;
    vm_ip += 0x2;
    /* 0x1773e1..0x1773e5: exact_instruction, entry=203, bytes=3f9eaf79; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x1773e5..0x1773e8: exact_instruction, entry=199, bytes=d337b6; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x1773e8..0x1773ec: exact_instruction, entry=189, bytes=879ca094; next = 260@0xae90b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 260;
    vm_ip += 0x4;
    /* 0x1773ec..0x1773f0: exact_instruction, entry=260, bytes=fd0a3b00; next = 83@0x8947b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u - U16(vm->ip + 0x0u) - vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u ^ 0x470c080du;
    next_entry = 83;
    vm_ip += 0x4;
    /* 0x1773f0..0x1773f5: exact_instruction, entry=83, bytes=1198003d01; next = 160@0x994cf:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x1773f5..0x1773f7: exact_instruction, entry=160, bytes=c82e; next = 199@0xa0631:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 199;
    vm_ip += 0x2;
    /* 0x1773f7..0x1773fa: exact_instruction, entry=199, bytes=92eb6d; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x1773fa..0x1773fe: exact_instruction, entry=189, bytes=e67800eb; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x1773fe..0x177402: exact_instruction, entry=176, bytes=e801e23e; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x177402..0x177406: exact_instruction, entry=258, bytes=04c3a1dd; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x177406..0x177409: exact_instruction, entry=199, bytes=eee8b1; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x177409..0x17740d: exact_instruction, entry=123, bytes=d7c7e801; next = 119@0x90ebc:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 119;
    vm_ip += 0x4;
    /* 0x17740d..0x177413: exact_instruction, entry=119, bytes=e8013d01559c; next = 64@0x85059:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x4u) ^ vm->state + 0x7e7974a5u;
    next_entry = 64;
    vm_ip += 0x6;
    /* 0x177413..0x177417: exact_instruction, entry=64, bytes=955ab3f6; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x177417..0x17741a: exact_instruction, entry=199, bytes=f7ad8a; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x17741a..0x17741e: exact_instruction, entry=184, bytes=4238e801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x17741e..0x177422: exact_instruction, entry=189, bytes=4715349e; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177422..0x177425: exact_instruction, entry=28, bytes=c00570; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x177425..0x177429: exact_instruction, entry=184, bytes=4235e801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x177429..0x17742d: exact_instruction, entry=114, bytes=1055ce9c; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x17742d..0x177430: exact_instruction, entry=66, bytes=a1b52c; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x177430..0x177434: exact_instruction, entry=176, bytes=e8012553; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x177434..0x177438: exact_instruction, entry=337, bytes=a8b86645; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x177438..0x17743b: exact_instruction, entry=307, bytes=0a25af; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x17743b..0x17743f: exact_instruction, entry=174, bytes=732de801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x17743f..0x177442: exact_instruction, entry=307, bytes=8ac5b1; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x177442..0x177446: exact_instruction, entry=258, bytes=909d45ce; next = 20@0x7c62b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x177446..0x17744a: exact_instruction, entry=20, bytes=e801047f; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x17744a..0x17744e: exact_instruction, entry=258, bytes=5fbb2e6c; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x17744e..0x177451: exact_instruction, entry=215, bytes=d8033f; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x177451..0x177455: exact_instruction, entry=123, bytes=55e4e801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177455..0x177458: exact_instruction, entry=215, bytes=d80a08; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x177458..0x17745c: exact_instruction, entry=347, bytes=cb8c1700; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x17745c..0x177460: exact_instruction, entry=161, bytes=7ed2e801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x177460..0x177464: exact_instruction, entry=114, bytes=b7476f81; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177464..0x177467: exact_instruction, entry=28, bytes=d803e4; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x177467..0x17746b: exact_instruction, entry=123, bytes=92a6e801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x17746b..0x17746f: exact_instruction, entry=347, bytes=12060c97; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x17746f..0x177472: exact_instruction, entry=199, bytes=c2e005; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x177472..0x177476: exact_instruction, entry=176, bytes=e801a2d7; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177476..0x177479: exact_instruction, entry=28, bytes=880a00; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x177479..0x17747d: exact_instruction, entry=337, bytes=546dbbe6; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x17747d..0x177481: exact_instruction, entry=161, bytes=7e55e801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x177481..0x177485: exact_instruction, entry=258, bytes=8101fef7; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x177485..0x177488: exact_instruction, entry=18, bytes=f825a6; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x177488..0x17748c: exact_instruction, entry=123, bytes=764ce801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x17748c..0x177490: exact_instruction, entry=340, bytes=899b2800; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x177490..0x177493: exact_instruction, entry=185, bytes=6b083a; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x177493..0x177497: exact_instruction, entry=123, bytes=413ae801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x177497..0x17749b: exact_instruction, entry=337, bytes=e061f18a; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x17749b..0x17749e: exact_instruction, entry=18, bytes=800d3a; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x17749e..0x1774a2: exact_instruction, entry=176, bytes=e801acaa; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x1774a2..0x1774a6: exact_instruction, entry=258, bytes=83fa40c3; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x1774a6..0x1774a9: exact_instruction, entry=185, bytes=1ba23a; next = 161@0x9975a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x1774a9..0x1774ad: exact_instruction, entry=161, bytes=c9d8e801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x1774ad..0x1774b1: exact_instruction, entry=347, bytes=2c032081; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x1774b1..0x1774b4: exact_instruction, entry=215, bytes=a00008; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 20;
    vm_ip += 0x3;
    /* 0x1774b4..0x1774b8: exact_instruction, entry=20, bytes=e801f1f1; next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 216;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x1774b8, coverage=hidden_span_of_14:1 */
    vm_unresolved_synthetic_tail(vm, 0x1774b8);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p023_bb_0125(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 125: 0x1774c6..0x17776f; rows=181, terminal=exact_instruction */
    /* 0x1774c6..0x1774c8: exact_instruction, entry=354, bytes=cb00; next = 203@0xa1484:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 203;
    vm_ip += 0x2;
    /* 0x1774c8..0x1774cc: exact_instruction, entry=203, bytes=9f913576; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x1774cc..0x1774cf: exact_instruction, entry=307, bytes=beb5ab; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x1774cf..0x1774d3: exact_instruction, entry=64, bytes=ed2f99c7; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x1774d3..0x1774d7: exact_instruction, entry=305, bytes=2612e801; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x1774d7..0x1774db: exact_instruction, entry=203, bytes=079a977a; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x1774db..0x1774df: exact_instruction, entry=64, bytes=07231783; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x1774df..0x1774e2: exact_instruction, entry=28, bytes=08018c; next = 33@0x7f7c4:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 33;
    vm_ip += 0x3;
    /* 0x1774e2..0x1774e6: exact_instruction, entry=33, bytes=e80180c7; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x1774e6..0x1774ea: exact_instruction, entry=340, bytes=ac198900; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x1774ea..0x1774ee: exact_instruction, entry=196, bytes=6af18de8; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x1774ee..0x1774f1: exact_instruction, entry=297, bytes=0ab504; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 287;
    vm_ip += 0x3;
    /* 0x1774f1..0x1774f5: exact_instruction, entry=287, bytes=56cae801; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x1774f5..0x1774f9: exact_instruction, entry=157, bytes=9b572800; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x1774f9..0x1774fc: exact_instruction, entry=185, bytes=7f7e3a; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x1774fc..0x177500: exact_instruction, entry=114, bytes=0f8910cf; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x177500..0x177504: exact_instruction, entry=243, bytes=c590e801; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x177504..0x177508: exact_instruction, entry=268, bytes=141d7662; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x177508..0x17750b: exact_instruction, entry=18, bytes=ad2a5a; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x17750b..0x17750f: exact_instruction, entry=340, bytes=a0262301; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x17750f..0x177513: exact_instruction, entry=243, bytes=4598e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177513..0x177516: exact_instruction, entry=28, bytes=680a70; next = 333@0xbd8af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x177516..0x17751a: exact_instruction, entry=333, bytes=b3d44701; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x17751a..0x17751e: exact_instruction, entry=189, bytes=acdb2c9c; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x17751e..0x177522: exact_instruction, entry=315, bytes=e801e9f9; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x177522..0x177525: exact_instruction, entry=307, bytes=ba3db4; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x177525..0x177529: exact_instruction, entry=337, bytes=f497cb78; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x177529..0x17752d: exact_instruction, entry=203, bytes=8f91a716; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x17752d..0x177531: exact_instruction, entry=305, bytes=9801e801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x177531..0x177534: exact_instruction, entry=307, bytes=3a9dae; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x177534..0x177538: exact_instruction, entry=157, bytes=37d13800; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x177538..0x17753c: exact_instruction, entry=347, bytes=cd025d82; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x17753c..0x177540: exact_instruction, entry=287, bytes=1e9ce801; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x177540..0x177544: exact_instruction, entry=168, bytes=b7b323da; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x177544..0x177548: exact_instruction, entry=347, bytes=e7b31708; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177548..0x17754b: exact_instruction, entry=215, bytes=880947; next = 305@0xb78b0:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 305;
    vm_ip += 0x3;
    /* 0x17754b..0x17754f: exact_instruction, entry=305, bytes=e913e801; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x17754f..0x177553: exact_instruction, entry=268, bytes=a2a1926c; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x177553..0x177557: exact_instruction, entry=337, bytes=e8d494dd; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x177557..0x17755a: exact_instruction, entry=66, bytes=f50c28; next = 243@0xaab6a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 243;
    vm_ip += 0x3;
    /* 0x17755a..0x17755e: exact_instruction, entry=243, bytes=5ddfe801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x17755e..0x177562: exact_instruction, entry=189, bytes=1ffb34a2; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177562..0x177565: exact_instruction, entry=28, bytes=680a70; next = 333@0xbd8af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x177565..0x177569: exact_instruction, entry=333, bytes=c3d70701; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x177569..0x17756d: exact_instruction, entry=287, bytes=b24ae801; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x17756d..0x177570: exact_instruction, entry=199, bytes=478b22; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x177570..0x177574: exact_instruction, entry=189, bytes=6d79d4a0; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x177574..0x177578: exact_instruction, entry=268, bytes=0626f22b; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x177578..0x17757c: exact_instruction, entry=305, bytes=5f1ee801; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x17757c..0x17757f: exact_instruction, entry=185, bytes=23753a; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x17757f..0x177583: exact_instruction, entry=268, bytes=c2ecaa71; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x177583..0x177587: exact_instruction, entry=337, bytes=f8b680c7; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x177587..0x17758b: exact_instruction, entry=287, bytes=223ce801; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x17758b..0x17758f: exact_instruction, entry=168, bytes=93838bd0; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x17758f..0x177593: exact_instruction, entry=64, bytes=a0309696; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x177593..0x177596: exact_instruction, entry=297, bytes=f5a53c; next = 315@0xb9451:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x177596..0x17759a: exact_instruction, entry=315, bytes=e80171f2; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x17759a..0x17759e: exact_instruction, entry=64, bytes=403b5005; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x17759e..0x1775a2: exact_instruction, entry=157, bytes=83837900; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x1775a2..0x1775a5: exact_instruction, entry=66, bytes=a6d12e; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 287;
    vm_ip += 0x3;
    /* 0x1775a5..0x1775a9: exact_instruction, entry=287, bytes=be4ae801; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x1775a9..0x1775ad: exact_instruction, entry=196, bytes=1fec55be; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x1775ad..0x1775b1: exact_instruction, entry=258, bytes=bda279a5; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x1775b1..0x1775b4: exact_instruction, entry=215, bytes=d00a28; next = 346@0xc0535:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 346;
    vm_ip += 0x3;
    /* 0x1775b4..0x1775b8: exact_instruction, entry=346, bytes=610ce801; next = 338@0xbf128:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 338;
    vm_ip += 0x4;
    /* 0x1775b8..0x1775be: exact_instruction, entry=338, bytes=321d3d01e801; next = 283@0xb3612:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x0u) - vm->state - 0x4bf8be0cu;
    next_entry = 283;
    vm_ip += 0x6;
    /* 0x1775be..0x1775c3: exact_instruction, entry=283, bytes=10e801445e; next = 114@0x90319:1, ip += +0x5; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    /* state preserved: state_preserve */
    next_entry = 114;
    vm_ip += 0x5;
    /* 0x1775c3..0x1775c7: exact_instruction, entry=114, bytes=5666bfa9; next = 260@0xae90b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 260;
    vm_ip += 0x4;
    /* 0x1775c7..0x1775cb: exact_instruction, entry=260, bytes=bd0c45b1; next = 91@0x8b6de:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u - U16(vm->ip + 0x0u) - vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u ^ 0x470c080du;
    next_entry = 91;
    vm_ip += 0x4;
    /* 0x1775cb..0x1775cf: exact_instruction, entry=91, bytes=48f9e801; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x0u) ^ vm->state;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x1775cf..0x1775d3: exact_instruction, entry=203, bytes=e79804c6; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x1775d3..0x1775d6: exact_instruction, entry=28, bytes=9802ec; next = 83@0x8947b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 83;
    vm_ip += 0x3;
    /* 0x1775d6..0x1775db: exact_instruction, entry=83, bytes=bd98003d01; next = 173@0x9ba74:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x1775db..0x1775dd: exact_instruction, entry=173, bytes=f308; next = 297@0xb64d7:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 297;
    vm_ip += 0x2;
    /* 0x1775dd..0x1775e0: exact_instruction, entry=297, bytes=2d6564; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x1775e0..0x1775e4: exact_instruction, entry=157, bytes=d7c06800; next = 239@0xa991e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 239;
    vm_ip += 0x4;
    /* 0x1775e4..0x1775ea: exact_instruction, entry=239, bytes=24625000aea2; next = 64@0x85059:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - U16(vm->ip + 0x4u) + vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - 0x3650a0aeu;
    next_entry = 64;
    vm_ip += 0x6;
    /* 0x1775ea..0x1775ee: exact_instruction, entry=64, bytes=ae492820; next = 319@0xba72f:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 319;
    vm_ip += 0x4;
    /* 0x1775ee..0x1775f3: exact_instruction, entry=319, bytes=3d01367500; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + U16(vm->ip + 0x2u) + vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + 0x7f20b820u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x1775f3..0x1775f5: exact_instruction, entry=257, bytes=5fc9; next = 307@0xb8064:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 307;
    vm_ip += 0x2;
    /* 0x1775f5..0x1775f8: exact_instruction, entry=307, bytes=fc55b4; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x1775f8..0x1775fc: exact_instruction, entry=340, bytes=c416b300; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x1775fc..0x177600: exact_instruction, entry=43, bytes=b817146f; next = 154@0x97ce6:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 154;
    vm_ip += 0x4;
    /* 0x177600..0x177604: exact_instruction, entry=154, bytes=14a17c6f; next = 49@0x82820:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0x177604..0x177609: exact_instruction, entry=49, bytes=0048863d01; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x177609..0x17760b: exact_instruction, entry=257, bytes=b7f1; next = 64@0x85059:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 64;
    vm_ip += 0x2;
    /* 0x17760b..0x17760f: exact_instruction, entry=64, bytes=11786c00; next = 121@0x91379:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 121;
    vm_ip += 0x4;
    /* 0x17760f..0x177613: exact_instruction, entry=121, bytes=cda1a162; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau + U16(vm->ip + 0x0u) + vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau - vm->flags;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x177613..0x177616: exact_instruction, entry=199, bytes=53cabe; next = 333@0xbd8af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x177616..0x17761a: exact_instruction, entry=333, bytes=2f096800; next = 301@0xb708d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 301;
    vm_ip += 0x4;
    /* 0x17761a..0x17761f: exact_instruction, entry=301, bytes=003d01e7f1; next = 160@0x994cf:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x17761f..0x177621: exact_instruction, entry=160, bytes=f128; next = 140@0x94e5a:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 140;
    vm_ip += 0x2;
    /* 0x177621..0x177627: exact_instruction, entry=140, bytes=af22a4b8da77; next = 258@0xadf2c:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    next_entry = 258;
    vm_ip += 0x6;
    /* 0x177627..0x17762b: exact_instruction, entry=258, bytes=c77c4ab0; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x17762b..0x17762e: exact_instruction, entry=28, bytes=400566; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x17762e..0x177632: exact_instruction, entry=168, bytes=3f6026d0; next = 37@0x80685:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 37;
    vm_ip += 0x4;
    /* 0x177632..0x177637: exact_instruction, entry=37, bytes=9422003d01; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x504fc3du - 0x4eca0e49u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags + 0x504fc3du - 0x4eca0e49u ^ 0x384e1c86u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x177637..0x177639: exact_instruction, entry=257, bytes=0fca; next = 333@0xbd8af:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 333;
    vm_ip += 0x2;
    /* 0x177639..0x17763d: exact_instruction, entry=333, bytes=5fe89d01; next = 300@0xb6c36:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 300;
    vm_ip += 0x4;
    /* 0x17763d..0x177641: exact_instruction, entry=300, bytes=4dff8305; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u ^ U16(vm->ip + 0x2u) - vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x177641..0x177645: exact_instruction, entry=189, bytes=1aa7349f; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177645..0x177648: exact_instruction, entry=28, bytes=e00670; next = 220@0xa522e:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 220;
    vm_ip += 0x3;
    /* 0x177648..0x17764d: exact_instruction, entry=220, bytes=003d01ec62; next = 108@0x8f24b:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x17764d..0x17764f: exact_instruction, entry=108, bytes=c58d; next = 258@0xadf2c:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 258;
    vm_ip += 0x2;
    /* 0x17764f..0x177653: exact_instruction, entry=258, bytes=f4958175; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x177653..0x177657: exact_instruction, entry=203, bytes=6791afc2; next = 300@0xb6c36:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 300;
    vm_ip += 0x4;
    /* 0x177657..0x17765b: exact_instruction, entry=300, bytes=2f41ddba; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u ^ U16(vm->ip + 0x2u) - vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x17765b..0x17765e: exact_instruction, entry=18, bytes=e0b03a; next = 220@0xa522e:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 220;
    vm_ip += 0x3;
    /* 0x17765e..0x177663: exact_instruction, entry=220, bytes=003d01a0db; next = 160@0x994cf:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x177663..0x177665: exact_instruction, entry=160, bytes=3122; next = 340@0xbf435:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 340;
    vm_ip += 0x2;
    /* 0x177665..0x177669: exact_instruction, entry=340, bytes=44a06800; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x177669..0x17766d: exact_instruction, entry=203, bytes=f79215da; next = 350@0xc1926:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 350;
    vm_ip += 0x4;
    /* 0x17766d..0x177671: exact_instruction, entry=350, bytes=21a2c638; next = 183@0x9d495:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ vm->state + 0x5c4fb994u - 0x33be5a8bu ^ vm->flags & vm->state + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    next_entry = 183;
    vm_ip += 0x4;
    /* 0x177671..0x177675: exact_instruction, entry=183, bytes=e8018688; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0xfaa325cu ^ 0x694e1f66u | U16(vm->ip + 0x2u) - vm->state + 0xfaa325cu ^ 0x694e1f66u - 0x1aed554cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177675..0x177678: exact_instruction, entry=215, bytes=68083c; next = 269@0xb045b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 269;
    vm_ip += 0x3;
    /* 0x177678..0x17767d: exact_instruction, entry=269, bytes=003d01e79a; next = 144@0x95887:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + U16(vm->ip + 0x3u) + vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + 0x4faa382u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x17767d..0x17767f: exact_instruction, entry=144, bytes=1799; next = 253@0xacfb1:1, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 253;
    vm_ip += 0x2;
    /* 0x17767f..0x177685: exact_instruction, entry=253, bytes=5ebd85efd3bc; next = 172@0x9b68a:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x764111b0u + 0x6d2270cbu + U32(vm->ip + 0x2u) ^ vm->flags + vm->flags | 0x62c3b0ddu | 0x2b96d1d1u & 0x2d46e2e3u ^ U16(vm->ip + 0x0u) + 0x7c5d4802u;
    next_entry = 172;
    vm_ip += 0x6;
    /* 0x177685..0x177689: exact_instruction, entry=172, bytes=d7b89300; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x177689..0x17768d: exact_instruction, entry=340, bytes=13496800; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x17768d..0x177690: exact_instruction, entry=18, bytes=201436; next = 192@0x9f00a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 192;
    vm_ip += 0x3;
    /* 0x177690..0x177695: exact_instruction, entry=192, bytes=f9313d0100; next = 256@0xad849:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu - U16(vm->ip + 0x0u) ^ vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x177695..0x177697: exact_instruction, entry=256, bytes=961e; next = 349@0xc140b:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 349;
    vm_ip += 0x2;
    /* 0x177697..0x17769b: exact_instruction, entry=349, bytes=cb828001; next = 48@0x82477:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x37932789u | 0x16ca0efdu ^ 0x78372234u & U16(vm->ip + 0x0u) ^ vm->state & vm->flags | 0x37932789u | 0x16ca0efdu ^ 0x78372234u - vm->flags + vm->flags + 0x5b8191bu - 0x48cf2626u - 0x7444487fu | 0x1897f25cu | vm->flags + 0x5b8191bu - 0x48cf2626u - 0x7444487fu ^ vm->state & vm->flags | 0x37932789u | 0x16ca0efdu ^ 0x78372234u & U16(vm->ip + 0x0u) ^ vm->state & vm->flags | 0x37932789u | 0x16ca0efdu ^ 0x78372234u - vm->flags + vm->flags + 0x5b8191bu - 0x48cf2626u - 0x7444487fu | 0x18eb935cu | 0x6cbcf01au | 0x6e5025ccu + U16(vm->ip + 0x2u);
    next_entry = 48;
    vm_ip += 0x4;
    /* 0x17769b..0x1776a0: exact_instruction, entry=48, bytes=48e43aa117; next = 273@0xb11ca:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x3u) + vm->state ^ vm->flags ^ 0x8881ae0u - 0x1accc893u + 0x4f1a7667u - vm->flags ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u & vm->flags ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u ^ 0x79fc8ff4u | vm->flags ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u - 0x430c028cu & vm->flags ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u + 0x157b2443u - U16(vm->ip + 0x0u) + vm->state & U16(vm->ip + 0x3u) + vm->state ^ vm->flags ^ 0x8881ae0u - 0x1accc893u + 0x4f1a7667u - vm->flags ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u & vm->flags ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u ^ 0x79fc8ff4u | vm->flags ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u - 0x430c028cu & vm->flags ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u + 0x157b2443u;
    next_entry = 273;
    vm_ip += 0x5;
    /* 0x1776a0..0x1776a4: exact_instruction, entry=273, bytes=85c6bb21; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags | U16(vm->ip + 0x0u) + vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu + U16(vm->ip + 0x2u) - vm->state - vm->flags + 0x4b959cd0u + vm->flags & 0x908616eu ^ vm->flags - 0x2e0be660u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x1776a4..0x1776a7: exact_instruction, entry=28, bytes=98020a; next = 83@0x8947b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 83;
    vm_ip += 0x3;
    /* 0x1776a7..0x1776ac: exact_instruction, entry=83, bytes=330f003d01; next = 352@0xc1ec4:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x1776ac..0x1776ae: exact_instruction, entry=352, bytes=caf3; next = 66@0x855ff:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 66;
    vm_ip += 0x2;
    /* 0x1776ae..0x1776b1: exact_instruction, entry=66, bytes=ea916a; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x1776b1..0x1776b5: exact_instruction, entry=64, bytes=8f8986ee; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x1776b5..0x1776b9: exact_instruction, entry=176, bytes=e801d787; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x1776b9..0x1776bd: exact_instruction, entry=337, bytes=0896d610; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x1776bd..0x1776c0: exact_instruction, entry=185, bytes=13053a; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x1776c0..0x1776c4: exact_instruction, entry=123, bytes=e92de801; next = 40@0x8115d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 40;
    vm_ip += 0x4;
    /* 0x1776c4..0x1776ca: exact_instruction, entry=40, bytes=e8013d01507a; next = 18@0x7be9b:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x4u) ^ vm->state;
    next_entry = 18;
    vm_ip += 0x6;
    /* 0x1776ca..0x1776cd: exact_instruction, entry=18, bytes=a80bf3; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x1776cd..0x1776d1: exact_instruction, entry=337, bytes=18541b0a; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x1776d1..0x1776d5: exact_instruction, entry=123, bytes=08bae801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x1776d5..0x1776d9: exact_instruction, entry=340, bytes=7e407900; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x1776d9..0x1776dc: exact_instruction, entry=18, bytes=584a46; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x1776dc..0x1776e0: exact_instruction, entry=123, bytes=0e6ce801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x1776e0..0x1776e4: exact_instruction, entry=189, bytes=8ec2f8df; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x1776e4..0x1776e7: exact_instruction, entry=307, bytes=3abdae; next = 161@0x9975a:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x1776e7..0x1776eb: exact_instruction, entry=161, bytes=daefe801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x1776eb..0x1776ee: exact_instruction, entry=28, bytes=100809; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x1776ee..0x1776f2: exact_instruction, entry=258, bytes=9c1e4533; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x1776f2..0x1776f6: exact_instruction, entry=123, bytes=e627e801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x1776f6..0x1776f9: exact_instruction, entry=18, bytes=a8063a; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x1776f9..0x1776fd: exact_instruction, entry=189, bytes=40a34ca0; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x1776fd..0x177701: exact_instruction, entry=123, bytes=4e77e801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x177701..0x177705: exact_instruction, entry=189, bytes=e630a8d4; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x177705..0x177708: exact_instruction, entry=297, bytes=750eae; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0x177708..0x17770c: exact_instruction, entry=158, bytes=e80173f7; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x17770c..0x17770f: exact_instruction, entry=66, bytes=fb402a; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x17770f..0x177713: exact_instruction, entry=258, bytes=38ee1521; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0x177713..0x177717: exact_instruction, entry=184, bytes=00d7e801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177717..0x17771a: exact_instruction, entry=215, bytes=1008c8; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x17771a..0x17771e: exact_instruction, entry=258, bytes=02d82c03; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0x17771e..0x177722: exact_instruction, entry=184, bytes=eafce801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177722..0x177725: exact_instruction, entry=215, bytes=e805c8; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x177725..0x177729: exact_instruction, entry=189, bytes=85e078a2; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x177729..0x17772d: exact_instruction, entry=161, bytes=d673e801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x17772d..0x177731: exact_instruction, entry=189, bytes=b70b28a0; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177731..0x177734: exact_instruction, entry=215, bytes=c0055c; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x177734..0x177738: exact_instruction, entry=184, bytes=6473e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x177738..0x17773c: exact_instruction, entry=340, bytes=087b2301; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x17773c..0x17773f: exact_instruction, entry=185, bytes=fc2e3a; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x17773f..0x177743: exact_instruction, entry=123, bytes=da5ce801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x177743..0x177747: exact_instruction, entry=258, bytes=eea57601; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x177747..0x17774a: exact_instruction, entry=307, bytes=c455aa; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0x17774a..0x17774e: exact_instruction, entry=20, bytes=e801c67e; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x17774e..0x177751: exact_instruction, entry=28, bytes=880a16; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x177751..0x177755: exact_instruction, entry=337, bytes=44f59de1; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x177755..0x177759: exact_instruction, entry=161, bytes=7ecfe801; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x177759..0x17775c: exact_instruction, entry=66, bytes=8c87ec; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x17775c..0x177760: exact_instruction, entry=64, bytes=c9b2ea1a; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x177760..0x177764: exact_instruction, entry=161, bytes=fe4de801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x177764..0x177767: exact_instruction, entry=18, bytes=c22314; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x177767..0x17776b: exact_instruction, entry=114, bytes=53b33cfc; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x17776b..0x17776f: exact_instruction, entry=176, bytes=e8019296; next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 356;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x17776f, coverage=hidden_span_of_14:1 */
    vm_unresolved_synthetic_tail(vm, 0x17776f);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p023_bb_0126(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 126: 0x17777d..0x177930; rows=114, terminal=exact_instruction */
    /* 0x17777d..0x17777f: exact_instruction, entry=165, bytes=1c00; next = 28@0x7e390:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 28;
    vm_ip += 0x2;
    /* 0x17777f..0x177782: exact_instruction, entry=28, bytes=600810; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x177782..0x177786: exact_instruction, entry=268, bytes=6918d969; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x177786..0x17778a: exact_instruction, entry=258, bytes=26bec75b; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x17778a..0x17778e: exact_instruction, entry=26, bytes=027be801; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x17778e..0x177791: exact_instruction, entry=297, bytes=1f2012; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x177791..0x177795: exact_instruction, entry=258, bytes=4a3460ab; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x177795..0x177799: exact_instruction, entry=196, bytes=f05914f7; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x177799..0x17779d: exact_instruction, entry=26, bytes=6663e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x17779d..0x1777a0: exact_instruction, entry=28, bytes=580698; next = 203@0xa1484:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 203;
    vm_ip += 0x3;
    /* 0x1777a0..0x1777a4: exact_instruction, entry=203, bytes=079a35b7; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x1777a4..0x1777a8: exact_instruction, entry=64, bytes=e168f545; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x1777a8..0x1777ac: exact_instruction, entry=315, bytes=e80131f5; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x1777ac..0x1777b0: exact_instruction, entry=168, bytes=e467ced8; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x1777b0..0x1777b3: exact_instruction, entry=307, bytes=cd45ad; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x1777b3..0x1777b7: exact_instruction, entry=114, bytes=5a290b6b; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x1777b7..0x1777bb: exact_instruction, entry=315, bytes=e80199f4; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x1777bb..0x1777bf: exact_instruction, entry=157, bytes=97052301; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x1777bf..0x1777c2: exact_instruction, entry=199, bytes=62f2ad; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x1777c2..0x1777c6: exact_instruction, entry=337, bytes=37178644; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x1777c6..0x1777ca: exact_instruction, entry=243, bytes=a59ee801; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x1777ca..0x1777ce: exact_instruction, entry=196, bytes=1d6b04f7; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x1777ce..0x1777d1: exact_instruction, entry=28, bytes=10080b; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x1777d1..0x1777d5: exact_instruction, entry=258, bytes=d249fbc3; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x1777d5..0x1777d9: exact_instruction, entry=243, bytes=cd57e801; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x1777d9..0x1777dd: exact_instruction, entry=333, bytes=abf5cb00; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x1777dd..0x1777e0: exact_instruction, entry=215, bytes=000200; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x1777e0..0x1777e4: exact_instruction, entry=64, bytes=1f96aeb3; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x1777e4..0x1777e8: exact_instruction, entry=315, bytes=e801c9f6; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x1777e8..0x1777eb: exact_instruction, entry=215, bytes=00023f; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x1777eb..0x1777ef: exact_instruction, entry=64, bytes=51ad1403; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x1777ef..0x1777f3: exact_instruction, entry=196, bytes=eee33ce0; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x1777f3..0x1777f7: exact_instruction, entry=287, bytes=4c99e801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x1777f7..0x1777fa: exact_instruction, entry=307, bytes=9bb5ab; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x1777fa..0x1777fe: exact_instruction, entry=64, bytes=1397d377; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x1777fe..0x177802: exact_instruction, entry=157, bytes=bfa81300; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x177802..0x177806: exact_instruction, entry=26, bytes=86c1e801; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x177806..0x17780a: exact_instruction, entry=43, bytes=9b18e766; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x17780a..0x17780e: exact_instruction, entry=340, bytes=b6bd9d01; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x17780e..0x177811: exact_instruction, entry=297, bytes=669da9; next = 26@0x7dbbb:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 26;
    vm_ip += 0x3;
    /* 0x177811..0x177815: exact_instruction, entry=26, bytes=42c3e801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x177815..0x177819: exact_instruction, entry=337, bytes=738dc9a9; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x177819..0x17781c: exact_instruction, entry=66, bytes=145cac; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x17781c..0x177820: exact_instruction, entry=268, bytes=e32aa92b; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x177820..0x177824: exact_instruction, entry=305, bytes=d019e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177824..0x177827: exact_instruction, entry=28, bytes=880a00; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x177827..0x17782b: exact_instruction, entry=337, bytes=1cf5e5f1; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x17782b..0x17782f: exact_instruction, entry=172, bytes=640be30a; next = 26@0x7dbbb:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 26;
    vm_ip += 0x4;
    /* 0x17782f..0x177833: exact_instruction, entry=26, bytes=ba70e801; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x177833..0x177837: exact_instruction, entry=196, bytes=590ed4b9; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x177837..0x17783b: exact_instruction, entry=114, bytes=f3833cce; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x17783b..0x17783e: exact_instruction, entry=66, bytes=99af0e; next = 26@0x7dbbb:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 26;
    vm_ip += 0x3;
    /* 0x17783e..0x177842: exact_instruction, entry=26, bytes=c63de801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x177842..0x177846: exact_instruction, entry=337, bytes=d36d196c; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x177846..0x17784a: exact_instruction, entry=168, bytes=e6f623d8; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x17784a..0x17784d: exact_instruction, entry=307, bytes=fe8db3; next = 315@0xb9451:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x17784d..0x177851: exact_instruction, entry=315, bytes=e80129f6; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x177851..0x177855: exact_instruction, entry=203, bytes=079a169e; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x177855..0x177859: exact_instruction, entry=64, bytes=51fbf566; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x177859..0x17785c: exact_instruction, entry=185, bytes=278b3a; next = 315@0xb9451:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x17785c..0x177860: exact_instruction, entry=315, bytes=e80199f5; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x177860..0x177864: exact_instruction, entry=189, bytes=4bcbbc96; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x177864..0x177868: exact_instruction, entry=333, bytes=bff5b300; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x177868..0x17786b: exact_instruction, entry=185, bytes=58843a; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 287;
    vm_ip += 0x3;
    /* 0x17786b..0x17786f: exact_instruction, entry=287, bytes=b43de801; next = 167@0x9a8d2:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 167;
    vm_ip += 0x4;
    /* 0x17786f..0x177875: exact_instruction, entry=167, bytes=e8013d01b4f7; next = 295@0xb60e0:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) ^ vm->state ^ 0x5f92615u;
    next_entry = 295;
    vm_ip += 0x6;
    /* 0x177875..0x17787a: exact_instruction, entry=295, bytes=e80112d410; next = 260@0xae90b:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) - 0x396ecbf2u;
    next_entry = 260;
    vm_ip += 0x5;
    /* 0x17787a..0x17787e: exact_instruction, entry=260, bytes=dc024001; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u - U16(vm->ip + 0x0u) - vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u ^ 0x470c080du;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x17787e..0x177881: exact_instruction, entry=307, bytes=218db4; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x177881..0x177885: exact_instruction, entry=347, bytes=d1877127; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x177885..0x177889: exact_instruction, entry=157, bytes=fbd76800; next = 49@0x82820:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0x177889..0x17788e: exact_instruction, entry=49, bytes=00e8683d01; next = 108@0x8f24b:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x17788e..0x177890: exact_instruction, entry=108, bytes=886a; next = 157@0x98a9a:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 157;
    vm_ip += 0x2;
    /* 0x177890..0x177894: exact_instruction, entry=157, bytes=f3156800; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x177894..0x177898: exact_instruction, entry=347, bytes=ad806f02; next = 253@0xacfb1:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 253;
    vm_ip += 0x4;
    /* 0x177898..0x17789e: exact_instruction, entry=253, bytes=46c1e0aa9a94; next = 297@0xb64d7:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x764111b0u + 0x6d2270cbu + U32(vm->ip + 0x2u) ^ vm->flags + vm->flags | 0x62c3b0ddu | 0x2b96d1d1u & 0x2d46e2e3u ^ U16(vm->ip + 0x0u) + 0x7c5d4802u;
    next_entry = 297;
    vm_ip += 0x6;
    /* 0x17789e..0x1778a1: exact_instruction, entry=297, bytes=05d55d; next = 320@0xbada5:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 320;
    vm_ip += 0x3;
    /* 0x1778a1..0x1778a6: exact_instruction, entry=320, bytes=003d01975f; next = 352@0xc1ec4:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags - vm->flags - 0x7e143884u;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x1778a6..0x1778a8: exact_instruction, entry=352, bytes=04fc; next = 258@0xadf2c:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 258;
    vm_ip += 0x2;
    /* 0x1778a8..0x1778ac: exact_instruction, entry=258, bytes=1360442b; next = 128@0x9299b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 128;
    vm_ip += 0x4;
    /* 0x1778ac..0x1778b1: exact_instruction, entry=128, bytes=3a79c529ac; next = 157@0x98a9a:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu - U16(vm->ip + 0x1u) + vm->state & vm->flags & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu + vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x4e6b72c6u | 0x7b467141u & U16(vm->ip + 0x3u) ^ vm->state & vm->flags & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu - U16(vm->ip + 0x1u) + vm->state & vm->flags & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu + vm->flags ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x4e6b72c6u | 0x7b467141u + 0x539da50eu;
    next_entry = 157;
    vm_ip += 0x5;
    /* 0x1778b1..0x1778b5: exact_instruction, entry=157, bytes=a67fb300; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x1778b5..0x1778b8: exact_instruction, entry=199, bytes=3bf856; next = 301@0xb708d:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 301;
    vm_ip += 0x3;
    /* 0x1778b8..0x1778bd: exact_instruction, entry=301, bytes=003d01df23; next = 256@0xad849:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x1778bd..0x1778bf: exact_instruction, entry=256, bytes=83b0; next = 154@0x97ce6:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 154;
    vm_ip += 0x2;
    /* 0x1778bf..0x1778c3: exact_instruction, entry=154, bytes=e1b95701; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x1778c3..0x1778c6: exact_instruction, entry=199, bytes=1f1bfa; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x1778c6..0x1778ca: exact_instruction, entry=347, bytes=8d00ad80; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x1778ca..0x1778ce: exact_instruction, entry=333, bytes=5ff16800; next = 49@0x82820:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0x1778ce..0x1778d3: exact_instruction, entry=49, bytes=00d8803d01; next = 144@0x95887:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x1778d3..0x1778d5: exact_instruction, entry=144, bytes=ef97; next = 43@0x8173d:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 43;
    vm_ip += 0x2;
    /* 0x1778d5..0x1778d9: exact_instruction, entry=43, bytes=9c7f3801; next = 345@0xc02e4:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 345;
    vm_ip += 0x4;
    /* 0x1778d9..0x1778df: exact_instruction, entry=345, bytes=f0eb3818fcf6; next = 199@0xa0631:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags + U16(vm->ip + 0x0u) + vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags;
    next_entry = 199;
    vm_ip += 0x6;
    /* 0x1778df..0x1778e2: exact_instruction, entry=199, bytes=0f4f2a; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x1778e2..0x1778e6: exact_instruction, entry=340, bytes=d4146800; next = 237@0xa8e1f:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 237;
    vm_ip += 0x4;
    /* 0x1778e6..0x1778eb: exact_instruction, entry=237, bytes=00e1223d01; next = 173@0x9ba74:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x1778eb..0x1778ed: exact_instruction, entry=173, bytes=578c; next = 185@0x9d964:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 185;
    vm_ip += 0x2;
    /* 0x1778ed..0x1778f0: exact_instruction, entry=185, bytes=7bae3a; next = 208@0xa2361:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 208;
    vm_ip += 0x3;
    /* 0x1778f0..0x1778f5: exact_instruction, entry=208, bytes=3a1b7f8d9f; next = 196@0x9fbcd:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du - U16(vm->ip + 0x3u) - vm->state + vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & vm->flags - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ vm->state + 0x7ad87935u ^ 0x39b69246u ^ vm->state | 0x7a909dc0u ^ 0x58abcfc7u | 0x7be050bu - 0x790391ceu & 0x37c3d0a5u | 0x73f21f4du;
    next_entry = 196;
    vm_ip += 0x5;
    /* 0x1778f5..0x1778f9: exact_instruction, entry=196, bytes=49c60df5; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x1778f9..0x1778fd: exact_instruction, entry=189, bytes=98f9ccd8; next = 301@0xb708d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 301;
    vm_ip += 0x4;
    /* 0x1778fd..0x177902: exact_instruction, entry=301, bytes=003d01dff0; next = 144@0x95887:1, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x177902..0x177904: exact_instruction, entry=144, bytes=9f94; next = 140@0x94e5a:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 140;
    vm_ip += 0x2;
    /* 0x177904..0x17790a: exact_instruction, entry=140, bytes=a2ab830c183a; next = 185@0x9d964:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    next_entry = 185;
    vm_ip += 0x6;
    /* 0x17790a..0x17790d: exact_instruction, entry=185, bytes=1afc3a; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x17790d..0x177911: exact_instruction, entry=340, bytes=1812b300; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x177911..0x177915: exact_instruction, entry=172, bytes=0d32bb0c; next = 209@0xa2935:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 209;
    vm_ip += 0x4;
    /* 0x177915..0x17791a: exact_instruction, entry=209, bytes=800f3d0185; next = 352@0xc1ec4:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x57058be5u ^ 0x36c108d8u | 0x22939484u ^ 0x55c2f3a2u - U16(vm->ip + 0x0u) ^ vm->state & vm->flags | 0x57058be5u ^ 0x36c108d8u | 0x22939484u ^ 0x55c2f3a2u;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x17791a..0x17791c: exact_instruction, entry=352, bytes=1adb; next = 260@0xae90b:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 260;
    vm_ip += 0x2;
    /* 0x17791c..0x177920: exact_instruction, entry=260, bytes=9e0db200; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u - U16(vm->ip + 0x0u) - vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u ^ 0x470c080du;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x177920..0x177924: exact_instruction, entry=172, bytes=f99ddb0f; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x177924..0x177928: exact_instruction, entry=189, bytes=580470dc; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x177928..0x17792b: exact_instruction, entry=66, bytes=d9390e; next = 122@0x9170d:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 122;
    vm_ip += 0x3;
    /* 0x17792b..0x177930: exact_instruction, entry=122, bytes=a03d3d01a1; next = 334@0xbdd18:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) + vm->state + vm->flags + 0x1af9be18u;
    next_entry = 334;
    vm_ip += 0x5;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x177930, coverage=hidden_span_of_16:1 */
    vm_unresolved_synthetic_tail(vm, 0x177930);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p023_bb_0127(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 127: 0x177940..0x177aeb; rows=113, terminal=exact_instruction */
    /* 0x177940..0x177944: exact_instruction, entry=43, bytes=30749403; next = 121@0x91379:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 121;
    vm_ip += 0x4;
    /* 0x177944..0x177948: exact_instruction, entry=121, bytes=ec5f7af8; next = 183@0x9d495:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau + U16(vm->ip + 0x0u) + vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau - vm->flags;
    next_entry = 183;
    vm_ip += 0x4;
    /* 0x177948..0x17794c: exact_instruction, entry=183, bytes=e8012825; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0xfaa325cu ^ 0x694e1f66u | U16(vm->ip + 0x2u) - vm->state + 0xfaa325cu ^ 0x694e1f66u - 0x1aed554cu;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x17794c..0x177950: exact_instruction, entry=189, bytes=ca9ce89d; next = 83@0x8947b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 83;
    vm_ip += 0x4;
    /* 0x177950..0x177955: exact_instruction, entry=83, bytes=a6ba003d01; next = 352@0xc1ec4:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x177955..0x177957: exact_instruction, entry=352, bytes=b4e3; next = 64@0x85059:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 64;
    vm_ip += 0x2;
    /* 0x177957..0x17795b: exact_instruction, entry=64, bytes=e72c53bc; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x17795b..0x17795f: exact_instruction, entry=157, bytes=ebcd6800; next = 124@0x91e81:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 124;
    vm_ip += 0x4;
    /* 0x17795f..0x177965: exact_instruction, entry=124, bytes=714800262fc1; next = 18@0x7be9b:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u - U16(vm->ip + 0x4u) + vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ 0x3654c1a7u;
    next_entry = 18;
    vm_ip += 0x6;
    /* 0x177965..0x177968: exact_instruction, entry=18, bytes=008f0b; next = 319@0xba72f:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 319;
    vm_ip += 0x3;
    /* 0x177968..0x17796d: exact_instruction, entry=319, bytes=3d01968400; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + U16(vm->ip + 0x2u) + vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + 0x7f20b820u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x17796d..0x17796f: exact_instruction, entry=257, bytes=cfb4; next = 157@0x98a9a:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 157;
    vm_ip += 0x2;
    /* 0x17796f..0x177973: exact_instruction, entry=157, bytes=6bd1b300; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x177973..0x177977: exact_instruction, entry=258, bytes=4287a703; next = 222@0xa5f3c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 222;
    vm_ip += 0x4;
    /* 0x177977..0x17797c: exact_instruction, entry=222, bytes=1038597050; next = 28@0x7e390:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags | 0x11da3648u & 0x169ceafau & U16(vm->ip + 0x0u) - vm->state + vm->flags | 0x11da3648u & 0x169ceafau + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u | 0x39a63024u + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u + 0x17d780cau ^ U16(vm->ip + 0x2u) + vm->state + vm->flags | 0x11da3648u & 0x169ceafau & U16(vm->ip + 0x0u) - vm->state + vm->flags | 0x11da3648u & 0x169ceafau + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u | 0x39a63024u + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u + 0x17d780cau - 0x29e369dfu;
    next_entry = 28;
    vm_ip += 0x5;
    /* 0x17797c..0x17797f: exact_instruction, entry=28, bytes=680876; next = 269@0xb045b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 269;
    vm_ip += 0x3;
    /* 0x17797f..0x177984: exact_instruction, entry=269, bytes=003d012fb6; next = 144@0x95887:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + U16(vm->ip + 0x3u) + vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + 0x4faa382u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x177984..0x177986: exact_instruction, entry=144, bytes=5f9e; next = 349@0xc140b:1, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 349;
    vm_ip += 0x2;
    /* 0x177986..0x17798a: exact_instruction, entry=349, bytes=1fbf2009; next = 292@0xb540f:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x37932789u | 0x16ca0efdu ^ 0x78372234u & U16(vm->ip + 0x0u) ^ vm->state & vm->flags | 0x37932789u | 0x16ca0efdu ^ 0x78372234u - vm->flags + vm->flags + 0x5b8191bu - 0x48cf2626u - 0x7444487fu | 0x1897f25cu | vm->flags + 0x5b8191bu - 0x48cf2626u - 0x7444487fu ^ vm->state & vm->flags | 0x37932789u | 0x16ca0efdu ^ 0x78372234u & U16(vm->ip + 0x0u) ^ vm->state & vm->flags | 0x37932789u | 0x16ca0efdu ^ 0x78372234u - vm->flags + vm->flags + 0x5b8191bu - 0x48cf2626u - 0x7444487fu | 0x18eb935cu | 0x6cbcf01au | 0x6e5025ccu + U16(vm->ip + 0x2u);
    next_entry = 292;
    vm_ip += 0x4;
    /* 0x17798a..0x17798f: exact_instruction, entry=292, bytes=50301c14d0; next = 28@0x7e390:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + U16(vm->ip + 0x1u) - vm->state | vm->flags & U16(vm->ip + 0x3u) ^ vm->state | vm->flags + U16(vm->ip + 0x1u) - vm->state | vm->flags + 0x628c34bcu;
    next_entry = 28;
    vm_ip += 0x5;
    /* 0x17798f..0x177992: exact_instruction, entry=28, bytes=d00484; next = 154@0x97ce6:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 154;
    vm_ip += 0x3;
    /* 0x177992..0x177996: exact_instruction, entry=154, bytes=99066f14; next = 49@0x82820:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0x177996..0x17799b: exact_instruction, entry=49, bytes=0080423d01; next = 160@0x994cf:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x17799b..0x17799d: exact_instruction, entry=160, bytes=a02c; next = 258@0xadf2c:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 258;
    vm_ip += 0x2;
    /* 0x17799d..0x1779a1: exact_instruction, entry=258, bytes=6e828ec2; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x1779a1..0x1779a5: exact_instruction, entry=168, bytes=ff68e6d2; next = 121@0x91379:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 121;
    vm_ip += 0x4;
    /* 0x1779a5..0x1779a9: exact_instruction, entry=121, bytes=18604c10; next = 180@0x9cf32:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau + U16(vm->ip + 0x0u) + vm->state ^ vm->flags + 0x3154e54au - 0x288d43bau - vm->flags;
    next_entry = 180;
    vm_ip += 0x4;
    /* 0x1779a9..0x1779ad: exact_instruction, entry=180, bytes=330ce801; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x0u) + 0x7920fa05u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x1779ad..0x1779b0: exact_instruction, entry=199, bytes=7296bd; next = 83@0x8947b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 83;
    vm_ip += 0x3;
    /* 0x1779b0..0x1779b5: exact_instruction, entry=83, bytes=bf31003d01; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x1779b5..0x1779b7: exact_instruction, entry=257, bytes=9705; next = 185@0x9d964:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 185;
    vm_ip += 0x2;
    /* 0x1779b7..0x1779ba: exact_instruction, entry=185, bytes=f8f13a; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x1779ba..0x1779be: exact_instruction, entry=189, bytes=bf76aca3; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x1779be..0x1779c2: exact_instruction, entry=43, bytes=5c31e046; next = 124@0x91e81:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 124;
    vm_ip += 0x4;
    /* 0x1779c2..0x1779c8: exact_instruction, entry=124, bytes=7c88001b97c3; next = 70@0x8610e:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u - U16(vm->ip + 0x4u) + vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ 0x3654c1a7u;
    next_entry = 70;
    vm_ip += 0x6;
    /* 0x1779c8..0x1779cd: exact_instruction, entry=70, bytes=79b2003d01; next = 108@0x8f24b:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u ^ vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u | 0x528cef01u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x1779cd..0x1779cf: exact_instruction, entry=108, bytes=12bf; next = 146@0x96407:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 146;
    vm_ip += 0x2;
    /* 0x1779cf..0x1779d4: exact_instruction, entry=146, bytes=3a2a891b01; next = 64@0x85059:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags ^ 0x2e312e01u & vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u ^ U16(vm->ip + 0x3u) + vm->flags & 0xa6d4251u ^ 0x409c2e61u ^ U16(vm->ip + 0x1u) - vm->state + vm->flags ^ 0x2e312e01u & vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u ^ U16(vm->ip + 0x3u) + vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x2cff1885u;
    next_entry = 64;
    vm_ip += 0x5;
    /* 0x1779d4..0x1779d8: exact_instruction, entry=64, bytes=071b2637; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x1779d8..0x1779db: exact_instruction, entry=18, bytes=8c8be3; next = 333@0xbd8af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x1779db..0x1779df: exact_instruction, entry=333, bytes=e3efb300; next = 3@0x78c77:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 3;
    vm_ip += 0x4;
    /* 0x1779df..0x1779e4: exact_instruction, entry=3, bytes=9904003d01; next = 256@0xad849:1, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu ^ U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu + 0x4bc0d288u;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x1779e4..0x1779e6: exact_instruction, entry=256, bytes=861c; next = 30@0x7e849:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 30;
    vm_ip += 0x2;
    /* 0x1779e6..0x1779ea: exact_instruction, entry=30, bytes=c9e7e300; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags & 0x614d4b17u + 0x64fd160cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x1779ea..0x1779ed: exact_instruction, entry=215, bytes=40051b; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x1779ed..0x1779f1: exact_instruction, entry=168, bytes=5056eed9; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x1779f1..0x1779f5: exact_instruction, entry=347, bytes=4609cc46; next = 269@0xb045b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 269;
    vm_ip += 0x4;
    /* 0x1779f5..0x1779fa: exact_instruction, entry=269, bytes=003d0160a2; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + U16(vm->ip + 0x3u) + vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + 0x4faa382u;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x1779fa..0x1779fc: exact_instruction, entry=257, bytes=7fba; next = 345@0xc02e4:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 345;
    vm_ip += 0x2;
    /* 0x1779fc..0x177a02: exact_instruction, entry=345, bytes=316048b3dd7c; next = 185@0x9d964:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags + U16(vm->ip + 0x0u) + vm->state + U32(vm->ip + 0x2u) ^ vm->state + vm->flags;
    next_entry = 185;
    vm_ip += 0x6;
    /* 0x177a02..0x177a05: exact_instruction, entry=185, bytes=80a63a; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x177a05..0x177a09: exact_instruction, entry=114, bytes=b2870352; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x177a09..0x177a0d: exact_instruction, entry=43, bytes=1951152e; next = 358@0xc2d37:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 358;
    vm_ip += 0x4;
    /* 0x177a0d..0x177a12: exact_instruction, entry=358, bytes=7d1a3d0100; next = 144@0x95887:1, ip += +0x5; validation=state_static=%;dispatch_static=%;ip_static=% */
    vm->state = vm->state + vm->flags - 0x3bcc6446u ^ 0x50eab96u - vm->flags + vm->flags | 0x4ea692e8u ^ vm->flags ^ vm->flags ^ 0x3b02b16cu + 0x63b77c87u | vm->flags | U16(vm->ip + 0x0u) ^ vm->state + vm->flags - 0x3bcc6446u ^ 0x50eab96u - vm->flags + vm->flags | 0x4ea692e8u ^ vm->flags ^ vm->flags ^ 0x3b02b16cu + 0x63b77c87u | vm->flags - 0x45b1cde1u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x177a12..0x177a14: exact_instruction, entry=144, bytes=cf9a; next = 199@0xa0631:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 199;
    vm_ip += 0x2;
    /* 0x177a14..0x177a17: exact_instruction, entry=199, bytes=eae93d; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x177a17..0x177a1b: exact_instruction, entry=337, bytes=df70fe58; next = 300@0xb6c36:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 300;
    vm_ip += 0x4;
    /* 0x177a1b..0x177a1f: exact_instruction, entry=300, bytes=359d1364; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u ^ U16(vm->ip + 0x2u) - vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x177a1f..0x177a23: exact_instruction, entry=43, bytes=4c19f063; next = 220@0xa522e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 220;
    vm_ip += 0x4;
    /* 0x177a23..0x177a28: exact_instruction, entry=220, bytes=003d010339; next = 144@0x95887:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - vm->state | vm->flags + 0x46462807u & 0x2332d827u - vm->flags - vm->state | vm->flags & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x177a28..0x177a2a: exact_instruction, entry=144, bytes=c795; next = 114@0x90319:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 114;
    vm_ip += 0x2;
    /* 0x177a2a..0x177a2e: exact_instruction, entry=114, bytes=29611e26; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177a2e..0x177a31: exact_instruction, entry=215, bytes=800504; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x177a31..0x177a35: exact_instruction, entry=176, bytes=e8010142; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x177a35..0x177a38: exact_instruction, entry=297, bytes=08cf22; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x177a38..0x177a3c: exact_instruction, entry=337, bytes=2753af2e; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x177a3c..0x177a40: exact_instruction, entry=123, bytes=e9b1e801; next = 40@0x8115d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 40;
    vm_ip += 0x4;
    /* 0x177a40..0x177a46: exact_instruction, entry=40, bytes=e8013d01c0fc; next = 64@0x85059:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x4u) ^ vm->state;
    next_entry = 64;
    vm_ip += 0x6;
    /* 0x177a46..0x177a4a: exact_instruction, entry=64, bytes=93ad6b10; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x177a4a..0x177a4d: exact_instruction, entry=66, bytes=d9746a; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0x177a4d..0x177a51: exact_instruction, entry=158, bytes=e8012489; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x177a51..0x177a55: exact_instruction, entry=347, bytes=a40e8080; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177a55..0x177a58: exact_instruction, entry=28, bytes=d80346; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x177a58..0x177a5c: exact_instruction, entry=123, bytes=b674e801; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x177a5c..0x177a60: exact_instruction, entry=258, bytes=b9f1c91b; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x177a60..0x177a63: exact_instruction, entry=18, bytes=d02296; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0x177a63..0x177a67: exact_instruction, entry=20, bytes=e8012577; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x177a67..0x177a6b: exact_instruction, entry=258, bytes=842c25eb; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x177a6b..0x177a6e: exact_instruction, entry=18, bytes=0036aa; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x177a6e..0x177a72: exact_instruction, entry=184, bytes=5a35e801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x177a72..0x177a76: exact_instruction, entry=114, bytes=fc5b929c; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177a76..0x177a79: exact_instruction, entry=215, bytes=800528; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x177a79..0x177a7d: exact_instruction, entry=176, bytes=e8014d83; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x177a7d..0x177a81: exact_instruction, entry=347, bytes=580d2c84; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x177a81..0x177a84: exact_instruction, entry=199, bytes=370ef2; next = 161@0x9975a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x177a84..0x177a88: exact_instruction, entry=161, bytes=ba73e801; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x177a88..0x177a8b: exact_instruction, entry=185, bytes=d3e53a; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x177a8b..0x177a8f: exact_instruction, entry=347, bytes=ee8d9a00; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x177a8f..0x177a93: exact_instruction, entry=176, bytes=e8012a46; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x177a93..0x177a96: exact_instruction, entry=307, bytes=7a3db4; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x177a96..0x177a9a: exact_instruction, entry=337, bytes=5fe538ff; next = 174@0x9bd8f:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x177a9a..0x177a9e: exact_instruction, entry=174, bytes=9b5ce801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177a9e..0x177aa1: exact_instruction, entry=28, bytes=90036e; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x177aa1..0x177aa5: exact_instruction, entry=114, bytes=c949b603; next = 158@0x99029:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0x177aa5..0x177aa9: exact_instruction, entry=158, bytes=e801f2fc; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177aa9..0x177aac: exact_instruction, entry=28, bytes=d80a42; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x177aac..0x177ab0: exact_instruction, entry=347, bytes=378f6b03; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x177ab0..0x177ab4: exact_instruction, entry=123, bytes=c00ee801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177ab4..0x177ab7: exact_instruction, entry=28, bytes=a00a25; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x177ab7..0x177abb: exact_instruction, entry=340, bytes=845e2301; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0x177abb..0x177abf: exact_instruction, entry=184, bytes=b88be801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x177abf..0x177ac3: exact_instruction, entry=337, bytes=bf9c80c1; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x177ac3..0x177ac6: exact_instruction, entry=66, bytes=6dba08; next = 161@0x9975a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x177ac6..0x177aca: exact_instruction, entry=161, bytes=8a57e801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x177aca..0x177acd: exact_instruction, entry=307, bytes=f89daf; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x177acd..0x177ad1: exact_instruction, entry=189, bytes=79384ce9; next = 123@0x91a59:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 123;
    vm_ip += 0x4;
    /* 0x177ad1..0x177ad5: exact_instruction, entry=123, bytes=1633e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x177ad5..0x177ad9: exact_instruction, entry=340, bytes=38c3ab00; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177ad9..0x177adc: exact_instruction, entry=215, bytes=7005c8; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x177adc..0x177ae0: exact_instruction, entry=174, bytes=8bb9e801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x177ae0..0x177ae4: exact_instruction, entry=64, bytes=68ed4943; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x177ae4..0x177ae7: exact_instruction, entry=18, bytes=08903a; next = 161@0x9975a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 161;
    vm_ip += 0x3;
    /* 0x177ae7..0x177aeb: exact_instruction, entry=161, bytes=92f5e801; next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 264;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x177aeb, coverage=hidden_span_of_14:1 */
    vm_unresolved_synthetic_tail(vm, 0x177aeb);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p023_bb_0128(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 128: 0x177af9..0x177c8a; rows=104, terminal=long_branch_forward */
    /* 0x177af9..0x177afb: exact_instruction, entry=354, bytes=1200; next = 18@0x7be9b:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 18;
    vm_ip += 0x2;
    /* 0x177afb..0x177afe: exact_instruction, entry=18, bytes=60083a; next = 268@0xb0007:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 268;
    vm_ip += 0x3;
    /* 0x177afe..0x177b02: exact_instruction, entry=268, bytes=a99fcd6c; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x177b02..0x177b06: exact_instruction, entry=337, bytes=dc6b65dc; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x177b06..0x177b0a: exact_instruction, entry=346, bytes=ece5e801; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x177b0a..0x177b0d: exact_instruction, entry=297, bytes=bc7f6a; next = 196@0x9fbcd:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 196;
    vm_ip += 0x3;
    /* 0x177b0d..0x177b11: exact_instruction, entry=196, bytes=87781c02; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x177b11..0x177b15: exact_instruction, entry=347, bytes=9331af68; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x177b15..0x177b19: exact_instruction, entry=315, bytes=e80129f6; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x177b19..0x177b1d: exact_instruction, entry=203, bytes=3f9e2537; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x177b1d..0x177b20: exact_instruction, entry=199, bytes=fbbcb6; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x177b20..0x177b24: exact_instruction, entry=64, bytes=c99689e6; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x177b24..0x177b28: exact_instruction, entry=287, bytes=7a3de801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x177b28..0x177b2c: exact_instruction, entry=189, bytes=a51f9c99; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x177b2c..0x177b2f: exact_instruction, entry=297, bytes=b95ec0; next = 333@0xbd8af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x177b2f..0x177b33: exact_instruction, entry=333, bytes=93d72800; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x177b33..0x177b37: exact_instruction, entry=243, bytes=6598e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177b37..0x177b3a: exact_instruction, entry=28, bytes=e80530; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x177b3a..0x177b3e: exact_instruction, entry=189, bytes=04f480ea; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x177b3e..0x177b42: exact_instruction, entry=196, bytes=576a1c00; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x177b42..0x177b46: exact_instruction, entry=287, bytes=04aee801; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x177b46..0x177b4a: exact_instruction, entry=168, bytes=a6d719d0; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x177b4a..0x177b4e: exact_instruction, entry=64, bytes=c7515738; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x177b4e..0x177b51: exact_instruction, entry=307, bytes=da85aa; next = 26@0x7dbbb:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 26;
    vm_ip += 0x3;
    /* 0x177b51..0x177b55: exact_instruction, entry=26, bytes=fe7ce801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177b55..0x177b58: exact_instruction, entry=215, bytes=d80a04; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x177b58..0x177b5c: exact_instruction, entry=347, bytes=77082f82; next = 172@0x9b68a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 172;
    vm_ip += 0x4;
    /* 0x177b5c..0x177b60: exact_instruction, entry=172, bytes=fb2de300; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x177b60..0x177b64: exact_instruction, entry=346, bytes=4b35e801; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x177b64..0x177b67: exact_instruction, entry=66, bytes=805cde; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x177b67..0x177b6b: exact_instruction, entry=189, bytes=7e7a80af; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x177b6b..0x177b6f: exact_instruction, entry=196, bytes=7094bcbd; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x177b6f..0x177b73: exact_instruction, entry=243, bytes=ee96e801; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x177b73..0x177b77: exact_instruction, entry=333, bytes=8bf61300; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177b77..0x177b7a: exact_instruction, entry=215, bytes=a00a00; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x177b7a..0x177b7e: exact_instruction, entry=340, bytes=5c411300; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x177b7e..0x177b82: exact_instruction, entry=33, bytes=e801ee86; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x177b82..0x177b86: exact_instruction, entry=258, bytes=8e011fbc; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x177b86..0x177b8a: exact_instruction, entry=157, bytes=03519d01; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177b8a..0x177b8d: exact_instruction, entry=28, bytes=98075f; next = 243@0xaab6a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 243;
    vm_ip += 0x3;
    /* 0x177b8d..0x177b91: exact_instruction, entry=243, bytes=4e12e801; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x177b91..0x177b95: exact_instruction, entry=337, bytes=b8b25e76; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x177b95..0x177b99: exact_instruction, entry=268, bytes=c206562b; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x177b99..0x177b9c: exact_instruction, entry=307, bytes=6fbdaa; next = 33@0x7f7c4:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 33;
    vm_ip += 0x3;
    /* 0x177b9c..0x177ba0: exact_instruction, entry=33, bytes=e801ccc3; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177ba0..0x177ba3: exact_instruction, entry=28, bytes=880ae0; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x177ba3..0x177ba7: exact_instruction, entry=337, bytes=a46d05f6; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x177ba7..0x177bab: exact_instruction, entry=43, bytes=ab12cf6f; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x177bab..0x177baf: exact_instruction, entry=305, bytes=999ae801; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x177baf..0x177bb3: exact_instruction, entry=333, bytes=83e29100; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x177bb3..0x177bb7: exact_instruction, entry=114, bytes=03a844f0; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x177bb7..0x177bba: exact_instruction, entry=199, bytes=174bfa; next = 346@0xc0535:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 346;
    vm_ip += 0x3;
    /* 0x177bba..0x177bbe: exact_instruction, entry=346, bytes=42a5e801; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x177bbe..0x177bc2: exact_instruction, entry=203, bytes=079a809a; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x177bc2..0x177bc6: exact_instruction, entry=64, bytes=9f003f65; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177bc6..0x177bc9: exact_instruction, entry=28, bytes=9807c4; next = 243@0xaab6a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 243;
    vm_ip += 0x3;
    /* 0x177bc9..0x177bcd: exact_instruction, entry=243, bytes=e69de801; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x177bcd..0x177bd1: exact_instruction, entry=168, bytes=780095d9; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x177bd1..0x177bd5: exact_instruction, entry=337, bytes=e8f77900; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x177bd5..0x177bd8: exact_instruction, entry=215, bytes=8809a8; next = 305@0xb78b0:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 305;
    vm_ip += 0x3;
    /* 0x177bd8..0x177bdc: exact_instruction, entry=305, bytes=b94be801; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x177bdc..0x177bdf: exact_instruction, entry=66, bytes=4a532a; next = 196@0x9fbcd:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 196;
    vm_ip += 0x3;
    /* 0x177bdf..0x177be3: exact_instruction, entry=196, bytes=9f60d5c1; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x177be3..0x177be7: exact_instruction, entry=114, bytes=e1b6bde5; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x177be7..0x177beb: exact_instruction, entry=346, bytes=3861e801; next = 338@0xbf128:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 338;
    vm_ip += 0x4;
    /* 0x177beb..0x177bf1: exact_instruction, entry=338, bytes=1b043d01e801; next = 351@0xc1d48:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x0u) - vm->state - 0x4bf8be0cu;
    next_entry = 351;
    vm_ip += 0x6;
    /* 0x177bf1..0x177bf6: exact_instruction, entry=351, bytes=e801590710; next = 332@0xbd36d:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) + vm->state - 0x7b3a2d18u;
    next_entry = 332;
    vm_ip += 0x5;
    /* 0x177bf6..0x177bfa: exact_instruction, entry=332, bytes=739767f4; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u ^ U16(vm->ip + 0x2u) ^ vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x42097e5du;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x177bfa..0x177bfe: exact_instruction, entry=64, bytes=b55c03d0; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177bfe..0x177c01: exact_instruction, entry=28, bytes=4005d9; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x177c01..0x177c05: exact_instruction, entry=168, bytes=2b5676d1; next = 79@0x885b0:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 79;
    vm_ip += 0x4;
    /* 0x177c05..0x177c0a: exact_instruction, entry=79, bytes=9e053d0100; next = 160@0x994cf:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x177c0a..0x177c0c: exact_instruction, entry=160, bytes=1922; next = 337@0xbec0e:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 337;
    vm_ip += 0x2;
    /* 0x177c0c..0x177c10: exact_instruction, entry=337, bytes=77e7e074; next = 239@0xa991e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 239;
    vm_ip += 0x4;
    /* 0x177c10..0x177c16: exact_instruction, entry=239, bytes=1821800046aa; next = 307@0xb8064:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - U16(vm->ip + 0x4u) + vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - 0x3650a0aeu;
    next_entry = 307;
    vm_ip += 0x6;
    /* 0x177c16..0x177c19: exact_instruction, entry=307, bytes=3af5ae; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x177c19..0x177c1d: exact_instruction, entry=168, bytes=68704ed1; next = 70@0x8610e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 70;
    vm_ip += 0x4;
    /* 0x177c1d..0x177c22: exact_instruction, entry=70, bytes=d9b0003d01; next = 160@0x994cf:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u ^ vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u | 0x528cef01u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x177c22..0x177c24: exact_instruction, entry=160, bytes=f123; next = 300@0xb6c36:1, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 300;
    vm_ip += 0x2;
    /* 0x177c24..0x177c28: exact_instruction, entry=300, bytes=f6fd45c0; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u ^ U16(vm->ip + 0x2u) - vm->state & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + vm->state & 0x2b7e7713u & 0x515f6307u + vm->flags & 0x742354du + 0x2ff05a2bu | vm->flags & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x177c28..0x177c2b: exact_instruction, entry=185, bytes=06f83a; next = 291@0xb4edd:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 291;
    vm_ip += 0x3;
    /* 0x177c2b..0x177c2f: exact_instruction, entry=291, bytes=22342316; next = 17@0x7bae9:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ U16(vm->ip + 0x0u) - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu | 0x55d764bbu ^ 0x17a0094au - 0x1f6881d8u | U16(vm->ip + 0x2u) + vm->state ^ vm->flags ^ U16(vm->ip + 0x0u) - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu - vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & vm->flags ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu | 0x55d764bbu ^ 0x17a0094au - 0x1f6881d8u + 0xa61c44cu;
    next_entry = 17;
    vm_ip += 0x4;
    /* 0x177c2f..0x177c34: exact_instruction, entry=17, bytes=86f93a0897; next = 3@0x78c77:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ 0x4365071cu & U16(vm->ip + 0x0u) ^ vm->state | vm->flags ^ 0x4365071cu + vm->flags ^ 0x4365071cu ^ 0x95f9698u + U16(vm->ip + 0x3u) - vm->state | vm->flags ^ 0x4365071cu & U16(vm->ip + 0x0u) ^ vm->state | vm->flags ^ 0x4365071cu + vm->flags ^ 0x4365071cu ^ 0x95f9698u;
    next_entry = 3;
    vm_ip += 0x5;
    /* 0x177c34..0x177c39: exact_instruction, entry=3, bytes=9104003d01; next = 256@0xad849:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu ^ U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x1c03cc82u - vm->flags | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu + 0x4bc0d288u;
    next_entry = 256;
    vm_ip += 0x5;
    /* 0x177c39..0x177c3b: exact_instruction, entry=256, bytes=f6b1; next = 203@0xa1484:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + vm->state ^ 0x3e93f8dbu + 0x1734aabdu ^ vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au | vm->flags - vm->state ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    next_entry = 203;
    vm_ip += 0x2;
    /* 0x177c3b..0x177c3f: exact_instruction, entry=203, bytes=079a04da; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x177c3f..0x177c43: exact_instruction, entry=64, bytes=5a42e422; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x177c43..0x177c46: exact_instruction, entry=28, bytes=d00498; next = 154@0x97ce6:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 154;
    vm_ip += 0x3;
    /* 0x177c46..0x177c4a: exact_instruction, entry=154, bytes=2096b06d; next = 49@0x82820:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 49;
    vm_ip += 0x4;
    /* 0x177c4a..0x177c4f: exact_instruction, entry=49, bytes=00687d3d01; next = 108@0x8f24b:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x177c4f..0x177c51: exact_instruction, entry=108, bytes=400e; next = 124@0x91e81:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 124;
    vm_ip += 0x2;
    /* 0x177c51..0x177c57: exact_instruction, entry=124, bytes=9ab700554fad; next = 157@0x98a9a:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u - U16(vm->ip + 0x4u) + vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ vm->flags + 0x57b29524u - 0x2c2f20afu - vm->state - 0x7c31e804u ^ vm->flags + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ 0x3654c1a7u;
    next_entry = 157;
    vm_ip += 0x6;
    /* 0x177c57..0x177c5b: exact_instruction, entry=157, bytes=8b2c6800; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x177c5b..0x177c5f: exact_instruction, entry=64, bytes=c2846873; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x177c5f..0x177c62: exact_instruction, entry=307, bytes=eab5af; next = 192@0x9f00a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 192;
    vm_ip += 0x3;
    /* 0x177c62..0x177c67: exact_instruction, entry=192, bytes=16f43d0100; next = 257@0xadbfd:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu - U16(vm->ip + 0x0u) ^ vm->state + vm->flags + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + vm->flags + vm->state + vm->flags ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu;
    next_entry = 257;
    vm_ip += 0x5;
    /* 0x177c67..0x177c69: exact_instruction, entry=257, bytes=af01; next = 66@0x855ff:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - vm->state - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    next_entry = 66;
    vm_ip += 0x2;
    /* 0x177c69..0x177c6c: exact_instruction, entry=66, bytes=12a8bc; next = 330@0xbc9b8:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 330;
    vm_ip += 0x3;
    /* 0x177c6c..0x177c71: exact_instruction, entry=330, bytes=d0023abf1d; next = 90@0x8b334:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6460b705u & 0x786588bau ^ 0x2897b354u + U16(vm->ip + 0x0u);
    next_entry = 90;
    vm_ip += 0x5;
    /* 0x177c71..0x177c75: exact_instruction, entry=90, bytes=9fef986d; next = 140@0x94e5a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + vm->flags + 0x1c1030c0u + vm->flags & 0x4b6fdae0u | 0x4357e3c2u & U16(vm->ip + 0x2u) - vm->state + vm->flags + vm->flags + 0x1c1030c0u + vm->flags & 0x4b6fdae0u | 0x4357e3c2u + vm->flags & 0x4b6fdae0u | 0x59296ab9u | vm->flags & 0x4b6fdae0u | 0x3296b63du ^ 0x6ee390ceu ^ U16(vm->ip + 0x0u) + 0x224914c1u;
    next_entry = 140;
    vm_ip += 0x4;
    /* 0x177c75..0x177c7b: exact_instruction, entry=140, bytes=46012d75bd26; next = 37@0x80685:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    next_entry = 37;
    vm_ip += 0x6;
    /* 0x177c7b..0x177c80: exact_instruction, entry=37, bytes=f97da33d01; next = 144@0x95887:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x504fc3du - 0x4eca0e49u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags + 0x504fc3du - 0x4eca0e49u ^ 0x384e1c86u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x177c80..0x177c82: exact_instruction, entry=144, bytes=379f; next = 308@0xb837c:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 308;
    vm_ip += 0x2;
    /* 0x177c82..0x179f43: long_branch_forward, entry=308, bytes=62010000c1220000; next = table[354], ip += 0x22c1; validation=file_backed_operand;source_state=transition_model */
    /* state preserved: exact */
    next_entry = (int)U32(vm->ip + 0x0);
    vm_ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* terminal CFG edge: decoded_control, target_vm_ip=0x179f43, coverage=- */
    vm_unresolved_synthetic_tail(vm, 0x179f43);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

void vm_program_atlas_023_decompiled(VMState *vm, uint64_t vm_ip) {
    switch (vm_ip) {
    case 0x177353: vmdec_p023_bb_0124(vm, vm_ip); return;
    case 0x1774c6: vmdec_p023_bb_0125(vm, vm_ip); return;
    case 0x17777d: vmdec_p023_bb_0126(vm, vm_ip); return;
    case 0x177940: vmdec_p023_bb_0127(vm, vm_ip); return;
    case 0x177af9: vmdec_p023_bb_0128(vm, vm_ip); return;
    default: vm_unresolved_synthetic_tail(vm, vm_ip); return;
    }
}
