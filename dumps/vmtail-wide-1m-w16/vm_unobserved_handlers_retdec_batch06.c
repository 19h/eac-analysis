/*
 * Targeted RetDec C for unobserved VM handler native ranges, batch 6.
 *
 * These dispatch entries are statically inventoried but were not seen as
 * dispatch targets in the concrete traces. Batches are sorted by native
 * span size so each decompile stays small and reproducible.
 *
 * Total unobserved handler ranges: 155
 * Batch size: 24
 * Ranges:
 *   0x88c3f-0x8921b entry=81 span_bytes=1500 insns=330 tail=0x8920b
 *   0x7d007-0x7d5f9 entry=23 span_bytes=1521 insns=329 tail=0x7d5e9
 *   0x9026f-0x908a3 entry=113 span_bytes=1587 insns=350 tail=0x90893
 *   0xbba0f-0xbc07b entry=325 span_bytes=1643 insns=353 tail=0xbc06b
 *   0xa87b6-0xa8e2d entry=236 span_bytes=1654 insns=351 tail=0xa8e1d
 *   0xa517b-0xa5896 entry=219 span_bytes=1816 insns=400 tail=0xa5886
 *   0xba683-0xbadb2 entry=318 span_bytes=1839 insns=415 tail=0xbada2
 *   0x8bcef-0x8c42a entry=93 span_bytes=1847 insns=414 tail=0x8c41a
 *   0x98354-0x98aa8 entry=156 span_bytes=1876 insns=408 tail=0x98a98
 *   0x7a4d8-0x7ace6 entry=11 span_bytes=2061 insns=459 tail=0x7acd6
 *   0x7efa8-0x7f7d1 entry=32 span_bytes=2089 insns=459 tail=0x7f7c1
 */
#include <stdbool.h>
#include <stdint.h>

typedef __int128 int128_t;
extern int g1;
extern int g2;
extern int g3;
unsigned char llvm_ctpop_i8(unsigned char value);
void __asm_out(uint16_t port, char value);
uint8_t __readfsbyte(int64_t offset);


