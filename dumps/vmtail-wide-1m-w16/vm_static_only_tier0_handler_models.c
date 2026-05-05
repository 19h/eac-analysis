/*
 * Static-only tier0 handler models.
 *
 * These functions translate the smallest unobserved single-function
 * RetDec sidecars into frame-level C.  They preserve the native frame
 * offsets used by RetDec while naming the VM slots we already know:
 *   frame+0x00a: bytecode IP pointer
 *   frame+0x023: flags/scratch dword
 *   frame+0x10f: dispatch table base
 *   frame+0x170: VM state dword
 *   frame+0x199: native predicate scratch
 * This is analysis source, not a drop-in runtime ABI.
 */
#include <stdint.h>
#include <stddef.h>

#define VM_TIER0_UNKNOWN_SLOT 0xffffffffu
#define VM_TIER0_IP_PTR_OFF 10
#define VM_TIER0_FLAGS_OFF 35
#define VM_TIER0_DISPATCH_BASE_OFF 271
#define VM_TIER0_STATE_OFF 368
#define VM_TIER0_PREDICATE_OFF 409

typedef struct VMTier0Frame {
    uint8_t *frame;
    uintptr_t g2_mask;
    uintptr_t g3_mask;
} VMTier0Frame;

typedef struct VMTier0Result {
    uint16_t entry;
    uint32_t slot;
    uint8_t ip_advance;
    uintptr_t dispatch_table_addr;
    const char *source_function;
    const char *model_status;
} VMTier0Result;

static uint8_t *vm_tier0_addr(VMTier0Frame *vm, int16_t off) { return vm->frame + off; }
static uint8_t *vm_tier0_addr_u16(VMTier0Frame *vm, uint16_t off) { return vm->frame + off; }
static uint8_t *vm_tier0_ptr(int64_t value) { return (uint8_t *)(uintptr_t)value; }
static int16_t vm_tier0_s16(const uint8_t *p) { return *(const int16_t *)p; }
static uint16_t vm_tier0_u16(const uint8_t *p) { return *(const uint16_t *)p; }
static int64_t *vm_tier0_qword_cell(VMTier0Frame *vm, int16_t off) { return (int64_t *)vm_tier0_addr(vm, off); }
static uint32_t *vm_tier0_state_cell(VMTier0Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER0_STATE_OFF); }
static uint32_t *vm_tier0_flags_cell(VMTier0Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER0_FLAGS_OFF); }
static uint8_t **vm_tier0_ip_cell(VMTier0Frame *vm) { return (uint8_t **)(vm->frame + VM_TIER0_IP_PTR_OFF); }
static uint8_t *vm_tier0_ip(VMTier0Frame *vm) { return *vm_tier0_ip_cell(vm); }
static void vm_tier0_advance_ip(VMTier0Frame *vm, uint8_t amount) { *vm_tier0_ip_cell(vm) += amount; }
static uintptr_t vm_tier0_dispatch_base(VMTier0Frame *vm) { return *(uintptr_t *)(vm->frame + VM_TIER0_DISPATCH_BASE_OFF); }
static uint32_t vm_tier0_slot16(uint32_t value) { return value & 0xffffu; }
static uint32_t vm_tier0_mask_g3(VMTier0Frame *vm) { return vm->g3_mask ? (uint32_t)vm->g3_mask : 0xffffu; }
static int64_t vm_tier0_predicate(VMTier0Frame *vm) { return *vm_tier0_qword_cell(vm, VM_TIER0_PREDICATE_OFF); }
static intptr_t vm_tier0_step(VMTier0Frame *vm, int64_t predicate, intptr_t width) {
    return ((((uintptr_t)predicate) & vm->g2_mask) == 0u) ? width : -width;
}
static intptr_t vm_tier0_step_with_scratch(VMTier0Frame *vm, int64_t predicate, intptr_t width) {
    return ((((uintptr_t)predicate | (uintptr_t)vm_tier0_predicate(vm)) & vm->g2_mask) == 0u) ? width : -width;
}
static VMTier0Result vm_tier0_done(VMTier0Frame *vm, uint16_t entry, uint32_t slot, uint8_t advance, const char *source_function, const char *status) {
    return (VMTier0Result){ entry, slot, advance, slot == VM_TIER0_UNKNOWN_SLOT ? 0u : vm_tier0_dispatch_base(vm) + slot, source_function, status };
}

static VMTier0Result vm_tier0_entry_057(VMTier0Frame *vm) {
    uint8_t *ip = vm_tier0_ip(vm);
    uint32_t state0 = *vm_tier0_state_cell(vm);
    uint32_t slot_source = state0 + 0x09df7e26u - (state0 ^ (uint32_t)(int32_t)vm_tier0_s16(ip + 0));
    *(uint64_t *)vm_tier0_addr_u16(vm, vm_tier0_u16(ip + 2)) = *(uint64_t *)vm_tier0_addr_u16(vm, 0x00a1u);
    *vm_tier0_state_cell(vm) = slot_source;
    vm_tier0_advance_ip(vm, 4);
    return vm_tier0_done(vm, 57, vm_tier0_slot16(slot_source), 4, "function_841f9", "retdec_state_slot");
}

