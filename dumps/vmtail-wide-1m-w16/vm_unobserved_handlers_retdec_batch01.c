/*
 * Targeted RetDec C for unobserved VM handler native ranges, batch 1.
 *
 * These dispatch entries are statically inventoried but were not seen as
 * dispatch targets in the concrete traces. Batches are sorted by native
 * span size so each decompile stays small and reproducible.
 *
 * Total unobserved handler ranges: 155
 * Batch size: 24
 * Ranges:
 *   0xaaf3e-0xab14e entry=244 span_bytes=528 insns=111 tail=0xab13e
 *   0x90a1b-0x90c31 entry=116 span_bytes=533 insns=127 tail=0x90c21
 *   0x7acd8-0x7aef6 entry=12 span_bytes=541 insns=118 tail=0x7aee6
 *   0xbc466-0xbc683 entry=328 span_bytes=541 insns=117 tail=0xbc673
 *   0xa823e-0xa845e entry=234 span_bytes=542 insns=117 tail=0xa844e
 *   0xb769c-0xb78bd entry=303 span_bytes=545 insns=125 tail=0xb78ad
 *   0x9ede9-0x9f017 entry=191 span_bytes=558 insns=114 tail=0x9f007
 *   0xa3dc7-0xa3ff7 entry=213 span_bytes=559 insns=120 tail=0xa3fe7
 *   0x8cc81-0x8cec2 entry=100 span_bytes=572 insns=124 tail=0x8ceb2
 *   0xa68c2-0xa6b06 entry=224 span_bytes=580 insns=121 tail=0xa6af6
 *   0x84e1d-0x85066 entry=63 span_bytes=584 insns=126 tail=0x85056
 *   0x8f8ae-0x8fafa entry=111 span_bytes=587 insns=127 tail=0x8faea
 *   0x9d24c-0x9d4a2 entry=182 span_bytes=598 insns=120 tail=0x9d492
 *   0xc21c3-0xc241d entry=353 span_bytes=601 insns=135 tail=0xc240d
 *   0xb84a7-0xb8705 entry=309 span_bytes=603 insns=140 tail=0xb86f5
 *   0x96918-0x96b7b entry=147 span_bytes=608 insns=128 tail=0x96b6b
 *   0xaf26d-0xaf4dc entry=263 span_bytes=620 insns=131 tail=0xaf4cc
 *   0x80ef6-0x8116a entry=39 span_bytes=628 insns=133 tail=0x8115a
 *   0xb23f7-0xb266e entry=279 span_bytes=631 insns=138 tail=0xb265e
 *   0x7d941-0x7dbc8 entry=25 span_bytes=647 insns=140 tail=0x7dbb8
 *   0xb625d-0xb64e5 entry=296 span_bytes=647 insns=152 tail=0xb64d5
 *   0xb4980-0xb4c0e entry=288 span_bytes=650 insns=154 tail=0xb4bfe
 *   0xa6f79-0xa720b entry=228 span_bytes=658 insns=141 tail=0xa71fb
 *   0xbe648-0xbe8da entry=335 span_bytes=658 insns=144 tail=0xbe8ca
 */
#include <stdbool.h>
#include <stdint.h>

typedef __int128 int128_t;
extern int g1;
extern int g2;
unsigned char llvm_ctpop_i8(unsigned char value);
void __asm_out(uint16_t port, char value);
uint8_t __readfsbyte(int64_t offset);

int64_t function_12d2b020();
int64_t function_cd47c5();

// Address range: 0x7acd8 - 0x7aee8
int64_t function_7acd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x7acd8
    int64_t v1; // 0x7acd8
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x7ad0b
    int64_t v3 = *v2; // 0x7ad0b
    uint16_t v4 = *(int16_t *)(v3 + 4); // 0x7ad3c
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0x7ad6c
    int32_t * v6 = (int32_t *)(v1 + 368); // 0x7ad75
    *v6 = *v6 | *(int32_t *)(v1 + 35);
    *(char *)*v5 = (char)*(int64_t *)(v1 + (int64_t)v4);
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(*v2 + 2)); // 0x7add5
    *v5 = ((v7 & (int64_t)&g2) == 0 ? 1 : -1) + *v5;
    int32_t v8 = *v6; // 0x7ae82
    uint32_t v9 = (int32_t)*(int16_t *)*v2 - v8 + 0x61ec39cd; // 0x7ae8f
    *v6 = v9 | v8;
    *v2 = *v2 + 8;
    return *(int64_t *)(*(int64_t *)(v1 + 271) + (int64_t)(v9 % 0x10000));
}

// Address range: 0x7d941 - 0x7dbbb
int64_t function_7d941(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x7d941
    int64_t v1; // 0x7d941
    int64_t result = v1 + 368; // 0x7d94e
    int32_t * v2 = (int32_t *)result; // 0x7d955
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x7d96b
    *v3 = *v3 ^ *v2;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x7d995
    int64_t v5 = *v4; // 0x7d995
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)v5); // 0x7d9b7
    int64_t v7 = *v6; // 0x7d9b7
    int64_t * v8 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v5 + 7)); // 0x7d9c1
    uint16_t v9 = *(int16_t *)*v8; // 0x7d9c4
    uint16_t v10 = *(int16_t *)v7; // 0x7d9c8
    int64_t v11 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v5 + 9)); // 0x7d9ef
    int64_t v12; // 0x7d941
    if (((*(int64_t *)(v1 + 409) | v11) & (int64_t)&g2) == 0) {
        // 0x7da66
        *v6 = v7 + 2;
        v12 = *v8 + 2;
    } else {
        // 0x7da53
        *v6 = v7 - 2;
        v12 = *v8 - 2;
    }
    // 0x7da74
    *v8 = v12;
    int64_t v13 = *v4; // 0x7da97
    int64_t v14 = v13; // 0x7daaf
    if (*(char *)(v13 + 6) != 0) {
        int16_t v15 = v10 - v9; // 0x7d9c8
        unsigned char v16 = llvm_ctpop_i8((char)v15); // 0x7d9c8
        uint16_t v17 = *(int16_t *)(v13 + 2); // 0x7daea
        bool v18; // 0x7d941
        *(int64_t *)(v1 + (int64_t)v17) = 0x4000 * (int64_t)v18 | 1024 * (int64_t)v18 | 512 * (int64_t)v18 | 256 * (int64_t)v18 | (int64_t)(v10 < v9) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 16 * (int64_t)(v10 % 16 - v9 % 16 > 15) | 2048 * (int64_t)(((v15 ^ v10) & (v10 ^ v9)) < 0) | 4 * (int64_t)(v16 % 2 == 0) | 2;
        v14 = *v4;
    }
    int32_t v19 = *v2; // 0x7db6d
    *v2 = v19 + (int32_t)*(int16_t *)(v14 + 4) ^ v19;
    *v4 = *v4 + 11;
    return result;
}

