/*
 * Targeted RetDec C for native executable gap queue batch 68.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4d48e0-0x4d4948 rank=20 name=fcn.004d48e0 kind=r2_discovered bytes=104 uncovered=104
 *   0x52cbf0-0x52cc58 rank=21 name=fcn.0052cbf0 kind=r2_discovered bytes=104 uncovered=104
 *   0x2ae58-0x2aebf rank=22 name=fcn.0002ae58 kind=r2_discovered bytes=103 uncovered=103
 *   0x4e488-0x4e4ef rank=23 name=fcn.0004e488 kind=r2_discovered bytes=103 uncovered=103
 *   0x620ac-0x62113 rank=24 name=fcn.000620ac kind=r2_discovered bytes=103 uncovered=103
 *   0x286264-0x2862cb rank=25 name=fcn.00286264 kind=r2_discovered bytes=103 uncovered=103
 *   0x48d92a-0x48d991 rank=26 name=fcn.0048d92a kind=r2_discovered bytes=103 uncovered=103
 *   0x49e410-0x49e477 rank=27 name=fcn.0049e410 kind=r2_discovered bytes=103 uncovered=103
 *   0x4efd30-0x4efd97 rank=28 name=fcn.004efd30 kind=r2_discovered bytes=103 uncovered=103
 *   0x4ff3f0-0x4ff457 rank=29 name=fcn.004ff3f0 kind=r2_discovered bytes=103 uncovered=103
 *   0x52d5a0-0x52d607 rank=30 name=fcn.0052d5a0 kind=r2_discovered bytes=103 uncovered=103
 *   0x564e30-0x564e97 rank=31 name=method.std::__iosfail_type_info.virtual_32 kind=native_discovered bytes=103 uncovered=103
 *   0x2a56d-0x2a5d3 rank=32 name=fcn.0002a56d kind=r2_discovered bytes=102 uncovered=102
 *   0x44b6c-0x44bd2 rank=33 name=fcn.00044b6c kind=r2_discovered bytes=102 uncovered=102
 *   0x3a940e-0x3a9474 rank=34 name=fcn.003a940e kind=r2_discovered bytes=102 uncovered=102
 *   0x48f972-0x48f9d8 rank=35 name=fcn.0048f972 kind=r2_discovered bytes=102 uncovered=102
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

int64_t function_1ff50();
int64_t function_20210();
int64_t function_203b0();
int64_t function_20550();
int64_t function_24ded();
int64_t function_286264(int64_t a1);
int64_t function_2a56d(void);
int64_t function_2ae58(int64_t str, int64_t str2);
int64_t function_3a93cb();
int64_t function_3a93fa();
int64_t function_3a93fb();
int64_t function_3a940e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44b6c(int64_t a1);
int64_t function_48d92a(int64_t a1, int64_t a2);
int64_t function_48f4fd();
int64_t function_48f972(int64_t a1);
int64_t function_49e410(int64_t a1, int64_t a2);
int64_t function_4d4560();
int64_t function_4d4710();
int64_t function_4d4740();
int64_t function_4d48e0(int64_t a1, int64_t a2);
int64_t function_4e488(int64_t a1, int64_t a2);
int64_t function_4e7d8();
int64_t function_4eea30();
int64_t function_4efd30(int64_t a1);
int64_t function_4efd90(void);
int64_t function_4ff3f0(int64_t a1, int64_t a2);
int64_t function_52cbf0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_52d5a0(int64_t a1, int64_t str);
int64_t function_542650();
int64_t function_564e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6150e();
int64_t function_620ac(int64_t a1);
int64_t function_6311a();
int64_t function_63150();
int64_t function_72994();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x2a56d - 0x2a5d3
int64_t function_2a56d(void) {
    // 0x2a56d
    if (*(char *)&g6 != 0) {
        // 0x2a5c2
        return (int64_t)&g7;
    }
    // 0x2a577
    if ((int32_t)function_20550(&g6) != 0) {
        // 0x2a58b
        function_6150e(&g7, 1);
        function_1ff50(&g6);
        __cxa_atexit((void (*)(int64_t *))0x2aeea, &g7, (int64_t *)0x849800);
    }
    // 0x2a5c2
    return (int64_t)&g7;
}

// Address range: 0x2ae58 - 0x2aebf
int64_t function_2ae58(int64_t str, int64_t str2) {
    uint64_t v1 = function_24ded(str2); // 0x2ae6b
    uint64_t v2 = *(int64_t *)(str - 24); // 0x2ae70
    int64_t n = v2 < v1 ? v2 : v1; // 0x2ae7e
    if (n != 0) {
        int32_t memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n); // 0x2ae8f
        if (memcmp_rc != 0) {
            // 0x2aeb6
            return memcmp_rc;
        }
    }
    uint64_t v3 = v2 - v1; // 0x2ae98
    int64_t result = 0x7fffffff; // 0x2aea7
    if (v3 <= 0x7fffffff) {
        int64_t v4 = v3 + 0x80000000; // 0x2aeac
        result = v4 < 0 == ((v4 ^ v3) & (v3 ^ -0x8000000000000000)) < 0 ? v3 & 0xffffffff : 0x80000000;
    }
    // 0x2aeb6
    return result;
}

// Address range: 0x44b6c - 0x44bd2
int64_t function_44b6c(int64_t a1) {
    int64_t v1 = a1 + (int64_t)&g9; // 0x44b77
    *(int64_t *)a1 = (int64_t)&g4;
    int64_t v2 = a1 + (int64_t)&g8; // 0x44b85
    if (*(int64_t *)v1 != 0) {
        int64_t v3 = a1 + 8; // 0x44b8e
        while (v3 + 416 != v2) {
            // 0x44b92
            v3 += 416;
        }
    }
    // 0x44ba7
    sem_destroy((int64_t *)(a1 + (int64_t)&g10));
    int64_t v4 = v1; // 0x44bbf
    v4 -= 40;
    int64_t result = function_72994(v4); // 0x44bc6
    while (v2 != v4) {
        // 0x44bbf
        v4 -= 40;
        result = function_72994(v4);
    }
    // 0x44bcd
    return result;
}

// Address range: 0x4e488 - 0x4e4ef
int64_t function_4e488(int64_t a1, int64_t a2) {
    int64_t v1 = a2; // bp-48, 0x4e496
    int64_t v2 = __readfsqword(40); // 0x4e4a2
    int64_t v3; // bp-40, 0x4e488
    function_729b6(&v3);
    function_4e7d8(a1 + 160, &v1);
    function_729ce(&v3);
    int64_t result = 0; // 0x4e4e1
    if (v2 != __readfsqword(40)) {
        // 0x4e4e3
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x4e4e8
    return result;
}

// Address range: 0x620ac - 0x62113
int64_t function_620ac(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x620c2
    int64_t v2; // bp-40, 0x620ac
    function_729b6(&v2);
    function_63150(a1 + 160);
    function_6311a(a1 + 280);
    function_729ce(&v2);
    int64_t result = 0; // 0x62105
    if (v1 != __readfsqword(40)) {
        // 0x62107
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x6210c
    return result;
}

// Address range: 0x286264 - 0x2862c3
int64_t function_286264(int64_t a1) {
    // 0x286264
    int64_t v1; // 0x286264
    int64_t v2 = v1 + 0xcd5a599a & 0xffffffff;
    int64_t v3; // 0x286264
    char * v4 = (char *)(v2 - 0x4b71957c + 4 * v3); // 0x28627a
    char v5 = *v4; // 0x28627a
    *v4 = (char)((int32_t)v2 < 0x21390001) + (char)v2 + v5;
    int64_t v6; // 0x286264
    int64_t v7 = v6 + v2; // 0x28628d
    int64_t v8 = (int64_t)(*(int32_t *)-0xba5393d + (int32_t)v3); // 0x28628f
    int64_t v9 = v2 & 0xd304e10a | 0x2cfb1ef5; // 0x286295
    int32_t * v10 = (int32_t *)v9; // 0x28629e
    *v10 = *v10 - (int32_t)v9;
    int32_t * v11 = (int32_t *)(8 * v8 + (v7 & 0xffffffff)); // 0x2862a3
    *v11 = *v11 + (int32_t)v7;
    int64_t v12 = 0x10000 * (int32_t)unknown_ffffffff8d401ab3() >> 16; // 0x2862b8
    int64_t result = unknown_3d2a4ac0(); // 0x2862b9
    int32_t * v13 = (int32_t *)v12; // 0x2862bf
    int32_t v14 = *v13 + (int32_t)a1; // 0x2862bf
    unsigned char v15 = llvm_ctpop_i8((char)v14); // 0x2862bf
    *v13 = v14;
    while (v15 % 2 != 0) {
        // 0x28626e
        v2 = result;
        v4 = (char *)(v2 - 0x4b71957c + 4 * v8);
        v5 = *v4;
        *v4 = (char)((int32_t)v2 < 0x21390001) + (char)v2 + v5;
        v7 = v12 + v2;
        v8 = (int64_t)(*(int32_t *)-0xba5393d + (int32_t)v8);
        v9 = v2 & 0xd304e10a | 0x2cfb1ef5;
        v10 = (int32_t *)v9;
        *v10 = *v10 - (int32_t)v9;
        v11 = (int32_t *)(8 * v8 + (v7 & 0xffffffff));
        *v11 = *v11 + (int32_t)v7;
        v12 = 0x10000 * (int32_t)unknown_ffffffff8d401ab3() >> 16;
        result = unknown_3d2a4ac0();
        v13 = (int32_t *)v12;
        v14 = *v13 + (int32_t)a1;
        v15 = llvm_ctpop_i8((char)v14);
        *v13 = v14;
    }
    // 0x2862c3
    return result;
}

// Address range: 0x3a940e - 0x3a944f
int64_t function_3a940e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a940e
    int64_t v1; // 0x3a940e
    int64_t v2 = v1;
    int64_t v3 = a3;
    char v4 = (uint64_t)v1 / 256; // 0x3a9410
    *(char *)0x35db9417 = *(char *)0x35db9417 + v4;
    int64_t v5 = 2 * v2 & 254 | v2 & -256; // 0x3a941a
    if ((1 - v4 & v4) >= 0) {
        v5 = function_3a93cb();
    }
    // 0x3a941c
    bool v6; // 0x3a940e
    int64_t v7 = v6 ? -1 : 1; // 0x3a941c
    int64_t v8 = v7 + a2; // 0x3a941c
    int64_t v9 = 0x100000000 * a3 >> 32; // 0x3a941d
    int64_t v10 = -80 * v9; // 0x3a941d
    int32_t v11 = v10; // 0x3a941d
    int32_t * v12 = (int32_t *)v8; // 0x3a9420
    int32_t v13 = *v12; // 0x3a9420
    int32_t v14 = v10 != -0x5000000000 * v9 >> 32; // 0x3a9420
    int32_t v15 = (v14 | v11) + v13; // 0x3a9420
    int32_t v16 = v15 + v14; // 0x3a9420
    *v12 = v15;
    int64_t result; // 0x3a940e
    if (((v16 ^ v13) & (v16 ^ v11)) >= 0) {
        // 0x3a944d
        result = v5;
        if (v15 >= 0) {
            result = function_3a93fa();
        }
        // 0x3a943a
        return result;
    }
    // 0x3a9424
    unknown_ffffffffd64cfc2a(v7 + a1, v8);
    *(char *)-0x1b092cd0 = *(char *)-0x1b092cd0 + v4;
    char v17 = *(char *)&v3 + 104; // 0x3a9436
    *(char *)v3 = v17;
    result = 0x20020168;
    if (v17 < 0) {
        result = function_3a93fb();
    }
    // 0x3a943a
    return result;
}

// Address range: 0x48d92a - 0x48d991
int64_t function_48d92a(int64_t a1, int64_t a2) {
    char v1 = *(char *)a1; // 0x48d938
    char v2 = v1; // 0x48d93e
    int64_t v3 = a1; // 0x48d93e
    int64_t v4 = a2; // 0x48d93e
    int64_t v5 = 0; // 0x48d93e
    if (v1 != 0) {
        int64_t v6 = a2;
        int64_t v7 = v2;
        unsigned char v8 = *(char *)v6; // 0x48d940
        v4 = v6;
        v5 = v7;
        while (v8 != 0) {
            // 0x48d949
            if (v2 != v8) {
                int64_t v9 = function_48f4fd(v7); // 0x48d951
                v4 = v6;
                v5 = v7;
                if ((int32_t)v9 != (int32_t)function_48f4fd((int64_t)v8)) {
                    // break -> 0x48d96f
                    break;
                }
            }
            // 0x48d967
            v3++;
            int64_t v10 = v6 + 1; // 0x48d96a
            v2 = *(char *)v3;
            v4 = v10;
            v5 = 0;
            if (v2 == 0) {
                // break -> 0x48d96f
                break;
            }
            v6 = v10;
            v7 = v2;
            v8 = *(char *)v6;
            v4 = v6;
            v5 = v7;
        }
    }
    int64_t v11 = function_48f4fd(v5); // 0x48d972
    int64_t v12 = function_48f4fd((int64_t)*(char *)v4); // 0x48d97e
    return v12 & -256 | (int64_t)((int32_t)v11 == (int32_t)v12);
}

// Address range: 0x48f972 - 0x48f9d8
int64_t function_48f972(int64_t a1) {
    // 0x48f972
    int128_t v1; // 0x48f972
    int128_t v2 = v1;
    int64_t v3 = __readfsqword(40); // 0x48f97d
    int128_t tp; // bp-32, 0x48f972
    clock_gettime(0, (struct timespec *)&tp);
    int64_t v4 = __readfsqword(40); // 0x48f9c3
    int64_t result = (0x343fd * ((int64_t)tp * (int64_t)&g1 + (int64_t)((0x8000000000000000 * (int128_t)((int64_t)v2 >> 63) | v2 & 0xffffffffffffffc0) / 0xf4240)) + 0x269ec3) / 0x10000; // 0x48f9cc
    if (v3 != v4) {
        // 0x48f9ce
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x48f9d3
    return result;
}

// Address range: 0x49e410 - 0x49e474
int64_t function_49e410(int64_t a1, int64_t a2) {
    // 0x49e410
    if (*(int32_t *)(a1 + 24) != 3) {
        // 0x49e452
        return 0xffff9a00;
    }
    int32_t v1 = a2; // 0x49e41b
    if (v1 == 2) {
        // 0x49e458
        *(int64_t *)(*(int64_t *)(a1 + 96) + (int64_t)&g3) = 0x494aa0;
        return 0;
    }
    if (v1 <= 2) {
        if (v1 != 1) {
            // 0x49e452
            return 0xffff9a00;
        }
        // 0x49e458
        *(int64_t *)(*(int64_t *)(a1 + 96) + (int64_t)&g3) = 0x494aa0;
        return 0;
    }
    if (v1 == 4) {
        // 0x49e470
        return *(int64_t *)(a1 + 96);
    }
    if (v1 != 5) {
        // 0x49e452
        return 0xffff9a00;
    }
    // 0x49e42c
    *(int64_t *)(*(int64_t *)(a1 + 96) + (int64_t)&g3) = 0x494870;
    return 0;
}

// Address range: 0x4d48e0 - 0x4d4948
int64_t function_4d48e0(int64_t a1, int64_t a2) {
    int64_t result = function_4d4740(); // 0x4d48f9
    if ((int32_t)result < 0) {
        // 0x4d4935
        return result;
    }
    int64_t v1 = 0x100000000 * result >> 32; // 0x4d4902
    int64_t v2 = function_4d4560(a1, a2, v1); // 0x4d490e
    int64_t result2 = v2; // 0x4d4915
    if ((int32_t)v2 >= 0) {
        int64_t v3 = function_4d4710(a1, a2, 6); // 0x4d4927
        result2 = ((int32_t)v3 >= 0 ? v2 + v1 : 0) + v3 & 0xffffffff;
    }
    // 0x4d4935
    return result2;
}

// Address range: 0x4efd30 - 0x4efd90
// From class:    std::bad_alloc
// Type:          constructor
int64_t function_4efd30(int64_t a1) {
    int64_t * mem = malloc((int32_t)(a1 == 0 ? 1 : a1)); // 0x4efd43
    // 0x4efd30
    while (mem == NULL) {
        // 0x4efd50
        if (function_4eea30() == 0) {
            int64_t v1 = function_20210(8); // 0x4efd63
            *(int64_t *)v1 = (int64_t)&g5;
            return function_203b0(v1, 0x843220, &g2);
        }
        mem = malloc((int32_t)(a1 == 0 ? 1 : a1));
    }
    // 0x4efd4d
    return (int64_t)mem;
}

// Address range: 0x4efd90 - 0x4efd97
// From class:    std::bad_alloc
// Type:          virtual member function
int64_t function_4efd90(void) {
    // 0x4efd90
    return (int64_t)"std::bad_alloc";
}

// Address range: 0x4ff3f0 - 0x4ff455
int64_t function_4ff3f0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)*(int64_t *)(a1 + 200); // 0x4ff403
    if ((char)v1 == 0) {
        int32_t v2 = *(int32_t *)(a1 + 232); // 0x4ff44f
        return (int32_t)(*(int64_t *)(a1 + 208) + v1) - v2;
    }
    int32_t v3 = *(int32_t *)(a1 + 24); // 0x4ff411
    return (int32_t)*(int64_t *)(a1 + 16) - v3;
}

// Address range: 0x52cbf0 - 0x52cc55
int64_t function_52cbf0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x52cbf1
    if (v1 < a4) {
        // 0x52cc3a
        return function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::copy", a4, v1);
    }
    uint64_t v2 = v1 - a4; // 0x52cc00
    int64_t result = v2 > a3 ? a3 : v2; // 0x52cc06
    if (result == 0) {
        // 0x52cc23
        return result;
    }
    int64_t v3 = a4 + a1; // 0x52cc0f
    if (result == 1) {
        // 0x52cc30
        *(char *)a2 = *(char *)v3;
        return 1;
    }
    // 0x52cc18
    memcpy((int64_t *)a2, (int64_t *)v3, (int32_t)result);
    // 0x52cc23
    return result;
}

// Address range: 0x52d5a0 - 0x52d607
int64_t function_52d5a0(int64_t a1, int64_t str) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x52d5b0
    uint64_t len = (int64_t)strlen((char *)str); // 0x52d5b7
    int64_t n = v1 < len ? v1 : len; // 0x52d5c5
    if (n != 0) {
        int64_t * str2 = (int64_t *)str; // 0x52d5d5
        int32_t memcmp_rc = memcmp(str2, str2, (int32_t)n); // 0x52d5d5
        if (memcmp_rc != 0) {
            // 0x52d5fc
            return memcmp_rc;
        }
    }
    uint64_t v2 = v1 - len; // 0x52d5de
    int64_t result = 0x7fffffff; // 0x52d5ed
    if (v2 <= 0x7fffffff) {
        int64_t v3 = v2 + 0x80000000; // 0x52d5f2
        result = v3 < 0 == ((v3 ^ v2) & (v2 ^ -0x8000000000000000)) < 0 ? v2 & 0xffffffff : 0x80000000;
    }
    // 0x52d5fc
    return result;
}

// Address range: 0x564e30 - 0x564e97
int64_t function_564e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x564e3d
    int64_t str2 = *(int64_t *)(a2 + 8); // 0x564e41
    if (v1 == str2) {
        // 0x564e69
        return 1;
    }
    char * str = (char *)v1; // 0x564e4a
    if (*str != 42) {
        // 0x564e58
        if (strcmp(str, (char *)str2) == 0) {
            // 0x564e69
            return 1;
        }
    }
    // 0x564e78
    if ((int32_t)a4 < 4) {
        // 0x564e7f
        return *(int64_t *)(str2 + 40);
    }
    // 0x564e69
    return 0;
}
