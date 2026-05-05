/*
 * Static-only tier1 handler models.
 *
 * These functions name and classify the medium single-function
 * static-only RetDec handlers.  The clean dispatch-table tails are
 * executable; masked/noisy/native-tail rows remain explicit evidence
 * for the next operand-rewrite pass.
 */
#include <stdint.h>
#include <stddef.h>

#define VM_TIER1_UNKNOWN_SLOT 0xffffffffu
#define VM_TIER1_IP_PTR_OFF 10
#define VM_TIER1_FLAGS_OFF 35
#define VM_TIER1_DISPATCH_BASE_OFF 271
#define VM_TIER1_STATE_OFF 368

typedef struct VMTier1Frame {
    uint8_t *frame;
    uintptr_t g2_mask;
    uintptr_t g3_mask;
    uintptr_t g5_mask;
} VMTier1Frame;

typedef struct VMTier1Result {
    uint16_t entry;
    uint32_t slot;
    uint8_t ip_advance;
    uintptr_t dispatch_table_addr;
    const char *source_function;
    const char *model_status;
} VMTier1Result;

typedef struct VMTier1ModelInfo {
    uint16_t entry;
    uint8_t ip_advance;
    const char *target;
    const char *source_function;
    const char *slot_status;
    const char *slot_expr;
    const char *effects;
} VMTier1ModelInfo;

static int16_t vm_tier1_s16(const uint8_t *p) { return *(const int16_t *)p; }
static uint32_t *vm_tier1_state_cell(VMTier1Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER1_STATE_OFF); }
static uint32_t *vm_tier1_flags_cell(VMTier1Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER1_FLAGS_OFF); }
static uint8_t **vm_tier1_ip_cell(VMTier1Frame *vm) { return (uint8_t **)(vm->frame + VM_TIER1_IP_PTR_OFF); }
static uint8_t *vm_tier1_ip(VMTier1Frame *vm) { return *vm_tier1_ip_cell(vm); }
static void vm_tier1_advance_ip(VMTier1Frame *vm, uint8_t amount) { *vm_tier1_ip_cell(vm) += amount; }
static uintptr_t vm_tier1_dispatch_base(VMTier1Frame *vm) { return *(uintptr_t *)(vm->frame + VM_TIER1_DISPATCH_BASE_OFF); }
static uint32_t vm_tier1_slot16(uint32_t value) { return value & 0xffffu; }
static VMTier1Result vm_tier1_done(VMTier1Frame *vm, uint16_t entry, uint32_t slot, uint8_t advance, const char *source_function, const char *status) {
    return (VMTier1Result){ entry, slot, advance, slot == VM_TIER1_UNKNOWN_SLOT ? 0u : vm_tier1_dispatch_base(vm) + slot, source_function, status };
}

