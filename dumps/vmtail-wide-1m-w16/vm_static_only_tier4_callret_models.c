/*
 * Static-only tier4 native call/ret side-effect models.
 *
 * Tier4 rows have native call or ret side effects that make direct
 * dispatch-slot promotion unsafe. This artifact keeps every row in
 * syntax-checkable C and promotes only primary clean dispatch tails.
 */
#include <stdint.h>
#include <stddef.h>

#define VM_TIER4_UNKNOWN_SLOT 0xffffffffu
#define VM_TIER4_IP_PTR_OFF 10
#define VM_TIER4_FLAGS_OFF 35
#define VM_TIER4_DISPATCH_BASE_OFF 271
#define VM_TIER4_STATE_OFF 368

typedef struct VMTier4Frame {
    uint8_t *frame;
    uintptr_t g2_mask;
    uintptr_t g3_mask;
} VMTier4Frame;

typedef struct VMTier4Result {
    uint16_t entry;
    uint32_t slot;
    uint8_t ip_advance;
    uintptr_t dispatch_table_addr;
    const char *source_function;
    const char *model_status;
} VMTier4Result;

typedef struct VMTier4ModelInfo {
    uint16_t entry;
    uint8_t ip_advance;
    uint8_t function_count;
    uint8_t calls;
    uint8_t rets;
    const char *target;
    const char *functions;
    const char *callret_status;
    const char *slot_status;
    const char *slot_expr;
    const char *effects;
} VMTier4ModelInfo;

static int16_t vm_tier4_s16(const uint8_t *p) { return *(const int16_t *)p; }
static uint32_t *vm_tier4_state_cell(VMTier4Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER4_STATE_OFF); }
static uint32_t *vm_tier4_flags_cell(VMTier4Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER4_FLAGS_OFF); }
static uint8_t **vm_tier4_ip_cell(VMTier4Frame *vm) { return (uint8_t **)(vm->frame + VM_TIER4_IP_PTR_OFF); }
static uint8_t *vm_tier4_ip(VMTier4Frame *vm) { return *vm_tier4_ip_cell(vm); }
static void vm_tier4_advance_ip(VMTier4Frame *vm, uint8_t amount) { *vm_tier4_ip_cell(vm) += amount; }
static uintptr_t vm_tier4_dispatch_base(VMTier4Frame *vm) { return *(uintptr_t *)(vm->frame + VM_TIER4_DISPATCH_BASE_OFF); }
static VMTier4Result vm_tier4_done(VMTier4Frame *vm, uint16_t entry, uint32_t slot, uint8_t advance, const char *source_function, const char *status) {
    return (VMTier4Result){ entry, slot, advance, slot == VM_TIER4_UNKNOWN_SLOT ? 0u : vm_tier4_dispatch_base(vm) + slot, source_function, status };
}

