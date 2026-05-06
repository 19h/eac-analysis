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

/* VM program atlas 64: 0x3716c7..0x37176c */

static void vmdec_p064_bb_0491(VMState *vm, uint64_t vm_ip);
static void vmdec_p064_bb_0492(VMState *vm, uint64_t vm_ip);

static void vmdec_p064_bb_0491(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 491: 0x3716c7..0x37171c; rows=21, terminal=long_branch_backedge */
    /* 0x3716c7..0x3716c9: exact_instruction, entry=354, bytes=0c01; next = 268@0xb0007:125, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 268;
    vm_ip += 0x2;
    /* 0x3716c9..0x3716cd: exact_instruction, entry=268, bytes=191cbe6c; next = 347@0xc088d:125, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u ^ U16(vm->ip + 0x2u) - vm->state | 0x71bd1bb1u + U16(vm->ip + 0x0u) - vm->state | 0x71bd1bb1u - vm->flags & vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u | vm->flags + 0x33c0c75bu & 0x174c40efu - 0x554d11eeu & 0x30ef8696u + 0x12696b26u + 0x73efcc77u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x3716cd..0x3716d1: exact_instruction, entry=347, bytes=452fff8a; next = 154@0x97ce6:125, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 154;
    vm_ip += 0x4;
    /* 0x3716d1..0x3716d5: exact_instruction, entry=154, bytes=f03af048; next = 91@0x8b6de:125, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 91;
    vm_ip += 0x4;
    /* 0x3716d5..0x3716d9: exact_instruction, entry=91, bytes=c15be801; next = 199@0xa0631:125, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U16(vm->ip + 0x0u) ^ vm->state;
    next_entry = 199;
    vm_ip += 0x4;
    /* 0x3716d9..0x3716dc: exact_instruction, entry=199, bytes=ee9d11; next = 301@0xb708d:125, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + U8(vm->ip + 0x2u) + vm->flags ^ 0x7353b039u - 0x24d1328au ^ 0x7e708197u & 0x20d5418u + vm->flags ^ 0x7353b039u - 0x24d1328au;
    next_entry = 301;
    vm_ip += 0x3;
    /* 0x3716dc..0x3716e1: exact_instruction, entry=301, bytes=003d01df00; next = 160@0x994cf:125, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 160;
    vm_ip += 0x5;
    /* 0x3716e1..0x3716e3: exact_instruction, entry=160, bytes=7928; next = 157@0x98a9a:125, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u | U16(vm->ip + 0x0u) ^ vm->state | 0x67f1fed6u & 0x256c03d7u | 0x72df8f7au & 0x5a1beb81u - 0x4cf19f11u;
    next_entry = 157;
    vm_ip += 0x2;
    /* 0x3716e3..0x3716e7: exact_instruction, entry=157, bytes=8be86800; next = 18@0x7be9b:125, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ U16(vm->ip + 0x0u) + vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) | 0x1f5cd114u - vm->flags + 0x3f0d8c6au + 0x2832271cu ^ 0x520e3305u & 0x7edaa354u ^ 0x68e1604du ^ 0x3d2638afu & vm->state ^ 0x2f4dfd84u + U16(vm->ip + 0x2u) ^ 0x17d39c9fu;
    next_entry = 18;
    vm_ip += 0x4;
    /* 0x3716e7..0x3716ea: exact_instruction, entry=18, bytes=b0041a; next = 140@0x94e5a:125, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 140;
    vm_ip += 0x3;
    /* 0x3716ea..0x3716f0: exact_instruction, entry=140, bytes=10b7ad40ef5c; next = 189@0x9e7af:125, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    next_entry = 189;
    vm_ip += 0x6;
    /* 0x3716f0..0x3716f4: exact_instruction, entry=189, bytes=ba9bbcec; next = 237@0xa8e1f:125, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 237;
    vm_ip += 0x4;
    /* 0x3716f4..0x3716f9: exact_instruction, entry=237, bytes=00c9f63d01; next = 108@0x8f24b:125, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ vm->state - vm->flags ^ 0x22900c8u - vm->flags + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x3716f9..0x3716fb: exact_instruction, entry=108, bytes=0404; next = 140@0x94e5a:125, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 140;
    vm_ip += 0x2;
    /* 0x3716fb..0x371701: exact_instruction, entry=140, bytes=c19355aac13b; next = 17@0x7bae9:125, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ vm->state - vm->flags - 0x6f549f79u - vm->state | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    next_entry = 17;
    vm_ip += 0x6;
    /* 0x371701..0x371706: exact_instruction, entry=17, bytes=8efe3ad097; next = 28@0x7e390:125, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ 0x4365071cu & U16(vm->ip + 0x0u) ^ vm->state | vm->flags ^ 0x4365071cu + vm->flags ^ 0x4365071cu ^ 0x95f9698u + U16(vm->ip + 0x3u) - vm->state | vm->flags ^ 0x4365071cu & U16(vm->ip + 0x0u) ^ vm->state | vm->flags ^ 0x4365071cu + vm->flags ^ 0x4365071cu ^ 0x95f9698u;
    next_entry = 28;
    vm_ip += 0x5;
    /* 0x371706..0x371709: exact_instruction, entry=28, bytes=e809e0; next = 317@0xba1e2:125, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu ^ vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au + 0x43078fb1u & 0x282416bbu ^ 0x53f50e0bu ^ vm->state | vm->flags ^ vm->state | 0xb9ad02au & 0x3fb85e48u - vm->state ^ 0x6e3e6f1au - 0x7e20fbabu | U16(vm->ip + 0x0u);
    next_entry = 317;
    vm_ip += 0x3;
    /* 0x371709..0x37170d: exact_instruction, entry=317, bytes=47470899; next = 70@0x8610e:125, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u ^ U16(vm->ip + 0x2u) + vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u & vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u & 0x19a77bau + vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u ^ vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | 0x501e3e6cu ^ vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u + U16(vm->ip + 0x0u) - vm->state - vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u ^ U16(vm->ip + 0x2u) + vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u & vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u & 0x19a77bau + vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u ^ vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | 0x501e3e6cu ^ vm->flags + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u + 0x18e7b255u;
    next_entry = 70;
    vm_ip += 0x4;
    /* 0x37170d..0x371712: exact_instruction, entry=70, bytes=da87bf3d01; next = 108@0x8f24b:125, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u ^ vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ vm->state ^ vm->flags ^ vm->flags - vm->flags + vm->state ^ vm->flags ^ vm->flags + 0x55fafa0cu - 0x5abc12afu ^ vm->state ^ vm->flags ^ vm->flags | 0x58fb4a0cu ^ 0x62ac6845u | 0x528cef01u;
    next_entry = 108;
    vm_ip += 0x5;
    /* 0x371712..0x371714: exact_instruction, entry=108, bytes=79f6; next = 266@0xaf8af:125, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state + 0x11961dc7u ^ 0x5fa19cc7u - vm->flags;
    next_entry = 266;
    vm_ip += 0x2;
    /* 0x371714..0x37142c: long_branch_backedge, entry=266, bytes=62010000e8020080; next = table[354], ip -= 0x2e8; validation=file_backed_operand;source_state=transition_model */
    /* state preserved: sampled_backedge */
    next_entry = (int)U32(vm->ip + 0x0);
    vm_ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* terminal CFG edge: decoded_control, target_vm_ip=0x37142c, coverage=- */
    vm_program_external_edge(vm, 0x37142c);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

static void vmdec_p064_bb_0492(VMState *vm, uint64_t vm_ip) {
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    int next_entry = -1;
    /* VM block 492: 0x37171c..0x371757; rows=14, terminal=long_branch_forward */
    /* 0x37171c..0x37171e: exact_instruction, entry=354, bytes=fd00; next = 253@0xacfb1:25, ip += +0x2; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 253;
    vm_ip += 0x2;
    /* 0x37171e..0x371724: exact_instruction, entry=253, bytes=1ebe00000000; next = 196@0x9fbcd:25, ip += +0x6; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x764111b0u + 0x6d2270cbu + U32(vm->ip + 0x2u) ^ vm->flags + vm->flags | 0x62c3b0ddu | 0x2b96d1d1u & 0x2d46e2e3u ^ U16(vm->ip + 0x0u) + 0x7c5d4802u;
    next_entry = 196;
    vm_ip += 0x6;
    /* 0x371724..0x371728: exact_instruction, entry=196, bytes=0e6b1ce1; next = 347@0xc088d:25, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 347;
    vm_ip += 0x4;
    /* 0x371728..0x37172c: exact_instruction, entry=347, bytes=dbb1b748; next = 307@0xb8064:25, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u & vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u + U16(vm->ip + 0x2u) + vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u - vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u | 0x6630614fu ^ 0x1a7ef2aeu | vm->state | vm->flags + 0x6fa972f0u | vm->flags ^ vm->state | vm->flags + 0x6fa972f0u & 0x45223942u + vm->state | vm->flags + 0x6fa972f0u | 0x2efc96c5u ^ 0x5cf483c7u ^ 0x7bd54e39u - 0x10871fd8u;
    next_entry = 307;
    vm_ip += 0x4;
    /* 0x37172c..0x37172f: exact_instruction, entry=307, bytes=151db3; next = 301@0xb708d:25, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state ^ U8(vm->ip + 0x0u) - vm->flags & vm->flags & 0x5792b958u ^ vm->flags & 0x5792b958u;
    next_entry = 301;
    vm_ip += 0x3;
    /* 0x37172f..0x371734: exact_instruction, entry=301, bytes=003d011f18; next = 352@0xc1ec4:25, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags ^ U16(vm->ip + 0x3u) - vm->state & vm->flags - 0x2c0febdfu;
    next_entry = 352;
    vm_ip += 0x5;
    /* 0x371734..0x371736: exact_instruction, entry=352, bytes=e2e6; next = 165@0x9a24c:25, ip += +0x2; dispatch_model=static_100; state=state_add_const; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x31863366u | U16(vm->ip + 0x0u) + vm->state & 0x31863366u + 0x331dfc06u;
    next_entry = 165;
    vm_ip += 0x2;
    /* 0x371736..0x371738: exact_instruction, entry=165, bytes=1200; next = 18@0x7be9b:25, ip += +0x2; dispatch_model=static_100; state=state_const_post; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = 0x0u;
    next_entry = 18;
    vm_ip += 0x2;
    /* 0x371738..0x37173b: exact_instruction, entry=18, bytes=200662; next = 196@0x9fbcd:25, ip += +0x3; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu - U16(vm->ip + 0x0u) - vm->state & vm->flags | 0x954df65u + 0x5b466f3bu - 0x6382ce20u & vm->flags | 0x954df65u + 0x5b466f3bu;
    next_entry = 196;
    vm_ip += 0x3;
    /* 0x37173b..0x37173f: exact_instruction, entry=196, bytes=02a40cdc; next = 189@0x9e7af:25, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | 0x52e5924au + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + vm->flags | 0x4083ed99u & vm->state | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    next_entry = 189;
    vm_ip += 0x4;
    /* 0x37173f..0x371743: exact_instruction, entry=189, bytes=368234ec; next = 154@0x97ce6:25, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state & 0x160e4f34u + U16(vm->ip + 0x2u) + vm->state & 0x160e4f34u ^ 0x2a1ce984u;
    next_entry = 154;
    vm_ip += 0x4;
    /* 0x371743..0x371747: exact_instruction, entry=154, bytes=b53d4305; next = 242@0xaa87d:25, ip += +0x4; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - U16(vm->ip + 0x0u) - vm->state - U16(vm->ip + 0x2u) ^ vm->state - vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu + vm->flags + 0x60c316f3u & 0x56154bafu + 0xbc52893u & 0x57dbe69eu | 0x7ed018fbu ^ 0x18426e67u - 0x6535d747u;
    next_entry = 242;
    vm_ip += 0x4;
    /* 0x371747..0x37174c: exact_instruction, entry=242, bytes=3d01595345; next = 246@0xab427:25, ip += +0x5; dispatch_model=static_100; validation=state_static=100.0%;dispatch_static=100.0%;ip_static=100.0% */
    vm->state = vm->state | U16(vm->ip + 0x3u) - vm->state ^ 0x5c05e9b5u;
    next_entry = 246;
    vm_ip += 0x5;
    /* 0x37174c..0x3717c4: long_branch_forward, entry=246, bytes=a5000000780000003d0122; next = table[165], ip += 0x78; validation=file_backed_operand;source_state=transition_model */
    /* state preserved: sampled_long_or_sparse */
    next_entry = (int)U32(vm->ip + 0x0);
    vm_ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* terminal CFG edge: decoded_control, target_vm_ip=0x3717c4, coverage=- */
    vm_program_external_edge(vm, 0x3717c4);
    (void)state0;
    (void)flags0;
    (void)byte0;
    (void)next_entry;
    (void)vm_ip;
}

void vm_program_atlas_064_decompiled(VMState *vm, uint64_t vm_ip) {
    switch (vm_ip) {
    case 0x3716c7: vmdec_p064_bb_0491(vm, vm_ip); return;
    case 0x37171c: vmdec_p064_bb_0492(vm, vm_ip); return;
    default: vm_program_unknown_entry(vm, vm_ip); return;
    }
}
