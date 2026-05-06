/*
 * Targeted RetDec C for native executable gap queue batch 79.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4aff90-0x4affde rank=21 name=fcn.004aff90 kind=r2_discovered bytes=78 uncovered=78
 *   0x507be0-0x507c2e rank=22 name=fcn.00507be0 kind=r2_discovered bytes=78 uncovered=78
 *   0x551ce0-0x551d2e rank=23 name=fcn.00551ce0 kind=r2_discovered bytes=78 uncovered=78
 *   0x5248a-0x524d7 rank=24 name=fcn.0005248a kind=r2_discovered bytes=77 uncovered=77
 *   0x6129c-0x612e9 rank=25 name=fcn.0006129c kind=r2_discovered bytes=77 uncovered=77
 *   0x4b02e0-0x4b032d rank=26 name=fcn.004b02e0 kind=r2_discovered bytes=77 uncovered=77
 *   0x4ee8a0-0x4ee8ed rank=27 name=sym.ZydisGetInstructionDefinition kind=symbol_named bytes=77 uncovered=77
 *   0x501020-0x50106d rank=28 name=fcn.00501020 kind=r2_discovered bytes=77 uncovered=77
 *   0x553b6f-0x553bbc rank=29 name=fcn.00553b6f kind=r2_discovered bytes=77 uncovered=77
 *   0x56fe30-0x56fe7d rank=30 name=method.std::ctype_wchar_t_.virtual_32 kind=native_discovered bytes=77 uncovered=77
 *   0x56fe90-0x56fedd rank=31 name=method.std::ctype_wchar_t_.virtual_40 kind=native_discovered bytes=77 uncovered=77
 *   0x20e68-0x20eb4 rank=32 name=entry.init3 kind=native_discovered bytes=76 uncovered=76
 *   0x53f2a-0x53f76 rank=33 name=fcn.00053f2a kind=r2_discovered bytes=76 uncovered=76
 *   0x55302-0x5534e rank=34 name=fcn.00055302 kind=r2_discovered bytes=76 uncovered=76
 *   0x5bff9-0x5c045 rank=35 name=fcn.0005bff9 kind=r2_discovered bytes=76 uncovered=76
 *   0x68a54-0x68aa0 rank=36 name=fcn.00068a54 kind=r2_discovered bytes=76 uncovered=76
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
int64_t unknown_166c28d(void);
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
int32_t __towlower_l(int32_t wc, struct __locale_struct *locale);
int32_t __towupper_l(int32_t wc, struct __locale_struct *locale);
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

int64_t function_20e68(void);
int64_t function_21a2d();
int64_t function_48d3d1();
int64_t function_4afe70();
int64_t function_4aff90(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b01d0();
int64_t function_4b02e0(void);
int64_t function_4b0fc0();
int64_t function_4ee8c0(int64_t a1, int64_t a2);
int64_t function_4eeb40();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_501020(int64_t a1);
int64_t function_507be0(int64_t a1);
int64_t function_5248a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_53f2a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_551ce0(int64_t a1);
int64_t function_55302(int64_t a1, int64_t a2, int64_t a3);
int64_t function_553b6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_565970();
int64_t function_5679b0();
int64_t function_5679e0();
int64_t function_56afb0();
int64_t function_56fe30(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_56fe90(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_5bfa4();
int64_t function_5bff9(int64_t a1, int64_t a2);
int64_t function_6129c(int64_t a1, int64_t a2);
int64_t function_687c4();
int64_t function_68a54(int64_t a1, int64_t a2);

// Address range: 0x20e68 - 0x20eb4
int64_t function_20e68(void) {
    // 0x20e68
    *(int32_t *)&g5 = 0;
    g6 = 0;
    g7 = (int64_t)&g5;
    g8 = (int64_t)&g5;
    g9 = 0;
    int32_t result = __cxa_atexit((void (*)(int64_t *))0x3b290, &g4, (int64_t *)0x849800); // 0x20eaf
    return result;
}

// Address range: 0x5248a - 0x524d7
int64_t function_5248a(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x5248c
    int64_t v2; // 0x5248a
    uint64_t v3 = (v2 & 0xffffffff) % v1; // 0x52495
    int64_t v4 = *(int64_t *)(8 * v3 + a1); // 0x5249b
    if (v4 == 0) {
        // 0x524cb
        return 0;
    }
    int32_t v5 = v2;
    int64_t result = *(int64_t *)v4; // 0x524a7
    if (*(int32_t *)(result + 8) == v5) {
        // 0x524cb
        return result;
    }
    int64_t v6 = result; // 0x524ae
    v6 = *(int64_t *)v6;
    int64_t result2 = 0; // 0x524b6
    while (v6 != 0) {
        uint32_t v7 = *(int32_t *)(v6 + 8); // 0x524be
        result2 = 0;
        if (v3 != (int64_t)v7 % v1) {
            // break -> 0x524cb
            break;
        }
        // 0x524aa
        result2 = v6;
        if (v7 == v5) {
            // break -> 0x524cb
            break;
        }
        v6 = *(int64_t *)v6;
        result2 = 0;
    }
    // 0x524cb
    return result2;
}

// Address range: 0x53f2a - 0x53f76
int64_t function_53f2a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 - a2; // 0x53f40
    int64_t v2 = 0; // 0x53f43
    if (v1 != 0) {
        // 0x53f45
        v2 = function_4efd30(v1);
    }
    // 0x53f51
    *(int64_t *)a1 = v2;
    *(int64_t *)(a1 + 16) = v2 + v1;
    *(int64_t *)(a1 + 8) = function_21a2d(a2, a3, v2);
    int64_t result; // 0x53f2a
    return result;
}

// Address range: 0x55302 - 0x5534e
int64_t function_55302(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 - a2; // 0x55318
    int64_t v2 = 0; // 0x5531b
    if (v1 != 0) {
        // 0x5531d
        v2 = function_4efd30(v1);
    }
    // 0x55329
    *(int64_t *)a1 = v2;
    *(int64_t *)(a1 + 16) = v2 + v1;
    *(int64_t *)(a1 + 8) = function_21a2d(a2, a3, v2);
    int64_t result; // 0x55302
    return result;
}

// Address range: 0x5bff9 - 0x5c045
int64_t function_5bff9(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x5c005
    uint64_t v2 = *(int64_t *)(a2 - 24); // 0x5c009
    int64_t v3 = function_5bfa4(a1, a2, v1 > v2 ? v2 : v1); // 0x5c017
    if ((int32_t)v3 != 0) {
        // 0x5c03e
        return v3 < 0;
    }
    uint64_t v4 = v1 - v2; // 0x5c020
    int64_t v5 = 0x7fffffff; // 0x5c02f
    if (v4 <= 0x7fffffff) {
        int64_t v6 = v4 + 0x80000000; // 0x5c034
        v5 = v6 < 0 == ((v6 ^ v4) & (v4 ^ -0x8000000000000000)) < 0 ? v4 & 0xffffffff : 0x80000000;
    }
    // 0x5c03e
    return v5 < 0;
}

// Address range: 0x6129c - 0x612e9
int64_t function_6129c(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x6129c
    int64_t v3 = a1 + 24; // 0x612a0
    int64_t v4 = v2 + a1; // 0x612a4
    int64_t result; // 0x612be
    if (v3 == v4) {
        // 0x612be
        result = v3 - a1;
        *(int64_t *)(a2 + 16) = v2 - result;
        return result;
    }
    int64_t v5 = v3; // 0x612e2
    uint64_t v6 = *(int64_t *)(v5 + 8); // 0x612ad
    int64_t v7 = v5; // 0x612b4
    while (v6 != 0) {
        // 0x612b6
        if (*(int64_t *)v5 == 0) {
            int64_t * v8 = (int64_t *)(v1 + 32); // 0x612c9
            if (v6 > *v8) {
                // 0x612cf
                *v8 = v6;
            }
            int64_t * v9 = (int64_t *)(v1 + 24); // 0x612d3
            *v9 = *v9 + v6;
            *(int32_t *)v1 = *(int32_t *)&v1 + 1;
        } else {
            int32_t * v10 = (int32_t *)(v1 + 4); // 0x612db
            *v10 = *v10 + 1;
            int64_t * v11 = (int64_t *)(v1 + 8); // 0x612de
            *v11 = *v11 + v6;
        }
        // 0x612e2
        v5 = v5 + 16 + v6;
        v7 = v4;
        if (v5 == v4) {
            // break -> 0x612be
            break;
        }
        v6 = *(int64_t *)(v5 + 8);
        v7 = v5;
    }
    // 0x612be
    result = v7 - a1;
    *(int64_t *)(v1 + 16) = v2 - result;
    return result;
}

// Address range: 0x68a54 - 0x68aa0
int64_t function_68a54(int64_t a1, int64_t a2) {
    // 0x68a54
    function_48d3d1(a1 + 48, a2 + 48, 64);
    *(int16_t *)(a1 + 112) = (int16_t)*(int32_t *)(a2 + 112);
    *(int64_t *)(a1 + 144) = 0;
    *(int64_t *)(a1 + 152) = 0;
    *(int32_t *)(a1 + 116) = *(int32_t *)(a2 + 116);
    return function_687c4(a1);
}

// Address range: 0x4aff90 - 0x4affde
int64_t function_4aff90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_4afe70(); // 0x4affae
    int64_t result = v1; // 0x4affb5
    if ((int32_t)v1 == 0) {
        // 0x4affb7
        int64_t v2; // 0x4aff90
        result = function_4b0fc0(a3, a1, v2);
        *(int64_t *)a1 = v2 + a3;
    }
    // 0x4affcf
    return result;
}

// Address range: 0x4b02e0 - 0x4b032d
int64_t function_4b02e0(void) {
    // 0x4b02e0
    return function_4b01d0();
}

// Address range: 0x4ee8a0 - 0x4ee8ba
int64_t ZydisGetInstructionDefinition(int64_t a1, int64_t a2, int64_t result) {
    // 0x4ee8a0
    return result;
}

// Address range: 0x4ee8c0 - 0x4ee8d2
int64_t function_4ee8c0(int64_t a1, int64_t a2) {
    // 0x4ee8c0
    int64_t result; // 0x4ee8c0
    *(int64_t *)result = g3 + (16 * a2 & 0xffff0);
    return result;
}

// Address range: 0x501020 - 0x50106b
int64_t function_501020(int64_t a1) {
    char * v1 = (char *)(a1 + 168); // 0x501020
    int64_t result; // 0x501020
    if (*v1 != 0) {
        // 0x501033
        return result;
    }
    int64_t * v2 = (int64_t *)(a1 + 152); // 0x501029
    if (*v2 != 0) {
        // 0x501033
        return result;
    }
    uint64_t v3 = *(int64_t *)(a1 + 160); // 0x50103c
    if (v3 >= 0x1fffffffffffffff) {
        // 0x501033
        return 0x1ffffffffffffffe;
    }
    int64_t result2 = function_4eec00(4 * v3); // 0x501056
    *v1 = 1;
    *v2 = result2;
    return result2;
}

// Address range: 0x507be0 - 0x507c2e
// From class:    std::__numpunct_cache<wchar_t>
// Type:          constructor
int64_t function_507be0(int64_t a1) {
    // 0x507be0
    *(int64_t *)a1 = (int64_t)&g1;
    if (*(char *)(a1 + 328) == 0) {
        // 0x507c25
        return function_565970(a1);
    }
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x507bfb
    if (v1 != 0) {
        // 0x507c04
        function_4eeb40(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 40); // 0x507c09
    if (v2 != 0) {
        // 0x507c12
        function_4eeb40(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 56); // 0x507c17
    if (v3 != 0) {
        // 0x507c20
        function_4eeb40(v3);
    }
    // 0x507c25
    return function_565970(a1);
}

// Address range: 0x551ce0 - 0x551d2e
// From class:    std::__numpunct_cache<char>
// Type:          constructor
int64_t function_551ce0(int64_t a1) {
    // 0x551ce0
    *(int64_t *)a1 = (int64_t)&g2;
    if (*(char *)(a1 + 136) == 0) {
        // 0x551d25
        return function_565970(a1);
    }
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x551cfb
    if (v1 != 0) {
        // 0x551d04
        function_4eeb40(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 40); // 0x551d09
    if (v2 != 0) {
        // 0x551d12
        function_4eeb40(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 56); // 0x551d17
    if (v3 != 0) {
        // 0x551d20
        function_4eeb40(v3);
    }
    // 0x551d25
    return function_565970(a1);
}

// Address range: 0x553b6f - 0x553bbc
int64_t function_553b6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x553b6f
    bool v1; // 0x553b6f
    bool v2 = v1;
    int64_t v3 = a4;
    if ((!v1 && !v2) == v2) {
        // 0x553b78
        return __readfsqword(40) ^ a5;
    }
    // 0x553b98
    int64_t v4; // 0x553b6f
    function_5679b0(&v3, v4, 0);
    function_56afb0(v4, v3);
    return function_5679e0(&v3);
}

// Address range: 0x56fe30 - 0x56fe7a
// From class:    std::ctype_byname<wchar_t>
// Type:          virtual member function
int64_t function_56fe30(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t result; // 0x56fe30
    if ((uint64_t)a3 >= a4) {
        // 0x56fe6c
        return result;
    }
    int64_t v1 = a3; // 0x56fe50
    result = a3;
    while ((char)a1 == 0) {
        // 0x56fe50
        v1 += 4;
        result = v1;
        if (v1 >= a4) {
            // break -> 0x56fe6c
            break;
        }
        result = a3;
    }
    // 0x56fe6c
    return result;
}

// Address range: 0x56fe90 - 0x56feda
// From class:    std::ctype_byname<wchar_t>
// Type:          virtual member function
int64_t function_56fe90(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t result; // 0x56fe90
    if ((uint64_t)a3 >= a4) {
        // 0x56fecc
        return result;
    }
    int64_t v1 = a3; // 0x56feb0
    result = a3;
    while ((char)a1 != 0) {
        // 0x56feb0
        v1 += 4;
        result = v1;
        if (v1 >= a4) {
            // break -> 0x56fecc
            break;
        }
        result = a3;
    }
    // 0x56fecc
    return result;
}
