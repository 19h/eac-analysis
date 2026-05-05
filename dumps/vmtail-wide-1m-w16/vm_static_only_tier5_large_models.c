/*
 * Static-only tier5 large-handler models.
 *
 * Tier5 rows are the remaining large static-only handler functions.
 * The full RetDec function bodies are already present in sidecars;
 * this layer binds them back to dispatch entries and keeps slot
 * promotion conservative until a clean dispatch-table tail is proven.
 */
#include <stdint.h>
#include <stddef.h>

#define VM_TIER5_UNKNOWN_SLOT 0xffffffffu
#define VM_TIER5_IP_PTR_OFF 10
#define VM_TIER5_FLAGS_OFF 35
#define VM_TIER5_DISPATCH_BASE_OFF 271
#define VM_TIER5_STATE_OFF 368

typedef struct VMTier5Frame {
    uint8_t *frame;
    uintptr_t g1_mask;
    uintptr_t g2_mask;
    uintptr_t g3_mask;
} VMTier5Frame;

typedef struct VMTier5Result {
    uint16_t entry;
    uint32_t slot;
    uint8_t ip_advance;
    uintptr_t dispatch_table_addr;
    const char *source_function;
    const char *model_status;
} VMTier5Result;

typedef struct VMTier5ModelInfo {
    uint16_t entry;
    uint8_t ip_advance;
    uint8_t function_count;
    uint16_t span_bytes;
    uint16_t insns;
    uint16_t covered_bytes;
    const char *target;
    const char *functions;
    const char *large_status;
    const char *slot_status;
    const char *slot_expr;
    const char *effects;
} VMTier5ModelInfo;

static int16_t vm_tier5_s16(const uint8_t *p) { return *(const int16_t *)p; }
static uint32_t vm_tier5_u32(const uint8_t *p) { return *(const uint32_t *)p; }
static uint32_t *vm_tier5_state_cell(VMTier5Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER5_STATE_OFF); }
static uint32_t *vm_tier5_flags_cell(VMTier5Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER5_FLAGS_OFF); }
static uint8_t **vm_tier5_ip_cell(VMTier5Frame *vm) { return (uint8_t **)(vm->frame + VM_TIER5_IP_PTR_OFF); }
static uint8_t *vm_tier5_ip(VMTier5Frame *vm) { return *vm_tier5_ip_cell(vm); }
static void vm_tier5_advance_ip(VMTier5Frame *vm, uint8_t amount) { *vm_tier5_ip_cell(vm) += amount; }
static uintptr_t vm_tier5_dispatch_base(VMTier5Frame *vm) { return *(uintptr_t *)(vm->frame + VM_TIER5_DISPATCH_BASE_OFF); }
static VMTier5Result vm_tier5_done(VMTier5Frame *vm, uint16_t entry, uint32_t slot, uint8_t advance, const char *source_function, const char *status) {
    return (VMTier5Result){ entry, slot, advance, slot == VM_TIER5_UNKNOWN_SLOT ? 0u : vm_tier5_dispatch_base(vm) + slot, source_function, status };
}

