# Synthetic Gap Observed Chain Replay Audit

Disabled observed-chain bridge snippets are expanded here into the exact replay steps emitted inside `VM_ENABLE_OBSERVED_CHAIN_BRIDGES`. These rows are C-shape reconstruction evidence, not default hard CFG promotion.

Chains: `15`
Replay rows: `57`
Unique replay VM starts: `18`

## Step Role Mix

| Role | Rows |
| --- | ---: |
| `residual_chain_step` | 42 |
| `context_reentry_terminal_step` | 8 |
| `focused_direct_terminal_step` | 7 |

## Chain Class Mix

| Class | Chains |
| --- | ---: |
| `sequence_chain_to_recovered_context_reentry` | 8 |
| `sequence_chain_to_focused_direct_bridge` | 7 |

## Terminal Blocks

| Terminal | Chains |
| --- | ---: |
| `prog_bb_0214@0x2c0468` | 8 |
| `prog_bb_0293@0x334a3d` | 4 |
| `prog_bb_0324@0x33b647` | 2 |
| `prog_bb_0340@0x33f278` | 1 |

## Replay Steps

| Chain | Step | VM IP | Source | Role | First Hop | Following | Terminal | Shape |
| --- | ---: | --- | ---: | --- | --- | --- | --- | --- |
| `0xd1445` | 0 | `0xd1445` | 175 | `residual_chain_step` | `tail@0xd5eb8/+0x4a73->entry_123` | `0xd5ebc` | `prog_bb_0293@0x334a3d` | `op_entry_175(vm); next_entry=123; first_hop=0xd5eb8; vm_ip=0xd5ebc; terminal=prog_bb_0293@0x334a3d` |
| `0xd1445` | 1 | `0xd5ebc` | 195 | `residual_chain_step` | `tail@0xdaf35/+0x5079->entry_184` | `0xdaf39` | `prog_bb_0293@0x334a3d` | `op_entry_195(vm); next_entry=184; first_hop=0xdaf35; vm_ip=0xdaf39; terminal=prog_bb_0293@0x334a3d` |
| `0xd1445` | 2 | `0xdaf39` | 195 | `residual_chain_step` | `tail@0x18c463/+0xb152a->entry_184` | `0x18c467` | `prog_bb_0293@0x334a3d` | `op_entry_195(vm); next_entry=184; first_hop=0x18c463; vm_ip=0x18c467; terminal=prog_bb_0293@0x334a3d` |
| `0xd1445` | 3 | `0x18c467` | 195 | `focused_direct_terminal_step` | `dispatch@0x334a3d/+0x1a85d6->entry_42` | `-` | `prog_bb_0293@0x334a3d` | `op_entry_195(vm); next_entry=42; first_hop=0x334a3d; vm_ip=-; terminal=prog_bb_0293@0x334a3d` |
| `0xd5ebc` | 0 | `0xd5ebc` | 195 | `residual_chain_step` | `tail@0xdaf35/+0x5079->entry_184` | `0xdaf39` | `prog_bb_0293@0x334a3d` | `op_entry_195(vm); next_entry=184; first_hop=0xdaf35; vm_ip=0xdaf39; terminal=prog_bb_0293@0x334a3d` |
| `0xd5ebc` | 1 | `0xdaf39` | 195 | `residual_chain_step` | `tail@0x18c463/+0xb152a->entry_184` | `0x18c467` | `prog_bb_0293@0x334a3d` | `op_entry_195(vm); next_entry=184; first_hop=0x18c463; vm_ip=0x18c467; terminal=prog_bb_0293@0x334a3d` |
| `0xd5ebc` | 2 | `0x18c467` | 195 | `focused_direct_terminal_step` | `dispatch@0x334a3d/+0x1a85d6->entry_42` | `-` | `prog_bb_0293@0x334a3d` | `op_entry_195(vm); next_entry=42; first_hop=0x334a3d; vm_ip=-; terminal=prog_bb_0293@0x334a3d` |
| `0xdaf39` | 0 | `0xdaf39` | 195 | `residual_chain_step` | `tail@0x18c463/+0xb152a->entry_184` | `0x18c467` | `prog_bb_0293@0x334a3d` | `op_entry_195(vm); next_entry=184; first_hop=0x18c463; vm_ip=0x18c467; terminal=prog_bb_0293@0x334a3d` |
| `0xdaf39` | 1 | `0x18c467` | 195 | `focused_direct_terminal_step` | `dispatch@0x334a3d/+0x1a85d6->entry_42` | `-` | `prog_bb_0293@0x334a3d` | `op_entry_195(vm); next_entry=42; first_hop=0x334a3d; vm_ip=-; terminal=prog_bb_0293@0x334a3d` |
| `0x122e3c` | 0 | `0x122e3c` | 299 | `context_reentry_terminal_step` | `tail@0x2c0468/+0x19d62c->entry_165` | `-` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=165; first_hop=0x2c0468; vm_ip=-; terminal=prog_bb_0214@0x2c0468` |
| `0x12906f` | 0 | `0x12906f` | 278 | `residual_chain_step` | `tail@0x17452a/+0x4b4bb->entry_123` | `0x17452e` | `prog_bb_0214@0x2c0468` | `op_entry_278(vm); next_entry=123; first_hop=0x17452a; vm_ip=0x17452e; terminal=prog_bb_0214@0x2c0468` |
| `0x12906f` | 1 | `0x17452e` | 299 | `residual_chain_step` | `tail@0x122e38/-0x516f6->entry_174` | `0x122e3c` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=174; first_hop=0x122e38; vm_ip=0x122e3c; terminal=prog_bb_0214@0x2c0468` |
| `0x12906f` | 2 | `0x122e3c` | 299 | `context_reentry_terminal_step` | `tail@0x2c0468/+0x19d62c->entry_165` | `-` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=165; first_hop=0x2c0468; vm_ip=-; terminal=prog_bb_0214@0x2c0468` |
| `0x17452e` | 0 | `0x17452e` | 299 | `residual_chain_step` | `tail@0x122e38/-0x516f6->entry_174` | `0x122e3c` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=174; first_hop=0x122e38; vm_ip=0x122e3c; terminal=prog_bb_0214@0x2c0468` |
| `0x17452e` | 1 | `0x122e3c` | 299 | `context_reentry_terminal_step` | `tail@0x2c0468/+0x19d62c->entry_165` | `-` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=165; first_hop=0x2c0468; vm_ip=-; terminal=prog_bb_0214@0x2c0468` |
| `0x17a420` | 0 | `0x17a420` | 175 | `residual_chain_step` | `tail@0x231b70/+0xb7750->entry_174` | `0x231b74` | `prog_bb_0214@0x2c0468` | `op_entry_175(vm); next_entry=174; first_hop=0x231b70; vm_ip=0x231b74; terminal=prog_bb_0214@0x2c0468` |
| `0x17a420` | 1 | `0x231b74` | 195 | `residual_chain_step` | `tail@0x1ed47f/-0x446f5->entry_161` | `0x1ed483` | `prog_bb_0214@0x2c0468` | `op_entry_195(vm); next_entry=161; first_hop=0x1ed47f; vm_ip=0x1ed483; terminal=prog_bb_0214@0x2c0468` |
| `0x17a420` | 2 | `0x1ed483` | 195 | `residual_chain_step` | `tail@0x1a603d/-0x47446->entry_174` | `0x1a6041` | `prog_bb_0214@0x2c0468` | `op_entry_195(vm); next_entry=174; first_hop=0x1a603d; vm_ip=0x1a6041; terminal=prog_bb_0214@0x2c0468` |
| `0x17a420` | 3 | `0x1a6041` | 175 | `residual_chain_step` | `tail@0x12906b/-0x7cfd6->entry_174` | `0x12906f` | `prog_bb_0214@0x2c0468` | `op_entry_175(vm); next_entry=174; first_hop=0x12906b; vm_ip=0x12906f; terminal=prog_bb_0214@0x2c0468` |
| `0x17a420` | 4 | `0x12906f` | 278 | `residual_chain_step` | `tail@0x17452a/+0x4b4bb->entry_123` | `0x17452e` | `prog_bb_0214@0x2c0468` | `op_entry_278(vm); next_entry=123; first_hop=0x17452a; vm_ip=0x17452e; terminal=prog_bb_0214@0x2c0468` |
| `0x17a420` | 5 | `0x17452e` | 299 | `residual_chain_step` | `tail@0x122e38/-0x516f6->entry_174` | `0x122e3c` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=174; first_hop=0x122e38; vm_ip=0x122e3c; terminal=prog_bb_0214@0x2c0468` |
| `0x17a420` | 6 | `0x122e3c` | 299 | `context_reentry_terminal_step` | `tail@0x2c0468/+0x19d62c->entry_165` | `-` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=165; first_hop=0x2c0468; vm_ip=-; terminal=prog_bb_0214@0x2c0468` |
| `0x1a6041` | 0 | `0x1a6041` | 175 | `residual_chain_step` | `tail@0x12906b/-0x7cfd6->entry_174` | `0x12906f` | `prog_bb_0214@0x2c0468` | `op_entry_175(vm); next_entry=174; first_hop=0x12906b; vm_ip=0x12906f; terminal=prog_bb_0214@0x2c0468` |
| `0x1a6041` | 1 | `0x12906f` | 278 | `residual_chain_step` | `tail@0x17452a/+0x4b4bb->entry_123` | `0x17452e` | `prog_bb_0214@0x2c0468` | `op_entry_278(vm); next_entry=123; first_hop=0x17452a; vm_ip=0x17452e; terminal=prog_bb_0214@0x2c0468` |
| `0x1a6041` | 2 | `0x17452e` | 299 | `residual_chain_step` | `tail@0x122e38/-0x516f6->entry_174` | `0x122e3c` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=174; first_hop=0x122e38; vm_ip=0x122e3c; terminal=prog_bb_0214@0x2c0468` |
| `0x1a6041` | 3 | `0x122e3c` | 299 | `context_reentry_terminal_step` | `tail@0x2c0468/+0x19d62c->entry_165` | `-` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=165; first_hop=0x2c0468; vm_ip=-; terminal=prog_bb_0214@0x2c0468` |
| `0x1ed483` | 0 | `0x1ed483` | 195 | `residual_chain_step` | `tail@0x1a603d/-0x47446->entry_174` | `0x1a6041` | `prog_bb_0214@0x2c0468` | `op_entry_195(vm); next_entry=174; first_hop=0x1a603d; vm_ip=0x1a6041; terminal=prog_bb_0214@0x2c0468` |
| `0x1ed483` | 1 | `0x1a6041` | 175 | `residual_chain_step` | `tail@0x12906b/-0x7cfd6->entry_174` | `0x12906f` | `prog_bb_0214@0x2c0468` | `op_entry_175(vm); next_entry=174; first_hop=0x12906b; vm_ip=0x12906f; terminal=prog_bb_0214@0x2c0468` |
| `0x1ed483` | 2 | `0x12906f` | 278 | `residual_chain_step` | `tail@0x17452a/+0x4b4bb->entry_123` | `0x17452e` | `prog_bb_0214@0x2c0468` | `op_entry_278(vm); next_entry=123; first_hop=0x17452a; vm_ip=0x17452e; terminal=prog_bb_0214@0x2c0468` |
| `0x1ed483` | 3 | `0x17452e` | 299 | `residual_chain_step` | `tail@0x122e38/-0x516f6->entry_174` | `0x122e3c` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=174; first_hop=0x122e38; vm_ip=0x122e3c; terminal=prog_bb_0214@0x2c0468` |
| `0x1ed483` | 4 | `0x122e3c` | 299 | `context_reentry_terminal_step` | `tail@0x2c0468/+0x19d62c->entry_165` | `-` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=165; first_hop=0x2c0468; vm_ip=-; terminal=prog_bb_0214@0x2c0468` |
| `0x2304b8` | 0 | `0x2304b8` | 195 | `residual_chain_step` | `tail@0xd1441/-0x15f077->entry_158` | `0xd1445` | `prog_bb_0293@0x334a3d` | `op_entry_195(vm); next_entry=158; first_hop=0xd1441; vm_ip=0xd1445; terminal=prog_bb_0293@0x334a3d` |
| `0x2304b8` | 1 | `0xd1445` | 175 | `residual_chain_step` | `tail@0xd5eb8/+0x4a73->entry_123` | `0xd5ebc` | `prog_bb_0293@0x334a3d` | `op_entry_175(vm); next_entry=123; first_hop=0xd5eb8; vm_ip=0xd5ebc; terminal=prog_bb_0293@0x334a3d` |
| `0x2304b8` | 2 | `0xd5ebc` | 195 | `residual_chain_step` | `tail@0xdaf35/+0x5079->entry_184` | `0xdaf39` | `prog_bb_0293@0x334a3d` | `op_entry_195(vm); next_entry=184; first_hop=0xdaf35; vm_ip=0xdaf39; terminal=prog_bb_0293@0x334a3d` |
| `0x2304b8` | 3 | `0xdaf39` | 195 | `residual_chain_step` | `tail@0x18c463/+0xb152a->entry_184` | `0x18c467` | `prog_bb_0293@0x334a3d` | `op_entry_195(vm); next_entry=184; first_hop=0x18c463; vm_ip=0x18c467; terminal=prog_bb_0293@0x334a3d` |
| `0x2304b8` | 4 | `0x18c467` | 195 | `focused_direct_terminal_step` | `dispatch@0x334a3d/+0x1a85d6->entry_42` | `-` | `prog_bb_0293@0x334a3d` | `op_entry_195(vm); next_entry=42; first_hop=0x334a3d; vm_ip=-; terminal=prog_bb_0293@0x334a3d` |
| `0x231b74` | 0 | `0x231b74` | 195 | `residual_chain_step` | `tail@0x1ed47f/-0x446f5->entry_161` | `0x1ed483` | `prog_bb_0214@0x2c0468` | `op_entry_195(vm); next_entry=161; first_hop=0x1ed47f; vm_ip=0x1ed483; terminal=prog_bb_0214@0x2c0468` |
| `0x231b74` | 1 | `0x1ed483` | 195 | `residual_chain_step` | `tail@0x1a603d/-0x47446->entry_174` | `0x1a6041` | `prog_bb_0214@0x2c0468` | `op_entry_195(vm); next_entry=174; first_hop=0x1a603d; vm_ip=0x1a6041; terminal=prog_bb_0214@0x2c0468` |
| `0x231b74` | 2 | `0x1a6041` | 175 | `residual_chain_step` | `tail@0x12906b/-0x7cfd6->entry_174` | `0x12906f` | `prog_bb_0214@0x2c0468` | `op_entry_175(vm); next_entry=174; first_hop=0x12906b; vm_ip=0x12906f; terminal=prog_bb_0214@0x2c0468` |
| `0x231b74` | 3 | `0x12906f` | 278 | `residual_chain_step` | `tail@0x17452a/+0x4b4bb->entry_123` | `0x17452e` | `prog_bb_0214@0x2c0468` | `op_entry_278(vm); next_entry=123; first_hop=0x17452a; vm_ip=0x17452e; terminal=prog_bb_0214@0x2c0468` |
| `0x231b74` | 4 | `0x17452e` | 299 | `residual_chain_step` | `tail@0x122e38/-0x516f6->entry_174` | `0x122e3c` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=174; first_hop=0x122e38; vm_ip=0x122e3c; terminal=prog_bb_0214@0x2c0468` |
| `0x231b74` | 5 | `0x122e3c` | 299 | `context_reentry_terminal_step` | `tail@0x2c0468/+0x19d62c->entry_165` | `-` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=165; first_hop=0x2c0468; vm_ip=-; terminal=prog_bb_0214@0x2c0468` |
| `0x333bc9` | 0 | `0x333bc9` | 195 | `residual_chain_step` | `tail@0x33a6c8/+0x6aff->entry_176` | `0x33a6cc` | `prog_bb_0324@0x33b647` | `op_entry_195(vm); next_entry=176; first_hop=0x33a6c8; vm_ip=0x33a6cc; terminal=prog_bb_0324@0x33b647` |
| `0x333bc9` | 1 | `0x33a6cc` | 299 | `focused_direct_terminal_step` | `dispatch@0x33b647/+0xf7b->entry_42` | `-` | `prog_bb_0324@0x33b647` | `op_entry_299(vm); next_entry=42; first_hop=0x33b647; vm_ip=-; terminal=prog_bb_0324@0x33b647` |
| `0x33710f` | 0 | `0x33710f` | 299 | `residual_chain_step` | `tail@0x333bc5/-0x354a->entry_174` | `0x333bc9` | `prog_bb_0324@0x33b647` | `op_entry_299(vm); next_entry=174; first_hop=0x333bc5; vm_ip=0x333bc9; terminal=prog_bb_0324@0x33b647` |
| `0x33710f` | 1 | `0x333bc9` | 195 | `residual_chain_step` | `tail@0x33a6c8/+0x6aff->entry_176` | `0x33a6cc` | `prog_bb_0324@0x33b647` | `op_entry_195(vm); next_entry=176; first_hop=0x33a6c8; vm_ip=0x33a6cc; terminal=prog_bb_0324@0x33b647` |
| `0x33710f` | 2 | `0x33a6cc` | 299 | `focused_direct_terminal_step` | `dispatch@0x33b647/+0xf7b->entry_42` | `-` | `prog_bb_0324@0x33b647` | `op_entry_299(vm); next_entry=42; first_hop=0x33b647; vm_ip=-; terminal=prog_bb_0324@0x33b647` |
| `0x33d2d9` | 0 | `0x33d2d9` | 195 | `residual_chain_step` | `tail@0x31f2ad/-0x1e02c->entry_184` | `0x31f2b1` | `prog_bb_0340@0x33f278` | `op_entry_195(vm); next_entry=184; first_hop=0x31f2ad; vm_ip=0x31f2b1; terminal=prog_bb_0340@0x33f278` |
| `0x33d2d9` | 1 | `0x31f2b1` | 195 | `focused_direct_terminal_step` | `dispatch@0x33f278/+0x1ffc7->entry_323` | `-` | `prog_bb_0340@0x33f278` | `op_entry_195(vm); next_entry=323; first_hop=0x33f278; vm_ip=-; terminal=prog_bb_0340@0x33f278` |
| `0x3655e4` | 0 | `0x3655e4` | 195 | `residual_chain_step` | `tail@0x17a41c/-0x1eb1c8->entry_161` | `0x17a420` | `prog_bb_0214@0x2c0468` | `op_entry_195(vm); next_entry=161; first_hop=0x17a41c; vm_ip=0x17a420; terminal=prog_bb_0214@0x2c0468` |
| `0x3655e4` | 1 | `0x17a420` | 175 | `residual_chain_step` | `tail@0x231b70/+0xb7750->entry_174` | `0x231b74` | `prog_bb_0214@0x2c0468` | `op_entry_175(vm); next_entry=174; first_hop=0x231b70; vm_ip=0x231b74; terminal=prog_bb_0214@0x2c0468` |
| `0x3655e4` | 2 | `0x231b74` | 195 | `residual_chain_step` | `tail@0x1ed47f/-0x446f5->entry_161` | `0x1ed483` | `prog_bb_0214@0x2c0468` | `op_entry_195(vm); next_entry=161; first_hop=0x1ed47f; vm_ip=0x1ed483; terminal=prog_bb_0214@0x2c0468` |
| `0x3655e4` | 3 | `0x1ed483` | 195 | `residual_chain_step` | `tail@0x1a603d/-0x47446->entry_174` | `0x1a6041` | `prog_bb_0214@0x2c0468` | `op_entry_195(vm); next_entry=174; first_hop=0x1a603d; vm_ip=0x1a6041; terminal=prog_bb_0214@0x2c0468` |
| `0x3655e4` | 4 | `0x1a6041` | 175 | `residual_chain_step` | `tail@0x12906b/-0x7cfd6->entry_174` | `0x12906f` | `prog_bb_0214@0x2c0468` | `op_entry_175(vm); next_entry=174; first_hop=0x12906b; vm_ip=0x12906f; terminal=prog_bb_0214@0x2c0468` |
| `0x3655e4` | 5 | `0x12906f` | 278 | `residual_chain_step` | `tail@0x17452a/+0x4b4bb->entry_123` | `0x17452e` | `prog_bb_0214@0x2c0468` | `op_entry_278(vm); next_entry=123; first_hop=0x17452a; vm_ip=0x17452e; terminal=prog_bb_0214@0x2c0468` |
| `0x3655e4` | 6 | `0x17452e` | 299 | `residual_chain_step` | `tail@0x122e38/-0x516f6->entry_174` | `0x122e3c` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=174; first_hop=0x122e38; vm_ip=0x122e3c; terminal=prog_bb_0214@0x2c0468` |
| `0x3655e4` | 7 | `0x122e3c` | 299 | `context_reentry_terminal_step` | `tail@0x2c0468/+0x19d62c->entry_165` | `-` | `prog_bb_0214@0x2c0468` | `op_entry_299(vm); next_entry=165; first_hop=0x2c0468; vm_ip=-; terminal=prog_bb_0214@0x2c0468` |
