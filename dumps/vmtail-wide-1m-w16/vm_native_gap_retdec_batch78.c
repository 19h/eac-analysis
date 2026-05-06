/*
 * Targeted RetDec C for native executable gap queue batch 78.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4c4360-0x4c43b0 rank=21 name=fcn.004c4360 kind=r2_discovered bytes=80 uncovered=80
 *   0x4eeda0-0x4eedf0 rank=22 name=sym.__cxa_guard_release kind=symbol_named bytes=80 uncovered=80
 *   0x50b6e0-0x50b730 rank=23 name=fcn.0050b6e0 kind=r2_discovered bytes=80 uncovered=80
 *   0x50bd90-0x50bde0 rank=24 name=fcn.0050bd90 kind=r2_discovered bytes=80 uncovered=80
 *   0x5554b0-0x555500 rank=25 name=fcn.005554b0 kind=r2_discovered bytes=80 uncovered=80
 *   0x555910-0x555960 rank=26 name=fcn.00555910 kind=r2_discovered bytes=80 uncovered=80
 *   0x555960-0x5559b0 rank=27 name=fcn.00555960 kind=r2_discovered bytes=80 uncovered=80
 *   0x5559b0-0x555a00 rank=28 name=fcn.005559b0 kind=r2_discovered bytes=80 uncovered=80
 *   0x555f90-0x555fe0 rank=29 name=fcn.00555f90 kind=r2_discovered bytes=80 uncovered=80
 *   0x2a25c-0x2a2ab rank=30 name=fcn.0002a25c kind=r2_discovered bytes=79 uncovered=79
 *   0x36916-0x36965 rank=31 name=fcn.00036916 kind=r2_discovered bytes=79 uncovered=79
 *   0x50a92-0x50ae1 rank=32 name=fcn.00050a92 kind=r2_discovered bytes=79 uncovered=79
 *   0x70fba-0x71009 rank=33 name=fcn.00070fba kind=r2_discovered bytes=79 uncovered=79
 *   0x27a38-0x27a86 rank=34 name=fcn.00027a38 kind=r2_discovered bytes=78 uncovered=78
 *   0x57dda-0x57e28 rank=35 name=fcn.00057dda kind=r2_discovered bytes=78 uncovered=78
 *   0x497750-0x49779e rank=36 name=fcn.00497750 kind=r2_discovered bytes=78 uncovered=78
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
#define PTHREAD_MUTEX_RECURSIVE 1
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
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3(void);
int32_t __asm_in(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_insb(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
int64_t __asm_iretd(void);
int64_t __asm_sti(int64_t value, int64_t flags);
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
int64_t unknown_166c28d(void);
int128_t __asm_movsd(int64_t value);
int128_t __asm_movsd_133(int64_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
int128_t __asm_aesimc(int128_t value);
int128_t __asm_aeskeygenassist(int128_t value, int imm);
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
int128_t __asm_movapd(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pshufd(int128_t value, int imm);
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
int32_t __towlower_l(int32_t wc, struct __locale_struct *locale);
int32_t __towupper_l(int32_t wc, struct __locale_struct *locale);
int vswprintf(int32_t *wcs, size_t maxlen, const int32_t *format, int64_t ap);
int32_t *wmemchr(const int32_t *s, int32_t c, size_t n);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int32_t getwc(struct _IO_FILE *stream);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_mutex_init(void *mutex, void *attr);
int pthread_mutexattr_init(void *attr);
int pthread_mutexattr_settype(void *attr, int type);
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_once(int32_t *once_control, void (*init_routine)(void));
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int pthread_cond_broadcast(void *cond);
int sem_init(int64_t *sem, int pshared, unsigned int value);
int sem_wait(int64_t *sem);
int sem_destroy(int64_t *sem);
int fcntl(int fd, int cmd, ...);
int32_t write(int fd, const void *buf, size_t nbyte);
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
struct tm *gmtime_r(const time_t *timep, struct tm *result);
struct _Unwind_Exception;
int64_t _Unwind_DeleteException(int64_t exception);
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_20110();
int64_t function_20730();
int64_t function_2508e();
int64_t function_2562c();
int64_t function_27a38(int64_t str, int64_t str2);
int64_t function_29c3a();
int64_t function_2a25c(int64_t a1, int64_t a2);
int64_t function_36916(int64_t a1, int64_t a2);
int64_t function_497750(int64_t a1);
int64_t function_4b4ef0();
int64_t function_4c16b0();
int64_t function_4c4360(int64_t a1, int64_t a2);
int64_t function_4eeb50();
int64_t function_50a92(int64_t a1, int64_t a2);
int64_t function_50b6e0(int64_t a1);
int64_t function_50bd90(int64_t a1);
int64_t function_5248a();
int64_t function_5423f0();
int64_t function_5554b0(int64_t a1);
int64_t function_555910(int64_t a1);
int64_t function_555f90(int64_t a1);
int64_t function_566390();
int64_t function_57dda(int64_t a1);
int64_t function_583640();
int64_t function_70f00();
int64_t function_70fba(int64_t a1, int64_t a2);

// Address range: 0x27a38 - 0x27a86
int64_t function_27a38(int64_t str, int64_t str2) {
    uint64_t v1 = *(int64_t *)(str - 24); // 0x27a44
    uint64_t v2 = *(int64_t *)(str2 - 24); // 0x27a48
    int64_t n = v1 < v2 ? v1 : v2; // 0x27a52
    if (n != 0) {
        int32_t memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n); // 0x27a5b
        if (memcmp_rc != 0) {
            // 0x27a82
            return memcmp_rc;
        }
    }
    uint64_t v3 = v1 - v2; // 0x27a64
    int64_t result = 0x7fffffff; // 0x27a73
    if (v3 <= 0x7fffffff) {
        int64_t v4 = v3 + 0x80000000; // 0x27a78
        result = v4 < 0 == ((v4 ^ v3) & (v3 ^ -0x8000000000000000)) < 0 ? v3 & 0xffffffff : 0x80000000;
    }
    // 0x27a82
    return result;
}

// Address range: 0x2a25c - 0x2a2ab
int64_t function_2a25c(int64_t a1, int64_t a2) {
    // 0x2a25c
    int64_t result; // 0x2a25c
    if (a2 == 0) {
        // 0x2a2a3
        return result;
    }
    // 0x2a25c
    function_2a25c(a1, *(int64_t *)(a2 + 24));
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x2a285
    function_2508e(a2 + 40);
    function_2508e(a2 + 32);
    function_4eeb50(a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        function_2a25c(a1, *(int64_t *)(v2 + 24));
        v1 = *(int64_t *)(v2 + 16);
        function_2508e(v2 + 40);
        function_2508e(v2 + 32);
        function_4eeb50(v2);
    }
    // 0x2a2a3
    return result;
}

// Address range: 0x36916 - 0x36965
int64_t function_36916(int64_t a1, int64_t a2) {
    // 0x36916
    int64_t result; // 0x36916
    if (a2 == 0) {
        // 0x3695d
        return result;
    }
    // 0x36916
    function_36916(a1, *(int64_t *)(a2 + 24));
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x3693f
    function_29c3a(a2 + 48);
    function_29c3a(a2 + 40);
    function_4eeb50(a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        function_36916(a1, *(int64_t *)(v2 + 24));
        v1 = *(int64_t *)(v2 + 16);
        function_29c3a(v2 + 48);
        function_29c3a(v2 + 40);
        function_4eeb50(v2);
    }
    // 0x3695d
    return result;
}

// Address range: 0x50a92 - 0x50ae1
int64_t function_50a92(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x50a9f
    int64_t v2 = function_5248a(); // 0x50aaf
    int64_t v3 = 0; // 0x50abc
    if (v2 != 0) {
        // 0x50abe
        v3 = *(int32_t *)(v2 + 12) != 29;
    }
    int64_t result = v3 | v2 & -256; // 0x50ad5
    if (v1 != __readfsqword(40)) {
        // 0x50ad7
        __stack_chk_fail();
        result = (int64_t)&g12;
    }
    // 0x50adc
    return result;
}

// Address range: 0x57dda - 0x57e28
int64_t function_57dda(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x57de1
    int64_t v2 = 0; // 0x57df7
    if (a1 != 0) {
        int64_t v3 = function_583640(); // 0x57dfe
        v2 = v3 & -256 | (int64_t)((int32_t)v3 == 0);
    }
    int64_t result = v2; // 0x57e19
    if (v1 != __readfsqword(40)) {
        // 0x57e1b
        __stack_chk_fail();
        result = (int64_t)&g12;
    }
    // 0x57e20
    return result;
}

// Address range: 0x70fba - 0x71009
int64_t function_70fba(int64_t a1, int64_t a2) {
    // 0x70fba
    if (a2 == a1) {
        // 0x71001
        return (int64_t)&g6;
    }
    int64_t v1 = a2 - a1; // 0x70fcb
    int64_t result = function_70f00(v1, 0) + 24; // 0x70fd6
    int64_t v2 = 0;
    *(char *)(v2 + result) = *(char *)(v2 + a1);
    int64_t v3 = v2 + 1; // 0x70fe7
    while (v3 != v1) {
        // 0x70fdf
        v2 = v3;
        *(char *)(v2 + result) = *(char *)(v2 + a1);
        v3 = v2 + 1;
    }
    // 0x70fef
    function_2562c();
    // 0x71001
    return result;
}

// Address range: 0x497750 - 0x49779e
int64_t function_497750(int64_t a1) {
    if (a1 == 0) {
        // 0x49779c
        int64_t result; // 0x497750
        return result;
    }
    // 0x497759
    function_4b4ef0(a1 + 128);
    function_4b4ef0(a1 + 216);
    function_4c16b0(a1 + 80);
    function_4c16b0(a1 + 104);
    int64_t result2 = a1 + 304; // 0x497783
    int64_t v1 = a1; // 0x49778a
    *(char *)v1 = 0;
    v1++;
    while (v1 != result2) {
        // 0x497790
        *(char *)v1 = 0;
        v1++;
    }
    // 0x49779c
    return result2;
}

// Address range: 0x4c4360 - 0x4c43b0
int64_t function_4c4360(int64_t a1, int64_t a2) {
    // 0x4c4360
    return 0xffffc180;
}

// Address range: 0x4eeda0 - 0x4eeded
int64_t __cxa_guard_release(int64_t a1) {
    int64_t result = __readfsqword(40); // 0x4eeda4
    if (g3 == 0) {
        // 0x4eede8
        return 0;
    }
    // 0x4eedbe
    *(int32_t *)a1 = 1;
    if (((int32_t)a1 & (int32_t)&g1) != 0) {
        // 0x4eede8
        return result;
    }
    // 0x4eedcc
    return __readfsqword(40) ^ result;
}

// Address range: 0x50b6e0 - 0x50b730
int64_t function_50b6e0(int64_t a1) {
    uint64_t v1 = function_566390(&g4); // 0x50b6eb
    if (*(int64_t *)((int64_t)&g4 + 16) <= v1) {
        // 0x50b722
        function_5423f0();
        // 0x50b727
        return function_20110();
    }
    int64_t v2 = *(int64_t *)((int64_t)&g4 + 8); // 0x50b6f7
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x50b6fd
    if (v3 == 0) {
        // 0x50b722
        function_5423f0();
        // 0x50b727
        return function_20110();
    }
    int64_t result = function_20730(v3, &g2, 0x844258, 0); // 0x50b716
    if (result == 0) {
        // 0x50b727
        return function_20110();
    }
    // 0x50b720
    return result;
}

// Address range: 0x50bd90 - 0x50bde0
int64_t function_50bd90(int64_t a1) {
    uint64_t v1 = function_566390(&g5); // 0x50bd9b
    if (*(int64_t *)((int64_t)&g5 + 16) <= v1) {
        // 0x50bdd2
        function_5423f0();
        // 0x50bdd7
        return function_20110();
    }
    int64_t v2 = *(int64_t *)((int64_t)&g5 + 8); // 0x50bda7
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x50bdad
    if (v3 == 0) {
        // 0x50bdd2
        function_5423f0();
        // 0x50bdd7
        return function_20110();
    }
    int64_t result = function_20730(v3, &g2, 0x8442d8, 0); // 0x50bdc6
    if (result == 0) {
        // 0x50bdd7
        return function_20110();
    }
    // 0x50bdd0
    return result;
}

// Address range: 0x5554b0 - 0x555500
int64_t function_5554b0(int64_t a1) {
    uint64_t v1 = function_566390(&g9); // 0x5554bb
    if (*(int64_t *)((int64_t)&g9 + 16) <= v1) {
        // 0x5554f2
        function_5423f0();
        // 0x5554f7
        return function_20110();
    }
    int64_t v2 = *(int64_t *)((int64_t)&g9 + 8); // 0x5554c7
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x5554cd
    if (v3 == 0) {
        // 0x5554f2
        function_5423f0();
        // 0x5554f7
        return function_20110();
    }
    int64_t result = function_20730(v3, &g2, 0x8467c0, 0); // 0x5554e6
    if (result == 0) {
        // 0x5554f7
        return function_20110();
    }
    // 0x5554f0
    return result;
}

// Address range: 0x555910 - 0x555a00
int64_t function_555910(int64_t a1) {
    uint64_t v1 = function_566390(&g7); // 0x55591b
    int64_t v2 = (int64_t)&g7; // 0x55592b
    int64_t v3; // 0x555910
    if (*(int64_t *)((int64_t)&g7 + 16) > v1) {
        int64_t v4 = *(int64_t *)((int64_t)&g7 + 8); // 0x555927
        int64_t v5 = *(int64_t *)(v4 + 8 * v1); // 0x55592d
        v2 = 0;
        if (v5 == 0) {
            goto lab_0x555952;
        } else {
            int64_t result = function_20730(v5, &g2, 0x846808, 0); // 0x555946
            v3 = v5;
            if (result != 0) {
                // 0x555950
                return result;
            }
            goto lab_0x555957;
        }
    } else {
        goto lab_0x555952;
    }
  lab_0x555952:
    // 0x555952
    function_5423f0();
    v3 = v2;
    goto lab_0x555957;
  lab_0x555957:
    // 0x555957
    function_20110();
    uint64_t v6 = function_566390(&g8); // 0x55596b
    int64_t v7 = *(int64_t *)v3; // 0x555970
    int64_t v8 = (int64_t)&g8; // 0x55597b
    int64_t v9; // 0x555910
    if (*(int64_t *)(v7 + 16) > v6) {
        int64_t v10 = *(int64_t *)(*(int64_t *)(v7 + 8) + 8 * v6); // 0x55597d
        v8 = 0;
        if (v10 == 0) {
            goto lab_0x5559a2;
        } else {
            int64_t result2 = function_20730(v10, &g2, 0x8467f0, 0); // 0x555996
            v9 = v10;
            if (result2 != 0) {
                // 0x555950
                return result2;
            }
            goto lab_0x5559a7;
        }
    } else {
        goto lab_0x5559a2;
    }
  lab_0x5559a2:
    // 0x5559a2
    function_5423f0();
    v9 = v8;
    goto lab_0x5559a7;
  lab_0x5559a7:
    // 0x5559a7
    function_20110();
    uint64_t v11 = function_566390(&g10); // 0x5559bb
    int64_t v12 = *(int64_t *)v9; // 0x5559c0
    if (*(int64_t *)(v12 + 16) <= v11) {
        // 0x5559f2
        function_5423f0();
        // 0x5559f7
        return function_20110();
    }
    int64_t v13 = *(int64_t *)(*(int64_t *)(v12 + 8) + 8 * v11); // 0x5559cd
    if (v13 == 0) {
        // 0x5559f2
        function_5423f0();
        // 0x5559f7
        return function_20110();
    }
    int64_t result3 = function_20730(v13, &g2, 0x846850, 0); // 0x5559e6
    if (result3 == 0) {
        // 0x5559f7
        return function_20110();
    }
    // 0x555950
    return result3;
}

// Address range: 0x555f90 - 0x555fe0
int64_t function_555f90(int64_t a1) {
    uint64_t v1 = function_566390(&g11); // 0x555f9b
    if (*(int64_t *)((int64_t)&g11 + 16) <= v1) {
        // 0x555fd2
        function_5423f0();
        // 0x555fd7
        return function_20110();
    }
    int64_t v2 = *(int64_t *)((int64_t)&g11 + 8); // 0x555fa7
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x555fad
    if (v3 == 0) {
        // 0x555fd2
        function_5423f0();
        // 0x555fd7
        return function_20110();
    }
    int64_t result = function_20730(v3, &g2, 0x846888, 0); // 0x555fc6
    if (result == 0) {
        // 0x555fd7
        return function_20110();
    }
    // 0x555fd0
    return result;
}
