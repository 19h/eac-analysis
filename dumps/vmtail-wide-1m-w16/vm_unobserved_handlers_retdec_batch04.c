/*
 * Targeted RetDec C for unobserved VM handler native ranges, batch 4.
 *
 * These dispatch entries are statically inventoried but were not seen as
 * dispatch targets in the concrete traces. Batches are sorted by native
 * span size so each decompile stays small and reproducible.
 *
 * Total unobserved handler ranges: 155
 * Batch size: 24
 * Ranges:
 *   0xa4df7-0xa5188 entry=218 span_bytes=910 insns=197 tail=0xa5178
 *   0xa36c9-0xa3a59 entry=211 span_bytes=911 insns=197 tail=0xa3a49
 *   0x92615-0x929a8 entry=126 span_bytes=915 insns=213 tail=0x92998
 *   0xa1b3e-0xa1edd entry=206 span_bytes=926 insns=206 tail=0xa1ecd
 *   0x788e2-0x78c84 entry=2 span_bytes=930 insns=197 tail=0x78c74
 *   0x8c8ec-0x8cc8f entry=98 span_bytes=930 insns=207 tail=0x8cc7f
 *   0xb87aa-0xb8b4f entry=312 span_bytes=933 insns=205 tail=0xb8b3f
 *   0xb0e30-0xb11d7 entry=272 span_bytes=935 insns=201 tail=0xb11c7
 *   0x85b89-0x85f32 entry=68 span_bytes=936 insns=210 tail=0x85f22
 *   0xabd6f-0xac11e entry=247 span_bytes=941 insns=200 tail=0xac10e
 *   0xa6e55-0xa720b entry=226 span_bytes=950 insns=224 tail=0xa71fb
 *   0x81b7f-0x81f3c entry=44 span_bytes=956 insns=201 tail=0x81f2c
 *   0x99e99-0x9a259 entry=164 span_bytes=959 insns=209 tail=0x9a249
 *   0x8e2ef-0x8e6c2 entry=104 span_bytes=975 insns=208 tail=0x8e6b2
 *   0xac440-0xac80f entry=249 span_bytes=975 insns=206 tail=0xac7ff
 *   0x7dfbf-0x7e39d entry=27 span_bytes=989 insns=203 tail=0x7e38d
 *   0xbfb99-0xbff78 entry=342 span_bytes=990 insns=224 tail=0xbff68
 *   0x799c7-0x79db1 entry=7 span_bytes=1002 insns=228 tail=0x79da1
 *   0x94ddf-0x951d0 entry=139 span_bytes=1009 insns=226 tail=0x951c0
 *   0x96f2a-0x9731e entry=150 span_bytes=1012 insns=216 tail=0x9730e
 *   0x9b0c8-0x9b4c0 entry=170 span_bytes=1012 insns=217 tail=0x9b4b0
 *   0x9406d-0x94485 entry=134 span_bytes=1044 insns=226 tail=0x94475
 *   0x87d17-0x8813f entry=76 span_bytes=1059 insns=234 tail=0x8812f
 *   0xa757f-0xa79a9 entry=230 span_bytes=1065 insns=236 tail=0xa7999
 */
#include <stdbool.h>
#include <stdint.h>

typedef __int128 int128_t;
extern int g1;
extern int g2;
extern int g3;
extern int g4;
extern int g5;
unsigned char llvm_ctpop_i8(unsigned char value);
void __asm_out(uint16_t port, char value);
uint8_t __readfsbyte(int64_t offset);

int64_t function_49f502f2();
int64_t function_70c964df();
int64_t function_71ca680b();

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

// Address range: 0x799c7 - 0x79a3d
int64_t function_799c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x799c7
    int64_t v1; // 0x799c7
    int64_t v2 = *(int64_t *)(v1 + 10); // 0x799d8
    int64_t v3 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v2 + 2)); // 0x799e9
    *(int64_t *)(v1 + (int64_t)*(int16_t *)v2) = v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x79a3d - 0x79da3
int64_t function_79a3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x79a3d
    int64_t v1; // 0x79a3d
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x79a4d
    *v3 = *v3 + 0x29001348;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x3c3ce4ec;
    int32_t * v4 = (int32_t *)(v2 + 368); // 0x79ae2
    *v4 = *v4 | *(int32_t *)(v2 + 35);
    int64_t * v5 = (int64_t *)(v2 + 10); // 0x79b03
    uint64_t v6 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v5 + 3)); // 0x79b34
    int64_t v7 = v2 - 0x3c3ce4ec; // 0x79b50
    uint64_t v8 = *v3 + 0x3c3ce4ec; // 0x79b6d
    char v9 = *(char *)(v2 + 404); // 0x79b90
    int64_t v10 = v6; // 0x79b97
    int64_t v11 = v7; // 0x79b97
    if (v9 == 98) {
        unsigned char v12 = (char)v8 % 32; // 0x79ba4
        bool v13 = (v6 & (int64_t)L"\n2") != 0; // 0x79ba4
        bool v14 = v6 % 2 != 0; // 0x79ba4
        v11 = v7;
        if (v12 != 0) {
            unsigned char v15 = (char)v7; // 0x79ba4
            char v16 = v6 % 2 != 0; // 0x79ba4
            v13 = v12 == 1 ? v15 / 128 != v16 : (v6 & (int64_t)L"\n2") != 0;
            v14 = (1 << v12 - 1 & v15) != 0;
            v11 = v7 & -256 | (int64_t)(v16 << 8 - v12 | v15 >> v12 | (char)((int16_t)v7 % 256 << (int16_t)(9 - v12)));
        }
        v10 = 16 * (int64_t)((v6 & 16) != 0) | 4 * (int64_t)((v6 & 4) != 0) | 64 * (int64_t)((v6 & 64) != 0) | 128 * (int64_t)((char)v6 < 0) | 256 * (int64_t)((v6 & 256) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | (int64_t)v14 | 2048 * (int64_t)v13 | 2;
    }
    int64_t v17 = v11;
    uint64_t v18 = v10;
    int64_t v19 = v18; // 0x79bac
    int64_t v20 = v17; // 0x79bac
    if (v9 == 50) {
        uint16_t v21 = (int16_t)v8 % 32; // 0x79bb3
        bool v22 = (v18 & (int64_t)L"\n2") != 0; // 0x79bb3
        bool v23 = v18 % 2 != 0; // 0x79bb3
        v20 = v17;
        if (v21 != 0) {
            uint16_t v24 = (int16_t)v17; // 0x79bb3
            int16_t v25 = v18 % 2 != 0; // 0x79bb3
            v22 = v21 == 1 ? v24 / 0x8000 != v25 : (v18 & (int64_t)L"\n2") != 0;
            v23 = (1 << v21 - 1 & v24) != 0;
            v20 = v17 & -0x10000 | (int64_t)(v25 << 16 - v21 | v24 >> v21 | (int16_t)((int32_t)v17 % 0x10000 << (int32_t)(17 - v21)));
        }
        v19 = 16 * (int64_t)((v18 & 16) != 0) | 4 * (int64_t)((v18 & 4) != 0) | 64 * (int64_t)((v18 & 64) != 0) | 128 * (int64_t)((char)v18 < 0) | 256 * (int64_t)((v18 & 256) != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | (int64_t)v23 | 2048 * (int64_t)v22 | 2;
    }
    uint64_t v26 = v19;
    int64_t v27 = v26; // 0x79bc6
    int64_t v28 = v20; // 0x79bc6
    if (v9 == 80) {
        uint32_t v29 = (int32_t)v8 % 32; // 0x79bd7
        bool v30 = (v26 & (int64_t)L"\n2") != 0; // 0x79bd7
        bool v31 = v26 % 2 != 0; // 0x79bd7
        v28 = v20;
        if (v29 != 0) {
            int32_t v32 = v20; // 0x79bd7
            v30 = v29 == 1 ? v32 < 0 != v26 % 2 != 0 : (v26 & (int64_t)L"\n2") != 0;
            v31 = (1 << v29 - 1 & v32) != 0;
            v28 = v32 >> v29 | (int32_t)((v20 & 0xffffffff) << (int64_t)(33 - v29)) | (int32_t)(v26 % 2 != 0) << 32 - v29;
        }
        v27 = 16 * (int64_t)((v26 & 16) != 0) | 4 * (int64_t)((v26 & 4) != 0) | 64 * (int64_t)((v26 & 64) != 0) | 128 * (int64_t)((char)v26 < 0) | 256 * (int64_t)((v26 & 256) != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | (int64_t)v31 | 2048 * (int64_t)v30 | 2;
    }
    uint64_t v33 = v28;
    uint64_t v34 = v27;
    int64_t v35 = v34; // 0x79be9
    int64_t v36 = v33; // 0x79be9
    if (v9 == 58) {
        uint64_t v37 = v8 % 64; // 0x79bf6
        bool v38 = (v34 & (int64_t)L"\n2") != 0; // 0x79bf6
        bool v39 = v34 % 2 != 0; // 0x79bf6
        v36 = v33;
        if (v37 != 0) {
            int64_t v40 = v34 % 2 != 0; // 0x79bf6
            v38 = v37 == 1 ? v33 / 0x8000000000000000 != v40 : (v34 & (int64_t)L"\n2") != 0;
            v39 = (v33 & 1 << v37 - 1) != 0;
            v36 = v33 >> v37 | (int64_t)((int128_t)v33 << (int128_t)(65 - v37)) | v40 << 64 - v37;
        }
        v35 = 16 * (int64_t)((v34 & 16) != 0) | 4 * (int64_t)((v34 & 4) != 0) | 64 * (int64_t)((v34 & 64) != 0) | 128 * (int64_t)((char)v34 < 0) | 256 * (int64_t)((v34 & 256) != 0) | 512 * (int64_t)((v34 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v34 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v34 & (int64_t)"le") != 0) | (int64_t)v39 | 2048 * (int64_t)v38 | 2;
    }
    // 0x79c04
    *(int64_t *)(v2 + 113) = v36 + 0x1a44e4ef;
    int64_t v41 = *v5; // 0x79c98
    int64_t v42 = v41; // 0x79cb4
    if (*(char *)(v41 + 2) != 0) {
        // 0x79cba
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v41 + 3)) = v35;
        v42 = *v5;
    }
    int16_t v43 = *(int16_t *)v42; // 0x79d32
    *v5 = v42 + 5;
    return *(int64_t *)(*(int64_t *)(v2 + 271) + (int64_t)(v43 + 1222));
}

