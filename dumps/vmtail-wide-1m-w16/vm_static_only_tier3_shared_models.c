/*
 * Static-only tier3 multi-function shared-range models.
 *
 * These functions preserve all tier3 shared RetDec rows in a
 * syntax-checkable C model. Clean dispatch-table tails are
 * executable; noisy/masked native returns remain explicit evidence.
 */
#include <stdint.h>
#include <stddef.h>

#define VM_TIER3_UNKNOWN_SLOT 0xffffffffu
#define VM_TIER3_IP_PTR_OFF 10
#define VM_TIER3_FLAGS_OFF 35
#define VM_TIER3_DISPATCH_BASE_OFF 271
#define VM_TIER3_STATE_OFF 368

typedef struct VMTier3Frame {
    uint8_t *frame;
    uintptr_t g2_mask;
    uintptr_t g3_mask;
} VMTier3Frame;

typedef struct VMTier3Result {
    uint16_t entry;
    uint32_t slot;
    uint8_t ip_advance;
    uintptr_t dispatch_table_addr;
    const char *source_function;
    const char *model_status;
} VMTier3Result;

typedef struct VMTier3ModelInfo {
    uint16_t entry;
    uint8_t ip_advance;
    uint8_t function_count;
    const char *target;
    const char *functions;
    const char *share_status;
    const char *slot_status;
    const char *slot_expr;
    const char *effects;
} VMTier3ModelInfo;

static int16_t vm_tier3_s16(const uint8_t *p) { return *(const int16_t *)p; }
static uint32_t *vm_tier3_state_cell(VMTier3Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER3_STATE_OFF); }
static uint32_t *vm_tier3_flags_cell(VMTier3Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER3_FLAGS_OFF); }
static uint8_t **vm_tier3_ip_cell(VMTier3Frame *vm) { return (uint8_t **)(vm->frame + VM_TIER3_IP_PTR_OFF); }
static uint8_t *vm_tier3_ip(VMTier3Frame *vm) { return *vm_tier3_ip_cell(vm); }
static void vm_tier3_advance_ip(VMTier3Frame *vm, uint8_t amount) { *vm_tier3_ip_cell(vm) += amount; }
static uintptr_t vm_tier3_dispatch_base(VMTier3Frame *vm) { return *(uintptr_t *)(vm->frame + VM_TIER3_DISPATCH_BASE_OFF); }
static uint32_t vm_tier3_slot16(uint32_t value) { return value & 0xffffu; }
static VMTier3Result vm_tier3_done(VMTier3Frame *vm, uint16_t entry, uint32_t slot, uint8_t advance, const char *source_function, const char *status) {
    return (VMTier3Result){ entry, slot, advance, slot == VM_TIER3_UNKNOWN_SLOT ? 0u : vm_tier3_dispatch_base(vm) + slot, source_function, status };
}

