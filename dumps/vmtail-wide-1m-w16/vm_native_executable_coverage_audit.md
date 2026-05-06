# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3640822
- uncovered executable bytes: 2010218
- recovered range rows: 45184
- uncovered gaps: 3078

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3636710 | 2010218 | 64.40% | 44924 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x2524bc-0x254abd` | 9729 |
| `.text` | `0x1c9955-0x1cbf51` | 9724 |
| `.text` | `0x481430-0x483a1a` | 9706 |
| `.text` | `0x3df280-0x3e185b` | 9691 |
| `.text` | `0x2b7975-0x2b9f30` | 9659 |
| `.text` | `0x3db5b9-0x3ddb5d` | 9636 |
| `.text` | `0x35648a-0x358a24` | 9626 |
| `.text` | `0x2a2119-0x2a468f` | 9590 |
| `.text` | `0x37816a-0x37a6c8` | 9566 |
| `.text` | `0x3a6339-0x3a8871` | 9528 |
| `.text` | `0x22f066-0x231586` | 9504 |
| `.text` | `0x416342-0x41883d` | 9467 |
| `.text` | `0x3ca479-0x3cc938` | 9407 |
| `.text` | `0x409fe5-0x40c488` | 9379 |
| `.text` | `0x28f04c-0x2914ea` | 9374 |
| `.text` | `0x2d5a69-0x2d7efd` | 9364 |
| `.text` | `0x445467-0x4478f4` | 9357 |
| `.text` | `0x4dc979-0x4dedf9` | 9344 |
| `.text` | `0x4e2579-0x4e49f9` | 9344 |
| `.text` | `0x1027ee-0x104c68` | 9338 |
| `.text` | `0x6ea90-0x70ef4` | 9316 |
| `.text` | `0x37a6ca-0x37cb28` | 9310 |
| `.text` | `0x1383a4-0x13a7f8` | 9300 |
| `.text` | `0x2c5264-0x2c7675` | 9233 |
| `.text` | `0x4e76f9-0x4e9ae0` | 9191 |
| `.text` | `0x41a840-0x41cbc6` | 9094 |
| `.text` | `0x215c33-0x217fac` | 9081 |
| `.text` | `0x429b17-0x42be7d` | 9062 |
| `.text` | `0x51fdc0-0x522120` | 9056 |
| `.text` | `0x39b7b1-0x39db0e` | 9053 |
| `.text` | `0x210042-0x212399` | 9047 |
| `.text` | `0x340e73-0x343193` | 8992 |
| `.text` | `0x3a0314-0x3a262e` | 8986 |
| `.text` | `0x3ec696-0x3ee99a` | 8964 |
| `.text` | `0x24b77d-0x24da7f` | 8962 |
| `.text` | `0x3d68a7-0x3d8b9b` | 8948 |
| `.text` | `0x334223-0x3364f8` | 8917 |
| `.text` | `0x28a8cb-0x28cb6f` | 8868 |
| `.text` | `0x2826ee-0x28494c` | 8798 |
| `.text` | `0x46a234-0x46c45b` | 8743 |