static VMTier0Result vm_tier0_entry_255(VMTier0Frame *vm) {
    uint8_t *ip = vm_tier0_ip(vm);
    int64_t source_value = *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 2));
    int64_t *dst_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 6));
    *(int64_t *)vm_tier0_ptr(*dst_ptr_cell) = source_value;
    *dst_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 0)), 8);
    uint32_t slot = ((uint32_t)((int32_t)vm_tier0_s16(ip + 4) - (int32_t)*vm_tier0_state_cell(vm))) & vm_tier0_mask_g3(vm);
    vm_tier0_advance_ip(vm, 8);
    return vm_tier0_done(vm, 255, slot, 8, "function_ad768", "retdec_return_slot");
}

static VMTier0Result vm_tier0_entry_096(VMTier0Frame *vm) {
    uint8_t *ip = vm_tier0_ip(vm);
    uint32_t state0 = *vm_tier0_state_cell(vm);
    int64_t *src_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 2));
    *(uint64_t *)vm_tier0_addr_u16(vm, vm_tier0_u16(ip + 6)) = *(uint64_t *)vm_tier0_ptr(*src_ptr_cell);
    *src_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 0)), 8);
    uint32_t slot_source = (uint32_t)((int32_t)vm_tier0_s16(ip + 4) + 0x1f18e1aa);
    *vm_tier0_state_cell(vm) = slot_source ^ state0;
    vm_tier0_advance_ip(vm, 8);
    return vm_tier0_done(vm, 96, vm_tier0_slot16(slot_source), 8, "function_8c4cf", "decode_candidate_slot");
}

static VMTier0Result vm_tier0_entry_071(VMTier0Frame *vm) {
    uint8_t *ip = vm_tier0_ip(vm);
    int64_t *src_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 4));
    *vm_tier0_addr_u16(vm, vm_tier0_u16(ip + 6)) = *(uint8_t *)vm_tier0_ptr(*src_ptr_cell);
    *src_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 0)), 1);
    uint32_t slot = vm_tier0_u16(ip + 2);
    vm_tier0_advance_ip(vm, 8);
    return vm_tier0_done(vm, 71, slot, 8, "function_86766", "decode_candidate_slot");
}

static VMTier0Result vm_tier0_entry_073(VMTier0Frame *vm) {
    uint8_t *ip = vm_tier0_ip(vm);
    *vm_tier0_state_cell(vm) = *vm_tier0_state_cell(vm) - 0x03f7f9f2u;
    int64_t *src_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 4));
    *(int16_t *)vm_tier0_addr(vm, vm_tier0_s16(ip + 6)) = *(int16_t *)vm_tier0_ptr(*src_ptr_cell);
    *src_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 0)), 2);
    uint32_t final_state = (uint32_t)(int32_t)vm_tier0_s16(ip + 2);
    *vm_tier0_state_cell(vm) = final_state;
    vm_tier0_advance_ip(vm, 8);
    return vm_tier0_done(vm, 73, vm_tier0_slot16(final_state), 8, "function_86be4", "final_state_candidate_slot");
}

static VMTier0Result vm_tier0_entry_339(VMTier0Frame *vm) {
    uint8_t *ip = vm_tier0_ip(vm);
    uint32_t flags0 = *vm_tier0_flags_cell(vm);
    *vm_tier0_state_cell(vm) = 0x2393cc37u - flags0 + *vm_tier0_state_cell(vm);
    int64_t *src_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 4));
    *(int32_t *)vm_tier0_addr(vm, vm_tier0_s16(ip + 6)) = *(int32_t *)vm_tier0_ptr(*src_ptr_cell);
    *src_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 2)), 4);
    uint32_t slot = vm_tier0_u16(ip + 0);
    vm_tier0_advance_ip(vm, 8);
    return vm_tier0_done(vm, 339, slot, 8, "function_bf2d5", "decode_candidate_slot");
}

static VMTier0Result vm_tier0_entry_324(VMTier0Frame *vm) {
    uint8_t *ip = vm_tier0_ip(vm);
    *vm_tier0_state_cell(vm) = *vm_tier0_state_cell(vm) + *vm_tier0_flags_cell(vm);
    uint32_t state_after_add = *vm_tier0_state_cell(vm);
    int64_t *dst_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 6));
    *(int16_t *)vm_tier0_ptr(*dst_ptr_cell) = (int16_t)*vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 4));
    *dst_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 2)), 2);
    uint32_t slot_source = (uint32_t)((int32_t)vm_tier0_s16(ip + 0) - (int32_t)state_after_add + 0x6e06065a);
    *vm_tier0_state_cell(vm) = slot_source & state_after_add;
    vm_tier0_advance_ip(vm, 8);
    return vm_tier0_done(vm, 324, vm_tier0_slot16(slot_source), 8, "function_bb8aa", "retdec_table_slot");
}

