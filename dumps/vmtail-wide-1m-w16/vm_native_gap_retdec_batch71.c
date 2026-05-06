/*
 * Targeted RetDec C for native executable gap queue batch 71.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4b38b0-0x4b3910 rank=20 name=fcn.004b38b0 kind=r2_discovered bytes=96 uncovered=96
 *   0x542590-0x5425f0 rank=21 name=fcn.00542590 kind=r2_discovered bytes=96 uncovered=96
 *   0x5425f0-0x542650 rank=22 name=fcn.005425f0 kind=r2_discovered bytes=96 uncovered=96
 *   0x21b06-0x21b65 rank=23 name=fcn.00021b06 kind=r2_discovered bytes=95 uncovered=95
 *   0x27e1a-0x27e79 rank=24 name=fcn.00027e1a kind=r2_discovered bytes=95 uncovered=95
 *   0x6a73c-0x6a79b rank=25 name=fcn.0006a73c kind=r2_discovered bytes=95 uncovered=95
 *   0x4afbb7-0x4afc16 rank=26 name=fcn.004afbb7 kind=r2_discovered bytes=95 uncovered=95
 *   0x579b50-0x579baf rank=27 name=fcn.00579b50 kind=r2_discovered bytes=95 uncovered=95
 *   0x38042-0x380a0 rank=28 name=fcn.00038042 kind=r2_discovered bytes=94 uncovered=94
 *   0x2d44a-0x2d4e6 rank=29 name=fcn.0002d44a kind=r2_discovered bytes=156 uncovered=93
 *   0x4ad1a-0x4ad77 rank=30 name=fcn.0004ad1a kind=r2_discovered bytes=93 uncovered=93
 *   0x4c7e4-0x4c841 rank=31 name=fcn.0004c7e4 kind=r2_discovered bytes=93 uncovered=93
 *   0x5a3ea-0x5a447 rank=32 name=fcn.0005a3ea kind=r2_discovered bytes=93 uncovered=93
 *   0x4ac510-0x4ac56d rank=33 name=fcn.004ac510 kind=r2_discovered bytes=93 uncovered=93
 *   0x4cb4c0-0x4cb51d rank=34 name=fcn.004cb4c0 kind=r2_discovered bytes=93 uncovered=93
 *   0x5656b0-0x56570d rank=35 name=sym.__cxa_allocate_dependent_exception kind=symbol_named bytes=93 uncovered=93
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
int pthread_once(int32_t *once_control, void (*init_routine)(void));
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

int64_t function_1fcc0();
int64_t function_20210();
int64_t function_203b0();
int64_t function_21a2d();
int64_t function_21b06(int64_t a1, int64_t a2);
int64_t function_22188();
int64_t function_2601b();
int64_t function_260ec();
int64_t function_260f8();
int64_t function_27e1a(int64_t a1, uint64_t a2);
int64_t function_2d44a(int64_t a1);
int64_t function_3635f();
int64_t function_37450();
int64_t function_37b38();
int64_t function_37d48();
int64_t function_38042(int64_t a1, int64_t a2);
int64_t function_4ac510(int64_t a1);
int64_t function_4ad0c();
int64_t function_4ad1a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4afbb7(int64_t a1);
int64_t function_4b38b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c7e4(int64_t a1);
int64_t function_4cb4c0(int64_t a1, int64_t a2);
int64_t function_4daf6();
int64_t function_4efd30();
int64_t function_542590(int64_t a1);
int64_t function_565450();
int64_t function_56e840();
int64_t function_56e860();
int64_t function_579b00();
int64_t function_579b50(int64_t a1);
int64_t function_5a3ea(int64_t a1);
int64_t function_5bff9();
int64_t function_67d18();
int64_t function_6a73c(int64_t a1, int64_t a2);
int64_t function_7260a();
int64_t function_7293a();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x21b06 - 0x21b65
int64_t function_21b06(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x21b0c
    int64_t v2 = *v1 - a2; // 0x21b13
    int64_t * v3 = (int64_t *)a1; // 0x21b19
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x21b20
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + 16); // 0x21b28
    *v5 = 0;
    int64_t v6 = 0; // 0x21b33
    if (v2 != 0) {
        // 0x21b35
        v6 = function_4efd30(v2);
    }
    // 0x21b3d
    *v3 = v6;
    *v4 = v6;
    *v5 = v6 + v2;
    int64_t result = function_21a2d(*v1); // 0x21b57
    *v4 = result;
    return result;
}

// Address range: 0x27e1a - 0x27e79
int64_t function_27e1a(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x27e25
    int64_t v2 = *v1 - a1; // 0x27e29
    int64_t result = v2; // 0x27e2f
    if (v2 < a2) {
        int64_t * v3 = (int64_t *)(a1 + 8); // 0x27e31
        int64_t v4 = *v3; // 0x27e31
        int64_t v5 = function_260f8(a2); // 0x27e3e
        function_2601b(a1, v4, v5);
        result = function_260ec(a1);
        *(int64_t *)a1 = v5;
        *v3 = v4 - a1 + v5;
        *v1 = v5 + a2;
    }
    // 0x27e70
    return result;
}

// Address range: 0x2d44a - 0x2d4e6
int64_t function_2d44a(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x2d460
    function_729b6();
    char * v2 = (char *)(a1 + (int64_t)&g5); // 0x2d475
    if (*v2 == 0) {
        // 0x2d47e
        function_7260a(a1 + (int64_t)&g2);
        function_7260a(a1 + (int64_t)&g3);
        function_37450(a1 + (int64_t)&g4);
        function_37b38(a1 + (int64_t)&g1);
        function_22188(function_3635f());
        *v2 = 1;
    }
    // 0x2d4c2
    int64_t v3; // bp-40, 0x2d44a
    function_729ce(&v3);
    int64_t result = 0; // 0x2d4d8
    if (v1 != __readfsqword(40)) {
        // 0x2d4da
        __stack_chk_fail();
        result = (int64_t)&g9;
    }
    // 0x2d4df
    return result;
}

// Address range: 0x38042 - 0x380a0
int64_t function_38042(int64_t a1, int64_t a2) {
    // 0x38042
    *(int64_t *)a1 = a2;
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    *(int64_t *)(a1 + 16) = *(int64_t *)(a2 + 16);
    *(char *)(a1 + 24) = *(char *)(a2 + 24);
    *(int64_t *)(a1 + 32) = *(int64_t *)(a2 + 32);
    *(int64_t *)(a1 + 40) = function_37d48(*(int64_t *)(a2 + 40) - 24);
    *(int64_t *)(a1 + 48) = function_37d48(*(int64_t *)(a2 + 48) - 24);
    *(int64_t *)(a1 + 56) = *(int64_t *)(a2 + 56);
    int64_t result; // 0x38042
    return result;
}

// Address range: 0x4ad1a - 0x4ad77
int64_t function_4ad1a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4ad1e
    if ((char)function_4ad0c() != 0) {
        int64_t v2 = a3; // bp-40, 0x4ad48
        function_4daf6(a1 + 104, 1, &v2, a2 & 0xffffffff);
    }
    int64_t result = 0; // 0x4ad6b
    if (v1 != __readfsqword(40)) {
        // 0x4ad6d
        __stack_chk_fail();
        result = (int64_t)&g9;
    }
    // 0x4ad72
    return result;
}

// Address range: 0x4c7e4 - 0x4c841
int64_t function_4c7e4(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4c7fa
    function_729b6();
    function_67d18(a1 + (int64_t)&g6);
    int64_t v2; // bp-40, 0x4c7e4
    int64_t v3 = function_729ce(&v2); // 0x4c831
    if (v1 != __readfsqword(40)) {
        // 0x4c833
        __stack_chk_fail();
        v3 = (int64_t)&g9;
    }
    // 0x4c838
    return v3 & -256 | 1;
}

// Address range: 0x5a3ea - 0x5a447
int64_t function_5a3ea(int64_t a1) {
    // 0x5a3ea
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)a1 = (int64_t)&g8;
    *(int64_t *)(a1 + 8) = (int64_t)&g8;
    function_7293a(a1 + 32);
    int64_t result = a1 + 80; // 0x5a41a
    *(int32_t *)result = 0;
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 112) = 0;
    *(int64_t *)(a1 + 120) = 0;
    *(int64_t *)(a1 + 96) = result;
    *(int64_t *)(a1 + 104) = result;
    return result;
}

// Address range: 0x6a73c - 0x6a79b
int64_t function_6a73c(int64_t a1, int64_t a2) {
    int64_t result = a1 + 8; // 0x6a740
    int64_t v1 = *(int64_t *)(a1 + 16);
    if (v1 == 0) {
        // 0x6a790
        return result;
    }
    int64_t v2 = v1;
    int64_t v3; // 0x6a73c
    int64_t result2; // 0x6a73c
    while ((char)function_5bff9(v2 + 32, a2) != 0) {
        // 0x6a772
        v3 = *(int64_t *)(v2 + 24);
        result2 = result;
        if (v3 == 0) {
            // break (via goto) -> 0x6a778
            goto lab_0x6a778;
        }
        v2 = v3;
    }
    int64_t v4 = *(int64_t *)(v2 + 16);
    result2 = v2;
    while (v4 != 0) {
        int64_t v5 = v2;
        v2 = v4;
        while ((char)function_5bff9(v2 + 32, a2) != 0) {
            // 0x6a772
            v3 = *(int64_t *)(v2 + 24);
            result2 = v5;
            if (v3 == 0) {
                // break (via goto) -> 0x6a778
                goto lab_0x6a778;
            }
            v2 = v3;
        }
        // 0x6a769
        v4 = *(int64_t *)(v2 + 16);
        result2 = v2;
    }
  lab_0x6a778:
    // 0x6a778
    if (result == result2) {
        // 0x6a790
        return result;
    }
    // 0x6a77d
    if ((char)function_5bff9(a2, result2 + 32) == 0) {
        // 0x6a790
        return result2;
    }
    // 0x6a790
    return result;
}

// Address range: 0x4ac510 - 0x4ac56d
int64_t function_4ac510(int64_t a1) {
    int64_t time_val = time(NULL); // bp-16, 0x4ac524
    struct tm * time_info = gmtime((int32_t *)&time_val); // 0x4ac529
    int64_t result = 0xffffffff; // 0x4ac531
    if (time_info != NULL) {
        int64_t v1 = (int64_t)time_info; // 0x4ac529
        *(int32_t *)a1 = *(int32_t *)(v1 + 20) + (int32_t)&g7;
        *(int32_t *)(a1 + 4) = *(int32_t *)(v1 + 16) + 1;
        *(int32_t *)(a1 + 8) = *(int32_t *)(v1 + 12);
        *(int32_t *)(a1 + 12) = *(int32_t *)(v1 + 8);
        *(int32_t *)(a1 + 16) = *(int32_t *)(v1 + 4);
        *(int32_t *)(a1 + 20) = time_info->e0;
        result = 0;
    }
    // 0x4ac560
    return result;
}

// Address range: 0x4afbb7 - 0x4afc16
int64_t function_4afbb7(int64_t a1) {
    // 0x4afbb7
    int128_t v1; // 0x4afbb7
    int128_t v2 = __asm_pxor(__asm_pshufd(v1, -1), v1); // 0x4afbbc
    int128_t v3 = __asm_pslldq(v1, 4); // 0x4afbc0
    int128_t v4 = __asm_pxor(v2, v3); // 0x4afbc5
    int128_t v5 = __asm_pslldq(v3, 4); // 0x4afbc9
    int128_t v6 = __asm_pxor(__asm_pslldq(v5, 4), __asm_pxor(v4, v5)); // 0x4afbd7
    *(int128_t *)(a1 + 16) = (int128_t)__asm_movdqu(v6);
    int128_t v7 = __asm_pxor(__asm_pshufd(__asm_aeskeygenassist(v6, 0), -86), v1); // 0x4afbee
    int128_t v8 = __asm_pslldq(v1, 4); // 0x4afbf2
    int128_t v9 = __asm_pxor(v7, v8); // 0x4afbf7
    int128_t v10 = __asm_pslldq(v8, 4); // 0x4afbfb
    int64_t v11 = __asm_movdqu(__asm_pxor(__asm_pslldq(v10, 4), __asm_pxor(v9, v10))); // 0x4afc11
    *(int128_t *)(a1 + 32) = (int128_t)v11;
    int64_t result; // 0x4afbb7
    return result;
}

// Address range: 0x4b38b0 - 0x4b3910
int64_t function_4b38b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b38b0
    return 0xfffffffc;
}

// Address range: 0x4cb4c0 - 0x4cb51d
int64_t function_4cb4c0(int64_t a1, int64_t a2) {
    // 0x4cb4c0
    *(int64_t *)a1 = a2;
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    *(int64_t *)(a1 + 16) = *(int64_t *)(a2 + 16);
    *(int64_t *)(a1 + 24) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 32) = *(int64_t *)(a2 + 32);
    *(int64_t *)(a1 + 40) = *(int64_t *)(a2 + 40);
    *(int64_t *)(a1 + 48) = *(int64_t *)(a2 + 48);
    *(int64_t *)(a1 + 56) = *(int64_t *)(a2 + 56);
    *(int64_t *)(a1 + 64) = *(int64_t *)(a2 + 64);
    *(int64_t *)(a1 + 72) = *(int64_t *)(a2 + 72);
    *(int64_t *)(a1 + 80) = *(int64_t *)(a2 + 80);
    uint32_t result = *(int32_t *)(a2 + 88); // 0x4cb516
    *(int32_t *)(a1 + 88) = result;
    return result;
}

// Address range: 0x542590 - 0x542650
int64_t function_542590(int64_t a1) {
    int64_t v1 = function_20210(16); // 0x54259e
    function_56e840(v1, (int64_t)gettext((char *)a1));
    int64_t v2 = function_203b0(v1, 0x8476d0, 0x566c30); // 0x5425ca
    function_1fcc0(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v2);
    int64_t v3 = function_20210(16); // 0x5425fe
    function_56e860(v3, (int64_t)gettext((char *)v2));
    int64_t v4 = function_203b0(v3, 0x8476e8, 0x566c70); // 0x54262a
    function_1fcc0(v3);
    _Unwind_Resume((struct _Unwind_Exception *)v4);
    return (int64_t)&g9;
}

// Address range: 0x5656b0 - 0x56570d
int64_t __cxa_allocate_dependent_exception(void) {
    int64_t * mem = malloc(112); // 0x5656b9
    if (mem == NULL) {
        // 0x565700
        return function_565450(112);
    }
    int64_t result = (int64_t)mem; // 0x5656b9
    *mem = 0;
    *(int64_t *)(result + 104) = 0;
    int64_t v1 = result + 8 & -8; // 0x5656de
    __asm_rep_stosq_memset((char *)v1, 0, (result + 112 - v1) / 8 % 0x20000000);
    return result;
}

// Address range: 0x579b50 - 0x579ba9
int64_t function_579b50(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x579b50
    int64_t result = *v1; // 0x579b50
    if (*(char *)result != 84) {
        // 0x579bb0
        return result;
    }
    // 0x579b59
    *v1 = result + 1;
    int64_t result2 = function_579b00(); // 0x579b64
    if ((int32_t)result2 < 0) {
        // 0x579bb0
        return result2;
    }
    int32_t * v2 = (int32_t *)(a1 + 64); // 0x579b6d
    *v2 = *v2 + 1;
    int32_t * v3 = (int32_t *)(a1 + 40); // 0x579b72
    int32_t v4 = *v3; // 0x579b72
    if (v4 >= *(int32_t *)(a1 + 44)) {
        // 0x579bb0
        return result2;
    }
    int64_t v5 = *(int64_t *)(a1 + 32); // 0x579b88
    int64_t result3 = v5 + 8 * ((0x100000000 * (int64_t)v4 >> 31) + (int64_t)v4); // 0x579b8c
    *(int32_t *)(result3 + 4) = 0;
    *v3 = v4 + 1;
    *(int64_t *)(result3 + 8) = 0x100000000 * result2 >> 32;
    *(int32_t *)result3 = 5;
    return result3;
}
