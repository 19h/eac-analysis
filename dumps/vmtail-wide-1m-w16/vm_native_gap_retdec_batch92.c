/*
 * Targeted RetDec C for native executable gap queue batch 92.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x540f00-0x540f3d rank=85 name=fcn.00540f00 kind=r2_discovered bytes=61 uncovered=61
 *   0x54d6e0-0x54d71d rank=86 name=fcn.0054d6e0 kind=r2_discovered bytes=61 uncovered=61
 *   0x214b0-0x214ec rank=87 name=entry.init19 kind=native_discovered bytes=60 uncovered=60
 *   0x251e8-0x25224 rank=88 name=fcn.000251e8 kind=r2_discovered bytes=60 uncovered=60
 *   0x29d10-0x29d4c rank=89 name=fcn.00029d10 kind=r2_discovered bytes=60 uncovered=60
 *   0x29d94-0x29dd0 rank=90 name=fcn.00029d94 kind=r2_discovered bytes=60 uncovered=60
 *   0x380a0-0x380dc rank=91 name=fcn.000380a0 kind=r2_discovered bytes=60 uncovered=60
 *   0x5610a-0x56146 rank=92 name=fcn.0005610a kind=r2_discovered bytes=60 uncovered=60
 *   0x61046-0x61082 rank=93 name=fcn.00061046 kind=r2_discovered bytes=60 uncovered=60
 *   0x3a8871-0x3a88ad rank=94 name=fcn.003a8871 kind=r2_discovered bytes=60 uncovered=60
 *   0x52450-0x52489 rank=151 name=fcn.00052450 kind=r2_discovered bytes=57 uncovered=57
 *   0x48d416-0x48d452 rank=96 name=fcn.0048d416 kind=r2_discovered bytes=60 uncovered=60
 *   0x497321-0x49735d rank=97 name=fcn.00497321 kind=r2_discovered bytes=60 uncovered=60
 *   0x72c32-0x72c6b rank=152 name=fcn.00072c32 kind=r2_discovered bytes=57 uncovered=57
 *   0x4ee9e0-0x4eea1c rank=99 name=sym.ZydisGetAccessedFlags kind=symbol_named bytes=60 uncovered=60
 *   0x53e5a0-0x53e5dc rank=100 name=method.std::iostream.virtual_0 kind=native_discovered bytes=60 uncovered=60
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

int64_t function_214b0(void);
int64_t function_24cb0();
int64_t function_251e8(int64_t a1, int64_t a2);
int64_t function_25622();
int64_t function_2562c();
int64_t function_2843e();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_29d10(int64_t a1, int64_t a2);
int64_t function_29d94(int64_t result, int64_t a2);
int64_t function_35fcc();
int64_t function_380a0(int64_t result, int64_t a2);
int64_t function_3a8871(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_48d416(int64_t result, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_497321(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4eeb50();
int64_t function_4f15a0();
int64_t function_4f7430();
int64_t function_4fc010();
int64_t function_5033d0();
int64_t function_52450(int64_t a1);
int64_t function_53e5a0(int64_t a1);
int64_t function_540f00(int64_t a1, int64_t a2, int64_t a3);
int64_t function_54cf10();
int64_t function_54d6e0(int64_t a1, int64_t a2);
int64_t function_5610a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_565f30();
int64_t function_5700a0();
int64_t function_61046(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_7276e();
int64_t function_72994();
int64_t function_72c22();
int64_t function_72c32(int64_t a1);
int64_t function_c9849();

// Address range: 0x214b0 - 0x214ec
int64_t function_214b0(void) {
    // 0x214b0
    __cxa_atexit((void (*)(int64_t *))0x5421e0, (int64_t *)0x84a060, (int64_t *)0x849800);
    int32_t result = __cxa_atexit((void (*)(int64_t *))0x5421b0, (int64_t *)&g11, &g10); // 0x214e7
    return result;
}

// Address range: 0x251e8 - 0x25224
int64_t function_251e8(int64_t a1, int64_t a2) {
    int64_t v1 = function_25622(a1 - 24); // 0x251f3
    int64_t v2 = a1 - 48;
    if ((char)v1 == 0) {
        // 0x25218
        return function_2562c(v2, 0);
    }
    // 0x251ff
    function_24cb0(v2);
    *(int64_t *)a1 = (int64_t)&g12;
    return (int64_t)&g12;
}

// Address range: 0x29d10 - 0x29d4c
int64_t function_29d10(int64_t a1, int64_t a2) {
    int64_t v1 = function_29cea(a1 - 24); // 0x29d1b
    int64_t v2 = a1 - 48;
    if ((char)v1 == 0) {
        // 0x29d40
        return function_29cf4(v2, 0);
    }
    // 0x29d27
    function_2843e(v2);
    *(int64_t *)a1 = (int64_t)&g13;
    return (int64_t)&g13;
}

// Address range: 0x29d94 - 0x29dd0
int64_t function_29d94(int64_t result, int64_t a2) {
    // 0x29d94
    return result;
}

// Address range: 0x380a0 - 0x380dc
int64_t function_380a0(int64_t result, int64_t a2) {
    // 0x380a0
    return result;
}

// Address range: 0x52450 - 0x52489
int64_t function_52450(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x52457
    int64_t v2 = a1; // 0x52461
    int64_t v3 = a1; // 0x52461
    int64_t result; // 0x52450
    if (v1 != a1) {
        int64_t v4 = v2 + 8; // 0x52463
        v2 += 16;
        result = function_35fcc(v4);
        v3 = v4;
        while (v1 != v2) {
            // 0x52463
            v4 = v2 + 8;
            v2 += 16;
            result = function_35fcc(v4);
            v3 = v4;
        }
    }
    // 0x52472
    if (v3 == 0) {
        // 0x52484
        return result;
    }
    // 0x5247b
    return function_4eeb50(v3);
}

// Address range: 0x5610a - 0x56146
int64_t function_5610a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_4f15a0(a1 + 120); // 0x56112
    int64_t result = v1; // 0x56119
    if ((char)v1 != 0) {
        // 0x5611b
        function_4fc010(a1 + 256, 0);
        int64_t v2 = function_4f7430(a1, *(int64_t *)(a1 + (int64_t)&g1), 0); // 0x56135
        result = v2 & -256 | (int64_t)((*(char *)(a1 + 288) & 5) == 0);
    }
    // 0x56144
    return result;
}

// Address range: 0x61046 - 0x61082
int64_t function_61046(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a1 >> 20; // 0x61050
    int64_t * v2 = mmap(NULL, (int32_t)v1, (char)a2 == 0 ? 3 : 7, 34, 0, 0); // 0x6106a
    int64_t result = (int64_t)v2; // 0x6106a
    if (v2 != NULL) {
        // 0x61074
        *(int64_t *)(result + 16) = v1;
        *(int64_t *)(result + 8) = result + 24;
    }
    // 0x61080
    return result;
}

// Address range: 0x72c32 - 0x72c58
int64_t function_72c32(int64_t a1) {
    // 0x72c32
    *(int64_t *)a1 = (int64_t)&g4;
    function_72c22();
    function_72994(a1 + 120);
    return function_7276e(a1 + 16);
}

// Address range: 0x3a8871 - 0x3a88ad
int64_t function_3a8871(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a8871
    int64_t v1; // 0x3a8871
    char * v2 = (char *)(v1 - 119); // 0x3a8871
    *v2 = *v2 + (char)a4;
    return function_c9849(a5);
}

// Address range: 0x48d416 - 0x48d452
int64_t function_48d416(int64_t result, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x48d416
    if (a2 == 0) {
        // 0x48d444
        __asm_rep_stosb_memset((char *)result, 0, 0);
        return result;
    }
    uint64_t v1 = 0;
    int64_t v2 = result;
    char v3 = *(char *)(v1 + a3); // 0x48d42a
    *(char *)v2 = v3;
    while (v1 < a4 && v3 != 0) {
        int64_t v4 = v1 + 1; // 0x48d43c
        int64_t v5 = v4 + result; // 0x48d41e
        int64_t v6 = v5; // 0x48d428
        if (v4 == a2) {
            // 0x48d444
            __asm_rep_stosb_memset((char *)v6, 0, 0);
            return result;
        }
        v1 = v4;
        v2 = v5;
        v3 = *(char *)(v1 + a3);
        *(char *)v2 = v3;
    }
    // 0x48d444
    __asm_rep_stosb_memset((char *)v2, 0, a2 - v1);
    return result;
}

// Address range: 0x497321 - 0x497357
int64_t function_497321(int64_t a1, int64_t a2, uint64_t a3) {
    if ((unsigned char)(char)(a3 / 256) >= 5) {
        // 0x497360
        int64_t result; // 0x497321
        return result;
    }
    uint32_t v1 = *(int32_t *)((4 * a2 & 1020) + (int64_t)&g2); // 0x497331
    if (v1 > (int32_t)"le") {
        // 0x497360
        return (int64_t)&g2;
    }
    int16_t * v2 = (int16_t *)(a1 + 372); // 0x49733a
    *v2 = *v2 & -897 | 128 * (int16_t)a2 & 896;
    return 0;
}

// Address range: 0x4ee9e0 - 0x4eea1c
int64_t ZydisGetAccessedFlags(int64_t a1, int64_t a2) {
    unsigned char v1 = 4 * *(char *)(a1 + 5) & 124 | *(char *)(a1 + 4) / 64;
    *(int64_t *)a2 = 40 * (int64_t)v1 + (int64_t)&g3;
    return v1 != 0;
}

// Address range: 0x53e5a0 - 0x53e5dc
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_53e5a0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x53e5a3
    *(int64_t *)(v1 + 16) = (int64_t)&g6;
    *(int64_t *)(v1 + 8) = 0;
    int64_t v2 = v1 + 24; // 0x53e5c1
    *(int64_t *)v1 = (int64_t)&g7;
    *(int64_t *)v2 = (int64_t)&g5;
    return function_54cf10(v2);
}

// Address range: 0x540f00 - 0x540f3b
int64_t function_540f00(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = a1 + 16; // 0x540f0a
    if (function_5033d0(result, a2, (int32_t)a3 || 8) == 0) {
        // 0x540f30
        return result;
    }
    // 0x540f1b
    return function_4fc010(*(int64_t *)(a1 - 8) + a1, 0);
}

// Address range: 0x54d6e0 - 0x54d71d
// From class:    std::ctype<wchar_t>
// Type:          constructor
int64_t function_54d6e0(int64_t a1, int64_t a2) {
    // 0x54d6e0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g9;
    *(int64_t *)(a1 + 16) = function_565f30();
    *(char *)(a1 + 24) = 0;
    return function_5700a0(a1);
}
