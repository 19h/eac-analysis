/*
 * Auto-generated compileable readable VM program artifact.
 * This is pseudocode/data for analysis: concrete row transitions are preserved,
 * exact string/data references are embedded, and unresolved algebra remains marked.
 */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_057_READABLE_C
#define VM_PROGRAM_ATLAS_057_READABLE_C

typedef struct VMReadableOp {
    uint64_t start_vm_ip;
    uint64_t end_vm_ip;
    uint32_t source_entry;
    uint32_t target_entry;
    const char *opcode_name;
    const char *bytes;
    const char *operation_family;
    const char *readability_grade;
    const char *state_semantics;
    const char *dispatch_semantics;
    const char *ip_semantics;
    const char *target;
    const char *string_refs;
    const char *side_effect_categories;
    const char *unresolved;
} VMReadableOp;

typedef struct VMReadableEdge {
    uint64_t case_state;
    uint64_t successor_vm_ip;
    int32_t successor_entry;
    const char *target_program;
    const char *relation;
    const char *edge_kind;
    const char *edge_delta;
    const char *semantic_ir;
} VMReadableEdge;

typedef struct VMReadableStringRef {
    uint32_t ref_index;
    uint64_t site;
    uint64_t row_start;
    const char *text;
    const char *section_name;
    const char *role;
    const char *categories;
    const char *opcode_name;
    const char *execution_claim;
} VMReadableStringRef;

typedef struct VMReadableProgram {
    const char *program;
    uint64_t range_start;
    uint64_t range_end;
    const VMReadableOp *ops;
    size_t op_count;
    const VMReadableEdge *edges;
    size_t edge_count;
    const VMReadableStringRef *strings;
    size_t string_count;
} VMReadableProgram;

/* VM program atlas 057: 0x365458..0x3654a8 */
/* summary: control-transfer/native-bridge candidate with no exact side-effect reference yet */
/* unresolved: intent_not_final;no_exact_string_or_data_ref */

