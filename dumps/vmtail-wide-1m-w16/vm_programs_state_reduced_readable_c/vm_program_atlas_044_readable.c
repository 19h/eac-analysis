/*
 * Auto-generated compileable readable VM program artifact.
 * This is pseudocode/data for analysis: concrete row transitions are preserved,
 * exact string/data references are embedded, and unresolved algebra remains marked.
 */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_044_READABLE_C
#define VM_PROGRAM_ATLAS_044_READABLE_C

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

/* VM program atlas 044: 0x31ea5c..0x31eaac */
/* summary: control-transfer/native-bridge candidate with no exact side-effect reference yet */
/* unresolved: intent_not_final;no_exact_string_or_data_ref */

static const VMReadableOp vm_program_atlas_044_ops[] = {
    {0x31ea5cu, 0x31ea5eu, 354u, 268u, "vmop_354_plus0x2_state_const_post_slot_const_or_affine", "0c01", "fixed_or_affine_dispatch", "readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "268@0xb0007:1", "", "", "none"},
    {0x31ea5eu, 0x31ea62u, 268u, 18u, "vmop_268_plus0x4_state_add_const_slot_multi_path", "641c7662", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=(((((u16_0 + 0x71bd1bb1u) - state0) | ((0x33c0c75bu + flags0) & 0x81482e01u)) | state0) | (((0x71bd1bb1u - flags0) & (0x33c0c75bu + flags0)) & 0xef0600u)) | ((u16_2 - state0) ^ ((0x33c0c75bu + flags0) & 0x41582100u))", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=87=(mask32((mask32(u16_2 - (mask32((mask32((mask32((mask32(state0 | 0x71bd1bb1)) + (mask32((mask32(u16_0 - (mask32(state0 | 0x71bd1bb1)))) - flags0)))) & (mask32((mask32((mask32(flags0 + 0x33c0c75b)) ...#12f", "ip += 0x4", "18@0x7be9b:1", "", "", "dispatch_formula_not_reduced"},
    {0x31ea62u, 0x31ea65u, 18u, 64u, "vmop_018_plus0x3_state_add_const_slot_multi_path", "0d2200", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((0x649b4ea0u - (u16_0 + state0)) | state0) | 0x1188080u) & flags0) | 0x649b4ea0u", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=99=(mask32(u16_0 - (mask32((mask32((mask32(state0 & flags0)) - 0x6382ce20)) & flags0)))) & 0xffff | 29=(mask32(u16_0 - (mask32((mask32((mask32(state0 & (mask32((mask32(flags0 | 0x954df65)) + 0x5b466f3...#11f", "ip += 0x3", "64@0x85059:1", "", "", "dispatch_formula_not_reduced"},
    {0x31ea65u, 0x31ea69u, 64u, 253u, "vmop_064_plus0x4_state_add_const_slot_multi_path", "11a6f622", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((state0 - 0x79614de5u) ^ ((0xbde73fa0u + flags0) & 0xcdc277b6u)) ^ (((flags0 + u16_2) - 0x4218c060u) & 0x5b249a06u)", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=77=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 - 0x79614de5)) ^ (mask32(u16_2 + flags0)))) ^ (mask32(flags0 + 0x729dddb0)))))) + 0x2701cdcd)) & 0xffff | 51=(mask32((mask32(u16_0 - (mask32((...#12f", "ip += 0x4", "253@0xacfb1:1", "", "", "dispatch_formula_not_reduced"},
    {0x31ea69u, 0x31ea6fu, 253u, 269u, "vmop_253_plus0x6_state_add_const_slot_mba_stateful", "66c06dbb74e9", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((u32_2 - 0x1c9c7d85u) ^ (flags0 + flags0)) | ((0x7c5d4802u + u16_0) ^ 0x2906c0c1u)) | state0) | 0x62c3b0ddu", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32(u16_0 + 0x7c5d4802)) & 0xffff", "ip += 0x6", "269@0xb045b:1", "", "", "dispatch_formula_not_reduced"},
    {0x31ea6fu, 0x31ea74u, 269u, 144u, "vmop_269_plus0x5_state_add_const_slot_multi_path", "003d01f716", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((0x4f60a287u + u16_3) + state0) ^ ((flags0 & state0) & 0x6f7fff69u)) ^ (flags0 & state0)) | ((((flags0 & state0) & 0x6f7fff69u) ^ state0) | ((flags0 & state0) ^ 0x545b4609u))", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_3 + (mask32((mask32((mask32((mask32(state0 ^ (mask32(flags0 & state0)))) & 0x6f7fff69)) & (mask32(flags0 & state0)))) | (mask32((mask32(flags0 & state0)) ^ 0x4f60a287)))))) + 0x4faa382)) & 0xffff", "ip += 0x5", "144@0x95887:1", "", "", "dispatch_formula_not_reduced"},
    {0x31ea74u, 0x31ea76u, 144u, 165u, "vmop_144_plus0x2_state_mixed_slot_mba_stateful", "d79b", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=(u16_0 & 0x6367b3ddu) ^ 0x345590fbu", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32(state0 & 0x61f88068)) & 0x1d022eee)) ^ 0x6367b3dd)))) - 0x2f1222e2)) & 0xffff", "ip += 0x2", "165@0x9a24c:1", "", "", "dispatch_formula_not_reduced"},
    {0x31ea76u, 0x31ea78u, 165u, 268u, "vmop_165_plus0x2_state_const_post_slot_const_or_affine", "0c01", "fixed_or_affine_dispatch", "readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "268@0xb0007:1", "", "", "none"},
    {0x31ea78u, 0x31ea7cu, 268u, 340u, "vmop_268_plus0x4_state_add_const_slot_multi_path", "641c866c", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=(((((u16_0 + 0x71bd1bb1u) - state0) | ((0x33c0c75bu + flags0) & 0x81482e01u)) | state0) | (((0x71bd1bb1u - flags0) & (0x33c0c75bu + flags0)) & 0xef0600u)) | ((u16_2 - state0) ^ ((0x33c0c75bu + flags0) & 0x41582100u))", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=87=(mask32((mask32(u16_2 - (mask32((mask32((mask32((mask32(state0 | 0x71bd1bb1)) + (mask32((mask32(u16_0 - (mask32(state0 | 0x71bd1bb1)))) - flags0)))) & (mask32((mask32((mask32(flags0 + 0x33c0c75b)) ...#12f", "ip += 0x4", "340@0xbf435:1", "", "", "dispatch_formula_not_reduced"},
    {0x31ea7cu, 0x31ea80u, 340u, 254u, "vmop_340_plus0x4_state_add_const_slot_multi_path", "6876b300", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((0xd4d1a5dau + state0) + u16_2) - u16_0) ^ 0x7535dd25u) | (((state0 - 0x2b2e5a26u) ^ 0x7535dd25u) | (u16_2 + 0x9097995u))", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_0 + (mask32((mask32((mask32(state0 - 0x2b2e5a26)) ^ 0x7535dd25)) | u16_2)))) + 0x9097995)) & 0xffff", "ip += 0x4", "254@0xad32c:1", "", "", "dispatch_formula_not_reduced"},
    {0x31ea80u, 0x31ea84u, 254u, 307u, "vmop_254_plus0x4_state_add_const_slot_mba_stateful", "c10e3a4b", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((((0xca5e7538u + flags0) & 0x5bf4e999u) ^ 0x15874263u) | flags0) | (0xdd75be5eu + u16_2)) | (((state0 + flags0) - u16_0) ^ (state0 + flags0))) | 0x7ff37dd9u", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32(u16_2 - 0x228a41a2)) & 0xffff", "ip += 0x4", "307@0xb8064:1", "", "", "dispatch_formula_not_reduced"},
    {0x31ea84u, 0x31ea87u, 307u, 242u, "vmop_307_plus0x3_state_add_const_slot_u16_1_sub_const", "6145b1", "operand_table_dispatch", "readable_control_semantics", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 ^ b0 - flags0 & flags0 & 0x5792b958 ^ flags0 & 0x5792b958", "next_entry = dispatch_table[(u16(ip+1) - constant) & 0xffff]", "ip += 0x3", "242@0xaa87d:1", "", "", "none"},
    {0x31ea87u, 0x31ea8cu, 242u, 316u, "vmop_242_plus0x5_state_formula_slot_mba_stateful", "3d01539500", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((u16_3 - state0) ^ 0x5c05e9b5u) | state0", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=43=(mask32((mask32(u16_3 - state0)) ^ 0x5c05e9b5)) & 0xffff", "ip += 0x5", "316@0xb987b:1", "", "", "dispatch_formula_not_reduced"},
    {0x31ea8cu, 0x31eae4u, 316u, 354u, "vmop_316_minus0x3c4_sampled_backedge_slot_unknown", "62010000580000003d0122", "long_or_backedge_control", "state_reduced_unresolved_dispatch_details", "vm_state = Z3-proved simplified expression; formula=state0", "dispatch slot expression not recovered; use per-row target evidence when available", "ip -= 0x3c4 (backedge)", "354@0xc2241", "", "", "dispatch_slot_unknown;static_model_or_runtime_validation_incomplete"},
};
enum { VM_PROGRAM_ATLAS_044_OP_COUNT = 14 };

static const VMReadableEdge vm_program_atlas_044_edges[] = {
    {0x31ea5cu, 0x31eae4u, 354, "045", "inter_program", "decoded_control", "+0x58", "next = table[354], ip += 0x58"},
};
enum { VM_PROGRAM_ATLAS_044_EDGE_COUNT = 1 };

static const VMReadableStringRef vm_program_atlas_044_strings[] = {
    {0u, 0u, 0u, "", "", "", "", "", ""},
};
enum { VM_PROGRAM_ATLAS_044_STRING_REF_COUNT = 0 };

static const VMReadableProgram vm_program_atlas_044_readable_program = {
    "044", 0x31ea5cu, 0x31eaacu,
    vm_program_atlas_044_ops, (size_t)VM_PROGRAM_ATLAS_044_OP_COUNT,
    vm_program_atlas_044_edges, (size_t)VM_PROGRAM_ATLAS_044_EDGE_COUNT,
    vm_program_atlas_044_strings, (size_t)VM_PROGRAM_ATLAS_044_STRING_REF_COUNT,
};

const VMReadableProgram *vm_program_atlas_044_readable(void) {
    return &vm_program_atlas_044_readable_program;
}

#endif /* VM_PROGRAM_ATLAS_044_READABLE_C */
