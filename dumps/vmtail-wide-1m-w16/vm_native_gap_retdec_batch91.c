/*
 * Targeted RetDec C for native executable gap queue batch 91.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x497930-0x49796e rank=69 name=fcn.00497930 kind=r2_discovered bytes=62 uncovered=62
 *   0x50fd4-0x5100d rank=150 name=fcn.00050fd4 kind=r2_discovered bytes=57 uncovered=57
 *   0x4b1680-0x4b16be rank=71 name=fcn.004b1680 kind=r2_discovered bytes=62 uncovered=62
 *   0x4b1a40-0x4b1a7e rank=72 name=fcn.004b1a40 kind=r2_discovered bytes=62 uncovered=62
 *   0x4b1a80-0x4b1abe rank=73 name=fcn.004b1a80 kind=r2_discovered bytes=62 uncovered=62
 *   0x4b2680-0x4b26be rank=74 name=fcn.004b2680 kind=r2_discovered bytes=62 uncovered=62
 *   0x4b73d0-0x4b740e rank=75 name=fcn.004b73d0 kind=r2_discovered bytes=62 uncovered=62
 *   0x4b7450-0x4b748e rank=76 name=fcn.004b7450 kind=r2_discovered bytes=62 uncovered=62
 *   0x519810-0x519885 rank=77 name=fcn.00519810 kind=r2_discovered bytes=117 uncovered=62
 *   0x51a0ed-0x51a12b rank=78 name=fcn.0051a0ed kind=r2_discovered bytes=62 uncovered=62
 *   0x4aa62-0x4aa9f rank=79 name=fcn.0004aa62 kind=r2_discovered bytes=61 uncovered=61
 *   0x4519a6-0x4519e3 rank=80 name=fcn.004519a6 kind=r2_discovered bytes=61 uncovered=61
 *   0x4eeb60-0x4eeb9d rank=81 name=fcn.004eeb60 kind=r2_discovered bytes=61 uncovered=61
 *   0x4f50c0-0x4f50fd rank=82 name=fcn.004f50c0 kind=r2_discovered bytes=61 uncovered=61
 *   0x4f5150-0x4f518d rank=83 name=fcn.004f5150 kind=r2_discovered bytes=61 uncovered=61
 *   0x50cd00-0x50cd3d rank=84 name=fcn.0050cd00 kind=r2_discovered bytes=61 uncovered=61
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
uint32_t __readgsdword(int64_t offset);
int64_t __asm_iretd(void);
int64_t __asm_sti(int64_t value, int64_t flags);
int64_t unknown_34e4aca1(int64_t value);
void unknown_11c3039(void);
int64_t unknown_2a35274a(void);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_3d2a4ac0(void);
int64_t unknown_3f58ba8f(void);
int64_t unknown_2f0fdc0b(void);
int64_t unknown_38ae20ec(void);
int64_t unknown_401c0cfa(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffffba4fa1e3(void);
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
int64_t _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(int64_t value);
int64_t unknown_166c28d(void);
int128_t __asm_movsd(int64_t value);
int128_t __asm_movsd_133(int64_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
void __asm_movq(int64_t value, int128_t dst);
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
struct _IO_FILE *fopen64(const char *path, const char *mode);
struct _IO_FILE *fdopen(int fd, const char *mode);
size_t fread(void *ptr, size_t size, size_t nmemb, struct _IO_FILE *stream);
int32_t read(int fd, void *buf, size_t count);
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
int32_t putwc(int32_t wc, struct _IO_FILE *stream);
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
void *mmap(void *addr, size_t len, int prot, int flags, int fd, int64_t offset);
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
int64_t _Unwind_GetDataRelBase(int64_t context);
int64_t _Unwind_GetRegionStart();
int64_t _Unwind_RaiseException(int64_t exception);
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_451956();
int64_t function_4519a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_497930(int64_t a1);
int64_t function_4aa62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4ab380();
int64_t function_4b1590();
int64_t function_4b1680(int64_t a1, int64_t a2);
int64_t function_4b1900();
int64_t function_4b19a0();
int64_t function_4b1a40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b1a80(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b1fc0();
int64_t function_4b2680(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b71f0();
int64_t function_4b7290();
int64_t function_4b73d0(int64_t a1, int64_t a2);
int64_t function_4b7450(int64_t a1, int64_t a2);
int64_t function_4eea30();
int64_t function_4eeb60(int64_t a1);
int64_t function_4f50c0(int64_t a1);
int64_t function_4f5150(int64_t a1);
int64_t function_50cac0();
int64_t function_50cd00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_50f90();
int64_t function_50fd4(int64_t a1, int64_t a2);
int64_t function_519810(int64_t a1, int64_t a2, int64_t result2, int64_t a4);
int64_t function_51a0ed(int64_t a1, int64_t a2);
int64_t function_52768();
int64_t function_54d560();
int64_t function_565970();
int64_t function_5679e0();

// Address range: 0x4aa62 - 0x4aa9f
int64_t function_4aa62(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = *(int64_t *)(8 * a2 + a1); // 0x4aa65
    if (result == 0) {
        // 0x4aa9b
        return 0;
    }
    int16_t v1 = a3;
    int64_t v2 = *(int64_t *)result; // 0x4aa6e
    if (*(int16_t *)(v2 + 8) == v1) {
        // 0x4aa9b
        return result;
    }
    int64_t v3 = v2;
    int64_t v4 = *(int64_t *)v3; // 0x4aa7c
    int64_t result2 = 0; // 0x4aa82
    while (v4 != 0) {
        uint16_t v5 = *(int16_t *)(v4 + 8); // 0x4aa8a
        result2 = 0;
        if ((int64_t)v5 % *(int64_t *)(a1 + 8) != a2) {
            // break -> 0x4aa9b
            break;
        }
        // 0x4aa75
        result2 = v3;
        if (v5 == v1) {
            // break -> 0x4aa9b
            break;
        }
        v3 = v4;
        v4 = *(int64_t *)v3;
        result2 = 0;
    }
    // 0x4aa9b
    return result2;
}

// Address range: 0x50fd4 - 0x5100d
int64_t function_50fd4(int64_t a1, int64_t a2) {
    // 0x50fd4
    if ((char)function_52768() != 0) {
        // 0x50fff
        return function_50f90(a1, 0);
    }
    // 0x50fe1
    if (*(int64_t *)0x848c20 != a1) {
        int32_t * v1 = (int32_t *)(a1 + 16);
        *v1 = *v1 + 1;
    }
    // 0x51007
    return a1 + 24;
}

// Address range: 0x4519a6 - 0x4519c5
int64_t function_4519a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4519a6
    bool v1; // 0x4519a6
    if (v1) {
        // 0x451a03
        int64_t result; // 0x4519a6
        return result;
    }
    // 0x4519ad
    int64_t v2; // 0x4519a6
    char v3 = v2;
    unsigned char v4 = 2 * v3; // 0x4519af
    int64_t result2 = v2 & -256 | (int64_t)v4; // 0x4519b3
    if ((v4 ^ v3) < 0) {
        result2 = function_451956();
    }
    int32_t v5 = *(int32_t *)((a4 & -0x10000 | (int64_t)&g6 | v2 / 256 % 256) + 0x2ae7b241); // 0x4519b5
    uint32_t v6 = (int32_t)v2; // 0x4519bb
    int32_t v7 = v6 + (int32_t)v2; // 0x4519bb
    if (v7 < 1) {
        // 0x451a03
        return result2;
    }
    int64_t result3 = result2; // 0x4519bf
    if (v7 < v6) {
        result3 = function_451956();
    }
    unsigned char v8 = *(char *)(int64_t)(v5 | (int32_t)a2); // 0x4519c1
    int64_t v9 = v1 ? 0xffffffff : 1; // 0x4519c1
    int32_t * v10 = (int32_t *)(2 * result3 + a3); // 0x4519c2
    *v10 = *v10 - (int32_t)(v9 + a1) + (int32_t)(v8 < (char)a1);
    return result3;
}

// Address range: 0x497930 - 0x49796e
int64_t function_497930(int64_t a1) {
    if (a1 == 0) {
        // 0x49796c
        int64_t result; // 0x497930
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 104); // 0x497939
    int64_t v2 = *v1; // 0x497939
    if (v2 != 0) {
        // 0x497942
        function_4ab380(v2);
        free((int64_t *)*v1);
    }
    // 0x497950
    free((int64_t *)*(int64_t *)(a1 + 120));
    int64_t result2 = a1 + 152; // 0x497959
    int64_t v3 = a1; // 0x497959
    *(char *)v3 = 0;
    v3++;
    while (v3 != result2) {
        // 0x497960
        *(char *)v3 = 0;
        v3++;
    }
    // 0x49796c
    return result2;
}

// Address range: 0x4b1680 - 0x4b16be
int64_t function_4b1680(int64_t a1, int64_t a2) {
    // 0x4b1680
    return function_4b1590();
}

// Address range: 0x4b1a40 - 0x4b1a7e
int64_t function_4b1a40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b1a40
    return function_4b1900();
}

// Address range: 0x4b1a80 - 0x4b1abe
int64_t function_4b1a80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b1a80
    return function_4b19a0();
}

// Address range: 0x4b2680 - 0x4b26be
int64_t function_4b2680(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b2680
    return function_4b1fc0();
}

// Address range: 0x4b73d0 - 0x4b740e
int64_t function_4b73d0(int64_t a1, int64_t a2) {
    // 0x4b73d0
    int64_t v1; // bp-392, 0x4b73d0
    function_4b7290(&v1, a1, a2);
    int64_t v2 = (int64_t)&v1; // 0x4b73e8
    *(char *)v2 = 0;
    v2++;
    int64_t v3; // bp-8, 0x4b73d0
    while (v2 != (int64_t)&v3) {
        // 0x4b73f0
        *(char *)v2 = 0;
        v2++;
    }
    // 0x4b7404
    return 0;
}

// Address range: 0x4b7450 - 0x4b748e
int64_t function_4b7450(int64_t a1, int64_t a2) {
    // 0x4b7450
    int64_t v1; // bp-392, 0x4b7450
    function_4b71f0(&v1, a1, a2);
    int64_t v2 = (int64_t)&v1; // 0x4b7468
    *(char *)v2 = 0;
    v2++;
    int64_t v3; // bp-8, 0x4b7450
    while (v2 != (int64_t)&v3) {
        // 0x4b7470
        *(char *)v2 = 0;
        v2++;
    }
    // 0x4b7484
    return 0;
}

// Address range: 0x4eeb60 - 0x4eeb9c
int64_t function_4eeb60(int64_t a1) {
    int64_t * mem = malloc((int32_t)(a1 == 0 ? 1 : a1)); // 0x4eeb78
    int64_t result = (int64_t)mem; // 0x4eeb78
    if (mem != NULL) {
        // 0x4eeb85
        return result;
    }
    int64_t v1 = function_4eea30(); // 0x4eeb90
    return v1 == 0 ? result : v1;
}

// Address range: 0x4f50c0 - 0x4f50fd
int64_t function_4f50c0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x4f50d8
    *v1 = (int64_t)&g1;
    function_5679e0(a1 + 16);
    *v1 = (int64_t)&g4;
    return function_565970(a1);
}

// Address range: 0x4f5150 - 0x4f518d
// From class:    std::codecvt<wchar_t, char, __mbstate_t>
// Type:          constructor
int64_t function_4f5150(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x4f5168
    *v1 = (int64_t)&g2;
    function_5679e0(a1 + 16);
    *v1 = (int64_t)&g3;
    return function_565970(a1);
}

// Address range: 0x50cd00 - 0x50cd3d
int64_t function_50cd00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int32_t * v1 = (int32_t *)a8; // 0x50cd1b
    int32_t v2 = *v1; // 0x50cd1b
    int64_t v3; // 0x50cd00
    int64_t result = function_50cac0(a6, a4 & 0xffffffff, a2, a3, a7, 4 * (int64_t)v2 + a7, v3, v3) - a6 >> 2; // 0x50cd30
    *v1 = (int32_t)result;
    return result;
}

// Address range: 0x519810 - 0x519885
int64_t function_519810(int64_t a1, int64_t a2, int64_t result2, int64_t a4) {
    int64_t v1 = a1 + 56; // 0x519819
    switch (*(char *)v1) {
        case 0: {
            // 0x519850
            function_54d560();
            int64_t result = *(int64_t *)v1; // 0x51986a
            if (result != g5) {
                // 0x519877
                return result;
            }
        }
        case 1: {
          lab_0x519838:
            // 0x519838
            memcpy((int64_t *)a4, (int64_t *)a2, (int32_t)(result2 - a2));
            return result2;
        }
        default: {
            int64_t result3 = *(int64_t *)v1; // 0x51982b
            if (result3 != g5) {
                // 0x519877
                return result3;
            }
            // branch (via goto) -> 0x519838
            goto lab_0x519838;
        }
    }
}

// Address range: 0x51a0ed - 0x51a12b
int64_t function_51a0ed(int64_t a1, int64_t a2) {
    // 0x51a0ed
    int64_t v1; // 0x51a0ed
    uint32_t result = (int32_t)v1 + 0x32ebce; // 0x51a0ed
    if (result != 0) {
        // 0x51a110
        if (__readfsqword(40) == a2) {
            // 0x51a120
            return result;
        }
    } else {
        // 0x51a0f4
        if (__readfsqword(40) == a2) {
            // 0x51a10b
            return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 92);
        }
    }
    // 0x51a126
    __stack_chk_fail();
    return (int64_t)&g7;
}