// Address range: 0x79da7 - 0x79dad
int64_t function_79da7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x79da7
    int64_t v1; // 0x79da7
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(a4 - 127); // 0x79da9
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x7dfbf - 0x7e390
int64_t function_7dfbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x7dfbf
    int64_t v1; // 0x7dfbf
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x7dfe7
    int64_t v3 = *v2;
    int64_t v4 = v1 + (int64_t)*(int16_t *)(v3 + 3); // 0x7e019
    char v5 = *(char *)(v3 + 2); // 0x7e04c
    if (v5 == 38) {
        int32_t * v6 = (int32_t *)v4; // 0x7e085
        *v6 = *v6 & -2;
    }
    if (v5 == -63) {
        int32_t * v7 = (int32_t *)v4; // 0x7e0c1
        *v7 = *v7 & (int32_t)((int64_t)&g3 ^ -1);
        int32_t * v8 = (int32_t *)(v1 + 409); // 0x7e0ee
        *v8 = *v8 & (int32_t)((int64_t)&g3 ^ -1);
    }
    if (v5 == -29) {
        int32_t * v9 = (int32_t *)v4; // 0x7e120
        *v9 = *v9 & (int32_t)((int64_t)&g1 ^ -1);
        int32_t * v10 = (int32_t *)(v1 + 409); // 0x7e149
        *v10 = *v10 & (int32_t)((int64_t)&g1 ^ -1);
    }
    if (v5 == -14) {
        int32_t * v11 = (int32_t *)v4; // 0x7e164
        uint32_t v12 = *v11; // 0x7e164
        if (v12 % 2 == 0) {
            // 0x7e1bf
            *v11 = v12 | 1;
        } else {
            // 0x7e189
            *v11 = v12 & -2;
        }
    }
    if (v5 == 116) {
        int32_t * v13 = (int32_t *)v4; // 0x7e1f1
        *v13 = *v13 | 1;
    }
    if (v5 == -31) {
        int32_t * v14 = (int32_t *)v4; // 0x7e208
        *v14 = *v14 | (int32_t)&g3;
        int32_t * v15 = (int32_t *)(v1 + 409); // 0x7e21f
        *v15 = *v15 | (int32_t)&g3;
    }
    if (v5 == 83) {
        int32_t * v16 = (int32_t *)v4; // 0x7e25c
        *v16 = *v16 | (int32_t)&g1;
        int32_t * v17 = (int32_t *)(v1 + 409); // 0x7e2a1
        *v17 = *v17 | (int32_t)&g1;
    }
    int64_t result = v1 + 368; // 0x7e318
    int32_t * v18 = (int32_t *)result; // 0x7e31f
    int32_t v19 = *v18; // 0x7e31f
    *v18 = (int32_t)*(int16_t *)*v2 - v19 & v19;
    *v2 = *v2 + 5;
    return result;
}

// Address range: 0x7e392 - 0x7e397
int64_t function_7e392(void) {
    // 0x7e392
    return function_70c964df();
}

// Address range: 0x81b7f - 0x81f2e
int64_t function_81b7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x81b7f
    int64_t v1; // 0x81b7f
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x81bb1
    int64_t v3 = *v2;
    int64_t v4 = v1 + (int64_t)*(int16_t *)(v3 + 3); // 0x81bd1
    char v5 = *(char *)v3; // 0x81c2f
    if (v5 == 38) {
        int32_t * v6 = (int32_t *)v4; // 0x81c59
        *v6 = *v6 & -2;
    }
    int64_t v7 = v3; // 0x81c6e
    if (v5 == -63) {
        int32_t * v8 = (int32_t *)v4; // 0x81c92
        *v8 = *v8 & (int32_t)((int64_t)&g3 ^ -1);
        v7 = v1 + 409;
        int32_t * v9 = (int32_t *)v7; // 0x81cc6
        *v9 = *v9 & (int32_t)((int64_t)&g3 ^ -1);
    }
    int64_t v10 = v7; // 0x81ccd
    if (v5 == -29) {
        int32_t * v11 = (int32_t *)v4; // 0x81cee
        *v11 = *v11 & (int32_t)((int64_t)&g1 ^ -1);
        v10 = v1 + 409;
        int32_t * v12 = (int32_t *)v10; // 0x81d19
        *v12 = *v12 & (int32_t)((int64_t)&g1 ^ -1);
    }
    // 0x81d22
    if (v5 == -14) {
        int32_t * v13 = (int32_t *)v4; // 0x81d33
        uint32_t v14 = *v13; // 0x81d33
        if (v14 % 2 == 0) {
            // 0x81d76
            *v13 = v14 | 1;
        } else {
            // 0x81d4d
            *v13 = v14 & -2;
        }
    }
    if (v5 == 116) {
        int32_t * v15 = (int32_t *)v4; // 0x81db4
        *v15 = *v15 | 1;
    }
    int64_t v16 = v10; // 0x81dbb
    if (v5 == -31) {
        int32_t * v17 = (int32_t *)v4; // 0x81dd6
        *v17 = *v17 | (int32_t)&g3;
        v16 = v1 + 409;
        int32_t * v18 = (int32_t *)v16; // 0x81e02
        *v18 = *v18 | (int32_t)&g3;
    }
    int64_t v19 = v16; // 0x81e0c
    if (v5 == 83) {
        int32_t * v20 = (int32_t *)v4; // 0x81e27
        *v20 = *v20 | (int32_t)&g1;
        v19 = v1 + 409;
        int32_t * v21 = (int32_t *)v19; // 0x81e55
        *v21 = *v21 | (int32_t)&g1;
    }
    int64_t v22 = (v19 & (int64_t)&g4 - 1) + v1; // 0x81e87
    int64_t v23 = *(int64_t *)(v1 + 271); // 0x81e90
    int32_t * v24 = (int32_t *)(v1 + 368); // 0x81edc
    int32_t v25 = *v24; // 0x81edc
    uint32_t v26 = (int32_t)*(int16_t *)(*v2 + 1) - v25; // 0x81edc
    *v24 = v26 | v25;
    int64_t v27 = *(int64_t *)(((int64_t)v26 & (int64_t)&g5) + v23); // 0x81f0b
    *v2 = *v2 + 5;
    return v27 ^ (v22 & v1 - 32 & (v22 ^ v23)) + (int64_t)&g5;
}

