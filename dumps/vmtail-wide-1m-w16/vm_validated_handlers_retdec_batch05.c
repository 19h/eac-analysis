/*
 * Targeted RetDec C for static-validated VM handler native ranges, batch 5.
 *
 * These handlers already have 100% validated handler-layer transfer models.
 * This artifact keeps native decompiler sidecars for full dispatch-entry
 * coverage and cross-checking against the VM-lifted C pseudocode.
 *
 * Total static-validated handler ranges: 166
 * Batch size: 24
 * Ranges:
 *   0xae90b-0xaedb0 entry=260 events=2645 span_bytes=1187 insns=248
 *   0x9fbcd-0xa0078 entry=196 events=14371 span_bytes=1195 insns=247
 *   0xba1e2-0xba690 entry=317 events=537 span_bytes=1195 insns=256
 *   0x9ca8d-0x9cf3f entry=179 events=737 span_bytes=1202 insns=262
 *   0x885b0-0x88a65 entry=79 events=3633 span_bytes=1205 insns=264
 *   0xa1484-0xa1946 entry=203 events=9820 span_bytes=1218 insns=259
 *   0x8e6b4-0x8eb87 entry=105 events=671 span_bytes=1230 insns=261
 *   0xb045b-0xb093e entry=269 events=2612 span_bytes=1247 insns=270
 *   0x7aee8-0x7b3cb entry=13 events=5 span_bytes=1248 insns=272
 *   0xb3128-0xb361f entry=282 events=269 span_bytes=1271 insns=267
 *   0xc088d-0xc0d8b entry=347 events=24299 span_bytes=1277 insns=269
 *   0xb708d-0xb7593 entry=301 events=4380 span_bytes=1283 insns=277
 *   0x96407-0x96925 entry=146 events=578 span_bytes=1309 insns=278
 *   0xbec0e-0xbf136 entry=337 events=26534 span_bytes=1319 insns=278
 *   0xc140b-0xc1933 entry=349 events=503 span_bytes=1320 insns=289
 *   0xb4edd-0xb541d entry=291 events=479 span_bytes=1340 insns=278
 *   0xb540f-0xb594d entry=292 events=651 span_bytes=1341 insns=293
 *   0xa5f3c-0xa647d entry=222 events=254 span_bytes=1345 insns=292
 *   0xbd36d-0xbd8bd entry=332 events=3292 span_bytes=1359 insns=294
 *   0xa799b-0xa7f06 entry=231 events=4 span_bytes=1386 insns=299
 *   0x8a49e-0x8aa21 entry=87 events=12 span_bytes=1405 insns=296
 *   0x90319-0x908a3 entry=114 events=25300 span_bytes=1417 insns=303
 *   0x9299b-0x92f2f entry=128 events=1158 span_bytes=1427 insns=299
 *   0x98a9a-0x99036 entry=157 events=14693 span_bytes=1435 insns=296
 */
#include <stdbool.h>
#include <stdint.h>

typedef __int128 int128_t;
extern int g1;
extern int g2;
extern int g3;
extern int g4;
unsigned char llvm_ctpop_i8(unsigned char value);
void __asm_out(uint16_t port, char value);
uint8_t __readfsbyte(int64_t offset);

int64_t function_23cab074();
int64_t function_49e7726d();
int64_t function_4d01f6f2();

// Address range: 0x7aee8 - 0x7b3be
int64_t function_7aee8(int64_t a1, int64_t a2) {
    // 0x7aee8
    int64_t v1; // 0x7aee8
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x7af00
    int32_t v4 = *v3; // 0x7af00
    if ((v4 & 2) != 0) {
        // 0x7af14
        *v3 = v4 - 0x1c36555 | 0x771fee31;
    }
    int64_t * v5 = (int64_t *)(v2 + 96); // 0x7af5e
    *v5 = *v5 + 0x18cc22fc;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x4c70d538;
    int32_t v6 = *v3; // 0x7b047
    if ((v6 & 2) != 0) {
        // 0x7b05e
        *v3 = v6 | 0x1490ac71;
    }
    int64_t v7 = v2 - 0x4c70d538; // 0x7b026
    uint64_t v8 = *v5 + 0x4c70d538; // 0x7b040
    unsigned char v9 = *(char *)(v2 + 404); // 0x7b082
    int64_t v10 = v7; // 0x7b089
    int64_t v11; // 0x7aee8
    bool v12; // 0x7aee8
    if (v9 == 98) {
        char v13 = v8 | v7; // 0x7b08f
        int64_t v14 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v13) % 2 == 0) | 2; // bp-8, 0x7b092
        v11 = (int64_t)&v14;
        v10 = v8 % 256 | v7;
    }
    int64_t v15 = v11; // 0x7b097
    int64_t v16 = v10; // 0x7b097
    if (v9 == 50) {
        int64_t v17 = v10 | v8;
        int16_t v18 = v17; // 0x7b09d
        int64_t v19 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v18 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v17) % 2 == 0) | 2; // bp-16, 0x7b0a1
        v15 = (int64_t)&v19;
        v16 = v10 | v8 % 0x10000;
    }
    int64_t v20 = v15; // 0x7b0a6
    int64_t v21 = v16; // 0x7b0a6
    if (v9 == 80) {
        int64_t v22 = v16 | v8;
        int32_t v23 = v22; // 0x7b0ac
        unsigned char v24 = llvm_ctpop_i8((char)v22); // 0x7b0ac
        v20 = v15 - 8;
        *(int64_t *)v20 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v23 == 0) | 128 * (int64_t)(v23 < 0) | 4 * (int64_t)(v24 % 2 == 0) | 2;
        v21 = v22 & 0xffffffff;
    }
    int64_t v25 = v20; // 0x7b0b4
    int64_t v26 = v21; // 0x7b0b4
    if (v9 == 58) {
        // 0x7b0ba
        v26 = v21 | v8;
        unsigned char v27 = llvm_ctpop_i8((char)v26); // 0x7b0ba
        v25 = v20 - 8;
        *(int64_t *)v25 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 4 * (int64_t)(v27 % 2 == 0) | 2;
    }
    int64_t * v28 = (int64_t *)(v2 + 113); // 0x7b0ce
    *v28 = v26 ^ 0x4cfd5b1;
    int64_t * v29 = (int64_t *)(v2 + 10); // 0x7b0dd
    int64_t v30 = *v29; // 0x7b0dd
    if (*(char *)(v30 + 4) != 0) {
        uint16_t v31 = *(int16_t *)(v30 + 2); // 0x7b113
        *(int64_t *)(v2 + (int64_t)v31) = *(int64_t *)v25;
    }
    int64_t v32 = v2 + 368; // 0x7b129
    int32_t * v33 = (int32_t *)v32; // 0x7b130
    int32_t v34 = *v33 ^ 0x67934603; // 0x7b130
    *v33 = v34;
    int32_t v35 = *v3; // 0x7b168
    int32_t v36 = v34; // 0x7b179
    int32_t v37 = v35; // 0x7b179
    if ((v35 & 2) != 0) {
        // 0x7b17f
        v37 = v35 - 0x2de02e8;
        *v3 = v37;
        v36 = *v33;
    }
    // 0x7b199
    *v33 = v37 ^ v36;
    *v28 = (*v28 ^ 0x4cfd5b1) + 0x1a44e4ef;
    int32_t v38 = *v33; // 0x7b209
    int64_t v39 = *(int64_t *)(v2 + 271); // 0x7b288
    int64_t v40 = (v39 & (*(int64_t *)(v2 + 129) & -256 | (int64_t)v9) ^ 32) - v32; // 0x7b2b3
    int64_t v41 = *v29; // 0x7b2b6
    int64_t v42 = (v40 | (int64_t)&g2) - v2; // 0x7b2f6
    uint32_t v43 = (int32_t)*(int16_t *)v41 - v38; // 0x7b312
    int64_t v44 = (int64_t)v43 + 18 - (int64_t)L"\n2"; // 0x7b31a
    int64_t v45 = v43 - 0x5ad3c2e8; // 0x7b32a
    int64_t v46 = ((v42 & v40 ^ (v40 ^ (int64_t)(v38 | (int32_t)v2 + 129)) & (int64_t)&g3) & 144) + v44; // 0x7b330
    int64_t v47 = *(int64_t *)((v45 & (int64_t)&g4) + v39); // 0x7b39b
    *v29 = v41 + 5;
    return ((-((v39 + v42)) | -0x80000000) ^ v32 ^ (v44 + v45 | (int64_t)&g4) | v46) + v47 ^ (v46 | 8);
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
    int64_t v23 = *(int64_t *)(((int64_t)(v22 ^ v21) & (int64_t)&g4) + v18); // 0x88a32
    *v11 = *v11 + 5;
    return v23 & (v18 ^ ((v20 | 3 * v2 + ((int64_t)&g3 ^ 16) + 387 ^ 32) + (int64_t)&g3 + 16 | v20)) + (4 * v19 | 64);
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

