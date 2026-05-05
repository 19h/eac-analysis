#include <stdio.h>
#include <string.h>

typedef struct Tier0ModelRow {
    unsigned rank;
    unsigned entry;
    const char *target;
    const char *function_name;
    const char *model_name;
    unsigned ip_advance;
    const char *slot_status;
    const char *slot_expr;
    const char *effects;
} Tier0ModelRow;

static const Tier0ModelRow k_rows[] = {
    { 1, 57, "0x841f9", "function_841f9", "vm_tier0_entry_057", 4, "retdec_state_slot", "(state0 + 0x09df7e26 - (state0 ^ s16(ip+0))) & 0xffff", "frame[u16(ip+2)] = frame[0xa1]; state = slot_expr; ip += 4" },
    { 2, 255, "0xad768", "function_ad768", "vm_tier0_entry_255", 8, "retdec_return_slot", "(s16(ip+4) - state0) & g3_mask", "qword store through frame[s16(ip+6)]; pointer step by frame[s16(ip+0)] sign; ip += 8" },
    { 3, 96, "0x8c4cf", "function_8c4cf", "vm_tier0_entry_096", 8, "decode_candidate_slot", "(s16(ip+4) + 0x1f18e1aa) & 0xffff", "qword copy through frame[s16(ip+2)] to frame[u16(ip+6)]; pointer step by frame[s16(ip+0)] sign; state = slot_expr ^ state0; ip += 8" },
    { 4, 71, "0x86766", "function_86766", "vm_tier0_entry_071", 8, "decode_candidate_slot", "u16(ip+2)", "byte copy through frame[s16(ip+4)] to frame[u16(ip+6)]; pointer step by frame[s16(ip+0)] sign; ip += 8" },
    { 5, 73, "0x86be4", "function_86be4", "vm_tier0_entry_073", 8, "final_state_candidate_slot", "s16(ip+2) & 0xffff", "state pre-subtract; word copy through frame[s16(ip+4)] to frame[s16(ip+6)]; pointer step by frame[s16(ip+0)] sign; state = s16(ip+2); ip += 8" },
    { 6, 339, "0xbf2d5", "function_bf2d5", "vm_tier0_entry_339", 8, "decode_candidate_slot", "u16(ip+0)", "state = state0 - flags0 + 0x2393cc37; dword copy through frame[s16(ip+4)] to frame[s16(ip+6)]; pointer step by frame[s16(ip+2)] sign; ip += 8" },
    { 7, 324, "0xbb8aa", "function_bb8aa", "vm_tier0_entry_324", 8, "retdec_table_slot", "(s16(ip+0) - (state0 + flags0) + 0x6e06065a) & 0xffff", "state += flags; word store through frame[s16(ip+6)]; pointer step by frame[s16(ip+2)] sign; final state &= slot source; ip += 8" },
    { 8, 38, "0x80d79", "function_80d79", "vm_tier0_entry_038", 8, "decode_candidate_slot", "(s16(ip+2) - 0x23aef0b2) & 0xffff", "conditional flags rewrite; byte store through frame[s16(ip+0)]; pointer step by frame[s16(ip+4)] sign; state = slot_expr; ip += 8" },
    { 9, 67, "0x859fc", "function_859fc", "vm_tier0_entry_067", 8, "retdec_table_slot", "(s16(ip+2) - 0x7138da2d + ((state0 | 0x26d4dee7 | flags0) - flags0)) & 0xffff", "dword copy through frame[s16(ip+6)] to frame[s16(ip+4)]; pointer step by frame[s16(ip+0)] sign; state = v11 | v10; ip += 8" },
    { 10, 138, "0x94c3a", "function_94c3a", "vm_tier0_entry_138", 8, "decode_candidate_slot", "(s16(ip+0) - 0x3010a5b9) & 0xffff", "flags += state; dword store through frame[s16(ip+4)]; pointer step by frame[s16(ip+2)] sign; state = slot_expr; ip += 8" },
    { 11, 47, "0x822bc", "function_822bc", "vm_tier0_entry_047", 9, "final_state_candidate_slot", "s16(ip+5) & 0xffff", "qword copy through frame[s16(ip+3)] from frame[s16(ip+7)]; paired pointer step by frame[s16(ip+1)]/frame[0x199] sign; state = s16(ip+5); ip += 9" },
};

