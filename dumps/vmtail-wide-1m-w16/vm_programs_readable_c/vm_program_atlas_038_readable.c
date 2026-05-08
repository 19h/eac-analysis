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
    {0x2bf97cu, 0x2bf97eu, 165u, 258u, "vmop_165_plus0x2_state_const_post_slot_const_or_affine", "0201", "fixed_or_affine_dispatch", "readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "258@0xadf2c:1", "", "", "none"},
    {0x2bf97eu, 0x2bf982u, 258u, 185u, "vmop_258_plus0x4_state_add_const_slot_multi_path", "d4c22176", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e ^ u16_2 - flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e & u16_0 - state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e ^...#10a", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=70=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 ^ 0x11095fd5)) + (mask32(flags0 ^ 0x1769756e)))) ^ (mask32(u16_2 - (mask32(flags0 ^ 0x1769756e)))))))) ^ 0x5812e92c)) & 0xffff | 58=(mask32((m...#12f", "ip += 0x4", "185@0x9d964:1", "", "", "algebraic_state_or_slot_formula"},
    {0x2bf982u, 0x2bf985u, 185u, 157u, "vmop_185_plus0x3_state_add_const_slot_multi_path", "eb8150", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & 0x1f29f35 + flags0 | 0x17e55682 + 0x28030c24 ^ 0x30d03eec | 0x7fa981a ^ 0x5ea8d1c5 | u16_0 ^ state0 ^ flags0 | 0x17e55682 ^ 0x2000c224 & 0x1f29f35 + flags0 ...#107", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=128=(mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 | 0x17e55682)))) ^ 0x2000c224)) & 0x1f29f35)) + (mask32((mask32((mask32((mask32((mask32(flags0 | 0x17e55682)) + 0x28030c24))...#df", "ip += 0x3", "157@0x98a9a:1", "", "", "algebraic_state_or_slot_formula"},
    {0x2bf985u, 0x2bf989u, 157u, 124u, "vmop_157_plus0x4_state_add_const_slot_multi_path", "4be7b300", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 ^ 0x2f4dfd84 + u16_2 | 0x1f5cd114 - flags0 + 0x3f0d8c6a + 0x2832271c ^ 0x520e3305 & 0x7edaa354 ^ 0x68e1604d ^ 0x3d2638af & state0 ^ 0x2f4dfd84 + u16_2 ^ u16_0 + state0 ^ 0x2f4dfd84 + u16_2 | 0x...#12f", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=79=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32(state0 ^ 0x2f4dfd84)) + u16_2)) | 0x1f5cd114)) - (mask32((mask32(flags0 ^ 0x3d2638af)) & (mask32((mask32(state0 ^ 0x2f4dfd84)) + u16_2)))))))...#12f", "ip += 0x4", "124@0x91e81:1", "", "", "algebraic_state_or_slot_formula"},
    {0x2bf989u, 0x2bf98fu, 124u, 49u, "vmop_124_plus0x6_state_add_const_slot_multi_path", "b18600512fc0", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 - 0x7c31e804 ^ flags0 + 0x57b29524 - 0x2c2f20af ^ 0x2bb25e3 | 0x50ef8024 + flags0 + 0x57b29524 - 0x2c2f20af - state0 - 0x7c31e804 ^ flags0 + 0x57b29524 - 0x2c2f20af ^ 0x2bb25e3 | 0x50ef8024 ^ f...#12f", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=71=(mask32((mask32(u16_4 + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - 0x7c31e804)) ^ flags0)) ^ 0x2bb25e3)) | 0x50ef8024)) + (mask32(flags0 - (mask32((mask32((mask32((mask32(stat...#12f", "ip += 0x6", "49@0x82820:1", "", "", "algebraic_state_or_slot_formula"},
    {0x2bf98fu, 0x2bf994u, 49u, 144u, "vmop_049_plus0x5_state_add_const_slot_mba_stateful", "00f3d53d01", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 & flags0 + flags0 - 0x353700ed + 0x55a592d8 - u16_1 + state0 & flags0 + flags0 - 0x353700ed + 0x55a592d8 + 0x55b8ef8d", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_1 + (mask32((mask32((mask32((mask32(state0 & flags0)) + flags0)) - 0x353700ed)) + 0x55a592d8)))) + 0x55b8ef8d)) & 0xffff", "ip += 0x5", "144@0x95887:1", "", "", "algebraic_state_or_slot_formula"},
    {0x2bf994u, 0x2bf996u, 144u, 165u, "vmop_144_plus0x2_state_mixed_slot_mba_stateful", "d79b", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = mixed MBA update over state, flags, and operands; formula=state0 & 0x61f88068 & 0x1d022eee ^ 0x6367b3dd & u16_0 ^ state0 & 0x61f88068 & 0x1d022eee ^ 0x6367b3dd - 0x2f1222e2", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32(state0 & 0x61f88068)) & 0x1d022eee)) ^ 0x6367b3dd)))) - 0x2f1222e2)) & 0xffff", "ip += 0x2", "165@0x9a24c:1", "", "", "algebraic_state_or_slot_formula;state_formula_not_named"},
    {0x2bf996u, 0x2bf998u, 165u, 322u, "vmop_165_plus0x2_state_const_post_slot_const_or_affine", "4201", "fixed_or_affine_dispatch", "readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "322@0xbb3c9:1", "", "", "none"},
    {0x2bf998u, 0x2bf99cu, 322u, 157u, "vmop_322_plus0x4_state_add_const_slot_multi_path", "b3007796", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 + u16_0 ^ flags0 | 0x2d680d90 + 0x69cbe1a0 & u16_2 - state0 + u16_0 ^ flags0 | 0x2d680d90 + 0x69cbe1a0 + 0x7ba65dc4", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_2 - (mask32((mask32((mask32(state0 + (mask32(u16_0 ^ flags0)))) | 0x2d680d90)) + 0x69cbe1a0)))) + 0x7ba65dc4)) & 0xffff", "ip += 0x4", "157@0x98a9a:1", "", "", "algebraic_state_or_slot_formula"},
    {0x2bf99cu, 0x2bf9a0u, 157u, 347u, "vmop_157_plus0x4_state_add_const_slot_multi_path", "038db300", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 ^ 0x2f4dfd84 + u16_2 | 0x1f5cd114 - flags0 + 0x3f0d8c6a + 0x2832271c ^ 0x520e3305 & 0x7edaa354 ^ 0x68e1604d ^ 0x3d2638af & state0 ^ 0x2f4dfd84 + u16_2 ^ u16_0 + state0 ^ 0x2f4dfd84 + u16_2 | 0x...#12f", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=79=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32(state0 ^ 0x2f4dfd84)) + u16_2)) | 0x1f5cd114)) - (mask32((mask32(flags0 ^ 0x3d2638af)) & (mask32((mask32(state0 ^ 0x2f4dfd84)) + u16_2)))))))...#12f", "ip += 0x4", "347@0xc088d:1", "", "", "algebraic_state_or_slot_formula"},
    {0x2bf9a0u, 0x2bf9a4u, 347u, 199u, "vmop_347_plus0x4_state_add_const_slot_multi_path", "7b867717", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 | flags0 + 0x6fa972f0 | flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0 | flags0 + 0x6fa972f0 | 0x2efc96c5 ^ 0x5cf483c7 & flags0 ^ state0 | flags0 + 0x6fa972f0 & 0x45223942 + state0...#12f", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=92=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))) | (mask32((mask32(flags0 ^ (mask32((mask32(state0 | (mask32(flags0 + 0x6fa97...#12f", "ip += 0x4", "199@0xa0631:1", "", "", "algebraic_state_or_slot_formula"},
    {0x2bf9a4u, 0x2bf9a7u, 199u, 242u, "vmop_199_plus0x3_state_add_const_slot_multi_path", "12eb5d", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 + b2 + flags0 ^ 0x7353b039 - 0x24d1328a ^ 0x7e708197 & 0x20d5418 + flags0 ^ 0x7353b039 - 0x24d1328a", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=106=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 + (mask32(b2 + flags0)))) ^ 0x7e708197)) & 0x20d5418)) + flags0)))) + 0x3030bb89)) & 0xffff | 22=(mask32((mask32(u16_0 ^ (mask32((mas...#12f", "ip += 0x3", "242@0xaa87d:1", "", "", "algebraic_state_or_slot_formula"},
    {0x2bf9a7u, 0x2bf9acu, 242u, 316u, "vmop_242_plus0x5_state_formula_slot_mba_stateful", "3d01136a87", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = unresolved formula; formula=state0 | u16_3 - state0 ^ 0x5c05e9b5", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=43=(mask32((mask32(u16_3 - state0)) ^ 0x5c05e9b5)) & 0xffff", "ip += 0x5", "316@0xb987b:1", "", "", "algebraic_state_or_slot_formula;state_formula_not_named"},
    {0x2bf9acu, 0x2bfe6fu, 316u, 354u, "vmop_316_minus0x3c4_sampled_backedge_slot_unknown", "62010000c30400003d0122", "long_or_backedge_control", "unresolved_dispatch_details", "control-special state class sampled_backedge; formula=state0", "dispatch slot expression not recovered; use per-row target evidence when available", "ip -= 0x3c4 (backedge)", "354@0xc2241", "", "", "dispatch_slot_unknown;static_model_or_runtime_validation_incomplete"},
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