const VMTier3ModelInfo k_vmtier3_models[] = {
    { 327, 8, 3, "0xbc320", "function_bc320,function_bc468,function_bc46b", "primary_plus_two_empty_overlap_stubs", "state_effect_only_no_dispatch_return", "", "share=primary_plus_two_empty_overlap_stubs; ip += 8; retdec_tail=return is frame/result pointer after state update and pointer copy; ip_reads=+0x2/2,+0x0/2,+0x6/2,+0x4/2; frame_reads=0xa,0x10f,0x170,0x194; frame_writes=0x170,0xa; functions=function_bc320,function_bc468,function_bc46b; ranges=0xbc320-0xbc466,0xbc468-0xbc46a,0xbc46b-0xbc46c" },
    { 109, 8, 3, "0x8f6d1", "function_8f6d1,function_8f838,function_8f840", "primary_plus_tiny_overlap_stubs", "constant_return_no_dispatch_slot", "", "share=primary_plus_tiny_overlap_stubs; ip += 8; retdec_tail=return 1 after state update and pointer write; ip_reads=+0x2/2,+0x6/2,+0x4/2,+0x0/2; frame_reads=0xa,0x194,0x10f,0x170; frame_writes=0x170,0xa; functions=function_8f6d1,function_8f838,function_8f840; ranges=0x8f6d1-0x8f834,0x8f838-0x8f83f,0x8f840-0x8f841" },
    { 115, 8, 3, "0x90895", "function_90895,function_90a1d,function_90a20", "primary_plus_empty_overlap_stubs", "non_dispatch_predicate_return", "", "share=primary_plus_empty_overlap_stubs; ip += 8; retdec_tail=return is low predicate bits from operand, not dispatch table; ip_reads=+0x2/2,+0x0/2,+0x4/2,+0x6/2; frame_reads=0xa,0x23,0x170,0x0,0x10f; frame_writes=0x170,0xa; functions=function_90895,function_90a1d,function_90a20; ranges=0x90895-0x90a1b,0x90a1d-0x90a1f,0x90a20-0x90a21" },
    { 304, 8, 3, "0xb7717", "function_b7717,function_b78b2,function_b78b5", "primary_plus_empty_overlap_stubs", "masked_noisy_return_no_dispatch_slot", "", "share=primary_plus_empty_overlap_stubs; ip += 8; retdec_tail=return is g2/base-mangled predicate residue; ip_reads=+0x4/2,+0x2/2,+0x6/2,+0x0/2; frame_reads=0xa,0x170,0x0,0x10f; frame_writes=0x23,0xa; functions=function_b7717,function_b78b2,function_b78b5; ranges=0xb7717-0xb78b0,0xb78b2-0xb78b4,0xb78b5-0xb78b6" },
    { 135, 9, 3, "0x94478", "function_94478,function_9461d,function_94623", "primary_plus_empty_overlap_stubs", "noisy_dispatch_return_candidate", "((state0 ^ s16(ip+5)) - 0x7ed035c5) & 0xffff", "share=primary_plus_empty_overlap_stubs; ip += 9; retdec_tail=RetDec tail has dispatch-base plus slot xor noisy low-bit residue; ip_reads=+0x0/2,+0x7/2,+0x3/2,+0x5/2; frame_reads=0xa,0x170,0x0,0x199,0x10f; frame_writes=0xa; functions=function_94478,function_9461d,function_94623; ranges=0x94478-0x9461b,0x9461d-0x9461f,0x94623-0x94624" },
    { 141, 8, 3, "0x951c2", "function_951c2,function_953b3,function_953b6", "primary_plus_empty_overlap_stubs", "masked_noisy_return_no_dispatch_slot", "", "share=primary_plus_empty_overlap_stubs; ip += 8; retdec_tail=return is g2-masked residue after state/pointer effects; ip_reads=+0x6/2,+0x0/2,+0x4/2,+0x2/2; frame_reads=0xa,0x71,0x10f,0x170; frame_writes=0xa; functions=function_951c2,function_953b3,function_953b6; ranges=0x951c2-0x953b1,0x953b3-0x953b5,0x953b6-0x953b7" },
    { 341, 9, 2, "0xbf889", "function_bf889,function_bfb9b", "primary_plus_empty_overlap_stub", "constant_like_predicate_return", "", "share=primary_plus_empty_overlap_stub; ip += 9; retdec_tail=return is obfuscated constant/predicate expression; ip_reads=+0x0/2,+0x4/2,+0x2/2,+0x7/2; frame_reads=0xa,0x170,0x199,0x81,0x10f; frame_writes=0x23,0x170,0xa; functions=function_bf889,function_bfb9b; ranges=0xbf889-0xbfb99,0xbfb9b-0xbfb9e" },
    { 120, 11, 2, "0x9106a", "function_9106a,function_9137e", "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return is frame+state cell after compare/flag side effects; ip_reads=+0x4/2,+0x6/2,+0x9/2,+0x8/1,+0x2/2,+0x0/2; frame_reads=0xa,0x71,0x199,0x10f; frame_writes=0x23,0x170,0xa; functions=function_9106a,function_9137e; ranges=0x9106a-0x91379,0x9137e-0x91381" },
    { 147, 5, 3, "0x96918", "function_96918,function_96b77,function_96b7a", "primary_plus_empty_overlap_stubs", "state_effect_only_no_dispatch_return", "", "share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=return is frame/result pointer after operand rewrite; ip_reads=+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x0,0x71,0x23,0x10f; frame_writes=0x71,0x0,0x170,0xa; functions=function_96918,function_96b77,function_96b7a; ranges=0x96918-0x96b6e,0x96b77-0x96b79,0x96b7a-0x96b7b" },
    { 275, 11, 2, "0xb180e", "function_b180e,function_b1b32", "primary_plus_empty_overlap_stub", "retdec_raw_mod_slot", "((state0 ^ s16(ip+1)) - 0x26ed1596) & 0xffff", "share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=RetDec return is raw modulo slot without dispatch base; ip_reads=+0x5/2,+0x7/2,+0x9/2,+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x170,0x0,0x199,0x23,0x10f; frame_writes=0x23,0x170,0xa; functions=function_b180e,function_b1b32; ranges=0xb180e-0xb1b2d,0xb1b32-0xb1b35" },
    { 152, 11, 2, "0x9768c", "function_9768c,function_979b0", "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return is frame/result pointer after compare/flag side effects; ip_reads=+0x9/2,+0x1/2,+0x7/2,+0x0/1,+0x3/2,+0x5/2; frame_reads=0xa,0x170,0x199,0x0,0x10f; frame_writes=0x170,0xa; functions=function_9768c,function_979b0; ranges=0x9768c-0x979ab,0x979b0-0x979b5" },
    { 19, 11, 2, "0x7c30a", "function_7c30a,function_7c630", "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return is frame+ip cell after pointer compare and state update; ip_reads=+0x4/2,+0x2/2,+0x9/2,+0x8/1,+0x0/2,+0x6/2; frame_reads=0xa,0x81,0x199,0x10f,0x170; frame_writes=0x170,0xa; functions=function_7c30a,function_7c630; ranges=0x7c30a-0x7c62b,0x7c630-0x7c633" },
    { 296, 5, 3, "0xb625d", "function_b625d,function_b64dc,function_b64df", "primary_plus_empty_overlap_stubs", "state_effect_only_no_dispatch_return", "", "share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=return is frame/result pointer after flag/operand rewrite; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x0,0x81,0x194,0x71,0x10f; frame_writes=0x71,0x0,0x170,0xa; functions=function_b625d,function_b64dc,function_b64df; ranges=0xb625d-0xb64d7,0xb64dc-0xb64de,0xb64df-0xb64e0" },
    { 329, 5, 2, "0xbc676", "function_bc676,function_bc9bd", "primary_plus_empty_overlap_stub", "noisy_dispatch_base_candidate", "", "share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=RetDec references dispatch base but return algebra is g3/noise-mixed; ip_reads=+0x3/2,+0x0/1,+0x1/2; frame_reads=0xa,0x0,0x170,0x194,0x71,0x10f,0x23; frame_writes=0x170,0x71,0x0,0xa; functions=function_bc676,function_bc9bd; ranges=0xbc676-0xbc9b8,0xbc9bd-0xbc9c0" },
    { 177, 5, 2, "0x9c3f7", "function_9c3f7,function_9c74a", "primary_plus_large_neighbor_body", "masked_return_slot_requires_g3", "", "share=primary_plus_large_neighbor_body; ip += 5; retdec_tail=return is g3-masked state/slot candidate; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x10f; frame_writes=0x199,0x170,0xa; functions=function_9c3f7,function_9c74a; ranges=0x9c3f7-0x9c74a,0x9c74a-0x9ca8d" },
    { 103, 5, 2, "0x8df9c", "function_8df9c,function_8e2f7", "primary_plus_empty_overlap_stub", "non_dispatch_predicate_return", "", "share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return is low predicate bits; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x81,0x194,0x71,0x10f,0x170; frame_writes=0x71,0x0,0x60,0x170,0xa; functions=function_8df9c,function_8e2f7; ranges=0x8df9c-0x8e2ef,0x8e2f7-0x8e2fc" },
    { 24, 11, 2, "0x7d5ec", "function_7d5ec,function_7d945", "primary_plus_empty_overlap_stub", "retdec_dispatch_table_slot", "((((0x7d53d38d - state0 + s16(ip+6)) & state0) ^ s16(ip+2)) + 0x565) & 0xffff", "share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return dispatch_base + slot after state_after = (0x7d53d38d - state0 + s16(ip+6)) & state0; ip_reads=+0x0/2,+0x4/2,+0x9/2,+0x6/1,+0x7/2,+0x2/2; frame_reads=0xa,0x23,0x199,0x10f,0x170; frame_writes=0x23,0xa; functions=function_7d5ec,function_7d945; ranges=0x7d5ec-0x7d941,0x7d945-0x7d94c" },
    { 343, 11, 2, "0xbfc0d", "function_bfc0d,function_bff6a", "primary_plus_large_neighbor_body", "state_effect_only_no_dispatch_return", "", "share=primary_plus_large_neighbor_body; ip += 11; retdec_tail=return is frame/result pointer after compare/flag side effects; ip_reads=+0x5/2,+0x3/2,+0x0/2,+0x2/1,+0x9/2,+0x7/2; frame_reads=0xa,0x170,0x199,0x0,0x10f; frame_writes=0x170,0xa; functions=function_bfc0d,function_bff6a; ranges=0xbfc0d-0xbff6a,0xbff6a-0xc02e4" },
    { 51, 11, 2, "0x83061", "function_83061,function_833cc", "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return is frame/result pointer after pointer compare and state update; ip_reads=+0x9/2,+0x2/2,+0x0/2,+0x4/1,+0x5/2,+0x7/2; frame_reads=0xa,0x170,0x23,0x199,0x10f; frame_writes=0x23,0x170,0xa; functions=function_83061,function_833cc; ranges=0x83061-0x833c7,0x833cc-0x833cf" },
    { 8, 5, 2, "0x79a3d", "function_79a3d,function_79da7", "primary_plus_empty_overlap_stub", "retdec_dispatch_table_slot", "(s16(ip+0) + 0x4c6) & 0xffff", "share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return dispatch_table[s16(ip+0)+0x4c6] after rotate/flag side effects; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x60,0x0,0x23,0x194,0x71,0x10f; frame_writes=0x71,0x60,0x0,0x170,0xa; functions=function_79a3d,function_79da7; ranges=0x79a3d-0x79da3,0x79da7-0x79dad" },
    { 277, 5, 2, "0xb1fd5", "function_b1fd5,function_b2346", "primary_plus_empty_overlap_stub", "noisy_dispatch_base_candidate", "", "share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=RetDec references dispatch base but return algebra is g3/noise-mixed; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x170,0x60,0x194,0x23,0x71,0x10f; frame_writes=0x71,0x170,0x60,0x0,0xa; functions=function_b1fd5,function_b2346; ranges=0xb1fd5-0xb2342,0xb2346-0xb2350" },
    { 4, 6, 2, "0x792f8", "function_792f8,function_79677", "primary_plus_empty_overlap_stub", "g2_mask_return_no_dispatch_slot", "", "share=primary_plus_empty_overlap_stub; ip += 6; retdec_tail=return is g2 mask address, not dispatch; ip_reads=+0x0/4,+0x4/2; frame_reads=0x170,0x194,0x23,0x0,0x81,0xa,0x10f; frame_writes=0x170,0x23,0x16f,0x0,0xa; functions=function_792f8,function_79677; ranges=0x792f8-0x79675,0x79677-0x7967a" },
    { 212, 8, 2, "0xa3a4b", "function_a3a4b,function_a3dc9", "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "share=primary_plus_empty_overlap_stub; ip += 8; retdec_tail=return is frame/result pointer after qword pointer step; ip_reads=+0x0/2,+0x4/2,+0x6/2,+0x2/2; frame_reads=0xa,0x170,0x199,0x23,0x10f; frame_writes=0x23,0x170,0xa; functions=function_a3a4b,function_a3dc9; ranges=0xa3a4b-0xa3dc7,0xa3dc9-0xa3dce" },
    { 211, 10, 2, "0xa36c9", "function_a36c9,function_a3a4d", "primary_plus_empty_overlap_stub", "masked_noisy_return_no_dispatch_slot", "", "share=primary_plus_empty_overlap_stub; ip += 10; retdec_tail=return is g3/base-mangled arithmetic residue; ip_reads=+0x0/4,+0x0/8,+0x8/2; frame_reads=0x81,0x23,0x170,0xa,0x71,0x10f; frame_writes=0x23,0x170,0x60,0xa; functions=function_a36c9,function_a3a4d; ranges=0xa36c9-0xa3a4b,0xa3a4d-0xa3a50" },
    { 312, 5, 2, "0xb87aa", "function_b87aa,function_b8b47", "primary_plus_empty_overlap_stub", "masked_dispatch_base_requires_g3", "", "share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return mixes dispatch base address with g3 mask; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0x194,0x81,0xa,0x0,0x60,0x170,0x23,0x71,0x10f; frame_writes=0x170,0x71,0x23,0x0,0x60,0xa; functions=function_b87aa,function_b8b47; ranges=0xb87aa-0xb8b42,0xb8b47-0xb8b4a" },
    { 104, 5, 2, "0x8e2ef", "function_8e2ef,function_8e6b6", "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return is frame/result pointer on both RetDec branches; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0x23,0xa,0x60,0x0,0x194,0x71,0x10f,0x170; frame_writes=0x23,0x71,0x60,0x0,0xa; functions=function_8e2ef,function_8e6b6; ranges=0x8e2ef-0x8e6b4,0x8e6b6-0x8e6c2" },
    { 27, 5, 2, "0x7dfbf", "function_7dfbf,function_7e392", "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return is frame/result pointer after operand/state rewrite; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x170,0x10f; frame_writes=0x199,0x170,0xa; functions=function_7dfbf,function_7e392; ranges=0x7dfbf-0x7e390,0x7e392-0x7e397" },
    { 89, 11, 3, "0x8b028", "function_8b028,function_8b336,function_8b339", "primary_plus_empty_overlap_stubs", "non_dispatch_pointer_return", "", "share=primary_plus_empty_overlap_stubs; ip += 11; retdec_tail=return is frame+0x81 plus predicate-selected residue; ip_reads=+0x1/2,+0x5/2,+0x3/2,+0x0/1,+0x7/2,+0x9/2; frame_reads=0xa,0x199,0x81,0x10f,0x170,0x23; frame_writes=0x170,0xa; functions=function_8b028,function_8b336,function_8b339; ranges=0x8b028-0x8b334,0x8b336-0x8b338,0x8b339-0x8b33a" },
    { 230, 5, 2, "0xa757f", "function_a757f,function_a799e", "primary_plus_empty_overlap_stub", "noisy_dispatch_base_candidate", "", "share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=RetDec reads dispatch base but return subtracts masked low-slot residue; ip_reads=+0x4/1,+0x0/2,+0x2/2; frame_reads=0x81,0x71,0x0,0xa,0x60,0x23,0x194,0x170,0x10f; frame_writes=0x170,0x23,0x71,0x60,0x0,0xa; functions=function_a757f,function_a799e; ranges=0xa757f-0xa799b,0xa799e-0xa79a9" },
    { 294, 5, 3, "0xb5d7c", "function_b5d7c,function_b60e2,function_b60e7", "primary_plus_empty_overlap_stubs", "masked_noisy_return_no_dispatch_slot", "", "share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=return is obfuscated pointer/noise expression; ip_reads=+0x0/2,+0x4/1,+0x2/2; frame_reads=0xa,0x10f,0x170; frame_writes=0x199,0x170,0xa; functions=function_b5d7c,function_b60e2,function_b60e7; ranges=0xb5d7c-0xb60e0,0xb60e2-0xb60e4,0xb60e7-0xb60ed" },
    { 2, 10, 3, "0x788e2", "function_788e2,function_78c79,function_78c7f", "primary_plus_empty_overlap_stubs", "state_effect_only_no_dispatch_return", "", "share=primary_plus_empty_overlap_stubs; ip += 10; retdec_tail=return is frame/result pointer after wide operand update; ip_reads=+0x2/4,+0x2/8,+0x0/2; frame_reads=0x23,0xa,0x170,0x71,0x81,0x194,0x10f; frame_writes=0x170,0x23,0x60,0xa; functions=function_788e2,function_78c79,function_78c7f; ranges=0x788e2-0x78c77,0x78c79-0x78c7b,0x78c7f-0x78c80" },
    { 166, 6, 2, "0x9a46e", "function_9a46e,function_9a8d4", "primary_plus_empty_overlap_stub", "masked_return_slot_requires_g3", "", "share=primary_plus_empty_overlap_stub; ip += 6; retdec_tail=return is g3-masked state/slot candidate; ip_reads=+0x2/4,+0x0/2; frame_reads=0x170,0x23,0x81,0x71,0xa,0x0,0x10f; frame_writes=0x170,0x23,0x16f,0x0,0xa; functions=function_9a46e,function_9a8d4; ranges=0x9a46e-0x9a8d2,0x9a8d4-0x9a8d5" },
    { 271, 10, 2, "0xb09ab", "function_b09ab,function_b0e32", "primary_plus_empty_overlap_stub", "constant_pointer_return_no_dispatch_slot", "", "share=primary_plus_empty_overlap_stub; ip += 10; retdec_tail=return is frame plus constant offset; ip_reads=+0x0/4,+0x0/8,+0x8/2; frame_reads=0x23,0x170,0xa,0x81,0x0,0x194,0x10f; frame_writes=0x170,0x23,0x60,0xa; functions=function_b09ab,function_b0e32; ranges=0xb09ab-0xb0e30,0xb0e32-0xb0e37" },
    { 10, 5, 2, "0x7a04f", "function_7a04f,function_7a4e3", "primary_plus_empty_overlap_stub", "noisy_dispatch_base_candidate", "", "share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=RetDec reads dispatch base but return is g3/noise-mixed; ip_reads=+0x4/1,+0x2/2,+0x0/2; frame_reads=0x0,0x170,0x81,0x194,0xa,0x23,0x60,0x71,0x10f; frame_writes=0x170,0x23,0x71,0x0,0x60,0xa; functions=function_7a04f,function_7a4e3; ranges=0x7a04f-0x7a4d8,0x7a4e3-0x7a4e6" },
    { 249, 11, 3, "0xac440", "function_ac440,function_ac804,function_ac807", "primary_plus_empty_overlap_stubs", "retdec_raw_mod_slot", "((s16(ip+0) - state0 + 0x4522afca) & 0xffff)", "share=primary_plus_empty_overlap_stubs; ip += 11; retdec_tail=RetDec return is raw modulo slot without dispatch base; ip_reads=+0x9/2,+0x4/2,+0x2/2,+0x8/1,+0x6/2,+0x0/2; frame_reads=0xa,0x81,0x23,0x199,0x10f,0x170; frame_writes=0x23,0x170,0xa; functions=function_ac440,function_ac804,function_ac807; ranges=0xac440-0xac802,0xac804-0xac806,0xac807-0xac808" },
    { 207, 6, 2, "0xa1ecf", "function_a1ecf,function_a2366", "primary_plus_empty_overlap_stub", "masked_dispatch_base_candidate", "", "share=primary_plus_empty_overlap_stub; ip += 6; retdec_tail=return is dispatch base OR mask mixed with frame+state; ip_reads=+0x0/4,+0x4/2; frame_reads=0x23,0x81,0x170,0x0,0xa,0x194,0x10f; frame_writes=0x170,0x16f,0x0,0x23,0xa; functions=function_a1ecf,function_a2366; ranges=0xa1ecf-0xa2361,0xa2366-0xa2369" },
    { 134, 6, 3, "0x9406d", "function_9406d,function_9447d,function_94483", "primary_plus_empty_overlap_stubs", "noisy_dispatch_base_candidate", "", "share=primary_plus_empty_overlap_stubs; ip += 6; retdec_tail=RetDec reads dispatch base but return algebra is g3/noise-mixed; ip_reads=+0x0/4,+0x4/2; frame_reads=0x23,0x170,0x81,0xa,0x194,0x0,0x10f; frame_writes=0x23,0x170,0x16f,0x0,0xa; functions=function_9406d,function_9447d,function_94483; ranges=0x9406d-0x94478,0x9447d-0x9447f,0x94483-0x94484" },
    { 223, 5, 3, "0xa6470", "function_a6470,function_a68c4,function_a68ca", "primary_plus_empty_overlap_stubs", "noisy_dispatch_base_candidate", "", "share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=RetDec reads dispatch base but return algebra is heavily base/noise-mixed; ip_reads=+0x2/1,+0x3/2,+0x0/2; frame_reads=0x81,0x71,0xa,0x60,0x0,0x194,0x23,0x10f,0x170; frame_writes=0x170,0x71,0x60,0x0,0xa; functions=function_a6470,function_a68c4,function_a68ca; ranges=0xa6470-0xa68c2,0xa68c4-0xa68c9,0xa68ca-0xa68cf" },
    { 22, 5, 3, "0x7cb43", "function_7cb43,function_7d009,function_7d00c", "primary_plus_empty_overlap_stubs", "state_effect_only_no_dispatch_return", "", "share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=return is frame/result pointer after operand/state rewrite; ip_reads=+0x2/1,+0x0/2,+0x3/2; frame_reads=0x81,0x194,0x23,0x0,0x170,0xa,0x60,0x71,0x10f; frame_writes=0x23,0x170,0x71,0x60,0x0,0xa; functions=function_7cb43,function_7d009,function_7d00c; ranges=0x7cb43-0x7d007,0x7d009-0x7d00b,0x7d00c-0x7d00d" },
    { 81, 5, 2, "0x88c3f", "function_88c3f,function_89216", "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return is frame/result pointer after operand/state rewrite; ip_reads=+0x4/1,+0x2/2,+0x0/2; frame_reads=0x23,0xa,0x0,0x60,0x194,0x81,0x71,0x10f,0x170; frame_writes=0x170,0x71,0x0,0x60,0xa; functions=function_88c3f,function_89216; ranges=0x88c3f-0x8920e,0x89216-0x89219" },
};

static VMTier3Result vm_tier3_entry_327(VMTier3Frame *vm) {
    /* rank=70 target=0xbc320 primary=function_bc320 sidecar=vm_unobserved_handlers_retdec_batch00.c functions=3 span=339 covered=329 */
    /* share=primary_plus_two_empty_overlap_stubs; ip += 8; retdec_tail=return is frame/result pointer after state update and pointer copy; ip_reads=+0x2/2,+0x0/2,+0x6/2,+0x4/2; frame_reads=0xa,0x10f,0x170,0x194; frame_writes=0x170,0xa; functions=function_bc320,function_bc468,function_bc46b; ranges=0xbc320-0xbc466,0xbc468-0xbc46a,0xbc46b-0xbc46c */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 8);
    return vm_tier3_done(vm, 327, VM_TIER3_UNKNOWN_SLOT, 8, "function_bc320", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_109(VMTier3Frame *vm) {
    /* rank=71 target=0x8f6d1 primary=function_8f6d1 sidecar=vm_unobserved_handlers_retdec_batch00.c functions=3 span=365 covered=363 */
    /* share=primary_plus_tiny_overlap_stubs; ip += 8; retdec_tail=return 1 after state update and pointer write; ip_reads=+0x2/2,+0x6/2,+0x4/2,+0x0/2; frame_reads=0xa,0x194,0x10f,0x170; frame_writes=0x170,0xa; functions=function_8f6d1,function_8f838,function_8f840; ranges=0x8f6d1-0x8f834,0x8f838-0x8f83f,0x8f840-0x8f841 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 8);
    return vm_tier3_done(vm, 109, VM_TIER3_UNKNOWN_SLOT, 8, "function_8f6d1", "constant_return_no_dispatch_slot");
}

static VMTier3Result vm_tier3_entry_115(VMTier3Frame *vm) {
    /* rank=72 target=0x90895 primary=function_90895 sidecar=vm_unobserved_handlers_retdec_batch00.c functions=3 span=403 covered=393 */
    /* share=primary_plus_empty_overlap_stubs; ip += 8; retdec_tail=return is low predicate bits from operand, not dispatch table; ip_reads=+0x2/2,+0x0/2,+0x4/2,+0x6/2; frame_reads=0xa,0x23,0x170,0x0,0x10f; frame_writes=0x170,0xa; functions=function_90895,function_90a1d,function_90a20; ranges=0x90895-0x90a1b,0x90a1d-0x90a1f,0x90a20-0x90a21 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 8);
    return vm_tier3_done(vm, 115, VM_TIER3_UNKNOWN_SLOT, 8, "function_90895", "non_dispatch_predicate_return");
}

static VMTier3Result vm_tier3_entry_304(VMTier3Frame *vm) {
    /* rank=73 target=0xb7717 primary=function_b7717 sidecar=vm_unobserved_handlers_retdec_batch00.c functions=3 span=422 covered=412 */
    /* share=primary_plus_empty_overlap_stubs; ip += 8; retdec_tail=return is g2/base-mangled predicate residue; ip_reads=+0x4/2,+0x2/2,+0x6/2,+0x0/2; frame_reads=0xa,0x170,0x0,0x10f; frame_writes=0x23,0xa; functions=function_b7717,function_b78b2,function_b78b5; ranges=0xb7717-0xb78b0,0xb78b2-0xb78b4,0xb78b5-0xb78b6 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 8);
    return vm_tier3_done(vm, 304, VM_TIER3_UNKNOWN_SLOT, 8, "function_b7717", "masked_noisy_return_no_dispatch_slot");
}

static VMTier3Result vm_tier3_entry_135(VMTier3Frame *vm) {
    /* rank=74 target=0x94478 primary=function_94478 sidecar=vm_unobserved_handlers_retdec_batch00.c functions=3 span=432 covered=422 */
    /* share=primary_plus_empty_overlap_stubs; ip += 9; retdec_tail=RetDec tail has dispatch-base plus slot xor noisy low-bit residue; ip_reads=+0x0/2,+0x7/2,+0x3/2,+0x5/2; frame_reads=0xa,0x170,0x0,0x199,0x10f; frame_writes=0xa; functions=function_94478,function_9461d,function_94623; ranges=0x94478-0x9461b,0x9461d-0x9461f,0x94623-0x94624 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 9);
    return vm_tier3_done(vm, 135, VM_TIER3_UNKNOWN_SLOT, 9, "function_94478", "noisy_dispatch_return_candidate");
}

static VMTier3Result vm_tier3_entry_141(VMTier3Frame *vm) {
    /* rank=75 target=0x951c2 primary=function_951c2 sidecar=vm_unobserved_handlers_retdec_batch00.c functions=3 span=508 covered=498 */
    /* share=primary_plus_empty_overlap_stubs; ip += 8; retdec_tail=return is g2-masked residue after state/pointer effects; ip_reads=+0x6/2,+0x0/2,+0x4/2,+0x2/2; frame_reads=0xa,0x71,0x10f,0x170; frame_writes=0xa; functions=function_951c2,function_953b3,function_953b6; ranges=0x951c2-0x953b1,0x953b3-0x953b5,0x953b6-0x953b7 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 8);
    return vm_tier3_done(vm, 141, VM_TIER3_UNKNOWN_SLOT, 8, "function_951c2", "masked_noisy_return_no_dispatch_slot");
}

static VMTier3Result vm_tier3_entry_341(VMTier3Frame *vm) {
    /* rank=76 target=0xbf889 primary=function_bf889 sidecar=vm_unobserved_handlers_retdec_batch02.c functions=2 span=794 covered=787 */
    /* share=primary_plus_empty_overlap_stub; ip += 9; retdec_tail=return is obfuscated constant/predicate expression; ip_reads=+0x0/2,+0x4/2,+0x2/2,+0x7/2; frame_reads=0xa,0x170,0x199,0x81,0x10f; frame_writes=0x23,0x170,0xa; functions=function_bf889,function_bfb9b; ranges=0xbf889-0xbfb99,0xbfb9b-0xbfb9e */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 9);
    return vm_tier3_done(vm, 341, VM_TIER3_UNKNOWN_SLOT, 9, "function_bf889", "constant_like_predicate_return");
}

static VMTier3Result vm_tier3_entry_120(VMTier3Frame *vm) {
    /* rank=77 target=0x9106a primary=function_9106a sidecar=vm_unobserved_handlers_retdec_batch02.c functions=2 span=796 covered=786 */
    /* share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return is frame+state cell after compare/flag side effects; ip_reads=+0x4/2,+0x6/2,+0x9/2,+0x8/1,+0x2/2,+0x0/2; frame_reads=0xa,0x71,0x199,0x10f; frame_writes=0x23,0x170,0xa; functions=function_9106a,function_9137e; ranges=0x9106a-0x91379,0x9137e-0x91381 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 11);
    return vm_tier3_done(vm, 120, VM_TIER3_UNKNOWN_SLOT, 11, "function_9106a", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_147(VMTier3Frame *vm) {
    /* rank=78 target=0x96918 primary=function_96918 sidecar=vm_unobserved_handlers_retdec_batch01.c functions=3 span=608 covered=601 */
    /* share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=return is frame/result pointer after operand rewrite; ip_reads=+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x0,0x71,0x23,0x10f; frame_writes=0x71,0x0,0x170,0xa; functions=function_96918,function_96b77,function_96b7a; ranges=0x96918-0x96b6e,0x96b77-0x96b79,0x96b7a-0x96b7b */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 147, VM_TIER3_UNKNOWN_SLOT, 5, "function_96918", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_275(VMTier3Frame *vm) {
    /* rank=79 target=0xb180e primary=function_b180e sidecar=vm_unobserved_handlers_retdec_batch02.c functions=2 span=809 covered=802 */
    /* share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=RetDec return is raw modulo slot without dispatch base; ip_reads=+0x5/2,+0x7/2,+0x9/2,+0x0/1,+0x3/2,+0x1/2; frame_reads=0xa,0x170,0x0,0x199,0x23,0x10f; frame_writes=0x23,0x170,0xa; functions=function_b180e,function_b1b32; ranges=0xb180e-0xb1b2d,0xb1b32-0xb1b35 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 11);
    return vm_tier3_done(vm, 275, VM_TIER3_UNKNOWN_SLOT, 11, "function_b180e", "retdec_raw_mod_slot");
}

static VMTier3Result vm_tier3_entry_152(VMTier3Frame *vm) {
    /* rank=80 target=0x9768c primary=function_9768c sidecar=vm_unobserved_handlers_retdec_batch02.c functions=2 span=812 covered=804 */
    /* share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return is frame/result pointer after compare/flag side effects; ip_reads=+0x9/2,+0x1/2,+0x7/2,+0x0/1,+0x3/2,+0x5/2; frame_reads=0xa,0x170,0x199,0x0,0x10f; frame_writes=0x170,0xa; functions=function_9768c,function_979b0; ranges=0x9768c-0x979ab,0x979b0-0x979b5 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 11);
    return vm_tier3_done(vm, 152, VM_TIER3_UNKNOWN_SLOT, 11, "function_9768c", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_019(VMTier3Frame *vm) {
    /* rank=81 target=0x7c30a primary=function_7c30a sidecar=vm_unobserved_handlers_retdec_batch02.c functions=2 span=814 covered=804 */
    /* share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return is frame+ip cell after pointer compare and state update; ip_reads=+0x4/2,+0x2/2,+0x9/2,+0x8/1,+0x0/2,+0x6/2; frame_reads=0xa,0x81,0x199,0x10f,0x170; frame_writes=0x170,0xa; functions=function_7c30a,function_7c630; ranges=0x7c30a-0x7c62b,0x7c630-0x7c633 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 11);
    return vm_tier3_done(vm, 19, VM_TIER3_UNKNOWN_SLOT, 11, "function_7c30a", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_296(VMTier3Frame *vm) {
    /* rank=82 target=0xb625d primary=function_b625d sidecar=vm_unobserved_handlers_retdec_batch01.c functions=3 span=647 covered=637 */
    /* share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=return is frame/result pointer after flag/operand rewrite; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0xa,0x0,0x81,0x194,0x71,0x10f; frame_writes=0x71,0x0,0x170,0xa; functions=function_b625d,function_b64dc,function_b64df; ranges=0xb625d-0xb64d7,0xb64dc-0xb64de,0xb64df-0xb64e0 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 296, VM_TIER3_UNKNOWN_SLOT, 5, "function_b625d", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_329(VMTier3Frame *vm) {
    /* rank=83 target=0xbc676 primary=function_bc676 sidecar=vm_unobserved_handlers_retdec_batch03.c functions=2 span=847 covered=837 */
    /* share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=RetDec references dispatch base but return algebra is g3/noise-mixed; ip_reads=+0x3/2,+0x0/1,+0x1/2; frame_reads=0xa,0x0,0x170,0x194,0x71,0x10f,0x23; frame_writes=0x170,0x71,0x0,0xa; functions=function_bc676,function_bc9bd; ranges=0xbc676-0xbc9b8,0xbc9bd-0xbc9c0 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 329, VM_TIER3_UNKNOWN_SLOT, 5, "function_bc676", "noisy_dispatch_base_candidate");
}

static VMTier3Result vm_tier3_entry_177(VMTier3Frame *vm) {
    /* rank=84 target=0x9c3f7 primary=function_9c3f7 sidecar=vm_unobserved_handlers_retdec_batch03.c functions=2 span=860 covered=865 */
    /* share=primary_plus_large_neighbor_body; ip += 5; retdec_tail=return is g3-masked state/slot candidate; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x10f; frame_writes=0x199,0x170,0xa; functions=function_9c3f7,function_9c74a; ranges=0x9c3f7-0x9c74a,0x9c74a-0x9ca8d */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 177, VM_TIER3_UNKNOWN_SLOT, 5, "function_9c3f7", "masked_return_slot_requires_g3");
}

static VMTier3Result vm_tier3_entry_103(VMTier3Frame *vm) {
    /* rank=85 target=0x8df9c primary=function_8df9c sidecar=vm_unobserved_handlers_retdec_batch03.c functions=2 span=863 covered=856 */
    /* share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return is low predicate bits; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x60,0x81,0x194,0x71,0x10f,0x170; frame_writes=0x71,0x0,0x60,0x170,0xa; functions=function_8df9c,function_8e2f7; ranges=0x8df9c-0x8e2ef,0x8e2f7-0x8e2fc */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 103, VM_TIER3_UNKNOWN_SLOT, 5, "function_8df9c", "non_dispatch_predicate_return");
}

