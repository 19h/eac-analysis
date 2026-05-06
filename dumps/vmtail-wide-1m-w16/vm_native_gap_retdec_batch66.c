/*
 * Targeted RetDec C for native executable gap queue batch 66.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4d688-0x4d6f5 rank=18 name=fcn.0004d688 kind=r2_discovered bytes=109 uncovered=109
 *   0x4ccce0-0x4ccd4d rank=19 name=fcn.004ccce0 kind=r2_discovered bytes=109 uncovered=109
 *   0x4f15b0-0x4f161d rank=20 name=fcn.004f15b0 kind=r2_discovered bytes=109 uncovered=109
 *   0x579a30-0x579a9d rank=21 name=fcn.00579a30 kind=r2_discovered bytes=109 uncovered=109
 *   0x287bc-0x28828 rank=22 name=fcn.000287bc kind=r2_discovered bytes=108 uncovered=108
 *   0x4da06-0x4da72 rank=23 name=fcn.0004da06 kind=r2_discovered bytes=108 uncovered=108
 *   0x48c8fe-0x48c96a rank=24 name=fcn.0048c8fe kind=r2_discovered bytes=108 uncovered=108
 *   0x4d2a20-0x4d2a8c rank=25 name=fcn.004d2a20 kind=r2_discovered bytes=108 uncovered=108
 *   0x4f1630-0x4f169c rank=26 name=fcn.004f1630 kind=r2_discovered bytes=108 uncovered=108
 *   0x564ff0-0x56505c rank=27 name=method.std::__iosfail_type_info.virtual_64 kind=native_discovered bytes=108 uncovered=108
 *   0x57a0c0-0x57a12c rank=28 name=fcn.0057a0c0 kind=r2_discovered bytes=108 uncovered=108
 *   0x57a230-0x57a29c rank=29 name=fcn.0057a230 kind=r2_discovered bytes=108 uncovered=108
 *   0x5b444-0x5b4af rank=30 name=fcn.0005b444 kind=r2_discovered bytes=107 uncovered=107
 *   0x71842-0x718ad rank=31 name=fcn.00071842 kind=r2_discovered bytes=107 uncovered=107
 *   0x76ede-0x76f49 rank=32 name=fcn.00076ede kind=r2_discovered bytes=107 uncovered=107
 *   0x48e6b8-0x48e723 rank=33 name=fcn.0048e6b8 kind=r2_discovered bytes=107 uncovered=107
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
extern int g9;
extern int g10;
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
int64_t unknown_ffffffffd3dfe90d(void);
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
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_once(int32_t *once_control, int64_t init_routine);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int sem_init(int64_t *sem, int pshared, unsigned int value);
int fcntl(int fd, int cmd, ...);
int writev(int fd, const struct iovec *iov, int iovcnt);
int epoll_create(int size);
int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event);
int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);
int close(int fd);
int ioctl(int fd, unsigned long request, ...);
int poll(struct pollfd *fds, unsigned long nfds, int timeout);
int gettimeofday(struct timeval *tv, void *tz);
int64_t sysconf(int name);
int64_t syscall(int64_t number, ...);
int mprotect(void *addr, size_t len, int prot);
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

int64_t function_2562c();
int64_t function_25a28();
int64_t function_283c8();
int64_t function_287bc(int64_t a1);
int64_t function_35fcc();
int64_t function_4336c();
int64_t function_48c8fe(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48d122();
int64_t function_48e6b8(int64_t a1, int64_t a2);
int64_t function_4b0ac0();
int64_t function_4ba7d0();
int64_t function_4ba830();
int64_t function_4bcaa();
int64_t function_4ccce0(int64_t a1, int64_t a2);
int64_t function_4d2a10();
int64_t function_4d2a20(int64_t a1, int64_t a2);
int64_t function_4d688(int64_t a1);
int64_t function_4da06(int64_t a1);
int64_t function_4f1440();
int64_t function_4f15a0();
int64_t function_4f15b0(int64_t result2, int64_t stream);
int64_t function_4f1630(int64_t result3, int64_t a2, int64_t a3, int64_t a4);
int64_t function_542470();
int64_t function_564ff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_579a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_57a0c0(int64_t a1, int64_t a2);
int64_t function_57a230(int64_t a1, int64_t a2);
int64_t function_5b2e6();
int64_t function_5b444(int64_t a1, int64_t a2);
int64_t function_67df6();
int64_t function_6b6a6();
int64_t function_71754();
int64_t function_71842(int64_t a1, int64_t a2);
int64_t function_72496();
int64_t function_7260a();
int64_t function_72994();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_76e68();
int64_t function_76ede(int64_t a1, int64_t a2);

// Address range: 0x287bc - 0x28828
int64_t function_287bc(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x287bc
    int32_t v2 = *v1; // 0x287bc
    if (v2 >= 0) {
        // 0x287c3
        if ((int64_t)g7 != a1) {
            // 0x287cc
            *v1 = v2 + 1;
        }
        // 0x287e2
        return a1 + 24;
    }
    int64_t v3 = function_283c8(a1, *(int64_t *)(a1 + 8), v2); // 0x287f5
    int64_t result = 0; // 0x28807
    if (a1 != 0) {
        // 0x28809
        function_25a28(result, a1 + 24, a1);
    }
    // 0x28815
    function_2562c(v3, result);
    return result;
}

// Address range: 0x4d688 - 0x4d6f5
int64_t function_4d688(int64_t a1) {
    int64_t v1 = a1 + (int64_t)&g1; // 0x4d691
    *(int64_t *)a1 = (int64_t)&g6;
    function_67df6(v1);
    int64_t * v2 = (int64_t *)(a1 + (int64_t)&g3); // 0x4d6aa
    int64_t v3 = *v2; // 0x4d6aa
    if (v3 != 0) {
        // 0x4d6b6
        function_7260a(v3);
        function_72496(*v2, a1);
    }
    // 0x4d6ca
    function_35fcc(a1 + (int64_t)&g4);
    function_72994(a1 + (int64_t)&g2);
    function_6b6a6(v1);
    return function_4bcaa(a1);
}

// Address range: 0x4da06 - 0x4da72
int64_t function_4da06(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 48); // 0x4da0f
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x4da17
    int64_t v3 = 0x10000 * *v1 + *v2; // 0x4da17
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x4da1b
    int64_t result; // 0x4da06
    if (*v4 != 1) {
        // 0x4da6e
        return result;
    }
    int64_t v5 = *(int64_t *)(v3 + 40); // 0x4da26
    int64_t v6 = *(int64_t *)(v3 + 24); // 0x4da2a
    int64_t v7 = *(int64_t *)(v3 + 16); // 0x4da2e
    int64_t v8 = *(int64_t *)(a1 + 88); // 0x4da32
    int64_t v9 = function_4336c(v7, v6, *(int64_t *)(v3 + 32) + 4, v5, v8); // 0x4da3a
    *v4 = 2;
    *(int64_t *)(v3 + 48) = v9;
    uint64_t v10 = *v1 + 1; // 0x4da59
    int64_t v11 = v10 < 256 ? v10 : 0;
    *v1 = v11;
    int64_t v12 = 0x10000 * v11 + *v2; // 0x4da17
    int64_t * v13 = (int64_t *)(v12 + 8); // 0x4da1b
    while (*v13 == 1) {
        // 0x4da22
        v5 = *(int64_t *)(v12 + 40);
        v6 = *(int64_t *)(v12 + 24);
        v7 = *(int64_t *)(v12 + 16);
        v8 = *(int64_t *)(a1 + 88);
        v9 = function_4336c(v7, v6, *(int64_t *)(v12 + 32) + 4, v5, v8);
        *v13 = 2;
        *(int64_t *)(v12 + 48) = v9;
        v10 = *v1 + 1;
        v11 = v10 < 256 ? v10 : 0;
        *v1 = v11;
        v12 = 0x10000 * v11 + *v2;
        v13 = (int64_t *)(v12 + 8);
    }
    // 0x4da6e
    return result;
}

// Address range: 0x5b444 - 0x5b4af
int64_t function_5b444(int64_t a1, int64_t a2) {
    // 0x5b444
    if (a2 == a1) {
        // 0x5b4a4
        return (int64_t)&g9;
    }
    int64_t result; // 0x5b444
    if (a1 == 0) {
        // 0x5b48d
        function_542470("basic_string::_S_construct null not valid");
        result = (int64_t)&g9;
    } else {
        int64_t v1 = a2 - a1; // 0x5b45e
        int64_t v2 = function_5b2e6(v1, 0); // 0x5b466
        int64_t v3 = v2 + 24; // 0x5b46b
        function_25a28(v3, a1, v1);
        function_2562c(v2, v1);
        result = v3;
    }
    // 0x5b4a4
    return result;
}

// Address range: 0x71842 - 0x718ad
int64_t function_71842(int64_t a1, int64_t a2) {
    // 0x71842
    if (a2 == a1) {
        // 0x718a2
        return (int64_t)&g9;
    }
    int64_t result; // 0x71842
    if (a1 == 0) {
        // 0x7188b
        function_542470("basic_string::_S_construct null not valid");
        result = (int64_t)&g9;
    } else {
        int64_t v1 = a2 - a1; // 0x7185c
        int64_t v2 = function_71754(v1, 0); // 0x71864
        int64_t v3 = v2 + 24; // 0x71869
        function_25a28(v3, a1, v1);
        function_2562c(v2, v1);
        result = v3;
    }
    // 0x718a2
    return result;
}

// Address range: 0x76ede - 0x76f49
int64_t function_76ede(int64_t a1, int64_t a2) {
    // 0x76ede
    if (a2 == a1) {
        // 0x76f3e
        return (int64_t)&g9;
    }
    int64_t result; // 0x76ede
    if (a1 == 0) {
        // 0x76f27
        function_542470("basic_string::_S_construct null not valid");
        result = (int64_t)&g9;
    } else {
        int64_t v1 = a2 - a1; // 0x76ef8
        int64_t v2 = function_76e68(v1, 0); // 0x76f00
        int64_t v3 = v2 + 24; // 0x76f05
        function_25a28(v3, a1, v1);
        function_2562c(v2, v1);
        result = v3;
    }
    // 0x76f3e
    return result;
}

// Address range: 0x48c8fe - 0x48c96a
int64_t function_48c8fe(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x48c91b
    function_729b6();
    int64_t v2; // bp-56, 0x48c8fe
    function_729ce(&v2);
    int64_t result = 0; // 0x48c958
    if (v1 != __readfsqword(40)) {
        // 0x48c95a
        __stack_chk_fail();
        result = (int64_t)&g10;
    }
    // 0x48c95f
    return result;
}

// Address range: 0x48e6b8 - 0x48e723
int64_t function_48e6b8(int64_t a1, int64_t a2) {
    // 0x48e6b8
    if (a2 == a1) {
        // 0x48e718
        return (int64_t)&g9;
    }
    int64_t result; // 0x48e6b8
    if (a1 == 0) {
        // 0x48e701
        function_542470("basic_string::_S_construct null not valid");
        result = (int64_t)&g9;
    } else {
        int64_t v1 = a2 - a1; // 0x48e6d2
        int64_t v2 = function_48d122(v1, 0); // 0x48e6da
        int64_t v3 = v2 + 24; // 0x48e6df
        function_25a28(v3, a1, v1);
        function_2562c(v2, v1);
        result = v3;
    }
    // 0x48e718
    return result;
}

// Address range: 0x4ccce0 - 0x4ccd4d
int64_t function_4ccce0(int64_t a1, int64_t a2) {
    // 0x4ccce0
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
    *(int64_t *)(a1 + 88) = *(int64_t *)(a2 + 88);
    *(int64_t *)(a1 + 96) = *(int64_t *)(a2 + 96);
    uint32_t result = *(int32_t *)(a2 + 104); // 0x4ccd46
    *(int32_t *)(a1 + 104) = result;
    return result;
}

// Address range: 0x4d2a20 - 0x4d2a8b
int64_t function_4d2a20(int64_t a1, int64_t a2) {
    int64_t v1 = function_4ba830(); // 0x4d2a34
    if ((int32_t)v1 != 0) {
        // 0x4d2a54
        function_4d2a10(a1);
        return v1 & 0xffffffff;
    }
    int64_t v2 = function_4b0ac0(a1 + 248, a2 + 248); // 0x4d2a4b
    if ((int32_t)v2 == 0) {
        // 0x4d2a78
        return function_4ba7d0(a1 + 272, a2 + 272);
    }
    // 0x4d2a54
    function_4d2a10(a1);
    return v2 & 0xffffffff;
}

// Address range: 0x4f15b0 - 0x4f161b
int64_t function_4f15b0(int64_t result2, int64_t stream) {
    int64_t v1 = function_4f15a0(result2); // 0x4f15c0
    int64_t result = v1; // 0x4f15c7
    if (stream == 0 || (char)v1 == 1) {
      lab_0x4f161b:
        // 0x4f161b
        return result;
    }
    int32_t * v2 = __errno_location(); // 0x4f15ce
    int32_t v3 = *v2; // 0x4f15d3
    *v2 = 0;
    int32_t fflush_rc = fflush((struct _IO_FILE *)stream); // 0x4f15f0
    while (fflush_rc != 0) {
        // 0x4f15e8
        if (*v2 != 4) {
            // 0x4f1618
            *v2 = v3;
            result = fflush_rc;
            return result;
        }
        fflush_rc = fflush((struct _IO_FILE *)stream);
    }
    // 0x4f15f9
    *v2 = v3;
    *(int64_t *)result2 = stream;
    *(char *)(result2 + 8) = 0;
    return result2;
}

// Address range: 0x4f1630 - 0x4f1699
int64_t function_4f1630(int64_t result3, int64_t a2, int64_t a3, int64_t a4) {
    int64_t mode = function_4f1440(a3 & 0xffffffff); // 0x4f1639
    if (mode == 0) {
        // 0x4f1671
        return 0;
    }
    int64_t result = function_4f15a0(result3); // 0x4f164c
    if ((char)result != 0) {
        // 0x4f1671
        return result;
    }
    int32_t fd = a2; // 0x4f1658
    struct _IO_FILE * stream = fdopen(fd, (char *)mode); // 0x4f165b
    int64_t result2 = (int64_t)stream; // 0x4f165b
    *(int64_t *)result3 = result2;
    if (stream == NULL) {
        // 0x4f1671
        return result2;
    }
    // 0x4f1668
    *(char *)(result3 + 8) = 1;
    if (fd != 0) {
        // 0x4f1671
        return result3;
    }
    // 0x4f1680
    setvbuf(stream, NULL, 2, 0);
    return result3;
}

// Address range: 0x564ff0 - 0x565059
int64_t function_564ff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if (a5 != a3) {
        // 0x565001
        return *(int64_t *)(*(int64_t *)*(int64_t *)(a1 + 16) + 64);
    }
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x565020
    int64_t str2 = *(int64_t *)(a4 + 8); // 0x565024
    if (v1 == str2) {
        // 0x565059
        int64_t result; // 0x564ff0
        return result;
    }
    char * str = (char *)v1; // 0x56502d
    if (*str == 42) {
        // 0x565001
        return *(int64_t *)(*(int64_t *)*(int64_t *)(a1 + 16) + 64);
    }
    int32_t strcmp_rc = strcmp(str, (char *)str2); // 0x565041
    if (strcmp_rc != 0) {
        // 0x565001
        return *(int64_t *)(*(int64_t *)*(int64_t *)(a1 + 16) + 64);
    }
    // 0x565059
    return strcmp_rc;
}

// Address range: 0x579a30 - 0x579a9c
int64_t function_579a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if ((char)a1 == 110) {
        int64_t result = a1 + 1; // 0x579a80
        *(int64_t *)a1 = result;
        return result;
    }
    int64_t v1 = 0x100000000000000 * a1 >> 56; // 0x579a33
    int64_t v2 = v1 + 0xffffffd0; // 0x579a3b
    if ((char)v2 >= 10) {
        // 0x579a6e
        return v2 & 0xffffffff;
    }
    int64_t result2 = 0; // 0x579a61
    int64_t v3 = a1;
    v3++;
    *(int64_t *)a1 = v3;
    char v4 = *(char *)v3; // 0x579a5d
    result2 = 10 * result2 + 0xffffffd0 + v1 & 0xffffffff;
    int64_t v5 = v4; // 0x579a6c
    while (v4 < 58) {
        // 0x579a50
        v3++;
        *(int64_t *)a1 = v3;
        v4 = *(char *)v3;
        result2 = 10 * result2 + 0xffffffd0 + v5 & 0xffffffff;
        v5 = v4;
    }
    // 0x579a6e
    return result2;
}

// Address range: 0x57a0c0 - 0x57a117
int64_t function_57a0c0(int64_t a1, int64_t a2) {
    // 0x57a0c0
    int64_t result; // 0x57a0c0
    if (a2 == 0) {
        // 0x57a112
        return result;
    }
    int64_t v1 = a2; // 0x57a0c3
    uint32_t v2 = *(int32_t *)v1; // 0x57a0d6
    while (v2 >= 76) {
        int64_t v3 = function_57a0c0(a1, *(int64_t *)(v1 + 8)); // 0x57a0f7
        result = v3;
        if (v3 != 0) {
            // 0x57a112
            return result;
        }
        // 0x57a101
        v1 += 16;
        if (v1 == 0) {
            // 0x57a112
            return 0;
        }
        v2 = *(int32_t *)v1;
    }
    int32_t v4 = *(int32_t *)(4 * (int64_t)v2 + (int64_t)&g5); // 0x57a0dd
    return (int64_t)v4 + (int64_t)&g5;
}

// Address range: 0x57a230 - 0x57a29a
int64_t function_57a230(int64_t a1, int64_t a2) {
    int64_t v1 = a2; // 0x57a235
    int64_t v2; // 0x57a230
    if ((int32_t)a2 == 0) {
        int64_t * v3 = (int64_t *)(a1 + 24); // 0x57a237
        int64_t v4 = *v3; // 0x57a237
        char * v5 = (char *)v4; // 0x57a23b
        if (*v5 == 0) {
            // 0x57a255
            return 0;
        }
        int64_t v6 = v4 + 1; // 0x57a240
        *v3 = v6;
        v1 = (int64_t)*v5;
        v2 = v6;
    }
    // 0x57a24b
    int64_t v7; // 0x57a230
    int64_t v8; // 0x57a230
    int64_t * v9; // 0x57a230
    int64_t v10; // 0x57a26c
    int64_t v11; // 0x57a291
    int64_t v12; // 0x57a230
    switch ((int32_t)v7) {
        case 104: {
            int64_t v13 = a1 + 24;
            function_579a30(v13, v1, v2, v12, v12, v12);
            // 0x57a291
            v11 = *(int64_t *)v13;
            return *(char *)v11 != 95 ? 0 : v11;
        }
        case 118: {
            // 0x57a260
            v8 = a1 + 24;
            function_579a30(v8, v1, v2, v12, v12, v12);
            v9 = (int64_t *)v8;
            v10 = *v9;
            if (*(char *)v10 != 95) {
                // 0x57a255
                return 0;
            }
            // break -> 0x57a275
            break;
        }
        default: {
            // 0x57a255
            return 0;
        }
    }
    // 0x57a275
    *v9 = v10 + 1;
    function_579a30(v8, v1, v2, v12, v12, v12);
    // 0x57a291
    v11 = *v9;
    return *(char *)v11 != 95 ? 0 : v11;
}