const VMTier5ModelInfo k_vmtier5_models[] = {
    { 76, 6, 1, 1059, 234, 1050, "0x87d17", "function_87d17", "large_single_function_state_machine", "non_dispatch_frame_cell_return", "", "large=large_single_function_state_machine; ip += 6; retdec_tail=updates state/flags through two immediate-mixed rounds, ip += 6, returns frame+113; insns=234; span=1059; ip_reads=+0x2/4,+0x0/2; frame_reads=0x170,0x71,0x194,0x23,0xa,0x81,0x10f; frame_writes=0x23,0x170,0x16f,0x0,0xa; functions=function_87d17; ranges=0x87d17-0x88131" },
    { 293, 10, 1, 1098, 233, 1085, "0xb593f", "function_b593f", "large_single_function_predicate_machine", "g2_mask_return_no_dispatch_slot", "", "large=large_single_function_predicate_machine; ip += 10; retdec_tail=updates frame[96], flags, state, ip += 10, returns g2 mask; insns=233; span=1098; ip_reads=+0x0/4,+0x0/8,+0x8/2; frame_reads=0xa,0x23,0x81,0x194,0x10f,0x170; frame_writes=0x23,0x170,0x60,0xa; functions=function_b593f; ranges=0xb593f-0xb5d7c" },
    { 238, 5, 1, 1155, 255, 1145, "0xa94a5", "function_a94a5", "large_single_function_conditional_store", "state_effect_only_no_dispatch_return", "", "large=large_single_function_conditional_store; ip += 5; retdec_tail=optional operand-selected frame store, state/flag rewrite, ip += 5, returns result value; insns=255; span=1155; ip_reads=+0x2/1,+0x0/2,+0x3/2; frame_reads=0x0,0x23,0xa,0x60,0x81,0x71,0x170,0x194,0x10f; frame_writes=0x170,0x23,0x71,0x60,0x0,0xa; functions=function_a94a5; ranges=0xa94a5-0xa991e" },
    { 306, 6, 1, 1207, 258, 1194, "0xb7bba", "function_b7bba", "large_single_function_noisy_dispatch_base_return", "noisy_dispatch_base_candidate_comment_only", "", "large=large_single_function_noisy_dispatch_base_return; ip += 6; retdec_tail=references dispatch base but mixes g1/g2/g3 masks, frame pointer, wide constants, and state before return; insns=258; span=1207; ip_reads=+0x0/4,+0x4/2; frame_reads=0x23,0x81,0x170,0xa,0x0,0x10f; frame_writes=0x170,0x23,0x16f,0x0,0xa; functions=function_b7bba; ranges=0xb7bba-0xb8064" },
    { 355, 5, 1, 1301, 283, 1291, "0xc240f", "function_c240f", "large_single_function_conditional_store", "masked_small_return_no_dispatch_slot", "", "large=large_single_function_conditional_store; ip += 5; retdec_tail=optional operand-selected frame store, state rewrite, ip += 5, returns masked low pointer residue; insns=283; span=1301; ip_reads=+0x4/1,+0x2/2,+0x0/2; frame_reads=0x23,0x194,0x81,0xa,0x0,0x60,0x71,0x10f; frame_writes=0x23,0x170,0x71,0x0,0x60,0xa; functions=function_c240f; ranges=0xc240f-0xc291a" },
    { 23, 5, 1, 1521, 329, 1509, "0x7d007", "function_7d007", "large_single_function_flag_stack_cell", "frame_ip_cell_return_no_dispatch_slot", "", "large=large_single_function_flag_stack_cell; ip += 5; retdec_tail=builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns frame+10; insns=329; span=1521; ip_reads=+0x2/1,+0x0/2,+0x3/2; frame_reads=0x0,0x81,0x71,0xa,0x23,0x60,0x194,0x170,0x10f; frame_writes=0x170,0x71,0x23,0x0,0x60,0xa; functions=function_7d007; ranges=0x7d007-0x7d5ec" },
    { 325, 5, 1, 1643, 353, 1630, "0xbba0f", "function_bba0f", "large_single_function_flag_stack_cell", "raw_predicate_return_no_dispatch_slot", "", "large=large_single_function_flag_stack_cell; ip += 5; retdec_tail=builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns raw predicate; insns=353; span=1643; ip_reads=+0x2/1,+0x0/2,+0x3/2; frame_reads=0x71,0xa,0x60,0x81,0x0,0x194,0x23,0x10f; frame_writes=0x170,0x71,0x60,0x0,0xa; functions=function_bba0f; ranges=0xbba0f-0xbc06d" },
    { 236, 5, 1, 1654, 351, 1641, "0xa87b6", "function_a87b6", "large_single_function_flag_stack_cell", "constant_return_no_dispatch_slot", "", "large=large_single_function_flag_stack_cell; ip += 5; retdec_tail=builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns constant 124; insns=351; span=1654; ip_reads=+0x2/1,+0x3/2,+0x0/2; frame_reads=0x0,0x23,0x170,0x81,0x194,0xa,0x60,0x71,0x10f; frame_writes=0x23,0x170,0x71,0x0,0x60,0xa; functions=function_a87b6; ranges=0xa87b6-0xa8e1f" },
    { 156, 5, 1, 1876, 408, 1862, "0x98354", "function_98354", "large_single_function_flag_stack_cell", "constant_return_no_dispatch_slot", "", "large=large_single_function_flag_stack_cell; ip += 5; retdec_tail=builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns constant 1; insns=408; span=1876; ip_reads=+0x4/1,+0x0/2,+0x2/2; frame_reads=0x23,0x194,0x0,0xa,0x81,0x170,0x60,0x71,0x10f; frame_writes=0x23,0x170,0x71,0x0,0x60,0xa; functions=function_98354; ranges=0x98354-0x98a9a" },
};

