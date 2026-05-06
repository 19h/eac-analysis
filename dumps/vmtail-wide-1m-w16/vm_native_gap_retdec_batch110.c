/*
 * Targeted RetDec C for native executable gap queue batch 110.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1b07a5-0x1b07ce rank=121 name=fcn.001b07a5 kind=r2_discovered bytes=41 uncovered=41
 *   0x26ee18-0x26ee41 rank=122 name=fcn.0026ee18 kind=r2_discovered bytes=41 uncovered=41
 *   0x48f518-0x48f541 rank=123 name=fcn.0048f518 kind=r2_discovered bytes=41 uncovered=41
 *   0x4ab2c0-0x4ab2e9 rank=124 name=fcn.004ab2c0 kind=r2_discovered bytes=41 uncovered=41
 *   0x4ba670-0x4ba699 rank=125 name=fcn.004ba670 kind=r2_discovered bytes=41 uncovered=41
 *   0x4ba790-0x4ba7b9 rank=126 name=fcn.004ba790 kind=r2_discovered bytes=41 uncovered=41
 *   0x4ceca0-0x4cecc9 rank=127 name=fcn.004ceca0 kind=r2_discovered bytes=41 uncovered=41
 *   0x21630-0x21658 rank=128 name=fcn.00021630 kind=r2_discovered bytes=40 uncovered=40
 *   0x36b14-0x36b3c rank=129 name=fcn.00036b14 kind=r2_discovered bytes=40 uncovered=40
 *   0x36b3c-0x36b64 rank=130 name=fcn.00036b3c kind=r2_discovered bytes=40 uncovered=40
 *   0x4e27e-0x4e2a6 rank=131 name=fcn.0004e27e kind=r2_discovered bytes=40 uncovered=40
 *   0x5b030-0x5b058 rank=132 name=fcn.0005b030 kind=r2_discovered bytes=40 uncovered=40
 *   0x5f416-0x5f43e rank=133 name=fcn.0005f416 kind=r2_discovered bytes=40 uncovered=40
 *   0x5f453-0x5f47b rank=134 name=fcn.0005f453 kind=r2_discovered bytes=40 uncovered=40
 *   0x6a648-0x6a670 rank=135 name=fcn.0006a648 kind=r2_discovered bytes=40 uncovered=40
 *   0x6b6a6-0x6b6ce rank=136 name=fcn.0006b6a6 kind=r2_discovered bytes=40 uncovered=40
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

int64_t function_1b0790();
int64_t function_1b079f();
int64_t function_1b07a5(int64_t a1, int64_t a2);
int64_t function_21630(void);
int64_t function_24e1e();
int64_t function_2508e();
int64_t function_26edb4();
int64_t function_26ee18(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26ee40(void);
int64_t function_36b14(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_36b3c(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_48f518(int64_t result, int64_t a2);
int64_t function_4a8c6();
int64_t function_4a93a();
int64_t function_4aaf50();
int64_t function_4ab2c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4ba580();
int64_t function_4ba5b0();
int64_t function_4ba670(int64_t a1);
int64_t function_4ba6b0();
int64_t function_4ba6e0();
int64_t function_4ba790(int64_t a1);
int64_t function_4ceca0(int64_t seconds);
int64_t function_4e27e(int64_t a1);
int64_t function_527fe();
int64_t function_542650();
int64_t function_5b030(int64_t result, int64_t a2, int64_t a3);
int64_t function_5f416(int64_t result, int64_t a2, int64_t a3);
int64_t function_5f453(int64_t result, int64_t a2, int64_t a3);
int64_t function_67df6();
int64_t function_6872c();
int64_t function_6a648(int64_t a1);
int64_t function_6b6a6(int64_t a1);
int64_t function_6bd38();

// Address range: 0x21630 - 0x21656
int64_t function_21630(void) {
    // 0x21630
    return 0x84a198;
}

// Address range: 0x36b14 - 0x36b3c
int64_t function_36b14(int64_t a1, uint64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x36b1a
    int64_t result = a2; // 0x36b21
    if (v1 < a2) {
        // 0x36b23
        result = function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", a3, a2, v1);
    }
    // 0x36b3b
    return result;
}

// Address range: 0x36b3c - 0x36b64
int64_t function_36b3c(int64_t a1, uint64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x36b42
    int64_t result = a2; // 0x36b49
    if (v1 < a2) {
        // 0x36b4b
        result = function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", a3, a2, v1);
    }
    // 0x36b63
    return result;
}

// Address range: 0x4e27e - 0x4e2a6
int64_t function_4e27e(int64_t a1) {
    int64_t v1 = function_24e1e() - *(int64_t *)(a1 + 224); // 0x4e287
    int64_t v2 = (0x8000000000000000 * (int128_t)(v1 >> 63) | (int128_t)v1) / 0xf4240; // 0x4e296
    return v2 > 0 ? v2 : 0;
}

// Address range: 0x5b030 - 0x5b058
int64_t function_5b030(int64_t result, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)function_527fe(a2, a3); // 0x5b03f
    *(int64_t *)result = *v1;
    *v1 = (int64_t)&g4;
    return result;
}

// Address range: 0x5f416 - 0x5f43e
int64_t function_5f416(int64_t result, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)function_4a8c6(a2, a3); // 0x5f425
    *(int64_t *)result = *v1;
    *v1 = (int64_t)&g3;
    return result;
}

// Address range: 0x5f453 - 0x5f47b
int64_t function_5f453(int64_t result, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)function_4a93a(a2, a3); // 0x5f462
    *(int64_t *)result = *v1;
    *v1 = (int64_t)&g3;
    return result;
}

// Address range: 0x6a648 - 0x6a670
int64_t function_6a648(int64_t a1) {
    // 0x6a648
    function_2508e(a1 + 24);
    function_2508e(a1 + 16);
    function_2508e(a1 + 8);
    return function_2508e(a1);
}

// Address range: 0x6b6a6 - 0x6b6ce
int64_t function_6b6a6(int64_t a1) {
    // 0x6b6a6
    *(int64_t *)a1 = (int64_t)&g1;
    function_67df6();
    function_6bd38(a1 + 168);
    return function_6872c(a1);
}

// Address range: 0x1b07a5 - 0x1b07bf
int64_t function_1b07a5(int64_t a1, int64_t a2) {
    // 0x1b07a5
    int64_t v1; // 0x1b07a5
    bool v2; // 0x1b07a5
    if (true == !v2) {
        v1 = function_1b079f();
    }
    int64_t result = v1; // 0x1b07a8
    if (v2) {
        result = function_1b0790();
    }
    int32_t * v3 = (int32_t *)(9 * a2); // 0x1b07b0
    int32_t v4 = result; // 0x1b07b0
    *v3 = *v3 + v4;
    *(int32_t *)a1 = v4;
    char * v5 = (char *)(a1 - 0x1734affe + (v2 ? -4 : 4) + 8 * result); // 0x1b07b4
    *v5 = *v5 + (char)result;
    int32_t * v6 = (int32_t *)(result - 111); // 0x1b07bb
    int64_t v7; // 0x1b07a5
    *v6 = *v6 + (int32_t)v7;
    return result;
}

// Address range: 0x26ee18 - 0x26ee3f
int64_t function_26ee18(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x4bc231c8); // 0x26ee18
    int32_t v2 = *v1 + (int32_t)a4; // 0x26ee18
    *v1 = v2;
    int64_t v3; // 0x26ee18
    if (a4 != 1 && v2 != 0) {
        v3 = function_26edb4();
    }
    uint64_t v4 = v3 / 2 % 128; // 0x26ee21
    int32_t * v5 = (int32_t *)((int64_t)((int32_t)v3 >> 31) + 0x2701283f); // 0x26ee23
    *v5 = *v5 + (int32_t)a1;
    char * v6 = (char *)((v4 | v3 & -256) + 0x1fd0000); // 0x26ee29
    *v6 = *v6 + (char)v4;
    int64_t v7; // 0x26ee18
    int32_t * v8 = (int32_t *)(v7 - 0x4effbe00); // 0x26ee31
    *v8 = *v8 + (int32_t)v7;
    return a2 & 0xffffffff;
}

// Address range: 0x26ee40 - 0x26ee41
int64_t function_26ee40(void) {
    // 0x26ee40
    int64_t result; // 0x26ee40
    return result;
}

// Address range: 0x48f518 - 0x48f541
int64_t function_48f518(int64_t result, int64_t a2) {
    int32_t * v1 = (int32_t *)(result - 8); // 0x48f51b
    if (*v1 < 0) {
        // 0x48f522
        *v1 = 0;
    }
    int32_t * v2 = (int32_t *)(a2 - 8); // 0x48f52c
    if (*v2 < 0) {
        // 0x48f533
        *v2 = 0;
    }
    // 0x48f53a
    *(int64_t *)result = a2;
    *(int64_t *)a2 = result;
    return result;
}

// Address range: 0x4ab2c0 - 0x4ab2e9
int64_t function_4ab2c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4ab2c0
    return function_4aaf50();
}

// Address range: 0x4ba670 - 0x4ba697
int64_t function_4ba670(int64_t a1) {
    // 0x4ba670
    if (a1 == 0) {
        // 0x4ba6a0
        int64_t result; // 0x4ba670
        return result;
    }
    // 0x4ba679
    function_4ba5b0();
    function_4b0870(a1 + 248);
    return function_4ba580(a1 + 272);
}

// Address range: 0x4ba790 - 0x4ba7b7
int64_t function_4ba790(int64_t a1) {
    // 0x4ba790
    if (a1 == 0) {
        // 0x4ba7c0
        int64_t result; // 0x4ba790
        return result;
    }
    // 0x4ba799
    function_4ba6e0();
    function_4b0890(a1 + 248);
    return function_4ba6b0(a1 + 272);
}

// Address range: 0x4ceca0 - 0x4cecc9
int64_t function_4ceca0(int64_t seconds) {
    // 0x4ceca0
    *(int32_t *)&g2 = 0;
    signal(SIGALARM, 0x4ceb80);
    return alarm((int32_t)seconds);
}
