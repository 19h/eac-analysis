/*
 * Targeted RetDec C for native executable gap queue batch 109.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5045a0-0x5045ca rank=105 name=fcn.005045a0 kind=r2_discovered bytes=42 uncovered=42
 *   0x5631b0-0x5631da rank=106 name=method.std::ctype_char_.virtual_24 kind=native_discovered bytes=42 uncovered=42
 *   0x5631f0-0x56321a rank=107 name=method.std::ctype_char_.virtual_40 kind=native_discovered bytes=42 uncovered=42
 *   0x5690a0-0x5690ca rank=108 name=fcn.005690a0 kind=r2_discovered bytes=42 uncovered=42
 *   0x5690f0-0x56911a rank=109 name=fcn.005690f0 kind=r2_discovered bytes=42 uncovered=42
 *   0x56b9a0-0x56b9ca rank=110 name=fcn.0056b9a0 kind=r2_discovered bytes=42 uncovered=42
 *   0x56b9f0-0x56ba1a rank=111 name=fcn.0056b9f0 kind=r2_discovered bytes=42 uncovered=42
 *   0x27df1-0x27e1a rank=112 name=fcn.00027df1 kind=r2_discovered bytes=41 uncovered=41
 *   0x2a711-0x2a73a rank=113 name=fcn.0002a711 kind=r2_discovered bytes=41 uncovered=41
 *   0x36966-0x3698f rank=114 name=fcn.00036966 kind=r2_discovered bytes=41 uncovered=41
 *   0x4afd4-0x4affd rank=115 name=fcn.0004afd4 kind=r2_discovered bytes=41 uncovered=41
 *   0x4dacc-0x4daf5 rank=116 name=fcn.0004dacc kind=r2_discovered bytes=41 uncovered=41
 *   0x507a2-0x507cb rank=117 name=fcn.000507a2 kind=r2_discovered bytes=41 uncovered=41
 *   0x507cc-0x507f5 rank=118 name=fcn.000507cc kind=r2_discovered bytes=41 uncovered=41
 *   0x60eae-0x60f42 rank=119 name=fcn.00060eae kind=r2_discovered bytes=148 uncovered=41
 *   0x6872c-0x68755 rank=120 name=fcn.0006872c kind=r2_discovered bytes=41 uncovered=41
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
#define SIGALARM 14
#define SYS_getegid32 50
#define PTHREAD_MUTEX_RECURSIVE 1
extern int g1;
extern int g2;
extern int g3;
extern int g4;
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3(void);
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
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
int64_t unknown_1a5f8c06(void);
int64_t unknown_fce9f06(void);
int64_t unknown_6830301e(void);
int64_t unknown_2f0fdc0b(void);
int64_t unknown_38ae20ec(void);
int64_t unknown_401c0cfa(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffffba4fa1e3(void);
int64_t unknown_ffffffffa83be585(void);
int64_t unknown_ffffffffc9a6c1f7(void);
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
void __asm_wait(void);
float80_t __asm_fbstp(float80_t value);
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
void __stack_chk_fail(void);
int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);
int64_t _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(int64_t value);
int64_t _ZGTtdlPv(int64_t value);
int64_t blake3_hasher_init_derive_key_raw(int64_t hasher, int64_t context, int64_t context_len);
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
struct __locale_struct *__newlocale(int category_mask, const char *locale, struct __locale_struct *base);
struct __locale_struct *__uselocale(struct __locale_struct *locale);
float32_t __strtof_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float64_t __strtod_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float80_t strtold_l(const char *nptr, char **endptr, struct __locale_struct *locale);
int32_t __strcoll_l(const char *s1, const char *s2, struct __locale_struct *locale);
int32_t __wcscoll_l(const int32_t *s1, const int32_t *s2, struct __locale_struct *locale);
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
int32_t ungetwc(int32_t wc, struct _IO_FILE *stream);
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
int sem_post(int64_t *sem);
int sem_wait(int64_t *sem);
int sem_destroy(int64_t *sem);
int64_t signal(int signum, int64_t handler);
unsigned int alarm(unsigned int seconds);
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

int64_t function_27df1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a711(int64_t a1, int64_t a2);
int64_t function_35fcc();
int64_t function_36966(int64_t result, int64_t a2);
int64_t function_4ad0c();
int64_t function_4afd4(int64_t a1, int64_t a2);
int64_t function_4dacc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_502870();
int64_t function_5045a0(int64_t a1);
int64_t function_507a2(int64_t a1);
int64_t function_507cc(int64_t a1);
int64_t function_5423b0();
int64_t function_5631b0(int64_t a1, uint64_t a2, uint64_t result);
int64_t function_5631f0(int64_t a1, uint64_t a2, uint64_t result);
int64_t function_5690a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5690f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_56b9a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_56b9f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_60eae(int64_t a1, int64_t a2);
int64_t function_686a0();
int64_t function_6872c(int64_t a1);

// Address range: 0x27df1 - 0x27e1a
int64_t function_27df1(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x27df4
    int64_t result = a3 - v1; // 0x27df7
    if (v1 == 0) {
        // 0x27e16
        return result;
    }
    // 0x27e02
    return (int64_t)memmove((int64_t *)result, (int64_t *)a1, (int32_t)v1);
}

// Address range: 0x2a711 - 0x2a73a
int64_t function_2a711(int64_t a1, int64_t a2) {
    // 0x2a711
    if (a1 == 0 || a2 == 0) {
        // 0x2a739
        return 10;
    }
    // 0x2a71b
    if (g4 != 1) {
        // 0x2a739
        return (int64_t)&g1;
    }
    // 0x2a729
    *(int32_t *)a2 = *(int32_t *)(a1 + 4) + 22;
    return 0;
}

// Address range: 0x36966 - 0x3698f
int64_t function_36966(int64_t result, int64_t a2) {
    int32_t * v1 = (int32_t *)(result - 8); // 0x36969
    if (*v1 < 0) {
        // 0x36970
        *v1 = 0;
    }
    int32_t * v2 = (int32_t *)(a2 - 8); // 0x3697a
    if (*v2 < 0) {
        // 0x36981
        *v2 = 0;
    }
    // 0x36988
    *(int64_t *)result = a2;
    *(int64_t *)a2 = result;
    return result;
}

// Address range: 0x4afd4 - 0x4affd
int64_t function_4afd4(int64_t a1, int64_t a2) {
    // 0x4afd4
    return function_4ad0c();
}

// Address range: 0x4dacc - 0x4daf5
int64_t function_4dacc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = a2 + 8; // 0x4dacc
    int64_t v1 = 0; // 0x4dad9
    int64_t v2 = a3; // 0x4dad9
    if (a1 == 0) {
        // 0x4daf4
        return result;
    }
    int64_t result2 = result; // 0x4dad9
    int64_t v3 = *(int64_t *)(result2 - 8); // 0x4dadb
    int64_t * v4 = (int64_t *)result2; // 0x4dadf
    __asm_rep_movsb_memcpy((char *)v2, (char *)v3, *v4);
    v1++;
    result2 += 16;
    v2 += *v4;
    while (v1 != a1) {
        // 0x4dadb
        v3 = *(int64_t *)(result2 - 8);
        v4 = (int64_t *)result2;
        __asm_rep_movsb_memcpy((char *)v2, (char *)v3, *v4);
        v1++;
        result2 += 16;
        v2 += *v4;
    }
    // 0x4daf4
    return result2;
}

// Address range: 0x507a2 - 0x507cb
int64_t function_507a2(int64_t a1) {
    // 0x507a2
    int64_t result; // 0x507a2
    if (*(int64_t *)0x848c20 == a1) {
        // 0x507c8
        return result;
    }
    int32_t v1 = _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(a1 + 16); // 0x507bb
    if (v1 >= 0 == (v1 != 0)) {
        // 0x507c8
        return result;
    }
    // 0x507bf
    return function_4eeb50(a1);
}

// Address range: 0x507cc - 0x507f5
int64_t function_507cc(int64_t a1) {
    // 0x507cc
    int64_t result; // 0x507cc
    if ((int64_t)g3 == a1) {
        // 0x507f2
        return result;
    }
    int32_t v1 = _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(a1 + 16); // 0x507e5
    if (v1 >= 0 == (v1 != 0)) {
        // 0x507f2
        return result;
    }
    // 0x507e9
    return function_4eeb50(a1);
}

// Address range: 0x60eae - 0x60f42
int64_t function_60eae(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x60eb5
    int64_t v2 = *v1 - a2; // 0x60ebc
    int64_t * v3 = (int64_t *)a1; // 0x60ebf
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x60ec6
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + 16); // 0x60ece
    *v5 = 0;
    uint64_t v6 = v2 >> 3; // 0x60ed9
    int64_t v7 = 0; // 0x60edd
    if (v6 != 0) {
        if (v6 >= 0x2000000000000000) {
            // 0x60eee
            function_5423b0();
        }
        // 0x60ef3
        v7 = function_4efd30(v2);
    }
    // 0x60eff
    *v3 = v7;
    *v4 = v7;
    *v5 = v7 + v2;
    int64_t v8 = *v1; // 0x60f15
    int64_t v9 = v7; // 0x60f20
    int64_t result; // 0x60f36
    if (v8 == a2) {
        // 0x60f33
        result = v8 - a2 + v7;
        *v4 = result;
        return result;
    }
    int64_t v10 = a2 + 8; // 0x60f29
    *(int64_t *)v9 = *(int64_t *)a2;
    v9 += 8;
    while (v8 != v10) {
        int64_t v11 = v10;
        v10 = v11 + 8;
        *(int64_t *)v9 = *(int64_t *)v11;
        v9 += 8;
    }
    // 0x60f33
    result = v8 - a2 + v7;
    *v4 = result;
    return result;
}

// Address range: 0x6872c - 0x68755
int64_t function_6872c(int64_t a1) {
    // 0x6872c
    *(int64_t *)a1 = (int64_t)&g2;
    function_686a0();
    return function_35fcc(a1 + 128);
}

// Address range: 0x5045a0 - 0x5045c9
int64_t function_5045a0(int64_t a1) {
    int64_t v1 = a1 + 16; // 0x5045a4
    int64_t v2 = function_502870(v1); // 0x5045a8
    return v2 == 0 ? v1 : v2;
}

// Address range: 0x5631b0 - 0x5631da
// From class:    std::ctype_byname<char>
// Type:          virtual member function
int64_t function_5631b0(int64_t a1, uint64_t a2, uint64_t result) {
    if (a2 >= result) {
        // 0x5631d8
        return result;
    }
    int64_t v1 = a2; // 0x5631c8
    char * v2 = (char *)v1; // 0x5631c0
    v1++;
    int32_t v3 = *(int32_t *)(4 * (int64_t)*v2 + *(int64_t *)(a1 + 32)); // 0x5631cc
    *v2 = (char)v3;
    while (v1 != result) {
        // 0x5631c0
        v2 = (char *)v1;
        v1++;
        v3 = *(int32_t *)(4 * (int64_t)*v2 + *(int64_t *)(a1 + 32));
        *v2 = (char)v3;
    }
    // 0x5631d8
    return result;
}

// Address range: 0x5631f0 - 0x56321a
// From class:    std::ctype_byname<char>
// Type:          virtual member function
int64_t function_5631f0(int64_t a1, uint64_t a2, uint64_t result) {
    if (a2 >= result) {
        // 0x563218
        return result;
    }
    int64_t v1 = a2; // 0x563208
    char * v2 = (char *)v1; // 0x563200
    v1++;
    int32_t v3 = *(int32_t *)(4 * (int64_t)*v2 + *(int64_t *)(a1 + 40)); // 0x56320c
    *v2 = (char)v3;
    while (v1 != result) {
        // 0x563200
        v2 = (char *)v1;
        v1++;
        v3 = *(int32_t *)(4 * (int64_t)*v2 + *(int64_t *)(a1 + 40));
        *v2 = (char)v3;
    }
    // 0x563218
    return result;
}

// Address range: 0x5690a0 - 0x5690ca
int64_t function_5690a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x5690aa
    int32_t v2 = __strcoll_l((char *)a2, (char *)a3, (struct __locale_struct *)v1); // 0x5690b1
    return v2 >> 30 | (int32_t)(v2 != 0);
}

// Address range: 0x5690f0 - 0x56911a
int64_t function_5690f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x5690fa
    int32_t v2 = __wcscoll_l((int32_t *)a2, (int32_t *)a3, (struct __locale_struct *)v1); // 0x569101
    return v2 >> 30 | (int32_t)(v2 != 0);
}

// Address range: 0x56b9a0 - 0x56b9ca
int64_t function_56b9a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x56b9aa
    int32_t v2 = __strcoll_l((char *)a2, (char *)a3, (struct __locale_struct *)v1); // 0x56b9b1
    return v2 >> 30 | (int32_t)(v2 != 0);
}

// Address range: 0x56b9f0 - 0x56ba1a
int64_t function_56b9f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x56b9fa
    int32_t v2 = __wcscoll_l((int32_t *)a2, (int32_t *)a3, (struct __locale_struct *)v1); // 0x56ba01
    return v2 >> 30 | (int32_t)(v2 != 0);
}

// --------------- Statically Linked Functions ----------------

// int64_t _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(int64_t a1);