// Address range: 0x80ef6 - 0x8115d
int64_t function_80ef6(int64_t a1) {
    // 0x80ef6
    int64_t v1; // 0x80ef6
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x80f03
    int64_t v3 = *v2; // 0x80f03
    int32_t * v4 = (int32_t *)(v1 + 35); // 0x80f21
    int32_t v5 = *v4; // 0x80f21
    int64_t v6 = (int64_t)*(int16_t *)(v3 + 4);
    int64_t v7 = v6; // 0x80f3e
    int64_t v8 = v3; // 0x80f3e
    if ((v5 & 2) != 0) {
        // 0x80f44
        *v4 = (v5 & 0x3f99e389) - 0x63d69db;
        v8 = *v2;
        v7 = (int64_t)*(int16_t *)(v8 + 4);
    }
    uint64_t v9 = *(int64_t *)*(int64_t *)(v1 + v6); // 0x80f6d
    int64_t * v10 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v8 + 8)); // 0x80f7e
    int64_t v11 = *v10; // 0x80f7e
    uint64_t v12 = *(int64_t *)v11; // 0x80f81
    int64_t v13 = v1 + (int64_t)*(int16_t *)v8; // 0x80fa3
    int64_t v14 = *(int64_t *)(v1 + 409) & (int64_t)&g2; // 0x80fbd
    int64_t v15 = v14 | *(int64_t *)v13 & (int64_t)&g2; // 0x80fc4
    int64_t v16 = v1 + v7; // 0x80ffa
    if (v15 == 0) {
        // 0x8101d
        *v10 = v11 + 8;
        int64_t * v17 = (int64_t *)v16; // 0x81024
        *v17 = *v17 + 8;
    } else {
        // 0x8100a
        *v10 = v11 - 8;
        int64_t * v18 = (int64_t *)v16; // 0x81011
        *v18 = *v18 - 8;
    }
    int64_t v19 = -144 - v13 + v14 | 128; // 0x81047
    int64_t v20 = *v2; // 0x8104e
    int64_t v21 = v20; // 0x81063
    int64_t v22 = 0; // 0x81063
    int64_t v23 = v19; // 0x81063
    if (*(char *)(v20 + 10) != 0) {
        int64_t v24 = v12 - v9; // 0x80f81
        unsigned char v25 = llvm_ctpop_i8((char)v24); // 0x80f81
        int64_t v26 = v1 + (int64_t)*(int16_t *)(v20 + 2); // 0x8109f
        bool v27; // 0x80ef6
        *(int64_t *)v26 = 0x4000 * (int64_t)v27 | 1024 * (int64_t)v27 | 512 * (int64_t)v27 | 256 * (int64_t)v27 | (int64_t)(v12 < v9) | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 16 * (int64_t)(v12 % 16 - v9 % 16 > 15) | 2048 * (int64_t)(((v24 ^ v12) & (v12 ^ v9)) < 0) | 4 * (int64_t)(v25 % 2 == 0) | 2;
        v21 = *v2;
        v22 = v26 & (int64_t)L"\n2";
        v23 = (v26 & ((v19 | v15) ^ 1)) + 0x7fffffff;
    }
    int32_t * v28 = (int32_t *)(v1 + 368); // 0x81129
    *v28 = *v28 | (int32_t)*(int16_t *)(v21 + 6);
    *v2 = *v2 + 11;
    return (v23 - 1 ^ v22) + 1;
}

// Address range: 0x81162 - 0x81165
int64_t function_81162(void) {
    // 0x81162
    int64_t result; // 0x81162
    return result;
}

// Address range: 0x84e1d - 0x85059
int64_t function_84e1d(void) {
    // 0x84e1d
    int64_t v1; // 0x84e1d
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x84e3e
    int64_t v3 = *v2; // 0x84e3e
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0x84e60
    int64_t v5 = *v4; // 0x84e60
    unsigned char v6 = *(char *)v5; // 0x84e69
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 7)); // 0x84e91
    int64_t v8 = *(int64_t *)(v1 + 409); // 0x84ea5
    *v4 = (((v8 | v7) & (int64_t)&g2) == 0 ? 1 : -1) + v5;
    int64_t v9 = *v2; // 0x84f2b
    int64_t v10 = v9; // 0x84f43
    if (*(char *)(v9 + 6) != 0) {
        unsigned char v11 = (char)*(int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0x84e69
        char v12 = v11 - v6; // 0x84e69
        unsigned char v13 = llvm_ctpop_i8(v12); // 0x84e69
        uint16_t v14 = *(int16_t *)(v9 + 9); // 0x84f86
        bool v15; // 0x84e1d
        *(int64_t *)(v1 + (int64_t)v14) = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | (int64_t)(v6 > v11) | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v11 % 16 - v6 % 16 > 15) | 4 * (int64_t)(v13 % 2 == 0) | 2048 * (int64_t)(((v12 ^ v11) & (v6 ^ v11)) < 0) | 2;
        v10 = *v2;
    }
    int64_t v16 = *(int64_t *)(v1 + 271) & 2; // 0x84ff7
    int32_t * v17 = (int32_t *)(v1 + 368); // 0x8500d
    int32_t v18 = *v17; // 0x8500d
    *v17 = ((int32_t)*(int16_t *)(v10 + 2) - v18 ^ 0x14083b5a) + v18;
    *v2 = *v2 + 11;
    return v16 + v1 ^ v16;
}

