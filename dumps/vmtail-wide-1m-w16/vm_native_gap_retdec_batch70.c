/*
 * Targeted RetDec C for native executable gap queue batch 70.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x261a4-0x26206 rank=20 name=fcn.000261a4 kind=r2_discovered bytes=98 uncovered=98
 *   0x56004-0x56066 rank=21 name=fcn.00056004 kind=r2_discovered bytes=98 uncovered=98
 *   0x4909e4-0x490a46 rank=22 name=fcn.004909e4 kind=r2_discovered bytes=98 uncovered=98
 *   0x543470-0x5434d2 rank=23 name=fcn.00543470 kind=r2_discovered bytes=98 uncovered=98
 *   0x5459a0-0x545a02 rank=24 name=fcn.005459a0 kind=r2_discovered bytes=98 uncovered=98
 *   0x2527b-0x252dc rank=25 name=fcn.0002527b kind=r2_discovered bytes=97 uncovered=97
 *   0x3635f-0x363c0 rank=26 name=fcn.0003635f kind=r2_discovered bytes=97 uncovered=97
 *   0x44cae-0x44d0f rank=27 name=fcn.00044cae kind=r2_discovered bytes=97 uncovered=97
 *   0x1aebf9-0x1aec5a rank=28 name=fcn.001aebf9 kind=r2_discovered bytes=97 uncovered=97
 *   0x4c2b30-0x4c2b91 rank=29 name=fcn.004c2b30 kind=r2_discovered bytes=97 uncovered=97
 *   0x4c8580-0x4c85e1 rank=30 name=fcn.004c8580 kind=r2_discovered bytes=97 uncovered=97
 *   0x4cca30-0x4cca91 rank=31 name=fcn.004cca30 kind=r2_discovered bytes=97 uncovered=97
 *   0x54a000-0x54a061 rank=32 name=fcn.0054a000 kind=r2_discovered bytes=97 uncovered=97
 *   0x56482-0x564e2 rank=33 name=fcn.00056482 kind=r2_discovered bytes=96 uncovered=96
 *   0x57e2d-0x57e8d rank=34 name=fcn.00057e2d kind=r2_discovered bytes=96 uncovered=96
 *   0x4b26c0-0x4b2720 rank=35 name=fcn.004b26c0 kind=r2_discovered bytes=96 uncovered=96
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
void unknown_11c3039(void);
int64_t unknown_2a35274a(void);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_3d2a4ac0(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffff8d401ab3(void);
int64_t unknown_ffffffffc304842d(int64_t value);
int64_t unknown_ffffffffd64cfc2a(int64_t dst, int64_t src);
int64_t unknown_ffffffffe8914fc1(void);
int64_t _ITM_RU1(int64_t src);
int64_t _ZGTtnam(int64_t size);
int64_t _ITM_memcpyRtWn(int64_t dst, int64_t src, int64_t size);
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
struct _IO_FILE *fdopen(int fd, const char *mode);
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
int32_t getwc(struct _IO_FILE *stream);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_once(int32_t *once_control, void (*init_routine)(void));
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int sem_init(int64_t *sem, int pshared, unsigned int value);
int sem_destroy(int64_t *sem);
int fcntl(int fd, int cmd, ...);
int writev(int fd, const struct iovec *iov, int iovcnt);
int epoll_create(int size);
int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event);
int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);
int close(int fd);
int ioctl(int fd, unsigned long request, ...);
int poll(struct pollfd *fds, unsigned long nfds, int timeout);
int gettimeofday(struct timeval *tv, void *tz);
int clock_gettime(int clk_id, struct timespec *tp);
int64_t sysconf(int name);
int64_t syscall(int64_t number, ...);
int mprotect(void *addr, size_t len, int prot);
int munmap(void *addr, size_t len);
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
int64_t _Unwind_DeleteException(int64_t exception);
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_1aebd8();
int64_t function_1aebf9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ff50();
int64_t function_20550();
int64_t function_21b76();
int64_t function_21fba();
int64_t function_2527b(void);
int64_t function_2608e();
int64_t function_261a4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_27a38();
int64_t function_3635f(void);
int64_t function_44bea();
int64_t function_44cae(int64_t a1);
int64_t function_4909e4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b1680();
int64_t function_4b1900();
int64_t function_4b1fc0();
int64_t function_4b26c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c1d60();
int64_t function_4c1df0();
int64_t function_4c1e70();
int64_t function_4c28f0();
int64_t function_4c2a20();
int64_t function_4c2b30(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c6890();
int64_t function_4c6920();
int64_t function_4c69a0();
int64_t function_4c8320();
int64_t function_4c8450();
int64_t function_4c8580(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4cb410();
int64_t function_4cb4a0();
int64_t function_4cb520();
int64_t function_4cc7d0();
int64_t function_4cc900();
int64_t function_4cca30(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4eef40();
int64_t function_4efd30();
int64_t function_4f7430();
int64_t function_4fc010();
int64_t function_543470(int64_t a1);
int64_t function_5459a0(int64_t a1);
int64_t function_54a000(int64_t a1, int64_t a2, int64_t a3);
int64_t function_56004(int64_t a1, int64_t a2);
int64_t function_560a6();
int64_t function_5610a();
int64_t function_56274();
int64_t function_56482(int64_t a1, int64_t a2);
int64_t function_57e2d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_583640();
int64_t function_729a0();

// Address range: 0x2527b - 0x252dc
int64_t function_2527b(void) {
    // 0x2527b
    if (*(char *)&g7 != 0) {
        // 0x252cb
        return (int64_t)&g6;
    }
    // 0x25285
    if ((int32_t)function_20550(&g7) != 0) {
        // 0x25299
        function_21b76(&g6);
        function_1ff50(&g7);
        __cxa_atexit((void (*)(int64_t *))0x2523a, &g6, (int64_t *)0x849800);
    }
    // 0x252cb
    return (int64_t)&g6;
}

// Address range: 0x261a4 - 0x26206
int64_t function_261a4(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_2608e(a2, a1); // 0x261bd
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x261c2
    int64_t v3 = function_2608e(a3, a1); // 0x261cf
    uint64_t v4 = *v2 - v1 >> 3; // 0x261d8
    uint64_t v5 = *v2 - v3 >> 3; // 0x261e2
    int64_t result; // 0x261a4
    if (v4 == v5) {
        // 0x261f0
        result = function_27a38(a2, a3) < 0;
    } else {
        // 0x261eb
        result = v5 & -256 | (int64_t)(v4 > v5);
    }
    // 0x261fe
    return result;
}

// Address range: 0x3635f - 0x363c0
int64_t function_3635f(void) {
    // 0x3635f
    if (*(char *)&g9 != 0) {
        // 0x363af
        return (int64_t)&g8;
    }
    // 0x36369
    if ((int32_t)function_20550(&g9) != 0) {
        // 0x3637d
        function_21fba(&g8);
        function_1ff50(&g9);
        __cxa_atexit((void (*)(int64_t *))0x25362, &g8, &g5);
    }
    // 0x363af
    return (int64_t)&g8;
}

// Address range: 0x44cae - 0x44d0f
int64_t function_44cae(int64_t a1) {
    // 0x44cae
    int64_t v1; // 0x44cae
    while (true) {
        // 0x44cc2
        function_44bea(a1 + (int64_t)&g11);
        int64_t v2 = a1 + (int64_t)&g10; // 0x44cce
        v1 = 0;
        while ((char)function_729a0(v2) == 0) {
            // 0x44cdf
            v2 += 40;
            if (v1 == 7) {
                // break -> 0x44cec
                break;
            }
            v1++;
        }
        return a1 + 8 + 416 * v1;
    }
    // 0x44cfb
    return a1 + 8 + 416 * v1;
}

// Address range: 0x56004 - 0x56066
int64_t function_56004(int64_t a1, int64_t a2) {
    // 0x56004
    function_4fc010(a1 + 256, 0);
    function_4f7430(a1, -*(int64_t *)(a1 + 568), 1);
    int64_t result = 0; // 0x5603e
    if ((*(char *)(a1 + 288) & 5) == 0) {
        int64_t * v1 = (int64_t *)(a1 + (int64_t)&g3); // 0x56040
        int64_t v2 = *v1; // 0x56040
        *v1 = 0;
        int64_t * v3 = (int64_t *)(a1 + (int64_t)&g1); // 0x56052
        *v3 = *v3 - v2;
        int64_t * v4 = (int64_t *)(a1 + (int64_t)&g2); // 0x56059
        *v4 = *v4 + v2;
        result = v2 & -256 | 1;
    }
    // 0x56062
    return result;
}

// Address range: 0x56482 - 0x564e2
int64_t function_56482(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + (int64_t)&g3); // 0x56483
    int64_t v2 = *(int64_t *)(a2 + (int64_t)&g1); // 0x5648d
    int64_t v3 = *(int64_t *)(a2 + (int64_t)&g2); // 0x56497
    *(int64_t *)(a1 + (int64_t)&g3) = 0;
    *(int64_t *)(a1 + (int64_t)&g1) = v2 - v1;
    *(int64_t *)(a1 + (int64_t)&g2) = v3 + v1;
    if ((char)function_56274() == 0) {
        int64_t result = 0;
        *(char *)(a1 + (int64_t)&g4) = (char)result;
        return result;
    }
    int64_t result2 = 0; // 0x564d0
    if ((char)function_560a6(a1, 0) != 0) {
        // 0x564d2
        result2 = function_5610a(a1);
    }
    // 0x564da
    *(char *)(a1 + (int64_t)&g4) = (char)result2;
    return result2;
}

// Address range: 0x57e2d - 0x57e8d
int64_t function_57e2d(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x57e3c
    int64_t v2 = function_583640(); // 0x57e4f
    int64_t v3 = v2; // 0x57e58
    int64_t v4 = 0; // 0x57e58
    if ((int32_t)v2 == 0) {
        // 0x57e5a
        int32_t v5; // 0x57e2d
        uint32_t v6 = v5 & (int32_t)&g12; // 0x57e5e
        v3 = v6;
        v4 = v6 == (int32_t)"le";
    }
    int64_t result = v3 & -256 | v4; // 0x57e7e
    if (v1 != __readfsqword(40)) {
        // 0x57e80
        __stack_chk_fail();
        result = (int64_t)&g13;
    }
    // 0x57e85
    return result;
}

// Address range: 0x1aebf9 - 0x1aec2e
int64_t function_1aebf9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1aebf9
    int64_t v1; // 0x1aebf9
    int64_t v2 = v1;
    bool v3; // 0x1aebf9
    int64_t v4 = ((v2 - (v3 ? 233 : 232)) % 256 | v2 & 0xffffff00) + v1 & 0xffffffff; // 0x1aebff
    if ((int32_t)(v1 ^ a4) != 0) {
        v4 = function_1aebd8();
    }
    int64_t v5 = v4 + 0x17edb2ec; // 0x1aec05
    int32_t * v6 = (int32_t *)(a4 + 0x708f756b + 4 * a3); // 0x1aec0a
    int32_t v7 = v5; // 0x1aec0a
    *v6 = *v6 + v7;
    if (a4 != 1) {
        // 0x1aec84
        return (v3 ? 0xfffffffc : 4) + a1 & 0xffffffff;
    }
    int32_t * v8 = (int32_t *)(v1 + 46); // 0x1aec19
    *v8 = *v8 + v7;
    unknown_ffffffffc304842d(v5 & 0xffffffff);
    abort();
    // UNREACHABLE
}

// Address range: 0x4909e4 - 0x490a46
int64_t function_4909e4(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 - a2; // 0x4909f0
    int64_t * v2 = (int64_t *)a1; // 0x4909f3
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x4909fa
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x490a02
    *v4 = 0;
    int64_t v5; // 0x4909e4
    int64_t result; // 0x4909e4
    if (v1 == 0) {
        // 0x490a22
        *v2 = 0;
        *v4 = 0;
        v5 = 0;
        result = 0;
    } else {
        int64_t v6 = function_4efd30(v1); // 0x490a14
        int64_t v7 = v6 + v1; // 0x490a22
        *v2 = v6;
        *v4 = v7;
        __asm_rep_movsb_memcpy((char *)v6, (char *)a2, v1);
        v5 = v7;
        result = v6;
    }
    // 0x490a3b
    *v3 = v5;
    return result;
}

// Address range: 0x4b26c0 - 0x4b2720
int64_t function_4b26c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = function_4b1680(a3, 0); // 0x4b26d2
    if ((int32_t)result < 0) {
        // 0x4b2728
        return result;
    }
    int64_t v1 = function_4b1fc0(0, a1, a2, a3); // 0x4b26e6
    if ((int32_t)v1 != 0) {
        // 0x4b271b
        return v1 & 0xffffffff;
    }
    int64_t result2 = function_4b1680(a1, 0); // 0x4b26fd
    while ((int32_t)result2 < 0) {
        int64_t v2 = function_4b1900(a1, a1, a3); // 0x4b270f
        int64_t v3 = v2; // 0x4b2716
        if ((int32_t)v2 != 0) {
            // 0x4b271b
            return v3 & 0xffffffff;
        }
        result2 = function_4b1680(a1, 0);
    }
    // 0x4b2728
    return result2;
}

// Address range: 0x4c2b30 - 0x4c2b91
int64_t function_4c2b30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4c2b30
    int64_t v1; // bp-120, 0x4c2b30
    function_4c1d60(&v1);
    function_4c1e70(&v1);
    function_4c28f0(&v1, a1, a2);
    function_4c2a20(&v1, a3);
    return function_4c1df0(&v1);
}

// Address range: 0x4c8580 - 0x4c85e1
int64_t function_4c8580(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4c8580
    int64_t v1; // bp-120, 0x4c8580
    function_4c6890(&v1);
    function_4c69a0(&v1);
    function_4c8320(&v1, a1, a2);
    function_4c8450(&v1, a3);
    return function_4c6920(&v1);
}

// Address range: 0x4cca30 - 0x4cca91
int64_t function_4cca30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4cca30
    int64_t v1; // bp-120, 0x4cca30
    function_4cb410(&v1);
    function_4cb520(&v1);
    function_4cc7d0(&v1, a1, a2);
    function_4cc900(&v1, a3);
    return function_4cb4a0(&v1);
}

// Address range: 0x543470 - 0x5434d2
int64_t function_543470(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x543470
    int64_t v2 = *v1; // 0x543470
    int64_t result = *(int64_t *)(*(int64_t *)v2 - 24) + v2; // 0x543477
    if ((*(char *)(result + 25) & 32) == 0) {
        // 0x5434ad
        return result;
    }
    int64_t result2 = function_4eef40(); // 0x54348d
    if ((char)result2 != 0) {
        // 0x5434ad
        return result2;
    }
    int64_t v3 = *(int64_t *)(result + 232); // 0x543496
    if (v3 == 0) {
        // 0x5434ad
        return result2;
    }
    int64_t result3 = *(int64_t *)v3; // 0x5434a2
    if ((int32_t)result3 == -1) {
        // 0x5434c0
        return *(int64_t *)*v1;
    }
    // 0x5434ad
    return result3;
}

// Address range: 0x5459a0 - 0x545a02
int64_t function_5459a0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x5459a0
    int64_t v2 = *v1; // 0x5459a0
    int64_t result = *(int64_t *)(*(int64_t *)v2 - 24) + v2; // 0x5459a7
    if ((*(char *)(result + 25) & 32) == 0) {
        // 0x5459dd
        return result;
    }
    int64_t result2 = function_4eef40(); // 0x5459bd
    if ((char)result2 != 0) {
        // 0x5459dd
        return result2;
    }
    int64_t v3 = *(int64_t *)(result + 232); // 0x5459c6
    if (v3 == 0) {
        // 0x5459dd
        return result2;
    }
    int64_t result3 = *(int64_t *)v3; // 0x5459d2
    if ((int32_t)result3 == -1) {
        // 0x5459f0
        return *(int64_t *)*v1;
    }
    // 0x5459dd
    return result3;
}

// Address range: 0x54a000 - 0x54a05a
int64_t function_54a000(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x54a00c
    int64_t result = *v1; // 0x54a00c
    int64_t n = result - a2 - a3; // 0x54a019
    int64_t v2 = result; // 0x54a01c
    int64_t wstr = a1; // 0x54a01c
    if (a3 != 0 && n != 0) {
        if (n == 1) {
            // 0x54a060
            return result;
        }
        // 0x54a035
        wstr = 4 * a2 + a1;
        wmemmove((int32_t *)wstr, (int32_t *)(4 * (a3 + a2) + a1), (int32_t)n);
        v2 = *v1;
    }
    int64_t result2 = v2 - a3; // 0x54a045
    *v1 = result2;
    *(int32_t *)(4 * result2 + wstr) = 0;
    return result2;
}
