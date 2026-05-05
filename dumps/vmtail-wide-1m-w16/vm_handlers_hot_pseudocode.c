/*
 * VM handler pseudocode.
 * These functions are a C-like static reconstruction of dispatch-entry semantics.
 * They are syntax-checkable C, but still an analysis artifact rather than drop-in source.
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

#define U8(p)  (*(const uint8_t *)(p))
#define U16(p) (*(const uint16_t *)(p))
#define U32(p) (*(const uint32_t *)(p))
#define mask32(x) ((uint32_t)(x))
#define mask16(x) ((uint16_t)(x))
#define mask8(x)  ((uint8_t)(x))

extern uintptr_t dispatch_table[360];

static int vm_entry_from_slot_index(uint32_t slot) {
    return slot < 360u ? (int)slot : -1;
}

static int vm_entry_from_table_offset(uint32_t slot) {
    return ((slot & 7u) == 0u && (slot >> 3) < 360u) ? (int)(slot >> 3) : -1;
}

static int64_t signed_vm_delta_u32(uint32_t raw) {
    return (raw & 0x80000000u) ? -(int64_t)(raw & 0x7fffffffu) : (int64_t)raw;
}

static VMOpResult op_entry_258(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=258, native=0xadf2c, class=static_validated, events=28058, shape=VVVV, delta=+0x4 */
    /* operands: b0=var255(top=0xf3:2.2%);b1=var256(top=0xab:1.9%);b2=var246(top=0x51:2.5%);b3=var240(top=0xeb:4.3%) */
    /* native IP reads: 0xadf39:byte0,0xadf81:byte0,0xae01f:byte0,0xae064:u16_2,0xae06f:u16_2,0xae234:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 ^ 0x11095fd5u + flags0 - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - flags0 - 0x1510614fu | 0xa1b079au ^ 0x1769756eu & U16(vm->ip + 0x0u) - state0 ^ 0x11095fd5u + flags0 - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ U16(vm->ip + 0x2u) - flags0 - 0x1510614fu | 0xa1b079au ^ 0x1769756eu ^ 0x5812e92cu;
    vm->flags = flags0 - 0x1510614fu;
    /* slot variants: 70=(mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 ^ 0x11095fd5u)) + (mask32(flags0 ^ 0x1769756eu)))) ^ (mask32(U16(vm->ip + 0x2u) - (mask32(flags0 ^ 0x1769756eu)))))))) ^ 0x5812e92cu)) & 0xffffu | 58=(mask32((mask32(U16(vm->ip + 0x0u) -... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 307@0xb8064:1689,199@0xa0631:1547,297@0xb64d7:1508,215@0xa4609:1365,18@0x7be9b:1334,43@0x8173d:1325 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_028(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=28, native=0x7e390, class=static_validated, events=26610, shape=VVV, delta=+0x3 */
    /* operands: b0=var30(top=0xd8:12.5%);b1=var11(top=0x0a:24.2%);b2=var256(top=0x70:2.5%) */
    /* native IP reads: 0x7e3ec:b2,0x7e67c:byte0,0x7e743:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    /* vm->state = state0 | flags0 ^ state0 | 0xb9ad02au & 0x3fb85e48u - state0 ^ 0x6e3e6f1au | flags0 ^ state0 | 0xb9ad02au & 0x3fb85e48u - state0 ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ state0 | flags0 ^ state0 | 0xb9ad02au & 0x3fb85e48u - state0 ^ 0x6e3e6f1au - 0x7e20fbabu ^ flags0 ^ state0 | 0xb9ad02au & 0x3fb85e48u - state0 ^ 0x6e3e6f1au + 0x43078fb1u...; */
    vm->flags = flags0 ^ state0;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x3u */
    /* observed top targets: 347@0xc088d:2147,258@0xadf2c:1654,340@0xbf435:1637,337@0xbec0e:1601,114@0x90319:1452,189@0x9e7af:1398 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_337(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=337, native=0xbec0e, class=static_validated, events=26534, shape=VVVV, delta=+0x4 */
    /* operands: b0=var128(top=0x7c:3.3%);b1=var227(top=0x91:5.3%);b2=var254(top=0x9d:2.2%);b3=var253(top=0x00:7.9%) */
    /* native IP reads: 0xbecf2:u16_2,0xbf04a:u16_0,0xbf0ce:u16_0 + state0 - flags0 - u16_2 + state0 - flags0 + flags0 + 0x2051de91 & flags0 + 0x61f749a7 | 0x51d7631a ^ flags0 + 0x61f749a7 ^ 0x3de72107 & 0xe04b834 ^ 0x2060ddea,0xbf0f7:u16_0 + state0 - flags0 - u16_2 + state0 - fla... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 - flags0 - U16(vm->ip + 0x2u) + state0 - flags0 + flags0 + 0x2051de91u & flags0 + 0x61f749a7u | 0x51d7631au ^ flags0 + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u | U16(vm->ip + 0x0u) + state0 - flags0 - U16(vm->ip + 0x2u) + state0 - flags0 + flags0 + 0x2051de91u & flags0 + 0x61f749a7u | 0x51d7631au ^ flags0 + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u ^ 0x2060ddeau;
    vm->flags = flags0 + 0x61f749a7u ^ 0x3de72107u & 0xe04b834u;
    /* slot variants: 85=(mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) - (mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 - flags0)))) + flags0)))) + 0x2051de91u)) & (mask32(flags0 + 0x61f749a7u))...#70dcd015f490 | 43=(... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 297@0xb64d7:1787,66@0x855ff:1591,307@0xb8064:1382,28@0x7e390:1313,18@0x7be9b:1254,215@0xa4609:1178 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_340(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=340, native=0xbf435, class=static_validated, events=26112, shape=VVVE, delta=+0x4 */
    /* operands: b0=var221(top=0x4c:4.0%);b1=var255(top=0x16:2.8%);b2=var17(top=0xb3:15.9%);b3=enum2(0x00:21582,0x01:4530) */
    /* native IP reads: 0xbf524:byte0,0xbf57a:u16_2,0xbf79a:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) - U16(vm->ip + 0x0u) + state0 - 0x2b2e5a26u ^ 0x7535dd25u | U16(vm->ip + 0x2u) + 0x9097995u;
    vm->flags = flags0 & 0x7036ca68u - 0x2caa6796u ^ 0x4ea9d032u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32(state0 - 0x2b2e5a26u)) ^ 0x7535dd25u)) | U16(vm->ip + 0x2u))))) + 0x9097995u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 307@0xb8064:1748,28@0x7e390:1702,66@0x855ff:1362,185@0x9d964:1352,215@0xa4609:1274,18@0x7be9b:1062 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_018(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=18, native=0x7be9b, class=static_validated, events=25448, shape=VVV, delta=+0x3 */
    /* operands: b0=var149(top=0xa0:5.4%);b1=var200(top=0x0a:6.4%);b2=var165(top=0x3a:10.5%) */
    /* native IP reads: 0x7bebd:byte0,0x7bf62:byte0,0x7bf6f:byte0,0x7bf96:byte0,0x7c03a:b2,0x7c148:byte0,0x7c200:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 & flags0 | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & flags0 | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - state0 & flags0 | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & flags0 | 0x954df65u + 0x5b466f3bu;
    vm->flags = flags0;
    /* slot variants: 99=(mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 & flags0)) - 0x6382ce20u)) & flags0)))) & 0xffffu | 29=(mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 & (mask32((mask32(flags0 | 0x954df65u)) + 0x5b466f3bu)))) - 0x6382ce20u)) & (ma... */
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x3u */
    /* observed top targets: 114@0x90319:1729,189@0x9e7af:1581,347@0xc088d:1461,258@0xadf2c:1384,337@0xbec0e:1249,174@0x9bd8f:1212 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_114(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=114, native=0x90319, class=static_validated, events=25300, shape=VVVV, delta=+0x4 */
    /* operands: b0=var255(top=0x99:2.0%);b1=var198(top=0x77:2.9%);b2=var250(top=0xa6:2.9%);b3=var248(top=0xcf:2.6%) */
    /* native IP reads: 0x903ca:byte0,0x905bc:u16_2,0x90746:byte0,0x907d0:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    /* vm->state = state0 ^ flags0 & state0 | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + state0 & 0x48367f78u ^ 0x63bb548fu + flags0 & state0 | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + state0 & 0x292b555du ^ U16(vm->ip + 0x2u) + state0 ^ flags0 & state0 | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + state0 & 0x48367f78u ^ 0x63bb548fu + flags0 & state0 | 0x6729b5bfu - 0x3dca653...; */
    vm->flags = flags0 & state0;
    /* slot variants: 51=(mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32((mask32(flags0 & (mask32(state0 | 0x6729b5bfu)))) + state0)) & 0x48367f78u)))) ^ 0x63bb548fu)) + (mask32((mas...#c641ff3c3e67 | 36=(mask32((mask... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 66@0x855ff:2041,185@0x9d964:1516,215@0xa4609:1500,18@0x7be9b:1307,20@0x7c62b:1184,158@0x99029:1132 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_189(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=189, native=0x9e7af, class=static_validated, events=25112, shape=VVVV, delta=+0x4 */
    /* operands: b0=var256(top=0xec:1.7%);b1=var256(top=0x00:4.4%);b2=var64(top=0xbc:6.1%);b3=var64(top=0xe7:4.7%) */
    /* native IP reads: 0x9e7d0:u16_0,0x9e8a2:byte0,0x9e9fb:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 & 0x160e4f34u + U16(vm->ip + 0x2u) + state0 & 0x160e4f34u ^ 0x2a1ce984u;
    vm->flags = flags0 - 0x10705aceu & 0x49036387u & state0 & 0x160e4f34u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 & 0x160e4f34u)))) ^ 0x2a1ce984u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 18@0x7be9b:1894,297@0xb64d7:1503,215@0xa4609:1354,174@0x9bd8f:1273,307@0xb8064:1197,43@0x8173d:1121 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_347(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=347, native=0xc088d, class=static_validated, events=24299, shape=VVVV, delta=+0x4 */
    /* operands: b0=var256(top=0xe6:2.1%);b1=var79(top=0x0b:6.4%);b2=var230(top=0xba:3.9%);b3=var101(top=0x82:10.2%) */
    /* native IP reads: 0xc08dd:byte0,0xc0a94:u16_2,0xc0cb6:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi;RF+0x60/8:mov */
    /* vm->state = state0 | flags0 + 0x6fa972f0u | flags0 ^ state0 | flags0 + 0x6fa972f0u & 0x45223942u + state0 | flags0 + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & flags0 ^ state0 | flags0 + 0x6fa972f0u & 0x45223942u + state0 | flags0 + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | state0 | flags0 + 0x6fa972f0u | flags0 ^ state0 | flags0 + 0x6fa972f0u & 0x452239...; */
    vm->flags = flags0 ^ state0;
    /* slot variants: 92=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0u)))) | (mask32((mask32(flags0 ^ (mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0u)))...#ff65f5013123 | 36=(mask32((mask3... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 18@0x7be9b:1928,307@0xb8064:1577,297@0xb64d7:1475,28@0x7e390:1302,168@0x9aa83:1257,184@0x9d694:1071 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_307(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=307, native=0xb8064, class=static_validated, events=24095, shape=VVV, delta=+0x3 */
    /* operands: b0=var252(top=0x3a:9.2%);b1=var29(top=0x9d:8.1%);b2=var12(top=0xaf:24.2%) */
    /* native IP reads: 0xb808b:byte0,0xb80c8:b0,0xb8134:byte0,0xb8287:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x1;RIP+0x1/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx */
    vm->state = state0 ^ U8(vm->ip + 0x0u) - flags0 & flags0 & 0x5792b958u ^ flags0 & 0x5792b958u;
    vm->flags = flags0 & 0x5792b958u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) - 0x665a9b5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x3u */
    /* observed top targets: 114@0x90319:1754,176@0x9c10b:1332,189@0x9e7af:1166,337@0xbec0e:1159,258@0xadf2c:1055,340@0xbf435:1046 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_064(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=64, native=0x85059, class=static_validated, events=23678, shape=VVVV, delta=+0x4 */
    /* operands: b0=var256(top=0xef:1.6%);b1=var256(top=0x8a:1.6%);b2=var256(top=0x93:2.0%);b3=var252(top=0x00:3.6%) */
    /* native IP reads: 0x85062:byte0,0x85182:byte0,0x85185:u16_2,0x85273:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 - 0x79614de5u ^ U16(vm->ip + 0x2u) + flags0 + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u ^ flags0 + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    vm->flags = flags0 + 0x4cd0c9aeu + 0x711675f2u & 0x5b249a06u + 0x729dddb0u;
    /* slot variants: 77=(mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 - 0x79614de5u)) ^ (mask32(U16(vm->ip + 0x2u) + flags0)))) ^ (mask32(flags0 + 0x729dddb0u)))))) + 0x2701cdcdu)) & 0xffffu | 51=(mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 18@0x7be9b:2091,28@0x7e390:1633,199@0xa0631:1345,184@0x9d694:1255,215@0xa4609:1065,66@0x855ff:1024 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_066(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=66, native=0x855ff, class=static_validated, events=22739, shape=VVV, delta=+0x3 */
    /* operands: b0=var248(top=0x65:2.5%);b1=var253(top=0xa8:2.1%);b2=var114(top=0x3a:8.4%) */
    /* native IP reads: 0x85656:byte0,0x8579d:b2,0x85969:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ state0 & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - flags0 - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u ^ U16(vm->ip + 0x0u) - state0 & 0x2f6cb1f6u - U8(vm->ip + 0x2u) ^ state0 & 0x2f6cb1f6u ^ 0x745ff1d2u & 0x13de2cddu - flags0 - 0x50170614u | 0x7167293au ^ 0x42a6ffd6u - 0x3cd18153u;
    vm->flags = flags0 - 0x50170614u;
    /* slot variants: 99=(mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 & 0x2f6cb1f6u)) - (mask32(U8(vm->ip + 0x2u) ^ (mask32(state0 & 0x2f6cb1f6u)))))) ^ 0x745ff1d2u)) & 0x13de2cddu)) - (mask32(flags0 ^ 0x42a6ffd6u)))))) - ...#921995e973bc |... */
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x3u */
    /* observed top targets: 337@0xbec0e:1650,64@0x85059:1561,340@0xbf435:1336,184@0x9d694:1324,189@0x9e7af:1320,258@0xadf2c:1075 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_185(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=185, native=0x9d964, class=static_validated, events=21620, shape=VVE, delta=+0x3 */
    /* operands: b0=var189(top=0xe3:2.6%);b1=var153(top=0x89:2.3%);b2=enum3(0x3a:20775,0x62:559,0x50:286) */
    /* native IP reads: 0x9d99f:b2,0x9da18:b2,0x9dbae:byte0,0x9dc18:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 ^ flags0 | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + flags0 | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u | U16(vm->ip + 0x0u) ^ state0 ^ flags0 | 0x17e55682u ^ 0x2000c224u & 0x1f29f35u + flags0 | 0x17e55682u + 0x28030c24u ^ 0x30d03eecu | 0x7fa981au ^ 0x5ea8d1c5u;
    vm->flags = flags0;
    /* slot variants: 128=(mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 | 0x17e55682u)))) ^ 0x2000c224u)) & 0x1f29f35u)) + (mask32((mask32((mask32((mask32((mask32(flags0 | 0x17e55682u)) + 0x28030c24u)) ^ 0x30u...#9720c2374b63 */
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x3u */
    /* observed top targets: 337@0xbec0e:1336,64@0x85059:1324,347@0xc088d:1270,174@0x9bd8f:1182,258@0xadf2c:1100,168@0x9aa83:964 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_215(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=215, native=0xa4609, class=static_validated, events=21174, shape=VVV, delta=+0x3 */
    /* operands: b0=var29(top=0x88:10.5%);b1=var11(top=0x05:21.1%);b2=var114(top=0xc8:9.2%) */
    /* native IP reads: 0xa4838:b2,0xa49a4:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 | 0x760f463fu - flags0 | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u + U8(vm->ip + 0x2u) + state0 | 0x760f463fu - flags0 | 0x77dcc51bu ^ 0xee9796du ^ 0x717a207cu + 0x15a799ddu | 0x6c5f0f12u | 0x38d2bdd3u - U16(vm->ip + 0x0u);
    vm->flags = flags0;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x3u */
    /* observed top targets: 114@0x90319:1359,337@0xbec0e:1186,347@0xc088d:1123,189@0x9e7af:1119,258@0xadf2c:1070,340@0xbf435:1042 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_297(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=297, native=0xb64d7, class=static_validated, events=20640, shape=VVV, delta=+0x3 */
    /* operands: b0=var222(top=0x89:5.5%);b1=var249(top=0x2e:3.1%);b2=var256(top=0xad:1.8%) */
    /* native IP reads: 0xb65bd:byte0,0xb66cb:b0,0xb6832:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    /* vm->state = state0 - 0x48220942u | flags0 + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U8(vm->ip + 0x0u) + state0 - 0x48220942u | flags0 + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + flags0 + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu - U16(vm->ip + 0x1u) - state0 - 0x48220942u | flags0 + 0x283684b4u ^ 0x4a5a939au | 0x6650e9bbu ^ 0x6b7f38b7u + U...; */
    vm->flags = flags0 + 0x283684b4u ^ 0x4a5a939au;
    /* slot variants: 90=(mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32(state0 - 0x48220942u)) | flags0)) ^ 0x6b7f38b7u)) + (mask32((mask32(U8(vm->ip + 0x0u) + (mask32((mask32((mask32(state0 - 0x48220942u)) | flags0)) ^ 0x6b7f38b7u)))) + ...#1cd190d01d02 | ... */
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x3u */
    /* observed top targets: 347@0xc088d:1305,258@0xadf2c:1285,340@0xbf435:1194,114@0x90319:909,123@0x91a59:902,43@0x8173d:896 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_199(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=199, native=0xa0631, class=static_validated, events=19641, shape=VVV, delta=+0x3 */
    /* operands: b0=var128(top=0xc7:3.5%);b1=var256(top=0x88:2.4%);b2=var179(top=0x3a:9.8%) */
    /* native IP reads: 0xa063e:byte0,0xa0708:b2,0xa08c7:byte0,0xa0a0e:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax;RF+0x194/1:mov */
    vm->state = state0 + U8(vm->ip + 0x2u) + flags0 ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + flags0 ^ 0x7353b039u - 0x24d1328au;
    vm->flags = flags0 ^ 0x7353b039u - 0x24d1328au & 0x4705559fu + 0x79865026u + 0x73a763f8u;
    /* slot variants: 106=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 + (mask32(U8(vm->ip + 0x2u) + flags0)))) ^ 0x7e708197u)) & 0x20d5418u)) + flags0)))) + 0x3030bb89u)) & 0xffffu | 22=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(... */
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x3u */
    /* observed top targets: 258@0xadf2c:1481,64@0x85059:1221,340@0xbf435:993,189@0x9e7af:968,184@0x9d694:957,346@0xc0535:947 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_043(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=43, native=0x8173d, class=static_validated, events=16136, shape=VVVV, delta=+0x4 */
    /* operands: b0=var251(top=0x17:2.2%);b1=var251(top=0x74:5.0%);b2=var252(top=0xa3:3.3%);b3=var244(top=0x00:10.4%) */
    /* native IP reads: 0x81787:byte0,0x817f5:byte0,0x818b5:u16_2,0x81a95:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 ^ U16(vm->ip + 0x2u) ^ state0;
    vm->flags = flags0 ^ 0x542b3101u & 0x494c0852u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ (mask32(U16(vm->ip + 0x2u) ^ state0)))))) - 0x64d373dcu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 347@0xc088d:1058,287@0xb45d2:806,337@0xbec0e:770,26@0x7dbbb:765,189@0x9e7af:762,297@0xb64d7:745 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_157(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=157, native=0x98a9a, class=static_validated, events=14693, shape=VVVE, delta=+0x4 */
    /* operands: b0=var125(top=0x03:4.1%);b1=var228(top=0xd8:4.3%);b2=var17(top=0x68:20.5%);b3=enum2(0x00:12160,0x01:2533) */
    /* native IP reads: 0x98bd0:u16_2,0x98ea6:byte0,0x98f23:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - flags0 + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - flags0 + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    vm->flags = flags0 + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & state0 ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) & 0x60d377f3u;
    /* slot variants: 79=(mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 ^ 0x2f4dfd84u)) + U16(vm->ip + 0x2u))) | 0x1f5cd114u)) - (mask32((mask32(flags0 ^ 0x3d2638afu)) & (mask32((mask32(state0 ^ 0x2f4dfd84u)) + U16(vm->ip + 0x2u))))))))) ^ 0x...#f97c... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 18@0x7be9b:993,199@0xa0631:922,66@0x855ff:885,340@0xbf435:831,64@0x85059:828,185@0x9d964:813 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_196(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=196, native=0x9fbcd, class=static_validated, events=14371, shape=VVVV, delta=+0x4 */
    /* operands: b0=var249(top=0xef:3.2%);b1=var250(top=0x6e:7.0%);b2=var62(top=0x0c:6.1%);b3=var110(top=0xf6:6.1%) */
    /* native IP reads: 0x9fc34:u16_0,0x9fe55:byte0,0x9fe91:byte0,0x9ffa2:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RF+0x10f/8:mov;RIP+0x2/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 | 0x52e5924au + flags0 | 0x4083ed99u & state0 | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + flags0 | 0x4083ed99u & state0 | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    vm->flags = flags0;
    /* slot variants: 128=(mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | 0x52e5924au)) + (mask32((mask32((mask32(flags0 | 0x4083ed99u)) & (mask32((mask32(state0 | 0x52e5924au)) ^ 0x20047816u)...#bb377d5c9375 */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 18@0x7be9b:1113,189@0x9e7af:988,340@0xbf435:880,66@0x855ff:807,258@0xadf2c:771,33@0x7f7c4:666 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_168(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=168, native=0x9aa83, class=static_validated, events=14368, shape=VVVV, delta=+0x4 */
    /* operands: b0=var244(top=0xe3:6.9%);b1=var219(top=0x56:6.0%);b2=var192(top=0xde:4.8%);b3=var14(top=0xd9:19.8%) */
    /* native IP reads: 0x9abf7:u16_0,0x9ae4a:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TABLEADV+0x1;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 | 0x6899d5d4u & U16(vm->ip + 0x0u) + flags0 & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u & U16(vm->ip + 0x2u) + state0 | 0x6899d5d4u & U16(vm->ip + 0x0u) + flags0 & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du | 0x4ee70776u + 0x553030a2u;
    vm->flags = flags0 & 0x66031b5eu - 0x2eab70d9u ^ 0x7c2abc25u & 0x46cbe42du & 0x69af076du;
    /* slot variants: 74=(mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32(state0 | 0x6899d5d4u)) & (mask32(U16(vm->ip + 0x0u) + flags0)))))) + 0x553030a2u)) & 0xffffu | 54=(mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32(state0 | 0x6899d5d4u)) & (mask32(U16(vm->ip + 0x0u... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 340@0xbf435:964,258@0xadf2c:861,337@0xbec0e:839,305@0xb78b0:795,189@0x9e7af:776,26@0x7dbbb:749 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_172(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=172, native=0x9b68a, class=static_validated, events=12531, shape=VVVV, delta=+0x4 */
    /* operands: b0=var252(top=0xb3:4.2%);b1=var232(top=0xae:3.5%);b2=var30(top=0x23:12.0%);b3=var11(top=0x03:16.3%) */
    /* native IP reads: 0x9b824:u16_0,0x9b9ca:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 ^ 0x7070916cu - 0x6ecee241u + U16(vm->ip + 0x0u) ^ state0 ^ 0x7070916cu - 0x6ecee241u ^ flags0 ^ 0x15bf847fu & state0 | 0x3eba9edfu | U16(vm->ip + 0x2u) ^ 0x715f0a33u;
    vm->flags = flags0 ^ 0x15bf847fu & state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ 0x715f0a33u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 28@0x7e390:851,258@0xadf2c:760,199@0xa0631:756,305@0xb78b0:674,340@0xbf435:647,189@0x9e7af:642 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_333(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=333, native=0xbd8af, class=static_validated, events=12194, shape=VVVE, delta=+0x4 */
    /* operands: b0=var64(top=0x83:8.1%);b1=var50(top=0xf9:6.4%);b2=var17(top=0x68:18.1%);b3=enum2(0x00:10031,0x01:2163) */
    /* native IP reads: 0xbd966:byte0,0xbd98d:byte0,0xbdaab:u16_2,0xbdc3c:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx */
    vm->state = state0 ^ flags0 ^ state0 | 0x37ccc6eau - 0x61e56767u & flags0 ^ state0 + flags0 ^ state0 | 0x71cc1ee8u | 0x569ecec3u + U16(vm->ip + 0x0u) - state0 ^ flags0 ^ state0 | 0x37ccc6eau - 0x61e56767u & flags0 ^ state0 + flags0 ^ state0 | 0x71cc1ee8u | 0x569ecec3u;
    vm->flags = flags0 ^ state0;
    /* slot variants: 128=(mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32((mask32(flags0 ^ state0)) | 0x37ccc6eau)))) - 0x61e56767u)) & (mask32(flags0 ^ state0)))) + (mask32((mask32(flags0 ^ state0)) | 0x71u...#3558817d6cd6 */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 305@0xb78b0:766,114@0x90319:750,199@0xa0631:703,243@0xaab6a:667,64@0x85059:626,18@0x7be9b:613 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_184(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=184, native=0x9d694, class=static_validated, events=12094, shape=VVCC, delta=+0x4 */
    /* operands: b0=var96(top=0x5a:4.8%);b1=var242(top=0xf4:3.0%);b2=0xe8;b3=0x01 */
    /* native IP reads: 0x9d6d1:byte0,0x9d704:u16_2,0x9d7aa:byte0,0x9d84a:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 | flags0 | 0x19d0d4du + 0x3c030b15u ^ flags0 + 0x7db9efb0u ^ flags0 - flags0 ^ flags0 + U16(vm->ip + 0x0u) - state0 | flags0 | 0x19d0d4du + 0x3c030b15u ^ flags0 + 0x7db9efb0u ^ flags0 - flags0 ^ flags0 + 0x3f05b2f0u;
    vm->flags = flags0 & state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 | 0x19d0d4du)))) + 0x3c030b15u)) ^ (mask32(flags0 + 0x7db9efb0u)))) ^ flags0)) - flags0)) ^ flags0)))) + 0x3f05b2f0u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 340@0xbf435:1208,28@0x7e390:1166,337@0xbec0e:993,66@0x855ff:931,18@0x7be9b:885,114@0x90319:813 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_268(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=268, native=0xb0007, class=static_validated, events=12038, shape=VVVV, delta=+0x4 */
    /* operands: b0=var247(top=0x4a:3.3%);b1=var251(top=0x1c:6.8%);b2=var127(top=0x3e:4.0%);b3=var202(top=0x6c:7.2%) */
    /* native IP reads: 0xb005d:byte0,0xb00db:u16_0,0xb03c0:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;RF+0x170/4:mov */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RF+0x10f/8:mov;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15;RF+0x170/4:mov */
    /* vm->state = state0 | 0x71bd1bb1u + U16(vm->ip + 0x0u) - state0 | 0x71bd1bb1u - flags0 & flags0 + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | flags0 + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - state0 | 0x71bd1bb1u + U16(vm->ip + 0x0u) - state0 | 0x71bd1bb1u - flags0 & flags0 + 0x33c0c75bu & 0x174c40efu - 0x5...; */
    vm->flags = flags0 + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u;
    /* slot variants: 87=(mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32((mask32(state0 | 0x71bd1bb1u)) + (mask32((mask32(U16(vm->ip + 0x0u) - (mask32(state0 | 0x71bd1bb1u)))) - flags0)))) & (mask32((mask32((mask32(flags0 + 0x33c0c75bu)) & 0x17u...#c9358457d4d3 | 41... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 243@0xaab6a:816,28@0x7e390:796,64@0x85059:710,185@0x9d964:693,215@0xa4609:585,305@0xb78b0:479 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_174(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=174, native=0x9bd8f, class=static_validated, events=11742, shape=VVCC, delta=+0x4 */
    /* operands: b0=var191(top=0x03:3.1%);b1=var238(top=0x64:3.1%);b2=0xe8;b3=0x01 */
    /* native IP reads: 0x9be0f:byte0,0x9be9e:byte0,0x9becc:byte0,0x9bf05:u16_2,0x9bfae:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 - flags0 & flags0 ^ flags0 + flags0 ^ 0x5fa9d2b1u | U16(vm->ip + 0x0u) + state0 - flags0 & flags0 ^ flags0 + flags0 ^ 0x5fa9d2b1u + 0x397fd954u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32(state0 - flags0)) & flags0)) ^ flags0)) + flags0)) ^ 0x5fa9d2b1u)))) + 0x397fd954u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 28@0x7e390:1083,258@0xadf2c:1081,114@0x90319:941,347@0xc088d:812,337@0xbec0e:757,185@0x9d964:748 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_305(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=305, native=0xb78b0, class=static_validated, events=10874, shape=VVCC, delta=+0x4 */
    /* operands: b0=var237(top=0x40:4.1%);b1=var225(top=0x09:3.5%);b2=0xe8;b3=0x01 */
    /* native IP reads: 0xb7904:byte0,0xb796e:u16_2,0xb7a28:byte0,0xb7ad9:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 & U16(vm->ip + 0x0u) + state0;
    vm->flags = flags0 & state0 & 0x14763e0cu + 0x47fe8c0bu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 307@0xb8064:1290,189@0x9e7af:771,297@0xb64d7:684,28@0x7e390:581,338@0xbf128:576,199@0xa0631:546 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_123(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=123, native=0x91a59, class=static_validated, events=10598, shape=VVCC, delta=+0x4 */
    /* operands: b0=var226(top=0x56:3.4%);b1=var237(top=0x96:3.3%);b2=0xe8;b3=0x01 */
    /* native IP reads: 0x91ae6:byte0,0x91bc8:u16_2,0x91d9f:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 + 0x3da77425u - U16(vm->ip + 0x0u) - state0 + 0x3da77425u ^ 0x1603b0a9u;
    vm->flags = flags0 & 0x6e640fcbu + 0x6b73b101u + 0x2261b554u + 0x4cd877bfu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32(state0 + 0x3da77425u)))) ^ 0x1603b0a9u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 337@0xbec0e:1011,114@0x90319:972,66@0x855ff:944,347@0xc088d:901,64@0x85059:880,18@0x7be9b:646 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_176(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=176, native=0x9c10b, class=static_validated, events=10138, shape=CCVV, delta=+0x4 */
    /* operands: b0=0xe8;b1=0x01;b2=var235(top=0x82:3.5%);b3=var236(top=0x27:2.7%) */
    /* native IP reads: 0x9c18c:byte0,0x9c1bd:u16_0,0x9c289:byte0,0x9c323:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RF+0x10f/8:mov;RIP+0x2/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 & flags0 & 0x2c46ace3u | flags0 - 0x14b22a15u;
    vm->flags = flags0 - 0x14b22a15u;
    /* slot variants: 78=(mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32(state0 & flags0)) & 0x2c46ace3u)) | flags0)))) ^ 0x37839d72u)) & 0xffffu | 50=(mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32(state0 & flags0)) & 0x2c46ace3u)) | (mask32(flags0 - 0... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 307@0xb8064:959,28@0x7e390:933,189@0x9e7af:821,340@0xbf435:797,18@0x7be9b:752,337@0xbec0e:714 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_315(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=315, native=0xb9451, class=static_validated, events=9921, shape=CCVV, delta=+0x4 */
    /* operands: b0=0xe8;b1=0x01;b2=var18(top=0xe1:11.7%);b3=var10(top=0xfa:20.4%) */
    /* native IP reads: 0xb9552:byte0,0xb9582:byte0,0xb95de:byte0,0xb960c:u16_0,0xb977b:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x10f/8:mov;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 & 0x7562ddb5u ^ 0x25ede89cu - 0x19140c1bu ^ flags0 ^ 0x285c750cu | U16(vm->ip + 0x2u) ^ 0x42c7f071u;
    vm->flags = flags0 ^ 0x285c750cu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ 0x42c7f071u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 28@0x7e390:1006,337@0xbec0e:731,307@0xb8064:617,215@0xa4609:544,64@0x85059:543,157@0x98a9a:512 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_026(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=26, native=0x7dbbb, class=static_validated, events=9886, shape=VVCC, delta=+0x4 */
    /* operands: b0=var176(top=0x9e:4.5%);b1=var242(top=0xcf:3.6%);b2=0xe8;b3=0x01 */
    /* native IP reads: 0x7dc59:byte0,0x7dd8f:byte0,0x7ddd5:u16_2,0x7df05:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    /* vm->state = state0 - 0x471264cau + flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x471264cau | 0x2a01f150u | 0x7bdf07f3u + 0x104dd6dfu ^ 0x505df542u ^ 0xe71ae1du & 0x6dbe9345u + 0x521a2f7bu + state0 - 0x471264cau + 0x1bfb4659u - U16(vm->ip + 0x0u) ^ state0 - 0x471264cau + flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x47...; */
    vm->flags = flags0 - state0 ^ 0x5fcdb203u & 0x637d285cu + 0x44b4a975u ^ state0 - 0x471264cau;
    /* slot variants: 48=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - 0x471264cau)) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(flags0 - (mask32(state0 ^ 0x5fcdb203u)))) ^ (mask32((mask32(state0 - 0x471264cau)) | ...#4dd3c457ce92 | 43=(mask32((mask... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 157@0x98a9a:959,66@0x855ff:687,114@0x90319:655,28@0x7e390:652,258@0xadf2c:567,185@0x9d964:518 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_203(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=203, native=0xa1484, class=static_validated, events=9820, shape=VVVV, delta=+0x4 */
    /* operands: b0=var26(top=0x17:11.8%);b1=var11(top=0x91:19.4%);b2=var120(top=0x3f:5.5%);b3=var99(top=0x76:14.3%) */
    /* native IP reads: 0xa155f:byte0,0xa162c:u16_2,0xa1802:byte0,0xa1890:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    /* vm->state = state0 - flags0 + 0x97da242u & flags0 + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | flags0 + 0x97da242u & state0 - flags0 + 0x97da242u & flags0 + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - flags0 + 0x97da242u & state0 - flags0 + 0x97da242u & flags0 + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2...; */
    vm->flags = flags0 + 0x97da242u & state0 - flags0 + 0x97da242u & flags0 + 0x97da242u ^ 0x370370f1u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ 0x4ccb9807u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 258@0xadf2c:699,297@0xb64d7:584,64@0x85059:479,315@0xb9451:473,189@0x9e7af:461,66@0x855ff:445 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_287(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=287, native=0xb45d2, class=static_validated, events=9723, shape=VVCC, delta=+0x4 */
    /* operands: b0=var120(top=0x86:4.7%);b1=var107(top=0xbe:5.0%);b2=0xe8;b3=0x01 */
    /* native IP reads: 0xb45fe:byte0,0xb4767:byte0,0xb479c:u16_2,0xb489d:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 & 0xa6ddb71u - flags0 - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u - U16(vm->ip + 0x0u) + state0 & 0xa6ddb71u - flags0 - 0x67686890u + 0x609b810au + 0x6975e1b1u - 0x4988e425u | 0x3ab14dd1u ^ 0xa841ebdu;
    vm->flags = flags0 - 0x67686890u + 0x609b810au - 0x1b65c97bu - 0x26941ac4u;
    /* slot variants: 76=(mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 & 0xa6ddb71u)) - (mask32(flags0 + 0x6975e1b1u)))) - 0x4988e425u)) | 0x3ab14dd1u)))) ^ 0xa841ebdu)) & 0xffffu | 52=(mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((ma... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 28@0x7e390:769,297@0xb64d7:686,199@0xa0631:651,189@0x9e7af:621,196@0x9fbcd:582,258@0xadf2c:541 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_020(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=20, native=0x7c62b, class=static_validated, events=9485, shape=CCVV, delta=+0x4 */
    /* operands: b0=0xe8;b1=0x01;b2=var220(top=0xa5:4.7%);b3=var173(top=0x77:9.9%) */
    /* native IP reads: 0x7c63f:byte0,0x7c6ed:byte0,0x7c836:u16_0,0x7c9df:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx;RF+0xa/8:mov */
    vm->state = state0 | flags0 | 0x180e72f2u - 0x36332ac8u - flags0 ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - flags0 ^ 0x58f71b08u & 0x17188826u & U16(vm->ip + 0x2u) ^ state0 | flags0 | 0x180e72f2u - 0x36332ac8u - flags0 ^ 0x58f71b08u & 0x17188826u & 0x1fa2014fu | 0x38e67f26u - flags0 ^ 0x58f71b08u & 0x17188826u;
    vm->flags = flags0 ^ 0x58f71b08u & 0x17188826u;
    /* slot variants: 67=(mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 | 0x180e72f2u)))) - 0x36332ac8u)) - (mask32(flags0 & 0x1fa2014fu)))) | 0x38e67f26u)) - flags0)))) & 0xffffu | 61=(mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((ma... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 114@0x90319:1277,258@0xadf2c:806,337@0xbec0e:720,185@0x9d964:712,347@0xc088d:691,18@0x7be9b:539 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_161(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=161, native=0x9975a, class=static_validated, events=9482, shape=VVCC, delta=+0x4 */
    /* operands: b0=var125(top=0x0e:5.8%);b1=var51(top=0x70:5.8%);b2=0xe8;b3=0x01 */
    /* native IP reads: 0x997b4:byte0,0x99871:u16_2,0x99a65:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 | 0x69145e52u;
    vm->flags = flags0 ^ 0x327a10ceu + 0xb99ee49u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 | 0x69145e52u)))) + 0x4c0132b4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 28@0x7e390:776,337@0xbec0e:707,340@0xbf435:650,18@0x7be9b:637,64@0x85059:606,258@0xadf2c:559 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_243(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=243, native=0xaab6a, class=static_validated, events=9466, shape=VVCC, delta=+0x4 */
    /* operands: b0=var61(top=0x45:8.6%);b1=var69(top=0x9e:13.6%);b2=0xe8;b3=0x01 */
    /* native IP reads: 0xaac91:byte0,0xaacd9:byte0,0xaacf3:byte0,0xaad19:u16_2,0xaae59:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    /* vm->state = state0 ^ 0x47b31677u | flags0 | state0 | 0x5f60d018u + state0 + 0x398f70f4u & 0x4ec4a2f1u ^ 0x57df388cu & flags0 | state0 | 0x5f60d018u + state0 + 0x398f70f4u & 0x4ec4a2f1u & state0 ^ 0x47b31677u | flags0 | state0 | 0x5f60d018u + state0 + 0x398f70f4u & 0x4ec4a2f1u - 0x289ce9b6u + U16(vm->ip + 0x0u) - state0 ^ 0x47b31677u | flags0 | state0 | 0x5f60d018u + ...; */
    vm->flags = flags0;
    /* slot variants: 66=(mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32(state0 ^ 0x47b31677u)) | (mask32((mask32(flags0 | (mask32(state0 | 0x5f60d018u)))) + state0)))) ^ 0x57df388cu)) & (mask32((mask32((mask32(flags0 | (ma...#4a5a594e1e3d | 62=(mask32((mask... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 307@0xb8064:733,189@0x9e7af:698,18@0x7be9b:642,185@0x9d964:578,28@0x7e390:559,337@0xbec0e:510 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_158(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=158, native=0x99029, class=static_validated, events=9432, shape=CCVV, delta=+0x4 */
    /* operands: b0=0xe8;b1=0x01;b2=var224(top=0xf6:3.1%);b3=var226(top=0xd6:4.1%) */
    /* native IP reads: 0x990a9:byte0,0x990de:u16_0,0x9914f:byte0,0x99213:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 ^ 0x1fbfc3f3u ^ flags0 ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ flags0 ^ 0x3c39b020u + U16(vm->ip + 0x2u) + state0 ^ 0x1fbfc3f3u ^ flags0 ^ 0x3c39b020u ^ 0x1f711c95u | 0xfb6049eu ^ flags0 ^ 0x3c39b020u ^ 0x3ffdb46cu;
    vm->flags = flags0 ^ 0x3c39b020u;
    /* slot variants: 79=(mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32(state0 ^ 0x1fbfc3f3u)) ^ (mask32(flags0 ^ 0x1f711c95u)))) | 0xfb6049eu)) ^ flags0)))) ^ 0x3ffdb46cu)) & 0xffffu | 49=(mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 340@0xbf435:989,189@0x9e7af:726,337@0xbec0e:710,18@0x7be9b:695,258@0xadf2c:648,64@0x85059:648 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_033(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=33, native=0x7f7c4, class=static_validated, events=9247, shape=CCVV, delta=+0x4 */
    /* operands: b0=0xe8;b1=0x01;b2=var122(top=0x34:5.8%);b3=var129(top=0xc8:6.6%) */
    /* native IP reads: 0x7f882:byte0,0x7f892:byte0,0x7f8c2:byte0,0x7f8d3:byte0,0x7f90c:u16_0,0x7fac2:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 | 0x15422921u & U16(vm->ip + 0x2u) + state0 | 0x15422921u + 0x2d0713f3u;
    vm->flags = flags0 ^ state0 & 0x457915dcu & 0x16110d0au;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 | 0x15422921u)))) + 0x2d0713f3u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 258@0xadf2c:873,307@0xb8064:735,157@0x98a9a:700,114@0x90319:514,167@0x9a8d2:489,64@0x85059:438 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_346(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=346, native=0xc0535, class=static_validated, events=9073, shape=VVCC, delta=+0x4 */
    /* operands: b0=var232(top=0x22:3.1%);b1=var243(top=0x94:3.1%);b2=0xe8;b3=0x01 */
    /* native IP reads: 0xc0549:byte0,0xc066d:byte0,0xc069f:u16_2,0xc07c6:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 ^ flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u ^ 0x45fbcef1u;
    vm->flags = flags0 ^ 0x3f746ab3u ^ 0x3f5501a6u - 0x3d02d701u - 0x727be02cu;
    /* slot variants: 74=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ (mask32(flags0 ^ 0x45fbcef1u)))))) + 0x7f7eb061u)) & 0xffffu | 54=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ (mask32((mask32((mask32(flags0 ^ 0x3f746ab3u)) ^ 0x3f5501a6u)) ^ 0x45fbcef1u))))... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 28@0x7e390:862,168@0x9aa83:678,258@0xadf2c:614,185@0x9d964:572,64@0x85059:531,347@0xc088d:490 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_108(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=108, native=0x8f24b, class=static_validated, events=5239, shape=VV, delta=+0x2 */
    /* operands: b0=var228(top=0xce:5.1%);b1=var237(top=0x85:6.6%) */
    /* native IP reads: 0x8f363:byte0,0x8f4b5:byte0,0x8f585:byte0,0x8f5fe:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RF+0x10f/8:mov;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx */
    vm->state = state0 + 0x11961dc7u ^ 0x5fa19cc7u - flags0;
    vm->flags = flags0 ^ 0x1d98f07au & 0x60594c67u - 0x2e3abdaeu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 + 0x11961dc7u)) ^ 0x5fa19cc7u)) - flags0)))) + 0x36f124dbu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x2u */
    /* observed top targets: 337@0xbec0e:401,215@0xa4609:378,333@0xbd8af:371,196@0x9fbcd:328,297@0xb64d7:248,345@0xc02e4:227 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_144(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=144, native=0x95887, class=static_validated, events=5218, shape=VV, delta=+0x2 */
    /* operands: b0=var32(top=0x87:10.1%);b1=var11(top=0x99:16.2%) */
    /* native IP reads: 0x9589b:byte0,0x9597f:byte0,0x959a0:byte0,0x95aa3:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    vm->flags = flags0 - 0x387407b9u + 0x2cd392b6u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 & 0x61f88068u)) & 0x1d022eeeu)) ^ 0x6367b3ddu)))) - 0x2f1222e2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x2u */
    /* observed top targets: 258@0xadf2c:577,268@0xb0007:365,18@0x7be9b:315,168@0x9aa83:310,114@0x90319:236,347@0xc088d:211 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_160(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=160, native=0x994cf, class=static_validated, events=5207, shape=VV, delta=+0x2 */
    /* operands: b0=var52(top=0x79:6.7%);b1=var12(top=0x2f:18.6%) */
    /* native IP reads: 0x99519:byte0,0x996a2:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ state0 | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    vm->flags = flags0 - 0x559d4d7bu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 | 0x67f1fed6u)) & 0x256c03d7u)) | 0x72df8f7au)) & 0x5a1beb81u)))) - 0x4cf19f11u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x2u */
    /* observed top targets: 185@0x9d964:351,215@0xa4609:346,43@0x8173d:319,18@0x7be9b:310,172@0x9b68a:268,157@0x98a9a:268 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_173(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=173, native=0x9ba74, class=static_validated, events=5101, shape=VV, delta=+0x2 */
    /* operands: b0=var117(top=0xaf:7.6%);b1=var32(top=0x0b:13.4%) */
    /* native IP reads: 0x9bb43:byte0,0x9bc26:byte0,0x9bcb9:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11;RF+0x23/4:mov */
    vm->state = state0 + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & flags0 - state0 + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u & U16(vm->ip + 0x0u) ^ state0 + 0x5eced92du ^ 0x456d7018u | 0xebbbd20u & flags0 - state0 + 0x5eced92du | 0x1f8bac4cu & 0x74128b65u + 0x1f118051u;
    vm->flags = flags0 - state0 + 0x5eced92du;
    /* slot variants: 128=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 + 0x5eced92du)) ^ 0x456d7018u)) | 0xebbbd20u)) & (mask32((mask32(flags0 - (mask32((mask32(state0 + 0x5eced92du)) | 0x1f8bac4cu)))) & 0x74128b65u))...#17c0d851344f */
    vm->ip += 0x2;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x2u */
    /* observed top targets: 64@0x85059:483,196@0x9fbcd:369,337@0xbec0e:364,340@0xbf435:287,114@0x90319:283,349@0xc140b:264 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_257(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=257, native=0xadbfd, class=static_validated, events=4958, shape=VV, delta=+0x2 */
    /* operands: b0=var32(top=0xe7:10.9%);b1=var43(top=0xb5:9.7%) */
    /* native IP reads: 0xadcba:byte0,0xadd23:byte0,0xadd44:byte0,0xade34:u16_0,0xadecb:u16_0 - state0 - 0x509f61c9 + 0x1b9def5 - 0x7d4ca123 | 0x1d2af87 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u ^ U16(vm->ip + 0x0u) - state0 - 0x509f61c9u + 0x1b9def5u - 0x7d4ca123u | 0x1d2af87u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32(state0 - 0x509f61c9u)) + 0x1b9def5u)) - 0x7d4ca123u)) | 0x1d2af87u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x2u */
    /* observed top targets: 172@0x9b68a:777,43@0x8173d:281,157@0x98a9a:273,185@0x9d964:247,203@0xa1484:215,168@0x9aa83:213 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_198(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=198, native=0xa037e, class=static_validated, events=4955, shape=VV, delta=+0x2 */
    /* operands: b0=var217(top=0xe3:5.4%);b1=var220(top=0x54:5.3%) */
    /* native IP reads: 0xa0405:byte0,0xa04a2:byte0,0xa057b:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u - U16(vm->ip + 0x0u) - state0 + flags0 - 0x5e173fc7u - 0x3cd02127u + flags0 + 0x15b2dfa5u ^ 0x3fe99379u;
    vm->flags = flags0 + 0x15b2dfa5u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 + (mask32(flags0 - 0x5e173fc7u)))) - 0x3cd02127u)) + (mask32(flags0 + 0x15b2dfa5u)))))) ^ 0x3fe99379u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x2u */
    /* observed top targets: 199@0xa0631:355,300@0xb6c36:328,18@0x7be9b:316,258@0xadf2c:314,337@0xbec0e:296,215@0xa4609:272 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_352(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=352, native=0xc1ec4, class=static_validated, events=4424, shape=VV, delta=+0x2 */
    /* operands: b0=var124(top=0x16:8.0%);b1=var55(top=0xdb:8.3%) */
    /* native IP reads: 0xc1fb5:byte0,0xc2064:byte0,0xc20ed:u16_0,0xc2189:u16_0 + state0 & 0x31863366 + 0x331dfc06 & 0xffff */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 & 0x31863366u | U16(vm->ip + 0x0u) + state0 & 0x31863366u + 0x331dfc06u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 & 0x31863366u)))) + 0x331dfc06u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x2u */
    /* observed top targets: 258@0xadf2c:408,307@0xb8064:319,196@0x9fbcd:305,340@0xbf435:288,292@0xb540f:263,172@0x9b68a:240 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_301(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=301, native=0xb708d, class=static_validated, events=4380, shape=CCCVV, delta=+0x5 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var115(top=0xdf:19.9%);b4=var115(top=0x18:6.4%) */
    /* native IP reads: 0xb73ae:b0,0xb7429:u16_1,0xb74c3:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 & flags0 ^ U16(vm->ip + 0x3u) - state0 & flags0 - 0x2c0febdfu;
    vm->flags = flags0 + 0x34c21ec8u + 0x4bcb296bu - 0x72148c24u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32(state0 & flags0)))) - 0x2c0febdfu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 160@0x994cf:954,198@0xa037e:729,173@0x9ba74:669,352@0xc1ec4:627,256@0xad849:458,144@0x95887:350 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_049(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=49, native=0x82820, class=static_validated, events=4132, shape=CVVCC, delta=+0x5 */
    /* operands: b0=0x00;b1=var168(top=0x78:8.6%);b2=var190(top=0xa7:6.9%);b3=0x3d;b4=0x01 */
    /* native IP reads: 0x829b3:byte0,0x82a44:byte0,0x82b4a:byte0,0x82be8:byte0,0x82bf9:b0,0x82c49:u16_3,0x82da2:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8;RF+0xa/8:mov */
    vm->state = state0 & flags0 + flags0 - 0x353700edu + 0x55a592d8u - U16(vm->ip + 0x1u) + state0 & flags0 + flags0 - 0x353700edu + 0x55a592d8u + 0x55b8ef8du;
    vm->flags = flags0 ^ state0 & flags0 + flags0 - 0x353700edu + 0x55a592d8u ^ 0x702de876u + state0 & flags0 + flags0 - 0x353700edu + 0x55a592d8u + 0x7a4ca08u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) + (mask32((mask32((mask32((mask32(state0 & flags0)) + flags0)) - 0x353700edu)) + 0x55a592d8u)))) + 0x55b8ef8du)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 144@0x95887:1018,352@0xc1ec4:600,257@0xadbfd:590,198@0xa037e:521,160@0x994cf:514,173@0x9ba74:413 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_256(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=256, native=0xad849, class=static_validated, events=3880, shape=VV, delta=+0x2 */
    /* operands: b0=var155(top=0x3d:6.6%);b1=var156(top=0x27:6.6%) */
    /* native IP reads: 0xad894:byte0,0xad9af:byte0,0xad9ef:byte0,0xad9fc:byte0,0xadb1a:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au | flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u & U16(vm->ip + 0x0u) + state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au | flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au ^ 0x30de4dc1u - 0x3817cdccu;
    vm->flags = flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au ^ state0 ^ 0x3e93f8dbu + 0x1734aabdu ^ flags0 - state0 ^ 0x3e93f8dbu ^ 0x7a7f365au;
    /* slot variants: 128=(mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32(state0 ^ 0x3e93f8dbu)) + 0x1734aabdu)) ^ (mask32((mask32(flags0 - (mask32(state0 ^ 0x3e93f8dbu)))) ^ 0x7a7f365au)))) | (mask32((mask32(flags0 -...#c7dbf700ff0f */
    vm->ip += 0x2;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x2u */
    /* observed top targets: 340@0xbf435:390,189@0x9e7af:295,199@0xa0631:233,168@0x9aa83:225,215@0xa4609:209,114@0x90319:207 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_079(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=79, native=0x885b0, class=static_validated, events=3633, shape=VVCCC, delta=+0x5 */
    /* operands: b0=var64(top=0x9e:15.9%);b1=var86(top=0x28:12.3%);b2=0x3d;b3=0x01;b4=0x00 */
    /* native IP reads: 0x886f1:byte0,0x887e6:b4,0x88863:u16_2,0x889ac:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10;RF+0xa/8:mov */
    vm->state = state0 - flags0 ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | flags0 ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ flags0 ^ 0xc7e744fu + 0x60a9dba6u | U16(vm->ip + 0x0u) ^ state0 - flags0 ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | flags0 ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ flags0 ^ 0xc7e744fu + 0x60a9dba6u;
    vm->flags = flags0 ^ 0xc7e744fu;
    /* slot variants: 128=(mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x623ccce4u)))) & 0xd4da920u)) | (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x225dfa31u)))...#ef7ba4952b24 */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 257@0xadbfd:865,198@0xa037e:745,160@0x994cf:451,108@0x8f24b:397,144@0x95887:373,256@0xad849:350 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_220(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=220, native=0xa522e, class=static_validated, events=3576, shape=CCCVV, delta=+0x5 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var164(top=0x03:9.0%);b4=var199(top=0x7e:7.4%) */
    /* native IP reads: 0xa52f6:byte0,0xa5652:b0,0xa56d2:u16_1,0xa579f:u16_3,0xa57c4:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 | flags0 + 0x46462807u & 0x2332d827u - flags0 - state0 | flags0 & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - state0 | flags0 + 0x46462807u & 0x2332d827u - flags0 - state0 | flags0 & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    vm->flags = flags0 - state0;
    /* slot variants: 128=(mask32((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32((mask32(state0 | flags0)) + 0x46462807u)) & 0x2332d827u)) - (mask32(flags0 - (mask32((mask32(state0 | flags0)) & 0x4297c9ddu)))))) + 0x6f8e6e16u)))) + ...#d715de7234c8 */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 144@0x95887:813,108@0x8f24b:555,173@0x9ba74:520,198@0xa037e:485,352@0xc1ec4:405,256@0xad849:351 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_003(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=3, native=0x78c77, class=static_validated, events=3434, shape=VVCCC, delta=+0x5 */
    /* operands: b0=var20(top=0x19:19.7%);b1=var60(top=0x26:9.2%);b2=0x00;b3=0x3d;b4=0x01 */
    /* native IP reads: 0x78c84:byte0,0x78d73:byte0,0x79156:b2,0x79182:u16_3,0x791dc:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 - flags0 - 0x1c03cc82u - flags0 | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu ^ U16(vm->ip + 0x0u) ^ state0 - flags0 - 0x1c03cc82u - flags0 | 0x38c49877u - 0x742d9511u + 0x4ddaed7bu + 0x4bc0d288u;
    vm->flags = flags0 ^ 0x1f2b12e0u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) - 0x1c03cc82u)) - flags0)) | 0x38c49877u)) - 0x742d9511u)) + 0x4ddaed7bu)))) + 0x4bc0d288u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 160@0x994cf:635,256@0xad849:510,257@0xadbfd:503,144@0x95887:485,352@0xc1ec4:418,173@0x9ba74:377 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_332(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=332, native=0xbd36d, class=static_validated, events=3292, shape=VVVV, delta=+0x4 */
    /* operands: b0=var38(top=0x0b:15.7%);b1=var19(top=0xd7:43.6%);b2=var79(top=0xf7:9.8%);b3=var108(top=0xca:15.7%) */
    /* native IP reads: 0xbd405:byte0,0xbd53b:u16_0,0xbd7ed:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;RF+0x170/4:mov */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi;RF+0x170/4:mov */
    /* vm->state = state0 | 0x30661b97u & 0x57d9fe65u | flags0 & state0 | 0x2f0ca7d2u & state0 | 0x30661b97u - 0x23cebdbcu ^ state0 | 0x30661b97u & 0x57d9fe65u & flags0 & state0 | 0x2f0ca7d2u & state0 | 0x30661b97u - 0x23cebdbcu ^ state0 | 0x30661b97u & 0x57d9fe65u + 0x149316fau + flags0 & state0 | 0x2f0ca7d2u & state0 | 0x30661b97u - 0x23cebdbcu ^ state0 | 0x30661b97u & 0x...; */
    vm->flags = flags0 & state0;
    /* slot variants: 128=(mask32((mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((mask32((mask32((mask32((mask32(state0 | 0x30661b97u)) & 0x57d9fe65u)) | (mask32((mask32((mask32(flags0 & (mask32(state0 | 0x2f0ca7d2u)))) & (mask32((mask32(state0 | ...#6b21d34199eb */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 347@0xc088d:268,114@0x90319:257,90@0x8b334:256,99@0x8c99a:256,319@0xba72f:256,258@0xadf2c:249 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_300(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=300, native=0xb6c36, class=static_validated, events=3190, shape=VVVV, delta=+0x4 */
    /* operands: b0=var134(top=0x12:10.9%);b1=var135(top=0x85:10.1%);b2=var96(top=0x60:10.2%);b3=var122(top=0x42:10.0%) */
    /* native IP reads: 0xb6cba:byte0,0xb6da9:u16_0,0xb6fed:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12;RF+0x60/8:mov */
    vm->state = state0 & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + state0 & 0x2b7e7713u & 0x515f6307u + flags0 & 0x742354du + 0x2ff05a2bu | flags0 & 0x742354du + 0x2ff05a2bu & 0x1011ba33u ^ U16(vm->ip + 0x2u) - state0 & 0x2b7e7713u & 0x515f6307u - U16(vm->ip + 0x0u) + state0 & 0x2b7e7713u & 0x515f6307u + flags0 & 0x742354du + 0x2ff05a2bu | flags0 & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    vm->flags = flags0 & 0x742354du + 0x2ff05a2bu & 0x1011ba33u;
    /* slot variants: 120=(mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32((mask32(state0 & 0x2b7e7713u)) & 0x515f6307u)) - (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32(state0 & 0x2b7e7713u)) & 0x515f6307u)))) + flags0)))) | (mask32(flags0 & 0x101u...#c6f36fb6c762 | ... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 258@0xadf2c:517,220@0xa522e:355,183@0x9d495:268,337@0xbec0e:262,333@0xbd8af:262,185@0x9d964:260 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_260(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=260, native=0xae90b, class=static_validated, events=2645, shape=VVVV, delta=+0x4 */
    /* operands: b0=var69(top=0x38:9.9%);b1=var13(top=0x0f:27.6%);b2=var108(top=0x38:9.7%);b3=var54(top=0x00:20.7%) */
    /* native IP reads: 0xaeb17:u16_2,0xaeb74:u16_2 + state0 + 0x581f6275 ^ flags0 - 0x705f9ad2 + 0x760922e2 & 0x2efb7283 | 0x7ba7e961 + flags0 - 0x705f9ad2 + 0x760922e2 | flags0 - 0x705f9ad2 + 0x760922e2 & 0x5af0e1db | 0x17270855 | flags0 - 0x705f9ad2 + 0x760922e2 | flags0 - 0x70... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx */
    /* vm->state = state0 + 0x581f6275u ^ flags0 - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u | 0x7ba7e961u + flags0 - 0x705f9ad2u + 0x760922e2u | flags0 - 0x705f9ad2u + 0x760922e2u & 0x5af0e1dbu | 0x17270855u | flags0 - 0x705f9ad2u + 0x760922e2u | flags0 - 0x705f9ad2u + 0x760922e2u & U16(vm->ip + 0x2u) + state0 + 0x581f6275u ^ flags0 - 0x705f9ad2u + 0x760922e2u & 0x2efb7283u ...; */
    vm->flags = flags0 - 0x705f9ad2u + 0x760922e2u ^ 0x34525a09u ^ 0x17010cf2u;
    /* slot variants: 65=(mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 + 0x581f6275u)) ^ (mask32((mask32((mask32(flags0 - 0x705f9ad2u)) + 0x760922e2u)) & 0x2efb7283u)))) | 0x7u...#48de51d8b991 | 63=(mask32((ma... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 180@0x9cf32:356,189@0x9e7af:271,340@0xbf435:257,183@0x9d495:247,91@0x8b6de:204,64@0x85059:186 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_269(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=269, native=0xb045b, class=static_validated, events=2612, shape=CCCVV, delta=+0x5 */
    /* operands: b0=0x00;b1=0x3d;b2=0x01;b3=var122(top=0xf7:15.2%);b4=var137(top=0xbe:17.0%) */
    /* native IP reads: 0xb0718:b0,0xb077c:u16_1,0xb086c:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 ^ flags0 & state0 & 0x6f7fff69u & flags0 & state0 | flags0 & state0 ^ 0x4f60a287u + U16(vm->ip + 0x3u) + state0 ^ flags0 & state0 & 0x6f7fff69u & flags0 & state0 | flags0 & state0 ^ 0x4f60a287u + 0x4faa382u;
    vm->flags = flags0 & state0 + 0x46ecf942u + 0x6cc73334u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + (mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 & state0)))) & 0x6f7fff69u)) & (mask32(flags0 & state0)))) | (mask32((mask32(flags0 & state0)) ^ 0x4f60a287u)))))) + 0x4faa382u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 108@0x8f24b:571,352@0xc1ec4:384,256@0xad849:368,160@0x994cf:364,173@0x9ba74:364,257@0xadbfd:274 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_030(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=30, native=0x7e849, class=static_validated, events=2590, shape=VVVV, delta=+0x4 */
    /* operands: b0=var131(top=0xb6:12.4%);b1=var144(top=0x64:10.0%);b2=var114(top=0xe3:9.9%);b3=var93(top=0x01:22.7%) */
    /* native IP reads: 0x7e853:byte0,0x7e965:byte0,0x7ea01:u16_2,0x7ec01:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 | flags0 & 0x614d4b17u + 0x64fd160cu;
    vm->flags = flags0 & 0x614d4b17u;
    /* slot variants: 113=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | flags0)) + 0x64fd160cu)))) + 0x5903fc84u)) & 0xffffu | 15=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | (mask32(flags0 & 0x614d4b17u)))) + 0x64fd160cu)))) + 0x5903fc84u)) & 0x... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 183@0x9d495:397,203@0xa1484:350,91@0x8b6de:266,192@0x9f00a:256,337@0xbec0e:187,185@0x9d964:185 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_171(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=171, native=0x9b4b3, class=static_validated, events=2533, shape=VE, delta=+0x2 */
    /* operands: b0=var30(top=0x42:16.1%);b1=enum2(0x00:1393,0x01:1140) */
    /* native IP reads: 0x9b5fd:u16_0,0x9b600:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = 0x0u;
    vm->flags = 0x0u & 0x35efe488u + 0x44a4d3f8u;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x2u */
    /* observed top targets: 196@0x9fbcd:352,337@0xbec0e:328,322@0xbb3c9:256,333@0xbd8af:191,43@0x8173d:186,66@0x855ff:152 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_239(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=239, native=0xa991e, class=static_validated, events=2519, shape=VVVVVV, delta=+0x6 */
    /* operands: b0=var140(top=0x2a:5.5%);b1=var65(top=0x02:11.2%);b2=var36(top=0xc1:13.6%);b3=var23(top=0x21:15.7%);b4=var72(top=0xbe:8.8%);b5=var29(top=0xa6:21.0%) */
    /* native IP reads: 0xa9953:byte0,0xa9a63:u32_0,0xa9c3d:u16_4 */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x4;RF+0x10f/8:mov;RIP+0x4/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu & U32(vm->ip + 0x0u) - state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu - U16(vm->ip + 0x4u) + state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu & U32(vm->ip + 0x0u) - state0 + 0x40a7aa16u + flags0 & 0x39d16b3eu - 0x3650a0aeu;
    vm->flags = flags0 & state0 + 0x40a7aa16u + flags0 + 0x627d85abu + 0x29b54516u & 0x66aaa5eu ^ 0x7efd4127u;
    /* slot variants: 128=(mask32((mask32(U16(vm->ip + 0x4u) + (mask32((mask32((mask32((mask32(state0 + 0x40a7aa16u)) + flags0)) & 0x39d16b3eu)) & (mask32(U32(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 + 0x40a7aa16u)) + flags0)) & 0x39d16b3eu)))))))) - 0...#398cebc46e7f */
    vm->ip += 0x6;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x6u */
    /* observed top targets: 297@0xb64d7:255,28@0x7e390:228,320@0xbada5:208,37@0x80685:177,157@0x98a9a:154,340@0xbf435:138 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_167(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=167, native=0x9a8d2, class=static_validated, events=2509, shape=CCCCVV, delta=+0x6 */
    /* operands: b0=0xe8;b1=0x01;b2=0x3d;b3=0x01;b4=var87(top=0xf5:13.7%);b5=var97(top=0x2d:11.6%) */
    /* native IP reads: 0x9a957:u16_2,0x9a979:u16_0,0x9aa0f:u16_4 */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx;RF+0x23/4:mov */
    vm->state = state0 - U16(vm->ip + 0x4u) ^ state0 ^ 0x5f92615u;
    vm->flags = flags0 - 0x69d75971u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x4u) ^ state0)) ^ 0x5f92615u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x6u */
    /* observed top targets: 351@0xc1d48:1262,283@0xb3612:790,295@0xb60e0:457 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_083(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=83, native=0x8947b, class=static_validated, events=2508, shape=VVCCC, delta=+0x5 */
    /* operands: b0=var179(top=0xa8:5.0%);b1=var175(top=0x19:9.8%);b2=0x00;b3=0x3d;b4=0x01 */
    /* native IP reads: 0x8965b:b2,0x89688:u16_3,0x8974d:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 & 0x122d7f19u | flags0 + 0x60e2eab8u - 0x34a4c404u - U16(vm->ip + 0x0u) + state0 & 0x122d7f19u | flags0 + 0x60e2eab8u - 0x34a4c404u ^ 0x4b7ebb84u;
    vm->flags = flags0 ^ 0xe368451u - 0x1f36e121u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 & 0x122d7f19u)) | flags0)) + 0x60e2eab8u)) - 0x34a4c404u)))) ^ 0x4b7ebb84u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 173@0x9ba74:548,108@0x8f24b:441,160@0x994cf:336,257@0xadbfd:286,352@0xc1ec4:284,144@0x95887:271 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_350(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=350, native=0xc1926, class=static_validated, events=2414, shape=VVVV, delta=+0x4 */
    /* operands: b0=var143(top=0x12:10.9%);b1=var102(top=0xa6:10.6%);b2=var82(top=0xb7:10.6%);b3=var11(top=0x34:25.8%) */
    /* native IP reads: 0xc193d:byte0,0xc1a6c:u16_0,0xc1c1d:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 + 0x5c4fb994u - 0x33be5a8bu ^ flags0 & state0 + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ state0 + 0x5c4fb994u - 0x33be5a8bu ^ flags0 & state0 + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x2u) ^ state0 + 0x5c4fb994u - 0x33be5a8bu ^ flags0 & state0 + 0x5c4fb994u + 0x261f270fu & U16(vm->ip + 0x0u) ^ state0 + 0x5c4fb994u - 0x33be5a8bu ^ flags0 & state0 + 0x5c4fb994u + 0x261f270fu ^ 0x678e3cb6u;
    vm->flags = flags0 & state0 + 0x5c4fb994u + 0x261f270fu - 0x35f71c01u;
    /* slot variants: 128=(mask32((mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((mask32((mask32(state0 + 0x5c4fb994u)) - 0x33be5a8bu)) ^ (mask32(flags0 & (mask32((mask32(state0 + 0x5c4fb994u)) + 0x261f270fu)))))) & (mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(...#23bb1febe96e */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 183@0x9d495:318,258@0xadf2c:257,281@0xb2db6:257,91@0x8b6de:203,114@0x90319:158,180@0x9cf32:147 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_192(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=192, native=0x9f00a, class=static_validated, events=2339, shape=VVCCV, delta=+0x5 */
    /* operands: b0=var148(top=0x4e:11.2%);b1=var139(top=0xd7:10.9%);b2=0x3d;b3=0x01;b4=var23(top=0x00:90.0%) */
    /* native IP reads: 0x9f211:byte0,0x9f2a1:byte0,0x9f3dc:byte0,0x9f457:byte0,0x9f4ec:b4,0x9f591:u16_2,0x9f674:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    /* vm->state = state0 + flags0 + flags0 + state0 + flags0 ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + flags0 + state0 + flags0 ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu - U16(vm->ip + 0x0u) ^ state0 + flags0 + flags0 + state0 + flags0 ^ 0x5d641cd7u | 0x76a1e6e7u ^ 0x1ea5bfdcu & 0x4f4379b7u | 0x563159ceu + flags0 + ...; */
    vm->flags = flags0 + state0 + flags0 ^ 0x5d641cd7u;
    /* slot variants: 118=(mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32(state0 + flags0)) + (mask32((mask32((mask32((mask32((mask32(flags0 + (mask32((mask32(state0 + flags0)) ^ 0x5d641cd7u)))) | 0x76a1e6e7u)) ^ 0x1ea5bfdcu)) & 0x4f4379b7u)...#12700f1563aa | 10=(mask32(U16... */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 198@0xa037e:509,257@0xadbfd:419,108@0x8f24b:383,256@0xad849:324,144@0x95887:319,173@0x9ba74:181 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_183(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=183, native=0x9d495, class=static_validated, events=2326, shape=CCVV, delta=+0x4 */
    /* operands: b0=0xe8;b1=0x01;b2=var142(top=0xc6:8.5%);b3=var152(top=0x84:7.4%) */
    /* native IP reads: 0x9d4fa:u16_0,0x9d5cb:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx;RF+0x23/4:mov */
    vm->state = state0 + 0xfaa325cu ^ 0x694e1f66u | U16(vm->ip + 0x2u) - state0 + 0xfaa325cu ^ 0x694e1f66u - 0x1aed554cu;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32(state0 + 0xfaa325cu)) ^ 0x694e1f66u)))) - 0x1aed554cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 114@0x90319:323,297@0xb64d7:232,215@0xa4609:140,333@0xbd8af:137,337@0xbec0e:136,18@0x7be9b:123 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_091(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=91, native=0x8b6de, class=static_validated, events=2251, shape=VVCC, delta=+0x4 */
    /* operands: b0=var142(top=0x78:5.9%);b1=var143(top=0x04:6.4%);b2=0xe8;b3=0x01 */
    /* native IP reads: 0x8b752:u16_2,0x8b829:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx;RF+0x23/4:mov */
    vm->state = state0 ^ U16(vm->ip + 0x0u) ^ state0;
    vm->flags = flags0 ^ state0 ^ 0x3f03cfb3u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 340@0xbf435:205,258@0xadf2c:201,337@0xbec0e:180,220@0xa522e:171,199@0xa0631:144,347@0xc088d:138 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_154(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=154, native=0x97ce6, class=static_validated, events=2209, shape=VVVV, delta=+0x4 */
    /* operands: b0=var156(top=0xb3:7.0%);b1=var157(top=0x2d:5.8%);b2=var145(top=0x8f:5.7%);b3=var133(top=0x00:11.5%) */
    /* native IP reads: 0x97db5:u16_2,0x97f25:byte0,0x97ff9:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    /* vm->state = state0 - U16(vm->ip + 0x2u) ^ state0 - flags0 + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + flags0 + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - state0 - U16(vm->ip + 0x2u) ^ state0 - flags0 + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + flags0 + 0...; */
    vm->flags = flags0 + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu;
    /* slot variants: 81=(mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 - (mask32(U16(vm->ip + 0x2u) ^ state0)))) - (mask32(flags0 | 0x7ed018fbu)))) + (mask32((mask32(flags0 | 0x7ed018fbu)) ^ 0x18426e67u)))))) - 0x6535d747u)) & 0xffffu | 31=(mask32((mask32(U... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 91@0x8b6de:389,180@0x9cf32:275,196@0x9fbcd:157,185@0x9d964:156,105@0x8e6b4:134,189@0x9e7af:104 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_121(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=121, native=0x91379, class=static_validated, events=2198, shape=VVVV, delta=+0x4 */
    /* operands: b0=var124(top=0x7b:11.8%);b1=var131(top=0x93:11.6%);b2=var140(top=0x37:11.7%);b3=var145(top=0x2f:11.6%) */
    /* native IP reads: 0x91417:byte0,0x91452:byte0,0x914a5:u16_0,0x9163b:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 ^ flags0 + 0x3154e54au - 0x288d43bau + U16(vm->ip + 0x0u) + state0 ^ flags0 + 0x3154e54au - 0x288d43bau - flags0;
    vm->flags = flags0 ^ 0x1753e9d0u;
    /* slot variants: 128=(mask32((mask32(U16(vm->ip + 0x2u) ^ (mask32((mask32((mask32(state0 ^ (mask32(flags0 + 0x3154e54au)))) - 0x288d43bau)) + (mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32(state0 ^ (mask32(flags0 + 0x3154e54au)))) - 0x288d43bau))))...#16d4adea9152 */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 307@0xb8064:350,180@0x9cf32:244,114@0x90319:190,91@0x8b6de:171,196@0x9fbcd:117,66@0x855ff:117 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_140(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=140, native=0x94e5a, class=static_validated, events=2190, shape=VVVVVV, delta=+0x6 */
    /* operands: b0=var143(top=0xce:6.8%);b1=var148(top=0xab:8.5%);b2=var158(top=0x2b:7.0%);b3=var152(top=0x45:12.9%);b4=var146(top=0xf3:6.9%);b5=var145(top=0x79:6.8%) */
    /* native IP reads: 0x94eda:byte0,0x94efe:u32_2,0x95038:byte0,0x95104:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 - flags0 - 0x6f549f79u - state0 | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ state0 - flags0 - 0x6f549f79u - state0 | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    vm->flags = flags0 - 0x6f549f79u - state0;
    /* slot variants: 112=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 - (mask32((mask32(flags0 - (mask32(state0 | 0xf17c331u)))) | 0x16a9ca8cu)))))) ^ 0x6e089febu)) & 0xffffu | 16=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 - (mask32((mask32((mask32(flags0 - 0x6f... */
    vm->ip += 0x6;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x6u */
    /* observed top targets: 64@0x85059:260,189@0x9e7af:224,185@0x9d964:208,347@0xc088d:189,37@0x80685:132,17@0x7bae9:125 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_273(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=273, native=0xb11ca, class=static_validated, events=2115, shape=VVVV, delta=+0x4 */
    /* operands: b0=var112(top=0xab:12.1%);b1=var45(top=0xca:16.6%);b2=var136(top=0xce:12.1%);b3=var142(top=0x32:13.3%) */
    /* native IP reads: 0xb12a8:u16_2,0xb1462:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9;RF+0x23/4:mov */
    vm->state = state0 - flags0 + 0x4b959cd0u + flags0 & 0x908616eu + U16(vm->ip + 0x2u) - state0 - flags0 + 0x4b959cd0u + flags0 & 0x908616eu ^ flags0 | U16(vm->ip + 0x0u) + state0 - flags0 + 0x4b959cd0u + flags0 & 0x908616eu + U16(vm->ip + 0x2u) - state0 - flags0 + 0x4b959cd0u + flags0 & 0x908616eu ^ flags0 - 0x2e0be660u;
    vm->flags = flags0 + 0x1ad837ceu;
    /* slot variants: 128=(mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32(state0 - flags0)) + 0x4b959cd0u)) + flags0)) & 0x908616eu)) + (mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32((mask32(state0 - flags0)) + 0x4u...#d0a7d316ef2b */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 183@0x9d495:269,199@0xa0631:258,180@0x9cf32:171,196@0x9fbcd:159,347@0xc088d:155,258@0xadf2c:123 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_320(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=320, native=0xbada5, class=static_validated, events=2080, shape=VCCVV, delta=+0x5 */
    /* operands: b0=var24(top=0x00:83.6%);b1=0x3d;b2=0x01;b3=var107(top=0xac:9.1%);b4=var106(top=0x0c:6.1%) */
    /* native IP reads: 0xbadd7:byte0,0xbae89:byte0,0xbaf48:byte0,0xbb006:b0,0xbb07e:u16_1,0xbb0f7:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi;RF+0xa/8:mov */
    vm->state = state0 & flags0 - flags0 - 0x7e143884u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32(state0 & flags0)) - flags0)) - 0x7e143884u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 173@0x9ba74:379,198@0xa037e:371,256@0xad849:314,160@0x994cf:243,257@0xadbfd:234,352@0xc1ec4:226 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_037(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=37, native=0x80685, class=static_validated, events=2035, shape=VVVCC, delta=+0x5 */
    /* operands: b0=var141(top=0xc1:12.7%);b1=var150(top=0x3e:12.6%);b2=var27(top=0x00:78.2%);b3=0x3d;b4=0x01 */
    /* native IP reads: 0x8069c:byte0,0x80729:byte0,0x808bc:byte0,0x809b9:byte0,0x80abe:b2,0x80b14:u16_3,0x80cb3:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 - flags0 + 0x504fc3du - 0x4eca0e49u | U16(vm->ip + 0x0u) ^ state0 - flags0 + 0x504fc3du - 0x4eca0e49u ^ 0x384e1c86u;
    vm->flags = flags0 & 0x714eea75u + 0x53097984u ^ state0 - flags0 + 0x504fc3du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 - (mask32(flags0 + 0x504fc3du)))) - 0x4eca0e49u)))) ^ 0x384e1c86u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 160@0x994cf:437,257@0xadbfd:427,256@0xad849:373,144@0x95887:276,352@0xc1ec4:163,108@0x8f24b:159 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_254(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=254, native=0xad32c, class=static_validated, events=1988, shape=VVVV, delta=+0x4 */
    /* operands: b0=var150(top=0x74:15.5%);b1=var153(top=0x9c:13.1%);b2=var24(top=0x42:14.4%);b3=var12(top=0x47:31.7%) */
    /* native IP reads: 0xad3b3:u16_0,0xad5ce:byte0,0xad675:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RF+0x10f/8:mov;RIP+0x2/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 + flags0 - U16(vm->ip + 0x0u) ^ state0 + flags0 | flags0 | 0x617339d9u | 0x5635509u | 0x15874263u ^ 0x5bf4e999u & flags0 - 0x35a18ac8u | 0x5feb6979u & 0x3e80b852u | U16(vm->ip + 0x2u) - 0x228a41a2u;
    vm->flags = flags0 - 0x35a18ac8u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) - 0x228a41a2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 180@0x9cf32:282,66@0x855ff:270,183@0x9d495:207,28@0x7e390:197,91@0x8b6de:184,297@0xb64d7:160 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_253(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=253, native=0xacfb1, class=static_validated, events=1984, shape=VVVVVV, delta=+0x6 */
    /* operands: b0=var26(top=0x86:22.2%);b1=var11(top=0xc2:20.1%);b2=var177(top=0x34:17.8%);b3=var157(top=0xa1:13.2%);b4=var160(top=0x04:13.3%);b5=var155(top=0x08:13.9%) */
    /* native IP reads: 0xacfc8:byte0,0xad0b4:u32_2,0xad292:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 | 0x764111b0u + 0x6d2270cbu + U32(vm->ip + 0x2u) ^ flags0 + flags0 | 0x62c3b0ddu | 0x2b96d1d1u & 0x2d46e2e3u ^ U16(vm->ip + 0x0u) + 0x7c5d4802u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + 0x7c5d4802u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x6u */
    /* observed top targets: 297@0xb64d7:269,199@0xa0631:208,337@0xbec0e:194,28@0x7e390:173,17@0x7bae9:151,340@0xbf435:125 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_345(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=345, native=0xc02e4, class=static_validated, events=1883, shape=VVVVVV, delta=+0x6 */
    /* operands: b0=var164(top=0x69:13.6%);b1=var150(top=0x3f:13.6%);b2=var165(top=0x11:13.6%);b3=var164(top=0x1c:13.6%);b4=var162(top=0xc4:13.6%);b5=var157(top=0x34:13.6%) */
    /* native IP reads: 0xc031c:u32_2,0xc0421:byte0,0xc045c:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 + U32(vm->ip + 0x2u) ^ state0 + flags0 + U16(vm->ip + 0x0u) + state0 + U32(vm->ip + 0x2u) ^ state0 + flags0;
    vm->flags = flags0 & 0xe71dcd4u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + (mask32(state0 + (mask32((mask32(U32(vm->ip + 0x2u) ^ state0)) + flags0)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x6u */
    /* observed top targets: 52@0x833c7:345,196@0x9fbcd:333,172@0x9b68a:109,189@0x9e7af:104,37@0x80685:98,192@0x9f00a:86 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_354(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=354, native=0xc2241, class=static_validated, events=1872, shape=VE, delta=+0x2 */
    /* operands: b0=var33(top=0xb9:13.4%);b1=enum2(0x00:1252,0x01:620) */
    /* native IP reads: 0xc2384:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = 0x0u;
    vm->flags = 0x0u;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x2u */
    /* observed top targets: 185@0x9d964:251,268@0xb0007:225,168@0x9aa83:197,340@0xbf435:195,157@0x98a9a:190,189@0x9e7af:188 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_319(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=319, native=0xba72f, class=static_validated, events=1850, shape=CCVVV, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=var42(top=0xe6:28.4%);b3=var47(top=0x2e:17.5%);b4=var21(top=0x00:79.0%) */
    /* native IP reads: 0xba96e:byte0,0xbaafd:b4,0xbab6d:u16_0,0xbacbf:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    /* vm->state = state0 & flags0 | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & state0 + 0x4fa9822eu | 0x5ed258f1u | flags0 | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & state0 + 0x4fa9822eu ^ flags0 | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & state0 + 0x4fa9822eu + 0x2ba77993u + U16(vm->ip + 0x2u) + state0 & flags0 | 0x6be63b72u ^ 0x5...; */
    vm->flags = flags0;
    /* slot variants: 72=(mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32(state0 & (mask32(flags0 & (mask32(state0 + 0x4fa9822eu)))))) | 0x5ed258f1u)) | (mask32(flags0 & (mask32(state0 + 0x4fa9822eu)))))) ^ (mask32((mask32(f...#8770af8af8ff | 56=(mask32((mask... */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 173@0x9ba74:559,257@0xadbfd:324,144@0x95887:250,108@0x8f24b:207,198@0xa037e:186,160@0x994cf:161 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_180(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=180, native=0x9cf32, class=static_validated, events=1848, shape=VVCC, delta=+0x4 */
    /* operands: b0=var20(top=0x3b:19.2%);b1=var11(top=0x0b:23.6%);b2=0xe8;b3=0x01 */
    /* native IP reads: 0x9cf3c:byte0,0x9cf8d:u16_2,0x9d087:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 | U16(vm->ip + 0x0u) + 0x7920fa05u;
    vm->flags = flags0 + 0x3f2841fbu + state0 ^ 0x417a1c15u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + 0x7920fa05u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 168@0x9aa83:355,79@0x885b0:232,337@0xbec0e:148,269@0xb045b:134,157@0x98a9a:129,297@0xb64d7:117 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_322(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=322, native=0xbb3c9, class=static_validated, events=1847, shape=VVVV, delta=+0x4 */
    /* operands: b0=var132(top=0x13:14.0%);b1=var123(top=0x00:19.2%);b2=var119(top=0x57:13.9%);b3=var104(top=0x96:14.7%) */
    /* native IP reads: 0xbb424:u16_0,0xbb488:byte0,0xbb517:byte0,0xbb611:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 + U16(vm->ip + 0x0u) ^ flags0 | 0x2d680d90u + 0x69cbe1a0u & U16(vm->ip + 0x2u) - state0 + U16(vm->ip + 0x0u) ^ flags0 | 0x2d680d90u + 0x69cbe1a0u + 0x7ba65dc4u;
    vm->flags = flags0 - 0x58d38f71u + 0xdc60e0au ^ 0xb71b18du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32(state0 + (mask32(U16(vm->ip + 0x0u) ^ flags0)))) | 0x2d680d90u)) + 0x69cbe1a0u)))) + 0x7ba65dc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 91@0x8b6de:280,347@0xc088d:276,157@0x98a9a:257,183@0x9d495:172,337@0xbec0e:134,64@0x85059:98 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_351(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=351, native=0xc1d48, class=static_validated, events=1844, shape=CCVVC, delta=+0x5 */
    /* operands: b0=0xe8;b1=0x01;b2=var81(top=0x1b:13.9%);b3=var76(top=0x22:13.9%);b4=0x10 */
    /* native IP reads: 0xc1d84:u16_0,0xc1da3:b4,0xc1e26:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RF+0x10f/8:mov;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 | U16(vm->ip + 0x2u) + state0 - 0x7b3a2d18u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + state0)) - 0x7b3a2d18u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 297@0xb64d7:256,258@0xadf2c:188,189@0x9e7af:185,172@0x9b68a:182,28@0x7e390:102,254@0xad32c:98 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_165(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=165, native=0x9a24c, class=static_validated, events=1825, shape=VE, delta=+0x2 */
    /* operands: b0=var30(top=0x72:19.5%);b1=enum2(0x00:1070,0x01:755) */
    /* native IP reads: 0x9a39b:byte0,0x9a3d1:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;RF+0x170/4:mov */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9;RF+0x170/4:mov */
    vm->state = 0x0u;
    vm->flags = 0x0u;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x2;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x2u */
    /* observed top targets: 114@0x90319:356,333@0xbd8af:215,340@0xbf435:198,268@0xb0007:188,203@0xa1484:186,18@0x7be9b:159 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_124(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=124, native=0x91e81, class=static_validated, events=1796, shape=VVVVVV, delta=+0x6 */
    /* operands: b0=var166(top=0xc1:12.6%);b1=var177(top=0x7f:8.9%);b2=var34(top=0x00:43.4%);b3=var144(top=0x1b:7.3%);b4=var91(top=0x4f:12.2%);b5=var36(top=0xcb:25.7%) */
    /* native IP reads: 0x92045:u32_0,0x921ef:u16_4,0x9223d:u16_4 + state0 - 0x7c31e804 ^ flags0 + 0x57b29524 - 0x2c2f20af ^ 0x2bb25e3 | 0x50ef8024 + flags0 + 0x57b29524 - 0x2c2f20af - state0 - 0x7c31e804 ^ flags0 + 0x57b29524 - 0x2c2f20af ^ 0x2bb25e3 | 0x50ef8024 ^ flags0 + 0x57b... */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    /* vm->state = state0 - 0x7c31e804u ^ flags0 + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u + flags0 + 0x57b29524u - 0x2c2f20afu - state0 - 0x7c31e804u ^ flags0 + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u ^ flags0 + 0x57b29524u - 0x2c2f20afu - state0 - 0x7c31e804u ^ flags0 + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u | 0x50ef8024u & U32(vm->ip + 0x0u) - s...; */
    vm->flags = flags0 + 0x57b29524u - 0x2c2f20afu - state0 - 0x7c31e804u ^ flags0 + 0x57b29524u - 0x2c2f20afu ^ 0x2bb25e3u;
    /* slot variants: 71=(mask32((mask32(U16(vm->ip + 0x4u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - 0x7c31e804u)) ^ flags0)) ^ 0x2bb25e3u)) | 0x50ef8024u)) + (mask32(flags0 - (mask32((mask32((mask32((mask32(state0 - 0...#a71fad2f15d8 | 57=(mask32((mask... */
    vm->ip += 0x6;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x6u */
    /* observed top targets: 320@0xbada5:235,192@0x9f00a:199,43@0x8173d:191,37@0x80685:147,333@0xbd8af:139,307@0xb8064:123 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_169(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=169, native=0x9af18, class=static_validated, events=1796, shape=EECC, delta=+0x4 */
    /* operands: b0=enum3(0xab:756,0x62:658,0xa5:382);b1=enum2(0x00:1138,0x01:658);b2=0xe8;b3=0x01 */
    /* native IP reads: 0x9af62:byte0,0x9afe6:u16_2,0x9b060:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 + 0x18f09018u - 0x47a20f40u;
    vm->flags = flags0 ^ 0x3fd04ca8u;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 171@0x9b4b3:756,354@0xc2241:658,165@0x9a24c:382 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult vm_call_handler(int entry, VMState *vm) {
    switch (entry) {
    case 258: return op_entry_258(vm);
    case 28: return op_entry_028(vm);
    case 337: return op_entry_337(vm);
    case 340: return op_entry_340(vm);
    case 18: return op_entry_018(vm);
    case 114: return op_entry_114(vm);
    case 189: return op_entry_189(vm);
    case 347: return op_entry_347(vm);
    case 307: return op_entry_307(vm);
    case 64: return op_entry_064(vm);
    case 66: return op_entry_066(vm);
    case 185: return op_entry_185(vm);
    case 215: return op_entry_215(vm);
    case 297: return op_entry_297(vm);
    case 199: return op_entry_199(vm);
    case 43: return op_entry_043(vm);
    case 157: return op_entry_157(vm);
    case 196: return op_entry_196(vm);
    case 168: return op_entry_168(vm);
    case 172: return op_entry_172(vm);
    case 333: return op_entry_333(vm);
    case 184: return op_entry_184(vm);
    case 268: return op_entry_268(vm);
    case 174: return op_entry_174(vm);
    case 305: return op_entry_305(vm);
    case 123: return op_entry_123(vm);
    case 176: return op_entry_176(vm);
    case 315: return op_entry_315(vm);
    case 26: return op_entry_026(vm);
    case 203: return op_entry_203(vm);
    case 287: return op_entry_287(vm);
    case 20: return op_entry_020(vm);
    case 161: return op_entry_161(vm);
    case 243: return op_entry_243(vm);
    case 158: return op_entry_158(vm);
    case 33: return op_entry_033(vm);
    case 346: return op_entry_346(vm);
    case 108: return op_entry_108(vm);
    case 144: return op_entry_144(vm);
    case 160: return op_entry_160(vm);
    case 173: return op_entry_173(vm);
    case 257: return op_entry_257(vm);
    case 198: return op_entry_198(vm);
    case 352: return op_entry_352(vm);
    case 301: return op_entry_301(vm);
    case 49: return op_entry_049(vm);
    case 256: return op_entry_256(vm);
    case 79: return op_entry_079(vm);
    case 220: return op_entry_220(vm);
    case 3: return op_entry_003(vm);
    case 332: return op_entry_332(vm);
    case 300: return op_entry_300(vm);
    case 260: return op_entry_260(vm);
    case 269: return op_entry_269(vm);
    case 30: return op_entry_030(vm);
    case 171: return op_entry_171(vm);
    case 239: return op_entry_239(vm);
    case 167: return op_entry_167(vm);
    case 83: return op_entry_083(vm);
    case 350: return op_entry_350(vm);
    case 192: return op_entry_192(vm);
    case 183: return op_entry_183(vm);
    case 91: return op_entry_091(vm);
    case 154: return op_entry_154(vm);
    case 121: return op_entry_121(vm);
    case 140: return op_entry_140(vm);
    case 273: return op_entry_273(vm);
    case 320: return op_entry_320(vm);
    case 37: return op_entry_037(vm);
    case 254: return op_entry_254(vm);
    case 253: return op_entry_253(vm);
    case 345: return op_entry_345(vm);
    case 354: return op_entry_354(vm);
    case 319: return op_entry_319(vm);
    case 180: return op_entry_180(vm);
    case 322: return op_entry_322(vm);
    case 351: return op_entry_351(vm);
    case 165: return op_entry_165(vm);
    case 124: return op_entry_124(vm);
    case 169: return op_entry_169(vm);
    default: return (VMOpResult){ .next_entry = -1, .slot = 0xffffffffu };
    }
}