// Address range: 0x85b89 - 0x85f24
int64_t function_85b89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x85b89
    int64_t v1; // 0x85b89
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x85ba2
    *v3 = *v3 + 0x653cf834;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0x85c4d
    int64_t v5 = v2 + (int64_t)*(int16_t *)(*v4 + 3); // 0x85c6f
    uint64_t v6 = *(int64_t *)v5; // 0x85c7c
    uint64_t v7 = *v3; // 0x85cc2
    char v8 = *(char *)(v2 + 404); // 0x85cdb
    int64_t v9 = v6; // 0x85ce2
    int64_t v10; // 0x85b89
    if (v8 == 98) {
        unsigned char v11 = (char)v7 % 32; // 0x85cef
        bool v12 = (v6 & (int64_t)L"\n2") != 0; // 0x85cef
        bool v13 = v6 % 2 != 0; // 0x85cef
        int64_t v14; // 0x85b89
        if (v11 != 0) {
            char v15 = v2; // 0x85cef
            unsigned char v16 = v11 - 1; // 0x85cef
            unsigned char v17 = (char)(v6 % 2 != 0) << v16 | v15 << v11 | (char)((int16_t)v2 % 256 >> (int16_t)(9 - v11)); // 0x85cef
            char v18 = (v15 << v16) / 128; // 0x85cef
            v12 = v11 == 1 ? v17 / 128 != v18 : (v6 & (int64_t)L"\n2") != 0;
            v13 = v18 != 0;
            v14 = v2 & -256 | (int64_t)v17;
        }
        v9 = 16 * (int64_t)((v6 & 16) != 0) | 4 * (int64_t)((v6 & 4) != 0) | 64 * (int64_t)((v6 & 64) != 0) | 128 * (int64_t)((char)v6 < 0) | 256 * (int64_t)((v6 & 256) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | (int64_t)v13 | 2048 * (int64_t)v12 | 2;
        v10 = v14;
    }
    uint64_t v19 = v9;
    int64_t v20 = v19; // 0x85d00
    int64_t v21 = v10; // 0x85d00
    if (v8 == 50) {
        uint16_t v22 = (int16_t)v7 % 32; // 0x85d11
        bool v23 = (v19 & (int64_t)L"\n2") != 0; // 0x85d11
        bool v24 = v19 % 2 != 0; // 0x85d11
        v21 = v10;
        if (v22 != 0) {
            int16_t v25 = v10; // 0x85d11
            uint16_t v26 = v22 - 1; // 0x85d11
            uint16_t v27 = (int16_t)(v19 % 2 != 0) << v26 | v25 << v22 | (int16_t)((int32_t)v10 % 0x10000 >> (int32_t)(17 - v22)); // 0x85d11
            int16_t v28 = (v25 << v26) / 0x8000; // 0x85d11
            v23 = v22 == 1 ? v27 / 0x8000 != v28 : (v19 & (int64_t)L"\n2") != 0;
            v24 = v28 != 0;
            v21 = v10 & -0x10000 | (int64_t)v27;
        }
        v20 = 16 * (int64_t)((v19 & 16) != 0) | 4 * (int64_t)((v19 & 4) != 0) | 64 * (int64_t)((v19 & 64) != 0) | 128 * (int64_t)((char)v19 < 0) | 256 * (int64_t)((v19 & 256) != 0) | 512 * (int64_t)((v19 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v19 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v19 & (int64_t)"le") != 0) | (int64_t)v24 | 2048 * (int64_t)v23 | 2;
    }
    uint64_t v29 = v20;
    int64_t v30 = v29; // 0x85d18
    int64_t v31 = v21; // 0x85d18
    if (v8 == 80) {
        uint32_t v32 = (int32_t)v7 % 32; // 0x85d1f
        bool v33 = (v29 & (int64_t)L"\n2") != 0; // 0x85d1f
        bool v34 = v29 % 2 != 0; // 0x85d1f
        v31 = v21;
        if (v32 != 0) {
            int32_t v35 = v21; // 0x85d1f
            uint32_t v36 = v32 - 1; // 0x85d1f
            int32_t v37 = v35 << v32 | (int32_t)((v21 & 0xffffffff) >> (int64_t)(33 - v32)) | (int32_t)(v29 % 2 != 0) << v36; // 0x85d1f
            v33 = v32 == 1 ? v37 < 0 != v35 << v36 < 0 : (v29 & (int64_t)L"\n2") != 0;
            v34 = v35 << v36 < 0;
            v31 = v37;
        }
        v30 = 16 * (int64_t)((v29 & 16) != 0) | 4 * (int64_t)((v29 & 4) != 0) | 64 * (int64_t)((v29 & 64) != 0) | 128 * (int64_t)((char)v29 < 0) | 256 * (int64_t)((v29 & 256) != 0) | 512 * (int64_t)((v29 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v29 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v29 & (int64_t)"le") != 0) | (int64_t)v34 | 2048 * (int64_t)v33 | 2;
    }
    int64_t v38 = v31;
    uint64_t v39 = v30;
    int64_t v40 = v39; // 0x85d28
    int64_t v41 = v38; // 0x85d28
    if (v8 == 58) {
        uint64_t v42 = v7 % 64; // 0x85d3c
        bool v43 = (v39 & (int64_t)L"\n2") != 0; // 0x85d3c
        bool v44 = v39 % 2 != 0; // 0x85d3c
        v41 = v38;
        if (v42 != 0) {
            uint64_t v45 = v42 - 1; // 0x85d3c
            v41 = v38 << v42 | (int64_t)((int128_t)v38 >> (int128_t)(65 - v42)) | (int64_t)(v39 % 2 != 0) << v45;
            int64_t v46 = (v38 << v45) / 0x8000000000000000; // 0x85d3c
            v43 = v42 == 1 ? v41 >> 63 != v46 : (v39 & (int64_t)L"\n2") != 0;
            v44 = v46 != 0;
        }
        v40 = 16 * (int64_t)((v39 & 16) != 0) | 4 * (int64_t)((v39 & 4) != 0) | 64 * (int64_t)((v39 & 64) != 0) | 128 * (int64_t)((char)v39 < 0) | 256 * (int64_t)((v39 & 256) != 0) | 512 * (int64_t)((v39 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v39 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v39 & (int64_t)"le") != 0) | (int64_t)v44 | 2048 * (int64_t)v43 | 2;
    }
    int64_t * v47 = (int64_t *)(v2 + 113); // 0x85d69
    *v47 = v41 - 0x3b654e3;
    int32_t * v48 = (int32_t *)(v2 + 35); // 0x85d8b
    int32_t v49 = *v48; // 0x85d8b
    if ((v49 & 2) != 0) {
        // 0x85da6
        *v48 = v49 - 0x2ef21305;
    }
    // 0x85dc6
    *v47 = v41 + 0x1a44e4ef;
    int64_t v50 = *v4; // 0x85deb
    int64_t v51 = v50; // 0x85e1c
    if (*(char *)(v50 + 2) != 0) {
        // 0x85e22
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v50 + 3)) = v40;
        v51 = *v4;
    }
    int64_t v52 = v2 + 368; // 0x85ec1
    int32_t * v53 = (int32_t *)v52; // 0x85ec8
    int32_t v54 = *v53; // 0x85ec8
    *v53 = (v54 ^ (int32_t)*(int16_t *)v51) + 0x72639e4e ^ v54;
    *v4 = *v4 + 5;
    return v5 & (int64_t)&g3 | v52;
}

// Address range: 0x87d17 - 0x88131
int64_t function_87d17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x87d17
    int64_t v1; // 0x87d17
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x87d38
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x87d4d
    *v3 = (*v3 ^ (*v2 | 0x1244c900)) & 0x3247cd40;
    *v2 = *v2 - 0x795b9aa4;
    *(char *)(v1 + 367) = 0;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x87e1e
    int32_t v5 = *v2; // 0x87e78
    int32_t v6 = v5 + *(int32_t *)(*v4 + 2) ^ *v3; // 0x87ea0
    *v2 = v6 + v5;
    *v3 = *v3 ^ 0x6e4cfe36;
    *(int64_t *)v1 = (int64_t)(v6 ^ 0xda3b7d9);
    int32_t v7 = *v2 ^ *v3; // 0x87f79
    *v2 = v7;
    *v3 = (*v3 & v7) - 0x6ff7d7e8;
    int32_t v8 = *v2; // 0x88081
    *v2 = (v8 + (int32_t)*(int16_t *)*v4 ^ 0x5381a641) & v8;
    *v4 = *v4 + 6;
    return v1 + 113;
}

// Address range: 0x8c8ec - 0x8c99a
int64_t function_8c8ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x8c8ec
    int64_t v1; // 0x8c8ec
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x8c8fd
    int64_t v3 = *v2; // 0x8c8fd
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0x8c90e
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0x8c933
    *(int64_t *)v5 = *(int64_t *)v4;
    uint32_t v6 = *(int32_t *)*v2; // 0x8c95b
    *(int64_t *)(v5 + 8) = *(int64_t *)(v1 + 187) + (int64_t)v6;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x8c99a - 0x8cc81
int64_t function_8c99a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8c99a
    int64_t v1; // 0x8c99a
    uint64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x8c9dc
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x4991ff4d;
    uint64_t v4 = *v3 + 0x653cf834; // 0x8c9f0
    *v3 = v4 ^ 0x4991ff4d;
    char v5 = *(char *)(v2 + 225); // 0x8ca72
    int64_t v6 = v5 != 50 ? v5 != 98 ? v2 + 0x4991ff4d : v4 % 256 : v4 % 0x10000;
    int64_t * v7 = (int64_t *)(v2 + 113); // 0x8cad1
    *v7 = v6 ^ 0x6d122d6b;
    int64_t * v8 = (int64_t *)(v2 + 10); // 0x8cb23
    int64_t v9 = *v8; // 0x8cb23
    if (*(char *)v9 != 0) {
        int64_t v10 = v4 + v2; // 0x8cad4
        unsigned char v11 = llvm_ctpop_i8((char)v10); // 0x8cad4
        uint16_t v12 = *(int16_t *)(v9 + 3); // 0x8cb8e
        bool v13; // 0x8c99a
        *(int64_t *)(v2 + (int64_t)v12) = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | (int64_t)(v10 < v4) | 64 * (int64_t)(v10 == 0) | 128 * (int64_t)(v10 < 0) | 16 * (int64_t)(v4 % 16 + v2 % 16 > 15) | 2048 * (int64_t)(((v10 ^ v4) & (v10 ^ v2)) < 0) | 4 * (int64_t)(v11 % 2 == 0) | 2;
    }
    // 0x8cba8
    *v7 = v6 + 0x1a44e4ef;
    int32_t * v14 = (int32_t *)(v2 + 368); // 0x8cc03
    int32_t v15 = *v14; // 0x8cc03
    uint32_t v16 = (v15 ^ (int32_t)*(int16_t *)(*v8 + 1)) - 0x48503105; // 0x8cc05
    *v14 = v16 & v15;
    *v8 = *v8 + 5;
    return *(int64_t *)(*(int64_t *)(v2 + 271) + (int64_t)(v16 % 0x10000));
}