// Address range: 0x7a4d8 - 0x7acd8
int64_t function_7a4d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20, int64_t result, int64_t a22) {
    // 0x7a4d8
    int64_t v1; // 0x7a4d8
    int64_t v2 = v1;
    int64_t v3 = a7;
    int64_t v4 = v2 + 18; // 0x7a4e1
    int64_t v5 = v1 + (int64_t)&g2 + v2; // 0x7a4e8
    char * v6 = (char *)v4; // 0x7a4f9
    *v6 = 0;
    int64_t v7 = v2 + 10; // 0x7a513
    int64_t * v8 = (int64_t *)v7; // 0x7a523
    int64_t v9 = *v8; // 0x7a523
    int64_t v10 = v9 + 6; // 0x7a529
    int64_t v11 = (v7 & 2 * v1) - a5 | a5; // 0x7a530
    int64_t v12 = v11 | 144; // 0x7a53f
    uint32_t v13 = *(int32_t *)(v2 + (int64_t)*(int16_t *)v10); // 0x7a546
    int64_t v14 = v13; // 0x7a546
    int64_t v15 = 2 * (((a2 - a6 & a6) - v4 ^ a5) & v5) ^ v12; // 0x7a54b
    int64_t v16 = v9 + 8; // 0x7a56b
    int64_t v17 = ((v5 ^ (v1 ^ 32) + 128) - v10 & a6) - a6; // 0x7a572
    unsigned char v18 = *(char *)v16; // 0x7a575
    int64_t v19 = a5 & -256 | (int64_t)v18; // 0x7a575
    char v20; // 0x7a4d8
    int64_t v21; // 0x7a4d8
    int64_t v22; // 0x7a4d8
    int64_t v23; // 0x7a4d8
    int64_t v24; // 0x7a4d8
    int64_t v25; // 0x7a4d8
    int64_t v26; // 0x7a4d8
    int64_t v27; // 0x7a4d8
    if (v18 == 34) {
        goto lab_0x7a59f;
    } else {
        if (v18 == 2) {
            goto lab_0x7a59f;
        } else {
            int64_t v28 = v12 ^ 32; // 0x7a557
            char v29 = 0; // 0x7a5ef
            int64_t v30 = v15; // 0x7a5ef
            int64_t v31 = v14; // 0x7a5ef
            int64_t v32 = v16; // 0x7a5ef
            int64_t v33 = v28; // 0x7a5ef
            int64_t v34 = v17; // 0x7a5ef
            int64_t v35 = v14; // 0x7a5ef
            if (v18 == -102) {
                uint32_t v36 = v13 & 64; // 0x7a5f5
                int64_t v37 = v36; // 0x7a5f5
                v29 = 0;
                v30 = v15;
                v31 = v37;
                v32 = v16;
                v33 = v28;
                v34 = v17;
                v35 = v14;
                if (v36 == 0) {
                    int64_t v38 = v17 + 240; // 0x7a601
                    *v6 = 1;
                    v29 = 1;
                    v30 = (v19 | v15) - v38;
                    v31 = v37;
                    v32 = v4;
                    v33 = v28 & a6;
                    v34 = v38;
                    v35 = v28 + a6 + v14 & v4;
                }
            }
            char v39 = v29; // 0x7a62c
            int64_t v40 = v31; // 0x7a62c
            int64_t v41 = a6; // 0x7a62c
            int64_t v42 = v32; // 0x7a62c
            int64_t v43 = v34; // 0x7a62c
            if (v18 == 0) {
                int64_t v44 = v34 & v33; // 0x7a632
                uint32_t v45 = (int32_t)v31; // 0x7a638
                uint32_t v46 = v45 & 64; // 0x7a638
                int64_t v47 = v46; // 0x7a638
                v39 = v29;
                v40 = v47;
                v41 = v31;
                v42 = v32;
                v43 = v44;
                if (v46 == 0) {
                    uint32_t v48 = v45 % 2; // 0x7a644
                    int64_t v49 = v48; // 0x7a644
                    v39 = v29;
                    v40 = v47;
                    v41 = v49;
                    v42 = v32;
                    v43 = v44;
                    if (v48 == 0) {
                        // 0x7a651
                        *v6 = 1;
                        v39 = 1;
                        v40 = v47;
                        v41 = v49;
                        v42 = v4;
                        v43 = v44 | v30;
                    }
                }
            }
            char v50 = v39; // 0x7a666
            int64_t v51 = v30; // 0x7a666
            int64_t v52 = v40; // 0x7a666
            int64_t v53 = v42; // 0x7a666
            int64_t v54 = v33; // 0x7a666
            int64_t v55 = v35; // 0x7a666
            if (v18 == 95) {
                uint32_t v56 = (int32_t)v40 % 2; // 0x7a66c
                char v57 = v39; // 0x7a672
                int64_t v58 = v30; // 0x7a672
                int64_t v59 = v42; // 0x7a672
                int64_t v60 = v33; // 0x7a672
                int64_t v61 = v35; // 0x7a672
                if (v56 == 0) {
                    // 0x7a678
                    *v6 = 1;
                    v57 = 1;
                    v58 = v30 + 64 | 64;
                    v59 = v4;
                    v60 = (int64_t)&g2;
                    v61 = v35 & v19 | v30;
                }
                // 0x7a6a4
                v52 = v56;
                v50 = v57;
                v51 = v58;
                v53 = v59;
                v54 = v60;
                v55 = v61 & v52;
            }
            char v62 = v50; // 0x7a6ab
            int64_t v63 = v51; // 0x7a6ab
            int64_t v64 = v52; // 0x7a6ab
            int64_t v65 = v53; // 0x7a6ab
            int64_t v66 = v54; // 0x7a6ab
            int64_t v67 = v43; // 0x7a6ab
            int64_t v68 = v55; // 0x7a6ab
            if (v18 == -104) {
                uint32_t v69 = (int32_t)v52 % 2; // 0x7a6b1
                int64_t v70 = v69; // 0x7a6b1
                char v71 = v50; // 0x7a6b7
                int64_t v72 = v53; // 0x7a6b7
                int64_t v73 = v54; // 0x7a6b7
                int64_t v74 = v43; // 0x7a6b7
                int64_t v75 = v55; // 0x7a6b7
                if (v69 != 0) {
                    // 0x7a6bd
                    *v6 = 1;
                    v71 = 1;
                    v72 = v4;
                    v73 = v19;
                    v74 = 0;
                    v75 = (v55 & v70) + v19 & -1 - v19;
                }
                // 0x7a6ee
                v62 = v71;
                v63 = v51 & (int64_t)&g3 & 32;
                v64 = v70;
                v65 = v72;
                v66 = v73 | 2;
                v67 = v74;
                v68 = v75;
            }
            char v76 = v62; // 0x7a707
            int64_t v77 = v63; // 0x7a707
            int64_t v78 = v64; // 0x7a707
            int64_t v79 = v41; // 0x7a707
            int64_t v80 = v65; // 0x7a707
            int64_t v81 = v66; // 0x7a707
            int64_t v82 = v67; // 0x7a707
            int64_t v83 = v68; // 0x7a707
            if (v18 == -119) {
                int64_t v84 = v67 | v63; // 0x7a70d
                uint32_t v85 = (int32_t)v64; // 0x7a713
                uint32_t v86 = v85 & 64; // 0x7a713
                int64_t v87 = v86; // 0x7a713
                char v88 = v62; // 0x7a719
                int64_t v89 = v63; // 0x7a719
                int64_t v90 = v65; // 0x7a719
                int64_t v91 = v84; // 0x7a719
                int64_t v92 = v68; // 0x7a719
                if (v86 != 0) {
                    // 0x7a71f
                    v91 = (v84 ^ v65) & v63;
                    *v6 = 1;
                    v88 = 1;
                    v89 = v63 ^ v87;
                    v90 = v4;
                    v92 = v91 & v19;
                }
                // 0x7a73f
                v76 = v88;
                v77 = v89;
                v78 = v87;
                v79 = 0;
                v80 = v90;
                v81 = v66;
                v82 = v91;
                v83 = v92;
                if (v85 % 2 != 0) {
                    // 0x7a74c
                    *v6 = 1;
                    v76 = 1;
                    v77 = v89 + 1;
                    v78 = v87;
                    v79 = 1;
                    v80 = v4;
                    v81 = (v66 ^ v2) % 0x80000000 | v19;
                    v82 = v91;
                    v83 = 18;
                }
            }
            char v93 = v76; // 0x7a77c
            int64_t v94 = v77; // 0x7a77c
            int64_t v95 = v78; // 0x7a77c
            int64_t v96 = v79; // 0x7a77c
            int64_t v97 = v80; // 0x7a77c
            int64_t v98 = v81; // 0x7a77c
            int64_t v99 = v83; // 0x7a77c
            if (v18 == 47) {
                uint32_t v100 = (int32_t)v78 & 64; // 0x7a785
                char v101 = v76; // 0x7a78c
                int64_t v102 = v77; // 0x7a78c
                int64_t v103 = v78; // 0x7a78c
                int64_t v104 = v100; // 0x7a78c
                int64_t v105 = v80; // 0x7a78c
                int64_t v106 = v82; // 0x7a78c
                int64_t v107 = v83; // 0x7a78c
                if (v100 == 0) {
                    int64_t v108 = v77 ^ v19; // 0x7a799
                    int64_t v109 = v82 | 16; // 0x7a7ad
                    int64_t v110 = (v78 & (int64_t)(int32_t)L"\n2") / 2048; // 0x7a7b7
                    int64_t v111 = v108 - 240; // 0x7a7c1
                    int64_t v112 = v78 / 128 % 2; // 0x7a7cb
                    v101 = v76;
                    v102 = v111;
                    v103 = v112;
                    v104 = v110;
                    v105 = v80;
                    v106 = v109;
                    v107 = v108 - 0x800000ef + (v83 | 128);
                    if ((int32_t)v112 == (int32_t)v110) {
                        // 0x7a7d7
                        *v6 = 1;
                        v101 = 1;
                        v102 = v111;
                        v103 = v112;
                        v104 = v110;
                        v105 = v4;
                        v106 = (v109 ^ v2) + v2;
                        v107 = 18;
                    }
                }
                // 0x7a7f9
                v99 = v106;
                v93 = v101;
                v94 = v102;
                v95 = v103;
                v96 = v104;
                v97 = v105;
                v98 = (2 * v107 | v81) + v99;
            }
            char v113 = v93; // 0x7a809
            int64_t v114 = v95; // 0x7a809
            int64_t v115 = v96; // 0x7a809
            int64_t v116 = v97; // 0x7a809
            int64_t v117 = v98; // 0x7a809
            int64_t v118 = v99; // 0x7a809
            int64_t v119 = v99; // 0x7a809
            if (v18 == -6) {
                int64_t v120 = v96 + v94; // 0x7a80f
                v115 = (v95 & (int64_t)(int32_t)L"\n2") / 2048;
                v114 = v95 / 128 % 2;
                char v121 = v93; // 0x7a850
                int64_t v122 = v120; // 0x7a850
                int64_t v123 = v97; // 0x7a850
                if ((int32_t)v114 == (int32_t)v115) {
                    // 0x7a856
                    *v6 = 1;
                    v121 = 1;
                    v122 = v120 ^ v4;
                    v123 = v4;
                }
                // 0x7a870
                v117 = v122;
                v113 = v121;
                v116 = v123;
                v118 = v99 | v97;
                v119 = v117 | v99 + v19 ^ (int64_t)&g3;
            }
            int64_t v124 = v116;
            v20 = v113;
            v27 = v117;
            v26 = v114;
            v25 = v115;
            v21 = v124;
            v22 = v117;
            v23 = v118;
            v24 = v119;
            if (v18 == -115) {
                int64_t v125 = 2 * v117 | 64; // 0x7a883
                int64_t v126 = (v114 & (int64_t)(int32_t)L"\n2") / 2048; // 0x7a8a4
                int64_t v127 = v126 + (int64_t)&g2; // 0x7a8ae
                int64_t v128 = v114 / 128 % 2; // 0x7a8bb
                char v129 = v113; // 0x7a8c1
                int64_t v130 = v125; // 0x7a8c1
                int64_t v131 = v124; // 0x7a8c1
                int64_t v132 = v127; // 0x7a8c1
                if ((int32_t)v128 != (int32_t)v126) {
                    // 0x7a8c7
                    *v6 = 1;
                    v129 = 1;
                    v130 = v125 ^ v124 | v126;
                    v131 = v4;
                    v132 = v127 ^ 2;
                }
                int64_t v133 = v130 - v126; // 0x7a8e2
                v20 = v129;
                v27 = v133;
                v26 = v128;
                v25 = v126;
                v21 = v131;
                v22 = v117 - v124 | v124;
                v23 = v132 | v133;
                v24 = v119 + (int64_t)L"\n2";
            }
            goto lab_0x7a8e8;
        }
    }
  lab_0x7a59f:;
    char v134 = 0; // 0x7a5b7
    int64_t v135 = v15; // 0x7a5b7
    int64_t v136 = v16; // 0x7a5b7
    int64_t v137 = v14; // 0x7a5b7
    if ((v14 & 64) != 0) {
        // 0x7a5bd
        *v6 = 1;
        v134 = 1;
        v135 = v15 & (int64_t)L"\n2" & 32;
        v136 = v4;
        v137 = 18;
    }
    int64_t v138 = v14 & 240 | v11 & 64; // 0x7a5a9
    v20 = v134;
    int64_t v139 = (int64_t)&v3; // 0x7a4d8
    v27 = v135;
    v26 = v14;
    v25 = a6;
    v21 = v136;
    v22 = v138;
    v23 = v17;
    v24 = v137 & v138;
    goto lab_0x7a8e8;
  lab_0x7a8e8:;
    char v140 = v20; // 0x7a8ec
    int64_t v141 = v27; // 0x7a8ec
    int64_t v142 = v26; // 0x7a8ec
    int64_t v143 = v25; // 0x7a8ec
    int64_t v144 = v21; // 0x7a8ec
    int64_t v145 = v22; // 0x7a8ec
    int64_t v146 = v23; // 0x7a8ec
    int64_t v147 = v24; // 0x7a8ec
    if (v18 == 2) {
        char v148 = v20; // 0x7a8fc
        int64_t v149 = v21; // 0x7a8fc
        int64_t v150 = v22; // 0x7a8fc
        int64_t v151 = v24; // 0x7a8fc
        if ((v26 & 64) != 0) {
            // 0x7a902
            *v6 = 1;
            v148 = 1;
            v149 = v4;
            v150 = v19 + (int64_t)&g3 + v22;
            v151 = -(int64_t)&g3 - v22;
        }
        int64_t v152 = (v26 & (int64_t)(int32_t)L"\n2") / 2048; // 0x7a965
        int64_t v153 = (v26 ^ 128 ^ v150 - v149) - v152; // 0x7a972
        int64_t v154 = v26 / 128 % 2; // 0x7a975
        char v155 = v148; // 0x7a97b
        int64_t v156 = v153; // 0x7a97b
        int64_t v157 = v149; // 0x7a97b
        int64_t v158 = v150; // 0x7a97b
        if ((int32_t)v154 != (int32_t)v152) {
            // 0x7a981
            *v6 = 1;
            v155 = 1;
            v156 = v153 & v149;
            v157 = v4;
            v158 = v150 & v19;
        }
        // 0x7a995
        v140 = v155;
        v141 = v156 & 2;
        v142 = v154;
        v143 = v152;
        v144 = v157;
        v145 = v158;
        v146 = v152 + (int64_t)&g2;
        v147 = 2 * v151;
    }
    char v159 = v140; // 0x7a9a3
    int64_t v160 = v141; // 0x7a9a3
    int64_t v161 = v142; // 0x7a9a3
    int64_t v162 = v144; // 0x7a9a3
    int64_t v163 = v145; // 0x7a9a3
    int64_t v164 = v146; // 0x7a9a3
    int64_t v165 = v147; // 0x7a9a3
    if (v18 == -30) {
        uint32_t v166 = (int32_t)v142 & (int32_t)L"\n2"; // 0x7a9a9
        int64_t v167 = v166; // 0x7a9a9
        char v168 = v140; // 0x7a9af
        int64_t v169 = v141; // 0x7a9af
        int64_t v170 = v144; // 0x7a9af
        int64_t v171 = v145; // 0x7a9af
        int64_t v172 = v146; // 0x7a9af
        int64_t v173 = v147; // 0x7a9af
        if (v166 == 0) {
            // 0x7a9b5
            v171 = v145 & (int64_t)&g3 | v167;
            *v6 = 1;
            v168 = 1;
            v169 = v141 & 0x7ffffffc & v171;
            v170 = v4;
            v172 = v146 | v167;
            v173 = v147 - 0x7fffffff;
        }
        // 0x7a9e1
        v159 = v168;
        v160 = v169 + 16;
        v161 = v167;
        v162 = v170;
        v163 = v171;
        v164 = v172;
        v165 = v173;
    }
    char v174 = v159; // 0x7a9ec
    int64_t v175 = v160; // 0x7a9ec
    int64_t v176 = v161; // 0x7a9ec
    int64_t v177 = v162; // 0x7a9ec
    int64_t v178 = v163; // 0x7a9ec
    int64_t v179 = v165; // 0x7a9ec
    if (v18 == -90) {
        uint32_t v180 = (int32_t)v161 & 4; // 0x7a9f2
        char v181 = v159; // 0x7a9f8
        int64_t v182 = v160; // 0x7a9f8
        int64_t v183 = v162; // 0x7a9f8
        int64_t v184 = v163; // 0x7a9f8
        int64_t v185 = v165; // 0x7a9f8
        if (v180 == 0) {
            // 0x7a9fe
            v184 = (int64_t)&g1 - v143;
            *v6 = 1;
            v181 = 1;
            v182 = v160 & 64;
            v183 = v4;
            v185 = v184 + v2 + v165;
        }
        // 0x7aa23
        v174 = v181;
        v175 = v182;
        v176 = v180;
        v177 = v183;
        v178 = v184;
        v179 = v185 | v143;
    }
    char v186 = v174; // 0x7aa2a
    int64_t v187 = v176; // 0x7aa2a
    int64_t v188 = v178; // 0x7aa2a
    int64_t v189 = v164; // 0x7aa2a
    if (v18 == 12) {
        uint32_t v190 = (int32_t)v176 & 128; // 0x7aa30
        int64_t v191 = v190; // 0x7aa30
        v186 = v174;
        v187 = v191;
        v188 = v178;
        v189 = v164;
        if (v190 == 0) {
            // 0x7aa3c
            *v6 = 1;
            v186 = 1;
            v187 = v191;
            v188 = v178 + v175;
            v189 = (v177 | v164 | 2 * v179) & v19;
        }
    }
    char v192 = v186; // 0x7aa5d
    int64_t v193 = v187; // 0x7aa5d
    int64_t v194 = v189; // 0x7aa5d
    if (v18 == -88) {
        uint32_t v195 = (int32_t)v187 & (int32_t)L"\n2"; // 0x7aa63
        v192 = v186;
        v193 = 0;
        v194 = v189;
        if (v195 != 0) {
            // 0x7aa6f
            *v6 = 1;
            v192 = 1;
            v193 = v195;
            v194 = v189 + v188 & v2;
        }
    }
    char v196 = v192; // 0x7aa97
    int64_t v197 = v193; // 0x7aa97
    int64_t v198 = v194; // 0x7aa97
    if (v18 == -21) {
        uint32_t v199 = (int32_t)v193 & 4; // 0x7aa9d
        char v200 = v192; // 0x7aaa3
        int64_t v201 = v194; // 0x7aaa3
        if (v199 != 0) {
            // 0x7aaa9
            *v6 = 1;
            v200 = 1;
            v201 = v175 & (int64_t)&g2 & (int64_t)&g2 ^ v4;
        }
        // 0x7aad4
        v196 = v200;
        v197 = v199;
        v198 = v201 | 64;
    }
    // 0x7aae5
    int64_t v202; // 0x7a4d8
    if (v18 != 56 || (char)v197 > -1) {
        int64_t v203 = *v8;
        v202 = v203;
        if (v196 == 0) {
            int64_t * v204 = (int64_t *)(v2 + (int64_t)*(int16_t *)(v203 + 9)); // 0x7abeb
            *v204 = *v204 + 136;
            int32_t * v205 = (int32_t *)(v2 + 368); // 0x7ac61
            int32_t v206 = *v205; // 0x7ac61
            *v205 = (v206 + (int32_t)*(int16_t *)(*v8 + 11) ^ 0x4ecbeff6) + v206;
            *v8 = *v8 + 13;
            return v198 & -256 | v1 - 8 | *(int64_t *)(v2 + 271);
        }
    } else {
        // 0x7ab30
        *v6 = 1;
        v202 = *v8;
    }
    uint32_t v207 = *(int32_t *)v202; // 0x7ab62
    int64_t v208 = *(int64_t *)(v2 + 187); // 0x7ab6f
    uint16_t v209 = *(int16_t *)(v202 + 4); // 0x7ab8d
    *(int64_t *)(v139 + (int64_t)v209) = v208 + (int64_t)v207;
    *(int32_t *)(v2 + 476) = 0;
    return result;
}

