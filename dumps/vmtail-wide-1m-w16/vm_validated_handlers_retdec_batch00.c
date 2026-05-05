/*
 * Targeted RetDec C for static-validated VM handler native ranges, batch 0.
 *
 * These handlers already have 100% validated handler-layer transfer models.
 * This artifact keeps native decompiler sidecars for full dispatch-entry
 * coverage and cross-checking against the VM-lifted C pseudocode.
 *
 * Total static-validated handler ranges: 166
 * Batch size: 24
 * Ranges:
 *   0x9d13f-0x9d25a entry=181 events=1407 span_bytes=283 insns=60
 *   0x8a37f-0x8a4ab entry=86 events=5 span_bytes=297 insns=63
 *   0x8115d-0x812ab entry=40 events=928 span_bytes=333 insns=73
 *   0x815ea-0x8174b entry=42 events=3 span_bytes=352 insns=77
 *   0xaeda2-0xaef0f entry=261 events=1074 span_bytes=361 insns=80
 *   0xc1d48-0xc1ed2 entry=351 events=1844 span_bytes=390 insns=87
 *   0xb60e0-0xb626a entry=295 events=980 span_bytes=394 insns=85
 *   0xb3612-0xb37a9 entry=283 events=1438 span_bytes=406 insns=83
 *   0xb8556-0xb8705 entry=310 events=1614 span_bytes=428 insns=86
 *   0x90ebc-0x91077 entry=119 events=922 span_bytes=440 insns=95
 *   0x9af18-0x9b0d5 entry=169 events=1796 span_bytes=441 insns=91
 *   0xbf128-0xbf2e3 entry=338 events=1753 span_bytes=442 insns=100
 *   0x9a8d2-0x9aa91 entry=167 events=2509 span_bytes=446 insns=101
 *   0xbb6e6-0xbb8b8 entry=323 events=1 span_bytes=464 insns=103
 *   0xc2241-0xc241d entry=354 events=1872 span_bytes=475 insns=98
 *   0x9b4b3-0x9b697 entry=171 events=2533 span_bytes=481 insns=103
 *   0x8b6de-0x8b8d9 entry=91 events=2251 span_bytes=506 insns=113
 *   0x9d495-0x9d6a2 entry=183 events=2326 span_bytes=524 insns=108
 *   0x9cf32-0x9d14d entry=180 events=1848 span_bytes=535 insns=112
 *   0x9a24c-0x9a47b entry=165 events=1825 span_bytes=559 insns=114
 *   0xc02e4-0xc0542 entry=345 events=1883 span_bytes=606 insns=130
 *   0x8920e-0x89488 entry=82 events=142 span_bytes=634 insns=136
 *   0x994cf-0x99767 entry=160 events=5207 span_bytes=664 insns=146
 *   0x85371-0x8560c entry=65 events=23 span_bytes=667 insns=155
 */
#include <stdbool.h>
#include <stdint.h>

typedef __int128 int128_t;
extern int g1;
extern int g2;
extern int g4;
extern int g5;
unsigned char llvm_ctpop_i8(unsigned char value);
void __asm_out(uint16_t port, char value);
uint8_t __readfsbyte(int64_t offset);

int64_t function_70cda013();
int64_t function_ffffffff81cb18ac();

// Address range: 0x8115d - 0x8129d
int64_t function_8115d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8115d
    int64_t v1; // 0x8115d
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x81167
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x81174
    *v3 = *v3 - *v2 ^ 0x3dd6f909;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x8119b
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)*v4); // 0x811e5
    *v5 = *v5 - 8;
    *v2 = *v2 & -1 - (int32_t)*(int16_t *)(*v4 + 4);
    *v4 = *v4 + 6;
    return (uint64_t)v1 % 2;
}