// Address range: 0x8a49e - 0x8aa14
int64_t function_8a49e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8a49e
    int64_t v1; // 0x8a49e
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x8a4a8
    *v3 = *v3 - 0x4356d657;
    int64_t v4 = v2 + 368; // 0x8a4b2
    int32_t * v5 = (int32_t *)v4; // 0x8a4b9
    int32_t v6 = *v5 + 0x42559993 | 0x3c876d75; // 0x8a4cb
    *v5 = v6;
    int32_t v7 = v6 ^ *v3; // 0x8a4f6
    *v5 = v7;
    *v5 = *v3 + v7;
    int64_t * v8 = (int64_t *)(v2 + 96); // 0x8a573
    *v8 = *v8 + 0x653cf834;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0xabce6d2;
    *v5 = *v5 - *v3 | 0x5371e74e;
    int64_t v9 = v2 - 0xabce6d2; // 0x8a6b6
    int64_t v10 = *v8; // 0x8a6c7
    char v11 = *(char *)(v2 + 404); // 0x8a6d5
    int64_t v12 = v9; // 0x8a6d9
    int64_t v13; // 0x8a49e
    bool v14; // 0x8a49e
    if (v11 == 98) {
        uint64_t v15 = v10 & v9;
        char v16 = v15; // 0x8a6df
        int64_t v17 = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | 64 * (int64_t)(v16 == 0) | 128 * (int64_t)(v16 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v16) % 2 == 0) | 2; // bp-8, 0x8a6e2
        v13 = (int64_t)&v17;
        v12 = v15 % 256 | v9 & -256;
    }
    int64_t v18 = v13; // 0x8a6e5
    int64_t v19 = v12; // 0x8a6e5
    if (v11 == 50) {
        uint64_t v20 = v12 & v10;
        int16_t v21 = v20; // 0x8a6eb
        int64_t v22 = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v20) % 2 == 0) | 2; // bp-16, 0x8a6ef
        v18 = (int64_t)&v22;
        v19 = v20 % 0x10000 | v12 & -0x10000;
    }
    int64_t v23 = v18; // 0x8a6f2
    int64_t v24 = v19; // 0x8a6f2
    if (v11 == 80) {
        int64_t v25 = v19 & v10;
        int32_t v26 = v25; // 0x8a6f8
        unsigned char v27 = llvm_ctpop_i8((char)v25); // 0x8a6f8
        v23 = v18 - 8;
        *(int64_t *)v23 = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 4 * (int64_t)(v27 % 2 == 0) | 2;
        v24 = v25 & 0xffffffff;
    }
    // 0x8a6fc
    int64_t * v28; // 0x8a49e
    int64_t v29; // 0x8a49e
    if (v11 != 58) {
        // 0x8a6fc
        v28 = (int64_t *)v23;
        v29 = v24;
    } else {
        int64_t v30 = v24 & v10; // 0x8a704
        unsigned char v31 = llvm_ctpop_i8((char)v30); // 0x8a704
        int64_t * v32 = (int64_t *)(v23 - 8);
        *v32 = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | 64 * (int64_t)(v30 == 0) | 128 * (int64_t)(v30 < 0) | 4 * (int64_t)(v31 % 2 == 0) | 2;
        v28 = v32;
        v29 = v30;
    }
    int64_t * v33 = (int64_t *)(v2 + 113); // 0x8a719
    *v33 = v29 + 0xbc85b41;
    int64_t * v34 = (int64_t *)(v2 + 10); // 0x8a7d6
    *v33 = v29 + 0x1a44e4ef;
    if (*(char *)(*v34 + 4) != 0) {
        // 0x8a81c
        *(int64_t *)(v2 + (int64_t)*(int16_t *)*v34) = *v28;
    }
    // 0x8a8b4
    *v5 = *v5 | (int32_t)*(int16_t *)(*v34 + 2);
    *v34 = *v34 + 5;
    return v4 & 245;
}

// Address range: 0x8e6b4 - 0x8eb79
int64_t function_8e6b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x8e6b4
    int64_t v1; // 0x8e6b4
    int64_t result = v1 + 35; // 0x8e6ff
    int32_t * v2 = (int32_t *)result; // 0x8e706
    int32_t v3 = *v2; // 0x8e706
    int32_t v4 = v3; // 0x8e713
    if ((v3 & 2) != 0) {
        // 0x8e719
        v4 = (v3 ^ 0x6808cf40) - 0x72c2e29b;
        *v2 = v4;
    }
    int32_t * v5 = (int32_t *)(v1 + 368); // 0x8e751
    *v5 = *v5 & v4;
    *(char *)(v1 + 367) = 0;
    int64_t * v6 = (int64_t *)(v1 + 10); // 0x8e7d9
    int32_t v7 = *v5; // 0x8e821
    uint32_t v8 = v7 + (int32_t)*(int16_t *)*v6 + *v2; // 0x8e847
    *v5 = v8 & v7;
    *v2 = *v2 ^ 0x35dcbb88;
    int64_t v9 = *(int64_t *)(((int64_t)v8 & (int64_t)&g4) + v1); // 0x8e8e0
    char v10 = *(char *)(*v6 + 4); // 0x8e91e
    int64_t v11 = v9; // 0x8e925
    if (v10 == 98) {
        // 0x8e92b
        v11 = v9 & -256 | (int64_t)*(char *)v9;
    }
    int64_t v12 = v11;
    int64_t v13 = v12; // 0x8e94d
    if (v10 == 50) {
        // 0x8e953
        v13 = v12 & -0x10000 | (int64_t)*(int16_t *)v12;
    }
    int64_t v14 = v13; // 0x8e96f
    if (v10 == 80) {
        // 0x8e975
        v14 = (int64_t)*(int32_t *)v13;
    }
    int64_t v15 = v14; // 0x8e9a6
    if (v10 == 58) {
        // 0x8e9ac
        v15 = *(int64_t *)v14;
    }
    // 0x8e9bc
    *(int64_t *)v1 = v15 ^ 0xda3b7d9;
    *v5 = *v5 - (int32_t)*(int16_t *)(*v6 + 2);
    *v6 = *v6 + 5;
    return result;
}

// Address range: 0x8eb7b - 0x8eb7e
int64_t function_8eb7b(void) {
    // 0x8eb7b
    int64_t result; // 0x8eb7b
    return result;
}

// Address range: 0x90319 - 0x90895
int64_t function_90319(int64_t a1, int64_t a2) {
    // 0x90319
    int64_t v1; // 0x90319
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x90371
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x90389
    int32_t v4 = *v3; // 0x90389
    int32_t v5 = v4 & (*v2 | 0x6729b5bf); // 0x90389
    int32_t v6 = (v4 & 2) == 0 ? v5 : v5 - 0x3dca653f ^ 0x671da5f4;
    *v3 = v6;
    int32_t v7 = v6 + *v2; // 0x90416
    *v3 = v7;
    int32_t v8 = *v2 ^ 0x63bb548f ^ v7 & 0x48367f78; // 0x90442
    *v2 = v8;
    int32_t v9 = v8 + *v3; // 0x9047d
    *v2 = v9;
    int32_t v10 = *v3; // 0x90494
    int32_t v11 = v9; // 0x904a4
    if ((v10 & 2) != 0) {
        // 0x904aa
        *v3 = v10 + 0x4d34ea7 & 0xfc7215c;
        v11 = *v2;
    }
    int32_t v12 = v11 & 0x292b555d; // 0x904ce
    *v2 = v12;
    int32_t v13 = *v3; // 0x904df
    int32_t v14 = v12; // 0x904ed
    int32_t v15 = v13; // 0x904ed
    if ((v13 & 2) != 0) {
        // 0x90531
        v15 = (v13 & 0x662844c) - 0x7bdaf9d9 ^ 0x4329dbc4;
        *v3 = v15;
        v14 = *v2;
    }
    int64_t * v16 = (int64_t *)(v1 + 10); // 0x9058b
    uint32_t v17 = v15 + (int32_t)*(int16_t *)(*v16 + 2) + v14; // 0x905f7
    *v2 = v17 ^ v14;
    *v3 = *v3 & 0x1c8b6fee;
    int64_t v18 = *(int64_t *)(((int64_t)v17 & (int64_t)&g4) + v1); // 0x90698
    *(int64_t *)v1 = v18 ^ 0xda3b7d9;
    *(char *)(v1 + 367) = 1;
    *v2 = *v2 + (*v3 ^ 0x6b040388);
    *v2 = -0x667e49d1 - (int32_t)*(int16_t *)*v16;
    *v16 = *v16 + 4;
    return 1;
}

