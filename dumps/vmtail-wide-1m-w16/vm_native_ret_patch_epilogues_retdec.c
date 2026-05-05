/*
 * Targeted RetDec C for single-stack native return-patch epilogue targets.
 *
 * Source 278 is intentionally excluded; its double-stack trampoline chain
 * is emitted by vm_native_ret_patch_source278_retdec.py.
 *
 * Ranges:
 *   0x217cb-0x2180d source=175 start=0xd1445 target=0x217cb
 *   0x31703-0x3174b source=175 start=0x17a420 target=0x31703
 *   0x339bd-0x339f5 source=175 start=0x1a6041 target=0x339bd
 *   0x21e1e-0x21e5e source=195 start=0xd5ebc target=0x21e1e
 *   0x230d4-0x23113 source=195 start=0xdaf39 target=0x230d4
 *   0x37af9-0x37b38 source=195 start=0x1ed483 target=0x37af9
 *   0x44d7b-0x44d9a source=195 start=0x2304b8 target=0x44d7b
 *   0x5f1c6-0x5f1eb source=195 start=0x231b74 target=0x5f1c6
 *   0x748d8-0x74919 source=195 start=0x333bc9 target=0x748d8
 *   0x74f88-0x74fc3 source=195 start=0x33d2d9 target=0x74f88
 *   0x779bd-0x779fb source=195 start=0x3655e4 target=0x779bd
 *   0x2d409-0x2d44a source=299 start=0x122e3c target=0x2d409
 *   0x313eb-0x3142b source=299 start=0x17452e target=0x313eb
 *   0x74b3d-0x74b7e source=299 start=0x33710f target=0x74b3d
 *
 * This is external decompiler output kept as an evidence artifact. These
 * functions model native epilogue return values and stack-check exits, not
 * VM bytecode CFG successors.
 */
#include <stdint.h>

extern int g1;
int64_t __readfsqword(uint64_t offset);
void __stack_chk_fail(void);

// Address range: 0x217cb - 0x2180d
int64_t function_217cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = 0; // 0x217f8
    int64_t v1; // 0x217cb
    if (v1 != __readfsqword(40)) {
        // 0x217fa
        __stack_chk_fail();
        result = (int64_t)&g1;
    }
    // 0x217ff
    return result;
}

// Address range: 0x21e1e - 0x21e5e
int64_t function_21e1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = a5 & -256 | 1; // 0x21e4c
    int64_t v1; // 0x21e1e
    if (v1 != __readfsqword(40)) {
        // 0x21e4e
        __stack_chk_fail();
        result = (int64_t)&g1;
    }
    // 0x21e53
    return result;
}

// Address range: 0x230d4 - 0x23113
int64_t function_230d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = 0; // 0x23101
    int64_t v1; // 0x230d4
    if (v1 != __readfsqword(40)) {
        // 0x23103
        __stack_chk_fail();
        result = (int64_t)&g1;
    }
    // 0x23108
    return result;
}

// Address range: 0x2d409 - 0x2d44a
int64_t function_2d409(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = 0; // 0x2d439
    int64_t v1; // 0x2d409
    if (v1 != __readfsqword(40)) {
        // 0x2d43b
        __stack_chk_fail();
        result = (int64_t)&g1;
    }
    // 0x2d440
    return result;
}

// Address range: 0x313eb - 0x3142b
int64_t function_313eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = 0; // 0x3141b
    int64_t v1; // 0x313eb
    if (v1 != __readfsqword(40)) {
        // 0x3141d
        __stack_chk_fail();
        result = (int64_t)&g1;
    }
    // 0x31422
    return result;
}

// Address range: 0x31703 - 0x3174b
int64_t function_31703(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = 0; // 0x31732
    int64_t v1; // 0x31703
    if (v1 != __readfsqword(40)) {
        // 0x31734
        __stack_chk_fail();
        result = (int64_t)&g1;
    }
    // 0x31739
    return result;
}

// Address range: 0x339bd - 0x339f5
int64_t function_339bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x339bd
    int64_t result; // 0x339bd
    int64_t v1; // 0x339bd
    if (v1 != __readfsqword(40)) {
        // 0x339eb
        __stack_chk_fail();
        result = (int64_t)&g1;
    }
    // 0x339f0
    return result;
}

// Address range: 0x37af9 - 0x37b38
int64_t function_37af9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x37af9
    int64_t result; // 0x37af9
    int64_t v1; // 0x37af9
    if (v1 != __readfsqword(40)) {
        // 0x37b2a
        __stack_chk_fail();
        result = (int64_t)&g1;
    }
    // 0x37b2f
    return result;
}

// Address range: 0x44d7b - 0x44d9a
int64_t function_44d7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44d7b
    int32_t v1; // 0x44d7b
    return (uint32_t)v1;
}

// Address range: 0x5f1c6 - 0x5f1eb
int64_t function_5f1c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x5f1c6
    return 0;
}

// Address range: 0x748d8 - 0x74919
int64_t function_748d8(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x748d8
    int64_t v1; // 0x748d8
    int64_t result = v1 & 0xffffffff; // 0x74909
    if (v1 != __readfsqword(40)) {
        // 0x7490b
        __stack_chk_fail();
        result = (int64_t)&g1;
    }
    // 0x74910
    return result;
}

// Address range: 0x74b3d - 0x74b7e
int64_t function_74b3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x74b3d
    int64_t v1; // 0x74b3d
    int64_t result = v1 & 0xffffffff; // 0x74b6e
    if (v1 != __readfsqword(40)) {
        // 0x74b70
        __stack_chk_fail();
        result = (int64_t)&g1;
    }
    // 0x74b75
    return result;
}

// Address range: 0x74f88 - 0x74fc3
int64_t function_74f88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x74f88
    int64_t v1; // 0x74f88
    int64_t result = v1 & 0xffffffff; // 0x74fb6
    if (v1 != __readfsqword(40)) {
        // 0x74fb8
        __stack_chk_fail();
        result = (int64_t)&g1;
    }
    // 0x74fbd
    return result;
}

// Address range: 0x779bd - 0x779fb
int64_t function_779bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x779bd
    int64_t result; // 0x779bd
    int64_t v1; // 0x779bd
    if (v1 != __readfsqword(40)) {
        // 0x779ee
        __stack_chk_fail();
        result = (int64_t)&g1;
    }
    // 0x779f3
    return result;
}