// Address range: 0x7d007 - 0x7d5ec
int64_t function_7d007(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x7d007
    int64_t v1; // 0x7d007
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x7d021
    int32_t v4 = *v3 & 0x3758c69b; // 0x7d021
    *v3 = v4;
    int32_t * v5 = (int32_t *)(v2 + 368); // 0x7d045
    int32_t v6 = *v5 ^ (v4 | 0x100120c) | 0x76974dc1; // 0x7d050
    *v5 = v6;
    *v5 = 0x69611da6 - *v3 + v6;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int64_t * v7 = (int64_t *)(v2 + 96); // 0x7d232
    int64_t v8 = *v7; // 0x7d232
    *v7 = v8 + 0x9e1916d9;
    uint64_t v9 = v8 + 0x653cf834; // 0x7d2a8
    char v10 = *(char *)(v2 + 404); // 0x7d2b9
    int64_t v11; // 0x7d007
    int64_t v12; // 0x7d007
    bool v13; // 0x7d007
    if (v10 == 98) {
        char v14 = v9 | v2; // 0x7d2c6
        int64_t v15 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0) | 2; // bp-8, 0x7d2c9
        v11 = v9 % 256 | v2;
        v12 = (int64_t)&v15;
    }
    int64_t v16 = v11; // 0x7d2ce
    int64_t v17 = v12; // 0x7d2ce
    if (v10 == 50) {
        int64_t v18 = v11 | v9;
        int16_t v19 = v18; // 0x7d2d4
        int64_t v20 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v18) % 2 == 0) | 2; // bp-16, 0x7d2d8
        v16 = v11 | v9 % 0x10000;
        v17 = (int64_t)&v20;
    }
    int64_t v21 = v16; // 0x7d2dd
    int64_t v22 = v17; // 0x7d2dd
    if (v10 == 80) {
        int64_t v23 = v16 | v9;
        int32_t v24 = v23; // 0x7d2e3
        unsigned char v25 = llvm_ctpop_i8((char)v23); // 0x7d2e3
        v22 = v17 - 8;
        *(int64_t *)v22 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 4 * (int64_t)(v25 % 2 == 0) | 2;
        v21 = v23 & 0xffffffff;
    }
    int64_t v26 = v21; // 0x7d2eb
    int64_t v27 = v22; // 0x7d2eb
    if (v10 == 58) {
        // 0x7d2f1
        v26 = v21 | v9;
        unsigned char v28 = llvm_ctpop_i8((char)v26); // 0x7d2f1
        v27 = v22 - 8;
        *(int64_t *)v27 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
    }
    // 0x7d2f5
    *(int64_t *)(v2 + 113) = v26 + 0x1a44e4ef;
    int64_t result = v2 + 10; // 0x7d385
    int64_t * v29 = (int64_t *)result; // 0x7d3a7
    int64_t v30 = *v29; // 0x7d3a7
    int64_t v31 = v30; // 0x7d40d
    if (*(char *)(v30 + 2) != 0) {
        // 0x7d413
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v30) = *(int64_t *)v27;
        v31 = *v29;
    }
    int32_t v32 = *v5; // 0x7d533
    *v5 = v32 - (v32 + (int32_t)*(int16_t *)(v31 + 3) ^ 0x6fa319ce);
    *v29 = *v29 + 5;
    return result;
}

