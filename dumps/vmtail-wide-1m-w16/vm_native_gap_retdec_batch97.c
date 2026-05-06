/*
 * Targeted RetDec C for native executable gap queue batch 97.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x498bd0-0x498c08 rank=41 name=fcn.00498bd0 kind=r2_discovered bytes=56 uncovered=56
 *   0x498c10-0x498c48 rank=42 name=fcn.00498c10 kind=r2_discovered bytes=56 uncovered=56
 *   0x4b8620-0x4b8658 rank=43 name=fcn.004b8620 kind=r2_discovered bytes=56 uncovered=56
 *   0x4cecf0-0x4ced28 rank=44 name=fcn.004cecf0 kind=r2_discovered bytes=56 uncovered=56
 *   0x5029a0-0x5029d8 rank=45 name=fcn.005029a0 kind=r2_discovered bytes=56 uncovered=56
 *   0x505260-0x505298 rank=46 name=fcn.00505260 kind=r2_discovered bytes=56 uncovered=56
 *   0x53fb90-0x53fbc8 rank=47 name=method.std::basic_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_80 kind=native_discovered bytes=56 uncovered=56
 *   0x552720-0x552758 rank=48 name=fcn.00552720 kind=r2_discovered bytes=56 uncovered=56
 *   0x5637b0-0x5637e8 rank=49 name=fcn.005637b0 kind=r2_discovered bytes=56 uncovered=56
 *   0x563810-0x563848 rank=50 name=fcn.00563810 kind=r2_discovered bytes=56 uncovered=56
 *   0x566390-0x5663c8 rank=51 name=fcn.00566390 kind=r2_discovered bytes=56 uncovered=56
 *   0x56e980-0x56e9b8 rank=52 name=fcn.0056e980 kind=r2_discovered bytes=56 uncovered=56
 *   0x2603e-0x26075 rank=53 name=fcn.0002603e kind=r2_discovered bytes=55 uncovered=55
 *   0x4aaa0-0x4aad7 rank=54 name=fcn.0004aaa0 kind=r2_discovered bytes=55 uncovered=55
 *   0x54878-0x548af rank=55 name=fcn.00054878 kind=r2_discovered bytes=55 uncovered=55
 *   0x54c7c-0x54cb3 rank=56 name=fcn.00054c7c kind=r2_discovered bytes=55 uncovered=55
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
extern int g13;
extern int g14;
extern int g15;
extern int g16;
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
int pthread_once(int32_t *once_control, ...);
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

int64_t function_254fe();
int64_t function_2603e(int64_t a1);
int64_t function_29c3a();
int64_t function_35fcc();
int64_t function_498bd0(int64_t a1, int64_t a2);
int64_t function_498c10(int64_t a1, int64_t a2);
int64_t function_4aaa0(uint64_t a1);
int64_t function_4b0fc0();
int64_t function_4b8620(uint64_t a1, int64_t a2, int64_t a3);
int64_t function_4cebb0();
int64_t function_4cecf0(int64_t a1, int64_t a2);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f1760();
int64_t function_502870();
int64_t function_5029a0(int64_t a1);
int64_t function_505130();
int64_t function_505260(int64_t a1);
int64_t function_53fb90(int64_t a1);
int64_t function_5423b0();
int64_t function_54878(int64_t a1);
int64_t function_54c7c(int64_t a1);
int64_t function_54d560();
int64_t function_552720(int64_t a1, int64_t a2);
int64_t function_5637b0(int64_t a1);
int64_t function_563810(int64_t a1);
int64_t function_566180();
int64_t function_566390(int64_t a1);
int64_t function_56e980(void);
int64_t function_63d4c();
int64_t function_7826e();

// Address range: 0x2603e - 0x26075
int64_t function_2603e(int64_t a1) {
    // 0x2603e
    *(int64_t *)(a1 + (int64_t)&g15 - 2520) = (int64_t)&g4;
    function_254fe(a1 + (int64_t)&g15);
    function_254fe(a1 + (int64_t)&g14);
    return function_63d4c(a1);
}

// Address range: 0x4aaa0 - 0x4aad7
int64_t function_4aaa0(uint64_t a1) {
    if (a1 >= 0x2000000000000000) {
        // 0x4aab0
        function_5423b0();
    }
    int64_t v1 = 8 * a1; // 0x4aab5
    int64_t result = function_4efd30(v1); // 0x4aac0
    __asm_rep_stosb_memset((char *)result, 0, v1);
    return result;
}

// Address range: 0x54878 - 0x548af
int64_t function_54878(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x54888
    int64_t v2 = *v1; // 0x54888
    int64_t result; // 0x54878
    if (v2 == a1) {
        // 0x548a3
        *v1 = a1;
        return result;
    }
    int64_t v3 = a1 + 16; // 0x54898
    function_35fcc(a1 + 8);
    while (v2 != v3) {
        int64_t v4 = v3;
        v3 = v4 + 16;
        function_35fcc(v4 + 8);
    }
    // 0x548a3
    *v1 = a1;
    return result;
}

// Address range: 0x54c7c - 0x54cb3
int64_t function_54c7c(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x54c8b
    *v1 = (int64_t)&g2;
    int64_t v2 = *(int64_t *)(a1 + (int64_t)&g1); // 0x54c8e
    if (v2 != 0) {
        // 0x54c9a
        function_4eeb50(v2);
    }
    // 0x54c9f
    *v1 = (int64_t)&g3;
    return function_29c3a(a1 + 8);
}

// Address range: 0x498bd0 - 0x498c04
int64_t function_498bd0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 240); // 0x498bd3
    if (v1 == 0) {
        // 0x498bfe
        return 0xffffffff;
    }
    int32_t v2 = *(int32_t *)v1; // 0x498bdf
    if (v2 == 0) {
        // 0x498bfe
        return 0xffffffff;
    }
    int32_t v3 = a2; // 0x498bea
    if (v2 == v3) {
        // 0x498bfe
        return 0xffffffff;
    }
    int64_t v4 = v1; // 0x498bec
    v4 += 4;
    int32_t v5 = *(int32_t *)v4; // 0x498bf8
    int64_t result = 0xffffffff; // 0x498bfc
    while (v5 != 0) {
        // 0x498bf0
        if (v5 == v3) {
            // 0x498bfe
            result = a2 & 0xffffffff;
            return result;
        }
        v4 += 4;
        v5 = *(int32_t *)v4;
        result = 0xffffffff;
    }
  lab_0x498bfe_2:
    // 0x498bfe
    return result;
}

// Address range: 0x498c10 - 0x498c44
int64_t function_498c10(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 232); // 0x498c13
    if (v1 == 0) {
        // 0x498c3e
        return 0xffffffff;
    }
    int32_t v2 = *(int32_t *)v1; // 0x498c1f
    if (v2 == 0) {
        // 0x498c3e
        return 0xffffffff;
    }
    int32_t v3 = a2; // 0x498c2a
    if (v2 == v3) {
        // 0x498c3e
        return 0xffffffff;
    }
    int64_t v4 = v1; // 0x498c2c
    v4 += 4;
    int32_t v5 = *(int32_t *)v4; // 0x498c38
    int64_t result = 0xffffffff; // 0x498c3c
    while (v5 != 0) {
        // 0x498c30
        if (v5 == v3) {
            // 0x498c3e
            result = a2 & 0xffffffff;
            return result;
        }
        v4 += 4;
        v5 = *(int32_t *)v4;
        result = 0xffffffff;
    }
  lab_0x498c3e_2:
    // 0x498c3e
    return result;
}

// Address range: 0x4b8620 - 0x4b8658
int64_t function_4b8620(uint64_t a1, int64_t a2, int64_t a3) {
    if ((uint64_t)(a3 - 1) >= a1) {
        // 0x4b8655
        return 0xffffcf80;
    }
    int64_t v1 = function_4b0fc0(a1 + 104); // 0x4b863c
    return (int32_t)v1 != 0 ? v1 + 0xffffce00 & 0xffffffff : 0;
}

// Address range: 0x4cecf0 - 0x4ced27
int64_t function_4cecf0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 36); // 0x4cecf0
    int64_t result = 0xffffffff; // 0x4cecfe
    if (*v1 != 0) {
        uint64_t v2 = function_4cebb0(); // 0x4ced02
        result = v2 < (int64_t)*v1 ? v2 : 2;
    }
    // 0x4ced14
    return result;
}

// Address range: 0x5029a0 - 0x5029d8
// From class:    std::basic_filebuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_5029a0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x5029af
    *v1 = (int64_t)&g5;
    function_502870();
    function_4f1760(a1 + 104);
    *v1 = (int64_t)&g7;
    return function_566180(a1 + 56);
}

// Address range: 0x505260 - 0x505298
// From class:    std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_505260(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x50526f
    *v1 = (int64_t)&g6;
    function_505130();
    function_4f1760(a1 + 104);
    *v1 = (int64_t)&g8;
    return function_566180(a1 + 56);
}

// Address range: 0x53fb90 - 0x53fbc5
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_53fb90(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 72); // 0x53fb93
    if (result == g9) {
        // 0x53fba0
        return 0xffffffff;
    }
    // 0x53fbb0
    if ((int32_t)result == -1) {
        // 0x53fba0
        return result;
    }
    // 0x53fbbb
    return (int64_t)*(int32_t *)*(int64_t *)(a1 + 16);
}

// Address range: 0x552720 - 0x552758
int64_t function_552720(int64_t a1, int64_t a2) {
    // 0x552720
    function_54d560();
    int64_t result = *(int64_t *)(a1 + 48); // 0x552733
    if (result != g11) {
        // 0x552750
        return result;
    }
    // 0x552740
    return a2 & 0xffffffff;
}

// Address range: 0x5637b0 - 0x5637e8
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_5637b0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x5637bf
    *v1 = (int64_t)&g5;
    function_502870();
    function_4f1760(a1 + 104);
    *v1 = (int64_t)&g7;
    return function_566180(a1 + 56);
}

// Address range: 0x563810 - 0x563848
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_563810(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x56381f
    *v1 = (int64_t)&g6;
    function_505130();
    function_4f1760(a1 + 104);
    *v1 = (int64_t)&g8;
    return function_566180(a1 + 56);
}

// Address range: 0x566390 - 0x5663c7
int64_t function_566390(int64_t a1) {
    // 0x566390
    if (a1 != 0) {
        // 0x5663ba
        return a1 - 1;
    }
    // 0x566398
    *(int32_t *)&g12 = (int32_t)&g13;
    if (g10 == 0) {
        // 0x5663c0
        return (int64_t)&g13;
    }
    // 0x5663a9
    *(int64_t *)a1 = (int64_t)(int32_t)&g13;
    // 0x5663ba
    return (int64_t)(int32_t)&g13 - 1;
}

// Address range: 0x56e980 - 0x56e9b8
int64_t function_56e980(void) {
    int64_t v1 = __readfsqword(40); // 0x56e989
    function_7826e();
    int64_t result = __readfsqword(40) ^ v1; // 0x56e9a3
    if (result == 0) {
        // 0x56e9ae
        return result;
    }
    // 0x56e9b3
    __stack_chk_fail();
    return (int64_t)&g16;
}
