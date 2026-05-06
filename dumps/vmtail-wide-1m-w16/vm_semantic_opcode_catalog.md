# VM Semantic Opcode Catalog

This is a structural opcode catalog, not a completed source-level deobfuscation. It assigns stable names to VM handler entries and exposes their state-update and dispatch-slot families so repeated bytecode sequences can be read without reopening the giant C expressions.

## Summary

| metric | value |
| --- | --- |
| cataloged source entries | 202 |
| VM program opcode rows | 71522 |
| program pseudocode files | 66 |
| dispatch slot kinds | slot_mba_stateful:80,slot_multi_path:80,slot_unknown:23,slot_const_or_affine:10,slot_u16_0:3,slot_u16_2:3,slot_u16_1:... |
| state kinds | state_add_const:147,state_formula:16,state_preserve:14,sampled_backedge:7,state_mixed:6,sampled_long_or_sparse:4,stat... |
| readability status | named_structural;needs_algebraic_simplification:172,named_structural:30 |

## Top Opcodes By Program Use

| entry | opcode | rows | events | delta | state | dispatch | status |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 18 | vmop_018_plus0x3_state_add_const_slot_multi_path | 2502 | 25448 | +0x3 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 28 | vmop_028_plus0x3_state_add_const_slot_u16_0 | 2334 | 26610 | +0x3 | state_add_const | slot_u16_0 | named_structural |
| 337 | vmop_337_plus0x4_state_add_const_slot_multi_path | 2321 | 26534 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 189 | vmop_189_plus0x4_state_add_const_slot_mba_stateful | 2281 | 25112 | +0x4 | state_add_const | slot_mba_stateful | named_structural;needs_algebraic_simplification |
| 258 | vmop_258_plus0x4_state_add_const_slot_multi_path | 2268 | 28058 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 340 | vmop_340_plus0x4_state_add_const_slot_multi_path | 2259 | 26112 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 114 | vmop_114_plus0x4_state_add_const_slot_multi_path | 2254 | 25300 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 64 | vmop_064_plus0x4_state_add_const_slot_multi_path | 2222 | 23678 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 66 | vmop_066_plus0x3_state_add_const_slot_multi_path | 2180 | 22739 | +0x3 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 347 | vmop_347_plus0x4_state_add_const_slot_multi_path | 2146 | 24299 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 307 | vmop_307_plus0x3_state_add_const_slot_u16_1_sub_const | 2012 | 24095 | +0x3 | state_add_const | slot_u16_1_sub_const | named_structural |
| 185 | vmop_185_plus0x3_state_add_const_slot_multi_path | 1885 | 21620 | +0x3 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 297 | vmop_297_plus0x3_state_add_const_slot_multi_path | 1843 | 20640 | +0x3 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 199 | vmop_199_plus0x3_state_add_const_slot_multi_path | 1802 | 19641 | +0x3 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 215 | vmop_215_plus0x3_state_mixed_slot_u16_0 | 1728 | 21174 | +0x3 | state_mixed | slot_u16_0 | named_structural;needs_algebraic_simplification |
| 43 | vmop_043_plus0x4_state_add_const_slot_mba_stateful | 1460 | 16136 | +0x4 | state_add_const | slot_mba_stateful | named_structural;needs_algebraic_simplification |
| 157 | vmop_157_plus0x4_state_add_const_slot_multi_path | 1395 | 14693 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 168 | vmop_168_plus0x4_state_add_const_slot_multi_path | 1365 | 14368 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 333 | vmop_333_plus0x4_state_add_const_slot_multi_path | 1165 | 12194 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 196 | vmop_196_plus0x4_state_add_const_slot_multi_path | 1138 | 14371 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 268 | vmop_268_plus0x4_state_add_const_slot_multi_path | 1112 | 12038 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 172 | vmop_172_plus0x4_state_add_const_slot_mba_stateful | 1093 | 12531 | +0x4 | state_add_const | slot_mba_stateful | named_structural;needs_algebraic_simplification |
| 203 | vmop_203_plus0x4_state_add_const_slot_mba_stateful | 1044 | 9820 | +0x4 | state_add_const | slot_mba_stateful | named_structural;needs_algebraic_simplification |
| 123 | vmop_123_plus0x4_state_add_const_slot_mba_stateful | 889 | 10598 | +0x4 | state_add_const | slot_mba_stateful | named_structural;needs_algebraic_simplification |
| 174 | vmop_174_plus0x4_state_add_const_slot_mba_stateful | 889 | 11742 | +0x4 | state_add_const | slot_mba_stateful | named_structural;needs_algebraic_simplification |
| 176 | vmop_176_plus0x4_state_add_const_slot_multi_path | 878 | 10138 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 287 | vmop_287_plus0x4_state_add_const_slot_multi_path | 866 | 9723 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 20 | vmop_020_plus0x4_state_add_const_slot_multi_path | 857 | 9485 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 184 | vmop_184_plus0x4_state_add_const_slot_multi_path | 856 | 12094 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |
| 26 | vmop_026_plus0x4_state_add_const_slot_multi_path | 850 | 9886 | +0x4 | state_add_const | slot_multi_path | named_structural;needs_algebraic_simplification |

## Artifacts

- Opcode catalog: `dumps/vmtail-wide-1m-w16/vm_semantic_opcode_catalog.tsv`
- Per-row VM-op TSV: `dumps/vmtail-wide-1m-w16/vm_program_opcode_pseudocode.tsv`
- Per-program VM-op files: `dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/`
- Per-program manifest: `dumps/vmtail-wide-1m-w16/vm_program_opcode_pseudocode_manifest.tsv`