// Address range: 0x7efa8 - 0x7f7c4
int64_t function_7efa8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t result, int64_t a20) {
    int64_t v1 = a5;
    int64_t v2; // 0x7efa8
    char * v3 = (char *)(v2 + 18); // 0x7efbc
    *v3 = 0;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0x7efe2
    int64_t v5 = *v4; // 0x7efe2
    uint32_t v6 = *(int32_t *)(v2 + (int64_t)*(int16_t *)(v5 + 6)); // 0x7f011
    char v7 = *(char *)(v5 + 8); // 0x7f047
    char v8; // 0x7efa8
    int64_t v9; // 0x7efa8
    int64_t v10; // 0x7efa8
    switch (v7) {
        case 34: {
        }
        case 2: {
            char v11 = 0; // 0x7f074
            if ((v6 & 64) != 0) {
                // 0x7f07a
                *v3 = 1;
                v11 = 1;
            }
            int64_t v12 = v6; // 0x7f0ba
            int64_t v13 = (int64_t)&v1; // 0x7f0ba
            v10 = v13;
            v8 = v11;
            v9 = v12;
            if (v7 == 2) {
                int64_t v14 = v12 / 128 % 2; // 0x7f449
                v10 = v13;
                v8 = v11;
                v9 = v14;
                if ((v12 & 64) != 0 || (v6 & (int32_t)L"\n2") / 2048 != (int32_t)v14) {
                    *v3 = 1;
                    v10 = v13;
                    v8 = 1;
                    v9 = v14;
                }
            }
            // break -> 0x7f4ea
            break;
        }
        default: {
            char v15 = 0; // 0x7f0bf
            int64_t v16 = v6; // 0x7f0bf
            if (v7 == -102) {
                uint32_t v17 = v6 & 64; // 0x7f0c5
                int64_t v18 = v17; // 0x7f0c5
                v15 = 0;
                v16 = v18;
                if (v17 == 0) {
                    // 0x7f0d2
                    *v3 = 1;
                    v15 = 1;
                    v16 = v18;
                }
            }
            char v19 = v15; // 0x7f0f0
            int64_t v20 = v16; // 0x7f0f0
            if (v7 == 0) {
                uint32_t v21 = (int32_t)v16 & 64; // 0x7f0ff
                int64_t v22 = v21; // 0x7f0ff
                v19 = v15;
                v20 = v22;
                if (v21 == 0) {
                    // 0x7f10c
                    v19 = v15;
                    v20 = v22;
                    if (v16 % 2 == 0) {
                        // 0x7f117
                        *v3 = 1;
                        v19 = 1;
                        v20 = v22;
                    }
                }
            }
            char v23 = v19; // 0x7f142
            int64_t v24 = v20; // 0x7f142
            if (v7 == 95) {
                uint32_t v25 = (int32_t)v20 % 2; // 0x7f148
                int64_t v26 = v25; // 0x7f148
                v23 = v19;
                v24 = v26;
                if (v25 == 0) {
                    // 0x7f155
                    *v3 = 1;
                    v23 = 1;
                    v24 = v26;
                }
            }
            char v27 = v23; // 0x7f184
            int64_t v28 = v24; // 0x7f184
            if (v7 == -104) {
                // 0x7f18a
                v27 = v23;
                v28 = 0;
                if (v24 % 2 != 0) {
                    // 0x7f197
                    *v3 = 1;
                    v27 = 1;
                    v28 = 1;
                }
            }
            char v29 = v27; // 0x7f1d1
            int64_t v30 = v28; // 0x7f1d1
            if (v7 == -119) {
                uint32_t v31 = (int32_t)v28 & 64; // 0x7f1da
                v29 = v27;
                v30 = 0;
                if (v28 % 2 != 0 || v31 != 0) {
                    *v3 = 1;
                    v29 = 1;
                    v30 = v31;
                }
            }
            char v32 = v29; // 0x7f245
            int64_t v33 = v30; // 0x7f245
            if (v7 == 47) {
                // 0x7f24b
                v32 = v29;
                v33 = v30;
                if ((v30 & 64) == 0) {
                    int64_t v34 = v30 / 128 % 2; // 0x7f28f
                    v32 = v29;
                    v33 = v34;
                    if ((int32_t)v34 == (int32_t)((v30 & (int64_t)(int32_t)L"\n2") / 2048)) {
                        // 0x7f29c
                        *v3 = 1;
                        v32 = 1;
                        v33 = v34;
                    }
                }
            }
            char v35 = v32; // 0x7f2dd
            int64_t v36 = v33; // 0x7f2dd
            if (v7 == -6) {
                int64_t v37 = v33 / 128 % 2; // 0x7f337
                v35 = v32;
                v36 = v37;
                if ((int32_t)v37 == (int32_t)((v33 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0x7f344
                    *v3 = 1;
                    v35 = 1;
                    v36 = v37;
                }
            }
            char v38 = v35; // 0x7f378
            int64_t v39 = v36; // 0x7f378
            if (v7 == -115) {
                int64_t v40 = v36 / 128 % 2; // 0x7f3b1
                v38 = v35;
                v39 = v40;
                if ((int32_t)v40 != (int32_t)((v36 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0x7f3be
                    *v3 = 1;
                    v38 = 1;
                    v39 = v40;
                }
            }
            char v41 = v38; // 0x7f477
            int64_t v42 = v39; // 0x7f477
            if (v7 == -30) {
                uint32_t v43 = (int32_t)v39 & (int32_t)L"\n2"; // 0x7f47d
                int64_t v44 = v43; // 0x7f47d
                v41 = v38;
                v42 = v44;
                if (v43 == 0) {
                    // 0x7f48a
                    *v3 = 1;
                    v41 = 1;
                    v42 = v44;
                }
            }
            // 0x7f4ab
            v8 = v41;
            v9 = v42;
            if (v7 == -90) {
                uint32_t v45 = (int32_t)v42 & 4; // 0x7f4b4
                int64_t v46 = v45; // 0x7f4b4
                v8 = v41;
                v9 = v46;
                if (v45 == 0) {
                    // 0x7f4c1
                    *v3 = 1;
                    v8 = 1;
                    v9 = v46;
                }
            }
            // break -> 0x7f4ea
            break;
        }
    }
    char v47 = v8; // 0x7f4ed
    int64_t v48 = v9; // 0x7f4ed
    if (v7 == 12) {
        uint32_t v49 = (int32_t)v9 & 128; // 0x7f4f3
        int64_t v50 = v49; // 0x7f4f3
        v47 = v8;
        v48 = v50;
        if (v49 == 0) {
            // 0x7f500
            *v3 = 1;
            v47 = 1;
            v48 = v50;
        }
    }
    char v51 = v47; // 0x7f552
    int64_t v52 = v48; // 0x7f552
    if (v7 == -88) {
        uint32_t v53 = (int32_t)v48 & (int32_t)L"\n2"; // 0x7f558
        v51 = v47;
        v52 = 0;
        if (v53 != 0) {
            // 0x7f565
            *v3 = 1;
            v51 = 1;
            v52 = v53;
        }
    }
    char v54 = v51; // 0x7f597
    int64_t v55 = v52; // 0x7f597
    char v56; // 0x7efa8
    if (v7 != -21) {
        goto lab_0x7f5d8;
    } else {
        uint32_t v57 = (int32_t)v52 & 4; // 0x7f59d
        v56 = v51;
        if (v57 == 0) {
            goto lab_0x7f620;
        } else {
            // 0x7f5aa
            *v3 = 1;
            v54 = 1;
            v55 = v57;
            goto lab_0x7f5d8;
        }
    }
  lab_0x7f5d8:
    // 0x7f5d8
    v56 = v54;
    int64_t v58; // 0x7efa8
    if (v7 != 56 || (char)v55 > -1) {
        goto lab_0x7f620;
    } else {
        // 0x7f620
        *v3 = 1;
        v58 = *v4;
        goto lab_0x7f637;
    }
  lab_0x7f620:;
    int64_t v59 = *v4;
    v58 = v59;
    if (v56 == 0) {
        int64_t * v60 = (int64_t *)(v2 + (int64_t)*(int16_t *)(v59 + 9)); // 0x7f6da
        *v60 = *v60 + 136;
        uint16_t v61 = *(int16_t *)(*v4 + 11); // 0x7f733
        int32_t * v62 = (int32_t *)(v2 + 368); // 0x7f780
        *v62 = *v62 - (int32_t)v61;
        *v4 = *v4 + 13;
        return (int64_t)v61 & (int64_t)&g3;
    }
    goto lab_0x7f637;
  lab_0x7f637:;
    uint32_t v63 = *(int32_t *)v58; // 0x7f652
    int64_t v64 = *(int64_t *)(v2 + 187); // 0x7f65f
    uint16_t v65 = *(int16_t *)(v58 + 4); // 0x7f67d
    *(int64_t *)(v10 + (int64_t)v65) = v64 + (int64_t)v63;
    *(int32_t *)(v2 + 476) = 0;
    return result;
}

// Address range: 0x7f7c6 - 0x7f7c8
int64_t function_7f7c6(void) {
    // 0x7f7c6
    int64_t result; // 0x7f7c6
    return result;
}

// Address range: 0x7f7c9 - 0x7f7ca
int64_t function_7f7c9(void) {
    // 0x7f7c9
    int64_t result; // 0x7f7c9
    return result;
}

// Address range: 0x88c3f - 0x8920e
int64_t function_88c3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x88c3f
    int64_t v1; // 0x88c3f
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x88cc8
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    *v3 = *v3 + 0x653cf834 ^ 0x25c470b0;
    int32_t * v4 = (int32_t *)(v2 + 35); // 0x88d69
    int32_t * v5 = (int32_t *)(v2 + 368); // 0x88d7d
    int32_t v6 = (*v4 ^ 0x45008840 ^ *v5) & 0x4500f854; // 0x88da8
    *v5 = v6;
    *v5 = *v4 ^ 0x15fca088 ^ v6;
    int64_t v7 = *v3 ^ 0x25c470b0; // 0x88e54
    char v8 = *(char *)(v2 + 404); // 0x88e90
    int64_t v9; // 0x88c3f
    int64_t v10; // 0x88c3f
    bool v11; // 0x88c3f
    if (v8 == 98) {
        uint64_t v12 = v7 & v2;
        char v13 = v12; // 0x88e9d
        int64_t v14 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v13) % 2 == 0) | 2; // bp-8, 0x88ea0
        v10 = (int64_t)&v14;
        v9 = v12 % 256 | v2 & -256;
    }
    int64_t v15 = v10; // 0x88eab
    int64_t v16 = v9; // 0x88eab
    if (v8 == 50) {
        uint64_t v17 = v9 & v7;
        int16_t v18 = v17; // 0x88eb1
        int64_t v19 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v18 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v17) % 2 == 0) | 2; // bp-16, 0x88eb5
        v15 = (int64_t)&v19;
        v16 = v17 % 0x10000 | v9 & -0x10000;
    }
    int64_t v20 = v15; // 0x88ec4
    int64_t v21 = v16; // 0x88ec4
    if (v8 == 80) {
        int64_t v22 = v16 & v7;
        int32_t v23 = v22; // 0x88eca
        unsigned char v24 = llvm_ctpop_i8((char)v22); // 0x88eca
        v20 = v15 - 8;
        *(int64_t *)v20 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v23 == 0) | 128 * (int64_t)(v23 < 0) | 4 * (int64_t)(v24 % 2 == 0) | 2;
        v21 = v22 & 0xffffffff;
    }
    int64_t v25 = v20; // 0x88eea
    int64_t v26 = v21; // 0x88eea
    if (v8 == 58) {
        // 0x88ef0
        v26 = v21 & v7;
        unsigned char v27 = llvm_ctpop_i8((char)v26); // 0x88ef0
        v25 = v20 - 8;
        *(int64_t *)v25 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 4 * (int64_t)(v27 % 2 == 0) | 2;
    }
    int64_t * v28 = (int64_t *)(v2 + 113); // 0x88f23
    *v28 = v26;
    int64_t result = v2 + 10; // 0x88f93
    int64_t * v29 = (int64_t *)result; // 0x88fb5
    int64_t v30 = *v29; // 0x88fb5
    int64_t v31 = v26; // 0x89021
    if (*(char *)(v30 + 4) != 0) {
        uint16_t v32 = *(int16_t *)(v30 + 2); // 0x89079
        *(int64_t *)(v2 + (int64_t)v32) = *(int64_t *)v25;
        v31 = *v28;
    }
    // 0x890a4
    *v28 = v31 + 0x1a44e4ef;
    int32_t v33 = *v5 & 0x6a005710 ^ 0x48004110; // 0x890e1
    *v5 = v33;
    *v5 = v33 - (v33 + (int32_t)*(int16_t *)*v29 ^ 0x5263a45b);
    *v29 = *v29 + 5;
    return result;
}

