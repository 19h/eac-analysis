# VM Program atlas_020

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 020 |
| range | 0x128952..0x12906f |
| first seen rank | 58 |
| summary | host/environment inventory surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | low_to_medium |
| behavior tags | control_transfer_or_native_bridge_candidate |
| unresolved | intent_not_final;external_or_exit_edges_need_semantics |

## Control

| field | value |
| --- | --- |
| incoming | 020:2 |
| outgoing | 020:2,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 3 |
| rows | 477 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | host_environment_inventory:1 |
| role mix | cpu_or_runtime_configuration_name:1 |
| top strings | FILTERS_MODE_IPREFETCH |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_340_plus0x4_state_add_const_slot_multi_path:23,vmop_185_plus0x3_state_add_const_slot_multi_path:20,vmop_347_plus0x4_state_add_const_... |
| state kinds | state_add_const:451,state_mixed:21,state_const_post:4,state_preserve:1 |
| dispatch slots | slot_multi_path:318,slot_mba_stateful:110,slot_u16_0:24,slot_u16_1_sub_const:19,slot_const_or_affine:6 |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_020.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_020.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x128e61 | cpu_or_runtime_configuration_name | host_environment_inventory | FILTERS_MODE_IPREFETCH | vmop_333_plus0x4_state_add_const_slot_multi_path |