static VMTier5Result vm_tier5_entry_076(VMTier5Frame *vm) {
    /* rank=110 target=0x87d17 primary=function_87d17 sidecar=vm_unobserved_handlers_retdec_batch04.c functions=1 span=1059 insns=234 covered=1050 */
    /* large=large_single_function_state_machine; ip += 6; retdec_tail=updates state/flags through two immediate-mixed rounds, ip += 6, returns frame+113; insns=234; span=1059; ip_reads=+0x2/4,+0x0/2; frame_reads=0x170,0x71,0x194,0x23,0xa,0x81,0x10f; frame_writes=0x23,0x170,0x16f,0x0,0xa; functions=function_87d17; ranges=0x87d17-0x88131 */
    uint8_t *ip = vm_tier5_ip(vm);
    uint32_t state0 = *vm_tier5_state_cell(vm);
    uint32_t flags0 = *vm_tier5_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    *vm_tier5_flags_cell(vm) = (*vm_tier5_flags_cell(vm) ^ (*vm_tier5_state_cell(vm) | 0x1244c900u)) & 0x3247cd40u;
    *vm_tier5_state_cell(vm) = *vm_tier5_state_cell(vm) - 0x795b9aa4u;
    vm->frame[367] = 0;
    state0 = *vm_tier5_state_cell(vm);
    uint32_t mix0 = (state0 + vm_tier5_u32(ip + 2)) ^ *vm_tier5_flags_cell(vm);
    *vm_tier5_state_cell(vm) = mix0 + state0;
    *vm_tier5_flags_cell(vm) = *vm_tier5_flags_cell(vm) ^ 0x6e4cfe36u;
    *(uint64_t *)vm->frame = (uint64_t)(mix0 ^ 0x0da3b7d9u);
    uint32_t mix1 = *vm_tier5_state_cell(vm) ^ *vm_tier5_flags_cell(vm);
    *vm_tier5_state_cell(vm) = mix1;
    *vm_tier5_flags_cell(vm) = (*vm_tier5_flags_cell(vm) & mix1) - 0x6ff7d7e8u;
    state0 = *vm_tier5_state_cell(vm);
    *vm_tier5_state_cell(vm) = ((state0 + (uint32_t)(int32_t)vm_tier5_s16(ip + 0)) ^ 0x5381a641u) & state0;
    vm_tier5_advance_ip(vm, 6);
    return vm_tier5_done(vm, 76, VM_TIER5_UNKNOWN_SLOT, 6, "function_87d17", "non_dispatch_frame_cell_return");
}

static VMTier5Result vm_tier5_entry_293(VMTier5Frame *vm) {
    /* rank=111 target=0xb593f primary=function_b593f sidecar=vm_unobserved_handlers_retdec_batch05.c functions=1 span=1098 insns=233 covered=1085 */
    /* large=large_single_function_predicate_machine; ip += 10; retdec_tail=updates frame[96], flags, state, ip += 10, returns g2 mask; insns=233; span=1098; ip_reads=+0x0/4,+0x0/8,+0x8/2; frame_reads=0xa,0x23,0x81,0x194,0x10f,0x170; frame_writes=0x23,0x170,0x60,0xa; functions=function_b593f; ranges=0xb593f-0xb5d7c */
    uint8_t *ip = vm_tier5_ip(vm);
    uint32_t state0 = *vm_tier5_state_cell(vm);
    uint32_t flags0 = *vm_tier5_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier5_advance_ip(vm, 10);
    return vm_tier5_done(vm, 293, VM_TIER5_UNKNOWN_SLOT, 10, "function_b593f", "g2_mask_return_no_dispatch_slot");
}

