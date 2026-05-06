/*
 * Targeted RetDec C for native executable gap queue batch 57.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4eef80-0x4eefff rank=16 name=fcn.004eef80 kind=r2_discovered bytes=127 uncovered=127
 *   0x4f1440-0x4f14bf rank=17 name=fcn.004f1440 kind=r2_discovered bytes=127 uncovered=127
 *   0x54f430-0x54f4af rank=18 name=method.std::__codecvt_utf8_utf16_base_char16_t_.virtual_32 kind=native_discovered bytes=127 uncovered=127
 *   0x568fd0-0x56904f rank=19 name=fcn.00568fd0 kind=r2_discovered bytes=127 uncovered=127
 *   0x2833e-0x283c8 rank=20 name=fcn.0002833e kind=r2_discovered bytes=138 uncovered=126
 *   0x58165-0x581e3 rank=21 name=fcn.00058165 kind=r2_discovered bytes=126 uncovered=126
 *   0x4968b0-0x49692e rank=22 name=fcn.004968b0 kind=r2_discovered bytes=126 uncovered=126
 *   0x4afa40-0x4afabe rank=23 name=fcn.004afa40 kind=r2_discovered bytes=126 uncovered=126
 *   0x4f0700-0x4f077e rank=24 name=fcn.004f0700 kind=r2_discovered bytes=126 uncovered=126
 *   0x52b0c0-0x52b13e rank=25 name=fcn.0052b0c0 kind=r2_discovered bytes=126 uncovered=126
 *   0x5798c0-0x57993e rank=26 name=fcn.005798c0 kind=r2_discovered bytes=126 uncovered=126
 *   0x68fb0-0x6902d rank=27 name=fcn.00068fb0 kind=r2_discovered bytes=125 uncovered=125
 *   0x718ad-0x7192a rank=28 name=fcn.000718ad kind=r2_discovered bytes=125 uncovered=125
 *   0x4aff10-0x4aff8d rank=29 name=fcn.004aff10 kind=r2_discovered bytes=125 uncovered=125
 *   0x54f650-0x54f6cd rank=30 name=fcn.0054f650 kind=r2_discovered bytes=125 uncovered=125
 *   0x48fd30-0x48fdac rank=31 name=fcn.0048fd30 kind=r2_discovered bytes=124 uncovered=124
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
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
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
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_ffffffffd3dfe90d(void);
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
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_2508e();
int64_t function_2833e(uint64_t a1, uint64_t a2);
int64_t function_29c3a();
int64_t function_35ef6();
int64_t function_48d50f();
int64_t function_48eb2b();
int64_t function_48fcf5();
int64_t function_48fd30(int64_t a1);
int64_t function_4968b0(int64_t a1);
int64_t function_4afa40(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_4afe70();
int64_t function_4aff10(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4eef80(int64_t a1, int64_t result, int64_t a3);
int64_t function_4efd30();
int64_t function_4f0700(void);
int64_t function_4f1440(int64_t a1);
int64_t function_4f1460(void);
int64_t function_4f1470(void);
int64_t function_4f1480(void);
int64_t function_4f1490(void);
int64_t function_4f14a0(void);
int64_t function_4f14b0(void);
int64_t function_52b020();
int64_t function_52b0c0(int64_t result, uint64_t a2, int64_t a3);
int64_t function_542590();
int64_t function_542c40();
int64_t function_545160();
int64_t function_54d830();
int64_t function_54ed10();
int64_t function_54f250();
int64_t function_54f430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_54f650(int64_t result, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_568fd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5798c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_579910(void);
int64_t function_57dda();
int64_t function_58165(int64_t a1);
int64_t function_67ede();
int64_t function_68fb0(int64_t a1, int64_t a2);
int64_t function_717fa();
int64_t function_718ad(int64_t result, int64_t a2);
int64_t function_71b9e();

// Address range: 0x2833e - 0x283c8
int64_t function_2833e(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x2834c
    if (a1 >= 0xfffffffffffffff) {
        // 0x2834e
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x28360
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x28362
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x2836d
    uint64_t v6 = v5 + 60; // 0x28375
    int64_t v7 = v3; // 0x2837f
    int64_t v8 = v5; // 0x2837f
    if (v3 > a2 && v6 > (int64_t)&g1) {
        uint64_t v9 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g15)) / 4 + v3; // 0x2839a
        v7 = v9 < 0xffffffffffffffe ? v9 : 0xffffffffffffffe;
        v8 = 4 * v7;
    }
    int64_t result = function_4efd30(v8 + 28); // 0x283b6
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x58165 - 0x581e3
int64_t function_58165(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x5816b
    int64_t v2 = 0; // 0x5817e
    if (a1 != 0) {
        // 0x58180
        int64_t v3; // bp-40, 0x58165
        int64_t v4; // bp-49, 0x58165
        function_35ef6(&v3, a1, &v4);
        int64_t v5; // bp-48, 0x58165
        function_48eb2b(&v5, &v3);
        function_29c3a(&v3);
        v2 = function_2508e(&v5) & -256 | function_57dda(v5) % 256;
    }
    int64_t result = v2; // 0x581d5
    if (v1 != __readfsqword(40)) {
        // 0x581d7
        __stack_chk_fail();
        result = (int64_t)&g16;
    }
    // 0x581dc
    return result;
}

// Address range: 0x68fb0 - 0x6902d
int64_t function_68fb0(int64_t a1, int64_t a2) {
    int32_t v1 = function_67ede(a2, 0); // 0x68fc6
    int64_t v2 = 3; // 0x68fb0
    switch (v1) {
        case 4: {
            // 0x68fe2
            v2 = (char)a2 != 0 ? 0 : 6;
        }
        case 2: {
            // 0x69027
            return v2 & 0xffffffff;
        }
        default: {
            // 0x68fd5
            v2 = (v1 != 1 ? 3 : 2) + (int64_t)(v1 != 1);
            return v2 & 0xffffffff;
        }
    }
}

// Address range: 0x718ad - 0x7192a
int64_t function_718ad(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x718c5
    *(int64_t *)result = function_717fa();
    int64_t name; // bp-422, 0x718ad
    int32_t v2 = uname((struct utsname *)&name); // 0x718e4
    int64_t v3; // bp-292, 0x718ad
    int64_t v4 = v2 != 0 ? (int64_t)&g3 : (int64_t)&v3; // 0x718fc
    function_71b9e(result, v4);
    if (v1 != __readfsqword(40)) {
        // 0x71918
        __stack_chk_fail();
    }
    // 0x7191d
    return result;
}

// Address range: 0x48fd30 - 0x48fdac
int64_t function_48fd30(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x48fd3d
    function_48fcf5();
    int16_t v2; // 0x48fd30
    int32_t v3; // 0x48fd30
    function_48d50f(a1, 37, "%08x-%04x-%04x-%04x-%08x%04x", (int64_t)v3, v2, v2, (int64_t)v2, (int64_t)v3, (int64_t)v2);
    int64_t result = 0; // 0x48fd9f
    if (v1 != __readfsqword(40)) {
        // 0x48fda1
        __stack_chk_fail();
        result = (int64_t)&g16;
    }
    // 0x48fda6
    return result;
}

// Address range: 0x4968b0 - 0x496928
int64_t function_4968b0(int64_t a1) {
    // 0x4968b0
    return 0;
}

// Address range: 0x4afa40 - 0x4afabe
int64_t function_4afa40(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = 16 * (int32_t)a3; // 0x4afa43
    int64_t v2 = v1 + a2; // 0x4afa46
    int64_t v3 = v2 - 16; // 0x4afa4c
    *(int64_t *)a1 = *(int64_t *)v2;
    *(int64_t *)(a1 + 8) = *(int64_t *)(v2 + 8);
    int64_t v4 = a1 + 16; // 0x4afa5b
    int64_t v5 = v3; // 0x4afa62
    int64_t v6 = v4; // 0x4afa62
    int64_t v7 = v3; // 0x4afa62
    int64_t v8 = v4; // 0x4afa62
    if (v3 > a2) {
        int128_t v9 = *(int128_t *)v5; // 0x4afa70
        *(int128_t *)v6 = (int128_t)__asm_movdqu_133(__asm_aesimc(__asm_movdqu(v9)));
        v5 -= 16;
        v6 += 16;
        while (v5 > a2) {
            // 0x4afa70
            v9 = *(int128_t *)v5;
            *(int128_t *)v6 = (int128_t)__asm_movdqu_133(__asm_aesimc(__asm_movdqu(v9)));
            v5 -= 16;
            v6 += 16;
        }
        // 0x4afa8a
        v7 = v2 - 32 - (v1 - 17 & -16);
        v8 = (v1 - 1 & -16) + v4;
    }
    // 0x4afaaf
    *(int64_t *)v8 = *(int64_t *)v7;
    int64_t result = *(int64_t *)(v7 + 8); // 0x4afab5
    *(int64_t *)(v8 + 8) = result;
    return result;
}

// Address range: 0x4aff10 - 0x4aff8d
int64_t function_4aff10(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = function_4afe70(); // 0x4aff26
    if ((int32_t)result != 0) {
        // 0x4aff7f
        return result;
    }
    // 0x4aff2f
    int64_t v1; // 0x4aff10
    int64_t v2 = v1 - 1; // 0x4aff34
    if ((char)a1 < 0 || v2 > 3) {
        // 0x4aff7f
        return 0xffffff9c;
    }
    int32_t * v3 = (int32_t *)a3; // 0x4aff47
    *v3 = 0;
    int64_t v4 = 0; // 0x4aff55
    int64_t v5 = v2; // 0x4aff55
    int64_t v6 = a1 + 1; // 0x4aff67
    v4 = 256 * v4 & 0xffffff00 | (int64_t)*(char *)a1;
    *v3 = (int32_t)v4;
    *(int64_t *)a1 = v6;
    while (v5 != 0) {
        // 0x4aff58
        v5--;
        int64_t v7 = v6;
        v6 = v7 + 1;
        v4 = 256 * v4 & 0xffffff00 | (int64_t)*(char *)v7;
        *v3 = (int32_t)v4;
        *(int64_t *)a1 = v6;
    }
    // 0x4aff7f
    return result;
}

// Address range: 0x4eef80 - 0x4eefff
int64_t function_4eef80(int64_t a1, int64_t result, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4eef94
    if ((char)result != 0) {
        // 0x4eefd9
        *(int64_t *)a3 = a3;
    }
    // 0x4eefe1
    if (v1 == __readfsqword(40)) {
        // 0x4eeff1
        return result;
    }
    // 0x4eeffa
    __stack_chk_fail();
    return (int64_t)&g16;
}

// Address range: 0x4f0700 - 0x4f077b
int64_t function_4f0700(void) {
    uint32_t result = *(int32_t *)&g14;
    if (g7 == 0) {
        // 0x4f0728
        *(int32_t *)&g14 = (int32_t)&g13;
        if (result != 2) {
            // 0x4f071f
            return result;
        }
    } else {
        // 0x4f0711
        *(int32_t *)&g14 = result - 1;
        if (result != 2) {
            // 0x4f071f
            return result;
        }
    }
    // 0x4f0734
    function_542c40(&g12);
    function_542c40(&g11);
    function_542c40(&g10);
    function_545160(&g9);
    return function_545160(&g8);
}

// Address range: 0x4f1440 - 0x4f145c
int64_t function_4f1440(int64_t a1) {
    int64_t v1 = a1 & 61; // 0x4f1440
    if (v1 == 61) {
        // 0x4f1520
        int64_t result; // 0x4f1440
        return result;
    }
    int32_t v2 = *(int32_t *)(4 * v1 + (int64_t)&g5); // 0x4f1453
    return (int64_t)v2 + (int64_t)&g5;
}

// Address range: 0x4f1460 - 0x4f1468
int64_t function_4f1460(void) {
    // 0x4f1460
    return (int64_t)"a+";
}

// Address range: 0x4f1470 - 0x4f1478
int64_t function_4f1470(void) {
    // 0x4f1470
    return (int64_t)"a+b";
}

// Address range: 0x4f1480 - 0x4f1488
int64_t function_4f1480(void) {
    // 0x4f1480
    return (int64_t)"wb";
}

// Address range: 0x4f1490 - 0x4f1498
int64_t function_4f1490(void) {
    // 0x4f1490
    return (int64_t)"ab";
}

// Address range: 0x4f14a0 - 0x4f14a8
int64_t function_4f14a0(void) {
    // 0x4f14a0
    return (int64_t)&g2;
}

// Address range: 0x4f14b0 - 0x4f14b8
int64_t function_4f14b0(void) {
    // 0x4f14b0
    return (int64_t)&g4;
}

// Address range: 0x52b0c0 - 0x52b13c
int64_t function_52b0c0(int64_t result, uint64_t a2, int64_t a3) {
    if (a2 >= 16) {
        // 0x52b130
        return function_52b020();
    }
    switch (a2) {
        case 1: {
            // 0x52b110
            *(char *)result = (char)a3;
            *(int64_t *)(result + 8) = 1;
            *(char *)(result + 1) = 0;
            return result;
        }
        default: {
            // 0x52b0e7
            memset((void *)(int64_t)((int64_t *)result), 0x1000000 * (int32_t)a3 >> 24, (int32_t)a2);
        }
        case 0: {
            // 0x52b0fb
            *(int64_t *)(result + 8) = a2;
            *(char *)(a2 + result) = 0;
            return result;
        }
    }
}

// Address range: 0x54f430 - 0x54f4af
// From class:    std::__codecvt_utf8_utf16_base<char16_t>
// Type:          virtual member function
int64_t function_54f430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x54f449
    int64_t v2 = a3; // bp-72, 0x54f459
    int64_t result = function_54f250(&v2); // 0x54f47e
    *(int64_t *)a5 = v2;
    *(int64_t *)a8 = a6;
    if (v1 == __readfsqword(40)) {
        // 0x54f4a3
        return result;
    }
    // 0x54f4aa
    __stack_chk_fail();
    return (int64_t)&g16;
}

// Address range: 0x54f650 - 0x54f6c7
int64_t function_54f650(int64_t result, int64_t a2, uint64_t a3, int64_t a4) {
    if ((a4 & 4) != 0) {
        // 0x54f6c0
        function_54ed10();
    }
    int64_t * v1 = (int64_t *)(result + 8); // 0x54f662
    if (*v1 == result) {
        // 0x54f6b4
        return result;
    }
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x54f66f
    if (*v2 == a2) {
        // 0x54f6b4
        return 1;
    }
    int64_t v3 = a3 + 4;
    int64_t v4 = function_54d830(result, a3); // 0x54f6aa
    int32_t v5 = v4; // 0x54f6af
    int64_t result2 = 1; // 0x54f6b2
    while (v5 != -2) {
        // 0x54f680
        result2 = v4;
        if ((v4 & 0xffffffff) > a3) {
            // break -> 0x54f6b4
            break;
        }
        // 0x54f687
        *(int64_t *)a2 = v3;
        *(int32_t *)a3 = v5;
        result2 = result;
        if (*v1 == result) {
            // break -> 0x54f6b4
            break;
        }
        // 0x54f69e
        result2 = 1;
        if (*v2 == v3) {
            // break -> 0x54f6b4
            break;
        }
        v4 = function_54d830(result, a3);
        v5 = v4;
        result2 = 1;
    }
    // 0x54f6b4
    return result2;
}

// Address range: 0x568fd0 - 0x56904d
int64_t function_568fd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x568fd0
    uint64_t v2 = a2 - 1; // 0x568fd4
    uint64_t v3 = v2 > v1 ? v1 : v2; // 0x568fdb
    int64_t v4 = 0; // 0x568fe4
    if (v3 == 0) {
        // 0x569045
        return 0;
    }
    int64_t v5 = v1; // 0x568fe4
    char v6 = *(char *)(v4 + a1); // 0x568ff5
    v4++;
    char v7 = *(char *)(v5 + a3); // 0x568ffe
    v5--;
    while (v4 < v3 && v7 == v6) {
        // 0x568ff5
        v6 = *(char *)(v4 + a1);
        v4++;
        v7 = *(char *)(v5 + a3);
        v5--;
    }
    char v8 = *(char *)(v3 + a1); // 0x569019
    if (v5 != 0 != (v7 == v6)) {
        // 0x569045
        return v4 & -256 | (int64_t)(v7 == v6);
    }
    int64_t v9 = v5; // 0x56901d
    char v10 = *(char *)(v9 + a3); // 0x569035
    v9--;
    while (v9 != 0 && v10 == v8) {
        // 0x569035
        v10 = *(char *)(v9 + a3);
        v9--;
    }
    // 0x569045
    return v10 == v8;
}

// Address range: 0x5798c0 - 0x57990c
int64_t function_5798c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5798c0
    if (a3 != 0 != (int32_t)a3 < 80) {
        // 0x579901
        int64_t result; // 0x5798c0
        return result;
    }
    int32_t v1 = *(int32_t *)((4 * a3 & 0x3fffffffc) + (int64_t)&g6); // 0x5798ea
    return (int64_t)v1 + (int64_t)&g6;
}

// Address range: 0x579910 - 0x579916
int64_t function_579910(void) {
    // 0x579910
    int64_t result; // 0x579910
    return result;
}
