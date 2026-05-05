/*
 * Targeted RetDec C for native executable gap queue batch 7.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x71a15-0x71b9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x491e50-0x491fd9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30c30-0x30db8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2620b-0x26392 rank=- name=- kind=- bytes=- uncovered=-
 *   0x488d00-0x488e87 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5515b0-0x551735 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33be0-0x33d64 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564190-0x564314 rank=- name=- kind=- bytes=- uncovered=-
 *   0x565720-0x5658a3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b1ac0-0x4b1c41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27c71-0x27df1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b2e6-0x4b465 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5c136-0x5c2b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5c2b6-0x5c435 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5143e0-0x51455f rank=- name=- kind=- bytes=- uncovered=-
 *   0x61d90-0x61f0e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_170446();
int64_t function_1b8084();
int64_t function_2508e();
int64_t function_25622();
int64_t function_2562c();
int64_t function_256ba();
int64_t function_259ce();
int64_t function_25e90();
int64_t function_261a4();
int64_t function_2620b();
int64_t function_27998();
int64_t function_27a2a();
int64_t function_27c71();
int64_t function_30c30();
int64_t function_30c6b();
int64_t function_30c71();
int64_t function_30c83();
int64_t function_30ca2();
int64_t function_30d1d();
int64_t function_30d29();
int64_t function_30d36();
int64_t function_30d54();
int64_t function_30d76();
int64_t function_30d7d();
int64_t function_33be0();
int64_t function_33c41();
int64_t function_33cab();
int64_t function_33cc2();
int64_t function_33d2b();
int64_t function_38a100();
int64_t function_455ee();
int64_t function_488d00();
int64_t function_488d78();
int64_t function_488d7e();
int64_t function_488da1();
int64_t function_488dcf();
int64_t function_488de0();
int64_t function_488dea();
int64_t function_488e0f();
int64_t function_488e18();
int64_t function_488e4e();
int64_t function_491e50();
int64_t function_4b04e0();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b08f0();
int64_t function_4b0ac0();
int64_t function_4b0d80();
int64_t function_4b1ac0();
int64_t function_4b2e6();
int64_t function_4c2b6();
int64_t function_4dd22();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0a80();
int64_t function_4f0ae0();
int64_t function_508620();
int64_t function_50ab00();
int64_t function_512ca0();
int64_t function_5137b0();
int64_t function_5143e0();
int64_t function_52c62();
int64_t function_542470();
int64_t function_542590();
int64_t function_542650();
int64_t function_550870();
int64_t function_550a60();
int64_t function_5515b0();
int64_t function_564190();
int64_t function_5642d0();
int64_t function_5642d4();
int64_t function_5652d0();
int64_t function_5b4f4();
int64_t function_5bff9();
int64_t function_5c0b0();
int64_t function_5c136();
int64_t function_5c230();
int64_t function_5c2b6();
int64_t function_5c3b0();
int64_t function_61d90();
int64_t function_6307c();
int64_t function_6a670();
int64_t function_717ca();
int64_t function_717fa();
int64_t function_71a15();
int64_t function_71b9e();
int64_t function_71c60();
int64_t function_7293a();
int64_t function_ffffffffe127f4a8();

// Address range: 0x2620b - 0x26392
int64_t function_2620b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x2622d
    int64_t v2 = a3 - 1; // 0x2623d
    int64_t v3 = (0x8000000000000000 * (int128_t)(v2 >> 63) | (int128_t)v2) / 2; // 0x26248
    int64_t v4 = 2; // 0x26255
    int64_t v5 = a2; // 0x26255
    if (v3 > a2) {
        int64_t v6 = 2 * a2; // 0x26257
        int64_t v7 = v6 + 2; // 0x2625e
        int64_t v8 = v6 | 1; // 0x26261
        int64_t v9 = 8 * v8 + a1; // 0x2626f
        int64_t v10 = (char)function_261a4(a5, 8 * v7 + a1, v9, v7) == 0 ? v7 : v8; // 0x26285
        function_256ba(8 * a2 + a1, 8 * v10 + a1, v9, v7);
        v4 = v7;
        v5 = v10;
        while (v10 < v3) {
            int64_t v11 = v10;
            v6 = 2 * v11;
            v7 = v6 + 2;
            v8 = v6 | 1;
            v9 = 8 * v8 + a1;
            v10 = (char)function_261a4(a5, 8 * v7 + a1, v9, v7) == 0 ? v7 : v8;
            function_256ba(8 * v11 + a1, 8 * v10 + a1, v9, v7);
            v4 = v7;
            v5 = v10;
        }
    }
    int64_t v12 = v4; // 0x2629c
    int64_t v13 = v5; // 0x2629c
    if (a3 % 2 == 0) {
        uint64_t v14 = a3 - 2; // 0x2629e
        v12 = 2;
        v13 = v5;
        if (v5 == (int64_t)((0x8000000000000000 * (int128_t)(v14 / 0x8000000000000000) | (int128_t)v14) / 2)) {
            int64_t v15 = 2 * v5 | 1; // 0x262b2
            function_256ba(8 * v5 + a1, 8 * v15 + a1, v14 % 2, 2);
            v12 = 2;
            v13 = v15;
        }
    }
    // 0x262c9
    int64_t v16; // bp-96, 0x2620b
    function_27998(&v16, a5);
    int64_t v17 = v12; // bp-104, 0x262e6
    *(int64_t *)a4 = (int64_t)&g7;
    uint64_t v18 = v13 - 1; // 0x262f9
    int64_t v19 = 8 * v13 + a1; // 0x2630a
    int64_t v20; // 0x2620b
    int64_t v21; // 0x2620b
    int64_t v22; // 0x2620b
    if (v13 > a2) {
        int64_t v23 = (int64_t)&v17;
        int64_t v24 = (0x8000000000000000 * (int128_t)(v18 / 0x8000000000000000) | (int128_t)v18) / 2; // 0x2620b
        uint64_t v25 = v24;
        int64_t v26 = v19;
        int64_t v27 = 8 * v25 + a1;
        int64_t v28 = function_261a4((int64_t)&v16, v27, v23, v26); // 0x26324
        v21 = v23;
        v20 = v26;
        v22 = v23;
        while ((char)v28 != 0) {
            // 0x26332
            function_256ba(v26, v27, v23, v26);
            uint64_t v29 = v25 - 1; // 0x26340
            v24 = (0x8000000000000000 * (int128_t)(v29 / 0x8000000000000000) | (int128_t)v29) / 2;
            if (v25 <= a2) {
                // 0x26305
                v21 = v23;
                v20 = v27;
                v22 = v29 % 2;
                goto lab_0x26353;
            }
            v25 = v24;
            v26 = v27;
            v27 = 8 * v25 + a1;
            v28 = function_261a4((int64_t)&v16, v27, v23, v26);
            v21 = v23;
            v20 = v26;
            v22 = v23;
        }
    } else {
        // 0x262c9
        v21 = &v17;
        v20 = v19;
        v22 = v18 % 2;
    }
    goto lab_0x26353;
  lab_0x26353:;
    int64_t v30 = v20;
    function_256ba(v30, v21, v22, v30);
    function_2508e(&v17);
    function_27a2a(&v16);
    int64_t result = 0; // 0x2637c
    if (v1 != __readfsqword(40)) {
        // 0x2637e
        __stack_chk_fail();
        result = (int64_t)&g12;
    }
    // 0x26383
    return result;
}

// Address range: 0x27c71 - 0x27df1
int64_t function_27c71(int64_t result2, int64_t a2, int64_t result) {
    // 0x27c71
    if (a2 == result2) {
        // 0x27ddf
        return result;
    }
    // 0x27c8b
    if (result == a2) {
        // 0x27ddf
        return result2;
    }
    int64_t v1 = result - result2 >> 3; // 0x27ca9
    int64_t v2 = a2 - result2 >> 3; // 0x27cad
    int64_t v3 = v1 - v2; // 0x27cb4
    int64_t v4 = a2; // 0x27cba
    if (v3 == v2) {
        int64_t v5 = result2 + 8; // 0x27cc8
        int64_t v6; // 0x27c71
        function_256ba(result2, v4, v3, v6);
        v4 += 8;
        while (v5 != a2) {
            int64_t v7 = v5;
            v5 = v7 + 8;
            function_256ba(v7, v4, v3, v6);
            v4 += 8;
        }
        int64_t v8 = result2 + 8; // 0x27cda
        // 0x27ddf
        return (a2 - v8 & -8) + v8;
    }
    int64_t v9 = v2; // 0x27cf8
    int64_t v10 = v1; // 0x27cf8
    int64_t v11 = result2; // 0x27cf8
    while (true) {
        int64_t v12 = v11;
        int64_t v13 = v10;
        int64_t v14 = v9;
        int64_t v15 = v13 - v14; // 0x27cff
        if (v15 > v14) {
            if (v15 > 0) {
                int64_t v16 = 0; // 0x27d46
                int64_t v17 = v12;
                int64_t v18 = v12 + 8 * v14;
                function_256ba(v17, v18, v18, v17);
                v16++;
                int64_t v19 = v18 + 8; // 0x27d18
                int64_t v20 = v17 + 8; // 0x27d18
                while (v16 != v15) {
                    // 0x27d1a
                    v17 = v20;
                    v18 = v19;
                    function_256ba(v17, v18, v18, v17);
                    v16++;
                    v19 = v18 + 8;
                    v20 = v17 + 8;
                }
            }
            int64_t v21 = (0x8000000000000000 * (int128_t)(v13 >> 63) | (int128_t)v13) % (int128_t)v14; // 0x27d57
            if (v21 == 0) {
                // break -> 0x27ddf
                break;
            }
            // 0x27d63
            v9 = v14 - v21;
            v10 = v14;
            v11 = (v15 > 0 ? 8 * v15 : 0) + v12;
        } else {
            int64_t v22 = v12 + 8 * v13; // 0x27d6e
            int64_t v23 = 8 * v15; // 0x27d72
            int64_t v24 = v22 - v23; // 0x27d80
            int64_t v25 = v24; // 0x27d8e
            int64_t v26 = v22; // 0x27d8e
            if (v14 > 0) {
                int64_t v27 = v25 - 8; // 0x27d90
                int64_t v28 = v26 - 8; // 0x27d94
                int64_t v29 = 1; // 0x27d98
                function_256ba(v27, v28, v23, v27);
                int64_t v30 = v29; // 0x27d8e
                v25 = v27;
                v26 = v28;
                while (v29 != v14) {
                    // 0x27d90
                    v27 = v25 - 8;
                    v28 = v26 - 8;
                    v29 = v30 + 1;
                    function_256ba(v27, v28, v23, v27);
                    v30 = v29;
                    v25 = v27;
                    v26 = v28;
                }
            }
            int64_t v31 = (0x8000000000000000 * (int128_t)(v13 >> 63) | (int128_t)v13) % (int128_t)v15; // 0x27dcd
            v9 = v31;
            v10 = v15;
            v11 = v24 + (v14 > 0 ? -8 * v14 : 0);
            if (v31 == 0) {
                // break -> 0x27ddf
                break;
            }
        }
    }
    // 0x27ddf
    return result - a2 + result2;
}

// Address range: 0x30c30 - 0x30c5e
int64_t function_30c30(int64_t a1) {
    // 0x30c30
    __readfsqword(40);
    return function_170446();
}

// Address range: 0x30c6b - 0x30c70
int64_t function_30c6b(void) {
    // 0x30c6b
    int64_t result; // 0x30c6b
    *(int32_t *)result = 0;
    return result;
}

// Address range: 0x30c71 - 0x30c74
int64_t function_30c71(int64_t a1) {
    // 0x30c71
    int64_t result; // 0x30c71
    return result;
}

// Address range: 0x30c83 - 0x30ca2
int64_t function_30c83(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30c83
    int64_t v1; // 0x30c83
    *(int32_t *)a1 = (int32_t)v1 + 0x70f0a87c;
    uint32_t v2 = __asm_in((int16_t)a3); // 0x30c93
    return ((int64_t)v2 | a4) % 256 | (int64_t)(v2 & -256);
}

// Address range: 0x30ca2 - 0x30cb9
int64_t function_30ca2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 - 43 + a3); // 0x30ca2
    int64_t v2; // 0x30ca2
    bool v3; // 0x30ca2
    *v1 = (char)v3 - (char)((uint64_t)v2 / 256) + *v1;
    int64_t result = a4 & 0x285f0003; // 0x30caa
    int64_t v4; // 0x30ca2
    *(char *)a1 = *(char *)&v4 + (char)result;
    return result;
}

// Address range: 0x30d1d - 0x30d20
int64_t function_30d1d(int64_t a1) {
    // 0x30d1d
    int64_t result; // 0x30d1d
    return result;
}

// Address range: 0x30d29 - 0x30d2a
int64_t function_30d29(void) {
    // 0x30d29
    int64_t result; // 0x30d29
    return result;
}

// Address range: 0x30d36 - 0x30d48
int64_t function_30d36(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30d36
    int64_t v1; // 0x30d36
    unsigned char v2 = (char)v1;
    char v3 = v2 + 123; // 0x30d41
    *(char *)a2 = v3;
    int64_t result = 0x74c6ec5200827bb5; // 0x30d43
    if (v2 > 132 || v3 == 0) {
        result = function_30d29();
    }
    // 0x30d45
    return result;
}

// Address range: 0x30d54 - 0x30d63
int64_t function_30d54(int64_t a1) {
    // 0x30d54
    int64_t v1; // 0x30d54
    *(char *)-0x1a346a64 = *(char *)-0x1a346a64 ^ (char)v1;
    return v1 + 0xdf6bdd4f & 0xffffffff;
}

// Address range: 0x30d76 - 0x30d79
int64_t function_30d76(int64_t a1) {
    // 0x30d76
    int64_t result; // 0x30d76
    return result;
}

// Address range: 0x30d7d - 0x30d82
int64_t function_30d7d(void) {
    // 0x30d7d
    return function_ffffffffe127f4a8();
}

// Address range: 0x33be0 - 0x33c0d
int64_t function_33be0(int64_t a1) {
    // 0x33be0
    __readfsqword(40);
    return function_1b8084();
}

// Address range: 0x33c41 - 0x33c85
int64_t function_33c41(void) {
    // 0x33c41
    int64_t result; // 0x33c41
    return result;
}

// Address range: 0x33cab - 0x33cbb
int64_t function_33cab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33cab
    int64_t v1; // 0x33cab
    *(int32_t *)(a1 + 120) = (int32_t)v1;
    return 0xe1aa7f0e;
}

// Address range: 0x33cc2 - 0x33cc4
int64_t function_33cc2(void) {
    // 0x33cc2
    int64_t result; // 0x33cc2
    return result;
}

// Address range: 0x33d2b - 0x33d41
int64_t function_33d2b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33d2b
    int64_t v1; // 0x33d2b
    return v1 & -256 | (int64_t)*(char *)0x3727ac7b2fb0b3ad;
}

// Address range: 0x4b2e6 - 0x4b465
int64_t function_4b2e6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b2e6
    *(int64_t *)(a1 + 8) = a2;
    *(int64_t *)a1 = (int64_t)&g3;
    function_7293a(a1 + 16);
    *(int32_t *)(a1 + 56) = (int32_t)&g1;
    *(int64_t *)(a1 + 64) = 256;
    *(int64_t *)(a1 + 72) = 1;
    *(int64_t *)(a1 + 80) = 256;
    *(int64_t *)(a1 + 88) = 32;
    *(int64_t *)(a1 + 96) = 2;
    function_4dd22(a1 + 104);
    int128_t v1 = __asm_movss(0x3f800000); // 0x4b348
    *(int32_t *)(a1 + 304) = (int32_t)__asm_movss_133(v1);
    *(int32_t *)(a1 + 224) = (int32_t)a3;
    *(int32_t *)(a1 + 360) = (int32_t)__asm_movss_133(v1);
    *(int64_t *)(a1 + 248) = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)(a1 + 264) = 0;
    *(int64_t *)(a1 + 232) = (int64_t)&g7;
    int64_t v2 = a1 + 320; // 0x4b399
    *(int64_t *)(a1 + 280) = 1;
    *(int64_t *)(a1 + 288) = 0;
    *(int64_t *)(a1 + 272) = v2;
    int64_t v3 = a1 + 376; // 0x4b3bd
    *(int64_t *)(a1 + 296) = 0;
    *(int64_t *)(a1 + 312) = 0;
    *(int64_t *)v2 = 0;
    *(int64_t *)(a1 + 328) = v3;
    *(int64_t *)(a1 + 336) = 1;
    *(int64_t *)(a1 + 344) = 0;
    *(int64_t *)(a1 + 352) = 0;
    *(int64_t *)(a1 + 368) = 0;
    *(int64_t *)v3 = 0;
    function_7293a(a1 + 384);
    function_4c2b6(a1 + 424);
    function_7293a(a1 + 504);
    function_71c60(a1 + 544);
    *(char *)(a1 + 240) = 0;
    *(int64_t *)(a1 + 216) = 0;
    __asm_mfence();
    int64_t result; // 0x4b2e6
    return result;
}

// Address range: 0x5c136 - 0x5c22f
int64_t function_5c136(int64_t a1, int64_t result, int64_t a3) {
    if (a1 + 8 == result) {
        // 0x5c14f
        if (*(int64_t *)(a1 + 40) == 0 || (char)function_5bff9(*(int64_t *)(a1 + 32) + 32, a3) == 0) {
            // 0x5c20f
            return function_5c0b0(a1, a3);
        }
        // 0x5c227
        return 0;
    }
    int64_t v1 = result + 32; // 0x5c177
    if ((char)function_5bff9(a3, v1) != 0) {
        // 0x5c18d
        if (*(int64_t *)(a1 + 24) == result) {
            // 0x5c227
            return result;
        }
        int64_t v2 = function_4f0ae0(result); // 0x5c19a
        if ((char)function_5bff9(v2 + 32, a3) == 0) {
            // 0x5c20f
            return function_5c0b0(a1, a3);
        }
        // 0x5c227
        return *(int64_t *)(v2 + 24) != 0 ? result : 0;
    }
    // 0x5c1c3
    if ((char)function_5bff9(v1, a3) == 0) {
        // 0x5c227
        return result;
    }
    // 0x5c1d2
    if (*(int64_t *)(a1 + 32) == result) {
        // 0x5c227
        return 0;
    }
    int64_t result2 = function_4f0a80(result); // 0x5c1e1
    if ((char)function_5bff9(a3, result2 + 32) == 0) {
        // 0x5c20f
        return function_5c0b0(a1, a3);
    }
    // 0x5c1f9
    if (*(int64_t *)(result + 24) != 0) {
        // 0x5c227
        return result2;
    }
    // 0x5c227
    return 0;
}

// Address range: 0x5c230 - 0x5c2b5
int64_t function_5c230(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16);
    int64_t v2; // 0x5c230
    int64_t v3; // 0x5c230
    int64_t v4; // 0x5c230
    if (v1 == 0) {
        // 0x5c271
        v3 = a1 + 8;
        goto lab_0x5c275;
    } else {
        int64_t v5 = v1;
        int64_t v6 = v5 + 32;
        int64_t v7 = function_5bff9(a2, v6); // 0x5c256
        int64_t v8 = *(int64_t *)(((char)v7 == 0 ? 24 : 16) + v5);
        while (v8 != 0) {
            // 0x5c24f
            v5 = v8;
            v6 = v5 + 32;
            v7 = function_5bff9(a2, v6);
            v8 = *(int64_t *)(((char)v7 == 0 ? 24 : 16) + v5);
        }
        // 0x5c271
        v3 = v5;
        v2 = v6;
        v4 = v5;
        if ((char)v7 == 0) {
            return (char)function_5bff9(v2, a2) != 0 ? 0 : v4;
        } else {
            goto lab_0x5c275;
        }
    }
  lab_0x5c275:
    // 0x5c275
    if (*(int64_t *)(a1 + 24) == v3) {
        // 0x5c2ab
        return 0;
    }
    int64_t v9 = function_4f0ae0(v3); // 0x5c286
    v2 = v9 + 32;
    v4 = v9;
    return (char)function_5bff9(v2, a2) != 0 ? 0 : v4;
    // 0x5c2ab
    return (char)function_5bff9(v2, a2) != 0 ? 0 : v4;
}

// Address range: 0x5c2b6 - 0x5c3af
int64_t function_5c2b6(int64_t a1, int64_t result, int64_t a3) {
    if (a1 + 8 == result) {
        // 0x5c2cf
        if (*(int64_t *)(a1 + 40) == 0 || (char)function_5bff9(*(int64_t *)(a1 + 32) + 32, a3) == 0) {
            // 0x5c38f
            return function_5c230(a1, a3);
        }
        // 0x5c3a7
        return 0;
    }
    int64_t v1 = result + 32; // 0x5c2f7
    if ((char)function_5bff9(a3, v1) != 0) {
        // 0x5c30d
        if (*(int64_t *)(a1 + 24) == result) {
            // 0x5c3a7
            return result;
        }
        int64_t v2 = function_4f0ae0(result); // 0x5c31a
        if ((char)function_5bff9(v2 + 32, a3) == 0) {
            // 0x5c38f
            return function_5c230(a1, a3);
        }
        // 0x5c3a7
        return *(int64_t *)(v2 + 24) != 0 ? result : 0;
    }
    // 0x5c343
    if ((char)function_5bff9(v1, a3) == 0) {
        // 0x5c3a7
        return result;
    }
    // 0x5c352
    if (*(int64_t *)(a1 + 32) == result) {
        // 0x5c3a7
        return 0;
    }
    int64_t result2 = function_4f0a80(result); // 0x5c361
    if ((char)function_5bff9(a3, result2 + 32) == 0) {
        // 0x5c38f
        return function_5c230(a1, a3);
    }
    // 0x5c379
    if (*(int64_t *)(result + 24) != 0) {
        // 0x5c3a7
        return result2;
    }
    // 0x5c3a7
    return 0;
}

// Address range: 0x5c3b0 - 0x5c430
int64_t function_5c3b0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x5c3bb
    int64_t v2 = *(int64_t *)(a1 + 16);
    int64_t v3; // 0x5c414
    int64_t result; // 0x5c427
    if (v2 == 0) {
        // 0x5c40c
        v3 = function_4efd30(48);
        result = function_5b4f4(a2 - 24);
        *(int64_t *)(v3 + 32) = result;
        return result;
    }
    int64_t v4 = v2;
    int64_t v5; // 0x5c3b0
    int64_t v6; // 0x5c3b0
    while ((char)function_5bff9(v4 + 32, a2) != 0) {
        // 0x5c3ed
        v5 = *(int64_t *)(v4 + 24);
        v6 = v1;
        if (v5 == 0) {
            // break (via goto) -> 0x5c3f3
            goto lab_0x5c3f3;
        }
        v4 = v5;
    }
    int64_t v7 = *(int64_t *)(v4 + 16);
    v6 = v4;
    while (v7 != 0) {
        int64_t v8 = v4;
        v4 = v7;
        while ((char)function_5bff9(v4 + 32, a2) != 0) {
            // 0x5c3ed
            v5 = *(int64_t *)(v4 + 24);
            v6 = v8;
            if (v5 == 0) {
                // break (via goto) -> 0x5c3f3
                goto lab_0x5c3f3;
            }
            v4 = v5;
        }
        // 0x5c3e4
        v7 = *(int64_t *)(v4 + 16);
        v6 = v4;
    }
  lab_0x5c3f3:
    // 0x5c3f3
    if (v1 == v6) {
        // 0x5c40c
        v3 = function_4efd30(48);
        result = function_5b4f4(a2 - 24);
        *(int64_t *)(v3 + 32) = result;
        return result;
    }
    int64_t v9 = v6 + 32; // 0x5c3f8
    int64_t result2 = function_5bff9(a2, v9); // 0x5c3ff
    if ((char)result2 == 0) {
        // 0x5c4ad
        return result2;
    }
    // 0x5c40c
    v3 = function_4efd30(48);
    result = function_5b4f4(v9 - 24);
    *(int64_t *)(v3 + 32) = result;
    return result;
}

// Address range: 0x61d90 - 0x61f0e
int64_t function_61d90(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)a4; // 0x61d9f
    *v1 = 0;
    int64_t v2 = __readfsqword(40); // 0x61da2
    bool v3 = a2 == 0 | a3 == 0;
    int64_t v4 = 0; // 0x61dc2
    bool v5 = false; // 0x61dc2
    int64_t v6; // 0x61d90
    int64_t v7; // 0x61d90
    int64_t v8; // 0x61d90
    int64_t v9; // bp-88, 0x61d90
    int64_t v10; // 0x61d90
    if (v3) {
        goto lab_0x61ee9;
    } else {
        // 0x61dc8
        v7 = 0;
        if (a3 < 24 || (int16_t)a3 == 0) {
            goto lab_0x61dd4;
        } else {
            int64_t * v11 = (int64_t *)(a2 + 4); // 0x61de4
            v7 = 0;
            if (*v11 == 0) {
                goto lab_0x61dd4;
            } else {
                int32_t * v12 = (int32_t *)(a2 + 20); // 0x61deb
                int32_t v13 = *v12; // 0x61deb
                *v12 = 0;
                int64_t v14 = function_455ee(a2, a3, 0); // 0x61dfe
                *v12 = v13;
                v7 = v14;
                if (v13 != (int32_t)v14) {
                    goto lab_0x61dd4;
                } else {
                    char * v15 = (char *)(a1 + 152); // 0x61e0c
                    if (*v15 == 0) {
                        int64_t * v16 = (int64_t *)(a1 + 40); // 0x61e29
                        int64_t v17 = *v16; // 0x61e29
                        if (*(char *)(a1 + 24) == 0) {
                            if (v17 != 0) {
                                // 0x61ed3
                                v4 = v14;
                                v5 = false;
                                if (v17 == *v11) {
                                    // 0x61ed9
                                    v4 = v14;
                                    v5 = false;
                                    if ((*(char *)(a2 + 2) & 120) == 0) {
                                        // 0x61edf
                                        *v15 = 1;
                                        v4 = v14;
                                        v5 = true;
                                    }
                                }
                                goto lab_0x61ee9;
                            } else {
                                uint16_t v18 = *(int16_t *)(a2 + 2); // 0x61e64
                                if ((v18 & 8) == 0) {
                                    int64_t v19 = v18; // 0x61e64
                                    v4 = v14 & -0x10000 | v19;
                                    v5 = false;
                                    if ((v19 & 32) != 0) {
                                        int64_t v20 = *(int64_t *)(a1 + 48); // 0x61e98
                                        v4 = v20;
                                        v5 = false;
                                        if (*(int64_t *)(a2 + 12) == v20) {
                                            // 0x61ea2
                                            *v16 = *v11;
                                            int64_t v21 = function_6307c(&v9, *v11, 0, 68); // 0x61ebb
                                            __asm_rep_movsd_memcpy((char *)(a1 + 88), (char *)&v9, 10);
                                            v4 = v21;
                                            v5 = false;
                                        }
                                    }
                                    goto lab_0x61ee9;
                                } else {
                                    // 0x61e6c
                                    v6 = *v11;
                                    v8 = a1 + 48;
                                    v10 = 16;
                                    goto lab_0x61e7c;
                                }
                            }
                        } else {
                            // 0x61e2f
                            v4 = v14;
                            v5 = false;
                            if (v17 != *v11) {
                                goto lab_0x61ee9;
                            } else {
                                uint16_t v22 = *(int16_t *)(a2 + 2); // 0x61e39
                                if ((v22 & 16) == 0) {
                                    int64_t v23 = v22; // 0x61e39
                                    int64_t v24 = v14 & -0x10000 | v23; // 0x61e39
                                    v4 = v24;
                                    v5 = false;
                                    if ((v23 & 64) != 0) {
                                        // 0x61e53
                                        *v15 = 1;
                                        v4 = v24;
                                        v5 = false;
                                    }
                                    goto lab_0x61ee9;
                                } else {
                                    // 0x61e41
                                    v6 = v17;
                                    v8 = a2 + 12;
                                    v10 = 32;
                                    goto lab_0x61e7c;
                                }
                            }
                        }
                    } else {
                        // 0x61e18
                        v4 = v14;
                        v5 = (*(char *)(a2 + 2) & 120) == 0;
                        goto lab_0x61ee9;
                    }
                }
            }
        }
    }
  lab_0x61ee9:;
    int64_t result = v4 & -256 | (int64_t)v5; // 0x61efa
    if (v2 != __readfsqword(40)) {
        // 0x61efc
        __stack_chk_fail();
        result = (int64_t)&g12;
    }
    // 0x61f01
    return result;
  lab_0x61dd4:
    // 0x61dd4
    *v1 = 1;
    v4 = v7;
    v5 = v3;
    goto lab_0x61ee9;
  lab_0x61e7c:;
    int64_t v25 = function_6307c(&v9, v6, *(int64_t *)v8, v10); // 0x61e7f
    __asm_rep_movsd_memcpy((char *)(a1 + 88), (char *)&v9, 10);
    v4 = v25;
    v5 = false;
    goto lab_0x61ee9;
}

// Address range: 0x71a15 - 0x71b9e
int64_t function_71a15(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x71a2f
    int64_t v2 = function_717fa(); // 0x71a42
    int64_t * v3 = (int64_t *)a1; // 0x71a4a
    *v3 = v2;
    int64_t v4; // 0x71a15
    int64_t v5; // 0x71a15
    int64_t v6; // 0x71a15
    int64_t v7; // 0x71a15
    int32_t v8; // 0x71a15
    int64_t name; // bp-422, 0x71a15
    int64_t v9; // 0x71a15
    uint64_t v10; // 0x71a8e
    int64_t v11; // 0x71a15
    int64_t * v12; // 0x71a15
    if (uname((struct utsname *)&name) != 0) {
        int64_t v13 = (int64_t)&name; // 0x71a47
        int64_t v14 = function_25622(v13 - 24); // 0x71b47
        int64_t v15 = v13 - 48;
        v8 = 0;
        v7 = v15;
        if ((char)v14 == 0) {
            goto lab_0x71b72;
        } else {
            // 0x71b53
            function_717ca(v15);
            *v3 = (int64_t)&g7;
            goto lab_0x71b77;
        }
    } else {
        // 0x71a5a
        int64_t v16; // bp-227, 0x71a15
        function_71b9e(a1, &v16);
        int64_t v17 = function_6a670(a1, 32, 0); // 0x71a73
        if (v17 == -1) {
            goto lab_0x71b77;
        } else {
            // 0x71a82
            v10 = function_6a670(a1, 32, (int32_t)v17 + 1);
            if (v10 == -1) {
                goto lab_0x71b77;
            } else {
                // 0x71aa0
                v11 = a1 - 24;
                v12 = (int64_t *)v11;
                uint64_t v18 = *v12; // 0x71ab0
                v9 = (int64_t)"basic_string::resize";
                if (v10 < 0x3ffffffffffffffa) {
                    if (v10 > v18) {
                        int64_t v19 = v10 - v18; // 0x71ac7
                        if (v19 == 0) {
                            goto lab_0x71b77;
                        } else {
                            // 0x71ad0
                            v4 = v19;
                            v9 = (int64_t)"basic_string::append";
                            v6 = a1;
                            v5 = v19;
                            if (0x3ffffffffffffff9 - v18 >= v19) {
                                goto lab_0x71ae4;
                            } else {
                                goto lab_0x71adf;
                            }
                        }
                    } else {
                        if (v10 < v18) {
                            // 0x71b2e
                            function_25e90(a1, v10, v18 - v10, 0);
                        }
                        goto lab_0x71b77;
                    }
                } else {
                    goto lab_0x71adf;
                }
            }
        }
    }
  lab_0x71b72:
    // 0x71b72
    function_2562c(v7, v8);
    goto lab_0x71b77;
  lab_0x71b77:;
    int64_t result = a1; // 0x71b8b
    if (v1 != __readfsqword(40)) {
        // 0x71b8d
        __stack_chk_fail();
        result = (int64_t)&g12;
    }
    // 0x71b92
    return result;
  lab_0x71adf:
    // 0x71adf
    function_542590((char *)v9);
    v6 = v9;
    v5 = v4;
    goto lab_0x71ae4;
  lab_0x71ae4:;
    // 0x71ae4
    int64_t v20; // 0x71a15
    int64_t * v21; // 0x71a15
    int64_t v22; // 0x71a15
    if (v10 > *(int64_t *)(v6 - 16)) {
        goto lab_0x71aea;
    } else {
        int64_t v23 = v6 - 24; // 0x71af7
        if ((char)function_25622(v23) != 0) {
            goto lab_0x71aea;
        } else {
            int64_t v24 = v6 - 48;
            v21 = (int64_t *)v24;
            v20 = v24;
            v22 = v23;
            goto lab_0x71b04;
        }
    }
  lab_0x71aea:
    // 0x71aea
    function_259ce(a1, v10);
    v21 = v12;
    v20 = v11;
    v22 = a1;
    goto lab_0x71b04;
  lab_0x71b04:;
    int64_t v25 = *v21 + v22; // 0x71b07
    char * v26 = (char *)v25;
    int64_t v27; // 0x71a15
    if (v5 != 1) {
        // 0x71b16
        __asm_rep_stosb_memset(v26, 0, v5);
        bool v28; // 0x71a15
        v27 = v5 * (v28 ? -1 : 1) - 24 + v25;
    } else {
        // 0x71b11
        *v26 = 0;
        v27 = v20;
    }
    // 0x71b20
    v8 = v10;
    v7 = v27;
    goto lab_0x71b72;
}

// Address range: 0x488d00 - 0x488d40
int64_t function_488d00(int64_t a1) {
    // 0x488d00
    __readfsqword(40);
    return function_38a100();
}

// Address range: 0x488d78 - 0x488d7a
int64_t function_488d78(void) {
    // 0x488d78
    int64_t v1; // 0x488d78
    return function_488da1(v1);
}

// Address range: 0x488d7e - 0x488d86
int64_t function_488d7e(void) {
    // 0x488d7e
    return function_488dea();
}

// Address range: 0x488da1 - 0x488dab
int64_t function_488da1(int64_t a1) {
    // 0x488da1
    int64_t result; // 0x488da1
    return result;
}

// Address range: 0x488dcf - 0x488dd0
int64_t function_488dcf(void) {
    // 0x488dcf
    int64_t result; // 0x488dcf
    return result;
}

// Address range: 0x488de0 - 0x488de6
int64_t function_488de0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x488de0
    bool v2; // 0x488de0
    bool v3; // 0x488de0
    if (v1 != 0) {
        int32_t * v4 = (int32_t *)(a1 - 40); // 0x488de0
        uint32_t v5 = *v4; // 0x488de0
        *v4 = (int32_t)v3 << 32 - v1 | v5 >> v1 | (int32_t)((int64_t)v5 << (int64_t)(33 - v1));
        v2 = v1 == 1 ? v5 < 0 != v3 : v3;
    }
    int64_t result; // 0x488de0
    if (v3 == v2 == !v3) {
        int64_t v6; // 0x488de0
        result = function_488e4e(a1, a2, a3, a4, v6);
    }
    // 0x488de6
    return result;
}

// Address range: 0x488dea - 0x488def
int64_t function_488dea(void) {
    // 0x488dea
    int64_t v1; // 0x488dea
    int64_t v2; // 0x488dea
    bool v3; // 0x488dea
    if (!v3) {
        v1 = function_488de0(v2, v2, v2, v2);
    }
    // 0x488ded
    return v1 - v2 & 0xffffffff;
}

// Address range: 0x488e0f - 0x488e12
int64_t function_488e0f(void) {
    // 0x488e0f
    int64_t result; // 0x488e0f
    return result;
}

// Address range: 0x488e18 - 0x488e4e
int64_t function_488e18(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x488e18
    int64_t v1; // 0x488e18
    uint64_t result = v1;
    // 0x488e4a
    return result;
    // 0x488e23
    *(char *)0x37bf6b49 = (char)(a3 / 256);
    return result & -256 | (int64_t)*(char *)(result % 256 + v1);
}

// Address range: 0x488e4e - 0x488e87
int64_t function_488e4e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x488e4e
    int64_t result; // 0x488e4e
    bool v1; // 0x488e4e
    if (!v1) {
        // 0x488eae
        return result;
    }
    int64_t v2 = result & 0xc701991 | 0xf38fe66e; // 0x488e55
    *(char *)-0x5fcbed3a = (char)v2;
    int64_t result2 = v2 & 0xffff0000 | result & 0xffd1; // 0x488e74
    char * v3 = (char *)(result - 95); // 0x488e76
    *v3 = *v3 + (char)(a4 / 256);
    *(int32_t *)0x20772af36711c72b = (int32_t)result2;
    __asm_out((int16_t)a3 % 256 | (int16_t)&g11, (char)result & -47);
    return result2;
}

// Address range: 0x491e50 - 0x491fd9
int64_t function_491e50(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x491e77
    int64_t v2 = 0xb60b60b60b60b6; // 0x491eab
    int64_t v3; // 0x491e50
    int64_t v4; // 0x491e50
    if (v2 > 0xb60b60b60b60b6 | v2 < 0x4fa4fa4fa4fa4fa5 * (*v1 - a1 >> 3)) {
        goto lab_0x491fc5;
    } else {
        // 0x491eba
        v3 = v2;
        v4 = 0;
        if (v2 != 0) {
            goto lab_0x491fc5;
        } else {
            goto lab_0x491ec6;
        }
    }
  lab_0x491fc5:;
    int64_t v5 = function_4efd30(360 * v2); // 0x491fcc
    v3 = v2;
    v4 = v5;
    goto lab_0x491ec6;
  lab_0x491ec6:;
    int64_t v6 = v4 + a2 - a1; // 0x491ec6
    __asm_rep_movsd_memcpy((char *)v6, (char *)a3, 90);
    bool v7; // 0x491e50
    int64_t v8 = v7 ? -360 : 360; // 0x491ed2
    int64_t v9 = v6 + v8; // 0x491ed2
    int64_t v10 = 0; // 0x491ee1
    if (v9 != a2) {
        int64_t v11 = v10 + 360; // 0x491eec
        __asm_rep_movsd_memcpy((char *)(v10 + v4), (char *)v9, 90);
        int64_t v12 = v11 + v9; // 0x491eda
        int64_t v13 = v12; // 0x491ee1
        v10 = v11;
        while (v12 != a2) {
            // 0x491ee3
            v11 = v10 + 360;
            __asm_rep_movsd_memcpy((char *)(v10 + v4), (char *)v13, 90);
            v12 = v11 + v9;
            v13 = v12;
            v10 = v11;
        }
    }
    int64_t v14 = *v1; // 0x491f04
    int64_t v15 = 360 * (0xfa4fa4fa4fa4fa5 * (a2 - v9) / 8 & 0x1fffffffffffffff); // 0x491f25
    int64_t v16 = v15 + v9; // 0x491f33
    int64_t v17 = v4 + 360 + v15; // 0x491f36
    int64_t v18 = a2; // 0x491f42
    if (v14 != v16) {
        int64_t v19 = v17;
        int64_t v20 = v16 + 360; // 0x491f56
        __asm_rep_movsd_memcpy((char *)v19, (char *)v16, 90);
        int64_t v21 = v19 + 360; // 0x491f42
        int64_t v22 = v20; // 0x491f42
        while (v14 != v20) {
            // 0x491f44
            v19 = v21;
            v20 = v22 + 360;
            __asm_rep_movsd_memcpy((char *)v19, (char *)v22, 90);
            v21 = v19 + 360;
            v22 = v20;
        }
        // 0x491f3f
        v18 = v19 + v8;
    }
    int64_t v23 = 360 * (0xfa4fa4fa4fa4fa5 * (v14 - v16) / 8 & 0x1fffffffffffffff); // 0x491f86
    if (v9 != 0) {
        // 0x491f96
        function_4eeb50(v9, v18, (int128_t)v23, 0, 0x1fffffffffffffff);
    }
    // 0x491f9e
    *(int64_t *)a1 = v4;
    *v1 = v23 + v17;
    *(int64_t *)(a1 + 16) = v4 + 360 * v3;
    int64_t result; // 0x491e50
    return result;
}

// Address range: 0x4b1ac0 - 0x4b1c3d
int64_t function_4b1ac0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b1ac0
    int64_t v1; // bp-120, 0x4b1ac0
    function_4b0870(&v1);
    int64_t v2; // bp-88, 0x4b1ac0
    int64_t result = function_4b0870(&v2); // 0x4b1aee
    int64_t v3 = a2; // 0x4b1aee
    if (a1 == a2) {
        // 0x4b1c12
        result = function_4b0ac0(&v1, a1);
        if ((int32_t)result != 0) {
            // 0x4b1b7c
            function_4b0890(&v2);
            function_4b0890(&v1);
            return result & 0xffffffff;
        }
        // 0x4b1c2b
        v3 = (int64_t)&v1;
    }
    if (a1 == a3) {
        // 0x4b1c35
        return result;
    }
    int64_t v4 = *(int64_t *)(v3 + 8); // 0x4b1afd
    int64_t v5 = 0; // 0x4b1b04
    if (v4 != 0) {
        int64_t v6 = *(int64_t *)(v3 + 16); // 0x4b1b06
        int64_t v7 = v4 - 1; // 0x4b1b0a
        v5 = v4;
        if (*(int64_t *)(v6 + 8 * v7) == 0) {
            // 0x4b1b2c
            v5 = v7;
            if (v7 != 0) {
                int64_t v8 = v7; // 0x4b1b28
                v5 = v8;
                while (*(int64_t *)(v6 - 8 + 8 * v8) == 0) {
                    // 0x4b1b28
                    v8--;
                    v5 = v8;
                    if (v8 == 0) {
                        // break -> 0x4b1b34
                        break;
                    }
                    v5 = v8;
                }
            }
        }
    }
    int64_t v9 = *(int64_t *)(a3 + 8); // 0x4b1b34
    int64_t v10 = 0; // 0x4b1b3b
    if (v9 != 0) {
        int64_t v11 = *(int64_t *)(a3 + 16); // 0x4b1b3d
        int64_t v12 = v9 - 1; // 0x4b1b41
        v10 = v9;
        if (*(int64_t *)(v11 + 8 * v12) == 0) {
            // 0x4b1b5c
            v10 = v12;
            if (v12 != 0) {
                int64_t v13 = v12; // 0x4b1b58
                v10 = v13;
                while (*(int64_t *)(v11 - 8 + 8 * v13) == 0) {
                    // 0x4b1b5c
                    v13--;
                    v10 = v13;
                    if (v13 == 0) {
                        // break -> 0x4b1b64
                        break;
                    }
                    v10 = v13;
                }
            }
        }
    }
    int64_t v14 = v10;
    int64_t v15 = function_4b08f0(a1, v14 + v5, v14); // 0x4b1b6f
    if ((int32_t)v15 != 0) {
        // 0x4b1b7c
        function_4b0890(&v2);
        function_4b0890(&v1);
        return v15 & 0xffffffff;
    }
    int64_t v16 = function_4b0d80(a1, 0); // 0x4b1bad
    if ((int32_t)v16 != 0) {
        // 0x4b1b7c
        function_4b0890(&v2);
        function_4b0890(&v1);
        return v16 & 0xffffffff;
    }
    if (v14 != 0) {
        int64_t v17 = v14 - 1; // 0x4b1bbe
        int64_t v18 = 8 * v17; // 0x4b1bc5
        int64_t * v19 = (int64_t *)(a3 + 16); // 0x4b1bdc
        int64_t * v20 = (int64_t *)(v3 + 16); // 0x4b1be0
        int64_t * v21 = (int64_t *)(a1 + 16); // 0x4b1beb
        function_4b04e0(v5, *v20, *v21 + v18, *(int64_t *)(*v19 + v18));
        if (v17 != 0) {
            int64_t v22 = v18 - 8; // 0x4b1bf3
            int64_t v23 = v17 - 1; // 0x4b1bd8
            function_4b04e0(v5, *v20, *v21 + v22, *(int64_t *)(*v19 + v22));
            int64_t v24 = v22; // 0x4b1bff
            int64_t v25 = v23; // 0x4b1bff
            while (v23 != 0) {
                // 0x4b1bd8
                v22 = v24 - 8;
                v23 = v25 - 1;
                function_4b04e0(v5, *v20, *v21 + v22, *(int64_t *)(*v19 + v22));
                v24 = v22;
                v25 = v23;
            }
        }
    }
    // 0x4b1c01
    *(int32_t *)a1 = *(int32_t *)v3 * (int32_t)v14;
    // 0x4b1b7c
    function_4b0890(&v2);
    function_4b0890(&v1);
    return v16 & 0xffffffff;
}

// Address range: 0x5143e0 - 0x51455e
// From class:    std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_5143e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x5143e0
    __readfsqword(40);
    function_50ab00();
    int64_t v1 = (int64_t)&g7; // bp-72, 0x51444e
    int64_t result; // 0x5143e0
    if ((char)a6 == 0) {
        // 0x5144e0
        result = function_5137b0(a1, a2, a3, a4, a5, a7, a8, &v1);
    } else {
        // 0x51445c
        result = function_512ca0(a1, a2, a3, a4, a5, a7, a8, &v1);
    }
    // 0x514474
    int64_t v2; // bp-73, 0x5143e0
    if (g6 == 0) {
        int64_t v3 = v1 - 24; // 0x5144a1
        if (v3 != (int64_t)g5) {
            // 0x514555
            return function_508620(v3, &v2, a3 & 0xffffffff, a8);
        }
        // 0x5144b2
        __readfsqword(40);
        return result;
    }
    // 0x514500
    function_52c62(a9, g6, 0, a8);
    int64_t * v4 = (int64_t *)a9; // 0x514511
    int64_t v5 = *v4; // 0x514511
    int64_t v6 = v5; // 0x514519
    if (*(int32_t *)(v5 - 8) >= 0) {
        // 0x51451b
        function_550a60(a9);
        v6 = *v4;
    }
    int64_t v7 = v1 - 24; // 0x514544
    if (v7 != (int64_t)g5) {
        // 0x514555
        return function_508620(v7, &v2, v1 + g6, v6);
    }
    // 0x5144b2
    __readfsqword(40);
    return result;
}

// Address range: 0x5515b0 - 0x551734
int64_t function_5515b0(int64_t wstr2, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x5515b0
    if (a2 == wstr2) {
        // 0x5515fb
        return (int64_t)&g8;
    }
    if (wstr2 != 0) {
        int64_t v1 = a2 - wstr2; // 0x5515c9
        int64_t n = v1 >> 2; // 0x5515d4
        int64_t v2 = function_550870(n, 0); // 0x5515db
        int64_t wstr = v2 + 24; // 0x5515e7
        if (n == 1) {
            // 0x551610
            *(int32_t *)wstr = (int32_t)wstr2;
        } else {
            if (n != 0) {
                // 0x551640
                wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
            }
        }
        // 0x5515f2
        if (v2 != *(int64_t *)0x848c20) {
            // 0x551650
            *(int32_t *)(v2 + 16) = 0;
            *(int64_t *)v2 = n;
            *(int32_t *)(wstr + v1) = 0;
        }
        // 0x5515fb
        return wstr;
    }
    // 0x551667
    function_542470("basic_string::_S_construct null not valid");
    uint64_t v3 = *(int64_t *)(a2 - 24); // 0x551687
    if (v3 >= a3) {
        int64_t v4 = function_5515b0(4 * a3 + a2, 4 * v3 + a2, a4, a4, a5); // 0x5516a1
        *(int64_t *)"basic_string::_S_construct null not valid" = v4;
        return 0;
    }
    // 0x5516ad
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string");
    if (a3 >= 0x6574) {
        // 0x55170d
        return function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string");
    }
    uint64_t v5 = 0x6573 - a3; // 0x5516de
    int64_t v6 = v5 > v3 ? v3 : v5; // 0x5516e4
    int64_t v7 = function_5515b0(4 * a3 + 0x74735f6369736162, 4 * (v6 + a3) + 0x74735f6369736162, a5, v3, a5); // 0x551701
    *(int64_t *)"%s: __pos (which is %zu) > this->size() (which is %zu)" = v7;
    return 0;
}

// Address range: 0x564190 - 0x564282
int64_t function_564190(int64_t result, int64_t a2, int64_t a3, int64_t result2, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x564190
    __readfsqword(40);
    int64_t v1 = a8 + 20; // 0x5641de
    if ((*(char *)v1 & 16) != 0) {
        // 0x5641e4
        *(int32_t *)v1 = *(int32_t *)(result + 16);
    }
    int64_t v2 = *(int64_t *)(result + 8); // 0x5641f4
    if (a5 == a7) {
        // 0x564226
        return result;
    }
    int64_t str2 = *(int64_t *)(result2 + 8); // 0x564203
    if (str2 == v2) {
        // 0x564226
        return result2;
    }
    char * str = (char *)v2; // 0x564210
    if (*str == 42 || strcmp(str, (char *)str2) != 0) {
        // 0x564226
        return result;
    }
    // 0x564226
    return 0;
}

// Address range: 0x5642d0 - 0x5642d3
int64_t function_5642d0(int64_t a1) {
    // 0x5642d0
    int64_t result; // 0x5642d0
    return result;
}

// Address range: 0x5642d4 - 0x5642da
int64_t function_5642d4(int64_t a1) {
    // 0x5642d4
    int64_t v1; // 0x5642d4
    uint32_t result = 2 * (int32_t)v1; // 0x5642d4
    char * v2 = (char *)(v1 - 119); // 0x5642d6
    *v2 = *v2 + (char)result;
    return result;
}

// Address range: 0x565720 - 0x565745
int64_t __cxa_free_dependent_exception(uint64_t a1) {
    uint64_t v1 = g9; // 0x565720
    if (v1 >= a1) {
        // 0x565738
        free((int64_t *)a1);
        return (int64_t)&g12;
    }
    // 0x56572c
    if (g10 + v1 > a1) {
        // 0x565740
        return function_5652d0();
    }
    // 0x565738
    free((int64_t *)a1);
    return (int64_t)&g12;
}

// Address range: 0x565750 - 0x565880
int64_t __dynamic_cast(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x565750
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x565832
        return 0;
    }
    // 0x56586e
    __stack_chk_fail();
    return (int64_t)&g12;
}

// Address range: 0x565880 - 0x56589b
int64_t __cxa_get_globals_fast(void) {
    // 0x565880
    return __tls_get_addr(&g4) + 16;
}

// Address range: 0x5658a0 - 0x5658a1
int64_t __cxa_get_globals(void) {
    // 0x5658a0
    int64_t result; // 0x5658a0
    return result;
}
