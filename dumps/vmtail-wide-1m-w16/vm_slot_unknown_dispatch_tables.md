# Slot-Unknown Dispatch Tables

These tables cover opcode classes whose dispatch slot formula was not recovered. They do not solve the formula; they preserve the exact observed bytecode rows and concrete targets so the readable program artifacts can distinguish exact row evidence from missing dispatch algebra.

## Summary

| metric | value |
| --- | --- |
| slot-unknown entries | 23 |
| observed rows | 164 |
| programs touched | 50 |
| output C | dumps/vmtail-wide-1m-w16/vm_slot_unknown_dispatch_tables.c |

## Entries

| entry | rows | targets | deltas | status |
| --- | --- | --- | --- | --- |
| 9 | 1 | 256:1 | +0x5:1 | exact_observed_table_no_formula |
| 69 | 1 | 310:1 | +0xd:1 | exact_observed_table_no_formula |
| 75 | 14 | 165:8,354:4,171:2 | +0x30:2,+0x288:2,+0x28b:2,+0x23e:1,+0x2aa5:1,+0x1d9:1,-0x6d:1,+0x24f:1,+0x4f0e:1,+0x211:1,+0x60:1 | exact_observed_table_no_formula |
| 112 | 2 | 160:1,108:1 | +0x5:2 | exact_observed_table_no_formula |
| 117 | 18 | 354:9,165:8,171:1 | -0x40:5,-0x2ce:2,-0x584:2,-0xbc0:2,+0x54:1,+0x55:1,+0x22:1,-0x767:1,-0xbc1:1,-0x50d:1,-0x55d:1 | exact_observed_table_no_formula |
| 142 | 1 | 83:1 | +0xa:1 | exact_observed_table_no_formula |
| 145 | 13 | 354:6,171:4,165:3 | +0x30:3,+0x77:2,+0x28b:2,+0xbec:1,+0x74b:1,+0x288:1,+0x60:1,+0x279:1,+0x139:1 | exact_observed_table_no_formula |
| 175 | 1 | 310:1 | +0x2cef7:1 | exact_observed_table_no_formula |
| 188 | 1 | 173:1 | +0x5:1 | exact_observed_table_no_formula |
| 195 | 3 | 310:2,86:1 | -0x2306:1,-0x542a:1,-0x8c8e:1 | exact_observed_table_no_formula |
| 210 | 13 | 171:6,354:5,165:2 | +0x30:4,+0x28b:3,+0x288:2,+0x670:1,+0x77:1,+0x211:1,+0x60:1 | exact_observed_table_no_formula |
| 225 | 1 | 144:1 | +0x5:1 | exact_observed_table_no_formula |
| 229 | 1 | 352:1 | +0x5:1 | exact_observed_table_no_formula |
| 246 | 13 | 354:6,165:5,171:2 | +0x21a:2,+0x288:2,+0x28b:2,+0x23e:1,+0x57:1,+0x724:1,+0x792:1,+0x211:1,+0x791:1,+0x78:1 | exact_observed_table_no_formula |
| 259 | 1 | 28:1 | +0xa:1 | exact_observed_table_no_formula |
| 266 | 16 | 171:7,354:5,165:4 | -0x40:4,-0x55d:2,-0x2ce:2,+0x54:1,+0x66:1,-0x2e48f:1,-0x557:1,-0x566:1,-0x78e:1,-0x4e0:1,-0x2e8:1 | exact_observed_table_no_formula |
| 276 | 1 | 157:1 | +0xa:1 | exact_observed_table_no_formula |
| 299 | 2 | 169:1,310:1 | -0x7fe6:1,-0xcf8b:1 | exact_observed_table_no_formula |
| 302 | 10 | 171:5,165:4,354:1 | -0x2ce:3,+0x55:2,-0x40:2,-0x24c:1,-0x55d:1,+0x22:1 | exact_observed_table_no_formula |
| 308 | 19 | 171:12,354:7 | -0x40:3,-0x2ce:3,-0x4e6:2,-0x584:2,+0x54:1,+0x20:1,+0x22c1:1,-0x9de:1,-0x51a4:1,+0x55:1,-0x55d:1,-0x5b6:1,-0x17ed:1 | exact_observed_table_no_formula |
| 316 | 13 | 354:5,165:4,171:4 | +0x30:3,+0x288:2,+0x2d:2,+0x211:2,-0x3c4:1,+0x4c3:1,+0x58:1,+0x12c3:1 | exact_observed_table_no_formula |
| 334 | 18 | 354:9,171:5,165:4 | +0x2f:2,+0x288:2,+0x30:2,+0x20d:1,+0x1518:1,+0x238:1,+0x77:1,+0x380:1,+0x48d:1,+0xbc5:1,+0x1fa:1,+0x28b:1,+0x58:1,+0x791:1,+0x2a5:1 | exact_observed_table_no_formula |
| 358 | 1 | 144:1 | +0x5:1 | exact_observed_table_no_formula |

## Caveat

`exact_observed_table_no_formula` is evidence-backed for recovered rows only. It is not a symbolic dispatch formula and does not prove unobserved byte patterns.