// Address range: 0x815ea - 0x8173d
int64_t function_815ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x815ea
    int64_t v1; // 0x815ea
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x8160b
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x81621
    int32_t v4 = (*v3 ^ *v2 - 0x327f38a4) - 0x471012ae ^ 0x160c3a44; // 0x81661
    *v3 = v4;
    *v2 = *v2 - v4;
    int64_t * v5 = (int64_t *)(v1 + 10); // 0x816b9
    int64_t v6 = *v5; // 0x816b9
    int64_t v7 = *(int64_t *)(v1 + 271); // 0x81710
    *v5 = v6 + 4;
    return *(int64_t *)(8 * (int64_t)*(int16_t *)(v6 + 2) + v7);
}

// Address range: 0x85371 - 0x855ff
int64_t function_85371(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x85371
    int64_t v1; // 0x85371
    int64_t result = v1 + 10; // 0x8537a
    int64_t * v2 = (int64_t *)result; // 0x85387
    uint16_t v3 = *(int16_t *)(*v2 + 2); // 0x853a3
    int32_t v4 = *(int32_t *)(v1 + 368); // 0x853d3
    int32_t * v5 = (int32_t *)(v1 + 35); // 0x853f4
    int32_t v6 = *v5; // 0x853f4
    *v5 = v6 | 0x21ace1e6;
    int64_t v7 = ((int64_t)(v4 ^ (int32_t)v3 ^ v6) & (int64_t)&g5) + v1; // 0x85444
    *(int64_t *)(v1 + 129) = v7 - 0x1a44e4ef;
    int64_t * v8 = (int64_t *)v7; // 0x854cd
    *v8 = *v8 + *(int64_t *)(v1 + 187);
    *v5 = *v5 - 0x1139986a;
    *v2 = *v2 + 4;
    return result;
}

// Address range: 0x8920e - 0x8947b
int64_t function_8920e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8920e
    int64_t v1; // 0x8920e
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x8924c
    int32_t v3 = *v2; // 0x8924c
    int32_t v4 = v3; // 0x8925b
    if ((v3 & 2) != 0) {
        int32_t v5 = v3 + 0x1bc90d20; // 0x89275
        *v2 = v5;
        v4 = v5;
        if ((v5 & 2) != 0) {
            int32_t v6 = v5 | 0x2d688b3e; // 0x892a3
            *v2 = v6;
            v4 = v6;
        }
    }
    int64_t v7 = v1 + 368; // 0x892ea
    int32_t * v8 = (int32_t *)v7; // 0x892f1
    *v8 = *v8 + v4;
    int64_t * v9 = (int64_t *)(v1 + 10); // 0x8930e
    *(char *)(v1 + 225) = *(char *)(*v9 + 2);
    int64_t v10 = *(int64_t *)(v1 + 271); // 0x89388
    uint16_t v11 = *(int16_t *)*v9; // 0x893c4
    *v8 = -0x5cc5e4d8 - (int32_t)v11;
    *v9 = *v9 + 3;
    return ((int64_t)v11 & (int64_t)&g4 - 8 | v10) - 240 ^ (v7 | (int64_t)&g1) - 0xffff;
}

// Address range: 0x89483 - 0x89486
int64_t function_89483(void) {
    // 0x89483
    int64_t result; // 0x89483
    return result;
}

// Address range: 0x8a37f - 0x8a49e
int64_t function_8a37f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8a37f
    int64_t v1; // 0x8a37f
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x8a494
    *v2 = *v2 + 4;
    return v1 + 113 + v1;
}

// Address range: 0x8b6de - 0x8b8cb
int64_t function_8b6de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8b6de
    int64_t result; // 0x8b6de
    int32_t * v1 = (int32_t *)(result + 368); // 0x8b784
    int32_t * v2 = (int32_t *)(result + 35); // 0x8b797
    *v2 = *v1 ^ 0x3f03cfb3 ^ *v2;
    int64_t * v3 = (int64_t *)(result + 10); // 0x8b7e9
    *v1 = (int32_t)*(int16_t *)*v3;
    *v3 = *v3 + 4;
    return result;
}

