/*
 * Targeted RetDec C for native executable gap queue batch 37.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x542290-0x542348 rank=- name=- kind=- bytes=- uncovered=-
 *   0x772f8-0x773af rank=- name=- kind=- bytes=- uncovered=-
 *   0x212f0-0x213a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x214f0-0x215a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a93a-0x4a9f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cfef0-0x4cffa6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x551750-0x551806 rank=- name=- kind=- bytes=- uncovered=-
 *   0x557210-0x5572c6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5572d0-0x557386 rank=- name=- kind=- bytes=- uncovered=-
 *   0x59a64-0x59b19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x68c64-0x68d19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aa470-0x4aa525 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29fa8-0x2a05c rank=- name=- kind=- bytes=- uncovered=-
 *   0x5dd2a-0x5ddde rank=- name=- kind=- bytes=- uncovered=-
 *   0x161df6-0x161eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x498c50-0x498d04 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
extern int g24;
extern int g25;
extern int g26;
extern int g27;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g32;
extern int g33;
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

int64_t function_161df6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_1fcc0();
int64_t function_20210();
int64_t function_203b0();
int64_t function_212f0(void);
int64_t function_214f0(void);
int64_t function_24ded();
int64_t function_24dff();
int64_t function_25622();
int64_t function_2562c();
int64_t function_259ce();
int64_t function_25a28();
int64_t function_2833e();
int64_t function_2843e();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_29ef7();
int64_t function_29fa8(int64_t a1);
int64_t function_35c52();
int64_t function_3b222();
int64_t function_498c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4a93a(int64_t result, uint64_t a2);
int64_t function_4a9620();
int64_t function_4aa430();
int64_t function_4aa470(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4aa540();
int64_t function_4cfef0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4eeb50();
int64_t function_4fbd10();
int64_t function_527a4();
int64_t function_5289c();
int64_t function_542240();
int64_t function_542290(int64_t a1);
int64_t function_5473b0();
int64_t function_550870();
int64_t function_551750(int64_t wstr2, int64_t a2);
int64_t function_557210(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5572d0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_59a64(int64_t result, int64_t a2, int64_t a3);
int64_t function_5cab4();
int64_t function_5dd2a(int64_t result);
int64_t function_68c41();
int64_t function_68c64(int64_t result, int64_t a2);
int64_t function_772f8(int64_t a1, int64_t a2, uint64_t a3, int64_t result);
int64_t function_7742a();
int64_t function_cdc60();

// Address range: 0x212f0 - 0x213a6
int64_t function_212f0(void) {
    // 0x212f0
    if (*(char *)&g19 == 0) {
        // 0x212fc
        *(char *)&g19 = 1;
    }
    // 0x212ff
    if (*(char *)&g18 == 0) {
        // 0x2130b
        *(char *)&g18 = 1;
    }
    // 0x2130e
    if (*(char *)&g17 == 0) {
        // 0x2131a
        *(char *)&g17 = 1;
    }
    // 0x2131d
    if (*(char *)&g16 == 0) {
        // 0x21329
        *(char *)&g16 = 1;
    }
    // 0x2132c
    if (*(char *)&g15 == 0) {
        // 0x21338
        *(char *)&g15 = 1;
    }
    // 0x2133b
    if (*(char *)&g14 == 0) {
        // 0x21347
        *(char *)&g14 = 1;
    }
    // 0x2134a
    if (*(char *)&g13 == 0) {
        // 0x21356
        *(char *)&g13 = 1;
    }
    // 0x21359
    if (*(char *)&g12 == 0) {
        // 0x21365
        *(char *)&g12 = 1;
    }
    // 0x21368
    if (*(char *)&g11 == 0) {
        // 0x21374
        *(char *)&g11 = 1;
    }
    // 0x21377
    if (*(char *)&g10 == 0) {
        // 0x21383
        *(char *)&g10 = 1;
    }
    // 0x21386
    if (*(char *)&g9 == 0) {
        // 0x21392
        *(char *)&g9 = 1;
    }
    // 0x21395
    if (*(char *)&g8 == 0) {
        // 0x213a1
        *(char *)&g8 = 1;
    }
    // 0x213a4
    return (int64_t)&g8;
}

// Address range: 0x214f0 - 0x215a6
int64_t function_214f0(void) {
    // 0x214f0
    if (*(char *)&g32 == 0) {
        // 0x214fc
        *(char *)&g32 = 1;
    }
    // 0x214ff
    if (*(char *)&g31 == 0) {
        // 0x2150b
        *(char *)&g31 = 1;
    }
    // 0x2150e
    if (*(char *)&g30 == 0) {
        // 0x2151a
        *(char *)&g30 = 1;
    }
    // 0x2151d
    if (*(char *)&g29 == 0) {
        // 0x21529
        *(char *)&g29 = 1;
    }
    // 0x2152c
    if (*(char *)&g28 == 0) {
        // 0x21538
        *(char *)&g28 = 1;
    }
    // 0x2153b
    if (*(char *)&g27 == 0) {
        // 0x21547
        *(char *)&g27 = 1;
    }
    // 0x2154a
    if (*(char *)&g26 == 0) {
        // 0x21556
        *(char *)&g26 = 1;
    }
    // 0x21559
    if (*(char *)&g25 == 0) {
        // 0x21565
        *(char *)&g25 = 1;
    }
    // 0x21568
    if (*(char *)&g24 == 0) {
        // 0x21574
        *(char *)&g24 = 1;
    }
    // 0x21577
    if (*(char *)&g23 == 0) {
        // 0x21583
        *(char *)&g23 = 1;
    }
    // 0x21586
    if (*(char *)&g22 == 0) {
        // 0x21592
        *(char *)&g22 = 1;
    }
    // 0x21595
    if (*(char *)&g21 == 0) {
        // 0x215a1
        *(char *)&g21 = 1;
    }
    // 0x215a4
    return (int64_t)&g21;
}

// Address range: 0x29fa8 - 0x2a05c
int64_t function_29fa8(int64_t a1) {
    int64_t v1 = a1 - 24; // 0x29fb8
    int64_t v2 = *(int64_t *)v1; // 0x29fb8
    if (*(int32_t *)(a1 - 8) < 0) {
        // 0x2a04d
        return 4 * v2 - 4 + a1;
    }
    // 0x29fcb
    if (v1 == *(int64_t *)0x848c20) {
        // 0x2a04d
        return 4 * v2 - 4 + v1;
    }
    // 0x29fd8
    if ((char)function_29cea(v1) == 0) {
        // 0x2a043
        *(int32_t *)(v1 - 8) = -1;
        // 0x2a04d
        return 4 * v2 - 4 + v1;
    }
    uint64_t v3 = *(int64_t *)(a1 - 48); // 0x29fe4
    int64_t v4; // 0x29fa8
    if (v3 > *(int64_t *)(a1 - 40)) {
        goto lab_0x29fee;
    } else {
        int64_t v5 = function_29cea(v1); // 0x2a01a
        v4 = v1;
        if ((char)v5 != 0) {
            goto lab_0x29fee;
        } else {
            goto lab_0x2a034;
        }
    }
  lab_0x29fee:;
    int64_t v6 = function_2833e(v3, *(int64_t *)(v1 - 16)); // 0x29ff8
    int64_t v7 = v6 + 24; // 0x2a000
    int64_t v8 = -24; // 0x2a004
    if (v3 != 0) {
        // 0x2a006
        function_29ef7(v7, v3, v3);
        v8 = v6;
    }
    // 0x2a025
    function_2843e(v8);
    *(int64_t *)a1 = v7;
    v4 = v8;
    goto lab_0x2a034;
  lab_0x2a034:;
    int64_t v9 = v4 - 24; // 0x2a03a
    function_29cf4(v9, v3);
    // 0x2a043
    *(int32_t *)(v9 - 8) = -1;
    // 0x2a04d
    return 4 * v2 - 4 + v9;
}

// Address range: 0x4a93a - 0x4a9f0
int64_t function_4a93a(int64_t result, uint64_t a2) {
    int64_t v1 = function_24ded(a2); // 0x4a94b
    if (v1 == 0) {
        // 0x4a9e4
        return result;
    }
    // 0x4a959
    function_3b222(result, 0, v1, "basic_string::append");
    int64_t * v2 = (int64_t *)(result - 24);
    uint64_t v3 = *v2 + v1; // 0x4a977
    int64_t * v4; // 0x4a93a
    int64_t v5; // 0x4a93a
    if (v3 > *(int64_t *)(result - 16)) {
        goto lab_0x4a980;
    } else {
        // 0x4a98a
        if ((char)function_25622(result) != 0) {
            goto lab_0x4a980;
        } else {
            // 0x4a98a
            v4 = (int64_t *)(result - 48);
            v5 = a2;
            goto lab_0x4a9c3;
        }
    }
  lab_0x4a980:;
    uint64_t v6 = result;
    if (v6 <= a2) {
        // 0x4a999
        if (*(int64_t *)(v6 - 24) + v6 < a2) {
            goto lab_0x4a9b8;
        } else {
            // 0x4a9a5
            function_259ce(result, v3);
            v4 = v2;
            v5 = a2 + result - v6;
            goto lab_0x4a9c3;
        }
    } else {
        goto lab_0x4a9b8;
    }
  lab_0x4a9b8:
    // 0x4a9b8
    function_259ce(result, v3);
    v4 = v2;
    v5 = a2;
    goto lab_0x4a9c3;
  lab_0x4a9c3:;
    int64_t v7 = *v4 + result; // 0x4a9cc
    function_25a28(v7, v5, v1);
    function_2562c(v7 - 24, v3);
    // 0x4a9e4
    return result;
}

// Address range: 0x59a64 - 0x59b19
int64_t function_59a64(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = function_35c52(a2); // 0x59a7a
    *(int64_t *)result = (int64_t)&g20;
    function_527a4(result, *(int64_t *)(a3 - 24) + v1);
    function_5289c(result, a2, v1);
    int64_t v2 = *(int64_t *)(v1 - 24); // 0x59ab5
    if (v2 == 0) {
        // 0x59b0e
        return result;
    }
    int64_t v3 = result - 24;
    int64_t * v4 = (int64_t *)v3;
    uint64_t v5 = *v4 + v2; // 0x59ac5
    int64_t * v6; // 0x59a64
    int64_t v7; // 0x59a64
    if (v5 > *(int64_t *)(result - 16)) {
        goto lab_0x59ace;
    } else {
        // 0x59adb
        if ((char)function_29cea(v3) != 0) {
            goto lab_0x59ace;
        } else {
            // 0x59adb
            v6 = (int64_t *)(result - 48);
            v7 = v3;
            goto lab_0x59ae8;
        }
    }
  lab_0x59ace:
    // 0x59ace
    function_527a4(result, v5);
    v6 = v4;
    v7 = result;
    goto lab_0x59ae8;
  lab_0x59ae8:;
    int64_t v8 = 4 * *v6 + v7; // 0x59af3
    function_29ef7(v8, v1, v2);
    function_29cf4(v8 - 24, v5);
    // 0x59b0e
    return result;
}

// Address range: 0x5dd2a - 0x5ddde
int64_t function_5dd2a(int64_t result) {
    int64_t v1 = __readfsqword(40); // 0x5dd33
    int64_t v2 = 0x756e694c;
    int64_t v3 = (int64_t)&v2; // 0x5dd78
    *(char *)(v3 | 4) = (char)((int32_t)((int64_t)&g2 & -256 | 181) ^ -51);
    *(char *)(v3 | 5) = (char)((int32_t)((int64_t)&g2 & -256 | 21) ^ 21);
    function_5cab4();
    function_24dff(&v2, 6);
    if (v1 != __readfsqword(40)) {
        // 0x5ddcf
        __stack_chk_fail();
    }
    // 0x5ddd4
    return result;
}

// Address range: 0x68c64 - 0x68d19
int64_t function_68c64(int64_t result, int64_t a2) {
    if (a2 != result) {
        int64_t v1 = *(int64_t *)(a2 + 8); // 0x68c7d
        function_68c41(v1, v1, result);
        *(int64_t *)(result + 8) = v1;
    }
    // 0x68d0b
    return result;
}

// Address range: 0x772f8 - 0x773af
int64_t function_772f8(int64_t a1, int64_t a2, uint64_t a3, int64_t result) {
    int64_t v1 = a1 + 32; // 0x7730a
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x77312
    int64_t v3 = *v2; // 0x77312
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x77316
    int64_t v5 = function_4fbd10(v1, *v4, v3, 1); // 0x7731f
    int64_t v6 = 1; // 0x77326
    int64_t v7 = v1; // 0x77326
    int64_t v8 = a2; // 0x77326
    if ((char)v5 != 0) {
        // 0x77328
        function_7742a(a1, v3);
        v6 = 0;
        v7 = a1;
        v8 = a3 % *v4;
    }
    // 0x77347
    *(int64_t *)(result + 16) = a3;
    int64_t * v9 = (int64_t *)(8 * v8 + v7); // 0x77356
    int64_t v10 = *v9; // 0x77356
    if (v10 != 0) {
        // 0x7735f
        *(int64_t *)result = *(int64_t *)v10;
        *(int64_t *)*v9 = result;
        // 0x773a0
        *v2 = *v2 + 1;
        return result;
    }
    int64_t v11 = a1 + 16; // 0x77372
    int64_t * v12 = (int64_t *)v11; // 0x77372
    *(int64_t *)result = *v12;
    *v12 = result;
    if (v6 != 0) {
        // 0x7738a
        *(int64_t *)(8 * (*(int64_t *)(v6 | 16) % *v4) + v7) = result;
    }
    // 0x77398
    *v9 = v11;
    // 0x773a0
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0x161df6 - 0x161ea8
int64_t function_161df6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a8;
    bool v2; // 0x161df6
    if (a4 != 1 != v2) {
        // 0x161df8
        int64_t result; // 0x161df6
        return result;
    }
    // 0x161e41
    v1 = (int64_t)&v1 + 16;
    return function_cdc60();
}

// Address range: 0x498c50 - 0x498cf9
int64_t function_498c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 128; // 0x498c78
    if ((int32_t)a3 == 1) {
        uint32_t v2 = *(int32_t *)(a2 + 24) - 1; // 0x498ce5
        v1 = 0;
        if (v2 < 10) {
            uint32_t v3 = *(int32_t *)(4 * (int64_t)v2 + (int64_t)&g5); // 0x498cf4
            v1 = v3;
        }
    }
    int64_t v4 = 0; // 0x498c89
    if ((int32_t)function_4aa430(a1, v1) != 0) {
        // 0x498c8b
        int64_t v5; // 0x498c50
        *(int32_t *)a4 = (int32_t)v5 | (int32_t)L"\n2";
        v4 = 0xffffffff;
    }
    int64_t v6 = (int32_t)a3 != 1 ? (int64_t)&g4 : (int64_t)&g3; // 0x498cb2
    int64_t v7 = function_4aa540(a1, v6, 8); // 0x498cb6
    return (int32_t)v7 != 0 ? v7 : v4;
}

// Address range: 0x4aa470 - 0x4aa525
int64_t function_4aa470(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = function_4a9620(a1 + 152, a2 + 216); // 0x4aa4a2
    if ((int32_t)result != 0) {
        // 0x4aa4f5
        return result;
    }
    if ((int32_t)a3 != 0) {
        // 0x4aa4b4
        if ((int32_t)a4 != 0) {
            int64_t n = *(int64_t *)(a1 + 8); // 0x4aa4bd
            if (n == *(int64_t *)(a2 + 8)) {
                int64_t str2 = *(int64_t *)(a2 + 16); // 0x4aa510
                int64_t str = *(int64_t *)(a1 + 16); // 0x4aa514
                memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
                return 0;
            }
        }
        // 0x4aa4c7
        if (*(int32_t *)(a2 + 48) <= 2) {
            // 0x4aa4f5
            return 0;
        }
    }
    int64_t result2 = result; // 0x4aa4e2
    if (*(int32_t *)(a2 + 452) != 0) {
        // 0x4aa4e4
        result2 = function_4aa430(a2, 4);
    }
    // 0x4aa4f5
    return result2;
}

// Address range: 0x4cfef0 - 0x4cffa6
// Used cryptographic patterns:
//  - Camellia_s1 (8-bit)
//  - Camellia_s2 (8-bit)
//  - Camellia_s3 (8-bit)
//  - Camellia_s4 (8-bit)
int64_t function_4cfef0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4cfef0
    int64_t v1; // 0x4cfef0
    uint64_t v2 = v1 ^ v1;
    uint32_t v3 = *(int32_t *)(a1 + 4) ^ *(int32_t *)(a2 + 4); // 0x4cff06
    unsigned char v4 = *(char *)(v2 / 256 % 256 + (int64_t)"8A\x16v\xd9\x93`\xf2r\xc2\xab\x9au\x06W\xa0\x91\xf7\xb5\xc9\xa2\x8c\xd2\x90\xf6\a\xa7'\x8e\xb2I\xde\x43\\\xd7\xc7>\xf5\x8fg\x1f\x18n\xaf/\xe2\x85\rS\xf0\x9c\x65\xea\xa3\xae\x9e\xec\x80-k\xa8+6\xa6\xc5\x86M3\xfd\x66X\x96:\t\x95\x10x\xd8\x42\xcc\xef&\xe5\x61\x1a?;\x82\xb6\xdb\xd4\x98\xe8\x8b\x02\xeb\n,\x1d\xb0o\x8d\x88\x0e\x19\x87N\v\xa9\fy\x11\x7f\"\xe7Y\xe1\xda=\xc8\x12\x04tT0~\xb4(UhP\xbe\xd0\xc4\x31\xcb*\xad\x0f\xcap\xff\x32i\bb\x00$\xd1\xfb\xba\xed\x45\x81sm\x84\x9f\xeeJ\xc3.\xc1\x01\xe6%H\x99\xb9\xb3{\xf9\xce\xbf\xdfq)\xcdl\x13\x64\x9b\x63\x9d\xc0K\xb7\xa5\x89_\xb1\x17\xf4\xbc\xd3\x46\xcf\x37^G\x94\xfa\xfc[\x97\xfeZ\xac<L\x03\x35\xf3#\xb8]j\x92\xd5!DQ\xc6}9\x83\xdc\xaa|wV\x05\x1b\xa4\x15\x34\x1e\x1c\xf8R \x14\xe9\xbd\xdd\xe4\xa1\xe0\x8a\xf1\xd6z\xbb\xe3@O"); // 0x4cff17
    unsigned char v5 = *(char *)(v2 % 256 + (int64_t)"p,\xb3\xc0\xe4W\xea\xae#kE\xa5\xedO\x1d\x92\x86\xaf|\x1f>\xdc^\v\xa6\x39\xd5]\xd9ZQl\x8b\x9a\xfb\xb0t+\xf0\x84\xdf\xcb\x34vm\xa9\xd1\x04\x14:\xde\x11\x32\x9cS\xf2\xfe\xcf\xc3z$\xe8`i\xaa\xa0\xa1\x62T\x1e\xe0\x64\x10\x00\xa3u\x8a\xe6\t\xdd\x87\x83\xcd\x90s\xf6\x9d\xbfR\xd8\xc8\xc6\x81o\x13\x63\xe9\xa7\x9f\xbc)\xf9/\xb4x\x06\xe7q\xd4\xab\x88\x8dr\xb9\xf8\xac\x36*<\xf1@\xd3\xbb\x43\x15\xadw\x80\x82\xec'\xe5\x85\x35\fA\xef\x93\x19!\x0eNe\xbd\xb8\x8f\xeb\xce\x30_\xc5\x1a\xe1\xcaG=\x01\xd6VM\rf\xcc-\x12 \xb1\x99L\xc2~\x05\xb7\x31\x17\xd7Xa\x1b\x1c\x0f\x16\x18\"D\xb2\xb5\x91\b\xa8\xfcP\xd0}\x89\x97[\x95\xff\xd2\xc4H\xf7\xdb\x03\xda?\x94\\\x02J3g\xf3\x7f\xe2\x9b&7;\x96K\xbe.y\x8cn\x8e\xf5\xb6\xfdY\x98jF\xba%B\xa2\xfa\aU\xee\nIh8\xa4({\xc9\xc1\xe3\xf4\xc7\x9e"); // 0x4cff1d
    unsigned char v6 = *(char *)(v2 / 0x1000000 % 256 + (int64_t)"p\x82,\xec\xb3'\xc0\xe5\xe4\x85W5\xea\f\xae\x41#\xefk\x93\x45\x19\xa5!\xed\x0eON\x1d\x65\x92\xbd\x86\xb8\xaf\x8f|\xeb\x1f\xce>0\xdc_^\xc5\v\x1a\xa6\xe1\x39\xca\xd5G]=\xd9\x01Z\xd6QVlM\x8b\r\x9a\x66\xfb\xcc\xb0-t\x12+ \xf0\xb1\x84\x99\xdfL\xcb\xc2\x34~v\x05m\xb7\xa9\x31\xd1\x17\x04\xd7\x14X:a\xde\x1b\x11\x1c\x32\x0f\x9c\x16S\x18\xf2\"\xfe\x44\xcf\xb2\xc3\xb5z\x91$\b\xe8\xa8`\xfciP\xaa\xd0\xa0}\xa1\x89\x62\x97T[\x1e\x95\xe0\xff\x64\xd2\x10\xc4\x00H\xa3\xf7u\xdb\x8a\x03\xe6\xda\t?\xdd\x94\x87\\\x83\x02\xcdJ\x90\x33sg\xf6\xf3\x9d\x7f\xbf\xe2R\x9b\xd8&\xc8\x37\xc6;\x81\x96oK\x13\xbe\x63.\xe9y\xa7\x8c\x9fn\xbc\x8e)\xf5\xf9\xb6/\xfd\xb4Yx\x98\x06j\xe7\x46q\xba\xd4%\xab\x42\x88\xa2\x8d\xfar\a\xb9U\xf8\xee\xac\n6I*h<8\xf1\xa4@(\xd3{\xbb\xc9\x43\xc1\x15\xe3\xad\xf4w\xc7\x80\x9e"); // 0x4cff28
    unsigned char v7 = *(char *)(v2 / 0x10000 % 256 + (int64_t)"\xe0\x05X\xd9gN\x81\xcb\xc9\v\xaej\xd5\x18]\x82\x46\xdf\xd6'\x8a\x32KB\xdb\x1c\x9e\x9c:\xca%{\rq_\x1f\xf8\xd7>\x9d|`\xb9\xbe\xbc\x8b\x16\x34M\xc3r\x95\xab\x8e\xbaz\xb3\x02\xb4\xad\xa2\xac\xd8\x9a\x17\x1a\x35\xcc\xf7\x99\x61Z\xe8$V@\xe1\x63\t3\xbf\x98\x97\x85h\xfc\xec\n\xdaoSb\xa3.\b\xaf(\xb0t\xc2\xbd\x36\"8d\x1e\x39,\xa6\x30\xe5\x44\xfd\x88\x9f\x65\x87k\xf4#H\x10\xd1Q\xc0\xf9\xd2\xa0U\xa1\x41\xfa\x43\x13\xc4/\xa8\xb6<+\xc1\xff\xc8\xa5 \x89\x00\x90G\xef\xea\xb7\x15\x06\xcd\xb5\x12~\xbb)\x0f\xb8\a\x04\x9b\x94!f\xe6\xce\xed\xe7;\xfe\x7f\xc5\xa4\x37\xb1L\x91n\x8dv\x03-\xde\x96&}\xc6\\\xd3\xf2O\x19?\xdcy\x1dR\xeb\xf3m^\xfbi\xb2\xf0\x31\f\xd4\xcf\x8c\xe2u\xa9JW\x84\x11\x45\x1b\xf5\xe4\x0es\xaa\xf1\xddY\x14l\x92T\xd0xp\xe3I\x80P\xa7\xf6w\x93\x86\x83*\xc7[\xe9\xee\x8f\x01="); // 0x4cff40
    unsigned char v8 = *(char *)((int64_t)(v3 / 256 % 256) + (int64_t)"p,\xb3\xc0\xe4W\xea\xae#kE\xa5\xedO\x1d\x92\x86\xaf|\x1f>\xdc^\v\xa6\x39\xd5]\xd9ZQl\x8b\x9a\xfb\xb0t+\xf0\x84\xdf\xcb\x34vm\xa9\xd1\x04\x14:\xde\x11\x32\x9cS\xf2\xfe\xcf\xc3z$\xe8`i\xaa\xa0\xa1\x62T\x1e\xe0\x64\x10\x00\xa3u\x8a\xe6\t\xdd\x87\x83\xcd\x90s\xf6\x9d\xbfR\xd8\xc8\xc6\x81o\x13\x63\xe9\xa7\x9f\xbc)\xf9/\xb4x\x06\xe7q\xd4\xab\x88\x8dr\xb9\xf8\xac\x36*<\xf1@\xd3\xbb\x43\x15\xadw\x80\x82\xec'\xe5\x85\x35\fA\xef\x93\x19!\x0eNe\xbd\xb8\x8f\xeb\xce\x30_\xc5\x1a\xe1\xcaG=\x01\xd6VM\rf\xcc-\x12 \xb1\x99L\xc2~\x05\xb7\x31\x17\xd7Xa\x1b\x1c\x0f\x16\x18\"D\xb2\xb5\x91\b\xa8\xfcP\xd0}\x89\x97[\x95\xff\xd2\xc4H\xf7\xdb\x03\xda?\x94\\\x02J3g\xf3\x7f\xe2\x9b&7;\x96K\xbe.y\x8cn\x8e\xf5\xb6\xfdY\x98jF\xba%B\xa2\xfa\aU\xee\nIh8\xa4({\xc9\xc1\xe3\xf4\xc7\x9e"); // 0x4cff4f
    unsigned char v9 = *(char *)((int64_t)(v3 / 0x1000000) + (int64_t)"\xe0\x05X\xd9gN\x81\xcb\xc9\v\xaej\xd5\x18]\x82\x46\xdf\xd6'\x8a\x32KB\xdb\x1c\x9e\x9c:\xca%{\rq_\x1f\xf8\xd7>\x9d|`\xb9\xbe\xbc\x8b\x16\x34M\xc3r\x95\xab\x8e\xbaz\xb3\x02\xb4\xad\xa2\xac\xd8\x9a\x17\x1a\x35\xcc\xf7\x99\x61Z\xe8$V@\xe1\x63\t3\xbf\x98\x97\x85h\xfc\xec\n\xdaoSb\xa3.\b\xaf(\xb0t\xc2\xbd\x36\"8d\x1e\x39,\xa6\x30\xe5\x44\xfd\x88\x9f\x65\x87k\xf4#H\x10\xd1Q\xc0\xf9\xd2\xa0U\xa1\x41\xfa\x43\x13\xc4/\xa8\xb6<+\xc1\xff\xc8\xa5 \x89\x00\x90G\xef\xea\xb7\x15\x06\xcd\xb5\x12~\xbb)\x0f\xb8\a\x04\x9b\x94!f\xe6\xce\xed\xe7;\xfe\x7f\xc5\xa4\x37\xb1L\x91n\x8dv\x03-\xde\x96&}\xc6\\\xd3\xf2O\x19?\xdcy\x1dR\xeb\xf3m^\xfbi\xb2\xf0\x31\f\xd4\xcf\x8c\xe2u\xa9JW\x84\x11\x45\x1b\xf5\xe4\x0es\xaa\xf1\xddY\x14l\x92T\xd0xp\xe3I\x80P\xa7\xf6w\x93\x86\x83*\xc7[\xe9\xee\x8f\x01="); // 0x4cff59
    unsigned char v10 = *(char *)((int64_t)(v3 % 256) + (int64_t)"p\x82,\xec\xb3'\xc0\xe5\xe4\x85W5\xea\f\xae\x41#\xefk\x93\x45\x19\xa5!\xed\x0eON\x1d\x65\x92\xbd\x86\xb8\xaf\x8f|\xeb\x1f\xce>0\xdc_^\xc5\v\x1a\xa6\xe1\x39\xca\xd5G]=\xd9\x01Z\xd6QVlM\x8b\r\x9a\x66\xfb\xcc\xb0-t\x12+ \xf0\xb1\x84\x99\xdfL\xcb\xc2\x34~v\x05m\xb7\xa9\x31\xd1\x17\x04\xd7\x14X:a\xde\x1b\x11\x1c\x32\x0f\x9c\x16S\x18\xf2\"\xfe\x44\xcf\xb2\xc3\xb5z\x91$\b\xe8\xa8`\xfciP\xaa\xd0\xa0}\xa1\x89\x62\x97T[\x1e\x95\xe0\xff\x64\xd2\x10\xc4\x00H\xa3\xf7u\xdb\x8a\x03\xe6\xda\t?\xdd\x94\x87\\\x83\x02\xcdJ\x90\x33sg\xf6\xf3\x9d\x7f\xbf\xe2R\x9b\xd8&\xc8\x37\xc6;\x81\x96oK\x13\xbe\x63.\xe9y\xa7\x8c\x9fn\xbc\x8e)\xf5\xf9\xb6/\xfd\xb4Yx\x98\x06j\xe7\x46q\xba\xd4%\xab\x42\x88\xa2\x8d\xfar\a\xb9U\xf8\xee\xac\n6I*h<8\xf1\xa4@(\xd3{\xbb\xc9\x43\xc1\x15\xe3\xad\xf4w\xc7\x80\x9e"); // 0x4cff68
    unsigned char v11 = *(char *)((int64_t)(v3 / 0x10000 % 256) + (int64_t)"8A\x16v\xd9\x93`\xf2r\xc2\xab\x9au\x06W\xa0\x91\xf7\xb5\xc9\xa2\x8c\xd2\x90\xf6\a\xa7'\x8e\xb2I\xde\x43\\\xd7\xc7>\xf5\x8fg\x1f\x18n\xaf/\xe2\x85\rS\xf0\x9c\x65\xea\xa3\xae\x9e\xec\x80-k\xa8+6\xa6\xc5\x86M3\xfd\x66X\x96:\t\x95\x10x\xd8\x42\xcc\xef&\xe5\x61\x1a?;\x82\xb6\xdb\xd4\x98\xe8\x8b\x02\xeb\n,\x1d\xb0o\x8d\x88\x0e\x19\x87N\v\xa9\fy\x11\x7f\"\xe7Y\xe1\xda=\xc8\x12\x04tT0~\xb4(UhP\xbe\xd0\xc4\x31\xcb*\xad\x0f\xcap\xff\x32i\bb\x00$\xd1\xfb\xba\xed\x45\x81sm\x84\x9f\xeeJ\xc3.\xc1\x01\xe6%H\x99\xb9\xb3{\xf9\xce\xbf\xdfq)\xcdl\x13\x64\x9b\x63\x9d\xc0K\xb7\xa5\x89_\xb1\x17\xf4\xbc\xd3\x46\xcf\x37^G\x94\xfa\xfc[\x97\xfeZ\xac<L\x03\x35\xf3#\xb8]j\x92\xd5!DQ\xc6}9\x83\xdc\xaa|wV\x05\x1b\xa4\x15\x34\x1e\x1c\xf8R \x14\xe9\xbd\xdd\xe4\xa1\xe0\x8a\xf1\xd6z\xbb\xe3@O"); // 0x4cff6d
    int32_t v12 = v9; // 0x4cff75
    int32_t v13 = 256 * (int32_t)v8 | (int32_t)v10 | 0x1000000 * v12 | 0x10000 * (int32_t)v11; // 0x4cff80
    uint32_t v14 = (256 * v13 | v12) ^ (256 * (int32_t)v4 | (int32_t)v5 | 0x1000000 * (int32_t)v6 | 0x10000 * (int32_t)v7); // 0x4cff87
    uint32_t v15 = (v14 / 0x10000 | 0x10000 * v14) ^ v13; // 0x4cff8e
    uint32_t result = (v15 / 256 | 0x1000000 * v15) ^ v14; // 0x4cff97
    int32_t * v16 = (int32_t *)(a3 + 4); // 0x4cff99
    *v16 = result ^ *v16;
    *(int32_t *)a3 = v15 ^ (int32_t)v1 ^ (result / 256 | 0x1000000 * result);
    return result;
}

// Address range: 0x542290 - 0x542348
int64_t function_542290(int64_t a1) {
    // 0x542290
    __readfsqword(40);
    int64_t v1 = function_20210(); // 0x5422b2
    int64_t v2 = function_542240(); // 0x5422bd
    int64_t v3; // bp-88, 0x542290
    function_5473b0(v1, &v3, a1 & 0xffffffff);
    int64_t v4; // bp-72, 0x542290
    int64_t v5 = (int64_t)&v4; // 0x5422e3
    if (v3 != v5) {
        // 0x5422ec
        function_4eeb50(v3);
    }
    // 0x5422f1
    *(int32_t *)(v1 + 16) = (int32_t)a1;
    *(int64_t *)(v1 + 24) = v2;
    *(int64_t *)v1 = (int64_t)&g6;
    int64_t v6 = function_203b0(v1, 0x845bd0, &g1); // 0x542319
    int64_t v7 = v5; // 0x54231e
    int64_t v8 = v6; // 0x54231e
    while (true) {
        // 0x542321
        function_1fcc0(v1);
        _Unwind_Resume((struct _Unwind_Exception *)v8);
        v7 += 16;
        if (v3 != v7) {
            // 0x542341
            function_4eeb50(v3);
        }
        // 0x542321
        v8 = (int64_t)&g33;
    }
}

// Address range: 0x551750 - 0x551805
int64_t function_551750(int64_t wstr2, int64_t a2) {
    int64_t result = (int64_t)&g20; // 0x55175b
    if (a2 == wstr2) {
        // 0x55179b
        return result;
    }
    if (wstr2 == 0) {
        // 0x55179b
        return result;
    }
    int64_t v1 = a2 - wstr2; // 0x551769
    int64_t n = v1 >> 2; // 0x551774
    int64_t v2 = function_550870(n, 0); // 0x55177b
    int64_t wstr = v2 + 24; // 0x551787
    int64_t result2; // 0x551750
    if (n == 1) {
        // 0x5517b0
        *(int32_t *)wstr = (int32_t)wstr2;
        result2 = wstr2 & 0xffffffff;
    } else {
        // 0x55178d
        result2 = v2;
        if (n != 0) {
            // 0x5517e0
            result2 = (int64_t)wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
        }
    }
    // 0x551792
    if (v2 == g7) {
        // 0x55179b
        return wstr;
    }
    // 0x5517f0
    *(int32_t *)(v2 + 16) = 0;
    *(int64_t *)v2 = n;
    *(int32_t *)(wstr + v1) = 0;
    return result2;
}

// Address range: 0x557210 - 0x5572c1
int64_t function_557210(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if ((char)a5 != 0) {
        int64_t v1 = a1; // 0x55722b
        v1--;
        *(char *)v1 = *(char *)(a3 + 4 + a2);
        // 0x557251
        return a1 - v1;
    }
    if ((a4 & 74) == 64) {
        // 0x5572a4
        return a2 % 8;
    }
    int64_t v2 = a3 + 20 + (((int32_t)a4 & (int32_t)"le") == 0 ? -16 : 0); // 0x55727d
    int64_t v3 = a1; // 0x557282
    uint64_t v4 = a2;
    v3--;
    *(char *)v3 = *(char *)(v2 + v4 % 16);
    int64_t v5 = v4 / 16; // 0x5572a0
    while (v4 >= 16) {
        // 0x557288
        v4 = v5;
        v3--;
        *(char *)v3 = *(char *)(v2 + v4 % 16);
        v5 = v4 / 16;
    }
    // 0x557251
    return a1 - v3;
}

// Address range: 0x5572d0 - 0x557381
int64_t function_5572d0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if ((char)a5 != 0) {
        int64_t v1 = a1; // 0x5572eb
        v1--;
        *(char *)v1 = *(char *)(a3 + 4 + a2);
        // 0x557311
        return a1 - v1;
    }
    if ((a4 & 74) == 64) {
        // 0x557364
        return a2 % 8;
    }
    int64_t v2 = a3 + 20 + (((int32_t)a4 & (int32_t)"le") == 0 ? -16 : 0); // 0x55733d
    int64_t v3 = a1; // 0x557342
    uint64_t v4 = a2;
    v3--;
    *(char *)v3 = *(char *)(v2 + v4 % 16);
    int64_t v5 = v4 / 16; // 0x557360
    while (v4 >= 16) {
        // 0x557348
        v4 = v5;
        v3--;
        *(char *)v3 = *(char *)(v2 + v4 % 16);
        v5 = v4 / 16;
    }
    // 0x557311
    return a1 - v3;
}
