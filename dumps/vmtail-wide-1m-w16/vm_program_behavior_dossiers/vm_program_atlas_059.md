# VM Program atlas_059

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 059 |
| range | 0x3674c3..0x369a93 |
| first seen rank | 33 |
| summary | C++ runtime/support surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | medium |
| behavior tags | cxx_runtime |
| unresolved | needs_final_dataflow_confirmation |

## Control

| field | value |
| --- | --- |
| incoming | 059:22,060:1 |
| outgoing | 059:22,060:2 |
| external/exit edges | 0 |
| blocks | 24 |
| rows | 2468 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | cxx_runtime:2,embedded_data_or_token:1,locale_i18n:1 |
| role mix | embedded_token_or_encoded_blob:1,gnu_transactional_memory_runtime_symbol:1,locale_runtime_symbol:1,cxx_runtime_type_or_exception_text:1 |
| top strings | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w \|\| _ITM_registerTMCloneTable \|\| __freelocale \|\| basic_string::_S_c... |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_066_plus0x3_state_add_const_slot_multi_path:82,vmop_340_plus0x4_state_add_const_slot_multi_path:81,vmop_189_plus0x4_state_add_const_... |
| state kinds | state_add_const:2271,state_mixed:131,state_const_post:45,state_formula:8,sampled_long_or_sparse:4,sampled_backedge:3,state_preserve:3,sta... |
| dispatch slots | slot_multi_path:1550,slot_mba_stateful:669,slot_u16_0:133,slot_u16_1_sub_const:58,slot_const_or_affine:35,slot_u16_2:13,slot_unknown:9,sl... |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_059.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_059.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x367607 | embedded_token_or_encoded_blob | embedded_data_or_token | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w | vmop_199_plus0x3_state_add_const_slot_multi_path |
| 0x367700 | gnu_transactional_memory_runtime_symbol | cxx_runtime | _ITM_registerTMCloneTable | vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown |
| 0x367728 | locale_runtime_symbol | locale_i18n | __freelocale | vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown |
| 0x367ee7 | cxx_runtime_type_or_exception_text | cxx_runtime | basic_string::_S_construct null not valid | vmop_350_plus0x4_state_add_const_slot_mba_stateful |

