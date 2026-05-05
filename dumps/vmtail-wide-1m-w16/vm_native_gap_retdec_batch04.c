/*
 * Targeted RetDec C for native executable gap queue batch 4.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x50ab00-0x50acb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56bf40-0x56c0f5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4baf6-0x4bca9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50cd40-0x50cef3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49a910-0x49aac2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c5100-0x4c52b2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55ec80-0x55ee32 rank=- name=- kind=- bytes=- uncovered=-
 *   0x499e90-0x49a041 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eb84-0x4ed34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ac9e0-0x4acb8f rank=- name=- kind=- bytes=- uncovered=-
 *   0x212399-0x212547 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ac0d0-0x4ac27e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2293e-0x22aea rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ccd6-0x2ce81 rank=- name=- kind=- bytes=- uncovered=-
 *   0x529840-0x5299eb rank=- name=- kind=- bytes=- uncovered=-
 *   0x50aff0-0x50b198 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
extern int g24;
extern int g25;
extern int g26;
extern int g27;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g32;
extern int g33;
extern int g34;
extern int g35;
extern int g36;
extern int g37;
extern int g38;
extern int g39;
extern int g40;
extern int g41;
extern int g42;
extern int g43;
extern int g44;
extern int g45;
extern int g46;
extern int g47;
extern int g48;
extern int g49;
extern int g50;
extern int g51;
extern int g52;
extern int g53;
extern int g54;
extern int g55;
unsigned char llvm_ctpop_i8(unsigned char value);
void __asm_int(int32_t interrupt);
int32_t __asm_in(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_outsb(uint16_t port, char value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
int64_t __asm_iretd(void);
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
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movapd(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_cmpnlesd(int128_t left, int128_t right);
int128_t __asm_cvtsi2sd(int64_t value);
int128_t __asm_subsd(int128_t left, int128_t right);
int64_t __asm_cvttsd2si(int128_t value);
void __asm_ucomisd(int128_t left, int128_t right);
void __asm_movups(int128_t dst, int128_t src);
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
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
void *memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
char *strdup(const char *s);
struct _Unwind_Exception;
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_20110();
int64_t function_20730();
int64_t function_212399();
int64_t function_21cae();
int64_t function_221a8();
int64_t function_2293e();
int64_t function_2327e();
int64_t function_24bd0();
int64_t function_24e1e();
int64_t function_25018();
int64_t function_2508e();
int64_t function_2515a();
int64_t function_25236();
int64_t function_2527b();
int64_t function_255da();
int64_t function_259ce();
int64_t function_29a64();
int64_t function_2ccd6();
int64_t function_2d44a();
int64_t function_361a8();
int64_t function_36916();
int64_t function_372d2();
int64_t function_379a0();
int64_t function_48a14c();
int64_t function_4945c0();
int64_t function_494dd0();
int64_t function_4976c0();
int64_t function_498d40();
int64_t function_499ab0();
int64_t function_499dd0();
int64_t function_499e90();
int64_t function_49a910();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49e960();
int64_t function_4ab520();
int64_t function_4ac0d0();
int64_t function_4ac9e0();
int64_t function_4ae54();
int64_t function_4afd30();
int64_t function_4afe70();
int64_t function_4aff10();
int64_t function_4aff90();
int64_t function_4b0fa0();
int64_t function_4baf6();
int64_t function_4bf94();
int64_t function_4bffc();
int64_t function_4c04e();
int64_t function_4c0ce();
int64_t function_4c2b6();
int64_t function_4c367();
int64_t function_4c3b10();
int64_t function_4c3b30();
int64_t function_4c40e0();
int64_t function_4c5100();
int64_t function_4c6da();
int64_t function_4c8ef0();
int64_t function_4caa90();
int64_t function_4df5a();
int64_t function_4ea10();
int64_t function_4eb52();
int64_t function_4eb84();
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4f0b6();
int64_t function_50ab00();
int64_t function_50acd0();
int64_t function_50aff0();
int64_t function_50cd40();
int64_t function_50ce2();
int64_t function_5246d0();
int64_t function_526ea0();
int64_t function_5282e0();
int64_t function_529840();
int64_t function_5423f0();
int64_t function_552550();
int64_t function_554b00();
int64_t function_55bec0();
int64_t function_55ec80();
int64_t function_565f30();
int64_t function_566390();
int64_t function_567850();
int64_t function_56bf40();
int64_t function_625dc();
int64_t function_7214c();
int64_t function_72496();
int64_t function_7259e();
int64_t function_7260a();
int64_t function_72994();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_c823b();

// Address range: 0x2293e - 0x22aea
int64_t function_2293e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x2294f
    int64_t v2 = 0; // 0x22965
    if (a2 != 0 == (a3 != 0)) {
        int64_t v3 = a1 + 12; // 0x22976
        if ((int32_t)function_25236(v3) != 1) {
            // 0x2299e
            v2 = 0;
            if ((int32_t)function_25236(v3) != 2) {
                goto lab_0x22ac0;
            } else {
                goto lab_0x2298c;
            }
        } else {
            goto lab_0x2298c;
        }
    } else {
        goto lab_0x22ac0;
    }
  lab_0x22ac0:;
    int64_t result = v2; // 0x22ad1
    if (v1 != __readfsqword(40)) {
        // 0x22ad3
        __stack_chk_fail();
        result = (int64_t)&g55;
    }
    // 0x22ad8
    return result;
  lab_0x2298c:;
    int64_t v4 = function_24bd0(a1); // 0x2298f
    v2 = 0;
    if (v4 != 0) {
        int64_t v5 = 0x23114; // bp-200, 0x229bf
        int64_t v6; // bp-168, 0x2293e
        function_2515a(&v6, &v5);
        function_7214c(a1 + (int64_t)&g6, &v6);
        function_25018(&v6);
        function_221a8(&v5);
        int64_t v7 = function_625dc(a1 + (int64_t)&g5, a2, v4); // 0x22a59
        int64_t v8; // 0x2293e
        if (v7 == 0) {
            int64_t v9 = function_24e1e(); // 0x22a74
            v8 = v9;
            if (v9 - *(int64_t *)(a1 + (int64_t)&g3) >= 0x1bf08eb001) {
                int64_t v10 = v9 - *(int64_t *)(a1 + (int64_t)&g4); // 0x22a92
                v8 = v10;
                if (v10 <= 0x1bf08eafff) {
                    int64_t v11 = function_21cae(function_2527b()); // 0x22aa9
                    v8 = v11;
                    if ((char)v11 == 0) {
                        // 0x22ab2
                        v8 = function_2327e(a1);
                    }
                }
            }
        } else {
            int64_t * v12 = (int64_t *)(a1 + (int64_t)&g2); // 0x22a66
            *v12 = *v12 + v7;
            *(int32_t *)a3 = (int32_t)v7;
            v8 = v7;
        }
        // 0x22aba
        v2 = v8 & -256 | (int64_t)(v7 != 0);
    }
    goto lab_0x22ac0;
}

// Address range: 0x2ccd6 - 0x2ce81
int64_t function_2ccd6(int64_t a1) {
    // 0x2ccd6
    *(int64_t *)a1 = (int64_t)&g43;
    function_2d44a();
    g47 = 0;
    function_72994(a1 + (int64_t)&g35);
    int64_t v1 = *(int64_t *)(a1 + (int64_t)&g34); // 0x2cd09
    if (v1 != 0) {
        // 0x2cd15
        function_4eeb50(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + (int64_t)&g33); // 0x2cd1a
    function_36916(a1 + (int64_t)&g32, v2);
    int64_t v3 = *(int64_t *)(a1 + (int64_t)&g31); // 0x2cd34
    int64_t * v4 = (int64_t *)(a1 + (int64_t)&g30); // 0x2cd3b
    int64_t v5 = *v4; // 0x2cd3b
    int64_t v6 = v5; // 0x2cd45
    int64_t v7 = v3; // 0x2cd45
    if (v3 != v5) {
        int64_t v8 = *(int64_t *)(v6 + 24); // 0x2cd47
        if (v8 != 0) {
            // 0x2cd50
            function_4eeb50(v8);
        }
        // 0x2cd55
        v6 += 64;
        while (v3 != v6) {
            // 0x2cd47
            v8 = *(int64_t *)(v6 + 24);
            if (v8 != 0) {
                // 0x2cd50
                function_4eeb50(v8);
            }
            // 0x2cd55
            v6 += 64;
        }
        // 0x2cd42
        v7 = *v4;
    }
    // 0x2cd5b
    if (v7 != 0) {
        // 0x2cd67
        function_4eeb50(v7);
    }
    // 0x2cd6c
    function_72994(a1 + (int64_t)&g29);
    function_2508e(a1 + (int64_t)&g28);
    function_72994(a1 + (int64_t)&g27);
    function_361a8(a1 + (int64_t)&g26);
    function_361a8(a1 + (int64_t)&g25);
    function_361a8(a1 + (int64_t)&g24);
    function_361a8(a1 + (int64_t)&g23);
    function_48a14c(a1 + (int64_t)&g22);
    int64_t * v9 = (int64_t *)(a1 + (int64_t)&g19); // 0x2cdc8
    int64_t v10 = *v9; // 0x2cdc8
    if (v10 != 0) {
        int64_t v11 = *(int64_t *)v10; // 0x2cdd8
        function_2508e(v10 + 8);
        function_4eeb50(v10);
        while (v11 != 0) {
            int64_t v12 = v11;
            v11 = *(int64_t *)v12;
            function_2508e(v12 + 8);
            function_4eeb50(v12);
        }
    }
    int64_t v13 = *(int64_t *)(a1 + (int64_t)&g18); // 0x2cdee
    int64_t * v14 = (int64_t *)(a1 + (int64_t)&g17); // 0x2cdf5
    __asm_rep_stosb_memset((char *)*v14, 0, 8 * v13);
    *(int64_t *)(a1 + (int64_t)&g20) = 0;
    *v9 = 0;
    int64_t v15 = *v14; // 0x2ce25
    if (v15 != a1 + (int64_t)&g21) {
        // 0x2ce31
        function_4eeb50(v15);
    }
    // 0x2ce36
    function_372d2(a1 + (int64_t)&g15);
    function_50ce2(a1 + (int64_t)&g14);
    function_7259e(a1 + (int64_t)&g13);
    function_7259e(a1 + (int64_t)&g12);
    function_379a0(a1 + (int64_t)&g7);
    return function_29a64(a1);
}

// Address range: 0x4baf6 - 0x4bca9
int64_t function_4baf6(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4bb0d
    function_7260a();
    function_72496(a1 + (int64_t)&g16, 0);
    function_4df5a(a1 + 104);
    int64_t v2; // bp-136, 0x4baf6
    function_729b6(&v2, a1 + 504);
    int64_t v3; // bp-128, 0x4baf6
    function_4c2b6(&v3);
    int64_t v4; // bp-112, 0x4baf6
    function_4c6da(&v4, a1 + 440);
    int64_t v5; // bp-80, 0x4baf6
    function_4c6da(&v5, a1 + 472);
    int64_t * v6 = (int64_t *)(a1 + 424); // 0x4bb79
    *v6 = v3;
    v3 = *v6;
    function_4c0ce(&v3);
    function_729ce(&v2);
    function_729b6(&v3, a1 + 384);
    int64_t v7 = *(int64_t *)(a1 + 344);
    int64_t v8 = v7; // 0x4bbcd
    if (v7 != 0) {
        int64_t v9 = *(int64_t *)(v8 + 8); // 0x4bbcf
        if (v9 != 0) {
            // 0x4bbd9
            function_4bf94(v9 + 16);
            function_4eeb30(v9, 64);
        }
        // 0x4bbef
        v8 = *(int64_t *)v8;
        while (v8 != 0) {
            // 0x4bbcf
            v9 = *(int64_t *)(v8 + 8);
            if (v9 != 0) {
                // 0x4bbd9
                function_4bf94(v9 + 16);
                function_4eeb30(v9, 64);
            }
            // 0x4bbef
            v8 = *(int64_t *)v8;
        }
    }
    // 0x4bbf5
    function_4c04e(a1 + 328);
    function_729ce(&v3);
    *(int32_t *)(a1 + 56) = (int32_t)&g41;
    *(int64_t *)(a1 + 64) = 256;
    *(int64_t *)(a1 + 72) = 1;
    *(int64_t *)(a1 + 80) = 256;
    *(int64_t *)(a1 + 88) = 32;
    *(int64_t *)(a1 + 96) = 2;
    function_4bffc(a1 + 272);
    function_729b6(&v3, a1 + 16);
    int64_t v10 = *(int64_t *)(a1 + 248); // 0x4bc50
    int64_t * v11 = (int64_t *)(a1 + 256); // 0x4bc57
    function_4c367(v10, *v11);
    *v11 = v10;
    function_729ce(&v3);
    function_4ae54(a1, 1);
    int64_t v12 = __readfsqword(40); // 0x4bc87
    *(char *)(a1 + 240) = 0;
    int64_t result = 0; // 0x4bc97
    if (v1 != v12) {
        // 0x4bc99
        __stack_chk_fail();
        result = (int64_t)&g55;
    }
    // 0x4bc9e
    return result;
}

// Address range: 0x4eb84 - 0x4ed34
int64_t function_4eb84(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4eb96
    int64_t v2; // 0x4eb84
    char v3 = v2;
    int64_t v4 = 16; // 0x4ebaa
    int64_t v5; // 0x4eb84
    int64_t v6; // 0x4eb84
    if (v3 == 113) {
        goto lab_0x4ebfa;
    } else {
        if (v3 > 113) {
            if (v3 == 117) {
                // 0x4ebf5
                v4 = 4;
                goto lab_0x4ebfa;
            } else {
                if (v3 > 117) {
                    // 0x4ebd4
                    v4 = 12;
                    if (v3 == 118) {
                        goto lab_0x4ebfa;
                    } else {
                        // 0x4ebd8
                        v4 = 8;
                        v6 = 0;
                        v5 = 0;
                        if (v3 != 121) {
                            goto lab_0x4ed0f;
                        } else {
                            goto lab_0x4ebfa;
                        }
                    }
                } else {
                    // 0x4ebc6
                    v4 = 64;
                    v6 = 0;
                    v5 = 0;
                    if (v3 == 115) {
                        goto lab_0x4ebfa;
                    } else {
                        goto lab_0x4ed0f;
                    }
                }
            }
        } else {
            // 0x4ebae
            v4 = 8;
            switch (v3) {
                case 106: {
                    goto lab_0x4ebfa;
                }
                case 112: {
                    // 0x4ebf5
                    v4 = 4;
                    goto lab_0x4ebfa;
                }
                default: {
                    // 0x4ebb6
                    v6 = 0;
                    v5 = 0;
                    if (v3 != 105) {
                        goto lab_0x4ed0f;
                    } else {
                        // 0x4ebf5
                        v4 = 4;
                        goto lab_0x4ebfa;
                    }
                }
            }
        }
    }
  lab_0x4ed0f:;
    int64_t result = v5 % 256 | v6 & -256; // 0x4ed20
    if (v1 != __readfsqword(40)) {
        // 0x4ed22
        __stack_chk_fail();
        result = (int64_t)&g55;
    }
    // 0x4ed27
    return result;
  lab_0x4ebfa:;
    int64_t v7 = *(int64_t *)(a2 + 8); // 0x4ebfa
    int64_t v8 = v7 - 24; // 0x4ec01
    int64_t v9 = *(int64_t *)v8; // 0x4ec01
    v6 = 0;
    v5 = 0;
    if (v9 != 0) {
        int64_t v10 = (int64_t)&g42; // 0x4ec0e
        int64_t v11 = v7; // 0x4ec18
        while (v11 != v9 + v7) {
            char v12 = *(char *)v11; // 0x4ec20
            v11++;
            v6 = v11;
            v5 = 0;
            if (*(char *)((int64_t)v12 + (int64_t)&g42) == 0) {
                goto lab_0x4ed0f;
            }
        }
        char * v13 = (char *)function_4eb52(v8); // bp-72, 0x4ec41
        function_255da((int64_t *)&v13);
        int64_t v14 = (int64_t)v13; // 0x4ec4d
        function_255da((int64_t *)&v13);
        int64_t v15 = (int64_t)v13; // 0x4ec56
        int64_t v16 = *(int64_t *)(v15 - 24) + v15; // 0x4ec61
        if (v16 != v14) {
            char * v17 = (char *)v14; // 0x4ec69
            char v18 = *v17; // 0x4ec69
            *v17 = v18 == 90 | (int32_t)v18 < 90 ? v18 | 32 : v18;
            int64_t v19 = v14 + 1; // 0x4ec7b
            int64_t v20 = v19; // 0x4ec67
            while (v16 != v19) {
                // 0x4ec69
                v17 = (char *)v20;
                v18 = *v17;
                *v17 = v18 == 90 | (int32_t)v18 < 90 ? v18 | 32 : v18;
                v19 = v20 + 1;
                v20 = v19;
            }
        }
        int64_t v21 = function_4ea10(a1, (int64_t *)&v13, 0); // 0x4ec88
        int64_t v22 = 0; // 0x4ec92
        if ((char)v21 == 0) {
            char v23 = *(char *)&v10; // 0x4ec94
            char v24 = v23; // bp-64, 0x4ec9c
            int64_t v25 = function_4eb52((int64_t)v13 - 24); // 0x4eca8
            int64_t * v26 = (int64_t *)(a1 + 24); // 0x4ecad
            int64_t v27 = *v26; // 0x4ecad
            v10 = v27;
            int64_t v28 = v25; // bp-56, 0x4ecb5
            if (v27 == *(int64_t *)(a1 + 32)) {
                // 0x4ece6
                function_4f0b6(a1 + 16, v27, (int64_t *)&v24);
            } else {
                // 0x4ecbc
                *(char *)v27 = v23;
                *(int64_t *)(v27 + 8) = v28;
                *v26 = v27 + 16;
                v28 = (int64_t)&g49;
            }
            // 0x4ecf2
            function_2508e((int64_t)&v28);
            int64_t * v29 = (int64_t *)(a1 + 40); // 0x4ecfe
            *v29 = *v29 + v4;
            int64_t v30; // bp-255, 0x4eb84
            v22 = (int64_t)&v30;
        }
        // 0x4ed02
        v6 = function_2508e((int64_t)&v13);
        v5 = v22;
    }
    goto lab_0x4ed0f;
}

// Address range: 0x212399 - 0x212547
int64_t function_212399(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x212399
    int64_t v1; // bp-16, 0x212399
    int64_t v2 = (int64_t)&v1; // 0x21241f
    v1 = v2;
    *(int64_t *)(v2 - 8) = v2 + 8;
    int64_t v3; // 0x212399
    return function_c823b(a1, 0x20c06d, a3, v3, a5, a6, v1, v3, 0x33f7a7b0);
}

// Address range: 0x499e90 - 0x49a040
int64_t function_499e90(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t result = function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g8, "=> write"); // 0x499ecb
    if (a1 == 0) {
        // 0x499f53
        return result;
    }
    int64_t v1 = function_499dd0(a1); // 0x499ee6
    if ((int32_t)v1 != 0) {
        int64_t result2 = v1 & 0xffffffff;
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "ssl_check_ctr_renegotiate", result2);
        // 0x499f53
        return result2;
    }
    // 0x499ef1
    if (*(int32_t *)(a1 + 8) != 16) {
        int64_t v2 = function_4976c0(a1); // 0x499efa
        if ((int32_t)v2 != 0) {
            int64_t result3 = v2 & 0xffffffff;
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g10, "mbedtls_ssl_handshake", result3);
            // 0x499f53
            return result3;
        }
    }
    // 0x499f09
    if (!((a3 < 2 | (*(char *)(a1 + 373) & 32) == 0))) {
        // 0x499f1b
        if (*(int32_t *)(a1 + 24) < 2) {
            int64_t v3 = *(int64_t *)(a1 + 112); // 0x499f98
            if (v3 != -128) {
                int64_t v4 = *(int64_t *)(v3 + 128); // 0x499fa6
                if (v4 != 0) {
                    // 0x499fb6
                    if (*(int32_t *)(v4 + 4) == 2) {
                        char * v5 = (char *)(a1 + 360); // 0x499fc0
                        if (*v5 == 0) {
                            int64_t v6 = function_499ab0(a1, a2, 1); // 0x499fd4
                            if ((int32_t)v6 < 1) {
                                // 0x499f31
                                function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g11, "<= write");
                                // 0x499f53
                                return v6 & 0xffffffff;
                            }
                            // 0x499fe3
                            *v5 = 1;
                        }
                        int64_t v7 = function_499ab0(a1, a2 + 1, a3 - 1); // 0x499ff6
                        int64_t v8 = v7; // 0x499fff
                        if ((int32_t)v7 >= 1) {
                            // 0x49a005
                            *v5 = 0;
                            v8 = v7 + 1;
                        }
                        // 0x499f31
                        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g11, "<= write");
                        // 0x499f53
                        return v8 & 0xffffffff;
                    }
                }
            }
        }
    }
    int64_t v9 = function_499ab0(a1, a2, a3);
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g11, "<= write");
    // 0x499f53
    return v9 & 0xffffffff;
}

// Address range: 0x49a910 - 0x49aabf
int64_t function_49a910(int64_t a1) {
    // 0x49a910
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g51, "=> mbedtls_ssl_resend");
    int64_t * v1 = (int64_t *)(a1 + 96); // 0x49a938
    int64_t v2 = *v1; // 0x49a938
    int64_t v3 = v2; // 0x49a943
    if (*(char *)(v2 + (int64_t)&g38) != 1) {
        // 0x49a949
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)&g52, "initialise resending");
        int64_t v4 = *v1; // 0x49a96b
        int64_t v5 = *(int64_t *)(v4 + (int64_t)&g39); // 0x49a972
        *(int64_t *)(v4 + (int64_t)&g40) = v5;
        function_494dd0(a1, 2);
        *(char *)(*v1 + (int64_t)&g38) = 1;
        v3 = *v1;
    }
    int64_t v6 = *(int64_t *)(v3 + (int64_t)&g40); // 0x49aa13
    int64_t result = v3; // 0x49aa1d
    if (v6 == 0) {
      lab_0x49aa88:
        // 0x49aa88
        if (*(int32_t *)(a1 + 8) == 16) {
            // 0x49aad8
            return result;
        }
        // 0x49aa8e
        *(char *)(result + (int64_t)&g38) = 2;
        function_4945c0(a1, *(int32_t *)(*v1 + (int64_t)&g37));
        return 0;
    }
    int64_t * v7 = (int64_t *)(a1 + 328);
    char * v8 = (char *)(v6 + 16); // 0x49aa1f
    int64_t * v9 = (int64_t *)v6; // 0x49aa23
    int64_t v10 = *v9; // 0x49aa23
    int64_t v11 = v10; // 0x49aa27
    if (*v8 == 22) {
        // 0x49aa2d
        v11 = v10;
        if (*(char *)v10 == 20) {
            // 0x49aa36
            function_494dd0(a1, v10);
            v11 = *v9;
        }
    }
    int64_t * v12 = (int64_t *)(v6 + 8); // 0x49a9a7
    memcpy((int64_t *)*v7, (int64_t *)v11, (int32_t)*v12);
    int64_t v13 = *v7; // 0x49a9bf
    *(int64_t *)(a1 + 344) = *v12;
    *(int32_t *)(a1 + 336) = (int32_t)*v8;
    *(int64_t *)(*v1 + (int64_t)&g40) = *(int64_t *)(v6 + 24);
    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g53, "resent handshake message header", v13, 12);
    int64_t v14 = function_498d40(a1); // 0x49aa06
    while ((int32_t)v14 == 0) {
        int64_t v15 = *v1; // 0x49aa0f
        int64_t v16 = *(int64_t *)(v15 + (int64_t)&g40); // 0x49aa13
        result = v15;
        if (v16 == 0) {
            goto lab_0x49aa88;
        }
        v8 = (char *)(v16 + 16);
        v9 = (int64_t *)v16;
        v10 = *v9;
        v11 = v10;
        if (*v8 == 22) {
            // 0x49aa2d
            v11 = v10;
            if (*(char *)v10 == 20) {
                // 0x49aa36
                function_494dd0(a1, v10);
                v11 = *v9;
            }
        }
        // 0x49a9a0
        v12 = (int64_t *)(v16 + 8);
        memcpy((int64_t *)*v7, (int64_t *)v11, (int32_t)*v12);
        int64_t v17 = *(int64_t *)(v16 + 24); // 0x49a9b4
        v13 = *v7;
        *(int64_t *)(a1 + 344) = *v12;
        *(int32_t *)(a1 + 336) = (int32_t)*v8;
        *(int64_t *)(*v1 + (int64_t)&g40) = v17;
        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g53, "resent handshake message header", v13, 12);
        v14 = function_498d40(a1);
    }
    int64_t result2 = v14 & 0xffffffff; // 0x49aa5e
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g54, "mbedtls_ssl_write_record", result2);
    return result2;
}

// Address range: 0x4ac0d0 - 0x4ac278
int64_t function_4ac0d0(int64_t a1, int64_t str, uint64_t a3) {
    // 0x4ac0d0
    int64_t result; // 0x4ac0d0
    if (a1 == 0 || str == 0) {
        // 0x4ac1fe
        return result;
    }
    if (a3 == 0 || *(char *)(str - 1 + a3) != 0 || strstr((char *)str, "-----BEGIN CERTIFICATE-----") == NULL) {
        // 0x4ac1fe
        return function_4ab520(a1, str, a3);
    }
    int64_t v1 = str; // 0x4ac140
    int64_t v2 = 0; // 0x4ac140
    if (a3 < 2) {
        // 0x4ac1fe
        return 0xffffd880;
    }
    int64_t v3 = a3; // 0x4ac140
    int64_t v4; // 0x4ac0d0
    int64_t v5; // 0x4ac0d0
    int64_t v6; // 0x4ac0d0
    while (true) {
      lab_0x4ac158:;
        int64_t v7 = v2;
        int64_t v8; // bp-88, 0x4ac0d0
        function_4c3b10(&v8);
        int64_t v9; // bp-96, 0x4ac0d0
        int64_t v10 = function_4c3b30(&v8, "-----BEGIN CERTIFICATE-----", "-----END CERTIFICATE-----", v1, 0, 0, &v9); // 0x4ac182
        v6 = v7;
        result = v10;
        switch ((int32_t)v10) {
            case 0: {
                // 0x4ac230
                int64_t v11; // 0x4ac0d0
                int64_t v12 = function_4ab520(a1, v8, v11); // 0x4ac248
                function_4c40e0(&v8);
                int64_t v13 = v12 & 0xffffffff; // 0x4ac25b
                result = v13;
                switch ((int32_t)v12) {
                    case -0x2880: {
                        return result;
                    }
                    case 0: {
                        return result;
                    }
                    default: {
                        // 0x4ac26a
                        v4 = v9;
                        v5 = v7 == 0 ? v13 : v7;
                        goto lab_0x4ac1c3;
                    }
                }
            }
            case -0x1480: {
                return result;
            }
            case -0x1080: {
                goto lab_0x4ac1fe;
            }
            default: {
                // 0x4ac19d
                function_4c40e0(&v8);
                v4 = v9;
                v5 = v7 == 0 ? v10 : v7;
                goto lab_0x4ac1c3;
            }
        }
    }
  lab_0x4ac1fe:
    // 0x4ac1d0
    result = v6 & 0xffffffff;
    if ((int32_t)v6 != 0) {
        // 0x4ac1fe
        return result;
    }
    // 0x4ac1fe
    return 0xffffd880;
  lab_0x4ac1c3:
    // 0x4ac1c3
    v3 -= v4;
    v2 = v5 & 0xffffffff;
    v1 += v4;
    v6 = v2;
    if (v3 < 2) {
        goto lab_0x4ac1fe;
    }
    goto lab_0x4ac158;
}

// Address range: 0x4ac9e0 - 0x4acb8e
int64_t function_4ac9e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)a1;
    int64_t v2 = a3; // 0x4ac9f3
    int64_t result; // 0x4ac9e0
    int64_t v3; // 0x4ac9e0
    int64_t v4; // 0x4ac9e0
    int64_t v5; // 0x4ac9e0
    int64_t v6; // bp-72, 0x4ac9e0
    int64_t v7; // 0x4aca80
    unsigned char v8; // 0x4aca94
    int64_t v9; // 0x4aca19
    while (true) {
        int64_t v10 = function_4afe70(a1, a2, &v6, 49); // 0x4aca05
        result = v10;
        if ((int32_t)v10 != 0) {
            // break -> 0x4acb66
            break;
        }
        // 0x4aca15
        v9 = v6 + a1;
        v4 = v2;
        while (true) {
          lab_0x4aca20:
            // 0x4aca20
            v5 = v4;
            int64_t v11; // bp-64, 0x4ac9e0
            int64_t v12 = function_4afe70(a1, v9, &v11, 48); // 0x4aca30
            v3 = v12;
            if ((int32_t)v12 != 0) {
                goto lab_0x4acb20;
            } else {
                // 0x4aca3d
                result = 0xffffdc20;
                if (v6 < 1) {
                    return result;
                }
                // 0x4aca50
                *(int32_t *)v5 = (int32_t)a1 % 256;
                int64_t * v13 = (int64_t *)(v5 + 8); // 0x4aca64
                int64_t v14 = function_4afe70(a1, v9, v13, 6); // 0x4aca64
                v3 = v14;
                if ((int32_t)v14 != 0) {
                    goto lab_0x4acb20;
                } else {
                    // 0x4aca71
                    *(int64_t *)(v5 + 16) = a1;
                    v7 = *v13 + a1;
                    *v1 = v7;
                    result = 0xffffdc20;
                    if (v9 - v7 < 1) {
                        return result;
                    }
                    // 0x4aca94
                    v8 = *(char *)v7;
                    switch (v8) {
                        case 12: {
                            goto lab_0x4acac0;
                        }
                        case 30: {
                            goto lab_0x4acac0;
                        }
                        case 20: {
                            goto lab_0x4acac0;
                        }
                        case 19: {
                            goto lab_0x4acac0;
                        }
                        case 22: {
                            goto lab_0x4acac0;
                        }
                        case 28: {
                            goto lab_0x4acac0;
                        }
                        default: {
                            // 0x4acab7
                            result = v7;
                            if (v8 != 3) {
                                return result;
                            }
                            goto lab_0x4acac0;
                        }
                    }
                }
            }
        }
      lab_0x4acb30:
        if (v9 == a2) {
            // 0x4acb66
            result = v10 & 0xffffffff;
            return result;
        }
        int64_t * mem = calloc(1, 64); // 0x4acb42
        v2 = (int64_t)mem;
        *(int64_t *)(v5 + 48) = v2;
        result = 0xffffd780;
        if (mem == NULL) {
            // break -> 0x4acb66
            break;
        }
    }
  lab_0x4acb66_5:
    // 0x4acb66
    return result;
  lab_0x4acb20:;
    int64_t v15 = v3 - (int64_t)(int32_t)&g33; // 0x4acb20
    if ((int32_t)v15 != 0) {
        // 0x4acb29
        result = v15 & 0xffffffff;
        return result;
    }
    if (v6 == 0) {
        // break -> 0x4acb30
        goto lab_0x4acb30;
    }
    int64_t * v16 = (int64_t *)(v5 + 48); // 0x4ac9e0
    goto lab_0x4acafc;
  lab_0x4acafc:
    // 0x4acafc
    *(char *)(v5 + 56) = 1;
    int64_t * mem2 = calloc(1, 64); // 0x4acb0a
    int64_t v17 = (int64_t)mem2; // 0x4acb0a
    *v16 = v17;
    v4 = v17;
    result = 0xffffd780;
    if (mem2 == NULL) {
        // break (via goto) -> 0x4acb66
        goto lab_0x4acb66_5;
    }
    goto lab_0x4aca20;
  lab_0x4acac0:
    // 0x4acac0
    *(int32_t *)(v5 + 24) = (int32_t)v8;
    int64_t v18 = v5 + 32; // 0x4acac7
    *v1 = v7 + 1;
    int64_t v19 = function_4afd30(a1, v9, v18); // 0x4acad5
    v3 = v19;
    if ((int32_t)v19 != 0) {
        goto lab_0x4acb20;
    } else {
        // 0x4acaf6
        *(int64_t *)(v5 + 40) = a1;
        *v1 = *(int64_t *)v18 + a1;
        int64_t * v20 = (int64_t *)(v5 + 48);
        *v20 = 0;
        v16 = v20;
        goto lab_0x4acafc;
    }
}

// Address range: 0x4c5100 - 0x4c52b2
int64_t function_4c5100(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2; // bp-48, 0x4c511b
    int64_t v2; // bp-56, 0x4c5100
    int64_t v3 = function_4afe70((int64_t)&v1, a3 + a2, &v2, 48); // 0x4c5132
    if ((int32_t)v3 != 0) {
        // 0x4c5140
        return v3 - (int64_t)(int32_t)"cxa_get_globals_fast" & 0xffffffff;
    }
    int64_t v4 = v2 + v1; // 0x4c5165
    int64_t v5 = function_4aff10(&v1, v4, a1); // 0x4c5175
    if ((int32_t)v5 != 0) {
        // 0x4c5140
        return v5 - (int64_t)(int32_t)"cxa_get_globals_fast" & 0xffffffff;
    }
    // 0x4c517e
    int64_t v6; // 0x4c5100
    if ((int32_t)v6 != 0) {
        // 0x4c5140
        return 0xffffc280;
    }
    int64_t v7 = a1 + 16; // 0x4c5189
    int64_t v8 = function_4aff90(&v1, v4, v7); // 0x4c5198
    if ((int32_t)v8 != 0) {
        // 0x4c51d8
        function_4caa90(a1);
        // 0x4c5140
        return v8 + 0xffffc300 & 0xffffffff;
    }
    int64_t v9 = function_4aff90(&v1, v4, a1 + 40); // 0x4c51b0
    if ((int32_t)v9 != 0) {
        // 0x4c51d8
        function_4caa90(a1);
        // 0x4c5140
        return v9 + 0xffffc300 & 0xffffffff;
    }
    int64_t v10 = function_4aff90(&v1, v4, a1 + 64); // 0x4c51c8
    if ((int32_t)v10 != 0) {
        // 0x4c51d8
        function_4caa90(a1);
        // 0x4c5140
        return v10 + 0xffffc300 & 0xffffffff;
    }
    int64_t v11 = function_4aff90(&v1, v4, a1 + 88); // 0x4c51fc
    if ((int32_t)v11 != 0) {
        // 0x4c51d8
        function_4caa90(a1);
        // 0x4c5140
        return v11 + 0xffffc300 & 0xffffffff;
    }
    int64_t v12 = function_4aff90(&v1, v4, a1 + 112); // 0x4c5214
    if ((int32_t)v12 != 0) {
        // 0x4c51d8
        function_4caa90(a1);
        // 0x4c5140
        return v12 + 0xffffc300 & 0xffffffff;
    }
    int64_t v13 = function_4aff90(&v1, v4, a1 + 136); // 0x4c522f
    if ((int32_t)v13 != 0) {
        // 0x4c51d8
        function_4caa90(a1);
        // 0x4c5140
        return v13 + 0xffffc300 & 0xffffffff;
    }
    int64_t v14 = function_4aff90(&v1, v4, a1 + 160); // 0x4c524a
    if ((int32_t)v14 != 0) {
        // 0x4c51d8
        function_4caa90(a1);
        // 0x4c5140
        return v14 + 0xffffc300 & 0xffffffff;
    }
    int64_t v15 = function_4aff90(&v1, v4, a1 + 184); // 0x4c5265
    if ((int32_t)v15 != 0) {
        // 0x4c51d8
        function_4caa90(a1);
        // 0x4c5140
        return v15 + 0xffffc300 & 0xffffffff;
    }
    // 0x4c5275
    *(int64_t *)(a1 + 8) = function_4b0fa0(v7);
    if (v1 != v4) {
        // 0x4c52ad
        return function_4caa90(a1);
    }
    int64_t v16 = function_4c8ef0(a1); // 0x4c528b
    int64_t result = v16; // 0x4c5292
    if ((int32_t)v16 != 0) {
        // 0x4c5298
        function_4caa90(a1);
        result = v16 & 0xffffffff;
    }
    // 0x4c5140
    return result;
}

// Address range: 0x50ab00 - 0x50acb5
int64_t function_50ab00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    uint64_t v1 = function_566390(&g50); // 0x50ab0b
    int64_t v2 = *(int64_t *)((int64_t)&g50 + 8); // 0x50ab17
    int64_t v3 = (int64_t)&g50; // 0x50ab1b
    int64_t v4; // 0x50ab00
    int64_t v5; // 0x50ab00
    int64_t v6; // 0x50ab00
    int64_t v7; // 0x50ab00
    if (*(int64_t *)((int64_t)&g50 + 16) > v1) {
        int64_t v8 = *(int64_t *)(v2 + 8 * v1); // 0x50ab1d
        v3 = 0;
        if (v8 == 0) {
            goto lab_0x50ab42;
        } else {
            int64_t result = function_20730(v8, 0x847658, &g44, 0); // 0x50ab36
            v4 = 0;
            v6 = (int64_t)&g44;
            v7 = 0x847658;
            v5 = v8;
            if (result != 0) {
                // 0x50ab40
                return result;
            }
            goto lab_0x50ab47;
        }
    } else {
        goto lab_0x50ab42;
    }
  lab_0x50ab42:
    // 0x50ab42
    function_5423f0();
    v4 = v2;
    v6 = (int64_t)&g50;
    v7 = a2;
    v5 = v3;
    goto lab_0x50ab47;
  lab_0x50ab47:;
    int64_t v9 = v4;
    function_20110();
    int64_t v10 = v5; // bp-112, 0x50ab66
    int64_t v11 = function_50ab00(v9 + 208, v7, v6, v9, a5, a6, v5, v9); // 0x50ab85
    int64_t result2 = (int64_t)&g45; // 0x50ab8f
    if (a7 == a8) {
      lab_0x50ab40:
        // 0x50ab40
        return result2;
    }
    int64_t v12 = (int64_t)&v10; // 0x50ab62
    int64_t * v13 = (int64_t *)v11;
    int64_t * v14 = (int64_t *)(v12 + 120);
    int64_t v15 = v6; // 0x50ab98
    int64_t v16 = (int64_t)&g45;
    int64_t * v17 = (int64_t *)(v16 + 40);
    int64_t * v18 = (int64_t *)(v16 + 48);
    int64_t v19 = a7;
    int64_t v20 = v15 & 0xffffffff;
    int64_t v21 = *v13; // 0x50abb6
    int64_t v22 = v19 + 4; // 0x50abc1
    int64_t v23; // 0x50ab00
    uint64_t v24; // 0x50ac60
    uint32_t result3; // 0x50ac68
    while ((char)v21 != 37) {
        // 0x50aba0
        v23 = v20;
        if ((char)v20 == 0) {
            // 0x50ac60
            v24 = *v17;
            result3 = *(int32_t *)v19;
            if (v24 >= *v18) {
                // 0x50acb8
                return result3;
            }
            // 0x50ac6d
            *(int32_t *)v24 = result3;
            *v17 = v24 + 4;
            v23 = result3 == -1;
        }
        // 0x50aba8
        result2 = v16;
        if (*v14 == v22) {
            // break (via goto) -> 0x50ab40
            goto lab_0x50ab40;
        }
        v19 = v22;
        v20 = v23;
        v21 = *v13;
        v22 = v19 + 4;
    }
    int64_t v25 = *v14; // 0x50abcc
    result2 = v16;
    while (v25 != v22) {
        int64_t v26 = 0x100000000000000 * v21 >> 56; // 0x50abe2
        char v27 = v26; // 0x50abe6
        int64_t v28 = 0; // 0x50ab00
        int64_t v29 = v26; // 0x50ab00
        int64_t v30 = v22; // 0x50ac88
        switch (v27) {
            case 79: {
            }
            case 69: {
                // 0x50ac88
                v30 = v19 + 8;
                *(char *)(v12 + 31) = v27;
                if (v25 == v30) {
                    // break -> 0x50ab40
                    break;
                }
                // 0x50ac98
                v28 = v26;
                v29 = 0x100000000000000 * *v13 >> 56;
                // break -> 0x50abfc
                break;
            }
        }
        int64_t v31 = v20 % 256 | v15 & -256; // 0x50ac00
        int64_t v32 = v30 + 4; // 0x50ac06
        int64_t v33 = *(int64_t *)v10; // 0x50ac0d
        *(int64_t *)(v12 - 8) = v28;
        *(int64_t *)(v12 - 16) = v29;
        *(int64_t *)(v12 + 32) = v33;
        *(int64_t *)(v12 + 40) = v31;
        result2 = v33;
        v15 = v31;
        if (*v14 == v32) {
            // break -> 0x50ab40
            break;
        }
        v16 = v33;
        v17 = (int64_t *)(v16 + 40);
        v18 = (int64_t *)(v16 + 48);
        v19 = v32;
        v20 = v15 & 0xffffffff;
        v21 = *v13;
        v22 = v19 + 4;
        while ((char)v21 != 37) {
            // 0x50aba0
            v23 = v20;
            if ((char)v20 == 0) {
                // 0x50ac60
                v24 = *v17;
                result3 = *(int32_t *)v19;
                if (v24 >= *v18) {
                    // 0x50acb8
                    return result3;
                }
                // 0x50ac6d
                *(int32_t *)v24 = result3;
                *v17 = v24 + 4;
                v23 = result3 == -1;
            }
            // 0x50aba8
            result2 = v16;
            if (*v14 == v22) {
                // break (via goto) -> 0x50ab40
                goto lab_0x50ab40;
            }
            v19 = v22;
            v20 = v23;
            v21 = *v13;
            v22 = v19 + 4;
        }
        // 0x50abcc
        v25 = *v14;
        result2 = v16;
    }
    // 0x50ab40
    return result2;
}

// Address range: 0x50aff0 - 0x50b195
// From class:    std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_50aff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x50b024
    function_50ab00(a6 + 208, a2, a3, a4, a5, a6, v1, (int64_t)&g55);
    int32_t v2 = 0; // bp-68, 0x50b039
    int32_t v3; // bp-72, 0x50aff0
    int64_t result = function_50acd0(a1, a2, a3, a4, a5, (int64_t *)&v3, 0, &g36, 4, a6, &v2); // 0x50b071
    if (v2 != 0) {
        int32_t * v4 = (int32_t *)a7; // 0x50b118
        *v4 = *v4 | 4;
        if (result != 0) {
            goto lab_0x50b0c1;
        } else {
            goto lab_0x50b121;
        }
    } else {
        int32_t v5 = v3; // 0x50b0a4
        *(int32_t *)(a8 + 20) = (v5 < 0 ? 100 : -1900) + v5;
        if (result == 0) {
            goto lab_0x50b121;
        } else {
            goto lab_0x50b0c1;
        }
    }
  lab_0x50b0c1:
    if ((int32_t)a3 == -1) {
        uint64_t v6 = *(int64_t *)(result + 16); // 0x50b168
        if (v6 >= *(int64_t *)(result + 24)) {
            // 0x50b188
            return result;
        }
        // 0x50b172
        if (*(int32_t *)v6 == -1) {
            goto lab_0x50b121;
        } else {
            goto lab_0x50b0ca;
        }
    } else {
        goto lab_0x50b0ca;
    }
  lab_0x50b121:;
    int64_t result2 = 0; // 0x50b126
    int64_t result4; // 0x50aff0
    char v7; // 0x50aff0
    if (a4 == 0) {
        goto lab_0x50b0d5;
    } else {
        // 0x50b128
        result4 = 0;
        v7 = 1;
        if ((int32_t)a5 != -1) {
            // 0x50b0d9
            __readfsqword(40);
            return 0;
        }
        goto lab_0x50b143;
    }
  lab_0x50b0ca:
    // 0x50b0ca
    if (a4 == 0) {
        // 0x50b0d9
        __readfsqword(40);
        return result;
    }
    // 0x50b0cf
    result2 = result;
    result4 = result;
    v7 = 0;
    if ((int32_t)a5 == -1) {
        goto lab_0x50b143;
    } else {
        goto lab_0x50b0d5;
    }
  lab_0x50b0d5:;
    int32_t * v8 = (int32_t *)a7; // 0x50b0d5
    *v8 = *v8 | 2;
    // 0x50b0d9
    __readfsqword(40);
    return result2;
  lab_0x50b143:;
    uint64_t result3 = *(int64_t *)(a4 + 16); // 0x50b143
    if (result3 >= *(int64_t *)(a4 + 24)) {
        // 0x50b188
        return result3;
    }
    // 0x50b14d
    result2 = result4;
    if (v7 != (char)(*(int32_t *)result3 == -1)) {
        // 0x50b0d9
        __readfsqword(40);
        return result4;
    }
    goto lab_0x50b0d5;
}

// Address range: 0x50cd40 - 0x50cef1
int64_t function_50cd40(int64_t a1, int64_t wc, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t n = a5 - a6; // 0x50cd50
    uint32_t v1 = *(int32_t *)(a1 + 24) & 176; // 0x50cd60
    int64_t result = v1; // 0x50cd40
    int64_t wstr2 = a3; // 0x50cd40
    int64_t wstr = a4; // 0x50cd40
    int64_t n2 = a6; // 0x50cd40
    switch ((char)v1) {
        case 32: {
            // 0x50cdc8
            if (a6 == 0 && n != 0) {
                // 0x50cdd6
                return (int64_t)wmemset((int32_t *)(4 * a6 + a3), (int32_t)wc, (int32_t)n);
            }
            // 0x50cd80
            return 32;
        }
        case 16: {
            int32_t v2 = a4;
            int64_t v3 = function_50ab00(a1 + 208, wc, a3, a4, a5, a6, a6, (int64_t)&g55); // 0x50ce04
            int64_t v4 = *(int64_t *)v3; // 0x50ce0c
            result = v4;
            wstr2 = a3;
            wstr = a4;
            n2 = a6;
            if (v2 == (int32_t)v4) {
                // 0x50ced0
                *(int32_t *)a3 = v2;
                result = v4;
                wstr2 = a3 + 4;
                wstr = a4 + 4;
                n2 = a6 - 1;
            }
            // break -> 0x50cd76
            break;
        }
    }
    // 0x50cd76
    int32_t * v5; // 0x50cda9
    if (n == 0) {
        // 0x50cd7b
        if (n2 == 0) {
            // 0x50cd80
            return result;
        }
        // 0x50cd90
        v5 = wmemcpy((int32_t *)(wstr2 + 4 * n), (int32_t *)wstr, (int32_t)n2);
        return (int64_t)v5;
    }
    int64_t result2 = (int64_t)wmemset((int32_t *)wstr2, (int32_t)wc, (int32_t)n); // 0x50cdc1
    if (n2 == 0) {
        // 0x50cd80
        return result2;
    }
    // 0x50cd90
    v5 = wmemcpy((int32_t *)(wstr2 + 4 * n), (int32_t *)wstr, (int32_t)n2);
    return (int64_t)v5;
}

// Address range: 0x529840 - 0x5299eb
// From class:    std::__cxx11::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_529840(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x529840
    __readfsqword(40);
    function_554b00();
    int64_t v1 = 0; // bp-88, 0x5298bc
    int64_t v2 = (int64_t)&v1; // 0x5298c0
    int64_t v3 = v2; // bp-104, 0x5298c0
    int64_t result; // 0x529840
    if ((char)a6 == 0) {
        // 0x529960
        result = function_5282e0(a1, a2, a3, a4, a5, a7, a8, &v3);
    } else {
        // 0x5298db
        result = function_526ea0(a1, a2, a3, a4, a5, a7, a8, &v3);
    }
    // 0x529921
    if (v3 != v2) {
        // 0x52992e
        function_4eeb50(v3);
    }
    // 0x529933
    __readfsqword(40);
    return result;
}

// Address range: 0x55ec80 - 0x55ee31
// From class:    std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_55ec80(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x55ec80
    __readfsqword(40);
    int64_t v1 = a4; // bp-104, 0x55ecbd
    int64_t v2 = (int64_t)&g49; // bp-80, 0x55ecd8
    function_259ce(&v2);
    int64_t v3 = function_55bec0(a1, a2, a3, a4, a5, a6, a7, &v2); // 0x55ecf9
    int64_t v4 = function_565f30(); // bp-72, 0x55ed49
    int64_t result = function_567850(v2, a8, a7, &v4); // 0x55ed50
    if (v3 == 0) {
        // 0x55ee31
        return result;
    }
    int64_t result2 = v3; // 0x55ed64
    int64_t v5 = a3 & 0xffffffff; // 0x55ed64
    char v6 = 0; // 0x55ed64
    if ((int32_t)a3 == -1) {
        uint64_t v7 = *(int64_t *)(v3 + 16); // 0x55edd7
        if (v7 >= *(int64_t *)(v3 + 24)) {
            int64_t v8 = *(int64_t *)v3; // 0x55ee0f
            result2 = (int32_t)v8 != -1 ? v3 : 0;
            v5 = v8 & 0xffffffff;
            v6 = (int32_t)v8 == -1;
        } else {
            // 0x55ede1
            result2 = v3;
            v5 = (int64_t)*(char *)v7;
            v6 = 0;
        }
    }
    // 0x55ed66
    if (v6 == (char)((int32_t)function_5246d0(&v1) == -1)) {
        int32_t * v9 = (int32_t *)a7; // 0x55ed7a
        *v9 = *v9 | 2;
    }
    // 0x55ed7f
    if (g46 != &g48) {
        int64_t v10 = a3 < 0xffffffff00000001 ? a3 : a3 + 0xffffffff; // 0x55ed89
        function_552550(&g48, &v4, v5 | v10);
    }
    // 0x55eda4
    __readfsqword(40);
    return result2;
}

// Address range: 0x56bf40 - 0x56c0f5
// From class:    std::codecvt_byname<wchar_t, char, __mbstate_t>
// Type:          virtual member function
int64_t function_56bf40(int64_t a1, int64_t ps, int64_t str, uint64_t a4, int64_t length) {
    int64_t wstr2 = str; // bp-80, 0x56bf65
    __readfsqword(40);
    int64_t ps2 = ps; // bp-72, 0x56bf78
    struct __locale_struct * v1 = __uselocale((struct __locale_struct *)*(int64_t *)(a1 + 16)); // 0x56bf7c
    int64_t v2 = 0; // 0x56bfb3
    if (str >= a4) {
      lab_0x56c068_2:
        // 0x56c068
        __uselocale(v1);
        __readfsqword(40);
        return v2 & 0xffffffff;
    }
    // 0x56bfb9
    int64_t v3; // bp-136, 0x56bf40
    int32_t * wstr = (int32_t *)(15 - (4 * length + 30 & -16) + (int64_t)&v3 & -16); // 0x56bfa1
    int64_t v4 = (int64_t)&wstr2;
    int64_t v5 = 0; // 0x56c048
    v2 = v5;
    if (length == 0) {
        // break (via goto) -> 0x56c068
        goto lab_0x56c068_2;
    }
    int64_t v6 = a4 - str;
    int32_t n = v6;
    int64_t * found_byte_pos = memchr((int64_t *)str, 0, n); // 0x56bfd4
    int64_t v7 = (int64_t)found_byte_pos; // 0x56bfd4
    int64_t nms = found_byte_pos == NULL ? v6 : v7 - str;
    int32_t v8 = mbsnrtowcs(wstr, (char **)&wstr2, (int32_t)nms, (int32_t)length, (struct _TYPEDEF___mbstate_t *)ps); // 0x56c001
    int32_t v9; // 0x56bf40
    int32_t v10; // 0x56c0d6
    if (v8 == -1) {
        // 0x56c0cb
        wstr2 = str;
        v10 = mbrtowc(NULL, (char *)str, n, (struct _TYPEDEF___mbstate_t *)&ps2);
        v9 = v10;
        if (v10 > 0xfffffffd) {
            // 0x56c0e5
            return ps2;
        }
        goto lab_0x56c0c0;
    }
    int64_t v11 = wstr2; // 0x56c014
    int64_t v12; // 0x56bf40
    int64_t v13; // 0x56bf40
    int64_t v14; // 0x56bf40
    if (v11 == 0) {
        // 0x56c0a0
        v12 = found_byte_pos == NULL ? a4 : v7;
        wstr2 = v12;
        v14 = nms;
        v13 = v12;
    } else {
        // 0x56c021
        v14 = v11 - str;
        v13 = v11;
    }
    uint64_t v15 = v13;
    int64_t v16 = v14 + v5; // 0x56c028
    int64_t length3 = length - (int64_t)v8; // 0x56c02b
    int64_t str2; // 0x56bf40
    int64_t length2; // 0x56bf40
    int64_t v17; // 0x56c044
    while (length3 != 0 && v15 < a4) {
        // 0x56c040
        v17 = v15 + 1;
        v5 = v16 + 1 & 0xffffffff;
        wstr2 = v17;
        ps2 = v4;
        length2 = length3 - 1;
        v2 = v5;
        if (v17 >= a4) {
            // break (via goto) -> 0x56c068
            goto lab_0x56c068_2;
        }
        v2 = v5;
        if (length2 == 0) {
            // break (via goto) -> 0x56c068
            goto lab_0x56c068_2;
        }
        // 0x56bfc2
        str2 = v17;
        v6 = a4 - str2;
        n = v6;
        found_byte_pos = memchr((int64_t *)str2, 0, n);
        v7 = (int64_t)found_byte_pos;
        nms = found_byte_pos == NULL ? v6 : v7 - str2;
        v8 = mbsnrtowcs(wstr, (char **)&wstr2, (int32_t)nms, (int32_t)length2, (struct _TYPEDEF___mbstate_t *)ps);
        if (v8 == -1) {
            // 0x56c0cb
            wstr2 = str2;
            v10 = mbrtowc(NULL, (char *)str2, n, (struct _TYPEDEF___mbstate_t *)&ps2);
            v9 = v10;
            if (v10 > 0xfffffffd) {
                // 0x56c0e5
                return ps2;
            }
            goto lab_0x56c0c0;
        }
        // 0x56c014
        v11 = wstr2;
        if (v11 == 0) {
            // 0x56c0a0
            v12 = found_byte_pos == NULL ? a4 : v7;
            wstr2 = v12;
            v14 = nms;
            v13 = v12;
        } else {
            // 0x56c021
            v14 = v11 - str2;
            v13 = v11;
        }
        // 0x56c028
        v15 = v13;
        v16 = v14 + v5;
        length3 = length2 - (int64_t)v8;
    }
    int64_t v18 = v16 & 0xffffffff; // 0x56c028
    v2 = v18;
    while (v15 < a4) {
        // 0x56bfb9
        v2 = v18;
        if (length3 == 0) {
            // break (via goto) -> 0x56c068
            goto lab_0x56c068_2;
        }
        // 0x56bfc2
        str2 = v15;
        v6 = a4 - str2;
        n = v6;
        found_byte_pos = memchr((int64_t *)str2, 0, n);
        v7 = (int64_t)found_byte_pos;
        nms = found_byte_pos == NULL ? v6 : v7 - str2;
        v8 = mbsnrtowcs(wstr, (char **)&wstr2, (int32_t)nms, (int32_t)length3, (struct _TYPEDEF___mbstate_t *)ps);
        if (v8 == -1) {
            // 0x56c0cb
            wstr2 = str2;
            v10 = mbrtowc(NULL, (char *)str2, n, (struct _TYPEDEF___mbstate_t *)&ps2);
            v9 = v10;
            if (v10 > 0xfffffffd) {
                // 0x56c0e5
                return ps2;
            }
            goto lab_0x56c0c0;
        }
        // 0x56c014
        v11 = wstr2;
        if (v11 == 0) {
            // 0x56c0a0
            v12 = found_byte_pos == NULL ? a4 : v7;
            wstr2 = v12;
            v14 = nms;
            v13 = v12;
        } else {
            // 0x56c021
            v14 = v11 - str2;
            v13 = v11;
        }
        // 0x56c028
        v15 = v13;
        v16 = v14 + v18;
        length3 -= (int64_t)v8;
        while (length3 != 0 && v15 < a4) {
            // 0x56c040
            v17 = v15 + 1;
            v5 = v16 + 1 & 0xffffffff;
            wstr2 = v17;
            ps2 = v4;
            length2 = length3 - 1;
            v2 = v5;
            if (v17 >= a4) {
                // break (via goto) -> 0x56c068
                goto lab_0x56c068_2;
            }
            v2 = v5;
            if (length2 == 0) {
                // break (via goto) -> 0x56c068
                goto lab_0x56c068_2;
            }
            // 0x56bfc2
            str2 = v17;
            v6 = a4 - str2;
            n = v6;
            found_byte_pos = memchr((int64_t *)str2, 0, n);
            v7 = (int64_t)found_byte_pos;
            nms = found_byte_pos == NULL ? v6 : v7 - str2;
            v8 = mbsnrtowcs(wstr, (char **)&wstr2, (int32_t)nms, (int32_t)length2, (struct _TYPEDEF___mbstate_t *)ps);
            if (v8 == -1) {
                // 0x56c0cb
                wstr2 = str2;
                v10 = mbrtowc(NULL, (char *)str2, n, (struct _TYPEDEF___mbstate_t *)&ps2);
                v9 = v10;
                if (v10 > 0xfffffffd) {
                    // 0x56c0e5
                    return ps2;
                }
                goto lab_0x56c0c0;
            }
            // 0x56c014
            v11 = wstr2;
            if (v11 == 0) {
                // 0x56c0a0
                v12 = found_byte_pos == NULL ? a4 : v7;
                wstr2 = v12;
                v14 = nms;
                v13 = v12;
            } else {
                // 0x56c021
                v14 = v11 - str2;
                v13 = v11;
            }
            // 0x56c028
            v15 = v13;
            v16 = v14 + v5;
            length3 = length2 - (int64_t)v8;
        }
        // 0x56bfb0
        v18 = v16 & 0xffffffff;
        v2 = v18;
    }
    // 0x56c068
    __uselocale(v1);
    __readfsqword(40);
    return v2 & 0xffffffff;
  lab_0x56c0c0:;
    int64_t wstr3 = wstr2 + (int64_t)v9; // 0x56c0c0
    wstr2 = wstr3;
    int32_t v19 = mbrtowc(NULL, (char *)wstr3, (int32_t)(a4 - wstr3), (struct _TYPEDEF___mbstate_t *)&ps2); // 0x56c0d6
    v9 = v19;
    if (v19 > 0xfffffffd) {
        // 0x56c0e5
        return ps2;
    }
    goto lab_0x56c0c0;
}