// Address range: 0x8cc81 - 0x8ceb4
int64_t function_8cc81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8cc81
    int64_t v1; // 0x8cc81
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x8cc9b
    int64_t v3 = *v2; // 0x8cc9b
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0x8ccd3
    int64_t v5 = *v4; // 0x8ccd3
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 2)); // 0x8ccd9
    uint16_t v7 = *(int16_t *)v5; // 0x8ccdf
    int64_t v8 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0x8cd03
    int64_t v9 = *(int64_t *)(v1 + 409); // 0x8cd18
    *v4 = (((v9 | v8) & (int64_t)&g2) == 0 ? 2 : -2) + v5;
    int64_t v10 = *v2; // 0x8cd83
    int64_t v11 = v10; // 0x8cd9d
    if (*(char *)(v10 + 8) != 0) {
        uint16_t v12 = (int16_t)v6; // 0x8ccdf
        int16_t v13 = v12 - v7; // 0x8ccdf
        unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x8ccdf
        uint16_t v15 = *(int16_t *)(v10 + 4); // 0x8cddb
        bool v16; // 0x8cc81
        *(int64_t *)(v1 + (int64_t)v15) = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v7 > v12) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v12 % 16 - v7 % 16 > 15) | 2048 * (int64_t)(((v13 ^ v12) & (v7 ^ v12)) < 0) | 4 * (int64_t)(v14 % 2 == 0) | 2;
        v11 = *v2;
    }
    int32_t * v17 = (int32_t *)(v1 + 368); // 0x8ce63
    int32_t v18 = *v17; // 0x8ce63
    uint32_t v19 = (int32_t)*(int16_t *)(v11 + 9) - 0x4b931360 + v18; // 0x8ce6d
    *v17 = v19 ^ v18;
    *v2 = *v2 + 11;
    return *(int64_t *)(v1 + 271) + (int64_t)(v19 % 0x10000);
}

// Address range: 0x8f8ae - 0x8faec
int64_t function_8f8ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x8f8ae
    int64_t v1; // 0x8f8ae
    uint64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0x4bfb8bb5;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0x8f917
    *v3 = *v3 & 0xc8a0d06;
    uint64_t v4 = v2 ^ -0x46583c6d; // 0x8f94d
    int64_t v5 = v4 + 0x16684185; // 0x8f954
    int64_t * v6 = (int64_t *)(v2 + 113); // 0x8f978
    *v6 = v5;
    int64_t * v7 = (int64_t *)(v2 + 10); // 0x8f997
    int64_t v8 = *v7; // 0x8f997
    int64_t v9 = v5; // 0x8f9ba
    if (*(char *)v8 != 0) {
        int64_t v10 = v4 - v2; // 0x8f950
        unsigned char v11 = llvm_ctpop_i8((char)v10); // 0x8f950
        uint16_t v12 = *(int16_t *)(v8 + 1); // 0x8f9db
        bool v13; // 0x8f8ae
        *(int64_t *)(v2 + (int64_t)v12) = 64 * (int64_t)(v10 == 0) | (int64_t)(v4 < v2) | 128 * (int64_t)(v10 < 0) | 16 * (int64_t)(v4 % 16 - v2 % 16 > 15) | 2048 * (int64_t)((v10 ^ v4) < 0) | 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 4 * (int64_t)(v11 % 2 == 0) | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 2;
        v9 = *v6;
    }
    // 0x8f9e5
    *v6 = v9 + 0x3dca36a;
    int32_t v14 = *v3; // 0x8fa91
    uint32_t v15 = (v14 ^ (int32_t)*(int16_t *)(*v7 + 3)) - 0x29ce8b8a; // 0x8fa9a
    *v3 = v15 ^ v14;
    *v7 = *v7 + 5;
    return *(int64_t *)(v2 + 271) + (int64_t)(v15 % 0x10000);
}

// Address range: 0x8faf1 - 0x8faf4
int64_t function_8faf1(void) {
    // 0x8faf1
    int64_t result; // 0x8faf1
    return result;
}

