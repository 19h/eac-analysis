/*
 * Targeted RetDec C for native executable gap queue batch 69.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4cf8d0-0x4cf936 rank=20 name=fcn.004cf8d0 kind=r2_discovered bytes=102 uncovered=102
 *   0x4eee40-0x4eeea6 rank=21 name=sym.__cxa_begin_catch kind=symbol_named bytes=102 uncovered=102
 *   0x4b8270-0x4b82d5 rank=22 name=fcn.004b8270 kind=r2_discovered bytes=101 uncovered=101
 *   0x4b9140-0x4b91a5 rank=23 name=fcn.004b9140 kind=r2_discovered bytes=101 uncovered=101
 *   0x4b9280-0x4b92e5 rank=24 name=fcn.004b9280 kind=r2_discovered bytes=101 uncovered=101
 *   0x52bb80-0x52bbe5 rank=25 name=fcn.0052bb80 kind=r2_discovered bytes=101 uncovered=101
 *   0x38bd2-0x38c36 rank=26 name=fcn.00038bd2 kind=r2_discovered bytes=100 uncovered=100
 *   0x4e4f0-0x4e554 rank=27 name=fcn.0004e4f0 kind=r2_discovered bytes=100 uncovered=100
 *   0x52392-0x523f6 rank=28 name=fcn.00052392 kind=r2_discovered bytes=100 uncovered=100
 *   0x52b570-0x52b5d4 rank=29 name=fcn.0052b570 kind=r2_discovered bytes=100 uncovered=100
 *   0x579f90-0x579ff4 rank=30 name=fcn.00579f90 kind=r2_discovered bytes=100 uncovered=100
 *   0x20c00-0x20c63 rank=31 name=entry0 kind=entrypoint bytes=99 uncovered=99
 *   0x5146e-0x514d1 rank=32 name=fcn.0005146e kind=r2_discovered bytes=99 uncovered=99
 *   0x6a82f-0x6a892 rank=33 name=fcn.0006a82f kind=r2_discovered bytes=99 uncovered=99
 *   0x4b03f0-0x4b0453 rank=34 name=fcn.004b03f0 kind=r2_discovered bytes=99 uncovered=99
 *   0x57c9c0-0x57ca23 rank=35 name=fcn.0057c9c0 kind=r2_discovered bytes=99 uncovered=99
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
extern int g1;
extern int g2;
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g7;
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3(void);
int32_t __asm_in(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
int64_t __asm_iretd(void);
int64_t unknown_34e4aca1(int64_t value);
void unknown_11c3039(void);
int64_t unknown_2a35274a(void);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_3d2a4ac0(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffff8d401ab3(void);
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
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
int128_t __asm_movapd(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
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
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_once(int32_t *once_control, ...);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int sem_init(int64_t *sem, int pshared, unsigned int value);
int sem_destroy(int64_t *sem);
int fcntl(int fd, int cmd, ...);
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
struct tm *gmtime_r(const int32_t *timep, struct tm *result);
struct _Unwind_Exception;
int64_t _Unwind_DeleteException(int64_t exception);
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_20650();
int64_t function_24ded();
int64_t function_2562c();
int64_t function_259ce();
int64_t function_25cec();
int64_t function_35fcc();
int64_t function_38a5e();
int64_t function_38bd2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4a8c6();
int64_t function_4b03f0(uint64_t a1, int64_t a2, int64_t a3);
int64_t function_4b0890();
int64_t function_4b0fc0();
int64_t function_4b8270(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b9140(int64_t a1);
int64_t function_4b9280(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ba6b0();
int64_t function_4ba6e0();
int64_t function_4bbb90();
int64_t function_4cf8d0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e4f0(int64_t a1, int64_t a2);
int64_t function_4e7d8();
int64_t function_4eeb50();
int64_t function_5146e(int64_t a1, int64_t a2);
int64_t function_52392(int64_t a1);
int64_t function_52b400();
int64_t function_52b570(int64_t a1, int64_t a2, int64_t a3);
int64_t function_52b5a();
int64_t function_52bb80(int64_t result, int64_t a2);
int64_t function_5797e0();
int64_t function_579a30();
int64_t function_579f90(int64_t a1);
int64_t function_57ba10();
int64_t function_57c670();
int64_t function_57c9c0(int64_t a1, int64_t a2);
int64_t function_6a82f(int64_t result, int64_t a2, int64_t a3);
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x20c00 - 0x20c63
int64_t entry_point(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a2 + 16); // 0x20c0c
    uint64_t v2 = *v1; // 0x20c0c
    if (v2 >= a3) {
        // 0x20c5c
        return 1;
    }
    int64_t v3 = a3; // 0x20c17
    if ((int32_t)a4 != 0) {
        int64_t v4 = v2 != 0 ? v2 : 1;
        int64_t v5 = 2 * v4; // 0x20c26
        v3 = v4;
        while (v4 < a3) {
            // 0x20c23
            v4 = v5;
            v5 = 2 * v4;
            v3 = v4;
        }
    }
    int64_t result = 0; // 0x20c4c
    if (a1 != 0) {
        // 0x20c4e
        *(int64_t *)a2 = a1;
        *v1 = v3;
        result = 1;
    }
    // 0x20c5c
    return result;
}

// Address range: 0x38bd2 - 0x38c36
int64_t function_38bd2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38bd2
    int64_t result; // 0x38bd2
    if (a2 == 0) {
        // 0x38c2a
        *(int64_t *)a1 = (int64_t)&g5;
        return result;
    }
    int64_t v1 = function_38a5e(a2, 0); // 0x38bef
    int64_t v2 = v1 + 24; // 0x38bfb
    if (a2 != 1) {
        // 0x38c07
        __asm_rep_stosb_memset((char *)v2, (char)a3, a2);
    } else {
        // 0x38c01
        *(char *)v2 = (char)a3;
    }
    // 0x38c12
    function_2562c(v1, a2);
    // 0x38c2a
    *(int64_t *)a1 = v2;
    return result;
}

// Address range: 0x4e4f0 - 0x4e554
int64_t function_4e4f0(int64_t a1, int64_t a2) {
    int64_t v1 = a2; // bp-48, 0x4e4fe
    int64_t v2 = __readfsqword(40); // 0x4e50a
    int64_t v3; // bp-40, 0x4e4f0
    function_729b6(&v3);
    function_4e7d8(a1 + 112, &v1);
    function_729ce(&v3);
    int64_t result = 0; // 0x4e546
    if (v2 != __readfsqword(40)) {
        // 0x4e548
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x4e54d
    return result;
}

// Address range: 0x5146e - 0x514d1
int64_t function_5146e(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 104; // 0x51472
    int64_t v2 = *(int64_t *)(a1 + 112);
    if (v2 == 0) {
        // 0x514c9
        return 0;
    }
    int64_t v3 = v2;
    int64_t v4; // 0x5146e
    int64_t v5; // 0x5146e
    while ((char)function_52b5a(v3 + 32, a2) != 0) {
        // 0x514a4
        v5 = *(int64_t *)(v3 + 24);
        v4 = v1;
        if (v5 == 0) {
            // break (via goto) -> 0x514aa
            goto lab_0x514aa;
        }
        v3 = v5;
    }
    int64_t v6 = *(int64_t *)(v3 + 16);
    v4 = v3;
    while (v6 != 0) {
        int64_t v7 = v3;
        v3 = v6;
        while ((char)function_52b5a(v3 + 32, a2) != 0) {
            // 0x514a4
            v5 = *(int64_t *)(v3 + 24);
            v4 = v7;
            if (v5 == 0) {
                // break (via goto) -> 0x514aa
                goto lab_0x514aa;
            }
            v3 = v5;
        }
        // 0x5149b
        v6 = *(int64_t *)(v3 + 16);
        v4 = v3;
    }
  lab_0x514aa:
    // 0x514aa
    if (v1 == v4) {
        // 0x514c9
        return 0;
    }
    int64_t result = 0; // 0x514bf
    if ((char)function_52b5a(a2, v4 + 32) == 0) {
        // 0x514c5
        result = *(int64_t *)(v4 + 40);
    }
    // 0x514c9
    return result;
}

// Address range: 0x52392 - 0x523f6
int64_t function_52392(int64_t a1) {
    // 0x52392
    function_35fcc(a1 + 80);
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x523a4
    int64_t v2 = *v1; // 0x523a4
    if (v2 != 0) {
        int64_t v3 = *(int64_t *)v2; // 0x523ad
        function_4eeb50(v2);
        while (v3 != 0) {
            int64_t v4 = v3;
            v3 = *(int64_t *)v4;
            function_4eeb50(v4);
        }
    }
    // 0x523ba
    __asm_rep_stosb_memset(NULL, 0, 8 * *(int64_t *)(a1 + 8));
    *(int64_t *)(a1 + 24) = 0;
    *v1 = 0;
    int64_t v5 = *(int64_t *)a1; // 0x523e1
    if (v5 == a1 + 48) {
        // 0x523f2
        int64_t result; // 0x52392
        return result;
    }
    // 0x523ea
    return function_4eeb50(v5);
}

// Address range: 0x6a82f - 0x6a892
int64_t function_6a82f(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = function_24ded(a2); // 0x6a845
    *(int64_t *)result = (int64_t)&g5;
    function_259ce(result, *(int64_t *)(a3 - 24) + v1);
    function_25cec(result, a2, v1);
    function_4a8c6(result, a3);
    return result;
}

// Address range: 0x4b03f0 - 0x4b0452
int64_t function_4b03f0(uint64_t a1, int64_t a2, int64_t a3) {
    char v1 = a3;
    if (v1 < 58) {
        // 0x4b0402
        *(int64_t *)a1 = (int64_t)((0x1000000 * (int32_t)a3 >> 24) - 48);
        // 0x4b041e
        return (a1 ^ 0xffffffff) + a1 + (int64_t)(0x100000000 * a2 >> 32 > a1) & 0xfffffffa;
    }
    int64_t * v2 = (int64_t *)a1;
    *v2 = 255;
    if (v1 < 71) {
        // 0x4b040a
        *v2 = (int64_t)((0x1000000 * (int32_t)a3 >> 24) - 55);
        // 0x4b041e
        return (a1 ^ 0xffffffff) + a1 + (int64_t)(0x100000000 * a2 >> 32 > a1) & 0xfffffffa;
    }
    int64_t v3 = 0x100000000 * a2 >> 32;
    if (v1 >= 103) {
        // 0x4b041e
        return (a1 ^ 0xffffffff) + a1 + (int64_t)(v3 > a1) & 0xfffffffa;
    }
    uint64_t v4 = ((0x100000000000000 * a3 >> 24) - 0x5700000000) / 0x100000000; // 0x4b0446
    *v2 = v4;
    return (v4 ^ 0xffffffff) + v4 + (int64_t)(v4 < v3) & 0xffffffff;
}

// Address range: 0x4b8270 - 0x4b82d4
int64_t function_4b8270(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = a3 - a2; // 0x4b827f
    if (result < 2) {
        // 0x4b82d0
        return result;
    }
    // 0x4b8288
    int64_t v1; // 0x4b8270
    int64_t result2 = 256 * v1 & 0xff00 | (int64_t)*(char *)(a2 + 1); // 0x4b8292
    int64_t v2 = a2 + 2; // 0x4b8294
    int64_t * v3 = (int64_t *)a2; // 0x4b829b
    *v3 = v2;
    if (result2 > a3 - v2) {
        // 0x4b82d0
        return result2;
    }
    int64_t v4 = function_4b0fc0(); // 0x4b82a8
    if ((int32_t)v4 != 0) {
        // 0x4b82c0
        return v4 - (int64_t)(int32_t)"hread_once" & 0xffffffff;
    }
    // 0x4b82b1
    *v3 = result2 + v2;
    return 0;
}

// Address range: 0x4b9140 - 0x4b91a3
int64_t function_4b9140(int64_t a1) {
    // 0x4b9140
    if (a1 == 0) {
        // 0x4b91a8
        int64_t result; // 0x4b9140
        return result;
    }
    // 0x4b9149
    function_4ba6e0();
    function_4ba6b0(a1 + 272);
    function_4ba6b0(a1 + 344);
    function_4ba6b0(a1 + 448);
    function_4ba6b0(a1 + (int64_t)&g1);
    function_4b0890(a1 + 248);
    function_4b0890(a1 + 416);
    return function_4b0890(a1 + (int64_t)&g2);
}

// Address range: 0x4b9280 - 0x4b92e5
int64_t function_4b9280(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b9280
    return function_4bbb90();
}

// Address range: 0x4cf8d0 - 0x4cf936
int64_t function_4cf8d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + (int64_t)&g3; // 0x4cf8fe
    int64_t v2 = a1 + (int64_t)&g4; // 0x4cf90e
    int64_t v3 = a1 + (int64_t)&g6; // 0x4cf915
    int64_t v4 = a1; // 0x4cf8dd
    uint32_t v5 = *(int32_t *)v4 ^ (int32_t)a2; // 0x4cf8e7
    int32_t v6 = *(int32_t *)(v1 + (int64_t)(v5 / 0x4000 & 1020)); // 0x4cf8fe
    int32_t v7 = *(int32_t *)(a1 + 72 + (int64_t)(4 * v5 / 0x1000000)); // 0x4cf905
    int32_t v8 = *(int32_t *)(v2 + (int64_t)(v5 / 64 & 1020)); // 0x4cf90e
    int32_t v9 = *(int32_t *)(v3 + (int64_t)(4 * v5 & 1020)); // 0x4cf915
    int32_t v10 = (v7 + v6 ^ v8) + v9 ^ (int32_t)a3; // 0x4cf91d
    while (v4 != a1 + 60) {
        // 0x4cf8e0
        v4 += 4;
        int32_t v11 = v5;
        v5 = *(int32_t *)v4 ^ v10;
        v6 = *(int32_t *)(v1 + (int64_t)(v5 / 0x4000 & 1020));
        v7 = *(int32_t *)(a1 + 72 + (int64_t)(4 * v5 / 0x1000000));
        v8 = *(int32_t *)(v2 + (int64_t)(v5 / 64 & 1020));
        v9 = *(int32_t *)(v3 + (int64_t)(4 * v5 & 1020));
        v10 = (v7 + v6 ^ v8) + v9 ^ v11;
    }
    uint32_t result = *(int32_t *)(a1 + 64) ^ v10; // 0x4cf928
    *(int32_t *)a2 = *(int32_t *)(a1 + 68) ^ v5;
    *(int32_t *)a3 = result;
    return result;
}

// Address range: 0x4eee40 - 0x4eeea2
int64_t __cxa_begin_catch(int64_t a1) {
    int64_t result = function_20650(); // 0x4eee44
    int64_t * v1 = (int64_t *)result; // 0x4eee56
    int64_t v2 = *v1; // 0x4eee56
    int64_t v3 = a1 - 80; // 0x4eee59
    if ((a1 || 1) != 0x474e5543432b2b01) {
        if (v2 != 0) {
            // 0x4eeea2
            return result;
        }
        // 0x4eee68
        *v1 = v3;
        return 0;
    }
    int32_t * v4 = (int32_t *)(a1 - 40); // 0x4eee70
    int32_t v5 = *v4; // 0x4eee70
    *v4 = (v5 < 0 ? -v5 : v5) + 1;
    int32_t * v6 = (int32_t *)(result + 8); // 0x4eee8b
    *v6 = *v6 - 1;
    if (v2 != v3) {
        // 0x4eee94
        *(int64_t *)(a1 - 48) = v2;
        *v1 = v3;
    }
    // 0x4eee9b
    return *(int64_t *)(a1 - 8);
}

// Address range: 0x52b570 - 0x52b5d1
int64_t function_52b570(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x52b57c
    int64_t v2 = *v1; // 0x52b57c
    int64_t v3 = v2 - a2 - a3; // 0x52b589
    int64_t v4 = v2; // 0x52b58c
    int64_t v5 = a1; // 0x52b58c
    if (a3 != 0 && v3 != 0) {
        // 0x52b593
        v5 = a2 + a1;
        int64_t v6 = v5 + a3; // 0x52b597
        if (v3 == 1) {
            unsigned char result = *(char *)v6; // 0x52b5c8
            *(char *)v5 = result;
            return result;
        }
        // 0x52b5a3
        memmove((int64_t *)v5, (int64_t *)v6, (int32_t)v3);
        v4 = *v1;
    }
    int64_t result2 = v4 - a3; // 0x52b5b3
    *v1 = result2;
    *(char *)(v5 + result2) = 0;
    return result2;
}

// Address range: 0x52bb80 - 0x52bbe5
int64_t function_52bb80(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x52bb9c
    int64_t v2 = *v1; // 0x52bb9c
    uint64_t v3 = v2 + 1; // 0x52bba3
    if (v3 > *(int64_t *)(result + 16)) {
        // 0x52bbb2
        function_52b400(result, v2, 0, 0, 1);
    }
    int64_t v4 = v2 + result;
    *(char *)v4 = (char)a2;
    *v1 = v3;
    *(char *)(v4 + 1) = 0;
    return result;
}

// Address range: 0x579f90 - 0x579ff4
int64_t function_579f90(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x579f90
    int64_t * v2 = (int64_t *)v1; // 0x579f90
    int64_t v3 = *v2; // 0x579f90
    if (*(char *)v3 != 95) {
        // 0x579f99
        return 1;
    }
    int64_t v4 = v3 + 1; // 0x579fa0
    *v2 = v4;
    if (*(char *)v4 != 95) {
        // 0x579fb1
        if ((int32_t)function_579a30(v1) >= 0) {
            // 0x579f99
            return 1;
        }
        // 0x579f99
        return 0;
    }
    // 0x579fc8
    *v2 = v3 + 2;
    int64_t result = function_579a30(v1); // 0x579fd3
    int32_t v5 = result; // 0x579fd8
    if (v5 < 0) {
        // 0x579f99
        return result;
    }
    // 0x579fdc
    if (v5 < 10) {
        // 0x579f99
        return 1;
    }
    int64_t v6 = *v2; // 0x579fe1
    if (*(char *)v6 != 95) {
        // 0x579f99
        return 0;
    }
    // 0x579fec
    *v2 = v6 + 1;
    return 0;
}

// Address range: 0x57c9c0 - 0x57ca22
int64_t function_57c9c0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x57c9c9
    int64_t v2 = *v1; // 0x57c9c9
    int64_t v3; // 0x57c9c0
    if (*(char *)v2 == 74) {
        // 0x57ca18
        *v1 = v2 + 1;
        goto lab_0x57c9d6;
    } else {
        // 0x57c9d2
        v3 = 0;
        if ((int32_t)a2 == 0) {
            goto lab_0x57c9e6;
        } else {
            goto lab_0x57c9d6;
        }
    }
  lab_0x57c9d6:;
    int64_t v4 = function_57ba10(a1); // 0x57c9d9
    v3 = v4;
    if (v4 == 0) {
        // 0x57ca28
        return 0;
    }
    goto lab_0x57c9e6;
  lab_0x57c9e6:;
    int64_t v5 = function_57c670(a1); // 0x57c9e9
    if (v5 == 0) {
        // 0x57ca28
        return 0;
    }
    // 0x57c9f3
    return function_5797e0(a1, 41, v3, v5);
}
