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
#define S16(p) (*(const int16_t *)(p))
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

static VMOpResult op_entry_000(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=0, native=0x78561, class=static_validated, events=89, shape=EECCE, delta=+0x5 */
    /* operands: b0=enum5(0x8d:41,0x4a:17,0xbe:14,0xef:10,0x1a:7);b1=enum5(0xc2:41,0x34:17,0x06:14,0x7f:10,0xf6:7);b2=0x3d;b3=0x01;b4=enum5(0x35:41,0xa3:17,0xe5:14,0x0f:10,0xb5:7) */
    /* native IP reads: 0x78614:u16_2,0x7862f:byte0,0x786f1:b4,0x78726:u16_2,0x787bc:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 ^ 0x1966e0e7u - U16(vm->ip + 0x0u) + state0 ^ 0x1966e0e7u - 0x251a0141u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 ^ 0x1966e0e7u)))) - 0x251a0141u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 48=0x5u */
    /* observed top targets: 352@0xc1ec4:41,144@0x95887:31,257@0xadbfd:10,108@0x8f24b:7 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/48 */
    return r;
}

static VMOpResult op_entry_001(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=1, native=0x78835, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x78850:u16_6,0x78875:u16_4,0x788a2:u32_0,0x78900:u32_2,0x789bd:byte0,0x78b8c:u16_0 */
    /* static-only queue: rank=145, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_78835,function_788e2,function_78c79,function_78c7f, span=1103, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=145, retdec=function_78835, callret=native_ret_stack_prefix, slot_status=state_effect_only_no_dispatch_return, ip_advance=10 */
    /* tier4 effects: callret=native_ret_stack_prefix; calls=0; rets=1; ip += 10; retdec_tail=primary builds stack/value cell; overlap tier3 body is state-only for this entry; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x2/4,+0x2/8,+0x0/2; frame_reads=0xa,0x23,0x170,0x71,0xbb,0x81,0x194,0x1... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    /* vm->state = state0 & U32(vm->ip + 0x2u) + flags0 - 0x7a70ea42u + 0x68fd81fau | 0x5792765au ^ flags0 - 0x7a70ea42u + 0x68fd81fau | 0x5792765au & state0 & U32(vm->ip + 0x2u) + flags0 - 0x7a70ea42u + 0x68fd81fau | 0x5792765au - 0x53332262u + state0 & U32(vm->ip + 0x2u) + flags0 - 0x7a70ea42u + 0x68fd81fau | 0x5792765au + 0x18181cd5u - flags0 - 0x7a70ea42u + 0x68fd81fau ...; */
    vm->flags = flags0 - 0x7a70ea42u + 0x68fd81fau;
    vm->ip += 0xa;
    /* IP advance recovered from native tail site: tail_ip_add@0x78c6d */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_002(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=2, native=0x788e2, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x78900:u32_2,0x789bd:byte0,0x78b8c:u16_0 */
    /* static-only queue: rank=100, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_788e2,function_78c79,function_78c7f, span=930, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=100, retdec=function_788e2, share=primary_plus_empty_overlap_stubs, slot_status=state_effect_only_no_dispatch_return, ip_advance=10 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 10; retdec_tail=return is frame/result pointer after wide operand update; ip_reads=+0x2/4,+0x2/8,+0x0/2; frame_reads=0x23,0xa,0x170,0x71,0x81,0x194,0x10f; frame_writes=0x170,0x23,0x60,0xa; functions=function_788... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    /* vm->state = state0 & U32(vm->ip + 0x2u) + flags0 - 0x7a70ea42u + 0x68fd81fau | 0x5792765au ^ flags0 - 0x7a70ea42u + 0x68fd81fau | 0x5792765au & state0 & U32(vm->ip + 0x2u) + flags0 - 0x7a70ea42u + 0x68fd81fau | 0x5792765au - 0x53332262u + state0 & U32(vm->ip + 0x2u) + flags0 - 0x7a70ea42u + 0x68fd81fau | 0x5792765au + 0x18181cd5u - flags0 - 0x7a70ea42u + 0x68fd81fau ...; */
    vm->flags = flags0 - 0x7a70ea42u + 0x68fd81fau;
    vm->ip += 0xa;
    /* IP advance recovered from native tail site: tail_ip_add@0x78c6d */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_004(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=4, native=0x792f8, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x79364:byte0,0x793c6:byte0,0x793e8:byte0,0x7941d:byte0,0x794c2:u32_0,0x795e1:u16_4,0x79626:u16_4 - state0 + 0x3b3bbe74 - 0x3732e4cc + 0x154265a3 & 0x2bd560b0 ^ 0x3aea6ba6 + flags0 - state0 + 0x3b3bbe74 - 0x3732e4cc + 0x1f59164b - 0x3bcedb21 ^ u32_0 + state... */
    /* static-only queue: rank=91, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_792f8,function_79677, span=903, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=91, retdec=function_792f8, share=primary_plus_empty_overlap_stub, slot_status=g2_mask_return_no_dispatch_slot, ip_advance=6 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 6; retdec_tail=return is g2 mask address, not dispatch; ip_reads=+0x0/4,+0x4/2; frame_reads=0x170,0x194,0x23,0x0,0x81,0xa,0x10f; frame_writes=0x170,0x23,0x16f,0x0,0xa; functions=function_792f8,function_79677; ran... */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    /* vm->state = state0 + 0x3b3bbe74u - 0x3732e4ccu + 0x154265a3u & 0x2bd560b0u ^ 0x3aea6ba6u + flags0 - state0 + 0x3b3bbe74u - 0x3732e4ccu + 0x1f59164bu - 0x3bcedb21u ^ U32(vm->ip + 0x0u) + state0 + 0x3b3bbe74u - 0x3732e4ccu + 0x154265a3u & 0x2bd560b0u ^ 0x3aea6ba6u + flags0 - state0 + 0x3b3bbe74u - 0x3732e4ccu + 0x1f59164bu - 0x3bcedb21u ^ flags0 - state0 + 0x3b3bbe74u ...; */
    vm->flags = flags0 - state0 + 0x3b3bbe74u - 0x3732e4ccu + 0x1f59164bu - 0x3bcedb21u & 0x500698c1u;
    vm->ip += 0x6;
    /* IP advance recovered from native tail site: tail_ip_add@0x7966b */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_005(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=5, native=0x79675, class=target_only, events=0, shape=-, delta=- */
    /* native IP reads: 0x79690:u16_6,0x796b5:u16_4,0x796e1:u32_0,0x7977d:u16_3,0x79782:u16_0,0x797ea:u16_5,0x79871:u16_3,0x7989f:u16_0,0x79935:u16_7 */
    /* decode signature: IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x7;RIP+0x7/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 + U16(vm->ip + 0x7u) ^ state0 + 0x17cd41c1u;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0x799bd */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_006(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=6, native=0x7971e, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7977d:u16_3,0x79782:u16_0,0x797ea:u16_5,0x79871:u16_3,0x7989f:u16_0,0x79935:u16_7 */
    /* static-only queue: rank=26, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_7971e, span=691, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=26, retdec=function_7971e, slot_status=state_effect_only_no_dispatch_return, ip_advance=9 */
    /* tier1 effects: ip += 9; retdec_tail=state = state0 + 0x17cd41c1 + (state0 ^ s16(ip+7)); paired word pointer step; ip_reads=+0x3/2,+0x0/2,+0x5/2,+0x7/2; frame_reads=0xa,0x81,0x199,0x10f,0x170; frame_writes=0x170,0xa */
    /* decode signature: IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x7;RIP+0x7/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 + U16(vm->ip + 0x7u) ^ state0 + 0x17cd41c1u;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0x799bd */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_007(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=7, native=0x799c7, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x799e2:u16_2,0x79a08:u16_0,0x79b22:u16_3,0x79b90:byte0,0x79ca9:b2,0x79ce5:u16_3,0x79d32:u16_0 */
    /* static-only queue: rank=138, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_799c7,function_79a3d,function_79da7, span=1002, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=138, retdec=function_799c7, callret=native_ret_prefix_over_clean_child_slot, slot_status=overlap_dispatch_table_slot_comment_only, ip_advance=5 */
    /* tier4 effects: callret=native_ret_prefix_over_clean_child_slot; calls=0; rets=1; ip += 5; retdec_tail=primary copies source into destination; child tier3 slot is clean only after separate entry composition; ip_reads=+0x0/2,+0x3/2,+0x2/2,+0x2/1; frame_reads=0xa,0x60,0x0,0x... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 | flags0;
    /* tier4 slot expression kept comment-only: (s16(ip+0) + 0x4c6) & 0xffff */
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x79d9a */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_008(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=8, native=0x79a3d, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x79b22:u16_3,0x79b90:byte0,0x79ca9:b2,0x79ce5:u16_3,0x79d32:u16_0 */
    /* static-only queue: rank=89, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_79a3d,function_79da7, span=884, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=89, retdec=function_79a3d, share=primary_plus_empty_overlap_stub, slot_status=retdec_dispatch_table_slot, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return dispatch_table[s16(ip+0)+0x4c6] after rotate/flag side effects; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x60,0x0,0x23,0x194,0x71,0x10f; frame_writes=0x71,0x60,0x0,0x170,0xa; functions... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 | flags0;
    r.slot = (uint32_t)((((int32_t)S16(vm->ip + 0x0u)) + 0x4c6u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier3 static slot recovered from a shared RetDec primary tail; dynamic source-row validation is still absent. */
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x79d9a */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_009(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=9, native=0x79da3, class=partial, events=3, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x69;b1=0x3d;b2=0x01;b3=0xb4;b4=0x4a */
    /* native IP reads: 0x79e24:byte0,0x79f12:b0,0x79f64:u16_1,0x79fcf:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8;RF+0x194/1:mov */
    vm->state = state0 & U16(vm->ip + 0x3u) - state0 ^ 0x25d88329u;
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot] */
    /* observed top targets: 256@0xad849:3 */
    return r;
}

static VMOpResult op_entry_010(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=10, native=0x7a04f, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7a058:byte0,0x7a065:byte0,0x7a20d:byte0,0x7a324:b4,0x7a354:u16_2,0x7a43a:u16_0 */
    /* static-only queue: rank=103, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_7a04f,function_7a4e3, span=1170, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=103, retdec=function_7a04f, share=primary_plus_empty_overlap_stub, slot_status=noisy_dispatch_base_candidate, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=RetDec reads dispatch base but return is g3/noise-mixed; ip_reads=+0x4/1,+0x2/2,+0x0/2; frame_reads=0x0,0x170,0x81,0x194,0xa,0x23,0x60,0x71,0x10f; frame_writes=0x170,0x23,0x71,0x0,0x60,0xa; functio... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 & flags0 ^ flags0 + state0 & flags0 + 0x564636d2u & 0x1a79a963u ^ 0x36174357u + 0x4123783cu - U16(vm->ip + 0x0u) ^ state0 & flags0 ^ flags0 + state0 & flags0 + 0x564636d2u & 0x1a79a963u ^ 0x36174357u + 0x4123783cu - 0x19471e33u;
    vm->flags = flags0 + state0 & flags0 + 0x564636d2u & 0x1a79a963u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x7a4ce */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_011(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=11, native=0x7a4d8, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7a533:u16_6,0x7a575:b8,0x7ab62:u32_0,0x7ab8d:u16_4,0x7abdd:u16_9,0x7ac3f:u16_11 */
    /* static-only queue: rank=150, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch06.c, funcs=function_7a4d8, span=2061, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=150, retdec=function_7a4d8, callret=native_ret_with_early_masked_return, slot_status=early_masked_native_return_no_dispatch_slot, ip_advance=13 */
    /* tier4 effects: callret=native_ret_with_early_masked_return; calls=0; rets=1; ip += 13; retdec_tail=RetDec has early masked dispatch-base/frame return plus final result return; ip_reads=+0x6/2,+0x8/1,+0x0/4,+0x4/2,+0x9/2,+0xb/2; frame_reads=0xa,0x12,0xbb,0x10f,0x170; frame... */
    /* decode signature: IPADV+0xb;RIP+0xb/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0xb;RIP+0xb/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 + U16(vm->ip + 0xbu) + state0 ^ 0x4ecbeff6u;
    vm->ip += 0xd;
    /* IP advance recovered from native tail site: tail_ip_add@0x7accf */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_012(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=12, native=0x7acd8, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7ad3c:u16_4,0x7ad46:u16_6,0x7adc1:u16_2,0x7ae68:u16_0 */
    /* static-only queue: rank=14, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_7acd8, span=541, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=14, retdec=function_7acd8, slot_status=retdec_dispatch_table_slot, ip_advance=8 */
    /* tier1 effects: ip += 8; retdec_tail=state = slot_source | (state0 | flags0); byte store through pointer step; ip_reads=+0x4/2,+0x6/2,+0x2/2,+0x0/2; frame_reads=0xa,0x23,0x10f,0x170; frame_writes=0x170,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 | flags0 | U16(vm->ip + 0x0u) - state0 | flags0 + 0x61ec39cdu;
    r.slot = (uint32_t)((((int32_t)S16(vm->ip + 0x0u)) - (state0 | flags0) + 0x61ec39cdu) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier1 static slot recovered from a clean RetDec dispatch-table tail; dynamic source-row validation is still absent. */
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0x7aedf */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_013(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=13, native=0x7aee8, class=static_validated, events=5, shape=EECCE, delta=+0x5 */
    /* operands: b0=enum2(0x9e:4,0x6a:1);b1=enum2(0x7e:4,0x75:1);b2=0x3d;b3=0x01;b4=enum2(0x25:4,0x11:1) */
    /* native IP reads: 0x7b082:byte0,0x7b0e7:b4,0x7b113:u16_2,0x7b137:byte0,0x7b2ec:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 ^ 0x67934603u ^ flags0 - 0x1c36555u | 0x771fee31u | 0x1490ac71u - 0x2de02e8u;
    vm->flags = flags0 - 0x1c36555u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32(state0 ^ 0x67934603u)) ^ (mask32((mask32((mask32((mask32(flags0 - 0x1c36555u)) | 0x771fee31u)) | 0x1490ac71u)) - 0x2de02e8u)))))) - 0x5ad3c2e8u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 5=0x5u */
    /* observed top targets: 256@0xad849:4,257@0xadbfd:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/5 */
    return r;
}

static VMOpResult op_entry_014(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=14, native=0x7b3be, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7b543:b4,0x7b59d:u16_2,0x7b655:u16_0 */
    /* static-only queue: rank=32, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_7b3be, span=794, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=32, retdec=function_7b3be, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = (s16(ip+0) - 0x7584d103) ^ (state0 & flags0); flag/operand rewrite body precedes tail; ip_reads=+0x4/1,+0x2/2,+0x0/2; frame_reads=0xa,0x0,0x60,0xe1,0x23,0x71,0x10f; frame_writes=0x71,0x170,0x0,0x60,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx;RF+0xa/8:mov */
    vm->state = state0 & flags0 ^ U16(vm->ip + 0x0u) - 0x7584d103u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x7b6c2 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_015(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=15, native=0x7b6cb, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7b6df:u32_0,0x7b732:u32_0,0x7b961:b0,0x7b9bc:u16_3,0x7ba42:u16_1 */
    /* static-only queue: rank=131, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_7b6cb,function_7b77c, span=1067, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=131, retdec=function_7b6cb, callret=native_ret_frame_cell, slot_status=frame_cell_return_no_dispatch_slot, ip_advance=5 */
    /* tier4 effects: callret=native_ret_frame_cell; calls=0; rets=1; ip += 5; retdec_tail=primary returns frame[112] after stack-like frame cell writes; ip_reads=+0x0/4,+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x60,0x0,0x71,0x23,0xe1,0x10f,0x81; frame_writes=0x170,0x71,0x1dc,0x60,... */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x10f/8:mov;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx;RF+0x81/8:mov */
    vm->state = state0 ^ flags0 ^ U16(vm->ip + 0x1u) - 0x699ad46au;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x7bae0 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_016(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=16, native=0x7b77c, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7b961:b0,0x7b9bc:u16_3,0x7ba42:u16_1 */
    /* static-only queue: rank=43, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_7b77c, span=890, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=43, retdec=function_7b77c, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = (s16(ip+1) - 0x699ad46a) ^ state0; flag/operand rewrite body precedes tail; ip_reads=+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x60,0x0,0x71,0x23,0xe1,0x10f,0x81; frame_writes=0x170,0x71,0x60,0x0,0xa */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x10f/8:mov;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx;RF+0x81/8:mov */
    vm->state = state0 ^ flags0 ^ U16(vm->ip + 0x1u) - 0x699ad46au;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x7bae0 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_017(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=17, native=0x7bae9, class=static_validated, events=758, shape=VVEVV, delta=+0x5 */
    /* operands: b0=var54(top=0x12:33.9%);b1=var37(top=0xff:35.9%);b2=enum4(0x3a:321,0x62:293,0x32:75,0x50:69);b3=var28(top=0x10:34.4%);b4=var12(top=0xa0:35.0%) */
    /* native IP reads: 0x7bb5e:byte0,0x7bb78:u16_0,0x7bbd6:b2,0x7bdc5:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 | flags0 ^ 0x4365071cu & U16(vm->ip + 0x0u) ^ state0 | flags0 ^ 0x4365071cu + flags0 ^ 0x4365071cu ^ 0x95f9698u + U16(vm->ip + 0x3u) - state0 | flags0 ^ 0x4365071cu & U16(vm->ip + 0x0u) ^ state0 | flags0 ^ 0x4365071cu + flags0 ^ 0x4365071cu ^ 0x95f9698u;
    vm->flags = flags0 ^ 0x4365071cu - 0x69693e45u & 0x3d8b48f7u - 0x1b99cfe0u + 0x7ec4552au & 0x2b98de46u + 0x459da9b2u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32(state0 | (mask32(flags0 ^ 0x4365071cu)))) & (mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 | (mask32(flags0 ^ 0x4365071cu)))))) + (mask32(flags0 ^ 0x4365071cu)))))) ^ 0x95f9698u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 300@0xb6c36:256,122@0x9170d:150,28@0x7e390:132,18@0x7be9b:31,92@0x8b8cb:31,200@0xa0a9e:30 */
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

static VMOpResult op_entry_019(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=19, native=0x7c30a, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7c361:u16_4,0x7c365:u16_2,0x7c3da:u16_9,0x7c45a:u16_2,0x7c47a:u16_4,0x7c50c:b8,0x7c54b:u16_0,0x7c5b4:u16_6 */
    /* static-only queue: rank=81, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_7c30a,function_7c630, span=814, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=81, retdec=function_7c30a, share=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return is frame+ip cell after pointer compare and state update; ip_reads=+0x4/2,+0x2/2,+0x9/2,+0x8/1,+0x0/2,+0x6/2; frame_reads=0xa,0x81,0x199,0x10f,0x170; frame_writes=0x170,0xa; functions=functi... */
    /* decode signature: IPADV+0x6;RIP+0x6/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x6;RIP+0x6/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 & U16(vm->ip + 0x6u) - state0 + 0x7d53d38du;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x7c621 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_021(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=21, native=0x7ca98, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7caaa:u32_0,0x7cafb:u32_0,0x7cb91:byte0,0x7ccbf:byte0,0x7cd3f:byte0,0x7ce38:byte0,0x7ce66:b2,0x7ce92:u16_0,0x7cf10:u16_3 */
    /* static-only queue: rank=148, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_7ca98,function_7cb43,function_7d009,function_7d00c, span=1404, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=148, retdec=function_7ca98, callret=native_ret_frame_cell, slot_status=frame_cell_return_no_dispatch_slot, ip_advance=5 */
    /* tier4 effects: callret=native_ret_frame_cell; calls=0; rets=1; ip += 5; retdec_tail=primary returns frame[112] before tier3 state-only overlap body; ip_reads=+0x0/4,+0x2/1,+0x0/2,+0x3/2; frame_reads=0x81,0xa,0x194,0x23,0x0,0x170,0x60,0x71,0x10f; frame_writes=0x23,0x170,0x... */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14;RF+0x71/8:sub */
    vm->state = state0 - flags0 ^ 0x293ef0b0u + 0xf4dbe5au & 0x75af46bu | flags0 ^ 0x293ef0b0u + 0xf4dbe5au ^ U16(vm->ip + 0x3u) + state0 - flags0 ^ 0x293ef0b0u + 0xf4dbe5au & 0x75af46bu | flags0 ^ 0x293ef0b0u + 0xf4dbe5au;
    vm->flags = flags0 ^ 0x293ef0b0u + 0xf4dbe5au & state0 - flags0 ^ 0x293ef0b0u + 0xf4dbe5au & 0x75af46bu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x7cffc */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_022(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=22, native=0x7cb43, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7cb91:byte0,0x7ccbf:byte0,0x7cd3f:byte0,0x7ce38:byte0,0x7ce66:b2,0x7ce92:u16_0,0x7cf10:u16_3 */
    /* static-only queue: rank=108, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_7cb43,function_7d009,function_7d00c, span=1233, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=108, retdec=function_7cb43, share=primary_plus_empty_overlap_stubs, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=return is frame/result pointer after operand/state rewrite; ip_reads=+0x2/1,+0x0/2,+0x3/2; frame_reads=0x81,0x194,0x23,0x0,0x170,0xa,0x60,0x71,0x10f; frame_writes=0x23,0x170,0x71,0x60,0x0,0xa; fun... */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14;RF+0x71/8:sub */
    vm->state = state0 - flags0 ^ 0x293ef0b0u + 0xf4dbe5au & 0x75af46bu | flags0 ^ 0x293ef0b0u + 0xf4dbe5au ^ U16(vm->ip + 0x3u) + state0 - flags0 ^ 0x293ef0b0u + 0xf4dbe5au & 0x75af46bu | flags0 ^ 0x293ef0b0u + 0xf4dbe5au;
    vm->flags = flags0 ^ 0x293ef0b0u + 0xf4dbe5au & state0 - flags0 ^ 0x293ef0b0u + 0xf4dbe5au & 0x75af46bu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x7cffc */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_023(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=23, native=0x7d007, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7d2a2:byte0,0x7d2b9:byte0,0x7d402:b2,0x7d44f:u16_0,0x7d501:u16_3 */
    /* static-only queue: rank=115, tier=tier5_large_static_replay, sidecar=vm_unobserved_handlers_retdec_batch06.c, funcs=function_7d007, span=1521, action=defer_until_small_static_handlers_are_inlined */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RF+0x10f/8:mov;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0 ^ flags0 & 0x3758c69bu | 0x21171a0cu | 0x76974dc1u - flags0 & 0x3758c69bu + 0x69611da6u - U16(vm->ip + 0x3u) + state0 ^ flags0 & 0x3758c69bu | 0x21171a0cu | 0x76974dc1u - flags0 & 0x3758c69bu + 0x69611da6u ^ 0x6fa319ceu;
    vm->flags = flags0 & 0x3758c69bu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x7d5e2 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_024(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=24, native=0x7d5ec, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7d6a0:u16_0,0x7d6ba:u16_4,0x7d713:u16_9,0x7d7bb:u16_0,0x7d7cc:u16_4,0x7d84d:b6,0x7d888:u16_7,0x7d88f:u16_7 + (Ptr(kind='frame', off=0)),0x7d8da:u16_2,0x7d91b:u16_2 ^ state0 + 0x68420565 & 0xffff */
    /* static-only queue: rank=86, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_7d5ec,function_7d945, span=866, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=86, retdec=function_7d5ec, share=primary_plus_empty_overlap_stub, slot_status=retdec_dispatch_table_slot, ip_advance=11 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return dispatch_base + slot after state_after = (0x7d53d38d - state0 + s16(ip+6)) & state0; ip_reads=+0x0/2,+0x4/2,+0x9/2,+0x6/1,+0x7/2,+0x2/2; frame_reads=0xa,0x23,0x199,0x10f,0x170; frame_writes... */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx */
    vm->state = state0;
    vm->flags = flags0 - 0x668b82edu;
    r.slot = (uint32_t)(((((0x7d53d38du - state0 + ((int32_t)S16(vm->ip + 0x6u))) & state0) ^ ((int32_t)S16(vm->ip + 0x2u))) + 0x565u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier3 static slot recovered from a shared RetDec primary tail; dynamic source-row validation is still absent. */
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x7d938 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_025(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=25, native=0x7d941, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7d9b0:u16_0,0x7d9ba:u16_7,0x7d9e8:u16_9,0x7da2e:u16_7,0x7da3f:u16_0,0x7daa4:b6,0x7daea:u16_2,0x7db49:u16_4 */
    /* static-only queue: rank=22, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_7d941, span=647, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=22, retdec=function_7d941, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=state = (state0 + s16(ip+4)) ^ state0; word compare/pointer step; ip_reads=+0x0/2,+0x7/2,+0x9/2,+0x6/1,+0x2/2,+0x4/2; frame_reads=0xa,0x170,0x71,0x199,0x10f; frame_writes=0x23,0x170,0xa */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;RF+0x170/4:mov */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12;RF+0x170/4:mov */
    vm->state = state0 ^ U16(vm->ip + 0x4u) + state0;
    vm->flags = flags0 ^ state0;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x7dbb1 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_027(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=27, native=0x7dfbf, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7e001:u16_3,0x7e04c:b2,0x7e082:u16_3 + (Ptr(kind='frame', off=0)),0x7e2fe:u16_0,0x7e35d:u16_0 - state0 */
    /* static-only queue: rank=96, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_7dfbf,function_7e392, span=989, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=96, retdec=function_7dfbf, share=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return is frame/result pointer after operand/state rewrite; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x170,0x10f; frame_writes=0x199,0x170,0xa; functions=function_7dfbf,function_7e392; ranges... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;RF+0x170/4:mov */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10;RF+0x170/4:mov */
    vm->state = state0 & U16(vm->ip + 0x0u) - state0;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x7e386 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_029(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=29, native=0x7e7cd, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7e7e8:u32_2,0x7e813:u16_0,0x7e853:byte0,0x7e965:byte0,0x7ea01:u16_2,0x7ec01:u16_0 */
    /* static-only queue: rank=144, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_7e7cd,function_7e849,function_7ecda, span=1298, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=144, retdec=function_7e7cd, callret=native_ret_result_prefix, slot_status=masked_noisy_overlap_return_no_dispatch_slot, ip_advance=6 */
    /* tier4 effects: callret=native_ret_result_prefix; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[187]+operand into destination; overlap return is masked arithmetic residue; ip_reads=+0x0/2,+0x2/4,+0x2/2; frame_reads=0x81,0xa,0x170,0x23,0x194,0x0,0xbb,0x71,0x10f... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 | flags0 & 0x614d4b17u + 0x64fd160cu;
    vm->flags = flags0 & 0x614d4b17u;
    vm->ip += 0x4;
    /* IP advance recovered from native tail site: tail_ip_add@0x7ecc9 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_031(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=31, native=0x7ecd2, class=static_validated, events=2, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=0xdf;b3=0x2e;b4=0xed */
    /* native IP reads: 0x7ed79:byte0,0x7ee61:b4,0x7ee9a:u16_0,0x7ef1f:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RF+0x10f/8:mov;RIP+0x2/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + state0)) - 0x72a124afu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 2=0x5u */
    /* observed top targets: 352@0xc1ec4:2 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/2 */
    return r;
}

static VMOpResult op_entry_032(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=32, native=0x7efa8, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7effd:u16_6,0x7f047:b8,0x7f652:u32_0,0x7f67d:u16_4,0x7f6cc:u16_9,0x7f733:u16_11 */
    /* static-only queue: rank=155, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch06.c, funcs=function_7efa8,function_7f7c6,function_7f7c9, span=2089, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=155, retdec=function_7efa8, callret=native_ret_with_early_masked_return, slot_status=early_masked_native_return_no_dispatch_slot, ip_advance=13 */
    /* tier4 effects: callret=native_ret_with_early_masked_return; calls=0; rets=1; ip += 13; retdec_tail=RetDec has early g3-masked native return plus final result return; ip_reads=+0x6/2,+0x8/1,+0x0/4,+0x4/2,+0x9/2,+0xb/2; frame_reads=0xa,0x12,0xbb,0x10f,0x170; frame_writes=0x... */
    /* decode signature: IPADV+0xb;RIP+0xb/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;RF+0x170/4:mov */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0xb;RIP+0xb/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8;RF+0x170/4:mov */
    vm->state = state0 - U16(vm->ip + 0xbu);
    vm->ip += 0xd;
    /* IP advance recovered from native tail site: tail_ip_add@0x7f7b9 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_034(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=34, native=0x7fba3, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x7fbd2:u16_1,0x7fbe9:u16_5,0x7fc16:u16_7,0x7fc65:u16_1,0x7fc6c:u16_5,0x7fcda:u16_3 */
    /* static-only queue: rank=56, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_7fba3,function_7fd52, span=439, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=56, retdec=function_7fba3, split=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=9 */
    /* tier2 effects: split=primary_plus_empty_overlap_stub; ip += 9; retdec_tail=state = (state0 + s16(ip+3) ^ 0x459b6b23) + state0; paired qword pointer step; ip_reads=+0x1/2,+0x5/2,+0x7/2,+0x3/2; frame_reads=0xa,0x199,0x10f,0x170; frame_writes=0x170,0xa; functions=function_7f... */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 - 0x3a52e622u + U16(vm->ip + 0x3u) + state0 - 0x3a52e622u ^ 0x459b6b23u;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0x7fd43 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_035(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=35, native=0x7fd4d, class=static_validated, events=1, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x69;b1=0xf8;b2=0x00;b3=0x3d;b4=0x01 */
    /* native IP reads: 0x7ff34:b2,0x7ffa6:u16_3,0x80023:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8;RF+0x81/8:mov */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - state0)) ^ 0x2c39edf6u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 1=0x5u */
    /* observed top targets: 256@0xad849:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/1 */
    return r;
}

static VMOpResult op_entry_036(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=36, native=0x800a1, class=static_validated, events=4, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x5c;b1=0xc2;b2=0xa3;b3=0x3d;b4=0x01 */
    /* native IP reads: 0x803c8:byte0,0x804cd:b2,0x8053f:u16_3,0x805e1:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 + flags0 ^ flags0 & 0x73966fc6u & 0x348b11beu ^ 0x72d0ef43u | 0x7af5a860u ^ U16(vm->ip + 0x0u) - state0 + flags0 ^ flags0 & 0x73966fc6u & 0x348b11beu ^ 0x72d0ef43u | 0x7af5a860u;
    vm->flags = flags0 & 0x73966fc6u & 0x348b11beu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32(state0 + flags0)) ^ (mask32((mask32(flags0 & 0x73966fc6u)) & 0x348b11beu)))) ^ 0x72d0ef43u)) | 0x7af5a860u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 4=0x5u */
    /* observed top targets: 108@0x8f24b:4 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/4 */
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

static VMOpResult op_entry_038(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=38, native=0x80d79, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x80d9d:u16_0,0x80deb:u16_6,0x80e11:u16_4,0x80e8e:u16_2 */
    /* static-only queue: rank=8, tier=tier0_single_function_small_static_replay, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_80d79, span=394, action=inline_retdec_function_into_handler_model */
    /* tier0 static model: rank=8, retdec=function_80d79, slot_status=decode_candidate_slot, ip_advance=8 */
    /* tier0 effects: conditional flags rewrite; byte store through frame[s16(ip+0)]; pointer step by frame[s16(ip+4)] sign; state = slot_expr; ip += 8 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 + U16(vm->ip + 0x2u) - state0 - 0x23aef0b2u;
    vm->flags = flags0 & 0x55b62e53u ^ 0xd779badu;
    r.slot = (uint32_t)((((int32_t)S16(vm->ip + 0x2u)) - 0x23aef0b2u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier0 static slot recovered from the RetDec single-function model; dynamic source-row validation is still absent. */
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0x80eec */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_039(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=39, native=0x80ef6, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x80f34:u16_4,0x80f77:u16_8,0x80fa0:u16_0,0x80fe8:u16_8,0x80ff3:u16_4,0x81058:b10,0x81098:u16_2,0x810f4:u16_6 */
    /* static-only queue: rank=65, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_80ef6,function_81162, span=628, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=65, retdec=function_80ef6, split=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier2 effects: split=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=state = state0 | s16(ip+6); qword compare/pointer step; ip_reads=+0x4/2,+0x8/2,+0x0/2,+0xa/1,+0x2/2,+0x6/2; frame_reads=0xa,0x23,0x81,0x199,0x10f,0x170; frame_writes=0x23,0x170,0xa; functions=func... */
    /* decode signature: IPADV+0x6;RIP+0x6/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;RF+0x170/4:mov */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x6;RIP+0x6/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9;RF+0x170/4:mov */
    vm->state = state0 | U16(vm->ip + 0x6u);
    vm->flags = flags0 & 0x3f99e389u - 0x63d69dbu;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x81152 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_040(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=40, native=0x8115d, class=static_validated, events=928, shape=CCCCVV, delta=+0x6 */
    /* operands: b0=0xe8;b1=0x01;b2=0x3d;b3=0x01;b4=var77(top=0xb0:10.2%);b5=var73(top=0x03:10.1%) */
    /* native IP reads: 0x811d7:u16_0,0x811db:u16_2,0x81233:u16_4 */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx */
    vm->state = state0 & U16(vm->ip + 0x4u) ^ state0;
    vm->flags = flags0 - state0 ^ 0x3dd6f909u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x4u) ^ state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x6u */
    /* observed top targets: 66@0x855ff:102,64@0x85059:102,340@0xbf435:100,215@0xa4609:99,297@0xb64d7:97,199@0xa0631:97 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_041(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=41, native=0x8129d, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8138b:byte0,0x81432:byte0,0x81469:b2,0x814a0:u16_3,0x81555:u16_0 */
    /* static-only queue: rank=40, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_8129d, span=858, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=40, retdec=function_8129d, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = ((state0 ^ s16(ip+0)) - 0x7c7cd82f) | state0; flag/operand rewrite body precedes tail; ip_reads=+0x2/1,+0x3/2,+0x0/2; frame_reads=0xa,0x0,0x60,0x194,0x23,0x71,0x10f,0x170; frame_writes=0x170,0x71,0x0,0x60,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 + flags0 | U16(vm->ip + 0x0u) ^ state0 + flags0 - 0x7c7cd82fu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x815e0 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_042(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=42, native=0x815ea, class=static_validated, events=3, shape=CCEE, delta=+0x4 */
    /* operands: b0=0x00;b1=0x00;b2=enum2(0xa9:2,0x36:1);b3=enum2(0x00:2,0x01:1) */
    /* native IP reads: 0x816ca:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 - flags0 ^ state0 - 0x327f38a4u - 0x471012aeu ^ 0x160c3a44u;
    vm->flags = flags0 ^ state0 - 0x327f38a4u - 0x471012aeu ^ 0x160c3a44u;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 3=0x4u */
    /* observed top targets: 169@0x9af18:2,310@0xb8556:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/3 */
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

static VMOpResult op_entry_044(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=44, native=0x81b7f, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x81bcc:u16_3,0x81c2f:b0,0x81eb0:u16_1 */
    /* static-only queue: rank=51, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_81b7f, span=956, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=51, retdec=function_81b7f, slot_status=masked_table_load_requires_g5, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = (s16(ip+1) - state0) | state0; dispatch-table load uses g5-masked slot source; ip_reads=+0x3/2,+0x0/1,+0x1/2; frame_reads=0xa,0x10f,0x170; frame_writes=0x199,0x170,0xa */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 | U16(vm->ip + 0x1u) - state0;
    /* tier1 slot expression kept comment-only: (s16(ip+1) - state0) & g5_mask */
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x81f25 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_045(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=45, native=0x81f2e, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x81f56:u16_3,0x81f60:u16_5,0x81f95:u16_7,0x81fe0:u16_3,0x81fee:u16_5,0x8206c:u16_0 */
    /* static-only queue: rank=57, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_81f2e,function_820e1, span=445, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=57, retdec=function_81f2e, split=primary_prefix_before_neighbor_entry_46, slot_status=state_effect_only_no_dispatch_return, ip_advance=9 */
    /* tier2 effects: split=primary_prefix_before_neighbor_entry_46; ip += 9; retdec_tail=state = 0x6050ae66 - s16(ip+0) + state0; paired qword pointer step; ip_reads=+0x3/2,+0x5/2,+0x7/2,+0x0/2; frame_reads=0xa,0x199,0x10f; frame_writes=0x170,0xa; functions=function_81f2e,funct... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx */
    vm->state = state0 - U16(vm->ip + 0x0u) - 0x6050ae66u;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0x820d7 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_046(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=46, native=0x820e1, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8213f:u16_0,0x8216e:u16_2,0x821aa:u16_4,0x82238:u16_6 */
    /* static-only queue: rank=60, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_820e1,function_822bc, span=488, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=60, retdec=function_820e1, split=primary_before_tier0_entry_47_overlap, slot_status=retdec_dispatch_table_slot, ip_advance=8 */
    /* tier2 effects: split=primary_before_tier0_entry_47_overlap; ip += 8; retdec_tail=state = slot_source | state0; word store through pointer step; ip_reads=+0x0/2,+0x2/2,+0x4/2,+0x6/2; frame_reads=0xa,0x71,0x10f,0x170; frame_writes=0x170,0xa; functions=function_820e1,functio... */
    /* decode signature: IPADV+0x6;RIP+0x6/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x6;RIP+0x6/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0 + 0x6aceff9au | U16(vm->ip + 0x6u) + state0 + 0x6aceff9au + 0x368668ddu;
    r.slot = (uint32_t)((state0 + ((int32_t)S16(vm->ip + 0x6u)) + 0x368668ddu) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier2 static slot recovered from a split RetDec primary tail; dynamic source-row validation is still absent. */
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0x822b1 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_047(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=47, native=0x822bc, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x822e8:u16_7,0x822fd:u16_3,0x82329:u16_1,0x8236f:u16_3,0x82380:u16_7,0x82416:u16_5 */
    /* static-only queue: rank=11, tier=tier0_single_function_small_static_replay, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_822bc, span=456, action=inline_retdec_function_into_handler_model */
    /* tier0 static model: rank=11, retdec=function_822bc, slot_status=final_state_candidate_slot, ip_advance=9 */
    /* tier0 effects: qword copy through frame[s16(ip+3)] from frame[s16(ip+7)]; paired pointer step by frame[s16(ip+1)]/frame[0x199] sign; state = s16(ip+5); ip += 9 */
    /* decode signature: IPADV+0x5;RIP+0x5/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x5;RIP+0x5/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 ^ U16(vm->ip + 0x5u) ^ state0;
    r.slot = (uint32_t)(((int32_t)S16(vm->ip + 0x5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier0 static slot recovered from the RetDec single-function model; dynamic source-row validation is still absent. */
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0x8246d */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_048(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=48, native=0x82477, class=static_validated, events=283, shape=VVEVV, delta=+0x5 */
    /* operands: b0=var36(top=0xa8:11.3%);b1=var50(top=0x80:14.1%);b2=enum4(0x3a:109,0x50:80,0x62:69,0x32:25);b3=var73(top=0x01:9.5%);b4=var76(top=0x3b:9.2%) */
    /* native IP reads: 0x82534:u16_3,0x82593:b2,0x82760:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    /* vm->state = state0 & U16(vm->ip + 0x3u) + state0 ^ flags0 ^ 0x8881ae0u - 0x1accc893u + 0x4f1a7667u - flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u & flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u ^ 0x79fc8ff4u | flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u - 0x430c028cu & flags0...; */
    vm->flags = flags0 ^ 0x8881ae0u - 0x1accc893u & 0x6134e706u & 0x7e86fbd3u ^ 0x41ba58a6u;
    /* slot variants: 78=(mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32((mask32(U16(vm->ip + 0x3u) + state0)) ^ flags0)))) + 0x4f1a7667u)) - (mask32(flags0 & 0x6134e706u)))) & (mask32(flags0 & 0x6134e7u...#0107acd66a38 | 28=... */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 119=0x5u */
    /* observed top targets: 239@0xa991e:31,317@0xba1e2:30,269@0xb045b:26,66@0x855ff:25,281@0xb2db6:18,297@0xb64d7:11 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/119 */
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

static VMOpResult op_entry_050(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=50, native=0x82e76, class=target_only, events=0, shape=-, delta=- */
    /* native IP reads: 0x82e8a:b0,0x82eba:u32_7,0x82ede:b1,0x82ef6:u32_3,0x82f36:b1,0x82f88:b0,0x82fa7:b2,0x83000:u32_7,0x8302b:u16_11,0x83115:u16_9,0x83120:u16_2,0x83199:u16_0,0x8322c:u16_9,0x8323e:u16_2,0x832e5:b4,0x8330f:u16_5,0x83363:u16_7 */
    /* decode signature: IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x7;RIP+0x7/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 ^ 0x167c9a49u - U16(vm->ip + 0x7u) - state0 ^ 0x167c9a49u ^ 0x1217a3f5u;
    vm->flags = flags0 + 0x23b1b06u ^ 0x5ea815bu;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x833be */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_051(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=51, native=0x83061, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x83115:u16_9,0x83120:u16_2,0x83199:u16_0,0x8322c:u16_9,0x8323e:u16_2,0x832e5:b4,0x8330f:u16_5,0x83363:u16_7 */
    /* static-only queue: rank=88, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_83061,function_833cc, span=883, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=88, retdec=function_83061, share=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return is frame/result pointer after pointer compare and state update; ip_reads=+0x9/2,+0x2/2,+0x0/2,+0x4/1,+0x5/2,+0x7/2; frame_reads=0xa,0x170,0x23,0x199,0x10f; frame_writes=0x23,0x170,0xa; func... */
    /* decode signature: IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x7;RIP+0x7/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 ^ 0x167c9a49u - U16(vm->ip + 0x7u) - state0 ^ 0x167c9a49u ^ 0x1217a3f5u;
    vm->flags = flags0 + 0x23b1b06u ^ 0x5ea815bu;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x833be */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_052(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=52, native=0x833c7, class=static_validated, events=1103, shape=VVVCC, delta=+0x5 */
    /* operands: b0=var48(top=0x82:23.2%);b1=var45(top=0xb0:23.9%);b2=var40(top=0x47:23.2%);b3=0x3d;b4=0x01 */
    /* native IP reads: 0x834b5:byte0,0x835b1:b2,0x835f3:u16_3,0x83689:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;TDYN;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;TABLEADV+0x2;TDYN;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx;RF+0xa/8:mov */
    vm->state = state0 + U16(vm->ip + 0x0u) + state0 ^ 0x7823b2dau;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + state0)) ^ 0x7823b2dau)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 316@0xb987b:335,75@0x873fc:297,145@0x95b5c:156,196@0x9fbcd:91,64@0x85059:67,334@0xbdd18:63 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_053(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=53, native=0x8371d, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8372f:u32_0,0x83780:u32_0,0x838d0:u16_3,0x83936:byte0,0x83a1e:b2,0x83a66:u16_3,0x83ad2:u16_0 */
    /* static-only queue: rank=132, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_8371d,function_837cb, span=1072, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=132, retdec=function_8371d, callret=native_ret_frame_cell, slot_status=frame_cell_return_no_dispatch_slot, ip_advance=5 */
    /* tier4 effects: callret=native_ret_frame_cell; calls=0; rets=1; ip += 5; retdec_tail=primary returns frame[112]; overlap child returns g2-derived residue; ip_reads=+0x0/4,+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x23,0x194,0x71,0x10f,0x170; frame_writes=0x170,0x71,0x... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 & flags0 - 0x68b4ad2fu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x83b36 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_054(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=54, native=0x837cb, class=static_validated, events=1, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0xf1;b1=0x1b;b2=0xbd;b3=0x3d;b4=0x01 */
    /* native IP reads: 0x838d0:u16_3,0x83936:byte0,0x83a1e:b2,0x83a66:u16_3,0x83ad2:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 & flags0 - 0x68b4ad2fu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 & flags0)) - 0x68b4ad2fu)))) ^ 0x437360e7u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 1=0x5u */
    /* observed top targets: 256@0xad849:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/1 */
    return r;
}

static VMOpResult op_entry_055(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=55, native=0x83b40, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x83b57:byte0,0x83bea:u16_0,0x83c5d:byte0,0x83d3b:b4,0x83d7e:u16_0,0x83deb:u16_2 */
    /* static-only queue: rank=37, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_83b40, span=831, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=37, retdec=function_83b40, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = state0 | s16(ip+2); flag/operand rewrite body precedes tail; ip_reads=+0x0/2,+0x4/1,+0x2/2; frame_reads=0xa,0x60,0x194,0x0,0x71,0x10f,0x170; frame_writes=0x71,0x60,0x0,0x170,0xa */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0 | U16(vm->ip + 0x2u) ^ state0;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x83e6c */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_056(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=56, native=0x83e76, class=static_validated, events=27, shape=EECCE, delta=+0x5 */
    /* operands: b0=enum4(0x8d:11,0x02:10,0x34:4,0x42:2);b1=enum4(0x76:11,0xf0:10,0x75:4,0x66:2);b2=0x3d;b3=0x01;b4=enum4(0x4b:11,0x1b:10,0xb7:4,0x27:2) */
    /* native IP reads: 0x83f24:u16_2,0x83fa1:byte0,0x84077:b4,0x840cf:u16_2,0x8416a:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 + U16(vm->ip + 0x0u) - state0 ^ 0x5380ff71u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - state0)) ^ 0x5380ff71u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 6=0x5u */
    /* observed top targets: 160@0x994cf:13,173@0x9ba74:10,108@0x8f24b:4 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/6 */
    return r;
}

static VMOpResult op_entry_057(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=57, native=0x841f9, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8421b:u16_2,0x84243:u16_0 */
    /* static-only queue: rank=1, tier=tier0_single_function_small_static_replay, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_841f9, span=157, action=inline_retdec_function_into_handler_model */
    /* tier0 static model: rank=1, retdec=function_841f9, slot_status=retdec_state_slot, ip_advance=4 */
    /* tier0 effects: frame[u16(ip+2)] = frame[0xa1]; state = slot_expr; ip += 4 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0 - U16(vm->ip + 0x0u) ^ state0 - 0x9df7e26u;
    r.slot = (uint32_t)((state0 + 0x09df7e26u - (state0 ^ ((int32_t)S16(vm->ip + 0x0u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier0 static slot recovered from the RetDec single-function model; dynamic source-row validation is still absent. */
    vm->ip += 0x4;
    /* IP advance recovered from native tail site: tail_ip_add@0x84281 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_058(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=58, native=0x8428c, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x842a7:u16_2,0x842cc:u16_0,0x8432d:u16_8,0x8433b:u16_2,0x84378:u16_4,0x843bf:u16_2,0x843d1:u16_8,0x84470:b10,0x844b4:u16_0,0x844f6:u16_6 */
    /* static-only queue: rank=124, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_8428c,function_84302, span=791, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=124, retdec=function_8428c, callret=native_ret_result_prefix, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier4 effects: callret=native_ret_result_prefix; calls=0; rets=1; ip += 11; retdec_tail=primary copies source operand into destination frame slot and returns result; ip_reads=+0x2/2,+0x0/2,+0x8/2,+0x4/2,+0xa/1,+0x6/2; frame_reads=0xa,0x81,0x199,0x71,0x10f; frame_writes=0x... */
    /* decode signature: IPADV+0x6;RIP+0x6/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x6;RIP+0x6/2:movzx;RF+0x10f/8:mov;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 & U16(vm->ip + 0x6u) - 0x26d85c20u;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x8458c */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_059(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=59, native=0x84302, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8432d:u16_8,0x8433b:u16_2,0x84378:u16_4,0x843bf:u16_2,0x843d1:u16_8,0x84470:b10,0x844b4:u16_0,0x844f6:u16_6 */
    /* static-only queue: rank=25, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_84302, span=673, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=25, retdec=function_84302, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=state = (s16(ip+6) - 0x26d85c20) & state0; qword compare/pointer step; ip_reads=+0x8/2,+0x2/2,+0x4/2,+0xa/1,+0x0/2,+0x6/2; frame_reads=0xa,0x81,0x199,0x71,0x10f; frame_writes=0x170,0xa */
    /* decode signature: IPADV+0x6;RIP+0x6/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x6;RIP+0x6/2:movzx;RF+0x10f/8:mov;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 & U16(vm->ip + 0x6u) - 0x26d85c20u;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x8458c */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_060(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=60, native=0x84596, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x845c8:u16_3,0x845d2:u16_0,0x84619:u16_7,0x8465f:u16_3,0x84670:u16_0,0x846fa:u16_5 */
    /* static-only queue: rank=58, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_84596,function_84764, span=474, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=58, retdec=function_84596, split=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=9 */
    /* tier2 effects: split=primary_plus_empty_overlap_stub; ip += 9; retdec_tail=state = ((state0 | 0x6dbd49a4) ^ s16(ip+5)) - 0x4424226a & (state0 | 0x6dbd49a4); paired dword pointer step; ip_reads=+0x3/2,+0x0/2,+0x7/2,+0x5/2; frame_reads=0xa,0x81,0x199,0x10f,0x170; frame_writ... */
    /* decode signature: IPADV+0x5;RIP+0x5/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x5;RIP+0x5/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 | 0x6dbd49a4u & U16(vm->ip + 0x5u) ^ state0 | 0x6dbd49a4u - 0x4424226au;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0x84759 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_061(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=61, native=0x84762, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x847aa:u16_3,0x847d3:byte0,0x847f4:u16_0,0x8485e:u16_9,0x848d9:u16_0,0x8490e:u16_3,0x84993:b2,0x849bf:u16_7,0x84a1e:u16_5 */
    /* static-only queue: rank=38, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_84762, span=843, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=38, retdec=function_84762, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=state = 2*state0 - s16(ip+5) - 0x326db6ec; byte compare/pointer step; ip_reads=+0x3/2,+0x0/2,+0x9/2,+0x2/1,+0x7/2,+0x5/2; frame_reads=0xa,0x194,0x199,0x71,0x10f,0x170; frame_writes=0x23,0x170,0xa */
    /* decode signature: IPADV+0x5;RIP+0x5/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x5;RIP+0x5/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 - U16(vm->ip + 0x5u) - state0 + 0x326db6ecu;
    vm->flags = flags0 ^ 0x91975cdu;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x84a99 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_062(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=62, native=0x84aa3, class=static_validated, events=120, shape=VVVV, delta=+0x4 */
    /* operands: b0=var14(top=0xf9:77.5%);b1=var14(top=0xc9:75.8%);b2=var16(top=0xa3:75.8%);b3=var16(top=0x52:75.8%) */
    /* native IP reads: 0x84b0c:u16_2,0x84cbc:byte0,0x84d33:u16_0,0x84dd7:u16_0 ^ state0 | u16_2 ^ flags0 + 0xd90ded5 ^ 0x5dbb6647 + 0x7ebb48a2 & 0xffff */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 | U16(vm->ip + 0x2u) ^ flags0 + 0xd90ded5u ^ 0x5dbb6647u + U16(vm->ip + 0x0u) ^ state0 | U16(vm->ip + 0x2u) ^ flags0 + 0xd90ded5u ^ 0x5dbb6647u + 0x7ebb48a2u;
    vm->flags = flags0 + 0xd90ded5u - 0x219c02d3u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32(state0 | (mask32(U16(vm->ip + 0x2u) ^ (mask32(flags0 + 0xd90ded5u)))))) ^ 0x5dbb6647u)))) + 0x7ebb48a2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 36=0x4u */
    /* observed top targets: 157@0x98a9a:93,307@0xb8064:13,347@0xc088d:3,200@0xa0a9e:2,253@0xacfb1:2,337@0xbec0e:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/36 */
    return r;
}

static VMOpResult op_entry_063(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=63, native=0x84e1d, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x84e52:u16_0,0x84e56:u16_4,0x84e89:u16_7,0x84ed3:u16_4,0x84ee1:u16_0,0x84f38:b6,0x84f86:u16_9,0x84ff3:u16_2 */
    /* static-only queue: rank=19, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_84e1d, span=584, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=19, retdec=function_84e1d, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=state = ((s16(ip+2) - state0) ^ 0x14083b5a) + state0; byte compare/pointer step; ip_reads=+0x0/2,+0x4/2,+0x7/2,+0x6/1,+0x9/2,+0x2/2; frame_reads=0xa,0x81,0x199,0x10f,0x170,0x194; frame_writes=0x170,0xa */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9;RF+0x194/1:mov */
    vm->state = state0 + U16(vm->ip + 0x2u) - state0 ^ 0x14083b5au;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x8504e */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_065(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=65, native=0x85371, class=static_validated, events=23, shape=VVVV, delta=+0x4 */
    /* operands: b0=var16(top=0x05:17.4%);b1=var14(top=0x57:17.4%);b2=var15(top=0x5d:17.4%);b3=var15(top=0xff:17.4%) */
    /* native IP reads: 0x853a3:u16_2,0x85529:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ state0)) - 0x5db84d25u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 9=0x4u */
    /* observed top targets: 253@0xacfb1:4,18@0x7be9b:4,199@0xa0631:2,43@0x8173d:2,337@0xbec0e:2,347@0xc088d:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/9 */
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

static VMOpResult op_entry_067(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=67, native=0x859fc, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x85a60:u16_4,0x85a75:u16_6,0x85aa1:u16_0,0x85b1c:u16_2,0x85b67:u16_2 + state0 | 0x26d4dee7 | flags0 - flags0 - 0x7138da2d & 0xffff */
    /* static-only queue: rank=9, tier=tier0_single_function_small_static_replay, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_859fc, span=409, action=inline_retdec_function_into_handler_model */
    /* tier0 static model: rank=9, retdec=function_859fc, slot_status=retdec_table_slot, ip_advance=8 */
    /* tier0 effects: dword copy through frame[s16(ip+6)] to frame[s16(ip+4)]; pointer step by frame[s16(ip+0)] sign; state = v11 | v10; ip += 8 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 | 0x26d4dee7u | flags0 - flags0 | U16(vm->ip + 0x2u) + state0 | 0x26d4dee7u | flags0 - flags0 - 0x7138da2du;
    r.slot = (uint32_t)((((int32_t)S16(vm->ip + 0x2u)) - 0x7138da2du + ((state0 | 0x26d4dee7u | flags0) - flags0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier0 static slot recovered from the RetDec single-function model; dynamic source-row validation is still absent. */
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0x85b80 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_068(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=68, native=0x85b89, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x85c6b:u16_3,0x85cdb:byte0,0x85e11:b2,0x85e58:u16_3,0x85e86:u16_3 + (Ptr(kind='frame', off=0)) & 0x400,0x85eb3:u16_0 */
    /* static-only queue: rank=49, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_85b89, span=936, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=49, retdec=function_85b89, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = ((state0 ^ selected_operand) + 0x72639e4e) ^ state0; flag/operand rewrite body precedes tail; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x60,0x0,0x23,0x194,0x71,0x10f,0x170; frame_writes=0x71,0x23,0x60,0x0,0x170,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi;RF+0xa/8:mov */
    vm->state = state0 ^ U16(vm->ip + 0x0u) ^ state0 + 0x72639e4eu;
    vm->flags = flags0 - 0xfc7eb43u - 0x1f2a27c2u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x85f1b */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_069(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=69, native=0x85f24, class=partial, events=2, shape=CCCCCCCCCCCCC, delta=+0xd */
    /* operands: b0=0x00;b1=0x09;b2=0xc9;b3=0x8e;b4=0x9a;b5=0x20;b6=0x65;b7=0xea;b8=0x55;b9=0x36;b10=0x00;b11=0x80;...+1 */
    /* native IP reads: 0x85f38:b0,0x85f65:u32_7,0x85f88:b1,0x85fa0:u32_3,0x85fe0:b1,0x86032:b0,0x86053:b2,0x860ac:u32_7,0x860d7:u16_11,0x8632d:byte0,0x8647f:b2,0x864e9:u16_3,0x86695:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    /* vm->state = state0 ^ flags0 ^ flags0 - flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0 | 0x58fb4a0cu ^ 0x62ac6845u ^ flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0 | 0x58fb4a0cu ^ state0 ^ flags0 ^ flags0 - flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0...; */
    vm->flags = flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0;
    vm->ip += 0xd;
    /* dispatch: next = dispatch_table[slot] */
    /* observed top targets: 310@0xb8556:2 */
    return r;
}

static VMOpResult op_entry_070(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=70, native=0x8610e, class=static_validated, events=1629, shape=VVVCC, delta=+0x5 */
    /* operands: b0=var93(top=0x8b:15.8%);b1=var143(top=0xb7:16.0%);b2=var23(top=0x00:58.9%);b3=0x3d;b4=0x01 */
    /* native IP reads: 0x8632d:byte0,0x8647f:b2,0x864e9:u16_3,0x86695:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    /* vm->state = state0 ^ flags0 ^ flags0 - flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0 | 0x58fb4a0cu ^ 0x62ac6845u ^ flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0 | 0x58fb4a0cu ^ state0 ^ flags0 ^ flags0 - flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0...; */
    vm->flags = flags0 + state0 ^ flags0 ^ flags0 + 0x55fafa0cu - 0x5abc12afu ^ state0 ^ flags0 ^ flags0;
    /* slot variants: 128=(mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 ^ flags0)) ^ flags0)) - (mask32((mask32((mask32((mask32(flags0 + (mask32((mask32((mask32(state0 ^ flags0)) ^ flags0)) + 0x55fafa0cu))...#559049604f0e */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 108@0x8f24b:577,198@0xa037e:236,144@0x95887:215,256@0xad849:181,160@0x994cf:165,352@0xc1ec4:138 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_071(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=71, native=0x86766, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x867a4:u16_4,0x867af:u16_6,0x867d8:u16_0,0x86846:u16_2 */
    /* static-only queue: rank=4, tier=tier0_single_function_small_static_replay, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_86766, span=353, action=inline_retdec_function_into_handler_model */
    /* tier0 static model: rank=4, retdec=function_86766, slot_status=decode_candidate_slot, ip_advance=8 */
    /* tier0 effects: byte copy through frame[s16(ip+4)] to frame[u16(ip+6)]; pointer step by frame[s16(ip+0)] sign; ip += 8 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u));
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier0 static slot recovered from the RetDec single-function model; dynamic source-row validation is still absent. */
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0x868b4 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_072(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=72, native=0x868bd, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x868f2:u16_9,0x8691e:u16_3,0x8696f:u16_7,0x869e8:u16_3,0x86a0d:u16_9,0x86aa0:b2,0x86ade:u16_5,0x86b58:u16_0 */
    /* static-only queue: rank=35, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_868bd, span=819, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=35, retdec=function_868bd, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=state = (state0 & 0x1cdfcc1d) - 0x17395727 - ((state0 & 0x1cdfcc1d) ^ s16(ip+0)); byte compare/pointer step; ip_reads=+0x9/2,+0x3/2,+0x7/2,+0x2/1,+0x5/2,+0x0/2; frame_reads=0xa,0x199,0x81,0x10f,0x170; frame_writes=0x170,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 & 0x1cdfcc1du - U16(vm->ip + 0x0u) ^ state0 & 0x1cdfcc1du + 0x17395727u;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x86bdb */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_073(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=73, native=0x86be4, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x86c11:u16_4,0x86c2c:u16_6,0x86c4d:u16_0,0x86cd8:u16_2,0x86d04:u16_2 - state0 - 0x3f7f9f2 */
    /* static-only queue: rank=5, tier=tier0_single_function_small_static_replay, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_86be4, span=364, action=inline_retdec_function_into_handler_model */
    /* tier0 static model: rank=5, retdec=function_86be4, slot_status=final_state_candidate_slot, ip_advance=8 */
    /* tier0 effects: state pre-subtract; word copy through frame[s16(ip+4)] to frame[s16(ip+6)]; pointer step by frame[s16(ip+0)] sign; state = s16(ip+2); ip += 8 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 - 0x3f7f9f2u + U16(vm->ip + 0x2u) - state0 - 0x3f7f9f2u;
    r.slot = (uint32_t)(((int32_t)S16(vm->ip + 0x2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier0 static slot recovered from the RetDec single-function model; dynamic source-row validation is still absent. */
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0x86d39 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_074(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=74, native=0x86d43, class=static_validated, events=33, shape=VVCCV, delta=+0x5 */
    /* operands: b0=var13(top=0x4c:15.2%);b1=var13(top=0x2c:15.2%);b2=0x3d;b3=0x01;b4=var12(top=0x7f:18.2%) */
    /* native IP reads: 0x86e25:byte0,0x870ae:byte0,0x871ab:b4,0x87231:u16_2,0x87362:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 - flags0 & state0 - 0x7af5a4e2u - 0x619b65dcu ^ 0x65dcaffcu + 0x33d7fc12u;
    vm->flags = flags0 & state0 - 0x7af5a4e2u - 0x619b65dcu - state0 - flags0 & state0 - 0x7af5a4e2u - 0x619b65dcu ^ 0x65dcaffcu ^ 0x6adfe823u ^ 0x1a77c224u + 0x403a8d37u & 0x7bf9a401u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32(state0 - (mask32((mask32(flags0 & (mask32(state0 - 0x7af5a4e2u)))) - 0x619b65dcu)))) ^ 0x65dcaffcu)) + 0x33d7fc12u)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 25=0x5u */
    /* observed top targets: 108@0x8f24b:9,160@0x994cf:9,352@0xc1ec4:5,198@0xa037e:4,173@0x9ba74:4,144@0x95887:2 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/25 */
    return r;
}

static VMOpResult op_entry_075(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=75, native=0x873fc, class=sampled_only, events=276, shape=sampled, delta=-0x6d */
    /* native IP reads: 0x8747f:u16_8,0x874c7:b10,0x87b03:u16_0,0x87b98:u32_4,0x87ba1:u32_4 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add;JMP:r14 */
    vm->state = state0;
    r.slot = U32(vm->ip + 0x0);
    r.next_entry = vm_entry_from_slot_index(r.slot);
    vm->ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* long-control operands: target_u32@+0, signed delta_u32@+4 */
    /* dispatch: 255=next = dispatch_table[171], ip -= 0x6du | 9=next = dispatch_table[165], ip += 0x60u */
    /* observed top targets: 171@0x9b4b3:256,165@0x9a24c:16,354@0xc2241:4 */
    /* validation: long_branch=276/12, long_branch_len=276=0xb */
    return r;
}

static VMOpResult op_entry_076(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=76, native=0x87d17, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x87dca:byte0,0x87dd9:byte0,0x87e40:u32_2,0x87f51:byte0,0x88045:u16_0 */
    /* static-only queue: rank=110, tier=tier5_large_static_replay, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_87d17, span=1059, action=defer_until_small_static_handlers_are_inlined */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 - 0x795b9aa4u + U32(vm->ip + 0x2u) + state0 - 0x795b9aa4u ^ flags0 ^ state0 | 0x574ce9b7u & 0x3247cd40u ^ flags0 ^ state0 | 0x574ce9b7u & 0x3247cd40u ^ 0x6e4cfe36u & U16(vm->ip + 0x0u) + state0 - 0x795b9aa4u + U32(vm->ip + 0x2u) + state0 - 0x795b9aa4u ^ flags0 ^ state0 | 0x574ce9b7u & 0x3247cd40u ^ flags0 ^ state0 | 0x574ce9b7u & 0x3247cd40u ^ 0x6e4cfe36u ^ 0x5381a641u;
    vm->flags = flags0 ^ state0;
    vm->ip += 0x6;
    /* IP advance recovered from native tail site: tail_ip_add@0x88128 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_077(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=77, native=0x88131, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x882a9:b2,0x882f3:u16_3,0x88343:u16_0 */
    /* static-only queue: rank=24, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_88131, span=668, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=24, retdec=function_88131, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = state0 + s16(ip+0); flag/operand rewrite body precedes tail; ip_reads=+0x2/1,+0x3/2,+0x0/2; frame_reads=0xa,0x0,0x71,0x10f; frame_writes=0x71,0x0,0x23,0x170,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx;RF+0xa/8:mov */
    vm->state = state0 + U16(vm->ip + 0x0u);
    vm->flags = flags0 + 0x27793f0eu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x883b7 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_078(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=78, native=0x883c0, class=affine_dispatch_fallback, events=1, shape=CCCCCCCCCCCCC, delta=+0xd */
    /* operands: b0=0xd5;b1=0xa3;b2=0xe8;b3=0xf5;b4=0xb1;b5=0x34;b6=0x21;b7=0xdf;b8=0xd2;b9=0x33;b10=0x00;b11=0x80;...+1 */
    /* native IP reads: 0x883d4:b0,0x88404:u32_7,0x88428:b1,0x88440:u32_3,0x88480:b1,0x884d2:b0,0x884f3:b2,0x8854d:u32_7,0x88579:u16_11,0x886f1:byte0,0x887e6:b4,0x88863:u16_2,0x889ac:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10;RF+0xa/8:mov */
    vm->state = state0 - flags0 ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | flags0 ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ flags0 ^ 0xc7e744fu + 0x60a9dba6u | U16(vm->ip + 0x0u) ^ state0 - flags0 ^ 0xc7e744fu ^ 0x623ccce4u & 0xd4da920u | flags0 ^ 0xc7e744fu ^ 0x225dfa31u - 0x6110d031u ^ 0x3fcb6e9au ^ flags0 ^ 0xc7e744fu + 0x60a9dba6u;
    vm->flags = flags0 ^ 0xc7e744fu;
    /* slot variants: 1=(mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x623ccce4u)))) & 0xd4da920u)) | (mask32((mask32(flags0 ^ 0xc7e744fu)) ^ 0x225dfa31u)))...#ef7ba4952b24 */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 1=0x5u */
    /* observed top targets: 310@0xb8556:1 */
    /* validation: state_static=0.0%, dispatch_static=0.0%, dispatch_model=affine_single_fallback:100.0%, transfer_expr=0.0%/1 */
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

static VMOpResult op_entry_080(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=80, native=0x88a58, class=target_only, events=0, shape=-, delta=- */
    /* native IP reads: 0x88a6c:b0,0x88a9c:u32_7,0x88ac0:b1,0x88ad7:u32_3,0x88b17:b1,0x88b67:b0,0x88b88:b2,0x88bdf:u32_7,0x88c0a:u16_11,0x88dc4:byte0,0x88e90:byte0,0x89016:b4,0x89079:u16_2,0x8913c:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 ^ flags0 ^ 0x5d998d49u & 0x4500f854u ^ flags0 ^ 0x15fca088u ^ 0x49ede177u & 0x6a005710u - U16(vm->ip + 0x0u) + state0 ^ flags0 ^ 0x5d998d49u & 0x4500f854u ^ flags0 ^ 0x15fca088u ^ 0x49ede177u & 0x6a005710u ^ 0x5263a45bu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x89204 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_081(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=81, native=0x88c3f, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x88dc4:byte0,0x88e90:byte0,0x89016:b4,0x89079:u16_2,0x8913c:u16_0 */
    /* static-only queue: rank=109, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch06.c, funcs=function_88c3f,function_89216, span=1500, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=109, retdec=function_88c3f, share=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return is frame/result pointer after operand/state rewrite; ip_reads=+0x4/1,+0x2/2,+0x0/2; frame_reads=0x23,0xa,0x0,0x60,0x194,0x81,0x71,0x10f,0x170; frame_writes=0x170,0x71,0x0,0x60,0xa; functions... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 ^ flags0 ^ 0x5d998d49u & 0x4500f854u ^ flags0 ^ 0x15fca088u ^ 0x49ede177u & 0x6a005710u - U16(vm->ip + 0x0u) + state0 ^ flags0 ^ 0x5d998d49u & 0x4500f854u ^ flags0 ^ 0x15fca088u ^ 0x49ede177u & 0x6a005710u ^ 0x5263a45bu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x89204 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_082(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=82, native=0x8920e, class=static_validated, events=142, shape=VVC, delta=+0x3 */
    /* operands: b0=var11(top=0x3e:45.1%);b1=var9(top=0xb1:45.1%);b2=0x62 */
    /* native IP reads: 0x89318:b2,0x893c4:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 + flags0 + 0x1bc90d20u | 0x2d688b3eu - U16(vm->ip + 0x0u) + state0 + flags0 + 0x1bc90d20u | 0x2d688b3eu + 0x5cc5e4d8u;
    vm->flags = flags0 + 0x1bc90d20u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 + flags0)))) + 0x5cc5e4d8u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x3u */
    /* observed top targets: 99@0x8c99a:67,333@0xbd8af:65,217@0xa4b11:4,307@0xb8064:2,168@0x9aa83:2,157@0x98a9a:1 */
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

static VMOpResult op_entry_084(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=84, native=0x8983b, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8991e:u16_3,0x8994f:byte0,0x89a03:b2,0x89a30:u16_3,0x89ab7:u16_0 */
    /* static-only queue: rank=31, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_8983b, span=777, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=31, retdec=function_8983b, slot_status=masked_return_slot_requires_g3, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = state0 + (state0 + s16(ip+0)); return is masked by g3; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x170,0x194,0x23,0x71,0x10f; frame_writes=0x170,0x71,0x0,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 | 0x206f2f12u + flags0 + U16(vm->ip + 0x0u) + state0 | 0x206f2f12u + flags0;
    /* tier1 slot expression kept comment-only: (state0 + s16(ip+0)) & g3_mask */
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x89b2e */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_085(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=85, native=0x89b37, class=affine_dispatch_fallback, events=1, shape=CCCCCCCCCCCCC, delta=+0xd */
    /* operands: b0=0x1e;b1=0x1e;b2=0x02;b3=0x00;b4=0x80;b5=0x00;b6=0x3d;b7=0x01;b8=0x22;b9=0xe8;b10=0x01;b11=0x00;...+1 */
    /* native IP reads: 0x89b86:u16_6,0x89bcb:b8,0x8a206:u32_0,0x8a231:u16_4,0x8a27e:u16_9,0x8a2e5:u16_11 */
    /* decode signature: IPADV+0xb;RIP+0xb/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0xb;RIP+0xb/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi;RF+0x194/1:mov */
    vm->state = state0;
    r.slot = (uint32_t)(U16(vm->ip + 0xbu) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xd;
    /* dispatch: next = dispatch_table[slot]; ip += 1=0xdu */
    /* observed top targets: 64@0x85059:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=affine_single_fallback:100.0%, transfer_expr=100.0%/1 */
    return r;
}

static VMOpResult op_entry_086(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=86, native=0x8a37f, class=static_validated, events=5, shape=EECC, delta=+0x4 */
    /* operands: b0=enum2(0x36:4,0xa9:1);b1=enum2(0x01:4,0x00:1);b2=0x00;b3=0x00 */
    /* native IP reads: 0x8a389:byte0,0x8a422:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 4=0x4u */
    /* observed top targets: 310@0xb8556:4,169@0x9af18:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/4 */
    return r;
}

static VMOpResult op_entry_087(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=87, native=0x8a49e, class=static_validated, events=12, shape=CCEEE, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=enum3(0x08:4,0x60:4,0x00:4);b3=enum2(0x08:8,0x03:4);b4=enum3(0x09:4,0x81:4,0x47:4) */
    /* native IP reads: 0x8a6d5:byte0,0x8a80b:b4,0x8a888:u16_0,0x8a929:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x10f/8:mov;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 + 0x42559993u | 0x3c876d75u ^ flags0 - 0x4356d657u + flags0 - 0x4356d657u - flags0 - 0x4356d657u | 0x5371e74eu | U16(vm->ip + 0x2u);
    vm->flags = flags0 - 0x4356d657u;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 12=0x5u */
    /* observed top targets: 257@0xadbfd:4,108@0x8f24b:4,256@0xad849:4 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/12 */
    return r;
}

static VMOpResult op_entry_088(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=88, native=0x8aa14, class=static_validated, events=149, shape=VVVCC, delta=+0x5 */
    /* operands: b0=var11(top=0x41:43.0%);b1=var11(top=0xeb:43.0%);b2=var11(top=0xa6:43.0%);b3=0x3d;b4=0x01 */
    /* native IP reads: 0x8ab1c:byte0,0x8ac4f:byte0,0x8aced:byte0,0x8ae95:byte0,0x8aea1:b0,0x8aecd:u16_3,0x8af41:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 | flags0 - 0x1c9cfceau ^ U16(vm->ip + 0x1u) + state0 | flags0 - 0x1c9cfceau ^ 0x415462f5u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) + (mask32((mask32(state0 | flags0)) - 0x1c9cfceau)))) ^ 0x415462f5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 352@0xc1ec4:65,257@0xadbfd:64,173@0x9ba74:11,256@0xad849:6,108@0x8f24b:3 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_089(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=89, native=0x8b028, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8b063:u16_1,0x8b08e:u16_5,0x8b0cb:u16_3,0x8b176:u16_1,0x8b184:u16_5,0x8b227:b0,0x8b259:u16_7,0x8b2aa:u16_9 */
    /* static-only queue: rank=97, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_8b028,function_8b336,function_8b339, span=793, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=97, retdec=function_8b028, share=primary_plus_empty_overlap_stubs, slot_status=non_dispatch_pointer_return, ip_advance=11 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 11; retdec_tail=return is frame+0x81 plus predicate-selected residue; ip_reads=+0x1/2,+0x5/2,+0x3/2,+0x0/1,+0x7/2,+0x9/2; frame_reads=0xa,0x199,0x81,0x10f,0x170,0x23; frame_writes=0x170,0xa; functions=function_8... */
    /* decode signature: IPADV+0x9;RIP+0x9/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x9;RIP+0x9/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx;RF+0x23/4:mov */
    vm->state = state0 & U16(vm->ip + 0x9u) ^ state0 + 0x7c8d5d40u;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x8b32a */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_090(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=90, native=0x8b334, class=static_validated, events=567, shape=VVVV, delta=+0x4 */
    /* operands: b0=var23(top=0xc7:45.7%);b1=var11(top=0xec:49.6%);b2=var79(top=0xee:45.1%);b3=var80(top=0xaa:45.3%) */
    /* native IP reads: 0x8b3fa:u16_2,0x8b536:byte0,0x8b608:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RF+0x10f/8:mov;RIP+0x0/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12;RF+0x81/8:mov */
    vm->state = state0 + flags0 + flags0 + 0x1c1030c0u + flags0 & 0x4b6fdae0u | 0x4357e3c2u & U16(vm->ip + 0x2u) - state0 + flags0 + flags0 + 0x1c1030c0u + flags0 & 0x4b6fdae0u | 0x4357e3c2u + flags0 & 0x4b6fdae0u | 0x59296ab9u | flags0 & 0x4b6fdae0u | 0x3296b63du ^ 0x6ee390ceu ^ U16(vm->ip + 0x0u) + 0x224914c1u;
    vm->flags = flags0 & 0x4b6fdae0u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) + 0x224914c1u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 49@0x82820:257,260@0xae90b:64,140@0x94e5a:34,220@0xa522e:32,3@0x78c77:25,330@0xbc9b8:18 */
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

static VMOpResult op_entry_092(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=92, native=0x8b8cb, class=static_validated, events=307, shape=VVVV, delta=+0x4 */
    /* operands: b0=var27(top=0xa4:24.1%);b1=var13(top=0x34:22.1%);b2=var66(top=0xc5:20.8%);b3=var66(top=0x6f:20.8%) */
    /* native IP reads: 0x8b95a:u16_2,0x8bc1a:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 & U16(vm->ip + 0x2u) ^ state0 ^ flags0 | 0x39591837u | flags0 | 0x39591837u | 0x1002fee7u + 0x2efa2a96u ^ U16(vm->ip + 0x0u) + state0 & U16(vm->ip + 0x2u) ^ state0 ^ flags0 | 0x39591837u | flags0 | 0x39591837u | 0x1002fee7u + 0x2efa2a96u + 0x604aa997u;
    vm->flags = flags0;
    /* slot variants: 84=(mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32(state0 & (mask32((mask32(U16(vm->ip + 0x2u) ^ state0)) ^ (mask32(flags0 | 0x39591837u)))))) | (mask32(flags0 | 0x39591837u)))) | 0x1002fee7u)) + 0x2efa2a96u)))) + 0...#6dc3d486c873 | 44... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 282@0xb3128:67,49@0x82820:31,17@0x7bae9:29,332@0xbd36d:26,3@0x78c77:26,18@0x7be9b:16 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_093(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=93, native=0x8bcef, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8bd0a:u32_2,0x8bd35:u16_0,0x8bf98:byte0,0x8c087:byte0,0x8c0e8:byte0,0x8c1de:b0,0x8c251:u16_3,0x8c373:u16_1 */
    /* static-only queue: rank=154, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch06.c, funcs=function_8bcef,function_8bd69,function_8c41e, span=1847, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=154, retdec=function_8bcef, callret=native_ret_result_prefix, slot_status=masked_noisy_overlap_return_no_dispatch_slot, ip_advance=6 */
    /* tier4 effects: callret=native_ret_result_prefix; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[187]+operand into destination; overlap return is g3/noise residue; ip_reads=+0x2/4,+0x0/2,+0x0/1,+0x3/2,+0x1/2; frame_reads=0x170,0xa,0x0,0x23,0x194,0x60,0x71,0xbb,... */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 & flags0 ^ state0 + 0x551fa912u & 0x7af574e5u + flags0 ^ state0 + 0x551fa912u | 0x23f8268cu - U16(vm->ip + 0x1u) ^ state0 & flags0 ^ state0 + 0x551fa912u & 0x7af574e5u + flags0 ^ state0 + 0x551fa912u | 0x23f8268cu;
    vm->flags = flags0 ^ state0 + 0x551fa912u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x8c413 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_094(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=94, native=0x8bd69, class=static_validated, events=91, shape=EEECC, delta=+0x5 */
    /* operands: b0=enum8(0x8b:64,0x19:10,0x57:4,0xa1:3,0x01:3,0xd9:3);b1=enum7(0xa6:68,0x3e:10,0x3d:3,0xbe:3,0xc6:3,0xe7:3);b2=enum6(0xeb:67,0xa2:10,0x32:6,0x2b:4,0x6b:3,0x29:1);b3=0x3d;b4=0x01 */
    /* native IP reads: 0x8bf98:byte0,0x8c087:byte0,0x8c0e8:byte0,0x8c1de:b0,0x8c251:u16_3,0x8c373:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 & flags0 ^ state0 + 0x551fa912u & 0x7af574e5u + flags0 ^ state0 + 0x551fa912u | 0x23f8268cu - U16(vm->ip + 0x1u) ^ state0 & flags0 ^ state0 + 0x551fa912u & 0x7af574e5u + flags0 ^ state0 + 0x551fa912u | 0x23f8268cu;
    vm->flags = flags0 ^ state0 + 0x551fa912u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) ^ (mask32((mask32((mask32(state0 & (mask32((mask32(flags0 ^ (mask32(state0 + 0x551fa912u)))) & 0x7af574e5u)))) + (mask32(flags0 ^ (mask32(state0 + 0x551fa912u)))))) | 0x23f8268cu)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 74=0x5u */
    /* observed top targets: 173@0x9ba74:74,144@0x95887:13,160@0x994cf:3,198@0xa037e:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/74 */
    return r;
}

static VMOpResult op_entry_095(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=95, native=0x8c41c, class=affine_dispatch_fallback, events=562, shape=VVECCCVVEC, delta=+0xa */
    /* operands: b0=var14(top=0xa8:16.9%);b1=var15(top=0x7a:16.4%);b2=enum5(0x31:548,0x26:4,0x27:4,0x33:3,0x36:3);b3=0x00;b4=0x80;b5=0x00;b6=var13(top=0x92:32.4%);b7=var10(top=0x33:32.7%);b8=enum5(0x07:278,0x03:182,0x02:92,0x01:9,0x48:1);b9=0x00 */
    /* native IP reads: 0x8c437:u32_6,0x8c463:u16_4,0x8c490:u32_0,0x8c4f0:u16_6,0x8c4fe:u16_2,0x8c523:u16_0,0x8c576:u16_4 */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x4;RF+0x10f/8:mov;RIP+0x4/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 ^ U16(vm->ip + 0x4u) + 0x1f18e1aau;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x4u) + 0x1f18e1aau)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x8;
    /* dispatch: 2=sampled operand footprint 0xau, observed target dispatch_table[86], delta +0x2341bu | 1=sampled operand footprint 0xau, observed target dispatch_table[42], delta +0x1d02eu */
    /* observed top targets: 169@0x9af18:374,310@0xb8556:188 */
    /* validation: state_static=0.0%, dispatch_static=0.0%, dispatch_model=affine_partial_fallback:100.0%, transfer_expr=0.0%/92, sampled_operand=3/2, sampled_operand_len=3=0xa */
    return r;
}

static VMOpResult op_entry_096(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=96, native=0x8c4cf, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8c4f0:u16_6,0x8c4fe:u16_2,0x8c523:u16_0,0x8c576:u16_4 */
    /* static-only queue: rank=3, tier=tier0_single_function_small_static_replay, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_8c4cf, span=246, action=inline_retdec_function_into_handler_model */
    /* tier0 static model: rank=3, retdec=function_8c4cf, slot_status=decode_candidate_slot, ip_advance=8 */
    /* tier0 effects: qword copy through frame[s16(ip+2)] to frame[u16(ip+6)]; pointer step by frame[s16(ip+0)] sign; state = slot_expr ^ state0; ip += 8 */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x4;RF+0x10f/8:mov;RIP+0x4/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 ^ U16(vm->ip + 0x4u) + 0x1f18e1aau;
    r.slot = (uint32_t)((((int32_t)S16(vm->ip + 0x4u)) + 0x1f18e1aau) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier0 static slot recovered from the RetDec single-function model; dynamic source-row validation is still absent. */
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0x8c5b0 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_097(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=97, native=0x8c5b9, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8c6c2:byte0,0x8c78a:byte0,0x8c7cc:b0,0x8c824:u16_1,0x8c878:u16_3 */
    /* static-only queue: rank=36, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_8c5b9, span=829, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=36, retdec=function_8c5b9, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = (s16(ip+3) - state0) & state0; flag/operand rewrite body precedes tail; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x60,0x0,0x194,0x23,0x71,0x10f,0x170; frame_writes=0x170,0x71,0x60,0x0,0xa */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 | flags0 & U16(vm->ip + 0x3u) - state0 | flags0;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x8c8e1 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_098(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=98, native=0x8c8ec, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8c907:u16_6,0x8c92f:u16_4,0x8c95b:u32_0,0x8cb3b:b0,0x8cb8e:u16_3,0x8cbf5:u16_1,0x8cc0b:u16_1 ^ state0 - 0x48503105 */
    /* static-only queue: rank=135, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_8c8ec,function_8c99a,function_8cc86, span=930, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=135, retdec=function_8c8ec, callret=native_ret_stack_prefix, slot_status=overlap_dispatch_deref_comment_only, ip_advance=8 */
    /* tier4 effects: callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced qword plus frame[187]+operand; child dereferences dispatch_base+slot but slot algebra is not isolated; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x0/1,+0x3/2,+0x1/2; fra... */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x1;RF+0x10f/8:mov;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 & U16(vm->ip + 0x1u) ^ state0 - 0x48503105u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x8cc78 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_099(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=99, native=0x8c99a, class=static_validated, events=695, shape=CVVCC, delta=+0x5 */
    /* operands: b0=0x00;b1=var24(top=0x09:36.8%);b2=var20(top=0x7a:36.8%);b3=0x3d;b4=0x01 */
    /* native IP reads: 0x8cb3b:b0,0x8cb8e:u16_3,0x8cbf5:u16_1,0x8cc0b:u16_1 ^ state0 - 0x48503105 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x1;RF+0x10f/8:mov;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 & U16(vm->ip + 0x1u) ^ state0 - 0x48503105u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) ^ state0)) - 0x48503105u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 198@0xa037e:387,108@0x8f24b:153,173@0x9ba74:132,160@0x994cf:8,256@0xad849:7,144@0x95887:5 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_100(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=100, native=0x8cc81, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8ccc1:u16_0,0x8cccf:u16_2,0x8ccfc:u16_6,0x8cd41:u16_2,0x8cd52:u16_0,0x8cd8d:b8,0x8cddb:u16_4,0x8ce44:u16_9 */
    /* static-only queue: rank=17, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_8cc81, span=572, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=17, retdec=function_8cc81, slot_status=retdec_dispatch_table_slot, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=state = slot_source ^ state0; word compare/pointer step; ip_reads=+0x0/2,+0x2/2,+0x6/2,+0x8/1,+0x4/2,+0x9/2; frame_reads=0xa,0x170,0x0,0x199,0x10f; frame_writes=0x170,0xa */
    /* decode signature: IPADV+0x9;RIP+0x9/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x9;RIP+0x9/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 ^ U16(vm->ip + 0x9u) + state0 - 0x4b931360u;
    r.slot = (uint32_t)((((int32_t)S16(vm->ip + 0x9u)) - 0x4b931360u + state0) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier1 static slot recovered from a clean RetDec dispatch-table tail; dynamic source-row validation is still absent. */
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x8ceab */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_101(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=101, native=0x8ceb4, class=affine_dispatch_fallback, events=1, shape=CCCCCCCCCCCCC, delta=+0xd */
    /* operands: b0=0x1e;b1=0x1e;b2=0x02;b3=0x00;b4=0x80;b5=0x00;b6=0x3d;b7=0x01;b8=0x22;b9=0xe8;b10=0x01;b11=0x54;...+1 */
    /* native IP reads: 0x8cf17:u16_6,0x8cf55:b8,0x8d59d:u32_0,0x8d5c8:u16_4,0x8d617:u16_9,0x8d67c:u16_11 */
    /* decode signature: IPADV+0xb;RIP+0xb/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0xb;RF+0x10f/8:mov;RIP+0xb/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx */
    vm->state = state0 & U16(vm->ip + 0xbu) ^ state0 ^ 0x44422ebbu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0xbu) ^ state0)) ^ 0x44422ebbu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xd;
    /* dispatch: next = dispatch_table[slot]; ip += 1=0xdu */
    /* observed top targets: 199@0xa0631:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=affine_single_fallback:100.0%, transfer_expr=100.0%/1 */
    return r;
}

static VMOpResult op_entry_102(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=102, native=0x8d71d, class=affine_dispatch_fallback, events=64, shape=CCCCCCCCCCCCC, delta=+0xd */
    /* operands: b0=0x47;b1=0x4e;b2=0x04;b3=0x00;b4=0x80;b5=0x00;b6=0x3d;b7=0x01;b8=0x89;b9=0xe8;b10=0x01;b11=0xb9;...+1 */
    /* native IP reads: 0x8d773:u16_6,0x8d7d5:b8,0x8de25:u32_0,0x8de4f:u16_4,0x8de9c:u16_9,0x8df0c:u16_11,0x8df4d:u16_11 + state0 + 0x7b88d4e3 */
    /* decode signature: IPADV+0xb;RIP+0xb/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0xb;RIP+0xb/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0xbu) + state0)) + 0x7b88d4e3u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xd;
    /* dispatch: next = dispatch_table[slot]; ip += 64=0xdu */
    /* observed top targets: 268@0xb0007:64 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=affine_robust_fallback:100.0%, transfer_expr=100.0%/64 */
    return r;
}

static VMOpResult op_entry_103(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=103, native=0x8df9c, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8e06f:u16_3,0x8e0ee:byte0,0x8e1de:b2,0x8e225:u16_3,0x8e27b:u16_0 */
    /* static-only queue: rank=85, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_8df9c,function_8e2f7, span=863, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=85, retdec=function_8df9c, share=primary_plus_empty_overlap_stub, slot_status=non_dispatch_predicate_return, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return is low predicate bits; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x81,0x194,0x71,0x10f,0x170; frame_writes=0x71,0x0,0x60,0x170,0xa; functions=function_8df9c,function_8e2f7; ran... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RF+0x10f/8:mov;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx */
    vm->state = state0 & U16(vm->ip + 0x0u) - state0 ^ 0x2bde36beu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x8e2e6 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_104(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=104, native=0x8e2ef, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8e432:byte0,0x8e4e8:b0,0x8e544:u16_1,0x8e62b:u16_3 */
    /* static-only queue: rank=95, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_8e2ef,function_8e6b6, span=975, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=95, retdec=function_8e2ef, share=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return is frame/result pointer on both RetDec branches; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0x23,0xa,0x60,0x0,0x194,0x71,0x10f,0x170; frame_writes=0x23,0x71,0x60,0x0,0xa; functions=function_... */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0;
    vm->flags = flags0 - 0xd879340u + 0x5c931804u ^ 0x543eebceu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x8e6ab */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_105(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=105, native=0x8e6b4, class=static_validated, events=671, shape=VVVVE, delta=+0x5 */
    /* operands: b0=var58(top=0x28:38.2%);b1=var76(top=0xa6:38.2%);b2=var22(top=0xf0:39.0%);b3=var11(top=0x0a:41.4%);b4=enum4(0x62:366,0x32:151,0x50:84,0x3a:70) */
    /* native IP reads: 0x8e7fb:u16_0,0x8e91e:b4,0x8ea1c:byte0,0x8eaaf:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu & U16(vm->ip + 0x0u) + state0 & flags0 ^ 0x6808cf40u - 0x72c2e29bu + flags0 ^ 0x6808cf40u - 0x72c2e29bu - U16(vm->ip + 0x2u);
    vm->flags = flags0 ^ 0x6808cf40u - 0x72c2e29bu ^ 0x35dcbb88u;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 350@0xc1926:256,28@0x7e390:129,291@0xb4edd:72,140@0x94e5a:33,92@0x8b8cb:32,349@0xc140b:13 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_106(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=106, native=0x8eb79, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8ecc3:byte0,0x8edbb:b0,0x8ee09:u16_1,0x8ee74:u16_3 */
    /* static-only queue: rank=45, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_8eb79, span=904, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=45, retdec=function_8eb79, slot_status=masked_dispatch_table_slot_requires_g3, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = state0 - s16(ip+3); return adds dispatch base to g3-masked operand; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x0,0x60,0x194,0x71,0x10f; frame_writes=0x71,0x0,0x60,0x23,0x170,0xa */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0 - U16(vm->ip + 0x3u);
    vm->flags = flags0 & 0x3ed7367cu;
    /* tier1 slot expression kept comment-only: s16(ip+3) & g3_mask */
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x8eeea */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_107(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=107, native=0x8eef4, class=static_validated, events=256, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x9e;b1=0xd4;b2=0xa9;b3=0x3d;b4=0x01 */
    /* native IP reads: 0x8efcf:u16_3,0x8f003:byte0,0x8f13f:b2,0x8f188:u16_3,0x8f1cb:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0 - U16(vm->ip + 0x0u) ^ state0;
    vm->flags = flags0 & 0x2f7d4e8du;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 160@0x994cf:256 */
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

static VMOpResult op_entry_109(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=109, native=0x8f6d1, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8f6de:byte0,0x8f700:u16_2,0x8f70b:u16_6,0x8f734:u16_4,0x8f7cc:u16_0 */
    /* static-only queue: rank=71, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_8f6d1,function_8f838,function_8f840, span=365, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=71, retdec=function_8f6d1, share=primary_plus_tiny_overlap_stubs, slot_status=constant_return_no_dispatch_slot, ip_advance=8 */
    /* tier3 effects: share=primary_plus_tiny_overlap_stubs; ip += 8; retdec_tail=return 1 after state update and pointer write; ip_reads=+0x2/2,+0x6/2,+0x4/2,+0x0/2; frame_reads=0xa,0x194,0x10f,0x170; frame_writes=0x170,0xa; functions=function_8f6d1,function_8f838,function_8f84... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 ^ U16(vm->ip + 0x0u) - state0 ^ 0x33e5dfdu;
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0x8f829 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_110(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=110, native=0x8f834, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8f84f:u32_2,0x8f879:u16_0,0x8f9a8:b0,0x8f9db:u16_1,0x8fa6f:u16_3 */
    /* static-only queue: rank=126, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_8f834,function_8f8ae,function_8faf1, span=709, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=126, retdec=function_8f834, callret=native_ret_prefix_over_clean_child_slot, slot_status=overlap_dispatch_table_slot_comment_only, ip_advance=6 */
    /* tier4 effects: callret=native_ret_prefix_over_clean_child_slot; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[dst] = frame[187] + operand; child tier2 slot is clean only after separate entry composition; ip_reads=+0x2/4,+0x0/2,+0x0/1,+0x1/2,+0x3/2; frame_read... */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 & 0xc8a0d06u ^ U16(vm->ip + 0x3u) ^ state0 & 0xc8a0d06u - 0x29ce8b8au;
    /* tier4 slot expression kept comment-only: ((state0 ^ s16(ip+3)) - 0x29ce8b8a) & 0xffff */
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x8fae2 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_111(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=111, native=0x8f8ae, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x8f9a8:b0,0x8f9db:u16_1,0x8fa6f:u16_3 */
    /* static-only queue: rank=63, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_8f8ae,function_8faf1, span=587, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=63, retdec=function_8f8ae, split=primary_plus_empty_overlap_stub, slot_status=retdec_dispatch_table_slot, ip_advance=5 */
    /* tier2 effects: split=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=state = slot_source ^ state0; operand rewrite body precedes dispatch-table return; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0x0,0xa,0x170,0x71,0x10f; frame_writes=0x170,0x71,0x0,0xa; functions=fu... */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 & 0xc8a0d06u ^ U16(vm->ip + 0x3u) ^ state0 & 0xc8a0d06u - 0x29ce8b8au;
    r.slot = (uint32_t)(((state0 ^ ((int32_t)S16(vm->ip + 0x3u))) - 0x29ce8b8au) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier2 static slot recovered from a split RetDec primary tail; dynamic source-row validation is still absent. */
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x8fae2 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_112(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=112, native=0x8faec, class=partial, events=2, shape=ECCEE, delta=+0x5 */
    /* operands: b0=enum2(0x00:1,0x13:1);b1=0x3d;b2=0x01;b3=enum2(0xf9:1,0xa9:1);b4=enum2(0xd3:1,0xf4:1) */
    /* native IP reads: 0x8faf9:byte0,0x8fb2d:byte0,0x8fbd9:byte0,0x8fe31:byte0,0x8ff63:b0,0x8ffdb:u16_1,0x9019b:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    /* vm->state = state0 & flags0 ^ 0x40561547u - flags0 & 0x1340e310u + 0x2d8111d9u | flags0 & state0 & flags0 ^ 0x40561547u - flags0 & 0x1340e310u + 0x2d8111d9u & 0x25637e96u | 0x488765f3u + state0 & flags0 ^ 0x40561547u - flags0 & 0x1340e310u + 0x2d8111d9u + 0x2aab3c50u ^ state0 & flags0 ^ 0x40561547u - flags0 & 0x1340e310u + 0x2d8111d9u + 0x7d6325au & 0x26dc7059u ^ U16...; */
    vm->flags = flags0 & state0 & flags0 ^ 0x40561547u - flags0 & 0x1340e310u + 0x2d8111d9u & 0x25637e96u;
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot] */
    /* observed top targets: 160@0x994cf:1,108@0x8f24b:1 */
    return r;
}

static VMOpResult op_entry_113(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=113, native=0x9026f, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x9028a:u16_6,0x902af:u16_4,0x902da:u32_0,0x903ca:byte0,0x905bc:u16_2,0x90746:byte0,0x907d0:u16_0 */
    /* static-only queue: rank=147, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch06.c, funcs=function_9026f,function_90319, span=1587, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=147, retdec=function_9026f, callret=native_ret_stack_prefix, slot_status=state_effect_only_no_dispatch_return, ip_advance=8 */
    /* tier4 effects: callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary builds stack/value cell; overlap child returns constant predicate; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x2/2,+0x0/2; frame_reads=0x23,0x170,0xa,0x81,0x0,0x194,0xbb,0x71,0x10f; frame_w... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    /* vm->state = state0 ^ flags0 & state0 | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + state0 & 0x48367f78u ^ 0x63bb548fu + flags0 & state0 | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + state0 & 0x292b555du ^ U16(vm->ip + 0x2u) + state0 ^ flags0 & state0 | 0x6729b5bfu - 0x3dca653fu ^ 0x671da5f4u + state0 & 0x48367f78u ^ 0x63bb548fu + flags0 & state0 | 0x6729b5bfu - 0x3dca653...; */
    vm->flags = flags0 & state0;
    vm->ip += 0x4;
    /* IP advance recovered from native tail site: tail_ip_add@0x9088c */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_115(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=115, native=0x90895, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x908d0:u16_2,0x908e0:u16_0,0x90902:u16_4,0x909a7:u16_6 */
    /* static-only queue: rank=72, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_90895,function_90a1d,function_90a20, span=403, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=72, retdec=function_90895, share=primary_plus_empty_overlap_stubs, slot_status=non_dispatch_predicate_return, ip_advance=8 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 8; retdec_tail=return is low predicate bits from operand, not dispatch table; ip_reads=+0x2/2,+0x0/2,+0x4/2,+0x6/2; frame_reads=0xa,0x23,0x170,0x0,0x10f; frame_writes=0x170,0xa; functions=function_90895,function... */
    /* decode signature: IPADV+0x6;RIP+0x6/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x6;RIP+0x6/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12;RF+0xa/8:mov */
    vm->state = state0 & flags0 - flags0 ^ U16(vm->ip + 0x6u) - 0x65879915u;
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0x90a11 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_116(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=116, native=0x90a1b, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x90a2f:u32_0,0x90a82:u32_0,0x90b09:u16_0,0x90b96:u32_4,0x90b99:u32_4 */
    /* static-only queue: rank=119, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_90a1b,function_90acd, span=533, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=119, retdec=function_90a1b, callret=native_ret_frame_cell, slot_status=frame_cell_return_no_dispatch_slot, ip_advance=8 */
    /* tier4 effects: callret=native_ret_frame_cell; calls=0; rets=1; ip += 8; retdec_tail=primary returns frame[112]; overlap child returns pointer-table value; ip_reads=+0x0/4,+0x0/2,+0x4/4; frame_reads=0xa,0x10f; frame_writes=0xa,0x1dc; functions=function_90a1b,function_90acd... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add;JMP:rax */
    vm->state = state0;
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_117(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=117, native=0x90acd, class=sampled_only, events=122, shape=sampled, delta=-0x40 */
    /* native IP reads: 0x90b09:u16_0,0x90b96:u32_4,0x90b99:u32_4 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add;JMP:rax */
    vm->state = state0;
    r.slot = U32(vm->ip + 0x0);
    r.next_entry = vm_entry_from_slot_index(r.slot);
    vm->ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* long-control operands: target_u32@+0, signed delta_u32@+4 */
    /* dispatch: 56=next = dispatch_table[354], ip -= 0x40u | 27=next = dispatch_table[165], ip -= 0x40u */
    /* observed top targets: 354@0xc2241:71,165@0x9a24c:48,171@0x9b4b3:3 */
    /* validation: long_branch=122/14, long_branch_len=122=0x8 */
    return r;
}

static VMOpResult op_entry_118(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=118, native=0x90c23, class=static_validated, events=398, shape=CVV, delta=+0x3 */
    /* operands: b0=0x62;b1=var12(top=0xa6:64.3%);b2=var12(top=0x2b:64.3%) */
    /* native IP reads: 0x90c51:byte0,0x90d10:b0,0x90dc5:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x1;RF+0x10f/8:mov;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 & U16(vm->ip + 0x1u) ^ state0 - 0x52d3aa4u;
    vm->flags = flags0 ^ 0x41355bdbu + 0x392f8e74u + 0x860cb96u & 0x276ac31au - 0x5cecff55u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) ^ state0)) - 0x52d3aa4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x3u */
    /* observed top targets: 332@0xbd36d:256,217@0xa4b11:65,322@0xbb3c9:64,172@0x9b68a:3,114@0x90319:3,208@0xa2361:3 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_119(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=119, native=0x90ebc, class=static_validated, events=922, shape=CCCCVV, delta=+0x6 */
    /* operands: b0=0xe8;b1=0x01;b2=0x3d;b3=0x01;b4=var72(top=0xb9:10.3%);b5=var72(top=0x8f:10.0%) */
    /* native IP reads: 0x90f08:u16_2,0x90f1f:u16_0,0x90fd0:u16_4 */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 | U16(vm->ip + 0x4u) ^ state0 + 0x7e7974a5u;
    vm->flags = flags0 - 0x1d17883du ^ 0x5928e32au;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x4u) ^ state0)) + 0x7e7974a5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x6u */
    /* observed top targets: 28@0x7e390:190,64@0x85059:187,340@0xbf435:107,337@0xbec0e:99,297@0xb64d7:96,18@0x7be9b:96 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_120(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=120, native=0x9106a, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x910cc:u16_4,0x9111c:u16_6,0x9117d:u16_9,0x91209:u16_6,0x91221:u16_4,0x9128a:b8,0x912c6:u16_2,0x9130e:u16_0 */
    /* static-only queue: rank=77, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_9106a,function_9137e, span=796, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=77, retdec=function_9106a, share=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return is frame+state cell after compare/flag side effects; ip_reads=+0x4/2,+0x6/2,+0x9/2,+0x8/1,+0x2/2,+0x0/2; frame_reads=0xa,0x71,0x199,0x10f; frame_writes=0x23,0x170,0xa; functions=function_91... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 ^ U16(vm->ip + 0x0u);
    vm->flags = flags0 & 0x694d2730u;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x9136f */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_122(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=122, native=0x9170d, class=static_validated, events=498, shape=VVCCV, delta=+0x5 */
    /* operands: b0=var38(top=0x63:30.3%);b1=var40(top=0x71:30.1%);b2=0x3d;b3=0x01;b4=var37(top=0xd7:30.1%) */
    /* native IP reads: 0x91836:byte0,0x91925:b4,0x9197b:u16_2,0x919d3:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx;RF+0x81/8:mov */
    vm->state = state0 + flags0 - U16(vm->ip + 0x0u) + state0 + flags0 + 0x1af9be18u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32(state0 + flags0)))) + 0x1af9be18u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 121=0x5u */
    /* observed top targets: 334@0xbdd18:155,316@0xb987b:112,258@0xadf2c:92,210@0xa2da3:59,145@0x95b5c:40,246@0xab427:14 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/121 */
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

static VMOpResult op_entry_125(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=125, native=0x922c4, class=static_validated, events=129, shape=VVVCC, delta=+0x5 */
    /* operands: b0=var25(top=0x2b:70.5%);b1=var25(top=0x60:70.5%);b2=var24(top=0x21:70.5%);b3=0x3d;b4=0x01 */
    /* native IP reads: 0x923c4:byte0,0x924e0:b2,0x92534:u16_3,0x9259e:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 & U16(vm->ip + 0x0u) + state0 - 0x7b275316u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + state0)) - 0x7b275316u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 19=0x5u */
    /* observed top targets: 316@0xb987b:96,334@0xbdd18:9,246@0xab427:6,18@0x7be9b:4,114@0x90319:3,210@0xa2da3:3 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/19 */
    return r;
}

static VMOpResult op_entry_126(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=126, native=0x92615, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x92630:u16_6,0x92658:u16_4,0x92684:u32_0,0x926cd:byte0,0x9274e:u16_3,0x9276c:byte0,0x92857:b2,0x928aa:u16_3,0x92926:u16_0 */
    /* static-only queue: rank=127, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_92615,function_926c3, span=915, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=127, retdec=function_92615, callret=native_ret_stack_prefix, slot_status=state_pointer_return_no_dispatch_slot, ip_advance=8 */
    /* tier4 effects: callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced qword plus frame[187]+operand stack cell; ip_reads=+0x3/2,+0x6/2,+0x4/2,+0x0/4,+0x2/1,+0x0/2; frame_reads=0xa,0x194,0x0,0xbb,0x81,0x71,0x10f,0x170,0x23; frame... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14;RF+0x23/4:mov */
    vm->state = state0 | U16(vm->ip + 0x0u) - state0 + 0xf376a6au;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x92991 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_127(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=127, native=0x926c3, class=static_validated, events=384, shape=EEECC, delta=+0x5 */
    /* operands: b0=enum3(0xdf:256,0x7b:64,0x99:64);b1=enum3(0x22:256,0xc7:64,0xa1:64);b2=enum3(0xc9:256,0x79:64,0x2b:64);b3=0x3d;b4=0x01 */
    /* native IP reads: 0x926cd:byte0,0x9274e:u16_3,0x9276c:byte0,0x92857:b2,0x928aa:u16_3,0x92926:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14;RF+0x23/4:mov */
    vm->state = state0 | U16(vm->ip + 0x0u) - state0 + 0xf376a6au;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - state0)) + 0xf376a6au)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 108@0x8f24b:256,144@0x95887:64,257@0xadbfd:64 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_128(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=128, native=0x9299b, class=static_validated, events=1158, shape=EVVVV, delta=+0x5 */
    /* operands: b0=enum4(0x62:840,0x3a:175,0x50:118,0x32:25);b1=var10(top=0x79:57.3%);b2=var17(top=0x04:24.0%);b3=var77(top=0xb7:22.4%);b4=var50(top=0x94:25.1%) */
    /* native IP reads: 0x92ab3:byte0,0x92b4b:u16_1,0x92cb1:b0,0x92e31:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RF+0x10f/8:mov;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    /* vm->state = state0 & flags0 & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu - U16(vm->ip + 0x1u) + state0 & flags0 & 0x7036ea56u + 0x277b426cu - 0x57b04ce2u - flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u | 0x36a392ffu | 0x38cd3aecu + flags0 ^ 0x46f37ee7u & 0x706a6...; */
    vm->flags = flags0 ^ 0x46f37ee7u & 0x706a6a76u - 0x32c25a60u + 0x63f5af32u - 0x1a4f949cu - 0x7ee52541u;
    /* slot variants: 109=(mask32((mask32(U16(vm->ip + 0x3u) ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 & (mask32(flags0 & 0x7036ea56u)))) + 0x277b426cu)) - 0x57b04ce2u)) - (mask32(flags0 | 0x36a392ffu)))) | 0x38cd3au...#ecd27d758938 | 19=(mask32((m... */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 268@0xb0007:282,215@0xa4609:268,64@0x85059:262,3@0x78c77:71,196@0x9fbcd:45,347@0xc088d:32 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_129(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=129, native=0x92f21, class=static_validated, events=139, shape=VVE, delta=+0x3 */
    /* operands: b0=var10(top=0xf0:46.0%);b1=var10(top=0x06:46.0%);b2=enum2(0x62:137,0x32:2) */
    /* native IP reads: 0x92f53:b2,0x93118:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 & flags0 | 0x77ecded8u + 0x14f8aa88u + 0x5f119f37u + flags0 + state0 & flags0 | 0x77ecded8u + 0x14f8aa88u + 0x5f119f37u - 0x42c8b2fau - 0x3f4e9109u + 0x5d5f2ae2u & 0x63b683du & U16(vm->ip + 0x0u) - state0 & flags0 | 0x77ecded8u + 0x14f8aa88u + 0x5f119f37u + flags0 + state0 & flags0 | 0x77ecded8u + 0x14f8aa88u + 0x5f119f37u - 0x42c8b2fau - 0x3f4e9109u + 0x5d5f2ae2u & 0x63b683du;
    vm->flags = flags0 + state0 & flags0;
    /* slot variants: 128=(mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32(state0 & (mask32(flags0 | 0x77ecded8u)))) + 0x14f8aa88u)) + 0x5f119f37u)) + (mask32(flags0 + (mask32((mask32((mask32((mask32(state0 & (mask32(flags0 |...#9cf512e1edb8 */
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x3u */
    /* observed top targets: 215@0xa4609:64,99@0x8c99a:64,66@0x855ff:3,199@0xa0631:2,217@0xa4b11:2,172@0x9b68a:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_130(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=130, native=0x931d3, class=static_validated, events=5, shape=EECCE, delta=+0x5 */
    /* operands: b0=enum2(0x78:4,0xa1:1);b1=enum2(0xf5:4,0xc3:1);b2=0x3d;b3=0x01;b4=enum2(0x00:4,0x4b:1) */
    /* native IP reads: 0x93502:byte0,0x93607:b4,0x93632:u16_2,0x9371f:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 | flags0 - state0 + 0x42718c2au + flags0 - state0 + 0x42718c2au + 0x3941798u - 0x1b3f106eu & 0x3a044344u | U16(vm->ip + 0x0u) + state0 | flags0 - state0 + 0x42718c2au + flags0 - state0 + 0x42718c2au + 0x3941798u - 0x1b3f106eu & 0x3a044344u - 0x5121ff33u;
    vm->flags = flags0 - state0 + 0x42718c2au + 0x3941798u - 0x1b3f106eu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32(state0 | (mask32(flags0 - (mask32(state0 + 0x42718c2au)))))) + (mask32((mask32(flags0 - (mask32(state0 + 0x42718c2au)))) & 0x3a044344u)))))) - 0x5121ff33u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 4=0x5u */
    /* observed top targets: 144@0x95887:4,198@0xa037e:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/4 */
    return r;
}

static VMOpResult op_entry_131(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=131, native=0x937d0, class=static_validated, events=66, shape=VVVCC, delta=+0x5 */
    /* operands: b0=var17(top=0xc5:15.2%);b1=var16(top=0x97:21.2%);b2=var18(top=0x58:15.2%);b3=0x3d;b4=0x01 */
    /* native IP reads: 0x93a38:byte0,0x93c9f:b0,0x93d5e:u16_3,0x93eb1:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    /* vm->state = state0 | 0x8fb57c3u - 0x45a18ca4u | flags0 + 0x75229706u - 0x1ec4fc3du - state0 | 0x8fb57c3u + 0x4674713du ^ 0x4382f497u - 0x95703a1u ^ 0xea909d9u - flags0 + 0x75229706u - 0x1ec4fc3du - state0 | 0x8fb57c3u + 0x4674713du ^ 0x4382f497u - 0x95703a1u ^ 0xea909d9u ^ 0x7099ef27u - 0x248dd823u - flags0 + 0x75229706u - 0x1ec4fc3du - state0 | 0x8fb57c3u + 0x467471...; */
    vm->flags = flags0 + 0x75229706u - 0x1ec4fc3du - state0;
    /* slot variants: 10=(mask32((mask32(U16(vm->ip + 0x1u) + (mask32((mask32((mask32((mask32((mask32(state0 | 0x8fb57c3u)) - 0x45a18ca4u)) | (mask32((mask32((mask32((mask32(flags0 - (mask32((mask32(state0 | 0x8fb57c3u)) + 0x4674713du)))) ^ 0x43u...#ccaf3278b018 | 4=(mask32((mas... */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 14=0x5u */
    /* observed top targets: 144@0x95887:31,173@0x9ba74:15,108@0x8f24b:10,160@0x994cf:4,352@0xc1ec4:2,198@0xa037e:2 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/14 */
    return r;
}

static VMOpResult op_entry_132(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=132, native=0x93f79, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x93f94:u32_2,0x93fbd:u16_0,0x9400e:u16_0,0x94036:u16_2,0x94127:u32_0,0x9415b:byte0,0x941c4:u32_0 + flags0 + 0x1c953985,0x943d2:u16_4,0x94454:u32_0 + flags0 + 0x1c953985 ^ 0xda3b7d9 & (Ptr(kind='frame', off=35)) + -0x80000000 ^ (Ptr(kind='frame', off=10)) -... */
    /* static-only queue: rank=151, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_93f79,function_93ff3,function_9406d,function_9447d,function_94483, span=1288, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=151, retdec=function_93f79, callret=native_double_ret_shared_prefix, slot_status=multi_ret_side_effect_no_dispatch_slot, ip_advance=6 */
    /* tier4 effects: callret=native_double_ret_shared_prefix; calls=0; rets=2; ip += 6; retdec_tail=prefix plus noisy child return; native queue records two ret side-effect sites; ip_reads=+0x0/2,+0x2/4,+0x2/2,+0x0/4,+0x4/2; frame_reads=0xa,0x23,0x170,0x81,0xbb,0x194,0x0,0x10f;... */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 + U32(vm->ip + 0x0u) + flags0 + 0x1c953985u & flags0 + 0x1c953985u - 0x29fcf13eu + 0x1f834ebcu + flags0 + 0x1c953985u - 0x29fcf13eu ^ 0x60b79571u;
    vm->flags = flags0 + 0x1c953985u - 0x29fcf13eu;
    vm->ip += 0x6;
    /* IP advance recovered from native tail site: tail_ip_add@0x9446e */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_133(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=133, native=0x93ff3, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x9400e:u16_0,0x94036:u16_2,0x94127:u32_0,0x9415b:byte0,0x941c4:u32_0 + flags0 + 0x1c953985,0x943d2:u16_4,0x94454:u32_0 + flags0 + 0x1c953985 ^ 0xda3b7d9 & (Ptr(kind='frame', off=35)) + -0x80000000 ^ (Ptr(kind='frame', off=10)) - (Ptr(kind='ip', off=4)) + -... */
    /* static-only queue: rank=146, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_93ff3,function_9406d,function_9447d,function_94483, span=1166, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=146, retdec=function_93ff3, callret=native_ret_prefix_over_noisy_child, slot_status=noisy_dispatch_base_candidate_comment_only, ip_advance=6 */
    /* tier4 effects: callret=native_ret_prefix_over_noisy_child; calls=0; rets=1; ip += 6; retdec_tail=primary loads through a pointer and stores result; overlap tier3 body has noisy dispatch-base candidate; ip_reads=+0x0/2,+0x2/2,+0x0/4,+0x4/2; frame_reads=0xa,0x23,0x170,0x81,... */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 + U32(vm->ip + 0x0u) + flags0 + 0x1c953985u & flags0 + 0x1c953985u - 0x29fcf13eu + 0x1f834ebcu + flags0 + 0x1c953985u - 0x29fcf13eu ^ 0x60b79571u;
    vm->flags = flags0 + 0x1c953985u - 0x29fcf13eu;
    vm->ip += 0x6;
    /* IP advance recovered from native tail site: tail_ip_add@0x9446e */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_134(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=134, native=0x9406d, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x94127:u32_0,0x9415b:byte0,0x941c4:u32_0 + flags0 + 0x1c953985,0x943d2:u16_4,0x94454:u32_0 + flags0 + 0x1c953985 ^ 0xda3b7d9 & (Ptr(kind='frame', off=35)) + -0x80000000 ^ (Ptr(kind='frame', off=10)) - (Ptr(kind='ip', off=4)) + -0x80000000 & u32_0 + flags0 ... */
    /* static-only queue: rank=106, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_9406d,function_9447d,function_94483, span=1044, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=106, retdec=function_9406d, share=primary_plus_empty_overlap_stubs, slot_status=noisy_dispatch_base_candidate, ip_advance=6 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 6; retdec_tail=RetDec reads dispatch base but return algebra is g3/noise-mixed; ip_reads=+0x0/4,+0x4/2; frame_reads=0x23,0x170,0x81,0xa,0x194,0x0,0x10f; frame_writes=0x23,0x170,0x16f,0x0,0xa; functions=function_... */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 + U32(vm->ip + 0x0u) + flags0 + 0x1c953985u & flags0 + 0x1c953985u - 0x29fcf13eu + 0x1f834ebcu + flags0 + 0x1c953985u - 0x29fcf13eu ^ 0x60b79571u;
    vm->flags = flags0 + 0x1c953985u - 0x29fcf13eu;
    vm->ip += 0x6;
    /* IP advance recovered from native tail site: tail_ip_add@0x9446e */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_135(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=135, native=0x94478, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x9449d:u16_0,0x944c8:u16_7,0x944f3:u16_3,0x94538:u16_0,0x94546:u16_7,0x945af:u16_5 */
    /* static-only queue: rank=74, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_94478,function_9461d,function_94623, span=432, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=74, retdec=function_94478, share=primary_plus_empty_overlap_stubs, slot_status=noisy_dispatch_return_candidate, ip_advance=9 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 9; retdec_tail=RetDec tail has dispatch-base plus slot xor noisy low-bit residue; ip_reads=+0x0/2,+0x7/2,+0x3/2,+0x5/2; frame_reads=0xa,0x170,0x0,0x199,0x10f; frame_writes=0xa; functions=function_94478,function_... */
    /* decode signature: IPADV+0x5;RIP+0x5/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x5;RIP+0x5/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0;
    /* tier3 slot expression kept comment-only: ((state0 ^ s16(ip+5)) - 0x7ed035c5) & 0xffff */
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0x94612 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_136(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=136, native=0x9461b, class=static_validated, events=2, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x75;b1=0xd8;b2=0x3d;b3=0x01;b4=0x5b */
    /* native IP reads: 0x946ba:u16_2,0x94737:byte0,0x94847:b4,0x94889:u16_2,0x948e5:u16_0,0x948f3:u16_0,0x94909:u16_0 + ((F[0x60]) ^ 0x33365d14) ^ -0x80000000 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 | U16(vm->ip + 0x0u) ^ state0 - 0x2eae4eacu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ state0)) - 0x2eae4eacu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 2=0x5u */
    /* observed top targets: 198@0xa037e:2 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/2 */
    return r;
}

static VMOpResult op_entry_137(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=137, native=0x94973, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x949f8:u16_0,0x94a15:u16_4,0x94a7d:u16_6,0x94b1e:u16_0,0x94b25:u16_4,0x94bc2:u16_2 */
    /* static-only queue: rank=68, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_94973,function_94c3c, span=724, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=68, retdec=function_94973, split=primary_plus_empty_overlap_stub, slot_status=retdec_dispatch_table_slot, ip_advance=9 */
    /* tier2 effects: split=primary_plus_empty_overlap_stub; ip += 9; retdec_tail=state = s16(ip+2) - 0x5ff6cae6; RetDec tail algebra collapses slot to zero; ip_reads=+0x0/2,+0x4/2,+0x6/2,+0x2/2; frame_reads=0xa,0x170,0x0,0x199,0x10f; frame_writes=0x170,0xa; functions=function_9... */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax;RF+0xa/8:mov */
    vm->state = state0 + U16(vm->ip + 0x2u) - state0 - 0x5ff6cae6u;
    r.slot = (uint32_t)(0);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier2 static slot recovered from a split RetDec primary tail; dynamic source-row validation is still absent. */
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0x94c31 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_138(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=138, native=0x94c3a, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x94c66:u16_6,0x94c87:u16_4,0x94caa:u16_2,0x94d45:u16_0 */
    /* static-only queue: rank=10, tier=tier0_single_function_small_static_replay, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_94c3a, span=431, action=inline_retdec_function_into_handler_model */
    /* tier0 static model: rank=10, retdec=function_94c3a, slot_status=decode_candidate_slot, ip_advance=8 */
    /* tier0 effects: flags += state; dword store through frame[s16(ip+4)]; pointer step by frame[s16(ip+2)] sign; state = slot_expr; ip += 8 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 + U16(vm->ip + 0x0u) - state0 - 0x3010a5b9u;
    vm->flags = flags0 + state0;
    r.slot = (uint32_t)((((int32_t)S16(vm->ip + 0x0u)) - 0x3010a5b9u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier0 static slot recovered from the RetDec single-function model; dynamic source-row validation is still absent. */
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0x94dd5 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_139(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=139, native=0x94ddf, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x94df8:u32_0,0x94e23:u16_4,0x94eda:byte0,0x94efe:u32_2,0x95038:byte0,0x95104:u16_0 */
    /* static-only queue: rank=139, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_94ddf,function_94e5a,function_951cb, span=1009, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=139, retdec=function_94ddf, callret=native_ret_result_prefix, slot_status=raw_mod_overlap_return_comment_only, ip_advance=6 */
    /* tier4 effects: callret=native_ret_result_prefix; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[187]+operand into destination; overlap child returns raw modulo value; ip_reads=+0x0/4,+0x4/2,+0x2/4,+0x0/2; frame_reads=0x23,0xa,0x170,0x81,0x0,0x194,0xbb,0x10f; f... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 - flags0 - 0x6f549f79u - state0 | 0xf17c331u | 0x16a9ca8cu + U16(vm->ip + 0x0u) ^ state0 - flags0 - 0x6f549f79u - state0 | 0xf17c331u | 0x16a9ca8cu ^ 0x6e089febu;
    vm->flags = flags0 - 0x6f549f79u - state0;
    vm->ip += 0x6;
    /* IP advance recovered from native tail site: tail_ip_add@0x951b9 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_141(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=141, native=0x951c2, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x95225:u16_6,0x9525d:u16_0,0x952ba:u16_4,0x9533c:u16_2 */
    /* static-only queue: rank=75, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_951c2,function_953b3,function_953b6, span=508, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=75, retdec=function_951c2, share=primary_plus_empty_overlap_stubs, slot_status=masked_noisy_return_no_dispatch_slot, ip_advance=8 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 8; retdec_tail=return is g2-masked residue after state/pointer effects; ip_reads=+0x6/2,+0x0/2,+0x4/2,+0x2/2; frame_reads=0xa,0x71,0x10f,0x170; frame_writes=0xa; functions=function_951c2,function_953b3,function_... */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0;
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0x953a8 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_142(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=142, native=0x953b1, class=partial, events=1, shape=CCCCCCCCCC, delta=+0xa */
    /* operands: b0=0xc9;b1=0xc7;b2=0xf0;b3=0xc6;b4=0x36;b5=0x38;b6=0x0f;b7=0x39;b8=0x98;b9=0x02 */
    /* native IP reads: 0x95561:byte0,0x95575:byte0,0x9557e:u32_0,0x95706:byte0,0x95716:byte0,0x9571f:u16_8 */
    /* decode signature: IPADV+0x8;RIP+0x8/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x8;RIP+0x8/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    /* vm->state = state0 ^ flags0 ^ 0x7e4feaa1u ^ 0x2968389eu | flags0 | state0 ^ flags0 ^ 0x7e4feaa1u ^ 0x2968389eu ^ 0x2de9e0a2u + 0x295d79d4u | 0x6a70639eu - 0x2ed5a434u | flags0 | state0 ^ flags0 ^ 0x7e4feaa1u ^ 0x2968389eu ^ 0x2de9e0a2u - 0x5f23a362u ^ 0x5f9390aeu ^ 0x6209aa88u + U32(vm->ip + 0x0u) ^ state0 ^ flags0 ^ 0x7e4feaa1u ^ 0x2968389eu | flags0 | state0 ^ flag...; */
    vm->flags = flags0;
    vm->ip += 0xa;
    /* dispatch: next = dispatch_table[slot] */
    /* observed top targets: 83@0x8947b:1 */
    return r;
}

static VMOpResult op_entry_143(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=143, native=0x957d9, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x957f4:u16_6,0x9581c:u16_4,0x95848:u32_0,0x9589b:byte0,0x9597f:byte0,0x959a0:byte0,0x95aa3:u16_0 */
    /* static-only queue: rank=141, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_957d9,function_95887,function_95b5e,function_95b67, span=908, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=141, retdec=function_957d9, callret=native_ret_stack_prefix, slot_status=masked_noisy_overlap_return_no_dispatch_slot, ip_advance=8 */
    /* tier4 effects: callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced qword plus frame[187]+operand; overlap return is noisy predicate residue; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x0/2; frame_reads=0xa,0x0,0x194,0x81,0x170,0xbb,0x71... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu & U16(vm->ip + 0x0u) ^ state0 & 0x61f88068u & 0x1d022eeeu ^ 0x6367b3ddu - 0x2f1222e2u;
    vm->flags = flags0 - 0x387407b9u + 0x2cd392b6u;
    vm->ip += 0x2;
    /* IP advance recovered from native tail site: tail_ip_add@0x95b52 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_145(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=145, native=0x95b5c, class=sampled_only, events=142, shape=sampled, delta=+0x139 */
    /* native IP reads: 0x95bc4:u16_8,0x95c1d:b10,0x9621b:u16_0,0x96294:u32_4,0x96297:u32_4 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;TDYN;RTdyn/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;TDYN;RTdyn/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add;JMP:r12 */
    vm->state = state0;
    r.slot = U32(vm->ip + 0x0);
    r.next_entry = vm_entry_from_slot_index(r.slot);
    vm->ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* long-control operands: target_u32@+0, signed delta_u32@+4 */
    /* dispatch: 125=next = dispatch_table[354], ip += 0x139u | 4=next = dispatch_table[165], ip += 0xbecu */
    /* observed top targets: 354@0xc2241:132,165@0x9a24c:6,171@0x9b4b3:4 */
    /* validation: long_branch=142/11, long_branch_len=142=0xb */
    return r;
}

static VMOpResult op_entry_146(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=146, native=0x96407, class=static_validated, events=578, shape=EVVVV, delta=+0x5 */
    /* operands: b0=enum3(0x3a:379,0x50:122,0x62:77);b1=var58(top=0x09:27.5%);b2=var66(top=0x6e:15.9%);b3=var52(top=0x47:16.6%);b4=var53(top=0x92:18.2%) */
    /* native IP reads: 0x9657c:u16_3,0x966bd:b0,0x9684d:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u ^ U16(vm->ip + 0x3u) + flags0 & 0xa6d4251u ^ 0x409c2e61u ^ U16(vm->ip + 0x1u) - state0 + flags0 ^ 0x2e312e01u & flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x7d882664u + 0x4a5b7e16u ^ U16(vm->ip + 0x3u) + flags0 & 0xa6d4251u ^ 0x409c2e61u + 0x2cff1885u;
    vm->flags = flags0 & 0xa6d4251u ^ 0x409c2e61u;
    /* slot variants: 99=(mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 + flags0)) ^ 0x2e312e01u)) & (mask32(flags0 + 0x7d882664u)))) + 0x4a5b7e16u)) ^ (mask32(U16(vm->ip + 0x3u) + flags0)))))) + 0x2cff1885u)) & 0xffffu | 29=(mask32((mask32(U... */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 258@0xadf2c:186,172@0x9b68a:98,70@0x8610e:64,28@0x7e390:30,199@0xa0631:25,79@0x885b0:21 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_147(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=147, native=0x96918, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x96a47:b0,0x96a97:u16_3,0x96af7:u16_1 */
    /* static-only queue: rank=78, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_96918,function_96b77,function_96b7a, span=608, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=78, retdec=function_96918, share=primary_plus_empty_overlap_stubs, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=return is frame/result pointer after operand rewrite; ip_reads=+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x0,0x71,0x23,0x10f; frame_writes=0x71,0x0,0x170,0xa; functions=function_96918,function_96b77,f... */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x1;RF+0x10f/8:mov;RIP+0x1/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 + flags0;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x96b64 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_148(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=148, native=0x96b6e, class=static_validated, events=144, shape=CCVVV, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=var16(top=0xad:44.4%);b3=var12(top=0x79:53.5%);b4=var15(top=0x56:47.9%) */
    /* native IP reads: 0x96c18:u16_0,0x96c93:byte0,0x96d81:b2,0x96dc8:u16_0,0x96e19:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 & flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - (mask32(state0 & flags0)))) ^ 0x502e5379u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 105=0x5u */
    /* observed top targets: 160@0x994cf:74,144@0x95887:25,352@0xc1ec4:23,173@0x9ba74:12,257@0xadbfd:6,108@0x8f24b:4 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/105 */
    return r;
}

static VMOpResult op_entry_149(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=149, native=0x96eb4, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x96ecf:u16_0,0x96ef4:u16_2,0x96feb:u16_0,0x97069:byte0,0x971d9:b4,0x97226:u16_0,0x9728b:u16_2 */
    /* static-only queue: rank=136, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_96eb4,function_96f2a, span=1130, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=136, retdec=function_96eb4, callret=native_ret_result_prefix, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier4 effects: callret=native_ret_result_prefix; calls=0; rets=1; ip += 5; retdec_tail=primary copies frame value into operand-selected frame slot and returns result; ip_reads=+0x0/2,+0x2/2,+0x4/1; frame_reads=0xa,0x0,0x60,0x194,0x71,0x23,0x10f; frame_writes=0x71,0x170,0x... */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 ^ flags0 - 0xd8a75efu - U16(vm->ip + 0x2u) + 0x64a62ad2u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x97307 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_150(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=150, native=0x96f2a, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x96feb:u16_0,0x97069:byte0,0x971d9:b4,0x97226:u16_0,0x9728b:u16_2 */
    /* static-only queue: rank=53, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_96f2a, span=1012, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=53, retdec=function_96f2a, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state adjusted by operand/constant chain; return expression subtracts dispatch base residue; ip_reads=+0x0/2,+0x4/1,+0x2/2; frame_reads=0xa,0x0,0x60,0x194,0x71,0x23,0x10f; frame_writes=0x71,0x170,0x60,0x0,0xa */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 ^ flags0 - 0xd8a75efu - U16(vm->ip + 0x2u) + 0x64a62ad2u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x97307 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_151(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=151, native=0x97311, class=static_validated, events=45, shape=CCVVV, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=var11(top=0xa7:13.3%);b3=var11(top=0x07:13.3%);b4=var12(top=0xc3:13.3%) */
    /* native IP reads: 0x973c3:u16_0,0x97444:byte0,0x97543:b2,0x97587:u16_0,0x975ef:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 + flags0 ^ U16(vm->ip + 0x3u) + state0 + flags0 + 0x77236c60u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + (mask32(state0 + flags0)))) + 0x77236c60u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 34=0x5u */
    /* observed top targets: 198@0xa037e:16,173@0x9ba74:12,352@0xc1ec4:7,160@0x994cf:6,144@0x95887:4 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/34 */
    return r;
}

static VMOpResult op_entry_152(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=152, native=0x9768c, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x976b4:u16_9,0x976d0:u16_1,0x97723:u16_7,0x977bb:u16_9,0x977d3:u16_1,0x97843:b0,0x9788a:u16_3,0x97927:u16_5 */
    /* static-only queue: rank=80, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_9768c,function_979b0, span=812, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=80, retdec=function_9768c, share=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return is frame/result pointer after compare/flag side effects; ip_reads=+0x9/2,+0x1/2,+0x7/2,+0x0/1,+0x3/2,+0x5/2; frame_reads=0xa,0x170,0x199,0x0,0x10f; frame_writes=0x170,0xa; functions=functio... */
    /* decode signature: IPADV+0x5;RIP+0x5/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x5;RIP+0x5/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 ^ U16(vm->ip + 0x5u) ^ state0;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x979a1 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_153(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=153, native=0x979ab, class=static_validated, events=10, shape=EECCE, delta=+0x5 */
    /* operands: b0=enum2(0xda:5,0xb5:5);b1=enum2(0xa5:5,0x8b:5);b2=0x3d;b3=0x01;b4=enum2(0x0b:5,0x97:5) */
    /* native IP reads: 0x97a62:u16_2,0x97ae7:byte0,0x97ba0:b4,0x97bf5:u16_2,0x97c28:u16_2 + (Ptr(kind='frame', off=0)),0x97c74:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9;RF+0x23/4:mov */
    vm->state = state0 + U16(vm->ip + 0x0u) - state0 ^ 0x6f642592u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - state0)) ^ 0x6f642592u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 10=0x5u */
    /* observed top targets: 144@0x95887:5,173@0x9ba74:5 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/10 */
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

static VMOpResult op_entry_155(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=155, native=0x980ab, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x98123:u16_0,0x98147:u16_4,0x98191:u16_6,0x9822f:u16_0,0x98246:u16_4,0x982cd:u16_2 */
    /* static-only queue: rank=27, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_980ab, span=694, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=27, retdec=function_980ab, slot_status=state_effect_only_no_dispatch_return, ip_advance=9 */
    /* tier1 effects: ip += 9; retdec_tail=state = (s16(ip+2) - 0x24797ebc) | state0; byte pointer step; ip_reads=+0x0/2,+0x4/2,+0x6/2,+0x2/2; frame_reads=0xa,0x170,0x0,0x199,0x10f; frame_writes=0x170,0xa */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 | U16(vm->ip + 0x2u) - 0x24797ebcu;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0x9834a */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_156(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=156, native=0x98354, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x983e1:byte0,0x98471:byte0,0x984ab:byte0,0x98539:byte0,0x98724:byte0,0x98889:b4,0x98918:u16_0,0x989e3:u16_2 */
    /* static-only queue: rank=118, tier=tier5_large_static_replay, sidecar=vm_unobserved_handlers_retdec_batch06.c, funcs=function_98354, span=1876, action=defer_until_small_static_handlers_are_inlined */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi;RF+0x23/4:mov */
    vm->state = state0 + 0x240c2129u | flags0 ^ 0x392b0561u ^ 0x7de2a785u + state0 ^ 0x661ea917u + 0x6aad9867u & 0x799af059u ^ U16(vm->ip + 0x2u) + state0 + 0x240c2129u | flags0 ^ 0x392b0561u ^ 0x7de2a785u + state0 ^ 0x661ea917u + 0x6aad9867u & 0x799af059u - 0x2430893au;
    vm->flags = flags0 ^ 0x392b0561u ^ 0x7de2a785u + state0 ^ 0x661ea917u + 0x6aad9867u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x98a91 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_159(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=159, native=0x992cd, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x99326:u16_2,0x9933a:u16_0,0x99365:u16_6,0x993b6:u16_0,0x993ba:u16_2,0x993fc:byte0,0x99456:u16_4 */
    /* static-only queue: rank=12, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_992cd, span=526, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=12, retdec=function_992cd, slot_status=state_effect_only_no_dispatch_return, ip_advance=9 */
    /* tier1 effects: ip += 9; retdec_tail=state = 2*state0 + s16(ip+4); paired qword pointer copy/step; ip_reads=+0x2/2,+0x0/2,+0x6/2,+0x4/2; frame_reads=0xa,0x23,0x199,0x194,0x10f,0x170,0x81; frame_writes=0x23,0x170,0xa */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11;RF+0x81/8:mov */
    vm->state = state0 + U16(vm->ip + 0x4u) + state0;
    vm->flags = flags0 & 0x2ae27572u;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0x994c4 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_162(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=162, native=0x99b3c, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x99bcb:u16_7,0x99bef:u16_3,0x99c40:u16_5,0x99ca3:u16_7,0x99cc8:u16_3,0x99d41:b2,0x99d6e:u16_0,0x99dbf:u16_9 */
    /* static-only queue: rank=29, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_99b3c, span=751, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=29, retdec=function_99b3c, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=state adjusted by operand/constant chain after byte compare; no clean dispatch slot; ip_reads=+0x7/2,+0x3/2,+0x5/2,+0x2/1,+0x0/2,+0x9/2; frame_reads=0xa,0x199,0x10f; frame_writes=0x170,0xa */
    /* decode signature: IPADV+0x9;RIP+0x9/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x9;RIP+0x9/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 + 0x490e5ce5u - U16(vm->ip + 0x9u) + 0x2201cbefu;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x99e17 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_163(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=163, native=0x99e21, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x99e3d:u16_0,0x99e63:u16_2,0x99fa0:u16_2,0x9a017:byte0,0x9a0c1:b4,0x9a113:u16_2,0x9a1e0:u16_0 */
    /* static-only queue: rank=133, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_99e21,function_99e99, span=1079, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=133, retdec=function_99e21, callret=native_ret_prefix_over_raw_child_slot, slot_status=overlap_raw_slot_comment_only, ip_advance=5 */
    /* tier4 effects: callret=native_ret_prefix_over_raw_child_slot; calls=0; rets=1; ip += 5; retdec_tail=primary copies frame value; child raw modulo slot lacks dispatch-table base for this entry; ip_reads=+0x2/2,+0x0/2,+0x4/1; frame_reads=0xa,0x0,0x60,0x194,0x71,0x23,0x10f,0x... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 - flags0 + 0x5d1cfd6u | 0x7c3f7914u | U16(vm->ip + 0x0u) ^ state0 - flags0 + 0x5d1cfd6u | 0x7c3f7914u - 0x51b094c3u;
    /* tier4 slot expression kept comment-only: ((((state0 - flags0 - 0x05d1cfd6) | 0x7c3f7914) ^ s16(ip+0)) - 0x51b094c3) & 0xffff */
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x9a242 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_164(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=164, native=0x99e99, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x99fa0:u16_2,0x9a017:byte0,0x9a0c1:b4,0x9a113:u16_2,0x9a1e0:u16_0 */
    /* static-only queue: rank=52, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_99e99, span=959, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=52, retdec=function_99e99, slot_status=retdec_raw_mod_slot, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=RetDec return is raw v46 % 0x10000, not a dispatch-base load; ip_reads=+0x2/2,+0x4/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x194,0x71,0x23,0x10f,0x170; frame_writes=0x170,0x71,0x0,0x60,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 - flags0 + 0x5d1cfd6u | 0x7c3f7914u | U16(vm->ip + 0x0u) ^ state0 - flags0 + 0x5d1cfd6u | 0x7c3f7914u - 0x51b094c3u;
    /* tier1 slot expression kept comment-only: ((((state0 - flags0 - 0x05d1cfd6) | 0x7c3f7914) ^ s16(ip+0)) - 0x51b094c3) & 0xffff */
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x9a242 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_166(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=166, native=0x9a46e, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x9a619:u32_2,0x9a67d:u32_2 + state0 & 0x6ea7f6f2 | flags0 - state0 | 0x72ac0577 | state0 & 0x6ea7f6f2 & 0x4490e6ab ^ flags0 - state0 | 0x72ac0577 | state0 & 0x6ea7f6f2 & 0x4490e6ab,0x9a822:u16_0 */
    /* static-only queue: rank=101, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_9a46e,function_9a8d4, span=1131, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=101, retdec=function_9a46e, share=primary_plus_empty_overlap_stub, slot_status=masked_return_slot_requires_g3, ip_advance=6 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 6; retdec_tail=return is g3-masked state/slot candidate; ip_reads=+0x2/4,+0x0/2; frame_reads=0x170,0x23,0x81,0x71,0xa,0x0,0x10f; frame_writes=0x170,0x23,0x16f,0x0,0xa; functions=function_9a46e,function_9a8d4; ran... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RF+0x10f/8:mov;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    /* vm->state = state0 & 0x6ea7f6f2u | flags0 - state0 | 0x72ac0577u | state0 & 0x6ea7f6f2u & 0x4490e6abu - U32(vm->ip + 0x2u) + state0 & 0x6ea7f6f2u | flags0 - state0 | 0x72ac0577u | state0 & 0x6ea7f6f2u & 0x4490e6abu ^ flags0 - state0 | 0x72ac0577u | state0 & 0x6ea7f6f2u & 0x4490e6abu - flags0 - state0 | 0x72ac0577u | state0 & 0x6ea7f6f2u & 0x4490e6abu | 0x47cfdd0bu - ...; */
    vm->flags = flags0 - state0;
    vm->ip += 0x6;
    /* IP advance recovered from native tail site: tail_ip_add@0x9a8c7 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_170(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=170, native=0x9b0c8, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x9b0ff:byte0,0x9b139:u16_9,0x9b13d:u16_3,0x9b1bc:u16_5,0x9b277:u16_3,0x9b2a2:u16_9,0x9b387:b0,0x9b3ea:u16_1,0x9b44b:u16_7 */
    /* static-only queue: rank=54, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_9b0c8, span=1012, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=54, retdec=function_9b0c8, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=state = 2*state0 + s16(ip+7); byte compare/pointer step; ip_reads=+0x9/2,+0x3/2,+0x5/2,+0x0/1,+0x1/2,+0x7/2; frame_reads=0xa,0x194,0x199,0x81,0x23,0x10f,0x170; frame_writes=0x23,0x170,0xa */
    /* decode signature: IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x7;RF+0x10f/8:mov;RIP+0x7/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 + U16(vm->ip + 0x7u) + state0;
    vm->flags = flags0 - 0x5f9abfc8u;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x9b4a9 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_175(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=175, native=0x9c08f, class=sampled_operand_lifted, events=1, shape=sampled, delta=+0x2cef7 */
    /* native return-patch thunk: the observed entry_175 body ends in a native ret; the normal dispatch decode that follows belongs to the next native handler entry. */
    /* ret-patch evidence: rows=6, kind=single_stack_return:6, starts=0xd1445:2,0x17a420:2,0x1a6041:2, patched_text=0x217cb:2,0x31703:2,0x339bd:2, patched_text2=-, stack_offsets=0x80:6, sections=.text:6, sections2=-, seed=full_gpr_snapshot:5,frame_only_snapshot:1, base=inferred_image_base:6, relation=native_ret_patch_text_offset_not_vm_ip:6, relation2=- */
    /* ret-patch formula: *(uint64_t *)(rsp + u16_4) = frame_qword_0xbb + u32_0; ret */
    uint32_t native_ret_off = U32(vm->ip + 0x0);
    uint16_t native_stack_off = U16(vm->ip + 0x4);
    r.slot = native_ret_off;
    r.next_entry = -1;
    /* r.slot carries the native text/file offset for this analysis artifact, not a dispatch-table slot. */
    /* native effect: *(uint64_t *)(rsp + native_stack_off) = frame_qword_0xbb + native_ret_off; ret */
    (void)native_stack_off;
    /* sampled sidecars remain bytecode-layer evidence: 1=sampled operand footprint 0x6, observed target table[310], delta +0x2cef7 */
    /* validation: sampled_operand=1/1, sampled_operand_len=1=0x6 */
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

static VMOpResult op_entry_177(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=177, native=0x9c3f7, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x9c430:u16_3,0x9c468:b2,0x9c6c2:u16_0 */
    /* static-only queue: rank=84, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_9c3f7,function_9c74a, span=860, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=84, retdec=function_9c3f7, share=primary_plus_large_neighbor_body, slot_status=masked_return_slot_requires_g3, ip_advance=5 */
    /* tier3 effects: share=primary_plus_large_neighbor_body; ip += 5; retdec_tail=return is g3-masked state/slot candidate; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x10f; frame_writes=0x199,0x170,0xa; functions=function_9c3f7,function_9c74a; ranges=0x9c3f7-0x9c74a,0x9c74... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx */
    vm->state = state0 - U16(vm->ip + 0x0u);
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x9c741 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_178(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=178, native=0x9c74a, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x9c7b4:u16_9,0x9c7c1:u16_2,0x9c818:u16_0,0x9c8a3:u16_2,0x9c8cb:u16_9,0x9c96f:b6,0x9c9b5:u16_7,0x9c9c2:u16_0 + (Ptr(kind='frame', off=0)) & (Ptr(kind='frame', off=409)) ^ (r14),0x9ca04:u16_4 */
    /* static-only queue: rank=39, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_9c74a, span=845, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=39, retdec=function_9c74a, slot_status=compare_only_no_state_slot, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=byte/word compare path updates flags; RetDec tail only advances IP; ip_reads=+0x9/2,+0x2/2,+0x0/2,+0x6/1,+0x7/2,+0x4/2; frame_reads=0xa,0x81,0x199,0x10f; frame_writes=0xa */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x4;RIP+0x4/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0x9ca83 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_179(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=179, native=0x9ca8d, class=static_validated, events=737, shape=EVVVV, delta=+0x5 */
    /* operands: b0=enum4(0x3a:406,0x50:128,0x32:125,0x62:78);b1=var79(top=0x9e:21.0%);b2=var79(top=0x35:21.6%);b3=var62(top=0x64:17.6%);b4=var72(top=0xfe:17.0%) */
    /* native IP reads: 0x9cba4:u16_3,0x9cd21:b0,0x9ce71:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12;RF+0x194/1:mov */
    vm->state = state0 | flags0 ^ U16(vm->ip + 0x3u) ^ flags0 + 0x7ef33dc5u ^ U16(vm->ip + 0x1u) - state0 | flags0 ^ U16(vm->ip + 0x3u) ^ flags0 + 0x7ef33dc5u - 0x263c3887u;
    vm->flags = flags0 + 0x7ef33dc5u & 0x7f151ac8u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32(state0 | flags0)) ^ (mask32(U16(vm->ip + 0x3u) ^ (mask32(flags0 + 0x7ef33dc5u)))))))) - 0x263c3887u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 99@0x8c99a:131,337@0xbec0e:117,268@0xb0007:106,43@0x8173d:103,18@0x7be9b:83,203@0xa1484:22 */
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

static VMOpResult op_entry_181(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=181, native=0x9d13f, class=static_validated, events=1407, shape=CCCCVV, delta=+0x6 */
    /* operands: b0=0x3d;b1=0x01;b2=0xe8;b3=0x01;b4=var72(top=0xe0:18.2%);b5=var69(top=0x0b:24.8%) */
    /* native IP reads: 0x9d17b:u16_0,0x9d17f:u16_2,0x9d1ce:u16_4 */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 - U16(vm->ip + 0x4u) - state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x4u) - state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x6u */
    /* observed top targets: 215@0xa4609:256,189@0x9e7af:189,297@0xb64d7:120,337@0xbec0e:108,347@0xc088d:100,340@0xbf435:98 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_182(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=182, native=0x9d24c, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x9d2e9:u16_2,0x9d31f:u16_6,0x9d364:u16_0,0x9d3f0:u16_4 */
    /* static-only queue: rank=20, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_9d24c, span=598, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=20, retdec=function_9d24c, slot_status=state_effect_only_no_dispatch_return, ip_advance=8 */
    /* tier1 effects: ip += 8; retdec_tail=state = state0 - (s16(ip+4) ^ 0x4174ae3e); word store through pointer step; ip_reads=+0x2/2,+0x6/2,+0x0/2,+0x4/2; frame_reads=0xa,0x23,0x10f; frame_writes=0x23,0x170,0xa */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x4;RF+0x10f/8:mov;RIP+0x4/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 - U16(vm->ip + 0x4u) ^ 0x4174ae3eu;
    vm->flags = flags0 ^ 0x605d6198u - 0x9fc7504u;
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0x9d48b */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_186(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=186, native=0x9dcae, class=static_validated, events=50, shape=VCCVV, delta=+0x5 */
    /* operands: b0=var13(top=0x55:20.0%);b1=0x3d;b2=0x01;b3=var13(top=0xb8:20.0%);b4=var11(top=0x73:22.0%) */
    /* native IP reads: 0x9dd79:u16_1,0x9de18:byte0,0x9df11:b0,0x9df73:u16_1,0x9dff9:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 + 0x72198f10u;
    vm->flags = flags0 & 0x2dc3128fu + 0x6176101u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + state0)) + 0x72198f10u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 29=0x5u */
    /* observed top targets: 257@0xadbfd:25,144@0x95887:9,173@0x9ba74:6,160@0x994cf:4,198@0xa037e:2,256@0xad849:2 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/29 */
    return r;
}

static VMOpResult op_entry_187(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=187, native=0x9e07d, class=static_validated, events=5, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x3d;b2=0x01;b3=0x89;b4=0x76 */
    /* native IP reads: 0x9e136:u16_1,0x9e153:byte0,0x9e22f:b0,0x9e25f:u16_1,0x9e2ac:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 + U16(vm->ip + 0x3u) - state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x3u) - state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 5=0x5u */
    /* observed top targets: 173@0x9ba74:5 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/5 */
    return r;
}

static VMOpResult op_entry_188(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=188, native=0x9e336, class=partial, events=1, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0xff;b1=0xfe;b2=0x3d;b3=0x01;b4=0x00 */
    /* native IP reads: 0x9e35b:byte0,0x9e491:byte0,0x9e5b8:b4,0x9e5e4:u16_2,0x9e61f:byte0,0x9e6ea:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0 + 0x2bd68549u + flags0 - 0x4a4532cau + flags0 - U16(vm->ip + 0x0u) ^ state0 + 0x2bd68549u + flags0 - 0x4a4532cau + flags0 + 0x62c32dd8u;
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot] */
    /* observed top targets: 173@0x9ba74:1 */
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

static VMOpResult op_entry_190(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=190, native=0x9eacb, class=static_validated, events=224, shape=CCVVV, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=var10(top=0x00:55.8%);b3=var9(top=0xf7:57.1%);b4=var10(top=0x01:55.8%) */
    /* native IP reads: 0x9eb85:u16_0,0x9ebf8:byte0,0x9ecca:b2,0x9ed04:u16_0,0x9ed6b:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RF+0x10f/8:mov;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 & U16(vm->ip + 0x3u) + state0 + 0x20f4b909u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) + state0)) + 0x20f4b909u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 81=0x5u */
    /* observed top targets: 352@0xc1ec4:134,257@0xadbfd:86,144@0x95887:4 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/81 */
    return r;
}

static VMOpResult op_entry_191(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=191, native=0x9ede9, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x9eeee:b4,0x9ef46:u16_0,0x9ef93:u16_2 */
    /* static-only queue: rank=62, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_9ede9,function_9f00f, span=558, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=62, retdec=function_9ede9, split=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier2 effects: split=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=state = ((s16(ip+2) - state0) ^ 0x5e6d2a06) + state0; operand rewrite body precedes tail; ip_reads=+0x4/1,+0x0/2,+0x2/2; frame_reads=0xa,0x0,0x71,0x10f,0x170,0x23; frame_writes=0x170,0x71,0x0,0xa; ... */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15;RF+0x23/4:mov */
    vm->state = state0 ^ 0x41c37245u + U16(vm->ip + 0x2u) - state0 ^ 0x41c37245u ^ 0x5e6d2a06u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0x9f000 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_193(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=193, native=0x9f77c, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x9f7e0:u16_3,0x9f84f:u16_7,0x9f8d3:u16_0,0x9f96e:u16_3,0x9f9a1:u16_7,0x9fa0a:u16_5 */
    /* static-only queue: rank=34, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_9f77c, span=818, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=34, retdec=function_9f77c, slot_status=state_effect_only_no_dispatch_return, ip_advance=9 */
    /* tier1 effects: ip += 9; retdec_tail=state = (-0x1aead89a - state0 + s16(ip+5)) ^ state0; paired word pointer step; ip_reads=+0x3/2,+0x7/2,+0x0/2,+0x5/2; frame_reads=0xa,0x23,0x71,0x199,0x10f,0x170; frame_writes=0x170,0xa */
    /* decode signature: IPADV+0x5;RIP+0x5/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x5;RIP+0x5/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 ^ flags0 ^ 0xd9682bau ^ U16(vm->ip + 0x5u) - state0 ^ flags0 ^ 0xd9682bau - 0x1aead89au;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0x9fa9b */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_194(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=194, native=0x9faa4, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0x9fabf:u16_6,0x9fae6:u16_4,0x9fb12:u32_0,0x9fb6b:u32_0,0x9fb96:u16_4,0x9fc34:u16_0,0x9fe55:byte0,0x9fe91:byte0,0x9ffa2:u16_2 */
    /* static-only queue: rank=152, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_9faa4,function_9fb50,function_9fbcd,function_a006d, span=1492, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=152, retdec=function_9faa4, callret=native_double_ret_shared_prefix, slot_status=multi_ret_side_effect_no_dispatch_slot, ip_advance=8 */
    /* tier4 effects: callret=native_double_ret_shared_prefix; calls=0; rets=2; ip += 8; retdec_tail=multiple shared range returns; no isolated dispatch slot; ip_reads=+0x4/2,+0x0/4,+0x6/2,+0x0/2,+0x2/2; frame_reads=0xa,0x23,0x170,0x71,0xbb,0x81,0x194,0x10f; frame_writes=0x170,0... */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RF+0x10f/8:mov;RIP+0x2/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 | 0x52e5924au + flags0 | 0x4083ed99u & state0 | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x37b5a024u + 0x2e12e35au ^ 0x44fb7fdbu + flags0 | 0x4083ed99u & state0 | 0x52e5924au ^ 0x20047816u & 0x7ca762c5u - 0x5ff2f608u + 0x789b1461u + 0x32c4b127u & 0x7c737923u;
    vm->flags = flags0;
    vm->ip += 0x4;
    /* IP advance recovered from native tail site: tail_ip_add@0xa0061 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_195(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=195, native=0x9fb50, class=sampled_operand_lifted, events=3, shape=sampled, delta=-0x2306 */
    /* native return-patch thunk: the observed entry_195 body ends in a native ret; the normal dispatch decode that follows belongs to the next native handler entry. */
    /* ret-patch evidence: rows=16, kind=single_stack_return:16, starts=0xd5ebc:2,0xdaf39:2,0x1ed483:2,0x2304b8:2,0x231b74:2,0x333bc9:2, patched_text=0x21e1e:2,0x230d4:2,0x37af9:2,0x44d7b:2,0x5f1c6:2,0x748d8:2, patched_text2=-, stack_offsets=0x80:16, sections=.text:16, sections2=-, seed=full_gpr_snapshot:11,frame_only_snapshot:5, base=inferred_image_base:16, relation=native_ret_patch_text_offset_not_vm_ip:16, relation2=- */
    /* ret-patch formula: *(uint64_t *)(rsp + u16_4) = frame_qword_0xbb + u32_0; ret */
    uint32_t native_ret_off = U32(vm->ip + 0x0);
    uint16_t native_stack_off = U16(vm->ip + 0x4);
    r.slot = native_ret_off;
    r.next_entry = -1;
    /* r.slot carries the native text/file offset for this analysis artifact, not a dispatch-table slot. */
    /* native effect: *(uint64_t *)(rsp + native_stack_off) = frame_qword_0xbb + native_ret_off; ret */
    (void)native_stack_off;
    /* sampled sidecars remain bytecode-layer evidence: 1=sampled operand footprint 0x6, observed target table[310], delta -0x542a | 1=sampled operand footprint 0x6, observed target table[310], delta -0x8c8e */
    /* validation: sampled_operand=3/3, sampled_operand_len=3=0x6 */
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

static VMOpResult op_entry_197(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=197, native=0xa006b, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa00b1:u16_0,0xa00e3:b4,0xa02fe:u16_2 */
    /* static-only queue: rank=33, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_a006b, span=800, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=33, retdec=function_a006b, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = state0 - (state0 ^ s16(ip+2)); predicate scratch side effects present; ip_reads=+0x0/2,+0x4/1,+0x2/2; frame_reads=0xa,0x10f,0x170,0x81; frame_writes=0x199,0x170,0xa */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RF+0x10f/8:mov;RIP+0x2/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8;RF+0x81/8:mov */
    vm->state = state0 - U16(vm->ip + 0x2u) ^ state0;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xa0374 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_200(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=200, native=0xa0a9e, class=static_validated, events=1511, shape=VVVVVV, delta=+0x6 */
    /* operands: b0=var132(top=0xa4:13.0%);b1=var124(top=0xc1:9.3%);b2=var103(top=0x10:19.7%);b3=var102(top=0x5f:26.1%);b4=var28(top=0x48:16.1%);b5=var11(top=0x09:19.9%) */
    /* native IP reads: 0xa0aa8:byte0,0xa0b70:byte0,0xa0c45:u32_0,0xa0d04:u16_4 */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10;RF+0x23/4:mov */
    vm->state = state0 + flags0 - flags0 ^ 0x64193a1au ^ 0x227666a1u + U32(vm->ip + 0x0u) ^ flags0 & 0x21af07eu | 0x54bd1bfeu ^ 0x9ad7a2fu ^ 0x5c24c721u + U16(vm->ip + 0x4u);
    vm->flags = flags0 & 0x21af07eu;
    r.slot = (uint32_t)(U16(vm->ip + 0x4u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x6u */
    /* observed top targets: 297@0xb64d7:228,18@0x7be9b:138,199@0xa0631:111,185@0x9d964:108,333@0xbd8af:104,43@0x8173d:103 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_201(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=201, native=0xa0dca, class=static_validated, events=341, shape=CCEEV, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=enum5(0xa1:257,0x39:76,0xb9:4,0x69:2,0x41:2);b3=enum4(0xc5:261,0xc8:74,0xc4:4,0xc6:2);b4=var11(top=0xe1:75.1%) */
    /* native IP reads: 0xa0e30:byte0,0xa10c6:byte0,0xa123f:b4,0xa126b:u16_0,0xa12e6:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x10f/8:mov;WF+0x170/4:sub;TDYN;RTdyn/8:mov;TABLEADV+0x1;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 ^ flags0 ^ 0x1940e110u ^ 0x5efd26e6u & flags0 ^ 0x71fea721u ^ flags0 & 0x3f73d5c3u | 0x4f2c497cu | 0x6499103u & flags0 & state0 ^ flags0 ^ 0x1940e110u ^ 0x5efd26e6u & flags0 ^ 0x71fea721u ^ flags0 & 0x3f73d5c3u | 0x4f2c497cu + 0x2daa0966u - 0x708b6fb1u - 0x7e894c58u - U16(vm->ip + 0x2u) - 0x289c039u;
    vm->flags = flags0 & state0 ^ flags0 ^ 0x1940e110u ^ 0x5efd26e6u & flags0 ^ 0x71fea721u ^ flags0 & 0x3f73d5c3u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) - 0x289c039u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 173@0x9ba74:257,256@0xad849:72,144@0x95887:4,160@0x994cf:4,198@0xa037e:2,257@0xadbfd:2 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_202(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=202, native=0xa13d6, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa13f1:u16_6,0xa1419:u16_4,0xa1445:u32_0,0xa155f:byte0,0xa162c:u16_2,0xa1802:byte0,0xa1890:u16_0 */
    /* static-only queue: rank=142, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_a13d6,function_a1484, span=1392, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=142, retdec=function_a13d6, callret=native_ret_stack_prefix, slot_status=state_effect_only_no_dispatch_return, ip_advance=8 */
    /* tier4 effects: callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced qword plus frame[187]+operand and returns result; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x2/2,+0x0/2; frame_reads=0x23,0xa,0x170,0x81,0x0,0x194,0xbb,0x10f; frame_wri... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    /* vm->state = state0 - flags0 + 0x97da242u & flags0 + 0x97da242u ^ 0x370370f1u | 0x1f1759cu | flags0 + 0x97da242u & state0 - flags0 + 0x97da242u & flags0 + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2c217984u | 0x24d2add8u & 0x6ef19beeu - flags0 + 0x97da242u & state0 - flags0 + 0x97da242u & flags0 + 0x97da242u ^ 0x370370f1u | 0x1f1759cu & 0x71376753u + 0x2...; */
    vm->flags = flags0 + 0x97da242u & state0 - flags0 + 0x97da242u & flags0 + 0x97da242u ^ 0x370370f1u;
    vm->ip += 0x4;
    /* IP advance recovered from native tail site: tail_ip_add@0xa192f */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_204(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=204, native=0xa1939, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa194d:byte0,0xa198a:u16_2,0xa198f:u16_6,0xa19ba:u16_0,0xa1a20:u16_4 */
    /* static-only queue: rank=55, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_a1939,function_a1a97, span=358, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=55, retdec=function_a1939, split=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=8 */
    /* tier2 effects: split=primary_plus_empty_overlap_stub; ip += 8; retdec_tail=state = s16(ip+4) - 0x452939b9 ^ state0; word store through pointer step; ip_reads=+0x2/2,+0x6/2,+0x0/2,+0x4/2; frame_reads=0xa,0x81,0x194,0x10f; frame_writes=0x170,0xa; functions=function_a1939,fu... */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 ^ U16(vm->ip + 0x4u) - 0x452939b9u;
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0xa1a8b */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_205(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=205, native=0xa1a95, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa1ab1:u16_6,0xa1ad7:u16_4,0xa1b01:u32_0,0xa1c1e:u16_1,0xa1c93:byte0,0xa1d56:b0,0xa1d92:u16_1,0xa1e42:u16_3 */
    /* static-only queue: rank=140, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_a1a95,function_a1b3e,function_a1ecf, span=1095, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=140, retdec=function_a1a95, callret=native_ret_stack_prefix, slot_status=masked_noisy_overlap_return_no_dispatch_slot, ip_advance=8 */
    /* tier4 effects: callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary builds stack/value cell; overlaps tier1 state-only and tier3 masked dispatch-base candidate bodies; ip_reads=+0x1/2,+0x6/2,+0x4/2,+0x0/4,+0x0/1,+0x3/2; frame_reads=0xa,0x71,0x60,... */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 & U16(vm->ip + 0x3u) + 0x79a60067u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xa1ec6 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_206(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=206, native=0xa1b3e, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa1c1e:u16_1,0xa1c93:byte0,0xa1d56:b0,0xa1d92:u16_1,0xa1e42:u16_3 */
    /* static-only queue: rank=47, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_a1b3e, span=926, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=47, retdec=function_a1b3e, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = (s16(ip+3) + 0x79a60067) & state0; flag/operand rewrite body precedes tail; ip_reads=+0x1/2,+0x0/1,+0x3/2; frame_reads=0xa,0x71,0x60,0x0,0x194,0x10f; frame_writes=0x71,0x60,0x0,0x170,0xa */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 & U16(vm->ip + 0x3u) + 0x79a60067u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xa1ec6 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_207(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=207, native=0xa1ecf, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa1f48:byte0,0xa206f:u32_0,0xa2290:u16_4 */
    /* static-only queue: rank=105, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_a1ecf,function_a2366, span=1183, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=105, retdec=function_a1ecf, share=primary_plus_empty_overlap_stub, slot_status=masked_dispatch_base_candidate, ip_advance=6 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 6; retdec_tail=return is dispatch base OR mask mixed with frame+state; ip_reads=+0x0/4,+0x4/2; frame_reads=0x23,0x81,0x170,0x0,0xa,0x194,0x10f; frame_writes=0x170,0x16f,0x0,0x23,0xa; functions=function_a1ecf,func... */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x4;RF+0x10f/8:mov;RIP+0x4/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14;RF+0x23/4:mov */
    vm->state = state0 - flags0 - flags0 & flags0 & 0x5dbf06d2u & U32(vm->ip + 0x0u) + flags0 ^ 0x2a95895du ^ 0x26d4cf3eu | flags0 ^ 0x4fbbd017u - U16(vm->ip + 0x4u) - state0 - flags0 - flags0 & flags0 & 0x5dbf06d2u & U32(vm->ip + 0x0u) + flags0 ^ 0x2a95895du ^ 0x26d4cf3eu | flags0 ^ 0x4fbbd017u ^ 0x75fbb160u;
    vm->flags = flags0 ^ 0x4fbbd017u;
    vm->ip += 0x6;
    /* IP advance recovered from native tail site: tail_ip_add@0xa2356 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_208(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=208, native=0xa2361, class=static_validated, events=802, shape=EVVVV, delta=+0x5 */
    /* operands: b0=enum3(0x3a:404,0x62:335,0x50:63);b1=var62(top=0xa7:15.7%);b2=var77(top=0xf1:15.7%);b3=var29(top=0xa5:28.8%);b4=var52(top=0xe2:19.6%) */
    /* native IP reads: 0xa2577:u16_1,0xa25a7:u16_1,0xa26d7:b0,0xa27c3:byte0,0xa284f:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    /* vm->state = state0 + flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0 | 0x7a909dc0u ^ 0x58abcfc7u | 0x1477a707u - flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0 | 0x7a909dc0u ^ 0x58abcfc7u | 0x72f7690fu & flags0 - 0x24472ebau ^ 0x60ff2036u + 0x762...; */
    vm->flags = flags0 - 0x24472ebau ^ 0x60ff2036u + 0x7627b830u - 0x42fb6768u ^ state0 + 0x7ad87935u ^ 0x39b69246u ^ state0;
    /* slot variants: 50=(mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32(state0 + (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(flags0 - 0x24472ebau)) ^ 0x60ff2036u)) + 0x7627b830u)) - 0x42fb6768u)) ^ (mask...#88b045eb4c1f | 49=(mask32(U16(... */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 307@0xb8064:225,114@0x90319:91,79@0x885b0:75,49@0x82820:74,340@0xbf435:66,297@0xb64d7:66 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_209(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=209, native=0xa2935, class=static_validated, events=2, shape=EECCE, delta=+0x5 */
    /* operands: b0=enum2(0x9c:1,0x80:1);b1=enum2(0x9c:1,0x0f:1);b2=0x3d;b3=0x01;b4=enum2(0xd9:1,0x85:1) */
    /* native IP reads: 0xa2ab3:byte0,0xa2b3d:byte0,0xa2b74:b4,0xa2ba1:u16_2,0xa2c8f:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 & flags0 | 0x57058be5u ^ 0x36c108d8u | 0x22939484u ^ 0x55c2f3a2u - U16(vm->ip + 0x0u) ^ state0 & flags0 | 0x57058be5u ^ 0x36c108d8u | 0x22939484u ^ 0x55c2f3a2u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 & (mask32(flags0 | 0x22939484u)))))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 1=0x5u */
    /* observed top targets: 257@0xadbfd:1,352@0xc1ec4:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/1 */
    return r;
}

static VMOpResult op_entry_210(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=210, native=0xa2da3, class=sampled_only, events=15, shape=sampled, delta=+0x30 */
    /* native IP reads: 0xa2dfc:u16_8,0xa2e51:b10,0xa34af:u16_0,0xa3530:u32_4,0xa3539:u32_4 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add;JMP:r13 */
    vm->state = state0;
    r.slot = U32(vm->ip + 0x0);
    r.next_entry = vm_entry_from_slot_index(r.slot);
    vm->ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* long-control operands: target_u32@+0, signed delta_u32@+4 */
    /* dispatch: 3=next = dispatch_table[171], ip += 0x30u | 3=next = dispatch_table[354], ip += 0x60u */
    /* observed top targets: 354@0xc2241:7,171@0x9b4b3:6,165@0x9a24c:2 */
    /* validation: long_branch=15/9, long_branch_len=15=0xb */
    return r;
}

static VMOpResult op_entry_211(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=211, native=0xa36c9, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa37fb:u32_0,0xa3956:u16_8 */
    /* static-only queue: rank=93, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_a36c9,function_a3a4d, span=911, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=93, retdec=function_a36c9, share=primary_plus_empty_overlap_stub, slot_status=masked_noisy_return_no_dispatch_slot, ip_advance=10 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 10; retdec_tail=return is g3/base-mangled arithmetic residue; ip_reads=+0x0/4,+0x0/8,+0x8/2; frame_reads=0x81,0x23,0x170,0xa,0x71,0x10f; frame_writes=0x23,0x170,0x60,0xa; functions=function_a36c9,function_a3a4d; ... */
    /* decode signature: IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x8;RIP+0x8/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    /* vm->state = state0 | flags0 - state0 - 0x11e0e25au ^ U32(vm->ip + 0x0u) ^ flags0 - state0 - 0x11e0e25au - 0x7fb611ffu - 0x61e44634u - 0x4be2eb7au - flags0 - state0 - 0x11e0e25au - 0x7fb611ffu - 0x61e44634u - 0x4be2eb7au ^ 0x3f63da53u & state0 | flags0 - state0 - 0x11e0e25au ^ U32(vm->ip + 0x0u) ^ flags0 - state0 - 0x11e0e25au - 0x7fb611ffu - 0x61e44634u - 0x4be2eb7au...; */
    vm->flags = flags0 - state0 - 0x11e0e25au - 0x7fb611ffu - 0x61e44634u - 0x4be2eb7au ^ 0x3f63da53u & state0;
    vm->ip += 0xa;
    /* IP advance recovered from native tail site: tail_ip_add@0xa3a42 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_212(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=212, native=0xa3a4b, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa3aa9:u16_0,0xa3ae5:u16_4,0xa3b9e:u16_6,0xa3c29:u16_4,0xa3c47:u16_0,0xa3d41:u16_2 */
    /* static-only queue: rank=92, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_a3a4b,function_a3dc9, span=905, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=92, retdec=function_a3a4b, share=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=8 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 8; retdec_tail=return is frame/result pointer after qword pointer step; ip_reads=+0x0/2,+0x4/2,+0x6/2,+0x2/2; frame_reads=0xa,0x170,0x199,0x23,0x10f; frame_writes=0x23,0x170,0xa; functions=function_a3a4b,function... */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RF+0x10f/8:mov;RIP+0x2/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 + U16(vm->ip + 0x2u) ^ 0x712d507bu;
    vm->flags = flags0 + state0 + 0x17082142u & 0x235dc980u;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0xa3dbd */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_213(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=213, native=0xa3dc7, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa3e42:u16_6,0xa3e7c:u16_0,0xa3eef:u16_4,0xa3f7e:u16_2 */
    /* static-only queue: rank=16, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_a3dc7, span=559, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=16, retdec=function_a3dc7, slot_status=state_effect_only_no_dispatch_return, ip_advance=8 */
    /* tier1 effects: ip += 8; retdec_tail=state = state0 + 0x45c6c3bb - s16(ip+2); word copy through pointer step; ip_reads=+0x6/2,+0x0/2,+0x4/2,+0x2/2; frame_reads=0xa,0x81,0x0,0x10f,0x194; frame_writes=0x170,0xa */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx;RF+0x194/1:mov */
    vm->state = state0 - U16(vm->ip + 0x2u) - 0x45c6c3bbu;
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0xa3fe0 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_214(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=214, native=0xa3fe9, class=static_validated, events=4, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0xd2;b1=0xbd;b2=0xb3;b3=0x3d;b4=0x01 */
    /* native IP reads: 0xa3ff3:byte0,0xa4022:byte0,0xa419f:byte0,0xa4271:byte0,0xa42e1:byte0,0xa4451:b2,0xa44bd:u16_3,0xa4576:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 ^ flags0 + 0x784f7133u ^ 0x7e64782u & 0x5bda5c23u + 0x352ca91cu | flags0 + 0x784f7133u & 0x4cc9d7bu & 0x79233229u - 0x234dc07au - 0x2ce4baeeu - 0x3231759eu - U16(vm->ip + 0x0u) + state0 ^ flags0 + 0x784f7133u ^ 0x7e64782u & 0x5bda5c23u + 0x352ca91cu | flags0 + 0x784f7133u & 0x4cc9d7bu & 0x79233229u - 0x234dc07au - 0x2ce4baeeu - 0x3231759eu - 0x74a805ebu;
    vm->flags = flags0 + 0x784f7133u & 0x4cc9d7bu & 0x79233229u - 0x234dc07au - 0x2ce4baeeu;
    /* slot variants: 4=(mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 + 0x784f7133u)))) ^ 0x7e64782u)) & 0x5bda5c23u)) + 0x352ca91cu)) | (mask32((mask32((mask32((mask32((mask32(flag...#62b71ea32ab9 */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 4=0x5u */
    /* observed top targets: 257@0xadbfd:4 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/4 */
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

static VMOpResult op_entry_216(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=216, native=0xa4a61, class=affine_dispatch_fallback, events=742, shape=VVECCCVVEC, delta=+0xa */
    /* operands: b0=var20(top=0x4e:12.4%);b1=var22(top=0x7e:12.3%);b2=enum4(0x31:732,0x33:4,0x34:3,0x36:3);b3=0x00;b4=0x80;b5=0x00;b6=var15(top=0x92:24.7%);b7=var12(top=0x34:24.8%);b8=enum4(0x07:371,0x02:278,0x03:91,0x01:2);b9=0x00 */
    /* native IP reads: 0xa4a7c:u32_6,0xa4aa7:u16_4,0xa4ad3:u32_0,0xa4ced:b0,0xa4d2f:u16_3,0xa4d85:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x1;RF+0x10f/8:mov;RIP+0x1/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 ^ flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) - (mask32(state0 ^ flags0)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 112=0x5u */
    /* observed top targets: 310@0xb8556:552,169@0x9af18:190 */
    /* validation: state_static=0.0%, dispatch_static=0.0%, dispatch_model=affine_robust_fallback:100.0%, transfer_expr=0.0%/112 */
    return r;
}

static VMOpResult op_entry_217(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=217, native=0xa4b11, class=static_validated, events=215, shape=CVVCC, delta=+0x5 */
    /* operands: b0=0x00;b1=var19(top=0x0c:29.8%);b2=var18(top=0x87:30.7%);b3=0x3d;b4=0x01 */
    /* native IP reads: 0xa4ced:b0,0xa4d2f:u16_3,0xa4d85:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x1;RF+0x10f/8:mov;RIP+0x1/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 ^ flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) - (mask32(state0 ^ flags0)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 198@0xa037e:70,352@0xc1ec4:66,144@0x95887:66,108@0x8f24b:7,173@0x9ba74:3,160@0x994cf:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_218(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=218, native=0xa4df7, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa4eb0:u16_2,0xa4f2b:byte0,0xa505c:b4,0xa50a2:u16_2,0xa5112:u16_0 */
    /* static-only queue: rank=46, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_a4df7, span=910, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=46, retdec=function_a4df7, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = (s16(ip+0) - (state0 & 0x0844d83d) ^ 0x77e8718e) | (state0 & 0x0844d83d); ip_reads=+0x2/2,+0x4/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x194,0x71,0x10f,0x170; frame_writes=0x71,0x170,0x60,0x0,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 & 0x844d83du | U16(vm->ip + 0x0u) - state0 & 0x844d83du ^ 0x77e8718eu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xa5171 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_219(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=219, native=0xa517b, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa5190:u32_0,0xa51e4:u32_0,0xa52f6:byte0,0xa5652:b0,0xa56d2:u16_1,0xa579f:u16_3,0xa57c4:u16_3 */
    /* static-only queue: rank=149, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch06.c, funcs=function_a517b,function_a522e, span=1816, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=149, retdec=function_a517b, callret=native_ret_frame_cell, slot_status=frame_cell_return_no_dispatch_slot, ip_advance=5 */
    /* tier4 effects: callret=native_ret_frame_cell; calls=0; rets=1; ip += 5; retdec_tail=primary returns frame[112]; overlap child is noisy predicate residue; ip_reads=+0x0/4,+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x170,0x81,0x71,0x23,0x0,0x60,0x194,0x10f; frame_writes=0x170,0x... */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 | flags0 + 0x46462807u & 0x2332d827u - flags0 - state0 | flags0 & 0x4297c9ddu + 0x6f8e6e16u ^ U16(vm->ip + 0x3u) - state0 | flags0 + 0x46462807u & 0x2332d827u - flags0 - state0 | flags0 & 0x4297c9ddu + 0x6f8e6e16u + 0x8f8037au;
    vm->flags = flags0 - state0;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xa587f */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_221(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=221, native=0xa5889, class=static_validated, events=4, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x53;b1=0x00;b2=0x08;b3=0x3d;b4=0x01 */
    /* native IP reads: 0xa5a4e:byte0,0xa5bb1:b0,0xa5c1a:u16_3,0xa5c8c:byte0,0xa5e4c:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x10f/8:mov;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 ^ U16(vm->ip + 0x1u);
    vm->flags = flags0;
    r.slot = (uint32_t)(U16(vm->ip + 0x1u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 4=0x5u */
    /* observed top targets: 256@0xad849:4 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/4 */
    return r;
}

static VMOpResult op_entry_222(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=222, native=0xa5f3c, class=static_validated, events=254, shape=VVVVE, delta=+0x5 */
    /* operands: b0=var60(top=0x10:25.6%);b1=var60(top=0xf8:25.2%);b2=var58(top=0xd9:25.2%);b3=var46(top=0x4e:25.2%);b4=enum4(0x3a:97,0x50:89,0x62:67,0x32:1) */
    /* native IP reads: 0xa5f50:byte0,0xa5ff1:byte0,0xa606c:byte0,0xa60ad:u16_0,0xa621b:b4,0xa633e:byte0,0xa63c2:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RF+0x10f/8:mov;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    /* vm->state = state0 + flags0 | 0x11da3648u & 0x169ceafau & U16(vm->ip + 0x0u) - state0 + flags0 | 0x11da3648u & 0x169ceafau + flags0 | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u | 0x39a63024u + flags0 | 0x5b15ab43u | 0x4cc95222u | 0x70d72f46u | 0x30319008u + 0x17d780cau ^ U16(vm->ip + 0x2u) + state0 + flags0 | 0x11da3648u & 0x169ceafau & U16(vm->ip + 0x0u) ...; */
    vm->flags = flags0;
    /* slot variants: 95=(mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) & 0x169ceafau)) & (mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32(state0 + (mask32(flags0 | 0x11da3648u)))) ...#748cb9dddd28 | 33=... */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 220@0xa522e:67,301@0xb708d:20,268@0xb0007:14,49@0x82820:13,28@0x7e390:12,43@0x8173d:11 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_223(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=223, native=0xa6470, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa6621:byte0,0xa6716:b2,0xa6742:u16_3,0xa67d0:u16_0 */
    /* static-only queue: rank=107, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_a6470,function_a68c4,function_a68ca, span=1115, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=107, retdec=function_a6470, share=primary_plus_empty_overlap_stubs, slot_status=noisy_dispatch_base_candidate, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=RetDec reads dispatch base but return algebra is heavily base/noise-mixed; ip_reads=+0x2/1,+0x3/2,+0x0/2; frame_reads=0x81,0x71,0xa,0x60,0x0,0x194,0x23,0x10f,0x170; frame_writes=0x170,0x71,0x60,0x... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 + 0x196a30fu & flags0 - U16(vm->ip + 0x0u) ^ state0 + 0x196a30fu & flags0 - 0x1f5fe778u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xa68b7 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_224(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=224, native=0xa68c2, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa6914:u16_5,0xa692a:u16_7,0xa6952:u16_1,0xa698f:u16_7,0xa69a7:u16_5,0xa6a84:u16_3 */
    /* static-only queue: rank=18, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_a68c2, span=580, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=18, retdec=function_a68c2, slot_status=state_effect_only_no_dispatch_return, ip_advance=9 */
    /* tier1 effects: ip += 9; retdec_tail=state = (state0 + s16(ip+3)) | state0; dword paired pointer step; ip_reads=+0x5/2,+0x7/2,+0x1/2,+0x3/2; frame_reads=0xa,0x170,0x199,0x23,0x0,0x10f,0x60; frame_writes=0x23,0x170,0xa */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14;RF+0x60/8:mov */
    vm->state = state0 | U16(vm->ip + 0x3u) + state0;
    vm->flags = flags0;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0xa6aef */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_225(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=225, native=0xa6af9, class=partial, events=6, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0xce;b1=0x13;b2=0x3d;b3=0x01;b4=0x87 */
    /* native IP reads: 0xa6b21:byte0,0xa6baa:u16_2,0xa6c17:byte0,0xa6cdf:b4,0xa6d27:u16_2,0xa6dd6:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 | flags0 & U16(vm->ip + 0x0u) ^ state0 | flags0;
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot] */
    /* observed top targets: 144@0x95887:6 */
    return r;
}

static VMOpResult op_entry_226(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=226, native=0xa6e55, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa6e70:u16_6,0xa6e96:u16_4,0xa6ec3:u32_0,0xa6f1e:u16_0,0xa6f43:u16_2,0xa6fb2:u16_0,0xa6fc7:u16_2,0xa6ff6:u16_9,0xa703c:u16_2,0xa704e:u16_0,0xa70de:b6,0xa7127:u16_7,0xa7188:u16_4 */
    /* static-only queue: rank=137, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_a6e55,function_a6f03,function_a6f79, span=950, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=137, retdec=function_a6e55, callret=native_double_ret_shared_prefix, slot_status=multi_ret_side_effect_no_dispatch_slot, ip_advance=11 */
    /* tier4 effects: callret=native_double_ret_shared_prefix; calls=0; rets=2; ip += 11; retdec_tail=prefix plus known child both return; native queue records two ret side-effect sites; ip_reads=+0x0/2,+0x2/2,+0x4/2,+0x6/2,+0x0/4,+0x9/2,+0x6/1,+0x7/2; frame_reads=0xa,0xbb,0x170... */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 | flags0 | state0 ^ 0x63e0134eu & U16(vm->ip + 0x4u) ^ 0x5537ca3fu;
    vm->flags = flags0;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xa71f4 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_227(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=227, native=0xa6f03, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa6f1e:u16_0,0xa6f43:u16_2,0xa6fb2:u16_0,0xa6fc7:u16_2,0xa6ff6:u16_9,0xa703c:u16_2,0xa704e:u16_0,0xa70de:b6,0xa7127:u16_7,0xa7188:u16_4 */
    /* static-only queue: rank=123, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_a6f03,function_a6f79, span=776, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=123, retdec=function_a6f03, callret=native_ret_result_prefix, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier4 effects: callret=native_ret_result_prefix; calls=0; rets=1; ip += 11; retdec_tail=primary copies frame value into operand-selected frame slot and returns result; ip_reads=+0x0/2,+0x2/2,+0x9/2,+0x6/1,+0x7/2,+0x4/2; frame_reads=0xa,0x170,0x199,0x23,0x10f; frame_writes... */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 | flags0 | state0 ^ 0x63e0134eu & U16(vm->ip + 0x4u) ^ 0x5537ca3fu;
    vm->flags = flags0;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xa71f4 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_228(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=228, native=0xa6f79, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa6fb2:u16_0,0xa6fc7:u16_2,0xa6ff6:u16_9,0xa703c:u16_2,0xa704e:u16_0,0xa70de:b6,0xa7127:u16_7,0xa7188:u16_4 */
    /* static-only queue: rank=23, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_a6f79, span=658, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=23, retdec=function_a6f79, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=state = (s16(ip+4) ^ 0x5537ca3f) & state_after_flag_or; dword compare/pointer step; ip_reads=+0x0/2,+0x2/2,+0x9/2,+0x6/1,+0x7/2,+0x4/2; frame_reads=0xa,0x170,0x199,0x23,0x10f; frame_writes=0x170,0x23,0xa */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x4;RIP+0x4/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 | flags0 | state0 ^ 0x63e0134eu & U16(vm->ip + 0x4u) ^ 0x5537ca3fu;
    vm->flags = flags0;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xa71f4 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_229(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=229, native=0xa71fe, class=partial, events=1, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=0x00;b3=0x59;b4=0x47 */
    /* native IP reads: 0xa7314:byte0,0xa7338:byte0,0xa739d:byte0,0xa7403:byte0,0xa7412:byte0,0xa7429:b2,0xa7456:u16_0,0xa74d5:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 ^ flags0 ^ 0x4a304ad7u - U16(vm->ip + 0x3u) ^ state0 ^ flags0 ^ 0x4a304ad7u ^ 0x381ae5a5u;
    vm->flags = flags0 + state0 ^ flags0 & 0x1d6aa55eu;
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot] */
    /* observed top targets: 352@0xc1ec4:1 */
    return r;
}

static VMOpResult op_entry_230(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=230, native=0xa757f, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa769b:byte0,0xa77dc:b4,0xa7845:u16_0,0xa78bf:u16_2,0xa78e3:u16_2 */
    /* static-only queue: rank=98, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_a757f,function_a799e, span=1065, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=98, retdec=function_a757f, share=primary_plus_empty_overlap_stub, slot_status=noisy_dispatch_base_candidate, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=RetDec reads dispatch base but return subtracts masked low-slot residue; ip_reads=+0x4/1,+0x0/2,+0x2/2; frame_reads=0x81,0x71,0x0,0xa,0x60,0x23,0x194,0x170,0x10f; frame_writes=0x170,0x23,0x71,0x60,... */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 & flags0 | 0x7e6d6467u + 0x2e32a3a2u | U16(vm->ip + 0x2u) ^ 0x272d9a0bu;
    vm->flags = flags0 + 0x7d62f0e1u - 0x45a3d753u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xa7992 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_231(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=231, native=0xa799b, class=static_validated, events=4, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=0x03;b3=0x6c;b4=0xa7 */
    /* native IP reads: 0xa7a09:byte0,0xa7a85:byte0,0xa7b45:byte0,0xa7bf8:byte0,0xa7cd2:b2,0xa7d4c:u16_0,0xa7e09:u16_3,0xa7e89:u16_3 - state0 + flags0 + 0x37d0b9a9 ^ 0x6307e167 + flags0 + 0x37d0b9a9 ^ 0x6307e167 ^ 0x69e2cccd ^ 0x500184b - 0x796ead7f + 0x5041c185 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 + flags0 + 0x37d0b9a9u ^ 0x6307e167u + flags0 + 0x37d0b9a9u ^ 0x6307e167u ^ 0x69e2cccdu ^ 0x500184bu - 0x796ead7fu & U16(vm->ip + 0x3u) - state0 + flags0 + 0x37d0b9a9u ^ 0x6307e167u + flags0 + 0x37d0b9a9u ^ 0x6307e167u ^ 0x69e2cccdu ^ 0x500184bu - 0x796ead7fu + 0x5041c185u;
    vm->flags = flags0 + 0x37d0b9a9u ^ 0x6307e167u + state0 + flags0 + 0x37d0b9a9u ^ 0x6307e167u + flags0 + 0x37d0b9a9u ^ 0x6307e167u & 0x65be02aeu - 0x474578d0u;
    /* slot variants: 4=(mask32((mask32(U16(vm->ip + 0x3u) - (mask32((mask32((mask32((mask32((mask32(state0 + (mask32((mask32(flags0 + 0x37d0b9a9u)) ^ 0x6307e167u)))) + (mask32((mask32(flags0 + 0x37d0b9a9u)) ^ 0x6307e167u)))) ^ 0x69e2cccdu)) ^ 0...#e7a757642793 */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 4=0x5u */
    /* observed top targets: 198@0xa037e:4 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/4 */
    return r;
}

static VMOpResult op_entry_232(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=232, native=0xa7ef8, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa7f64:u16_1,0xa7f8a:u16_7,0xa7fc7:u16_5,0xa8058:u16_7,0xa8076:u16_1,0xa8142:u16_3 */
    /* static-only queue: rank=69, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_a7ef8,function_a81c4, span=726, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=69, retdec=function_a7ef8, split=primary_before_large_neighbor_body, slot_status=retdec_dispatch_table_slot, ip_advance=9 */
    /* tier2 effects: split=primary_before_large_neighbor_body; ip += 9; retdec_tail=state = state0 - (flags0 ^ 0x4821c1c7) - 0x231e4204 - u16(ip+3); byte pointer step; ip_reads=+0x1/2,+0x7/2,+0x5/2,+0x3/2; frame_reads=0xa,0x81,0x199,0x23,0x10f; frame_writes=0x170,0xa; functions... */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 - flags0 ^ 0x4821c1c7u - U16(vm->ip + 0x3u) + 0x231e4204u;
    r.slot = (uint32_t)(U16(vm->ip + 0x3u) + 0x4204u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier2 static slot recovered from a split RetDec primary tail; dynamic source-row validation is still absent. */
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0xa81ba */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_233(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=233, native=0xa81c4, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa81df:u16_0,0xa8207:u16_2,0xa8277:u16_3,0xa8284:u16_9,0xa82ae:u16_5,0xa82f8:u16_9,0xa8306:u16_3,0xa8369:b2,0xa8396:u16_7,0xa83e2:u16_0 */
    /* static-only queue: rank=122, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_a81c4,function_a823e, span=664, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=122, retdec=function_a81c4, callret=native_ret_result_prefix, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier4 effects: callret=native_ret_result_prefix; calls=0; rets=1; ip += 11; retdec_tail=primary copies pointee into operand-selected frame slot and returns result; ip_reads=+0x0/2,+0x3/2,+0x9/2,+0x2/2,+0x5/2,+0x2/1,+0x7/2; frame_reads=0xa,0x199,0x81,0x10f,0x170; frame_wri... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 | U16(vm->ip + 0x0u) ^ state0 + 0x6352399cu;
    vm->flags = flags0 + 0x61761155u;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xa8447 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_234(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=234, native=0xa823e, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa8277:u16_3,0xa8284:u16_9,0xa82ae:u16_5,0xa82f8:u16_9,0xa8306:u16_3,0xa8369:b2,0xa8396:u16_7,0xa83e2:u16_0 */
    /* static-only queue: rank=15, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_a823e, span=542, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=15, retdec=function_a823e, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=state = ((state0 ^ s16(ip+0)) + 0x6352399c) | state0; byte compare/pointer step; ip_reads=+0x3/2,+0x9/2,+0x5/2,+0x2/1,+0x7/2,+0x0/2; frame_reads=0xa,0x199,0x81,0x10f,0x170; frame_writes=0x23,0x170,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 | U16(vm->ip + 0x0u) ^ state0 + 0x6352399cu;
    vm->flags = flags0 + 0x61761155u;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xa8447 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_235(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=235, native=0xa8450, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa852a:u16_3,0xa85b4:byte0,0xa865b:b2,0xa868a:u16_3,0xa8740:u16_0 */
    /* static-only queue: rank=41, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_a8450, span=883, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=41, retdec=function_a8450, slot_status=masked_return_slot_requires_g3, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = state0 + (state0 + s16(ip+0)); return is masked by g3; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x170,0x194,0x71,0x10f; frame_writes=0x71,0x60,0x0,0x170,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 + U16(vm->ip + 0x0u) + state0;
    /* tier1 slot expression kept comment-only: (state0 + s16(ip+0)) & g3_mask */
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xa87ad */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_236(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=236, native=0xa87b6, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa88f7:byte0,0xa89c4:byte0,0xa8ae3:byte0,0xa8c25:b2,0xa8cb1:u16_3,0xa8d6f:u16_0 */
    /* static-only queue: rank=117, tier=tier5_large_static_replay, sidecar=vm_unobserved_handlers_retdec_batch06.c, funcs=function_a87b6, span=1654, action=defer_until_small_static_handlers_are_inlined */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 ^ flags0 & state0 ^ 0x630a2958u ^ 0x7d6f69f0u - 0x350e18e3u ^ 0x55d05067u - flags0 & state0 ^ 0x630a2958u ^ 0x7d6f69f0u - 0x350e18e3u ^ 0x55d05067u | 0x696679a3u | U16(vm->ip + 0x0u) + state0 ^ flags0 & state0 ^ 0x630a2958u ^ 0x7d6f69f0u - 0x350e18e3u ^ 0x55d05067u - flags0 & state0 ^ 0x630a2958u ^ 0x7d6f69f0u - 0x350e18e3u ^ 0x55d05067u | 0x696679a3u - 0x292b93dcu;
    vm->flags = flags0 & state0 ^ 0x630a2958u ^ 0x7d6f69f0u - 0x350e18e3u ^ 0x55d05067u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xa8e16 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_237(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=237, native=0xa8e1f, class=static_validated, events=1537, shape=VVVCC, delta=+0x5 */
    /* operands: b0=var26(top=0x00:89.4%);b1=var137(top=0x66:16.8%);b2=var159(top=0x6d:16.9%);b3=0x3d;b4=0x01 */
    /* native IP reads: 0xa8ffb:byte0,0xa90a6:b0,0xa916a:u16_3,0xa91f5:byte0,0xa9322:byte0,0xa93e9:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu ^ U16(vm->ip + 0x1u) ^ state0 - flags0 ^ 0x22900c8u - flags0 + 0x3fbeaa1du ^ 0x8178b71u - 0x4813dbcu - 0x4f4105f2u;
    vm->flags = flags0 + 0x3fbeaa1du ^ 0x3a5f03fau;
    /* slot variants: 117=(mask32((mask32(U16(vm->ip + 0x1u) ^ (mask32((mask32((mask32(state0 - (mask32(flags0 ^ 0x22900c8u)))) - (mask32((mask32(flags0 + 0x3fbeaa1du)) ^ 0x8178b71u)))) - 0x4813dbcu)))) - 0x4f4105f2u)) & 0xffffu | 11=(mask32((mask32(U16(vm->ip + 0x1u) ^ (mask32(... */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 352@0xc1ec4:472,108@0x8f24b:350,144@0x95887:218,160@0x994cf:173,256@0xad849:150,257@0xadbfd:77 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_238(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=238, native=0xa94a5, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xa960a:byte0,0xa96b4:b2,0xa96df:u16_0,0xa9839:u16_3,0xa9850:u16_3 */
    /* static-only queue: rank=112, tier=tier5_large_static_replay, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_a94a5, span=1155, action=defer_until_small_static_handlers_are_inlined */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 | flags0 & 0x5077208fu - flags0 & 0x5077208fu & 0x7d76c5bau ^ U16(vm->ip + 0x3u) + 0x48a4c63eu;
    vm->flags = flags0 & 0x5077208fu & 0x7d76c5bau;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xa9915 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_240(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=240, native=0xa9cf7, class=static_validated, events=7, shape=ECCEE, delta=+0x5 */
    /* operands: b0=enum2(0x99:5,0xb9:2);b1=0x3d;b2=0x01;b3=enum2(0x62:5,0x87:2);b4=enum2(0x9f:5,0x27:2) */
    /* native IP reads: 0xa9da3:u16_1,0xa9e24:byte0,0xa9ec5:byte0,0xa9ed1:b0,0xa9efe:u16_1,0xa9f74:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 - U16(vm->ip + 0x3u) - state0 - 0x7bec2197u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - state0)) - 0x7bec2197u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 5=0x5u */
    /* observed top targets: 173@0x9ba74:5,108@0x8f24b:2 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/5 */
    return r;
}

static VMOpResult op_entry_241(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=241, native=0xa9ffa, class=affine_dispatch_fallback, events=2, shape=EEECCCCCCCCEE, delta=+0xd */
    /* operands: b0=enum2(0x1e:1,0xc6:1);b1=enum2(0x1e:1,0xf1:1);b2=enum2(0x02:1,0x05:1);b3=0x00;b4=0x80;b5=0x00;b6=0x3d;b7=0x01;b8=0x22;b9=0xe8;b10=0x01;b11=enum2(0x0a:1,0xb6:1);...+1 */
    /* native IP reads: 0xaa05a:u16_6,0xaa0a5:b8,0xaa6f8:u32_0,0xaa726:u16_4,0xaa778:u16_9,0xaa7ce:u16_11 */
    /* decode signature: IPADV+0xb;RIP+0xb/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0xb;RIP+0xb/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 - U16(vm->ip + 0xbu) + state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0xbu) + state0)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xd;
    /* dispatch: next = dispatch_table[slot]; ip += 1=0xdu */
    /* observed top targets: 333@0xbd8af:1,66@0x855ff:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=affine_single_fallback:100.0%, transfer_expr=100.0%/1 */
    return r;
}

static VMOpResult op_entry_242(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=242, native=0xaa87d, class=static_validated, events=181, shape=CCVVV, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=var15(top=0xb3:50.8%);b3=var17(top=0xef:50.8%);b4=var16(top=0x3b:50.8%) */
    /* native IP reads: 0xaa94e:byte0,0xaaa3f:b2,0xaaa7b:u16_0,0xaaad5:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 | U16(vm->ip + 0x3u) - state0 ^ 0x5c05e9b5u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - state0)) ^ 0x5c05e9b5u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 43=0x5u */
    /* observed top targets: 75@0x873fc:92,246@0xab427:38,145@0x95b5c:33,199@0xa0631:9,334@0xbdd18:4,210@0xa2da3:2 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/43 */
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

static VMOpResult op_entry_244(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=244, native=0xaaf3e, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xaaf7b:u16_7,0xaaf86:u16_0,0xaafb8:u16_5,0xab001:u16_0,0xab00f:u16_7,0xab0d7:u16_2 */
    /* static-only queue: rank=13, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_aaf3e, span=528, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=13, retdec=function_aaf3e, slot_status=state_pointer_return_no_dispatch_slot, ip_advance=9 */
    /* tier1 effects: ip += 9; retdec_tail=word copy through paired pointer step; flags optionally adjusted; ip_reads=+0x7/2,+0x0/2,+0x5/2,+0x2/2; frame_reads=0xa,0x170,0x0,0x199,0x23,0x10f; frame_writes=0x23,0xa */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0;
    vm->flags = flags0 + 0xf381b41u + 0x428b3a33u;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0xab137 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_245(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=245, native=0xab141, class=static_validated, events=75, shape=VVCCV, delta=+0x5 */
    /* operands: b0=var17(top=0xcb:34.7%);b1=var18(top=0x13:34.7%);b2=0x3d;b3=0x01;b4=var16(top=0xdf:45.3%) */
    /* native IP reads: 0xab254:byte0,0xab2d9:b4,0xab305:u16_2,0xab397:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 ^ U16(vm->ip + 0x0u) + state0 ^ 0x3a835417u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) + state0)) ^ 0x3a835417u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 12=0x5u */
    /* observed top targets: 316@0xb987b:28,145@0x95b5c:28,75@0x873fc:12,210@0xa2da3:3,334@0xbdd18:3,43@0x8173d:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/12 */
    return r;
}

static VMOpResult op_entry_246(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=246, native=0xab427, class=sampled_only, events=39, shape=sampled, delta=+0x78 */
    /* native IP reads: 0xab493:u16_8,0xab4d8:b10,0xabb35:u16_0,0xabbb5:u32_4,0xabbc1:u32_4 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add;JMP:r9 */
    vm->state = state0;
    r.slot = U32(vm->ip + 0x0);
    r.next_entry = vm_entry_from_slot_index(r.slot);
    vm->ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* long-control operands: target_u32@+0, signed delta_u32@+4 */
    /* dispatch: 25=next = dispatch_table[165], ip += 0x78u | 3=next = dispatch_table[165], ip += 0x792u */
    /* observed top targets: 165@0x9a24c:31,354@0xc2241:6,171@0x9b4b3:2 */
    /* validation: long_branch=39/12, long_branch_len=39=0xb */
    return r;
}

static VMOpResult op_entry_247(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=247, native=0xabd6f, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xabdcf:u16_3,0xabe09:b2,0xac08e:u16_0 */
    /* static-only queue: rank=50, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_abd6f, span=941, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=50, retdec=function_abd6f, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = (s16(ip+0) + 0x4c044f6f + state0) ^ state0; predicate scratch side effects present; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x10f,0x170,0x81; frame_writes=0x199,0x170,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RF+0x10f/8:mov;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx;RF+0x81/8:mov */
    vm->state = state0 ^ U16(vm->ip + 0x0u) + state0 + 0x4c044f6fu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xac107 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_248(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=248, native=0xac110, class=static_validated, events=20, shape=EEEE, delta=+0x4 */
    /* operands: b0=enum7(0x8a:9,0x60:4,0xa7:2,0x8c:2,0x3b:1,0xcd:1);b1=enum7(0xf8:9,0x74:4,0xb6:2,0xea:2,0xe6:1,0x7d:1);b2=enum6(0x7b:9,0x2b:4,0x83:4,0x8b:1,0xa3:1,0xfb:1);b3=enum5(0x0e:9,0x03:6,0x02:2,0x05:2,0x0c:1) */
    /* native IP reads: 0xac191:u16_0,0xac392:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 ^ flags0 - state0 | 0x5188b16eu & 0x6764746au - state0 ^ 0x46157a61u + 0x17fe21adu ^ 0x35ad1d25u - 0x496039c5u ^ U16(vm->ip + 0x2u) ^ 0x4160066bu;
    vm->flags = flags0 - state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ 0x4160066bu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 15=0x4u */
    /* observed top targets: 258@0xadf2c:9,168@0x9aa83:4,189@0x9e7af:2,157@0x98a9a:2,124@0x91e81:1,345@0xc02e4:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/15 */
    return r;
}

static VMOpResult op_entry_249(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=249, native=0xac440, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xac51f:u16_9,0xac530:u16_4,0xac5ac:u16_2,0xac64b:u16_9,0xac64f:u16_4,0xac6de:b8,0xac72a:u16_6,0xac77a:u16_0 */
    /* static-only queue: rank=104, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_ac440,function_ac804,function_ac807, span=975, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=104, retdec=function_ac440, share=primary_plus_empty_overlap_stubs, slot_status=retdec_raw_mod_slot, ip_advance=11 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 11; retdec_tail=RetDec return is raw modulo slot without dispatch base; ip_reads=+0x9/2,+0x4/2,+0x2/2,+0x8/1,+0x6/2,+0x0/2; frame_reads=0xa,0x81,0x23,0x199,0x10f,0x170; frame_writes=0x23,0x170,0xa; functions=fun... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11;RF+0x81/8:mov */
    vm->state = state0 - U16(vm->ip + 0x0u) - state0 + 0x4522afcau;
    vm->flags = flags0;
    /* tier3 slot expression kept comment-only: ((s16(ip+0) - state0 + 0x4522afca) & 0xffff) */
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xac7f8 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_250(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=250, native=0xac802, class=static_validated, events=75, shape=CEE, delta=+0x3 */
    /* operands: b0=0x62;b1=enum6(0xd8:64,0x9e:4,0x99:3,0xf9:2,0x12:1,0x28:1);b2=enum6(0xc4:64,0x09:4,0x77:3,0x01:2,0x52:1,0x14:1) */
    /* native IP reads: 0xac88b:byte0,0xac8e2:b0,0xacaec:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 ^ flags0 + flags0 ^ flags0 | 0x75c2d7adu + 0x3d28c7fcu - 0xb911f97u | U16(vm->ip + 0x1u) - state0 ^ flags0 + flags0 ^ flags0 | 0x75c2d7adu + 0x3d28c7fcu - 0xb911f97u + 0x71ad6fc6u;
    vm->flags = flags0 & 0x68a0e4dau + 0x40c8070au - 0x1d26ca9du - 0xc88b898u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x1u) - (mask32((mask32((mask32((mask32((mask32(state0 ^ flags0)) + flags0)) ^ (mask32(flags0 | 0x75c2d7adu)))) + 0x3d28c7fcu)) - 0xb911f97u)))) + 0x71ad6fc6u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 72=0x3u */
    /* observed top targets: 43@0x8173d:71,196@0x9fbcd:3,157@0x98a9a:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/72 */
    return r;
}

static VMOpResult op_entry_251(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=251, native=0xacbc5, class=static_validated, events=39, shape=CCEEE, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=enum2(0x83:22,0x1f:17);b3=enum2(0x39:22,0xef:17);b4=enum2(0x06:22,0xa5:17) */
    /* native IP reads: 0xacc7d:u16_0,0xacca6:byte0,0xacda4:b2,0xacdfe:u16_0,0xace7a:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi;RF+0xa/8:mov */
    vm->state = state0 & U16(vm->ip + 0x3u) - state0 ^ 0x7cf1b821u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) - state0)) ^ 0x7cf1b821u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 17=0x5u */
    /* observed top targets: 108@0x8f24b:22,198@0xa037e:17 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/17 */
    return r;
}

static VMOpResult op_entry_252(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=252, native=0xacefd, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xacf11:u32_0,0xacf65:u32_0,0xacfc8:byte0,0xad0b4:u32_2,0xad292:u16_0 */
    /* static-only queue: rank=134, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_acefd,function_acfb1, span=1081, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=134, retdec=function_acefd, callret=native_ret_frame_cell, slot_status=frame_cell_return_no_dispatch_slot, ip_advance=6 */
    /* tier4 effects: callret=native_ret_frame_cell; calls=0; rets=1; ip += 6; retdec_tail=primary returns frame[112]; overlap child is noisy predicate residue; ip_reads=+0x0/4,+0x2/4,+0x0/2; frame_reads=0x81,0xa,0x170,0x23,0x0,0x194,0x10f; frame_writes=0x170,0x23,0x1dc,0x60,0xa... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 | 0x764111b0u + 0x6d2270cbu + U32(vm->ip + 0x2u) ^ flags0 + flags0 | 0x62c3b0ddu | 0x2b96d1d1u & 0x2d46e2e3u ^ U16(vm->ip + 0x0u) + 0x7c5d4802u;
    vm->flags = flags0;
    vm->ip += 0x6;
    /* IP advance recovered from native tail site: tail_ip_add@0xad322 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_255(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=255, native=0xad768, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xad789:u16_2,0xad794:u16_6,0xad7bb:u16_0,0xad80e:u16_4 */
    /* static-only queue: rank=2, tier=tier0_single_function_small_static_replay, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_ad768, span=238, action=inline_retdec_function_into_handler_model */
    /* tier0 static model: rank=2, retdec=function_ad768, slot_status=retdec_return_slot, ip_advance=8 */
    /* tier0 effects: qword store through frame[s16(ip+6)]; pointer step by frame[s16(ip+0)] sign; ip += 8 */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0;
    /* tier0 slot expression not executable in VMState model: (s16(ip+4) - state0) & g3_mask */
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0xad840 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_259(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=259, native=0xae332, class=partial, events=1, shape=CCCCCCCCCC, delta=+0xa */
    /* operands: b0=0xe0;b1=0x00;b2=0xff;b3=0xff;b4=0x13;b5=0x05;b6=0x00;b7=0x00;b8=0xec;b9=0xfa */
    /* native IP reads: 0xae4e8:byte0,0xae526:u32_2,0xae7f9:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    /* vm->state = state0 | flags0 ^ 0x5b05419cu + 0x792f3332u ^ 0x8bcb284u - 0x36b43160u ^ 0x674120feu - 0x57f37797u | 0x5190c117u + 0x5ad08ad1u & U32(vm->ip + 0x2u) - state0 | flags0 ^ 0x5b05419cu + 0x792f3332u ^ 0x8bcb284u - 0x36b43160u ^ 0x674120feu - 0x57f37797u | 0x5190c117u + 0x5ad08ad1u + flags0 ^ 0x5b05419cu + 0x792f3332u ^ 0x8bcb284u - 0x36b43160u ^ 0x674120feu - ...; */
    vm->flags = flags0 ^ 0x5b05419cu + 0x792f3332u ^ 0x8bcb284u - 0x36b43160u ^ 0x674120feu - 0x57f37797u;
    vm->ip += 0xa;
    /* dispatch: next = dispatch_table[slot] */
    /* observed top targets: 28@0x7e390:1 */
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

static VMOpResult op_entry_261(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=261, native=0xaeda2, class=static_validated, events=1074, shape=CCVECC, delta=+0x6 */
    /* operands: b0=0xe8;b1=0x01;b2=var13(top=0x67:30.3%);b3=enum8(0x6d:289,0x66:215,0x6c:193,0x68:145,0x63:115,0x69:97);b4=0x3d;b5=0x01 */
    /* native IP reads: 0xaede7:u16_4,0xaee29:u16_0,0xaee8d:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 + U16(vm->ip + 0x2u) + 0x4c539d29u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) + 0x4c539d29u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x6u */
    /* observed top targets: 114@0x90319:215,297@0xb64d7:189,347@0xc088d:184,18@0x7be9b:110,337@0xbec0e:101,215@0xa4609:95 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_262(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=262, native=0xaef02, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xaef49:u16_2,0xaef4d:u16_4,0xaefa9:u16_0,0xaf05a:u16_4,0xaf06c:u16_2,0xaf0e1:byte0,0xaf132:b10,0xaf176:u16_6,0xaf1ec:u16_8 */
    /* static-only queue: rank=42, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_aef02, span=888, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=42, retdec=function_aef02, slot_status=retdec_dispatch_table_slot, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=state = state0 + flags0; qword compare/pointer step before dispatch-table load; ip_reads=+0x2/2,+0x4/2,+0x0/2,+0xa/1,+0x6/2,+0x8/2; frame_reads=0xa,0x170,0x199,0x194,0x23,0x10f; frame_writes=0x170,0xa */
    /* decode signature: IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;RF+0x170/4:mov */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13;RF+0x170/4:mov */
    vm->state = state0 + flags0;
    r.slot = (uint32_t)((state0 + flags0 + 0x8f09u + ((int32_t)S16(vm->ip + 0x8u))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier1 static slot recovered from a clean RetDec dispatch-table tail; dynamic source-row validation is still absent. */
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xaf263 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_263(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=263, native=0xaf26d, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xaf2b7:u16_4,0xaf301:u16_9,0xaf32e:u16_6,0xaf378:u16_4,0xaf383:u16_9,0xaf3d4:b8,0xaf401:u16_2,0xaf465:u16_0 */
    /* static-only queue: rank=64, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_af26d,function_af4d1, span=620, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=64, retdec=function_af26d, split=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier2 effects: split=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=state = state0 - (s16(ip+0) ^ 0x6d9939f2); dword compare/pointer step; ip_reads=+0x4/2,+0x9/2,+0x6/2,+0x8/1,+0x2/2,+0x0/2; frame_reads=0xa,0x170,0x23,0x199,0x0,0x10f; frame_writes=0x23,0x170,0xa; ... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 - U16(vm->ip + 0x0u) ^ 0x6d9939f2u;
    vm->flags = flags0 & state0 ^ 0x4b7234eeu & 0x494c6a1au ^ 0x2b390569u;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xaf4c5 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_264(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=264, native=0xaf4cf, class=affine_dispatch_fallback, events=291, shape=VVECCCVVEC, delta=+0xa */
    /* operands: b0=var15(top=0x65:31.3%);b1=var14(top=0x89:31.3%);b2=enum5(0x31:274,0x26:8,0x34:6,0x36:2,0x33:1);b3=0x00;b4=0x80;b5=0x00;b6=var12(top=0xb6:31.3%);b7=var9(top=0x34:62.5%);b8=enum4(0x07:189,0x02:93,0x01:8,0x48:1);b9=0x00 */
    /* native IP reads: 0xaf4ea:u32_6,0xaf515:u16_4,0xaf541:u32_0,0xaf5b8:u16_24,0xaf5de:u16_26,0xaf604:u16_18,0xaf62a:u16_10,0xaf64f:u16_22,0xaf674:u16_14,0xaf69a:u16_20,0xaf6be:u16_12,0xaf6e3:u16_6,0xaf709:u16_0,0xaf72d:u16_2,0xaf74e:u16_30,0xaf771:u16_32,0xaf795:u16_4,0xaf7c9:u... */
    /* decode signature: IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 & U16(vm->ip + 0x8u) + state0 - 0x6fba3362u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x8u) + state0)) - 0x6fba3362u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x22;
    /* dispatch: next = dispatch_table[slot]; ip += 49=0x22u */
    /* observed top targets: 169@0x9af18:191,310@0xb8556:100 */
    /* validation: state_static=0.0%, dispatch_static=0.0%, dispatch_model=affine_robust_fallback:100.0%, transfer_expr=0.0%/49 */
    return r;
}

static VMOpResult op_entry_265(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=265, native=0xaf57f, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xaf5b8:u16_24,0xaf5de:u16_26,0xaf604:u16_18,0xaf62a:u16_10,0xaf64f:u16_22,0xaf674:u16_14,0xaf69a:u16_20,0xaf6be:u16_12,0xaf6e3:u16_6,0xaf709:u16_0,0xaf72d:u16_2,0xaf74e:u16_30,0xaf771:u16_32,0xaf795:u16_4,0xaf7c9:u16_28,0xaf7ee:u16_16,0xaf86c:u16_8 */
    /* static-only queue: rank=121, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_af57f, span=826, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=121, retdec=function_af57f, callret=native_call_side_effect_collapsed_by_retdec, slot_status=state_effect_only_no_dispatch_return, ip_advance=34 */
    /* tier4 effects: callret=native_call_side_effect_collapsed_by_retdec; calls=2; rets=0; ip += 34; retdec_tail=RetDec exposes state update and ip += 34; native skeleton still has call side effects; ip_reads=+0x18/2,+0x1a/2,+0x12/2,+0xa/2,+0x16/2,+0xe/2,+0x14/2,+0xc/2,+0x6/2,+... */
    /* decode signature: IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 & U16(vm->ip + 0x8u) + state0 - 0x6fba3362u;
    vm->ip += 0x22;
    /* IP advance recovered from native tail site: tail_ip_add@0xaf8a5 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_266(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=266, native=0xaf8af, class=sampled_only, events=200, shape=sampled, delta=-0x2e8 */
    /* native IP reads: 0xaf8f7:u16_0,0xaf993:u32_4,0xaf99e:u32_4 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add;JMP:rdx */
    vm->state = state0;
    r.slot = U32(vm->ip + 0x0);
    r.next_entry = vm_entry_from_slot_index(r.slot);
    vm->ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* long-control operands: target_u32@+0, signed delta_u32@+4 */
    /* dispatch: 125=next = dispatch_table[354], ip -= 0x2e8u | 52=next = dispatch_table[171], ip -= 0x40u */
    /* observed top targets: 354@0xc2241:135,171@0x9b4b3:57,165@0x9a24c:8 */
    /* validation: long_branch=200/13, long_branch_len=200=0x8 */
    return r;
}

static VMOpResult op_entry_267(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=267, native=0xafa1f, class=static_validated, events=4, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0xb7;b1=0xce;b2=0xc9;b3=0x3d;b4=0x01 */
    /* native IP reads: 0xafa48:byte0,0xafb43:byte0,0xafcf3:b2,0xafd7b:u16_3,0xafe94:byte0,0xaff0a:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    /* vm->state = state0 & 0x22c7ea36u | flags0 | 0x10c4506bu ^ 0x5cdc1fadu + 0x50bb45dbu - 0x13e853feu & flags0 | 0x10c4506bu ^ 0x5cdc1fadu + 0x50bb45dbu - 0x13e853feu & 0x18f9e0e8u - 0x376fe1fdu | 0x2bce070cu + U16(vm->ip + 0x0u) + state0 & 0x22c7ea36u | flags0 | 0x10c4506bu ^ 0x5cdc1fadu + 0x50bb45dbu - 0x13e853feu & flags0 | 0x10c4506bu ^ 0x5cdc1fadu + 0x50bb45dbu - 0x...; */
    vm->flags = flags0;
    /* slot variants: 4=(mask32((mask32(U16(vm->ip + 0x0u) + (mask32((mask32((mask32(state0 & 0x22c7ea36u)) | (mask32((mask32((mask32((mask32(flags0 | 0x10c4506bu)) ^ 0x5cdc1fadu)) + 0x50bb45dbu)) - 0x13e853feu)))) & (mask32((mask32((mask32((mas...#0259b23c4ee7 */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 4=0x5u */
    /* observed top targets: 144@0x95887:4 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/4 */
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

static VMOpResult op_entry_270(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=270, native=0xb0930, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb094b:u32_0,0xb0976:u16_4,0xb0aa7:u32_0,0xb0c8e:byte0,0xb0d49:u16_8 */
    /* static-only queue: rank=143, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_b0930,function_b09ab,function_b0e32, span=1289, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=143, retdec=function_b0930, callret=native_ret_prefix_over_helper_call_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=10 */
    /* tier4 effects: callret=native_ret_prefix_over_helper_call_stub; calls=0; rets=1; ip += 10; retdec_tail=primary writes frame[187]+operand into destination; later overlap stub calls external helper; ip_reads=+0x0/4,+0x4/2,+0x0/8,+0x8/2; frame_reads=0xa,0x23,0x170,0x81,0x0,0... */
    /* decode signature: IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x8;RF+0x10f/8:mov;RIP+0x8/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 - flags0 ^ flags0 ^ 0x50b7f0a2u & 0x409cc142u | 0x3d990ad0u - flags0 - 0x20f67834u + 0x5bab660u & 0x52dfbf43u & U16(vm->ip + 0x8u) ^ state0 - flags0 ^ flags0 ^ 0x50b7f0a2u & 0x409cc142u | 0x3d990ad0u - flags0 - 0x20f67834u + 0x5bab660u & 0x52dfbf43u;
    vm->flags = flags0 - 0x20f67834u + 0x5bab660u & 0x52dfbf43u;
    vm->ip += 0xa;
    /* IP advance recovered from native tail site: tail_ip_add@0xb0e26 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_271(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=271, native=0xb09ab, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb0aa7:u32_0,0xb0c8e:byte0,0xb0d49:u16_8 */
    /* static-only queue: rank=102, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_b09ab,function_b0e32, span=1166, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=102, retdec=function_b09ab, share=primary_plus_empty_overlap_stub, slot_status=constant_pointer_return_no_dispatch_slot, ip_advance=10 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 10; retdec_tail=return is frame plus constant offset; ip_reads=+0x0/4,+0x0/8,+0x8/2; frame_reads=0x23,0x170,0xa,0x81,0x0,0x194,0x10f; frame_writes=0x170,0x23,0x60,0xa; functions=function_b09ab,function_b0e32; ran... */
    /* decode signature: IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x8;RF+0x10f/8:mov;RIP+0x8/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 - flags0 ^ flags0 ^ 0x50b7f0a2u & 0x409cc142u | 0x3d990ad0u - flags0 - 0x20f67834u + 0x5bab660u & 0x52dfbf43u & U16(vm->ip + 0x8u) ^ state0 - flags0 ^ flags0 ^ 0x50b7f0a2u & 0x409cc142u | 0x3d990ad0u - flags0 - 0x20f67834u + 0x5bab660u & 0x52dfbf43u;
    vm->flags = flags0 - 0x20f67834u + 0x5bab660u & 0x52dfbf43u;
    vm->ip += 0xa;
    /* IP advance recovered from native tail site: tail_ip_add@0xb0e26 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_272(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=272, native=0xb0e30, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb0e95:u16_6,0xb0eac:u16_4,0xb0f09:u16_8,0xb0f8e:u16_6,0xb0fcb:u16_4,0xb106b:b10,0xb10a7:u16_2,0xb1156:u16_0 */
    /* static-only queue: rank=48, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_b0e30, span=935, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=48, retdec=function_b0e30, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier1 effects: ip += 11; retdec_tail=state = 2*state0 - s16(ip+0); qword compare/pointer step; ip_reads=+0x6/2,+0x4/2,+0x8/2,+0xa/1,+0x2/2,+0x0/2; frame_reads=0xa,0x170,0x23,0x199,0x0,0x10f; frame_writes=0x170,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 - U16(vm->ip + 0x0u) - state0;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xb11c0 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_274(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=274, native=0xb1548, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb15c1:u16_7,0xb15fc:u16_5,0xb1630:u16_3,0xb166c:u16_5,0xb1684:u16_7,0xb16dc:b2,0xb171f:u16_9,0xb1774:u16_0 */
    /* static-only queue: rank=67, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_b1548,function_b180e, span=722, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=67, retdec=function_b1548, split=primary_before_large_neighbor_body, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier2 effects: split=primary_before_large_neighbor_body; ip += 11; retdec_tail=state = (state0 ^ s16(ip+0)) + state0; word compare/pointer step; ip_reads=+0x7/2,+0x5/2,+0x3/2,+0x2/1,+0x9/2,+0x0/2; frame_reads=0xa,0x23,0x199,0x10f,0x170; frame_writes=0x23,0x170,0xa; functi... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 + U16(vm->ip + 0x0u) ^ state0;
    vm->flags = flags0 ^ 0x22b4a064u + 0x4b0dd7d1u & 0x11984980u;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xb1804 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_275(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=275, native=0xb180e, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb186c:u16_5,0xb1889:u16_7,0xb18dc:u16_9,0xb1977:u16_7,0xb19a4:u16_5,0xb1a09:b0,0xb1a61:u16_3,0xb1a9d:u16_1 */
    /* static-only queue: rank=79, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_b180e,function_b1b32, span=809, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=79, retdec=function_b180e, share=primary_plus_empty_overlap_stub, slot_status=retdec_raw_mod_slot, ip_advance=11 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=RetDec return is raw modulo slot without dispatch base; ip_reads=+0x5/2,+0x7/2,+0x9/2,+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x170,0x0,0x199,0x23,0x10f; frame_writes=0x23,0x170,0xa; functions=funct... */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 | U16(vm->ip + 0x1u) ^ state0 - 0x26ed1596u;
    vm->flags = flags0 - 0x5be9cbecu;
    /* tier3 slot expression kept comment-only: ((state0 ^ s16(ip+1)) - 0x26ed1596) & 0xffff */
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xb1b23 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_276(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=276, native=0xb1b2d, class=partial, events=1, shape=CCCCCCCCCC, delta=+0xa */
    /* operands: b0=0xd9;b1=0x69;b2=0xff;b3=0xff;b4=0xff;b5=0xff;b6=0xff;b7=0xff;b8=0xff;b9=0xff */
    /* native IP reads: 0xb1bcb:byte0,0xb1c6a:byte0,0xb1cba:u32_2,0xb1ef3:u32_2 | (r13) - 0x653cf834,0xb1f09:u16_0,0xb1fa1:u32_2 | (r13) - 0x653cf834 - u32_2 | (r13) - 0x653cf834 + 0x200 - (((((r15) | (Ptr(kind='frame', off=368))) ^ (Ptr(kind='frame', off=271))) ^ (Ptr(kind='frame... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax */
    vm->state = state0 & 0x7246aa41u ^ flags0 | 0x47166ef1u - flags0 | flags0 - U32(vm->ip + 0x2u) - 0x332a16au ^ U16(vm->ip + 0x0u) + state0 & 0x7246aa41u ^ flags0 | 0x47166ef1u - flags0 | flags0 - U32(vm->ip + 0x2u) - 0x332a16au - 0x63f74381u;
    vm->flags = flags0 & 0x314a52bau ^ 0x25597f3bu;
    vm->ip += 0xa;
    /* dispatch: next = dispatch_table[slot] */
    /* observed top targets: 157@0x98a9a:1 */
    return r;
}

static VMOpResult op_entry_277(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=277, native=0xb1fd5, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb209c:u16_3,0xb2116:byte0,0xb222f:b2,0xb227d:u16_3,0xb22c9:u16_0 */
    /* static-only queue: rank=90, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_b1fd5,function_b2346, span=887, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=90, retdec=function_b1fd5, share=primary_plus_empty_overlap_stub, slot_status=noisy_dispatch_base_candidate, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=RetDec references dispatch base but return algebra is g3/noise-mixed; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x170,0x60,0x194,0x23,0x71,0x10f; frame_writes=0x71,0x170,0x60,0x0,0xa; func... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:add;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 & flags0 - U16(vm->ip + 0x0u) + state0 & flags0;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xb2339 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_278(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=278, native=0xb2342, class=affine_dispatch_fallback, events=553, shape=VVECCCVVEC, delta=+0xa */
    /* native return-patch thunk: the observed entry_278 body ends in a native ret; the normal dispatch decode that follows belongs to the next native handler entry. */
    /* ret-patch evidence: rows=2, kind=double_stack_return:2, starts=0x12906f:2, patched_text=0x6c010:2, patched_text2=0x15b5b2:2, stack_offsets=0x80:2, sections=.text:2, sections2=.text:2, seed=full_gpr_snapshot:2, base=inferred_image_base:2, relation=native_ret_patch_text_offset_not_vm_ip:2, relation2=native_ret_patch_text_offset_not_vm_ip:2 */
    /* ret-patch formula: *(uint64_t *)(rsp + u16_4) = frame_qword_0xbb + u32_6; *(uint64_t *)(rsp + u16_4 + 8) = frame_qword_0xbb + u32_0; ret */
    uint32_t native_ret_off0 = U32(vm->ip + 0x6);
    uint32_t native_ret_off1 = U32(vm->ip + 0x0);
    uint16_t native_stack_off = U16(vm->ip + 0x4);
    r.slot = native_ret_off0;
    r.next_entry = -1;
    /* r.slot carries the first native text/file offset for this analysis artifact, not a dispatch-table slot. */
    /* native effect: *(uint64_t *)(rsp + native_stack_off) = frame_qword_0xbb + native_ret_off0; */
    /* native effect: *(uint64_t *)(rsp + native_stack_off + 8) = frame_qword_0xbb + native_ret_off1; ret */
    (void)native_ret_off1;
    (void)native_stack_off;
    /* sampled sidecars remain bytecode-layer evidence: 1=sampled operand footprint 0xa, observed target table[323], delta +0x221770 | 1=sampled operand footprint 0xa, observed target table[86], delta +0x2426ba */
    /* validation: state_static=0.0%, dispatch_static=0.0%, dispatch_model=affine_partial_fallback:100.0%, transfer_expr=0.0%/82, sampled_operand=2/2, sampled_operand_len=2=0xa */
    return r;
}

static VMOpResult op_entry_279(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=279, native=0xb23f7, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb2474:byte0,0xb24e8:b4,0xb2536:u16_0,0xb25cd:u16_2 */
    /* static-only queue: rank=21, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_b23f7, span=631, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=21, retdec=function_b23f7, slot_status=noisy_dispatch_return_candidate, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = slot_source | (state0 | flags0); native return expression includes dispatch base plus obfuscation residue; ip_reads=+0x4/1,+0x0/2,+0x2/2; frame_reads=0xa,0x0,0x23,0x194,0x81,0x71,0x10f,0x170; frame_writes=0x71,0x170,0x0,0xa */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10;RF+0x23/4:mov */
    vm->state = state0 | flags0 | U16(vm->ip + 0x2u) - state0 | flags0 + 0x68baea26u;
    /* tier1 slot expression kept comment-only: (s16(ip+2) - (state0 | flags0) + 0x68baea26) & 0xffff */
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xb2657 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_280(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=280, native=0xb2661, class=static_validated, events=108, shape=EEVCC, delta=+0x5 */
    /* operands: b0=enum5(0x37:66,0x2f:17,0x8f:10,0x5f:8,0x97:7);b1=enum4(0x48:71,0x45:19,0x43:10,0x46:8);b2=var11(top=0xc5:63.0%);b3=0x3d;b4=0x01 */
    /* native IP reads: 0xb2743:byte0,0xb283e:byte0,0xb2a63:b2,0xb2b0a:u16_3,0xb2ced:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 - flags0 + 0x70ead2e5u | flags0 | flags0 & 0x43b06801u - flags0 | 0x4f5422beu | flags0 | 0x2fca37a8u - 0x3d94b3d1u + flags0 | 0x2fca37a8u | 0x214abc1fu ^ 0x1e5dc934u & 0x7b3ce1ecu + U16(vm->ip + 0x0u) - 0x267d402fu;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x0u) - 0x267d402fu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 86=0x5u */
    /* observed top targets: 257@0xadbfd:66,160@0x994cf:12,108@0x8f24b:10,198@0xa037e:8,173@0x9ba74:7,256@0xad849:5 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/86 */
    return r;
}

static VMOpResult op_entry_281(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=281, native=0xb2db6, class=static_validated, events=555, shape=VVVV, delta=+0x4 */
    /* operands: b0=var61(top=0x8d:46.1%);b1=var59(top=0x0d:46.3%);b2=var45(top=0x68:49.5%);b3=var49(top=0x7c:46.3%) */
    /* native IP reads: 0xb2de8:byte0,0xb2e10:byte0,0xb2e82:u16_2,0xb3052:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RF+0x10f/8:mov;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 - 0x31642a8cu ^ 0x5b9839d1u | flags0 & U16(vm->ip + 0x2u) + state0 - 0x31642a8cu ^ 0x5b9839d1u | flags0 - flags0 - flags0 - 0x1ec23851u ^ 0x6445395fu + U16(vm->ip + 0x0u) ^ state0 - 0x31642a8cu ^ 0x5b9839d1u | flags0 & U16(vm->ip + 0x2u) + state0 - 0x31642a8cu ^ 0x5b9839d1u | flags0 - flags0 - flags0 - 0x1ec23851u ^ 0x6445395fu - 0x519e8380u;
    vm->flags = flags0 - 0x1ec23851u;
    /* slot variants: 128=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32((mask32((mask32(state0 - 0x31642a8cu)) ^ 0x5b9839d1u)) | flags0)) & (mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32(state0 - 0x31642a8cu)) ^ 0x5b9839du...#b222dc9c3df4 */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 269@0xb045b:257,253@0xacfb1:153,322@0xbb3c9:11,292@0xb540f:9,3@0x78c77:8,30@0x7e849:7 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_282(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=282, native=0xb3128, class=static_validated, events=269, shape=VVVVE, delta=+0x5 */
    /* operands: b0=var62(top=0x2d:24.2%);b1=var45(top=0x22:24.2%);b2=var79(top=0x05:23.8%);b3=var73(top=0x57:23.8%);b4=enum3(0x3a:103,0x62:87,0x50:79) */
    /* native IP reads: 0xb32fe:u16_0,0xb344e:b4,0xb3553:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 ^ flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u;
    vm->flags = flags0 - 0x54c8658au & 0x259f380du & 0x41d706e9u - 0x334721c0u ^ 0x171f71e1u;
    /* slot variants: 83=(mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ (mask32((mask32((mask32(flags0 - 0x54c8658au)) & 0x259f380du)) - 0x334721c0u)))))) ^ 0x644d2bc4u)) & 0xffffu | 45=(mask32((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ (mask32(flags0 - 0x334721c0u))))... */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 280@0xb2661:64,220@0xa522e:27,90@0x8b334:21,199@0xa0631:13,140@0x94e5a:12,66@0x855ff:12 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_283(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=283, native=0xb3612, class=static_validated, events=1438, shape=CCCVV, delta=+0x5 */
    /* operands: b0=0x10;b1=0xe8;b2=0x01;b3=var22(top=0x1c:12.9%);b4=var10(top=0x62:23.3%) */
    /* native IP reads: 0xb3657:b0,0xb36ae:u16_1,0xb370c:u16_3,0xb3716:b0 ^ 0x1,0xb375d:u16_3 - 0x8ad5ab4 & 0xffff */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x3u) - 0x8ad5ab4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 333@0xbd8af:186,215@0xa4609:185,168@0x9aa83:184,258@0xadf2c:168,185@0x9d964:98,307@0xb8064:97 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_284(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=284, native=0xb379b, class=affine_dispatch_fallback, events=1, shape=CCCCCCCCCCCCC, delta=+0xd */
    /* operands: b0=0x1e;b1=0x1e;b2=0x02;b3=0x00;b4=0x80;b5=0x00;b6=0x3d;b7=0x01;b8=0x9a;b9=0xe8;b10=0x01;b11=0xc4;...+1 */
    /* native IP reads: 0xb3811:u16_6,0xb3851:b8,0xb3e59:u32_0,0xb3e81:u16_4,0xb3ecc:u16_9,0xb3f44:u16_11 */
    /* decode signature: IPADV+0xb;RIP+0xb/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0xb;RIP+0xb/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9;RF+0x0/8:mov */
    vm->state = state0 - U16(vm->ip + 0xbu) - 0x14b96a4cu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0xbu) - 0x14b96a4cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xd;
    /* dispatch: next = dispatch_table[slot]; ip += 1=0xdu */
    /* observed top targets: 239@0xa991e:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=affine_single_fallback:100.0%, transfer_expr=100.0%/1 */
    return r;
}

static VMOpResult op_entry_285(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=285, native=0xb3ff4, class=static_validated, events=1, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=0x67;b3=0x85;b4=0x4f */
    /* native IP reads: 0xb408a:u16_0,0xb40b9:byte0,0xb4108:u16_0 + (Ptr(kind='frame', off=0)),0xb418d:b4,0xb41d8:u16_0,0xb4276:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12 */
    vm->state = state0 ^ flags0 + U16(vm->ip + 0x2u) - state0 ^ flags0;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) - (mask32(state0 ^ flags0)))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 1=0x5u */
    /* observed top targets: 160@0x994cf:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/1 */
    return r;
}

static VMOpResult op_entry_286(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=286, native=0xb42e2, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb4362:byte0,0xb449c:b4,0xb44e3:u16_0,0xb454c:u16_2 */
    /* static-only queue: rank=30, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_b42e2, span=762, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=30, retdec=function_b42e2, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = (state0 + s16(ip+2)) ^ state0; flag/operand rewrite body precedes tail; ip_reads=+0x4/1,+0x0/2,+0x2/2; frame_reads=0xa,0x0,0x170,0x23,0x194,0x71,0x10f; frame_writes=0x170,0x71,0x0,0x23,0xa */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 & flags0 ^ U16(vm->ip + 0x2u) + state0 & flags0;
    vm->flags = flags0;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xb45c8 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_288(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=288, native=0xb4980, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb499b:u16_6,0xb49c1:u16_4,0xb49ed:u32_0,0xb4ab9:u16_6,0xb4ac7:u16_4,0xb4b16:u16_2,0xb4ba0:u16_0 */
    /* static-only queue: rank=125, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_b4980,function_b4a2b,function_b4c05, span=650, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=125, retdec=function_b4980, callret=native_ret_stack_prefix, slot_status=state_pointer_return_no_dispatch_slot, ip_advance=8 */
    /* tier4 effects: callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary builds a two-qword stack/value cell; overlap tier2 body is not standalone for this entry; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x2/2,+0x0/2; frame_reads=0xa,0x170,0xbb,0x81,0x0,0x10f; ... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0;
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0xb4bf6 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_289(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=289, native=0xb4a2b, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb4ab9:u16_6,0xb4ac7:u16_4,0xb4b16:u16_2,0xb4ba0:u16_0 */
    /* static-only queue: rank=59, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_b4a2b,function_b4c05, span=479, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=59, retdec=function_b4a2b, split=primary_plus_empty_overlap_stub, slot_status=state_pointer_return_no_dispatch_slot, ip_advance=8 */
    /* tier2 effects: split=primary_plus_empty_overlap_stub; ip += 8; retdec_tail=byte copy through pointer step; RetDec return is frame+state pointer; ip_reads=+0x6/2,+0x4/2,+0x2/2,+0x0/2; frame_reads=0xa,0x170,0x81,0x0,0x10f; frame_writes=0xa; functions=function_b4a2b,function... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0;
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0xb4bf6 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_290(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=290, native=0xb4c00, class=static_validated, events=27, shape=CCEEE, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=enum3(0x5f:10,0x77:10,0x46:7);b3=enum3(0x3c:10,0x94:10,0x7c:7);b4=enum3(0xd5:10,0xbb:10,0x8f:7) */
    /* native IP reads: 0xb4c9a:u16_0,0xb4cbc:byte0,0xb4d7d:b4,0xb4de5:u16_0,0xb4e4a:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x10f/8:mov;RF+0x170/4:add;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 | flags0 & 0x3acb356du & U16(vm->ip + 0x2u) + state0 | flags0 & 0x3acb356du ^ 0x29d9517bu;
    vm->flags = flags0 & 0x3acb356du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 | (mask32(flags0 & 0x3acb356du)))))) ^ 0x29d9517bu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 17=0x5u */
    /* observed top targets: 257@0xadbfd:17,108@0x8f24b:10 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/17 */
    return r;
}

static VMOpResult op_entry_291(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=291, native=0xb4edd, class=static_validated, events=479, shape=VVVV, delta=+0x4 */
    /* operands: b0=var55(top=0x07:19.2%);b1=var70(top=0xc4:19.2%);b2=var58(top=0x3b:27.8%);b3=var67(top=0x8e:19.0%) */
    /* native IP reads: 0xb4ee7:byte0,0xb4f66:byte0,0xb5064:byte0,0xb5074:u16_0,0xb5318:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    /* vm->state = state0 ^ flags0 ^ U16(vm->ip + 0x0u) - flags0 ^ 0x5acd2fau ^ 0x12648cbeu - flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu + 0x610956a9u & flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu | 0x55d764bbu ^ 0x17a0094au - 0x1f6881d8u | U16(vm->ip + 0x2u) + state0 ^ flags0 ^ U16(vm->ip + 0x0u) - flags0 ^ 0x5acd2fau ^ 0x12648cbeu - flags0 ^ 0x5acd2fau ^ 0x12648c...; */
    vm->flags = flags0 ^ 0x5acd2fau ^ 0x12648cbeu ^ 0x2e91bd1cu;
    /* slot variants: 84=(mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32(state0 ^ flags0)) ^ (mask32(U16(vm->ip + 0x0u) - (mask32(flags0 ^ 0x12648cbeu)))))) - (mask32((mask32((mask32(flags0 ^ 0x12648cbeu)) ^ 0x2e91bd1cu)) + 0x610956a9u))...#2506bf4c3168 | 44... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 79@0x885b0:95,292@0xb540f:77,330@0xbc9b8:69,18@0x7be9b:68,48@0x82477:25,66@0x855ff:16 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_292(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=292, native=0xb540f, class=static_validated, events=651, shape=EVVVV, delta=+0x5 */
    /* operands: b0=enum4(0x62:422,0x50:105,0x3a:98,0x32:26);b1=var53(top=0xdc:39.3%);b2=var55(top=0x7b:39.3%);b3=var69(top=0xd0:39.5%);b4=var63(top=0xaa:39.5%) */
    /* native IP reads: 0xb54c7:byte0,0xb5540:u16_1,0xb5681:b0,0xb5818:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx;RF+0x81/8:mov */
    vm->state = state0 | flags0 + U16(vm->ip + 0x1u) - state0 | flags0 & U16(vm->ip + 0x3u) ^ state0 | flags0 + U16(vm->ip + 0x1u) - state0 | flags0 + 0x628c34bcu;
    vm->flags = flags0 - 0x592d1456u ^ 0x6ef9e3c1u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) ^ (mask32((mask32(state0 | flags0)) + (mask32(U16(vm->ip + 0x1u) - (mask32(state0 | flags0)))))))) + 0x628c34bcu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 185@0x9d964:259,350@0xc1926:64,307@0xb8064:64,317@0xba1e2:34,90@0x8b334:34,199@0xa0631:28 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_293(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=293, native=0xb593f, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb59b0:u32_0,0xb5ba3:byte0,0xb5bc1:byte0,0xb5c90:u16_8 */
    /* static-only queue: rank=111, tier=tier5_large_static_replay, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_b593f, span=1098, action=defer_until_small_static_handlers_are_inlined */
    /* decode signature: IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx */
    vm->state = state0 + U32(vm->ip + 0x0u) ^ flags0 | 0x18ec5db5u & 0x2a26c115u ^ flags0 | 0x18ec5db5u ^ 0x77a19d87u - 0x79e5d6a1u & 0x2b2bf075u | 0x1ed6f586u & 0x32259d7eu;
    vm->flags = flags0;
    vm->ip += 0xa;
    /* IP advance recovered from native tail site: tail_ip_add@0xb5d72 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_294(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=294, native=0xb5d7c, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb5dbd:u16_0,0xb5dea:b4,0xb6051:u16_2 */
    /* static-only queue: rank=99, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_b5d7c,function_b60e2,function_b60e7, span=878, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=99, retdec=function_b5d7c, share=primary_plus_empty_overlap_stubs, slot_status=masked_noisy_return_no_dispatch_slot, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=return is obfuscated pointer/noise expression; ip_reads=+0x0/2,+0x4/1,+0x2/2; frame_reads=0xa,0x10f,0x170; frame_writes=0x199,0x170,0xa; functions=function_b5d7c,function_b60e2,function_b60e7; ran... */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    vm->state = state0 & U16(vm->ip + 0x2u) ^ state0;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xb60d6 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_295(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=295, native=0xb60e0, class=static_validated, events=980, shape=CCVVC, delta=+0x5 */
    /* operands: b0=0xe8;b1=0x01;b2=var22(top=0x02:41.3%);b3=var11(top=0xd4:23.8%);b4=0x10 */
    /* native IP reads: 0xb6101:b4,0xb6152:u16_0,0xb61d6:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RF+0x10f/8:mov;RIP+0x2/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 | U16(vm->ip + 0x2u) - 0x396ecbf2u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) - 0x396ecbf2u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 258@0xadf2c:218,28@0x7e390:184,66@0x855ff:183,64@0x85059:100,43@0x8173d:97,157@0x98a9a:92 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_296(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=296, native=0xb625d, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb62f5:byte0,0xb63bb:b0,0xb63f6:u16_1,0xb6452:u16_3 */
    /* static-only queue: rank=82, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_b625d,function_b64dc,function_b64df, span=647, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=82, retdec=function_b625d, share=primary_plus_empty_overlap_stubs, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=return is frame/result pointer after flag/operand rewrite; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x0,0x81,0x194,0x71,0x10f; frame_writes=0x71,0x0,0x170,0xa; functions=function_b625d,funct... */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 - U16(vm->ip + 0x3u) - 0x1240ca15u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xb64ce */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_298(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=298, native=0xb6902, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb6970:u16_5,0xb697a:u16_3,0xb69e9:u16_0,0xb6a8a:u16_5,0xb6aa1:u16_3,0xb6abc:u16_5 + (Ptr(kind='frame', off=0)),0xb6b2a:u16_7 */
    /* static-only queue: rank=28, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_b6902, span=706, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=28, retdec=function_b6902, slot_status=pointer_effect_no_state_slot, ip_advance=9 */
    /* tier1 effects: ip += 9; retdec_tail=paired word pointer step; no clean state/dispatch slot in RetDec tail; ip_reads=+0x5/2,+0x3/2,+0x0/2,+0x7/2; frame_reads=0xa,0x199,0x10f,0x170; frame_writes=0xa */
    /* decode signature: IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0xb6baf */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_299(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=299, native=0xb6bba, class=sampled_operand_lifted, events=2, shape=sampled, delta=-0x7fe6 */
    /* native return-patch thunk: the observed entry_299 body ends in a native ret; the normal dispatch decode that follows belongs to the next native handler entry. */
    /* ret-patch evidence: rows=7, kind=single_stack_return:7, starts=0x122e3c:3,0x17452e:2,0x33710f:2, patched_text=0x2d409:3,0x313eb:2,0x74b3d:2, patched_text2=-, stack_offsets=0x80:7, sections=.text:7, sections2=-, seed=full_gpr_snapshot:6,frame_only_snapshot:1, base=inferred_image_base:6,mapped_frame_qword:1, relation=native_ret_patch_text_offset_not_vm_ip:7, relation2=- */
    /* ret-patch formula: *(uint64_t *)(rsp + u16_4) = frame_qword_0xbb + u32_0; ret */
    uint32_t native_ret_off = U32(vm->ip + 0x0);
    uint16_t native_stack_off = U16(vm->ip + 0x4);
    r.slot = native_ret_off;
    r.next_entry = -1;
    /* r.slot carries the native text/file offset for this analysis artifact, not a dispatch-table slot. */
    /* native effect: *(uint64_t *)(rsp + native_stack_off) = frame_qword_0xbb + native_ret_off; ret */
    (void)native_stack_off;
    /* sampled sidecars remain bytecode-layer evidence: 1=sampled operand footprint 0x6, observed target table[169], delta -0x7fe6 | 1=sampled operand footprint 0x6, observed target table[310], delta -0xcf8b */
    /* validation: sampled_operand=2/2, sampled_operand_len=2=0x6 */
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

static VMOpResult op_entry_302(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=302, native=0xb7586, class=sampled_only, events=109, shape=sampled, delta=-0x40 */
    /* native IP reads: 0xb75cb:u16_0,0xb7642:u32_4,0xb7644:u32_4 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add;JMP:r12 */
    vm->state = state0;
    r.slot = U32(vm->ip + 0x0);
    r.next_entry = vm_entry_from_slot_index(r.slot);
    vm->ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* long-control operands: target_u32@+0, signed delta_u32@+4 */
    /* dispatch: 39=next = dispatch_table[171], ip -= 0x40u | 25=next = dispatch_table[171], ip += 0x22u */
    /* observed top targets: 171@0x9b4b3:70,165@0x9a24c:35,354@0xc2241:4 */
    /* validation: long_branch=109/9, long_branch_len=109=0x8 */
    return r;
}

static VMOpResult op_entry_303(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=303, native=0xb769c, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb76b7:u16_2,0xb76e0:u16_0,0xb7749:u16_4,0xb7763:u16_2,0xb7789:u16_6,0xb781e:u16_0 */
    /* static-only queue: rank=128, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_b769c,function_b7717,function_b78b2,function_b78b5, span=545, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=128, retdec=function_b769c, callret=native_ret_result_prefix, slot_status=masked_noisy_overlap_return_no_dispatch_slot, ip_advance=8 */
    /* tier4 effects: callret=native_ret_result_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced source into destination; overlap tier3 return is g2/noise residue; ip_reads=+0x2/2,+0x0/2,+0x4/2,+0x6/2; frame_reads=0xa,0x170,0x0,0x10f; frame_writes=0x1dc,... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0;
    vm->flags = flags0 + state0;
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0xb78a6 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_304(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=304, native=0xb7717, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb7749:u16_4,0xb7763:u16_2,0xb7789:u16_6,0xb781e:u16_0 */
    /* static-only queue: rank=73, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_b7717,function_b78b2,function_b78b5, span=422, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=73, retdec=function_b7717, share=primary_plus_empty_overlap_stubs, slot_status=masked_noisy_return_no_dispatch_slot, ip_advance=8 */
    /* tier3 effects: share=primary_plus_empty_overlap_stubs; ip += 8; retdec_tail=return is g2/base-mangled predicate residue; ip_reads=+0x4/2,+0x2/2,+0x6/2,+0x0/2; frame_reads=0xa,0x170,0x0,0x10f; frame_writes=0x23,0xa; functions=function_b7717,function_b78b2,function_b78b5; r... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0;
    vm->flags = flags0 + state0;
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0xb78a6 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_306(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=306, native=0xb7bba, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb7de3:u32_0,0xb7f88:u16_4 */
    /* static-only queue: rank=113, tier=tier5_large_static_replay, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_b7bba, span=1207, action=defer_until_small_static_handlers_are_inlined */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 + flags0 & flags0 & 0x65f916c5u + 0x39659fc4u ^ 0x20457dau & 0x3f8e5ee9u & flags0 & 0x65f916c5u + 0x39659fc4u ^ 0x6a71ecf1u & 0x3fa191cu - U16(vm->ip + 0x4u) ^ state0 + flags0 & flags0 & 0x65f916c5u + 0x39659fc4u ^ 0x20457dau & 0x3f8e5ee9u & flags0 & 0x65f916c5u + 0x39659fc4u ^ 0x6a71ecf1u & 0x3fa191cu + 0x735687d1u;
    vm->flags = flags0 & 0x65f916c5u + 0x39659fc4u ^ 0x6a71ecf1u & 0x3fa191cu;
    vm->ip += 0x6;
    /* IP advance recovered from native tail site: tail_ip_add@0xb805b */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_308(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=308, native=0xb837c, class=partial, events=1, shape=CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC, delta=+0x20 */
    /* operands: b0=0xab;b1=0x00;b2=0x00;b3=0x00;b4=0x20;b5=0x00;b6=0x00;b7=0x00;b8=0xa8;b9=0x00;b10=0xb3;b11=0x00;...+20 */
    /* native IP reads: 0xb83bb:u16_0,0xb8433:u32_4,0xb843d:u32_4 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add;JMP:r10;RF+0xa/8:mov */
    vm->state = state0;
    r.slot = U32(vm->ip + 0x0);
    r.next_entry = vm_entry_from_slot_index(r.slot);
    vm->ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* long-control operands: target_u32@+0, signed delta_u32@+4 */
    /* dispatch: 91=next = dispatch_table[171], ip -= 0x51a4u | 64=next = dispatch_table[171], ip -= 0x9deu */
    /* observed top targets: 171@0x9b4b3:1 */
    /* validation: long_branch=246/17, long_branch_len=246=0x8 */
    return r;
}

static VMOpResult op_entry_309(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=309, native=0xb84a7, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb84bb:u32_0,0xb850d:u32_0,0xb8577:byte0,0xb85e5:u16_0,0xb863f:byte0,0xb868c:u16_2 */
    /* static-only queue: rank=120, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_b84a7,function_b8556, span=603, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=120, retdec=function_b84a7, callret=native_ret_frame_cell, slot_status=frame_cell_return_no_dispatch_slot, ip_advance=4 */
    /* tier4 effects: callret=native_ret_frame_cell; calls=0; rets=1; ip += 4; retdec_tail=primary returns frame[112]; overlap child returns result; ip_reads=+0x0/4,+0x0/2,+0x2/2; frame_reads=0xa,0x194,0x23,0x71,0x10f; frame_writes=0x23,0x1dc,0xa; functions=function_b84a7,functi... */
    /* decode signature: IPADV+0x2;RIP+0x2/2:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0;
    vm->flags = flags0 ^ 0x595c3465u + 0x102a61feu ^ 0x6856726u ^ 0x622d58d3u;
    vm->ip += 0x4;
    /* IP advance recovered from native tail site: tail_ip_add@0xb86ee */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_310(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=310, native=0xb8556, class=static_validated, events=1614, shape=CCEE, delta=+0x4 */
    /* operands: b0=0xe8;b1=0x01;b2=enum3(0xa5:666,0x62:566,0xab:382);b3=enum2(0x00:1048,0x01:566) */
    /* native IP reads: 0xb8577:byte0,0xb85e5:u16_0,0xb863f:byte0,0xb868c:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0;
    vm->flags = flags0 ^ 0x595c3465u + 0x102a61feu ^ 0x6856726u ^ 0x622d58d3u;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 165@0x9a24c:666,354@0xc2241:566,171@0x9b4b3:382 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_311(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=311, native=0xb86f8, class=affine_dispatch_fallback, events=382, shape=VVECCCVVEC, delta=+0xa */
    /* operands: b0=var13(top=0x21:23.8%);b1=var13(top=0x80:23.8%);b2=enum4(0x31:367,0x26:12,0x36:2,0x33:1);b3=0x00;b4=0x80;b5=0x00;b6=var10(top=0x94:47.6%);b7=var10(top=0x9d:47.6%);b8=enum6(0x02:184,0x07:93,0x48:91,0x01:12,0x03:1,0x05:1);b9=0x00 */
    /* native IP reads: 0xb8714:u32_6,0xb8741:u16_4,0xb876c:u32_0,0xb87bd:byte0,0xb887f:byte0,0xb88a0:byte0,0xb891c:b0,0xb8948:u16_1,0xb8975:byte0,0xb8a92:u16_3 */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8;RF+0x81/8:mov */
    vm->state = state0 - 0x1889c111u - flags0 - state0 - 0x1889c111u + 0x3cae9026u | 0x2b959efau | 0x35e8abc1u - U16(vm->ip + 0x3u) ^ state0 - 0x1889c111u - flags0 - state0 - 0x1889c111u + 0x3cae9026u | 0x2b959efau | 0x35e8abc1u ^ 0xa9f4228u;
    vm->flags = flags0 - state0 - 0x1889c111u + 0x3cae9026u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x3u) ^ (mask32((mask32(state0 - 0x1889c111u)) - (mask32((mask32((mask32(flags0 - (mask32((mask32(state0 - 0x1889c111u)) + 0x3cae9026u)))) | 0x2b959efau)) | 0x35e8abc1u)))))) ^ 0xa9f4228u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: 1=sampled operand footprint 0xau, observed target dispatch_table[42], delta +0x169ebu | 1=sampled operand footprint 0xau, observed target dispatch_table[42], delta -0x34cedu */
    /* observed top targets: 169@0x9af18:192,310@0xb8556:190 */
    /* validation: state_static=0.0%, dispatch_static=0.0%, dispatch_model=affine_partial_fallback:100.0%, transfer_expr=0.0%/67, sampled_operand=2/2, sampled_operand_len=2=0xa */
    return r;
}

static VMOpResult op_entry_312(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=312, native=0xb87aa, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xb87bd:byte0,0xb887f:byte0,0xb88a0:byte0,0xb891c:b0,0xb8948:u16_1,0xb8975:byte0,0xb8a92:u16_3 */
    /* static-only queue: rank=94, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_b87aa,function_b8b47, span=933, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=94, retdec=function_b87aa, share=primary_plus_empty_overlap_stub, slot_status=masked_dispatch_base_requires_g3, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return mixes dispatch base address with g3 mask; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0x194,0x81,0xa,0x0,0x60,0x170,0x23,0x71,0x10f; frame_writes=0x170,0x71,0x23,0x0,0x60,0xa; functions=funct... */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8;RF+0x81/8:mov */
    vm->state = state0 - 0x1889c111u - flags0 - state0 - 0x1889c111u + 0x3cae9026u | 0x2b959efau | 0x35e8abc1u - U16(vm->ip + 0x3u) ^ state0 - 0x1889c111u - flags0 - state0 - 0x1889c111u + 0x3cae9026u | 0x2b959efau | 0x35e8abc1u ^ 0xa9f4228u;
    vm->flags = flags0 - state0 - 0x1889c111u + 0x3cae9026u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xb8b38 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_313(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=313, native=0xb8b42, class=static_validated, events=4, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=0x7e;b3=0x59;b4=0xff */
    /* native IP reads: 0xb8be3:byte0,0xb8c21:byte0,0xb8d12:byte0,0xb8e56:b4,0xb8e8b:u16_0,0xb8f15:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r14 */
    /* vm->state = state0 - flags0 + 0x40989976u | 0x2f39160au ^ flags0 - state0 - flags0 + 0x40989976u | 0x2f39160au ^ 0x7af00ac1u ^ state0 - flags0 + 0x40989976u | 0x2f39160au ^ 0x3764731u - state0 - flags0 + 0x40989976u | 0x2f39160au | 0x6ecf352au & flags0 - state0 - flags0 + 0x40989976u | 0x2f39160au ^ 0x7af00ac1u ^ state0 - flags0 + 0x40989976u | 0x2f39160au ^ 0x376473...; */
    vm->flags = flags0 - state0 - flags0 + 0x40989976u;
    /* slot variants: 4=(mask32((mask32(U16(vm->ip + 0x2u) + (mask32((mask32((mask32((mask32((mask32(state0 - (mask32(flags0 + 0x40989976u)))) | 0x2f39160au)) ^ (mask32((mask32((mask32((mask32(flags0 - (mask32((mask32((mask32(state0 - (mask32...#4e261addcdf9 */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 4=0x5u */
    /* observed top targets: 352@0xc1ec4:4 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/4 */
    return r;
}

static VMOpResult op_entry_314(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=314, native=0xb8fcf, class=static_validated, events=1, shape=CCCCCCCCCC, delta=+0xa */
    /* operands: b0=0x2c;b1=0x74;b2=0xfa;b3=0x95;b4=0xff;b5=0xff;b6=0xff;b7=0xff;b8=0x6a;b9=0xbb */
    /* native IP reads: 0xb90df:u32_0,0xb91eb:u32_0 ^ state0,0xb92c5:byte0,0xb9390:u16_8 */
    /* decode signature: IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x8;RIP+0x8/2:movzx;RF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx */
    vm->state = state0 - U32(vm->ip + 0x0u) ^ state0 + 0x477d7abbu;
    vm->flags = flags0 ^ state0 - 0x35ede369u + 0x6124f239u + 0x374b6378u - 0x36a041e8u + state0 - U32(vm->ip + 0x0u) ^ state0 - 0x7ff540aeu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x8u) + (mask32((mask32(state0 - (mask32(U32(vm->ip + 0x0u) ^ state0)))) + 0x477d7abbu)))) - 0x5861bc11u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0xa;
    /* dispatch: next = dispatch_table[slot]; ip += 1=0xau */
    /* observed top targets: 189@0x9e7af:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/1 */
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

static VMOpResult op_entry_316(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=316, native=0xb987b, class=sampled_only, events=447, shape=sampled, delta=-0x3c4 */
    /* native IP reads: 0xb98e4:u16_8,0xb9927:b10,0xb9f67:u16_0,0xba005:u32_4,0xba01d:u32_4 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add;JMP:rax */
    vm->state = state0;
    r.slot = U32(vm->ip + 0x0);
    r.next_entry = vm_entry_from_slot_index(r.slot);
    vm->ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* long-control operands: target_u32@+0, signed delta_u32@+4 */
    /* dispatch: 255=next = dispatch_table[165], ip -= 0x3c4u | 91=next = dispatch_table[171], ip += 0x2du */
    /* observed top targets: 165@0x9a24c:258,354@0xc2241:95,171@0x9b4b3:94 */
    /* validation: long_branch=447/13, long_branch_len=447=0xb */
    return r;
}

static VMOpResult op_entry_317(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=317, native=0xba1e2, class=static_validated, events=537, shape=VVVV, delta=+0x4 */
    /* operands: b0=var40(top=0xe7:25.9%);b1=var56(top=0xc8:26.1%);b2=var50(top=0x08:49.3%);b3=var60(top=0xdc:25.5%) */
    /* native IP reads: 0xba356:u16_2,0xba5d5:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    /* vm->state = state0 - flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u | flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u ^ U16(vm->ip + 0x2u) + flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u & flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u & 0x19a77bau + flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2...; */
    vm->flags = flags0 + 0x189c9c80u - 0x4373d071u ^ 0x12461866u & 0x2d8e67e2u;
    /* slot variants: 47=(mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) | flags0)) ^ (mask32(U16(vm->ip + 0x2u) + flags0)))) & (mask32(flags0 & 0x19a77bau)))) + flags0)) | flags0)) ^ ...#8b0ee047c830 | 12=(m... */
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 66=0x4u */
    /* observed top targets: 154@0x97ce6:139,70@0x8610e:125,28@0x7e390:34,282@0xb3128:32,330@0xbc9b8:29,52@0x833c7:28 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/66 */
    return r;
}

static VMOpResult op_entry_318(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=318, native=0xba683, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xba69e:u16_6,0xba6c3:u16_4,0xba6ef:u32_0,0xba96e:byte0,0xbaafd:b4,0xbab6d:u16_0,0xbacbf:u16_2 */
    /* static-only queue: rank=153, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch06.c, funcs=function_ba683,function_ba72f,function_badaa, span=1839, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=153, retdec=function_ba683, callret=native_ret_stack_prefix, slot_status=masked_noisy_overlap_return_no_dispatch_slot, ip_advance=8 */
    /* tier4 effects: callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary builds stack/value cell; overlap return is noisy predicate residue; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x4/1,+0x0/2,+0x2/2; frame_reads=0xa,0x23,0x170,0x0,0x71,0x81,0x60,0xbb,0x194,0... */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    /* vm->state = state0 & flags0 | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & state0 + 0x4fa9822eu | 0x5ed258f1u | flags0 | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & state0 + 0x4fa9822eu ^ flags0 | 0x6be63b72u ^ 0x55d6ffe2u ^ 0x655e4f3bu | 0x27c134adu & state0 + 0x4fa9822eu + 0x2ba77993u + U16(vm->ip + 0x2u) + state0 & flags0 | 0x6be63b72u ^ 0x5...; */
    vm->flags = flags0;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xbad9b */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_321(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=321, native=0xbb1dd, class=affine_dispatch_fallback, events=97, shape=EEEEEEEEEECCC, delta=+0xd */
    /* operands: b0=enum3(0x44:91,0x4e:3,0x00:3);b1=enum3(0xf2:91,0xf4:3,0xd6:3);b2=enum3(0x25:91,0x2e:3,0x88:3);b3=enum3(0x80:91,0xb2:3,0xe7:3);b4=enum3(0x59:91,0xcc:3,0x54:3);b5=enum3(0x78:91,0x11:3,0x0b:3);b6=enum3(0x54:91,0x0d:3,0x46:3);b7=enum3(0x78:91,0x72:3,0xe4:3);b... */
    /* native IP reads: 0xbb1f1:b0,0xbb221:u32_7,0xbb245:b1,0xbb25d:u32_3,0xbb29d:b1,0xbb2ef:b0,0xbb310:b2,0xbb369:u32_7,0xbb393:u16_11,0xbb424:u16_0,0xbb488:byte0,0xbb517:byte0,0xbb611:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r8 */
    vm->state = state0 + U16(vm->ip + 0x0u) ^ flags0 | 0x2d680d90u + 0x69cbe1a0u & U16(vm->ip + 0x2u) - state0 + U16(vm->ip + 0x0u) ^ flags0 | 0x2d680d90u + 0x69cbe1a0u + 0x7ba65dc4u;
    vm->flags = flags0 - 0x58d38f71u + 0xdc60e0au ^ 0xb71b18du;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) - (mask32((mask32((mask32(state0 + (mask32(U16(vm->ip + 0x0u) ^ flags0)))) | 0x2d680d90u)) + 0x69cbe1a0u)))) + 0x7ba65dc4u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 19=0x4u */
    /* observed top targets: 169@0x9af18:94,310@0xb8556:3 */
    /* validation: state_static=0.0%, dispatch_static=0.0%, dispatch_model=affine_robust_fallback:100.0%, transfer_expr=0.0%/19 */
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

static VMOpResult op_entry_323(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=323, native=0xbb6e6, class=static_validated, events=1, shape=CCCC, delta=+0x4 */
    /* operands: b0=0x36;b1=0x01;b2=0x00;b3=0x00 */
    /* native IP reads: 0xbb822:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rax;RF+0x23/4:mov */
    vm->state = state0 ^ flags0 - flags0;
    vm->flags = flags0 + 0x5de5c852u + 0xa0d232au + 0x1ce63a22u ^ 0x34d95df5u;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) << 0x3u);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 1=0x4u */
    /* observed top targets: 310@0xb8556:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/1 */
    return r;
}

static VMOpResult op_entry_324(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=324, native=0xbb8aa, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xbb909:u16_4,0xbb913:u16_6,0xbb937:u16_2,0xbb9aa:u16_0 */
    /* static-only queue: rank=7, tier=tier0_single_function_small_static_replay, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_bb8aa, span=370, action=inline_retdec_function_into_handler_model */
    /* tier0 static model: rank=7, retdec=function_bb8aa, slot_status=retdec_table_slot, ip_advance=8 */
    /* tier0 effects: state += flags; word store through frame[s16(ip+6)]; pointer step by frame[s16(ip+2)] sign; final state &= slot source; ip += 8 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r12;RF+0x60/8:mov */
    vm->state = state0 + flags0 & U16(vm->ip + 0x0u) - state0 + flags0 + 0x6e06065au;
    r.slot = (uint32_t)((((int32_t)S16(vm->ip + 0x0u)) - (state0 + flags0) + 0x6e06065au) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier0 static slot recovered from the RetDec single-function model; dynamic source-row validation is still absent. */
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0xbba05 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_325(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=325, native=0xbba0f, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xbbbbe:byte0,0xbbcc8:b2,0xbbd83:u16_0,0xbbfbb:u16_3 */
    /* static-only queue: rank=116, tier=tier5_large_static_replay, sidecar=vm_unobserved_handlers_retdec_batch06.c, funcs=function_bba0f, span=1643, action=defer_until_small_static_handlers_are_inlined */
    /* decode signature: IPADV+0x3;RIP+0x3/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x3;RIP+0x3/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 - 0x1f34eac7u & 0x6ecd1861u - flags0 & 0x7d9408au - 0x41dbc7b8u & U16(vm->ip + 0x3u) ^ 0x1ffd618fu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xbc064 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_326(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=326, native=0xbc06d, class=static_validated, events=70, shape=EEECC, delta=+0x5 */
    /* operands: b0=enum3(0x31:39,0x55:18,0xdd:13);b1=enum2(0xde:57,0xbe:13);b2=enum2(0xed:57,0xe5:13);b3=0x3d;b4=0x01 */
    /* native IP reads: 0xbc126:u16_3,0xbc13a:byte0,0xbc1f7:b0,0xbc249:u16_3,0xbc2b0:u16_1 */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x1;RF+0x10f/8:mov;RIP+0x1/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 & flags0 + U16(vm->ip + 0x1u) ^ 0x50d4eebeu;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x1u) ^ 0x50d4eebeu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 31=0x5u */
    /* observed top targets: 108@0x8f24b:57,352@0xc1ec4:13 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/31 */
    return r;
}

static VMOpResult op_entry_327(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=327, native=0xbc320, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xbc34c:u16_2,0xbc360:u16_0,0xbc386:u16_6,0xbc3f7:u16_4 */
    /* static-only queue: rank=70, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_bc320,function_bc468,function_bc46b, span=339, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=70, retdec=function_bc320, share=primary_plus_two_empty_overlap_stubs, slot_status=state_effect_only_no_dispatch_return, ip_advance=8 */
    /* tier3 effects: share=primary_plus_two_empty_overlap_stubs; ip += 8; retdec_tail=return is frame/result pointer after state update and pointer copy; ip_reads=+0x2/2,+0x0/2,+0x6/2,+0x4/2; frame_reads=0xa,0x10f,0x170,0x194; frame_writes=0x170,0xa; functions=function_bc320,fu... */
    /* decode signature: IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rcx;RF+0x194/1:mov */
    vm->state = state0 + 0x2f9d0305u + U16(vm->ip + 0x4u) - state0 + 0x2f9d0305u ^ 0x323c963u;
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0xbc45c */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_328(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=328, native=0xbc466, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xbc470:byte0,0xbc49b:u16_2,0xbc49f:u16_9,0xbc4d2:u16_4,0xbc518:u16_2,0xbc529:u16_9,0xbc57d:b8,0xbc5a9:u16_0,0xbc5f0:u16_6 */
    /* static-only queue: rank=61, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_bc466,function_bc678, span=541, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=61, retdec=function_bc466, split=primary_plus_empty_overlap_stub, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier2 effects: split=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=state = (0x6640824a - state0 + s16(ip+6)) & state0; word compare/pointer step; ip_reads=+0x2/2,+0x9/2,+0x4/2,+0x8/1,+0x0/2,+0x6/2; frame_reads=0xa,0x194,0x199,0x23,0x10f,0x170; frame_writes=0x170,... */
    /* decode signature: IPADV+0x6;RIP+0x6/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x6;RF+0x10f/8:mov;RIP+0x6/2:movzx;RF+0x170/4:sub;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 & U16(vm->ip + 0x6u) - state0 + 0x6640824au;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xbc66c */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_329(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=329, native=0xbc676, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xbc762:u16_3,0xbc79b:byte0,0xbc854:b0,0xbc89b:u16_3,0xbc943:u16_1 */
    /* static-only queue: rank=83, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_bc676,function_bc9bd, span=847, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=83, retdec=function_bc676, share=primary_plus_empty_overlap_stub, slot_status=noisy_dispatch_base_candidate, ip_advance=5 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=RetDec references dispatch base but return algebra is g3/noise-mixed; ip_reads=+0x3/2,+0x0/1,+0x1/2; frame_reads=0xa,0x0,0x170,0x194,0x71,0x10f,0x23; frame_writes=0x170,0x71,0x0,0xa; functions=func... */
    /* decode signature: IPADV+0x1;RIP+0x1/2:movzx;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x1;RIP+0x1/2:movzx;RF+0x10f/8:mov;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx;RF+0x23/4:mov */
    vm->state = state0 ^ 0x54da429bu ^ 0x46ddc1b7u - U16(vm->ip + 0x1u) - 0x2a47c812u;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xbc9af */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_330(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=330, native=0xbc9b8, class=static_validated, events=316, shape=VVEVV, delta=+0x5 */
    /* operands: b0=var18(top=0x20:28.8%);b1=var11(top=0x08:33.2%);b2=enum4(0x3a:153,0x62:80,0x50:58,0x32:25);b3=var36(top=0x07:30.4%);b4=var13(top=0x77:66.5%) */
    /* native IP reads: 0xbcbe7:u16_3,0xbcd01:b2,0xbcf2d:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r15 */
    vm->state = state0 | 0x6460b705u & 0x786588bau ^ 0x2897b354u + U16(vm->ip + 0x0u);
    vm->flags = flags0 & 0x1eb7e52du;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x5u */
    /* observed top targets: 260@0xae90b:91,18@0x7be9b:68,140@0x94e5a:25,66@0x855ff:13,122@0x9170d:12,291@0xb4edd:10 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_331(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=331, native=0xbcfc8, class=static_validated, events=157, shape=EEE, delta=+0x3 */
    /* operands: b0=enum7(0x68:125,0xf0:25,0xe8:3,0x40:1,0x08:1,0x30:1);b1=enum7(0x6b:125,0xb9:25,0xe7:3,0xef:1,0xe5:1,0xde:1);b2=enum2(0x32:150,0x62:7) */
    /* native IP reads: 0xbd073:b2,0xbd224:byte0,0xbd2be:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 & 0x3eb8b067u + flags0 & flags0 ^ 0x1f891278u + flags0 + 0x6859cefdu | 0x47dd4277u + U16(vm->ip + 0x0u) - state0 & 0x3eb8b067u + flags0 & flags0 ^ 0x1f891278u + flags0 + 0x6859cefdu | 0x47dd4277u - 0x35a6d51u;
    vm->flags = flags0 ^ 0x168dd881u;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - (mask32((mask32((mask32((mask32((mask32((mask32(state0 & 0x3eb8b067u)) + flags0)) & (mask32(flags0 ^ 0x1f891278u)))) + flags0)) + 0x6859cefdu)) | 0x47dd4277u)))) - 0x35a6d51u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x3;
    /* dispatch: next = dispatch_table[slot]; ip += 5=0x3u */
    /* observed top targets: 340@0xbf435:125,196@0x9fbcd:25,99@0x8c99a:3,222@0xa5f3c:1,168@0x9aa83:1,333@0xbd8af:1 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/5 */
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

static VMOpResult op_entry_334(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=334, native=0xbdd18, class=sampled_only, events=42, shape=sampled, delta=+0x2a5 */
    /* native IP reads: 0xbdd93:u16_8,0xbddef:b10,0xbe47d:u16_0,0xbe4d3:u32_4,0xbe4d9:u32_4 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;RF+0xa/8:mov;IPADV+0x4;RIP+0x4/4:mov;WF+0xa/8:sub;WF+0xa/8:add;JMP:rdx */
    vm->state = state0;
    r.slot = U32(vm->ip + 0x0);
    r.next_entry = vm_entry_from_slot_index(r.slot);
    vm->ip += signed_vm_delta_u32(U32(vm->ip + 0x4));
    /* long-control operands: target_u32@+0, signed delta_u32@+4 */
    /* dispatch: 25=next = dispatch_table[354], ip += 0x2a5u | 1=next = dispatch_table[165], ip += 0x238u */
    /* observed top targets: 354@0xc2241:33,171@0x9b4b3:5,165@0x9a24c:4 */
    /* validation: long_branch=42/18, long_branch_len=42=0xb */
    return r;
}

static VMOpResult op_entry_335(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=335, native=0xbe648, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xbe65f:byte0,0xbe6be:u16_6,0xbe71e:u16_4,0xbe79a:u16_2,0xbe849:u16_0 */
    /* static-only queue: rank=66, tier=tier2_small_shared_range_split, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_be648,function_be8d2, span=658, action=split_overlapping_retdec_chunks_then_inline */
    /* tier2 split model: rank=66, retdec=function_be648, split=primary_plus_empty_overlap_stub, slot_status=retdec_dispatch_table_slot, ip_advance=8 */
    /* tier2 effects: split=primary_plus_empty_overlap_stub; ip += 8; retdec_tail=state = flags0 ^ 0x6e6f5b3e ^ state0; dword copy through pointer step; ip_reads=+0x6/2,+0x4/2,+0x2/2,+0x0/2; frame_reads=0xa,0x170,0x194,0x0,0x23,0x10f; frame_writes=0x170,0xa; functions=function_b... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r11 */
    vm->state = state0 ^ flags0 ^ 0x6e6f5b3eu;
    r.slot = (uint32_t)((0x0000d24bu - (flags0 ^ 0x6e6f5b3eu ^ state0) + ((int32_t)S16(vm->ip + 0x0u))) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier2 static slot recovered from a split RetDec primary tail; dynamic source-row validation is still absent. */
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0xbe8c3 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_336(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=336, native=0xbe8cd, class=static_validated, events=44, shape=CCEEV, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=enum5(0xe8:19,0x88:8,0x80:8,0x68:5,0xd8:4);b3=enum6(0x01:12,0x0a:8,0x0c:8,0x02:7,0x0d:5,0x0f:4);b4=var14(top=0x33:9.1%) */
    /* native IP reads: 0xbe97e:u16_0,0xbea00:byte0,0xbeaf6:b4,0xbeb41:u16_0,0xbeb98:u16_2,0xbebb7:u16_2 ^ 0x114009e8 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r10 */
    vm->state = state0 & U16(vm->ip + 0x2u) ^ 0x114009e8u;
    r.slot = (uint32_t)((mask32(U16(vm->ip + 0x2u) ^ 0x114009e8u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 33=0x5u */
    /* observed top targets: 256@0xad849:12,108@0x8f24b:8,173@0x9ba74:8,352@0xc1ec4:7,144@0x95887:5,198@0xa037e:4 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/33 */
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

static VMOpResult op_entry_338(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=338, native=0xbf128, class=static_validated, events=1753, shape=VVCCCC, delta=+0x6 */
    /* operands: b0=var85(top=0xc4:10.6%);b1=var91(top=0xc7:10.6%);b2=0x3d;b3=0x01;b4=0xe8;b5=0x01 */
    /* native IP reads: 0xbf199:byte0,0xbf1e2:u16_4,0xbf1f4:u16_2,0xbf25e:u16_0,0xbf278:byte0 | 0x400 | (((((((r15) + 0x20) + (Ptr(kind='frame', off=0))) & 0x8) ^ (((r9) & (r9)) & 0x8)) | (Ptr(kind='frame', off=404))) | ((((((r15) + 0x20) + (Ptr(kind='frame', off=0))) & 0x8) ^ (((... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 - U16(vm->ip + 0x0u) - state0 - 0x4bf8be0cu;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) - state0)) - 0x4bf8be0cu)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x6;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x6u */
    /* observed top targets: 283@0xb3612:648,351@0xc1d48:582,295@0xb60e0:523 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/128 */
    return r;
}

static VMOpResult op_entry_339(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=339, native=0xbf2d5, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xbf2ec:byte0,0xbf32e:u16_6,0xbf33c:u16_4,0xbf365:u16_2,0xbf3c6:u16_0,0xbf3cd:u16_0 */
    /* static-only queue: rank=6, tier=tier0_single_function_small_static_replay, sidecar=vm_unobserved_handlers_retdec_batch00.c, funcs=function_bf2d5, span=365, action=inline_retdec_function_into_handler_model */
    /* tier0 static model: rank=6, retdec=function_bf2d5, slot_status=decode_candidate_slot, ip_advance=8 */
    /* tier0 effects: state = state0 - flags0 + 0x2393cc37; dword copy through frame[s16(ip+4)] to frame[s16(ip+6)]; pointer step by frame[s16(ip+2)] sign; ip += 8 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = state0 - flags0 + 0x2393cc37u;
    r.slot = (uint32_t)(U16(vm->ip + 0x0u));
    r.next_entry = vm_entry_from_table_offset(r.slot);
    /* tier0 static slot recovered from the RetDec single-function model; dynamic source-row validation is still absent. */
    vm->ip += 0x8;
    /* IP advance recovered from native tail site: tail_ip_add@0xbf42c */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_341(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=341, native=0xbf889, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xbf8f0:u16_0,0xbf90b:u16_4,0xbf978:u16_2,0xbfa2f:u16_0,0xbfa4a:u16_4,0xbfb1d:u16_7 */
    /* static-only queue: rank=76, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch02.c, funcs=function_bf889,function_bfb9b, span=794, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=76, retdec=function_bf889, share=primary_plus_empty_overlap_stub, slot_status=constant_like_predicate_return, ip_advance=9 */
    /* tier3 effects: share=primary_plus_empty_overlap_stub; ip += 9; retdec_tail=return is obfuscated constant/predicate expression; ip_reads=+0x0/2,+0x4/2,+0x2/2,+0x7/2; frame_reads=0xa,0x170,0x199,0x81,0x10f; frame_writes=0x23,0x170,0xa; functions=function_bf889,function_bfb9... */
    /* decode signature: IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 | U16(vm->ip + 0x7u) ^ state0;
    vm->flags = flags0 & 0x23af6a13u;
    vm->ip += 0x9;
    /* IP advance recovered from native tail site: tail_ip_add@0xbfb8f */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_342(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=342, native=0xbfb99, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xbfbb2:u16_2,0xbfbd7:u16_0,0xbfc50:u16_5,0xbfc7f:u16_3,0xbfcdf:u16_0,0xbfd69:u16_5,0xbfd7b:u16_3,0xbfe11:b2,0xbfe60:u16_9,0xbfefb:u16_7 */
    /* static-only queue: rank=129, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch04.c, funcs=function_bfb99,function_bfc0d, span=990, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=129, retdec=function_bfb99, callret=native_ret_result_prefix, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier4 effects: callret=native_ret_result_prefix; calls=0; rets=1; ip += 11; retdec_tail=primary moves frame value and returns result; overlap child returns result; ip_reads=+0x0/2,+0x5/2,+0x3/2,+0x2/2,+0x2/1,+0x9/2,+0x7/2; frame_reads=0xa,0x170,0x199,0x0,0x10f; frame_writ... */
    /* decode signature: IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 ^ 0x37af3c05u & 0x6b4057cfu - U16(vm->ip + 0x7u) - state0 ^ 0x37af3c05u & 0x6b4057cfu + 0x4bf1ddd5u;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xbff61 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_343(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=343, native=0xbfc0d, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xbfc50:u16_5,0xbfc7f:u16_3,0xbfcdf:u16_0,0xbfd69:u16_5,0xbfd7b:u16_3,0xbfe11:b2,0xbfe60:u16_9,0xbfefb:u16_7 */
    /* static-only queue: rank=87, tier=tier3_multi_function_shared_range, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_bfc0d,function_bff6a, span=874, action=recover_shared_chunks_or_split_by_entry */
    /* tier3 shared model: rank=87, retdec=function_bfc0d, share=primary_plus_large_neighbor_body, slot_status=state_effect_only_no_dispatch_return, ip_advance=11 */
    /* tier3 effects: share=primary_plus_large_neighbor_body; ip += 11; retdec_tail=return is frame/result pointer after compare/flag side effects; ip_reads=+0x5/2,+0x3/2,+0x0/2,+0x2/1,+0x9/2,+0x7/2; frame_reads=0xa,0x170,0x199,0x0,0x10f; frame_writes=0x170,0xa; functions=functi... */
    /* decode signature: IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;RF+0x10f/8:mov;IPADV+0x7;RIP+0x7/2:movzx;RF+0x170/4:sub;WF+0x170/4:sub;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 ^ 0x37af3c05u & 0x6b4057cfu - U16(vm->ip + 0x7u) - state0 ^ 0x37af3c05u & 0x6b4057cfu + 0x4bf1ddd5u;
    vm->ip += 0xb;
    /* IP advance recovered from native tail site: tail_ip_add@0xbff61 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_344(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=344, native=0xbff6a, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xbff9f:u16_2,0xbffe1:b4,0xc0223:u16_0 */
    /* static-only queue: rank=44, tier=tier1_single_function_medium_static_replay, sidecar=vm_unobserved_handlers_retdec_batch03.c, funcs=function_bff6a, span=902, action=inline_retdec_function_after_operand_rewrite */
    /* tier1 static model: rank=44, retdec=function_bff6a, slot_status=state_effect_only_no_dispatch_return, ip_advance=5 */
    /* tier1 effects: ip += 5; retdec_tail=state = ((state0 ^ s16(ip+0)) - 0x6a74b67c) & state0; predicate scratch side effects present; ip_reads=+0x2/2,+0x4/1,+0x0/2; frame_reads=0xa,0x10f,0x170; frame_writes=0x199,0x170,0xa */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdi */
    vm->state = state0 & U16(vm->ip + 0x0u) ^ state0 - 0x6a74b67cu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xc02db */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_348(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=348, native=0xc0d7d, class=static_validated, events=37, shape=VVCCV, delta=+0x5 */
    /* operands: b0=var11(top=0xc5:21.6%);b1=var13(top=0x7c:16.2%);b2=0x3d;b3=0x01;b4=var15(top=0x13:16.2%) */
    /* native IP reads: 0xc0ef7:byte0,0xc0f04:byte0,0xc0fd9:byte0,0xc11aa:b4,0xc122d:u16_2,0xc1347:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;RF+0x10f/8:mov;RF+0x170/4:xor;WF+0x170/4:and;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rsi */
    vm->state = state0 & 0x4ead272u + flags0 | flags0 | 0x2730b0ccu - 0x5c278a20u & 0x31691179u - 0x5c3efee3u & 0x19c08712u & U16(vm->ip + 0x0u) ^ state0 & 0x4ead272u + flags0 | flags0 | 0x2730b0ccu - 0x5c278a20u & 0x31691179u - 0x5c3efee3u & 0x19c08712u - 0x369ef0d5u;
    vm->flags = flags0;
    /* slot variants: 19=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(state0 & 0x4ead272u)) + flags0)) | (mask32(flags0 | 0x2730b0ccu)))) & 0x19c08712u)))) - 0x369ef0d5u)) & 0xffffu | 9=(mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32((mask32((mask32((mask32(... */
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 28=0x5u */
    /* observed top targets: 352@0xc1ec4:12,257@0xadbfd:7,173@0x9ba74:5,160@0x994cf:5,198@0xa037e:3,108@0x8f24b:3 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/28 */
    return r;
}

static VMOpResult op_entry_349(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=349, native=0xc140b, class=static_validated, events=503, shape=VVVV, delta=+0x4 */
    /* operands: b0=var68(top=0x00:50.9%);b1=var71(top=0xad:51.3%);b2=var20(top=0x88:53.7%);b3=var11(top=0x00:59.2%) */
    /* native IP reads: 0xc1509:u16_0,0xc1845:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x10f/8:mov;WF+0x170/4:add;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    /* vm->state = state0 & flags0 | 0x37932789u | 0x16ca0efdu ^ 0x78372234u & U16(vm->ip + 0x0u) ^ state0 & flags0 | 0x37932789u | 0x16ca0efdu ^ 0x78372234u - flags0 + flags0 + 0x5b8191bu - 0x48cf2626u - 0x7444487fu | 0x1897f25cu | flags0 + 0x5b8191bu - 0x48cf2626u - 0x7444487fu ^ state0 & flags0 | 0x37932789u | 0x16ca0efdu ^ 0x78372234u & U16(vm->ip + 0x0u) ^ state0 & fla...; */
    vm->flags = flags0 + 0x5b8191bu - 0x48cf2626u - 0x7444487fu ^ state0 & flags0;
    r.slot = (uint32_t)(U16(vm->ip + 0x2u) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x4;
    /* dispatch: next = dispatch_table[slot]; ip += 128=0x4u */
    /* observed top targets: 17@0x7bae9:264,105@0x8e6b4:31,332@0xbd36d:26,282@0xb3128:25,28@0x7e390:17,200@0xa0a9e:15 */
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

static VMOpResult op_entry_353(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=353, native=0xc21c3, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xc21df:u32_2,0xc220b:u16_0,0xc2384:u16_0 */
    /* static-only queue: rank=130, tier=tier4_native_call_or_ret_side_effect, sidecar=vm_unobserved_handlers_retdec_batch01.c, funcs=function_c21c3,function_c2241,function_c2414,function_c2417, span=601, action=audit_call_ret_side_effects_before_inlining */
    /* tier4 call/ret model: rank=130, retdec=function_c21c3, callret=native_ret_result_prefix, slot_status=state_effect_only_no_dispatch_return, ip_advance=6 */
    /* tier4 effects: callret=native_ret_result_prefix; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[187]+operand into destination and returns result; ip_reads=+0x0/2,+0x2/4; frame_reads=0xa,0x23,0x170,0x0,0xbb,0x10f; frame_writes=0x170,0x23,0x1dc,0xf3,0xa; functio... */
    /* decode signature: IPADV+0x0;RIP+0x0/2:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:mov;RF+0x10f/8:mov;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rdx */
    vm->state = 0x0u;
    vm->flags = 0x0u;
    vm->ip += 0x2;
    /* IP advance recovered from native tail site: tail_ip_add@0xc2406 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
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

static VMOpResult op_entry_355(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=355, native=0xc240f, class=unobserved_static, events=0, shape=-, delta=- */
    /* native IP reads: 0xc2431:byte0,0xc24ce:byte0,0xc267c:byte0,0xc2752:b4,0xc277e:u16_2,0xc284a:u16_0 */
    /* static-only queue: rank=114, tier=tier5_large_static_replay, sidecar=vm_unobserved_handlers_retdec_batch05.c, funcs=function_c240f, span=1301, action=defer_until_small_static_handlers_are_inlined */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x0;RIP+0x0/2:movzx;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r9 */
    vm->state = state0 ^ flags0 - flags0 ^ 0x7bdb3dc7u - 0x43e81f2au ^ 0x7b5fcef1u & 0x7536cf07u + 0x33b57421u - 0x2e36e0cbu | U16(vm->ip + 0x0u) - 0x25b87fbfu;
    vm->flags = flags0 ^ 0x7bdb3dc7u - 0x43e81f2au ^ 0x7b5fcef1u & 0x7536cf07u + 0x33b57421u - 0x2e36e0cbu;
    vm->ip += 0x5;
    /* IP advance recovered from native tail site: tail_ip_add@0xc2910 */
    /* dispatch: next = dispatch_table[slot] */
    /* No direct source-row execution in current dynamic bytecode traces. */
    return r;
}

static VMOpResult op_entry_356(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=356, native=0xc291a, class=affine_dispatch_fallback, events=741, shape=VVECCCVVEC, delta=+0xa */
    /* operands: b0=var17(top=0x6f:12.4%);b1=var17(top=0x74:12.4%);b2=enum5(0x31:731,0x26:4,0x33:2,0x34:2,0x36:2);b3=0x00;b4=0x80;b5=0x00;b6=var13(top=0x1c:36.8%);b7=var11(top=0x60:36.8%);b8=enum4(0x03:456,0x07:185,0x02:96,0x01:4);b9=0x00 */
    /* native IP reads: 0xc2935:u32_6,0xc2961:u16_4,0xc298f:u32_0,0xc2a82:u16_3,0xc2afa:byte0,0xc2bf8:b2,0xc2c55:u16_3,0xc2cb0:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RF+0x10f/8:mov;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 ^ flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ flags0)))) + 0x70d7d4a7u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 116=0x5u */
    /* observed top targets: 310@0xb8556:373,169@0x9af18:368 */
    /* validation: state_static=0.0%, dispatch_static=0.0%, dispatch_model=affine_robust_fallback:100.0%, transfer_expr=0.0%/116 */
    return r;
}

static VMOpResult op_entry_357(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=357, native=0xc29cf, class=static_validated, events=6, shape=EEECC, delta=+0x5 */
    /* operands: b0=enum2(0xf0:3,0x11:3);b1=enum2(0xfd:3,0x6a:3);b2=enum2(0xb1:3,0x91:3);b3=0x3d;b4=0x01 */
    /* native IP reads: 0xc2a82:u16_3,0xc2afa:byte0,0xc2bf8:b2,0xc2c55:u16_3,0xc2cb0:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RF+0x10f/8:mov;RIP+0x0/2:movzx;RF+0x170/4:xor;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 ^ flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x0u) ^ (mask32(state0 ^ flags0)))) + 0x70d7d4a7u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 6=0x5u */
    /* observed top targets: 352@0xc1ec4:3,144@0x95887:3 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/6 */
    return r;
}

static VMOpResult op_entry_358(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=358, native=0xc2d37, class=partial, events=1, shape=CCCCC, delta=+0x5 */
    /* operands: b0=0x7d;b1=0x1a;b2=0x3d;b3=0x01;b4=0x00 */
    /* native IP reads: 0xc2d8b:byte0,0xc2e5d:byte0,0xc2fe9:byte0,0xc30a1:byte0,0xc3140:b4,0xc31b6:u16_2,0xc31ba:u16_2,0xc324a:byte0,0xc3359:u16_0 */
    /* decode signature: IPADV+0x0;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0xa/8:mov;IPADV+0x0;RF+0x10f/8:mov;RIP+0x0/2:movzx;RF+0x170/4:xor;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:r13 */
    vm->state = state0 + flags0 - 0x3bcc6446u ^ 0x50eab96u - flags0 + flags0 | 0x4ea692e8u ^ flags0 ^ flags0 ^ 0x3b02b16cu + 0x63b77c87u | flags0 | U16(vm->ip + 0x0u) ^ state0 + flags0 - 0x3bcc6446u ^ 0x50eab96u - flags0 + flags0 | 0x4ea692e8u ^ flags0 ^ flags0 ^ 0x3b02b16cu + 0x63b77c87u | flags0 - 0x45b1cde1u;
    vm->flags = flags0;
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot] */
    /* observed top targets: 144@0x95887:1 */
    return r;
}

static VMOpResult op_entry_359(VMState *vm) {
    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };
    uint32_t state0 = vm->state;
    uint32_t flags0 = vm->flags;
    uint8_t byte0 = vm->byte;
    /* entry=359, native=0xc3406, class=static_validated, events=6, shape=CCEEC, delta=+0x5 */
    /* operands: b0=0x3d;b1=0x01;b2=enum2(0x1f:4,0xc3:2);b3=enum2(0xfc:4,0xde:2);b4=0x00 */
    /* native IP reads: 0xc35a6:b4,0xc35f1:u16_0,0xc36a0:u16_2 */
    /* decode signature: IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add */
    /* dispatch skeleton: RF+0x10f/8:mov;RF+0xa/8:mov;IPADV+0x2;RIP+0x2/2:movzx;RF+0x170/4:add;WF+0x170/4:or;TDYN;RTdyn/8:mov;WF+0xa/8:add;JMP:rbx */
    vm->state = state0 & flags0 | 0x16bae797u | U16(vm->ip + 0x2u) + state0 & flags0 | 0x16bae797u - 0x6683bbe1u;
    vm->flags = flags0;
    r.slot = (uint32_t)((mask32((mask32(U16(vm->ip + 0x2u) + (mask32(state0 & (mask32(flags0 | 0x16bae797u)))))) - 0x6683bbe1u)) & 0xffffu);
    r.next_entry = vm_entry_from_table_offset(r.slot);
    vm->ip += 0x5;
    /* dispatch: next = dispatch_table[slot]; ip += 4=0x5u */
    /* observed top targets: 108@0x8f24b:4,160@0x994cf:2 */
    /* validation: state_static=100.0%, dispatch_static=100.0%, dispatch_model=static_100:100.0%, transfer_expr=100.0%/4 */
    return r;
}

static VMOpResult vm_call_handler(int entry, VMState *vm) {
    switch (entry) {
    case 0: return op_entry_000(vm);
    case 1: return op_entry_001(vm);
    case 2: return op_entry_002(vm);
    case 3: return op_entry_003(vm);
    case 4: return op_entry_004(vm);
    case 5: return op_entry_005(vm);
    case 6: return op_entry_006(vm);
    case 7: return op_entry_007(vm);
    case 8: return op_entry_008(vm);
    case 9: return op_entry_009(vm);
    case 10: return op_entry_010(vm);
    case 11: return op_entry_011(vm);
    case 12: return op_entry_012(vm);
    case 13: return op_entry_013(vm);
    case 14: return op_entry_014(vm);
    case 15: return op_entry_015(vm);
    case 16: return op_entry_016(vm);
    case 17: return op_entry_017(vm);
    case 18: return op_entry_018(vm);
    case 19: return op_entry_019(vm);
    case 20: return op_entry_020(vm);
    case 21: return op_entry_021(vm);
    case 22: return op_entry_022(vm);
    case 23: return op_entry_023(vm);
    case 24: return op_entry_024(vm);
    case 25: return op_entry_025(vm);
    case 26: return op_entry_026(vm);
    case 27: return op_entry_027(vm);
    case 28: return op_entry_028(vm);
    case 29: return op_entry_029(vm);
    case 30: return op_entry_030(vm);
    case 31: return op_entry_031(vm);
    case 32: return op_entry_032(vm);
    case 33: return op_entry_033(vm);
    case 34: return op_entry_034(vm);
    case 35: return op_entry_035(vm);
    case 36: return op_entry_036(vm);
    case 37: return op_entry_037(vm);
    case 38: return op_entry_038(vm);
    case 39: return op_entry_039(vm);
    case 40: return op_entry_040(vm);
    case 41: return op_entry_041(vm);
    case 42: return op_entry_042(vm);
    case 43: return op_entry_043(vm);
    case 44: return op_entry_044(vm);
    case 45: return op_entry_045(vm);
    case 46: return op_entry_046(vm);
    case 47: return op_entry_047(vm);
    case 48: return op_entry_048(vm);
    case 49: return op_entry_049(vm);
    case 50: return op_entry_050(vm);
    case 51: return op_entry_051(vm);
    case 52: return op_entry_052(vm);
    case 53: return op_entry_053(vm);
    case 54: return op_entry_054(vm);
    case 55: return op_entry_055(vm);
    case 56: return op_entry_056(vm);
    case 57: return op_entry_057(vm);
    case 58: return op_entry_058(vm);
    case 59: return op_entry_059(vm);
    case 60: return op_entry_060(vm);
    case 61: return op_entry_061(vm);
    case 62: return op_entry_062(vm);
    case 63: return op_entry_063(vm);
    case 64: return op_entry_064(vm);
    case 65: return op_entry_065(vm);
    case 66: return op_entry_066(vm);
    case 67: return op_entry_067(vm);
    case 68: return op_entry_068(vm);
    case 69: return op_entry_069(vm);
    case 70: return op_entry_070(vm);
    case 71: return op_entry_071(vm);
    case 72: return op_entry_072(vm);
    case 73: return op_entry_073(vm);
    case 74: return op_entry_074(vm);
    case 75: return op_entry_075(vm);
    case 76: return op_entry_076(vm);
    case 77: return op_entry_077(vm);
    case 78: return op_entry_078(vm);
    case 79: return op_entry_079(vm);
    case 80: return op_entry_080(vm);
    case 81: return op_entry_081(vm);
    case 82: return op_entry_082(vm);
    case 83: return op_entry_083(vm);
    case 84: return op_entry_084(vm);
    case 85: return op_entry_085(vm);
    case 86: return op_entry_086(vm);
    case 87: return op_entry_087(vm);
    case 88: return op_entry_088(vm);
    case 89: return op_entry_089(vm);
    case 90: return op_entry_090(vm);
    case 91: return op_entry_091(vm);
    case 92: return op_entry_092(vm);
    case 93: return op_entry_093(vm);
    case 94: return op_entry_094(vm);
    case 95: return op_entry_095(vm);
    case 96: return op_entry_096(vm);
    case 97: return op_entry_097(vm);
    case 98: return op_entry_098(vm);
    case 99: return op_entry_099(vm);
    case 100: return op_entry_100(vm);
    case 101: return op_entry_101(vm);
    case 102: return op_entry_102(vm);
    case 103: return op_entry_103(vm);
    case 104: return op_entry_104(vm);
    case 105: return op_entry_105(vm);
    case 106: return op_entry_106(vm);
    case 107: return op_entry_107(vm);
    case 108: return op_entry_108(vm);
    case 109: return op_entry_109(vm);
    case 110: return op_entry_110(vm);
    case 111: return op_entry_111(vm);
    case 112: return op_entry_112(vm);
    case 113: return op_entry_113(vm);
    case 114: return op_entry_114(vm);
    case 115: return op_entry_115(vm);
    case 116: return op_entry_116(vm);
    case 117: return op_entry_117(vm);
    case 118: return op_entry_118(vm);
    case 119: return op_entry_119(vm);
    case 120: return op_entry_120(vm);
    case 121: return op_entry_121(vm);
    case 122: return op_entry_122(vm);
    case 123: return op_entry_123(vm);
    case 124: return op_entry_124(vm);
    case 125: return op_entry_125(vm);
    case 126: return op_entry_126(vm);
    case 127: return op_entry_127(vm);
    case 128: return op_entry_128(vm);
    case 129: return op_entry_129(vm);
    case 130: return op_entry_130(vm);
    case 131: return op_entry_131(vm);
    case 132: return op_entry_132(vm);
    case 133: return op_entry_133(vm);
    case 134: return op_entry_134(vm);
    case 135: return op_entry_135(vm);
    case 136: return op_entry_136(vm);
    case 137: return op_entry_137(vm);
    case 138: return op_entry_138(vm);
    case 139: return op_entry_139(vm);
    case 140: return op_entry_140(vm);
    case 141: return op_entry_141(vm);
    case 142: return op_entry_142(vm);
    case 143: return op_entry_143(vm);
    case 144: return op_entry_144(vm);
    case 145: return op_entry_145(vm);
    case 146: return op_entry_146(vm);
    case 147: return op_entry_147(vm);
    case 148: return op_entry_148(vm);
    case 149: return op_entry_149(vm);
    case 150: return op_entry_150(vm);
    case 151: return op_entry_151(vm);
    case 152: return op_entry_152(vm);
    case 153: return op_entry_153(vm);
    case 154: return op_entry_154(vm);
    case 155: return op_entry_155(vm);
    case 156: return op_entry_156(vm);
    case 157: return op_entry_157(vm);
    case 158: return op_entry_158(vm);
    case 159: return op_entry_159(vm);
    case 160: return op_entry_160(vm);
    case 161: return op_entry_161(vm);
    case 162: return op_entry_162(vm);
    case 163: return op_entry_163(vm);
    case 164: return op_entry_164(vm);
    case 165: return op_entry_165(vm);
    case 166: return op_entry_166(vm);
    case 167: return op_entry_167(vm);
    case 168: return op_entry_168(vm);
    case 169: return op_entry_169(vm);
    case 170: return op_entry_170(vm);
    case 171: return op_entry_171(vm);
    case 172: return op_entry_172(vm);
    case 173: return op_entry_173(vm);
    case 174: return op_entry_174(vm);
    case 175: return op_entry_175(vm);
    case 176: return op_entry_176(vm);
    case 177: return op_entry_177(vm);
    case 178: return op_entry_178(vm);
    case 179: return op_entry_179(vm);
    case 180: return op_entry_180(vm);
    case 181: return op_entry_181(vm);
    case 182: return op_entry_182(vm);
    case 183: return op_entry_183(vm);
    case 184: return op_entry_184(vm);
    case 185: return op_entry_185(vm);
    case 186: return op_entry_186(vm);
    case 187: return op_entry_187(vm);
    case 188: return op_entry_188(vm);
    case 189: return op_entry_189(vm);
    case 190: return op_entry_190(vm);
    case 191: return op_entry_191(vm);
    case 192: return op_entry_192(vm);
    case 193: return op_entry_193(vm);
    case 194: return op_entry_194(vm);
    case 195: return op_entry_195(vm);
    case 196: return op_entry_196(vm);
    case 197: return op_entry_197(vm);
    case 198: return op_entry_198(vm);
    case 199: return op_entry_199(vm);
    case 200: return op_entry_200(vm);
    case 201: return op_entry_201(vm);
    case 202: return op_entry_202(vm);
    case 203: return op_entry_203(vm);
    case 204: return op_entry_204(vm);
    case 205: return op_entry_205(vm);
    case 206: return op_entry_206(vm);
    case 207: return op_entry_207(vm);
    case 208: return op_entry_208(vm);
    case 209: return op_entry_209(vm);
    case 210: return op_entry_210(vm);
    case 211: return op_entry_211(vm);
    case 212: return op_entry_212(vm);
    case 213: return op_entry_213(vm);
    case 214: return op_entry_214(vm);
    case 215: return op_entry_215(vm);
    case 216: return op_entry_216(vm);
    case 217: return op_entry_217(vm);
    case 218: return op_entry_218(vm);
    case 219: return op_entry_219(vm);
    case 220: return op_entry_220(vm);
    case 221: return op_entry_221(vm);
    case 222: return op_entry_222(vm);
    case 223: return op_entry_223(vm);
    case 224: return op_entry_224(vm);
    case 225: return op_entry_225(vm);
    case 226: return op_entry_226(vm);
    case 227: return op_entry_227(vm);
    case 228: return op_entry_228(vm);
    case 229: return op_entry_229(vm);
    case 230: return op_entry_230(vm);
    case 231: return op_entry_231(vm);
    case 232: return op_entry_232(vm);
    case 233: return op_entry_233(vm);
    case 234: return op_entry_234(vm);
    case 235: return op_entry_235(vm);
    case 236: return op_entry_236(vm);
    case 237: return op_entry_237(vm);
    case 238: return op_entry_238(vm);
    case 239: return op_entry_239(vm);
    case 240: return op_entry_240(vm);
    case 241: return op_entry_241(vm);
    case 242: return op_entry_242(vm);
    case 243: return op_entry_243(vm);
    case 244: return op_entry_244(vm);
    case 245: return op_entry_245(vm);
    case 246: return op_entry_246(vm);
    case 247: return op_entry_247(vm);
    case 248: return op_entry_248(vm);
    case 249: return op_entry_249(vm);
    case 250: return op_entry_250(vm);
    case 251: return op_entry_251(vm);
    case 252: return op_entry_252(vm);
    case 253: return op_entry_253(vm);
    case 254: return op_entry_254(vm);
    case 255: return op_entry_255(vm);
    case 256: return op_entry_256(vm);
    case 257: return op_entry_257(vm);
    case 258: return op_entry_258(vm);
    case 259: return op_entry_259(vm);
    case 260: return op_entry_260(vm);
    case 261: return op_entry_261(vm);
    case 262: return op_entry_262(vm);
    case 263: return op_entry_263(vm);
    case 264: return op_entry_264(vm);
    case 265: return op_entry_265(vm);
    case 266: return op_entry_266(vm);
    case 267: return op_entry_267(vm);
    case 268: return op_entry_268(vm);
    case 269: return op_entry_269(vm);
    case 270: return op_entry_270(vm);
    case 271: return op_entry_271(vm);
    case 272: return op_entry_272(vm);
    case 273: return op_entry_273(vm);
    case 274: return op_entry_274(vm);
    case 275: return op_entry_275(vm);
    case 276: return op_entry_276(vm);
    case 277: return op_entry_277(vm);
    case 278: return op_entry_278(vm);
    case 279: return op_entry_279(vm);
    case 280: return op_entry_280(vm);
    case 281: return op_entry_281(vm);
    case 282: return op_entry_282(vm);
    case 283: return op_entry_283(vm);
    case 284: return op_entry_284(vm);
    case 285: return op_entry_285(vm);
    case 286: return op_entry_286(vm);
    case 287: return op_entry_287(vm);
    case 288: return op_entry_288(vm);
    case 289: return op_entry_289(vm);
    case 290: return op_entry_290(vm);
    case 291: return op_entry_291(vm);
    case 292: return op_entry_292(vm);
    case 293: return op_entry_293(vm);
    case 294: return op_entry_294(vm);
    case 295: return op_entry_295(vm);
    case 296: return op_entry_296(vm);
    case 297: return op_entry_297(vm);
    case 298: return op_entry_298(vm);
    case 299: return op_entry_299(vm);
    case 300: return op_entry_300(vm);
    case 301: return op_entry_301(vm);
    case 302: return op_entry_302(vm);
    case 303: return op_entry_303(vm);
    case 304: return op_entry_304(vm);
    case 305: return op_entry_305(vm);
    case 306: return op_entry_306(vm);
    case 307: return op_entry_307(vm);
    case 308: return op_entry_308(vm);
    case 309: return op_entry_309(vm);
    case 310: return op_entry_310(vm);
    case 311: return op_entry_311(vm);
    case 312: return op_entry_312(vm);
    case 313: return op_entry_313(vm);
    case 314: return op_entry_314(vm);
    case 315: return op_entry_315(vm);
    case 316: return op_entry_316(vm);
    case 317: return op_entry_317(vm);
    case 318: return op_entry_318(vm);
    case 319: return op_entry_319(vm);
    case 320: return op_entry_320(vm);
    case 321: return op_entry_321(vm);
    case 322: return op_entry_322(vm);
    case 323: return op_entry_323(vm);
    case 324: return op_entry_324(vm);
    case 325: return op_entry_325(vm);
    case 326: return op_entry_326(vm);
    case 327: return op_entry_327(vm);
    case 328: return op_entry_328(vm);
    case 329: return op_entry_329(vm);
    case 330: return op_entry_330(vm);
    case 331: return op_entry_331(vm);
    case 332: return op_entry_332(vm);
    case 333: return op_entry_333(vm);
    case 334: return op_entry_334(vm);
    case 335: return op_entry_335(vm);
    case 336: return op_entry_336(vm);
    case 337: return op_entry_337(vm);
    case 338: return op_entry_338(vm);
    case 339: return op_entry_339(vm);
    case 340: return op_entry_340(vm);
    case 341: return op_entry_341(vm);
    case 342: return op_entry_342(vm);
    case 343: return op_entry_343(vm);
    case 344: return op_entry_344(vm);
    case 345: return op_entry_345(vm);
    case 346: return op_entry_346(vm);
    case 347: return op_entry_347(vm);
    case 348: return op_entry_348(vm);
    case 349: return op_entry_349(vm);
    case 350: return op_entry_350(vm);
    case 351: return op_entry_351(vm);
    case 352: return op_entry_352(vm);
    case 353: return op_entry_353(vm);
    case 354: return op_entry_354(vm);
    case 355: return op_entry_355(vm);
    case 356: return op_entry_356(vm);
    case 357: return op_entry_357(vm);
    case 358: return op_entry_358(vm);
    case 359: return op_entry_359(vm);
    default: return (VMOpResult){ .next_entry = -1, .slot = 0xffffffffu };
    }
}