static void emit_tsv(void) {
    size_t i;

    puts("rank\tentry\ttarget\tfunction\tmodel_function\tip_advance\tslot_status\tslot_expr\teffects");
    for (i = 0; i < sizeof(k_rows) / sizeof(k_rows[0]); i++) {
        const Tier0ModelRow *row = &k_rows[i];
        printf("%u\t%u\t%s\t%s\t%s\t%u\t%s\t%s\t%s\n",
            row->rank,
            row->entry,
            row->target,
            row->function_name,
            row->model_name,
            row->ip_advance,
            row->slot_status,
            row->slot_expr,
            row->effects);
    }
}

static void emit_markdown(void) {
    size_t i;

    puts("# Static-only Tier0 Handler Models");
    puts("");
    puts("These 11 models translate the ranked tier0 single-function RetDec sidecars into frame-level C semantics.");
    puts("They are static reconstruction evidence for handlers absent from the current dynamic trace matrix.");
    puts("");
    puts("| Metric | Value |");
    puts("| --- | ---: |");
    printf("| models | %zu |\n", sizeof(k_rows) / sizeof(k_rows[0]));
    puts("| source tier | tier0 single-function small static replay |");
    puts("");
    puts("| Rank | Entry | Target | RetDec function | Model | Slot status | IP advance |");
    puts("| ---: | ---: | --- | --- | --- | --- | ---: |");
    for (i = 0; i < sizeof(k_rows) / sizeof(k_rows[0]); i++) {
        const Tier0ModelRow *row = &k_rows[i];
        printf("| %u | %u | `%s` | `%s` | `%s` | `%s` | %u |\n",
            row->rank,
            row->entry,
            row->target,
            row->function_name,
            row->model_name,
            row->slot_status,
            row->ip_advance);
    }
}

