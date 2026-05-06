# VM Program atlas_041

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 041 |
| range | 0x30e872..0x316692 |
| first seen rank | 31 |
| summary | crypto/hash helper surface; C++ runtime/support surface; disassembly metadata surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | medium |
| behavior tags | crypto_hashing;cxx_runtime;disassembly_metadata |
| unresolved | needs_final_dataflow_confirmation |

## Control

| field | value |
| --- | --- |
| incoming | 041:12,055:1 |
| outgoing | 041:12,055:1 |
| external/exit edges | 0 |
| blocks | 13 |
| rows | 8444 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | cxx_runtime:1,locale_i18n:1,crypto_hashing:1,compiler_metadata:1,disassembly_metadata:1 |
| role mix | gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1,crypto_import_symbol:1,compiler_type_name:1,disassembly_metadata_symbol:1 |
| top strings | _ITM_registerTMCloneTable \|\| __freelocale \|\| blake3_hasher_finalize \|\| unsigned __int128 \|\| zydis_decoder_tree_root |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_337_plus0x4_state_add_const_slot_multi_path:306,vmop_189_plus0x4_state_add_const_slot_mba_stateful:295,vmop_028_plus0x3_state_add_co... |
| state kinds | state_add_const:7816,state_mixed:421,state_const_post:105,state_preserve:85,state_formula:8,sampled_backedge:6,sampled_long_or_sparse:1,e... |
| dispatch slots | slot_multi_path:5535,slot_mba_stateful:1982,slot_u16_0:512,slot_u16_1_sub_const:270,slot_const_or_affine:130,slot_unknown:9,slot_u16_2:5,... |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_041.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_041.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x30eebd | gnu_transactional_memory_runtime_symbol | cxx_runtime:1,locale_i18n:1,crypto_hashing:1,compiler_metadata:1,disassembly_metadata:1 | _ITM_registerTMCloneTable | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 0x30eee5 | locale_runtime_symbol | cxx_runtime:1,locale_i18n:1,crypto_hashing:1,compiler_metadata:1,disassembly_metadata:1 | __freelocale | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown |
| 0x30f17b | crypto_import_symbol | cxx_runtime:1,locale_i18n:1,crypto_hashing:1,compiler_metadata:1,disassembly_metadata:1 | blake3_hasher_finalize | vmop_199_plus0x3_state_add_const_slot_multi_path |
| 0x310859 | compiler_type_name | cxx_runtime:1,locale_i18n:1,crypto_hashing:1,compiler_metadata:1,disassembly_metadata:1 | unsigned __int128 | vmop_330_plus0x5_state_add_const_slot_u16_0 |
| 0x315809 | disassembly_metadata_symbol | cxx_runtime:1,locale_i18n:1,crypto_hashing:1,compiler_metadata:1,disassembly_metadata:1 | zydis_decoder_tree_root | vmop_075_minus0x6d_sampled_backedge_slot_unknown |

