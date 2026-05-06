/*
 * Targeted RetDec C for native executable gap queue batch 127.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4e897-0x4e8b1 rank=137 name=fcn.0004e897 kind=r2_discovered bytes=26 uncovered=26
 *   0x50788-0x507a2 rank=138 name=fcn.00050788 kind=r2_discovered bytes=26 uncovered=26
 *   0x53ae2-0x53afc rank=139 name=fcn.00053ae2 kind=r2_discovered bytes=26 uncovered=26
 *   0x54d8e-0x54da8 rank=140 name=fcn.00054d8e kind=r2_discovered bytes=26 uncovered=26
 *   0x561d2-0x56273 rank=141 name=fcn.000561d2 kind=r2_discovered bytes=161 uncovered=26
 *   0x61222-0x6123c rank=142 name=fcn.00061222 kind=r2_discovered bytes=26 uncovered=26
 *   0x63d4c-0x63d66 rank=143 name=fcn.00063d4c kind=r2_discovered bytes=26 uncovered=26
 *   0x4c4700-0x4c471a rank=144 name=fcn.004c4700 kind=r2_discovered bytes=26 uncovered=26
 *   0x4c4900-0x4c491a rank=145 name=fcn.004c4900 kind=r2_discovered bytes=26 uncovered=26
 *   0x2562c-0x25645 rank=146 name=fcn.0002562c kind=r2_discovered bytes=25 uncovered=25
 *   0x4f722-0x4f73b rank=147 name=fcn.0004f722 kind=r2_discovered bytes=25 uncovered=25
 *   0x613d6-0x613ef rank=148 name=fcn.000613d6 kind=r2_discovered bytes=25 uncovered=25
 *   0x67701-0x6771a rank=149 name=fcn.00067701 kind=r2_discovered bytes=25 uncovered=25
 *   0x11c52d-0x11c546 rank=150 name=fcn.0011c52d kind=r2_discovered bytes=25 uncovered=25
 *   0x2d7efd-0x2d7f16 rank=151 name=fcn.002d7efd kind=r2_discovered bytes=25 uncovered=25
 *   0x2d9584-0x2d959d rank=152 name=fcn.002d9584 kind=r2_discovered bytes=25 uncovered=25
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
extern int g12;
extern int g13;
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
int64_t unknown_ffffffffd64cfc2a(int64_t dst, int64_t src);
int64_t unknown_ffffffffe8914fc1(void);
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

int64_t function_11c52d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2562c(int64_t a1, int64_t a2);
int64_t function_2d7efd(int64_t a1, int64_t a2, int64_t result, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2d9584(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_35ef6();
int64_t function_4c4700(int64_t a1);
int64_t function_4c4900(int64_t a1);
int64_t function_4e897(uint64_t a1, uint64_t a2);
int64_t function_4f722(int64_t a1);
int64_t function_502a90();
int64_t function_561d2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_61082();
int64_t function_61222(int64_t a1, int64_t a2);
int64_t function_613d6(int64_t a1);
int64_t function_63d4c(int64_t a1);
int64_t function_67701(uint64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_72994();

// Address range: 0x2562c - 0x25645
int64_t function_2562c(int64_t a1, int64_t a2) {
    // 0x2562c
    if ((int64_t)g10 != a1) {
        // 0x25635
        *(int32_t *)(a1 + 16) = 0;
        *(int64_t *)a1 = a2;
        *(char *)(a1 + 24 + a2) = 0;
    }
    // 0x25644
    int64_t result; // 0x2562c
    return result;
}

// Address range: 0x4e897 - 0x4e8b1
int64_t function_4e897(uint64_t a1, uint64_t a2) {
    // 0x4e897
    int64_t v1; // 0x4e897
    int64_t v2 = v1 & -256; // 0x4e89d
    if (a1 < a2) {
        // 0x4e8b0
        return v2 | 1;
    }
    int64_t result = v2; // 0x4e8a3
    if (a1 <= a2) {
        uint64_t v3 = *(int64_t *)(a2 + 8); // 0x4e8a5
        result = v3 & -256 | (int64_t)(*(int64_t *)(a1 + 8) < v3);
    }
    // 0x4e8b0
    return result;
}

// Address range: 0x4f722 - 0x4f73b
int64_t function_4f722(int64_t a1) {
    // 0x4f722
    *(int64_t *)(a1 + 80) = 0;
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 96) = 0;
    int64_t result; // 0x4f722
    return result;
}

// Address range: 0x561d2 - 0x56273
int64_t function_561d2(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x561de
    function_502a90();
    int64_t v2; // bp-33, 0x561d2
    function_35ef6(a1 + (int64_t)&g1, a2, &v2);
    *(int64_t *)(a1 + (int64_t)&g3) = 0;
    *(int64_t *)(a1 + 544) = 0;
    *(int64_t *)(a1 + (int64_t)&g4) = 0;
    *(int64_t *)(a1 + (int64_t)&g5) = 0;
    *(int64_t *)(a1 + (int64_t)&g6) = 0;
    *(int64_t *)(a1 + (int64_t)&g2) = (int64_t)&v2;
    *(char *)(a1 + (int64_t)&g7) = 0;
    int64_t result = 0; // 0x56265
    if (v1 != __readfsqword(40)) {
        // 0x56267
        __stack_chk_fail();
        result = (int64_t)&g13;
    }
    // 0x5626c
    return result;
}

// Address range: 0x61222 - 0x6123c
int64_t function_61222(int64_t a1, int64_t a2) {
    if (a2 == 0 || *(int64_t *)(a1 + 8) == -1) {
        // 0x61239
        return 0;
    }
    // 0x61234
    return function_61082();
}

// Address range: 0x613d6 - 0x613ef
int64_t function_613d6(int64_t a1) {
    int64_t result = 0; // 0x613e0
    if (a1 < 4) {
        unsigned char v1 = *(char *)(a1 + (int64_t)&g8 - 1); // 0x613e9
        result = v1;
    }
    // 0x613ee
    return result;
}

// Address range: 0x63d4c - 0x63d66
int64_t function_63d4c(int64_t a1) {
    // 0x63d4c
    *(int64_t *)(a1 + (int64_t)&g12 - 2456) = (int64_t)&g9;
    return function_72994(a1 + (int64_t)&g12);
}

// Address range: 0x67701 - 0x6771a
int64_t function_67701(uint64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int64_t result = 0; // 0x67706
    if (a3 <= a1) {
        uint64_t v1 = a2 + a1; // 0x67708
        result = v1 > a1 == v1 <= a4;
    }
    // 0x67719
    return result;
}

// Address range: 0x11c52d - 0x11c545
int64_t function_11c52d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11c52d
    int64_t v1; // 0x11c52d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 - 0x9ac5a00); // 0x11c53f
    *v3 = *v3 + (int32_t)a2;
    return (v2 + 113) % 256 | v2 & -256;
}

// Address range: 0x2d7efd - 0x2d7f16
int64_t function_2d7efd(int64_t a1, int64_t a2, int64_t result, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a6;
    int64_t v2 = a2;
    char v3 = a2;
    __asm_outsb((int16_t)result, v3);
    char v4 = *(char *)-0x13ddd6f9; // 0x2d7f00
    int64_t v5; // 0x2d7efd
    *(char *)-0x13ddd6f9 = v4 + (char)((uint64_t)v5 / 256);
    uint32_t v6 = ((int32_t)v5 + 25) % 32; // 0x2d7f0c
    int32_t v7 = a2;
    char v8 = v3; // 0x2d7f0c
    int32_t v9 = v7; // 0x2d7f0c
    if (v6 != 0) {
        *(int32_t *)a2 = v7 << v6;
        v9 = *(int32_t *)&v2;
        v8 = v9;
    }
    // 0x2d7efd
    __asm_outsd((int16_t)a4, v9);
    *(char *)a1 = v8;
    bool v10; // 0x2d7efd
    *(char *)v1 = *(char *)&v1 + (char)((v10 ? 255 : 1) + a1);
    return result;
}

// Address range: 0x2d9584 - 0x2d959c
int64_t function_2d9584(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int16_t v1 = a3; // 0x2d9584
    *(char *)a1 = __asm_insb(v1);
    unknown_b6ccb9();
    int64_t v2; // 0x2d9584
    char * v3 = (char *)(v2 + 8); // 0x2d958b
    *v3 = *v3 | (char)(a4 / 256);
    int64_t v4; // 0x2d9584
    int32_t v5 = *(int32_t *)&v4; // 0x2d9593
    __asm_out(v1, (char)v5);
    *(int32_t *)(a3 + 40) = v5;
    return v5 & -198;
}

// Address range: 0x4c4700 - 0x4c4717
int64_t function_4c4700(int64_t a1) {
    // 0x4c4700
    if (a1 == 0) {
        // 0x4c4720
        int64_t result; // 0x4c4700
        return result;
    }
    // 0x4c470d
    return *(int64_t *)(a1 + 16);
}

// Address range: 0x4c4900 - 0x4c4912
int64_t function_4c4900(int64_t a1) {
    // 0x4c4900
    if (a1 == 0) {
        // 0x4c4918
        int64_t result; // 0x4c4900
        return result;
    }
    // 0x4c490d
    return *(int64_t *)(a1 + 8);
}