static void emit_c(void) {
    puts("/*");
    puts(" * Static-only tier0 handler models.");
    puts(" *");
    puts(" * These functions translate the smallest unobserved single-function");
    puts(" * RetDec sidecars into frame-level C.  They preserve the native frame");
    puts(" * offsets used by RetDec while naming the VM slots we already know:");
    puts(" *   frame+0x00a: bytecode IP pointer");
    puts(" *   frame+0x023: flags/scratch dword");
    puts(" *   frame+0x10f: dispatch table base");
    puts(" *   frame+0x170: VM state dword");
    puts(" *   frame+0x199: native predicate scratch");
    puts(" * This is analysis source, not a drop-in runtime ABI.");
    puts(" */");
    puts("#include <stdint.h>");
    puts("#include <stddef.h>");
    puts("");
    puts("#define VM_TIER0_UNKNOWN_SLOT 0xffffffffu");
    puts("#define VM_TIER0_IP_PTR_OFF 10");
    puts("#define VM_TIER0_FLAGS_OFF 35");
    puts("#define VM_TIER0_DISPATCH_BASE_OFF 271");
    puts("#define VM_TIER0_STATE_OFF 368");
    puts("#define VM_TIER0_PREDICATE_OFF 409");
    puts("");
    puts("typedef struct VMTier0Frame {");
    puts("    uint8_t *frame;");
    puts("    uintptr_t g2_mask;");
    puts("    uintptr_t g3_mask;");
    puts("} VMTier0Frame;");
    puts("");
    puts("typedef struct VMTier0Result {");
    puts("    uint16_t entry;");
    puts("    uint32_t slot;");
    puts("    uint8_t ip_advance;");
    puts("    uintptr_t dispatch_table_addr;");
    puts("    const char *source_function;");
    puts("    const char *model_status;");
    puts("} VMTier0Result;");
    puts("");
    puts("static uint8_t *vm_tier0_addr(VMTier0Frame *vm, int16_t off) { return vm->frame + off; }");
    puts("static uint8_t *vm_tier0_addr_u16(VMTier0Frame *vm, uint16_t off) { return vm->frame + off; }");
    puts("static uint8_t *vm_tier0_ptr(int64_t value) { return (uint8_t *)(uintptr_t)value; }");
    puts("static int16_t vm_tier0_s16(const uint8_t *p) { return *(const int16_t *)p; }");
    puts("static uint16_t vm_tier0_u16(const uint8_t *p) { return *(const uint16_t *)p; }");
    puts("static int64_t *vm_tier0_qword_cell(VMTier0Frame *vm, int16_t off) { return (int64_t *)vm_tier0_addr(vm, off); }");
    puts("static uint32_t *vm_tier0_state_cell(VMTier0Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER0_STATE_OFF); }");
    puts("static uint32_t *vm_tier0_flags_cell(VMTier0Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER0_FLAGS_OFF); }");
    puts("static uint8_t **vm_tier0_ip_cell(VMTier0Frame *vm) { return (uint8_t **)(vm->frame + VM_TIER0_IP_PTR_OFF); }");
    puts("static uint8_t *vm_tier0_ip(VMTier0Frame *vm) { return *vm_tier0_ip_cell(vm); }");
    puts("static void vm_tier0_advance_ip(VMTier0Frame *vm, uint8_t amount) { *vm_tier0_ip_cell(vm) += amount; }");
    puts("static uintptr_t vm_tier0_dispatch_base(VMTier0Frame *vm) { return *(uintptr_t *)(vm->frame + VM_TIER0_DISPATCH_BASE_OFF); }");
    puts("static uint32_t vm_tier0_slot16(uint32_t value) { return value & 0xffffu; }");
    puts("static uint32_t vm_tier0_mask_g3(VMTier0Frame *vm) { return vm->g3_mask ? (uint32_t)vm->g3_mask : 0xffffu; }");
    puts("static int64_t vm_tier0_predicate(VMTier0Frame *vm) { return *vm_tier0_qword_cell(vm, VM_TIER0_PREDICATE_OFF); }");
    puts("static intptr_t vm_tier0_step(VMTier0Frame *vm, int64_t predicate, intptr_t width) {");
    puts("    return ((((uintptr_t)predicate) & vm->g2_mask) == 0u) ? width : -width;");
    puts("}");
    puts("static intptr_t vm_tier0_step_with_scratch(VMTier0Frame *vm, int64_t predicate, intptr_t width) {");
    puts("    return ((((uintptr_t)predicate | (uintptr_t)vm_tier0_predicate(vm)) & vm->g2_mask) == 0u) ? width : -width;");
    puts("}");
    puts("static VMTier0Result vm_tier0_done(VMTier0Frame *vm, uint16_t entry, uint32_t slot, uint8_t advance, const char *source_function, const char *status) {");
    puts("    return (VMTier0Result){ entry, slot, advance, slot == VM_TIER0_UNKNOWN_SLOT ? 0u : vm_tier0_dispatch_base(vm) + slot, source_function, status };");
    puts("}");
    puts("");
    puts("static VMTier0Result vm_tier0_entry_057(VMTier0Frame *vm) {");
    puts("    uint8_t *ip = vm_tier0_ip(vm);");
    puts("    uint32_t state0 = *vm_tier0_state_cell(vm);");
    puts("    uint32_t slot_source = state0 + 0x09df7e26u - (state0 ^ (uint32_t)(int32_t)vm_tier0_s16(ip + 0));");
    puts("    *(uint64_t *)vm_tier0_addr_u16(vm, vm_tier0_u16(ip + 2)) = *(uint64_t *)vm_tier0_addr_u16(vm, 0x00a1u);");
    puts("    *vm_tier0_state_cell(vm) = slot_source;");
    puts("    vm_tier0_advance_ip(vm, 4);");
    puts("    return vm_tier0_done(vm, 57, vm_tier0_slot16(slot_source), 4, \"function_841f9\", \"retdec_state_slot\");");
    puts("}");
    puts("");
    puts("static VMTier0Result vm_tier0_entry_255(VMTier0Frame *vm) {");
    puts("    uint8_t *ip = vm_tier0_ip(vm);");
    puts("    int64_t source_value = *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 2));");
    puts("    int64_t *dst_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 6));");
    puts("    *(int64_t *)vm_tier0_ptr(*dst_ptr_cell) = source_value;");
    puts("    *dst_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 0)), 8);");
    puts("    uint32_t slot = ((uint32_t)((int32_t)vm_tier0_s16(ip + 4) - (int32_t)*vm_tier0_state_cell(vm))) & vm_tier0_mask_g3(vm);");
    puts("    vm_tier0_advance_ip(vm, 8);");
    puts("    return vm_tier0_done(vm, 255, slot, 8, \"function_ad768\", \"retdec_return_slot\");");
    puts("}");
    puts("");
    puts("static VMTier0Result vm_tier0_entry_096(VMTier0Frame *vm) {");
    puts("    uint8_t *ip = vm_tier0_ip(vm);");
    puts("    uint32_t state0 = *vm_tier0_state_cell(vm);");
    puts("    int64_t *src_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 2));");
    puts("    *(uint64_t *)vm_tier0_addr_u16(vm, vm_tier0_u16(ip + 6)) = *(uint64_t *)vm_tier0_ptr(*src_ptr_cell);");
    puts("    *src_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 0)), 8);");
    puts("    uint32_t slot_source = (uint32_t)((int32_t)vm_tier0_s16(ip + 4) + 0x1f18e1aa);");
    puts("    *vm_tier0_state_cell(vm) = slot_source ^ state0;");
    puts("    vm_tier0_advance_ip(vm, 8);");
    puts("    return vm_tier0_done(vm, 96, vm_tier0_slot16(slot_source), 8, \"function_8c4cf\", \"decode_candidate_slot\");");
    puts("}");
    puts("");
    puts("static VMTier0Result vm_tier0_entry_071(VMTier0Frame *vm) {");
    puts("    uint8_t *ip = vm_tier0_ip(vm);");
    puts("    int64_t *src_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 4));");
    puts("    *vm_tier0_addr_u16(vm, vm_tier0_u16(ip + 6)) = *(uint8_t *)vm_tier0_ptr(*src_ptr_cell);");
    puts("    *src_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 0)), 1);");
    puts("    uint32_t slot = vm_tier0_u16(ip + 2);");
    puts("    vm_tier0_advance_ip(vm, 8);");
    puts("    return vm_tier0_done(vm, 71, slot, 8, \"function_86766\", \"decode_candidate_slot\");");
    puts("}");
    puts("");
    puts("static VMTier0Result vm_tier0_entry_073(VMTier0Frame *vm) {");
    puts("    uint8_t *ip = vm_tier0_ip(vm);");
    puts("    *vm_tier0_state_cell(vm) = *vm_tier0_state_cell(vm) - 0x03f7f9f2u;");
    puts("    int64_t *src_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 4));");
    puts("    *(int16_t *)vm_tier0_addr(vm, vm_tier0_s16(ip + 6)) = *(int16_t *)vm_tier0_ptr(*src_ptr_cell);");
    puts("    *src_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 0)), 2);");
    puts("    uint32_t final_state = (uint32_t)(int32_t)vm_tier0_s16(ip + 2);");
    puts("    *vm_tier0_state_cell(vm) = final_state;");
    puts("    vm_tier0_advance_ip(vm, 8);");
    puts("    return vm_tier0_done(vm, 73, vm_tier0_slot16(final_state), 8, \"function_86be4\", \"final_state_candidate_slot\");");
    puts("}");
    puts("");
    puts("static VMTier0Result vm_tier0_entry_339(VMTier0Frame *vm) {");
    puts("    uint8_t *ip = vm_tier0_ip(vm);");
    puts("    uint32_t flags0 = *vm_tier0_flags_cell(vm);");
    puts("    *vm_tier0_state_cell(vm) = 0x2393cc37u - flags0 + *vm_tier0_state_cell(vm);");
    puts("    int64_t *src_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 4));");
    puts("    *(int32_t *)vm_tier0_addr(vm, vm_tier0_s16(ip + 6)) = *(int32_t *)vm_tier0_ptr(*src_ptr_cell);");
    puts("    *src_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 2)), 4);");
    puts("    uint32_t slot = vm_tier0_u16(ip + 0);");
    puts("    vm_tier0_advance_ip(vm, 8);");
    puts("    return vm_tier0_done(vm, 339, slot, 8, \"function_bf2d5\", \"decode_candidate_slot\");");
    puts("}");
    puts("");
    puts("static VMTier0Result vm_tier0_entry_324(VMTier0Frame *vm) {");
    puts("    uint8_t *ip = vm_tier0_ip(vm);");
    puts("    *vm_tier0_state_cell(vm) = *vm_tier0_state_cell(vm) + *vm_tier0_flags_cell(vm);");
    puts("    uint32_t state_after_add = *vm_tier0_state_cell(vm);");
    puts("    int64_t *dst_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 6));");
    puts("    *(int16_t *)vm_tier0_ptr(*dst_ptr_cell) = (int16_t)*vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 4));");
    puts("    *dst_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 2)), 2);");
    puts("    uint32_t slot_source = (uint32_t)((int32_t)vm_tier0_s16(ip + 0) - (int32_t)state_after_add + 0x6e06065a);");
    puts("    *vm_tier0_state_cell(vm) = slot_source & state_after_add;");
    puts("    vm_tier0_advance_ip(vm, 8);");
    puts("    return vm_tier0_done(vm, 324, vm_tier0_slot16(slot_source), 8, \"function_bb8aa\", \"retdec_table_slot\");");
    puts("}");
    puts("");
    puts("static VMTier0Result vm_tier0_entry_038(VMTier0Frame *vm) {");
    puts("    uint8_t *ip = vm_tier0_ip(vm);");
    puts("    uint32_t flags0 = *vm_tier0_flags_cell(vm);");
    puts("    if ((flags0 & 2u) != 0u) {");
    puts("        *vm_tier0_flags_cell(vm) = (flags0 & 0x55b62e53u) ^ 0x0d779badu;");
    puts("    }");
    puts("    int64_t *dst_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 0));");
    puts("    *(uint8_t *)vm_tier0_ptr(*dst_ptr_cell) = *(uint8_t *)vm_tier0_addr_u16(vm, vm_tier0_u16(ip + 6));");
    puts("    *dst_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 4)), 1);");
    puts("    uint32_t slot_source = (uint32_t)((int32_t)vm_tier0_s16(ip + 2) - 0x23aef0b2);");
    puts("    *vm_tier0_state_cell(vm) = slot_source;");
    puts("    vm_tier0_advance_ip(vm, 8);");
    puts("    return vm_tier0_done(vm, 38, vm_tier0_slot16(slot_source), 8, \"function_80d79\", \"decode_candidate_slot\");");
    puts("}");
    puts("");
    puts("static VMTier0Result vm_tier0_entry_067(VMTier0Frame *vm) {");
    puts("    uint8_t *ip = vm_tier0_ip(vm);");
    puts("    uint32_t state0 = *vm_tier0_state_cell(vm);");
    puts("    uint32_t flags0 = *vm_tier0_flags_cell(vm);");
    puts("    uint32_t v10 = (state0 | 0x26d4dee7u | flags0) - flags0;");
    puts("    *vm_tier0_state_cell(vm) = v10;");
    puts("    int64_t *src_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 6));");
    puts("    *(int32_t *)vm_tier0_addr(vm, vm_tier0_s16(ip + 4)) = *(int32_t *)vm_tier0_ptr(*src_ptr_cell);");
    puts("    *src_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 0)), 4);");
    puts("    uint32_t slot_source = (uint32_t)((int32_t)vm_tier0_s16(ip + 2) - 0x7138da2d + (int32_t)v10);");
    puts("    *vm_tier0_state_cell(vm) = slot_source | v10;");
    puts("    vm_tier0_advance_ip(vm, 8);");
    puts("    return vm_tier0_done(vm, 67, vm_tier0_slot16(slot_source), 8, \"function_859fc\", \"retdec_table_slot\");");
    puts("}");
    puts("");
    puts("static VMTier0Result vm_tier0_entry_138(VMTier0Frame *vm) {");
    puts("    uint8_t *ip = vm_tier0_ip(vm);");
    puts("    *vm_tier0_flags_cell(vm) = *vm_tier0_flags_cell(vm) + *vm_tier0_state_cell(vm);");
    puts("    int64_t *dst_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 4));");
    puts("    *(int32_t *)vm_tier0_ptr(*dst_ptr_cell) = (int32_t)*(int64_t *)vm_tier0_addr_u16(vm, vm_tier0_u16(ip + 6));");
    puts("    *dst_ptr_cell += vm_tier0_step(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 2)), 4);");
    puts("    uint32_t slot_source = (uint32_t)((int32_t)vm_tier0_s16(ip + 0) - 0x3010a5b9);");
    puts("    *vm_tier0_state_cell(vm) = slot_source;");
    puts("    vm_tier0_advance_ip(vm, 8);");
    puts("    return vm_tier0_done(vm, 138, vm_tier0_slot16(slot_source), 8, \"function_94c3a\", \"decode_candidate_slot\");");
    puts("}");
    puts("");
    puts("static VMTier0Result vm_tier0_entry_047(VMTier0Frame *vm) {");
    puts("    uint8_t *ip = vm_tier0_ip(vm);");
    puts("    int64_t src_ptr = *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 7));");
    puts("    int64_t *dst_ptr_cell = vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 3));");
    puts("    *(int64_t *)vm_tier0_ptr(*dst_ptr_cell) = *(int64_t *)vm_tier0_ptr(src_ptr);");
    puts("    intptr_t step = vm_tier0_step_with_scratch(vm, *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 1)), 8);");
    puts("    *dst_ptr_cell += step;");
    puts("    *vm_tier0_qword_cell(vm, vm_tier0_s16(ip + 7)) += step;");
    puts("    uint32_t final_state = (uint32_t)(int32_t)vm_tier0_s16(ip + 5);");
    puts("    *vm_tier0_state_cell(vm) = final_state;");
    puts("    vm_tier0_advance_ip(vm, 9);");
    puts("    return vm_tier0_done(vm, 47, vm_tier0_slot16(final_state), 9, \"function_822bc\", \"final_state_candidate_slot\");");
    puts("}");
    puts("");
    puts("static VMTier0Result vm_tier0_call(unsigned entry, VMTier0Frame *vm) {");
    puts("    switch (entry) {");
    puts("    case 38: return vm_tier0_entry_038(vm);");
    puts("    case 47: return vm_tier0_entry_047(vm);");
    puts("    case 57: return vm_tier0_entry_057(vm);");
    puts("    case 67: return vm_tier0_entry_067(vm);");
    puts("    case 71: return vm_tier0_entry_071(vm);");
    puts("    case 73: return vm_tier0_entry_073(vm);");
    puts("    case 96: return vm_tier0_entry_096(vm);");
    puts("    case 138: return vm_tier0_entry_138(vm);");
    puts("    case 255: return vm_tier0_entry_255(vm);");
    puts("    case 324: return vm_tier0_entry_324(vm);");
    puts("    case 339: return vm_tier0_entry_339(vm);");
    puts("    default: return (VMTier0Result){ (uint16_t)entry, VM_TIER0_UNKNOWN_SLOT, 0, 0, \"-\", \"not_tier0_modelled\" };");
    puts("    }");
    puts("}");
}

int main(int argc, char **argv) {
    if (argc > 1 && strcmp(argv[1], "--tsv") == 0) {
        emit_tsv();
        return 0;
    }
    if (argc > 1 && strcmp(argv[1], "--markdown") == 0) {
        emit_markdown();
        return 0;
    }
    if (argc > 1 && strcmp(argv[1], "--c") != 0) {
        fprintf(stderr, "usage: %s [--c|--tsv|--markdown]\n", argv[0]);
        return 2;
    }
    emit_c();
    return 0;
}
