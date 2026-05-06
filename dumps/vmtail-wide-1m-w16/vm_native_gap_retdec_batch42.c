/*
 * Targeted RetDec C for native executable gap queue batch 42.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5678f0-0x567995 rank=13 name=fcn.005678f0 kind=r2_discovered bytes=165 uncovered=165
 *   0x49e8b0-0x49e954 rank=14 name=fcn.0049e8b0 kind=r2_discovered bytes=164 uncovered=164
 *   0x5046d0-0x504774 rank=15 name=method.std::basic_fstream_char__std::char_traits_char___.virtual_0 kind=native_discovered bytes=164 uncovered=164
 *   0x5071e0-0x507284 rank=16 name=method.std::basic_fstream_wchar_t__std::char_traits_wchar_t___.virtual_0 kind=native_discovered bytes=164 uncovered=164
 *   0x54dd60-0x54de04 rank=17 name=fcn.0054dd60 kind=r2_discovered bytes=164 uncovered=164
 *   0x52fbc-0x5305f rank=18 name=fcn.00052fbc kind=r2_discovered bytes=163 uncovered=163
 *   0x5ca10-0x5cab3 rank=19 name=fcn.0005ca10 kind=r2_discovered bytes=163 uncovered=163
 *   0x4d2c90-0x4d2d33 rank=20 name=fcn.004d2c90 kind=r2_discovered bytes=163 uncovered=163
 *   0x547fb0-0x548053 rank=21 name=fcn.00547fb0 kind=r2_discovered bytes=163 uncovered=163
 *   0x563950-0x5639f3 rank=22 name=fcn.00563950 kind=r2_discovered bytes=163 uncovered=163
 *   0x563d40-0x563de3 rank=23 name=fcn.00563d40 kind=r2_discovered bytes=163 uncovered=163
 *   0x57ffaa-0x58004d rank=24 name=fcn.0057ffaa kind=r2_discovered bytes=163 uncovered=163
 *   0x5858c-0x5862e rank=25 name=fcn.0005858c kind=r2_discovered bytes=162 uncovered=162
 *   0x4c4470-0x4c4512 rank=26 name=fcn.004c4470 kind=r2_discovered bytes=162 uncovered=162
 *   0x4f69b0-0x4f6a52 rank=27 name=fcn.004f69b0 kind=r2_discovered bytes=162 uncovered=162
 *   0x543630-0x5436d2 rank=28 name=fcn.00543630 kind=r2_discovered bytes=162 uncovered=162
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

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
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
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
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
int128_t __asm_movdqu(int128_t value);
void __asm_movdqu_133();
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
int128_t __asm_movups();
void __asm_movups_133();
int128_t __asm_movaps(int128_t value);
float80_t __frontend_reg_load_fpr(int32_t reg);
void __frontend_reg_store_fpr(int32_t reg, float80_t value);
char *__nl_langinfo_l(int32_t item, struct __locale_struct *locale);
struct __locale_struct *__uselocale(struct __locale_struct *locale);
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
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
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
char *strdup(const char *s);
int __sprintf_chk(char *str, int flag, size_t slen, const char *format, ...);
struct _Unwind_Exception;
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_2508e();
int64_t function_25194();
int64_t function_25e90();
int64_t function_29c3a();
int64_t function_35ef6();
int64_t function_48eb2b();
int64_t function_49e8b0();
int64_t function_4c14d0();
int64_t function_4c1770();
int64_t function_4c19e0();
int64_t function_4c1d00();
int64_t function_4c4470();
int64_t function_4d2b80();
int64_t function_4d2c90();
int64_t function_4e1a6();
int64_t function_4f15a0();
int64_t function_4f15b0();
int64_t function_4f1760();
int64_t function_4f5b50();
int64_t function_4f69b0();
int64_t function_4fc010();
int64_t function_4feb80();
int64_t function_4ff1c0();
int64_t function_5009e0();
int64_t function_501020();
int64_t function_502870();
int64_t function_5046d0();
int64_t function_505130();
int64_t function_5071e0();
int64_t function_52fbc();
int64_t function_53334();
int64_t function_542590();
int64_t function_5433f0();
int64_t function_543470();
int64_t function_543630();
int64_t function_547fb0();
int64_t function_54cf10();
int64_t function_54dd60();
int64_t function_563950();
int64_t function_563d40();
int64_t function_566180();
int64_t function_5678f0();
int64_t function_57d920();
int64_t function_57ffa8();
int64_t function_57ffaa();
int64_t function_580018();
int64_t function_58002c();
int64_t function_581610();
int64_t function_584db();
int64_t function_5858c();
int64_t function_5c710();
int64_t function_5c79a();
int64_t function_5ca10();
int64_t function_5f202();
int64_t function_5f302();

// Address range: 0x52fbc - 0x5305f
int64_t function_52fbc(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 48; // 0x52fbe
    int64_t v2 = *(int64_t *)(a2 + 8); // 0x52fc9
    *(int64_t *)a1 = v1;
    *(int64_t *)(a1 + 8) = 1;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(int32_t *)(a1 + 32) = 0x3f800000;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)v1 = 0;
    int64_t * v3 = (int64_t *)(a1 + 80); // 0x53005
    *v3 = 0;
    *(int64_t *)(a1 + 72) = a2;
    int64_t result; // 0x52fbc
    if (v2 == 0) {
        // 0x53038
        function_53334(a1, &g3, 2);
        *(int64_t *)(a1 + 56) = 0;
        *(int32_t *)(a1 + 64) = 0;
        return result;
    }
    int32_t * v4 = (int32_t *)(v2 + 8);
    *v4 = *v4 + 1;
    int64_t v5 = *v3; // 0x53026
    if (v5 != 0) {
        // 0x5302f
        function_4e1a6(v5);
    }
    // 0x53034
    *v3 = v2;
    // 0x53038
    function_53334(a1, &g3, 2);
    *(int64_t *)(a1 + 56) = 0;
    *(int32_t *)(a1 + 64) = 0;
    return result;
}

// Address range: 0x5858c - 0x5862e
int64_t function_5858c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x58596
    *(int64_t *)(a2 + 8) = a2;
    int64_t v2 = 0; // 0x585b0
    if (a1 != 0 && a3 != 0) {
        // 0x585ba
        int64_t v3; // bp-56, 0x5858c
        int64_t v4; // bp-65, 0x5858c
        function_35ef6(&v3, a1, &v4);
        int64_t v5; // bp-64, 0x5858c
        function_48eb2b(&v5, &v3);
        uint64_t v6 = function_584db(v5, a2, a3); // 0x585ed
        function_2508e(&v5);
        v2 = function_29c3a(&v3) & -256 | v6 % 256;
    }
    int64_t result = v2; // 0x5861c
    if (v1 != __readfsqword(40)) {
        // 0x5861e
        __stack_chk_fail();
        result = (int64_t)&g23;
    }
    // 0x58623
    return result;
}

// Address range: 0x5ca10 - 0x5cab3
int64_t function_5ca10(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // bp-48, 0x5ca34
    int64_t v2; // bp-80, 0x5ca10
    function_5f302(&v2);
    int64_t v3 = 0; // bp-104, 0x5ca4d
    function_5c710(&v3, &v2, &v1);
    function_5c79a(a1, a2 & 0xffffffff, &v3);
    function_5f202(&v3);
    int64_t v4; // bp-72, 0x5ca10
    function_25194(&v4);
    function_2508e(&v2);
    int64_t result = 0; // 0x5caa1
    if (v1 != __readfsqword(40)) {
        // 0x5caa3
        __stack_chk_fail();
        result = (int64_t)&g23;
    }
    // 0x5caa8
    return result;
}

// Address range: 0x49e8b0 - 0x49e953
int64_t function_49e8b0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if (result == 0 || *(int64_t *)(result + 32) == 0) {
        // 0x49e8e7
        return result;
    }
    int32_t v1 = a6; // 0x49e910
    if (v1 == -0x6900 || (int64_t)g22 < a2) {
        // 0x49e8e7
        return result;
    }
    // 0x49e922
    int64_t str; // bp-552, 0x49e8b0
    snprintf((char *)&str, (int32_t)&g1, "%s() returned %d (-0x%04x)\n", (char *)a5, a6 & 0xffffffff, -v1);
    return (int64_t)&str;
}

// Address range: 0x4c4470 - 0x4c450f
int64_t function_4c4470(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if (a1 == 0) {
        // 0x4c4500
        return 0xffffc180;
    }
    // 0x4c4493
    if (a4 != 0) {
        // 0x4c449d
        return *(int64_t *)(a1 + 32);
    }
    int64_t v1 = function_4c14d0(a2 & 0xffffffff); // 0x4c44d3
    if (v1 == 0) {
        // 0x4c4500
        return 0xffffc180;
    }
    // 0x4c44dd
    function_4c1d00(v1);
    // 0x4c449d
    return *(int64_t *)(v1 + 32);
}

// Address range: 0x4d2c90 - 0x4d2d33
int64_t function_4d2c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_4c1770(); // 0x4d2cc3
    if ((int32_t)v1 == 0) {
        int64_t v2 = a1 + 24; // 0x4d2cce
        function_4c19e0(a1, v2, function_4c1d00(a2) % 256);
        memset((void *)(int64_t)((int64_t *)v2), 1, (int32_t)function_4c1d00(a2) % 256);
        function_4d2b80(a1, a3, a4);
    }
    // 0x4d2d0e
    return v1 & 0xffffffff;
}

// Address range: 0x4f69b0 - 0x4f6a52
int64_t function_4f69b0(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x4f69c0
    *v1 = 0;
    __readfsqword(40);
    function_4f5b50();
    char v2; // 0x4f69b0
    if (v2 == 0) {
        // 0x4f6a12
        __readfsqword(40);
        return result;
    }
    // 0x4f69e9
    char v3; // bp-17, 0x4f69b0
    int64_t v4 = *(int64_t *)((int64_t)&v3 - 24); // 0x4f69ec
    int64_t v5 = *(int64_t *)(result + 232 + v4); // 0x4f69f0
    int64_t * v6 = (int64_t *)(v5 + 16); // 0x4f69f8
    uint64_t v7 = *v6; // 0x4f69f8
    if (*(int64_t *)(v5 + 24) > v7) {
        // 0x4f6a02
        *v6 = v7 + 1;
        // 0x4f6a0a
        *v1 = 1;
        // 0x4f6a12
        __readfsqword(40);
        return result;
    }
    // 0x4f6a30
    if ((int32_t)*(int64_t *)v5 != -1) {
        // 0x4f6a0a
        *v1 = 1;
        // 0x4f6a12
        __readfsqword(40);
        return result;
    }
    int64_t v8 = *(int64_t *)(v5 - 24) + result; // 0x4f6a42
    function_4fc010(v8, *(int32_t *)(v8 + 32) | 2);
    // 0x4f6a12
    __readfsqword(40);
    return result;
}

// Address range: 0x5046d0 - 0x504774
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_5046d0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x5046e3
    int64_t v2 = v1 + 24; // 0x5046e6
    int64_t * v3 = (int64_t *)v1; // 0x5046ea
    *v3 = (int64_t)&g9;
    int64_t * v4 = (int64_t *)(v1 + 16); // 0x5046f5
    *v4 = (int64_t)&g10;
    int64_t v5 = v1 + 264; // 0x504700
    int64_t * v6 = (int64_t *)v5; // 0x504700
    *v6 = (int64_t)&g11;
    int64_t * v7 = (int64_t *)v2; // 0x50470b
    *v7 = (int64_t)&g6;
    function_502870(v2);
    function_4f1760(v1 + 128);
    *v7 = (int64_t)&g18;
    function_566180(v1 + 80);
    *(int64_t *)(v1 + 8) = 0;
    *v4 = (int64_t)&g7;
    *v3 = (int64_t)&g8;
    *v6 = (int64_t)&g4;
    return function_54cf10(v5);
}

// Address range: 0x5071e0 - 0x507284
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5071e0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x5071f3
    int64_t v2 = v1 + 24; // 0x5071f6
    int64_t * v3 = (int64_t *)v1; // 0x5071fa
    *v3 = (int64_t)&g15;
    int64_t * v4 = (int64_t *)(v1 + 16); // 0x507205
    *v4 = (int64_t)&g16;
    int64_t v5 = v1 + 264; // 0x507210
    int64_t * v6 = (int64_t *)v5; // 0x507210
    *v6 = (int64_t)&g17;
    int64_t * v7 = (int64_t *)v2; // 0x50721b
    *v7 = (int64_t)&g12;
    function_505130(v2);
    function_4f1760(v1 + 128);
    *v7 = (int64_t)&g19;
    function_566180(v1 + 80);
    *(int64_t *)(v1 + 8) = 0;
    *v4 = (int64_t)&g13;
    *v3 = (int64_t)&g14;
    *v6 = (int64_t)&g5;
    return function_54cf10(v5);
}

// Address range: 0x543630 - 0x5436cf
int64_t function_543630(int64_t result, int64_t a2) {
    // 0x543630
    __readfsqword(40);
    function_5433f0();
    char v1; // bp-56, 0x543630
    char v2; // 0x543630
    if (v2 == 0) {
        // 0x543683
        function_543470((int64_t *)&v1);
        __readfsqword(40);
        return result;
    }
    int64_t v3 = *(int64_t *)((int64_t)&v1 - 24); // 0x543665
    int64_t result2 = *(int64_t *)(result + 232 + v3); // 0x543669
    int64_t * v4 = (int64_t *)(result2 + 40); // 0x543671
    uint64_t v5 = *v4; // 0x543671
    if (v5 >= *(int64_t *)(result2 + 48)) {
        // 0x5436b0
        if ((int32_t)*(int64_t *)result2 == -1) {
            // 0x5436bf
            return result2;
        }
        // 0x543683
        function_543470((int64_t *)&v1);
        __readfsqword(40);
        return result;
    }
    // 0x54367b
    *(char *)v5 = (char)a2;
    *v4 = *v4 + 1;
    // 0x543683
    function_543470((int64_t *)&v1);
    __readfsqword(40);
    return result;
}

// Address range: 0x547fb0 - 0x548053
int64_t function_547fb0(int64_t result, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x547fb0
    if (a3 + 0x3ffffffffffffff9 - *(int64_t *)(result - 24) < a4) {
        // 0x548029
        function_542590("basic_string::_M_replace_aux");
        return 0x656666655f797469;
    }
    // 0x547fd6
    function_25e90();
    if (a4 == 0) {
        // 0x548005
        return result;
    }
    int64_t v1 = a2 + result; // 0x547ff0
    if (a4 == 1) {
        // 0x548018
        *(char *)v1 = (char)a5;
        return result;
    }
    // 0x547ff9
    memset((void *)(int64_t)((int64_t *)v1), 0x1000000 * (int32_t)a5 >> 24, (int32_t)a4);
    // 0x548005
    return result;
}

// Address range: 0x54dd60 - 0x54de00
int64_t function_54dd60(int64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8) - a1; // 0x54dd6c
    if (v1 < 2) {
        // 0x54ddef
        return 0xfffffffe;
    }
    int16_t v2 = a1;
    uint16_t v3 = a3 % 2 == 0 ? llvm_bswap_i16(v2) : v2;
    int64_t result = v3; // 0x54dd87
    int32_t v4 = v3;
    int64_t result2; // 0x54dd60
    if (v4 - 0xd800 > (int32_t)&g2) {
        // 0x54dd9a
        if (v4 - 0xdc00 <= (int32_t)&g2) {
            // 0x54ddef
            return 0xffffffff;
        }
        // 0x54dda8
        result2 = result;
        if (result <= a2) {
            // 0x54ddb4
            *(int64_t *)a1 = a1 + 2;
            return result;
        }
    } else {
        // 0x54ddc0
        if ((v1 & -2) == 2) {
            // 0x54ddef
            return result;
        }
        int16_t v5 = *(int16_t *)(a1 + 2); // 0x54ddc6
        uint16_t v6 = a3 % 2 == 0 ? llvm_bswap_i16(v5) : v5;
        result2 = 0xffffffff;
        if ((int32_t)v6 - 0xdc00 <= (int32_t)&g2) {
            // 0x54ddf8
            return 1024 * result;
        }
    }
    // 0x54ddef
    return result2;
}

// Address range: 0x563950 - 0x5639f2
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_563950(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 + 104; // 0x563964
    function_4feb80();
    *(int64_t *)a1 = (int64_t)&g20;
    function_4f15b0(v1, a2, a3 & 0xffffffff);
    int64_t result = function_4f15a0(v1); // 0x56398c
    if ((char)result == 0) {
        // 0x563995
        return result;
    }
    // 0x5639a0
    *(int32_t *)(a1 + 120) = (int32_t)a3;
    *(int64_t *)(a1 + 160) = a4;
    function_4ff1c0(a1);
    int64_t result2 = *(int64_t *)(a1 + 152); // 0x5639b3
    *(char *)(a1 + 169) = 0;
    *(char *)(a1 + 170) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 8) = result2;
    *(int64_t *)(a1 + 16) = result2;
    *(int64_t *)(a1 + 24) = result2;
    return result2;
}

// Address range: 0x563d40 - 0x563de2
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_563d40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 + 104; // 0x563d54
    function_5009e0();
    *(int64_t *)a1 = (int64_t)&g21;
    function_4f15b0(v1, a2, a3 & 0xffffffff);
    int64_t result = function_4f15a0(v1); // 0x563d7c
    if ((char)result == 0) {
        // 0x563d85
        return result;
    }
    // 0x563d90
    *(int32_t *)(a1 + 120) = (int32_t)a3;
    *(int64_t *)(a1 + 160) = a4;
    function_501020(a1);
    int64_t result2 = *(int64_t *)(a1 + 152); // 0x563da3
    *(char *)(a1 + 169) = 0;
    *(char *)(a1 + 170) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 8) = result2;
    *(int64_t *)(a1 + 16) = result2;
    *(int64_t *)(a1 + 24) = result2;
    return result2;
}

// Address range: 0x5678f0 - 0x56798d
int64_t function_5678f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __readfsqword(40); // 0x567907
    char * v1; // bp-40, 0x5678f0
    strtold_l((char *)a1, &v1, (struct __locale_struct *)a4);
    float80_t * v2 = (float80_t *)a2; // 0x567922
    if ((int64_t)v1 == a1 || *v1 != 0) {
        // 0x56796a
        *v2 = 0.0L;
        *(int32_t *)a3 = 4;
        // 0x567988
        return result;
    }
    // 0x56792f
    float80_t v3; // 0x5678f0
    if (v3 > 1.18973e+4932L) {
        // 0x567952
        *v2 = 1.18973e+4932L;
        *(int32_t *)a3 = 4;
        // 0x567988
        return result;
    }
    // 0x56793b
    if (v3 >= -1.18973e+4932L) {
        // 0x567988
        return result;
    }
    // 0x567952
    *v2 = -1.18973e+4932L;
    *(int32_t *)a3 = 4;
    // 0x567988
    return result;
}

// Address range: 0x57ffaa - 0x580018
int64_t function_57ffaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57ffaa
    int64_t v1; // 0x57ffaa
    int64_t v2 = v1 & 0xffffffff; // 0x57ffaa
    int64_t v3 = v2; // 0x57ffaa
    char v4 = v1; // 0x57ffab
    bool v5; // 0x57ffaa
    *(char *)a4 = (char)v1 - v4 + (char)v5;
    *(char *)(v1 & 0xffffffff) = *(char *)&v3 + v4;
    *(char *)(v2 + 255) = 0;
    int64_t * v6 = (int64_t *)(v2 + 320); // 0x57ffc4
    *v6 = *v6 + 1;
    int64_t v7 = v1 + 1; // 0x57ffd3
    *(int64_t *)(v3 + 256) = 1;
    char v8 = v1; // 0x57ffde
    *(char *)v3 = v8;
    *(char *)(v3 + 264) = v8;
    int64_t v9 = v7; // 0x57ffec
    int64_t v10 = 1; // 0x57ffec
    if (v7 == v1) {
        // 0x580004
        function_581610(v3, v1 & 0xffffffff, *(int64_t *)(v1 + 8));
        return function_57d920();
    }
    char v11 = *(char *)v9; // 0x57fff4
    int64_t v12 = v10; // 0x57fff9
    if (v10 == 255) {
        v12 = function_57ffa8();
    }
    // 0x57fffb
    v10 = v12 + 1;
    v9++;
    *(int64_t *)(v3 + 256) = v10;
    *(char *)(v3 + v12) = v11;
    *(char *)(v3 + 264) = v11;
    while (v9 != v1) {
        // 0x57ffee
        v11 = *(char *)v9;
        v12 = v10;
        if (v10 == 255) {
            v12 = function_57ffa8();
        }
        // 0x57fffb
        v10 = v12 + 1;
        v9++;
        *(int64_t *)(v3 + 256) = v10;
        *(char *)(v3 + v12) = v11;
        *(char *)(v3 + 264) = v11;
    }
    // 0x580004
    function_581610(v3, v1 & 0xffffffff, *(int64_t *)(v1 + 8));
    return function_57d920();
}

// Address range: 0x580018 - 0x58002c
int64_t function_580018(void) {
    // 0x580018
    int64_t v1; // 0x580018
    function_581610(v1, v1 & 0xffffffff, *(int64_t *)(v1 + 8));
    return function_57d920();
}

// Address range: 0x58002c - 0x580040
int64_t function_58002c(void) {
    // 0x58002c
    int64_t v1; // 0x58002c
    function_581610(v1, v1 & 0xffffffff, *(int64_t *)(v1 + 8));
    return function_57d920();
}
