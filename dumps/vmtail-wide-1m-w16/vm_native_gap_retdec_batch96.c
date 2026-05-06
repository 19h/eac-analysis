/*
 * Targeted RetDec C for native executable gap queue batch 96.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1300d5-0x13010e rank=25 name=fcn.001300d5 kind=r2_discovered bytes=57 uncovered=57
 *   0x398978-0x3989b1 rank=26 name=fcn.00398978 kind=r2_discovered bytes=57 uncovered=57
 *   0x48fcf5-0x48fd2e rank=27 name=fcn.0048fcf5 kind=r2_discovered bytes=57 uncovered=57
 *   0x492a90-0x492ac9 rank=28 name=fcn.00492a90 kind=r2_discovered bytes=57 uncovered=57
 *   0x4b6360-0x4b6399 rank=29 name=fcn.004b6360 kind=r2_discovered bytes=57 uncovered=57
 *   0x4bbb50-0x4bbb89 rank=30 name=fcn.004bbb50 kind=r2_discovered bytes=57 uncovered=57
 *   0x4f1720-0x4f1759 rank=31 name=fcn.004f1720 kind=r2_discovered bytes=57 uncovered=57
 *   0x53fa70-0x53faa9 rank=32 name=method.std::basic_filebuf_char__std::char_traits_char___.virtual_80 kind=native_discovered bytes=57 uncovered=57
 *   0x54d260-0x54d299 rank=33 name=fcn.0054d260 kind=r2_discovered bytes=57 uncovered=57
 *   0x563300-0x563339 rank=34 name=method.__gnu_cxx::stdio_sync_filebuf_char__std::char_traits_char___.virtual_88 kind=native_discovered bytes=57 uncovered=57
 *   0x563540-0x563579 rank=35 name=method.__gnu_cxx::stdio_sync_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_88 kind=native_discovered bytes=57 uncovered=57
 *   0x29c46-0x29c7e rank=36 name=fcn.00029c46 kind=r2_discovered bytes=56 uncovered=56
 *   0x5294a-0x52982 rank=37 name=fcn.0005294a kind=r2_discovered bytes=56 uncovered=56
 *   0x613f0-0x61428 rank=38 name=fcn.000613f0 kind=r2_discovered bytes=56 uncovered=56
 *   0x4065ad-0x4065e5 rank=39 name=fcn.004065ad kind=r2_discovered bytes=56 uncovered=56
 *   0x48db2f-0x48db67 rank=40 name=fcn.0048db2f kind=r2_discovered bytes=56 uncovered=56
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

int64_t function_1300a3();
int64_t function_1300b7();
int64_t function_1300d5(int64_t a1, uint64_t a2);
int64_t function_1300e7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2508e();
int64_t function_29c46(int64_t a1);
int64_t function_35c52();
int64_t function_39890f();
int64_t function_398978(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3989ab(int64_t a1);
int64_t function_4065ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4065cb(void);
int64_t function_48db2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48f4fd();
int64_t function_48fb27();
int64_t function_48fcf5(int64_t a1);
int64_t function_492a90(int64_t a1);
int64_t function_4b5fe0();
int64_t function_4b60a0();
int64_t function_4b6360(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4bb8d0();
int64_t function_4bbb50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4f15a0();
int64_t function_4f1720(int64_t file);
int64_t function_50fd4();
int64_t function_5289c();
int64_t function_5294a(int64_t result, int64_t a2, int64_t a3);
int64_t function_53fa70(int64_t a1);
int64_t function_54d260(int64_t a1);
int64_t function_563300(int64_t a1, int64_t a2);
int64_t function_563540(int64_t a1, int64_t a2);
int64_t function_565970();
int64_t function_5679e0();
int64_t function_613f0(int64_t a1);

// Address range: 0x29c46 - 0x29c7e
int64_t function_29c46(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x29c4d
    int64_t v2 = a1; // 0x29c57
    int64_t result; // 0x29c46
    if (v1 != a1) {
        int64_t v3 = a1 + 8; // 0x29c5c
        result = function_2508e(a1);
        v2 = a1;
        while (v1 != v3) {
            int64_t v4 = v3;
            v3 = v4 + 8;
            result = function_2508e(v4);
            v2 = v4;
        }
    }
    // 0x29c67
    if (v2 == 0) {
        // 0x29c79
        return result;
    }
    // 0x29c70
    return function_4eeb50(v2);
}

// Address range: 0x5294a - 0x52982
int64_t function_5294a(int64_t result, int64_t a2, int64_t a3) {
    // 0x5294a
    *(int64_t *)result = function_50fd4(a2 - 24);
    function_5289c(result, a3, function_35c52(a3));
    return result;
}

// Address range: 0x613f0 - 0x61428
int64_t function_613f0(int64_t a1) {
    // 0x613f0
    *(char *)a1 = 0;
    __asm_mfence();
    *(int64_t *)(a1 + 24) = -1;
    *(int32_t *)(a1 + 32) = 0;
    *(int32_t *)(a1 + 36) = 1;
    __asm_mfence();
    *(int64_t *)(a1 + 48) = 0x7fffffffffffffff;
    *(char *)(a1 + 56) = (char)__asm_mfence();
    return __asm_mfence();
}

// Address range: 0x1300d5 - 0x1300e4
int64_t function_1300d5(int64_t a1, uint64_t a2) {
    // 0x1300d5
    int64_t v1; // 0x1300d5
    *(int32_t *)0x29bd3e3d0800013d = (int32_t)v1;
    int64_t v2; // 0x1300d5
    v2 = function_1300b7();
    int64_t v3 = v2 & -256 | a2 % 256; // 0x1300e0
    return (int64_t)(*(int32_t *)(v3 + 86) * (int32_t)v3);
}

// Address range: 0x1300e7 - 0x1300ec
int64_t function_1300e7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1300e7
    int64_t v1; // 0x1300e7
    int64_t v2 = v1;
    int64_t result; // 0x1300e7
    bool v3; // 0x1300e7
    if (v3) {
        result = function_1300a3();
    }
    // 0x1300e9
    *(char *)v2 = (char)(v2 | a3 / 256);
    return result;
}

// Address range: 0x398978 - 0x3989aa
int64_t function_398978(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 78); // 0x39897b
    int32_t v2 = *v1 ^ 109; // 0x39897b
    *v1 = v2;
    int64_t v3 = unknown_ffffffffa83be585(); // 0x398984
    int64_t v4; // 0x398978
    if ((*(int32_t *)(4 * v4 + v4) || (int32_t)a4) != 1 && v2 != 0) {
        v3 = function_39890f();
    }
    // 0x3989a5
    return v3 & 0x16da6405;
}

// Address range: 0x3989ab - 0x3989ac
int64_t function_3989ab(int64_t a1) {
    // 0x3989ab
    int64_t result; // 0x3989ab
    return result;
}

// Address range: 0x4065ad - 0x4065ca
int64_t function_4065ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4065ad
    bool v1; // 0x4065ad
    if (true == !v1) {
        // 0x40661e
        int64_t result; // 0x4065ad
        return result;
    }
    int32_t * v2 = (int32_t *)(a4 - 0x13c89f7f); // 0x4065b0
    *v2 = (int32_t)v1 + (int32_t)a3 + *v2;
    int64_t v3; // 0x4065ad
    int64_t result2 = 0x100000000 * v3 >> 32 & -0x5af18cd3; // 0x4065bb
    if (a4 != 1) {
        // 0x40661e
        return result2;
    }
    int64_t * v4 = (int64_t *)(a6 + 0x41800557); // 0x4065bf
    *v4 = *v4 - 0x7e7ef723;
    return result2;
}

// Address range: 0x4065cb - 0x4065d7
int64_t function_4065cb(void) {
    // 0x4065cb
    int64_t result; // 0x4065cb
    return result;
}

// Address range: 0x48db2f - 0x48db67
int64_t function_48db2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = -1; // 0x48db3e
    int64_t v2 = a1; // 0x48db3e
    int64_t v3 = 0; // 0x48db3e
    while (v1 != 0) {
        int64_t v4 = v2;
        v1--;
        bool v5; // 0x48db2f
        v2 = v4 + (v5 ? -1 : 1);
        v3 = v1;
        if (*(char *)v4 == 0) {
            // break -> 
            break;
        }
        v3 = 0;
    }
    int64_t v6 = -2 - v3; // 0x48db46
    if (v6 == 0) {
        // 0x48db62
        return 0;
    }
    int64_t v7 = 0; // 0x48db4d
    char * v8 = (char *)(v7 + a1); // 0x48db4f
    int64_t result = function_48f4fd(*v8); // 0x48db54
    *v8 = (char)result;
    v7++;
    while (v7 != v6) {
        // 0x48db4f
        v8 = (char *)(v7 + a1);
        result = function_48f4fd(*v8);
        *v8 = (char)result;
        v7++;
    }
    // 0x48db62
    return result;
}

// Address range: 0x48fcf5 - 0x48fd2e
int64_t function_48fcf5(int64_t a1) {
    // 0x48fcf5
    *(int32_t *)a1 = (int32_t)function_48fb27();
    *(int16_t *)(a1 + 4) = (int16_t)function_48fb27();
    *(int16_t *)(a1 + 6) = (int16_t)function_48fb27();
    *(int16_t *)(a1 + 8) = (int16_t)function_48fb27();
    *(int32_t *)(a1 + 10) = (int32_t)function_48fb27();
    int64_t result = function_48fb27(); // 0x48fd23
    *(int16_t *)(a1 + 14) = (int16_t)result;
    return result;
}

// Address range: 0x492a90 - 0x492ac9
int64_t function_492a90(int64_t a1) {
    // 0x492a90
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    if (g3 == 0) {
        // 0x492ac1
        g3 = a1;
    }
    // 0x492ac8
    int64_t result; // 0x492a90
    return result;
}

// Address range: 0x4b6360 - 0x4b6399
int64_t function_4b6360(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = 0; // 0x4b6366
    if (a3 != 0) {
        // 0x4b6368
        int64_t v1; // bp-56, 0x4b6360
        function_4b60a0(&v1);
        result = function_4b5fe0(a1, &v1);
    }
    // 0x4b6397
    return result;
}

// Address range: 0x4bbb50 - 0x4bbb89
int64_t function_4bbb50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4bbb50
    if (a6 == 0) {
        // 0x4bbb87
        return 0xffffb080;
    }
    int64_t result = function_4bb8d0(); // 0x4bbb6e
    if ((int32_t)result == 0) {
        // 0x4bbb77
        *(char *)a5 = (char)a4;
        *(int64_t *)a4 = a4 + 1;
    }
    // 0x4bbb87
    return result;
}

// Address range: 0x4f1720 - 0x4f1759
int64_t function_4f1720(int64_t file) {
    // 0x4f1720
    if ((char)function_4f15a0() == 0) {
        // 0x4f173a
        return 0;
    }
    // 0x4f172d
    if (*(char *)(file + 8) == 0) {
        // 0x4f1733
        *(int64_t *)file = 0;
        // 0x4f173a
        return file;
    }
    int32_t v1 = fclose((struct _IO_FILE *)file); // 0x4f1743
    *(int64_t *)file = 0;
    if (v1 == 0) {
        // 0x4f173a
        return file;
    }
    // 0x4f173a
    return 0;
}

// Address range: 0x53fa70 - 0x53faa6
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_53fa70(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 72); // 0x53fa73
    if (result == g2) {
        // 0x53fa80
        return 0xffffffff;
    }
    // 0x53fa90
    if ((int32_t)result == -1) {
        // 0x53fa80
        return result;
    }
    // 0x53fa9b
    return (int64_t)*(char *)*(int64_t *)(a1 + 16);
}

// Address range: 0x54d260 - 0x54d299
// From class:    std::ctype<char>
// Type:          constructor
int64_t function_54d260(int64_t a1) {
    // 0x54d260
    *(int64_t *)a1 = (int64_t)&g1;
    function_5679e0(a1 + 16);
    if (*(char *)(a1 + 24) == 0) {
        // 0x54d290
        return function_565970(a1);
    }
    int64_t v1 = *(int64_t *)(a1 + 48); // 0x54d282
    if (v1 != 0) {
        // 0x54d28b
        function_4eeb40(v1);
    }
    // 0x54d290
    return function_565970(a1);
}

// Address range: 0x563300 - 0x563333
// From class:    __gnu_cxx::stdio_sync_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_563300(int64_t a1, int64_t a2) {
    int32_t c = a2; // 0x563300
    if (c != -1) {
        // 0x563328
        return ungetc(c, (struct _IO_FILE *)*(int64_t *)(a1 + 64));
    }
    int32_t * v1 = (int32_t *)(a1 + 72); // 0x563309
    int32_t c2 = *v1; // 0x563309
    int64_t ungetc_rc = 0xffffffff; // 0x56330f
    if (c2 != -1) {
        // 0x563311
        ungetc_rc = ungetc(c2, (struct _IO_FILE *)*(int64_t *)(a1 + 64));
    }
    // 0x56331c
    *v1 = -1;
    return ungetc_rc;
}

// Address range: 0x563540 - 0x563573
// From class:    __gnu_cxx::stdio_sync_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_563540(int64_t a1, int64_t a2) {
    int32_t wc = a2; // 0x563540
    if (wc != -1) {
        // 0x563568
        return ungetwc(wc, (struct _IO_FILE *)*(int64_t *)(a1 + 64));
    }
    int32_t * v1 = (int32_t *)(a1 + 72); // 0x563549
    int32_t wc2 = *v1; // 0x563549
    int64_t result = 0xffffffff; // 0x56354f
    if (wc2 != -1) {
        // 0x563551
        result = ungetwc(wc2, (struct _IO_FILE *)*(int64_t *)(a1 + 64));
    }
    // 0x56355c
    *v1 = -1;
    return result;
}
