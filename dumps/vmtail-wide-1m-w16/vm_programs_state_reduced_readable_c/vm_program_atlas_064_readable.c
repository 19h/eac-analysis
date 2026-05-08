/*
 * Auto-generated compileable readable VM program artifact.
 * This is pseudocode/data for analysis: concrete row transitions are preserved,
 * exact string/data references are embedded, and unresolved algebra remains marked.
 */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_064_READABLE_C
#define VM_PROGRAM_ATLAS_064_READABLE_C

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

/* VM program atlas 064: 0x3716c7..0x37176c */
/* summary: control-transfer/native-bridge candidate with no exact side-effect reference yet */
/* unresolved: intent_not_final;no_exact_string_or_data_ref */

static const VMReadableOp vm_program_atlas_064_ops[] = {
    {0x3716c7u, 0x3716c9u, 354u, 268u, "vmop_354_plus0x2_state_const_post_slot_const_or_affine", "0c01", "fixed_or_affine_dispatch", "readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "268@0xb0007:125", "", "", "none"},
    {0x3716c9u, 0x3716cdu, 268u, 347u, "vmop_268_plus0x4_state_add_const_slot_multi_path", "191cbe6c", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=(((((u16_0 + 0x71bd1bb1u) - state0) | ((0x33c0c75bu + flags0) & 0x81482e01u)) | state0) | (((0x71bd1bb1u - flags0) & (0x33c0c75bu + flags0)) & 0xef0600u)) | ((u16_2 - state0) ^ ((0x33c0c75bu + flags0) & 0x41582100u))", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=87=(mask32((mask32(u16_2 - (mask32((mask32((mask32((mask32(state0 | 0x71bd1bb1)) + (mask32((mask32(u16_0 - (mask32(state0 | 0x71bd1bb1)))) - flags0)))) & (mask32((mask32((mask32(flags0 + 0x33c0c75b)) ...#12f", "ip += 0x4", "347@0xc088d:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716cdu, 0x3716d1u, 347u, 154u, "vmop_347_plus0x4_state_add_const_slot_multi_path", "452fff8a", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((((((((0x5cf483c7u + u16_2) + flags0) ^ state0) ^ 0x2efc96c5u) | state0) | (0x6fa972f0u + flags0)) | (state0 ^ flags0)) | ((0x45223942u + state0) & (0x6fa972f0u + flags0))) | (((flags0 & 0x5cf483c7u) ^ state0) ^ 0x2efc96c5u)) | (((0x5cf483c7u - flags0) ^ state0) ^ 0x2efc96c5u)) | 0x7ffebfe7u", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=92=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))) | (mask32((mask32(flags0 ^ (mask32((mask32(state0 | (mask32(flags0 + 0x6fa97...#12f", "ip += 0x4", "154@0x97ce6:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716d1u, 0x3716d5u, 154u, 91u, "vmop_154_plus0x4_state_add_const_slot_multi_path", "f03af048", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((((0x18426e67u - (u16_0 + state0)) - u16_2) ^ (((0x60c316f3u + state0) - flags0) & 0x41da6402u)) ^ 0x7ed018fbu) | ((flags0 - 0x206cd012u) & 0x41da6402u)) | ((state0 - u16_2) ^ (((0x60c316f3u + state0) - flags0) & 0x41da6402u))) | 0xcddc8fdbu", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=81=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 - (mask32(u16_2 ^ state0)))) - (mask32(flags0 | 0x7ed018fb)))) + (mask32((mask32(flags0 | 0x7ed018fb)) ^ 0x18426e67)))))) - 0x6535d747)) & 0xf...#12f", "ip += 0x4", "91@0x8b6de:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716d5u, 0x3716d9u, 91u, 199u, "vmop_091_plus0x4_state_add_const_slot_mba_stateful", "c15be801", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=u16_0", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32(u16_0 ^ state0)) & 0xffff", "ip += 0x4", "199@0xa0631:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716d9u, 0x3716dcu, 199u, 301u, "vmop_199_plus0x3_state_add_const_slot_multi_path", "ee9d11", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((state0 + flags0) + b2) ^ ((flags0 + 0x20d5418u) & 0x7e708197u)", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=106=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 + (mask32(b2 + flags0)))) ^ 0x7e708197)) & 0x20d5418)) + flags0)))) + 0x3030bb89)) & 0xffff | 22=(mask32((mask32(u16_0 ^ (mask32((mas...#12f", "ip += 0x3", "301@0xb708d:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716dcu, 0x3716e1u, 301u, 160u, "vmop_301_plus0x5_state_add_const_slot_mba_stateful", "003d01df00", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((u16_3 - state0) & (0xd3f01421u + flags0)) ^ (state0 & flags0)", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_3 - (mask32(state0 & flags0)))) - 0x2c0febdf)) & 0xffff", "ip += 0x5", "160@0x994cf:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716e1u, 0x3716e3u, 160u, 157u, "vmop_160_plus0x2_state_const_post_slot_multi_path", "7928", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=(state0 | u16_0) | 0x777b8ff6u", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32(state0 | 0x67f1fed6)) & 0x256c03d7)) | 0x72df8f7a)) & 0x5a1beb81)))) - 0x4cf19f11)) & 0xffff", "ip += 0x2", "157@0x98a9a:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716e3u, 0x3716e7u, 157u, 18u, "vmop_157_plus0x4_state_add_const_slot_multi_path", "8be86800", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((u16_0 + state0) ^ (0x2f4dfd84u + u16_2)) ^ (((0x869c849au - flags0) ^ (0x2f4dfd84u + u16_2)) ^ (state0 & 0x3d2638afu))) ^ 0x3aeb4349u) | (((0x2f4dfd84u + u16_2) ^ state0) | ((((0x869c849au - flags0) ^ (0x2f4dfd84u + u16_2)) ^ (state0 & 0x3d2638afu)) ^ 0x2d38dfd6u))", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=79=(mask32((mask32(u16_0 + (mask32((mask32((mask32((mask32(state0 ^ 0x2f4dfd84)) + u16_2)) | 0x1f5cd114)) - (mask32((mask32(flags0 ^ 0x3d2638af)) & (mask32((mask32(state0 ^ 0x2f4dfd84)) + u16_2)))))))...#12f", "ip += 0x4", "18@0x7be9b:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716e7u, 0x3716eau, 18u, 140u, "vmop_018_plus0x3_state_add_const_slot_multi_path", "b0041a", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((0x649b4ea0u - (u16_0 + state0)) | state0) | 0x1188080u) & flags0) | 0x649b4ea0u", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=99=(mask32(u16_0 - (mask32((mask32((mask32(state0 & flags0)) - 0x6382ce20)) & flags0)))) & 0xffff | 29=(mask32(u16_0 - (mask32((mask32((mask32(state0 & (mask32((mask32(flags0 | 0x954df65)) + 0x5b466f3...#11f", "ip += 0x3", "140@0x94e5a:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716eau, 0x3716f0u, 140u, 189u, "vmop_140_plus0x6_state_add_const_slot_multi_path", "10b7ad40ef5c", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((u16_0 + 0x16a9ca8cu) | (0x90ab6087u - flags0)) | 0x7fb7d777u", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=112=(mask32((mask32(u16_0 ^ (mask32(state0 - (mask32((mask32(flags0 - (mask32(state0 | 0xf17c331)))) | 0x16a9ca8c)))))) ^ 0x6e089feb)) & 0xffff | 16=(mask32((mask32(u16_0 ^ (mask32(state0 - (mask32((m...#137", "ip += 0x6", "189@0x9e7af:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716f0u, 0x3716f4u, 189u, 237u, "vmop_189_plus0x4_state_add_const_slot_mba_stateful", "ba9bbcec", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((0x160e4f34u + u16_2) + state0) & state0) & 0x160e4f34u) ^ 0x2a1ce984u", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_2 + (mask32(state0 & 0x160e4f34)))) ^ 0x2a1ce984)) & 0xffff", "ip += 0x4", "237@0xa8e1f:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716f4u, 0x3716f9u, 237u, 108u, "vmop_237_plus0x5_state_add_const_slot_multi_path", "00c9f63d01", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=u16_1 ^ 0xb7c30a76u", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=117=(mask32((mask32(u16_1 ^ (mask32((mask32((mask32(state0 - (mask32(flags0 ^ 0x22900c8)))) - (mask32((mask32(flags0 + 0x3fbeaa1d)) ^ 0x8178b71)))) - 0x4813dbc)))) - 0x4f4105f2)) & 0xffff | 11=(mask32...#12f", "ip += 0x5", "108@0x8f24b:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716f9u, 0x3716fbu, 108u, 140u, "vmop_108_plus0x2_state_add_const_slot_mba_stateful", "0404", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=(state0 + 0x11961dc7u) ^ (0x5fa19cc7u - flags0)", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32(state0 + 0x11961dc7)) ^ 0x5fa19cc7)) - flags0)))) + 0x36f124db)) & 0xffff", "ip += 0x2", "140@0x94e5a:125", "", "", "dispatch_formula_not_reduced"},
    {0x3716fbu, 0x371701u, 140u, 17u, "vmop_140_plus0x6_state_add_const_slot_multi_path", "c19355aac13b", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((u16_0 + 0x16a9ca8cu) | (0x90ab6087u - flags0)) | 0x7fb7d777u", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=112=(mask32((mask32(u16_0 ^ (mask32(state0 - (mask32((mask32(flags0 - (mask32(state0 | 0xf17c331)))) | 0x16a9ca8c)))))) ^ 0x6e089feb)) & 0xffff | 16=(mask32((mask32(u16_0 ^ (mask32(state0 - (mask32((m...#137", "ip += 0x6", "17@0x7bae9:125", "", "", "dispatch_formula_not_reduced"},
    {0x371701u, 0x371706u, 17u, 28u, "vmop_017_plus0x5_state_add_const_slot_multi_path", "8efe3ad097", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((u16_0 & 0x4365071cu) ^ flags0) | state0) | (((0x4365071cu + flags0) ^ flags0) ^ 0x4a3a9184u)) | ((((u16_3 + 0x95f9698u) - state0) ^ ((0x4365071cu + flags0) ^ flags0)) ^ 0x4365071cu)", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=128=(mask32(u16_3 - (mask32((mask32((mask32(state0 | (mask32(flags0 ^ 0x4365071c)))) & (mask32((mask32(u16_0 ^ (mask32(state0 | (mask32(flags0 ^ 0x4365071c)))))) + (mask32(flags0 ^ 0x4365071c)))))) ^ ...#de", "ip += 0x5", "28@0x7e390:125", "", "", "dispatch_formula_not_reduced"},
    {0x371706u, 0x371709u, 28u, 317u, "vmop_028_plus0x3_state_add_const_slot_u16_0", "e809e0", "operand_table_dispatch", "readable_control_semantics", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a | flags0 ^ state0 | 0xb9ad02a & 0x3fb85e48 - state0 ^ 0x6e3e6f1a + 0x43078fb1 & 0x282416bb ^ 0x53f50e0b ^ state0 | flags0 ^ stat...#12f", "next_entry = dispatch_table[u16(ip+0)]", "ip += 0x3", "317@0xba1e2:125", "", "", "none"},
    {0x371709u, 0x37170du, 317u, 70u, "vmop_317_plus0x4_state_add_const_slot_multi_path", "47470899", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=(((((0xd528cc0fu + flags0) & 0xfff9ff9du) ^ ((0xd528cc0fu + u16_2) + flags0)) ^ ((0xd6c343c9u + flags0) & 0x60062u)) | ((((0xd528cc0fu + state0) - flags0) ^ 0x60062u) | ((0xd528cc0fu + flags0) ^ 0x5258264au))) | ((((((u16_0 + 0x2b733f1u) - state0) - flags0) & 0x12461866u) ^ (0xd528cc0fu + flags0)) ^ 0x50183e0eu)", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=47=(mask32((mask32(u16_0 - (mask32((mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - flags0)) | flags0)) ^ (mask32(u16_2 + flags0)))) & (mask32(flags0 & 0x19a77ba)))) + flags0)) | flags...#12f", "ip += 0x4", "70@0x8610e:125", "", "", "dispatch_formula_not_reduced"},
    {0x37170du, 0x371712u, 70u, 108u, "vmop_070_plus0x5_state_add_const_slot_mba_stateful", "da87bf3d01", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((((state0 + flags0) ^ (state0 ^ flags0)) ^ (0xfb3ee75du + flags0)) ^ 0x3a572249u) | (state0 ^ (0xfb3ee75du + flags0))) | ((state0 ^ (0xfb3ee75du + flags0)) ^ 0x58fb4a0cu)) | 0x7adfef49u", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_0 - (mask32((mask32((mask32((mask32((mask32(state0 ^ flags0)) ^ flags0)) - (mask32((mask32((mask32((mask32(flags0 + (mask32((mask32((mask32(state0 ^ flags0)) ^ flags0)) + 0x55f...#df", "ip += 0x5", "108@0x8f24b:125", "", "", "dispatch_formula_not_reduced"},
    {0x371712u, 0x371714u, 108u, 266u, "vmop_108_plus0x2_state_add_const_slot_mba_stateful", "79f6", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=(state0 + 0x11961dc7u) ^ (0x5fa19cc7u - flags0)", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32(state0 + 0x11961dc7)) ^ 0x5fa19cc7)) - flags0)))) + 0x36f124db)) & 0xffff", "ip += 0x2", "266@0xaf8af:125", "", "", "dispatch_formula_not_reduced"},
    {0x371714u, 0x37142cu, 266u, 354u, "vmop_266_minus0x2e8_sampled_backedge_slot_unknown", "62010000e8020080", "long_or_backedge_control", "state_reduced_unresolved_dispatch_details", "vm_state = Z3-proved simplified expression; formula=state0", "dispatch slot expression not recovered; use per-row target evidence when available", "ip -= 0x2e8 (backedge)", "354@0xc2241", "", "", "dispatch_slot_unknown;static_model_or_runtime_validation_incomplete"},
    {0x37171cu, 0x37171eu, 354u, 253u, "vmop_354_plus0x2_state_const_post_slot_const_or_affine", "fd00", "fixed_or_affine_dispatch", "readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "253@0xacfb1:25", "", "", "none"},
    {0x37171eu, 0x371724u, 253u, 196u, "vmop_253_plus0x6_state_add_const_slot_mba_stateful", "1ebe00000000", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((u32_2 - 0x1c9c7d85u) ^ (flags0 + flags0)) | ((0x7c5d4802u + u16_0) ^ 0x2906c0c1u)) | state0) | 0x62c3b0ddu", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32(u16_0 + 0x7c5d4802)) & 0xffff", "ip += 0x6", "196@0x9fbcd:25", "", "", "dispatch_formula_not_reduced"},
    {0x371724u, 0x371728u, 196u, 347u, "vmop_196_plus0x4_state_add_const_slot_multi_path", "0e6b1ce1", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=(((((0x44fb7fdbu + flags0) ^ 0x72e5925eu) | state0) | (flags0 + 0x52e5924au)) | (state0 & 0x4083ed99u)) | 0x52e5a24au", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_2 + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | 0x52e5924a)) + (mask32((mask32((mask32(flags0 | 0x4083ed99)) & (mask32((mask32(state0 | 0x52e5924a)) ^ 0x20...#df", "ip += 0x4", "347@0xc088d:25", "", "", "dispatch_formula_not_reduced"},
    {0x371728u, 0x37172cu, 347u, 307u, "vmop_347_plus0x4_state_add_const_slot_multi_path", "dbb1b748", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((((((((0x5cf483c7u + u16_2) + flags0) ^ state0) ^ 0x2efc96c5u) | state0) | (0x6fa972f0u + flags0)) | (state0 ^ flags0)) | ((0x45223942u + state0) & (0x6fa972f0u + flags0))) | (((flags0 & 0x5cf483c7u) ^ state0) ^ 0x2efc96c5u)) | (((0x5cf483c7u - flags0) ^ state0) ^ 0x2efc96c5u)) | 0x7ffebfe7u", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=92=(mask32((mask32(u16_0 ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | (mask32(flags0 + 0x6fa972f0)))) | (mask32((mask32(flags0 ^ (mask32((mask32(state0 | (mask32(flags0 + 0x6fa97...#12f", "ip += 0x4", "307@0xb8064:25", "", "", "dispatch_formula_not_reduced"},
    {0x37172cu, 0x37172fu, 307u, 301u, "vmop_307_plus0x3_state_add_const_slot_u16_1_sub_const", "151db3", "operand_table_dispatch", "readable_control_semantics", "vm_state = add/constant-style update over state, flags, and operands; formula=state0 ^ b0 - flags0 & flags0 & 0x5792b958 ^ flags0 & 0x5792b958", "next_entry = dispatch_table[(u16(ip+1) - constant) & 0xffff]", "ip += 0x3", "301@0xb708d:25", "", "", "none"},
    {0x37172fu, 0x371734u, 301u, 352u, "vmop_301_plus0x5_state_add_const_slot_mba_stateful", "003d011f18", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((u16_3 - state0) & (0xd3f01421u + flags0)) ^ (state0 & flags0)", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_3 - (mask32(state0 & flags0)))) - 0x2c0febdf)) & 0xffff", "ip += 0x5", "352@0xc1ec4:25", "", "", "dispatch_formula_not_reduced"},
    {0x371734u, 0x371736u, 352u, 165u, "vmop_352_plus0x2_state_add_const_slot_mba_stateful", "e2e6", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((u16_0 + state0) & 0x64a42f6cu) | (state0 & 0x31863366u)", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_0 + (mask32(state0 & 0x31863366)))) + 0x331dfc06)) & 0xffff", "ip += 0x2", "165@0x9a24c:25", "", "", "dispatch_formula_not_reduced"},
    {0x371736u, 0x371738u, 165u, 18u, "vmop_165_plus0x2_state_const_post_slot_const_or_affine", "1200", "fixed_or_affine_dispatch", "readable_control_semantics", "vm_state is set to or checked against a post-dispatch constant marker", "next_entry = fixed or affine dispatch slot; expression=128=u16_0 << 0x3", "ip += 0x2", "18@0x7be9b:25", "", "", "none"},
    {0x371738u, 0x37173bu, 18u, 196u, "vmop_018_plus0x3_state_add_const_slot_multi_path", "200662", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((0x649b4ea0u - (u16_0 + state0)) | state0) | 0x1188080u) & flags0) | 0x649b4ea0u", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=99=(mask32(u16_0 - (mask32((mask32((mask32(state0 & flags0)) - 0x6382ce20)) & flags0)))) & 0xffff | 29=(mask32(u16_0 - (mask32((mask32((mask32(state0 & (mask32((mask32(flags0 | 0x954df65)) + 0x5b466f3...#11f", "ip += 0x3", "196@0x9fbcd:25", "", "", "dispatch_formula_not_reduced"},
    {0x37173bu, 0x37173fu, 196u, 189u, "vmop_196_plus0x4_state_add_const_slot_multi_path", "02a40cdc", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=(((((0x44fb7fdbu + flags0) ^ 0x72e5925eu) | state0) | (flags0 + 0x52e5924au)) | (state0 & 0x4083ed99u)) | 0x52e5a24au", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_2 + (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 | 0x52e5924a)) + (mask32((mask32((mask32(flags0 | 0x4083ed99)) & (mask32((mask32(state0 | 0x52e5924a)) ^ 0x20...#df", "ip += 0x4", "189@0x9e7af:25", "", "", "dispatch_formula_not_reduced"},
    {0x37173fu, 0x371743u, 189u, 154u, "vmop_189_plus0x4_state_add_const_slot_mba_stateful", "368234ec", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((0x160e4f34u + u16_2) + state0) & state0) & 0x160e4f34u) ^ 0x2a1ce984u", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=128=(mask32((mask32(u16_2 + (mask32(state0 & 0x160e4f34)))) ^ 0x2a1ce984)) & 0xffff", "ip += 0x4", "154@0x97ce6:25", "", "", "dispatch_formula_not_reduced"},
    {0x371743u, 0x371747u, 154u, 242u, "vmop_154_plus0x4_state_add_const_slot_multi_path", "b53d4305", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((((((0x18426e67u - (u16_0 + state0)) - u16_2) ^ (((0x60c316f3u + state0) - flags0) & 0x41da6402u)) ^ 0x7ed018fbu) | ((flags0 - 0x206cd012u) & 0x41da6402u)) | ((state0 - u16_2) ^ (((0x60c316f3u + state0) - flags0) & 0x41da6402u))) | 0xcddc8fdbu", "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=81=(mask32((mask32(u16_0 - (mask32((mask32((mask32(state0 - (mask32(u16_2 ^ state0)))) - (mask32(flags0 | 0x7ed018fb)))) + (mask32((mask32(flags0 | 0x7ed018fb)) ^ 0x18426e67)))))) - 0x6535d747)) & 0xf...#12f", "ip += 0x4", "242@0xaa87d:25", "", "", "dispatch_formula_not_reduced"},
    {0x371747u, 0x37174cu, 242u, 246u, "vmop_242_plus0x5_state_formula_slot_mba_stateful", "3d01595345", "obfuscated_table_dispatch", "state_reduced_dispatch_formula_open", "vm_state = Z3-proved simplified expression; formula=((u16_3 - state0) ^ 0x5c05e9b5u) | state0", "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=43=(mask32((mask32(u16_3 - state0)) ^ 0x5c05e9b5)) & 0xffff", "ip += 0x5", "246@0xab427:25", "", "", "dispatch_formula_not_reduced"},
    {0x37174cu, 0x3717c4u, 246u, 165u, "vmop_246_plus0x78_sampled_long_or_sparse_slot_unknown", "a5000000780000003d0122", "long_or_backedge_control", "state_reduced_unresolved_dispatch_details", "vm_state = Z3-proved simplified expression; formula=state0", "dispatch slot expression not recovered; use per-row target evidence when available", "ip += 0x78", "165@0x9a24c", "", "", "dispatch_slot_unknown;static_model_or_runtime_validation_incomplete"},
};
enum { VM_PROGRAM_ATLAS_064_OP_COUNT = 35 };

