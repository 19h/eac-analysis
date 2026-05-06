/*
 * Targeted RetDec C for native executable gap queue batch 60.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4b0f10-0x4b0f87 rank=- name=- kind=- bytes=- uncovered=-
 *   0x24cfa-0x24d70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26106-0x2617c rank=- name=- kind=- bytes=- uncovered=-
 *   0x283c8-0x2843e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c1b0-0x2c226 rank=- name=- kind=- bytes=- uncovered=-
 *   0x35a7e-0x35af4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38a5e-0x38ad4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ad24-0x3ad9a rank=- name=- kind=- bytes=- uncovered=-
 *   0x470e0-0x47156 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c714-0x4c78a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e8b2-0x4e928 rank=- name=- kind=- bytes=- uncovered=-
 *   0x504e1-0x50557 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50712-0x50788 rank=- name=- kind=- bytes=- uncovered=-
 *   0x533c6-0x5343c rank=- name=- kind=- bytes=- uncovered=-
 *   0x57cea-0x57d60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5a314-0x5a38a rank=- name=- kind=- bytes=- uncovered=-
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
int pthread_once(int32_t *once_control, void (*init_routine)(void));
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

int64_t function_24cfa(uint64_t a1, uint64_t a2);
int64_t function_26106(uint64_t a1, uint64_t a2);
int64_t function_283c8(uint64_t a1, uint64_t a2);
int64_t function_2c1b0(uint64_t a1, uint64_t a2);
int64_t function_35a7e(uint64_t a1, uint64_t a2);
int64_t function_38a5e(uint64_t a1, uint64_t a2);
int64_t function_3ad24(uint64_t a1, uint64_t a2);
int64_t function_470e0(uint64_t a1, uint64_t a2);
int64_t function_4b0f10(int64_t a1);
int64_t function_4c714(uint64_t a1, uint64_t a2);
int64_t function_4e8b2(uint64_t a1, uint64_t a2);
int64_t function_4efd30();
int64_t function_504e1(int64_t a1);
int64_t function_50712(uint64_t a1, uint64_t a2);
int64_t function_533c6(uint64_t a1, uint64_t a2);
int64_t function_542590();
int64_t function_57cea(uint64_t a1, uint64_t a2);
int64_t function_5a314(uint64_t a1, uint64_t a2);

// Address range: 0x24cfa - 0x24d70
int64_t function_24cfa(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x24d08
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x24d0a
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x24d1c
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x24d1e
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x24d29
    int64_t v6 = v3; // 0x24d33
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x24d46
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x24d5e
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x26106 - 0x2617c
int64_t function_26106(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x26114
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x26116
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x26128
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x2612a
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x26135
    int64_t v6 = v3; // 0x2613f
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x26152
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x2616a
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x283c8 - 0x2843e
int64_t function_283c8(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x283d6
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x283d8
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x283ea
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x283ec
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x283f7
    int64_t v6 = v3; // 0x28401
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x28414
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x2842c
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x2c1b0 - 0x2c226
int64_t function_2c1b0(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x2c1be
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x2c1c0
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x2c1d2
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x2c1d4
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x2c1df
    int64_t v6 = v3; // 0x2c1e9
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x2c1fc
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x2c214
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x35a7e - 0x35af4
int64_t function_35a7e(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x35a8c
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x35a8e
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x35aa0
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x35aa2
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x35aad
    int64_t v6 = v3; // 0x35ab7
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x35aca
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x35ae2
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x38a5e - 0x38ad4
int64_t function_38a5e(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x38a6c
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x38a6e
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x38a80
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x38a82
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x38a8d
    int64_t v6 = v3; // 0x38a97
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x38aaa
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x38ac2
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x3ad24 - 0x3ad9a
int64_t function_3ad24(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x3ad32
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x3ad34
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x3ad46
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x3ad48
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x3ad53
    int64_t v6 = v3; // 0x3ad5d
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x3ad70
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x3ad88
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x470e0 - 0x47156
int64_t function_470e0(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x470ee
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x470f0
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x47102
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x47104
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x4710f
    int64_t v6 = v3; // 0x47119
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x4712c
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x47144
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x4c714 - 0x4c78a
int64_t function_4c714(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x4c722
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x4c724
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x4c736
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x4c738
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x4c743
    int64_t v6 = v3; // 0x4c74d
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x4c760
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x4c778
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x4e8b2 - 0x4e928
int64_t function_4e8b2(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x4e8c0
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x4e8c2
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x4e8d4
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x4e8d6
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x4e8e1
    int64_t v6 = v3; // 0x4e8eb
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x4e8fe
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x4e916
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x504e1 - 0x50557
int64_t function_504e1(int64_t a1) {
    int32_t v1 = a1; // 0x504e3
    int64_t result = 0; // 0x504e5
    if (v1 >= 0) {
        // 0x50545
        return result;
    }
    // 0x504e7
    if (v1 == -0x3d00) {
        // 0x50545
        return 15;
    }
    if (v1 > -0x3d00) {
        // 0x5051a
        if (v1 == -0x3b80) {
            // 0x50545
            return 16;
        }
        int64_t result2; // 0x504e1
        if (v1 <= 0xffffc480) {
            // 0x50524
            result2 = 16;
            if (v1 == -0x3c00) {
                // 0x50545
                return result2;
            }
            // 0x50545
            return 11;
        }
        // 0x5052e
        result2 = 17;
        result = 18;
        switch (v1) {
            case -0x3b00: {
                return result2;
            }
            case -0x3900: {
                return result;
            }
            default: {
                return 11;
            }
        }
    } else {
        // 0x504f6
        result = 13;
        switch (v1) {
            case -0x3e00: {
                return result;
            }
            case -0x3d80: {
                // 0x50545
                return 14;
            }
            default: {
                // 0x50510
                if (v1 == -0x4380) {
                    // 0x50545
                    return 17;
                }
                // 0x50545
                return 11;
            }
        }
    }
}

// Address range: 0x50712 - 0x50788
int64_t function_50712(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x50720
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x50722
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x50734
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x50736
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x50741
    int64_t v6 = v3; // 0x5074b
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x5075e
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x50776
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x533c6 - 0x5343c
int64_t function_533c6(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x533d4
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x533d6
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x533e8
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x533ea
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x533f5
    int64_t v6 = v3; // 0x533ff
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x53412
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x5342a
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x57cea - 0x57d60
int64_t function_57cea(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x57cf8
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x57cfa
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x57d0c
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x57d0e
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x57d19
    int64_t v6 = v3; // 0x57d23
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x57d36
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x57d4e
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x5a314 - 0x5a38a
int64_t function_5a314(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x5a322
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x5a324
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x5a336
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x5a338
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x5a343
    int64_t v6 = v3; // 0x5a34d
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g2); // 0x5a360
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x5a378
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x4b0f10 - 0x4b0f84
int64_t function_4b0f10(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x4b0f10
    if (v1 == 0) {
        // 0x4b0f75
        return 0;
    }
    int64_t v2 = v1 - 1; // 0x4b0f1e
    if (v2 == 0) {
        // 0x4b0f75
        return 0;
    }
    int64_t v3 = *(int64_t *)(a1 + 16); // 0x4b0f24
    if (*(int64_t *)(v3 + 8 * v2) != 0) {
        // 0x4b0f80
        return 64 * v2;
    }
    int64_t v4 = v2; // 0x4b0f2f
    v4--;
    while (v4 != 0) {
        int64_t v5 = v4; // 0x4b0f3f
        if (*(int64_t *)(8 * v4 + v3) != 0) {
            // 0x4b0f80
            return 64 * v5;
        }
        v4--;
    }
    int64_t v6 = -0x8000000000000000; // 0x4b0f5b
    int64_t v7 = 0;
    int64_t v8 = v7; // 0x4b0f70
    while ((v6 & *(int64_t *)v3) == 0) {
        // 0x4b0f60
        v6 /= 2;
        v8 = 64;
        if (v7 == 63) {
            // break -> 0x4b0f72
            break;
        }
        v7++;
        v8 = v7;
    }
    // 0x4b0f75
    return 64 - v8;
}