static VMTier3Result vm_tier3_entry_024(VMTier3Frame *vm) {
    /* rank=86 target=0x7d5ec primary=function_7d5ec sidecar=vm_unobserved_handlers_retdec_batch03.c functions=2 span=866 covered=860 */
    /* share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return dispatch_base + slot after state_after = (0x7d53d38d - state0 + s16(ip+6)) & state0; ip_reads=+0x0/2,+0x4/2,+0x9/2,+0x6/1,+0x7/2,+0x2/2; frame_reads=0xa,0x23,0x199,0x10f,0x170; frame_writes=0x23,0xa; functions=function_7d5ec,function_7d945; ranges=0x7d5ec-0x7d941,0x7d945-0x7d94c */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    uint32_t state_after = (0x7d53d38du - state0 + (uint32_t)(int32_t)vm_tier3_s16(ip + 6)) & state0;
    uint32_t slot_source = (state_after ^ (uint32_t)(int32_t)vm_tier3_s16(ip + 2)) + 0x565u;
    *vm_tier3_state_cell(vm) = state_after;
    vm_tier3_advance_ip(vm, 11);
    return vm_tier3_done(vm, 24, vm_tier3_slot16(slot_source), 11, "function_7d5ec", "retdec_dispatch_table_slot");
}

static VMTier3Result vm_tier3_entry_343(VMTier3Frame *vm) {
    /* rank=87 target=0xbfc0d primary=function_bfc0d sidecar=vm_unobserved_handlers_retdec_batch03.c functions=2 span=874 covered=875 */
    /* share=primary_plus_large_neighbor_body; ip += 11; retdec_tail=return is frame/result pointer after compare/flag side effects; ip_reads=+0x5/2,+0x3/2,+0x0/2,+0x2/1,+0x9/2,+0x7/2; frame_reads=0xa,0x170,0x199,0x0,0x10f; frame_writes=0x170,0xa; functions=function_bfc0d,function_bff6a; ranges=0xbfc0d-0xbff6a,0xbff6a-0xc02e4 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 11);
    return vm_tier3_done(vm, 343, VM_TIER3_UNKNOWN_SLOT, 11, "function_bfc0d", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_051(VMTier3Frame *vm) {
    /* rank=88 target=0x83061 primary=function_83061 sidecar=vm_unobserved_handlers_retdec_batch03.c functions=2 span=883 covered=873 */
    /* share=primary_plus_empty_overlap_stub; ip += 11; retdec_tail=return is frame/result pointer after pointer compare and state update; ip_reads=+0x9/2,+0x2/2,+0x0/2,+0x4/1,+0x5/2,+0x7/2; frame_reads=0xa,0x170,0x23,0x199,0x10f; frame_writes=0x23,0x170,0xa; functions=function_83061,function_833cc; ranges=0x83061-0x833c7,0x833cc-0x833cf */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 11);
    return vm_tier3_done(vm, 51, VM_TIER3_UNKNOWN_SLOT, 11, "function_83061", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_008(VMTier3Frame *vm) {
    /* rank=89 target=0x79a3d primary=function_79a3d sidecar=vm_unobserved_handlers_retdec_batch03.c functions=2 span=884 covered=876 */
    /* share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return dispatch_table[s16(ip+0)+0x4c6] after rotate/flag side effects; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x60,0x0,0x23,0x194,0x71,0x10f; frame_writes=0x71,0x60,0x0,0x170,0xa; functions=function_79a3d,function_79da7; ranges=0x79a3d-0x79da3,0x79da7-0x79dad */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    uint32_t slot_source = (uint32_t)((int32_t)vm_tier3_s16(ip + 0) + 0x4c6);
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 8, vm_tier3_slot16(slot_source), 5, "function_79a3d", "retdec_dispatch_table_slot");
}

