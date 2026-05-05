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

static VMOpResult path_entry_356_7af0b6860c39(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=356, native=0xc291a, path=7af0b6860c39318d, class=affine_dispatch_fallback, events=116 */
    /* validation: target=0.0%, ip=0.0%, sample_expr_events=116 */
    /* branch path: 0xc2b01:jne:1;0xc2b1d:jne:1;0xc2b39:jne:1;0xc2b57:jne:0;0xc2c03:je:0 */
    /* top actual targets: 310@0xb8556:61,169@0x9af18:55 */
    /* operands: b0=var17(top=0x6f:12.4%);b1=var17(top=0x74:12.4%);b2=enum5(0x31:731,0x26:4,0x33:2,0x34:2,0x36:2);b3=0x00;b4=0x80;b5=0x00;b6=var13(top=0x1c:36.8%);b7=var11(top=0x60:36.8%);b8=enum4(0x03:456,0x07:185,0x02:96,0x01:4);b9=0x00 */
    /* GPR+scratch branch profile: 0/580 unknown branches (0.0%): */
    vm->state = state0 ^ flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ flags0)))) + 0x70d7d4a7u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_216_75052fca20bf(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=216, native=0xa4a61, path=75052fca20bfc88b, class=affine_dispatch_fallback, events=112 */
    /* validation: target=0.0%, ip=0.0%, sample_expr_events=112 */
    /* branch path: 0xa4bfa:jne:0;0xa4c0e:jne:1;0xa4cf8:je:0 */
    /* top actual targets: 310@0xb8556:82,169@0x9af18:30 */
    /* operands: b0=var20(top=0x4e:12.4%);b1=var22(top=0x7e:12.3%);b2=enum4(0x31:732,0x33:4,0x34:3,0x36:3);b3=0x00;b4=0x80;b5=0x00;b6=var15(top=0x92:24.7%);b7=var12(top=0x34:24.8%);b8=enum4(0x07:371,0x02:278,0x03:91,0x01:2);b9=0x00 */
    /* GPR+scratch branch profile: 0/336 unknown branches (0.0%): */
    vm->state = state0 ^ flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) - (mask32(state0 ^ flags0)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_278_a604fbe70c42(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=278, native=0xb2342, path=a604fbe70c42f7fd, class=affine_dispatch_fallback, events=82 */
    /* validation: target=0.0%, ip=0.0%, sample_expr_events=82 */
    /* branch path: 0xb2479:jne:1;0xb2486:jne:1;0xb2494:jne:1;0xb24a4:jne:0;0xb2508:je:0 */
    /* top actual targets: 169@0x9af18:56,310@0xb8556:26 */
    /* operands: b0=var13(top=0x26:16.5%);b1=var13(top=0x77:16.5%);b2=enum4(0x31:547,0x36:4,0x33:1,0x34:1);b3=0x00;b4=0x80;b5=0x00;b6=var9(top=0x1c:32.9%);b7=var9(top=0x60:32.9%);b8=enum3(0x07:276,0x03:182,0x02:95);b9=0x00 */
    /* GPR+scratch branch profile: 0/410 unknown branches (0.0%): */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 | flags0)))) + 0x68baea26u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_311_75688f09a989(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=311, native=0xb86f8, path=75688f09a9896611, class=affine_dispatch_fallback, events=67 */
    /* validation: target=0.0%, ip=0.0%, sample_expr_events=67 */
    /* branch path: 0xb87c6:je:0;0xb8828:je:0;0xb88a7:jne:1;0xb88b5:jne:1;0xb88c4:jne:1;0xb88d2:jne:0;0xb8927:je:0 */
    /* top actual targets: 169@0x9af18:36,310@0xb8556:31 */
    /* operands: b0=var13(top=0x21:23.8%);b1=var13(top=0x80:23.8%);b2=enum4(0x31:367,0x26:12,0x36:2,0x33:1);b3=0x00;b4=0x80;b5=0x00;b6=var10(top=0x94:47.6%);b7=var10(top=0x9d:47.6%);b8=enum6(0x02:184,0x07:93,0x48:91,0x01:12,0x03:1,0x05:1);b9=0x00 */
    /* GPR+scratch branch profile: 0/469 unknown branches (0.0%): */
    vm->state = state0 - 0x1889c111u - flags0 - state0 - 0x1889c111u + 0x3cae9026u;
    vm->flags = flags0 - state0 - 0x1889c111u + 0x3cae9026u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) ^ (mask32((mask32(state0 - 0x1889c111u)) - (mask32((mask32((mask32(flags0 - (mask32((mask32(state0 - 0x1889c111u)) + 0x3cae9026u)))) | 0x2b959efau)) | 0x35e8abc1u)))))) ^ 0xa9f4228u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static VMOpResult path_entry_095_605a965b0cc7(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=95, native=0x8c41c, path=605a965b0cc7f63e, class=affine_dispatch_fallback, events=52 */
    /* validation: target=0.0%, ip=0.0%, sample_expr_events=52 */
    /* branch path: 0x8c53c:je:1 */
    /* top actual targets: 169@0x9af18:34,310@0xb8556:18 */
    /* operands: b0=var14(top=0xa8:16.9%);b1=var15(top=0x7a:16.4%);b2=enum5(0x31:548,0x26:4,0x27:4,0x33:3,0x36:3);b3=0x00;b4=0x80;b5=0x00;b6=var13(top=0x92:32.4%);b7=var10(top=0x33:32.7%);b8=enum5(0x07:278,0x03:182,0x02:92,0x01:9,0x48:1);b9=0x00 */
    /* GPR+scratch branch profile: 0/92 unknown branches (0.0%): */
    vm->state = state0 ^ U16(vm->ip + 0x4u) + 0x1f18e1aau;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x4u) + 0x1f18e1aau)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x8;
    return r;
}