// Address range: 0x90a1b - 0x90acd
int64_t function_90a1b(void) {
    // 0x90a1b
    int64_t v1; // 0x90a1b
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x90a25
    int32_t v3 = *(int32_t *)*v2; // 0x90a2f
    int64_t v4 = 0; // 0x90a5f
    if (v3 != 0) {
        // 0x90a65
        int64_t v5; // bp+136, 0x90a1b
        int64_t v6 = (int64_t)&v5; // 0x90a39
        int64_t v7 = (int64_t)v3 + v6; // 0x90a1b
        int64_t v8 = v6; // 0x90a1b
        int64_t v9 = 18; // 0x90a67
        *(int64_t *)v7 = *(int64_t *)v8;
        v9 = v9 + 0xffffffff & 0xffffffff;
        v7 -= 8;
        v8 -= 8;
        while (v9 != 0) {
            // 0x90a65
            *(int64_t *)v7 = *(int64_t *)v8;
            v9 = v9 + 0xffffffff & 0xffffffff;
            v7 -= 8;
            v8 -= 8;
        }
        // 0x90a59
        v4 = (int64_t)*(int32_t *)*v2;
    }
    // 0x90a6e
    int64_t v10; // 0x90a1b
    int64_t v11 = v4 + (int64_t)&v10; // 0x90a85
    *(int64_t *)(v11 + 128) = *(int64_t *)(v11 + 120);
    *(int32_t *)(v1 + 476) = 0;
    return *(int64_t *)(v11 + 112);
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

// Address range: 0x96918 - 0x96b6e
int64_t function_96918(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x96918
    int64_t v1; // 0x96918
    uint64_t v2 = v1;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x5570754b;
    uint64_t v3 = -0x5570754c - v2; // 0x969a7
    int64_t result = v3 + 0x1a44e4ef; // 0x969ff
    *(int64_t *)(v2 + 113) = result;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0x96a2f
    int64_t v5 = *v4; // 0x96a2f
    if (*(char *)v5 != 0) {
        int64_t v6 = v3 - v2; // 0x969aa
        unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x969aa
        uint16_t v8 = *(int16_t *)(v5 + 3); // 0x96a97
        bool v9; // 0x96918
        *(int64_t *)(v2 + (int64_t)v8) = 64 * (int64_t)(v6 == 0) | (int64_t)(v3 < v2) | 128 * (int64_t)(v6 < 0) | 0x4000 * (int64_t)v9 | 16 * (int64_t)(v3 % 16 - v2 % 16 > 15) | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 2048 * (int64_t)(((v6 ^ v3) & (v3 ^ v2)) < 0) | 4 * (int64_t)(v7 % 2 == 0) | 256 * (int64_t)v9 | 2;
    }
    int32_t * v10 = (int32_t *)(v2 + 368); // 0x96abd
    *v10 = *v10 + *(int32_t *)(v2 + 35);
    *v4 = *v4 + 5;
    return result;
}

// Address range: 0x96b77 - 0x96b79
int64_t function_96b77(void) {
    // 0x96b77
    int64_t result; // 0x96b77
    return result;
}

// Address range: 0x96b7a - 0x96b7b
int64_t function_96b7a(void) {
    // 0x96b7a
    int64_t result; // 0x96b7a
    return result;
}

// Address range: 0x9d24c - 0x9d495
int64_t function_9d24c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x9d24c
    int64_t result; // 0x9d24c
    int32_t * v1 = (int32_t *)(result + 35); // 0x9d284
    int32_t v2 = *v1; // 0x9d284
    int64_t * v3 = (int64_t *)(result + 10); // 0x9d28a
    int64_t v4 = *v3; // 0x9d28a
    int64_t v5 = v4; // 0x9d2b0
    if ((v2 & 2) != 0) {
        // 0x9d2b6
        *v1 = (v2 ^ 0x605d6198) - 0x9fc7504;
        v5 = *v3;
    }
    int64_t v6 = *(int64_t *)(result + (int64_t)*(int16_t *)(v4 + 2)); // 0x9d2f7
    int64_t * v7 = (int64_t *)(result + (int64_t)*(int16_t *)(v5 + 6)); // 0x9d33f
    *(int16_t *)*v7 = (int16_t)v6;
    int64_t v8 = *(int64_t *)(result + (int64_t)*(int16_t *)*v3); // 0x9d375
    *v7 = ((v8 & (int64_t)&g2) == 0 ? 2 : -2) + *v7;
    int32_t * v9 = (int32_t *)(result + 368); // 0x9d453
    *v9 = *v9 - ((int32_t)*(int16_t *)(*v3 + 4) ^ 0x4174ae3e);
    *v3 = *v3 + 8;
    return result;
}

// Address range: 0x9ede9 - 0x9f00a
int64_t function_9ede9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x9ede9
    int64_t v1; // 0x9ede9
    int64_t v2 = v1;
    int64_t result = v2 + 368; // 0x9ee00
    int32_t * v3 = (int32_t *)result; // 0x9ee06
    *v3 = *v3 ^ 0x41c37245;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x750136ce;
    uint64_t v4 = -0x750136cf - v2; // 0x9ee3e
    int64_t * v5 = (int64_t *)(v2 + 113); // 0x9ee6b
    *v5 = v4 - 0x5a935e2;
    int64_t * v6 = (int64_t *)(v2 + 10); // 0x9eed0
    *v5 = v4 + 0x1a44e4ef;
    if (*(char *)(*v6 + 4) != 0) {
        int64_t v7 = v4 - a4; // 0x9ee41
        unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x9ee41
        uint16_t v9 = *(int16_t *)*v6; // 0x9ef46
        bool v10; // 0x9ede9
        *(int64_t *)(v2 + (int64_t)v9) = 64 * (int64_t)(v7 == 0) | (int64_t)(v4 < a4) | 128 * (int64_t)(v7 < 0) | 0x4000 * (int64_t)v10 | 16 * (int64_t)(v4 % 16 - a4 % 16 > 15) | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 2048 * (int64_t)(((v7 ^ v4) & (v4 ^ a4)) < 0) | 4 * (int64_t)(v8 % 2 == 0) | 256 * (int64_t)v10 | 2;
    }
    int32_t v11 = *v3; // 0x9efb3
    *v3 = ((int32_t)*(int16_t *)(*v6 + 2) - v11 ^ 0x5e6d2a06) + v11;
    *v6 = *v6 + 5;
    return result;
}

// Address range: 0x9f00f - 0x9f012
int64_t function_9f00f(void) {
    // 0x9f00f
    int64_t result; // 0x9f00f
    return result;
}

// Address range: 0xa3dc7 - 0xa3fe9
int64_t function_a3dc7(int64_t a1, int64_t a2) {
    // 0xa3dc7
    int64_t v1; // 0xa3dc7
    int64_t v2 = v1 + 368; // 0xa3de4
    int64_t * v3 = (int64_t *)(v1 + 10); // 0xa3e28
    int64_t v4 = *v3; // 0xa3e28
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)v4); // 0xa3ea4
    int16_t v6 = *(int16_t *)*v5; // 0xa3eaf
    *(int16_t *)(v1 + (int64_t)*(int16_t *)(v4 + 6)) = v6;
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(*v3 + 4)); // 0xa3ef9
    *v5 = ((v7 & (int64_t)&g2) == 0 ? 2 : -2) + *v5;
    int32_t * v8 = (int32_t *)v2; // 0xa3fa7
    *v8 = 0x45c6c3bb - (int32_t)*(int16_t *)(*v3 + 2) + *v8;
    *v3 = *v3 + 8;
    return (v1 & 64 | v1 + 129) + v2 ^ (int64_t)L"\n2";
}

