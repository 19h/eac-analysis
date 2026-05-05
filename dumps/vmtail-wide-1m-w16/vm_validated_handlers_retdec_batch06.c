/*
 * Targeted RetDec C for static-validated VM handler native ranges, batch 6.
 *
 * These handlers already have 100% validated handler-layer transfer models.
 * This artifact keeps native decompiler sidecars for full dispatch-entry
 * coverage and cross-checking against the VM-lifted C pseudocode.
 *
 * Total static-validated handler ranges: 166
 * Batch size: 24
 * Ranges:
 *   0xa2361-0xa2943 entry=208 events=802 span_bytes=1505 insns=311
 *   0x800a1-0x80692 entry=36 events=4 span_bytes=1521 insns=329
 *   0xafa1f-0xb0015 entry=267 events=4 span_bytes=1522 insns=330
 *   0x931d3-0x937dd entry=130 events=5 span_bytes=1545 insns=337
 *   0xa0dca-0xa13e3 entry=201 events=341 span_bytes=1558 insns=331
 *   0xbc9b8-0xbcfd5 entry=330 events=316 span_bytes=1562 insns=328
 *   0x8aa14-0x8b036 entry=88 events=149 span_bytes=1566 insns=337
 *   0xa3fe9-0xa4616 entry=214 events=4 span_bytes=1581 insns=340
 *   0x82820-0x82e83 entry=49 events=4132 span_bytes=1635 insns=357
 *   0x8610e-0x86773 entry=70 events=1629 span_bytes=1637 insns=354
 *   0xa522e-0xa5896 entry=220 events=3576 span_bytes=1637 insns=346
 *   0xba72f-0xbadb2 entry=319 events=1850 span_bytes=1667 insns=368
 *   0x78c77-0x79305 entry=3 events=3434 span_bytes=1678 insns=363
 *   0xa8e1f-0xa94b3 entry=237 events=1537 span_bytes=1682 insns=365
 *   0xc0d7d-0xc1419 entry=348 events=37 span_bytes=1690 insns=375
 *   0x8bd69-0x8c42a entry=94 events=91 span_bytes=1725 insns=377
 *   0xa5889-0xa5f4a entry=221 events=4 span_bytes=1728 insns=368
 *   0x86d43-0x8740a entry=74 events=33 span_bytes=1734 insns=380
 *   0x80685-0x80d87 entry=37 events=2035 span_bytes=1793 insns=396
 *   0xb2661-0xb2dc4 entry=280 events=108 span_bytes=1890 insns=406
 *   0x9f00a-0x9f789 entry=192 events=2339 span_bytes=1919 insns=415
 *   0x937d0-0x93f86 entry=131 events=66 span_bytes=1971 insns=426
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


// Address range: 0x78c77 - 0x792f8
int64_t function_78c77(int64_t a1, int64_t a2, int64_t a3) {
    // 0x78c77
    int64_t v1; // 0x78c77
    int64_t v2 = v1;
    int64_t v3 = v2 + 404; // 0x78c7d
    unsigned char v4 = *(char *)v3; // 0x78c84
    int64_t * v5 = (int64_t *)(v2 + 129); // 0x78c8e
    int32_t * v6 = (int32_t *)(v2 + 35); // 0x78cb5
    int64_t v7 = v2 + 368; // 0x78cc3
    int32_t * v8 = (int32_t *)v7; // 0x78cca
    int32_t v9 = *v8 - *v6 - 0x1c03cc82; // 0x78d10
    *v8 = v9;
    int32_t v10 = v9 - *v6; // 0x78d42
    *v8 = v10;
    uint64_t v11 = v2 + 113; // 0x78d4e
    int64_t * v12 = (int64_t *)v11; // 0x78d55
    *v8 = (v10 | 0x38c49877) - 0x742d9511;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x11946a67;
    int64_t v13 = v2 + 96; // 0x78f1c
    int64_t * v14 = (int64_t *)v13; // 0x78f23
    int64_t v15 = *v14; // 0x78f23
    uint64_t v16 = *v5; // 0x78f5c
    *v14 = v15 + 0x76d1629b;
    int64_t v17 = v16 + v11; // 0x79023
    bool v18; // 0x78c77
    int64_t v19 = 0x4000 * (int64_t)v18 | 1024 * (int64_t)v18 | 512 * (int64_t)v18 | 256 * (int64_t)v18 | (int64_t)(v17 < v11) | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v16 % 16 + v11 % 16 > 15) | 2048 * (int64_t)(((v17 ^ v11) & (v17 ^ v16)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v17) % 2 == 0) | 2; // 0x79026
    *v12 = v15 + 0x7f81dd23;
    *v6 = *v6 ^ 0x1f2b12e0;
    int64_t * v20 = (int64_t *)(v2 + 10); // 0x7914c
    int64_t v21 = *v20; // 0x7914c
    if (*(char *)(v21 + 2) != 0) {
        // 0x79167
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v21 + 3)) = v19;
    }
    int64_t v22 = (char)v1 == 0 ? *v5 + v3 : 0x3d256167;
    int64_t v23 = v1 + 0x11946a67 - *v12; // 0x78d55
    int64_t v24 = ((((int64_t)v4 & a3 & v23) - v7) % 2 ^ 1) & (v23 ^ 144) + (v22 ^ (a3 | 32) | 144) | 18; // 0x78e0e
    int64_t v25 = v24 - (int64_t)&g3 & v2; // 0x79052
    int32_t v26 = *v8 + 0x4ddaed7b; // 0x79196
    *v8 = v26;
    uint16_t v27 = *(int16_t *)*v20; // 0x791dc
    int64_t v28 = v19 + v11; // 0x791f7
    int64_t v29 = v2 + 271; // 0x79200
    int64_t v30 = (v19 - 8 & v28) - v29; // 0x79218
    int64_t v31 = *(int64_t *)v29; // 0x7921e
    *v8 = (v26 ^ (int32_t)v27) + 0x4bc0d288 ^ v26;
    *v20 = *v20 + 5;
    return (v30 + 64 - (int64_t)v27 & (v31 ^ (v25 + 184 + ((((v11 ^ 46) - v3 ^ v2 ^ (v16 ^ 16 ^ (v24 | v13)) - (v17 ^ 4)) + 144 | v25) - 120 ^ 128) ^ 2) - v30) ^ 1) & v31 | ((v28 | 128) ^ 112) + 144;
}

// Address range: 0x800a1 - 0x80685
int64_t function_800a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x800a1
    int64_t v1; // 0x800a1
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x800d8
    int32_t * v4 = (int32_t *)(v2 + 368); // 0x800f6
    *v4 = *v4 + *v3;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x7da25d11;
    int64_t * v5 = (int64_t *)(v2 + 96); // 0x8025d
    *v5 = *v5 - 0x186564dd;
    int32_t v6 = *v3; // 0x80323
    int32_t v7 = ((v6 & 2) == 0 ? 0x73966fc6 : 0x30820186) & v6;
    *v3 = v7;
    *v4 = v7 ^ *v4;
    *v3 = *v3 | 0x1bc4bb94;
    int64_t v8 = v2 + 0x7da25d11; // 0x803a4
    uint64_t v9 = *v5 + 0x7da25d11; // 0x803b8
    char v10 = *(char *)(v2 + 404); // 0x803c8
    int64_t v11 = v8; // 0x803d6
    int64_t v12; // 0x800a1
    bool v13; // 0x800a1
    if (v10 == 98) {
        char v14 = v9 | v8; // 0x803dc
        int64_t v15 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0) | 2; // bp-8, 0x803de
        v11 = v9 % 256 | v8;
        v12 = (int64_t)&v15;
    }
    // 0x803df
    *v4 = *v4 ^ 0x72d0ef43;
    int64_t v16 = v11; // 0x803e9
    int64_t v17 = v12; // 0x803e9
    if (v10 == 50) {
        int64_t v18 = v11 | v9;
        int16_t v19 = v18; // 0x803ef
        int64_t v20 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v18) % 2 == 0) | 2; // bp-16, 0x803f2
        v16 = v11 | v9 % 0x10000;
        v17 = (int64_t)&v20;
    }
    int64_t v21 = v16; // 0x803f7
    int64_t v22 = v17; // 0x803f7
    if (v10 == 80) {
        int64_t v23 = v16 | v9;
        int32_t v24 = v23; // 0x803fd
        unsigned char v25 = llvm_ctpop_i8((char)v23); // 0x803fd
        v22 = v17 - 8;
        *(int64_t *)v22 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 4 * (int64_t)(v25 % 2 == 0) | 2;
        v21 = v23 & 0xffffffff;
    }
    int64_t v26 = v21; // 0x80404
    int64_t v27 = v22; // 0x80404
    if (v10 == 58) {
        // 0x8040a
        v26 = v21 | v9;
        unsigned char v28 = llvm_ctpop_i8((char)v26); // 0x8040a
        v27 = v22 - 8;
        *(int64_t *)v27 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
    }
    int64_t * v29 = (int64_t *)(v2 + 113); // 0x8041f
    *v29 = v26 ^ 0x4b75fe60;
    *v4 = *v4 | 0x7af5a860;
    *v29 = (*v29 ^ 0x4b75fe60) + 0x1a44e4ef;
    int64_t * v30 = (int64_t *)(v2 + 10); // 0x8049a
    int64_t v31 = *v30; // 0x8049a
    int64_t v32 = v31; // 0x804d8
    if (*(char *)(v31 + 2) != 0) {
        uint16_t v33 = *(int16_t *)(v31 + 3); // 0x8053f
        *(int64_t *)(v2 + (int64_t)v33) = *(int64_t *)v27;
        v32 = *v30;
    }
    int32_t v34 = *v4; // 0x8061c
    *v4 = (int32_t)*(int16_t *)v32 - v34 ^ v34;
    *v30 = *v30 + 5;
    return 0;
}

// Address range: 0x80685 - 0x80d79
int64_t function_80685(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x80685
    int64_t v1; // 0x80685
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x80699
    int32_t * v4 = (int32_t *)(v2 + 368); // 0x806b1
    *v4 = -0x504fc3d - *v3 + *v4;
    int64_t * v5 = (int64_t *)(v2 + 96); // 0x806e3
    *v5 = *v5 + 0x360dca36;
    int32_t v6 = *v3; // 0x80751
    if ((v6 & 2) != 0) {
        // 0x80764
        *v3 = (v6 & 0x714eea75) + 0x53097984;
    }
    // 0x80786
    *(int64_t *)v2 = v2 ^ 0x228c9a27;
    int64_t v7 = v2 ^ 0x2f2f2dfe; // 0x80834
    uint64_t v8 = *v5 + 0x2f2f2dfe; // 0x80879
    char v9 = *(char *)(v2 + 404); // 0x808bc
    int64_t v10 = v7; // 0x808c1
    int64_t v11; // 0x80685
    bool v12; // 0x80685
    if (v9 == 98) {
        unsigned char v13 = (char)v7; // 0x808c7
        unsigned char v14 = (char)v8; // 0x808c7
        unsigned char v15 = v14 + v13; // 0x808c7
        int64_t v16 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v15 < v13) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 16 * (int64_t)(v14 % 16 + v13 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v15) % 2 == 0) | 2048 * (int64_t)(((v15 ^ v13) & (v15 ^ v14)) < 0) | 2; // bp-8, 0x808ca
        v11 = (int64_t)&v16;
        v10 = v7 & -256 | (int64_t)v15;
    }
    int64_t v17 = v11; // 0x808d1
    int64_t v18 = v10; // 0x808d1
    if (v9 == 50) {
        uint16_t v19 = (int16_t)v10; // 0x808d7
        uint16_t v20 = (int16_t)v8; // 0x808d7
        uint16_t v21 = v19 + v20; // 0x808d7
        int64_t v22 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v21 < v19) | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(v19 % 16 + v20 % 16 > 15) | 2048 * (int64_t)(((v21 ^ v19) & (v21 ^ v20)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v21) % 2 == 0) | 2; // bp-16, 0x808db
        v17 = (int64_t)&v22;
        v18 = v10 & -0x10000 | (int64_t)v21;
    }
    int64_t v23 = v17; // 0x808ef
    int64_t v24 = v18; // 0x808ef
    if (v9 == 80) {
        uint32_t v25 = (int32_t)v18; // 0x808f5
        uint32_t v26 = (int32_t)v8; // 0x808f5
        uint32_t v27 = v25 + v26; // 0x808f5
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0x808f5
        v23 = v17 - 8;
        *(int64_t *)v23 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v27 < v25) | 64 * (int64_t)(v27 == 0) | 128 * (int64_t)(v27 < 0) | 16 * (int64_t)(v25 % 16 + v26 % 16 > 15) | 2048 * (int64_t)(((v27 ^ v25) & (v27 ^ v26)) < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
        v24 = v27;
    }
    uint64_t v29 = v24;
    int64_t * v30; // 0x80685
    int64_t v31; // 0x80685
    if (v9 != 58) {
        // 0x8090a
        v30 = (int64_t *)v23;
        v31 = v29;
    } else {
        int64_t v32 = v29 + v8; // 0x80913
        unsigned char v33 = llvm_ctpop_i8((char)v32); // 0x80913
        int64_t * v34 = (int64_t *)(v23 - 8);
        *v34 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v32 < v29) | 64 * (int64_t)(v32 == 0) | 128 * (int64_t)(v32 < 0) | 16 * (int64_t)(v29 % 16 + v8 % 16 > 15) | 2048 * (int64_t)(((v32 ^ v29) & (v32 ^ v8)) < 0) | 4 * (int64_t)(v33 % 2 == 0) | 2;
        v30 = v34;
        v31 = v32;
    }
    int64_t * v35 = (int64_t *)(v2 + 113); // 0x8093e
    *v35 = v31 ^ 0x6dde0f49;
    *v3 = *v3 ^ (*v4 | 0x44a01) | 0xedb847a;
    *v4 = *v4 - 0x4eca0e49;
    int64_t * v36 = (int64_t *)(v2 + 10); // 0x80a93
    int64_t v37 = *v36; // 0x80a93
    if (*(char *)(v37 + 2) != 0) {
        // 0x80acf
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v37 + 3)) = *v30;
    }
    // 0x80b31
    *v35 = (*v35 ^ 0x6dde0f49) + 0x1a44e4ef;
    int64_t v38 = *(int64_t *)(v2 + 271); // 0x80c54
    int32_t v39 = *v4; // 0x80cd7
    int32_t v40 = (int32_t)*(int16_t *)*v36 ^ 0x384e1c86; // 0x80cd7
    uint64_t v41 = (int64_t)(v40 ^ v39); // 0x80cf1
    *v4 = v40 | v39;
    *v36 = *v36 + 5;
    return v41 % 0x10000 + v38 + (v41 | (int64_t)&g1) ^ (v41 | 64);
}

// Address range: 0x82820 - 0x82e76
int64_t function_82820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x82820
    int64_t v1; // 0x82820
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0x3ff27801;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x82925
    int32_t * v4 = (int32_t *)(v2 + 368); // 0x82932
    int32_t v5 = *v4 & *v3; // 0x82932
    *v4 = v5;
    int32_t v6 = v5 + 0x206e91eb + *v3; // 0x829cd
    *v4 = v6;
    *v3 = v6 ^ 0x702de876 ^ *v3;
    uint64_t v7 = v2 + 96; // 0x82a30
    int64_t * v8 = (int64_t *)v7; // 0x82a40
    int64_t v9 = *v8; // 0x82a40
    *v8 = v9 + 0x653cf834;
    int64_t * v10 = (int64_t *)(v2 + 113); // 0x82ac6
    *v10 = v9 + 0x75cda582;
    int64_t * v11 = (int64_t *)(v2 + 10); // 0x82b67
    *v10 = v9 + 0x7f81dd23;
    if (*(char *)*v11 != 0) {
        uint64_t v12 = v9 + 0x653cf835; // 0x82a80
        int64_t v13 = v12 + v7; // 0x82ac9
        unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x82ac9
        uint16_t v15 = *(int16_t *)(*v11 + 3); // 0x82c49
        bool v16; // 0x82820
        *(int64_t *)(v2 + (int64_t)v15) = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v13 < v7) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v12 % 16 + v7 % 16 > 15) | 2048 * (int64_t)(((v13 ^ v7) & (v13 ^ v12)) < 0) | 4 * (int64_t)(v14 % 2 == 0) | 2;
    }
    // 0x82cd6
    *v3 = *v4 + 0x7a4ca08 + *v3;
    int64_t v17 = *(int64_t *)(v2 + 271); // 0x82d7c
    int32_t v18 = (int32_t)*(int16_t *)(*v11 + 1); // 0x82dde
    int32_t v19 = *v4; // 0x82dde
    *v4 = -0x55b8ef8d - v18;
    int64_t v20 = *(int64_t *)(((int64_t)(v18 + 0x55b8ef8d + v19) & (int64_t)&g3) + v17); // 0x82e44
    *v11 = *v11 + 5;
    return -16 - (v20 | v2 ^ (int64_t)&g3 ^ v17);
}

// Address range: 0x82e7b - 0x82e7e
int64_t function_82e7b(void) {
    // 0x82e7b
    int64_t result; // 0x82e7b
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

// Address range: 0x86d43 - 0x873fc
int64_t function_86d43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x86d43
    int64_t v1; // 0x86d43
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0x86d64
    int32_t * v4 = (int32_t *)(v2 + 35); // 0x86d76
    int32_t v5 = (*v4 & *v3 - 0x7af5a4e2) - 0x619b65dc; // 0x86d84
    *v4 = v5;
    int32_t v6 = *v3 - v5; // 0x86da1
    *v3 = v6 ^ 0x65dcaffc;
    *v4 = (*v4 - (v6 ^ 0xf0347df) ^ 0x1a77c224) + 0x403a8d37;
    *v3 = *v3 + 0x33d7fc12;
    int64_t * v7 = (int64_t *)(v2 + 96); // 0x86ed3
    *v7 = *v7 + 0xc66e6ddb;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x613175a7;
    int64_t v8 = v2 + 0x613175a7; // 0x86fb6
    uint64_t v9 = *v7 - 0x613175a7; // 0x8707a
    char v10 = *(char *)(v2 + 404); // 0x870ae
    int64_t v11 = v8; // 0x870b5
    int64_t v12; // 0x86d43
    bool v13; // 0x86d43
    if (v10 == 98) {
        char v14 = v9 ^ v8; // 0x870bb
        int64_t v15 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0) | 2; // bp-8, 0x870be
        v12 = (int64_t)&v15;
        v11 = v9 % 256 ^ v8;
    }
    int64_t v16 = v12; // 0x870cd
    int64_t v17 = v11; // 0x870cd
    if (v10 == 50) {
        int64_t v18 = v11 ^ v9;
        int16_t v19 = v18; // 0x870d3
        int64_t v20 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v18) % 2 == 0) | 2; // bp-16, 0x870d7
        v16 = (int64_t)&v20;
        v17 = v11 ^ v9 % 0x10000;
    }
    int64_t v21 = v16; // 0x870f3
    int64_t v22 = v17; // 0x870f3
    if (v10 == 80) {
        int64_t v23 = v17 ^ v9;
        int32_t v24 = v23; // 0x870f9
        unsigned char v25 = llvm_ctpop_i8((char)v23); // 0x870f9
        v21 = v16 - 8;
        *(int64_t *)v21 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 4 * (int64_t)(v25 % 2 == 0) | 2;
        v22 = v23 & 0xffffffff;
    }
    int64_t v26 = v21; // 0x87104
    int64_t v27 = v22; // 0x87104
    if (v10 == 58) {
        // 0x8710a
        v27 = v22 ^ v9;
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0x8710a
        v26 = v21 - 8;
        *(int64_t *)v26 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v27 == 0) | 128 * (int64_t)(v27 < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
    }
    int64_t * v29 = (int64_t *)(v2 + 113); // 0x87161
    *v29 = v27 + 0x4dd57b3f;
    int64_t * v30 = (int64_t *)(v2 + 10); // 0x8719e
    int64_t v31 = *v30; // 0x8719e
    if (*(char *)(v31 + 4) != 0) {
        uint16_t v32 = *(int16_t *)(v31 + 2); // 0x87231
        *(int64_t *)(v2 + (int64_t)v32) = *(int64_t *)v26;
    }
    // 0x87251
    *v29 = v27 + 0x1a44e4ef;
    int32_t v33 = *v4; // 0x872b3
    if ((v33 & 2) != 0) {
        // 0x872c8
        *v4 = v33 & 0x28e98401 | 0x53143bba;
    }
    int64_t v34 = *(int64_t *)(v2 + 271); // 0x8731e
    int64_t v35 = *v30; // 0x8734c
    uint16_t v36 = *(int16_t *)v35; // 0x87362
    int32_t v37 = *v3; // 0x8738d
    *v30 = v35 + 5;
    return ((int64_t)((int32_t)v36 - v37) & (int64_t)&g3) + v34;
}

// Address range: 0x8aa14 - 0x8b028
int64_t function_8aa14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x8aa14
    int64_t v1; // 0x8aa14
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x8aa63
    *v3 = *v3 + 0x3691667b;
    int32_t * v4 = (int32_t *)(v2 + 368); // 0x8ab0d
    *v4 = *v4 | *(int32_t *)(v2 + 35);
    *(int64_t *)v2 = v2 ^ 0x23082660;
    int64_t v5 = v2 ^ 0x2eab91b9; // 0x8ac35
    uint64_t v6 = *v3 + 0x2eab91b9; // 0x8ac90
    char v7 = *(char *)(v2 + 404); // 0x8aced
    int64_t v8 = v5; // 0x8acf1
    int64_t v9; // 0x8aa14
    bool v10; // 0x8aa14
    if (v7 == 98) {
        char v11 = v6 ^ v5; // 0x8acf7
        int64_t v12 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v11 == 0) | 128 * (int64_t)(v11 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v11) % 2 == 0) | 2; // bp-8, 0x8acfa
        v9 = (int64_t)&v12;
        v8 = v6 % 256 ^ v5;
    }
    int64_t v13 = v9; // 0x8ad18
    int64_t v14 = v8; // 0x8ad18
    if (v7 == 50) {
        int64_t v15 = v8 ^ v6;
        int16_t v16 = v15; // 0x8ad1e
        int64_t v17 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v16 == 0) | 128 * (int64_t)(v16 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v15) % 2 == 0) | 2; // bp-16, 0x8ad22
        v13 = (int64_t)&v17;
        v14 = v8 ^ v6 % 0x10000;
    }
    int64_t v18 = v13; // 0x8ad2e
    int64_t v19 = v14; // 0x8ad2e
    if (v7 == 80) {
        int64_t v20 = v14 ^ v6;
        int32_t v21 = v20; // 0x8ad34
        unsigned char v22 = llvm_ctpop_i8((char)v20); // 0x8ad34
        v18 = v13 - 8;
        *(int64_t *)v18 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 4 * (int64_t)(v22 % 2 == 0) | 2;
        v19 = v20 & 0xffffffff;
    }
    int64_t v23 = v18; // 0x8ad3a
    int64_t v24 = v19; // 0x8ad3a
    if (v7 == 58) {
        // 0x8ad40
        v24 = v19 ^ v6;
        unsigned char v25 = llvm_ctpop_i8((char)v24); // 0x8ad40
        v23 = v18 - 8;
        *(int64_t *)v23 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 4 * (int64_t)(v25 % 2 == 0) | 2;
    }
    int64_t * v26 = (int64_t *)(v2 + 113); // 0x8ad78
    *v26 = v24 ^ 0x5b525970;
    *v4 = *v4 - 0x1c9cfcea;
    *v26 = v24 + 0x1a44e4ef;
    int64_t * v27 = (int64_t *)(v2 + 10); // 0x8ae92
    int64_t v28 = *v27; // 0x8ae92
    int64_t v29 = v28; // 0x8aeac
    if (*(char *)v28 != 0) {
        uint16_t v30 = *(int16_t *)(v28 + 3); // 0x8aecd
        *(int64_t *)(v2 + (int64_t)v30) = *(int64_t *)v23;
        v29 = *v27;
    }
    int32_t v31 = *v4; // 0x8af7a
    *v4 = v31 ^ 0x415462f5 ^ v31 + (int32_t)*(int16_t *)(v29 + 1);
    *v27 = *v27 + 5;
    return -0x80000000;
}

// Address range: 0x8b02d - 0x8b030
int64_t function_8b02d(void) {
    // 0x8b02d
    int64_t result; // 0x8b02d
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

// Address range: 0x931d3 - 0x937d0
int64_t function_931d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x931d3
    int64_t v1; // 0x931d3
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x9324a
    int64_t result = v2 + 368; // 0x93275
    int32_t * v4 = (int32_t *)result; // 0x9328a
    int32_t * v5 = (int32_t *)(v2 + 35); // 0x932c9
    *v5 = -0x42718c2a - *v4 + *v5;
    *v3 = *v3 + 0x653cf834;
    *v4 = *v4 | *v5;
    *(int64_t *)v2 = v2 ^ 0x712f4f24;
    int32_t v6 = *v5; // 0x933b2
    if ((v6 & 2) != 0) {
        // 0x933db
        *v5 = v6 - 0x17aaf8d6;
    }
    int64_t v7 = v2 ^ 0x7c8cf8fd; // 0x93486
    uint64_t v8 = *v3; // 0x934cb
    char v9 = *(char *)(v2 + 404); // 0x93502
    int64_t v10 = v7; // 0x93509
    int64_t v11; // 0x931d3
    bool v12; // 0x931d3
    if (v9 == 98) {
        unsigned char v13 = (char)v7; // 0x9350f
        unsigned char v14 = (char)v8; // 0x9350f
        char v15 = v13 - v14; // 0x9350f
        int64_t v16 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v13 < v14) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 16 * (int64_t)(v13 % 16 - v14 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v15) % 2 == 0) | 2048 * (int64_t)(((v15 ^ v13) & (char)(v8 ^ v7)) < 0) | 2; // bp-8, 0x93512
        v10 = v7 & -256 | (int64_t)v15;
        v11 = (int64_t)&v16;
    }
    int64_t v17 = v10; // 0x93524
    int64_t v18 = v11; // 0x93524
    if (v9 == 50) {
        uint16_t v19 = (int16_t)v10; // 0x9352a
        uint16_t v20 = (int16_t)v8; // 0x9352a
        int16_t v21 = v19 - v20; // 0x9352a
        int64_t v22 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v19 < v20) | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(v19 % 16 - v20 % 16 > 15) | 2048 * (int64_t)(((v21 ^ v19) & (int16_t)(v10 ^ v8)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v21) % 2 == 0) | 2; // bp-16, 0x9352e
        v17 = v10 & -0x10000 | (int64_t)v21;
        v18 = (int64_t)&v22;
    }
    int64_t v23 = v17; // 0x93546
    int64_t v24 = v18; // 0x93546
    if (v9 == 80) {
        uint32_t v25 = (int32_t)v17; // 0x9354c
        uint32_t v26 = (int32_t)v8; // 0x9354c
        int32_t v27 = v25 - v26; // 0x9354c
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0x9354c
        v24 = v18 - 8;
        *(int64_t *)v24 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v25 < v26) | 64 * (int64_t)(v27 == 0) | 128 * (int64_t)(v27 < 0) | 16 * (int64_t)(v25 % 16 - v26 % 16 > 15) | 2048 * (int64_t)(((v27 ^ v25) & (int32_t)(v17 ^ v8)) < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
        v23 = v27;
    }
    uint64_t v29 = v23;
    int64_t v30 = v29; // 0x9355b
    int64_t v31 = v24; // 0x9355b
    if (v9 == 58) {
        // 0x93561
        v30 = v29 - v8;
        unsigned char v32 = llvm_ctpop_i8((char)v30); // 0x93561
        v31 = v24 - 8;
        *(int64_t *)v31 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v29 < v8) | 64 * (int64_t)(v30 == 0) | 128 * (int64_t)(v30 < 0) | 16 * (int64_t)(v29 % 16 - v8 % 16 > 15) | 2048 * (int64_t)(((v30 ^ v29) & (v29 ^ v8)) < 0) | 4 * (int64_t)(v32 % 2 == 0) | 2;
    }
    int64_t * v33 = (int64_t *)(v2 + 113); // 0x935a3
    *v33 = v30;
    *v4 = *v4 + (*v5 & 0x3a044344);
    int64_t * v34 = (int64_t *)(v2 + 10); // 0x935f2
    int64_t v35 = *v34; // 0x935f2
    if (*(char *)(v35 + 4) != 0) {
        uint16_t v36 = *(int16_t *)(v35 + 2); // 0x93632
        *(int64_t *)(v2 + (int64_t)v36) = *(int64_t *)v31;
    }
    // 0x9363c
    *v33 = *v33 + 0x1a44e4ef;
    int32_t v37 = *v4; // 0x9373c
    *v4 = (int32_t)*(int16_t *)*v34 - 0x5121ff33 + v37 | v37;
    *v34 = *v34 + 5;
    return result;
}

// Address range: 0x937d0 - 0x93f79
int64_t function_937d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x937d0
    int64_t v1; // 0x937d0
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x9380d
    *v3 = *v3 + 0x97570c14;
    *(int64_t *)v2 = v2 ^ 0x3fb9a439;
    int32_t * v4 = (int32_t *)(v2 + 35); // 0x93907
    int32_t v5 = *v4; // 0x93907
    if ((v5 & 2) != 0) {
        // 0x93960
        *v4 = v5 + 0x565d9ac9;
    }
    int64_t v6 = v2 ^ 0x321a13e0; // 0x9390a
    uint64_t v7 = *v3 - 0x321a13e0; // 0x939fc
    char v8 = *(char *)(v2 + 404); // 0x93a38
    int64_t v9 = v6; // 0x93a40
    int64_t v10; // 0x937d0
    bool v11; // 0x937d0
    if (v8 == 98) {
        char v12 = v7 ^ v6; // 0x93a46
        int64_t v13 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v12) % 2 == 0) | 2; // bp-8, 0x93a49
        v9 = v7 % 256 ^ v6;
        v10 = (int64_t)&v13;
    }
    int64_t v14 = v9; // 0x93a65
    int64_t v15 = v10; // 0x93a65
    if (v8 == 50) {
        int64_t v16 = v9 ^ v7;
        int16_t v17 = v16; // 0x93a6b
        int64_t v18 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v16) % 2 == 0) | 2; // bp-16, 0x93a6f
        v14 = v9 ^ v7 % 0x10000;
        v15 = (int64_t)&v18;
    }
    int64_t v19 = v14; // 0x93a74
    int64_t v20 = v15; // 0x93a74
    if (v8 == 80) {
        int64_t v21 = v14 ^ v7;
        int32_t v22 = v21; // 0x93a7a
        unsigned char v23 = llvm_ctpop_i8((char)v21); // 0x93a7a
        v20 = v15 - 8;
        *(int64_t *)v20 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v22 == 0) | 128 * (int64_t)(v22 < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
        v19 = v21 & 0xffffffff;
    }
    int64_t v24 = v19; // 0x93a99
    int64_t v25 = v20; // 0x93a99
    if (v8 == 58) {
        // 0x93a9f
        v24 = v19 ^ v7;
        unsigned char v26 = llvm_ctpop_i8((char)v24); // 0x93a9f
        v25 = v20 - 8;
        *(int64_t *)v25 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 4 * (int64_t)(v26 % 2 == 0) | 2;
    }
    int64_t * v27 = (int64_t *)(v2 + 113); // 0x93af1
    *v27 = v24;
    int64_t v28 = v2 + 368; // 0x93af7
    int32_t * v29 = (int32_t *)v28; // 0x93afe
    int32_t v30 = *v29 | 0x8fb57c3; // 0x93afe
    *v29 = v30;
    *v4 = -0x4674713d - v30 + *v4 ^ 0x4382f497;
    int32_t v31 = *v29 - 0x45a18ca4; // 0x93bae
    *v29 = v31;
    int32_t v32 = *v4; // 0x93bbf
    int32_t v33 = v31; // 0x93bd0
    int32_t v34 = v32; // 0x93bd0
    if ((v32 & 2) != 0) {
        // 0x93bd6
        v34 = v32 - 0x95703a1 ^ 0xea909d9;
        *v4 = v34;
        v33 = *v29;
    }
    // 0x93bf6
    *v29 = v34 | v33;
    *v27 = *v27 + 0x1a44e4ef;
    int64_t * v35 = (int64_t *)(v2 + 10); // 0x93c7e
    int64_t v36 = *v35; // 0x93c7e
    if (*(char *)v36 != 0) {
        uint16_t v37 = *(int16_t *)(v36 + 3); // 0x93d5e
        *(int64_t *)(v2 + (int64_t)v37) = *(int64_t *)v25;
    }
    int32_t v38 = *v4; // 0x93d92
    int32_t v39 = v38; // 0x93da3
    if ((v38 & 2) != 0) {
        // 0x93da9
        v39 = (v38 ^ 0x7099ef27) - 0x248dd823;
        *v4 = v39;
    }
    int32_t v40 = *v29 - v39; // 0x93de3
    *v29 = v40;
    int32_t v41 = v40 - *v4; // 0x93e1f
    *v29 = v41;
    int32_t v42 = *v4; // 0x93e2c
    int32_t v43 = v41; // 0x93e3d
    if ((v42 & 2) != 0) {
        // 0x93e43
        *v4 = v42 - 0x72422239;
        v43 = *v29;
    }
    int32_t v44 = v43; // 0x93eda
    int64_t v45 = *v35 + 1; // 0x93ea0
    int64_t v46 = v45 ^ (int64_t)&g1; // 0x93eae
    int64_t v47 = v46 & v28; // 0x93ecd
    *v29 = v44 - (v44 + (int32_t)*(int16_t *)v45 ^ 0x1d802c44);
    *v35 = *v35 + 5;
    return (v46 ^ v28) - v47 + (v47 ^ v28);
}

// Address range: 0x9f00a - 0x9f77c
int64_t function_9f00a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x9f00a
    int64_t v1; // 0x9f00a
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x9f014
    int64_t v4 = v2 + 368; // 0x9f01a
    int32_t * v5 = (int32_t *)v4; // 0x9f021
    *v5 = *v5 + *v3;
    int64_t * v6 = (int64_t *)(v2 + 96); // 0x9f02e
    *v6 = *v6 + 0x653cf834 ^ 0x3bd13851;
    int32_t v7 = *v3 + (*v5 ^ 0x5d641cd7); // 0x9f09e
    *v3 = (v7 & 2) == 0 ? v7 : (v7 | 0x76a1e6e7) ^ 0x1ea5bfdc;
    *(int64_t *)v2 = v2 ^ 0x36728f88;
    int32_t v8 = *v3; // 0x9f155
    if ((v8 & 2) != 0) {
        // 0x9f169
        *v3 = v8 & 0x9422031 | 0x563159ce;
    }
    int64_t v9 = v2 ^ 0x3bd13851; // 0x9f234
    int64_t v10 = *v6; // 0x9f262
    uint64_t v11 = v10 ^ 0x3bd13851; // 0x9f276
    char * v12 = (char *)(v2 + 404); // 0x9f2a1
    char v13 = *v12; // 0x9f2a1
    int64_t v14 = v9; // 0x9f2a8
    int64_t v15; // 0x9f00a
    bool v16; // 0x9f00a
    if (v13 == 98) {
        unsigned char v17 = (char)v9; // 0x9f2ae
        unsigned char v18 = (char)v11; // 0x9f2ae
        unsigned char v19 = v18 + v17; // 0x9f2ae
        int64_t v20 = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v19 < v17) | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(v18 % 16 + v17 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v19) % 2 == 0) | 2048 * (int64_t)(((v19 ^ v17) & (v19 ^ v18)) < 0) | 2; // bp-8, 0x9f2b1
        v15 = (int64_t)&v20;
        v14 = v9 & -256 | (int64_t)v19;
    }
    int64_t v21 = v15; // 0x9f2ce
    int64_t v22 = v14; // 0x9f2ce
    if (v13 == 50) {
        uint16_t v23 = (int16_t)v14; // 0x9f2d4
        uint16_t v24 = (int16_t)v11; // 0x9f2d4
        uint16_t v25 = v23 + v24; // 0x9f2d4
        int64_t v26 = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v25 < v23) | 64 * (int64_t)(v25 == 0) | 128 * (int64_t)(v25 < 0) | 16 * (int64_t)(v23 % 16 + v24 % 16 > 15) | 2048 * (int64_t)(((v25 ^ v23) & (v25 ^ v24)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v25) % 2 == 0) | 2; // bp-16, 0x9f2d8
        v21 = (int64_t)&v26;
        v22 = v14 & -0x10000 | (int64_t)v25;
    }
    int64_t v27 = v21; // 0x9f2ea
    int64_t v28 = v22; // 0x9f2ea
    if (v13 == 80) {
        uint32_t v29 = (int32_t)v22; // 0x9f2f0
        uint32_t v30 = (int32_t)v11; // 0x9f2f0
        uint32_t v31 = v29 + v30; // 0x9f2f0
        unsigned char v32 = llvm_ctpop_i8((char)v31); // 0x9f2f0
        v27 = v21 - 8;
        *(int64_t *)v27 = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v31 < v29) | 64 * (int64_t)(v31 == 0) | 128 * (int64_t)(v31 < 0) | 16 * (int64_t)(v29 % 16 + v30 % 16 > 15) | 2048 * (int64_t)(((v31 ^ v29) & (v31 ^ v30)) < 0) | 4 * (int64_t)(v32 % 2 == 0) | 2;
        v28 = v31;
    }
    uint64_t v33 = v28;
    int64_t v34 = v27; // 0x9f309
    int64_t v35 = v33; // 0x9f309
    if (v13 == 58) {
        // 0x9f30f
        v35 = v33 + v11;
        unsigned char v36 = llvm_ctpop_i8((char)v35); // 0x9f30f
        v34 = v27 - 8;
        *(int64_t *)v34 = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v35 < v33) | 64 * (int64_t)(v35 == 0) | 128 * (int64_t)(v35 < 0) | 16 * (int64_t)(v33 % 16 + v11 % 16 > 15) | 2048 * (int64_t)(((v35 ^ v33) & (v35 ^ v10)) < 0) | 4 * (int64_t)(v36 % 2 == 0) | 2;
    }
    int64_t * v37 = (int64_t *)(v2 + 113); // 0x9f374
    *v37 = v35 ^ 0x68dc880c;
    *v5 = *v5 + *v3;
    unsigned char v38 = *v12; // 0x9f3dc
    int64_t v39 = v2 + 10; // 0x9f43c
    int64_t * v40 = (int64_t *)v39; // 0x9f4b0
    int64_t v41 = *v40; // 0x9f4b0
    if (*(char *)(v41 + 4) != 0) {
        uint16_t v42 = *(int16_t *)(v41 + 2); // 0x9f591
        *(int64_t *)(v2 + (int64_t)v42) = *(int64_t *)v34;
    }
    // 0x9f5c7
    *v37 = (*v37 ^ 0x68dc880c) + 0x1a44e4ef;
    int32_t v43 = *v5 + *v3; // 0x9f617
    *v5 = v43;
    int64_t v44 = *(int64_t *)(v2 + 271); // 0x9f6a2
    uint32_t v45 = v43 ^ (int32_t)*(int16_t *)*v40; // 0x9f6e6
    int64_t v46 = v45; // 0x9f6e6
    *v5 = v43 - v45;
    *v40 = *v40 + 5;
    return -367 - v2 - (v46 | 2 * (int64_t)&g2) + (v44 & v46) ^ ((2 * ((v39 & (int64_t)&g1 & v4 - (v2 & 0x7fffffffffffff00 | (int64_t)v38)) + (int64_t)&g1 + 120) & (int64_t)&g3) - 32 + v46 | 32);
}

// Address range: 0x9f782 - 0x9f783
int64_t function_9f782(int64_t a1) {
    // 0x9f782
    int64_t result; // 0x9f782
    return result;
}

// Address range: 0xa0dca - 0xa13d6
int64_t function_a0dca(int64_t a1, int64_t a2, int64_t a3) {
    // 0xa0dca
    int64_t v1; // 0xa0dca
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xa0dd4
    int32_t * v4 = (int32_t *)(v2 + 368); // 0xa0de8
    int32_t v5 = *v3 ^ 0x47bdc7f6 ^ *v4; // 0xa0df5
    *v4 = v5;
    *v4 = *v3 & v5 ^ 0x71fea721;
    *(int64_t *)v2 = v2 ^ 0x40e9d4e3;
    int32_t v6 = *v4 ^ *v3 & 0x30539483 | 0x4f2c497c; // 0xa0f7a
    *v4 = v6;
    int64_t * v7 = (int64_t *)(v2 + 96); // 0xa0fc5
    *v7 = *v7 + 0xb2875b6e;
    *v3 = *v3 & v6;
    int64_t v8 = v2 ^ 0x4d4a633a; // 0xa1061
    *v4 = *v4 | 0x6499103;
    uint64_t v9 = *v7 - 0x4d4a633a; // 0xa1093
    char v10 = *(char *)(v2 + 404); // 0xa10c6
    int64_t v11 = v8; // 0xa10cd
    int64_t v12; // 0xa0dca
    bool v13; // 0xa0dca
    if (v10 == 98) {
        char v14 = v9 ^ v8; // 0xa10d3
        int64_t v15 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0) | 2; // bp-8, 0xa10d6
        v12 = (int64_t)&v15;
        v11 = v9 % 256 ^ v8;
    }
    int64_t v16 = v12; // 0xa10e7
    int64_t v17 = v11; // 0xa10e7
    if (v10 == 50) {
        int64_t v18 = v11 ^ v9;
        int16_t v19 = v18; // 0xa10ed
        int64_t v20 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v18) % 2 == 0) | 2; // bp-16, 0xa10f1
        v16 = (int64_t)&v20;
        v17 = v11 ^ v9 % 0x10000;
    }
    int64_t v21 = v16; // 0xa10f6
    int64_t v22 = v17; // 0xa10f6
    if (v10 == 80) {
        int64_t v23 = v17 ^ v9;
        int32_t v24 = v23; // 0xa10fc
        unsigned char v25 = llvm_ctpop_i8((char)v23); // 0xa10fc
        v21 = v16 - 8;
        *(int64_t *)v21 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 4 * (int64_t)(v25 % 2 == 0) | 2;
        v22 = v23 & 0xffffffff;
    }
    int64_t v26 = v21; // 0xa1117
    int64_t v27 = v22; // 0xa1117
    if (v10 == 58) {
        // 0xa111d
        v27 = v22 ^ v9;
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0xa111d
        v26 = v21 - 8;
        *(int64_t *)v26 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v27 == 0) | 128 * (int64_t)(v27 < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
    }
    int64_t * v29 = (int64_t *)(v2 + 113); // 0xa1160
    *v29 = v27 - 0x2d367fd5;
    int32_t v30 = *v3; // 0xa1181
    if ((v30 & 2) != 0) {
        // 0xa1196
        *v3 = v30 - 0x42e1664b;
    }
    // 0xa11b8
    *v29 = v27 + 0x1a44e4ef;
    int32_t v31 = (*v4 & *v3) - 0x7e894c58; // 0xa120c
    *v4 = v31;
    int64_t * v32 = (int64_t *)(v2 + 10); // 0xa122c
    int64_t v33 = *v32; // 0xa122c
    int32_t v34 = v31; // 0xa124a
    int64_t v35 = v33; // 0xa124a
    if (*(char *)(v33 + 4) != 0) {
        // 0xa1250
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v33) = *(int64_t *)v26;
        v34 = *v4;
        v35 = *v32;
    }
    // 0xa1274
    *v4 = v34 + 0x289c039 - (int32_t)*(int16_t *)(v35 + 2);
    *v32 = *v32 + 5;
    return ((int64_t)&g1 & (int64_t)L"\n2") - 480;
}

// Address range: 0xa2361 - 0xa2935
int64_t function_a2361(void) {
    // 0xa2361
    int64_t v1; // 0xa2361
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xa236b
    int32_t v3 = *v2; // 0xa236b
    int32_t v4 = v3; // 0xa237a
    if ((v3 & 2) != 0) {
        int32_t v5 = v3 - 0x24472eba ^ 0x60ff2036; // 0xa239b
        *v2 = v5;
        v4 = v5;
        if ((v5 & 2) != 0) {
            int32_t v6 = v5 + 0x332c50c8; // 0xa23dd
            *v2 = v6;
            v4 = v6;
        }
    }
    int64_t result = v1 + 368; // 0xa23e6
    int32_t * v7 = (int32_t *)result; // 0xa23ed
    int32_t v8 = v4 ^ 0x39b69246 ^ *v7 + 0x7ad87935; // 0xa240c
    *v2 = v8;
    int32_t v9 = v8 ^ 0x58abcfc7 ^ (*v7 | 0x7a909dc0); // 0xa243c
    *v2 = v9;
    int32_t v10 = (v9 | 0x1477a707) + *v7; // 0xa2476
    *v7 = v10;
    int32_t v11 = v10 - *v2 | 0x72f7690f; // 0xa24b6
    *v7 = v11;
    int32_t v12 = *v2; // 0xa24c4
    int32_t v13 = v11; // 0xa24d5
    int32_t v14 = v12; // 0xa24d5
    if ((v12 & 2) != 0) {
        // 0xa2516
        v14 = (v12 | 0x7be050b) - 0x790391ce;
        *v2 = v14;
        v13 = *v7;
    }
    int64_t * v15 = (int64_t *)(v1 + 10); // 0xa2551
    uint16_t v16 = *(int16_t *)(*v15 + 1); // 0xa2577
    *v2 = v14 & 0x37c3d0a5;
    int64_t v17 = *(int64_t *)(((int64_t)((int32_t)v16 - v13 ^ v14) & (int64_t)&g3) + v1); // 0xa268f
    char v18 = *(char *)*v15; // 0xa26d7
    int64_t v19 = v17; // 0xa26dc
    if (v18 == 98) {
        // 0xa26e2
        v19 = v17 & -256 | (int64_t)*(char *)v17;
    }
    int64_t v20 = v19;
    int64_t v21 = v20; // 0xa270b
    if (v18 == 50) {
        // 0xa2711
        v21 = v20 & -0x10000 | (int64_t)*(int16_t *)v20;
    }
    int64_t v22 = v21; // 0xa272d
    if (v18 == 80) {
        // 0xa2733
        v22 = (int64_t)*(int32_t *)v21;
    }
    int64_t v23 = v22; // 0xa2755
    if (v18 == 58) {
        // 0xa275b
        v23 = *(int64_t *)v22;
    }
    // 0xa277a
    *(int64_t *)(v1 + 96) = v23 - 0x653cf834;
    int32_t v24 = *v7 & (*v2 | 0x73f21f4d); // 0xa27e3
    *v7 = v24;
    *v2 = (*v2 ^ v24 + 0x1aa72bbd) + 0x463f13fb;
    *v7 = 2 * *v7 - (int32_t)*(int16_t *)(*v15 + 3);
    *v15 = *v15 + 5;
    return result;
}

// Address range: 0xa293a - 0xa293d
int64_t function_a293a(void) {
    // 0xa293a
    int64_t result; // 0xa293a
    return result;
}

// Address range: 0xa3fe9 - 0xa4609
int64_t function_a3fe9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xa3fe9
    int64_t v1; // 0xa3fe9
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xa4000
    int32_t v4 = *v3 + 0x784f7133; // 0xa4000
    *v3 = v4;
    int32_t * v5 = (int32_t *)(v2 + 368); // 0xa402d
    int32_t v6 = v4 ^ 0x7e64782 ^ *v5; // 0xa4047
    *v5 = v6;
    int32_t v7 = *v3; // 0xa4058
    int32_t v8 = v6; // 0xa4069
    if ((v7 & 2) != 0) {
        // 0xa406f
        *v3 = v7 & 0x1029;
        v8 = *v5;
    }
    // 0xa4091
    *v5 = v8 & 0x5bda5c23;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x2bf9ff4a;
    int64_t * v9 = (int64_t *)(v2 + 96); // 0xa40e6
    uint64_t v10 = *v9 + 0x653cf834; // 0xa40fd
    *v9 = v10 ^ 0x2bf9ff4a;
    int64_t v11 = v2 - 0x2bf9ff4a; // 0xa41da
    char v12 = *(char *)(v2 + 404); // 0xa4271
    int64_t v13 = v11; // 0xa4279
    int64_t v14; // 0xa3fe9
    bool v15; // 0xa3fe9
    if (v12 == 98) {
        char v16 = v10 | v11; // 0xa427f
        int64_t v17 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v16 == 0) | 128 * (int64_t)(v16 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v16) % 2 == 0) | 2; // bp-8, 0xa4282
        v14 = (int64_t)&v17;
        v13 = v10 % 256 | v11;
    }
    int64_t v18 = v14; // 0xa428a
    int64_t v19 = v13; // 0xa428a
    if (v12 == 50) {
        int64_t v20 = v13 | v10;
        int16_t v21 = v20; // 0xa4290
        int64_t v22 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v20) % 2 == 0) | 2; // bp-16, 0xa4294
        v18 = (int64_t)&v22;
        v19 = v13 | v10 % 0x10000;
    }
    int64_t v23 = v18; // 0xa42ad
    int64_t v24 = v19; // 0xa42ad
    if (v12 == 80) {
        int64_t v25 = v19 | v10;
        int32_t v26 = v25; // 0xa42b3
        unsigned char v27 = llvm_ctpop_i8((char)v25); // 0xa42b3
        v23 = v18 - 8;
        *(int64_t *)v23 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 4 * (int64_t)(v27 % 2 == 0) | 2;
        v24 = v25 & 0xffffffff;
    }
    int64_t v28 = v23; // 0xa42cd
    int64_t v29 = v24; // 0xa42cd
    if (v12 == 58) {
        // 0xa42d3
        v29 = v24 | v10;
        unsigned char v30 = llvm_ctpop_i8((char)v29); // 0xa42d3
        v28 = v23 - 8;
        *(int64_t *)v28 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | 64 * (int64_t)(v29 == 0) | 128 * (int64_t)(v29 < 0) | 4 * (int64_t)(v30 % 2 == 0) | 2;
    }
    int64_t * v31 = (int64_t *)(v2 + 113); // 0xa4309
    *v31 = v29 - 0x7ae07396;
    *v3 = *v3 - 0x50327b68;
    *v5 = *v5 + 0x352ca91c;
    *v31 = *v31 + 0x95255885;
    *v5 = *v5 | *v3;
    *v3 = *v3 | 0x56031acc;
    int32_t v32 = *v5 - 0x3231759e; // 0xa4402
    *v5 = v32;
    int64_t * v33 = (int64_t *)(v2 + 10); // 0xa4433
    int64_t v34 = *v33; // 0xa4433
    int32_t v35 = v32; // 0xa445d
    int64_t v36 = v34; // 0xa445d
    if (*(char *)(v34 + 2) != 0) {
        uint16_t v37 = *(int16_t *)(v34 + 3); // 0xa44bd
        *(int64_t *)(v2 + (int64_t)v37) = *(int64_t *)v28;
        v35 = *v5;
        v36 = *v33;
    }
    int32_t v38 = (int32_t)*(int16_t *)v36; // 0xa458d
    *v5 = 0x74a805eb - v38;
    *v33 = *v33 + 5;
    return *(int64_t *)(v2 + 271) + (int64_t)((v35 + 0xfa15 + v38) % 0x10000);
}

// Address range: 0xa460b - 0xa460d
int64_t function_a460b(void) {
    // 0xa460b
    int64_t result; // 0xa460b
    return result;
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

// Address range: 0xa5889 - 0xa5f3c
int64_t function_a5889(int64_t a1, int64_t a2) {
    // 0xa5889
    int64_t v1; // 0xa5889
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xa58d0
    *v3 = *v3 + 0x653cf834;
    *(int64_t *)v2 = v2 ^ 0x189f3f79;
    int64_t v4 = v2 + 35; // 0xa5960
    int32_t * v5 = (int32_t *)v4; // 0xa596a
    int32_t v6 = *v5; // 0xa596a
    if ((v6 & 2) != 0) {
        // 0xa597c
        *v5 = (v6 | 0x3d94a1e5) + 0x45cf3d7b;
    }
    int64_t v7 = v2 ^ 0x153c88a0; // 0xa59ea
    uint64_t v8 = *v3; // 0xa5a2a
    char v9 = *(char *)(v2 + 404); // 0xa5a4e
    int64_t v10 = v7; // 0xa5a54
    int64_t v11; // 0xa5889
    bool v12; // 0xa5889
    if (v9 == 98) {
        char v13 = v8 | v7; // 0xa5a5a
        int64_t v14 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v13) % 2 == 0) | 2; // bp-8, 0xa5a5d
        v11 = (int64_t)&v14;
        v10 = v8 % 256 | v7;
    }
    int64_t v15 = v11; // 0xa5a6e
    int64_t v16 = v10; // 0xa5a6e
    if (v9 == 50) {
        int64_t v17 = v10 | v8;
        int16_t v18 = v17; // 0xa5a74
        int64_t v19 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v18 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v17) % 2 == 0) | 2; // bp-16, 0xa5a78
        v15 = (int64_t)&v19;
        v16 = v10 | v8 % 0x10000;
    }
    int64_t v20 = v15; // 0xa5a8f
    int64_t v21 = v16; // 0xa5a8f
    if (v9 == 80) {
        int64_t v22 = v16 | v8;
        int32_t v23 = v22; // 0xa5a95
        unsigned char v24 = llvm_ctpop_i8((char)v22); // 0xa5a95
        v20 = v15 - 8;
        *(int64_t *)v20 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v23 == 0) | 128 * (int64_t)(v23 < 0) | 4 * (int64_t)(v24 % 2 == 0) | 2;
        v21 = v22 & 0xffffffff;
    }
    int64_t v25 = v20; // 0xa5ab4
    int64_t v26 = v21; // 0xa5ab4
    if (v9 == 58) {
        // 0xa5aba
        v26 = v21 | v8;
        unsigned char v27 = llvm_ctpop_i8((char)v26); // 0xa5aba
        v25 = v20 - 8;
        *(int64_t *)v25 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 4 * (int64_t)(v27 % 2 == 0) | 2;
    }
    int64_t * v28 = (int64_t *)(v2 + 113); // 0xa5b20
    *v28 = v26 - 0x5c445087;
    int64_t * v29 = (int64_t *)(v2 + 10); // 0xa5b69
    int64_t v30 = *v29; // 0xa5b69
    if (*(char *)v30 != 0) {
        uint16_t v31 = *(int16_t *)(v30 + 3); // 0xa5c1a
        *(int64_t *)(v2 + (int64_t)v31) = *(int64_t *)v25;
    }
    int32_t v32 = *v5; // 0xa5c8f
    if ((v32 & 2) != 0) {
        // 0xa5ca6
        *v5 = v32 & 0x265e354a;
    }
    // 0xa5cc0
    *v28 = *v28 + 0x76893576;
    int32_t v33 = *v5; // 0xa5cf2
    int32_t v34 = v33 | 0x445e4ee5; // 0xa5cf2
    *v5 = v34;
    int64_t v35 = v2 + 129; // 0xa5cfc
    int64_t v36 = *(int64_t *)v35; // 0xa5d21
    if ((v33 & 2) != 0) {
        // 0xa5d57
        *v5 = (v34 & 0xabb04b8) - 0x6652fa27;
    }
    int64_t v37 = v2 | 120; // 0xa5de1
    int64_t v38 = v37 - 144 + (v36 | ((char)v4 == 0 ? v35 : 0x581db6ff)) ^ 2; // 0xa5e00
    int64_t v39 = v38 - 129; // 0xa5e22
    uint16_t v40 = *(int16_t *)(*v29 + 1); // 0xa5e4c
    int64_t v41 = v40; // 0xa5e4c
    int64_t v42 = *(int64_t *)(v2 + 271); // 0xa5e5f
    int64_t v43 = ((v39 | v37) + (int64_t)&g2 - 129 + -2 * v41 & (int64_t)&g1 ^ 16) - v41; // 0xa5ea8
    int64_t v44 = v2 + 368; // 0xa5ec8
    int32_t * v45 = (int32_t *)v44; // 0xa5ecf
    *v45 = *v45 ^ (int32_t)v40;
    int64_t v46 = v38 + -127 - (int64_t)L"\n2" + (v42 & (((int64_t)&g1 & 64) - 0x7fffffff ^ 120)) + v43 | v44; // 0xa5efb
    *v29 = *v29 + 5;
    return 128 - (v41 ^ 4) - v46 + 2 * ((v43 + v39 & 2 | 128) & v46);
}

// Address range: 0xa5f41 - 0xa5f44
int64_t function_a5f41(void) {
    // 0xa5f41
    int64_t result; // 0xa5f41
    return result;
}

// Address range: 0xa8e1f - 0xa94a5
int64_t function_a8e1f(int64_t a1, int64_t a2, int64_t a3) {
    // 0xa8e1f
    int64_t v1; // 0xa8e1f
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xa8e69
    *v3 = *v3 + 0x653cf834 ^ 0x665e910e;
    int32_t * v4 = (int32_t *)(v2 + 35); // 0xa8ec8
    int32_t * v5 = (int32_t *)(v2 + 368); // 0xa8eda
    int32_t v6 = *v5 - (*v4 ^ 0x22900c8); // 0xa8eda
    *v5 = v6;
    int32_t v7 = *v4; // 0xa8f2b
    int32_t v8 = v6; // 0xa8f3c
    int32_t v9 = v7; // 0xa8f3c
    if ((v7 & 2) != 0) {
        // 0xa8f42
        v9 = v7 + 0x3fbeaa1d;
        *v4 = v9;
        v8 = *v5;
    }
    // 0xa8f5c
    *v5 = v8 - (v9 ^ 0x8178b71);
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x665e910e;
    int64_t v10 = v2 + 0x665e910e; // 0xa8fb4
    int64_t v11 = *v3; // 0xa8fe8
    uint64_t v12 = v11 ^ 0x665e910e; // 0xa8feb
    char v13 = *(char *)(v2 + 404); // 0xa8ffb
    int64_t v14 = v10; // 0xa9000
    int64_t v15; // 0xa8e1f
    bool v16; // 0xa8e1f
    if (v13 == 98) {
        unsigned char v17 = (char)v10; // 0xa9006
        unsigned char v18 = (char)v12; // 0xa9006
        unsigned char v19 = v18 + v17; // 0xa9006
        int64_t v20 = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v19 < v17) | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(v18 % 16 + v17 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v19) % 2 == 0) | 2048 * (int64_t)(((v19 ^ v17) & (v19 ^ v18)) < 0) | 2; // bp-8, 0xa9008
        v14 = v10 & -256 | (int64_t)v19;
        v15 = (int64_t)&v20;
    }
    int64_t v21 = v14; // 0xa900c
    int64_t v22 = v15; // 0xa900c
    if (v13 == 50) {
        uint16_t v23 = (int16_t)v14; // 0xa9012
        uint16_t v24 = (int16_t)v12; // 0xa9012
        uint16_t v25 = v23 + v24; // 0xa9012
        int64_t v26 = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v25 < v23) | 64 * (int64_t)(v25 == 0) | 128 * (int64_t)(v25 < 0) | 16 * (int64_t)(v23 % 16 + v24 % 16 > 15) | 2048 * (int64_t)(((v25 ^ v23) & (v25 ^ v24)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v25) % 2 == 0) | 2; // bp-16, 0xa9015
        v21 = v14 & -0x10000 | (int64_t)v25;
        v22 = (int64_t)&v26;
    }
    int64_t v27 = v21; // 0xa9019
    int64_t v28 = v22; // 0xa9019
    if (v13 == 80) {
        uint32_t v29 = (int32_t)v21; // 0xa901f
        uint32_t v30 = (int32_t)v12; // 0xa901f
        uint32_t v31 = v29 + v30; // 0xa901f
        unsigned char v32 = llvm_ctpop_i8((char)v31); // 0xa901f
        v28 = v22 - 8;
        *(int64_t *)v28 = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v31 < v29) | 64 * (int64_t)(v31 == 0) | 128 * (int64_t)(v31 < 0) | 16 * (int64_t)(v29 % 16 + v30 % 16 > 15) | 2048 * (int64_t)(((v31 ^ v29) & (v31 ^ v30)) < 0) | 4 * (int64_t)(v32 % 2 == 0) | 2;
        v27 = v31;
    }
    uint64_t v33 = v27;
    int64_t v34 = v33; // 0xa9025
    int64_t v35 = v28; // 0xa9025
    if (v13 == 58) {
        // 0xa902b
        v34 = v33 + v12;
        unsigned char v36 = llvm_ctpop_i8((char)v34); // 0xa902b
        v35 = v28 - 8;
        *(int64_t *)v35 = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v34 < v33) | 64 * (int64_t)(v34 == 0) | 128 * (int64_t)(v34 < 0) | 16 * (int64_t)(v33 % 16 + v12 % 16 > 15) | 2048 * (int64_t)(((v34 ^ v33) & (v34 ^ v11)) < 0) | 4 * (int64_t)(v36 % 2 == 0) | 2;
    }
    int64_t v37 = v34 - 0x365a6b2a; // 0xa902f
    int64_t * v38 = (int64_t *)(v2 + 113); // 0xa9040
    *v38 = v37;
    int64_t result = v2 + 10; // 0xa9088
    int64_t * v39 = (int64_t *)result; // 0xa9099
    int64_t v40 = *v39; // 0xa9099
    int64_t v41 = v37; // 0xa90d7
    if (*(char *)v40 != 0) {
        uint16_t v42 = *(int16_t *)(v40 + 3); // 0xa916a
        *(int64_t *)(v2 + (int64_t)v42) = *(int64_t *)v35;
        v41 = *v38;
    }
    // 0xa919e
    *v38 = v41 + 0x509f5019;
    int32_t v43 = *v4; // 0xa9272
    if ((v43 & 2) != 0) {
        // 0xa9298
        *v4 = (v43 | 0x6c9523d1) ^ 0x124a002a;
    }
    int32_t v44 = *v5 - 0x4813dbc; // 0xa9314
    *v5 = v44;
    *v5 = (v44 ^ (int32_t)*(int16_t *)(*v39 + 1)) - 0x4f4105f2 ^ v44;
    *v39 = *v39 + 5;
    return result;
}

// Address range: 0xafa1f - 0xb0007
int64_t function_afa1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xafaf5
    int64_t v1; // 0xafa1f
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0xafa72
    *v3 = *v3 & 0x22c7ea36;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int32_t * v4 = (int32_t *)(v2 + 35); // 0xafa9a
    int32_t v5 = *v4 | 0x10c4506b; // 0xafa9a
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 + 96); // 0xafabe
    *v4 = (v5 ^ 0x5cdc1fad) + 0x50bb45db;
    *v6 = *v6 + 0xadddd6d5;
    *v4 = *v4 - 0x13e853fe;
    uint64_t v7 = *v6 - 0x48a0dea1; // 0xafb33
    char v8 = *(char *)(v2 + 404); // 0xafb43
    int64_t v9; // 0xafa1f
    int64_t v10; // 0xafa1f
    bool v11; // 0xafa1f
    if (v8 == 98) {
        char v12 = v7 | v2; // 0xafb50
        int64_t v13 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v12) % 2 == 0) | 2; // bp-8, 0xafb53
        v10 = (int64_t)&v13;
        v9 = v7 % 256 | v2;
    }
    int64_t v14 = v10; // 0xafb58
    int64_t v15 = v9; // 0xafb58
    if (v8 == 50) {
        int64_t v16 = v9 | v7;
        int16_t v17 = v16; // 0xafb5e
        int64_t v18 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v16) % 2 == 0) | 2; // bp-16, 0xafb62
        v14 = (int64_t)&v18;
        v15 = v9 | v7 % 0x10000;
    }
    int64_t v19 = v14; // 0xafb67
    int64_t v20 = v15; // 0xafb67
    if (v8 == 80) {
        int64_t v21 = v15 | v7;
        int32_t v22 = v21; // 0xafb6d
        unsigned char v23 = llvm_ctpop_i8((char)v21); // 0xafb6d
        v19 = v14 - 8;
        *(int64_t *)v19 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v22 == 0) | 128 * (int64_t)(v22 < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
        v20 = v21 & 0xffffffff;
    }
    int64_t v24 = v19; // 0xafb75
    int64_t v25 = v20; // 0xafb75
    if (v8 == 58) {
        // 0xafb7b
        v25 = v20 | v7;
        unsigned char v26 = llvm_ctpop_i8((char)v25); // 0xafb7b
        v24 = v19 - 8;
        *(int64_t *)v24 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v25 == 0) | 128 * (int64_t)(v25 < 0) | 4 * (int64_t)(v26 % 2 == 0) | 2;
    }
    int64_t * v27 = (int64_t *)(v2 + 113); // 0xafb90
    *v27 = v25 + 0x64558b17;
    *v3 = *v3 | *v4;
    *v27 = *v27 - 0x4a10a628;
    int64_t * v28 = (int64_t *)(v2 + 10); // 0xafcb4
    int64_t v29 = *v28; // 0xafcb4
    if (*(char *)(v29 + 2) != 0) {
        uint16_t v30 = *(int16_t *)(v29 + 3); // 0xafd7b
        *(int64_t *)(v2 + (int64_t)v30) = *(int64_t *)v24;
    }
    int32_t v31 = *v4 & 0x18f9e0e8; // 0xafe28
    *v4 = v31;
    int32_t v32 = *v3 & v31; // 0xafe87
    *v3 = v32;
    int64_t v33 = *(int64_t *)(v2 + 271); // 0xafedb
    uint32_t v34 = v32 + (int32_t)*(int16_t *)*v28 ^ 0x17e28bdf; // 0xaff44
    *v3 = v34 + v32;
    *v28 = *v28 + 5;
    return *(int64_t *)(((int64_t)v34 & (int64_t)&g3) + v33);
}

// Address range: 0xb2661 - 0xb2db6
int64_t function_b2661(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xb2661
    int64_t v1; // 0xb2661
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xb266b
    int32_t * v4 = (int32_t *)(v2 + 368); // 0xb267f
    int32_t v5 = -0x70ead2e5 - *v3 + *v4; // 0xb267f
    *v4 = v5;
    *v4 = *v3 | v5;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x6b059bf3;
    int64_t * v6 = (int64_t *)(v2 + 96); // 0xb26d9
    *v6 = *v6 + 0xd0429427;
    int32_t v7 = *v4 | *v3 & 0x43b06801; // 0xb2709
    *v4 = v7;
    int32_t v8 = v7 - (*v3 | 0x4f5422be); // 0xb2729
    *v4 = v8;
    int32_t v9 = *v3; // 0xb2740
    int32_t v10 = v8; // 0xb2754
    int32_t v11 = v9; // 0xb2754
    if ((v9 & 2) != 0) {
        // 0xb275a
        v11 = v9 | 0x2fca37a8;
        *v3 = v11;
        v10 = *v4;
    }
    // 0xb2775
    *v4 = v11 - 0x3d94b3d1 | v10;
    int64_t v12 = v2 - 0x6b059bf3; // 0xb27eb
    uint64_t v13 = *v6 - 0x6b059bf3; // 0xb282b
    char v14 = *(char *)(v2 + 404); // 0xb283e
    int64_t v15 = v12; // 0xb2845
    int64_t v16; // 0xb2661
    bool v17; // 0xb2661
    if (v14 == 98) {
        char v18 = v13 ^ v12; // 0xb284b
        int64_t v19 = 0x4000 * (int64_t)v17 | 1024 * (int64_t)v17 | 512 * (int64_t)v17 | 256 * (int64_t)v17 | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v18 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v18) % 2 == 0) | 2; // bp-8, 0xb284e
        v16 = (int64_t)&v19;
        v15 = v13 % 256 ^ v12;
    }
    int64_t v20 = v16; // 0xb2867
    int64_t v21 = v15; // 0xb2867
    if (v14 == 50) {
        int64_t v22 = v15 ^ v13;
        int16_t v23 = v22; // 0xb286d
        int64_t v24 = 0x4000 * (int64_t)v17 | 1024 * (int64_t)v17 | 512 * (int64_t)v17 | 256 * (int64_t)v17 | 64 * (int64_t)(v23 == 0) | 128 * (int64_t)(v23 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v22) % 2 == 0) | 2; // bp-16, 0xb2871
        v20 = (int64_t)&v24;
        v21 = v15 ^ v13 % 0x10000;
    }
    int64_t v25 = v20; // 0xb287d
    int64_t v26 = v21; // 0xb287d
    if (v14 == 80) {
        int64_t v27 = v21 ^ v13;
        int32_t v28 = v27; // 0xb2883
        unsigned char v29 = llvm_ctpop_i8((char)v27); // 0xb2883
        v25 = v20 - 8;
        *(int64_t *)v25 = 0x4000 * (int64_t)v17 | 1024 * (int64_t)v17 | 512 * (int64_t)v17 | 256 * (int64_t)v17 | 64 * (int64_t)(v28 == 0) | 128 * (int64_t)(v28 < 0) | 4 * (int64_t)(v29 % 2 == 0) | 2;
        v26 = v27 & 0xffffffff;
    }
    int64_t v30 = v25; // 0xb2897
    int64_t v31 = v26; // 0xb2897
    if (v14 == 58) {
        // 0xb289d
        v31 = v26 ^ v13;
        unsigned char v32 = llvm_ctpop_i8((char)v31); // 0xb289d
        v30 = v25 - 8;
        *(int64_t *)v30 = 0x4000 * (int64_t)v17 | 1024 * (int64_t)v17 | 512 * (int64_t)v17 | 256 * (int64_t)v17 | 64 * (int64_t)(v31 == 0) | 128 * (int64_t)(v31 < 0) | 4 * (int64_t)(v32 % 2 == 0) | 2;
    }
    // 0xb28aa
    *(int64_t *)(v2 + 113) = v31 + 0x1a44e4ef;
    int64_t result = v2 + 10; // 0xb29fb
    int64_t * v33 = (int64_t *)result; // 0xb2a41
    int64_t v34 = *v33; // 0xb2a41
    if (*(char *)(v34 + 2) != 0) {
        uint16_t v35 = *(int16_t *)(v34 + 3); // 0xb2b0a
        *(int64_t *)(v2 + (int64_t)v35) = *(int64_t *)v30;
    }
    int32_t v36 = *v4 + (*v3 | 0x214abc1f) & 0x7b3ce1ec ^ 0x1a1cc124; // 0xb2bec
    *v4 = v36;
    int32_t v37 = *v3; // 0xb2bf9
    int32_t v38 = v36; // 0xb2c0a
    if ((v37 & 2) != 0) {
        // 0xb2c10
        *v3 = v37 & 0x400d4009;
        v38 = *v4;
    }
    // 0xb2c32
    *v4 = v38 - 0x267d402f + (int32_t)*(int16_t *)*v33;
    *v33 = *v33 + 5;
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

// Address range: 0xbc9b8 - 0xbcfc8
int64_t function_bc9b8(int64_t a1, int64_t a2) {
    // 0xbc9b8
    int64_t v1; // 0xbc9b8
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xbc9c2
    int32_t v3 = *v2; // 0xbc9c2
    if ((v3 & 2) != 0) {
        // 0xbc9d9
        *v2 = v3 & 0x1a06e525 | 0x44b10858;
    }
    int32_t * v4 = (int32_t *)(v1 + 368); // 0xbca03
    int32_t v5 = *v4 | 0x6460b705; // 0xbca03
    *v4 = v5;
    int32_t v6 = *v2; // 0xbca14
    int32_t v7 = v6; // 0xbca25
    int32_t v8 = v5; // 0xbca25
    if ((v6 & 2) != 0) {
        // 0xbca2b
        v7 = v6 | 0x7fffdee6;
        *v2 = v7;
        v8 = *v4;
    }
    int32_t v9 = v8 + 0x18cde6a1 | v7; // 0xbca7d
    *v2 = (v9 & 2) == 0 ? v9 : v9 | 0x6d665ffd;
    *v4 = *v4 & 0x786588ba;
    *(char *)(v1 + 367) = 0;
    int64_t * v10 = (int64_t *)(v1 + 10); // 0xbcbd4
    uint16_t v11 = *(int16_t *)(*v10 + 3); // 0xbcbe7
    int32_t v12 = *v4; // 0xbcc24
    int32_t v13 = *v2; // 0xbcc4c
    *v2 = v13 | 0x562f8caf;
    int64_t v14 = *(int64_t *)(((int64_t)(v12 ^ (int32_t)v11 ^ v13) & (int64_t)&g3) + v1); // 0xbccbf
    char v15 = *(char *)(*v10 + 2); // 0xbcd01
    int64_t v16 = v14; // 0xbcd08
    if (v15 == 98) {
        // 0xbcd0e
        v16 = v14 & -256 | (int64_t)*(char *)v14;
    }
    int64_t v17 = v16;
    int64_t v18 = v17; // 0xbcd41
    if (v15 == 50) {
        // 0xbcd47
        v18 = v17 & -0x10000 | (int64_t)*(int16_t *)v17;
    }
    int64_t v19 = v18; // 0xbcd64
    if (v15 == 80) {
        // 0xbcd6a
        v19 = (int64_t)*(int32_t *)v18;
    }
    int64_t v20 = v19; // 0xbcd99
    if (v15 == 58) {
        // 0xbcd9f
        v20 = *(int64_t *)v19;
    }
    // 0xbcdc0
    *(int64_t *)v1 = v20 ^ 0xda3b7d9;
    int32_t v21 = *v4 ^ 0x31d8ed5e ^ *v2; // 0xbce2f
    *v2 = v21;
    int32_t v22 = *v4 ^ v21; // 0xbce5a
    *v2 = v22;
    int32_t v23 = *v4 - 0x42bafe3f ^ v22; // 0xbce7b
    *v2 = v23;
    *v2 = v23 - (*v4 & 0x2bfb3d13);
    int32_t v24 = *v4 ^ 0x2897b354; // 0xbcea8
    *v4 = v24;
    uint16_t v25 = *(int16_t *)*v10; // 0xbcf2d
    *v4 = v24 + (int32_t)v25;
    *v10 = *v10 + 5;
    return -(((int64_t)v25 & (int64_t)&g3));
}

// Address range: 0xc0d7d - 0xc140b
int64_t function_c0d7d(int64_t a1, int64_t a2, int64_t a3) {
    // 0xc0d7d
    int64_t v1; // 0xc0d7d
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xc0d87
    *v3 = *v3 + 0x243d99ad;
    int32_t * v4 = (int32_t *)(v2 + 368); // 0xc0dd6
    *v4 = *v4 & 0x4ead272;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x40ff5e87;
    int32_t * v5 = (int32_t *)(v2 + 35); // 0xc0f6c
    int64_t v6 = v2 - 0x40ff5e87; // 0xc0f82
    uint64_t v7 = *v3 + 0x40ff5e87; // 0xc0fb4
    char v8 = *(char *)(v2 + 404); // 0xc0fd9
    int64_t v9 = v6; // 0xc0fff
    int64_t v10; // 0xc0d7d
    bool v11; // 0xc0d7d
    if (v8 == 98) {
        char v12 = v7 ^ v6; // 0xc1005
        int64_t v13 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v12) % 2 == 0) | 2; // bp-8, 0xc1008
        v10 = (int64_t)&v13;
        v9 = v7 % 256 ^ v6;
    }
    // 0xc1015
    *v4 = *v4 + *v5;
    int64_t v14 = v10; // 0xc101b
    int64_t v15 = v9; // 0xc101b
    if (v8 == 50) {
        int64_t v16 = v9 ^ v7;
        int16_t v17 = v16; // 0xc1021
        int64_t v18 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v16) % 2 == 0) | 2; // bp-16, 0xc1025
        v14 = (int64_t)&v18;
        v15 = v9 ^ v7 % 0x10000;
    }
    int64_t v19 = v14; // 0xc103b
    int64_t v20 = v15; // 0xc103b
    if (v8 == 80) {
        int64_t v21 = v15 ^ v7;
        int32_t v22 = v21; // 0xc1041
        unsigned char v23 = llvm_ctpop_i8((char)v21); // 0xc1041
        v19 = v14 - 8;
        *(int64_t *)v19 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v22 == 0) | 128 * (int64_t)(v22 < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
        v20 = v21 & 0xffffffff;
    }
    int64_t v24 = v19; // 0xc1049
    int64_t v25 = v20; // 0xc1049
    if (v8 == 58) {
        // 0xc104f
        v25 = v20 ^ v7;
        unsigned char v26 = llvm_ctpop_i8((char)v25); // 0xc104f
        v24 = v19 - 8;
        *(int64_t *)v24 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v25 == 0) | 128 * (int64_t)(v25 < 0) | 4 * (int64_t)(v26 % 2 == 0) | 2;
    }
    int64_t * v27 = (int64_t *)(v2 + 113); // 0xc10a2
    *v27 = v25 + 0xffc3fde;
    int32_t v28 = *v5; // 0xc10c6
    int32_t v29 = v28 | 0x2730b0cc; // 0xc10c6
    *v5 = (v28 & 2) == 0 ? v29 : v29 - 0x5c278a20;
    *v27 = *v27 + 0xa48a511;
    int64_t * v30 = (int64_t *)(v2 + 10); // 0xc118f
    int64_t v31 = *v30; // 0xc118f
    if (*(char *)(v31 + 4) != 0) {
        uint16_t v32 = *(int16_t *)(v31 + 2); // 0xc122d
        *(int64_t *)(v2 + (int64_t)v32) = *(int64_t *)v24;
    }
    int32_t v33 = *v5; // 0xc126a
    int32_t v34 = v33; // 0xc1278
    if ((v33 & 2) != 0) {
        // 0xc127e
        v34 = (v33 & 0x31691179) - 0x5c3efee3;
        *v5 = v34;
    }
    int32_t v35 = (*v4 | v34) & 0x19c08712; // 0xc12c3
    *v4 = v35;
    uint32_t v36 = (v35 ^ (int32_t)*(int16_t *)*v30) - 0x369ef0d5; // 0xc1395
    *v4 = v36 & v35;
    *v30 = *v30 + 5;
    return v36 % 0x10000;
}