static VMOpResult path_entry_264_e3b0c44298fc(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=264, native=0xaf4cf, path=e3b0c44298fc1c14, class=affine_dispatch_fallback, events=49 */
    /* validation: target=0.0%, ip=0.0%, sample_expr_events=49 */
    /* branch path: - */
    /* top actual targets: 169@0x9af18:31,310@0xb8556:18 */
    /* operands: b0=var15(top=0x65:31.3%);b1=var14(top=0x89:31.3%);b2=enum5(0x31:274,0x26:8,0x34:6,0x36:2,0x33:1);b3=0x00;b4=0x80;b5=0x00;b6=var12(top=0xb6:31.3%);b7=var9(top=0x34:62.5%);b8=enum4(0x07:189,0x02:93,0x01:8,0x48:1);b9=0x00 */
    vm->state = state0 & U16(vm->ip + 0x8u) + state0 - 0x6fba3362u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x8u) + state0)) - 0x6fba3362u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x22;
    return r;
}

static VMOpResult path_entry_095_be7c6d4e5e3d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=95, native=0x8c41c, path=be7c6d4e5e3db62f, class=affine_dispatch_fallback, events=40 */
    /* validation: target=0.0%, ip=0.0%, sample_expr_events=40 */
    /* branch path: 0x8c53c:je:0 */
    /* top actual targets: 169@0x9af18:27,310@0xb8556:13 */
    /* operands: b0=var14(top=0xa8:16.9%);b1=var15(top=0x7a:16.4%);b2=enum5(0x31:548,0x26:4,0x27:4,0x33:3,0x36:3);b3=0x00;b4=0x80;b5=0x00;b6=var13(top=0x92:32.4%);b7=var10(top=0x33:32.7%);b8=enum5(0x07:278,0x03:182,0x02:92,0x01:9,0x48:1);b9=0x00 */
    /* GPR+scratch branch profile: 0/92 unknown branches (0.0%): */
    vm->state = state0 ^ U16(vm->ip + 0x4u) + 0x1f18e1aau;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x4u) + 0x1f18e1aau)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x8;
    return r;
}

