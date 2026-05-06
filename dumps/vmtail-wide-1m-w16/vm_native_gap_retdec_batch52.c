/*
 * Targeted RetDec C for native executable gap queue batch 52.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4affe0-0x4b0069 rank=14 name=fcn.004affe0 kind=r2_discovered bytes=137 uncovered=137
 *   0x4ccd50-0x4ccdd9 rank=15 name=fcn.004ccd50 kind=r2_discovered bytes=137 uncovered=137
 *   0x566b00-0x566b89 rank=16 name=fcn.00566b00 kind=r2_discovered bytes=137 uncovered=137
 *   0x566cb0-0x566d39 rank=17 name=fcn.00566cb0 kind=r2_discovered bytes=137 uncovered=137
 *   0x5687e0-0x568869 rank=18 name=fcn.005687e0 kind=r2_discovered bytes=137 uncovered=137
 *   0x38ef3-0x38f7b rank=19 name=fcn.00038ef3 kind=r2_discovered bytes=136 uncovered=136
 *   0x575b2-0x5763a rank=20 name=fcn.000575b2 kind=r2_discovered bytes=136 uncovered=136
 *   0x2c342b-0x2c34b3 rank=21 name=fcn.002c342b kind=r2_discovered bytes=136 uncovered=136
 *   0x2c39c6-0x2c3a4e rank=22 name=fcn.002c39c6 kind=r2_discovered bytes=136 uncovered=136
 *   0x509fc0-0x50a048 rank=23 name=fcn.00509fc0 kind=r2_discovered bytes=136 uncovered=136
 *   0x50a050-0x50a0d8 rank=24 name=fcn.0050a050 kind=r2_discovered bytes=136 uncovered=136
 *   0x553fb0-0x554038 rank=25 name=fcn.00553fb0 kind=r2_discovered bytes=136 uncovered=136
 *   0x554040-0x5540c8 rank=26 name=fcn.00554040 kind=r2_discovered bytes=136 uncovered=136
 *   0x57a3c0-0x57a448 rank=27 name=fcn.0057a3c0 kind=r2_discovered bytes=136 uncovered=136
 *   0x3270a-0x32791 rank=28 name=fcn.0003270a kind=r2_discovered bytes=135 uncovered=135
 *   0x72b18-0x72b9f rank=29 name=fcn.00072b18 kind=r2_discovered bytes=135 uncovered=135
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
int64_t unknown_6ae5a3c4(void);
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
int128_t __asm_movdqu(int128_t value);
void __asm_movdqu_133();
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

int64_t function_1fdb0();
int64_t function_20480();
int64_t function_207f0();
int64_t function_29c3a();
int64_t function_2c342b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t a5);
int64_t function_2c39c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_3270a(int64_t a1, int64_t a2);
int64_t function_35ef6();
int64_t function_38ef3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48da6e();
int64_t function_4afe70();
int64_t function_4affe0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ccd50(int64_t a1, int64_t a2);
int64_t function_4efb50();
int64_t function_509b2();
int64_t function_509fc0(int64_t a1, int64_t a2);
int64_t function_50a050(int64_t a1, int64_t a2);
int64_t function_547e30();
int64_t function_553fb0(int64_t a1, int64_t a2);
int64_t function_554040(int64_t a1, int64_t a2);
int64_t function_566b00(int64_t a1);
int64_t function_566cb0(int64_t a1);
int64_t function_5687e0(int64_t a1);
int64_t function_575b2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_57a3c0(int64_t a1, int64_t a2);
int64_t function_727da();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_72b18(int64_t thread_func_arg);
int64_t function_cf3c7();

// Address range: 0x3270a - 0x32791
int64_t function_3270a(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x32722
    int64_t v2 = function_48da6e(); // 0x32736
    int64_t v3 = v2; // 0x3273d
    if ((char)v2 != 0) {
        // 0x3273f
        int64_t v4; // bp-40, 0x3270a
        int64_t v5; // bp-41, 0x3270a
        function_35ef6(&v4, a2, &v5);
        uint64_t v6 = function_509b2(a1 + (int64_t)&g1, &v4); // 0x3275e
        v3 = function_29c3a(&v4) & -256 | v6 % 256;
    }
    int64_t result = v3; // 0x32781
    if (v1 != __readfsqword(40)) {
        // 0x32783
        __stack_chk_fail();
        result = (int64_t)&g9;
    }
    // 0x32788
    return result;
}

// Address range: 0x38ef3 - 0x38f7b
int64_t function_38ef3(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3; // 0x38efc
    if (a2 == a1) {
        // 0x38f4e
        return 48 * (0xaaaaaaaaaaaaaab * (a2 - a1) / 16 & 0xfffffffffffffff) + a3;
    }
    int64_t * v2 = (int64_t *)a1; // 0x38efe
    int64_t v3 = a1 + 48; // 0x38f09
    *(int64_t *)v1 = *v2;
    *v2 = (int64_t)&g8;
    *(int64_t *)(v1 + 8) = *(int64_t *)(a1 + 8);
    *(char *)(v1 + 16) = *(char *)(a1 + 16);
    int64_t * v4 = (int64_t *)(a1 + 24); // 0x38f2c
    *(int64_t *)(v1 + 24) = *v4;
    int64_t * v5 = (int64_t *)(a1 + 32); // 0x38f34
    *v4 = (int64_t)&g8;
    *(int64_t *)(v1 + 32) = *v5;
    *v5 = (int64_t)&g8;
    *(int64_t *)(v1 + 40) = *(int64_t *)(a1 + 40);
    v1 += 48;
    while (v3 != a2) {
        int64_t v6 = v3;
        v2 = (int64_t *)v6;
        v3 = v6 + 48;
        *(int64_t *)v1 = *v2;
        *v2 = (int64_t)&g8;
        *(int64_t *)(v1 + 8) = *(int64_t *)(v6 + 8);
        *(char *)(v1 + 16) = *(char *)(v6 + 16);
        v4 = (int64_t *)(v6 + 24);
        *(int64_t *)(v1 + 24) = *v4;
        v5 = (int64_t *)(v6 + 32);
        *v4 = (int64_t)&g8;
        *(int64_t *)(v1 + 32) = *v5;
        *v5 = (int64_t)&g8;
        *(int64_t *)(v1 + 40) = *(int64_t *)(v6 + 40);
        v1 += 48;
    }
    // 0x38f4e
    return 48 * (0xaaaaaaaaaaaaaab * (a2 - a1) / 16 & 0xfffffffffffffff) + a3;
}

// Address range: 0x575b2 - 0x5763a
int64_t function_575b2(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x575ce
    function_20480();
    int64_t v2 = 0; // 0x575e9
    if (a1 != 0 && a2 != 0) {
        // 0x575f0
        int64_t v3; // bp-1960, 0x575b2
        function_1fdb0(&v3, a1, a2);
        v2 = function_207f0(&v3, a3, 32) & -256 | 1;
    }
    int64_t result = v2; // 0x57625
    if (v1 != __readfsqword(40)) {
        // 0x57627
        __stack_chk_fail();
        result = (int64_t)&g9;
    }
    // 0x5762c
    return result;
}

// Address range: 0x72b18 - 0x72b9f
int64_t function_72b18(int64_t thread_func_arg) {
    int64_t v1 = __readfsqword(40); // 0x72b2f
    function_729b6();
    int64_t thread = thread_func_arg + 8; // 0x72b44
    int64_t v2 = 0; // 0x72b49
    if (*(int64_t *)thread == 0) {
        // 0x72b4b
        *(char *)(thread_func_arg + 112) = 0;
        __asm_mfence(thread_func_arg + 16);
        function_727da();
        v2 = pthread_create((int32_t *)thread, NULL, (int64_t * (*)(int64_t *))0x729fe, (int64_t *)thread_func_arg) == 0;
    }
    // 0x72b76
    int64_t v3; // bp-40, 0x72b18
    int64_t result = function_729ce(&v3) & -256 | v2; // 0x72b8f
    if (v1 != __readfsqword(40)) {
        // 0x72b91
        __stack_chk_fail();
        result = (int64_t)&g9;
    }
    // 0x72b96
    return result;
}

// Address range: 0x2c342b - 0x2c34b3
int64_t function_2c342b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t a5) {
    int64_t v1 = a5; // 0x2c342d
    int64_t * v2 = (int64_t *)(v1 - 8); // 0x2c3430
    *v2 = 0x4fdec133;
    *(int64_t *)(v1 - 24) = a4;
    int64_t * v3 = (int64_t *)(v1 - 16); // 0x2c3440
    int64_t v4; // 0x2c342b
    *v3 = v4 & -184;
    int64_t v5 = v1 + 8; // 0x2c3449
    *(int64_t *)v5 = *v2;
    *v2 = a1;
    *v3 = 0x782e4bf9;
    *(int64_t *)(v1 + 24) = *v3;
    *v3 = v1;
    *v2 = v5;
    return function_cf3c7(*v2);
}

// Address range: 0x2c39c6 - 0x2c3a4e
int64_t function_2c39c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x2c39c6
    int64_t v1; // 0x2c39c6
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x2c39c6
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_cf3c7(a1);
}

// Address range: 0x4affe0 - 0x4b0067
int64_t function_4affe0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1;
    int64_t result = function_4afe70(); // 0x4b0001
    if ((int32_t)result != 0) {
        // 0x4b0048
        return result;
    }
    // 0x4b000a
    if (a3 == 0) {
        // 0x4b0048
        return 0xffffffa0;
    }
    int64_t v2 = a3 - 1; // 0x4b0016
    *(int64_t *)a3 = v2;
    unsigned char v3 = *(char *)&v1; // 0x4b001e
    *(char *)(a3 + 8) = v3;
    int64_t result2 = result; // 0x4b0027
    if (v3 < 8) {
        int64_t v4 = v1 + 1; // 0x4b002c
        int64_t * v5 = (int64_t *)a1; // 0x4b0030
        *v5 = v4;
        *(int64_t *)(a3 + 16) = v4;
        int64_t v6 = v1 + v2; // 0x4b0037
        *v5 = v6;
        result2 = v6 != a2 ? 0xffffff9a : result & 0xffffffff;
    }
    // 0x4b0048
    return result2;
}

// Address range: 0x4ccd50 - 0x4ccdd8
int64_t function_4ccd50(int64_t a1, int64_t a2) {
    int32_t v1 = a2; // 0x4ccd50
    *(int32_t *)a1 = 0;
    *(int32_t *)(a1 + 4) = 0;
    int32_t * v2 = (int32_t *)(a1 + 8);
    int64_t result; // 0x4ccd50
    if (v1 == 0) {
        // 0x4ccda0
        *v2 = 0x6a09e667;
        *(int32_t *)(a1 + 12) = -0x4498517b;
        *(int32_t *)(a1 + 16) = 0x3c6ef372;
        *(int32_t *)(a1 + 20) = -0x5ab00ac6;
        *(int32_t *)(a1 + 24) = 0x510e527f;
        *(int32_t *)(a1 + 28) = -0x64fa9774;
        *(int32_t *)(a1 + 32) = 0x1f83d9ab;
        *(int32_t *)(a1 + 36) = 0x5be0cd19;
        return result;
    }
    // 0x4ccd61
    *v2 = -0x3efa6128;
    *(int32_t *)(a1 + 12) = 0x367cd507;
    *(int32_t *)(a1 + 16) = 0x3070dd17;
    *(int32_t *)(a1 + 20) = -0x8f1a6c7;
    *(int32_t *)(a1 + 24) = -0x3ff4cf;
    *(int32_t *)(a1 + 28) = 0x68581511;
    *(int32_t *)(a1 + 32) = 0x64f98fa7;
    *(int32_t *)(a1 + 36) = -0x4105b05c;
    *(int32_t *)(a1 + 104) = v1;
    return result;
}

// Address range: 0x509fc0 - 0x50a048
int64_t function_509fc0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x509fc0
    *(int64_t *)a2 = *(int64_t *)(v1 + 200);
    *(int64_t *)(a2 + 8) = *(int64_t *)(v1 + 208);
    *(int64_t *)(a2 + 16) = *(int64_t *)(v1 + 216);
    *(int64_t *)(a2 + 24) = *(int64_t *)(v1 + 224);
    *(int64_t *)(a2 + 32) = *(int64_t *)(v1 + 232);
    *(int64_t *)(a2 + 40) = *(int64_t *)(v1 + 240);
    *(int64_t *)(a2 + 48) = *(int64_t *)(v1 + 248);
    *(int64_t *)(a2 + 56) = *(int64_t *)(v1 + 256);
    *(int64_t *)(a2 + 64) = *(int64_t *)(v1 + 264);
    *(int64_t *)(a2 + 72) = *(int64_t *)(v1 + 272);
    *(int64_t *)(a2 + 80) = *(int64_t *)(v1 + 280);
    int64_t result = *(int64_t *)(v1 + 288); // 0x50a03c
    *(int64_t *)(a2 + 88) = result;
    return result;
}

// Address range: 0x50a050 - 0x50a0d8
int64_t function_50a050(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x50a050
    *(int64_t *)a2 = *(int64_t *)(v1 + 296);
    *(int64_t *)(a2 + 8) = *(int64_t *)(v1 + 304);
    *(int64_t *)(a2 + 16) = *(int64_t *)(v1 + 312);
    *(int64_t *)(a2 + 24) = *(int64_t *)(v1 + 320);
    *(int64_t *)(a2 + 32) = *(int64_t *)(v1 + 328);
    *(int64_t *)(a2 + 40) = *(int64_t *)(v1 + 336);
    *(int64_t *)(a2 + 48) = *(int64_t *)(v1 + 344);
    *(int64_t *)(a2 + 56) = *(int64_t *)(v1 + 352);
    *(int64_t *)(a2 + 64) = *(int64_t *)(v1 + 360);
    *(int64_t *)(a2 + 72) = *(int64_t *)(v1 + 368);
    *(int64_t *)(a2 + 80) = *(int64_t *)(v1 + 376);
    int64_t result = *(int64_t *)(v1 + 384); // 0x50a0cc
    *(int64_t *)(a2 + 88) = result;
    return result;
}

// Address range: 0x553fb0 - 0x554038
int64_t function_553fb0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x553fb0
    *(int64_t *)a2 = *(int64_t *)(v1 + 200);
    *(int64_t *)(a2 + 8) = *(int64_t *)(v1 + 208);
    *(int64_t *)(a2 + 16) = *(int64_t *)(v1 + 216);
    *(int64_t *)(a2 + 24) = *(int64_t *)(v1 + 224);
    *(int64_t *)(a2 + 32) = *(int64_t *)(v1 + 232);
    *(int64_t *)(a2 + 40) = *(int64_t *)(v1 + 240);
    *(int64_t *)(a2 + 48) = *(int64_t *)(v1 + 248);
    *(int64_t *)(a2 + 56) = *(int64_t *)(v1 + 256);
    *(int64_t *)(a2 + 64) = *(int64_t *)(v1 + 264);
    *(int64_t *)(a2 + 72) = *(int64_t *)(v1 + 272);
    *(int64_t *)(a2 + 80) = *(int64_t *)(v1 + 280);
    int64_t result = *(int64_t *)(v1 + 288); // 0x55402c
    *(int64_t *)(a2 + 88) = result;
    return result;
}

// Address range: 0x554040 - 0x5540c8
int64_t function_554040(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x554040
    *(int64_t *)a2 = *(int64_t *)(v1 + 296);
    *(int64_t *)(a2 + 8) = *(int64_t *)(v1 + 304);
    *(int64_t *)(a2 + 16) = *(int64_t *)(v1 + 312);
    *(int64_t *)(a2 + 24) = *(int64_t *)(v1 + 320);
    *(int64_t *)(a2 + 32) = *(int64_t *)(v1 + 328);
    *(int64_t *)(a2 + 40) = *(int64_t *)(v1 + 336);
    *(int64_t *)(a2 + 48) = *(int64_t *)(v1 + 344);
    *(int64_t *)(a2 + 56) = *(int64_t *)(v1 + 352);
    *(int64_t *)(a2 + 64) = *(int64_t *)(v1 + 360);
    *(int64_t *)(a2 + 72) = *(int64_t *)(v1 + 368);
    *(int64_t *)(a2 + 80) = *(int64_t *)(v1 + 376);
    int64_t result = *(int64_t *)(v1 + 384); // 0x5540bc
    *(int64_t *)(a2 + 88) = result;
    return result;
}

// Address range: 0x566b00 - 0x566b89
// From class:    std::logic_error
// Type:          constructor
int64_t function_566b00(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x566b08
    *(int64_t *)a1 = (int64_t)&g2;
    int64_t result = *(int64_t *)(a1 + 8); // 0x566b26
    int64_t v2 = result - 24; // 0x566b2a
    if (v2 == (int64_t)g5) {
        // 0x566b37
        function_4efb50(a1);
        return __readfsqword(40) ^ v1;
    }
    int32_t * v3 = (int32_t *)(result - 8);
    int32_t v4 = *v3;
    *v3 = v4 - 1;
    if (g6 == 0) {
        // 0x566b80
        return result;
    }
    if (v4 >= 0 != v4 != 0) {
        // 0x566b70
        int64_t v5; // bp-17, 0x566b00
        function_547e30(v2, &v5, v4);
    }
    // 0x566b37
    function_4efb50(a1);
    return __readfsqword(40) ^ v1;
}

// Address range: 0x566cb0 - 0x566d39
// From class:    std::runtime_error
// Type:          constructor
int64_t function_566cb0(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x566cb8
    *(int64_t *)a1 = (int64_t)&g3;
    int64_t result = *(int64_t *)(a1 + 8); // 0x566cd6
    int64_t v2 = result - 24; // 0x566cda
    if (v2 == (int64_t)g5) {
        // 0x566ce7
        function_4efb50(a1);
        return __readfsqword(40) ^ v1;
    }
    int32_t * v3 = (int32_t *)(result - 8);
    int32_t v4 = *v3;
    *v3 = v4 - 1;
    if (g6 == 0) {
        // 0x566d30
        return result;
    }
    if (v4 >= 0 != v4 != 0) {
        // 0x566d20
        int64_t v5; // bp-17, 0x566cb0
        function_547e30(v2, &v5, v4);
    }
    // 0x566ce7
    function_4efb50(a1);
    return __readfsqword(40) ^ v1;
}

// Address range: 0x5687e0 - 0x568869
// From class:    std::ios_base::failure
// Type:          constructor
int64_t function_5687e0(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x5687e8
    *(int64_t *)a1 = (int64_t)&g4;
    int64_t result = *(int64_t *)(a1 + 8); // 0x568806
    int64_t v2 = result - 24; // 0x56880a
    if (v2 == (int64_t)g5) {
        // 0x568817
        function_4efb50(a1);
        return __readfsqword(40) ^ v1;
    }
    int32_t * v3 = (int32_t *)(result - 8);
    int32_t v4 = *v3;
    *v3 = v4 - 1;
    if (g6 == 0) {
        // 0x568860
        return result;
    }
    if (v4 >= 0 != v4 != 0) {
        // 0x568850
        int64_t v5; // bp-17, 0x5687e0
        function_547e30(v2, &v5, v4);
    }
    // 0x568817
    function_4efb50(a1);
    return __readfsqword(40) ^ v1;
}

// Address range: 0x57a3c0 - 0x57a443
int64_t function_57a3c0(int64_t a1, int64_t a2) {
    // 0x57a3c0
    __readfsqword(40);
    int64_t result = *(int64_t *)(a1 + 24); // 0x57a3e1
    if (*(char *)result == (char)a2) {
        // 0x57a900
        return result;
    }
    // 0x57a3f7
    *(int32_t *)(a1 + 84) = 1;
    return result;
}
