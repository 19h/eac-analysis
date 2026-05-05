/*
 * Targeted RetDec C for source278 double native return-patch control.
 *
 * Ranges:
 *   0x6c010-0x6c044
 *   0x15b5b2-0x15b6f2
 *   0x2d2cf4-0x2d2e69
 *   0xcf3c7-0xcf5c7
 *   0xcdc60-0xcde60
 *
 * This is external decompiler output kept as an evidence artifact. It is
 * useful for C-shape and call-chain recovery, not treated as proof that the
 * obfuscated native stack/register shuffles are fully simplified.
 */
#include <stdbool.h>
#include <stdint.h>

uint64_t __readfsqword(uint64_t offset);
int64_t function_6c010(int64_t a1, int64_t a2);
int64_t function_cdc60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_cf3c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_15b5b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d2cf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);

// Address range: 0x6c010 - 0x6c044
int64_t function_6c010(int64_t a1, int64_t a2) {
    // 0x6c010
    __readfsqword(40);
    int64_t v1; // 0x6c010
    return function_2d2cf4(a1, a2, v1, v1, 0);
}

// Address range: 0xcdc60 - 0xcde5c
int64_t function_cdc60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xcdc60
    int64_t result; // 0xcdc60
    *(int64_t *)(result - 8) = 0x76b8a43;
    int64_t v1 = result - 32; // 0xcdd63
    *(int64_t *)(result - 16) = 0x9063646;
    *(int64_t *)(result - 24) = 0x1cd94ac9;
    *(int64_t *)v1 = v1;
    *(int64_t *)(result - 40) = 0x12cd3dfa;
    return result;
}

// Address range: 0xcf3c7 - 0xcf5c6
int64_t function_cf3c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xcf3c7
    int64_t v1; // 0xcf3c7
    int64_t v2 = (int64_t)&v1; // 0xcf3d7
    *(int64_t *)(v2 - 8) = a4;
    int64_t v3 = v2 - 24; // 0xcf43d
    int64_t * v4 = (int64_t *)v3; // 0xcf441
    *v4 = a4;
    *(int64_t *)(v2 - 32) = v3;
    int64_t v5 = *v4 ^ v3; // 0xcf452
    int64_t * v6 = (int64_t *)(v2 - 40); // 0xcf45b
    *v6 = v5;
    int64_t v7 = *v4 ^ v5; // 0xcf45f
    *v4 = v7;
    int64_t v8 = v7 - 8; // 0xcf478
    int64_t * v9 = (int64_t *)v8; // 0xcf479
    int64_t * v10 = (int64_t *)v7; // 0xcf47f
    *v9 = a1;
    int64_t * v11 = (int64_t *)(v7 - 16); // 0xcf492
    *v11 = v7 + 8;
    *v10 = v7;
    *v9 = *v6 ^ v7;
    *v9 = v8;
    *v11 = 0x64a357bd;
    *(int64_t *)(v7 - 24) = *v9;
    *(int64_t *)(v7 - 32) = 0x16f326da;
    *(int64_t *)(v7 - 48) = *v9;
    return *v10;
}

// Address range: 0x15b5b2 - 0x15b6f2
int64_t function_15b5b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15b5b2
    bool v1; // 0x15b5b2
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x15b5b2
    int64_t v3 = v2; // bp-16, 0x15b686
    int64_t v4 = (int64_t)&v3; // 0x15b6bf
    *(int64_t *)(v4 - 8) = v2;
    *(int64_t *)(v4 - 16) = v2;
    int64_t v5; // 0x15b5b2
    return function_cdc60(a1, a2, a3, a4, a5, v5);
}

// Address range: 0x2d2cf4 - 0x2d2e69
int64_t function_2d2cf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x2d2cf4
    int64_t v1; // bp-32, 0x2d2cf4
    int64_t v2 = (int64_t)&v1; // 0x2d2d9d
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x2d2db4
    int64_t v4 = v2 - 8; // 0x2d2db4
    int64_t * v5 = (int64_t *)v4; // 0x2d2db4
    *v5 = v3;
    int64_t v6 = v2 - 16; // 0x2d2db8
    int64_t * v7 = (int64_t *)v6; // 0x2d2db8
    *v7 = a1;
    *(int64_t *)(v2 - 24) = v6;
    int64_t v8 = *v7; // 0x2d2de9
    *(int64_t *)(v2 - 32) = v8;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x2d2df6
    *v9 = (int64_t)a5;
    *v7 = v4;
    *v5 = v4;
    v1 = v3;
    *(int64_t *)(v2 + 32) = v3;
    *v5 = *v9;
    *v9 = a4;
    int64_t v10 = *v9; // 0x2d2e58
    *v9 = v2 + 24 ^ a4 ^ v10;
    return function_cf3c7(v8, a2, a3, v10);
}
