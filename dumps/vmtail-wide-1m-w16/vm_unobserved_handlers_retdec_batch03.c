/*
 * Targeted RetDec C for unobserved VM handler native ranges, batch 3.
 *
 * These dispatch entries are statically inventoried but were not seen as
 * dispatch targets in the concrete traces. Batches are sorted by native
 * span size so each decompile stays small and reproducible.
 *
 * Total unobserved handler ranges: 155
 * Batch size: 24
 * Ranges:
 *   0x868bd-0x86bf2 entry=72 span_bytes=819 insns=183 tail=0x86be2
 *   0xaf57f-0xaf8bc entry=265 span_bytes=826 insns=184 tail=0xaf8ac
 *   0x8c5b9-0x8c8f9 entry=97 span_bytes=829 insns=174 tail=0x8c8e9
 *   0x83b40-0x83e83 entry=55 span_bytes=831 insns=184 tail=0x83e73
 *   0x84762-0x84ab0 entry=61 span_bytes=843 insns=178 tail=0x84aa0
 *   0x9c74a-0x9ca9a entry=178 span_bytes=845 insns=181 tail=0x9ca8a
 *   0xbc676-0xbc9c6 entry=329 span_bytes=847 insns=187 tail=0xbc9b6
 *   0x8129d-0x815f7 entry=41 span_bytes=858 insns=183 tail=0x815e7
 *   0x9c3f7-0x9c758 entry=177 span_bytes=860 insns=194 tail=0x9c748
 *   0x8df9c-0x8e2fd entry=103 span_bytes=863 insns=193 tail=0x8e2ed
 *   0x7d5ec-0x7d94f entry=24 span_bytes=866 insns=191 tail=0x7d93f
 *   0xbfc0d-0xbff78 entry=343 span_bytes=874 insns=188 tail=0xbff68
 *   0xb5d7c-0xb60ed entry=294 span_bytes=878 insns=201 tail=0xb60dd
 *   0x83061-0x833d5 entry=51 span_bytes=883 insns=185 tail=0x833c5
 *   0xa8450-0xa87c4 entry=235 span_bytes=883 insns=199 tail=0xa87b4
 *   0x79a3d-0x79db1 entry=8 span_bytes=884 insns=192 tail=0x79da1
 *   0xb1fd5-0xb2350 entry=277 span_bytes=887 insns=201 tail=0xb2340
 *   0xaef02-0xaf27a entry=262 span_bytes=888 insns=189 tail=0xaf26a
 *   0x7b77c-0x7baf7 entry=16 span_bytes=890 insns=190 tail=0x7bae7
 *   0xbff6a-0xc02f2 entry=344 span_bytes=902 insns=187 tail=0xc02e2
 *   0x792f8-0x79682 entry=4 span_bytes=903 insns=197 tail=0x79672
 *   0x8eb79-0x8ef01 entry=106 span_bytes=904 insns=196 tail=0x8eef1
 *   0xa3a4b-0xa3dd4 entry=212 span_bytes=905 insns=189 tail=0xa3dc4
 *   0x957d9-0x95b69 entry=143 span_bytes=908 insns=208 tail=0x95b59
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

int64_t function_48f5c717();
int64_t function_49cb0c45();
int64_t function_acca498();

// Address range: 0x792f8 - 0x79675
int64_t function_792f8(void) {
    // 0x792f8
    int64_t v1; // 0x792f8
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x79353
    int32_t v3 = *v2; // 0x79353
    *v2 = v3 + 0x408d9a8;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0x79396
    *v4 = -0x5f30cb14 - v3 + *v4;
    int32_t v5 = *v2 + 0x154265a3 & 0x2bd560b0 ^ 0x3aea6ba6; // 0x7942a
    *v2 = v5;
    *v2 = v5 + *v4;
    *(char *)(v1 + 367) = 0;
    int64_t * v6 = (int64_t *)(v1 + 10); // 0x7949e
    int32_t v7 = *v2; // 0x794e9
    int32_t v8 = v7 + *(int32_t *)*v6 ^ *v4; // 0x79523
    *v2 = v8 ^ v7;
    *v4 = *v4 & 0x500698c1;
    *(int64_t *)v1 = (int64_t)(v8 ^ 0xda3b7d9);
    int32_t v9 = *v2; // 0x795f2
    *v2 = (int32_t)*(int16_t *)(*v6 + 4) - v9 ^ 0x2a994b16 | v9;
    *v6 = *v6 + 6;
    return (int64_t)&g2;
}

// Address range: 0x79677 - 0x7967a
int64_t function_79677(void) {
    // 0x79677
    int64_t result; // 0x79677
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
        v10 = 16 * (int64_t)((v6 & 16) != 0) | 4 * (int64_t)((v6 & 4) != 0) | 64 * (int64_t)((v6 & 64) != 0) | 128 * (int64_t)((char)v6 < 0) | 256 * (int64_t)((v6 & 256) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | (int64_t)v14 | 2048 * (int64_t)v13 | 2;
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
        v19 = 16 * (int64_t)((v18 & 16) != 0) | 4 * (int64_t)((v18 & 4) != 0) | 64 * (int64_t)((v18 & 64) != 0) | 128 * (int64_t)((char)v18 < 0) | 256 * (int64_t)((v18 & 256) != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | (int64_t)v23 | 2048 * (int64_t)v22 | 2;
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
        v27 = 16 * (int64_t)((v26 & 16) != 0) | 4 * (int64_t)((v26 & 4) != 0) | 64 * (int64_t)((v26 & 64) != 0) | 128 * (int64_t)((char)v26 < 0) | 256 * (int64_t)((v26 & 256) != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | (int64_t)v31 | 2048 * (int64_t)v30 | 2;
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
        v35 = 16 * (int64_t)((v34 & 16) != 0) | 4 * (int64_t)((v34 & 4) != 0) | 64 * (int64_t)((v34 & 64) != 0) | 128 * (int64_t)((char)v34 < 0) | 256 * (int64_t)((v34 & 256) != 0) | 512 * (int64_t)((v34 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v34 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v34 & (int64_t)"le") != 0) | (int64_t)v39 | 2048 * (int64_t)v38 | 2;
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

// Address range: 0x7d5ec - 0x7d941
int64_t function_7d5ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x7d5ec
    int64_t v1; // 0x7d5ec
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x7d613
    int32_t v3 = *v2; // 0x7d613
    if ((v3 & 2) != 0) {
        // 0x7d636
        *v2 = v3 - 0x668b82ed;
    }
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x7d676
    int64_t v5 = *v4; // 0x7d676
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)v5); // 0x7d6c8
    int64_t v7 = *v6; // 0x7d6c8
    int64_t * v8 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v5 + 4)); // 0x7d6d1
    uint64_t v9 = *(int64_t *)*v8; // 0x7d6d4
    uint64_t v10 = *(int64_t *)v7; // 0x7d6d7
    int64_t v11 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v5 + 9)); // 0x7d723
    int64_t v12; // 0x7d5ec
    if (((*(int64_t *)(v1 + 409) | v11) & (int64_t)&g2) == 0) {
        // 0x7d803
        *v6 = v7 + 8;
        v12 = *v8 + 8;
    } else {
        // 0x7d7e1
        *v6 = v7 - 8;
        v12 = *v8 - 8;
    }
    // 0x7d819
    *v8 = v12;
    int64_t v13 = *v4; // 0x7d840
    int64_t v14 = v13; // 0x7d858
    if (*(char *)(v13 + 6) != 0) {
        int64_t v15 = v10 - v9; // 0x7d6d7
        unsigned char v16 = llvm_ctpop_i8((char)v15); // 0x7d6d7
        uint16_t v17 = *(int16_t *)(v13 + 7); // 0x7d888
        bool v18; // 0x7d5ec
        *(int64_t *)(v1 + (int64_t)v17) = 0x4000 * (int64_t)v18 | 1024 * (int64_t)v18 | 512 * (int64_t)v18 | 256 * (int64_t)v18 | (int64_t)(v10 < v9) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 16 * (int64_t)(v10 % 16 - v9 % 16 > 15) | 2048 * (int64_t)(((v15 ^ v10) & (v10 ^ v9)) < 0) | 4 * (int64_t)(v16 % 2 == 0) | 2;
        v14 = *v4;
    }
    uint16_t v19 = *(int16_t *)(v14 + 2); // 0x7d8da
    int64_t v20 = *(int64_t *)(v1 + 271); // 0x7d8e7
    int32_t v21 = *(int32_t *)(v1 + 368); // 0x7d8fe
    *v4 = v14 + 11;
    return v20 + (int64_t)(((v21 ^ (int32_t)v19) + 1381) % 0x10000);
}

// Address range: 0x7d945 - 0x7d94c
int64_t function_7d945(void) {
    // 0x7d945
    int64_t result; // 0x7d945
    return result;
}

// Address range: 0x8129d - 0x815ea
int64_t function_8129d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x8129d
    int64_t v1; // 0x8129d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0x812d2
    *v3 = *v3 + *(int32_t *)(v2 + 35);
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int64_t * v4 = (int64_t *)(v2 + 96); // 0x812f2
    int64_t v5 = *v4; // 0x812f2
    *v4 = v5 + 0x98d7755e;
    int64_t v6 = v5 + 0x653cf834; // 0x81377
    unsigned char v7 = *(char *)(v2 + 404); // 0x8138b
    char v8 = v7 - 50; // 0x8138e
    int64_t v9; // 0x8129d
    int64_t v10; // 0x8129d
    bool v11; // 0x8129d
    if (v8 == 0) {
        uint32_t v12 = (0x10000 * (int32_t)v6 >> 16) * (0x10000 * (int32_t)v2 >> 16); // 0x81398
        int64_t v13 = v12 > 0x7fff; // 0x8139d
        int64_t v14 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v8 == 0) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v7 % 16 > 17) | v13 | 4 * (int64_t)(llvm_ctpop_i8(v8) % 2 == 0) | 2048 * v13 | 2; // bp-8, 0x8139d
        v10 = (int64_t)&v14;
        v9 = v2 & -0x10000 | (int64_t)(v12 % 0x10000);
    }
    char v15 = v7 - 80; // 0x813a4
    int64_t v16 = v10; // 0x813a8
    int64_t v17 = v9; // 0x813a8
    if (v15 == 0) {
        int64_t v18 = (0x100000000 * v9 >> 32) * (0x100000000 * v6 >> 32); // 0x813ae
        int64_t v19 = v18 > 0x7fffffff; // 0x813b2
        int64_t v20 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v15) % 2 == 0) | v19 | 2048 * v19 | 2; // bp-16, 0x813b2
        v16 = (int64_t)&v20;
        v17 = v18 & 0xffffffff;
    }
    char v21 = v7 - 58; // 0x813b6
    int64_t v22 = v16; // 0x813ba
    int64_t v23 = v17; // 0x813ba
    if (v21 == 0) {
        unsigned char v24 = llvm_ctpop_i8(v21); // 0x813b6
        int128_t v25 = (int128_t)v17 * (int128_t)v6; // 0x813c0
        int64_t v26 = v25 > 0x7fffffffffffffff; // 0x813c4
        v22 = v16 - 8;
        *(int64_t *)v22 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(v7 % 16 > 25) | 4 * (int64_t)(v24 % 2 == 0) | v26 | 2048 * v26 | 2;
        v23 = v25;
    }
    int64_t v27 = v23 + 0x80fec7d; // 0x813d5
    int64_t * v28 = (int64_t *)(v2 + 113); // 0x813f9
    *v28 = v27;
    int64_t result = v2 + 10; // 0x81402
    int64_t * v29 = (int64_t *)result; // 0x8140f
    int64_t v30 = *v29; // 0x8140f
    int64_t v31 = v27; // 0x81475
    if (*(char *)(v30 + 2) != 0) {
        uint16_t v32 = *(int16_t *)(v30 + 3); // 0x814a0
        *(int64_t *)(v2 + (int64_t)v32) = *(int64_t *)v22;
        v31 = *v28;
    }
    // 0x814c7
    *v28 = v31 + 0x1234f872;
    int32_t v33 = *v3; // 0x81578
    *v3 = (v33 ^ (int32_t)*(int16_t *)*v29) - 0x7c7cd82f | v33;
    *v29 = *v29 + 5;
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
    int64_t v6 = ((v2 & a4) + a5 & v1 ^ v2) + (int64_t)&g3; // 0x830a8
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
    if (((v18 | *(int64_t *)v17) & (int64_t)&g2) == 0) {
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

// Address range: 0x83b40 - 0x83e76
int64_t function_83b40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x83b40
    int64_t v1; // 0x83b40
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x83b4d
    *v3 = *v3 + 0x7aabd1d;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0x83bd3
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)*v4); // 0x83bf8
    uint64_t v6 = *v3 + 0x5d923b17; // 0x83c3c
    char v7 = *(char *)(v2 + 404); // 0x83c5d
    int64_t v8 = v5; // 0x83c64
    int64_t v9; // 0x83b40
    if (v7 == 98) {
        unsigned char v10 = (char)v6 % 32; // 0x83c6b
        bool v11 = (v5 & (int64_t)L"\n2") != 0; // 0x83c6b
        bool v12 = v5 % 2 != 0; // 0x83c6b
        int64_t v13; // 0x83b40
        if (v10 != 0) {
            char v14 = v2; // 0x83c6b
            unsigned char v15 = v10 - 1; // 0x83c6b
            unsigned char v16 = (char)(v5 % 2 != 0) << v15 | v14 << v10 | (char)((int16_t)v2 % 256 >> (int16_t)(9 - v10)); // 0x83c6b
            char v17 = (v14 << v15) / 128; // 0x83c6b
            v11 = v10 == 1 ? v16 / 128 != v17 : (v5 & (int64_t)L"\n2") != 0;
            v12 = v17 != 0;
            v13 = v2 & -256 | (int64_t)v16;
        }
        v8 = 16 * (int64_t)((v5 & 16) != 0) | 4 * (int64_t)((v5 & 4) != 0) | 64 * (int64_t)((v5 & 64) != 0) | 128 * (int64_t)((char)v5 < 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | (int64_t)v12 | 2048 * (int64_t)v11 | 2;
        v9 = v13;
    }
    uint64_t v18 = v8;
    int64_t v19 = v18; // 0x83c73
    int64_t v20 = v9; // 0x83c73
    if (v7 == 50) {
        uint16_t v21 = (int16_t)v6 % 32; // 0x83c80
        bool v22 = (v18 & (int64_t)L"\n2") != 0; // 0x83c80
        bool v23 = v18 % 2 != 0; // 0x83c80
        v20 = v9;
        if (v21 != 0) {
            int16_t v24 = v9; // 0x83c80
            uint16_t v25 = v21 - 1; // 0x83c80
            uint16_t v26 = (int16_t)(v18 % 2 != 0) << v25 | v24 << v21 | (int16_t)((int32_t)v9 % 0x10000 >> (int32_t)(17 - v21)); // 0x83c80
            int16_t v27 = (v24 << v25) / 0x8000; // 0x83c80
            v22 = v21 == 1 ? v26 / 0x8000 != v27 : (v18 & (int64_t)L"\n2") != 0;
            v23 = v27 != 0;
            v20 = v9 & -0x10000 | (int64_t)v26;
        }
        v19 = 16 * (int64_t)((v18 & 16) != 0) | 4 * (int64_t)((v18 & 4) != 0) | 64 * (int64_t)((v18 & 64) != 0) | 128 * (int64_t)((char)v18 < 0) | 256 * (int64_t)((v18 & 256) != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | (int64_t)v23 | 2048 * (int64_t)v22 | 2;
    }
    uint64_t v28 = v19;
    int64_t v29 = v28; // 0x83c96
    int64_t v30 = v20; // 0x83c96
    if (v7 == 80) {
        uint32_t v31 = (int32_t)v6 % 32; // 0x83ca4
        bool v32 = (v28 & (int64_t)L"\n2") != 0; // 0x83ca4
        bool v33 = v28 % 2 != 0; // 0x83ca4
        v30 = v20;
        if (v31 != 0) {
            int32_t v34 = v20; // 0x83ca4
            uint32_t v35 = v31 - 1; // 0x83ca4
            int32_t v36 = v34 << v31 | (int32_t)((v20 & 0xffffffff) >> (int64_t)(33 - v31)) | (int32_t)(v28 % 2 != 0) << v35; // 0x83ca4
            v32 = v31 == 1 ? v36 < 0 != v34 << v35 < 0 : (v28 & (int64_t)L"\n2") != 0;
            v33 = v34 << v35 < 0;
            v30 = v36;
        }
        v29 = 16 * (int64_t)((v28 & 16) != 0) | 4 * (int64_t)((v28 & 4) != 0) | 64 * (int64_t)((v28 & 64) != 0) | 128 * (int64_t)((char)v28 < 0) | 256 * (int64_t)((v28 & 256) != 0) | 512 * (int64_t)((v28 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v28 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v28 & (int64_t)"le") != 0) | (int64_t)v33 | 2048 * (int64_t)v32 | 2;
    }
    int64_t v37 = v30;
    uint64_t v38 = v29;
    int64_t v39 = v38; // 0x83cb4
    int64_t v40 = v37; // 0x83cb4
    if (v7 == 58) {
        uint64_t v41 = v6 % 64; // 0x83cbb
        bool v42 = (v38 & (int64_t)L"\n2") != 0; // 0x83cbb
        bool v43 = v38 % 2 != 0; // 0x83cbb
        v40 = v37;
        if (v41 != 0) {
            uint64_t v44 = v41 - 1; // 0x83cbb
            v40 = v37 << v41 | (int64_t)((int128_t)v37 >> (int128_t)(65 - v41)) | (int64_t)(v38 % 2 != 0) << v44;
            int64_t v45 = (v37 << v44) / 0x8000000000000000; // 0x83cbb
            v42 = v41 == 1 ? v40 >> 63 != v45 : (v38 & (int64_t)L"\n2") != 0;
            v43 = v45 != 0;
        }
        v39 = 16 * (int64_t)((v38 & 16) != 0) | 4 * (int64_t)((v38 & 4) != 0) | 64 * (int64_t)((v38 & 64) != 0) | 128 * (int64_t)((char)v38 < 0) | 256 * (int64_t)((v38 & 256) != 0) | 512 * (int64_t)((v38 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v38 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v38 & (int64_t)"le") != 0) | (int64_t)v43 | 2048 * (int64_t)v42 | 2;
    }
    int64_t v46 = v2 + 113; // 0x83cd2
    int64_t * v47 = (int64_t *)v46; // 0x83cd9
    *v47 = v40 + 0x49cc3bea;
    int64_t v48 = *v4; // 0x83d19
    int64_t v49 = 0; // 0x83d46
    if (*(char *)(v48 + 4) != 0) {
        // 0x83d4c
        v49 = v2 + (int64_t)*(int16_t *)v48;
        *(int64_t *)v49 = v39;
    }
    // 0x83d8e
    *v47 = v40 + 0x1a44e4ef;
    int64_t v50 = *(int64_t *)(v2 + 271); // 0x83dcd
    int32_t * v51 = (int32_t *)(v2 + 368); // 0x83e14
    *v51 = *v51 | (int32_t)*(int16_t *)(*v4 + 2);
    *v4 = *v4 + 5;
    return 2 * ((v39 | (int64_t)&g3) - (v49 | v46 | v50)) + 112 & 144;
}

// Address range: 0x84762 - 0x84aa3
int64_t function_84762(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x84762
    int64_t v1; // 0x84762
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x84781
    int64_t v3 = *v2; // 0x84781
    int64_t v4 = v1 + (int64_t)*(int16_t *)(v3 + 3); // 0x847b8
    int64_t * v5 = (int64_t *)v4; // 0x847c9
    int64_t v6 = *v5; // 0x847c9
    int64_t * v7 = (int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0x84805
    uint64_t v8 = *(int64_t *)*v7; // 0x84808
    uint64_t v9 = *(int64_t *)v6; // 0x8480b
    int64_t v10 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 9)); // 0x84872
    int64_t result; // 0x84762
    int64_t v11; // 0x84762
    if (((*(int64_t *)(v1 + 409) | v10) & (int64_t)&g2) == 0) {
        // 0x84945
        *v5 = v6 + 8;
        v11 = *v7 + 8;
        result = v4;
    } else {
        // 0x84922
        *v5 = v6 - 8;
        v11 = *v7 - 8;
        result = 0;
    }
    // 0x84966
    *v7 = v11;
    int64_t v12 = *v2; // 0x84989
    if (*(char *)(v12 + 2) != 0) {
        int64_t v13 = v9 - v8; // 0x8480b
        unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x8480b
        uint16_t v15 = *(int16_t *)(v12 + 7); // 0x849bf
        bool v16; // 0x84762
        *(int64_t *)(v1 + (int64_t)v15) = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v9 < v8) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v9 % 16 - v8 % 16 > 15) | 2048 * (int64_t)(((v13 ^ v9) & (v9 ^ v8)) < 0) | 4 * (int64_t)(v14 % 2 == 0) | 2;
    }
    int32_t * v17 = (int32_t *)(v1 + 35); // 0x849d3
    *v17 = *v17 ^ 0x91975cd;
    int32_t * v18 = (int32_t *)(v1 + 368); // 0x84a39
    *v18 = -0x326db6ec - (int32_t)*(int16_t *)(*v2 + 5) + 2 * *v18;
    *v2 = *v2 + 11;
    return result;
}

// Address range: 0x868bd - 0x86be4
int64_t function_868bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x868bd
    int64_t v1; // 0x868bd
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x868d4
    int64_t v3 = *v2; // 0x868d4
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 9)); // 0x86914
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 3)); // 0x86925
    int64_t v6 = *v5; // 0x86925
    uint32_t v7 = *(int32_t *)v6; // 0x86928
    int64_t v8 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 7)); // 0x8698a
    int64_t v9 = *(int64_t *)(v1 + 409); // 0x869a4
    *v5 = (((v9 | v8) & (int64_t)&g2) == 0 ? 4 : -4) + v6;
    int64_t v10 = *v2; // 0x86a89
    if (*(char *)(v10 + 2) != 0) {
        uint32_t v11 = (int32_t)v4; // 0x86928
        int32_t v12 = v11 - v7; // 0x86928
        unsigned char v13 = llvm_ctpop_i8((char)v12); // 0x86928
        uint16_t v14 = *(int16_t *)(v10 + 5); // 0x86ade
        bool v15; // 0x868bd
        *(int64_t *)(v1 + (int64_t)v14) = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | (int64_t)(v7 > v11) | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v11 % 16 - v7 % 16 > 15) | 2048 * (int64_t)(((v12 ^ v11) & (v7 ^ v11)) < 0) | 4 * (int64_t)(v13 % 2 == 0) | 2;
    }
    int64_t result = v1 + 368; // 0x86afd
    int32_t * v16 = (int32_t *)result; // 0x86b04
    int32_t v17 = *v16 & 0x1cdfcc1d; // 0x86b04
    *v16 = v17;
    *v16 = v17 - 0x17395727 - (v17 ^ (int32_t)*(int16_t *)*v2);
    *v2 = *v2 + 11;
    return result;
}

// Address range: 0x8c5b9 - 0x8c8ec
int64_t function_8c5b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x8c5b9
    int64_t v1; // 0x8c5b9
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x8c5e6
    *v3 = *v3 - 0x14e3c8fc;
    int32_t * v4 = (int32_t *)(v2 + 368); // 0x8c632
    *v4 = *v4 | *(int32_t *)(v2 + 35);
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int64_t v5 = *v3 + 0x7a20c130; // 0x8c6a1
    unsigned char v6 = *(char *)(v2 + 404); // 0x8c6c2
    char v7 = v6 - 50; // 0x8c6c5
    int64_t v8; // 0x8c5b9
    int64_t v9; // 0x8c5b9
    bool v10; // 0x8c5b9
    if (v7 == 0) {
        uint32_t v11 = (0x10000 * (int32_t)v5 >> 16) * (0x10000 * (int32_t)v2 >> 16); // 0x8c6cf
        int64_t v12 = v11 > 0x7fff; // 0x8c6d3
        int64_t v13 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v7 == 0) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v6 % 16 > 17) | 4 * (int64_t)(llvm_ctpop_i8(v7) % 2 == 0) | v12 | 2048 * v12 | 2; // bp-8, 0x8c6d3
        v9 = (int64_t)&v13;
        v8 = v2 & -0x10000 | (int64_t)(v11 % 0x10000);
    }
    char v14 = v6 - 80; // 0x8c6db
    int64_t v15 = v9; // 0x8c6df
    int64_t v16 = v8; // 0x8c6df
    if (v14 == 0) {
        int64_t v17 = (0x100000000 * v8 >> 32) * (0x100000000 * v5 >> 32); // 0x8c6e5
        int64_t v18 = v17 > 0x7fffffff; // 0x8c6e8
        int64_t v19 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0) | v18 | 2048 * v18 | 2; // bp-16, 0x8c6e8
        v15 = (int64_t)&v19;
        v16 = v17 & 0xffffffff;
    }
    char v20 = v6 - 58; // 0x8c6f0
    int64_t v21 = v15; // 0x8c6f4
    int64_t v22 = v16; // 0x8c6f4
    if (v20 == 0) {
        unsigned char v23 = llvm_ctpop_i8(v20); // 0x8c6f0
        int128_t v24 = (int128_t)v16 * (int128_t)v5; // 0x8c6fa
        int64_t v25 = v24 > 0x7fffffffffffffff; // 0x8c6fe
        v21 = v15 - 8;
        *(int64_t *)v21 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v20 == 0) | 128 * (int64_t)(v20 < 0) | 16 * (int64_t)(v6 % 16 > 25) | 4 * (int64_t)(v23 % 2 == 0) | v25 | 2048 * v25 | 2;
        v22 = v24;
    }
    // 0x8c702
    *(int64_t *)(v2 + 113) = v22 + 0x1a44e4ef;
    int64_t * v26 = (int64_t *)(v2 + 10); // 0x8c7be
    int64_t v27 = *v26; // 0x8c7be
    int64_t v28 = v27; // 0x8c7d8
    int64_t v29 = (v2 + 16 | 16) & (int64_t)L"\n2"; // 0x8c7d8
    if (*(char *)v27 != 0) {
        uint16_t v30 = *(int16_t *)(v27 + 1); // 0x8c824
        *(int64_t *)(v2 + (int64_t)v30) = *(int64_t *)v21;
        v28 = *v26;
        v29 = 0;
    }
    int32_t v31 = *v4; // 0x8c89c
    *v4 = (int32_t)*(int16_t *)(v28 + 3) - v31 & v31;
    *v26 = *v26 + 5;
    return v29 + 6 & 4;
}

// Address range: 0x8df9c - 0x8e2ef
int64_t function_8df9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8df9c
    int64_t v1; // 0x8df9c
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0x52428227;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x8e019
    int64_t v4 = *v3; // 0x8e019
    *v3 = v4 + 0xc51e2e32;
    int64_t * v5 = (int64_t *)(v2 + 10); // 0x8e05f
    uint64_t v6 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v5 + 3)); // 0x8e080
    int64_t v7 = v2 ^ 0x5fe135fe; // 0x8e099
    uint64_t v8 = v4 + 0x653cf834; // 0x8e0ca
    unsigned char v9 = *(char *)(v2 + 404); // 0x8e0ee
    int64_t v10 = v6; // 0x8e0f5
    int64_t v11 = v7; // 0x8e0f5
    if (v9 == 98) {
        unsigned char v12 = (char)v8 % 32; // 0x8e0fc
        bool v13 = (v6 & (int64_t)L"\n2") != 0; // 0x8e0fc
        bool v14 = v6 % 2 != 0; // 0x8e0fc
        v11 = v7;
        if (v12 != 0) {
            unsigned char v15 = (char)v7; // 0x8e0fc
            char v16 = v6 % 2 != 0; // 0x8e0fc
            v13 = v12 == 1 ? v15 / 128 != v16 : (v6 & (int64_t)L"\n2") != 0;
            v14 = (1 << v12 - 1 & v15) != 0;
            v11 = v7 & -256 | (int64_t)(v15 >> v12 | (char)((int16_t)v7 % 256 << (int16_t)(9 - v12)) | v16 << 8 - v12);
        }
        v10 = 16 * (int64_t)((v6 & 16) != 0) | 4 * (int64_t)((v6 & 4) != 0) | 64 * (int64_t)((v6 & 64) != 0) | 128 * (int64_t)((char)v6 < 0) | 256 * (int64_t)((v6 & 256) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | (int64_t)v14 | 2048 * (int64_t)v13 | 2;
    }
    int64_t v17 = v11;
    uint64_t v18 = v10;
    int64_t v19 = v18; // 0x8e107
    int64_t v20 = v17; // 0x8e107
    if (v9 == 50) {
        uint16_t v21 = (int16_t)v8 % 32; // 0x8e115
        bool v22 = (v18 & (int64_t)L"\n2") != 0; // 0x8e115
        bool v23 = v18 % 2 != 0; // 0x8e115
        v20 = v17;
        if (v21 != 0) {
            uint16_t v24 = (int16_t)v17; // 0x8e115
            int16_t v25 = v18 % 2 != 0; // 0x8e115
            v22 = v21 == 1 ? v24 / 0x8000 != v25 : (v18 & (int64_t)L"\n2") != 0;
            v23 = (1 << v21 - 1 & v24) != 0;
            v20 = v17 & -0x10000 | (int64_t)(v25 << 16 - v21 | v24 >> v21 | (int16_t)((int32_t)v17 % 0x10000 << (int32_t)(17 - v21)));
        }
        v19 = 16 * (int64_t)((v18 & 16) != 0) | 4 * (int64_t)((v18 & 4) != 0) | 64 * (int64_t)((v18 & 64) != 0) | 128 * (int64_t)((char)v18 < 0) | 256 * (int64_t)((v18 & 256) != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | (int64_t)v23 | 2048 * (int64_t)v22 | 2;
    }
    uint64_t v26 = v19;
    int64_t v27 = v26; // 0x8e11e
    int64_t v28 = v20; // 0x8e11e
    if (v9 == 80) {
        uint32_t v29 = (int32_t)v8 % 32; // 0x8e125
        bool v30 = (v26 & (int64_t)L"\n2") != 0; // 0x8e125
        bool v31 = v26 % 2 != 0; // 0x8e125
        v28 = v20;
        if (v29 != 0) {
            int32_t v32 = v20; // 0x8e125
            v30 = v29 == 1 ? v32 < 0 != v26 % 2 != 0 : (v26 & (int64_t)L"\n2") != 0;
            v31 = (1 << v29 - 1 & v32) != 0;
            v28 = v32 >> v29 | (int32_t)((v20 & 0xffffffff) << (int64_t)(33 - v29)) | (int32_t)(v26 % 2 != 0) << 32 - v29;
        }
        v27 = 16 * (int64_t)((v26 & 16) != 0) | 4 * (int64_t)((v26 & 4) != 0) | 64 * (int64_t)((v26 & 64) != 0) | 128 * (int64_t)((char)v26 < 0) | 256 * (int64_t)((v26 & 256) != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | (int64_t)v31 | 2048 * (int64_t)v30 | 2;
    }
    uint64_t v33 = v28;
    uint64_t v34 = v27;
    int64_t v35 = v34; // 0x8e137
    int64_t v36 = v33; // 0x8e137
    if (v9 == 58) {
        uint64_t v37 = v8 % 64; // 0x8e13e
        bool v38 = (v34 & (int64_t)L"\n2") != 0; // 0x8e13e
        bool v39 = v34 % 2 != 0; // 0x8e13e
        v36 = v33;
        if (v37 != 0) {
            int64_t v40 = v34 % 2 != 0; // 0x8e13e
            v38 = v37 == 1 ? v33 / 0x8000000000000000 != v40 : (v34 & (int64_t)L"\n2") != 0;
            v39 = (v33 & 1 << v37 - 1) != 0;
            v36 = v33 >> v37 | (int64_t)((int128_t)v33 << (int128_t)(65 - v37)) | v40 << 64 - v37;
        }
        v35 = 16 * (int64_t)((v34 & 16) != 0) | 4 * (int64_t)((v34 & 4) != 0) | 64 * (int64_t)((v34 & 64) != 0) | 128 * (int64_t)((char)v34 < 0) | 256 * (int64_t)((v34 & 256) != 0) | 512 * (int64_t)((v34 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v34 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v34 & (int64_t)"le") != 0) | (int64_t)v39 | 2048 * (int64_t)v38 | 2;
    }
    int64_t * v41 = (int64_t *)(v2 + 113); // 0x8e15d
    *v41 = v36 - 0x72dc4ac;
    int64_t v42 = v36 + 0x1a44e4ef; // 0x8e1a9
    *v41 = v42;
    int64_t v43 = (int64_t)&g2; // 0x8e1e9
    int64_t v44 = ((int64_t)v9 ^ 2050) & v8 & v42; // 0x8e1e9
    if (*(char *)(*v5 + 2) != 0) {
        int64_t v45 = (int64_t)*(int16_t *)(*v5 + 3); // 0x8e225
        *(int64_t *)(v2 + v45) = v35;
        v43 = ((int64_t)&g2 - v45 ^ 32) + (int64_t)L"\n2";
        v44 = 0;
    }
    int32_t * v46 = (int32_t *)(v2 + 368); // 0x8e289
    int32_t v47 = *v46; // 0x8e289
    *v46 = ((int32_t)*(int16_t *)*v5 - v47 ^ 0x2bde36be) & v47;
    *v5 = *v5 + 5;
    return (v44 | v43) & 8;
}

// Address range: 0x8e2f7 - 0x8e2fc
int64_t function_8e2f7(void) {
    // 0x8e2f7
    return function_49cb0c45();
}

// Address range: 0x8eb79 - 0x8eef4
int64_t function_8eb79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8eb79
    int64_t v1; // 0x8eb79
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x8ebca
    int64_t v4 = *v3; // 0x8ebca
    *(int64_t *)v2 = v2 ^ 0x3d963418;
    *v3 = v4 + 0x35077473;
    int64_t v5 = v2 ^ 0x303583c1; // 0x8ec4f
    int64_t v6 = v4 + 0x653cf834; // 0x8ec88
    unsigned char v7 = *(char *)(v2 + 404); // 0x8ecc3
    int32_t * v8 = (int32_t *)(v2 + 35); // 0x8ecc9
    *v8 = *v8 & 0x3ed7367c;
    char v9 = v7 - 50; // 0x8eccf
    int64_t v10 = v5; // 0x8ecd3
    int64_t v11; // 0x8eb79
    bool v12; // 0x8eb79
    if (v9 == 0) {
        uint32_t v13 = (0x10000 * (int32_t)v6 >> 16) * (0x10000 * (int32_t)v5 >> 16); // 0x8ecd9
        int64_t v14 = v13 > 0x7fff; // 0x8ecde
        int64_t v15 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v9 == 0) | 128 * (int64_t)(v9 < 0) | v14 | 16 * (int64_t)(v7 % 16 > 17) | 4 * (int64_t)(llvm_ctpop_i8(v9) % 2 == 0) | 2048 * v14 | 2; // bp-8, 0x8ecde
        v10 = v5 & -0x10000 | (int64_t)(v13 % 0x10000);
        v11 = (int64_t)&v15;
    }
    char v16 = v7 - 80; // 0x8ece2
    int64_t v17 = v10; // 0x8ece6
    int64_t v18 = v11; // 0x8ece6
    if (v16 == 0) {
        int64_t v19 = (0x100000000 * v10 >> 32) * (0x100000000 * v6 >> 32); // 0x8ecec
        int64_t v20 = v19 > 0x7fffffff; // 0x8ecf0
        int64_t v21 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v16 == 0) | 128 * (int64_t)(v16 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v16) % 2 == 0) | v20 | 2048 * v20 | 2; // bp-16, 0x8ecf0
        v17 = v19 & 0xffffffff;
        v18 = (int64_t)&v21;
    }
    char v22 = v7 - 58; // 0x8ecff
    int64_t * v23; // 0x8eb79
    int64_t v24; // 0x8eb79
    if (v22 != 0) {
        // 0x8ecff
        v23 = (int64_t *)v18;
        v24 = v17;
    } else {
        unsigned char v25 = llvm_ctpop_i8(v22); // 0x8ecff
        int128_t v26 = (int128_t)v17 * (int128_t)v6; // 0x8ed09
        int64_t v27 = v26 > 0x7fffffffffffffff; // 0x8ed0d
        int64_t * v28 = (int64_t *)(v18 - 8);
        *v28 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v22 == 0) | 128 * (int64_t)(v22 < 0) | 16 * (int64_t)(v7 % 16 > 25) | 4 * (int64_t)(v25 % 2 == 0) | v27 | 2048 * v27 | 2;
        v23 = v28;
        v24 = v26;
    }
    int64_t * v29 = (int64_t *)(v2 + 113); // 0x8ed40
    *v29 = v24 + 0x37320ae;
    int64_t * v30 = (int64_t *)(v2 + 10); // 0x8eda2
    *v29 = v24 + 0x1a44e4ef;
    if (*(char *)*v30 != 0) {
        // 0x8edcb
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v30 + 1)) = *v23;
    }
    int64_t v31 = *(int64_t *)(v2 + 271); // 0x8ee3c
    uint16_t v32 = *(int16_t *)(*v30 + 3); // 0x8ee74
    int32_t * v33 = (int32_t *)(v2 + 368); // 0x8eead
    *v33 = *v33 - (int32_t)v32;
    *v30 = *v30 + 5;
    return ((int64_t)v32 & (int64_t)&g3) + v31;
}

// Address range: 0x957d9 - 0x95887
int64_t function_957d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t result, int64_t a16) {
    // 0x957d9
    int64_t v1; // 0x957d9
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x957ea
    int64_t v3 = *v2; // 0x957ea
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0x957fb
    int64_t v5 = v1 + (int64_t)*(int16_t *)(v3 + 4); // 0x95820
    *(int64_t *)v5 = *(int64_t *)v4;
    uint32_t v6 = *(int32_t *)*v2; // 0x95848
    *(int64_t *)(v5 + 8) = *(int64_t *)(v1 + 187) + (int64_t)v6;
    *(int32_t *)(v1 + 476) = 0;
    return result;
}

// Address range: 0x95887 - 0x95b5c
int64_t function_95887(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x95887
    int64_t v1; // 0x95887
    int64_t v2 = v1;
    int64_t v3 = v2 + 35; // 0x958e5
    int32_t * v4 = (int32_t *)v3; // 0x958ec
    *v4 = *v4 - 0x387407b9;
    int32_t * v5 = (int32_t *)(v2 + 368); // 0x95911
    *v5 = *v5 & 0x1000068;
    int64_t v6 = *(int64_t *)(v2 + 113) - 0x1a44e4ef; // 0x95978
    int64_t v7 = *(int64_t *)(v2 + 129); // 0x9598c
    int64_t v8 = v7 + 0x1a44e4ef; // 0x9598f
    char v9 = *(char *)(v2 + 404); // 0x959a0
    if (v9 == 98) {
        // 0x959ac
        *(char *)v8 = (char)v6;
    }
    if (v9 == 50) {
        // 0x959b7
        *(int16_t *)v8 = (int16_t)v6;
    }
    int64_t v10 = v8; // 0x959bd
    if (v9 == 80) {
        // 0x959c3
        *(int32_t *)v8 = (int32_t)v6;
        v10 = v8;
        if (*(char *)(v2 + 367) != 0) {
            int64_t v11 = v7 + 0x1a44e4f3; // 0x959d9
            *(int32_t *)v11 = 0;
            v10 = v11;
        }
    }
    if (v9 == 58) {
        // 0x959ef
        *(int64_t *)v10 = v6;
    }
    int32_t v12 = *v4; // 0x959fc
    uint32_t v13 = v12 & 2; // 0x959fe
    if (v13 != 0) {
        // 0x95a0e
        *v4 = v12 + 0x2cd392b6;
    }
    int32_t v14 = *v5 ^ 0x6367b3dd; // 0x95a3c
    *v5 = v14;
    int64_t * v15 = (int64_t *)(v2 + 10); // 0x95a89
    *v5 = (v14 ^ (int32_t)*(int16_t *)*v15) - 0x2f1222e2 & v14;
    *v15 = *v15 + 2;
    return -((v2 + 352 & 0x7fffffdf | 32)) ^ 32 ^ (v2 + 148 | (int64_t)v13) - v3 & 128;
}

// Address range: 0x95b5e - 0x95b60
int64_t function_95b5e(void) {
    // 0x95b5e
    int64_t result; // 0x95b5e
    return result;
}

// Address range: 0x95b67 - 0x95b69
int64_t function_95b67(void) {
    // 0x95b67
    int64_t result; // 0x95b67
    return result;
}

// Address range: 0x9c3f7 - 0x9c74a
int64_t function_9c3f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x9c3f7
    int64_t v1; // 0x9c3f7
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x9c419
    int64_t v3 = *v2; // 0x9c419
    int64_t v4 = v1 + (int64_t)*(int16_t *)(v3 + 3); // 0x9c434
    char v5 = *(char *)(v3 + 2); // 0x9c468
    if (v5 == 38) {
        int32_t * v6 = (int32_t *)v4; // 0x9c489
        *v6 = *v6 & -2;
    }
    if (v5 == -63) {
        int32_t * v7 = (int32_t *)v4; // 0x9c4c2
        *v7 = *v7 & (int32_t)((int64_t)&g2 ^ -1);
        int32_t * v8 = (int32_t *)(v1 + 409); // 0x9c4e2
        *v8 = *v8 & (int32_t)((int64_t)&g2 ^ -1);
    }
    if (v5 == -29) {
        int32_t * v9 = (int32_t *)v4; // 0x9c51c
        *v9 = *v9 & (int32_t)((int64_t)&g1 ^ -1);
        int32_t * v10 = (int32_t *)(v1 + 409); // 0x9c533
        *v10 = *v10 & (int32_t)((int64_t)&g1 ^ -1);
    }
    if (v5 == -14) {
        int32_t * v11 = (int32_t *)v4; // 0x9c54d
        uint32_t v12 = *v11; // 0x9c54d
        if (v12 % 2 == 0) {
            // 0x9c590
            *v11 = v12 | 1;
        } else {
            // 0x9c571
            *v11 = v12 & -2;
        }
    }
    if (v5 == 116) {
        int32_t * v13 = (int32_t *)v4; // 0x9c5df
        *v13 = *v13 | 1;
    }
    if (v5 == -31) {
        int32_t * v14 = (int32_t *)v4; // 0x9c61b
        *v14 = *v14 | (int32_t)&g2;
        int32_t * v15 = (int32_t *)(v1 + 409); // 0x9c62b
        *v15 = *v15 | (int32_t)&g2;
    }
    if (v5 == 83) {
        int32_t * v16 = (int32_t *)v4; // 0x9c64f
        *v16 = *v16 | (int32_t)&g1;
        int32_t * v17 = (int32_t *)(v1 + 409); // 0x9c665
        *v17 = *v17 | (int32_t)&g1;
    }
    uint16_t v18 = *(int16_t *)*v2; // 0x9c6c2
    int32_t * v19 = (int32_t *)(v1 + 368); // 0x9c6f6
    *v19 = *v19 - (int32_t)v18;
    *v2 = *v2 + 5;
    return (int64_t)v18 & (int64_t)&g3;
}

// Address range: 0x9c74a - 0x9ca8d
int64_t function_9c74a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9c74a
    int64_t v1; // 0x9c74a
    int64_t result = v1 + 10; // 0x9c75d
    int64_t * v2 = (int64_t *)result; // 0x9c77e
    int64_t v3 = *v2; // 0x9c77e
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 9)); // 0x9c7cf
    int64_t v5 = *v4; // 0x9c7cf
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 2)); // 0x9c7d8
    uint16_t v7 = *(int16_t *)*v6; // 0x9c7e1
    uint16_t v8 = *(int16_t *)v5; // 0x9c7e5
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0x9c829
    int64_t v10; // 0x9c74a
    if (((*(int64_t *)(v1 + 409) | v9) & (int64_t)&g2) == 0) {
        // 0x9c906
        *v4 = v5 + 2;
        v10 = *v6 + 2;
    } else {
        // 0x9c8e5
        *v4 = v5 - 2;
        v10 = *v6 - 2;
    }
    // 0x9c925
    *v6 = v10;
    int64_t v11 = *v2; // 0x9c951
    int64_t v12 = v11; // 0x9c97a
    if (*(char *)(v11 + 6) != 0) {
        int16_t v13 = v8 - v7; // 0x9c7e5
        unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x9c7e5
        uint16_t v15 = *(int16_t *)(v11 + 7); // 0x9c9b5
        bool v16; // 0x9c74a
        *(int64_t *)(v1 + (int64_t)v15) = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v8 < v7) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v8 % 16 - v7 % 16 > 15) | 2048 * (int64_t)(((v13 ^ v8) & (v8 ^ v7)) < 0) | 4 * (int64_t)(v14 % 2 == 0) | 2;
        v12 = *v2;
    }
    // 0x9c9c5
    *v2 = v12 + 11;
    return result;
}

// Address range: 0xa3a4b - 0xa3dc7
int64_t function_a3a4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa3a4b
    int64_t v1; // 0xa3a4b
    int64_t result = v1 + 10; // 0xa3a58
    int64_t * v2 = (int64_t *)result; // 0xa3a6f
    int64_t v3 = *v2; // 0xa3a6f
    int32_t * v4 = (int32_t *)(v1 + 368); // 0xa3acb
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0xa3ad8
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0xa3b03
    int32_t * v7 = (int32_t *)(v1 + 35); // 0xa3b10
    *v7 = *v4 + 0x17082142 + *v7;
    *(char *)v5 = *(char *)v6;
    *v7 = *v7 & 0x235dc980;
    int64_t v8 = *v2; // 0xa3b91
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v8 + 6)); // 0xa3bab
    int64_t v10 = v1 + (int64_t)*(int16_t *)(v8 + 4); // 0xa3c34
    int64_t * v11 = (int64_t *)(v1 + (int64_t)*(int16_t *)v8);
    int64_t v12 = *v11;
    if (((*(int64_t *)(v1 + 409) | v9) & (int64_t)&g2) == 0) {
        // 0xa3c7a
        *v11 = v12 + 1;
        int64_t * v13 = (int64_t *)v10; // 0xa3c8b
        *v13 = *v13 + 1;
    } else {
        // 0xa3c5d
        *v11 = v12 - 1;
        int64_t * v14 = (int64_t *)v10; // 0xa3c64
        *v14 = *v14 - 1;
    }
    int32_t v15 = *v7; // 0xa3caa
    int32_t v16 = v15; // 0xa3cbb
    if ((v15 & 2) != 0) {
        // 0xa3cc1
        v16 = v15 | 0x6b7f9c53;
        *v7 = v16;
    }
    // 0xa3cdb
    *v7 = (*v4 ^ 0x4c01b89) + v16;
    *v4 = ((int32_t)*(int16_t *)(*v2 + 2) ^ 0x712d507b) + *v4;
    *v2 = *v2 + 9;
    return result;
}

// Address range: 0xa3dc9 - 0xa3dce
int64_t function_a3dc9(void) {
    // 0xa3dc9
    return function_48f5c717();
}

// Address range: 0xa8450 - 0xa87b6
int64_t function_a8450(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xa8450
    int64_t v1; // 0xa8450
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xa8477
    *v3 = *v3 + 0x653cf834;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x7637defd;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0xa8515
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v4 + 3)); // 0xa853c
    int64_t v6 = v2 + 0x7637defd; // 0xa8559
    uint64_t v7 = *v3; // 0xa857d
    char v8 = *(char *)(v2 + 404); // 0xa85b4
    int64_t v9 = v5; // 0xa85bb
    int64_t v10 = v6; // 0xa85bb
    if (v8 == 98) {
        unsigned char v11 = (char)v7 % 32; // 0xa85c2
        bool v12 = (v5 & (int64_t)L"\n2") != 0; // 0xa85c2
        v10 = v6;
        bool v13 = v5 % 2 != 0; // 0xa85c2
        if (v11 != 0) {
            char v14 = v6; // 0xa85c2
            unsigned char v15 = v11 - 1; // 0xa85c2
            unsigned char v16 = (char)(v5 % 2 != 0) << v15 | v14 << v11 | (char)((int16_t)v6 % 256 >> (int16_t)(9 - v11)); // 0xa85c2
            char v17 = (v14 << v15) / 128; // 0xa85c2
            v12 = v11 == 1 ? v16 / 128 != v17 : (v5 & (int64_t)L"\n2") != 0;
            v10 = v6 & -256 | (int64_t)v16;
            v13 = v17 != 0;
        }
        v9 = 16 * (int64_t)((v5 & 16) != 0) | 4 * (int64_t)((v5 & 4) != 0) | 64 * (int64_t)((v5 & 64) != 0) | 128 * (int64_t)((char)v5 < 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | 2048 * (int64_t)v12 | (int64_t)v13 | 2;
    }
    uint64_t v18 = v9;
    int64_t v19 = v18; // 0xa85d0
    int64_t v20 = v10; // 0xa85d0
    if (v8 == 50) {
        uint16_t v21 = (int16_t)v7 % 32; // 0xa85e1
        bool v22 = (v18 & (int64_t)L"\n2") != 0; // 0xa85e1
        v20 = v10;
        bool v23 = v18 % 2 != 0; // 0xa85e1
        if (v21 != 0) {
            int16_t v24 = v10; // 0xa85e1
            uint16_t v25 = v21 - 1; // 0xa85e1
            uint16_t v26 = (int16_t)(v18 % 2 != 0) << v25 | v24 << v21 | (int16_t)((int32_t)v10 % 0x10000 >> (int32_t)(17 - v21)); // 0xa85e1
            int16_t v27 = (v24 << v25) / 0x8000; // 0xa85e1
            v22 = v21 == 1 ? v26 / 0x8000 != v27 : (v18 & (int64_t)L"\n2") != 0;
            v20 = v10 & -0x10000 | (int64_t)v26;
            v23 = v27 != 0;
        }
        v19 = 16 * (int64_t)((v18 & 16) != 0) | 4 * (int64_t)((v18 & 4) != 0) | 64 * (int64_t)((v18 & 64) != 0) | 128 * (int64_t)((char)v18 < 0) | 256 * (int64_t)((v18 & 256) != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | 2048 * (int64_t)v22 | (int64_t)v23 | 2;
    }
    uint64_t v28 = v19;
    int64_t v29 = v28; // 0xa85f0
    int64_t v30 = v20; // 0xa85f0
    if (v8 == 80) {
        uint32_t v31 = (int32_t)v7 % 32; // 0xa85f7
        bool v32 = (v28 & (int64_t)L"\n2") != 0; // 0xa85f7
        v30 = v20;
        bool v33 = v28 % 2 != 0; // 0xa85f7
        if (v31 != 0) {
            int32_t v34 = v20; // 0xa85f7
            uint32_t v35 = v31 - 1; // 0xa85f7
            int32_t v36 = v34 << v31 | (int32_t)((v20 & 0xffffffff) >> (int64_t)(33 - v31)) | (int32_t)(v28 % 2 != 0) << v35; // 0xa85f7
            v32 = v31 == 1 ? v36 < 0 != v34 << v35 < 0 : (v28 & (int64_t)L"\n2") != 0;
            v30 = v36;
            v33 = v34 << v35 < 0;
        }
        v29 = 16 * (int64_t)((v28 & 16) != 0) | 4 * (int64_t)((v28 & 4) != 0) | 64 * (int64_t)((v28 & 64) != 0) | 128 * (int64_t)((char)v28 < 0) | 256 * (int64_t)((v28 & 256) != 0) | 512 * (int64_t)((v28 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v28 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v28 & (int64_t)"le") != 0) | 2048 * (int64_t)v32 | (int64_t)v33 | 2;
    }
    int64_t v37 = v30;
    uint64_t v38 = v29;
    int64_t v39 = v38; // 0xa85ff
    int64_t v40 = v37; // 0xa85ff
    if (v8 == 58) {
        uint64_t v41 = v7 % 64; // 0xa8606
        bool v42 = (v38 & (int64_t)L"\n2") != 0; // 0xa8606
        v40 = v37;
        bool v43 = v38 % 2 != 0; // 0xa8606
        if (v41 != 0) {
            uint64_t v44 = v41 - 1; // 0xa8606
            v40 = v37 << v41 | (int64_t)((int128_t)v37 >> (int128_t)(65 - v41)) | (int64_t)(v38 % 2 != 0) << v44;
            int64_t v45 = (v37 << v44) / 0x8000000000000000; // 0xa8606
            v42 = v41 == 1 ? v40 >> 63 != v45 : (v38 & (int64_t)L"\n2") != 0;
            v43 = v45 != 0;
        }
        v39 = 16 * (int64_t)((v38 & 16) != 0) | 4 * (int64_t)((v38 & 4) != 0) | 64 * (int64_t)((v38 & 64) != 0) | 128 * (int64_t)((char)v38 < 0) | 256 * (int64_t)((v38 & 256) != 0) | 512 * (int64_t)((v38 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v38 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v38 & (int64_t)"le") != 0) | 2048 * (int64_t)v42 | (int64_t)v43 | 2;
    }
    int64_t v46 = v40 + 0x24aa19cd; // 0xa8614
    int64_t * v47 = (int64_t *)(v2 + 113); // 0xa8628
    *v47 = v46;
    int64_t v48 = *v4; // 0xa8651
    int64_t v49 = v46; // 0xa8669
    if (*(char *)(v48 + 2) != 0) {
        // 0xa866f
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v48 + 3)) = v39;
        v49 = *v47;
    }
    // 0xa8694
    *v47 = v49 - 0xa6534de;
    int32_t * v50 = (int32_t *)(v2 + 368); // 0xa8769
    int32_t v51 = *v50; // 0xa8769
    uint32_t v52 = v51 + (int32_t)*(int16_t *)*v4; // 0xa8769
    *v50 = v52 + v51;
    *v4 = *v4 + 5;
    return (int64_t)v52 & (int64_t)&g3;
}

// Address range: 0xaef02 - 0xaf26d
int64_t function_aef02(int64_t a1, int64_t a2) {
    // 0xaef02
    int64_t v1; // 0xaef02
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xaef21
    int64_t v3 = *v2; // 0xaef21
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 2)); // 0xaef6b
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0xaef7b
    int64_t v6 = *v5; // 0xaef7b
    unsigned char v7 = *(char *)*v4; // 0xaef81
    unsigned char v8 = *(char *)v6; // 0xaef84
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0xaefbd
    int64_t v10; // 0xaef02
    if (((*(int64_t *)(v1 + 409) | v9) & (int64_t)&g2) == 0) {
        // 0xaf096
        *v5 = v6 + 1;
        v10 = *v4 + 1;
    } else {
        // 0xaf081
        *v5 = v6 - 1;
        v10 = *v4 - 1;
    }
    // 0xaf0bd
    *v4 = v10;
    int64_t v11 = *v2; // 0xaf11b
    if (*(char *)(v11 + 10) != 0) {
        char v12 = v8 - v7; // 0xaef84
        unsigned char v13 = llvm_ctpop_i8(v12); // 0xaef84
        uint16_t v14 = *(int16_t *)(v11 + 6); // 0xaf176
        bool v15; // 0xaef02
        *(int64_t *)(v1 + (int64_t)v14) = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | (int64_t)(v8 < v7) | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v8 % 16 - v7 % 16 > 15) | 4 * (int64_t)(v13 % 2 == 0) | 2048 * (int64_t)(((v12 ^ v8) & (v8 ^ v7)) < 0) | 2;
    }
    int32_t * v16 = (int32_t *)(v1 + 368); // 0xaf19d
    int32_t v17 = *v16 + *(int32_t *)(v1 + 35); // 0xaf19d
    *v16 = v17;
    int64_t v18 = *(int64_t *)(v1 + 271); // 0xaf1be
    int64_t v19 = *v2; // 0xaf1dc
    uint16_t v20 = *(int16_t *)(v19 + 8); // 0xaf1ec
    int64_t v21 = *(int64_t *)(v18 + (int64_t)((v17 + 0x8f09 + (int32_t)v20) % 0x10000)); // 0xaf24c
    *v2 = v19 + 11;
    return v21 & (int64_t)&g2;
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

// Address range: 0xb1fd5 - 0xb2342
int64_t function_b1fd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb1fd5
    int64_t v1; // 0xb1fd5
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xb2016
    *v3 = *v3 - 0x47ada13;
    *(int64_t *)v2 = v2 ^ 0x6414659e;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0xb208c
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v4 + 3)); // 0xb20a3
    int64_t v6 = v2 ^ 0x69b7d247; // 0xb20d0
    int64_t v7 = *v3 + 0x69b7d247; // 0xb20f2
    char v8 = *(char *)(v2 + 404); // 0xb2116
    int64_t v9 = v5; // 0xb211d
    int64_t v10 = v6; // 0xb211d
    if (v8 == 98) {
        unsigned char v11 = (char)v7 % 32; // 0xb2124
        bool v12 = (v5 & (int64_t)L"\n2") != 0; // 0xb2124
        bool v13 = v5 % 2 != 0; // 0xb2124
        v10 = v6;
        if (v11 != 0) {
            char v14 = v6; // 0xb2124
            unsigned char v15 = v11 - 1; // 0xb2124
            unsigned char v16 = (char)(v5 % 2 != 0) << v15 | v14 << v11 | (char)((int16_t)v6 % 256 >> (int16_t)(9 - v11)); // 0xb2124
            char v17 = (v14 << v15) / 128; // 0xb2124
            v12 = v11 == 1 ? v16 / 128 != v17 : (v5 & (int64_t)L"\n2") != 0;
            v13 = v17 != 0;
            v10 = v6 & -256 | (int64_t)v16;
        }
        v9 = 16 * (int64_t)((v5 & 16) != 0) | 4 * (int64_t)((v5 & 4) != 0) | 64 * (int64_t)((v5 & 64) != 0) | 128 * (int64_t)((char)v5 < 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | (int64_t)v13 | 2048 * (int64_t)v12 | 2;
    }
    uint64_t v18 = v9;
    int64_t v19 = v18; // 0xb2132
    int64_t v20 = v10; // 0xb2132
    if (v8 == 50) {
        uint16_t v21 = (int16_t)v7 % 32; // 0xb2140
        bool v22 = (v18 & (int64_t)L"\n2") != 0; // 0xb2140
        bool v23 = v18 % 2 != 0; // 0xb2140
        v20 = v10;
        if (v21 != 0) {
            int16_t v24 = v10; // 0xb2140
            uint16_t v25 = v21 - 1; // 0xb2140
            uint16_t v26 = (int16_t)(v18 % 2 != 0) << v25 | v24 << v21 | (int16_t)((int32_t)v10 % 0x10000 >> (int32_t)(17 - v21)); // 0xb2140
            int16_t v27 = (v24 << v25) / 0x8000; // 0xb2140
            v22 = v21 == 1 ? v26 / 0x8000 != v27 : (v18 & (int64_t)L"\n2") != 0;
            v23 = v27 != 0;
            v20 = v10 & -0x10000 | (int64_t)v26;
        }
        v19 = 16 * (int64_t)((v18 & 16) != 0) | 4 * (int64_t)((v18 & 4) != 0) | 64 * (int64_t)((v18 & 64) != 0) | 128 * (int64_t)((char)v18 < 0) | 256 * (int64_t)((v18 & 256) != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | (int64_t)v23 | 2048 * (int64_t)v22 | 2;
    }
    uint64_t v28 = v19;
    int64_t v29 = v28; // 0xb2149
    int64_t v30 = v20; // 0xb2149
    if (v8 == 80) {
        uint32_t v31 = (int32_t)v7 % 32; // 0xb2153
        bool v32 = (v28 & (int64_t)L"\n2") != 0; // 0xb2153
        bool v33 = v28 % 2 != 0; // 0xb2153
        v30 = v20;
        if (v31 != 0) {
            int32_t v34 = v20; // 0xb2153
            uint32_t v35 = v31 - 1; // 0xb2153
            int32_t v36 = v34 << v31 | (int32_t)((v20 & 0xffffffff) >> (int64_t)(33 - v31)) | (int32_t)(v28 % 2 != 0) << v35; // 0xb2153
            v32 = v31 == 1 ? v36 < 0 != v34 << v35 < 0 : (v28 & (int64_t)L"\n2") != 0;
            v33 = v34 << v35 < 0;
            v30 = v36;
        }
        v29 = 16 * (int64_t)((v28 & 16) != 0) | 4 * (int64_t)((v28 & 4) != 0) | 64 * (int64_t)((v28 & 64) != 0) | 128 * (int64_t)((char)v28 < 0) | 256 * (int64_t)((v28 & 256) != 0) | 512 * (int64_t)((v28 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v28 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v28 & (int64_t)"le") != 0) | (int64_t)v33 | 2048 * (int64_t)v32 | 2;
    }
    int64_t v37 = v30;
    uint64_t v38 = v29;
    int64_t v39 = v38; // 0xb2169
    int64_t v40 = v37; // 0xb2169
    if (v8 == 58) {
        uint64_t v41 = v7 % 64; // 0xb2177
        bool v42 = (v38 & (int64_t)L"\n2") != 0; // 0xb2177
        bool v43 = v38 % 2 != 0; // 0xb2177
        v40 = v37;
        if (v41 != 0) {
            uint64_t v44 = v41 - 1; // 0xb2177
            v40 = v37 << v41 | (int64_t)((int128_t)v37 >> (int128_t)(65 - v41)) | (int64_t)(v38 % 2 != 0) << v44;
            int64_t v45 = (v37 << v44) / 0x8000000000000000; // 0xb2177
            v42 = v41 == 1 ? v40 >> 63 != v45 : (v38 & (int64_t)L"\n2") != 0;
            v43 = v45 != 0;
        }
        v39 = 16 * (int64_t)((v38 & 16) != 0) | 4 * (int64_t)((v38 & 4) != 0) | 64 * (int64_t)((v38 & 64) != 0) | 128 * (int64_t)((char)v38 < 0) | 256 * (int64_t)((v38 & 256) != 0) | 512 * (int64_t)((v38 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v38 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v38 & (int64_t)"le") != 0) | (int64_t)v43 | 2048 * (int64_t)v42 | 2;
    }
    int64_t * v46 = (int64_t *)(v2 + 113); // 0xb21b4
    *v46 = v40 ^ 0x1c051838;
    int32_t * v47 = (int32_t *)(v2 + 368); // 0xb21f5
    *v47 = *v47 & *(int32_t *)(v2 + 35);
    *v46 = v40 + 0x1a44e4ef;
    int64_t v48 = *v4; // 0xb2219
    int64_t v49 = v48; // 0xb2239
    int64_t v50 = 0; // 0xb2239
    int64_t v51 = v7; // 0xb2239
    if (*(char *)(v48 + 2) != 0) {
        int64_t v52 = v2 + (int64_t)*(int16_t *)(v48 + 3); // 0xb2281
        *(int64_t *)v52 = v39;
        v49 = *v4;
        v50 = v52 & 18;
        v51 = 0;
    }
    int64_t v53 = *(int64_t *)(v2 + 271); // 0xb229a
    int32_t v54 = (int32_t)*(int16_t *)v49; // 0xb22f1
    int32_t v55 = *v47; // 0xb22f1
    *v47 = -v54;
    *v4 = *v4 + 5;
    return ((int64_t)(v55 + v54) & (int64_t)&g3) + v53 | (v51 & v50 | -0x7ffffffc) + (v53 | 18);
}

// Address range: 0xb2346 - 0xb2350
int64_t function_b2346(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xb2346
    int64_t v1; // 0xb2346
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 119); // 0xb2348
    *v3 = *v3 + (char)a4;
    return function_acca498();
}

// Address range: 0xb5d7c - 0xb60e0
int64_t function_b5d7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb5d7c
    int64_t v1; // 0xb5d7c
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xb5d99
    int64_t v3 = *v2; // 0xb5d99
    int64_t v4 = v1 ^ a6; // 0xb5da6
    int64_t v5 = v4 | (int64_t)&g3 - v1; // 0xb5dc1
    int64_t v6 = v1 + (int64_t)*(int16_t *)v3; // 0xb5dc7
    int64_t v7 = v3 + 4; // 0xb5de3
    unsigned char v8 = *(char *)v7; // 0xb5dea
    int64_t v9 = v8; // 0xb5dea
    int64_t v10 = v5; // 0xb5dee
    int64_t v11 = v5; // 0xb5dee
    int64_t v12 = v6 & v4; // 0xb5dee
    int64_t v13 = v6 + v1; // 0xb5dee
    int64_t v14; // 0xb5d7c
    if (v8 == 38) {
        int32_t * v15 = (int32_t *)v6; // 0xb5e19
        *v15 = *v15 & -2;
        v10 = 0;
        v11 = v5 & (int64_t)&g2 & 16;
        v12 = 18;
        v13 = v9 & 18;
        v14 = -2;
    }
    int64_t v16 = v1 & -256 | v9; // 0xb5dea
    int64_t v17 = v10; // 0xb5e2b
    int64_t v18 = v7; // 0xb5e2b
    int64_t v19 = v11; // 0xb5e2b
    int64_t v20 = v12; // 0xb5e2b
    int64_t v21 = v13; // 0xb5e2b
    int64_t v22 = v14; // 0xb5e2b
    if (v8 == -63) {
        int64_t v23 = v11 + v6; // 0xb5e31
        v17 = v23 & v10;
        int32_t * v24 = (int32_t *)v6; // 0xb5e4e
        *v24 = *v24 & (int32_t)((int64_t)&g2 ^ -1);
        v18 = v1 + 409;
        int32_t * v25 = (int32_t *)v18; // 0xb5e65
        *v25 = *v25 & (int32_t)((int64_t)&g2 ^ -1);
        v19 = v23 | 120;
        v20 = ((v12 | 8) - v7 ^ v17) & 8;
        v21 = v10 ^ v16;
        v22 = (int64_t)&g2 ^ -1;
    }
    int64_t v26 = v17; // 0xb5e74
    int64_t v27 = v18; // 0xb5e74
    int64_t v28 = v19; // 0xb5e74
    int64_t v29 = v20; // 0xb5e74
    int64_t v30 = v22; // 0xb5e74
    if (v8 == -29) {
        int32_t * v31 = (int32_t *)v6; // 0xb5e8b
        *v31 = *v31 & (int32_t)((int64_t)&g1 ^ -1);
        int64_t v32 = v17 - 0x7fffff80; // 0xb5e8e
        int64_t v33 = v19 | v32; // 0xb5ea1
        v27 = v1 + 409;
        int32_t * v34 = (int32_t *)v27; // 0xb5eb4
        *v34 = *v34 & (int32_t)((int64_t)&g1 ^ -1);
        v26 = v33 + v32;
        v28 = (v33 ^ v27) & v6;
        v29 = 0;
        v30 = (int64_t)&g1 ^ -1;
    }
    int64_t v35 = v26; // 0xb5ec0
    int64_t v36 = v28; // 0xb5ec0
    int64_t v37 = v21; // 0xb5ec0
    if (v8 == -14) {
        int64_t v38 = v30 & v28; // 0xb5ec9
        int32_t * v39 = (int32_t *)v6; // 0xb5ecc
        uint32_t v40 = *v39; // 0xb5ecc
        int64_t v41; // 0xb5d7c
        int64_t v42; // 0xb5d7c
        int32_t v43; // 0xb5d7c
        if (v40 % 2 == 0) {
            // 0xb5f16
            v43 = v40 | 1;
            v42 = (v26 | 0x7fffffff) + v6;
            v36 = (int64_t)&g1;
            v41 = v38;
            v37 = v21 - 32 | 120;
        } else {
            // 0xb5ef1
            v43 = v40 & -2;
            v42 = v26;
            v36 = (v38 & v27) + 2;
            v41 = v16;
            v37 = v6;
        }
        // 0xb5f3a
        *v39 = v43;
        v35 = v42 - (v41 & v29 - v21);
    }
    int64_t v44 = v36; // 0xb5f46
    int64_t v45 = v37; // 0xb5f46
    if (v8 == 116) {
        int32_t * v46 = (int32_t *)v6; // 0xb5f64
        *v46 = *v46 | 1;
        v44 = (v36 ^ 32) + 16;
        v45 = (int64_t)&g2;
    }
    int64_t v47 = v35; // 0xb5f7a
    int64_t v48 = v44; // 0xb5f7a
    if (v8 == -31) {
        int32_t * v49 = (int32_t *)v6; // 0xb5f8a
        *v49 = *v49 | (int32_t)&g2;
        int32_t * v50 = (int32_t *)(v1 + 409); // 0xb5fa7
        *v50 = *v50 | (int32_t)&g2;
        v47 = v45 | v35;
        v48 = v44 | v6;
    }
    int64_t v51 = v48; // 0xb5fac
    if (v8 == 83) {
        int32_t * v52 = (int32_t *)v6; // 0xb5fbf
        *v52 = *v52 | (int32_t)&g1;
        int32_t * v53 = (int32_t *)(v1 + 409); // 0xb5fea
        *v53 = *v53 | (int32_t)&g1;
        v51 = v6 - v47 + v48 | 2;
    }
    int32_t * v54 = (int32_t *)(v1 + 368); // 0xb6077
    *v54 = *v54 & -1 - (int32_t)*(int16_t *)(*v2 + 2);
    *v2 = *v2 + 5;
    return 2 * (v51 & (v16 ^ 0x7fffffffffffffff)) - v1;
}

// Address range: 0xb60e2 - 0xb60e4
int64_t function_b60e2(void) {
    // 0xb60e2
    int64_t result; // 0xb60e2
    return result;
}

// Address range: 0xb60e7 - 0xb60ed
int64_t function_b60e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xb60e7
    int64_t v1; // 0xb60e7
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 127); // 0xb60e9
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0xbc676 - 0xbc9b8
int64_t function_bc676(void) {
    // 0xbc676
    int64_t v1; // 0xbc676
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0xbc68d
    *v3 = *v3 ^ 0x54da429b;
    *(int64_t *)v2 = v2 ^ 0x5ba0ad28;
    *v3 = *v3 ^ 0x46ddc1b7;
    int64_t v4 = v2 ^ 0x56031af1; // 0xbc724
    int64_t * v5 = (int64_t *)(v2 + 10); // 0xbc74a
    uint64_t v6 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v5 + 3)); // 0xbc777
    char v7 = *(char *)(v2 + 404); // 0xbc79b
    int64_t v8 = v6; // 0xbc7a0
    int64_t v9 = v4; // 0xbc7a0
    if (v7 == 98) {
        unsigned char v10 = (char)v4; // 0xbc7a7
        char v11 = v10 + 1; // 0xbc7a7
        unsigned char v12 = llvm_ctpop_i8(v11); // 0xbc7a7
        v8 = 64 * (int64_t)(v11 == 0) | 16 * (int64_t)(v10 % 16 == 15) | 128 * (int64_t)(v11 < 0) | 2048 * (int64_t)((v11 & (v10 ^ -128)) < 0) | 4 * (int64_t)(v12 % 2 == 0) | (int64_t)(v6 % 2 != 0) | 256 * (int64_t)((v6 & 256) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | 2;
        v9 = v4 & -256 | (int64_t)v11;
    }
    int64_t v13 = v8;
    int64_t v14 = v13; // 0xbc7b1
    int64_t v15 = v9; // 0xbc7b1
    if (v7 == 50) {
        uint16_t v16 = (int16_t)v9; // 0xbc7b8
        int16_t v17 = v16 + 1; // 0xbc7b8
        unsigned char v18 = llvm_ctpop_i8((char)v17); // 0xbc7b8
        v14 = 256 * (int64_t)((v13 & 256) != 0) | (int64_t)(v13 % 2 != 0) | 512 * (int64_t)((v13 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v13 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v13 & (int64_t)"le") != 0) | 64 * (int64_t)(v17 == 0) | 16 * (int64_t)(v16 % 16 == 15) | 128 * (int64_t)(v17 < 0) | 2048 * (int64_t)((v17 & (v16 ^ -0x8000)) < 0) | 4 * (int64_t)(v18 % 2 == 0) | 2;
        v15 = v9 & -0x10000 | (int64_t)v17;
    }
    int64_t v19 = v14;
    int64_t v20 = v19; // 0xbc7bf
    int64_t v21 = v15; // 0xbc7bf
    if (v7 == 80) {
        uint32_t v22 = (int32_t)v15; // 0xbc7d4
        int32_t v23 = v22 + 1; // 0xbc7d4
        unsigned char v24 = llvm_ctpop_i8((char)v23); // 0xbc7d4
        v20 = 256 * (int64_t)((v19 & 256) != 0) | (int64_t)(v19 % 2 != 0) | 512 * (int64_t)((v19 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v19 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v19 & (int64_t)"le") != 0) | 64 * (int64_t)(v23 == 0) | 16 * (int64_t)(v22 % 16 == 15) | 128 * (int64_t)(v23 < 0) | 2048 * (int64_t)((v23 & (v22 ^ -0x80000000)) < 0) | 4 * (int64_t)(v24 % 2 == 0) | 2;
        v21 = v23;
    }
    int64_t v25 = v21;
    int64_t v26 = v20;
    int64_t v27 = v26; // 0xbc7e1
    int64_t v28 = v25; // 0xbc7e1
    if (v7 == 58) {
        // 0xbc7e7
        v28 = v25 + 1;
        unsigned char v29 = llvm_ctpop_i8((char)v28); // 0xbc7e8
        v27 = 256 * (int64_t)((v26 & 256) != 0) | (int64_t)(v26 % 2 != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | 64 * (int64_t)(v28 == 0) | 16 * (int64_t)(v25 % 16 == 15) | 128 * (int64_t)(v28 < 0) | 2048 * (int64_t)((v28 & (v25 ^ -0x8000000000000000)) < 0) | 4 * (int64_t)(v29 % 2 == 0) | 2;
    }
    int64_t v30 = v27;
    int64_t v31 = v2 + 113; // 0xbc810
    int64_t * v32 = (int64_t *)v31; // 0xbc81a
    *v32 = v28;
    int64_t v33 = *v5; // 0xbc842
    int64_t v34 = v28; // 0xbc85f
    int64_t v35 = 0; // 0xbc85f
    int64_t v36 = 0; // 0xbc85f
    if (*(char *)v33 != 0) {
        // 0xbc865
        v36 = v2 + (int64_t)*(int16_t *)(v33 + 3);
        *(int64_t *)v36 = v30;
        v34 = *v32;
        v35 = -34;
    }
    int64_t v37 = v36;
    *v32 = v34 + 0x1a44e4ef;
    uint16_t v38 = *(int16_t *)(*v5 + 1); // 0xbc943
    int64_t v39 = *(int64_t *)(v2 + 271); // 0xbc94a
    *v3 = 0x2a47c812 - (int32_t)v38 + *v3;
    *v5 = *v5 + 5;
    return (v30 & v31 & (v37 | v35)) - ((v37 ^ 4) + v30) ^ (int64_t)v38 ^ ((v1 ^ v2) & 120) - v39;
}

// Address range: 0xbc9bd - 0xbc9c0
int64_t function_bc9bd(void) {
    // 0xbc9bd
    int64_t result; // 0xbc9bd
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
    int64_t v10 = *(int64_t *)v9 & (int64_t)&g2; // 0xbfd13
    *v5 = ((v10 | v8 & (int64_t)&g2) == 0 ? 2 : -2) + v6;
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
        result = v19 & (4 - (((v3 + (v1 | a3) ^ (int64_t)L"\n2") + 112 & v3) + v9 & 144) + (v10 | v4 + (int64_t)&g1 + (int64_t)&g3) | v11) | v20;
    }
    int32_t v21 = v15 & 0x6b4057cf; // 0xbfe9d
    *v12 = v21;
    *v12 = 2 * v21 - 0x4bf1ddd5 - (int32_t)*(int16_t *)(*v2 + 7);
    *v2 = *v2 + 11;
    return result;
}

// Address range: 0xbff6a - 0xc02e4
int64_t function_bff6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xbff6a
    int64_t v1; // 0xbff6a
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xbff92
    int64_t v3 = *v2; // 0xbff92
    uint64_t v4 = v1 + (int64_t)*(int16_t *)(v3 + 2); // 0xbffb3
    int64_t v5 = v1 + -2 - (int64_t)&g3 & (int64_t)&g2; // 0xbffc3
    int64_t v6 = v3 + 4; // 0xbffd4
    int64_t v7 = ((v1 ^ v1) & v1 | (a2 | 32) ^ 18) ^ 128; // 0xbffdb
    char v8 = *(char *)v6; // 0xbffe1
    int64_t v9 = v5; // 0xbffe8
    if (v8 == 38) {
        int32_t * v10 = (int32_t *)v4; // 0xc0002
        *v10 = *v10 & -2;
        v9 = v7 | v5 - 240;
    }
    int64_t v11 = 1; // 0xc000b
    int64_t v12 = v6; // 0xc000b
    int64_t v13 = v9; // 0xc000b
    if (v8 == -63) {
        int32_t * v14 = (int32_t *)v4; // 0xc0025
        *v14 = *v14 & (int32_t)((int64_t)&g2 ^ -1);
        v12 = v1 + 409;
        int32_t * v15 = (int32_t *)v12; // 0xc003a
        *v15 = *v15 & (int32_t)((int64_t)&g2 ^ -1);
        v11 = v4 % 2 | v1;
        v13 = (v9 | v6) & (int64_t)L"\n2";
    }
    int64_t v16 = v11; // 0xc004e
    int64_t v17 = v12; // 0xc004e
    if (v8 == -29) {
        int32_t * v18 = (int32_t *)v4; // 0xc0068
        *v18 = *v18 & (int32_t)((int64_t)&g1 ^ -1);
        v17 = v1 + 409;
        int32_t * v19 = (int32_t *)v17; // 0xc007b
        *v19 = *v19 & (int32_t)((int64_t)&g1 ^ -1);
        v16 = -3;
    }
    int64_t v20 = v13; // 0xc0082
    int64_t v21 = v7; // 0xc0082
    if (v8 == -14) {
        int32_t * v22 = (int32_t *)v4; // 0xc0088
        uint32_t v23 = *v22; // 0xc0088
        int64_t v24 = v7 + 144; // 0xc008a
        int64_t v25; // 0xbff6a
        int32_t v26; // 0xbff6a
        if (v23 % 2 == 0) {
            // 0xc00d5
            v26 = v23 | 1;
            v20 = v16 ^ v13;
            v25 = v24;
        } else {
            // 0xc00a2
            v26 = v23 & -2;
            v20 = v13 - 144;
            v25 = v24 ^ 64;
        }
        // 0xc00e7
        *v22 = v26;
        v21 = v25 + (int64_t)L"\n2";
    }
    int64_t v27 = v20; // 0xc00f7
    if (v8 == 116) {
        int32_t * v28 = (int32_t *)v4; // 0xc010e
        *v28 = *v28 | 1;
        v27 = v20 ^ 64;
    }
    int64_t v29 = v27; // 0xc011e
    int64_t v30 = v21; // 0xc011e
    if (v8 == -31) {
        int32_t * v31 = (int32_t *)v4; // 0xc013e
        *v31 = *v31 | (int32_t)&g2;
        int32_t * v32 = (int32_t *)(v1 + 409); // 0xc0166
        *v32 = *v32 | (int32_t)&g2;
        v29 = v21 + 0x80000040 + v27;
        v30 = v21 | v17;
    }
    int64_t result = v30; // 0xc0170
    if (v8 == 83) {
        int32_t * v33 = (int32_t *)v4; // 0xc018d
        *v33 = *v33 | (int32_t)&g1;
        int32_t * v34 = (int32_t *)(v1 + 409); // 0xc01af
        *v34 = *v34 | (int32_t)&g1;
        result = (v29 + (int64_t)&g2 | 8) ^ 32;
    }
    int32_t * v35 = (int32_t *)(v1 + 368); // 0xc0257
    int32_t v36 = *v35; // 0xc0257
    *v35 = (v36 ^ (int32_t)*(int16_t *)*v2) - 0x6a74b67c & v36;
    *v2 = *v2 + 5;
    return result;
}