// Address range: 0xa68c2 - 0xa6af9
int64_t function_a68c2(int64_t a1, int64_t a2, int64_t a3) {
    // 0xa68c2
    int64_t v1; // 0xa68c2
    int32_t * v2 = (int32_t *)(v1 + 368); // 0xa68d2
    int64_t * v3 = (int64_t *)(v1 + 10); // 0xa68ed
    int32_t * v4 = (int32_t *)(v1 + 35); // 0xa68f7
    *v4 = (*v4 | *v2 ^ 0x1c5d6161) + 0x4d6e0c0f;
    uint16_t v5 = *(int16_t *)(*v3 + 5); // 0xa6914
    int32_t v6 = *(int32_t *)*(int64_t *)(v1 + (int64_t)v5); // 0xa6921
    uint16_t v7 = *(int16_t *)(*v3 + 7); // 0xa692a
    *(int32_t *)*(int64_t *)(v1 + (int64_t)v7) = v6;
    int64_t v8 = *v3; // 0xa6948
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v8 + 1)); // 0xa6959
    int64_t result = v1 + (int64_t)*(int16_t *)(v8 + 7); // 0xa6993
    int64_t v10 = v1 + (int64_t)*(int16_t *)(v8 + 5); // 0xa69ab
    int64_t * v11 = (int64_t *)result;
    int64_t v12 = *v11;
    if (((*(int64_t *)(v1 + 409) | v9) & (int64_t)&g2) == 0) {
        // 0xa69ce
        *v11 = v12 + 4;
        int64_t * v13 = (int64_t *)v10; // 0xa69d5
        *v13 = *v13 + 4;
    } else {
        // 0xa69bb
        *v11 = v12 - 4;
        int64_t * v14 = (int64_t *)v10; // 0xa69c2
        *v14 = *v14 - 4;
    }
    int32_t v15 = *v4; // 0xa69e9
    if ((v15 & 2) != 0) {
        // 0xa6a0d
        *v4 = v15 & 0x41366a15 ^ 0x960933d;
    }
    int32_t v16 = *v2; // 0xa6aa2
    *v2 = v16 + (int32_t)*(int16_t *)(*v3 + 3) | v16;
    *v3 = *v3 + 9;
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
    if (((*(int64_t *)(v1 + 409) | v11) & (int64_t)&g2) == 0) {
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

// Address range: 0xa823e - 0xa8450
int64_t function_a823e(void) {
    // 0xa823e
    int64_t v1; // 0xa823e
    int64_t result = v1 + 10; // 0xa8244
    int64_t * v2 = (int64_t *)result; // 0xa824b
    int32_t * v3 = (int32_t *)(v1 + 35); // 0xa8258
    *v3 = *v3 + 0x61761155;
    int64_t v4 = *v2; // 0xa826d
    uint16_t v5 = *(int16_t *)(*v2 + 3); // 0xa8277
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v4 + 9)); // 0xa828b
    int64_t v7 = *v6; // 0xa828b
    unsigned char v8 = *(char *)v7; // 0xa828e
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v4 + 5)); // 0xa82b6
    int64_t v10 = *(int64_t *)(v1 + 409); // 0xa82ca
    *v6 = (((v10 | v9) & (int64_t)&g2) == 0 ? 1 : -1) + v7;
    int64_t v11 = *v2; // 0xa835e
    int64_t v12 = v11; // 0xa8375
    if (*(char *)(v11 + 2) != 0) {
        unsigned char v13 = (char)*(int64_t *)(v1 + (int64_t)v5); // 0xa828e
        char v14 = v13 - v8; // 0xa828e
        unsigned char v15 = llvm_ctpop_i8(v14); // 0xa828e
        uint16_t v16 = *(int16_t *)(v11 + 7); // 0xa8396
        bool v17; // 0xa823e
        *(int64_t *)(v1 + (int64_t)v16) = 0x4000 * (int64_t)v17 | 1024 * (int64_t)v17 | 512 * (int64_t)v17 | 256 * (int64_t)v17 | (int64_t)(v8 > v13) | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v13 % 16 - v8 % 16 > 15) | 4 * (int64_t)(v15 % 2 == 0) | 2048 * (int64_t)(((v14 ^ v13) & (v8 ^ v13)) < 0) | 2;
        v12 = *v2;
    }
    int32_t * v18 = (int32_t *)(v1 + 368); // 0xa83fc
    int32_t v19 = *v18; // 0xa83fc
    *v18 = (v19 ^ (int32_t)*(int16_t *)v12) + 0x6352399c | v19;
    *v2 = *v2 + 11;
    return result;
}

// Address range: 0xaaf3e - 0xab141
int64_t function_aaf3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xaaf3e
    int64_t v1; // 0xaaf3e
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xaaf68
    int64_t v3 = *v2; // 0xaaf68
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 7)); // 0xaaf90
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0xaaf93
    *(int16_t *)v4 = *(int16_t *)v5;
    int64_t v6 = *v2; // 0xaafae
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 5)); // 0xaafbf
    int64_t v8 = v1 + (int64_t)*(int16_t *)v6; // 0xab005
    int64_t * v9 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 7));
    int64_t v10 = *v9;
    if (((*(int64_t *)(v1 + 409) | v7) & (int64_t)&g2) == 0) {
        // 0xab036
        *v9 = v10 + 2;
        int64_t * v11 = (int64_t *)v8; // 0xab03d
        *v11 = *v11 + 2;
    } else {
        // 0xab023
        *v9 = v10 - 2;
        int64_t * v12 = (int64_t *)v8; // 0xab02a
        *v12 = *v12 - 2;
    }
    int32_t * v13 = (int32_t *)(v1 + 35); // 0xab04e
    int32_t v14 = *v13; // 0xab04e
    if ((v14 & 2) != 0) {
        // 0xab061
        *v13 = v14 + 0x51c35574;
    }
    // 0xab083
    *v2 = *v2 + 9;
    return v1 + 368;
}