static const VMReadableOp vm_program_atlas_057_ops[] = {
    {0x365458u, 0x36545au, 165u, 189u, "vmop_165_plus0x2_state_const_post_slot_const_or_affine", "bd00", "fixed_or_affine_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "189@0x9e7af:1", "", "", "none"},
    {0x36545au, 0x36545eu, 189u, 28u, "vmop_189_plus0x4_state_add_const_slot_mba_stateful", "b30064e9", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=((((0x160e4f34u + u16_2) + state0) & state0) & 0x160e4f34u) ^ 0x2a1ce984u", "next_slot = Z3-proved simplified dispatch expression(s); variants=1; target_binding=target_binding_validated; formula=128=((((state0 & 0x160e4f34u) + u16_2) ^ 0x2a1ce984u) & 0xffffu) & 0xffffu", "ip += 0x4", "28@0x7e390:1", "", "", "none"},
    {0x36545eu, 0x365461u, 28u, 268u, "vmop_028_plus0x3_state_add_const_slot_u16_0", "600806", "operand_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a + 0x43078fb1 & 0x282416bb ^ 0x53f50e0b ^ state0 | flags0 ^ stat...#12f", "next_entry = dispatch_table[u16(ip+0)]", "ip += 0x3", "268@0xb0007:1", "", "", "none"},
    {0x365461u, 0x365465u, 268u, 253u, "vmop_268_plus0x4_state_add_const_slot_multi_path", "a30ed129", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=(((((u16_0 + 0x71bd1bb1u) - state0) | ((0x33c0c75bu + flags0) & 0x81482e01u)) | state0) | (((0x71bd1bb1u - flags0) & (0x33c0c75bu + flags0)) & 0xef0600u)) | ((u16_2 - state0) ^ ((0x33c0c75bu + flags0) & 0x41582100u))", "next_slot = Z3-proved simplified dispatch expression(s); variants=2; target_binding=target_binding_validated; formula=87=(((u16_2 - 0x36c3219bu) - ((flags0 + 0x33c0c75bu) & 0x174c40efu)) & 0xffffu) & 0xffffu ; 41=(((u16_2 + 0x402f051cu) - flags0) & 0xffffu) & 0xffffu", "ip += 0x4", "253@0xacfb1:1", "", "", "none"},
    {0x365465u, 0x36546bu, 253u, 220u, "vmop_253_plus0x6_state_add_const_slot_mba_stateful", "debe60eefec0", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=((((u32_2 - 0x1c9c7d85u) ^ (flags0 + flags0)) | ((0x7c5d4802u + u16_0) ^ 0x2906c0c1u)) | state0) | 0x62c3b0ddu", "next_slot = Z3-proved simplified dispatch expression(s); variants=1; target_binding=target_binding_validated; formula=128=((u16_0 + 0x7c5d4802u) & 0xffffu) & 0xffffu", "ip += 0x6", "220@0xa522e:1", "", "", "none"},
    {0x36546bu, 0x365470u, 220u, 173u, "vmop_220_plus0x5_state_add_const_slot_multi_path", "003d01441c", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=(((u16_3 - state0) ^ (flags0 & 0xb22637f3u)) | ((flags0 & 0xbb1e3b6du) | state0)) | ((flags0 + 0x46462807u) & (0x2332d827u - (state0 + flags0)))", "next_slot = Z3-proved simplified dispatch expression(s); variants=1; target_binding=target_binding_validated; formula=128=(((((flags0 + u16_3) - 0x66966a9cu) - ((state0 | flags0) & 0x4297c9ddu)) - (((state0 | flags0) + 0x46462807u) & 0x2332d827u)) & 0xffffu) & 0xffffu", "ip += 0x5", "173@0x9ba74:1", "", "", "none"},
    {0x365470u, 0x365472u, 173u, 165u, "vmop_173_plus0x2_state_add_const_slot_multi_path", "f60d", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=(((((flags0 + 0x5eced92du) - state0) & 0xebbbd20u) | (((u16_0 & 0x14028844u) ^ (0x5eced92du + state0)) ^ 0x456d7018u)) | ((0x5eced92du + state0) ^ 0x456d7018u)) | 0x13000804u", "next_slot = Z3-proved simplified dispatch expression(s); variants=1; target_binding=target_binding_validated; formula=128=((((((flags0 - ((0x5eced92du + state0) | 0x1f8bac4cu)) & (((0x5eced92du + state0) ^ 0x456d7018u) | 0xebbbd20u)) & 0x74128b65u) ^ u16_0) + 0x1f118051u) & 0xffffu) & 0xffffu", "ip += 0x2", "165@0x9a24c:1", "", "", "none"},
    {0x365472u, 0x365474u, 165u, 258u, "vmop_165_plus0x2_state_const_post_slot_const_or_affine", "0201", "fixed_or_affine_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "258@0xadf2c:1", "", "", "none"},
    {0x365474u, 0x365478u, 258u, 254u, "vmop_258_plus0x4_state_add_const_slot_multi_path", "ccc42176", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=((((((u16_0 - state0) & 0x1769756eu) ^ (0xfbf8fe86u + flags0)) ^ 0xa1b079au) | ((0xfbf8fe86u + flags0) ^ state0)) | (((u16_2 - 0x1510614fu) - flags0) ^ 0x1d7272f4u)) | 0x45609bd8u", "next_slot = Z3-proved simplified dispatch expression(s); variants=2; target_binding=target_binding_validated; formula=70=(((u16_0 - (((state0 ^ 0x11095fd5u) + (flags0 ^ 0x1769756eu)) ^ (u16_2 - (flags0 ^ 0x1769756eu)))) ^ 0x5812e92cu) & 0xffffu) & 0xffffu ; 58=(((u16_0 - (((state0 ^ 0x11095fd5u) + (((flags0 - 0x1510614fu) | 0xa1b079au) ^ 0x1769756eu)) ^ (u16_2 - (((flags0 - 0x1510614fu) | 0xa1b079au) ^ 0x1769756eu)))) ^ 0x5812e92cu) & 0xffffu) & 0xffffu", "ip += 0x4", "254@0xad32c:1", "", "", "none"},
    {0x365478u, 0x36547cu, 254u, 28u, "vmop_254_plus0x4_state_add_const_slot_mba_stateful", "29c18242", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=((((((0xca5e7538u + flags0) & 0x5bf4e999u) ^ 0x15874263u) | flags0) | (0xdd75be5eu + u16_2)) | (((state0 + flags0) - u16_0) ^ (state0 + flags0))) | 0x7ff37dd9u", "next_slot = Z3-proved simplified dispatch expression(s); variants=1; target_binding=target_binding_validated; formula=128=((u16_2 - 0x228a41a2u) & 0xffffu) & 0xffffu", "ip += 0x4", "28@0x7e390:1", "", "", "none"},
    {0x36547cu, 0x36547fu, 28u, 168u, "vmop_028_plus0x3_state_add_const_slot_u16_0", "40056f", "operand_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a + 0x43078fb1 & 0x282416bb ^ 0x53f50e0b ^ state0 | flags0 ^ stat...#12f", "next_entry = dispatch_table[u16(ip+0)]", "ip += 0x3", "168@0x9aa83:1", "", "", "none"},
    {0x36547fu, 0x365483u, 168u, 242u, "vmop_168_plus0x4_state_add_const_slot_multi_path", "76605ed6", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=(((((u16_0 + flags0) & 0x20118084u) ^ 0x400a0425u) | state0) | ((state0 + u16_2) & 0x4ee70776u)) | 0xa4173818u", "next_slot = Z3-proved simplified dispatch expression(s); variants=2; target_binding=target_binding_validated; formula=74=(((0x553030a2u + ((u16_0 + flags0) & (state0 | 0x6899d5d4u))) + u16_2) & 0xffffu) & 0xffffu ; 54=(((0x553030a2u + (((0xd1548f27u + (flags0 & 0x66031b5eu)) + u16_0) & (state0 | 0x6899d5d4u))) + u16_2) & 0xffffu) & 0xffffu", "ip += 0x4", "242@0xaa87d:1", "", "", "none"},
    {0x365483u, 0x365488u, 242u, 334u, "vmop_242_plus0x5_state_formula_slot_mba_stateful", "3d01b555e4", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=((u16_3 - state0) ^ 0x5c05e9b5u) | state0", "next_slot = Z3-proved simplified dispatch expression(s); variants=1; target_binding=target_binding_validated; formula=43=(((u16_3 - state0) ^ 0x5c05e9b5u) & 0xffffu) & 0xffffu", "ip += 0x5", "334@0xbdd18:1", "", "", "none"},
    {0x365488u, 0x3654e0u, 334u, 354u, "vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown", "62010000580000003d0122", "long_or_backedge_control", "state_reduced_exact_observed_dispatch_table", "vm_state = Z3-proved simplified expression; formula=state0", "next_entry = exact observed target-by-bytecode table; rows=18; byte_patterns=18; targets=354:9,171:5,165:4; formula_status=not_recovered", "ip += 0x2a5", "354@0xc2241", "", "", "slot_unknown_formula_not_recovered_exact_table_only"},
};
enum { VM_PROGRAM_ATLAS_057_OP_COUNT = 14 };

static const VMReadableEdge vm_program_atlas_057_edges[] = {
    {0x365458u, 0x3654e0u, 354, "058", "inter_program", "decoded_control", "+0x58", "next = table[354], ip += 0x58"},
};
enum { VM_PROGRAM_ATLAS_057_EDGE_COUNT = 1 };

static const VMReadableStringRef vm_program_atlas_057_strings[] = {
    {0u, 0u, 0u, "", "", "", "", "", ""},
};
enum { VM_PROGRAM_ATLAS_057_STRING_REF_COUNT = 0 };

static const VMReadableProgram vm_program_atlas_057_readable_program = {
    "057", 0x365458u, 0x3654a8u,
    vm_program_atlas_057_ops, (size_t)VM_PROGRAM_ATLAS_057_OP_COUNT,
    vm_program_atlas_057_edges, (size_t)VM_PROGRAM_ATLAS_057_EDGE_COUNT,
    vm_program_atlas_057_strings, (size_t)VM_PROGRAM_ATLAS_057_STRING_REF_COUNT,
};

const VMReadableProgram *vm_program_atlas_057_readable(void) {
    return &vm_program_atlas_057_readable_program;
}

#endif /* VM_PROGRAM_ATLAS_057_READABLE_C */
