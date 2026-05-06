/*
 * Targeted RetDec C for native executable gap queue batch 94.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4af830-0x4af86b rank=117 name=fcn.004af830 kind=r2_discovered bytes=59 uncovered=59
 *   0x50a420-0x50a45b rank=118 name=fcn.0050a420 kind=r2_discovered bytes=59 uncovered=59
 *   0x523ad0-0x523b0b rank=119 name=fcn.00523ad0 kind=r2_discovered bytes=59 uncovered=59
 *   0x536e00-0x536e3b rank=120 name=fcn.00536e00 kind=r2_discovered bytes=59 uncovered=59
 *   0x54ed10-0x54ed4b rank=121 name=fcn.0054ed10 kind=r2_discovered bytes=59 uncovered=59
 *   0x554420-0x55445b rank=122 name=fcn.00554420 kind=r2_discovered bytes=59 uncovered=59
 *   0x566180-0x5661bb rank=123 name=fcn.00566180 kind=r2_discovered bytes=59 uncovered=59
 *   0x21932-0x2196c rank=124 name=fcn.00021932 kind=r2_discovered bytes=58 uncovered=58
 *   0x25534-0x2556e rank=125 name=fcn.00025534 kind=r2_discovered bytes=58 uncovered=58
 *   0x2556e-0x255a8 rank=126 name=fcn.0002556e kind=r2_discovered bytes=58 uncovered=58
 *   0x29c7e-0x29cb8 rank=127 name=fcn.00029c7e kind=r2_discovered bytes=58 uncovered=58
 *   0x2c65e-0x2c698 rank=128 name=fcn.0002c65e kind=r2_discovered bytes=58 uncovered=58
 *   0x3b092-0x3b0cc rank=129 name=fcn.0003b092 kind=r2_discovered bytes=58 uncovered=58
 *   0x47156-0x47190 rank=130 name=fcn.00047156 kind=r2_discovered bytes=58 uncovered=58
 *   0x52512-0x5254c rank=131 name=fcn.00052512 kind=r2_discovered bytes=58 uncovered=58
 *   0x5254c-0x52586 rank=132 name=fcn.0005254c kind=r2_discovered bytes=58 uncovered=58
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
int64_t _Unwind_GetDataRelBase(int64_t context);
int64_t _Unwind_GetRegionStart();
int64_t _Unwind_RaiseException(int64_t exception);
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_21932(int64_t a1, int64_t a2);
int64_t function_21b06();
int64_t function_2508e();
int64_t function_254fe();
int64_t function_25534(int64_t a1, int64_t a2);
int64_t function_2556e(int64_t a1);
int64_t function_29c3a();
int64_t function_29c7e(int64_t a1);
int64_t function_2c2fa();
int64_t function_2c65e(int64_t a1, int64_t a2);
int64_t function_3ae18();
int64_t function_3b092(int64_t a1, int64_t a2);
int64_t function_47156(int64_t a1, int64_t a2);
int64_t function_4af830(int64_t a1);
int64_t function_4eeb50();
int64_t function_50a420(int64_t a1, int64_t a2);
int64_t function_523ad0(int64_t a1, int64_t a2);
int64_t function_52512(int64_t a1, int64_t a2);
int64_t function_5254c(int64_t a1, int64_t a2);
int64_t function_536e00(int64_t a1, int64_t a2);
int64_t function_54ed10(int64_t a1);
int64_t function_554420(int64_t a1, int64_t a2);
int64_t function_565f30();
int64_t function_565f80();
int64_t function_565f90();
int64_t function_566180(int64_t a1);

// Address range: 0x21932 - 0x2196c
int64_t function_21932(int64_t a1, int64_t a2) {
    // 0x21932
    *(int32_t *)a1 = *(int32_t *)a2;
    *(int16_t *)(a1 + 4) = (int16_t)*(int32_t *)(a2 + 4);
    function_21b06(a1 + 8, a2 + 8);
    __asm_movups_133(*(int128_t *)(a1 + 32), __asm_movups(*(int128_t *)(a2 + 32)));
    __asm_movups_133(*(int128_t *)(a1 + 48), __asm_movups(*(int128_t *)(a2 + 48)));
    int64_t result; // 0x21932
    return result;
}

// Address range: 0x25534 - 0x2556e
int64_t function_25534(int64_t a1, int64_t a2) {
    // 0x25534
    int64_t result; // 0x25534
    if (a2 == 0) {
        // 0x25569
        return result;
    }
    // 0x25534
    function_25534(a1, *(int64_t *)(a2 + 24));
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x25553
    function_254fe(a2 + 40);
    result = function_4eeb50(a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        function_25534(a1, *(int64_t *)(v2 + 24));
        v1 = *(int64_t *)(v2 + 16);
        function_254fe(v2 + 40);
        result = function_4eeb50(v2);
    }
    // 0x25569
    return result;
}

// Address range: 0x2556e - 0x255a8
int64_t function_2556e(int64_t a1) {
    // 0x2556e
    if (a1 == 0) {
        // 0x255a7
        int64_t result; // 0x2556e
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 40); // 0x2557f
    uint64_t v2 = *(int64_t *)(a1 + 72) + 8; // 0x25583
    if (v2 <= v1) {
        // 0x2559b
        return function_4eeb50(a1);
    }
    int64_t v3 = v1; // 0x2558a
    int64_t v4 = *(int64_t *)v3; // 0x2558c
    v3 += 8;
    function_4eeb50(v4);
    int64_t v5 = v4; // 0x2558a
    while (v2 > v3) {
        // 0x2558c
        v4 = *(int64_t *)v3;
        v3 += 8;
        function_4eeb50(v4);
        v5 = v4;
    }
    // 0x2559b
    return function_4eeb50(v5);
}

// Address range: 0x29c7e - 0x29cb8
int64_t function_29c7e(int64_t a1) {
    // 0x29c7e
    if (a1 == 0) {
        // 0x29cb7
        int64_t result; // 0x29c7e
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 40); // 0x29c8f
    uint64_t v2 = *(int64_t *)(a1 + 72) + 8; // 0x29c93
    if (v2 <= v1) {
        // 0x29cab
        return function_4eeb50(a1);
    }
    int64_t v3 = v1; // 0x29c9a
    int64_t v4 = *(int64_t *)v3; // 0x29c9c
    v3 += 8;
    function_4eeb50(v4);
    int64_t v5 = v4; // 0x29c9a
    while (v2 > v3) {
        // 0x29c9c
        v4 = *(int64_t *)v3;
        v3 += 8;
        function_4eeb50(v4);
        v5 = v4;
    }
    // 0x29cab
    return function_4eeb50(v5);
}

// Address range: 0x2c65e - 0x2c698
int64_t function_2c65e(int64_t a1, int64_t a2) {
    // 0x2c65e
    int64_t result; // 0x2c65e
    if (a2 == 0) {
        // 0x2c693
        return result;
    }
    // 0x2c65e
    function_2c65e(a1, *(int64_t *)(a2 + 24));
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x2c67d
    function_2c2fa(a2 + 40);
    result = function_4eeb50(a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        function_2c65e(a1, *(int64_t *)(v2 + 24));
        v1 = *(int64_t *)(v2 + 16);
        function_2c2fa(v2 + 40);
        result = function_4eeb50(v2);
    }
    // 0x2c693
    return result;
}

// Address range: 0x3b092 - 0x3b0cc
int64_t function_3b092(int64_t a1, int64_t a2) {
    // 0x3b092
    int64_t result; // 0x3b092
    if (a2 == 0) {
        // 0x3b0c7
        return result;
    }
    // 0x3b092
    function_3b092(a1, *(int64_t *)(a2 + 24));
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x3b0b1
    function_3ae18(*(int64_t *)(a2 + 32));
    result = function_4eeb50(a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        function_3b092(a1, *(int64_t *)(v2 + 24));
        v1 = *(int64_t *)(v2 + 16);
        function_3ae18(*(int64_t *)(v2 + 32));
        result = function_4eeb50(v2);
    }
    // 0x3b0c7
    return result;
}

// Address range: 0x47156 - 0x47190
int64_t function_47156(int64_t a1, int64_t a2) {
    int64_t result = *(int64_t *)(8 * a2 + a1); // 0x47159
    if (result == 0) {
        // 0x4718c
        return 0;
    }
    // 0x47162
    int64_t v1; // 0x47156
    int32_t v2 = v1;
    int64_t v3 = *(int64_t *)result; // 0x47162
    if (*(int32_t *)(v3 + 8) == v2) {
        // 0x4718c
        return result;
    }
    int64_t v4 = v3;
    int64_t v5 = *(int64_t *)v4; // 0x4716e
    int64_t result2 = 0; // 0x47174
    while (v5 != 0) {
        uint32_t v6 = *(int32_t *)(v5 + 8); // 0x4717c
        result2 = 0;
        if ((int64_t)v6 % *(int64_t *)(a1 + 8) != a2) {
            // break -> 0x4718c
            break;
        }
        // 0x47168
        result2 = v4;
        if (v6 == v2) {
            // break -> 0x4718c
            break;
        }
        v4 = v5;
        v5 = *(int64_t *)v4;
        result2 = 0;
    }
    // 0x4718c
    return result2;
}

// Address range: 0x52512 - 0x5254c
int64_t function_52512(int64_t a1, int64_t a2) {
    // 0x52512
    int64_t result; // 0x52512
    if (a2 == 0) {
        // 0x52547
        return result;
    }
    // 0x52512
    function_52512(a1, *(int64_t *)(a2 + 24));
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x52531
    function_29c3a(a2 + 32);
    result = function_4eeb50(a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        function_52512(a1, *(int64_t *)(v2 + 24));
        v1 = *(int64_t *)(v2 + 16);
        function_29c3a(v2 + 32);
        result = function_4eeb50(v2);
    }
    // 0x52547
    return result;
}

// Address range: 0x5254c - 0x52586
int64_t function_5254c(int64_t a1, int64_t a2) {
    // 0x5254c
    int64_t result; // 0x5254c
    if (a2 == 0) {
        // 0x52581
        return result;
    }
    // 0x5254c
    function_5254c(a1, *(int64_t *)(a2 + 24));
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x5256b
    function_2508e(a2 + 32);
    result = function_4eeb50(a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        function_5254c(a1, *(int64_t *)(v2 + 24));
        v1 = *(int64_t *)(v2 + 16);
        function_2508e(v2 + 32);
        result = function_4eeb50(v2);
    }
    // 0x52581
    return result;
}

// Address range: 0x4af830 - 0x4af86b
int64_t function_4af830(int64_t a1) {
    // 0x4af830
    if (g6 != 0) {
        // 0x4af85f
        return (g7 & (int32_t)a1) != 0;
    }
    // 0x4af83a
    g6 = 1;
    int32_t v1 = __asm_cpuid(1).e2; // 0x4af84a
    g7 = v1;
    return (v1 & (int32_t)a1) != 0;
}

// Address range: 0x50a420 - 0x50a45b
// From class:    std::messages<wchar_t>
// Type:          constructor
int64_t function_50a420(int64_t a1, int64_t a2) {
    // 0x50a420
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g1;
    *(int64_t *)(a1 + 16) = function_565f30();
    int64_t result = function_565f80(); // 0x50a44b
    *(int64_t *)(a1 + 24) = result;
    return result;
}

// Address range: 0x523ad0 - 0x523b0b
// From class:    std::__cxx11::messages<char>
// Type:          constructor
int64_t function_523ad0(int64_t a1, int64_t a2) {
    // 0x523ad0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g2;
    *(int64_t *)(a1 + 16) = function_565f30();
    int64_t result = function_565f80(); // 0x523afb
    *(int64_t *)(a1 + 24) = result;
    return result;
}

// Address range: 0x536e00 - 0x536e3b
// From class:    std::__cxx11::messages<wchar_t>
// Type:          constructor
int64_t function_536e00(int64_t a1, int64_t a2) {
    // 0x536e00
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g3;
    *(int64_t *)(a1 + 16) = function_565f30();
    int64_t result = function_565f80(); // 0x536e2b
    *(int64_t *)(a1 + 24) = result;
    return result;
}

// Address range: 0x54ed10 - 0x54ed48
int64_t function_54ed10(int64_t a1) {
    // 0x54ed10
    int64_t v1; // 0x54ed10
    if ((int16_t)v1 == -0x4411 == *(int64_t *)(a1 + 8) - a1 > 2) {
        // 0x54ed38
        return *(char *)(a1 + 2) != -65 ? 0 : 191;
    }
    // 0x54ed30
    return 0;
}

// Address range: 0x554420 - 0x55445b
// From class:    std::messages<char>
// Type:          constructor
int64_t function_554420(int64_t a1, int64_t a2) {
    // 0x554420
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g4;
    *(int64_t *)(a1 + 16) = function_565f30();
    int64_t result = function_565f80(); // 0x55444b
    *(int64_t *)(a1 + 24) = result;
    return result;
}

// Address range: 0x566180 - 0x5661b8
int64_t function_566180(int64_t a1) {
    // 0x566180
    int64_t v1; // 0x566180
    int32_t v2 = v1;
    int32_t v3 = v2 - 1;
    if (g5 == 0) {
        // 0x5661a0
        *(int32_t *)a1 = v3;
        if (v2 != 1) {
            // 0x56619c
            return v1 & 0xffffffff;
        }
    } else {
        // 0x56618e
        *(int32_t *)a1 = v3;
        if (v2 != 1) {
            // 0x56619c
            return v1 & 0xffffffff;
        }
    }
    // 0x5661ac
    return function_565f90(a1);
}