// Address range: 0x89216 - 0x89219
int64_t function_89216(void) {
    // 0x89216
    int64_t result; // 0x89216
    return result;
}

// Address range: 0x8bcef - 0x8bd69
int64_t function_8bcef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x8bcef
    int64_t v1; // 0x8bcef
    int64_t v2 = *(int64_t *)(v1 + 10); // 0x8bd00
    uint32_t v3 = *(int32_t *)(v2 + 2); // 0x8bd0a
    int64_t v4 = *(int64_t *)(v1 + 187); // 0x8bd17
    uint16_t v5 = *(int16_t *)v2; // 0x8bd35
    *(int64_t *)(v1 + (int64_t)v5) = v4 + (int64_t)v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x8bd69 - 0x8c41c
int64_t function_8bd69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x8bd69
    int64_t v1; // 0x8bd69
    int64_t v2 = v1;
    int64_t v3 = v2 + 368; // 0x8bd6c
    int32_t * v4 = (int32_t *)v3; // 0x8bd73
    int64_t v5 = v2 + 35; // 0x8bd7e
    int32_t * v6 = (int32_t *)v5; // 0x8bd85
    int32_t v7 = *v6 ^ *v4 + 0x551fa912; // 0x8bd85
    *v6 = v7;
    int64_t * v8 = (int64_t *)(v2 + 96); // 0x8bd93
    *v8 = *v8 + 0x653cf834 ^ 0x343190f1;
    *v4 = v7 & 0x7af574e5 & *v4;
    *(int64_t *)v2 = v2 ^ 0x39922728;
    int64_t v9 = v2 ^ 0x343190f1; // 0x8bee7
    int64_t v10 = *v8; // 0x8bf49
    char * v11 = (char *)(v2 + 404); // 0x8bf98
    char v12 = *v11; // 0x8bf98
    int64_t v13 = v9; // 0x8bfbc
    int64_t v14; // 0x8bd69
    bool v15; // 0x8bd69
    if (v12 == 98) {
        uint64_t v16 = v10 ^ v2;
        char v17 = v16; // 0x8bfc2
        int64_t v18 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v17) % 2 == 0) | 2; // bp-8, 0x8bfc5
        v14 = (int64_t)&v18;
        v13 = v16 % 256 | v9 & -256;
    }
    uint64_t v19 = v10 ^ 0x343190f1; // 0x8bf6d
    int64_t v20 = v14; // 0x8bfc9
    int64_t v21 = v13; // 0x8bfc9
    if (v12 == 50) {
        int64_t v22 = v13 ^ v19;
        int16_t v23 = v22; // 0x8bfcf
        int64_t v24 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v23 == 0) | 128 * (int64_t)(v23 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v22) % 2 == 0) | 2; // bp-16, 0x8bfd3
        v20 = (int64_t)&v24;
        v21 = v13 ^ v19 % 0x10000;
    }
    int64_t v25 = v20; // 0x8bff0
    int64_t v26 = v21; // 0x8bff0
    if (v12 == 80) {
        int64_t v27 = v21 ^ v19;
        int32_t v28 = v27; // 0x8bff6
        unsigned char v29 = llvm_ctpop_i8((char)v27); // 0x8bff6
        v25 = v20 - 8;
        *(int64_t *)v25 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v28 == 0) | 128 * (int64_t)(v28 < 0) | 4 * (int64_t)(v29 % 2 == 0) | 2;
        v26 = v27 & 0xffffffff;
    }
    int64_t v30 = v25; // 0x8c003
    int64_t v31 = v26; // 0x8c003
    if (v12 == 58) {
        // 0x8c009
        v31 = v26 ^ v19;
        unsigned char v32 = llvm_ctpop_i8((char)v31); // 0x8c009
        v30 = v25 - 8;
        *(int64_t *)v30 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v31 == 0) | 128 * (int64_t)(v31 < 0) | 4 * (int64_t)(v32 % 2 == 0) | 2;
    }
    int64_t * v33 = (int64_t *)(v2 + 113); // 0x8c06d
    *v33 = v31 ^ 0x620f90a5;
    int32_t v34 = *v4 + *v6 | 0x23f8268c; // 0x8c0a2
    *v4 = v34;
    int32_t v35 = v34 & 0x55f7e727 | *v6; // 0x8c0c7
    *v6 = v35;
    unsigned char v36 = *v11; // 0x8c0e8
    int32_t v37 = v35; // 0x8c0f2
    if ((v35 & 2) != 0) {
        // 0x8c0f8
        v37 = (v35 & 0x7dbf9a82) + 0x17476b81;
        *v6 = v37;
    }
    int64_t v38 = v2 + 129; // 0x8c152
    int64_t v39 = *(int64_t *)v30; // 0x8c17a
    int64_t v40 = *(int64_t *)v38; // 0x8c1ba
    int64_t * v41 = (int64_t *)(v2 + 10); // 0x8c1c4
    int64_t v42 = *v41; // 0x8c1c4
    int32_t v43 = v37; // 0x8c1e9
    int64_t v44 = v38 | (int64_t)&g2 | v39; // 0x8c1e9
    if (*(char *)v42 != 0) {
        int64_t v45 = v42 + 3; // 0x8c232
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v45) = v39;
        v43 = *v6;
        v44 = (v3 | 18) - 2 + v45 + ((int64_t)&g3 - v39 + v40 ^ v3);
    }
    int64_t v46 = v40 ^ 0x343190f1 ^ v44 ^ *v33; // 0x8c296
    *v6 = *v4 | v43;
    *v33 = (*v33 ^ 0x620f90a5) + 0x1a44e4ef;
    int32_t v47 = *v4; // 0x8c3b6
    *v4 = v47 - (v47 ^ (int32_t)*(int16_t *)(*v41 + 1));
    *v41 = *v41 + 5;
    return (v46 ^ (int64_t)&g3) - 16 & (v46 ^ v2 + 271 + ((v5 & -256 | (int64_t)v36) & v2 | 4));
}

