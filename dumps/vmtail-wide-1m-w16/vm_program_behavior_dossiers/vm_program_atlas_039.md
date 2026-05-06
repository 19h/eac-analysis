# VM Program atlas_039

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 039 |
| range | 0x2bfe6f..0x2c05b1 |
| first seen rank | 63 |
| summary | network-facing logic or network import reference |
| basis | exact string/data references plus opcode/control evidence |
| confidence | low_to_medium |
| behavior tags | networking |
| unresolved | intent_not_final |

## Control

| field | value |
| --- | --- |
| incoming | 039:3,038:1 |
| outgoing | 039:3,040:1 |
| external/exit edges | 0 |
| blocks | 4 |
| rows | 476 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | network:1 |
| role mix | network_import_symbol:1 |
| top strings | socket |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_066_plus0x3_state_add_const_slot_multi_path:23,vmop_064_plus0x4_state_add_const_slot_multi_path:22,vmop_185_plus0x3_state_add_const_... |
| state kinds | state_add_const:448,state_mixed:20,state_const_post:5,state_preserve:1,state_affine:1,sampled_long_or_sparse:1 |
| dispatch slots | slot_multi_path:324,slot_mba_stateful:109,slot_u16_0:26,slot_u16_1_sub_const:11,slot_const_or_affine:4,slot_u16_2:1,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_039.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_039.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x2c0363 | network_import_symbol | network:1 | socket | vmop_172_plus0x4_state_add_const_slot_mba_stateful |