static VMTier5Result vm_tier5_entry_238(VMTier5Frame *vm) {
    /* rank=112 target=0xa94a5 primary=function_a94a5 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=1 span=1155 insns=255 covered=1145 */
    /* large=large_single_function_conditional_store; ip += 5; retdec_tail=optional operand-selected frame store, state/flag rewrite, ip += 5, returns result value; insns=255; span=1155; ip_reads=+0x2/1,+0x0/2,+0x3/2; frame_reads=0x0,0x23,0xa,0x60,0x81,0x71,0x170,0x194,0x10f; frame_writes=0x170,0x23,0x71,0x60,0x0,0xa; functions=function_a94a5; ranges=0xa94a5-0xa991e */
    uint8_t *ip = vm_tier5_ip(vm);
    uint32_t state0 = *vm_tier5_state_cell(vm);
    uint32_t flags0 = *vm_tier5_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier5_advance_ip(vm, 5);
    return vm_tier5_done(vm, 238, VM_TIER5_UNKNOWN_SLOT, 5, "function_a94a5", "state_effect_only_no_dispatch_return");
}

static VMTier5Result vm_tier5_entry_306(VMTier5Frame *vm) {
    /* rank=113 target=0xb7bba primary=function_b7bba sidecar=vm_unobserved_handlers_retdec_batch05.c functions=1 span=1207 insns=258 covered=1194 */
    /* large=large_single_function_noisy_dispatch_base_return; ip += 6; retdec_tail=references dispatch base but mixes g1/g2/g3 masks, frame pointer, wide constants, and state before return; insns=258; span=1207; ip_reads=+0x0/4,+0x4/2; frame_reads=0x23,0x81,0x170,0xa,0x0,0x10f; frame_writes=0x170,0x23,0x16f,0x0,0xa; functions=function_b7bba; ranges=0xb7bba-0xb8064 */
    uint8_t *ip = vm_tier5_ip(vm);
    uint32_t state0 = *vm_tier5_state_cell(vm);
    uint32_t flags0 = *vm_tier5_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier5_advance_ip(vm, 6);
    return vm_tier5_done(vm, 306, VM_TIER5_UNKNOWN_SLOT, 6, "function_b7bba", "noisy_dispatch_base_candidate_comment_only");
}

static VMTier5Result vm_tier5_entry_355(VMTier5Frame *vm) {
    /* rank=114 target=0xc240f primary=function_c240f sidecar=vm_unobserved_handlers_retdec_batch05.c functions=1 span=1301 insns=283 covered=1291 */
    /* large=large_single_function_conditional_store; ip += 5; retdec_tail=optional operand-selected frame store, state rewrite, ip += 5, returns masked low pointer residue; insns=283; span=1301; ip_reads=+0x4/1,+0x2/2,+0x0/2; frame_reads=0x23,0x194,0x81,0xa,0x0,0x60,0x71,0x10f; frame_writes=0x23,0x170,0x71,0x0,0x60,0xa; functions=function_c240f; ranges=0xc240f-0xc291a */
    uint8_t *ip = vm_tier5_ip(vm);
    uint32_t state0 = *vm_tier5_state_cell(vm);
    uint32_t flags0 = *vm_tier5_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier5_advance_ip(vm, 5);
    return vm_tier5_done(vm, 355, VM_TIER5_UNKNOWN_SLOT, 5, "function_c240f", "masked_small_return_no_dispatch_slot");
}

static VMTier5Result vm_tier5_entry_023(VMTier5Frame *vm) {
    /* rank=115 target=0x7d007 primary=function_7d007 sidecar=vm_unobserved_handlers_retdec_batch06.c functions=1 span=1521 insns=329 covered=1509 */
    /* large=large_single_function_flag_stack_cell; ip += 5; retdec_tail=builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns frame+10; insns=329; span=1521; ip_reads=+0x2/1,+0x0/2,+0x3/2; frame_reads=0x0,0x81,0x71,0xa,0x23,0x60,0x194,0x170,0x10f; frame_writes=0x170,0x71,0x23,0x0,0x60,0xa; functions=function_7d007; ranges=0x7d007-0x7d5ec */
    uint8_t *ip = vm_tier5_ip(vm);
    uint32_t state0 = *vm_tier5_state_cell(vm);
    uint32_t flags0 = *vm_tier5_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier5_advance_ip(vm, 5);
    return vm_tier5_done(vm, 23, VM_TIER5_UNKNOWN_SLOT, 5, "function_7d007", "frame_ip_cell_return_no_dispatch_slot");
}