// Address range: 0x8c41e - 0x8c41f
int64_t function_8c41e(void) {
    // 0x8c41e
    int64_t result; // 0x8c41e
    return result;
}

// Address range: 0x9026f - 0x90319
int64_t function_9026f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x9026f
    int64_t v1; // 0x9026f
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x90280
    int64_t v3 = *v2; // 0x90280
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0x90291
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0x902b2
    *(int64_t *)v5 = v4;
    uint32_t v6 = *(int32_t *)*v2; // 0x902da
    *(int64_t *)(v5 + 8) = *(int64_t *)(v1 + 187) + (int64_t)v6;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x90319 - 0x90895
int64_t function_90319(int64_t a1, int64_t a2) {
    // 0x90319
    int64_t v1; // 0x90319
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x90371
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x90389
    int32_t v4 = *v3; // 0x90389
    int32_t v5 = v4 & (*v2 | 0x6729b5bf); // 0x90389
    int32_t v6 = (v4 & 2) == 0 ? v5 : v5 - 0x3dca653f ^ 0x671da5f4;
    *v3 = v6;
    int32_t v7 = v6 + *v2; // 0x90416
    *v3 = v7;
    int32_t v8 = *v2 ^ 0x63bb548f ^ v7 & 0x48367f78; // 0x90442
    *v2 = v8;
    int32_t v9 = v8 + *v3; // 0x9047d
    *v2 = v9;
    int32_t v10 = *v3; // 0x90494
    int32_t v11 = v9; // 0x904a4
    if ((v10 & 2) != 0) {
        // 0x904aa
        *v3 = v10 + 0x4d34ea7 & 0xfc7215c;
        v11 = *v2;
    }
    int32_t v12 = v11 & 0x292b555d; // 0x904ce
    *v2 = v12;
    int32_t v13 = *v3; // 0x904df
    int32_t v14 = v12; // 0x904ed
    int32_t v15 = v13; // 0x904ed
    if ((v13 & 2) != 0) {
        // 0x90531
        v15 = (v13 & 0x662844c) - 0x7bdaf9d9 ^ 0x4329dbc4;
        *v3 = v15;
        v14 = *v2;
    }
    int64_t * v16 = (int64_t *)(v1 + 10); // 0x9058b
    uint32_t v17 = v15 + (int32_t)*(int16_t *)(*v16 + 2) + v14; // 0x905f7
    *v2 = v17 ^ v14;
    *v3 = *v3 & 0x1c8b6fee;
    int64_t v18 = *(int64_t *)(((int64_t)v17 & (int64_t)&g3) + v1); // 0x90698
    *(int64_t *)v1 = v18 ^ 0xda3b7d9;
    *(char *)(v1 + 367) = 1;
    *v2 = *v2 + (*v3 ^ 0x6b040388);
    *v2 = -0x667e49d1 - (int32_t)*(int16_t *)*v16;
    *v16 = *v16 + 4;
    return 1;
}

// Address range: 0x98354 - 0x98a9a
int64_t function_98354(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x98354
    int64_t v1; // 0x98354
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x9839e
    int32_t v4 = *v3; // 0x9839e
    if ((v4 & 2) != 0) {
        // 0x983b3
        *v3 = v4 ^ 0x44c9a2e4;
    }
    // 0x983d5
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int32_t * v5 = (int32_t *)(v2 + 368); // 0x984c3
    *v3 = *v3 + (*v5 ^ 0x661ea917);
    *v5 = *v5 + 0x240c2129;
    int64_t * v6 = (int64_t *)(v2 + 96); // 0x98599
    int32_t v7 = *v3; // 0x9859f
    if ((v7 & 2) != 0) {
        // 0x985ce
        *v3 = v7 + 0x6aad9867;
    }
    int64_t v8 = *v6 + 0x653cf834; // 0x985b5
    *v6 = v8;
    char v9 = *(char *)(v2 + 404); // 0x98724
    int64_t v10; // 0x98354
    int64_t v11; // 0x98354
    bool v12; // 0x98354
    if (v9 == 98) {
        uint64_t v13 = v8 & v2;
        char v14 = v13; // 0x98731
        int64_t v15 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0) | 2; // bp-8, 0x98734
        v11 = (int64_t)&v15;
        v10 = v13 % 256 | v2 & -256;
    }
    int64_t v16 = v11; // 0x98749
    int64_t v17 = v10; // 0x98749
    if (v9 == 50) {
        uint64_t v18 = v10 & v8;
        int16_t v19 = v18; // 0x9874f
        int64_t v20 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v18) % 2 == 0) | 2; // bp-16, 0x98753
        v16 = (int64_t)&v20;
        v17 = v18 % 0x10000 | v10 & -0x10000;
    }
    int64_t v21 = v16; // 0x98761
    int64_t v22 = v17; // 0x98761
    if (v9 == 80) {
        int64_t v23 = v17 & v8;
        int32_t v24 = v23; // 0x98767
        unsigned char v25 = llvm_ctpop_i8((char)v23); // 0x98767
        v21 = v16 - 8;
        *(int64_t *)v21 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 4 * (int64_t)(v25 % 2 == 0) | 2;
        v22 = v23 & 0xffffffff;
    }
    // 0x98775
    int64_t * v26; // 0x98354
    int64_t v27; // 0x98354
    if (v9 != 58) {
        // 0x98775
        v26 = (int64_t *)v21;
        v27 = v22;
    } else {
        int64_t v28 = v22 & v8; // 0x9877f
        unsigned char v29 = llvm_ctpop_i8((char)v28); // 0x9877f
        int64_t * v30 = (int64_t *)(v21 - 8);
        *v30 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v28 == 0) | 128 * (int64_t)(v28 < 0) | 4 * (int64_t)(v29 % 2 == 0) | 2;
        v26 = v30;
        v27 = v28;
    }
    int64_t * v31 = (int64_t *)(v2 + 113); // 0x987b0
    *v31 = v27 + 0x919fce5;
    int64_t * v32 = (int64_t *)(v2 + 10); // 0x98823
    *v31 = v27 + 0x1a44e4ef;
    if (*(char *)(*v32 + 4) != 0) {
        // 0x988b5
        *(int64_t *)(v2 + (int64_t)*(int16_t *)*v32) = *v26;
    }
    int32_t v33 = *v5 | *v3 & 0x799af059; // 0x9896b
    *v5 = v33;
    *v5 = v33 - 0x2430893a + (int32_t)*(int16_t *)(*v32 + 2) ^ v33;
    *v32 = *v32 + 5;
    return 1;
}

// Address range: 0xa517b - 0xa522e
int64_t function_a517b(void) {
    // 0xa517b
    int64_t v1; // 0xa517b
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xa5185
    int32_t v3 = *(int32_t *)*v2; // 0xa5190
    int64_t v4 = 0; // 0xa51c1
    if (v3 != 0) {
        // 0xa51c7
        int64_t v5; // bp+136, 0xa517b
        int64_t v6 = (int64_t)&v5; // 0xa519b
        int64_t v7 = (int64_t)v3 + v6; // 0xa517b
        int64_t v8 = v6; // 0xa517b
        int64_t v9 = 18; // 0xa51c9
        *(int64_t *)v7 = *(int64_t *)v8;
        v9 = v9 + 0xffffffff & 0xffffffff;
        v7 -= 8;
        v8 -= 8;
        while (v9 != 0) {
            // 0xa51c7
            *(int64_t *)v7 = *(int64_t *)v8;
            v9 = v9 + 0xffffffff & 0xffffffff;
            v7 -= 8;
            v8 -= 8;
        }
        // 0xa51bb
        v4 = (int64_t)*(int32_t *)*v2;
    }
    // 0xa51d0
    int64_t v10; // 0xa517b
    int64_t v11 = v4 + (int64_t)&v10; // 0xa51e7
    *(int64_t *)(v11 + 128) = *(int64_t *)(v11 + 120);
    *(int32_t *)(v1 + 476) = 0;
    return *(int64_t *)(v11 + 112);
}

