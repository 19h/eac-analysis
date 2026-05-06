# VM String/Data Reference Context

This maps every recovered string/data reference embedded in folded VM programs to the exact VM-op row when possible, otherwise the nearest VM-op row in the same program. It is a role-discovery aid: it shows where each string enters the VM bytecode stream, but final semantic roles still require annotating the surrounding operation sequence.

## Summary

| metric | value |
| --- | --- |
| references | 52 |
| exact row matches | 52 |
| nearest row matches | 0 |
| programs with references | 18 |
| refs by program | 020:1,021:1,022:1,031:1,034:1,039:1,040:1,041:5,042:4,045:1,046:2,048:3,052:2,055:17,059:4,061:2,062:1,063:4 |

## References

| program | site | text | status | row | opcode | target | nearby |
| --- | --- | --- | --- | --- | --- | --- | --- |
| 020 | 0x128e61 | FILTERS_MODE_IPREFETCH | exact_row | 0x128e60..0x128e64 | vmop_333_plus0x4_state_add_const_slot_multi_path | 18@0x7be9b:1 | 0x128e54:vmop_064_plus0x4_state_add_const_slot_multi_path->168@0x9aa83:1 \|\| 0x128e58:vmop_168_plus0x4_state_add_con... |
| 021 | 0x172f32 | pthread_mutexattr_init | exact_row | 0x172f31..0x172f35 | vmop_337_plus0x4_state_add_const_slot_multi_path | 49@0x82820:1 | 0x172f26:vmop_297_plus0x3_state_add_const_slot_multi_path->350@0xc1926:1 \|\| 0x172f29:vmop_350_plus0x4_state_add_con... |
| 022 | 0x1772f2 | unsigned __int128 | exact_row | 0x1772f0..0x1772f5 | vmop_330_plus0x5_state_add_const_slot_u16_0 | 301@0xb708d:1 | 0x1772e5:vmop_185_plus0x3_state_add_const_slot_multi_path->322@0xbb3c9:1 \|\| 0x1772e8:vmop_322_plus0x4_state_add_con... |
| 031 | 0x2318ea | _ZGTtdlPv | exact_row | 0x2318e8..0x2318eb | vmop_199_plus0x3_state_add_const_slot_multi_path | 3@0x78c77:1 | 0x2318dc:vmop_043_plus0x4_state_add_const_slot_mba_stateful->114@0x90319:1 \|\| 0x2318e0:vmop_114_plus0x4_state_add_c... |
| 034 | 0x26db58 | YYYYY | exact_row | 0x26db56..0x26db59 | vmop_028_plus0x3_state_add_const_slot_u16_0 | 124@0x91e81:4 | 0x26db4b:vmop_301_plus0x5_state_add_const_slot_mba_stateful->108@0x8f24b:4 \|\| 0x26db50:vmop_108_plus0x2_state_add_c... |
| 039 | 0x2c0363 | socket | exact_row | 0x2c0362..0x2c0366 | vmop_172_plus0x4_state_add_const_slot_mba_stateful | 320@0xbada5:1 | 0x2c0355:vmop_258_plus0x4_state_add_const_slot_multi_path->215@0xa4609:1 \|\| 0x2c0359:vmop_215_plus0x3_state_mixed_s... |
| 040 | 0x2c13a3 | basic_string::append | exact_row | 0x2c139f..0x2c13a5 | vmop_140_plus0x6_state_add_const_slot_multi_path | 268@0xb0007:1 | 0x2c1395:vmop_049_plus0x5_state_add_const_slot_mba_stateful->257@0xadbfd:1 \|\| 0x2c139a:vmop_257_plus0x2_state_add_c... |
| 041 | 0x30eebd | _ITM_registerTMCloneTable | exact_row | 0x30eeba..0x30eeea | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown | 165@0x9a24c | 0x30eeab:vmop_168_plus0x4_state_add_const_slot_multi_path->345@0xc02e4:14 \|\| 0x30eeaf:vmop_345_plus0x6_state_add_co... |
| 041 | 0x30eee5 | __freelocale | exact_row | 0x30eeba..0x30eeea | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown | 165@0x9a24c | 0x30eeab:vmop_168_plus0x4_state_add_const_slot_multi_path->345@0xc02e4:14 \|\| 0x30eeaf:vmop_345_plus0x6_state_add_co... |
| 041 | 0x30f17b | blake3_hasher_finalize | exact_row | 0x30f179..0x30f17c | vmop_199_plus0x3_state_add_const_slot_multi_path | 37@0x80685:4 | 0x30f16b:vmop_239_plus0x6_state_add_const_slot_mba_stateful->196@0x9fbcd:4 \|\| 0x30f171:vmop_196_plus0x4_state_add_c... |
| 041 | 0x310859 | unsigned __int128 | exact_row | 0x310857..0x31085c | vmop_330_plus0x5_state_add_const_slot_u16_0 | 49@0x82820:1 | 0x31084c:vmop_281_plus0x4_state_add_const_slot_multi_path->332@0xbd36d:1 \|\| 0x310850:vmop_332_plus0x4_state_add_con... |
| 041 | 0x315809 | zydis_decoder_tree_root | exact_row | 0x310dba..0x315cc8 | vmop_075_minus0x6d_sampled_backedge_slot_unknown | 354@0xc2241 | 0x310dad:vmop_114_plus0x4_state_add_const_slot_multi_path->196@0x9fbcd:92 \|\| 0x310db1:vmop_196_plus0x4_state_add_co... |
| 042 | 0x31b31e | _ITM_registerTMCloneTable | exact_row | 0x31b31b..0x31b34b | vmop_316_minus0x3c4_sampled_backedge_slot_unknown | 165@0x9a24c | 0x31b30f:vmop_307_plus0x3_state_add_const_slot_u16_1_sub_const->168@0x9aa83:8 \|\| 0x31b312:vmop_168_plus0x4_state_ad... |
| 042 | 0x31b346 | __freelocale | exact_row | 0x31b31b..0x31b34b | vmop_316_minus0x3c4_sampled_backedge_slot_unknown | 165@0x9a24c | 0x31b30f:vmop_307_plus0x3_state_add_const_slot_u16_1_sub_const->168@0x9aa83:8 \|\| 0x31b312:vmop_168_plus0x4_state_ad... |
| 042 | 0x31c008 | _ITM_registerTMCloneTable | exact_row | 0x31c005..0x31c035 | vmop_075_minus0x6d_sampled_backedge_slot_unknown | 165@0x9a24c | 0x31bff7:vmop_253_plus0x6_state_add_const_slot_mba_stateful->18@0x7be9b:8 \|\| 0x31bffd:vmop_018_plus0x3_state_add_co... |
| 042 | 0x31c030 | __freelocale | exact_row | 0x31c005..0x31c035 | vmop_075_minus0x6d_sampled_backedge_slot_unknown | 165@0x9a24c | 0x31bff7:vmop_253_plus0x6_state_add_const_slot_mba_stateful->18@0x7be9b:8 \|\| 0x31bffd:vmop_018_plus0x3_state_add_co... |
| 045 | 0x31edb4 | pthread_cond_wait | exact_row | 0x31edb3..0x31edb7 | vmop_337_plus0x4_state_add_const_slot_multi_path | 301@0xb708d:1 | 0x31eda7:vmop_208_plus0x5_state_add_const_slot_multi_path->215@0xa4609:1 \|\| 0x31edac:vmop_215_plus0x3_state_mixed_s... |
| 046 | 0x331948 | _ITM_registerTMCloneTable | exact_row | 0x331945..0x331975 | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown | 171@0x9b4b3 | 0x331939:vmop_199_plus0x3_state_add_const_slot_multi_path->258@0xadf2c:18 \|\| 0x33193c:vmop_258_plus0x4_state_add_co... |
| 046 | 0x331970 | __freelocale | exact_row | 0x331945..0x331975 | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown | 171@0x9b4b3 | 0x331939:vmop_199_plus0x3_state_add_const_slot_multi_path->258@0xadf2c:18 \|\| 0x33193c:vmop_258_plus0x4_state_add_co... |
| 048 | 0x334c7e | _ITM_registerTMCloneTable | exact_row | 0x334c7b..0x334cab | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown | 354@0xc2241 | 0x334c6d:vmop_185_plus0x3_state_add_const_slot_multi_path->345@0xc02e4:15 \|\| 0x334c70:vmop_345_plus0x6_state_add_co... |
| 048 | 0x334ca6 | __freelocale | exact_row | 0x334c7b..0x334cab | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown | 354@0xc2241 | 0x334c6d:vmop_185_plus0x3_state_add_const_slot_multi_path->345@0xc02e4:15 \|\| 0x334c70:vmop_345_plus0x6_state_add_co... |
| 048 | 0x336b3c | long double | exact_row | 0x336b3c..0x336b3f | vmop_028_plus0x3_state_add_const_slot_u16_0 | 220@0xa522e:1 | 0x336b2f:vmop_048_plus0x5_state_add_const_slot_multi_path->30@0x7e849:1 \|\| 0x336b34:vmop_030_plus0x4_state_add_cons... |
| 052 | 0x33b7f2 | dropping unexpected ChangeCipherSpec | exact_row | 0x33b7f2..0x33b7f5 | vmop_066_plus0x3_state_add_const_slot_multi_path | 301@0xb708d:1 | 0x33b7e6:vmop_332_plus0x4_state_add_const_slot_multi_path->180@0x9cf32:1 \|\| 0x33b7ea:vmop_180_plus0x4_state_mixed_s... |
| 052 | 0x33c3d4 | GLIBC_2.17 | exact_row | 0x33be94..0x33c5b8 | vmop_246_plus0x78_sampled_long_or_sparse_slot_unknown | 171@0x9b4b3 | 0x33be84:vmop_239_plus0x6_state_add_const_slot_mba_stateful->105@0x8e6b4:5 \|\| 0x33be8a:vmop_105_plus0x5_state_add_c... |
| 055 | 0x33f6e3 | _ITM_registerTMCloneTable | exact_row | 0x33f6e0..0x33f710 | vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown | 171@0x9b4b3 | 0x33f6d3:vmop_196_plus0x4_state_add_const_slot_multi_path->347@0xc088d:6 \|\| 0x33f6d7:vmop_347_plus0x4_state_add_con... |
| 055 | 0x33f70b | __freelocale | exact_row | 0x33f6e0..0x33f710 | vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown | 171@0x9b4b3 | 0x33f6d3:vmop_196_plus0x4_state_add_const_slot_multi_path->347@0xc088d:6 \|\| 0x33f6d7:vmop_347_plus0x4_state_add_con... |
| 055 | 0x33f7c5 | NSt7__cxx118time_getIwSt19istreambuf_iteratorIwSt11char_traitsIwEEEE | exact_row | 0x33f7c2..0x33f7c6 | vmop_189_plus0x4_state_add_const_slot_mba_stateful | 124@0x91e81:1 | 0x33f7b8:vmop_079_plus0x5_state_add_const_slot_multi_path->108@0x8f24b:1 \|\| 0x33f7bd:vmop_108_plus0x2_state_add_con... |
| 055 | 0x340196 | _ITM_registerTMCloneTable | exact_row | 0x340193..0x3401c3 | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown | 171@0x9b4b3 | 0x340186:vmop_172_plus0x4_state_add_const_slot_mba_stateful->189@0x9e7af:11 \|\| 0x34018a:vmop_189_plus0x4_state_add_... |
| 055 | 0x3401be | __freelocale | exact_row | 0x340193..0x3401c3 | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown | 171@0x9b4b3 | 0x340186:vmop_172_plus0x4_state_add_const_slot_mba_stateful->189@0x9e7af:11 \|\| 0x34018a:vmop_189_plus0x4_state_add_... |
| 055 | 0x3403f3 | /home/richard/code/mbedtls/library/ssl_tls.c | exact_row | 0x3403f1..0x3403f4 | vmop_066_plus0x3_state_add_const_slot_multi_path | 37@0x80685:3 | 0x3403e3:vmop_200_plus0x6_state_add_const_slot_const_or_affine->258@0xadf2c:3 \|\| 0x3403e9:vmop_258_plus0x4_state_ad... |
| 055 | 0x3408e1 | pthread_cond_timedwait | exact_row | 0x3406cb..0x340953 | vmop_316_minus0x3c4_sampled_backedge_slot_unknown | 354@0xc2241 | 0x3406bf:vmop_092_plus0x4_state_add_const_slot_multi_path->215@0xa4609:3 \|\| 0x3406c3:vmop_215_plus0x3_state_mixed_s... |
| 055 | 0x340f1e | _ITM_registerTMCloneTable | exact_row | 0x340f1b..0x340f4b | vmop_075_minus0x6d_sampled_backedge_slot_unknown | 165@0x9a24c | 0x340f0d:vmop_028_plus0x3_state_add_const_slot_u16_0->345@0xc02e4:18 \|\| 0x340f10:vmop_345_plus0x6_state_add_const_s... |
| 055 | 0x340f46 | __freelocale | exact_row | 0x340f1b..0x340f4b | vmop_075_minus0x6d_sampled_backedge_slot_unknown | 165@0x9a24c | 0x340f0d:vmop_028_plus0x3_state_add_const_slot_u16_0->345@0xc02e4:18 \|\| 0x340f10:vmop_345_plus0x6_state_add_const_s... |
| 055 | 0x341a48 | _ITM_registerTMCloneTable | exact_row | 0x341a45..0x341a75 | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown | 354@0xc2241 | 0x341a38:vmop_172_plus0x4_state_add_const_slot_mba_stateful->189@0x9e7af:11 \|\| 0x341a3c:vmop_189_plus0x4_state_add_... |
| 055 | 0x341a70 | __freelocale | exact_row | 0x341a45..0x341a75 | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown | 354@0xc2241 | 0x341a38:vmop_172_plus0x4_state_add_const_slot_mba_stateful->189@0x9e7af:11 \|\| 0x341a3c:vmop_189_plus0x4_state_add_... |
| 055 | 0x34230a | pthread_mutex_destroy | exact_row | 0x342309..0x34230d | vmop_172_plus0x4_state_add_const_slot_mba_stateful | 320@0xbada5:1 | 0x3422fc:vmop_239_plus0x6_state_add_const_slot_mba_stateful->340@0xbf435:1 \|\| 0x342302:vmop_340_plus0x4_state_add_c... |
| 055 | 0x3427d0 | _ITM_registerTMCloneTable | exact_row | 0x3427cd..0x3427fd | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown | 171@0x9b4b3 | 0x3427bf:vmop_140_plus0x6_state_add_const_slot_multi_path->28@0x7e390:19 \|\| 0x3427c5:vmop_028_plus0x3_state_add_con... |
| 055 | 0x3427f8 | __freelocale | exact_row | 0x3427cd..0x3427fd | vmop_210_plus0x30_sampled_long_or_sparse_slot_unknown | 171@0x9b4b3 | 0x3427bf:vmop_140_plus0x6_state_add_const_slot_multi_path->28@0x7e390:19 \|\| 0x3427c5:vmop_028_plus0x3_state_add_con... |
| 055 | 0x343f0f | _ITM_registerTMCloneTable | exact_row | 0x343f0c..0x343f3c | vmop_316_minus0x3c4_sampled_backedge_slot_unknown | 354@0xc2241 | 0x343f00:vmop_189_plus0x4_state_add_const_slot_mba_stateful->297@0xb64d7:11 \|\| 0x343f04:vmop_297_plus0x3_state_add_... |
| 055 | 0x343f37 | __freelocale | exact_row | 0x343f0c..0x343f3c | vmop_316_minus0x3c4_sampled_backedge_slot_unknown | 354@0xc2241 | 0x343f00:vmop_189_plus0x4_state_add_const_slot_mba_stateful->297@0xb64d7:11 \|\| 0x343f04:vmop_297_plus0x3_state_add_... |
| 055 | 0x34448e | uname | exact_row | 0x34448d..0x344491 | vmop_172_plus0x4_state_add_const_slot_mba_stateful | 320@0xbada5:1 | 0x344480:vmop_064_plus0x4_state_add_const_slot_multi_path->140@0x94e5a:1 \|\| 0x344484:vmop_140_plus0x6_state_add_con... |
| 059 | 0x367607 | QmK3TAsJm8V/J5AWpLEV6jAFgRGymGGHnof0DXzVWZidrcZJWTNuGEX90nB3ee2w | exact_row | 0x367605..0x367608 | vmop_199_plus0x3_state_add_const_slot_multi_path | 83@0x8947b:1 | 0x3675f6:vmop_239_plus0x6_state_add_const_slot_mba_stateful->282@0xb3128:1 \|\| 0x3675fc:vmop_282_plus0x5_state_add_c... |
| 059 | 0x367700 | _ITM_registerTMCloneTable | exact_row | 0x3676fd..0x36772d | vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown | 354@0xc2241 | 0x3676f1:vmop_157_plus0x4_state_add_const_slot_multi_path->199@0xa0631:40 \|\| 0x3676f5:vmop_199_plus0x3_state_add_co... |
| 059 | 0x367728 | __freelocale | exact_row | 0x3676fd..0x36772d | vmop_334_plus0x2a5_sampled_long_or_sparse_slot_unknown | 354@0xc2241 | 0x3676f1:vmop_157_plus0x4_state_add_const_slot_multi_path->199@0xa0631:40 \|\| 0x3676f5:vmop_199_plus0x3_state_add_co... |
| 059 | 0x367ee7 | basic_string::_S_construct null not valid | exact_row | 0x367ee5..0x367ee9 | vmop_350_plus0x4_state_add_const_slot_mba_stateful | 91@0x8b6de:1 | 0x367eda:vmop_079_plus0x5_state_add_const_slot_multi_path->160@0x994cf:1 \|\| 0x367edf:vmop_160_plus0x2_state_const_p... |
| 061 | 0x36b361 | _ITM_registerTMCloneTable | exact_row | 0x36b35e..0x36b38e | vmop_316_minus0x3c4_sampled_backedge_slot_unknown | 171@0x9b4b3 | 0x36b34f:vmop_168_plus0x4_state_add_const_slot_multi_path->345@0xc02e4:42 \|\| 0x36b353:vmop_345_plus0x6_state_add_co... |
| 061 | 0x36b389 | __freelocale | exact_row | 0x36b35e..0x36b38e | vmop_316_minus0x3c4_sampled_backedge_slot_unknown | 171@0x9b4b3 | 0x36b34f:vmop_168_plus0x4_state_add_const_slot_multi_path->345@0xc02e4:42 \|\| 0x36b353:vmop_345_plus0x6_state_add_co... |
| 062 | 0x36d81e | :$23 | exact_row | 0x36d819..0x36d81f | vmop_140_plus0x6_state_add_const_slot_multi_path | 70@0x8610e:1 | 0x36d80e:vmop_172_plus0x4_state_add_const_slot_mba_stateful->347@0xc088d:1 \|\| 0x36d812:vmop_347_plus0x4_state_add_c... |
| 063 | 0x36ee05 | pclose | exact_row | 0x36ee04..0x36ee08 | vmop_172_plus0x4_state_add_const_slot_mba_stateful | 320@0xbada5:1 | 0x36edf7:vmop_239_plus0x6_state_add_const_slot_mba_stateful->307@0xb8064:1 \|\| 0x36edfd:vmop_307_plus0x3_state_add_c... |
| 063 | 0x36ef19 | _ITM_registerTMCloneTable | exact_row | 0x36ef16..0x36ef46 | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown | 171@0x9b4b3 | 0x36ef09:vmop_333_plus0x4_state_add_const_slot_multi_path->347@0xc088d:23 \|\| 0x36ef0d:vmop_347_plus0x4_state_add_co... |
| 063 | 0x36ef41 | __freelocale | exact_row | 0x36ef16..0x36ef46 | vmop_145_plus0x139_sampled_long_or_sparse_slot_unknown | 171@0x9b4b3 | 0x36ef09:vmop_333_plus0x4_state_add_const_slot_multi_path->347@0xc088d:23 \|\| 0x36ef0d:vmop_347_plus0x4_state_add_co... |
| 063 | 0x37138e | client hello, adding server name extension: %s | exact_row | 0x3707a0..0x371a63 | vmop_316_minus0x3c4_sampled_backedge_slot_unknown | 165@0x9a24c | 0x370793:vmop_114_plus0x4_state_add_const_slot_multi_path->332@0xbd36d:26 \|\| 0x370797:vmop_332_plus0x4_state_add_co... |

## Artifact

- Full context TSV: `dumps/vmtail-wide-1m-w16/vm_string_reference_context.tsv`
