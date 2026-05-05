/*
 * Targeted RetDec C for unobserved VM handler native ranges, batch 5.
 *
 * These dispatch entries are statically inventoried but were not seen as
 * dispatch targets in the concrete traces. Batches are sorted by native
 * span size so each decompile stays small and reproducible.
 *
 * Total unobserved handler ranges: 155
 * Batch size: 24
 * Ranges:
 *   0x7b6cb-0x7baf7 entry=15 span_bytes=1067 insns=244 tail=0x7bae7
 *   0x8371d-0x83b4d entry=53 span_bytes=1072 insns=252 tail=0x83b3d
 *   0x99e21-0x9a259 entry=163 span_bytes=1079 insns=245 tail=0x9a249
 *   0xacefd-0xad339 entry=252 span_bytes=1081 insns=245 tail=0xad329
 *   0xa1a95-0xa1edd entry=205 span_bytes=1095 insns=253 tail=0xa1ecd
 *   0xb593f-0xb5d8a entry=293 span_bytes=1098 insns=233 tail=0xb5d7a
 *   0x78835-0x78c84 entry=1 span_bytes=1103 insns=244 tail=0x78c74
 *   0xa6470-0xa68cf entry=223 span_bytes=1115 insns=244 tail=0xa68bf
 *   0x96eb4-0x9731e entry=149 span_bytes=1130 insns=252 tail=0x9730e
 *   0x9a46e-0x9a8df entry=166 span_bytes=1131 insns=250 tail=0x9a8cf
 *   0xa94a5-0xa992c entry=238 span_bytes=1155 insns=255 tail=0xa991c
 *   0x93ff3-0x94485 entry=133 span_bytes=1166 insns=263 tail=0x94475
 *   0xb09ab-0xb0e3d entry=271 span_bytes=1166 insns=248 tail=0xb0e2d
 *   0x7a04f-0x7a4e6 entry=10 span_bytes=1170 insns=259 tail=0x7a4d6
 *   0xa1ecf-0xa236e entry=207 span_bytes=1183 insns=256 tail=0xa235e
 *   0xb7bba-0xb8072 entry=306 span_bytes=1207 insns=258 tail=0xb8062
 *   0x7cb43-0x7d014 entry=22 span_bytes=1233 insns=265 tail=0x7d004
 *   0x93f79-0x94485 entry=132 span_bytes=1288 insns=300 tail=0x94475
 *   0xb0930-0xb0e3d entry=270 span_bytes=1289 insns=285 tail=0xb0e2d
 *   0x7e7cd-0x7ece0 entry=29 span_bytes=1298 insns=298 tail=0x7ecd0
 *   0xc240f-0xc2927 entry=355 span_bytes=1301 insns=283 tail=0xc2917
 *   0xa13d6-0xa1946 entry=202 span_bytes=1392 insns=307 tail=0xa1936
 *   0x7ca98-0x7d014 entry=21 span_bytes=1404 insns=319 tail=0x7d004
 *   0x9faa4-0xa0078 entry=194 span_bytes=1492 insns=332 tail=0xa0068
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

int64_t function_49f4f212();
int64_t function_49f79780();
int64_t function_70ccea18();

// Address range: 0x78835 - 0x788e2
int64_t function_78835(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x78835
    int64_t v1; // 0x78835
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x78846
    int64_t v3 = *v2; // 0x78846
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0x78857
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0x78879
    *(int64_t *)v5 = v4;
    uint32_t v6 = *(int32_t *)*v2; // 0x788a2
    *(int64_t *)(v5 + 8) = *(int64_t *)(v1 + 187) + (int64_t)v6;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x788e2 - 0x78c77
int64_t function_788e2(void) {
    // 0x788e2
    int64_t v1; // 0x788e2
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x788f6
    uint32_t v3 = *(int32_t *)(*v2 + 2); // 0x78900
    int32_t * v4 = (int32_t *)(v1 + 368); // 0x78923
    *v4 = *v4 & v3;
    int32_t * v5 = (int32_t *)(v1 + 35); // 0x78930
    *v5 = *v5 - 0x7a70ea42;
    uint64_t v6 = *(int64_t *)(*v2 + 2); // 0x7894a
    int64_t v7 = v6 < 0xffffffff00000001 ? v6 : v6 + 0xffffffff; // 0x78950
    *(int64_t *)(v1 + 96) = (v7 | (int64_t)v3) - 0x653cf834;
    int32_t v8 = *v5; // 0x7897d
    int32_t v9 = v8; // 0x7898e
    if ((v8 & 2) != 0) {
        // 0x78994
        v9 = v8 + 0x68fd81fa | 0x5792765a;
        *v5 = v9;
    }
    int32_t v10 = *v4 + v9; // 0x789d7
    *v4 = v10;
    int32_t v11 = *v5 & v10 - 0x53332262; // 0x789f7
    *v5 = v11;
    int32_t v12 = v11 + 0x18181cd5 + *v4; // 0x78a19
    *v5 = v12;
    int32_t v13 = *v4 ^ v12; // 0x78a33
    *v4 = v13;
    int32_t v14 = *v5; // 0x78a43
    int32_t v15 = v13; // 0x78a57
    int32_t v16 = v14; // 0x78a57
    if ((v14 & 2) != 0) {
        // 0x78a5d
        v16 = v14 | 0x5976122d;
        *v5 = v16;
        v15 = *v4;
    }
    uint32_t result = v16 | 0x46c00171; // 0x78a84
    int32_t v17 = v15 - result & 0xaee30e6; // 0x78ab6
    *v4 = v17;
    int32_t v18 = *v5 | v17 | 0x1da8e06; // 0x78af2
    *v4 = v18;
    *v4 = ((int32_t)*(int16_t *)*v2 - v18 ^ 0x4bf26182) & v18;
    *v2 = *v2 + 10;
    return result;
}

// Address range: 0x78c79 - 0x78c7b
int64_t function_78c79(void) {
    // 0x78c79
    int64_t result; // 0x78c79
    return result;
}

// Address range: 0x78c7f - 0x78c80
int64_t function_78c7f(void) {
    // 0x78c7f
    int64_t result; // 0x78c7f
    return result;
}

// Address range: 0x7a04f - 0x7a4d8
int64_t function_7a04f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x7a04f
    int64_t v1; // 0x7a04f
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x7a0a5
    int32_t * v4 = (int32_t *)(v2 + 368); // 0x7a116
    *v4 = *v4 & *v3;
    *(int64_t *)v2 = v2 ^ 0x2069510c;
    int64_t * v5 = (int64_t *)(v2 + 96); // 0x7a133
    int64_t v6 = *v5; // 0x7a133
    *v3 = *v4 + 0x164636d2 + *v3 & 0x1a79a963;
    *v5 = v6 + 0x9307df09;
    int64_t v7 = v2 ^ 0x2dcae6d5; // 0x7a1e8
    uint64_t v8 = v6 + 0x653cf834; // 0x7a1fc
    char v9 = *(char *)(v2 + 404); // 0x7a20d
    int64_t v10 = v7; // 0x7a214
    int64_t v11; // 0x7a04f
    bool v12; // 0x7a04f
    if (v9 == 98) {
        char v13 = v8 | v7; // 0x7a21a
        int64_t v14 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v13) % 2 == 0) | 2; // bp-8, 0x7a21d
        v10 = v8 % 256 | v7;
        v11 = (int64_t)&v14;
    }
    int64_t v15 = v10; // 0x7a222
    int64_t v16 = v11; // 0x7a222
    if (v9 == 50) {
        int64_t v17 = v10 | v8;
        int16_t v18 = v17; // 0x7a228
        int64_t v19 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v18 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v17) % 2 == 0) | 2; // bp-16, 0x7a22b
        v15 = v10 | v8 % 0x10000;
        v16 = (int64_t)&v19;
    }
    int64_t v20 = v15; // 0x7a230
    int64_t v21 = v16; // 0x7a230
    if (v9 == 80) {
        int64_t v22 = v15 | v8;
        int32_t v23 = v22; // 0x7a236
        unsigned char v24 = llvm_ctpop_i8((char)v22); // 0x7a236
        v21 = v16 - 8;
        *(int64_t *)v21 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v23 == 0) | 128 * (int64_t)(v23 < 0) | 4 * (int64_t)(v24 % 2 == 0) | 2;
        v20 = v22 & 0xffffffff;
    }
    int64_t v25 = v20; // 0x7a23d
    int64_t v26 = v21; // 0x7a23d
    if (v9 == 58) {
        // 0x7a243
        v25 = v20 | v8;
        unsigned char v27 = llvm_ctpop_i8((char)v25); // 0x7a243
        v26 = v21 - 8;
        *(int64_t *)v26 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v25 == 0) | 128 * (int64_t)(v25 < 0) | 4 * (int64_t)(v27 % 2 == 0) | 2;
    }
    int64_t * v28 = (int64_t *)(v2 + 113); // 0x7a251
    *v28 = v25;
    *v4 = *v3 ^ 0x36174357 ^ *v4;
    *v28 = *v28 + 0x1a44e4ef;
    int64_t * v29 = (int64_t *)(v2 + 10); // 0x7a31a
    int64_t v30 = *v29; // 0x7a31a
    if (*(char *)(v30 + 4) != 0) {
        uint16_t v31 = *(int16_t *)(v30 + 2); // 0x7a354
        *(int64_t *)(v2 + (int64_t)v31) = *(int64_t *)v26;
    }
    int32_t v32 = *v4 + 0x4123783c; // 0x7a368
    *v4 = v32;
    int64_t v33 = *(int64_t *)(v2 + 271); // 0x7a41d
    uint32_t v34 = (v32 ^ (int32_t)*(int16_t *)*v29) - 0x19471e33; // 0x7a455
    *v4 = v32 - v34;
    *v29 = *v29 + 5;
    return ((int64_t)v34 & (int64_t)&g3) + v33;
}

// Address range: 0x7a4e3 - 0x7a4e6
int64_t function_7a4e3(void) {
    // 0x7a4e3
    int64_t result; // 0x7a4e3
    return result;
}

// Address range: 0x7b6cb - 0x7b77c
int64_t function_7b6cb(void) {
    // 0x7b6cb
    int64_t v1; // 0x7b6cb
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x7b6d5
    int32_t v3 = *(int32_t *)*v2; // 0x7b6df
    int64_t v4 = 0; // 0x7b70f
    if (v3 != 0) {
        // 0x7b715
        int64_t v5; // bp+136, 0x7b6cb
        int64_t v6 = (int64_t)&v5; // 0x7b6e9
        int64_t v7 = (int64_t)v3 + v6; // 0x7b6cb
        int64_t v8 = v6; // 0x7b6cb
        int64_t v9 = 18; // 0x7b717
        *(int64_t *)v7 = *(int64_t *)v8;
        v9 = v9 + 0xffffffff & 0xffffffff;
        v7 -= 8;
        v8 -= 8;
        while (v9 != 0) {
            // 0x7b715
            *(int64_t *)v7 = *(int64_t *)v8;
            v9 = v9 + 0xffffffff & 0xffffffff;
            v7 -= 8;
            v8 -= 8;
        }
        // 0x7b709
        v4 = (int64_t)*(int32_t *)*v2;
    }
    // 0x7b71e
    int64_t v10; // 0x7b6cb
    int64_t v11 = v4 + (int64_t)&v10; // 0x7b735
    *(int64_t *)(v11 + 128) = *(int64_t *)(v11 + 120);
    *(int32_t *)(v1 + 476) = 0;
    return *(int64_t *)(v11 + 112);
}

// Address range: 0x7b77c - 0x7bae9
int64_t function_7b77c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x7b77c
    int64_t v1; // 0x7b77c
    int64_t v2 = v1;
    int64_t result = v2 + 368; // 0x7b7a2
    int32_t * v3 = (int32_t *)result; // 0x7b7a9
    *v3 = *v3 ^ *(int32_t *)(v2 + 35);
    int64_t * v4 = (int64_t *)(v2 + 96); // 0x7b7c3
    *v4 = *v4 + 0x787a1ebe;
    int64_t * v5 = (int64_t *)(v2 + 113); // 0x7b844
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x133d268a;
    int64_t v6 = -0x133d2667 - (a1 | 2) + v2 - *v5 ^ (int64_t)L"\n2"; // 0x7b881
    int64_t v7 = v2 + 128 + v6; // 0x7b8b4
    uint64_t v8 = *v4 - 0x133d268a; // 0x7b8bb
    unsigned char v9 = *(char *)(v2 + 225); // 0x7b8cf
    int64_t v10 = v7; // 0x7b8d6
    int64_t v11 = v2 + 0x133d268a; // 0x7b8d6
    if (v9 == 98) {
        // 0x7b8dc
        v10 = v7 ^ 32;
        v11 = 0x100000000000000 * v8 / 0x100000000000000;
    }
    int64_t v12 = v10; // 0x7b8ed
    int64_t v13 = v11; // 0x7b8ed
    int64_t v14 = v6; // 0x7b8ed
    if (v9 == 50) {
        // 0x7b8f3
        v13 = 0x1000000000000 * v8 / 0x1000000000000;
        v12 = v11 + v10;
        v14 = v6 - v13;
    }
    int64_t v15 = v13 - 0xc7210a2; // 0x7b90a
    *v5 = v15;
    int64_t * v16 = (int64_t *)(v2 + 10); // 0x7b94d
    int64_t v17 = *v16; // 0x7b94d
    int64_t v18 = v15; // 0x7b96c
    if (*(char *)v17 != 0) {
        uint64_t v19 = v14 - v12 | (int64_t)v9; // 0x7b8cf
        int64_t v20 = (v19 | -256) + v8; // 0x7b92a
        unsigned char v21 = llvm_ctpop_i8((char)v20); // 0x7b92a
        uint16_t v22 = *(int16_t *)(v17 + 3); // 0x7b9bc
        bool v23; // 0x7b77c
        *(int64_t *)(v2 + (int64_t)v22) = 0x4000 * (int64_t)v23 | 1024 * (int64_t)v23 | 512 * (int64_t)v23 | 256 * (int64_t)v23 | (int64_t)(v20 < v8) | 64 * (int64_t)(v20 == 0) | 128 * (int64_t)(v20 < 0) | 16 * (int64_t)(v19 % 16 + v8 % 16 > 15) | 2048 * (int64_t)(((v20 ^ v8) & (v20 ^ -0x8000000000000000)) < 0) | 4 * (int64_t)(v21 % 2 == 0) | 2;
        v18 = *v5;
    }
    // 0x7b9d9
    *v5 = v18 + 0x26b6f591;
    *v3 = (int32_t)*(int16_t *)(*v16 + 1) - 0x699ad46a ^ *v3;
    *v16 = *v16 + 5;
    return result;
}

// Address range: 0x7ca98 - 0x7cb43
int64_t function_7ca98(void) {
    // 0x7ca98
    int64_t v1; // 0x7ca98
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x7caa1
    int32_t v3 = *(int32_t *)*v2; // 0x7caaa
    int64_t v4 = 0; // 0x7cada
    if (v3 != 0) {
        // 0x7cae0
        int64_t v5; // bp+136, 0x7ca98
        int64_t v6 = (int64_t)&v5; // 0x7cab4
        int64_t v7 = (int64_t)v3 + v6; // 0x7ca98
        int64_t v8 = v6; // 0x7ca98
        int64_t v9 = 18; // 0x7cae2
        *(int64_t *)v7 = *(int64_t *)v8;
        v9 = v9 + 0xffffffff & 0xffffffff;
        v7 -= 8;
        v8 -= 8;
        while (v9 != 0) {
            // 0x7cae0
            *(int64_t *)v7 = *(int64_t *)v8;
            v9 = v9 + 0xffffffff & 0xffffffff;
            v7 -= 8;
            v8 -= 8;
        }
        // 0x7cad4
        v4 = (int64_t)*(int32_t *)*v2;
    }
    // 0x7cae9
    int64_t v10; // 0x7ca98
    int64_t v11 = v4 + (int64_t)&v10; // 0x7cafe
    *(int64_t *)(v11 + 128) = *(int64_t *)(v11 + 120);
    *(int32_t *)(v1 + 476) = 0;
    return *(int64_t *)(v11 + 112);
}

// Address range: 0x7cb43 - 0x7d007
int64_t function_7cb43(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x7cb43
    int64_t v1; // 0x7cb43
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x7cb7a
    *v3 = *v3 + 0x653cf834;
    int32_t * v4 = (int32_t *)(v2 + 35); // 0x7cbe0
    int32_t v5 = *v4; // 0x7cbe0
    if ((v5 & 2) != 0) {
        // 0x7cc01
        *v4 = (v5 ^ 0x293ef0b0) + 0xf4dbe5a;
    }
    // 0x7cc1f
    *(int64_t *)v2 = v2 ^ 0x2691fc5b;
    int64_t result = v2 + 368; // 0x7cc57
    int32_t * v6 = (int32_t *)result; // 0x7cc5e
    *v6 = *v6 - *v4 & 0x75af46b;
    int64_t v7 = v2 ^ 0x2b324b82; // 0x7cc9e
    uint64_t v8 = *v3; // 0x7ccb3
    char v9 = *(char *)(v2 + 404); // 0x7ccbf
    int64_t v10 = v7; // 0x7ccc6
    int64_t v11; // 0x7cb43
    bool v12; // 0x7cb43
    if (v9 == 98) {
        unsigned char v13 = (char)v7; // 0x7cccc
        unsigned char v14 = (char)v8; // 0x7cccc
        char v15 = v13 - v14; // 0x7cccc
        int64_t v16 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v13 < v14) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 16 * (int64_t)(v13 % 16 - v14 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v15) % 2 == 0) | 2048 * (int64_t)(((v15 ^ v13) & (char)(v8 ^ v7)) < 0) | 2; // bp-8, 0x7cccf
        v11 = (int64_t)&v16;
        v10 = v7 & -256 | (int64_t)v15;
    }
    int64_t v17 = v11; // 0x7ccd4
    int64_t v18 = v10; // 0x7ccd4
    if (v9 == 50) {
        uint16_t v19 = (int16_t)v10; // 0x7ccda
        uint16_t v20 = (int16_t)v8; // 0x7ccda
        int16_t v21 = v19 - v20; // 0x7ccda
        int64_t v22 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v19 < v20) | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(v19 % 16 - v20 % 16 > 15) | 2048 * (int64_t)(((v21 ^ v19) & (int16_t)(v10 ^ v8)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v21) % 2 == 0) | 2; // bp-16, 0x7ccde
        v17 = (int64_t)&v22;
        v18 = v10 & -0x10000 | (int64_t)v21;
    }
    int64_t v23 = v17; // 0x7cce3
    int64_t v24 = v18; // 0x7cce3
    if (v9 == 80) {
        uint32_t v25 = (int32_t)v18; // 0x7cce9
        uint32_t v26 = (int32_t)v8; // 0x7cce9
        int32_t v27 = v25 - v26; // 0x7cce9
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0x7cce9
        v23 = v17 - 8;
        *(int64_t *)v23 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v25 < v26) | 64 * (int64_t)(v27 == 0) | 128 * (int64_t)(v27 < 0) | 16 * (int64_t)(v25 % 16 - v26 % 16 > 15) | 2048 * (int64_t)(((v27 ^ v25) & (int32_t)(v18 ^ v8)) < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
        v24 = v27;
    }
    uint64_t v29 = v24;
    int64_t v30 = v23; // 0x7ccf1
    int64_t v31 = v29; // 0x7ccf1
    if (v9 == 58) {
        // 0x7ccf7
        v31 = v29 - v8;
        unsigned char v32 = llvm_ctpop_i8((char)v31); // 0x7ccf7
        v30 = v23 - 8;
        *(int64_t *)v30 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v29 < v8) | 64 * (int64_t)(v31 == 0) | 128 * (int64_t)(v31 < 0) | 16 * (int64_t)(v29 % 16 - v8 % 16 > 15) | 2048 * (int64_t)(((v31 ^ v29) & (v29 ^ v8)) < 0) | 4 * (int64_t)(v32 % 2 == 0) | 2;
    }
    int64_t * v33 = (int64_t *)(v2 + 113); // 0x7cd0c
    *v33 = v31 - 0x3adca53b;
    int32_t v34 = *v6 | *v4; // 0x7cd33
    *v6 = v34;
    *v4 = *v4 & v34 + 0x5d76e120;
    *v33 = *v33 + 0x55218a2a;
    int32_t v35 = *v4; // 0x7cdf0
    if ((v35 & 2) != 0) {
        // 0x7ce07
        *v4 = v35 + 0x3805a77a | 0x4d882022;
    }
    int64_t * v36 = (int64_t *)(v2 + 10); // 0x7ce5c
    int64_t v37 = *v36; // 0x7ce5c
    int64_t v38 = v37; // 0x7ce71
    if (*(char *)(v37 + 2) != 0) {
        // 0x7ce77
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v37) = *(int64_t *)v30;
        v38 = *v36;
    }
    int32_t v39 = *v6; // 0x7cf39
    *v6 = v39 + (int32_t)*(int16_t *)(v38 + 3) ^ v39;
    *v36 = *v36 + 5;
    return result;
}

// Address range: 0x7d009 - 0x7d00b
int64_t function_7d009(void) {
    // 0x7d009
    int64_t result; // 0x7d009
    return result;
}

// Address range: 0x7d00c - 0x7d00d
int64_t function_7d00c(void) {
    // 0x7d00c
    int64_t result; // 0x7d00c
    return result;
}

// Address range: 0x7e7cd - 0x7e849
int64_t function_7e7cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x7e7cd
    int64_t v1; // 0x7e7cd
    int64_t v2 = *(int64_t *)(v1 + 10); // 0x7e7de
    uint32_t v3 = *(int32_t *)(v2 + 2); // 0x7e7e8
    int64_t v4 = *(int64_t *)(v1 + 187); // 0x7e7f5
    uint16_t v5 = *(int16_t *)v2; // 0x7e813
    *(int64_t *)(v1 + (int64_t)v5) = v4 + (int64_t)v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x7e849 - 0x7ecd2
int64_t function_7e849(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x7e849
    int64_t v1; // 0x7e849
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x7e904
    int32_t v3 = *v2; // 0x7e904
    int32_t v4 = v3; // 0x7e92e
    if ((v3 & 2) != 0) {
        // 0x7e934
        v4 = v3 & 0x614d4b17;
        *v2 = v4;
    }
    int32_t * v5 = (int32_t *)(v1 + 368); // 0x7e98c
    int32_t v6 = *v5 | v4; // 0x7e98c
    *v5 = v6;
    int64_t * v7 = (int64_t *)(v1 + 10); // 0x7e9d9
    uint16_t v8 = *(int16_t *)(*v7 + 2); // 0x7ea01
    int32_t v9 = *v2; // 0x7ea6b
    *v2 = v9 | 0x72c68380;
    int64_t v10 = *(int64_t *)(((int64_t)((int32_t)v8 - v6 + v9) & (int64_t)&g3) + v1); // 0x7eae3
    *(int64_t *)(v1 + 96) = v10 - 0x653cf834;
    int32_t v11 = *v5 + 0x64fd160c; // 0x7eb2d
    *v5 = v11;
    int32_t v12 = *v2; // 0x7eb34
    int32_t v13 = v11; // 0x7eb45
    if ((v12 & 2) != 0) {
        // 0x7eb4b
        *v2 = (v12 | 0x66ff8816) + 0x2273cac6;
        v13 = *v5;
    }
    int64_t v14 = *(int64_t *)(v1 + 271); // 0x7ebb8
    int64_t v15 = *v7; // 0x7ebd0
    uint16_t v16 = *(int16_t *)v15; // 0x7ec01
    int64_t v17 = v1 + 4 ^ 240; // 0x7ec61
    *v7 = v15 + 4;
    return ((v17 | 16) & (int64_t)L"\n2") + v17 - v14 - (int64_t)(((v13 ^ (int32_t)v16) + 0xfc84) % 0x10000);
}

// Address range: 0x7ecda - 0x7ecdd
int64_t function_7ecda(void) {
    // 0x7ecda
    int64_t result; // 0x7ecda
    return result;
}

// Address range: 0x8371d - 0x837cb
int64_t function_8371d(void) {
    // 0x8371d
    int64_t v1; // 0x8371d
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x83726
    int32_t v3 = *(int32_t *)*v2; // 0x8372f
    int64_t v4 = 0; // 0x8375f
    if (v3 != 0) {
        // 0x83765
        int64_t v5; // bp+136, 0x8371d
        int64_t v6 = (int64_t)&v5; // 0x83739
        int64_t v7 = (int64_t)v3 + v6; // 0x8371d
        int64_t v8 = v6; // 0x8371d
        int64_t v9 = 18; // 0x83767
        *(int64_t *)v7 = *(int64_t *)v8;
        v9 = v9 + 0xffffffff & 0xffffffff;
        v7 -= 8;
        v8 -= 8;
        while (v9 != 0) {
            // 0x83765
            *(int64_t *)v7 = *(int64_t *)v8;
            v9 = v9 + 0xffffffff & 0xffffffff;
            v7 -= 8;
            v8 -= 8;
        }
        // 0x83759
        v4 = (int64_t)*(int32_t *)*v2;
    }
    // 0x8376e
    int64_t v10; // 0x8371d
    int64_t v11 = v4 + (int64_t)&v10; // 0x83783
    *(int64_t *)(v11 + 128) = *(int64_t *)(v11 + 120);
    *(int32_t *)(v1 + 476) = 0;
    return *(int64_t *)(v11 + 112);
}

// Address range: 0x837cb - 0x83b40
int64_t function_837cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x837cb
    int64_t v1; // 0x837cb
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0x5942fc5e;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0x8385a
    *v3 = *v3 & *(int32_t *)(v2 + 35);
    int64_t * v4 = (int64_t *)(v2 + 96); // 0x83872
    int64_t v5 = *v4; // 0x83872
    *v4 = v5 + 0xba1e43bb;
    int64_t * v6 = (int64_t *)(v2 + 10); // 0x838bf
    uint64_t v7 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v6 + 3)); // 0x838dd
    int64_t v8 = v2 ^ 0x54e14b87; // 0x838fe
    uint64_t v9 = v5 + 0x653cf834; // 0x83918
    char v10 = *(char *)(v2 + 404); // 0x83936
    int64_t v11 = v7; // 0x8393d
    int64_t v12 = v8; // 0x8393d
    if (v10 == 98) {
        unsigned char v13 = (char)v9 % 32; // 0x83944
        bool v14 = (v7 & (int64_t)L"\n2") != 0; // 0x83944
        bool v15 = v7 % 2 != 0; // 0x83944
        v12 = v8;
        if (v13 != 0) {
            unsigned char v16 = (char)v8; // 0x83944
            unsigned char v17 = v16 >> 8 - v13 | v16 << v13; // 0x83944
            unsigned char v18 = v17 % 2; // 0x83944
            v14 = v13 == 1 ? v17 / 128 != v18 : (v7 & (int64_t)L"\n2") != 0;
            v15 = v18 != 0;
            v12 = v8 & -256 | (int64_t)v17;
        }
        v11 = 16 * (int64_t)((v7 & 16) != 0) | 4 * (int64_t)((v7 & 4) != 0) | 64 * (int64_t)((v7 & 64) != 0) | 128 * (int64_t)((char)v7 < 0) | 256 * (int64_t)((v7 & 256) != 0) | 512 * (int64_t)((v7 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v7 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v7 & (int64_t)"le") != 0) | (int64_t)v15 | 2048 * (int64_t)v14 | 2;
    }
    int64_t v19 = v11;
    int64_t v20 = v19; // 0x83956
    int64_t v21 = v12; // 0x83956
    if (v10 == 50) {
        uint16_t v22 = (int16_t)v9 % 32; // 0x83960
        bool v23 = (v19 & (int64_t)L"\n2") != 0; // 0x83960
        bool v24 = v19 % 2 != 0; // 0x83960
        v21 = v12;
        if (v22 != 0) {
            uint16_t v25 = (int16_t)v12; // 0x83960
            uint16_t v26 = v25 >> 16 - v22 | v25 << v22; // 0x83960
            uint16_t v27 = v26 % 2; // 0x83960
            v23 = v22 == 1 ? v26 / 0x8000 != v27 : (v19 & (int64_t)L"\n2") != 0;
            v24 = v27 != 0;
            v21 = v12 & -0x10000 | (int64_t)v26;
        }
        v20 = 16 * (int64_t)((v19 & 16) != 0) | 4 * (int64_t)((v19 & 4) != 0) | 64 * (int64_t)((v19 & 64) != 0) | 128 * (int64_t)((char)v19 < 0) | 256 * (int64_t)((v19 & 256) != 0) | 512 * (int64_t)((v19 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v19 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v19 & (int64_t)"le") != 0) | (int64_t)v24 | 2048 * (int64_t)v23 | 2;
    }
    int64_t v28 = v20;
    int64_t v29 = v28; // 0x8396c
    int64_t v30 = v21; // 0x8396c
    if (v10 == 80) {
        uint32_t v31 = (int32_t)v9 % 32; // 0x83973
        bool v32 = (v28 & (int64_t)L"\n2") != 0; // 0x83973
        bool v33 = v28 % 2 != 0; // 0x83973
        v30 = v21;
        if (v31 != 0) {
            uint32_t v34 = (int32_t)v21; // 0x83973
            uint32_t v35 = v34 >> 32 - v31 | v34 << v31; // 0x83973
            uint32_t v36 = v35 % 2; // 0x83973
            v32 = v31 == 1 ? v36 != (int32_t)(v35 < 0) : (v28 & (int64_t)L"\n2") != 0;
            v33 = v36 != 0;
            v30 = v35;
        }
        v29 = 16 * (int64_t)((v28 & 16) != 0) | 4 * (int64_t)((v28 & 4) != 0) | 64 * (int64_t)((v28 & 64) != 0) | 128 * (int64_t)((char)v28 < 0) | 256 * (int64_t)((v28 & 256) != 0) | 512 * (int64_t)((v28 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v28 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v28 & (int64_t)"le") != 0) | (int64_t)v33 | 2048 * (int64_t)v32 | 2;
    }
    int64_t v37 = v30;
    int64_t v38 = v29;
    int64_t v39 = v38; // 0x83985
    uint64_t v40 = v37; // 0x83985
    if (v10 == 58) {
        uint64_t v41 = v9 % 64; // 0x8398f
        bool v42 = (v38 & (int64_t)L"\n2") != 0; // 0x8398f
        int64_t v43 = v38 % 2; // 0x8398f
        v40 = v37;
        if (v41 != 0) {
            v40 = v37 >> 64 - v41 | v37 << v41;
            v43 = v40 % 2;
            v42 = v41 == 1 ? v40 / 0x8000000000000000 != v43 : (v38 & (int64_t)L"\n2") != 0;
        }
        v39 = 16 * (int64_t)((v38 & 16) != 0) | 4 * (int64_t)((v38 & 4) != 0) | 64 * (int64_t)((v38 & 64) != 0) | 128 * (int64_t)((char)v38 < 0) | 256 * (int64_t)((v38 & 256) != 0) | 512 * (int64_t)((v38 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v38 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v38 & (int64_t)"le") != 0) | 2048 * (int64_t)v42 | (int64_t)(v43 != 0) | 2;
    }
    int64_t * v44 = (int64_t *)(v2 + 113); // 0x839b7
    *v44 = v40;
    int64_t v45 = *v6; // 0x83a03
    if (*(char *)(v45 + 2) != 0) {
        // 0x83a2f
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v45 + 3)) = v39;
    }
    // 0x83a6f
    *v44 = v40 + 0x1a44e4ef;
    *v3 = *v3 - 0x68b4ad2f;
    *v6 = *v6 + 5;
    return (int64_t)&g2 + 1;
}

// Address range: 0x93f79 - 0x93ff3
int64_t function_93f79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x93f79
    int64_t v1; // 0x93f79
    int64_t v2 = *(int64_t *)(v1 + 10); // 0x93f8a
    uint32_t v3 = *(int32_t *)(v2 + 2); // 0x93f94
    int64_t v4 = *(int64_t *)(v1 + 187); // 0x93fa1
    uint16_t v5 = *(int16_t *)v2; // 0x93fbd
    *(int64_t *)(v1 + (int64_t)v5) = v4 + (int64_t)v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x93ff3 - 0x9406d
int64_t function_93ff3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x93ff3
    int64_t v1; // 0x93ff3
    int64_t v2 = *(int64_t *)(v1 + 10); // 0x94004
    int64_t v3 = *(int64_t *)*(int64_t *)(v1 + (int64_t)*(int16_t *)v2); // 0x94018
    *(int64_t *)(v1 + (int64_t)*(int16_t *)(v2 + 2)) = v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x9406d - 0x94478
int64_t function_9406d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x9406d
    int64_t v1; // 0x9406d
    int64_t v2 = v1 + 35; // 0x9407a
    int32_t * v3 = (int32_t *)v2; // 0x94083
    int32_t v4 = *v3; // 0x94083
    if ((v4 & 2) != 0) {
        // 0x9409a
        *v3 = v4 + 0x1c953985;
    }
    // 0x940b2
    *(char *)(v1 + 367) = 0;
    int64_t v5 = v1 + 10; // 0x940ea
    int64_t * v6 = (int64_t *)v5; // 0x940f7
    int32_t v7 = *v3 + *(int32_t *)*v6; // 0x941a4
    int32_t * v8 = (int32_t *)(v1 + 368); // 0x941de
    *v8 = *v8 + v7;
    *v3 = *v3 - 0x29fcf13e;
    int64_t v9 = v7 ^ 0xda3b7d9; // 0x9422d
    *(int64_t *)v1 = v9;
    int32_t v10 = *v8 & *v3 + 0x1f834ebc; // 0x9429e
    *v8 = v10;
    int32_t v11 = *v3 + v10 ^ 0x60b79571; // 0x942eb
    *v8 = v11;
    *v3 = (v11 + 0x2594b00c | *v3) & 0x48eb7f20;
    int64_t v12 = (v2 & v9) - 0x80000000 ^ v5; // 0x94364
    int64_t v13 = *v6; // 0x94367
    int64_t v14 = *(int64_t *)(v1 + 271); // 0x9439d
    uint16_t v15 = *(int16_t *)(v13 + 4); // 0x943d2
    int32_t v16 = *v8; // 0x9440a
    *v6 = v13 + 6;
    return v12 + (int64_t)&g2 - 0x100000004 - v13 - ((int64_t)&g2 - v12 + v14 ^ v14) ^ (int64_t)((v16 ^ (int32_t)v15) - 0x6463a428);
}

// Address range: 0x9447d - 0x9447f
int64_t function_9447d(void) {
    // 0x9447d
    int64_t result; // 0x9447d
    return result;
}

// Address range: 0x94483 - 0x94484
int64_t function_94483(void) {
    // 0x94483
    int64_t result; // 0x94483
    return result;
}

// Address range: 0x96eb4 - 0x96f2a
int64_t function_96eb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x96eb4
    int64_t v1; // 0x96eb4
    int64_t v2 = *(int64_t *)(v1 + 10); // 0x96ec5
    int64_t v3 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v2); // 0x96ed6
    *(int64_t *)(v1 + (int64_t)*(int16_t *)(v2 + 2)) = v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x96f2a - 0x97311
int64_t function_96f2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x96f2a
    int64_t v1; // 0x96f2a
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x96f5c
    *v3 = *v3 + 0x653cf834 ^ 0x6348eebb;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x6348eebb;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0x96fcd
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)*v4); // 0x96ffc
    int64_t v6 = v2 + 0x6348eebb; // 0x97015
    uint64_t v7 = *v3 ^ 0x6348eebb; // 0x97036
    char v8 = *(char *)(v2 + 404); // 0x97069
    int64_t v9 = v5; // 0x97070
    int64_t v10 = v6; // 0x97070
    if (v8 == 98) {
        unsigned char v11 = (char)v7 % 32; // 0x9707d
        bool v12 = (v5 & (int64_t)L"\n2") != 0; // 0x9707d
        bool v13 = v5 % 2 != 0; // 0x9707d
        v10 = v6;
        if (v11 != 0) {
            unsigned char v14 = (char)v6; // 0x9707d
            unsigned char v15 = v14 >> 8 - v11 | v14 << v11; // 0x9707d
            unsigned char v16 = v15 % 2; // 0x9707d
            v12 = v11 == 1 ? v15 / 128 != v16 : (v5 & (int64_t)L"\n2") != 0;
            v13 = v16 != 0;
            v10 = v6 & -256 | (int64_t)v15;
        }
        v9 = 16 * (int64_t)((v5 & 16) != 0) | 4 * (int64_t)((v5 & 4) != 0) | 64 * (int64_t)((v5 & 64) != 0) | 128 * (int64_t)((char)v5 < 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | (int64_t)v13 | 2048 * (int64_t)v12 | 2;
    }
    int64_t v17 = v9;
    int64_t v18 = v17; // 0x97085
    int64_t v19 = v10; // 0x97085
    if (v8 == 50) {
        uint16_t v20 = (int16_t)v7 % 32; // 0x97093
        bool v21 = (v17 & (int64_t)L"\n2") != 0; // 0x97093
        bool v22 = v17 % 2 != 0; // 0x97093
        v19 = v10;
        if (v20 != 0) {
            uint16_t v23 = (int16_t)v10; // 0x97093
            uint16_t v24 = v23 >> 16 - v20 | v23 << v20; // 0x97093
            uint16_t v25 = v24 % 2; // 0x97093
            v21 = v20 == 1 ? v24 / 0x8000 != v25 : (v17 & (int64_t)L"\n2") != 0;
            v22 = v25 != 0;
            v19 = v10 & -0x10000 | (int64_t)v24;
        }
        v18 = 16 * (int64_t)((v17 & 16) != 0) | 4 * (int64_t)((v17 & 4) != 0) | 64 * (int64_t)((v17 & 64) != 0) | 128 * (int64_t)((char)v17 < 0) | 256 * (int64_t)((v17 & 256) != 0) | 512 * (int64_t)((v17 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v17 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v17 & (int64_t)"le") != 0) | (int64_t)v22 | 2048 * (int64_t)v21 | 2;
    }
    int64_t v26 = v18;
    int64_t v27 = v26; // 0x9709f
    int64_t v28 = v19; // 0x9709f
    if (v8 == 80) {
        uint32_t v29 = (int32_t)v7 % 32; // 0x970b4
        bool v30 = (v26 & (int64_t)L"\n2") != 0; // 0x970b4
        bool v31 = v26 % 2 != 0; // 0x970b4
        v28 = v19;
        if (v29 != 0) {
            uint32_t v32 = (int32_t)v19; // 0x970b4
            uint32_t v33 = v32 >> 32 - v29 | v32 << v29; // 0x970b4
            uint32_t v34 = v33 % 2; // 0x970b4
            v30 = v29 == 1 ? v34 != (int32_t)(v33 < 0) : (v26 & (int64_t)L"\n2") != 0;
            v31 = v34 != 0;
            v28 = v33;
        }
        v27 = 16 * (int64_t)((v26 & 16) != 0) | 4 * (int64_t)((v26 & 4) != 0) | 64 * (int64_t)((v26 & 64) != 0) | 128 * (int64_t)((char)v26 < 0) | 256 * (int64_t)((v26 & 256) != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | (int64_t)v31 | 2048 * (int64_t)v30 | 2;
    }
    int64_t v35 = v28;
    int64_t v36 = v27;
    int64_t v37 = v36; // 0x970bf
    uint64_t v38 = v35; // 0x970bf
    int64_t v39 = (int64_t)&g1; // 0x970bf
    if (v8 == 58) {
        uint64_t v40 = v7 % 64; // 0x970cd
        bool v41 = (v36 & (int64_t)L"\n2") != 0; // 0x970cd
        int64_t v42 = v36 % 2; // 0x970cd
        v38 = v35;
        if (v40 != 0) {
            v38 = v35 >> 64 - v40 | v35 << v40;
            v42 = v38 % 2;
            v41 = v40 == 1 ? v38 / 0x8000000000000000 != v42 : (v36 & (int64_t)L"\n2") != 0;
        }
        v37 = 16 * (int64_t)((v36 & 16) != 0) | 4 * (int64_t)((v36 & 4) != 0) | 64 * (int64_t)((v36 & 64) != 0) | 128 * (int64_t)((char)v36 < 0) | 256 * (int64_t)((v36 & 256) != 0) | 512 * (int64_t)((v36 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v36 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v36 & (int64_t)"le") != 0) | 2048 * (int64_t)v41 | (int64_t)(v42 != 0) | 2;
        v39 = (int64_t)&g2;
    }
    int64_t v43 = v2 + 113; // 0x970e1
    int64_t * v44 = (int64_t *)v43; // 0x970eb
    *v44 = v38;
    *v44 = v38 + 0x1a44e4ef;
    int32_t * v45 = (int32_t *)(v2 + 368); // 0x97198
    int32_t v46 = *v45 ^ *(int32_t *)(v2 + 35) - 0xd8a75ef; // 0x97198
    *v45 = v46;
    int64_t v47 = *v4; // 0x971c0
    int32_t v48 = v46; // 0x971e5
    int64_t v49 = v47; // 0x971e5
    int64_t v50 = v39 ^ v43; // 0x971e5
    if (*(char *)(v47 + 4) != 0) {
        // 0x971eb
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v47) = v37;
        v48 = *v45;
        v49 = *v4;
        v50 = 0;
    }
    // 0x97249
    *v45 = v48 - 0x64a62ad2 - (int32_t)*(int16_t *)(v49 + 2);
    *v4 = *v4 + 5;
    return (v50 + v2 ^ v2) - *(int64_t *)(v2 + 271) | 16;
}

// Address range: 0x99e21 - 0x99e99
int64_t function_99e21(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x99e21
    int64_t v1; // 0x99e21
    int64_t v2 = *(int64_t *)(v1 + 10); // 0x99e32
    int64_t v3 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v2); // 0x99e45
    *(int64_t *)(v1 + (int64_t)*(int16_t *)(v2 + 2)) = v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x99e99 - 0x9a24c
int64_t function_99e99(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x99e99
    int64_t v1; // 0x99e99
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x99ee3
    int64_t v4 = *v3; // 0x99ee3
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x2d705956;
    *v3 = v4 + 0x37cc9ede;
    int64_t * v5 = (int64_t *)(v2 + 10); // 0x99f90
    uint64_t v6 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v5 + 2)); // 0x99faa
    int64_t v7 = v2 + 0x2d705956; // 0x99fcb
    uint64_t v8 = v4 + 0x653cf834; // 0x99ff9
    char v9 = *(char *)(v2 + 404); // 0x9a017
    int64_t v10 = v6; // 0x9a01f
    int64_t v11 = v7; // 0x9a01f
    if (v9 == 98) {
        unsigned char v12 = (char)v8 % 32; // 0x9a026
        bool v13 = (v6 & (int64_t)L"\n2") != 0; // 0x9a026
        bool v14 = v6 % 2 != 0; // 0x9a026
        v11 = v7;
        if (v12 != 0) {
            unsigned char v15 = (char)v7; // 0x9a026
            char v16 = v6 % 2 != 0; // 0x9a026
            v13 = v12 == 1 ? v15 / 128 != v16 : (v6 & (int64_t)L"\n2") != 0;
            v14 = (1 << v12 - 1 & v15) != 0;
            v11 = v7 & -256 | (int64_t)(v15 >> v12 | (char)((int16_t)v7 % 256 << (int16_t)(9 - v12)) | v16 << 8 - v12);
        }
        v10 = 16 * (int64_t)((v6 & 16) != 0) | 4 * (int64_t)((v6 & 4) != 0) | 64 * (int64_t)((v6 & 64) != 0) | 128 * (int64_t)((char)v6 < 0) | 256 * (int64_t)((v6 & 256) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | (int64_t)v14 | 2048 * (int64_t)v13 | 2;
    }
    int64_t v17 = v11;
    uint64_t v18 = v10;
    int64_t v19 = v18; // 0x9a02e
    int64_t v20 = v17; // 0x9a02e
    if (v9 == 50) {
        uint16_t v21 = (int16_t)v8 % 32; // 0x9a03f
        bool v22 = (v18 & (int64_t)L"\n2") != 0; // 0x9a03f
        bool v23 = v18 % 2 != 0; // 0x9a03f
        v20 = v17;
        if (v21 != 0) {
            uint16_t v24 = (int16_t)v17; // 0x9a03f
            int16_t v25 = v18 % 2 != 0; // 0x9a03f
            v22 = v21 == 1 ? v24 / 0x8000 != v25 : (v18 & (int64_t)L"\n2") != 0;
            v23 = (1 << v21 - 1 & v24) != 0;
            v20 = v17 & -0x10000 | (int64_t)(v25 << 16 - v21 | v24 >> v21 | (int16_t)((int32_t)v17 % 0x10000 << (int32_t)(17 - v21)));
        }
        v19 = 16 * (int64_t)((v18 & 16) != 0) | 4 * (int64_t)((v18 & 4) != 0) | 64 * (int64_t)((v18 & 64) != 0) | 128 * (int64_t)((char)v18 < 0) | 256 * (int64_t)((v18 & 256) != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | (int64_t)v23 | 2048 * (int64_t)v22 | 2;
    }
    uint64_t v26 = v19;
    int64_t v27 = v26; // 0x9a051
    int64_t v28 = v20; // 0x9a051
    if (v9 == 80) {
        uint32_t v29 = (int32_t)v8 % 32; // 0x9a05f
        bool v30 = (v26 & (int64_t)L"\n2") != 0; // 0x9a05f
        bool v31 = v26 % 2 != 0; // 0x9a05f
        v28 = v20;
        if (v29 != 0) {
            int32_t v32 = v20; // 0x9a05f
            v30 = v29 == 1 ? v32 < 0 != v26 % 2 != 0 : (v26 & (int64_t)L"\n2") != 0;
            v31 = (1 << v29 - 1 & v32) != 0;
            v28 = v32 >> v29 | (int32_t)((v20 & 0xffffffff) << (int64_t)(33 - v29)) | (int32_t)(v26 % 2 != 0) << 32 - v29;
        }
        v27 = 16 * (int64_t)((v26 & 16) != 0) | 4 * (int64_t)((v26 & 4) != 0) | 64 * (int64_t)((v26 & 64) != 0) | 128 * (int64_t)((char)v26 < 0) | 256 * (int64_t)((v26 & 256) != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | (int64_t)v31 | 2048 * (int64_t)v30 | 2;
    }
    uint64_t v33 = v28;
    uint64_t v34 = v27;
    int64_t v35 = v34; // 0x9a066
    int64_t v36 = v33; // 0x9a066
    if (v9 == 58) {
        uint64_t v37 = v8 % 64; // 0x9a06d
        bool v38 = (v34 & (int64_t)L"\n2") != 0; // 0x9a06d
        bool v39 = v34 % 2 != 0; // 0x9a06d
        v36 = v33;
        if (v37 != 0) {
            int64_t v40 = v34 % 2 != 0; // 0x9a06d
            v38 = v37 == 1 ? v33 / 0x8000000000000000 != v40 : (v34 & (int64_t)L"\n2") != 0;
            v39 = (v33 & 1 << v37 - 1) != 0;
            v36 = v33 >> v37 | (int64_t)((int128_t)v33 << (int128_t)(65 - v37)) | v40 << 64 - v37;
        }
        v35 = 16 * (int64_t)((v34 & 16) != 0) | 4 * (int64_t)((v34 & 4) != 0) | 64 * (int64_t)((v34 & 64) != 0) | 128 * (int64_t)((char)v34 < 0) | 256 * (int64_t)((v34 & 256) != 0) | 512 * (int64_t)((v34 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v34 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v34 & (int64_t)"le") != 0) | (int64_t)v39 | 2048 * (int64_t)v38 | 2;
    }
    int64_t * v41 = (int64_t *)(v2 + 113); // 0x9a08e
    *v41 = v36;
    int64_t v42 = *v5; // 0x9a0a9
    int64_t v43 = v36; // 0x9a0cc
    if (*(char *)(v42 + 4) != 0) {
        // 0x9a0d2
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v42 + 2)) = v35;
        v43 = *v41;
    }
    // 0x9a12a
    *v41 = v43 + 0x1a44e4ef;
    int32_t * v44 = (int32_t *)(v2 + 368); // 0x9a178
    int32_t v45 = -0x5d1cfd6 - *(int32_t *)(v2 + 35) + *v44 | 0x7c3f7914; // 0x9a185
    *v44 = v45;
    uint32_t v46 = (v45 ^ (int32_t)*(int16_t *)*v5) - 0x51b094c3; // 0x9a1fb
    *v44 = v46 | v45;
    *v5 = *v5 + 5;
    return v46 % 0x10000;
}

// Address range: 0x9a46e - 0x9a8d2
int64_t function_9a46e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x9a46e
    int64_t v1; // 0x9a46e
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x9a478
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x9a4a3
    *v3 = *v3 - (*v2 | 0x72ac0577);
    int32_t v4 = *v2; // 0x9a4d6
    *v2 = v4 & 0x6ea7f6f2;
    int32_t v5 = *v3 | v4 & 0x4480e6a2; // 0x9a4fa
    *v3 = v5;
    *v2 = *v2 | v5;
    *(char *)(v1 + 367) = 0;
    int64_t * v6 = (int64_t *)(v1 + 10); // 0x9a5f1
    int32_t v7 = *v2; // 0x9a63f
    int32_t v8 = v7 + *(int32_t *)(*v6 + 2) ^ *v3; // 0x9a671
    *v2 = v7 - v8;
    *v3 = *v3 | 0x47cfdd0b;
    *(int64_t *)v1 = (int64_t)(v8 ^ 0xda3b7d9);
    int32_t v9 = *v2 - *v3 - 0x3eb35c34; // 0x9a77a
    *v2 = v9;
    int32_t v10 = v9 + *v3; // 0x9a7aa
    *v2 = v10;
    int32_t v11 = *v3 + v10; // 0x9a7c7
    *v2 = v11;
    uint32_t v12 = v11 ^ (int32_t)*(int16_t *)*v6; // 0x9a844
    *v2 = v11 - v12;
    *v6 = *v6 + 6;
    return (int64_t)v12 & (int64_t)&g3;
}

// Address range: 0x9a8d4 - 0x9a8d5
int64_t function_9a8d4(int64_t a1) {
    // 0x9a8d4
    int64_t result; // 0x9a8d4
    return result;
}

// Address range: 0x9faa4 - 0x9fb50
int64_t function_9faa4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x9faa4
    int64_t v1; // 0x9faa4
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x9fab5
    int64_t v3 = *v2; // 0x9fab5
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0x9fac5
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0x9faea
    *(int64_t *)v5 = *(int64_t *)v4;
    uint32_t v6 = *(int32_t *)*v2; // 0x9fb12
    *(int64_t *)(v5 + 8) = *(int64_t *)(v1 + 187) + (int64_t)v6;
    *(int32_t *)(v1 + 476) = 0;
    return result;
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

// Address range: 0xa13d6 - 0xa1484
int64_t function_a13d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xa13d6
    int64_t v1; // 0xa13d6
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xa13e7
    int64_t v3 = *v2; // 0xa13e7
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0xa13f8
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0xa141d
    *(int64_t *)v5 = *(int64_t *)v4;
    uint32_t v6 = *(int32_t *)*v2; // 0xa1445
    *(int64_t *)(v5 + 8) = *(int64_t *)(v1 + 187) + (int64_t)v6;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xa1484 - 0xa1939
int64_t function_a1484(void) {
    // 0xa1484
    int64_t v1; // 0xa1484
    int64_t v2 = v1;
    int64_t result = v2 + 35; // 0xa1487
    int32_t * v3 = (int32_t *)result; // 0xa148e
    int32_t v4 = *v3; // 0xa148e
    int32_t v5 = v4; // 0xa149f
    if ((v4 & 2) != 0) {
        // 0xa14a5
        v5 = v4 + 0x97da242;
        *v3 = v5;
    }
    int32_t * v6 = (int32_t *)(v2 + 368); // 0xa14d8
    int32_t v7 = *v6 - v5; // 0xa14d8
    *v6 = v7;
    int32_t v8 = (*v3 ^ 0x36020061) & v7 | 0x1f1759c; // 0xa1514
    *v6 = v8;
    int32_t v9 = *v3 & 0x71376753 & v8; // 0xa157e
    *v3 = v9;
    int64_t * v10 = (int64_t *)(v2 + 10); // 0xa1605
    uint16_t v11 = *(int16_t *)(*v10 + 2); // 0xa162c
    int32_t v12 = *v6; // 0xa1664
    *v3 = v9 + 0x2c217984;
    *(int64_t *)(v2 + 129) = v2 - 0x1a44e4ef + ((int64_t)((int32_t)v11 - v12 ^ v9) & (int64_t)&g3);
    int32_t v13 = (*v6 | *v3) & 0x4a211226 | 0x24d089c8; // 0xa17ef
    *v6 = v13;
    int32_t v14 = 0x13274e1d - *v3 + v13; // 0xa182e
    *v6 = v14;
    *v6 = ((int32_t)*(int16_t *)*v10 ^ 0x4ccb9807) & v14;
    *v10 = *v10 + 4;
    return result;
}

// Address range: 0xa1a95 - 0xa1b3e
int64_t function_a1a95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xa1a95
    int64_t v1; // 0xa1a95
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xa1aa6
    int64_t v3 = *v2; // 0xa1aa6
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0xa1ab9
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0xa1adb
    *(int64_t *)v5 = v4;
    uint32_t v6 = *(int32_t *)*v2; // 0xa1b01
    *(int64_t *)(v5 + 8) = *(int64_t *)(v1 + 187) + (int64_t)v6;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xa1b3e - 0xa1ecf
int64_t function_a1b3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xa1b3e
    int64_t v1; // 0xa1b3e
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 113); // 0xa1b5f
    int64_t * v4 = (int64_t *)(v2 + 96); // 0xa1b80
    *v4 = *v4 + 0x9ef2d358;
    *(int64_t *)v2 = v2 ^ 0x34166cfd;
    int64_t * v5 = (int64_t *)(v2 + 10); // 0xa1c0a
    int64_t v6 = *v5 + 1; // 0xa1c17
    int64_t v7 = v2 + (int64_t)*(int16_t *)v6; // 0xa1c25
    uint64_t v8 = *(int64_t *)v7; // 0xa1c2f
    int64_t v9 = v2 ^ 0x39b5db24; // 0xa1c4c
    uint64_t v10 = *v4 - 0x39b5db24; // 0xa1c75
    int64_t v11 = (a2 ^ 36) - v1 + v2 - *v3 & 128; // 0xa1c82
    unsigned char v12 = *(char *)(v2 + 404); // 0xa1c93
    int64_t v13 = v8; // 0xa1c9a
    int64_t v14 = v9; // 0xa1c9a
    int64_t v15 = v11; // 0xa1c9a
    if (v12 == 98) {
        unsigned char v16 = (char)v10 % 32; // 0xa1ca1
        bool v17 = (v8 & (int64_t)L"\n2") != 0; // 0xa1ca1
        v14 = v9;
        bool v18 = v8 % 2 != 0; // 0xa1ca1
        if (v16 != 0) {
            unsigned char v19 = (char)v9; // 0xa1ca1
            char v20 = v8 % 2 != 0; // 0xa1ca1
            v17 = v16 == 1 ? v19 / 128 != v20 : (v8 & (int64_t)L"\n2") != 0;
            v14 = v9 & -256 | (int64_t)(v20 << 8 - v16 | v19 >> v16 | (char)((int16_t)v9 % 256 << (int16_t)(9 - v16)));
            v18 = (1 << v16 - 1 & v19) != 0;
        }
        v13 = 16 * (int64_t)((v8 & 16) != 0) | 4 * (int64_t)((v8 & 4) != 0) | 64 * (int64_t)((v8 & 64) != 0) | 128 * (int64_t)((char)v8 < 0) | 256 * (int64_t)((v8 & 256) != 0) | 512 * (int64_t)((v8 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v8 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v8 & (int64_t)"le") != 0) | 2048 * (int64_t)v17 | (int64_t)v18 | 2;
        v15 = v11 - ((1 - a4) % 2 | -0x80000000);
    }
    int64_t v21 = v15;
    int64_t v22 = v14;
    uint64_t v23 = v13;
    int64_t v24 = v23; // 0xa1cae
    int64_t v25 = v22; // 0xa1cae
    if (v12 == 50) {
        uint16_t v26 = (int16_t)v10 % 32; // 0xa1cb8
        bool v27 = (v23 & (int64_t)L"\n2") != 0; // 0xa1cb8
        v25 = v22;
        bool v28 = v23 % 2 != 0; // 0xa1cb8
        if (v26 != 0) {
            uint16_t v29 = (int16_t)v22; // 0xa1cb8
            int16_t v30 = v23 % 2 != 0; // 0xa1cb8
            v27 = v26 == 1 ? v29 / 0x8000 != v30 : (v23 & (int64_t)L"\n2") != 0;
            v25 = v22 & -0x10000 | (int64_t)(v30 << 16 - v26 | v29 >> v26 | (int16_t)((int32_t)v22 % 0x10000 << (int32_t)(17 - v26)));
            v28 = (1 << v26 - 1 & v29) != 0;
        }
        v24 = 16 * (int64_t)((v23 & 16) != 0) | 4 * (int64_t)((v23 & 4) != 0) | 64 * (int64_t)((v23 & 64) != 0) | 128 * (int64_t)((char)v23 < 0) | 256 * (int64_t)((v23 & 256) != 0) | 512 * (int64_t)((v23 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v23 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v23 & (int64_t)"le") != 0) | 2048 * (int64_t)v27 | (int64_t)v28 | 2;
    }
    uint64_t v31 = v24;
    int64_t v32 = v31; // 0xa1cc0
    int64_t v33 = v25; // 0xa1cc0
    if (v12 == 80) {
        uint32_t v34 = (int32_t)v10 % 32; // 0xa1ccd
        bool v35 = (v31 & (int64_t)L"\n2") != 0; // 0xa1ccd
        v33 = v25;
        bool v36 = v31 % 2 != 0; // 0xa1ccd
        if (v34 != 0) {
            int32_t v37 = v25; // 0xa1ccd
            v35 = v34 == 1 ? v37 < 0 != v31 % 2 != 0 : (v31 & (int64_t)L"\n2") != 0;
            v33 = v37 >> v34 | (int32_t)((v25 & 0xffffffff) << (int64_t)(33 - v34)) | (int32_t)(v31 % 2 != 0) << 32 - v34;
            v36 = (1 << v34 - 1 & v37) != 0;
        }
        v32 = 16 * (int64_t)((v31 & 16) != 0) | 4 * (int64_t)((v31 & 4) != 0) | 64 * (int64_t)((v31 & 64) != 0) | 128 * (int64_t)((char)v31 < 0) | 256 * (int64_t)((v31 & 256) != 0) | 512 * (int64_t)((v31 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v31 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v31 & (int64_t)"le") != 0) | 2048 * (int64_t)v35 | (int64_t)v36 | 2;
    }
    uint64_t v38 = v33;
    uint64_t v39 = v32;
    int64_t v40 = v39; // 0xa1cd4
    int64_t v41 = v38; // 0xa1cd4
    if (v12 == 58) {
        uint64_t v42 = v10 % 64; // 0xa1cde
        bool v43 = (v39 & (int64_t)L"\n2") != 0; // 0xa1cde
        v41 = v38;
        bool v44 = v39 % 2 != 0; // 0xa1cde
        if (v42 != 0) {
            int64_t v45 = v39 % 2 != 0; // 0xa1cde
            v43 = v42 == 1 ? v38 / 0x8000000000000000 != v45 : (v39 & (int64_t)L"\n2") != 0;
            v41 = v38 >> v42 | (int64_t)((int128_t)v38 << (int128_t)(65 - v42)) | v45 << 64 - v42;
            v44 = (v38 & 1 << v42 - 1) != 0;
        }
        v40 = 16 * (int64_t)((v39 & 16) != 0) | 4 * (int64_t)((v39 & 4) != 0) | 64 * (int64_t)((v39 & 64) != 0) | 128 * (int64_t)((char)v39 < 0) | 256 * (int64_t)((v39 & 256) != 0) | 512 * (int64_t)((v39 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v39 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v39 & (int64_t)"le") != 0) | 2048 * (int64_t)v43 | (int64_t)v44 | 2;
    }
    int64_t v46 = v41 - 0x48e6f7e2; // 0xa1ce2
    *v3 = v46;
    int64_t v47 = v10 | v6 + v2; // 0xa1d31
    int64_t v48 = *v5; // 0xa1d3f
    int64_t v49 = v46; // 0xa1d61
    int64_t v50 = v47; // 0xa1d61
    if (*(char *)v48 != 0) {
        // 0xa1d67
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v48 + 1)) = v40;
        v49 = *v3;
        v50 = v47 + 56 + v40 & 32;
    }
    int64_t v51 = v2 + ((a5 ^ a2 | -0x80000000) + 0x80000000 ^ (int64_t)&g3); // 0xa1bd4
    *v3 = v49 + 0x632bdcd1;
    int32_t * v52 = (int32_t *)(v2 + 368); // 0xa1e9a
    *v52 = (int32_t)*(int16_t *)(*v5 + 3) + 0x79a60067 & *v52;
    *v5 = *v5 + 5;
    return (((v50 ^ 32) - 0x7fffffff | 0x7fffffff) ^ (v21 & 8) + v51 + ((v1 & -256 | (int64_t)v12) & v51 & (v21 | 128))) + (v7 & (int64_t)&g1 & 8 | 128);
}

// Address range: 0xa1ecf - 0xa2361
int64_t function_a1ecf(int64_t a1, int64_t a2, int64_t a3) {
    // 0xa1ecf
    int64_t v1; // 0xa1ecf
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xa1f39
    int64_t v3 = v1 + 368; // 0xa1f4b
    int32_t * v4 = (int32_t *)v3; // 0xa1f52
    int32_t v5 = *v4 - *v2; // 0xa1f52
    *v4 = v5;
    int32_t v6 = v5 - *v2; // 0xa1f9e
    *v4 = v6;
    *v4 = v6 & 0x5dbf06d2 & *v2;
    *(char *)(v1 + 367) = 0;
    int64_t * v7 = (int64_t *)(v1 + 10); // 0xa2052
    int32_t v8 = *v2 + *(int32_t *)*v7; // 0xa20c0
    *v4 = *v4 & v8;
    *(int64_t *)v1 = (int64_t)(v8 ^ 0xda3b7d9);
    int32_t v9 = *v4 ^ 0xc414663; // 0xa2177
    *v4 = v9;
    int32_t v10 = *v2; // 0xa218b
    int32_t v11 = v9; // 0xa219d
    int32_t v12 = v10; // 0xa219d
    if ((v10 & 2) != 0) {
        // 0xa21a3
        v12 = v10 ^ 0x4fbbd017;
        *v2 = v12;
        v11 = *v4;
    }
    int32_t v13 = v12 | v11; // 0xa21d5
    *v4 = v13;
    *v4 = v13 - ((int32_t)*(int16_t *)(*v7 + 4) - v13 ^ 0x75fbb160);
    *v7 = *v7 + 6;
    return (*(int64_t *)(v1 + 271) | -15) & v3;
}

// Address range: 0xa2366 - 0xa2369
int64_t function_a2366(void) {
    // 0xa2366
    int64_t result; // 0xa2366
    return result;
}

// Address range: 0xa6470 - 0xa68c2
int64_t function_a6470(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xa6470
    int64_t v1; // 0xa6470
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xa647d
    int64_t v4 = v2 + 368; // 0xa6498
    int32_t * v5 = (int32_t *)v4; // 0xa649f
    *v5 = *v5 + 0x196a30f;
    *v3 = *v3 + 0x821d9614;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    uint64_t v6 = *v3 - 0x1ce09de0; // 0xa65ef
    int64_t v7 = v2 + 404; // 0xa660c
    char v8 = *(char *)v7; // 0xa6621
    int64_t v9; // 0xa6470
    int64_t v10; // 0xa6470
    bool v11; // 0xa6470
    if (v8 == 98) {
        unsigned char v12 = (char)v2; // 0xa662b
        unsigned char v13 = (char)v6; // 0xa662b
        char v14 = v12 - v13; // 0xa662b
        int64_t v15 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v12 < v13) | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v12 % 16 - v13 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0) | 2048 * (int64_t)(((v14 ^ v12) & (char)(v6 ^ v2)) < 0) | 2; // bp-8, 0xa662e
        v10 = (int64_t)&v15;
        v9 = v2 & -256 | (int64_t)v14;
    }
    int64_t v16 = v10; // 0xa6634
    int64_t v17 = v9; // 0xa6634
    if (v8 == 50) {
        uint16_t v18 = (int16_t)v9; // 0xa663a
        uint16_t v19 = (int16_t)v6; // 0xa663a
        int16_t v20 = v18 - v19; // 0xa663a
        int64_t v21 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v18 < v19) | 64 * (int64_t)(v20 == 0) | 128 * (int64_t)(v20 < 0) | 16 * (int64_t)(v18 % 16 - v19 % 16 > 15) | 2048 * (int64_t)(((v20 ^ v18) & (int16_t)(v9 ^ v6)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v20) % 2 == 0) | 2; // bp-16, 0xa663e
        v16 = (int64_t)&v21;
        v17 = v9 & -0x10000 | (int64_t)v20;
    }
    int64_t v22 = v16; // 0xa664b
    int64_t v23 = v17; // 0xa664b
    if (v8 == 80) {
        uint32_t v24 = (int32_t)v17; // 0xa6651
        uint32_t v25 = (int32_t)v6; // 0xa6651
        int32_t v26 = v24 - v25; // 0xa6651
        unsigned char v27 = llvm_ctpop_i8((char)v26); // 0xa6651
        v22 = v16 - 8;
        *(int64_t *)v22 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v24 < v25) | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 16 * (int64_t)(v24 % 16 - v25 % 16 > 15) | 2048 * (int64_t)(((v26 ^ v24) & (int32_t)(v17 ^ v6)) < 0) | 4 * (int64_t)(v27 % 2 == 0) | 2;
        v23 = v26;
    }
    uint64_t v28 = v23;
    int64_t v29 = v22; // 0xa6657
    int64_t v30 = v28; // 0xa6657
    if (v8 == 58) {
        // 0xa665d
        v30 = v28 - v6;
        unsigned char v31 = llvm_ctpop_i8((char)v30); // 0xa665d
        v29 = v22 - 8;
        *(int64_t *)v29 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v28 < v6) | 64 * (int64_t)(v30 == 0) | 128 * (int64_t)(v30 < 0) | 16 * (int64_t)(v28 % 16 - v6 % 16 > 15) | 2048 * (int64_t)(((v30 ^ v28) & (v28 ^ v6)) < 0) | 4 * (int64_t)(v31 % 2 == 0) | 2;
    }
    // 0xa6661
    *(int64_t *)(v2 + 113) = v30 + 0x1a44e4ef;
    int64_t * v32 = (int64_t *)(v2 + 10); // 0xa6706
    int64_t v33 = *v32; // 0xa6706
    if (*(char *)(v33 + 2) != 0) {
        uint16_t v34 = *(int16_t *)(v33 + 3); // 0xa6742
        *(int64_t *)(v2 + (int64_t)v34) = *(int64_t *)v29;
    }
    uint32_t v35 = *(int32_t *)(v2 + 35); // 0xa6756
    int64_t v36 = v35; // 0xa6756
    int32_t v37 = *v5 & v35; // 0xa6762
    *v5 = v37;
    int64_t v38 = v4 + v36; // 0xa6767
    int64_t v39 = a4 - 0x49cc1b1 - v2 + v30 + (v7 + v36 & v7); // 0xa677d
    int64_t v40 = v39 + v38; // 0xa6783
    int64_t v41 = v39 ^ 64; // 0xa678d
    uint16_t v42 = *(int16_t *)*v32; // 0xa67d0
    int64_t v43 = *(int64_t *)(v2 + 271); // 0xa67d7
    uint32_t v44 = (v37 ^ (int32_t)v42) - 0x1f5fe778; // 0xa6815
    uint64_t v45 = (int64_t)v44; // 0xa6815
    *v5 = v37 - v44;
    *v32 = *v32 + 5;
    return (((v41 ^ (int64_t)v42 | v43 | (v40 & (v38 | v7) ^ 8) & (v7 ^ v36)) - 240 ^ 32) - v43 | (v40 + v41 + v43 | 0x7fffffff) - v45) + 2048 | v45 % 0x10000 + v43;
}

// Address range: 0xa68c4 - 0xa68c9
int64_t function_a68c4(void) {
    // 0xa68c4
    return function_49f4f212();
}

// Address range: 0xa68ca - 0xa68cf
int64_t function_a68ca(void) {
    // 0xa68ca
    return function_70ccea18();
}

// Address range: 0xa94a5 - 0xa991e
int64_t function_a94a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa94a5
    int64_t v1; // 0xa94a5
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xa94c9
    *v3 = *v3 + 0x653cf834 ^ 0x77fe30b6;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x77fe30b6;
    int32_t * v4 = (int32_t *)(v2 + 35); // 0xa95b6
    int32_t v5 = *v4 & 0x5077208f; // 0xa95b6
    *v4 = v5;
    int64_t v6 = v2 - 0x77fe30b6; // 0xa95d5
    int32_t * v7 = (int32_t *)(v2 + 368); // 0xa95f3
    *v7 = *v7 | v5;
    int64_t v8 = *v3 ^ 0x77fe30b6; // 0xa95f9
    char v9 = *(char *)(v2 + 404); // 0xa960a
    int64_t v10 = v6; // 0xa9611
    int64_t v11; // 0xa94a5
    bool v12; // 0xa94a5
    if (v9 == 98) {
        uint64_t v13 = v8 & v6;
        char v14 = v13; // 0xa9617
        int64_t v15 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0) | 2; // bp-8, 0xa961a
        v11 = (int64_t)&v15;
        v10 = v13 % 256 | v6 & -256;
    }
    int64_t v16 = v11; // 0xa961f
    int64_t v17 = v10; // 0xa961f
    if (v9 == 50) {
        uint64_t v18 = v10 & v8;
        int16_t v19 = v18; // 0xa9625
        int64_t v20 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v18) % 2 == 0) | 2; // bp-16, 0xa9629
        v16 = (int64_t)&v20;
        v17 = v18 % 0x10000 | v10 & -0x10000;
    }
    int64_t v21 = v16; // 0xa962e
    int64_t v22 = v17; // 0xa962e
    if (v9 == 80) {
        int64_t v23 = v17 & v8;
        int32_t v24 = v23; // 0xa9634
        unsigned char v25 = llvm_ctpop_i8((char)v23); // 0xa9634
        v21 = v16 - 8;
        *(int64_t *)v21 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 4 * (int64_t)(v25 % 2 == 0) | 2;
        v22 = v23 & 0xffffffff;
    }
    int64_t v26 = v21; // 0xa963c
    int64_t v27 = v22; // 0xa963c
    if (v9 == 58) {
        // 0xa9642
        v27 = v22 & v8;
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0xa9642
        v26 = v21 - 8;
        *(int64_t *)v26 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v27 == 0) | 128 * (int64_t)(v27 < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
    }
    int64_t * v29 = (int64_t *)(v2 + 113); // 0xa9657
    *v29 = v27 - 0x65bffe8e;
    int32_t v30 = *v4; // 0xa9672
    int32_t v31 = v30; // 0xa9680
    if ((v30 & 2) != 0) {
        // 0xa9686
        v31 = v30 & 0x7d76c5ba;
        *v4 = v31;
    }
    int64_t * v32 = (int64_t *)(v2 + 10); // 0xa96ab
    int64_t v33 = *v32; // 0xa96ab
    int32_t result = v31; // 0xa96be
    if (*(char *)(v33 + 2) != 0) {
        // 0xa96c4
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v33) = *(int64_t *)v26;
        result = *v4;
    }
    // 0xa96e9
    *v29 = *v29 + 0x8004e37d;
    int32_t v34 = *v7 - result; // 0xa97b7
    *v7 = v34;
    *v7 = (int32_t)*(int16_t *)(*v32 + 3) + 0x48a4c63e ^ v34;
    *v32 = *v32 + 5;
    return result;
}

// Address range: 0xacefd - 0xacfb1
int64_t function_acefd(void) {
    // 0xacefd
    int64_t v1; // 0xacefd
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xacf07
    int32_t v3 = *(int32_t *)*v2; // 0xacf11
    int64_t v4 = 0; // 0xacf41
    if (v3 != 0) {
        // 0xacf47
        int64_t v5; // bp+136, 0xacefd
        int64_t v6 = (int64_t)&v5; // 0xacf1b
        int64_t v7 = (int64_t)v3 + v6; // 0xacefd
        int64_t v8 = v6; // 0xacefd
        int64_t v9 = 18; // 0xacf49
        *(int64_t *)v7 = *(int64_t *)v8;
        v9 = v9 + 0xffffffff & 0xffffffff;
        v7 -= 8;
        v8 -= 8;
        while (v9 != 0) {
            // 0xacf47
            *(int64_t *)v7 = *(int64_t *)v8;
            v9 = v9 + 0xffffffff & 0xffffffff;
            v7 -= 8;
            v8 -= 8;
        }
        // 0xacf3b
        v4 = (int64_t)*(int32_t *)*v2;
    }
    // 0xacf50
    int64_t v10; // 0xacefd
    int64_t v11 = v4 + (int64_t)&v10; // 0xacf69
    *(int64_t *)(v11 + 128) = *(int64_t *)(v11 + 120);
    *(int32_t *)(v1 + 476) = 0;
    return *(int64_t *)(v11 + 112);
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

// Address range: 0xb0930 - 0xb09ab
int64_t function_b0930(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xb0930
    int64_t v1; // 0xb0930
    int64_t v2 = *(int64_t *)(v1 + 10); // 0xb0941
    uint32_t v3 = *(int32_t *)v2; // 0xb094b
    int64_t v4 = *(int64_t *)(v1 + 187); // 0xb0958
    uint16_t v5 = *(int16_t *)(v2 + 4); // 0xb0976
    *(int64_t *)(v1 + (int64_t)v5) = v4 + (int64_t)v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xb09ab - 0xb0e30
int64_t function_b09ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xb09ab
    int64_t v1; // 0xb09ab
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xb09b8
    int32_t * v3 = (int32_t *)(v1 + 368); // 0xb09d0
    int32_t v4 = *v3 - *v2; // 0xb09d0
    *v3 = v4;
    *v3 = (v4 ^ 0x4004c002 ^ *v2) & 0x4004c102 | 0x3d990ad0;
    int64_t * v5 = (int64_t *)(v1 + 10); // 0xb0a89
    int32_t v6 = *(int32_t *)*v5; // 0xb0aa7
    int32_t v7 = *v2; // 0xb0ae9
    *v2 = v7 - 0x20f67834;
    uint64_t v8 = -0xffffffff * *(int64_t *)*v5;
    int64_t v9 = v8 < 0xffffffff00000001 ? v8 : v8 + 0xffffffff; // 0xb0bba
    *(int64_t *)(v1 + 96) = (v9 | (int64_t)(v6 - v7)) - 0x653cf834;
    int32_t v10 = *v2; // 0xb0c33
    int32_t v11 = v10; // 0xb0c52
    if ((v10 & 2) != 0) {
        // 0xb0c58
        v11 = v10 + 0x5bab660 & 0x52dfbf43;
        *v2 = v11;
    }
    int32_t v12 = *v3 - v11; // 0xb0ca7
    *v3 = v12;
    *v3 = v12 & -1 - (int32_t)*(int16_t *)(*v5 + 8);
    *v5 = *v5 + 10;
    return v1 + 404;
}

// Address range: 0xb0e32 - 0xb0e37
int64_t function_b0e32(void) {
    // 0xb0e32
    return function_49f79780();
}

// Address range: 0xb593f - 0xb5d7c
int64_t function_b593f(int64_t a1, int64_t a2, int64_t a3) {
    // 0xb593f
    int64_t v1; // 0xb593f
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xb5956
    int32_t v3 = *v2 | 0x18ec5db5; // 0xb5956
    *v2 = v3;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0xb598f
    uint32_t v5 = *(int32_t *)*v4 ^ v3; // 0xb59eb
    int32_t * v6 = (int32_t *)(v1 + 368); // 0xb5a25
    *v6 = *v6 + v5;
    *v2 = *v2 ^ 0x77a19d87;
    uint64_t v7 = *(int64_t *)*v4; // 0xb5a9f
    int64_t v8 = v7 < 0xffffffff00000001 ? v7 : v7 + 0xffffffff;
    *(int64_t *)(v1 + 96) = (v8 ^ 0x100000000 * v7 | (int64_t)v5) - 0x653cf834;
    int32_t v9 = *v6 & 0x2a26c115; // 0xb5b42
    *v6 = v9;
    int32_t v10 = *v2; // 0xb5b4f
    int32_t v11 = v9; // 0xb5b60
    int32_t v12 = v10; // 0xb5b60
    if ((v10 & 2) != 0) {
        // 0xb5b66
        v12 = v10 + 0x61a295f & 0x2b2bf075;
        *v2 = v12;
        v11 = *v6;
    }
    // 0xb5b86
    *v6 = ((v12 | 0x12049506) ^ v11) & 0x32259d7e;
    *v2 = *v2 + 0x5c2c0237;
    *v4 = *v4 + 10;
    return (int64_t)&g2;
}

// Address range: 0xb7bba - 0xb8064
int64_t function_b7bba(int64_t a1, int64_t a2, int64_t a3) {
    // 0xb7c51
    int64_t v1; // 0xb7bba
    int64_t v2 = v1;
    int64_t v3 = v2 + 35; // 0xb7bc7
    int32_t * v4 = (int32_t *)v3; // 0xb7bce
    int64_t v5 = v2 + 368; // 0xb7bd7
    int32_t * v6 = (int32_t *)v5; // 0xb7bde
    *v6 = *v6 + *v4;
    int32_t v7 = *v4 & 0x65f916c5; // 0xb7c11
    *v4 = v7;
    *v6 = *v6 & (v7 ^ 0x20457da);
    *v4 = *v4 ^ 0x6a71ecf1;
    *v6 = *v6 & 0x3f8e5ee9;
    int32_t v8 = *v4; // 0xb7d0c
    int32_t v9 = v8 & 0x3fa191c; // 0xb7d0c
    *v4 = v9;
    *v6 = *v6 & v9;
    *(char *)(v2 + 367) = 0;
    int64_t * v10 = (int64_t *)(v2 + 10); // 0xb7dd2
    uint64_t v11 = v2 + 129 | (int64_t)&g1 - 120 ^ 64 | (int64_t)&g3; // 0xb7dd6
    int64_t v12 = v5 & -33;
    uint32_t v13 = *v6 ^ *(int32_t *)*v10; // 0xb7e27
    int64_t v14 = v13; // 0xb7e27
    int32_t v15 = *v4; // 0xb7e57
    int64_t v16 = v13 ^ v15; // 0xb7e57
    int64_t v17 = v12 + (int64_t)&g2 - 128; // 0xb7e89
    int64_t v18 = (((v12 & v2 + 131 & v14) + (int64_t)&g1 + 0x7fffffff & v16) + 8 & 120 ^ 2 * ((v11 & (int64_t)(v8 & 8)) - (int64_t)&g1) + v16) + v16; // 0xb7ead
    *v4 = v15 | 0x268bafd3;
    *(int64_t *)v2 = v16 ^ 0xda3b7d9;
    int64_t v19 = *v10; // 0xb7f4b
    int64_t v20 = *(int64_t *)(v2 + 271); // 0xb7f95
    int32_t v21 = *v6; // 0xb7fc2
    uint32_t v22 = (v21 ^ (int32_t)*(int16_t *)(v19 + 4)) + 0x735687d1; // 0xb7fd6
    *v6 = v21 - v22;
    *v10 = *v10 + 6;
    return v20 + 1 + ((int64_t)v22 & (int64_t)&g3) + (-(int64_t)L"\n2" - (v19 ^ (int64_t)&g1) + v20 + (((v11 % 0x80000000 + v5 ^ 8 | v14) + -2 * (2 * (v3 & (int64_t)&g2 ^ ((int64_t)&g1 + 0x7fffffff ^ (int64_t)&g3) - v2) & v17) + v18 & (int64_t)&g3 | 120) ^ 0x7fffff87) + (2 * (v18 + ((v3 & (int64_t)&g2 & (int64_t)L"\n2") - (v17 & (int64_t)L"\n2" ^ 144) ^ 240) | (int64_t)&g3) + 510 & 288 | 128) ^ v5) ^ v2;
}

// Address range: 0xc240f - 0xc291a
int64_t function_c240f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xc240f
    int64_t v1; // 0xc240f
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xc241c
    int32_t * v4 = (int32_t *)(v2 + 368); // 0xc242f
    *v4 = *v4 ^ *v3;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int32_t v5 = *v3 ^ 0x7bdb3dc7; // 0xc2469
    int32_t v6 = (v5 & 2) == 0 ? v5 : v5 - 0x43e81f2a ^ 0x7b5fcef1;
    *v3 = (v6 & 2) == 0 ? v6 : (v6 & 0x7536cf07) + 0x33b57421;
    int64_t * v7 = (int64_t *)(v2 + 96); // 0xc2558
    uint64_t v8 = *v7 + 0x653cf834; // 0xc256e
    *v7 = v8;
    char v9 = *(char *)(v2 + 404); // 0xc267c
    int64_t v10; // 0xc240f
    int64_t v11; // 0xc240f
    bool v12; // 0xc240f
    if (v9 == 98) {
        unsigned char v13 = (char)v2; // 0xc2689
        unsigned char v14 = (char)v8; // 0xc2689
        char v15 = v13 - v14; // 0xc2689
        int64_t v16 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v13 < v14) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 16 * (int64_t)(v13 % 16 - v14 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v15) % 2 == 0) | 2048 * (int64_t)(((v15 ^ v13) & (char)(v8 ^ v2)) < 0) | 2; // bp-8, 0xc268c
        v10 = v2 & -256 | (int64_t)v15;
        v11 = (int64_t)&v16;
    }
    int64_t v17 = v10; // 0xc26a7
    int64_t v18 = v11; // 0xc26a7
    if (v9 == 50) {
        uint16_t v19 = (int16_t)v10; // 0xc26ad
        uint16_t v20 = (int16_t)v8; // 0xc26ad
        int16_t v21 = v19 - v20; // 0xc26ad
        int64_t v22 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v19 < v20) | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(v19 % 16 - v20 % 16 > 15) | 2048 * (int64_t)(((v21 ^ v19) & (int16_t)(v10 ^ v8)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v21) % 2 == 0) | 2; // bp-16, 0xc26b1
        v17 = v10 & -0x10000 | (int64_t)v21;
        v18 = (int64_t)&v22;
    }
    int64_t v23 = v17; // 0xc26c0
    int64_t v24 = v18; // 0xc26c0
    if (v9 == 80) {
        uint32_t v25 = (int32_t)v17; // 0xc26c6
        uint32_t v26 = (int32_t)v8; // 0xc26c6
        int32_t v27 = v25 - v26; // 0xc26c6
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0xc26c6
        v24 = v18 - 8;
        *(int64_t *)v24 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v25 < v26) | 64 * (int64_t)(v27 == 0) | 128 * (int64_t)(v27 < 0) | 16 * (int64_t)(v25 % 16 - v26 % 16 > 15) | 2048 * (int64_t)(((v27 ^ v25) & (int32_t)(v17 ^ v8)) < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
        v23 = v27;
    }
    uint64_t v29 = v23;
    int64_t v30 = v29; // 0xc26df
    int64_t v31 = v24; // 0xc26df
    if (v9 == 58) {
        // 0xc26e5
        v30 = v29 - v8;
        unsigned char v32 = llvm_ctpop_i8((char)v30); // 0xc26e5
        v31 = v24 - 8;
        *(int64_t *)v31 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v29 < v8) | 64 * (int64_t)(v30 == 0) | 128 * (int64_t)(v30 < 0) | 16 * (int64_t)(v29 % 16 - v8 % 16 > 15) | 2048 * (int64_t)(((v30 ^ v29) & (v29 ^ v8)) < 0) | 4 * (int64_t)(v32 % 2 == 0) | 2;
    }
    // 0xc26e9
    *v3 = *v3 - 0x2e36e0cb;
    int64_t v33 = v2 + 113; // 0xc271a
    int64_t * v34 = (int64_t *)v33; // 0xc272f
    *v34 = v30;
    int64_t * v35 = (int64_t *)(v2 + 10); // 0xc2748
    int64_t v36 = *v35; // 0xc2748
    int64_t v37 = v30; // 0xc275d
    if (*(char *)(v36 + 4) != 0) {
        uint16_t v38 = *(int16_t *)(v36 + 2); // 0xc277e
        *(int64_t *)(v2 + (int64_t)v38) = *(int64_t *)v31;
        v37 = *v34;
    }
    // 0xc2788
    *v34 = v37 + 0x1a44e4ef;
    int32_t v39 = *v4 - *v3; // 0xc27bf
    *v4 = v39;
    *v4 = (int32_t)*(int16_t *)*v35 - 0x25b87fbf | v39;
    *v35 = *v35 + 5;
    return (*(int64_t *)(v2 + 271) + v33 & 15 - v2) + 4 & 120;
}
