# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 3846006
- uncovered executable bytes: 1805034
- recovered range rows: 48179
- uncovered gaps: 3142

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 3841894 | 1805034 | 68.03% | 47919 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x1cf601-0x1d1223` | 7202 |
| `.text` | `0x37311b-0x374d29` | 7182 |
| `.text` | `0x5746cd-0x5762d0` | 7171 |
| `.text` | `0x3bedb5-0x3c09b1` | 7164 |
| `.text` | `0x20de40-0x20fa39` | 7161 |
| `.text` | `0x2d1107-0x2d2cf4` | 7149 |
| `.text` | `0x481e30-0x483a1a` | 7146 |
| `.text` | `0x132ba5-0x134781` | 7132 |
| `.text` | `0x117fbf-0x119b8e` | 7119 |
| `.text` | `0x485662-0x487214` | 7090 |
| `.text` | `0x3dbfb9-0x3ddb5d` | 7076 |
| `.text` | `0x3d2eff-0x3d4a95` | 7062 |
| `.text` | `0x35ce8a-0x35ea08` | 7038 |
| `.text` | `0x4bd57b-0x4bf0f0` | 7029 |
| `.text` | `0x533aac-0x535610` | 7012 |
| `.text` | `0x1aec5a-0x1b07a5` | 6987 |
| `.text` | `0x246c18-0x248752` | 6970 |
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
| `.text` | `0x44ffdf-0x4519a6` | 6599 |
| `.text` | `0x29a8c9-0x29c26e` | 6565 |
| `.text` | `0x35708a-0x358a24` | 6554 |
| `.text` | `0x396fe1-0x398978` | 6551 |
