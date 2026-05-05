/*
 * Targeted RetDec C for native executable gap queue batch 6.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4d3af0-0x4d3c86 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54d830-0x54d9c6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x552760-0x5528f6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29a64-0x29bf9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dfc2-0x4e155 rank=- name=- kind=- bytes=- uncovered=-
 *   0x497ff0-0x498183 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ab380-0x4ab513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b53f0-0x4b5583 rank=- name=- kind=- bytes=- uncovered=-
 *   0x489630-0x4897c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x23344-0x234d2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4918e-0x4931c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d4560-0x4d46ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x565450-0x5655dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x4985b0-0x49873b rank=- name=- kind=- bytes=- uncovered=-
 *   0x5be1a-0x5bfa4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x67ede-0x68067 rank=- name=- kind=- bytes=- uncovered=-
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
struct timespec;
struct timeval;
struct utsname;
#define F_GETFL 3
#define F_SETFL 4
#define SO_DEBUG 1
#define _SC_PAGESIZE 30
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
extern int g39;
extern int g40;
extern int g41;
extern int g42;
extern int g43;
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
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
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int fcntl(int fd, int cmd, ...);
int gettimeofday(struct timeval *tv, void *tz);
int64_t sysconf(int name);
int mprotect(void *addr, size_t len, int prot);
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
int __sprintf_chk(char *str, int flag, size_t slen, const char *format, ...);
struct _Unwind_Exception;
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_200c0();
int64_t function_20210();
int64_t function_203b0();
int64_t function_221a8();
int64_t function_2247e();
int64_t function_2263e();
int64_t function_23344();
int64_t function_23372();
int64_t function_23398();
int64_t function_23414();
int64_t function_25018();
int64_t function_2508e();
int64_t function_254fe();
int64_t function_25856();
int64_t function_259ce();
int64_t function_25cec();
int64_t function_27e1a();
int64_t function_281fa();
int64_t function_29a64();
int64_t function_29c3a();
int64_t function_29c7e();
int64_t function_29cb8();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_29ef7();
int64_t function_2a237();
int64_t function_2a2ac();
int64_t function_2a9dd();
int64_t function_35c52();
int64_t function_35fcc();
int64_t function_36126();
int64_t function_36622();
int64_t function_38e213();
int64_t function_489630();
int64_t function_48973c();
int64_t function_48975b();
int64_t function_48979a();
int64_t function_4897a8();
int64_t function_4918e();
int64_t function_497750();
int64_t function_4977a0();
int64_t function_497930();
int64_t function_497ff0();
int64_t function_4985b0();
int64_t function_49e770();
int64_t function_4ab2f0();
int64_t function_4ab380();
int64_t function_4ab520();
int64_t function_4ad1a();
int64_t function_4b4d90();
int64_t function_4b4e60();
int64_t function_4b4ef0();
int64_t function_4b4f20();
int64_t function_4b4f80();
int64_t function_4b4ff0();
int64_t function_4b5070();
int64_t function_4b53f0();
int64_t function_4b5690();
int64_t function_4c42d0();
int64_t function_4d3930();
int64_t function_4d3af0();
int64_t function_4d4560();
int64_t function_4d9c0();
int64_t function_4d9ce();
int64_t function_4d9d9();
int64_t function_4ddee();
int64_t function_4df5a();
int64_t function_4dfc2();
int64_t function_4eeb40();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f1b30();
int64_t function_4f658();
int64_t function_4fa50();
int64_t function_4fbc4();
int64_t function_527a4();
int64_t function_5289c();
int64_t function_548990();
int64_t function_54d830();
int64_t function_552760();
int64_t function_565450();
int64_t function_5690d0();
int64_t function_5858c();
int64_t function_5bda0();
int64_t function_5be1a();
int64_t function_67ce4();
int64_t function_67ede();
int64_t function_68b30();
int64_t function_68c00();
int64_t function_72994();
int64_t function_e298f();
int64_t function_ffffffff95504b02();

// Address range: 0x23344 - 0x2336f
int64_t function_23344(int64_t a1, int64_t a2) {
    // 0x23344
    __readfsqword(40);
    return function_e298f();
}

// Address range: 0x23372 - 0x23398
int64_t function_23372(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_hlt(); // 0x23374
    bool v2; // 0x23372
    int64_t v3 = v2 ? -1 : 1; // 0x2338a
    int64_t v4 = v3 + a1; // 0x2338a
    *(char *)v4 = *(char *)(v3 + a2);
    uint32_t v5 = *(int32_t *)(v4 + v3); // 0x2338e
    int64_t v6; // 0x23372
    uint32_t v7 = *(int32_t *)&v6; // 0x2338f
    *(int32_t *)v1 = v7 / 0x2000 | 0x100000 * v7 | 0x80000 * (int32_t)(v5 > (int32_t)v1);
    return v1 + 0xa1d6e52b + (int64_t)((v7 & 0x1000) != 0) & 0xffffffff;
}

// Address range: 0x23398 - 0x23413
int64_t function_23398(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23398
    int64_t v1; // 0x23398
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x23399
    bool v4; // 0x23398
    bool v5; // 0x23398
    if (v3 != 0) {
        int32_t * v6 = (int32_t *)(v2 - 97); // 0x23399
        uint32_t v7 = *v6; // 0x23399
        *v6 = v7 >> v3 | (int32_t)v5 << 32 - v3 | (int32_t)((int64_t)v7 << (int64_t)(33 - v3));
        v4 = v3 == 1 ? v7 < 0 != v5 : v5;
    }
    int64_t v8 = a4 - 1; // 0x2339c
    if (v8 != 0 != v5) {
        // 0x2339e
        int64_t v9; // 0x23398
        return (int64_t)&v9;
    }
    int64_t v10 = v1 & 0xffffffff; // 0x23398
    int64_t v11 = v5 ? -1 : 1; // 0x233a3
    int64_t v12 = v8; // 0x2339c
    int64_t v13 = a1; // 0x23398
    int64_t v14 = a2; // 0x233a3
    int64_t v15 = v10; // 0x23398
    *(char *)v13 = *(char *)v14;
    v14 += v11;
    int64_t result; // 0x23398
    while (v5 || v5 != v4) {
        // 0x2339c
        v12--;
        result = *(int64_t *)v15;
        v13 += v11;
        v15 += 8;
        if (v12 != 0 != v5) {
            // 0x2339e
            return result;
        }
        *(char *)v13 = *(char *)v14;
        v14 += v11;
    }
    char * v16 = (char *)((v2 % 256 | v8 & -256) + 0x5126528b); // 0x233a9
    unsigned char v17 = *v16; // 0x233a9
    unsigned char v18 = v17 + *(char *)v14; // 0x233a9
    *v16 = v18;
    uint32_t v19 = *(int32_t *)-0x3e4a128125071814; // 0x233af
    *(int64_t *)v10 = 0x383f8e;
    int64_t result2 = (int64_t)v19 - 0x69d5ff8d + (int64_t)(v18 < v17); // 0x233be
    float80_t v20; // 0x23398
    *(int16_t *)(result2 - 0x6c3812ad) = (int16_t)v20;
    if (result2 >= 0) {
        char * v21 = (char *)(a3 - 9); // 0x233cd
        *v21 = *v21 + (char)v2;
        return result2;
    }
    // 0x233d5
    *(int32_t *)(v10 + 12) = 0;
    result = result2;
    if (*(int64_t *)(v10 + 24) != __readfsqword(40)) {
        // 0x23405
        __stack_chk_fail();
        result = (int64_t)&g43;
    }
    // 0x2339e
    return result;
}

// Address range: 0x23414 - 0x23423
int64_t function_23414(int64_t a1, int64_t a2) {
    uint32_t v1 = (int32_t)a2; // 0x23414
    int64_t result; // 0x23414
    if (v1 >= 25) {
        // 0x23419
        *(int32_t *)(a1 + (int64_t)&g1) = v1;
        result = __asm_mfence();
    }
    // 0x23422
    return result;
}

// Address range: 0x29a64 - 0x29bf9
int64_t function_29a64(int64_t a1) {
    int64_t v1 = a1 + 8; // 0x29a78
    *(int64_t *)a1 = (int64_t)&g34;
    function_2a9dd();
    function_2263e(v1);
    function_72994(a1 + (int64_t)&g23);
    function_2508e(a1 + (int64_t)&g22);
    function_2508e(a1 + (int64_t)&g21);
    function_2508e(a1 + (int64_t)&g20);
    function_2508e(a1 + (int64_t)&g19);
    function_2508e(a1 + (int64_t)&g18);
    function_2508e(a1 + (int64_t)&g17);
    int64_t v2 = *(int64_t *)(a1 + (int64_t)&g16); // 0x29aee
    function_29cb8(a1 + (int64_t)&g15, v2);
    function_29c3a(a1 + (int64_t)&g14);
    int64_t v3 = *(int64_t *)(a1 + (int64_t)&g13); // 0x29b0d
    function_2a2ac(a1 + (int64_t)&g12, v3);
    function_72994(a1 + (int64_t)&g11);
    function_2508e(a1 + (int64_t)&g10);
    function_2508e(a1 + (int64_t)&g9);
    uint64_t v4 = *(int64_t *)(a1 + (int64_t)&g8); // 0x29b4e
    int64_t v5 = *(int64_t *)(a1 + (int64_t)&g4); // 0x29b55
    int64_t v6 = *(int64_t *)(a1 + (int64_t)&g6); // 0x29b7f
    int64_t v7 = v6 + 8;
    int64_t v8 = v7; // 0x29b92
    if (v4 > v7) {
        int64_t v9 = *(int64_t *)v8; // 0x29b94
        function_2a237(v9, v9 + (int64_t)&g26);
        v8 += 8;
        while (v4 > v8) {
            // 0x29b94
            v9 = *(int64_t *)v8;
            function_2a237(v9, v9 + (int64_t)&g26);
            v8 += 8;
        }
    }
    // 0x29ba9
    if (v6 != v4) {
        // 0x29bae
        function_2a237(v5, *(int64_t *)(a1 + (int64_t)&g5));
    }
    // 0x29bcb
    function_2a237(v5, *(int64_t *)(a1 + (int64_t)&g7));
    function_29c7e(a1 + (int64_t)&g3);
    function_72994(a1 + (int64_t)&g2);
    return function_2247e(v1);
}

// Address range: 0x4918e - 0x4931c
int64_t function_4918e(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x491a9
    int64_t v2 = function_4fbc4(); // 0x491b9
    if (v2 != 0) {
        int64_t v3 = -0x1041041041041041 * (*(int64_t *)(v2 + 40) - *(int64_t *)(v2 + 32) >> 1); // 0x491df
        int64_t * v4 = (int64_t *)(v2 + 64); // 0x491e3
        uint64_t v5 = *v4; // 0x491e3
        int64_t v6 = v5; // 0x491e7
        if (v5 > v3) {
            // 0x491e9
            *v4 = v3;
            v6 = v3;
        }
        int64_t v7 = a1 + (int64_t)&g31; // 0x49196
        if (v6 != 0) {
            int64_t v8 = 0; // bp-88, 0x4920f
            function_27e1a(&v8, 124 * v6 + 4, -0x1041041041041041);
            int64_t v9 = 0x100000000 * *v4 >> 32; // bp-108, 0x49250
            int64_t v10; // bp-104, 0x4918e
            int64_t v11; // 0x4918e
            function_36126(&v8, 0, &v9, &v10, v11);
            int64_t v12 = *v4; // 0x49265
            v12--;
            int64_t v13 = function_4f658(v2, v12); // 0x4926f
            v10 = *(int64_t *)(v13 + 8);
            function_36126(&v8, 0, &v10, &v8, v13);
            function_36126(&v8, 0, (int64_t *)(v13 + 18), (int64_t *)(v13 + 126), v13);
            while (v12 != 0) {
                // 0x49269
                v12--;
                v13 = function_4f658(v2, v12);
                v10 = *(int64_t *)(v13 + 8);
                function_36126(&v8, 0, &v10, &v8, v13);
                function_36126(&v8, 0, (int64_t *)(v13 + 18), (int64_t *)(v13 + 126), v13);
            }
            // 0x492cc
            function_4ad1a(a1 + 40, 14, &v8);
            *v4 = 0;
            function_4fa50(v7, v2, (int64_t)&v8);
            function_254fe(&v8);
        } else {
            // 0x491f6
            function_4fa50(v7, v2, -0x1041041041041041);
        }
    }
    int64_t result = 0; // 0x49306
    if (v1 != __readfsqword(40)) {
        // 0x49308
        __stack_chk_fail();
        result = (int64_t)&g43;
    }
    // 0x4930d
    return result;
}

// Address range: 0x4dfc2 - 0x4e155
int64_t function_4dfc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x4dfd1
    int64_t v2 = __readfsqword(40); // 0x4dfd5
    int64_t v3 = a1 + 24; // 0x4dfe5
    int64_t * v4 = (int64_t *)v3; // 0x4dfe5
    int64_t v5 = 1; // 0x4dfeb
    if (*v4 == *v1) {
        // 0x4dff1
        function_4df5a();
        int64_t * v6 = (int64_t *)(a1 + 64); // 0x4dfff
        *(int64_t *)a1 = a2;
        *(int64_t *)(a1 + 8) = a3;
        *(int64_t *)(a1 + 16) = a4;
        if (*v6 == 0) {
            // 0x4e011
            function_4ddee(a1);
        }
        int64_t v7 = *v4; // 0x4e01d
        uint64_t v8 = *v1 - v7; // 0x4e029
        if (v8 < 0x1000000) {
            // 0x4e035
            function_281fa(v3);
        } else {
            if (v8 != 0x1000000) {
                // 0x4e056
                *v1 = v7 + 0x1000000;
            }
        }
        int64_t * v9 = (int64_t *)(a1 + 96); // 0x4e060
        int64_t v10 = *v9; // 0x4e060
        int64_t v11 = a1 + 88; // 0x4e064
        int64_t * v12 = (int64_t *)v11; // 0x4e064
        int64_t v13 = *v12; // 0x4e064
        *(int64_t *)(a1 + 48) = 0;
        *(int64_t *)(a1 + 56) = 0;
        uint64_t v14 = v10 - v13; // 0x4e07b
        int64_t v15; // 0x4dfc2
        if (v14 < 0x80000) {
            int64_t * v16 = (int64_t *)(a1 + 104); // 0x4e08b
            uint64_t v17 = 0x80000 - v14; // 0x4e094
            if (v17 > *v16 - v10) {
                int64_t v18 = function_25856(v11, v17, "vector::_M_default_append"); // 0x4e0c0
                int64_t v19 = 0; // 0x4e0cb
                if (v18 != 0) {
                    // 0x4e0cd
                    v19 = function_4efd30(v18);
                }
                int64_t v20 = v19 + 0x80000; // 0x4e0d8
                function_4d9c0(v19 + v14, v20, 0);
                function_4d9d9(*v12, *v9, v19);
                int64_t v21 = function_4d9ce(*v12); // 0x4e102
                *v12 = v19;
                *v9 = v20;
                *v16 = v19 + v18;
                v15 = v21;
            } else {
                int64_t v22 = v17 + v10; // 0x4e09f
                int64_t v23 = function_4d9c0(v10, v22, 0); // 0x4e0a8
                *v9 = v22;
                v15 = v23;
            }
        } else {
            // 0x4e118
            v15 = v13;
            if (v14 != 0x80000) {
                int64_t v24 = v13 + 0x80000; // 0x4e121
                *v9 = v24;
                v15 = v24;
            }
        }
        // 0x4e12b
        v5 = v15 & -256 | (int64_t)(*v6 != 0);
    }
    int64_t result = v5; // 0x4e141
    if (v2 != __readfsqword(40)) {
        // 0x4e143
        __stack_chk_fail();
        result = (int64_t)&g43;
    }
    // 0x4e148
    return result;
}

// Address range: 0x5be1a - 0x5bfa4
int64_t function_5be1a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x5be4e
    int64_t v2 = function_5858c(); // 0x5be67
    int64_t v3; // 0x5be1a
    int64_t v4; // 0x5be1a
    int64_t v5; // 0x5be1a
    int64_t v6; // 0x5bef9
    int64_t v7; // 0x5bf09
    if ((char)v2 == 0) {
        // 0x5bee3
        function_36622(a3, L"File not found '");
        v6 = *(int64_t *)((int64_t)L"File not found '" - 24);
        if (v6 == 0) {
            goto lab_0x5bf52;
        } else {
            // 0x5bf02
            v7 = *(int64_t *)-25 + v6;
            if (v7 > *(int64_t *)-17) {
                // 0x5bf12
                function_527a4(a3, v7);
                v4 = v7;
                goto lab_0x5bf2c;
            } else {
                // 0x5bf1f
                v4 = (int64_t)L"File not found '";
                if ((char)function_29cea(-25) != 0) {
                    // 0x5bf12
                    function_527a4(a3, v7);
                    v4 = v7;
                    goto lab_0x5bf2c;
                } else {
                    goto lab_0x5bf2c;
                }
            }
        }
    } else {
        int64_t v8 = (int64_t)&g39; // bp-80, 0x5bec6
        int64_t v9 = function_5bda0(a1, &v8, a3); // 0x5bece
        int64_t v10 = function_2508e((int64_t)&v8); // 0x5bed9
        v3 = v9;
        v5 = v10;
        goto lab_0x5bf7f;
    }
  lab_0x5bf52:;
    int64_t v11 = function_5289c(a3, &g32, function_35c52(&g32)); // 0x5bf6b
    v3 = v2;
    v5 = v11;
    goto lab_0x5bf7f;
  lab_0x5bf7f:;
    int64_t result = v5 & -256 | v3 % 256; // 0x5bf90
    if (v1 != __readfsqword(40)) {
        // 0x5bf92
        __stack_chk_fail();
        result = (int64_t)&g43;
    }
    // 0x5bf97
    return result;
  lab_0x5bf2c:
    // 0x5bf2c
    function_29ef7(4 * *(int64_t *)-25 - 1, v4, v6);
    function_29cf4(v6 - 24, v7);
    goto lab_0x5bf52;
}

// Address range: 0x67ede - 0x68067
int64_t function_67ede(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x67ef4
    int64_t v2 = a1; // 0x67f0b
    if (*(int32_t *)(a1 + 116) == 1) {
        int64_t v3 = 0; // bp-216, 0x67f16
        int64_t v4 = 0; // bp-208, 0x67f1f
        int64_t v5 = function_4efd30(16); // 0x67f28
        *(char *)(v5 + 8) = (char)a2;
        *(int64_t *)v5 = a1;
        int64_t v6 = function_4efd30(32); // 0x67f47
        int64_t v7 = v4; // 0x67f56
        *(int64_t *)(v6 + 24) = v5;
        *(int64_t *)(v6 + 8) = 0x100000001;
        v4 = v6;
        v3 = v5;
        *(int64_t *)v6 = (int64_t)&g33;
        int64_t v8 = v7; // bp-232, 0x67f7f
        function_35fcc(&v8);
        int64_t v9 = v3; // 0x67f8d
        v3 = 0;
        v8 = v9;
        int64_t v10 = v4; // 0x67fac
        v4 = 0;
        int64_t v11 = v10; // bp-224, 0x67fba
        function_35fcc(&v4);
        function_68c00(&v3, &v8);
        int64_t v12; // bp-168, 0x67ede
        int64_t v13; // bp-200, 0x67ede
        function_68b30(&v12, &v13, &v3, a1, 1);
        function_67ce4(a1, &v12, 0);
        function_25018(&v12);
        function_221a8(&v13);
        function_35fcc(&v4);
        function_35fcc(&v11);
        v2 = 5;
    }
    int64_t result = v2; // 0x6804e
    if (v1 != __readfsqword(40)) {
        // 0x68050
        __stack_chk_fail();
        result = (int64_t)&g43;
    }
    // 0x68055
    return result;
}

// Address range: 0x489630 - 0x489666
int64_t function_489630(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x489630
    __readfsqword(40);
    return function_38e213();
}

// Address range: 0x48973c - 0x489743
int64_t function_48973c(int64_t a1, int64_t a2) {
    // 0x48973c
    int64_t v1; // 0x48973c
    return v1 & -256 | 28;
}

// Address range: 0x48975b - 0x48976d
int64_t function_48975b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48975b
    int64_t v1; // 0x48975b
    __asm_out(-59, (char)v1);
    bool v2; // 0x48975b
    int64_t v3 = v2 ? -4 : 4; // 0x48975d
    int64_t v4 = v3 + a1 + (v2 ? -1 : 1); // 0x48975e
    int32_t * v5 = (int32_t *)v4; // 0x48975f
    uint32_t v6 = *v5; // 0x48975f
    *v5 = v6 / 0x40000000 | 4 * v6;
    unsigned char v7 = (char)a4 % 32; // 0x489762
    if (v7 != 0) {
        char * v8 = (char *)(v4 - 124); // 0x489762
        unsigned char v9 = *v8; // 0x489762
        *v8 = v9 >> v7 | v9 << 8 - v7;
    }
    return function_ffffffff95504b02(v4, v3 + a2);
}

// Address range: 0x48979a - 0x48979b
int64_t function_48979a(int64_t a1) {
    // 0x48979a
    int64_t result; // 0x48979a
    return result;
}

// Address range: 0x4897a8 - 0x4897b7
int64_t function_4897a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4897a8
    int64_t result; // 0x4897a8
    *(char *)-0x7f625d7eceea8993 = (char)result;
    return result;
}

// Address range: 0x497ff0 - 0x49817d
int64_t function_497ff0(int64_t a1, int64_t a2) {
    // 0x497ff0
    function_497930(a1);
    int64_t v1; // 0x497ff0
    int64_t v2; // 0x497ff0
    int64_t v3; // 0x497ff0
    int64_t v4; // 0x497ff0
    int64_t v5; // 0x497ff0
    int64_t v6; // 0x497ff0
    if ((uint64_t)a1 % 2 != 0) {
        int64_t v7 = a1 + 1; // 0x49812c
        int64_t v8 = a2 + 1; // 0x498130
        *(char *)a1 = (char)a2;
        v6 = v8;
        v4 = v7;
        v2 = 151;
        v1 = v8;
        v5 = v7;
        v3 = 149;
        if ((v7 & 2) == 0) {
            goto lab_0x498032;
        } else {
            goto lab_0x498148;
        }
    } else {
        // 0x498028
        v6 = a2;
        v4 = a1;
        v2 = 152;
        v1 = a2;
        v5 = a1;
        v3 = 150;
        if ((a1 & 2) != 0) {
            goto lab_0x498148;
        } else {
            goto lab_0x498032;
        }
    }
  lab_0x498032:;
    int64_t v9 = v6; // 0x498036
    int64_t v10 = v4; // 0x498036
    int64_t v11 = v2; // 0x498036
    int64_t v12 = v6; // 0x498036
    int64_t v13 = v4; // 0x498036
    int64_t v14 = v2; // 0x498036
    if ((v4 & 4) != 0) {
        goto lab_0x498168;
    } else {
        goto lab_0x49803c;
    }
  lab_0x498148:;
    int64_t v15 = v1 + 2; // 0x49814f
    *(int16_t *)v5 = *(int16_t *)v1;
    int64_t v16 = v5 + 2; // 0x498156
    v9 = v15;
    v10 = v16;
    v11 = v3;
    v12 = v15;
    v13 = v16;
    v14 = v3;
    if ((v16 & 4) == 0) {
        goto lab_0x49803c;
    } else {
        goto lab_0x498168;
    }
  lab_0x498168:
    // 0x498168
    *(int32_t *)v13 = *(int32_t *)v12;
    v9 = v12 + 4;
    v10 = v13 + 4;
    v11 = v14 + 0xfffffffc & 0xffffffff;
    goto lab_0x49803c;
  lab_0x49803c:
    // 0x49803c
    __asm_rep_movsq_memcpy((char *)v10, (char *)v9, v11 / 8 % 0x20000000);
    int64_t * v17 = (int64_t *)(a2 + 104); // 0x498073
    if (*v17 != 0) {
        int64_t * mem = calloc(1, (int32_t)&g29); // 0x498084
        int64_t result = (int64_t)mem; // 0x498084
        int64_t * v18 = (int64_t *)(a1 + 104); // 0x49808c
        *v18 = result;
        if (mem == NULL) {
            // 0x4980f4
            return result;
        }
        // 0x498096
        function_4ab2f0(result);
        int64_t v19 = *v17; // 0x49809e
        int64_t v20 = function_4ab520(*v18, *(int64_t *)(v19 + 16), *(int64_t *)(v19 + 8)); // 0x4980ae
        if ((int32_t)v20 != 0) {
            // 0x498110
            free((int64_t *)*v18);
            *v18 = 0;
            // 0x4980f4
            return v20 & 0xffffffff;
        }
    }
    int64_t * v21 = (int64_t *)(a2 + 120); // 0x4980bd
    if (*v21 == 0) {
        // 0x4980f4
        return 0;
    }
    int32_t size = (int32_t)*(int64_t *)(a2 + 128); // 0x4980d3
    int64_t * mem2 = calloc(1, size); // 0x4980d3
    int64_t v22 = (int64_t)mem2; // 0x4980d3
    *(int64_t *)(a1 + 120) = v22;
    int64_t result2 = v22; // 0x4980df
    if (mem2 != NULL) {
        // 0x4980e5
        memcpy(mem2, (int64_t *)*v21, size);
        result2 = 0;
    }
    // 0x4980f4
    return result2;
}

// Address range: 0x4985b0 - 0x49873b
int64_t function_4985b0(int64_t a1) {
    if (a1 == 0) {
        // 0x498734
        int64_t result; // 0x4985b0
        return result;
    }
    // 0x4985c2
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g24, "=> free");
    int64_t * v1 = (int64_t *)(a1 + 288); // 0x4985e1
    int64_t v2 = *v1; // 0x4985e1
    if (v2 != 0) {
        int64_t v3 = v2; // 0x4985f4
        *(char *)v3 = 0;
        v3++;
        while (v3 != v2 + (int64_t)&g30) {
            // 0x4985f8
            *(char *)v3 = 0;
            v3++;
        }
        // 0x498604
        free((int64_t *)*v1);
    }
    int64_t * v4 = (int64_t *)(a1 + 160); // 0x498610
    int64_t v5 = *v4; // 0x498610
    if (v5 != 0) {
        int64_t v6 = v5; // 0x498623
        *(char *)v6 = 0;
        v6++;
        while (v6 != v5 + (int64_t)&g30) {
            // 0x498628
            *(char *)v6 = 0;
            v6++;
        }
        // 0x498634
        free((int64_t *)*v4);
    }
    int64_t * v7 = (int64_t *)(a1 + 120); // 0x498640
    int64_t v8 = *v7; // 0x498640
    if (v8 != 0) {
        // 0x498649
        function_497750(v8);
        free((int64_t *)*v7);
    }
    int64_t * v9 = (int64_t *)(a1 + 96); // 0x498657
    int64_t v10 = *v9; // 0x498657
    if (v10 != 0) {
        // 0x498660
        function_4977a0(v10);
        int64_t * v11 = (int64_t *)(a1 + 128); // 0x498665
        function_497750(*v11);
        int64_t * v12 = (int64_t *)(a1 + 88); // 0x498671
        function_497930(*v12);
        free((int64_t *)*v9);
        free((int64_t *)*v11);
        free((int64_t *)*v12);
    }
    int64_t * v13 = (int64_t *)(a1 + 80); // 0x498698
    int64_t v14 = *v13; // 0x498698
    if (v14 != 0) {
        // 0x4986a1
        function_497930(v14);
        free((int64_t *)*v13);
    }
    int64_t * v15 = (int64_t *)(a1 + 368); // 0x4986af
    int64_t str = *v15; // 0x4986af
    if (str != 0) {
        int32_t len = strlen((char *)str); // 0x4986be
        int64_t v16 = str; // 0x4986c6
        if (len != 0) {
            int64_t v17 = str; // 0x4986cb
            *(char *)v17 = 0;
            v17++;
            while (v17 != str + (int64_t)len) {
                // 0x4986d0
                *(char *)v17 = 0;
                v17++;
            }
            // 0x4986dd
            v16 = *v15;
        }
        // 0x4986e4
        free((int64_t *)v16);
    }
    // 0x4986ec
    free((int64_t *)*(int64_t *)(a1 + 384));
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g25, "<= free");
    int64_t result2 = a1 + 440; // 0x49871a
    int64_t v18 = a1; // 0x498721
    *(char *)v18 = 0;
    v18++;
    while (v18 != result2) {
        // 0x498728
        *(char *)v18 = 0;
        v18++;
    }
    // 0x498734
    return result2;
}

// Address range: 0x4ab380 - 0x4ab513
int64_t function_4ab380(int64_t a1) {
    // 0x4ab380
    if (a1 == 0) {
        // 0x4ab50e
        int64_t result; // 0x4ab380
        return result;
    }
    // 0x4ab380
    function_4c42d0(a1 + 328);
    free((int64_t *)*(int64_t *)(a1 + (int64_t)&g27));
    int64_t v1 = *(int64_t *)(a1 + 200); // 0x4ab3ab
    int64_t v2 = v1; // 0x4ab3b5
    int64_t v3; // 0x4ab380
    int64_t v4; // 0x4ab380
    int64_t v5; // 0x4ab3c0
    if (v1 != 0) {
        v5 = *(int64_t *)(v2 + 48);
        v4 = v2;
        *(char *)v4 = 0;
        v3 = v4 + 1;
        while (v4 != v2 + 63) {
            // 0x4ab3d0
            v4 = v3;
            *(char *)v4 = 0;
            v3 = v4 + 1;
        }
        // 0x4ab3dc
        free((int64_t *)v2);
        v2 = v5;
        while (v5 != 0) {
            // 0x4ab3c0
            v5 = *(int64_t *)(v2 + 48);
            v4 = v2;
            *(char *)v4 = 0;
            v3 = v4 + 1;
            while (v4 != v2 + 63) {
                // 0x4ab3d0
                v4 = v3;
                *(char *)v4 = 0;
                v3 = v4 + 1;
            }
            // 0x4ab3dc
            free((int64_t *)v2);
            v2 = v5;
        }
    }
    int64_t v6 = *(int64_t *)(a1 + 264); // 0x4ab3e9
    int64_t v7 = v6; // 0x4ab3f3
    int64_t v8; // 0x4ab380
    int64_t v9; // 0x4ab380
    int64_t v10; // 0x4ab3f8
    if (v6 != 0) {
        v10 = *(int64_t *)(v7 + 48);
        v9 = v7;
        *(char *)v9 = 0;
        v8 = v9 + 1;
        while (v9 != v7 + 63) {
            // 0x4ab408
            v9 = v8;
            *(char *)v9 = 0;
            v8 = v9 + 1;
        }
        // 0x4ab414
        free((int64_t *)v7);
        v7 = v10;
        while (v10 != 0) {
            // 0x4ab3f8
            v10 = *(int64_t *)(v7 + 48);
            v9 = v7;
            *(char *)v9 = 0;
            v8 = v9 + 1;
            while (v9 != v7 + 63) {
                // 0x4ab408
                v9 = v8;
                *(char *)v9 = 0;
                v8 = v9 + 1;
            }
            // 0x4ab414
            free((int64_t *)v7);
            v7 = v10;
        }
    }
    int64_t v11 = *(int64_t *)(a1 + 488); // 0x4ab421
    int64_t v12 = v11; // 0x4ab42b
    int64_t v13; // 0x4ab380
    int64_t v14; // 0x4ab380
    int64_t v15; // 0x4ab430
    if (v11 != 0) {
        v15 = *(int64_t *)(v12 + 24);
        v14 = v12;
        *(char *)v14 = 0;
        v13 = v14 + 1;
        while (v14 != v12 + 31) {
            // 0x4ab440
            v14 = v13;
            *(char *)v14 = 0;
            v13 = v14 + 1;
        }
        // 0x4ab44c
        free((int64_t *)v12);
        v12 = v15;
        while (v15 != 0) {
            // 0x4ab430
            v15 = *(int64_t *)(v12 + 24);
            v14 = v12;
            *(char *)v14 = 0;
            v13 = v14 + 1;
            while (v14 != v12 + 31) {
                // 0x4ab440
                v14 = v13;
                *(char *)v14 = 0;
                v13 = v14 + 1;
            }
            // 0x4ab44c
            free((int64_t *)v12);
            v12 = v15;
        }
    }
    int64_t v16 = *(int64_t *)(a1 + 440); // 0x4ab459
    int64_t v17 = v16; // 0x4ab463
    int64_t v18; // 0x4ab380
    int64_t v19; // 0x4ab380
    int64_t v20; // 0x4ab468
    if (v16 != 0) {
        v20 = *(int64_t *)(v17 + 24);
        v19 = v17;
        *(char *)v19 = 0;
        v18 = v19 + 1;
        while (v19 != v17 + 31) {
            // 0x4ab478
            v19 = v18;
            *(char *)v19 = 0;
            v18 = v19 + 1;
        }
        // 0x4ab484
        free((int64_t *)v17);
        v17 = v20;
        while (v20 != 0) {
            // 0x4ab468
            v20 = *(int64_t *)(v17 + 24);
            v19 = v17;
            *(char *)v19 = 0;
            v18 = v19 + 1;
            while (v19 != v17 + 31) {
                // 0x4ab478
                v19 = v18;
                *(char *)v19 = 0;
                v18 = v19 + 1;
            }
            // 0x4ab484
            free((int64_t *)v17);
            v17 = v20;
        }
    }
    int64_t * v21 = (int64_t *)(a1 + 16); // 0x4ab491
    int64_t v22 = *v21; // 0x4ab491
    int64_t v23; // 0x4ab49a
    int64_t v24; // 0x4ab4b3
    int64_t v25; // 0x4ab4bc
    if (v22 != 0) {
        // 0x4ab49a
        v23 = *(int64_t *)(a1 + 8);
        v25 = v22;
        if (v23 != 0) {
            // 0x4ab4a3
            v24 = v22;
            *(char *)v24 = 0;
            v24++;
            while (v24 != v23 + v22) {
                // 0x4ab4b0
                *(char *)v24 = 0;
                v24++;
            }
            // 0x4ab4bc
            v25 = *v21;
        }
        // 0x4ab4c0
        free((int64_t *)v25);
    }
    int64_t v26 = *(int64_t *)(a1 + (int64_t)&g28); // 0x4ab4c5
    while (v26 != 0) {
        int64_t v27 = v26;
        function_4c42d0(v27 + 328);
        free((int64_t *)*(int64_t *)(v27 + (int64_t)&g27));
        v1 = *(int64_t *)(v27 + 200);
        v2 = v1;
        if (v1 != 0) {
            v5 = *(int64_t *)(v2 + 48);
            v4 = v2;
            *(char *)v4 = 0;
            v3 = v4 + 1;
            while (v4 != v2 + 63) {
                // 0x4ab3d0
                v4 = v3;
                *(char *)v4 = 0;
                v3 = v4 + 1;
            }
            // 0x4ab3dc
            free((int64_t *)v2);
            v2 = v5;
            while (v5 != 0) {
                // 0x4ab3c0
                v5 = *(int64_t *)(v2 + 48);
                v4 = v2;
                *(char *)v4 = 0;
                v3 = v4 + 1;
                while (v4 != v2 + 63) {
                    // 0x4ab3d0
                    v4 = v3;
                    *(char *)v4 = 0;
                    v3 = v4 + 1;
                }
                // 0x4ab3dc
                free((int64_t *)v2);
                v2 = v5;
            }
        }
        // 0x4ab3e9
        v6 = *(int64_t *)(v27 + 264);
        v7 = v6;
        if (v6 != 0) {
            v10 = *(int64_t *)(v7 + 48);
            v9 = v7;
            *(char *)v9 = 0;
            v8 = v9 + 1;
            while (v9 != v7 + 63) {
                // 0x4ab408
                v9 = v8;
                *(char *)v9 = 0;
                v8 = v9 + 1;
            }
            // 0x4ab414
            free((int64_t *)v7);
            v7 = v10;
            while (v10 != 0) {
                // 0x4ab3f8
                v10 = *(int64_t *)(v7 + 48);
                v9 = v7;
                *(char *)v9 = 0;
                v8 = v9 + 1;
                while (v9 != v7 + 63) {
                    // 0x4ab408
                    v9 = v8;
                    *(char *)v9 = 0;
                    v8 = v9 + 1;
                }
                // 0x4ab414
                free((int64_t *)v7);
                v7 = v10;
            }
        }
        // 0x4ab421
        v11 = *(int64_t *)(v27 + 488);
        v12 = v11;
        if (v11 != 0) {
            v15 = *(int64_t *)(v12 + 24);
            v14 = v12;
            *(char *)v14 = 0;
            v13 = v14 + 1;
            while (v14 != v12 + 31) {
                // 0x4ab440
                v14 = v13;
                *(char *)v14 = 0;
                v13 = v14 + 1;
            }
            // 0x4ab44c
            free((int64_t *)v12);
            v12 = v15;
            while (v15 != 0) {
                // 0x4ab430
                v15 = *(int64_t *)(v12 + 24);
                v14 = v12;
                *(char *)v14 = 0;
                v13 = v14 + 1;
                while (v14 != v12 + 31) {
                    // 0x4ab440
                    v14 = v13;
                    *(char *)v14 = 0;
                    v13 = v14 + 1;
                }
                // 0x4ab44c
                free((int64_t *)v12);
                v12 = v15;
            }
        }
        // 0x4ab459
        v16 = *(int64_t *)(v27 + 440);
        v17 = v16;
        if (v16 != 0) {
            v20 = *(int64_t *)(v17 + 24);
            v19 = v17;
            *(char *)v19 = 0;
            v18 = v19 + 1;
            while (v19 != v17 + 31) {
                // 0x4ab478
                v19 = v18;
                *(char *)v19 = 0;
                v18 = v19 + 1;
            }
            // 0x4ab484
            free((int64_t *)v17);
            v17 = v20;
            while (v20 != 0) {
                // 0x4ab468
                v20 = *(int64_t *)(v17 + 24);
                v19 = v17;
                *(char *)v19 = 0;
                v18 = v19 + 1;
                while (v19 != v17 + 31) {
                    // 0x4ab478
                    v19 = v18;
                    *(char *)v19 = 0;
                    v18 = v19 + 1;
                }
                // 0x4ab484
                free((int64_t *)v17);
                v17 = v20;
            }
        }
        // 0x4ab491
        v21 = (int64_t *)(v27 + 16);
        v22 = *v21;
        if (v22 != 0) {
            // 0x4ab49a
            v23 = *(int64_t *)(v27 + 8);
            v25 = v22;
            if (v23 != 0) {
                // 0x4ab4a3
                v24 = v22;
                *(char *)v24 = 0;
                v24++;
                while (v24 != v23 + v22) {
                    // 0x4ab4b0
                    *(char *)v24 = 0;
                    v24++;
                }
                // 0x4ab4bc
                v25 = *v21;
            }
            // 0x4ab4c0
            free((int64_t *)v25);
        }
        // 0x4ab4c5
        v26 = *(int64_t *)(v27 + (int64_t)&g28);
    }
    int64_t v28 = *(int64_t *)(a1 + (int64_t)&g28); // 0x4ab4d8
    *(char *)a1 = 0;
    int64_t v29 = a1 + 1; // 0x4ab4f3
    int64_t v30 = v29; // 0x4ab4fa
    while (v29 != a1 + (int64_t)&g29) {
        // 0x4ab4f0
        *(char *)v30 = 0;
        v29 = v30 + 1;
        v30 = v29;
    }
    int64_t result2 = v29; // 0x4ab4ff
    // 0x4ab506
    while (v28 != 0) {
        int64_t v31 = v28;
        v28 = *(int64_t *)(v31 + (int64_t)&g28);
        *(char *)v31 = 0;
        v29 = v31 + 1;
        v30 = v29;
        while (v29 != v31 + (int64_t)&g29) {
            // 0x4ab4f0
            *(char *)v30 = 0;
            v29 = v30 + 1;
            v30 = v29;
        }
        // 0x4ab4fc
        result2 = v29;
        if (v31 != a1) {
            // 0x4ab501
            free((int64_t *)v31);
            result2 = (int64_t)&g43;
        }
    }
    // 0x4ab50e
    return result2;
}

// Address range: 0x4b53f0 - 0x4b5579
int64_t function_4b53f0(int64_t * a1, int64_t a2, int64_t * a3) {
    if (a1 == NULL || a3 == NULL) {
        // 0x4b5492
        int64_t result; // 0x4b53f0
        return result;
    }
    int64_t v1 = (int64_t)a1;
    uint32_t result2 = *(int32_t *)(v1 + 4); // 0x4b542c
    *a3 = 0;
    int64_t v2; // 0x4b53f0
    int64_t v3; // 0x4b5538
    switch (result2) {
        case 5: {
        }
        case 3: {
        }
        case 6: {
        }
        case 7: {
            // 0x4b5492
            return 0;
        }
        case 1: {
            // 0x4b5538
            v2 = 1;
            v3 = *(int64_t *)(v1 + 48);
            // 0x4b5492
            return (v2 ^ 0xffffffff) + v2 + (int64_t)(v3 == 0) & 0xffff9d80;
        }
    }
    // 0x4b5453
    if (result2 != 2) {
        // 0x4b5492
        return result2;
    }
    int32_t v4 = *(int32_t *)(v1 + 12); // 0x4b545f
    int64_t v5; // 0x4b53f0
    if (v4 == 1) {
        // 0x4b54b0
        if (*(int64_t *)(v1 + 16) == 0) {
            // 0x4b5538
            v2 = 0;
            v3 = *(int64_t *)(v1 + 48);
            // 0x4b5492
            return (v2 ^ 0xffffffff) + v2 + (int64_t)(v3 == 0) & 0xffff9d80;
        }
        // 0x4b54ca
        v5 = v1 + 32;
    } else {
        int64_t v6 = *(int64_t *)(v1 + 48); // 0x4b546a
        v5 = v1;
        if (v6 != (int64_t)*(int32_t *)(v1 + 32)) {
            // 0x4b5477
            return (*(int64_t *)(v1 + 16) | v6) == 0 ? 0 : 0xffff9d80;
        }
    }
    int64_t result3 = *(int64_t *)(v5 + 40); // 0x4b54df
    int64_t result4 = *(int64_t *)(v1 + 80); // 0x4b54e3
    if ((int32_t)result3 != 0) {
        // 0x4b5492
        return result3;
    }
    // 0x4b54f8
    if (v4 == 0) {
        // 0x4b5492
        return result4;
    }
    // 0x4b5550
    if (result4 != 0) {
        // 0x4b5558
        *a3 = (int64_t)*(int32_t *)(result4 + 32);
    }
    // 0x4b5492
    return result3;
}

// Address range: 0x4d3af0 - 0x4d3c85
int64_t function_4d3af0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = 0; // bp-208, 0x4d3b10
    int64_t v2 = function_4b4d90(a3 & 0xffffffff); // 0x4d3b1e
    if (v2 == 0) {
        // 0x4d3b6c
        return 0xffffe100;
    }
    uint32_t v3 = *(int32_t *)(v2 + 8); // 0x4d3b34
    int32_t * v4 = (int32_t *)(v2 + 24); // 0x4d3b37
    uint32_t v5 = *v4; // 0x4d3b37
    int64_t v6; // bp-184, 0x4d3af0
    int64_t v7; // bp-200, 0x4d3af0
    int64_t result = function_4d3930(a1, a4 & 0xffffffff, a5, a6, &v6, v3 / 8, &v7, (int64_t)v5); // 0x4d3b63
    if ((int32_t)result != 0) {
        // 0x4d3b6c
        return result;
    }
    // 0x4d3b80
    int64_t v8; // bp-152, 0x4d3af0
    function_4b4e60(&v8);
    int64_t v9 = function_4b5690(&v8, v2); // 0x4d3b92
    int64_t v10 = v9; // 0x4d3b99
    if ((int32_t)v9 == 0) {
        int64_t v11 = function_4b4f20(&v8, &v6, (int64_t)(v3 & -8), (int32_t)a2); // 0x4d3bf5
        v10 = v11;
        if ((int32_t)v11 == 0) {
            int64_t v12 = function_4b4f80(&v8, &v7, *v4); // 0x4d3c09
            v10 = v12;
            if ((int32_t)v12 == 0) {
                int64_t v13 = function_4b4ff0(&v8); // 0x4d3c17
                v10 = v13;
                if ((int32_t)v13 == 0) {
                    int64_t v14 = function_4b5070(&v8, a7, a8, a9, &v1); // 0x4d3c46
                    v10 = v14;
                    if ((int32_t)v14 == 0) {
                        int64_t v15 = function_4b53f0(&v8, v1 + a9, &v1); // 0x4d3c6a
                        v10 = (int32_t)v15 != 0 ? 0xffffe200 : v15 & 0xffffffff;
                    }
                }
            }
        }
    }
    int64_t v16 = (int64_t)&v6; // 0x4d3b9b
    int64_t v17 = v16; // 0x4d3ba5
    *(char *)v17 = 0;
    v17++;
    while (v17 != (int64_t)&v8) {
        // 0x4d3ba8
        *(char *)v17 = 0;
        v17++;
    }
    int64_t v18 = (int64_t)&v7; // 0x4d3bbc
    *(char *)v18 = 0;
    v18++;
    while (v18 != v16) {
        // 0x4d3bc0
        *(char *)v18 = 0;
        v18++;
    }
    // 0x4d3bcc
    function_4b4ef0(&v8);
    // 0x4d3b6c
    return v10 & 0xffffffff;
}

// Address range: 0x4d4560 - 0x4d46eb
int64_t function_4d4560(int64_t result, int64_t a2, uint64_t a3) {
    if (a3 < 128) {
        // 0x4d4566
        if (result - a2 < 1) {
            // 0x4d4700
            return result;
        }
        int64_t v1 = result - 1; // 0x4d4578
        *(int64_t *)result = v1;
        *(char *)v1 = (char)a3;
        return 1;
    }
    if (a3 < 256) {
        // 0x4d4599
        if (result - a2 < 2) {
            // 0x4d4700
            return result;
        }
        int64_t v2 = result - 1; // 0x4d45ac
        *(int64_t *)result = v2;
        *(char *)v2 = -127;
        return 2;
    }
    if (a3 <= (uint64_t)(int64_t)&g42) {
        // 0x4d4640
        if (result - a2 < 3) {
            // 0x4d4700
            return result;
        }
        int64_t v3 = result - 1; // 0x4d4653
        *(int64_t *)result = v3;
        *(char *)v3 = -126;
        return 3;
    }
    if (a3 < 0x1000000) {
        // 0x4d45e6
        if (result - a2 < 4) {
            // 0x4d4700
            return result;
        }
        int64_t v4 = result - 1; // 0x4d45f9
        *(int64_t *)result = v4;
        *(char *)v4 = -125;
        return 4;
    }
    // 0x4d4688
    if (a3 >= 0x100000000) {
        // 0x4d4700
        return 0xffffffff;
    }
    // 0x4d4692
    if (result - a2 < 5) {
        // 0x4d4700
        return result;
    }
    int64_t v5 = result - 1; // 0x4d46a1
    *(int64_t *)result = v5;
    *(char *)v5 = (char)(a3 / 0x1000000);
    return result;
}

// Address range: 0x54d830 - 0x54d9c1
int64_t function_54d830(uint64_t a1, uint64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 8) - a1; // 0x54d83c
    if (v1 == 0) {
        // 0x54d907
        return 0xfffffffe;
    }
    unsigned char v2 = (char)a1;
    uint64_t result = a1 % 256; // 0x54d845
    if (v2 >= 0) {
        // 0x54d852
        *(int64_t *)a1 = a1 + 1;
        return result;
    }
    // 0x54d910
    if (v2 < 194) {
        // 0x54d907
        return 0xffffffff;
    }
    if (v2 < 224) {
        // 0x54d925
        if (v1 == 1) {
            // 0x54d907
            return 0xfffffffe;
        }
        unsigned char v3 = *(char *)(a1 + 1); // 0x54d930
        if ((v3 & -64) != -128) {
            // 0x54d907
            return 0xffffffff;
        }
        int64_t v4 = 64 * result + 0xffffcf80 + (int64_t)v3; // 0x54d948
        int64_t result2 = v4 & 0xffffffff; // 0x54d948
        if (0x100000000 * v4 >> 32 > a2) {
            // 0x54d907
            return result2;
        }
        // 0x54d958
        *(int64_t *)a1 = a1 + 2;
        return result2;
    }
    if (v2 < 240) {
        // 0x54d960
        if (v1 < 3) {
            // 0x54d907
            return 0xfffffffe;
        }
        unsigned char v5 = *(char *)(a1 + 1); // 0x54d96b
        if ((v5 & -64) != -128 || v2 == -32 == v5 < 160) {
            // 0x54d907
            return 0xffffffff;
        }
        unsigned char v6 = *(char *)(a1 + 2); // 0x54d98e
        if ((v6 & -64) == -128) {
            // 0x54d9a9
            return 0x1000 * result + 0xfff1df80 + 64 * (int64_t)v5 + (int64_t)v6 & 0xffffffff;
        }
        // 0x54d907
        return 0xffffffff;
    }
    // 0x54d86a
    if (v2 >= 245) {
        // 0x54d907
        return 0xffffffff;
    }
    // 0x54d874
    if (v1 < 4) {
        // 0x54d907
        return 0xfffffffe;
    }
    unsigned char v7 = *(char *)(a1 + 1); // 0x54d883
    if ((v7 & -64) != -128 || v2 == -16 == v7 < 144 || v2 == -12 && v7 >= 144) {
        // 0x54d907
        return 0xffffffff;
    }
    unsigned char v8 = *(char *)(a1 + 2); // 0x54d8b2
    if ((v8 & -64) != -128) {
        // 0x54d907
        return 0xffffffff;
    }
    unsigned char v9 = *(char *)(a1 + 3); // 0x54d8c9
    if ((v9 & -64) != -128) {
        // 0x54d907
        return 0xffffffff;
    }
    int64_t v10 = 0x40000 * result + 0xfc37df80 + 0x1000 * (int64_t)v7 + 64 * (int64_t)v8 + (int64_t)v9; // 0x54d8f0
    if (0x100000000 * v10 >> 32 <= a2) {
        // 0x54d900
        *(int64_t *)a1 = a1 + 4;
    }
    // 0x54d907
    return v10 & 0xffffffff;
}

// Address range: 0x552760 - 0x5528f4
// From class:    std::collate_byname<char>
// Type:          virtual member function
int64_t function_552760(int64_t result2, int64_t a2, int64_t a3, int64_t a4) {
    // 0x552760
    __readfsqword(40);
    *(int64_t *)result2 = (int64_t)&g39;
    int64_t v1 = function_548990(a3); // 0x5527ae
    int64_t v2 = v1 - 24; // 0x5527be
    int64_t v3 = 2 * (a4 - a3); // 0x5527c2
    int64_t v4 = function_4eec00(v3); // 0x5527d0
    int64_t v5 = v1; // 0x5527dc
    int64_t v6 = v3; // 0x5527dc
    int64_t v7 = v4; // 0x5527dc
    int64_t v8; // 0x552760
    uint64_t v9; // 0x552760
    int64_t v10; // 0x552840
    while (true) {
      lab_0x5527e0:;
        int64_t v11 = v7;
        int64_t v12 = v6;
        int64_t str = v5;
        int64_t v13 = function_5690d0(a2, v11, str, v12); // 0x5527f4
        int64_t v14 = v13; // 0x5527fc
        v6 = v12;
        int64_t v15 = v11; // 0x5527fc
        if (v12 <= v13) {
            // 0x5527fe
            v6 = v13 + 1;
            function_4eeb40(v11);
            v15 = function_4eec00(v6);
            v14 = function_5690d0(a2, v15, str, v6);
        }
        // 0x552826
        v7 = v15;
        function_25cec(result2, v7, v14);
        v10 = str + (int64_t)strlen((char *)str);
        if (*(int64_t *)v2 + v1 == v10) {
            // break -> 0x5528b0
            break;
        }
        // 0x552849
        v9 = *(int64_t *)(str - 24) + 1;
        if (v9 > *(int64_t *)(str - 16)) {
            // 0x55286a
            function_259ce(result2, v9);
            v8 = result2;
            goto lab_0x552879;
        } else {
            // 0x552863
            v8 = str;
            if (*(int32_t *)(str - 8) < 1) {
                goto lab_0x552879;
            } else {
                // 0x55286a
                function_259ce(result2, v9);
                v8 = result2;
                goto lab_0x552879;
            }
        }
    }
    int64_t result = function_4eeb40(v7); // 0x5528b3
    if (v2 != (int64_t)g36) {
        // 0x5528f0
        return result;
    }
    // 0x5528c9
    __readfsqword(40);
    return result2;
  lab_0x552879:;
    int64_t v16 = v8;
    int64_t v17 = v16 - 24; // 0x552879
    int64_t * v18 = (int64_t *)v17; // 0x552879
    *(char *)(*v18 + v16) = 0;
    if (v17 != (int64_t)g36) {
        // 0x552896
        *(int32_t *)(v16 - 8) = 0;
        *v18 = v9;
        *(char *)(v16 + v9) = 0;
    }
    // 0x5527e0
    v5 = v10 + 1;
    goto lab_0x5527e0;
}

// Address range: 0x565450 - 0x5655dc
int64_t function_565450(int64_t a1) {
    // 0x565450
    int64_t result2; // 0x565450
    int64_t v1; // 0x565486
    int64_t v2; // 0x565491
    if (g37 == 0) {
        uint64_t v3 = a1 + 16; // 0x5654f8
        v1 = g41;
        v2 = v3 > 16 ? v3 : 16;
        if (g41 == 0) {
            // 0x5654e7
            return 0;
        }
        goto lab_0x5654a6;
    } else {
        // 0x565469
        if (pthread_mutex_lock(&g40) != 0) {
            // 0x56558c
            function_4f1b30();
            goto lab_0x565591;
        } else {
            uint64_t v4 = a1 + 16; // 0x56547d
            v1 = g41;
            v2 = v4 > 16 ? v4 : 16;
            result2 = 0;
            if (v1 == 0) {
                goto lab_0x5654d3;
            } else {
                goto lab_0x5654a6;
            }
        }
    }
  lab_0x5654a6:;
    uint64_t v5 = v2 + 15 & -16;
    uint64_t v6 = *(int64_t *)v1; // 0x5654a6
    int64_t v7 = v1; // 0x5654ac
    int64_t v8 = v6; // 0x5654ac
    int64_t v9 = (int64_t)&g41; // 0x5654ac
    int64_t result; // 0x565450
    if (v6 < v5) {
        int64_t v10 = v1 + 8; // 0x5654c3
        int64_t v11 = *(int64_t *)v10; // 0x5654c3
        result = 0;
        while (v11 != 0) {
            uint64_t v12 = *(int64_t *)v11; // 0x5654b8
            v7 = v11;
            v8 = v12;
            v9 = v10;
            if (v12 >= v5) {
                goto lab_0x56552c;
            }
            v10 = v11 + 8;
            v11 = *(int64_t *)v10;
            result = 0;
        }
    } else {
      lab_0x56552c:;
        int64_t v13 = *(int64_t *)(v7 + 8); // 0x56552f
        uint64_t v14 = v8 - v5; // 0x565533
        int64_t v15; // 0x565450
        if (v14 < 16) {
            // 0x565560
            *(int64_t *)v7 = v8;
            *(int64_t *)v9 = v13;
            v15 = v7;
        } else {
            int64_t v16 = v7 + v5; // 0x56553c
            *(int64_t *)(v16 + 8) = v13;
            int64_t * v17 = (int64_t *)v9; // 0x565544
            int64_t v18 = *v17; // 0x565544
            *(int64_t *)v16 = v14;
            *(int64_t *)v18 = v5;
            *v17 = v16;
            v15 = v18;
        }
        // 0x565550
        result = v15 + 16;
    }
    // 0x5654ce
    result2 = result;
    if (g37 == 0) {
        // 0x5654e7
        return result;
    }
    goto lab_0x5654d3;
  lab_0x5654d3:
    // 0x5654d3
    if (pthread_mutex_unlock(&g40) == 0) {
        // 0x5654e7
        return result2;
    }
    goto lab_0x565591;
  lab_0x565591:;
    int64_t v19 = function_20210(8); // 0x565596
    *(int64_t *)v19 = (int64_t)&g35;
    _Unwind_Resume((struct _Unwind_Exception *)function_203b0(v19, 0x843278, 0x4f1a60));
    return function_200c0();
}