// Address range: 0x8cc86 - 0x8cc89
int64_t function_8cc86(void) {
    // 0x8cc86
    int64_t result; // 0x8cc86
    return result;
}

// Address range: 0x8e2ef - 0x8e6b4
int64_t function_8e2ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x8e2ef
    int64_t v1; // 0x8e2ef
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x8e310
    *v3 = *v3 + 0x653cf834;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int64_t v4 = *v3; // 0x8e415
    unsigned char v5 = *(char *)(v2 + 404); // 0x8e432
    char v6 = v5 - 50; // 0x8e435
    int64_t v7; // 0x8e2ef
    int64_t v8; // 0x8e2ef
    bool v9; // 0x8e2ef
    if (v6 == 0) {
        uint32_t v10 = (0x10000 * (int32_t)v4 >> 16) * (0x10000 * (int32_t)v2 >> 16); // 0x8e43d
        int64_t v11 = v10 > 0x7fff; // 0x8e442
        int64_t v12 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | 64 * (int64_t)(v6 == 0) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v5 % 16 > 17) | v11 | 4 * (int64_t)(llvm_ctpop_i8(v6) % 2 == 0) | 2048 * v11 | 2; // bp-8, 0x8e442
        v7 = v2 & -0x10000 | (int64_t)(v10 % 0x10000);
        v8 = (int64_t)&v12;
    }
    char v13 = v5 - 80; // 0x8e44a
    int64_t v14 = v7; // 0x8e44c
    int64_t v15 = v8; // 0x8e44c
    if (v13 == 0) {
        int64_t v16 = (0x100000000 * v7 >> 32) * (0x100000000 * v4 >> 32); // 0x8e452
        int64_t v17 = v16 > 0x7fffffff; // 0x8e456
        int64_t v18 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v13) % 2 == 0) | v17 | 2048 * v17 | 2; // bp-16, 0x8e456
        v14 = v16 & 0xffffffff;
        v15 = (int64_t)&v18;
    }
    char v19 = v5 - 58; // 0x8e45e
    int64_t v20 = v14; // 0x8e460
    int64_t v21 = v15; // 0x8e460
    if (v19 == 0) {
        unsigned char v22 = llvm_ctpop_i8(v19); // 0x8e45e
        int128_t v23 = (int128_t)v14 * (int128_t)v4; // 0x8e466
        int64_t v24 = v23 > 0x7fffffffffffffff; // 0x8e46a
        v21 = v15 - 8;
        *(int64_t *)v21 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(v5 % 16 > 25) | 4 * (int64_t)(v22 % 2 == 0) | v24 | 2048 * v24 | 2;
        v20 = v23;
    }
    int64_t * v25 = (int64_t *)(v2 + 113); // 0x8e490
    *v25 = v20 - 0x44a6fa9b;
    int64_t * v26 = (int64_t *)(v2 + 10); // 0x8e4d8
    int64_t v27 = *v26; // 0x8e4d8
    if (*(char *)v27 != 0) {
        uint16_t v28 = *(int16_t *)(v27 + 1); // 0x8e544
        *(int64_t *)(v2 + (int64_t)v28) = *(int64_t *)v21;
    }
    int64_t result = v20 + 0x1a44e4ef; // 0x8e4c3
    *v25 = result;
    int32_t * v29 = (int32_t *)(v2 + 35); // 0x8e58b
    int32_t v30 = *v29; // 0x8e58b
    if ((v30 & 2) == 0) {
        // 0x8e600
        *v26 = *v26 + 5;
        return result;
    }
    int32_t v31 = v30 - 0xd879340; // 0x8e5ac
    *v29 = v31;
    if ((v31 & 2) != 0) {
        // 0x8e5de
        *v29 = v30 + 0x4f0b84c4 ^ 0x543eebce;
    }
    // 0x8e600
    *v26 = *v26 + 5;
    return result;
}

// Address range: 0x8e6b6 - 0x8e6c2
int64_t function_8e6b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x8e6b6
    int64_t v1; // 0x8e6b6
    __asm_out((int16_t)a3, (char)v1);
    __readfsbyte(a4 - 119 + 2 * a4);
    return function_71ca680b();
}

// Address range: 0x92615 - 0x926c3
int64_t function_92615(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x92615
    int64_t v1; // 0x92615
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x92626
    int64_t v3 = *v2; // 0x92626
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0x92637
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0x9265c
    *(int64_t *)v5 = *(int64_t *)v4;
    uint32_t v6 = *(int32_t *)*v2; // 0x92684
    *(int64_t *)(v5 + 8) = *(int64_t *)(v1 + 187) + (int64_t)v6;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x926c3 - 0x9299b
int64_t function_926c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x926c3
    int64_t v1; // 0x926c3
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0x6208f70;
    int64_t v3 = v2 ^ 0xb8338a9; // 0x92715
    int64_t * v4 = (int64_t *)(v2 + 10); // 0x92741
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v4 + 3)); // 0x92758
    char v6 = *(char *)(v2 + 404); // 0x9276c
    int64_t v7 = v5; // 0x92773
    int64_t v8 = v3; // 0x92773
    if (v6 == 98) {
        unsigned char v9 = (char)v3; // 0x9277a
        char v10 = v9 + 1; // 0x9277a
        unsigned char v11 = llvm_ctpop_i8(v10); // 0x9277a
        v7 = 64 * (int64_t)(v10 == 0) | 16 * (int64_t)(v9 % 16 == 15) | 128 * (int64_t)(v10 < 0) | 2048 * (int64_t)((v10 & (v9 ^ -128)) < 0) | 4 * (int64_t)(v11 % 2 == 0) | (int64_t)(v5 % 2 != 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | 2;
        v8 = v3 & -256 | (int64_t)v10;
    }
    int64_t v12 = v7;
    int64_t v13 = v12; // 0x92782
    if (v6 == 50) {
        uint16_t v14 = (int16_t)v8; // 0x92789
        int16_t v15 = v14 + 1; // 0x92789
        unsigned char v16 = llvm_ctpop_i8((char)v15); // 0x92789
        v13 = 256 * (int64_t)((v12 & 256) != 0) | (int64_t)(v12 % 2 != 0) | 512 * (int64_t)((v12 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v12 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v12 & (int64_t)"le") != 0) | 64 * (int64_t)(v15 == 0) | 16 * (int64_t)(v14 % 16 == 15) | 128 * (int64_t)(v15 < 0) | 2048 * (int64_t)((v15 & (v14 ^ -0x8000)) < 0) | 4 * (int64_t)(v16 % 2 == 0) | 2;
    }
    int64_t v17 = v13;
    int64_t v18 = v17; // 0x92798
    int64_t v19 = 0; // 0x92798
    int64_t v20 = v19; // 0x92798
    if (v6 == 80) {
        uint32_t v21 = (int32_t)v19; // 0x927a5
        int32_t v22 = v21 + 1; // 0x927a5
        unsigned char v23 = llvm_ctpop_i8((char)v22); // 0x927a5
        v18 = 256 * (int64_t)((v17 & 256) != 0) | (int64_t)(v17 % 2 != 0) | 512 * (int64_t)((v17 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v17 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v17 & (int64_t)"le") != 0) | 64 * (int64_t)(v22 == 0) | 16 * (int64_t)(v21 % 16 == 15) | 128 * (int64_t)(v22 < 0) | 2048 * (int64_t)((v22 & (v21 ^ -0x80000000)) < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
        v20 = v22;
    }
    int64_t v24 = v20;
    int64_t v25 = v18;
    int64_t v26 = v25; // 0x927ad
    int64_t v27 = v19; // 0x927ad
    int64_t v28 = v24; // 0x927ad
    if (v6 == 58) {
        // 0x927b3
        v28 = v24 + 1;
        unsigned char v29 = llvm_ctpop_i8((char)v28); // 0x927ba
        v26 = 256 * (int64_t)((v25 & 256) != 0) | (int64_t)(v25 % 2 != 0) | 512 * (int64_t)((v25 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v25 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v25 & (int64_t)"le") != 0) | 64 * (int64_t)(v28 == 0) | 16 * (int64_t)(v24 % 16 == 15) | 128 * (int64_t)(v28 < 0) | 2048 * (int64_t)((v28 & (v24 ^ -0x8000000000000000)) < 0) | 4 * (int64_t)(v29 % 2 == 0) | 2;
        v27 = v19 ^ 0x7fffffff;
    }
    int64_t v30 = v2 + 113; // 0x927d2
    int64_t * v31 = (int64_t *)v30; // 0x927dc
    *v31 = v28 - 0x552c0b27;
    int64_t v32 = *(int64_t *)(v2 + 129); // 0x9281b
    int64_t v33 = *v4; // 0x9284a
    if (*(char *)(v33 + 2) != 0) {
        // 0x92868
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v33 + 3)) = v26;
    }
    int64_t v34 = a6 | a1; // 0x926f8
    *v31 = v28 + 0x1a44e4ef;
    int64_t v35 = (v32 | v27 ^ v34) + a2; // 0x928e9
    int32_t * v36 = (int32_t *)(v2 + 368); // 0x9293e
    int32_t v37 = *v36; // 0x9293e
    *v36 = 0xf376a6a - v37 + (int32_t)*(int16_t *)*v4 | v37;
    *v4 = *v4 + 5;
    return (v32 ^ (int64_t)L"\n2" ^ v35 & 32 & v34 - (v35 + v30 | 32)) + 128;
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
    return v12 + (int64_t)&g3 - 0x100000004 - v13 - ((int64_t)&g3 - v12 + v14 ^ v14) ^ (int64_t)((v16 ^ (int32_t)v15) - 0x6463a428);
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