static VMTier3Result vm_tier3_entry_277(VMTier3Frame *vm) {
    /* rank=90 target=0xb1fd5 primary=function_b1fd5 sidecar=vm_unobserved_handlers_retdec_batch03.c functions=2 span=887 covered=887 */
    /* share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=RetDec references dispatch base but return algebra is g3/noise-mixed; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x0,0x170,0x60,0x194,0x23,0x71,0x10f; frame_writes=0x71,0x170,0x60,0x0,0xa; functions=function_b1fd5,function_b2346; ranges=0xb1fd5-0xb2342,0xb2346-0xb2350 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 277, VM_TIER3_UNKNOWN_SLOT, 5, "function_b1fd5", "noisy_dispatch_base_candidate");
}

static VMTier3Result vm_tier3_entry_004(VMTier3Frame *vm) {
    /* rank=91 target=0x792f8 primary=function_792f8 sidecar=vm_unobserved_handlers_retdec_batch03.c functions=2 span=903 covered=896 */
    /* share=primary_plus_empty_overlap_stub; ip += 6; retdec_tail=return is g2 mask address, not dispatch; ip_reads=+0x0/4,+0x4/2; frame_reads=0x170,0x194,0x23,0x0,0x81,0xa,0x10f; frame_writes=0x170,0x23,0x16f,0x0,0xa; functions=function_792f8,function_79677; ranges=0x792f8-0x79675,0x79677-0x7967a */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 6);
    return vm_tier3_done(vm, 4, VM_TIER3_UNKNOWN_SLOT, 6, "function_792f8", "g2_mask_return_no_dispatch_slot");
}

