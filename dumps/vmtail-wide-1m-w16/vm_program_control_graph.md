# VM Program Control Graph

This graph is built from solved MBA successor edges. It shows how recovered VM bytecode programs flow into themselves, into other VM programs, or out to a currently external/exit target. It is control-flow evidence, not final semantic intent.

## Summary

| metric | value |
| --- | --- |
| programs | 66 |
| solved successor edges | 499 |
| relation mix | intra_program:418,inter_program:60,external_or_exit:21 |
| inter-program edges | 60 |
| external/exit edges | 21 |

## Program Summary

| program | incoming | outgoing targets | intra | inter | external/exit |
| --- | --- | --- | --- | --- | --- |
| 000 | 000:6 | 000:6,external_or_exit:1 | 6 | 0 | 1 |
| 001 | 001:2 | 001:2,002:1 | 2 | 1 | 0 |
| 002 | 002:7,001:1 | 002:7,003:1 | 7 | 1 | 0 |
| 003 | 003:2,002:1 | 003:2,external_or_exit:1 | 2 | 0 | 1 |
| 004 | 004:3 | 004:3,005:1 | 3 | 1 | 0 |
| 005 | 004:1,005:1 | 005:1,006:1 | 1 | 1 | 0 |
| 006 | 005:1,006:1 | 006:1,external_or_exit:1 | 1 | 0 | 1 |
| 007 | 007:7 | 007:7,008:1 | 7 | 1 | 0 |
| 008 | 008:2,007:1 | 008:2,009:1 | 2 | 1 | 0 |
| 009 | 009:2,008:1 | 009:2,010:1 | 2 | 1 | 0 |
| 010 | 010:12,009:1 | 010:12,055:1,056:1,011:1 | 12 | 3 | 0 |
| 011 | 011:3,010:1 | 011:3,012:1 | 3 | 1 | 0 |
| 012 | 012:4,011:1 | 012:4,013:1 | 4 | 1 | 0 |
| 013 | 013:2,012:1 | 013:2,014:1 | 2 | 1 | 0 |
| 014 | 014:2,013:1 | 014:2,015:1 | 2 | 1 | 0 |
| 015 | 015:6,014:1 | 015:6,016:1 | 6 | 1 | 0 |
| 016 | 016:2,015:1 | 016:2,017:1 | 2 | 1 | 0 |
| 017 | 016:1,017:1 | 017:1,018:1 | 1 | 1 | 0 |
| 018 | 018:2,017:1 | 018:2,019:1 | 2 | 1 | 0 |
| 019 | 018:1,019:1 | 019:1,external_or_exit:1 | 1 | 0 | 1 |
| 020 | 020:2 | 020:2,external_or_exit:1 | 2 | 0 | 1 |
| 021 | 021:25 | 021:25,external_or_exit:1 | 25 | 0 | 1 |
| 022 | 022:4 | 022:4,023:1 | 4 | 1 | 0 |
| 023 | 023:4,022:1 | 023:4,024:1 | 4 | 1 | 0 |
| 024 | 024:2,023:1 | 024:2,external_or_exit:1 | 2 | 0 | 1 |
| 025 | 025:6 | 025:6,external_or_exit:1 | 6 | 0 | 1 |
| 026 | 026:12 | 026:12,027:1 | 12 | 1 | 0 |
| 027 | 026:1 | external_or_exit:1 | 0 | 0 | 1 |
| 028 | 028:8 | 028:8,external_or_exit:1 | 8 | 0 | 1 |
| 029 | 029:5 | 029:5,external_or_exit:1 | 5 | 0 | 1 |
| 030 | 030:4 | 030:4 | 4 | 0 | 0 |
| 031 | 031:1 | 031:1,external_or_exit:1 | 1 | 0 | 1 |
| 032 | 032:14 | 032:14,033:1,external_or_exit:1 | 14 | 1 | 1 |
| 033 | 032:1,034:1 | 034:1 | 0 | 1 | 0 |
| 034 | 033:1 | 033:1 | 0 | 1 | 0 |
| 035 | 035:12,040:1 | 035:12,external_or_exit:1 | 12 | 0 | 1 |
| 036 | 036:2 | 036:2,037:1 | 2 | 1 | 0 |
| 037 | 036:1,037:1 | 037:1,038:1 | 1 | 1 | 0 |
| 038 | 037:1 | 039:1 | 0 | 1 | 0 |
| 039 | 039:3,038:1 | 039:3,040:1 | 3 | 1 | 0 |
| 040 | 039:1,040:1 | 040:1,035:1 | 1 | 1 | 0 |
| 041 | 041:12,055:1 | 041:12,055:1 | 12 | 1 | 0 |
| 042 | 042:27 | 042:27,043:1 | 27 | 1 | 0 |
| 043 | 043:7,042:1 | 043:7,048:1,052:1,044:1 | 7 | 3 | 0 |
| 044 | 043:1 | 045:1 | 0 | 1 | 0 |
| 045 | 045:3,044:1 | 045:3,external_or_exit:1 | 3 | 0 | 1 |
| 046 | 046:17 | 046:17,047:1 | 17 | 1 | 0 |
| 047 | 046:1,047:1 | 047:1,external_or_exit:1 | 1 | 0 | 1 |
| 048 | 048:12,043:1,054:1 | 048:12,049:1 | 12 | 1 | 0 |
| 049 | 048:1 | external_or_exit:1 | 0 | 0 | 1 |
| 050 | 050:14 | 050:14,051:1 | 14 | 1 | 0 |
| 051 | 050:1,051:1 | 051:1,external_or_exit:1 | 1 | 0 | 1 |
| 052 | 052:4,043:1 | 052:4,external_or_exit:1 | 4 | 0 | 1 |
| 053 | 053:7,054:1 | 053:7,054:2 | 7 | 2 | 0 |
| 054 | 053:2 | 053:1,048:1 | 0 | 2 | 0 |
| 055 | 055:43,010:1,041:1 | 055:43,041:1,external_or_exit:1 | 43 | 1 | 1 |
| 056 | 056:21,010:1,060:1,062:1,065:1 | 056:21,057:1 | 21 | 1 | 0 |
| 057 | 056:1 | 058:1 | 0 | 1 | 0 |
| 058 | 057:1 | external_or_exit:1 | 0 | 0 | 1 |
| 059 | 059:22,060:1 | 059:22,060:2 | 22 | 2 | 0 |
| 060 | 059:2,060:2 | 060:2,059:1,056:1 | 2 | 2 | 0 |
| 061 | 061:20,062:1 | 061:20,062:2 | 20 | 2 | 0 |
| 062 | 061:2,062:2 | 062:2,061:1,056:1 | 2 | 2 | 0 |
| 063 | 063:25,064:1,065:1 | 063:25,064:2,065:1 | 25 | 3 | 0 |
| 064 | 063:2 | 063:1,065:1 | 0 | 2 | 0 |
| 065 | 065:4,063:1,064:1 | 065:4,063:1,056:1 | 4 | 2 | 0 |

