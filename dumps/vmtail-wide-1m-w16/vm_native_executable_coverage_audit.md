# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3893238
- uncovered executable bytes: 1757802
- recovered range rows: 48815
- uncovered gaps: 3155

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3889126 | 1757802 | 68.87% | 48555 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0xfd39c-0xfeebc` | 6944 |
| `.text` | `0x1a0485-0x1a1fa3` | 6942 |
| `.text` | `0x3fab9e-0x3fc6bc` | 6942 |
| `.text` | `0x44d525-0x44f040` | 6939 |
| `.text` | `0x3c5b6a-0x3c7677` | 6925 |
| `.text` | `0x3490d8-0x34abc6` | 6894 |
| `.text` | `0x3635be-0x3650ab` | 6893 |
| `.text` | `0x2ecf3-0x307d0` | 6877 |
| `.text` | `0x1ad11e-0x1aebf9` | 6875 |
| `.text` | `0x366ab6-0x368588` | 6866 |
| `.text` | `0x3b0a15-0x3b24aa` | 6805 |
| `.text` | `0x30561e-0x307093` | 6773 |
| `.text` | `0x2df70e-0x2e117a` | 6764 |
| `.text` | `0x2bcba9-0x2be60e` | 6757 |
| `.text` | `0x13a809-0x13c266` | 6749 |
| `.text` | `0x41cbcb-0x41e61c` | 6737 |
| `.text` | `0x36959e-0x36afd2` | 6708 |
| `.text` | `0x1a90bb-0x1aaadd` | 6690 |
| `.text` | `0x1f860a-0x1fa01f` | 6677 |
| `.text` | `0x5748cd-0x5762d0` | 6659 |
| `.text` | `0x44ffdf-0x4519a6` | 6599 |
| `.text` | `0x29a8c9-0x29c26e` | 6565 |
| `.text` | `0x35708a-0x358a24` | 6554 |
| `.text` | `0x396fe1-0x398978` | 6551 |
| `.text` | `0x33987b-0x33b1f2` | 6519 |
| `.text` | `0x11abc1-0x11c52d` | 6508 |
| `.text` | `0x384a30-0x386394` | 6500 |
| `.text` | `0x378d6a-0x37a6c8` | 6494 |
| `.text` | `0x27b241-0x27cb8e` | 6477 |
| `.text` | `0x1a66bb-0x1a7ffe` | 6467 |
| `.text` | `0x47a8ee-0x47c22d` | 6463 |
| `.text` | `0x124f46-0x126851` | 6411 |
| `.text` | `0x24c17d-0x24da7f` | 6402 |
| `.text` | `0x325cbb-0x3275b6` | 6395 |
| `.text` | `0x28496e-0x286264` | 6390 |
| `.text` | `0x404cd1-0x4065ad` | 6364 |
| `.text` | `0x4561e3-0x457abc` | 6361 |
| `.text` | `0x13ee68-0x140711` | 6313 |
| `.text` | `0x28b2cb-0x28cb6f` | 6308 |
| `.text` | `0x20b59e-0x20ce34` | 6294 |