const VMTier1ModelInfo k_vmtier1_models[] = {
    { 159, 9, "0x992cd", "function_992cd", "state_effect_only_no_dispatch_return", "", "ip += 9; retdec_tail=state = 2*state0 + s16(ip+4); paired qword pointer copy/step; ip_reads=+0x2/2,+0x0/2,+0x6/2,+0x4/2; frame_reads=0xa,0x23,0x199,0x194,0x10f,0x170,0x81; frame_writes=0x23,0x170,0xa" },
    { 244, 9, "0xaaf3e", "function_aaf3e", "state_pointer_return_no_dispatch_slot", "", "ip += 9; retdec_tail=word copy through paired pointer step; flags optionally adjusted; ip_reads=+0x7/2,+0x0/2,+0x5/2,+0x2/2; frame_reads=0xa,0x170,0x0,0x199,0x23,0x10f; frame_writes=0x23,0xa" },
    { 12, 8, "0x7acd8", "function_7acd8", "retdec_dispatch_table_slot", "(s16(ip+0) - (state0 | flags0) + 0x61ec39cd) & 0xffff", "ip += 8; retdec_tail=state = slot_source | (state0 | flags0); byte store through pointer step; ip_reads=+0x4/2,+0x6/2,+0x2/2,+0x0/2; frame_reads=0xa,0x23,0x10f,0x170; frame_writes=0x170,0xa" },
    { 234, 11, "0xa823e", "function_a823e", "state_effect_only_no_dispatch_return", "", "ip += 11; retdec_tail=state = ((state0 ^ s16(ip+0)) + 0x6352399c) | state0; byte compare/pointer step; ip_reads=+0x3/2,+0x9/2,+0x5/2,+0x2/1,+0x7/2,+0x0/2; frame_reads=0xa,0x199,0x81,0x10f,0x170; frame_writes=0x23,0x170,0xa" },
    { 213, 8, "0xa3dc7", "function_a3dc7", "state_effect_only_no_dispatch_return", "", "ip += 8; retdec_tail=state = state0 + 0x45c6c3bb - s16(ip+2); word copy through pointer step; ip_reads=+0x6/2,+0x0/2,+0x4/2,+0x2/2; frame_reads=0xa,0x81,0x0,0x10f,0x194; frame_writes=0x170,0xa" },
    { 100, 11, "0x8cc81", "function_8cc81", "retdec_dispatch_table_slot", "(s16(ip+9) - 0x4b931360 + state0) & 0xffff", "ip += 11; retdec_tail=state = slot_source ^ state0; word compare/pointer step; ip_reads=+0x0/2,+0x2/2,+0x6/2,+0x8/1,+0x4/2,+0x9/2; frame_reads=0xa,0x170,0x0,0x199,0x10f; frame_writes=0x170,0xa" },
    { 224, 9, "0xa68c2", "function_a68c2", "state_effect_only_no_dispatch_return", "", "ip += 9; retdec_tail=state = (state0 + s16(ip+3)) | state0; dword paired pointer step; ip_reads=+0x5/2,+0x7/2,+0x1/2,+0x3/2; frame_reads=0xa,0x170,0x199,0x23,0x0,0x10f,0x60; frame_writes=0x23,0x170,0xa" },
    { 63, 11, "0x84e1d", "function_84e1d", "state_effect_only_no_dispatch_return", "", "ip += 11; retdec_tail=state = ((s16(ip+2) - state0) ^ 0x14083b5a) + state0; byte compare/pointer step; ip_reads=+0x0/2,+0x4/2,+0x7/2,+0x6/1,+0x9/2,+0x2/2; frame_reads=0xa,0x81,0x199,0x10f,0x170,0x194; frame_writes=0x170,0xa" },
    { 182, 8, "0x9d24c", "function_9d24c", "state_effect_only_no_dispatch_return", "", "ip += 8; retdec_tail=state = state0 - (s16(ip+4) ^ 0x4174ae3e); word store through pointer step; ip_reads=+0x2/2,+0x6/2,+0x0/2,+0x4/2; frame_reads=0xa,0x23,0x10f; frame_writes=0x23,0x170,0xa" },
    { 279, 5, "0xb23f7", "function_b23f7", "noisy_dispatch_return_candidate", "(s16(ip+2) - (state0 | flags0) + 0x68baea26) & 0xffff", "ip += 5; retdec_tail=state = slot_source | (state0 | flags0); native return expression includes dispatch base plus obfuscation residue; ip_reads=+0x4/1,+0x0/2,+0x2/2; frame_reads=0xa,0x0,0x23,0x194,0x81,0x71,0x10f,0x170; frame_writes=0x71,0x170,0x0,0xa" },
    { 25, 11, "0x7d941", "function_7d941", "state_effect_only_no_dispatch_return", "", "ip += 11; retdec_tail=state = (state0 + s16(ip+4)) ^ state0; word compare/pointer step; ip_reads=+0x0/2,+0x7/2,+0x9/2,+0x6/1,+0x2/2,+0x4/2; frame_reads=0xa,0x170,0x71,0x199,0x10f; frame_writes=0x23,0x170,0xa" },
    { 228, 11, "0xa6f79", "function_a6f79", "state_effect_only_no_dispatch_return", "", "ip += 11; retdec_tail=state = (s16(ip+4) ^ 0x5537ca3f) & state_after_flag_or; dword compare/pointer step; ip_reads=+0x0/2,+0x2/2,+0x9/2,+0x6/1,+0x7/2,+0x4/2; frame_reads=0xa,0x170,0x199,0x23,0x10f; frame_writes=0x170,0x23,0xa" },
    { 77, 5, "0x88131", "function_88131", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = state0 + s16(ip+0); flag/operand rewrite body precedes tail; ip_reads=+0x2/1,+0x3/2,+0x0/2; frame_reads=0xa,0x0,0x71,0x10f; frame_writes=0x71,0x0,0x23,0x170,0xa" },
    { 59, 11, "0x84302", "function_84302", "state_effect_only_no_dispatch_return", "", "ip += 11; retdec_tail=state = (s16(ip+6) - 0x26d85c20) & state0; qword compare/pointer step; ip_reads=+0x8/2,+0x2/2,+0x4/2,+0xa/1,+0x0/2,+0x6/2; frame_reads=0xa,0x81,0x199,0x71,0x10f; frame_writes=0x170,0xa" },
    { 6, 9, "0x7971e", "function_7971e", "state_effect_only_no_dispatch_return", "", "ip += 9; retdec_tail=state = state0 + 0x17cd41c1 + (state0 ^ s16(ip+7)); paired word pointer step; ip_reads=+0x3/2,+0x0/2,+0x5/2,+0x7/2; frame_reads=0xa,0x81,0x199,0x10f,0x170; frame_writes=0x170,0xa" },
    { 155, 9, "0x980ab", "function_980ab", "state_effect_only_no_dispatch_return", "", "ip += 9; retdec_tail=state = (s16(ip+2) - 0x24797ebc) | state0; byte pointer step; ip_reads=+0x0/2,+0x4/2,+0x6/2,+0x2/2; frame_reads=0xa,0x170,0x0,0x199,0x10f; frame_writes=0x170,0xa" },
    { 298, 9, "0xb6902", "function_b6902", "pointer_effect_no_state_slot", "", "ip += 9; retdec_tail=paired word pointer step; no clean state/dispatch slot in RetDec tail; ip_reads=+0x5/2,+0x3/2,+0x0/2,+0x7/2; frame_reads=0xa,0x199,0x10f,0x170; frame_writes=0xa" },
    { 162, 11, "0x99b3c", "function_99b3c", "state_effect_only_no_dispatch_return", "", "ip += 11; retdec_tail=state adjusted by operand/constant chain after byte compare; no clean dispatch slot; ip_reads=+0x7/2,+0x3/2,+0x5/2,+0x2/1,+0x0/2,+0x9/2; frame_reads=0xa,0x199,0x10f; frame_writes=0x170,0xa" },
    { 286, 5, "0xb42e2", "function_b42e2", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = (state0 + s16(ip+2)) ^ state0; flag/operand rewrite body precedes tail; ip_reads=+0x4/1,+0x0/2,+0x2/2; frame_reads=0xa,0x0,0x170,0x23,0x194,0x71,0x10f; frame_writes=0x170,0x71,0x0,0x23,0xa" },
    { 84, 5, "0x8983b", "function_8983b", "masked_return_slot_requires_g3", "(state0 + s16(ip+0)) & g3_mask", "ip += 5; retdec_tail=state = state0 + (state0 + s16(ip+0)); return is masked by g3; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x170,0x194,0x23,0x71,0x10f; frame_writes=0x170,0x71,0x0,0xa" },
    { 14, 5, "0x7b3be", "function_7b3be", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = (s16(ip+0) - 0x7584d103) ^ (state0 & flags0); flag/operand rewrite body precedes tail; ip_reads=+0x4/1,+0x2/2,+0x0/2; frame_reads=0xa,0x0,0x60,0xe1,0x23,0x71,0x10f; frame_writes=0x71,0x170,0x0,0x60,0xa" },
    { 197, 5, "0xa006b", "function_a006b", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = state0 - (state0 ^ s16(ip+2)); predicate scratch side effects present; ip_reads=+0x0/2,+0x4/1,+0x2/2; frame_reads=0xa,0x10f,0x170,0x81; frame_writes=0x199,0x170,0xa" },
    { 193, 9, "0x9f77c", "function_9f77c", "state_effect_only_no_dispatch_return", "", "ip += 9; retdec_tail=state = (-0x1aead89a - state0 + s16(ip+5)) ^ state0; paired word pointer step; ip_reads=+0x3/2,+0x7/2,+0x0/2,+0x5/2; frame_reads=0xa,0x23,0x71,0x199,0x10f,0x170; frame_writes=0x170,0xa" },
    { 72, 11, "0x868bd", "function_868bd", "state_effect_only_no_dispatch_return", "", "ip += 11; retdec_tail=state = (state0 & 0x1cdfcc1d) - 0x17395727 - ((state0 & 0x1cdfcc1d) ^ s16(ip+0)); byte compare/pointer step; ip_reads=+0x9/2,+0x3/2,+0x7/2,+0x2/1,+0x5/2,+0x0/2; frame_reads=0xa,0x199,0x81,0x10f,0x170; frame_writes=0x170,0xa" },
    { 97, 5, "0x8c5b9", "function_8c5b9", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = (s16(ip+3) - state0) & state0; flag/operand rewrite body precedes tail; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x60,0x0,0x194,0x23,0x71,0x10f,0x170; frame_writes=0x170,0x71,0x60,0x0,0xa" },
    { 55, 5, "0x83b40", "function_83b40", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = state0 | s16(ip+2); flag/operand rewrite body precedes tail; ip_reads=+0x0/2,+0x4/1,+0x2/2; frame_reads=0xa,0x60,0x194,0x0,0x71,0x10f,0x170; frame_writes=0x71,0x60,0x0,0x170,0xa" },
    { 61, 11, "0x84762", "function_84762", "state_effect_only_no_dispatch_return", "", "ip += 11; retdec_tail=state = 2*state0 - s16(ip+5) - 0x326db6ec; byte compare/pointer step; ip_reads=+0x3/2,+0x0/2,+0x9/2,+0x2/1,+0x7/2,+0x5/2; frame_reads=0xa,0x194,0x199,0x71,0x10f,0x170; frame_writes=0x23,0x170,0xa" },
    { 178, 11, "0x9c74a", "function_9c74a", "compare_only_no_state_slot", "", "ip += 11; retdec_tail=byte/word compare path updates flags; RetDec tail only advances IP; ip_reads=+0x9/2,+0x2/2,+0x0/2,+0x6/1,+0x7/2,+0x4/2; frame_reads=0xa,0x81,0x199,0x10f; frame_writes=0xa" },
    { 41, 5, "0x8129d", "function_8129d", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = ((state0 ^ s16(ip+0)) - 0x7c7cd82f) | state0; flag/operand rewrite body precedes tail; ip_reads=+0x2/1,+0x3/2,+0x0/2; frame_reads=0xa,0x0,0x60,0x194,0x23,0x71,0x10f,0x170; frame_writes=0x170,0x71,0x0,0x60,0xa" },
    { 235, 5, "0xa8450", "function_a8450", "masked_return_slot_requires_g3", "(state0 + s16(ip+0)) & g3_mask", "ip += 5; retdec_tail=state = state0 + (state0 + s16(ip+0)); return is masked by g3; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x170,0x194,0x71,0x10f; frame_writes=0x71,0x60,0x0,0x170,0xa" },
    { 262, 11, "0xaef02", "function_aef02", "retdec_dispatch_table_slot", "(state0 + flags0 + 0x8f09 + s16(ip+8)) & 0xffff", "ip += 11; retdec_tail=state = state0 + flags0; qword compare/pointer step before dispatch-table load; ip_reads=+0x2/2,+0x4/2,+0x0/2,+0xa/1,+0x6/2,+0x8/2; frame_reads=0xa,0x170,0x199,0x194,0x23,0x10f; frame_writes=0x170,0xa" },
    { 16, 5, "0x7b77c", "function_7b77c", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = (s16(ip+1) - 0x699ad46a) ^ state0; flag/operand rewrite body precedes tail; ip_reads=+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x60,0x0,0x71,0x23,0xe1,0x10f,0x81; frame_writes=0x170,0x71,0x60,0x0,0xa" },
    { 344, 5, "0xbff6a", "function_bff6a", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = ((state0 ^ s16(ip+0)) - 0x6a74b67c) & state0; predicate scratch side effects present; ip_reads=+0x2/2,+0x4/1,+0x0/2; frame_reads=0xa,0x10f,0x170; frame_writes=0x199,0x170,0xa" },
    { 106, 5, "0x8eb79", "function_8eb79", "masked_dispatch_table_slot_requires_g3", "s16(ip+3) & g3_mask", "ip += 5; retdec_tail=state = state0 - s16(ip+3); return adds dispatch base to g3-masked operand; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x0,0x60,0x194,0x71,0x10f; frame_writes=0x71,0x0,0x60,0x23,0x170,0xa" },
    { 218, 5, "0xa4df7", "function_a4df7", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = (s16(ip+0) - (state0 & 0x0844d83d) ^ 0x77e8718e) | (state0 & 0x0844d83d); ip_reads=+0x2/2,+0x4/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x194,0x71,0x10f,0x170; frame_writes=0x71,0x170,0x60,0x0,0xa" },
    { 206, 5, "0xa1b3e", "function_a1b3e", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = (s16(ip+3) + 0x79a60067) & state0; flag/operand rewrite body precedes tail; ip_reads=+0x1/2,+0x0/1,+0x3/2; frame_reads=0xa,0x71,0x60,0x0,0x194,0x10f; frame_writes=0x71,0x60,0x0,0x170,0xa" },
    { 272, 11, "0xb0e30", "function_b0e30", "state_effect_only_no_dispatch_return", "", "ip += 11; retdec_tail=state = 2*state0 - s16(ip+0); qword compare/pointer step; ip_reads=+0x6/2,+0x4/2,+0x8/2,+0xa/1,+0x2/2,+0x0/2; frame_reads=0xa,0x170,0x23,0x199,0x0,0x10f; frame_writes=0x170,0xa" },
    { 68, 5, "0x85b89", "function_85b89", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = ((state0 ^ selected_operand) + 0x72639e4e) ^ state0; flag/operand rewrite body precedes tail; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x60,0x0,0x23,0x194,0x71,0x10f,0x170; frame_writes=0x71,0x23,0x60,0x0,0x170,0xa" },
    { 247, 5, "0xabd6f", "function_abd6f", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state = (s16(ip+0) + 0x4c044f6f + state0) ^ state0; predicate scratch side effects present; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x10f,0x170,0x81; frame_writes=0x199,0x170,0xa" },
    { 44, 5, "0x81b7f", "function_81b7f", "masked_table_load_requires_g5", "(s16(ip+1) - state0) & g5_mask", "ip += 5; retdec_tail=state = (s16(ip+1) - state0) | state0; dispatch-table load uses g5-masked slot source; ip_reads=+0x3/2,+0x0/1,+0x1/2; frame_reads=0xa,0x10f,0x170; frame_writes=0x199,0x170,0xa" },
    { 164, 5, "0x99e99", "function_99e99", "retdec_raw_mod_slot", "((((state0 - flags0 - 0x05d1cfd6) | 0x7c3f7914) ^ s16(ip+0)) - 0x51b094c3) & 0xffff", "ip += 5; retdec_tail=RetDec return is raw v46 % 0x10000, not a dispatch-base load; ip_reads=+0x2/2,+0x4/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x194,0x71,0x23,0x10f,0x170; frame_writes=0x170,0x71,0x0,0x60,0xa" },
    { 150, 5, "0x96f2a", "function_96f2a", "state_effect_only_no_dispatch_return", "", "ip += 5; retdec_tail=state adjusted by operand/constant chain; return expression subtracts dispatch base residue; ip_reads=+0x0/2,+0x4/1,+0x2/2; frame_reads=0xa,0x0,0x60,0x194,0x71,0x23,0x10f; frame_writes=0x71,0x170,0x60,0x0,0xa" },
    { 170, 11, "0x9b0c8", "function_9b0c8", "state_effect_only_no_dispatch_return", "", "ip += 11; retdec_tail=state = 2*state0 + s16(ip+7); byte compare/pointer step; ip_reads=+0x9/2,+0x3/2,+0x5/2,+0x0/1,+0x1/2,+0x7/2; frame_reads=0xa,0x194,0x199,0x81,0x23,0x10f,0x170; frame_writes=0x23,0x170,0xa" },
};

static VMTier1Result vm_tier1_entry_159(VMTier1Frame *vm) {
    /* rank=12 target=0x992cd retdec=function_992cd sidecar=vm_unobserved_handlers_retdec_batch00.c */
    /* ip += 9; retdec_tail=state = 2*state0 + s16(ip+4); paired qword pointer copy/step; ip_reads=+0x2/2,+0x0/2,+0x6/2,+0x4/2; frame_reads=0xa,0x23,0x199,0x194,0x10f,0x170,0x81; frame_writes=0x23,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 9);
    return vm_tier1_done(vm, 159, VM_TIER1_UNKNOWN_SLOT, 9, "function_992cd", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_244(VMTier1Frame *vm) {
    /* rank=13 target=0xaaf3e retdec=function_aaf3e sidecar=vm_unobserved_handlers_retdec_batch01.c */
    /* ip += 9; retdec_tail=word copy through paired pointer step; flags optionally adjusted; ip_reads=+0x7/2,+0x0/2,+0x5/2,+0x2/2; frame_reads=0xa,0x170,0x0,0x199,0x23,0x10f; frame_writes=0x23,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 9);
    return vm_tier1_done(vm, 244, VM_TIER1_UNKNOWN_SLOT, 9, "function_aaf3e", "state_pointer_return_no_dispatch_slot");
}

static VMTier1Result vm_tier1_entry_012(VMTier1Frame *vm) {
    /* rank=14 target=0x7acd8 retdec=function_7acd8 sidecar=vm_unobserved_handlers_retdec_batch01.c */
    /* ip += 8; retdec_tail=state = slot_source | (state0 | flags0); byte store through pointer step; ip_reads=+0x4/2,+0x6/2,+0x2/2,+0x0/2; frame_reads=0xa,0x23,0x10f,0x170; frame_writes=0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    uint32_t state_or_flags = state0 | flags0;
    uint32_t slot_source = (uint32_t)((int32_t)vm_tier1_s16(ip + 0) - (int32_t)state_or_flags + 0x61ec39cd);
    *vm_tier1_state_cell(vm) = slot_source | state_or_flags;
    vm_tier1_advance_ip(vm, 8);
    return vm_tier1_done(vm, 12, vm_tier1_slot16(slot_source), 8, "function_7acd8", "retdec_dispatch_table_slot");
}

static VMTier1Result vm_tier1_entry_234(VMTier1Frame *vm) {
    /* rank=15 target=0xa823e retdec=function_a823e sidecar=vm_unobserved_handlers_retdec_batch01.c */
    /* ip += 11; retdec_tail=state = ((state0 ^ s16(ip+0)) + 0x6352399c) | state0; byte compare/pointer step; ip_reads=+0x3/2,+0x9/2,+0x5/2,+0x2/1,+0x7/2,+0x0/2; frame_reads=0xa,0x199,0x81,0x10f,0x170; frame_writes=0x23,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 234, VM_TIER1_UNKNOWN_SLOT, 11, "function_a823e", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_213(VMTier1Frame *vm) {
    /* rank=16 target=0xa3dc7 retdec=function_a3dc7 sidecar=vm_unobserved_handlers_retdec_batch01.c */
    /* ip += 8; retdec_tail=state = state0 + 0x45c6c3bb - s16(ip+2); word copy through pointer step; ip_reads=+0x6/2,+0x0/2,+0x4/2,+0x2/2; frame_reads=0xa,0x81,0x0,0x10f,0x194; frame_writes=0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 8);
    return vm_tier1_done(vm, 213, VM_TIER1_UNKNOWN_SLOT, 8, "function_a3dc7", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_100(VMTier1Frame *vm) {
    /* rank=17 target=0x8cc81 retdec=function_8cc81 sidecar=vm_unobserved_handlers_retdec_batch01.c */
    /* ip += 11; retdec_tail=state = slot_source ^ state0; word compare/pointer step; ip_reads=+0x0/2,+0x2/2,+0x6/2,+0x8/1,+0x4/2,+0x9/2; frame_reads=0xa,0x170,0x0,0x199,0x10f; frame_writes=0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)flags0;
    uint32_t slot_source = (uint32_t)((int32_t)vm_tier1_s16(ip + 9) - 0x4b931360 + (int32_t)state0);
    *vm_tier1_state_cell(vm) = slot_source ^ state0;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 100, vm_tier1_slot16(slot_source), 11, "function_8cc81", "retdec_dispatch_table_slot");
}

static VMTier1Result vm_tier1_entry_224(VMTier1Frame *vm) {
    /* rank=18 target=0xa68c2 retdec=function_a68c2 sidecar=vm_unobserved_handlers_retdec_batch01.c */
    /* ip += 9; retdec_tail=state = (state0 + s16(ip+3)) | state0; dword paired pointer step; ip_reads=+0x5/2,+0x7/2,+0x1/2,+0x3/2; frame_reads=0xa,0x170,0x199,0x23,0x0,0x10f,0x60; frame_writes=0x23,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 9);
    return vm_tier1_done(vm, 224, VM_TIER1_UNKNOWN_SLOT, 9, "function_a68c2", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_063(VMTier1Frame *vm) {
    /* rank=19 target=0x84e1d retdec=function_84e1d sidecar=vm_unobserved_handlers_retdec_batch01.c */
    /* ip += 11; retdec_tail=state = ((s16(ip+2) - state0) ^ 0x14083b5a) + state0; byte compare/pointer step; ip_reads=+0x0/2,+0x4/2,+0x7/2,+0x6/1,+0x9/2,+0x2/2; frame_reads=0xa,0x81,0x199,0x10f,0x170,0x194; frame_writes=0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 63, VM_TIER1_UNKNOWN_SLOT, 11, "function_84e1d", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_182(VMTier1Frame *vm) {
    /* rank=20 target=0x9d24c retdec=function_9d24c sidecar=vm_unobserved_handlers_retdec_batch01.c */
    /* ip += 8; retdec_tail=state = state0 - (s16(ip+4) ^ 0x4174ae3e); word store through pointer step; ip_reads=+0x2/2,+0x6/2,+0x0/2,+0x4/2; frame_reads=0xa,0x23,0x10f; frame_writes=0x23,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 8);
    return vm_tier1_done(vm, 182, VM_TIER1_UNKNOWN_SLOT, 8, "function_9d24c", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_279(VMTier1Frame *vm) {
    /* rank=21 target=0xb23f7 retdec=function_b23f7 sidecar=vm_unobserved_handlers_retdec_batch01.c */
    /* ip += 5; retdec_tail=state = slot_source | (state0 | flags0); native return expression includes dispatch base plus obfuscation residue; ip_reads=+0x4/1,+0x0/2,+0x2/2; frame_reads=0xa,0x0,0x23,0x194,0x81,0x71,0x10f,0x170; frame_writes=0x71,0x170,0x0,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 279, VM_TIER1_UNKNOWN_SLOT, 5, "function_b23f7", "noisy_dispatch_return_candidate");
}

static VMTier1Result vm_tier1_entry_025(VMTier1Frame *vm) {
    /* rank=22 target=0x7d941 retdec=function_7d941 sidecar=vm_unobserved_handlers_retdec_batch01.c */
    /* ip += 11; retdec_tail=state = (state0 + s16(ip+4)) ^ state0; word compare/pointer step; ip_reads=+0x0/2,+0x7/2,+0x9/2,+0x6/1,+0x2/2,+0x4/2; frame_reads=0xa,0x170,0x71,0x199,0x10f; frame_writes=0x23,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 25, VM_TIER1_UNKNOWN_SLOT, 11, "function_7d941", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_228(VMTier1Frame *vm) {
    /* rank=23 target=0xa6f79 retdec=function_a6f79 sidecar=vm_unobserved_handlers_retdec_batch01.c */
    /* ip += 11; retdec_tail=state = (s16(ip+4) ^ 0x5537ca3f) & state_after_flag_or; dword compare/pointer step; ip_reads=+0x0/2,+0x2/2,+0x9/2,+0x6/1,+0x7/2,+0x4/2; frame_reads=0xa,0x170,0x199,0x23,0x10f; frame_writes=0x170,0x23,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 228, VM_TIER1_UNKNOWN_SLOT, 11, "function_a6f79", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_077(VMTier1Frame *vm) {
    /* rank=24 target=0x88131 retdec=function_88131 sidecar=vm_unobserved_handlers_retdec_batch02.c */
    /* ip += 5; retdec_tail=state = state0 + s16(ip+0); flag/operand rewrite body precedes tail; ip_reads=+0x2/1,+0x3/2,+0x0/2; frame_reads=0xa,0x0,0x71,0x10f; frame_writes=0x71,0x0,0x23,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 77, VM_TIER1_UNKNOWN_SLOT, 5, "function_88131", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_059(VMTier1Frame *vm) {
    /* rank=25 target=0x84302 retdec=function_84302 sidecar=vm_unobserved_handlers_retdec_batch02.c */
    /* ip += 11; retdec_tail=state = (s16(ip+6) - 0x26d85c20) & state0; qword compare/pointer step; ip_reads=+0x8/2,+0x2/2,+0x4/2,+0xa/1,+0x0/2,+0x6/2; frame_reads=0xa,0x81,0x199,0x71,0x10f; frame_writes=0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 59, VM_TIER1_UNKNOWN_SLOT, 11, "function_84302", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_006(VMTier1Frame *vm) {
    /* rank=26 target=0x7971e retdec=function_7971e sidecar=vm_unobserved_handlers_retdec_batch02.c */
    /* ip += 9; retdec_tail=state = state0 + 0x17cd41c1 + (state0 ^ s16(ip+7)); paired word pointer step; ip_reads=+0x3/2,+0x0/2,+0x5/2,+0x7/2; frame_reads=0xa,0x81,0x199,0x10f,0x170; frame_writes=0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 9);
    return vm_tier1_done(vm, 6, VM_TIER1_UNKNOWN_SLOT, 9, "function_7971e", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_155(VMTier1Frame *vm) {
    /* rank=27 target=0x980ab retdec=function_980ab sidecar=vm_unobserved_handlers_retdec_batch02.c */
    /* ip += 9; retdec_tail=state = (s16(ip+2) - 0x24797ebc) | state0; byte pointer step; ip_reads=+0x0/2,+0x4/2,+0x6/2,+0x2/2; frame_reads=0xa,0x170,0x0,0x199,0x10f; frame_writes=0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 9);
    return vm_tier1_done(vm, 155, VM_TIER1_UNKNOWN_SLOT, 9, "function_980ab", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_298(VMTier1Frame *vm) {
    /* rank=28 target=0xb6902 retdec=function_b6902 sidecar=vm_unobserved_handlers_retdec_batch02.c */
    /* ip += 9; retdec_tail=paired word pointer step; no clean state/dispatch slot in RetDec tail; ip_reads=+0x5/2,+0x3/2,+0x0/2,+0x7/2; frame_reads=0xa,0x199,0x10f,0x170; frame_writes=0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 9);
    return vm_tier1_done(vm, 298, VM_TIER1_UNKNOWN_SLOT, 9, "function_b6902", "pointer_effect_no_state_slot");
}

static VMTier1Result vm_tier1_entry_162(VMTier1Frame *vm) {
    /* rank=29 target=0x99b3c retdec=function_99b3c sidecar=vm_unobserved_handlers_retdec_batch02.c */
    /* ip += 11; retdec_tail=state adjusted by operand/constant chain after byte compare; no clean dispatch slot; ip_reads=+0x7/2,+0x3/2,+0x5/2,+0x2/1,+0x0/2,+0x9/2; frame_reads=0xa,0x199,0x10f; frame_writes=0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 162, VM_TIER1_UNKNOWN_SLOT, 11, "function_99b3c", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_286(VMTier1Frame *vm) {
    /* rank=30 target=0xb42e2 retdec=function_b42e2 sidecar=vm_unobserved_handlers_retdec_batch02.c */
    /* ip += 5; retdec_tail=state = (state0 + s16(ip+2)) ^ state0; flag/operand rewrite body precedes tail; ip_reads=+0x4/1,+0x0/2,+0x2/2; frame_reads=0xa,0x0,0x170,0x23,0x194,0x71,0x10f; frame_writes=0x170,0x71,0x0,0x23,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 286, VM_TIER1_UNKNOWN_SLOT, 5, "function_b42e2", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_084(VMTier1Frame *vm) {
    /* rank=31 target=0x8983b retdec=function_8983b sidecar=vm_unobserved_handlers_retdec_batch02.c */
    /* ip += 5; retdec_tail=state = state0 + (state0 + s16(ip+0)); return is masked by g3; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x170,0x194,0x23,0x71,0x10f; frame_writes=0x170,0x71,0x0,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 84, VM_TIER1_UNKNOWN_SLOT, 5, "function_8983b", "masked_return_slot_requires_g3");
}

static VMTier1Result vm_tier1_entry_014(VMTier1Frame *vm) {
    /* rank=32 target=0x7b3be retdec=function_7b3be sidecar=vm_unobserved_handlers_retdec_batch02.c */
    /* ip += 5; retdec_tail=state = (s16(ip+0) - 0x7584d103) ^ (state0 & flags0); flag/operand rewrite body precedes tail; ip_reads=+0x4/1,+0x2/2,+0x0/2; frame_reads=0xa,0x0,0x60,0xe1,0x23,0x71,0x10f; frame_writes=0x71,0x170,0x0,0x60,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 14, VM_TIER1_UNKNOWN_SLOT, 5, "function_7b3be", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_197(VMTier1Frame *vm) {
    /* rank=33 target=0xa006b retdec=function_a006b sidecar=vm_unobserved_handlers_retdec_batch02.c */
    /* ip += 5; retdec_tail=state = state0 - (state0 ^ s16(ip+2)); predicate scratch side effects present; ip_reads=+0x0/2,+0x4/1,+0x2/2; frame_reads=0xa,0x10f,0x170,0x81; frame_writes=0x199,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 197, VM_TIER1_UNKNOWN_SLOT, 5, "function_a006b", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_193(VMTier1Frame *vm) {
    /* rank=34 target=0x9f77c retdec=function_9f77c sidecar=vm_unobserved_handlers_retdec_batch02.c */
    /* ip += 9; retdec_tail=state = (-0x1aead89a - state0 + s16(ip+5)) ^ state0; paired word pointer step; ip_reads=+0x3/2,+0x7/2,+0x0/2,+0x5/2; frame_reads=0xa,0x23,0x71,0x199,0x10f,0x170; frame_writes=0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 9);
    return vm_tier1_done(vm, 193, VM_TIER1_UNKNOWN_SLOT, 9, "function_9f77c", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_072(VMTier1Frame *vm) {
    /* rank=35 target=0x868bd retdec=function_868bd sidecar=vm_unobserved_handlers_retdec_batch03.c */
    /* ip += 11; retdec_tail=state = (state0 & 0x1cdfcc1d) - 0x17395727 - ((state0 & 0x1cdfcc1d) ^ s16(ip+0)); byte compare/pointer step; ip_reads=+0x9/2,+0x3/2,+0x7/2,+0x2/1,+0x5/2,+0x0/2; frame_reads=0xa,0x199,0x81,0x10f,0x170; frame_writes=0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 72, VM_TIER1_UNKNOWN_SLOT, 11, "function_868bd", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_097(VMTier1Frame *vm) {
    /* rank=36 target=0x8c5b9 retdec=function_8c5b9 sidecar=vm_unobserved_handlers_retdec_batch03.c */
    /* ip += 5; retdec_tail=state = (s16(ip+3) - state0) & state0; flag/operand rewrite body precedes tail; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x60,0x0,0x194,0x23,0x71,0x10f,0x170; frame_writes=0x170,0x71,0x60,0x0,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 97, VM_TIER1_UNKNOWN_SLOT, 5, "function_8c5b9", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_055(VMTier1Frame *vm) {
    /* rank=37 target=0x83b40 retdec=function_83b40 sidecar=vm_unobserved_handlers_retdec_batch03.c */
    /* ip += 5; retdec_tail=state = state0 | s16(ip+2); flag/operand rewrite body precedes tail; ip_reads=+0x0/2,+0x4/1,+0x2/2; frame_reads=0xa,0x60,0x194,0x0,0x71,0x10f,0x170; frame_writes=0x71,0x60,0x0,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 55, VM_TIER1_UNKNOWN_SLOT, 5, "function_83b40", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_061(VMTier1Frame *vm) {
    /* rank=38 target=0x84762 retdec=function_84762 sidecar=vm_unobserved_handlers_retdec_batch03.c */
    /* ip += 11; retdec_tail=state = 2*state0 - s16(ip+5) - 0x326db6ec; byte compare/pointer step; ip_reads=+0x3/2,+0x0/2,+0x9/2,+0x2/1,+0x7/2,+0x5/2; frame_reads=0xa,0x194,0x199,0x71,0x10f,0x170; frame_writes=0x23,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 61, VM_TIER1_UNKNOWN_SLOT, 11, "function_84762", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_178(VMTier1Frame *vm) {
    /* rank=39 target=0x9c74a retdec=function_9c74a sidecar=vm_unobserved_handlers_retdec_batch03.c */
    /* ip += 11; retdec_tail=byte/word compare path updates flags; RetDec tail only advances IP; ip_reads=+0x9/2,+0x2/2,+0x0/2,+0x6/1,+0x7/2,+0x4/2; frame_reads=0xa,0x81,0x199,0x10f; frame_writes=0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 178, VM_TIER1_UNKNOWN_SLOT, 11, "function_9c74a", "compare_only_no_state_slot");
}

static VMTier1Result vm_tier1_entry_041(VMTier1Frame *vm) {
    /* rank=40 target=0x8129d retdec=function_8129d sidecar=vm_unobserved_handlers_retdec_batch03.c */
    /* ip += 5; retdec_tail=state = ((state0 ^ s16(ip+0)) - 0x7c7cd82f) | state0; flag/operand rewrite body precedes tail; ip_reads=+0x2/1,+0x3/2,+0x0/2; frame_reads=0xa,0x0,0x60,0x194,0x23,0x71,0x10f,0x170; frame_writes=0x170,0x71,0x0,0x60,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 41, VM_TIER1_UNKNOWN_SLOT, 5, "function_8129d", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_235(VMTier1Frame *vm) {
    /* rank=41 target=0xa8450 retdec=function_a8450 sidecar=vm_unobserved_handlers_retdec_batch03.c */
    /* ip += 5; retdec_tail=state = state0 + (state0 + s16(ip+0)); return is masked by g3; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x170,0x194,0x71,0x10f; frame_writes=0x71,0x60,0x0,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 235, VM_TIER1_UNKNOWN_SLOT, 5, "function_a8450", "masked_return_slot_requires_g3");
}

static VMTier1Result vm_tier1_entry_262(VMTier1Frame *vm) {
    /* rank=42 target=0xaef02 retdec=function_aef02 sidecar=vm_unobserved_handlers_retdec_batch03.c */
    /* ip += 11; retdec_tail=state = state0 + flags0; qword compare/pointer step before dispatch-table load; ip_reads=+0x2/2,+0x4/2,+0x0/2,+0xa/1,+0x6/2,+0x8/2; frame_reads=0xa,0x170,0x199,0x194,0x23,0x10f; frame_writes=0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    uint32_t state_after_add = state0 + flags0;
    uint32_t slot_source = state_after_add + 0x00008f09u + (uint32_t)(int32_t)vm_tier1_s16(ip + 8);
    *vm_tier1_state_cell(vm) = state_after_add;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 262, vm_tier1_slot16(slot_source), 11, "function_aef02", "retdec_dispatch_table_slot");
}

static VMTier1Result vm_tier1_entry_016(VMTier1Frame *vm) {
    /* rank=43 target=0x7b77c retdec=function_7b77c sidecar=vm_unobserved_handlers_retdec_batch03.c */
    /* ip += 5; retdec_tail=state = (s16(ip+1) - 0x699ad46a) ^ state0; flag/operand rewrite body precedes tail; ip_reads=+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x60,0x0,0x71,0x23,0xe1,0x10f,0x81; frame_writes=0x170,0x71,0x60,0x0,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 16, VM_TIER1_UNKNOWN_SLOT, 5, "function_7b77c", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_344(VMTier1Frame *vm) {
    /* rank=44 target=0xbff6a retdec=function_bff6a sidecar=vm_unobserved_handlers_retdec_batch03.c */
    /* ip += 5; retdec_tail=state = ((state0 ^ s16(ip+0)) - 0x6a74b67c) & state0; predicate scratch side effects present; ip_reads=+0x2/2,+0x4/1,+0x0/2; frame_reads=0xa,0x10f,0x170; frame_writes=0x199,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 344, VM_TIER1_UNKNOWN_SLOT, 5, "function_bff6a", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_106(VMTier1Frame *vm) {
    /* rank=45 target=0x8eb79 retdec=function_8eb79 sidecar=vm_unobserved_handlers_retdec_batch03.c */
    /* ip += 5; retdec_tail=state = state0 - s16(ip+3); return adds dispatch base to g3-masked operand; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x0,0x60,0x194,0x71,0x10f; frame_writes=0x71,0x0,0x60,0x23,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 106, VM_TIER1_UNKNOWN_SLOT, 5, "function_8eb79", "masked_dispatch_table_slot_requires_g3");
}

static VMTier1Result vm_tier1_entry_218(VMTier1Frame *vm) {
    /* rank=46 target=0xa4df7 retdec=function_a4df7 sidecar=vm_unobserved_handlers_retdec_batch04.c */
    /* ip += 5; retdec_tail=state = (s16(ip+0) - (state0 & 0x0844d83d) ^ 0x77e8718e) | (state0 & 0x0844d83d); ip_reads=+0x2/2,+0x4/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x194,0x71,0x10f,0x170; frame_writes=0x71,0x170,0x60,0x0,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 218, VM_TIER1_UNKNOWN_SLOT, 5, "function_a4df7", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_206(VMTier1Frame *vm) {
    /* rank=47 target=0xa1b3e retdec=function_a1b3e sidecar=vm_unobserved_handlers_retdec_batch04.c */
    /* ip += 5; retdec_tail=state = (s16(ip+3) + 0x79a60067) & state0; flag/operand rewrite body precedes tail; ip_reads=+0x1/2,+0x0/1,+0x3/2; frame_reads=0xa,0x71,0x60,0x0,0x194,0x10f; frame_writes=0x71,0x60,0x0,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 206, VM_TIER1_UNKNOWN_SLOT, 5, "function_a1b3e", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_272(VMTier1Frame *vm) {
    /* rank=48 target=0xb0e30 retdec=function_b0e30 sidecar=vm_unobserved_handlers_retdec_batch04.c */
    /* ip += 11; retdec_tail=state = 2*state0 - s16(ip+0); qword compare/pointer step; ip_reads=+0x6/2,+0x4/2,+0x8/2,+0xa/1,+0x2/2,+0x0/2; frame_reads=0xa,0x170,0x23,0x199,0x0,0x10f; frame_writes=0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 272, VM_TIER1_UNKNOWN_SLOT, 11, "function_b0e30", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_068(VMTier1Frame *vm) {
    /* rank=49 target=0x85b89 retdec=function_85b89 sidecar=vm_unobserved_handlers_retdec_batch04.c */
    /* ip += 5; retdec_tail=state = ((state0 ^ selected_operand) + 0x72639e4e) ^ state0; flag/operand rewrite body precedes tail; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x60,0x0,0x23,0x194,0x71,0x10f,0x170; frame_writes=0x71,0x23,0x60,0x0,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 68, VM_TIER1_UNKNOWN_SLOT, 5, "function_85b89", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_247(VMTier1Frame *vm) {
    /* rank=50 target=0xabd6f retdec=function_abd6f sidecar=vm_unobserved_handlers_retdec_batch04.c */
    /* ip += 5; retdec_tail=state = (s16(ip+0) + 0x4c044f6f + state0) ^ state0; predicate scratch side effects present; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x10f,0x170,0x81; frame_writes=0x199,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 247, VM_TIER1_UNKNOWN_SLOT, 5, "function_abd6f", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_044(VMTier1Frame *vm) {
    /* rank=51 target=0x81b7f retdec=function_81b7f sidecar=vm_unobserved_handlers_retdec_batch04.c */
    /* ip += 5; retdec_tail=state = (s16(ip+1) - state0) | state0; dispatch-table load uses g5-masked slot source; ip_reads=+0x3/2,+0x0/1,+0x1/2; frame_reads=0xa,0x10f,0x170; frame_writes=0x199,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 44, VM_TIER1_UNKNOWN_SLOT, 5, "function_81b7f", "masked_table_load_requires_g5");
}

static VMTier1Result vm_tier1_entry_164(VMTier1Frame *vm) {
    /* rank=52 target=0x99e99 retdec=function_99e99 sidecar=vm_unobserved_handlers_retdec_batch04.c */
    /* ip += 5; retdec_tail=RetDec return is raw v46 % 0x10000, not a dispatch-base load; ip_reads=+0x2/2,+0x4/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x194,0x71,0x23,0x10f,0x170; frame_writes=0x170,0x71,0x0,0x60,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 164, VM_TIER1_UNKNOWN_SLOT, 5, "function_99e99", "retdec_raw_mod_slot");
}

static VMTier1Result vm_tier1_entry_150(VMTier1Frame *vm) {
    /* rank=53 target=0x96f2a retdec=function_96f2a sidecar=vm_unobserved_handlers_retdec_batch04.c */
    /* ip += 5; retdec_tail=state adjusted by operand/constant chain; return expression subtracts dispatch base residue; ip_reads=+0x0/2,+0x4/1,+0x2/2; frame_reads=0xa,0x0,0x60,0x194,0x71,0x23,0x10f; frame_writes=0x71,0x170,0x60,0x0,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 5);
    return vm_tier1_done(vm, 150, VM_TIER1_UNKNOWN_SLOT, 5, "function_96f2a", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_entry_170(VMTier1Frame *vm) {
    /* rank=54 target=0x9b0c8 retdec=function_9b0c8 sidecar=vm_unobserved_handlers_retdec_batch04.c */
    /* ip += 11; retdec_tail=state = 2*state0 + s16(ip+7); byte compare/pointer step; ip_reads=+0x9/2,+0x3/2,+0x5/2,+0x0/1,+0x1/2,+0x7/2; frame_reads=0xa,0x194,0x199,0x81,0x23,0x10f,0x170; frame_writes=0x23,0x170,0xa */
    uint8_t *ip = vm_tier1_ip(vm);
    uint32_t state0 = *vm_tier1_state_cell(vm);
    uint32_t flags0 = *vm_tier1_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier1_advance_ip(vm, 11);
    return vm_tier1_done(vm, 170, VM_TIER1_UNKNOWN_SLOT, 11, "function_9b0c8", "state_effect_only_no_dispatch_return");
}

static VMTier1Result vm_tier1_call(unsigned entry, VMTier1Frame *vm) {
    switch (entry) {
    case 159: return vm_tier1_entry_159(vm);
    case 244: return vm_tier1_entry_244(vm);
    case 12: return vm_tier1_entry_012(vm);
    case 234: return vm_tier1_entry_234(vm);
    case 213: return vm_tier1_entry_213(vm);
    case 100: return vm_tier1_entry_100(vm);
    case 224: return vm_tier1_entry_224(vm);
    case 63: return vm_tier1_entry_063(vm);
    case 182: return vm_tier1_entry_182(vm);
    case 279: return vm_tier1_entry_279(vm);
    case 25: return vm_tier1_entry_025(vm);
    case 228: return vm_tier1_entry_228(vm);
    case 77: return vm_tier1_entry_077(vm);
    case 59: return vm_tier1_entry_059(vm);
    case 6: return vm_tier1_entry_006(vm);
    case 155: return vm_tier1_entry_155(vm);
    case 298: return vm_tier1_entry_298(vm);
    case 162: return vm_tier1_entry_162(vm);
    case 286: return vm_tier1_entry_286(vm);
    case 84: return vm_tier1_entry_084(vm);
    case 14: return vm_tier1_entry_014(vm);
    case 197: return vm_tier1_entry_197(vm);
    case 193: return vm_tier1_entry_193(vm);
    case 72: return vm_tier1_entry_072(vm);
    case 97: return vm_tier1_entry_097(vm);
    case 55: return vm_tier1_entry_055(vm);
    case 61: return vm_tier1_entry_061(vm);
    case 178: return vm_tier1_entry_178(vm);
    case 41: return vm_tier1_entry_041(vm);
    case 235: return vm_tier1_entry_235(vm);
    case 262: return vm_tier1_entry_262(vm);
    case 16: return vm_tier1_entry_016(vm);
    case 344: return vm_tier1_entry_344(vm);
    case 106: return vm_tier1_entry_106(vm);
    case 218: return vm_tier1_entry_218(vm);
    case 206: return vm_tier1_entry_206(vm);
    case 272: return vm_tier1_entry_272(vm);
    case 68: return vm_tier1_entry_068(vm);
    case 247: return vm_tier1_entry_247(vm);
    case 44: return vm_tier1_entry_044(vm);
    case 164: return vm_tier1_entry_164(vm);
    case 150: return vm_tier1_entry_150(vm);
    case 170: return vm_tier1_entry_170(vm);
    default: return (VMTier1Result){ (uint16_t)entry, VM_TIER1_UNKNOWN_SLOT, 0, 0, "-", "not_tier1_modelled" };
    }
}
