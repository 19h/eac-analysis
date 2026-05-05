# Binary Data Sections

Native C-generated carrier for allocatable non-executable ELF data and the embedded VM dispatch table.

| metric | value |
| --- | ---: |
| alloc sections tracked | 29 |
| emitted data sections | 22 |
| emitted data bytes | 0xe63f7 |
| bss/nobits sections tracked | 2 |
| string refs indexed | 2917 |
| indexed string bytes | 0x10b64 |
| dispatch table entries | 360 |

| section | vaddr | file offset | size | emitted | writable | executable | nobits |
| --- | ---: | ---: | ---: | --- | --- | --- | --- |
| `.note.gnu.build-id` | `0x200` | `0x200` | `0x24` | `yes` | `no` | `no` | `no` |
| `.hash` | `0x228` | `0x228` | `0x97c` | `yes` | `no` | `no` | `no` |
| `.gnu.hash` | `0xba8` | `0xba8` | `0x408` | `yes` | `no` | `no` | `no` |
| `.dynsym` | `0xfb0` | `0xfb0` | `0x2010` | `yes` | `no` | `no` | `no` |
| `.dynstr` | `0x2fc0` | `0x2fc0` | `0x1306` | `yes` | `no` | `no` | `no` |
| `.gnu.version` | `0x42c6` | `0x42c6` | `0x2ac` | `yes` | `no` | `no` | `no` |
| `.gnu.version_d` | `0x4578` | `0x4578` | `0x38` | `yes` | `no` | `no` | `no` |
| `.gnu.version_r` | `0x45b0` | `0x45b0` | `0x170` | `yes` | `no` | `no` | `no` |
| `.rela.dyn` | `0x4720` | `0x4720` | `0x19cf8` | `yes` | `no` | `no` | `no` |
| `.rela.plt` | `0x1e418` | `0x1e418` | `0x17b8` | `yes` | `no` | `no` | `no` |
| `.init` | `0x1fbd0` | `0x1fbd0` | `0x17` | `no` | `no` | `yes` | `no` |
| `.plt` | `0x1fbf0` | `0x1fbf0` | `0xfe0` | `no` | `no` | `yes` | `no` |
| `.plt.got` | `0x20bd0` | `0x20bd0` | `0x10` | `no` | `no` | `yes` | `no` |
| `.text` | `0x20c00` | `0x20c00` | `0x562a50` | `no` | `no` | `yes` | `no` |
| `.fini` | `0x583650` | `0x583650` | `0x9` | `no` | `no` | `yes` | `no` |
| `.rodata` | `0x583680` | `0x583680` | `0x6d228` | `yes` | `no` | `no` | `no` |
| `.stapsdt.base` | `0x5f08a8` | `0x5f08a8` | `0x1` | `yes` | `no` | `no` | `no` |
| `.eh_frame_hdr` | `0x5f08ac` | `0x5f08ac` | `0xc35c` | `yes` | `no` | `no` | `no` |
| `.eh_frame` | `0x5fcc08` | `0x5fcc08` | `0x3a5a8` | `yes` | `no` | `no` | `no` |
| `.gcc_except_table` | `0x6371b0` | `0x6371b0` | `0x50e8` | `yes` | `no` | `no` | `no` |
| `.tbss` | `0x83c360` | `0x63c360` | `0x20` | `no` | `yes` | `no` | `yes` |
| `.init_array` | `0x83c360` | `0x63c360` | `0xb0` | `yes` | `yes` | `no` | `no` |
| `.fini_array` | `0x83c410` | `0x63c410` | `0x10` | `yes` | `yes` | `no` | `no` |
| `.data.rel.ro` | `0x83c420` | `0x63c420` | `0xc260` | `yes` | `yes` | `no` | `no` |
| `.dynamic` | `0x848680` | `0x648680` | `0x240` | `yes` | `yes` | `no` | `no` |
| `.got` | `0x8488c0` | `0x6488c0` | `0x728` | `yes` | `yes` | `no` | `no` |
| `.got.plt` | `0x849000` | `0x649000` | `0x800` | `yes` | `yes` | `no` | `no` |
| `.data` | `0x849800` | `0x649800` | `0x998` | `yes` | `yes` | `no` | `no` |
| `.bss` | `0x84a1a0` | `0x64a198` | `0x8540` | `no` | `yes` | `no` | `yes` |
