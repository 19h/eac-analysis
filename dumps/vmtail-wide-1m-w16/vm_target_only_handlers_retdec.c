/*
 * Targeted RetDec C for target-only VM handler native ranges.
 *
 * These dispatch entries were reached as targets but were not observed as
 * source-executed VM instructions in the concrete traces. The generated
 * functions are native decompiler evidence for coverage gaps, separate from
 * the all-entry static handler pseudocode.
 *
 * Ranges:
 *   0x79675-0x799d4 entry=5 target=0x79675 static_stop=0x799d4
 *   0x82e76-0x833d5 entry=50 target=0x82e76 static_stop=0x833d5
 *   0x88a58-0x8921b entry=80 target=0x88a58 static_stop=0x8921b
 */
#include <stdbool.h>
#include <stdint.h>

extern int g1;
extern int g2;
unsigned char llvm_ctpop_i8(unsigned char value);

// Address range: 0x79675 - 0x7971e
int64_t function_79675(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x79675
    int64_t v1; // 0x79675
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x79686
    int64_t v3 = *v2; // 0x79686
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0x79697
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0x796b9
    *(int64_t *)v5 = v4;
    uint32_t v6 = *(int32_t *)*v2; // 0x796e1
    *(int64_t *)(v5 + 8) = *(int64_t *)(v1 + 187) + (int64_t)v6;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x7971e - 0x799c7
int64_t function_7971e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x7971e
    int64_t v1; // 0x7971e
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x7974e
    int64_t v3 = *v2; // 0x7974e
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0x79794
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 3)); // 0x797b0
    *(int16_t *)v5 = *(int16_t *)v4;
    int64_t v6 = *v2; // 0x797dd
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 5)); // 0x797f4
    int64_t v8 = v1 + (int64_t)*(int16_t *)v6; // 0x798a3
    int64_t * v9 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 3));
    int64_t v10 = *v9;
    if (((*(int64_t *)(v1 + 409) | v7) & (int64_t)&g1) == 0) {
        // 0x798d7
        *v9 = v10 + 2;
        int64_t * v11 = (int64_t *)v8; // 0x798e1
        *v11 = *v11 + 2;
    } else {
        // 0x798bd
        *v9 = v10 - 2;
        int64_t * v12 = (int64_t *)v8; // 0x798cb
        *v12 = *v12 - 2;
    }
    int64_t result = v1 + 368; // 0x79955
    int32_t * v13 = (int32_t *)result; // 0x7995c
    int32_t v14 = *v13; // 0x7995c
    *v13 = v14 + 0x17cd41c1 + (v14 ^ (int32_t)*(int16_t *)(*v2 + 7));
    *v2 = *v2 + 9;
    return result;
}

