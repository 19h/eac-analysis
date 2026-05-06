/*
 * Targeted RetDec C for native executable gap queue batch 82.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4c4f90-0x4c4fd8 rank=53 name=fcn.004c4f90 kind=r2_discovered bytes=72 uncovered=72
 *   0x4d1b30-0x4d1b78 rank=54 name=fcn.004d1b30 kind=r2_discovered bytes=72 uncovered=72
 *   0x507eb0-0x507ef8 rank=55 name=method.std::moneypunct_wchar_t__false_.virtual_32 kind=native_discovered bytes=72 uncovered=72
 *   0x507f00-0x507f48 rank=56 name=method.std::moneypunct_wchar_t__true_.virtual_32 kind=native_discovered bytes=72 uncovered=72
 *   0x507f50-0x507f98 rank=57 name=method.std::numpunct_wchar_t_.virtual_32 kind=native_discovered bytes=72 uncovered=72
 *   0x507fa0-0x507fe8 rank=58 name=method.std::moneypunct_wchar_t__false_.virtual_40 kind=native_discovered bytes=72 uncovered=72
 *   0x507ff0-0x508038 rank=59 name=method.std::moneypunct_wchar_t__false_.virtual_48 kind=native_discovered bytes=72 uncovered=72
 *   0x508040-0x508088 rank=60 name=method.std::moneypunct_wchar_t__false_.virtual_56 kind=native_discovered bytes=72 uncovered=72
 *   0x508090-0x5080d8 rank=61 name=method.std::moneypunct_wchar_t__true_.virtual_40 kind=native_discovered bytes=72 uncovered=72
 *   0x5080e0-0x508128 rank=62 name=method.std::moneypunct_wchar_t__true_.virtual_48 kind=native_discovered bytes=72 uncovered=72
 *   0x508130-0x508178 rank=63 name=method.std::moneypunct_wchar_t__true_.virtual_56 kind=native_discovered bytes=72 uncovered=72
 *   0x508180-0x5081c8 rank=64 name=method.std::numpunct_wchar_t_.virtual_40 kind=native_discovered bytes=72 uncovered=72
 *   0x5081d0-0x508218 rank=65 name=method.std::numpunct_wchar_t_.virtual_48 kind=native_discovered bytes=72 uncovered=72
 *   0x509d40-0x509d88 rank=66 name=fcn.00509d40 kind=r2_discovered bytes=72 uncovered=72
 *   0x50c6b0-0x50c6f8 rank=67 name=fcn.0050c6b0 kind=r2_discovered bytes=72 uncovered=72
 *   0x50c700-0x50c748 rank=68 name=fcn.0050c700 kind=r2_discovered bytes=72 uncovered=72
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
int pthread_once(int32_t *once_control, int64_t init_routine);
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

int64_t function_20730();
int64_t function_250b0();
int64_t function_35ef6();
int64_t function_4c4f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6);
int64_t function_4caa40();
int64_t function_4d1510();
int64_t function_4d1b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_507eb0(int64_t result, int64_t a2);
int64_t function_507f00(int64_t result, int64_t a2);
int64_t function_507f50(int64_t result, int64_t a2);
int64_t function_507fa0(int64_t result, int64_t a2);
int64_t function_507ff0(int64_t result, int64_t a2);
int64_t function_508040(int64_t result, int64_t a2);
int64_t function_508090(int64_t result, int64_t a2);
int64_t function_5080e0(int64_t result, int64_t a2);
int64_t function_508130(int64_t result, int64_t a2);
int64_t function_508180(int64_t result, int64_t a2);
int64_t function_5081d0(int64_t result, int64_t a2);
int64_t function_509d40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50c6b0(int64_t a1);
int64_t function_50c700(int64_t a1);
int64_t function_565f80();
int64_t function_566390();
int64_t function_56dd60();

// Address range: 0x4c4f90 - 0x4c4fd8
int64_t function_4c4f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4c4fa1
    if (*v1 > a6) {
        // 0x4c4fd1
        return 0xffffbc80;
    }
    int64_t v2 = function_4caa40(); // 0x4c4fbc
    int64_t result = v2; // 0x4c4fc3
    if ((int32_t)v2 == 0) {
        // 0x4c4fc5
        result = *v1 < a6 ? 0xffffc700 : v2 & 0xffffffff;
    }
    // 0x4c4fd1
    return result;
}

// Address range: 0x4d1b30 - 0x4d1b78
int64_t function_4d1b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x4d1b30
    return function_4d1510();
}

// Address range: 0x507eb0 - 0x507ef8
// From class:    std::moneypunct<wchar_t, false>
// Type:          virtual member function
int64_t function_507eb0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x507eb8
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x507eea
        return result;
    }
    // 0x507ef3
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x507f00 - 0x507f48
// From class:    std::moneypunct<wchar_t, true>
// Type:          virtual member function
int64_t function_507f00(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x507f08
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x507f3a
        return result;
    }
    // 0x507f43
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x507f50 - 0x507f98
// From class:    std::numpunct_byname<wchar_t>
// Type:          virtual member function
int64_t function_507f50(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x507f58
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x507f8a
        return result;
    }
    // 0x507f93
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x507fa0 - 0x507fe8
// From class:    std::moneypunct<wchar_t, false>
// Type:          virtual member function
int64_t function_507fa0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x507fa8
    function_35ef6();
    if (v1 == __readfsqword(40)) {
        // 0x507fda
        return result;
    }
    // 0x507fe3
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x507ff0 - 0x508038
// From class:    std::moneypunct<wchar_t, false>
// Type:          virtual member function
int64_t function_507ff0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x507ff8
    function_35ef6();
    if (v1 == __readfsqword(40)) {
        // 0x50802a
        return result;
    }
    // 0x508033
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x508040 - 0x508088
// From class:    std::moneypunct<wchar_t, false>
// Type:          virtual member function
int64_t function_508040(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x508048
    function_35ef6();
    if (v1 == __readfsqword(40)) {
        // 0x50807a
        return result;
    }
    // 0x508083
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x508090 - 0x5080d8
// From class:    std::moneypunct<wchar_t, true>
// Type:          virtual member function
int64_t function_508090(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x508098
    function_35ef6();
    if (v1 == __readfsqword(40)) {
        // 0x5080ca
        return result;
    }
    // 0x5080d3
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x5080e0 - 0x508128
// From class:    std::moneypunct<wchar_t, true>
// Type:          virtual member function
int64_t function_5080e0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5080e8
    function_35ef6();
    if (v1 == __readfsqword(40)) {
        // 0x50811a
        return result;
    }
    // 0x508123
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x508130 - 0x508178
// From class:    std::moneypunct<wchar_t, true>
// Type:          virtual member function
int64_t function_508130(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x508138
    function_35ef6();
    if (v1 == __readfsqword(40)) {
        // 0x50816a
        return result;
    }
    // 0x508173
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x508180 - 0x5081c8
// From class:    std::numpunct_byname<wchar_t>
// Type:          virtual member function
int64_t function_508180(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x508188
    function_35ef6();
    if (v1 == __readfsqword(40)) {
        // 0x5081ba
        return result;
    }
    // 0x5081c3
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x5081d0 - 0x508218
// From class:    std::numpunct_byname<wchar_t>
// Type:          virtual member function
int64_t function_5081d0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5081d8
    function_35ef6();
    if (v1 == __readfsqword(40)) {
        // 0x50820a
        return result;
    }
    // 0x508213
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x509d40 - 0x509d88
// From class:    std::__timepunct<wchar_t>
// Type:          constructor
int64_t function_509d40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x509d40
    *(int64_t *)(a1 + 16) = a2;
    *(int64_t *)(a1 + 24) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a3 != 0);
    *(int64_t *)a1 = (int64_t)&g1;
    *(int64_t *)(a1 + 32) = function_565f80();
    return function_56dd60(a1, 0);
}

// Address range: 0x50c6b0 - 0x50c6f8
int64_t function_50c6b0(int64_t a1) {
    uint64_t v1 = function_566390(&g4); // 0x50c6bb
    if (*(int64_t *)((int64_t)&g4 + 16) <= v1) {
        // 0x50c6f6
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g4 + 8); // 0x50c6ce
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x50c6d2
    int64_t result = 0; // 0x50c6d9
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, 0x847658, 0x846010, 0); // 0x50c6eb
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x50c6f6
    return result;
}

// Address range: 0x50c700 - 0x50c748
int64_t function_50c700(int64_t a1) {
    uint64_t v1 = function_566390(&g3); // 0x50c70b
    if (*(int64_t *)((int64_t)&g3 + 16) <= v1) {
        // 0x50c746
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g3 + 8); // 0x50c71e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x50c722
    int64_t result = 0; // 0x50c729
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, (int64_t)&g2, 0x843690, 0); // 0x50c73b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x50c746
    return result;
}