static const VMReadableEdge vm_program_atlas_064_edges[] = {
    {0x3716c7u, 0x37142cu, 354, "063", "inter_program", "decoded_control", "-0x2e8", "next = table[354], ip -= 0x2e8"},
    {0x37171cu, 0x3717c4u, 165, "065", "inter_program", "decoded_control", "+0x78", "next = table[165], ip += 0x78"},
};
enum { VM_PROGRAM_ATLAS_064_EDGE_COUNT = 2 };

static const VMReadableStringRef vm_program_atlas_064_strings[] = {
    {0u, 0u, 0u, "", "", "", "", "", ""},
};
enum { VM_PROGRAM_ATLAS_064_STRING_REF_COUNT = 0 };

static const VMReadableProgram vm_program_atlas_064_readable_program = {
    "064", 0x3716c7u, 0x37176cu,
    vm_program_atlas_064_ops, (size_t)VM_PROGRAM_ATLAS_064_OP_COUNT,
    vm_program_atlas_064_edges, (size_t)VM_PROGRAM_ATLAS_064_EDGE_COUNT,
    vm_program_atlas_064_strings, (size_t)VM_PROGRAM_ATLAS_064_STRING_REF_COUNT,
};

const VMReadableProgram *vm_program_atlas_064_readable(void) {
    return &vm_program_atlas_064_readable_program;
}

#endif /* VM_PROGRAM_ATLAS_064_READABLE_C */
