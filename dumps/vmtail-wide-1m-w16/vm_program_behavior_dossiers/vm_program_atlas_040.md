# VM Program atlas_040

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 040 |
| range | 0x2c1156..0x2c13ed |
| first seen rank | 65 |
| summary | C++ runtime/support surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | low_to_medium |
| behavior tags | cxx_runtime |
| unresolved | intent_not_final |

## Control

| field | value |
| --- | --- |
| incoming | 039:1,040:1 |
| outgoing | 040:1,035:1 |
| external/exit edges | 0 |
| blocks | 2 |
| rows | 165 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | cxx_runtime:1 |
| role mix | cxx_runtime_type_or_exception_text:1 |
| top strings | basic_string::append |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_258_plus0x4_state_add_const_slot_multi_path:9,vmop_066_plus0x3_state_add_const_slot_multi_path:9,vmop_114_plus0x4_state_add_const_sl... |
| state kinds | state_add_const:150,state_mixed:10,state_const_post:4,sampled_backedge:1 |
| dispatch slots | slot_multi_path:114,slot_mba_stateful:30,slot_u16_0:13,slot_u16_1_sub_const:5,slot_const_or_affine:2,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_040.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_040.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x2c13a3 | cxx_runtime_type_or_exception_text | cxx_runtime | basic_string::append | vmop_140_plus0x6_state_add_const_slot_multi_path |

