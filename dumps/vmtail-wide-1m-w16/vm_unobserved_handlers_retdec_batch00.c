/*
 * Targeted RetDec C for unobserved VM handler native ranges, batch 0.
 *
 * These dispatch entries are statically inventoried but were not seen as
 * dispatch targets in the concrete traces. Batches are sorted by native
 * span size so each decompile stays small and reproducible.
 *
 * Total unobserved handler ranges: 155
 * Batch size: 24
 * Ranges:
 *   0x841f9-0x84299 entry=57 span_bytes=157 insns=34 tail=0x84289
 *   0xad768-0xad857 entry=255 span_bytes=238 insns=53 tail=0xad847
 *   0x8c4cf-0x8c5c7 entry=96 span_bytes=246 insns=55 tail=0x8c5b7
 *   0xbc320-0xbc474 entry=327 span_bytes=339 insns=75 tail=0xbc464
 *   0x86766-0x868cb entry=71 span_bytes=353 insns=74 tail=0x868bb
 *   0xa1939-0xa1aa2 entry=204 span_bytes=358 insns=78 tail=0xa1a92
 *   0x86be4-0x86d50 entry=73 span_bytes=364 insns=80 tail=0x86d40
 *   0x8f6d1-0x8f841 entry=109 span_bytes=365 insns=77 tail=0x8f831
 *   0xbf2d5-0xbf443 entry=339 span_bytes=365 insns=78 tail=0xbf433
 *   0xbb8aa-0xbba1c entry=324 span_bytes=370 insns=86 tail=0xbba0c
 *   0x80d79-0x80f03 entry=38 span_bytes=394 insns=85 tail=0x80ef3
 *   0x90895-0x90a28 entry=115 span_bytes=403 insns=92 tail=0x90a18
 *   0x859fc-0x85b97 entry=67 span_bytes=409 insns=91 tail=0x85b87
 *   0xb7717-0xb78bd entry=304 span_bytes=422 insns=88 tail=0xb78ad
 *   0x94c3a-0x94dec entry=138 span_bytes=431 insns=94 tail=0x94ddc
 *   0x94478-0x94629 entry=135 span_bytes=432 insns=94 tail=0x94619
 *   0x7fba3-0x7fd5a entry=34 span_bytes=439 insns=96 tail=0x7fd4a
 *   0x81f2e-0x820ef entry=45 span_bytes=445 insns=92 tail=0x820df
 *   0x822bc-0x82484 entry=47 span_bytes=456 insns=99 tail=0x82474
 *   0x84596-0x84770 entry=60 span_bytes=474 insns=100 tail=0x84760
 *   0xb4a2b-0xb4c0e entry=289 span_bytes=479 insns=107 tail=0xb4bfe
 *   0x820e1-0x822c9 entry=46 span_bytes=488 insns=104 tail=0x822b9
 *   0x951c2-0x953bf entry=141 span_bytes=508 insns=112 tail=0x953af
 *   0x992cd-0x994dc entry=159 span_bytes=526 insns=110 tail=0x994cc
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

int64_t function_5eff7ea0();

// Address range: 0x7fba3 - 0x7fd4d
int64_t function_7fba3(void) {
    // 0x7fba3
    int64_t v1; // 0x7fba3
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x7fbb7
    *v2 = *v2 - 0x3a52e622;
    int64_t * v3 = (int64_t *)(v1 + 10); // 0x7fbc7
    int64_t v4 = *v3; // 0x7fbc7
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v4 + 1)); // 0x7fbde
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v4 + 5)); // 0x7fbf1
    *(int64_t *)v5 = *(int64_t *)v6;
    int64_t v7 = *v3; // 0x7fc0d
    int64_t v8 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v7 + 7)); // 0x7fc1d
    int64_t v9 = *(int64_t *)(v1 + 409) & (int64_t)&g2; // 0x7fc33
    int64_t v10 = v9 | v8 & (int64_t)&g2; // 0x7fc3a
    int64_t v11 = (int64_t)*(int16_t *)(v7 + 1); // 0x7fc65
    int64_t v12 = v1 + (int64_t)*(int16_t *)(v7 + 5); // 0x7fc70
    int64_t * v13 = (int64_t *)(v1 + v11);
    int64_t v14 = *v13;
    if (v10 == 0) {
        // 0x7fc92
        *v13 = v14 + 8;
        int64_t * v15 = (int64_t *)v12; // 0x7fc99
        *v15 = *v15 + 8;
    } else {
        // 0x7fc7f
        *v13 = v14 - 8;
        int64_t * v16 = (int64_t *)v12; // 0x7fc86
        *v16 = *v16 - 8;
    }
    int64_t v17 = v11 - 4 ^ v9; // 0x7fcc0
    int64_t v18 = v17 + v10 - v1; // 0x7fcd7
    int32_t v19 = *v2; // 0x7fcf4
    *v2 = (v19 + (int32_t)*(int16_t *)(*v3 + 3) ^ 0x459b6b23) + v19;
    *v3 = *v3 + 9;
    return ((v18 | 0x7fffffff) - v17 & (v1 ^ 1 ^ v18)) + 32;
}

// Address range: 0x7fd52 - 0x7fd57
int64_t function_7fd52(void) {
    // 0x7fd52
    return function_5eff7ea0();
}

// Address range: 0x80d79 - 0x80ef6
int64_t function_80d79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x80d79
    int64_t result; // 0x80d79
    int64_t * v1 = (int64_t *)(result + 10); // 0x80d8d
    int64_t v2 = *v1; // 0x80d8d
    int32_t * v3 = (int32_t *)(result + 35); // 0x80d97
    int32_t v4 = *v3; // 0x80d97
    int64_t v5 = v2; // 0x80daf
    if ((v4 & 2) != 0) {
        // 0x80db5
        *v3 = v4 & 0x55b62e53 ^ 0xd779bad;
        v5 = *v1;
    }
    uint16_t v6 = *(int16_t *)(v5 + 6); // 0x80deb
    int64_t * v7 = (int64_t *)(result + (int64_t)*(int16_t *)v2); // 0x80df4
    *(char *)*v7 = (char)*(int64_t *)(result + (int64_t)v6);
    int64_t v8 = *(int64_t *)(result + (int64_t)*(int16_t *)(*v1 + 4)); // 0x80e18
    *v7 = ((v8 & (int64_t)&g2) == 0 ? 1 : -1) + *v7;
    *(int32_t *)(result + 368) = (int32_t)*(int16_t *)(*v1 + 2) - 0x23aef0b2;
    *v1 = *v1 + 8;
    return result;
}

// Address range: 0x81f2e - 0x820e1
int64_t function_81f2e(void) {
    // 0x81f2e
    int64_t result; // 0x81f2e
    int64_t * v1 = (int64_t *)(result + 10); // 0x81f3b
    int64_t v2 = *v1; // 0x81f3b
    int64_t v3 = *(int64_t *)(result + (int64_t)*(int16_t *)(v2 + 3)); // 0x81f5d
    int64_t v4 = *(int64_t *)(result + (int64_t)*(int16_t *)(v2 + 5)); // 0x81f67
    *(int64_t *)v3 = *(int64_t *)v4;
    int64_t v5 = *v1; // 0x81f8b
    int64_t v6 = *(int64_t *)(result + (int64_t)*(int16_t *)(v5 + 7)); // 0x81f9c
    int64_t v7 = result + (int64_t)*(int16_t *)(v5 + 5); // 0x81ff3
    int64_t * v8 = (int64_t *)(result + (int64_t)*(int16_t *)(v5 + 3));
    int64_t v9 = *v8;
    if (((*(int64_t *)(result + 409) | v6) & (int64_t)&g2) == 0) {
        // 0x82017
        *v8 = v9 + 8;
        int64_t * v10 = (int64_t *)v7; // 0x8201e
        *v10 = *v10 + 8;
    } else {
        // 0x82003
        *v8 = v9 - 8;
        int64_t * v11 = (int64_t *)v7; // 0x8200a
        *v11 = *v11 - 8;
    }
    int32_t * v12 = (int32_t *)(result + 368); // 0x820ac
    *v12 = 0x6050ae66 - (int32_t)*(int16_t *)*v1 + *v12;
    *v1 = *v1 + 9;
    return result;
}

// Address range: 0x820e1 - 0x822bc
int64_t function_820e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x820e1
    int64_t v1; // 0x820e1
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x82101
    *v2 = *v2 + 0x6aceff9a;
    int64_t * v3 = (int64_t *)(v1 + 10); // 0x8212e
    int64_t v4 = *v3; // 0x8212e
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)v4); // 0x82161
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v4 + 2)); // 0x8217c
    *(int16_t *)*v5 = (int16_t)v6;
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(*v3 + 4)); // 0x821c2
    *v5 = ((v7 & (int64_t)&g2) == 0 ? 2 : -2) + *v5;
    int32_t v8 = *v2; // 0x8224d
    uint32_t v9 = (int32_t)*(int16_t *)(*v3 + 6) + 0x368668dd + v8; // 0x82257
    *v2 = v9 | v8;
    *v3 = *v3 + 8;
    return *(int64_t *)(v1 + 271) + (int64_t)(v9 % 0x10000);
}

// Address range: 0x822bc - 0x82477
int64_t function_822bc(int64_t a1) {
    // 0x822bc
    int64_t v1; // 0x822bc
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x822d7
    int64_t v3 = *v2; // 0x822d7
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 7)); // 0x822f3
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 3)); // 0x82308
    *(int64_t *)v5 = *(int64_t *)v4;
    int64_t v6 = *v2; // 0x82320
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 1)); // 0x82330
    int64_t v8 = v1 + (int64_t)*(int16_t *)(v6 + 7); // 0x82384
    int64_t * v9 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 3));
    int64_t v10 = *v9;
    if (((*(int64_t *)(v1 + 409) | v7) & (int64_t)&g2) == 0) {
        // 0x823a8
        *v9 = v10 + 8;
        int64_t * v11 = (int64_t *)v8; // 0x823b0
        *v11 = *v11 + 8;
    } else {
        // 0x82394
        *v9 = v10 - 8;
        int64_t * v12 = (int64_t *)v8; // 0x8239c
        *v12 = *v12 - 8;
    }
    int64_t result = v1 + 368; // 0x82426
    *(int32_t *)result = (int32_t)*(int16_t *)(*v2 + 5);
    *v2 = *v2 + 9;
    return result;
}

// Address range: 0x841f9 - 0x8428c
int64_t function_841f9(void) {
    // 0x841f9
    int64_t result; // 0x841f9
    int64_t v1 = result;
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x84211
    uint16_t v3 = *(int16_t *)(*v2 + 2); // 0x8421b
    *(int64_t *)(v1 + (int64_t)v3) = *(int64_t *)(v1 + 161);
    int32_t * v4 = (int32_t *)(v1 + 368); // 0x84255
    int32_t v5 = *v4; // 0x84255
    *v4 = v5 + 0x9df7e26 - (v5 ^ (int32_t)*(int16_t *)*v2);
    *v2 = *v2 + 4;
    return result;
}

// Address range: 0x84596 - 0x84762
int64_t function_84596(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x84596
    int64_t v1; // 0x84596
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x845ad
    int64_t v3 = *v2; // 0x845ad
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 3)); // 0x845d6
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0x845f8
    *(int32_t *)v5 = *(int32_t *)v4;
    int64_t v6 = *v2; // 0x8460f
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 7)); // 0x84620
    int64_t v8 = v1 + (int64_t)*(int16_t *)(v6 + 3); // 0x84663
    int64_t * v9 = (int64_t *)(v1 + (int64_t)*(int16_t *)v6);
    int64_t v10 = *v9;
    if (((*(int64_t *)(v1 + 409) | v7) & (int64_t)&g2) == 0) {
        // 0x84697
        *v9 = v10 + 4;
        int64_t * v11 = (int64_t *)v8; // 0x8469e
        *v11 = *v11 + 4;
    } else {
        // 0x84684
        *v9 = v10 - 4;
        int64_t * v12 = (int64_t *)v8; // 0x8468b
        *v12 = *v12 - 4;
    }
    int32_t * v13 = (int32_t *)(v1 + 368); // 0x846af
    int32_t v14 = *v13 | 0x6dbd49a4; // 0x846af
    *v13 = v14;
    *v13 = (v14 ^ (int32_t)*(int16_t *)(*v2 + 5)) - 0x4424226a & v14;
    *v2 = *v2 + 9;
    return (int64_t)&g1 - 368 - v1;
}

// Address range: 0x84764 - 0x84765
int64_t function_84764(int64_t a1) {
    // 0x84764
    int64_t result; // 0x84764
    return result;
}

// Address range: 0x859fc - 0x85b89
int64_t function_859fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x859fc
    int64_t v1; // 0x859fc
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x85a06
    int32_t v3 = *v2 | 0x26d4dee7; // 0x85a06
    *v2 = v3;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0x85a17
    int32_t v5 = *v4 | v3; // 0x85a25
    *v2 = v5;
    int64_t * v6 = (int64_t *)(v1 + 10); // 0x85a3c
    *v2 = v5 - *v4;
    int64_t * v7 = (int64_t *)(v1 + (int64_t)*(int16_t *)(*v6 + 6)); // 0x85a84
    int32_t v8 = *(int32_t *)*v7; // 0x85a87
    *(int32_t *)(v1 + (int64_t)*(int16_t *)(*v6 + 4)) = v8;
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)*v6); // 0x85aa8
    *v7 = ((v9 & (int64_t)&g2) == 0 ? 4 : -4) + *v7;
    int32_t v10 = *v2; // 0x85b2d
    uint32_t v11 = (int32_t)*(int16_t *)(*v6 + 2) - 0x7138da2d + v10; // 0x85b30
    *v2 = v11 | v10;
    *v6 = *v6 + 8;
    return *(int64_t *)(*(int64_t *)(v1 + 271) + (int64_t)(v11 % 0x10000));
}

// Address range: 0x86766 - 0x868bd
int64_t function_86766(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x86766
    int64_t result; // 0x86766
    int64_t * v1 = (int64_t *)(result + 10); // 0x8677d
    int64_t v2 = *v1; // 0x8677d
    uint16_t v3 = *(int16_t *)(v2 + 6); // 0x867af
    int64_t * v4 = (int64_t *)(result + (int64_t)*(int16_t *)(v2 + 4)); // 0x867bb
    *(char *)(result + (int64_t)v3) = *(char *)*v4;
    int64_t v5 = *(int64_t *)(result + (int64_t)*(int16_t *)*v1); // 0x867df
    *v4 = ((v5 & (int64_t)&g2) == 0 ? 1 : -1) + *v4;
    *v1 = *v1 + 8;
    return result;
}

// Address range: 0x86be4 - 0x86d43
int64_t function_86be4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x86be4
    int64_t v1; // 0x86be4
    int64_t v2 = v1 + 368; // 0x86bea
    int32_t * v3 = (int32_t *)v2; // 0x86bfa
    *v3 = *v3 - 0x3f7f9f2;
    int64_t * v4 = (int64_t *)(v1 + 10); // 0x86c00
    int64_t v5 = *v4; // 0x86c00
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v5 + 4)); // 0x86c1e
    int16_t v7 = *(int16_t *)*v6; // 0x86c21
    *(int16_t *)(v1 + (int64_t)*(int16_t *)(v5 + 6)) = v7;
    int64_t v8 = *v4; // 0x86c43
    int64_t v9 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v8); // 0x86c54
    *v6 = ((v9 & (int64_t)&g2) == 0 ? 2 : -2) + *v6;
    *v3 = (int32_t)*(int16_t *)(*v4 + 2);
    *v4 = *v4 + 8;
    return a2 - v1 + v8 ^ a2 ^ *(int64_t *)(v1 + 271) & (v2 ^ a6) + 32;
}

// Address range: 0x8c4cf - 0x8c5b9
int64_t function_8c4cf(void) {
    // 0x8c4cf
    int64_t result; // 0x8c4cf
    int64_t * v1 = (int64_t *)(result + 10); // 0x8c4e3
    int64_t v2 = *v1; // 0x8c4e3
    uint16_t v3 = *(int16_t *)(v2 + 6); // 0x8c4f0
    int64_t * v4 = (int64_t *)(result + (int64_t)*(int16_t *)(v2 + 2)); // 0x8c506
    *(int64_t *)(result + (int64_t)v3) = *(int64_t *)*v4;
    int64_t v5 = *(int64_t *)(result + (int64_t)*(int16_t *)*v1); // 0x8c52a
    *v4 = ((v5 & (int64_t)&g2) == 0 ? 8 : -8) + *v4;
    int32_t * v6 = (int32_t *)(result + 368); // 0x8c595
    *v6 = (int32_t)*(int16_t *)(*v1 + 4) + 0x1f18e1aa ^ *v6;
    *v1 = *v1 + 8;
    return result;
}

// Address range: 0x8f6d1 - 0x8f834
int64_t function_8f6d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8f6d1
    int64_t v1; // 0x8f6d1
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x8f6f3
    int64_t v3 = *v2; // 0x8f6f3
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 2)); // 0x8f712
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0x8f719
    *(int32_t *)*v5 = (int32_t)v4;
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(*v2 + 4)); // 0x8f73c
    *v5 = ((v6 & (int64_t)&g2) == 0 ? 4 : -4) + *v5;
    int32_t * v7 = (int32_t *)(v1 + 368); // 0x8f7db
    int32_t v8 = *v7; // 0x8f7db
    *v7 = v8 ^ 0x33e5dfd ^ (int32_t)*(int16_t *)*v2 - v8;
    *v2 = *v2 + 8;
    return 1;
}

// Address range: 0x8f838 - 0x8f83f
int64_t function_8f838(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x8f838
    int64_t v1; // 0x8f838
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 119); // 0x8f83a
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x8f840 - 0x8f841
int64_t function_8f840(void) {
    // 0x8f840
    int64_t result; // 0x8f840
    return result;
}

// Address range: 0x90895 - 0x90a1b
int64_t function_90895(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x90895
    int64_t v1; // 0x90895
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x908a2
    int64_t * v3 = (int64_t *)(v1 + 10); // 0x908c0
    int32_t * v4 = (int32_t *)(v1 + 368); // 0x908c3
    *v4 = *v4 & *v2;
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(*v3 + 2)); // 0x908dd
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)*v3); // 0x908e8
    *(int32_t *)*v6 = (int32_t)v5;
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(*v3 + 4)); // 0x9090a
    *v6 = ((v7 & (int64_t)&g2) == 0 ? 4 : -4) + *v6;
    int32_t v8 = *v4 - *v2; // 0x9094c
    *v4 = v8;
    uint16_t v9 = *(int16_t *)(*v3 + 6); // 0x909a7
    *v4 = (int32_t)v9 - 0x65879915 ^ v8;
    *v3 = *v3 + 8;
    return v9 + 43 & 32;
}

// Address range: 0x90a1d - 0x90a1f
int64_t function_90a1d(void) {
    // 0x90a1d
    int64_t result; // 0x90a1d
    return result;
}

// Address range: 0x90a20 - 0x90a21
int64_t function_90a20(void) {
    // 0x90a20
    int64_t result; // 0x90a20
    return result;
}

// Address range: 0x94478 - 0x9461b
int64_t function_94478(void) {
    // 0x94478
    int64_t v1; // 0x94478
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x9448f
    int64_t v3 = *v2; // 0x9448f
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0x944bb
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 7)); // 0x944cf
    *(int32_t *)v4 = *(int32_t *)v5;
    int64_t v6 = *v2; // 0x944e9
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v6 + 3)); // 0x944f9
    int64_t v8 = v1 + (int64_t)*(int16_t *)(v6 + 7); // 0x9454a
    int64_t * v9 = (int64_t *)(v1 + (int64_t)*(int16_t *)v6);
    int64_t v10 = *v9;
    if (((*(int64_t *)(v1 + 409) | v7) & (int64_t)&g2) == 0) {
        // 0x94570
        *v9 = v10 + 4;
        int64_t * v11 = (int64_t *)v8; // 0x94577
        *v11 = *v11 + 4;
    } else {
        // 0x9455d
        *v9 = v10 - 4;
        int64_t * v12 = (int64_t *)v8; // 0x94564
        *v12 = *v12 - 4;
    }
    int64_t v13 = *v2; // 0x9459b
    int32_t v14 = *(int32_t *)(v1 + 368); // 0x945ca
    uint64_t v15 = (int64_t)((v14 ^ (int32_t)*(int16_t *)(v13 + 5)) - 0x7ed035c5); // 0x945d7
    *v2 = v13 + 9;
    return v15 % 0x10000 + *(int64_t *)(v1 + 271) ^ (v15 | 1);
}

// Address range: 0x9461d - 0x9461f
int64_t function_9461d(void) {
    // 0x9461d
    int64_t result; // 0x9461d
    return result;
}

// Address range: 0x94623 - 0x94624
int64_t function_94623(void) {
    // 0x94623
    int64_t result; // 0x94623
    return result;
}

// Address range: 0x94c3a - 0x94ddf
int64_t function_94c3a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x94c3a
    int64_t v1; // 0x94c3a
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x94c44
    int32_t * v3 = (int32_t *)(v1 + 368); // 0x94c54
    uint16_t v4 = *(int16_t *)(*v2 + 6); // 0x94c66
    int32_t * v5 = (int32_t *)(v1 + 35); // 0x94c77
    *v5 = *v5 + *v3;
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)(*v2 + 4)); // 0x94c90
    *(int32_t *)*v6 = (int32_t)*(int64_t *)(v1 + (int64_t)v4);
    uint16_t v7 = *(int16_t *)(*v2 + 2); // 0x94caa
    int64_t result = *(int64_t *)(v1 + (int64_t)v7) & (int64_t)&g2; // 0x94cb4
    *v6 = (result == 0 ? 4 : -4) + *v6;
    *v3 = (int32_t)*(int16_t *)*v2 - 0x3010a5b9;
    *v2 = *v2 + 8;
    return result;
}

// Address range: 0x951c2 - 0x953b1
int64_t function_951c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x951c2
    int64_t v1; // 0x951c2
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x951fa
    int64_t v3 = *v2; // 0x951fa
    int64_t * v4 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0x9526f
    int64_t v5 = *v4; // 0x9526f
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)v3); // 0x95286
    *(char *)v5 = (char)v6;
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(*v2 + 4)); // 0x952c8
    *v4 = ((v7 & (int64_t)&g2) == 0 ? 1 : -1) + *v4;
    *v2 = *v2 + 8;
    return v5 + (a5 | (int64_t)&g2) ^ 120;
}

// Address range: 0x953b3 - 0x953b5
int64_t function_953b3(void) {
    // 0x953b3
    int64_t result; // 0x953b3
    return result;
}

// Address range: 0x953b6 - 0x953b7
int64_t function_953b6(void) {
    // 0x953b6
    int64_t result; // 0x953b6
    return result;
}

// Address range: 0x992cd - 0x994cf
int64_t function_992cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x992cd
    int64_t v1; // 0x992cd
    int64_t v2 = v1 + 35; // 0x992e4
    int32_t * v3 = (int32_t *)v2; // 0x992ea
    int32_t v4 = *v3; // 0x992ea
    int64_t * v5 = (int64_t *)(v1 + 10); // 0x992f2
    int64_t v6 = *v5; // 0x992f2
    int64_t v7 = v6; // 0x992fb
    if ((v4 & 2) != 0) {
        // 0x99301
        *v3 = v4 & 0xa401152 | 0x31bae4a4;
        v7 = *v5;
    }
    uint16_t v8 = *(int16_t *)(v6 + 2); // 0x99326
    uint16_t v9 = *(int16_t *)v7; // 0x9933a
    int64_t v10 = *(int64_t *)*(int64_t *)(v1 + (int64_t)v9); // 0x99344
    *(int64_t *)*(int64_t *)(v1 + (int64_t)v8) = v10;
    int64_t v11 = *v5; // 0x9935b
    int64_t v12 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v11 + 6)); // 0x9936c
    int64_t v13 = v1 + (int64_t)*(int16_t *)v11; // 0x993be
    int64_t * v14 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v11 + 2));
    int64_t v15 = *v14;
    if (((*(int64_t *)(v1 + 409) | v12) & (int64_t)&g2) == 0) {
        // 0x993e4
        *v14 = v15 + 8;
        int64_t * v16 = (int64_t *)v13; // 0x993eb
        *v16 = *v16 + 8;
    } else {
        // 0x993d1
        *v14 = v15 - 8;
        int64_t * v17 = (int64_t *)v13; // 0x993d8
        *v17 = *v17 - 8;
    }
    int32_t * v18 = (int32_t *)(v1 + 368); // 0x99471
    *v18 = 2 * *v18 + (int32_t)*(int16_t *)(*v5 + 4);
    *v5 = *v5 + 9;
    return v2 ^ v1 + a4;
}

// Address range: 0xa1939 - 0xa1a95
int64_t function_a1939(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xa1939
    int64_t v1; // 0xa1939
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xa1961
    int64_t v3 = *v2; // 0xa1961
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 2)); // 0xa1999
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0xa199f
    *(int16_t *)*v5 = (int16_t)v4;
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)*v2); // 0xa19c1
    *v5 = ((v6 & (int64_t)&g2) == 0 ? 2 : -2) + *v5;
    int32_t * v7 = (int32_t *)(v1 + 368); // 0xa1a55
    *v7 = (int32_t)*(int16_t *)(*v2 + 4) - 0x452939b9 ^ *v7;
    *v2 = *v2 + 8;
    return *(int64_t *)(v1 + 129);
}

// Address range: 0xa1a97 - 0xa1a98
int64_t function_a1a97(void) {
    // 0xa1a97
    int64_t result; // 0xa1a97
    return result;
}

// Address range: 0xad768 - 0xad849
int64_t function_ad768(void) {
    // 0xad768
    int64_t v1; // 0xad768
    int64_t * v2 = (int64_t *)(v1 + 10); // 0xad775
    int64_t v3 = *v2; // 0xad775
    int64_t v4 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 2)); // 0xad7a0
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v3 + 6)); // 0xad7a3
    *(int64_t *)*v5 = v4;
    int64_t v6 = *(int64_t *)(v1 + (int64_t)*(int16_t *)*v2); // 0xad7c2
    *v5 = ((v6 & (int64_t)&g2) == 0 ? 8 : -8) + *v5;
    int64_t v7 = *(int64_t *)(v1 + 271); // 0xad7fa
    int64_t v8 = *v2; // 0xad804
    uint16_t v9 = *(int16_t *)(v8 + 4); // 0xad80e
    int32_t v10 = *(int32_t *)(v1 + 368); // 0xad81c
    *v2 = v8 + 8;
    return ((int64_t)((int32_t)v9 - v10) & (int64_t)&g3) + v7;
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

// Address range: 0xbb8aa - 0xbba0f
int64_t function_bb8aa(void) {
    // 0xbb8aa
    int64_t v1; // 0xbb8aa
    int32_t * v2 = (int32_t *)(v1 + 368); // 0xbb8c0
    *v2 = *v2 + *(int32_t *)(v1 + 35);
    int64_t * v3 = (int64_t *)(v1 + 10); // 0xbb8f5
    int64_t v4 = *v3; // 0xbb8f5
    int64_t v5 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(v4 + 4)); // 0xbb910
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v4 + 6)); // 0xbb91c
    *(int16_t *)*v6 = (int16_t)v5;
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(*v3 + 2)); // 0xbb93e
    *v6 = ((v7 & (int64_t)&g2) == 0 ? 2 : -2) + *v6;
    int32_t v8 = *v2; // 0xbb9c4
    uint32_t v9 = (int32_t)*(int16_t *)*v3 - v8 + 0x6e06065a; // 0xbb9c6
    *v2 = v9 & v8;
    *v3 = *v3 + 8;
    return *(int64_t *)(v1 + 271) + (int64_t)(v9 % 0x10000);
}

// Address range: 0xbc320 - 0xbc466
int64_t function_bc320(int64_t a1) {
    // 0xbc320
    int64_t result; // 0xbc320
    int64_t * v1 = (int64_t *)(result + 10); // 0xbc334
    int64_t v2 = *v1; // 0xbc334
    int32_t * v3 = (int32_t *)(result + 368); // 0xbc357
    *v3 = *v3 + 0x2f9d0305;
    int64_t * v4 = (int64_t *)(result + (int64_t)*(int16_t *)(v2 + 2)); // 0xbc369
    int32_t v5 = *(int32_t *)*v4; // 0xbc36c
    *(int32_t *)(result + (int64_t)*(int16_t *)v2) = v5;
    int64_t v6 = *(int64_t *)(result + (int64_t)*(int16_t *)(*v1 + 6)); // 0xbc38d
    *v4 = ((v6 & (int64_t)&g2) == 0 ? 4 : -4) + *v4;
    int32_t v7 = *v3; // 0xbc411
    *v3 = ((int32_t)*(int16_t *)(*v1 + 4) - v7 ^ 0x323c963) + v7;
    *v1 = *v1 + 8;
    return result;
}

// Address range: 0xbc468 - 0xbc46a
int64_t function_bc468(void) {
    // 0xbc468
    int64_t result; // 0xbc468
    return result;
}

// Address range: 0xbc46b - 0xbc46c
int64_t function_bc46b(void) {
    // 0xbc46b
    int64_t result; // 0xbc46b
    return result;
}

// Address range: 0xbf2d5 - 0xbf435
int64_t function_bf2d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xbf2d5
    int64_t v1; // 0xbf2d5
    int64_t result = v1 + 368; // 0xbf2f2
    int32_t * v2 = (int32_t *)result; // 0xbf2f9
    *v2 = 0x2393cc37 - *(int32_t *)(v1 + 35) + *v2;
    int64_t * v3 = (int64_t *)(v1 + 10); // 0xbf319
    int64_t v4 = *v3; // 0xbf319
    int64_t * v5 = (int64_t *)(v1 + (int64_t)*(int16_t *)(v4 + 4)); // 0xbf346
    int32_t v6 = *(int32_t *)*v5; // 0xbf34a
    *(int32_t *)(v1 + (int64_t)*(int16_t *)(v4 + 6)) = v6;
    int64_t v7 = *(int64_t *)(v1 + (int64_t)*(int16_t *)(*v3 + 2)); // 0xbf36c
    *v5 = ((v7 & (int64_t)&g2) == 0 ? 4 : -4) + *v5;
    *v3 = *v3 + 8;
    return result;
}