static VMTier3Result vm_tier3_entry_212(VMTier3Frame *vm) {
    /* rank=92 target=0xa3a4b primary=function_a3a4b sidecar=vm_unobserved_handlers_retdec_batch03.c functions=2 span=905 covered=897 */
    /* share=primary_plus_empty_overlap_stub; ip += 8; retdec_tail=return is frame/result pointer after qword pointer step; ip_reads=+0x0/2,+0x4/2,+0x6/2,+0x2/2; frame_reads=0xa,0x170,0x199,0x23,0x10f; frame_writes=0x23,0x170,0xa; functions=function_a3a4b,function_a3dc9; ranges=0xa3a4b-0xa3dc7,0xa3dc9-0xa3dce */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 8);
    return vm_tier3_done(vm, 212, VM_TIER3_UNKNOWN_SLOT, 8, "function_a3a4b", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_211(VMTier3Frame *vm) {
    /* rank=93 target=0xa36c9 primary=function_a36c9 sidecar=vm_unobserved_handlers_retdec_batch04.c functions=2 span=911 covered=901 */
    /* share=primary_plus_empty_overlap_stub; ip += 10; retdec_tail=return is g3/base-mangled arithmetic residue; ip_reads=+0x0/4,+0x0/8,+0x8/2; frame_reads=0x81,0x23,0x170,0xa,0x71,0x10f; frame_writes=0x23,0x170,0x60,0xa; functions=function_a36c9,function_a3a4d; ranges=0xa36c9-0xa3a4b,0xa3a4d-0xa3a50 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 10);
    return vm_tier3_done(vm, 211, VM_TIER3_UNKNOWN_SLOT, 10, "function_a36c9", "masked_noisy_return_no_dispatch_slot");
}

static VMTier3Result vm_tier3_entry_312(VMTier3Frame *vm) {
    /* rank=94 target=0xb87aa primary=function_b87aa sidecar=vm_unobserved_handlers_retdec_batch04.c functions=2 span=933 covered=923 */
    /* share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return mixes dispatch base address with g3 mask; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0x194,0x81,0xa,0x0,0x60,0x170,0x23,0x71,0x10f; frame_writes=0x170,0x71,0x23,0x0,0x60,0xa; functions=function_b87aa,function_b8b47; ranges=0xb87aa-0xb8b42,0xb8b47-0xb8b4a */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 312, VM_TIER3_UNKNOWN_SLOT, 5, "function_b87aa", "masked_dispatch_base_requires_g3");
}

