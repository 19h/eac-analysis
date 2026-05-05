/*
 * Targeted RetDec C for unobserved VM handler native ranges, batch 2.
 *
 * These dispatch entries are statically inventoried but were not seen as
 * dispatch targets in the concrete traces. Batches are sorted by native
 * span size so each decompile stays small and reproducible.
 *
 * Total unobserved handler ranges: 155
 * Batch size: 24
 * Ranges:
 *   0xa81c4-0xa845e entry=233 span_bytes=664 insns=154 tail=0xa844e
 *   0x88131-0x883ce entry=77 span_bytes=668 insns=147 tail=0x883be
 *   0x84302-0x845a3 entry=59 span_bytes=673 insns=143 tail=0x84593
 *   0x7971e-0x799d4 entry=6 span_bytes=691 insns=138 tail=0x799c4
 *   0x980ab-0x98361 entry=155 span_bytes=694 insns=155 tail=0x98351
 *   0xb6902-0xb6bc7 entry=298 span_bytes=706 insns=152 tail=0xb6bb7
 *   0x8f834-0x8fafa entry=110 span_bytes=709 insns=164 tail=0x8faea
 *   0xb1548-0xb181b entry=274 span_bytes=722 insns=151 tail=0xb180b
 *   0x94973-0x94c48 entry=137 span_bytes=724 insns=148 tail=0x94c38
 *   0xa7ef8-0xa81d1 entry=232 span_bytes=726 insns=158 tail=0xa81c1
 *   0x99b3c-0x99e2e entry=162 span_bytes=751 insns=163 tail=0x99e1e
 *   0xb42e2-0xb45df entry=286 span_bytes=762 insns=171 tail=0xb45cf
 *   0xa6f03-0xa720b entry=227 span_bytes=776 insns=177 tail=0xa71fb
 *   0x8983b-0x89b45 entry=84 span_bytes=777 insns=179 tail=0x89b35
 *   0x8428c-0x845a3 entry=58 span_bytes=791 insns=179 tail=0x84593
 *   0x8b028-0x8b342 entry=89 span_bytes=793 insns=174 tail=0x8b332
 *   0x7b3be-0x7b6d9 entry=14 span_bytes=794 insns=162 tail=0x7b6c9
 *   0xbf889-0xbfba6 entry=341 span_bytes=794 insns=163 tail=0xbfb96
 *   0x9106a-0x91387 entry=120 span_bytes=796 insns=174 tail=0x91377
 *   0xa006b-0xa038b entry=197 span_bytes=800 insns=173 tail=0xa037b
 *   0xb180e-0xb1b3a entry=275 span_bytes=809 insns=178 tail=0xb1b2a
 *   0x9768c-0x979b8 entry=152 span_bytes=812 insns=178 tail=0x979a8
 *   0x7c30a-0x7c638 entry=19 span_bytes=814 insns=176 tail=0x7c628
 *   0x9f77c-0x9fab2 entry=193 span_bytes=818 insns=171 tail=0x9faa2
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

int64_t function_acacd89();
int64_t function_fffffffff0d0fafe();

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
    if (((*(int64_t *)(v1 + 409) | v7) & (int64_t)&g2) == 0) {
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

// Address range: 0x7b3be - 0x7b6cb
int64_t function_7b3be(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x7b3be
    int64_t v1; // 0x7b3be
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0x36306213;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x7b400
    int64_t v4 = *v3; // 0x7b400
    *v3 = v4 + 0xa0d0cdfe;
    uint64_t v5 = v4 + 0x653cf834; // 0x7b468
    unsigned char v6 = *(char *)(v2 + 225); // 0x7b48d
    int64_t v7 = v6 != 98 ? v2 ^ 0x3b93d5ca : 0x100000000000000 * v5 / 0x100000000000000;
    int64_t * v8 = (int64_t *)(v2 + 113); // 0x7b4e9
    *v8 = (v6 != 50 ? v7 : 0x1000000000000 * v5 / 0x1000000000000) ^ 0x6643996f;
    int64_t result = v2 + 10; // 0x7b510
    int64_t * v9 = (int64_t *)result; // 0x7b530
    int64_t v10 = *v9; // 0x7b530
    if (*(char *)(v10 + 4) != 0) {
        int64_t v11 = a5 - 8; // 0x7b3ec
        uint64_t v12 = (int64_t)v6; // 0x7b48d
        int64_t v13 = (v11 & -256 | v12) + v5; // 0x7b4ec
        unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x7b4ec
        uint16_t v15 = *(int16_t *)(v10 + 2); // 0x7b59d
        bool v16; // 0x7b3be
        *(int64_t *)(v2 + (int64_t)v15) = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v13 < v5) | 16 * (int64_t)(v12 % 16 + v5 % 16 > 15) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 2048 * (int64_t)(((v13 ^ v5) & (v13 ^ v11)) < 0) | 4 * (int64_t)(v14 % 2 == 0) | 2;
    }
    int32_t * v17 = (int32_t *)(v2 + 368); // 0x7b5cf
    *v17 = *v17 & *(int32_t *)(v2 + 35);
    *v8 = (*v8 ^ 0x6643996f) + 0x1a44e4ef;
    *v17 = (int32_t)*(int16_t *)*v9 - 0x7584d103 ^ *v17;
    *v9 = *v9 + 5;
    return result;
}

// Address range: 0x7c30a - 0x7c62b
int64_t function_7c30a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x7c30a
    int64_t v1; // 0x7c30a
    int64_t result = v1 + 10; // 0x7c321
    int64_t * v2 = (int64_t *)result; // 0x7c340
    int64_t v3 = *v2; // 0x7c340
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 2)); // 0x7c380
    uint16_t v5 = *(int16_t *)*v4; // 0x7c391
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0x7c3a3
    int64_t v7 = *v6; // 0x7c3a3
    uint16_t v8 = *(int16_t *)v7; // 0x7c3a6
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 9)); // 0x7c3e7
    int64_t v10; // 0x7c30a
    if (((*(int64_t *)(v1 + 409) | v9) & (int64_t)&g2) == 0) {
        // 0x7c4b8
        *v6 = v7 + 2;
        v10 = *v4 + 2;
    } else {
        // 0x7c498
        *v6 = v7 - 2;
        v10 = *v4 - 2;
    }
    // 0x7c4d6
    *v4 = v10;
    int64_t v11 = *v2; // 0x7c4f8
    int64_t v12 = v11; // 0x7c517
    if (*(char *)(v11 + 8) != 0) {
        int16_t v13 = v8 - v5; // 0x7c3a6
        unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x7c3a6
        uint16_t v15 = *(int16_t *)v11; // 0x7c54b
        bool v16; // 0x7c30a
        *(int64_t *)(v1 + (int64_t)v15) = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v8 < v5) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v8 % 16 - v5 % 16 > 15) | 2048 * (int64_t)(((v13 ^ v8) & (v8 ^ v5)) < 0) | 4 * (int64_t)(v14 % 2 == 0) | 2;
        v12 = *v2;
    }
    int32_t * v17 = (int32_t *)(v1 + 368); // 0x7c5d6
    int32_t v18 = *v17; // 0x7c5d6
    *v17 = 0x7d53d38d - v18 + (int32_t)*(int16_t *)(v12 + 6) & v18;
    *v2 = *v2 + 11;
    return result;
}

// Address range: 0x7c630 - 0x7c633
int64_t function_7c630(void) {
    // 0x7c630
    int64_t result; // 0x7c630
    return result;
}

// Address range: 0x8428c - 0x84302
int64_t function_8428c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x8428c
    int64_t v1; // 0x8428c
    int64_t v2 = *(int64_t *)(v1 + 10); // 0x8429d
    int64_t v3 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v2 + 2)); // 0x842ae
    *(int64_t *)(v1 + (int64_t)*(int16_t *)v2) = v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x84302 - 0x84596
int64_t function_84302(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x84302
    int64_t v1; // 0x84302
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x84323
    int64_t v3 = *v2; // 0x84323
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 8)); // 0x84345
    int64_t v5 = *v4; // 0x84345
    uint64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 2)); // 0x8434b
    uint64_t v7 = *(int64_t *)v5; // 0x84358
    int64_t v8 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0x84380
    int64_t v9 = *(int64_t *)(v1 + 409); // 0x84393
    *v4 = (((v9 | v8) & (int64_t)&g2) == 0 ? 8 : -8) + v5;
    int64_t result = *v2; // 0x84455
    char v10 = *(char *)(result + 10); // 0x84470
    int64_t v11 = result; // 0x8447b
    result = v1 + 113;
    if (v10 != 0) {
        int64_t v12 = v6 - v7; // 0x84358
        unsigned char v13 = llvm_ctpop_i8((char)v12); // 0x84358
        uint16_t v14 = *(int16_t *)result; // 0x844b4
        bool v15; // 0x84302
        *(int64_t *)(v1 + (int64_t)v14) = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | (int64_t)(v6 < v7) | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v6 % 16 - v7 % 16 > 15) | 2048 * (int64_t)(((v12 ^ v6) & (v7 ^ v6)) < 0) | 4 * (int64_t)(v13 % 2 == 0) | 2;
        v11 = *v2;
    }
    int32_t * v16 = (int32_t *)(v1 + 368); // 0x84558
    *v16 = (int32_t)*(int16_t *)(v11 + 6) - 0x26d85c20 & *v16;
    *v2 = *v2 + 11;
    return result;
}

// Address range: 0x88131 - 0x883c0
int64_t function_88131(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x88131
    int64_t v1; // 0x88131
    int64_t v2 = v1;
    int64_t v3 = v2 ^ 0x60a78c44; // 0x8817a
    *(int64_t *)v2 = v3;
    int32_t * v4 = (int32_t *)(v2 + 35); // 0x881c8
    *v4 = *v4 + 0x27793f0e;
    uint64_t v5 = v2 ^ -0x6d043b9e; // 0x881f5
    int64_t v6 = v2 + 113; // 0x88211
    int64_t * v7 = (int64_t *)v6; // 0x8821f
    *v7 = v5;
    int64_t * v8 = (int64_t *)(v2 + 10); // 0x88265
    int64_t v9 = *v8; // 0x88265
    *v7 = v5 + 0x1a44e4ef;
    int64_t v10 = (int64_t)&g2; // 0x882b4
    if (*(char *)(v9 + 2) != 0) {
        uint64_t v11 = (v3 + v2 ^ 0x60a78c44) - 2 * ((int64_t)&g3 - v2 + (v1 & 4 | 1)); // 0x881b8
        int64_t v12 = v5 - v11; // 0x881f8
        unsigned char v13 = llvm_ctpop_i8((char)v12); // 0x881f8
        uint16_t v14 = *(int16_t *)(*v8 + 3); // 0x882f3
        bool v15; // 0x88131
        *(int64_t *)(v2 + (int64_t)v14) = 0x4000 * (int64_t)v15 | (int64_t)(v5 < v11) | 1024 * (int64_t)v15 | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 512 * (int64_t)v15 | 16 * (int64_t)(v5 % 16 - v11 % 16 > 15) | 256 * (int64_t)v15 | 2048 * (int64_t)(((v12 ^ v5) & (v11 ^ v5)) < 0) | 4 * (int64_t)(v13 % 2 == 0) | 2;
        v10 = (7 - v2 & v6) - (int64_t)&g2 - v9 & -0x80000000 | 32;
    }
    int32_t * v16 = (int32_t *)(v2 + 368); // 0x8837c
    *v16 = *v16 + (int32_t)*(int16_t *)*v8;
    *v8 = *v8 + 5;
    return v10 - (int64_t)&g1 | (int64_t)&g2;
}

// Address range: 0x8983b - 0x89b37
int64_t function_8983b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x8983b
    int64_t v1; // 0x8983b
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0xf9c5ae4;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0x898be
    *v3 = *v3 | 0x206f2f12;
    int64_t v4 = v2 ^ 0x23fed3d; // 0x898df
    int64_t * v5 = (int64_t *)(v2 + 10); // 0x89907
    uint64_t v6 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v5 + 3)); // 0x89935
    char v7 = *(char *)(v2 + 404); // 0x8994f
    int64_t v8 = v6; // 0x89955
    int64_t v9 = v4; // 0x89955
    if (v7 == 98) {
        unsigned char v10 = (char)v4; // 0x8995c
        char v11 = v10 + 1; // 0x8995c
        unsigned char v12 = llvm_ctpop_i8(v11); // 0x8995c
        v8 = 64 * (int64_t)(v11 == 0) | 16 * (int64_t)(v10 % 16 == 15) | 128 * (int64_t)(v11 < 0) | 2048 * (int64_t)((v11 & (v10 ^ -128)) < 0) | 4 * (int64_t)(v12 % 2 == 0) | (int64_t)(v6 % 2 != 0) | 256 * (int64_t)((v6 & 256) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | 2;
        v9 = v4 & -256 | (int64_t)v11;
    }
    int64_t v13 = v8;
    int64_t v14 = v13; // 0x89963
    int64_t v15 = v9; // 0x89963
    if (v7 == 50) {
        uint16_t v16 = (int16_t)v9; // 0x89971
        int16_t v17 = v16 + 1; // 0x89971
        unsigned char v18 = llvm_ctpop_i8((char)v17); // 0x89971
        v14 = 256 * (int64_t)((v13 & 256) != 0) | (int64_t)(v13 % 2 != 0) | 512 * (int64_t)((v13 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v13 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v13 & (int64_t)"le") != 0) | 64 * (int64_t)(v17 == 0) | 16 * (int64_t)(v16 % 16 == 15) | 128 * (int64_t)(v17 < 0) | 2048 * (int64_t)((v17 & (v16 ^ -0x8000)) < 0) | 4 * (int64_t)(v18 % 2 == 0) | 2;
        v15 = v9 & -0x10000 | (int64_t)v17;
    }
    int64_t v19 = v14;
    int64_t v20 = v19; // 0x8997c
    int64_t v21 = v15; // 0x8997c
    if (v7 == 80) {
        uint32_t v22 = (int32_t)v15; // 0x89986
        int32_t v23 = v22 + 1; // 0x89986
        unsigned char v24 = llvm_ctpop_i8((char)v23); // 0x89986
        v20 = 256 * (int64_t)((v19 & 256) != 0) | (int64_t)(v19 % 2 != 0) | 512 * (int64_t)((v19 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v19 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v19 & (int64_t)"le") != 0) | 64 * (int64_t)(v23 == 0) | 16 * (int64_t)(v22 % 16 == 15) | 128 * (int64_t)(v23 < 0) | 2048 * (int64_t)((v23 & (v22 ^ -0x80000000)) < 0) | 4 * (int64_t)(v24 % 2 == 0) | 2;
        v21 = v23;
    }
    int64_t v25 = v21;
    int64_t v26 = v20;
    int64_t v27 = v26; // 0x89993
    int64_t v28 = v25; // 0x89993
    if (v7 == 58) {
        // 0x89999
        v28 = v25 + 1;
        unsigned char v29 = llvm_ctpop_i8((char)v28); // 0x899a0
        v27 = 256 * (int64_t)((v26 & 256) != 0) | (int64_t)(v26 % 2 != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | 64 * (int64_t)(v28 == 0) | 16 * (int64_t)(v25 % 16 == 15) | 128 * (int64_t)(v28 < 0) | 2048 * (int64_t)((v28 & (v25 ^ -0x8000000000000000)) < 0) | 4 * (int64_t)(v29 % 2 == 0) | 2;
    }
    int64_t * v30 = (int64_t *)(v2 + 113); // 0x899d0
    *v30 = v28 ^ 0x3831199e;
    *v3 = *v3 + *(int32_t *)(v2 + 35);
    int64_t v31 = *v5; // 0x899f8
    if (*(char *)(v31 + 2) != 0) {
        // 0x89a15
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v31 + 3)) = v27;
    }
    // 0x89a3b
    *v30 = (*v30 ^ 0x3831199e) + 0x1a44e4ef;
    int32_t v32 = *v3; // 0x89ad5
    uint32_t v33 = v32 + (int32_t)*(int16_t *)*v5; // 0x89ad5
    *v3 = v33 + v32;
    *v5 = *v5 + 5;
    return (int64_t)v33 & (int64_t)&g3;
}

// Address range: 0x8b028 - 0x8b334
int64_t function_8b028(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8b028
    int64_t v1; // 0x8b028
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x8b039
    int64_t v3 = *v2; // 0x8b039
    int64_t v4 = v1 + (int64_t)*(int16_t *)(v3 + 1); // 0x8b067
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 5)); // 0x8b098
    int64_t v6 = *v5; // 0x8b098
    uint16_t v7 = *(int16_t *)v6; // 0x8b09e
    int64_t v8 = (v1 - v4 ^ v1) + 132; // 0x8b0d2
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 3)); // 0x8b0dc
    int64_t v10 = v1 + 409; // 0x8b0ec
    int64_t v11 = *(int64_t *)v10 & (int64_t)&g2; // 0x8b0ff
    int64_t v12 = v11 | v9 & (int64_t)&g2; // 0x8b109
    int64_t v13 = v10 ^ 2 ^ ((v8 & 16) - (v8 ^ a6 + 240 & (a1 ^ -65)) - v11 | (int64_t)&g2 | 128) + v12 | -0x80000000; // 0x8b17a
    int64_t v14; // 0x8b028
    if (v12 == 0) {
        // 0x8b1aa
        *v5 = v6 + 2;
        v14 = v13 | v10;
    } else {
        // 0x8b19e
        *v5 = v6 - 2;
        v14 = v13;
    }
    int64_t v15 = *v2; // 0x8b20f
    int64_t v16 = v15; // 0x8b232
    if (*(char *)v15 != 0) {
        uint16_t v17 = (int16_t)*(int64_t *)v4; // 0x8b09e
        int16_t v18 = v17 - v7; // 0x8b09e
        unsigned char v19 = llvm_ctpop_i8((char)v18); // 0x8b09e
        uint16_t v20 = *(int16_t *)(v15 + 7); // 0x8b259
        bool v21; // 0x8b028
        *(int64_t *)(v1 + (int64_t)v20) = 0x4000 * (int64_t)v21 | 1024 * (int64_t)v21 | 512 * (int64_t)v21 | 256 * (int64_t)v21 | (int64_t)(v7 > v17) | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v18 < 0) | 16 * (int64_t)(v17 % 16 - v7 % 16 > 15) | 2048 * (int64_t)(((v18 ^ v17) & (v7 ^ v17)) < 0) | 4 * (int64_t)(v19 % 2 == 0) | 2;
        v16 = *v2;
    }
    int64_t v22 = (char)v11 == 0 ? -v14 : 0x61d14d12;
    int32_t * v23 = (int32_t *)(v1 + 368); // 0x8b2c8
    int32_t v24 = *v23; // 0x8b2c8
    *v23 = (v24 ^ (int32_t)*(int16_t *)(v16 + 9)) + 0x7c8d5d40 & v24;
    *v2 = *v2 + 11;
    return *(int64_t *)(v1 + 129) + v22;
}

// Address range: 0x8b336 - 0x8b338
int64_t function_8b336(void) {
    // 0x8b336
    int64_t result; // 0x8b336
    return result;
}

// Address range: 0x8b339 - 0x8b33a
int64_t function_8b339(void) {
    // 0x8b339
    int64_t result; // 0x8b339
    return result;
}

// Address range: 0x8f834 - 0x8f8ae
int64_t function_8f834(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x8f834
    int64_t v1; // 0x8f834
    int64_t v2 = *(int64_t *)(v1 + 10); // 0x8f845
    uint32_t v3 = *(int32_t *)(v2 + 2); // 0x8f84f
    int64_t v4 = *(int64_t *)(v1 + 187); // 0x8f85b
    uint16_t v5 = *(int16_t *)v2; // 0x8f879
    *(int64_t *)(v1 + (int64_t)v5) = v4 + (int64_t)v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
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

// Address range: 0x9106a - 0x91379
int64_t function_9106a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9106a
    int64_t v1; // 0x9106a
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x910a5
    int64_t v3 = *v2; // 0x910a5
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0x910f2
    int32_t * v5 = (int32_t *)(v1 + 35); // 0x9112d
    *v5 = *v5 & 0x694d2730;
    uint64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0x91137
    uint64_t v7 = *(int64_t *)v4; // 0x9113d
    int64_t v8 = *v2; // 0x9116a
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v8 + 9)); // 0x91184
    int64_t v10 = *(int64_t *)(v1 + 409); // 0x911ad
    int64_t * v11 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v8 + 4));
    *v11 = (((v10 | v9) & (int64_t)&g2) == 0 ? 8 : -8) + *v11;
    int64_t v12 = *v2; // 0x91270
    int64_t v13 = v12; // 0x91295
    if (*(char *)(v12 + 8) != 0) {
        int64_t v14 = v6 - v7; // 0x9113d
        unsigned char v15 = llvm_ctpop_i8((char)v14); // 0x9113d
        uint16_t v16 = *(int16_t *)(v12 + 2); // 0x912c6
        bool v17; // 0x9106a
        *(int64_t *)(v1 + (int64_t)v16) = 0x4000 * (int64_t)v17 | 1024 * (int64_t)v17 | 512 * (int64_t)v17 | 256 * (int64_t)v17 | (int64_t)(v6 < v7) | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v6 % 16 - v7 % 16 > 15) | 2048 * (int64_t)(((v14 ^ v6) & (v7 ^ v6)) < 0) | 4 * (int64_t)(v15 % 2 == 0) | 2;
        v13 = *v2;
    }
    int64_t result = v1 + 368; // 0x91330
    int32_t * v18 = (int32_t *)result; // 0x91339
    *v18 = *v18 ^ (int32_t)*(int16_t *)v13;
    *v2 = *v2 + 11;
    return result;
}

// Address range: 0x9137e - 0x91381
int64_t function_9137e(void) {
    // 0x9137e
    int64_t result; // 0x9137e
    return result;
}

// Address range: 0x94973 - 0x94c3a
int64_t function_94973(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x94973
    int64_t v1; // 0x94973
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x949cc
    int64_t v3 = *v2; // 0x949cc
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0x94a1c
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0x94a2d
    *(int64_t *)v4 = *(int64_t *)v5;
    int64_t v6 = *v2; // 0x94a69
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 6)); // 0x94a92
    int64_t v8 = v1 + (int64_t)*(int16_t *)v6; // 0x94b30
    int64_t * v9 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 4));
    int64_t v10 = *v9;
    if (((*(int64_t *)(v1 + 409) | v7) & (int64_t)&g2) == 0) {
        // 0x94b63
        *v9 = v10 + 8;
        int64_t * v11 = (int64_t *)v8; // 0x94b78
        *v11 = *v11 + 8;
    } else {
        // 0x94b43
        *v9 = v10 - 8;
        int64_t * v12 = (int64_t *)v8; // 0x94b54
        *v12 = *v12 - 8;
    }
    int64_t v13 = *(int64_t *)(v1 + 271); // 0x94b96
    int32_t v14 = (int32_t)*(int16_t *)(*v2 + 2); // 0x94be7
    int32_t * v15 = (int32_t *)(v1 + 368); // 0x94be7
    *v15 = v14 - 0x5ff6cae6;
    *v2 = *v2 + 9;
    return *(int64_t *)(v13 + (int64_t)((0x351a - *v15 + v14) % 0x10000));
}

// Address range: 0x94c3c - 0x94c41
int64_t function_94c3c(void) {
    // 0x94c3c
    return function_acacd89();
}

// Address range: 0x9768c - 0x979ab
int64_t function_9768c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9768c
    int64_t v1; // 0x9768c
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x976a0
    int64_t v3 = *v2; // 0x976a0
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 9)); // 0x976c6
    int64_t v5 = *v4; // 0x976c6
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 1)); // 0x976dd
    unsigned char v7 = *(char *)*v6; // 0x976e0
    unsigned char v8 = *(char *)v5; // 0x976e2
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 7)); // 0x97734
    int64_t result; // 0x9768c
    int64_t v10; // 0x9768c
    if (((*(int64_t *)(v1 + 409) | v9) & (int64_t)&g2) == 0) {
        // 0x97807
        *v4 = v5 + 1;
        v10 = *v6 + 1;
        result = 0;
    } else {
        // 0x977ee
        *v4 = v5 - 1;
        v10 = *v6 - 1;
        result = 1;
    }
    // 0x97825
    *v6 = v10;
    int64_t v11 = *v2; // 0x97836
    int64_t v12 = v11; // 0x9784f
    if (*(char *)v11 != 0) {
        char v13 = v8 - v7; // 0x976e2
        unsigned char v14 = llvm_ctpop_i8(v13); // 0x976e2
        uint16_t v15 = *(int16_t *)(v11 + 3); // 0x9788a
        bool v16; // 0x9768c
        *(int64_t *)(v1 + (int64_t)v15) = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v8 < v7) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v8 % 16 - v7 % 16 > 15) | 4 * (int64_t)(v14 % 2 == 0) | 2048 * (int64_t)(((v13 ^ v8) & (v8 ^ v7)) < 0) | 2;
        v12 = *v2;
    }
    // 0x9789d
    *(int32_t *)(v1 + 368) = (int32_t)*(int16_t *)(v12 + 5);
    *v2 = *v2 + 11;
    return result;
}

// Address range: 0x979b0 - 0x979b5
int64_t function_979b0(void) {
    // 0x979b0
    return function_fffffffff0d0fafe();
}

// Address range: 0x980ab - 0x98354
int64_t function_980ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x980ab
    int64_t result; // 0x980ab
    int64_t * v1 = (int64_t *)(result + 10); // 0x980e1
    int64_t v2 = *v1; // 0x980e1
    int64_t v3 = *(int64_t *)(result + (int64_t)*(int16_t *)v2); // 0x98131
    int64_t v4 = *(int64_t *)(result + (int64_t)*(int16_t *)(v2 + 4)); // 0x98158
    *(char *)v4 = *(char *)v3;
    int64_t v5 = *v1; // 0x98181
    int64_t v6 = *(int64_t *)(result + (int64_t)*(int16_t *)(v5 + 6)); // 0x981a9
    int64_t v7 = result + (int64_t)*(int16_t *)v5; // 0x98236
    int64_t * v8 = (int64_t *)(result + (int64_t)*(int16_t *)(v5 + 4));
    int64_t v9 = *v8;
    if (((*(int64_t *)(result + 409) | v6) & (int64_t)&g2) == 0) {
        // 0x98278
        *v8 = v9 + 1;
        int64_t * v10 = (int64_t *)v7; // 0x98289
        *v10 = *v10 + 1;
    } else {
        // 0x98261
        *v8 = v9 - 1;
        int64_t * v11 = (int64_t *)v7; // 0x98269
        *v11 = *v11 - 1;
    }
    int32_t * v12 = (int32_t *)(result + 368); // 0x9831d
    *v12 = (int32_t)*(int16_t *)(*v1 + 2) - 0x24797ebc | *v12;
    *v1 = *v1 + 9;
    return result;
}

// Address range: 0x99b3c - 0x99e21
int64_t function_99b3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x99b3c
    int64_t v1; // 0x99b3c
    int64_t result = v1 + 10; // 0x99b73
    int64_t * v2 = (int64_t *)result; // 0x99b9a
    int64_t v3 = *v2; // 0x99b9a
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 3)); // 0x99bfd
    int64_t v5 = *v4; // 0x99bfd
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 7)); // 0x99c00
    unsigned char v7 = *(char *)*v6; // 0x99c0a
    unsigned char v8 = *(char *)v5; // 0x99c0d
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 5)); // 0x99c4a
    int64_t v10; // 0x99b3c
    if (((*(int64_t *)(v1 + 409) | v9) & (int64_t)&g2) == 0) {
        // 0x99cfc
        *v4 = v5 + 1;
        v10 = *v6 + 1;
    } else {
        // 0x99cdc
        *v4 = v5 - 1;
        v10 = *v6 - 1;
    }
    // 0x99d1a
    *v6 = v10;
    int32_t * v11 = (int32_t *)(v1 + 368); // 0x99d27
    int32_t v12 = *v11 + 0x490e5ce5; // 0x99d27
    *v11 = v12;
    int64_t v13 = *v2; // 0x99d37
    int32_t v14 = v12; // 0x99d4c
    int64_t v15 = v13; // 0x99d4c
    if (*(char *)(v13 + 2) != 0) {
        char v16 = v8 - v7; // 0x99c0d
        unsigned char v17 = llvm_ctpop_i8(v16); // 0x99c0d
        uint16_t v18 = *(int16_t *)v13; // 0x99d6e
        bool v19; // 0x99b3c
        *(int64_t *)(v1 + (int64_t)v18) = 0x4000 * (int64_t)v19 | 1024 * (int64_t)v19 | 512 * (int64_t)v19 | 256 * (int64_t)v19 | (int64_t)(v8 < v7) | 64 * (int64_t)(v16 == 0) | 128 * (int64_t)(v16 < 0) | 16 * (int64_t)(v8 % 16 - v7 % 16 > 15) | 4 * (int64_t)(v17 % 2 == 0) | 2048 * (int64_t)(((v16 ^ v8) & (v8 ^ v7)) < 0) | 2;
        v14 = *v11;
        v15 = *v2;
    }
    // 0x99d79
    *v11 = v14 - 0x2201cbef - (int32_t)*(int16_t *)(v15 + 9);
    *v2 = *v2 + 11;
    return result;
}

// Address range: 0x9f77c - 0x9faa4
int64_t function_9f77c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x9f77c
    int64_t v1; // 0x9f77c
    int64_t result = v1 + 368; // 0x9f79e
    int32_t * v2 = (int32_t *)result; // 0x9f7a8
    int32_t v3 = *v2 ^ *(int32_t *)(v1 + 35); // 0x9f7a8
    *v2 = v3;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x9f7cd
    int64_t v5 = *v4; // 0x9f7cd
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v5 + 3)); // 0x9f866
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v5 + 7)); // 0x9f87a
    *v2 = v3 ^ 0xd9682ba;
    *(int16_t *)v6 = *(int16_t *)v7;
    int64_t v8 = *v4; // 0x9f8c2
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v8); // 0x9f8e3
    int64_t v10 = v1 + (int64_t)*(int16_t *)(v8 + 7); // 0x9f9a5
    int64_t * v11 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v8 + 3));
    int64_t v12 = *v11;
    if (((*(int64_t *)(v1 + 409) | v9) & (int64_t)&g2) == 0) {
        // 0x9f9d8
        *v11 = v12 + 2;
        int64_t * v13 = (int64_t *)v10; // 0x9f9ec
        *v13 = *v13 + 2;
    } else {
        // 0x9f9b5
        *v11 = v12 - 2;
        int64_t * v14 = (int64_t *)v10; // 0x9f9c6
        *v14 = *v14 - 2;
    }
    int32_t v15 = *v2; // 0x9fa3e
    *v2 = -0x1aead89a - v15 + (int32_t)*(int16_t *)(*v4 + 5) ^ v15;
    *v4 = *v4 + 9;
    return result;
}

// Address range: 0xa006b - 0xa037e
int64_t function_a006b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xa006b
    int64_t v1; // 0xa006b
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xa009d
    int64_t v3 = *v2; // 0xa009d
    uint64_t v4 = v1 + (int64_t)*(int16_t *)v3; // 0xa00c6
    int64_t v5 = 1 - a5 - a5; // 0xa00c9
    int64_t v6 = v3 + 4; // 0xa00dc
    unsigned char v7 = *(char *)v6; // 0xa00e3
    int64_t v8 = 1; // 0xa00ea
    int64_t v9 = v3; // 0xa00ea
    int64_t v10 = v5; // 0xa00ea
    int64_t v11 = 0; // 0xa00ea
    int64_t v12; // 0xa006b
    if (v7 == 38) {
        int32_t * v13 = (int32_t *)v4; // 0xa0104
        *v13 = *v13 & -2;
        v8 = v4 % 2;
        v9 = -2;
        v12 = v1 ^ 144;
        v10 = v5 | 8;
        v11 = (int64_t)&g2;
    }
    int64_t v14 = v7; // 0xa00e3
    int64_t v15 = a5 & -256 | v14; // 0xa00e3
    int64_t v16 = v6; // 0xa011a
    int64_t v17 = v8; // 0xa011a
    int64_t v18 = v9; // 0xa011a
    int64_t v19 = v12; // 0xa011a
    int64_t v20 = v10; // 0xa011a
    int64_t v21 = v11; // 0xa011a
    if (v7 == -63) {
        int32_t * v22 = (int32_t *)v4; // 0xa0133
        *v22 = *v22 & (int32_t)((int64_t)&g2 ^ -1);
        v16 = v1 + 409;
        int32_t * v23 = (int32_t *)v16; // 0xa015f
        *v23 = *v23 & (int32_t)((int64_t)&g2 ^ -1);
        v17 = v15 - ((int64_t)&g2 ^ -1) + v8;
        v18 = (int64_t)&g2 ^ -1;
        v19 = v14 & 240 & v12;
        v20 = (v10 ^ v9) - v4;
        v21 = v11 + 145;
    }
    int64_t v24 = v16; // 0xa0165
    int64_t v25 = v18; // 0xa0165
    int64_t v26 = v19; // 0xa0165
    int64_t v27 = v21; // 0xa0165
    if (v7 == -29) {
        int32_t * v28 = (int32_t *)v4; // 0xa0184
        *v28 = *v28 & (int32_t)((int64_t)&g1 ^ -1);
        v24 = v1 + 409;
        int32_t * v29 = (int32_t *)v24; // 0xa019e
        *v29 = *v29 & (int32_t)((int64_t)&g1 ^ -1);
        v25 = (int64_t)&g1 ^ -1;
        v26 = 2 * v19 ^ v4 | v20 ^ v17;
        v27 = (v21 ^ v15 | v17) + v16;
    }
    int64_t v30 = v25; // 0xa01a4
    int64_t v31 = v27; // 0xa01a4
    if (v7 == -14) {
        int32_t * v32 = (int32_t *)v4; // 0xa01ad
        uint32_t v33 = *v32; // 0xa01ad
        if (v33 % 2 == 0) {
            // 0xa01d9
            *v32 = v33 | 1;
            v30 = 1;
            v31 = v26 ^ 2 ^ v27;
        } else {
            // 0xa01c3
            *v32 = v33 & -2;
            v30 = -2;
            v31 = v27;
        }
    }
    int64_t v34 = v30; // 0xa0203
    if (v7 == 116) {
        int32_t * v35 = (int32_t *)v4; // 0xa0210
        *v35 = *v35 | 1;
        v34 = 1;
    }
    int64_t v36 = v24; // 0xa021b
    int64_t v37 = v34; // 0xa021b
    int64_t v38 = v31; // 0xa021b
    if (v7 == -31) {
        int32_t * v39 = (int32_t *)v4; // 0xa0239
        *v39 = *v39 | (int32_t)&g2;
        v36 = v1 + 409;
        int32_t * v40 = (int32_t *)v36; // 0xa025e
        *v40 = *v40 | (int32_t)&g2;
        v37 = (int64_t)&g2;
        v38 = (int64_t)&g2 + 1 & 16;
    }
    int64_t v41 = v36; // 0xa026b
    int64_t v42 = v37; // 0xa026b
    if (v7 == 83) {
        int32_t * v43 = (int32_t *)v4; // 0xa027b
        *v43 = *v43 | (int32_t)&g1;
        v41 = v1 + 409;
        int32_t * v44 = (int32_t *)v41; // 0xa028f
        *v44 = *v44 | (int32_t)&g1;
        v42 = (int64_t)&g1;
    }
    int64_t v45 = v1 + 368; // 0xa0316
    int32_t * v46 = (int32_t *)v45; // 0xa031d
    int32_t v47 = *v46; // 0xa031d
    *v46 = v47 - (v47 ^ (int32_t)*(int16_t *)(*v2 + 2));
    *v2 = *v2 + 5;
    return (((v41 | v38) - 32 & (int64_t)&g2 | 2 * v42 ^ (int64_t)&g3) & -0x80000000) + v45;
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

// Address range: 0xa7ef8 - 0xa81c4
int64_t function_a7ef8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa7ef8
    int64_t v1; // 0xa7ef8
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xa7f0b
    int64_t v3 = *v2; // 0xa7f0b
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 1)); // 0xa7f75
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 7)); // 0xa7f97
    *(char *)v5 = *(char *)v4;
    int64_t v6 = *v2; // 0xa7fba
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 5)); // 0xa7fdb
    int64_t v8 = v1 + (int64_t)*(int16_t *)(v6 + 1); // 0xa807a
    int64_t * v9 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 7));
    int64_t v10 = *v9;
    if (((*(int64_t *)(v1 + 409) | v7) & (int64_t)&g2) == 0) {
        // 0xa809e
        *v9 = v10 + 1;
        int64_t * v11 = (int64_t *)v8; // 0xa80b9
        *v11 = *v11 + 1;
    } else {
        // 0xa808a
        *v9 = v10 - 1;
        int64_t * v12 = (int64_t *)v8; // 0xa8092
        *v12 = *v12 - 1;
    }
    int32_t * v13 = (int32_t *)(v1 + 368); // 0xa80e7
    int32_t v14 = *v13 - (*(int32_t *)(v1 + 35) ^ 0x4821c1c7); // 0xa80e7
    *v13 = v14;
    uint16_t v15 = *(int16_t *)(*v2 + 3); // 0xa8142
    *v13 = v14 - 0x231e4204 - (int32_t)v15;
    *v2 = *v2 + 9;
    return *(int64_t *)(v1 + 271) + (int64_t)(v15 + 0x4204);
}

// Address range: 0xa81c4 - 0xa823e
int64_t function_a81c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0xa81c4
    int64_t v1; // 0xa81c4
    int64_t v2 = *(int64_t *)(v1 + 10); // 0xa81d5
    int64_t v3 = *(int64_t *)*(int64_t *)(v1 + (int64_t)*(int16_t *)v2); // 0xa81e9
    *(int64_t *)(v1 + (int64_t)*(int16_t *)(v2 + 2)) = v3;
    *(int32_t *)(v1 + 476) = 0;
    return result;
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

// Address range: 0xb1548 - 0xb180e
int64_t function_b1548(int64_t a1, int64_t a2) {
    // 0xb1548
    int64_t v1; // 0xb1548
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xb1552
    int32_t v3 = *v2; // 0xb1552
    bool v4 = true; // 0xb1563
    int32_t v5 = v3; // 0xb1563
    if ((v3 & 2) != 0) {
        // 0xb1569
        v5 = (v3 ^ 0x22b4a064) + 0x4b0dd7d1;
        *v2 = v5;
        v4 = (v5 & 2) == 0;
    }
    int64_t * v6 = (int64_t *)(v1 + 10); // 0xb15ac
    int64_t v7 = *v6;
    int64_t v8 = (int64_t)*(int16_t *)(v7 + 7);
    int64_t v9 = v8; // 0xb15cc
    int64_t v10 = v7; // 0xb15cc
    if (!v4) {
        // 0xb15d2
        *v2 = v5 & 0x1080180 | 0x1ed64c1e;
        v10 = *v6;
        v9 = (int64_t)*(int16_t *)(v10 + 7);
    }
    int64_t v11 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v7 + 5)); // 0xb1604
    uint16_t v12 = *(int16_t *)v11; // 0xb160b
    uint16_t v13 = *(int16_t *)*(int64_t *)(v1 + v8); // 0xb1610
    int64_t v14 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v10 + 3)); // 0xb1636
    int64_t v15 = v1 + (int64_t)*(int16_t *)(v10 + 5); // 0xb1681
    int64_t * v16 = (int64_t *)(v1 + v9);
    int64_t v17 = *v16;
    if (((*(int64_t *)(v1 + 409) | v14) & (int64_t)&g2) == 0) {
        // 0xb16ab
        *v16 = v17 + 2;
        int64_t * v18 = (int64_t *)v15; // 0xb16b2
        *v18 = *v18 + 2;
    } else {
        // 0xb1698
        *v16 = v17 - 2;
        int64_t * v19 = (int64_t *)v15; // 0xb169f
        *v19 = *v19 - 2;
    }
    int64_t v20 = *v6; // 0xb16cf
    int64_t v21 = v20; // 0xb16e7
    if (*(char *)(v20 + 2) != 0) {
        int16_t v22 = v13 - v12; // 0xb1610
        unsigned char v23 = llvm_ctpop_i8((char)v22); // 0xb1610
        uint16_t v24 = *(int16_t *)(v20 + 9); // 0xb171f
        bool v25; // 0xb1548
        *(int64_t *)(v1 + (int64_t)v24) = 0x4000 * (int64_t)v25 | 1024 * (int64_t)v25 | 512 * (int64_t)v25 | 256 * (int64_t)v25 | (int64_t)(v13 < v12) | 64 * (int64_t)(v22 == 0) | 128 * (int64_t)(v22 < 0) | 16 * (int64_t)(v13 % 16 - v12 % 16 > 15) | 2048 * (int64_t)(((v22 ^ v13) & (v13 ^ v12)) < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
        v21 = *v6;
    }
    int64_t result = v1 + 368; // 0xb179b
    int32_t * v26 = (int32_t *)result; // 0xb17a4
    int32_t v27 = *v26; // 0xb17a4
    *v26 = (v27 ^ (int32_t)*(int16_t *)v21) + v27;
    *v6 = *v6 + 11;
    return result;
}

// Address range: 0xb180e - 0xb1b2d
int64_t function_b180e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xb180e
    int64_t v1; // 0xb180e
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xb182e
    int64_t v3 = *v2; // 0xb182e
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 7)); // 0xb1893
    int64_t v5 = *v4; // 0xb1893
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 5)); // 0xb189c
    uint16_t v7 = *(int16_t *)v5; // 0xb18a2
    int64_t v8 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 9)); // 0xb18fb
    int64_t v9 = *(int64_t *)(v1 + 409); // 0xb1926
    *v4 = (((v9 | v8) & (int64_t)&g2) == 0 ? 2 : -2) + v5;
    int32_t * v10 = (int32_t *)(v1 + 35); // 0xb1a00
    int32_t v11 = *v10; // 0xb1a00
    if ((v11 & 2) != 0) {
        // 0xb1a1f
        *v10 = v11 - 0x5be9cbec;
    }
    if (*(char *)*v2 != 0) {
        uint16_t v12 = (int16_t)v6; // 0xb18a2
        int16_t v13 = v12 - v7; // 0xb18a2
        unsigned char v14 = llvm_ctpop_i8((char)v13); // 0xb18a2
        uint16_t v15 = *(int16_t *)(*v2 + 3); // 0xb1a61
        bool v16; // 0xb180e
        *(int64_t *)(v1 + (int64_t)v15) = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v7 > v12) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v12 % 16 - v7 % 16 > 15) | 2048 * (int64_t)(((v13 ^ v12) & (v7 ^ v12)) < 0) | 4 * (int64_t)(v14 % 2 == 0) | 2;
    }
    int32_t * v17 = (int32_t *)(v1 + 368); // 0xb1ac9
    int32_t v18 = *v17; // 0xb1ac9
    uint32_t v19 = (v18 ^ (int32_t)*(int16_t *)(*v2 + 1)) - 0x26ed1596; // 0xb1ad3
    *v17 = v19 | v18;
    *v2 = *v2 + 11;
    return v19 % 0x10000;
}

// Address range: 0xb1b32 - 0xb1b35
int64_t function_b1b32(void) {
    // 0xb1b32
    int64_t result; // 0xb1b32
    return result;
}

// Address range: 0xb42e2 - 0xb45d2
int64_t function_b42e2(int64_t a1, int64_t a2, int64_t a3) {
    // 0xb42e2
    int64_t v1; // 0xb42e2
    int64_t v2 = v1;
    int64_t v3 = v2 + 35; // 0xb42e5
    int32_t * v4 = (int32_t *)v3; // 0xb42f5
    int32_t * v5 = (int32_t *)(v2 + 368); // 0xb4306
    *v5 = *v5 & *v4;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    unsigned char v6 = *(char *)(v2 + 404); // 0xb4362
    int64_t v7; // 0xb42e2
    int64_t v8; // 0xb42e2
    bool v9; // 0xb42e2
    if (v6 == 98) {
        unsigned char v10 = (char)v2; // 0xb436d
        char v11 = -v10; // 0xb436d
        int64_t v12 = 64 * (int64_t)(v10 == 0) | (int64_t)(v10 != 0) | 128 * (int64_t)(v11 < 0) | 16 * (int64_t)(-((v10 % 16)) > 15) | 4 * (int64_t)(llvm_ctpop_i8(v11) % 2 == 0) | 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | 2; // bp-8, 0xb4370
        v8 = (int64_t)&v12;
        v7 = v2 & -256 | (int64_t)v11;
    }
    int64_t v13 = v8; // 0xb4373
    int64_t v14 = v7; // 0xb4373
    if (v6 == 50) {
        uint16_t v15 = (int16_t)v7; // 0xb4379
        int16_t v16 = -v15; // 0xb4379
        int64_t v17 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v15 != 0) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v16 < 0) | 16 * (int64_t)(-((v15 % 16)) > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v16) % 2 == 0) | 2; // bp-16, 0xb437d
        v13 = (int64_t)&v17;
        v14 = v7 & -0x10000 | (int64_t)v16;
    }
    int64_t v18 = v13; // 0xb4387
    int64_t v19 = v14; // 0xb4387
    if (v6 == 80) {
        uint32_t v20 = (int32_t)v14; // 0xb438d
        int32_t v21 = -v20; // 0xb438d
        unsigned char v22 = llvm_ctpop_i8((char)v21); // 0xb438d
        v18 = v13 - 8;
        *(int64_t *)v18 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v20 != 0) | 64 * (int64_t)(v20 == 0) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(-((v20 % 16)) > 15) | 4 * (int64_t)(v22 % 2 == 0) | 2;
        v19 = v21;
    }
    int64_t v23 = v19;
    int64_t v24 = v18; // 0xb4393
    int64_t v25 = v23; // 0xb4393
    if (v6 == 58) {
        // 0xb4399
        v25 = -v23;
        unsigned char v26 = llvm_ctpop_i8((char)v25); // 0xb4399
        v24 = v18 - 8;
        *(int64_t *)v24 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v23 != 0) | 64 * (int64_t)(v23 == 0) | 128 * (int64_t)(v25 < 0) | 16 * (int64_t)(-((v23 % 16)) > 15) | 4 * (int64_t)(v26 % 2 == 0) | 2;
    }
    int64_t * v27 = (int64_t *)(v2 + 113); // 0xb43c8
    *v27 = v25 - 0x682b9661;
    *v4 = *v4 | *v5 - 0x4efd0861;
    *v27 = *v27 + 0x82707b50;
    int64_t * v28 = (int64_t *)(v2 + 10); // 0xb4492
    int64_t result = *v28; // 0xb4492
    char v29 = *(char *)(result + 4); // 0xb449c
    int64_t v30 = result; // 0xb44a7
    result = v3 & -256 | (int64_t)v6;
    if (v29 != 0) {
        // 0xb44ad
        *(int64_t *)(v2 + (int64_t)*(int16_t *)result) = *(int64_t *)v24;
        v30 = *v28;
    }
    int32_t v31 = *v5; // 0xb4570
    *v5 = v31 + (int32_t)*(int16_t *)(v30 + 2) ^ v31;
    *v28 = *v28 + 5;
    return result;
}

// Address range: 0xb6902 - 0xb6bba
int64_t function_b6902(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xb6902
    int64_t v1; // 0xb6902
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xb6938
    int64_t v3 = *v2; // 0xb6938
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 5)); // 0xb6991
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 3)); // 0xb6997
    *(int16_t *)v4 = *(int16_t *)v5;
    int64_t v6 = *v2; // 0xb69dc
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v6); // 0xb69fd
    int64_t v8 = *(int64_t *)(v1 + 409) & (int64_t)&g2; // 0xb6a30
    int64_t v9 = v1 + (int64_t)*(int16_t *)(v6 + 5); // 0xb6a8e
    int64_t v10 = v1 + (int64_t)*(int16_t *)(v6 + 3); // 0xb6aa5
    int64_t v11; // 0xb6902
    if ((v8 || v7 & (int64_t)&g2) == 0) {
        int64_t v12 = v1 + (a2 ^ 0x4b3de668); // 0xb6959
        int64_t * v13 = (int64_t *)v9; // 0xb6ad8
        *v13 = *v13 + 2;
        int64_t * v14 = (int64_t *)v10; // 0xb6adf
        *v14 = *v14 + 2;
        v11 = v9 | 2 * v12 + (v12 | -240);
    } else {
        int64_t * v15 = (int64_t *)v9; // 0xb6abf
        *v15 = *v15 - 2;
        int64_t * v16 = (int64_t *)v10; // 0xb6ac6
        *v16 = *v16 - 2;
        v11 = v9;
    }
    int64_t v17 = v11;
    int64_t v18 = v9 | v1 | v17; // 0xb6af9
    int64_t v19 = *v2; // 0xb6b0c
    *v2 = v19 + 9;
    return -7 - v19 - v18 + (v17 + 1 & v1) & v17 + v8 - v18 ^ -120 - (int64_t)&g2;
}

// Address range: 0xbf889 - 0xbfb99
int64_t function_bf889(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xbf889
    int64_t v1; // 0xbf889
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xbf8be
    int64_t v3 = *v2; // 0xbf8be
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0xbf901
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0xbf918
    *(char *)v4 = *(char *)v5;
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(*v2 + 2)); // 0xbf98b
    int32_t * v7 = (int32_t *)(v1 + 35); // 0xbf9ab
    *v7 = *v7 & 0x23af6a13;
    int64_t v8 = *v2; // 0xbfa0b
    int64_t v9 = v1 + (int64_t)*(int16_t *)(v8 + 4); // 0xbfa55
    int64_t * v10 = (int64_t *)(v1 + (int64_t)*(int16_t *)v8);
    int64_t v11 = *v10;
    if (((*(int64_t *)(v1 + 409) | v6) & (int64_t)&g2) == 0) {
        // 0xbfa7f
        *v10 = v11 + 1;
        int64_t * v12 = (int64_t *)v9; // 0xbfa90
        *v12 = *v12 + 1;
    } else {
        // 0xbfa65
        *v10 = v11 - 1;
        int64_t * v13 = (int64_t *)v9; // 0xbfa73
        *v13 = *v13 - 1;
    }
    int32_t * v14 = (int32_t *)(v1 + 368); // 0xbfb3c
    *v14 = *v14 | (int32_t)*(int16_t *)(*v2 + 7);
    *v2 = *v2 + 9;
    return (v1 + 51 | -0x80000000) ^ 4;
}

// Address range: 0xbfb9b - 0xbfb9e
int64_t function_bfb9b(void) {
    // 0xbfb9b
    int64_t result; // 0xbfb9b
    return result;
}