// Address range: 0x8b8cd - 0x8b8cf
int64_t function_8b8cd(void) {
    // 0x8b8cd
    int64_t result; // 0x8b8cd
    return result;
}

// Address range: 0x8b8d0 - 0x8b8d1
int64_t function_8b8d0(void) {
    // 0x8b8d0
    int64_t result; // 0x8b8d0
    return result;
}

// Address range: 0x90ebc - 0x9106a
int64_t function_90ebc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x90ebc
    int64_t v1; // 0x90ebc
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x90ed0
    int32_t v3 = *v2; // 0x90ed0
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x90f0c
    if ((v3 & 2) != 0) {
        // 0x90f30
        *v2 = v3 - 0x1d17883d ^ 0x5928e32a;
    }
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)*v4); // 0x90f86
    *v5 = *v5 - 8;
    int32_t * v6 = (int32_t *)(v1 + 368); // 0x90ff6
    int32_t v7 = *v6; // 0x90ff6
    *v6 = (v7 ^ (int32_t)*(int16_t *)(*v4 + 4)) + 0x7e7974a5 | v7;
    *v4 = *v4 + 6;
    return 128;
}

// Address range: 0x994cf - 0x9975a
int64_t function_994cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x994cf
    int64_t v1; // 0x994cf
    int64_t v2 = *(int64_t *)(v1 + 113) - 0x1a44e4ef; // 0x994f4
    int64_t v3 = *(int64_t *)(v1 + 129); // 0x99505
    int64_t v4 = v3 + 0x1a44e4ef; // 0x99508
    char v5 = *(char *)(v1 + 404); // 0x99519
    if (v5 == 98) {
        // 0x99527
        *(char *)v4 = (char)v2;
    }
    if (v5 == 50) {
        // 0x99534
        *(int16_t *)v4 = (int16_t)v2;
    }
    int64_t v6 = v4; // 0x9953c
    if (v5 == 80) {
        // 0x99542
        *(int32_t *)v4 = (int32_t)v2;
        v6 = v4;
        if (*(char *)(v1 + 367) != 0) {
            int64_t v7 = v3 + 0x1a44e4f3; // 0x9955a
            *(int32_t *)v7 = 0;
            v6 = v7;
        }
    }
    if (v5 == 58) {
        // 0x99572
        *(int64_t *)v6 = v2;
    }
    int64_t v8 = v1 + 368; // 0x99589
    int32_t * v9 = (int32_t *)v8; // 0x99593
    int32_t v10 = *v9 | 0x67f1fed6; // 0x99593
    *v9 = v10;
    int32_t * v11 = (int32_t *)(v1 + 35); // 0x995a5
    int32_t v12 = *v11; // 0x995a5
    int32_t v13 = v10; // 0x995b7
    if ((v12 & 2) != 0) {
        // 0x995bd
        *v11 = v12 - 0x559d4d7b;
        v13 = *v9;
    }
    int32_t v14 = v13 & 129 | 0x521b8b00; // 0x99613
    *v9 = v14;
    int64_t * v15 = (int64_t *)(v1 + 10); // 0x99683
    int64_t v16 = *(int64_t *)(v1 + 271); // 0x99689
    *v9 = (v14 ^ (int32_t)*(int16_t *)*v15) - 0x4cf19f11 | v14;
    *v15 = *v15 + 2;
    return (v1 | v1 + 16) + 4 - (int64_t)L"\n2" + v8 - v16;
}

// Address range: 0x9975f - 0x99764
int64_t function_9975f(void) {
    // 0x9975f
    return function_ffffffff81cb18ac();
}

// Address range: 0x9a24c - 0x9a46e
int64_t function_9a24c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9a24c
    int64_t v1; // 0x9a24c
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x9a276
    *v2 = 0;
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x9a2c0
    *v3 = 0;
    *(int32_t *)(v1 + 243) = 0;
    uint32_t result = *v2; // 0x9a306
    *v2 = *v3 ^ result;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x9a464
    *v4 = *v4 + 2;
    return result;
}

