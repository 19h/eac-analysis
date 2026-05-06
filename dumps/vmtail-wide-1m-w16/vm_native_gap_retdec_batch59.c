/*
 * Targeted RetDec C for native executable gap queue batch 59.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x48e641-0x48e6b8 rank=32 name=fcn.0048e641 kind=r2_discovered bytes=119 uncovered=119
 *   0x49eff0-0x49f067 rank=33 name=fcn.0049eff0 kind=r2_discovered bytes=119 uncovered=119
 *   0x15be73-0x15beec rank=18 name=fcn.0015be73 kind=r2_discovered bytes=121 uncovered=121
 *   0x2b9f30-0x2b9fa9 rank=19 name=int.002b9f30 kind=native_discovered bytes=121 uncovered=121
 *   0x4967e0-0x496859 rank=20 name=fcn.004967e0 kind=r2_discovered bytes=121 uncovered=121
 *   0x4b1080-0x4b10f9 rank=21 name=fcn.004b1080 kind=r2_discovered bytes=121 uncovered=121
 *   0x4eeeb0-0x4eef29 rank=22 name=sym.__cxa_end_catch kind=symbol_named bytes=121 uncovered=121
 *   0x547670-0x5476e9 rank=23 name=fcn.00547670 kind=r2_discovered bytes=121 uncovered=121
 *   0x35ef6-0x35f6e rank=24 name=fcn.00035ef6 kind=r2_discovered bytes=120 uncovered=120
 *   0x50ce2-0x50d93 rank=25 name=fcn.00050ce2 kind=r2_discovered bytes=177 uncovered=120
 *   0x48c2ef-0x48c384 rank=26 name=fcn.0048c2ef kind=r2_discovered bytes=149 uncovered=120
 *   0x21271-0x212e8 rank=27 name=entry.init15 kind=native_discovered bytes=119 uncovered=119
 *   0x24e7c-0x24ef3 rank=28 name=fcn.00024e7c kind=r2_discovered bytes=119 uncovered=119
 *   0x45059-0x450d0 rank=29 name=fcn.00045059 kind=r2_discovered bytes=119 uncovered=119
 *   0x527fe-0x52875 rank=30 name=fcn.000527fe kind=r2_discovered bytes=119 uncovered=119
 *   0x61f32-0x61fa9 rank=31 name=fcn.00061f32 kind=r2_discovered bytes=119 uncovered=119
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
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
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
int64_t _Unwind_DeleteException(int64_t exception);
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_15be73(int64_t a1, int64_t a2);
int64_t function_20130();
int64_t function_21271(void);
int64_t function_21a2d();
int64_t function_24ce0();
int64_t function_24cec();
int64_t function_24e1e();
int64_t function_24e7c(int64_t a1);
int64_t function_254fe();
int64_t function_256ba();
int64_t function_25856();
int64_t function_29c3a();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_29ef7();
int64_t function_29fa8();
int64_t function_2b9f30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_35b6a();
int64_t function_35c52();
int64_t function_35ef6(int64_t a1, int64_t a2);
int64_t function_45059(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_451f2();
int64_t function_48c2ef(int64_t a1, int64_t a2);
int64_t function_48e641(int64_t result);
int64_t function_4945c0();
int64_t function_4967e0(int64_t a1);
int64_t function_49e770();
int64_t function_49efb0();
int64_t function_49eff0(void);
int64_t function_4b0fa0();
int64_t function_4b1080(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_50ce2(int64_t a1);
int64_t function_52512();
int64_t function_5254c();
int64_t function_527a4();
int64_t function_527fe(int64_t result, int64_t a2);
int64_t function_542290();
int64_t function_542470();
int64_t function_542650();
int64_t function_547670(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_61f0e();
int64_t function_61f32(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_7293a();
int64_t function_72994();
int64_t function_cdc60();

// Address range: 0x21271 - 0x212e8
int64_t function_21271(void) {
    // 0x21271
    *(int32_t *)&g10 = 0;
    g11 = 0;
    g12 = (int64_t)&g10;
    g13 = (int64_t)&g10;
    g14 = 0;
    __cxa_atexit((void (*)(int64_t *))0x494588, &g9, (int64_t *)0x849800);
    function_7293a(&g15);
    return __cxa_atexit((void (*)(int64_t *))0x72994, &g15, &g8);
}

// Address range: 0x24e7c - 0x24ef3
int64_t function_24e7c(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x24e8c
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x24e93
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x24e9b
    *v3 = 0;
    int64_t v4 = function_25856(); // 0x24ea6
    int64_t v5 = function_24cec(v4); // 0x24eb1
    __asm_rep_stosd_memset((char *)v5, 0, 3);
    bool v6; // 0x24e7c
    int64_t v7 = v5 + (v6 ? -12 : 12); // 0x24ec6
    function_21a2d(v7, *v2);
    function_24ce0(v7);
    int64_t result = v5 + 12; // 0x24edc
    *v1 = v5;
    *v3 = v5 + v4;
    *v2 = result;
    return result;
}

// Address range: 0x35ef6 - 0x35f6e
int64_t function_35ef6(int64_t a1, int64_t a2) {
    if (a2 == 0) {
        // 0x35f4a
        function_542470("basic_string::_S_construct null not valid");
        // 0x35f61
        int64_t v1; // 0x35ef6
        *(int64_t *)v1 = (int64_t)&g20;
        return (int64_t)&g19;
    }
    int64_t v2 = 4 * function_35c52(a2); // 0x35f11
    int64_t result = (int64_t)&g19; // 0x35f15
    int64_t v3 = (int64_t)&g20; // 0x35f15
    if (v2 != 0) {
        int64_t v4 = v2 >> 2; // 0x35f17
        int64_t v5 = function_35b6a(v4, 0); // 0x35f23
        v3 = v5 + 24;
        function_29ef7(v3, a2, v4);
        result = function_29cf4(v5, v4, v4);
    }
    // 0x35f61
    *(int64_t *)a1 = v3;
    return result;
}

// Address range: 0x45059 - 0x450d0
// Used cryptographic patterns:
//  - B64EncodeTable (8-bit)
int64_t function_45059(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45059
    int64_t result; // 0x45059
    *(char *)a2 = (char)result / 4;
    char * v1 = (char *)(a1 + 1); // 0x4507e
    int64_t v2; // 0x45059
    *(char *)(a2 + 1) = 16 * *(char *)&v2 & 48 | *v1 / 16;
    char * v3 = (char *)(a1 + 2); // 0x45093
    *(char *)(a2 + 2) = 4 * *v1 & 60 | *v3 / 64;
    *(char *)(a2 + 3) = *v3 % 64;
    if (a4 == 0) {
        // 0x450c8
        return result;
    }
    int64_t v4 = a2; // 0x450b0
    unsigned char v5 = *(char *)v4; // 0x450b2
    v4++;
    char v6 = *(char *)((int64_t)v5 + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"); // 0x450bb
    function_451f2(a3, v6);
    while (v4 != a4 + a2) {
        // 0x450b2
        v5 = *(char *)v4;
        v4++;
        v6 = *(char *)((int64_t)v5 + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
        function_451f2(a3, v6);
    }
    // 0x450c8
    return result;
}

// Address range: 0x50ce2 - 0x50d59
int64_t function_50ce2(int64_t a1) {
    // 0x50ce2
    function_254fe(a1 + 240);
    function_254fe(a1 + 216);
    function_29c3a(a1 + 208);
    function_29c3a(a1 + 200);
    function_29c3a(a1 + 192);
    function_5254c(a1 + 144, *(int64_t *)(a1 + 160));
    function_52512(a1 + 96, *(int64_t *)(a1 + 112));
    return function_72994(a1 + 56);
}

// Address range: 0x527fe - 0x52875
int64_t function_527fe(int64_t result, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 - 24); // 0x5280e
    if (v1 == 0) {
        // 0x5286a
        return result;
    }
    int64_t v2 = result - 24;
    int64_t * v3 = (int64_t *)v2;
    int64_t v4 = *v3 + v1; // 0x52821
    int64_t * v5; // 0x527fe
    int64_t v6; // 0x527fe
    int64_t v7; // 0x527fe
    if (v4 > *(int64_t *)(result - 16)) {
        goto lab_0x5282a;
    } else {
        // 0x52837
        if ((char)function_29cea(v2) != 0) {
            goto lab_0x5282a;
        } else {
            // 0x52837
            v5 = (int64_t *)(result - 48);
            v7 = a2;
            v6 = v2;
            goto lab_0x52844;
        }
    }
  lab_0x5282a:
    // 0x5282a
    function_527a4(result, v4);
    v5 = v3;
    v7 = v4;
    v6 = result;
    goto lab_0x52844;
  lab_0x52844:;
    int64_t v8 = 4 * *v5 + v6; // 0x5284f
    function_29ef7(v8, v7, v1);
    function_29cf4(v8 - 24, v4, v1);
    // 0x5286a
    return result;
}

// Address range: 0x61f32 - 0x61fa9
int64_t function_61f32(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)a2; // 0x61f34
    *v1 = 0;
    int64_t * v2 = (int64_t *)a4; // 0x61f3d
    *v2 = 0;
    unsigned char v3 = *(char *)(a1 + 152); // 0x61f44
    if (a3 < 24 || v3 != 0) {
        // 0x61f9d
        int64_t v4; // 0x61f32
        return v4 & -256 | (int64_t)v3;
    }
    int64_t v5 = function_61f0e(); // 0x61f63
    int64_t v6 = v5; // 0x61f6a
    if ((char)v5 != 0) {
        int128_t v7 = __asm_movups(*(int128_t *)(a1 + 89)); // 0x61f6c
        int64_t v8 = a1 + 128; // 0x61f70
        __asm_movups_133(*(int128_t *)v8, v7);
        *(int64_t *)(a1 + 144) = *(int64_t *)(a1 + 105);
        v6 = function_24e1e();
        *(int64_t *)(a1 + 120) = v6;
        *v1 = v8;
        *v2 = 24;
    }
    // 0x61f9d
    return v6 & -256 | (int64_t)v3;
}

// Address range: 0x15be73 - 0x15beec
int64_t function_15be73(int64_t a1, int64_t a2) {
    // 0x15be73
    return function_cdc60(a1);
}

// Address range: 0x2b9f30 - 0x2b9fa6
int64_t function_2b9f30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    char * v3 = (char *)(a2 + 91); // 0x2b9f30
    bool v4; // 0x2b9f30
    *v3 = (char)v4 - (char)a4 + *v3;
    unknown_11c3039();
    char * v5 = (char *)(a1 + 41); // 0x2b9f3b
    *v5 = *v5 | (char)a3;
    __asm_in(-103);
    int64_t v6 = unknown_2a35274a(); // 0x2b9f44
    int32_t * v7 = (int32_t *)(v1 + 0x3a6a14f5); // 0x2b9f52
    int32_t v8 = a1; // 0x2b9f52
    int32_t v9 = *v7 + v8; // 0x2b9f52
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x2b9f52
    *v7 = v9;
    if (v10 % 2 == 0) {
        int32_t * v11 = (int32_t *)unknown_ffffffffe8914fc1(); // 0x2b9f9f
        *v11 = *v11 + 0x15911400;
        return 0x661f293a;
    }
    int32_t * v12 = (int32_t *)(a1 - 38); // 0x2b9f5b
    *v12 = *v12 + ((int32_t)v6 & -256 | 53);
    int32_t * v13 = (int32_t *)(a1 - 0x28087875); // 0x2b9f63
    uint32_t v14 = *v13; // 0x2b9f63
    *v13 = v14 + 0x15911400;
    *(int32_t *)v2 = (int32_t)(v14 > 0xea6eebff) - v8 + *(int32_t *)&v2;
    *(char *)v1 = *(char *)&v1 | (char)__asm_iretd();
    int64_t result = __asm_in_134(-24); // 0x2b9f6e
    int32_t * v15 = (int32_t *)(result - 51); // 0x2b9f70
    *v15 = *v15 + (int32_t)v1;
    return result;
}

// Address range: 0x48c2ef - 0x48c384
int64_t function_48c2ef(int64_t a1, int64_t a2) {
    int64_t v1 = a2; // bp-24, 0x48c2f8
    int64_t v2 = __readfsqword(40); // 0x48c2fd
    *(int64_t *)__tls_get_addr(&g4) = (int64_t)&v1;
    *(int64_t *)__tls_get_addr(&g5) = 0x48c2cf;
    if (g6 == 0) {
        // 0x48c363
        function_542290(0xffffffff);
        goto lab_0x48c36a;
    } else {
        int32_t v3 = pthread_once((int32_t *)a1, g7); // 0x48c355
        if (v3 == 0) {
            goto lab_0x48c36a;
        } else {
            // 0x48c363
            function_542290((int64_t)v3 & 0xffffffff);
            goto lab_0x48c36a;
        }
    }
  lab_0x48c36a:;
    int64_t result = 0; // 0x48c378
    if (v2 != __readfsqword(40)) {
        // 0x48c37a
        __stack_chk_fail();
        result = (int64_t)&g22;
    }
    // 0x48c37f
    return result;
}

// Address range: 0x48e641 - 0x48e6b8
int64_t function_48e641(int64_t result) {
    int64_t v1 = result - 24;
    int64_t * v2 = (int64_t *)v1;
    if (*v2 == 0 || *(int32_t *)function_29fa8(result) == 92 || *(int32_t *)function_29fa8(result) == 47) {
        // 0x48e6b3
        return result;
    }
    uint64_t v3 = *v2 + 1; // 0x48e672
    int64_t * v4; // 0x48e641
    int64_t v5; // 0x48e641
    int64_t v6; // 0x48e641
    if (v3 > *(int64_t *)(result - 16)) {
        goto lab_0x48e67c;
    } else {
        // 0x48e689
        if ((char)function_29cea(v1) != 0) {
            goto lab_0x48e67c;
        } else {
            int64_t v7 = result - 48; // 0x48e69c
            v4 = (int64_t *)v7;
            v5 = v7;
            v6 = v1;
            goto lab_0x48e696;
        }
    }
  lab_0x48e67c:
    // 0x48e67c
    function_527a4(result, v3);
    v4 = v2;
    v5 = v1;
    v6 = result;
    goto lab_0x48e696;
  lab_0x48e696:
    // 0x48e696
    *(int32_t *)(4 * *v4 + v6) = 47;
    int64_t v8; // 0x48e641
    return function_29cf4(v5, v3, v8);
}

// Address range: 0x4967e0 - 0x496859
int64_t function_4967e0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 96); // 0x496806
    int64_t v2 = *v1; // 0x496806
    *(int32_t *)(v2 + (int64_t)&g1) = *(int32_t *)(a1 + 340);
    function_49e770();
    function_4945c0(a1, *(int32_t *)(*v1 + (int64_t)&g1));
    if (*(int32_t *)(a1 + 216) != 22 || *(char *)*(int64_t *)(a1 + 200) != 20) {
        int64_t result = *v1; // 0x496833
        *(char *)(result + (int64_t)&g2) = 2;
        return result;
    }
    int64_t result2 = *v1; // 0x49684c
    *(char *)(result2 + (int64_t)&g2) = 3;
    return result2;
}

// Address range: 0x49eff0 - 0x49f065
int64_t function_49eff0(void) {
    // 0x49eff0
    if (g16 != 0) {
        // 0x49f065
        int64_t result; // 0x49eff0
        return result;
    }
    int64_t v1 = (int64_t)&g17;
    int64_t v2 = (int64_t)&g3;
    int64_t v3 = function_49efb0((int32_t)&g21); // 0x49f025
    int64_t v4 = v1; // 0x49f02d
    if (v3 != 0) {
        // 0x49f02f
        v4 = v1;
        if (*(int32_t *)(v3 + 16) != 42) {
            // 0x49f035
            *(int32_t *)v1 = *(int32_t *)v2;
            v4 = v1 + 4;
        }
    }
    int64_t v5 = v4;
    int64_t v6 = v2 + 4; // 0x49f03e
    int32_t v7 = *(int32_t *)v6; // 0x49f042
    while (v7 != 0 && v5 < (int64_t)&g18) {
        // 0x49f025
        v1 = v5;
        v2 = v6;
        v3 = function_49efb0(v7);
        v4 = v1;
        if (v3 != 0) {
            // 0x49f02f
            v4 = v1;
            if (*(int32_t *)(v3 + 16) != 42) {
                // 0x49f035
                *(int32_t *)v1 = *(int32_t *)v2;
                v4 = v1 + 4;
            }
        }
        // 0x49f03e
        v5 = v4;
        v6 = v2 + 4;
        v7 = *(int32_t *)v6;
    }
    // 0x49f048
    *(int32_t *)v5 = 0;
    g16 = 1;
    return (int64_t)&g17;
}

// Address range: 0x4b1080 - 0x4b10f9
int64_t function_4b1080(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = function_4b0fa0(); // 0x4b1093
    if (v1 > a3) {
        // 0x4b10ee
        return 0xfffffff8;
    }
    // 0x4b10a5
    memset((void *)(int64_t)((int64_t *)a2), 0, (int32_t)a3);
    if (v1 == 0) {
        // 0x4b10ee
        return 0;
    }
    int64_t v2 = a3 + a2; // 0x4b10df
    int64_t v3 = 0;
    int64_t v4 = v3 + 1; // 0x4b10d1
    uint64_t v5 = *(int64_t *)(*(int64_t *)(a1 + 16) + (v3 & -8)); // 0x4b10d8
    v2--;
    *(char *)v2 = (char)(v5 >> (8 * v3 & 56));
    while (v4 != v1) {
        // 0x4b10c0
        v3 = v4;
        v4 = v3 + 1;
        v5 = *(int64_t *)(*(int64_t *)(a1 + 16) + (v3 & -8));
        v2--;
        *(char *)v2 = (char)(v5 >> (8 * v3 & 56));
    }
    // 0x4b10ee
    return 0;
}

// Address range: 0x4eeeb0 - 0x4eef29
int64_t __cxa_end_catch(void) {
    int64_t result = function_20130(); // 0x4eeeb4
    int64_t * v1 = (int64_t *)result; // 0x4eeeb9
    int64_t v2 = *v1; // 0x4eeeb9
    if (v2 == 0) {
        // 0x4eeee9
        return result;
    }
    int64_t v3 = v2 + 80; // 0x4eeecb
    if ((*(int64_t *)v3 || 1) != 0x474e5543432b2b01) {
        // 0x4eeef0
        *v1 = 0;
        return _Unwind_DeleteException(v3);
    }
    int32_t * v4 = (int32_t *)(v2 + 40); // 0x4eeed5
    int32_t v5 = *v4; // 0x4eeed5
    if (v5 < 0) {
        int32_t v6 = v5 + 1; // 0x4eef20
        if (v6 == 0) {
            // 0x4eeee9
            return result;
        }
        // 0x4eeee6
        *v4 = v6;
        // 0x4eeee9
        return result;
    }
    int32_t v7 = v5 - 1; // 0x4eeedc
    if (v7 == 0) {
        // 0x4eef08
        *v1 = *(int64_t *)(v2 + 32);
        return _Unwind_DeleteException(v3);
    }
    // 0x4eeee1
    if (v5 == 0) {
        // 0x4eeee9
        return result;
    }
    // 0x4eeee6
    *v4 = v7;
    // 0x4eeee9
    return result;
}

// Address range: 0x547670 - 0x5476e9
int64_t function_547670(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x54767a
    if (v1 < a4) {
        // 0x5476bb
        function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::copy", a4, v1, a2);
        return function_256ba();
    }
    uint64_t v2 = v1 - a4; // 0x547683
    int64_t result = v2 > a3 ? a3 : v2; // 0x547689
    if (result == 0) {
        // 0x5476a6
        return result;
    }
    int64_t v3 = a4 + a1; // 0x547692
    if (result == 1) {
        // 0x5476b0
        *(char *)a2 = *(char *)v3;
        return 1;
    }
    // 0x54769b
    memcpy((int64_t *)a2, (int64_t *)v3, (int32_t)result);
    // 0x5476a6
    return result;
}
