# Synthetic Gap Hidden Chain Probe

Probe of dynamic stitches by replaying candidate next-source handlers.
Short-offset full matches can become hard hidden-chain CFG evidence. Dynamic next-hook matches validate the observed next hooked handler but remain sequence evidence for the skipped hidden span.

Rows: 22.
Status mix: dynamic_next_hook_matches_static_transfer:20, hidden_chain_target_only:1, hidden_chain_matches_next_event:1.

| Synthetic Start | Source | Hidden Source | Hidden Start | Pred End | Pred Entry | Dynamic End | Dynamic Entry | Status |
| --- | ---: | ---: | --- | --- | ---: | --- | ---: | --- |
| `0xd1445` | 175 | 310 | `0xd4893` | `0xd4897` | 354 | `0xd4897` | 354 | `dynamic_next_hook_matches_static_transfer` |
| `0xd5ebc` | 195 | 169 | `0x18bd96` | `0x18bd9a` | 171 | `0x18bd9a` | 171 | `dynamic_next_hook_matches_static_transfer` |
| `0xdaf39` | 195 | 310 | `0x18c084` | `0x18c088` | 171 | `0x18c088` | 171 | `dynamic_next_hook_matches_static_transfer` |
| `0x122e3c` | 299 | 169 | `0x2c0464` | `0x2c0468` | 165 | `0x2c0468` | 165 | `dynamic_next_hook_matches_static_transfer` |
| `0x12906f` | 278 | 310 | `0x172d62` | `0x172d66` | 171 | `0x172d66` | 171 | `dynamic_next_hook_matches_static_transfer` |
| `0x17452e` | 299 | 310 | `0x2bff9a` | `0x2bff9e` | 354 | `0x2bff9e` | 354 | `dynamic_next_hook_matches_static_transfer` |
| `0x17a420` | 175 | 169 | `0x120afe` | `0x120b02` | 354 | `0x120b02` | 354 | `dynamic_next_hook_matches_static_transfer` |
| `0x18c467` | 195 | 310 | `0x11d6ac` | `0x11d6b0` | 171 | `0x11d6b0` | 171 | `dynamic_next_hook_matches_static_transfer` |
| `0x1a6041` | 175 | 169 | `0x1221a0` | `0x1221a4` | 171 | `0x1221a4` | 171 | `dynamic_next_hook_matches_static_transfer` |
| `0x1ed483` | 195 | 310 | `0x121ed0` | `0x121ed4` | 354 | `0x121ed4` | 354 | `dynamic_next_hook_matches_static_transfer` |
| `0x2304b8` | 195 | 169 | `0xd100c` | `0xd1010` | 165 | `0xd1010` | 165 | `dynamic_next_hook_matches_static_transfer` |
| `0x231b74` | 195 | 169 | `0x121c8d` | `0x121c91` | 165 | `0x121c91` | 165 | `dynamic_next_hook_matches_static_transfer` |
| `0x24bd2a` | 299 | 86 | `0x11ac5a` | `0x11ac5e` | 169 | `0x11ac5e` | 169 | `dynamic_next_hook_matches_static_transfer` |
| `0x24bd2a` | 299 | 323 | `0x24bd57` | `0x24bd5b` | 169 | `0x249468` | 169 | `hidden_chain_target_only` |
| `0x293689` | 246 | 308 | `0x293696` | `0x2bec2e` | 171 | `0x2bec2e` | 171 | `hidden_chain_matches_next_event` |
| `0x31f2b1` | 195 | 169 | `0x11d925` | `0x11d929` | 354 | `0x11d929` | 354 | `dynamic_next_hook_matches_static_transfer` |
| `0x333bc9` | 195 | 169 | `0x31e249` | `0x31e24d` | 165 | `0x31e24d` | 165 | `dynamic_next_hook_matches_static_transfer` |
| `0x33710f` | 299 | 310 | `0x31e05c` | `0x31e060` | 165 | `0x31e060` | 165 | `dynamic_next_hook_matches_static_transfer` |
| `0x33a6cc` | 299 | 169 | `0x31e436` | `0x31e43a` | 354 | `0x31e43a` | 354 | `dynamic_next_hook_matches_static_transfer` |
| `0x33d2d9` | 195 | 169 | `0x31e623` | `0x31e627` | 165 | `0x31e627` | 165 | `dynamic_next_hook_matches_static_transfer` |
| `0x34556c` | 175 | 169 | `0x11db12` | `0x11db16` | 354 | `0x11db16` | 354 | `dynamic_next_hook_matches_static_transfer` |
| `0x3655e4` | 195 | 310 | `0x11dcff` | `0x11dd03` | 165 | `0x11dd03` | 165 | `dynamic_next_hook_matches_static_transfer` |
