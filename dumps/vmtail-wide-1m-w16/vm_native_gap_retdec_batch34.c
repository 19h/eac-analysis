/*
 * Targeted RetDec C for native executable gap queue batch 34.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x71b9e-0x71c5f rank=13 name=fcn.00071b9e kind=r2_discovered bytes=193 uncovered=193
 *   0x26392-0x26452 rank=14 name=fcn.00026392 kind=r2_discovered bytes=192 uncovered=192
 *   0x5ddde-0x5de9e rank=15 name=fcn.0005ddde kind=r2_discovered bytes=192 uncovered=192
 *   0x54c6d0-0x54c790 rank=16 name=fcn.0054c6d0 kind=r2_discovered bytes=192 uncovered=192
 *   0x54c860-0x54c920 rank=17 name=fcn.0054c860 kind=r2_discovered bytes=192 uncovered=192
 *   0x4e7d8-0x4e897 rank=18 name=fcn.0004e7d8 kind=r2_discovered bytes=191 uncovered=191
 *   0x502a90-0x502b4f rank=19 name=fcn.00502a90 kind=r2_discovered bytes=191 uncovered=191
 *   0x2b79a-0x2b858 rank=20 name=fcn.0002b79a kind=r2_discovered bytes=190 uncovered=190
 *   0x44a22-0x44ae0 rank=21 name=fcn.00044a22 kind=r2_discovered bytes=190 uncovered=190
 *   0x50252-0x50310 rank=22 name=fcn.00050252 kind=r2_discovered bytes=190 uncovered=190
 *   0x4b5a20-0x4b5ade rank=23 name=fcn.004b5a20 kind=r2_discovered bytes=190 uncovered=190
 *   0x4c0bd0-0x4c0c8e rank=24 name=fcn.004c0bd0 kind=r2_discovered bytes=190 uncovered=190
 *   0x519050-0x51910e rank=25 name=fcn.00519050 kind=r2_discovered bytes=190 uncovered=190
 *   0x52da40-0x52dafe rank=26 name=fcn.0052da40 kind=r2_discovered bytes=190 uncovered=190
 *   0x52dbc0-0x52dc7e rank=27 name=fcn.0052dbc0 kind=r2_discovered bytes=190 uncovered=190
 *   0x5689d0-0x568a8e rank=28 name=fcn.005689d0 kind=r2_discovered bytes=190 uncovered=190
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
static inline int128_t eac_retdec_i128(uint64_t hi, uint64_t lo) { return (int128_t)(((uint128_t)hi << 64) | (uint128_t)lo); }
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
struct iovec;
struct epoll_event;
#ifndef EAC_RETDEC_CPUID_REGS_DEFINED
#define EAC_RETDEC_CPUID_REGS_DEFINED 1
struct eac_retdec_cpuid_regs { uint32_t e0; uint32_t e1; uint32_t e2; uint32_t e3; };
#endif
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
extern int g10;
extern int g11;
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
void __asm_outsd(uint16_t port, int32_t value);
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
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
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
int128_t __asm_xorps(int128_t left, int128_t right);
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
size_t mbstowcs(int32_t *dest, const char *src, size_t n);
int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcslen(const int32_t *s);
int wctob(int32_t wc);
int32_t btowc(int c);
int32_t towlower(int32_t wc);
int vswprintf(int32_t *wcs, size_t maxlen, const int32_t *format, int64_t ap);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int fcntl(int fd, int cmd, ...);
int writev(int fd, const struct iovec *iov, int iovcnt);
int epoll_create(int size);
int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event);
int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);
int close(int fd);
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

int64_t function_24ded();
int64_t function_24dff();
int64_t function_2508e();
int64_t function_25622();
int64_t function_2562c();
int64_t function_256ba();
int64_t function_25a28();
int64_t function_25e90();
int64_t function_25f7a();
int64_t function_2620b();
int64_t function_26392();
int64_t function_27998();
int64_t function_27a2a();
int64_t function_2b776();
int64_t function_2b79a();
int64_t function_36712();
int64_t function_36990();
int64_t function_36b14();
int64_t function_44a22();
int64_t function_44bea();
int64_t function_44c42();
int64_t function_48dd5f();
int64_t function_4b5a20();
int64_t function_4c0b00();
int64_t function_4c0bd0();
int64_t function_4d1b80();
int64_t function_4e7d8();
int64_t function_4efd30();
int64_t function_4f0ae0();
int64_t function_4f0bc0();
int64_t function_4fc7e0();
int64_t function_4feb80();
int64_t function_50252();
int64_t function_502a90();
int64_t function_519050();
int64_t function_52b020();
int64_t function_52da40();
int64_t function_52dbc0();
int64_t function_542590();
int64_t function_549a50();
int64_t function_54c6d0();
int64_t function_54c860();
int64_t function_54cb80();
int64_t function_5689d0();
int64_t function_5cab4();
int64_t function_5ddde();
int64_t function_6745f();
int64_t function_6746a();
int64_t function_71b9e();
int64_t function_7299a();
int64_t function_729b0();

// Address range: 0x26392 - 0x26452
int64_t function_26392(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x263b0
    int64_t v2 = a3; // bp-96, 0x263c8
    *(int64_t *)a3 = (int64_t)&g7;
    function_256ba();
    int64_t v3; // bp-80, 0x26392
    function_27998(&v3, a4);
    int64_t v4 = v2; // 0x263eb
    v2 = (int64_t)&g7;
    int64_t v5 = v4; // bp-88, 0x2640c
    function_2620b(a1, 0, a2 - a1 >> 3, &v5, &v3);
    function_2508e(&v5);
    function_27a2a(&v3);
    function_2508e(&v2);
    int64_t result = 0; // 0x2643e
    if (v1 != __readfsqword(40)) {
        // 0x26440
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x26445
    return result;
}

// Address range: 0x2b79a - 0x2b858
int64_t function_2b79a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_2b776(); // 0x2b7a4
    if (v1 == 0) {
        // 0x2b84d
        return 0;
    }
    // 0x2b7b7
    if (function_6746a(v1, "SteamClient") != 0) {
        // 0x2b7ce
        if (function_6746a(v1, "SteamAPI_GetHSteamPipe") != 0) {
            int64_t result = function_6746a(v1, "SteamAPI_GetHSteamUser"); // 0x2b7ef
            if (result != 0) {
                // 0x2b7fc
                if ((int32_t)result != 0 && (int32_t)result != 0) {
                    // 0x2b835
                    function_6745f(v1);
                    // 0x2b84d
                    return result;
                }
            }
        }
    }
    // 0x2b835
    function_6745f(v1);
    // 0x2b84d
    return 0;
}

// Address range: 0x44a22 - 0x44ae0
int64_t function_44a22(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + (int64_t)&g10; // 0x44a2d
    for (int64_t i = 8; i > 0; i--) {
        // 0x44a45
        function_44bea(v1);
    }
    int32_t v2 = 8 * (int32_t)a3; // 0x44a52
    int64_t v3 = 1; // 0x44a76
    int64_t v4 = a1 + 16; // 0x44a76
    int64_t v5 = a1 + (int64_t)&g8;
    function_7299a(v5);
    v3 &= 0xffffffff;
    int64_t v6 = v5 + 40; // 0x44aa0
    function_729b0(v5);
    v4 += 416;
    int64_t v7 = 8; // 0x44ab5
    while (v6 != a1 + (int64_t)&g9) {
        // 0x44a7b
        v5 = v6;
        function_7299a(v5);
        v3 &= 0xffffffff;
        v6 = v5 + 40;
        function_729b0(v5);
        v4 += 416;
        v7 = 8;
    }
    int64_t v8 = function_44c42(v1, 1); // 0x44ac4
    int64_t v9 = v7 - 1; // 0x44ac9
    v7 = v9;
    while (v9 != 0) {
        // 0x44abc
        v8 = function_44c42(v1, 1);
        v9 = v7 - 1;
        v7 = v9;
    }
    // 0x44ace
    return v8 & -256 | v3 % 256;
}

// Address range: 0x4e7d8 - 0x4e897
int64_t function_4e7d8(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 8; // 0x4e7dc
    int64_t v2 = *(int64_t *)(a1 + 16);
    int64_t * v3; // 0x4e7d8
    int64_t v4; // 0x4e7d8
    int64_t v5; // 0x4e7d8
    int64_t v6; // 0x4e7d8
    int64_t v7; // 0x4e7d8
    int64_t v8; // 0x4e7d8
    int64_t result2; // 0x4e829
    if (v2 == 0) {
        // 0x4e820
        v8 = a2;
        v6 = v1;
        v4 = 1;
        if (*(int64_t *)(a1 + 24) == v1) {
            goto lab_0x4e853;
        } else {
            // 0x4e826
            result2 = function_4f0ae0(v1);
            v3 = (int64_t *)(result2 + 32);
            v7 = a2;
            v5 = v1;
            goto lab_0x4e833;
        }
    } else {
        int64_t v9 = v2;
        int64_t v10 = *(int64_t *)(v9 + 24);
        while (v10 != 0) {
            // 0x4e7fc
            v9 = v10;
            v10 = *(int64_t *)(v9 + 24);
        }
        int64_t * v11 = (int64_t *)(v9 + 32);
        v3 = v11;
        v7 = *v11;
        v5 = v9;
        result2 = v9;
        goto lab_0x4e833;
    }
  lab_0x4e853:;
    int64_t result = function_4efd30(40); // 0x4e858
    *(int64_t *)(result + 32) = v8;
    function_4f0bc0(v4, result, v6, v1);
    int64_t * v12 = (int64_t *)(a1 + 40); // 0x4e87c
    *v12 = *v12 + 1;
    // 0x4e88a
    return result;
  lab_0x4e833:
    // 0x4e833
    if (*v3 >= v7) {
        // 0x4e88a
        return result2;
    }
    // 0x4e83f
    v8 = v7;
    v6 = v1;
    v4 = 1;
    if (v1 != v5) {
        // 0x4e847
        v8 = v7;
        v6 = v5;
        v4 = v7 < *(int64_t *)(v5 + 32);
    }
    goto lab_0x4e853;
}

// Address range: 0x50252 - 0x50310
int64_t function_50252(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)a3; // 0x50268
    *v1 = 0;
    int64_t v2 = __readfsqword(40); // 0x50273
    int64_t v3; // bp-56, 0x50252
    function_36712(&v3, a1, 0, function_36990());
    uint64_t v4 = *(int64_t *)(a1 - 24); // 0x502a6
    uint64_t v5 = *(int64_t *)(v3 - 24) + v4; // 0x502aa
    function_25e90(a1, function_36b14(), v5 > v4 ? v4 : v5, 0);
    *v1 = (int32_t)function_48dd5f(v3);
    function_2508e(&v3);
    int64_t result = 0; // 0x502fe
    if (v2 != __readfsqword(40)) {
        // 0x50300
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x50305
    return result;
}

// Address range: 0x5ddde - 0x5de9e
int64_t function_5ddde(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x5dde7
    int64_t v2 = 0x61476e49;
    int64_t v3 = (int64_t)&v2; // 0x5de2e
    int64_t v4 = 0xdf21f0af; // 0x5de42
    int64_t v5 = 4; // 0x5de42
    char v6 = *(char *)(v5 + (int64_t)(int32_t)&g2); // 0x5de51
    *(char *)(v5 + v3) = v6 ^ (char)v4;
    v5++;
    v4 /= 256;
    while (v5 != 7) {
        // 0x5de47
        v6 = *(char *)(v5 + (int64_t)(int32_t)&g2);
        *(char *)(v5 + v3) = v6 ^ (char)v4;
        v5++;
        v4 /= 256;
    }
    // 0x5de67
    function_5cab4(a1, &v2, 7, 223);
    function_24dff(&v2, 7);
    int64_t result = a1; // 0x5de90
    if (v1 != __readfsqword(40)) {
        // 0x5de92
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x5de97
    return result;
}

// Address range: 0x71b9e - 0x71c5f
int64_t function_71b9e(int64_t result, uint64_t a2) {
    uint64_t v1 = function_24ded(a2); // 0x71bab
    int64_t v2 = a2; // 0x71bc4
    int64_t v3; // 0x71b9e
    if (v1 < 0x3ffffffffffffffa) {
        goto lab_0x71c02;
    } else {
        // 0x71bd2
        function_542590("basic_string::assign");
        v3 = (int64_t)"basic_string::assign";
        v2 = (int64_t)"basic_string::assign";
        if (a2 >= (int64_t)"basic_string::assign") {
            goto lab_0x71c02;
        } else {
            goto lab_0x71bd7;
        }
    }
  lab_0x71c02:;
    int64_t v4 = v2 - 24; // 0x71c02
    v3 = v2;
    if (*(int64_t *)v4 + v2 >= a2) {
        int64_t v5 = function_25622(v4); // 0x71c12
        v3 = v4;
        if ((char)v5 == 0) {
            uint64_t v6 = a2 - v4; // 0x71c22
            if (v1 > v6) {
                if (v6 != 0) {
                    // 0x71c3c
                    function_25f7a(v4, a2, v1);
                }
            } else {
                // 0x71c2a
                function_25a28(v4, a2, v1);
            }
            // 0x71c47
            function_2562c(v2 - 48, v1);
            // 0x71c57
            return result;
        }
    }
    goto lab_0x71bd7;
  lab_0x71bd7:
    // 0x71bd7
    function_25e90(result, 0, *(int64_t *)(v3 - 24), (int32_t)v1);
    if (v1 != 0) {
        // 0x71bf1
        function_25a28(result, a2, v1);
    }
    // 0x71c57
    return result;
}

// Address range: 0x4b5a20 - 0x4b5adc
int64_t function_4b5a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x4b5a2c
    if (v1 == 6) {
        // 0x4b5a90
        *(int64_t *)a9 = a7;
        int64_t result = function_4c0bd0(*(int64_t *)(a1 + 80), a7, a2, a3, a4, a5, a10, a11, a6, a8); // 0x4b5acd
        if ((int32_t)result != -18) {
            // 0x4b5a88
            return result;
        }
        // 0x4b5a88
        return 0xffff9d00;
    }
    // 0x4b5a36
    if (v1 != 8) {
        // 0x4b5a88
        return 0xffff9f80;
    }
    // 0x4b5a41
    *(int64_t *)a9 = a7;
    int64_t result2 = function_4d1b80(*(int64_t *)(a1 + 80), a7, a2, a3, a4, a5, a6, a8, a10, a11); // 0x4b5a7e
    if ((int32_t)result2 != -15) {
        // 0x4b5a88
        return result2;
    }
    // 0x4b5a88
    return 0xffff9d00;
}

// Address range: 0x4c0bd0 - 0x4c0c8e
int64_t function_4c0bd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t result = function_4c0b00(); // 0x4c0c24
    if (a8 == 0 || (int32_t)result != 0) {
        // 0x4c0c81
        return result;
    }
    int64_t v1 = 0; // 0x4c0c2b
    int64_t v2 = 0;
    int64_t v3; // bp-56, 0x4c0bd0
    char v4 = *(char *)(v2 + (int64_t)&v3); // 0x4c0c40
    int64_t v5 = v2 + 1; // 0x4c0c4a
    v1 |= (int64_t)(*(char *)(v2 + a7) ^ v4);
    while (v5 != a8) {
        // 0x4c0c40
        v2 = v5;
        v4 = *(char *)(v2 + (int64_t)&v3);
        v5 = v2 + 1;
        v1 |= (int64_t)(*(char *)(v2 + a7) ^ v4);
    }
    // 0x4c0c5a
    if (v1 == 0) {
        // 0x4c0c81
        return result;
    }
    // 0x4c0c5f
    if (a2 == 0) {
        // 0x4c0c81
        return 0xffffffee;
    }
    int64_t v6 = a10; // 0x4c0c66
    *(char *)v6 = 0;
    v6++;
    while (v6 != a10 + a2) {
        // 0x4c0c70
        *(char *)v6 = 0;
        v6++;
    }
    // 0x4c0c81
    return 0xffffffee;
}

// Address range: 0x502a90 - 0x502b4f
// From class:    std::basic_ifstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_502a90(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 256; // 0x502a9e
    function_54cb80(v1);
    *(int64_t *)(a1 + 472) = 0;
    *(char *)(a1 + 480) = 0;
    *(char *)(a1 + 481) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g1) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x502aff
    *v2 = (int64_t)&g3;
    int64_t * v3 = (int64_t *)v1; // 0x502b02
    *v3 = (int64_t)&g4;
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(v1, 0);
    int64_t v4 = a1 + 16; // 0x502b1d
    *v3 = (int64_t)&g6;
    *v2 = (int64_t)&g5;
    function_4feb80(v4);
    return function_4fc7e0(v1, (int32_t)v4);
}

// Address range: 0x519050 - 0x51910e
int64_t function_519050(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x51905e
    if (a2 == 0 == (a3 != 0)) {
        // 0x519107
        return 0;
    }
    int64_t v2 = a3 - a2; // 0x51907f
    int64_t v3 = v2; // bp-40, 0x519086
    int64_t v4; // 0x519050
    int64_t v5; // 0x519050
    if (v2 < 16) {
        if (v2 != 1) {
            // 0x519100
            v5 = a1;
            v4 = a1;
            if (v2 == 0) {
                goto lab_0x5190a4;
            } else {
                goto lab_0x5190e9;
            }
        } else {
            // 0x519099
            int64_t v6; // 0x519050
            *(char *)a1 = (char)v6;
            v5 = a1;
            goto lab_0x5190a4;
        }
    } else {
        int64_t v7 = function_52b020(a1, &v3, 0); // 0x5190d8
        *(int64_t *)a1 = v7;
        *(int64_t *)(a1 + 16) = v3;
        v4 = v7;
        goto lab_0x5190e9;
    }
  lab_0x5190e9:
    // 0x5190e9
    memcpy((int64_t *)v4, (int64_t *)a2, (int32_t)v2);
    v5 = v4;
    goto lab_0x5190a4;
  lab_0x5190a4:
    // 0x5190a4
    *(int64_t *)(a1 + 8) = v3;
    *(char *)(v3 + v5) = 0;
    return __readfsqword(40) ^ v1;
}

// Address range: 0x52da40 - 0x52dafc
int64_t function_52da40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x52da4e
    if (a2 == 0 == (a3 != 0)) {
        // 0x52daf5
        return 0;
    }
    int64_t v2 = a3 - a2; // 0x52da6f
    int64_t v3 = v2; // bp-40, 0x52da76
    int64_t v4; // 0x52da40
    int64_t v5; // 0x52da40
    if (v2 < 16) {
        if (v2 == 1) {
            // 0x52dab8
            int64_t v6; // 0x52da40
            *(char *)a1 = (char)v6;
            v5 = a1;
            goto lab_0x52da8e;
        } else {
            // 0x52da89
            v5 = a1;
            v4 = a1;
            if (v2 != 0) {
                goto lab_0x52dae1;
            } else {
                goto lab_0x52da8e;
            }
        }
    } else {
        int64_t v7 = function_52b020(a1, &v3, 0); // 0x52dad0
        *(int64_t *)a1 = v7;
        *(int64_t *)(a1 + 16) = v3;
        v4 = v7;
        goto lab_0x52dae1;
    }
  lab_0x52dae1:
    // 0x52dae1
    memcpy((int64_t *)v4, (int64_t *)a2, (int32_t)v2);
    v5 = v4;
    goto lab_0x52da8e;
  lab_0x52da8e:
    // 0x52da8e
    *(int64_t *)(a1 + 8) = v3;
    *(char *)(v3 + v5) = 0;
    return __readfsqword(40) ^ v1;
}

// Address range: 0x52dbc0 - 0x52dc7c
int64_t function_52dbc0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x52dbce
    if (a2 == 0 == (a3 != 0)) {
        // 0x52dc75
        return 0;
    }
    int64_t v2 = a3 - a2; // 0x52dbef
    int64_t v3 = v2; // bp-40, 0x52dbf6
    int64_t v4; // 0x52dbc0
    int64_t v5; // 0x52dbc0
    if (v2 < 16) {
        if (v2 == 1) {
            // 0x52dc38
            int64_t v6; // 0x52dbc0
            *(char *)a1 = (char)v6;
            v5 = a1;
            goto lab_0x52dc0e;
        } else {
            // 0x52dc09
            v5 = a1;
            v4 = a1;
            if (v2 != 0) {
                goto lab_0x52dc61;
            } else {
                goto lab_0x52dc0e;
            }
        }
    } else {
        int64_t v7 = function_52b020(a1, &v3, 0); // 0x52dc50
        *(int64_t *)a1 = v7;
        *(int64_t *)(a1 + 16) = v3;
        v4 = v7;
        goto lab_0x52dc61;
    }
  lab_0x52dc61:
    // 0x52dc61
    memcpy((int64_t *)v4, (int64_t *)a2, (int32_t)v2);
    v5 = v4;
    goto lab_0x52dc0e;
  lab_0x52dc0e:
    // 0x52dc0e
    *(int64_t *)(a1 + 8) = v3;
    *(char *)(v3 + v5) = 0;
    return __readfsqword(40) ^ v1;
}

// Address range: 0x54c6d0 - 0x54c78f
int64_t function_54c6d0(int64_t wstr3, int64_t wstr2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x54c6de
    if (wstr2 == 0 == (a3 != 0)) {
        // 0x54c791
        return 0;
    }
    int64_t v2 = a3 - wstr2; // 0x54c6fc
    int64_t n = v2 >> 2; // 0x54c702
    int64_t v3 = n; // bp-40, 0x54c70d
    if (n >= 4) {
        int64_t wstr = function_549a50(wstr3, &v3, 0); // 0x54c768
        *(int64_t *)wstr3 = wstr;
        *(int64_t *)(wstr3 + 16) = v3;
        // 0x54c779
        wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
        return wstr;
    }
    if (n == 1) {
        // 0x54c750
        int64_t v4; // 0x54c6d0
        *(int32_t *)wstr3 = (int32_t)v4;
        // 0x54c722
        *(int64_t *)(wstr3 + 8) = n;
        *(int32_t *)((v2 & -4) + wstr3) = 0;
        return __readfsqword(40) ^ v1;
    }
    // 0x54c71d
    if (n != 0) {
        // 0x54c779
        wmemcpy((int32_t *)wstr3, (int32_t *)wstr2, (int32_t)n);
        return wstr3;
    }
    // 0x54c722
    *(int64_t *)(wstr3 + 8) = n;
    *(int32_t *)((v2 & -4) + wstr3) = 0;
    return __readfsqword(40) ^ v1;
}

// Address range: 0x54c860 - 0x54c91f
int64_t function_54c860(int64_t wstr3, int64_t wstr2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x54c86e
    if (wstr2 == 0 == (a3 != 0)) {
        // 0x54c921
        return 0;
    }
    int64_t v2 = a3 - wstr2; // 0x54c88c
    int64_t n = v2 >> 2; // 0x54c892
    int64_t v3 = n; // bp-40, 0x54c89d
    if (n >= 4) {
        int64_t wstr = function_549a50(wstr3, &v3, 0); // 0x54c8f8
        *(int64_t *)wstr3 = wstr;
        *(int64_t *)(wstr3 + 16) = v3;
        // 0x54c909
        wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
        return wstr;
    }
    if (n == 1) {
        // 0x54c8e0
        int64_t v4; // 0x54c860
        *(int32_t *)wstr3 = (int32_t)v4;
        // 0x54c8b2
        *(int64_t *)(wstr3 + 8) = n;
        *(int32_t *)((v2 & -4) + wstr3) = 0;
        return __readfsqword(40) ^ v1;
    }
    // 0x54c8ad
    if (n != 0) {
        // 0x54c909
        wmemcpy((int32_t *)wstr3, (int32_t *)wstr2, (int32_t)n);
        return wstr3;
    }
    // 0x54c8b2
    *(int64_t *)(wstr3 + 8) = n;
    *(int32_t *)((v2 & -4) + wstr3) = 0;
    return __readfsqword(40) ^ v1;
}

// Address range: 0x5689d0 - 0x568a8e
int64_t function_5689d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x5689de
    if (a2 == 0 == (a3 != 0)) {
        // 0x568a87
        return 0;
    }
    int64_t v2 = a3 - a2; // 0x5689ff
    int64_t v3 = v2; // bp-40, 0x568a06
    int64_t v4; // 0x5689d0
    int64_t v5; // 0x5689d0
    if (v2 < 16) {
        if (v2 != 1) {
            // 0x568a80
            v5 = a1;
            v4 = a1;
            if (v2 == 0) {
                goto lab_0x568a24;
            } else {
                goto lab_0x568a69;
            }
        } else {
            // 0x568a19
            int64_t v6; // 0x5689d0
            *(char *)a1 = (char)v6;
            v5 = a1;
            goto lab_0x568a24;
        }
    } else {
        int64_t v7 = function_52b020(a1, &v3, 0); // 0x568a58
        *(int64_t *)a1 = v7;
        *(int64_t *)(a1 + 16) = v3;
        v4 = v7;
        goto lab_0x568a69;
    }
  lab_0x568a69:
    // 0x568a69
    memcpy((int64_t *)v4, (int64_t *)a2, (int32_t)v2);
    v5 = v4;
    goto lab_0x568a24;
  lab_0x568a24:
    // 0x568a24
    *(int64_t *)(a1 + 8) = v3;
    *(char *)(v3 + v5) = 0;
    return __readfsqword(40) ^ v1;
}
