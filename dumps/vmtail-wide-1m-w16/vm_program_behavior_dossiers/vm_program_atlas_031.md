# VM Program atlas_031

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 031 |
| range | 0x2316bf..0x231b74 |
| first seen rank | 50 |
| summary | C++ runtime/support surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | low_to_medium |
| behavior tags | cxx_runtime |
| unresolved | intent_not_final;external_or_exit_edges_need_semantics |

## Control

| field | value |
| --- | --- |
| incoming | 031:1 |
| outgoing | 031:1,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 2 |
| rows | 315 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | cxx_runtime:1 |
| role mix | cxx_runtime_type_or_exception_text:1 |
| top strings | _ZGTtdlPv |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_066_plus0x3_state_add_const_slot_multi_path:18,vmop_258_plus0x4_state_add_const_slot_multi_path:17,vmop_018_plus0x3_state_add_const_... |
| state kinds | state_add_const:292,state_mixed:18,state_const_post:3,state_preserve:1,state_formula:1 |
| dispatch slots | slot_multi_path:214,slot_mba_stateful:67,slot_u16_0:21,slot_u16_1_sub_const:10,slot_const_or_affine:3 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_031.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_031.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x2318ea | cxx_runtime_type_or_exception_text | cxx_runtime | _ZGTtdlPv | vmop_199_plus0x3_state_add_const_slot_multi_path |

