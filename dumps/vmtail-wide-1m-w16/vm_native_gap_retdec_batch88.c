/*
 * Targeted RetDec C for native executable gap queue batch 88.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6a670-0x6a6b3 rank=21 name=fcn.0006a670 kind=r2_discovered bytes=67 uncovered=67
 *   0x6a6b4-0x6a6f7 rank=22 name=fcn.0006a6b4 kind=r2_discovered bytes=67 uncovered=67
 *   0x4c3590-0x4c35d3 rank=23 name=fcn.004c3590 kind=r2_discovered bytes=67 uncovered=67
 *   0x4ea2f0-0x4ea333 rank=24 name=sym.ZydisDecoderInit kind=symbol_named bytes=67 uncovered=67
 *   0x4ef280-0x4ef2c3 rank=25 name=fcn.004ef280 kind=r2_discovered bytes=67 uncovered=67
 *   0x579b00-0x579b43 rank=26 name=fcn.00579b00 kind=r2_discovered bytes=67 uncovered=67
 *   0x36166-0x361a8 rank=27 name=fcn.00036166 kind=r2_discovered bytes=66 uncovered=66
 *   0x4df5a-0x4df9c rank=28 name=fcn.0004df5a kind=r2_discovered bytes=66 uncovered=66
 *   0x56146-0x56188 rank=29 name=fcn.00056146 kind=r2_discovered bytes=66 uncovered=66
 *   0x2515a-0x25193 rank=149 name=fcn.0002515a kind=r2_discovered bytes=57 uncovered=57
 *   0x4b7340-0x4b7382 rank=31 name=fcn.004b7340 kind=r2_discovered bytes=66 uncovered=66
 *   0x4cec50-0x4cec92 rank=32 name=fcn.004cec50 kind=r2_discovered bytes=66 uncovered=66
 *   0x4d8e40-0x4d8e82 rank=33 name=sym.blake3_hasher_reset kind=symbol_named bytes=66 uncovered=66
 *   0x4f5400-0x4f5442 rank=34 name=method.std::istream.virtual_8 kind=native_discovered bytes=66 uncovered=66
 *   0x4f5500-0x4f5542 rank=35 name=method.std::basic_istream_wchar_t__std::char_traits_wchar_t___.virtual_8 kind=native_discovered bytes=66 uncovered=66
 *   0x542c40-0x542c82 rank=36 name=fcn.00542c40 kind=r2_discovered bytes=66 uncovered=66
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
float80_t __asm_fbstp(float80_t value);
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
void __stack_chk_fail(void);
int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);
int64_t _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(int64_t value);
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

int64_t function_2508e();
int64_t function_2515a(int64_t a1, int64_t a2);
int64_t function_2a25c();
int64_t function_36166(int64_t a1);
int64_t function_4b6d30();
int64_t function_4b7340(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c3590(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4cebb0();
int64_t function_4cec50(uint64_t a1);
int64_t function_4ded4();
int64_t function_4df5a(int64_t a1);
int64_t function_4eeb50();
int64_t function_4ef280(int64_t a1, int64_t a2);
int64_t function_4f5400(int64_t a1);
int64_t function_4f5500(int64_t a1);
int64_t function_504cb();
int64_t function_542c40(int64_t a1);
int64_t function_54cf10();
int64_t function_560a6();
int64_t function_5610a();
int64_t function_56146(int64_t a1, int64_t a2);
int64_t function_579a30();
int64_t function_579b00(int64_t a1);
int64_t function_6a648();
int64_t function_6a670(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_6a6b4(int64_t a1);

// Address range: 0x2515a - 0x25193
int64_t function_2515a(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x2515a
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a2 + 16); // 0x25162
    if (*v2 == 0) {
        // 0x25192
        return 0;
    }
    // 0x2516b
    *(int64_t *)(a1 + 24) = *(int64_t *)(a2 + 24);
    *v1 = *v2;
    int64_t result; // 0x2515a
    return result;
}

// Address range: 0x36166 - 0x361a8
int64_t function_36166(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x3616d
    int64_t v2 = a1; // 0x36177
    int64_t v3 = a1; // 0x36177
    int64_t result; // 0x36166
    if (v1 != a1) {
        function_2508e(v2 + 48);
        int64_t v4 = v2 + 40; // 0x36182
        v2 += 64;
        result = function_2508e(v4);
        v3 = v4;
        while (v1 != v2) {
            // 0x36179
            function_2508e(v2 + 48);
            v4 = v2 + 40;
            v2 += 64;
            result = function_2508e(v4);
            v3 = v4;
        }
    }
    // 0x36191
    if (v3 == 0) {
        // 0x361a3
        return result;
    }
    // 0x3619a
    return function_4eeb50(v3);
}

// Address range: 0x4df5a - 0x4df9c
int64_t function_4df5a(int64_t a1) {
    // 0x4df5a
    function_4ded4();
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 56) = 0;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 96) = *(int64_t *)(a1 + 88);
    int64_t result = *(int64_t *)(a1 + 24); // 0x4df92
    *(int64_t *)(a1 + 32) = result;
    return result;
}

// Address range: 0x56146 - 0x56188
int64_t function_56146(int64_t a1, int64_t a2) {
    if (a2 == 0) {
        // 0x56181
        return 0;
    }
    // 0x5614c
    *(int64_t *)(a1 + (int64_t)&g1) = 0;
    *(int64_t *)(a1 + (int64_t)&g3) = 0;
    *(int64_t *)(a1 + (int64_t)&g2) = a2;
    if ((char)function_560a6() == 0) {
        // 0x56181
        return 0;
    }
    // 0x5617b
    return function_5610a(a1);
}

// Address range: 0x6a670 - 0x6a6b3
int64_t function_6a670(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = 0x100000000000000 * a2 >> 56; // bp-28, 0x6a67d
    uint64_t v2 = *(int64_t *)(a1 - 24); // 0x6a682
    if (v2 <= a3) {
        // 0x6a6a9
        return -1;
    }
    int64_t v3 = function_504cb(a3 + a1, v2 - a3, (char *)&v1); // 0x6a699
    return v3 == 0 ? -1 : v3 - a1;
}

// Address range: 0x6a6b4 - 0x6a6f7
int64_t function_6a6b4(int64_t a1) {
    // 0x6a6b4
    *(int64_t *)a1 = (int64_t)&g6;
    int64_t v1 = *(int64_t *)(a1 + 144); // 0x6a6c2
    if (v1 != 0) {
        // 0x6a6ce
        function_4eeb50(v1);
    }
    // 0x6a6d3
    function_2a25c(a1 + 96, *(int64_t *)(a1 + 112));
    function_2a25c(a1 + 48, *(int64_t *)(a1 + 64));
    return function_6a648(a1 + 8);
}

// Address range: 0x4b7340 - 0x4b7382
int64_t function_4b7340(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b7340
    function_4b6d30();
    int64_t v1 = a1; // 0x4b7351
    int64_t v2 = a1; // 0x4b7351
    int32_t * v3 = (int32_t *)v2; // 0x4b7358
    int32_t * v4 = (int32_t *)(v1 + 120); // 0x4b735a
    int64_t v5 = 2; // 0x4b735d
    *v3 = *v4;
    *v4 = *v3;
    int32_t * v6 = (int32_t *)(v1 + 124); // 0x4b7365
    int32_t * v7 = (int32_t *)(v2 + 4); // 0x4b7368
    *v7 = *v6;
    *v6 = *v7;
    v1 -= 8;
    int64_t v8 = v5 & 0xffffffff; // 0x4b737c
    v2 += 8;
    while ((int32_t)v5 != 16) {
        // 0x4b7358
        v3 = (int32_t *)v2;
        v4 = (int32_t *)(v1 + 120);
        v5 = v8 + 2;
        *v3 = *v4;
        *v4 = *v3;
        v6 = (int32_t *)(v1 + 124);
        v7 = (int32_t *)(v2 + 4);
        *v7 = *v6;
        *v6 = *v7;
        v1 -= 8;
        v8 = v5 & 0xffffffff;
        v2 += 8;
    }
    // 0x4b737e
    return 0;
}

// Address range: 0x4c3590 - 0x4c35d2
int64_t function_4c3590(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a1; // 0x4c3590
    int64_t v2 = (int64_t)&g7; // 0x4c3593
    int64_t v3 = (int64_t)&g5; // 0x4c3593
    if (v1 == 3) {
      lab_0x4c35c8:;
        int64_t result = *(int64_t *)(v2 + 8); // 0x4c35c8
        *(int64_t *)a2 = v3;
        *(int64_t *)a3 = result;
        return result;
    }
    int64_t v4 = (int64_t)&g7;
    int64_t v5 = v4 + 40; // 0x4c35a5
    int64_t v6 = *(int64_t *)v5; // 0x4c35a9
    while (v6 != 0) {
        // 0x4c35a0
        v2 = v5;
        v3 = v6;
        if (*(int32_t *)(v4 + 72) == v1) {
            goto lab_0x4c35c8;
        }
        v4 = v5;
        v5 = v4 + 40;
        v6 = *(int64_t *)v5;
    }
    // 0x4c35b1
    return 0xffffffd2;
}

// Address range: 0x4cec50 - 0x4cec8f
int64_t function_4cec50(uint64_t a1) {
    // 0x4cec50
    int64_t v1; // bp-56, 0x4cec50
    function_4cebb0(&v1, 1);
    int64_t result = 0;
    uint64_t v2 = function_4cebb0(&v1, 0); // 0x4cec7b
    int64_t v3 = result + 1; // 0x4cec83
    while (v2 < a1) {
        // 0x4cec74
        result = v3;
        v2 = function_4cebb0(&v1, 0);
        v3 = result + 1;
    }
    // 0x4cec85
    return result;
}

// Address range: 0x4d8e40 - 0x4d8e82
int64_t blake3_hasher_reset(int64_t a1) {
    // 0x4d8e40
    int128_t v1; // 0x4d8e40
    int128_t v2 = v1;
    int64_t v3; // 0x4d8e40
    int128_t v4 = __asm_movdqu(*(int128_t *)&v3); // 0x4d8e44
    int128_t v5 = __asm_movdqu(*(int128_t *)(a1 + 16)); // 0x4d8e48
    int128_t v6 = __asm_pxor(v2, v2); // 0x4d8e4d
    *(int64_t *)(a1 + 64) = 0;
    *(int16_t *)(a1 + 136) = 0;
    *(char *)(a1 + 144) = 0;
    __asm_movups(*(int128_t *)(a1 + 32), v4);
    __asm_movups(*(int128_t *)(a1 + 48), v5);
    __asm_movups(*(int128_t *)(a1 + 72), v6);
    __asm_movups(*(int128_t *)(a1 + 88), v6);
    __asm_movups(*(int128_t *)(a1 + 104), v6);
    __asm_movups(*(int128_t *)(a1 + 120), v6);
    return 0;
}

// Address range: 0x4ea2f0 - 0x4ea32e
int64_t ZydisDecoderInit(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = 0x80100004; // 0x4ea2f7
    if (a1 == 0) {
        // 0x4ea32d
        return result;
    }
    int32_t v1 = a2; // 0x4ea2f9
    if (v1 == 0) {
        // 0x4ea32d
        return result;
    }
    uint32_t v2 = (int32_t)a3; // 0x4ea30a
    if (v1 < 6 != v2 < 2) {
        // 0x4ea32d
        return 0x80100004;
    }
    // 0x4ea30f
    *(int32_t *)a1 = v1;
    *(int32_t *)(a1 + 4) = v2;
    *(int32_t *)(a1 + 8) = (int32_t)&g4;
    return 0x100000;
}

// Address range: 0x4ef280 - 0x4ef2c3
int64_t function_4ef280(int64_t a1, int64_t a2) {
    int64_t result = a1 & 112; // 0x4ef282
    unsigned char v1 = (char)result; // 0x4ef285
    if (v1 == 32) {
        // 0x4ef2b8
        return result;
    }
    if (v1 < 33) {
        // 0x4ef2b0
        if (v1 != 0 != v1 != 16) {
            // 0x4ef2b8
            return 0;
        }
        // 0x4ef2b8
        return result;
    }
    // 0x4ef28b
    switch (v1) {
        case 64: {
            // 0x4ef2a0
            return _Unwind_GetRegionStart(a2);
        }
        case 80: {
            // 0x4ef2b8
            return 0;
        }
    }
    if (v1 == 48) {
        // 0x4ef297
        return _Unwind_GetDataRelBase(a2);
    }
    // 0x4ef2b8
    return result;
}

// Address range: 0x4f5400 - 0x4f5442
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_4f5400(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x4f540f
    *(int64_t *)v1 = (int64_t)&g8;
    int64_t v2 = v1 + 16; // 0x4f5420
    *(int64_t *)(v1 + 8) = 0;
    *(int64_t *)v2 = (int64_t)&g10;
    function_54cf10(v2);
    return function_4eeb50(v1);
}

// Address range: 0x4f5500 - 0x4f5542
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_4f5500(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x4f550f
    *(int64_t *)v1 = (int64_t)&g9;
    int64_t v2 = v1 + 16; // 0x4f5520
    *(int64_t *)(v1 + 8) = 0;
    *(int64_t *)v2 = (int64_t)&g11;
    function_54cf10(v2);
    return function_4eeb50(v1);
}

// Address range: 0x542c40 - 0x542c80
int64_t function_542c40(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 232 + *(int64_t *)(a1 - 24)); // 0x542c4b
    int64_t result = a1; // 0x542c56
    if (v1 != 0) {
        // 0x542c58
        result = (int32_t)*(int64_t *)v1 == -1 ? v1 : a1;
    }
    // 0x542c63
    return result;
}

// Address range: 0x579b00 - 0x579b43
int64_t function_579b00(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x579b00
    int64_t * v2 = (int64_t *)v1; // 0x579b00
    int64_t v3 = *v2; // 0x579b00
    int64_t result = 110; // 0x579b1b
    switch (*(char *)v3) {
        case 95: {
            // 0x579b38
            *v2 = v3 + 1;
            return 0;
        }
        default: {
            int32_t v4 = (int32_t)function_579a30(v1) + 1; // 0x579b1b
            result = v4;
            if (v4 < 0) {
                // 0x579b48
                return result;
            }
            int64_t v5 = *v2; // 0x579b20
            if (*(char *)v5 == 95) {
                // 0x579b29
                *v2 = v5 + 1;
                return result;
            }
        }
        case 110: {
            // 0x579b48
            return result;
        }
    }
}
