/*
 * Targeted RetDec C for native executable gap queue batch 62.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x54f7f0-0x54f866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x550900-0x550976 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566100-0x566176 rank=- name=- kind=- bytes=- uncovered=-
 *   0x215b0-0x21625 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38b18-0x38b8d rank=- name=- kind=- bytes=- uncovered=-
 *   0x478b0-0x47925 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5b4f4-0x5b569 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b2830-0x4b28a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52b020-0x52b095 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52c9e0-0x52ca55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54b560-0x54b5d5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x68b30-0x68ba4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x499c70-0x499ce4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ad070-0x4ad0e4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c5330-0x4c53a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eed10-0x4eed84 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
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

int64_t function_215b0(void);
int64_t function_2508e();
int64_t function_2515a();
int64_t function_38ad4();
int64_t function_38b18(int64_t a1, int64_t a2);
int64_t function_38b4a(int64_t a1);
int64_t function_38b62(int64_t a1);
int64_t function_4786c();
int64_t function_478b0(int64_t a1, int64_t a2);
int64_t function_499bc0();
int64_t function_499c70(int64_t a1, int64_t a2, int64_t a3);
int64_t function_49e770();
int64_t function_4ad070(int64_t result, int64_t a2, int64_t a3);
int64_t function_4b0080();
int64_t function_4b01d0();
int64_t function_4b1680();
int64_t function_4b2760();
int64_t function_4b2830(int64_t a1);
int64_t function_4c32f0();
int64_t function_4c5330(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c53a2(void);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_52b020(int64_t a1, uint64_t a2, uint64_t a3);
int64_t function_52b400();
int64_t function_52c9e0(int64_t result, int64_t a2, int64_t a3);
int64_t function_542590();
int64_t function_549e80();
int64_t function_54b560(int64_t result, int64_t wstr2, int64_t n);
int64_t function_54f650();
int64_t function_54f7f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_550870();
int64_t function_550900(int64_t a1, int64_t a2);
int64_t function_565f90();
int64_t function_566100(int64_t result, int64_t a2);
int64_t function_5b4b0();
int64_t function_5b4f4(int64_t a1, int64_t a2);
int64_t function_68b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);

// Address range: 0x215b0 - 0x21625
int64_t function_215b0(void) {
    // 0x215b0
    int128_t v1; // 0x215b0
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x215b0
    g11 = 0;
    g14 = (int64_t)&g2;
    *(int128_t *)&g9 = (int128_t)__asm_movaps(v3);
    *(int128_t *)&g10 = (int128_t)__asm_movaps(v3);
    int64_t * mem = malloc((int32_t)&g2); // 0x215e1
    int64_t result = (int64_t)mem; // 0x215e1
    g13 = result;
    if (mem == NULL) {
        // 0x2160d
        g14 = 0;
        g12 = 0;
    } else {
        // 0x215f2
        g12 = result;
        *mem = (int64_t)&g2;
        *(int64_t *)(result + 8) = 0;
    }
    // 0x21608
    return result;
}

// Address range: 0x38b18 - 0x38b49
int64_t function_38b18(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x38b18
    int32_t v2 = *v1; // 0x38b18
    if (v2 < 0) {
        // 0x38b40
        return function_38ad4();
    }
    // 0x38b23
    if ((int64_t)g4 != a1) {
        // 0x38b2c
        *v1 = v2 + 1;
    }
    // 0x38b44
    return a1 + 24;
}

// Address range: 0x38b4a - 0x38b61
int64_t function_38b4a(int64_t a1) {
    // 0x38b4a
    *(int64_t *)a1 = (int64_t)&g7;
    *(int64_t *)(a1 + 24) = (int64_t)&g7;
    *(int64_t *)(a1 + 32) = (int64_t)&g7;
    return (int64_t)&g7;
}

// Address range: 0x38b62 - 0x38b81
int64_t function_38b62(int64_t a1) {
    // 0x38b62
    function_2508e(a1 + 32);
    function_2508e(a1 + 24);
    return function_2508e(a1);
}

// Address range: 0x478b0 - 0x478e1
int64_t function_478b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x478b0
    int32_t v2 = *v1; // 0x478b0
    if (v2 < 0) {
        // 0x478d8
        return function_4786c();
    }
    // 0x478bb
    if ((int64_t)g4 != a1) {
        // 0x478c4
        *v1 = v2 + 1;
    }
    // 0x478dc
    return a1 + 24;
}

// Address range: 0x5b4f4 - 0x5b525
int64_t function_5b4f4(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x5b4f4
    int32_t v2 = *v1; // 0x5b4f4
    if (v2 < 0) {
        // 0x5b51c
        return function_5b4b0();
    }
    // 0x5b4ff
    if ((int64_t)g4 != a1) {
        // 0x5b508
        *v1 = v2 + 1;
    }
    // 0x5b520
    return a1 + 24;
}

// Address range: 0x68b30 - 0x68ba4
int64_t function_68b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x68b30
    function_2515a();
    *(int64_t *)a3 = 0;
    *(int64_t *)(a1 + 72) = a4;
    *(int64_t *)(a1 + 48) = 0;
    *(char *)(a1 + 56) = 0;
    *(int64_t *)(a1 + 32) = a3;
    int64_t * v1 = (int64_t *)(a3 + 8); // 0x68b70
    int64_t result = *v1; // 0x68b70
    *(int32_t *)(a1 + 80) = (int32_t)a5;
    *v1 = 0;
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 60) = 0;
    *(int64_t *)(a1 + 40) = result;
    *(int32_t *)(a1 + 96) = 0;
    return result;
}

// Address range: 0x499c70 - 0x499ce1
int64_t function_499c70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x499c70
    if (*(int32_t *)(a1 + 348) >= 0) {
        // 0x499c7f
        return function_499bc0();
    }
    int32_t v1 = *(int32_t *)(a1 + 344) / *(int32_t *)(a1 + 340) + 1; // 0x499c96
    if (v1 == 0) {
        // 0x499ce1
        return 0;
    }
    uint32_t v2 = v1;
    uint64_t v3 = 2; // 0x499ca0
    int32_t v4 = v2 / 2; // 0x499ca5
    int64_t v5 = v3 & 0xffffffff; // 0x499ca5
    while (v2 >= 2) {
        // 0x499ca0
        v2 = v4;
        v3 = v5 + 1;
        v4 = v2 / 2;
        v5 = v3 & 0xffffffff;
    }
    int32_t * v6 = (int32_t *)(a1 + 16); // 0x499caa
    uint32_t v7 = *v6 + 1; // 0x499cad
    *v6 = v7;
    if (v3 % 256 >= (int64_t)v7) {
        // 0x499c7f
        return function_499bc0();
    }
    // 0x499cb7
    function_49e770();
    return 0;
}

// Address range: 0x4ad070 - 0x4ad0d6
int64_t function_4ad070(int64_t result, int64_t a2, int64_t a3) {
    // 0x4ad070
    if (a2 - result < 1) {
        // 0x4ad0e0
        return result;
    }
    int64_t result2 = function_4b0080(); // 0x4ad0a0
    if ((int32_t)result2 != 0) {
        // 0x4ad0e0
        return result2;
    }
    // 0x4ad0a9
    int32_t v1; // 0x4ad070
    int64_t v2 = v1; // 0x4ad0a9
    *(int32_t *)a3 = (int32_t)result % 256;
    *(int64_t *)(a3 + 8) = v2;
    *(int64_t *)(a3 + 16) = result;
    *(int64_t *)result = v2 + result;
    return 0;
}

// Address range: 0x4b2830 - 0x4b28a4
int64_t function_4b2830(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 16); // 0x4b2847
    int64_t v1 = 3; // 0x4b284e
    if (*(char *)result % 2 == 0) {
        // 0x4b2894
        return result;
    }
    int64_t v2 = (int64_t)&g3; // 0x4b284e
    int32_t v3 = function_4b1680(a1, v1); // 0x4b288b
    int64_t result2 = 1; // 0x4b288d
    while (v3 >= 0 == (v3 != 0)) {
        // 0x4b2858
        int64_t v4; // bp-32, 0x4b2830
        int64_t v5 = function_4b2760(&v4, a1, v1); // 0x4b2863
        result2 = v5;
        if (v4 == 0 || (int32_t)v5 != 0) {
            // break -> 0x4b2894
            break;
        }
        int32_t v6 = *(int32_t *)v2; // 0x4b2878
        v1 = v6;
        v2 += 4;
        result2 = v5;
        if (v6 < 1) {
            // break -> 0x4b2894
            break;
        }
        v3 = function_4b1680(a1, v1);
        result2 = 1;
    }
    // 0x4b2894
    return result2;
}

// Address range: 0x4c5330 - 0x4c5396
int64_t function_4c5330(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4c5330
    *(int64_t *)a4 = 0;
    int64_t * v1 = (int64_t *)(a4 + 8); // 0x4c5343
    *v1 = 0;
    *(int64_t *)(a4 + 16) = 0;
    int64_t v2 = function_4b01d0(); // 0x4c5356
    if ((int32_t)v2 != 0) {
        // 0x4c5364
        return v2 - (int64_t)(int32_t)"MODRM_MOD" & 0xffffffff;
    }
    // 0x4c5370
    int64_t v3; // bp-56, 0x4c5330
    int64_t result = function_4c32f0(&v3, a3); // 0x4c5376
    int64_t v4; // 0x4c5330
    if ((int32_t)result != 0 || *(int32_t *)&v4 != 1) {
        // 0x4c5364
        return result;
    }
    // 0x4c5385
    int64_t v5; // 0x4c5330
    uint32_t v6 = *(int32_t *)&v5; // 0x4c5385
    int64_t v7 = v6; // 0x4c5385
    int64_t result2 = v7; // 0x4c5389
    if (v6 == 0) {
        // 0x4c538b
        result2 = *v1 != 0 ? v7 : 0;
    }
    // 0x4c5364
    return result2;
}

// Address range: 0x4c53a2 - 0x4c53a3
int64_t function_4c53a2(void) {
    // 0x4c53a2
    int64_t result; // 0x4c53a2
    return result;
}

// Address range: 0x4eed10 - 0x4eed84
int64_t __cxa_guard_abort(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4eed14
    if (g5 == 0) {
        // 0x4eed50
        *(char *)(a1 + 1) = 0;
    } else {
        // 0x4eed2e
        *(int32_t *)a1 = 0;
        if (((int32_t)a1 & (int32_t)&g1) != 0) {
            int64_t result = __readfsqword(40) ^ v1; // 0x4eed65
            if (result == 0) {
                // 0x4eed47
                return 0;
            }
            // 0x4eed47
            return result;
        }
    }
    int64_t result2 = __readfsqword(40) ^ v1; // 0x4eed3c
    if (result2 == 0) {
        // 0x4eed47
        return result2;
    }
    // 0x4eed47
    return result2;
}

// Address range: 0x52b020 - 0x52b093
int64_t function_52b020(int64_t a1, uint64_t a2, uint64_t a3) {
    if ((int64_t)a2 < 0) {
        // 0x52b07c
        return function_542590("basic_string::_M_create");
    }
    if (a2 <= a3) {
        // 0x52b050
        return function_4efd30(a2 + 1);
    }
    int64_t v1 = 2 * a3; // 0x52b02d
    if (v1 <= a2) {
        // 0x52b050
        return function_4efd30(a2 + 1);
    }
    if (v1 < 0) {
        // 0x52b060
        *(int64_t *)a2 = 0x7fffffffffffffff;
        return function_4efd30(-0x8000000000000000);
    }
    // 0x52b03a
    *(int64_t *)a2 = v1;
    return function_4efd30(v1 | 1);
}

// Address range: 0x52c9e0 - 0x52ca55
int64_t function_52c9e0(int64_t result, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x52c9f2
    int64_t v2 = *v1; // 0x52c9f2
    uint64_t v3 = v2 + a3; // 0x52c9fc
    if (v3 > *(int64_t *)(result + 16)) {
        // 0x52ca38
        int64_t v4; // 0x52c9e0
        function_52b400(result, v2, 0, a2, a3, v2, v4, v4);
        // 0x52ca21
        *v1 = v3;
        *(char *)(result + v3) = 0;
        return result;
    }
    // 0x52ca0b
    if (a3 == 0) {
        // 0x52ca21
        *v1 = v3;
        *(char *)(result + v3) = 0;
        return result;
    }
    int64_t v5 = v2 + result; // 0x52ca10
    if (a3 != 1) {
        // 0x52ca50
        return (int64_t)memcpy((int64_t *)v5, (int64_t *)a2, (int32_t)a3);
    }
    // 0x52ca19
    *(char *)v5 = (char)a2;
    // 0x52ca21
    *v1 = v3;
    *(char *)(v5 + v3) = 0;
    return result;
}

// Address range: 0x54b560 - 0x54b5d5
int64_t function_54b560(int64_t result, int64_t wstr2, int64_t n) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x54b570
    int64_t v2 = *v1; // 0x54b570
    uint64_t v3 = v2 + n; // 0x54b57c
    if (v3 > *(int64_t *)(result + 16)) {
        // 0x54b5b8
        int64_t v4; // 0x54b560
        function_549e80(result, v2, 0, wstr2, n, v2, v4, v4);
        // 0x54b59e
        *v1 = v3;
        *(int32_t *)(4 * v3 + result) = 0;
        return result;
    }
    if (n == 0) {
        // 0x54b59e
        *v1 = v3;
        *(int32_t *)(4 * v3 + result) = 0;
        return result;
    }
    int32_t * wstr = (int32_t *)(4 * v2 + result);
    if (n != 1) {
        // 0x54b5d0
        return (int64_t)wmemcpy(wstr, (int32_t *)wstr2, (int32_t)n);
    }
    // 0x54b59a
    *wstr = (int32_t)wstr2;
    // 0x54b59e
    *v1 = v3;
    *(int32_t *)(4 * v3 + result) = 0;
    return result;
}

// Address range: 0x54f7f0 - 0x54f866
// From class:    std::__codecvt_utf8_base<wchar_t>
// Type:          virtual member function
int64_t function_54f7f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x54f7f9
    int64_t v2 = a3; // bp-72, 0x54f809
    int32_t v3 = *(int32_t *)(a1 + 32); // 0x54f820
    int64_t v4 = a6; // bp-56, 0x54f82b
    int64_t result = function_54f650(&v2, &v4, *(int64_t *)(a1 + 24), v3); // 0x54f835
    *(int64_t *)a5 = v2;
    *(int64_t *)a8 = v4;
    if (v1 == __readfsqword(40)) {
        // 0x54f85a
        return result;
    }
    // 0x54f861
    __stack_chk_fail();
    return (int64_t)&g15;
}

// Address range: 0x550900 - 0x550976
int64_t function_550900(int64_t a1, int64_t a2) {
    // 0x550900
    if (a1 == 0) {
        // 0x55091a
        return (int64_t)&g8;
    }
    int64_t result = function_550870(); // 0x550938
    if (a1 != 1) {
        // 0x55091a
        return result;
    }
    int64_t result2 = result + 24; // 0x550944
    *(int32_t *)result2 = (int32_t)a2;
    if (result != *(int64_t *)0x848c20) {
        // 0x550957
        *(int32_t *)(result + 16) = 0;
        *(int64_t *)result = a1;
        *(int32_t *)(result2 + 4 * a1) = 0;
    }
    // 0x55091a
    return result2;
}

// Address range: 0x566100 - 0x566175
int64_t function_566100(int64_t result, int64_t a2) {
    int64_t v1 = result;
    *(int32_t *)a2 = (int32_t)a2 + 1;
    int64_t v2; // 0x566100
    if (g5 != 0) {
        int32_t v3 = v1;
        *(int32_t *)v1 = v3 - 1;
        v2 = v1;
        if (v3 != 1) {
            // 0x566127
            *(int64_t *)result = a2;
            return result;
        }
    } else {
        int32_t v4 = *(int32_t *)&v1; // 0x56611b
        *(int32_t *)result = v4 - 1;
        v2 = result;
        if (v4 != 1) {
            // 0x566127
            *(int64_t *)result = a2;
            return result;
        }
    }
    // 0x56614d
    function_565f90(v2);
    function_4eeb50(v2);
    *(int64_t *)result = a2;
    return result;
}
