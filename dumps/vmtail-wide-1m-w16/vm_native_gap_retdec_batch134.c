/*
 * Targeted RetDec C for native executable gap queue batch 134.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5a25e-0x5a272 rank=121 name=fcn.0005a25e kind=r2_discovered bytes=20 uncovered=20
 *   0x3364f8-0x33650c rank=122 name=fcn.003364f8 kind=r2_discovered bytes=20 uncovered=20
 *   0x386394-0x3863a8 rank=123 name=fcn.00386394 kind=r2_discovered bytes=20 uncovered=20
 *   0x488ce0-0x488cf4 rank=124 name=fcn.00488ce0 kind=r2_discovered bytes=20 uncovered=20
 *   0x518de0-0x518df4 rank=125 name=method.std::ctype_char_.virtual_56 kind=native_discovered bytes=20 uncovered=20
 *   0x54d360-0x54d374 rank=126 name=method.std::ctype_char_.virtual_72 kind=native_discovered bytes=20 uncovered=20
 *   0x563620-0x563634 rank=127 name=method.__gnu_cxx::stdio_sync_filebuf_char__std::char_traits_char___.virtual_96 kind=native_discovered bytes=20 uncovered=20
 *   0x20db7-0x20dca rank=128 name=entry.fini1 kind=native_discovered bytes=19 uncovered=19
 *   0x36902-0x36915 rank=129 name=fcn.00036902 kind=r2_discovered bytes=19 uncovered=19
 *   0x41c51-0x41c64 rank=130 name=fcn.00041c51 kind=r2_discovered bytes=19 uncovered=19
 *   0x65cd0-0x65ce3 rank=131 name=fcn.00065cd0 kind=r2_discovered bytes=19 uncovered=19
 *   0x240a05-0x240a18 rank=132 name=fcn.00240a05 kind=r2_discovered bytes=19 uncovered=19
 *   0x46f0b8-0x46f0cb rank=133 name=fcn.0046f0b8 kind=r2_discovered bytes=19 uncovered=19
 *   0x484a4f-0x484a62 rank=134 name=fcn.00484a4f kind=r2_discovered bytes=19 uncovered=19
 *   0x48d332-0x48d345 rank=135 name=fcn.0048d332 kind=r2_discovered bytes=19 uncovered=19
 *   0x4c4920-0x4c4933 rank=136 name=fcn.004c4920 kind=r2_discovered bytes=19 uncovered=19
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
void unknown_b6ccb9(void);
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
int64_t unknown_ffffffffc23c8777(int64_t a1, int64_t a2);
int64_t unknown_ffffffffd64cfc2a(int64_t dst, int64_t src);
int64_t unknown_ffffffffd296219c(void);
int64_t unknown_ffffffffe8914fc1(void);
int64_t unknown_fffffffff537c295(void);
int64_t unknown_ffffffffb38ec0a9(void);
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
size_t __strxfrm_l(char *dest, const char *src, size_t n, struct __locale_struct *locale);
size_t __wcsxfrm_l(int32_t *dest, const int32_t *src, size_t n, struct __locale_struct *locale);
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
int pthread_join(int32_t thread, void **retval);
int pthread_once(int32_t *once_control, ...);
int pthread_cond_init(void *cond, void *attr);
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

int64_t function_20db7(void);
int64_t function_240a05(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3364f8(void);
int64_t function_36902(int64_t a1);
int64_t function_386394(void);
int64_t function_418c6();
int64_t function_41c51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_46f0b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_484a4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_488ce0(int64_t a1);
int64_t function_48d332(int64_t result, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c4920(int64_t a1);
int64_t function_518de0(int64_t a1, int64_t a2, int64_t result, int64_t a4);
int64_t function_54d360(int64_t a1, int64_t a2, int64_t result, int64_t a4, int64_t a5);
int64_t function_563620(int64_t a1, int64_t data);
int64_t function_5a25e(int64_t a1);
int64_t function_63d80();
int64_t function_65cd0(int64_t a1);
int64_t function_6af9a();
int64_t function_cc59c();

// Address range: 0x20db7 - 0x20dca
int64_t function_20db7(void) {
    // 0x20db7
    if (g2 == 0) {
        // 0x20dc9
        int64_t result; // 0x20db7
        return result;
    }
    // 0x20dc3
    return *(int64_t *)g2;
}

// Address range: 0x36902 - 0x36915
int64_t function_36902(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 8);
    *v1 = *v1 + 1;
    int64_t result; // 0x36902
    return result;
}

// Address range: 0x41c51 - 0x41c64
int64_t function_41c51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41c51
    return function_418c6();
}

// Address range: 0x5a25e - 0x5a272
int64_t function_5a25e(int64_t a1) {
    // 0x5a25e
    *(int64_t *)a1 = (int64_t)&g1;
    return function_6af9a(a1 + 8);
}

// Address range: 0x65cd0 - 0x65ce3
int64_t function_65cd0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + (int64_t)&g4); // 0x65cd0
    *(int64_t *)(a1 + (int64_t)&g5) = v1;
    return function_63d80();
}

// Address range: 0x240a05 - 0x240a14
int64_t function_240a05(int64_t a1, int64_t a2, int64_t a3) {
    // 0x240a05
    int64_t result; // 0x240a05
    if (llvm_ctpop_i8((char)*(int32_t *)(a3 - 0x37fa8f3e) + 115) % 2 == 0) {
        // 0x240a64
        return result;
    }
    // 0x240a12
    return result ^ 62;
}

// Address range: 0x3364f8 - 0x33650b
int64_t function_3364f8(void) {
    unsigned char v1 = *(char *)-0x3383fec2ff155629; // 0x3364fa
    int64_t v2; // 0x3364f8
    return (v2 & 0xffffff00 | (int64_t)v1) + 0xd55f0c08 & 0xffffffff;
}

// Address range: 0x386394 - 0x3863a8
int64_t function_386394(void) {
    // 0x386394
    return function_cc59c();
}

// Address range: 0x46f0b8 - 0x46f0cb
int64_t function_46f0b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x46f0b8
    int64_t v1; // 0x46f0b8
    *(int32_t *)0x6d9c7a14aa9e4a1a = (int32_t)v1;
    __asm_int(-120);
    return __asm_hlt();
}

// Address range: 0x484a4f - 0x484a61
int64_t function_484a4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x484a4f
    int64_t v1; // 0x484a4f
    *(char *)a1 = (char)v1 + (char)((a4 + 1) / 256);
    int64_t v2; // 0x484a4f
    return (int64_t)*(int32_t *)&v2;
}

// Address range: 0x488ce0 - 0x488cf4
int64_t function_488ce0(int64_t a1) {
    // 0x488ce0
    *(int64_t *)(a1 + 40) = (int64_t)&g3;
    *(int64_t *)(a1 + 48) = (int64_t)&g3;
    return (int64_t)&g3;
}

// Address range: 0x48d332 - 0x48d345
int64_t function_48d332(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    if (a3 == 0) {
        // 0x48d344
        return result;
    }
    int64_t v1 = 0; // 0x48d33f
    *(int32_t *)(4 * v1 + result) = (int32_t)a2;
    v1++;
    while (v1 != a3) {
        // 0x48d33c
        *(int32_t *)(4 * v1 + result) = (int32_t)a2;
        v1++;
    }
    // 0x48d344
    return result;
}

// Address range: 0x4c4920 - 0x4c4933
int64_t function_4c4920(int64_t a1) {
    if (a1 == 0) {
        // 0x4c4930
        return 0;
    }
    // 0x4c492d
    return a1 & 0xffffffff;
}

// Address range: 0x518de0 - 0x518df4
// From class:    std::ctype_byname<char>
// Type:          virtual member function
int64_t function_518de0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    // 0x518de0
    memcpy((int64_t *)a4, (int64_t *)a2, (int32_t)(result - a2));
    return result;
}

// Address range: 0x54d360 - 0x54d374
// From class:    std::ctype_byname<char>
// Type:          virtual member function
int64_t function_54d360(int64_t a1, int64_t a2, int64_t result, int64_t a4, int64_t a5) {
    // 0x54d360
    memcpy((int64_t *)a5, (int64_t *)a2, (int32_t)(result - a2));
    return result;
}

// Address range: 0x563620 - 0x563634
// From class:    __gnu_cxx::stdio_sync_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_563620(int64_t a1, int64_t data) {
    int64_t stream = *(int64_t *)(a1 + 64); // 0x563620
    int64_t nmemb; // 0x563620
    return fwrite((int64_t *)data, 1, (int32_t)nmemb, (struct _IO_FILE *)stream);
}
