/*
 * Targeted RetDec C for native executable gap queue batch 102.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4ba840-0x4ba872 rank=121 name=fcn.004ba840 kind=r2_discovered bytes=50 uncovered=50
 *   0x4f51e0-0x4f5212 rank=122 name=fcn.004f51e0 kind=r2_discovered bytes=50 uncovered=50
 *   0x4f5280-0x4f52b2 rank=123 name=fcn.004f5280 kind=r2_discovered bytes=50 uncovered=50
 *   0x50d7a0-0x50d7d2 rank=124 name=fcn.0050d7a0 kind=r2_discovered bytes=50 uncovered=50
 *   0x5245c0-0x5245f2 rank=125 name=fcn.005245c0 kind=r2_discovered bytes=50 uncovered=50
 *   0x54e080-0x54e0b2 rank=126 name=fcn.0054e080 kind=r2_discovered bytes=50 uncovered=50
 *   0x56bed0-0x56bf02 rank=127 name=method.std::codecvt_wchar_t__char____mbstate_t_.virtual_40 kind=native_discovered bytes=50 uncovered=50
 *   0x255a8-0x255d9 rank=128 name=fcn.000255a8 kind=r2_discovered bytes=49 uncovered=49
 *   0x29cb8-0x29ce9 rank=129 name=fcn.00029cb8 kind=r2_discovered bytes=49 uncovered=49
 *   0x474e6-0x47517 rank=130 name=fcn.000474e6 kind=r2_discovered bytes=49 uncovered=49
 *   0x4a336-0x4a367 rank=131 name=fcn.0004a336 kind=r2_discovered bytes=49 uncovered=49
 *   0x4a368-0x4a399 rank=132 name=fcn.0004a368 kind=r2_discovered bytes=49 uncovered=49
 *   0x60c44-0x60c75 rank=133 name=fcn.00060c44 kind=r2_discovered bytes=49 uncovered=49
 *   0x61bbe-0x61bef rank=134 name=fcn.00061bbe kind=r2_discovered bytes=49 uncovered=49
 *   0x4478f4-0x447925 rank=135 name=fcn.004478f4 kind=r2_discovered bytes=49 uncovered=49
 *   0x49449a-0x4944cb rank=136 name=fcn.0049449a kind=r2_discovered bytes=49 uncovered=49
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
extern int g4;
extern int g5;
extern int g6;
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

int64_t function_255a8(int64_t a1, int64_t a2);
int64_t function_29cb8(int64_t a1, int64_t a2);
int64_t function_4478bc();
int64_t function_4478f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_474e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_49449a(int64_t a1, int64_t a2);
int64_t function_4a336(int64_t a1, int64_t a2);
int64_t function_4a368(int64_t a1, int64_t a2);
int64_t function_4b0d80();
int64_t function_4ba840(int64_t a1);
int64_t function_4eeb50();
int64_t function_4f51e0(int64_t a1, int64_t a2);
int64_t function_4f5280(int64_t a1, int64_t a2);
int64_t function_50d7a0(int64_t a1);
int64_t function_5245c0(int64_t a1);
int64_t function_54e080(int64_t a1);
int64_t function_565f30();
int64_t function_56bed0(int64_t a1);
int64_t function_60c44(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_61bbe(int64_t a1);

// Address range: 0x255a8 - 0x255d9
int64_t function_255a8(int64_t a1, int64_t a2) {
    // 0x255a8
    int64_t result; // 0x255a8
    if (a2 == 0) {
        // 0x255d4
        return result;
    }
    // 0x255a8
    function_255a8(a1, *(int64_t *)(a2 + 24));
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x255c3
    result = function_4eeb50(a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        function_255a8(a1, *(int64_t *)(v2 + 24));
        v1 = *(int64_t *)(v2 + 16);
        result = function_4eeb50(v2);
    }
    // 0x255d4
    return result;
}

// Address range: 0x29cb8 - 0x29ce9
int64_t function_29cb8(int64_t a1, int64_t a2) {
    // 0x29cb8
    int64_t result; // 0x29cb8
    if (a2 == 0) {
        // 0x29ce4
        return result;
    }
    // 0x29cb8
    function_29cb8(a1, *(int64_t *)(a2 + 24));
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x29cd3
    result = function_4eeb50(a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        function_29cb8(a1, *(int64_t *)(v2 + 24));
        v1 = *(int64_t *)(v2 + 16);
        result = function_4eeb50(v2);
    }
    // 0x29ce4
    return result;
}

// Address range: 0x474e6 - 0x47517
int64_t function_474e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 59); // 0x474e6
    char v2 = *v1;
    if (v2 == -1) {
        // 0x47516
        return 255;
    }
    unsigned char v3 = v2 + 1; // 0x474ed
    *v1 = v3;
    int64_t v4 = v3; // 0x474f2
    int64_t result = v4; // 0x474f8
    if (v3 < 5) {
        // 0x474fa
        result = a1 + 48 + 12 * (0x100000000 * v4 - 0x100000000 >> 32);
        *(int16_t *)(result + 12) = (int16_t)a2;
        *(int32_t *)(result + 14) = (int32_t)a3;
        *(int32_t *)(result + 18) = (int32_t)a4;
        *(int16_t *)(result + 22) = (int16_t)a5;
    }
    // 0x47516
    return result;
}

// Address range: 0x4a336 - 0x4a367
int64_t function_4a336(int64_t a1, int64_t a2) {
    // 0x4a336
    int64_t result; // 0x4a336
    if (a2 == 0) {
        // 0x4a362
        return result;
    }
    // 0x4a336
    function_4a336(a1, *(int64_t *)(a2 + 24));
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x4a351
    result = function_4eeb50(a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        function_4a336(a1, *(int64_t *)(v2 + 24));
        v1 = *(int64_t *)(v2 + 16);
        result = function_4eeb50(v2);
    }
    // 0x4a362
    return result;
}

// Address range: 0x4a368 - 0x4a399
int64_t function_4a368(int64_t a1, int64_t a2) {
    // 0x4a368
    int64_t result; // 0x4a368
    if (a2 == 0) {
        // 0x4a394
        return result;
    }
    // 0x4a368
    function_4a368(a1, *(int64_t *)(a2 + 24));
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x4a383
    result = function_4eeb50(a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        function_4a368(a1, *(int64_t *)(v2 + 24));
        v1 = *(int64_t *)(v2 + 16);
        result = function_4eeb50(v2);
    }
    // 0x4a394
    return result;
}

// Address range: 0x60c44 - 0x60c75
int64_t function_60c44(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = *(int64_t *)(a1 - 24); // 0x60c4b
    if (v1 == 0) {
        // 0x60c74
        return -1;
    }
    uint64_t v2 = v1 - 1; // 0x60c54
    int64_t v3 = v2 > a3 ? a3 : v2;
    if (v3 == -1) {
        // 0x60c74
        return -1;
    }
    int64_t v4 = v3;
    int64_t result = v4; // 0x60c6d
    while (*(char *)(v4 + a1) != (char)a2) {
        // 0x60c6f
        result = -1;
        if (v4 == 0) {
            // break -> 0x60c74
            break;
        }
        v4--;
        result = v4;
    }
    // 0x60c74
    return result;
}

// Address range: 0x61bbe - 0x61bef
int64_t function_61bbe(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x61bc2
    int64_t result = a1; // 0x61be3
    if (v1 != __readfsqword(40)) {
        // 0x61be5
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x61bea
    return result;
}

// Address range: 0x4478f4 - 0x447921
int64_t function_4478f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x4478f4
    char * v3 = (char *)(v2 + 0x38ff3509); // 0x4478f4
    char v4 = *v3 + (char)(v2 / 256); // 0x4478f4
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x4478f4
    *v3 = v4;
    int64_t v6 = 0x10000 * (int32_t)v2 >> 16; // 0x4478fb
    if (v5 % 2 != 0) {
        v6 = function_4478bc();
    }
    int64_t v7 = a3 & -0xff01 | (int64_t)&g6; // 0x447901
    int64_t v8 = v2 & -0xff01 | (int64_t)&g1; // 0x447907
    int16_t v9 = v7; // 0x44790a
    char v10 = __asm_in(v9); // 0x44790a
    __asm_outsb(v9, *(char *)&v1);
    __asm_int(53);
    *(int32_t *)a1 = *(int32_t *)&v1;
    int64_t v11 = (int64_t)*(int32_t *)v8; // 0x447913
    char * v12 = (char *)(a4 - 116); // 0x447916
    char v13 = *v12; // 0x447916
    *v12 = v13 - (char)((v6 | (int64_t)v10) / 256) + (char)(34 * v11 != 0x2200000000 * v11 >> 32);
    char * v14 = (char *)(2 * v1 + 8); // 0x447919
    *v14 = *v14 ^ 98;
    uint32_t v15 = __asm_in_133((int16_t)(v7 - v8) % 256 | (int16_t)((int64_t)&g6 & 0xff00)); // 0x44791d
    return ((int64_t)(v15 % 256) | (int64_t)(v15 & -256)) ^ 58;
}

// Address range: 0x49449a - 0x4944cb
int64_t function_49449a(int64_t a1, int64_t a2) {
    // 0x49449a
    int64_t result; // 0x49449a
    if (a2 == 0) {
        // 0x4944c6
        return result;
    }
    // 0x49449a
    function_49449a(a1, *(int64_t *)(a2 + 24));
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x4944b5
    result = function_4eeb50(a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        function_49449a(a1, *(int64_t *)(v2 + 24));
        v1 = *(int64_t *)(v2 + 16);
        result = function_4eeb50(v2);
    }
    // 0x4944c6
    return result;
}

// Address range: 0x4ba840 - 0x4ba871
int64_t function_4ba840(int64_t a1) {
    int64_t result = function_4b0d80(a1, 1); // 0x4ba849
    if ((int32_t)result == 0) {
        // 0x4ba858
        return function_4b0d80(a1 + 24, 1);
    }
    // 0x4ba852
    return result;
}

// Address range: 0x4f51e0 - 0x4f5212
int64_t function_4f51e0(int64_t a1, int64_t a2) {
    // 0x4f51e0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g4;
    int64_t result = function_565f30(); // 0x4f5202
    *(int64_t *)(a1 + 16) = result;
    return result;
}

// Address range: 0x4f5280 - 0x4f52b2
// From class:    std::codecvt<wchar_t, char, __mbstate_t>
// Type:          constructor
int64_t function_4f5280(int64_t a1, int64_t a2) {
    // 0x4f5280
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g5;
    int64_t result = function_565f30(); // 0x4f52a2
    *(int64_t *)(a1 + 16) = result;
    return result;
}

// Address range: 0x50d7a0 - 0x50d7ca
int64_t function_50d7a0(int64_t a1) {
    // 0x50d7a0
    if (a1 == 0) {
        // 0x50d7c5
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x50d7ac
    uint64_t v2 = *v1; // 0x50d7ac
    int64_t result = v2; // 0x50d7b4
    if (v2 < *(int64_t *)(a1 + 24)) {
        // 0x50d7b6
        *v1 = v2 + 4;
        *(int32_t *)(a1 + 8) = -1;
        result = a1;
    }
    // 0x50d7c5
    return result;
}

// Address range: 0x5245c0 - 0x5245ea
int64_t function_5245c0(int64_t a1) {
    // 0x5245c0
    if (a1 == 0) {
        // 0x5245e5
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x5245cc
    uint64_t v2 = *v1; // 0x5245cc
    int64_t result = v2; // 0x5245d4
    if (v2 < *(int64_t *)(a1 + 24)) {
        // 0x5245d6
        *v1 = v2 + 1;
        *(int32_t *)(a1 + 8) = -1;
        result = a1;
    }
    // 0x5245e5
    return result;
}

// Address range: 0x54e080 - 0x54e0b1
int64_t function_54e080(int64_t a1) {
    // 0x54e080
    if (*(int64_t *)(a1 + 8) - a1 < 3) {
        // 0x54e092
        return 0;
    }
    // 0x54e098
    *(int16_t *)a1 = -0x4411;
    *(char *)(a1 + 2) = -65;
    return 1;
}

// Address range: 0x56bed0 - 0x56bf02
// From class:    std::codecvt_byname<wchar_t, char, __mbstate_t>
// Type:          virtual member function
int64_t function_56bed0(int64_t a1) {
    struct __locale_struct * v1 = __uselocale((struct __locale_struct *)*(int64_t *)(a1 + 16)); // 0x56beda
    int32_t v2 = __ctype_get_mb_cur_max(); // 0x56bee2
    __uselocale(v1);
    return v2 == 1;
}