// Address range: 0xaf26d - 0xaf4cf
int64_t function_af26d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xaf26d
    int64_t v1; // 0xaf26d
    int32_t * v2 = (int32_t *)(v1 + 368); // 0xaf277
    int32_t * v3 = (int32_t *)(v1 + 35); // 0xaf289
    int32_t v4 = *v3 & (*v2 ^ 0x4b7234ee); // 0xaf289
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v1 + 10); // 0xaf29f
    int64_t v6 = *v5; // 0xaf29f
    int64_t v7 = v1 + (int64_t)*(int16_t *)(v6 + 4);
    int64_t v8 = v7; // 0xaf2cb
    int64_t v9 = v6; // 0xaf2cb
    if ((v4 & 2) != 0) {
        // 0xaf2d1
        *v3 = v4 & 0x494c6a1a ^ 0x2b390569;
        v9 = *v5;
        v8 = v1 + (int64_t)*(int16_t *)(v9 + 4);
    }
    int64_t v10 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v9 + 9)); // 0xaf308
    uint32_t v11 = *(int32_t *)*(int64_t *)v7; // 0xaf30e
    int64_t v12 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v9 + 6)); // 0xaf335
    int64_t v13 = *(int64_t *)(v1 + 409); // 0xaf34a
    int64_t * v14 = (int64_t *)v8;
    *v14 = (((v13 | v12) & (int64_t)&g2) == 0 ? 4 : -4) + *v14;
    int64_t v15 = *v5; // 0xaf3c6
    int64_t v16 = v15; // 0xaf3e0
    if (*(char *)(v15 + 8) != 0) {
        uint32_t v17 = (int32_t)v10; // 0xaf30e
        int32_t v18 = v17 - v11; // 0xaf30e
        unsigned char v19 = llvm_ctpop_i8((char)v18); // 0xaf30e
        uint16_t v20 = *(int16_t *)(v15 + 2); // 0xaf401
        bool v21; // 0xaf26d
        *(int64_t *)(v1 + (int64_t)v20) = 0x4000 * (int64_t)v21 | 1024 * (int64_t)v21 | 512 * (int64_t)v21 | 256 * (int64_t)v21 | (int64_t)(v11 > v17) | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v18 < 0) | 16 * (int64_t)(v17 % 16 - v11 % 16 > 15) | 2048 * (int64_t)(((v18 ^ v17) & (v11 ^ v17)) < 0) | 4 * (int64_t)(v19 % 2 == 0) | 2;
        v16 = *v5;
    }
    // 0xaf40c
    *v2 = *v2 - ((int32_t)*(int16_t *)v16 ^ 0x6d9939f2);
    *v5 = *v5 + 11;
    return a4 & 4;
}

// Address range: 0xaf4d1 - 0xaf4d4
int64_t function_af4d1(void) {
    // 0xaf4d1
    int64_t result; // 0xaf4d1
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

// Address range: 0xb4980 - 0xb4a2b
int64_t function_b4980(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xb4980
    int64_t v1; // 0xb4980
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xb4991
    int64_t v3 = *v2; // 0xb4991
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0xb49a2
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0xb49c5
    *(int64_t *)v5 = v4;
    uint32_t v6 = *(int32_t *)*v2; // 0xb49ed
    *(int64_t *)(v5 + 8) = *(int64_t *)(v1 + 187) + (int64_t)v6;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xb4a2b - 0xb4c00
int64_t function_b4a2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xb4a2b
    int64_t v1; // 0xb4a2b
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xb4a8e
    int64_t v3 = *v2; // 0xb4a8e
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0xb4ad9
    char v5 = *(char *)*v4; // 0xb4ae2
    *(char *)(v1 + (int64_t)*(int16_t *)(v3 + 6)) = v5;
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(*v2 + 2)); // 0xb4b21
    *v4 = ((v6 & (int64_t)&g2) == 0 ? 1 : -1) + *v4;
    *v2 = *v2 + 8;
    return v1 + 368;
}

// Address range: 0xb4c05 - 0xb4c08
int64_t function_b4c05(void) {
    // 0xb4c05
    int64_t result; // 0xb4c05
    return result;
}

