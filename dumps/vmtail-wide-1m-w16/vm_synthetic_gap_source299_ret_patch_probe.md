# Source 299 Ret-Patch Probe

Source 299 is a native return-patch thunk: it combines the bytecode `u32_0` operand with the VM-frame qword at `+0xbb`, writes that address to `rsp + u16_4`, restores registers, and returns. This probe materializes that hidden native control transfer for the source-299 residual gaps.

Rows: `7`
Starts: `3`

### Start

| Value | Rows |
| --- | ---: |
| `0x122e3c` | 3 |
| `0x17452e` | 2 |
| `0x33710f` | 2 |

### Seed Quality

| Value | Rows |
| --- | ---: |
| `full_gpr_snapshot` | 6 |
| `frame_only_snapshot` | 1 |

### Ret Patch Relation

| Value | Rows |
| --- | ---: |
| `native_ret_patch_text_offset_not_vm_ip` | 7 |

### Interpretation

| Value | Rows |
| --- | ---: |
| `sampled_native_return_patch_controls_hidden_text_reentry` | 7 |

## Rows

| Start | Run | Operand | Stack Slot | Patched Ret | Section | Next | Relation | Interpretation |
| --- | --- | ---: | ---: | ---: | --- | --- | --- | --- |
| `0x122e3c` | `vmtail-residual-122e3c-context` | `0x2d409` | `0x80` | `0x2d409` | `.text` | `tail@0x2c0468->entry_165` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `0x122e3c` | `vmtail-residual-122e3c-context-postcall` | `0x2d409` | `0x80` | `0x2d409` | `.text` | `tail@0x2c0468->entry_165` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `0x122e3c` | `vmtail-state-residual-targets` | `0x2d409` | `0x80` | `0x2d409` | `.text` | `-` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `0x17452e` | `vmtail-live-residual-targets` | `0x313eb` | `0x80` | `0x313eb` | `.text` | `-` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `0x17452e` | `vmtail-state-residual-targets` | `0x313eb` | `0x80` | `0x313eb` | `.text` | `tail@0x122e38->entry_174` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `0x33710f` | `vmtail-fakenet-w16` | `0x74b3d` | `0x80` | `0x74b3d` | `.text` | `tail@0x31e060->entry_165` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
| `0x33710f` | `vmtail-live-residual-targets` | `0x74b3d` | `0x80` | `0x74b3d` | `.text` | `tail@0x333bc5->entry_174` | `native_ret_patch_text_offset_not_vm_ip` | `sampled_native_return_patch_controls_hidden_text_reentry` |