static VMTier3Result vm_tier3_entry_104(VMTier3Frame *vm) {
    /* rank=95 target=0x8e2ef primary=function_8e2ef sidecar=vm_unobserved_handlers_retdec_batch04.c functions=2 span=975 covered=977 */
    /* share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return is frame/result pointer on both RetDec branches; ip_reads=+0x0/1,+0x1/2,+0x3/2; frame_reads=0x23,0xa,0x60,0x0,0x194,0x71,0x10f,0x170; frame_writes=0x23,0x71,0x60,0x0,0xa; functions=function_8e2ef,function_8e6b6; ranges=0x8e2ef-0x8e6b4,0x8e6b6-0x8e6c2 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 104, VM_TIER3_UNKNOWN_SLOT, 5, "function_8e2ef", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_027(VMTier3Frame *vm) {
    /* rank=96 target=0x7dfbf primary=function_7dfbf sidecar=vm_unobserved_handlers_retdec_batch04.c functions=2 span=989 covered=982 */
    /* share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return is frame/result pointer after operand/state rewrite; ip_reads=+0x3/2,+0x2/1,+0x0/2; frame_reads=0xa,0x170,0x10f; frame_writes=0x199,0x170,0xa; functions=function_7dfbf,function_7e392; ranges=0x7dfbf-0x7e390,0x7e392-0x7e397 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 27, VM_TIER3_UNKNOWN_SLOT, 5, "function_7dfbf", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_089(VMTier3Frame *vm) {
    /* rank=97 target=0x8b028 primary=function_8b028 sidecar=vm_unobserved_handlers_retdec_batch02.c functions=3 span=793 covered=783 */
    /* share=primary_plus_empty_overlap_stubs; ip += 11; retdec_tail=return is frame+0x81 plus predicate-selected residue; ip_reads=+0x1/2,+0x5/2,+0x3/2,+0x0/1,+0x7/2,+0x9/2; frame_reads=0xa,0x199,0x81,0x10f,0x170,0x23; frame_writes=0x170,0xa; functions=function_8b028,function_8b336,function_8b339; ranges=0x8b028-0x8b334,0x8b336-0x8b338,0x8b339-0x8b33a */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 11);
    return vm_tier3_done(vm, 89, VM_TIER3_UNKNOWN_SLOT, 11, "function_8b028", "non_dispatch_pointer_return");
}

