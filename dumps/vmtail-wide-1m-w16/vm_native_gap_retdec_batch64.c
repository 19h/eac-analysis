/*
 * Targeted RetDec C for native executable gap queue batch 64.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x69166-0x691d8 rank=18 name=fcn.00069166 kind=r2_discovered bytes=114 uncovered=114
 *   0x4cf150-0x4cf1c2 rank=19 name=fcn.004cf150 kind=r2_discovered bytes=114 uncovered=114
 *   0x20eb4-0x20f25 rank=20 name=entry.init4 kind=native_discovered bytes=113 uncovered=113
 *   0x40e1f-0x40e90 rank=21 name=fcn.00040e1f kind=r2_discovered bytes=113 uncovered=113
 *   0x20792d-0x20799e rank=22 name=fcn.0020792d kind=r2_discovered bytes=113 uncovered=113
 *   0x4bfcd0-0x4bfd41 rank=23 name=fcn.004bfcd0 kind=r2_discovered bytes=113 uncovered=113
 *   0x4c30c0-0x4c3131 rank=24 name=fcn.004c30c0 kind=r2_discovered bytes=113 uncovered=113
 *   0x4c31c0-0x4c3231 rank=25 name=fcn.004c31c0 kind=r2_discovered bytes=113 uncovered=113
 *   0x25018-0x25088 rank=26 name=fcn.00025018 kind=r2_discovered bytes=112 uncovered=112
 *   0x4ac2a0-0x4ac310 rank=27 name=fcn.004ac2a0 kind=r2_discovered bytes=112 uncovered=112
 *   0x4c3140-0x4c31b0 rank=28 name=fcn.004c3140 kind=r2_discovered bytes=112 uncovered=112
 *   0x4c32f0-0x4c3360 rank=29 name=fcn.004c32f0 kind=r2_discovered bytes=112 uncovered=112
 *   0x4c33c0-0x4c3430 rank=30 name=fcn.004c33c0 kind=r2_discovered bytes=112 uncovered=112
 *   0x4c3490-0x4c3500 rank=31 name=fcn.004c3490 kind=r2_discovered bytes=112 uncovered=112
 *   0x4c3510-0x4c3580 rank=32 name=fcn.004c3510 kind=r2_discovered bytes=112 uncovered=112
 *   0x4f2ce0-0x4f2d65 rank=33 name=fcn.004f2ce0 kind=r2_discovered bytes=133 uncovered=112
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
extern int g23;
extern int g24;
extern int g25;
extern int g26;
extern int g27;
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
int pthread_once(int32_t *once_control, ...);
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

int64_t function_20792d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_20eb4(void);
int64_t function_221a8();
int64_t function_24ded();
int64_t function_25018(int64_t a1);
int64_t function_2562c();
int64_t function_25a28();
int64_t function_40e1f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48c8cc();
int64_t function_4ac0d0();
int64_t function_4ac2a0(int64_t a1, int64_t a2);
int64_t function_4bfaf0();
int64_t function_4bfcd0(int64_t a1, int64_t file_path);
int64_t function_4c30c0(int64_t a1, int64_t a2);
int64_t function_4c3140(int64_t a1, int64_t a2);
int64_t function_4c31c0(int64_t a1, int64_t a2);
int64_t function_4c32f0(int64_t a1, int64_t a2);
int64_t function_4c33c0(int64_t a1, int64_t a2);
int64_t function_4c3490(int64_t a1, int64_t a2);
int64_t function_4c3510(int64_t a1, int64_t a2);
int64_t function_4c5fc0();
int64_t function_4cf150(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4f2ca0();
int64_t function_4f2ce0(void);
int64_t function_542470();
int64_t function_68e3e();
int64_t function_69166(int64_t a1, int64_t a2);

// Address range: 0x20eb4 - 0x20f25
int64_t function_20eb4(void) {
    // 0x20eb4
    function_48c8cc(&g19);
    __cxa_atexit((void (*)(int64_t *))0x4a9f0, &g19, (int64_t *)0x849800);
    g22 = 0;
    *(int32_t *)&g23 = 0;
    __cxa_atexit((void (*)(int64_t *))0x4a2f6, &g22, &g18);
    g20 = 0;
    g21 = 0;
    int64_t result; // 0x20eb4
    return result;
}

// Address range: 0x25018 - 0x25088
int64_t function_25018(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 40); // 0x25021
    if (v1 == 0) {
        // 0x25069
        return function_221a8(a1);
    }
    int32_t * v2 = (int32_t *)(v1 + 8);
    int32_t v3 = *v2;
    int32_t v4 = v3 - 1;
    if (g17 == 0) {
        // 0x2503c
        *v2 = v4;
        if (v3 == 1) {
            int32_t * v5 = (int32_t *)(v1 + 12); // 0x2507d
            *v5 = *v5 - 1;
        }
        // 0x25069
        return function_221a8(a1);
    }
    // 0x25034
    *v2 = v4;
    if (v4 == 0) {
        int32_t * v6 = (int32_t *)(v1 + 12); // 0x25057
        *v6 = *v6 - 1;
    }
    // 0x25069
    return function_221a8(a1);
}

// Address range: 0x40e1f - 0x40e90
int64_t function_40e1f(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a1; // 0x40e1f
    int64_t v2 = (int64_t)&g2 + 24; // 0x40e26
    if (v1 >= 0) {
        int32_t v3 = v1 - 10; // 0x40e28
        v2 = v3 == 0 | v3 < 0 != (9 - v1 & v1) < 0 ? (0x100000000 * a1 >> 30) + (int64_t)&g2 : (int64_t)&g2 + 40;
    }
    int32_t v4 = v1 < 4 == (3 - v1 & v1) < 0 ? 0 : (int32_t)"le"; // 0x40e44
    int64_t v5 = (int64_t)(*(int32_t *)v2 | v4); // 0x40e4f
    int64_t v6 = (int32_t)a2 < 1 ? v5 : v5 | 0x1000;
    if (v1 == 0) {
        // 0x40e5e
        return v6 | 0x80000;
    }
    int32_t v7 = a3; // 0x40e64
    if (v7 == 1) {
        // 0x40e69
        return v6 | 0x20000;
    }
    if (v7 == 2) {
        // 0x40e74
        return v6 & 0xfffff000;
    }
    if (v7 == 4) {
        // 0x40e7f
        return v6 | 0x40000;
    }
    int64_t result = v7 != 3 ? v6 : v6 | (int64_t)(int32_t)&g1;
    return result;
}

// Address range: 0x69166 - 0x691d8
int64_t function_69166(int64_t a1, int64_t a2) {
    if (a2 == 0) {
        // 0x691b5
        function_542470("basic_string::_S_construct null not valid");
        // 0x691cc
        int64_t v1; // 0x69166
        *(int64_t *)v1 = (int64_t)&g25;
        return (int64_t)&g24;
    }
    int64_t v2 = function_24ded(a2); // 0x6917c
    int64_t result = (int64_t)&g24; // 0x69187
    int64_t v3 = (int64_t)&g25; // 0x69187
    if (v2 != 0) {
        int64_t v4 = function_68e3e(v2, 0); // 0x6918e
        v3 = v4 + 24;
        function_25a28(v3, a2, v2);
        result = function_2562c(v4, v2);
    }
    // 0x691cc
    *(int64_t *)a1 = v3;
    return result;
}

// Address range: 0x20792d - 0x20799b
int64_t function_20792d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x20792d
    int64_t v1; // 0x20792d
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x20792d
    int64_t v3 = v2 ? -4 : 4; // 0x207930
    int64_t v4; // 0x20792d
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    int64_t v6 = v4 & -256 | (int64_t)__asm_in((int16_t)a3); // 0x207938
    v4 = v6;
    int32_t * v7 = (int32_t *)v6; // 0x207939
    *v7 = *v7 | (int32_t)v6;
    char v8 = *(char *)-0x5b479fa3 + (char)(a5 / 256); // 0x207956
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x207956
    *(char *)-0x5b479fa3 = v8;
    if (v9 % 2 != 0) {
        // 0x20798e
        int64_t v10; // 0x20792d
        int64_t v11 = (int64_t)&v10; // 0x207995
        *(char *)(v3 + a1) = *(char *)(v3 + a2);
        return -255 * v11 & 0xff00 | v11 & -0xff08;
    }
    int64_t v12 = v4 + a5; // 0x20795e
    int64_t result = v12 & 0xffffffff; // 0x20795e
    char v13 = *(char *)(result + 94); // 0x207960
    char * v14 = (char *)(v1 - 87); // 0x207965
    *v14 = *v14 + (char)v12;
    int32_t * v15 = (int32_t *)(a5 + 0x13dc817); // 0x207968
    int32_t v16 = *v15; // 0x207968
    *v15 = v16 ^ (int32_t)(a4 & 0xffffff00 | (int64_t)(v13 | (char)a4));
    return result;
}

// Address range: 0x4ac2a0 - 0x4ac30e
int64_t function_4ac2a0(int64_t a1, int64_t a2) {
    // 0x4ac2a0
    int64_t v1; // bp-16, 0x4ac2a0
    int64_t v2; // bp-24, 0x4ac2a0
    int64_t result = function_4c5fc0(a2, &v1, &v2); // 0x4ac2b5
    if ((int32_t)result != 0) {
        // 0x4ac2be
        return result;
    }
    int64_t v3 = function_4ac0d0(a1, v1, v2); // 0x4ac2d5
    if (v2 == 0) {
        // 0x4ac301
        free((int64_t *)v1);
        return v3 & 0xffffffff;
    }
    int64_t v4 = v1; // 0x4ac2ec
    *(char *)v4 = 0;
    v4++;
    while (v4 != v1 + v2) {
        // 0x4ac2f0
        *(char *)v4 = 0;
        v4++;
    }
    // 0x4ac301
    free((int64_t *)v1);
    return v3 & 0xffffffff;
}

// Address range: 0x4bfcd0 - 0x4bfd41
int64_t function_4bfcd0(int64_t a1, int64_t file_path) {
    struct _IO_FILE * file = fopen((char *)file_path, "wb"); // 0x4bfce3
    if (file == NULL) {
        // 0x4bfd48
        return 0;
    }
    // 0x4bfcf0
    int64_t data; // bp-88, 0x4bfcd0
    int64_t v1 = function_4bfaf0(a1, &data, 64); // 0x4bfcfb
    if ((int32_t)v1 == 0) {
        // 0x4bfd20
        fwrite(&data, 1, 64, file);
        return 0xffffffc1;
    }
    // 0x4bfd06
    fclose(file);
    return v1 & 0xffffffff;
}

// Address range: 0x4c30c0 - 0x4c3128
int64_t function_4c30c0(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x4c3130
        int64_t result; // 0x4c30c0
        return result;
    }
    int64_t n = *(int64_t *)(a1 + 8); // 0x4c30d2
    int64_t str = (int64_t)&g4; // 0x4c30e7
    int64_t v1 = (int64_t)&g10;
    int64_t v2; // 0x4c30c0
    int64_t result2 = v2; // 0x4c3100
    int64_t str2; // 0x4c3102
    int32_t memcmp_rc; // 0x4c310a
    if (*(int64_t *)(v1 + 8) == n) {
        // 0x4c3102
        str2 = *(int64_t *)(a1 + 16);
        memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
        result2 = memcmp_rc;
        if (memcmp_rc == 0) {
            // 0x4c3113
            *(int64_t *)a2 = *(int64_t *)(v1 + 32);
            return 0;
        }
    }
    int64_t v3 = v1 + 40; // 0x4c30f0
    int64_t v4 = *(int64_t *)v3; // 0x4c30f4
    str = v4;
    while (v4 != 0) {
        // 0x4c30fc
        v1 = v3;
        if (*(int64_t *)(v1 + 8) == n) {
            // 0x4c3102
            str2 = *(int64_t *)(a1 + 16);
            memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
            result2 = memcmp_rc;
            if (memcmp_rc == 0) {
                // 0x4c3113
                *(int64_t *)a2 = *(int64_t *)(v1 + 32);
                return 0;
            }
        }
        // 0x4c30f0
        v3 = v1 + 40;
        v4 = *(int64_t *)v3;
        str = v4;
    }
    // 0x4c3130
    return result2;
}

// Address range: 0x4c3140 - 0x4c31a7
int64_t function_4c3140(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x4c31b0
        int64_t result; // 0x4c3140
        return result;
    }
    int64_t n = *(int64_t *)(a1 + 8); // 0x4c3152
    int64_t str = (int64_t)&g5; // 0x4c3167
    int64_t v1 = (int64_t)&g11;
    int64_t v2; // 0x4c3140
    int64_t result2 = v2; // 0x4c3180
    int64_t str2; // 0x4c3182
    int32_t memcmp_rc; // 0x4c318a
    if (*(int64_t *)(v1 + 8) == n) {
        // 0x4c3182
        str2 = *(int64_t *)(a1 + 16);
        memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
        result2 = memcmp_rc;
        if (memcmp_rc == 0) {
            // 0x4c3193
            *(int32_t *)a2 = *(int32_t *)(v1 + 32);
            return 0;
        }
    }
    int64_t v3 = v1 + 40; // 0x4c3170
    int64_t v4 = *(int64_t *)v3; // 0x4c3174
    str = v4;
    while (v4 != 0) {
        // 0x4c317c
        v1 = v3;
        if (*(int64_t *)(v1 + 8) == n) {
            // 0x4c3182
            str2 = *(int64_t *)(a1 + 16);
            memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
            result2 = memcmp_rc;
            if (memcmp_rc == 0) {
                // 0x4c3193
                *(int32_t *)a2 = *(int32_t *)(v1 + 32);
                return 0;
            }
        }
        // 0x4c3170
        v3 = v1 + 40;
        v4 = *(int64_t *)v3;
        str = v4;
    }
    // 0x4c31b0
    return result2;
}

// Address range: 0x4c31c0 - 0x4c3228
int64_t function_4c31c0(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x4c3230
        int64_t result; // 0x4c31c0
        return result;
    }
    int64_t n = *(int64_t *)(a1 + 8); // 0x4c31d2
    int64_t str = (int64_t)&g3; // 0x4c31e7
    int64_t v1 = (int64_t)&g12;
    int64_t v2; // 0x4c31c0
    int64_t result2 = v2; // 0x4c3200
    int64_t str2; // 0x4c3202
    int32_t memcmp_rc; // 0x4c320a
    if (*(int64_t *)(v1 + 8) == n) {
        // 0x4c3202
        str2 = *(int64_t *)(a1 + 16);
        memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
        result2 = memcmp_rc;
        if (memcmp_rc == 0) {
            // 0x4c3213
            *(int64_t *)a2 = *(int64_t *)(v1 + 24);
            return 0;
        }
    }
    int64_t v3 = v1 + 32; // 0x4c31f0
    int64_t v4 = *(int64_t *)v3; // 0x4c31f4
    str = v4;
    while (v4 != 0) {
        // 0x4c31fc
        v1 = v3;
        if (*(int64_t *)(v1 + 8) == n) {
            // 0x4c3202
            str2 = *(int64_t *)(a1 + 16);
            memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
            result2 = memcmp_rc;
            if (memcmp_rc == 0) {
                // 0x4c3213
                *(int64_t *)a2 = *(int64_t *)(v1 + 24);
                return 0;
            }
        }
        // 0x4c31f0
        v3 = v1 + 32;
        v4 = *(int64_t *)v3;
        str = v4;
    }
    // 0x4c3230
    return result2;
}

// Address range: 0x4c32f0 - 0x4c3357
int64_t function_4c32f0(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x4c3360
        int64_t result; // 0x4c32f0
        return result;
    }
    int64_t n = *(int64_t *)(a1 + 8); // 0x4c3302
    int64_t str = (int64_t)&g6; // 0x4c3317
    int64_t v1 = (int64_t)&g13;
    int64_t v2; // 0x4c32f0
    int64_t result2 = v2; // 0x4c3330
    int64_t str2; // 0x4c3332
    int32_t memcmp_rc; // 0x4c333a
    if (*(int64_t *)(v1 + 8) == n) {
        // 0x4c3332
        str2 = *(int64_t *)(a1 + 16);
        memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
        result2 = memcmp_rc;
        if (memcmp_rc == 0) {
            // 0x4c3343
            *(int32_t *)a2 = *(int32_t *)(v1 + 32);
            return 0;
        }
    }
    int64_t v3 = v1 + 40; // 0x4c3320
    int64_t v4 = *(int64_t *)v3; // 0x4c3324
    str = v4;
    while (v4 != 0) {
        // 0x4c332c
        v1 = v3;
        if (*(int64_t *)(v1 + 8) == n) {
            // 0x4c3332
            str2 = *(int64_t *)(a1 + 16);
            memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
            result2 = memcmp_rc;
            if (memcmp_rc == 0) {
                // 0x4c3343
                *(int32_t *)a2 = *(int32_t *)(v1 + 32);
                return 0;
            }
        }
        // 0x4c3320
        v3 = v1 + 40;
        v4 = *(int64_t *)v3;
        str = v4;
    }
    // 0x4c3360
    return result2;
}

// Address range: 0x4c33c0 - 0x4c3427
int64_t function_4c33c0(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x4c3430
        int64_t result; // 0x4c33c0
        return result;
    }
    int64_t n = *(int64_t *)(a1 + 8); // 0x4c33d2
    int64_t str = (int64_t)&g7; // 0x4c33e7
    int64_t v1 = (int64_t)&g14;
    int64_t v2; // 0x4c33c0
    int64_t result2 = v2; // 0x4c3400
    int64_t str2; // 0x4c3402
    int32_t memcmp_rc; // 0x4c340a
    if (*(int64_t *)(v1 + 8) == n) {
        // 0x4c3402
        str2 = *(int64_t *)(a1 + 16);
        memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
        result2 = memcmp_rc;
        if (memcmp_rc == 0) {
            // 0x4c3413
            *(int32_t *)a2 = *(int32_t *)(v1 + 32);
            return 0;
        }
    }
    int64_t v3 = v1 + 40; // 0x4c33f0
    int64_t v4 = *(int64_t *)v3; // 0x4c33f4
    str = v4;
    while (v4 != 0) {
        // 0x4c33fc
        v1 = v3;
        if (*(int64_t *)(v1 + 8) == n) {
            // 0x4c3402
            str2 = *(int64_t *)(a1 + 16);
            memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
            result2 = memcmp_rc;
            if (memcmp_rc == 0) {
                // 0x4c3413
                *(int32_t *)a2 = *(int32_t *)(v1 + 32);
                return 0;
            }
        }
        // 0x4c33f0
        v3 = v1 + 40;
        v4 = *(int64_t *)v3;
        str = v4;
    }
    // 0x4c3430
    return result2;
}

// Address range: 0x4c3490 - 0x4c34f7
int64_t function_4c3490(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x4c3500
        int64_t result; // 0x4c3490
        return result;
    }
    int64_t n = *(int64_t *)(a1 + 8); // 0x4c34a2
    int64_t str = (int64_t)&g8; // 0x4c34b7
    int64_t v1 = (int64_t)&g15;
    int64_t v2; // 0x4c3490
    int64_t result2 = v2; // 0x4c34d0
    int64_t str2; // 0x4c34d2
    int32_t memcmp_rc; // 0x4c34da
    if (*(int64_t *)(v1 + 8) == n) {
        // 0x4c34d2
        str2 = *(int64_t *)(a1 + 16);
        memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
        result2 = memcmp_rc;
        if (memcmp_rc == 0) {
            // 0x4c34e3
            *(int32_t *)a2 = *(int32_t *)(v1 + 32);
            return 0;
        }
    }
    int64_t v3 = v1 + 40; // 0x4c34c0
    int64_t v4 = *(int64_t *)v3; // 0x4c34c4
    str = v4;
    while (v4 != 0) {
        // 0x4c34cc
        v1 = v3;
        if (*(int64_t *)(v1 + 8) == n) {
            // 0x4c34d2
            str2 = *(int64_t *)(a1 + 16);
            memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
            result2 = memcmp_rc;
            if (memcmp_rc == 0) {
                // 0x4c34e3
                *(int32_t *)a2 = *(int32_t *)(v1 + 32);
                return 0;
            }
        }
        // 0x4c34c0
        v3 = v1 + 40;
        v4 = *(int64_t *)v3;
        str = v4;
    }
    // 0x4c3500
    return result2;
}

// Address range: 0x4c3510 - 0x4c3577
int64_t function_4c3510(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x4c3580
        int64_t result; // 0x4c3510
        return result;
    }
    int64_t n = *(int64_t *)(a1 + 8); // 0x4c3522
    int64_t str = (int64_t)&g9; // 0x4c3537
    int64_t v1 = (int64_t)&g16;
    int64_t v2; // 0x4c3510
    int64_t result2 = v2; // 0x4c3550
    int64_t str2; // 0x4c3552
    int32_t memcmp_rc; // 0x4c355a
    if (*(int64_t *)(v1 + 8) == n) {
        // 0x4c3552
        str2 = *(int64_t *)(a1 + 16);
        memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
        result2 = memcmp_rc;
        if (memcmp_rc == 0) {
            // 0x4c3563
            *(int32_t *)a2 = *(int32_t *)(v1 + 32);
            return 0;
        }
    }
    int64_t v3 = v1 + 40; // 0x4c3540
    int64_t v4 = *(int64_t *)v3; // 0x4c3544
    str = v4;
    while (v4 != 0) {
        // 0x4c354c
        v1 = v3;
        if (*(int64_t *)(v1 + 8) == n) {
            // 0x4c3552
            str2 = *(int64_t *)(a1 + 16);
            memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
            result2 = memcmp_rc;
            if (memcmp_rc == 0) {
                // 0x4c3563
                *(int32_t *)a2 = *(int32_t *)(v1 + 32);
                return 0;
            }
        }
        // 0x4c3540
        v3 = v1 + 40;
        v4 = *(int64_t *)v3;
        str = v4;
    }
    // 0x4c3580
    return result2;
}

// Address range: 0x4cf150 - 0x4cf1c2
int64_t function_4cf150(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 4); // 0x4cf156
    int32_t v2 = *v1; // 0x4cf156
    if (a2 == 0) {
        // 0x4cf1b8
        *(int32_t *)a1 = (int32_t)a1;
        *v1 = v2;
        return 0;
    }
    int64_t v3 = a1 + 8;
    unsigned char v4 = (char)v2; // 0x4cf15f
    int64_t v5 = a1 & 0xffffffff; // 0x4cf15f
    int64_t v6 = 0;
    v5 = (v5 + 1) % 256;
    char * v7 = (char *)(v5 + v3); // 0x4cf16e
    char v8 = *v7; // 0x4cf16e
    v4 += v8;
    char * v9 = (char *)(v3 + (int64_t)v4);
    char v10 = *v9; // 0x4cf17e
    *v7 = v10;
    *v9 = v8;
    char v11 = *(char *)(v3 + (int64_t)(v10 + v8)); // 0x4cf19a
    *(char *)(v6 + a4) = v11 ^ *(char *)(v6 + a3);
    int64_t v12 = v6 + 1; // 0x4cf1a3
    while (v12 != a2) {
        // 0x4cf160
        v6 = v12;
        v5 = (v5 + 1) % 256;
        v7 = (char *)(v5 + v3);
        v8 = *v7;
        v4 += v8;
        v9 = (char *)(v3 + (int64_t)v4);
        v10 = *v9;
        *v7 = v10;
        *v9 = v8;
        v11 = *(char *)(v3 + (int64_t)(v10 + v8));
        *(char *)(v6 + a4) = v11 ^ *(char *)(v6 + a3);
        v12 = v6 + 1;
    }
    // 0x4cf1ac
    *(int32_t *)a1 = (int32_t)v5;
    *v1 = (int32_t)v4;
    return 0;
}

// Address range: 0x4f2ce0 - 0x4f2d45
int64_t function_4f2ce0(void) {
    // 0x4f2ce0
    if (g17 == 0) {
        // 0x4f2d18
        if (g27 == 0) {
            // 0x4f2d40
            return function_4f2ca0();
        }
    } else {
        // 0x4f2cea
        pthread_once((int32_t *)&g26, (void (*)())0x4f2ca0);
        if (g27 == 0) {
            // 0x4f2d30
            return function_4f2ca0();
        }
    }
    // 0x4f2d0e
    return (int64_t)&g27;
}
