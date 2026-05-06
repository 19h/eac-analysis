/*
 * Targeted RetDec C for native executable gap queue batch 117.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4ba580-0x4ba5a3 rank=105 name=fcn.004ba580 kind=r2_discovered bytes=35 uncovered=35
 *   0x4ba6b0-0x4ba6d3 rank=106 name=fcn.004ba6b0 kind=r2_discovered bytes=35 uncovered=35
 *   0x56d3b0-0x56d3d3 rank=107 name=fcn.0056d3b0 kind=r2_discovered bytes=35 uncovered=35
 *   0x20dca-0x20dec rank=108 name=entry.init1 kind=native_discovered bytes=34 uncovered=34
 *   0x372b0-0x372d2 rank=109 name=fcn.000372b0 kind=r2_discovered bytes=34 uncovered=34
 *   0x4ae54-0x4ae76 rank=110 name=fcn.0004ae54 kind=r2_discovered bytes=34 uncovered=34
 *   0x4c7c2-0x4c7e4 rank=111 name=fcn.0004c7c2 kind=r2_discovered bytes=34 uncovered=34
 *   0x61d6e-0x61d90 rank=112 name=fcn.00061d6e kind=r2_discovered bytes=34 uncovered=34
 *   0x28494c-0x28496e rank=113 name=int.0028494c kind=native_discovered bytes=34 uncovered=34
 *   0x2a468f-0x2a46b1 rank=114 name=fcn.002a468f kind=r2_discovered bytes=34 uncovered=34
 *   0x4f18e0-0x4f1902 rank=115 name=fcn.004f18e0 kind=r2_discovered bytes=34 uncovered=34
 *   0x2b88e-0x2b8af rank=116 name=fcn.0002b88e kind=r2_discovered bytes=33 uncovered=33
 *   0x361a8-0x361c9 rank=117 name=fcn.000361a8 kind=r2_discovered bytes=33 uncovered=33
 *   0x2e117a-0x2e119b rank=118 name=fcn.002e117a kind=r2_discovered bytes=33 uncovered=33
 *   0x358a24-0x358a45 rank=119 name=fcn.00358a24 kind=r2_discovered bytes=33 uncovered=33
 *   0x4927ac-0x4927cd rank=120 name=fcn.004927ac kind=r2_discovered bytes=33 uncovered=33
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
#define SIGALARM 14
#define SYS_getegid32 50
#define PTHREAD_MUTEX_RECURSIVE 1
extern int g1;
extern int g2;
extern int g3;
extern int g4;
extern int g5;
extern int g6;
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
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
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
int64_t unknown_1a5f8c06(void);
int64_t unknown_fce9f06(void);
int64_t unknown_6830301e(void);
int64_t unknown_2f0fdc0b(void);
int64_t unknown_38ae20ec(void);
int64_t unknown_401c0cfa(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffffba4fa1e3(void);
int64_t unknown_ffffffffa83be585(void);
int64_t unknown_ffffffffa337f4e6(void);
int64_t unknown_ffffffffb8c4d43e(void);
int64_t unknown_ffffffffc9a6c1f7(void);
int64_t unknown_ffffffffe026915f(void);
int64_t unknown_ffffffffffa50add(void);
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
int64_t blake3_hasher_init_derive_key_raw(int64_t hasher, int64_t context, int64_t context_len);
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
struct __locale_struct *__newlocale(int category_mask, const char *locale, struct __locale_struct *base);
void __freelocale(struct __locale_struct *locale);
struct __locale_struct *__uselocale(struct __locale_struct *locale);
float32_t __strtof_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float64_t __strtod_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float80_t strtold_l(const char *nptr, char **endptr, struct __locale_struct *locale);
int32_t __strcoll_l(const char *s1, const char *s2, struct __locale_struct *locale);
int32_t __wcscoll_l(const int32_t *s1, const int32_t *s2, struct __locale_struct *locale);
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
int64_t signal(int signum, int64_t handler);
unsigned int alarm(unsigned int seconds);
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
int32_t __strftime_l(char *s, int32_t max, const char *format, struct tm *tm, struct __locale_struct *locale);
int32_t __wcsftime_l(int32_t *s, int32_t max, int32_t *format, struct tm *tm, struct __locale_struct *locale);
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

int64_t function_20dca(void);
int64_t function_24e1e();
int64_t function_28494c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a4688();
int64_t function_2a468f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b79a();
int64_t function_2b88e(int64_t a1);
int64_t function_2e117a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_358a24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_361a8(int64_t a1);
int64_t function_372b0(int64_t a1);
int64_t function_491110();
int64_t function_491fda();
int64_t function_4927ac(int64_t a1);
int64_t function_4ad0c();
int64_t function_4ae44();
int64_t function_4ae54(int64_t a1, int64_t a2);
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4ba580(int64_t a1);
int64_t function_4ba6b0(int64_t a1);
int64_t function_4c7c2(int64_t a1);
int64_t function_4eeb30();
int64_t function_4f1700();
int64_t function_4f18e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_56d3b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_61d6e(int64_t a1, uint64_t a2);
int64_t function_71c60();

// Address range: 0x20dca - 0x20dec
int64_t function_20dca(void) {
    // 0x20dca
    g6 = 0;
    g5 = 0;
    g4 = 0;
    int64_t result; // 0x20dca
    return result;
}

// Address range: 0x2b88e - 0x2b8af
int64_t function_2b88e(int64_t a1) {
    // 0x2b88e
    return function_2b79a();
}

// Address range: 0x361a8 - 0x361c9
int64_t function_361a8(int64_t a1) {
    // 0x361a8
    if (a1 == 0) {
        // 0x361c7
        int64_t result; // 0x361a8
        return result;
    }
    // 0x361b1
    function_491110(a1);
    return function_4eeb30(a1, 48);
}

// Address range: 0x372b0 - 0x372d2
int64_t function_372b0(int64_t a1) {
    // 0x372b0
    *(int64_t *)a1 = (int64_t)&g3;
    int64_t result = function_71c60(a1 + 16); // 0x372c3
    *(int64_t *)(a1 + 8) = 0;
    return result;
}

// Address range: 0x4ae54 - 0x4ae76
int64_t function_4ae54(int64_t a1, int64_t a2) {
    // 0x4ae54
    if ((char)function_4ad0c() == 0) {
        // 0x4ae74
        int64_t result; // 0x4ae54
        return result;
    }
    // 0x4ae61
    function_4ae44();
    return *(int64_t *)(a1 + 40);
}

// Address range: 0x4c7c2 - 0x4c7e4
int64_t function_4c7c2(int64_t a1) {
    int64_t v1 = function_24e1e() - *(int64_t *)(a1 + (int64_t)&g2); // 0x4c7cb
    int64_t v2 = v1 - 0x3b9ac9fff; // 0x4c7dd
    return v1 & -256 | (int64_t)(v2 == 0 | v2 < 0 != (0x3b9ac9ffe - v1 & v1) < 0);
}

// Address range: 0x61d6e - 0x61d90
int64_t function_61d6e(int64_t a1, uint64_t a2) {
    char * v1 = (char *)(a1 + 272); // 0x61d6e
    unsigned char v2 = *v1; // 0x61d6e
    int64_t v3; // 0x61d6e
    int64_t v4 = v3 & -256; // 0x61d6e
    if (v2 != 0) {
        // 0x61d8f
        return v4 | (int64_t)(*(int64_t *)(a1 + 264) >= a2);
    }
    int64_t result = v4 | (int64_t)v2; // 0x61d6e
    if (a2 != 0) {
        // 0x61d8f
        return result;
    }
    // 0x61d7d
    *v1 = 1;
    return result;
}

// Address range: 0x28494c - 0x28496e
int64_t function_28494c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28494c
    int64_t v1; // 0x28494c
    char v2 = v1; // 0x28494c
    __asm_out(-44, v2);
    __asm_out_133((int16_t)a3, v2);
    int64_t v3 = a3 & -0xff01 | (int64_t)&g1; // 0x284960
    __asm_int(2);
    int32_t * v4 = (int32_t *)(2 * v3 & 254 | v3 & -256); // 0x284968
    uint32_t v5 = *v4; // 0x284968
    *v4 = v5 / 2 | 0x80000000 * v5;
    return __asm_iretd();
}

// Address range: 0x2a468f - 0x2a46aa
int64_t function_2a468f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a468f
    int64_t v1; // 0x2a468f
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)a1; // 0x2a4691
    uint32_t v4 = (int32_t)v2 + v3; // 0x2a4691
    int64_t v5 = __asm_int1(v4); // 0x2a4699
    if (v4 >= v3) {
        v5 = function_2a4688();
    }
    int64_t v6 = v5;
    char v7 = *(char *)v6; // 0x2a469c
    int64_t result = v6 & -256 | (int64_t)(v7 + (char)v6); // 0x2a469c
    uint64_t v8 = (int64_t)((int32_t)result < 0x72754f01) + a5; // 0x2a46a3
    bool v9 = (int32_t)result < 0x72754f01 ? v8 != -1 | v2 < v2 + (int64_t)((int32_t)result < 0x72754f01) - v8 : v2 < v8; // 0x2a46a3
    char * v10 = (char *)result; // 0x2a46a8
    *v10 = *v10 + (char)a4 + (char)v9;
    return result;
}

// Address range: 0x2e117a - 0x2e119a
int64_t function_2e117a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e117a
    int64_t v1; // 0x2e117a
    char * v2 = (char *)(v1 - 0x17b5a3ff); // 0x2e1183
    *v2 = *v2 & (char)v1;
    __readgsbyte(a2);
    return __asm_in(90);
}

// Address range: 0x358a24 - 0x358a44
int64_t function_358a24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x358a24
    int64_t v1; // 0x358a24
    __asm_out(91, (char)v1);
    char * v2 = (char *)(a3 - 82); // 0x358a2a
    *v2 = *v2 & -24;
    int32_t * v3 = (int32_t *)(a3 + 0x11dcb455); // 0x358a2e
    *v3 = *v3 + (int32_t)a1;
    return unknown_ffffffffb8c4d43e() & 0xffffffff ^ 0xfa01e8af;
}

// Address range: 0x4927ac - 0x4927cd
int64_t function_4927ac(int64_t a1) {
    // 0x4927ac
    if (a1 == 0) {
        // 0x4927cb
        int64_t result; // 0x4927ac
        return result;
    }
    // 0x4927b5
    function_491fda(a1);
    return function_4eeb30(a1, 32);
}

// Address range: 0x4ba580 - 0x4ba5a1
int64_t function_4ba580(int64_t a1) {
    // 0x4ba580
    if (a1 == 0) {
        // 0x4ba5a8
        int64_t result; // 0x4ba580
        return result;
    }
    // 0x4ba589
    function_4b0870(a1);
    function_4b0870(a1 + 24);
    return function_4b0870(a1 + 48);
}

// Address range: 0x4ba6b0 - 0x4ba6d1
int64_t function_4ba6b0(int64_t a1) {
    // 0x4ba6b0
    if (a1 == 0) {
        // 0x4ba6d8
        int64_t result; // 0x4ba6b0
        return result;
    }
    // 0x4ba6b9
    function_4b0890(a1);
    function_4b0890(a1 + 24);
    return function_4b0890(a1 + 48);
}

// Address range: 0x4f18e0 - 0x4f1902
int64_t function_4f18e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_4f1700(); // 0x4f18eb
    return lseek64((int32_t)v1, (int32_t)a2, (int32_t)a3);
}

// Address range: 0x56d3b0 - 0x56d3d3
int64_t function_56d3b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x56d3bd
    char * v2 = (char *)a2; // 0x56d3c4
    int32_t result = __strftime_l(v2, (int32_t)a3, (char *)a4, (struct tm *)a5, (struct __locale_struct *)v1); // 0x56d3c4
    if (result == 0) {
        // 0x56d3ce
        *v2 = 0;
    }
    // 0x56d3d1
    return result;
}
