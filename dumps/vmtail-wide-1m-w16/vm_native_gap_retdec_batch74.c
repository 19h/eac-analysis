/*
 * Targeted RetDec C for native executable gap queue batch 74.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4fc7e0-0x4fc839 rank=20 name=fcn.004fc7e0 kind=r2_discovered bytes=89 uncovered=89
 *   0x548f80-0x548fd9 rank=21 name=fcn.00548f80 kind=r2_discovered bytes=89 uncovered=89
 *   0x21cae-0x21d06 rank=22 name=fcn.00021cae kind=r2_discovered bytes=88 uncovered=88
 *   0x44bea-0x44c42 rank=23 name=fcn.00044bea kind=r2_discovered bytes=88 uncovered=88
 *   0x690dc-0x69134 rank=24 name=fcn.000690dc kind=r2_discovered bytes=88 uncovered=88
 *   0x72782-0x727da rank=25 name=fcn.00072782 kind=r2_discovered bytes=88 uncovered=88
 *   0x727da-0x72832 rank=26 name=fcn.000727da kind=r2_discovered bytes=88 uncovered=88
 *   0x2139db-0x213a33 rank=27 name=fcn.002139db kind=r2_discovered bytes=88 uncovered=88
 *   0x4ba450-0x4ba4a8 rank=28 name=fcn.004ba450 kind=r2_discovered bytes=88 uncovered=88
 *   0x4ba7d0-0x4ba828 rank=29 name=fcn.004ba7d0 kind=r2_discovered bytes=88 uncovered=88
 *   0x5082e0-0x508338 rank=30 name=fcn.005082e0 kind=r2_discovered bytes=88 uncovered=88
 *   0x5523e0-0x552438 rank=31 name=fcn.005523e0 kind=r2_discovered bytes=88 uncovered=88
 *   0x38e9c-0x38ef3 rank=32 name=fcn.00038e9c kind=r2_discovered bytes=87 uncovered=87
 *   0x4b9da-0x4ba31 rank=33 name=fcn.0004b9da kind=r2_discovered bytes=87 uncovered=87
 *   0x40c488-0x40c4df rank=34 name=fcn.0040c488 kind=r2_discovered bytes=87 uncovered=87
 *   0x48d452-0x48d4a9 rank=35 name=fcn.0048d452 kind=r2_discovered bytes=87 uncovered=87
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
int64_t __asm_iretd(void);
int64_t __asm_sti(int64_t value, int64_t flags);
int64_t unknown_34e4aca1(int64_t value);
void unknown_11c3039(void);
int64_t unknown_2a35274a(void);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_3d2a4ac0(void);
int64_t unknown_ffffffffd3dfe90d(void);
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
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
void __stack_chk_fail(void);
int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);
int128_t __asm_movsd(int64_t value);
int128_t __asm_movsd_133(int64_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
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
struct _IO_FILE *fdopen(int fd, const char *mode);
size_t fread(void *ptr, size_t size, size_t nmemb, struct _IO_FILE *stream);
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
int vswprintf(int32_t *wcs, size_t maxlen, const int32_t *format, int64_t ap);
int32_t *wmemchr(const int32_t *s, int32_t c, size_t n);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int32_t getwc(struct _IO_FILE *stream);
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
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_1ff50();
int64_t function_20550();
int64_t function_2139db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_21cae(int64_t a1);
int64_t function_2508e();
int64_t function_38b18();
int64_t function_38e9c(int64_t a1, int64_t a2);
int64_t function_40c424();
int64_t function_40c42b();
int64_t function_40c488(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_44bea(int64_t a1);
int64_t function_48d35d();
int64_t function_48d3d1();
int64_t function_48d452(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b0ac0();
int64_t function_4b942();
int64_t function_4b9da(int64_t a1, int64_t a2);
int64_t function_4ba440();
int64_t function_4ba450(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ba7d0(int64_t a1, int64_t a2);
int64_t function_4eeb40();
int64_t function_4fc380();
int64_t function_4fc7e0(int64_t a1, int64_t a2);
int64_t function_5082e0(int64_t a1);
int64_t function_548f80(void);
int64_t function_5523e0(int64_t a1);
int64_t function_565970();
int64_t function_565f80();
int64_t function_5679e0();
int64_t function_568110();
int64_t function_690dc(int64_t a1, int64_t a2);
int64_t function_72782(int64_t cond);
int64_t function_727da(int64_t cond);
int64_t function_729b6();
int64_t function_729ce();
int64_t function_c823b();

// Address range: 0x21cae - 0x21d06
int64_t function_21cae(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x21cc1
    function_729b6();
    int64_t v2 = *(int64_t *)(a1 + 8); // 0x21cd9
    int64_t v3; // bp-40, 0x21cae
    int64_t v4 = function_729ce(&v3); // 0x21cf6
    if (v1 != __readfsqword(40)) {
        // 0x21cf8
        __stack_chk_fail();
        v4 = (int64_t)&g11;
    }
    // 0x21cfd
    return v4 & -256 | (int64_t)(v2 == (int64_t)&v3);
}

// Address range: 0x38e9c - 0x38ef3
int64_t function_38e9c(int64_t a1, int64_t a2) {
    // 0x38e9c
    *(int64_t *)a1 = function_38b18(a2 - 24);
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    *(char *)(a1 + 16) = *(char *)(a2 + 16);
    *(int64_t *)(a1 + 24) = function_38b18(*(int64_t *)(a2 + 24) - 24);
    *(int64_t *)(a1 + 32) = function_38b18(*(int64_t *)(a2 + 32) - 24);
    *(int64_t *)(a1 + 40) = *(int64_t *)(a2 + 40);
    int64_t result; // 0x38e9c
    return result;
}

// Address range: 0x44bea - 0x44c42
int64_t function_44bea(int64_t a1) {
    int32_t v1 = a1;
    int32_t v2 = (int64_t)&g1; // 0x44bee
    if (v1 >= 0 == (v1 != 0)) {
        // 0x44c41
        *(int32_t *)a1 = v1 - 1;
        return a1 & 0xffffffff;
    }
    v2--;
    while (v2 != 0) {
        // 0x44c08
        v2--;
    }
    // 0x44c24
    *(int32_t *)a1 = v1 - 1;
    uint32_t v3 = sem_wait((int64_t *)(a1 + 8)) + 1; // 0x44c31
    int64_t result; // 0x44bea
    while (v3 == 0) {
        int32_t * v4 = __errno_location(); // 0x44c35
        if (*v4 != 4) {
            // 0x44c3f
            result = (int64_t)v4;
            return result;
        }
        v3 = sem_wait((int64_t *)(a1 + 8)) + 1;
    }
    // 0x44c3f
    result = v3;
  lab_0x44c3f_2:
    // 0x44c3f
    return result;
}

// Address range: 0x4b9da - 0x4ba31
int64_t function_4b9da(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4b9e4
    int64_t v2 = (int64_t)&g9; // bp-24, 0x4ba05
    function_4b942();
    function_2508e(&v2);
    int64_t result = 0; // 0x4ba24
    if (v1 != __readfsqword(40)) {
        // 0x4ba26
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x4ba2b
    return result;
}

// Address range: 0x690dc - 0x69134
int64_t function_690dc(int64_t a1, int64_t a2) {
    uint32_t v1 = *(int32_t *)(a1 + 180); // 0x69114
    if (v1 == 0) {
        // 0x69130
        int64_t result; // 0x690dc
        return result;
    }
    // 0x6911e
    return *(int64_t *)((int64_t)v1 + 72);
}

// Address range: 0x72782 - 0x727da
int64_t function_72782(int64_t cond) {
    int64_t v1 = __readfsqword(40); // 0x72795
    function_729b6();
    *(char *)(cond + 88) = 1;
    pthread_cond_broadcast((int64_t *)cond);
    int64_t v2; // bp-40, 0x72782
    function_729ce(&v2);
    int64_t result = 0; // 0x727cc
    if (v1 != __readfsqword(40)) {
        // 0x727ce
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x727d3
    return result;
}

// Address range: 0x727da - 0x72832
int64_t function_727da(int64_t cond) {
    int64_t v1 = __readfsqword(40); // 0x727ed
    function_729b6();
    *(char *)(cond + 88) = 0;
    pthread_cond_broadcast((int64_t *)cond);
    int64_t v2; // bp-40, 0x727da
    function_729ce(&v2);
    int64_t result = 0; // 0x72824
    if (v1 != __readfsqword(40)) {
        // 0x72826
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x7282b
    return result;
}

// Address range: 0x2139db - 0x213a33
int64_t function_2139db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2139db
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x2139db
    bool v2; // 0x2139db
    *(char *)a4 = *(char *)&v1 + (v2 ? -128 : 127);
    return function_c823b();
}

// Address range: 0x40c488 - 0x40c4bb
int64_t function_40c488(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int64_t v1 = a2 & -256 | 57; // 0x40c489
    uint32_t v2 = *(int32_t *)v1; // 0x40c48c
    bool v3; // 0x40c488
    unsigned char v4 = (char)v3 - *(char *)(a4 + 4) + (char)(v2 / 256); // 0x40c48d
    int64_t v5 = 256 * (int64_t)v4 | (int64_t)(v2 & -0xff01); // 0x40c490
    if (v4 == 0) {
        v5 = function_40c42b();
    }
    char * v6 = (char *)(v1 - 0x5594586f + (v3 ? -4 : 4)); // 0x40c493
    char v7 = *v6 | (char)(a4 / 256); // 0x40c493
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x40c493
    *v6 = v7;
    int64_t v9 = v5; // 0x40c49b
    if (v8 % 2 == 0) {
        v9 = function_40c424();
    }
    int64_t result = a4 & 0xffffffff; // 0x40c499
    int32_t * v10 = (int32_t *)(result - 120); // 0x40c49e
    *v10 = *v10 & -0x6ecbfc07;
    int32_t * v11 = (int32_t *)(a4 - 47); // 0x40c4af
    *v11 = *v11 & (int32_t)v9;
    int64_t v12; // 0x40c488
    int32_t * v13 = (int32_t *)(v12 - 59); // 0x40c4b2
    *v13 = *v13 & 103;
    char * v14 = (char *)(a3 - 102); // 0x40c4b6
    *v14 = *v14 + (char)(a3 / 256);
    return result;
}

// Address range: 0x48d452 - 0x48d4a9
int64_t function_48d452(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_48d35d(); // 0x48d466
    if (v1 != a3) {
        // 0x48d4a2
        return function_48d3d1(v1 + a1, a2, a3 - v1) + v1;
    }
    int64_t v2 = -1; // 0x48d47e
    int64_t v3 = a2; // 0x48d452
    int64_t v4 = 0; // 0x48d47e
    while (v2 != 0) {
        int64_t v5 = v3;
        v2--;
        bool v6; // 0x48d452
        v3 = v5 + (v6 ? -1 : 1);
        v4 = v2;
        if (*(char *)v5 == 0) {
            // break -> 
            break;
        }
        v4 = 0;
    }
    // 0x48d4a2
    return a3 - 1 + -1 - v4;
}

// Address range: 0x4ba450 - 0x4ba4a2
int64_t function_4ba450(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ba450
    if (g7 != 0) {
        // 0x4ba45a
        return (int64_t)&g8;
    }
    int64_t result = function_4ba440(); // 0x4ba46c
    int32_t v1 = *(int32_t *)result; // 0x4ba471
    int64_t result2 = result; // 0x4ba47e
    int64_t v2 = 0; // 0x4ba47e
    if (v1 == 0) {
        // 0x4ba491
        *(int32_t *)(int64_t)&g8 = 0;
        g7 = 1;
        return result;
    }
    result2 += 16;
    *(int32_t *)(4 * v2 + (int64_t)&g8) = v1;
    v2++;
    int32_t v3 = *(int32_t *)result2; // 0x4ba48b
    while (v3 != 0) {
        // 0x4ba480
        result2 += 16;
        *(int32_t *)(4 * v2 + (int64_t)&g8) = v3;
        v2++;
        v3 = *(int32_t *)result2;
    }
    // 0x4ba491
    *(int32_t *)(4 * v2 + (int64_t)&g8) = 0;
    g7 = 1;
    return result2;
}

// Address range: 0x4ba7d0 - 0x4ba827
int64_t function_4ba7d0(int64_t a1, int64_t a2) {
    int64_t result = function_4b0ac0(a1, a2); // 0x4ba7e4
    if ((int32_t)result == 0) {
        // 0x4ba800
        return function_4b0ac0(a1 + 24, a2 + 24);
    }
    // 0x4ba7ed
    return result;
}

// Address range: 0x4fc7e0 - 0x4fc839
int64_t function_4fc7e0(int64_t a1, int64_t a2) {
    // 0x4fc7e0
    function_568110();
    function_4fc380(a1, a1 + 208);
    *(int64_t *)(a1 + 232) = a2;
    *(char *)(a1 + 224) = 0;
    *(char *)(a1 + 225) = 0;
    *(int64_t *)(a1 + 216) = 0;
    *(int32_t *)(a1 + 28) = 0;
    *(int32_t *)(a1 + 32) = (int32_t)(a2 == 0);
    return a2 == 0;
}

// Address range: 0x5082e0 - 0x508338
// From class:    std::__timepunct<wchar_t>
// Type:          constructor
int64_t function_5082e0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 32); // 0x5082f0
    *(int64_t *)a1 = (int64_t)&g3;
    if (!((v1 == 0 | v1 == function_565f80()))) {
        // 0x50830a
        function_4eeb40(v1);
    }
    // 0x508312
    function_5679e0(a1 + 24);
    return function_565970(a1);
}

// Address range: 0x548f80 - 0x548fd9
int64_t function_548f80(void) {
    // 0x548f80
    if (*(char *)&g10 != 0) {
        // 0x548f8b
        return (int64_t)&g6;
    }
    // 0x548f98
    if ((int32_t)function_20550(&g10) != 0) {
        // 0x548fac
        function_1ff50(&g10);
        __cxa_atexit((void (*)(int64_t *))&g2, (int64_t *)&g6, (int64_t *)0x849800);
    }
    // 0x548f8b
    return (int64_t)&g6;
}

// Address range: 0x5523e0 - 0x552438
// From class:    std::__timepunct<char>
// Type:          constructor
int64_t function_5523e0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 32); // 0x5523f0
    *(int64_t *)a1 = (int64_t)&g5;
    if (!((v1 == 0 | v1 == function_565f80()))) {
        // 0x55240a
        function_4eeb40(v1);
    }
    // 0x552412
    function_5679e0(a1 + 24);
    return function_565970(a1);
}