// Address range: 0xb625d - 0xb64d7
int64_t function_b625d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb625d
    int64_t v1; // 0xb625d
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0x3e9dc36e;
    int64_t v3 = v2 ^ 0x333e74b7; // 0xb62d8
    char v4 = *(char *)(v2 + 404); // 0xb62f5
    int64_t v5 = v3; // 0xb62fa
    int64_t v6; // 0xb625d
    bool v7; // 0xb625d
    if (v4 == 98) {
        unsigned char v8 = (char)v3; // 0xb6300
        char v9 = -v8; // 0xb6300
        int64_t v10 = 64 * (int64_t)(v8 == 0) | (int64_t)(v8 != 0) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(-((v8 % 16)) > 15) | 4 * (int64_t)(llvm_ctpop_i8(v9) % 2 == 0) | 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 2; // bp-8, 0xb6303
        v6 = (int64_t)&v10;
        v5 = v3 & -256 | (int64_t)v9;
    }
    int64_t v11 = v6; // 0xb630e
    int64_t v12 = v5; // 0xb630e
    if (v4 == 50) {
        uint16_t v13 = (int16_t)v5; // 0xb6314
        int16_t v14 = -v13; // 0xb6314
        int64_t v15 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v13 != 0) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(-((v13 % 16)) > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v14) % 2 == 0) | 2; // bp-16, 0xb6318
        v11 = (int64_t)&v15;
        v12 = v5 & -0x10000 | (int64_t)v14;
    }
    int64_t v16 = v11; // 0xb631c
    int64_t v17 = v12; // 0xb631c
    if (v4 == 80) {
        uint32_t v18 = (int32_t)v12; // 0xb6322
        int32_t v19 = -v18; // 0xb6322
        unsigned char v20 = llvm_ctpop_i8((char)v19); // 0xb6322
        v16 = v11 - 8;
        *(int64_t *)v16 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v18 != 0) | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(-((v18 % 16)) > 15) | 4 * (int64_t)(v20 % 2 == 0) | 2;
        v17 = v19;
    }
    int64_t v21 = v17;
    int64_t v22 = v16; // 0xb632c
    int64_t v23 = v21; // 0xb632c
    if (v4 == 58) {
        // 0xb6332
        v23 = -v21;
        unsigned char v24 = llvm_ctpop_i8((char)v23); // 0xb6332
        v22 = v16 - 8;
        *(int64_t *)v22 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v21 != 0) | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v23 < 0) | 16 * (int64_t)(-((v21 % 16)) > 15) | 4 * (int64_t)(v24 % 2 == 0) | 2;
    }
    int64_t * v25 = (int64_t *)(v2 + 113); // 0xb6356
    *v25 = v23 + 0x2ec80655;
    int64_t * v26 = (int64_t *)(v2 + 10); // 0xb63a8
    int64_t v27 = *v26; // 0xb63a8
    if (*(char *)v27 != 0) {
        uint16_t v28 = *(int16_t *)(v27 + 1); // 0xb63f6
        *(int64_t *)(v2 + (int64_t)v28) = *(int64_t *)v22;
    }
    int64_t result = v23 + 0x1a44e4ef; // 0xb63b2
    *v25 = result;
    int32_t * v29 = (int32_t *)(v2 + 368); // 0xb649b
    *v29 = 0x1240ca15 - (int32_t)*(int16_t *)(*v26 + 3) + *v29;
    *v26 = *v26 + 5;
    return result;
}

// Address range: 0xb64dc - 0xb64de
int64_t function_b64dc(void) {
    // 0xb64dc
    int64_t result; // 0xb64dc
    return result;
}

// Address range: 0xb64df - 0xb64e0
int64_t function_b64df(void) {
    // 0xb64df
    int64_t result; // 0xb64df
    return result;
}

// Address range: 0xb769c - 0xb7717
int64_t function_b769c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xb769c
    int64_t v1; // 0xb769c
    int64_t v2 = *(int64_t *)(v1 + 10); // 0xb76ad
    int64_t v3 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v2 + 2)); // 0xb76be
    *(int64_t *)(v1 + (int64_t)*(int16_t *)v2) = *(int64_t *)v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xb7717 - 0xb78b0
int64_t function_b7717(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xb7717
    int64_t v1; // 0xb7717
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xb7731
    int64_t v3 = *v2; // 0xb7731
    int64_t v4 = v1 + 368; // 0xb774e
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0xb7767
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 2)); // 0xb776f
    *(int32_t *)*v6 = (int32_t)v5;
    int64_t v7 = *v2 + 6; // 0xb7782
    int64_t v8 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v7); // 0xb7790
    int64_t v9 = v8 & (int64_t)&g2; // 0xb7794
    *v6 = (v9 == 0 ? 4 : -4) + *v6;
    int32_t * v10 = (int32_t *)(v1 + 35); // 0xb77d6
    *v10 = *v10 + *(int32_t *)v4;
    int64_t v11 = *v2; // 0xb780b
    *v2 = v11 + 8;
    return (v9 & v4 | 152) ^ 124 ^ (v9 ^ v7 ^ v11 | (int64_t)&g2) | 1;
}

// Address range: 0xb78b2 - 0xb78b4
int64_t function_b78b2(void) {
    // 0xb78b2
    int64_t result; // 0xb78b2
    return result;
}

// Address range: 0xb78b5 - 0xb78b6
int64_t function_b78b5(void) {
    // 0xb78b5
    int64_t result; // 0xb78b5
    return result;
}

// Address range: 0xb84a7 - 0xb8556
int64_t function_b84a7(void) {
    // 0xb84a7
    int64_t v1; // 0xb84a7
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xb84b1
    int32_t v3 = *(int32_t *)*v2; // 0xb84bb
    int64_t v4 = 0; // 0xb84ea
    if (v3 != 0) {
        // 0xb84f0
        int64_t v5; // bp+136, 0xb84a7
        int64_t v6 = (int64_t)&v5; // 0xb84c4
        int64_t v7 = (int64_t)v3 + v6; // 0xb84a7
        int64_t v8 = v6; // 0xb84a7
        int64_t v9 = 18; // 0xb84f2
        *(int64_t *)v7 = *(int64_t *)v8;
        v9 = v9 + 0xffffffff & 0xffffffff;
        v7 -= 8;
        v8 -= 8;
        while (v9 != 0) {
            // 0xb84f0
            *(int64_t *)v7 = *(int64_t *)v8;
            v9 = v9 + 0xffffffff & 0xffffffff;
            v7 -= 8;
            v8 -= 8;
        }
        // 0xb84e4
        v4 = (int64_t)*(int32_t *)*v2;
    }
    // 0xb84f9
    int64_t v10; // 0xb84a7
    int64_t v11 = v4 + (int64_t)&v10; // 0xb850f
    *(int64_t *)(v11 + 128) = *(int64_t *)(v11 + 120);
    *(int32_t *)(v1 + 476) = 0;
    return *(int64_t *)(v11 + 112);
}

