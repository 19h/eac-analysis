/*
 * Targeted RetDec C for native executable gap queue batch 100.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x551ae0-0x551b15 rank=89 name=method.std::moneypunct_char__false_.virtual_80 kind=native_discovered bytes=53 uncovered=53
 *   0x551b50-0x551b85 rank=90 name=method.std::moneypunct_char__true_.virtual_72 kind=native_discovered bytes=53 uncovered=53
 *   0x551b90-0x551bc5 rank=91 name=method.std::moneypunct_char__true_.virtual_80 kind=native_discovered bytes=53 uncovered=53
 *   0x20f25-0x20f59 rank=92 name=entry.init5 kind=native_discovered bytes=52 uncovered=52
 *   0x25856-0x2588a rank=93 name=fcn.00025856 kind=r2_discovered bytes=52 uncovered=52
 *   0x379a0-0x379d4 rank=94 name=fcn.000379a0 kind=r2_discovered bytes=52 uncovered=52
 *   0x4fb7c-0x4fbb0 rank=95 name=fcn.0004fb7c kind=r2_discovered bytes=52 uncovered=52
 *   0x67ce4-0x67d18 rank=96 name=fcn.00067ce4 kind=r2_discovered bytes=52 uncovered=52
 *   0x428ce3-0x428d17 rank=97 name=fcn.00428ce3 kind=r2_discovered bytes=52 uncovered=52
 *   0x48da6e-0x48daa2 rank=98 name=fcn.0048da6e kind=r2_discovered bytes=52 uncovered=52
 *   0x4f5380-0x4f53b4 rank=99 name=method.std::istream.virtual_0 kind=native_discovered bytes=52 uncovered=52
 *   0x4f5480-0x4f54b4 rank=100 name=method.std::basic_istream_wchar_t__std::char_traits_wchar_t___.virtual_0 kind=native_discovered bytes=52 uncovered=52
 *   0x4fc010-0x4fc044 rank=101 name=fcn.004fc010 kind=r2_discovered bytes=52 uncovered=52
 *   0x4fca70-0x4fcaa4 rank=102 name=fcn.004fca70 kind=r2_discovered bytes=52 uncovered=52
 *   0x54e5f0-0x54e624 rank=103 name=fcn.0054e5f0 kind=r2_discovered bytes=52 uncovered=52
 *   0x216c0-0x216f3 rank=104 name=entry.fini0 kind=native_discovered bytes=51 uncovered=51
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
int64_t unknown_2f0fdc0b(void);
int64_t unknown_38ae20ec(void);
int64_t unknown_401c0cfa(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffffba4fa1e3(void);
int64_t unknown_ffffffffa83be585(void);
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

int64_t function_20bd0();
int64_t function_20f25(void);
int64_t function_21630();
int64_t function_216c0(void);
int64_t function_25856(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_36166();
int64_t function_379a0(int64_t a1);
int64_t function_428ce3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48da6e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4f5380(int64_t a1);
int64_t function_4f5480(int64_t a1);
int64_t function_4fa50();
int64_t function_4fb7c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fc010(int64_t a1, int64_t a2);
int64_t function_4fca70(int64_t a1, int64_t a2);
int64_t function_542590();
int64_t function_549920();
int64_t function_54cf10();
int64_t function_54dd30();
int64_t function_54e5f0(int64_t a1, int64_t a2);
int64_t function_551ae0(int64_t a1);
int64_t function_551b50(int64_t a1);
int64_t function_551b90(int64_t a1);
int64_t function_67ce4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_72496();
int64_t function_7259e();
int64_t function_7260a();
int64_t function_7293a();
int64_t function_72994();

// Address range: 0x20f25 - 0x20f59
int64_t function_20f25(void) {
    // 0x20f25
    function_7293a(&g9);
    *(int16_t *)&g8 = 0;
    int32_t result = __cxa_atexit((void (*)(int64_t *))0x4f94a, &g8, (int64_t *)0x849800); // 0x20f54
    return result;
}

// Address range: 0x216c0 - 0x216f1
int64_t function_216c0(void) {
    // 0x216c0
    if (g7 != 0) {
        // 0x216f8
        int64_t result; // 0x216c0
        return result;
    }
    // 0x216c9
    if (g5 != 0) {
        // 0x216d7
        function_20bd0(g6);
    }
    // 0x216e3
    g7 = 1;
    return function_21630();
}

// Address range: 0x25856 - 0x2588a
int64_t function_25856(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 8) - a1; // 0x2585a
    int64_t v2 = v1; // 0x25866
    if (-1 - v1 < a2) {
        // 0x25868
        v2 = function_542590(a3);
    }
    uint64_t v3 = v2;
    uint64_t v4 = (v3 > a2 ? v3 : a2) + v3; // 0x2587b
    return v4 < v3 ? -1 : v4;
}

// Address range: 0x379a0 - 0x379d4
int64_t function_379a0(int64_t a1) {
    int64_t v1 = a1 + 40; // 0x379a1
    function_7260a(v1);
    function_36166(a1 + 456);
    function_7259e(v1);
    return function_72994(a1);
}

// Address range: 0x4fb7c - 0x4fbb0
int64_t function_4fb7c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result; // 0x4fb7c
    if (a2 == 0 || a3 == 0) {
        // 0x4fbaa
        return result;
    }
    int64_t v1 = 8 * a2; // 0x4fb88
    if (v1 == 0) {
        // 0x4fbaa
        return result;
    }
    int64_t v2 = a3 + 8; // 0x4fb9f
    result = function_4fa50(a1, *(int64_t *)a3);
    while (v2 != v1 + a3) {
        int64_t v3 = v2;
        v2 = v3 + 8;
        result = function_4fa50(a1, *(int64_t *)v3);
    }
    // 0x4fbaa
    return result;
}

// Address range: 0x67ce4 - 0x67d18
int64_t function_67ce4(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 120); // 0x67ced
    int64_t result; // 0x67ce4
    if (v1 == 0) {
        // 0x67d14
        return result;
    }
    if ((char)a3 != 0) {
        // 0x67cfd
        result = function_72496(v1, a1);
    }
    // 0x67d14
    return result;
}

// Address range: 0x428ce3 - 0x428d17
int64_t function_428ce3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x428ce3
    bool v1; // 0x428ce3
    bool v2 = v1;
    int64_t v3; // 0x428ce3
    unsigned char v4 = (char)v3; // 0x428ce3
    bool v5 = v2 ? v4 + 76 + (char)v2 <= v4 : v4 > 179; // 0x428ce3
    __asm_wait();
    int32_t v6 = *(int32_t *)0x496228be; // 0x428ce6
    int64_t v7 = v1 ? -1 : 1; // 0x428cec
    int64_t v8 = v7 + a2; // 0x428cec
    int64_t v9 = __asm_int1(v7 + a1, v8); // 0x428ced
    int64_t v10 = v8; // bp-8, 0x428cee
    int64_t v11 = (int64_t)&v10; // 0x428cee
    int32_t * v12 = (int32_t *)(int64_t)(v6 + (int32_t)v3 + (int32_t)v5); // 0x428cef
    *v12 = *v12 - (int32_t)a4;
    int32_t * v13 = (int32_t *)(a3 - 0x4ed6dece); // 0x428cf1
    *v13 = *v13 | (int32_t)v11;
    float80_t v14; // 0x428ce3
    *(int16_t *)-0x2e9c6dfa = (int16_t)v14;
    *(char *)(a3 - (v9 & 0xff00) & 0xff00 | a3 & -0xff01) = (char)a3;
    return v11 + 0xbf967932 & 0xfffffffa;
}

// Address range: 0x48da6e - 0x48daa2
int64_t function_48da6e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0; // 0x48da6e
    while (v1 != a3) {
        int64_t v2 = 4 * v1; // 0x48da75
        int32_t v3 = *(int32_t *)(v2 + a1); // 0x48da75
        int32_t v4 = *(int32_t *)(v2 + a2); // 0x48da79
        v1++;
        if (v4 == 0 || v3 == 0 || v3 != v4) {
            // 0x48da9b
            return v1 & -256 | (int64_t)(v3 == v4);
        }
    }
    // 0x48da98
    return a3 & -256 | 1;
}

// Address range: 0x4f5380 - 0x4f53b4
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_4f5380(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x4f5383
    *(int64_t *)v1 = (int64_t)&g1;
    int64_t v2 = v1 + 16; // 0x4f539c
    *(int64_t *)(v1 + 8) = 0;
    *(int64_t *)v2 = (int64_t)&g3;
    return function_54cf10(v2);
}

// Address range: 0x4f5480 - 0x4f54b4
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_4f5480(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x4f5483
    *(int64_t *)v1 = (int64_t)&g2;
    int64_t v2 = v1 + 16; // 0x4f549c
    *(int64_t *)(v1 + 8) = 0;
    *(int64_t *)v2 = (int64_t)&g4;
    return function_54cf10(v2);
}

// Address range: 0x4fc010 - 0x4fc043
int64_t function_4fc010(int64_t a1, int64_t a2) {
    int32_t v1 = (int64_t)(*(int64_t *)(a1 + 232) == 0) | a2; // 0x4fc01a
    *(int32_t *)(a1 + 32) = v1;
    if ((*(int32_t *)(a1 + 28) & v1) != 0) {
        // 0x4fc02d
        return function_549920("basic_ios::clear");
    }
    // 0x4fc022
    int64_t result; // 0x4fc010
    return result;
}

// Address range: 0x4fca70 - 0x4fcaa3
int64_t function_4fca70(int64_t a1, int64_t a2) {
    int32_t v1 = (int64_t)(*(int64_t *)(a1 + 232) == 0) | a2; // 0x4fca7a
    *(int32_t *)(a1 + 32) = v1;
    if ((*(int32_t *)(a1 + 28) & v1) != 0) {
        // 0x4fca8d
        return function_549920("basic_ios::clear");
    }
    // 0x4fca82
    int64_t result; // 0x4fca70
    return result;
}

// Address range: 0x54e5f0 - 0x54e618
int64_t function_54e5f0(int64_t a1, int64_t a2) {
    if ((a2 & 4) == 0) {
        // 0x54e5f5
        int64_t result; // 0x54e5f0
        return result;
    }
    int64_t result2 = function_54dd30(); // 0x54e60a
    if ((char)result2 == 0) {
        // 0x54e5f5
        return result2;
    }
    // 0x54e613
    *(int32_t *)a2 = (int32_t)a2 & -2;
    return result2;
}

// Address range: 0x551ae0 - 0x551b15
// From class:    std::moneypunct<char, false>
// Type:          virtual member function
int64_t function_551ae0(int64_t a1) {
    // 0x551ae0
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x551b0b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 96);
    }
    // 0x551b10
    __stack_chk_fail();
    return (int64_t)&g10;
}

// Address range: 0x551b50 - 0x551b85
// From class:    std::moneypunct<char, true>
// Type:          virtual member function
int64_t function_551b50(int64_t a1) {
    // 0x551b50
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x551b7b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 92);
    }
    // 0x551b80
    __stack_chk_fail();
    return (int64_t)&g10;
}

// Address range: 0x551b90 - 0x551bc5
// From class:    std::moneypunct<char, true>
// Type:          virtual member function
int64_t function_551b90(int64_t a1) {
    // 0x551b90
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x551bbb
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 96);
    }
    // 0x551bc0
    __stack_chk_fail();
    return (int64_t)&g10;
}