static VMTier3Result vm_tier3_entry_230(VMTier3Frame *vm) {
    /* rank=98 target=0xa757f primary=function_a757f sidecar=vm_unobserved_handlers_retdec_batch04.c functions=2 span=1065 covered=1063 */
    /* share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=RetDec reads dispatch base but return subtracts masked low-slot residue; ip_reads=+0x4/1,+0x0/2,+0x2/2; frame_reads=0x81,0x71,0x0,0xa,0x60,0x23,0x194,0x170,0x10f; frame_writes=0x170,0x23,0x71,0x60,0x0,0xa; functions=function_a757f,function_a799e; ranges=0xa757f-0xa799b,0xa799e-0xa79a9 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 230, VM_TIER3_UNKNOWN_SLOT, 5, "function_a757f", "noisy_dispatch_base_candidate");
}

static VMTier3Result vm_tier3_entry_294(VMTier3Frame *vm) {
    /* rank=99 target=0xb5d7c primary=function_b5d7c sidecar=vm_unobserved_handlers_retdec_batch03.c functions=3 span=878 covered=876 */
    /* share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=return is obfuscated pointer/noise expression; ip_reads=+0x0/2,+0x4/1,+0x2/2; frame_reads=0xa,0x10f,0x170; frame_writes=0x199,0x170,0xa; functions=function_b5d7c,function_b60e2,function_b60e7; ranges=0xb5d7c-0xb60e0,0xb60e2-0xb60e4,0xb60e7-0xb60ed */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 294, VM_TIER3_UNKNOWN_SLOT, 5, "function_b5d7c", "masked_noisy_return_no_dispatch_slot");
}

static VMTier3Result vm_tier3_entry_002(VMTier3Frame *vm) {
    /* rank=100 target=0x788e2 primary=function_788e2 sidecar=vm_unobserved_handlers_retdec_batch04.c functions=3 span=930 covered=920 */
    /* share=primary_plus_empty_overlap_stubs; ip += 10; retdec_tail=return is frame/result pointer after wide operand update; ip_reads=+0x2/4,+0x2/8,+0x0/2; frame_reads=0x23,0xa,0x170,0x71,0x81,0x194,0x10f; frame_writes=0x170,0x23,0x60,0xa; functions=function_788e2,function_78c79,function_78c7f; ranges=0x788e2-0x78c77,0x78c79-0x78c7b,0x78c7f-0x78c80 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 10);
    return vm_tier3_done(vm, 2, VM_TIER3_UNKNOWN_SLOT, 10, "function_788e2", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_166(VMTier3Frame *vm) {
    /* rank=101 target=0x9a46e primary=function_9a46e sidecar=vm_unobserved_handlers_retdec_batch05.c functions=2 span=1131 covered=1125 */
    /* share=primary_plus_empty_overlap_stub; ip += 6; retdec_tail=return is g3-masked state/slot candidate; ip_reads=+0x2/4,+0x0/2; frame_reads=0x170,0x23,0x81,0x71,0xa,0x0,0x10f; frame_writes=0x170,0x23,0x16f,0x0,0xa; functions=function_9a46e,function_9a8d4; ranges=0x9a46e-0x9a8d2,0x9a8d4-0x9a8d5 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 6);
    return vm_tier3_done(vm, 166, VM_TIER3_UNKNOWN_SLOT, 6, "function_9a46e", "masked_return_slot_requires_g3");
}

static VMTier3Result vm_tier3_entry_271(VMTier3Frame *vm) {
    /* rank=102 target=0xb09ab primary=function_b09ab sidecar=vm_unobserved_handlers_retdec_batch05.c functions=2 span=1166 covered=1162 */
    /* share=primary_plus_empty_overlap_stub; ip += 10; retdec_tail=return is frame plus constant offset; ip_reads=+0x0/4,+0x0/8,+0x8/2; frame_reads=0x23,0x170,0xa,0x81,0x0,0x194,0x10f; frame_writes=0x170,0x23,0x60,0xa; functions=function_b09ab,function_b0e32; ranges=0xb09ab-0xb0e30,0xb0e32-0xb0e37 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 10);
    return vm_tier3_done(vm, 271, VM_TIER3_UNKNOWN_SLOT, 10, "function_b09ab", "constant_pointer_return_no_dispatch_slot");
}

static VMTier3Result vm_tier3_entry_010(VMTier3Frame *vm) {
    /* rank=103 target=0x7a04f primary=function_7a04f sidecar=vm_unobserved_handlers_retdec_batch05.c functions=2 span=1170 covered=1164 */
    /* share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=RetDec reads dispatch base but return is g3/noise-mixed; ip_reads=+0x4/1,+0x2/2,+0x0/2; frame_reads=0x0,0x170,0x81,0x194,0xa,0x23,0x60,0x71,0x10f; frame_writes=0x170,0x23,0x71,0x0,0x60,0xa; functions=function_7a04f,function_7a4e3; ranges=0x7a04f-0x7a4d8,0x7a4e3-0x7a4e6 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 10, VM_TIER3_UNKNOWN_SLOT, 5, "function_7a04f", "noisy_dispatch_base_candidate");
}

static VMTier3Result vm_tier3_entry_249(VMTier3Frame *vm) {
    /* rank=104 target=0xac440 primary=function_ac440 sidecar=vm_unobserved_handlers_retdec_batch04.c functions=3 span=975 covered=965 */
    /* share=primary_plus_empty_overlap_stubs; ip += 11; retdec_tail=RetDec return is raw modulo slot without dispatch base; ip_reads=+0x9/2,+0x4/2,+0x2/2,+0x8/1,+0x6/2,+0x0/2; frame_reads=0xa,0x81,0x23,0x199,0x10f,0x170; frame_writes=0x23,0x170,0xa; functions=function_ac440,function_ac804,function_ac807; ranges=0xac440-0xac802,0xac804-0xac806,0xac807-0xac808 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 11);
    return vm_tier3_done(vm, 249, VM_TIER3_UNKNOWN_SLOT, 11, "function_ac440", "retdec_raw_mod_slot");
}

static VMTier3Result vm_tier3_entry_207(VMTier3Frame *vm) {
    /* rank=105 target=0xa1ecf primary=function_a1ecf sidecar=vm_unobserved_handlers_retdec_batch05.c functions=2 span=1183 covered=1173 */
    /* share=primary_plus_empty_overlap_stub; ip += 6; retdec_tail=return is dispatch base OR mask mixed with frame+state; ip_reads=+0x0/4,+0x4/2; frame_reads=0x23,0x81,0x170,0x0,0xa,0x194,0x10f; frame_writes=0x170,0x16f,0x0,0x23,0xa; functions=function_a1ecf,function_a2366; ranges=0xa1ecf-0xa2361,0xa2366-0xa2369 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 6);
    return vm_tier3_done(vm, 207, VM_TIER3_UNKNOWN_SLOT, 6, "function_a1ecf", "masked_dispatch_base_candidate");
}

static VMTier3Result vm_tier3_entry_134(VMTier3Frame *vm) {
    /* rank=106 target=0x9406d primary=function_9406d sidecar=vm_unobserved_handlers_retdec_batch04.c functions=3 span=1044 covered=1038 */
    /* share=primary_plus_empty_overlap_stubs; ip += 6; retdec_tail=RetDec reads dispatch base but return algebra is g3/noise-mixed; ip_reads=+0x0/4,+0x4/2; frame_reads=0x23,0x170,0x81,0xa,0x194,0x0,0x10f; frame_writes=0x23,0x170,0x16f,0x0,0xa; functions=function_9406d,function_9447d,function_94483; ranges=0x9406d-0x94478,0x9447d-0x9447f,0x94483-0x94484 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 6);
    return vm_tier3_done(vm, 134, VM_TIER3_UNKNOWN_SLOT, 6, "function_9406d", "noisy_dispatch_base_candidate");
}

static VMTier3Result vm_tier3_entry_223(VMTier3Frame *vm) {
    /* rank=107 target=0xa6470 primary=function_a6470 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=3 span=1115 covered=1116 */
    /* share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=RetDec reads dispatch base but return algebra is heavily base/noise-mixed; ip_reads=+0x2/1,+0x3/2,+0x0/2; frame_reads=0x81,0x71,0xa,0x60,0x0,0x194,0x23,0x10f,0x170; frame_writes=0x170,0x71,0x60,0x0,0xa; functions=function_a6470,function_a68c4,function_a68ca; ranges=0xa6470-0xa68c2,0xa68c4-0xa68c9,0xa68ca-0xa68cf */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 223, VM_TIER3_UNKNOWN_SLOT, 5, "function_a6470", "noisy_dispatch_base_candidate");
}

