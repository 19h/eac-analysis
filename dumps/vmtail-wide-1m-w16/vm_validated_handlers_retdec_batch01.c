/*
 * Targeted RetDec C for static-validated VM handler native ranges, batch 1.
 *
 * These handlers already have 100% validated handler-layer transfer models.
 * This artifact keeps native decompiler sidecars for full dispatch-entry
 * coverage and cross-checking against the VM-lifted C pseudocode.
 *
 * Total static-validated handler ranges: 166
 * Batch size: 24
 * Ranges:
 *   0x90c23-0x90ec9 entry=118 events=398 span_bytes=678 insns=141
 *   0x99029-0x992da entry=158 events=9432 span_bytes=685 insns=152
 *   0x92f21-0x931e0 entry=129 events=139 span_bytes=703 insns=150
 *   0xa037e-0xa063e entry=198 events=4955 span_bytes=704 insns=151
 *   0xbc06d-0xbc32d entry=326 events=70 span_bytes=704 insns=158
 *   0x9e07d-0x9e343 entry=187 events=5 span_bytes=710 insns=162
 *   0x9d694-0x9d971 entry=184 events=12094 span_bytes=733 insns=156
 *   0x78561-0x78843 entry=0 events=89 span_bytes=734 insns=173
 *   0x95887-0x95b69 entry=144 events=5218 span_bytes=734 insns=160
 *   0x7ecd2-0x7efb6 entry=31 events=2 span_bytes=739 insns=165
 *   0x926c3-0x929a8 entry=127 events=384 span_bytes=741 insns=165
 *   0xb4c00-0xb4eea entry=290 events=27 span_bytes=743 insns=171
 *   0x9c10b-0x9c404 entry=176 events=10138 span_bytes=755 insns=160
 *   0xa4b11-0xa4e04 entry=217 events=215 span_bytes=755 insns=168
 *   0xab141-0xab434 entry=245 events=75 span_bytes=755 insns=168
 *   0x8c99a-0x8cc8f entry=99 events=695 span_bytes=756 insns=159
 *   0xaa87d-0xaab77 entry=242 events=181 span_bytes=762 insns=161
 *   0xb3ff4-0xb42ef entry=285 events=1 span_bytes=762 insns=172
 *   0xc1ec4-0xc21d0 entry=352 events=4424 span_bytes=777 insns=169
 *   0x9bd8f-0x9c09c entry=174 events=11742 span_bytes=778 insns=174
 *   0xa9cf7-0xaa007 entry=240 events=7 span_bytes=778 insns=177
 *   0xc3406-0xc3726 entry=359 events=6 span_bytes=786 insns=166
 *   0xb78b0-0xb7bc8 entry=305 events=10874 span_bytes=791 insns=173
 *   0x85059-0x8537e entry=64 events=23678 span_bytes=801 insns=170
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

int64_t function_49f21c1f();
int64_t function_cb6486();

// Address range: 0x78561 - 0x78835
int64_t function_78561(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x78561
    int64_t v1; // 0x78561
    int64_t v2 = v1;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x211b7d23;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0x785c5
    *v3 = *v3 ^ 0x1966e0e7;
    int64_t v4 = v2 + 0x211b7d23; // 0x785d6
    int64_t * v5 = (int64_t *)(v2 + 10); // 0x785fb
    uint64_t v6 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v5 + 2)); // 0x7861e
    char v7 = *(char *)(v2 + 404); // 0x7862f
    int64_t v8 = v6; // 0x78634
    int64_t v9 = v4; // 0x78634
    if (v7 == 98) {
        unsigned char v10 = (char)v4; // 0x78645
        char v11 = v10 - 1; // 0x78645
        unsigned char v12 = llvm_ctpop_i8(v11); // 0x78645
        v8 = 128 * (int64_t)(v11 < 0) | 64 * (int64_t)(v11 == 0) | 2048 * (int64_t)((v10 & -v10) < 0) | 16 * (int64_t)(v10 % 16 > 16) | 4 * (int64_t)(v12 % 2 == 0) | (int64_t)(v6 % 2 != 0) | 256 * (int64_t)((v6 & 256) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | 2;
        v9 = v4 & -256 | (int64_t)v11;
    }
    int64_t v13 = v8;
    int64_t v14 = v13; // 0x7864f
    int64_t v15 = v9; // 0x7864f
    if (v7 == 50) {
        uint16_t v16 = (int16_t)v9; // 0x78660
        int16_t v17 = v16 - 1; // 0x78660
        unsigned char v18 = llvm_ctpop_i8((char)v17); // 0x78660
        v14 = 256 * (int64_t)((v13 & 256) != 0) | (int64_t)(v13 % 2 != 0) | 512 * (int64_t)((v13 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v13 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v13 & (int64_t)"le") != 0) | 128 * (int64_t)(v17 < 0) | 64 * (int64_t)(v17 == 0) | 2048 * (int64_t)((v16 & -v16) < 0) | 16 * (int64_t)(v16 % 16 > 16) | 4 * (int64_t)(v18 % 2 == 0) | 2;
        v15 = v9 & -0x10000 | (int64_t)v17;
    }
    int64_t v19 = v14;
    int64_t v20 = v19; // 0x78668
    int64_t v21 = v15; // 0x78668
    if (v7 == 80) {
        uint32_t v22 = (int32_t)v15; // 0x78672
        int32_t v23 = v22 - 1; // 0x78672
        unsigned char v24 = llvm_ctpop_i8((char)v23); // 0x78672
        v20 = 256 * (int64_t)((v19 & 256) != 0) | (int64_t)(v19 % 2 != 0) | 512 * (int64_t)((v19 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v19 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v19 & (int64_t)"le") != 0) | 128 * (int64_t)(v23 < 0) | 64 * (int64_t)(v23 == 0) | 2048 * (int64_t)((v22 & -v22) < 0) | 16 * (int64_t)(v22 % 16 > 16) | 4 * (int64_t)(v24 % 2 == 0) | 2;
        v21 = v23;
    }
    int64_t v25 = v21;
    int64_t v26 = v20;
    int64_t v27 = v26; // 0x7867f
    int64_t v28 = v25; // 0x7867f
    if (v7 == 58) {
        // 0x78685
        v28 = v25 - 1;
        unsigned char v29 = llvm_ctpop_i8((char)v28); // 0x78689
        v27 = 256 * (int64_t)((v26 & 256) != 0) | (int64_t)(v26 % 2 != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | 128 * (int64_t)(v28 < 0) | 64 * (int64_t)(v28 == 0) | 2048 * (int64_t)((v25 & -v25) < 0) | 16 * (int64_t)(v25 % 16 > 16) | 4 * (int64_t)(v29 % 2 == 0) | 2;
    }
    int64_t v30 = v2 + 113; // 0x78696
    int64_t * v31 = (int64_t *)v30; // 0x786a0
    *v31 = v28;
    int64_t v32 = *v5; // 0x786cf
    if (*(char *)(v32 + 4) != 0) {
        // 0x78702
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v32 + 2)) = v27;
    }
    // 0x7874a
    *v31 = v28 + 0x1a44e4ef;
    *v3 = 0x251a0141 - (int32_t)*(int16_t *)*v5;
    *v5 = *v5 + 5;
    return *(int64_t *)(v2 + 271) + (v30 ^ 32);
}

// Address range: 0x7ecd2 - 0x7efa8
int64_t function_7ecd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x7ecd2
    int64_t v1; // 0x7ecd2
    int64_t v2 = v1;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x50af5ca1;
    int64_t v3 = v2 + 0x50af5ca1; // 0x7ed5f
    char v4 = *(char *)(v2 + 404); // 0x7ed79
    int64_t v5 = v3; // 0x7eda5
    int64_t v6; // 0x7ecd2
    bool v7; // 0x7ecd2
    if (v4 == 98) {
        unsigned char v8 = (char)v3; // 0x7edab
        char v9 = -v8; // 0x7edab
        int64_t v10 = 64 * (int64_t)(v8 == 0) | (int64_t)(v8 != 0) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(-((v8 % 16)) > 15) | 4 * (int64_t)(llvm_ctpop_i8(v9) % 2 == 0) | 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 2; // bp-8, 0x7edae
        v6 = (int64_t)&v10;
        v5 = v3 & -256 | (int64_t)v9;
    }
    int64_t v11 = v6; // 0x7edb6
    int64_t v12 = v5; // 0x7edb6
    if (v4 == 50) {
        uint16_t v13 = (int16_t)v5; // 0x7edbc
        int16_t v14 = -v13; // 0x7edbc
        int64_t v15 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v13 != 0) | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(-((v13 % 16)) > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v14) % 2 == 0) | 2; // bp-16, 0x7edc0
        v11 = (int64_t)&v15;
        v12 = v5 & -0x10000 | (int64_t)v14;
    }
    int64_t v16 = v11; // 0x7edc5
    int64_t v17 = v12; // 0x7edc5
    if (v4 == 80) {
        uint32_t v18 = (int32_t)v12; // 0x7edcb
        int32_t v19 = -v18; // 0x7edcb
        unsigned char v20 = llvm_ctpop_i8((char)v19); // 0x7edcb
        v16 = v11 - 8;
        *(int64_t *)v16 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v18 != 0) | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v19 < 0) | 16 * (int64_t)(-((v18 % 16)) > 15) | 4 * (int64_t)(v20 % 2 == 0) | 2;
        v17 = v19;
    }
    int64_t v21 = v17;
    int64_t v22 = v16; // 0x7eddd
    int64_t v23 = v21; // 0x7eddd
    if (v4 == 58) {
        // 0x7ede3
        v23 = -v21;
        unsigned char v24 = llvm_ctpop_i8((char)v23); // 0x7ede3
        v22 = v16 - 8;
        *(int64_t *)v22 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v21 != 0) | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v23 < 0) | 16 * (int64_t)(-((v21 % 16)) > 15) | 4 * (int64_t)(v24 % 2 == 0) | 2;
    }
    int64_t * v25 = (int64_t *)(v2 + 113); // 0x7ee08
    *v25 = v23 + 0x3a838b10;
    int64_t * v26 = (int64_t *)(v2 + 10); // 0x7ee42
    int64_t v27 = *v26; // 0x7ee42
    if (*(char *)(v27 + 4) != 0) {
        // 0x7ee72
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v27) = *(int64_t *)v22;
    }
    // 0x7eeae
    *v25 = v23 + 0x1a44e4ef;
    int64_t v28 = *v26; // 0x7ef06
    int64_t v29 = *(int64_t *)(v2 + 271); // 0x7ef15
    uint16_t v30 = *(int16_t *)(v28 + 2); // 0x7ef1f
    int32_t v31 = *(int32_t *)(v2 + 368); // 0x7ef44
    *v26 = v28 + 5;
    return *(int64_t *)(v29 + (int64_t)(((int32_t)v30 + 0xdb51 + v31) % 0x10000));
}

// Address range: 0x7efb0 - 0x7efb2
int64_t function_7efb0(void) {
    // 0x7efb0
    int64_t result; // 0x7efb0
    return result;
}

// Address range: 0x85059 - 0x85371
int64_t function_85059(void) {
    // 0x85059
    int64_t v1; // 0x85059
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x8506f
    int32_t v3 = *v2; // 0x8506f
    if ((v3 & 2) != 0) {
        // 0x85085
        *v2 = v3 + 0x4cd0c9ae;
    }
    int32_t * v4 = (int32_t *)(v1 + 368); // 0x850ab
    int32_t v5 = *v4 - 0x79614de5; // 0x850ab
    *v4 = v5;
    int32_t v6 = *v2; // 0x850bb
    int32_t v7 = v5; // 0x850d9
    int32_t v8 = v6; // 0x850d9
    if ((v6 & 2) != 0) {
        // 0x850df
        v8 = v6 + 0x711675f2 & 0x5b249a06;
        *v2 = v8;
        v7 = *v4;
    }
    int64_t result = v1 + 10; // 0x85167
    int64_t * v9 = (int64_t *)result; // 0x85178
    uint32_t v10 = v8 + (int32_t)*(int16_t *)(*v9 + 2); // 0x8519d
    *v4 = v10 ^ v7;
    *v2 = *v2 + 0x729dddb0;
    int64_t v11 = *(int64_t *)(((int64_t)v10 & (int64_t)&g4) + v1); // 0x851c8
    *(int64_t *)v1 = v11 ^ 0xda3b7d9;
    *(char *)(v1 + 367) = 1;
    *v4 = *v4 ^ *v2;
    *v9 = *v9 + 4;
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

// Address range: 0x90c23 - 0x90ebc
int64_t function_90c23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x90c23
    int64_t v1; // 0x90c23
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x90c6b
    int32_t v3 = *v2; // 0x90c6b
    int32_t v4 = v3; // 0x90c94
    if ((v3 & 2) != 0) {
        // 0x90c9a
        v4 = (v3 ^ 0x41355bdb) + 0x392f8e74;
        *v2 = v4;
    }
    int32_t v5 = v4 + 0x860cb96; // 0x90ce2
    *v2 = v5;
    int64_t * v6 = (int64_t *)(v1 + 10); // 0x90d06
    if ((v5 & 2) != 0) {
        // 0x90d1f
        *v2 = (v5 & 0x276ac31a) - 0x5cecff55;
    }
    // 0x90d43
    *(char *)(v1 + 225) = *(char *)*v6;
    int64_t v7 = *(int64_t *)(v1 + 271); // 0x90dbc
    int64_t v8 = v1 + 368; // 0x90de5
    int32_t * v9 = (int32_t *)v8; // 0x90df8
    int32_t v10 = *v9; // 0x90df8
    uint32_t v11 = (v10 ^ (int32_t)*(int16_t *)(*v6 + 1)) - 0x52d3aa4; // 0x90dfb
    *v9 = v11 & v10;
    int64_t v12 = (int64_t)v11 & (int64_t)&g4; // 0x90e37
    int64_t v13 = *(int64_t *)(v12 + v7); // 0x90e77
    *v6 = *v6 + 3;
    return v13 - 128 + (v12 & ((v7 ^ (int64_t)&g2 | v8 ^ v1) & (int64_t)&g2) + 0xffffffe0);
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
        v7 = 64 * (int64_t)(v10 == 0) | 16 * (int64_t)(v9 % 16 == 15) | 128 * (int64_t)(v10 < 0) | 2048 * (int64_t)((v10 & (v9 ^ -128)) < 0) | 4 * (int64_t)(v11 % 2 == 0) | (int64_t)(v5 % 2 != 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | 2;
        v8 = v3 & -256 | (int64_t)v10;
    }
    int64_t v12 = v7;
    int64_t v13 = v12; // 0x92782
    if (v6 == 50) {
        uint16_t v14 = (int16_t)v8; // 0x92789
        int16_t v15 = v14 + 1; // 0x92789
        unsigned char v16 = llvm_ctpop_i8((char)v15); // 0x92789
        v13 = 256 * (int64_t)((v12 & 256) != 0) | (int64_t)(v12 % 2 != 0) | 512 * (int64_t)((v12 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v12 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v12 & (int64_t)"le") != 0) | 64 * (int64_t)(v15 == 0) | 16 * (int64_t)(v14 % 16 == 15) | 128 * (int64_t)(v15 < 0) | 2048 * (int64_t)((v15 & (v14 ^ -0x8000)) < 0) | 4 * (int64_t)(v16 % 2 == 0) | 2;
    }
    int64_t v17 = v13;
    int64_t v18 = v17; // 0x92798
    int64_t v19 = 0; // 0x92798
    int64_t v20 = v19; // 0x92798
    if (v6 == 80) {
        uint32_t v21 = (int32_t)v19; // 0x927a5
        int32_t v22 = v21 + 1; // 0x927a5
        unsigned char v23 = llvm_ctpop_i8((char)v22); // 0x927a5
        v18 = 256 * (int64_t)((v17 & 256) != 0) | (int64_t)(v17 % 2 != 0) | 512 * (int64_t)((v17 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v17 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v17 & (int64_t)"le") != 0) | 64 * (int64_t)(v22 == 0) | 16 * (int64_t)(v21 % 16 == 15) | 128 * (int64_t)(v22 < 0) | 2048 * (int64_t)((v22 & (v21 ^ -0x80000000)) < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
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
        v26 = 256 * (int64_t)((v25 & 256) != 0) | (int64_t)(v25 % 2 != 0) | 512 * (int64_t)((v25 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v25 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v25 & (int64_t)"le") != 0) | 64 * (int64_t)(v28 == 0) | 16 * (int64_t)(v24 % 16 == 15) | 128 * (int64_t)(v28 < 0) | 2048 * (int64_t)((v28 & (v24 ^ -0x8000000000000000)) < 0) | 4 * (int64_t)(v29 % 2 == 0) | 2;
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

// Address range: 0x92f21 - 0x931d3
int64_t function_92f21(void) {
    // 0x92f21
    int64_t v1; // 0x92f21
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x92f2e
    int64_t * v3 = (int64_t *)(v1 + 10); // 0x92f38
    *(char *)(v1 + 225) = *(char *)(*v3 + 2);
    int32_t * v4 = (int32_t *)(v1 + 368); // 0x92f62
    int32_t v5 = *v4 & (*v2 | 0x77ecded8); // 0x92f62
    *v4 = v5 + 0x740a49bf;
    int32_t v6 = v5 + 0x314196c5 + *v2; // 0x92fe9
    int32_t v7 = (v6 & 2) == 0 ? v6 : v6 + 0x1e1099d9;
    *v2 = v7;
    int32_t v8 = v7 + *v4 & 0x63b683d; // 0x93052
    *v4 = v8;
    int32_t v9 = (v8 | 0x62d055c9) ^ *v2; // 0x9308c
    *v2 = v9;
    *v2 = v9 & *v4 - 0x7f18a8a;
    int32_t v10 = *v4; // 0x9315f
    *v4 = (int32_t)*(int16_t *)*v3 - v10 & v10;
    *v3 = *v3 + 3;
    return 0;
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

// Address range: 0x99029 - 0x992cd
int64_t function_99029(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x99029
    int64_t v1; // 0x99029
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x99058
    int32_t * v3 = (int32_t *)(v1 + 368); // 0x9905b
    *v3 = *v3 ^ 0x1fbfc3f3;
    if ((*v2 & 2) != 0) {
        // 0x99077
        *v2 = *v2 ^ 0x3c39b020;
    }
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x990d4
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)*v4);
    *v5 = *v5 + (*(char *)(v1 + 404) != 50 ? -8 : -2);
    int32_t v6 = *v2 ^ 0x10411801 ^ *v3 | 0xfb6049e; // 0x9913b
    *v3 = v6;
    uint32_t result = *v2; // 0x99176
    int32_t v7 = v6 ^ result; // 0x99182
    *v3 = v7;
    *v3 = (v7 + (int32_t)*(int16_t *)(*v4 + 2) ^ 0x3ffdb46c) + v7;
    *v4 = *v4 + 4;
    return result;
}

// Address range: 0x992d2 - 0x992d7
int64_t function_992d2(void) {
    // 0x992d2
    return function_49f21c1f();
}

// Address range: 0x9bd8f - 0x9c08f
int64_t function_9bd8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x9bd8f
    int64_t v1; // 0x9bd8f
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x9bd99
    int32_t * v3 = (int32_t *)(v1 + 368); // 0x9bda5
    int32_t v4 = *v3 - *v2; // 0x9bda5
    *v3 = v4;
    int32_t v5 = *v2 & v4; // 0x9be01
    *v3 = v5;
    int32_t v6 = *v2 ^ v5; // 0x9be52
    *v3 = v6;
    int32_t v7 = *v2 + v6; // 0x9be7a
    *v3 = v7;
    int64_t v8 = v1 + 113; // 0x9be87
    *v3 = v7 ^ 0x5fa9d2b1;
    int64_t * v9 = (int64_t *)(v1 + 10); // 0x9befb
    int64_t * v10 = (int64_t *)(v1 + (int64_t)*(int16_t *)(*v9 + 2));
    *v10 = *v10 + (*(char *)(v1 + 404) != 50 ? -8 : -2);
    int32_t v11 = *v3; // 0x9bff2
    *v3 = (int32_t)*(int16_t *)*v9 + 0x397fd954 + v11 | v11;
    *v9 = *v9 + 4;
    return v8 ^ v1 + 0x1d90b2af ^ *(int64_t *)v8;
}

// Address range: 0x9c093 - 0x9c09a
int64_t function_9c093(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x9c093
    int64_t v1; // 0x9c093
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 119); // 0x9c095
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x9c09b - 0x9c09c
int64_t function_9c09b(void) {
    // 0x9c09b
    int64_t result; // 0x9c09b
    return result;
}

// Address range: 0x9c10b - 0x9c3f7
int64_t function_9c10b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9c10b
    int64_t v1; // 0x9c10b
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x9c15b
    int32_t * v3 = (int32_t *)(v1 + 368); // 0x9c16e
    *v3 = *v2 & 0x2c46ace3 & *v3;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x9c1b3
    int64_t v5 = v1 + (int64_t)*(int16_t *)*v4; // 0x9c1c1
    int64_t * v6 = (int64_t *)v5;
    *v6 = *v6 + (*(char *)(v1 + 404) != 50 ? -8 : -2);
    int32_t v7 = *v2; // 0x9c1fe
    int32_t v8 = v7; // 0x9c215
    if ((v7 & 2) != 0) {
        // 0x9c21b
        v8 = v7 - 0x14b22a15;
        *v2 = v8;
    }
    // 0x9c235
    *v3 = *v3 | v8;
    *v4 = *v4 + 4;
    return (v5 | 4) + 192 & 240;
}

// Address range: 0x9c3f9 - 0x9c3fa
int64_t function_9c3f9(void) {
    // 0x9c3f9
    int64_t result; // 0x9c3f9
    return result;
}

// Address range: 0x9d694 - 0x9d964
int64_t function_9d694(void) {
    // 0x9d694
    int64_t v1; // 0x9d694
    int64_t result = v1 + 35; // 0x9d697
    int32_t * v2 = (int32_t *)result; // 0x9d69e
    int32_t * v3 = (int32_t *)(v1 + 368); // 0x9d6b2
    *v3 = (*v2 | *v3 | 0x19d0d4d) + 0x3c030b15;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x9d6f9
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)(*v4 + 2));
    *v5 = *v5 + (*(char *)(v1 + 404) != 50 ? -8 : -2);
    int32_t v6 = *v3 ^ *v2 + 0x7db9efb0; // 0x9d76b
    *v3 = v6;
    int32_t v7 = *v2 ^ v6; // 0x9d791
    *v3 = v7;
    int32_t v8 = v7 - *v2; // 0x9d7d1
    *v3 = v8;
    int32_t v9 = *v2 ^ v8; // 0x9d7eb
    *v3 = v9;
    *v2 = v9 & 0x54b71e92 & *v2;
    *v3 = (int32_t)*(int16_t *)*v4 + 0x3f05b2f0;
    *v4 = *v4 + 4;
    return result;
}

// Address range: 0x9e07d - 0x9e336
int64_t function_9e07d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9e07d
    int64_t v1; // 0x9e07d
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int64_t * v3 = (int64_t *)(v2 + 10); // 0x9e126
    uint64_t v4 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v3 + 1)); // 0x9e140
    char v5 = *(char *)(v2 + 404); // 0x9e153
    int64_t v6 = v4; // 0x9e15a
    int64_t v7; // 0x9e07d
    if (v5 == 98) {
        unsigned char v8 = (char)v2; // 0x9e161
        char v9 = v8 - 1; // 0x9e161
        unsigned char v10 = llvm_ctpop_i8(v9); // 0x9e161
        v6 = 128 * (int64_t)(v9 < 0) | 64 * (int64_t)(v9 == 0) | 2048 * (int64_t)((v8 & -v8) < 0) | 16 * (int64_t)(v8 % 16 > 16) | 4 * (int64_t)(v10 % 2 == 0) | (int64_t)(v4 % 2 != 0) | 256 * (int64_t)((v4 & 256) != 0) | 512 * (int64_t)((v4 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v4 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v4 & (int64_t)"le") != 0) | 2;
        v7 = v2 & -256 | (int64_t)v9;
    }
    int64_t v11 = v6;
    int64_t v12 = v11; // 0x9e173
    int64_t v13 = v7; // 0x9e173
    if (v5 == 50) {
        uint16_t v14 = (int16_t)v7; // 0x9e17a
        int16_t v15 = v14 - 1; // 0x9e17a
        unsigned char v16 = llvm_ctpop_i8((char)v15); // 0x9e17a
        v12 = 256 * (int64_t)((v11 & 256) != 0) | (int64_t)(v11 % 2 != 0) | 512 * (int64_t)((v11 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v11 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v11 & (int64_t)"le") != 0) | 128 * (int64_t)(v15 < 0) | 64 * (int64_t)(v15 == 0) | 2048 * (int64_t)((v14 & -v14) < 0) | 16 * (int64_t)(v14 % 16 > 16) | 4 * (int64_t)(v16 % 2 == 0) | 2;
        v13 = v7 & -0x10000 | (int64_t)v15;
    }
    int64_t v17 = v12;
    int64_t v18 = v17; // 0x9e18c
    int64_t v19 = v13; // 0x9e18c
    if (v5 == 80) {
        uint32_t v20 = (int32_t)v13; // 0x9e193
        int32_t v21 = v20 - 1; // 0x9e193
        unsigned char v22 = llvm_ctpop_i8((char)v21); // 0x9e193
        v18 = 256 * (int64_t)((v17 & 256) != 0) | (int64_t)(v17 % 2 != 0) | 512 * (int64_t)((v17 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v17 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v17 & (int64_t)"le") != 0) | 128 * (int64_t)(v21 < 0) | 64 * (int64_t)(v21 == 0) | 2048 * (int64_t)((v20 & -v20) < 0) | 16 * (int64_t)(v20 % 16 > 16) | 4 * (int64_t)(v22 % 2 == 0) | 2;
        v19 = v21;
    }
    int64_t v23 = v19;
    int64_t v24 = v18;
    int64_t v25 = v24; // 0x9e1a0
    int64_t v26 = v23; // 0x9e1a0
    if (v5 == 58) {
        // 0x9e1a6
        v26 = v23 - 1;
        unsigned char v27 = llvm_ctpop_i8((char)v26); // 0x9e1a7
        v25 = 256 * (int64_t)((v24 & 256) != 0) | (int64_t)(v24 % 2 != 0) | 512 * (int64_t)((v24 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v24 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v24 & (int64_t)"le") != 0) | 128 * (int64_t)(v26 < 0) | 64 * (int64_t)(v26 == 0) | 2048 * (int64_t)((v23 & -v23) < 0) | 16 * (int64_t)(v23 % 16 > 16) | 4 * (int64_t)(v27 % 2 == 0) | 2;
    }
    int64_t * v28 = (int64_t *)(v2 + 113); // 0x9e1d3
    *v28 = v26 ^ 0x4f7efe17;
    *v28 = v26 + 0x1a44e4ef;
    if (*(char *)*v3 != 0) {
        uint16_t v29 = *(int16_t *)(*v3 + 1); // 0x9e25f
        *(int64_t *)(v2 + (int64_t)v29) = v25;
    }
    // 0x9e26a
    *(int32_t *)(v2 + 368) = (int32_t)*(int16_t *)(*v3 + 3);
    *v3 = *v3 + 5;
    return v1 & 8;
}

// Address range: 0x9e338 - 0x9e33d
int64_t function_9e338(void) {
    // 0x9e338
    return function_cb6486();
}

// Address range: 0xa037e - 0xa0631
int64_t function_a037e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa037e
    int64_t v1; // 0xa037e
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xa03f1
    int32_t * v3 = (int32_t *)(v1 + 368); // 0xa0408
    *v3 = *v2 + 0x65189f12 + *v3;
    int32_t v4 = *v2 + 0x15b2dfa5; // 0xa0434
    *v2 = v4;
    *v3 = *v3 + v4;
    int64_t v5 = *(int64_t *)(v1 + 113) - 0x1a44e4ef; // 0xa0470
    int64_t v6 = *(int64_t *)(v1 + 129); // 0xa048b
    int64_t v7 = v6 + 0x1a44e4ef; // 0xa048e
    char v8 = *(char *)(v1 + 404); // 0xa04a2
    if (v8 == 98) {
        // 0xa04af
        *(char *)v7 = (char)v5;
    }
    if (v8 == 50) {
        // 0xa04bc
        *(int16_t *)v7 = (int16_t)v5;
    }
    int64_t v9 = v7; // 0xa04c4
    if (v8 == 80) {
        // 0xa04ca
        *(int32_t *)v7 = (int32_t)v5;
        v9 = v7;
        if (*(char *)(v1 + 367) != 0) {
            int64_t v10 = v6 + 0x1a44e4f3; // 0xa04e0
            *(int32_t *)v10 = 0;
            v9 = v10;
        }
    }
    if (v8 == 58) {
        // 0xa04f7
        *(int64_t *)v9 = v5;
    }
    int64_t * v11 = (int64_t *)(v1 + 10); // 0xa0564
    int32_t v12 = *v3; // 0xa0596
    *v3 = v12 - ((int32_t)*(int16_t *)*v11 - v12 ^ 0x3fe99379);
    *v11 = *v11 + 2;
    return 0;
}

// Address range: 0xa0633 - 0xa0635
int64_t function_a0633(void) {
    // 0xa0633
    int64_t result; // 0xa0633
    return result;
}

// Address range: 0xa0639 - 0xa063a
int64_t function_a0639(void) {
    // 0xa0639
    int64_t result; // 0xa0639
    return result;
}

// Address range: 0xa4b11 - 0xa4df7
int64_t function_a4b11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa4b11
    int64_t v1; // 0xa4b11
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int32_t * v4 = (int32_t *)(v3 + 368); // 0xa4b33
    *v4 = *v4 ^ *(int32_t *)(v3 + 35);
    int64_t * v5 = (int64_t *)(v3 + 96); // 0xa4b36
    *v5 = *v5 + 0x7ae145d4;
    *(int64_t *)v3 = v3 ^ 0x1807fa79;
    uint64_t v6 = *v5 - 0x15a44da0; // 0xa4bd5
    char v7 = *(char *)(v3 + 225); // 0xa4bf3
    int64_t v8 = v7 != 50 ? v7 != 98 ? v3 ^ 0x15a44da0 : v6 % 256 : v6 % 0x10000;
    int64_t * v9 = (int64_t *)(v3 + 113); // 0xa4c45
    *v9 = v8 ^ 0x239b76ce;
    int64_t v10 = v6 + v2; // 0xa4c48
    bool v11; // 0xa4b11
    int64_t result = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v10 < v6) | 64 * (int64_t)(v10 == 0) | 128 * (int64_t)(v10 < 0) | 16 * (int64_t)(v6 % 16 + v2 % 16 > 15) | 2048 * (int64_t)(((v10 ^ v6) & (v10 ^ v2)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v10) % 2 == 0) | 2; // 0xa4c4b
    int64_t * v12 = (int64_t *)(v3 + 10); // 0xa4cc4
    *v9 = v8 + 0x1a44e4ef;
    if (*(char *)*v12 != 0) {
        // 0xa4cfe
        *(int64_t *)(v3 + (int64_t)*(int16_t *)(*v12 + 3)) = result;
    }
    // 0xa4d42
    *v12 = *v12 + 5;
    return result;
}

// Address range: 0xa9cf7 - 0xa9ffa
int64_t function_a9cf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xa9cf7
    int64_t v1; // 0xa9cf7
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xa9d46
    *v3 = *v3 + 0x653cf834;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x9fd9315;
    int64_t * v4 = (int64_t *)(v2 + 10); // 0xa9d96
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v4 + 1)); // 0xa9db1
    int64_t v6 = v2 + 0x9fd9315; // 0xa9ddd
    uint64_t v7 = *v3; // 0xa9df7
    char v8 = *(char *)(v2 + 404); // 0xa9e24
    int64_t v9 = v5; // 0xa9e2b
    int64_t v10 = v6; // 0xa9e2b
    if (v8 == 98) {
        unsigned char v11 = (char)v7 % 32; // 0xa9e40
        bool v12 = (v5 & (int64_t)L"\n2") != 0; // 0xa9e40
        v10 = v6;
        bool v13 = v5 % 2 != 0; // 0xa9e40
        if (v11 != 0) {
            unsigned char v14 = (char)v6; // 0xa9e40
            unsigned char v15 = v14 << 8 - v11 | v14 >> v11; // 0xa9e40
            char v16 = v15 / 128; // 0xa9e40
            v12 = v11 == 1 ? v16 != v15 / 64 % 2 : (v5 & (int64_t)L"\n2") != 0;
            v10 = v6 & -256 | (int64_t)v15;
            v13 = v16 != 0;
        }
        v9 = 16 * (int64_t)((v5 & 16) != 0) | 4 * (int64_t)((v5 & 4) != 0) | 64 * (int64_t)((v5 & 64) != 0) | 128 * (int64_t)((char)v5 < 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | 2048 * (int64_t)v12 | (int64_t)v13 | 2;
    }
    int64_t v17 = v9;
    int64_t v18 = v17; // 0xa9e48
    int64_t v19 = v10; // 0xa9e48
    if (v8 == 50) {
        uint16_t v20 = (int16_t)v7 % 32; // 0xa9e52
        bool v21 = (v17 & (int64_t)L"\n2") != 0; // 0xa9e52
        v19 = v10;
        bool v22 = v17 % 2 != 0; // 0xa9e52
        if (v20 != 0) {
            uint16_t v23 = (int16_t)v10; // 0xa9e52
            uint16_t v24 = v23 >> v20 | v23 << 16 - v20; // 0xa9e52
            int16_t v25 = v24 / 0x8000; // 0xa9e52
            v21 = v20 == 1 ? v25 != v24 / 0x4000 % 2 : (v17 & (int64_t)L"\n2") != 0;
            v19 = v10 & -0x10000 | (int64_t)v24;
            v22 = v25 != 0;
        }
        v18 = 16 * (int64_t)((v17 & 16) != 0) | 4 * (int64_t)((v17 & 4) != 0) | 64 * (int64_t)((v17 & 64) != 0) | 128 * (int64_t)((char)v17 < 0) | 256 * (int64_t)((v17 & 256) != 0) | 512 * (int64_t)((v17 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v17 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v17 & (int64_t)"le") != 0) | 2048 * (int64_t)v21 | (int64_t)v22 | 2;
    }
    int64_t v26 = v18;
    int64_t v27 = v26; // 0xa9e62
    int64_t v28 = v19; // 0xa9e62
    if (v8 == 80) {
        uint32_t v29 = (int32_t)v7 % 32; // 0xa9e73
        bool v30 = (v26 & (int64_t)L"\n2") != 0; // 0xa9e73
        v28 = v19;
        bool v31 = v26 % 2 != 0; // 0xa9e73
        if (v29 != 0) {
            uint32_t v32 = (int32_t)v19; // 0xa9e73
            int32_t v33 = v32 >> v29 | v32 << 32 - v29; // 0xa9e73
            v30 = v29 == 1 ? v33 / 0x40000000 % 2 != (int32_t)(v33 < 0) : (v26 & (int64_t)L"\n2") != 0;
            v28 = v33;
            v31 = v33 < 0;
        }
        v27 = 16 * (int64_t)((v26 & 16) != 0) | 4 * (int64_t)((v26 & 4) != 0) | 64 * (int64_t)((v26 & 64) != 0) | 128 * (int64_t)((char)v26 < 0) | 256 * (int64_t)((v26 & 256) != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | 2048 * (int64_t)v30 | (int64_t)v31 | 2;
    }
    int64_t v34 = v28;
    int64_t v35 = v27;
    int64_t v36 = v35; // 0xa9e7e
    uint64_t v37 = v34; // 0xa9e7e
    if (v8 == 58) {
        uint64_t v38 = v7 % 64; // 0xa9e8f
        bool v39 = (v35 & (int64_t)L"\n2") != 0; // 0xa9e8f
        v37 = v34;
        int64_t v40 = v35 % 2; // 0xa9e8f
        if (v38 != 0) {
            v37 = v34 >> v38 | v34 << 64 - v38;
            v40 = v37 / 0x8000000000000000;
            v39 = v38 == 1 ? v40 != v37 / 0x4000000000000000 % 2 : (v35 & (int64_t)L"\n2") != 0;
        }
        v36 = 16 * (int64_t)((v35 & 16) != 0) | 4 * (int64_t)((v35 & 4) != 0) | 64 * (int64_t)((v35 & 64) != 0) | 128 * (int64_t)((char)v35 < 0) | 256 * (int64_t)((v35 & 256) != 0) | 512 * (int64_t)((v35 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v35 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v35 & (int64_t)"le") != 0) | 2048 * (int64_t)v39 | (int64_t)(v40 != 0) | 2;
    }
    int64_t * v41 = (int64_t *)(v2 + 113); // 0xa9eaa
    *v41 = v37;
    int64_t v42 = *v4; // 0xa9ec1
    int64_t v43 = v37; // 0xa9edd
    if (*(char *)v42 != 0) {
        // 0xa9ee3
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v42 + 1)) = v36;
        v43 = *v41;
    }
    // 0xa9f09
    *v41 = v43 + 0x1a44e4ef;
    int32_t * v44 = (int32_t *)(v2 + 368); // 0xa9f93
    *v44 = 0x7bec2197 - (int32_t)*(int16_t *)(*v4 + 3) + 2 * *v44;
    *v4 = *v4 + 5;
    return 0;
}

// Address range: 0xa9ffc - 0xa9fff
int64_t function_a9ffc(int64_t a1) {
    // 0xa9ffc
    int64_t result; // 0xa9ffc
    return result;
}

// Address range: 0xaa000 - 0xaa006
int64_t function_aa000(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xaa000
    int64_t result; // 0xaa000
    char * v1 = (char *)(result - 127); // 0xaa000
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0xaa87d - 0xaab6a
int64_t function_aa87d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xaa87d
    int64_t v1; // 0xaa87d
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xaa887
    int64_t v4 = *v3 + 0x653cf834; // 0xaa88b
    int64_t v5 = v4 ^ 0x39ed5bae; // 0xaa891
    *v3 = v5;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x39ed5bae;
    int64_t v6 = v2 + 0x39ed5bae; // 0xaa918
    int64_t v7 = *v3 ^ 0x39ed5bae; // 0xaa92c
    char v8 = *(char *)(v2 + 404); // 0xaa94e
    int64_t v9; // 0xaa87d
    bool v10; // 0xaa87d
    if (v8 == 98) {
        char v11 = v7 & v6; // 0xaa95a
        int64_t v12 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v11 == 0) | 128 * (int64_t)(v11 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v11) % 2 == 0) | 2; // bp-8, 0xaa95d
        v9 = (int64_t)&v12;
    }
    int64_t v13 = v9; // 0xaa96f
    if (v8 == 50) {
        int64_t v14 = v7 & v6;
        int16_t v15 = v14; // 0xaa975
        int64_t v16 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v14) % 2 == 0) | 2; // bp-16, 0xaa979
        v13 = (int64_t)&v16;
    }
    int64_t v17 = v13; // 0xaa97d
    if (v8 == 80) {
        int64_t v18 = v7 & v6;
        int32_t v19 = v18; // 0xaa983
        unsigned char v20 = llvm_ctpop_i8((char)v18); // 0xaa983
        v17 = v13 - 8;
        *(int64_t *)v17 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v19 == 0) | 128 * (int64_t)(v19 < 0) | 4 * (int64_t)(v20 % 2 == 0) | 2;
    }
    // 0xaa98a
    int64_t * v21; // 0xaa87d
    if (v8 != 58) {
        // 0xaa98a
        v21 = (int64_t *)v17;
    } else {
        int64_t v22 = v7 & v6; // 0xaa993
        unsigned char v23 = llvm_ctpop_i8((char)v22); // 0xaa993
        int64_t * v24 = (int64_t *)(v17 - 8);
        *v24 = 0x4000 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 64 * (int64_t)(v22 == 0) | 128 * (int64_t)(v22 < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
        v21 = v24;
    }
    int64_t * v25 = (int64_t *)(v2 + 113); // 0xaa9c0
    *v25 = v2 + 0x8540f30;
    int64_t * v26 = (int64_t *)(v2 + 10); // 0xaaa18
    *v25 = v2 + 0x5432409d;
    int64_t result = (v5 - 8 | v2) - (v4 ^ 0x39ed5bbc); // 0xaaa4a
    if (*(char *)(*v26 + 2) != 0) {
        // 0xaaa50
        result = *v26;
        *(int64_t *)(v2 + (int64_t)*(int16_t *)result) = *v21;
    }
    int32_t * v27 = (int32_t *)(v2 + 368); // 0xaab08
    int32_t v28 = *v27; // 0xaab08
    *v27 = (int32_t)*(int16_t *)(*v26 + 3) - v28 ^ 0x5c05e9b5 | v28;
    *v26 = *v26 + 5;
    return result;
}

// Address range: 0xab141 - 0xab427
int64_t function_ab141(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xab141
    int64_t v1; // 0xab141
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xab1a8
    *v3 = *v3 + 0x653cf834;
    *(int64_t *)v2 = v2 ^ 0x15218568;
    int64_t v4 = v2 ^ 0x188232b1; // 0xab227
    int64_t v5 = *v3; // 0xab246
    char v6 = *(char *)(v2 + 404); // 0xab254
    int64_t v7; // 0xab141
    bool v8; // 0xab141
    if (v6 == 98) {
        char v9 = v5 & v4; // 0xab260
        int64_t v10 = 0x4000 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 64 * (int64_t)(v9 == 0) | 128 * (int64_t)(v9 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v9) % 2 == 0) | 2; // bp-8, 0xab263
        v7 = (int64_t)&v10;
    }
    int64_t v11 = v7; // 0xab26a
    if (v6 == 50) {
        int64_t v12 = v5 & v4;
        int16_t v13 = v12; // 0xab270
        int64_t v14 = 0x4000 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v12) % 2 == 0) | 2; // bp-16, 0xab273
        v11 = (int64_t)&v14;
    }
    int64_t v15 = v11; // 0xab27d
    if (v6 == 80) {
        int64_t v16 = v5 & v4;
        int32_t v17 = v16; // 0xab283
        unsigned char v18 = llvm_ctpop_i8((char)v16); // 0xab283
        v15 = v11 - 8;
        *(int64_t *)v15 = 0x4000 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 4 * (int64_t)(v18 % 2 == 0) | 2;
    }
    int64_t v19 = v15; // 0xab28c
    if (v6 == 58) {
        int64_t v20 = v5 & v4; // 0xab292
        unsigned char v21 = llvm_ctpop_i8((char)v20); // 0xab292
        v19 = v15 - 8;
        *(int64_t *)v19 = 0x4000 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 64 * (int64_t)(v20 == 0) | 128 * (int64_t)(v20 < 0) | 4 * (int64_t)(v21 % 2 == 0) | 2;
    }
    int64_t v22 = v2 + 113; // 0xab2a9
    int64_t * v23 = (int64_t *)v22; // 0xab2b0
    *v23 = v4;
    int64_t * v24 = (int64_t *)(v2 + 10); // 0xab2cf
    int64_t v25 = *v24; // 0xab2cf
    int64_t v26 = v4; // 0xab2e4
    int64_t v27 = v22; // 0xab2e4
    if (*(char *)(v25 + 4) != 0) {
        // 0xab2ea
        v27 = v25 + 2;
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v27) = *(int64_t *)v19;
        v26 = *v23;
    }
    int64_t v28 = v2 + 129 ^ (int64_t)&g4; // 0xab17f
    *v23 = v26 + 0x1a44e4ef;
    int32_t * v29 = (int32_t *)(v2 + 368); // 0xab3c2
    int32_t v30 = *v29; // 0xab3c2
    *v29 = v30 ^ 0x3a835417 ^ v30 + (int32_t)*(int16_t *)*v24;
    *v24 = *v24 + 5;
    return (int64_t)&g1 - 114 - v2 - ((v2 ^ 8 ^ v28 - (int64_t)&g2 + (v28 ^ v2) & v2) + (int64_t)&g4 + 1 + v27 & a6);
}

// Address range: 0xab42f - 0xab430
int64_t function_ab42f(void) {
    // 0xab42f
    int64_t result; // 0xab42f
    return result;
}

// Address range: 0xb3ff4 - 0xb42e2
int64_t function_b3ff4(int64_t a1) {
    // 0xb3ff4
    int64_t v1; // 0xb3ff4
    int64_t v2 = v1;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0xb402c
    *v3 = *v3 ^ *(int32_t *)(v2 + 35);
    int64_t * v4 = (int64_t *)(v2 + 10); // 0xb4069
    uint64_t v5 = *(int64_t *)(v2 + (int64_t)*(int16_t *)*v4); // 0xb40a2
    char v6 = *(char *)(v2 + 404); // 0xb40b9
    int64_t v7 = v5; // 0xb40c0
    int64_t v8; // 0xb3ff4
    if (v6 == 98) {
        unsigned char v9 = (char)v2; // 0xb40ce
        char v10 = v9 + 1; // 0xb40ce
        unsigned char v11 = llvm_ctpop_i8(v10); // 0xb40ce
        v7 = 64 * (int64_t)(v10 == 0) | 16 * (int64_t)(v9 % 16 == 15) | 128 * (int64_t)(v10 < 0) | 2048 * (int64_t)((v10 & (v9 ^ -128)) < 0) | 4 * (int64_t)(v11 % 2 == 0) | (int64_t)(v5 % 2 != 0) | 256 * (int64_t)((v5 & 256) != 0) | 512 * (int64_t)((v5 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v5 & (int64_t)"le") != 0) | 2;
        v8 = v2 & -256 | (int64_t)v10;
    }
    int64_t v12 = v7;
    int64_t v13 = v12; // 0xb40e0
    int64_t v14 = v8; // 0xb40e0
    if (v6 == 50) {
        uint16_t v15 = (int16_t)v8; // 0xb40f1
        int16_t v16 = v15 + 1; // 0xb40f1
        unsigned char v17 = llvm_ctpop_i8((char)v16); // 0xb40f1
        v13 = 256 * (int64_t)((v12 & 256) != 0) | (int64_t)(v12 % 2 != 0) | 512 * (int64_t)((v12 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v12 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v12 & (int64_t)"le") != 0) | 64 * (int64_t)(v16 == 0) | 16 * (int64_t)(v15 % 16 == 15) | 128 * (int64_t)(v16 < 0) | 2048 * (int64_t)((v16 & (v15 ^ -0x8000)) < 0) | 4 * (int64_t)(v17 % 2 == 0) | 2;
        v14 = v8 & -0x10000 | (int64_t)v16;
    }
    int64_t v18 = v13;
    int64_t v19 = v18; // 0xb40fd
    int64_t v20 = v14; // 0xb40fd
    if (v6 == 80) {
        uint32_t v21 = (int32_t)v14; // 0xb4104
        int32_t v22 = v21 + 1; // 0xb4104
        unsigned char v23 = llvm_ctpop_i8((char)v22); // 0xb4104
        v19 = 256 * (int64_t)((v18 & 256) != 0) | (int64_t)(v18 % 2 != 0) | 512 * (int64_t)((v18 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v18 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v18 & (int64_t)"le") != 0) | 64 * (int64_t)(v22 == 0) | 16 * (int64_t)(v21 % 16 == 15) | 128 * (int64_t)(v22 < 0) | 2048 * (int64_t)((v22 & (v21 ^ -0x80000000)) < 0) | 4 * (int64_t)(v23 % 2 == 0) | 2;
        v20 = v22;
    }
    int64_t v24 = v20;
    int64_t v25 = v19;
    int64_t v26 = v25; // 0xb410f
    int64_t v27 = v24; // 0xb410f
    if (v6 == 58) {
        // 0xb4115
        v27 = v24 + 1;
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0xb4119
        v26 = 256 * (int64_t)((v25 & 256) != 0) | (int64_t)(v25 % 2 != 0) | 512 * (int64_t)((v25 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v25 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v25 & (int64_t)"le") != 0) | 64 * (int64_t)(v27 == 0) | 16 * (int64_t)(v24 % 16 == 15) | 128 * (int64_t)(v27 < 0) | 2048 * (int64_t)((v27 & (v24 ^ -0x8000000000000000)) < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
    }
    int64_t * v29 = (int64_t *)(v2 + 113); // 0xb413e
    *v29 = v27;
    int64_t v30 = *v4; // 0xb4180
    int64_t v31 = v27; // 0xb4198
    if (*(char *)(v30 + 4) != 0) {
        // 0xb419e
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v30) = v26;
        v31 = *v29;
    }
    // 0xb41e9
    *v29 = v31 + 0x1a44e4ef;
    int64_t v32 = *(int64_t *)(v2 + 271); // 0xb4263
    int32_t v33 = (int32_t)*(int16_t *)(*v4 + 2); // 0xb429c
    *v3 = v33;
    *v4 = *v4 + 5;
    return ((int64_t)(v33 - *v3) & (int64_t)&g4) + v32;
}

// Address range: 0xb4c00 - 0xb4edd
int64_t function_b4c00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb4c00
    int64_t v1; // 0xb4c00
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xb4c0a
    int32_t v4 = *v3 & 0x3acb356d; // 0xb4c0a
    *v3 = v4;
    *(int64_t *)v2 = v2 ^ 0x760f7d12;
    int64_t result = v2 + 368; // 0xb4c4a
    int32_t * v5 = (int32_t *)result; // 0xb4c51
    *v5 = *v5 | v4;
    int64_t v6 = v2 ^ 0x7baccacb; // 0xb4c61
    int64_t * v7 = (int64_t *)(v2 + 10); // 0xb4c89
    uint64_t v8 = *(int64_t *)(v2 + (int64_t)*(int16_t *)*v7); // 0xb4ca1
    char v9 = *(char *)(v2 + 404); // 0xb4cbc
    int64_t v10 = v8; // 0xb4cc0
    int64_t v11 = v6; // 0xb4cc0
    if (v9 == 98) {
        unsigned char v12 = (char)v6; // 0xb4cc7
        char v13 = v12 - 1; // 0xb4cc7
        unsigned char v14 = llvm_ctpop_i8(v13); // 0xb4cc7
        v10 = 128 * (int64_t)(v13 < 0) | 64 * (int64_t)(v13 == 0) | 2048 * (int64_t)((v12 & -v12) < 0) | 16 * (int64_t)(v12 % 16 > 16) | 4 * (int64_t)(v14 % 2 == 0) | (int64_t)(v8 % 2 != 0) | 256 * (int64_t)((v8 & 256) != 0) | 512 * (int64_t)((v8 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v8 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v8 & (int64_t)"le") != 0) | 2;
        v11 = v6 & -256 | (int64_t)v13;
    }
    int64_t v15 = v10;
    int64_t v16 = v15; // 0xb4cd4
    int64_t v17 = v11; // 0xb4cd4
    if (v9 == 50) {
        uint16_t v18 = (int16_t)v11; // 0xb4cde
        int16_t v19 = v18 - 1; // 0xb4cde
        unsigned char v20 = llvm_ctpop_i8((char)v19); // 0xb4cde
        v16 = 256 * (int64_t)((v15 & 256) != 0) | (int64_t)(v15 % 2 != 0) | 512 * (int64_t)((v15 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v15 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v15 & (int64_t)"le") != 0) | 128 * (int64_t)(v19 < 0) | 64 * (int64_t)(v19 == 0) | 2048 * (int64_t)((v18 & -v18) < 0) | 16 * (int64_t)(v18 % 16 > 16) | 4 * (int64_t)(v20 % 2 == 0) | 2;
        v17 = v11 & -0x10000 | (int64_t)v19;
    }
    int64_t v21 = v16;
    int64_t v22 = v21; // 0xb4ce5
    int64_t v23 = v17; // 0xb4ce5
    if (v9 == 80) {
        uint32_t v24 = (int32_t)v17; // 0xb4cf2
        int32_t v25 = v24 - 1; // 0xb4cf2
        unsigned char v26 = llvm_ctpop_i8((char)v25); // 0xb4cf2
        v22 = 256 * (int64_t)((v21 & 256) != 0) | (int64_t)(v21 % 2 != 0) | 512 * (int64_t)((v21 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v21 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v21 & (int64_t)"le") != 0) | 128 * (int64_t)(v25 < 0) | 64 * (int64_t)(v25 == 0) | 2048 * (int64_t)((v24 & -v24) < 0) | 16 * (int64_t)(v24 % 16 > 16) | 4 * (int64_t)(v26 % 2 == 0) | 2;
        v23 = v25;
    }
    int64_t v27 = v23;
    int64_t v28 = v22;
    int64_t v29 = v28; // 0xb4cfb
    int64_t v30 = v27; // 0xb4cfb
    if (v9 == 58) {
        // 0xb4d01
        v30 = v27 - 1;
        unsigned char v31 = llvm_ctpop_i8((char)v30); // 0xb4d08
        v29 = 256 * (int64_t)((v28 & 256) != 0) | (int64_t)(v28 % 2 != 0) | 512 * (int64_t)((v28 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v28 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v28 & (int64_t)"le") != 0) | 128 * (int64_t)(v30 < 0) | 64 * (int64_t)(v30 == 0) | 2048 * (int64_t)((v27 & -v27) < 0) | 16 * (int64_t)(v27 % 16 > 16) | 4 * (int64_t)(v31 % 2 == 0) | 2;
    }
    int64_t * v32 = (int64_t *)(v2 + 113); // 0xb4d2c
    *v32 = v30 + 0x8ac1bad;
    int64_t v33 = *v7; // 0xb4d65
    if (*(char *)(v33 + 4) != 0) {
        // 0xb4da3
        *(int64_t *)(v2 + (int64_t)*(int16_t *)v33) = v29;
    }
    // 0xb4e00
    *v32 = v30 + 0x1a44e4ef;
    int32_t v34 = *v5; // 0xb4e6e
    *v5 = (v34 + (int32_t)*(int16_t *)(*v7 + 2) ^ 0x29d9517b) & v34;
    *v7 = *v7 + 5;
    return result;
}

// Address range: 0xb78b0 - 0xb7bba
int64_t function_b78b0(int64_t a1, int64_t a2, int16_t a3, int64_t a4) {
    // 0xb78b0
    int64_t v1; // 0xb78b0
    int32_t * v2 = (int32_t *)(v1 + 368); // 0xb78c7
    int32_t * v3 = (int32_t *)(v1 + 35); // 0xb78d4
    int32_t v4 = *v3 & *v2; // 0xb78d4
    *v3 = v4;
    if ((v4 & 2) != 0) {
        // 0xb792a
        *v3 = (v4 & 0x14763e0c) + 0x47fe8c0b;
    }
    int64_t v5 = *(int64_t *)(v1 + 129) + 0x1a44e4ef; // 0xb794c
    int64_t * v6 = (int64_t *)(v1 + 10); // 0xb7964
    int64_t v7 = v1 + (int64_t)*(int16_t *)(*v6 + 2); // 0xb7972
    int64_t v8 = v7 != v5 ? v7 : 0;
    if (*(char *)(v1 + 404) != 50) {
        // 0xb79ae
        *(int64_t *)v5 = a4;
        if (v8 != 0) {
            int64_t * v9 = (int64_t *)v8; // 0xb79bd
            *v9 = *v9 + 8;
        }
    } else {
        // 0xb798e
        *(int16_t *)v5 = a3;
        if (v8 != 0) {
            int64_t * v10 = (int64_t *)v8; // 0xb799e
            *v10 = *v10 + 2;
        }
    }
    int64_t v11 = *(int64_t *)(v1 + 271); // 0xb7aaf
    int32_t v12 = *v2; // 0xb7b0d
    uint32_t v13 = v12 + (int32_t)*(int16_t *)*v6; // 0xb7b0d
    *v2 = v13 & v12;
    *v6 = *v6 + 4;
    return *(int64_t *)(((int64_t)v13 & (int64_t)&g4) + v11);
}

// Address range: 0xbc06d - 0xbc320
int64_t function_bc06d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xbc06d
    int64_t v1; // 0xbc06d
    int64_t v2 = v1;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x7a3445e0;
    int64_t v3 = v2 + 0x7a3445e0; // 0xbc0ed
    int32_t * v4 = (int32_t *)(v2 + 368); // 0xbc108
    *v4 = *v4 & *(int32_t *)(v2 + 35);
    int64_t * v5 = (int64_t *)(v2 + 10); // 0xbc11c
    uint64_t v6 = *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v5 + 3)); // 0xbc12d
    char v7 = *(char *)(v2 + 404); // 0xbc13a
    int64_t v8 = v6; // 0xbc141
    int64_t v9 = v3; // 0xbc141
    if (v7 == 98) {
        unsigned char v10 = (char)v3; // 0xbc148
        char v11 = v10 - 1; // 0xbc148
        unsigned char v12 = llvm_ctpop_i8(v11); // 0xbc148
        v8 = 128 * (int64_t)(v11 < 0) | 64 * (int64_t)(v11 == 0) | 2048 * (int64_t)((v10 & -v10) < 0) | 16 * (int64_t)(v10 % 16 > 16) | 4 * (int64_t)(v12 % 2 == 0) | (int64_t)(v6 % 2 != 0) | 256 * (int64_t)((v6 & 256) != 0) | 512 * (int64_t)((v6 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v6 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v6 & (int64_t)"le") != 0) | 2;
        v9 = v3 & -256 | (int64_t)v11;
    }
    int64_t v13 = v8;
    int64_t v14 = v13; // 0xbc150
    int64_t v15 = v9; // 0xbc150
    if (v7 == 50) {
        uint16_t v16 = (int16_t)v9; // 0xbc157
        int16_t v17 = v16 - 1; // 0xbc157
        unsigned char v18 = llvm_ctpop_i8((char)v17); // 0xbc157
        v14 = 256 * (int64_t)((v13 & 256) != 0) | (int64_t)(v13 % 2 != 0) | 512 * (int64_t)((v13 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v13 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v13 & (int64_t)"le") != 0) | 128 * (int64_t)(v17 < 0) | 64 * (int64_t)(v17 == 0) | 2048 * (int64_t)((v16 & -v16) < 0) | 16 * (int64_t)(v16 % 16 > 16) | 4 * (int64_t)(v18 % 2 == 0) | 2;
        v15 = v9 & -0x10000 | (int64_t)v17;
    }
    int64_t v19 = v14;
    int64_t v20 = v19; // 0xbc160
    int64_t v21 = v15; // 0xbc160
    if (v7 == 80) {
        uint32_t v22 = (int32_t)v15; // 0xbc167
        int32_t v23 = v22 - 1; // 0xbc167
        unsigned char v24 = llvm_ctpop_i8((char)v23); // 0xbc167
        v20 = 256 * (int64_t)((v19 & 256) != 0) | (int64_t)(v19 % 2 != 0) | 512 * (int64_t)((v19 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v19 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v19 & (int64_t)"le") != 0) | 128 * (int64_t)(v23 < 0) | 64 * (int64_t)(v23 == 0) | 2048 * (int64_t)((v22 & -v22) < 0) | 16 * (int64_t)(v22 % 16 > 16) | 4 * (int64_t)(v24 % 2 == 0) | 2;
        v21 = v23;
    }
    int64_t v25 = v21;
    int64_t v26 = v20;
    int64_t v27 = v26; // 0xbc16f
    int64_t v28 = v25; // 0xbc16f
    if (v7 == 58) {
        // 0xbc175
        v28 = v25 - 1;
        unsigned char v29 = llvm_ctpop_i8((char)v28); // 0xbc176
        v27 = 256 * (int64_t)((v26 & 256) != 0) | (int64_t)(v26 % 2 != 0) | 512 * (int64_t)((v26 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v26 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((v26 & (int64_t)"le") != 0) | 128 * (int64_t)(v28 < 0) | 64 * (int64_t)(v28 == 0) | 2048 * (int64_t)((v25 & -v25) < 0) | 16 * (int64_t)(v25 % 16 > 16) | 4 * (int64_t)(v29 % 2 == 0) | 2;
    }
    int64_t result = v2 + 113; // 0xbc17d
    int64_t * v30 = (int64_t *)result; // 0xbc183
    *v30 = v28;
    int64_t v31 = *v5; // 0xbc1bc
    if (*(char *)v31 != 0) {
        // 0xbc208
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(v31 + 3)) = v27;
    }
    // 0xbc26b
    *v30 = v28 + 0x1a44e4ef;
    *v4 = ((int32_t)*(int16_t *)(*v5 + 1) ^ 0x50d4eebe) + *v4;
    *v5 = *v5 + 5;
    return result;
}

// Address range: 0xbc325 - 0xbc327
int64_t function_bc325(void) {
    // 0xbc325
    int64_t result; // 0xbc325
    return result;
}

// Address range: 0xbc328 - 0xbc329
int64_t function_bc328(void) {
    // 0xbc328
    int64_t result; // 0xbc328
    return result;
}

// Address range: 0xc1ec4 - 0xc21c3
int64_t function_c1ec4(int64_t a1) {
    // 0xc1ec4
    int64_t v1; // 0xc1ec4
    int32_t * v2 = (int32_t *)(v1 + 368); // 0xc1ece
    int32_t v3 = *v2; // 0xc1ece
    *v2 = v3 & 0x31863366;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0xc1f00
    int32_t v5 = *v4 | v3 & 0x31820360; // 0xc1f00
    *v4 = v5;
    *v4 = v5 + 0x7cfd5a5b - *v2;
    int64_t v6 = *(int64_t *)(v1 + 113) - 0x1a44e4ef; // 0xc1f90
    int64_t v7 = *(int64_t *)(v1 + 129); // 0xc1fa1
    int64_t v8 = v7 + 0x1a44e4ef; // 0xc1fa4
    char v9 = *(char *)(v1 + 404); // 0xc1fb5
    if (v9 == 98) {
        // 0xc1fc0
        *(char *)v8 = (char)v6;
    }
    if (v9 == 50) {
        // 0xc1fcc
        *(int16_t *)v8 = (int16_t)v6;
    }
    int64_t v10 = v8; // 0xc1fd3
    if (v9 == 80) {
        // 0xc1fd9
        *(int32_t *)v8 = (int32_t)v6;
        v10 = v8;
        if (*(char *)(v1 + 367) != 0) {
            int64_t v11 = v7 + 0x1a44e4f3; // 0xc1fef
            *(int32_t *)v11 = 0;
            v10 = v11;
        }
    }
    if (v9 == 58) {
        // 0xc2006
        *(int64_t *)v10 = v6;
    }
    // 0xc2009
    *v4 = *v4 | *v2;
    int64_t * v12 = (int64_t *)(v1 + 10); // 0xc20b1
    int64_t v13 = *(int64_t *)(v1 + 271); // 0xc20cf
    int32_t v14 = *v2; // 0xc2115
    uint32_t v15 = (int32_t)*(int16_t *)*v12 + 0x331dfc06 + v14; // 0xc212f
    *v2 = v15 | v14;
    *v12 = *v12 + 2;
    return (v13 ^ -(int64_t)L"\n2" | 32) + v13 + (((int64_t)v15 & (int64_t)&g4) + v13 | 18);
}

// Address range: 0xc3406 - 0xc3718
int64_t function_c3406(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xc3406
    int64_t v1; // 0xc3406
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xc344e
    int64_t v4 = v2 + 368; // 0xc347e
    int32_t * v5 = (int32_t *)v4; // 0xc3488
    *v5 = *v5 & (*v3 | 0x16bae797);
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) - 0x47006b12;
    uint64_t v6 = -0x47006b13 - v2; // 0xc34fe
    *(int64_t *)(v2 + 113) = v6 + 0x1a44e4ef;
    int64_t * v7 = (int64_t *)(v2 + 10); // 0xc3592
    int64_t v8 = *v7; // 0xc3592
    if (*(char *)(v8 + 4) != 0) {
        uint64_t v9 = (v4 | (int64_t)&g3) & 128 | (int64_t)&g4; // 0xc34eb
        int64_t v10 = v6 - v9; // 0xc3501
        unsigned char v11 = llvm_ctpop_i8((char)v10); // 0xc3501
        uint16_t v12 = *(int16_t *)v8; // 0xc35f1
        bool v13; // 0xc3406
        *(int64_t *)(v2 + (int64_t)v12) = 0x4000 * (int64_t)v13 | (int64_t)(v6 < v9) | 16 * (int64_t)(v6 % 16 - ((int64_t)&g4 & 15) > 15) | 1024 * (int64_t)v13 | 512 * (int64_t)v13 | 64 * (int64_t)(v10 == 0) | 128 * (int64_t)(v10 < 0) | 256 * (int64_t)v13 | 2048 * (int64_t)(((v10 ^ v6) & (v6 ^ (int64_t)&g4)) < 0) | 4 * (int64_t)(v11 % 2 == 0) | 2;
    }
    // 0xc364d
    *v3 = *v3 & 0x2cd08108 | 0x52030;
    int32_t v14 = *v5; // 0xc36c3
    uint32_t v15 = (int32_t)*(int16_t *)(*v7 + 2) - 0x6683bbe1 + v14; // 0xc36d1
    *v5 = v15 | v14;
    *v7 = *v7 + 5;
    return *(int64_t *)(v2 + 271) + (int64_t)(v15 % 0x10000);
}
