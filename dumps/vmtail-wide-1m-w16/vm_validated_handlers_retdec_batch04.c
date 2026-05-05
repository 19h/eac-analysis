/*
 * Targeted RetDec C for static-validated VM handler native ranges, batch 4.
 *
 * These handlers already have 100% validated handler-layer transfer models.
 * This artifact keeps native decompiler sidecars for full dispatch-entry
 * coverage and cross-checking against the VM-lifted C pseudocode.
 *
 * Total static-validated handler ranges: 166
 * Batch size: 24
 * Ranges:
 *   0x8b8cb-0x8bcfc entry=92 events=307 span_bytes=1070 insns=233
 *   0xc1926-0xc1d56 entry=350 events=2414 span_bytes=1071 insns=235
 *   0x91a59-0x91e8f entry=123 events=10598 span_bytes=1077 insns=226
 *   0xb9451-0xb9888 entry=315 events=9921 span_bytes=1078 insns=222
 *   0xb64d7-0xb690f entry=297 events=20640 span_bytes=1080 insns=230
 *   0xbada5-0xbb1eb entry=320 events=2080 span_bytes=1093 insns=239
 *   0x7e390-0x7e7da entry=28 events=26610 span_bytes=1095 insns=231
 *   0xad32c-0xad776 entry=254 events=1988 span_bytes=1097 insns=231
 *   0x8173d-0x81b8c entry=43 events=16136 span_bytes=1100 insns=228
 *   0x91e81-0x922d1 entry=124 events=1796 span_bytes=1101 insns=232
 *   0xb0007-0xb0468 entry=268 events=12038 span_bytes=1121 insns=249
 *   0xbf435-0xbf896 entry=340 events=26112 span_bytes=1121 insns=244
 *   0xa4609-0xa4a6e entry=215 events=21174 span_bytes=1122 insns=235
 *   0xb6c36-0xb709a entry=300 events=3190 span_bytes=1124 insns=249
 *   0xbd8af-0xbdd26 entry=333 events=12194 span_bytes=1139 insns=239
 *   0x7c62b-0x7caa6 entry=20 events=9485 span_bytes=1145 insns=241
 *   0xa0631-0xa0aac entry=199 events=19641 span_bytes=1146 insns=240
 *   0xa2935-0xa2db1 entry=209 events=2 span_bytes=1147 insns=243
 *   0x7be9b-0x7c318 entry=18 events=25448 span_bytes=1148 insns=242
 *   0xb8fcf-0xb945f entry=314 events=1 span_bytes=1167 insns=254
 *   0x8f24b-0x8f6df entry=108 events=5239 span_bytes=1171 insns=244
 *   0x7e849-0x7ece0 entry=30 events=2590 span_bytes=1174 insns=261
 *   0xb8b42-0xb8fdc entry=313 events=4 span_bytes=1178 insns=253
 *   0x9aa83-0x9af26 entry=168 events=14368 span_bytes=1183 insns=248
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

int64_t function_48d8a6a3();
int64_t function_70cc85ab();
int64_t unknown_acb58b8();

// Address range: 0x7be9b - 0x7c30a
int64_t function_7be9b(int64_t a1) {
    // 0x7be9b
    int64_t v1; // 0x7be9b
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x7bef0
    int32_t v3 = *v2; // 0x7bef0
    int32_t v4 = v3; // 0x7befe
    if ((v3 & 2) != 0) {
        // 0x7bf04
        v4 = (v3 | 0x954df65) + 0x5b466f3b;
        *v2 = v4;
    }
    int32_t * v5 = (int32_t *)(v1 + 368); // 0x7bf3a
    int32_t v6 = (*v5 & v4) - 0x6382ce20; // 0x7bf47
    *v5 = v6;
    int32_t v7 = v6 & *v2; // 0x7bf89
    *v5 = v7;
    int32_t v8 = *v2; // 0x7bfd1
    int32_t v9 = v8; // 0x7bfe0
    int32_t v10 = v7; // 0x7bfe0
    if ((v8 & 2) != 0) {
        // 0x7bfe6
        v9 = v8 + 0x4872934a;
        *v2 = v9;
        v10 = *v5;
    }
    int64_t result = v1 + 10; // 0x7c01c
    int64_t * v11 = (int64_t *)result; // 0x7c030
    unsigned char v12 = *(char *)(*v11 + 2); // 0x7c03a
    *v2 = v9 - 0x6a461e06;
    *(char *)(v1 + 404) = (char)(v10 + (int32_t)v12 ^ v9);
    int32_t v13 = *v2; // 0x7c16f
    if ((v13 & 2) != 0) {
        // 0x7c184
        *v2 = v13 - 0x2d264ba3 | 0x52561d19;
    }
    // 0x7c1a6
    *v5 = 2 * *v5 - (int32_t)*(int16_t *)*v11;
    *v11 = *v11 + 3;
    return result;
}

// Address range: 0x7c62b - 0x7ca98
int64_t function_7c62b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x7c62b
    int64_t v1; // 0x7c62b
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x7c676
    int32_t * v3 = (int32_t *)(v1 + 368); // 0x7c689
    *v3 = (*v2 | *v3 | 0x180e72f2) - 0x36332ac8;
    int32_t v4 = *v2; // 0x7c6e7
    if ((v4 & 2) != 0) {
        // 0x7c708
        *v2 = v4 & 0x17188826 ^ 0x10100800;
    }
    int64_t * v5 = (int64_t *)(v1 + 10); // 0x7c814
    int64_t * v6 = (int64_t *)(v1 + (int64_t)*(int16_t *)*v5);
    *v6 = *v6 + (*(char *)(v1 + 404) != 50 ? -8 : -2);
    int32_t v7 = *v3 - (*v2 & 0x1fa2014f) | 0x38e67f26; // 0x7c8e6
    *v3 = v7;
    int32_t v8 = v7 - *v2; // 0x7c943
    *v3 = v8;
    *v2 = *v2 | v8;
    int32_t v9 = *v3; // 0x7ca01
    uint32_t v10 = v9 ^ (int32_t)*(int16_t *)(*v5 + 2); // 0x7ca01
    *v3 = v10 & v9;
    *v5 = *v5 + 4;
    return (int64_t)v10 & (int64_t)&g3;
}

// Address range: 0x7e390 - 0x7e7cd
int64_t function_7e390(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x7e390
    int64_t v1; // 0x7e390
    int32_t * v2 = (int32_t *)(v1 + 368); // 0x7e39a
    int32_t * v3 = (int32_t *)(v1 + 35); // 0x7e3ac
    int32_t v4 = *v3 ^ (*v2 | 0xb9ad02a); // 0x7e3ac
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v1 + 10); // 0x7e3d1
    unsigned char v6 = *(char *)(*v5 + 2); // 0x7e3ec
    *v3 = v4 & 0x3fb85e48;
    *(char *)(v1 + 404) = (char)(v4 + (int32_t)v6 + *v2);
    int32_t v7 = *v3 - (*v2 ^ 0x6e3e6f1a); // 0x7e514
    *v3 = v7;
    *v2 = *v2 | v7;
    int32_t v8 = *v3; // 0x7e53b
    int32_t v9 = v8; // 0x7e549
    if ((v8 & 2) != 0) {
        int32_t v10 = v8 + 0x43078fb1; // 0x7e559
        *v3 = v10;
        v9 = v10;
        if ((v10 & 2) != 0) {
            int32_t v11 = v10 & 0x282416bb ^ 0x53f50e0b; // 0x7e5a4
            *v3 = v11;
            v9 = v11;
        }
    }
    uint32_t result = *v2 - 0x7e20fbab ^ v9; // 0x7e659
    *v3 = result;
    int32_t v12 = *v2 | result; // 0x7e67f
    *v2 = v12;
    int32_t v13 = *v3 ^ v12; // 0x7e6a4
    *v2 = v13;
    *v2 = v13 | (int32_t)*(int16_t *)*v5;
    *v5 = *v5 + 3;
    return result;
}

// Address range: 0x7e849 - 0x7ecd2
int64_t function_7e849(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x7e849
    int64_t v1; // 0x7e849
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x7e904
    int32_t v3 = *v2; // 0x7e904
    int32_t v4 = v3; // 0x7e92e
    if ((v3 & 2) != 0) {
        // 0x7e934
        v4 = v3 & 0x614d4b17;
        *v2 = v4;
    }
    int32_t * v5 = (int32_t *)(v1 + 368); // 0x7e98c
    int32_t v6 = *v5 | v4; // 0x7e98c
    *v5 = v6;
    int64_t * v7 = (int64_t *)(v1 + 10); // 0x7e9d9
    uint16_t v8 = *(int16_t *)(*v7 + 2); // 0x7ea01
    int32_t v9 = *v2; // 0x7ea6b
    *v2 = v9 | 0x72c68380;
    int64_t v10 = *(int64_t *)(((int64_t)((int32_t)v8 - v6 + v9) & (int64_t)&g3) + v1); // 0x7eae3
    *(int64_t *)(v1 + 96) = v10 - 0x653cf834;
    int32_t v11 = *v5 + 0x64fd160c; // 0x7eb2d
    *v5 = v11;
    int32_t v12 = *v2; // 0x7eb34
    int32_t v13 = v11; // 0x7eb45
    if ((v12 & 2) != 0) {
        // 0x7eb4b
        *v2 = (v12 | 0x66ff8816) + 0x2273cac6;
        v13 = *v5;
    }
    int64_t v14 = *(int64_t *)(v1 + 271); // 0x7ebb8
    int64_t v15 = *v7; // 0x7ebd0
    uint16_t v16 = *(int16_t *)v15; // 0x7ec01
    int64_t v17 = v1 + 4 ^ 240; // 0x7ec61
    *v7 = v15 + 4;
    return ((v17 | 16) & (int64_t)L"\n2") + v17 - v14 - (int64_t)(((v13 ^ (int32_t)v16) + 0xfc84) % 0x10000);
}

// Address range: 0x7ecda - 0x7ecdd
int64_t function_7ecda(void) {
    // 0x7ecda
    int64_t result; // 0x7ecda
    return result;
}

// Address range: 0x8173d - 0x81b7f
int64_t function_8173d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x8173d
    int64_t v1; // 0x8173d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0x81791
    int32_t v4 = *v3; // 0x81791
    if ((v4 & 2) != 0) {
        // 0x817a6
        *v3 = v4 ^ 0x542b3101;
    }
    int64_t * v5 = (int64_t *)(v2 + 10); // 0x81899
    int32_t v6 = (int32_t)*(int16_t *)(*v5 + 2); // 0x81900
    int32_t * v7 = (int32_t *)(v2 + 368); // 0x81900
    int32_t v8 = *v7; // 0x81900
    *v7 = v6;
    *v3 = *v3 & 0x494c0852;
    *(int64_t *)(v2 + 129) = v2 - 0x1a44e4ef + ((int64_t)(v8 ^ v6) & (int64_t)&g3);
    int64_t v9 = *v5; // 0x81a67
    int64_t v10 = *(int64_t *)(v2 + 271); // 0x81aac
    *v5 = v9 + 4;
    return v10 + (int64_t)(((*v7 ^ (int32_t)*(int16_t *)v9) + 0x8c24) % 0x10000);
}

// Address range: 0x81b83 - 0x81b8c
int64_t function_81b83(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x81b83
    int64_t v1; // 0x81b83
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(v1 + 49); // 0x81b85
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x8b8cb - 0x8bcef
int64_t function_8b8cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8b8cb
    int64_t v1; // 0x8b8cb
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x8b8d5
    int32_t v3 = *v2; // 0x8b8d5
    int32_t v4 = v3; // 0x8b8e4
    if ((v3 & 2) != 0) {
        // 0x8b8ea
        v4 = v3 | 0x39591837;
        *v2 = v4;
    }
    int64_t * v5 = (int64_t *)(v1 + 10); // 0x8b91e
    int64_t result = v1 + 368; // 0x8b96e
    int32_t * v6 = (int32_t *)result; // 0x8b975
    int32_t v7 = *v6; // 0x8b975
    uint32_t v8 = v4 ^ (int32_t)*(int16_t *)(*v5 + 2) ^ v7; // 0x8b9a8
    *v6 = v8 & v7;
    int64_t v9 = *(int64_t *)(((int64_t)v8 & (int64_t)&g3) + v1); // 0x8ba19
    *(int64_t *)(v1 + 129) = v9 - 0x1a44e4ef;
    int32_t v10 = *v2 | *v6 | 0x1002fee7; // 0x8bb02
    *v6 = v10;
    int32_t v11 = *v2; // 0x8bb0f
    int32_t v12 = v10; // 0x8bb1c
    if ((v11 & 2) != 0) {
        // 0x8bb22
        *v2 = (v11 | 0x18f293fe) ^ 0x640d0001;
        v12 = *v6;
    }
    int32_t v13 = v12 + 0x2efa2a96; // 0x8bb9b
    *v6 = v13;
    *v6 = v12 - 0x70bb2bd3 + (int32_t)*(int16_t *)*v5 ^ v13;
    *v5 = *v5 + 4;
    return result;
}

// Address range: 0x8f24b - 0x8f6d1
int64_t function_8f24b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x8f24b
    int64_t v1; // 0x8f24b
    int64_t v2 = *(int64_t *)(v1 + 113) - 0x1a44e4ef; // 0x8f2ec
    int64_t v3 = v1 + 129; // 0x8f303
    int64_t v4 = *(int64_t *)v3; // 0x8f31e
    int64_t v5 = v4 + 0x1a44e4ef; // 0x8f335
    char * v6 = (char *)(v1 + 404); // 0x8f363
    char v7 = *v6; // 0x8f363
    if (v7 == 98) {
        // 0x8f36e
        *(char *)v5 = (char)v2;
    }
    if (v7 == 50) {
        // 0x8f394
        *(int16_t *)v5 = (int16_t)v2;
    }
    int64_t v8 = v5; // 0x8f3a8
    if (v7 == 80) {
        // 0x8f3ae
        *(int32_t *)v5 = (int32_t)v2;
        v8 = v5;
        if (*(char *)(v1 + 367) != 0) {
            int64_t v9 = v4 + 0x1a44e4f3; // 0x8f3f5
            *(int32_t *)v9 = 0;
            v8 = v9;
        }
    }
    if (v7 == 58) {
        // 0x8f43e
        *(int64_t *)v8 = v2;
    }
    int32_t * v10 = (int32_t *)(v1 + 368); // 0x8f47a
    int32_t v11 = *v10 + 0x11961dc7 ^ 0x5fa19cc7; // 0x8f49a
    *v10 = v11;
    int32_t * v12 = (int32_t *)(v1 + 35); // 0x8f4b8
    *v10 = v11 - *v12;
    int32_t v13 = *v12; // 0x8f4d5
    unsigned char v14; // 0x8f585
    int64_t * v15; // 0x8f6c7
    if ((v13 & 2) == 0) {
        // 0x8f57b
        v14 = *v6;
        v15 = (int64_t *)(v1 + 10);
        *v15 = *v15 + 2;
        return ((v3 & -256 | (int64_t)&g2 | (int64_t)v14) & (int64_t)L"\n2") - 144;
    }
    int32_t v16 = v13 & 0x60594c67 ^ 0x184062; // 0x8f516
    *v12 = v16;
    if ((v16 & 2) != 0) {
        // 0x8f561
        *v12 = v16 - 0x2e3abdae;
    }
    // 0x8f57b
    v14 = *v6;
    v15 = (int64_t *)(v1 + 10);
    *v15 = *v15 + 2;
    return ((v3 & -256 | (int64_t)&g2 | (int64_t)v14) & (int64_t)L"\n2") - 144;
}

// Address range: 0x8f6d7 - 0x8f6df
int64_t function_8f6d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x8f6d7
    int64_t v1; // 0x8f6d7
    return (int64_t)&v1;
}

// Address range: 0x91a59 - 0x91e81
int64_t function_91a59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x91a59
    int64_t v1; // 0x91a59
    int64_t * v2 = (int64_t *)(v1 + 10); // 0x91b90
    int64_t * v3 = (int64_t *)(v1 + (int64_t)*(int16_t *)(*v2 + 2));
    *v3 = *v3 + (*(char *)(v1 + 404) != 50 ? -8 : -2);
    int32_t * v4 = (int32_t *)(v1 + 35); // 0x91c64
    int32_t v5 = *v4; // 0x91c64
    int32_t v6 = v5 & 0x6e640fcb; // 0x91c64
    int32_t v7 = (v5 & 2) == 0 ? v6 : v6 - 0x722a99ab;
    *v4 = (v7 & 2) == 0 ? v7 : v7 + 0x4cd877bf;
    int64_t result = v1 + 368; // 0x91d46
    int32_t * v8 = (int32_t *)result; // 0x91d4d
    int32_t v9 = *v8 + 0x3da77425; // 0x91d4d
    *v8 = v9;
    *v8 = v9 - ((int32_t)*(int16_t *)*v2 - v9 ^ 0x1603b0a9);
    *v2 = *v2 + 4;
    return result;
}

// Address range: 0x91e81 - 0x922c4
int64_t function_91e81(void) {
    // 0x91e81
    int64_t v1; // 0x91e81
    int32_t * v2 = (int32_t *)(v1 + 35); // 0x91e95
    int32_t * v3 = (int32_t *)(v1 + 368); // 0x91e9f
    int32_t v4 = *v3 - 0x7c31e804; // 0x91e9f
    *v3 = v4;
    int32_t v5 = *v2;
    int32_t v6 = v4; // 0x91eac
    int32_t v7 = v5; // 0x91eac
    if ((*v2 & 2) != 0) {
        // 0x91eb2
        v7 = v5 + 0x2b837475;
        *v2 = v7;
        v6 = *v3;
    }
    int32_t v8 = (v7 ^ v6 | 0x50ef8024) ^ 0x21025c3; // 0x91f8e
    *v3 = v8;
    int32_t v9 = *v2 - v8; // 0x91fb9
    *v2 = v9;
    int32_t v10 = *v3 + v9; // 0x91fd3
    *v3 = v10;
    int32_t v11 = *v2 ^ v10; // 0x91fed
    *v3 = v11;
    int64_t * v12 = (int64_t *)(v1 + 10); // 0x92024
    uint32_t v13 = *(int32_t *)*v12 - v11; // 0x92067
    *v3 = v13 & v11;
    *v2 = *v2 + 0x562164c0;
    *(int64_t *)(v1 + 96) = (int64_t)v13 - 0x653cf834;
    int32_t v14 = *v3; // 0x92225
    *v3 = v14 - (v14 + (int32_t)*(int16_t *)(*v12 + 4) ^ 0x3654c1a7);
    *v12 = *v12 + 6;
    return 16;
}

// Address range: 0x9aa83 - 0x9af18
int64_t function_9aa83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x9aa83
    int64_t v1; // 0x9aa83
    int64_t v2 = v1;
    int64_t v3 = v2 + 35; // 0x9aa86
    int32_t * v4 = (int32_t *)v3; // 0x9aa8d
    int32_t v5 = *v4; // 0x9aa8d
    if ((v5 & 2) != 0) {
        int32_t v6 = (v5 & 0x66031b5e) - 0x2eab70d9; // 0x9aabd
        *v4 = v6;
        if ((v6 & 2) != 0) {
            // 0x9aae3
            *v4 = v6 & 0x4643242c ^ 0x440a2424;
        }
    }
    int32_t * v7 = (int32_t *)(v2 + 368); // 0x9ab11
    int32_t v8 = *v7 | 0x6899d5d4; // 0x9ab11
    *v7 = v8;
    int32_t v9 = *v4; // 0x9ab1e
    int32_t v10 = v8; // 0x9ab2f
    int32_t v11 = v9; // 0x9ab2f
    if ((v9 & 2) != 0) {
        // 0x9ab35
        v11 = v9 & 0x21080009 | 0x4ee70776;
        *v4 = v11;
        v10 = *v7;
    }
    int64_t * v12 = (int64_t *)(v2 + 129); // 0x9ab9e
    int64_t v13 = *v12; // 0x9ab9e
    int64_t v14 = v2 + 10; // 0x9abc6
    int64_t * v15 = (int64_t *)v14; // 0x9abd0
    uint32_t v16 = v11 + (int32_t)*(int16_t *)*v15; // 0x9ac52
    int64_t v17 = v16; // 0x9ac52
    *v7 = v16 & v10;
    *v4 = *v4 + 0x665b83da;
    int64_t v18 = v2 - 0x1a44e4ef + (v17 & (int64_t)&g3); // 0x9ad09
    *v12 = v18;
    int32_t v19 = *v4; // 0x9ad54
    uint32_t v20 = v19 & 2; // 0x9ad5e
    if (v20 != 0) {
        // 0x9ad8b
        *v4 = (v19 & 0x6f276977) - 0x62cd6083;
    }
    int64_t v21 = *v15; // 0x9ae1c
    int32_t v22 = *v7; // 0x9ae79
    uint32_t v23 = (int32_t)*(int16_t *)(v21 + 2) + 0x553030a2 + v22; // 0x9ae7b
    *v7 = v23 & v22;
    *v15 = *v15 + 4;
    return v18 + 48 + ((v2 + 3 + (v2 + (int64_t)&g2 + (int64_t)&g2 - 64 + 99 - v17 | 2) + (int64_t)v20 & 16 ^ v18 | (int64_t)&g3) ^ 56) & 32 & v21 & (int64_t)&g2 - 0x80000000 - (v18 ^ (v14 ^ (int64_t)(v11 | 32) | -35 - v2 - ((v13 | a4) & 4) ^ v3 | 8)) - (int64_t)v23;
}

// Address range: 0x9af1a - 0x9af1c
int64_t function_9af1a(void) {
    // 0x9af1a
    int64_t result; // 0x9af1a
    return result;
}

// Address range: 0x9af1d - 0x9af1e
int64_t function_9af1d(void) {
    // 0x9af1d
    int64_t result; // 0x9af1d
    return result;
}

// Address range: 0xa0631 - 0xa0a9e
int64_t function_a0631(int64_t a1) {
    // 0xa0631
    int64_t v1; // 0xa0631
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xa0664
    int32_t v3 = *v2; // 0xa0664
    int32_t v4 = v3; // 0xa0676
    if ((v3 & 2) != 0) {
        // 0xa067c
        v4 = (v3 ^ 0x7353b039) - 0x24d1328a;
        *v2 = v4;
    }
    int64_t * v5 = (int64_t *)(v1 + 10); // 0xa06e6
    int32_t v6 = v4 + (int32_t)*(char *)(*v5 + 2); // 0xa0767
    int32_t * v7 = (int32_t *)(v1 + 368); // 0xa07a1
    *v7 = v6 + *v7;
    *(char *)(v1 + 404) = (char)v6;
    int32_t v8 = *v7 & 0x20d5418 ^ 0x2000010; // 0xa0891
    *v7 = v8;
    *v7 = v8 + *v2;
    int32_t v9 = *v2 & 0x4705559f; // 0xa08d2
    int32_t v10 = v9 + 0x79865026; // 0xa08f6
    int32_t v11 = (v10 & 2) == 0 ? v10 : v9 - 0x12d24be2 | 0x3383da68;
    *v2 = (v11 & 2) == 0 ? v11 : v11 & 0x16833a14;
    int64_t v12 = *v5; // 0xa09d0
    uint16_t v13 = *(int16_t *)v12; // 0xa0a0e
    int64_t v14 = *(int64_t *)(v1 + 271); // 0xa0a19
    *v5 = v12 + 3;
    return *(int64_t *)(v14 + (int64_t)(((*v7 ^ (int32_t)v13) + 0xbb89) % 0x10000));
}

// Address range: 0xa0aa3 - 0xa0aa6
int64_t function_a0aa3(void) {
    // 0xa0aa3
    int64_t result; // 0xa0aa3
    return result;
}

// Address range: 0xa2935 - 0xa2da3
int64_t function_a2935(void) {
    // 0xa2935
    int64_t v1; // 0xa2935
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 35); // 0xa294c
    int32_t v4 = *v3; // 0xa294c
    int32_t v5; // 0xa2935
    if ((v4 & 2) == 0) {
        v5 = v4 | 0x22939484;
    } else {
        int32_t v6 = (v4 | 0x57058be5) ^ 0x36c108d8; // 0xa297d
        *v3 = v6;
        v5 = (v6 | 0x22939484) ^ 0x55c2f3a2;
    }
    *v3 = v5;
    *(int64_t *)v2 = v2 ^ 0xda3b7d9;
    int64_t * v7 = (int64_t *)(v2 + 96); // 0xa2a1b
    *v7 = *v7 + 0x653cf834 ^ 0x260d34d4;
    int32_t * v8 = (int32_t *)(v2 + 368); // 0xa2a92
    *v8 = *v8 & *v3;
    int64_t v9 = *v7; // 0xa2a9f
    uint64_t v10 = v9 ^ 0x260d34d4; // 0xa2aa2
    char v11 = *(char *)(v2 + 404); // 0xa2ab3
    int64_t v12; // 0xa2935
    int64_t v13; // 0xa2935
    bool v14; // 0xa2935
    if (v11 == 98) {
        unsigned char v15 = (char)v2; // 0xa2abe
        unsigned char v16 = (char)v10; // 0xa2abe
        char v17 = v15 - v16; // 0xa2abe
        int64_t v18 = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | (int64_t)(v15 < v16) | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v15 % 16 - v16 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v17) % 2 == 0) | 2048 * (int64_t)(((v17 ^ v15) & (char)(v10 ^ v2)) < 0) | 2; // bp-8, 0xa2ac1
        v13 = (int64_t)&v18;
        v12 = v2 & -256 | (int64_t)v17;
    }
    int64_t v19 = v13; // 0xa2ac5
    int64_t v20 = v12; // 0xa2ac5
    if (v11 == 50) {
        uint16_t v21 = (int16_t)v12; // 0xa2acb
        uint16_t v22 = (int16_t)v10; // 0xa2acb
        int16_t v23 = v21 - v22; // 0xa2acb
        int64_t v24 = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | (int64_t)(v21 < v22) | 64 * (int64_t)(v23 == 0) | 128 * (int64_t)(v23 < 0) | 16 * (int64_t)(v21 % 16 - v22 % 16 > 15) | 2048 * (int64_t)(((v23 ^ v21) & (int16_t)(v12 ^ v9)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v23) % 2 == 0) | 2; // bp-16, 0xa2ace
        v19 = (int64_t)&v24;
        v20 = v12 & -0x10000 | (int64_t)v23;
    }
    int64_t v25 = v19; // 0xa2ad2
    int64_t v26 = v20; // 0xa2ad2
    if (v11 == 80) {
        uint32_t v27 = (int32_t)v20; // 0xa2ad8
        uint32_t v28 = (int32_t)v10; // 0xa2ad8
        int32_t v29 = v27 - v28; // 0xa2ad8
        unsigned char v30 = llvm_ctpop_i8((char)v29); // 0xa2ad8
        v25 = v19 - 8;
        *(int64_t *)v25 = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | (int64_t)(v27 < v28) | 64 * (int64_t)(v29 == 0) | 128 * (int64_t)(v29 < 0) | 16 * (int64_t)(v27 % 16 - v28 % 16 > 15) | 2048 * (int64_t)(((v29 ^ v27) & (int32_t)(v20 ^ v9)) < 0) | 4 * (int64_t)(v30 % 2 == 0) | 2;
        v26 = v29;
    }
    uint64_t v31 = v26;
    int64_t v32 = v25; // 0xa2ade
    int64_t v33 = v31; // 0xa2ade
    if (v11 == 58) {
        // 0xa2ae4
        v33 = v31 - v10;
        unsigned char v34 = llvm_ctpop_i8((char)v33); // 0xa2ae4
        v32 = v25 - 8;
        *(int64_t *)v32 = 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | (int64_t)(v31 < v10) | 64 * (int64_t)(v33 == 0) | 128 * (int64_t)(v33 < 0) | 16 * (int64_t)(v31 % 16 - v10 % 16 > 15) | 2048 * (int64_t)(((v33 ^ v31) & (v31 ^ v9)) < 0) | 4 * (int64_t)(v34 % 2 == 0) | 2;
    }
    int64_t result = v2 + 113; // 0xa2af1
    *(int64_t *)result = v33 + 0x1a44e4ef;
    int32_t v35 = *v3 - 0x5a1b0d1e | 0xb6c4d7f; // 0xa2b57
    *v3 = v35;
    int64_t * v36 = (int64_t *)(v2 + 10); // 0xa2b6a
    int64_t v37 = *v36; // 0xa2b6a
    int32_t v38 = v35; // 0xa2b7f
    if (*(char *)(v37 + 4) != 0) {
        uint16_t v39 = *(int16_t *)(v37 + 2); // 0xa2ba1
        *(int64_t *)(v2 + (int64_t)v39) = *(int64_t *)v32;
        v38 = *v3;
    }
    // 0xa2bac
    *v3 = v38 + 0x5dc7f8d2;
    int32_t v40 = *v8; // 0xa2ce6
    *v8 = v40 - (v40 ^ (int32_t)*(int16_t *)*v36);
    *v36 = *v36 + 5;
    return result;
}

// Address range: 0xa4609 - 0xa4a61
int64_t function_a4609(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xa4609
    int64_t v1; // 0xa4609
    int64_t v2 = v1;
    int64_t v3 = v2 + 35; // 0xa4641
    int32_t * v4 = (int32_t *)v3; // 0xa464f
    int32_t v5 = *v4; // 0xa464f
    int32_t * v6 = (int32_t *)(v2 + 368); // 0xa4652
    int32_t v7 = *v6 | 0x760f463f; // 0xa4652
    *v6 = v7;
    int32_t v8 = *v4;
    int32_t v9 = (v5 & 2) == 0 ? v8 : v8 | 0x77dcc51b; // 0xa4692
    uint32_t v10 = (v9 & 2) == 0 ? v9 : v9 ^ 0xee9796d;
    int32_t v11 = v7; // 0xa4609
    if (((v9 | v5) & 2) != 0) {
        *v4 = v10;
        v11 = *v6;
    }
    int32_t v12 = v11 - (v10 ^ 0x717a207c); // 0xa4719
    *v6 = v12;
    int32_t v13 = *v4; // 0xa472a
    int32_t v14 = v12; // 0xa4746
    if ((v13 & 2) != 0) {
        // 0xa474c
        *v4 = v13 + 0x269ea56a ^ 0x6abba0b9;
        v14 = *v6;
    }
    int32_t v15 = v14 + 0x15a799dd | 0x6c5f0f12; // 0xa4794
    *v6 = v15;
    int32_t v16 = *v4; // 0xa47c5
    uint32_t v17 = v16 & 2; // 0xa47c8
    int32_t v18 = v15; // 0xa47d6
    if (v17 != 0) {
        // 0xa47dc
        *v4 = v16 - 0x4d415ee2;
        v18 = *v6;
    }
    int64_t v19 = v2 - 0x7ffffe90; // 0xa4803
    int64_t * v20 = (int64_t *)(v2 + 10); // 0xa4821
    int32_t v21 = v18 + (int32_t)*(char *)(*v20 + 2); // 0xa485c
    *v6 = v21 + v18;
    *v4 = *v4 + 0x5966d257;
    *(char *)(v2 + 404) = (char)v21;
    int32_t v22 = *v6 | 0x38d2bdd3; // 0xa492c
    *v6 = v22;
    *v6 = v22 - (int32_t)*(int16_t *)*v20;
    *v20 = *v20 + 3;
    return (v2 ^ 144 ^ ((((int64_t)((int32_t)v2 + 368 + v15) - 1 | (int64_t)v10) + v19 | v19) + (a6 & 16 | v2 | (int64_t)v17 | 1) | v3) | (int64_t)&g2) ^ (int64_t)&g3 | (v2 - 0x7ffffea0 ^ 64) + (int64_t)&g3 - 138 ^ 0x7fffffff;
}

// Address range: 0xa4a63 - 0xa4a66
int64_t function_a4a63(void) {
    // 0xa4a63
    int64_t result; // 0xa4a63
    return result;
}

// Address range: 0xad32c - 0xad768
int64_t function_ad32c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xad32c
    int64_t v1; // 0xad32c
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xad33d
    int32_t * v3 = (int32_t *)(v1 + 368); // 0xad353
    int32_t v4 = *v3 + *v2; // 0xad353
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v1 + 10); // 0xad38e
    uint32_t v6 = v4 ^ (int32_t)*(int16_t *)*v5; // 0xad3e9
    *v3 = v4 - v6;
    int64_t v7 = *(int64_t *)(((int64_t)v6 & (int64_t)&g3) + v1); // 0xad46b
    *(int64_t *)(v1 + 96) = v7 - 0x653cf834;
    int32_t v8 = (*v2 | *v3 | 0x75f77ffb) ^ 0x5bf4e999; // 0xad56c
    *v3 = v8;
    int32_t v9 = *v2; // 0xad580
    int32_t v10 = v8; // 0xad598
    int32_t v11 = v9; // 0xad598
    if ((v9 & 2) != 0) {
        // 0xad59e
        v11 = v9 - 0x35a18ac8 | 0x5feb6979;
        *v2 = v11;
        v10 = *v3;
    }
    int32_t v12 = v10 & 0x3e80b852 & v11; // 0xad608
    *v3 = v12;
    *v3 = (int32_t)*(int16_t *)(*v5 + 2) - 0x228a41a2 | v12;
    *v5 = *v5 + 4;
    return 2;
}

// Address range: 0xad76a - 0xad776
int64_t function_ad76a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_acb58b8(a1, a2, a3, a4); // 0xad76a
    char * v1 = (char *)result; // 0xad76f
    *v1 = *v1 + (char)result;
    char * v2 = (char *)(a4 - 119); // 0xad771
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0xb0007 - 0xb045b
int64_t function_b0007(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb0007
    int64_t v1; // 0xb0007
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0xb0087
    int32_t v4 = *v3 | 0x71bd1bb1; // 0xb0087
    *v3 = v4;
    int64_t * v5 = (int64_t *)(v2 + 10); // 0xb00b6
    int32_t * v6 = (int32_t *)(v2 + 35); // 0xb0129
    uint32_t v7 = (int32_t)*(int16_t *)*v5 - v4 - *v6; // 0xb0129
    *v3 = v7 + v4;
    *v6 = *v6 + 0x33c0c75b;
    *(int64_t *)(v2 + 129) = v2 - 0x1a44e4ef + ((int64_t)v7 & (int64_t)&g3);
    int32_t v8 = *v6; // 0xb0208
    int32_t result = v8; // 0xb0218
    if ((v8 & 2) != 0) {
        int32_t v9 = (v8 & 0x174c40ef) - 0x554d11ee; // 0xb023a
        *v6 = v9;
        result = v9;
        if ((v9 & 2) != 0) {
            int32_t v10 = v9 & 0x30ef8696; // 0xb0284
            *v6 = v10;
            result = v10;
        }
    }
    int32_t v11 = *v3 & result; // 0xb02c5
    *v3 = v11;
    int32_t v12 = *v6; // 0xb02de
    int32_t v13 = v11; // 0xb0307
    int32_t v14 = v12; // 0xb0307
    if ((v12 & 2) != 0) {
        // 0xb030d
        v14 = v12 + 0x12696b26;
        *v6 = v14;
        v13 = *v3;
    }
    int32_t v15 = v14 | v13; // 0xb034b
    *v3 = v15;
    *v3 = 0x73efcc77 - v15 + (int32_t)*(int16_t *)(*v5 + 2) ^ v15;
    *v5 = *v5 + 4;
    return result;
}

// Address range: 0xb045d - 0xb0462
int64_t function_b045d(void) {
    // 0xb045d
    return function_70cc85ab();
}

// Address range: 0xb64d7 - 0xb6902
int64_t function_b64d7(int64_t a1, int64_t a2) {
    // 0xb64d7
    int64_t v1; // 0xb64d7
    int64_t v2 = v1;
    int64_t v3 = v2 + 368; // 0xb64e4
    int32_t * v4 = (int32_t *)v3; // 0xb64ee
    int32_t v5 = *v4 - 0x48220942; // 0xb64ee
    *v4 = v5;
    int64_t v6 = *(int64_t *)(v2 + 129); // 0xb6518
    int64_t v7 = v2 + 35; // 0xb6537
    int32_t * v8 = (int32_t *)v7; // 0xb653e
    int32_t v9 = *v8; // 0xb653e
    int32_t v10 = 0; // 0xb654f
    int32_t v11 = v9; // 0xb654f
    int32_t v12 = v5; // 0xb654f
    if ((v9 & 2) != 0) {
        // 0xb6555
        v11 = v9 + 0x283684b4 ^ 0x4a5a939a;
        *v8 = v11;
        v10 = v11 & 2;
        v12 = *v4;
    }
    int64_t v13 = *(int64_t *)(v2 + 113); // 0xb659d
    int32_t v14 = v12; // 0xb65f5
    int32_t v15 = v11; // 0xb65f5
    if (v10 != 0) {
        // 0xb65fb
        v15 = v11 | 0x6650e9bb;
        *v8 = v15;
        v14 = *v4;
    }
    int64_t v16 = v13 + (((char)a2 == 0 ? v6 + v3 : v6 ^ 0x2a87a530) ^ 0x50a1ca0e) ^ v7; // 0xb65a0
    int32_t v17 = (v15 | v14) ^ 0x6b7f38b7; // 0xb6638
    *v4 = v17;
    int64_t v18 = v16 ^ 0x50a1ca0e; // 0xb6648
    int64_t * v19 = (int64_t *)(v2 + 10); // 0xb66af
    int64_t v20 = *v19; // 0xb66af
    unsigned char v21 = *(char *)v20; // 0xb66cb
    uint32_t v22 = v17 + (int32_t)v21; // 0xb670b
    int64_t v23 = (int64_t)v22 ^ (((int64_t)&g1 | 8) + 8 & 32 | 120) + 0x80000000; // 0xb670e
    int32_t v24 = v22 + *v8; // 0xb6731
    *v4 = v24 + v17;
    *v8 = *v8 + 0xe00fc8a;
    *(char *)(v2 + 404) = (char)v24;
    int32_t v25 = *v4; // 0xb686b
    *v4 = v25 - ((int32_t)*(int16_t *)(*v19 + 1) - v25 ^ 0x9f24ccb);
    *v19 = *v19 + 3;
    return v2 ^ 24 ^ (v23 & 16 | ((v2 + 112 + v18 + (v18 + (int64_t)v10 + (v3 - (int64_t)(v12 & (int32_t)a2) & v16) & 16 | v7) + v20 - (int64_t)v21 & -0x80000000 ^ (int64_t)L"\n2" | 1) & v3) - 16 ^ v23 & 56 | 64);
}

// Address range: 0xb6c36 - 0xb708d
int64_t function_b6c36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xb6c36
    int64_t v1; // 0xb6c36
    int64_t v2 = v1;
    int64_t v3 = v2 + 368; // 0xb6c45
    int32_t * v4 = (int32_t *)v3; // 0xb6c4c
    int32_t v5 = *v4 & 0x2b7e7713; // 0xb6c4c
    *v4 = v5;
    int32_t * v6 = (int32_t *)(v2 + 35); // 0xb6cf2
    int32_t v7 = *v6; // 0xb6cf2
    int32_t v8 = v5; // 0xb6d00
    if ((v7 & 2) != 0) {
        // 0xb6d06
        *v6 = (v7 & 0x742354d) + 0x2ff05a2b;
        v8 = *v4;
    }
    int64_t v9 = v2 + 129; // 0xb6c79
    int32_t v10 = v8 & 0x515f6307; // 0xb6d5b
    *v4 = v10;
    int64_t * v11 = (int64_t *)(v2 + 10); // 0xb6d8e
    uint32_t v12 = v10 + (int32_t)*(int16_t *)*v11; // 0xb6ddb
    uint32_t v13 = v12 + *v6; // 0xb6e26
    *v4 = v10 - v13;
    *v6 = *v6 & 0x1011ba33;
    int64_t v14 = *(int64_t *)(((int64_t)v13 & (int64_t)&g3) + v2); // 0xb6eb3
    *(int64_t *)(v2 + 96) = v14 - 0x653cf834;
    int32_t v15 = *v4 | *v6; // 0xb6f52
    *v4 = v15;
    *v4 = (int32_t)*(int16_t *)(*v11 + 2) - v15 ^ v15;
    *v11 = *v11 + 4;
    return (((v2 + 112 ^ v9) & 128) - v3 ^ 144) - 0x7fffffff + -2 * (v9 & v2 & ((v2 + 1 | (int64_t)v12) ^ -0x80000000)) | 129;
}

// Address range: 0xb8b42 - 0xb8fcf
int64_t function_b8b42(int64_t a1, int64_t a2) {
    // 0xb8b42
    int64_t v1; // 0xb8b42
    int64_t result = v1;
    int32_t * v2 = (int32_t *)(result + 35); // 0xb8b9a
    int64_t * v3 = (int64_t *)(result + 96); // 0xb8bae
    int32_t * v4 = (int32_t *)(result + 368); // 0xb8bc6
    *v4 = -0x40989976 - *v2 + *v4;
    *v3 = *v3 + 0x653cf834 ^ 0x11d93781;
    *v4 = *v4 | 0x2f39160a;
    *(int64_t *)result = result ^ 0x1c7a8058;
    int32_t v5 = *v2 - (*v4 ^ 0x7af00ac1); // 0xb8cbc
    *v2 = v5;
    int64_t v6 = result ^ 0x11d93781; // 0xb8ce0
    *v2 = v5 ^ 0x3764731 ^ *v4;
    int64_t v7 = *v3 ^ 0x11d93781; // 0xb8d01
    char v8 = *(char *)(result + 404); // 0xb8d12
    int64_t v9 = v6; // 0xb8d19
    int64_t v10; // 0xb8b42
    bool v11; // 0xb8b42
    if (v8 == 98) {
        uint64_t v12 = v7 & v6;
        char v13 = v12; // 0xb8d1f
        int64_t v14 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v13 == 0) | 128 * (int64_t)(v13 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v13) % 2 == 0) | 2; // bp-8, 0xb8d22
        v10 = (int64_t)&v14;
        v9 = v12 % 256 | v6 & -256;
    }
    int64_t v15 = v10; // 0xb8d27
    int64_t v16 = v9; // 0xb8d27
    if (v8 == 50) {
        uint64_t v17 = v9 & v7;
        int16_t v18 = v17; // 0xb8d2d
        int64_t v19 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v18 == 0) | 128 * (int64_t)(v18 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v17) % 2 == 0) | 2; // bp-16, 0xb8d31
        v15 = (int64_t)&v19;
        v16 = v17 % 0x10000 | v9 & -0x10000;
    }
    int64_t v20 = v15; // 0xb8d36
    int64_t v21 = v16; // 0xb8d36
    if (v8 == 80) {
        int64_t v22 = v16 & v7;
        int32_t v23 = v22; // 0xb8d3c
        unsigned char v24 = llvm_ctpop_i8((char)v22); // 0xb8d3c
        v20 = v15 - 8;
        *(int64_t *)v20 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v23 == 0) | 128 * (int64_t)(v23 < 0) | 4 * (int64_t)(v24 % 2 == 0) | 2;
        v21 = v22 & 0xffffffff;
    }
    int64_t v25 = v20; // 0xb8d44
    int64_t v26 = v21; // 0xb8d44
    if (v8 == 58) {
        // 0xb8d4a
        v26 = v21 & v7;
        unsigned char v27 = llvm_ctpop_i8((char)v26); // 0xb8d4a
        v25 = v20 - 8;
        *(int64_t *)v25 = 0x4000 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 4 * (int64_t)(v27 % 2 == 0) | 2;
    }
    int64_t * v28 = (int64_t *)(result + 113); // 0xb8d5f
    *v28 = v26 ^ 0x793dcb8c;
    int32_t v29 = *v2 - *v4; // 0xb8d79
    *v2 = v29;
    int32_t v30 = *v4 ^ (v29 | 0x6ecf352a); // 0xb8d97
    *v4 = v30;
    *v4 = *v2 - 0x344abbda & v30;
    int32_t v31 = *v2; // 0xb8dd5
    if ((v31 & 2) != 0) {
        // 0xb8def
        *v2 = v31 + 0x25af608a;
    }
    // 0xb8e0f
    *v28 = (*v28 ^ 0x793dcb8c) + 0x1a44e4ef;
    int32_t v32 = *v4 ^ *v2; // 0xb8e33
    *v4 = v32;
    int64_t * v33 = (int64_t *)(result + 10); // 0xb8e44
    int64_t v34 = *v33; // 0xb8e44
    int32_t v35 = v32; // 0xb8e6a
    int64_t v36 = v34; // 0xb8e6a
    if (*(char *)(v34 + 4) != 0) {
        // 0xb8e70
        *(int64_t *)(result + (int64_t)*(int16_t *)v34) = *(int64_t *)v25;
        v35 = *v4;
        v36 = *v33;
    }
    int32_t v37 = v35; // 0xb8f47
    *v4 = v37 ^ 0x35363d0a ^ v37 + (int32_t)*(int16_t *)(v36 + 2);
    *v33 = *v33 + 5;
    return result;
}

// Address range: 0xb8fcf - 0xb9451
int64_t function_b8fcf(int64_t a1, int64_t a2) {
    // 0xb8fcf
    int64_t v1; // 0xb8fcf
    int64_t result = v1 + 368; // 0xb8fd5
    int32_t * v2 = (int32_t *)result; // 0xb8fdc
    int32_t * v3 = (int32_t *)(v1 + 35); // 0xb8ff8
    int32_t v4 = *v3 ^ *v2 - 0x35ede369; // 0xb8ff8
    *v3 = (v4 & 2) == 0 ? v4 : v4 - 0x678faa4f;
    int64_t * v5 = (int64_t *)(v1 + 10); // 0xb90cf
    int32_t v6 = *v2; // 0xb9105
    uint32_t v7 = v6 ^ *(int32_t *)*v5; // 0xb9105
    *v2 = v6 - v7;
    *v3 = *v3 - 0x36a041e8;
    uint64_t v8 = *(int64_t *)*v5; // 0xb91e0
    int64_t v9 = v8 < 0xffffffff00000001 ? v8 : v8 + 0xffffffff; // 0xb9203
    *(int64_t *)(v1 + 96) = (v9 | (int64_t)v7) - 0x653cf834;
    *v3 = *v2 - 0x7ff540ae + *v3;
    *v2 = *v2 + 0x477d7abb;
    *v5 = *v5 + 10;
    return result;
}

// Address range: 0xb9451 - 0xb987b
int64_t function_b9451(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int16_t a6, int64_t a7) {
    // 0xb9451
    int64_t v1; // 0xb9451
    int32_t * v2 = (int32_t *)(v1 + 368); // 0xb949b
    int32_t v3 = *v2 & 0x7562ddb5; // 0xb949b
    *v2 = v3;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0xb94ac
    int32_t v5 = v3 ^ 0x25ede89c; // 0xb94b8
    *v2 = v5;
    int32_t v6 = v5; // 0xb94cc
    if ((*v4 & 2) != 0) {
        // 0xb94d2
        *v4 = *v4 ^ 0x285c750c;
        v6 = *v2;
    }
    // 0xb94ec
    *v2 = v6 - 0x19140c1b;
    int64_t v7 = *(int64_t *)(v1 + 129) + 0x1a44e4ef; // 0xb95a3
    int64_t result = v1 + 10; // 0xb95cd
    int64_t * v8 = (int64_t *)result; // 0xb95eb
    int64_t v9 = v1 + (int64_t)*(int16_t *)*v8; // 0xb9617
    int64_t v10 = v9 != v7 ? v9 : 0;
    if (*(char *)(v1 + 404) != 50) {
        // 0xb9696
        *(int64_t *)v7 = a7;
        if (v10 != 0) {
            int64_t * v11 = (int64_t *)v10; // 0xb96bd
            *v11 = *v11 + 8;
        }
    } else {
        // 0xb9658
        *(int16_t *)v7 = a6;
        if (v10 != 0) {
            int64_t * v12 = (int64_t *)v10; // 0xb966e
            *v12 = *v12 + 2;
        }
    }
    int32_t v13 = *v2 ^ *v4; // 0xb96fb
    *v2 = v13;
    *v2 = (int32_t)*(int16_t *)(*v8 + 2) ^ 0x42c7f071 | v13;
    *v8 = *v8 + 4;
    return result;
}

// Address range: 0xbada5 - 0xbb1dd
int64_t function_bada5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xbada5
    int64_t v1; // 0xbada5
    int64_t v2 = v1;
    *(int64_t *)v2 = (v2 ^ 0xda3b7d9) + 0x41b69ee3;
    int64_t * v3 = (int64_t *)(v2 + 96); // 0xbae20
    *v3 = *v3 + 0x653cf834 ^ 0x41b69ee3;
    int32_t * v4 = (int32_t *)(v2 + 35); // 0xbae52
    int64_t v5 = v2 - 0x41b69ee3; // 0xbae57
    int32_t * v6 = (int32_t *)(v2 + 368); // 0xbae68
    *v6 = *v6 & *v4;
    int64_t v7 = *v3; // 0xbae75
    uint64_t v8 = v7 ^ 0x41b69ee3; // 0xbae78
    char v9 = *(char *)(v2 + 404); // 0xbae89
    int64_t v10 = v5; // 0xbae90
    int64_t v11; // 0xbada5
    bool v12; // 0xbada5
    if (v9 == 98) {
        unsigned char v13 = (char)v5; // 0xbae96
        unsigned char v14 = (char)v8; // 0xbae96
        unsigned char v15 = v14 + v13; // 0xbae96
        int64_t v16 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v15 < v13) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 16 * (int64_t)(v14 % 16 + v13 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v15) % 2 == 0) | 2048 * (int64_t)(((v15 ^ v13) & (v15 ^ v14)) < 0) | 2; // bp-8, 0xbae99
        v11 = (int64_t)&v16;
        v10 = v5 & -256 | (int64_t)v15;
    }
    int64_t v17 = v11; // 0xbae9e
    int64_t v18 = v10; // 0xbae9e
    if (v9 == 50) {
        uint16_t v19 = (int16_t)v10; // 0xbaea4
        uint16_t v20 = (int16_t)v8; // 0xbaea4
        uint16_t v21 = v19 + v20; // 0xbaea4
        int64_t v22 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v21 < v19) | 64 * (int64_t)(v21 == 0) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(v19 % 16 + v20 % 16 > 15) | 2048 * (int64_t)(((v21 ^ v19) & (v21 ^ v20)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v21) % 2 == 0) | 2; // bp-16, 0xbaea8
        v17 = (int64_t)&v22;
        v18 = v10 & -0x10000 | (int64_t)v21;
    }
    int64_t v23 = v17; // 0xbaead
    int64_t v24 = v18; // 0xbaead
    if (v9 == 80) {
        uint32_t v25 = (int32_t)v18; // 0xbaeb3
        uint32_t v26 = (int32_t)v8; // 0xbaeb3
        uint32_t v27 = v25 + v26; // 0xbaeb3
        unsigned char v28 = llvm_ctpop_i8((char)v27); // 0xbaeb3
        v23 = v17 - 8;
        *(int64_t *)v23 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v27 < v25) | 64 * (int64_t)(v27 == 0) | 128 * (int64_t)(v27 < 0) | 16 * (int64_t)(v25 % 16 + v26 % 16 > 15) | 2048 * (int64_t)(((v27 ^ v25) & (v27 ^ v26)) < 0) | 4 * (int64_t)(v28 % 2 == 0) | 2;
        v24 = v27;
    }
    uint64_t v29 = v24;
    int64_t * v30; // 0xbada5
    int64_t v31; // 0xbada5
    if (v9 != 58) {
        // 0xbaeb7
        v30 = (int64_t *)v23;
        v31 = v29;
    } else {
        int64_t v32 = v29 + v8; // 0xbaec1
        unsigned char v33 = llvm_ctpop_i8((char)v32); // 0xbaec1
        int64_t * v34 = (int64_t *)(v23 - 8);
        *v34 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | (int64_t)(v32 < v29) | 64 * (int64_t)(v32 == 0) | 128 * (int64_t)(v32 < 0) | 16 * (int64_t)(v29 % 16 + v8 % 16 > 15) | 2048 * (int64_t)(((v32 ^ v29) & (v32 ^ v7)) < 0) | 4 * (int64_t)(v33 % 2 == 0) | 2;
        v30 = v34;
        v31 = v32;
    }
    int64_t * v35 = (int64_t *)(v2 + 113); // 0xbaed5
    *v35 = v31 - 0x2b25273e;
    *v6 = *v6 - *v4;
    *v35 = *v35 + 0x456a0c2d;
    int64_t * v36 = (int64_t *)(v2 + 10); // 0xbafd4
    int32_t v37 = *v6 - 0x7e143884; // 0xbafd8
    *v6 = v37;
    int32_t v38 = v37; // 0xbb012
    if (*(char *)*v36 != 0) {
        // 0xbb018
        *(int64_t *)(v2 + (int64_t)*(int16_t *)(*v36 + 1)) = *v30;
        v38 = *v6;
    }
    int64_t v39 = *v36; // 0xbb0d4
    uint16_t v40 = *(int16_t *)(v39 + 3); // 0xbb0f7
    *v36 = v39 + 5;
    return (int64_t)((int32_t)v40 - v38) & (int64_t)&g3;
}

// Address range: 0xbd8af - 0xbdd18
int64_t function_bd8af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xbda62
    int64_t v1; // 0xbd8af
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 368); // 0xbd8b9
    int32_t * v4 = (int32_t *)(v2 + 35); // 0xbd8d0
    int32_t v5 = *v4 ^ *v3; // 0xbd8d0
    *v4 = v5;
    int32_t v6 = (*v3 ^ (v5 | 0x37ccc6ea)) - 0x61e56767; // 0xbd918
    *v3 = v6;
    int32_t v7 = v6 & *v4; // 0xbd980
    *v3 = v7;
    int32_t v8 = (*v4 | 0x71cc1ee8) + v7; // 0xbd9ae
    *v3 = v8 | 0x569ecec3;
    int32_t v9 = ((v8 | *v4) & 0x3010 | 0x491c0382) - 0x69576a7a;
    *v4 = v9;
    int64_t * v10 = (int64_t *)(v2 + 10); // 0xbda9e
    uint16_t v11 = *(int16_t *)(*v10 + 2); // 0xbdaab
    *v4 = v9 & 0x4280b118;
    *(int64_t *)(v2 + 129) = v2 - 0x1a44e4ef + ((int64_t)v11 & (int64_t)&g3);
    *v3 = (int32_t)*(int16_t *)*v10;
    *v10 = *v10 + 4;
    return (int64_t)&g2 + (int64_t)&g3 - (int64_t)&g2 ^ 4;
}

// Address range: 0xbf435 - 0xbf889
int64_t function_bf435(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xbf435
    int64_t v1; // 0xbf435
    int32_t * v2 = (int32_t *)(v1 + 35); // 0xbf47e
    int32_t v3 = *v2; // 0xbf47e
    if ((v3 & 2) != 0) {
        // 0xbf495
        *v2 = (v3 & 0x7036ca68) - 0x2caa6796;
    }
    int32_t * v4 = (int32_t *)(v1 + 368); // 0xbf4be
    int32_t v5 = *v4 - 0x2b2e5a26 ^ 0x7535dd25; // 0xbf4f6
    *v4 = v5;
    int64_t v6 = v1 + 113; // 0xbf506
    int64_t v7 = v1 + 404; // 0xbf516
    int64_t v8 = v1 + 10; // 0xbf53f
    int64_t v9 = v1 - 0x5aa654f7 + 2 * (*(int64_t *)v6 + a5) ^ v8; // 0xbf549
    int64_t * v10 = (int64_t *)v8; // 0xbf556
    int64_t v11 = *v10; // 0xbf556
    int64_t v12 = v11 | (int64_t)&g2; // 0xbf560
    uint16_t v13 = *(int16_t *)(v11 + 2); // 0xbf57a
    int64_t v14 = v13; // 0xbf57a
    int64_t v15 = v9 + 120 & v12; // 0xbf585
    *v4 = v5 | (int32_t)v13;
    int64_t v16 = (v15 & v12 - 128 ^ v15 - 32) - (int64_t)&g3 ^ v7; // 0xbf63d
    *v2 = *v2 ^ 0x4ea9d032;
    int64_t v17 = ((v15 + (int64_t)&g2 - 32 ^ v14) - v14 & 32) - 8; // 0xbf67f
    int64_t v18 = *(int64_t *)((v14 & (int64_t)&g3) + v1); // 0xbf6a0
    *(int64_t *)v1 = v18 ^ 0xda3b7d9;
    *(char *)(v1 + 367) = 1;
    *v4 = -0x9097995 - (int32_t)*(int16_t *)*v10;
    *v10 = *v10 + 4;
    return ((((v9 ^ v6) & 32) + v7 & -162 | 32) & v15 | 1) - 128 - ((v17 & v16) - (v16 | (int64_t)&g2 | v17) & 120);
}

// Address range: 0xc1926 - 0xc1d48
int64_t function_c1926(void) {
    // 0xc1926
    int64_t v1; // 0xc1926
    int32_t * v2 = (int32_t *)(v1 + 368); // 0xc194a
    int32_t v3 = *v2; // 0xc194a
    *v2 = v3 + 0x5c4fb994;
    int32_t * v4 = (int32_t *)(v1 + 35); // 0xc1993
    *v4 = *v4 & v3 - 0x7d911f5d;
    int32_t v5 = *v2 - 0x33be5a8b; // 0xc1a13
    *v2 = v5;
    int32_t v6 = *v4 ^ v5; // 0xc1a30
    *v2 = v6;
    int64_t * v7 = (int64_t *)(v1 + 10); // 0xc1a51
    uint32_t v8 = v6 ^ (int32_t)*(int16_t *)*v7; // 0xc1aac
    *v2 = v8 & v6;
    *v4 = *v4 - 0x35f71c01;
    int64_t v9 = *(int64_t *)(((int64_t)v8 & (int64_t)&g3) + v1); // 0xc1b89
    *(int64_t *)(v1 + 96) = v9 - 0x653cf834;
    int32_t v10 = *v2; // 0xc1c7f
    uint32_t v11 = (int32_t)*(int16_t *)(*v7 + 2) ^ 0x678e3cb6 ^ v10; // 0xc1c90
    *v2 = v11 & v10;
    *v7 = *v7 + 4;
    return *(int64_t *)(v1 + 271) + (int64_t)(v11 % 0x10000);
}

// Address range: 0xc1d4b - 0xc1d56
int64_t function_c1d4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xc1d4b
    int64_t v1; // 0xc1d4b
    char * v2 = (char *)(2 * v1); // 0xc1d4b
    *v2 = *v2 + (char)v1;
    char * v3 = (char *)(a4 - 119); // 0xc1d4e
    *v3 = *v3 + (char)a4;
    return function_48d8a6a3();
}
