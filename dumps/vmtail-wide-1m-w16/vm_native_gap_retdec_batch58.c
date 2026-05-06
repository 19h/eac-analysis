/*
 * Targeted RetDec C for native executable gap queue batch 58.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4b9f70-0x4b9fec rank=16 name=fcn.004b9f70 kind=r2_discovered bytes=124 uncovered=124
 *   0x54f3b0-0x54f42c rank=17 name=method.std::codecvt_char16_t__char____mbstate_t_.virtual_32 kind=native_discovered bytes=124 uncovered=124
 *   0x20dec-0x20e67 rank=18 name=entry.init2 kind=native_discovered bytes=123 uncovered=123
 *   0x211b1-0x2122c rank=19 name=entry.init12 kind=native_discovered bytes=123 uncovered=123
 *   0x6ac9c-0x6ad17 rank=20 name=fcn.0006ac9c kind=r2_discovered bytes=123 uncovered=123
 *   0x4cf0c0-0x4cf13b rank=21 name=fcn.004cf0c0 kind=r2_discovered bytes=123 uncovered=123
 *   0x213b0-0x2142a rank=22 name=entry.init17 kind=native_discovered bytes=122 uncovered=122
 *   0x21430-0x214aa rank=23 name=entry.init18 kind=native_discovered bytes=122 uncovered=122
 *   0x442cf-0x44349 rank=24 name=fcn.000442cf kind=r2_discovered bytes=122 uncovered=122
 *   0x449a8-0x44a22 rank=25 name=fcn.000449a8 kind=r2_discovered bytes=122 uncovered=122
 *   0x5bda0-0x5be1a rank=26 name=fcn.0005bda0 kind=r2_discovered bytes=122 uncovered=122
 *   0x48f5c8-0x48f642 rank=27 name=fcn.0048f5c8 kind=r2_discovered bytes=122 uncovered=122
 *   0x4b0460-0x4b04da rank=28 name=fcn.004b0460 kind=r2_discovered bytes=122 uncovered=122
 *   0x54ff00-0x54ff7a rank=29 name=fcn.0054ff00 kind=r2_discovered bytes=122 uncovered=122
 *   0x4f6a0-0x4f719 rank=30 name=fcn.0004f6a0 kind=r2_discovered bytes=121 uncovered=121
 *   0x50e24-0x50e9d rank=31 name=fcn.00050e24 kind=r2_discovered bytes=121 uncovered=121
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
struct addrinfo;
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
int64_t unknown_34e4aca1(int64_t value);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_ffffffffd3dfe90d(void);
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
int128_t __asm_movsd_133(int64_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
int128_t __asm_aesimc(int128_t value);
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
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
void __asm_ucomiss(int128_t left, int64_t right);
void __asm_ucomiss_134(int128_t left, int128_t right);
int128_t __asm_movups();
void __asm_movups_133();
int128_t __asm_movaps(int128_t value);
float80_t __frontend_reg_load_fpr(int32_t reg);
void __frontend_reg_store_fpr(int32_t reg, float80_t value);
char *__nl_langinfo_l(int32_t item, struct __locale_struct *locale);
struct __locale_struct *__uselocale(struct __locale_struct *locale);
float32_t __strtof_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float64_t __strtod_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float80_t strtold_l(const char *nptr, char **endptr, struct __locale_struct *locale);
char *dgettext(char *domain, char *msgid);
char *gettext(char *msgid);
char *bind_textdomain_codeset(char *domainname, char *codeset);
void *iconv_open(const char *tocode, const char *fromcode);
int32_t iconv(void *cd, char **inbuf, int32_t *inbytesleft, char **outbuf, int32_t *outbytesleft);
int iconv_close(void *cd);
struct _IO_FILE *fopen(const char *path, const char *mode);
size_t fread(void *ptr, size_t size, size_t nmemb, struct _IO_FILE *stream);
void rewind(struct _IO_FILE *stream);
int fclose(struct _IO_FILE *stream);
int uname(struct utsname *buf);
int64_t __tls_get_addr(void *arg);
int32_t mbrtowc(int32_t *pwc, const char *s, size_t n, struct _TYPEDEF___mbstate_t *ps);
size_t mbstowcs(int32_t *dest, const char *src, size_t n);
int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcslen(const int32_t *s);
int wcscmp(const int32_t *s1, const int32_t *s2);
int wctob(int32_t wc);
int32_t btowc(int c);
int32_t towlower(int32_t wc);
int vswprintf(int32_t *wcs, size_t maxlen, const int32_t *format, int64_t ap);
int32_t *wmemchr(const int32_t *s, int32_t c, size_t n);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_once(int32_t *once_control, int64_t init_routine);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int sem_init(int64_t *sem, int pshared, unsigned int value);
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
int fseeko64(struct _IO_FILE *stream, int64_t offset, int whence);
int64_t ftello64(struct _IO_FILE *stream);
int64_t lseek64(int fd, int64_t offset, int whence);
int32_t *__errno_location(void);
int connect(int sockfd, const struct sockaddr *addr, int32_t addrlen);
int getsockopt(int sockfd, int level, int optname, void *optval, int32_t *optlen);
int setsockopt(int sockfd, int level, int optname, const void *optval, int32_t optlen);
int getaddrinfo(const char *node, const char *service, const struct addrinfo *hints, struct addrinfo **res);
void freeaddrinfo(struct addrinfo *res);
int64_t readlink(const char *path, char *buf, size_t bufsiz);
char *realpath(const char *path, char *resolved_path);
int glob(const char *pattern, int flags, void *errfunc, struct _TYPEDEF_glob_t *pglob);
void globfree(struct _TYPEDEF_glob_t *pglob);
char *__xpg_basename(char *path);
int32_t eac_retdec_vsnprintf(char *str, int32_t size, char *format, int64_t ap);
int64_t __wctype_l(const char *property, struct __locale_struct *locale);
int __iswctype_l(int32_t wc, int32_t desc, struct __locale_struct *locale);
char *strdup(const char *s);
int __sprintf_chk(char *str, int flag, size_t slen, const char *format, ...);
struct tm *gmtime_r(const int32_t *timep, struct tm *result);
struct _Unwind_Exception;
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_20dec(void);
int64_t function_211b1(void);
int64_t function_213b0(void);
int64_t function_21430(void);
int64_t function_2508e();
int64_t function_250b0();
int64_t function_29c3a();
int64_t function_36966();
int64_t function_36b3c();
int64_t function_380a0();
int64_t function_442cf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_4482e();
int64_t function_449a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_44c72();
int64_t function_44cae();
int64_t function_48e347();
int64_t function_48f5c8(int64_t result, int64_t a2, int64_t a3);
int64_t function_4b0460(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0be0();
int64_t function_4b0fa0();
int64_t function_4b1080();
int64_t function_4b1680();
int64_t function_4b19a0();
int64_t function_4b9f70(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c0bd0();
int64_t function_4cd7d0();
int64_t function_4cf0c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f6a0(int64_t a1, int64_t result, uint64_t a3);
int64_t function_50906();
int64_t function_50e24(int64_t a1);
int64_t function_527fe();
int64_t function_542650();
int64_t function_54f250();
int64_t function_54f3b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_54ff00(int64_t a1, int64_t wstr, uint64_t a3, uint64_t a4);
int64_t function_5b0cc();
int64_t function_5bb9c();
int64_t function_5bda0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6ac9c(int64_t a1, int64_t a2);
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x20dec - 0x20e67
int64_t function_20dec(void) {
    // 0x20dec
    g3 = 0;
    g4 = 0;
    g5 = 0;
    __cxa_atexit((void (*)(int64_t *))0x370f0, &g3, (int64_t *)0x849800);
    g6 = 0;
    g7 = 0;
    g8 = 0;
    return __cxa_atexit((void (*)(int64_t *))0x370f0, &g6, &g2);
}

// Address range: 0x211b1 - 0x2122c
int64_t function_211b1(void) {
    // 0x211b1
    g9 = 0;
    g10 = 0;
    g11 = 0;
    __cxa_atexit((void (*)(int64_t *))0x370f0, &g9, &g2);
    g12 = 0;
    g13 = 0;
    g14 = 0;
    return __cxa_atexit((void (*)(int64_t *))0x370f0, &g12, &g2);
}

// Address range: 0x213b0 - 0x2142a
int64_t function_213b0(void) {
    // 0x213b0
    if (*(char *)&g22 == 0) {
        // 0x213bc
        *(char *)&g22 = 1;
    }
    // 0x213bf
    if (*(char *)&g21 == 0) {
        // 0x213cb
        *(char *)&g21 = 1;
    }
    // 0x213ce
    if (*(char *)&g20 == 0) {
        // 0x213da
        *(char *)&g20 = 1;
    }
    // 0x213dd
    if (*(char *)&g19 == 0) {
        // 0x213e9
        *(char *)&g19 = 1;
    }
    // 0x213ec
    if (*(char *)&g18 == 0) {
        // 0x213f8
        *(char *)&g18 = 1;
    }
    // 0x213fb
    if (*(char *)&g17 == 0) {
        // 0x21407
        *(char *)&g17 = 1;
    }
    // 0x2140a
    if (*(char *)&g16 == 0) {
        // 0x21416
        *(char *)&g16 = 1;
    }
    // 0x21419
    if (*(char *)&g15 == 0) {
        // 0x21425
        *(char *)&g15 = 1;
    }
    // 0x21428
    return (int64_t)&g15;
}

// Address range: 0x21430 - 0x214aa
int64_t function_21430(void) {
    // 0x21430
    if (*(char *)&g30 == 0) {
        // 0x2143c
        *(char *)&g30 = 1;
    }
    // 0x2143f
    if (*(char *)&g29 == 0) {
        // 0x2144b
        *(char *)&g29 = 1;
    }
    // 0x2144e
    if (*(char *)&g28 == 0) {
        // 0x2145a
        *(char *)&g28 = 1;
    }
    // 0x2145d
    if (*(char *)&g27 == 0) {
        // 0x21469
        *(char *)&g27 = 1;
    }
    // 0x2146c
    if (*(char *)&g26 == 0) {
        // 0x21478
        *(char *)&g26 = 1;
    }
    // 0x2147b
    if (*(char *)&g25 == 0) {
        // 0x21487
        *(char *)&g25 = 1;
    }
    // 0x2148a
    if (*(char *)&g24 == 0) {
        // 0x21496
        *(char *)&g24 = 1;
    }
    // 0x21499
    if (*(char *)&g23 == 0) {
        // 0x214a5
        *(char *)&g23 = 1;
    }
    // 0x214a8
    return (int64_t)&g23;
}

// Address range: 0x442cf - 0x44349
int64_t function_442cf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = __readfsqword(40); // 0x442e6
    uint32_t v3 = (int32_t)a3 + 12; // 0x442fe
    uint64_t v4 = (int64_t)v3; // 0x442fe
    int64_t * v5 = (int64_t *)a4; // 0x44301
    *v5 = (a1 & 0xffffffff) << a3 % 64 | v4;
    *(int32_t *)v1 = v3;
    if (*(int32_t *)&v1 >= 8) {
        int64_t v6 = 0x100000000000000 * v4 / 0x100000000000000; // bp-49, 0x44316
        function_4482e(a2, &v6);
        *v5 = v4 / 256;
        *(int32_t *)a3 = *(int32_t *)&v1 - 8;
        // 0x4430c
        while (*(int32_t *)&v1 >= 8) {
            // 0x4430c
            v6 = 0x100000000000000 * v4 / 0x100000000000000;
            function_4482e(a2, &v6);
            *v5 = v4 / 256;
            *(int32_t *)a3 = *(int32_t *)&v1 - 8;
        }
    }
    int64_t result = 0; // 0x44337
    if (v2 != __readfsqword(40)) {
        // 0x44339
        __stack_chk_fail();
        result = (int64_t)&g32;
    }
    // 0x4433e
    return result;
}

// Address range: 0x449a8 - 0x44a22
int64_t function_449a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a1 + 8; // 0x449b1
    int64_t v2 = function_44cae(v1); // 0x449c8
    int64_t v3 = function_4c0bd0(v2, a8, a2, 12, 0, 0, a4, a5, a6, a7); // 0x449fa
    return function_44c72(v1, v2) & -256 | (int64_t)((int32_t)v3 == 0);
}

// Address range: 0x4f6a0 - 0x4f719
int64_t function_4f6a0(int64_t a1, int64_t result, uint64_t a3) {
    // 0x4f6a0
    if (*(int64_t *)(a1 + 176) < result || a3 == 0 | *(int64_t *)(result + 8) == 0) {
        // 0x4f718
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 32); // 0x4f6bb
    int64_t v2 = 126 * result;
    int64_t v3 = v1 + 8; // 0x4f6d0
    uint64_t v4 = *(int64_t *)(v3 + v2); // 0x4f6d0
    if (v4 == a3) {
        // 0x4f718
        return v2 + v1;
    }
    int64_t v5 = result; // 0x4f6da
    if (v4 <= a3) {
        uint64_t v6 = v4; // 0x4f6d0
        int64_t v7 = result;
        v5 = result;
        while (!((v6 == 0 | *(int64_t *)(a1 + 184) == v7))) {
            int64_t v8 = *(int64_t *)(a1 + 40); // 0x4f6ea
            int64_t v9 = v7 + 1; // 0x4f6ee
            int64_t v10 = v9 == -0x1041041041041041 * (v8 - v1 >> 1) ? 0 : v9;
            v6 = *(int64_t *)(126 * v10 + v3);
            v5 = v10;
            if (v6 == a3) {
                // break -> 0x4f711
                break;
            }
            int64_t v11 = v7; // 0x4f6da
            v5 = v7;
            if (v6 > a3) {
                // break -> 0x4f711
                break;
            }
            v7 = v10;
            v5 = v11;
        }
    }
    // 0x4f718
    return 126 * v5 + v1;
}

// Address range: 0x50e24 - 0x50e9d
int64_t function_50e24(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x50e3c
    int64_t v2; // bp-48, 0x50e24
    function_250b0(&v2);
    int64_t v3; // bp-40, 0x50e24
    function_48e347(&v3, &v2);
    int64_t v4 = function_50906(v3); // 0x50e64
    function_29c3a(&v3);
    function_2508e(&v2);
    int64_t result = v4 & 0xffffffff; // 0x50e8f
    if (v1 != __readfsqword(40)) {
        // 0x50e91
        __stack_chk_fail();
        result = (int64_t)&g32;
    }
    // 0x50e96
    return result;
}

// Address range: 0x5bda0 - 0x5be1a
int64_t function_5bda0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x5bdbc
    int64_t v2; // bp-56, 0x5bda0
    function_729b6(&v2);
    function_380a0(a1, a2);
    int64_t result = function_729ce(&v2) & -256 | function_5bb9c(a1, a3) % 256; // 0x5be08
    if (v1 != __readfsqword(40)) {
        // 0x5be0a
        __stack_chk_fail();
        result = (int64_t)&g32;
    }
    // 0x5be0f
    return result;
}

// Address range: 0x6ac9c - 0x6ad17
int64_t function_6ac9c(int64_t a1, int64_t a2) {
    int64_t v1 = function_4b0fa0(); // 0x6acad
    int64_t v2 = v1 - 1; // 0x6acb5
    if (v2 > (int64_t)&g1) {
        // 0x6ad0b
        return v2 & -256;
    }
    int64_t v3 = function_4efd30(v1); // 0x6acc3
    __asm_rep_stosb_memset((char *)v3, 0, v1);
    int64_t v4; // 0x6ac9c
    int64_t v5; // 0x6ac9c
    if ((int32_t)function_4b1080(a1) != 0) {
        // 0x6ad03
        v5 = function_4eeb50(v3);
        v4 = 0;
    } else {
        // 0x6ace8
        function_4cd7d0(a2, v3, v1);
        v5 = function_4eeb50(v3);
        v4 = 1;
    }
    // 0x6ad0b
    return v5 & -256 | v4;
}

// Address range: 0x48f5c8 - 0x48f642
int64_t function_48f5c8(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a2 - 24); // 0x48f5e1
    uint64_t v2 = *(int64_t *)(a3 - 24) + v1; // 0x48f5e9
    int64_t v3; // 0x48f5c8
    if (v2 > *(int64_t *)(a2 - 16)) {
        // 0x48f5f2
        if (v2 > *(int64_t *)(a3 - 16)) {
            // 0x48f61a
            v3 = function_527fe(a2, a3, v2);
            goto lab_0x48f622;
        } else {
            // 0x48f5f8
            v3 = function_5b0cc(a3, 0, 4 * function_36b3c(a2, 0, "basic_string::insert") + a2, v1);
            goto lab_0x48f622;
        }
    } else {
        // 0x48f61a
        v3 = function_527fe(a2, a3, v2);
        goto lab_0x48f622;
    }
  lab_0x48f622:;
    int64_t * v4 = (int64_t *)v3; // 0x48f622
    *(int64_t *)result = *v4;
    *v4 = (int64_t)&g31;
    return result;
}

// Address range: 0x4b0460 - 0x4b04d9
int64_t function_4b0460(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 == 0) {
        // 0x4b04de
        int64_t result; // 0x4b0460
        return result;
    }
    int64_t * v1 = (int64_t *)a3; // 0x4b048a
    *v1 = a3;
    uint64_t v2 = *(int64_t *)a2; // 0x4b048d
    *v1 = a3 - v2;
    int64_t v3 = a3; // 0x4b04ab
    int64_t v4 = 1; // 0x4b04ab
    int64_t v5 = 8; // 0x4b04ab
    int64_t v6 = v2 > a3; // 0x4b04ab
    if (a1 != 1) {
        v3 += 8;
        int64_t * v7 = (int64_t *)v3;
        uint64_t v8 = *v7; // 0x4b0478
        uint64_t v9 = v8 - v6; // 0x4b0485
        *v7 = v9;
        uint64_t v10 = *(int64_t *)(8 * v4 + a2); // 0x4b048d
        v4++;
        v6 = (int64_t)(v9 < v10) + (int64_t)(v8 < v6);
        *v7 = v9 - v10;
        while (v4 != a1) {
            // 0x4b0478
            v3 += 8;
            v7 = (int64_t *)v3;
            v8 = *v7;
            v9 = v8 - v6;
            *v7 = v9;
            v10 = *(int64_t *)(8 * v4 + a2);
            v4++;
            v6 = (int64_t)(v9 < v10) + (int64_t)(v8 < v6);
            *v7 = v9 - v10;
        }
        // 0x4b047b
        v5 = 8 * v4;
    }
    // 0x4b04ad
    if (v6 == 0) {
        // 0x4b04de
        return 0;
    }
    int64_t * v11 = (int64_t *)(v5 + a3); // 0x4b04c0
    uint64_t v12 = *v11; // 0x4b04c0
    *v11 = v12 - v6;
    return v12 < v6;
}

// Address range: 0x4b9f70 - 0x4b9fec
int64_t function_4b9f70(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 + 24; // 0x4b9f8f
    int64_t v2; // bp-56, 0x4b9f70
    function_4b0870(&v2);
    int64_t v3 = function_4b19a0(&v2, a1 + 8, v1); // 0x4b9fa2
    int64_t v4 = v3; // 0x4b9fab
    if ((int32_t)v3 == 0) {
        int64_t v5 = function_4b1680(v1, 0); // 0x4b9fb2
        v4 = function_4b0be0(v1, &v2, (int32_t)((int32_t)v5 != 0) & (int32_t)a3);
    }
    // 0x4b9fce
    function_4b0890(&v2);
    return v4 & 0xffffffff;
}

// Address range: 0x4cf0c0 - 0x4cf13a
int64_t function_4cf0c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4cf0c0
    *(int32_t *)a1 = 0;
    *(int32_t *)(a1 + 4) = 0;
    int64_t v1 = a1 + 8; // 0x4cf0d0
    for (int64_t i = 0; i < 256; i++) {
        // 0x4cf0d0
        *(char *)(i + v1) = (char)i;
    }
    char v2 = 0; // 0x4cf10c
    int64_t v3 = 0; // 0x4cf0c0
    int64_t v4 = v1;
    int64_t result = v4; // 0x4cf12f
    while ((int32_t)a3 > (int32_t)v3) {
        char * v5 = (char *)v4; // 0x4cf0ff
        char v6 = *v5; // 0x4cf0ff
        v2 = v6 + v2 + *(char *)(v3 + a2);
        char * v7 = (char *)(v1 + (int64_t)v2); // 0x4cf115
        *v5 = *v7;
        int64_t v8 = v4 + 1; // 0x4cf11e
        *v7 = v6;
        v3 = v3 + 1 & 0xffffffff;
        result = v8;
        if (v4 == a1 + 263) {
            // break -> 0x4cf131
            break;
        }
        v4 = v8;
        result = v4;
    }
    // 0x4cf131
    return result;
}

// Address range: 0x54f3b0 - 0x54f42c
// From class:    std::codecvt<char16_t, char, __mbstate_t>
// Type:          virtual member function
int64_t function_54f3b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x54f3bc
    int64_t v2 = a3; // bp-72, 0x54f3d6
    int64_t v3 = a6; // bp-56, 0x54f3f1
    int64_t result = function_54f250(&v2, &v3, 0x10ffff, 1); // 0x54f3fb
    *(int64_t *)a5 = v2;
    *(int64_t *)a8 = v3;
    if (v1 == __readfsqword(40)) {
        // 0x54f420
        return result;
    }
    // 0x54f427
    __stack_chk_fail();
    return (int64_t)&g32;
}

// Address range: 0x54ff00 - 0x54ff79
int64_t function_54ff00(int64_t a1, int64_t wstr, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x54ff07
    if (v1 < a4) {
        // 0x54ff4a
        function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::copy", a4, v1);
        return function_36966();
    }
    uint64_t v2 = v1 - a4; // 0x54ff10
    int64_t n = v2 > a3 ? a3 : v2; // 0x54ff16
    if (n == 0) {
        // 0x54ff37
        return n;
    }
    int64_t wstr2 = 4 * a4 + a1; // 0x54ff26
    if (n == 1) {
        // 0x54ff40
        *(int32_t *)wstr = *(int32_t *)wstr2;
        return 1;
    }
    // 0x54ff2c
    wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
    // 0x54ff37
    return n;
}
