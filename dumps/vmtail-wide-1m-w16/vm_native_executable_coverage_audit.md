# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5544263
- uncovered executable bytes: 106777
- recovered range rows: 77629
- uncovered gaps: 1962

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5540151 | 106777 | 98.10% | 77369 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x4daff9-0x4db1f9` | 512 |
| `.text` | `0x4db7f9-0x4db9f9` | 512 |
| `.text` | `0x4e03f9-0x4e05f9` | 512 |
| `.text` | `0x4e1479-0x4e1679` | 512 |
| `.text` | `0x4e19f9-0x4e1bf9` | 512 |
| `.text` | `0x4db279-0x4db3f9` | 384 |
| `.text` | `0x4e0ef9-0x4e1079` | 384 |
| `.text` | `0x4e1ff9-0x4e2179` | 384 |
| `.text` | `0x4e4179-0x4e42f9` | 384 |
| `.text` | `0x4e4879-0x4e49f9` | 384 |
| `.text` | `0x4e74f9-0x4e7679` | 384 |
| `.text` | `0x4e9179-0x4e92f9` | 384 |
| `.text` | `0x72c6b-0x72dce` | 355 |
| `.text` | `0x4e3ef9-0x4e4039` | 320 |
| `.text` | `0x4e8db9-0x4e8ef9` | 320 |
| `.text` | `0x4e4d89-0x4e4ea9` | 288 |
| `.text` | `0x4e62f9-0x4e6419` | 288 |
| `.text` | `0xdadc7-0xdaec7` | 256 |
| `.text` | `0xfc09c-0xfc19c` | 256 |
| `.text` | `0x148913-0x148a13` | 256 |
| `.text` | `0x153b13-0x153c13` | 256 |
| `.text` | `0x1c5a55-0x1c5b55` | 256 |
| `.text` | `0x2674c2-0x2675c2` | 256 |
| `.text` | `0x268dc2-0x268ec2` | 256 |
| `.text` | `0x27c2c1-0x27c3c1` | 256 |
| `.text` | `0x299ac9-0x299bc9` | 256 |
| `.text` | `0x2aa975-0x2aaa75` | 256 |
| `.text` | `0x2b0c75-0x2b0d75` | 256 |
| `.text` | `0x30951d-0x30961d` | 256 |
| `.text` | `0x31c6bb-0x31c7bb` | 256 |
| `.text` | `0x33907b-0x33917b` | 256 |
| `.text` | `0x3450d8-0x3451d8` | 256 |
| `.text` | `0x37726a-0x37736a` | 256 |
| `.text` | `0x3e9496-0x3e9596` | 256 |
| `.text` | `0x3f219e-0x3f229e` | 256 |
| `.text` | `0x42db93-0x42dc93` | 256 |
| `.text` | `0x431e93-0x431f93` | 256 |
| `.text` | `0x444867-0x444967` | 256 |
| `.text` | `0x462034-0x462134` | 256 |
| `.text` | `0x466734-0x466834` | 256 |