static VMOpResult path_entry_321_e43a6d061b0d(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=321, native=0xbb1dd, path=e43a6d061b0d7434, class=affine_dispatch_fallback, events=13 */
    /* validation: target=0.0%, ip=0.0%, sample_expr_events=13 */
    /* branch path: 0xbb1f8:je:0;0xbb202:je:0;0xbb4c1:je:1 */
    /* top actual targets: 169@0x9af18:13 */
    /* operands: b0=enum3(0x44:91,0x4e:3,0x00:3);b1=enum3(0xf2:91,0xf4:3,0xd6:3);b2=enum3(0x25:91,0x2e:3,0x88:3);b3=enum3(0x80:91,0xb2:3,0xe7:3);b4=enum3(0x59:91,0xcc:3,0x54:3);b5=enum3(0x78:91,0x11:3,0x0b:3);b6=enum3(0x54:91,0x0d:3,0x46:3);b7=enum3(0x78:91,0x72:3,0xe4:3);b8=enum3(0x66:91,0x55:3,0x56:3);b9=enum2(0x31:91,0x34:6);b10=0x00;b11=0x80;...+1 */
    /* GPR+scratch branch profile: 0/57 unknown branches (0.0%): */
    vm->state = state0 + U16(vm->ip + 0x0u) ^ flags0;
    vm->flags = flags0 - 0x58d38f71u + 0xdc60e0au ^ 0xb71b18du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32(state0 + (mask32(U16(vm->ip + 0x0u) ^ flags0)))) | 0x2d680d90u)) + 0x69cbe1a0u)))) + 0x7ba65dc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_321_9e32de774899(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=321, native=0xbb1dd, path=9e32de774899afb7, class=affine_dispatch_fallback, events=6 */
    /* validation: target=0.0%, ip=0.0%, sample_expr_events=6 */
    /* branch path: 0xbb1f8:je:0;0xbb202:je:0;0xbb4c1:je:0 */
    /* top actual targets: 169@0x9af18:3,310@0xb8556:3 */
    /* operands: b0=enum3(0x44:91,0x4e:3,0x00:3);b1=enum3(0xf2:91,0xf4:3,0xd6:3);b2=enum3(0x25:91,0x2e:3,0x88:3);b3=enum3(0x80:91,0xb2:3,0xe7:3);b4=enum3(0x59:91,0xcc:3,0x54:3);b5=enum3(0x78:91,0x11:3,0x0b:3);b6=enum3(0x54:91,0x0d:3,0x46:3);b7=enum3(0x78:91,0x72:3,0xe4:3);b8=enum3(0x66:91,0x55:3,0x56:3);b9=enum2(0x31:91,0x34:6);b10=0x00;b11=0x80;...+1 */
    /* GPR+scratch branch profile: 0/57 unknown branches (0.0%): */
    vm->state = state0 + U16(vm->ip + 0x0u) ^ flags0;
    vm->flags = flags0 - 0x58d38f71u + 0xdc60e0au ^ 0xb71b18du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32(state0 + (mask32(U16(vm->ip + 0x0u) ^ flags0)))) | 0x2d680d90u)) + 0x69cbe1a0u)))) + 0x7ba65dc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    return r;
}

static VMOpResult path_entry_078_96fd915ac218(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=78, native=0x883c0, path=96fd915ac218c913, class=affine_dispatch_fallback, events=1 */
    /* validation: target=0.0%, ip=0.0%, sample_expr_events=1 */
    /* branch path: 0x883db:je:0;0x883e5:je:0;0x8860f:je:0;0x886fb:je:0;0x887f1:je:0 */
    /* top actual targets: 310@0xb8556:1 */
    /* operands: b0=0xd5;b1=0xa3;b2=0xe8;b3=0xf5;b4=0xb1;b5=0x34;b6=0x21;b7=0xdf;b8=0xd2;b9=0x33;b10=0x00;b11=0x80;...+1 */
    /* GPR+scratch branch profile: 0/5 unknown branches (0.0%): */
    vm->state = state0 - flags0 ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u;
    vm->flags = flags0 ^ 0xc7e744fu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x623ccce4u)))) & 0xd4da920u)) | (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x225dfa31u)))) - 0x6110d031u)) ^ 0x3fcb6e9au)) ^ (mask32(flags0 ^ 0xc7e744fu)))) + 0x60a9dba6u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    return r;
}

