/*
 * Targeted RetDec C for native executable gap queue batch 61.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5b2e6-0x5b35c rank=18 name=fcn.0005b2e6 kind=r2_discovered bytes=118 uncovered=118
 *   0x5c5ec-0x5c662 rank=19 name=fcn.0005c5ec kind=r2_discovered bytes=118 uncovered=118
 *   0x6080a-0x60880 rank=20 name=fcn.0006080a kind=r2_discovered bytes=118 uncovered=118
 *   0x673c2-0x67438 rank=21 name=fcn.000673c2 kind=r2_discovered bytes=118 uncovered=118
 *   0x68e3e-0x68eb4 rank=22 name=fcn.00068e3e kind=r2_discovered bytes=118 uncovered=118
 *   0x70f00-0x70f76 rank=23 name=fcn.00070f00 kind=r2_discovered bytes=118 uncovered=118
 *   0x71754-0x717ca rank=24 name=fcn.00071754 kind=r2_discovered bytes=118 uncovered=118
 *   0x76e68-0x76ede rank=25 name=fcn.00076e68 kind=r2_discovered bytes=118 uncovered=118
 *   0x489dce-0x489e44 rank=26 name=fcn.00489dce kind=r2_discovered bytes=118 uncovered=118
 *   0x48c3e4-0x48c45a rank=27 name=fcn.0048c3e4 kind=r2_discovered bytes=118 uncovered=118
 *   0x48c82e-0x48c8a4 rank=28 name=fcn.0048c82e kind=r2_discovered bytes=118 uncovered=118
 *   0x48d122-0x48d198 rank=29 name=fcn.0048d122 kind=r2_discovered bytes=118 uncovered=118
 *   0x48f9d8-0x48fa4e rank=30 name=fcn.0048f9d8 kind=r2_discovered bytes=118 uncovered=118
 *   0x54e3e0-0x54e456 rank=31 name=method.std::codecvt_char16_t__char____mbstate_t_.virtual_16 kind=native_discovered bytes=118 uncovered=118
 *   0x54f6f0-0x54f766 rank=32 name=method.std::codecvt_char32_t__char____mbstate_t_.virtual_32 kind=native_discovered bytes=118 uncovered=118
 *   0x54f770-0x54f7e6 rank=33 name=method.std::__codecvt_utf8_base_char32_t_.virtual_32 kind=native_discovered bytes=118 uncovered=118
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
extern int g1;
extern int g2;
extern int g3;
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3(void);
int32_t __asm_in(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
int64_t __asm_iretd(void);
int64_t unknown_34e4aca1(int64_t value);
void unknown_11c3039(void);
int64_t unknown_2a35274a(void);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffffe8914fc1(void);
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
int128_t __asm_movsd(int64_t value);
int128_t __asm_movsd_133(int64_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
int128_t __asm_aesimc(int128_t value);
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
int128_t __asm_movapd(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
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
int vswprintf(int32_t *wcs, size_t maxlen, const int32_t *format, int64_t ap);
int32_t *wmemchr(const int32_t *s, int32_t c, size_t n);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_once(int32_t *once_control, int64_t init_routine);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int sem_init(int64_t *sem, int pshared, unsigned int value);
int fcntl(int fd, int cmd, ...);
int writev(int fd, const struct iovec *iov, int iovcnt);
int epoll_create(int size);
int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event);
int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);
int close(int fd);
int ioctl(int fd, unsigned long request, ...);
int poll(struct pollfd *fds, unsigned long nfds, int timeout);
int gettimeofday(struct timeval *tv, void *tz);
int64_t sysconf(int name);
int64_t syscall(int64_t number, ...);
int mprotect(void *addr, size_t len, int prot);
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
struct tm *gmtime_r(const int32_t *timep, struct tm *result);
struct _Unwind_Exception;
int64_t _Unwind_DeleteException(int64_t exception);
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_489dce(uint64_t a1, uint64_t a2);
int64_t function_48c3e4(uint64_t a1, uint64_t a2);
int64_t function_48c82e(uint64_t a1, uint64_t a2);
int64_t function_48d122(uint64_t a1, uint64_t a2);
int64_t function_48f9d8(uint64_t a1, uint64_t a2);
int64_t function_4efd30();
int64_t function_542590();
int64_t function_54e240();
int64_t function_54e3e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_54f650();
int64_t function_54f6f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_54f770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_5b2e6(uint64_t a1, uint64_t a2);
int64_t function_5c5ec(uint64_t a1, uint64_t a2);
int64_t function_6080a(uint64_t a1, uint64_t a2);
int64_t function_673c2(uint64_t a1, uint64_t a2);
int64_t function_68e3e(uint64_t a1, uint64_t a2);
int64_t function_70f00(uint64_t a1, uint64_t a2);
int64_t function_71754(uint64_t a1, uint64_t a2);
int64_t function_76e68(uint64_t a1, uint64_t a2);

// Address range: 0x5b2e6 - 0x5b35c
int64_t function_5b2e6(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x5b2f4
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x5b2f6
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x5b308
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x5b30a
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x5b315
    int64_t v6 = v3; // 0x5b31f
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x5b332
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x5b34a
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x5c5ec - 0x5c662
int64_t function_5c5ec(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x5c5fa
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x5c5fc
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x5c60e
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x5c610
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x5c61b
    int64_t v6 = v3; // 0x5c625
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x5c638
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x5c650
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x6080a - 0x60880
int64_t function_6080a(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x60818
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x6081a
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x6082c
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x6082e
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x60839
    int64_t v6 = v3; // 0x60843
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x60856
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x6086e
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x673c2 - 0x67438
int64_t function_673c2(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x673d0
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x673d2
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x673e4
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x673e6
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x673f1
    int64_t v6 = v3; // 0x673fb
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x6740e
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x67426
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x68e3e - 0x68eb4
int64_t function_68e3e(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x68e4c
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x68e4e
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x68e60
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x68e62
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x68e6d
    int64_t v6 = v3; // 0x68e77
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x68e8a
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x68ea2
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x70f00 - 0x70f76
int64_t function_70f00(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x70f0e
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x70f10
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x70f22
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x70f24
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x70f2f
    int64_t v6 = v3; // 0x70f39
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x70f4c
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x70f64
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x71754 - 0x717ca
int64_t function_71754(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x71762
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x71764
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x71776
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x71778
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x71783
    int64_t v6 = v3; // 0x7178d
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x717a0
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x717b8
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x76e68 - 0x76ede
int64_t function_76e68(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x76e76
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x76e78
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x76e8a
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x76e8c
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x76e97
    int64_t v6 = v3; // 0x76ea1
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x76eb4
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x76ecc
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x489dce - 0x489e44
int64_t function_489dce(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x489ddc
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x489dde
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x489df0
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x489df2
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x489dfd
    int64_t v6 = v3; // 0x489e07
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x489e1a
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x489e32
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x48c3e4 - 0x48c45a
int64_t function_48c3e4(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x48c3f2
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x48c3f4
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x48c406
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x48c408
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x48c413
    int64_t v6 = v3; // 0x48c41d
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x48c430
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x48c448
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x48c82e - 0x48c8a4
int64_t function_48c82e(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x48c83c
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x48c83e
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x48c850
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x48c852
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x48c85d
    int64_t v6 = v3; // 0x48c867
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x48c87a
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x48c892
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x48d122 - 0x48d198
int64_t function_48d122(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x48d130
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x48d132
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x48d144
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x48d146
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x48d151
    int64_t v6 = v3; // 0x48d15b
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x48d16e
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x48d186
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x48f9d8 - 0x48fa4e
int64_t function_48f9d8(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x48f9e6
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x48f9e8
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x48f9fa
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x48f9fc
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x48fa07
    int64_t v6 = v3; // 0x48fa11
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x48fa24
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x48fa3c
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x54e3e0 - 0x54e456
// From class:    std::codecvt<char16_t, char, __mbstate_t>
// Type:          virtual member function
int64_t function_54e3e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x54e3e9
    int64_t v2 = a3; // bp-72, 0x54e403
    int64_t v3 = a6; // bp-56, 0x54e41b
    int64_t result = function_54e240(&v2, &v3, 0x10ffff, 0); // 0x54e425
    *(int64_t *)a5 = v2;
    *(int64_t *)a8 = v3;
    if (v1 == __readfsqword(40)) {
        // 0x54e44a
        return result;
    }
    // 0x54e451
    __stack_chk_fail();
    return (int64_t)&g3;
}

// Address range: 0x54f6f0 - 0x54f766
// From class:    std::codecvt<char32_t, char, __mbstate_t>
// Type:          virtual member function
int64_t function_54f6f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x54f6f9
    int64_t v2 = a3; // bp-72, 0x54f713
    int64_t v3 = a6; // bp-56, 0x54f72b
    int64_t result = function_54f650(&v2, &v3, 0x10ffff, 0); // 0x54f735
    *(int64_t *)a5 = v2;
    *(int64_t *)a8 = v3;
    if (v1 == __readfsqword(40)) {
        // 0x54f75a
        return result;
    }
    // 0x54f761
    __stack_chk_fail();
    return (int64_t)&g3;
}

// Address range: 0x54f770 - 0x54f7e6
// From class:    std::__codecvt_utf8_base<char32_t>
// Type:          virtual member function
int64_t function_54f770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x54f779
    int64_t v2 = a3; // bp-72, 0x54f789
    int32_t v3 = *(int32_t *)(a1 + 24); // 0x54f7a0
    int64_t v4 = a6; // bp-56, 0x54f7ab
    int64_t result = function_54f650(&v2, &v4, *(int64_t *)(a1 + 16), v3); // 0x54f7b5
    *(int64_t *)a5 = v2;
    *(int64_t *)a8 = v4;
    if (v1 == __readfsqword(40)) {
        // 0x54f7da
        return result;
    }
    // 0x54f7e1
    __stack_chk_fail();
    return (int64_t)&g3;
}