// Address range: 0x9299b - 0x92f21
int64_t function_9299b(void) {
    // 0x9299b
    int64_t v1; // 0x9299b
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x929a5
    int32_t * v3 = (int32_t *)(v1 + 368); // 0x929b8
    int32_t v4 = *v2 & 0x7036ea56 & *v3; // 0x929b8
    *v3 = v4;
    int32_t v5 = *v2; // 0x929ce
    int32_t v6; // 0x9299b
    if ((v5 & 2) == 0) {
        int32_t v7 = v4 + 0x277b426c; // 0x92a1c
        *v3 = v7;
        v6 = v7;
    } else {
        int32_t v8 = v5 & 0x706a6a76 ^ 0x40626a66; // 0x929fe
        *v2 = v8;
        int32_t v9 = *v3 + 0x277b426c; // 0x92a1c
        *v3 = v9;
        v6 = v9;
        if ((v8 & 2) != 0) {
            // 0x92a34
            *v2 = *v2 + 0x313354d2;
            v6 = *v3;
        }
    }
    int32_t v10 = v6 - 0x57b04ce2; // 0x92a7b
    *v3 = v10;
    int32_t v11 = v10 - (*v2 | 0x36a392ff) | 0x38cd3aec; // 0x92af7
    *v3 = v11;
    int64_t result = v1 + 10; // 0x92b25
    int64_t * v12 = (int64_t *)result; // 0x92b33
    int32_t v13 = (int32_t)*(int16_t *)(*v12 + 1); // 0x92b88
    *v3 = -v13;
    *v2 = *v2 - 0x1a4f949c;
    int64_t v14 = *(int64_t *)(((int64_t)(v11 + v13) & (int64_t)&g4) + v1); // 0x92c7b
    char v15 = *(char *)*v12; // 0x92cb1
    int64_t v16 = v14; // 0x92cb8
    if (v15 == 98) {
        // 0x92cbe
        v16 = v14 & -256 | (int64_t)*(char *)v14;
    }
    int64_t v17 = v16;
    int64_t v18 = v17; // 0x92cdb
    if (v15 == 50) {
        // 0x92ce1
        v18 = v17 & -0x10000 | (int64_t)*(int16_t *)v17;
    }
    int64_t v19 = v18; // 0x92ceb
    if (v15 == 80) {
        // 0x92cf1
        v19 = (int64_t)*(int32_t *)v18;
    }
    int64_t v20 = v19; // 0x92d07
    if (v15 == 58) {
        // 0x92d0d
        v20 = *(int64_t *)v19;
    }
    // 0x92d2a
    *(int64_t *)(v1 + 96) = v20 - 0x653cf834;
    int32_t v21 = *v2 - 0x4e6b72c6 + *v3 | 0x7b467141; // 0x92d7d
    *v3 = v21;
    int32_t v22 = *v2; // 0x92d8e
    int32_t v23 = v21; // 0x92d9f
    if ((v22 & 2) != 0) {
        // 0x92da5
        *v2 = v22 - 0x7ee52541 | 0x32a62c13;
        v23 = *v3;
    }
    int32_t v24 = v23; // 0x92e5e
    *v3 = (v24 ^ (int32_t)*(int16_t *)(*v12 + 3)) + 0x539da50e & v24;
    *v12 = *v12 + 5;
    return result;
}

// Address range: 0x92f26 - 0x92f2b
int64_t function_92f26(void) {
    // 0x92f26
    return function_23cab074();
}

// Address range: 0x96407 - 0x96918
int64_t function_96407(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x96407
    int64_t v1; // 0x96407
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x96447
    int32_t * v3 = (int32_t *)(v1 + 368); // 0x96454
    int32_t v4 = *v3 + *v2 ^ 0x2e312e01; // 0x96461
    *v3 = v4;
    int32_t v5 = *v2; // 0x9647e
    int32_t v6 = v4; // 0x96492
    int32_t v7 = v5; // 0x96492
    if ((v5 & 2) != 0) {
        // 0x96498
        v7 = v5 & 0xa6d4251 ^ 0x409c2e61;
        *v2 = v7;
        v6 = *v3;
    }
    int32_t v8 = (v7 + 0x7d882664 & v6) + 0x4a5b7e16; // 0x964fc
    *v3 = v8;
    int64_t * v9 = (int64_t *)(v1 + 10); // 0x9654a
    uint32_t v10 = *v2 + (int32_t)*(int16_t *)(*v9 + 3); // 0x965cb
    *v3 = v10 ^ v8;
    *v2 = *v2 | 0x2cd55997;
    int64_t v11 = *(int64_t *)(((int64_t)v10 & (int64_t)&g4) + v1); // 0x96674
    char v12 = *(char *)*v9; // 0x966bd
    int64_t v13 = v11; // 0x966c4
    if (v12 == 98) {
        // 0x966ca
        v13 = v11 & -256 | (int64_t)*(char *)v11;
    }
    int64_t v14 = v13;
    int64_t v15 = v14; // 0x966d3
    if (v12 == 50) {
        // 0x966d9
        v15 = v14 & -0x10000 | (int64_t)*(int16_t *)v14;
    }
    int64_t v16 = v15; // 0x966f8
    if (v12 == 80) {
        // 0x966fe
        v16 = (int64_t)*(int32_t *)v15;
    }
    int64_t v17 = v16; // 0x9671d
    if (v12 == 58) {
        // 0x96723
        v17 = *(int64_t *)v16;
    }
    // 0x9674b
    *(int64_t *)(v1 + 96) = v17 - 0x653cf834;
    int32_t v18 = *v3; // 0x96889
    *v3 = 0x2cff1885 - v18 + (int32_t)*(int16_t *)(*v9 + 1) ^ v18;
    *v9 = *v9 + 5;
    return (int64_t)L"\n2";
}

// Address range: 0x96920 - 0x96925
int64_t function_96920(void) {
    // 0x96920
    return function_49e7726d();
}

// Address range: 0x98a9a - 0x99029
int64_t function_98a9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x98a9a
    int64_t v1; // 0x98a9a
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x98aa4
    int32_t v4 = *v3; // 0x98aa4
    int64_t v5; // 0x98a9a
    if ((v4 & 2) == 0) {
        // 0x98ad6
        v5 = v2 + 368;
    } else {
        int32_t v6 = v4 + 0x3f0d8c6a; // 0x98ace
        *v3 = v6;
        int64_t v7 = v2 + 368; // 0x98adc
        v5 = v7;
        if ((v6 & 2) != 0) {
            // 0x98b01
            *v3 = v4 + 0x673fb386 ^ 0x520e3305;
            v5 = v7;
        }
    }
    int32_t * v8 = (int32_t *)v5; // 0x98b21
    int32_t v9 = *v8 ^ 0x2f4dfd84; // 0x98b21
    *v8 = v9;
    int32_t v10 = *v3; // 0x98b31
    int32_t v11 = v9; // 0x98b42
    if ((v10 & 2) != 0) {
        // 0x98b48
        *v3 = v10 & 0x7edaa354 ^ 0x68e1604d;
        v11 = *v8;
    }
    int64_t v12 = v2 + 10; // 0x98b94
    int64_t * v13 = (int64_t *)v12; // 0x98ba1
    uint16_t v14 = *(int16_t *)(*v13 + 2); // 0x98bd0
    *v8 = v11 + (int32_t)v14;
    *v3 = *v3 ^ 0x3d2638af;
    *(int64_t *)(v2 + 129) = v2 - 0x1a44e4ef + ((int64_t)v14 & (int64_t)&g4);
    *v3 = *v3 & *v8;
    int32_t v15 = *v8 | 0x1f5cd114; // 0x98d26
    *v8 = v15;
    int32_t v16 = v15 - *v3; // 0x98d43
    *v8 = v16;
    int32_t v17 = *v3; // 0x98da1
    int32_t v18 = v16; // 0x98db0
    int64_t v19 = 0; // 0x98db0
    if ((v17 & 2) != 0) {
        // 0x98e5a
        *v3 = (v17 & 0x60937430 | 0x16c8bc3) - 0x53a5cb7c;
        v18 = *v8;
        v19 = 2;
    }
    int32_t v20 = v18; // 0x98f5b
    int64_t v21 = *(int64_t *)(v2 + 271); // 0x98f0c
    *v8 = v20 ^ 0x17d39c9f ^ v20 + (int32_t)*(int16_t *)*v13;
    *v13 = *v13 + 4;
    return (v2 | (int64_t)&g1 | 2) & 240 ^ (int64_t)&g3 ^ ((v21 | (int64_t)&g3) + (v2 + 113 ^ (int64_t)L"\n2" ^ v12) ^ (int64_t)&g3 | v2) & 2 * (v2 + 3 & v2 & v19) - 4;
}