// Address range: 0x94ddf - 0x94e5a
int64_t function_94ddf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x94ddf
    int64_t v1; // 0x94ddf
    int64_t v2 = *(int64_t *)(v1 + 10); // 0x94def
    uint32_t v3 = *(int32_t *)v2; // 0x94df8
    int64_t v4 = *(int64_t *)(v1 + 187); // 0x94e05
    uint16_t v5 = *(int16_t *)(v2 + 4); // 0x94e23
    *(int64_t *)(v1 + (int64_t)v5) = v4 + (int64_t)v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x94e5a - 0x951c2
int64_t function_94e5a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x94e5a
    int64_t v1; // 0x94e5a
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x94e71
    int32_t v3 = *v2; // 0x94e71
    int32_t v4 = v3; // 0x94e85
    if ((v3 & 2) != 0) {
        // 0x94e8b
        v4 = v3 - 0x6f549f79;
        *v2 = v4;
    }
    int32_t * v5 = (int32_t *)(v1 + 368); // 0x94eba
    int32_t v6 = v4 - (*v5 | 0xf17c331); // 0x94ecd
    *v2 = v6;
    int64_t * v7 = (int64_t *)(v1 + 10); // 0x94eea
    int32_t v8 = *(int32_t *)(*v7 + 2); // 0x94efe
    *v2 = v6 | 0x16a9ca8c;
    *(int64_t *)(v1 + 96) = (int64_t)(v8 - v6 - *v5) - 0x653cf834;
    *v5 = *v5 - *v2;
    int32_t v9 = *v2; // 0x94fd6
    if ((v9 & 2) != 0) {
        int32_t v10 = (v9 ^ 0x5484fb1d) + 0x1682fe55; // 0x9501e
        *v2 = v10;
        if ((v10 & 2) != 0) {
            // 0x95052
            *v2 = (v10 | 0x6dd09c45) + 0x71b87f18;
        }
    }
    int32_t v11 = *v5; // 0x95130
    uint32_t v12 = (int32_t)*(int16_t *)*v7 ^ 0x6e089feb ^ v11; // 0x95144
    *v5 = v12 + v11;
    *v7 = *v7 + 6;
    return v12 % 0x10000;
}

// Address range: 0x951cb - 0x951cc
int64_t function_951cb(void) {
    // 0x951cb
    int64_t result; // 0x951cb
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
        v9 = 16 * (int64_t)((v5 & 16) != 0) | 4 * (int64_t)((v5 & 4) != 0) | 64 * (int64_t)((v5 & 64) != 0) | 128 * (int64_t)((char)v5 < 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | (int64_t)v13 | 2048 * (int64_t)v12 | 2;
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
        v18 = 16 * (int64_t)((v17 & 16) != 0) | 4 * (int64_t)((v17 & 4) != 0) | 64 * (int64_t)((v17 & 64) != 0) | 128 * (int64_t)((char)v17 < 0) | 256 * (int64_t)((v17 & 256) != 0) | 512 * (int64_t)((v17 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v17 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v17 & (int64_t)"le") != 0) | (int64_t)v22 | 2048 * (int64_t)v21 | 2;
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
        v27 = 16 * (int64_t)((v26 & 16) != 0) | 4 * (int64_t)((v26 & 4) != 0) | 64 * (int64_t)((v26 & 64) != 0) | 128 * (int64_t)((char)v26 < 0) | 256 * (int64_t)((v26 & 256) != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | (int64_t)v31 | 2048 * (int64_t)v30 | 2;
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
        v37 = 16 * (int64_t)((v36 & 16) != 0) | 4 * (int64_t)((v36 & 4) != 0) | 64 * (int64_t)((v36 & 64) != 0) | 128 * (int64_t)((char)v36 < 0) | 256 * (int64_t)((v36 & 256) != 0) | 512 * (int64_t)((v36 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v36 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v36 & (int64_t)"le") != 0) | 2048 * (int64_t)v41 | (int64_t)(v42 != 0) | 2;
        v39 = (int64_t)&g3;
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
        v10 = 16 * (int64_t)((v6 & 16) != 0) | 4 * (int64_t)((v6 & 4) != 0) | 64 * (int64_t)((v6 & 64) != 0) | 128 * (int64_t)((char)v6 < 0) | 256 * (int64_t)((v6 & 256) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | (int64_t)v14 | 2048 * (int64_t)v13 | 2;
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
        v19 = 16 * (int64_t)((v18 & 16) != 0) | 4 * (int64_t)((v18 & 4) != 0) | 64 * (int64_t)((v18 & 64) != 0) | 128 * (int64_t)((char)v18 < 0) | 256 * (int64_t)((v18 & 256) != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | (int64_t)v23 | 2048 * (int64_t)v22 | 2;
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
        v27 = 16 * (int64_t)((v26 & 16) != 0) | 4 * (int64_t)((v26 & 4) != 0) | 64 * (int64_t)((v26 & 64) != 0) | 128 * (int64_t)((char)v26 < 0) | 256 * (int64_t)((v26 & 256) != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | (int64_t)v31 | 2048 * (int64_t)v30 | 2;
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
        v35 = 16 * (int64_t)((v34 & 16) != 0) | 4 * (int64_t)((v34 & 4) != 0) | 64 * (int64_t)((v34 & 64) != 0) | 128 * (int64_t)((char)v34 < 0) | 256 * (int64_t)((v34 & 256) != 0) | 512 * (int64_t)((v34 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v34 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v34 & (int64_t)"le") != 0) | (int64_t)v39 | 2048 * (int64_t)v38 | 2;
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

// Address range: 0x9b0c8 - 0x9b4b3
int64_t function_9b0c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x9b0c8
    int64_t v1; // 0x9b0c8
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x9b0f9
    int64_t v3 = *v2; // 0x9b0f9
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 9)); // 0x9b14b
    int64_t v5 = *v4; // 0x9b14b
    unsigned char v6 = *(char *)v5; // 0x9b172
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 5)); // 0x9b1d5
    int64_t v8 = *(int64_t *)(v1 + 409); // 0x9b212
    *v4 = (((v8 | v7) & (int64_t)&g3) == 0 ? 1 : -1) + v5;
    int32_t * v9 = (int32_t *)(v1 + 35); // 0x9b311
    int32_t v10 = *v9; // 0x9b311
    if ((v10 & 2) != 0) {
        // 0x9b33b
        *v9 = v10 - 0x5f9abfc8 | 0x6c1cb79a;
    }
    int64_t result = 0; // 0x9b39d
    if (*(char *)*v2 != 0) {
        unsigned char v11 = (char)*(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 3)); // 0x9b172
        char v12 = v11 - v6; // 0x9b172
        unsigned char v13 = llvm_ctpop_i8(v12); // 0x9b172
        result = v1 + (int64_t)*(int16_t *)(*v2 + 1);
        bool v14; // 0x9b0c8
        *(int64_t *)result = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | (int64_t)(v6 > v11) | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v11 % 16 - v6 % 16 > 15) | 4 * (int64_t)(v13 % 2 == 0) | 2048 * (int64_t)(((v12 ^ v11) & (v6 ^ v11)) < 0) | 2;
    }
    int32_t * v15 = (int32_t *)(v1 + 368); // 0x9b466
    *v15 = 2 * *v15 + (int32_t)*(int16_t *)(*v2 + 7);
    *v2 = *v2 + 11;
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
        v13 = 16 * (int64_t)((v8 & 16) != 0) | 4 * (int64_t)((v8 & 4) != 0) | 64 * (int64_t)((v8 & 64) != 0) | 128 * (int64_t)((char)v8 < 0) | 256 * (int64_t)((v8 & 256) != 0) | 512 * (int64_t)((v8 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v8 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v8 & (int64_t)"le") != 0) | 2048 * (int64_t)v17 | (int64_t)v18 | 2;
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
        v24 = 16 * (int64_t)((v23 & 16) != 0) | 4 * (int64_t)((v23 & 4) != 0) | 64 * (int64_t)((v23 & 64) != 0) | 128 * (int64_t)((char)v23 < 0) | 256 * (int64_t)((v23 & 256) != 0) | 512 * (int64_t)((v23 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v23 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v23 & (int64_t)"le") != 0) | 2048 * (int64_t)v27 | (int64_t)v28 | 2;
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
        v32 = 16 * (int64_t)((v31 & 16) != 0) | 4 * (int64_t)((v31 & 4) != 0) | 64 * (int64_t)((v31 & 64) != 0) | 128 * (int64_t)((char)v31 < 0) | 256 * (int64_t)((v31 & 256) != 0) | 512 * (int64_t)((v31 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v31 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v31 & (int64_t)"le") != 0) | 2048 * (int64_t)v35 | (int64_t)v36 | 2;
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
        v40 = 16 * (int64_t)((v39 & 16) != 0) | 4 * (int64_t)((v39 & 4) != 0) | 64 * (int64_t)((v39 & 64) != 0) | 128 * (int64_t)((char)v39 < 0) | 256 * (int64_t)((v39 & 256) != 0) | 512 * (int64_t)((v39 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v39 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v39 & (int64_t)"le") != 0) | 2048 * (int64_t)v43 | (int64_t)v44 | 2;
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
    int64_t v51 = v2 + ((a5 ^ a2 | -0x80000000) + 0x80000000 ^ (int64_t)&g5); // 0xa1bd4
    *v3 = v49 + 0x632bdcd1;
    int32_t * v52 = (int32_t *)(v2 + 368); // 0xa1e9a
    *v52 = (int32_t)*(int16_t *)(*v5 + 3) + 0x79a60067 & *v52;
    *v5 = *v5 + 5;
    return (((v50 ^ 32) - 0x7fffffff | 0x7fffffff) ^ (v21 & 8) + v51 + ((v1 & -256 | (int64_t)v12) & v51 & (v21 | 128))) + (v7 & (int64_t)&g1 & 8 | 128);
}