// Address range: 0x9a8d2 - 0x9aa83
int64_t function_9a8d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9a8d2
    int64_t v1; // 0x9a8d2
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x9a92e
    int64_t v3 = *v2; // 0x9a92e
    *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 2)) = a6;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0x9a98e
    *v4 = *v4 - 0x69d75971;
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0x9a9a8
    *v5 = *v5 + 8;
    int64_t result = v1 + 368; // 0x9aa20
    int32_t * v6 = (int32_t *)result; // 0x9aa29
    int32_t v7 = *v6; // 0x9aa29
    *v6 = v7 - ((int32_t)*(int16_t *)(*v2 + 4) ^ 0x5f92615 ^ v7);
    *v2 = *v2 + 6;
    return result;
}

// Address range: 0x9aa88 - 0x9aa8b
int64_t function_9aa88(void) {
    // 0x9aa88
    int64_t result; // 0x9aa88
    return result;
}

// Address range: 0x9af18 - 0x9b0c8
int64_t function_9af18(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x9af18
    int64_t v1; // 0x9af18
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x9af22
    *v2 = *v2 - 0x2eb17f28;
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x9af97
    *v3 = *v3 ^ 0x3fd04ca8;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x9afbe
    uint16_t v5 = *(int16_t *)(*v4 + 2); // 0x9afe6
    int64_t v6; // 0x9af18
    *(int64_t *)(v1 + (int64_t)v5) = (int64_t)&v6;
    *v4 = *v4 + 4;
    return 0;
}

// Address range: 0x9b4b3 - 0x9b68a
int64_t function_9b4b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9b4b3
    int64_t v1; // 0x9b4b3
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x9b4bc
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x9b4f0
    *v2 = 0;
    *v3 = 0;
    *(int32_t *)(v1 + 243) = 0;
    *v2 = *v2 + *v3;
    int32_t v4 = *v3; // 0x9b583
    if ((v4 & 2) != 0) {
        // 0x9b59a
        *v3 = (v4 & 0x35efe488) + 0x44a4d3f8;
    }
    int64_t * v5 = (int64_t *)(v1 + 10); // 0x9b5e1
    int64_t v6 = *v5; // 0x9b5e1
    *v5 = v6 + 2;
    return 8 * (int64_t)*(int16_t *)v6 - 240;
}

// Address range: 0x9cf32 - 0x9d13f
int64_t function_9cf32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9cf32
    int64_t v1; // 0x9cf32
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x9cfbf
    int32_t v3 = *v2; // 0x9cfbf
    int32_t v4 = v3; // 0x9cfd4
    if ((v3 & 2) != 0) {
        // 0x9cfda
        v4 = v3 + 0x3f2841fb;
        *v2 = v4;
    }
    int32_t * v5 = (int32_t *)(v1 + 368); // 0x9d026
    *v2 = (*v5 ^ 0x417a1c15) + v4;
    int64_t result = v1 + 10; // 0x9d040
    int64_t * v6 = (int64_t *)result; // 0x9d067
    *v5 = (int32_t)*(int16_t *)*v6 + 0x7920fa05 | *v5;
    *v6 = *v6 + 4;
    return result;
}

// Address range: 0x9d13f - 0x9d24c
int64_t function_9d13f(int64_t a1, int64_t a2) {
    // 0x9d13f
    int64_t v1; // 0x9d13f
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x9d160
    int64_t * v3 = (int64_t *)(v1 + (int64_t)*(int16_t *)(*v2 + 2)); // 0x9d18b
    *v3 = *v3 - 8;
    int64_t v4 = *(int64_t *)(v1 + 271); // 0x9d1b3
    int32_t * v5 = (int32_t *)(v1 + 368); // 0x9d1e7
    int32_t v6 = *v5; // 0x9d1e7
    uint32_t v7 = (int32_t)*(int16_t *)(*v2 + 4) - v6; // 0x9d1e7
    *v5 = v6 - v7;
    *v2 = *v2 + 6;
    return *(int64_t *)(((int64_t)v7 & (int64_t)&g5) + v4);
}