// Address range: 0x9ca8d - 0x9cf32
int64_t function_9ca8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9ca8d
    int64_t v1; // 0x9ca8d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x9cb0f
    int32_t * v4 = (int32_t *)(v2 + 368); // 0x9cb1c
    *v4 = *v4 | *v3;
    int64_t v5 = v2 + 129; // 0x9cb2c
    int32_t v6 = *v3 + 0x7ef33dc5; // 0x9cb5d
    *v3 = v6;
    int64_t * v7 = (int64_t *)(v2 + 10); // 0x9cb88
    uint16_t v8 = *(int16_t *)(*v7 + 3); // 0x9cba4
    int64_t v9 = *(int64_t *)v5; // 0x9cc35
    int64_t v10; // 0x9ca8d
    if ((char)v2 == -112) {
        // 0x9cc51
        v10 = ((int64_t)v8 + 120 ^ (int64_t)&g4) & v9;
    } else {
        // 0x9cc42
        v10 = v9 | 0x7f151ac8;
    }
    uint32_t v11 = v6 ^ (int32_t)v8; // 0x9cbfa
    *v4 = *v4 ^ v11;
    *v3 = *v3 & 0x7f151ac8;
    int64_t v12 = *(int64_t *)(((int64_t)v11 & (int64_t)&g4) + v2); // 0x9ccdc
    unsigned char v13 = *(char *)*v7; // 0x9cd21
    int64_t v14 = v12; // 0x9cd28
    if (v13 == 98) {
        // 0x9cd2e
        v14 = v12 & -256 | (int64_t)*(char *)v12;
    }
    int64_t v15 = v14;
    int64_t v16 = v15; // 0x9cd50
    if (v13 == 50) {
        // 0x9cd56
        v16 = v15 & -0x10000 | (int64_t)*(int16_t *)v15;
    }
    int64_t v17 = v16; // 0x9cd62
    if (v13 == 80) {
        // 0x9cd68
        v17 = (int64_t)*(int32_t *)v16;
    }
    int64_t v18 = v17; // 0x9cd9f
    if (v13 == 58) {
        // 0x9cda5
        v18 = *(int64_t *)v17;
    }
    int64_t v19 = v2 + 96; // 0x9cddb
    *(int64_t *)v19 = v18 - 0x653cf834;
    int64_t v20 = *(int64_t *)(v2 + 271); // 0x9ce2e
    int64_t v21 = (v2 + 364 | v19) + 0x80000000 + v10 + (v5 & -256 | (int64_t)v13) ^ (v2 + 304 | (int64_t)&g3); // 0x9ce34
    int64_t v22 = v21 + 48 & v2; // 0x9ce88
    int32_t v23 = *v4; // 0x9cea5
    uint32_t v24 = (int32_t)*(int16_t *)(*v7 + 1) - v23; // 0x9cea5
    *v4 = v24 - 0x263c3887 ^ v23;
    *v7 = *v7 + 5;
    return v20 & v22 & (-2 * v21 + (int64_t)&g1 - 114 + v22 - (int64_t)v24 ^ v22);
}

// Address range: 0x9cf37 - 0x9cf3a
int64_t function_9cf37(void) {
    // 0x9cf37
    int64_t result; // 0x9cf37
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
    *(int64_t *)(v2 + 129) = v2 - 0x1a44e4ef + ((int64_t)(v4 + (int32_t)v6 ^ v8) & (int64_t)&g4);
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
    *(int64_t *)(v2 + 129) = v2 - 0x1a44e4ef + ((int64_t)((int32_t)v11 - v12 ^ v9) & (int64_t)&g4);
    int32_t v13 = (*v6 | *v3) & 0x4a211226 | 0x24d089c8; // 0xa17ef
    *v6 = v13;
    int32_t v14 = 0x13274e1d - *v3 + v13; // 0xa182e
    *v6 = v14;
    *v6 = ((int32_t)*(int16_t *)*v10 ^ 0x4ccb9807) & v14;
    *v10 = *v10 + 4;
    return result;
}

// Address range: 0xa5f3c - 0xa6470
int64_t function_a5f3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa5f3c
    int64_t v1; // 0xa5f3c
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xa5f5d
    int32_t * v3 = (int32_t *)(v1 + 368); // 0xa5f6e
    int32_t v4 = *v3 + (*v2 | 0x11da3648) & 0x169ceafa; // 0xa5f7a
    *v3 = v4;
    int32_t v5 = *v2; // 0xa5fae
    int32_t v6 = v4; // 0xa5fbf
    int32_t v7 = v5; // 0xa5fbf
    if ((v5 & 2) != 0) {
        // 0xa6013
        v7 = v5 | 0x7fffff6f;
        *v2 = v7;
        v6 = *v3;
    }
    int64_t * v8 = (int64_t *)(v1 + 10); // 0xa608c
    uint32_t v9 = (int32_t)*(int16_t *)*v8 - v6 + v7; // 0xa6112
    *v3 = v9 & v6;
    *v2 = *v2 + 0x17d780ca;
    int64_t v10 = *(int64_t *)(((int64_t)v9 & (int64_t)&g4) + v1); // 0xa61bf
    int64_t v11 = *v8 + 4; // 0xa6201
    char v12 = *(char *)v11; // 0xa621b
    int64_t v13 = v10; // 0xa6222
    if (v12 == 98) {
        // 0xa6228
        v13 = v10 & -256 | (int64_t)*(char *)v10;
    }
    int64_t v14 = v13;
    int64_t v15 = v14; // 0xa622f
    if (v12 == 50) {
        // 0xa6235
        v15 = v14 & -0x10000 | (int64_t)*(int16_t *)v14;
    }
    int64_t v16 = v15; // 0xa6250
    if (v12 == 80) {
        // 0xa6256
        v16 = (int64_t)*(int32_t *)v15;
    }
    int64_t v17 = v16; // 0xa6276
    if (v12 == 58) {
        // 0xa627c
        v17 = *(int64_t *)v16;
    }
    // 0xa6293
    *(int64_t *)(v1 + 96) = v17 - 0x653cf834;
    int32_t v18 = *v3 | 0x39a63024; // 0xa62d6
    *v3 = v18;
    int32_t v19 = *v2 + v18; // 0xa62f3
    *v3 = v19;
    *v3 = v19 - 0x29e369df + (int32_t)*(int16_t *)(*v8 + 2) ^ v19;
    *v8 = *v8 + 5;
    return v11 | -96 - v1;
}

// Address range: 0xa6475 - 0xa6477
int64_t function_a6475(void) {
    // 0xa6475
    int64_t result; // 0xa6475
    return result;
}

// Address range: 0xa6478 - 0xa6479
int64_t function_a6478(void) {
    // 0xa6478
    int64_t result; // 0xa6478
    return result;
}