// Address range: 0xa36c9 - 0xa3a4b
int64_t function_a36c9(void) {
    // 0xa36c9
    int64_t v1; // 0xa36c9
    int64_t v2 = v1;
    int64_t v3 = v2 + 368; // 0xa36d9
    int32_t * v4 = (int32_t *)v3; // 0xa36e0
    int32_t * v5 = (int32_t *)(v2 + 35); // 0xa370c
    int32_t v6 = 0x11e0e25a - *v4 + *v5; // 0xa370c
    *v5 = v6;
    *v4 = *v4 | v6;
    int32_t v7 = *v5; // 0xa3759
    int32_t v8 = v7; // 0xa376a
    if ((v7 & 2) != 0) {
        int32_t v9 = v7 + 0x1e65a7cd; // 0xa378b
        *v5 = v9;
        v8 = v9;
        if ((v9 & 2) != 0) {
            int32_t v10 = v7 - 0x2d7d43ad; // 0xa37ca
            *v5 = v10;
            v8 = v10;
        }
    }
    int64_t v11 = v2 + 10; // 0xa37dd
    int64_t * v12 = (int64_t *)v11; // 0xa37e7
    uint32_t v13 = *(int32_t *)*v12 ^ v8; // 0xa3812
    *v4 = *v4 ^ v13;
    *v5 = *v5 ^ 0x3f63da53;
    uint64_t v14 = *(int64_t *)*v12; // 0xa3847
    int64_t v15 = v14 < 0xffffffff00000001 ? v14 : v14 + 0xffffffff;
    *(int64_t *)(v2 + 96) = (v15 ^ 0x100000000 * v14 | (int64_t)v13) - 0x653cf834;
    uint32_t v16 = *v4 + 0x19a6f76e; // 0xa388c
    int32_t v17 = *v5 & v16; // 0xa389c
    *v5 = v17;
    int32_t v18 = *v4 - v17; // 0xa38c5
    *v4 = v18;
    int64_t v19 = *v12; // 0xa391f
    uint16_t v20 = *(int16_t *)(v19 + 8); // 0xa3956
    *v4 = ((int32_t)v20 - v18 ^ 0x6c00e995) & v18;
    *v12 = *v12 + 10;
    return ((v2 + 129 ^ v11 ^ (v2 | 1) - (int64_t)&g3 & (int64_t)v16 | (int64_t)v20) & -8 - v19 ^ v2 | v3) - 12 ^ ((int64_t)&g3 ^ 1) + 120;
}

// Address range: 0xa3a4d - 0xa3a50
int64_t function_a3a4d(int64_t a1) {
    // 0xa3a4d
    int64_t result; // 0xa3a4d
    return result;
}

// Address range: 0xa4df7 - 0xa517b
int64_t function_a4df7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa4df7
    int64_t v1; // 0xa4df7
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xa4e20
    *v3 = *v3 + 0x653cf834;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x16b0f0ee;
    int64_t result = v2 + 10; // 0xa4e8b
    int64_t * v4 = (int64_t *)result; // 0xa4e98
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v4 + 2)); // 0xa4ebe
    int64_t v6 = v2 + 0x16b0f0ee; // 0xa4ee8
    uint64_t v7 = *v3; // 0xa4f11
    char v8 = *(char *)(v2 + 404); // 0xa4f2b
    int64_t v9 = v5; // 0xa4f30
    int64_t v10 = v6; // 0xa4f30
    if (v8 == 98) {
        unsigned char v11 = (char)v7 % 32; // 0xa4f41
        bool v12 = (v5 & (int64_t)L"\n2") != 0; // 0xa4f41
        bool v13 = v5 % 2 != 0; // 0xa4f41
        v10 = v6;
        if (v11 != 0) {
            unsigned char v14 = (char)v6; // 0xa4f41
            char v15 = v5 % 2 != 0; // 0xa4f41
            v12 = v11 == 1 ? v14 / 128 != v15 : (v5 & (int64_t)L"\n2") != 0;
            v13 = (1 << v11 - 1 & v14) != 0;
            v10 = v6 & -256 | (int64_t)(v15 << 8 - v11 | v14 >> v11 | (char)((int16_t)v6 % 256 << (int16_t)(9 - v11)));
        }
        v9 = 16 * (int64_t)((v5 & 16) != 0) | 4 * (int64_t)((v5 & 4) != 0) | 64 * (int64_t)((v5 & 64) != 0) | 128 * (int64_t)((char)v5 < 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | (int64_t)v13 | 2048 * (int64_t)v12 | 2;
    }
    int64_t v16 = v10;
    uint64_t v17 = v9;
    int64_t v18 = v17; // 0xa4f51
    int64_t v19 = v16; // 0xa4f51
    if (v8 == 50) {
        uint16_t v20 = (int16_t)v7 % 32; // 0xa4f62
        bool v21 = (v17 & (int64_t)L"\n2") != 0; // 0xa4f62
        bool v22 = v17 % 2 != 0; // 0xa4f62
        v19 = v16;
        if (v20 != 0) {
            uint16_t v23 = (int16_t)v16; // 0xa4f62
            int16_t v24 = v17 % 2 != 0; // 0xa4f62
            v21 = v20 == 1 ? v23 / 0x8000 != v24 : (v17 & (int64_t)L"\n2") != 0;
            v22 = (1 << v20 - 1 & v23) != 0;
            v19 = v16 & -0x10000 | (int64_t)(v24 << 16 - v20 | v23 >> v20 | (int16_t)((int32_t)v16 % 0x10000 << (int32_t)(17 - v20)));
        }
        v18 = 16 * (int64_t)((v17 & 16) != 0) | 4 * (int64_t)((v17 & 4) != 0) | 64 * (int64_t)((v17 & 64) != 0) | 128 * (int64_t)((char)v17 < 0) | 256 * (int64_t)((v17 & 256) != 0) | 512 * (int64_t)((v17 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v17 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v17 & (int64_t)"le") != 0) | (int64_t)v22 | 2048 * (int64_t)v21 | 2;
    }
    uint64_t v25 = v18;
    int64_t v26 = v25; // 0xa4f70
    int64_t v27 = v19; // 0xa4f70
    if (v8 == 80) {
        uint32_t v28 = (int32_t)v7 % 32; // 0xa4f85
        bool v29 = (v25 & (int64_t)L"\n2") != 0; // 0xa4f85
        bool v30 = v25 % 2 != 0; // 0xa4f85
        v27 = v19;
        if (v28 != 0) {
            int32_t v31 = v19; // 0xa4f85
            v29 = v28 == 1 ? v31 < 0 != v25 % 2 != 0 : (v25 & (int64_t)L"\n2") != 0;
            v30 = (1 << v28 - 1 & v31) != 0;
            v27 = v31 >> v28 | (int32_t)((v19 & 0xffffffff) << (int64_t)(33 - v28)) | (int32_t)(v25 % 2 != 0) << 32 - v28;
        }
        v26 = 16 * (int64_t)((v25 & 16) != 0) | 4 * (int64_t)((v25 & 4) != 0) | 64 * (int64_t)((v25 & 64) != 0) | 128 * (int64_t)((char)v25 < 0) | 256 * (int64_t)((v25 & 256) != 0) | 512 * (int64_t)((v25 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v25 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v25 & (int64_t)"le") != 0) | (int64_t)v30 | 2048 * (int64_t)v29 | 2;
    }
    uint64_t v32 = v27;
    uint64_t v33 = v26;
    int64_t v34 = v33; // 0xa4f8b
    int64_t v35 = v32; // 0xa4f8b
    if (v8 == 58) {
        uint64_t v36 = v7 % 64; // 0xa4f95
        bool v37 = (v33 & (int64_t)L"\n2") != 0; // 0xa4f95
        bool v38 = v33 % 2 != 0; // 0xa4f95
        v35 = v32;
        if (v36 != 0) {
            int64_t v39 = v33 % 2 != 0; // 0xa4f95
            v37 = v36 == 1 ? v32 / 0x8000000000000000 != v39 : (v33 & (int64_t)L"\n2") != 0;
            v38 = (v32 & 1 << v36 - 1) != 0;
            v35 = v32 >> v36 | (int64_t)((int128_t)v32 << (int128_t)(65 - v36)) | v39 << 64 - v36;
        }
        v34 = 16 * (int64_t)((v33 & 16) != 0) | 4 * (int64_t)((v33 & 4) != 0) | 64 * (int64_t)((v33 & 64) != 0) | 128 * (int64_t)((char)v33 < 0) | 256 * (int64_t)((v33 & 256) != 0) | 512 * (int64_t)((v33 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v33 & (int64_t)&g3) != 0) | 0x4000 * (int64_t)((v33 & (int64_t)"le") != 0) | (int64_t)v38 | 2048 * (int64_t)v37 | 2;
    }
    // 0xa4fa0
    *(int64_t *)(v2 + 113) = v35 + 0x1a44e4ef;
    int64_t v40 = *v4; // 0xa5044
    if (*(char *)(v40 + 4) != 0) {
        // 0xa506d
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v40 + 2)) = v34;
    }
    int32_t * v41 = (int32_t *)(v2 + 368); // 0xa50c7
    int32_t v42 = *v41 & 0x844d83d; // 0xa50c7
    *v41 = v42;
    *v41 = (int32_t)*(int16_t *)*v4 - v42 ^ 0x77e8718e | v42;
    *v4 = *v4 + 5;
    return result;
}

