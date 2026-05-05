# Synthetic Gap Live Table Evidence

Per-live-row file/runtime evidence for the concrete table offsets reached by unresolved synthetic-gap replay. This keeps full-GPR rows separate from frame-only alternate/config rows and checks whether rejected offsets decode as dispatch edges in either file or runtime memory.

Rows: `31`
Runtime maps: `4`
Runtime image base: `0x706c54a00000`
Runtime mapped image size: `0x64b000`

## Mixes

### Evidence Class

| Value | Rows |
| --- | ---: |
| `post_table_code_byte_read` | 21 |
| `table_index_out_of_dispatch_range` | 8 |
| `misaligned_inside_dispatch_table` | 2 |

### Seed Quality

| Value | Rows |
| --- | ---: |
| `full_gpr_snapshot` | 24 |
| `frame_only_snapshot` | 7 |

### Region

| Value | Rows |
| --- | ---: |
| `after_dispatch_table` | 29 |
| `inside_dispatch_table_unaligned` | 2 |

### File Qword Class

| Value | Rows |
| --- | ---: |
| `non_pointer_bytes` | 29 |
| `low32_text_offset` | 2 |

### Runtime Qword Class

| Value | Rows |
| --- | ---: |
| `non_pointer_bytes` | 29 |
| `low32_text_offset` | 2 |

### Runtime/File Match

| Value | Rows |
| --- | ---: |
| `yes` | 29 |
| `no` | 2 |

## Rows

| Start | Source | Run | Seed | Offset | Region | File Qword | Runtime Qword | Next | Evidence |
| --- | ---: | --- | --- | --- | --- | --- | --- | --- | --- |
| `0xd1445` | 175 | `vmtail-fakenet-w16` | `frame_only_snapshot` | `0x4388` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_354@0xd4897` | `table_index_out_of_dispatch_range` |
| `0xd1445` | 175 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0x4388` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_123@0xd5eb8` | `table_index_out_of_dispatch_range` |
| `0xd5ebc` | 195 | `vmtail-fakenet-w16` | `frame_only_snapshot` | `0x49bd` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_171@0x18bd9a` | `post_table_code_byte_read` |
| `0xd5ebc` | 195 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0x49bd` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_184@0xdaf35` | `post_table_code_byte_read` |
| `0xdaf39` | 195 | `vmtail-fakenet-w16` | `frame_only_snapshot` | `0x1be` | `inside_dispatch_table_unaligned` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_171@0x18c088` | `misaligned_inside_dispatch_table` |
| `0xdaf39` | 195 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0x1be` | `inside_dispatch_table_unaligned` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_184@0x18c463` | `misaligned_inside_dispatch_table` |
| `0x122e3c` | 299 | `vmtail-residual-122e3c-context` | `full_gpr_snapshot` | `0xd9cf` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_165@0x2c0468` | `post_table_code_byte_read` |
| `0x122e3c` | 299 | `vmtail-residual-122e3c-context-postcall` | `full_gpr_snapshot` | `0xd9cf` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_165@0x2c0468` | `post_table_code_byte_read` |
| `0x122e3c` | 299 | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `0xd9cf` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `-` | `post_table_code_byte_read` |
| `0x12906f` | 278 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0xea3c` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_123@0x17452a` | `post_table_code_byte_read` |
| `0x12906f` | 278 | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `0xea3c` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_123@0x17452a` | `post_table_code_byte_read` |
| `0x17452e` | 299 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0x8144` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `-` | `post_table_code_byte_read` |
| `0x17452e` | 299 | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `0x8144` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_174@0x122e38` | `post_table_code_byte_read` |
| `0x17a420` | 175 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0xc62` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_174@0x231b70` | `post_table_code_byte_read` |
| `0x17a420` | 175 | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `0xc62` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_174@0x231b70` | `post_table_code_byte_read` |
| `0x1a6041` | 175 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0xe281` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_174@0x12906b` | `post_table_code_byte_read` |
| `0x1a6041` | 175 | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `0xe281` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_174@0x12906b` | `post_table_code_byte_read` |
| `0x1ed483` | 195 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0x40be` | `after_dispatch_table` | `low32_text_offset` | `low32_text_offset` | `entry_174@0x1a603d` | `post_table_code_byte_read` |
| `0x1ed483` | 195 | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `0x40be` | `after_dispatch_table` | `low32_text_offset` | `low32_text_offset` | `entry_174@0x1a603d` | `post_table_code_byte_read` |
| `0x2304b8` | 195 | `vmtail-fakenet-w16` | `frame_only_snapshot` | `0x71e0` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_165@0xd1010` | `table_index_out_of_dispatch_range` |
| `0x2304b8` | 195 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0x71e0` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_158@0xd1441` | `table_index_out_of_dispatch_range` |
| `0x231b74` | 195 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0x69c0` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_161@0x1ed47f` | `table_index_out_of_dispatch_range` |
| `0x231b74` | 195 | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `0x69c0` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_161@0x1ed47f` | `table_index_out_of_dispatch_range` |
| `0x333bc9` | 195 | `vmtail-fakenet-w16` | `frame_only_snapshot` | `0x48e2` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_165@0x31e24d` | `post_table_code_byte_read` |
| `0x333bc9` | 195 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0x48e2` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_176@0x33a6c8` | `post_table_code_byte_read` |
| `0x33710f` | 299 | `vmtail-fakenet-w16` | `frame_only_snapshot` | `0x8548` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_165@0x31e060` | `table_index_out_of_dispatch_range` |
| `0x33710f` | 299 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0x8548` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_174@0x333bc5` | `table_index_out_of_dispatch_range` |
| `0x33d2d9` | 195 | `vmtail-fakenet-w16` | `frame_only_snapshot` | `0x31e2` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_165@0x31e627` | `post_table_code_byte_read` |
| `0x33d2d9` | 195 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0x31e2` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_184@0x31f2ad` | `post_table_code_byte_read` |
| `0x3655e4` | 195 | `vmtail-live-residual-targets` | `full_gpr_snapshot` | `0x29c3` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_161@0x17a41c` | `post_table_code_byte_read` |
| `0x3655e4` | 195 | `vmtail-state-residual-targets` | `full_gpr_snapshot` | `0x29c3` | `after_dispatch_table` | `non_pointer_bytes` | `non_pointer_bytes` | `entry_161@0x17a41c` | `post_table_code_byte_read` |
