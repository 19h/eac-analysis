/*
 * Targeted RetDec C for native executable gap queue batch 99.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2914ea-0x29151f rank=73 name=fcn.002914ea kind=r2_discovered bytes=53 uncovered=53
 *   0x49bab0-0x49bae5 rank=74 name=fcn.0049bab0 kind=r2_discovered bytes=53 uncovered=53
 *   0x4ff1c0-0x4ff1f5 rank=75 name=fcn.004ff1c0 kind=r2_discovered bytes=53 uncovered=53
 *   0x5079b0-0x5079e5 rank=76 name=method.std::moneypunct_wchar_t__false_.virtual_72 kind=native_discovered bytes=53 uncovered=53
 *   0x5079f0-0x507a25 rank=77 name=method.std::moneypunct_wchar_t__false_.virtual_80 kind=native_discovered bytes=53 uncovered=53
 *   0x507a60-0x507a95 rank=78 name=method.std::moneypunct_wchar_t__true_.virtual_72 kind=native_discovered bytes=53 uncovered=53
 *   0x507aa0-0x507ad5 rank=79 name=method.std::moneypunct_wchar_t__true_.virtual_80 kind=native_discovered bytes=53 uncovered=53
 *   0x518b60-0x518b95 rank=80 name=method.std::__cxx11::moneypunct_char__false_.virtual_72 kind=native_discovered bytes=53 uncovered=53
 *   0x518ba0-0x518bd5 rank=81 name=method.std::__cxx11::moneypunct_char__false_.virtual_80 kind=native_discovered bytes=53 uncovered=53
 *   0x518c10-0x518c45 rank=82 name=method.std::__cxx11::moneypunct_char__true_.virtual_72 kind=native_discovered bytes=53 uncovered=53
 *   0x518c50-0x518c85 rank=83 name=method.std::__cxx11::moneypunct_char__true_.virtual_80 kind=native_discovered bytes=53 uncovered=53
 *   0x52df20-0x52df55 rank=84 name=method.std::__cxx11::moneypunct_wchar_t__false_.virtual_72 kind=native_discovered bytes=53 uncovered=53
 *   0x52df60-0x52df95 rank=85 name=method.std::__cxx11::moneypunct_wchar_t__false_.virtual_80 kind=native_discovered bytes=53 uncovered=53
 *   0x52dfd0-0x52e005 rank=86 name=method.std::__cxx11::moneypunct_wchar_t__true_.virtual_72 kind=native_discovered bytes=53 uncovered=53
 *   0x52e010-0x52e045 rank=87 name=method.std::__cxx11::moneypunct_wchar_t__true_.virtual_80 kind=native_discovered bytes=53 uncovered=53
 *   0x551aa0-0x551ad5 rank=88 name=method.std::moneypunct_char__false_.virtual_72 kind=native_discovered bytes=53 uncovered=53
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

int64_t function_2914ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_49bab0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eec00();
int64_t function_4ff1c0(int64_t a1);
int64_t function_5079b0(int64_t a1);
int64_t function_5079f0(int64_t a1);
int64_t function_507a60(int64_t a1);
int64_t function_507aa0(int64_t a1);
int64_t function_518b60(int64_t a1);
int64_t function_518ba0(int64_t a1);
int64_t function_518c10(int64_t a1);
int64_t function_518c50(int64_t a1);
int64_t function_52df20(int64_t a1);
int64_t function_52df60(int64_t a1);
int64_t function_52dfd0(int64_t a1);
int64_t function_52e010(int64_t a1);
int64_t function_551aa0(int64_t a1);
int64_t function_cc59c();

// Address range: 0x2914ea - 0x29151f
int64_t function_2914ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2914ea
    return function_cc59c();
}

// Address range: 0x49bab0 - 0x49bae5
int64_t function_49bab0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (uint32_t)(int32_t)a4 % 256;
    if ((int32_t)a3 != 1) {
        // 0x49bab8
        *(int32_t *)a1 = v1;
        int64_t result = (int64_t)*(char *)(a4 + 1);
        *(int32_t *)a2 = (int32_t)result;
        return result;
    }
    // 0x49bac8
    *(int32_t *)a1 = 257 - v1;
    int64_t result2 = 256 - (int64_t)*(char *)(a4 + 1); // 0x49bade
    if (result2 == 1) {
        // 0x49bae5
        return result2;
    }
    // 0x49babe
    *(int32_t *)a2 = (int32_t)result2;
    return result2;
}

// Address range: 0x4ff1c0 - 0x4ff1ef
int64_t function_4ff1c0(int64_t a1) {
    char * v1 = (char *)(a1 + 168); // 0x4ff1c0
    if (*v1 != 0 || *(int64_t *)(a1 + 152) != 0) {
        // 0x4ff1d3
        int64_t result; // 0x4ff1c0
        return result;
    }
    int64_t result2 = function_4eec00(*(int64_t *)(a1 + 160)); // 0x4ff1e3
    *v1 = 1;
    return result2;
}

// Address range: 0x5079b0 - 0x5079e5
// From class:    std::moneypunct<wchar_t, false>
// Type:          virtual member function
int64_t function_5079b0(int64_t a1) {
    // 0x5079b0
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x5079db
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 100);
    }
    // 0x5079e0
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x5079f0 - 0x507a25
// From class:    std::moneypunct<wchar_t, false>
// Type:          virtual member function
int64_t function_5079f0(int64_t a1) {
    // 0x5079f0
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x507a1b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 104);
    }
    // 0x507a20
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x507a60 - 0x507a95
// From class:    std::moneypunct<wchar_t, true>
// Type:          virtual member function
int64_t function_507a60(int64_t a1) {
    // 0x507a60
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x507a8b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 100);
    }
    // 0x507a90
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x507aa0 - 0x507ad5
// From class:    std::moneypunct<wchar_t, true>
// Type:          virtual member function
int64_t function_507aa0(int64_t a1) {
    // 0x507aa0
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x507acb
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 104);
    }
    // 0x507ad0
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x518b60 - 0x518b95
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_518b60(int64_t a1) {
    // 0x518b60
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x518b8b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 92);
    }
    // 0x518b90
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x518ba0 - 0x518bd5
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_518ba0(int64_t a1) {
    // 0x518ba0
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x518bcb
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 96);
    }
    // 0x518bd0
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x518c10 - 0x518c45
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb1EEE
// Type:          virtual member function
int64_t function_518c10(int64_t a1) {
    // 0x518c10
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x518c3b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 92);
    }
    // 0x518c40
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x518c50 - 0x518c85
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb1EEE
// Type:          virtual member function
int64_t function_518c50(int64_t a1) {
    // 0x518c50
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x518c7b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 96);
    }
    // 0x518c80
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x52df20 - 0x52df55
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb0EEE
// Type:          virtual member function
int64_t function_52df20(int64_t a1) {
    // 0x52df20
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x52df4b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 100);
    }
    // 0x52df50
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x52df60 - 0x52df95
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb0EEE
// Type:          virtual member function
int64_t function_52df60(int64_t a1) {
    // 0x52df60
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x52df8b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 104);
    }
    // 0x52df90
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x52dfd0 - 0x52e005
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb1EEE
// Type:          virtual member function
int64_t function_52dfd0(int64_t a1) {
    // 0x52dfd0
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x52dffb
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 100);
    }
    // 0x52e000
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x52e010 - 0x52e045
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIwLb1EEE
// Type:          virtual member function
int64_t function_52e010(int64_t a1) {
    // 0x52e010
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x52e03b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 104);
    }
    // 0x52e040
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x551aa0 - 0x551ad5
// From class:    std::moneypunct<char, false>
// Type:          virtual member function
int64_t function_551aa0(int64_t a1) {
    // 0x551aa0
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x551acb
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 92);
    }
    // 0x551ad0
    __stack_chk_fail();
    return (int64_t)&g1;
}