// Address range: 0xa6e55 - 0xa6f03
int64_t function_a6e55(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xa6e55
    int64_t v1; // 0xa6e55
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xa6e66
    int64_t v3 = *v2; // 0xa6e66
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0xa6e77
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0xa6e9b
    *(int64_t *)v5 = v4;
    uint32_t v6 = *(int32_t *)*v2; // 0xa6ec3
    *(int64_t *)(v5 + 8) = *(int64_t *)(v1 + 187) + (int64_t)v6;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xa6f03 - 0xa6f79
int64_t function_a6f03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xa6f03
    int64_t v1; // 0xa6f03
    int64_t v2 = *(int64_t *)(v1 + 10); // 0xa6f14
    int64_t v3 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v2); // 0xa6f25
    *(int64_t *)(v1 + (int64_t)*(int16_t *)(v2 + 2)) = v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xa6f79 - 0xa71fe
int64_t function_a6f79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa6f79
    int64_t v1; // 0xa6f79
    int32_t * v2 = (int32_t *)(v1 + 368); // 0xa6f8f
    int64_t * v3 = (int64_t *)(v1 + 10); // 0xa6f9a
    uint16_t v4 = *(int16_t *)*v3; // 0xa6fb2
    int32_t * v5 = (int32_t *)(v1 + 35); // 0xa6fb6
    *v5 = *v5 | *v2 ^ 0x63e0134e;
    int64_t v6 = *v3; // 0xa6fba
    uint32_t v7 = *(int32_t *)*(int64_t *)(v1 + (int64_t)v4); // 0xa6fce
    int64_t * v8 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 2)); // 0xa6fd4
    int64_t v9 = *v8; // 0xa6fd4
    uint32_t v10 = *(int32_t *)v9; // 0xa6fd7
    int64_t v11 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 9)); // 0xa6ffc
    int64_t v12 = v1 + (int64_t)*(int16_t *)v6; // 0xa7053
    if (((*(int64_t *)(v1 + 409) | v11) & (int64_t)&g3) == 0) {
        // 0xa7077
        *v8 = v9 + 4;
        int64_t * v13 = (int64_t *)v12; // 0xa707e
        *v13 = *v13 + 4;
    } else {
        // 0xa7063
        *v8 = v9 - 4;
        int64_t * v14 = (int64_t *)v12; // 0xa706a
        *v14 = *v14 - 4;
    }
    int32_t v15 = *v2 | *v5; // 0xa70c9
    *v2 = v15;
    int64_t v16 = *v3; // 0xa70d4
    int32_t v17 = v15; // 0xa70e9
    int64_t v18 = v16; // 0xa70e9
    if (*(char *)(v16 + 6) != 0) {
        int32_t v19 = v10 - v7; // 0xa6fd7
        unsigned char v20 = llvm_ctpop_i8((char)v19); // 0xa6fd7
        uint16_t v21 = *(int16_t *)(v16 + 7); // 0xa7127
        bool v22; // 0xa6f79
        *(int64_t *)(v1 + (int64_t)v21) = 0x4000 * (int64_t)v22 | 1024 * (int64_t)v22 | 512 * (int64_t)v22 | 256 * (int64_t)v22 | (int64_t)(v10 < v7) | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(v10 % 16 - v7 % 16 > 15) | 2048 * (int64_t)(((v19 ^ v10) & (v10 ^ v7)) < 0) | 4 * (int64_t)(v20 % 2 == 0) | 2;
        v17 = *v2;
        v18 = *v3;
    }
    // 0xa713a
    *v2 = ((int32_t)*(int16_t *)(v18 + 4) ^ 0x5537ca3f) & v17;
    *v3 = *v3 + 11;
    return 0;
}

// Address range: 0xa757f - 0xa799b
int64_t function_a757f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xa757f
    int64_t v1; // 0xa757f
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xa7596
    *v3 = *v3 + 0x653cf834 ^ 0x415a9779;
    int32_t * v4 = (int32_t *)(v2 + 35); // 0xa75dc
    int32_t * v5 = (int32_t *)(v2 + 368); // 0xa75ec
    *v5 = *v5 & *v4;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int32_t v6 = *v5 | 0x7e6d6467; // 0xa7617
    *v5 = v6;
    int32_t v7 = *v4; // 0xa7628
    int32_t v8 = v6; // 0xa7635
    if ((v7 & 2) != 0) {
        // 0xa763b
        *v4 = v7 + 0x37bf198e;
        v8 = *v5;
    }
    uint64_t v9 = *v3 ^ 0x415a9779; // 0xa7678
    *v5 = v8 + 0x2e32a3a2;
    char v10 = *(char *)(v2 + 404); // 0xa769b
    int64_t v11; // 0xa757f
    int64_t v12; // 0xa757f
    bool v13; // 0xa757f
    if (v10 == 98) {
        char v14 = v9 | v2; // 0xa76a7
        int64_t v15 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0) | 2; // bp-8, 0xa76aa
        v12 = (int64_t)&v15;
        v11 = v9 % 256 | v2;
    }
    int64_t v16 = v12; // 0xa76ae
    int64_t v17 = v11; // 0xa76ae
    if (v10 == 50) {
        int64_t v18 = v11 | v9;
        int16_t v19 = v18; // 0xa76b4
        int64_t v20 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v18) % 2 == 0) | 2; // bp-16, 0xa76b8
        v16 = (int64_t)&v20;
        v17 = v11 | v9 % 0x10000;
    }
    int64_t v21 = v16; // 0xa76bc
    int64_t v22 = v17; // 0xa76bc
    if (v10 == 80) {
        int64_t v23 = v17 | v9;
        int32_t v24 = v23; // 0xa76c2
        unsigned char v25 = llvm_ctpop_i8((char)v23); // 0xa76c2
        v21 = v16 - 8;
        *(int64_t *)v21 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 4 * (int64_t)(v25 % 2 == 0) | 2;
        v22 = v23 & 0xffffffff;
    }
    int64_t v26 = v21; // 0xa76c9
    int64_t v27 = v22; // 0xa76c9
    if (v10 == 58) {
        // 0xa76cf
        v27 = v22 | v9;
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0xa76cf
        v26 = v21 - 8;
        *(int64_t *)v26 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v27 == 0) | 128 * (int64_t)(v27 < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
    }
    // 0xa76d3
    *(int64_t *)(v2 + 113) = v27 + 0x1a44e4ef;
    int64_t * v29 = (int64_t *)(v2 + 10); // 0xa7794
    int64_t v30 = *v29; // 0xa7794
    int64_t v31 = v30; // 0xa77e7
    if (*(char *)(v30 + 4) != 0) {
        // 0xa77ed
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v30) = *(int64_t *)v26;
        v31 = *v29;
    }
    int64_t v32 = *(int64_t *)(v2 + 271); // 0xa7897
    uint16_t v33 = *(int16_t *)(v31 + 2); // 0xa78bf
    *v5 = (int32_t)v33 ^ 0x272d9a0b | *v5;
    *v29 = *v29 + 5;
    return ((int64_t)&g2 | 32) - v32 - (int64_t)(v33 ^ -0x65f5);
}

// Address range: 0xa799e - 0xa79a9
int64_t function_a799e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xa799e
    return function_49f502f2();
}