## Inter-Program Edges

| source | case | target_program | target_ip | edge | semantic |
| --- | --- | --- | --- | --- | --- |
| 001 | 0xd43e0 | 002 | 0xd476e | decoded_control | next = table[354], ip += 0x20d |
| 002 | 0xd564f | 003 | 0xd5a12 | decoded_control | next = table[354], ip += 0x23e |
| 004 | 0xd77d9 | 005 | 0xda38f | decoded_control | next = table[171], ip += 0x2aa5 |
| 005 | 0xda4be | 006 | 0xdac57 | decoded_control | next = table[165], ip += 0x670 |
| 007 | 0x11bb8f | 008 | 0x11bc28 | decoded_control | next = table[171], ip += 0x54 |
| 008 | 0x11bec4 | 009 | 0x11bf5d | decoded_control | next = table[354], ip += 0x54 |
| 009 | 0x11c211 | 010 | 0x11c2aa | decoded_control | next = table[165], ip += 0x54 |
| 010 | 0x11da4b | 055 | 0x33f278 | decoded_control | sampled operand footprint 0xa; observed target table[323], delta +0x221770 |
| 010 | 0x11dc37 | 056 | 0x3603af | decoded_control | sampled operand footprint 0xa; observed target table[86], delta +0x2426ba |
| 010 | 0x11de27 | 011 | 0x11de9f | decoded_control | next = table[171], ip += 0x66 |
| 011 | 0x11e28a | 012 | 0x11e574 | decoded_control | next = table[165], ip += 0x1d9 |
| 012 | 0x11eddd | 013 | 0x11ef65 | decoded_control | next = table[171], ip += 0x77 |
| 013 | 0x11f3a9 | 014 | 0x1209d2 | decoded_control | next = table[354], ip += 0x1518 |
| 014 | 0x120d75 | 015 | 0x1210d6 | decoded_control | next = table[165], ip += 0x238 |
| 015 | 0x121a8a | 016 | 0x121b31 | decoded_control | next = table[171], ip += 0x77 |
| 016 | 0x121ed4 | 017 | 0x122074 | decoded_control | next = table[354], ip += 0x77 |
| 017 | 0x1221a4 | 018 | 0x122344 | decoded_control | next = table[171], ip += 0x77 |
| 018 | 0x122626 | 019 | 0x122a46 | decoded_control | next = table[171], ip += 0x380 |
| 022 | 0x1770f7 | 023 | 0x177353 | decoded_control | next = table[354], ip += 0x57 |
| 023 | 0x177af9 | 024 | 0x179f43 | decoded_control | next = table[354], ip += 0x22c1 |
| 026 | 0x1a5d8c | 027 | 0x1a5f3d | decoded_control | next = table[165], ip += 0x55 |
| 032 | 0x249739 | 033 | 0x26cd71 | decoded_control | sampled operand footprint 0xa; observed target table[86], delta +0x2341b |
| 033 | 0x26cd71 | 034 | 0x26db07 | decoded_control | next = table[165], ip += 0xbec |
| 034 | 0x26db07 | 033 | 0x26cd71 | decoded_control | sampled operand footprint 0x6; observed target table[86], delta -0x2306 |
| 036 | 0x2bef37 | 037 | 0x2bf297 | decoded_control | next = table[165], ip += 0x24f |
| 037 | 0x2bf3c6 | 038 | 0x2bf97c | decoded_control | next = table[165], ip += 0x48d |
| 038 | 0x2bf97c | 039 | 0x2bfe6f | decoded_control | next = table[354], ip += 0x4c3 |
| 039 | 0x2c0468 | 040 | 0x2c1156 | decoded_control | next = table[171], ip += 0xbc5 |
| 040 | 0x2c1285 | 035 | 0x292f3e | decoded_control | next = table[171], ip -= 0x2e48f |
| 041 | 0x315cc8 | 055 | 0x343569 | decoded_control | sampled operand footprint 0x6; observed target table[310], delta +0x2cef7 |
| 042 | 0x31dc4f | 043 | 0x31df8f | decoded_control | next = table[171], ip += 0x1fa |
| 043 | 0x31df8f | 048 | 0x334a3d | decoded_control | sampled operand footprint 0xa; observed target table[42], delta +0x169eb |
| 043 | 0x31e55c | 052 | 0x33b647 | decoded_control | sampled operand footprint 0xa; observed target table[42], delta +0x1d02e |
| 043 | 0x31e77f | 044 | 0x31ea5c | decoded_control | next = table[354], ip += 0x21a |
| 044 | 0x31ea5c | 045 | 0x31eae4 | decoded_control | next = table[354], ip += 0x58 |
| 046 | 0x333730 | 047 | 0x333882 | decoded_control | next = table[171], ip += 0x55 |
| 048 | 0x3369fc | 049 | 0x336dc8 | decoded_control | next = table[165], ip += 0x55 |
| 050 | 0x33a233 | 051 | 0x33a385 | decoded_control | next = table[354], ip += 0x55 |
| 053 | 0x33e03b | 054 | 0x33e8de | decoded_control | next = table[165], ip += 0x792 |
| 053 | 0x33e718 | 054 | 0x33e889 | decoded_control | next = table[165], ip += 0x60 |
| 054 | 0x33e889 | 053 | 0x33dd15 | decoded_control | next = table[165], ip -= 0xbc1 |
| 054 | 0x33e8de | 048 | 0x3369fc | decoded_control | sampled operand footprint 0x6; observed target table[169], delta -0x7fe6 |
| 055 | 0x3433ad | 041 | 0x30e872 | decoded_control | sampled operand footprint 0xa; observed target table[42], delta -0x34ced |
| 056 | 0x365190 | 057 | 0x365458 | decoded_control | next = table[165], ip += 0x21a |
| 057 | 0x365458 | 058 | 0x3654e0 | decoded_control | next = table[354], ip += 0x58 |
| 059 | 0x369286 | 060 | 0x369b28 | decoded_control | next = table[354], ip += 0x791 |
| 059 | 0x369962 | 060 | 0x369ad3 | decoded_control | next = table[354], ip += 0x60 |
| 060 | 0x369ad3 | 059 | 0x368f60 | decoded_control | next = table[165], ip -= 0xbc0 |
| 060 | 0x369ee9 | 056 | 0x364c72 | decoded_control | sampled operand footprint 0x6; observed target table[310], delta -0x542a |
| 061 | 0x36ccd7 | 062 | 0x36d579 | decoded_control | next = table[354], ip += 0x791 |
| 061 | 0x36d3b3 | 062 | 0x36d524 | decoded_control | next = table[354], ip += 0x60 |
| 062 | 0x36d524 | 061 | 0x36c9b1 | decoded_control | next = table[354], ip -= 0xbc0 |
| 062 | 0x36d93a | 056 | 0x364e5f | decoded_control | sampled operand footprint 0x6; observed target table[310], delta -0x8c8e |
| 063 | 0x37078a | 065 | 0x371a63 | decoded_control | next = table[165], ip += 0x12c3 |
| 063 | 0x37142c | 064 | 0x37171c | decoded_control | next = table[354], ip += 0x2a5 |
| 063 | 0x371488 | 064 | 0x3716c7 | decoded_control | next = table[354], ip += 0x139 |
| 064 | 0x3716c7 | 063 | 0x37142c | decoded_control | next = table[354], ip -= 0x2e8 |
| 064 | 0x37171c | 065 | 0x3717c4 | decoded_control | next = table[165], ip += 0x78 |
| 065 | 0x371a30 | 063 | 0x370256 | decoded_control | next = table[171], ip -= 0x17ed |
| 065 | 0x371e24 | 056 | 0x36504c | decoded_control | sampled operand footprint 0x6; observed target table[310], delta -0xcf8b |

## Artifacts

- Edge list: `dumps/vmtail-wide-1m-w16/vm_program_control_graph_edges.tsv`
- Program summary: `dumps/vmtail-wide-1m-w16/vm_program_control_graph_summary.tsv`