// Address range: 0x9d495 - 0x9d694
int64_t function_9d495(int64_t a1, int64_t a2, int64_t a3) {
    // 0x9d495
    int64_t v1; // 0x9d495
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x9d522
    int32_t v3 = *v2 + 0xfaa325c ^ 0x694e1f66; // 0x9d533
    *v2 = v3;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0x9d545
    int32_t v5 = *v4; // 0x9d545
    int32_t v6 = v3; // 0x9d556
    if ((v5 & 2) != 0) {
        // 0x9d55c
        *v4 = (v5 | 0x53ed8227) ^ 0x7f548109;
        v6 = *v2;
    }
    int32_t v7 = v6; // 0x9d5eb
    int64_t * v8 = (int64_t *)(v1 + 10); // 0x9d5be
    *v2 = -0x1aed554c - v7 + (int32_t)*(int16_t *)(*v8 + 2) | v7;
    *v8 = *v8 + 4;
    return v1 & v1 | 145;
}

// Address range: 0xaeda2 - 0xaef02
int64_t function_aeda2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xaeda2
    int64_t result; // 0xaeda2
    int64_t * v1 = (int64_t *)(result + 10); // 0xaee0f
    int64_t * v2 = (int64_t *)(result + (int64_t)*(int16_t *)*v1); // 0xaee36
    *v2 = *v2 - 8;
    int32_t * v3 = (int32_t *)(result + 368); // 0xaeeca
    *v3 = (int32_t)*(int16_t *)(*v1 + 2) + 0x4c539d29 + *v3;
    *v1 = *v1 + 6;
    return result;
}

// Address range: 0xaef07 - 0xaef08
int64_t function_aef07(void) {
    // 0xaef07
    int64_t result; // 0xaef07
    return result;
}

// Address range: 0xb3612 - 0xb379b
int64_t function_b3612(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb3612
    int64_t v1; // 0xb3612
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xb3640
    int64_t v3 = *v2; // 0xb3640
    int64_t v4 = (int64_t)*(char *)v3; // 0xb3657
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 1)); // 0xb36c2
    *v5 = *v5 + v4;
    *v2 = *v2 + 5;
    return (v4 ^ 16) & (int64_t)&g2;
}

// Address range: 0xb60e0 - 0xb625d
int64_t function_b60e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb60e0
    int64_t result; // 0xb60e0
    int64_t * v1 = (int64_t *)(result + 10); // 0xb60f4
    int64_t v2 = *v1; // 0xb60f4
    int64_t * v3 = (int64_t *)(result + (int64_t)*(int16_t *)v2); // 0xb616d
    *v3 = *v3 + (int64_t)*(char *)(v2 + 4);
    int32_t * v4 = (int32_t *)(result + 368); // 0xb620f
    *v4 = (int32_t)*(int16_t *)(*v1 + 2) - 0x396ecbf2 | *v4;
    *v1 = *v1 + 5;
    return result;
}

