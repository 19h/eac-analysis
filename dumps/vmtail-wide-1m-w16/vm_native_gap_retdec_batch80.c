/*
 * Targeted RetDec C for native executable gap queue batch 80.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6bd3e-0x6bd8a rank=21 name=fcn.0006bd3e kind=r2_discovered bytes=76 uncovered=76
 *   0x496a60-0x496aac rank=22 name=fcn.00496a60 kind=r2_discovered bytes=76 uncovered=76
 *   0x52e840-0x52e88c rank=23 name=method.std::__cxx11::moneypunct_wchar_t__true_.virtual_56 kind=native_discovered bytes=76 uncovered=76
 *   0x52e890-0x52e8dc rank=24 name=method.std::__cxx11::moneypunct_wchar_t__false_.virtual_48 kind=native_discovered bytes=76 uncovered=76
 *   0x52e8e0-0x52e92c rank=25 name=method.std::__cxx11::moneypunct_wchar_t__false_.virtual_56 kind=native_discovered bytes=76 uncovered=76
 *   0x52e930-0x52e97c rank=26 name=method.std::__cxx11::moneypunct_wchar_t__true_.virtual_40 kind=native_discovered bytes=76 uncovered=76
 *   0x52e980-0x52e9cc rank=27 name=method.std::__cxx11::moneypunct_wchar_t__true_.virtual_48 kind=native_discovered bytes=76 uncovered=76
 *   0x52e9d0-0x52ea1c rank=28 name=method.std::__cxx11::numpunct_wchar_t_.virtual_40 kind=native_discovered bytes=76 uncovered=76
 *   0x52ea20-0x52ea6c rank=29 name=method.std::__cxx11::numpunct_wchar_t_.virtual_48 kind=native_discovered bytes=76 uncovered=76
 *   0x540380-0x5403cc rank=30 name=fcn.00540380 kind=r2_discovered bytes=76 uncovered=76
 *   0x540ad0-0x540b1c rank=31 name=fcn.00540ad0 kind=r2_discovered bytes=76 uncovered=76
 *   0x24e1e-0x24e69 rank=32 name=fcn.00024e1e kind=r2_discovered bytes=75 uncovered=75
 *   0x413fd-0x41448 rank=33 name=fcn.000413fd kind=r2_discovered bytes=75 uncovered=75
 *   0x48bde0-0x48be2b rank=34 name=fcn.0048bde0 kind=r2_discovered bytes=75 uncovered=75
 *   0x4956b0-0x4956fb rank=35 name=fcn.004956b0 kind=r2_discovered bytes=75 uncovered=75
 *   0x4f16b0-0x4f16fb rank=36 name=fcn.004f16b0 kind=r2_discovered bytes=75 uncovered=75
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

int64_t function_24e1e(void);
int64_t function_413fd(int64_t a1, int64_t a2);
int64_t function_48bde0(int64_t a1);
int64_t function_48d35d();
int64_t function_48d9cf();
int64_t function_4956b0(int64_t a1);
int64_t function_496a60(int64_t a1, int64_t a2);
int64_t function_49e770();
int64_t function_4c1e70();
int64_t function_4cb520();
int64_t function_4ccd50();
int64_t function_4cdde0();
int64_t function_4eeb50();
int64_t function_4f1440();
int64_t function_4f15a0();
int64_t function_4f16b0(int64_t result, int64_t a2, int64_t a3);
int64_t function_52e840(int64_t result, int64_t a2);
int64_t function_52e890(int64_t result, int64_t a2);
int64_t function_52e8e0(int64_t result, int64_t a2);
int64_t function_52e930(int64_t result, int64_t a2);
int64_t function_52e980(int64_t result, int64_t a2);
int64_t function_52e9d0(int64_t result, int64_t a2);
int64_t function_52ea20(int64_t result, int64_t a2);
int64_t function_540380(int64_t a1, int64_t a2);
int64_t function_540ad0(int64_t a1, int64_t a2);
int64_t function_54c860();
int64_t function_5659d0();
int64_t function_6bd3e(int64_t a1);

// Address range: 0x24e1e - 0x24e69
int64_t function_24e1e(void) {
    int64_t v1 = __readfsqword(40); // 0x24e2c
    int128_t tp; // bp-32, 0x24e1e
    clock_gettime(1, (struct timespec *)&tp);
    int64_t v2; // 0x24e1e
    int64_t result = 0x3b9aca00 * (int64_t)tp + v2; // 0x24e5d
    if (v1 != __readfsqword(40)) {
        // 0x24e5f
        __stack_chk_fail();
        result = (int64_t)&g9;
    }
    // 0x24e64
    return result;
}

// Address range: 0x413fd - 0x41448
int64_t function_413fd(int64_t a1, int64_t a2) {
    // 0x413fd
    if (a1 == 0) {
        // 0x41447
        return 0;
    }
    int64_t v1 = *(int64_t *)(a1 + 88); // 0x41404
    if (v1 == 0 || *(int32_t *)(a1 + 16) <= (int32_t)a2 || *(int32_t *)(a1 + 20) != 1) {
        // 0x41447
        return 0;
    }
    uint32_t v2 = *(int32_t *)(*(int64_t *)(v1 + 32) + (4 * a2 & 0x3fffffffc)); // 0x4141e
    int64_t v3 = *(int64_t *)v1 + (int64_t)v2; // 0x41421
    if (v3 == 0) {
        // 0x41447
        return 0;
    }
    uint16_t v4 = *(int16_t *)(v3 + 28); // 0x41426
    if (v4 == 0) {
        // 0x41447
        return (int64_t)(*(int32_t *)(v3 + 38) / 16 % 2);
    }
    // 0x4142f
    if (*(char *)(v3 + 45 + (int64_t)v4) == 47) {
        // 0x41447
        return 1;
    }
    // 0x41447
    return (int64_t)(*(int32_t *)(v3 + 38) / 16 % 2);
}

// Address range: 0x6bd3e - 0x6bd8a
int64_t function_6bd3e(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x6bd3e
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x6bd42
    int64_t v3 = *v2; // 0x6bd42
    if (v3 != *v1 - 4) {
        int64_t result = v3 + 4; // 0x6bd4f
        *v2 = result;
        return result;
    }
    int64_t * v4 = (int64_t *)(a1 + 24); // 0x6bd5c
    function_4eeb50(*v4);
    int64_t * v5 = (int64_t *)(a1 + 40); // 0x6bd65
    int64_t v6 = *v5 + 8; // 0x6bd69
    int64_t result2 = *(int64_t *)v6; // 0x6bd6d
    *v5 = v6;
    *v4 = result2;
    *v2 = result2;
    *v1 = result2 + (int64_t)&g1;
    return result2;
}

// Address range: 0x48bde0 - 0x48be2b
int64_t function_48bde0(int64_t a1) {
    // 0x48bde0
    if (a1 == 0) {
        // 0x48be24
        int64_t v1; // 0x48bde0
        return v1 & -256 | (int64_t)g8;
    }
    int64_t v2 = function_48d35d(); // 0x48bdee
    if (v2 < 5) {
        // 0x48be22
        return v2 & -256 | (int64_t)g8;
    }
    int64_t result = function_48d9cf(a1 - 4 + v2, ".exe", 4); // 0x48be12
    if ((char)result == 0) {
        // 0x48be22
        return result & -256 | (int64_t)g8;
    }
    // 0x48be1b
    g8 = 1;
    // 0x48be22
    return result;
}

// Address range: 0x4956b0 - 0x4956fb
int64_t function_4956b0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x4956b1
    if (v1 != 0 != ((int32_t)v1 == 2)) {
        // 0x4956ce
        return 0;
    }
    // 0x4956d2
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", 96, "timer expired");
    return 0xffffffff;
}

// Address range: 0x496a60 - 0x496aac
int64_t function_496a60(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 96); // 0x496a64
    function_4c1e70(*v1 + (int64_t)&g2);
    function_4cb520(*v1 + (int64_t)&g3);
    function_4ccd50(*v1 + (int64_t)&g4, 0);
    return function_4cdde0(*v1 + (int64_t)&g5, 1);
}

// Address range: 0x4f16b0 - 0x4f16fb
int64_t function_4f16b0(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = function_4f1440(a3 & 0xffffffff); // 0x4f16b9
    if (v1 == 0 || (char)function_4f15a0(result) != 0) {
        // 0x4f16f8
        return 0;
    }
    struct _IO_FILE * v2 = fopen64((char *)a2, (char *)v1); // 0x4f16db
    *(int64_t *)result = (int64_t)v2;
    if (v2 == NULL) {
        // 0x4f16f8
        return 0;
    }
    // 0x4f16e8
    *(char *)(result + 8) = 1;
    return result;
}

// Address range: 0x52e840 - 0x52e88c
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb1EEE
// Type:          virtual member function
int64_t function_52e840(int64_t result, int64_t a2) {
    int64_t wstr = *(int64_t *)(*(int64_t *)(a2 + 16) + 80); // 0x52e854
    *(int64_t *)result = result + 16;
    int64_t v1 = -4; // 0x52e862
    if (wstr != 0) {
        // 0x52e864
        v1 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr;
    }
    // 0x52e871
    function_54c860(result, wstr, v1);
    return result;
}

// Address range: 0x52e890 - 0x52e8dc
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb0EEE
// Type:          virtual member function
int64_t function_52e890(int64_t result, int64_t a2) {
    int64_t wstr = *(int64_t *)(*(int64_t *)(a2 + 16) + 64); // 0x52e8a4
    *(int64_t *)result = result + 16;
    int64_t v1 = -4; // 0x52e8b2
    if (wstr != 0) {
        // 0x52e8b4
        v1 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr;
    }
    // 0x52e8c1
    function_54c860(result, wstr, v1);
    return result;
}

// Address range: 0x52e8e0 - 0x52e92c
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb0EEE
// Type:          virtual member function
int64_t function_52e8e0(int64_t result, int64_t a2) {
    int64_t wstr = *(int64_t *)(*(int64_t *)(a2 + 16) + 80); // 0x52e8f4
    *(int64_t *)result = result + 16;
    int64_t v1 = -4; // 0x52e902
    if (wstr != 0) {
        // 0x52e904
        v1 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr;
    }
    // 0x52e911
    function_54c860(result, wstr, v1);
    return result;
}

// Address range: 0x52e930 - 0x52e97c
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb1EEE
// Type:          virtual member function
int64_t function_52e930(int64_t result, int64_t a2) {
    int64_t wstr = *(int64_t *)(*(int64_t *)(a2 + 16) + 48); // 0x52e944
    *(int64_t *)result = result + 16;
    int64_t v1 = -4; // 0x52e952
    if (wstr != 0) {
        // 0x52e954
        v1 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr;
    }
    // 0x52e961
    function_54c860(result, wstr, v1);
    return result;
}

// Address range: 0x52e980 - 0x52e9cc
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb1EEE
// Type:          virtual member function
int64_t function_52e980(int64_t result, int64_t a2) {
    int64_t wstr = *(int64_t *)(*(int64_t *)(a2 + 16) + 64); // 0x52e994
    *(int64_t *)result = result + 16;
    int64_t v1 = -4; // 0x52e9a2
    if (wstr != 0) {
        // 0x52e9a4
        v1 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr;
    }
    // 0x52e9b1
    function_54c860(result, wstr, v1);
    return result;
}

// Address range: 0x52e9d0 - 0x52ea1c
// From class:    *NSt13__facet_shims12_GLOBAL__N_113numpunct_shimIwEE
// Type:          virtual member function
int64_t function_52e9d0(int64_t result, int64_t a2) {
    int64_t wstr = *(int64_t *)(*(int64_t *)(a2 + 16) + 40); // 0x52e9e4
    *(int64_t *)result = result + 16;
    int64_t v1 = -4; // 0x52e9f2
    if (wstr != 0) {
        // 0x52e9f4
        v1 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr;
    }
    // 0x52ea01
    function_54c860(result, wstr, v1);
    return result;
}

// Address range: 0x52ea20 - 0x52ea6c
// From class:    *NSt13__facet_shims12_GLOBAL__N_113numpunct_shimIwEE
// Type:          virtual member function
int64_t function_52ea20(int64_t result, int64_t a2) {
    int64_t wstr = *(int64_t *)(*(int64_t *)(a2 + 16) + 56); // 0x52ea34
    *(int64_t *)result = result + 16;
    int64_t v1 = -4; // 0x52ea42
    if (wstr != 0) {
        // 0x52ea44
        v1 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr;
    }
    // 0x52ea51
    function_54c860(result, wstr, v1);
    return result;
}

// Address range: 0x540380 - 0x5403cc
// From class:    std::basic_streambuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_540380(int64_t a1, int64_t a2) {
    // 0x540380
    *(int64_t *)a1 = (int64_t)&g6;
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    *(int64_t *)(a1 + 16) = *(int64_t *)(a2 + 16);
    *(int64_t *)(a1 + 24) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 32) = *(int64_t *)(a2 + 32);
    *(int64_t *)(a1 + 40) = *(int64_t *)(a2 + 40);
    *(int64_t *)(a1 + 48) = *(int64_t *)(a2 + 48);
    return function_5659d0(a1 + 56, a2 + 56);
}

// Address range: 0x540ad0 - 0x540b1c
// From class:    std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_540ad0(int64_t a1, int64_t a2) {
    // 0x540ad0
    *(int64_t *)a1 = (int64_t)&g7;
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    *(int64_t *)(a1 + 16) = *(int64_t *)(a2 + 16);
    *(int64_t *)(a1 + 24) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 32) = *(int64_t *)(a2 + 32);
    *(int64_t *)(a1 + 40) = *(int64_t *)(a2 + 40);
    *(int64_t *)(a1 + 48) = *(int64_t *)(a2 + 48);
    return function_5659d0(a1 + 56, a2 + 56);
}
