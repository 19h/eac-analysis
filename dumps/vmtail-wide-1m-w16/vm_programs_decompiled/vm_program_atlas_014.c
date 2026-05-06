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

/* VM program atlas 14: 0x1209d2..0x120ebe */

static void vmdec_p014_bb_0070(VMState *vm, uint64_t vm_ip);
static void vmdec_p014_bb_0071(VMState *vm, uint64_t vm_ip);
static void vmdec_p014_bb_0072(VMState *vm, uint64_t vm_ip);

static void vmdec_p014_bb_0070(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 70: 0x1209d2..0x120af4; rows=78, terminal=exact_instruction */
    /* 0x1209d2..0x1209d4: exact_instruction, entry=354, bytes=4c01; next = 332@0xbd36d:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 332;
    vm_ip += 0x2;
    /* 0x1209d4..0x1209d8: exact_instruction, entry=332, bytes=1cd75fcc; next = 183@0x9d495:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u ^ U16(vm->ip + 0x2u) ^ vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x42097e5du;
    next_entry = 183;
    vm_ip += 0x4;
    /* 0x1209d8..0x1209dc: exact_instruction, entry=183, bytes=e80132fe; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0xfaa325cu ^ 0x694e1f66u | U16(vm->ip + 0x2u) - vm->state + 0xfaa325cu ^ 0x694e1f66u - 0x1aed554cu;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x1209dc..0x1209e0: exact_instruction, entry=333, bytes=77ea6800; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x1209e0..0x1209e4: exact_instruction, entry=340, bytes=37426800; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x1209e4..0x1209e7: exact_instruction, entry=297, bytes=b52e42; next = 79@0x885b0:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 79;
    vm_ip += 0x3;
    /* 0x1209e7..0x1209ec: exact_instruction, entry=79, bytes=6a433d0100; next = 108@0x8f24b:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u | U16(vm->ip + 0x0u) ^ vm->state - vm->flags ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | vm->flags ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ vm->flags ^ 0xc7e744fu + 0x60a9dba6u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x1209ec..0x1209ee: exact_instruction, entry=108, bytes=0806; next = 203@0xa1484:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 203;
    vm_ip += 0x2;
    /* 0x1209ee..0x1209f2: exact_instruction, entry=203, bytes=7f9f647a; next = 239@0xa991e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 239;
    vm_ip += 0x4;
    /* 0x1209f2..0x1209f8: exact_instruction, entry=239, bytes=62299031b6a8; next = 258@0xadf2c:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - U16(vm->ip + 0x4u) + vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu & U32(vm->ip + 0x0u) - vm->state + 0x40a7aa16u + vm->flags & 0x39d16b3eu - 0x3650a0aeu;
    next_entry = 258;
    vm_ip += 0x6;
    /* 0x1209f8..0x1209fc: exact_instruction, entry=258, bytes=cbead258; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x1209fc..0x1209ff: exact_instruction, entry=28, bytes=f8090e; next = 319@0xba72f:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 319;
    vm_ip += 0x3;
    /* 0x1209ff..0x120a04: exact_instruction, entry=319, bytes=3d01fe2a00; next = 144@0x95887:1, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + U16(vm->ip + 0x2u) + vm->state & vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu | 0x5ed258f1u | vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu ^ vm->flags | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & vm->state + 0x4fa9822eu + 0x2ba77993u + 0x7f20b820u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x120a04..0x120a06: exact_instruction, entry=144, bytes=779b; next = 189@0x9e7af:1, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 189;
    vm_ip += 0x2;
    /* 0x120a06..0x120a0a: exact_instruction, entry=189, bytes=7217f4e7; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x120a0a..0x120a0d: exact_instruction, entry=18, bytes=90243a; next = 146@0x96407:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 146;
    vm_ip += 0x3;
    /* 0x120a0d..0x120a12: exact_instruction, entry=146, bytes=3ac5bc38d4; next = 203@0xa1484:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags ^ 0x2e312e01u & vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u ^ U16(vm->ip + 0x3u) + vm->flags & 0xa6d4251u ^ 0x409c2e61u ^ U16(vm->ip + 0x1u) - vm->state + vm->flags ^ 0x2e312e01u & vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u ^ U16(vm->ip + 0x3u) + vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x2cff1885u;
    next_entry = 203;
    vm_ip += 0x5;
    /* 0x120a12..0x120a16: exact_instruction, entry=203, bytes=6f913f83; next = 301@0xb708d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 301;
    vm_ip += 0x4;
    /* 0x120a16..0x120a1b: exact_instruction, entry=301, bytes=003d013ff7; next = 108@0x8f24b:1, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x120a1b..0x120a1d: exact_instruction, entry=108, bytes=3603; next = 18@0x7be9b:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 18;
    vm_ip += 0x2;
    /* 0x120a1d..0x120a20: exact_instruction, entry=18, bytes=110e26; next = 154@0x97ce6:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 154;
    vm_ip += 0x3;
    /* 0x120a20..0x120a24: exact_instruction, entry=154, bytes=7677c204; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x120a24..0x120a28: exact_instruction, entry=347, bytes=fa0b5682; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x120a28..0x120a2c: exact_instruction, entry=43, bytes=48150c69; next = 269@0xb045b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 269;
    vm_ip += 0x4;
    /* 0x120a2c..0x120a31: exact_instruction, entry=269, bytes=003d0127c0; next = 198@0xa037e:1, ip += +0x5; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + U16(vm->ip + 0x3u) + vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + 0x4faa382u;
    next_entry = 198;
    vm_ip += 0x5;
    /* 0x120a31..0x120a33: exact_instruction, entry=198, bytes=d7c2; next = 258@0xadf2c:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u - U16(vm->ip + 0x0u) - vm->state + vm->flags - 0x5e173fc7u - 0x3cd02127u + vm->flags + 0x15b2dfa5u ^ 0x3fe99379u;
    next_entry = 258;
    vm_ip += 0x2;
    /* 0x120a33..0x120a37: exact_instruction, entry=258, bytes=c9d87eab; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120a37..0x120a3a: exact_instruction, entry=185, bytes=cb853a; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x120a3a..0x120a3e: exact_instruction, entry=174, bytes=ef28e801; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120a3e..0x120a41: exact_instruction, entry=185, bytes=400b3a; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x120a41..0x120a45: exact_instruction, entry=114, bytes=513b4e72; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0x120a45..0x120a49: exact_instruction, entry=184, bytes=2c8ce801; next = 119@0x90ebc:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 119;
    vm_ip += 0x4;
    /* 0x120a49..0x120a4f: exact_instruction, entry=119, bytes=e8013d01f7b4; next = 18@0x7be9b:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x4u) ^ vm->state + 0x7e7974a5u;
    next_entry = 18;
    vm_ip += 0x6;
    /* 0x120a4f..0x120a52: exact_instruction, entry=18, bytes=d8123a; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x120a52..0x120a56: exact_instruction, entry=347, bytes=b38e0702; next = 20@0x7c62b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 20;
    vm_ip += 0x4;
    /* 0x120a56..0x120a5a: exact_instruction, entry=20, bytes=e801314d; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x120a5a..0x120a5e: exact_instruction, entry=114, bytes=0e92f046; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x120a5e..0x120a61: exact_instruction, entry=215, bytes=d80364; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x120a61..0x120a65: exact_instruction, entry=123, bytes=51e7e801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x120a65..0x120a68: exact_instruction, entry=307, bytes=da3db4; next = 337@0xbec0e:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 337;
    vm_ip += 0x3;
    /* 0x120a68..0x120a6c: exact_instruction, entry=337, bytes=fc74d3f0; next = 174@0x9bd8f:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x120a6c..0x120a70: exact_instruction, entry=174, bytes=8331e801; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120a70..0x120a73: exact_instruction, entry=185, bytes=a4123a; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x120a73..0x120a77: exact_instruction, entry=114, bytes=c75b5092; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0x120a77..0x120a7b: exact_instruction, entry=184, bytes=baf1e801; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x120a7b..0x120a7e: exact_instruction, entry=297, bytes=5bf494; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x120a7e..0x120a82: exact_instruction, entry=258, bytes=62d8dcd3; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x120a82..0x120a86: exact_instruction, entry=176, bytes=e801f3b6; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x120a86..0x120a89: exact_instruction, entry=18, bytes=110a1a; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x120a89..0x120a8d: exact_instruction, entry=64, bytes=3b5c2442; next = 174@0x9bd8f:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x120a8d..0x120a91: exact_instruction, entry=174, bytes=f4bfe801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x120a91..0x120a94: exact_instruction, entry=28, bytes=90036f; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x120a94..0x120a98: exact_instruction, entry=114, bytes=1544f27a; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x120a98..0x120a9c: exact_instruction, entry=176, bytes=e80196fc; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x120a9c..0x120a9f: exact_instruction, entry=215, bytes=d80afc; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x120a9f..0x120aa3: exact_instruction, entry=347, bytes=0a0b3c41; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0x120aa3..0x120aa7: exact_instruction, entry=184, bytes=ea24e801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x120aa7..0x120aaa: exact_instruction, entry=18, bytes=e8053a; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x120aaa..0x120aae: exact_instruction, entry=189, bytes=7cc5f4a1; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x120aae..0x120ab2: exact_instruction, entry=176, bytes=e801df6e; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x120ab2..0x120ab6: exact_instruction, entry=114, bytes=9c8343cd; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x120ab6..0x120ab9: exact_instruction, entry=199, bytes=0f353a; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0x120ab9..0x120abd: exact_instruction, entry=20, bytes=e8012247; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x120abd..0x120ac1: exact_instruction, entry=64, bytes=27d13fb8; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x120ac1..0x120ac4: exact_instruction, entry=297, bytes=5dce9c; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x120ac4..0x120ac8: exact_instruction, entry=176, bytes=e801dd90; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x120ac8..0x120acc: exact_instruction, entry=340, bytes=1b4c2800; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x120acc..0x120acf: exact_instruction, entry=307, bytes=7575af; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x120acf..0x120ad3: exact_instruction, entry=184, bytes=8217e801; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x120ad3..0x120ad6: exact_instruction, entry=28, bytes=10085e; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x120ad6..0x120ada: exact_instruction, entry=258, bytes=8c703d8b; next = 158@0x99029:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 158;
    vm_ip += 0x4;
    /* 0x120ada..0x120ade: exact_instruction, entry=158, bytes=e8012edd; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x120ade..0x120ae2: exact_instruction, entry=258, bytes=be4949a6; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x120ae2..0x120ae5: exact_instruction, entry=66, bytes=2f803a; next = 158@0x99029:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 158;
    vm_ip += 0x3;
    /* 0x120ae5..0x120ae9: exact_instruction, entry=158, bytes=e801968d; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u + U16(vm->ip + 0x2u) + vm->state ^ 0x1fbfc3f3u ^ vm->flags ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ vm->flags ^ 0x3c39b020u ^ 0x3ffdb46cu;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x120ae9..0x120aec: exact_instruction, entry=28, bytes=90038e; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x120aec..0x120af0: exact_instruction, entry=114, bytes=7b4d94ff; next = 174@0x9bd8f:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x120af0..0x120af4: exact_instruction, entry=174, bytes=7372e801; next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 264;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x120af4, coverage=frontier_span_of_14:1 */
    vm_unresolved_synthetic_tail(vm, 0x120af4);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p014_bb_0071(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 71: 0x120b02..0x120d67; rows=163, terminal=exact_instruction */
    /* 0x120b02..0x120b04: exact_instruction, entry=354, bytes=0201; next = 258@0xadf2c:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 258;
    vm_ip += 0x2;
    /* 0x120b04..0x120b08: exact_instruction, entry=258, bytes=46c20776; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x120b08..0x120b0c: exact_instruction, entry=168, bytes=685686d5; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x120b0c..0x120b0f: exact_instruction, entry=215, bytes=d00088; next = 26@0x7dbbb:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 26;
    vm_ip += 0x3;
    /* 0x120b0f..0x120b13: exact_instruction, entry=26, bytes=cf69e801; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ vm->state - 0x471264cau + vm->flags - vm->state ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ vm->state - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + vm->state - 0x471264cau + 0x1bfb4659u ^ 0x6f23a80cu;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x120b13..0x120b17: exact_instruction, entry=157, bytes=73a2ab00; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x120b17..0x120b1a: exact_instruction, entry=297, bytes=5d99a5; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x120b1a..0x120b1e: exact_instruction, entry=347, bytes=bf854301; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x120b1e..0x120b22: exact_instruction, entry=243, bytes=c69ee801; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x120b22..0x120b26: exact_instruction, entry=196, bytes=5d6a25f7; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x120b26..0x120b29: exact_instruction, entry=28, bytes=e805f6; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x120b29..0x120b2d: exact_instruction, entry=189, bytes=ee4d349c; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x120b2d..0x120b31: exact_instruction, entry=346, bytes=b985e801; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x120b31..0x120b34: exact_instruction, entry=66, bytes=47432c; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x120b34..0x120b38: exact_instruction, entry=258, bytes=c3fd6e27; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x120b38..0x120b3c: exact_instruction, entry=43, bytes=b47d6001; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x120b3c..0x120b40: exact_instruction, entry=287, bytes=16b8e801; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x120b40..0x120b43: exact_instruction, entry=297, bytes=f45f1c; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x120b43..0x120b47: exact_instruction, entry=114, bytes=a097d7e0; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x120b47..0x120b4b: exact_instruction, entry=203, bytes=9f9fc096; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x120b4b..0x120b4f: exact_instruction, entry=243, bytes=85a2e801; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x120b4f..0x120b53: exact_instruction, entry=196, bytes=dd6ad4f6; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x120b53..0x120b56: exact_instruction, entry=18, bytes=320434; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x120b56..0x120b5a: exact_instruction, entry=114, bytes=1d8aaaca; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x120b5a..0x120b5e: exact_instruction, entry=346, bytes=5496e801; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x120b5e..0x120b62: exact_instruction, entry=203, bytes=cf9d8897; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120b62..0x120b65: exact_instruction, entry=185, bytes=ab2e3a; next = 258@0xadf2c:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 258;
    vm_ip += 0x3;
    /* 0x120b65..0x120b69: exact_instruction, entry=258, bytes=f9347bdb; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x120b69..0x120b6d: exact_instruction, entry=33, bytes=e801a4c9; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x120b6d..0x120b70: exact_instruction, entry=215, bytes=e8049c; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x120b70..0x120b74: exact_instruction, entry=157, bytes=ba083800; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x120b74..0x120b78: exact_instruction, entry=189, bytes=2a6f08e9; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x120b78..0x120b7c: exact_instruction, entry=243, bytes=c590e801; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x120b7c..0x120b80: exact_instruction, entry=268, bytes=041c866c; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x120b80..0x120b84: exact_instruction, entry=340, bytes=10781300; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x120b84..0x120b87: exact_instruction, entry=307, bytes=a9adb2; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 287;
    vm_ip += 0x3;
    /* 0x120b87..0x120b8b: exact_instruction, entry=287, bytes=3ac0e801; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x120b8b..0x120b8e: exact_instruction, entry=18, bytes=580e72; next = 203@0xa1484:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 203;
    vm_ip += 0x3;
    /* 0x120b8e..0x120b92: exact_instruction, entry=203, bytes=979b3976; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x120b92..0x120b96: exact_instruction, entry=114, bytes=678908bc; next = 346@0xc0535:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 346;
    vm_ip += 0x4;
    /* 0x120b96..0x120b9a: exact_instruction, entry=346, bytes=3a93e801; next = 157@0x98a9a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 157;
    vm_ip += 0x4;
    /* 0x120b9a..0x120b9e: exact_instruction, entry=157, bytes=53b80701; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x120b9e..0x120ba1: exact_instruction, entry=199, bytes=17253a; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x120ba1..0x120ba5: exact_instruction, entry=114, bytes=d576a23a; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x120ba5..0x120ba9: exact_instruction, entry=243, bytes=dda4e801; next = 199@0xa0631:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x120ba9..0x120bac: exact_instruction, entry=199, bytes=3750fa; next = 64@0x85059:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 64;
    vm_ip += 0x3;
    /* 0x120bac..0x120bb0: exact_instruction, entry=64, bytes=99127dc6; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x120bb0..0x120bb4: exact_instruction, entry=43, bytes=2ba29fdf; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x120bb4..0x120bb8: exact_instruction, entry=315, bytes=e801f9fa; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x120bb8..0x120bbc: exact_instruction, entry=337, bytes=1c9ae3d5; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x120bbc..0x120bbf: exact_instruction, entry=18, bytes=7826fa; next = 203@0xa1484:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 203;
    vm_ip += 0x3;
    /* 0x120bbf..0x120bc3: exact_instruction, entry=203, bytes=df912dd7; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x120bc3..0x120bc7: exact_instruction, entry=315, bytes=e801d1fa; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x120bc7..0x120bcb: exact_instruction, entry=340, bytes=201ed300; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x120bcb..0x120bce: exact_instruction, entry=18, bytes=0a4e24; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x120bce..0x120bd2: exact_instruction, entry=157, bytes=02ccd300; next = 305@0xb78b0:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 305;
    vm_ip += 0x4;
    /* 0x120bd2..0x120bd6: exact_instruction, entry=305, bytes=034ae801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x0u) + vm->state;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x120bd6..0x120bda: exact_instruction, entry=340, bytes=440c7900; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x120bda..0x120bde: exact_instruction, entry=43, bytes=b20f5e7a; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x120bde..0x120be1: exact_instruction, entry=66, bytes=efa46c; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 287;
    vm_ip += 0x3;
    /* 0x120be1..0x120be5: exact_instruction, entry=287, bytes=32c8e801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x120be5..0x120be8: exact_instruction, entry=215, bytes=400560; next = 168@0x9aa83:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 168;
    vm_ip += 0x3;
    /* 0x120be8..0x120bec: exact_instruction, entry=168, bytes=2e59dbd6; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x120bec..0x120bf0: exact_instruction, entry=258, bytes=c0fe6dbe; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x120bf0..0x120bf4: exact_instruction, entry=315, bytes=e80149f5; next = 167@0x9a8d2:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 167;
    vm_ip += 0x4;
    /* 0x120bf4..0x120bfa: exact_instruction, entry=167, bytes=e8013d01d688; next = 295@0xb60e0:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x4u) ^ vm->state ^ 0x5f92615u;
    next_entry = 295;
    vm_ip += 0x6;
    /* 0x120bfa..0x120bff: exact_instruction, entry=295, bytes=e801dad010; next = 157@0x98a9a:1, ip += +0x5; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) - 0x396ecbf2u;
    next_entry = 157;
    vm_ip += 0x5;
    /* 0x120bff..0x120c03: exact_instruction, entry=157, bytes=bec36800; next = 322@0xbb3c9:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 322;
    vm_ip += 0x4;
    /* 0x120c03..0x120c07: exact_instruction, entry=322, bytes=afe14d69; next = 183@0x9d495:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u & U16(vm->ip + 0x2u) - vm->state + U16(vm->ip + 0x0u) ^ vm->flags | 0x2d680d90u + 0x69cbe1a0u + 0x7ba65dc4u;
    next_entry = 183;
    vm_ip += 0x4;
    /* 0x120c07..0x120c0b: exact_instruction, entry=183, bytes=e801e68b; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0xfaa325cu ^ 0x694e1f66u | U16(vm->ip + 0x2u) - vm->state + 0xfaa325cu ^ 0x694e1f66u - 0x1aed554cu;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x120c0b..0x120c0f: exact_instruction, entry=337, bytes=1896ced1; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120c0f..0x120c12: exact_instruction, entry=185, bytes=43073a; next = 49@0x82820:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 49;
    vm_ip += 0x3;
    /* 0x120c12..0x120c17: exact_instruction, entry=49, bytes=0062183d01; next = 352@0xc1ec4:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + vm->state & vm->flags + vm->flags - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x120c17..0x120c19: exact_instruction, entry=352, bytes=1ada; next = 196@0x9fbcd:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 196;
    vm_ip += 0x2;
    /* 0x120c19..0x120c1d: exact_instruction, entry=196, bytes=aec88c9f; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x120c1d..0x120c20: exact_instruction, entry=297, bytes=43d3e5; next = 253@0xacfb1:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 253;
    vm_ip += 0x3;
    /* 0x120c20..0x120c26: exact_instruction, entry=253, bytes=86c243e825df; next = 337@0xbec0e:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x764111b0u + 0x6d2270cbu + U32(vm->ip + 0x2u) ^ vm->flags + vm->flags | 0x62c3b0ddu | 0x2b96d1d1u & 0x2d46e2e3u ^ U16(vm->ip + 0x0u) + 0x7c5d4802u;
    next_entry = 337;
    vm_ip += 0x6;
    /* 0x120c26..0x120c2a: exact_instruction, entry=337, bytes=ccf4fe17; next = 320@0xbada5:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 320;
    vm_ip += 0x4;
    /* 0x120c2a..0x120c2f: exact_instruction, entry=320, bytes=003d01e4bc; next = 173@0x9ba74:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags - vm->flags - 0x7e143884u;
    next_entry = 173;
    vm_ip += 0x5;
    /* 0x120c2f..0x120c31: exact_instruction, entry=173, bytes=ce04; next = 196@0x9fbcd:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ vm->state + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & vm->flags - vm->state + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    next_entry = 196;
    vm_ip += 0x2;
    /* 0x120c31..0x120c35: exact_instruction, entry=196, bytes=68f124f0; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x120c35..0x120c39: exact_instruction, entry=64, bytes=f6a9de23; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x120c39..0x120c3c: exact_instruction, entry=215, bytes=900407; next = 146@0x96407:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 146;
    vm_ip += 0x3;
    /* 0x120c3c..0x120c41: exact_instruction, entry=146, bytes=3a510a8c73; next = 83@0x8947b:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags ^ 0x2e312e01u & vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u ^ U16(vm->ip + 0x3u) + vm->flags & 0xa6d4251u ^ 0x409c2e61u ^ U16(vm->ip + 0x1u) - vm->state + vm->flags ^ 0x2e312e01u & vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u ^ U16(vm->ip + 0x3u) + vm->flags & 0xa6d4251u ^ 0x409c2e61u + 0x2cff1885u;
    next_entry = 83;
    vm_ip += 0x5;
    /* 0x120c41..0x120c46: exact_instruction, entry=83, bytes=7198003d01; next = 144@0x95887:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + vm->state & 0x122d7f19u | vm->flags + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x120c46..0x120c48: exact_instruction, entry=144, bytes=a79f; next = 307@0xb8064:1, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 307;
    vm_ip += 0x2;
    /* 0x120c48..0x120c4b: exact_instruction, entry=307, bytes=ee15af; next = 172@0x9b68a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 172;
    vm_ip += 0x3;
    /* 0x120c4b..0x120c4f: exact_instruction, entry=172, bytes=43ff5300; next = 332@0xbd36d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ vm->state ^ 0x7070916cu - 0x6ecee241u ^ vm->flags ^ 0x15bf847fu & vm->state | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    next_entry = 332;
    vm_ip += 0x4;
    /* 0x120c4f..0x120c53: exact_instruction, entry=332, bytes=5117a79f; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u ^ U16(vm->ip + 0x2u) ^ vm->state | 0x30661b97u & 0x57d9fe65u | vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u & vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x149316fau + vm->flags & vm->state | 0x2f0ca7d2u & vm->state | 0x30661b97u - 0x23cebdbcu ^ vm->state | 0x30661b97u & 0x57d9fe65u + 0x42097e5du;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x120c53..0x120c57: exact_instruction, entry=340, bytes=582d6800; next = 301@0xb708d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 301;
    vm_ip += 0x4;
    /* 0x120c57..0x120c5c: exact_instruction, entry=301, bytes=003d0142f7; next = 108@0x8f24b:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x120c5c..0x120c5e: exact_instruction, entry=108, bytes=f35a; next = 203@0xa1484:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 203;
    vm_ip += 0x2;
    /* 0x120c5e..0x120c62: exact_instruction, entry=203, bytes=8f924476; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x120c62..0x120c66: exact_instruction, entry=337, bytes=e31668f6; next = 253@0xacfb1:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 253;
    vm_ip += 0x4;
    /* 0x120c66..0x120c6c: exact_instruction, entry=253, bytes=deb89cb90402; next = 28@0x7e390:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x764111b0u + 0x6d2270cbu + U32(vm->ip + 0x2u) ^ vm->flags + vm->flags | 0x62c3b0ddu | 0x2b96d1d1u & 0x2d46e2e3u ^ U16(vm->ip + 0x0u) + 0x7c5d4802u;
    next_entry = 28;
    vm_ip += 0x6;
    /* 0x120c6c..0x120c6f: exact_instruction, entry=28, bytes=680748; next = 237@0xa8e1f:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 237;
    vm_ip += 0x3;
    /* 0x120c6f..0x120c74: exact_instruction, entry=237, bytes=009cbc3d01; next = 160@0x994cf:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x120c74..0x120c76: exact_instruction, entry=160, bytes=d923; next = 297@0xb64d7:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 297;
    vm_ip += 0x2;
    /* 0x120c76..0x120c79: exact_instruction, entry=297, bytes=9bfc02; next = 82@0x8920e:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 82;
    vm_ip += 0x3;
    /* 0x120c79..0x120c7c: exact_instruction, entry=82, bytes=c18e62; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags + 0x1bc90d20u | 0x2d688b3eu - U16(vm->ip + 0x0u) + vm->state + vm->flags + 0x1bc90d20u | 0x2d688b3eu + 0x5cc5e4d8u;
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x120c7c..0x120c80: exact_instruction, entry=157, bytes=0ffdb300; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x120c80..0x120c84: exact_instruction, entry=64, bytes=e01bbe26; next = 222@0xa5f3c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 222;
    vm_ip += 0x4;
    /* 0x120c84..0x120c89: exact_instruction, entry=222, bytes=6dd35c0462; next = 99@0x8c99a:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags | 0x11da3648u & 0x169ceafau & U16(vm->ip + 0x0u) - vm->state + vm->flags | 0x11da3648u & 0x169ceafau + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u | 0x39a63024u + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u + 0x17d780cau ^ U16(vm->ip + 0x2u) + vm->state + vm->flags | 0x11da3648u & 0x169ceafau & U16(vm->ip + 0x0u) - vm->state + vm->flags | 0x11da3648u & 0x169ceafau + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u | 0x39a63024u + vm->flags | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u + 0x17d780cau - 0x29e369dfu;
    next_entry = 99;
    vm_ip += 0x5;
    /* 0x120c89..0x120c8e: exact_instruction, entry=99, bytes=00065e3d01; next = 144@0x95887:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x1u) ^ vm->state - 0x48503105u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x120c8e..0x120c90: exact_instruction, entry=144, bytes=979e; next = 333@0xbd8af:1, ip += +0x2; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 333;
    vm_ip += 0x2;
    /* 0x120c90..0x120c94: exact_instruction, entry=333, bytes=63ef1300; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x120c94..0x120c97: exact_instruction, entry=18, bytes=e89548; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x120c97..0x120c9b: exact_instruction, entry=189, bytes=54d564e4; next = 254@0xad32c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 254;
    vm_ip += 0x4;
    /* 0x120c9b..0x120c9f: exact_instruction, entry=254, bytes=a1a00a4a; next = 269@0xb045b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - U16(vm->ip + 0x0u) ^ vm->state + vm->flags | vm->flags | 0x617339d9u | 0x5635509u | 0x15874263u ^ 0x5bf4e999u & vm->flags - 0x35a18ac8u | 0x5feb6979u & 0x3e80b852u | U16(vm->ip + 0x2u) - 0x228a41a2u;
    next_entry = 269;
    vm_ip += 0x4;
    /* 0x120c9f..0x120ca4: exact_instruction, entry=269, bytes=003d0111b6; next = 144@0x95887:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + U16(vm->ip + 0x3u) + vm->state ^ vm->flags & vm->state & 0x6f7fff69u & vm->flags & vm->state | vm->flags & vm->state ^ 0x4f60a287u + 0x4faa382u;
    next_entry = 144;
    vm_ip += 0x5;
    /* 0x120ca4..0x120ca6: exact_instruction, entry=144, bytes=379e; next = 340@0xbf435:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ vm->state & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    next_entry = 340;
    vm_ip += 0x2;
    /* 0x120ca6..0x120caa: exact_instruction, entry=340, bytes=041ab300; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x120caa..0x120cad: exact_instruction, entry=307, bytes=2925af; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x120cad..0x120cb1: exact_instruction, entry=174, bytes=73a5e801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x120cb1..0x120cb5: exact_instruction, entry=64, bytes=62676bd7; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x120cb5..0x120cb8: exact_instruction, entry=66, bytes=d1942c; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0x120cb8..0x120cbc: exact_instruction, entry=20, bytes=e801507e; next = 40@0x8115d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 40;
    vm_ip += 0x4;
    /* 0x120cbc..0x120cc2: exact_instruction, entry=40, bytes=e8013d014808; next = 297@0xb64d7:1, ip += +0x6; dispatch_model=static_100; state=state_preserve; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & U16(vm->ip + 0x4u) ^ vm->state;
    next_entry = 297;
    vm_ip += 0x6;
    /* 0x120cc2..0x120cc5: exact_instruction, entry=297, bytes=89a5f0; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x120cc5..0x120cc9: exact_instruction, entry=189, bytes=a672e4eb; next = 174@0x9bd8f:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x120cc9..0x120ccd: exact_instruction, entry=174, bytes=7136e801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x120ccd..0x120cd1: exact_instruction, entry=64, bytes=c69b4516; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120cd1..0x120cd4: exact_instruction, entry=185, bytes=9c213a; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0x120cd4..0x120cd8: exact_instruction, entry=20, bytes=e801cd75; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x120cd8..0x120cdc: exact_instruction, entry=347, bytes=8b0bd780; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120cdc..0x120cdf: exact_instruction, entry=185, bytes=af063a; next = 20@0x7c62b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 20;
    vm_ip += 0x3;
    /* 0x120cdf..0x120ce3: exact_instruction, entry=20, bytes=e801257d; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ vm->state | vm->flags | 0x180e72f2u - 0x36332ac8u - vm->flags ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - vm->flags ^ 0x58f71b08u & 0x17188826u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x120ce3..0x120ce6: exact_instruction, entry=66, bytes=fa092a; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x120ce6..0x120cea: exact_instruction, entry=114, bytes=166811af; next = 174@0x9bd8f:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 174;
    vm_ip += 0x4;
    /* 0x120cea..0x120cee: exact_instruction, entry=174, bytes=1760e801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x120cee..0x120cf2: exact_instruction, entry=64, bytes=a6cbe3f3; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x120cf2..0x120cf5: exact_instruction, entry=66, bytes=e99258; next = 184@0x9d694:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 184;
    vm_ip += 0x3;
    /* 0x120cf5..0x120cf9: exact_instruction, entry=184, bytes=708be801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x120cf9..0x120cfd: exact_instruction, entry=340, bytes=14569d01; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x120cfd..0x120d00: exact_instruction, entry=297, bytes=f44fc1; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x120d00..0x120d04: exact_instruction, entry=176, bytes=e801533f; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x120d04..0x120d08: exact_instruction, entry=258, bytes=64c2b2dc; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x120d08..0x120d0b: exact_instruction, entry=215, bytes=800568; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x120d0b..0x120d0f: exact_instruction, entry=176, bytes=e8018254; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x120d0f..0x120d12: exact_instruction, entry=28, bytes=e80540; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x120d12..0x120d16: exact_instruction, entry=189, bytes=ffc920e5; next = 184@0x9d694:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 184;
    vm_ip += 0x4;
    /* 0x120d16..0x120d1a: exact_instruction, entry=184, bytes=4822e801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + U16(vm->ip + 0x0u) - vm->state | vm->flags | 0x19d0d4du + 0x3c030b15u ^ vm->flags + 0x7db9efb0u ^ vm->flags - vm->flags ^ vm->flags + 0x3f05b2f0u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x120d1a..0x120d1e: exact_instruction, entry=114, bytes=1979ce2a; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x120d1e..0x120d21: exact_instruction, entry=307, bytes=e28dad; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x120d21..0x120d25: exact_instruction, entry=123, bytes=962fe801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x120d25..0x120d29: exact_instruction, entry=347, bytes=0e01c808; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x120d29..0x120d2c: exact_instruction, entry=18, bytes=220834; next = 176@0x9c10b:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 176;
    vm_ip += 0x3;
    /* 0x120d2c..0x120d30: exact_instruction, entry=176, bytes=e801e097; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x120d30..0x120d34: exact_instruction, entry=189, bytes=1f73909c; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x120d34..0x120d37: exact_instruction, entry=66, bytes=8b0e2e; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x120d37..0x120d3b: exact_instruction, entry=123, bytes=0eb8e801; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x120d3b..0x120d3e: exact_instruction, entry=307, bytes=c28db4; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x120d3e..0x120d42: exact_instruction, entry=347, bytes=613ca908; next = 161@0x9975a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 161;
    vm_ip += 0x4;
    /* 0x120d42..0x120d46: exact_instruction, entry=161, bytes=0e75e801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x69145e52u;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x120d46..0x120d49: exact_instruction, entry=215, bytes=a00a5c; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x120d49..0x120d4d: exact_instruction, entry=340, bytes=32078900; next = 176@0x9c10b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 176;
    vm_ip += 0x4;
    /* 0x120d4d..0x120d51: exact_instruction, entry=176, bytes=e801db04; next = 258@0xadf2c:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags & 0x2c46ace3u | vm->flags - 0x14b22a15u;
    next_entry = 258;
    vm_ip += 0x4;
    /* 0x120d51..0x120d55: exact_instruction, entry=258, bytes=1c47c236; next = 307@0xb8064:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - vm->state ^ 0x11095fd5u + vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - vm->flags - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x120d55..0x120d58: exact_instruction, entry=307, bytes=8d25af; next = 174@0x9bd8f:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 174;
    vm_ip += 0x3;
    /* 0x120d58..0x120d5c: exact_instruction, entry=174, bytes=cb3de801; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + vm->state - vm->flags & vm->flags ^ vm->flags + vm->flags ^ 0x5fa9d2b1u + 0x397fd954u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x120d5c..0x120d60: exact_instruction, entry=64, bytes=28bd49c8; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x120d60..0x120d63: exact_instruction, entry=18, bytes=d8153a; next = 123@0x91a59:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 123;
    vm_ip += 0x3;
    /* 0x120d63..0x120d67: exact_instruction, entry=123, bytes=d63de801; next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x3da77425u - U16(vm->ip + 0x0u) - vm->state + 0x3da77425u ^ 0x1603b0a9u;
    next_entry = 356;
    vm_ip += 0x4;
    /* terminal CFG edge: covered_synthetic_fallthrough, target_vm_ip=0x120d67, coverage=hidden_span_of_14:1 */
    vm_unresolved_synthetic_tail(vm, 0x120d67);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p014_bb_0072(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 72: 0x120d75..0x120ea9; rows=79, terminal=long_branch_forward */
    /* 0x120d75..0x120d77: exact_instruction, entry=165, bytes=0c01; next = 268@0xb0007:1, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 268;
    vm_ip += 0x2;
    /* 0x120d77..0x120d7b: exact_instruction, entry=268, bytes=4a1ce663; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x120d7b..0x120d7f: exact_instruction, entry=64, bytes=670e3cd2; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x120d7f..0x120d82: exact_instruction, entry=297, bytes=156d3c; next = 346@0xc0535:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 346;
    vm_ip += 0x3;
    /* 0x120d82..0x120d86: exact_instruction, entry=346, bytes=861ce801; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x120d86..0x120d8a: exact_instruction, entry=347, bytes=0e01b2a0; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x120d8a..0x120d8e: exact_instruction, entry=333, bytes=9ff5ab00; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120d8e..0x120d91: exact_instruction, entry=185, bytes=10863a; next = 346@0xc0535:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 346;
    vm_ip += 0x3;
    /* 0x120d91..0x120d95: exact_instruction, entry=346, bytes=8474e801; next = 114@0x90319:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 114;
    vm_ip += 0x4;
    /* 0x120d95..0x120d99: exact_instruction, entry=114, bytes=321eadd4; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x120d99..0x120d9c: exact_instruction, entry=28, bytes=e80406; next = 157@0x98a9a:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 157;
    vm_ip += 0x3;
    /* 0x120d9c..0x120da0: exact_instruction, entry=157, bytes=52c38900; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x120da0..0x120da4: exact_instruction, entry=287, bytes=4226e801; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x120da4..0x120da8: exact_instruction, entry=340, bytes=933a2800; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x120da8..0x120dac: exact_instruction, entry=268, bytes=5356a6f5; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x120dac..0x120daf: exact_instruction, entry=18, bytes=5dcb2a; next = 346@0xc0535:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 346;
    vm_ip += 0x3;
    /* 0x120daf..0x120db3: exact_instruction, entry=346, bytes=0e71e801; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x120db3..0x120db7: exact_instruction, entry=196, bytes=e3a72d9d; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x120db7..0x120dbb: exact_instruction, entry=189, bytes=ce824cac; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120dbb..0x120dbe: exact_instruction, entry=185, bytes=432c3a; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 287;
    vm_ip += 0x3;
    /* 0x120dbe..0x120dc2: exact_instruction, entry=287, bytes=d6bee801; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x120dc2..0x120dc5: exact_instruction, entry=66, bytes=44cdfc; next = 203@0xa1484:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 203;
    vm_ip += 0x3;
    /* 0x120dc5..0x120dc9: exact_instruction, entry=203, bytes=079a03da; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x120dc9..0x120dcd: exact_instruction, entry=64, bytes=3343c322; next = 243@0xaab6a:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 243;
    vm_ip += 0x4;
    /* 0x120dcd..0x120dd1: exact_instruction, entry=243, bytes=3da0e801; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u & vm->state ^ 0x47b31677u | vm->flags | vm->state | 0x5f60d018u + vm->state + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u ^ 0xbdd98a5u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x120dd1..0x120dd5: exact_instruction, entry=43, bytes=777a5307; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x120dd5..0x120dd8: exact_instruction, entry=297, bytes=1443d7; next = 189@0x9e7af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 189;
    vm_ip += 0x3;
    /* 0x120dd8..0x120ddc: exact_instruction, entry=189, bytes=c9734cd9; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x120ddc..0x120de0: exact_instruction, entry=287, bytes=7acbe801; next = 189@0x9e7af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x120de0..0x120de4: exact_instruction, entry=189, bytes=95f994a3; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x120de4..0x120de8: exact_instruction, entry=168, bytes=38163ed1; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x120de8..0x120deb: exact_instruction, entry=66, bytes=c2c22a; next = 315@0xb9451:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 315;
    vm_ip += 0x3;
    /* 0x120deb..0x120def: exact_instruction, entry=315, bytes=e80129f1; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x120def..0x120df3: exact_instruction, entry=43, bytes=2449483d; next = 18@0x7be9b:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x120df3..0x120df6: exact_instruction, entry=18, bytes=d80a7a; next = 347@0xc088d:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 347;
    vm_ip += 0x3;
    /* 0x120df6..0x120dfa: exact_instruction, entry=347, bytes=fbb12709; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x120dfa..0x120dfe: exact_instruction, entry=287, bytes=30bae801; next = 215@0xa4609:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 215;
    vm_ip += 0x4;
    /* 0x120dfe..0x120e01: exact_instruction, entry=215, bytes=2006c7; next = 196@0x9fbcd:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + vm->state | 0x760f463fu - vm->flags | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    next_entry = 196;
    vm_ip += 0x3;
    /* 0x120e01..0x120e05: exact_instruction, entry=196, bytes=d2cefda0; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x120e05..0x120e09: exact_instruction, entry=347, bytes=bc8f9e02; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x120e09..0x120e0d: exact_instruction, entry=33, bytes=e8016c09; next = 337@0xbec0e:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 337;
    vm_ip += 0x4;
    /* 0x120e0d..0x120e11: exact_instruction, entry=337, bytes=7777fff8; next = 43@0x8173d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + vm->state - vm->flags - U16(vm->ip + 0x2u) + vm->state - vm->flags + vm->flags + 0x2051de91u & vm->flags + 0x61f749a7u | 0x51d7631au ^ vm->flags + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    next_entry = 43;
    vm_ip += 0x4;
    /* 0x120e11..0x120e15: exact_instruction, entry=43, bytes=d81d7c64; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x2u) ^ vm->state;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120e15..0x120e18: exact_instruction, entry=185, bytes=7f973a; next = 346@0xc0535:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 346;
    vm_ip += 0x3;
    /* 0x120e18..0x120e1c: exact_instruction, entry=346, bytes=7b60e801; next = 268@0xb0007:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    next_entry = 268;
    vm_ip += 0x4;
    /* 0x120e1c..0x120e20: exact_instruction, entry=268, bytes=a3ef89b3; next = 297@0xb64d7:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 297;
    vm_ip += 0x4;
    /* 0x120e20..0x120e23: exact_instruction, entry=297, bytes=79ae59; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + vm->state - 0x48220942u | vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + vm->flags + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x9f24ccbu;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x120e23..0x120e27: exact_instruction, entry=340, bytes=8a1b9100; next = 287@0xb45d2:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 287;
    vm_ip += 0x4;
    /* 0x120e27..0x120e2b: exact_instruction, entry=287, bytes=f29ae801; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x120e2b..0x120e2f: exact_instruction, entry=203, bytes=df921e7e; next = 347@0xc088d:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x120e2f..0x120e33: exact_instruction, entry=347, bytes=4c08d682; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x120e33..0x120e36: exact_instruction, entry=28, bytes=f80870; next = 287@0xb45d2:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 287;
    vm_ip += 0x3;
    /* 0x120e36..0x120e3a: exact_instruction, entry=287, bytes=a49be801; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + vm->state & 0xa6ddb71u - vm->flags - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120e3a..0x120e3d: exact_instruction, entry=185, bytes=62913a; next = 340@0xbf435:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 340;
    vm_ip += 0x3;
    /* 0x120e3d..0x120e41: exact_instruction, entry=340, bytes=f8f3d300; next = 333@0xbd8af:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 333;
    vm_ip += 0x4;
    /* 0x120e41..0x120e45: exact_instruction, entry=333, bytes=e700d300; next = 33@0x7f7c4:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 33;
    vm_ip += 0x4;
    /* 0x120e45..0x120e49: exact_instruction, entry=33, bytes=e80136c4; next = 66@0x855ff:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x15422921u & U16(vm->ip + 0x2u) + vm->state | 0x15422921u + 0x2d0713f3u;
    next_entry = 66;
    vm_ip += 0x4;
    /* 0x120e49..0x120e4c: exact_instruction, entry=66, bytes=c5193a; next = 333@0xbd8af:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - vm->state & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ vm->state & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - vm->flags - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    next_entry = 333;
    vm_ip += 0x3;
    /* 0x120e4c..0x120e50: exact_instruction, entry=333, bytes=cbe17900; next = 64@0x85059:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - vm->state ^ vm->flags ^ vm->state | 0x37ccc6eau - 0x61e56767u & vm->flags ^ vm->state + vm->flags ^ vm->state | 0x71cc1ee8u | 0x569ecec3u;
    next_entry = 64;
    vm_ip += 0x4;
    /* 0x120e50..0x120e54: exact_instruction, entry=64, bytes=3209717f; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x79614de5u ^ U16(vm->ip + 0x2u) + vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ vm->flags + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x120e54..0x120e58: exact_instruction, entry=315, bytes=e801b9f5; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120e58..0x120e5b: exact_instruction, entry=185, bytes=bfaa3a; next = 114@0x90319:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 114;
    vm_ip += 0x3;
    /* 0x120e5b..0x120e5f: exact_instruction, entry=114, bytes=0d634aaa; next = 168@0x9aa83:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u - U16(vm->ip + 0x0u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du ^ U16(vm->ip + 0x2u) + vm->state ^ vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x48367f78u ^ 0x63bb548fu + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state & 0x292b555du + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u + vm->flags & vm->state | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + vm->state - 0x3b2cb159u & 0xfc7215cu & 0x662844cu - 0x7bdaf9d9u ^ 0x257a9d7du ^ 0x665346b9u & 0x1c8b6feeu ^ 0x6b040388u + 0x667e49d1u;
    next_entry = 168;
    vm_ip += 0x4;
    /* 0x120e5f..0x120e63: exact_instruction, entry=168, bytes=6bff84d8; next = 315@0xb9451:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + vm->state | 0x6899d5d4u & U16(vm->ip + 0x0u) + vm->flags & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    next_entry = 315;
    vm_ip += 0x4;
    /* 0x120e63..0x120e67: exact_instruction, entry=315, bytes=e801e1fa; next = 338@0xbf128:1, ip += +0x4; dispatch_model=static_100; state=state_mixed; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ vm->flags ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    next_entry = 338;
    vm_ip += 0x4;
    /* 0x120e67..0x120e6d: exact_instruction, entry=338, bytes=36d63d01e801; next = 295@0xb60e0:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x0u) - vm->state - 0x4bf8be0cu;
    next_entry = 295;
    vm_ip += 0x6;
    /* 0x120e6d..0x120e72: exact_instruction, entry=295, bytes=e80132d210; next = 200@0xa0a9e:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x2u) - 0x396ecbf2u;
    next_entry = 200;
    vm_ip += 0x5;
    /* 0x120e72..0x120e78: exact_instruction, entry=200, bytes=d0a1105fd80a; next = 347@0xc088d:1, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + vm->flags - vm->flags ^ 0x64193a1au ^ 0x227666a1u + U32(vm->ip + 0x0u) ^ vm->flags & 0x21af07eu | 0x54bd1bfeu ^ 0x9ad7a2fu ^ 0x5c24c721u + U16(vm->ip + 0x4u);
    next_entry = 347;
    vm_ip += 0x6;
    /* 0x120e78..0x120e7c: exact_instruction, entry=347, bytes=ef3dfb8b; next = 196@0x9fbcd:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 196;
    vm_ip += 0x4;
    /* 0x120e7c..0x120e80: exact_instruction, entry=196, bytes=e85fecbb; next = 185@0x9d964:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 185;
    vm_ip += 0x4;
    /* 0x120e80..0x120e83: exact_instruction, entry=185, bytes=4b1350; next = 74@0x86d43:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ vm->state ^ vm->flags | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + vm->flags | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    next_entry = 74;
    vm_ip += 0x3;
    /* 0x120e83..0x120e88: exact_instruction, entry=74, bytes=b5c23d017f; next = 108@0x8f24b:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags & vm->state - 0x7af5a4e2u - 0x619b65dcu ^ 0x65dcaffcu + 0x33d7fc12u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x120e88..0x120e8a: exact_instruction, entry=108, bytes=65e1; next = 260@0xae90b:1, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 260;
    vm_ip += 0x2;
    /* 0x120e8a..0x120e8e: exact_instruction, entry=260, bytes=e0028dee; next = 340@0xbf435:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u - U16(vm->ip + 0x0u) - vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u - vm->flags - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u | vm->state + 0x581f6275u ^ vm->flags - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | vm->flags - 0x705f9ad2u + 0x760922e2u | vm->flags - 0x705f9ad2u + 0x760922e2u & 0x624bad50u ^ 0x470c080du;
    next_entry = 340;
    vm_ip += 0x4;
    /* 0x120e8e..0x120e92: exact_instruction, entry=340, bytes=c845b300; next = 203@0xa1484:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + vm->state - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    next_entry = 203;
    vm_ip += 0x4;
    /* 0x120e92..0x120e96: exact_instruction, entry=203, bytes=e798807b; next = 28@0x7e390:1, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - vm->flags + 0x97da242u & vm->state - vm->flags + 0x97da242u & vm->flags + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u - 0x32825086u - 0x1f5b0269u & U16(vm->ip + 0x0u) ^ 0x4ccb9807u;
    next_entry = 28;
    vm_ip += 0x4;
    /* 0x120e96..0x120e99: exact_instruction, entry=28, bytes=900724; next = 242@0xaa87d:1, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 242;
    vm_ip += 0x3;
    /* 0x120e99..0x120e9e: exact_instruction, entry=242, bytes=3d011f81fb; next = 334@0xbdd18:1, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x3u) - vm->state ^ 0x5c05e9b5u;
    next_entry = 334;
    vm_ip += 0x5;
    /* 0x120e9e..0x1210d6: long_branch_forward, entry=334, bytes=a5000000380200003d0122; next = table[165], ip += 0x238; validation=file_backed_operand;source_state=transition_model */
    /* state preserved: sampled_long_or_sparse */
    next_entry = (int)U32(vm->ip + 0x0);
    vm_ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* terminal CFG edge: decoded_control, target_vm_ip=0x1210d6, coverage=- */
    vm_unresolved_synthetic_tail(vm, 0x1210d6);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

void vm_program_atlas_014_decompiled(VMState *vm, uint64_t vm_ip) {
    switch (vm_ip) {
    case 0x1209d2: vmdec_p014_bb_0070(vm, vm_ip); return;
    case 0x120b02: vmdec_p014_bb_0071(vm, vm_ip); return;
    case 0x120d75: vmdec_p014_bb_0072(vm, vm_ip); return;
    default: vm_unresolved_synthetic_tail(vm, vm_ip); return;
    }
}
