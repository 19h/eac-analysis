/*
 * Auto-generated compileable readable VM program artifact.
 * This is pseudocode/data for analysis: concrete row transitions are preserved,
 * exact string/data references are embedded, and unresolved algebra remains marked.
 */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_038_READABLE_C
#define VM_PROGRAM_ATLAS_038_READABLE_C

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

/* VM program atlas 038: 0x2bf97c..0x2bf9cc */
/* summary: control-transfer/native-bridge candidate with no exact side-effect reference yet */
/* unresolved: intent_not_final;no_exact_string_or_data_ref */

static const VMReadableOp vm_program_atlas_038_ops[] = {
    {0x2bf97cu, 0x2bf97eu, 165u, 258u, "vmop_165_plus0x2_state_const_post_slot_const_or_affine", "0201", "fixed_or_affine_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "258@0xadf2c:1", "", "", "none"},
    {0x2bf97eu, 0x2bf982u, 258u, 185u, "vmop_258_plus0x4_state_add_const_slot_multi_path", "d4c22176", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=((((((u16_0 - state0) & 0x1769756eu) ^ (0xfbf8fe86u + flags0)) ^ 0xa1b079au) | ((0xfbf8fe86u + flags0) ^ state0)) | (((u16_2 - 0x1510614fu) - flags0) ^ 0x1d7272f4u)) | 0x45609bd8u", "next_slot = Z3-proved simplified dispatch expression(s); variants=2; target_binding=target_binding_validated; formula=70=(((u16_0 - (((state0 ^ 0x11095fd5u) + (flags0 ^ 0x1769756eu)) ^ (u16_2 - (flags0 ^ 0x1769756eu)))) ^ 0x5812e92cu) & 0xffffu) & 0xffffu ; 58=(((u16_0 - (((state0 ^ 0x11095fd5u) + (((flags0 - 0x1510614fu) | 0xa1b079au) ^ 0x1769756eu)) ^ (u16_2 - (((flags0 - 0x1510614fu) | 0xa1b079au) ^ 0x1769756eu)))) ^ 0x5812e92cu) & 0xffffu) & 0xffffu", "ip += 0x4", "185@0x9d964:1", "", "", "none"},
    {0x2bf982u, 0x2bf985u, 185u, 157u, "vmop_185_plus0x3_state_add_const_slot_multi_path", "eb8150", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=(((((0x1f29f35u + flags0) & 0x2000c224u) ^ 0x17e55682u) | (state0 ^ flags0)) | ((state0 ^ flags0) ^ u16_0)) | 0x5f7a5ddfu", "next_slot = Z3-proved simplified dispatch expression(s); variants=1; target_binding=target_binding_validated; formula=128=((((((state0 ^ (flags0 | 0x17e55682u)) ^ 0x2000c224u) & 0x1f29f35u) + ((((flags0 | 0x17e55682u) + 0x28030c24u) | 0x7fa981au) ^ 0x6ea8f721u)) ^ u16_0) & 0xffffu) & 0xffffu", "ip += 0x3", "157@0x98a9a:1", "", "", "none"},
    {0x2bf985u, 0x2bf989u, 157u, 124u, "vmop_157_plus0x4_state_add_const_slot_multi_path", "4be7b300", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=((((u16_0 + state0) ^ (0x2f4dfd84u + u16_2)) ^ (((0x869c849au - flags0) ^ (0x2f4dfd84u + u16_2)) ^ (state0 & 0x3d2638afu))) ^ 0x3aeb4349u) | (((0x2f4dfd84u + u16_2) ^ state0) | ((((0x869c849au - flags0) ^ (0x2f4dfd84u + u16_2)) ^ (state0 & 0x3d2638afu)) ^ 0x2d38dfd6u))", "next_slot = Z3-proved simplified dispatch expression(s); variants=2; target_binding=target_binding_validated; formula=79=(((((((state0 ^ 0x2f4dfd84u) + u16_2) | 0x1f5cd114u) + u16_0) - (((state0 ^ 0x2f4dfd84u) + u16_2) & (flags0 ^ 0x3d2638afu))) ^ 0x17d39c9fu) & 0xffffu) & 0xffffu ; 49=(((((((state0 ^ 0x2f4dfd84u) + u16_2) | 0x1f5cd114u) + u16_0) - (((flags0 + 0x3f0d8c6au) ^ 0x3d2638afu) & ((state0 ^ 0x2f4dfd84u) + u16_2))) ^ 0x17d39c9fu) & 0xffffu) & 0xffffu", "ip += 0x4", "124@0x91e81:1", "", "", "none"},
    {0x2bf989u, 0x2bf98fu, 124u, 49u, "vmop_124_plus0x6_state_add_const_slot_multi_path", "b18600512fc0", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=(((((((((u32_0 - 0x7c31e804u) - state0) & 0x50ef8024u) ^ (0x2b837475u + flags0)) ^ 0x2bb25e3u) | (((0x83ce17fcu + state0) ^ (0x2b837475u + flags0)) ^ 0x2bb25e3u)) | (((0x410c95u + (flags0 - state0)) ^ (0x2b837475u + flags0)) ^ 0x2bb25e3u)) | ((((flags0 - state0) - 0x50ae738fu) ^ (0x2b837475u + flags0)) ^ 0x5254a5c7u)) | ((((state0 - 0x2b4267e0u) - u16_4) ^ (0x2b837475u + flags0)) ^ 0x2bb25e3u)) | 0x66bb4183u", "next_slot = Z3-proved simplified dispatch expression(s); variants=2; target_binding=target_binding_validated; formula=71=(((((u32_0 - ((flags0 - ((((state0 - 0x7c31e804u) ^ flags0) ^ 0x2bb25e3u) | 0x50ef8024u)) ^ flags0)) & ((flags0 - ((((state0 - 0x7c31e804u) ^ flags0) ^ 0x2bb25e3u) | 0x50ef8024u)) ^ flags0)) + u16_4) ^ 0x3654c1a7u) & 0xffffu) & 0xffffu ; 57=(((((u32_0 - ((0x2b837475u + flags0) ^ ((0x2b837475u + flags0) - ((((state0 - 0x7c31e804u) ^ (0x2b837475u + flags0)) ^ 0x2bb25e3u) | 0x50ef8024u)))) & ((0x2b837475u + flags0) ^ ((0x2b837475u + flags0) - ((((state0 - 0x7c31e804u) ^ (0x2b837475u + flags0)) ^ 0...#86320987cc67", "ip += 0x6", "49@0x82820:1", "", "", "none"},
    {0x2bf98fu, 0x2bf994u, 49u, 144u, "vmop_049_plus0x5_state_add_const_slot_mba_stateful", "00f3d53d01", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=(((0x206e91ebu + (flags0 + flags0)) + state0) - u16_1) & (((flags0 + flags0) + 0x76278178u) & state0)", "next_slot = Z3-proved simplified dispatch expression(s); variants=1; target_binding=target_binding_validated; formula=128=(((0x76278178u + (u16_1 + flags0)) + (flags0 & state0)) & 0xffffu) & 0xffffu", "ip += 0x5", "144@0x95887:1", "", "", "none"},
    {0x2bf994u, 0x2bf996u, 144u, 165u, "vmop_144_plus0x2_state_mixed_slot_mba_stateful", "d79b", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=(u16_0 & 0x6367b3ddu) ^ 0x345590fbu", "next_slot = Z3-proved simplified dispatch expression(s); variants=1; target_binding=target_binding_validated; formula=128=(((((state0 & 0x1000068u) ^ u16_0) ^ 0x6367b3ddu) - 0x2f1222e2u) & 0xffffu) & 0xffffu", "ip += 0x2", "165@0x9a24c:1", "", "", "none"},
    {0x2bf996u, 0x2bf998u, 165u, 322u, "vmop_165_plus0x2_state_const_post_slot_const_or_affine", "4201", "fixed_or_affine_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "322@0xbb3c9:1", "", "", "none"},
    {0x2bf998u, 0x2bf99cu, 322u, 157u, "vmop_322_plus0x4_state_add_const_slot_multi_path", "b3007796", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=(((((u16_2 + u16_0) - state0) & 0x9733ef30u) ^ flags0) | ((state0 + u16_0) ^ flags0)) | 0x12da4cf4u", "next_slot = Z3-proved simplified dispatch expression(s); variants=1; target_binding=target_binding_validated; formula=128=(((u16_2 + 0x11da7c24u) - (((flags0 ^ u16_0) + state0) | 0x2d680d90u)) & 0xffffu) & 0xffffu", "ip += 0x4", "157@0x98a9a:1", "", "", "none"},
    {0x2bf99cu, 0x2bf9a0u, 157u, 347u, "vmop_157_plus0x4_state_add_const_slot_multi_path", "038db300", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=((((u16_0 + state0) ^ (0x2f4dfd84u + u16_2)) ^ (((0x869c849au - flags0) ^ (0x2f4dfd84u + u16_2)) ^ (state0 & 0x3d2638afu))) ^ 0x3aeb4349u) | (((0x2f4dfd84u + u16_2) ^ state0) | ((((0x869c849au - flags0) ^ (0x2f4dfd84u + u16_2)) ^ (state0 & 0x3d2638afu)) ^ 0x2d38dfd6u))", "next_slot = Z3-proved simplified dispatch expression(s); variants=2; target_binding=target_binding_validated; formula=79=(((((((state0 ^ 0x2f4dfd84u) + u16_2) | 0x1f5cd114u) + u16_0) - (((state0 ^ 0x2f4dfd84u) + u16_2) & (flags0 ^ 0x3d2638afu))) ^ 0x17d39c9fu) & 0xffffu) & 0xffffu ; 49=(((((((state0 ^ 0x2f4dfd84u) + u16_2) | 0x1f5cd114u) + u16_0) - (((flags0 + 0x3f0d8c6au) ^ 0x3d2638afu) & ((state0 ^ 0x2f4dfd84u) + u16_2))) ^ 0x17d39c9fu) & 0xffffu) & 0xffffu", "ip += 0x4", "347@0xc088d:1", "", "", "none"},
    {0x2bf9a0u, 0x2bf9a4u, 347u, 199u, "vmop_347_plus0x4_state_add_const_slot_multi_path", "7b867717", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=((((((((((0x5cf483c7u + u16_2) + flags0) ^ state0) ^ 0x2efc96c5u) | state0) | (0x6fa972f0u + flags0)) | (state0 ^ flags0)) | ((0x45223942u + state0) & (0x6fa972f0u + flags0))) | (((flags0 & 0x5cf483c7u) ^ state0) ^ 0x2efc96c5u)) | (((0x5cf483c7u - flags0) ^ state0) ^ 0x2efc96c5u)) | 0x7ffebfe7u", "next_slot = Z3-proved simplified dispatch expression(s); variants=2; target_binding=target_binding_validated; formula=92=(((((((0x10871fd8u + ((((0x6fa972f0u + flags0) | state0) | (((((0x6fa972f0u + flags0) | state0) & 0x45223942u) ^ flags0) + (((0x6fa972f0u + flags0) | state0) | 0x2efc96c5u))) ^ 0x5cf483c7u)) + u16_2) + ((((((0x6fa972f0u + flags0) | state0) & 0x45223942u) ^ flags0) + (((0x6fa972f0u + flags0) | state0) | 0x2efc96c5u)) | ((((0x6fa972f0u + flags0) | state0) | (((((0x6fa972f0u + flags0) | state0) & 0x45223942u) ^ flags0) + (((0x6fa972f0u + flags0) | state0) | 0x2efc96c5u))) ^ 0x5cf483c7u))) - ((((((...#66b01122f0d2", "ip += 0x4", "199@0xa0631:1", "", "", "none"},
    {0x2bf9a4u, 0x2bf9a7u, 199u, 242u, "vmop_199_plus0x3_state_add_const_slot_multi_path", "12eb5d", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=((state0 + flags0) + b2) ^ ((flags0 + 0x20d5418u) & 0x7e708197u)", "next_slot = Z3-proved simplified dispatch expression(s); variants=2; target_binding=target_binding_validated; formula=106=((((((((state0 + flags0) + b2) ^ 0x7e708197u) & 0x20d5418u) + flags0) ^ u16_0) + 0x3030bb89u) & 0xffffu) & 0xffffu ; 22=(((((0xdb2ecd76u + (flags0 ^ 0x7353b039u)) + ((((0xdb2ecd76u + (flags0 ^ 0x7353b039u)) + (b2 + state0)) ^ 0x7e708197u) & 0x20d5418u)) ^ u16_0) + 0x3030bb89u) & 0xffffu) & 0xffffu", "ip += 0x3", "242@0xaa87d:1", "", "", "none"},
    {0x2bf9a7u, 0x2bf9acu, 242u, 316u, "vmop_242_plus0x5_state_formula_slot_mba_stateful", "3d01136a87", "obfuscated_table_dispatch", "state_and_dispatch_reduced_readable_control_semantics", "vm_state = Z3-proved simplified expression; formula=((u16_3 - state0) ^ 0x5c05e9b5u) | state0", "next_slot = Z3-proved simplified dispatch expression(s); variants=1; target_binding=target_binding_validated; formula=43=(((u16_3 - state0) ^ 0x5c05e9b5u) & 0xffffu) & 0xffffu", "ip += 0x5", "316@0xb987b:1", "", "", "none"},
    {0x2bf9acu, 0x2bfe6fu, 316u, 354u, "vmop_316_minus0x3c4_sampled_backedge_slot_unknown", "62010000c30400003d0122", "long_or_backedge_control", "state_reduced_unresolved_dispatch_details", "vm_state = Z3-proved simplified expression; formula=state0", "dispatch slot expression not recovered; use per-row target evidence when available", "ip -= 0x3c4 (backedge)", "354@0xc2241", "", "", "dispatch_slot_unknown;static_model_or_runtime_validation_incomplete"},
};
enum { VM_PROGRAM_ATLAS_038_OP_COUNT = 14 };

static const VMReadableEdge vm_program_atlas_038_edges[] = {
    {0x2bf97cu, 0x2bfe6fu, 354, "039", "inter_program", "decoded_control", "+0x4c3", "next = table[354], ip += 0x4c3"},
};
enum { VM_PROGRAM_ATLAS_038_EDGE_COUNT = 1 };

static const VMReadableStringRef vm_program_atlas_038_strings[] = {
    {0u, 0u, 0u, "", "", "", "", "", ""},
};
enum { VM_PROGRAM_ATLAS_038_STRING_REF_COUNT = 0 };

static const VMReadableProgram vm_program_atlas_038_readable_program = {
    "038", 0x2bf97cu, 0x2bf9ccu,
    vm_program_atlas_038_ops, (size_t)VM_PROGRAM_ATLAS_038_OP_COUNT,
    vm_program_atlas_038_edges, (size_t)VM_PROGRAM_ATLAS_038_EDGE_COUNT,
    vm_program_atlas_038_strings, (size_t)VM_PROGRAM_ATLAS_038_STRING_REF_COUNT,
};

const VMReadableProgram *vm_program_atlas_038_readable(void) {
    return &vm_program_atlas_038_readable_program;
}

#endif /* VM_PROGRAM_ATLAS_038_READABLE_C */