const VMTier4ModelInfo k_vmtier4_models[] = {
    { 116, 8, 2, 0, 1, "0x90a1b", "function_90a1b,function_90acd", "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "callret=native_ret_frame_cell; calls=0; rets=1; ip += 8; retdec_tail=primary returns frame[112]; overlap child returns pointer-table value; ip_reads=+0x0/4,+0x0/2,+0x4/4; frame_reads=0xa,0x10f; frame_writes=0xa,0x1dc; functions=function_90a1b,function_90acd; ranges=0x90a1b-0x90acd,0x90acd-0x90c23" },
    { 309, 4, 2, 0, 1, "0xb84a7", "function_b84a7,function_b8556", "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "callret=native_ret_frame_cell; calls=0; rets=1; ip += 4; retdec_tail=primary returns frame[112]; overlap child returns result; ip_reads=+0x0/4,+0x0/2,+0x2/2; frame_reads=0xa,0x194,0x23,0x71,0x10f; frame_writes=0x23,0x1dc,0xa; functions=function_b84a7,function_b8556; ranges=0xb84a7-0xb8556,0xb8556-0xb86f8" },
    { 265, 34, 1, 2, 0, "0xaf57f", "function_af57f", "native_call_side_effect_collapsed_by_retdec", "state_effect_only_no_dispatch_return", "", "callret=native_call_side_effect_collapsed_by_retdec; calls=2; rets=0; ip += 34; retdec_tail=RetDec exposes state update and ip += 34; native skeleton still has call side effects; ip_reads=+0x18/2,+0x1a/2,+0x12/2,+0xa/2,+0x16/2,+0xe/2,+0x14/2,+0xc/2,+0x6/2,+0x0/2,+0x2/2,+0x1e/2,+0x20/2,+0x4/2,+0x1c/2,+0x10/2,+0x8/2; frame_reads=0xa,0x0,0x10f,0x170; frame_writes=0x170,0xa; functions=function_af57f; ranges=0xaf57f-0xaf8af" },
    { 233, 11, 2, 0, 1, "0xa81c4", "function_a81c4,function_a823e", "native_ret_result_prefix", "state_effect_only_no_dispatch_return", "", "callret=native_ret_result_prefix; calls=0; rets=1; ip += 11; retdec_tail=primary copies pointee into operand-selected frame slot and returns result; ip_reads=+0x0/2,+0x3/2,+0x9/2,+0x2/2,+0x5/2,+0x2/1,+0x7/2; frame_reads=0xa,0x199,0x81,0x10f,0x170; frame_writes=0x1dc,0x23,0x170,0xa; functions=function_a81c4,function_a823e; ranges=0xa81c4-0xa823e,0xa823e-0xa8450" },
    { 227, 11, 2, 0, 1, "0xa6f03", "function_a6f03,function_a6f79", "native_ret_result_prefix", "state_effect_only_no_dispatch_return", "", "callret=native_ret_result_prefix; calls=0; rets=1; ip += 11; retdec_tail=primary copies frame value into operand-selected frame slot and returns result; ip_reads=+0x0/2,+0x2/2,+0x9/2,+0x6/1,+0x7/2,+0x4/2; frame_reads=0xa,0x170,0x199,0x23,0x10f; frame_writes=0x170,0x1dc,0x23,0xa; functions=function_a6f03,function_a6f79; ranges=0xa6f03-0xa6f79,0xa6f79-0xa71fe" },
    { 58, 11, 2, 0, 1, "0x8428c", "function_8428c,function_84302", "native_ret_result_prefix", "state_effect_only_no_dispatch_return", "", "callret=native_ret_result_prefix; calls=0; rets=1; ip += 11; retdec_tail=primary copies source operand into destination frame slot and returns result; ip_reads=+0x2/2,+0x0/2,+0x8/2,+0x4/2,+0xa/1,+0x6/2; frame_reads=0xa,0x81,0x199,0x71,0x10f; frame_writes=0x1dc,0x170,0xa; functions=function_8428c,function_84302; ranges=0x8428c-0x84302,0x84302-0x84596" },
    { 288, 8, 3, 0, 1, "0xb4980", "function_b4980,function_b4a2b,function_b4c05", "native_ret_stack_prefix", "state_pointer_return_no_dispatch_slot", "", "callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary builds a two-qword stack/value cell; overlap tier2 body is not standalone for this entry; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x2/2,+0x0/2; frame_reads=0xa,0x170,0xbb,0x81,0x0,0x10f; frame_writes=0x1dc,0xa; functions=function_b4980,function_b4a2b,function_b4c05; ranges=0xb4980-0xb4a2b,0xb4a2b-0xb4c00,0xb4c05-0xb4c08" },
    { 110, 6, 3, 0, 1, "0x8f834", "function_8f834,function_8f8ae,function_8faf1", "native_ret_prefix_over_clean_child_slot", "overlap_dispatch_table_slot_comment_only", "((state0 ^ s16(ip+3)) - 0x29ce8b8a) & 0xffff", "callret=native_ret_prefix_over_clean_child_slot; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[dst] = frame[187] + operand; child tier2 slot is clean only after separate entry composition; ip_reads=+0x2/4,+0x0/2,+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x0,0x170,0xbb,0x71,0x10f; frame_writes=0x170,0x71,0x1dc,0x0,0xa; functions=function_8f834,function_8f8ae,function_8faf1; ranges=0x8f834-0x8f8ae,0x8f8ae-0x8faec,0x8faf1-0x8faf4" },
    { 126, 8, 2, 0, 1, "0x92615", "function_92615,function_926c3", "native_ret_stack_prefix", "state_pointer_return_no_dispatch_slot", "", "callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced qword plus frame[187]+operand stack cell; ip_reads=+0x3/2,+0x6/2,+0x4/2,+0x0/4,+0x2/1,+0x0/2; frame_reads=0xa,0x194,0x0,0xbb,0x81,0x71,0x10f,0x170,0x23; frame_writes=0x71,0x1dc,0x0,0x170,0xa; functions=function_92615,function_926c3; ranges=0x92615-0x926c3,0x926c3-0x9299b" },
    { 303, 8, 4, 0, 1, "0xb769c", "function_b769c,function_b7717,function_b78b2,function_b78b5", "native_ret_result_prefix", "masked_noisy_overlap_return_no_dispatch_slot", "", "callret=native_ret_result_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced source into destination; overlap tier3 return is g2/noise residue; ip_reads=+0x2/2,+0x0/2,+0x4/2,+0x6/2; frame_reads=0xa,0x170,0x0,0x10f; frame_writes=0x1dc,0x23,0xa; functions=function_b769c,function_b7717,function_b78b2,function_b78b5; ranges=0xb769c-0xb7717,0xb7717-0xb78b0,0xb78b2-0xb78b4,0xb78b5-0xb78b6" },
    { 342, 11, 2, 0, 1, "0xbfb99", "function_bfb99,function_bfc0d", "native_ret_result_prefix", "state_effect_only_no_dispatch_return", "", "callret=native_ret_result_prefix; calls=0; rets=1; ip += 11; retdec_tail=primary moves frame value and returns result; overlap child returns result; ip_reads=+0x0/2,+0x5/2,+0x3/2,+0x2/2,+0x2/1,+0x9/2,+0x7/2; frame_reads=0xa,0x170,0x199,0x0,0x10f; frame_writes=0x170,0x1dc,0xa; functions=function_bfb99,function_bfc0d; ranges=0xbfb99-0xbfc0d,0xbfc0d-0xbff6a" },
    { 353, 6, 4, 0, 1, "0xc21c3", "function_c21c3,function_c2241,function_c2414,function_c2417", "native_ret_result_prefix", "state_effect_only_no_dispatch_return", "", "callret=native_ret_result_prefix; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[187]+operand into destination and returns result; ip_reads=+0x0/2,+0x2/4; frame_reads=0xa,0x23,0x170,0x0,0xbb,0x10f; frame_writes=0x170,0x23,0x1dc,0xf3,0xa; functions=function_c21c3,function_c2241,function_c2414,function_c2417; ranges=0xc21c3-0xc2241,0xc2241-0xc240f,0xc2414-0xc2416,0xc2417-0xc2418" },
    { 15, 5, 2, 0, 1, "0x7b6cb", "function_7b6cb,function_7b77c", "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "callret=native_ret_frame_cell; calls=0; rets=1; ip += 5; retdec_tail=primary returns frame[112] after stack-like frame cell writes; ip_reads=+0x0/4,+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x60,0x0,0x71,0x23,0xe1,0x10f,0x81; frame_writes=0x170,0x71,0x1dc,0x60,0x0,0xa; functions=function_7b6cb,function_7b77c; ranges=0x7b6cb-0x7b77c,0x7b77c-0x7bae9" },
    { 53, 5, 2, 0, 1, "0x8371d", "function_8371d,function_837cb", "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "callret=native_ret_frame_cell; calls=0; rets=1; ip += 5; retdec_tail=primary returns frame[112]; overlap child returns g2-derived residue; ip_reads=+0x0/4,+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x23,0x194,0x71,0x10f,0x170; frame_writes=0x170,0x71,0x1dc,0x0,0x60,0xa; functions=function_8371d,function_837cb; ranges=0x8371d-0x837cb,0x837cb-0x83b40" },
    { 163, 5, 2, 0, 1, "0x99e21", "function_99e21,function_99e99", "native_ret_prefix_over_raw_child_slot", "overlap_raw_slot_comment_only", "((((state0 - flags0 - 0x05d1cfd6) | 0x7c3f7914) ^ s16(ip+0)) - 0x51b094c3) & 0xffff", "callret=native_ret_prefix_over_raw_child_slot; calls=0; rets=1; ip += 5; retdec_tail=primary copies frame value; child raw modulo slot lacks dispatch-table base for this entry; ip_reads=+0x2/2,+0x0/2,+0x4/1; frame_reads=0xa,0x0,0x60,0x194,0x71,0x23,0x10f,0x170; frame_writes=0x170,0x71,0x1dc,0x0,0x60,0xa; functions=function_99e21,function_99e99; ranges=0x99e21-0x99e99,0x99e99-0x9a24c" },
    { 252, 6, 2, 0, 1, "0xacefd", "function_acefd,function_acfb1", "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "callret=native_ret_frame_cell; calls=0; rets=1; ip += 6; retdec_tail=primary returns frame[112]; overlap child is noisy predicate residue; ip_reads=+0x0/4,+0x2/4,+0x0/2; frame_reads=0x81,0xa,0x170,0x23,0x0,0x194,0x10f; frame_writes=0x170,0x23,0x1dc,0x60,0xa; functions=function_acefd,function_acfb1; ranges=0xacefd-0xacfb1,0xacfb1-0xad32c" },
    { 98, 8, 3, 0, 1, "0x8c8ec", "function_8c8ec,function_8c99a,function_8cc86", "native_ret_stack_prefix", "overlap_dispatch_deref_comment_only", "", "callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced qword plus frame[187]+operand; child dereferences dispatch_base+slot but slot algebra is not isolated; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x0,0x60,0xbb,0x81,0xe1,0x71,0x10f,0x170; frame_writes=0x71,0x1dc,0x0,0x60,0x170,0xa; functions=function_8c8ec,function_8c99a,function_8cc86; ranges=0x8c8ec-0x8c99a,0x8c99a-0x8cc81,0x8cc86-0x8cc89" },
    { 149, 5, 2, 0, 1, "0x96eb4", "function_96eb4,function_96f2a", "native_ret_result_prefix", "state_effect_only_no_dispatch_return", "", "callret=native_ret_result_prefix; calls=0; rets=1; ip += 5; retdec_tail=primary copies frame value into operand-selected frame slot and returns result; ip_reads=+0x0/2,+0x2/2,+0x4/1; frame_reads=0xa,0x0,0x60,0x194,0x71,0x23,0x10f; frame_writes=0x71,0x170,0x1dc,0x60,0x0,0xa; functions=function_96eb4,function_96f2a; ranges=0x96eb4-0x96f2a,0x96f2a-0x97311" },
    { 226, 11, 3, 0, 2, "0xa6e55", "function_a6e55,function_a6f03,function_a6f79", "native_double_ret_shared_prefix", "multi_ret_side_effect_no_dispatch_slot", "", "callret=native_double_ret_shared_prefix; calls=0; rets=2; ip += 11; retdec_tail=prefix plus known child both return; native queue records two ret side-effect sites; ip_reads=+0x0/2,+0x2/2,+0x4/2,+0x6/2,+0x0/4,+0x9/2,+0x6/1,+0x7/2; frame_reads=0xa,0xbb,0x170,0x199,0x23,0x10f; frame_writes=0x1dc,0x170,0x23,0xa; functions=function_a6e55,function_a6f03,function_a6f79; ranges=0xa6e55-0xa6f03,0xa6f03-0xa6f79,0xa6f79-0xa71fe" },
    { 7, 5, 3, 0, 1, "0x799c7", "function_799c7,function_79a3d,function_79da7", "native_ret_prefix_over_clean_child_slot", "overlap_dispatch_table_slot_comment_only", "(s16(ip+0) + 0x4c6) & 0xffff", "callret=native_ret_prefix_over_clean_child_slot; calls=0; rets=1; ip += 5; retdec_tail=primary copies source into destination; child tier3 slot is clean only after separate entry composition; ip_reads=+0x0/2,+0x3/2,+0x2/2,+0x2/1; frame_reads=0xa,0x60,0x0,0x23,0x194,0x71,0x10f; frame_writes=0x71,0x1dc,0x60,0x0,0x170,0xa; functions=function_799c7,function_79a3d,function_79da7; ranges=0x799c7-0x79a3d,0x79a3d-0x79da3,0x79da7-0x79dad" },
    { 139, 6, 3, 0, 1, "0x94ddf", "function_94ddf,function_94e5a,function_951cb", "native_ret_result_prefix", "raw_mod_overlap_return_comment_only", "", "callret=native_ret_result_prefix; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[187]+operand into destination; overlap child returns raw modulo value; ip_reads=+0x0/4,+0x4/2,+0x2/4,+0x0/2; frame_reads=0x23,0xa,0x170,0x81,0x0,0x194,0xbb,0x10f; frame_writes=0x23,0x170,0x1dc,0x60,0xa; functions=function_94ddf,function_94e5a,function_951cb; ranges=0x94ddf-0x94e5a,0x94e5a-0x951c2,0x951cb-0x951cc" },
    { 205, 8, 3, 0, 1, "0xa1a95", "function_a1a95,function_a1b3e,function_a1ecf", "native_ret_stack_prefix", "masked_noisy_overlap_return_no_dispatch_slot", "", "callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary builds stack/value cell; overlaps tier1 state-only and tier3 masked dispatch-base candidate bodies; ip_reads=+0x1/2,+0x6/2,+0x4/2,+0x0/4,+0x0/1,+0x3/2; frame_reads=0xa,0x71,0x60,0x0,0xbb,0x194,0x10f; frame_writes=0x71,0x1dc,0x60,0x0,0x170,0xa; functions=function_a1a95,function_a1b3e,function_a1ecf; ranges=0xa1a95-0xa1b3e,0xa1b3e-0xa1ecf,0xa1ecf-0xa2361" },
    { 143, 8, 4, 0, 1, "0x957d9", "function_957d9,function_95887,function_95b5e,function_95b67", "native_ret_stack_prefix", "masked_noisy_overlap_return_no_dispatch_slot", "", "callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced qword plus frame[187]+operand; overlap return is noisy predicate residue; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x0/2; frame_reads=0xa,0x0,0x194,0x81,0x170,0xbb,0x71,0x16f,0x23,0x10f; frame_writes=0x170,0x23,0x1dc,0xa; functions=function_957d9,function_95887,function_95b5e,function_95b67; ranges=0x957d9-0x95887,0x95887-0x95b5c,0x95b5e-0x95b60,0x95b67-0x95b69" },
    { 202, 8, 2, 0, 1, "0xa13d6", "function_a13d6,function_a1484", "native_ret_stack_prefix", "state_effect_only_no_dispatch_return", "", "callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced qword plus frame[187]+operand and returns result; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x2/2,+0x0/2; frame_reads=0x23,0xa,0x170,0x81,0x0,0x194,0xbb,0x10f; frame_writes=0x170,0x23,0x1dc,0x81,0xa; functions=function_a13d6,function_a1484; ranges=0xa13d6-0xa1484,0xa1484-0xa1939" },
    { 270, 10, 3, 0, 1, "0xb0930", "function_b0930,function_b09ab,function_b0e32", "native_ret_prefix_over_helper_call_stub", "state_effect_only_no_dispatch_return", "", "callret=native_ret_prefix_over_helper_call_stub; calls=0; rets=1; ip += 10; retdec_tail=primary writes frame[187]+operand into destination; later overlap stub calls external helper; ip_reads=+0x0/4,+0x4/2,+0x0/8,+0x8/2; frame_reads=0xa,0x23,0x170,0x81,0x0,0xbb,0x194,0x10f; frame_writes=0x170,0x23,0x1dc,0x60,0xa; functions=function_b0930,function_b09ab,function_b0e32; ranges=0xb0930-0xb09ab,0xb09ab-0xb0e30,0xb0e32-0xb0e37" },
    { 29, 6, 3, 0, 1, "0x7e7cd", "function_7e7cd,function_7e849,function_7ecda", "native_ret_result_prefix", "masked_noisy_overlap_return_no_dispatch_slot", "", "callret=native_ret_result_prefix; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[187]+operand into destination; overlap return is masked arithmetic residue; ip_reads=+0x0/2,+0x2/4,+0x2/2; frame_reads=0x81,0xa,0x170,0x23,0x194,0x0,0xbb,0x71,0x10f; frame_writes=0x23,0x170,0x1dc,0x60,0xa; functions=function_7e7cd,function_7e849,function_7ecda; ranges=0x7e7cd-0x7e849,0x7e849-0x7ecd2,0x7ecda-0x7ecdd" },
    { 1, 10, 4, 0, 1, "0x78835", "function_78835,function_788e2,function_78c79,function_78c7f", "native_ret_stack_prefix", "state_effect_only_no_dispatch_return", "", "callret=native_ret_stack_prefix; calls=0; rets=1; ip += 10; retdec_tail=primary builds stack/value cell; overlap tier3 body is state-only for this entry; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x2/4,+0x2/8,+0x0/2; frame_reads=0xa,0x23,0x170,0x71,0xbb,0x81,0x194,0x10f; frame_writes=0x170,0x23,0x1dc,0x60,0xa; functions=function_78835,function_788e2,function_78c79,function_78c7f; ranges=0x78835-0x788e2,0x788e2-0x78c77,0x78c79-0x78c7b,0x78c7f-0x78c80" },
    { 133, 6, 4, 0, 1, "0x93ff3", "function_93ff3,function_9406d,function_9447d,function_94483", "native_ret_prefix_over_noisy_child", "noisy_dispatch_base_candidate_comment_only", "", "callret=native_ret_prefix_over_noisy_child; calls=0; rets=1; ip += 6; retdec_tail=primary loads through a pointer and stores result; overlap tier3 body has noisy dispatch-base candidate; ip_reads=+0x0/2,+0x2/2,+0x0/4,+0x4/2; frame_reads=0xa,0x23,0x170,0x81,0x194,0x0,0x10f; frame_writes=0x23,0x170,0x1dc,0x16f,0x0,0xa; functions=function_93ff3,function_9406d,function_9447d,function_94483; ranges=0x93ff3-0x9406d,0x9406d-0x94478,0x9447d-0x9447f,0x94483-0x94484" },
    { 113, 8, 2, 0, 1, "0x9026f", "function_9026f,function_90319", "native_ret_stack_prefix", "state_effect_only_no_dispatch_return", "", "callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary builds stack/value cell; overlap child returns constant predicate; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x2/2,+0x0/2; frame_reads=0x23,0x170,0xa,0x81,0x0,0x194,0xbb,0x71,0x10f; frame_writes=0x23,0x170,0x1dc,0x0,0x16f,0xa; functions=function_9026f,function_90319; ranges=0x9026f-0x90319,0x90319-0x90895" },
    { 21, 5, 4, 0, 1, "0x7ca98", "function_7ca98,function_7cb43,function_7d009,function_7d00c", "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "callret=native_ret_frame_cell; calls=0; rets=1; ip += 5; retdec_tail=primary returns frame[112] before tier3 state-only overlap body; ip_reads=+0x0/4,+0x2/1,+0x0/2,+0x3/2; frame_reads=0x81,0xa,0x194,0x23,0x0,0x170,0x60,0x71,0x10f; frame_writes=0x23,0x170,0x71,0x1dc,0x60,0x0,0xa; functions=function_7ca98,function_7cb43,function_7d009,function_7d00c; ranges=0x7ca98-0x7cb43,0x7cb43-0x7d007,0x7d009-0x7d00b,0x7d00c-0x7d00d" },
    { 219, 5, 2, 0, 1, "0xa517b", "function_a517b,function_a522e", "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "callret=native_ret_frame_cell; calls=0; rets=1; ip += 5; retdec_tail=primary returns frame[112]; overlap child is noisy predicate residue; ip_reads=+0x0/4,+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x170,0x81,0x71,0x23,0x0,0x60,0x194,0x10f; frame_writes=0x170,0x23,0x71,0x1dc,0x0,0x60,0xa; functions=function_a517b,function_a522e; ranges=0xa517b-0xa522e,0xa522e-0xa5889" },
    { 11, 13, 1, 0, 1, "0x7a4d8", "function_7a4d8", "native_ret_with_early_masked_return", "early_masked_native_return_no_dispatch_slot", "", "callret=native_ret_with_early_masked_return; calls=0; rets=1; ip += 13; retdec_tail=RetDec has early masked dispatch-base/frame return plus final result return; ip_reads=+0x6/2,+0x8/1,+0x0/4,+0x4/2,+0x9/2,+0xb/2; frame_reads=0xa,0x12,0xbb,0x10f,0x170; frame_writes=0x12,0x1dc,0x170,0xa; functions=function_7a4d8; ranges=0x7a4d8-0x7acd8" },
    { 132, 6, 5, 0, 2, "0x93f79", "function_93f79,function_93ff3,function_9406d,function_9447d,function_94483", "native_double_ret_shared_prefix", "multi_ret_side_effect_no_dispatch_slot", "", "callret=native_double_ret_shared_prefix; calls=0; rets=2; ip += 6; retdec_tail=prefix plus noisy child return; native queue records two ret side-effect sites; ip_reads=+0x0/2,+0x2/4,+0x2/2,+0x0/4,+0x4/2; frame_reads=0xa,0x23,0x170,0x81,0xbb,0x194,0x0,0x10f; frame_writes=0x23,0x170,0x1dc,0x16f,0x0,0xa; functions=function_93f79,function_93ff3,function_9406d,function_9447d,function_94483; ranges=0x93f79-0x93ff3,0x93ff3-0x9406d,0x9406d-0x94478,0x9447d-0x9447f,0x94483-0x94484" },
    { 194, 8, 4, 0, 2, "0x9faa4", "function_9faa4,function_9fb50,function_9fbcd,function_a006d", "native_double_ret_shared_prefix", "multi_ret_side_effect_no_dispatch_slot", "", "callret=native_double_ret_shared_prefix; calls=0; rets=2; ip += 8; retdec_tail=multiple shared range returns; no isolated dispatch slot; ip_reads=+0x4/2,+0x0/4,+0x6/2,+0x0/2,+0x2/2; frame_reads=0xa,0x23,0x170,0x71,0xbb,0x81,0x194,0x10f; frame_writes=0x170,0x23,0x1dc,0x81,0xa; functions=function_9faa4,function_9fb50,function_9fbcd,function_a006d; ranges=0x9faa4-0x9fb50,0x9fb50-0x9fbcd,0x9fbcd-0xa006b,0xa006d-0xa0076" },
    { 318, 8, 3, 0, 1, "0xba683", "function_ba683,function_ba72f,function_badaa", "native_ret_stack_prefix", "masked_noisy_overlap_return_no_dispatch_slot", "", "callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary builds stack/value cell; overlap return is noisy predicate residue; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x4/1,+0x0/2,+0x2/2; frame_reads=0xa,0x23,0x170,0x0,0x71,0x81,0x60,0xbb,0x194,0x10f; frame_writes=0x23,0x170,0x71,0x1dc,0x0,0x60,0xa; functions=function_ba683,function_ba72f,function_badaa; ranges=0xba683-0xba72f,0xba72f-0xbada5,0xbadaa-0xbadac" },
    { 93, 6, 3, 0, 1, "0x8bcef", "function_8bcef,function_8bd69,function_8c41e", "native_ret_result_prefix", "masked_noisy_overlap_return_no_dispatch_slot", "", "callret=native_ret_result_prefix; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[187]+operand into destination; overlap return is g3/noise residue; ip_reads=+0x2/4,+0x0/2,+0x0/1,+0x3/2,+0x1/2; frame_reads=0x170,0xa,0x0,0x23,0x194,0x60,0x71,0xbb,0x81,0x10f; frame_writes=0x23,0x170,0x71,0x1dc,0x60,0x0,0xa; functions=function_8bcef,function_8bd69,function_8c41e; ranges=0x8bcef-0x8bd69,0x8bd69-0x8c41c,0x8c41e-0x8c41f" },
    { 32, 13, 3, 0, 1, "0x7efa8", "function_7efa8,function_7f7c6,function_7f7c9", "native_ret_with_early_masked_return", "early_masked_native_return_no_dispatch_slot", "", "callret=native_ret_with_early_masked_return; calls=0; rets=1; ip += 13; retdec_tail=RetDec has early g3-masked native return plus final result return; ip_reads=+0x6/2,+0x8/1,+0x0/4,+0x4/2,+0x9/2,+0xb/2; frame_reads=0xa,0x12,0xbb,0x10f,0x170; frame_writes=0x12,0x1dc,0x170,0xa; functions=function_7efa8,function_7f7c6,function_7f7c9; ranges=0x7efa8-0x7f7c4,0x7f7c6-0x7f7c8,0x7f7c9-0x7f7ca" },
};

static VMTier4Result vm_tier4_entry_116(VMTier4Frame *vm) {
    /* rank=119 target=0x90a1b primary=function_90a1b sidecar=vm_unobserved_handlers_retdec_batch01.c functions=2 calls=0 rets=1 span=533 covered=520 */
    /* callret=native_ret_frame_cell; calls=0; rets=1; ip += 8; retdec_tail=primary returns frame[112]; overlap child returns pointer-table value; ip_reads=+0x0/4,+0x0/2,+0x4/4; frame_reads=0xa,0x10f; frame_writes=0xa,0x1dc; functions=function_90a1b,function_90acd; ranges=0x90a1b-0x90acd,0x90acd-0x90c23 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 8);
    return vm_tier4_done(vm, 116, VM_TIER4_UNKNOWN_SLOT, 8, "function_90a1b", "frame_cell_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_309(VMTier4Frame *vm) {
    /* rank=120 target=0xb84a7 primary=function_b84a7 sidecar=vm_unobserved_handlers_retdec_batch01.c functions=2 calls=0 rets=1 span=603 covered=593 */
    /* callret=native_ret_frame_cell; calls=0; rets=1; ip += 4; retdec_tail=primary returns frame[112]; overlap child returns result; ip_reads=+0x0/4,+0x0/2,+0x2/2; frame_reads=0xa,0x194,0x23,0x71,0x10f; frame_writes=0x23,0x1dc,0xa; functions=function_b84a7,function_b8556; ranges=0xb84a7-0xb8556,0xb8556-0xb86f8 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 4);
    return vm_tier4_done(vm, 309, VM_TIER4_UNKNOWN_SLOT, 4, "function_b84a7", "frame_cell_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_265(VMTier4Frame *vm) {
    /* rank=121 target=0xaf57f primary=function_af57f sidecar=vm_unobserved_handlers_retdec_batch03.c functions=1 calls=2 rets=0 span=826 covered=816 */
    /* callret=native_call_side_effect_collapsed_by_retdec; calls=2; rets=0; ip += 34; retdec_tail=RetDec exposes state update and ip += 34; native skeleton still has call side effects; ip_reads=+0x18/2,+0x1a/2,+0x12/2,+0xa/2,+0x16/2,+0xe/2,+0x14/2,+0xc/2,+0x6/2,+0x0/2,+0x2/2,+0x1e/2,+0x20/2,+0x4/2,+0x1c/2,+0x10/2,+0x8/2; frame_reads=0xa,0x0,0x10f,0x170; frame_writes=0x170,0xa; functions=function_af57f; ranges=0xaf57f-0xaf8af */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    uint32_t state_after = ((uint32_t)(int32_t)vm_tier4_s16(ip + 8) - 0x6fba3362u + state0) & state0;
    *vm_tier4_state_cell(vm) = state_after;
    vm_tier4_advance_ip(vm, 34);
    return vm_tier4_done(vm, 265, VM_TIER4_UNKNOWN_SLOT, 34, "function_af57f", "state_effect_only_no_dispatch_return");
}

static VMTier4Result vm_tier4_entry_233(VMTier4Frame *vm) {
    /* rank=122 target=0xa81c4 primary=function_a81c4 sidecar=vm_unobserved_handlers_retdec_batch02.c functions=2 calls=0 rets=1 span=664 covered=652 */
    /* callret=native_ret_result_prefix; calls=0; rets=1; ip += 11; retdec_tail=primary copies pointee into operand-selected frame slot and returns result; ip_reads=+0x0/2,+0x3/2,+0x9/2,+0x2/2,+0x5/2,+0x2/1,+0x7/2; frame_reads=0xa,0x199,0x81,0x10f,0x170; frame_writes=0x1dc,0x23,0x170,0xa; functions=function_a81c4,function_a823e; ranges=0xa81c4-0xa823e,0xa823e-0xa8450 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 11);
    return vm_tier4_done(vm, 233, VM_TIER4_UNKNOWN_SLOT, 11, "function_a81c4", "state_effect_only_no_dispatch_return");
}

static VMTier4Result vm_tier4_entry_227(VMTier4Frame *vm) {
    /* rank=123 target=0xa6f03 primary=function_a6f03 sidecar=vm_unobserved_handlers_retdec_batch02.c functions=2 calls=0 rets=1 span=776 covered=763 */
    /* callret=native_ret_result_prefix; calls=0; rets=1; ip += 11; retdec_tail=primary copies frame value into operand-selected frame slot and returns result; ip_reads=+0x0/2,+0x2/2,+0x9/2,+0x6/1,+0x7/2,+0x4/2; frame_reads=0xa,0x170,0x199,0x23,0x10f; frame_writes=0x170,0x1dc,0x23,0xa; functions=function_a6f03,function_a6f79; ranges=0xa6f03-0xa6f79,0xa6f79-0xa71fe */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 11);
    return vm_tier4_done(vm, 227, VM_TIER4_UNKNOWN_SLOT, 11, "function_a6f03", "state_effect_only_no_dispatch_return");
}

static VMTier4Result vm_tier4_entry_058(VMTier4Frame *vm) {
    /* rank=124 target=0x8428c primary=function_8428c sidecar=vm_unobserved_handlers_retdec_batch02.c functions=2 calls=0 rets=1 span=791 covered=778 */
    /* callret=native_ret_result_prefix; calls=0; rets=1; ip += 11; retdec_tail=primary copies source operand into destination frame slot and returns result; ip_reads=+0x2/2,+0x0/2,+0x8/2,+0x4/2,+0xa/1,+0x6/2; frame_reads=0xa,0x81,0x199,0x71,0x10f; frame_writes=0x1dc,0x170,0xa; functions=function_8428c,function_84302; ranges=0x8428c-0x84302,0x84302-0x84596 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 11);
    return vm_tier4_done(vm, 58, VM_TIER4_UNKNOWN_SLOT, 11, "function_8428c", "state_effect_only_no_dispatch_return");
}

static VMTier4Result vm_tier4_entry_288(VMTier4Frame *vm) {
    /* rank=125 target=0xb4980 primary=function_b4980 sidecar=vm_unobserved_handlers_retdec_batch01.c functions=3 calls=0 rets=1 span=650 covered=643 */
    /* callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary builds a two-qword stack/value cell; overlap tier2 body is not standalone for this entry; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x2/2,+0x0/2; frame_reads=0xa,0x170,0xbb,0x81,0x0,0x10f; frame_writes=0x1dc,0xa; functions=function_b4980,function_b4a2b,function_b4c05; ranges=0xb4980-0xb4a2b,0xb4a2b-0xb4c00,0xb4c05-0xb4c08 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 8);
    return vm_tier4_done(vm, 288, VM_TIER4_UNKNOWN_SLOT, 8, "function_b4980", "state_pointer_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_110(VMTier4Frame *vm) {
    /* rank=126 target=0x8f834 primary=function_8f834 sidecar=vm_unobserved_handlers_retdec_batch02.c functions=3 calls=0 rets=1 span=709 covered=699 */
    /* callret=native_ret_prefix_over_clean_child_slot; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[dst] = frame[187] + operand; child tier2 slot is clean only after separate entry composition; ip_reads=+0x2/4,+0x0/2,+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x0,0x170,0xbb,0x71,0x10f; frame_writes=0x170,0x71,0x1dc,0x0,0xa; functions=function_8f834,function_8f8ae,function_8faf1; ranges=0x8f834-0x8f8ae,0x8f8ae-0x8faec,0x8faf1-0x8faf4 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 6);
    return vm_tier4_done(vm, 110, VM_TIER4_UNKNOWN_SLOT, 6, "function_8f834", "overlap_dispatch_table_slot_comment_only");
}

static VMTier4Result vm_tier4_entry_126(VMTier4Frame *vm) {
    /* rank=127 target=0x92615 primary=function_92615 sidecar=vm_unobserved_handlers_retdec_batch04.c functions=2 calls=0 rets=1 span=915 covered=902 */
    /* callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced qword plus frame[187]+operand stack cell; ip_reads=+0x3/2,+0x6/2,+0x4/2,+0x0/4,+0x2/1,+0x0/2; frame_reads=0xa,0x194,0x0,0xbb,0x81,0x71,0x10f,0x170,0x23; frame_writes=0x71,0x1dc,0x0,0x170,0xa; functions=function_92615,function_926c3; ranges=0x92615-0x926c3,0x926c3-0x9299b */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 8);
    return vm_tier4_done(vm, 126, VM_TIER4_UNKNOWN_SLOT, 8, "function_92615", "state_pointer_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_303(VMTier4Frame *vm) {
    /* rank=128 target=0xb769c primary=function_b769c sidecar=vm_unobserved_handlers_retdec_batch01.c functions=4 calls=0 rets=1 span=545 covered=535 */
    /* callret=native_ret_result_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced source into destination; overlap tier3 return is g2/noise residue; ip_reads=+0x2/2,+0x0/2,+0x4/2,+0x6/2; frame_reads=0xa,0x170,0x0,0x10f; frame_writes=0x1dc,0x23,0xa; functions=function_b769c,function_b7717,function_b78b2,function_b78b5; ranges=0xb769c-0xb7717,0xb7717-0xb78b0,0xb78b2-0xb78b4,0xb78b5-0xb78b6 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 8);
    return vm_tier4_done(vm, 303, VM_TIER4_UNKNOWN_SLOT, 8, "function_b769c", "masked_noisy_overlap_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_342(VMTier4Frame *vm) {
    /* rank=129 target=0xbfb99 primary=function_bfb99 sidecar=vm_unobserved_handlers_retdec_batch04.c functions=2 calls=0 rets=1 span=990 covered=977 */
    /* callret=native_ret_result_prefix; calls=0; rets=1; ip += 11; retdec_tail=primary moves frame value and returns result; overlap child returns result; ip_reads=+0x0/2,+0x5/2,+0x3/2,+0x2/2,+0x2/1,+0x9/2,+0x7/2; frame_reads=0xa,0x170,0x199,0x0,0x10f; frame_writes=0x170,0x1dc,0xa; functions=function_bfb99,function_bfc0d; ranges=0xbfb99-0xbfc0d,0xbfc0d-0xbff6a */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 11);
    return vm_tier4_done(vm, 342, VM_TIER4_UNKNOWN_SLOT, 11, "function_bfb99", "state_effect_only_no_dispatch_return");
}

static VMTier4Result vm_tier4_entry_353(VMTier4Frame *vm) {
    /* rank=130 target=0xc21c3 primary=function_c21c3 sidecar=vm_unobserved_handlers_retdec_batch01.c functions=4 calls=0 rets=1 span=601 covered=591 */
    /* callret=native_ret_result_prefix; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[187]+operand into destination and returns result; ip_reads=+0x0/2,+0x2/4; frame_reads=0xa,0x23,0x170,0x0,0xbb,0x10f; frame_writes=0x170,0x23,0x1dc,0xf3,0xa; functions=function_c21c3,function_c2241,function_c2414,function_c2417; ranges=0xc21c3-0xc2241,0xc2241-0xc240f,0xc2414-0xc2416,0xc2417-0xc2418 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 6);
    return vm_tier4_done(vm, 353, VM_TIER4_UNKNOWN_SLOT, 6, "function_c21c3", "state_effect_only_no_dispatch_return");
}

static VMTier4Result vm_tier4_entry_015(VMTier4Frame *vm) {
    /* rank=131 target=0x7b6cb primary=function_7b6cb sidecar=vm_unobserved_handlers_retdec_batch05.c functions=2 calls=0 rets=1 span=1067 covered=1054 */
    /* callret=native_ret_frame_cell; calls=0; rets=1; ip += 5; retdec_tail=primary returns frame[112] after stack-like frame cell writes; ip_reads=+0x0/4,+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x60,0x0,0x71,0x23,0xe1,0x10f,0x81; frame_writes=0x170,0x71,0x1dc,0x60,0x0,0xa; functions=function_7b6cb,function_7b77c; ranges=0x7b6cb-0x7b77c,0x7b77c-0x7bae9 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 5);
    return vm_tier4_done(vm, 15, VM_TIER4_UNKNOWN_SLOT, 5, "function_7b6cb", "frame_cell_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_053(VMTier4Frame *vm) {
    /* rank=132 target=0x8371d primary=function_8371d sidecar=vm_unobserved_handlers_retdec_batch05.c functions=2 calls=0 rets=1 span=1072 covered=1059 */
    /* callret=native_ret_frame_cell; calls=0; rets=1; ip += 5; retdec_tail=primary returns frame[112]; overlap child returns g2-derived residue; ip_reads=+0x0/4,+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x23,0x194,0x71,0x10f,0x170; frame_writes=0x170,0x71,0x1dc,0x0,0x60,0xa; functions=function_8371d,function_837cb; ranges=0x8371d-0x837cb,0x837cb-0x83b40 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 5);
    return vm_tier4_done(vm, 53, VM_TIER4_UNKNOWN_SLOT, 5, "function_8371d", "frame_cell_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_163(VMTier4Frame *vm) {
    /* rank=133 target=0x99e21 primary=function_99e21 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=2 calls=0 rets=1 span=1079 covered=1067 */
    /* callret=native_ret_prefix_over_raw_child_slot; calls=0; rets=1; ip += 5; retdec_tail=primary copies frame value; child raw modulo slot lacks dispatch-table base for this entry; ip_reads=+0x2/2,+0x0/2,+0x4/1; frame_reads=0xa,0x0,0x60,0x194,0x71,0x23,0x10f,0x170; frame_writes=0x170,0x71,0x1dc,0x0,0x60,0xa; functions=function_99e21,function_99e99; ranges=0x99e21-0x99e99,0x99e99-0x9a24c */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 5);
    return vm_tier4_done(vm, 163, VM_TIER4_UNKNOWN_SLOT, 5, "function_99e21", "overlap_raw_slot_comment_only");
}

static VMTier4Result vm_tier4_entry_252(VMTier4Frame *vm) {
    /* rank=134 target=0xacefd primary=function_acefd sidecar=vm_unobserved_handlers_retdec_batch05.c functions=2 calls=0 rets=1 span=1081 covered=1071 */
    /* callret=native_ret_frame_cell; calls=0; rets=1; ip += 6; retdec_tail=primary returns frame[112]; overlap child is noisy predicate residue; ip_reads=+0x0/4,+0x2/4,+0x0/2; frame_reads=0x81,0xa,0x170,0x23,0x0,0x194,0x10f; frame_writes=0x170,0x23,0x1dc,0x60,0xa; functions=function_acefd,function_acfb1; ranges=0xacefd-0xacfb1,0xacfb1-0xad32c */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 6);
    return vm_tier4_done(vm, 252, VM_TIER4_UNKNOWN_SLOT, 6, "function_acefd", "frame_cell_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_098(VMTier4Frame *vm) {
    /* rank=135 target=0x8c8ec primary=function_8c8ec sidecar=vm_unobserved_handlers_retdec_batch04.c functions=3 calls=0 rets=1 span=930 covered=920 */
    /* callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced qword plus frame[187]+operand; child dereferences dispatch_base+slot but slot algebra is not isolated; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x0,0x60,0xbb,0x81,0xe1,0x71,0x10f,0x170; frame_writes=0x71,0x1dc,0x0,0x60,0x170,0xa; functions=function_8c8ec,function_8c99a,function_8cc86; ranges=0x8c8ec-0x8c99a,0x8c99a-0x8cc81,0x8cc86-0x8cc89 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 8);
    return vm_tier4_done(vm, 98, VM_TIER4_UNKNOWN_SLOT, 8, "function_8c8ec", "overlap_dispatch_deref_comment_only");
}

static VMTier4Result vm_tier4_entry_149(VMTier4Frame *vm) {
    /* rank=136 target=0x96eb4 primary=function_96eb4 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=2 calls=0 rets=1 span=1130 covered=1117 */
    /* callret=native_ret_result_prefix; calls=0; rets=1; ip += 5; retdec_tail=primary copies frame value into operand-selected frame slot and returns result; ip_reads=+0x0/2,+0x2/2,+0x4/1; frame_reads=0xa,0x0,0x60,0x194,0x71,0x23,0x10f; frame_writes=0x71,0x170,0x1dc,0x60,0x0,0xa; functions=function_96eb4,function_96f2a; ranges=0x96eb4-0x96f2a,0x96f2a-0x97311 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 5);
    return vm_tier4_done(vm, 149, VM_TIER4_UNKNOWN_SLOT, 5, "function_96eb4", "state_effect_only_no_dispatch_return");
}

static VMTier4Result vm_tier4_entry_226(VMTier4Frame *vm) {
    /* rank=137 target=0xa6e55 primary=function_a6e55 sidecar=vm_unobserved_handlers_retdec_batch04.c functions=3 calls=0 rets=2 span=950 covered=937 */
    /* callret=native_double_ret_shared_prefix; calls=0; rets=2; ip += 11; retdec_tail=prefix plus known child both return; native queue records two ret side-effect sites; ip_reads=+0x0/2,+0x2/2,+0x4/2,+0x6/2,+0x0/4,+0x9/2,+0x6/1,+0x7/2; frame_reads=0xa,0xbb,0x170,0x199,0x23,0x10f; frame_writes=0x1dc,0x170,0x23,0xa; functions=function_a6e55,function_a6f03,function_a6f79; ranges=0xa6e55-0xa6f03,0xa6f03-0xa6f79,0xa6f79-0xa71fe */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 11);
    return vm_tier4_done(vm, 226, VM_TIER4_UNKNOWN_SLOT, 11, "function_a6e55", "multi_ret_side_effect_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_007(VMTier4Frame *vm) {
    /* rank=138 target=0x799c7 primary=function_799c7 sidecar=vm_unobserved_handlers_retdec_batch04.c functions=3 calls=0 rets=1 span=1002 covered=994 */
    /* callret=native_ret_prefix_over_clean_child_slot; calls=0; rets=1; ip += 5; retdec_tail=primary copies source into destination; child tier3 slot is clean only after separate entry composition; ip_reads=+0x0/2,+0x3/2,+0x2/2,+0x2/1; frame_reads=0xa,0x60,0x0,0x23,0x194,0x71,0x10f; frame_writes=0x71,0x1dc,0x60,0x0,0x170,0xa; functions=function_799c7,function_79a3d,function_79da7; ranges=0x799c7-0x79a3d,0x79a3d-0x79da3,0x79da7-0x79dad */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 5);
    return vm_tier4_done(vm, 7, VM_TIER4_UNKNOWN_SLOT, 5, "function_799c7", "overlap_dispatch_table_slot_comment_only");
}

static VMTier4Result vm_tier4_entry_139(VMTier4Frame *vm) {
    /* rank=139 target=0x94ddf primary=function_94ddf sidecar=vm_unobserved_handlers_retdec_batch04.c functions=3 calls=0 rets=1 span=1009 covered=996 */
    /* callret=native_ret_result_prefix; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[187]+operand into destination; overlap child returns raw modulo value; ip_reads=+0x0/4,+0x4/2,+0x2/4,+0x0/2; frame_reads=0x23,0xa,0x170,0x81,0x0,0x194,0xbb,0x10f; frame_writes=0x23,0x170,0x1dc,0x60,0xa; functions=function_94ddf,function_94e5a,function_951cb; ranges=0x94ddf-0x94e5a,0x94e5a-0x951c2,0x951cb-0x951cc */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 6);
    return vm_tier4_done(vm, 139, VM_TIER4_UNKNOWN_SLOT, 6, "function_94ddf", "raw_mod_overlap_return_comment_only");
}

static VMTier4Result vm_tier4_entry_205(VMTier4Frame *vm) {
    /* rank=140 target=0xa1a95 primary=function_a1a95 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=3 calls=0 rets=1 span=1095 covered=1096 */
    /* callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary builds stack/value cell; overlaps tier1 state-only and tier3 masked dispatch-base candidate bodies; ip_reads=+0x1/2,+0x6/2,+0x4/2,+0x0/4,+0x0/1,+0x3/2; frame_reads=0xa,0x71,0x60,0x0,0xbb,0x194,0x10f; frame_writes=0x71,0x1dc,0x60,0x0,0x170,0xa; functions=function_a1a95,function_a1b3e,function_a1ecf; ranges=0xa1a95-0xa1b3e,0xa1b3e-0xa1ecf,0xa1ecf-0xa2361 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 8);
    return vm_tier4_done(vm, 205, VM_TIER4_UNKNOWN_SLOT, 8, "function_a1a95", "masked_noisy_overlap_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_143(VMTier4Frame *vm) {
    /* rank=141 target=0x957d9 primary=function_957d9 sidecar=vm_unobserved_handlers_retdec_batch03.c functions=4 calls=0 rets=1 span=908 covered=903 */
    /* callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced qword plus frame[187]+operand; overlap return is noisy predicate residue; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x0/2; frame_reads=0xa,0x0,0x194,0x81,0x170,0xbb,0x71,0x16f,0x23,0x10f; frame_writes=0x170,0x23,0x1dc,0xa; functions=function_957d9,function_95887,function_95b5e,function_95b67; ranges=0x957d9-0x95887,0x95887-0x95b5c,0x95b5e-0x95b60,0x95b67-0x95b69 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 8);
    return vm_tier4_done(vm, 143, VM_TIER4_UNKNOWN_SLOT, 8, "function_957d9", "masked_noisy_overlap_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_202(VMTier4Frame *vm) {
    /* rank=142 target=0xa13d6 primary=function_a13d6 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=2 calls=0 rets=1 span=1392 covered=1379 */
    /* callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary writes dereferenced qword plus frame[187]+operand and returns result; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x2/2,+0x0/2; frame_reads=0x23,0xa,0x170,0x81,0x0,0x194,0xbb,0x10f; frame_writes=0x170,0x23,0x1dc,0x81,0xa; functions=function_a13d6,function_a1484; ranges=0xa13d6-0xa1484,0xa1484-0xa1939 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 8);
    return vm_tier4_done(vm, 202, VM_TIER4_UNKNOWN_SLOT, 8, "function_a13d6", "state_effect_only_no_dispatch_return");
}

static VMTier4Result vm_tier4_entry_270(VMTier4Frame *vm) {
    /* rank=143 target=0xb0930 primary=function_b0930 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=3 calls=0 rets=1 span=1289 covered=1285 */
    /* callret=native_ret_prefix_over_helper_call_stub; calls=0; rets=1; ip += 10; retdec_tail=primary writes frame[187]+operand into destination; later overlap stub calls external helper; ip_reads=+0x0/4,+0x4/2,+0x0/8,+0x8/2; frame_reads=0xa,0x23,0x170,0x81,0x0,0xbb,0x194,0x10f; frame_writes=0x170,0x23,0x1dc,0x60,0xa; functions=function_b0930,function_b09ab,function_b0e32; ranges=0xb0930-0xb09ab,0xb09ab-0xb0e30,0xb0e32-0xb0e37 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 10);
    return vm_tier4_done(vm, 270, VM_TIER4_UNKNOWN_SLOT, 10, "function_b0930", "state_effect_only_no_dispatch_return");
}

static VMTier4Result vm_tier4_entry_029(VMTier4Frame *vm) {
    /* rank=144 target=0x7e7cd primary=function_7e7cd sidecar=vm_unobserved_handlers_retdec_batch05.c functions=3 calls=0 rets=1 span=1298 covered=1288 */
    /* callret=native_ret_result_prefix; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[187]+operand into destination; overlap return is masked arithmetic residue; ip_reads=+0x0/2,+0x2/4,+0x2/2; frame_reads=0x81,0xa,0x170,0x23,0x194,0x0,0xbb,0x71,0x10f; frame_writes=0x23,0x170,0x1dc,0x60,0xa; functions=function_7e7cd,function_7e849,function_7ecda; ranges=0x7e7cd-0x7e849,0x7e849-0x7ecd2,0x7ecda-0x7ecdd */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 6);
    return vm_tier4_done(vm, 29, VM_TIER4_UNKNOWN_SLOT, 6, "function_7e7cd", "masked_noisy_overlap_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_001(VMTier4Frame *vm) {
    /* rank=145 target=0x78835 primary=function_78835 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=4 calls=0 rets=1 span=1103 covered=1093 */
    /* callret=native_ret_stack_prefix; calls=0; rets=1; ip += 10; retdec_tail=primary builds stack/value cell; overlap tier3 body is state-only for this entry; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x2/4,+0x2/8,+0x0/2; frame_reads=0xa,0x23,0x170,0x71,0xbb,0x81,0x194,0x10f; frame_writes=0x170,0x23,0x1dc,0x60,0xa; functions=function_78835,function_788e2,function_78c79,function_78c7f; ranges=0x78835-0x788e2,0x788e2-0x78c77,0x78c79-0x78c7b,0x78c7f-0x78c80 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 10);
    return vm_tier4_done(vm, 1, VM_TIER4_UNKNOWN_SLOT, 10, "function_78835", "state_effect_only_no_dispatch_return");
}

static VMTier4Result vm_tier4_entry_133(VMTier4Frame *vm) {
    /* rank=146 target=0x93ff3 primary=function_93ff3 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=4 calls=0 rets=1 span=1166 covered=1160 */
    /* callret=native_ret_prefix_over_noisy_child; calls=0; rets=1; ip += 6; retdec_tail=primary loads through a pointer and stores result; overlap tier3 body has noisy dispatch-base candidate; ip_reads=+0x0/2,+0x2/2,+0x0/4,+0x4/2; frame_reads=0xa,0x23,0x170,0x81,0x194,0x0,0x10f; frame_writes=0x23,0x170,0x1dc,0x16f,0x0,0xa; functions=function_93ff3,function_9406d,function_9447d,function_94483; ranges=0x93ff3-0x9406d,0x9406d-0x94478,0x9447d-0x9447f,0x94483-0x94484 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 6);
    return vm_tier4_done(vm, 133, VM_TIER4_UNKNOWN_SLOT, 6, "function_93ff3", "noisy_dispatch_base_candidate_comment_only");
}

static VMTier4Result vm_tier4_entry_113(VMTier4Frame *vm) {
    /* rank=147 target=0x9026f primary=function_9026f sidecar=vm_unobserved_handlers_retdec_batch06.c functions=2 calls=0 rets=1 span=1587 covered=1574 */
    /* callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary builds stack/value cell; overlap child returns constant predicate; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x2/2,+0x0/2; frame_reads=0x23,0x170,0xa,0x81,0x0,0x194,0xbb,0x71,0x10f; frame_writes=0x23,0x170,0x1dc,0x0,0x16f,0xa; functions=function_9026f,function_90319; ranges=0x9026f-0x90319,0x90319-0x90895 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 8);
    return vm_tier4_done(vm, 113, VM_TIER4_UNKNOWN_SLOT, 8, "function_9026f", "state_effect_only_no_dispatch_return");
}

static VMTier4Result vm_tier4_entry_021(VMTier4Frame *vm) {
    /* rank=148 target=0x7ca98 primary=function_7ca98 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=4 calls=0 rets=1 span=1404 covered=1394 */
    /* callret=native_ret_frame_cell; calls=0; rets=1; ip += 5; retdec_tail=primary returns frame[112] before tier3 state-only overlap body; ip_reads=+0x0/4,+0x2/1,+0x0/2,+0x3/2; frame_reads=0x81,0xa,0x194,0x23,0x0,0x170,0x60,0x71,0x10f; frame_writes=0x23,0x170,0x71,0x1dc,0x60,0x0,0xa; functions=function_7ca98,function_7cb43,function_7d009,function_7d00c; ranges=0x7ca98-0x7cb43,0x7cb43-0x7d007,0x7d009-0x7d00b,0x7d00c-0x7d00d */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 5);
    return vm_tier4_done(vm, 21, VM_TIER4_UNKNOWN_SLOT, 5, "function_7ca98", "frame_cell_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_219(VMTier4Frame *vm) {
    /* rank=149 target=0xa517b primary=function_a517b sidecar=vm_unobserved_handlers_retdec_batch06.c functions=2 calls=0 rets=1 span=1816 covered=1806 */
    /* callret=native_ret_frame_cell; calls=0; rets=1; ip += 5; retdec_tail=primary returns frame[112]; overlap child is noisy predicate residue; ip_reads=+0x0/4,+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x170,0x81,0x71,0x23,0x0,0x60,0x194,0x10f; frame_writes=0x170,0x23,0x71,0x1dc,0x0,0x60,0xa; functions=function_a517b,function_a522e; ranges=0xa517b-0xa522e,0xa522e-0xa5889 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 5);
    return vm_tier4_done(vm, 219, VM_TIER4_UNKNOWN_SLOT, 5, "function_a517b", "frame_cell_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_011(VMTier4Frame *vm) {
    /* rank=150 target=0x7a4d8 primary=function_7a4d8 sidecar=vm_unobserved_handlers_retdec_batch06.c functions=1 calls=0 rets=1 span=2061 covered=2048 */
    /* callret=native_ret_with_early_masked_return; calls=0; rets=1; ip += 13; retdec_tail=RetDec has early masked dispatch-base/frame return plus final result return; ip_reads=+0x6/2,+0x8/1,+0x0/4,+0x4/2,+0x9/2,+0xb/2; frame_reads=0xa,0x12,0xbb,0x10f,0x170; frame_writes=0x12,0x1dc,0x170,0xa; functions=function_7a4d8; ranges=0x7a4d8-0x7acd8 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 13);
    return vm_tier4_done(vm, 11, VM_TIER4_UNKNOWN_SLOT, 13, "function_7a4d8", "early_masked_native_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_132(VMTier4Frame *vm) {
    /* rank=151 target=0x93f79 primary=function_93f79 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=5 calls=0 rets=2 span=1288 covered=1282 */
    /* callret=native_double_ret_shared_prefix; calls=0; rets=2; ip += 6; retdec_tail=prefix plus noisy child return; native queue records two ret side-effect sites; ip_reads=+0x0/2,+0x2/4,+0x2/2,+0x0/4,+0x4/2; frame_reads=0xa,0x23,0x170,0x81,0xbb,0x194,0x0,0x10f; frame_writes=0x23,0x170,0x1dc,0x16f,0x0,0xa; functions=function_93f79,function_93ff3,function_9406d,function_9447d,function_94483; ranges=0x93f79-0x93ff3,0x93ff3-0x9406d,0x9406d-0x94478,0x9447d-0x9447f,0x94483-0x94484 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 6);
    return vm_tier4_done(vm, 132, VM_TIER4_UNKNOWN_SLOT, 6, "function_93f79", "multi_ret_side_effect_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_194(VMTier4Frame *vm) {
    /* rank=152 target=0x9faa4 primary=function_9faa4 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=4 calls=0 rets=2 span=1492 covered=1488 */
    /* callret=native_double_ret_shared_prefix; calls=0; rets=2; ip += 8; retdec_tail=multiple shared range returns; no isolated dispatch slot; ip_reads=+0x4/2,+0x0/4,+0x6/2,+0x0/2,+0x2/2; frame_reads=0xa,0x23,0x170,0x71,0xbb,0x81,0x194,0x10f; frame_writes=0x170,0x23,0x1dc,0x81,0xa; functions=function_9faa4,function_9fb50,function_9fbcd,function_a006d; ranges=0x9faa4-0x9fb50,0x9fb50-0x9fbcd,0x9fbcd-0xa006b,0xa006d-0xa0076 */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 8);
    return vm_tier4_done(vm, 194, VM_TIER4_UNKNOWN_SLOT, 8, "function_9faa4", "multi_ret_side_effect_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_318(VMTier4Frame *vm) {
    /* rank=153 target=0xba683 primary=function_ba683 sidecar=vm_unobserved_handlers_retdec_batch06.c functions=3 calls=0 rets=1 span=1839 covered=1828 */
    /* callret=native_ret_stack_prefix; calls=0; rets=1; ip += 8; retdec_tail=primary builds stack/value cell; overlap return is noisy predicate residue; ip_reads=+0x6/2,+0x4/2,+0x0/4,+0x4/1,+0x0/2,+0x2/2; frame_reads=0xa,0x23,0x170,0x0,0x71,0x81,0x60,0xbb,0x194,0x10f; frame_writes=0x23,0x170,0x71,0x1dc,0x0,0x60,0xa; functions=function_ba683,function_ba72f,function_badaa; ranges=0xba683-0xba72f,0xba72f-0xbada5,0xbadaa-0xbadac */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 8);
    return vm_tier4_done(vm, 318, VM_TIER4_UNKNOWN_SLOT, 8, "function_ba683", "masked_noisy_overlap_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_093(VMTier4Frame *vm) {
    /* rank=154 target=0x8bcef primary=function_8bcef sidecar=vm_unobserved_handlers_retdec_batch06.c functions=3 calls=0 rets=1 span=1847 covered=1838 */
    /* callret=native_ret_result_prefix; calls=0; rets=1; ip += 6; retdec_tail=primary writes frame[187]+operand into destination; overlap return is g3/noise residue; ip_reads=+0x2/4,+0x0/2,+0x0/1,+0x3/2,+0x1/2; frame_reads=0x170,0xa,0x0,0x23,0x194,0x60,0x71,0xbb,0x81,0x10f; frame_writes=0x23,0x170,0x71,0x1dc,0x60,0x0,0xa; functions=function_8bcef,function_8bd69,function_8c41e; ranges=0x8bcef-0x8bd69,0x8bd69-0x8c41c,0x8c41e-0x8c41f */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 6);
    return vm_tier4_done(vm, 93, VM_TIER4_UNKNOWN_SLOT, 6, "function_8bcef", "masked_noisy_overlap_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_entry_032(VMTier4Frame *vm) {
    /* rank=155 target=0x7efa8 primary=function_7efa8 sidecar=vm_unobserved_handlers_retdec_batch06.c functions=3 calls=0 rets=1 span=2089 covered=2079 */
    /* callret=native_ret_with_early_masked_return; calls=0; rets=1; ip += 13; retdec_tail=RetDec has early g3-masked native return plus final result return; ip_reads=+0x6/2,+0x8/1,+0x0/4,+0x4/2,+0x9/2,+0xb/2; frame_reads=0xa,0x12,0xbb,0x10f,0x170; frame_writes=0x12,0x1dc,0x170,0xa; functions=function_7efa8,function_7f7c6,function_7f7c9; ranges=0x7efa8-0x7f7c4,0x7f7c6-0x7f7c8,0x7f7c9-0x7f7ca */
    uint8_t *ip = vm_tier4_ip(vm);
    uint32_t state0 = *vm_tier4_state_cell(vm);
    uint32_t flags0 = *vm_tier4_flags_cell(vm);
    (void)flags0;
    (void)ip;
    (void)state0;
    vm_tier4_advance_ip(vm, 13);
    return vm_tier4_done(vm, 32, VM_TIER4_UNKNOWN_SLOT, 13, "function_7efa8", "early_masked_native_return_no_dispatch_slot");
}

static VMTier4Result vm_tier4_call(unsigned entry, VMTier4Frame *vm) {
    switch (entry) {
    case 116: return vm_tier4_entry_116(vm);
    case 309: return vm_tier4_entry_309(vm);
    case 265: return vm_tier4_entry_265(vm);
    case 233: return vm_tier4_entry_233(vm);
    case 227: return vm_tier4_entry_227(vm);
    case 58: return vm_tier4_entry_058(vm);
    case 288: return vm_tier4_entry_288(vm);
    case 110: return vm_tier4_entry_110(vm);
    case 126: return vm_tier4_entry_126(vm);
    case 303: return vm_tier4_entry_303(vm);
    case 342: return vm_tier4_entry_342(vm);
    case 353: return vm_tier4_entry_353(vm);
    case 15: return vm_tier4_entry_015(vm);
    case 53: return vm_tier4_entry_053(vm);
    case 163: return vm_tier4_entry_163(vm);
    case 252: return vm_tier4_entry_252(vm);
    case 98: return vm_tier4_entry_098(vm);
    case 149: return vm_tier4_entry_149(vm);
    case 226: return vm_tier4_entry_226(vm);
    case 7: return vm_tier4_entry_007(vm);
    case 139: return vm_tier4_entry_139(vm);
    case 205: return vm_tier4_entry_205(vm);
    case 143: return vm_tier4_entry_143(vm);
    case 202: return vm_tier4_entry_202(vm);
    case 270: return vm_tier4_entry_270(vm);
    case 29: return vm_tier4_entry_029(vm);
    case 1: return vm_tier4_entry_001(vm);
    case 133: return vm_tier4_entry_133(vm);
    case 113: return vm_tier4_entry_113(vm);
    case 21: return vm_tier4_entry_021(vm);
    case 219: return vm_tier4_entry_219(vm);
    case 11: return vm_tier4_entry_011(vm);
    case 132: return vm_tier4_entry_132(vm);
    case 194: return vm_tier4_entry_194(vm);
    case 318: return vm_tier4_entry_318(vm);
    case 93: return vm_tier4_entry_093(vm);
    case 32: return vm_tier4_entry_032(vm);
    default: return (VMTier4Result){ (uint16_t)entry, VM_TIER4_UNKNOWN_SLOT, 0, 0, "-", "not_tier4_modelled" };
    }
}
