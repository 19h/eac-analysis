# Sampled Ret-Patch Probe

This probe generalizes native return-patch checks across sampled unresolved-control entries. Sources 175, 195, and 299 write `frame_qword_0xbb + u32_0` to `rsp + u16_4`; source 278 writes two stacked return addresses from `u32_6` and `u32_0`. These handlers return into native `.text` instead of taking a normal VM dispatch-table slot.

Rows: `31`
Sources: `4`
Starts: `15`

### Source Entry

| Value | Rows |
| --- | ---: |
| `195` | 16 |
| `299` | 7 |
| `175` | 6 |
| `278` | 2 |

### Start

| Value | Rows |
| --- | ---: |
| `0x122e3c` | 3 |
| `0xd1445` | 2 |
| `0x17a420` | 2 |
| `0x1a6041` | 2 |
| `0xd5ebc` | 2 |
| `0xdaf39` | 2 |
| `0x1ed483` | 2 |
| `0x2304b8` | 2 |
| `0x231b74` | 2 |
| `0x333bc9` | 2 |
| `0x33d2d9` | 2 |
| `0x3655e4` | 2 |
| `0x12906f` | 2 |
| `0x17452e` | 2 |
| `0x33710f` | 2 |

### Seed Quality

| Value | Rows |
| --- | ---: |
| `full_gpr_snapshot` | 24 |
| `frame_only_snapshot` | 7 |

### Ret Patch Relation

| Value | Rows |
| --- | ---: |
| `native_ret_patch_text_offset_not_vm_ip` | 31 |

### Interpretation

| Value | Rows |
| --- | ---: |
| `sampled_native_return_patch_controls_hidden_text_reentry` | 29 |
| `sampled_native_double_return_patch_controls_hidden_text_reentry` | 2 |

## Rows

