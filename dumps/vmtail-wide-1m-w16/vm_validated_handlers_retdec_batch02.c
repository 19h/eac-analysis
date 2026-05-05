/*
 * Targeted RetDec C for static-validated VM handler native ranges, batch 2.
 *
 * These handlers already have 100% validated handler-layer transfer models.
 * This artifact keeps native decompiler sidecars for full dispatch-entry
 * coverage and cross-checking against the VM-lifted C pseudocode.
 *
 * Total static-validated handler ranges: 166
 * Batch size: 24
 * Ranges:
 *   0xb8064-0xb838a entry=307 events=24095 span_bytes=805 insns=176
 *   0x9ba74-0x9bd9c entry=173 events=5101 span_bytes=808 insns=167
 *   0x9e7af-0x9ead9 entry=189 events=25112 span_bytes=809 insns=178
 *   0xbb3c9-0xbb6f3 entry=322 events=1847 span_bytes=810 insns=173
 *   0x9eacb-0x9edf7 entry=190 events=224 span_bytes=811 insns=180
 *   0xa0a9e-0xa0dd7 entry=200 events=1511 span_bytes=825 insns=177
 *   0xadbfd-0xadf39 entry=257 events=4958 span_bytes=828 insns=183
 *   0xac110-0xac44d entry=248 events=20 span_bytes=829 insns=175
 *   0xacbc5-0xacf0b entry=251 events=39 span_bytes=837 insns=185
 *   0x979ab-0x97cf3 entry=153 events=10 span_bytes=839 insns=188
 *   0xbe8cd-0xbec1b entry=336 events=44 span_bytes=846 insns=182
 *   0x96b6e-0x96ec1 entry=148 events=144 span_bytes=848 insns=185
 *   0x9d964-0x9dcbb entry=185 events=21620 span_bytes=855 insns=176
 *   0x9170d-0x91a67 entry=122 events=498 span_bytes=857 insns=183
 *   0x922c4-0x92622 entry=125 events=129 span_bytes=859 insns=184
 *   0x7fd4d-0x800ae entry=35 events=1 span_bytes=865 insns=180
 *   0x833c7-0x8372b entry=52 events=1103 span_bytes=866 insns=185
 *   0x9461b-0x94980 entry=136 events=2 span_bytes=866 insns=194
 *   0xc0535-0xc089b entry=346 events=9073 span_bytes=866 insns=178
 *   0x8eef4-0x8f258 entry=107 events=256 span_bytes=868 insns=202
 *   0xc29cf-0xc2d45 entry=357 events=6 span_bytes=885 insns=199
 *   0x94e5a-0x951d0 entry=140 events=2190 span_bytes=886 insns=189
 *   0xb2db6-0xb3135 entry=281 events=555 span_bytes=895 insns=196
 *   0x837cb-0x83b4d entry=54 events=1 span_bytes=898 insns=198
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

int64_t function_49f4755e();
int64_t function_cdae86();

// Address range: 0x7fd4d - 0x800a1
int64_t function_7fd4d(void) {
    // 0x7fd4d
    int64_t v1; // 0x7fd4d
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x7fd8f
    int64_t v4 = *v3; // 0x7fd8f
    int64_t * v5 = (int64_t *)(v2 + 113); // 0x7fdad
    *(int64_t *)v2 = v2 ^ 0x2426787;
    *v3 = v4 + 0x555b27d6;
    uint64_t v6 = v4 + 0x653cf834; // 0x7fe63
    char v7 = *(char *)(v2 + 225); // 0x7fe8c
    int64_t v8 = v7 != 98 ? v2 ^ 0xfe1d05e : 0x100000000000000 * v6 / 0x100000000000000;
    int64_t v9 = v7 != 50 ? v8 : 0x1000000000000 * v6 / 0x1000000000000;
    *v5 = v9 - 0x78855e91;
    int64_t * v10 = (int64_t *)(v2 + 10); // 0x7ff20
    int64_t v11 = *v10; // 0x7ff20
    if (*(char *)(v11 + 2) != 0) {
        uint64_t v12 = *v5 + (v1 ^ 0xfe1d05e) - v1; // 0x7fdc7
        int64_t v13 = v12 + v6; // 0x7fee3
        unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x7fee3
        uint16_t v15 = *(int16_t *)(v11 + 3); // 0x7ffa6
        bool v16; // 0x7fd4d
        *(int64_t *)(v2 + (int64_t)v15) = 0x4000 * (int64_t)v16 | 1024 * (int64_t)v16 | 512 * (int64_t)v16 | 256 * (int64_t)v16 | (int64_t)(v13 < v6) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 16 * (int64_t)(v12 % 16 + v6 % 16 > 15) | 2048 * (int64_t)(((v13 ^ v6) & (v13 ^ v12)) < 0) | 4 * (int64_t)(v14 % 2 == 0) | 2;
    }
    // 0x7ffcb
    *v5 = v9 + 0x1a44e4ef;
    *v10 = *v10 + 5;
    return v2 + 368;
}

// Address range: 0x833c7 - 0x8371d
int64_t function_833c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x833c7
    int64_t v1; // 0x833c7
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x833e5
    int64_t v4 = *v3; // 0x833e5
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x48703cb;
    *v3 = v4 + 0x60b5f469;
    uint64_t v5 = v2 + 0x48703cb; // 0x83472
    uint64_t v6 = v4 + 0x653cf834; // 0x83496
    char v7 = *(char *)(v2 + 404); // 0x834b5
    int64_t v8; // 0x833c7
    bool v9; // 0x833c7
    if (v7 == 98) {
        unsigned char v10 = (char)v5; // 0x834c2
        unsigned char v11 = (char)v6; // 0x834c2
        char v12 = v10 - v11; // 0x834c2
        int64_t v13 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v10 < v11) | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v10 % 16 - v11 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v12) % 2 == 0) | 2048 * (int64_t)(((v12 ^ v10) & (char)(v6 ^ v5)) < 0) | 2; // bp-8, 0x834c5
        v8 = (int64_t)&v13;
    }
    int64_t v14 = v8; // 0x834ca
    if (v7 == 50) {
        uint16_t v15 = (int16_t)v5; // 0x834d0
        uint16_t v16 = (int16_t)v6; // 0x834d0
        int16_t v17 = v15 - v16; // 0x834d0
        int64_t v18 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v15 < v16) | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v15 % 16 - v16 % 16 > 15) | 2048 * (int64_t)(((v17 ^ v15) & (int16_t)(v6 ^ v5)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v17) % 2 == 0) | 2; // bp-16, 0x834d4
        v14 = (int64_t)&v18;
    }
    int64_t v19 = v14; // 0x834d9
    if (v7 == 80) {
        uint32_t v20 = (int32_t)v5; // 0x834df
        uint32_t v21 = (int32_t)v6; // 0x834df
        int32_t v22 = v20 - v21; // 0x834df
        unsigned char v23 = llvm_ctpop_i8((char)v22); // 0x834df
        v19 = v14 - 8;
        *(int64_t *)v19 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v20 < v21) | 64 * (int64_t)(v22 == 0) | 128 * (int64_t)(v22 < 0) | 16 * (int64_t)(v20 % 16 - v21 % 16 > 15) | 2048 * (int64_t)(((v22 ^ v20) & (int32_t)(v6 ^ v5)) < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
    }
    // 0x834ea
    int64_t * v24; // 0x833c7
    if (v7 != 58) {
        // 0x834ea
        v24 = (int64_t *)v19;
    } else {
        int64_t v25 = v5 - v6; // 0x834f4
        unsigned char v26 = llvm_ctpop_i8((char)v25); // 0x834f4
        int64_t * v27 = (int64_t *)(v19 - 8);
        *v27 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v5 < v6) | 64 * (int64_t)(v25 == 0) | 128 * (int64_t)(v25 < 0) | 16 * (int64_t)(v5 % 16 - v6 % 16 > 15) | 2048 * (int64_t)(((v25 ^ v5) & (v6 ^ v5)) < 0) | 4 * (int64_t)(v26 % 2 == 0) | 2;
        v24 = v27;
    }
    int64_t * v28 = (int64_t *)(v2 + 113); // 0x83526
    *v28 = v5 ^ 0x4bfb9c98;
    int64_t * v29 = (int64_t *)(v2 + 10); // 0x8358f
    *v28 = v2 + 0x1ecbe8ba;
    if (*(char *)(*v29 + 2) != 0) {
        // 0x835c3
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v29 + 3)) = *v24;
    }
    int32_t * v30 = (int32_t *)(v2 + 368); // 0x836ab
    int32_t v31 = *v30; // 0x836ab
    uint32_t v32 = v31 + (int32_t)*(int16_t *)*v29 ^ 0x7823b2da; // 0x836b8
    *v30 = v32 + v31;
    *v29 = *v29 + 5;
    return *(int64_t *)(v2 + 271) + (int64_t)(v32 % 0x10000);
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

// Address range: 0x8eef4 - 0x8f24b
int64_t function_8eef4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x8eef4
    int64_t v1; // 0x8eef4
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x8ef75
    *v3 = *v3 & 0x2f7d4e8d;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0x8efb8
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v4 + 3)); // 0x8efe6
    char v6 = *(char *)(v2 + 404); // 0x8f003
    int64_t v7 = v5; // 0x8f00a
    int64_t v8; // 0x8eef4
    if (v6 == 98) {
        unsigned char v9 = (char)v2; // 0x8f014
        char v10 = v9 + 1; // 0x8f014
        unsigned char v11 = llvm_ctpop_i8(v10); // 0x8f014
        v7 = 64 * (int64_t)(v10 == 0) | 16 * (int64_t)(v9 % 16 == 15) | 128 * (int64_t)(v10 < 0) | 2048 * (int64_t)((v10 & (v9 ^ -128)) < 0) | 4 * (int64_t)(v11 % 2 == 0) | (int64_t)(v5 % 2 != 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | 2;
        v8 = v2 & -256 | (int64_t)v10;
    }
    int64_t v12 = v7;
    int64_t v13 = v12; // 0x8f02a
    int64_t v14 = v8; // 0x8f02a
    if (v6 == 50) {
        uint16_t v15 = (int16_t)v8; // 0x8f031
        int16_t v16 = v15 + 1; // 0x8f031
        unsigned char v17 = llvm_ctpop_i8((char)v16); // 0x8f031
        v13 = 256 * (int64_t)((v12 & 256) != 0) | (int64_t)(v12 % 2 != 0) | 512 * (int64_t)((v12 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v12 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v12 & (int64_t)"le") != 0) | 64 * (int64_t)(v16 == 0) | 16 * (int64_t)(v15 % 16 == 15) | 128 * (int64_t)(v16 < 0) | 2048 * (int64_t)((v16 & (v15 ^ -0x8000)) < 0) | 4 * (int64_t)(v17 % 2 == 0) | 2;
        v14 = v8 & -0x10000 | (int64_t)v16;
    }
    int64_t v18 = v13;
    int64_t v19 = v18; // 0x8f03d
    int64_t v20 = v14; // 0x8f03d
    if (v6 == 80) {
        uint32_t v21 = (int32_t)v14; // 0x8f04e
        int32_t v22 = v21 + 1; // 0x8f04e
        unsigned char v23 = llvm_ctpop_i8((char)v22); // 0x8f04e
        v19 = 256 * (int64_t)((v18 & 256) != 0) | (int64_t)(v18 % 2 != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | 64 * (int64_t)(v22 == 0) | 16 * (int64_t)(v21 % 16 == 15) | 128 * (int64_t)(v22 < 0) | 2048 * (int64_t)((v22 & (v21 ^ -0x80000000)) < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
        v20 = v22;
    }
    int64_t v24 = v20;
    int64_t v25 = v19;
    int64_t v26 = v25; // 0x8f060
    int64_t v27 = v24; // 0x8f060
    if (v6 == 58) {
        // 0x8f066
        v27 = v24 + 1;
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0x8f067
        v26 = 256 * (int64_t)((v25 & 256) != 0) | (int64_t)(v25 % 2 != 0) | 512 * (int64_t)((v25 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v25 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v25 & (int64_t)"le") != 0) | 64 * (int64_t)(v27 == 0) | 16 * (int64_t)(v24 % 16 == 15) | 128 * (int64_t)(v27 < 0) | 2048 * (int64_t)((v27 & (v24 ^ -0x8000000000000000)) < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
    }
    // 0x8f075
    *(int64_t *)(v2 + 113) = v27 + 0x1a44e4ef;
    int64_t v29 = *v4; // 0x8f12b
    int64_t v30 = v29; // 0x8f14a
    if (*(char *)(v29 + 2) != 0) {
        // 0x8f150
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v29 + 3)) = v26;
        v30 = *v4;
    }
    int64_t v31 = *(int64_t *)(v2 + 271); // 0x8f1ae
    int32_t * v32 = (int32_t *)(v2 + 368); // 0x8f1e9
    int32_t v33 = *v32; // 0x8f1e9
    uint32_t v34 = v33 ^ (int32_t)*(int16_t *)v30; // 0x8f1e9
    *v32 = v33 - v34;
    *v4 = *v4 + 5;
    return ((int64_t)v34 & (int64_t)&g3) + v31;
}

// Address range: 0x8f24d - 0x8f258
int64_t function_8f24d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x8f24d
    int64_t result; // 0x8f24d
    return result;
}

// Address range: 0x9170d - 0x91a59
int64_t function_9170d(void) {
    // 0x9170d
    int64_t v1; // 0x9170d
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x9172a
    *v3 = *v3 - 0x1a3530c;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x66e04b40;
    uint64_t v4 = v2 + 0x66e04b40; // 0x917e3
    int32_t * v5 = (int32_t *)(v2 + 368); // 0x91801
    *v5 = *v5 + *(int32_t *)(v2 + 35);
    uint64_t v6 = *v3 + 0x66e04b40; // 0x91814
    char v7 = *(char *)(v2 + 404); // 0x91836
    int64_t v8; // 0x9170d
    bool v9; // 0x9170d
    if (v7 == 98) {
        unsigned char v10 = (char)v4; // 0x91843
        unsigned char v11 = (char)v6; // 0x91843
        char v12 = v10 - v11; // 0x91843
        int64_t v13 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v10 < v11) | 64 * (int64_t)(v12 == 0) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v10 % 16 - v11 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v12) % 2 == 0) | 2048 * (int64_t)(((v12 ^ v10) & (char)(v6 ^ v4)) < 0) | 2; // bp-8, 0x91846
        v8 = (int64_t)&v13;
    }
    int64_t v14 = v8; // 0x9184b
    if (v7 == 50) {
        uint16_t v15 = (int16_t)v4; // 0x91851
        uint16_t v16 = (int16_t)v6; // 0x91851
        int16_t v17 = v15 - v16; // 0x91851
        int64_t v18 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v15 < v16) | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v15 % 16 - v16 % 16 > 15) | 2048 * (int64_t)(((v17 ^ v15) & (int16_t)(v6 ^ v4)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v17) % 2 == 0) | 2; // bp-16, 0x91855
        v14 = (int64_t)&v18;
    }
    int64_t v19 = v14; // 0x9185a
    if (v7 == 80) {
        uint32_t v20 = (int32_t)v4; // 0x91860
        uint32_t v21 = (int32_t)v6; // 0x91860
        int32_t v22 = v20 - v21; // 0x91860
        unsigned char v23 = llvm_ctpop_i8((char)v22); // 0x91860
        v19 = v14 - 8;
        *(int64_t *)v19 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v20 < v21) | 64 * (int64_t)(v22 == 0) | 128 * (int64_t)(v22 < 0) | 16 * (int64_t)(v20 % 16 - v21 % 16 > 15) | 2048 * (int64_t)(((v22 ^ v20) & (int32_t)(v6 ^ v4)) < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
    }
    // 0x9186e
    int64_t * v24; // 0x9170d
    if (v7 != 58) {
        // 0x9186e
        v24 = (int64_t *)v19;
    } else {
        int64_t v25 = v4 - v6; // 0x91878
        unsigned char v26 = llvm_ctpop_i8((char)v25); // 0x91878
        int64_t * v27 = (int64_t *)(v19 - 8);
        *v27 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | (int64_t)(v4 < v6) | 64 * (int64_t)(v25 == 0) | 128 * (int64_t)(v25 < 0) | 16 * (int64_t)(v4 % 16 - v6 % 16 > 15) | 2048 * (int64_t)(((v25 ^ v4) & (v6 ^ v4)) < 0) | 4 * (int64_t)(v26 % 2 == 0) | 2;
        v24 = v27;
    }
    int64_t * v28 = (int64_t *)(v2 + 113); // 0x918ab
    *v28 = v4 ^ 0x3b82c29b;
    int64_t * v29 = (int64_t *)(v2 + 10); // 0x91919
    *v28 = v2 + 0x8125302f;
    int64_t result = 0; // 0x91935
    if (*(char *)(*v29 + 4) != 0) {
        // 0x9193b
        result = v2 + (int64_t)*(int16_t *)(*v29 + 2);
        *(int64_t *)result = *v24;
    }
    // 0x91992
    *v5 = -0x1af9be18 - (int32_t)*(int16_t *)*v29;
    *v29 = *v29 + 5;
    return result;
}

// Address range: 0x922c4 - 0x92615
int64_t function_922c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x922c4
    int64_t v1; // 0x922c4
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x922dc
    *v3 = *v3 + 0x653cf834 ^ 0x6abb3e52;
    *(int64_t *)v2 = v2 ^ 0x6718898b;
    int64_t v4 = v2 ^ 0x6abb3e52; // 0x92372
    int64_t v5 = *v3 ^ 0x6abb3e52; // 0x9239c
    int64_t v6 = v2 + 404; // 0x923b7
    char v7 = *(char *)v6; // 0x923c4
    int64_t v8; // 0x922c4
    bool v9; // 0x922c4
    if (v7 == 98) {
        char v10 = v5 & v4; // 0x923d1
        int64_t v11 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | 64 * (int64_t)(v10 == 0) | 128 * (int64_t)(v10 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v10) % 2 == 0) | 2; // bp-8, 0x923d3
        v8 = (int64_t)&v11;
    }
    int64_t v12 = v8; // 0x923df
    if (v7 == 50) {
        int64_t v13 = v5 & v4;
        int16_t v14 = v13; // 0x923e5
        int64_t v15 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v13) % 2 == 0) | 2; // bp-16, 0x923e8
        v12 = (int64_t)&v15;
    }
    int64_t v16 = v12; // 0x923f7
    if (v7 == 80) {
        int64_t v17 = v5 & v4;
        int32_t v18 = v17; // 0x923fd
        unsigned char v19 = llvm_ctpop_i8((char)v17); // 0x923fd
        v16 = v12 - 8;
        *(int64_t *)v16 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v18 < 0) | 4 * (int64_t)(v19 % 2 == 0) | 2;
    }
    // 0x92407
    int64_t * v20; // 0x922c4
    if (v7 != 58) {
        // 0x92407
        v20 = (int64_t *)v16;
    } else {
        int64_t v21 = v5 & v4; // 0x92411
        unsigned char v22 = llvm_ctpop_i8((char)v21); // 0x92411
        int64_t * v23 = (int64_t *)(v16 - 8);
        *v23 = 0x4000 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 4 * (int64_t)(v22 % 2 == 0) | 2;
        v20 = v23;
    }
    int64_t v24 = v4 + 0x61186136; // 0x92422
    int64_t v25 = v2 + 113; // 0x92437
    int64_t * v26 = (int64_t *)v25; // 0x9244c
    *v26 = v24;
    int64_t v27 = *v20; // 0x9248b
    int64_t * v28 = (int64_t *)(v2 + 10); // 0x924a2
    *v26 = v4 + 0x1a44e4ef;
    int64_t v29; // 0x922c4
    if (*(char *)(*v28 + 2) != 0) {
        int64_t v30 = *v28 + 3; // 0x92526
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v30) = v27;
        v29 = v30;
    }
    int64_t v31 = v29;
    int32_t * v32 = (int32_t *)(v2 + 368); // 0x925bf
    int32_t v33 = *v32; // 0x925bf
    *v32 = (int32_t)*(int16_t *)*v28 - 0x7b275316 + v33 & v33;
    *v28 = *v28 + 5;
    return ((v6 ^ 4) + 8 + v31 & ((int64_t)&g1 ^ 1) & ((v31 & (v25 | (int64_t)L"\n2")) + 1 ^ (v27 ^ v24) & (int64_t)L"\n2")) + ((int64_t)&g1 ^ 1);
}

// Address range: 0x92619 - 0x92620
int64_t function_92619(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x92619
    int64_t v1; // 0x92619
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 119); // 0x9261b
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x92621 - 0x92622
int64_t function_92621(void) {
    // 0x92621
    int64_t result; // 0x92621
    return result;
}

// Address range: 0x9461b - 0x94973
int64_t function_9461b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9461b
    int64_t v1; // 0x9461b
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x94635
    *v3 = *v3 + 0x653cf834 ^ 0x33365d14;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x33365d14;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0x946ad
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v4 + 2)); // 0x946c4
    int64_t v6 = v2 + 0x33365d14; // 0x946e9
    int64_t v7 = *v3; // 0x94703
    uint64_t v8 = v7 ^ 0x33365d14; // 0x94709
    char v9 = *(char *)(v2 + 404); // 0x94737
    int64_t v10 = v5; // 0x9473e
    int64_t v11 = v6; // 0x9473e
    if (v9 == 98) {
        unsigned char v12 = (char)v8 % 32; // 0x9474c
        bool v13 = (v5 & (int64_t)L"\n2") != 0; // 0x9474c
        bool v14 = v5 % 2 != 0; // 0x9474c
        v11 = v6;
        if (v12 != 0) {
            unsigned char v15 = (char)v6; // 0x9474c
            unsigned char v16 = v15 << 8 - v12 | v15 >> v12; // 0x9474c
            char v17 = v16 / 128; // 0x9474c
            v13 = v12 == 1 ? v17 != v16 / 64 % 2 : (v5 & (int64_t)L"\n2") != 0;
            v14 = v17 != 0;
            v11 = v6 & -256 | (int64_t)v16;
        }
        v10 = 16 * (int64_t)((v5 & 16) != 0) | 4 * (int64_t)((v5 & 4) != 0) | 64 * (int64_t)((v5 & 64) != 0) | 128 * (int64_t)((char)v5 < 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | (int64_t)v14 | 2048 * (int64_t)v13 | 2;
    }
    int64_t v18 = v10;
    int64_t v19 = v18; // 0x9475a
    int64_t v20 = v11; // 0x9475a
    if (v9 == 50) {
        uint16_t v21 = (int16_t)v8 % 32; // 0x94768
        bool v22 = (v18 & (int64_t)L"\n2") != 0; // 0x94768
        bool v23 = v18 % 2 != 0; // 0x94768
        v20 = v11;
        if (v21 != 0) {
            uint16_t v24 = (int16_t)v11; // 0x94768
            uint16_t v25 = v24 >> v21 | v24 << 16 - v21; // 0x94768
            int16_t v26 = v25 / 0x8000; // 0x94768
            v22 = v21 == 1 ? v26 != v25 / 0x4000 % 2 : (v18 & (int64_t)L"\n2") != 0;
            v23 = v26 != 0;
            v20 = v11 & -0x10000 | (int64_t)v25;
        }
        v19 = 16 * (int64_t)((v18 & 16) != 0) | 4 * (int64_t)((v18 & 4) != 0) | 64 * (int64_t)((v18 & 64) != 0) | 128 * (int64_t)((char)v18 < 0) | 256 * (int64_t)((v18 & 256) != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | (int64_t)v23 | 2048 * (int64_t)v22 | 2;
    }
    int64_t v27 = v19;
    int64_t v28 = v27; // 0x9477b
    int64_t v29 = v20; // 0x9477b
    if (v9 == 80) {
        uint32_t v30 = (int32_t)v8 % 32; // 0x94790
        bool v31 = (v27 & (int64_t)L"\n2") != 0; // 0x94790
        bool v32 = v27 % 2 != 0; // 0x94790
        v29 = v20;
        if (v30 != 0) {
            uint32_t v33 = (int32_t)v20; // 0x94790
            int32_t v34 = v33 >> v30 | v33 << 32 - v30; // 0x94790
            v31 = v30 == 1 ? v34 / 0x40000000 % 2 != (int32_t)(v34 < 0) : (v27 & (int64_t)L"\n2") != 0;
            v32 = v34 < 0;
            v29 = v34;
        }
        v28 = 16 * (int64_t)((v27 & 16) != 0) | 4 * (int64_t)((v27 & 4) != 0) | 64 * (int64_t)((v27 & 64) != 0) | 128 * (int64_t)((char)v27 < 0) | 256 * (int64_t)((v27 & 256) != 0) | 512 * (int64_t)((v27 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v27 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v27 & (int64_t)"le") != 0) | (int64_t)v32 | 2048 * (int64_t)v31 | 2;
    }
    int64_t v35 = v29;
    int64_t v36 = v28;
    int64_t v37 = v36; // 0x947a6
    uint64_t v38 = v35; // 0x947a6
    if (v9 == 58) {
        uint64_t v39 = v8 % 64; // 0x947ad
        bool v40 = (v36 & (int64_t)L"\n2") != 0; // 0x947ad
        int64_t v41 = v36 % 2; // 0x947ad
        v38 = v35;
        if (v39 != 0) {
            v38 = v35 >> v39 | v35 << 64 - v39;
            v41 = v38 / 0x8000000000000000;
            v40 = v39 == 1 ? v41 != v38 / 0x4000000000000000 % 2 : (v36 & (int64_t)L"\n2") != 0;
        }
        v37 = 16 * (int64_t)((v36 & 16) != 0) | 4 * (int64_t)((v36 & 4) != 0) | 64 * (int64_t)((v36 & 64) != 0) | 128 * (int64_t)((char)v36 < 0) | 256 * (int64_t)((v36 & 256) != 0) | 512 * (int64_t)((v36 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v36 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v36 & (int64_t)"le") != 0) | 2048 * (int64_t)v40 | (int64_t)(v41 != 0) | 2;
    }
    // 0x947b1
    *(int64_t *)(v2 + 113) = v38 + 0x1a44e4ef;
    int64_t v42 = *v4; // 0x94834
    int64_t v43 = v42; // 0x94851
    if (*(char *)(v42 + 4) != 0) {
        // 0x94857
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v42 + 2)) = v37;
        v43 = *v4;
    }
    int32_t * v44 = (int32_t *)(v2 + 368); // 0x94913
    int32_t v45 = *v44; // 0x94913
    *v44 = (v45 ^ (int32_t)*(int16_t *)v43) - 0x2eae4eac | v45;
    *v4 = *v4 + 5;
    return (v7 ^ 0x33365d74) + 14;
}

// Address range: 0x94975 - 0x94978
int64_t function_94975(void) {
    // 0x94975
    int64_t result; // 0x94975
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

// Address range: 0x96b6e - 0x96eb4
int64_t function_96b6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x96b6e
    int64_t v1; // 0x96b6e
    int64_t v2 = v1;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x1f8fd815;
    int64_t v3 = v2 + 35; // 0x96bb2
    int64_t * v4 = (int64_t *)(v2 + 96); // 0x96bc2
    int64_t v5 = *v4; // 0x96bc2
    int64_t v6 = v2 + 368; // 0x96be0
    int32_t * v7 = (int32_t *)v6; // 0x96be7
    *v7 = *v7 & *(int32_t *)v3;
    *v4 = v5 + 0x84ccd049;
    int64_t * v8 = (int64_t *)(v2 + 10); // 0x96c08
    uint64_t v9 = *(int64_t *)(v2 + (int64_t)*(int16_t *)*v8); // 0x96c1f
    int64_t v10 = v2 - 0x1f8fd815; // 0x96c39
    uint64_t v11 = v5 + 0x653cf834; // 0x96c6e
    char v12 = *(char *)(v2 + 404); // 0x96c93
    int64_t v13 = v9; // 0x96c9a
    int64_t v14 = v10; // 0x96c9a
    if (v12 == 98) {
        unsigned char v15 = (char)v11 % 32; // 0x96ca1
        bool v16 = (v9 & 4) != 0; // 0x96ca1
        bool v17 = (v9 & 64) != 0; // 0x96ca1
        unsigned char v18 = (char)v9; // 0x96ca1
        bool v19 = (v9 & (int64_t)L"\n2") != 0; // 0x96ca1
        v14 = v10;
        bool v20 = v9 % 2 != 0; // 0x96ca1
        if (v15 != 0) {
            char v21 = v10; // 0x96ca1
            v18 = v21 << v15;
            unsigned char v22 = llvm_ctpop_i8(v18); // 0x96ca1
            char v23 = (v21 << v15 - 1) / 128; // 0x96ca1
            v19 = v15 == 1 ? v18 / 128 != v23 : (v9 & (int64_t)L"\n2") != 0;
            v16 = v22 % 2 == 0;
            v17 = v18 == 0;
            v14 = v10 & -256 | (int64_t)v18;
            v20 = v23 != 0;
        }
        v13 = 256 * (int64_t)((v9 & 256) != 0) | 16 * (int64_t)((v9 & 16) != 0) | 512 * (int64_t)((v9 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v9 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v9 & (int64_t)"le") != 0) | 4 * (int64_t)v16 | 64 * (int64_t)v17 | 128 * (int64_t)(v18 < 0) | 2048 * (int64_t)v19 | (int64_t)v20 | 2;
    }
    int64_t v24 = v13;
    int64_t v25 = v24; // 0x96ca8
    int64_t v26 = v14; // 0x96ca8
    if (v12 == 50) {
        uint16_t v27 = (int16_t)v11 % 32; // 0x96caf
        bool v28 = (v24 & 4) != 0; // 0x96caf
        bool v29 = (v24 & 64) != 0; // 0x96caf
        bool v30 = (char)v24 < 0; // 0x96caf
        bool v31 = (v24 & (int64_t)L"\n2") != 0; // 0x96caf
        v26 = v14;
        bool v32 = v24 % 2 != 0; // 0x96caf
        if (v27 != 0) {
            int16_t v33 = v14; // 0x96caf
            uint16_t v34 = v33 << v27; // 0x96caf
            unsigned char v35 = llvm_ctpop_i8((char)v34); // 0x96caf
            int16_t v36 = (v33 << v27 - 1) / 0x8000; // 0x96caf
            v31 = v27 == 1 ? v34 / 0x8000 != v36 : (v24 & (int64_t)L"\n2") != 0;
            v28 = v35 % 2 == 0;
            v29 = v34 == 0;
            v30 = v34 < 0;
            v26 = v14 & -0x10000 | (int64_t)v34;
            v32 = v36 != 0;
        }
        v25 = 256 * (int64_t)((v24 & 256) != 0) | 16 * (int64_t)((v24 & 16) != 0) | 512 * (int64_t)((v24 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v24 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v24 & (int64_t)"le") != 0) | 4 * (int64_t)v28 | 64 * (int64_t)v29 | 128 * (int64_t)v30 | 2048 * (int64_t)v31 | (int64_t)v32 | 2;
    }
    int64_t v37 = v25;
    int64_t v38 = v37; // 0x96cb7
    int64_t v39 = v26; // 0x96cb7
    if (v12 == 80) {
        uint32_t v40 = (int32_t)v11 % 32; // 0x96cc8
        bool v41 = (v37 & 4) != 0; // 0x96cc8
        bool v42 = (v37 & 64) != 0; // 0x96cc8
        bool v43 = (char)v37 < 0; // 0x96cc8
        bool v44 = (v37 & (int64_t)L"\n2") != 0; // 0x96cc8
        v39 = v26;
        bool v45 = v37 % 2 != 0; // 0x96cc8
        if (v40 != 0) {
            int32_t v46 = v26; // 0x96cc8
            int32_t v47 = v46 << v40; // 0x96cc8
            unsigned char v48 = llvm_ctpop_i8((char)v47); // 0x96cc8
            v44 = v40 == 1 ? v47 < 0 != v46 << v40 - 1 < 0 : (v37 & (int64_t)L"\n2") != 0;
            v41 = v48 % 2 == 0;
            v42 = v47 == 0;
            v43 = v47 < 0;
            v39 = v47;
            v45 = v46 << v40 - 1 < 0;
        }
        v38 = 256 * (int64_t)((v37 & 256) != 0) | 16 * (int64_t)((v37 & 16) != 0) | 512 * (int64_t)((v37 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v37 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v37 & (int64_t)"le") != 0) | 4 * (int64_t)v41 | 64 * (int64_t)v42 | 128 * (int64_t)v43 | 2048 * (int64_t)v44 | (int64_t)v45 | 2;
    }
    int64_t v49 = v38;
    int64_t v50 = v49; // 0x96cd9
    int64_t v51 = v39; // 0x96cd9
    if (v12 == 58) {
        uint64_t v52 = v11 % 64; // 0x96cea
        bool v53 = (v49 & 4) != 0; // 0x96cea
        bool v54 = (v49 & 64) != 0; // 0x96cea
        bool v55 = (char)v49 < 0; // 0x96cea
        bool v56 = (v49 & (int64_t)L"\n2") != 0; // 0x96cea
        v51 = v39;
        int64_t v57 = v49 % 2; // 0x96cea
        if (v52 != 0) {
            v51 = v39 << v52;
            unsigned char v58 = llvm_ctpop_i8((char)v51); // 0x96cea
            v57 = (v39 << v52 - 1) / 0x8000000000000000;
            v56 = v52 == 1 ? v51 >> 63 != v57 : (v49 & (int64_t)L"\n2") != 0;
            v53 = v58 % 2 == 0;
            v54 = v51 == 0;
            v55 = v51 < 0;
        }
        v50 = 256 * (int64_t)((v49 & 256) != 0) | 16 * (int64_t)((v49 & 16) != 0) | 512 * (int64_t)((v49 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v49 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v49 & (int64_t)"le") != 0) | 4 * (int64_t)v53 | 64 * (int64_t)v54 | 128 * (int64_t)v55 | 2048 * (int64_t)v56 | (int64_t)(v57 != 0) | 2;
    }
    // 0x96cf1
    *(int64_t *)(v2 + 113) = v51 + 0x1a44e4ef;
    int64_t v59 = *v8; // 0x96d77
    int64_t v60 = v59; // 0x96d8c
    if (*(char *)(v59 + 2) != 0) {
        // 0x96d92
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v59) = v50;
        v60 = *v8;
    }
    // 0x96de0
    *v8 = v60 + 5;
    return 2 * v3 - 64 | v6;
}

// Address range: 0x979ab - 0x97ce6
int64_t function_979ab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x979ab
    int64_t v1; // 0x979ab
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x979f7
    int64_t v4 = *v3; // 0x979f7
    *v3 = v4 + 0xe54d4a6;
    int64_t * v5 = (int64_t *)(v2 + 10); // 0x97a4f
    int64_t v6 = v2 + (int64_t)*(int16_t *)(*v5 + 2); // 0x97a66
    uint64_t v7 = *(int64_t *)v6; // 0x97a73
    uint64_t v8 = v4 + 0x653cf834; // 0x97abc
    char v9 = *(char *)(v2 + 404); // 0x97ae7
    int64_t v10 = v7; // 0x97aee
    int64_t v11; // 0x979ab
    if (v9 == 98) {
        unsigned char v12 = (char)v8 % 32; // 0x97af5
        bool v13 = (v7 & (int64_t)L"\n2") != 0; // 0x97af5
        bool v14 = v7 % 2 != 0; // 0x97af5
        int64_t v15; // 0x979ab
        if (v12 != 0) {
            unsigned char v16 = (char)v2; // 0x97af5
            unsigned char v17 = v16 >> 8 - v12 | v16 << v12; // 0x97af5
            unsigned char v18 = v17 % 2; // 0x97af5
            v13 = v12 == 1 ? v17 / 128 != v18 : (v7 & (int64_t)L"\n2") != 0;
            v14 = v18 != 0;
            v15 = v2 & -256 | (int64_t)v17;
        }
        v10 = 16 * (int64_t)((v7 & 16) != 0) | 4 * (int64_t)((v7 & 4) != 0) | 64 * (int64_t)((v7 & 64) != 0) | 128 * (int64_t)((char)v7 < 0) | 256 * (int64_t)((v7 & 256) != 0) | 512 * (int64_t)((v7 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v7 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v7 & (int64_t)"le") != 0) | (int64_t)v14 | 2048 * (int64_t)v13 | 2;
        v11 = v15;
    }
    int64_t v19 = v10;
    int64_t v20 = v19; // 0x97b04
    int64_t v21 = v11; // 0x97b04
    if (v9 == 50) {
        uint16_t v22 = (int16_t)v8 % 32; // 0x97b12
        bool v23 = (v19 & (int64_t)L"\n2") != 0; // 0x97b12
        bool v24 = v19 % 2 != 0; // 0x97b12
        v21 = v11;
        if (v22 != 0) {
            uint16_t v25 = (int16_t)v11; // 0x97b12
            uint16_t v26 = v25 >> 16 - v22 | v25 << v22; // 0x97b12
            uint16_t v27 = v26 % 2; // 0x97b12
            v23 = v22 == 1 ? v26 / 0x8000 != v27 : (v19 & (int64_t)L"\n2") != 0;
            v24 = v27 != 0;
            v21 = v11 & -0x10000 | (int64_t)v26;
        }
        v20 = 16 * (int64_t)((v19 & 16) != 0) | 4 * (int64_t)((v19 & 4) != 0) | 64 * (int64_t)((v19 & 64) != 0) | 128 * (int64_t)((char)v19 < 0) | 256 * (int64_t)((v19 & 256) != 0) | 512 * (int64_t)((v19 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v19 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v19 & (int64_t)"le") != 0) | (int64_t)v24 | 2048 * (int64_t)v23 | 2;
    }
    int64_t v28 = v20;
    int64_t v29 = v28; // 0x97b1b
    int64_t v30 = v21; // 0x97b1b
    if (v9 == 80) {
        uint32_t v31 = (int32_t)v8 % 32; // 0x97b25
        bool v32 = (v28 & (int64_t)L"\n2") != 0; // 0x97b25
        bool v33 = v28 % 2 != 0; // 0x97b25
        v30 = v21;
        if (v31 != 0) {
            uint32_t v34 = (int32_t)v21; // 0x97b25
            uint32_t v35 = v34 >> 32 - v31 | v34 << v31; // 0x97b25
            uint32_t v36 = v35 % 2; // 0x97b25
            v32 = v31 == 1 ? v36 != (int32_t)(v35 < 0) : (v28 & (int64_t)L"\n2") != 0;
            v33 = v36 != 0;
            v30 = v35;
        }
        v29 = 16 * (int64_t)((v28 & 16) != 0) | 4 * (int64_t)((v28 & 4) != 0) | 64 * (int64_t)((v28 & 64) != 0) | 128 * (int64_t)((char)v28 < 0) | 256 * (int64_t)((v28 & 256) != 0) | 512 * (int64_t)((v28 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v28 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v28 & (int64_t)"le") != 0) | (int64_t)v33 | 2048 * (int64_t)v32 | 2;
    }
    int64_t v37 = v30;
    int64_t v38 = v29;
    int64_t v39 = v38; // 0x97b2d
    uint64_t v40 = v37; // 0x97b2d
    if (v9 == 58) {
        uint64_t v41 = v8 % 64; // 0x97b37
        bool v42 = (v38 & (int64_t)L"\n2") != 0; // 0x97b37
        int64_t v43 = v38 % 2; // 0x97b37
        v40 = v37;
        if (v41 != 0) {
            v40 = v37 >> 64 - v41 | v37 << v41;
            v43 = v40 % 2;
            v42 = v41 == 1 ? v40 / 0x8000000000000000 != v43 : (v38 & (int64_t)L"\n2") != 0;
        }
        v39 = 16 * (int64_t)((v38 & 16) != 0) | 4 * (int64_t)((v38 & 4) != 0) | 64 * (int64_t)((v38 & 64) != 0) | 128 * (int64_t)((char)v38 < 0) | 256 * (int64_t)((v38 & 256) != 0) | 512 * (int64_t)((v38 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v38 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v38 & (int64_t)"le") != 0) | 2048 * (int64_t)v42 | (int64_t)(v43 != 0) | 2;
    }
    int64_t * v44 = (int64_t *)(v2 + 113); // 0x97b56
    *v44 = v40;
    int64_t v45 = *v5; // 0x97b89
    if (*(char *)(v45 + 4) != 0) {
        // 0x97bb1
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v45 + 2)) = v39;
    }
    // 0x97c0e
    *v44 = v40 + 0x1a44e4ef;
    int32_t * v46 = (int32_t *)(v2 + 368); // 0x97c97
    int32_t v47 = *v46; // 0x97c97
    *v46 = ((int32_t)*(int16_t *)*v5 - v47 ^ 0x6f642592) + v47;
    *v5 = *v5 + 5;
    return *(int64_t *)(v2 + 271) ^ (v6 + 15 | 1);
}

// Address range: 0x97ce8 - 0x97cea
int64_t function_97ce8(void) {
    // 0x97ce8
    int64_t result; // 0x97ce8
    return result;
}

// Address range: 0x97ceb - 0x97cec
int64_t function_97ceb(void) {
    // 0x97ceb
    int64_t result; // 0x97ceb
    return result;
}

// Address range: 0x9ba74 - 0x9bd8f
int64_t function_9ba74(int64_t a1, int64_t a2, int64_t a3) {
    // 0x9ba74
    int64_t v1; // 0x9ba74
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x9ba85
    int32_t v3 = *v2 + 0x5eced92d; // 0x9ba85
    *v2 = v3;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0x9babb
    *v4 = *v4 - (v3 | 0x1f8bac4c) & 0x74128b65;
    int32_t v5 = *v2 ^ 0x456d7018; // 0x9bad9
    *v2 = v5;
    int64_t v6 = *(int64_t *)(v1 + 113) - 0x1a44e4ef; // 0x9bb0f
    int64_t v7 = *(int64_t *)(v1 + 129); // 0x9bb20
    int64_t v8 = v7 + 0x1a44e4ef; // 0x9bb26
    *v2 = v5 | 0xebbbd20;
    int64_t v9 = v1 + 404; // 0x9bb3d
    char v10 = *(char *)v9; // 0x9bb43
    if (v10 == 98) {
        // 0x9bb50
        *(char *)v8 = (char)v6;
    }
    if (v10 == 50) {
        // 0x9bb5d
        *(int16_t *)v8 = (int16_t)v6;
    }
    int64_t v11 = v8; // 0x9bb65
    int64_t result = v9; // 0x9bb65
    if (v10 == 80) {
        // 0x9bb6b
        *(int32_t *)v8 = (int32_t)v6;
        int64_t v12 = v1 + 367; // 0x9bb71
        v11 = v8;
        result = v12;
        if (*(char *)v12 != 0) {
            int64_t v13 = v7 + 0x1a44e4f3; // 0x9bb80
            *(int32_t *)v13 = 0;
            v11 = v13;
            result = v12;
        }
    }
    // 0x9bb8d
    if (v10 == 58) {
        // 0x9bb97
        *(int64_t *)v11 = v6;
    }
    int32_t v14 = *v2 & *v4; // 0x9bc16
    *v2 = v14;
    int64_t * v15 = (int64_t *)(v1 + 10); // 0x9bcaf
    *v2 = (v14 ^ (int32_t)*(int16_t *)*v15) + 0x1f118051 & v14;
    *v15 = *v15 + 2;
    return result;
}

// Address range: 0x9d964 - 0x9dcae
int64_t function_9d964(int64_t a1, int64_t a2, int64_t a3) {
    // 0x9d964
    int64_t v1; // 0x9d964
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x9d992
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x9da22
    *v3 = *v3 | 0x17e55682;
    *(char *)(v1 + 404) = *(char *)(*v2 + 2);
    int32_t * v4 = (int32_t *)(v1 + 368); // 0x9da5f
    *v4 = *v3 ^ 0x2000c224 ^ *v4;
    int32_t v5 = *v3; // 0x9da7c
    if ((v5 & 2) != 0) {
        int32_t v6 = v5 + 0x28030c24; // 0x9da9d
        int32_t v7 = v6 ^ 0x30d03eec; // 0x9daad
        *v3 = v7;
        if ((v6 & 2) != 0) {
            // 0x9dad4
            *v3 = (v7 | 0x7fa981a) ^ 0x5ea8d1c5;
        }
    }
    int32_t v8 = *v4 & 0x1f29f35; // 0x9db24
    *v4 = v8;
    int32_t v9 = *v3 + v8; // 0x9dba1
    *v4 = v9;
    *v4 = v9 | (int32_t)*(int16_t *)*v2;
    *v2 = *v2 + 3;
    return 2 * v1 & 16;
}

// Address range: 0x9dcb6 - 0x9dcb9
int64_t function_9dcb6(void) {
    // 0x9dcb6
    int64_t result; // 0x9dcb6
    return result;
}

// Address range: 0x9e7af - 0x9eacb
int64_t function_9e7af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x9e7af
    int64_t v1; // 0x9e7af
    int64_t v2 = v1 + 10; // 0x9e7bc
    int64_t * v3 = (int64_t *)v2; // 0x9e7c6
    uint16_t v4 = *(int16_t *)*v3; // 0x9e7d0
    int64_t v5 = v1 + 368; // 0x9e7d7
    int32_t * v6 = (int32_t *)v5; // 0x9e7de
    int32_t v7 = *v6; // 0x9e7de
    int32_t * v8 = (int32_t *)(v1 + 35); // 0x9e7eb
    int32_t v9 = *v8; // 0x9e7eb
    *v8 = v9 - 0x10705ace;
    int64_t v10 = *(int64_t *)(((int64_t)(v7 + (int32_t)v4 ^ v9) & (int64_t)&g3) + v1); // 0x9e813
    *(int64_t *)v1 = v10 ^ 0xda3b7d9;
    *(char *)(v1 + 367) = 1;
    int32_t v11 = *v8; // 0x9e841
    if ((v11 & 2) != 0) {
        // 0x9e855
        *v8 = v11 & 0x49036387;
    }
    int64_t v12 = v1 + 113; // 0x9e8a5
    int64_t v13 = *(int64_t *)v12; // 0x9e8ac
    int32_t v14 = *v6 & 0x160e4f34; // 0x9e8b9
    *v6 = v14;
    *v8 = *v8 & (v14 | 0x1ca9af86) ^ 0x4ac58a82;
    int64_t v15 = v2 ^ (int64_t)&g2 ^ 2 * ((int64_t)(v14 & (int32_t)(v13 ^ a2)) - v12); // 0x9e9d7
    int64_t v16 = *(int64_t *)(v1 + 271); // 0x9e9de
    int64_t v17 = ((v2 | (int64_t)&g2) ^ v12 ^ v15) + 32; // 0x9e9ff
    int64_t v18 = v15 - v17 & v16; // 0x9ea24
    int32_t v19 = *v6; // 0x9ea27
    uint32_t v20 = v19 + (int32_t)*(int16_t *)(*v3 + 2); // 0x9ea27
    int64_t v21 = v18 ^ 16; // 0x9ea33
    uint32_t v22 = v20 ^ 0x2a1ce984; // 0x9ea40
    int64_t v23 = v22; // 0x9ea40
    int64_t v24 = (int64_t)v20 + 2 - v18 & 8 | 2 * ((v1 ^ 1 ^ v1) - v2) & 2 & v18;
    *v6 = v22 + v19;
    int64_t v25 = *(int64_t *)((v23 & (int64_t)&g3) + v16); // 0x9eaa0
    *v3 = *v3 + 4;
    return ((v24 - v23 ^ (int64_t)L"\n2" ^ 16 | v1) ^ v25) - ((v17 + v23 + v24 | 240) + (v21 & v23 ^ v5 | v21 + 32 - (int64_t)&g2));
}

// Address range: 0x9eacb - 0x9ede9
int64_t function_9eacb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9eacb
    int64_t v1; // 0x9eacb
    int64_t v2 = v1;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x102e90a5;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x9eb2d
    int64_t v4 = *v3; // 0x9eb2d
    *v3 = v4 + 0x550e678f;
    int64_t * v5 = (int64_t *)(v2 + 10); // 0x9eb72
    uint64_t v6 = *(int64_t *)(v2 + (int64_t)*(int16_t *)*v5); // 0x9eb8c
    int64_t v7 = v2 + 0x102e90a5; // 0x9ebad
    uint64_t v8 = v4 + 0x653cf834; // 0x9ebd6
    char v9 = *(char *)(v2 + 404); // 0x9ebf8
    int64_t v10 = v6; // 0x9ebff
    int64_t v11 = v7; // 0x9ebff
    if (v9 == 98) {
        unsigned char v12 = (char)v8 % 32; // 0x9ec06
        unsigned char v13 = (char)v6; // 0x9ec06
        bool v14 = (v6 & (int64_t)L"\n2") != 0; // 0x9ec06
        bool v15 = (v6 & 64) != 0; // 0x9ec06
        v11 = v7;
        bool v16 = (v6 & 4) != 0; // 0x9ec06
        bool v17 = v6 % 2 != 0; // 0x9ec06
        if (v12 != 0) {
            char v18 = v7; // 0x9ec06
            v13 = v18 << v12;
            unsigned char v19 = llvm_ctpop_i8(v13); // 0x9ec06
            char v20 = (v18 << v12 - 1) / 128; // 0x9ec06
            v14 = v12 == 1 ? v13 / 128 != v20 : (v6 & (int64_t)L"\n2") != 0;
            v15 = v13 == 0;
            v11 = v7 & -256 | (int64_t)v13;
            v16 = v19 % 2 == 0;
            v17 = v20 != 0;
        }
        v10 = 256 * (int64_t)((v6 & 256) != 0) | 16 * (int64_t)((v6 & 16) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | 128 * (int64_t)(v13 < 0) | 2048 * (int64_t)v14 | 64 * (int64_t)v15 | (int64_t)v17 | 4 * (int64_t)v16 | 2;
    }
    int64_t v21 = v10;
    int64_t v22 = v21; // 0x9ec18
    int64_t v23 = v11; // 0x9ec18
    if (v9 == 50) {
        uint16_t v24 = (int16_t)v8 % 32; // 0x9ec22
        bool v25 = (char)v21 < 0; // 0x9ec22
        bool v26 = (v21 & (int64_t)L"\n2") != 0; // 0x9ec22
        bool v27 = (v21 & 64) != 0; // 0x9ec22
        v23 = v11;
        bool v28 = (v21 & 4) != 0; // 0x9ec22
        bool v29 = v21 % 2 != 0; // 0x9ec22
        if (v24 != 0) {
            int16_t v30 = v11; // 0x9ec22
            uint16_t v31 = v30 << v24; // 0x9ec22
            unsigned char v32 = llvm_ctpop_i8((char)v31); // 0x9ec22
            int16_t v33 = (v30 << v24 - 1) / 0x8000; // 0x9ec22
            v26 = v24 == 1 ? v31 / 0x8000 != v33 : (v21 & (int64_t)L"\n2") != 0;
            v25 = v31 < 0;
            v27 = v31 == 0;
            v23 = v11 & -0x10000 | (int64_t)v31;
            v28 = v32 % 2 == 0;
            v29 = v33 != 0;
        }
        v22 = 256 * (int64_t)((v21 & 256) != 0) | 16 * (int64_t)((v21 & 16) != 0) | 512 * (int64_t)((v21 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v21 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v21 & (int64_t)"le") != 0) | 128 * (int64_t)v25 | 2048 * (int64_t)v26 | 64 * (int64_t)v27 | (int64_t)v29 | 4 * (int64_t)v28 | 2;
    }
    int64_t v34 = v22;
    int64_t v35 = v34; // 0x9ec2d
    int64_t v36 = v23; // 0x9ec2d
    if (v9 == 80) {
        uint32_t v37 = (int32_t)v8 % 32; // 0x9ec34
        bool v38 = (char)v34 < 0; // 0x9ec34
        bool v39 = (v34 & (int64_t)L"\n2") != 0; // 0x9ec34
        bool v40 = (v34 & 64) != 0; // 0x9ec34
        v36 = v23;
        bool v41 = (v34 & 4) != 0; // 0x9ec34
        bool v42 = v34 % 2 != 0; // 0x9ec34
        if (v37 != 0) {
            int32_t v43 = v23; // 0x9ec34
            int32_t v44 = v43 << v37; // 0x9ec34
            unsigned char v45 = llvm_ctpop_i8((char)v44); // 0x9ec34
            v39 = v37 == 1 ? v44 < 0 != v43 << v37 - 1 < 0 : (v34 & (int64_t)L"\n2") != 0;
            v38 = v44 < 0;
            v40 = v44 == 0;
            v36 = v44;
            v41 = v45 % 2 == 0;
            v42 = v43 << v37 - 1 < 0;
        }
        v35 = 256 * (int64_t)((v34 & 256) != 0) | 16 * (int64_t)((v34 & 16) != 0) | 512 * (int64_t)((v34 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v34 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v34 & (int64_t)"le") != 0) | 128 * (int64_t)v38 | 2048 * (int64_t)v39 | 64 * (int64_t)v40 | (int64_t)v42 | 4 * (int64_t)v41 | 2;
    }
    int64_t v46 = v35;
    int64_t v47 = v46; // 0x9ec3b
    int64_t v48 = v36; // 0x9ec3b
    if (v9 == 58) {
        uint64_t v49 = v8 % 64; // 0x9ec4c
        bool v50 = (char)v46 < 0; // 0x9ec4c
        bool v51 = (v46 & (int64_t)L"\n2") != 0; // 0x9ec4c
        bool v52 = (v46 & 64) != 0; // 0x9ec4c
        v48 = v36;
        bool v53 = (v46 & 4) != 0; // 0x9ec4c
        int64_t v54 = v46 % 2; // 0x9ec4c
        if (v49 != 0) {
            v48 = v36 << v49;
            unsigned char v55 = llvm_ctpop_i8((char)v48); // 0x9ec4c
            v54 = (v36 << v49 - 1) / 0x8000000000000000;
            v51 = v49 == 1 ? v48 >> 63 != v54 : (v46 & (int64_t)L"\n2") != 0;
            v50 = v48 < 0;
            v52 = v48 == 0;
            v53 = v55 % 2 == 0;
        }
        v47 = 256 * (int64_t)((v46 & 256) != 0) | 16 * (int64_t)((v46 & 16) != 0) | 512 * (int64_t)((v46 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v46 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v46 & (int64_t)"le") != 0) | 128 * (int64_t)v50 | 2048 * (int64_t)v51 | 64 * (int64_t)v52 | 4 * (int64_t)v53 | (int64_t)(v54 != 0) | 2;
    }
    int64_t * v56 = (int64_t *)(v2 + 113); // 0x9ec75
    *v56 = v48 - 0x28ce0c33;
    int64_t v57 = *v5; // 0x9ecb5
    if (*(char *)(v57 + 2) != 0) {
        // 0x9ecdc
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v57) = v47;
    }
    // 0x9ed19
    *v56 = v48 + 0x1a44e4ef;
    int32_t * v58 = (int32_t *)(v2 + 368); // 0x9ed82
    int32_t v59 = *v58; // 0x9ed82
    uint32_t v60 = (int32_t)*(int16_t *)(*v5 + 3) + 0x20f4b909 + v59; // 0x9ed8b
    *v58 = v60 & v59;
    *v5 = *v5 + 5;
    return *(int64_t *)(*(int64_t *)(v2 + 271) + (int64_t)(v60 % 0x10000));
}

// Address range: 0x9edf1 - 0x9edf4
int64_t function_9edf1(void) {
    // 0x9edf1
    int64_t result; // 0x9edf1
    return result;
}

// Address range: 0xa0a9e - 0xa0dca
int64_t function_a0a9e(int64_t a1, int64_t a2) {
    // 0xa0a9e
    int64_t v1; // 0xa0a9e
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xa0ab5
    int64_t result = v1 + 368; // 0xa0abb
    int32_t * v3 = (int32_t *)result; // 0xa0ac2
    int32_t v4 = *v3 + *v2; // 0xa0ac2
    *v3 = v4;
    int32_t v5 = v4 - (*v2 ^ 0x64193a1a); // 0xa0b15
    *v3 = v5;
    int32_t v6 = *v2; // 0xa0b2e
    int32_t v7 = v5; // 0xa0b3f
    if ((v6 & 2) != 0) {
        // 0xa0b45
        *v2 = v6 & 0x202e000 | 0x54bd1bfe;
        v7 = *v3;
    }
    // 0xa0b63
    *v3 = v7 ^ 0x227666a1;
    int32_t v8 = *v2; // 0xa0ba3
    int32_t v9 = v8; // 0xa0bb1
    if ((v8 & 2) != 0) {
        int32_t v10 = v8 ^ 0x9ad7a2f; // 0xa0bc1
        *v2 = v10;
        v9 = v10;
        if ((v10 & 2) != 0) {
            int32_t v11 = v8 ^ 0x5589bd0e; // 0xa0c13
            *v2 = v11;
            v9 = v11;
        }
    }
    int64_t * v12 = (int64_t *)(v1 + 10); // 0xa0c38
    uint32_t v13 = *(int32_t *)*v12 ^ v9; // 0xa0c5b
    *v3 = *v3 + v13;
    *v2 = *v2 | 0x4c640cd2;
    *(int64_t *)(v1 + 96) = (int64_t)v13 - 0x653cf834;
    *v3 = *v3 + (int32_t)*(int16_t *)(*v12 + 4);
    *v12 = *v12 + 6;
    return result;
}

// Address range: 0xac110 - 0xac440
int64_t function_ac110(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xac110
    int64_t v1; // 0xac110
    int64_t result = v1 + 368; // 0xac138
    int32_t * v2 = (int32_t *)result; // 0xac13f
    int32_t * v3 = (int32_t *)(v1 + 35); // 0xac151
    int32_t v4 = *v3 - (*v2 | 0x5188b16e); // 0xac151
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v1 + 10); // 0xac184
    uint16_t v6 = *(int16_t *)*v5; // 0xac191
    int32_t v7 = *v2; // 0xac19f
    *v3 = v4 & 0x6764746a;
    int64_t * v8 = (int64_t *)(v1 + 129); // 0xac26b
    *v8 = v1 - 0x1a44e4ef + ((int64_t)((int32_t)v6 - v7 ^ v4) & (int64_t)&g3);
    int32_t v9 = *v3 - (*v2 ^ 0x46157a61) + 0x17fe21ad; // 0xac299
    int32_t v10 = (v9 & 2) == 0 ? v9 : (v9 ^ 0x35ad1d25) - 0x496039c5;
    *v3 = v10;
    *v2 = v10 ^ *v2;
    int64_t * v11 = (int64_t *)(*v8 + 0x1a44e4ef); // 0xac31b
    *v11 = *v11 + *(int64_t *)(v1 + 187);
    *v2 = (int32_t)*(int16_t *)(*v5 + 2) ^ 0x4160066b ^ *v2;
    *v5 = *v5 + 4;
    return result;
}

// Address range: 0xac445 - 0xac447
int64_t function_ac445(void) {
    // 0xac445
    int64_t result; // 0xac445
    return result;
}

// Address range: 0xacbc5 - 0xacefd
int64_t function_acbc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xacbc5
    int64_t v1; // 0xacbc5
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0x690e2eda;
    int64_t v3 = v2 ^ 0x64ad9903; // 0xacc3f
    int64_t * v4 = (int64_t *)(v2 + 10); // 0xacc67
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)*v4); // 0xacc8b
    char v6 = *(char *)(v2 + 404); // 0xacca6
    int64_t v7 = v5; // 0xaccad
    int64_t v8 = v3; // 0xaccad
    if (v6 == 98) {
        unsigned char v9 = (char)v3; // 0xaccc1
        char v10 = v9 - 1; // 0xaccc1
        unsigned char v11 = llvm_ctpop_i8(v10); // 0xaccc1
        v7 = 128 * (int64_t)(v10 < 0) | 64 * (int64_t)(v10 == 0) | 2048 * (int64_t)((v9 & -v9) < 0) | 16 * (int64_t)(v9 % 16 > 16) | 4 * (int64_t)(v11 % 2 == 0) | (int64_t)(v5 % 2 != 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | 2;
        v8 = v3 & -256 | (int64_t)v10;
    }
    int64_t v12 = v7;
    int64_t v13 = v12; // 0xaccd2
    int64_t v14 = v8; // 0xaccd2
    if (v6 == 50) {
        uint16_t v15 = (int16_t)v8; // 0xaccdf
        int16_t v16 = v15 - 1; // 0xaccdf
        unsigned char v17 = llvm_ctpop_i8((char)v16); // 0xaccdf
        v13 = 256 * (int64_t)((v12 & 256) != 0) | (int64_t)(v12 % 2 != 0) | 512 * (int64_t)((v12 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v12 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v12 & (int64_t)"le") != 0) | 128 * (int64_t)(v16 < 0) | 64 * (int64_t)(v16 == 0) | 2048 * (int64_t)((v15 & -v15) < 0) | 16 * (int64_t)(v15 % 16 > 16) | 4 * (int64_t)(v17 % 2 == 0) | 2;
        v14 = v8 & -0x10000 | (int64_t)v16;
    }
    int64_t v18 = v13;
    int64_t v19 = v18; // 0xaccea
    int64_t v20 = v14; // 0xaccea
    if (v6 == 80) {
        uint32_t v21 = (int32_t)v14; // 0xaccfb
        int32_t v22 = v21 - 1; // 0xaccfb
        unsigned char v23 = llvm_ctpop_i8((char)v22); // 0xaccfb
        v19 = 256 * (int64_t)((v18 & 256) != 0) | (int64_t)(v18 % 2 != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | 128 * (int64_t)(v22 < 0) | 64 * (int64_t)(v22 == 0) | 2048 * (int64_t)((v21 & -v21) < 0) | 16 * (int64_t)(v21 % 16 > 16) | 4 * (int64_t)(v23 % 2 == 0) | 2;
        v20 = v22;
    }
    int64_t v24 = v20;
    int64_t v25 = v19;
    int64_t v26 = v25; // 0xacd02
    int64_t v27 = v24; // 0xacd02
    if (v6 == 58) {
        // 0xacd08
        v27 = v24 - 1;
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0xacd0c
        v26 = 256 * (int64_t)((v25 & 256) != 0) | (int64_t)(v25 % 2 != 0) | 512 * (int64_t)((v25 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v25 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v25 & (int64_t)"le") != 0) | 128 * (int64_t)(v27 < 0) | 64 * (int64_t)(v27 == 0) | 2048 * (int64_t)((v24 & -v24) < 0) | 16 * (int64_t)(v24 % 16 > 16) | 4 * (int64_t)(v28 % 2 == 0) | 2;
    }
    int64_t * v29 = (int64_t *)(v2 + 113); // 0xacd31
    *v29 = v27;
    int64_t v30 = *v4; // 0xacd79
    if (*(char *)(v30 + 2) != 0) {
        // 0xacdb6
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v30) = v26;
    }
    // 0xace1a
    *v29 = v27 + 0x1a44e4ef;
    int64_t result = v2 + 368; // 0xace8b
    int32_t * v31 = (int32_t *)result; // 0xace91
    int32_t v32 = *v31; // 0xace91
    *v31 = ((int32_t)*(int16_t *)(*v4 + 3) - v32 ^ 0x7cf1b821) & v32;
    *v4 = *v4 + 5;
    return result;
}

// Address range: 0xadbfd - 0xadf2c
int64_t function_adbfd(int64_t a1) {
    // 0xadbfd
    int64_t v1; // 0xadbfd
    int64_t v2 = v1 + 368; // 0xadc0e
    int32_t * v3 = (int32_t *)v2; // 0xadc14
    *v3 = *v3 - 0x509f61c9;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0xadc5a
    *v4 = *v4 | 0x6cd0e9c0;
    int64_t v5 = *(int64_t *)(v1 + 113) - 0x1a44e4ef; // 0xadc95
    int64_t * v6 = (int64_t *)(v1 + 129); // 0xadca6
    int64_t v7 = *v6; // 0xadca6
    int64_t v8 = v7 + 0x1a44e4ef; // 0xadca9
    char v9 = *(char *)(v1 + 404); // 0xadcba
    if (v9 == 98) {
        // 0xadcc6
        *(char *)v8 = (char)v5;
    }
    if (v9 == 50) {
        // 0xadcd2
        *(int16_t *)v8 = (int16_t)v5;
    }
    int64_t v10 = v8; // 0xadcd9
    if (v9 == 80) {
        // 0xadcdf
        *(int32_t *)v8 = (int32_t)v5;
        v10 = v8;
        if (*(char *)(v1 + 367) != 0) {
            int64_t v11 = v7 + 0x1a44e4f3; // 0xadcf6
            *(int32_t *)v11 = 0;
            v10 = v11;
        }
    }
    // 0xadd03
    if (v9 == 58) {
        // 0xadd0c
        *(int64_t *)v10 = v5;
    }
    int32_t v12 = *v3 - 0x7b92c22e; // 0xadd5c
    *v3 = v12;
    int64_t v13 = *v6; // 0xadd63
    int64_t v14 = (char)v10 == 0 ? -v1 : 0x7fffffff82b35edd;
    int32_t v15 = v12 | 0x1d2af87; // 0xaddc8
    *v3 = v15;
    int64_t * v16 = (int64_t *)(v1 + 10); // 0xade06
    int64_t v17 = *(int64_t *)(v1 + 271); // 0xade53
    uint32_t v18 = (int32_t)*(int16_t *)*v16 - v15; // 0xade8a
    *v3 = v18 ^ v15;
    *v16 = *v16 + 2;
    return v17 - 144 & v1 & (v2 - (2 * (v14 + v2 + v13) - 480 ^ (int64_t)v18) | v17);
}

// Address range: 0xb2db6 - 0xb3128
int64_t function_b2db6(int64_t a1, int64_t a2) {
    // 0xb2db6
    int64_t v1; // 0xb2db6
    int64_t v2 = v1 + 368; // 0xb2dc6
    int32_t * v3 = (int32_t *)v2; // 0xb2dcd
    int32_t v4 = *v3 - 0x31642a8c ^ 0x5b9839d1; // 0xb2e1d
    *v3 = v4;
    int32_t * v5 = (int32_t *)(v1 + 35); // 0xb2e30
    int32_t v6 = v4 | *v5; // 0xb2e44
    *v3 = v6;
    int64_t * v7 = (int64_t *)(v1 + 10); // 0xb2e72
    uint32_t v8 = v6 + (int32_t)*(int16_t *)(*v7 + 2) - *v5; // 0xb2ec1
    *v3 = v8 & v6;
    *v5 = *v5 - 0x1ec23851;
    int64_t v9 = *(int64_t *)(((int64_t)v8 & (int64_t)&g3) + v1); // 0xb2f4b
    *(int64_t *)(v1 + 129) = v9 - 0x1a44e4ef;
    int32_t v10 = *v3 - *v5 ^ 0x6445395f; // 0xb2feb
    *v3 = v10;
    int64_t v11 = *(int64_t *)(v1 + 271); // 0xb3045
    int64_t v12 = 2 * v2 + 0x7ffffe70 | 127; // 0xb3066
    uint32_t v13 = (v10 ^ (int32_t)*(int16_t *)*v7) - 0x519e8380; // 0xb30a5
    *v3 = v13 + v10;
    *v7 = *v7 + 4;
    return ((int64_t)v13 & (int64_t)&g3) + v11 & -364 - v1 + v12 + (127 - v12 ^ v12);
}

// Address range: 0xb312a - 0xb312c
int64_t function_b312a(void) {
    // 0xb312a
    int64_t result; // 0xb312a
    return result;
}

// Address range: 0xb312d - 0xb312e
int64_t function_b312d(void) {
    // 0xb312d
    int64_t result; // 0xb312d
    return result;
}

// Address range: 0xb8064 - 0xb837c
int64_t function_b8064(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb8064
    int64_t v1; // 0xb8064
    int64_t v2 = v1;
    int64_t v3 = v2 + 10; // 0xb809e
    int64_t * v4 = (int64_t *)v3; // 0xb80a5
    int32_t * v5 = (int32_t *)(v2 + 35); // 0xb80e0
    int32_t v6 = (int32_t)*(char *)*v4 - *v5; // 0xb80e0
    int64_t v7 = v2 + 368; // 0xb80e6
    int32_t * v8 = (int32_t *)v7; // 0xb80ed
    *v8 = *v8 ^ v6;
    *v5 = *v5 & 0x5792b958;
    *(char *)(v2 + 404) = (char)v6;
    int32_t v9 = *v8 & *v5; // 0xb8162
    *v8 = v9;
    *v8 = *v5 ^ v9;
    int64_t v10 = *v4; // 0xb8259
    int64_t v11 = (int64_t)*(int16_t *)(v10 + 1); // 0xb8287
    *v4 = v10 + 3;
    return v11 + 0xf99a564b + ((((v2 - ((int64_t)((int32_t)v2 + 368 + v9) & (int64_t)&g2) | 64) + v3 | v2 ^ (int64_t)&g1 - 32 ^ v7) ^ 0x7fffffff) + v10 ^ 10 | v11) & v7;
}

// Address range: 0xb837e - 0xb8384
int64_t function_b837e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 57); // 0xb837e
    *v1 = *v1 - 1;
    int64_t result; // 0xb837e
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

// Address range: 0xbe8cd - 0xbec0e
int64_t function_be8cd(int64_t a1, int64_t a2, int64_t a3) {
    // 0xbe8cd
    int64_t v1; // 0xbe8cd
    int64_t v2 = v1 + 96; // 0xbe8da
    int64_t * v3 = (int64_t *)v2; // 0xbe8ee
    int64_t v4 = v1 ^ 0x444dd26b; // 0xbe924
    *v3 = *v3 + 0x653cf834 ^ 0x49ee65b2;
    *(int64_t *)v1 = v4;
    int64_t * v5 = (int64_t *)(v1 + 10); // 0xbe971
    uint64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)*v5); // 0xbe98e
    int64_t v7 = v1 ^ 0x49ee65b2; // 0xbe9b8
    uint64_t v8 = *v3 ^ 0x49ee65b2; // 0xbe9dc
    unsigned char v9 = *(char *)(v1 + 404); // 0xbea00
    int64_t v10 = v6; // 0xbea07
    int64_t v11 = v7; // 0xbea07
    if (v9 == 98) {
        unsigned char v12 = (char)v8 % 32; // 0xbea11
        bool v13 = (v6 & 4) != 0; // 0xbea11
        bool v14 = (v6 & 64) != 0; // 0xbea11
        char v15 = v6; // 0xbea11
        bool v16 = (v6 & (int64_t)L"\n2") != 0; // 0xbea11
        bool v17 = v6 % 2 != 0; // 0xbea11
        v11 = v7;
        if (v12 != 0) {
            char v18 = v7; // 0xbea11
            v15 = v18 >> v12;
            v16 = v12 == 1 ? v18 < 0 : (v6 & (int64_t)L"\n2") != 0;
            v13 = llvm_ctpop_i8(v15) % 2 == 0;
            v14 = v15 == 0;
            v17 = (1 << v12 - 1 & v18) != 0;
            v11 = v7 & -256 | (int64_t)v15;
        }
        v10 = 256 * (int64_t)((v6 & 256) != 0) | 16 * (int64_t)((v6 & 16) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | 4 * (int64_t)v13 | 64 * (int64_t)v14 | (int64_t)v17 | 128 * (int64_t)(v15 < 0) | 2048 * (int64_t)v16 | 2;
    }
    int64_t v19 = v10;
    int64_t v20 = v19; // 0xbea19
    int64_t v21 = v11; // 0xbea19
    if (v9 == 50) {
        uint16_t v22 = (int16_t)v8 % 32; // 0xbea27
        bool v23 = (v19 & 4) != 0; // 0xbea27
        bool v24 = (v19 & 64) != 0; // 0xbea27
        bool v25 = (char)v19 < 0; // 0xbea27
        bool v26 = (v19 & (int64_t)L"\n2") != 0; // 0xbea27
        bool v27 = v19 % 2 != 0; // 0xbea27
        v21 = v11;
        if (v22 != 0) {
            int16_t v28 = v11; // 0xbea27
            int16_t v29 = v28 >> v22; // 0xbea27
            v26 = v22 == 1 ? v28 < 0 : (v19 & (int64_t)L"\n2") != 0;
            v23 = llvm_ctpop_i8((char)v29) % 2 == 0;
            v24 = v29 == 0;
            v25 = v29 < 0;
            v27 = (1 << v22 - 1 & v28) != 0;
            v21 = v11 & -0x10000 | (int64_t)v29;
        }
        v20 = 256 * (int64_t)((v19 & 256) != 0) | 16 * (int64_t)((v19 & 16) != 0) | 512 * (int64_t)((v19 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v19 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v19 & (int64_t)"le") != 0) | 4 * (int64_t)v23 | 64 * (int64_t)v24 | 128 * (int64_t)v25 | (int64_t)v27 | 2048 * (int64_t)v26 | 2;
    }
    int64_t v30 = v20;
    int64_t v31 = v30; // 0xbea33
    int64_t v32 = v21; // 0xbea33
    if (v9 == 80) {
        uint32_t v33 = (int32_t)v8 % 32; // 0xbea3a
        bool v34 = (v30 & 4) != 0; // 0xbea3a
        bool v35 = (v30 & 64) != 0; // 0xbea3a
        bool v36 = (char)v30 < 0; // 0xbea3a
        bool v37 = (v30 & (int64_t)L"\n2") != 0; // 0xbea3a
        bool v38 = v30 % 2 != 0; // 0xbea3a
        v32 = v21;
        if (v33 != 0) {
            int32_t v39 = v21; // 0xbea3a
            int32_t v40 = v39 >> v33; // 0xbea3a
            v37 = v33 == 1 ? v39 < 0 : (v30 & (int64_t)L"\n2") != 0;
            v34 = llvm_ctpop_i8((char)v40) % 2 == 0;
            v35 = v40 == 0;
            v36 = v40 < 0;
            v38 = (1 << v33 - 1 & v39) != 0;
            v32 = v40;
        }
        v31 = 256 * (int64_t)((v30 & 256) != 0) | 16 * (int64_t)((v30 & 16) != 0) | 512 * (int64_t)((v30 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v30 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v30 & (int64_t)"le") != 0) | 4 * (int64_t)v34 | 64 * (int64_t)v35 | 128 * (int64_t)v36 | (int64_t)v38 | 2048 * (int64_t)v37 | 2;
    }
    int64_t v41 = v4 & 32; // 0xbe95d
    int64_t v42 = ((v2 ^ (uint64_t)v1 % 2) + 2 ^ v2) - (int64_t)&g3 | v41 + a3 - (v41 | 18); // 0xbe9bf
    int64_t v43 = v31;
    int64_t v44 = v43; // 0xbea49
    int64_t v45 = v42; // 0xbea49
    int64_t v46 = v32; // 0xbea49
    if (v9 == 58) {
        uint64_t v47 = v8 % 64; // 0xbea53
        bool v48 = (v43 & 4) != 0; // 0xbea53
        bool v49 = (v43 & 64) != 0; // 0xbea53
        bool v50 = (char)v43 < 0; // 0xbea53
        bool v51 = (v43 & (int64_t)L"\n2") != 0; // 0xbea53
        int64_t v52 = v43 % 2; // 0xbea53
        v46 = v32;
        if (v47 != 0) {
            v46 = v32 >> v47;
            v51 = v47 == 1 ? v32 < 0 : (v43 & (int64_t)L"\n2") != 0;
            v48 = llvm_ctpop_i8((char)v46) % 2 == 0;
            v49 = v46 == 0;
            v50 = v46 < 0;
            v52 = v32 & 1 << v47 - 1;
        }
        v44 = 256 * (int64_t)((v43 & 256) != 0) | 16 * (int64_t)((v43 & 16) != 0) | 512 * (int64_t)((v43 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v43 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v43 & (int64_t)"le") != 0) | 4 * (int64_t)v48 | 64 * (int64_t)v49 | 128 * (int64_t)v50 | 2048 * (int64_t)v51 | (int64_t)(v52 != 0) | 2;
        v45 = v42 - (int64_t)v9;
    }
    // 0xbea61
    *(int64_t *)(v1 + 113) = v46 + 0x1a44e4ef;
    int64_t v53 = *v5; // 0xbead8
    char v54 = *(char *)(v53 + 4); // 0xbeaf6
    int64_t v55 = v53; // 0xbeb01
    v53 = v45 - 1;
    if (v54 != 0) {
        // 0xbeb07
        *(int64_t *)(v1 + (int64_t)*(int16_t *)v53) = v44;
        v55 = *v5;
    }
    int32_t * v56 = (int32_t *)(v1 + 368); // 0xbebd2
    *v56 = ((int32_t)*(int16_t *)(v55 + 2) ^ 0x114009e8) & *v56;
    *v5 = *v5 + 5;
    return v53 ^ (int64_t)L"\n2";
}

// Address range: 0xbec10 - 0xbec15
int64_t function_bec10(void) {
    // 0xbec10
    return function_49f4755e();
}

// Address range: 0xc0535 - 0xc088d
int64_t function_c0535(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int16_t a7, int64_t a8) {
    // 0xc0535
    int64_t v1; // 0xc0535
    int64_t * v2 = (int64_t *)(v1 + 129); // 0xc054d
    int64_t v3 = *v2;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0xc05c6
    int32_t v5 = *v4; // 0xc05c6
    int64_t v6 = v3; // 0xc05d7
    if ((v5 & 2) != 0) {
        // 0xc05dd
        *v4 = v5 ^ 0x216b15;
        v6 = *v2;
    }
    int64_t v7 = v1 + 404; // 0xc0666
    int64_t v8 = v6 + 0x1a44e4ef; // 0xc067d
    int64_t * v9 = (int64_t *)(v1 + 10); // 0xc0695
    int64_t v10 = v1 + (int64_t)*(int16_t *)(*v9 + 2); // 0xc06a3
    int64_t v11 = v10 != v8 ? v10 : 0;
    if (*(char *)v7 != 50) {
        // 0xc06e2
        *(int64_t *)v8 = a8;
        if (v11 != 0) {
            int64_t * v12 = (int64_t *)v11; // 0xc06f2
            *v12 = *v12 + 8;
        }
    } else {
        // 0xc06c0
        *(int16_t *)v8 = a7;
        if (v11 != 0) {
            int64_t * v13 = (int64_t *)v11; // 0xc06d1
            *v13 = *v13 + 2;
        }
    }
    int32_t * v14 = (int32_t *)(v1 + 368); // 0xc072d
    int32_t v15 = *v4 ^ 0x45fbcef1 ^ *v14; // 0xc072d
    *v14 = v15;
    int32_t v16 = *v4; // 0xc073a
    uint32_t v17 = v16 & 2; // 0xc073e
    int32_t v18 = v15; // 0xc074c
    if (v17 != 0) {
        // 0xc0752
        *v4 = v16 + 0x508148d3;
        v18 = *v14;
    }
    int64_t v19 = (char)a6 == 0 ? 0 : -((v3 ^ 0x24569711));
    int64_t v20 = v1 + 271; // 0xc079e
    int64_t v21 = *(int64_t *)v20; // 0xc07a8
    int64_t v22 = *v9; // 0xc07ac
    uint16_t v23 = *(int16_t *)v22; // 0xc07c6
    *v9 = v22 + 4;
    return (-2 * v1 - 402 & v7 & v21 | v11 + v19 - (int64_t)v17 & v20) - 0x7fffffff | ((int64_t)((v18 ^ (int32_t)v23) + 0x7f7eb061) & (int64_t)&g3) + v21 | 2;
}

// Address range: 0xc088f - 0xc0890
int64_t function_c088f(void) {
    // 0xc088f
    int64_t result; // 0xc088f
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

// Address range: 0xc2d39 - 0xc2d3e
int64_t function_c2d39(void) {
    // 0xc2d39
    return function_cdae86();
}
