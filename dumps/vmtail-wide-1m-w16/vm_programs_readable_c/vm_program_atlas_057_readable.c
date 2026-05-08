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
    {0x365458u, 0x36545au, 165u, 189u, "vmop_165_plus0x2_state_const_post_slot_const_or_affine", "bd00", "fixed_or_affine_dispatch", "readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "189@0x9e7af:1", "", "", "none"},
    {0x36545au, 0x36545eu, 189u, 28u, "vmop_189_plus0x4_state_add_const_slot_mba_stateful", "b30064e9", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 & 0x160e4f34 + u16_2 + state0 & 0x160e4f34 ^ 0x2a1ce984", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_2 + (mask32(state0 & 0x160e4f34)))) ^ 0x2a1ce984)) & 0xffff", "ip += 0x4", "28@0x7e390:1", "", "", "algebraic_state_or_slot_formula"},
    {0x36545eu, 0x365461u, 28u, 268u, "vmop_028_plus0x3_state_add_const_slot_u16_0", "600806", "operand_table_dispatch", "readable_control_semantics", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a + 0x43078fb1 & 0x282416bb ^ 0x53f50e0b ^ state0 | flags0 ^ stat...#12f", "next_entry = dispatch_table[u16(ip+0)]", "ip += 0x3", "268@0xb0007:1", "", "", "none"},
    {0x365461u, 0x365465u, 268u, 253u, "vmop_268_plus0x4_state_add_const_slot_multi_path", "a30ed129", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 | 0x71bd1bb1 + u16_0 - state0 | 0x71bd1bb1 - flags0 & flags0 + 0x33c0c75b & 0x174c40ef - 0x554d11ee & 0x30ef8696 | flags0 + 0x33c0c75b & 0x174c40ef - 0x554d11ee & 0x30ef8696 + 0x12696b26 ^ u16_...#12f", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=87=(mask32((mask32(u16_2 - (mask32((mask32((mask32((mask32(state0 | 0x71bd1bb1)) + (mask32((mask32(u16_0 - (mask32(state0 | 0x71bd1bb1)))) - flags0)))) & (mask32((mask32((mask32(flags0 + 0x33c0c75b)) ...#12f", "ip += 0x4", "253@0xacfb1:1", "", "", "algebraic_state_or_slot_formula"},
    {0x365465u, 0x36546bu, 253u, 220u, "vmop_253_plus0x6_state_add_const_slot_mba_stateful", "debe60eefec0", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 | 0x764111b0 + 0x6d2270cb + u32_2 ^ flags0 + flags0 | 0x62c3b0dd | 0x2b96d1d1 & 0x2d46e2e3 ^ u16_0 + 0x7c5d4802", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32(u16_0 + 0x7c5d4802)) & 0xffff", "ip += 0x6", "220@0xa522e:1", "", "", "algebraic_state_or_slot_formula"},
    {0x36546bu, 0x365470u, 220u, 173u, "vmop_220_plus0x5_state_add_const_slot_multi_path", "003d01441c", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 | flags0 + 0x46462807 & 0x2332d827 - flags0 - state0 | flags0 & 0x4297c9dd + 0x6f8e6e16 ^ u16_3 - state0 | flags0 + 0x46462807 & 0x2332d827 - flags0 - state0 | flags0 & 0x4297c9dd + 0x6f8e6e16 + 0x8f8037a", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_3 - (mask32((mask32((mask32((mask32((mask32(state0 | flags0)) + 0x46462807)) & 0x2332d827)) - (mask32(flags0 - (mask32((mask32(state0 | flags0)) & 0x4297c9dd)))))) + 0x6f8e6e16...#df", "ip += 0x5", "173@0x9ba74:1", "", "", "algebraic_state_or_slot_formula"},
    {0x365470u, 0x365472u, 173u, 165u, "vmop_173_plus0x2_state_add_const_slot_multi_path", "f60d", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 + 0x5eced92d ^ 0x456d7018 | 0xebbbd20 & flags0 - state0 + 0x5eced92d | 0x1f8bac4c & 0x74128b65 & u16_0 ^ state0 + 0x5eced92d ^ 0x456d7018 | 0xebbbd20 & flags0 - state0 + 0x5eced92d | 0x1f8bac4c...#e2", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 + 0x5eced92d)) ^ 0x456d7018)) | 0xebbbd20)) & (mask32((mask32(flags0 - (mask32((mask32(state0 + 0x5eced92d)) | 0x1f8bac4c)))) & 0x741...#df", "ip += 0x2", "165@0x9a24c:1", "", "", "algebraic_state_or_slot_formula"},
    {0x365472u, 0x365474u, 165u, 258u, "vmop_165_plus0x2_state_const_post_slot_const_or_affine", "0201", "fixed_or_affine_dispatch", "readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "258@0xadf2c:1", "", "", "none"},
    {0x365474u, 0x365478u, 258u, 254u, "vmop_258_plus0x4_state_add_const_slot_multi_path", "ccc42176", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e ^ u16_2 - flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e & u16_0 - state0 ^ 0x11095fd5 + flags0 - 0x1510614f | 0xa1b079a ^ 0x1769756e ^...#10a", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=70=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 ^ 0x11095fd5)) + (mask32(flags0 ^ 0x1769756e)))) ^ (mask32(u16_2 - (mask32(flags0 ^ 0x1769756e)))))))) ^ 0x5812e92c)) & 0xffff | 58=(mask32((m...#12f", "ip += 0x4", "254@0xad32c:1", "", "", "algebraic_state_or_slot_formula"},
    {0x365478u, 0x36547cu, 254u, 28u, "vmop_254_plus0x4_state_add_const_slot_mba_stateful", "29c18242", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 + flags0 - u16_0 ^ state0 + flags0 | flags0 | 0x617339d9 | 0x5635509 | 0x15874263 ^ 0x5bf4e999 & flags0 - 0x35a18ac8 | 0x5feb6979 & 0x3e80b852 | u16_2 - 0x228a41a2", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32(u16_2 - 0x228a41a2)) & 0xffff", "ip += 0x4", "28@0x7e390:1", "", "", "algebraic_state_or_slot_formula"},
    {0x36547cu, 0x36547fu, 28u, 168u, "vmop_028_plus0x3_state_add_const_slot_u16_0", "40056f", "operand_table_dispatch", "readable_control_semantics", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a + 0x43078fb1 & 0x282416bb ^ 0x53f50e0b ^ state0 | flags0 ^ stat...#12f", "next_entry = dispatch_table[u16(ip+0)]", "ip += 0x3", "168@0x9aa83:1", "", "", "none"},
    {0x36547fu, 0x365483u, 168u, 242u, "vmop_168_plus0x4_state_add_const_slot_multi_path", "76605ed6", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 | 0x6899d5d4 & u16_0 + flags0 & 0x66031b5e - 0x2eab70d9 ^ 0x7c2abc25 & 0x46cbe42d & 0x69af076d | 0x4ee70776 & u16_2 + state0 | 0x6899d5d4 & u16_0 + flags0 & 0x66031b5e - 0x2eab70d9 ^ 0x7c2abc25...#fc", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=74=(mask32((mask32(u16_2 + (mask32((mask32(state0 | 0x6899d5d4)) & (mask32(u16_0 + flags0)))))) + 0x553030a2)) & 0xffff | 54=(mask32((mask32(u16_2 + (mask32((mask32(state0 | 0x6899d5d4)) & (mask32(u16...#11f", "ip += 0x4", "242@0xaa87d:1", "", "", "algebraic_state_or_slot_formula"},
    {0x365483u, 0x365488u, 242u, 334u, "vmop_242_plus0x5_state_formula_slot_mba_stateful", "3d01b555e4", "obfuscated_table_dispatch", "readable_with_structural_algebra", "vm_state = unresolved formula; formula=state0 | u16_3 - state0 ^ 0x5c05e9b5", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=43=(mask32((mask32(u16_3 - state0)) ^ 0x5c05e9b5)) & 0xffff", "ip += 0x5", "334@0xbdd18:1", "", "", "algebraic_state_or_slot_formula;state_formula_not_named"},
    {0x365488u, 0x3654e0u, 334u, 354u, "vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown", "62010000580000003d0122", "long_or_backedge_control", "unresolved_dispatch_details", "control-special state class sampled_long_or_sparse; formula=state0", "dispatch slot expression not recovered; use per-row target evidence when available", "ip += 0x2a5", "354@0xc2241", "", "", "dispatch_slot_unknown;static_model_or_runtime_validation_incomplete"},
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
