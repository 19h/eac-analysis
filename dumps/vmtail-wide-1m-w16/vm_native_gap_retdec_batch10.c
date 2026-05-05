/*
 * Targeted RetDec C for native executable gap queue batch 10.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x48e723-0x48e88e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4af8d0-0x4afa38 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5484b0-0x548616 rank=- name=- kind=- bytes=- uncovered=-
 *   0x549e80-0x549fe6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5720a0-0x572205 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57d580-0x57d6e5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c4730-0x4c4893 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fd6d0-0x4fd833 rank=- name=- kind=- bytes=- uncovered=-
 *   0x583450-0x5835b3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4525c-0x453be rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ad570-0x4ad6d2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5009e0-0x500b42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x58d40-0x58ea1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x752b0-0x75411 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5146f0-0x514851 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c930-0x2ca8f rank=- name=- kind=- bytes=- uncovered=-
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
struct pollfd;
struct sockaddr;
struct stat64;
struct timespec;
struct timeval;
struct utsname;
#define F_GETFL 3
#define F_SETFL 4
#define SO_DEBUG 1
#define _SC_PAGESIZE 30
#define SYS_getegid32 50
extern int g1;
extern int g2;
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
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
int64_t __asm_mfence();
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
int wctob(int32_t wc);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int fcntl(int fd, int cmd, ...);
int ioctl(int fd, unsigned long request, ...);
int poll(struct pollfd *fds, unsigned long nfds, int timeout);
int gettimeofday(struct timeval *tv, void *tz);
int64_t sysconf(int name);
int64_t syscall(int64_t number, ...);
int mprotect(void *addr, size_t len, int prot);
int __fxstat64(int ver, int fd, struct stat64 *buf);
int64_t lseek64(int fd, int64_t offset, int whence);
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
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_11ab1d();
int64_t function_2508e();
int64_t function_251e8();
int64_t function_2537c();
int64_t function_255da();
int64_t function_2562c();
int64_t function_259ce();
int64_t function_2aec0();
int64_t function_2c33c();
int64_t function_2c910();
int64_t function_2c930();
int64_t function_2c95c();
int64_t function_2c967();
int64_t function_2c96e();
int64_t function_2c97b();
int64_t function_2c986();
int64_t function_2c9a7();
int64_t function_2c9ae();
int64_t function_2ca0e();
int64_t function_2ca17();
int64_t function_2ca70();
int64_t function_36712();
int64_t function_36a32();
int64_t function_4525c();
int64_t function_48d50f();
int64_t function_48d7ed();
int64_t function_48e723();
int64_t function_48f542();
int64_t function_4ad570();
int64_t function_4af8d0();
int64_t function_4c14d0();
int64_t function_4c1d40();
int64_t function_4c3240();
int64_t function_4c4450();
int64_t function_4c4470();
int64_t function_4c4700();
int64_t function_4c4730();
int64_t function_4ca3d0();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4f1590();
int64_t function_4f2d50();
int64_t function_4fd6d0();
int64_t function_5009e0();
int64_t function_504cb();
int64_t function_508620();
int64_t function_50b1c0();
int64_t function_50c700();
int64_t function_50f7d0();
int64_t function_511c20();
int64_t function_5146f0();
int64_t function_52cbf0();
int64_t function_542590();
int64_t function_5484b0();
int64_t function_549a50();
int64_t function_549e80();
int64_t function_565f30();
int64_t function_5678f0();
int64_t function_5720a0();
int64_t function_5797e0();
int64_t function_57ba10();
int64_t function_57cf40();
int64_t function_57d580();
int64_t function_582e90();
int64_t function_58d40();
int64_t function_752b0();
int64_t function_75db0();
int64_t function_75db4();
int64_t function_75db8();
int64_t function_75dbc();
int64_t function_75dc0();
int64_t function_ffffffffb98d7dee();
int64_t function_ffffffffd1ffe3e5();

// Address range: 0x2c930 - 0x2c957
int64_t function_2c930(int64_t a1) {
    // 0x2c930
    __readfsqword(40);
    return function_11ab1d();
}

// Address range: 0x2c95c - 0x2c95d
int64_t function_2c95c(void) {
    // 0x2c95c
    int64_t result; // 0x2c95c
    return result;
}

// Address range: 0x2c967 - 0x2c96a
int64_t function_2c967(int64_t a1) {
    // 0x2c967
    int64_t result; // 0x2c967
    return result;
}

// Address range: 0x2c96e - 0x2c96f
int64_t function_2c96e(void) {
    // 0x2c96e
    int64_t result; // 0x2c96e
    return result;
}

// Address range: 0x2c97b - 0x2c986
int64_t function_2c97b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c97b
    int64_t result; // 0x2c97b
    int32_t * v1 = (int32_t *)(a3 - 0x77d8f0a6 + 8 * result); // 0x2c97b
    *v1 = *v1 + 11;
    return result;
}

// Address range: 0x2c986 - 0x2c98f
int64_t function_2c986(void) {
    // 0x2c986
    bool v1; // 0x2c986
    if (v1) {
        function_2c910();
    }
    if (!v1) {
        function_2c95c();
    }
    // 0x2c98a
    return function_ffffffffd1ffe3e5();
}

// Address range: 0x2c9a7 - 0x2c9ac
int64_t function_2c9a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c9a7
    int64_t v1; // 0x2c9a7
    __asm_out((int16_t)a3, (int32_t)v1);
    return a4 & 0xffffffff;
}

// Address range: 0x2c9ae - 0x2c9af
int64_t function_2c9ae(void) {
    // 0x2c9ae
    int64_t result; // 0x2c9ae
    return result;
}

// Address range: 0x2ca0e - 0x2ca15
int64_t function_2ca0e(void) {
    // 0x2ca0e
    return function_2c9ae();
}

// Address range: 0x2ca17 - 0x2ca1e
int64_t function_2ca17(void) {
    // 0x2ca17
    int64_t v1; // 0x2ca17
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)v1;
    return function_ffffffffb98d7dee();
}

// Address range: 0x2ca70 - 0x2ca71
int64_t function_2ca70(int64_t a1) {
    // 0x2ca70
    int64_t result; // 0x2ca70
    return result;
}

// Address range: 0x4525c - 0x453be
int64_t function_4525c(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x45270
    *(int64_t *)a1 = (int64_t)&g8;
    int64_t v2 = *(int64_t *)(a2 - 24); // 0x45296
    int64_t v3; // 0x4525c
    function_259ce(a1, v2, v3);
    int64_t v4; // 0x4525c
    int64_t v5; // 0x4525c
    int64_t v6; // 0x4525c
    int64_t v7; // 0x4525c
    char v8; // 0x452b4
    if (*(int64_t *)(v2 - 24) != 0) {
        // 0x452b4
        v7 = v2;
        v4 = a1;
        while (true) {
          lab_0x452b4:
            // 0x452b4
            v8 = *(char *)v7;
            v6 = (int64_t)"\\f";
            if (v8 == 12) {
                goto lab_0x45306;
            } else {
                // 0x452be
                v5 = v4;
                if (v8 > 12) {
                    // 0x452db
                    v6 = (int64_t)"\\\"";
                    switch (v8) {
                        case 34: {
                            goto lab_0x45306;
                        }
                        case 92: {
                            // 0x452ff
                            v6 = (int64_t)"\\\\";
                            goto lab_0x45306;
                        }
                        default: {
                            // 0x452e7
                            v6 = (int64_t)"\\r";
                            if (v8 != 13) {
                                goto lab_0x4532b;
                            } else {
                                goto lab_0x45306;
                            }
                        }
                    }
                } else {
                    // 0x452c0
                    v6 = (int64_t)"\\n";
                    switch (v8) {
                        case 9: {
                            // 0x45322
                            v6 = (int64_t)"\\t";
                            goto lab_0x45306;
                        }
                        case 10: {
                            goto lab_0x45306;
                        }
                        default: {
                            // 0x452cc
                            v6 = (int64_t)"\\b";
                            if (v8 != 8) {
                                goto lab_0x4532b;
                            } else {
                                goto lab_0x45306;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x45397:;
    int64_t result = a1; // 0x453a8
    if (v1 != __readfsqword(40)) {
        // 0x453aa
        __stack_chk_fail();
        result = (int64_t)&g9;
    }
    // 0x453af
    return result;
  lab_0x45306:
    // 0x45306
    function_2537c(a1, (int64_t *)v6);
    int64_t v9 = v6; // 0x4530e
    int64_t v10 = a1; // 0x4530e
    goto lab_0x4538f;
  lab_0x4538f:;
    int64_t v11 = v9;
    int64_t v12 = v7 + 1; // 0x4538f
    v7 = v12;
    v4 = v10;
    if (v12 == *(int64_t *)(v11 - 24) + v11) {
        // break -> 0x45397
        goto lab_0x45397;
    }
    goto lab_0x452b4;
  lab_0x4532b:;
    int64_t v13; // 0x4525c
    int64_t v14; // 0x45357
    if (v8 < 32) {
        // 0x45331
        int64_t v15; // bp-80, 0x4525c
        function_48d50f(&v15, 16, "\\u%04X", (int64_t)v8);
        v6 = (int64_t)&v15;
        goto lab_0x45306;
    } else {
        int64_t v16 = *(int64_t *)(v5 - 24); // 0x45353
        v14 = v16 + 1;
        if (v14 > *(int64_t *)(v5 - 16)) {
            // 0x45361
            function_259ce(a1, v14, v16);
            v13 = a1;
            goto lab_0x45375;
        } else {
            int32_t v17 = *(int32_t *)(v5 - 8); // 0x4536e
            v13 = v5;
            if (v17 >= 0 == (v17 != 0)) {
                // 0x45361
                function_259ce(a1, v14, v16);
                v13 = a1;
                goto lab_0x45375;
            } else {
                goto lab_0x45375;
            }
        }
    }
  lab_0x45375:;
    int64_t v18 = v13 - 24; // 0x4537b
    int64_t v19 = *(int64_t *)v18; // 0x4537b
    *(char *)(v19 + v13) = v8;
    function_2562c(v18, v14, v19);
    v9 = v14;
    v10 = v18;
    goto lab_0x4538f;
}

// Address range: 0x58d40 - 0x58ea1
int64_t function_58d40(int64_t buf, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x58d4e
    function_251e8();
    function_36a32(buf, &g1, 0);
    int64_t path; // bp-4143, 0x58d40
    int64_t v2 = (int64_t)&path; // 0x58d84
    path = -0x6f8f0898553ca254;
    int32_t v3 = (int32_t)"_create" + 0x78b5f577 >> 29 | 8 * ((int32_t)"_create" + 0x78b5f577); // 0x58dba
    int64_t v4 = 0; // 0x58dd5
    int32_t * v5 = (int32_t *)(v4 + v2); // 0x58dcd
    uint32_t v6 = *v5 ^ v3; // 0x58dd0
    *v5 = v6;
    v4 += 4;
    uint32_t v7 = 0x41c64e6d * v3 + (int32_t)"_create"; // 0x58db4
    v3 = v7 / 0x20000000 | 8 * v7;
    while (v4 != 12) {
        // 0x58dc3
        v5 = (int32_t *)(v4 + v2);
        v6 = *v5 ^ v3;
        *v5 = v6;
        v4 += 4;
        v7 = 0x41c64e6d * v3 + (int32_t)"_create";
        v3 = v7 / 0x20000000 | 8 * v7;
    }
    int64_t v8 = v3; // 0x58de0
    int64_t v9 = v6; // 0x58de0
    for (int64_t i = 12; i < 15; i++) {
        char * v10 = (char *)(i + v2); // 0x58def
        v9 = (v9 & 0xffffff00 | (int64_t)*v10) ^ v8;
        v8 /= 256;
        *v10 = (char)v9;
    }
    int64_t buf_size = *(int64_t *)(v9 - 24); // 0x58e0b
    function_255da(buf, v2, (int32_t)v8, v2);
    int32_t v11 = readlink((char *)&path, (char *)buf, (int32_t)buf_size); // 0x58e1d
    int64_t v12 = 0; // 0x58e25
    if (v11 >= 0 == (v11 != 0)) {
        // 0x58e2b
        function_36a32(buf, (int64_t *)(int64_t)v11, 0);
        int64_t resolved_path; // bp-4128, 0x58d40
        __asm_rep_stosd_memset((char *)&resolved_path, 0, (int64_t)&g3);
        bool v13; // 0x58d40
        int64_t v14 = v13 ? -4 * (int64_t)&g3 : 4 * (int64_t)&g3; // 0x58e49
        char * v15 = realpath((char *)(v14 + (int64_t)&resolved_path), (char *)&resolved_path); // 0x58e51
        v12 = 0;
        if (v15 != NULL) {
            // 0x58e5b
            function_2aec0(buf, &resolved_path);
            v12 = 1;
        }
    }
    int64_t result = memset2(&path, 0, 15) & -256 | v12; // 0x58e8e
    if (v1 != __readfsqword(40)) {
        // 0x58e90
        __stack_chk_fail();
        result = (int64_t)&g9;
    }
    // 0x58e95
    return result;
}

// Address range: 0x752b0 - 0x75411
int64_t function_752b0(int64_t a1, int64_t a2) {
    // 0x752b0
    if (function_48d7ed(function_2c33c(a2 + 16), function_75db0(a1)) == 0) {
        // 0x7540b
        return 0;
    }
    int64_t v1 = function_75db4(*(int64_t *)(a1 + 8)); // 0x75306
    int64_t v2 = a2 + 24; // 0x75312
    int64_t v3 = function_2c33c(v2); // 0x75319
    char v4 = 1; // 0x7532c
    if (function_48d7ed(v3, v1) == 0) {
        int64_t v5 = function_75db8(*(int64_t *)(a1 + 16)); // 0x7533a
        v4 = function_48d7ed(function_2c33c(v2), v5) != 0;
    }
    int64_t v6 = function_75dbc(*(int64_t *)(a1 + 24)); // 0x7537e
    int64_t v7 = function_2c33c(v2); // 0x75391
    bool v8 = false; // 0x753a4
    if (function_48d7ed(v7, v6) == 0) {
        // 0x753a6
        v8 = function_48d7ed(function_2c33c(v2), function_75dc0(*(int64_t *)(a1 + 32))) == 0;
    }
    // 0x7540b
    return v4 == 0 != v8;
}

// Address range: 0x48e723 - 0x48e88e
int64_t function_48e723(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48e723
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    int64_t v1 = __readfsqword(40); // 0x48e74c
    *(int64_t *)(a1 + 16) = 0;
    int64_t v2; // bp-72, 0x48e723
    int64_t v3 = (int64_t)&v2; // 0x48e769
    int64_t v4 = *(int64_t *)(a3 - 24); // 0x48e775
    int64_t v5 = v4; // 0x48e77c
    int64_t v6 = a2; // 0x48e77c
    int64_t v7 = a3; // 0x48e77c
    if (v4 != 0) {
        int64_t v8 = 0;
        int64_t v9 = v8; // 0x48e7c3
        while (*(int64_t *)(v6 - 24) > v8) {
            int64_t v10 = v5;
            int64_t * v11 = (int64_t *)(v10 - 24);
            int64_t v12 = v8;
            int64_t v13 = v6 + v12; // 0x48e7c5
            while (function_504cb(v7, v10, v13, v10) == 0) {
                int64_t v14 = v12 + 1; // 0x48e7dd
                v9 = v8;
                if (*v11 <= v14) {
                    // break (via goto) -> 0x48e77e
                    goto lab_0x48e77e;
                }
                v12 = v14;
                v13 = v10 + v12;
            }
            int64_t * v15 = v11; // 0x48e7f0
            int64_t v16 = v8; // 0x48e7f0
            int64_t v17 = v10; // 0x48e7f0
            int64_t v18 = v13; // 0x48e7f0
            int64_t v19 = v10; // 0x48e7f0
            if (v12 != v8) {
                // 0x48e7f2
                v17 = v12 - v8;
                function_36712(&v2, a2, v8, v17);
                function_48f542(a1, &v2);
                function_2508e(&v2);
                v15 = (int64_t *)(v3 - 24);
                v16 = v12;
                v18 = v8;
                v19 = v3;
            }
            int64_t v20 = v19;
            int64_t v21 = v18;
            int64_t v22 = v17;
            int64_t * v23 = (int64_t *)(v21 - 24);
            int64_t v24 = *v23; // 0x48e827
            uint64_t v25 = *v15; // 0x48e830
            int64_t * v26 = v23; // 0x48e83e
            v7 = v21;
            v6 = v20;
            int64_t v27 = -1; // 0x48e83e
            int64_t v28 = v16; // 0x48e83e
            if (v25 > v16) {
                int64_t v29 = v28;
                int64_t v30 = v29 + v20; // 0x48e851
                int64_t v31 = v29; // 0x48e860
                while (function_504cb(v21, v24, v30, v22) != 0) {
                    int64_t v32 = v29 + 1; // 0x48e862
                    v31 = -1;
                    v28 = v32;
                    if (v25 <= v32) {
                        // break -> 0x48e844
                        break;
                    }
                    v29 = v28;
                    v30 = v29 + v20;
                    v31 = v29;
                }
                // 0x48e844
                v26 = (int64_t *)(v30 - 24);
                v7 = v30;
                v6 = v24;
                v27 = v31;
            }
            // 0x48e844
            v5 = *v26;
            v9 = v27;
            if (v5 == 0) {
                // break -> 0x48e77e
                break;
            }
            v8 = v27;
            v9 = v8;
        }
      lab_0x48e77e:
        // 0x48e77e
        if (v9 < 0xffffffffffffffff) {
            // 0x48e78c
            function_36712(&v2, a2, v9, -1);
            function_48f542(a1, &v2);
            function_2508e(&v2);
        }
    }
    int64_t result = a1; // 0x48e878
    if (v1 != __readfsqword(40)) {
        // 0x48e87a
        __stack_chk_fail();
        result = (int64_t)&g9;
    }
    // 0x48e87f
    return result;
}

// Address range: 0x4ad570 - 0x4ad6d1
int64_t function_4ad570(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // bp-64, 0x4ad5a9
    int64_t v2 = function_4c3240(a3, &v1); // 0x4ad5b2
    char * str = (char *)a1;
    int32_t size = a2;
    int32_t chars_printed; // 0x4ad570
    if ((int32_t)v2 == 0) {
        // 0x4ad620
        chars_printed = snprintf(str, size, "%s");
    } else {
        // 0x4ad5bb
        chars_printed = snprintf(str, size, "???");
    }
    int64_t result = chars_printed;
    if (chars_printed > -1 != result < a2) {
        // 0x4ad6ce
        return result;
    }
    if ((int32_t)a4 != 6) {
        // 0x4ad5ef
        return result & 0xffffffff;
    }
    int64_t v3 = a2 - result; // 0x4ad5e6
    int64_t v4 = function_4c14d0(a5 & 0xffffffff); // 0x4ad64f
    int64_t v5; // 0x4ad570
    int64_t v6 = function_4c14d0(v5 & 0xffffffff); // 0x4ad65a
    int32_t v7 = *(int32_t *)(a6 + 4); // 0x4ad662
    int64_t size2 = v3; // 0x4ad66b
    int64_t v8 = (int64_t)"???"; // 0x4ad66b
    if (v6 != 0) {
        // 0x4ad66d
        size2 = 0x100000000 * v3 >> 32;
        v8 = function_4c1d40(v6);
    }
    int64_t v9 = (int64_t)"???"; // 0x4ad687
    if (v4 != 0) {
        // 0x4ad689
        v9 = function_4c1d40(v4);
    }
    int64_t chars_printed2 = snprintf((char *)(result + a1), (int32_t)size2, " (%s, MGF1-%s, 0x%02X)", (char *)v9, (char *)v8, v7); // 0x4ad570
    // 0x4ad6ce
    return chars_printed2;
}

// Address range: 0x4af8d0 - 0x4afa38
int64_t function_4af8d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 16; // 0x4af8e1
    int128_t v2; // bp-40, 0x4af8d0
    int128_t v3; // bp-56, 0x4af8d0
    for (int64_t i = 0; i < 16; i++) {
        // 0x4af8e8
        v1--;
        char v4 = *(char *)(v1 + a2); // 0x4af8e8
        *(char *)(i + (int64_t)&v3) = v4;
        char v5 = *(char *)(v1 + a3); // 0x4af8f2
        *(char *)(i + (int64_t)&v2) = v5;
    }
    int128_t v6 = __asm_movdqu(0x8000000000000000 * v3 >> 64); // 0x4af90b
    int128_t v7 = __asm_movdqu(0x8000000000000000 * v2 >> 64); // 0x4af910
    int128_t v8 = __asm_movdqa(v7); // 0x4af915
    int128_t v9 = __asm_movdqa(v7); // 0x4af919
    int128_t v10 = __asm_movdqa(v7); // 0x4af91d
    int128_t v11 = __asm_pclmulqdq(v7, v6, 0); // 0x4af921
    int128_t v12 = __asm_pclmulqdq(v8, v6, 17); // 0x4af927
    int128_t v13 = __asm_pxor(__asm_pclmulqdq(v10, v6, 1), __asm_pclmulqdq(v9, v6, 16)); // 0x4af939
    int128_t v14 = __asm_movdqa(v13); // 0x4af93d
    int128_t v15 = __asm_psrldq(v13, 8); // 0x4af941
    int128_t v16 = __asm_pslldq(v14, 8); // 0x4af946
    int128_t v17 = __asm_pxor(v12, v15); // 0x4af94b
    int128_t v18 = __asm_pxor(v11, v16); // 0x4af94f
    int128_t v19 = __asm_movdqa(v18); // 0x4af953
    int128_t v20 = __asm_movdqa(v17); // 0x4af957
    int128_t v21 = __asm_psllq(v18, 1); // 0x4af95b
    int128_t v22 = __asm_psllq(v17, 1); // 0x4af960
    int128_t v23 = __asm_psrlq(v19, 63); // 0x4af965
    int128_t v24 = __asm_psrlq(v20, 63); // 0x4af96a
    int128_t v25 = __asm_movdqa(v23); // 0x4af96f
    int128_t v26 = __asm_pslldq(v23, 8); // 0x4af973
    int128_t v27 = __asm_pslldq(v24, 8); // 0x4af978
    int128_t v28 = __asm_psrldq(v25, 8); // 0x4af97d
    int128_t v29 = __asm_por(v21, v26); // 0x4af982
    int128_t v30 = __asm_por(__asm_por(v22, v27), v28); // 0x4af98a
    int128_t v31 = __asm_movdqa(v29); // 0x4af98e
    int128_t v32 = __asm_movdqa(v29); // 0x4af992
    int128_t v33 = __asm_pxor(__asm_pxor(__asm_psllq(v31, 63), __asm_psllq(v32, 62)), __asm_psllq(__asm_movdqa(v29), 57)); // 0x4af9ad
    int128_t v34 = __asm_pxor(v29, __asm_pslldq(v33, 8)); // 0x4af9b6
    int128_t v35 = __asm_movdqa(v34); // 0x4af9ba
    int128_t v36 = __asm_movdqa(v34); // 0x4af9be
    int128_t v37 = __asm_pxor(__asm_pxor(__asm_psrlq(v35, 1), __asm_psrlq(v36, 2)), __asm_psrlq(__asm_movdqa(v34), 7)); // 0x4af9d9
    int128_t v38 = __asm_movdqa(v34); // 0x4af9dd
    int128_t v39 = __asm_movdqa(v34); // 0x4af9e1
    int128_t v40 = __asm_movdqa(v34); // 0x4af9e5
    int128_t v41 = __asm_psrldq(__asm_pxor(__asm_pxor(__asm_psllq(v38, 63), __asm_psllq(v39, 62)), __asm_psllq(v40, 57)), 8); // 0x4afa00
    __asm_movdqu_133(__asm_pxor(__asm_pxor(__asm_pxor(v37, v41), v34), v30));
    for (int64_t i = 0; i < 16; i++) {
        // 0x4afa20
        int64_t v42; // bp-9, 0x4af8d0
        char v43 = *(char *)((int64_t)&v42 - i); // 0x4afa26
        *(char *)(i + a1) = v43;
    }
    // 0x4afa36
    return 16;
}

// Address range: 0x4c4730 - 0x4c488f
int64_t function_4c4730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8) {
    // 0x4c4730
    if (a3 == 0) {
        // 0x4c47e5
        return 0xffffc180;
    }
    int64_t result = function_4c4450(a3, a1 & 0xffffffff); // 0x4c4787
    if ((int32_t)result == 0) {
        // 0x4c47e5
        return result;
    }
    int64_t v1 = 0x100000000 * a4 >> 32; // 0x4c4758
    if ((int32_t)a1 != 6) {
        // 0x4c479a
        if (a2 == 0) {
            // 0x4c479f
            return function_4c4470(a3, (int32_t)v1, a5, a6, a7, a8);
        }
        // 0x4c47e5
        return 0xffffc180;
    }
    // 0x4c4810
    if (a2 == 0) {
        // 0x4c47e5
        return 0xffffc180;
    }
    // 0x4c4815
    if ((function_4c4700(a3) + 7) / 8 > a8) {
        // 0x4c47e5
        return 0xffffbc80;
    }
    int32_t v2 = *(int32_t *)(a2 + 4); // 0x4c4834
    int64_t v3 = *(int64_t *)(a3 + 8); // 0x4c483b
    int64_t v4 = function_4ca3d0(v3, 0, 0, 0, (int32_t)v1, a6 & 0xffffffff, a5, 0x100000000 * a1 >> 32, (int64_t)v2, a7); // 0x4c485d
    if ((int32_t)v4 != 0) {
        // 0x4c47e5
        return v4 & 0xffffffff;
    }
    // 0x4c486c
    function_4c4700(a3);
    return 0xffffc700;
}

// Address range: 0x4fd6d0 - 0x4fd833
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_4fd6d0(int64_t a1, int64_t a2) {
    // 0x4fd6d0
    __readfsqword(40);
    if ((*(char *)(a1 + 120) & 8) == 0) {
        // 0x4fd765
        __readfsqword(40);
        return 0xffffffff;
    }
    char * v1 = (char *)(a1 + 170); // 0x4fd6ee
    char v2; // 0x4fd6d0
    char v3; // 0x4fd6d0
    int64_t result; // 0x4fd6d0
    if (*v1 != 0) {
        // 0x4fd750
        if ((int32_t)a1 == -1) {
            // 0x4fd765
            __readfsqword(40);
            return 0xffffffff;
        }
        int64_t v4 = *(int64_t *)(a1 + 152); // 0x4fd788
        *(int64_t *)(a1 + 40) = 0;
        *(int64_t *)(a1 + 32) = 0;
        *(int64_t *)(a1 + 48) = 0;
        *v1 = 0;
        *(int64_t *)(a1 + 8) = v4;
        *(int64_t *)(a1 + 16) = v4;
        *(int64_t *)(a1 + 24) = v4;
        v3 = *(char *)(a1 + 192);
        goto lab_0x4fd7c2;
    } else {
        int64_t * v5 = (int64_t *)(a1 + 16); // 0x4fd6fc
        uint64_t v6 = *v5; // 0x4fd6fc
        char v7 = *(char *)(a1 + 192); // 0x4fd704
        v3 = v7;
        if (v6 > *(int64_t *)(a1 + 8)) {
            int64_t v8 = v6 - 4; // 0x4fd712
            *v5 = v8;
            result = (int64_t)*(int32_t *)v8;
            v2 = v7;
            goto lab_0x4fd71d;
        } else {
            goto lab_0x4fd7c2;
        }
    }
  lab_0x4fd7c2:
    // 0x4fd7c2
    if (a1 == -1) {
        // 0x4fd765
        __readfsqword(40);
        return 0xffffffff;
    }
    // 0x4fd7e6
    result = a1 & 0xffffffff;
    v2 = v3;
    if ((int32_t)a1 == -1) {
        // 0x4fd765
        __readfsqword(40);
        return 0xffffffff;
    }
    goto lab_0x4fd71d;
  lab_0x4fd71d:;
    int32_t v9 = a2; // 0x4fd71f
    if (v9 == -1) {
        // 0x4fd765
        __readfsqword(40);
        return 0;
    }
    // 0x4fd724
    if ((int32_t)result == v9) {
        // 0x4fd765
        __readfsqword(40);
        return result;
    }
    // 0x4fd72a
    if (v2 != 0) {
        // 0x4fd765
        __readfsqword(40);
        return 0xffffffff;
    }
    char * v10 = (char *)(a1 + 192); // 0x4fd72f
    int64_t * v11 = (int64_t *)(a1 + 16); // 0x4fd736
    int64_t v12 = *v11; // 0x4fd736
    if (*v10 != 0) {
        // 0x4fd740
        *(char *)(a1 + 169) = 1;
        *(int32_t *)v12 = v9;
        // 0x4fd765
        __readfsqword(40);
        return a2 & 0xffffffff;
    }
    int64_t v13 = a1 + 176; // 0x4fd800
    *(int64_t *)v13 = v12;
    int64_t * v14 = (int64_t *)(a1 + 24); // 0x4fd807
    *v10 = 1;
    *v14 = v13;
    *(int64_t *)(a1 + 184) = *v14;
    int64_t result2 = a1 + 172; // 0x4fd824
    *(int64_t *)(a1 + 8) = result2;
    *v11 = result2;
    return result2;
}

// Address range: 0x5009e0 - 0x500b41
// From class:    std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5009e0(int64_t a1) {
    // 0x5009e0
    int128_t v1; // 0x5009e0
    int128_t v2 = v1;
    int64_t v3 = a1 + 56; // 0x5009ee
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    int64_t * v4 = (int64_t *)a1; // 0x500a16
    *v4 = (int64_t)&g5;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 48) = 0;
    function_4f2d50(v3);
    int128_t v5 = __asm_pxor(v2, v2); // 0x500a39
    *(int64_t *)(a1 + 96) = 0;
    __asm_movups(*(int128_t *)(a1 + 64), v5);
    __asm_movups(*(int128_t *)(a1 + 80), v5);
    *v4 = (int64_t)&g4;
    function_4f1590();
    *(int32_t *)(a1 + 120) = 0;
    *(int64_t *)(a1 + 124) = 0;
    *(int64_t *)(a1 + 132) = 0;
    *(int64_t *)(a1 + 140) = 0;
    *(int64_t *)(a1 + 152) = 0;
    *(int64_t *)(a1 + 160) = (int64_t)&g2;
    *(char *)(a1 + 168) = 0;
    *(char *)(a1 + 169) = 0;
    *(char *)(a1 + 170) = 0;
    *(int32_t *)(a1 + 172) = 0;
    *(int64_t *)(a1 + 176) = 0;
    *(int64_t *)(a1 + 184) = 0;
    *(char *)(a1 + 192) = 0;
    int64_t * v6 = (int64_t *)(a1 + 200); // 0x500ae1
    *v6 = 0;
    *(int64_t *)(a1 + 208) = 0;
    *(int64_t *)(a1 + 216) = 0;
    *(int64_t *)(a1 + 224) = 0;
    *(int64_t *)(a1 + 232) = 0;
    int64_t result = function_50c700(v3); // 0x500b18
    if ((char)result == 0) {
        // 0x500b21
        return result;
    }
    int64_t result2 = function_50b1c0(v3); // 0x500b33
    *v6 = result2;
    return result2;
}

// Address range: 0x5146f0 - 0x514850
// From class:    std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_5146f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x5146f0
    __readfsqword(40);
    int64_t v1 = (int64_t)&g8; // bp-80, 0x51474b
    function_259ce((int64_t)&v1, 32, (int64_t)&g7);
    int64_t result2 = function_511c20(a1, a2, a3, a4, a5, a6, a7, &v1); // bp-104, 0x51477e
    int64_t v2 = function_565f30(); // bp-72, 0x51479f
    function_5678f0(v1, a8, a7, &v2);
    int64_t v3 = function_50f7d0(&result2); // 0x5147af
    char v4 = 1; // 0x5147be
    if (a4 != 0) {
        // 0x5147c0
        v4 = 0;
        if ((int32_t)a5 == -1) {
            uint64_t result = *(int64_t *)(a4 + 16); // 0x514814
            if (result >= *(int64_t *)(a4 + 24)) {
                // 0x514860
                return result;
            }
            // 0x51481e
            v4 = *(int32_t *)result == -1;
        }
    }
    // 0x5147c8
    if (v4 == (char)((int32_t)v3 == -1)) {
        int32_t * v5 = (int32_t *)a7; // 0x5147cd
        *v5 = *v5 | 2;
    }
    // 0x5147d0
    if (g6 != &g7) {
        // 0x514840
        return function_508620(&g7, &v2, 0x100000000 * a3 >> 32);
    }
    // 0x5147e9
    __readfsqword(40);
    return result2;
}

// Address range: 0x5484b0 - 0x5485b6
int64_t function_5484b0(int64_t result, uint64_t a2, int64_t a3) {
    // 0x5484b0
    if (a2 == 0) {
        // 0x548519
        return result;
    }
    int64_t * v1 = (int64_t *)(result - 24); // 0x5484d2
    int64_t v2 = *v1; // 0x5484d2
    if (0x3ffffffffffffff9 - v2 < a2) {
        // 0x548562
        function_542590("basic_string::append");
        if (g6 != (int64_t *)"basic_string::append") {
            // 0x5485a0
            *(int32_t *)"pend" = (int32_t)"end";
        }
        // 0x548519
        return (int64_t)"\\\\";
    }
    uint64_t v3 = v2 + a2; // 0x5484e2
    int64_t v4; // 0x5484b0
    if (v3 > *(int64_t *)(result - 16)) {
        goto lab_0x5484ee;
    } else {
        int32_t v5 = *(int32_t *)(result - 8); // 0x548530
        v4 = v2;
        if (v5 >= 0 == (v5 != 0)) {
            goto lab_0x5484ee;
        } else {
            goto lab_0x5484fc;
        }
    }
  lab_0x5484ee:
    // 0x5484ee
    function_259ce(result, v3, a3);
    v4 = *v1;
    goto lab_0x5484fc;
  lab_0x5484fc:;
    int64_t v6 = v4 + result; // 0x5484fc
    if (a2 != 1) {
        // 0x548540
        memset((int64_t *)v6, 0x1000000 * (int32_t)a3 >> 24, (int32_t)a2);
    } else {
        // 0x548506
        *(char *)v6 = (char)a3;
    }
    int64_t v7 = v6 - 24; // 0x54850c
    if (v7 != (int64_t)g6) {
        // 0x548550
        *(int32_t *)(v6 - 8) = 0;
        *(int64_t *)v7 = v3;
        *(char *)(v6 + v3) = 0;
    }
    // 0x548519
    return result;
}

// Address range: 0x549e80 - 0x549fe2
int64_t function_549e80(int64_t wstr2, int64_t n, int64_t a3, int64_t wstr4, int64_t n2) {
    int64_t v1 = wstr2 + 16;
    int64_t v2 = *(int64_t *)(wstr2 + 8); // 0x549e9e
    int64_t v3 = __readfsqword(40); // 0x549ea2
    int64_t v4 = n2 - a3 + v2; // bp-72, 0x549ecc
    int64_t * v5 = (int64_t *)v1;
    int64_t wstr = function_549a50(wstr2, &v4, *v5); // 0x549ee3
    int64_t v6 = wstr2; // 0x549ef2
    int64_t result = wstr; // 0x549ef2
    if (n != 0) {
        if (n != 1) {
            int32_t * v7 = wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n); // 0x549fcf
            v6 = wstr;
            result = (int64_t)v7;
        } else {
            // 0x549f01
            *(int32_t *)wstr = (int32_t)wstr2;
            v6 = wstr2;
            result = wstr2 & 0xffffffff;
        }
    }
    int64_t wstr3 = v6; // 0x549f08
    if (wstr4 != 0 && n2 != 0) {
        if (n2 == 1) {
            // 0x549fe8
            return result;
        }
        // 0x549f1d
        wstr3 = wstr + 4 * n;
        wmemcpy((int32_t *)wstr3, (int32_t *)wstr4, (int32_t)n2);
    }
    int64_t n3 = v2 - n - a3; // 0x549ec6
    int64_t v8 = wstr3; // 0x549f46
    if (n3 != 0) {
        int64_t wstr6 = wstr3 + 4 * (a3 + n); // 0x549f52
        int64_t wstr5 = wstr + 4 * (n2 + n); // 0x549f56
        if (n3 != 1) {
            // 0x549fa0
            wmemcpy((int32_t *)wstr5, (int32_t *)wstr6, (int32_t)n3);
            v8 = wstr5;
        } else {
            // 0x549f5c
            *(int32_t *)wstr5 = *(int32_t *)wstr6;
            v8 = wstr3;
        }
    }
    // 0x549f60
    if (v1 != v8) {
        // 0x549f65
        function_4eeb50(v8);
    }
    // 0x549f72
    *(int64_t *)wstr2 = wstr;
    *v5 = v4;
    return __readfsqword(40) ^ v3;
}

// Address range: 0x5720a0 - 0x572205
int64_t function_5720a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x5720b2
    char v2 = a1; // 0x5720cb
    *(char *)(a2 + 72) = v2;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x5720d8
    *v3 = 0;
    *(char *)(a2 + 73) = v2;
    int64_t * v4 = (int64_t *)(a2 + 40); // 0x5720e6
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a2 + 56); // 0x5720ee
    *v5 = 0;
    *(char *)(a2 + 136) = 1;
    int64_t v6; // 0x5720a0
    int64_t v7 = v6 + 1; // 0x57210c
    int64_t v8 = function_4eec00(v7, a1); // 0x572110
    int64_t v9; // bp-88, 0x5720a0
    function_52cbf0(&v9, v8, v6, 0);
    int64_t v10; // bp-72, 0x5720a0
    int64_t v11 = (int64_t)&v10; // 0x57212c
    *(char *)(v8 + v6) = 0;
    *v3 = v8;
    if (v9 != v11) {
        // 0x572142
        function_4eeb50(v9);
    }
    int64_t v12 = function_4eec00(v7, a1); // 0x57215d
    function_52cbf0(&v9, v12, v6, 0);
    *(char *)(v12 + v6) = 0;
    *v4 = v12;
    if (v9 != v11) {
        // 0x57218f
        function_4eeb50(v9);
    }
    int64_t v13 = function_4eec00(v7, a1); // 0x5721ab
    function_52cbf0(&v9, v13, v6, 0);
    *(char *)(v13 + v6) = 0;
    *v5 = v13;
    if (v9 != v11) {
        // 0x5721de
        function_4eeb50(v9);
    }
    int64_t result = __readfsqword(40) ^ v1; // 0x5721e8
    if (result == 0) {
        // 0x5721f3
        return result;
    }
    // 0x572200
    __stack_chk_fail();
    return (int64_t)&g9;
}

// Address range: 0x57d580 - 0x57d6e5
int64_t function_57d580(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x57d580
    int64_t result = *v1; // 0x57d580
    if (*(char *)result != 76) {
        // 0x57d677
        return result;
    }
    int64_t v2 = result + 1; // 0x57d58d
    *v1 = v2;
    int64_t v3 = v2; // 0x57d6b8
    int64_t result4; // 0x57d580
    char v4; // 0x57d580
    int64_t v5; // 0x57d580
    switch (*(char *)v2) {
        case 95: {
            // 0x57d6b8
            v3 = result + 2;
            *v1 = v3;
            char v6 = *(char *)v3; // 0x57d6c0
            result4 = 0;
            v4 = v6;
            v5 = v3;
            if (v6 != 90) {
                goto lab_0x57d69e;
            } else {
                goto lab_0x57d685;
            }
        }
        case 90: {
            goto lab_0x57d685;
        }
        default: {
            int64_t result2 = function_57ba10(); // 0x57d5af
            if (result2 == 0) {
                // 0x57d677
                return 0;
            }
            // 0x57d5bd
            if (*(int32_t *)result2 == 39) {
                int64_t v7 = *(int64_t *)(result2 + 8); // 0x57d6d0
                if (*(int32_t *)(v7 + 28) != 0) {
                    int32_t * v8 = (int32_t *)(a1 + 80); // 0x57d6e2
                    *v8 = *v8 - *(int32_t *)(v7 + 8);
                    return result2;
                }
            }
            int64_t v9 = *v1; // 0x57d5c6
            char v10 = *(char *)v9; // 0x57d5cf
            char v11 = v10; // 0x57d5d6
            int64_t v12 = v9; // 0x57d5d6
            if (v10 == 110) {
                // 0x57d5d8
                v12 = v9 + 1;
                *v1 = v12;
                v11 = *(char *)v12;
            }
            // 0x57d5ed
            switch (v11) {
                case 69: {
                    // 0x57d677
                    return result2;
                }
                case 0: {
                    // 0x57d677
                    return 0;
                }
            }
            int64_t v13 = v12 + 1;
            *v1 = v13;
            char v14 = *(char *)v13; // 0x57d60d
            while (v14 != 69) {
                // 0x57d600
                if (v14 == 0) {
                    // 0x57d677
                    return 0;
                }
                v13++;
                *v1 = v13;
                v14 = *(char *)v13;
            }
            int32_t * v15 = (int32_t *)(a1 + 40); // 0x57d61b
            int32_t v16 = *v15; // 0x57d61b
            if (v16 < *(int32_t *)(a1 + 44)) {
                int64_t v17 = *(int64_t *)(a1 + 32); // 0x57d634
                int64_t v18 = v17 + 8 * ((0x100000000 * (int64_t)v16 >> 31) + (int64_t)v16); // 0x57d638
                int32_t * v19 = (int32_t *)(v18 + 4); // 0x57d63c
                *v19 = 0;
                *v15 = v16 + 1;
                int32_t v20 = v13 - v12; // 0x57d648
                if (v12 != 0 && v20 != 0) {
                    // 0x57d64c
                    *v19 = 0;
                    *(int32_t *)v18 = 0;
                    *(int64_t *)(v18 + 8) = v12;
                    *(int32_t *)(v18 + 16) = v20;
                }
            }
            int64_t result3 = function_5797e0(a1); // 0x57d666
            int64_t v21 = *v1; // 0x57d66b
            if (*(char *)v21 != 69) {
                // 0x57d677
                return 0;
            }
            // 0x57d6a3
            *v1 = v21 + 1;
            return result3;
        }
    }
  lab_0x57d685:
    // 0x57d685
    *v1 = v3 + 1;
    int64_t v22 = function_57cf40(a1, 0); // 0x57d692
    int64_t v23 = *v1; // 0x57d697
    result4 = v22;
    v4 = *(char *)v23;
    v5 = v23;
    goto lab_0x57d69e;
  lab_0x57d69e:
    // 0x57d69e
    if (v4 != 69) {
        // 0x57d677
        return 0;
    }
    // 0x57d6a3
    *v1 = v5 + 1;
    return result4;
}

// Address range: 0x583450 - 0x5835b1
int64_t __cxa_demangle(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x583450
    __readfsqword(40);
    int64_t result2; // 0x583450
    if (a1 == 0) {
        goto lab_0x583484;
    } else {
        if (a2 == 0 || a3 != 0) {
            char * str = NULL; // bp-88, 0x5834c2
            int64_t result = function_582e90(); // 0x5834e4
            if ((int32_t)result == 0) {
                // 0x5835c0
                return result;
            }
            // 0x5834f1
            if (str == NULL) {
                // 0x58355a
                if (a4 != 0) {
                    // 0x583569
                    *(int32_t *)a4 = -2;
                }
                // 0x583491
                __readfsqword(40);
                return 0;
            }
            int64_t v1 = (int64_t)str; // 0x5834f5
            if (a2 == 0) {
                // 0x583590
                result2 = v1;
                if (a3 != 0) {
                    // 0x583588
                    *(int64_t *)a3 = 0;
                    result2 = v1;
                    goto lab_0x583539;
                } else {
                    goto lab_0x583539;
                }
            } else {
                int32_t len = strlen(str); // 0x583514
                int64_t * v2 = (int64_t *)a2;
                if ((int64_t)&str <= (int64_t)len) {
                    // 0x583580
                    free(v2);
                    // 0x583588
                    *(int64_t *)a3 = 0;
                    result2 = v1;
                    goto lab_0x583539;
                } else {
                    // 0x58351f
                    memcpy(v2, (int64_t *)str, len + 1);
                    free((int64_t *)str);
                    result2 = a2;
                    goto lab_0x583539;
                }
            }
        } else {
            goto lab_0x583484;
        }
    }
  lab_0x583484:
    // 0x583484
    if (a4 != 0) {
        // 0x583489
        *(int32_t *)a4 = -3;
    }
    // 0x583491
    __readfsqword(40);
    return 0;
  lab_0x583539:
    // 0x583539
    if (a4 != 0) {
        // 0x583542
        *(int32_t *)a4 = 0;
    }
    // 0x583491
    __readfsqword(40);
    return result2;
}
