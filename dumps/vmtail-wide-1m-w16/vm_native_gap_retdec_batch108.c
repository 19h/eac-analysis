/*
 * Targeted RetDec C for native executable gap queue batch 108.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6a710-0x6a73b rank=89 name=fcn.0006a710 kind=r2_discovered bytes=43 uncovered=43
 *   0x248752-0x24877d rank=90 name=fcn.00248752 kind=r2_discovered bytes=43 uncovered=43
 *   0x4ad6f0-0x4ad71b rank=91 name=fcn.004ad6f0 kind=r2_discovered bytes=43 uncovered=43
 *   0x4b0df0-0x4b0e1b rank=92 name=fcn.004b0df0 kind=r2_discovered bytes=43 uncovered=43
 *   0x4ee6e0-0x4ee70b rank=93 name=sym.ZydisRegisterGetWidth kind=symbol_named bytes=43 uncovered=43
 *   0x50cf10-0x50cf3b rank=94 name=fcn.0050cf10 kind=r2_discovered bytes=43 uncovered=43
 *   0x56bf10-0x56bf3b rank=95 name=method.std::codecvt_wchar_t__char____mbstate_t_.virtual_64 kind=native_discovered bytes=43 uncovered=43
 *   0x21fba-0x21fe4 rank=96 name=fcn.00021fba kind=r2_discovered bytes=42 uncovered=42
 *   0x2537c-0x253a6 rank=97 name=fcn.0002537c kind=r2_discovered bytes=42 uncovered=42
 *   0x2aec0-0x2aeea rank=98 name=fcn.0002aec0 kind=r2_discovered bytes=42 uncovered=42
 *   0x2b64a-0x2b674 rank=99 name=fcn.0002b64a kind=r2_discovered bytes=42 uncovered=42
 *   0x36622-0x3664c rank=100 name=fcn.00036622 kind=r2_discovered bytes=42 uncovered=42
 *   0x455ee-0x45618 rank=101 name=fcn.000455ee kind=r2_discovered bytes=42 uncovered=42
 *   0x487214-0x48723e rank=102 name=fcn.00487214 kind=r2_discovered bytes=42 uncovered=42
 *   0x48d81b-0x48d845 rank=103 name=fcn.0048d81b kind=r2_discovered bytes=42 uncovered=42
 *   0x4c1e70-0x4c1e9a rank=104 name=fcn.004c1e70 kind=r2_discovered bytes=42 uncovered=42
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
extern int32_t CRC_32C__Castagnoli__poly_0x1EDC6F41_at_585720;
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
int64_t unknown_1a5f8c06(void);
int64_t unknown_fce9f06(void);
int64_t unknown_6830301e(void);
int64_t unknown_2f0fdc0b(void);
int64_t unknown_38ae20ec(void);
int64_t unknown_401c0cfa(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffffba4fa1e3(void);
int64_t unknown_ffffffffa83be585(void);
int64_t unknown_ffffffffc9a6c1f7(void);
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
int pthread_once(int32_t *once_control, int64_t init_routine);
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

int64_t function_21fba(int64_t a1);
int64_t function_248752(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6);
int64_t function_24ded();
int64_t function_2537c(int64_t a1, int64_t a2);
int64_t function_25c34();
int64_t function_25cec();
int64_t function_2a25c();
int64_t function_2aec0(int64_t a1, int64_t a2);
int64_t function_2b64a(int64_t a1);
int64_t function_2b776();
int64_t function_35c52();
int64_t function_36622(int64_t a1, int64_t a2);
int64_t function_455ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48720c();
int64_t function_487214(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48d81b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48fcf5();
int64_t function_4ad6f0(int64_t str, uint64_t size, int64_t a3);
int64_t function_4b0df0(int64_t a1, uint64_t a2);
int64_t function_4c1e70(int64_t a1);
int64_t function_50cd40();
int64_t function_50cf10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_56bf10(int64_t a1);
int64_t function_6746a();
int64_t function_6a710(int64_t a1);
int64_t function_6aba4();
int64_t function_71c60();
int64_t function_cf3c7();

// Address range: 0x21fba - 0x21fe4
int64_t function_21fba(int64_t a1) {
    // 0x21fba
    function_6aba4(a1 + 24);
    function_71c60(a1 + (int64_t)&g2);
    int64_t result = function_48fcf5(a1); // 0x21fd6
    *(int32_t *)(a1 + 16) = 0;
    return result;
}

// Address range: 0x2537c - 0x253a6
int64_t function_2537c(int64_t a1, int64_t a2) {
    // 0x2537c
    return function_25cec(a1, a2, function_24ded(a2));
}

// Address range: 0x2aec0 - 0x2aeea
int64_t function_2aec0(int64_t a1, int64_t a2) {
    // 0x2aec0
    return function_25c34(a1, a2, function_24ded(a2));
}

// Address range: 0x2b64a - 0x2b674
int64_t function_2b64a(int64_t a1) {
    int64_t v1 = function_2b776(); // 0x2b64e
    int64_t result = 0; // 0x2b656
    if (v1 != 0) {
        // 0x2b658
        result = function_6746a(v1, "SteamAPI_UnregisterCallback");
    }
    // 0x2b66c
    return result;
}

// Address range: 0x36622 - 0x3664c
int64_t function_36622(int64_t a1, int64_t a2) {
    // 0x36622
    return function_35c52(a2);
}

// Address range: 0x455ee - 0x45618
// Used cryptographic patterns:
//  - CRC_32C__Castagnoli__poly_0x1EDC6F41 (32-bit, little endian)
int64_t function_455ee(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = a3 & 0xffffffff; // 0x455f5
    int64_t v1 = 0; // 0x455fc
    if (a2 == 0) {
        // 0x45617
        return result;
    }
    int64_t result2 = result; // 0x455fc
    char v2 = *(char *)(v1 + a1); // 0x45601
    v1++;
    int32_t v3 = *(int32_t *)(4 * (int64_t)(v2 ^ (char)result2) + (int64_t)&CRC_32C__Castagnoli__poly_0x1EDC6F41_at_585720); // 0x4560e
    result2 = v3 ^ (int32_t)result2 / 256;
    while (v1 != a2) {
        // 0x455fe
        v2 = *(char *)(v1 + a1);
        v1++;
        v3 = *(int32_t *)(4 * (int64_t)(v2 ^ (char)result2) + (int64_t)&CRC_32C__Castagnoli__poly_0x1EDC6F41_at_585720);
        result2 = v3 ^ (int32_t)result2 / 256;
    }
    // 0x45617
    return result2;
}

// Address range: 0x6a710 - 0x6a73b
int64_t function_6a710(int64_t a1) {
    // 0x6a710
    function_2a25c();
    int64_t result = a1 + 8; // 0x6a71d
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 24) = result;
    *(int64_t *)(a1 + 32) = result;
    return result;
}

// Address range: 0x248752 - 0x24877d
int64_t function_248752(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x248752
    return function_cf3c7();
}

// Address range: 0x487214 - 0x487239
int64_t function_487214(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3 & 0xffffffff; // 0x487215
    bool v2; // 0x487214
    if (true == !v2) {
        v1 = function_48720c();
    }
    // 0x487217
    int64_t v3; // 0x487214
    char * v4 = (char *)(v3 - 56); // 0x48721e
    *v4 = *v4 & (char)(-0x1a4dc385 * *(int32_t *)(2 * v1 + a1) / 256);
    int64_t v5 = v1 + 0x16edb6bc & 0x1967f8a3 | 0xe698075c; // 0x487232
    return (v5 + 163) % 256 | v5 & 0xffffff00;
}

// Address range: 0x48d81b - 0x48d845
int64_t function_48d81b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = -1; // 0x48d824
    int64_t v2 = a1; // 0x48d824
    int64_t v3 = 0; // 0x48d824
    while (v1 != 0) {
        int64_t v4 = v2;
        v1--;
        bool v5; // 0x48d81b
        v2 = v4 + (v5 ? -1 : 1);
        v3 = v1;
        if (*(char *)v4 == 0) {
            // break -> 
            break;
        }
        v3 = 0;
    }
    int64_t v6 = a1 - 1 + -1 - v3; // 0x48d82e
    if (v6 == a1) {
        // 0x48d844
        return 0;
    }
    int64_t result = 0; // 0x48d83b
    int64_t v7 = a1;
    result = *(char *)v7 == (char)a2 ? v7 : result;
    int64_t v8 = v7 + 1; // 0x48d83f
    while (v8 != v6) {
        // 0x48d838
        v7 = v8;
        result = *(char *)v7 == (char)a2 ? v7 : result;
        v8 = v7 + 1;
    }
    // 0x48d844
    return result;
}

// Address range: 0x4ad6f0 - 0x4ad714
int64_t function_4ad6f0(int64_t str, uint64_t size, int64_t a3) {
    int32_t chars_printed = snprintf((char *)str, (int32_t)size, "%s key size", (char *)a3); // 0x4ad700
    uint64_t v1 = (int64_t)chars_printed; // 0x4ad700
    return chars_printed > -1 == v1 < size ? 0 : v1;
}

// Address range: 0x4b0df0 - 0x4b0e1b
int64_t function_4b0df0(int64_t a1, uint64_t a2) {
    int64_t result = 0; // 0x4b0dfd
    if (64 * *(int64_t *)(a1 + 8) > a2) {
        uint64_t v1 = *(int64_t *)(*(int64_t *)(a1 + 16) + 8 * a2 / 64); // 0x4b0e0f
        result = (v1 >> a2 % 64) % 2;
    }
    // 0x4b0e19
    return result;
}

// Address range: 0x4c1e70 - 0x4c1e9a
int64_t function_4c1e70(int64_t a1) {
    // 0x4c1e70
    *(int32_t *)a1 = 0;
    *(int32_t *)(a1 + 4) = 0;
    *(int32_t *)(a1 + 8) = 0x67452301;
    *(int32_t *)(a1 + 12) = -0x10325477;
    *(int32_t *)(a1 + 16) = -0x67452302;
    *(int32_t *)(a1 + 20) = 0x10325476;
    int64_t result; // 0x4c1e70
    return result;
}

// Address range: 0x4ee6e0 - 0x4ee705
int64_t ZydisRegisterGetWidth(int64_t a1, int64_t a2) {
    // 0x4ee6e0
    if ((int32_t)a2 >= 266) {
        // 0x4ee708
        return 0;
    }
    // 0x4ee6ee
    if ((int32_t)a1 != 0) {
        // 0x4ee708
        return (int64_t)&g1;
    }
    uint16_t result = *(int16_t *)(12 * (a2 & 0xffffffff) + (int64_t)&g1 + 8); // 0x4ee6ff
    return result;
}

// Address range: 0x50cf10 - 0x50cf3b
int64_t function_50cf10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t result = function_50cd40(a4); // 0x50cf2d
    *(int32_t *)a7 = (int32_t)a3;
    return result;
}

// Address range: 0x56bf10 - 0x56bf3b
// From class:    std::codecvt_byname<wchar_t, char, __mbstate_t>
// Type:          virtual member function
int64_t function_56bf10(int64_t a1) {
    struct __locale_struct * v1 = __uselocale((struct __locale_struct *)*(int64_t *)(a1 + 16)); // 0x56bf1a
    uint32_t result = __ctype_get_mb_cur_max(); // 0x56bf22
    __uselocale(v1);
    return result;
}