static VMTier0Result vm_tier0_entry_038(VMTier0Frame *vm) {
    uint8_t *ip = vm_tier0_ip(vm);
    uint32_t flags0 = *vm_tier0_flags_cell(vm);
    if ((flags0 & 2u) != 0u) {
        *vm_tier0_flags_cell(vm) = (flags0 & 0x55b62e53u) ^ 0x0d779badu;
    }
    int64_t *dst_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 0));
    *(uint8_t *)vm_tier0_ptr(*dst_ptr_cell) = *(uint8_t *)vm_tier0_addr_u16(vm, vm_tier0_u16(ip + 6));
    *dst_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 4)), 1);
    uint32_t slot_source = (uint32_t)((int32_t)vm_tier0_s16(ip + 2) - 0x23aef0b2);
    *vm_tier0_state_cell(vm) = slot_source;
    vm_tier0_advance_ip(vm, 8);
    return vm_tier0_done(vm, 38, vm_tier0_slot16(slot_source), 8, "function_80d79", "decode_candidate_slot");
}

static VMTier0Result vm_tier0_entry_067(VMTier0Frame *vm) {
    uint8_t *ip = vm_tier0_ip(vm);
    uint32_t state0 = *vm_tier0_state_cell(vm);
    uint32_t flags0 = *vm_tier0_flags_cell(vm);
    uint32_t v10 = (state0 | 0x26d4dee7u | flags0) - flags0;
    *vm_tier0_state_cell(vm) = v10;
    int64_t *src_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 6));
    *(int32_t *)vm_tier0_addr(vm, vm_tier0_s16(ip + 4)) = *(int32_t *)vm_tier0_ptr(*src_ptr_cell);
    *src_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 0)), 4);
    uint32_t slot_source = (uint32_t)((int32_t)vm_tier0_s16(ip + 2) - 0x7138da2d + (int32_t)v10);
    *vm_tier0_state_cell(vm) = slot_source | v10;
    vm_tier0_advance_ip(vm, 8);
    return vm_tier0_done(vm, 67, vm_tier0_slot16(slot_source), 8, "function_859fc", "retdec_table_slot");
}

static VMTier0Result vm_tier0_entry_138(VMTier0Frame *vm) {
    uint8_t *ip = vm_tier0_ip(vm);
    *vm_tier0_flags_cell(vm) = *vm_tier0_flags_cell(vm) + *vm_tier0_state_cell(vm);
    int64_t *dst_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 4));
    *(int32_t *)vm_tier0_ptr(*dst_ptr_cell) = (int32_t)*vm_tier0_qword_cell(vm, (int16_t)vm_tier0_u16(ip + 6));
    *dst_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 2)), 4);
    uint32_t slot_source = (uint32_t)((int32_t)vm_tier0_s16(ip + 0) - 0x3010a5b9);
    *vm_tier0_state_cell(vm) = slot_source;
    vm_tier0_advance_ip(vm, 8);
    return vm_tier0_done(vm, 138, vm_tier0_slot16(slot_source), 8, "function_94c3a", "decode_candidate_slot");
}

static VMTier0Result vm_tier0_entry_047(VMTier0Frame *vm) {
    uint8_t *ip = vm_tier0_ip(vm);
    int64_t src_ptr = *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 7));
    int64_t *dst_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 3));
    *(int64_t *)vm_tier0_ptr(*dst_ptr_cell) = *(int64_t *)vm_tier0_ptr(src_ptr);
    intptr_t step = vm_tier0_step_with_scratch(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 1)), 8);
    *dst_ptr_cell += step;
    *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 7)) += step;
    uint32_t final_state = (uint32_t)(int32_t)vm_tier0_s16(ip + 5);
    *vm_tier0_state_cell(vm) = final_state;
    vm_tier0_advance_ip(vm, 9);
    return vm_tier0_done(vm, 47, vm_tier0_slot16(final_state), 9, "function_822bc", "final_state_candidate_slot");
}

static VMTier0Result vm_tier0_call(unsigned entry, VMTier0Frame *vm) {
    switch (entry) {
    case 38: return vm_tier0_entry_038(vm);
    case 47: return vm_tier0_entry_047(vm);
    case 57: return vm_tier0_entry_057(vm);
    case 67: return vm_tier0_entry_067(vm);
    case 71: return vm_tier0_entry_071(vm);
    case 73: return vm_tier0_entry_073(vm);
    case 96: return vm_tier0_entry_096(vm);
    case 138: return vm_tier0_entry_138(vm);
    case 255: return vm_tier0_entry_255(vm);
    case 324: return vm_tier0_entry_324(vm);
    case 339: return vm_tier0_entry_339(vm);
    default: return (VMTier0Result){ (uint16_t)entry, VM_TIER0_UNKNOWN_SLOT, 0, 0, "-", "not_tier0_modelled" };
    }
}