// Address range: 0xa522e - 0xa5889
int64_t function_a522e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa522e
    int64_t v1; // 0xa522e
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xa5238
    int32_t * v4 = (int32_t *)(v2 + 368); // 0xa5246
    int32_t v5 = *v4 | *v3; // 0xa5246
    *v4 = v5;
    *v3 = *v3 - (v5 & 0x4297c9dd);
    int32_t v6 = *v4 + 0x6462807 & 0x2332d827; // 0xa52f9
    *v4 = v6;
    *v4 = v6 - *v3;
    *(int64_t *)v2 = v2 ^ 0x60414473;
    uint64_t v7 = v2 + 96; // 0xa53ed
    int64_t * v8 = (int64_t *)v7; // 0xa5411
    *v8 = *v8 + 0x653cf834 ^ 0x6de2f3aa;
    int32_t v9 = *v3; // 0xa54b2
    uint32_t v10 = v9 & 2; // 0xa54b5
    if (v10 != 0) {
        // 0xa54c9
        *v3 = v9 + 0x6e7eede6;
    }
    int64_t v11 = v10; // 0xa54b5
    *v4 = *v4 + 0x6f8e6e16;
    int64_t v12 = v2 + 113; // 0xa557d
    int64_t * v13 = (int64_t *)v12; // 0xa558d
    *v13 = *v8 ^ 0x240ef64d;
    int64_t v14 = v7 + v11; // 0xa5590
    int64_t v15 = v14 < v7; // 0xa5593
    *v3 = *v3 ^ *v4;
    int64_t * v16 = (int64_t *)(v2 + 10); // 0xa5616
    int64_t v17 = *v16; // 0xa5616
    if (*(char *)v17 != 0) {
        unsigned char v18 = llvm_ctpop_i8((char)v14); // 0xa5590
        uint16_t v19 = *(int16_t *)(v17 + 1); // 0xa56d2
        bool v20; // 0xa522e
        *(int64_t *)(v2 + (int64_t)v19) = 0x4000 * (int64_t)v20 | 1024 * (int64_t)v20 | 512 * (int64_t)v20 | 256 * (int64_t)v20 | v15 | 16 * (int64_t)(v7 % 16 + v11 > 15) | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 2048 * (int64_t)((v14 & -97 - v2) < 0) | 4 * (int64_t)(v18 % 2 == 0) | 2;
    }
    // 0xa5707
    *v13 = (*v13 ^ 0x49ec05e7) + 0x1a44e4ef;
    int32_t v21 = *v4; // 0xa580d
    *v4 = 0x8f8037a - v21 + (int32_t)*(int16_t *)(*v16 + 3) ^ v21;
    *v16 = *v16 + 5;
    return (2 * (v2 ^ v15) & 2 | -120) - (v12 | (int64_t)L"\n2" | v7 % 2);
}

// Address range: 0xa87b6 - 0xa8e1f
int64_t function_a87b6(void) {
    // 0xa87b6
    int64_t v1; // 0xa87b6
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0xa87ca
    int32_t * v4 = (int32_t *)(v2 + 35); // 0xa87f0
    int32_t v5 = *v4 & (*v3 ^ 0x630a2958); // 0xa87f0
    int32_t v6 = v5 ^ 0x7d6f69f0; // 0xa87fd
    int32_t v7 = (v5 & 2) == 0 ? v6 : v6 - 0x350e18e3 ^ 0x55d05067;
    *v4 = v7;
    *v3 = v7 ^ *v3;
    int32_t v8 = *v4; // 0xa88bf
    if ((v8 & 2) != 0) {
        // 0xa88d3
        *v4 = v8 | 0x696679a3;
    }
    // 0xa88ed
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x193d07ad;
    int64_t * v9 = (int64_t *)(v2 + 96); // 0xa8960
    *v9 = *v9 + 0x4bfff087;
    *v3 = *v3 - *v4;
    int64_t v10 = v2 + 0x193d07ad; // 0xa8a57
    int64_t v11 = *v9 + 0x193d07ad; // 0xa8a99
    char v12 = *(char *)(v2 + 404); // 0xa8ae3
    int64_t v13 = v10; // 0xa8aea
    int64_t v14; // 0xa87b6
    bool v15; // 0xa87b6
    if (v12 == 98) {
        uint64_t v16 = v11 & v10;
        char v17 = v16; // 0xa8af0
        int64_t v18 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v17) % 2 == 0) | 2; // bp-8, 0xa8af3
        v14 = (int64_t)&v18;
        v13 = v16 % 256 | v10 & -256;
    }
    int64_t v19 = v14; // 0xa8b05
    int64_t v20 = v13; // 0xa8b05
    if (v12 == 50) {
        uint64_t v21 = v13 & v11;
        int16_t v22 = v21; // 0xa8b0b
        int64_t v23 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v22 == 0) | 128 * (int64_t)(v22 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v21) % 2 == 0) | 2; // bp-16, 0xa8b0f
        v19 = (int64_t)&v23;
        v20 = v21 % 0x10000 | v13 & -0x10000;
    }
    int64_t v24 = v19; // 0xa8b2f
    int64_t v25 = v20; // 0xa8b2f
    if (v12 == 80) {
        int64_t v26 = v20 & v11;
        int32_t v27 = v26; // 0xa8b35
        unsigned char v28 = llvm_ctpop_i8((char)v26); // 0xa8b35
        v24 = v19 - 8;
        *(int64_t *)v24 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v27 == 0) | 128 * (int64_t)(v27 < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
        v25 = v26 & 0xffffffff;
    }
    int64_t v29 = v24; // 0xa8b4b
    int64_t v30 = v25; // 0xa8b4b
    if (v12 == 58) {
        // 0xa8b51
        v30 = v25 & v11;
        unsigned char v31 = llvm_ctpop_i8((char)v30); // 0xa8b51
        v29 = v24 - 8;
        *(int64_t *)v29 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v30 == 0) | 128 * (int64_t)(v30 < 0) | 4 * (int64_t)(v31 % 2 == 0) | 2;
    }
    int64_t * v32 = (int64_t *)(v2 + 113); // 0xa8bae
    *v32 = v30 - 0x2e043447;
    int64_t * v33 = (int64_t *)(v2 + 10); // 0xa8bf9
    int64_t v34 = *v33; // 0xa8bf9
    if (*(char *)(v34 + 2) != 0) {
        uint16_t v35 = *(int16_t *)(v34 + 3); // 0xa8cb1
        *(int64_t *)(v2 + (int64_t)v35) = *(int64_t *)v29;
    }
    // 0xa8cee
    *v32 = v30 + 0x1a44e4ef;
    int32_t v36 = *v3; // 0xa8d94
    *v3 = (int32_t)*(int16_t *)*v33 - 0x292b93dc + v36 | v36;
    *v33 = *v33 + 5;
    return 124;
}