// Address range: 0x82e76 - 0x83061
int64_t function_82e76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t result, int64_t a18) {
    // 0x82e76
    int64_t v1; // 0x82e76
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x82e80
    int64_t v3 = *v2; // 0x82e80
    int64_t * v4; // 0x82e76
    int64_t v5; // 0x82e76
    if (*(char *)v3 < 3) {
        uint32_t v6 = *(int32_t *)(v3 + 7); // 0x82eba
        int64_t * v7 = (int64_t *)(v1 + 187);
        int64_t v8 = *v7; // 0x82ec7
        unsigned char v9 = *(char *)(v3 + 1); // 0x82ede
        int64_t v10 = *(int64_t *)(v8 + (int64_t)v6 + (int64_t)v9); // 0x82f09
        v4 = v7;
        v5 = v3;
        if (v10 != v8 + (int64_t)*(int32_t *)(v3 + 3)) {
            int64_t * v11 = (int64_t *)(v1 + 80); // 0x82f5e
            int64_t * v12 = (int64_t *)(v8 + (int64_t)(v6 + (int32_t)v9)); // 0x82f61
            int64_t v13 = *v12 - *v11; // 0x82f61
            *v12 = v13;
            *v12 = *v7 + v13;
            int64_t v14 = *v2; // 0x82f7e
            v4 = v7;
            v5 = v14;
            if (*(char *)v14 == 2) {
                unsigned char v15 = *(char *)(v14 + 2); // 0x82fa7
                int32_t v16 = *(int32_t *)(v14 + 7); // 0x82fbf
                int64_t * v17 = (int64_t *)(v8 + (int64_t)(v16 + (int32_t)v15)); // 0x82fd2
                int64_t v18 = *v17 - *v11; // 0x82fd2
                *v17 = v18;
                *v17 = *v7 + v18;
                v4 = v7;
                v5 = *v2;
            }
        }
    } else {
        // 0x82e76
        v4 = (int64_t *)(v1 + 187);
        v5 = v3;
    }
    uint32_t v19 = *(int32_t *)(v5 + 7); // 0x83000
    uint16_t v20 = *(int16_t *)(v5 + 11); // 0x8302b
    *(int64_t *)(v1 + (int64_t)v20) = *v4 + (int64_t)v19;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x83061 - 0x833c7
int64_t function_83061(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x83061
    int64_t v1; // 0x83061
    int64_t v2 = v1;
    int64_t v3 = v1 + 35; // 0x8307f
    int32_t * v4 = (int32_t *)v3; // 0x8308c
    int32_t v5 = *v4; // 0x8308c
    int64_t v6 = ((v2 & a4) + a5 & v1 ^ v2) + (int64_t)&g2; // 0x830a8
    int64_t * v7 = (int64_t *)(v1 + 10); // 0x830ae
    int64_t v8 = *v7; // 0x830ae
    uint32_t v9 = v5 & 2; // 0x830b4
    int64_t v10 = v8 + 9;
    int64_t v11 = v10; // 0x830c9
    int64_t v12 = v8; // 0x830c9
    int64_t v13 = v6; // 0x830c9
    if (v9 != 0) {
        // 0x830cf
        *v4 = v5 + 0x23b1b06;
        v12 = *v7;
        v11 = v12 + 9;
        v13 = (v6 | v2) - v8 ^ v8 | v3;
    }
    int64_t v14 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v8 + 2)); // 0x8314a
    uint32_t v15 = *(int32_t *)v14; // 0x83153
    uint32_t v16 = *(int32_t *)*(int64_t *)(v1 + (int64_t)*(int16_t *)v10); // 0x83156
    int64_t v17 = v1 + (int64_t)*(int16_t *)v12; // 0x831a3
    int64_t v18 = *(int64_t *)(v1 + 409); // 0x831ca
    int64_t v19 = v1 + (int64_t)*(int16_t *)(v12 + 2); // 0x83250
    int64_t * v20 = (int64_t *)(v1 + (int64_t)*(int16_t *)v11);
    int64_t v21 = *v20;
    if (((v18 | *(int64_t *)v17) & (int64_t)&g1) == 0) {
        // 0x83281
        *v20 = v21 + 4;
        int64_t * v22 = (int64_t *)v19; // 0x83289
        *v22 = *v22 + 4;
    } else {
        // 0x83260
        *v20 = v21 - 4;
        int64_t * v23 = (int64_t *)v19; // 0x8326b
        *v23 = *v23 - 4;
    }
    // 0x83296
    *v4 = *v4 ^ 0x5ea815b;
    int32_t * v24 = (int32_t *)(v1 + 368); // 0x832cb
    int32_t v25 = *v24 ^ 0x167c9a49; // 0x832cb
    *v24 = v25;
    int64_t v26 = *v7; // 0x832db
    int32_t v27 = v25; // 0x832f0
    int64_t v28 = v26; // 0x832f0
    int64_t result = ((2 * v13 & 2 ^ v3) + 8 & v14 | (int64_t)v9) + 2 - v17; // 0x832f0
    if (*(char *)(v26 + 4) != 0) {
        int32_t v29 = v16 - v15; // 0x83156
        unsigned char v30 = llvm_ctpop_i8((char)v29); // 0x83156
        result = v26 + 5;
        uint16_t v31 = *(int16_t *)result; // 0x8330f
        bool v32; // 0x83061
        *(int64_t *)(v1 + (int64_t)v31) = 0x4000 * (int64_t)v32 | 1024 * (int64_t)v32 | 512 * (int64_t)v32 | 256 * (int64_t)v32 | (int64_t)(v16 < v15) | 64 * (int64_t)(v29 == 0) | 128 * (int64_t)(v29 < 0) | 16 * (int64_t)(v16 % 16 - v15 % 16 > 15) | 2048 * (int64_t)(((v29 ^ v16) & (v16 ^ v15)) < 0) | 4 * (int64_t)(v30 % 2 == 0) | 2;
        v27 = *v24;
        v28 = *v7;
    }
    int32_t v33 = v27; // 0x8337b
    *v24 = v33 - ((int32_t)*(int16_t *)(v28 + 7) - v33 ^ 0x1217a3f5);
    *v7 = *v7 + 11;
    return result;
}

// Address range: 0x833cc - 0x833cf
int64_t function_833cc(void) {
    // 0x833cc
    int64_t result; // 0x833cc
    return result;
}

// Address range: 0x88a58 - 0x88c3f
int64_t function_88a58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x88a58
    int64_t v1; // 0x88a58
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x88a62
    int64_t v3 = *v2; // 0x88a62
    int64_t * v4; // 0x88a58
    int64_t v5; // 0x88a58
    if (*(char *)v3 < 3) {
        uint32_t v6 = *(int32_t *)(v3 + 7); // 0x88a9c
        int64_t * v7 = (int64_t *)(v1 + 187);
        int64_t v8 = *v7; // 0x88aa9
        unsigned char v9 = *(char *)(v3 + 1); // 0x88ac0
        int64_t v10 = *(int64_t *)(v8 + (int64_t)v6 + (int64_t)v9); // 0x88aea
        v4 = v7;
        v5 = v3;
        if (v10 != v8 + (int64_t)*(int32_t *)(v3 + 3)) {
            int64_t * v11 = (int64_t *)(v1 + 80); // 0x88b3d
            int64_t * v12 = (int64_t *)(v8 + (int64_t)(v6 + (int32_t)v9)); // 0x88b40
            int64_t v13 = *v12 - *v11; // 0x88b40
            *v12 = v13;
            *v12 = *v7 + v13;
            int64_t v14 = *v2; // 0x88b5d
            v4 = v7;
            v5 = v14;
            if (*(char *)v14 == 2) {
                unsigned char v15 = *(char *)(v14 + 2); // 0x88b88
                int32_t v16 = *(int32_t *)(v14 + 7); // 0x88b9f
                int64_t * v17 = (int64_t *)(v8 + (int64_t)(v16 + (int32_t)v15)); // 0x88bb1
                int64_t v18 = *v17 - *v11; // 0x88bb1
                *v17 = v18;
                *v17 = *v7 + v18;
                v4 = v7;
                v5 = *v2;
            }
        }
    } else {
        // 0x88a58
        v4 = (int64_t *)(v1 + 187);
        v5 = v3;
    }
    uint32_t v19 = *(int32_t *)(v5 + 7); // 0x88bdf
    uint16_t v20 = *(int16_t *)(v5 + 11); // 0x88c0a
    *(int64_t *)(v1 + (int64_t)v20) = *v4 + (int64_t)v19;
    *(int32_t *)(v1 + 476) = 0;
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
