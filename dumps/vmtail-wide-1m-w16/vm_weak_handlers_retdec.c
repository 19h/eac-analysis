/*
 * Targeted RetDec C for observed VM handler ranges with weaker recovery classes.
 *
 * Covered classes:
 *   affine_dispatch_fallback
 *   partial
 *   sampled_only
 *   sampled_operand_lifted
 * Class mix: affine_dispatch_fallback:13,partial:11,sampled_only:9,sampled_operand_lifted:3
 *
 * These handlers were observed, but their handler-layer model is not the
 * fully static-validated class. This artifact keeps native decompiler
 * evidence next to the trace/static pseudocode for review and refinement.
 *
 * Ranges:
 *   0x79da3-0x7a05c entry=9 class=partial events=3 span_bytes=696
 *   0x85f24-0x86773 entry=69 class=partial events=2 span_bytes=2127
 *   0x873fc-0x87c35 entry=75 class=sampled_only events=276 span_bytes=2105
 *   0x883c0-0x88a65 entry=78 class=affine_dispatch_fallback events=1 span_bytes=1701
 *   0x89b37-0x8a38d entry=85 class=affine_dispatch_fallback events=1 span_bytes=2133
 *   0x8c41c-0x8c5c7 entry=95 class=affine_dispatch_fallback events=562 span_bytes=425
 *   0x8ceb4-0x8d72b entry=101 class=affine_dispatch_fallback events=1 span_bytes=2165
 *   0x8d71d-0x8dfa9 entry=102 class=affine_dispatch_fallback events=64 span_bytes=2187
 *   0x8faec-0x9027c entry=112 class=partial events=2 span_bytes=1933
 *   0x90acd-0x90c31 entry=117 class=sampled_only events=122 span_bytes=355
 *   0x953b1-0x957e6 entry=142 class=partial events=1 span_bytes=1074
 *   0x95b5c-0x9635f entry=145 class=sampled_only events=142 span_bytes=2051
 *   0x9c08f-0x9c404 entry=175 class=sampled_operand_lifted events=1 span_bytes=879
 *   0x9e336-0x9e7bc entry=188 class=partial events=1 span_bytes=1158
 *   0x9fb50-0xa0078 entry=195 class=sampled_operand_lifted events=3 span_bytes=1320
 *   0xa2da3-0xa35ed entry=210 class=sampled_only events=15 span_bytes=2121
 *   0xa4a61-0xa4e04 entry=216 class=affine_dispatch_fallback events=742 span_bytes=931
 *   0xa6af9-0xa6e63 entry=225 class=partial events=6 span_bytes=870
 *   0xa71fe-0xa758c entry=229 class=partial events=1 span_bytes=910
 *   0xa9ffa-0xaa88a entry=241 class=affine_dispatch_fallback events=2 span_bytes=2189
 *   0xab427-0xabc66 entry=246 class=sampled_only events=39 span_bytes=2105
 *   0xae332-0xae919 entry=259 class=partial events=1 span_bytes=1510
 *   0xaf4cf-0xaf8bc entry=264 class=affine_dispatch_fallback events=291 span_bytes=1002
 *   0xaf8af-0xafa2d entry=266 class=sampled_only events=200 span_bytes=381
 *   0xb1b2d-0xb1fe3 entry=276 class=partial events=1 span_bytes=1205
 *   0xb2342-0xb266e entry=278 class=affine_dispatch_fallback events=553 span_bytes=812
 *   0xb379b-0xb4001 entry=284 class=affine_dispatch_fallback events=1 span_bytes=2150
 *   0xb6bba-0xb709a entry=299 class=sampled_operand_lifted events=2 span_bytes=1248
 *   0xb7586-0xb76a9 entry=302 class=sampled_only events=109 span_bytes=288
 *   0xb837c-0xb84b4 entry=308 class=partial events=1 span_bytes=312
 *   0xb86f8-0xb8b4f entry=311 class=affine_dispatch_fallback events=382 span_bytes=1111
 *   0xb987b-0xba0dc entry=316 class=sampled_only events=447 span_bytes=2141
 *   0xbb1dd-0xbb6f3 entry=321 class=affine_dispatch_fallback events=97 span_bytes=1302
 *   0xbdd18-0xbe56b entry=334 class=sampled_only events=42 span_bytes=2130
 *   0xc291a-0xc2d45 entry=356 class=affine_dispatch_fallback events=741 span_bytes=1066
 *   0xc2d37-0xc3413 entry=358 class=partial events=1 span_bytes=1755
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

int64_t function_49f368f1();
int64_t function_cca124();
int64_t function_ccc144();

// Address range: 0x79da3 - 0x7a04f
int64_t function_79da3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x79da3
    int64_t v1; // 0x79da3
    int64_t v2 = v1;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x2dd4f06c;
    int64_t v3 = v2 - 0x2dd4f06c; // 0x79e0d
    char v4 = *(char *)(v2 + 404); // 0x79e24
    int64_t v5 = v3; // 0x79e2b
    int64_t v6; // 0x79da3
    bool v7; // 0x79da3
    if (v4 == 98) {
        unsigned char v8 = (char)v3; // 0x79e31
        char v9 = -v8; // 0x79e31
        int64_t v10 = 64 * (int64_t)(v8 == 0) | (int64_t)(v8 != 0) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(-((v8 % 16)) > 15) | 4 * (int64_t)(llvm_ctpop_i8(v9) % 2 == 0) | 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 2; // bp-8, 0x79e34
        v5 = v3 & -256 | (int64_t)v9;
        v6 = (int64_t)&v10;
    }
    int64_t v11 = v5; // 0x79e39
    int64_t v12 = v6; // 0x79e39
    if (v4 == 50) {
        uint16_t v13 = (int16_t)v5; // 0x79e3f
        int16_t v14 = -v13; // 0x79e3f
        int64_t v15 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v13 != 0) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(-((v13 % 16)) > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v14) % 2 == 0) | 2; // bp-16, 0x79e43
        v11 = v5 & -0x10000 | (int64_t)v14;
        v12 = (int64_t)&v15;
    }
    int64_t v16 = v11; // 0x79e48
    int64_t v17 = v12; // 0x79e48
    if (v4 == 80) {
        uint32_t v18 = (int32_t)v11; // 0x79e4e
        int32_t v19 = -v18; // 0x79e4e
        unsigned char v20 = llvm_ctpop_i8((char)v19); // 0x79e4e
        v17 = v12 - 8;
        *(int64_t *)v17 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v18 != 0) | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(-((v18 % 16)) > 15) | 4 * (int64_t)(v20 % 2 == 0) | 2;
        v16 = v19;
    }
    int64_t v21 = v16;
    int64_t v22 = v21; // 0x79e56
    int64_t v23 = v17; // 0x79e56
    if (v4 == 58) {
        // 0x79e5c
        v22 = -v21;
        unsigned char v24 = llvm_ctpop_i8((char)v22); // 0x79e5c
        v23 = v17 - 8;
        *(int64_t *)v23 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v21 != 0) | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v22 < 0) | 16 * (int64_t)(-((v21 % 16)) > 15) | 4 * (int64_t)(v24 % 2 == 0) | 2;
    }
    int64_t v25 = v2 + 113; // 0x79e69
    int64_t v26 = v22 + 0x1a44e4ef; // 0x79ebb
    *(int64_t *)v25 = v26;
    int64_t v27 = v26 - v1; // 0x79eeb
    int64_t * v28 = (int64_t *)(v2 + 10); // 0x79efe
    int64_t v29 = *v28; // 0x79efe
    int64_t v30 = v29; // 0x79f1d
    int64_t v31 = (int64_t)&g2; // 0x79f1d
    if (*(char *)v29 != 0) {
        uint16_t v32 = *(int16_t *)(v29 + 1); // 0x79f64
        *(int64_t *)(v2 + (int64_t)v32) = *(int64_t *)v23;
        v30 = *v28;
        v31 = v27 & (int64_t)&g2;
    }
    uint16_t v33 = *(int16_t *)(v30 + 3); // 0x79fcf
    int32_t * v34 = (int32_t *)(v2 + 368); // 0x79fe6
    int32_t v35 = *v34; // 0x79fe6
    *v34 = ((int32_t)v33 - v35 ^ 0x25d88329) & v35;
    *v28 = *v28 + 5;
    return v25 ^ v2 ^ ((v25 + (int64_t)v33 | (v31 | -0x7fffffc0) ^ v25) ^ (v1 ^ 32 ^ v27) + v25 | 144) + (int64_t)L"\n2";
}

// Address range: 0x85f24 - 0x8610e
int64_t function_85f24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t result, int64_t a19) {
    // 0x85f24
    int64_t v1; // 0x85f24
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x85f2e
    int64_t v3 = *v2; // 0x85f2e
    int64_t * v4; // 0x85f24
    int64_t v5; // 0x85f24
    if (*(char *)v3 < 3) {
        uint32_t v6 = *(int32_t *)(v3 + 7); // 0x85f65
        int64_t * v7 = (int64_t *)(v1 + 187);
        int64_t v8 = *v7; // 0x85f71
        unsigned char v9 = *(char *)(v3 + 1); // 0x85f88
        int64_t v10 = *(int64_t *)(v8 + (int64_t)v6 + (int64_t)v9); // 0x85fb3
        v4 = v7;
        v5 = v3;
        if (v10 != v8 + (int64_t)*(int32_t *)(v3 + 3)) {
            int64_t * v11 = (int64_t *)(v1 + 80); // 0x86008
            int64_t * v12 = (int64_t *)(v8 + (int64_t)(v6 + (int32_t)v9)); // 0x8600b
            int64_t v13 = *v12 - *v11; // 0x8600b
            *v12 = v13;
            *v12 = *v7 + v13;
            int64_t v14 = *v2; // 0x86028
            v4 = v7;
            v5 = v14;
            if (*(char *)v14 == 2) {
                unsigned char v15 = *(char *)(v14 + 2); // 0x86053
                int32_t v16 = *(int32_t *)(v14 + 7); // 0x8606b
                int64_t * v17 = (int64_t *)(v8 + (int64_t)(v16 + (int32_t)v15)); // 0x8607e
                int64_t v18 = *v17 - *v11; // 0x8607e
                *v17 = v18;
                *v17 = *v7 + v18;
                v4 = v7;
                v5 = *v2;
            }
        }
    } else {
        // 0x85f24
        v4 = (int64_t *)(v1 + 187);
        v5 = v3;
    }
    uint32_t v19 = *(int32_t *)(v5 + 7); // 0x860ac
    uint16_t v20 = *(int16_t *)(v5 + 11); // 0x860d7
    *(int64_t *)(v1 + (int64_t)v20) = *v4 + (int64_t)v19;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x8610e - 0x86766
int64_t function_8610e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x8610e
    int64_t v1; // 0x8610e
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x86145
    int32_t * v4 = (int32_t *)(v2 + 368); // 0x86154
    *v4 = *v4 ^ *v3;
    int64_t * v5 = (int64_t *)(v2 + 96); // 0x86192
    *v5 = *v5 + 0x89fdb172;
    *v4 = *v4 ^ *v3;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x24c0b93e;
    int64_t v6 = v2 - 0x24c0b93e; // 0x862d3
    uint64_t v7 = *v5 - 0x24c0b93e; // 0x8630f
    char v8 = *(char *)(v2 + 404); // 0x8632d
    int64_t v9 = v6; // 0x86334
    int64_t v10; // 0x8610e
    bool v11; // 0x8610e
    if (v8 == 98) {
        unsigned char v12 = (char)v6; // 0x8633a
        unsigned char v13 = (char)v7; // 0x8633a
        unsigned char v14 = v13 + v12; // 0x8633a
        int64_t v15 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v14 < v12) | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v13 % 16 + v12 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0) | 2048 * (int64_t)(((v14 ^ v12) & (v14 ^ v13)) < 0) | 2; // bp-8, 0x8633d
        v10 = (int64_t)&v15;
        v9 = v6 & -256 | (int64_t)v14;
    }
    int64_t v16 = v10; // 0x8634a
    int64_t v17 = v9; // 0x8634a
    if (v8 == 50) {
        uint16_t v18 = (int16_t)v9; // 0x86350
        uint16_t v19 = (int16_t)v7; // 0x86350
        uint16_t v20 = v18 + v19; // 0x86350
        int64_t v21 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v20 < v18) | 64 * (int64_t)(v20 == 0) | 128 * (int64_t)(v20 < 0) | 16 * (int64_t)(v18 % 16 + v19 % 16 > 15) | 2048 * (int64_t)(((v20 ^ v18) & (v20 ^ v19)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v20) % 2 == 0) | 2; // bp-16, 0x86354
        v16 = (int64_t)&v21;
        v17 = v9 & -0x10000 | (int64_t)v20;
    }
    int64_t v22 = v16; // 0x8635f
    int64_t v23 = v17; // 0x8635f
    if (v8 == 80) {
        uint32_t v24 = (int32_t)v17; // 0x86365
        uint32_t v25 = (int32_t)v7; // 0x86365
        uint32_t v26 = v24 + v25; // 0x86365
        unsigned char v27 = llvm_ctpop_i8((char)v26); // 0x86365
        v22 = v16 - 8;
        *(int64_t *)v22 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v26 < v24) | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 16 * (int64_t)(v24 % 16 + v25 % 16 > 15) | 2048 * (int64_t)(((v26 ^ v24) & (v26 ^ v25)) < 0) | 4 * (int64_t)(v27 % 2 == 0) | 2;
        v23 = v26;
    }
    uint64_t v28 = v23;
    int64_t v29 = v22; // 0x8636c
    int64_t v30 = v28; // 0x8636c
    if (v8 == 58) {
        // 0x86372
        v30 = v28 + v7;
        unsigned char v31 = llvm_ctpop_i8((char)v30); // 0x86372
        v29 = v22 - 8;
        *(int64_t *)v29 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v30 < v28) | 64 * (int64_t)(v30 == 0) | 128 * (int64_t)(v30 < 0) | 16 * (int64_t)(v28 % 16 + v7 % 16 > 15) | 2048 * (int64_t)(((v30 ^ v28) & (v30 ^ v7)) < 0) | 4 * (int64_t)(v31 % 2 == 0) | 2;
    }
    int64_t * v32 = (int64_t *)(v2 + 113); // 0x863b5
    *v32 = v30 + 0x3a56e03a;
    int32_t v33 = *v4 - 0x4c118a3 + *v3; // 0x863f8
    *v3 = v33;
    int64_t * v34 = (int64_t *)(v2 + 10); // 0x8645f
    int64_t v35 = *v34; // 0x8645f
    int32_t v36 = v33; // 0x8648a
    if (*(char *)(v35 + 2) != 0) {
        uint16_t v37 = *(int16_t *)(v35 + 3); // 0x864e9
        *(int64_t *)(v2 + (int64_t)v37) = *(int64_t *)v29;
        v36 = *v3;
    }
    // 0x86506
    *v3 = *v4 ^ v36;
    *v32 = *v32 - 0x2011fb4b;
    int32_t v38 = *v3 | 0x58fb4a0c; // 0x86553
    *v3 = v38;
    int32_t v39 = *v4 - v38 ^ 0x62ac6845; // 0x8657f
    *v4 = v39;
    int32_t v40 = *v3 ^ v39 | 0x528cef01; // 0x865cf
    *v3 = v40;
    int32_t v41 = *v4 ^ v40; // 0x86606
    *v4 = v41;
    int64_t v42 = *(int64_t *)(v2 + 271); // 0x8664e
    int64_t v43 = *v34; // 0x8667e
    uint16_t v44 = *(int16_t *)v43; // 0x86695
    *v34 = v43 + 5;
    return ((int64_t)(0x37bbf653 - v41 + (int32_t)v44) & (int64_t)&g3) + v42;
}

// Address range: 0x8676e - 0x86771
int64_t function_8676e(void) {
    // 0x8676e
    int64_t result; // 0x8676e
    return result;
}

// Address range: 0x873fc - 0x87c28
int64_t function_873fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x873fc
    int64_t v1; // 0x873fc
    char * v2 = (char *)(v1 + 18); // 0x87423
    *v2 = 0;
    int64_t * v3 = (int64_t *)(v1 + 10); // 0x87468
    int64_t v4 = *v3; // 0x87468
    uint32_t v5 = *(int32_t *)(v1 + (int64_t)*(int16_t *)(v4 + 8)); // 0x87493
    char v6 = *(char *)(v4 + 10); // 0x874c7
    char v7; // 0x873fc
    int64_t v8; // 0x873fc
    switch (v6) {
        case 34: {
        }
        case 2: {
            char v9 = 0; // 0x874ec
            if ((v5 & 64) != 0) {
                // 0x874f2
                *v2 = 1;
                v9 = 1;
            }
            int64_t v10 = v5; // 0x8752a
            v7 = v9;
            v8 = v10;
            if (v6 == 2) {
                int64_t v11 = v10 / 128 % 2; // 0x878c7
                v7 = v9;
                v8 = v11;
                if ((v10 & 64) != 0 || (v5 & (int32_t)L"\n2") / 2048 != (int32_t)v11) {
                    *v2 = 1;
                    v7 = 1;
                    v8 = v11;
                }
            }
            // break -> 0x8798f
            break;
        }
        default: {
            char v12 = 0; // 0x87530
            int64_t v13 = v5; // 0x87530
            if (v6 == -102) {
                uint32_t v14 = v5 & 64; // 0x87536
                int64_t v15 = v14; // 0x87536
                v12 = 0;
                v13 = v15;
                if (v14 == 0) {
                    // 0x87543
                    *v2 = 1;
                    v12 = 1;
                    v13 = v15;
                }
            }
            char v16 = v12; // 0x87581
            int64_t v17 = v13; // 0x87581
            if (v6 == 0) {
                uint32_t v18 = (int32_t)v13 & 64; // 0x8758d
                int64_t v19 = v18; // 0x8758d
                v16 = v12;
                v17 = v19;
                if (v18 == 0) {
                    // 0x8759a
                    v16 = v12;
                    v17 = v19;
                    if (v13 % 2 == 0) {
                        // 0x875a7
                        *v2 = 1;
                        v16 = 1;
                        v17 = v19;
                    }
                }
            }
            char v20 = v16; // 0x875d1
            int64_t v21 = v17; // 0x875d1
            if (v6 == 95) {
                uint32_t v22 = (int32_t)v17 % 2; // 0x875d7
                int64_t v23 = v22; // 0x875d7
                v20 = v16;
                v21 = v23;
                if (v22 == 0) {
                    // 0x875e4
                    *v2 = 1;
                    v20 = 1;
                    v21 = v23;
                }
            }
            char v24 = v20; // 0x87614
            int64_t v25 = v21; // 0x87614
            if (v6 == -104) {
                // 0x8761a
                v24 = v20;
                v25 = 0;
                if (v21 % 2 != 0) {
                    // 0x87627
                    *v2 = 1;
                    v24 = 1;
                    v25 = 1;
                }
            }
            char v26 = v24; // 0x87658
            int64_t v27 = v25; // 0x87658
            if (v6 == -119) {
                uint32_t v28 = (int32_t)v25 & 64; // 0x87664
                v26 = v24;
                v27 = 0;
                if (v25 % 2 != 0 || v28 != 0) {
                    *v2 = 1;
                    v26 = 1;
                    v27 = v28;
                }
            }
            char v29 = v26; // 0x876dc
            int64_t v30 = v27; // 0x876dc
            if (v6 == 47) {
                // 0x876e2
                v29 = v26;
                v30 = v27;
                if ((v27 & 64) == 0) {
                    int64_t v31 = v27 / 128 % 2; // 0x87735
                    v29 = v26;
                    v30 = v31;
                    if ((int32_t)v31 == (int32_t)((v27 & (int64_t)(int32_t)L"\n2") / 2048)) {
                        // 0x87742
                        *v2 = 1;
                        v29 = 1;
                        v30 = v31;
                    }
                }
            }
            char v32 = v29; // 0x8776d
            int64_t v33 = v30; // 0x8776d
            if (v6 == -6) {
                int64_t v34 = v30 / 128 % 2; // 0x877ae
                v32 = v29;
                v33 = v34;
                if ((int32_t)v34 == (int32_t)((v30 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0x877bb
                    *v2 = 1;
                    v32 = 1;
                    v33 = v34;
                }
            }
            char v35 = v32; // 0x877e7
            int64_t v36 = v33; // 0x877e7
            if (v6 == -115) {
                int64_t v37 = v33 / 128 % 2; // 0x87823
                v35 = v32;
                v36 = v37;
                if ((int32_t)v37 != (int32_t)((v33 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0x87830
                    *v2 = 1;
                    v35 = 1;
                    v36 = v37;
                }
            }
            char v38 = v35; // 0x8790e
            int64_t v39 = v36; // 0x8790e
            if (v6 == -30) {
                uint32_t v40 = (int32_t)v36 & (int32_t)L"\n2"; // 0x87914
                int64_t v41 = v40; // 0x87914
                v38 = v35;
                v39 = v41;
                if (v40 == 0) {
                    // 0x87921
                    *v2 = 1;
                    v38 = 1;
                    v39 = v41;
                }
            }
            // 0x87948
            v7 = v38;
            v8 = v39;
            if (v6 == -90) {
                uint32_t v42 = (int32_t)v39 & 4; // 0x87952
                int64_t v43 = v42; // 0x87952
                v7 = v38;
                v8 = v43;
                if (v42 == 0) {
                    // 0x8795f
                    *v2 = 1;
                    v7 = 1;
                    v8 = v43;
                }
            }
            // break -> 0x8798f
            break;
        }
    }
    char v44 = v7; // 0x87993
    int64_t v45 = v8; // 0x87993
    if (v6 == 12) {
        uint32_t v46 = (int32_t)v8 & 128; // 0x87999
        int64_t v47 = v46; // 0x87999
        v44 = v7;
        v45 = v47;
        if (v46 == 0) {
            // 0x879a6
            *v2 = 1;
            v44 = 1;
            v45 = v47;
        }
    }
    char v48 = v44; // 0x879e0
    int64_t v49 = v45; // 0x879e0
    if (v6 == -88) {
        uint32_t v50 = (int32_t)v45 & (int32_t)L"\n2"; // 0x879e6
        v48 = v44;
        v49 = 0;
        if (v50 != 0) {
            // 0x879f3
            *v2 = 1;
            v48 = 1;
            v49 = v50;
        }
    }
    char v51 = v48; // 0x87a2a
    int64_t v52 = v49; // 0x87a2a
    char v53; // 0x873fc
    if (v6 != -21) {
        goto lab_0x87a6c;
    } else {
        uint32_t v54 = (int32_t)v49 & 4; // 0x87a30
        v53 = v48;
        if (v54 == 0) {
            goto lab_0x87ac3;
        } else {
            // 0x87a3d
            *v2 = 1;
            v51 = 1;
            v52 = v54;
            goto lab_0x87a6c;
        }
    }
  lab_0x87a6c:
    // 0x87a6c
    v53 = v51;
    int64_t result2; // 0x873fc
    int64_t v55; // 0x873fc
    if (v6 != 56 || (char)v52 > -1) {
        goto lab_0x87ac3;
    } else {
        // 0x87ac3
        *v2 = 1;
        int64_t v56 = *v3; // 0x87ae4
        result2 = v56 + 4;
        v55 = v56;
        goto lab_0x87bce;
    }
  lab_0x87ac3:;
    int64_t v57 = *v3; // 0x87ae4
    int64_t result = v57 + 4; // 0x87b85
    result2 = result;
    v55 = v57;
    if (v53 == 0) {
        // 0x87c25
        return result;
    }
    goto lab_0x87bce;
  lab_0x87bce:;
    uint32_t v58 = *(int32_t *)result2;
    uint64_t v59 = (int64_t)v58;
    if (v58 > -1) {
        // 0x87c07
        *v3 = v55 + v59;
    } else {
        // 0x87bda
        *v3 = v55 - v59 % 0x80000000;
    }
    // 0x87c25
    return result2;
}

// Address range: 0x87c28 - 0x87c35
int64_t function_87c28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x87c28
    int64_t result; // 0x87c28
    return result;
}

// Address range: 0x883c0 - 0x885b0
int64_t function_883c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x883c0
    int64_t v1; // 0x883c0
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x883ca
    int64_t v3 = *v2; // 0x883ca
    int64_t * v4; // 0x883c0
    int64_t v5; // 0x883c0
    if (*(char *)v3 < 3) {
        uint32_t v6 = *(int32_t *)(v3 + 7); // 0x88404
        int64_t * v7 = (int64_t *)(v1 + 187);
        int64_t v8 = *v7; // 0x88411
        unsigned char v9 = *(char *)(v3 + 1); // 0x88428
        int64_t v10 = *(int64_t *)(v8 + (int64_t)v6 + (int64_t)v9); // 0x88453
        v4 = v7;
        v5 = v3;
        if (v10 != v8 + (int64_t)*(int32_t *)(v3 + 3)) {
            int64_t * v11 = (int64_t *)(v1 + 80); // 0x884a8
            int64_t * v12 = (int64_t *)(v8 + (int64_t)(v6 + (int32_t)v9)); // 0x884ab
            int64_t v13 = *v12 - *v11; // 0x884ab
            *v12 = v13;
            *v12 = *v7 + v13;
            int64_t v14 = *v2; // 0x884c8
            v4 = v7;
            v5 = v14;
            if (*(char *)v14 == 2) {
                unsigned char v15 = *(char *)(v14 + 2); // 0x884f3
                int32_t v16 = *(int32_t *)(v14 + 7); // 0x8850b
                int64_t * v17 = (int64_t *)(v8 + (int64_t)(v16 + (int32_t)v15)); // 0x8851e
                int64_t v18 = *v17 - *v11; // 0x8851e
                *v17 = v18;
                *v17 = *v7 + v18;
                v4 = v7;
                v5 = *v2;
            }
        }
    } else {
        // 0x883c0
        v4 = (int64_t *)(v1 + 187);
        v5 = v3;
    }
    uint32_t v19 = *(int32_t *)(v5 + 7); // 0x8854d
    uint16_t v20 = *(int16_t *)(v5 + 11); // 0x88579
    *(int64_t *)(v1 + (int64_t)v20) = *v4 + (int64_t)v19;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x885b0 - 0x88a58
int64_t function_885b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x885b0
    int64_t v1; // 0x885b0
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x885ba
    *v3 = *v3 + 0x47c483b5;
    int32_t * v4 = (int32_t *)(v2 + 35); // 0x885e2
    *v4 = *v4 ^ 0xc7e744f;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x1d78747f;
    uint64_t v5 = v2 + 368; // 0x88661
    int32_t * v6 = (int32_t *)v5; // 0x88668
    int32_t v7 = *v6 - (*v4 ^ 0x23ccce4) & 0xd4da920; // 0x88675
    *v6 = v7;
    *v6 = *v4 ^ 0x225dfa31 | v7;
    uint64_t v8 = *v3 + 0x1d78747f; // 0x886aa
    int64_t * v9 = (int64_t *)(v2 + 113); // 0x886be
    *v9 = v8;
    int32_t v10 = *v6 - 0x6110d031 ^ 0x3fcb6e9a; // 0x88729
    *v6 = v10;
    int64_t * v11 = (int64_t *)(v2 + 10); // 0x887dc
    int64_t v12 = *v11; // 0x887dc
    int32_t v13 = v10; // 0x887f1
    if (*(char *)(v12 + 4) != 0) {
        int64_t v14 = v8 + v5; // 0x886cf
        unsigned char v15 = llvm_ctpop_i8((char)v14); // 0x886cf
        uint16_t v16 = *(int16_t *)(v12 + 2); // 0x88863
        bool v17; // 0x885b0
        *(int64_t *)(v2 + (int64_t)v16) = 0x4000 * (int64_t)v17 | 1024 * (int64_t)v17 | 512 * (int64_t)v17 | 256 * (int64_t)v17 | (int64_t)(v14 < v5) | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v8 % 16 + v5 % 16 > 15) | 2048 * (int64_t)(((v14 ^ v5) & (v14 ^ v8)) < 0) | 4 * (int64_t)(v15 % 2 == 0) | 2;
        v13 = *v6;
    }
    // 0x888ac
    *v6 = (v13 ^ *v4) + 0x60a9dba6;
    *v9 = *v9 + 0x1a44e4ef;
    int64_t v18 = *(int64_t *)(v2 + 271); // 0x88982
    int64_t v19 = (v2 | 16) + (int64_t)&g1 - 32; // 0x8899d
    int64_t v20 = 2 * v19 + (v2 ^ (int64_t)L"\n2"); // 0x889b3
    int32_t v21 = (int32_t)*(int16_t *)*v11; // 0x889cd
    int32_t v22 = *v6; // 0x889cd
    *v6 = v22 | v21;
    int64_t v23 = *(int64_t *)(((int64_t)(v22 ^ v21) & (int64_t)&g3) + v18); // 0x88a32
    *v11 = *v11 + 5;
    return v23 & (v18 ^ ((v20 | 3 * v2 + ((int64_t)&g2 ^ 16) + 387 ^ 32) + (int64_t)&g2 + 16 | v20)) + (4 * v19 | 64);
}

// Address range: 0x88a5a - 0x88a5c
int64_t function_88a5a(void) {
    // 0x88a5a
    int64_t result; // 0x88a5a
    return result;
}

// Address range: 0x88a5d - 0x88a5e
int64_t function_88a5d(void) {
    // 0x88a5d
    int64_t result; // 0x88a5d
    return result;
}

// Address range: 0x89b37 - 0x8a37f
int64_t function_89b37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t result2, int64_t a20) {
    int64_t v1 = a5;
    int64_t v2; // 0x89b37
    char * v3 = (char *)(v2 + 18); // 0x89b44
    *v3 = 0;
    int64_t result = v2 + 10; // 0x89b67
    int64_t * v4 = (int64_t *)result; // 0x89b75
    int64_t v5 = *v4; // 0x89b75
    uint32_t v6 = *(int32_t *)(v2 + (int64_t)*(int16_t *)(v5 + 6)); // 0x89b96
    char v7 = *(char *)(v5 + 8); // 0x89bcb
    char v8; // 0x89b37
    int64_t v9; // 0x89b37
    int64_t v10; // 0x89b37
    switch (v7) {
        case 34: {
        }
        case 2: {
            char v11 = 0; // 0x89bf4
            if ((v6 & 64) != 0) {
                // 0x89bfa
                *v3 = 1;
                v11 = 1;
            }
            int64_t v12 = v6; // 0x89c3e
            int64_t v13 = (int64_t)&v1; // 0x89c3e
            v10 = v13;
            v8 = v11;
            v9 = v12;
            if (v7 == 2) {
                int64_t v14 = v12 / 128 % 2; // 0x8a00c
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
            // break -> 0x8a0d7
            break;
        }
        default: {
            char v15 = 0; // 0x89c4b
            int64_t v16 = v6; // 0x89c4b
            if (v7 == -102) {
                uint32_t v17 = v6 & 64; // 0x89c51
                int64_t v18 = v17; // 0x89c51
                v15 = 0;
                v16 = v18;
                if (v17 == 0) {
                    // 0x89c5d
                    *v3 = 1;
                    v15 = 1;
                    v16 = v18;
                }
            }
            char v19 = v15; // 0x89c91
            int64_t v20 = v16; // 0x89c91
            if (v7 == 0) {
                uint32_t v21 = (int32_t)v16 & 64; // 0x89c9a
                int64_t v22 = v21; // 0x89c9a
                v19 = v15;
                v20 = v22;
                if (v21 == 0) {
                    // 0x89ca6
                    v19 = v15;
                    v20 = v22;
                    if (v16 % 2 == 0) {
                        // 0x89cb3
                        *v3 = 1;
                        v19 = 1;
                        v20 = v22;
                    }
                }
            }
            char v23 = v19; // 0x89cee
            int64_t v24 = v20; // 0x89cee
            if (v7 == 95) {
                uint32_t v25 = (int32_t)v20 % 2; // 0x89cf4
                int64_t v26 = v25; // 0x89cf4
                v23 = v19;
                v24 = v26;
                if (v25 == 0) {
                    // 0x89d00
                    *v3 = 1;
                    v23 = 1;
                    v24 = v26;
                }
            }
            char v27 = v23; // 0x89d1a
            int64_t v28 = v24; // 0x89d1a
            if (v7 == -104) {
                // 0x89d20
                v27 = v23;
                v28 = 0;
                if (v24 % 2 != 0) {
                    // 0x89d2c
                    *v3 = 1;
                    v27 = 1;
                    v28 = 1;
                }
            }
            char v29 = v27; // 0x89d86
            int64_t v30 = v28; // 0x89d86
            if (v7 == -119) {
                uint32_t v31 = (int32_t)v28 & 64; // 0x89d8f
                v29 = v27;
                v30 = 0;
                if (v28 % 2 != 0 || v31 != 0) {
                    *v3 = 1;
                    v29 = 1;
                    v30 = v31;
                }
            }
            char v32 = v29; // 0x89e0b
            int64_t v33 = v30; // 0x89e0b
            if (v7 == 47) {
                // 0x89e11
                v32 = v29;
                v33 = v30;
                if ((v30 & 64) == 0) {
                    int64_t v34 = v30 / 128 % 2; // 0x89e41
                    v32 = v29;
                    v33 = v34;
                    if ((int32_t)v34 == (int32_t)((v30 & (int64_t)(int32_t)L"\n2") / 2048)) {
                        // 0x89e4d
                        *v3 = 1;
                        v32 = 1;
                        v33 = v34;
                    }
                }
            }
            char v35 = v32; // 0x89e7b
            int64_t v36 = v33; // 0x89e7b
            if (v7 == -6) {
                int64_t v37 = v33 / 128 % 2; // 0x89eca
                v35 = v32;
                v36 = v37;
                if ((int32_t)v37 == (int32_t)((v33 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0x89ed6
                    *v3 = 1;
                    v35 = 1;
                    v36 = v37;
                }
            }
            char v38 = v35; // 0x89f0f
            int64_t v39 = v36; // 0x89f0f
            if (v7 == -115) {
                int64_t v40 = v36 / 128 % 2; // 0x89f44
                v38 = v35;
                v39 = v40;
                if ((int32_t)v40 != (int32_t)((v36 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0x89f50
                    *v3 = 1;
                    v38 = 1;
                    v39 = v40;
                }
            }
            char v41 = v38; // 0x8a053
            int64_t v42 = v39; // 0x8a053
            if (v7 == -30) {
                uint32_t v43 = (int32_t)v39 & (int32_t)L"\n2"; // 0x8a059
                int64_t v44 = v43; // 0x8a059
                v41 = v38;
                v42 = v44;
                if (v43 == 0) {
                    // 0x8a065
                    *v3 = 1;
                    v41 = 1;
                    v42 = v44;
                }
            }
            // 0x8a08e
            v8 = v41;
            v9 = v42;
            if (v7 == -90) {
                uint32_t v45 = (int32_t)v42 & 4; // 0x8a096
                int64_t v46 = v45; // 0x8a096
                v8 = v41;
                v9 = v46;
                if (v45 == 0) {
                    // 0x8a0a2
                    *v3 = 1;
                    v8 = 1;
                    v9 = v46;
                }
            }
            // break -> 0x8a0d7
            break;
        }
    }
    char v47 = v8; // 0x8a0d9
    int64_t v48 = v9; // 0x8a0d9
    if (v7 == 12) {
        uint32_t v49 = (int32_t)v9 & 128; // 0x8a0df
        int64_t v50 = v49; // 0x8a0df
        v47 = v8;
        v48 = v50;
        if (v49 == 0) {
            // 0x8a0eb
            *v3 = 1;
            v47 = 1;
            v48 = v50;
        }
    }
    char v51 = v47; // 0x8a10b
    int64_t v52 = v48; // 0x8a10b
    if (v7 == -88) {
        uint32_t v53 = (int32_t)v48 & (int32_t)L"\n2"; // 0x8a111
        v51 = v47;
        v52 = 0;
        if (v53 != 0) {
            // 0x8a11d
            *v3 = 1;
            v51 = 1;
            v52 = v53;
        }
    }
    char v54 = v51; // 0x8a14e
    int64_t v55 = v52; // 0x8a14e
    char v56; // 0x89b37
    if (v7 != -21) {
        goto lab_0x8a190;
    } else {
        uint32_t v57 = (int32_t)v52 & 4; // 0x8a154
        v56 = v51;
        if (v57 == 0) {
            goto lab_0x8a1d6;
        } else {
            // 0x8a160
            *v3 = 1;
            v54 = 1;
            v55 = v57;
            goto lab_0x8a190;
        }
    }
  lab_0x8a190:
    // 0x8a190
    v56 = v54;
    int64_t v58; // 0x89b37
    if (v7 != 56 || (char)v55 > -1) {
        goto lab_0x8a1d6;
    } else {
        // 0x8a1d6
        *v3 = 1;
        v58 = *v4;
        goto lab_0x8a1eb;
    }
  lab_0x8a1d6:;
    int64_t v59 = *v4;
    v58 = v59;
    if (v56 == 0) {
        int64_t * v60 = (int64_t *)(v2 + (int64_t)*(int16_t *)(v59 + 9)); // 0x8a28c
        *v60 = *v60 + 136;
        *v4 = *v4 + 13;
        return result;
    }
    goto lab_0x8a1eb;
  lab_0x8a1eb:;
    uint32_t v61 = *(int32_t *)v58; // 0x8a206
    int64_t v62 = *(int64_t *)(v2 + 187); // 0x8a213
    uint16_t v63 = *(int16_t *)(v58 + 4); // 0x8a231
    *(int64_t *)(v10 + (int64_t)v63) = v62 + (int64_t)v61;
    *(int32_t *)(v2 + 476) = 0;
    return result2;
}

// Address range: 0x8a384 - 0x8a387
int64_t function_8a384(void) {
    // 0x8a384
    int64_t result; // 0x8a384
    return result;
}

// Address range: 0x8c41c - 0x8c4cf
int64_t function_8c41c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x8c41c
    int64_t v1; // 0x8c41c
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x8c42d
    int64_t v3 = *v2; // 0x8c42d
    int64_t * v4 = (int64_t *)(v1 + 187); // 0x8c444
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0x8c468
    *(int64_t *)v5 = *v4 + (int64_t)*(int32_t *)(v3 + 6);
    *(int64_t *)(v5 + 8) = *v4 + (int64_t)*(int32_t *)*v2;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x8c4cf - 0x8c5b9
int64_t function_8c4cf(void) {
    // 0x8c4cf
    int64_t result; // 0x8c4cf
    int64_t * v1 = (int64_t *)(result + 10); // 0x8c4e3
    int64_t v2 = *v1; // 0x8c4e3
    uint16_t v3 = *(int16_t *)(v2 + 6); // 0x8c4f0
    int64_t * v4 = (int64_t *)(result + (int64_t)*(int16_t *)(v2 + 2)); // 0x8c506
    *(int64_t *)(result + (int64_t)v3) = *(int64_t *)*v4;
    int64_t v5 = *(int64_t *)(result + (int64_t)*(int16_t *)*v1); // 0x8c52a
    *v4 = ((v5 & (int64_t)&g2) == 0 ? 8 : -8) + *v4;
    int32_t * v6 = (int32_t *)(result + 368); // 0x8c595
    *v6 = (int32_t)*(int16_t *)(*v1 + 4) + 0x1f18e1aa ^ *v6;
    *v1 = *v1 + 8;
    return result;
}

// Address range: 0x8ceb4 - 0x8d71d
int64_t function_8ceb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t result, int64_t a21) {
    int64_t v1 = a6;
    int64_t v2; // 0x8ceb4
    char * v3 = (char *)(v2 + 18); // 0x8cee1
    *v3 = 0;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0x8cf03
    int64_t v5 = *v4; // 0x8cf03
    uint32_t v6 = *(int32_t *)(v2 + (int64_t)*(int16_t *)(v5 + 6)); // 0x8cf28
    char v7 = *(char *)(v5 + 8); // 0x8cf55
    char v8; // 0x8ceb4
    int64_t v9; // 0x8ceb4
    int64_t v10; // 0x8ceb4
    switch (v7) {
        case 34: {
        }
        case 2: {
            char v11 = 0; // 0x8cf84
            if ((v6 & 64) != 0) {
                // 0x8cf8a
                *v3 = 1;
                v11 = 1;
            }
            int64_t v12 = v6; // 0x8cfba
            int64_t v13 = (int64_t)&v1; // 0x8cfba
            v10 = v13;
            v8 = v11;
            v9 = v12;
            if (v7 == 2) {
                int64_t v14 = v12 / 128 % 2; // 0x8d39f
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
            // break -> 0x8d45f
            break;
        }
        default: {
            char v15 = 0; // 0x8cfcc
            int64_t v16 = v6; // 0x8cfcc
            if (v7 == -102) {
                uint32_t v17 = v6 & 64; // 0x8cfd2
                int64_t v18 = v17; // 0x8cfd2
                v15 = 0;
                v16 = v18;
                if (v17 == 0) {
                    // 0x8cfdf
                    *v3 = 1;
                    v15 = 1;
                    v16 = v18;
                }
            }
            char v19 = v15; // 0x8d00f
            int64_t v20 = v16; // 0x8d00f
            if (v7 == 0) {
                uint32_t v21 = (int32_t)v16 & 64; // 0x8d021
                int64_t v22 = v21; // 0x8d021
                v19 = v15;
                v20 = v22;
                if (v21 == 0) {
                    // 0x8d02e
                    v19 = v15;
                    v20 = v22;
                    if (v16 % 2 == 0) {
                        // 0x8d03b
                        *v3 = 1;
                        v19 = 1;
                        v20 = v22;
                    }
                }
            }
            char v23 = v19; // 0x8d082
            int64_t v24 = v20; // 0x8d082
            if (v7 == 95) {
                uint32_t v25 = (int32_t)v20 % 2; // 0x8d088
                int64_t v26 = v25; // 0x8d088
                v23 = v19;
                v24 = v26;
                if (v25 == 0) {
                    // 0x8d095
                    *v3 = 1;
                    v23 = 1;
                    v24 = v26;
                }
            }
            char v27 = v23; // 0x8d0eb
            int64_t v28 = v24; // 0x8d0eb
            if (v7 == -104) {
                // 0x8d0f1
                v27 = v23;
                v28 = 0;
                if (v24 % 2 != 0) {
                    // 0x8d0fe
                    *v3 = 1;
                    v27 = 1;
                    v28 = 1;
                }
            }
            char v29 = v27; // 0x8d140
            int64_t v30 = v28; // 0x8d140
            if (v7 == -119) {
                uint32_t v31 = (int32_t)v28 & 64; // 0x8d153
                v29 = v27;
                v30 = 0;
                if (v28 % 2 != 0 || v31 != 0) {
                    *v3 = 1;
                    v29 = 1;
                    v30 = v31;
                }
            }
            char v32 = v29; // 0x8d1c6
            int64_t v33 = v30; // 0x8d1c6
            if (v7 == 47) {
                // 0x8d1cc
                v32 = v29;
                v33 = v30;
                if ((v30 & 64) == 0) {
                    int64_t v34 = v30 / 128 % 2; // 0x8d215
                    v32 = v29;
                    v33 = v34;
                    if ((int32_t)v34 == (int32_t)((v30 & (int64_t)(int32_t)L"\n2") / 2048)) {
                        // 0x8d222
                        *v3 = 1;
                        v32 = 1;
                        v33 = v34;
                    }
                }
            }
            char v35 = v32; // 0x8d275
            int64_t v36 = v33; // 0x8d275
            if (v7 == -6) {
                int64_t v37 = v33 / 128 % 2; // 0x8d2a9
                v35 = v32;
                v36 = v37;
                if ((int32_t)v37 == (int32_t)((v33 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0x8d2b6
                    *v3 = 1;
                    v35 = 1;
                    v36 = v37;
                }
            }
            char v38 = v35; // 0x8d2cf
            int64_t v39 = v36; // 0x8d2cf
            if (v7 == -115) {
                int64_t v40 = v36 / 128 % 2; // 0x8d2fe
                v38 = v35;
                v39 = v40;
                if ((int32_t)v40 != (int32_t)((v36 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0x8d30b
                    *v3 = 1;
                    v38 = 1;
                    v39 = v40;
                }
            }
            char v41 = v38; // 0x8d3df
            int64_t v42 = v39; // 0x8d3df
            if (v7 == -30) {
                uint32_t v43 = (int32_t)v39 & (int32_t)L"\n2"; // 0x8d3e5
                int64_t v44 = v43; // 0x8d3e5
                v41 = v38;
                v42 = v44;
                if (v43 == 0) {
                    // 0x8d3f2
                    *v3 = 1;
                    v41 = 1;
                    v42 = v44;
                }
            }
            // 0x8d417
            v8 = v41;
            v9 = v42;
            if (v7 == -90) {
                uint32_t v45 = (int32_t)v42 & 4; // 0x8d420
                int64_t v46 = v45; // 0x8d420
                v8 = v41;
                v9 = v46;
                if (v45 == 0) {
                    // 0x8d42d
                    *v3 = 1;
                    v8 = 1;
                    v9 = v46;
                }
            }
            // break -> 0x8d45f
            break;
        }
    }
    char v47 = v8; // 0x8d462
    int64_t v48 = v9; // 0x8d462
    if (v7 == 12) {
        uint32_t v49 = (int32_t)v9 & 128; // 0x8d468
        int64_t v50 = v49; // 0x8d468
        v47 = v8;
        v48 = v50;
        if (v49 == 0) {
            // 0x8d475
            *v3 = 1;
            v47 = 1;
            v48 = v50;
        }
    }
    char v51 = v47; // 0x8d4a5
    int64_t v52 = v48; // 0x8d4a5
    if (v7 == -88) {
        uint32_t v53 = (int32_t)v48 & (int32_t)L"\n2"; // 0x8d4ab
        v51 = v47;
        v52 = 0;
        if (v53 != 0) {
            // 0x8d4b8
            *v3 = 1;
            v51 = 1;
            v52 = v53;
        }
    }
    char v54 = v51; // 0x8d4e6
    int64_t v55 = v52; // 0x8d4e6
    char v56; // 0x8ceb4
    if (v7 != -21) {
        goto lab_0x8d52d;
    } else {
        uint32_t v57 = (int32_t)v52 & 4; // 0x8d4ec
        v56 = v51;
        if (v57 == 0) {
            goto lab_0x8d56d;
        } else {
            // 0x8d4f9
            *v3 = 1;
            v54 = 1;
            v55 = v57;
            goto lab_0x8d52d;
        }
    }
  lab_0x8d52d:
    // 0x8d52d
    v56 = v54;
    int64_t v58; // 0x8ceb4
    if (v7 != 56 || (char)v55 > -1) {
        goto lab_0x8d56d;
    } else {
        // 0x8d56d
        *v3 = 1;
        v58 = *v4;
        goto lab_0x8d582;
    }
  lab_0x8d56d:;
    int64_t v59 = *v4;
    v58 = v59;
    if (v56 != 0) {
        goto lab_0x8d582;
      lab_0x8d582:;
        uint32_t v60 = *(int32_t *)v58; // 0x8d59d
        int64_t v61 = *(int64_t *)(v2 + 187); // 0x8d5aa
        uint16_t v62 = *(int16_t *)(v58 + 4); // 0x8d5c8
        *(int64_t *)(v10 + (int64_t)v62) = v61 + (int64_t)v60;
        *(int32_t *)(v2 + 476) = 0;
        return result;
    }
    int64_t * v63 = (int64_t *)(v2 + (int64_t)*(int16_t *)(v59 + 9)); // 0x8d625
    *v63 = *v63 + 136;
    int32_t * v64 = (int32_t *)(v2 + 368); // 0x8d6a4
    int32_t v65 = *v64; // 0x8d6a4
    uint32_t v66 = (int32_t)*(int16_t *)(*v4 + 11) ^ 0x44422ebb ^ v65; // 0x8d6b0
    *v64 = v66 & v65;
    *v4 = *v4 + 13;
    return v66 % 0x10000;
}

// Address range: 0x8d71d - 0x8df9c
int64_t function_8d71d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20, int64_t result, int64_t a22) {
    int64_t v1 = a7;
    int64_t v2; // 0x8d71d
    char * v3 = (char *)(v2 + 18); // 0x8d733
    *v3 = 0;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0x8d766
    int64_t v5 = *v4; // 0x8d766
    uint32_t v6 = *(int32_t *)(v2 + (int64_t)*(int16_t *)(v5 + 6)); // 0x8d787
    int64_t v7 = v6; // 0x8d787
    char v8 = *(char *)(v5 + 8); // 0x8d7d5
    char v9; // 0x8d71d
    int64_t v10; // 0x8d71d
    int64_t v11; // 0x8d71d
    switch (v8) {
        case 34: {
        }
        case 2: {
            char v12 = 0; // 0x8d800
            if ((v7 & 64) != 0) {
                // 0x8d806
                *v3 = 1;
                v12 = 1;
            }
            int64_t v13 = v6; // 0x8d827
            int64_t v14 = (int64_t)&v1; // 0x8d827
            v9 = v12;
            v11 = v14;
            v10 = v13;
            if (v8 == 2) {
                int64_t v15 = v13 / 128 % 2; // 0x8dbe0
                v9 = v12;
                v11 = v14;
                v10 = v15;
                if ((v13 & 64) != 0 || (v6 & (int32_t)L"\n2") / 2048 != (int32_t)v15) {
                    *v3 = 1;
                    v9 = 1;
                    v11 = v14;
                    v10 = v15;
                }
            }
            // break -> 0x8dcd0
            break;
        }
        default: {
            char v16 = 0; // 0x8d82d
            int64_t v17 = v7; // 0x8d82d
            if (v8 == -102) {
                uint32_t v18 = v6 & 64; // 0x8d833
                int64_t v19 = v18; // 0x8d833
                v16 = 0;
                v17 = v19;
                if (v18 == 0) {
                    // 0x8d840
                    *v3 = 1;
                    v16 = 1;
                    v17 = v19;
                }
            }
            char v20 = v16; // 0x8d85e
            int64_t v21 = v17; // 0x8d85e
            if (v8 == 0) {
                uint32_t v22 = (int32_t)v17 & 64; // 0x8d874
                int64_t v23 = v22; // 0x8d874
                v20 = v16;
                v21 = v23;
                if (v22 == 0) {
                    // 0x8d881
                    v20 = v16;
                    v21 = v23;
                    if (v17 % 2 == 0) {
                        // 0x8d88e
                        *v3 = 1;
                        v20 = 1;
                        v21 = v23;
                    }
                }
            }
            char v24 = v20; // 0x8d8d1
            int64_t v25 = v21; // 0x8d8d1
            if (v8 == 95) {
                uint32_t v26 = (int32_t)v21 % 2; // 0x8d8d7
                int64_t v27 = v26; // 0x8d8d7
                v24 = v20;
                v25 = v27;
                if (v26 == 0) {
                    // 0x8d8e4
                    *v3 = 1;
                    v24 = 1;
                    v25 = v27;
                }
            }
            char v28 = v24; // 0x8d925
            int64_t v29 = v25; // 0x8d925
            if (v8 == -104) {
                // 0x8d92b
                v28 = v24;
                v29 = 0;
                if (v25 % 2 != 0) {
                    // 0x8d938
                    *v3 = 1;
                    v28 = 1;
                    v29 = 1;
                }
            }
            char v30 = v28; // 0x8d96c
            int64_t v31 = v29; // 0x8d96c
            if (v8 == -119) {
                uint32_t v32 = (int32_t)v29 & 64; // 0x8d982
                v30 = v28;
                v31 = 0;
                if (v29 % 2 != 0 || v32 != 0) {
                    *v3 = 1;
                    v30 = 1;
                    v31 = v32;
                }
            }
            char v33 = v30; // 0x8d9f6
            int64_t v34 = v31; // 0x8d9f6
            if (v8 == 47) {
                // 0x8d9fc
                v33 = v30;
                v34 = v31;
                if ((v31 & 64) == 0) {
                    int64_t v35 = v31 / 128 % 2; // 0x8da3b
                    v33 = v30;
                    v34 = v35;
                    if ((int32_t)v35 == (int32_t)((v31 & (int64_t)(int32_t)L"\n2") / 2048)) {
                        // 0x8da48
                        *v3 = 1;
                        v33 = 1;
                        v34 = v35;
                    }
                }
            }
            char v36 = v33; // 0x8da74
            int64_t v37 = v34; // 0x8da74
            if (v8 == -6) {
                int64_t v38 = v34 / 128 % 2; // 0x8dab0
                v36 = v33;
                v37 = v38;
                if ((int32_t)v38 == (int32_t)((v34 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0x8dabd
                    *v3 = 1;
                    v36 = 1;
                    v37 = v38;
                }
            }
            char v39 = v36; // 0x8daed
            int64_t v40 = v37; // 0x8daed
            if (v8 == -115) {
                int64_t v41 = v37 / 128 % 2; // 0x8db31
                v39 = v36;
                v40 = v41;
                if ((int32_t)v41 != (int32_t)((v37 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0x8db3e
                    *v3 = 1;
                    v39 = 1;
                    v40 = v41;
                }
            }
            char v42 = v39; // 0x8dc26
            int64_t v43 = v40; // 0x8dc26
            if (v8 == -30) {
                uint32_t v44 = (int32_t)v40 & (int32_t)L"\n2"; // 0x8dc2c
                int64_t v45 = v44; // 0x8dc2c
                v42 = v39;
                v43 = v45;
                if (v44 == 0) {
                    // 0x8dc39
                    *v3 = 1;
                    v42 = 1;
                    v43 = v45;
                }
            }
            // 0x8dc7d
            v9 = v42;
            v10 = v43;
            if (v8 == -90) {
                uint32_t v46 = (int32_t)v43 & 4; // 0x8dc87
                int64_t v47 = v46; // 0x8dc87
                v9 = v42;
                v10 = v47;
                if (v46 == 0) {
                    // 0x8dc94
                    *v3 = 1;
                    v9 = 1;
                    v10 = v47;
                }
            }
            // break -> 0x8dcd0
            break;
        }
    }
    char v48 = v9; // 0x8dcd4
    int64_t v49 = v10; // 0x8dcd4
    if (v8 == 12) {
        uint32_t v50 = (int32_t)v10 & 128; // 0x8dcda
        int64_t v51 = v50; // 0x8dcda
        v48 = v9;
        v49 = v51;
        if (v50 == 0) {
            // 0x8dce7
            *v3 = 1;
            v48 = 1;
            v49 = v51;
        }
    }
    char v52 = v48; // 0x8dd26
    int64_t v53 = v49; // 0x8dd26
    if (v8 == -88) {
        uint32_t v54 = (int32_t)v49 & (int32_t)L"\n2"; // 0x8dd2c
        v52 = v48;
        v53 = 0;
        if (v54 != 0) {
            // 0x8dd39
            *v3 = 1;
            v52 = 1;
            v53 = v54;
        }
    }
    char v55 = v52; // 0x8dd78
    int64_t v56 = v53; // 0x8dd78
    char v57; // 0x8d71d
    if (v8 != -21) {
        goto lab_0x8ddaf;
    } else {
        uint32_t v58 = (int32_t)v53 & 4; // 0x8dd7e
        v57 = v52;
        if (v58 == 0) {
            goto lab_0x8ddf6;
        } else {
            // 0x8dd8b
            *v3 = 1;
            v55 = 1;
            v56 = v58;
            goto lab_0x8ddaf;
        }
    }
  lab_0x8ddaf:
    // 0x8ddaf
    v57 = v55;
    int64_t v59; // 0x8d71d
    if (v8 != 56 || (char)v56 > -1) {
        goto lab_0x8ddf6;
    } else {
        // 0x8ddf6
        *v3 = 1;
        v59 = *v4;
        goto lab_0x8de0a;
    }
  lab_0x8ddf6:;
    int64_t v60 = *v4;
    v59 = v60;
    if (v57 == 0) {
        int64_t * v61 = (int64_t *)(v2 + (int64_t)*(int16_t *)(v60 + 9)); // 0x8deaa
        *v61 = *v61 + 136;
        *v4 = *v4 + 13;
        return v2 + 368;
    }
    goto lab_0x8de0a;
  lab_0x8de0a:;
    uint32_t v62 = *(int32_t *)v59; // 0x8de25
    int64_t v63 = *(int64_t *)(v2 + 187); // 0x8de31
    uint16_t v64 = *(int16_t *)(v59 + 4); // 0x8de4f
    *(int64_t *)(v11 + (int64_t)v64) = v63 + (int64_t)v62;
    *(int32_t *)(v2 + 476) = 0;
    return result;
}

// Address range: 0x8dfa4 - 0x8dfa9
int64_t function_8dfa4(void) {
    // 0x8dfa4
    return function_49f368f1();
}

// Address range: 0x8faec - 0x9026f
int64_t function_8faec(int64_t a1, int64_t a2) {
    // 0x8faec
    int64_t v1; // 0x8faec
    int64_t v2 = v1;
    int64_t v3 = v2 + 35; // 0x8fafc
    int32_t * v4 = (int32_t *)v3; // 0x8fb03
    int64_t v5 = v2 + 368; // 0x8fb09
    int32_t * v6 = (int32_t *)v5; // 0x8fb10
    int32_t v7 = *v6 & *v4 ^ 0x40561547; // 0x8fb1f
    *v6 = v7;
    int32_t v8 = v7 - (*v4 & 0x1340e310) + 0x2d8111d9; // 0x8fb6c
    *v6 = v8;
    *v4 = *v4 & 0x25637e96 & v8;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    *v4 = *v4 | 0x488765f3;
    int64_t * v9 = (int64_t *)(v2 + 96); // 0x8fc63
    uint64_t v10 = *v9 + 0x653cf834; // 0x8fc7f
    *v9 = v10;
    *v4 = *v6 + 0x2aab3c50 + *v4;
    char v11 = *(char *)(v2 + 404); // 0x8fe31
    int64_t v12; // 0x8faec
    int64_t v13; // 0x8faec
    bool v14; // 0x8faec
    if (v11 == 98) {
        unsigned char v15 = (char)v2; // 0x8fe40
        unsigned char v16 = (char)v10; // 0x8fe40
        char v17 = v15 - v16; // 0x8fe40
        int64_t v18 = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | (int64_t)(v15 < v16) | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v15 % 16 - v16 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v17) % 2 == 0) | 2048 * (int64_t)(((v17 ^ v15) & (char)(v10 ^ v2)) < 0) | 2; // bp-8, 0x8fe43
        v12 = v2 & -256 | (int64_t)v17;
        v13 = (int64_t)&v18;
    }
    int64_t v19 = v12; // 0x8fe5f
    int64_t v20 = v13; // 0x8fe5f
    if (v11 == 50) {
        uint16_t v21 = (int16_t)v12; // 0x8fe65
        uint16_t v22 = (int16_t)v10; // 0x8fe65
        int16_t v23 = v21 - v22; // 0x8fe65
        int64_t v24 = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | (int64_t)(v21 < v22) | 64 * (int64_t)(v23 == 0) | 128 * (int64_t)(v23 < 0) | 16 * (int64_t)(v21 % 16 - v22 % 16 > 15) | 2048 * (int64_t)(((v23 ^ v21) & (int16_t)(v12 ^ v10)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v23) % 2 == 0) | 2; // bp-16, 0x8fe69
        v19 = v12 & -0x10000 | (int64_t)v23;
        v20 = (int64_t)&v24;
    }
    int64_t v25 = v19; // 0x8fe7e
    int64_t v26 = v20; // 0x8fe7e
    if (v11 == 80) {
        uint32_t v27 = (int32_t)v19; // 0x8fe84
        uint32_t v28 = (int32_t)v10; // 0x8fe84
        int32_t v29 = v27 - v28; // 0x8fe84
        unsigned char v30 = llvm_ctpop_i8((char)v29); // 0x8fe84
        v26 = v20 - 8;
        *(int64_t *)v26 = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | (int64_t)(v27 < v28) | 64 * (int64_t)(v29 == 0) | 128 * (int64_t)(v29 < 0) | 16 * (int64_t)(v27 % 16 - v28 % 16 > 15) | 2048 * (int64_t)(((v29 ^ v27) & (int32_t)(v19 ^ v10)) < 0) | 4 * (int64_t)(v30 % 2 == 0) | 2;
        v25 = v29;
    }
    uint64_t v31 = v25;
    int64_t v32 = v31; // 0x8fea6
    int64_t v33 = v26; // 0x8fea6
    if (v11 == 58) {
        // 0x8feac
        v32 = v31 - v10;
        unsigned char v34 = llvm_ctpop_i8((char)v32); // 0x8feac
        v33 = v26 - 8;
        *(int64_t *)v33 = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | (int64_t)(v31 < v10) | 64 * (int64_t)(v32 == 0) | 128 * (int64_t)(v32 < 0) | 16 * (int64_t)(v31 % 16 - v10 % 16 > 15) | 2048 * (int64_t)(((v32 ^ v31) & (v31 ^ v10)) < 0) | 4 * (int64_t)(v34 % 2 == 0) | 2;
    }
    int64_t v35 = v2 + 113; // 0x8fec4
    int64_t * v36 = (int64_t *)v35; // 0x8fecb
    *v36 = v32;
    int64_t * v37 = (int64_t *)(v2 + 10); // 0x8fefe
    int64_t v38 = *v37; // 0x8fefe
    if (*(char *)v38 != 0) {
        uint16_t v39 = *(int16_t *)(v38 + 1); // 0x8ffdb
        *(int64_t *)(v2 + (int64_t)v39) = *(int64_t *)v33;
    }
    int32_t v40 = (*v4 ^ *v6 + 0x7d6325a) & 0x26dc7059; // 0x90052
    *v4 = v40;
    *v6 = *v6 | v40;
    *v36 = *v36 + 0x1a44e4ef;
    int64_t v41 = *(int64_t *)(v2 + 271); // 0x9014f
    uint16_t v42 = *(int16_t *)(*v37 + 3); // 0x9019b
    int32_t v43 = *v6; // 0x901c6
    uint32_t v44 = (v43 ^ (int32_t)v42) + 0x2bd71820; // 0x901d0
    *v6 = v44 ^ v43;
    *v37 = *v37 + 5;
    return v41 + 32 - ((int64_t)&g2 & 0x7fffffff) + (int64_t)(v44 % 0x10000) + ((v35 ^ v3 | 8) + (int64_t)&g3 + 0x8000008f + (v41 + (int64_t)v42 | v5) & 0x7ffff7ff | 2048);
}

// Address range: 0x90acd - 0x90c23
int64_t function_90acd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x90acd
    int64_t v1; // 0x90acd
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x90ae7
    int64_t v3 = *v2; // 0x90ae7
    int64_t v4 = *(int64_t *)(v1 + 271); // 0x90b37
    uint32_t v5 = *(int32_t *)(v3 + 4); // 0x90b96
    uint64_t v6 = (int64_t)v5; // 0x90b96
    *v2 = (v5 > -1 ? v6 : -((v6 % 0x80000000))) + v3;
    return *(int64_t *)(8 * (int64_t)*(int16_t *)v3 + v4);
}

// Address range: 0x953b1 - 0x957d9
int64_t function_953b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x953b1
    int64_t v1; // 0x953b1
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x953d8
    int32_t * v3 = (int32_t *)(v1 + 368); // 0x953ed
    int32_t v4 = *v2 ^ 0x7e4feaa1 ^ *v3; // 0x953ed
    *v3 = v4 ^ 0x2968389e;
    int32_t v5 = *v2 | v4 ^ 0x481d83c; // 0x95420
    *v2 = v5;
    int32_t v6 = (*v3 | v5 + 0x295d79d4 | 0x6a70639e) - 0x2ed5a434; // 0x9547a
    *v3 = v6;
    int32_t v7 = (v6 | *v2 - 0x5f23a362) ^ 0x5f9390ae; // 0x954ac
    *v3 = v7;
    int32_t v8 = (v7 | 0x2fd9e422) ^ *v2; // 0x954ce
    *v2 = v8;
    *v2 = v8 | *v3 + 0x56d385ee;
    int32_t v9 = *v3 ^ 0x6209aa88; // 0x9550a
    *v3 = v9;
    int64_t result = v1 + 10; // 0x9556b
    int64_t * v10 = (int64_t *)result; // 0x95572
    uint32_t v11 = (*(int32_t *)*v10 ^ v9) + *v2; // 0x95598
    *v3 = v11 + v9;
    uint64_t v12 = 0x100000001 * *(int64_t *)*v10;
    int64_t v13 = v12 < 0xffffffff00000001 ? v12 : v12 + 0xffffffff; // 0x955d5
    *(int64_t *)(v1 + 96) = (v13 | (int64_t)v11) - 0x653cf834;
    *v3 = (*v3 ^ *v2) - 0x18594029;
    int32_t v14 = *v2; // 0x95626
    int32_t v15 = v14; // 0x95637
    if ((v14 & 2) != 0) {
        int32_t v16 = v14 + 0x92f928e; // 0x95651
        *v2 = v16;
        v15 = v16;
        if ((v16 & 2) != 0) {
            int32_t v17 = (v16 | 0x6b087e5a) - 0x73ecd25c; // 0x95693
            *v2 = v17;
            v15 = v17;
        }
    }
    // 0x9569a
    *v2 = v15 - (*v3 ^ 0x2998c046);
    *v3 = *v3 - (int32_t)*(int16_t *)(*v10 + 8);
    *v10 = *v10 + 10;
    return result;
}

// Address range: 0x95b5c - 0x9635f
int64_t function_95b5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x95b5c
    int64_t result; // 0x95b5c
    char * v1 = (char *)(result + 18); // 0x95b76
    *v1 = 0;
    int64_t * v2 = (int64_t *)(result + 10); // 0x95bb0
    int64_t v3 = *v2; // 0x95bb0
    uint32_t v4 = *(int32_t *)(result + (int64_t)*(int16_t *)(v3 + 8)); // 0x95bd1
    char v5 = *(char *)(v3 + 10); // 0x95c1d
    char v6; // 0x95b5c
    int64_t v7; // 0x95b5c
    switch (v5) {
        case 34: {
        }
        case 2: {
            char v8 = 0; // 0x95c58
            if ((v4 & 64) != 0) {
                // 0x95c5e
                *v1 = 1;
                v8 = 1;
            }
            int64_t v9 = v4; // 0x95c8b
            v6 = v8;
            v7 = v9;
            if (v5 == 2) {
                int64_t v10 = v9 / 128 % 2; // 0x95ff3
                v6 = v8;
                v7 = v10;
                if ((v9 & 64) != 0 || (v4 & (int32_t)L"\n2") / 2048 != (int32_t)v10) {
                    *v1 = 1;
                    v6 = 1;
                    v7 = v10;
                }
            }
            // break -> 0x960a8
            break;
        }
        default: {
            char v11 = 0; // 0x95c9a
            int64_t v12 = v4; // 0x95c9a
            if (v5 == -102) {
                uint32_t v13 = v4 & 64; // 0x95ca0
                int64_t v14 = v13; // 0x95ca0
                v11 = 0;
                v12 = v14;
                if (v13 == 0) {
                    // 0x95cac
                    *v1 = 1;
                    v11 = 1;
                    v12 = v14;
                }
            }
            char v15 = v11; // 0x95ce4
            int64_t v16 = v12; // 0x95ce4
            if (v5 == 0) {
                uint32_t v17 = (int32_t)v12 & 64; // 0x95ced
                int64_t v18 = v17; // 0x95ced
                v15 = v11;
                v16 = v18;
                if (v17 == 0) {
                    // 0x95cf9
                    v15 = v11;
                    v16 = v18;
                    if (v12 % 2 == 0) {
                        // 0x95d05
                        *v1 = 1;
                        v15 = 1;
                        v16 = v18;
                    }
                }
            }
            char v19 = v15; // 0x95d28
            int64_t v20 = v16; // 0x95d28
            if (v5 == 95) {
                uint32_t v21 = (int32_t)v16 % 2; // 0x95d2e
                int64_t v22 = v21; // 0x95d2e
                v19 = v15;
                v20 = v22;
                if (v21 == 0) {
                    // 0x95d3a
                    *v1 = 1;
                    v19 = 1;
                    v20 = v22;
                }
            }
            char v23 = v19; // 0x95d53
            int64_t v24 = v20; // 0x95d53
            if (v5 == -104) {
                // 0x95d59
                v23 = v19;
                v24 = 0;
                if (v20 % 2 != 0) {
                    // 0x95d65
                    *v1 = 1;
                    v23 = 1;
                    v24 = 1;
                }
            }
            char v25 = v23; // 0x95d97
            int64_t v26 = v24; // 0x95d97
            if (v5 == -119) {
                uint32_t v27 = (int32_t)v24 & 64; // 0x95daa
                v25 = v23;
                v26 = 0;
                if (v24 % 2 != 0 || v27 != 0) {
                    *v1 = 1;
                    v25 = 1;
                    v26 = v27;
                }
            }
            char v28 = v25; // 0x95e19
            int64_t v29 = v26; // 0x95e19
            if (v5 == 47) {
                // 0x95e1f
                v28 = v25;
                v29 = v26;
                if ((v26 & 64) == 0) {
                    int64_t v30 = v26 / 128 % 2; // 0x95e62
                    v28 = v25;
                    v29 = v30;
                    if ((int32_t)v30 == (int32_t)((v26 & (int64_t)(int32_t)L"\n2") / 2048)) {
                        // 0x95e6d
                        *v1 = 1;
                        v28 = 1;
                        v29 = v30;
                    }
                }
            }
            char v31 = v28; // 0x95e9c
            int64_t v32 = v29; // 0x95e9c
            if (v5 == -6) {
                int64_t v33 = v29 / 128 % 2; // 0x95ecc
                v31 = v28;
                v32 = v33;
                if ((int32_t)v33 == (int32_t)((v29 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0x95ed7
                    *v1 = 1;
                    v31 = 1;
                    v32 = v33;
                }
            }
            char v34 = v31; // 0x95f05
            int64_t v35 = v32; // 0x95f05
            if (v5 == -115) {
                int64_t v36 = v32 / 128 % 2; // 0x95f45
                v34 = v31;
                v35 = v36;
                if ((int32_t)v36 != (int32_t)((v32 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0x95f50
                    *v1 = 1;
                    v34 = 1;
                    v35 = v36;
                }
            }
            char v37 = v34; // 0x9601e
            int64_t v38 = v35; // 0x9601e
            if (v5 == -30) {
                uint32_t v39 = (int32_t)v35 & (int32_t)L"\n2"; // 0x96024
                int64_t v40 = v39; // 0x96024
                v37 = v34;
                v38 = v40;
                if (v39 == 0) {
                    // 0x96030
                    *v1 = 1;
                    v37 = 1;
                    v38 = v40;
                }
            }
            // 0x96055
            v6 = v37;
            v7 = v38;
            if (v5 == -90) {
                uint32_t v41 = (int32_t)v38 & 4; // 0x9605f
                int64_t v42 = v41; // 0x9605f
                v6 = v37;
                v7 = v42;
                if (v41 == 0) {
                    // 0x9606b
                    *v1 = 1;
                    v6 = 1;
                    v7 = v42;
                }
            }
            // break -> 0x960a8
            break;
        }
    }
    char v43 = v6; // 0x960ac
    int64_t v44 = v7; // 0x960ac
    if (v5 == 12) {
        uint32_t v45 = (int32_t)v7 & 128; // 0x960b2
        int64_t v46 = v45; // 0x960b2
        v43 = v6;
        v44 = v46;
        if (v45 == 0) {
            // 0x960be
            *v1 = 1;
            v43 = 1;
            v44 = v46;
        }
    }
    char v47 = v43; // 0x9610b
    int64_t v48 = v44; // 0x9610b
    if (v5 == -88) {
        uint32_t v49 = (int32_t)v44 & (int32_t)L"\n2"; // 0x96111
        v47 = v43;
        v48 = 0;
        if (v49 != 0) {
            // 0x9611d
            *v1 = 1;
            v47 = 1;
            v48 = v49;
        }
    }
    char v50 = v47; // 0x9613d
    int64_t v51 = v48; // 0x9613d
    char v52; // 0x95b5c
    if (v5 != -21) {
        goto lab_0x9618f;
    } else {
        uint32_t v53 = (int32_t)v48 & 4; // 0x96143
        v52 = v47;
        if (v53 == 0) {
            goto lab_0x961cb;
        } else {
            // 0x9614f
            *v1 = 1;
            v50 = 1;
            v51 = v53;
            goto lab_0x9618f;
        }
    }
  lab_0x9618f:
    // 0x9618f
    v52 = v50;
    if (v5 != 56 || (char)v51 > -1) {
        goto lab_0x961cb;
    } else {
        // 0x961cb
        *v1 = 1;
        goto lab_0x962db;
    }
  lab_0x961cb:
    // 0x961cb
    if (v52 == 0) {
        // 0x9634f
        return result;
    }
    goto lab_0x962db;
  lab_0x962db:;
    int64_t v54 = *v2;
    uint32_t v55 = *(int32_t *)(v54 + 4);
    uint64_t v56 = (int64_t)v55;
    if (v55 > -1) {
        // 0x9632a
        *v2 = v54 + v56;
    } else {
        // 0x962e8
        *v2 = v54 - v56 % 0x80000000;
    }
    // 0x9634f
    return result;
}

// Address range: 0x9c08f - 0x9c10b
int64_t function_9c08f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x9c08f
    int64_t v1; // 0x9c08f
    int64_t v2 = *(int64_t *)(v1 + 10); // 0x9c0a0
    uint32_t v3 = *(int32_t *)v2; // 0x9c0aa
    int64_t v4 = *(int64_t *)(v1 + 187); // 0x9c0b7
    uint16_t v5 = *(int16_t *)(v2 + 4); // 0x9c0d5
    *(int64_t *)(v1 + (int64_t)v5) = v4 + (int64_t)v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x9c10b - 0x9c3f7
int64_t function_9c10b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9c10b
    int64_t v1; // 0x9c10b
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x9c15b
    int32_t * v3 = (int32_t *)(v1 + 368); // 0x9c16e
    *v3 = *v2 & 0x2c46ace3 & *v3;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x9c1b3
    int64_t v5 = v1 + (int64_t)*(int16_t *)*v4; // 0x9c1c1
    int64_t * v6 = (int64_t *)v5;
    *v6 = *v6 + (*(char *)(v1 + 404) != 50 ? -8 : -2);
    int32_t v7 = *v2; // 0x9c1fe
    int32_t v8 = v7; // 0x9c215
    if ((v7 & 2) != 0) {
        // 0x9c21b
        v8 = v7 - 0x14b22a15;
        *v2 = v8;
    }
    // 0x9c235
    *v3 = *v3 | v8;
    *v4 = *v4 + 4;
    return (v5 | 4) + 192 & 240;
}

// Address range: 0x9c3f9 - 0x9c3fa
int64_t function_9c3f9(void) {
    // 0x9c3f9
    int64_t result; // 0x9c3f9
    return result;
}

// Address range: 0x9e336 - 0x9e7af
int64_t function_9e336(int64_t a1, int64_t a2, int64_t a3) {
    // 0x9e336
    int64_t v1; // 0x9e336
    int64_t v2 = v1;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x558fded1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x9e37e
    *v3 = *v3 + 0xfad1963;
    int32_t * v4 = (int32_t *)(v2 + 368); // 0x9e3e1
    *v4 = *v4 + 0x2bd68549;
    int64_t v5 = v2 - 0x558fded1; // 0x9e400
    uint64_t v6 = *v3 + 0x558fded1; // 0x9e46f
    char v7 = *(char *)(v2 + 404); // 0x9e491
    int64_t v8 = v5; // 0x9e498
    int64_t v9; // 0x9e336
    bool v10; // 0x9e336
    if (v7 == 98) {
        unsigned char v11 = (char)v5; // 0x9e49e
        unsigned char v12 = (char)v6; // 0x9e49e
        char v13 = v11 - v12; // 0x9e49e
        int64_t v14 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | (int64_t)(v11 < v12) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v11 % 16 - v12 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v13) % 2 == 0) | 2048 * (int64_t)(((v13 ^ v11) & (char)(v6 ^ v5)) < 0) | 2; // bp-8, 0x9e4a1
        v9 = (int64_t)&v14;
        v8 = v5 & -256 | (int64_t)v13;
    }
    int64_t v15 = v9; // 0x9e4b6
    int64_t v16 = v8; // 0x9e4b6
    if (v7 == 50) {
        uint16_t v17 = (int16_t)v8; // 0x9e4bc
        uint16_t v18 = (int16_t)v6; // 0x9e4bc
        int16_t v19 = v17 - v18; // 0x9e4bc
        int64_t v20 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | (int64_t)(v17 < v18) | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(v17 % 16 - v18 % 16 > 15) | 2048 * (int64_t)(((v19 ^ v17) & (int16_t)(v8 ^ v6)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v19) % 2 == 0) | 2; // bp-16, 0x9e4bf
        v15 = (int64_t)&v20;
        v16 = v8 & -0x10000 | (int64_t)v19;
    }
    int64_t v21 = v15; // 0x9e4cb
    int64_t v22 = v16; // 0x9e4cb
    if (v7 == 80) {
        uint32_t v23 = (int32_t)v16; // 0x9e4d1
        uint32_t v24 = (int32_t)v6; // 0x9e4d1
        int32_t v25 = v23 - v24; // 0x9e4d1
        unsigned char v26 = llvm_ctpop_i8((char)v25); // 0x9e4d1
        v21 = v15 - 8;
        *(int64_t *)v21 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | (int64_t)(v23 < v24) | 64 * (int64_t)(v25 == 0) | 128 * (int64_t)(v25 < 0) | 16 * (int64_t)(v23 % 16 - v24 % 16 > 15) | 2048 * (int64_t)(((v25 ^ v23) & (int32_t)(v16 ^ v6)) < 0) | 4 * (int64_t)(v26 % 2 == 0) | 2;
        v22 = v25;
    }
    uint64_t v27 = v22;
    int64_t v28 = v21; // 0x9e4eb
    int64_t v29 = v27; // 0x9e4eb
    if (v7 == 58) {
        // 0x9e4f1
        v29 = v27 - v6;
        unsigned char v30 = llvm_ctpop_i8((char)v29); // 0x9e4f1
        v28 = v21 - 8;
        *(int64_t *)v28 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | (int64_t)(v27 < v6) | 64 * (int64_t)(v29 == 0) | 128 * (int64_t)(v29 < 0) | 16 * (int64_t)(v27 % 16 - v6 % 16 > 15) | 2048 * (int64_t)(((v29 ^ v27) & (v27 ^ v6)) < 0) | 4 * (int64_t)(v30 % 2 == 0) | 2;
    }
    int64_t * v31 = (int64_t *)(v2 + 113); // 0x9e541
    *v31 = v29 + 0x7793e089;
    int32_t * v32 = (int32_t *)(v2 + 35); // 0x9e558
    *v4 = *v4 + *v32;
    *v31 = v29 + 0x1a44e4ef;
    int64_t * v33 = (int64_t *)(v2 + 10); // 0x9e5ae
    int64_t v34 = *v33; // 0x9e5ae
    if (*(char *)(v34 + 4) != 0) {
        uint16_t v35 = *(int16_t *)(v34 + 2); // 0x9e5e4
        *(int64_t *)(v2 + (int64_t)v35) = *(int64_t *)v28;
    }
    int32_t v36 = *v4 - 0x4a4532ca; // 0x9e5f8
    *v4 = v36;
    int32_t v37 = *v32 + v36; // 0x9e622
    *v4 = v37;
    *v4 = v37 - 0x62c32dd8 - (v37 ^ (int32_t)*(int16_t *)*v33);
    *v33 = *v33 + 5;
    return 18 - ((int64_t)&g2 ^ 18) - (int64_t)&g1;
}

// Address range: 0x9fb50 - 0x9fbcd
int64_t function_9fb50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x9fb50
    int64_t v1; // 0x9fb50
    int64_t v2 = *(int64_t *)(v1 + 10); // 0x9fb61
    uint32_t v3 = *(int32_t *)v2; // 0x9fb6b
    int64_t v4 = *(int64_t *)(v1 + 187); // 0x9fb78
    uint16_t v5 = *(int16_t *)(v2 + 4); // 0x9fb96
    *(int64_t *)(v1 + (int64_t)v5) = v4 + (int64_t)v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x9fbcd - 0xa006b
int64_t function_9fbcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x9fe1f
    int64_t v1; // 0x9fbcd
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0x9fbd7
    int32_t v4 = *v3 | 0x52e5924a; // 0x9fbd7
    *v3 = v4;
    int64_t result = v2 + 10; // 0x9fbfa
    int64_t * v5 = (int64_t *)result; // 0x9fc0b
    uint16_t v6 = *(int16_t *)*v5; // 0x9fc34
    int32_t * v7 = (int32_t *)(v2 + 35); // 0x9fcae
    int32_t v8 = *v7; // 0x9fcae
    *v7 = v8 | 0x4083ed99;
    *(int64_t *)(v2 + 129) = v2 - 0x1a44e4ef + ((int64_t)(v4 + (int32_t)v6 ^ v8) & (int64_t)&g3);
    int32_t v9 = (*v3 & 0x7ca762c5 ^ 0x20046004) & *v7; // 0x9fdbb
    *v7 = v9;
    *v3 = v9 + 0x37b5a024 + *v3;
    *v7 = *v7 + 0x32c4b127;
    int32_t v10 = *v3 + 0x2e12e35a ^ 0x44fb7fdb; // 0x9fec4
    *v3 = v10;
    *v3 = v10 + *v7 & 0x7c737923;
    *v5 = *v5 + 4;
    return result;
}

// Address range: 0xa006d - 0xa0076
int64_t function_a006d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xa006d
    int64_t result; // 0xa006d
    char * v1 = (char *)(2 * result); // 0xa006d
    *v1 = *v1 + (char)result;
    char * v2 = (char *)(result - 57); // 0xa0070
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0xa2da3 - 0xa35ec
int64_t function_a2da3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa2da3
    int64_t v1; // 0xa2da3
    char * v2 = (char *)(v1 + 18); // 0xa2dc1
    *v2 = 0;
    int64_t * v3 = (int64_t *)(v1 + 10); // 0xa2df0
    int64_t v4 = *v3; // 0xa2df0
    uint32_t v5 = *(int32_t *)(v1 + (int64_t)*(int16_t *)(v4 + 8)); // 0xa2e1d
    int64_t v6 = v5; // 0xa2e1d
    char v7 = *(char *)(v4 + 10); // 0xa2e51
    char v8; // 0xa2da3
    int64_t v9; // 0xa2da3
    switch (v7) {
        case 34: {
        }
        case 2: {
            int64_t v10 = v6 & 64;
            char v11 = 0; // 0xa2e7b
            if (v10 != 0) {
                // 0xa2e81
                *v2 = 1;
                v11 = 1;
            }
            // 0xa322b
            v8 = v11;
            v9 = v6;
            if (v7 == 2) {
                int64_t v12 = v6 / 128 % 2; // 0xa32a6
                v8 = v11;
                v9 = v12;
                if (v10 != 0 || (v5 & (int32_t)L"\n2") / 2048 != (int32_t)v12) {
                    *v2 = 1;
                    v8 = 1;
                    v9 = v12;
                }
            }
            // break -> 0xa336e
            break;
        }
        default: {
            char v13 = 0; // 0xa2eb2
            int64_t v14 = v6; // 0xa2eb2
            if (v7 == -102) {
                uint32_t v15 = v5 & 64; // 0xa2eb8
                int64_t v16 = v15; // 0xa2eb8
                v13 = 0;
                v14 = v16;
                if (v15 == 0) {
                    // 0xa2ec4
                    *v2 = 1;
                    v13 = 1;
                    v14 = v16;
                }
            }
            char v17 = v13; // 0xa2ee0
            int64_t v18 = v14; // 0xa2ee0
            if (v7 == 0) {
                uint32_t v19 = (int32_t)v14 & 64; // 0xa2ee9
                int64_t v20 = v19; // 0xa2ee9
                v17 = v13;
                v18 = v20;
                if (v19 == 0) {
                    // 0xa2ef5
                    v17 = v13;
                    v18 = v20;
                    if (v14 % 2 == 0) {
                        // 0xa2f02
                        *v2 = 1;
                        v17 = 1;
                        v18 = v20;
                    }
                }
            }
            char v21 = v17; // 0xa2f2b
            int64_t v22 = v18; // 0xa2f2b
            if (v7 == 95) {
                uint32_t v23 = (int32_t)v18 % 2; // 0xa2f31
                int64_t v24 = v23; // 0xa2f31
                v21 = v17;
                v22 = v24;
                if (v23 == 0) {
                    // 0xa2f3d
                    *v2 = 1;
                    v21 = 1;
                    v22 = v24;
                }
            }
            char v25 = v21; // 0xa2f76
            int64_t v26 = v22; // 0xa2f76
            if (v7 == -104) {
                // 0xa2f7c
                v25 = v21;
                v26 = 0;
                if (v22 % 2 != 0) {
                    // 0xa2f88
                    *v2 = 1;
                    v25 = 1;
                    v26 = 1;
                }
            }
            char v27 = v25; // 0xa2fc5
            int64_t v28 = v26; // 0xa2fc5
            if (v7 == -119) {
                uint32_t v29 = (int32_t)v26 & 64; // 0xa2fdf
                v27 = v25;
                v28 = 0;
                if (v26 % 2 != 0 || v29 != 0) {
                    *v2 = 1;
                    v27 = 1;
                    v28 = v29;
                }
            }
            char v30 = v27; // 0xa3065
            int64_t v31 = v28; // 0xa3065
            if (v7 == 47) {
                // 0xa306b
                v30 = v27;
                v31 = v28;
                if ((v28 & 64) == 0) {
                    int64_t v32 = v28 / 128 % 2; // 0xa30bf
                    v30 = v27;
                    v31 = v32;
                    if ((int32_t)v32 == (int32_t)((v28 & (int64_t)(int32_t)L"\n2") / 2048)) {
                        // 0xa30cb
                        *v2 = 1;
                        v30 = 1;
                        v31 = v32;
                    }
                }
            }
            char v33 = v30; // 0xa310f
            int64_t v34 = v31; // 0xa310f
            if (v7 == -6) {
                int64_t v35 = v31 / 128 % 2; // 0xa3157
                v33 = v30;
                v34 = v35;
                if ((int32_t)v35 == (int32_t)((v31 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0xa3163
                    *v2 = 1;
                    v33 = 1;
                    v34 = v35;
                }
            }
            char v36 = v33; // 0xa31a7
            int64_t v37 = v34; // 0xa31a7
            if (v7 == -115) {
                int64_t v38 = v34 / 128 % 2; // 0xa31e5
                v36 = v33;
                v37 = v38;
                if ((int32_t)v38 != (int32_t)((v34 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0xa31f1
                    *v2 = 1;
                    v36 = 1;
                    v37 = v38;
                }
            }
            char v39 = v36; // 0xa32f1
            int64_t v40 = v37; // 0xa32f1
            if (v7 == -30) {
                uint32_t v41 = (int32_t)v37 & (int32_t)L"\n2"; // 0xa32f7
                int64_t v42 = v41; // 0xa32f7
                v39 = v36;
                v40 = v42;
                if (v41 == 0) {
                    // 0xa3303
                    *v2 = 1;
                    v39 = 1;
                    v40 = v42;
                }
            }
            // 0xa3325
            v8 = v39;
            v9 = v40;
            if (v7 == -90) {
                uint32_t v43 = (int32_t)v40 & 4; // 0xa332f
                int64_t v44 = v43; // 0xa332f
                v8 = v39;
                v9 = v44;
                if (v43 == 0) {
                    // 0xa333b
                    *v2 = 1;
                    v8 = 1;
                    v9 = v44;
                }
            }
            // break -> 0xa336e
            break;
        }
    }
    char v45 = v8; // 0xa3372
    int64_t v46 = v9; // 0xa3372
    if (v7 == 12) {
        uint32_t v47 = (int32_t)v9 & 128; // 0xa3378
        int64_t v48 = v47; // 0xa3378
        v45 = v8;
        v46 = v48;
        if (v47 == 0) {
            // 0xa3384
            *v2 = 1;
            v45 = 1;
            v46 = v48;
        }
    }
    char v49 = v45; // 0xa33c2
    int64_t v50 = v46; // 0xa33c2
    if (v7 == -88) {
        uint32_t v51 = (int32_t)v46 & (int32_t)L"\n2"; // 0xa33c8
        v49 = v45;
        v50 = 0;
        if (v51 != 0) {
            // 0xa33d4
            *v2 = 1;
            v49 = 1;
            v50 = v51;
        }
    }
    char v52 = v49; // 0xa33fa
    int64_t v53 = v50; // 0xa33fa
    char v54; // 0xa2da3
    if (v7 != -21) {
        goto lab_0xa3428;
    } else {
        uint32_t v55 = (int32_t)v50 & 4; // 0xa3400
        v54 = v49;
        if (v55 == 0) {
            goto lab_0xa346d;
        } else {
            // 0xa340c
            *v2 = 1;
            v52 = 1;
            v53 = v55;
            goto lab_0xa3428;
        }
    }
  lab_0xa3428:
    // 0xa3428
    v54 = v52;
    if (v7 == 56 && (char)v53 <= -1) {
        // 0xa343e
        *v2 = 1;
        v54 = 1;
    }
    goto lab_0xa346d;
  lab_0xa346d:;
    int64_t v56 = *v3; // 0xa348b
    uint32_t v57 = *(int32_t *)(v56 + 4); // 0xa3530
    uint32_t result = v57 & -0x80000000; // 0xa3543
    if (v54 == 0) {
        // 0xa35dd
        return result;
    }
    uint64_t v58 = (int64_t)v57; // 0xa3530
    if (result == 0) {
        // 0xa35c3
        *v3 = v56 + v58;
    } else {
        // 0xa358b
        *v3 = v56 - v58 % 0x80000000;
    }
    // 0xa35dd
    return result;
}

// Address range: 0xa4a61 - 0xa4b11
int64_t function_a4a61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xa4a61
    int64_t v1; // 0xa4a61
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xa4a72
    int64_t v3 = *v2; // 0xa4a72
    int64_t * v4 = (int64_t *)(v1 + 187); // 0xa4a89
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0xa4aab
    *(int64_t *)v5 = *v4 + (int64_t)*(int32_t *)(v3 + 6);
    *(int64_t *)(v5 + 8) = *v4 + (int64_t)*(int32_t *)*v2;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xa4b11 - 0xa4df7
int64_t function_a4b11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa4b11
    int64_t v1; // 0xa4b11
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int32_t * v4 = (int32_t *)(v3 + 368); // 0xa4b33
    *v4 = *v4 ^ *(int32_t *)(v3 + 35);
    int64_t * v5 = (int64_t *)(v3 + 96); // 0xa4b36
    *v5 = *v5 + 0x7ae145d4;
    *(int64_t *)v3 = v3 ^ 0x1807fa79;
    uint64_t v6 = *v5 - 0x15a44da0; // 0xa4bd5
    char v7 = *(char *)(v3 + 225); // 0xa4bf3
    int64_t v8 = v7 != 50 ? v7 != 98 ? v3 ^ 0x15a44da0 : v6 % 256 : v6 % 0x10000;
    int64_t * v9 = (int64_t *)(v3 + 113); // 0xa4c45
    *v9 = v8 ^ 0x239b76ce;
    int64_t v10 = v6 + v2; // 0xa4c48
    bool v11; // 0xa4b11
    int64_t result = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v10 < v6) | 64 * (int64_t)(v10 == 0) | 128 * (int64_t)(v10 < 0) | 16 * (int64_t)(v6 % 16 + v2 % 16 > 15) | 2048 * (int64_t)(((v10 ^ v6) & (v10 ^ v2)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v10) % 2 == 0) | 2; // 0xa4c4b
    int64_t * v12 = (int64_t *)(v3 + 10); // 0xa4cc4
    *v9 = v8 + 0x1a44e4ef;
    if (*(char *)*v12 != 0) {
        // 0xa4cfe
        *(int64_t *)(v3 + (int64_t)*(int16_t *)(*v12 + 3)) = result;
    }
    // 0xa4d42
    *v12 = *v12 + 5;
    return result;
}

// Address range: 0xa6af9 - 0xa6e55
int64_t function_a6af9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xa6af9
    int64_t v1; // 0xa6af9
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xa6b03
    *v3 = *v3 + 0xa5d99f75;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x409ca741;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0xa6b8f
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v4 + 2)); // 0xa6bb8
    int64_t v6 = v2 - 0x409ca741; // 0xa6bd7
    uint64_t v7 = *v3 - 0x409ca741; // 0xa6bf5
    char v8 = *(char *)(v2 + 404); // 0xa6c17
    int64_t v9 = v5; // 0xa6c1e
    int64_t v10 = v6; // 0xa6c1e
    if (v8 == 98) {
        unsigned char v11 = (char)v7 % 32; // 0xa6c25
        bool v12 = (v5 & (int64_t)L"\n2") != 0; // 0xa6c25
        v10 = v6;
        bool v13 = v5 % 2 != 0; // 0xa6c25
        if (v11 != 0) {
            unsigned char v14 = (char)v6; // 0xa6c25
            unsigned char v15 = v14 >> 8 - v11 | v14 << v11; // 0xa6c25
            unsigned char v16 = v15 % 2; // 0xa6c25
            v12 = v11 == 1 ? v15 / 128 != v16 : (v5 & (int64_t)L"\n2") != 0;
            v10 = v6 & -256 | (int64_t)v15;
            v13 = v16 != 0;
        }
        v9 = 16 * (int64_t)((v5 & 16) != 0) | 4 * (int64_t)((v5 & 4) != 0) | 64 * (int64_t)((v5 & 64) != 0) | 128 * (int64_t)((char)v5 < 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | 2048 * (int64_t)v12 | (int64_t)v13 | 2;
    }
    int64_t v17 = v9;
    int64_t v18 = v17; // 0xa6c32
    int64_t v19 = v10; // 0xa6c32
    int64_t v20 = (int64_t)&g2 | 4; // 0xa6c32
    if (v8 == 50) {
        uint16_t v21 = (int16_t)v7 % 32; // 0xa6c3c
        bool v22 = (v17 & (int64_t)L"\n2") != 0; // 0xa6c3c
        v19 = v10;
        bool v23 = v17 % 2 != 0; // 0xa6c3c
        if (v21 != 0) {
            uint16_t v24 = (int16_t)v10; // 0xa6c3c
            uint16_t v25 = v24 >> 16 - v21 | v24 << v21; // 0xa6c3c
            uint16_t v26 = v25 % 2; // 0xa6c3c
            v22 = v21 == 1 ? v25 / 0x8000 != v26 : (v17 & (int64_t)L"\n2") != 0;
            v19 = v10 & -0x10000 | (int64_t)v25;
            v23 = v26 != 0;
        }
        v18 = 16 * (int64_t)((v17 & 16) != 0) | 4 * (int64_t)((v17 & 4) != 0) | 64 * (int64_t)((v17 & 64) != 0) | 128 * (int64_t)((char)v17 < 0) | 256 * (int64_t)((v17 & 256) != 0) | 512 * (int64_t)((v17 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v17 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v17 & (int64_t)"le") != 0) | 2048 * (int64_t)v22 | (int64_t)v23 | 2;
        v20 = v7 & ((int64_t)&g2 | 4);
    }
    int64_t v27 = ((v1 | v1) + 128 & -8) + a4; // 0xa6bef
    int64_t v28 = v18;
    int64_t v29 = v28; // 0xa6c4e
    int64_t v30 = v27; // 0xa6c4e
    int64_t v31 = v19; // 0xa6c4e
    if (v8 == 80) {
        uint32_t v32 = (int32_t)v7 % 32; // 0xa6c5c
        bool v33 = (v28 & (int64_t)L"\n2") != 0; // 0xa6c5c
        v31 = v19;
        bool v34 = v28 % 2 != 0; // 0xa6c5c
        if (v32 != 0) {
            uint32_t v35 = (int32_t)v19; // 0xa6c5c
            uint32_t v36 = v35 >> 32 - v32 | v35 << v32; // 0xa6c5c
            uint32_t v37 = v36 % 2; // 0xa6c5c
            v33 = v32 == 1 ? v37 != (int32_t)(v36 < 0) : (v28 & (int64_t)L"\n2") != 0;
            v31 = v36;
            v34 = v37 != 0;
        }
        v29 = 16 * (int64_t)((v28 & 16) != 0) | 4 * (int64_t)((v28 & 4) != 0) | 64 * (int64_t)((v28 & 64) != 0) | 128 * (int64_t)((char)v28 < 0) | 256 * (int64_t)((v28 & 256) != 0) | 512 * (int64_t)((v28 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v28 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v28 & (int64_t)"le") != 0) | 2048 * (int64_t)v33 | (int64_t)v34 | 2;
        v30 = v27 - (v20 & 32);
    }
    int64_t v38 = v31;
    int64_t v39 = v29;
    int64_t v40 = v39; // 0xa6c66
    uint64_t v41 = v38; // 0xa6c66
    if (v8 == 58) {
        uint64_t v42 = v7 % 64; // 0xa6c6d
        bool v43 = (v39 & (int64_t)L"\n2") != 0; // 0xa6c6d
        v41 = v38;
        int64_t v44 = v39 % 2; // 0xa6c6d
        if (v42 != 0) {
            v41 = v38 >> 64 - v42 | v38 << v42;
            v44 = v41 % 2;
            v43 = v42 == 1 ? v41 / 0x8000000000000000 != v44 : (v39 & (int64_t)L"\n2") != 0;
        }
        v40 = 16 * (int64_t)((v39 & 16) != 0) | 4 * (int64_t)((v39 & 4) != 0) | 64 * (int64_t)((v39 & 64) != 0) | 128 * (int64_t)((char)v39 < 0) | 256 * (int64_t)((v39 & 256) != 0) | 512 * (int64_t)((v39 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v39 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v39 & (int64_t)"le") != 0) | 2048 * (int64_t)v43 | (int64_t)(v44 != 0) | 2;
    }
    int64_t * v45 = (int64_t *)(v2 + 113); // 0xa6c8e
    *v45 = v41 + 0x7684c9b1;
    int64_t v46 = *v4; // 0xa6cb4
    if (*(char *)(v46 + 4) != 0) {
        // 0xa6cfc
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v46 + 2)) = v40;
    }
    int32_t * v47 = (int32_t *)(v2 + 368); // 0xa6d65
    *v47 = *v47 | *(int32_t *)(v2 + 35);
    *v45 = *v45 - 0x5c3fe4c2;
    *v47 = *v47 & -1 - (int32_t)*(int16_t *)*v4;
    *v4 = *v4 + 5;
    return v30 ^ 240;
}

// Address range: 0xa71fe - 0xa757f
int64_t function_a71fe(void) {
    // 0xa71fe
    int64_t v1; // 0xa71fe
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xa7212
    int64_t * v4 = (int64_t *)(v2 + 96); // 0xa7215
    int32_t * v5 = (int32_t *)(v2 + 368); // 0xa722c
    *v5 = *v5 ^ *v3;
    *v4 = *v4 + 0x653cf834;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x40f90bf8;
    *v3 = *v3 + (*v5 & 0x1d6aa55e);
    int64_t v6 = v2 - 0x40f90bf8; // 0xa731a
    uint64_t v7 = *v4; // 0xa732b
    char v8 = *(char *)(v2 + 404); // 0xa7338
    int64_t v9 = v6; // 0xa733f
    int64_t v10; // 0xa71fe
    bool v11; // 0xa71fe
    if (v8 == 98) {
        unsigned char v12 = (char)v6; // 0xa7345
        unsigned char v13 = (char)v7; // 0xa7345
        char v14 = v12 - v13; // 0xa7345
        int64_t v15 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v12 < v13) | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v12 % 16 - v13 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0) | 2048 * (int64_t)(((v14 ^ v12) & (char)(v7 ^ v6)) < 0) | 2; // bp-8, 0xa7348
        v10 = (int64_t)&v15;
        v9 = v6 & -256 | (int64_t)v14;
    }
    int64_t v16 = v10; // 0xa734d
    int64_t v17 = v9; // 0xa734d
    if (v8 == 50) {
        uint16_t v18 = (int16_t)v9; // 0xa7353
        uint16_t v19 = (int16_t)v7; // 0xa7353
        int16_t v20 = v18 - v19; // 0xa7353
        int64_t v21 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v18 < v19) | 64 * (int64_t)(v20 == 0) | 128 * (int64_t)(v20 < 0) | 16 * (int64_t)(v18 % 16 - v19 % 16 > 15) | 2048 * (int64_t)(((v20 ^ v18) & (int16_t)(v9 ^ v7)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v20) % 2 == 0) | 2; // bp-16, 0xa7357
        v16 = (int64_t)&v21;
        v17 = v9 & -0x10000 | (int64_t)v20;
    }
    int64_t v22 = v16; // 0xa735c
    int64_t v23 = v17; // 0xa735c
    if (v8 == 80) {
        uint32_t v24 = (int32_t)v17; // 0xa7362
        uint32_t v25 = (int32_t)v7; // 0xa7362
        int32_t v26 = v24 - v25; // 0xa7362
        unsigned char v27 = llvm_ctpop_i8((char)v26); // 0xa7362
        v22 = v16 - 8;
        *(int64_t *)v22 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v24 < v25) | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 16 * (int64_t)(v24 % 16 - v25 % 16 > 15) | 2048 * (int64_t)(((v26 ^ v24) & (int32_t)(v17 ^ v7)) < 0) | 4 * (int64_t)(v27 % 2 == 0) | 2;
        v23 = v26;
    }
    uint64_t v28 = v23;
    int64_t v29 = v22; // 0xa736a
    int64_t v30 = v28; // 0xa736a
    if (v8 == 58) {
        // 0xa7370
        v30 = v28 - v7;
        unsigned char v31 = llvm_ctpop_i8((char)v30); // 0xa7370
        v29 = v22 - 8;
        *(int64_t *)v29 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v28 < v7) | 64 * (int64_t)(v30 == 0) | 128 * (int64_t)(v30 < 0) | 16 * (int64_t)(v28 % 16 - v7 % 16 > 15) | 2048 * (int64_t)(((v30 ^ v28) & (v28 ^ v7)) < 0) | 4 * (int64_t)(v31 % 2 == 0) | 2;
    }
    int64_t * v32 = (int64_t *)(v2 + 113); // 0xa7385
    *v32 = v30 + 0x51bed05b;
    *v5 = *v5 ^ 0x4a304ad7;
    *v32 = *v32 - 0x3779eb6c;
    int64_t * v33 = (int64_t *)(v2 + 10); // 0xa741f
    int64_t v34 = *v33; // 0xa741f
    int64_t v35 = v34; // 0xa7434
    if (*(char *)(v34 + 2) != 0) {
        // 0xa743a
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v34) = *(int64_t *)v29;
        v35 = *v33;
    }
    int32_t v36 = *v5; // 0xa7504
    uint32_t v37 = (int32_t)*(int16_t *)(v35 + 3) ^ 0x381ae5a5 ^ v36; // 0xa750e
    *v5 = v36 - v37;
    *v33 = *v33 + 5;
    return v37 % 0x10000;
}

// Address range: 0xa9ffa - 0xaa87d
int64_t function_a9ffa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20, int64_t result2, int64_t a22) {
    int64_t v1 = a7;
    int64_t v2; // 0xa9ffa
    int64_t v3 = v2 + 18; // 0xaa00e
    char * v4 = (char *)v3; // 0xaa015
    *v4 = 0;
    int64_t v5 = v2 + 4 - a4; // 0xaa032
    int64_t * v6 = (int64_t *)(v2 + 10); // 0xaa043
    int64_t v7 = *v6; // 0xaa043
    uint32_t v8 = *(int32_t *)(v2 + (int64_t)*(int16_t *)(v7 + 6)); // 0xaa061
    int64_t v9 = v8; // 0xaa061
    int64_t v10 = -a6; // 0xaa078
    int64_t v11 = (a3 | 120) ^ (int64_t)L"\n2" | 2; // 0xaa07b
    int64_t v12 = v7 + 8; // 0xaa08d
    int64_t v13 = v11 + 239; // 0xaa09e
    unsigned char v14 = *(char *)v12; // 0xaa0a5
    int64_t v15 = v14; // 0xaa0a5
    int64_t v16 = a6 & -256 | v15; // 0xaa0a5
    char v17; // 0xa9ffa
    int64_t v18; // 0xa9ffa
    int64_t v19; // 0xa9ffa
    int64_t v20; // 0xa9ffa
    int64_t v21; // 0xa9ffa
    int64_t v22; // 0xa9ffa
    int64_t v23; // 0xa9ffa
    int64_t v24; // 0xa9ffa
    switch (v14) {
        case 34: {
        }
        case 2: {
            int64_t v25 = v13 ^ v10; // 0xaa0d3
            char v26 = 0; // 0xaa0df
            int64_t v27 = 0; // 0xaa0df
            int64_t v28 = v12; // 0xaa0df
            int64_t v29 = v5; // 0xaa0df
            if ((v9 & 64) != 0) {
                // 0xaa0e5
                *v4 = 1;
                v26 = 1;
                v27 = v25;
                v28 = v3;
                v29 = (v5 - v25) % 2 | -0x80000000;
            }
            int64_t v30 = v16 & v25 & v28 ^ v27; // 0xaa11e
            int64_t v31 = v8; // 0xaa121
            int64_t v32 = (int64_t)&v1; // 0xaa121
            v17 = v26;
            v24 = v32;
            v22 = a4;
            v21 = v27;
            v23 = v30;
            v18 = v31;
            v19 = v28;
            v20 = v29;
            if (v14 == 2) {
                char v33 = v26; // 0xaa46d
                int64_t v34 = v27; // 0xaa46d
                int64_t v35 = v30; // 0xaa46d
                int64_t v36 = v28; // 0xaa46d
                if ((v31 & 64) != 0) {
                    // 0xaa473
                    *v4 = 1;
                    v33 = 1;
                    v34 = v29 + 18;
                    v35 = v30 - 0x7fffffff;
                    v36 = v3;
                }
                int64_t v37 = (v36 | v34) ^ v31; // 0xaa499
                int64_t v38 = v35 - 0x80000000; // 0xaa4a9
                int64_t v39 = (v31 & (int64_t)(int32_t)L"\n2") / 2048; // 0xaa4b0
                int64_t v40 = v31 / 128 % 2; // 0xaa4c4
                char v41 = v33; // 0xaa4cb
                int64_t v42 = v37; // 0xaa4cb
                int64_t v43 = v38; // 0xaa4cb
                int64_t v44 = v36; // 0xaa4cb
                int64_t v45 = 8; // 0xaa4cb
                if ((int32_t)v40 != (int32_t)v39) {
                    // 0xaa4d1
                    v42 = v37 | v16;
                    *v4 = 1;
                    v41 = 1;
                    v43 = v38 & v2;
                    v44 = v3;
                    v45 = v42 + 12;
                }
                // 0xaa4f3
                v17 = v41;
                v24 = v32;
                v22 = v39;
                v21 = v42;
                v23 = v43 | (int64_t)&g3;
                v18 = v40;
                v19 = v44;
                v20 = v45;
            }
            // break -> 0xaa5a8
            break;
        }
        default: {
            char v46 = 0; // 0xaa127
            int64_t v47 = v13; // 0xaa127
            int64_t v48 = v10; // 0xaa127
            int64_t v49 = v9; // 0xaa127
            int64_t v50 = v12; // 0xaa127
            int64_t v51 = v5; // 0xaa127
            if (v14 == -102) {
                uint32_t v52 = v8 & 64; // 0xaa12d
                int64_t v53 = v52; // 0xaa12d
                char v54 = 0; // 0xaa134
                int64_t v55 = v13; // 0xaa134
                int64_t v56 = v10; // 0xaa134
                int64_t v57 = v12; // 0xaa134
                int64_t v58 = v5; // 0xaa134
                if (v52 == 0) {
                    int64_t v59 = v12 | v5; // 0xaa141
                    *v4 = 1;
                    v54 = 1;
                    v55 = v11 + 359 - v2 - v59;
                    v56 = v16 + (v10 ^ 64 ^ v2);
                    v57 = v3;
                    v58 = v59 + v53;
                }
                // 0xaa169
                v46 = v54;
                v47 = v55 - 144;
                v48 = v56;
                v49 = v53;
                v50 = v57;
                v51 = v58;
            }
            char v60 = v46; // 0xaa177
            int64_t v61 = 0; // 0xaa177
            int64_t v62 = a4; // 0xaa177
            int64_t v63 = v47; // 0xaa177
            int64_t v64 = v48; // 0xaa177
            int64_t v65 = v49; // 0xaa177
            int64_t v66 = v50; // 0xaa177
            int64_t v67 = v51; // 0xaa177
            if (v14 == 0) {
                uint32_t v68 = (int32_t)v49; // 0xaa180
                uint32_t v69 = v68 & 64; // 0xaa180
                int64_t v70 = v69; // 0xaa180
                char v71 = v46; // 0xaa187
                int64_t v72 = 0; // 0xaa187
                int64_t v73 = v49; // 0xaa187
                int64_t v74 = v47; // 0xaa187
                int64_t v75 = v48; // 0xaa187
                int64_t v76 = v50; // 0xaa187
                int64_t v77 = v51; // 0xaa187
                if (v69 == 0) {
                    uint32_t v78 = v68 % 2; // 0xaa18d
                    int64_t v79 = v78; // 0xaa18d
                    v71 = v46;
                    v72 = 0;
                    v73 = v79;
                    v74 = v47;
                    v75 = v48;
                    v76 = v50;
                    v77 = v51;
                    if (v78 == 0) {
                        // 0xaa199
                        *v4 = 1;
                        v71 = 1;
                        v72 = v70;
                        v73 = v79;
                        v74 = (v47 | (int64_t)&g2) & 16;
                        v75 = v48 | 144;
                        v76 = v3;
                        v77 = v51 ^ v70;
                    }
                }
                // 0xaa1ca
                v60 = v71;
                v61 = v72 - 240;
                v62 = v73;
                v63 = v74;
                v64 = v75;
                v65 = v70;
                v66 = v76;
                v67 = v77;
            }
            char v80 = v60; // 0xaa1d4
            int64_t v81 = v61; // 0xaa1d4
            int64_t v82 = v64; // 0xaa1d4
            int64_t v83 = v65; // 0xaa1d4
            int64_t v84 = v66; // 0xaa1d4
            int64_t v85 = v67; // 0xaa1d4
            if (v14 == 95) {
                uint32_t v86 = (int32_t)v65 % 2; // 0xaa1da
                int64_t v87 = v86; // 0xaa1da
                v80 = v60;
                v81 = v61;
                v82 = v64;
                v83 = v87;
                v84 = v66;
                v85 = v67;
                if (v86 == 0) {
                    int64_t v88 = v67 + 0x7fffffff; // 0xaa1e7
                    *v4 = 1;
                    v80 = 1;
                    v81 = v61 + v16;
                    v82 = (v88 ^ v64) + v62;
                    v83 = v87;
                    v84 = v3;
                    v85 = v88 ^ v87;
                }
            }
            char v89 = v80; // 0xaa20d
            int64_t v90 = v81; // 0xaa20d
            int64_t v91 = v82; // 0xaa20d
            int64_t v92 = v83; // 0xaa20d
            int64_t v93 = v84; // 0xaa20d
            if (v14 == -104) {
                // 0xaa213
                v89 = v80;
                v90 = v81;
                v91 = v82;
                v92 = 0;
                v93 = v84;
                if (v83 % 2 != 0) {
                    // 0xaa220
                    *v4 = 1;
                    v89 = 1;
                    v90 = v81 ^ v62;
                    v91 = v85 | v82 - v81;
                    v92 = 1;
                    v93 = v3;
                }
            }
            char v94 = v89; // 0xaa242
            int64_t v95 = v90; // 0xaa242
            int64_t v96 = v62; // 0xaa242
            int64_t v97 = v63; // 0xaa242
            int64_t v98 = v92; // 0xaa242
            int64_t v99 = v93; // 0xaa242
            int64_t v100 = v85; // 0xaa242
            if (v14 == -119) {
                uint32_t v101 = (int32_t)v92; // 0xaa24b
                uint32_t v102 = v101 & 64; // 0xaa24b
                char v103 = v89; // 0xaa252
                int64_t v104 = v90; // 0xaa252
                int64_t v105 = v93; // 0xaa252
                if (v102 != 0) {
                    // 0xaa258
                    *v4 = 1;
                    v103 = 1;
                    v104 = v90 | 64;
                    v105 = v3;
                }
                int64_t v106 = v102; // 0xaa24b
                v94 = v103;
                v95 = v104;
                v96 = 0;
                v97 = v91;
                v98 = v106;
                v99 = v105;
                v100 = v85;
                if (v101 % 2 != 0) {
                    // 0xaa286
                    *v4 = 1;
                    v94 = 1;
                    v95 = v104 % 2;
                    v96 = 1;
                    v97 = v91;
                    v98 = v106;
                    v99 = v3;
                    v100 = 2 * v85 & 16;
                }
            }
            char v107 = v94; // 0xaa2bd
            int64_t v108 = v95; // 0xaa2bd
            int64_t v109 = v96; // 0xaa2bd
            int64_t v110 = v97; // 0xaa2bd
            int64_t v111 = v91; // 0xaa2bd
            int64_t v112 = v98; // 0xaa2bd
            int64_t v113 = v99; // 0xaa2bd
            int64_t v114 = v100; // 0xaa2bd
            if (v14 == 47) {
                uint32_t v115 = (int32_t)v98 & 64; // 0xaa2c6
                char v116 = v94; // 0xaa2cc
                int64_t v117 = v95; // 0xaa2cc
                int64_t v118 = v115; // 0xaa2cc
                int64_t v119 = v91; // 0xaa2cc
                int64_t v120 = v98; // 0xaa2cc
                int64_t v121 = v99; // 0xaa2cc
                int64_t v122 = v100; // 0xaa2cc
                if (v115 == 0) {
                    int64_t v123 = (v98 & v91) - (int64_t)&g2; // 0xaa2e9
                    int64_t v124 = (v98 & (int64_t)(int32_t)L"\n2") / 2048; // 0xaa300
                    uint64_t v125 = v98 & 128; // 0xaa311
                    int64_t v126 = v125 ^ v95; // 0xaa31b
                    int64_t v127 = v123 | v16; // 0xaa31e
                    int64_t v128 = v125 / 128; // 0xaa321
                    v116 = v94;
                    v117 = v126;
                    v118 = v124;
                    v119 = v123;
                    v120 = v128;
                    v121 = v99;
                    v122 = v127;
                    if ((int32_t)v128 == (int32_t)v124) {
                        int64_t v129 = v123 ^ (v97 & -0x80000000 | 8); // 0xaa32e
                        *v4 = 1;
                        v116 = 1;
                        v117 = v95 & 8;
                        v118 = v124;
                        v119 = (v129 | v126) - 2;
                        v120 = v128;
                        v121 = v3;
                        v122 = v127 - v129;
                    }
                }
                // 0xaa353
                v108 = v117;
                v107 = v116;
                v109 = v118;
                v110 = 0;
                v111 = v119;
                v112 = v120;
                v113 = v121;
                v114 = v122 - 64;
            }
            char v130 = v107; // 0xaa365
            int64_t v131 = v108; // 0xaa365
            int64_t v132 = v109; // 0xaa365
            int64_t v133 = v110; // 0xaa365
            int64_t v134 = v111; // 0xaa365
            int64_t v135 = v112; // 0xaa365
            int64_t v136 = v113; // 0xaa365
            int64_t v137 = v114; // 0xaa365
            if (v14 == -6) {
                int64_t v138 = (v114 ^ v110) + v111; // 0xaa371
                int64_t v139 = (v111 | 18) + 16; // 0xaa38b
                v132 = (v112 & (int64_t)(int32_t)L"\n2") / 2048;
                uint64_t v140 = v112 & 128; // 0xaa395
                v135 = v140 / 128;
                char v141 = v107; // 0xaa3a6
                int64_t v142 = v140 | 18; // 0xaa3a6
                int64_t v143 = v110 - (int64_t)L"\n2"; // 0xaa3a6
                int64_t v144 = v139; // 0xaa3a6
                int64_t v145 = v113; // 0xaa3a6
                int64_t v146 = v138; // 0xaa3a6
                if ((int32_t)v135 == (int32_t)v132) {
                    // 0xaa3ac
                    v143 = v113 & 32;
                    *v4 = 1;
                    v141 = 1;
                    v142 = 0;
                    v144 = v143 & v139;
                    v145 = v3;
                    v146 = v138 ^ v2;
                }
                // 0xaa3e5
                v130 = v141;
                v131 = v142;
                v133 = v143 + 2;
                v134 = v144 ^ v143;
                v136 = v145;
                v137 = v146;
            }
            char v147 = v130; // 0xaa3f3
            int64_t v148 = v131; // 0xaa3f3
            int64_t v149 = v132; // 0xaa3f3
            int64_t v150 = v133; // 0xaa3f3
            int64_t v151 = v135; // 0xaa3f3
            int64_t v152 = v136; // 0xaa3f3
            int64_t v153 = v137; // 0xaa3f3
            if (v14 == -115) {
                int64_t v154 = v135 & v134; // 0xaa3f9
                int64_t v155 = (v135 & (int64_t)(int32_t)L"\n2") / 2048; // 0xaa408
                int64_t v156 = v135 & v133; // 0xaa40b
                int64_t v157 = v137 + v154; // 0xaa415
                int64_t v158 = v135 / 128 % 2; // 0xaa418
                char v159 = v130; // 0xaa41f
                int64_t v160 = v154; // 0xaa41f
                int64_t v161 = v156; // 0xaa41f
                int64_t v162 = v136; // 0xaa41f
                int64_t v163 = v157; // 0xaa41f
                if ((int32_t)v158 != (int32_t)v155) {
                    int64_t v164 = v156 & v134; // 0xaa425
                    *v4 = 1;
                    v159 = 1;
                    v160 = v164 + v158;
                    v161 = v156 + v16 + v164 ^ 8;
                    v162 = v3;
                    v163 = (v157 & v3) + v155;
                }
                // 0xaa453
                v147 = v159;
                v148 = v160;
                v149 = v155;
                v150 = v161 ^ 2;
                v151 = v158;
                v152 = v162;
                v153 = v163;
            }
            char v165 = v147; // 0xaa501
            int64_t v166 = v148; // 0xaa501
            int64_t v167 = v150; // 0xaa501
            int64_t v168 = v151; // 0xaa501
            int64_t v169 = v152; // 0xaa501
            int64_t v170 = v153; // 0xaa501
            if (v14 == -30) {
                uint32_t v171 = (int32_t)v151 & (int32_t)L"\n2"; // 0xaa507
                int64_t v172 = v171; // 0xaa507
                v165 = v147;
                v166 = v148;
                v167 = v150;
                v168 = v172;
                v169 = v152;
                v170 = v153;
                if (v171 == 0) {
                    // 0xaa514
                    *v4 = 1;
                    v165 = 1;
                    v166 = v149 & v148;
                    v167 = v150 | v172;
                    v168 = v172;
                    v169 = v3;
                    v170 = 1;
                }
            }
            // 0xaa53e
            v17 = v165;
            v22 = v149;
            v21 = v166;
            v23 = v167;
            v18 = v168;
            v19 = v169;
            v20 = v170;
            if (v14 == -90) {
                uint32_t v173 = (int32_t)v168 & 4; // 0xaa548
                char v174 = v165; // 0xaa54f
                int64_t v175 = v166; // 0xaa54f
                int64_t v176 = v167; // 0xaa54f
                int64_t v177 = v169; // 0xaa54f
                int64_t v178 = v170; // 0xaa54f
                if (v173 == 0) {
                    // 0xaa555
                    v178 = v170 - 2;
                    *v4 = 1;
                    v174 = 1;
                    v175 = v178 | ((v166 | v15) & 2) - v2;
                    v176 = v167 | 32;
                    v177 = v3;
                }
                // 0xaa59b
                v17 = v174;
                v22 = v149;
                v21 = v175 | 240;
                v23 = v176;
                v18 = v173;
                v19 = v177;
                v20 = v178;
            }
            // break -> 0xaa5a8
            break;
        }
    }
    int64_t v179 = v22;
    char v180 = v17; // 0xaa5ac
    int64_t v181 = v21; // 0xaa5ac
    int64_t v182 = v23; // 0xaa5ac
    int64_t v183 = v18; // 0xaa5ac
    int64_t v184 = v19; // 0xaa5ac
    if (v14 == 12) {
        uint32_t v185 = (int32_t)v18 & 128; // 0xaa5b2
        int64_t v186 = v185; // 0xaa5b2
        v180 = v17;
        v181 = v21;
        v182 = v23;
        v183 = v186;
        v184 = v19;
        if (v185 == 0) {
            // 0xaa5bf
            *v4 = 1;
            v180 = 1;
            v181 = v21 + 64;
            v182 = v20 & v23 - 64;
            v183 = v186;
            v184 = v3;
        }
    }
    char v187 = v180; // 0xaa601
    int64_t v188 = v182; // 0xaa601
    int64_t v189 = v183; // 0xaa601
    int64_t v190 = v184; // 0xaa601
    if (v14 == -88) {
        uint32_t v191 = (int32_t)v183 & (int32_t)L"\n2"; // 0xaa607
        v187 = v180;
        v188 = v182;
        v189 = 0;
        v190 = v184;
        if (v191 != 0) {
            // 0xaa614
            *v4 = 1;
            v187 = 1;
            v188 = v182 & v181;
            v189 = v191;
            v190 = v3;
        }
    }
    char v192 = v187; // 0xaa630
    int64_t v193 = v181; // 0xaa630
    int64_t v194 = v189; // 0xaa630
    if (v14 == -21) {
        uint32_t v195 = (int32_t)v189 & 4; // 0xaa636
        v192 = v187;
        int64_t v196 = v181; // 0xaa63d
        int64_t v197 = v190; // 0xaa63d
        if (v195 != 0) {
            // 0xaa643
            *v4 = 1;
            v192 = 1;
            v196 = v3;
            v197 = v3;
        }
        // 0xaa665
        v194 = v195;
        v193 = (v196 | v194) & v197;
    }
    char v198 = v192; // 0xaa66f
    int64_t result = v193; // 0xaa66f
    if (v14 == 56) {
        uint32_t v199 = (int32_t)v194 & 128; // 0xaa675
        v198 = v192;
        int64_t v200 = v193; // 0xaa67c
        int64_t v201 = v188; // 0xaa67c
        if (v199 != 0) {
            int64_t v202 = v199; // 0xaa675
            *v4 = 1;
            v198 = 1;
            v200 = v193 ^ v202;
            v201 = v3 ^ (int64_t)L"\n2" ^ (((v188 ^ v179) & (int64_t)&g3) - v179 | v202);
        }
        // 0xaa6bf
        result = v201 & v200;
    }
    int64_t v203 = *v6;
    if (v198 == 0) {
        int64_t * v204 = (int64_t *)(v2 + (int64_t)*(int16_t *)(v203 + 9)); // 0xaa787
        *v204 = *v204 + 136;
        *(int32_t *)(v2 + 368) = -(int32_t)*(int16_t *)(*v6 + 11);
        *v6 = *v6 + 13;
        return result;
    }
    uint32_t v205 = *(int32_t *)v203; // 0xaa6f8
    int64_t v206 = *(int64_t *)(v2 + 187); // 0xaa706
    uint16_t v207 = *(int16_t *)(v203 + 4); // 0xaa726
    *(int64_t *)(v24 + (int64_t)v207) = v206 + (int64_t)v205;
    *(int32_t *)(v2 + 476) = 0;
    return result2;
}

// Address range: 0xab427 - 0xabc59
int64_t function_ab427(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xab427
    int64_t v1; // 0xab427
    int64_t result = v1 + 18; // 0xab43a
    char * v2 = (char *)result; // 0xab448
    *v2 = 0;
    int64_t result2 = v1 + 10; // 0xab458
    int64_t * v3 = (int64_t *)result2; // 0xab466
    int64_t v4 = *v3; // 0xab466
    uint32_t v5 = *(int32_t *)(v1 + (int64_t)*(int16_t *)(v4 + 8)); // 0xab4b5
    char v6 = *(char *)(v4 + 10); // 0xab4d8
    char v7; // 0xab427
    int64_t v8; // 0xab427
    switch (v6) {
        case 34: {
        }
        case 2: {
            char v9 = 0; // 0xab518
            if ((v5 & 64) != 0) {
                // 0xab51e
                *v2 = 1;
                v9 = 1;
            }
            int64_t v10 = v5; // 0xab563
            v7 = v9;
            v8 = v10;
            if (v6 == 2) {
                int64_t v11 = v10 / 128 % 2; // 0xab949
                v7 = v9;
                v8 = v11;
                if ((v10 & 64) != 0 || (v5 & (int32_t)L"\n2") / 2048 != (int32_t)v11) {
                    *v2 = 1;
                    v7 = 1;
                    v8 = v11;
                }
            }
            // break -> 0xaba07
            break;
        }
        default: {
            char v12 = 0; // 0xab56e
            int64_t v13 = v5; // 0xab56e
            if (v6 == -102) {
                uint32_t v14 = v5 & 64; // 0xab574
                int64_t v15 = v14; // 0xab574
                v12 = 0;
                v13 = v15;
                if (v14 == 0) {
                    // 0xab57f
                    *v2 = 1;
                    v12 = 1;
                    v13 = v15;
                }
            }
            char v16 = v12; // 0xab5b2
            int64_t v17 = v13; // 0xab5b2
            if (v6 == 0) {
                uint32_t v18 = (int32_t)v13 & 64; // 0xab5c2
                int64_t v19 = v18; // 0xab5c2
                v16 = v12;
                v17 = v19;
                if (v18 == 0) {
                    // 0xab5cd
                    v16 = v12;
                    v17 = v19;
                    if (v13 % 2 == 0) {
                        // 0xab5d9
                        *v2 = 1;
                        v16 = 1;
                        v17 = v19;
                    }
                }
            }
            char v20 = v16; // 0xab5fc
            int64_t v21 = v17; // 0xab5fc
            if (v6 == 95) {
                uint32_t v22 = (int32_t)v17 % 2; // 0xab602
                int64_t v23 = v22; // 0xab602
                v20 = v16;
                v21 = v23;
                if (v22 == 0) {
                    // 0xab60d
                    *v2 = 1;
                    v20 = 1;
                    v21 = v23;
                }
            }
            char v24 = v20; // 0xab647
            int64_t v25 = v21; // 0xab647
            if (v6 == -104) {
                // 0xab64d
                v24 = v20;
                v25 = 0;
                if (v21 % 2 != 0) {
                    // 0xab658
                    *v2 = 1;
                    v24 = 1;
                    v25 = 1;
                }
            }
            char v26 = v24; // 0xab683
            int64_t v27 = v25; // 0xab683
            if (v6 == -119) {
                uint32_t v28 = (int32_t)v25 & 64; // 0xab68c
                v26 = v24;
                v27 = 0;
                if (v25 % 2 != 0 || v28 != 0) {
                    *v2 = 1;
                    v26 = 1;
                    v27 = v28;
                }
            }
            char v29 = v26; // 0xab70b
            int64_t v30 = v27; // 0xab70b
            if (v6 == 47) {
                // 0xab711
                v29 = v26;
                v30 = v27;
                if ((v27 & 64) == 0) {
                    int64_t v31 = v27 / 128 % 2; // 0xab765
                    v29 = v26;
                    v30 = v31;
                    if ((int32_t)v31 == (int32_t)((v27 & (int64_t)(int32_t)L"\n2") / 2048)) {
                        // 0xab770
                        *v2 = 1;
                        v29 = 1;
                        v30 = v31;
                    }
                }
            }
            char v32 = v29; // 0xab7c5
            int64_t v33 = v30; // 0xab7c5
            if (v6 == -6) {
                int64_t v34 = v30 / 128 % 2; // 0xab804
                v32 = v29;
                v33 = v34;
                if (((int32_t)v30 & (int32_t)L"\n2") / 2048 == (int32_t)v34) {
                    // 0xab80f
                    *v2 = 1;
                    v32 = 1;
                    v33 = v34;
                }
            }
            char v35 = v32; // 0xab834
            int64_t v36 = v33; // 0xab834
            if (v6 == -115) {
                int64_t v37 = v33 / 128 % 2; // 0xab872
                v35 = v32;
                v36 = v37;
                if (((int32_t)v33 & (int32_t)L"\n2") / 2048 != (int32_t)v37) {
                    // 0xab87d
                    *v2 = 1;
                    v35 = 1;
                    v36 = v37;
                }
            }
            char v38 = v35; // 0xab97d
            int64_t v39 = v36; // 0xab97d
            if (v6 == -30) {
                uint32_t v40 = (int32_t)v36 & (int32_t)L"\n2"; // 0xab983
                int64_t v41 = v40; // 0xab983
                v38 = v35;
                v39 = v41;
                if (v40 == 0) {
                    // 0xab98e
                    *v2 = 1;
                    v38 = 1;
                    v39 = v41;
                }
            }
            // 0xab9b2
            v7 = v38;
            v8 = v39;
            if (v6 == -90) {
                uint32_t v42 = (int32_t)v39 & 4; // 0xab9bc
                int64_t v43 = v42; // 0xab9bc
                v7 = v38;
                v8 = v43;
                if (v42 == 0) {
                    // 0xab9c7
                    *v2 = 1;
                    v7 = 1;
                    v8 = v43;
                }
            }
            // break -> 0xaba07
            break;
        }
    }
    char v44 = v7; // 0xaba0b
    int64_t v45 = v8; // 0xaba0b
    if (v6 == 12) {
        uint32_t v46 = (int32_t)v8 & 128; // 0xaba11
        int64_t v47 = v46; // 0xaba11
        v44 = v7;
        v45 = v47;
        if (v46 == 0) {
            // 0xaba1c
            *v2 = 1;
            v44 = 1;
            v45 = v47;
        }
    }
    char v48 = v44; // 0xaba37
    int64_t v49 = v45; // 0xaba37
    if (v6 == -88) {
        uint32_t v50 = (int32_t)v45 & (int32_t)L"\n2"; // 0xaba3d
        v48 = v44;
        v49 = 0;
        if (v50 != 0) {
            // 0xaba48
            *v2 = 1;
            v48 = 1;
            v49 = v50;
        }
    }
    char v51 = v48; // 0xaba89
    int64_t v52 = v49; // 0xaba89
    char v53; // 0xab427
    if (v6 != -21) {
        goto lab_0xabaae;
    } else {
        uint32_t v54 = (int32_t)v49 & 4; // 0xaba8f
        v53 = v48;
        if (v54 == 0) {
            goto lab_0xabaee;
        } else {
            // 0xaba9a
            *v2 = 1;
            v51 = 1;
            v52 = v54;
            goto lab_0xabaae;
        }
    }
  lab_0xabaae:
    // 0xabaae
    v53 = v51;
    if (v6 != 56 || (char)v52 > -1) {
        goto lab_0xabaee;
    } else {
        // 0xabaee
        *v2 = 1;
        goto lab_0xabc02;
    }
  lab_0xabaee:
    // 0xabaee
    if (v53 == 0) {
        // 0xabc56
        return result;
    }
    goto lab_0xabc02;
  lab_0xabc02:;
    int64_t v55 = *v3;
    uint32_t v56 = *(int32_t *)(v55 + 4);
    uint64_t v57 = (int64_t)v56;
    if (v56 > -1) {
        // 0xabc3d
        *v3 = v55 + v57;
    } else {
        // 0xabc0e
        *v3 = v55 - v57 % 0x80000000;
    }
    // 0xabc56
    return result2;
}

// Address range: 0xae332 - 0xae90b
int64_t function_ae332(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xae332
    int64_t v1; // 0xae332
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xae352
    int32_t v4 = *v3; // 0xae352
    int32_t v5 = v4; // 0xae360
    if ((v4 & 2) != 0) {
        int32_t v6 = (v4 ^ 0x5b05419c) + 0x792f3332; // 0xae380
        *v3 = v6;
        v5 = v6;
        if ((v6 & 2) != 0) {
            int32_t v7 = (v6 ^ 0x8bcb284) - 0x36b43160; // 0xae3d0
            *v3 = v7;
            v5 = v7;
            if ((v7 & 2) != 0) {
                int32_t v8 = (v7 ^ 0x674120fe) - 0x57f37797; // 0xae437
                *v3 = v8;
                v5 = v8;
                if ((v8 & 2) != 0) {
                    int32_t v9 = (v8 | 0x5190c117) + 0x5ad08ad1; // 0xae484
                    *v3 = v9;
                    v5 = v9;
                }
            }
        }
    }
    int64_t v10 = v2 + 368; // 0xae4b8
    int32_t * v11 = (int32_t *)v10; // 0xae4bf
    int32_t v12 = *v11 | v5; // 0xae4bf
    *v11 = v12;
    int64_t * v13 = (int64_t *)(v2 + 10); // 0xae516
    uint32_t v14 = *(int32_t *)(*v13 + 2) - v12 + *v3; // 0xae57c
    *v11 = v14 & v12;
    *v3 = *v3 ^ 0x76155fd;
    uint64_t v15 = 0x100000001 * *(int64_t *)(*v13 + 2);
    int64_t v16 = v15 < 0xffffffff00000001 ? v15 : v15 + 0xffffffff; // 0xae673
    *(int64_t *)(v2 + 96) = (v16 | (int64_t)v14) - 0x653cf834;
    int32_t v17 = *v11 ^ 0x71457984; // 0xae6db
    *v11 = v17;
    int32_t v18 = *v3; // 0xae6e2
    int32_t v19 = v17; // 0xae6f2
    int32_t v20 = v18; // 0xae6f2
    if ((v18 & 2) != 0) {
        // 0xae6f8
        v20 = v18 ^ 0x28018f0b;
        *v3 = v20;
        v19 = *v11;
    }
    int32_t v21 = v20 + v19; // 0xae733
    *v11 = v21;
    uint32_t v22 = *v3; // 0xae76b
    int32_t v23 = v22 ^ v21; // 0xae779
    *v11 = v23;
    uint16_t v24 = *(int16_t *)*v13; // 0xae7f9
    *v11 = v23 | (int32_t)v24;
    *v13 = *v13 + 10;
    return (v10 | (2 * ((v2 + (int64_t)v22 & 32) + 247 - (int64_t)&g3) & 256) - (v2 + 9 & 16 ^ (int64_t)v24) | 0x7fffffff) + 32;
}

// Address range: 0xae910 - 0xae913
int64_t function_ae910(void) {
    // 0xae910
    int64_t result; // 0xae910
    return result;
}

// Address range: 0xaf4cf - 0xaf57f
int64_t function_af4cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xaf4cf
    int64_t v1; // 0xaf4cf
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xaf4e0
    int64_t v3 = *v2; // 0xaf4e0
    int64_t * v4 = (int64_t *)(v1 + 187); // 0xaf4f7
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0xaf519
    *(int64_t *)v5 = *v4 + (int64_t)*(int32_t *)(v3 + 6);
    *(int64_t *)(v5 + 8) = *v4 + (int64_t)*(int32_t *)*v2;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xaf57f - 0xaf8af
int64_t function_af57f(void) {
    // 0xaf57f
    int64_t v1; // 0xaf57f
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xaf85f
    int64_t result = v1 + 368; // 0xaf873
    int32_t * v3 = (int32_t *)result; // 0xaf87a
    int32_t v4 = *v3; // 0xaf87a
    *v3 = (int32_t)*(int16_t *)(*v2 + 8) - 0x6fba3362 + v4 & v4;
    *v2 = *v2 + 34;
    return result;
}

// Address range: 0xaf8af - 0xafa1f
int64_t function_af8af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xaf8af
    int64_t v1; // 0xaf8af
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xaf974
    int64_t v3 = *v2; // 0xaf974
    uint32_t v4 = *(int32_t *)(v3 + 4); // 0xaf993
    uint64_t v5 = (int64_t)v4; // 0xaf993
    uint32_t result = v4 & -0x80000000; // 0xaf9a4
    *v2 = (result == 0 ? v5 : -((v5 % 0x80000000))) + v3;
    return result;
}

// Address range: 0xb1b2d - 0xb1fd5
int64_t function_b1b2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xb1b2d
    int64_t v1; // 0xb1b2d
    int32_t * v2 = (int32_t *)(v1 + 368); // 0xb1b37
    int32_t v3 = *v2 & 0x7246aa41; // 0xb1b37
    *v2 = v3;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0xb1b6d
    int32_t v5 = *v4 ^ v3 | 0x47166ef1; // 0xb1b89
    *v2 = v5;
    int32_t v6 = v5 - *v4; // 0xb1ba6
    *v2 = v6;
    int32_t v7 = *v4 | v6; // 0xb1bce
    *v2 = v7;
    int32_t v8 = *v4; // 0xb1c1f
    int32_t v9 = v7; // 0xb1c30
    if ((v8 & 2) != 0) {
        // 0xb1c36
        *v4 = v8 & 0x314a52ba;
        v9 = *v2;
    }
    int64_t * v10 = (int64_t *)(v1 + 10); // 0xb1ca1
    uint32_t v11 = *(int32_t *)(*v10 + 2); // 0xb1cba
    *v2 = v9 - v11;
    *v4 = *v4 ^ 0x25597f3b;
    uint64_t v12 = *(int64_t *)(*v10 + 2); // 0xb1dc9
    int64_t v13 = v12 < 0xffffffff00000001 ? v12 : v12 + 0xffffffff; // 0xb1df4
    *(int64_t *)(v1 + 96) = (v13 | (int64_t)v11) - 0x653cf834;
    int32_t v14 = *v2; // 0xb1e5b
    int32_t v15 = v14 - 0x332a16a; // 0xb1e5b
    *v2 = v15;
    uint32_t v16 = v14 - 0x6729e4eb + (int32_t)*(int16_t *)*v10; // 0xb1f3f
    *v2 = v16 ^ v15;
    *v10 = *v10 + 10;
    return *(int64_t *)(*(int64_t *)(v1 + 271) + (int64_t)(v16 % 0x10000));
}

// Address range: 0xb1fd7 - 0xb1fdc
int64_t function_b1fd7(void) {
    // 0xb1fd7
    return function_cca124();
}

// Address range: 0xb2342 - 0xb23f7
int64_t function_b2342(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xb2342
    int64_t v1; // 0xb2342
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xb2353
    int64_t v3 = *v2; // 0xb2353
    int64_t * v4 = (int64_t *)(v1 + 187); // 0xb2369
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0xb238e
    *(int64_t *)v5 = *v4 + (int64_t)*(int32_t *)(v3 + 6);
    *(int64_t *)(v5 + 8) = *v4 + (int64_t)*(int32_t *)*v2;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xb23f7 - 0xb2661
int64_t function_b23f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb23f7
    int64_t v1; // 0xb23f7
    int64_t v2 = (v1 ^ 0xda3b7d9) - 0x67a31993; // 0xb242b
    *(int64_t *)v1 = v2;
    int64_t v3 = v1 + 0x67a31993; // 0xb2460
    unsigned char v4 = *(char *)(v1 + 404); // 0xb2474
    int64_t v5 = v3; // 0xb2479
    int64_t v6; // 0xb23f7
    bool v7; // 0xb23f7
    if (v4 == 98) {
        unsigned char v8 = (char)v3; // 0xb247f
        char v9 = -v8; // 0xb247f
        int64_t v10 = 64 * (int64_t)(v8 == 0) | (int64_t)(v8 != 0) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(-((v8 % 16)) > 15) | 4 * (int64_t)(llvm_ctpop_i8(v9) % 2 == 0) | 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 2; // bp-8, 0xb2482
        v6 = (int64_t)&v10;
        v5 = v3 & -256 | (int64_t)v9;
    }
    int64_t v11 = v6; // 0xb2486
    int64_t v12 = v5; // 0xb2486
    if (v4 == 50) {
        uint16_t v13 = (int16_t)v5; // 0xb248c
        int16_t v14 = -v13; // 0xb248c
        int64_t v15 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v13 != 0) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(-((v13 % 16)) > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v14) % 2 == 0) | 2; // bp-16, 0xb2490
        v11 = (int64_t)&v15;
        v12 = v5 & -0x10000 | (int64_t)v14;
    }
    int64_t v16 = v11; // 0xb2494
    int64_t v17 = v12; // 0xb2494
    if (v4 == 80) {
        uint32_t v18 = (int32_t)v12; // 0xb249a
        int32_t v19 = -v18; // 0xb249a
        unsigned char v20 = llvm_ctpop_i8((char)v19); // 0xb249a
        v16 = v11 - 8;
        *(int64_t *)v16 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v18 != 0) | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(-((v18 % 16)) > 15) | 4 * (int64_t)(v20 % 2 == 0) | 2;
        v17 = v19;
    }
    int64_t v21 = v17;
    int64_t v22 = v16; // 0xb24a4
    int64_t v23 = v21; // 0xb24a4
    if (v4 == 58) {
        // 0xb24aa
        v23 = -v21;
        unsigned char v24 = llvm_ctpop_i8((char)v23); // 0xb24aa
        v22 = v16 - 8;
        *(int64_t *)v22 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v21 != 0) | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v23 < 0) | 16 * (int64_t)(-((v21 % 16)) > 15) | 4 * (int64_t)(v24 % 2 == 0) | 2;
    }
    int64_t * v25 = (int64_t *)(v1 + 113); // 0xb24c1
    *v25 = v23;
    int64_t * v26 = (int64_t *)(v1 + 10); // 0xb24d8
    int64_t v27 = *v26; // 0xb24d8
    int64_t v28 = v27 & (v3 | v1); // 0xb24db
    char v29 = *(char *)(v27 + 4); // 0xb24e8
    int64_t v30 = v23; // 0xb2508
    v27 = (int64_t)&g1;
    int64_t v31 = v28; // 0xb2508
    if (v29 != 0) {
        // 0xb250e
        *(int64_t *)(v1 + (int64_t)*(int16_t *)v27) = *(int64_t *)v22;
        v30 = *v25;
        v31 = *(int64_t *)(v1 + 129) ^ v28 - (v2 & 32);
    }
    // 0xb2549
    *v25 = v30 + 0x1a44e4ef;
    int32_t * v32 = (int32_t *)(v1 + 368); // 0xb2581
    int32_t v33 = *v32 | *(int32_t *)(v1 + 35); // 0xb2581
    *v32 = v33;
    int64_t v34 = *(int64_t *)(v1 + 271); // 0xb259d
    int64_t v35 = *v26 + 2; // 0xb25c3
    uint32_t v36 = (int32_t)*(int16_t *)v35 - v33 + 0x68baea26; // 0xb25e6
    *v32 = v36 | v33;
    *v26 = *v26 + 5;
    return ((v31 ^ 120) - 0x80000000 ^ 8 ^ -112 - v27 + ((v34 | ((v1 | a3 & -256) ^ 144 | (int64_t)v4) - v1) - 32 & v35)) + v34 + (int64_t)(v36 % 0x10000);
}

// Address range: 0xb379b - 0xb3ff4
int64_t function_b379b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t result, int64_t a21) {
    int64_t v1 = a6;
    int64_t v2; // 0xb379b
    char * v3 = (char *)(v2 + 18); // 0xb37b2
    *v3 = 0;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0xb37f8
    int64_t v5 = *v4; // 0xb37f8
    uint32_t v6 = *(int32_t *)(v2 + (int64_t)*(int16_t *)(v5 + 6)); // 0xb3825
    int64_t v7 = v6; // 0xb3825
    char v8 = *(char *)(v5 + 8); // 0xb3851
    char v9; // 0xb379b
    int64_t v10; // 0xb379b
    int64_t v11; // 0xb379b
    switch (v8) {
        case 34: {
        }
        case 2: {
            char v12 = 0; // 0xb3881
            if ((v7 & 64) != 0) {
                // 0xb3887
                *v3 = 1;
                v12 = 1;
            }
            int64_t v13 = v6; // 0xb38ce
            int64_t v14 = (int64_t)&v1; // 0xb38ce
            v9 = v12;
            v11 = v14;
            v10 = v13;
            if (v8 == 2) {
                int64_t v15 = v13 / 128 % 2; // 0xb3c41
                v9 = v12;
                v11 = v14;
                v10 = v15;
                if ((v13 & 64) != 0 || (v6 & (int32_t)L"\n2") / 2048 != (int32_t)v15) {
                    *v3 = 1;
                    v9 = 1;
                    v11 = v14;
                    v10 = v15;
                }
            }
            // break -> 0xb3d19
            break;
        }
        default: {
            char v16 = 0; // 0xb38dd
            int64_t v17 = v7; // 0xb38dd
            if (v8 == -102) {
                uint32_t v18 = v6 & 64; // 0xb38e3
                int64_t v19 = v18; // 0xb38e3
                v16 = 0;
                v17 = v19;
                if (v18 == 0) {
                    // 0xb38f0
                    *v3 = 1;
                    v16 = 1;
                    v17 = v19;
                }
            }
            char v20 = v16; // 0xb3917
            int64_t v21 = v17; // 0xb3917
            if (v8 == 0) {
                uint32_t v22 = (int32_t)v17 & 64; // 0xb3920
                int64_t v23 = v22; // 0xb3920
                v20 = v16;
                v21 = v23;
                if (v22 == 0) {
                    // 0xb392d
                    v20 = v16;
                    v21 = v23;
                    if (v17 % 2 == 0) {
                        // 0xb3938
                        *v3 = 1;
                        v20 = 1;
                        v21 = v23;
                    }
                }
            }
            char v24 = v20; // 0xb3965
            int64_t v25 = v21; // 0xb3965
            if (v8 == 95) {
                uint32_t v26 = (int32_t)v21 % 2; // 0xb396b
                int64_t v27 = v26; // 0xb396b
                v24 = v20;
                v25 = v27;
                if (v26 == 0) {
                    // 0xb3978
                    *v3 = 1;
                    v24 = 1;
                    v25 = v27;
                }
            }
            char v28 = v24; // 0xb39b2
            int64_t v29 = v25; // 0xb39b2
            if (v8 == -104) {
                // 0xb39b8
                v28 = v24;
                v29 = 0;
                if (v25 % 2 != 0) {
                    // 0xb39c5
                    *v3 = 1;
                    v28 = 1;
                    v29 = 1;
                }
            }
            char v30 = v28; // 0xb39df
            int64_t v31 = v29; // 0xb39df
            if (v8 == -119) {
                uint32_t v32 = (int32_t)v29 & 64; // 0xb39f1
                v30 = v28;
                v31 = 0;
                if (v29 % 2 != 0 || v32 != 0) {
                    *v3 = 1;
                    v30 = 1;
                    v31 = v32;
                }
            }
            char v33 = v30; // 0xb3a68
            int64_t v34 = v31; // 0xb3a68
            if (v8 == 47) {
                // 0xb3a6e
                v33 = v30;
                v34 = v31;
                if ((v31 & 64) == 0) {
                    int64_t v35 = v31 / 128 % 2; // 0xb3ab6
                    v33 = v30;
                    v34 = v35;
                    if ((int32_t)v35 == (int32_t)((v31 & (int64_t)(int32_t)L"\n2") / 2048)) {
                        // 0xb3ac3
                        *v3 = 1;
                        v33 = 1;
                        v34 = v35;
                    }
                }
            }
            char v36 = v33; // 0xb3af4
            int64_t v37 = v34; // 0xb3af4
            if (v8 == -6) {
                int64_t v38 = v34 / 128 % 2; // 0xb3b23
                v36 = v33;
                v37 = v38;
                if ((int32_t)v38 == (int32_t)((v34 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0xb3b30
                    *v3 = 1;
                    v36 = 1;
                    v37 = v38;
                }
            }
            char v39 = v36; // 0xb3b4d
            int64_t v40 = v37; // 0xb3b4d
            if (v8 == -115) {
                int64_t v41 = v37 / 128 % 2; // 0xb3b90
                v39 = v36;
                v40 = v41;
                if ((int32_t)v41 != (int32_t)((v37 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0xb3b9d
                    *v3 = 1;
                    v39 = 1;
                    v40 = v41;
                }
            }
            char v42 = v39; // 0xb3c88
            int64_t v43 = v40; // 0xb3c88
            if (v8 == -30) {
                uint32_t v44 = (int32_t)v40 & (int32_t)L"\n2"; // 0xb3c8e
                int64_t v45 = v44; // 0xb3c8e
                v42 = v39;
                v43 = v45;
                if (v44 == 0) {
                    // 0xb3c9b
                    *v3 = 1;
                    v42 = 1;
                    v43 = v45;
                }
            }
            // 0xb3ccf
            v9 = v42;
            v10 = v43;
            if (v8 == -90) {
                uint32_t v46 = (int32_t)v43 & 4; // 0xb3cd8
                int64_t v47 = v46; // 0xb3cd8
                v9 = v42;
                v10 = v47;
                if (v46 == 0) {
                    // 0xb3ce5
                    *v3 = 1;
                    v9 = 1;
                    v10 = v47;
                }
            }
            // break -> 0xb3d19
            break;
        }
    }
    char v48 = v9; // 0xb3d1c
    int64_t v49 = v10; // 0xb3d1c
    if (v8 == 12) {
        uint32_t v50 = (int32_t)v10 & 128; // 0xb3d22
        int64_t v51 = v50; // 0xb3d22
        v48 = v9;
        v49 = v51;
        if (v50 == 0) {
            // 0xb3d2f
            *v3 = 1;
            v48 = 1;
            v49 = v51;
        }
    }
    char v52 = v48; // 0xb3d77
    int64_t v53 = v49; // 0xb3d77
    if (v8 == -88) {
        uint32_t v54 = (int32_t)v49 & (int32_t)L"\n2"; // 0xb3d7d
        v52 = v48;
        v53 = 0;
        if (v54 != 0) {
            // 0xb3d8a
            *v3 = 1;
            v52 = 1;
            v53 = v54;
        }
    }
    char v55 = v52; // 0xb3db0
    int64_t v56 = v53; // 0xb3db0
    char v57; // 0xb379b
    if (v8 != -21) {
        goto lab_0xb3df6;
    } else {
        uint32_t v58 = (int32_t)v53 & 4; // 0xb3db6
        v57 = v52;
        if (v58 == 0) {
            goto lab_0xb3e2a;
        } else {
            // 0xb3dc3
            *v3 = 1;
            v55 = 1;
            v56 = v58;
            goto lab_0xb3df6;
        }
    }
  lab_0xb3df6:
    // 0xb3df6
    v57 = v55;
    int64_t v59; // 0xb379b
    if (v8 != 56 || (char)v56 > -1) {
        goto lab_0xb3e2a;
    } else {
        // 0xb3e2a
        *v3 = 1;
        v59 = *v4;
        goto lab_0xb3e40;
    }
  lab_0xb3e2a:;
    int64_t v60 = *v4;
    v59 = v60;
    if (v57 == 0) {
        int64_t * v61 = (int64_t *)(v2 + (int64_t)*(int16_t *)(v60 + 9)); // 0xb3eda
        *v61 = *v61 + 136;
        int32_t * v62 = (int32_t *)(v2 + 368); // 0xb3fab
        *v62 = 0x14b96a4c - (int32_t)*(int16_t *)(*v4 + 11) + *v62;
        *v4 = *v4 + 13;
        return 18;
    }
    goto lab_0xb3e40;
  lab_0xb3e40:;
    uint32_t v63 = *(int32_t *)v59; // 0xb3e59
    int64_t v64 = *(int64_t *)(v2 + 187); // 0xb3e65
    uint16_t v65 = *(int16_t *)(v59 + 4); // 0xb3e81
    *(int64_t *)(v11 + (int64_t)v65) = v64 + (int64_t)v63;
    *(int32_t *)(v2 + 476) = 0;
    return result;
}

// Address range: 0xb3ff6 - 0xb3ffb
int64_t function_b3ff6(void) {
    // 0xb3ff6
    return function_ccc144();
}

// Address range: 0xb6bba - 0xb6c36
int64_t function_b6bba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xb6bba
    int64_t v1; // 0xb6bba
    int64_t v2 = *(int64_t *)(v1 + 10); // 0xb6bcb
    uint32_t v3 = *(int32_t *)v2; // 0xb6bd5
    int64_t v4 = *(int64_t *)(v1 + 187); // 0xb6be2
    uint16_t v5 = *(int16_t *)(v2 + 4); // 0xb6c00
    *(int64_t *)(v1 + (int64_t)v5) = v4 + (int64_t)v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xb6c36 - 0xb708d
int64_t function_b6c36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb6c36
    int64_t v1; // 0xb6c36
    int64_t v2 = v1;
    int64_t v3 = v2 + 368; // 0xb6c45
    int32_t * v4 = (int32_t *)v3; // 0xb6c4c
    int32_t v5 = *v4 & 0x2b7e7713; // 0xb6c4c
    *v4 = v5;
    int32_t * v6 = (int32_t *)(v2 + 35); // 0xb6cf2
    int32_t v7 = *v6; // 0xb6cf2
    int32_t v8 = v5; // 0xb6d00
    if ((v7 & 2) != 0) {
        // 0xb6d06
        *v6 = (v7 & 0x742354d) + 0x2ff05a2b;
        v8 = *v4;
    }
    int64_t v9 = v2 + 129; // 0xb6c79
    int32_t v10 = v8 & 0x515f6307; // 0xb6d5b
    *v4 = v10;
    int64_t * v11 = (int64_t *)(v2 + 10); // 0xb6d8e
    uint32_t v12 = v10 + (int32_t)*(int16_t *)*v11; // 0xb6ddb
    uint32_t v13 = v12 + *v6; // 0xb6e26
    *v4 = v10 - v13;
    *v6 = *v6 & 0x1011ba33;
    int64_t v14 = *(int64_t *)(((int64_t)v13 & (int64_t)&g3) + v2); // 0xb6eb3
    *(int64_t *)(v2 + 96) = v14 - 0x653cf834;
    int32_t v15 = *v4 | *v6; // 0xb6f52
    *v4 = v15;
    *v4 = (int32_t)*(int16_t *)(*v11 + 2) - v15 ^ v15;
    *v11 = *v11 + 4;
    return (((v2 + 112 ^ v9) & 128) - v3 ^ 144) - 0x7fffffff + -2 * (v9 & v2 & ((v2 + 1 | (int64_t)v12) ^ -0x80000000)) | 129;
}

// Address range: 0xb7586 - 0xb769c
int64_t function_b7586(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb7586
    int64_t v1; // 0xb7586
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xb7635
    int64_t v3 = *v2; // 0xb7635
    uint32_t v4 = *(int32_t *)(v3 + 4); // 0xb7642
    uint64_t v5 = (int64_t)v4; // 0xb7642
    int64_t v6 = 14 - v3; // 0xb764e
    uint32_t v7 = v4 & -0x80000000; // 0xb7654
    int64_t result; // 0xb7586
    int64_t v8; // 0xb7586
    if (v7 == 0) {
        // 0xb768c
        v8 = v3 + v5;
        result = v6;
    } else {
        // 0xb7666
        v8 = v3 - v5 % 0x80000000;
        result = v6 + (int64_t)v7;
    }
    // 0xb7699
    *v2 = v8;
    return result;
}

// Address range: 0xb837c - 0xb84a7
int64_t function_b837c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xb837c
    int64_t result; // 0xb837c
    int64_t * v1 = (int64_t *)(result + 10); // 0xb841f
    int64_t v2 = *v1; // 0xb841f
    uint32_t v3 = *(int32_t *)(v2 + 4); // 0xb8433
    uint64_t v4 = (int64_t)v3; // 0xb8433
    *v1 = (v3 > -1 ? v4 : -((v4 % 0x80000000))) + v2;
    return result;
}

// Address range: 0xb86f8 - 0xb87aa
int64_t function_b86f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xb86f8
    int64_t v1; // 0xb86f8
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xb8709
    int64_t v3 = *v2; // 0xb8709
    int64_t * v4 = (int64_t *)(v1 + 187); // 0xb8722
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0xb8744
    *(int64_t *)v5 = *v4 + (int64_t)*(int32_t *)(v3 + 6);
    *(int64_t *)(v5 + 8) = *v4 + (int64_t)*(int32_t *)*v2;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xb87aa - 0xb8b42
int64_t function_b87aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb87aa
    int64_t v1; // 0xb87aa
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0xb87ef
    *v3 = *v3 - 0x1889c111;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int64_t * v4 = (int64_t *)(v2 + 96); // 0xb883d
    int64_t v5 = *v4; // 0xb883d
    *v4 = v5 - 0xbf542e1;
    int64_t v6 = v5 + 0x653cf834; // 0xb888f
    char v7 = *(char *)(v2 + 404); // 0xb88a0
    int64_t v8; // 0xb87aa
    int64_t v9; // 0xb87aa
    bool v10; // 0xb87aa
    if (v7 == 98) {
        uint64_t v11 = v6 & v2;
        char v12 = v11; // 0xb88ad
        int64_t v13 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v12) % 2 == 0) | 2; // bp-8, 0xb88b0
        v9 = (int64_t)&v13;
        v8 = v11 % 256 | v2 & -256;
    }
    int64_t v14 = v9; // 0xb88b5
    int64_t v15 = v8; // 0xb88b5
    if (v7 == 50) {
        uint64_t v16 = v8 & v6;
        int16_t v17 = v16; // 0xb88bb
        int64_t v18 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v16) % 2 == 0) | 2; // bp-16, 0xb88bf
        v14 = (int64_t)&v18;
        v15 = v16 % 0x10000 | v8 & -0x10000;
    }
    int64_t v19 = v14; // 0xb88c4
    int64_t v20 = v15; // 0xb88c4
    if (v7 == 80) {
        int64_t v21 = v15 & v6;
        int32_t v22 = v21; // 0xb88ca
        unsigned char v23 = llvm_ctpop_i8((char)v21); // 0xb88ca
        v19 = v14 - 8;
        *(int64_t *)v19 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v22 == 0) | 128 * (int64_t)(v22 < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
        v20 = v21 & 0xffffffff;
    }
    int64_t v24 = v19; // 0xb88d2
    int64_t v25 = v20; // 0xb88d2
    if (v7 == 58) {
        // 0xb88d8
        v25 = v20 & v6;
        unsigned char v26 = llvm_ctpop_i8((char)v25); // 0xb88d8
        v24 = v19 - 8;
        *(int64_t *)v24 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v25 == 0) | 128 * (int64_t)(v25 < 0) | 4 * (int64_t)(v26 % 2 == 0) | 2;
    }
    int64_t v27 = v2 + 113; // 0xb88e6
    int64_t * v28 = (int64_t *)v27; // 0xb88ed
    *v28 = v25 ^ 0x564839e;
    int64_t * v29 = (int64_t *)(v2 + 10); // 0xb8909
    int64_t v30 = *v29; // 0xb8909
    if (*(char *)v30 != 0) {
        uint16_t v31 = *(int16_t *)(v30 + 1); // 0xb8948
        *(int64_t *)(v2 + (int64_t)v31) = *(int64_t *)v24;
    }
    int64_t v32 = v2 + 35; // 0xb8951
    int32_t * v33 = (int32_t *)v32; // 0xb8958
    int32_t v34 = *v33 + -0x3cae9026 - *v3; // 0xb8958
    *v33 = v34 | 0x2b959efa;
    *v3 = *v3 - (v34 | 0x3ffdbffb);
    *v28 = (*v28 ^ 0x564839e) + 0x1a44e4ef;
    int32_t v35 = *v3; // 0xb8abe
    *v3 = v35 - ((int32_t)*(int16_t *)(*v29 + 3) ^ 0xa9f4228 ^ v35);
    *v29 = *v29 + 5;
    return ((v27 ^ v32) & 120 ^ v2 + 271) & (int64_t)&g2;
}

// Address range: 0xb8b47 - 0xb8b4a
int64_t function_b8b47(void) {
    // 0xb8b47
    int64_t result; // 0xb8b47
    return result;
}

// Address range: 0xb987b - 0xba0d8
int64_t function_b987b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xb987b
    int64_t v1; // 0xb987b
    char * v2 = (char *)(v1 + 18); // 0xb9898
    *v2 = 0;
    int64_t * v3 = (int64_t *)(v1 + 10); // 0xb98d7
    int64_t v4 = *v3; // 0xb98d7
    uint32_t v5 = *(int32_t *)(v1 + (int64_t)*(int16_t *)(v4 + 8)); // 0xb98f7
    int64_t v6 = v5; // 0xb98f7
    char v7 = *(char *)(v4 + 10); // 0xb9927
    char v8; // 0xb987b
    int64_t v9; // 0xb987b
    switch (v7) {
        case 34: {
        }
        case 2: {
            char v10 = 0; // 0xb9953
            if ((v6 & 64) != 0) {
                // 0xb9959
                *v2 = 1;
                v10 = 1;
            }
            int64_t v11 = v5; // 0xb998d
            v8 = v10;
            v9 = v11;
            if (v7 == 2) {
                int64_t v12 = v11 / 128 % 2; // 0xb9d45
                v8 = v10;
                v9 = v12;
                if ((v11 & 64) != 0 || (v5 & (int32_t)L"\n2") / 2048 != (int32_t)v12) {
                    *v2 = 1;
                    v8 = 1;
                    v9 = v12;
                }
            }
            // break -> 0xb9e1d
            break;
        }
        default: {
            char v13 = 0; // 0xb9992
            int64_t v14 = v6; // 0xb9992
            if (v7 == -102) {
                uint32_t v15 = v5 & 64; // 0xb9998
                int64_t v16 = v15; // 0xb9998
                v13 = 0;
                v14 = v16;
                if (v15 == 0) {
                    // 0xb99a4
                    *v2 = 1;
                    v13 = 1;
                    v14 = v16;
                }
            }
            char v17 = v13; // 0xb99c7
            int64_t v18 = v14; // 0xb99c7
            if (v7 == 0) {
                uint32_t v19 = (int32_t)v14 & 64; // 0xb99dd
                int64_t v20 = v19; // 0xb99dd
                v17 = v13;
                v18 = v20;
                if (v19 == 0) {
                    // 0xb99e9
                    v17 = v13;
                    v18 = v20;
                    if (v14 % 2 == 0) {
                        // 0xb99f6
                        *v2 = 1;
                        v17 = 1;
                        v18 = v20;
                    }
                }
            }
            char v21 = v17; // 0xb9a3b
            int64_t v22 = v18; // 0xb9a3b
            if (v7 == 95) {
                uint32_t v23 = (int32_t)v18 % 2; // 0xb9a41
                int64_t v24 = v23; // 0xb9a41
                v21 = v17;
                v22 = v24;
                if (v23 == 0) {
                    // 0xb9a4d
                    *v2 = 1;
                    v21 = 1;
                    v22 = v24;
                }
            }
            char v25 = v21; // 0xb9a7d
            int64_t v26 = v22; // 0xb9a7d
            if (v7 == -104) {
                // 0xb9a83
                v25 = v21;
                v26 = 0;
                if (v22 % 2 != 0) {
                    // 0xb9a8f
                    *v2 = 1;
                    v25 = 1;
                    v26 = 1;
                }
            }
            char v27 = v25; // 0xb9ab5
            int64_t v28 = v26; // 0xb9ab5
            if (v7 == -119) {
                uint32_t v29 = (int32_t)v26 & 64; // 0xb9abe
                v27 = v25;
                v28 = 0;
                if (v26 % 2 != 0 || v29 != 0) {
                    *v2 = 1;
                    v27 = 1;
                    v28 = v29;
                }
            }
            char v30 = v27; // 0xb9b24
            int64_t v31 = v28; // 0xb9b24
            if (v7 == 47) {
                // 0xb9b2a
                v30 = v27;
                v31 = v28;
                if ((v28 & 64) == 0) {
                    int64_t v32 = v28 / 128 % 2; // 0xb9b7f
                    v30 = v27;
                    v31 = v32;
                    if ((int32_t)v32 == (int32_t)((v28 & (int64_t)(int32_t)L"\n2") / 2048)) {
                        // 0xb9b8b
                        *v2 = 1;
                        v30 = 1;
                        v31 = v32;
                    }
                }
            }
            char v33 = v30; // 0xb9bbf
            int64_t v34 = v31; // 0xb9bbf
            if (v7 == -6) {
                int64_t v35 = v31 / 128 % 2; // 0xb9c01
                v33 = v30;
                v34 = v35;
                if ((int32_t)v35 == (int32_t)((v31 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0xb9c0d
                    *v2 = 1;
                    v33 = 1;
                    v34 = v35;
                }
            }
            char v36 = v33; // 0xb9c3a
            int64_t v37 = v34; // 0xb9c3a
            if (v7 == -115) {
                int64_t v38 = v34 / 128 % 2; // 0xb9c6b
                v36 = v33;
                v37 = v38;
                if ((int32_t)v38 != (int32_t)((v34 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0xb9c77
                    *v2 = 1;
                    v36 = 1;
                    v37 = v38;
                }
            }
            char v39 = v36; // 0xb9d9a
            int64_t v40 = v37; // 0xb9d9a
            if (v7 == -30) {
                uint32_t v41 = (int32_t)v37 & (int32_t)L"\n2"; // 0xb9da0
                int64_t v42 = v41; // 0xb9da0
                v39 = v36;
                v40 = v42;
                if (v41 == 0) {
                    // 0xb9dac
                    *v2 = 1;
                    v39 = 1;
                    v40 = v42;
                }
            }
            // 0xb9dd1
            v8 = v39;
            v9 = v40;
            if (v7 == -90) {
                uint32_t v43 = (int32_t)v40 & 4; // 0xb9ddb
                int64_t v44 = v43; // 0xb9ddb
                v8 = v39;
                v9 = v44;
                if (v43 == 0) {
                    // 0xb9de7
                    *v2 = 1;
                    v8 = 1;
                    v9 = v44;
                }
            }
            // break -> 0xb9e1d
            break;
        }
    }
    char v45 = v8; // 0xb9e21
    int64_t v46 = v9; // 0xb9e21
    if (v7 == 12) {
        uint32_t v47 = (int32_t)v9 & 128; // 0xb9e27
        int64_t v48 = v47; // 0xb9e27
        v45 = v8;
        v46 = v48;
        if (v47 == 0) {
            // 0xb9e33
            *v2 = 1;
            v45 = 1;
            v46 = v48;
        }
    }
    char v49 = v45; // 0xb9e4f
    int64_t v50 = v46; // 0xb9e4f
    if (v7 == -88) {
        uint32_t v51 = (int32_t)v46 & (int32_t)L"\n2"; // 0xb9e55
        v49 = v45;
        v50 = 0;
        if (v51 != 0) {
            // 0xb9e61
            *v2 = 1;
            v49 = 1;
            v50 = v51;
        }
    }
    char v52 = v49; // 0xb9e8d
    int64_t v53 = v50; // 0xb9e8d
    char v54; // 0xb987b
    if (v7 != -21) {
        goto lab_0xb9ece;
    } else {
        uint32_t v55 = (int32_t)v50 & 4; // 0xb9e93
        v54 = v49;
        if (v55 == 0) {
            goto lab_0xb9f1a;
        } else {
            // 0xb9e9f
            *v2 = 1;
            v52 = 1;
            v53 = v55;
            goto lab_0xb9ece;
        }
    }
  lab_0xb9ece:
    // 0xb9ece
    v54 = v52;
    if (v7 == 56 && (char)v53 <= -1) {
        // 0xb9ee4
        *v2 = 1;
        v54 = 1;
    }
    goto lab_0xb9f1a;
  lab_0xb9f1a:;
    int64_t v56 = *v3; // 0xb9f45
    int64_t v57 = *(int64_t *)(v1 + 271); // 0xb9f99
    int64_t result = *(int64_t *)(8 * (int64_t)*(int16_t *)v56 + v57); // 0xb9fb8
    if (v54 == 0) {
        // 0xba0cc
        return result;
    }
    uint32_t v58 = *(int32_t *)(v56 + 4); // 0xba005
    uint64_t v59 = (int64_t)v58; // 0xba005
    if (v58 > -1) {
        // 0xba09a
        *v3 = v56 + v59;
    } else {
        // 0xba05b
        *v3 = v56 - v59 % 0x80000000;
    }
    // 0xba0cc
    return result;
}

// Address range: 0xbb1dd - 0xbb3c9
int64_t function_bb1dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xbb1dd
    int64_t v1; // 0xbb1dd
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xbb1e7
    int64_t v3 = *v2; // 0xbb1e7
    int64_t * v4; // 0xbb1dd
    int64_t v5; // 0xbb1dd
    if (*(char *)v3 < 3) {
        uint32_t v6 = *(int32_t *)(v3 + 7); // 0xbb221
        int64_t * v7 = (int64_t *)(v1 + 187);
        int64_t v8 = *v7; // 0xbb22e
        unsigned char v9 = *(char *)(v3 + 1); // 0xbb245
        int64_t v10 = *(int64_t *)(v8 + (int64_t)v6 + (int64_t)v9); // 0xbb270
        v4 = v7;
        v5 = v3;
        if (v10 != v8 + (int64_t)*(int32_t *)(v3 + 3)) {
            int64_t * v11 = (int64_t *)(v1 + 80); // 0xbb2c5
            int64_t * v12 = (int64_t *)(v8 + (int64_t)(v6 + (int32_t)v9)); // 0xbb2c8
            int64_t v13 = *v12 - *v11; // 0xbb2c8
            *v12 = v13;
            *v12 = *v7 + v13;
            int64_t v14 = *v2; // 0xbb2e5
            v4 = v7;
            v5 = v14;
            if (*(char *)v14 == 2) {
                unsigned char v15 = *(char *)(v14 + 2); // 0xbb310
                int32_t v16 = *(int32_t *)(v14 + 7); // 0xbb328
                int64_t * v17 = (int64_t *)(v8 + (int64_t)(v16 + (int32_t)v15)); // 0xbb33b
                int64_t v18 = *v17 - *v11; // 0xbb33b
                *v17 = v18;
                *v17 = *v7 + v18;
                v4 = v7;
                v5 = *v2;
            }
        }
    } else {
        // 0xbb1dd
        v4 = (int64_t *)(v1 + 187);
        v5 = v3;
    }
    uint32_t v19 = *(int32_t *)(v5 + 7); // 0xbb369
    uint16_t v20 = *(int16_t *)(v5 + 11); // 0xbb393
    *(int64_t *)(v1 + (int64_t)v20) = *v4 + (int64_t)v19;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xbb3c9 - 0xbb6e6
int64_t function_bb3c9(void) {
    // 0xbb3c9
    int64_t v1; // 0xbb3c9
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xbb417
    int32_t * v3 = (int32_t *)(v1 + 35); // 0xbb43b
    uint32_t v4 = *v3 ^ (int32_t)*(int16_t *)*v2; // 0xbb43b
    int32_t * v5 = (int32_t *)(v1 + 368); // 0xbb447
    *v5 = *v5 + v4;
    *v3 = *v3 - 0x58d38f71;
    int64_t v6 = *(int64_t *)(((int64_t)v4 & (int64_t)&g3) + v1); // 0xbb464
    *(int64_t *)(v1 + 96) = v6 - 0x653cf834;
    int32_t v7 = *v3; // 0xbb4ad
    if ((v7 & 2) != 0) {
        // 0xbb4c7
        *v3 = v7 + 0xdc60e0a ^ 0xb71b18d;
    }
    int32_t v8 = (*v5 | 0x2d680d90) + 0x69cbe1a0; // 0xbb593
    *v5 = v8;
    int64_t v9 = *(int64_t *)(v1 + 271); // 0xbb5d9
    uint32_t v10 = (int32_t)*(int16_t *)(*v2 + 2) - v8 + 0x7ba65dc4; // 0xbb65a
    *v5 = v10 & v8;
    *v2 = *v2 + 4;
    return ((int64_t)v10 & (int64_t)&g3) + v9;
}

// Address range: 0xbdd18 - 0xbe56a
int64_t function_bdd18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xbdd18
    int64_t v1; // 0xbdd18
    int64_t result = v1 + 18; // 0xbdd2f
    char * v2 = (char *)result; // 0xbdd3f
    *v2 = 0;
    int64_t result2 = v1 + 10; // 0xbdd65
    int64_t * v3 = (int64_t *)result2; // 0xbdd7d
    int64_t v4 = *v3; // 0xbdd7d
    uint32_t v5 = *(int32_t *)(v1 + (int64_t)*(int16_t *)(v4 + 8)); // 0xbddae
    int64_t v6 = v5; // 0xbddae
    char v7 = *(char *)(v4 + 10); // 0xbddef
    char v8; // 0xbdd18
    int64_t v9; // 0xbdd18
    switch (v7) {
        case 34: {
        }
        case 2: {
            char v10 = 0; // 0xbde1e
            if ((v6 & 64) != 0) {
                // 0xbde24
                *v2 = 1;
                v10 = 1;
            }
            int64_t v11 = v5; // 0xbde5f
            v8 = v10;
            v9 = v11;
            if (v7 == 2) {
                int64_t v12 = v11 / 128 % 2; // 0xbe24c
                v8 = v10;
                v9 = v12;
                if ((v11 & 64) != 0 || (v5 & (int32_t)L"\n2") / 2048 != (int32_t)v12) {
                    *v2 = 1;
                    v8 = 1;
                    v9 = v12;
                }
            }
            // break -> 0xbe324
            break;
        }
        default: {
            char v13 = 0; // 0xbde65
            int64_t v14 = v6; // 0xbde65
            if (v7 == -102) {
                uint32_t v15 = v5 & 64; // 0xbde6b
                int64_t v16 = v15; // 0xbde6b
                v13 = 0;
                v14 = v16;
                if (v15 == 0) {
                    // 0xbde78
                    *v2 = 1;
                    v13 = 1;
                    v14 = v16;
                }
            }
            char v17 = v13; // 0xbdea7
            int64_t v18 = v14; // 0xbdea7
            if (v7 == 0) {
                uint32_t v19 = (int32_t)v14 & 64; // 0xbdeb3
                int64_t v20 = v19; // 0xbdeb3
                v17 = v13;
                v18 = v20;
                if (v19 == 0) {
                    // 0xbdec0
                    v17 = v13;
                    v18 = v20;
                    if (v14 % 2 == 0) {
                        // 0xbdecd
                        *v2 = 1;
                        v17 = 1;
                        v18 = v20;
                    }
                }
            }
            char v21 = v17; // 0xbdf06
            int64_t v22 = v18; // 0xbdf06
            if (v7 == 95) {
                uint32_t v23 = (int32_t)v18 % 2; // 0xbdf0c
                int64_t v24 = v23; // 0xbdf0c
                v21 = v17;
                v22 = v24;
                if (v23 == 0) {
                    // 0xbdf19
                    *v2 = 1;
                    v21 = 1;
                    v22 = v24;
                }
            }
            char v25 = v21; // 0xbdf49
            int64_t v26 = v22; // 0xbdf49
            if (v7 == -104) {
                // 0xbdf4f
                v25 = v21;
                v26 = 0;
                if (v22 % 2 != 0) {
                    // 0xbdf5c
                    *v2 = 1;
                    v25 = 1;
                    v26 = 1;
                }
            }
            char v27 = v25; // 0xbdf98
            int64_t v28 = v26; // 0xbdf98
            if (v7 == -119) {
                uint32_t v29 = (int32_t)v26 & 64; // 0xbdfae
                v27 = v25;
                v28 = 0;
                if (v26 % 2 != 0 || v29 != 0) {
                    *v2 = 1;
                    v27 = 1;
                    v28 = v29;
                }
            }
            char v30 = v27; // 0xbe045
            int64_t v31 = v28; // 0xbe045
            if (v7 == 47) {
                // 0xbe04b
                v30 = v27;
                v31 = v28;
                if ((v28 & 64) == 0) {
                    int64_t v32 = v28 / 128 % 2; // 0xbe08b
                    v30 = v27;
                    v31 = v32;
                    if ((int32_t)v32 == (int32_t)((v28 & (int64_t)(int32_t)L"\n2") / 2048)) {
                        // 0xbe098
                        *v2 = 1;
                        v30 = 1;
                        v31 = v32;
                    }
                }
            }
            char v33 = v30; // 0xbe0bb
            int64_t v34 = v31; // 0xbe0bb
            if (v7 == -6) {
                int64_t v35 = v31 / 128 % 2; // 0xbe0fb
                v33 = v30;
                v34 = v35;
                if ((int32_t)v35 == (int32_t)((v31 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0xbe108
                    *v2 = 1;
                    v33 = 1;
                    v34 = v35;
                }
            }
            char v36 = v33; // 0xbe13a
            int64_t v37 = v34; // 0xbe13a
            if (v7 == -115) {
                int64_t v38 = v34 / 128 % 2; // 0xbe187
                v36 = v33;
                v37 = v38;
                if ((int32_t)v38 != (int32_t)((v34 & (int64_t)(int32_t)L"\n2") / 2048)) {
                    // 0xbe194
                    *v2 = 1;
                    v36 = 1;
                    v37 = v38;
                }
            }
            char v39 = v36; // 0xbe288
            int64_t v40 = v37; // 0xbe288
            if (v7 == -30) {
                uint32_t v41 = (int32_t)v37 & (int32_t)L"\n2"; // 0xbe28e
                int64_t v42 = v41; // 0xbe28e
                v39 = v36;
                v40 = v42;
                if (v41 == 0) {
                    // 0xbe29b
                    *v2 = 1;
                    v39 = 1;
                    v40 = v42;
                }
            }
            // 0xbe2e0
            v8 = v39;
            v9 = v40;
            if (v7 == -90) {
                uint32_t v43 = (int32_t)v40 & 4; // 0xbe2ea
                int64_t v44 = v43; // 0xbe2ea
                v8 = v39;
                v9 = v44;
                if (v43 == 0) {
                    // 0xbe2f7
                    *v2 = 1;
                    v8 = 1;
                    v9 = v44;
                }
            }
            // break -> 0xbe324
            break;
        }
    }
    char v45 = v8; // 0xbe328
    int64_t v46 = v9; // 0xbe328
    if (v7 == 12) {
        uint32_t v47 = (int32_t)v9 & 128; // 0xbe32e
        int64_t v48 = v47; // 0xbe32e
        v45 = v8;
        v46 = v48;
        if (v47 == 0) {
            // 0xbe33b
            *v2 = 1;
            v45 = 1;
            v46 = v48;
        }
    }
    char v49 = v45; // 0xbe374
    int64_t v50 = v46; // 0xbe374
    if (v7 == -88) {
        uint32_t v51 = (int32_t)v46 & (int32_t)L"\n2"; // 0xbe37a
        v49 = v45;
        v50 = 0;
        if (v51 != 0) {
            // 0xbe387
            *v2 = 1;
            v49 = 1;
            v50 = v51;
        }
    }
    char v52 = v49; // 0xbe3c4
    int64_t v53 = v50; // 0xbe3c4
    char v54; // 0xbdd18
    if (v7 != -21) {
        goto lab_0xbe403;
    } else {
        uint32_t v55 = (int32_t)v50 & 4; // 0xbe3ca
        v54 = v49;
        if (v55 == 0) {
            goto lab_0xbe445;
        } else {
            // 0xbe3d7
            *v2 = 1;
            v52 = 1;
            v53 = v55;
            goto lab_0xbe403;
        }
    }
  lab_0xbe403:
    // 0xbe403
    v54 = v52;
    if (v7 != 56 || (char)v53 > -1) {
        goto lab_0xbe445;
    } else {
        // 0xbe445
        *v2 = 1;
        goto lab_0xbe510;
    }
  lab_0xbe445:
    // 0xbe445
    if (v54 == 0) {
        // 0xbe55b
        return result;
    }
    goto lab_0xbe510;
  lab_0xbe510:;
    int64_t v56 = *v3;
    uint32_t v57 = *(int32_t *)(v56 + 4);
    uint64_t v58 = (int64_t)v57;
    if (v57 > -1) {
        // 0xbe53f
        *v3 = v56 + v58;
    } else {
        // 0xbe51d
        *v3 = v56 - v58 % 0x80000000;
    }
    // 0xbe55b
    return result2;
}

// Address range: 0xc291a - 0xc29cf
int64_t function_c291a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xc291a
    int64_t v1; // 0xc291a
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xc292b
    int64_t v3 = *v2; // 0xc292b
    int64_t * v4 = (int64_t *)(v1 + 187); // 0xc2942
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0xc2966
    *(int64_t *)v5 = *v4 + (int64_t)*(int32_t *)(v3 + 6);
    *(int64_t *)(v5 + 8) = *v4 + (int64_t)*(int32_t *)*v2;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xc29cf - 0xc2d37
int64_t function_c29cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xc29cf
    int64_t v1; // 0xc29cf
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xc29d9
    *v3 = *v3 + 0xb5e86c78;
    int32_t * v4 = (int32_t *)(v2 + 368); // 0xc2a0d
    *v4 = *v4 ^ *(int32_t *)(v2 + 35);
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int64_t result = v2 + 10; // 0xc2a5d
    int64_t * v5 = (int64_t *)result; // 0xc2a72
    uint64_t v6 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v5 + 3)); // 0xc2a8c
    uint64_t v7 = *v3 - 0x50ab7444; // 0xc2ad2
    char v8 = *(char *)(v2 + 404); // 0xc2afa
    int64_t v9 = v6; // 0xc2b01
    int64_t v10; // 0xc29cf
    if (v8 == 98) {
        unsigned char v11 = (char)v7 % 32; // 0xc2b0e
        bool v12 = (v6 & (int64_t)L"\n2") != 0; // 0xc2b0e
        bool v13 = v6 % 2 != 0; // 0xc2b0e
        int64_t v14; // 0xc29cf
        if (v11 != 0) {
            unsigned char v15 = (char)v2; // 0xc2b0e
            unsigned char v16 = v15 >> 8 - v11 | v15 << v11; // 0xc2b0e
            unsigned char v17 = v16 % 2; // 0xc2b0e
            v12 = v11 == 1 ? v16 / 128 != v17 : (v6 & (int64_t)L"\n2") != 0;
            v13 = v17 != 0;
            v14 = v2 & -256 | (int64_t)v16;
        }
        v9 = 16 * (int64_t)((v6 & 16) != 0) | 4 * (int64_t)((v6 & 4) != 0) | 64 * (int64_t)((v6 & 64) != 0) | 128 * (int64_t)((char)v6 < 0) | 256 * (int64_t)((v6 & 256) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | (int64_t)v13 | 2048 * (int64_t)v12 | 2;
        v10 = v14;
    }
    int64_t v18 = v9;
    int64_t v19 = v18; // 0xc2b1d
    int64_t v20 = v10; // 0xc2b1d
    if (v8 == 50) {
        uint16_t v21 = (int16_t)v7 % 32; // 0xc2b2e
        bool v22 = (v18 & (int64_t)L"\n2") != 0; // 0xc2b2e
        bool v23 = v18 % 2 != 0; // 0xc2b2e
        v20 = v10;
        if (v21 != 0) {
            uint16_t v24 = (int16_t)v10; // 0xc2b2e
            uint16_t v25 = v24 >> 16 - v21 | v24 << v21; // 0xc2b2e
            uint16_t v26 = v25 % 2; // 0xc2b2e
            v22 = v21 == 1 ? v25 / 0x8000 != v26 : (v18 & (int64_t)L"\n2") != 0;
            v23 = v26 != 0;
            v20 = v10 & -0x10000 | (int64_t)v25;
        }
        v19 = 16 * (int64_t)((v18 & 16) != 0) | 4 * (int64_t)((v18 & 4) != 0) | 64 * (int64_t)((v18 & 64) != 0) | 128 * (int64_t)((char)v18 < 0) | 256 * (int64_t)((v18 & 256) != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | (int64_t)v23 | 2048 * (int64_t)v22 | 2;
    }
    int64_t v27 = v19;
    int64_t v28 = v27; // 0xc2b39
    int64_t v29 = v20; // 0xc2b39
    if (v8 == 80) {
        uint32_t v30 = (int32_t)v7 % 32; // 0xc2b46
        bool v31 = (v27 & (int64_t)L"\n2") != 0; // 0xc2b46
        bool v32 = v27 % 2 != 0; // 0xc2b46
        v29 = v20;
        if (v30 != 0) {
            uint32_t v33 = (int32_t)v20; // 0xc2b46
            uint32_t v34 = v33 >> 32 - v30 | v33 << v30; // 0xc2b46
            uint32_t v35 = v34 % 2; // 0xc2b46
            v31 = v30 == 1 ? v35 != (int32_t)(v34 < 0) : (v27 & (int64_t)L"\n2") != 0;
            v32 = v35 != 0;
            v29 = v34;
        }
        v28 = 16 * (int64_t)((v27 & 16) != 0) | 4 * (int64_t)((v27 & 4) != 0) | 64 * (int64_t)((v27 & 64) != 0) | 128 * (int64_t)((char)v27 < 0) | 256 * (int64_t)((v27 & 256) != 0) | 512 * (int64_t)((v27 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v27 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v27 & (int64_t)"le") != 0) | (int64_t)v32 | 2048 * (int64_t)v31 | 2;
    }
    int64_t v36 = v29;
    int64_t v37 = v28;
    int64_t v38 = v37; // 0xc2b57
    uint64_t v39 = v36; // 0xc2b57
    if (v8 == 58) {
        uint64_t v40 = v7 % 64; // 0xc2b5e
        bool v41 = (v37 & (int64_t)L"\n2") != 0; // 0xc2b5e
        int64_t v42 = v37 % 2; // 0xc2b5e
        v39 = v36;
        if (v40 != 0) {
            v39 = v36 >> 64 - v40 | v36 << v40;
            v42 = v39 % 2;
            v41 = v40 == 1 ? v39 / 0x8000000000000000 != v42 : (v37 & (int64_t)L"\n2") != 0;
        }
        v38 = 16 * (int64_t)((v37 & 16) != 0) | 4 * (int64_t)((v37 & 4) != 0) | 64 * (int64_t)((v37 & 64) != 0) | 128 * (int64_t)((char)v37 < 0) | 256 * (int64_t)((v37 & 256) != 0) | 512 * (int64_t)((v37 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v37 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v37 & (int64_t)"le") != 0) | 2048 * (int64_t)v41 | (int64_t)(v42 != 0) | 2;
    }
    int64_t * v43 = (int64_t *)(v2 + 113); // 0xc2b8d
    *v43 = v39 - 0x5a4f2ac2;
    *v43 = v39 + 0x1a44e4ef;
    if (*(char *)(*v5 + 2) != 0) {
        uint16_t v44 = *(int16_t *)(*v5 + 3); // 0xc2c55
        *(int64_t *)(v2 + (int64_t)v44) = v38;
    }
    // 0xc2c72
    *v5 = *v5 + 5;
    return result;
}

// Address range: 0xc2d37 - 0xc3406
int64_t function_c2d37(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xc2d37
    int64_t v1; // 0xc2d37
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xc2d8e
    int32_t * v4 = (int32_t *)(v2 + 368); // 0xc2da2
    int32_t v5 = *v3 - 0x3bcc6446 + *v4 ^ 0x50eab96; // 0xc2daf
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 + 96); // 0xc2dca
    *v4 = v5 - *v3;
    *v6 = *v6 + 0x653cf834 ^ 0x2ed4e95;
    int32_t v7 = *v4 + *v3 | 0x4ea692e8; // 0xc2e29
    *v4 = v7;
    int32_t v8 = v7 ^ *v3; // 0xc2e51
    *v4 = v8;
    *v4 = (v8 ^ 0x3b02b16c ^ *v3) + 0x63b77c87;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x2ed4e95;
    *v4 = *v4 | *v3;
    int64_t v9 = v2 + 0x2ed4e95; // 0xc2f50
    int64_t v10 = *v6; // 0xc2f89
    uint64_t v11 = v10 ^ 0x2ed4e95; // 0xc2f9d
    char v12 = *(char *)(v2 + 404); // 0xc2fe9
    int64_t v13 = v9; // 0xc2ff0
    int64_t v14; // 0xc2d37
    bool v15; // 0xc2d37
    if (v12 == 98) {
        unsigned char v16 = (char)v9; // 0xc2ff6
        unsigned char v17 = (char)v11; // 0xc2ff6
        char v18 = v16 - v17; // 0xc2ff6
        int64_t v19 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | (int64_t)(v16 < v17) | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v18 < 0) | 16 * (int64_t)(v16 % 16 - v17 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v18) % 2 == 0) | 2048 * (int64_t)(((v18 ^ v16) & (char)(v11 ^ v9)) < 0) | 2; // bp-8, 0xc2ff9
        v14 = (int64_t)&v19;
        v13 = v9 & -256 | (int64_t)v18;
    }
    int64_t v20 = v14; // 0xc2ffe
    int64_t v21 = v13; // 0xc2ffe
    if (v12 == 50) {
        uint16_t v22 = (int16_t)v13; // 0xc3004
        uint16_t v23 = (int16_t)v11; // 0xc3004
        int16_t v24 = v22 - v23; // 0xc3004
        int64_t v25 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | (int64_t)(v22 < v23) | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 16 * (int64_t)(v22 % 16 - v23 % 16 > 15) | 2048 * (int64_t)(((v24 ^ v22) & (int16_t)(v13 ^ v10)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v24) % 2 == 0) | 2; // bp-16, 0xc3008
        v20 = (int64_t)&v25;
        v21 = v13 & -0x10000 | (int64_t)v24;
    }
    int64_t v26 = v20; // 0xc301a
    int64_t v27 = v21; // 0xc301a
    if (v12 == 80) {
        uint32_t v28 = (int32_t)v21; // 0xc3020
        uint32_t v29 = (int32_t)v11; // 0xc3020
        int32_t v30 = v28 - v29; // 0xc3020
        unsigned char v31 = llvm_ctpop_i8((char)v30); // 0xc3020
        v26 = v20 - 8;
        *(int64_t *)v26 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | (int64_t)(v28 < v29) | 64 * (int64_t)(v30 == 0) | 128 * (int64_t)(v30 < 0) | 16 * (int64_t)(v28 % 16 - v29 % 16 > 15) | 2048 * (int64_t)(((v30 ^ v28) & (int32_t)(v21 ^ v10)) < 0) | 4 * (int64_t)(v31 % 2 == 0) | 2;
        v27 = v30;
    }
    uint64_t v32 = v27;
    int64_t v33 = v26; // 0xc302b
    int64_t v34 = v32; // 0xc302b
    if (v12 == 58) {
        // 0xc3031
        v34 = v32 - v11;
        unsigned char v35 = llvm_ctpop_i8((char)v34); // 0xc3031
        v33 = v26 - 8;
        *(int64_t *)v33 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | (int64_t)(v32 < v11) | 64 * (int64_t)(v34 == 0) | 128 * (int64_t)(v34 < 0) | 16 * (int64_t)(v32 % 16 - v11 % 16 > 15) | 2048 * (int64_t)(((v34 ^ v32) & (v32 ^ v10)) < 0) | 4 * (int64_t)(v35 % 2 == 0) | 2;
    }
    int64_t * v36 = (int64_t *)(v2 + 113); // 0xc306b
    *v36 = v34 - 0x10c2ec5e;
    int64_t * v37 = (int64_t *)(v2 + 10); // 0xc310c
    int64_t v38 = *v37; // 0xc310c
    if (*(char *)(v38 + 4) != 0) {
        uint16_t v39 = *(int16_t *)(v38 + 2); // 0xc31b6
        *(int64_t *)(v2 + (int64_t)v39) = *(int64_t *)v33;
    }
    if ((*v3 & 2) != 0) {
        // 0xc31e8
        *v3 = (*v3 | 0x7daf8b) + 0x54733021;
    }
    // 0xc3228
    *v36 = *v36 + 0x2b07d14d;
    int32_t v40 = *v4; // 0xc33a7
    uint32_t v41 = (v40 ^ (int32_t)*(int16_t *)*v37) - 0x45b1cde1; // 0xc33ad
    *v4 = v41 | v40;
    *v37 = *v37 + 5;
    return *(int64_t *)(v2 + 271) + (int64_t)(v41 % 0x10000);
}