// Address range: 0xb8556 - 0xb86f8
int64_t function_b8556(int64_t a1, int64_t a2, int64_t a3) {
    // 0xb8556
    int64_t result; // 0xb8556
    int32_t * v1 = (int32_t *)(result + 35); // 0xb8584
    int32_t v2 = *v1; // 0xb8584
    if ((v2 & 2) != 0) {
        // 0xb859b
        *v1 = (v2 ^ 0x595c3465) + 0x102a61fe;
    }
    int64_t * v3 = (int64_t *)(result + 10); // 0xb85d8
    uint16_t v4 = *(int16_t *)*v3; // 0xb85e5
    int64_t v5; // 0xb8556
    *(int64_t *)(result + (int64_t)v4) = (int64_t)&v5;
    int32_t v6 = *v1; // 0xb85ff
    if ((v6 & 2) != 0) {
        // 0xb861d
        *v1 = v6 ^ 0x64a83ff5;
    }
    // 0xb863f
    *v3 = *v3 + 4;
    return result;
}

// Address range: 0xbc466 - 0xbc676
int64_t function_bc466(int64_t a1, int64_t a2) {
    // 0xbc466
    int64_t v1; // 0xbc466
    int64_t result = v1 + 10; // 0xbc479
    int64_t * v2 = (int64_t *)result; // 0xbc487
    int64_t v3 = *v2; // 0xbc487
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 2)); // 0xbc4a6
    int64_t v5 = *v4; // 0xbc4a6
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 9)); // 0xbc4ac
    uint16_t v7 = *(int16_t *)v5; // 0xbc4b2
    int64_t v8 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0xbc4d9
    int64_t v9 = *(int64_t *)(v1 + 409); // 0xbc4ed
    *v4 = (((v9 | v8) & (int64_t)&g2) == 0 ? 2 : -2) + v5;
    int64_t v10 = *v2; // 0xbc573
    int64_t v11 = v10; // 0xbc588
    if (*(char *)(v10 + 8) != 0) {
        uint16_t v12 = (int16_t)v6; // 0xbc4b2
        int16_t v13 = v12 - v7; // 0xbc4b2
        unsigned char v14 = llvm_ctpop_i8((char)v13); // 0xbc4b2
        uint16_t v15 = *(int16_t *)v10; // 0xbc5a9
        bool v16; // 0xbc466
        *(int64_t *)(v1 + (int64_t)v15) = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v7 > v12) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v12 % 16 - v7 % 16 > 15) | 2048 * (int64_t)(((v13 ^ v12) & (v7 ^ v12)) < 0) | 4 * (int64_t)(v14 % 2 == 0) | 2;
        v11 = *v2;
    }
    int32_t * v17 = (int32_t *)(v1 + 368); // 0xbc60b
    int32_t v18 = *v17; // 0xbc60b
    *v17 = 0x6640824a - v18 + (int32_t)*(int16_t *)(v11 + 6) & v18;
    *v2 = *v2 + 11;
    return result;
}

// Address range: 0xbc678 - 0xbc67d
int64_t function_bc678(void) {
    // 0xbc678
    return function_cd47c5();
}

// Address range: 0xbe648 - 0xbe8cd
int64_t function_be648(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xbe648
    int64_t v1; // 0xbe648
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xbe694
    int64_t v3 = *v2; // 0xbe694
    int32_t * v4 = (int32_t *)(v1 + 368); // 0xbe726
    *v4 = *(int32_t *)(v1 + 35) ^ 0x6e6f5b3e ^ *v4;
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0xbe74a
    int32_t v6 = *(int32_t *)*v5; // 0xbe757
    *(int32_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)) = v6;
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(*v2 + 2)); // 0xbe7ab
    *v5 = ((v7 & (int64_t)&g2) == 0 ? 4 : -4) + *v5;
    int64_t v8 = *(int64_t *)(v1 + 271); // 0xbe822
    int64_t v9 = *v2; // 0xbe832
    *v2 = v9 + 8;
    return v8 + (int64_t)((0xd24b - *v4 + (int32_t)*(int16_t *)v9) % 0x10000);
}

// Address range: 0xbe8d2 - 0xbe8d7
int64_t function_be8d2(void) {
    // 0xbe8d2
    return function_12d2b020();
}

// Address range: 0xc21c3 - 0xc2241
int64_t function_c21c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xc21c3
    int64_t v1; // 0xc21c3
    int64_t v2 = *(int64_t *)(v1 + 10); // 0xc21d4
    uint32_t v3 = *(int32_t *)(v2 + 2); // 0xc21df
    int64_t v4 = *(int64_t *)(v1 + 187); // 0xc21ec
    uint16_t v5 = *(int16_t *)v2; // 0xc220b
    *(int64_t *)(v1 + (int64_t)v5) = v4 + (int64_t)v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0xc2241 - 0xc240f
int64_t function_c2241(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xc2241
    int64_t v1; // 0xc2241
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xc224b
    int32_t * v3 = (int32_t *)(v1 + 368); // 0xc225f
    *v3 = *v3 - (*v2 ^ 0x439983c9) ^ 0x423c07dd;
    int32_t v4 = *v2; // 0xc22c0
    if ((v4 & 2) != 0) {
        // 0xc22dd
        *v2 = v4 & 0xab651c5 ^ 0x4ab6dcda;
    }
    // 0xc22fd
    *v2 = 0;
    *(int32_t *)(v1 + 243) = 0;
    *v3 = 0;
    int64_t * v5 = (int64_t *)(v1 + 10); // 0xc2406
    *v5 = *v5 + 2;
    return 2 * v1;
}

// Address range: 0xc2414 - 0xc2416
int64_t function_c2414(void) {
    // 0xc2414
    int64_t result; // 0xc2414
    return result;
}

// Address range: 0xc2417 - 0xc2418
int64_t function_c2417(void) {
    // 0xc2417
    int64_t result; // 0xc2417
    return result;
}