static VMTier3Result vm_tier3_entry_022(VMTier3Frame *vm) {
    /* rank=108 target=0x7cb43 primary=function_7cb43 sidecar=vm_unobserved_handlers_retdec_batch05.c functions=3 span=1233 covered=1223 */
    /* share=primary_plus_empty_overlap_stubs; ip += 5; retdec_tail=return is frame/result pointer after operand/state rewrite; ip_reads=+0x2/1,+0x0/2,+0x3/2; frame_reads=0x81,0x194,0x23,0x0,0x170,0xa,0x60,0x71,0x10f; frame_writes=0x23,0x170,0x71,0x60,0x0,0xa; functions=function_7cb43,function_7d009,function_7d00c; ranges=0x7cb43-0x7d007,0x7d009-0x7d00b,0x7d00c-0x7d00d */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 22, VM_TIER3_UNKNOWN_SLOT, 5, "function_7cb43", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_entry_081(VMTier3Frame *vm) {
    /* rank=109 target=0x88c3f primary=function_88c3f sidecar=vm_unobserved_handlers_retdec_batch06.c functions=2 span=1500 covered=1490 */
    /* share=primary_plus_empty_overlap_stub; ip += 5; retdec_tail=return is frame/result pointer after operand/state rewrite; ip_reads=+0x4/1,+0x2/2,+0x0/2; frame_reads=0x23,0xa,0x0,0x60,0x194,0x81,0x71,0x10f,0x170; frame_writes=0x170,0x71,0x0,0x60,0xa; functions=function_88c3f,function_89216; ranges=0x88c3f-0x8920e,0x89216-0x89219 */
    uint8_t *ip = vm_tier3_ip(vm);
    uint32_t state0 = *vm_tier3_state_cell(vm);
    uint32_t flags0 = *vm_tier3_flags_cell(vm);
    (void)ip;
    (void)state0;
    (void)flags0;
    vm_tier3_advance_ip(vm, 5);
    return vm_tier3_done(vm, 81, VM_TIER3_UNKNOWN_SLOT, 5, "function_88c3f", "state_effect_only_no_dispatch_return");
}

static VMTier3Result vm_tier3_call(unsigned entry, VMTier3Frame *vm) {
    switch (entry) {
    case 327: return vm_tier3_entry_327(vm);
    case 109: return vm_tier3_entry_109(vm);
    case 115: return vm_tier3_entry_115(vm);
    case 304: return vm_tier3_entry_304(vm);
    case 135: return vm_tier3_entry_135(vm);
    case 141: return vm_tier3_entry_141(vm);
    case 341: return vm_tier3_entry_341(vm);
    case 120: return vm_tier3_entry_120(vm);
    case 147: return vm_tier3_entry_147(vm);
    case 275: return vm_tier3_entry_275(vm);
    case 152: return vm_tier3_entry_152(vm);
    case 19: return vm_tier3_entry_019(vm);
    case 296: return vm_tier3_entry_296(vm);
    case 329: return vm_tier3_entry_329(vm);
    case 177: return vm_tier3_entry_177(vm);
    case 103: return vm_tier3_entry_103(vm);
    case 24: return vm_tier3_entry_024(vm);
    case 343: return vm_tier3_entry_343(vm);
    case 51: return vm_tier3_entry_051(vm);
    case 8: return vm_tier3_entry_008(vm);
    case 277: return vm_tier3_entry_277(vm);
    case 4: return vm_tier3_entry_004(vm);
    case 212: return vm_tier3_entry_212(vm);
    case 211: return vm_tier3_entry_211(vm);
    case 312: return vm_tier3_entry_312(vm);
    case 104: return vm_tier3_entry_104(vm);
    case 27: return vm_tier3_entry_027(vm);
    case 89: return vm_tier3_entry_089(vm);
    case 230: return vm_tier3_entry_230(vm);
    case 294: return vm_tier3_entry_294(vm);
    case 2: return vm_tier3_entry_002(vm);
    case 166: return vm_tier3_entry_166(vm);
    case 271: return vm_tier3_entry_271(vm);
    case 10: return vm_tier3_entry_010(vm);
    case 249: return vm_tier3_entry_249(vm);
    case 207: return vm_tier3_entry_207(vm);
    case 134: return vm_tier3_entry_134(vm);
    case 223: return vm_tier3_entry_223(vm);
    case 22: return vm_tier3_entry_022(vm);
    case 81: return vm_tier3_entry_081(vm);
    default: return (VMTier3Result){ (uint16_t)entry, VM_TIER3_UNKNOWN_SLOT, 0, 0, "-", "not_tier3_modelled" };
    }
}
