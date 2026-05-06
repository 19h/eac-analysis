/*
 * Targeted RetDec C for native executable gap queue batch 107.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x55c2a-0x55c56 rank=73 name=fcn.00055c2a kind=r2_discovered bytes=44 uncovered=44
 *   0x7151e-0x7154a rank=74 name=fcn.0007151e kind=r2_discovered bytes=44 uncovered=44
 *   0x3c09b1-0x3c09dd rank=75 name=fcn.003c09b1 kind=r2_discovered bytes=44 uncovered=44
 *   0x4c1af0-0x4c1b1c rank=76 name=fcn.004c1af0 kind=r2_discovered bytes=44 uncovered=44
 *   0x4fd520-0x4fd54c rank=77 name=method.std::basic_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_48 kind=native_discovered bytes=44 uncovered=44
 *   0x508450-0x50847c rank=78 name=fcn.00508450 kind=r2_discovered bytes=44 uncovered=44
 *   0x508620-0x50864c rank=79 name=fcn.00508620 kind=r2_discovered bytes=44 uncovered=44
 *   0x52bed0-0x52befc rank=80 name=fcn.0052bed0 kind=r2_discovered bytes=44 uncovered=44
 *   0x542920-0x54294c rank=81 name=method.std::ostream.virtual_0 kind=native_discovered bytes=44 uncovered=44
 *   0x542a00-0x542a2c rank=82 name=method.std::basic_ostream_wchar_t__std::char_traits_wchar_t___.virtual_0 kind=native_discovered bytes=44 uncovered=44
 *   0x547e40-0x547e6c rank=83 name=fcn.00547e40 kind=r2_discovered bytes=44 uncovered=44
 *   0x5509e0-0x550a0c rank=84 name=fcn.005509e0 kind=r2_discovered bytes=44 uncovered=44
 *   0x552550-0x55257c rank=85 name=fcn.00552550 kind=r2_discovered bytes=44 uncovered=44
 *   0x20f6f-0x20f9a rank=86 name=entry.init8 kind=native_discovered bytes=43 uncovered=43
 *   0x2122c-0x21257 rank=87 name=entry.init13 kind=native_discovered bytes=43 uncovered=43
 *   0x57ebb-0x57ee6 rank=88 name=fcn.00057ebb kind=r2_discovered bytes=43 uncovered=43
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

int64_t function_20f6f(void);
int64_t function_2122c(void);
int64_t function_2508e();
int64_t function_3c09b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4c1af0(int64_t a1);
int64_t function_4efe30();
int64_t function_4fd520(int64_t a1);
int64_t function_508450(int64_t a1);
int64_t function_508620(int64_t a1);
int64_t function_52bed0(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_542920(int64_t a1);
int64_t function_542a00(int64_t a1);
int64_t function_547e40(int64_t a1);
int64_t function_54cf10();
int64_t function_5509e0(int64_t a1);
int64_t function_552550(int64_t a1);
int64_t function_55c2a(int64_t a1);
int64_t function_57ebb(int64_t a1);
int64_t function_7151e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);

// Address range: 0x20f6f - 0x20f9a
int64_t function_20f6f(void) {
    // 0x20f6f
    function_4efe30(&g10);
    int32_t result = __cxa_atexit((void (*)(int64_t *))&g1, &g10, (int64_t *)0x849800); // 0x20f95
    return result;
}

// Address range: 0x2122c - 0x21257
int64_t function_2122c(void) {
    // 0x2122c
    function_4efe30(&g11);
    int32_t result = __cxa_atexit((void (*)(int64_t *))&g1, &g11, &g9); // 0x21252
    return result;
}

// Address range: 0x55c2a - 0x55c56
int64_t function_55c2a(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x55c39
    *v1 = (int64_t)&g2;
    function_2508e(a1 + 16);
    *v1 = (int64_t)&g3;
    return function_2508e(a1 + 8);
}

// Address range: 0x57ebb - 0x57ee6
int64_t function_57ebb(int64_t a1) {
    int64_t v1 = a1; // 0x57ec1
    int64_t v2; // 0x57ebb
    while (true) {
        // 0x57ec4
        v2 = v1;
        int64_t v3 = v2; // 0x57ebb
        while (true) {
          lab_0x57ec4:
            // 0x57ec4
            v1 = v3 + 4;
            int32_t v4 = *(int32_t *)v3; // 0x57ec8
            switch (v4) {
                case 0: {
                    return *(int32_t *)v2 != 0 ? v2 : a1;
                }
                case 92: {
                    goto lab_0x57ed9;
                }
                default: {
                    // 0x57ed4
                    v3 = v1;
                    if (v4 == 47) {
                        // break -> 0x57ed9
                        break;
                    }
                    goto lab_0x57ec4;
                }
            }
        }
      lab_0x57ed9:;
    }
  lab_0x57ede:
    // 0x57ede
    return *(int32_t *)v2 != 0 ? v2 : a1;
}

// Address range: 0x7151e - 0x7154a
int64_t function_7151e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2 - a1; // 0x7151e
    if (v1 < 1) {
        // 0x71539
        return (v1 > 0 ? v1 : 0) + a3;
    }
    int64_t v2 = 0;
    *(char *)(v2 + a3) = *(char *)(v2 + a1);
    int64_t v3 = v2 + 1; // 0x71534
    while (v3 != v1) {
        // 0x7152e
        v2 = v3;
        *(char *)(v2 + a3) = *(char *)(v2 + a1);
        v3 = v2 + 1;
    }
    // 0x71539
    return (v1 > 0 ? v1 : 0) + a3;
}

// Address range: 0x3c09b1 - 0x3c09dc
int64_t function_3c09b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c09b1
    int64_t v1; // 0x3c09b1
    int64_t result = v1;
    __asm_outsb((int16_t)a3, (char)a2);
    bool v2; // 0x3c09b1
    if (true == !v2) {
        int32_t * v3 = (int32_t *)(v1 - 57); // 0x3c09d9
        *v3 = (int32_t)((int32_t)result < 0xfc8c1f01) - (int32_t)a4 + *v3;
        return result;
    }
    int64_t v4 = v2 ? 0xffffffff : 1; // 0x3c09b7
    int32_t v5 = *(int32_t *)0x1f2109c1; // 0x3c09ba
    int32_t v6 = *(int32_t *)(int64_t)(v5 & (int32_t)(v4 + a1)); // 0x3c09c0
    int64_t result2 = v6 | (int32_t)((result + 52 + (int64_t)v2) % 256 | result & 0xffffff00); // 0x3c09c0
    uint32_t v7 = (int32_t)a4 % 32; // 0x3c09c2
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)result2; // 0x3c09c2
        uint32_t v9 = *v8; // 0x3c09c2
        *v8 = v9 >> 32 - v7 | v9 << v7;
    }
    return result2;
}

// Address range: 0x4c1af0 - 0x4c1b16
int64_t function_4c1af0(int64_t a1) {
    int64_t result; // 0x4c1af0
    if (a1 != 0) {
        // 0x4c1afd
        result = a1;
        if (*(int64_t *)(a1 + 16) != 0) {
            // 0x4c1b04
            return 0;
        }
    }
    // 0x4c1b04
    return result;
}

// Address range: 0x4fd520 - 0x4fd54c
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_4fd520(int64_t a1) {
    // 0x4fd520
    if (*(int64_t *)(a1 + 32) < *(int64_t *)(a1 + 40)) {
        // 0x4fd530
        return (int32_t)a1 == -1;
    }
    // 0x4fd52a
    return 0;
}

// Address range: 0x508450 - 0x50847b
int64_t function_508450(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    if (g8 == 0) {
        // 0x508470
        *v1 = result - 1;
        return result;
    }
    // 0x50845a
    *v1 = result - 1;
    return result;
}

// Address range: 0x508620 - 0x50864b
int64_t function_508620(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    if (g8 == 0) {
        // 0x508640
        *v1 = result - 1;
        return result;
    }
    // 0x50862a
    *v1 = result - 1;
    return result;
}

// Address range: 0x52bed0 - 0x52befa
int64_t function_52bed0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x52bed0
    uint64_t v2 = *v1; // 0x52bed0
    int64_t result = v2; // 0x52bed7
    if (v2 > a2) {
        // 0x52bedb
        *v1 = a2;
        *(char *)(a2 + a1) = 0;
        result = a1;
    }
    // 0x52bee6
    return result;
}

// Address range: 0x542920 - 0x54294c
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_542920(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x542923
    *(int64_t *)v1 = (int64_t)&g6;
    int64_t v2 = v1 + 8; // 0x54293c
    *(int64_t *)v2 = (int64_t)&g4;
    return function_54cf10(v2);
}

// Address range: 0x542a00 - 0x542a2c
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_542a00(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x542a03
    *(int64_t *)v1 = (int64_t)&g7;
    int64_t v2 = v1 + 8; // 0x542a1c
    *(int64_t *)v2 = (int64_t)&g5;
    return function_54cf10(v2);
}

// Address range: 0x547e40 - 0x547e6b
int64_t function_547e40(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    if (g8 == 0) {
        // 0x547e60
        *v1 = result - 1;
        return result;
    }
    // 0x547e4a
    *v1 = result - 1;
    return result;
}

// Address range: 0x5509e0 - 0x550a0b
int64_t function_5509e0(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    if (g8 == 0) {
        // 0x550a00
        *v1 = result - 1;
        return result;
    }
    // 0x5509ea
    *v1 = result - 1;
    return result;
}

// Address range: 0x552550 - 0x55257b
int64_t function_552550(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    if (g8 == 0) {
        // 0x552570
        *v1 = result - 1;
        return result;
    }
    // 0x55255a
    *v1 = result - 1;
    return result;
}