// Address range: 0xa799b - 0xa7ef8
int64_t function_a799b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xa799b
    int64_t v1; // 0xa799b
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xa79af
    int32_t v4 = *v3; // 0xa79af
    int32_t v5 = v4; // 0xa79c0
    if ((v4 & 2) != 0) {
        // 0xa79c6
        v5 = v4 + 0x37d0b9a9 ^ 0x6307e167;
        *v3 = v5;
    }
    int32_t * v6 = (int32_t *)(v2 + 368); // 0xa7a61
    *v6 = *v6 + v5;
    *(int64_t *)v2 = v2 ^ 0x35516b53;
    int64_t * v7 = (int64_t *)(v2 + 96); // 0xa7a71
    *v7 = *v7 + 0x653cf834 ^ 0x38f2dc8a;
    *v6 = *v6 + *v3;
    int64_t v8 = v2 ^ 0x38f2dc8a; // 0xa7b10
    uint64_t v9 = *v7 ^ 0x38f2dc8a; // 0xa7b27
    char v10 = *(char *)(v2 + 404); // 0xa7b45
    int64_t v11 = v8; // 0xa7b4c
    int64_t v12; // 0xa799b
    bool v13; // 0xa799b
    if (v10 == 98) {
        char v14 = v9 | v8; // 0xa7b52
        int64_t v15 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v14 == 0) | 128 * (int64_t)(v14 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v14) % 2 == 0) | 2; // bp-8, 0xa7b55
        v12 = (int64_t)&v15;
        v11 = v9 % 256 | v8;
    }
    int64_t v16 = v12; // 0xa7b5a
    int64_t v17 = v11; // 0xa7b5a
    if (v10 == 50) {
        int64_t v18 = v11 | v9;
        int16_t v19 = v18; // 0xa7b60
        int64_t v20 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v18) % 2 == 0) | 2; // bp-16, 0xa7b64
        v16 = (int64_t)&v20;
        v17 = v11 | v9 % 0x10000;
    }
    int64_t v21 = v16; // 0xa7b69
    int64_t v22 = v17; // 0xa7b69
    if (v10 == 80) {
        int64_t v23 = v17 | v9;
        int32_t v24 = v23; // 0xa7b6f
        unsigned char v25 = llvm_ctpop_i8((char)v23); // 0xa7b6f
        v21 = v16 - 8;
        *(int64_t *)v21 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 4 * (int64_t)(v25 % 2 == 0) | 2;
        v22 = v23 & 0xffffffff;
    }
    int64_t v26 = v21; // 0xa7b77
    int64_t v27 = v22; // 0xa7b77
    if (v10 == 58) {
        // 0xa7b7d
        v27 = v22 | v9;
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0xa7b7d
        v26 = v21 - 8;
        *(int64_t *)v26 = 0x4000 * (int64_t)v13 | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | 64 * (int64_t)(v27 == 0) | 128 * (int64_t)(v27 < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
    }
    int64_t * v29 = (int64_t *)(v2 + 113); // 0xa7b8b
    *v29 = v27;
    *v3 = (*v6 & 0x65be02ae) - 0x474578d0 + *v3;
    *v6 = *v6 ^ 0x6ce2d486;
    int64_t result = v2 + 10; // 0xa7c52
    int64_t * v30 = (int64_t *)result; // 0xa7c85
    int64_t v31 = *v30; // 0xa7c85
    if (*(char *)(v31 + 2) != 0) {
        // 0xa7cfa
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v31) = *(int64_t *)v26;
    }
    // 0xa7d7d
    *v29 = *v29 + 0x1a44e4ef;
    int32_t v32 = *v6; // 0xa7db8
    int32_t v33 = v32 - 0x796ead7f; // 0xa7db8
    *v6 = v33;
    *v6 = -0x364f90fc - v32 + (int32_t)*(int16_t *)(*v30 + 3) & v33;
    *v30 = *v30 + 5;
    return result;
}

// Address range: 0xae90b - 0xaeda2
int64_t function_ae90b(void) {
    // 0xae90b
    int64_t v1; // 0xae90b
    int64_t v2 = v1;
    int64_t v3 = v2 + 35; // 0xae90e
    int32_t * v4 = (int32_t *)v3; // 0xae91f
    int32_t v5 = *v4; // 0xae91f
    if ((v5 & 2) != 0) {
        // 0xae934
        *v4 = v5 + 0x5a98810;
    }
    int64_t v6 = v2 + 368; // 0xae918
    int32_t * v7 = (int32_t *)v6; // 0xae956
    int32_t v8 = *v7 + 0x581f6275; // 0xae956
    *v7 = v8;
    int32_t v9 = *v4 & 0x2efb7283 ^ v8; // 0xae97a
    *v7 = v9;
    int64_t v10 = *(int64_t *)(v2 + 113); // 0xae98f
    int32_t v11 = v9 | 0x7ba7e961; // 0xae999
    *v7 = v11;
    int32_t v12 = *v4 + v11; // 0xae9b9
    *v7 = v12;
    int32_t v13 = v12 | *v4 & 0x48d0e18a | 0x17270855; // 0xae9e8
    *v7 = v13;
    int32_t v14 = v13 | *v4; // 0xaea06
    *v7 = v14;
    int32_t v15 = *v4 | v14; // 0xaea20
    *v7 = v15;
    int32_t v16 = *v4; // 0xaea30
    int32_t v17 = v16; // 0xaea48
    int32_t v18 = v15; // 0xaea48
    if ((v16 & 2) != 0) {
        // 0xaea4e
        v17 = v16 ^ 0x235356fb;
        *v4 = v17;
        v18 = *v7;
    }
    int32_t v19 = v18 & 0x624bad50 | v17; // 0xaeaa8
    *v4 = v19;
    int64_t v20 = v2 + 10; // 0xaeae5
    int64_t v21 = v6 ^ v1;
    int64_t * v22 = (int64_t *)v20; // 0xaeafe
    int64_t v23 = *v22 + 2; // 0xaeb01
    int64_t v24 = v21 | v20; // 0xaeb11
    int32_t v25 = *v7; // 0xaeb25
    uint32_t v26 = v25 + (int32_t)*(int16_t *)v23; // 0xaeb25
    int64_t v27 = v26; // 0xaeb25
    int64_t v28 = (v23 | v6) ^ v27; // 0xaeb28
    uint32_t v29 = v26 - v19; // 0xaeb68
    int64_t v30 = v29; // 0xaeb68
    *v7 = v29 & v25;
    *v4 = *v4 - 0x3717af11;
    int64_t v31 = *(int64_t *)((v30 & (int64_t)&g4) + v2); // 0xaebe8
    int64_t v32 = v31 - 0x653cf834; // 0xaebf8
    *(int64_t *)(v2 + 96) = v32;
    int32_t v33 = *v7; // 0xaecee
    uint32_t v34 = (int32_t)*(int16_t *)*v22 - v33 ^ 0x470c080d; // 0xaecf4
    int64_t v35 = v34; // 0xaecf4
    *v7 = v33 - v34;
    *v22 = *v22 + 4;
    return ((((v2 + 12 | 1) ^ 240) + v30 ^ v3) - 33 + v32 & 0x653cf835 - v31 & v2 + 0x100000009 + 2 * (v2 + 0x7fffffffffffffe0 + v28 & v3 & (v24 + v30 | (v24 | (int64_t)&g3 | (((-2 * v6 | 1) + v1 + v10 ^ v21) & 2) - v24 - v27) - v28 | 0x7fffffff))) + (int64_t)&g4 + 120 + ((v35 | 34) ^ 120) + ((v6 + v35 | (int64_t)&g4) & (int64_t)L"\n2");
}

// Address range: 0xaeda4 - 0xaeda9
int64_t function_aeda4(void) {
    // 0xaeda4
    return function_4d01f6f2();
}

