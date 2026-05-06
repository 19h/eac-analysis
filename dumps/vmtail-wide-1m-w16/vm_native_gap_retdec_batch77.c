/*
 * Targeted RetDec C for native executable gap queue batch 77.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4ac4b0-0x4ac502 rank=21 name=fcn.004ac4b0 kind=r2_discovered bytes=82 uncovered=82
 *   0x4f0ae0-0x4f0b32 rank=22 name=fcn.004f0ae0 kind=r2_discovered bytes=82 uncovered=82
 *   0x54e460-0x54e4b2 rank=23 name=fcn.0054e460 kind=r2_discovered bytes=82 uncovered=82
 *   0x56e790-0x56e7e2 rank=24 name=fcn.0056e790 kind=r2_discovered bytes=82 uncovered=82
 *   0x56e880-0x56e8d2 rank=25 name=fcn.0056e880 kind=r2_discovered bytes=82 uncovered=82
 *   0x57ca40-0x57ca92 rank=26 name=fcn.0057ca40 kind=r2_discovered bytes=82 uncovered=82
 *   0x2a73a-0x2a78b rank=27 name=fcn.0002a73a kind=r2_discovered bytes=81 uncovered=81
 *   0x475de-0x4762f rank=28 name=fcn.000475de kind=r2_discovered bytes=81 uncovered=81
 *   0x7368a-0x736db rank=29 name=fcn.0007368a kind=r2_discovered bytes=81 uncovered=81
 *   0x29c26e-0x29c2bf rank=30 name=fcn.0029c26e kind=r2_discovered bytes=81 uncovered=81
 *   0x4b0080-0x4b00d1 rank=31 name=fcn.004b0080 kind=r2_discovered bytes=81 uncovered=81
 *   0x579d20-0x579d71 rank=32 name=fcn.00579d20 kind=r2_discovered bytes=81 uncovered=81
 *   0x256ba-0x2570a rank=33 name=fcn.000256ba kind=r2_discovered bytes=80 uncovered=80
 *   0x4e156-0x4e1a6 rank=34 name=fcn.0004e156 kind=r2_discovered bytes=80 uncovered=80
 *   0x490604-0x490654 rank=35 name=fcn.00490604 kind=r2_discovered bytes=80 uncovered=80
 *   0x4a9850-0x4a98a0 rank=36 name=fcn.004a9850 kind=r2_discovered bytes=80 uncovered=80
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
int pthread_once(int32_t *once_control, ...);
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

int64_t function_2263e();
int64_t function_24e1e();
int64_t function_250b0();
int64_t function_255da();
int64_t function_256ba(int64_t a1, int64_t a2);
int64_t function_2570a();
int64_t function_286ac();
int64_t function_29c26e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2a73a(void);
int64_t function_2ce9a();
int64_t function_475de(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_490604(int64_t a1);
int64_t function_4a9850(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ac4b0(int64_t a1, int64_t a2);
int64_t function_4afe70();
int64_t function_4b0080(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4c4700();
int64_t function_4ded4();
int64_t function_4e156(int64_t a1, int64_t a2);
int64_t function_4e1a6();
int64_t function_4f0a20();
int64_t function_4f0ae0(void);
int64_t function_4f0af0(void);
int64_t function_54e460(int64_t a1, uint64_t a2);
int64_t function_56e790(int64_t a1);
int64_t function_56e880(int64_t a1);
int64_t function_5797e0();
int64_t function_579850();
int64_t function_579bc0();
int64_t function_579d20(int64_t a1, int64_t result);
int64_t function_57c9c0();
int64_t function_57ca40(int64_t a1);
int64_t function_7368a(int64_t a1, int64_t a2);

// Address range: 0x256ba - 0x2570a
int64_t function_256ba(int64_t a1, int64_t a2) {
    // 0x256ba
    if ((char)function_2570a(a1 - 24) != 0) {
        // 0x256d6
        *(int32_t *)(a1 - 32) = 0;
    }
    int64_t v1 = a2 - 24; // 0x256e4
    if ((char)function_2570a(v1) != 0) {
        // 0x256f5
        *(int32_t *)(a2 - 8) = 0;
    }
    // 0x256fc
    *(int64_t *)a1 = a2;
    *(int64_t *)a2 = v1;
    int64_t result; // 0x256ba
    return result;
}

// Address range: 0x2a73a - 0x2a78b
int64_t function_2a73a(void) {
    if (((uint32_t)(int32_t)&g8 < 1 || (int32_t)&g8 == 1) ^ true) {
        // 0x2a785
        return (int64_t)&g1;
    }
    // 0x2a748
    function_2263e(function_286ac(function_2ce9a()));
    *(int32_t *)&g9 = 0;
    g7 = 0;
    g6 = 0;
    return 0;
}

// Address range: 0x475de - 0x4762f
int64_t function_475de(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_24e1e(); // 0x475e2
    char * v2 = (char *)(a1 + (int64_t)&g2); // 0x475e9
    if (*v2 == 0) {
        // 0x47609
        *v2 = 1;
        *(int64_t *)(a1 + (int64_t)&g3) = v1;
        // 0x4762d
        return 0;
    }
    int64_t * v3 = (int64_t *)(a1 + (int64_t)&g3);
    int64_t v4 = v1 - *v3; // 0x475f5
    uint64_t v5 = (int64_t)((0x8000000000000000 * (int128_t)(v4 >> 63) | (int128_t)v4) / 0xf4240); // 0x47603
    *v2 = 1;
    *v3 = v1;
    int64_t result = 0; // 0x4761c
    if (v5 >= 1) {
        int64_t v6 = v5 - 0xffff; // 0x4761e
        result = v6 == 0 | v6 < 0 != (0xfffe - v5 & v5) < 0 ? v5 & 0xffffffff : 0xffffffff;
    }
    // 0x4762d
    return result;
}

// Address range: 0x4e156 - 0x4e1a6
int64_t function_4e156(int64_t a1, int64_t a2) {
    // 0x4e156
    function_4ded4();
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x4e16a
    int64_t * v2 = (int64_t *)(a1 + 72); // 0x4e16e
    *(int64_t *)(a1 + 64) = a2;
    int64_t result; // 0x4e156
    if (v1 == *v2) {
        // 0x4e1a2
        return result;
    }
    if (v1 != 0) {
        int32_t * v3 = (int32_t *)(v1 + 8);
        *v3 = *v3 + 1;
    }
    int64_t v4 = *v2; // 0x4e190
    if (v4 != 0) {
        // 0x4e199
        function_4e1a6(v4);
    }
    // 0x4e19e
    *v2 = v1;
    // 0x4e1a2
    return result;
}

// Address range: 0x7368a - 0x736db
int64_t function_7368a(int64_t a1, int64_t a2) {
    // 0x7368a
    *(int64_t *)a1 = a2;
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x73697
    *(int64_t *)a2 = (int64_t)&g10;
    *(int64_t *)(a1 + 8) = *v1;
    int64_t * v2 = (int64_t *)(a2 + 16); // 0x736a6
    *v1 = (int64_t)&g10;
    *(int64_t *)(a1 + 16) = *v2;
    int64_t * v3 = (int64_t *)(a2 + 24); // 0x736b2
    *v2 = (int64_t)&g10;
    *(int64_t *)(a1 + 24) = *v3;
    int64_t * v4 = (int64_t *)(a2 + 32); // 0x736be
    *v3 = (int64_t)&g10;
    *(int64_t *)(a1 + 32) = *v4;
    int64_t * v5 = (int64_t *)(a2 + 40); // 0x736ca
    *v4 = (int64_t)&g10;
    *(int64_t *)(a1 + 40) = *v5;
    *v5 = (int64_t)&g10;
    return (int64_t)&g10;
}

// Address range: 0x29c26e - 0x29c2bd
int64_t function_29c26e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = 0x3ea5fa00; // bp-16, 0x29c278
    int32_t * v2 = (int32_t *)(a2 - 0x7753ff98); // 0x29c27d
    *v2 = *v2 ^ 27;
    int64_t v3; // 0x29c26e
    int32_t v4 = *(int32_t *)(v3 + 14); // 0x29c284
    int64_t v5 = unknown_166c28d(); // 0x29c287
    *(int64_t *)((int64_t)(v4 & (int32_t)(int64_t)&v1) - 8) = -0xf901b00;
    char v6 = *(char *)v5; // 0x29c29d
    char v7 = *(char *)&v3; // 0x29c29f
    int64_t v8 = 256 * (int64_t)(v6 | (char)(a3 / 256)) | a3 & -0x10000 | (int64_t)(v7 + (char)a3); // 0x29c29f
    int32_t v9 = *(int32_t *)-0x17970818fec2ff65; // 0x29c2a1
    char v10 = *(char *)(v8 - 48); // 0x29c2aa
    int64_t result = (int64_t)(v10 ^ (char)v9) | (int64_t)(v9 & -256); // 0x29c2aa
    int64_t v11 = v8 + *(int64_t *)result; // 0x29c2ad
    if (a4 != 1 == v11 == 0) {
        // 0x29c2d6
        return result;
    }
    // 0x29c2b2
    return (int64_t)(*(int32_t *)0x3d670200431eb586 + (int32_t)v11);
}

// Address range: 0x490604 - 0x490654
int64_t function_490604(int64_t a1) {
    // 0x490604
    for (int64_t i = 0; i < *(int64_t *)(a1 - 24); i++) {
        // 0x490618
        function_255da(a1);
        char * v1 = (char *)(i + a1); // 0x490623
        if (*v1 >= 65) {
            // 0x490629
            function_255da(a1);
            if (*v1 <= 90) {
                // 0x49063a
                function_255da(a1);
                *v1 = *v1 | 32;
            }
        }
    }
    // 0x490650
    int64_t result; // 0x490604
    return result;
}

// Address range: 0x4a9850 - 0x4a98a0
int64_t function_4a9850(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = 0xffffffff; // 0x4a9879
    switch ((int32_t)a2) {
        case 6: {
        }
        case 1: {
            // 0x4a9898
            return function_4c4700(a3);
        }
        case 4: {
        }
        case 3: {
        }
        case 2: {
            int32_t v1 = *(int32_t *)*(int64_t *)(a3 + 8); // 0x4a9867
            result = (1 << (v1 + 31) % 32 & *(int32_t *)(a1 + 8)) == 0 ? 0xffffffff : 0;
            // break -> 0x4a987b
            break;
        }
    }
    // 0x4a987b
    return result;
}

// Address range: 0x4ac4b0 - 0x4ac4fe
int64_t function_4ac4b0(int64_t a1, int64_t a2) {
    // 0x4ac4b0
    if (0x100000000 * a1 >> 32 > (a2 & 0xffffffff)) {
        // 0x4ac4bd
        return 1;
    }
    // 0x4ac4bb
    if ((int32_t)a1 != (int32_t)a2) {
        // 0x4ac4bd
        return 0;
    }
    uint32_t v1 = *(int32_t *)(a2 + 4); // 0x4ac4c8
    int32_t v2 = *(int32_t *)(a1 + 4); // 0x4ac4cb
    if ((int64_t)v2 > (int64_t)v1) {
        // 0x4ac4bd
        return 1;
    }
    // 0x4ac4d2
    if (v2 != v1) {
        // 0x4ac4bd
        return 0;
    }
    uint32_t v3 = *(int32_t *)(a2 + 8); // 0x4ac4d4
    int32_t v4 = *(int32_t *)(a1 + 8); // 0x4ac4d7
    if ((int64_t)v4 > (int64_t)v3) {
        // 0x4ac4bd
        return 1;
    }
    // 0x4ac4dc
    if (v4 != v3) {
        // 0x4ac4bd
        return 0;
    }
    uint32_t v5 = *(int32_t *)(a2 + 12); // 0x4ac4e2
    int32_t v6 = *(int32_t *)(a1 + 12); // 0x4ac4e5
    if ((int64_t)v6 > (int64_t)v5) {
        // 0x4ac4bd
        return 1;
    }
    // 0x4ac4ea
    if (v6 != v5) {
        // 0x4ac4bd
        return 0;
    }
    uint32_t v7 = *(int32_t *)(a2 + 16); // 0x4ac4ec
    int32_t v8 = *(int32_t *)(a1 + 16); // 0x4ac4ef
    if ((int64_t)v8 > (int64_t)v7) {
        // 0x4ac4bd
        return 1;
    }
    // 0x4ac4f4
    if (v8 != v7) {
        // 0x4ac4bd
        return 0;
    }
    int64_t v9 = (int64_t)*(int32_t *)(a2 + 20); // 0x4ac4f6
    return (int64_t)*(int32_t *)(a1 + 20) > v9 ? v9 : 0;
}

// Address range: 0x4b0080 - 0x4b00d1
int64_t function_4b0080(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t result = function_4afe70(); // 0x4b0091
    if ((int32_t)result != 0) {
        // 0x4b00c3
        return result;
    }
    // 0x4b009a
    *(int64_t *)a3 = a3 - 1;
    int64_t result2 = 0xffffff98; // 0x4b00a8
    if (a3 >= 2) {
        // 0x4b00aa
        *(int64_t *)a1 = a1 + 1;
        result2 = (char)a1 != 0 ? 0xffffff98 : result & 0xffffffff;
    }
    // 0x4b00c3
    return result2;
}

// Address range: 0x4f0ae0 - 0x4f0ae5
int64_t function_4f0ae0(void) {
    // 0x4f0ae0
    return function_4f0a20();
}

// Address range: 0x4f0af0 - 0x4f0af5
int64_t function_4f0af0(void) {
    // 0x4f0af0
    return function_4f0a20();
}

// Address range: 0x54e460 - 0x54e4b2
int64_t function_54e460(int64_t a1, uint64_t a2) {
    // 0x54e460
    if ((a2 & 2) == 0) {
        // 0x54e482
        return 1;
    }
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x54e46e
    if (a2 % 2 != 0) {
        // 0x54e47c
        if (v1 - a1 < 2) {
            // 0x54e482
            return 0;
        }
        // 0x54e4a8
        *(int16_t *)a1 = -257;
        return 0xfeff;
    }
    // 0x54e488
    if (v1 - a1 < 2) {
        // 0x54e482
        return 0;
    }
    // 0x54e48e
    *(int16_t *)a1 = -2;
    *(int64_t *)a1 = a1 + 2;
    return 1;
}

// Address range: 0x56e790 - 0x56e7e2
// From class:    std::logic_error
// Type:          constructor
int64_t function_56e790(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x56e79d
    *(int64_t *)a1 = (int64_t)&g4;
    function_250b0();
    int64_t result = __readfsqword(40) ^ v1; // 0x56e7cb
    if (result == 0) {
        // 0x56e7d6
        return result;
    }
    // 0x56e7dd
    __stack_chk_fail();
    return (int64_t)&g11;
}

// Address range: 0x56e880 - 0x56e8d2
// From class:    std::runtime_error
// Type:          constructor
int64_t function_56e880(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x56e88d
    *(int64_t *)a1 = (int64_t)&g5;
    function_250b0();
    int64_t result = __readfsqword(40) ^ v1; // 0x56e8bb
    if (result == 0) {
        // 0x56e8c6
        return result;
    }
    // 0x56e8cd
    __stack_chk_fail();
    return (int64_t)&g11;
}

// Address range: 0x579d20 - 0x579d71
int64_t function_579d20(int64_t a1, int64_t result) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x579d25
    int64_t v2 = *v1; // 0x579d25
    int64_t * v3 = (int64_t *)(a1 + 72); // 0x579d2c
    int64_t v4 = *v3; // 0x579d2c
    int64_t result2 = result; // 0x579d33
    if (*(char *)v2 != 66) {
        // 0x579d67
        *v3 = v4;
        return result;
    }
    *v1 = v2 + 1;
    result2 = function_5797e0(a1, 75, result2, function_579bc0(a1));
    int64_t v5 = *v1; // 0x579d5e
    while (*(char *)v5 == 66) {
        // 0x579d38
        *v1 = v5 + 1;
        result2 = function_5797e0(a1, 75, result2, function_579bc0(a1));
        v5 = *v1;
    }
    // 0x579d67
    *v3 = v4;
    return result2;
}

// Address range: 0x57ca40 - 0x57ca92
int64_t function_57ca40(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x57ca40
    int64_t result = *v1; // 0x57ca40
    if (*(char *)result != 70) {
        // 0x57ca90
        return result;
    }
    int64_t v2 = result + 1; // 0x57ca49
    *v1 = v2;
    if (*(char *)v2 == 89) {
        // 0x57ca58
        *v1 = result + 2;
    }
    int64_t result2 = function_579850(a1, function_57c9c0()); // 0x57ca73
    int64_t v3 = *v1; // 0x57ca78
    if (*(char *)v3 != 69) {
        // 0x57ca90
        return 0;
    }
    // 0x57ca81
    *v1 = v3 + 1;
    return result2;
}
