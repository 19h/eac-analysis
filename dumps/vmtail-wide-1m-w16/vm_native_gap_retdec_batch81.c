/*
 * Targeted RetDec C for native executable gap queue batch 81.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4f1770-0x4f17bb rank=37 name=fcn.004f1770 kind=r2_discovered bytes=75 uncovered=75
 *   0x558b10-0x558b5b rank=38 name=method.std::num_put_char__std::ostreambuf_iterator_char__std::char_traits_char_____.virtual_72 kind=native_discovered bytes=75 uncovered=75
 *   0x5635c0-0x56360b rank=39 name=method.__gnu_cxx::stdio_sync_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_96 kind=native_discovered bytes=75 uncovered=75
 *   0x20d1e-0x20d68 rank=40 name=fcn.00020d1e kind=r2_discovered bytes=74 uncovered=74
 *   0x5651a0-0x5651ea rank=41 name=method.std::__iosfail_type_info.virtual_48 kind=native_discovered bytes=74 uncovered=74
 *   0x523f6-0x5243f rank=42 name=fcn.000523f6 kind=r2_discovered bytes=73 uncovered=73
 *   0x5271e-0x52767 rank=43 name=fcn.0005271e kind=r2_discovered bytes=73 uncovered=73
 *   0x4b9480-0x4b94c9 rank=44 name=fcn.004b9480 kind=r2_discovered bytes=73 uncovered=73
 *   0x508360-0x5083a9 rank=45 name=fcn.00508360 kind=r2_discovered bytes=73 uncovered=73
 *   0x518fa0-0x518fe9 rank=46 name=fcn.00518fa0 kind=r2_discovered bytes=73 uncovered=73
 *   0x52e330-0x52e379 rank=47 name=fcn.0052e330 kind=r2_discovered bytes=73 uncovered=73
 *   0x53e670-0x53e6b9 rank=48 name=method.std::iostream.virtual_8 kind=native_discovered bytes=73 uncovered=73
 *   0x53e820-0x53e869 rank=49 name=method.std::basic_iostream_wchar_t__std::char_traits_wchar_t___.virtual_8 kind=native_discovered bytes=73 uncovered=73
 *   0x552460-0x5524a9 rank=50 name=fcn.00552460 kind=r2_discovered bytes=73 uncovered=73
 *   0x4f658-0x4f6a0 rank=51 name=fcn.0004f658 kind=r2_discovered bytes=72 uncovered=72
 *   0x4bf990-0x4bf9d8 rank=52 name=fcn.004bf990 kind=r2_discovered bytes=72 uncovered=72
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
struct _IO_FILE *fdopen(int fd, const char *mode);
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
int32_t __towlower_l(int32_t wc, struct __locale_struct *locale);
int32_t __towupper_l(int32_t wc, struct __locale_struct *locale);
int vswprintf(int32_t *wcs, size_t maxlen, const int32_t *format, int64_t ap);
int32_t *wmemchr(const int32_t *s, int32_t c, size_t n);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int32_t getwc(struct _IO_FILE *stream);
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

int64_t function_20d1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4afe70();
int64_t function_4b9480(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4bbb10();
int64_t function_4bf990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f1700();
int64_t function_4f1770(int64_t a1, int64_t buf, int64_t nbyte);
int64_t function_4f658(int64_t a1, uint64_t a2);
int64_t function_508360(int64_t a1);
int64_t function_518fa0(int64_t a1);
int64_t function_5235e();
int64_t function_523f6(int64_t a1, int64_t a2);
int64_t function_525f0();
int64_t function_5271e(int64_t a1);
int64_t function_52e330(int64_t a1);
int64_t function_53e670(int64_t a1);
int64_t function_53e820(int64_t a1);
int64_t function_54cf10();
int64_t function_552460(int64_t a1);
int64_t function_5588d0();
int64_t function_558b10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5635c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_564de0();
int64_t function_5651a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_565970();
int64_t function_565f80();
int64_t function_5679e0();

// Address range: 0x20d1e - 0x20d68
int64_t function_20d1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20d1e
    if (a1 == a2) {
        // 0x20d64
        return 0;
    }
    // 0x20d2d
    *(int32_t *)a3 = (int32_t)a1 % 256;
    int64_t v1 = function_4afe70(); // 0x20d3c
    int32_t v2 = v1; // 0x20d41
    int64_t result; // 0x20d1e
    if (v2 == 0) {
        // 0x20d52
        *(int64_t *)(a3 + 16) = a1;
        *(int64_t *)a1 = *(int64_t *)(a3 + 8) + a1;
        result = v1;
    } else {
        // 0x20d45
        result = v2 == -98 ? 0 : v1 & 0xffffffff;
    }
    // 0x20d64
    return result;
}

// Address range: 0x4f658 - 0x4f6a0
int64_t function_4f658(int64_t a1, uint64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 176); // 0x4f658
    int64_t result = *(int64_t *)(a1 + 32); // 0x4f65f
    if (v1 == 0) {
        // 0x4f69f
        return result;
    }
    int64_t v2 = *(int64_t *)(a1 + 184) - (v1 > a2 ? a2 : v1 - 1); // 0x4f678
    int64_t v3 = v2; // 0x4f67b
    if (v2 < 0) {
        // 0x4f67d
        v3 = -0x1041041041041041 * (*(int64_t *)(a1 + 40) - result >> 1) + v2;
    }
    // 0x4f69f
    return 126 * v3 + result;
}

// Address range: 0x523f6 - 0x5243f
int64_t function_523f6(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x52402
    uint64_t v2 = *(int64_t *)(a2 - 24); // 0x52406
    int64_t result = function_5235e(a1, a2, v1 < v2 ? v1 : v2); // 0x52414
    if ((int32_t)result != 0) {
        // 0x5243b
        return result;
    }
    uint64_t v3 = v1 - v2; // 0x5241d
    int64_t result2 = 0x7fffffff; // 0x5242c
    if (v3 <= 0x7fffffff) {
        int64_t v4 = v3 + 0x80000000; // 0x52431
        result2 = v4 < 0 == ((v4 ^ v3) & (v3 ^ -0x8000000000000000)) < 0 ? v3 & 0xffffffff : 0x80000000;
    }
    // 0x5243b
    return result2;
}

// Address range: 0x5271e - 0x52767
int64_t function_5271e(int64_t a1) {
    int64_t result = function_4efd30(128); // 0x5272b
    int32_t v1 = *(int32_t *)(a1 + 32); // 0x52730
    *(int32_t *)(result + 32) = v1;
    function_525f0(result + 40, a1 + 40, v1);
    int64_t v2; // 0x5271e
    *(int32_t *)result = *(int32_t *)&v2;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    return result;
}

// Address range: 0x4b9480 - 0x4b94c2
int64_t function_4b9480(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result; // 0x4b9480
    if (a1 != 0) {
        // 0x4b9493
        result = function_4bbb10();
    }
    // 0x4b94bb
    return result;
}

// Address range: 0x4bf990 - 0x4bf9d2
int64_t function_4bf990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 216); // 0x4bf990
    int32_t v2 = *v1; // 0x4bf990
    if (v2 > 19) {
        // 0x4bf9d8
        int64_t result; // 0x4bf990
        return result;
    }
    int64_t v3 = 8 * ((0x100000000 * (int64_t)v2 >> 30) + (int64_t)v2) + a1; // 0x4bf9a8
    *(int64_t *)(v3 + 224) = a2;
    *(int64_t *)(v3 + 232) = a3;
    *(int64_t *)(v3 + 248) = a4;
    *(int32_t *)(v3 + 256) = (int32_t)a5;
    *v1 = v2 + 1;
    return 0;
}

// Address range: 0x4f1770 - 0x4f17bb
int64_t function_4f1770(int64_t a1, int64_t buf, int64_t nbyte) {
    int32_t result = read((int32_t)function_4f1700(a1), (int64_t *)buf, (int32_t)nbyte); // 0x4f17a2
    // 0x4f1770
    while (result == -1) {
        // 0x4f1788
        if (*__errno_location() != 4) {
            // break -> 0x4f17b0
            break;
        }
        result = read((int32_t)function_4f1700(a1), (int64_t *)buf, (int32_t)nbyte);
    }
    // 0x4f17b0
    return result;
}

// Address range: 0x508360 - 0x5083a9
// From class:    std::messages<wchar_t>
// Type:          constructor
int64_t function_508360(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x508370
    *(int64_t *)a1 = (int64_t)&g4;
    if (!((v1 == 0 | v1 == function_565f80()))) {
        // 0x50838a
        function_4eeb40(v1);
    }
    // 0x508392
    function_5679e0(a1 + 16);
    return function_565970(a1);
}

// Address range: 0x518fa0 - 0x518fe9
// From class:    std::__cxx11::messages<char>
// Type:          constructor
int64_t function_518fa0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x518fb0
    *(int64_t *)a1 = (int64_t)&g5;
    if (!((v1 == 0 | v1 == function_565f80()))) {
        // 0x518fca
        function_4eeb40(v1);
    }
    // 0x518fd2
    function_5679e0(a1 + 16);
    return function_565970(a1);
}

// Address range: 0x52e330 - 0x52e379
// From class:    std::__cxx11::messages<wchar_t>
// Type:          constructor
int64_t function_52e330(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x52e340
    *(int64_t *)a1 = (int64_t)&g6;
    if (!((v1 == 0 | v1 == function_565f80()))) {
        // 0x52e35a
        function_4eeb40(v1);
    }
    // 0x52e362
    function_5679e0(a1 + 16);
    return function_565970(a1);
}

// Address range: 0x53e670 - 0x53e6b9
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_53e670(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x53e67f
    *(int64_t *)(v1 + 16) = (int64_t)&g7;
    int64_t v2 = v1 + 24; // 0x53e68d
    *(int64_t *)(v1 + 8) = 0;
    *(int64_t *)v1 = (int64_t)&g8;
    *(int64_t *)v2 = (int64_t)&g2;
    function_54cf10(v2);
    return function_4eeb50(v1);
}

// Address range: 0x53e820 - 0x53e869
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_53e820(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x53e82f
    *(int64_t *)(v1 + 16) = (int64_t)&g9;
    int64_t v2 = v1 + 24; // 0x53e83d
    *(int64_t *)(v1 + 8) = 0;
    *(int64_t *)v1 = (int64_t)&g10;
    *(int64_t *)v2 = (int64_t)&g3;
    function_54cf10(v2);
    return function_4eeb50(v1);
}

// Address range: 0x552460 - 0x5524a9
// From class:    std::messages<char>
// Type:          constructor
int64_t function_552460(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x552470
    *(int64_t *)a1 = (int64_t)&g11;
    if (!((v1 == 0 | v1 == function_565f80()))) {
        // 0x55248a
        function_4eeb40(v1);
    }
    // 0x552492
    function_5679e0(a1 + 16);
    return function_565970(a1);
}

// Address range: 0x558b10 - 0x558b5b
// From class:    std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_558b10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 24); // 0x558b24
    int32_t v2 = *v1; // 0x558b24
    *v1 = v2 & -0x404b | (int32_t)&g1;
    int64_t result = function_5588d0(); // 0x558b38
    *v1 = v2;
    return result;
}

// Address range: 0x5635c0 - 0x56360b
// From class:    __gnu_cxx::stdio_sync_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_5635c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result; // 0x5635c0
    if (a3 == 0) {
        // 0x5635fd
        return result;
    }
    int64_t v1 = 0; // 0x5635e0
    int64_t stream = *(int64_t *)(a1 + 64); // 0x5635e9
    result = v1;
    while (putwc(*(int32_t *)(4 * v1 + a2), (struct _IO_FILE *)stream) != -1) {
        // 0x5635e0
        v1++;
        result = a3;
        if (v1 == a3) {
            // break -> 0x5635fd
            break;
        }
        stream = *(int64_t *)(a1 + 64);
        result = v1;
    }
    // 0x5635fd
    return result;
}

// Address range: 0x5651a0 - 0x5651ea
int64_t function_5651a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = function_564de0(); // 0x5651b6
    if ((char)result == 0) {
        // 0x5651d0
        return *(int64_t *)(*(int64_t *)*(int64_t *)(a1 + 16) + 48);
    }
    // 0x5651bf
    return result;
}