// Address range: 0xb045b - 0xb0930
int64_t function_b045b(void) {
    // 0xb045b
    int64_t v1; // 0xb045b
    uint64_t v2 = v1;
    uint64_t v3 = v2 + 368; // 0xb045e
    int32_t * v4 = (int32_t *)v3; // 0xb0465
    int32_t * v5 = (int32_t *)(v2 + 35); // 0xb0472
    int32_t v6 = *v5 & *v4; // 0xb0472
    *v5 = v6;
    *v4 = (*v4 ^ v6) & 0x6f7fff69;
    int64_t * v7 = (int64_t *)(v2 + 96); // 0xb04b8
    *v7 = *v7 + 0x653cf834;
    *v4 = *v4 & *v5;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x4acd0089;
    *v4 = *v4 | *v5 ^ 0x4f60a287;
    int32_t v8 = *v5; // 0xb060c
    if ((v8 & 2) != 0) {
        // 0xb0623
        *v5 = v8 - 0x4c4bd38a;
    }
    int64_t v9 = *v7; // 0xb065f
    int64_t * v10 = (int64_t *)(v2 + 113); // 0xb0676
    *v10 = v9;
    int64_t * v11 = (int64_t *)(v2 + 10); // 0xb06ab
    int64_t v12 = *v11; // 0xb06ab
    int64_t v13 = v9; // 0xb0723
    if (*(char *)v12 != 0) {
        int64_t v14 = v3 + v2; // 0xb067a
        unsigned char v15 = llvm_ctpop_i8((char)v14); // 0xb067a
        uint16_t v16 = *(int16_t *)(v12 + 1); // 0xb077c
        bool v17; // 0xb045b
        *(int64_t *)(v2 + (int64_t)v16) = 64 * (int64_t)(v14 == 0) | (int64_t)(v14 < v3) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v3 % 16 + v2 % 16 > 15) | 2048 * (int64_t)(((v14 ^ v3) & (v14 ^ v2)) < 0) | 0x4000 * (int64_t)v17 | 4 * (int64_t)(v15 % 2 == 0) | 1024 * (int64_t)v17 | 512 * (int64_t)v17 | 256 * (int64_t)v17 | 2;
        v13 = *v10;
    }
    // 0xb07ab
    *v10 = v13 + 0x1a44e4ef;
    int32_t v18 = *v4; // 0xb089f
    uint32_t v19 = (int32_t)*(int16_t *)(*v11 + 3) + 0x4faa382 + v18; // 0xb08a2
    *v4 = v19 + v18;
    *v11 = *v11 + 5;
    return *(int64_t *)(*(int64_t *)(v2 + 271) + (int64_t)(v19 % 0x10000));
}

// Address range: 0xb3128 - 0xb3612
int64_t function_b3128(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb3128
    int64_t v1; // 0xb3128
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xb3164
    int32_t v3 = *v2; // 0xb3164
    int32_t v4 = v3; // 0xb3178
    if ((v3 & 2) != 0) {
        // 0xb317e
        v4 = v3 + 0x2b379a76 & 0x259f380d;
        *v2 = v4;
    }
    int32_t v5 = v4 - 0x334721c0; // 0xb3234
    *v2 = v5;
    int32_t * v6 = (int32_t *)(v1 + 368); // 0xb3285
    *v6 = *v6 ^ v5;
    *(char *)(v1 + 367) = 0;
    int64_t * v7 = (int64_t *)(v1 + 10); // 0xb32e3
    uint16_t v8 = *(int16_t *)*v7; // 0xb32fe
    int32_t v9 = *v6; // 0xb3331
    int32_t v10 = *v2; // 0xb3375
    *v2 = v10 ^ 0x171f71e1;
    int64_t v11 = *(int64_t *)(((int64_t)(v9 ^ (int32_t)v8 ^ v10) & (int64_t)&g4) + v1); // 0xb33f1
    char v12 = *(char *)(*v7 + 4); // 0xb344e
    int64_t v13 = v11; // 0xb3455
    if (v12 == 98) {
        // 0xb345b
        v13 = v11 & -256 | (int64_t)*(char *)v11;
    }
    int64_t v14 = v13;
    int64_t v15 = v14; // 0xb348a
    if (v12 == 50) {
        // 0xb3490
        v15 = v14 & -0x10000 | (int64_t)*(int16_t *)v14;
    }
    int64_t v16 = v15; // 0xb34a1
    if (v12 == 80) {
        // 0xb34a7
        v16 = (int64_t)*(int32_t *)v15;
    }
    int64_t v17 = v16; // 0xb34b6
    if (v12 == 58) {
        // 0xb34bc
        v17 = *(int64_t *)v16;
    }
    // 0xb34c2
    *(int64_t *)v1 = v17 ^ 0xda3b7d9;
    *v7 = *v7 + 5;
    return 0;
}

// Address range: 0xb4edd - 0xb540f
int64_t function_b4edd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb4edd
    int64_t v1; // 0xb4edd
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xb4f28
    int32_t * v3 = (int32_t *)(v1 + 368); // 0xb4f34
    *v3 = *v3 ^ *v2;
    int32_t v4 = *v2; // 0xb4f7d
    int32_t v5 = v4; // 0xb4f8e
    if ((v4 & 2) != 0) {
        // 0xb4f94
        v5 = v4 ^ 0x5acd2fa;
        *v2 = v5;
    }
    int32_t v6 = v5 ^ 0x12648cbe; // 0xb4fc3
    *v2 = v6;
    int64_t * v7 = (int64_t *)(v1 + 10); // 0xb501d
    uint32_t v8 = (int32_t)*(int16_t *)*v7 - v6; // 0xb5125
    *v3 = v8 ^ *v3;
    *v2 = *v2 ^ 0x2e91bd1c;
    int64_t v9 = *(int64_t *)(((int64_t)v8 & (int64_t)&g4) + v1); // 0xb51a7
    *(int64_t *)(v1 + 129) = v9 - 0x1a44e4ef;
    int32_t v10 = -0x610956a9 - *v2 + *v3; // 0xb5218
    *v3 = v10;
    int32_t v11 = *v2; // 0xb5226
    int32_t v12 = v10; // 0xb5234
    int32_t v13 = v11; // 0xb5234
    if ((v11 & 2) != 0) {
        // 0xb523a
        v13 = (v11 | 0x55d764bb) ^ 0x17a0094a;
        *v2 = v13;
        v12 = *v3;
    }
    uint32_t result = v13 - 0x1f6881d8; // 0xb5267
    int32_t v14 = result & v12; // 0xb5276
    *v3 = v14;
    *v3 = v14 + 0xa61c44c + (int32_t)*(int16_t *)(*v7 + 2) | v14;
    *v7 = *v7 + 4;
    return result;
}

// Address range: 0xb540f - 0xb593f
int64_t function_b540f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb540f
    int64_t v1; // 0xb540f
    int64_t v2 = v1;
    int64_t v3 = v2 + 35; // 0xb5429
    int32_t * v4 = (int32_t *)v3; // 0xb5430
    int32_t v5 = *v4; // 0xb5430
    int32_t * v6 = (int32_t *)(v2 + 368); // 0xb543d
    *v6 = *v6 | v5;
    int64_t v7 = v2 + 129; // 0xb547a
    int64_t v8 = *(int64_t *)v7; // 0xb5492
    *(char *)(v2 + 367) = 0;
    int64_t * v9 = (int64_t *)(v2 + 10); // 0xb550d
    int32_t v10 = (int32_t)*(int16_t *)(*v9 + 1); // 0xb5565
    int32_t v11 = *v6; // 0xb5565
    *v6 = v10;
    *v4 = *v4 - 0x592d1456;
    int64_t v12 = *(int64_t *)(((int64_t)(v10 - v11) & (int64_t)&g4) + v2); // 0xb563c
    unsigned char v13 = *(char *)*v9; // 0xb5681
    int64_t v14 = v12; // 0xb5688
    if (v13 == 98) {
        // 0xb568e
        v14 = v12 & -256 | (int64_t)*(char *)v12;
    }
    int64_t v15 = v14;
    int64_t v16 = v15; // 0xb56bb
    if (v13 == 50) {
        // 0xb56c1
        v16 = v15 & -0x10000 | (int64_t)*(int16_t *)v15;
    }
    int64_t v17 = v16; // 0xb56c8
    if (v13 == 80) {
        // 0xb56ce
        v17 = (int64_t)*(int32_t *)v16;
    }
    int64_t v18 = v17; // 0xb56f3
    if (v13 == 58) {
        // 0xb56f9
        v18 = *(int64_t *)v17;
    }
    // 0xb5717
    *(int64_t *)v2 = v18 ^ 0xda3b7d9;
    int32_t v19 = *v4; // 0xb57ba
    if ((v19 & 2) != 0) {
        // 0xb57ce
        *v4 = v19 ^ 0x6ef9e3c1;
    }
    int64_t v20 = (((int64_t)v13 | (int64_t)(v5 & -256)) & v8 ^ -130 - v2) & v2 + 404; // 0xb5751
    int64_t v21 = *(int64_t *)(v2 + 271); // 0xb5861
    int32_t v22 = *v6; // 0xb588f
    uint32_t v23 = v22 ^ (int32_t)*(int16_t *)(*v9 + 3); // 0xb588f
    uint32_t v24 = v23 + 0x628c34bc; // 0xb58a5
    int64_t v25 = v24; // 0xb58a5
    int64_t v26 = ((v20 ^ v3 | v7) & 4) - (int64_t)&g4 - (int64_t)v23 & v25; // 0xb58b6
    *v6 = v24 & v22;
    int64_t v27 = ((v8 ^ 2 ^ v20) + 8 - ((int64_t)&g1 ^ 16) & v7) + (int64_t)&g3 + 16 + v21 + (v26 ^ (-129 - v2 | 212) + 240); // 0xb58d8
    int64_t v28 = *(int64_t *)((v25 & (int64_t)&g4) + v21); // 0xb590a
    *v9 = *v9 + 5;
    return v27 | v27 + (v26 & 32 | 2) ^ v28 | 32;
}

