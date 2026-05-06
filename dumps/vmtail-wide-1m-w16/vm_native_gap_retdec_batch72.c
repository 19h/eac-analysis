/*
 * Targeted RetDec C for native executable gap queue batch 72.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5797e0-0x57983d rank=20 name=fcn.005797e0 kind=r2_discovered bytes=93 uncovered=93
 *   0x579850-0x5798ad rank=21 name=fcn.00579850 kind=r2_discovered bytes=93 uncovered=93
 *   0x560a6-0x56102 rank=22 name=fcn.000560a6 kind=r2_discovered bytes=92 uncovered=92
 *   0x24dc60-0x24dcbc rank=23 name=fcn.0024dc60 kind=r2_discovered bytes=92 uncovered=92
 *   0x4bbb90-0x4bbbec rank=24 name=fcn.004bbb90 kind=r2_discovered bytes=92 uncovered=92
 *   0x4f1ac0-0x4f1b1c rank=25 name=fcn.004f1ac0 kind=r2_discovered bytes=92 uncovered=92
 *   0x4f3110-0x4f316c rank=26 name=fcn.004f3110 kind=r2_discovered bytes=92 uncovered=92
 *   0x4f31a0-0x4f31fc rank=27 name=fcn.004f31a0 kind=r2_discovered bytes=92 uncovered=92
 *   0x4fd0d0-0x4fd12c rank=28 name=fcn.004fd0d0 kind=r2_discovered bytes=92 uncovered=92
 *   0x37fe6-0x38041 rank=29 name=fcn.00037fe6 kind=r2_discovered bytes=91 uncovered=91
 *   0x3af2e-0x3af89 rank=30 name=fcn.0003af2e kind=r2_discovered bytes=91 uncovered=91
 *   0x4ea10-0x4ea6b rank=31 name=fcn.0004ea10 kind=r2_discovered bytes=91 uncovered=91
 *   0x68ba4-0x68bff rank=32 name=fcn.00068ba4 kind=r2_discovered bytes=91 uncovered=91
 *   0x6b0ae-0x6b109 rank=33 name=fcn.0006b0ae kind=r2_discovered bytes=91 uncovered=91
 *   0x4b4f80-0x4b4fdb rank=34 name=fcn.004b4f80 kind=r2_discovered bytes=91 uncovered=91
 *   0x565610-0x56566b rank=35 name=sym.__cxa_allocate_exception kind=symbol_named bytes=91 uncovered=91
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
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_once(int32_t *once_control, int64_t init_routine);
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
struct tm *gmtime_r(const time_t *timep, struct tm *result);
struct _Unwind_Exception;
int64_t _Unwind_DeleteException(int64_t exception);
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_1ff50();
int64_t function_20550();
int64_t function_24dc60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_37fe6(int64_t result, int64_t a2);
int64_t function_380a0();
int64_t function_3af2e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b4f80(int64_t result2, int64_t a2, uint64_t a3);
int64_t function_4ba4e0();
int64_t function_4bbb90(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4ea10(int64_t a1, int64_t str2, int64_t a3);
int64_t function_4eeb40();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f1ac0(void);
int64_t function_4f3110(int64_t a1);
int64_t function_4f31a0(int64_t a1);
int64_t function_4fcce0();
int64_t function_4fd0d0(int64_t a1, int64_t a2);
int64_t function_560a6(int64_t a1, int64_t a2);
int64_t function_565450();
int64_t function_565970();
int64_t function_568110();
int64_t function_5797e0(int64_t a1, int64_t a2);
int64_t function_579800(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_579850(int64_t a1, int64_t result);
int64_t function_68ba4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6b0ae(int64_t a1, int64_t a2);
int64_t function_729b6();
int64_t function_729ce();
int64_t function_c9849();

// Address range: 0x37fe6 - 0x38041
int64_t function_37fe6(int64_t result, int64_t a2) {
    // 0x37fe6
    *(int64_t *)result = *(int64_t *)a2;
    *(int64_t *)(result + 8) = *(int64_t *)(a2 + 8);
    *(int64_t *)(result + 16) = *(int64_t *)(a2 + 16);
    *(char *)(result + 24) = *(char *)(a2 + 24);
    *(int64_t *)(result + 32) = *(int64_t *)(a2 + 32);
    function_380a0(result + 40, a2 + 40);
    function_380a0(result + 48, a2 + 48);
    *(int64_t *)(result + 56) = *(int64_t *)(a2 + 56);
    return result;
}

// Address range: 0x3af2e - 0x3af89
int64_t function_3af2e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)a1; // 0x3af3f
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x3af46
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x3af4e
    *v3 = 0;
    int64_t v4; // 0x3af2e
    if (a2 == 0) {
        // 0x3af63
        *v1 = 0;
        *v2 = 0;
        *v3 = 0;
        v4 = 0;
    } else {
        int64_t v5 = function_4efd30(a2); // 0x3af5b
        int64_t v6 = v5 + a2; // 0x3af63
        *v1 = v5;
        *v2 = v5;
        *v3 = v6;
        __asm_rep_stosb_memset((char *)v5, 0, a2);
        v4 = v6;
    }
    // 0x3af81
    *v2 = v4;
    int64_t result; // 0x3af2e
    return result;
}

// Address range: 0x4ea10 - 0x4ea6b
int64_t function_4ea10(int64_t a1, int64_t str2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x4ea1f
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x4ea23
    if (v1 == v2) {
        // 0x4ea63
        return 0;
    }
    int64_t v3 = v2;
    int64_t str = *(int64_t *)(v3 + 8); // 0x4ea2c
    int64_t n = *(int64_t *)(str - 24); // 0x4ea34
    int64_t v4; // 0x4ea10
    int64_t v5 = v4; // 0x4ea3c
    int64_t v6; // 0x4ea10
    int32_t memcmp_rc; // 0x4ea52
    if (n == *(int64_t *)(str2 - 24)) {
        // 0x4ea3e
        v6 = v4;
        if (n == 0) {
            goto lab_0x4ea43_2;
        }
        // 0x4ea52
        memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
        v6 = 0;
        v5 = memcmp_rc;
        if (memcmp_rc == 0) {
            goto lab_0x4ea43_2;
        }
    }
    int64_t v7 = v3 + 16; // 0x4ea5b
    int64_t result = 0; // 0x4ea2a
    while (v1 != v7) {
        int64_t v8 = v5;
        v3 = v7;
        str = *(int64_t *)(v3 + 8);
        n = *(int64_t *)(str - 24);
        v5 = v8;
        if (n == *(int64_t *)(str2 - 24)) {
            // 0x4ea3e
            v6 = v8;
            if (n == 0) {
                goto lab_0x4ea43_2;
            }
            // 0x4ea52
            memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
            v6 = 0;
            v5 = memcmp_rc;
            if (memcmp_rc == 0) {
                goto lab_0x4ea43_2;
            }
        }
        // 0x4ea5b
        v7 = v3 + 16;
        result = 0;
    }
    // 0x4ea63
    return result;
  lab_0x4ea43_2:;
    char v9 = a3; // 0x4ea43
    int64_t v10 = v6 & -256; // 0x4ea46
    result = v10 | 1;
    if (v9 == 0) {
        return result;
    } else {
        // 0x4ea4a
        result = v10 | (int64_t)(*(char *)v3 == v9);
        return result;
    }
}

// Address range: 0x560a6 - 0x56102
int64_t function_560a6(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + (int64_t)&g3); // 0x560ad
    uint64_t v2 = *(int64_t *)(a1 + (int64_t)&g1); // 0x560b4
    int64_t * v3 = (int64_t *)(a1 + (int64_t)&g2); // 0x560bb
    int64_t v4 = *v3; // 0x560bb
    if (v4 != 0) {
        if ((char)a2 == 0) {
            // 0x560fb
            int64_t v5; // 0x560a6
            return v5 & -256 | 1;
        }
        // 0x560cc
        function_4eeb40(v4);
        *v3 = 0;
    }
    int64_t v6 = (v1 > v2 ? v2 : v1) & 0xffffffff; // 0x560e3
    int64_t v7 = function_4eec00(v6); // 0x560e8
    *(int64_t *)(a1 + 544) = v6;
    *v3 = v7;
    // 0x560fb
    return v7 & -256 | 1;
}

// Address range: 0x68ba4 - 0x68bff
int64_t function_68ba4(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)a1; // 0x68bb5
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x68bbc
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x68bc4
    *v3 = 0;
    int64_t v4; // 0x68ba4
    if (a2 == 0) {
        // 0x68bd9
        *v1 = 0;
        *v2 = 0;
        *v3 = 0;
        v4 = 0;
    } else {
        int64_t v5 = function_4efd30(a2); // 0x68bd1
        int64_t v6 = v5 + a2; // 0x68bd9
        *v1 = v5;
        *v2 = v5;
        *v3 = v6;
        __asm_rep_stosb_memset((char *)v5, 0, a2);
        v4 = v6;
    }
    // 0x68bf7
    *v2 = v4;
    int64_t result; // 0x68ba4
    return result;
}

// Address range: 0x6b0ae - 0x6b109
int64_t function_6b0ae(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x6b0c6
    function_729b6();
    *(int16_t *)(a1 + 248) = (int16_t)a2;
    int64_t v2; // bp-40, 0x6b0ae
    function_729ce(&v2);
    int64_t result = 0; // 0x6b0f9
    if (v1 != __readfsqword(40)) {
        // 0x6b0fb
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x6b100
    return result;
}

// Address range: 0x24dc60 - 0x24dcbc
int64_t function_24dc60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x24dc60
    return function_c9849();
}

// Address range: 0x4b4f80 - 0x4b4fd5
int64_t function_4b4f80(int64_t result2, int64_t a2, uint64_t a3) {
    if (result2 == 0) {
        // 0x4b4fd8
        int64_t result; // 0x4b4f80
        return result;
    }
    // 0x4b4f8e
    if (a2 != 0 != a3 < 17) {
        // 0x4b4fd8
        return result2;
    }
    // 0x4b4fa1
    if (*(char *)(result2 + 28) % 2 != 0) {
        // 0x4b4faf
        memcpy((int64_t *)(result2 + 56), (int64_t *)a2, (int32_t)a3);
        *(int64_t *)(result2 + 72) = a3;
        return 0;
    }
    int64_t v1 = (int64_t)*(int32_t *)(result2 + 24); // 0x4b4fa7
    if (v1 > a3) {
        // 0x4b4fd8
        return result2;
    }
    // 0x4b4faf
    memcpy((int64_t *)(result2 + 56), (int64_t *)a2, (int32_t)v1);
    *(int64_t *)(result2 + 72) = v1;
    return 0;
}

// Address range: 0x4bbb90 - 0x4bbbe6
int64_t function_4bbb90(int64_t a1, int64_t a2, uint64_t a3) {
    if (a3 < 3) {
        // 0x4bbbe0
        return 0xffffb080;
    }
    int64_t v1 = a2 + 1; // 0x4bbb9c
    int64_t * v2 = (int64_t *)a2; // 0x4bbba0
    *v2 = v1;
    if ((char)a2 != 3) {
        // 0x4bbbe0
        return 0xffffb080;
    }
    int64_t v3 = a2 + 2; // 0x4bbba8
    *v2 = v3;
    unsigned char v4 = *(char *)v3; // 0x4bbbb7
    *v2 = a2 + 3;
    return function_4ba4e0(256 * (int64_t)*(char *)v1 | (int64_t)v4);
}

// Address range: 0x4f1ac0 - 0x4f1b1c
int64_t function_4f1ac0(void) {
    // 0x4f1ac0
    int128_t v1; // 0x4f1ac0
    int128_t v2 = v1;
    if (*(char *)&g7 != 0) {
        // 0x4f1acb
        return (int64_t)&g8;
    }
    // 0x4f1ad8
    if ((int32_t)function_20550(&g7) != 0) {
        int128_t v3 = __asm_pxor(v2, v2); // 0x4f1aec
        g10 = 0;
        *(int128_t *)&g8 = (int128_t)__asm_movaps(v3);
        *(int128_t *)&g9 = (int128_t)__asm_movaps(v3);
        function_1ff50();
    }
    // 0x4f1acb
    return (int64_t)&g8;
}

// Address range: 0x4f3110 - 0x4f316c
// From class:    std::__moneypunct_cache<wchar_t, true>
// Type:          constructor
int64_t function_4f3110(int64_t a1) {
    // 0x4f3110
    *(int64_t *)a1 = (int64_t)&g5;
    if (*(char *)(a1 + 152) == 0) {
        // 0x4f3163
        return function_565970(a1);
    }
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x4f312b
    if (v1 != 0) {
        // 0x4f3134
        function_4eeb40(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 48); // 0x4f3139
    if (v2 != 0) {
        // 0x4f3142
        function_4eeb40(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 64); // 0x4f3147
    if (v3 != 0) {
        // 0x4f3150
        function_4eeb40(v3);
    }
    int64_t v4 = *(int64_t *)(a1 + 80); // 0x4f3155
    if (v4 != 0) {
        // 0x4f315e
        function_4eeb40(v4);
    }
    // 0x4f3163
    return function_565970(a1);
}

// Address range: 0x4f31a0 - 0x4f31fc
// From class:    std::__moneypunct_cache<wchar_t, false>
// Type:          constructor
int64_t function_4f31a0(int64_t a1) {
    // 0x4f31a0
    *(int64_t *)a1 = (int64_t)&g6;
    if (*(char *)(a1 + 152) == 0) {
        // 0x4f31f3
        return function_565970(a1);
    }
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x4f31bb
    if (v1 != 0) {
        // 0x4f31c4
        function_4eeb40(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 48); // 0x4f31c9
    if (v2 != 0) {
        // 0x4f31d2
        function_4eeb40(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 64); // 0x4f31d7
    if (v3 != 0) {
        // 0x4f31e0
        function_4eeb40(v3);
    }
    int64_t v4 = *(int64_t *)(a1 + 80); // 0x4f31e5
    if (v4 != 0) {
        // 0x4f31ee
        function_4eeb40(v4);
    }
    // 0x4f31f3
    return function_565970(a1);
}

// Address range: 0x4fd0d0 - 0x4fd12c
int64_t function_4fd0d0(int64_t a1, int64_t a2) {
    // 0x4fd0d0
    function_568110();
    function_4fcce0(a1, a1 + 208);
    *(int64_t *)(a1 + 232) = a2;
    *(int32_t *)(a1 + 224) = 0;
    *(char *)(a1 + 228) = 0;
    *(int64_t *)(a1 + 216) = 0;
    *(int32_t *)(a1 + 28) = 0;
    *(int32_t *)(a1 + 32) = (int32_t)(a2 == 0);
    return a2 == 0;
}

// Address range: 0x565610 - 0x56566b
int64_t __cxa_allocate_exception(int64_t a1) {
    int64_t size = a1 + 128; // 0x565611
    int64_t * mem = malloc((int32_t)size); // 0x56561b
    if (mem == NULL) {
        // 0x565660
        return function_565450(size);
    }
    int64_t v1 = (int64_t)mem; // 0x56561b
    *mem = 0;
    *(int64_t *)(v1 + 120) = 0;
    int64_t result = v1 + 128;
    int64_t v2 = v1 + 8 & -8; // 0x56563f
    __asm_rep_stosq_memset((char *)v2, 0, (result - v2) / 8 % 0x20000000);
    return result;
}

// Address range: 0x5797e0 - 0x5797f8
int64_t function_5797e0(int64_t a1, int64_t a2) {
    // 0x5797e0
    if ((int32_t)a2 >= 80) {
        // 0x57984a
        int64_t result; // 0x5797e0
        return result;
    }
    int32_t v1 = *(int32_t *)((4 * a2 & 0x3fffffffc) + (int64_t)&g4); // 0x5797ef
    return (int64_t)v1 + (int64_t)&g4;
}

// Address range: 0x579800 - 0x579838
int64_t function_579800(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 40); // 0x579805
    int32_t v2 = *v1; // 0x579805
    int64_t result = 24 * (int64_t)v2 + *(int64_t *)(a1 + 32); // 0x57981e
    *(int32_t *)(result + 4) = 0;
    *v1 = v2 + 1;
    *(int32_t *)result = (int32_t)a2;
    *(int64_t *)(result + 8) = a3;
    *(int64_t *)(result + 16) = a4;
    return result;
}

// Address range: 0x579850 - 0x5798ad
int64_t function_579850(int64_t a1, int64_t result) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x579850
    int64_t v2 = *v1; // 0x579850
    switch (*(char *)v2) {
        case 82: {
            // break -> 0x579867
            break;
        }
        case 79: {
            int32_t * v3 = (int32_t *)(a1 + 80); // 0x579874
            *v1 = v2 + 1;
            *v3 = *v3 + 3;
            return function_5797e0(a1, 32);
        }
    }
    // 0x579867
    return result;
}
