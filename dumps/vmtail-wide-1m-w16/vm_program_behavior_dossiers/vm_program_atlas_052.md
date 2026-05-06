# VM Program atlas_052

This dossier is a readable evidence rollup, not a final semantic proof. It points to the recovered C/VM-op artifacts and records what is still unresolved.

## Summary

| field | value |
| --- | --- |
| program | 052 |
| range | 0x33b647..0x33d2d9 |
| first seen rank | 27 |
| summary | TLS/SSL protocol or library-adjacent logic; host/environment inventory surface |
| basis | exact string/data references plus opcode/control evidence |
| confidence | medium |
| behavior tags | tls_or_ssl;host_environment |
| unresolved | external_or_exit_edges_need_semantics |

## Control

| field | value |
| --- | --- |
| incoming | 052:4,043:1 |
| outgoing | 052:4,external_or_exit:1 |
| external/exit edges | 1 |
| blocks | 5 |
| rows | 1891 |

## Data And Side Effects

| field | value |
| --- | --- |
| exact categories | tls_or_ssl:1,host_environment_inventory:1 |
| role mix | tls_protocol_message:1,libc_version_requirement:1 |
| top strings | dropping unexpected ChangeCipherSpec \|\| GLIBC_2.17 |
| runtime native binding | not_bound_to_vm_program |

## Opcode Shape

| field | value |
| --- | --- |
| top opcodes | vmop_018_plus0x3_state_add_const_slot_multi_path:66,vmop_337_plus0x4_state_add_const_slot_multi_path:58,vmop_189_plus0x4_state_add_const_... |
| state kinds | state_add_const:1747,state_mixed:99,state_const_post:31,state_preserve:11,sampled_long_or_sparse:1,state_formula:1,sampled_backedge:1 |
| dispatch slots | slot_multi_path:1157,slot_mba_stateful:533,slot_u16_0:102,slot_u16_1_sub_const:41,slot_const_or_affine:37,slot_u16_2:18,slot_unknown:2,sl... |
| vmops file | dumps/vmtail-wide-1m-w16/vm_programs_opcode_pseudocode/vm_program_atlas_052.vmops |
| recovered C | dumps/vmtail-wide-1m-w16/vm_programs_decompiled_folded/vm_program_atlas_052.c |

## Exact String/Data References

| site | role | categories | text | opcode |
| --- | --- | --- | --- | --- |
| 0x33b7f2 | tls_protocol_message | tls_or_ssl | dropping unexpected ChangeCipherSpec | vmop_066_plus0x3_state_add_const_slot_multi_path |
| 0x33c3d4 | libc_version_requirement | host_environment_inventory | GLIBC_2.17 | vmop_246_plus0x78_sampled_long_or_sparse_slot_unknown |