// Address range: 0xb5941 - 0xb5943
int64_t function_b5941(void) {
    // 0xb5941
    int64_t result; // 0xb5941
    return result;
}

// Address range: 0xb5944 - 0xb5945
int64_t function_b5944(void) {
    // 0xb5944
    int64_t result; // 0xb5944
    return result;
}

// Address range: 0xb708d - 0xb7586
int64_t function_b708d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb708d
    int64_t v1; // 0xb708d
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xb7097
    *v3 = *v3 - 0x1006b745;
    int32_t * v4 = (int32_t *)(v2 + 35); // 0xb70be
    uint64_t v5 = v2 + 368; // 0xb70c4
    int32_t * v6 = (int32_t *)v5; // 0xb70cb
    *v6 = *v6 & *v4;
    *v4 = *v4 + 0x34c21ec8;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    uint64_t v7 = v2 + 113; // 0xb7229
    int64_t * v8 = (int64_t *)v7; // 0xb7230
    *v8 = *v3 - 0x34211eb;
    int32_t v9 = *v4; // 0xb7251
    int32_t v10 = v9; // 0xb726f
    if ((v9 & 2) != 0) {
        // 0xb7275
        v10 = v9 - 0x264962b9;
        *v4 = v10;
    }
    // 0xb7297
    *v4 = v10 | 0x1a9cd01d;
    *v8 = *v8 + 0x92caa653;
    int64_t * v11 = (int64_t *)(v2 + 10); // 0xb737f
    int64_t v12 = *v11; // 0xb737f
    int64_t v13 = v12; // 0xb73b9
    if (*(char *)v12 != 0) {
        int64_t v14 = v5 + v7; // 0xb7233
        unsigned char v15 = llvm_ctpop_i8((char)v14); // 0xb7233
        uint16_t v16 = *(int16_t *)(v12 + 1); // 0xb7429
        bool v17; // 0xb708d
        *(int64_t *)(v2 + (int64_t)v16) = 64 * (int64_t)(v14 == 0) | (int64_t)(v14 < v5) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v5 % 16 + v7 % 16 > 15) | 0x4000 * (int64_t)v17 | 1024 * (int64_t)v17 | 2048 * (int64_t)(((v14 ^ v5) & (v14 ^ v7)) < 0) | 4 * (int64_t)(v15 % 2 == 0) | 512 * (int64_t)v17 | 256 * (int64_t)v17 | 2;
        v13 = *v11;
    }
    int32_t v18 = *v6; // 0xb74e8
    uint32_t v19 = (int32_t)*(int16_t *)(v13 + 3) - v18 - 0x2c0febdf; // 0xb74fa
    *v6 = v19 ^ v18;
    *v11 = *v11 + 5;
    return *(int64_t *)(v2 + 271) + (int64_t)(v19 % 0x10000);
}

// Address range: 0xba1e2 - 0xba683
int64_t function_ba1e2(int64_t a1, int64_t a2, int64_t a3) {
    // 0xba1e2
    int64_t v1; // 0xba1e2
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xba212
    int32_t v3 = *v2; // 0xba212
    int32_t v4 = v3; // 0xba223
    if ((v3 & 2) != 0) {
        int32_t v5 = v3 - 0x2ad733f1; // 0xba244
        *v2 = v5;
        v4 = v5;
        if ((v5 & 2) != 0) {
            int32_t v6 = v5 & 0x2d8e67e2 ^ 0x60062; // 0xba287
            *v2 = v6;
            v4 = v6;
        }
    }
    int32_t * v7 = (int32_t *)(v1 + 368); // 0xba2a5
    int32_t v8 = *v7 - v4; // 0xba2a5
    *v7 = v8;
    int32_t v9 = *v2 | v8; // 0xba2be
    *v7 = v9;
    int64_t * v10 = (int64_t *)(v1 + 10); // 0xba334
    uint32_t v11 = *v2 + (int32_t)*(int16_t *)(*v10 + 2); // 0xba3c0
    *v7 = v11 ^ v9;
    int64_t v12 = *(int64_t *)(((int64_t)v11 & (int64_t)&g4) + v1); // 0xba458
    *(int64_t *)(v1 + 129) = v12 - 0x1a44e4ef;
    int32_t v13 = *v2 & 0x19a77ba & *v7; // 0xba4d9
    *v7 = v13;
    int32_t v14 = *v2 + v13; // 0xba518
    *v7 = v14;
    int32_t v15 = *v2 | v14; // 0xba532
    *v7 = v15;
    int32_t v16 = (*v2 | 0x501e3e6c) ^ v15; // 0xba553
    *v7 = v16;
    int32_t v17 = v16 ^ *v2; // 0xba56c
    *v7 = v17;
    int32_t v18 = (int32_t)*(int16_t *)*v10; // 0xba610
    *v7 = v18 + 0x18e7b255;
    *v10 = *v10 + 4;
    return *(int64_t *)(v1 + 271) + (int64_t)((0xb255 - v17 + v18) % 0x10000);
}

// Address range: 0xba687 - 0xba68e
int64_t function_ba687(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xba687
    int64_t v1; // 0xba687
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 119); // 0xba689
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0xba68f - 0xba690
int64_t function_ba68f(void) {
    // 0xba68f
    int64_t result; // 0xba68f
    return result;
}

// Address range: 0xbd36d - 0xbd8af
int64_t function_bd36d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xbd36d
    int64_t v1; // 0xbd36d
    int64_t v2 = v1 + 368; // 0xbd37a
    int32_t * v3 = (int32_t *)v2; // 0xbd381
    int64_t v4 = v1 + 35; // 0xbd38e
    int32_t * v5 = (int32_t *)v4; // 0xbd398
    *v5 = *v5 & (*v3 | 0x2f0ca7d2);
    int32_t v6 = *v3 | 0x30661b97; // 0xbd3a5
    *v3 = v6;
    *v5 = *v5 & v6 - 0x23cebdbc;
    int32_t v7 = *v3 & 0x57d9fe65; // 0xbd3d7
    *v3 = v7;
    int32_t v8 = *v5 ^ v7; // 0xbd3f5
    *v5 = v8;
    int32_t v9 = *v3 | v8; // 0xbd419
    *v3 = v9;
    int32_t v10 = *v5 & v9; // 0xbd46c
    *v3 = v10;
    int64_t * v11 = (int64_t *)(v1 + 129); // 0xbd483
    int64_t v12 = *v11; // 0xbd483
    int32_t v13 = v10 + 0x149316fa; // 0xbd49d
    *v3 = v13;
    int64_t * v14 = (int64_t *)(v1 + 10); // 0xbd4f6
    int64_t v15 = *v11; // 0xbd520
    uint16_t v16 = *(int16_t *)*v14; // 0xbd53b
    int32_t v17 = *v5; // 0xbd5c6
    int64_t v18 = *(int64_t *)(((int64_t)((v13 ^ (int32_t)v16) + v17) & (int64_t)&g4) + v1); // 0xbd65d
    *(int64_t *)(v1 + 96) = v18 - 0x653cf834;
    int32_t v19 = *v3 + *v5; // 0xbd6c7
    *v3 = v19;
    int32_t v20 = *v5; // 0xbd6de
    int32_t v21 = v19; // 0xbd6ed
    if ((v20 & 2) != 0) {
        // 0xbd713
        *v5 = ((v20 | 0x3f28ceb0) ^ 0x1a74a707) + 0x68f8b1a6;
        v21 = *v3;
    }
    int64_t v22 = (char)v4 == 0 ? v12 & v4 : v12 - 0x149316fa;
    int64_t v23 = (char)v22 == 0 ? v15 & v2 : v15 - 0xf9ce77;
    int64_t v24 = (v2 | -(int64_t)L"\n2" & 4 | 1 | v22) ^ v4; // 0xbd799
    int64_t v25 = *(int64_t *)(v1 + 271); // 0xbd79c
    int64_t v26 = v2 | 0x7fffffff; // 0xbd79f
    int64_t v27 = v23 & (v4 ^ 128); // 0xbd7a6
    uint16_t v28 = *(int16_t *)(*v14 + 2); // 0xbd7ed
    uint32_t v29 = v21 ^ (int32_t)v28; // 0xbd81a
    uint32_t v30 = v29 + 0x42097e5d; // 0xbd834
    *v3 = v30 ^ v21;
    *v14 = *v14 + 4;
    return ((int64_t)v30 & (int64_t)&g4) + v25 + (((v27 + (v24 & v26) ^ 8) & v23) + v2 - (v25 & 2 * (v24 & (int64_t)&g1 & 32) + 64) - (int64_t)v28 | v27 - 32 | (2 * (v26 + v4) ^ 240) - (int64_t)v29 ^ v27 - 96) | 49;
}