static VMTier5Result vm_tier5_entry_325(VMTier5Frame *vm) {
    /* rank=116 target=0xbba0f primary=function_bba0f sidecar=vm_unobserved_handlers_retdec_batch06.c functions=1 span=1643 insns=353 covered=1630 */
    /* large=large_single_function_flag_stack_cell; ip += 5; retdec_tail=builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns raw predicate; insns=353; span=1643; ip_reads=+0x2/1,+0x0/2,+0x3/2; frame_reads=0x71,0xa,0x60,0x81,0x0,0x194,0x23,0x10f; frame_writes=0x170,0x71,0x60,0x0,0xa; functions=function_bba0f; ranges=0xbba0f-0xbc06d */
    uint8_t *ip = vm_tier5_ip(vm);
    uint32_t state0 = *vm_tier5_state_cell(vm);
    uint32_t flags0 = *vm_tier5_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier5_advance_ip(vm, 5);
    return vm_tier5_done(vm, 325, VM_TIER5_UNKNOWN_SLOT, 5, "function_bba0f", "raw_predicate_return_no_dispatch_slot");
}

static VMTier5Result vm_tier5_entry_236(VMTier5Frame *vm) {
    /* rank=117 target=0xa87b6 primary=function_a87b6 sidecar=vm_unobserved_handlers_retdec_batch06.c functions=1 span=1654 insns=351 covered=1641 */
    /* large=large_single_function_flag_stack_cell; ip += 5; retdec_tail=builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns constant 124; insns=351; span=1654; ip_reads=+0x2/1,+0x3/2,+0x0/2; frame_reads=0x0,0x23,0x170,0x81,0x194,0xa,0x60,0x71,0x10f; frame_writes=0x23,0x170,0x71,0x0,0x60,0xa; functions=function_a87b6; ranges=0xa87b6-0xa8e1f */
    uint8_t *ip = vm_tier5_ip(vm);
    uint32_t state0 = *vm_tier5_state_cell(vm);
    uint32_t flags0 = *vm_tier5_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier5_advance_ip(vm, 5);
    return vm_tier5_done(vm, 236, VM_TIER5_UNKNOWN_SLOT, 5, "function_a87b6", "constant_return_no_dispatch_slot");
}

static VMTier5Result vm_tier5_entry_156(VMTier5Frame *vm) {
    /* rank=118 target=0x98354 primary=function_98354 sidecar=vm_unobserved_handlers_retdec_batch06.c functions=1 span=1876 insns=408 covered=1862 */
    /* large=large_single_function_flag_stack_cell; ip += 5; retdec_tail=builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns constant 1; insns=408; span=1876; ip_reads=+0x4/1,+0x0/2,+0x2/2; frame_reads=0x23,0x194,0x0,0xa,0x81,0x170,0x60,0x71,0x10f; frame_writes=0x23,0x170,0x71,0x0,0x60,0xa; functions=function_98354; ranges=0x98354-0x98a9a */
    uint8_t *ip = vm_tier5_ip(vm);
    uint32_t state0 = *vm_tier5_state_cell(vm);
    uint32_t flags0 = *vm_tier5_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier5_advance_ip(vm, 5);
    return vm_tier5_done(vm, 156, VM_TIER5_UNKNOWN_SLOT, 5, "function_98354", "constant_return_no_dispatch_slot");
}

static VMTier5Result vm_tier5_call(unsigned entry, VMTier5Frame *vm) {
    switch (entry) {
    case 76: return vm_tier5_entry_076(vm);
    case 293: return vm_tier5_entry_293(vm);
    case 238: return vm_tier5_entry_238(vm);
    case 306: return vm_tier5_entry_306(vm);
    case 355: return vm_tier5_entry_355(vm);
    case 23: return vm_tier5_entry_023(vm);
    case 325: return vm_tier5_entry_325(vm);
    case 236: return vm_tier5_entry_236(vm);
    case 156: return vm_tier5_entry_156(vm);
    default: return (VMTier5Result){ (uint16_t)entry, VM_TIER5_UNKNOWN_SLOT, 0, 0, "-", "not_tier5_modelled" };
    }
}
