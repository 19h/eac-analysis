# Synthetic Gap Table-Read Diagnostic

Diagnostic view of the final dispatch-table memory access reached by live-context residual replay.

Rows: `20`

## Diagnosis Mix

| Diagnosis | Rows |
| --- | ---: |
| `misaligned_or_non_qword_table_read` | 16 |
| `table_index_out_of_range` | 4 |

## Residual Starts

| Start | Source | Table Status | Size | Offset | Entry | Site | Diagnosis |
| --- | ---: | --- | --- | --- | --- | --- | --- |
| `0xd1445` | 175 | `table_oob:1` | `8:1` | `0x4388:1` | `2161:1` | `0x9c3d3:1` | `table_index_out_of_range` |
| `0xd5ebc` | 195 | `table_read:1` | `8:1` | `0x49bd:1` | `-:1` | `0xa0048:1` | `misaligned_or_non_qword_table_read` |
| `0xdaf39` | 195 | `table_read:1` | `8:1` | `0x1be:1` | `-:1` | `0xa0048:1` | `misaligned_or_non_qword_table_read` |
| `0x122e3c` | 299 | `table_read:1` | `8:1` | `0xd9cf:1` | `-:1` | `0xb7066:1` | `misaligned_or_non_qword_table_read` |
| `0x12906f` | 278 | `table_read:2` | `8:2` | `0xea3c:2` | `-:2` | `0xb2632:2` | `misaligned_or_non_qword_table_read` |
| `0x17452e` | 299 | `table_read:2` | `8:2` | `0x8144:2` | `-:2` | `0xb7066:2` | `misaligned_or_non_qword_table_read` |
| `0x17a420` | 175 | `table_read:2` | `8:2` | `0xc62:2` | `-:2` | `0x9c3d3:2` | `misaligned_or_non_qword_table_read` |
| `0x18c467` | 195 | `table_read:1` | `8:1` | `0xdf:1` | `-:1` | `0xa0048:1` | `misaligned_or_non_qword_table_read` |
| `0x1a6041` | 175 | `table_read:2` | `8:2` | `0xe281:2` | `-:2` | `0x9c3d3:2` | `misaligned_or_non_qword_table_read` |
| `0x1ed483` | 195 | `table_read:2` | `8:2` | `0x40be:2` | `-:2` | `0xa0048:2` | `misaligned_or_non_qword_table_read` |
| `0x2304b8` | 195 | `table_oob:1` | `8:1` | `0x71e0:1` | `3644:1` | `0xa0048:1` | `table_index_out_of_range` |
| `0x231b74` | 195 | `table_oob:2` | `8:2` | `0x69c0:2` | `3384:2` | `0xa0048:2` | `table_index_out_of_range` |
| `0x24bd2a` | 299 | `table_read:2` | `8:2` | `0x448f:2` | `-:2` | `0xb7066:2` | `misaligned_or_non_qword_table_read` |
| `0x31f2b1` | 195 | `table_read:1` | `8:1` | `0x68c3:1` | `-:1` | `0xa0048:1` | `misaligned_or_non_qword_table_read` |
| `0x333bc9` | 195 | `table_read:1` | `8:1` | `0x48e2:1` | `-:1` | `0xa0048:1` | `misaligned_or_non_qword_table_read` |
| `0x33710f` | 299 | `table_oob:1` | `8:1` | `0x8548:1` | `4265:1` | `0xb7066:1` | `table_index_out_of_range` |
| `0x33a6cc` | 299 | `table_read:1` | `8:1` | `0x115e:1` | `-:1` | `0xb7066:1` | `misaligned_or_non_qword_table_read` |
| `0x33d2d9` | 195 | `table_read:1` | `8:1` | `0x31e2:1` | `-:1` | `0xa0048:1` | `misaligned_or_non_qword_table_read` |
| `0x34556c` | 175 | `table_read:2` | `8:2` | `0xfa95:2` | `-:2` | `0x9c3d3:2` | `misaligned_or_non_qword_table_read` |
| `0x3655e4` | 195 | `table_read:2` | `8:2` | `0x29c3:2` | `-:2` | `0xa0048:2` | `misaligned_or_non_qword_table_read` |