// Address range: 0xba683 - 0xba72f
int64_t function_ba683(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xba683
    int64_t v1; // 0xba683
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xba694
    int64_t v3 = *v2; // 0xba694
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0xba6a5
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0xba6c7
    *(int64_t *)v5 = v4;
    uint32_t v6 = *(int32_t *)*v2; // 0xba6ef
    *(int64_t *)(v5 + 8) = *(int64_t *)(v1 + 187) + (int64_t)v6;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xba72f - 0xbada5
int64_t function_ba72f(void) {
    // 0xba72f
    int64_t v1; // 0xba72f
    int64_t v2 = v1;
    int64_t v3 = v2 + 35; // 0xba732
    int32_t * v4 = (int32_t *)v3; // 0xba739
    int32_t v5 = *v4; // 0xba739
    int32_t v6 = v5; // 0xba74a
    if ((v5 & 2) != 0) {
        // 0xba750
        v6 = (v5 | 0x6be63b72) ^ 0x55d6ffe2;
        *v4 = v6;
    }
    int64_t v7 = v2 + 368; // 0xba7b7
    int32_t * v8 = (int32_t *)v7; // 0xba7be
    *v4 = *v8 + 0x4fa9822e & v6;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int32_t v9 = *v8 & *v4; // 0xba819
    *v8 = v9;
    int64_t * v10 = (int64_t *)(v2 + 96); // 0xba85e
    *v8 = v9 | 0x5ed258f1;
    *v10 = *v10 + 0x653cf834 ^ 0xbd09c1;
    uint32_t v11 = *v4; // 0xba940
    *v8 = *v8 | v11;
    int64_t v12 = *v10; // 0xba95a
    uint64_t v13 = v12 ^ 0xbd09c1; // 0xba95d
    int64_t v14 = v2 + 404; // 0xba967
    char v15 = *(char *)v14; // 0xba96e
    int64_t v16; // 0xba72f
    int64_t v17; // 0xba72f
    bool v18; // 0xba72f
    if (v15 == 98) {
        unsigned char v19 = (char)v2; // 0xba97b
        unsigned char v20 = (char)v13; // 0xba97b
        unsigned char v21 = v20 + v19; // 0xba97b
        int64_t v22 = 0x4000 * (int64_t)v18 | 1024 * (int64_t)v18 | 512 * (int64_t)v18 | 256 * (int64_t)v18 | (int64_t)(v21 < v19) | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(v20 % 16 + v19 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v21) % 2 == 0) | 2048 * (int64_t)(((v21 ^ v19) & (v21 ^ v20)) < 0) | 2; // bp-8, 0xba97e
        v17 = (int64_t)&v22;
        v16 = v2 & -256 | (int64_t)v21;
    }
    int64_t v23 = v17; // 0xba983
    int64_t v24 = v16; // 0xba983
    if (v15 == 50) {
        uint16_t v25 = (int16_t)v16; // 0xba989
        uint16_t v26 = (int16_t)v13; // 0xba989
        uint16_t v27 = v25 + v26; // 0xba989
        int64_t v28 = 0x4000 * (int64_t)v18 | 1024 * (int64_t)v18 | 512 * (int64_t)v18 | 256 * (int64_t)v18 | (int64_t)(v27 < v25) | 64 * (int64_t)(v27 == 0) | 128 * (int64_t)(v27 < 0) | 16 * (int64_t)(v25 % 16 + v26 % 16 > 15) | 2048 * (int64_t)(((v27 ^ v25) & (v27 ^ v26)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v27) % 2 == 0) | 2; // bp-16, 0xba98d
        v23 = (int64_t)&v28;
        v24 = v16 & -0x10000 | (int64_t)v27;
    }
    int64_t v29 = v23; // 0xba992
    int64_t v30 = v24; // 0xba992
    if (v15 == 80) {
        uint32_t v31 = (int32_t)v24; // 0xba998
        uint32_t v32 = (int32_t)v13; // 0xba998
        uint32_t v33 = v31 + v32; // 0xba998
        unsigned char v34 = llvm_ctpop_i8((char)v33); // 0xba998
        v29 = v23 - 8;
        *(int64_t *)v29 = 0x4000 * (int64_t)v18 | 1024 * (int64_t)v18 | 512 * (int64_t)v18 | 256 * (int64_t)v18 | (int64_t)(v33 < v31) | 64 * (int64_t)(v33 == 0) | 128 * (int64_t)(v33 < 0) | 16 * (int64_t)(v31 % 16 + v32 % 16 > 15) | 2048 * (int64_t)(((v33 ^ v31) & (v33 ^ v32)) < 0) | 4 * (int64_t)(v34 % 2 == 0) | 2;
        v30 = v33;
    }
    uint64_t v35 = v30;
    int64_t * v36; // 0xba72f
    int64_t v37; // 0xba72f
    if (v15 != 58) {
        // 0xba99c
        v36 = (int64_t *)v29;
        v37 = v35;
    } else {
        int64_t v38 = v35 + v13; // 0xba9a6
        unsigned char v39 = llvm_ctpop_i8((char)v38); // 0xba9a6
        int64_t * v40 = (int64_t *)(v29 - 8);
        *v40 = 0x4000 * (int64_t)v18 | 1024 * (int64_t)v18 | 512 * (int64_t)v18 | 256 * (int64_t)v18 | (int64_t)(v38 < v35) | 64 * (int64_t)(v38 == 0) | 128 * (int64_t)(v38 < 0) | 16 * (int64_t)(v35 % 16 + v13 % 16 > 15) | 2048 * (int64_t)(((v38 ^ v35) & (v38 ^ v12)) < 0) | 4 * (int64_t)(v39 % 2 == 0) | 2;
        v36 = v40;
        v37 = v38;
    }
    int64_t v41 = v37 - 0x369b7697; // 0xba9aa
    int64_t v42 = v2 + 113; // 0xba9b4
    int64_t * v43 = (int64_t *)v42; // 0xba9bb
    *v43 = v41;
    int32_t v44 = *v8 ^ *v4 + 0x2ba77993; // 0xba9e9
    *v8 = v44;
    *v4 = *v4 ^ v44;
    int64_t v45 = (v41 ^ v14) - v42 & -369 - v2; // 0xbaa67
    int64_t v46 = *v36; // 0xbaa82
    int64_t v47 = v2 & -1 - (v2 + 129 + v45); // 0xbaa83
    int64_t v48 = v2 + 10; // 0xbaa86
    int64_t v49 = *v43; // 0xbaab5
    int64_t v50 = v49 + 0x369b7697; // 0xbaabf
    int64_t * v51 = (int64_t *)v48; // 0xbaad7
    int64_t v52 = *v51; // 0xbaad7
    int64_t v53 = 1 - (v52 ^ v50 ^ (((v2 + 0x80000000 + 2 * (int64_t)v11 | v2) - v47 ^ v47) & v46 ^ v48) + ((v45 | v2) + (int64_t)L"\n2" & 120 ^ 240)) ^ v52; // 0xbab08
    if (*(char *)(v52 + 4) != 0) {
        // 0xbab0e
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v52) = v46;
        v53 = v50 + v42;
    }
    // 0xbab9c
    *v43 = v49 + 0x50e05b86;
    int64_t v54 = 2 * v2; // 0xbac61
    int64_t v55 = (v3 & v54 | v2 | ((v53 | v42) & 8) + (int64_t)&g2 - 1) + v2; // 0xbac7e
    int64_t v56 = *(int64_t *)(v2 + 271); // 0xbac98
    uint16_t v57 = *(int16_t *)(*v51 + 2); // 0xbacbf
    int64_t v58 = v55 & (int64_t)v57; // 0xbacc4
    *v8 = (int32_t)v57 + 0x7f20b820 + 2 * *v8;
    *v51 = *v51 + 5;
    return 18 - (((v55 & v54 ^ v56) - v58 & 16 ^ 16) & v7 ^ v58 - 1);
}

// Address range: 0xbadaa - 0xbadac
int64_t function_badaa(void) {
    // 0xbadaa
    int64_t result; // 0xbadaa
    return result;
}

// Address range: 0xbba0f - 0xbc06d
int64_t function_bba0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xbba0f
    int64_t v1; // 0xbba0f
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xbba19
    *v3 = *v3 + 0x653cf834 ^ 0x20699b47;
    int32_t * v4 = (int32_t *)(v2 + 368); // 0xbba66
    *v4 = *v4 - 0x1f34eac7;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x20699b47;
    *v4 = *v4 & 0x6ecd1861;
    int64_t v5 = v2 + 0x20699b47; // 0xbbb4f
    int64_t v6 = *v3 ^ 0x20699b47; // 0xbbb91
    char v7 = *(char *)(v2 + 404); // 0xbbbbe
    int64_t v8 = v5; // 0xbbbc5
    int64_t v9; // 0xbba0f
    bool v10; // 0xbba0f
    if (v7 == 98) {
        uint64_t v11 = v6 & v5;
        char v12 = v11; // 0xbbbcb
        int64_t v13 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v12) % 2 == 0) | 2; // bp-8, 0xbbbce
        v9 = (int64_t)&v13;
        v8 = v11 % 256 | v5 & -256;
    }
    int64_t v14 = v9; // 0xbbbe3
    int64_t v15 = v8; // 0xbbbe3
    if (v7 == 50) {
        uint64_t v16 = v8 & v6;
        int16_t v17 = v16; // 0xbbbe9
        int64_t v18 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v16) % 2 == 0) | 2; // bp-16, 0xbbbed
        v14 = (int64_t)&v18;
        v15 = v16 % 0x10000 | v8 & -0x10000;
    }
    int64_t v19 = v14; // 0xbbc03
    int64_t v20 = v15; // 0xbbc03
    if (v7 == 80) {
        int64_t v21 = v15 & v6;
        int32_t v22 = v21; // 0xbbc09
        unsigned char v23 = llvm_ctpop_i8((char)v21); // 0xbbc09
        v19 = v14 - 8;
        *(int64_t *)v19 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v22 == 0) | 128 * (int64_t)(v22 < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
        v20 = v21 & 0xffffffff;
    }
    int64_t v24 = v19; // 0xbbc18
    int64_t v25 = v20; // 0xbbc18
    if (v7 == 58) {
        // 0xbbc1e
        v25 = v20 & v6;
        unsigned char v26 = llvm_ctpop_i8((char)v25); // 0xbbc1e
        v24 = v19 - 8;
        *(int64_t *)v24 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v25 == 0) | 128 * (int64_t)(v25 < 0) | 4 * (int64_t)(v26 % 2 == 0) | 2;
    }
    int64_t * v27 = (int64_t *)(v2 + 113); // 0xbbc69
    *v27 = v25 - 0x4f6d8907;
    int64_t * v28 = (int64_t *)(v2 + 10); // 0xbbca7
    int64_t v29 = *v28; // 0xbbca7
    if (*(char *)(v29 + 2) != 0) {
        // 0xbbd0d
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v29) = *(int64_t *)v24;
    }
    // 0xbbd9b
    *v4 = -0x41dbc7b8 - (*(int32_t *)(v2 + 35) & 0x7d9408a) + *v4;
    *v27 = *v27 + 0x69b26df6;
    uint16_t v30 = *(int16_t *)(*v28 + 3); // 0xbbfbb
    *v4 = ((int32_t)v30 ^ 0x1ffd618f) & *v4;
    *v28 = *v28 + 5;
    return (int64_t)v30 ^ 0x1ffd618e;
}