| Source | Start | Run | Operand | Stack Slot | Patched Ret | Section | Next | Relation | Interpretation |
| ---: | --- | --- | ---: | ---: | ---: | --- | --- | --- | --- |
| `175` | `0xd1445` | `vmtail-fakenet-w16` | `0x217cb` | `0x80` | `0x217cb` | `.text` | `tail@0xd4897->entry_354` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `175` | `0xd1445` | `vmtail-live-residual-targets` | `0x217cb` | `0x80` | `0x217cb` | `.text` | `tail@0xd5eb8->entry_123` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `175` | `0x17a420` | `vmtail-live-residual-targets` | `0x31703` | `0x80` | `0x31703` | `.text` | `tail@0x231b70->entry_174` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `175` | `0x17a420` | `vmtail-state-residual-targets` | `0x31703` | `0x80` | `0x31703` | `.text` | `tail@0x231b70->entry_174` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `175` | `0x1a6041` | `vmtail-live-residual-targets` | `0x339bd` | `0x80` | `0x339bd` | `.text` | `tail@0x12906b->entry_174` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `175` | `0x1a6041` | `vmtail-state-residual-targets` | `0x339bd` | `0x80` | `0x339bd` | `.text` | `tail@0x12906b->entry_174` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0xd5ebc` | `vmtail-fakenet-w16` | `0x21e1e` | `0x80` | `0x21e1e` | `.text` | `tail@0x18bd9a->entry_171` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0xd5ebc` | `vmtail-live-residual-targets` | `0x21e1e` | `0x80` | `0x21e1e` | `.text` | `tail@0xdaf35->entry_184` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0xdaf39` | `vmtail-fakenet-w16` | `0x230d4` | `0x80` | `0x230d4` | `.text` | `tail@0x18c088->entry_171` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0xdaf39` | `vmtail-live-residual-targets` | `0x230d4` | `0x80` | `0x230d4` | `.text` | `tail@0x18c463->entry_184` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0x1ed483` | `vmtail-live-residual-targets` | `0x37af9` | `0x80` | `0x37af9` | `.text` | `tail@0x1a603d->entry_174` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0x1ed483` | `vmtail-state-residual-targets` | `0x37af9` | `0x80` | `0x37af9` | `.text` | `tail@0x1a603d->entry_174` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0x2304b8` | `vmtail-fakenet-w16` | `0x44d7b` | `0x80` | `0x44d7b` | `.text` | `tail@0xd1010->entry_165` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0x2304b8` | `vmtail-live-residual-targets` | `0x44d7b` | `0x80` | `0x44d7b` | `.text` | `tail@0xd1441->entry_158` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0x231b74` | `vmtail-live-residual-targets` | `0x5f1c6` | `0x80` | `0x5f1c6` | `.text` | `tail@0x1ed47f->entry_161` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0x231b74` | `vmtail-state-residual-targets` | `0x5f1c6` | `0x80` | `0x5f1c6` | `.text` | `tail@0x1ed47f->entry_161` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0x333bc9` | `vmtail-fakenet-w16` | `0x748d8` | `0x80` | `0x748d8` | `.text` | `tail@0x31e24d->entry_165` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0x333bc9` | `vmtail-live-residual-targets` | `0x748d8` | `0x80` | `0x748d8` | `.text` | `tail@0x33a6c8->entry_176` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0x33d2d9` | `vmtail-fakenet-w16` | `0x74f88` | `0x80` | `0x74f88` | `.text` | `tail@0x31e627->entry_165` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0x33d2d9` | `vmtail-live-residual-targets` | `0x74f88` | `0x80` | `0x74f88` | `.text` | `tail@0x31f2ad->entry_184` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0x3655e4` | `vmtail-live-residual-targets` | `0x779bd` | `0x80` | `0x779bd` | `.text` | `tail@0x17a41c->entry_161` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `195` | `0x3655e4` | `vmtail-state-residual-targets` | `0x779bd` | `0x80` | `0x779bd` | `.text` | `tail@0x17a41c->entry_161` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `278` | `0x12906f` | `vmtail-live-residual-targets` | `0x6c010->0x15b5b2` | `0x80` | `0x6c010->0x15b5b2` | `.text->.text` | `tail@0x17452a->entry_123` | `native_ret_patch_text_offset_not_vm_ip->native_ret_patch_text_offset_not_vm_ip` | `sampled_native_double_return_patch_controls_hidden_text_reentry` |
| `278` | `0x12906f` | `vmtail-state-residual-targets` | `0x6c010->0x15b5b2` | `0x80` | `0x6c010->0x15b5b2` | `.text->.text` | `tail@0x17452a->entry_123` | `native_ret_patch_text_offset_not_vm_ip->native_ret_patch_text_offset_not_vm_ip` | `sampled_native_double_return_patch_controls_hidden_text_reentry` |
| `299` | `0x122e3c` | `vmtail-residual-122e3c-context` | `0x2d409` | `0x80` | `0x2d409` | `.text` | `tail@0x2c0468->entry_165` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `299` | `0x122e3c` | `vmtail-residual-122e3c-context-postcall` | `0x2d409` | `0x80` | `0x2d409` | `.text` | `tail@0x2c0468->entry_165` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `299` | `0x122e3c` | `vmtail-state-residual-targets` | `0x2d409` | `0x80` | `0x2d409` | `.text` | `-` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `299` | `0x17452e` | `vmtail-live-residual-targets` | `0x313eb` | `0x80` | `0x313eb` | `.text` | `-` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `299` | `0x17452e` | `vmtail-state-residual-targets` | `0x313eb` | `0x80` | `0x313eb` | `.text` | `tail@0x122e38->entry_174` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `299` | `0x33710f` | `vmtail-fakenet-w16` | `0x74b3d` | `0x80` | `0x74b3d` | `.text` | `tail@0x31e060->entry_165` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `299` | `0x33710f` | `vmtail-live-residual-targets` | `0x74b3d` | `0x80` | `0x74b3d` | `.text` | `tail@0x333bc5->entry_174` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
