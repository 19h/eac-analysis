/*
 * Targeted RetDec C for static-validated VM handler native ranges, batch 3.
 *
 * These handlers already have 100% validated handler-layer transfer models.
 * This artifact keeps native decompiler sidecars for full dispatch-entry
 * coverage and cross-checking against the VM-lifted C pseudocode.
 *
 * Total static-validated handler ranges: 166
 * Batch size: 24
 * Ranges:
 *   0xacfb1-0xad339 entry=253 events=1984 span_bytes=901 insns=191
 *   0x84aa3-0x84e2b entry=62 events=120 span_bytes=903 insns=194
 *   0x97311-0x97699 entry=151 events=45 span_bytes=904 insns=201
 *   0xb11ca-0xb1555 entry=273 events=2115 span_bytes=907 insns=197
 *   0x83e76-0x84206 entry=56 events=27 span_bytes=912 insns=201
 *   0x91379-0x9171b entry=121 events=2198 span_bytes=929 insns=209
 *   0xbcfc8-0xbd37a entry=331 events=157 span_bytes=946 insns=203
 *   0x8b334-0x8b6eb entry=90 events=567 span_bytes=950 insns=204
 *   0x82477-0x8282e entry=48 events=283 span_bytes=951 insns=202
 *   0xb45d2-0xb498e entry=287 events=9723 span_bytes=952 insns=194
 *   0x7bae9-0x7bea8 entry=17 events=758 span_bytes=959 insns=202
 *   0xad849-0xadc0a entry=256 events=3880 span_bytes=961 insns=205
 *   0x8947b-0x89849 entry=83 events=2508 span_bytes=973 insns=206
 *   0xac802-0xacbd3 entry=250 events=75 span_bytes=976 insns=206
 *   0x97ce6-0x980b9 entry=154 events=2209 span_bytes=978 insns=209
 *   0x9dcae-0x9e08a entry=186 events=50 span_bytes=988 insns=209
 *   0xaab6a-0xaaf4c entry=243 events=9466 span_bytes=992 insns=212
 *   0xa991e-0xa9d04 entry=239 events=2519 span_bytes=995 insns=208
 *   0x7f7c4-0x7fbb1 entry=33 events=9247 span_bytes=1004 insns=206
 *   0x9975a-0x99b4a entry=161 events=9482 span_bytes=1007 insns=219
 *   0x9b68a-0x9ba82 entry=172 events=12531 span_bytes=1012 insns=220
 *   0x855ff-0x85a09 entry=66 events=22739 span_bytes=1031 insns=221
 *   0x7dbbb-0x7dfcd entry=26 events=9886 span_bytes=1042 insns=216
 *   0xadf2c-0xae33f entry=258 events=28058 span_bytes=1042 insns=221
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

int64_t function_48f584f3();
int64_t function_49f56c87();
int64_t function_49f7a05c();
int64_t function_70cb3bcb();
int64_t function_ffffffff81c9cf6c();
int64_t function_ffffffff81cd54bc();

// Address range: 0x7bae9 - 0x7be9b
int64_t function_7bae9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x7bae9
    int64_t v1; // 0x7bae9
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x7bb19
    int32_t v3 = *v2 ^ 0x4365071c; // 0x7bb19
    *v2 = v3;
    int32_t * v4 = (int32_t *)(v1 + 368); // 0x7bb36
    *v4 = *v4 | v3;
    *(char *)(v1 + 367) = 0;
    int64_t * v5 = (int64_t *)(v1 + 10); // 0x7bb6e
    int32_t v6 = *v4; // 0x7bb86
    uint32_t v7 = (v6 ^ (int32_t)*(int16_t *)*v5) + *v2; // 0x7bb93
    *v4 = v7 & v6;
    *v2 = *v2 - 0x69693e45;
    int64_t v8 = *(int64_t *)(((int64_t)v7 & (int64_t)&g3) + v1); // 0x7bbbf
    char v9 = *(char *)(*v5 + 2); // 0x7bbd6
    int64_t v10 = v8; // 0x7bbdd
    if (v9 == 98) {
        // 0x7bbe3
        v10 = v8 & -256 | (int64_t)*(char *)v8;
    }
    int64_t v11 = v10;
    int64_t v12 = v11; // 0x7bbea
    if (v9 == 50) {
        // 0x7bbf0
        v12 = v11 & -0x10000 | (int64_t)*(int16_t *)v11;
    }
    int64_t v13 = v12; // 0x7bbf8
    if (v9 == 80) {
        // 0x7bbfe
        v13 = (int64_t)*(int32_t *)v12;
    }
    int64_t v14 = v13; // 0x7bc05
    if (v9 == 58) {
        // 0x7bc0b
        v14 = *(int64_t *)v13;
    }
    // 0x7bc0e
    *(int64_t *)v1 = v14 ^ 0xda3b7d9;
    *v2 = *v2 & 0x3d8b48f7;
    *v4 = *v4 ^ 0x95f9698;
    int32_t v15 = *v2; // 0x7bc60
    int64_t result; // 0x7bae9
    if ((v15 & 2) == 0) {
        // 0x7bca1
        result = v1 + 129;
    } else {
        int32_t v16 = v15 + 0x632a854a; // 0x7bc9b
        *v2 = v16;
        int64_t v17 = v1 + 129; // 0x7bcf7
        result = v17;
        if ((v16 & 2) != 0) {
            // 0x7bd14
            *v2 = (v16 & 0x2b98de46) + 0x459da9b2;
            result = v17;
        }
    }
    // 0x7bd34
    *v4 = (int32_t)*(int16_t *)(*v5 + 3);
    *v5 = *v5 + 5;
    return result;
}

// Address range: 0x7dbbb - 0x7dfbf
int64_t function_7dbbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int16_t a7, int64_t a8) {
    // 0x7dbbb
    int64_t v1; // 0x7dbbb
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x7dbc5
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x7dbd8
    *v3 = *v3 - (*v2 ^ 0x5fcdb203);
    int32_t v4 = *v2 - 0x471264ca; // 0x7dbe5
    *v2 = v4;
    int32_t v5 = *v3; // 0x7dbf6
    int32_t v6 = v5; // 0x7dc03
    int32_t v7 = v4; // 0x7dc03
    if ((v5 & 2) != 0) {
        // 0x7dc09
        v6 = (v5 & 0x637d285c) + 0x44b4a975;
        *v3 = v6;
        v7 = *v2;
    }
    int32_t v8 = (v7 | 0x2a01f150) ^ v6; // 0x7dc66
    int32_t v9 = (v8 & 2) == 0 ? v8 : (v8 | 0x7bdf07f3) + 0x104dd6df;
    int32_t v10 = (v9 & 2) == 0 ? v9 : v9 ^ 0x5e2c5b5f;
    *v3 = v10;
    int32_t v11 = *v2; // 0x7dd4a
    int32_t v12 = v10; // 0x7dd5d
    int32_t v13 = v11; // 0x7dd5d
    if ((v10 & 2) != 0) {
        // 0x7dd63
        v12 = (v10 & 0x6dbe9345) + 0x521a2f7b;
        *v3 = v12;
        v13 = *v2;
    }
    int64_t v14 = *(int64_t *)(v1 + 129) + 0x1a44e4ef; // 0x7dda2
    int64_t * v15 = (int64_t *)(v1 + 10); // 0x7ddc1
    int64_t v16 = v1 + (int64_t)*(int16_t *)(*v15 + 2); // 0x7dddc
    *v3 = v12 + 0x1bfb4659 + v13;
    int64_t v17 = v16 != v14 ? v16 : 0;
    if (*(char *)(v1 + 404) != 50) {
        // 0x7de23
        *(int64_t *)v14 = a8;
        if (v17 != 0) {
            int64_t * v18 = (int64_t *)v17; // 0x7de32
            *v18 = *v18 + 8;
        }
    } else {
        // 0x7de02
        *(int16_t *)v14 = a7;
        if (v17 != 0) {
            int64_t * v19 = (int64_t *)v17; // 0x7de12
            *v19 = *v19 + 2;
        }
    }
    int32_t v20 = *v2 + *v3; // 0x7de85
    *v2 = v20;
    int32_t v21 = *v3; // 0x7de92
    int32_t v22 = v20; // 0x7dea3
    if ((v21 & 2) != 0) {
        // 0x7dea9
        *v3 = v21 & 0x1601a816 | 0x29b44040;
        v22 = *v2;
    }
    int32_t v23 = v22; // 0x7df48
    *v2 = v23 - (v23 ^ 0x6f23a80c ^ (int32_t)*(int16_t *)*v15);
    *v15 = *v15 + 4;
    return v11 & (int32_t)v1 + 368;
}

// Address range: 0x7f7c4 - 0x7fba3
int64_t function_7f7c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int16_t a5, int64_t a6) {
    // 0x7f7c4
    int64_t v1; // 0x7f7c4
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x7f7ce
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x7f7e1
    int32_t v4 = *v3; // 0x7f7e1
    int32_t v5 = v4 ^ *v2 & 0x457915dc; // 0x7f7e1
    *v3 = (v4 & 2) == 0 ? v5 : v5 & 0x16110d0a;
    *v2 = *v2 | 0x15422921;
    int32_t v6 = *v3; // 0x7f839
    if ((v6 & 2) != 0) {
        // 0x7f84b
        *v3 = v6 | 0x5bfeffb6;
    }
    int64_t v7 = *(int64_t *)(v1 + 129) + 0x1a44e4ef; // 0x7f8ea
    int64_t result = v1 + 10; // 0x7f8fb
    int64_t * v8 = (int64_t *)result; // 0x7f902
    int64_t v9 = v1 + (int64_t)*(int16_t *)*v8; // 0x7f910
    int64_t v10 = v9 != v7 ? v9 : 0;
    if (*(char *)(v1 + 404) != 50) {
        // 0x7f950
        *(int64_t *)v7 = a6;
        if (v10 != 0) {
            int64_t * v11 = (int64_t *)v10; // 0x7f960
            *v11 = *v11 + 8;
        }
    } else {
        // 0x7f92d
        *(int16_t *)v7 = a5;
        if (v10 != 0) {
            int64_t * v12 = (int64_t *)v10; // 0x7f93e
            *v12 = *v12 + 2;
        }
    }
    int32_t v13 = *v3; // 0x7f9a6
    if ((v13 & 2) != 0) {
        // 0x7f9bd
        *v3 = v13 + 0x3883bcc0;
    }
    int32_t v14 = *v2; // 0x7faf9
    *v2 = (int32_t)*(int16_t *)(*v8 + 2) + 0x2d0713f3 + v14 & v14;
    *v8 = *v8 + 4;
    return result;
}

// Address range: 0x7fba5 - 0x7fbaa
int64_t function_7fba5(void) {
    // 0x7fba5
    return function_48f584f3();
}

// Address range: 0x82477 - 0x82820
int64_t function_82477(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x82477
    int64_t v1; // 0x82477
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x8248b
    int32_t v3 = *v2; // 0x8248b
    if ((v3 & 2) != 0) {
        // 0x824a8
        *v2 = (v3 ^ 0x8881ae0) - 0x1accc893;
    }
    // 0x824c8
    *(char *)(v1 + 367) = 0;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x82527
    int64_t result = v1 + 368; // 0x8253b
    int32_t * v5 = (int32_t *)result; // 0x82542
    int32_t v6 = *v5; // 0x82542
    uint32_t v7 = v6 + (int32_t)*(int16_t *)(*v4 + 3) ^ *v2; // 0x8254f
    *v5 = v7 & v6;
    *v2 = *v2 & 0x6134e706;
    int64_t v8 = *(int64_t *)(((int64_t)v7 & (int64_t)&g3) + v1); // 0x8257c
    char v9 = *(char *)(*v4 + 2); // 0x82593
    int64_t v10 = v8; // 0x8259a
    if (v9 == 98) {
        // 0x825a0
        v10 = v8 & -256 | (int64_t)*(char *)v8;
    }
    int64_t v11 = v10;
    int64_t v12 = v11; // 0x825a7
    if (v9 == 50) {
        // 0x825ad
        v12 = v11 & -0x10000 | (int64_t)*(int16_t *)v11;
    }
    int64_t v13 = v12; // 0x825b4
    if (v9 == 80) {
        // 0x825ba
        v13 = (int64_t)*(int32_t *)v12;
    }
    int64_t v14 = v13; // 0x825c0
    if (v9 == 58) {
        // 0x825c6
        v14 = *(int64_t *)v13;
    }
    // 0x825c9
    *(int64_t *)v1 = v14 ^ 0xda3b7d9;
    int32_t v15 = *v5 + 0x4f1a7667; // 0x825e8
    *v5 = v15;
    int32_t v16 = *v2; // 0x825f9
    int32_t v17 = v15; // 0x8260a
    int32_t v18 = v16; // 0x8260a
    if ((v16 & 2) != 0) {
        // 0x82610
        v18 = v16 & 0x7e86fbd3 ^ 0x41ba58a6;
        *v2 = v18;
        v17 = *v5;
    }
    int32_t v19 = v17 - v18; // 0x82664
    *v5 = v19;
    int32_t v20 = *v2 & v19 ^ 0x79fc8ff4; // 0x82695
    *v5 = v20;
    int32_t v21 = *v2 - 0x430c028c | v20; // 0x826c0
    *v5 = v21;
    *v5 = *v2 + 0x157b2443 & v21;
    *v5 = -(int32_t)*(int16_t *)*v4;
    *v4 = *v4 + 5;
    return result;
}

// Address range: 0x83e76 - 0x841f9
int64_t function_83e76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x83e76
    int64_t v1; // 0x83e76
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x83ec1
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x6ac8dfb9;
    uint64_t v4 = *v3 + 0x653cf834; // 0x83ed4
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 + 10); // 0x83f17
    uint64_t v6 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v5 + 2)); // 0x83f2e
    int64_t v7 = v2 + 0x6ac8dfb9; // 0x83f5c
    char v8 = *(char *)(v2 + 404); // 0x83fa1
    int64_t v9 = v6; // 0x83fa8
    int64_t v10 = v7; // 0x83fa8
    if (v8 == 98) {
        unsigned char v11 = (char)v4 % 32; // 0x83fb6
        bool v12 = (v6 & (int64_t)L"\n2") != 0; // 0x83fb6
        bool v13 = v6 % 2 != 0; // 0x83fb6
        v10 = v7;
        if (v11 != 0) {
            unsigned char v14 = (char)v7; // 0x83fb6
            unsigned char v15 = v14 << 8 - v11 | v14 >> v11; // 0x83fb6
            char v16 = v15 / 128; // 0x83fb6
            v12 = v11 == 1 ? v16 != v15 / 64 % 2 : (v6 & (int64_t)L"\n2") != 0;
            v13 = v16 != 0;
            v10 = v7 & -256 | (int64_t)v15;
        }
        v9 = 16 * (int64_t)((v6 & 16) != 0) | 4 * (int64_t)((v6 & 4) != 0) | 64 * (int64_t)((v6 & 64) != 0) | 128 * (int64_t)((char)v6 < 0) | 256 * (int64_t)((v6 & 256) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | (int64_t)v13 | 2048 * (int64_t)v12 | 2;
    }
    int64_t v17 = v9;
    int64_t v18 = v17; // 0x83fbe
    int64_t v19 = v10; // 0x83fbe
    if (v8 == 50) {
        uint16_t v20 = (int16_t)v4 % 32; // 0x83fc5
        bool v21 = (v17 & (int64_t)L"\n2") != 0; // 0x83fc5
        bool v22 = v17 % 2 != 0; // 0x83fc5
        v19 = v10;
        if (v20 != 0) {
            uint16_t v23 = (int16_t)v10; // 0x83fc5
            uint16_t v24 = v23 >> v20 | v23 << 16 - v20; // 0x83fc5
            int16_t v25 = v24 / 0x8000; // 0x83fc5
            v21 = v20 == 1 ? v25 != v24 / 0x4000 % 2 : (v17 & (int64_t)L"\n2") != 0;
            v22 = v25 != 0;
            v19 = v10 & -0x10000 | (int64_t)v24;
        }
        v18 = 16 * (int64_t)((v17 & 16) != 0) | 4 * (int64_t)((v17 & 4) != 0) | 64 * (int64_t)((v17 & 64) != 0) | 128 * (int64_t)((char)v17 < 0) | 256 * (int64_t)((v17 & 256) != 0) | 512 * (int64_t)((v17 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v17 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v17 & (int64_t)"le") != 0) | (int64_t)v22 | 2048 * (int64_t)v21 | 2;
    }
    int64_t v26 = v18;
    int64_t v27 = v26; // 0x83fce
    int64_t v28 = v19; // 0x83fce
    if (v8 == 80) {
        uint32_t v29 = (int32_t)v4 % 32; // 0x83fe3
        bool v30 = (v26 & (int64_t)L"\n2") != 0; // 0x83fe3
        bool v31 = v26 % 2 != 0; // 0x83fe3
        v28 = v19;
        if (v29 != 0) {
            uint32_t v32 = (int32_t)v19; // 0x83fe3
            int32_t v33 = v32 >> v29 | v32 << 32 - v29; // 0x83fe3
            v30 = v29 == 1 ? v33 / 0x40000000 % 2 != (int32_t)(v33 < 0) : (v26 & (int64_t)L"\n2") != 0;
            v31 = v33 < 0;
            v28 = v33;
        }
        v27 = 16 * (int64_t)((v26 & 16) != 0) | 4 * (int64_t)((v26 & 4) != 0) | 64 * (int64_t)((v26 & 64) != 0) | 128 * (int64_t)((char)v26 < 0) | 256 * (int64_t)((v26 & 256) != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | (int64_t)v31 | 2048 * (int64_t)v30 | 2;
    }
    int64_t v34 = v28;
    int64_t v35 = v27;
    int64_t v36 = v35; // 0x83fee
    uint64_t v37 = v34; // 0x83fee
    if (v8 == 58) {
        uint64_t v38 = v4 % 64; // 0x83ff8
        bool v39 = (v35 & (int64_t)L"\n2") != 0; // 0x83ff8
        int64_t v40 = v35 % 2; // 0x83ff8
        v37 = v34;
        if (v38 != 0) {
            v37 = v34 >> v38 | v34 << 64 - v38;
            v40 = v37 / 0x8000000000000000;
            v39 = v38 == 1 ? v40 != v37 / 0x4000000000000000 % 2 : (v35 & (int64_t)L"\n2") != 0;
        }
        v36 = 16 * (int64_t)((v35 & 16) != 0) | 4 * (int64_t)((v35 & 4) != 0) | 64 * (int64_t)((v35 & 64) != 0) | 128 * (int64_t)((char)v35 < 0) | 256 * (int64_t)((v35 & 256) != 0) | 512 * (int64_t)((v35 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v35 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v35 & (int64_t)"le") != 0) | 2048 * (int64_t)v39 | (int64_t)(v40 != 0) | 2;
    }
    int64_t * v41 = (int64_t *)(v2 + 113); // 0x8401a
    *v41 = v37 - 0x35e5339e;
    int64_t v42 = *v5; // 0x8405a
    if (*(char *)(v42 + 4) != 0) {
        // 0x84095
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v42 + 2)) = v36;
    }
    // 0x840ef
    *v41 = v37 + 0x1a44e4ef;
    int32_t * v43 = (int32_t *)(v2 + 368); // 0x8418b
    int32_t v44 = *v43; // 0x8418b
    *v43 = ((int32_t)*(int16_t *)*v5 - v44 ^ 0x5380ff71) + v44;
    *v5 = *v5 + 5;
    return (int64_t)&g1 ^ 2;
}

// Address range: 0x841fe - 0x84200
int64_t function_841fe(void) {
    // 0x841fe
    int64_t result; // 0x841fe
    return result;
}

// Address range: 0x84aa3 - 0x84e1d
int64_t function_84aa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x84aa3
    int64_t v1; // 0x84aa3
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x84aad
    int32_t v3 = *v2 + 0xd90ded5; // 0x84aad
    *v2 = v3;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x84ae5
    uint32_t v5 = v3 ^ (int32_t)*(int16_t *)(*v4 + 2); // 0x84b53
    int32_t * v6 = (int32_t *)(v1 + 368); // 0x84b6e
    *v6 = v5 | *v6;
    *v2 = *v2 - 0x219c02d3;
    int64_t v7 = ((int64_t)v5 & (int64_t)&g3) + v1; // 0x84bc3
    *(int64_t *)(v1 + 129) = v7 - 0x1a44e4ef;
    int64_t * v8 = (int64_t *)v7; // 0x84c9e
    *v8 = *v8 + *(int64_t *)(v1 + 187);
    int32_t v9 = *v6 ^ 0x5dbb6647; // 0x84cb5
    *v6 = v9;
    int64_t v10 = *(int64_t *)(v1 + 271); // 0x84d55
    uint32_t v11 = (v9 ^ (int32_t)*(int16_t *)*v4) + 0x7ebb48a2; // 0x84d96
    *v6 = v11 + v9;
    *v4 = *v4 + 4;
    return *(int64_t *)(((int64_t)v11 & (int64_t)&g3) + v10);
}

// Address range: 0x84e1f - 0x84e24
int64_t function_84e1f(void) {
    // 0x84e1f
    return function_ffffffff81c9cf6c();
}

// Address range: 0x855ff - 0x859fc
int64_t function_855ff(int64_t a1) {
    // 0x855ff
    int64_t v1; // 0x855ff
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x85659
    int32_t v3 = *v2; // 0x85659
    if ((v3 & 2) != 0) {
        // 0x85670
        *v2 = v3 - 0x50170614 | 0x7167293a;
    }
    int32_t * v4 = (int32_t *)(v1 + 368); // 0x85710
    int32_t v5 = *v4 & 0x2f6cb1f6; // 0x85710
    *v4 = v5;
    int64_t result = v1 + 10; // 0x85746
    int64_t * v6 = (int64_t *)result; // 0x85780
    int32_t v7 = v5 ^ (int32_t)*(char *)(*v6 + 2); // 0x857b5
    *v4 = v5 - v7;
    *v2 = *v2 ^ 0x42a6ffd6;
    *(char *)(v1 + 404) = (char)v7;
    int32_t v8 = *v4 & 0x13de2cdd ^ 0x105e20d0; // 0x858f1
    *v4 = v8;
    int32_t v9 = v8 - *v2; // 0x8590f
    *v4 = v9;
    *v4 = -0x3cd18153 - v9 + (int32_t)*(int16_t *)*v6 ^ v9;
    *v6 = *v6 + 3;
    return result;
}

// Address range: 0x85a01 - 0x85a04
int64_t function_85a01(void) {
    // 0x85a01
    int64_t result; // 0x85a01
    return result;
}

// Address range: 0x8947b - 0x8983b
int64_t function_8947b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x8947b
    int64_t v1; // 0x8947b
    int64_t v2 = v1;
    int64_t v3 = v1;
    int32_t * v4 = (int32_t *)(v3 + 368); // 0x8948f
    *v4 = *v4 & 0x122d7f19;
    *(int64_t *)v3 = (v3 ^ 0xda3b7d9) - 0x72a40626;
    int64_t * v5 = (int64_t *)(v3 + 96); // 0x894de
    int64_t v6 = *v5 + 0xd7e0fe5a; // 0x894ef
    int32_t * v7 = (int32_t *)(v3 + 35); // 0x89521
    *v5 = v6;
    *v4 = *v4 | *v7;
    uint64_t v8 = *v5 - 0x72a40626; // 0x89595
    int64_t * v9 = (int64_t *)(v3 + 113); // 0x895aa
    *v9 = v8;
    int32_t v10 = *v4 + 0x60e2eab8; // 0x895c5
    *v4 = v10;
    int32_t v11 = *v7; // 0x895db
    int32_t v12 = v10; // 0x895f2
    if ((v11 & 2) != 0) {
        // 0x895f8
        *v7 = (v11 ^ 0xe368451) - 0x1f36e121;
        v12 = *v4;
    }
    // 0x8961a
    *v4 = v12 - 0x34a4c404;
    int64_t * v13 = (int64_t *)(v3 + 10); // 0x89651
    int64_t v14 = *v13; // 0x89651
    if (*(char *)(v14 + 2) != 0) {
        int64_t v15 = v3 - v6; // 0x89524
        uint64_t v16 = ((v15 ^ v2 + 80 - (int64_t)L"\n2" + v1) - 128 | v15 | ((v6 & v3 ^ 1 | v2) & 1 - v2) + 128) + 4; // 0x8955e
        int64_t v17 = v16 + v8; // 0x895ad
        unsigned char v18 = llvm_ctpop_i8((char)v17); // 0x895ad
        uint16_t v19 = *(int16_t *)(v14 + 3); // 0x89688
        bool v20; // 0x8947b
        *(int64_t *)(v3 + (int64_t)v19) = 0x4000 * (int64_t)v20 | 1024 * (int64_t)v20 | 512 * (int64_t)v20 | 256 * (int64_t)v20 | (int64_t)(v17 < v16) | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v16 % 16 + v8 % 16 > 15) | 2048 * (int64_t)(((v17 ^ v16) & (v17 ^ v8)) < 0) | 4 * (int64_t)(v18 % 2 == 0) | 2;
    }
    // 0x89693
    *v9 = *v9 + 0x1a44e4ef;
    int64_t v21 = *(int64_t *)(v3 + 271); // 0x89722
    int32_t v22 = *v4; // 0x8979a
    uint32_t v23 = v22 + (int32_t)*(int16_t *)*v13 ^ 0x4b7ebb84; // 0x897ab
    *v4 = v22 - v23;
    *v13 = *v13 + 5;
    return v21 + (int64_t)(v23 % 0x10000) & ((int64_t)&g2 & (int64_t)&g3) - 8;
}

// Address range: 0x8b334 - 0x8b6de
int64_t function_8b334(int64_t a1, int64_t a2) {
    // 0x8b334
    int64_t v1; // 0x8b334
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x8b33e
    int32_t * v3 = (int32_t *)(v1 + 368); // 0x8b34b
    int32_t v4 = *v3 + *v2; // 0x8b34b
    *v3 = v4;
    *v3 = v4 + 0x1c1030c0 + *v2;
    int32_t v5 = *v2 & 0x4b6fdae0; // 0x8b39e
    *v2 = v5;
    int32_t v6 = *v3 + (v5 | 0x4357e3c2); // 0x8b3c2
    *v3 = v6;
    int64_t * v7 = (int64_t *)(v1 + 10); // 0x8b3f0
    uint32_t v8 = (int32_t)*(int16_t *)(*v7 + 2) - v6 + *v2; // 0x8b466
    *v3 = v8 & v6;
    *v2 = *v2 | 0x3296b63d;
    int64_t v9 = *(int64_t *)(((int64_t)v8 & (int64_t)&g3) + v1); // 0x8b4cc
    *(int64_t *)(v1 + 129) = v9 - 0x1a44e4ef;
    int32_t v10 = *v3 | 0x59296ab9; // 0x8b528
    *v3 = v10;
    int32_t v11 = (*v2 | v10) ^ 0x6ee390ce; // 0x8b55d
    *v3 = v11;
    *v3 = (int32_t)*(int16_t *)*v7 + 0x224914c1 ^ v11;
    *v7 = *v7 + 4;
    return 2;
}

// Address range: 0x91379 - 0x9170d
int64_t function_91379(int64_t a1, int64_t a2) {
    // 0x91379
    int64_t v1; // 0x91379
    int64_t v2 = v1;
    int64_t v3 = v1;
    int32_t * v4 = (int32_t *)(v2 + 35); // 0x913ab
    int64_t v5 = v2 + 368; // 0x913be
    int32_t * v6 = (int32_t *)v5; // 0x913c5
    int32_t v7 = (*v6 ^ *v4 + 0x3154e54a) - 0x288d43ba; // 0x913d2
    *v6 = v7;
    int64_t v8 = v2 + 404; // 0x91410
    unsigned char v9 = *(char *)v8; // 0x91417
    int64_t * v10 = (int64_t *)(v2 + 10); // 0x91475
    int64_t v11 = v8 | (int64_t)&g2; // 0x9147f
    int64_t v12 = v2 + 115; // 0x91486
    int64_t v13 = (v11 ^ v3) - v3; // 0x9149f
    uint16_t v14 = *(int16_t *)*v10; // 0x914a5
    uint32_t v15 = v7 + (int32_t)v14 - *v4; // 0x91502
    *v6 = v15 + v7;
    *v4 = *v4 ^ 0x1753e9d0;
    int64_t v16 = *(int64_t *)(((int64_t)v15 & (int64_t)&g3) + v2); // 0x91592
    *(int64_t *)(v2 + 96) = v16 - 0x653cf834;
    *v10 = *v10 + 4;
    return v2 + 3 + (v13 - ((int64_t)&g1 | 8) ^ 8 ^ v2 + 113 & v12 & v13 ^ (v5 & -256 | v2 | (int64_t)v9) ^ (v12 - v11 | 16) - (int64_t)v14);
}

// Address range: 0x9170f - 0x91714
int64_t function_9170f(void) {
    // 0x9170f
    return function_49f7a05c();
}

// Address range: 0x97311 - 0x9768c
int64_t function_97311(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x97311
    int64_t v1; // 0x97311
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x97344
    *v3 = *v3 + 0x7b2fbffb;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0x973af
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)*v4); // 0x973d4
    uint64_t v6 = *v3 - 0x15f2c7c7; // 0x97418
    char v7 = *(char *)(v2 + 404); // 0x97444
    int64_t v8 = v5; // 0x9744b
    int64_t v9; // 0x97311
    if (v7 == 98) {
        unsigned char v10 = (char)v6 % 32; // 0x9745c
        bool v11 = (v5 & 64) != 0; // 0x9745c
        unsigned char v12 = (char)v5; // 0x9745c
        bool v13 = (v5 & (int64_t)L"\n2") != 0; // 0x9745c
        bool v14 = (v5 & 4) != 0; // 0x9745c
        bool v15 = v5 % 2 != 0; // 0x9745c
        int64_t v16; // 0x97311
        if (v10 != 0) {
            char v17 = v2; // 0x9745c
            v12 = v17 << v10;
            unsigned char v18 = llvm_ctpop_i8(v12); // 0x9745c
            char v19 = (v17 << v10 - 1) / 128; // 0x9745c
            v13 = v10 == 1 ? v12 / 128 != v19 : (v5 & (int64_t)L"\n2") != 0;
            v11 = v12 == 0;
            v14 = v18 % 2 == 0;
            v15 = v19 != 0;
            v16 = v2 & -256 | (int64_t)v12;
        }
        v8 = 256 * (int64_t)((v5 & 256) != 0) | 16 * (int64_t)((v5 & 16) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | 64 * (int64_t)v11 | 128 * (int64_t)(v12 < 0) | 2048 * (int64_t)v13 | (int64_t)v15 | 4 * (int64_t)v14 | 2;
        v9 = v16;
    }
    int64_t v20 = v8;
    int64_t v21 = v20; // 0x9746b
    int64_t v22 = v9; // 0x9746b
    if (v7 == 50) {
        uint16_t v23 = (int16_t)v6 % 32; // 0x97479
        bool v24 = (v20 & 64) != 0; // 0x97479
        bool v25 = (char)v20 < 0; // 0x97479
        bool v26 = (v20 & (int64_t)L"\n2") != 0; // 0x97479
        bool v27 = (v20 & 4) != 0; // 0x97479
        bool v28 = v20 % 2 != 0; // 0x97479
        v22 = v9;
        if (v23 != 0) {
            int16_t v29 = v9; // 0x97479
            uint16_t v30 = v29 << v23; // 0x97479
            unsigned char v31 = llvm_ctpop_i8((char)v30); // 0x97479
            int16_t v32 = (v29 << v23 - 1) / 0x8000; // 0x97479
            v26 = v23 == 1 ? v30 / 0x8000 != v32 : (v20 & (int64_t)L"\n2") != 0;
            v24 = v30 == 0;
            v25 = v30 < 0;
            v27 = v31 % 2 == 0;
            v28 = v32 != 0;
            v22 = v9 & -0x10000 | (int64_t)v30;
        }
        v21 = 256 * (int64_t)((v20 & 256) != 0) | 16 * (int64_t)((v20 & 16) != 0) | 512 * (int64_t)((v20 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v20 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v20 & (int64_t)"le") != 0) | 64 * (int64_t)v24 | 128 * (int64_t)v25 | 2048 * (int64_t)v26 | (int64_t)v28 | 4 * (int64_t)v27 | 2;
    }
    int64_t v33 = v21;
    int64_t v34 = v33; // 0x97489
    int64_t v35 = v22; // 0x97489
    if (v7 == 80) {
        uint32_t v36 = (int32_t)v6 % 32; // 0x97490
        bool v37 = (v33 & 64) != 0; // 0x97490
        bool v38 = (char)v33 < 0; // 0x97490
        bool v39 = (v33 & (int64_t)L"\n2") != 0; // 0x97490
        bool v40 = (v33 & 4) != 0; // 0x97490
        bool v41 = v33 % 2 != 0; // 0x97490
        v35 = v22;
        if (v36 != 0) {
            int32_t v42 = v22; // 0x97490
            int32_t v43 = v42 << v36; // 0x97490
            unsigned char v44 = llvm_ctpop_i8((char)v43); // 0x97490
            v39 = v36 == 1 ? v43 < 0 != v42 << v36 - 1 < 0 : (v33 & (int64_t)L"\n2") != 0;
            v37 = v43 == 0;
            v38 = v43 < 0;
            v40 = v44 % 2 == 0;
            v41 = v42 << v36 - 1 < 0;
            v35 = v43;
        }
        v34 = 256 * (int64_t)((v33 & 256) != 0) | 16 * (int64_t)((v33 & 16) != 0) | 512 * (int64_t)((v33 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v33 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v33 & (int64_t)"le") != 0) | 64 * (int64_t)v37 | 128 * (int64_t)v38 | 2048 * (int64_t)v39 | (int64_t)v41 | 4 * (int64_t)v40 | 2;
    }
    int64_t v45 = v34;
    int64_t v46 = v45; // 0x9749f
    int64_t v47 = v35; // 0x9749f
    if (v7 == 58) {
        uint64_t v48 = v6 % 64; // 0x974a6
        bool v49 = (v45 & 64) != 0; // 0x974a6
        bool v50 = (char)v45 < 0; // 0x974a6
        bool v51 = (v45 & (int64_t)L"\n2") != 0; // 0x974a6
        bool v52 = (v45 & 4) != 0; // 0x974a6
        int64_t v53 = v45 % 2; // 0x974a6
        v47 = v35;
        if (v48 != 0) {
            v47 = v35 << v48;
            unsigned char v54 = llvm_ctpop_i8((char)v47); // 0x974a6
            v53 = (v35 << v48 - 1) / 0x8000000000000000;
            v51 = v48 == 1 ? v47 >> 63 != v53 : (v45 & (int64_t)L"\n2") != 0;
            v49 = v47 == 0;
            v50 = v47 < 0;
            v52 = v54 % 2 == 0;
        }
        v46 = 256 * (int64_t)((v45 & 256) != 0) | 16 * (int64_t)((v45 & 16) != 0) | 512 * (int64_t)((v45 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v45 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v45 & (int64_t)"le") != 0) | 64 * (int64_t)v49 | 128 * (int64_t)v50 | 2048 * (int64_t)v51 | 4 * (int64_t)v52 | (int64_t)(v53 != 0) | 2;
    }
    // 0x974ad
    *(int64_t *)(v2 + 113) = v47 + 0x1a44e4ef;
    int32_t * v55 = (int32_t *)(v2 + 368); // 0x97514
    int32_t v56 = *v55 + *(int32_t *)(v2 + 35); // 0x97514
    *v55 = v56;
    int64_t v57 = *v4; // 0x9752d
    int32_t v58 = v56; // 0x9754e
    int64_t v59 = v57; // 0x9754e
    if (*(char *)(v57 + 2) != 0) {
        // 0x97554
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v57) = v46;
        v58 = *v55;
        v59 = *v4;
    }
    int32_t v60 = v58; // 0x97618
    *v55 = v60 + 0x77236c60 + (int32_t)*(int16_t *)(v59 + 3) ^ v60;
    *v4 = *v4 + 5;
    return ((v46 & -113 - v2 ^ (int64_t)L"\n2" | v2) ^ 120) - 32;
}

// Address range: 0x97ce6 - 0x980ab
int64_t function_97ce6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x97ce6
    int64_t v1; // 0x97ce6
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x97d06
    int32_t v3 = *v2; // 0x97d06
    if ((v3 & 2) != 0) {
        int32_t v4 = v3 + 0x60c316f3; // 0x97d25
        int32_t v5 = v4 & 0x56154baf; // 0x97d36
        *v2 = v5;
        if ((v4 & 2) != 0) {
            // 0x97d5e
            *v2 = v5 + 0xbc52893 & 0x57db669e;
        }
    }
    int64_t * v6 = (int64_t *)(v1 + 10); // 0x97d8e
    int32_t * v7 = (int32_t *)(v1 + 368); // 0x97df7
    int32_t v8 = *v7; // 0x97df7
    uint32_t v9 = v8 ^ (int32_t)*(int16_t *)(*v6 + 2); // 0x97df7
    *v7 = v8 - v9;
    *v2 = *v2 | 0x7ed018fb;
    int64_t v10 = *(int64_t *)(((int64_t)v9 & (int64_t)&g3) + v1); // 0x97e9e
    *(int64_t *)(v1 + 96) = v10 - 0x653cf834;
    int32_t v11 = *v7 - *v2; // 0x97f35
    *v7 = v11;
    int32_t v12 = (*v2 ^ 0x18426e67) + v11; // 0x97f6e
    *v7 = v12;
    *v2 = v12 & 0x7358a4cc & *v2;
    int32_t v13 = *v7; // 0x9802a
    uint32_t v14 = (int32_t)*(int16_t *)*v6 - v13 - 0x6535d747; // 0x98037
    *v7 = v13 - v14;
    *v6 = *v6 + 4;
    return *(int64_t *)(*(int64_t *)(v1 + 271) + (int64_t)(v14 % 0x10000));
}

// Address range: 0x9975a - 0x99b3c
int64_t function_9975a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x9975a
    int64_t v1; // 0x9975a
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x99841
    int64_t * v3 = (int64_t *)(v1 + (int64_t)*(int16_t *)(*v2 + 2));
    *v3 = *v3 + (*(char *)(v1 + 404) != 50 ? -8 : -2);
    int32_t * v4 = (int32_t *)(v1 + 35); // 0x9991a
    int32_t v5 = *v4 ^ 0x327a10ce; // 0x9991a
    *v4 = (v5 & 2) == 0 ? v5 : v5 + 0xb99ee49 | 0x3aec080c;
    int32_t * v6 = (int32_t *)(v1 + 368); // 0x99975
    *v6 = *v6 | 0x69145e52;
    *v4 = *v4 - 0x2cb08b7a;
    int64_t v7 = *(int64_t *)(v1 + 271); // 0x999f8
    int64_t v8 = *v2; // 0x99a4b
    uint16_t v9 = *(int16_t *)v8; // 0x99a65
    int32_t v10 = *v6; // 0x99a94
    int64_t result = *(int64_t *)(((int64_t)((int32_t)v9 + 0x4c0132b4 + v10) & (int64_t)&g3) + v7); // 0x99b15
    *v2 = v8 + 4;
    return result;
}

// Address range: 0x9b68a - 0x9ba74
int64_t function_9b68a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x9b68a
    int64_t v1; // 0x9b68a
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x9b75b
    int32_t v4 = *v3; // 0x9b75b
    int32_t v5 = v4; // 0x9b76c
    if ((v4 & 2) != 0) {
        // 0x9b772
        v5 = v4 ^ 0x15bf847f;
        *v3 = v5;
    }
    int32_t * v6 = (int32_t *)(v2 + 368); // 0x9b796
    *v3 = (*v6 | 0x3eba9edf) & v5;
    int32_t v7 = (*v6 ^ 0x7070916c) - 0x6ecee241; // 0x9b7d5
    *v6 = v7;
    int64_t * v8 = (int64_t *)(v2 + 10); // 0x9b80d
    uint32_t v9 = v7 ^ (int32_t)*(int16_t *)*v8 ^ *v3; // 0x9b892
    *v6 = v9 + v7;
    *v3 = *v3 | 0x7bf184c4;
    *(int64_t *)(v2 + 129) = v2 - 0x1a44e4ef + ((int64_t)v9 & (int64_t)&g3);
    *v6 = (int32_t)*(int16_t *)(*v8 + 2) ^ 0x715f0a33 | *v6;
    *v8 = *v8 + 4;
    return 0;
}

// Address range: 0x9ba76 - 0x9ba78
int64_t function_9ba76(void) {
    // 0x9ba76
    int64_t result; // 0x9ba76
    return result;
}

// Address range: 0x9ba7d - 0x9ba82
int64_t function_9ba7d(void) {
    // 0x9ba7d
    return function_70cb3bcb();
}

// Address range: 0x9dcae - 0x9e07d
int64_t function_9dcae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9dcae
    int64_t v1; // 0x9dcae
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x9dcc2
    int32_t v4 = *v3; // 0x9dcc2
    if ((v4 & 2) != 0) {
        // 0x9dcdb
        *v3 = (v4 & 0x2dc3128f) + 0x6176101;
    }
    // 0x9dcff
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x3e70b6a;
    int64_t * v5 = (int64_t *)(v2 + 96); // 0x9dd30
    int64_t v6 = *v5; // 0x9dd30
    *v5 = v6 + 0x6155ecca;
    int64_t * v7 = (int64_t *)(v2 + 10); // 0x9dd68
    uint64_t v8 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v7 + 1)); // 0x9dd88
    int64_t v9 = v2 + 0x3e70b6a; // 0x9ddb3
    uint64_t v10 = v6 + 0x653cf834; // 0x9dde6
    char v11 = *(char *)(v2 + 404); // 0x9de18
    int64_t v12 = v8; // 0x9de1f
    int64_t v13 = v9; // 0x9de1f
    if (v11 == 98) {
        unsigned char v14 = (char)v10 % 32; // 0x9de26
        bool v15 = (v8 & 4) != 0; // 0x9de26
        bool v16 = (v8 & 64) != 0; // 0x9de26
        char v17 = v8; // 0x9de26
        bool v18 = (v8 & (int64_t)L"\n2") != 0; // 0x9de26
        bool v19 = v8 % 2 != 0; // 0x9de26
        v13 = v9;
        if (v14 != 0) {
            char v20 = v9; // 0x9de26
            v17 = v20 >> v14;
            v18 = v14 == 1 ? v20 < 0 : (v8 & (int64_t)L"\n2") != 0;
            v15 = llvm_ctpop_i8(v17) % 2 == 0;
            v16 = v17 == 0;
            v19 = (1 << v14 - 1 & v20) != 0;
            v13 = v9 & -256 | (int64_t)v17;
        }
        v12 = 256 * (int64_t)((v8 & 256) != 0) | 16 * (int64_t)((v8 & 16) != 0) | 512 * (int64_t)((v8 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v8 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v8 & (int64_t)"le") != 0) | 4 * (int64_t)v15 | 64 * (int64_t)v16 | (int64_t)v19 | 128 * (int64_t)(v17 < 0) | 2048 * (int64_t)v18 | 2;
    }
    int64_t v21 = v12;
    int64_t v22 = v21; // 0x9de2e
    int64_t v23 = v13; // 0x9de2e
    if (v11 == 50) {
        uint16_t v24 = (int16_t)v10 % 32; // 0x9de43
        bool v25 = (v21 & 4) != 0; // 0x9de43
        bool v26 = (v21 & 64) != 0; // 0x9de43
        bool v27 = (char)v21 < 0; // 0x9de43
        bool v28 = (v21 & (int64_t)L"\n2") != 0; // 0x9de43
        bool v29 = v21 % 2 != 0; // 0x9de43
        v23 = v13;
        if (v24 != 0) {
            int16_t v30 = v13; // 0x9de43
            int16_t v31 = v30 >> v24; // 0x9de43
            v28 = v24 == 1 ? v30 < 0 : (v21 & (int64_t)L"\n2") != 0;
            v25 = llvm_ctpop_i8((char)v31) % 2 == 0;
            v26 = v31 == 0;
            v27 = v31 < 0;
            v29 = (1 << v24 - 1 & v30) != 0;
            v23 = v13 & -0x10000 | (int64_t)v31;
        }
        v22 = 256 * (int64_t)((v21 & 256) != 0) | 16 * (int64_t)((v21 & 16) != 0) | 512 * (int64_t)((v21 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v21 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v21 & (int64_t)"le") != 0) | 4 * (int64_t)v25 | 64 * (int64_t)v26 | 128 * (int64_t)v27 | (int64_t)v29 | 2048 * (int64_t)v28 | 2;
    }
    int64_t v32 = v22;
    int64_t v33 = v32; // 0x9de4c
    int64_t v34 = v23; // 0x9de4c
    if (v11 == 80) {
        uint32_t v35 = (int32_t)v10 % 32; // 0x9de56
        bool v36 = (v32 & 4) != 0; // 0x9de56
        bool v37 = (v32 & 64) != 0; // 0x9de56
        bool v38 = (char)v32 < 0; // 0x9de56
        bool v39 = (v32 & (int64_t)L"\n2") != 0; // 0x9de56
        bool v40 = v32 % 2 != 0; // 0x9de56
        v34 = v23;
        if (v35 != 0) {
            int32_t v41 = v23; // 0x9de56
            int32_t v42 = v41 >> v35; // 0x9de56
            v39 = v35 == 1 ? v41 < 0 : (v32 & (int64_t)L"\n2") != 0;
            v36 = llvm_ctpop_i8((char)v42) % 2 == 0;
            v37 = v42 == 0;
            v38 = v42 < 0;
            v40 = (1 << v35 - 1 & v41) != 0;
            v34 = v42;
        }
        v33 = 256 * (int64_t)((v32 & 256) != 0) | 16 * (int64_t)((v32 & 16) != 0) | 512 * (int64_t)((v32 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v32 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v32 & (int64_t)"le") != 0) | 4 * (int64_t)v36 | 64 * (int64_t)v37 | 128 * (int64_t)v38 | (int64_t)v40 | 2048 * (int64_t)v39 | 2;
    }
    int64_t v43 = v33;
    int64_t v44 = v43; // 0x9de68
    int64_t v45 = v34; // 0x9de68
    if (v11 == 58) {
        uint64_t v46 = v10 % 64; // 0x9de76
        bool v47 = (v43 & 4) != 0; // 0x9de76
        bool v48 = (v43 & 64) != 0; // 0x9de76
        bool v49 = (char)v43 < 0; // 0x9de76
        bool v50 = (v43 & (int64_t)L"\n2") != 0; // 0x9de76
        int64_t v51 = v43 % 2; // 0x9de76
        v45 = v34;
        if (v46 != 0) {
            v45 = v34 >> v46;
            v50 = v46 == 1 ? v34 < 0 : (v43 & (int64_t)L"\n2") != 0;
            v47 = llvm_ctpop_i8((char)v45) % 2 == 0;
            v48 = v45 == 0;
            v49 = v45 < 0;
            v51 = v34 & 1 << v46 - 1;
        }
        v44 = 256 * (int64_t)((v43 & 256) != 0) | 16 * (int64_t)((v43 & 16) != 0) | 512 * (int64_t)((v43 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v43 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v43 & (int64_t)"le") != 0) | 4 * (int64_t)v47 | 64 * (int64_t)v48 | 128 * (int64_t)v49 | 2048 * (int64_t)v50 | (int64_t)(v51 != 0) | 2;
    }
    int64_t * v52 = (int64_t *)(v2 + 113); // 0x9deaa
    *v52 = v45 ^ 0x5ce973ae;
    int64_t v53 = *v7; // 0x9deea
    if (*(char *)v53 != 0) {
        // 0x9df22
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v53 + 1)) = v44;
    }
    int64_t result = v45 + 0x1a44e4ef; // 0x9defe
    *v52 = result;
    int32_t * v54 = (int32_t *)(v2 + 368); // 0x9e017
    int32_t v55 = *v54; // 0x9e017
    *v54 = (int32_t)*(int16_t *)(*v7 + 3) + 0x72198f10 + v55 & v55;
    *v7 = *v7 + 5;
    return result;
}

// Address range: 0xa991e - 0xa9cf7
int64_t function_a991e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa991e
    int64_t v1; // 0xa991e
    int32_t * v2 = (int32_t *)(v1 + 368); // 0xa9928
    int32_t v3 = *v2 + 0x40a7aa16; // 0xa9928
    *v2 = v3;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0xa9938
    int32_t v5 = *v4 + v3; // 0xa9946
    *v2 = v5;
    *v4 = *v4 & v5 + 0x627d85ab;
    int32_t v6 = *v2 & 0x39d16b3e; // 0xa99b0
    *v2 = v6;
    int32_t v7 = *v4; // 0xa99b7
    int32_t v8 = v6; // 0xa99c8
    if ((v7 & 2) != 0) {
        // 0xa99ce
        *v4 = v7 + 0x1b54516 & 0x66aaa5e;
        v8 = *v2;
    }
    int64_t result = v1 + 10; // 0xa9a36
    int64_t * v9 = (int64_t *)result; // 0xa9a3d
    uint32_t v10 = *(int32_t *)*v9 - v8; // 0xa9a83
    *v2 = v10 & v8;
    *(int64_t *)(v1 + 96) = (int64_t)v10 - 0x653cf834;
    int32_t v11 = *v4; // 0xa9b76
    if ((v11 & 2) != 0) {
        // 0xa9b8d
        *v4 = (v11 | 0x476bca10) ^ 0x38940127;
    }
    // 0xa9baf
    *v2 = 0x3650a0ae - (int32_t)*(int16_t *)(*v9 + 4);
    *v9 = *v9 + 6;
    return result;
}

// Address range: 0xaab6a - 0xaaf3e
int64_t function_aab6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int16_t a7, int64_t a8) {
    // 0xaab6a
    int64_t v1; // 0xaab6a
    int32_t * v2 = (int32_t *)(v1 + 368); // 0xaab8b
    int32_t * v3 = (int32_t *)(v1 + 35); // 0xaab9f
    int32_t v4 = *v2 | *v3 | 0x5f60d018; // 0xaab9f
    *v3 = v4;
    *v3 = *v2 + v4;
    int32_t v5 = *v2 ^ 0x47b31677; // 0xaac07
    *v2 = v5;
    int32_t v6 = *v3; // 0xaac18
    int32_t v7 = v5; // 0xaac27
    int32_t v8 = v6; // 0xaac27
    if ((v6 & 2) != 0) {
        // 0xaac2d
        v8 = v6 + 0x398f70f4 & 0x4ec4a2f1;
        *v3 = v8;
        v7 = *v2;
    }
    int32_t v9 = v8 | v7; // 0xaac65
    *v2 = v9;
    *v3 = *v3 & v9 - 0x289ce9b6;
    *v2 = *v2 ^ 0x57df388c;
    int64_t v10 = *(int64_t *)(v1 + 129) + 0x1a44e4ef; // 0xaacf6
    int64_t * v11 = (int64_t *)(v1 + 10); // 0xaad0e
    int64_t v12 = v1 + (int64_t)*(int16_t *)(*v11 + 2); // 0xaad1e
    int64_t v13 = v12 != v10 ? v12 : 0;
    if (*(char *)(v1 + 404) != 50) {
        // 0xaad5c
        *(int64_t *)v10 = a8;
        if (v13 != 0) {
            int64_t * v14 = (int64_t *)v13; // 0xaad6b
            *v14 = *v14 + 8;
        }
    } else {
        // 0xaad3b
        *(int16_t *)v10 = a7;
        if (v13 != 0) {
            int64_t * v15 = (int64_t *)v13; // 0xaad4b
            *v15 = *v15 + 2;
        }
    }
    int32_t v16 = *v2 & *v3; // 0xaadc3
    *v2 = v16;
    *v3 = *v3 & v16;
    int32_t v17 = *v2; // 0xaae91
    *v2 = ((int32_t)*(int16_t *)*v11 - v17 ^ 0xbdd98a5) + v17;
    *v11 = *v11 + 4;
    return 0;
}

// Address range: 0xac802 - 0xacbc5
int64_t function_ac802(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xac802
    int64_t v1; // 0xac802
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xac823
    int32_t * v3 = (int32_t *)(v1 + 368); // 0xac83a
    *v3 = *v3 ^ *v2;
    int64_t result = v1 + 10; // 0xac8bd
    int64_t * v4 = (int64_t *)result; // 0xac8ce
    *(char *)(v1 + 225) = *(char *)*v4;
    int32_t v5 = *v3 + *v2; // 0xac96b
    *v3 = v5;
    *v3 = ((*v2 | 0x75c2d7ad) ^ v5) + 0x3d28c7fc;
    int32_t v6 = *v2; // 0xac9d4
    if ((v6 & 2) != 0) {
        int32_t v7 = v6 & 0x68a0e4da; // 0xac9ff
        int32_t v8 = v7 + 0x40c8070a; // 0xaca0f
        *v2 = v8;
        if ((v8 & 2) != 0) {
            // 0xaca44
            *v2 = v7 + 0x171883d5;
        }
    }
    int32_t v9 = *v3; // 0xaca66
    int32_t v10 = v9 - 0xb911f97; // 0xaca66
    *v3 = v10;
    *v3 = 0x7d3e8f5d - v9 + (int32_t)*(int16_t *)(*v4 + 1) | v10;
    *v4 = *v4 + 3;
    return result;
}

// Address range: 0xacfb1 - 0xad32c
int64_t function_acfb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xacfb1
    int64_t v1; // 0xacfb1
    int64_t v2 = v1;
    int64_t v3 = v2 + 368; // 0xad01e
    int32_t * v4 = (int32_t *)v3; // 0xad025
    int32_t v5 = (*v4 | 0x764111b0) + 0x6d2270cb; // 0xad043
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 + 10); // 0xad0a1
    int32_t * v7 = (int32_t *)(v2 + 35); // 0xad0fe
    uint32_t v8 = *v7 ^ *(int32_t *)(*v6 + 2); // 0xad0fe
    *v4 = v8 + v5;
    *v7 = *v7 | 0x62c3b0dd;
    *(int64_t *)(v2 + 96) = (int64_t)v8 - 0x653cf834;
    int32_t v9 = *v4 + (*v7 | 0x2b96d1d1) & 0x2d46e2e3; // 0xad1a4
    *v4 = v9;
    *v7 = v9 + 0x76b870d6 ^ *v7;
    int64_t v10 = *(int64_t *)(v2 + 129); // 0xad1e5
    int64_t v11 = v2 + 271; // 0xad242
    int64_t v12 = *v6; // 0xad259
    int64_t v13 = *(int64_t *)v11; // 0xad29d
    int64_t v14 = (v2 + (int64_t)&g1 + 129 - (v10 & v2) | v11) & 4; // 0xad2c2
    *v4 = *v4 ^ (int32_t)*(int16_t *)v12 + 0x7c5d4802;
    *v6 = *v6 + 6;
    return ((v3 | 80) - v12 - (v14 | 128) | v13) + 2 * (v14 & ((int64_t)&g1 | 64) - 368 - v2) & 129;
}

// Address range: 0xad849 - 0xadbfd
int64_t function_ad849(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xad849
    int64_t v1; // 0xad849
    int64_t v2 = *(int64_t *)(v1 + 113) - 0x1a44e4ef; // 0xad860
    int64_t v3 = *(int64_t *)(v1 + 129); // 0xad880
    int64_t v4 = v3 + 0x1a44e4ef; // 0xad883
    char v5 = *(char *)(v1 + 404); // 0xad894
    if (v5 == 98) {
        // 0xad8a1
        *(char *)v4 = (char)v2;
    }
    if (v5 == 50) {
        // 0xad8ad
        *(int16_t *)v4 = (int16_t)v2;
    }
    int64_t v6 = v4; // 0xad8b4
    if (v5 == 80) {
        // 0xad8ba
        *(int32_t *)v4 = (int32_t)v2;
        v6 = v4;
        if (*(char *)(v1 + 367) != 0) {
            int64_t v7 = v3 + 0x1a44e4f3; // 0xad8d0
            *(int32_t *)v7 = 0;
            v6 = v7;
        }
    }
    if (v5 == 58) {
        // 0xad8e7
        *(int64_t *)v6 = v2;
    }
    int64_t v8 = v1 + 368; // 0xad8fe
    int32_t * v9 = (int32_t *)v8; // 0xad909
    int32_t v10 = *v9 ^ 0x3e93f8db; // 0xad909
    *v9 = v10;
    int32_t * v11 = (int32_t *)(v1 + 35); // 0xad933
    *v11 = *v11 - v10 ^ 0x7a7f365a;
    int32_t v12 = *v9 + 0x1734aabd; // 0xad952
    *v9 = v12;
    uint32_t v13 = *v11; // 0xad988
    int32_t v14 = v13 ^ v12; // 0xad995
    *v9 = v14;
    int32_t v15 = *v11 | v14; // 0xad9bc
    *v9 = v15 ^ 0x30de4dc1;
    int64_t v16 = v15 ^ 0x418bf184; // 0xada65
    *v11 = v15 ^ 0x1feafcc2 ^ *v11;
    int64_t v17 = v16 | (int64_t)&g2; // 0xadaae
    int64_t * v18 = (int64_t *)(v1 + 10); // 0xadaec
    int32_t v19 = *v9; // 0xadb42
    uint32_t v20 = v19 + (int32_t)*(int16_t *)*v18; // 0xadb42
    *v9 = v20 - 0x3817cdcc & v19;
    *v18 = *v18 + 2;
    return v17 + ((v8 | ((int64_t)&g1 & (int64_t)&g2) + 0x80000000 & (int64_t)&g3) ^ 128) - ((v17 ^ v8 & (int64_t)v13) + v16 ^ 156) + (int64_t)v20 | 32;
}

// Address range: 0xadf2c - 0xae332
int64_t function_adf2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xadf2c
    int64_t v1; // 0xadf2c
    int64_t v2 = v1 + 35; // 0xadf3c
    int32_t * v3 = (int32_t *)v2; // 0xadf43
    int32_t v4 = *v3; // 0xadf43
    if ((v4 & 2) != 0) {
        // 0xadf57
        *v3 = v4 - 0x1510614f | 0xa1b079a;
    }
    int64_t v5 = v1 + 368; // 0xadf87
    int32_t * v6 = (int32_t *)v5; // 0xadf8e
    *v6 = *v6 ^ 0x11095fd5;
    int32_t v7 = *v3 ^ 0x1769756e; // 0xadfb6
    *v3 = v7;
    int32_t v8 = *v6 + v7; // 0xae01c
    *v6 = v8;
    unsigned char v9 = *(char *)(v1 + 404); // 0xae01f
    int64_t * v10 = (int64_t *)(v1 + 10); // 0xae04e
    int64_t v11 = *v10 + 2; // 0xae057
    int64_t v12 = v11 & v2; // 0xae061
    int64_t v13 = v1 + 148; // 0xae072
    uint32_t v14 = (int32_t)*(int16_t *)v11 - *v3; // 0xae0d9
    int64_t v15 = ((v5 & -256 | (int64_t)v9) ^ 240 | v2) - (v13 | v12 + v1 | 5); // 0xae0dd
    int64_t v16 = (v12 & (v13 | 1)) + 241; // 0xae0f0
    *v6 = v14 ^ v8;
    *v3 = *v3 - 0x63deb9c4;
    int64_t v17 = *(int64_t *)(((int64_t)v14 & (int64_t)&g3) + v1); // 0xae13e
    *(int64_t *)v1 = v17 ^ 0xda3b7d9;
    *(char *)(v1 + 367) = 1;
    int32_t v18 = *v6; // 0xae26f
    *v6 = ((int32_t)*(int16_t *)*v10 - v18 ^ 0x5812e92c) & v18;
    *v10 = *v10 + 4;
    return ((((((v12 | 241) ^ 8) - v15 | 0x7fffffff) & v2) - v16 ^ v16) + ((int64_t)&g3 & 241) - 0x80000000 | v15 ^ 120) + v1;
}

// Address range: 0xae336 - 0xae337
int64_t function_ae336(void) {
    // 0xae336
    int64_t result; // 0xae336
    return result;
}

// Address range: 0xae33a - 0xae33f
int64_t function_ae33a(void) {
    // 0xae33a
    return function_49f56c87();
}

// Address range: 0xb11ca - 0xb1548
int64_t function_b11ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb11ca
    int64_t v1; // 0xb11ca
    int64_t v2 = v1;
    int64_t v3 = v2 + 35; // 0xb11ea
    int32_t * v4 = (int32_t *)v3; // 0xb11f1
    int32_t * v5 = (int32_t *)(v2 + 368); // 0xb11fd
    int32_t v6 = *v5 - *v4 + 0x4b959cd0; // 0xb1213
    *v5 = v6;
    int32_t v7 = v6 + *v4 & 0x908616e; // 0xb1264
    *v5 = v7;
    int64_t * v8 = (int64_t *)(v2 + 10); // 0xb128c
    int64_t v9 = -512 - v2 + (v2 ^ 2) + -(int64_t)&g1 - v2; // 0xb12dd
    uint32_t v10 = (int32_t)*(int16_t *)(*v8 + 2) - v7 ^ *v4; // 0xb130f
    int64_t v11 = v10; // 0xb130f
    *v5 = v10 + v7;
    *v4 = *v4 + 0x1ad837ce;
    int64_t v12 = *(int64_t *)((v11 & (int64_t)&g3) + v2); // 0xb13ac
    *(int64_t *)(v2 + 96) = v12 - 0x653cf834;
    int32_t v13 = *v5; // 0xb148a
    *v5 = (int32_t)*(int16_t *)*v8 - 0x2e0be660 + v13 | v13;
    *v8 = *v8 + 4;
    return (((((v9 ^ 39 ^ v11) + (((v2 | v9 & (int64_t)&g2 | 16) ^ v2 | 128) ^ 64 | v3) ^ (((2 * (v2 + (int64_t)&g1) | (int64_t)L"\n2") + v3 | 145) + 0x7fffffdf | v2) + 0x7fffffff) - (int64_t)L"\n2" ^ 128) & ((int64_t)&g1 ^ -0x80000000)) - 0x80000000 & (int64_t)&g3 ^ -8) & ((int64_t)&g1 ^ -0x80000000) ^ (int64_t)&g1 ^ -1;
}

// Address range: 0xb45d2 - 0xb4980
int64_t function_b45d2(int16_t a1, int64_t a2) {
    // 0xb45d2
    int64_t v1; // 0xb45d2
    int64_t result = v1 + 368; // 0xb45d5
    int32_t * v2 = (int32_t *)result; // 0xb45dc
    int32_t v3 = *v2 & 0xa6ddb71; // 0xb45dc
    *v2 = v3;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0xb463c
    int32_t v5 = *v4; // 0xb463c
    int32_t v6 = v3; // 0xb464a
    int32_t v7 = v5; // 0xb464a
    if ((v5 & 2) != 0) {
        // 0xb4650
        v7 = v5 - 0x6cce786;
        *v4 = v7;
        v6 = *v2;
    }
    int32_t v8 = 0x4d013a2a - v7 + v6; // 0xb46d9
    *v2 = v8;
    int32_t v9 = *v4; // 0xb46ea
    int32_t v10 = v8; // 0xb46fa
    if ((v9 & 2) != 0) {
        // 0xb4700
        *v4 = v9 - 0x41f9e43f;
        v10 = *v2;
    }
    // 0xb4724
    *v2 = v10 | 0x3ab14dd1;
    int64_t v11 = *(int64_t *)(v1 + 129) + 0x1a44e4ef; // 0xb4779
    int64_t * v12 = (int64_t *)(v1 + 10); // 0xb4791
    int64_t v13 = v1 + (int64_t)*(int16_t *)(*v12 + 2); // 0xb47a1
    int64_t v14 = v13 != v11 ? v13 : 0;
    if (*(char *)(v1 + 404) != 50) {
        // 0xb47df
        *(int64_t *)v11 = a2;
        if (v14 != 0) {
            int64_t * v15 = (int64_t *)v14; // 0xb47ee
            *v15 = *v15 + 8;
        }
    } else {
        // 0xb47be
        *(int16_t *)v11 = a1;
        if (v14 != 0) {
            int64_t * v16 = (int64_t *)v14; // 0xb47ce
            *v16 = *v16 + 2;
        }
    }
    int32_t v17 = *v2; // 0xb48da
    *v2 = v17 - (v17 + (int32_t)*(int16_t *)*v12 ^ 0xa841ebd);
    *v12 = *v12 + 4;
    return result;
}

// Address range: 0xbcfc8 - 0xbd36d
int64_t function_bcfc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xbcfc8
    int64_t v1; // 0xbcfc8
    int32_t * v2 = (int32_t *)(v1 + 368); // 0xbcfd2
    int32_t v3 = *v2 & 0x3eb8b067; // 0xbcfd2
    *v2 = v3;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0xbcfed
    int32_t v5 = *v4 + v3; // 0xbcff9
    *v2 = v5;
    int32_t v6 = (*v4 ^ 0x1f891278) & v5; // 0xbd052
    *v2 = v6;
    int64_t * v7 = (int64_t *)(v1 + 10); // 0xbd069
    *v2 = *v4 + v6;
    *(char *)(v1 + 225) = *(char *)(*v7 + 2);
    int32_t v8 = *v4; // 0xbd0a0
    if ((v8 & 2) != 0) {
        // 0xbd0be
        *v4 = v8 ^ 0x168dd881;
    }
    // 0xbd0d8
    *v2 = *v2 + 0x6859cefd | 0x47dd4277;
    *v2 = (int32_t)*(int16_t *)*v7 - 0x35a6d51;
    *v7 = *v7 + 3;
    return 1;
}

// Address range: 0xbd36f - 0xbd374
int64_t function_bd36f(void) {
    // 0xbd36f
    return function_ffffffff81cd54bc();
}
