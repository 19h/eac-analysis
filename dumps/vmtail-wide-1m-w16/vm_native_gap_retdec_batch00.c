/*
 * Targeted RetDec C for native executable gap queue batch 0.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x568cf0-0x568eea rank=- name=- kind=- bytes=- uncovered=-
 *   0x56274-0x5646b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fed10-0x4fef07 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25a3e-0x25c34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x500b70-0x500d66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x498230-0x498422 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c98a0-0x4c9a91 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ceb0-0x2d09e rank=- name=- kind=- bytes=- uncovered=-
 *   0x579d80-0x579f6e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f75e-0x4f94a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d3da0-0x4d3f8b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fbb00-0x4fbceb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b2990-0x4b2b79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f76-0x5415e rank=- name=- kind=- bytes=- uncovered=-
 *   0x5534e-0x55536 rank=- name=- kind=- bytes=- uncovered=-
 *   0x568500-0x5686e7 rank=- name=- kind=- bytes=- uncovered=-
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
struct _TYPEDEF_glob_t;
struct _TYPEDEF___mbstate_t;
struct _IO_FILE;
struct sockaddr;
struct utsname;
#define F_GETFL 3
#define F_SETFL 4
#define SO_DEBUG 1
extern int g1;
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
void *iconv_open(const char *tocode, const char *fromcode);
int32_t iconv(void *cd, char **inbuf, int32_t *inbytesleft, char **outbuf, int32_t *outbytesleft);
int iconv_close(void *cd);
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
int fcntl(int fd, int cmd, ...);
int32_t *__errno_location(void);
int connect(int sockfd, const struct sockaddr *addr, int32_t addrlen);
int getsockopt(int sockfd, int level, int optname, void *optval, int32_t *optlen);
int64_t readlink(const char *path, char *buf, size_t bufsiz);
char *realpath(const char *path, char *resolved_path);
int glob(const char *pattern, int flags, void *errfunc, struct _TYPEDEF_glob_t *pglob);
void globfree(struct _TYPEDEF_glob_t *pglob);
char *__xpg_basename(char *path);
int32_t eac_retdec_vsnprintf(char *str, int32_t size, char *format, int64_t ap);
int64_t __wctype_l(const char *property, struct __locale_struct *locale);
char *strdup(const char *s);
struct _Unwind_Exception;
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_1270cb();
int64_t function_1ff50();
int64_t function_20550();
int64_t function_2509a();
int64_t function_254fe();
int64_t function_25506();
int64_t function_25a3e();
int64_t function_29c3a();
int64_t function_2ceb0();
int64_t function_2cf54();
int64_t function_2cf69();
int64_t function_2cfcd();
int64_t function_2d044();
int64_t function_2d05e();
int64_t function_2d07f();
int64_t function_2d083();
int64_t function_35ef6();
int64_t function_48bde0();
int64_t function_48eb2b();
int64_t function_4945c0();
int64_t function_497750();
int64_t function_497930();
int64_t function_497970();
int64_t function_498230();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0ac0();
int64_t function_4b0f10();
int64_t function_4b28b0();
int64_t function_4b2990();
int64_t function_4c14d0();
int64_t function_4c1690();
int64_t function_4c16b0();
int64_t function_4c1770();
int64_t function_4c18b0();
int64_t function_4c19e0();
int64_t function_4c1af0();
int64_t function_4c1b30();
int64_t function_4c1d00();
int64_t function_4c8790();
int64_t function_4c8fa0();
int64_t function_4c9080();
int64_t function_4c9480();
int64_t function_4c96e0();
int64_t function_4c98a0();
int64_t function_4c9900();
int64_t function_4d3da0();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f15a0();
int64_t function_4f75e();
int64_t function_4fbb00();
int64_t function_4fed10();
int64_t function_500b70();
int64_t function_50557();
int64_t function_50b1c0();
int64_t function_52770();
int64_t function_53b22();
int64_t function_53f2a();
int64_t function_53f76();
int64_t function_540380();
int64_t function_540ad0();
int64_t function_540f00();
int64_t function_5423b0();
int64_t function_54c6d0();
int64_t function_54eda();
int64_t function_55302();
int64_t function_5534e();
int64_t function_55eda();
int64_t function_56274();
int64_t function_567c30();
int64_t function_567d40();
int64_t function_568500();
int64_t function_568cf0();
int64_t function_579d20();
int64_t function_579d80();
int64_t function_594b8();
int64_t function_7293a();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x25a3e - 0x25c34
int64_t function_25a3e(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x25a52
    int64_t * v2 = (int64_t *)(a1 + 48); // 0x25a56
    int64_t v3 = *v2; // 0x25a56
    int64_t * v4; // 0x25a3e
    int64_t v5; // 0x25a3e
    if (v3 == *v1 - 24) {
        int64_t * v6 = (int64_t *)(a1 + 72); // 0x25a89
        int64_t v7 = *v6; // 0x25a89
        int64_t * v8 = (int64_t *)(a1 + 8); // 0x25a90
        uint64_t v9 = *v8; // 0x25a90
        int64_t * v10; // 0x25a3e
        int64_t v11; // 0x25a3e
        if (v9 - (v7 - v3 >> 3) < 2) {
            int64_t * v12 = (int64_t *)(a1 + 40); // 0x25aae
            uint64_t v13 = *v12; // 0x25aae
            int64_t v14 = (v7 - v13) / 8; // 0x25ab8
            int64_t v15 = v14 + 2; // 0x25abc
            int64_t v16 = v14 + 1; // 0x25ac0
            uint64_t v17 = 2 * v15; // 0x25ac4
            int64_t v18; // 0x25a3e
            if (v9 > v17) {
                int64_t v19 = 8 * (v9 - v15) / 2 + v3; // 0x25ad4
                int64_t v20 = v7 + 8; // 0x25ad8
                int64_t v21 = v20 - v13; // 0x25adf
                if (v13 > v19) {
                    // 0x25ae7
                    v18 = v19;
                    if (v20 != v13) {
                        // 0x25af0
                        memmove((int64_t *)v19, (int64_t *)v13, (int32_t)v21);
                        v18 = v19;
                    }
                } else {
                    // 0x25afd
                    v18 = v19;
                    if (v20 != v13) {
                        // 0x25b0a
                        memmove((int64_t *)(8 * v16 - v21 + v19), (int64_t *)v13, (int32_t)v21);
                        v18 = v19;
                    }
                }
            } else {
                int64_t v22 = v9 != 0 ? v9 : 1; // 0x25b1f
                uint64_t v23 = v9 + 2 + v22; // 0x25b23
                if (v23 >= 0x2000000000000000) {
                    // 0x25b37
                    function_5423b0(v3, v13, v17, v22);
                }
                int64_t v24 = 8 * v23; // 0x25b3c
                int64_t v25 = function_4efd30(v24); // 0x25b44
                int64_t v26 = *v12; // 0x25b4f
                int64_t v27 = v25 + 8 * (v23 - v15) / 2; // 0x25b59
                int64_t v28 = *v6 + 8; // 0x25b61
                int64_t v29 = v24; // 0x25b68
                if (v28 != v26) {
                    // 0x25b6a
                    memmove((int64_t *)v27, (int64_t *)v26, (int32_t)(v28 - v26));
                    v29 = v27;
                }
                // 0x25b75
                function_4eeb50(v29);
                *(int64_t *)a1 = v25;
                *v8 = v23;
                v18 = v27;
            }
            int64_t v30 = *(int64_t *)v18; // 0x25b84
            *v12 = v18;
            *(int64_t *)(a1 + 24) = v30;
            *(int64_t *)(a1 + 32) = v30 + 504;
            int64_t v31 = 8 * v16 - 8 + v18; // 0x25b9a
            *v6 = v31;
            int64_t v32 = *(int64_t *)v31; // 0x25ba3
            int64_t * v33 = (int64_t *)(a1 + 56);
            *v33 = v32;
            *v1 = v32 + 504;
            v10 = v33;
            v11 = *v6;
        } else {
            // 0x25a89
            v10 = (int64_t *)(a1 + 56);
            v11 = v7;
        }
        // 0x25bb4
        *(int64_t *)(v11 + 8) = function_4efd30(504);
        int64_t v34 = *v2; // 0x25bc9
        *(int64_t *)v34 = 0;
        *(int64_t *)(v34 + 8) = 0;
        *(int64_t *)(v34 + 16) = 0;
        function_25506(v34, a2);
        int64_t v35 = *v6 + 8; // 0x25bed
        int64_t v36 = *(int64_t *)v35; // 0x25bf1
        *v6 = v35;
        *v10 = v36;
        *v2 = v36;
        *v1 = v36 + 504;
        v4 = v10;
        v5 = *v2;
    } else {
        // 0x25a63
        *(int64_t *)v3 = 0;
        *(int64_t *)(v3 + 8) = 0;
        *(int64_t *)(v3 + 16) = 0;
        function_25506(v3, a2);
        int64_t v37 = *v2 + 24; // 0x25a7f
        *v2 = v37;
        v4 = (int64_t *)(a1 + 56);
        v5 = v37;
    }
    int64_t v38 = v5; // 0x25c14
    if (v5 == *v4) {
        // 0x25c16
        v38 = *(int64_t *)(*(int64_t *)(a1 + 72) - 8) + 504;
    }
    // 0x25c24
    return v38 - 24;
}

// Address range: 0x2ceb0 - 0x2cf1d
int64_t function_2ceb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x2ceb0
    __readfsqword(40);
    return function_1270cb();
}

// Address range: 0x2cf54 - 0x2cf55
int64_t function_2cf54(void) {
    // 0x2cf54
    int64_t result; // 0x2cf54
    return result;
}

// Address range: 0x2cf69 - 0x2cf6a
int64_t function_2cf69(void) {
    // 0x2cf69
    int64_t result; // 0x2cf69
    return result;
}

// Address range: 0x2cfcd - 0x2cfcf
int64_t function_2cfcd(void) {
    // 0x2cfcd
    return function_2cf54();
}

// Address range: 0x2d044 - 0x2d049
int64_t function_2d044(void) {
    // 0x2d044
    return __asm_iretd();
}

// Address range: 0x2d05e - 0x2d063
int64_t function_2d05e(int64_t a1) {
    // 0x2d05e
    int64_t result; // 0x2d05e
    return result;
}

// Address range: 0x2d07f - 0x2d082
int64_t function_2d07f(int64_t a1) {
    // 0x2d07f
    int64_t result; // 0x2d07f
    return result;
}

// Address range: 0x2d083 - 0x2d086
int64_t function_2d083(int64_t a1) {
    // 0x2d083
    int64_t result; // 0x2d083
    return result;
}

// Address range: 0x4f75e - 0x4f94a
int64_t function_4f75e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6) {
    // 0x4f75e
    *(int64_t *)a1 = a2;
    int64_t v1 = __readfsqword(40); // 0x4f781
    function_2509a(a1 + 8, a3);
    function_2509a(a1 + 16, a4);
    int64_t v2; // bp-56, 0x4f75e
    function_729b6(&v2, &g37);
    int16_t v3 = (int16_t)g36 + 1; // 0x4f7bb
    int16_t v4 = v3 == 0 ? 1 : v3;
    *(int16_t *)&g36 = v4;
    function_729ce(&v2);
    *(int16_t *)(a1 + 24) = v4;
    int64_t * v5 = (int64_t *)(a1 + 32); // 0x4f7ea
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a1 + 40); // 0x4f7f2
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a1 + 48); // 0x4f7fa
    *v7 = 0;
    int64_t v8; // 0x4f75e
    if (a6 == 0) {
        // 0x4f828
        *v5 = 0;
        *v6 = 0;
        *v7 = 0;
        v8 = 0;
    } else {
        if (a6 >= 0x208208208208209) {
            // 0x4f813
            function_5423b0((int64_t)&v2, (int64_t)&g37, a3, a4);
        }
        int64_t v9 = 126 * a6;
        int64_t v10 = function_4efd30(v9); // 0x4f81c
        *v5 = v10;
        *v6 = v10;
        int64_t v11 = v10 + v9; // 0x4f836
        *v7 = v11;
        int64_t v12 = a6; // 0x4f84a
        int64_t v13 = v10; // 0x4f75e
        v12--;
        __asm_rep_stosb_memset((char *)v13, 0, 126);
        bool v14; // 0x4f75e
        v13 += (v14 ? -126 : 126);
        v8 = v11;
        while (v12 != 0) {
            // 0x4f842
            v12--;
            __asm_rep_stosb_memset((char *)v13, 0, 126);
            v13 += (v14 ? -126 : 126);
            v8 = v11;
        }
    }
    // 0x4f854
    *v6 = v8;
    *(int32_t *)(a1 + 56) = (int32_t)a5;
    *(int64_t *)(a1 + 72) = 0;
    *(int64_t *)(a1 + 120) = 0;
    *(int64_t *)(a1 + 128) = 0;
    *(int64_t *)(a1 + 136) = 0;
    *(int64_t *)(a1 + 200) = 0;
    function_7293a(a1 + 208);
    int64_t v15 = __readfsqword(40); // 0x4f89e
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 80) = 0;
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 96) = 0;
    *(int64_t *)(a1 + 104) = 0;
    *(int64_t *)(a1 + 112) = 0;
    *(int64_t *)(a1 + 144) = 0;
    *(char *)(a1 + 152) = 0;
    *(int64_t *)(a1 + 160) = 0;
    *(int64_t *)(a1 + 168) = 0;
    *(int64_t *)(a1 + 176) = 0;
    *(int64_t *)(a1 + 184) = 0;
    *(int64_t *)(a1 + 192) = 0;
    *(int64_t *)(a1 + 248) = 0;
    *(int64_t *)(a1 + 256) = 0;
    int64_t result = 0; // 0x4f936
    if (v1 != v15) {
        // 0x4f938
        __stack_chk_fail();
        result = (int64_t)&g39;
    }
    // 0x4f93d
    return result;
}

// Address range: 0x53f76 - 0x5415e
int64_t function_53f76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x53f93
    int32_t v2 = 0; // bp-668, 0x53fb3
    bool v3 = true; // 0x53fbb
    if (a3 != 0) {
        // 0x53fbd
        v3 = *(int64_t *)(a3 + 8) == a3;
    }
    int64_t v4 = 0; // bp-664, 0x53fd9
    function_53f2a(&v4, &g7, &g8);
    int64_t v5 = 0; // bp-616, 0x54017
    function_53f2a(&v5, &g9, &g10);
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x54042
    int64_t v7 = function_53b22(a1, a2, *v6, &v5, &v4, &v2, a5); // 0x54059
    int64_t v8 = 0x100000000 * v7 >> 32; // 0x54061
    function_254fe(&v5);
    int64_t v9 = v8 & 0xffffffff; // 0x54073
    if (!v3 && (int32_t)v8 != 0) {
        int64_t v10 = 0; // bp-640, 0x54093
        function_53f2a(&v10, &g9, &g10);
        int64_t v11 = *v6; // 0x540c5
        int64_t v12 = function_53b22(a1, a3, v11, &v10, &v4, &v2, (int64_t)&v5); // 0x540dc
        function_254fe(&v10);
        int32_t v13 = 0x1000000 * (int32_t)v12;
        v9 = v13 >> 24;
        if (v13 == 0) {
            int64_t v14 = function_53b22(a1, a2, 0, (int64_t *)a3, (int64_t *)a4, &v2, a5); // 0x54114
            v9 = v14;
        }
    }
    int64_t v15 = function_50557(v9 & 0xffffffff, v2); // 0x54121
    function_254fe(&v4);
    int64_t result = v15 & 0xffffffff; // 0x54145
    if (v1 != __readfsqword(40)) {
        // 0x54147
        __stack_chk_fail();
        result = (int64_t)&g39;
    }
    // 0x5414c
    return result;
}

// Address range: 0x5534e - 0x55536
int64_t function_5534e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x5536b
    int32_t v2 = 0; // bp-668, 0x5538b
    bool v3 = true; // 0x55393
    if (a3 != 0) {
        // 0x55395
        v3 = *(int64_t *)(a3 + 8) == a3;
    }
    int64_t v4 = 0; // bp-664, 0x553b1
    function_55302(&v4, &g11, &g12);
    int64_t v5 = 0; // bp-616, 0x553ef
    function_55302(&v5, &g13, &g14);
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x5541a
    int64_t v7 = function_54eda(a1, a2, *v6, &v5, &v4, &v2, a5); // 0x55431
    int64_t v8 = 0x100000000 * v7 >> 32; // 0x55439
    function_254fe(&v5);
    int64_t v9 = v8 & 0xffffffff; // 0x5544b
    if (!v3 && (int32_t)v8 != 0) {
        int64_t v10 = 0; // bp-640, 0x5546b
        function_55302(&v10, &g13, &g14);
        int64_t v11 = *v6; // 0x5549d
        int64_t v12 = function_54eda(a1, a3, v11, &v10, &v4, &v2, (int64_t)&v5); // 0x554b4
        function_254fe(&v10);
        int32_t v13 = 0x1000000 * (int32_t)v12;
        v9 = v13 >> 24;
        if (v13 == 0) {
            int64_t v14 = function_54eda(a1, a2, 0, (int64_t *)a3, (int64_t *)a4, &v2, a5); // 0x554ec
            v9 = v14;
        }
    }
    int64_t v15 = function_50557(v9 & 0xffffffff, v2); // 0x554f9
    function_254fe(&v4);
    int64_t result = v15 & 0xffffffff; // 0x5551d
    if (v1 != __readfsqword(40)) {
        // 0x5551f
        __stack_chk_fail();
        result = (int64_t)&g39;
    }
    // 0x55524
    return result;
}

// Address range: 0x56274 - 0x5646b
int64_t function_56274(int64_t a1) {
    int64_t v1 = a1 + 120; // 0x56281
    int64_t v2 = a1 + (int64_t)&g4; // 0x56289
    int64_t v3 = __readfsqword(40); // 0x5629f
    int64_t v4; // bp-72, 0x56274
    int64_t v5; // bp-80, 0x56274
    function_35ef6(&v4, *(int64_t *)v2, &v5);
    int64_t v6; // bp-96, 0x56274
    function_48eb2b(&v6, &v4);
    function_29c3a(&v4);
    function_540f00(a1, &v6, 4);
    if ((char)function_4f15a0(v1) == 0) {
        // 0x562ed
        if ((char)function_48bde0(0) != 0) {
            int64_t v7 = (int64_t)&g38; // bp-88, 0x56307
            if (*(char *)&g35 == 0) {
                // 0x5631a
                if ((int32_t)function_20550(&g35) != 0) {
                    // 0x5632e
                    g26 = (int64_t)&g38;
                    g28 = 1;
                    g29 = 0;
                    g27 = (int64_t)&g33;
                    g30 = 0;
                    *(int32_t *)&g31 = 0x3f800000;
                    g32 = 0;
                    g33 = 0;
                    g34 = (int64_t)&g38;
                    function_1ff50(&g35);
                    __cxa_atexit((void (*)(int64_t *))0x36210, &g26, (int64_t *)0x849800);
                }
            }
            // 0x563b1
            if ((char)function_594b8(&g26, v2, &v7) != 0) {
                // 0x563d3
                function_52770(v2, &v7);
                int64_t v8; // bp-97, 0x56274
                function_35ef6(&v4, v7, &v8);
                function_48eb2b(&v5, &v4);
                function_29c3a(&v4);
                function_540f00(a1, &v5, 4);
                function_55eda(v5 - 24);
            }
            // 0x56421
            function_29c3a(&v7);
        }
    }
    int64_t result = function_55eda(v6 - 24) & -256 | function_4f15a0(v1) % 256; // 0x56455
    if (v3 != __readfsqword(40)) {
        // 0x56457
        __stack_chk_fail();
        result = (int64_t)&g39;
    }
    // 0x5645c
    return result;
}

// Address range: 0x498230 - 0x498422
int64_t function_498230(int64_t a1, int64_t a2) {
    // 0x498230
    *(int32_t *)(a1 + 8) = 0;
    function_4945c0();
    int64_t * v1 = (int64_t *)(a1 + 160); // 0x498249
    *(int32_t *)(a1 + 12) = 0;
    *(int32_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 408) = 0;
    *(int64_t *)(a1 + 416) = 0;
    *(int32_t *)(a1 + 424) = 0;
    *(int64_t *)(a1 + 428) = 0;
    *(int32_t *)(a1 + 436) = 0;
    *(int32_t *)(a1 + 400) = 0;
    *(int64_t *)(a1 + 208) = 0;
    *(int64_t *)(a1 + 200) = *v1 + 13;
    *(int32_t *)(a1 + 216) = 0;
    *(int64_t *)(a1 + 224) = 0;
    if ((int32_t)a2 == 0) {
        // 0x4982cc
        *(int64_t *)(a1 + 232) = 0;
    }
    int64_t v2 = *(int64_t *)(a1 + 288); // 0x4982d7
    char * v3 = (char *)(a1 + 360); // 0x4982de
    *(int64_t *)(a1 + 248) = 0;
    *(int16_t *)(a1 + 240) = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)(a1 + 264) = 0;
    *(int64_t *)(a1 + 272) = 0;
    *(int32_t *)(a1 + 280) = 0;
    *(int32_t *)(a1 + 284) = 0;
    *(int32_t *)(a1 + 336) = 0;
    *(int64_t *)(a1 + 328) = v2 + 13;
    *(int64_t *)(a1 + 344) = 0;
    *(int64_t *)(a1 + 352) = 0;
    if (*v3 != 0) {
        // 0x49835b
        *v3 = 0;
    }
    // 0x498362
    *(int64_t *)(a1 + 104) = 0;
    *(int64_t *)(a1 + 112) = 0;
    memset((int64_t *)v2, 0, (int32_t)&g6);
    if ((int32_t)a2 == 0) {
        // 0x4983e0
        memset((int64_t *)*v1, 0, (int32_t)&g6);
    }
    int64_t * v4 = (int64_t *)(a1 + 120); // 0x498382
    int64_t v5 = *v4; // 0x498382
    if (v5 != 0) {
        // 0x49838b
        function_497750(v5);
        free((int64_t *)*v4);
        *v4 = 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 80); // 0x4983a1
    int64_t v7 = *v6; // 0x4983a1
    if (v7 != 0) {
        // 0x4983aa
        function_497930(v7);
        free((int64_t *)*v6);
        *v6 = 0;
    }
    // 0x4983c0
    *(int64_t *)(a1 + 376) = 0;
    if ((int32_t)a2 != 0) {
        // 0x4983cf
        return function_497970(a1);
    }
    int64_t * v8 = (int64_t *)(a1 + 384); // 0x4983f8
    free((int64_t *)*v8);
    *v8 = 0;
    *(int64_t *)(a1 + 392) = 0;
    return (int64_t)&g39;
}

// Address range: 0x4b2990 - 0x4b2b76
int64_t function_4b2990(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int32_t v1 = a2;
    if (v1 >= 17) {
        // 0x4b2a41
        return 0xfffffffc;
    }
    int64_t v2 = function_4b0f10(); // 0x4b29bf
    int64_t v3 = v2; // 0x4b29c8
    if (v1 > 3) {
        // 0x4b2a58
        v3 = v2 >> (v1 != 16 ? 1 : 2);
    }
    int64_t result = v3 + 3; // 0x4b29ce
    if (result > a4) {
        // 0x4b2a41
        return result;
    }
    int64_t v4 = a3; // bp-96, 0x4b29e0
    int32_t v5; // bp-88, 0x4b2990
    function_4b0870((int64_t *)&v5);
    int64_t v6 = a3; // 0x4b29ef
    if ((int32_t)a1 == -1) {
        // 0x4b2b53
        *(char *)a3 = 45;
        v6 = a3 + 1;
        v4 = v6;
    }
    int64_t v7; // 0x4b2990
    if (v1 == 16) {
        int64_t v8 = *(int64_t *)(a1 + 8); // 0x4b2a70
        v7 = v6;
        if (v8 != 0) {
            int64_t v9 = v8 - 1; // 0x4b2a83
            int64_t v10 = v8; // 0x4b2a91
            int64_t v11 = 0; // 0x4b2a91
            int64_t v12 = 8 * v9; // 0x4b2a91
            int64_t v13 = v9; // 0x4b2a91
            int64_t v14 = v6; // 0x4b2a91
            while (true) {
                int64_t v15 = v14;
                int64_t v16 = v11;
                int64_t v17 = 7;
                uint64_t v18 = *(int64_t *)(*(int64_t *)(a1 + 16) + v12) >> (8 * v17 & 56);
                uint64_t v19 = v18 % 256; // 0x4b2ad5
                int64_t v20; // 0x4b2990
                int64_t v21; // 0x4b2990
                int64_t v22; // 0x4b2990
                while (v10 + 1 + v17 != 2 && v16 == 0 && v19 == 0) {
                    // 0x4b2ab7
                    v21 = v17 - 1;
                    v22 = v16;
                    v20 = v15;
                    if (v17 == 0) {
                        // break (via goto) -> 0x4b2b13
                        goto lab_0x4b2b13;
                    }
                    v17 = v21;
                    v18 = *(int64_t *)(*(int64_t *)(a1 + 16) + v12) >> (8 * v17 & 56);
                    v19 = v18 % 256;
                }
                char v23 = *(char *)(v19 / 16 | (int64_t)"0123456789ABCDEF"); // 0x4b2af0
                char v24 = *(char *)(v18 % 16 | (int64_t)"0123456789ABCDEF"); // 0x4b2af4
                *(char *)v15 = v23;
                *(char *)(v15 + 1) = v24;
                int64_t v25 = v15 + 2; // 0x4b2b04
                v4 = v25;
                v22 = 1;
                v20 = v25;
                while (v17 != 0) {
                    // 0x4b2ac1
                    v15 = v25;
                    v16 = 1;
                    v17--;
                    v18 = *(int64_t *)(*(int64_t *)(a1 + 16) + v12) >> (8 * v17 & 56);
                    v19 = v18 % 256;
                    while (v10 + 1 + v17 != 2 && v16 == 0 && v19 == 0) {
                        // 0x4b2ab7
                        v21 = v17 - 1;
                        v22 = v16;
                        v20 = v15;
                        if (v17 == 0) {
                            // break (via goto) -> 0x4b2b13
                            goto lab_0x4b2b13;
                        }
                        v17 = v21;
                        v18 = *(int64_t *)(*(int64_t *)(a1 + 16) + v12) >> (8 * v17 & 56);
                        v19 = v18 % 256;
                    }
                    // 0x4b2adc
                    v23 = *(char *)(v19 / 16 | (int64_t)"0123456789ABCDEF");
                    v24 = *(char *)(v18 % 16 | (int64_t)"0123456789ABCDEF");
                    *(char *)v15 = v23;
                    *(char *)(v15 + 1) = v24;
                    v25 = v15 + 2;
                    v4 = v25;
                    v22 = 1;
                    v20 = v25;
                }
              lab_0x4b2b13:
                // 0x4b2b13
                v14 = v20;
                v7 = v14;
                if (v13 == 0) {
                    // break -> 0x4b2b2d
                    break;
                }
                // 0x4b2b1f
                v11 = v22;
                v10 = v13;
                v12 -= 8;
                v13--;
            }
        }
    } else {
        int64_t v26 = function_4b0ac0((int64_t *)&v5, a1); // 0x4b2a03
        if ((int32_t)v26 != 0) {
            // 0x4b2a37
            function_4b0890((int64_t *)&v5);
            // 0x4b2a41
            return v26 & 0xffffffff;
        }
        // 0x4b2a0f
        if (v5 == -1) {
            // 0x4b2b69
            v5 = 1;
        }
        int64_t v27 = function_4b28b0((int64_t *)&v5, a2 & 0xffffffff, &v4); // 0x4b2a27
        if ((int32_t)v27 != 0) {
            // 0x4b2a37
            function_4b0890((int64_t *)&v5);
            // 0x4b2a41
            return v27 & 0xffffffff;
        }
        // 0x4b2b28
        v7 = v4;
    }
    // 0x4b2b2d
    *(char *)v7 = 0;
    int64_t v28 = v7 + 1; // 0x4b2b31
    v4 = v28;
    *(int64_t *)a5 = v28 - a3;
    function_4b0890((int64_t *)&v5);
    // 0x4b2a41
    return 0;
}

// Address range: 0x4c98a0 - 0x4c98fe
int64_t function_4c98a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t v1 = *(int32_t *)(a1 + 328); // 0x4c98a4
    if (v1 == 0) {
        // 0x4c98b3
        return function_4c96e0();
    }
    if (v1 == 1) {
        // 0x4c98e0
        return function_4c9480();
    }
    // 0x4c98cd
    return 0xffffbf00;
}

// Address range: 0x4c9900 - 0x4c9a90
int64_t function_4c9900(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t v1 = a4; // 0x4c9917
    if (v1 == 1) {
        // 0x4c9b30
        int64_t result; // 0x4c9900
        return result;
    }
    uint64_t v2 = *(int64_t *)(a1 + 8); // 0x4c9934
    int64_t result2 = v2 - 16; // 0x4c9938
    if (result2 > (int64_t)&g5) {
        // 0x4c9b30
        return result2;
    }
    int64_t v3 = function_4c14d0(*(int32_t *)(a1 + 332)); // 0x4c994f
    if (v3 == 0) {
        // 0x4c9b30
        return 0;
    }
    uint64_t v4 = function_4c1d00(v3) % 256; // 0x4c9968
    int64_t result3 = 2 * v4 + 2; // 0x4c9970
    if (v2 < result3) {
        // 0x4c9b30
        return result3;
    }
    char result5; // bp-1080, 0x4c9900
    if (v1 == 0) {
        int64_t v5 = function_4c8fa0(a1, a7, (int64_t *)&result5); // 0x4c99d6
        if ((int32_t)v5 != 0) {
            // 0x4c99b0
            return v5 & 0xffffffff;
        }
    } else {
        int64_t v6 = function_4c9080(a1, a2, a3, a7, (int64_t *)&result5); // 0x4c99a3
        if ((int32_t)v6 != 0) {
            // 0x4c99b0
            return v6 & 0xffffffff;
        }
    }
    // 0x4c99e3
    int64_t v7; // bp-1176, 0x4c9900
    function_4c1690(&v7);
    int64_t result4 = function_4c1770(&v7, v3, 0); // 0x4c99f7
    if ((int32_t)result4 != 0) {
        // 0x4c9b30
        return result4;
    }
    // 0x4c9a04
    int64_t v8; // bp-1144, 0x4c9900
    function_4c18b0(v3, a5, a6, &v8);
    int64_t v9 = (int64_t)&result5 + 1 + v4; // 0x4c9a27
    int64_t v10 = v2 + -1 - v4; // 0x4c9a2c
    int64_t v11; // bp-1079, 0x4c9900
    function_4c8790(&v11, v4, v9, v10, &v7);
    function_4c8790((int64_t *)v9, v10, (int64_t)&v11, v4, &v7);
    function_4c16b0(&v7);
    return result5;
}

// Address range: 0x4d3da0 - 0x4d3f8b
int64_t function_4d3da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t a8) {
    uint64_t v1 = function_4c1d00(a1); // 0x4d3dce
    int32_t v2 = 0; // bp-200, 0x4d3dda
    int64_t result = 0; // 0x4d3de9
    if (a7 == 0) {
      lab_0x4d3f79_3:
        // 0x4d3f79
        return result;
    }
    // 0x4d3def
    int64_t v3; // bp-248, 0x4d3da0
    int64_t v4 = (int64_t)&v3; // 0x4d3db0
    uint64_t v5 = v1 % 256; // 0x4d3dfa
    uint32_t v6 = (int32_t)v5; // 0x4d3e00
    int64_t v7 = v5 + 0xffffffff & 0xffffffff; // 0x4d3e04
    uint32_t v8 = (int32_t)a6;
    int32_t v9 = a7; // 0x4d3e16
    int64_t v10 = a8; // 0x4d3e16
    int64_t v11 = v7;
    int64_t v12 = function_4c19e0(a1, a2, a3, v11); // 0x4d3e24
    result = v12;
    while ((int32_t)v12 == 0) {
        int64_t v13 = function_4c1af0(a1, a4, a5); // 0x4d3e3e
        result = v13;
        if ((int32_t)v13 != 0) {
            // break -> 0x4d3f79
            break;
        }
        int64_t v14 = function_4c1af0(a1, (int64_t)&v2, 4); // 0x4d3e58
        result = v14;
        if ((int32_t)v14 != 0) {
            // break -> 0x4d3f79
            break;
        }
        // 0x4d3e65
        int64_t v15; // bp-120, 0x4d3da0
        int64_t v16 = function_4c1b30(a1, &v15); // 0x4d3e70
        result = v16;
        if ((int32_t)v16 != 0) {
            // break -> 0x4d3f79
            break;
        }
        uint32_t v17 = v9;
        int64_t v18; // bp-184, 0x4d3da0
        memcpy(&v18, &v15, v6);
        if (v8 >= 2) {
            int64_t v19 = function_4c19e0(a1, a2, a3, v11); // 0x4d3eb3
            result = v19;
            if ((int32_t)v19 != 0) {
                return result;
            }
            int64_t v20 = function_4c1af0(a1, (int64_t)&v18, v5); // 0x4d3ecb
            result = v20;
            if ((int32_t)v20 != 0) {
                return result;
            }
            int64_t v21 = function_4c1b30(a1, &v18); // 0x4d3ee0
            result = v21;
            if ((int32_t)v21 != 0) {
                return result;
            }
            // 0x4d3eed
            int64_t v22; // 0x4d3da0
            int64_t v23; // 0x4d3da0
            int64_t v24; // 0x4d3da0
            char * v25; // 0x4d3efd
            if ((char)v1 != 0) {
                v23 = 0;
                v24 = v23 + v4;
                v25 = (char *)(v24 + 128);
                *v25 = *v25 ^ *(char *)(v24 + 64);
                v22 = v23 + 1;
                while (v23 != v7) {
                    // 0x4d3ef8
                    v23 = v22;
                    v24 = v23 + v4;
                    v25 = (char *)(v24 + 128);
                    *v25 = *v25 ^ *(char *)(v24 + 64);
                    v22 = v23 + 1;
                }
            }
            int64_t v26 = 2; // 0x4d3f0d
            int64_t v27 = v26 & 0xffffffff; // 0x4d3f14
            while ((int32_t)v26 != v8) {
                // 0x4d3ea8
                v19 = function_4c19e0(a1, a2, a3, v11);
                result = v19;
                if ((int32_t)v19 != 0) {
                    return result;
                }
                // 0x4d3ec0
                v20 = function_4c1af0(a1, (int64_t)&v18, v5);
                result = v20;
                if ((int32_t)v20 != 0) {
                    return result;
                }
                // 0x4d3ed8
                v21 = function_4c1b30(a1, &v18);
                result = v21;
                if ((int32_t)v21 != 0) {
                    return result;
                }
                // 0x4d3eed
                if ((char)v1 != 0) {
                    v23 = 0;
                    v24 = v23 + v4;
                    v25 = (char *)(v24 + 128);
                    *v25 = *v25 ^ *(char *)(v24 + 64);
                    v22 = v23 + 1;
                    while (v23 != v7) {
                        // 0x4d3ef8
                        v23 = v22;
                        v24 = v23 + v4;
                        v25 = (char *)(v24 + 128);
                        *v25 = *v25 ^ *(char *)(v24 + 64);
                        v22 = v23 + 1;
                    }
                }
                // 0x4d3f0d
                v26 = v27 + 1;
                v27 = v26 & 0xffffffff;
            }
        }
        uint32_t v28 = v17 > v6 ? v6 : v17; // 0x4d3f31
        memcpy((int64_t *)v10, &v15, v28);
        v9 = v17 - v28;
        v10 += (int64_t)v28;
        int64_t v29 = 3;
        char * v30 = (char *)(v4 + 48 + v29); // 0x4d3f59
        char v31 = *v30 + 1; // 0x4d3f59
        *v30 = v31;
        while (v31 == 0) {
            int64_t v32 = v29 + 0xffffffff; // 0x4d3f60
            int64_t v33 = v32 & 0xffffffff; // 0x4d3f66
            if ((int32_t)v32 == -1) {
                // break -> 0x4d3f68
                break;
            }
            v29 = v33;
            v30 = (char *)(v4 + 48 + v29);
            v31 = *v30 + 1;
            *v30 = v31;
        }
        // 0x4d3f68
        result = 0;
        if (v9 == 0) {
            // break -> 0x4d3f79
            break;
        }
        v11 = v29;
        v12 = function_4c19e0(a1, a2, a3, v11);
        result = v12;
    }
    // 0x4d3f79
    return result;
}

// Address range: 0x4fbb00 - 0x4fbceb
int64_t function_4fbb00(int64_t a1, uint64_t a2) {
    // 0x4fbb00
    int3_t v1; // 0x4fbb00
    if (a2 < 13) {
        int128_t v2 = __asm_movsd(0x7fffffffffffffff); // 0x4fbbf7
        int128_t v3 = __asm_movsd(0x4330000000000000); // 0x4fbbff
        unsigned char v4 = *(char *)(a2 + (int64_t)&g16); // 0x4fbc07
        int64_t result = v4; // 0x4fbc07
        int3_t v5 = v1 - 1; // 0x4fbc12
        __frontend_reg_store_fpr(v5, (float80_t)v4);
        __frontend_reg_store_fpr(v5, __frontend_reg_load_fpr(v5) * (float80_t)(float32_t)(int32_t)a1);
        int128_t v6 = __asm_movsd((int64_t)(float64_t)__frontend_reg_load_fpr(v5)); // 0x4fbc1c
        int128_t v7 = __asm_movapd(v6); // 0x4fbc22
        int128_t v8 = __asm_movapd(v6); // 0x4fbc26
        __asm_ucomisd(v3, __asm_andpd(v7, v2));
        int128_t v9 = __asm_movsd(0x43e0000000000000); // 0x4fbc5f
        __asm_ucomisd(v8, v9);
        if (a2 == 12) {
            // 0x4fbc80
            *(int64_t *)(a1 + 8) = __asm_cvttsd2si(__asm_subsd(v8, v9)) ^ -0x8000000000000000;
            return result;
        }
        // 0x4fbc6d
        *(int64_t *)(a1 + 8) = __asm_cvttsd2si(v8);
        return result;
    }
    uint64_t v10 = a2 + 1; // 0x4fbb11
    int64_t v11 = 297; // 0x4fbb1b
    int64_t v12 = (int64_t)&g17;
    int64_t v13 = v11 >> 1; // 0x4fbb22
    int64_t v14 = 8 * v13 + v12; // 0x4fbb25
    int64_t v15 = v13; // 0x4fbb2c
    int64_t v16 = v11; // 0x4fbb2c
    int64_t v17 = v14; // 0x4fbb2c
    int64_t v18 = v13; // 0x4fbb2c
    int64_t v19; // 0x4fbb00
    int64_t v20; // 0x4fbb00
    int64_t v21; // 0x4fbb3b
    int64_t v22; // 0x4fbb3e
    if (v10 <= *(int64_t *)v14) {
        v19 = v12;
        if (v15 == 0) {
            // break (via goto) -> 0x4fbb53
            goto lab_0x4fbb53;
        }
        // 0x4fbb38
        v21 = v15 >> 1;
        v22 = 8 * v21 + v12;
        v16 = v15;
        v17 = v22;
        v18 = v21;
        while (v10 <= *(int64_t *)v22) {
            // 0x4fbb4e
            v20 = v21;
            v19 = v12;
            if (v20 == 0) {
                // break (via goto) -> 0x4fbb53
                goto lab_0x4fbb53;
            }
            // 0x4fbb38
            v21 = v20 >> 1;
            v22 = 8 * v21 + v12;
            v16 = v20;
            v17 = v22;
            v18 = v21;
        }
    }
    int64_t v23 = v17 + 8; // 0x4fbbd3
    v11 = v16 + -1 - v18;
    v19 = v23;
    while (v11 >= 0 == (v11 != 0)) {
        // 0x4fbb1f
        v12 = v23;
        v13 = v11 >> 1;
        v14 = 8 * v13 + v12;
        v15 = v13;
        v16 = v11;
        v17 = v14;
        v18 = v13;
        if (v10 <= *(int64_t *)v14) {
            v19 = v12;
            if (v15 == 0) {
                // break (via goto) -> 0x4fbb53
                goto lab_0x4fbb53;
            }
            // 0x4fbb38
            v21 = v15 >> 1;
            v22 = 8 * v21 + v12;
            v16 = v15;
            v17 = v22;
            v18 = v21;
            while (v10 <= *(int64_t *)v22) {
                // 0x4fbb4e
                v20 = v21;
                v19 = v12;
                if (v20 == 0) {
                    // break (via goto) -> 0x4fbb53
                    goto lab_0x4fbb53;
                }
                // 0x4fbb38
                v21 = v20 >> 1;
                v22 = 8 * v21 + v12;
                v16 = v20;
                v17 = v22;
                v18 = v21;
            }
        }
        // 0x4fbbd0
        v23 = v17 + 8;
        v11 = v16 + -1 - v18;
        v19 = v23;
    }
  lab_0x4fbb53:
    // 0x4fbb53
    if (v19 == (int64_t)&g18) {
        // 0x4fbd00
        return (int64_t)&g18;
    }
    int64_t * v24 = (int64_t *)v19; // 0x4fbb63
    int64_t v25 = *v24;
    int3_t v26 = v1 - 1; // 0x4fbb67
    __frontend_reg_store_fpr(v26, (float80_t)v25);
    if (v25 < 0) {
        // 0x4fbb6c
        __frontend_reg_store_fpr(v26, __frontend_reg_load_fpr(v26) + 18446744073709551616.0L);
    }
    int3_t v27 = v26;
    __frontend_reg_store_fpr(v27, __frontend_reg_load_fpr(v27) * (float80_t)(float32_t)(int32_t)a1);
    int128_t v28 = __asm_movsd(0x7fffffffffffffff); // 0x4fbb74
    int128_t v29 = __asm_movsd(0x4330000000000000); // 0x4fbb7c
    int128_t v30 = __asm_movsd((int64_t)(float64_t)__frontend_reg_load_fpr(v27)); // 0x4fbb88
    int128_t v31 = __asm_movapd(v30); // 0x4fbb8e
    int128_t v32 = __asm_movapd(v30); // 0x4fbb92
    int128_t v33 = __asm_andpd(v31, v28); // 0x4fbb96
    __asm_ucomisd(v29, v33);
    if (v25 == 0) {
        int128_t v34 = __asm_movsd(0x43e0000000000000); // 0x4fbba4
        __asm_ucomisd(v32, v34);
        *(int64_t *)(a1 + 8) = __asm_cvttsd2si(__asm_subsd(v32, v34)) ^ -0x8000000000000000;
        return *v24;
    }
    int64_t result2 = __asm_cvttsd2si(v30); // 0x4fbcc0
    __asm_pxor(v33, v33);
    int128_t v35 = __asm_movsd(0x3ff0000000000000); // 0x4fbcc9
    __asm_andnpd(v28, v30);
    __asm_movsd(0x43e0000000000000);
    __asm_andpd(__asm_cmpnlesd(v32, __asm_cvtsi2sd(result2)), v35);
    return result2;
}

// Address range: 0x4fed10 - 0x4fef07
// From class:    std::basic_filebuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_4fed10(int64_t a1, int64_t a2) {
    // 0x4fed10
    int128_t v1; // 0x4fed10
    int128_t v2 = v1;
    function_540380();
    int128_t v3 = __asm_pxor(v2, v2); // 0x4fed28
    *(int64_t *)(a1 + 96) = 0;
    *(int64_t *)a1 = (int64_t)&g21;
    __asm_movups(*(int128_t *)(a1 + 64), v3);
    __asm_movups(*(int128_t *)(a1 + 80), v3);
    int64_t * v4 = (int64_t *)(a2 + 104); // 0x4fed44
    *(int64_t *)(a1 + 104) = *v4;
    char * v5 = (char *)(a2 + 112); // 0x4fed4c
    *(char *)(a1 + 112) = *v5;
    int32_t * v6 = (int32_t *)(a2 + 120); // 0x4fed53
    *v4 = 0;
    *v5 = 0;
    *v6 = 0;
    *(int32_t *)(a1 + 120) = *v6;
    int64_t * v7 = (int64_t *)(a2 + 124); // 0x4fed6c
    *(int64_t *)(a1 + 124) = *v7;
    int64_t * v8 = (int64_t *)(a2 + 132); // 0x4fed74
    *(int64_t *)(a1 + 132) = *v8;
    int64_t * v9 = (int64_t *)(a2 + 140); // 0x4fed82
    *(int64_t *)(a1 + 140) = *v9;
    int64_t * v10 = (int64_t *)(a2 + 152); // 0x4fed90
    *v10 = 0;
    *(int64_t *)(a1 + 152) = *v10;
    int64_t * v11 = (int64_t *)(a2 + 160); // 0x4feda9
    *v11 = 1;
    *(int64_t *)(a1 + 160) = *v11;
    char * v12 = (char *)(a2 + 168); // 0x4fedc2
    *v12 = 0;
    *(char *)(a1 + 168) = *v12;
    char * v13 = (char *)(a2 + 169); // 0x4fedd6
    *v13 = 0;
    *(char *)(a1 + 169) = *v13;
    char * v14 = (char *)(a2 + 170); // 0x4fedea
    *v14 = 0;
    *(char *)(a1 + 170) = *v14;
    *(char *)(a1 + 171) = *(char *)(a2 + 171);
    int64_t * v15 = (int64_t *)(a2 + 176); // 0x4fee0b
    *v15 = 0;
    *(int64_t *)(a1 + 176) = *v15;
    int64_t * v16 = (int64_t *)(a2 + 184); // 0x4fee24
    *v16 = 0;
    *(int64_t *)(a1 + 184) = *v16;
    char * v17 = (char *)(a2 + 192); // 0x4fee3d
    *v17 = 0;
    *(char *)(a1 + 192) = *v17;
    *(int64_t *)(a1 + 200) = *(int64_t *)(a2 + 200);
    int64_t * v18 = (int64_t *)(a2 + 208); // 0x4fee5f
    *v18 = 0;
    *(int64_t *)(a1 + 208) = *v18;
    int64_t * v19 = (int64_t *)(a2 + 216); // 0x4fee78
    *v19 = 0;
    *(int64_t *)(a1 + 216) = *v19;
    int64_t * v20 = (int64_t *)(a2 + 224); // 0x4fee91
    *v20 = 0;
    *(int64_t *)(a1 + 224) = *v20;
    int64_t * v21 = (int64_t *)(a2 + 232); // 0x4feeaa
    *v21 = 0;
    *(int64_t *)(a1 + 232) = *v21;
    int64_t v22 = *v10; // 0x4feec3
    *(int64_t *)(a2 + 8) = v22;
    *(int64_t *)(a2 + 16) = v22;
    *(int64_t *)(a2 + 24) = v22;
    *(int64_t *)(a2 + 40) = 0;
    int64_t result = *v7; // 0x4feede
    *(int64_t *)(a2 + 32) = 0;
    *(int64_t *)(a2 + 48) = 0;
    *v8 = result;
    *v9 = result;
    return result;
}

// Address range: 0x500b70 - 0x500d66
// From class:    std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_500b70(int64_t a1, int64_t a2) {
    // 0x500b70
    int128_t v1; // 0x500b70
    int128_t v2 = v1;
    function_540ad0();
    int128_t v3 = __asm_pxor(v2, v2); // 0x500b88
    *(int64_t *)(a1 + 96) = 0;
    *(int64_t *)a1 = (int64_t)&g22;
    __asm_movups(*(int128_t *)(a1 + 64), v3);
    __asm_movups(*(int128_t *)(a1 + 80), v3);
    int64_t * v4 = (int64_t *)(a2 + 104); // 0x500ba4
    *(int64_t *)(a1 + 104) = *v4;
    char * v5 = (char *)(a2 + 112); // 0x500bac
    *(char *)(a1 + 112) = *v5;
    int32_t * v6 = (int32_t *)(a2 + 120); // 0x500bb3
    *v4 = 0;
    *v5 = 0;
    *v6 = 0;
    *(int32_t *)(a1 + 120) = *v6;
    int64_t * v7 = (int64_t *)(a2 + 124); // 0x500bcc
    *(int64_t *)(a1 + 124) = *v7;
    int64_t * v8 = (int64_t *)(a2 + 132); // 0x500bd4
    *(int64_t *)(a1 + 132) = *v8;
    int64_t * v9 = (int64_t *)(a2 + 140); // 0x500be2
    *(int64_t *)(a1 + 140) = *v9;
    int64_t * v10 = (int64_t *)(a2 + 152); // 0x500bf0
    *v10 = 0;
    *(int64_t *)(a1 + 152) = *v10;
    int64_t * v11 = (int64_t *)(a2 + 160); // 0x500c09
    *v11 = 1;
    *(int64_t *)(a1 + 160) = *v11;
    char * v12 = (char *)(a2 + 168); // 0x500c22
    *v12 = 0;
    *(char *)(a1 + 168) = *v12;
    char * v13 = (char *)(a2 + 169); // 0x500c36
    *v13 = 0;
    *(char *)(a1 + 169) = *v13;
    char * v14 = (char *)(a2 + 170); // 0x500c4a
    *v14 = 0;
    *(char *)(a1 + 170) = *v14;
    *(int32_t *)(a1 + 172) = *(int32_t *)(a2 + 172);
    int64_t * v15 = (int64_t *)(a2 + 176); // 0x500c6a
    *v15 = 0;
    *(int64_t *)(a1 + 176) = *v15;
    int64_t * v16 = (int64_t *)(a2 + 184); // 0x500c83
    *v16 = 0;
    *(int64_t *)(a1 + 184) = *v16;
    char * v17 = (char *)(a2 + 192); // 0x500c9c
    *v17 = 0;
    *(char *)(a1 + 192) = *v17;
    *(int64_t *)(a1 + 200) = *(int64_t *)(a2 + 200);
    int64_t * v18 = (int64_t *)(a2 + 208); // 0x500cbe
    *v18 = 0;
    *(int64_t *)(a1 + 208) = *v18;
    int64_t * v19 = (int64_t *)(a2 + 216); // 0x500cd7
    *v19 = 0;
    *(int64_t *)(a1 + 216) = *v19;
    int64_t * v20 = (int64_t *)(a2 + 224); // 0x500cf0
    *v20 = 0;
    *(int64_t *)(a1 + 224) = *v20;
    int64_t * v21 = (int64_t *)(a2 + 232); // 0x500d09
    *v21 = 0;
    *(int64_t *)(a1 + 232) = *v21;
    int64_t v22 = *v10; // 0x500d22
    *(int64_t *)(a2 + 8) = v22;
    *(int64_t *)(a2 + 16) = v22;
    *(int64_t *)(a2 + 24) = v22;
    *(int64_t *)(a2 + 40) = 0;
    int64_t result = *v7; // 0x500d3d
    *(int64_t *)(a2 + 32) = 0;
    *(int64_t *)(a2 + 48) = 0;
    *v8 = result;
    *v9 = result;
    return result;
}

// Address range: 0x568500 - 0x5686e5
int64_t function_568500(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x568510
    int64_t v2 = *v1; // 0x568510
    int64_t v3 = v2; // 0x568515
    if (v2 == 0) {
        // 0x568660
        v3 = function_4efd30(336);
        *(int32_t *)(v3 + 8) = 0;
        *(int64_t *)(v3 + 16) = 0;
        *(int64_t *)(v3 + 24) = 0;
        *(char *)(v3 + 32) = 0;
        *(int64_t *)(v3 + 40) = 0;
        *(int64_t *)(v3 + 48) = 0;
        *(int64_t *)(v3 + 56) = 0;
        *(int64_t *)v3 = (int64_t)&g23;
        *(int64_t *)(v3 + 64) = 0;
        *(int64_t *)(v3 + 72) = 0;
        *(char *)(v3 + 328) = 0;
        *v1 = v3;
    }
    int64_t v4; // 0x568500
    if (a2 == 0) {
        // 0x5685a8
        *(int64_t *)(v3 + 16) = (int64_t)&g15;
        *(int64_t *)(v3 + 24) = 0;
        *(int64_t *)(v3 + 72) = 0x2c0000002e;
        *(char *)(v3 + 32) = 0;
        int64_t v5 = (int32_t)&g24 ^ (int32_t)&g24; // 0x5685dd
        int64_t v6 = v5;
        char v7 = *(char *)(v6 + *(int64_t *)&g24); // 0x5685e0
        *(int32_t *)(v3 + 80 + 4 * v6) = (int32_t)v7;
        v5 = v6 + 1;
        while (v6 != 35) {
            // 0x5685e0
            v6 = v5;
            v7 = *(char *)(v6 + *(int64_t *)&g24);
            *(int32_t *)(v3 + 80 + 4 * v6) = (int32_t)v7;
            v5 = v6 + 1;
        }
        int64_t v8 = (int32_t)&g25 ^ (int32_t)&g25; // 0x5685fe
        int64_t v9 = v8;
        char v10 = *(char *)(v9 + *(int64_t *)&g25); // 0x568600
        *(int32_t *)(v3 + 224 + 4 * v9) = (int32_t)v10;
        v4 = v3;
        v8 = v9 + 1;
        while (v9 != 25) {
            // 0x568600
            v9 = v8;
            v10 = *(char *)(v9 + *(int64_t *)&g25);
            *(int32_t *)(v3 + 224 + 4 * v9) = (int32_t)v10;
            v4 = v3;
            v8 = v9 + 1;
        }
    } else {
        struct __locale_struct * v11 = (struct __locale_struct *)a2; // 0x56852c
        char * v12 = __nl_langinfo_l((int32_t)&g2, v11); // 0x56852c
        *(int32_t *)(*v1 + 72) = (int32_t)(int64_t)v12;
        char * v13 = __nl_langinfo_l((int32_t)&g3, v11); // 0x568540
        int64_t v14 = *v1; // 0x568545
        int32_t v15 = (int64_t)v13; // 0x568549
        int32_t * v16 = (int32_t *)(v14 + 76); // 0x56854b
        *v16 = v15;
        if (v15 != 0) {
            char * str = __nl_langinfo_l((int32_t)&g1, v11); // 0x568628
            int32_t len = strlen(str); // 0x568633
            int64_t v17 = len; // 0x568633
            if (len != 0) {
                int64_t v18 = v17 + 1; // 0x5686cb
                int64_t v19 = function_4eec00(v18); // 0x5686d2
                return (int64_t)memcpy((int64_t *)v19, (int64_t *)str, (int32_t)v18);
            }
            int64_t v20 = *v1; // 0x568644
            *(char *)(v20 + 32) = 0;
            *(int64_t *)(v20 + 16) = (int64_t)&g15;
            *(int64_t *)(v20 + 24) = v17;
            v4 = v20;
        } else {
            // 0x568554
            *(int64_t *)(v14 + 24) = 0;
            *(char *)(v14 + 32) = 0;
            *v16 = 44;
            *(int64_t *)(v14 + 16) = (int64_t)&g15;
            v4 = v14;
        }
    }
    // 0x568572
    *(int64_t *)(v4 + 48) = 4;
    *(int64_t *)(v4 + 64) = 5;
    *(int64_t *)(v4 + 40) = (int64_t)L"true";
    *(int64_t *)(v4 + 56) = (int64_t)L"false";
    return (int64_t)L"false";
}

// Address range: 0x568cf0 - 0x568ee8
// From class:    std::__cxx11::messages_byname<wchar_t>
// Type:          virtual member function
int64_t function_568cf0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = result + 16; // 0x568cfc
    __readfsqword(40);
    int32_t v2 = a3; // 0x568d1a
    int64_t * v3 = (int64_t *)(a6 + 8); // 0x568d1c
    int64_t v4 = *v3; // 0x568d1c
    if (v2 > -1 != v4 != 0) {
        // 0x568d27
        *(int64_t *)result = v1;
        function_54c6d0(result, a6, 4 * v4 + a6, a4, a5, a6);
        // 0x568d42
        __readfsqword(40);
        return result;
    }
    int64_t v5 = function_567c30(function_567d40(), a3 & 0xffffffff, v2); // 0x568d84
    if (v5 == 0) {
        // 0x568ee0
        *(int64_t *)result = v1;
        return *v3;
    }
    int64_t v6 = (0x100000000 * *(int64_t *)function_50b1c0(v5 + 16) >> 32) * *v3; // 0x568dd5
    char * v7; // bp-80, 0x568cf0
    int64_t v8 = (int64_t)&v7; // 0x568ded
    int64_t v9 = v8; // bp-136, 0x568ded
    int64_t v10 = (int64_t)&v9 - (v6 + 31 & -16); // 0x568df9
    int64_t v11 = v10 + 15 & -16; // 0x568e01
    *(int64_t *)(v10 - 8) = v8;
    *(int64_t *)(v10 - 16) = v11 + v6;
    *v7 = 0;
    struct __locale_struct * v12 = __uselocale((struct __locale_struct *)*(int64_t *)(a2 + 16)); // 0x568e3b
    char * str = dgettext((char *)*(int64_t *)(v5 + 8), (char *)v11); // 0x568e4a
    int64_t v13 = (int64_t)str; // 0x568e4a
    __uselocale(v12);
    if (v11 == v13) {
        // 0x568ee0
        *(int64_t *)result = v1;
        return *v3;
    }
    int64_t len = strlen(str); // 0x568e76
    int64_t v14 = 4 * len; // 0x568e7b
    int64_t v15 = v10 - (v14 + 34 & -16); // 0x568e9d
    *(int64_t *)(v15 - 8) = v9;
    int64_t v16 = v15 + 15 & -16; // 0x568eab
    int64_t v17 = v15 - 16; // 0x568ebb
    *(int64_t *)v17 = v16 + v14;
    *(int64_t *)result = v1;
    *(char *)v17 = 0;
    int64_t v18; // bp-88, 0x568cf0
    function_54c6d0(result, v16, (int64_t)v7, len + v13, (int64_t)&v18, v16);
    // 0x568d42
    __readfsqword(40);
    return result;
}

// Address range: 0x579d80 - 0x579f6e
int64_t function_579d80(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x579d80
    int64_t v2 = *v1; // 0x579d80
    if (*(char *)v2 != 83) {
        // 0x579e9f
        return 0;
    }
    int64_t v3 = v2 + 1; // 0x579d8d
    *v1 = v3;
    char * v4 = (char *)v3; // 0x579d95
    int64_t v5 = v3; // 0x579d99
    char v6 = 0; // 0x579d99
    int64_t v7; // 0x579d80
    int64_t v8; // 0x579d80
    int64_t v9; // 0x579d80
    int64_t v10; // 0x579d80
    int64_t v11; // 0x579d80
    int64_t v12; // 0x579d80
    int64_t v13; // 0x579d80
    if (*v4 == 0) {
        goto lab_0x579de2;
    } else {
        int64_t v14 = v2 + 2; // 0x579d9b
        *v1 = v14;
        char v15 = *v4; // 0x579da3
        int64_t v16 = v15; // 0x579da3
        uint64_t v17 = v16 + 0xffffffd0; // 0x579da7
        v5 = v14;
        v6 = v15;
        if ((char)v17 < 48) {
            // 0x579daf
            v5 = v14;
            v6 = v15;
            if ((1 << v17 % 64 & 0x87fffffe03ff) == 0) {
                goto lab_0x579de2;
            } else {
                // 0x579dbf
                v11 = 0;
                if (v15 != 95) {
                    // 0x579eb0
                    v8 = v14;
                    v9 = v16;
                    v12 = 0;
                    v7 = v14;
                    v10 = v16;
                    v13 = 0;
                    if (v15 < 58) {
                        goto lab_0x579ec0;
                    } else {
                        goto lab_0x579eed;
                    }
                } else {
                    goto lab_0x579dc9;
                }
            }
        } else {
            goto lab_0x579de2;
        }
    }
  lab_0x579de2:;
    int32_t v18 = *(int32_t *)(a1 + 16); // 0x579de2
    bool v19 = (v18 & 8) != 0; // 0x579def
    if (a2 % 2 != 0 && (v18 & 8) == 0) {
        // 0x579df6
        v19 = *(char *)v5 < 69;
    }
    int64_t v20 = (int64_t)&g19; // 0x579e21
    if (v6 != 116) {
        int64_t v21 = (int64_t)&g19 + 56; // 0x579e23
        while (v21 < (int64_t)&g20) {
            // 0x579e2c
            v20 = v21;
            if (*(char *)v21 == v6) {
                goto lab_0x579e33;
            }
            v21 += 56;
        }
        // 0x579e9f
        return 0;
    }
  lab_0x579e33:;
    int64_t v22 = *(int64_t *)(v20 + 40); // 0x579e33
    int32_t * v23 = (int32_t *)(a1 + 40); // 0x579e37
    uint32_t v24 = *v23; // 0x579e37
    int64_t v25 = v24; // 0x579e37
    uint32_t v26 = *(int32_t *)(a1 + 44); // 0x579e3a
    int64_t v27 = v25; // 0x579e40
    if (v22 != 0) {
        int64_t v28 = 0; // 0x579e46
        int64_t v29 = v25; // 0x579e46
        if (v26 > v24) {
            uint32_t v30 = v24 + 1; // 0x579f29
            v28 = *(int64_t *)(a1 + 32) + 8 * ((0x100000000 * v25 >> 31) + (int64_t)v24);
            *(int32_t *)(v28 + 4) = 0;
            *v23 = v30;
            *(int32_t *)v28 = 24;
            *(int64_t *)(v28 + 8) = v22;
            *(int32_t *)(v28 + 16) = *(int32_t *)(v20 + 48);
            v29 = v30;
        }
        // 0x579e4c
        *(int64_t *)(a1 + 72) = v28;
        v27 = v29;
    }
    int32_t v31 = *(int32_t *)(v20 + (v19 ? 32 : 16));
    int32_t * v32 = (int32_t *)(a1 + 80); // 0x579e60
    *v32 = *v32 + v31;
    int64_t result = 0; // 0x579e67
    if (v27 < (int64_t)v26) {
        int64_t v33 = 0x100000000 * v27;
        int64_t v34 = *(int64_t *)(a1 + 32) + 8 * ((v33 >> 32) + (v33 >> 31)); // 0x579e77
        *(int32_t *)(v34 + 4) = 0;
        *v23 = (int32_t)v27 + 1;
        *(int32_t *)v34 = 24;
        *(int64_t *)(v34 + 8) = *(int64_t *)(v20 + (v19 ? 24 : 8));
        *(int32_t *)(v34 + 16) = v31;
        result = v34;
    }
    // 0x579e92
    if (*(char *)*v1 == 66) {
        // 0x579f55
        return function_579d20();
    }
    // 0x579e9f
    return result;
  lab_0x579dc9:
    // 0x579dc9
    if (*(int32_t *)(a1 + 56) > (int32_t)v11) {
        int32_t * v35 = (int32_t *)(a1 + 64); // 0x579dd6
        *v35 = *v35 + 1;
        return *(int64_t *)(*(int64_t *)(a1 + 48) + 8 * v11);
    }
    // 0x579e9f
    return 0;
  lab_0x579ec0:;
    int64_t v36 = v8; // 0x579ec3
    int64_t v37 = v12; // 0x579ec3
    int64_t v38 = v9 + 0xffffffd0 + 36 * v12; // 0x579ec3
    goto lab_0x579ec7;
  lab_0x579eed:
    // 0x579eed
    if ((char)v10 >= 91) {
        // 0x579e9f
        return 0;
    }
    // 0x579ef5
    v36 = v7;
    v37 = v13;
    v38 = v10 + 0xffffffc9 + 36 * v13;
    goto lab_0x579ec7;
  lab_0x579ec7:;
    int64_t v39 = v38;
    if ((int32_t)v37 > (int32_t)v39) {
        // 0x579e9f
        return 0;
    }
    char * v40 = (char *)v36; // 0x579ecf
    if (*v40 == 0) {
        // 0x579e9f
        return 0;
    }
    int64_t v41 = v36 + 1; // 0x579ed4
    *v1 = v41;
    char v42 = *v40; // 0x579edc
    if (v42 == 95) {
        // 0x579f00
        v11 = v39 + 1 & 0xffffffff;
        goto lab_0x579dc9;
    } else {
        int64_t v43 = v39 & 0xffffffff;
        int64_t v44 = v42; // 0x579edc
        v8 = v41;
        v9 = v44;
        v12 = v43;
        v7 = v41;
        v10 = v44;
        v13 = v43;
        if (v42 < 58) {
            goto lab_0x579ec0;
        } else {
            goto lab_0x579eed;
        }
    }
}