// Address range: 0xb625f - 0xb6265
int64_t function_b625f(void) {
    // 0xb625f
    int64_t result; // 0xb625f
    int32_t * v1 = (int32_t *)(result - 57); // 0xb625f
    *v1 = *v1 - 1;
    return result;
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

// Address range: 0xbb6e6 - 0xbb8aa
int64_t function_bb6e6(int64_t a1) {
    // 0xbb6e6
    int64_t v1; // 0xbb6e6
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xbb6fd
    int32_t * v3 = (int32_t *)(v1 + 368); // 0xbb723
    int32_t v4 = *v3 ^ *v2; // 0xbb723
    *v3 = v4;
    *v3 = v4 - *v2;
    int32_t v5 = *v2; // 0xbb755
    if ((v5 & 2) != 0) {
        int32_t v6 = v5 + 0x67f2eb7c; // 0xbb786
        *v2 = v6;
        if ((v6 & 2) != 0) {
            // 0xbb7c0
            *v2 = v5 - 0x7b26da62 ^ 0x34d95df5;
        }
    }
    int64_t * v7 = (int64_t *)(v1 + 10); // 0xbb80e
    int64_t v8 = *v7; // 0xbb80e
    int64_t v9 = *(int64_t *)(v1 + 271); // 0xbb860
    *v7 = v8 + 4;
    return *(int64_t *)(8 * (int64_t)*(int16_t *)v8 + v9);
}

// Address range: 0xbf128 - 0xbf2d5
int64_t function_bf128(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xbf128
    int64_t v1; // 0xbf128
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xbf1b7
    int64_t v3 = *v2; // 0xbf1b7
    *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 2)) = a7;
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 4)); // 0xbf210
    *v4 = *v4 + 8;
    int32_t * v5 = (int32_t *)(v1 + 368); // 0xbf272
    *v5 = 0x4bf8be0c - (int32_t)*(int16_t *)*v2 + 2 * *v5;
    *v2 = *v2 + 6;
    return 0;
}

// Address range: 0xbf2da - 0xbf2dc
int64_t function_bf2da(void) {
    // 0xbf2da
    int64_t result; // 0xbf2da
    return result;
}

// Address range: 0xbf2dd - 0xbf2e0
int64_t function_bf2dd(void) {
    // 0xbf2dd
    int64_t result; // 0xbf2dd
    return result;
}

// Address range: 0xc02e4 - 0xc0535
int64_t function_c02e4(int64_t a1, int64_t a2, int64_t a3) {
    // 0xc02e4
    int64_t v1; // 0xc02e4
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xc02f7
    int32_t * v3 = (int32_t *)(v1 + 368); // 0xc0329
    int32_t v4 = *v3; // 0xc0329
    int32_t * v5 = (int32_t *)(v1 + 35); // 0xc0335
    uint32_t v6 = (v4 ^ *(int32_t *)(*v2 + 2)) + *v5; // 0xc0335
    *v3 = v6 + v4;
    *v5 = *v5 & 0xe71dcd4;
    *(int64_t *)(v1 + 96) = (int64_t)v6 - 0x653cf834;
    int32_t v7 = *v5; // 0xc0399
    if ((v7 & 2) != 0) {
        // 0xc03ad
        *v5 = (v7 | 0x8a29ac4) + 0x19e12fa1;
    }
    // 0xc03cb
    *v3 = 2 * *v3 + (int32_t)*(int16_t *)*v2;
    *v2 = *v2 + 6;
    return 120;
}

// Address range: 0xc0537 - 0xc0539
int64_t function_c0537(void) {
    // 0xc0537
    int64_t result; // 0xc0537
    return result;
}

// Address range: 0xc053a - 0xc053b
int64_t function_c053a(void) {
    // 0xc053a
    int64_t result; // 0xc053a
    return result;
}

// Address range: 0xc1d48 - 0xc1ec4
int64_t function_c1d48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xc1d48
    int64_t v1; // 0xc1d48
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xc1d6c
    int64_t v3 = *v2; // 0xc1d6c
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0xc1dbf
    *v4 = *v4 + (int64_t)*(char *)(v3 + 4);
    int32_t * v5 = (int32_t *)(v1 + 368); // 0xc1e4b
    int32_t v6 = *v5; // 0xc1e4b
    uint32_t v7 = (int32_t)*(int16_t *)(*v2 + 2) - 0x7b3a2d18 + v6; // 0xc1e58
    *v5 = v7 | v6;
    *v2 = *v2 + 5;
    return *(int64_t *)(v1 + 271) + (int64_t)(v7 % 0x10000);
}

// Address range: 0xc1ec6 - 0xc1ecb
int64_t function_c1ec6(void) {
    // 0xc1ec6
    return function_70cda013();
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