static const VMPathModelInfo k_vm_path_models[] = {
    { 356, 0x7af0b6860c39318dull, 116u, "affine_dispatch_fallback", "target=0.0%, ip=0.0%, ok:13,unknown_target:103", path_entry_356_7af0b6860c39 },
    { 216, 0x75052fca20bfc88bull, 112u, "affine_dispatch_fallback", "target=0.0%, ip=0.0%, unknown_target:112", path_entry_216_75052fca20bf },
    { 278, 0xa604fbe70c42f7fdull, 82u, "affine_dispatch_fallback", "target=0.0%, ip=0.0%, unknown_target:82", path_entry_278_a604fbe70c42 },
    { 311, 0x75688f09a9896611ull, 67u, "affine_dispatch_fallback", "target=0.0%, ip=0.0%, unknown_target:67", path_entry_311_75688f09a989 },
    { 95, 0x605a965b0cc7f63eull, 52u, "affine_dispatch_fallback", "target=0.0%, ip=0.0%, unknown_target:52", path_entry_095_605a965b0cc7 },
    { 264, 0xe3b0c44298fc1c14ull, 49u, "affine_dispatch_fallback", "target=0.0%, ip=0.0%, unknown_target:49", path_entry_264_e3b0c44298fc },
    { 95, 0xbe7c6d4e5e3db62full, 40u, "affine_dispatch_fallback", "target=0.0%, ip=0.0%, unknown_target:40", path_entry_095_be7c6d4e5e3d },
    { 321, 0xe43a6d061b0d7434ull, 13u, "affine_dispatch_fallback", "target=0.0%, ip=0.0%, unknown_target:13", path_entry_321_e43a6d061b0d },
    { 321, 0x9e32de774899afb7ull, 6u, "affine_dispatch_fallback", "target=0.0%, ip=0.0%, unknown_target:6", path_entry_321_9e32de774899 },
    { 78, 0x96fd915ac218c913ull, 1u, "affine_dispatch_fallback", "target=0.0%, ip=0.0%, unknown_target:1", path_entry_078_96fd915ac218 },
};

static unsigned vm_path_model_count(void) {
    return (unsigned)(sizeof(k_vm_path_models) / sizeof(k_vm_path_models[0]));
}

static VMOpResult vm_call_path_handler(uint16_t entry, uint64_t path_key_value, VMState *vm) {
    switch (entry) {
    case 78:
        switch (path_key_value) {
        case 0x96fd915ac218c913ull: return path_entry_078_96fd915ac218(vm);
        default: break;
        }
        break;
    case 95:
        switch (path_key_value) {
        case 0x605a965b0cc7f63eull: return path_entry_095_605a965b0cc7(vm);
        case 0xbe7c6d4e5e3db62full: return path_entry_095_be7c6d4e5e3d(vm);
        default: break;
        }
        break;
    case 216:
        switch (path_key_value) {
        case 0x75052fca20bfc88bull: return path_entry_216_75052fca20bf(vm);
        default: break;
        }
        break;
    case 264:
        switch (path_key_value) {
        case 0xe3b0c44298fc1c14ull: return path_entry_264_e3b0c44298fc(vm);
        default: break;
        }
        break;
    case 278:
        switch (path_key_value) {
        case 0xa604fbe70c42f7fdull: return path_entry_278_a604fbe70c42(vm);
        default: break;
        }
        break;
    case 311:
        switch (path_key_value) {
        case 0x75688f09a9896611ull: return path_entry_311_75688f09a989(vm);
        default: break;
        }
        break;
    case 321:
        switch (path_key_value) {
        case 0x9e32de774899afb7ull: return path_entry_321_9e32de774899(vm);
        case 0xe43a6d061b0d7434ull: return path_entry_321_e43a6d061b0d(vm);
        default: break;
        }
        break;
    case 356:
        switch (path_key_value) {
        case 0x7af0b6860c39318dull: return path_entry_356_7af0b6860c39(vm);
        default: break;
        }
        break;
    default: break;
    }
    return (VMOpResult){ .next_entry = -1, .slot = 0xffffffffu };
}