// Address range: 0xabd6f - 0xac110
int64_t function_abd6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xabd6f
    int64_t result; // 0xabd6f
    int64_t * v1 = (int64_t *)(result + 10); // 0xabdb6
    int64_t v2 = *v1;
    int64_t v3 = result + (int64_t)*(int16_t *)(v2 + 3); // 0xabdd3
    char v4 = *(char *)(v2 + 2); // 0xabe09
    if (v4 == 38) {
        int32_t * v5 = (int32_t *)v3; // 0xabe3c
        *v5 = *v5 & -2;
    }
    if (v4 == -63) {
        int32_t * v6 = (int32_t *)v3; // 0xabe70
        *v6 = *v6 & (int32_t)((int64_t)&g3 ^ -1);
        int32_t * v7 = (int32_t *)(result + 409); // 0xabe97
        *v7 = *v7 & (int32_t)((int64_t)&g3 ^ -1);
    }
    if (v4 == -29) {
        int32_t * v8 = (int32_t *)v3; // 0xabecb
        *v8 = *v8 & (int32_t)((int64_t)&g1 ^ -1);
        int32_t * v9 = (int32_t *)(result + 409); // 0xabef2
        *v9 = *v9 & (int32_t)((int64_t)&g1 ^ -1);
    }
    if (v4 == -14) {
        int32_t * v10 = (int32_t *)v3; // 0xabf06
        uint32_t v11 = *v10; // 0xabf06
        if (v11 % 2 == 0) {
            // 0xabf57
            *v10 = v11 | 1;
        } else {
            // 0xabf27
            *v10 = v11 & -2;
        }
    }
    if (v4 == 116) {
        int32_t * v12 = (int32_t *)v3; // 0xabfae
        *v12 = *v12 | 1;
    }
    if (v4 == -31) {
        int32_t * v13 = (int32_t *)v3; // 0xabfce
        *v13 = *v13 | (int32_t)&g3;
        int32_t * v14 = (int32_t *)(result + 409); // 0xabfea
        *v14 = *v14 | (int32_t)&g3;
    }
    if (v4 == 83) {
        int32_t * v15 = (int32_t *)v3; // 0xac00e
        *v15 = *v15 | (int32_t)&g1;
        int32_t * v16 = (int32_t *)(result + 409); // 0xac039
        *v16 = *v16 | (int32_t)&g1;
    }
    int32_t * v17 = (int32_t *)(result + 368); // 0xac0aa
    int32_t v18 = *v17; // 0xac0aa
    *v17 = (int32_t)*(int16_t *)*v1 + 0x4c044f6f + v18 ^ v18;
    *v1 = *v1 + 5;
    return result;
}

// Address range: 0xac440 - 0xac802
int64_t function_ac440(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xac440
    int64_t v1; // 0xac440
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xac471
    int32_t v3 = *v2; // 0xac471
    if ((v3 & 2) != 0) {
        // 0xac488
        *v2 = (v3 | 0x38431ac4) ^ 0x1ad728d4;
    }
    int64_t * v4 = (int64_t *)(v1 + 10); // 0xac4f4
    int64_t v5 = *v4; // 0xac4f4
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v5 + 4)); // 0xac54b
    uint16_t v7 = *(int16_t *)*v6; // 0xac558
    int64_t * v8 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v5 + 9)); // 0xac563
    int64_t v9 = *v8; // 0xac563
    uint16_t v10 = *(int16_t *)v9; // 0xac566
    int64_t v11 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v5 + 2)); // 0xac5c0
    int64_t v12; // 0xac440
    if (((*(int64_t *)(v1 + 409) | v11) & (int64_t)&g3) == 0) {
        // 0xac693
        *v8 = v9 + 2;
        v12 = *v6 + 2;
    } else {
        // 0xac677
        *v8 = v9 - 2;
        v12 = *v6 - 2;
    }
    // 0xac6ae
    *v6 = v12;
    int64_t v13 = *v4; // 0xac6c4
    int64_t v14 = v13; // 0xac6e9
    if (*(char *)(v13 + 8) != 0) {
        int16_t v15 = v10 - v7; // 0xac566
        unsigned char v16 = llvm_ctpop_i8((char)v15); // 0xac566
        uint16_t v17 = *(int16_t *)(v13 + 6); // 0xac72a
        bool v18; // 0xac440
        *(int64_t *)(v1 + (int64_t)v17) = 0x4000 * (int64_t)v18 | 1024 * (int64_t)v18 | 512 * (int64_t)v18 | 256 * (int64_t)v18 | (int64_t)(v10 < v7) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 16 * (int64_t)(v10 % 16 - v7 % 16 > 15) | 2048 * (int64_t)(((v15 ^ v10) & (v10 ^ v7)) < 0) | 4 * (int64_t)(v16 % 2 == 0) | 2;
        v14 = *v4;
    }
    int32_t * v19 = (int32_t *)(v1 + 368); // 0xac7ba
    int32_t v20 = *v19; // 0xac7ba
    uint32_t v21 = (int32_t)*(int16_t *)v14 - v20 + 0x4522afca; // 0xac7bf
    *v19 = v20 - v21;
    *v4 = *v4 + 11;
    return v21 % 0x10000;
}

// Address range: 0xac804 - 0xac806
int64_t function_ac804(void) {
    // 0xac804
    int64_t result; // 0xac804
    return result;
}

// Address range: 0xac807 - 0xac808
int64_t function_ac807(void) {
    // 0xac807
    int64_t result; // 0xac807
    return result;
}

// Address range: 0xb0e30 - 0xb11ca
int64_t function_b0e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xb0e30
    int64_t v1; // 0xb0e30
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xb0e77
    int64_t v3 = *v2; // 0xb0e77
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0xb0eb0
    uint32_t v5 = *(int32_t *)*v4; // 0xb0eb9
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0xb0ec8
    int64_t v7 = *v6; // 0xb0ec8
    uint32_t v8 = *(int32_t *)v7; // 0xb0ecb
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 8)); // 0xb0f1a
    int64_t v10; // 0xb0e30
    if (((*(int64_t *)(v1 + 409) | v9) & (int64_t)&g3) == 0) {
        // 0xb100b
        *v6 = v7 + 4;
        v10 = *v4 + 4;
    } else {
        // 0xb0fea
        *v6 = v7 - 4;
        v10 = *v4 - 4;
    }
    // 0xb1027
    *v4 = v10;
    int64_t v11 = *v2; // 0xb1058
    int64_t v12 = v11; // 0xb1075
    int64_t result = 0; // 0xb1075
    if (*(char *)(v11 + 10) != 0) {
        int32_t v13 = v8 - v5; // 0xb0ecb
        unsigned char v14 = llvm_ctpop_i8((char)v13); // 0xb0ecb
        result = v1 + (int64_t)*(int16_t *)(v11 + 2);
        bool v15; // 0xb0e30
        *(int64_t *)result = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | (int64_t)(v8 < v5) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v8 % 16 - v5 % 16 > 15) | 2048 * (int64_t)(((v13 ^ v8) & (v8 ^ v5)) < 0) | 4 * (int64_t)(v14 % 2 == 0) | 2;
        v12 = *v2;
    }
    int32_t * v16 = (int32_t *)(v1 + 368); // 0xb117f
    *v16 = 2 * *v16 - (int32_t)*(int16_t *)v12;
    *v2 = *v2 + 11;
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
    return ((v27 ^ v32) & 120 ^ v2 + 271) & (int64_t)&g3;
}

// Address range: 0xb8b47 - 0xb8b4a
int64_t function_b8b47(void) {
    // 0xb8b47
    int64_t result; // 0xb8b47
    return result;
}

// Address range: 0xbfb99 - 0xbfc0d
int64_t function_bfb99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xbfb99
    int64_t v1; // 0xbfb99
    int64_t v2 = *(int64_t *)(v1 + 10); // 0xbfba9
    int64_t v3 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v2 + 2)); // 0xbfbb8
    *(int64_t *)(v1 + (int64_t)*(int16_t *)v2) = v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xbfc0d - 0xbff6a
int64_t function_bfc0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xbfc0d
    int64_t v1; // 0xbfc0d
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xbfc19
    int64_t v3 = *v2; // 0xbfc19
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 5)); // 0xbfc61
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 3)); // 0xbfc8d
    int64_t v6 = *v5; // 0xbfc8d
    uint16_t v7 = *(int16_t *)v6; // 0xbfc90
    int64_t v8 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0xbfcec
    int64_t v9 = v1 + 409; // 0xbfcfc
    int64_t v10 = *(int64_t *)v9 & (int64_t)&g3; // 0xbfd13
    *v5 = ((v10 | v8 & (int64_t)&g3) == 0 ? 2 : -2) + v6;
    int64_t v11 = v1 + 368; // 0xbfdda
    int32_t * v12 = (int32_t *)v11; // 0xbfdf2
    int32_t v13 = *v12 ^ 0x37af3c05; // 0xbfdf2
    *v12 = v13;
    int64_t v14 = *v2; // 0xbfdf9
    int32_t v15 = v13; // 0xbfe1c
    int64_t result = 0; // 0xbfe1c
    if (*(char *)(v14 + 2) != 0) {
        uint16_t v16 = (int16_t)v4; // 0xbfc90
        int16_t v17 = v16 - v7; // 0xbfc90
        bool v18; // 0xbfc0d
        int64_t v19 = 0x4000 * (int64_t)v18 | 1024 * (int64_t)v18 | 512 * (int64_t)v18 | 256 * (int64_t)v18 | (int64_t)(v7 > v16) | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v16 % 16 - v7 % 16 > 15) | 2048 * (int64_t)(((v17 ^ v16) & (v7 ^ v16)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v17) % 2 == 0) | 2; // 0xbfc94
        int64_t v20 = v14 + 9; // 0xbfe53
        *(int64_t *)(v1 + (int64_t)*(int16_t *)v20) = v19;
        v15 = *v12;
        result = v19 & (4 - (((v3 + (v1 | a3) ^ (int64_t)L"\n2") + 112 & v3) + v9 & 144) + (v10 | v4 + (int64_t)&g1 + (int64_t)&g5) | v11) | v20;
    }
    int32_t v21 = v15 & 0x6b4057cf; // 0xbfe9d
    *v12 = v21;
    *v12 = 2 * v21 - 0x4bf1ddd5 - (int32_t)*(int16_t *)(*v2 + 7);
    *v2 = *v2 + 11;
    return result;
}
