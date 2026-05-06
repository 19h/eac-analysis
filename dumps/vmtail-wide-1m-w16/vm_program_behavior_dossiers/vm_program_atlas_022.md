# VM Program atlas_022

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 022 |
| range | 0x176883..0x17731c |
| first seen rank | 46 |
| summary | control-transfer/native-bridge candidate with no exact side-effect reference yet |
| basis | exact string/data references plus opcode/control evidence |
| confidence | low_to_medium |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final |

## Control

| field | value |
| --- | --- |
| incoming | 022:4 |
| outgoing | 022:4,023:1 |
| external/exit edges | 0 |
| blocks | 5 |
| rows | 698 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | compiler_metadata:1 |
| role mix | compiler_type_name:1 |
| top strings | unsigned __int128 |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_307_plus0x3_state_add_const_slot_u16_1_sub_const:34,vmop_114_plus0x4_state_add_const_slot_multi_path:30,vmop_340_plus0x4_state_add_c... |
| state kinds | state_add_const:656,state_mixed:27,state_const_post:10,state_preserve:3,state_affine:1,sampled_long_or_sparse:1 |
| dispatch slots | slot_multi_path:467,slot_mba_stateful:144,slot_u16_0:44,slot_u16_1_sub_const:34,slot_const_or_affine:8,slot_unknown:1 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_022.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_022.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x1772f2 | compiler_type_name | compiler_metadata:1 | unsigned __int128 | vmop_330_plus0x5_state_add_const_slot_u16_0 |