// Address range: 0xbd8b4 - 0xbd8b7
int64_t function_bd8b4(void) {
    // 0xbd8b4
    int64_t result; // 0xbd8b4
    return result;
}

// Address range: 0xbec0e - 0xbf128
int64_t function_bec0e(int64_t a1) {
    // 0xbec0e
    int64_t v1; // 0xbec0e
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xbec22
    int32_t * v3 = (int32_t *)(v1 + 368); // 0xbec32
    int32_t v4 = *v3 - *v2; // 0xbec32
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v1 + 10); // 0xbeccf
    uint32_t v6 = v4 + (int32_t)*(int16_t *)(*v5 + 2) + *v2; // 0xbed65
    *v3 = v4 - v6;
    *v2 = *v2 + 0x61f749a7;
    int64_t v7 = *(int64_t *)(((int64_t)v6 & (int64_t)&g4) + v1); // 0xbede3
    *(int64_t *)v1 = v7 ^ 0xda3b7d9;
    *(char *)(v1 + 367) = 1;
    int32_t v8 = *v3 + 0x2051de91; // 0xbeec8
    *v3 = v8;
    int32_t v9 = *v2 & v8; // 0xbef26
    *v3 = v9;
    int32_t v10 = *v2; // 0xbef59
    uint32_t result = v10 & 2; // 0xbef5d
    int32_t v11 = v9; // 0xbef67
    if (result != 0) {
        // 0xbef6d
        *v2 = v10 & 0xe04b834 ^ 0xc042004;
        v11 = *v3;
    }
    int32_t v12 = v11 | 0x51d7631a; // 0xbefce
    *v3 = v12;
    int32_t v13 = *v2 ^ v12; // 0xbefec
    *v3 = v13;
    *v3 = v13 + (int32_t)*(int16_t *)*v5 ^ 0x2060ddea | v13;
    *v5 = *v5 + 4;
    return result;
}

// Address range: 0xbf12a - 0xbf12c
int64_t function_bf12a(void) {
    // 0xbf12a
    int64_t result; // 0xbf12a
    return result;
}

// Address range: 0xbf130 - 0xbf131
int64_t function_bf130(void) {
    // 0xbf130
    int64_t result; // 0xbf130
    return result;
}

// Address range: 0xc088d - 0xc0d7d
int64_t function_c088d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xc088d
    int64_t v1; // 0xc088d
    int64_t result = v1 + 35; // 0xc08a4
    int32_t * v2 = (int32_t *)result; // 0xc08ab
    int32_t * v3 = (int32_t *)(v1 + 368); // 0xc08bf
    int32_t v4 = *v3 | *v2 + 0x6fa972f0; // 0xc08bf
    *v3 = v4;
    int32_t v5 = *v2 ^ v4 & 0x45223942; // 0xc0952
    *v2 = v5;
    int32_t v6 = (*v3 | 0x2efc96c5) + v5; // 0xc0973
    *v2 = v6;
    int32_t v7 = *v3 | v6; // 0xc098d
    *v3 = v7;
    int32_t v8 = *v2; // 0xc09b1
    int32_t v9 = v7; // 0xc09c2
    if ((v8 & 2) != 0) {
        // 0xc09c8
        *v2 = (v8 | 0x6630614f) ^ 0x1a7ef2ae;
        v9 = *v3;
    }
    int32_t v10 = v9 ^ 0x5cf483c7; // 0xc09ea
    *v3 = v10;
    int32_t v11 = *v2 | v10; // 0xc0a06
    *v2 = v11;
    int32_t v12 = *v3 & v11; // 0xc0a20
    *v3 = v12;
    int32_t v13 = *v2 & v12; // 0xc0a39
    *v3 = v13;
    int64_t * v14 = (int64_t *)(v1 + 10); // 0xc0a62
    uint32_t v15 = *v2 + (int32_t)*(int16_t *)(*v14 + 2); // 0xc0aec
    *v3 = v15 + v13;
    *v2 = *v2 ^ 0x7bd54e39;
    int64_t v16 = *(int64_t *)(((int64_t)v15 & (int64_t)&g4) + v1); // 0xc0b93
    *(int64_t *)v1 = v16 ^ 0xda3b7d9;
    *(char *)(v1 + 367) = 1;
    *v3 = 0x10871fd8 - *v2 + *v3;
    *v14 = *v14 + 4;
    return result;
}

// Address range: 0xc140b - 0xc1926
int64_t function_c140b(void) {
    // 0xc140b
    int64_t v1; // 0xc140b
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xc1431
    int32_t * v4 = (int32_t *)(v2 + 368); // 0xc1445
    int32_t v5 = (*v4 & (*v3 | 0x21112100) | 0x16ca0efd) ^ 0x78372234; // 0xc1481
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 + 10); // 0xc14e6
    uint32_t v7 = (v5 ^ (int32_t)*(int16_t *)*v6) - *v3; // 0xc1561
    *v4 = v7 & v5;
    *v3 = *v3 + 0x5b8191b;
    int64_t v8 = *(int64_t *)(((int64_t)v7 & (int64_t)&g4) + v2); // 0xc15c5
    *(int64_t *)(v2 + 129) = v8 - 0x1a44e4ef;
    int32_t v9 = *v3; // 0xc1638
    int32_t v10 = v9; // 0xc164c
    if ((v9 & 2) != 0) {
        // 0xc1652
        v10 = v9 + 0x42ec915b;
        *v3 = v10;
    }
    int32_t v11 = *v4 + v10; // 0xc16a1
    *v4 = v11;
    *v3 = *v3 ^ (v11 | 0x18eb935c);
    int32_t v12 = *v4; // 0xc16ce
    *v4 = v12 | 0x1897f25c;
    int32_t v13 = v12 | *v3 | 0x7efff7de; // 0xc17a4
    *v4 = v13;
    int32_t v14 = *v3; // 0xc17b5
    int32_t v15 = v13; // 0xc17c3
    if ((v14 & 2) != 0) {
        // 0xc17c9
        *v3 = (v14 ^ 0x6dafeaff) - 0x46374e37;
        v15 = *v4;
    }
    uint16_t v16 = *(int16_t *)(*v6 + 2); // 0xc1845
    int64_t v17 = v16; // 0xc1845
    int64_t v18 = *(int64_t *)(v2 + 271); // 0xc1864
    *v4 = v15 + (int32_t)v16;
    int64_t v19 = *(int64_t *)((v17 & (int64_t)&g4) + v18); // 0xc18eb
    *v6 = *v6 + 4;
    return 2 * v2 + 388 - ((v2 & 333) - 240 & v2 | (int64_t)L"\n2") - v17 + v19;
}

// Address range: 0xc192e - 0xc1931
int64_t function_c192e(void) {
    // 0xc192e
    int64_t result; // 0xc192e
    return result;
}
