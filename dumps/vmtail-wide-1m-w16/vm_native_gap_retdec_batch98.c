/*
 * Targeted RetDec C for native executable gap queue batch 98.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x55de2-0x55e19 rank=57 name=fcn.00055de2 kind=r2_discovered bytes=55 uncovered=55
 *   0x56750-0x56787 rank=58 name=fcn.00056750 kind=r2_discovered bytes=55 uncovered=55
 *   0x1d1223-0x1d125a rank=59 name=fcn.001d1223 kind=r2_discovered bytes=55 uncovered=55
 *   0x497610-0x497647 rank=60 name=fcn.00497610 kind=r2_discovered bytes=55 uncovered=55
 *   0x53f760-0x53f797 rank=61 name=method.std::basic_streambuf_char__std::char_traits_char___.virtual_32 kind=native_discovered bytes=55 uncovered=55
 *   0x53f7a0-0x53f7d7 rank=62 name=method.std::basic_streambuf_char__std::char_traits_char___.virtual_40 kind=native_discovered bytes=55 uncovered=55
 *   0x53f850-0x53f887 rank=63 name=method.std::basic_streambuf_wchar_t__std::char_traits_wchar_t___.virtual_32 kind=native_discovered bytes=55 uncovered=55
 *   0x53f890-0x53f8c7 rank=64 name=method.std::basic_streambuf_wchar_t__std::char_traits_wchar_t___.virtual_40 kind=native_discovered bytes=55 uncovered=55
 *   0x56edc0-0x56edf7 rank=65 name=fcn.0056edc0 kind=r2_discovered bytes=55 uncovered=55
 *   0x2b858-0x2b88e rank=66 name=fcn.0002b858 kind=r2_discovered bytes=54 uncovered=54
 *   0x6311a-0x63150 rank=67 name=fcn.0006311a kind=r2_discovered bytes=54 uncovered=54
 *   0x63514-0x6354a rank=68 name=fcn.00063514 kind=r2_discovered bytes=54 uncovered=54
 *   0x4b7390-0x4b73c6 rank=69 name=fcn.004b7390 kind=r2_discovered bytes=54 uncovered=54
 *   0x4b7410-0x4b7446 rank=70 name=fcn.004b7410 kind=r2_discovered bytes=54 uncovered=54
 *   0x4ea350-0x4ea386 rank=71 name=sym.ZydisDecoderEnableMode kind=symbol_named bytes=54 uncovered=54
 *   0x7269e-0x726d3 rank=72 name=fcn.0007269e kind=r2_discovered bytes=53 uncovered=53
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
extern int g7;
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
int pthread_once(int32_t *once_control, int64_t init_routine);
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

int64_t function_1d11d6();
int64_t function_1d1223(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_21a50();
int64_t function_254fe();
int64_t function_29c3a();
int64_t function_2b79a();
int64_t function_2b858(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36902();
int64_t function_497610(int64_t a1);
int64_t function_4b71f0();
int64_t function_4b7290();
int64_t function_4b7390(int64_t a1, int64_t a2);
int64_t function_4b7410(int64_t a1, int64_t a2);
int64_t function_4e1a6();
int64_t function_4eeb50();
int64_t function_53f760(int64_t a1, int64_t a2, int64_t a3);
int64_t function_53f7a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_53f850(int64_t a1, int64_t a2, int64_t a3);
int64_t function_53f890(int64_t a1, int64_t a2, int64_t a3);
int64_t function_55de2(int64_t a1);
int64_t function_56750(int64_t result, int64_t a2, int64_t a3);
int64_t function_56ec40();
int64_t function_56ec70();
int64_t function_56edc0(void);
int64_t function_56ede0(int64_t a1);
int64_t function_6311a(int64_t a1);
int64_t function_63514(int64_t result, int64_t a2);
int64_t function_7269e(int64_t result, int64_t a2);

// Address range: 0x2b858 - 0x2b88e
int64_t function_2b858(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b858
    return function_2b79a();
}

// Address range: 0x55de2 - 0x55e19
int64_t function_55de2(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x55df1
    *v1 = (int64_t)&g3;
    int64_t v2 = *(int64_t *)(a1 + (int64_t)&g1); // 0x55df4
    if (v2 != 0) {
        // 0x55e00
        function_4eeb50(v2);
    }
    // 0x55e05
    *v1 = (int64_t)&g4;
    return function_29c3a(a1 + 8);
}

// Address range: 0x56750 - 0x56787
int64_t function_56750(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = result - 24; // 0x56753
    if (v1 == (int64_t)g5) {
        // 0x56786
        return result;
    }
    int32_t * v2 = (int32_t *)(result - 8);
    int32_t v3 = *v2;
    *v2 = v3 - 1;
    if (v3 >= 0 == (v3 != 0)) {
        // 0x56786
        return result;
    }
    // 0x56781
    return function_4eeb50(v1);
}

// Address range: 0x6311a - 0x63150
int64_t function_6311a(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x6312a
    int64_t v2 = *v1; // 0x6312a
    int64_t result; // 0x6311a
    if (v2 == a1) {
        // 0x63144
        *v1 = a1;
        return result;
    }
    int64_t v3 = a1 + 64; // 0x63139
    function_254fe(a1);
    while (v2 != v3) {
        int64_t v4 = v3;
        v3 = v4 + 64;
        function_254fe(v4);
    }
    // 0x63144
    *v1 = a1;
    return result;
}

// Address range: 0x63514 - 0x6354a
int64_t function_63514(int64_t result, int64_t a2) {
    // 0x63514
    function_21a50();
    int128_t v1 = __asm_movups(*(int128_t *)(a2 + 32)); // 0x63529
    *(int64_t *)(result + 24) = *(int64_t *)(a2 + 24);
    __asm_movups_133(*(int128_t *)(result + 32), v1);
    *(int64_t *)(result + 48) = *(int64_t *)(a2 + 48);
    *(char *)(result + 56) = *(char *)(a2 + 56);
    return result;
}

// Address range: 0x7269e - 0x726d3
int64_t function_7269e(int64_t result, int64_t a2) {
    if (result == a2) {
        // 0x726cc
        return result;
    }
    if (a2 != 0) {
        // 0x726bc
        function_36902(a2);
        // 0x726c4
        function_4e1a6(a2);
        // 0x726c9
        *(int64_t *)result = a2;
        // 0x726cc
        return result;
    }
    // 0x726bc
    if (result == 0) {
        // 0x726c9
        *(int64_t *)result = a2;
        // 0x726cc
        return result;
    }
    // 0x726c4
    function_4e1a6(result);
    // 0x726c9
    *(int64_t *)result = a2;
    // 0x726cc
    return result;
}

// Address range: 0x1d1223 - 0x1d123b
int64_t function_1d1223(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1d1223
    int64_t v1; // 0x1d1223
    int64_t v2 = v1;
    int64_t v3 = ((v2 + a4 / 256) % 256 | v2 & 0xffffff00) + v1 & 0xffffffff; // 0x1d1227
    *(int32_t *)-0x176707d0 = *(int32_t *)-0x176707d0 + (int32_t)a1;
    int32_t * v4 = (int32_t *)(a3 & -256 | 28); // 0x1d122f
    int32_t v5 = *v4; // 0x1d122f
    int32_t v6 = a2; // 0x1d122f
    int32_t v7 = v5 + v6; // 0x1d122f
    *v4 = v7;
    __asm_rcl(*(int32_t *)v3);
    int64_t result = v3; // 0x1d1233
    if (((v7 ^ v5) & (v7 ^ v6)) >= 0) {
        result = function_1d11d6();
    }
    // 0x1d1235
    return result;
}

// Address range: 0x497610 - 0x497647
int64_t function_497610(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 72); // 0x497613
    uint16_t v2 = *(int16_t *)(a1 + 372); // 0x49761e
    uint32_t v3 = *(int32_t *)((int64_t)(v2 / 32 & 28) + (int64_t)&g2); // 0x49762f
    int64_t v4 = v3; // 0x49762f
    int64_t result = v4; // 0x497632
    if (v1 != 0) {
        unsigned char v5 = *(char *)(v1 + 140); // 0x497634
        uint32_t v6 = *(int32_t *)(4 * (int64_t)v5 + (int64_t)&g2); // 0x49763b
        uint64_t v7 = (int64_t)v6; // 0x49763b
        result = v4 > v7 ? v7 : v4;
    }
    // 0x497645
    return result;
}

// Address range: 0x4b7390 - 0x4b73c6
int64_t function_4b7390(int64_t a1, int64_t a2) {
    // 0x4b7390
    function_4b7290();
    int64_t v1; // bp-392, 0x4b7390
    int64_t v2 = (int64_t)&v1; // 0x4b73a5
    *(char *)v2 = 0;
    v2++;
    int64_t v3; // bp-8, 0x4b7390
    while (v2 != (int64_t)&v3) {
        // 0x4b73a8
        *(char *)v2 = 0;
        v2++;
    }
    // 0x4b73bc
    return 0;
}

// Address range: 0x4b7410 - 0x4b7446
int64_t function_4b7410(int64_t a1, int64_t a2) {
    // 0x4b7410
    function_4b71f0();
    int64_t v1; // bp-392, 0x4b7410
    int64_t v2 = (int64_t)&v1; // 0x4b7425
    *(char *)v2 = 0;
    v2++;
    int64_t v3; // bp-8, 0x4b7410
    while (v2 != (int64_t)&v3) {
        // 0x4b7428
        *(char *)v2 = 0;
        v2++;
    }
    // 0x4b743c
    return 0;
}

// Address range: 0x4ea350 - 0x4ea386
int64_t ZydisDecoderEnableMode(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a2; // 0x4ea35b
    if (a1 != 0 != v1 < 11) {
        // 0x4ea380
        return 0x80100004;
    }
    int32_t * v2 = (int32_t *)(a1 + 8); // 0x4ea365
    int32_t v3 = *v2; // 0x4ea365
    int32_t v4 = 1 << v1 % 32;
    *v2 = (char)a3 == 0 ? v3 & -1 - v4 : v3 | v4;
    return 0x100000;
}

// Address range: 0x53f760 - 0x53f797
// From class:    std::basic_streambuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_53f760(int64_t a1, int64_t a2, int64_t a3) {
    // 0x53f760
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x53f784
        return -1;
    }
    // 0x53f792
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x53f7a0 - 0x53f7d7
// From class:    std::basic_streambuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_53f7a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x53f7a0
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x53f7c4
        return -1;
    }
    // 0x53f7d2
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x53f850 - 0x53f887
// From class:    std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_53f850(int64_t a1, int64_t a2, int64_t a3) {
    // 0x53f850
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x53f874
        return -1;
    }
    // 0x53f882
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x53f890 - 0x53f8c7
// From class:    std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_53f890(int64_t a1, int64_t a2, int64_t a3) {
    // 0x53f890
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x53f8b4
        return -1;
    }
    // 0x53f8c2
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x56edc0 - 0x56edd5
int64_t function_56edc0(void) {
    // 0x56edc0
    return function_56ec40(function_56ec70());
}

// Address range: 0x56ede0 - 0x56edf2
int64_t function_56ede0(int64_t a1) {
    // 0x56ede0
    function_56edc0();
    return _ZGTtdlPv(a1);
}
