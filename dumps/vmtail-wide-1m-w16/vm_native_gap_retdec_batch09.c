/*
 * Targeted RetDec C for native executable gap queue batch 9.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x48e480-0x48e5f4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2690-0x4d2804 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50cac0-0x50cc34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d980-0x2daf3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x549ac-0x54b1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x55c6e-0x55de1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x59cd2-0x59e45 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50c440-0x50c5b3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fd550-0x4fd6c1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c87e-0x4c9ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2270-0x4d23e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5001a-0x50189 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6837a-0x684e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a578-0x4a6e5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2808e-0x281fa rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b9df0-0x4b9f5c rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
typedef int32_t int3_t;
typedef float float32_t;
typedef double float64_t;
typedef long double float80_t;
struct __locale_struct;
struct _TYPEDEF___mbstate_t;
struct _IO_FILE;
struct utsname;
extern int g1;
extern int g2;
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g7;
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1(int32_t interrupt);
int64_t __asm_int3(void);
int32_t __asm_in(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
int64_t __asm_iretd(void);
void __asm_rcl(int32_t value);
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt(void);
int64_t __asm_mfence(void);
void __stack_chk_fail(void);
int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);
int128_t __asm_movsd(int64_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
int128_t __asm_movdqu(int128_t value);
void __asm_movdqu_133();
int128_t __asm_movapd(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_cmpnlesd(int128_t left, int128_t right);
int128_t __asm_cvtsi2sd(int64_t value);
int128_t __asm_subsd(int128_t left, int128_t right);
int64_t __asm_cvttsd2si(int128_t value);
void __asm_ucomisd(int128_t left, int128_t right);
int128_t __asm_movups();
void __asm_movups_133();
int128_t __asm_movaps(int128_t value);
float80_t __frontend_reg_load_fpr(int32_t reg);
void __frontend_reg_store_fpr(int32_t reg, float80_t value);
char *__nl_langinfo_l(int32_t item, struct __locale_struct *locale);
struct __locale_struct *__uselocale(struct __locale_struct *locale);
char *dgettext(char *domain, char *msgid);
char *gettext(char *msgid);
char *bind_textdomain_codeset(char *domainname, char *codeset);
struct _IO_FILE *fopen(const char *path, const char *mode);
size_t fread(void *ptr, size_t size, size_t nmemb, struct _IO_FILE *stream);
int fclose(struct _IO_FILE *stream);
int uname(struct utsname *buf);
int64_t __tls_get_addr(void *arg);
int32_t mbrtowc(int32_t *pwc, const char *s, size_t n, struct _TYPEDEF___mbstate_t *ps);
int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcslen(const int32_t *s);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int64_t readlink(const char *path, char *buf, size_t bufsiz);
char *realpath(const char *path, char *resolved_path);
char *strdup(const char *s);
struct _Unwind_Exception;
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_163589();
int64_t function_20110();
int64_t function_20730();
int64_t function_221a8();
int64_t function_25018();
int64_t function_25856();
int64_t function_2601b();
int64_t function_260ec();
int64_t function_260f8();
int64_t function_26206();
int64_t function_27df1();
int64_t function_2808e();
int64_t function_29c3a();
int64_t function_2d980();
int64_t function_2d9c4();
int64_t function_2d9d7();
int64_t function_35c52();
int64_t function_35fcc();
int64_t function_36966();
int64_t function_36b3c();
int64_t function_48d707();
int64_t function_48e480();
int64_t function_48f5c8();
int64_t function_4a578();
int64_t function_4ae54();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b1080();
int64_t function_4b1680();
int64_t function_4b1ac0();
int64_t function_4b3cf0();
int64_t function_4b95a0();
int64_t function_4b9df0();
int64_t function_4c14d0();
int64_t function_4c7ae();
int64_t function_4c7c2();
int64_t function_4c858();
int64_t function_4c87e();
int64_t function_4d1ea0();
int64_t function_4d1f80();
int64_t function_4d2270();
int64_t function_4d2690();
int64_t function_4d2af0();
int64_t function_4d2c90();
int64_t function_4d30e0();
int64_t function_4d4560();
int64_t function_4d4710();
int64_t function_4d4790();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4fbd10();
int64_t function_4fd550();
int64_t function_5001a();
int64_t function_50ab00();
int64_t function_50c440();
int64_t function_50c490();
int64_t function_50cac0();
int64_t function_527fe();
int64_t function_5423b0();
int64_t function_5423f0();
int64_t function_549ac();
int64_t function_54b20();
int64_t function_55c6e();
int64_t function_566390();
int64_t function_56dd30();
int64_t function_599ba();
int64_t function_59cd2();
int64_t function_67ce4();
int64_t function_6837a();
int64_t function_68b30();
int64_t function_68ba4();
int64_t function_68c00();
int64_t function_68c1c();
int64_t function_68d1a();

// Address range: 0x2808e - 0x281fa
int64_t function_2808e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result; // 0x2808e
    if (a4 == a3) {
        // 0x281ed
        return result;
    }
    int64_t v1 = a4 - a3; // 0x280aa
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x280b4
    int64_t v3 = *v2; // 0x280b4
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x280b8
    if (*v4 - v3 < v1) {
        int64_t v5 = function_25856(); // 0x2817e
        int64_t v6 = function_260f8(v5); // 0x28189
        int64_t v7 = function_2601b(v5, a2, v6, a4); // 0x2819a
        int64_t v8 = 0; // 0x281aa
        if (v1 >= 1) {
            int64_t v9 = 0;
            *(char *)(v9 + v7) = *(char *)(v9 + a3);
            int64_t v10 = v9 + 1; // 0x281b3
            v8 = v1;
            while (v10 != v1) {
                // 0x281ac
                v9 = v10;
                *(char *)(v9 + v7) = *(char *)(v9 + a3);
                v10 = v9 + 1;
                v8 = v1;
            }
        }
        int64_t v11 = function_2601b(a2, *v2, v7 + (v1 > 0 ? v1 : 0), v8); // 0x281cf
        function_260ec(a2);
        *(int64_t *)a1 = v6;
        *v2 = v11;
        *v4 = v6 + v5;
        // 0x281ed
        return result;
    }
    int64_t v12 = v3 - a2; // 0x280cb
    if (v1 < v12) {
        int64_t v13 = v3 - v1; // 0x280dc
        function_26206(v13, v3, v3);
        *v2 = *v2 + v1;
        function_27df1(a2, v13, v3);
        if (v1 < 1) {
            // 0x281ed
            return result;
        }
        int64_t v14 = 0;
        *(char *)(v14 + a2) = *(char *)(v14 + a3);
        int64_t v15 = v14 + 1; // 0x28112
        while (v15 != v1) {
            // 0x2810a
            v14 = v15;
            *(char *)(v14 + a2) = *(char *)(v14 + a3);
            v15 = v14 + 1;
        }
        // 0x281ed
        return result;
    }
    int64_t v16 = v12 + a3; // 0x28117
    uint64_t v17 = a4 - v16; // 0x2811d
    int64_t v18 = v3; // 0x28129
    if (v17 >= 1) {
        int64_t v19 = 0;
        *(char *)(v19 + v3) = *(char *)(v19 + v16);
        int64_t v20 = v19 + 1; // 0x28134
        while (v20 != v17) {
            // 0x2812b
            v19 = v20;
            *(char *)(v19 + v3) = *(char *)(v19 + v16);
            v20 = v19 + 1;
        }
        // 0x28120
        v18 = *v2;
    }
    int64_t v21 = v18 + v1 - v12; // 0x28146
    *v2 = v21;
    function_26206(a2, v3, v21);
    *v2 = *v2 + v12;
    if (v12 < 1) {
        // 0x281ed
        return result;
    }
    int64_t v22 = 0;
    *(char *)(v22 + a2) = *(char *)(v22 + a3);
    int64_t v23 = v22 + 1; // 0x2816f
    while (v23 != v12) {
        // 0x28167
        v22 = v23;
        *(char *)(v22 + a2) = *(char *)(v22 + a3);
        v23 = v22 + 1;
    }
    // 0x281ed
    return result;
}

// Address range: 0x2d980 - 0x2d9ae
int64_t function_2d980(int64_t a1) {
    // 0x2d980
    __readfsqword(40);
    return function_163589();
}

// Address range: 0x2d9c4 - 0x2d9c5
int64_t function_2d9c4(void) {
    // 0x2d9c4
    int64_t result; // 0x2d9c4
    return result;
}

// Address range: 0x2d9d7 - 0x2daf3
int64_t function_2d9d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d9d7
    __asm_rcl(*(int32_t *)(a4 - 0x6a4fb94));
    int64_t result = __asm_int3(); // 0x2dacf
    int64_t v1; // 0x2d9d7
    if ((char)v1 != 0) {
        // 0x2da82
        return __asm_hlt();
    }
    char * v2 = (char *)(result + 62 & 0xffffffff); // 0x2dad4
    *v2 = *v2 ^ (char)result;
    int32_t v3 = result; // 0x2dad8
    __asm_out((int16_t)a3, v3);
    int32_t * v4 = (int32_t *)(v1 + 115); // 0x2dada
    *v4 = *v4 - v3;
    return result;
}

// Address range: 0x4a578 - 0x4a6e5
int64_t function_4a578(int64_t a1, int64_t a2, uint64_t a3, int64_t result) {
    int64_t v1 = a1 + 32; // 0x4a593
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x4a59b
    uint64_t v3 = *v2; // 0x4a59b
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x4a59f
    int64_t v5 = function_4fbd10(v1, *v4, v3, 1); // 0x4a5a3
    int64_t v6 = 1; // 0x4a5aa
    int64_t v7 = v1; // 0x4a5aa
    int64_t v8 = a2; // 0x4a5aa
    if ((char)v5 != 0) {
        int64_t v9; // 0x4a578
        int64_t v10; // 0x4a578
        if (v3 != 1) {
            if (v3 >= 0x2000000000000000) {
                // 0x4a5d6
                function_5423b0();
            }
            int64_t v11 = 8 * v3; // 0x4a5db
            int64_t v12 = function_4efd30(v11); // 0x4a5e6
            __asm_rep_stosb_memset((char *)v12, 0, v11);
            bool v13; // 0x4a578
            v10 = v12 + v11 * (v13 ? -1 : 1);
            v9 = v12;
        } else {
            int64_t v14 = a1 + 48; // 0x4a5b9
            *(int64_t *)v14 = 0;
            v10 = v1;
            v9 = v14;
        }
        int64_t v15 = a1 + 16; // 0x4a5f8
        int64_t * v16 = (int64_t *)v15; // 0x4a5fc
        int64_t v17 = *v16; // 0x4a5fc
        *v16 = 0;
        int64_t v18 = 0; // 0x4a60d
        int64_t v19 = v10; // 0x4a60d
        if (v17 != 0) {
            int64_t v20 = 0;
            int64_t * v21 = (int64_t *)v17; // 0x4a614
            int64_t v22 = *v21; // 0x4a614
            int64_t v23 = (int64_t)*(int32_t *)(v17 + 8) % v3; // 0x4a617
            int64_t * v24 = (int64_t *)(8 * v23 + v9); // 0x4a61f
            int64_t v25 = *v24; // 0x4a61f
            int64_t v26; // 0x4a578
            if (v25 != 0) {
                // 0x4a64a
                *v21 = *(int64_t *)v25;
                *(int64_t *)*v24 = v17;
                v26 = v20;
            } else {
                // 0x4a627
                *v21 = *v16;
                *v16 = v17;
                *v24 = v15;
                v26 = v23;
                if (*v21 != 0) {
                    // 0x4a643
                    *(int64_t *)(8 * v20 + v9) = v17;
                    v26 = v23;
                }
            }
            // 0x4a63b
            v18 = v26;
            v19 = 0;
            while (v22 != 0) {
                int64_t v27 = v22;
                v20 = v26;
                v21 = (int64_t *)v27;
                v22 = *v21;
                v23 = (int64_t)*(int32_t *)(v27 + 8) % v3;
                v24 = (int64_t *)(8 * v23 + v9);
                v25 = *v24;
                if (v25 != 0) {
                    // 0x4a64a
                    *v21 = *(int64_t *)v25;
                    *(int64_t *)*v24 = v27;
                    v26 = v20;
                } else {
                    // 0x4a627
                    *v21 = *v16;
                    *v16 = v27;
                    *v24 = v15;
                    v26 = v23;
                    if (*v21 != 0) {
                        // 0x4a643
                        *(int64_t *)(8 * v20 + v9) = v27;
                        v26 = v23;
                    }
                }
                // 0x4a63b
                v18 = v26;
                v19 = 0;
            }
        }
        // 0x4a65b
        v7 = v19;
        if (v7 != a1 + 48) {
            // 0x4a667
            function_4eeb50(v7, v18);
        }
        // 0x4a66c
        *(int64_t *)a1 = v9;
        *v4 = v3;
        v6 = 0;
        v8 = a3 % v3;
    }
    int64_t * v28 = (int64_t *)(8 * v8 + v7); // 0x4a689
    int64_t v29 = *v28; // 0x4a689
    if (v29 != 0) {
        // 0x4a692
        *(int64_t *)result = *(int64_t *)v29;
        *(int64_t *)*v28 = result;
        // 0x4a6d2
        *v2 = *v2 + 1;
        return result;
    }
    int64_t v30 = a1 + 16; // 0x4a6a5
    int64_t * v31 = (int64_t *)v30; // 0x4a6a5
    *(int64_t *)result = *v31;
    *v31 = result;
    if (v6 != 0) {
        uint32_t v32 = *(int32_t *)(v6 | 8); // 0x4a6bd
        *(int64_t *)(8 * ((int64_t)v32 % *v4) + v7) = result;
    }
    // 0x4a6ca
    *v28 = v30;
    // 0x4a6d2
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0x4c87e - 0x4c9ee
int64_t function_4c87e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4c886
    int32_t v2 = a3; // 0x4c896
    int64_t v3 = 0; // 0x4c898
    int64_t v4 = 0; // 0x4c898
    int32_t v5; // 0x4c87e
    int64_t v6; // 0x4c8ab
    int64_t v7; // 0x4c8b4
    int32_t v8; // 0x4c87e
    if (v2 == 0) {
        goto lab_0x4c9cf;
    } else {
        int64_t v9 = function_4c7ae(); // 0x4c8a4
        v6 = v9 % 256;
        v3 = v9;
        v4 = v6;
        if ((char)v9 == 0) {
            goto lab_0x4c9cf;
        } else {
            uint32_t v10 = *(int32_t *)(a2 + 4); // 0x4c8b4
            v7 = v10;
            if (v10 == 5) {
                // 0x4c9b9
                v8 = v2 - 11;
                v5 = 10;
                goto lab_0x4c9c1;
            } else {
                if (v10 < 6) {
                    switch (v10) {
                        case 2: {
                            if (v2 < 28) {
                                goto lab_0x4c9c3;
                            } else {
                                // 0x4c909
                                if (*(char *)(a2 + 8) % 2 != 0) {
                                    int128_t v11 = __asm_movsd(0x408f400000000000); // 0x4c93c
                                    int128_t v12 = __asm_cvtsi2sd((int32_t)*(int16_t *)(a2 + 16)); // 0x4c944
                                    int128_t v13 = __asm_divsd_133(v11, __asm_divsd(v12, 0x4024000000000000)); // 0x4c955
                                    __asm_ucomisd(v13, 0x4040800000000000);
                                    *(int32_t *)(a1 + 56) = (int32_t)__asm_cvttsd2si(v13);
                                    uint16_t v14 = *(int16_t *)(a2 + 18); // 0x4c96b
                                    if (v14 - 1 <= (int16_t)&g1) {
                                        // 0x4c979
                                        *(int64_t *)(a1 + 64) = (int64_t)v14;
                                    }
                                    // 0x4c97d
                                    *(int64_t *)(a1 + 72) = (int64_t)*(int16_t *)(a2 + 20);
                                    *(int64_t *)(a1 + 80) = (int64_t)*(int16_t *)(a2 + 22);
                                    *(int64_t *)(a1 + 88) = (int64_t)*(int16_t *)(a2 + 24);
                                    int64_t v15 = (int64_t)*(int16_t *)(a2 + 26); // 0x4c995
                                    *(int64_t *)(a1 + 96) = v15;
                                    v3 = v15;
                                    v4 = v6;
                                    goto lab_0x4c9cf;
                                } else {
                                    // 0x4c90f
                                    function_4c858();
                                    goto lab_0x4c9c3;
                                }
                            }
                        }
                        case 3: {
                            if (v2 < 20) {
                                goto lab_0x4c9c3;
                            } else {
                                int64_t v16 = function_4c7c2(); // 0x4c9a4
                                v3 = v16;
                                v4 = v6;
                                if ((char)v16 == 0) {
                                    // 0x4c9ad
                                    v3 = function_4ae54(a1, 0);
                                    v4 = v6;
                                }
                                goto lab_0x4c9cf;
                            }
                        }
                        default: {
                            // 0x4c8d0
                            v3 = v7;
                            v4 = v6;
                            if (v10 != 0) {
                                goto lab_0x4c9cf;
                            } else {
                                goto lab_0x4c9c3;
                            }
                        }
                    }
                } else {
                    switch (v10) {
                        case 10: {
                            // 0x4c9be
                            v8 = v2 - 8;
                            v5 = 7;
                            goto lab_0x4c9c1;
                        }
                        case 15: {
                            goto lab_0x4c9c3;
                        }
                        default: {
                            // 0x4c8ef
                            v3 = v7;
                            v4 = v6;
                            if (v10 != 7) {
                                goto lab_0x4c9cf;
                            } else {
                                // 0x4c8f8
                                v8 = v2 - 7;
                                v5 = 6;
                                goto lab_0x4c9c1;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4c9cf:;
    int64_t result = v3 & -256 | v4; // 0x4c9e0
    if (v1 != __readfsqword(40)) {
        // 0x4c9e2
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x4c9e7
    return result;
  lab_0x4c9c1:;
    int32_t v17 = v8;
    v3 = v7;
    v4 = v6;
    if (v17 < 0 == (v5 - v2 & v2) < 0 == (v17 != 0)) {
        goto lab_0x4c9cf;
    } else {
        goto lab_0x4c9c3;
    }
  lab_0x4c9c3:
    // 0x4c9c3
    v3 = function_4ae54(a1, 0);
    v4 = 0;
    goto lab_0x4c9cf;
}

// Address range: 0x5001a - 0x50189
int64_t function_5001a(int64_t a1, int64_t a2, uint64_t a3, int64_t result) {
    int64_t v1 = a1 + 32; // 0x50035
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x5003d
    uint64_t v3 = *v2; // 0x5003d
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x50041
    int64_t v5 = function_4fbd10(v1, *v4, v3, 1); // 0x50045
    int64_t v6 = 1; // 0x5004c
    int64_t v7 = v1; // 0x5004c
    int64_t v8 = a2; // 0x5004c
    if ((char)v5 != 0) {
        int64_t v9; // 0x5001a
        int64_t v10; // 0x5001a
        if (v3 != 1) {
            if (v3 >= 0x2000000000000000) {
                // 0x50078
                function_5423b0();
            }
            int64_t v11 = 8 * v3; // 0x5007d
            int64_t v12 = function_4efd30(v11); // 0x50088
            __asm_rep_stosb_memset((char *)v12, 0, v11);
            bool v13; // 0x5001a
            v10 = v12 + v11 * (v13 ? -1 : 1);
            v9 = v12;
        } else {
            int64_t v14 = a1 + 48; // 0x5005b
            *(int64_t *)v14 = 0;
            v10 = v1;
            v9 = v14;
        }
        int64_t v15 = a1 + 16; // 0x5009a
        int64_t * v16 = (int64_t *)v15; // 0x5009e
        int64_t v17 = *v16; // 0x5009e
        *v16 = 0;
        int64_t v18 = 0; // 0x500af
        int64_t v19 = v10; // 0x500af
        if (v17 != 0) {
            int64_t v20 = 0;
            int64_t * v21 = (int64_t *)v17; // 0x500b7
            int64_t v22 = *v21; // 0x500b7
            int64_t v23 = *(int64_t *)(v17 + 8) % v3;
            int64_t * v24 = (int64_t *)(8 * v23 + v9); // 0x500c2
            int64_t v25 = *v24; // 0x500c2
            int64_t v26; // 0x5001a
            int64_t v27; // 0x5001a
            int64_t v28; // 0x500ca
            if (v25 != 0) {
                // 0x500ed
                *v21 = *(int64_t *)v25;
                *(int64_t *)*v24 = v17;
                v27 = v20;
                v26 = v25;
            } else {
                // 0x500ca
                v28 = *v16;
                *v21 = v28;
                *v16 = v17;
                *v24 = v15;
                v27 = v23;
                v26 = v28;
                if (*v21 != 0) {
                    // 0x500e6
                    *(int64_t *)(8 * v20 + v9) = v17;
                    v27 = v23;
                    v26 = v28;
                }
            }
            // 0x500de
            v18 = v27;
            v19 = v26;
            while (v22 != 0) {
                int64_t v29 = v22;
                v20 = v27;
                v21 = (int64_t *)v29;
                v22 = *v21;
                v23 = *(int64_t *)(v29 + 8) % v3;
                v24 = (int64_t *)(8 * v23 + v9);
                v25 = *v24;
                if (v25 != 0) {
                    // 0x500ed
                    *v21 = *(int64_t *)v25;
                    *(int64_t *)*v24 = v29;
                    v27 = v20;
                    v26 = v25;
                } else {
                    // 0x500ca
                    v28 = *v16;
                    *v21 = v28;
                    *v16 = v29;
                    *v24 = v15;
                    v27 = v23;
                    v26 = v28;
                    if (*v21 != 0) {
                        // 0x500e6
                        *(int64_t *)(8 * v20 + v9) = v29;
                        v27 = v23;
                        v26 = v28;
                    }
                }
                // 0x500de
                v18 = v27;
                v19 = v26;
            }
        }
        // 0x500fe
        v7 = v19;
        if (v7 != a1 + 48) {
            // 0x5010a
            function_4eeb50(v7, v18);
        }
        // 0x5010f
        *(int64_t *)a1 = v9;
        *v4 = v3;
        v6 = 0;
        v8 = a3 % v3;
    }
    int64_t * v30 = (int64_t *)(8 * v8 + v7); // 0x5012c
    int64_t v31 = *v30; // 0x5012c
    if (v31 != 0) {
        // 0x50135
        *(int64_t *)result = *(int64_t *)v31;
        *(int64_t *)*v30 = result;
        // 0x50176
        *v2 = *v2 + 1;
        return result;
    }
    int64_t v32 = a1 + 16; // 0x50148
    int64_t * v33 = (int64_t *)v32; // 0x50148
    *(int64_t *)result = *v33;
    *v33 = result;
    if (v6 != 0) {
        // 0x50160
        *(int64_t *)(8 * (*(int64_t *)(v6 | 8) % *v4) + v7) = result;
    }
    // 0x5016e
    *v30 = v32;
    // 0x50176
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0x549ac - 0x54b1f
int64_t function_549ac(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x549ce
    int64_t v2 = 0xfffffffffffffff; // 0x549f6
    int64_t v3; // 0x549ac
    int64_t v4; // 0x549ac
    int64_t v5; // 0x549ac
    if (v2 > 0xfffffffffffffff | v2 < *v1 - a1 >> 4) {
        goto lab_0x54b0b;
    } else {
        // 0x54a05
        v3 = v2;
        v4 = a1;
        v5 = 0;
        if (v2 != 0) {
            goto lab_0x54b0b;
        } else {
            goto lab_0x54a11;
        }
    }
  lab_0x54b0b:;
    int64_t v6 = 16 * v2; // 0x54b0e
    int64_t v7 = function_4efd30(v6); // 0x54b12
    v3 = v2;
    v4 = v6;
    v5 = v7;
    goto lab_0x54a11;
  lab_0x54a11:;
    int64_t v8 = v5 + a2 - a1; // 0x54a14
    *(int64_t *)a3 = 0;
    *(int64_t *)v8 = a1;
    int64_t * v9 = (int64_t *)(a3 + 8); // 0x54a22
    *v9 = 0;
    *(int64_t *)(v8 + 8) = *v9;
    int64_t v10 = v5; // 0x54a43
    if (v4 != a2) {
        int64_t * v11 = (int64_t *)v4; // 0x54a45
        int64_t * v12 = (int64_t *)(v10 + 8); // 0x54a48
        *v12 = 0;
        int64_t v13 = v4 + 16; // 0x54a50
        *(int64_t *)v10 = *v11;
        int64_t * v14 = (int64_t *)(v4 + 8); // 0x54a58
        *v14 = 0;
        *v12 = *v14;
        *v11 = 0;
        int64_t v15 = v13; // 0x54a43
        v10 += 16;
        while (v13 != a2) {
            // 0x54a45
            v11 = (int64_t *)v15;
            v12 = (int64_t *)(v10 + 8);
            *v12 = 0;
            v13 = v15 + 16;
            *(int64_t *)v10 = *v11;
            v14 = (int64_t *)(v15 + 8);
            *v14 = 0;
            *v12 = *v14;
            *v11 = 0;
            v15 = v13;
            v10 += 16;
        }
    }
    int64_t v16 = *v1; // 0x54a75
    int64_t v17 = v5 + 16 + (a2 - v4 & -16); // 0x54a83
    int64_t v18 = a2; // 0x54a8e
    int64_t v19 = v17; // 0x54a8e
    if (v16 != a2) {
        int64_t * v20 = (int64_t *)a2; // 0x54a9e
        int64_t v21 = a2 + 16; // 0x54aa5
        *(int64_t *)v19 = *v20;
        int64_t * v22 = (int64_t *)(a2 + 8); // 0x54aad
        int64_t v23 = *v22; // 0x54aad
        *v22 = 0;
        *(int64_t *)(v19 + 8) = v23;
        *v20 = 0;
        v18 = v23;
        int64_t v24 = v21; // 0x54a8e
        v19 += 16;
        while (v16 != v21) {
            // 0x54a9e
            v20 = (int64_t *)v24;
            v21 = v24 + 16;
            *(int64_t *)v19 = *v20;
            v22 = (int64_t *)(v24 + 8);
            v23 = *v22;
            *v22 = 0;
            *(int64_t *)(v19 + 8) = v23;
            *v20 = 0;
            v18 = v23;
            v24 = v21;
            v19 += 16;
        }
    }
    int64_t v25 = v4; // 0x54aca
    if (v16 != v4) {
        int64_t v26 = v4 + 8; // 0x54acc
        int64_t v27 = v4 + 16; // 0x54ad0
        function_35fcc(v26);
        int64_t v28 = v27; // 0x54aca
        v25 = v26;
        while (v16 != v27) {
            // 0x54acc
            v26 = v28 + 8;
            v27 = v28 + 16;
            function_35fcc(v26);
            v28 = v27;
            v25 = v26;
        }
    }
    // 0x54adb
    if (v25 != 0) {
        // 0x54ae4
        function_4eeb50(v25, v18);
    }
    // 0x54ae9
    *(int64_t *)a1 = v5;
    *v1 = v17 - a2 + v16;
    *(int64_t *)(a1 + 16) = v5 + 16 * v3;
    int64_t result; // 0x549ac
    return result;
}

// Address range: 0x55c6e - 0x55de1
int64_t function_55c6e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x55c90
    int64_t v2 = 0xfffffffffffffff; // 0x55cb8
    int64_t v3; // 0x55c6e
    int64_t v4; // 0x55c6e
    int64_t v5; // 0x55c6e
    if (v2 > 0xfffffffffffffff | v2 < *v1 - a1 >> 4) {
        goto lab_0x55dcd;
    } else {
        // 0x55cc7
        v3 = v2;
        v4 = a1;
        v5 = 0;
        if (v2 != 0) {
            goto lab_0x55dcd;
        } else {
            goto lab_0x55cd3;
        }
    }
  lab_0x55dcd:;
    int64_t v6 = 16 * v2; // 0x55dd0
    int64_t v7 = function_4efd30(v6); // 0x55dd4
    v3 = v2;
    v4 = v6;
    v5 = v7;
    goto lab_0x55cd3;
  lab_0x55cd3:;
    int64_t v8 = v5 + a2 - a1; // 0x55cd6
    *(int64_t *)a3 = 0;
    *(int64_t *)v8 = a1;
    int64_t * v9 = (int64_t *)(a3 + 8); // 0x55ce4
    *v9 = 0;
    *(int64_t *)(v8 + 8) = *v9;
    int64_t v10 = v5; // 0x55d05
    if (v4 != a2) {
        int64_t * v11 = (int64_t *)v4; // 0x55d07
        int64_t * v12 = (int64_t *)(v10 + 8); // 0x55d0a
        *v12 = 0;
        int64_t v13 = v4 + 16; // 0x55d12
        *(int64_t *)v10 = *v11;
        int64_t * v14 = (int64_t *)(v4 + 8); // 0x55d1a
        *v14 = 0;
        *v12 = *v14;
        *v11 = 0;
        int64_t v15 = v13; // 0x55d05
        v10 += 16;
        while (v13 != a2) {
            // 0x55d07
            v11 = (int64_t *)v15;
            v12 = (int64_t *)(v10 + 8);
            *v12 = 0;
            v13 = v15 + 16;
            *(int64_t *)v10 = *v11;
            v14 = (int64_t *)(v15 + 8);
            *v14 = 0;
            *v12 = *v14;
            *v11 = 0;
            v15 = v13;
            v10 += 16;
        }
    }
    int64_t v16 = *v1; // 0x55d37
    int64_t v17 = v5 + 16 + (a2 - v4 & -16); // 0x55d45
    int64_t v18 = a2; // 0x55d50
    int64_t v19 = v17; // 0x55d50
    if (v16 != a2) {
        int64_t * v20 = (int64_t *)a2; // 0x55d60
        int64_t v21 = a2 + 16; // 0x55d67
        *(int64_t *)v19 = *v20;
        int64_t * v22 = (int64_t *)(a2 + 8); // 0x55d6f
        int64_t v23 = *v22; // 0x55d6f
        *v22 = 0;
        *(int64_t *)(v19 + 8) = v23;
        *v20 = 0;
        v18 = v23;
        int64_t v24 = v21; // 0x55d50
        v19 += 16;
        while (v16 != v21) {
            // 0x55d60
            v20 = (int64_t *)v24;
            v21 = v24 + 16;
            *(int64_t *)v19 = *v20;
            v22 = (int64_t *)(v24 + 8);
            v23 = *v22;
            *v22 = 0;
            *(int64_t *)(v19 + 8) = v23;
            *v20 = 0;
            v18 = v23;
            v24 = v21;
            v19 += 16;
        }
    }
    int64_t v25 = v4; // 0x55d8c
    if (v16 != v4) {
        int64_t v26 = v4 + 8; // 0x55d8e
        int64_t v27 = v4 + 16; // 0x55d92
        function_35fcc(v26);
        int64_t v28 = v27; // 0x55d8c
        v25 = v26;
        while (v16 != v27) {
            // 0x55d8e
            v26 = v28 + 8;
            v27 = v28 + 16;
            function_35fcc(v26);
            v28 = v27;
            v25 = v26;
        }
    }
    // 0x55d9d
    if (v25 != 0) {
        // 0x55da6
        function_4eeb50(v25, v18);
    }
    // 0x55dab
    *(int64_t *)a1 = v5;
    *v1 = v17 - a2 + v16;
    *(int64_t *)(a1 + 16) = v5 + 16 * v3;
    int64_t result; // 0x55c6e
    return result;
}

// Address range: 0x59cd2 - 0x59e45
int64_t function_59cd2(int64_t a1, int64_t a2, uint64_t a3, int64_t result) {
    int64_t v1 = a1 + 32; // 0x59ced
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x59cf5
    uint64_t v3 = *v2; // 0x59cf5
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x59cf9
    int64_t v5 = function_4fbd10(v1, *v4, v3, 1); // 0x59cfd
    int64_t v6 = 1; // 0x59d04
    int64_t v7 = v1; // 0x59d04
    int64_t v8 = a2; // 0x59d04
    if ((char)v5 != 0) {
        int64_t v9; // 0x59cd2
        int64_t v10; // 0x59cd2
        if (v3 != 1) {
            if (v3 >= 0x2000000000000000) {
                // 0x59d30
                function_5423b0();
            }
            int64_t v11 = 8 * v3; // 0x59d35
            int64_t v12 = function_4efd30(v11); // 0x59d40
            __asm_rep_stosb_memset((char *)v12, 0, v11);
            bool v13; // 0x59cd2
            v10 = v12 + v11 * (v13 ? -1 : 1);
            v9 = v12;
        } else {
            int64_t v14 = a1 + 48; // 0x59d13
            *(int64_t *)v14 = 0;
            v10 = v1;
            v9 = v14;
        }
        int64_t v15 = a1 + 16; // 0x59d52
        int64_t * v16 = (int64_t *)v15; // 0x59d56
        int64_t v17 = *v16; // 0x59d56
        *v16 = 0;
        int64_t v18 = 0; // 0x59d67
        int64_t v19 = v10; // 0x59d67
        if (v17 != 0) {
            int64_t v20 = 0;
            int64_t * v21 = (int64_t *)v17; // 0x59d6f
            int64_t v22 = *v21; // 0x59d6f
            int64_t v23 = *(int64_t *)(v17 + 24) % v3;
            int64_t * v24 = (int64_t *)(8 * v23 + v9); // 0x59d7a
            int64_t v25 = *v24; // 0x59d7a
            int64_t v26; // 0x59cd2
            int64_t v27; // 0x59cd2
            int64_t v28; // 0x59d82
            if (v25 != 0) {
                // 0x59da5
                *v21 = *(int64_t *)v25;
                *(int64_t *)*v24 = v17;
                v27 = v20;
                v26 = v25;
            } else {
                // 0x59d82
                v28 = *v16;
                *v21 = v28;
                *v16 = v17;
                *v24 = v15;
                v27 = v23;
                v26 = v28;
                if (*v21 != 0) {
                    // 0x59d9e
                    *(int64_t *)(8 * v20 + v9) = v17;
                    v27 = v23;
                    v26 = v28;
                }
            }
            // 0x59d96
            v18 = v27;
            v19 = v26;
            while (v22 != 0) {
                int64_t v29 = v22;
                v20 = v27;
                v21 = (int64_t *)v29;
                v22 = *v21;
                v23 = *(int64_t *)(v29 + 24) % v3;
                v24 = (int64_t *)(8 * v23 + v9);
                v25 = *v24;
                if (v25 != 0) {
                    // 0x59da5
                    *v21 = *(int64_t *)v25;
                    *(int64_t *)*v24 = v29;
                    v27 = v20;
                    v26 = v25;
                } else {
                    // 0x59d82
                    v28 = *v16;
                    *v21 = v28;
                    *v16 = v29;
                    *v24 = v15;
                    v27 = v23;
                    v26 = v28;
                    if (*v21 != 0) {
                        // 0x59d9e
                        *(int64_t *)(8 * v20 + v9) = v29;
                        v27 = v23;
                        v26 = v28;
                    }
                }
                // 0x59d96
                v18 = v27;
                v19 = v26;
            }
        }
        // 0x59db6
        v7 = v19;
        if (v7 != a1 + 48) {
            // 0x59dc2
            function_4eeb50(v7, v18);
        }
        // 0x59dc7
        *(int64_t *)a1 = v9;
        *v4 = v3;
        v6 = 0;
        v8 = a3 % v3;
    }
    // 0x59dd9
    *(int64_t *)(result + 24) = a3;
    int64_t * v30 = (int64_t *)(8 * v8 + v7); // 0x59de8
    int64_t v31 = *v30; // 0x59de8
    if (v31 != 0) {
        // 0x59df1
        *(int64_t *)result = *(int64_t *)v31;
        *(int64_t *)*v30 = result;
        // 0x59e32
        *v2 = *v2 + 1;
        return result;
    }
    int64_t v32 = a1 + 16; // 0x59e04
    int64_t * v33 = (int64_t *)v32; // 0x59e04
    *(int64_t *)result = *v33;
    *v33 = result;
    if (v6 != 0) {
        // 0x59e1c
        *(int64_t *)(8 * (*(int64_t *)(v6 | 24) % *v4) + v7) = result;
    }
    // 0x59e2a
    *v30 = v32;
    // 0x59e32
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0x6837a - 0x684e8
int64_t function_6837a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x68391
    int64_t v2 = a1; // 0x683a8
    if (*(int32_t *)(a1 + 116) == 1) {
        int64_t v3 = 0x100000000 * a3 >> 32; // 0x683b8
        char * v4; // bp-224, 0x6837a
        int64_t v5; // bp-240, 0x6837a
        function_68ba4((int64_t *)&v4, v3, &v5);
        __asm_rep_movsb_memcpy(v4, (char *)a2, v3);
        int64_t v6 = a1; // bp-264, 0x683df
        int64_t v7; // bp-256, 0x6837a
        function_68d1a(&v5, &v7, &v6, (int64_t *)&v4);
        int64_t v8 = v5; // 0x68405
        int64_t v9; // bp-232, 0x6837a
        int64_t v10 = (int64_t)&v9; // 0x6840a
        v5 = 0;
        v7 = v8;
        v9 = 0;
        function_35fcc(v10);
        function_68c00(&v5, &v7);
        int64_t v11; // bp-168, 0x6837a
        int64_t v12; // bp-200, 0x6837a
        function_68b30(&v11, &v12, &v5, a1, 1);
        function_67ce4(a1, &v11, 0);
        function_25018(&v11);
        function_221a8((int64_t)&v12);
        function_35fcc(v10);
        int64_t v13; // bp-248, 0x6837a
        function_35fcc((int64_t)&v13);
        function_68c1c((int64_t *)&v4);
        v2 = 1;
    }
    int64_t result = v2; // 0x684cf
    if (v1 != __readfsqword(40)) {
        // 0x684d1
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x684d6
    return result;
}

// Address range: 0x48e480 - 0x48e5f4
int64_t function_48e480(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x48e497
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x48e4b0
    if (*v2 != a2) {
        // 0x48e4ba
        int64_t v3; // bp-96, 0x48e480
        int64_t v4 = (int64_t)&v3; // 0x48e4a7
        int64_t v5 = function_48d707(v4, 8, L"{%u}", 0 >> 3); // 0x48e4d7
        int64_t v6 = function_599ba(a1, v4, (int32_t)L"{%u}" ^ (int32_t)L"{%u}", function_35c52(v4)); // 0x48e4f4
        int64_t v7 = v4; // 0x48e500
        int64_t v8; // bp-104, 0x48e480
        int64_t v9; // bp-112, 0x48e480
        int64_t v10; // bp-120, 0x48e480
        int64_t v11; // bp-128, 0x48e480
        int64_t v12; // 0x48e520
        int64_t * v13; // 0x48e569
        if (v6 != -1) {
            // 0x48e506
            v12 = function_36b3c(a1, (0x100000000 * v5 >> 32) + v6, "basic_string::substr");
            function_54b20(&v9, a1, v12, -1);
            function_54b20(&v11, a1, function_36b3c(a1, 0, "basic_string::substr"), v6);
            v13 = (int64_t *)function_527fe(&v11, a2);
            v10 = *v13;
            *v13 = (int64_t)&g6;
            function_48f5c8(&v8, &v10, &v9);
            function_36966(a1, &v8);
            function_29c3a(&v8);
            function_29c3a(&v10);
            function_29c3a(&v11);
            function_29c3a(&v9);
            v7 = (int64_t)&v8;
        }
        int64_t v14 = v7;
        int64_t v15 = a2 + 8; // 0x48e5c7
        while (v15 != *v2) {
            int64_t v16 = v15;
            v5 = function_48d707(v4, 8, L"{%u}", v16 - v14 >> 3);
            v6 = function_599ba(a1, v4, (int32_t)L"{%u}" ^ (int32_t)L"{%u}", function_35c52(v4));
            v7 = v4;
            if (v6 != -1) {
                // 0x48e506
                v12 = function_36b3c(a1, (0x100000000 * v5 >> 32) + v6, "basic_string::substr");
                function_54b20(&v9, a1, v12, -1);
                function_54b20(&v11, a1, function_36b3c(a1, 0, "basic_string::substr"), v6);
                v13 = (int64_t *)function_527fe(&v11, v16);
                v10 = *v13;
                *v13 = (int64_t)&g6;
                function_48f5c8(&v8, &v10, &v9);
                function_36966(a1, &v8);
                function_29c3a(&v8);
                function_29c3a(&v10);
                function_29c3a(&v11);
                function_29c3a(&v9);
                v7 = (int64_t)&v8;
            }
            // 0x48e5c7
            v14 = v7;
            v15 = v16 + 8;
        }
    }
    int64_t result = 0; // 0x48e5de
    if (v1 != __readfsqword(40)) {
        // 0x48e5e0
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x48e5e5
    return result;
}

// Address range: 0x4b9df0 - 0x4b9f58
int64_t function_4b9df0(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 48; // 0x4b9df5
    if ((int32_t)function_4b1680(v1, 0) == 0) {
        // 0x4b9e22
        return 0;
    }
    // 0x4b9e40
    int64_t v2; // bp-104, 0x4b9df0
    function_4b0870(&v2);
    int64_t v3; // bp-72, 0x4b9df0
    function_4b0870(&v3);
    int64_t v4 = function_4b3cf0(&v2, v1, a1 + 8); // 0x4b9e5c
    int64_t v5 = v4; // 0x4b9e65
    if ((int32_t)v4 == 0) {
        int64_t v6 = function_4b1ac0(&v3, &v2, &v2); // 0x4b9e8b
        v5 = v6;
        if ((int32_t)v6 == 0) {
            int64_t v7 = function_4b95a0(&v3, a1); // 0x4b9e9e
            v5 = v7;
            if ((int32_t)v7 == 0) {
                // 0x4b9ea9
                g4++;
                int64_t * v8 = (int64_t *)a2; // 0x4b9ebc
                int64_t v9 = function_4b1ac0(v8, v8, &v3); // 0x4b9ebc
                v5 = v9;
                if ((int32_t)v9 == 0) {
                    int64_t v10 = function_4b95a0(v8, a1); // 0x4b9ecd
                    v5 = v10;
                    if ((int32_t)v10 == 0) {
                        // 0x4b9ed8
                        g4++;
                        int64_t * v11 = (int64_t *)(a2 + 24); // 0x4b9eef
                        int64_t v12 = function_4b1ac0(v11, v11, &v3); // 0x4b9eef
                        v5 = v12;
                        if ((int32_t)v12 == 0) {
                            int64_t v13 = function_4b95a0(v11, a1); // 0x4b9f04
                            v5 = v13;
                            if ((int32_t)v13 == 0) {
                                // 0x4b9f13
                                g4++;
                                int64_t v14 = function_4b1ac0(v11, v11, &v2); // 0x4b9f24
                                v5 = v14;
                                if ((int32_t)v14 == 0) {
                                    int64_t result = function_4b95a0(v11, a1); // 0x4b9f39
                                    v5 = result;
                                    if ((int32_t)result == 0) {
                                        // 0x4b9f48
                                        g4++;
                                        return result;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    // 0x4b9e67
    function_4b0890(&v2);
    function_4b0890(&v3);
    // 0x4b9e22
    return v5 & 0xffffffff;
}

// Address range: 0x4d2270 - 0x4d23dd
int64_t function_4d2270(int64_t a1, int64_t * a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = function_4c14d0((int32_t)a7); // 0x4d22bd
    if (v1 == 0) {
        // 0x4d23e0
        return 0;
    }
    uint64_t v2 = (*(int64_t *)(a1 + 184) + 7) / 8; // 0x4d22c2
    int64_t v3; // bp-360, 0x4d2270
    function_4b0870(&v3);
    int64_t v4; // bp-328, 0x4d2270
    function_4d2af0(&v4);
    int64_t v5; // bp-200, 0x4d2270
    int64_t v6 = function_4b1080(a4, &v5, v2); // 0x4d22f4
    if ((int32_t)v6 != 0) {
        // 0x4d22fd
        function_4d30e0(&v4);
        function_4b0890(&v3);
        return v6 & 0xffffffff;
    }
    int64_t v7 = function_4d1ea0(a1, &v3, a5, a6); // 0x4d2366
    if ((int32_t)v7 != 0) {
        // 0x4d22fd
        function_4d30e0(&v4);
        function_4b0890(&v3);
        return v7 & 0xffffffff;
    }
    int64_t v8 = function_4b1080((int64_t)&v3, (int64_t *)(v2 + (int64_t)&v5), v2); // 0x4d2382
    int64_t v9 = v8; // 0x4d2389
    if ((int32_t)v8 == 0) {
        // 0x4d238f
        function_4d2c90(&v4, v1, &v5, 2 * v2);
        v9 = function_4d1f80(a1, (int64_t)a2, (int64_t)a3, a4, a5, a6, (int64_t)&g2, &v4);
    }
    // 0x4d22fd
    function_4d30e0(&v4);
    function_4b0890(&v3);
    return v9 & 0xffffffff;
}

// Address range: 0x4d2690 - 0x4d2802
int64_t function_4d2690(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4d2690
    int64_t v1; // bp-264, 0x4d2690
    function_4b0870(&v1);
    int64_t v2; // bp-232, 0x4d2690
    function_4b0870(&v2);
    int64_t v3 = function_4d2270(a1, &v1, &v2, a1 + 248, a3, a4, 0x100000000 * a2 >> 32); // 0x4d26f9
    int64_t result = v3 & 0xffffffff; // 0x4d2700
    if ((int32_t)v3 != 0) {
        // 0x4d2704
        function_4b0890(&v1);
        function_4b0890(&v2);
        return result;
    }
    // 0x4d2758
    int64_t v4; // bp-59, 0x4d2690
    int64_t v5 = (int64_t)&v4; // bp-272, 0x4d276f
    int64_t v6; // bp-200, 0x4d2690
    int64_t result2 = function_4d4790(&v5, &v6, &v2); // 0x4d2774
    int64_t v7 = 0x100000000 * result2 >> 32; // 0x4d2779
    if ((int32_t)v7 < 0) {
        // 0x4d2800
        return result2;
    }
    int64_t v8 = function_4d4790(&v5, &v6, &v1); // 0x4d2793
    int64_t v9 = v8; // 0x4d279a
    if ((int32_t)v8 >= 0) {
        int64_t v10 = (0x100000000 * v8 >> 32) + v7; // 0x4d27a8
        int64_t result3 = function_4d4560(&v5, &v6, v10); // 0x4d27ae
        int64_t v11 = 0x100000000 * result3 >> 32; // 0x4d27b3
        if ((int32_t)v11 < 0) {
            // 0x4d2800
            return result3;
        }
        // 0x4d27bb
        v9 = function_4d4710(&v5, &v6, 48);
        if ((int32_t)v9 >= 0) {
            int64_t v12 = v11 + v10 + (0x100000000 * v9 >> 32); // 0x4d27dd
            memcpy((int64_t *)a5, (int64_t *)v5, (int32_t)v12);
            *(int64_t *)a6 = v12;
            // 0x4d2704
            function_4b0890(&v1);
            function_4b0890(&v2);
            return result;
        }
    }
    // 0x4d2704
    function_4b0890(&v1);
    function_4b0890(&v2);
    return v9 & 0xffffffff;
}

// Address range: 0x4fd550 - 0x4fd6bf
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_4fd550(int64_t a1, int64_t a2) {
    // 0x4fd550
    __readfsqword(40);
    if ((*(char *)(a1 + 120) & 8) == 0) {
        // 0x4fd5d5
        __readfsqword(40);
        return 0xffffffff;
    }
    char * v1 = (char *)(a1 + 170); // 0x4fd572
    char v2; // 0x4fd550
    char v3; // 0x4fd550
    int64_t result; // 0x4fd550
    if (*v1 != 0) {
        // 0x4fd5f8
        if ((int32_t)a1 == -1) {
            // 0x4fd5d5
            __readfsqword(40);
            return 0xffffffff;
        }
        int64_t v4 = *(int64_t *)(a1 + 152); // 0x4fd608
        *(int64_t *)(a1 + 40) = 0;
        *(int64_t *)(a1 + 32) = 0;
        *(int64_t *)(a1 + 48) = 0;
        *v1 = 0;
        *(int64_t *)(a1 + 8) = v4;
        *(int64_t *)(a1 + 16) = v4;
        *(int64_t *)(a1 + 24) = v4;
        v3 = *(char *)(a1 + 192);
        goto lab_0x4fd642;
    } else {
        int64_t * v5 = (int64_t *)(a1 + 16); // 0x4fd580
        uint64_t v6 = *v5; // 0x4fd580
        char v7 = *(char *)(a1 + 192); // 0x4fd588
        v3 = v7;
        if (v6 > *(int64_t *)(a1 + 8)) {
            int64_t v8 = v6 - 1; // 0x4fd596
            *v5 = v8;
            result = (int64_t)*(char *)v8;
            v2 = v7;
            goto lab_0x4fd5a2;
        } else {
            goto lab_0x4fd642;
        }
    }
  lab_0x4fd642:
    // 0x4fd642
    if (a1 == -1) {
        // 0x4fd5d5
        __readfsqword(40);
        return 0xffffffff;
    }
    // 0x4fd662
    result = a1 & 0xffffffff;
    v2 = v3;
    if ((int32_t)a1 == -1) {
        // 0x4fd5d5
        __readfsqword(40);
        return 0xffffffff;
    }
    goto lab_0x4fd5a2;
  lab_0x4fd5a2:;
    int32_t v9 = a2; // 0x4fd5a4
    if (v9 == -1) {
        // 0x4fd5d5
        __readfsqword(40);
        return 0;
    }
    // 0x4fd5a9
    if ((int32_t)result == v9) {
        // 0x4fd5d5
        __readfsqword(40);
        return result;
    }
    // 0x4fd5af
    if (v2 != 0) {
        // 0x4fd5d5
        __readfsqword(40);
        return 0xffffffff;
    }
    char * v10 = (char *)(a1 + 192); // 0x4fd5b8
    int64_t v11 = *(int64_t *)(a1 + 16); // 0x4fd5bf
    if (*v10 != 0) {
        // 0x4fd5c9
        *(char *)(a1 + 169) = 1;
        *(char *)v11 = (char)a2;
        // 0x4fd5d5
        __readfsqword(40);
        return a2 & 0xffffffff;
    }
    // 0x4fd690
    *(int64_t *)(a1 + 176) = v11;
    int64_t * v12 = (int64_t *)(a1 + 24); // 0x4fd697
    *v10 = 1;
    *v12 = a1 + 172;
    *(int64_t *)(a1 + 184) = *v12;
    int64_t result2 = a1 + 171; // 0x4fd6b4
    *(int64_t *)(a1 + 8) = result2;
    return result2;
}

// Address range: 0x50c440 - 0x50c490
int64_t function_50c440(int64_t a1) {
    uint64_t v1 = function_566390(&g5); // 0x50c44b
    if (*(int64_t *)((int64_t)&g5 + 16) <= v1) {
        // 0x50c482
        function_5423f0();
        // 0x50c487
        return function_20110();
    }
    int64_t v2 = *(int64_t *)((int64_t)&g5 + 8); // 0x50c457
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x50c45d
    if (v3 == 0) {
        // 0x50c482
        function_5423f0();
        // 0x50c487
        return function_20110();
    }
    int64_t result = function_20730(v3, &g3, 0x844288, 0); // 0x50c476
    if (result == 0) {
        // 0x50c487
        return function_20110();
    }
    // 0x50c480
    return result;
}

// Address range: 0x50c490 - 0x50c5b3
// From class:    std::time_put_byname<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_50c490(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int32_t a8) {
    // 0x50c490
    __readfsqword(40);
    int64_t v1 = function_50ab00(); // 0x50c4d9
    int64_t v2 = function_50c440(a4 + 208); // 0x50c4e8
    int32_t v3 = (int32_t)*(int64_t *)v1; // bp-600, 0x50c501
    int64_t wstr; // bp-584, 0x50c490
    function_56dd30(v2, &wstr, 128, &v3, a6);
    wcslen((int32_t *)&wstr);
    __readfsqword(40);
    return result;
}

// Address range: 0x50cac0 - 0x50cc33
int64_t function_50cac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000000000 * a3 >> 56; // 0x50cac3
    int64_t v2 = 0; // 0x50cae7
    int64_t v3 = 0; // 0x50cae7
    int64_t v4; // 0x50cac0
    int64_t v5; // 0x50cac0
    if (v5 - a5 >> 2 > v1) {
        int64_t v6 = 0;
        int64_t v7 = 0;
        v2 = v6;
        int64_t v8; // 0x50cac0
        v4 = v8;
        v3 = v7;
        if ((char)v1 >= 127) {
            // break (via goto) -> 0x50cb21
            goto lab_0x50cb21_2;
        }
        int64_t v9 = v1;
        int64_t v10 = v8 - 4 * v9; // 0x50cafa
        int64_t v11; // 0x50cb06
        int64_t v12; // 0x50cb0d
        while (a4 - 1 > v7) {
            // 0x50cb06
            v11 = v7 + 1;
            v12 = (int64_t)*(char *)(v11 + a3);
            v2 = v6;
            v4 = v10;
            v3 = v11;
            if (v10 - a5 >> 2 <= v12) {
                // break (via goto) -> 0x50cb21
                goto lab_0x50cb21_2;
            }
            v7 = v11;
            v2 = v6;
            v4 = v10;
            v3 = v7;
            if ((char)v12 >= 127) {
                // break (via goto) -> 0x50cb21
                goto lab_0x50cb21_2;
            }
            // 0x50caf2
            v9 = v12;
            v10 -= 4 * v9;
        }
        int64_t v13 = v6 + 1; // 0x50cc20
        v2 = v13;
        v4 = v10;
        v3 = v7;
        while (v10 - a5 >> 2 > v9) {
            // 0x50cae9
            v6 = v13;
            v2 = v6;
            v4 = v10;
            v3 = v7;
            if ((char)v9 >= 127) {
                // break (via goto) -> 0x50cb21
                goto lab_0x50cb21_2;
            }
            // 0x50caf2
            v10 -= 4 * v9;
            while (a4 - 1 > v7) {
                // 0x50cb06
                v11 = v7 + 1;
                v12 = (int64_t)*(char *)(v11 + a3);
                v2 = v6;
                v4 = v10;
                v3 = v11;
                if (v10 - a5 >> 2 <= v12) {
                    // break (via goto) -> 0x50cb21
                    goto lab_0x50cb21_2;
                }
                v7 = v11;
                v2 = v6;
                v4 = v10;
                v3 = v7;
                if ((char)v12 >= 127) {
                    // break (via goto) -> 0x50cb21
                    goto lab_0x50cb21_2;
                }
                // 0x50caf2
                v9 = v12;
                v10 -= 4 * v9;
            }
            // 0x50cc20
            v13 = v6 + 1;
            v2 = v13;
            v4 = v10;
            v3 = v7;
        }
    }
  lab_0x50cb21_2:;
    int64_t v14 = a1; // 0x50cb24
    int64_t v15 = a5; // 0x50cb24
    if (v4 != a5) {
        // 0x50cb30
        bool v16; // 0x50cac0
        int64_t v17 = v16 ? -4 : 4; // 0x50cb30
        int64_t v18 = a5; // 0x50cb30
        int64_t v19 = a1; // 0x50cac0
        *(int32_t *)v19 = *(int32_t *)v18;
        v18 += v17;
        v19 += v17;
        while (v4 != v18) {
            // 0x50cb30
            *(int32_t *)v19 = *(int32_t *)v18;
            v18 += v17;
            v19 += v17;
        }
        int64_t v20 = v4 - a5 & -4; // 0x50cb41
        v14 = v20 + a1;
        v15 = v20 + a5;
    }
    int64_t result = v14; // 0x50cb5b
    int64_t v21 = v15; // 0x50cb5b
    int64_t result2; // 0x50cac0
    if (v2 == 0) {
      lab_0x50cbba:
        // 0x50cbba
        if (v3 == 0) {
            // 0x50cc19
            return result;
        }
        int64_t v22 = v21; // 0x50cac0
        int64_t v23 = v3;
        v23--;
        *(int32_t *)result = (int32_t)a2;
        unsigned char v24 = *(char *)(v23 + a3); // 0x50cbc7
        int64_t v25 = result + 4; // 0x50cbcc
        result2 = v25;
        while (v24 >= 1) {
            int64_t v26 = v24; // 0x50cbc7
            int64_t v27 = 0;
            *(int32_t *)(v27 + v25) = *(int32_t *)(v27 + v22);
            int64_t v28 = v27 + 4; // 0x50cbf7
            while (v27 != (4 * v26 + 1020 & 1020)) {
                // 0x50cbe8
                v27 = v28;
                *(int32_t *)(v27 + v25) = *(int32_t *)(v27 + v22);
                v28 = v27 + 4;
            }
            int64_t v29 = (0x100000000000000 * v26 - 0x100000000000000 >> 54) + 4; // 0x50cc04
            int64_t v30 = v29 + v25; // 0x50cc13
            v22 += v29;
            result2 = v30;
            if (v23 == 0) {
                // break -> 0x50cc19
                break;
            }
            v23--;
            *(int32_t *)v30 = (int32_t)a2;
            v24 = *(char *)(v23 + a3);
            v25 = v30 + 4;
            result2 = v25;
        }
    } else {
        int64_t v31 = v14; // 0x50cbb3
        int64_t v32 = v2;
        int64_t v33 = v15; // 0x50cbac
        *(int32_t *)v31 = (int32_t)a2;
        unsigned char v34 = *(char *)(v3 + a3); // 0x50cb60
        result2 = v31;
        while (v34 >= 1) {
            // 0x50cb72
            v32--;
            int64_t v35 = v34; // 0x50cb60
            int64_t v36 = v31 + 4; // 0x50cb65
            int64_t v37 = 0;
            *(int32_t *)(v37 + v36) = *(int32_t *)(v37 + v33);
            int64_t v38 = v37 + 4; // 0x50cb97
            while (v37 != (4 * v35 + 1020 & 1020)) {
                // 0x50cb88
                v37 = v38;
                *(int32_t *)(v37 + v36) = *(int32_t *)(v37 + v33);
                v38 = v37 + 4;
            }
            int64_t v39 = (0x100000000000000 * v35 - 0x100000000000000 >> 54) + 4; // 0x50cba4
            v33 += v39;
            v31 = v39 + v36;
            result = v31;
            v21 = v33;
            if (v32 == 0) {
                goto lab_0x50cbba;
            }
            *(int32_t *)v31 = (int32_t)a2;
            v34 = *(char *)(v3 + a3);
            result2 = v31;
        }
    }
    // 0x50cc19
    return result2;
}
