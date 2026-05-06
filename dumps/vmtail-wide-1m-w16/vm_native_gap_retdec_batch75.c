/*
 * Targeted RetDec C for native executable gap queue batch 75.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4c1e10-0x4c1e67 rank=20 name=fcn.004c1e10 kind=r2_discovered bytes=87 uncovered=87
 *   0x4d7e50-0x4d7ea7 rank=21 name=sym.blake3_hasher_init kind=symbol_named bytes=87 uncovered=87
 *   0x4fd330-0x4fd387 rank=22 name=method.std::basic_filebuf_char__std::char_traits_char___.virtual_24 kind=native_discovered bytes=87 uncovered=87
 *   0x4fd390-0x4fd3e7 rank=23 name=method.std::basic_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_24 kind=native_discovered bytes=87 uncovered=87
 *   0x54ceb0-0x54cf07 rank=24 name=fcn.0054ceb0 kind=r2_discovered bytes=87 uncovered=87
 *   0x41bfb-0x41c51 rank=25 name=fcn.00041bfb kind=r2_discovered bytes=86 uncovered=86
 *   0x4c367-0x4c3bd rank=26 name=fcn.0004c367 kind=r2_discovered bytes=86 uncovered=86
 *   0x6876e-0x687c4 rank=27 name=fcn.0006876e kind=r2_discovered bytes=86 uncovered=86
 *   0x37d48-0x37e33 rank=28 name=fcn.00037d48 kind=r2_discovered bytes=235 uncovered=85
 *   0x48f7e4-0x48f839 rank=29 name=fcn.0048f7e4 kind=r2_discovered bytes=85 uncovered=85
 *   0x4d92b0-0x4d9305 rank=31 name=fcn.004d92b0 kind=r2_discovered bytes=85 uncovered=85
 *   0x25646-0x2569a rank=32 name=fcn.00025646 kind=r2_discovered bytes=84 uncovered=84
 *   0x5f47b-0x5f4cf rank=33 name=fcn.0005f47b kind=r2_discovered bytes=84 uncovered=84
 *   0x6150e-0x61562 rank=34 name=fcn.0006150e kind=r2_discovered bytes=84 uncovered=84
 *   0x568460-0x5684b4 rank=35 name=fcn.00568460 kind=r2_discovered bytes=84 uncovered=84
 *   0x568730-0x568784 rank=36 name=fcn.00568730 kind=r2_discovered bytes=84 uncovered=84
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
extern int g10;
extern int g11;
extern int g12;
extern int g13;
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

int64_t function_2508e();
int64_t function_254fe();
int64_t function_25622();
int64_t function_25646(int64_t a1);
int64_t function_25e90();
int64_t function_36902();
int64_t function_37d48(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_415ae();
int64_t function_418c6();
int64_t function_41bfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44ae0();
int64_t function_48f7e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4a8c6();
int64_t function_4c1e10(int64_t a1, int64_t a2);
int64_t function_4c367(int64_t a1, int64_t a2);
int64_t function_4d8e90();
int64_t function_4d92b0(void);
int64_t function_4e1a6();
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f15a0();
int64_t function_4fd330(int64_t result, int64_t a2, int64_t a3);
int64_t function_4fd390(int64_t result, int64_t a2, int64_t a3);
int64_t function_542590();
int64_t function_54ceb0(int64_t a1);
int64_t function_565970();
int64_t function_568460(int64_t a1);
int64_t function_568730(int64_t a1);
int64_t function_5f47b(int64_t result, int64_t a2, int64_t a3);
int64_t function_613d6();
int64_t function_613f0();
int64_t function_61468();
int64_t function_6150e(int64_t a1, int64_t a2);
int64_t function_686a0();
int64_t function_6876e(int64_t a1, int64_t a2);
int64_t function_7293a();

// Address range: 0x25646 - 0x2569a
int64_t function_25646(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x2564a
    int64_t v2 = *v1; // 0x2564a
    int64_t * v3 = (int64_t *)(a1 + 32); // 0x2564e
    int64_t v4 = function_254fe(v2);
    int64_t result; // 0x25646
    if (v2 == *v3 - 24) {
        int64_t * v5 = (int64_t *)(a1 + 24); // 0x2566c
        function_4eeb50(*v5);
        int64_t * v6 = (int64_t *)(a1 + 40); // 0x25675
        int64_t v7 = *v6 + 8; // 0x25679
        int64_t v8 = *(int64_t *)v7; // 0x2567d
        *v6 = v7;
        *v5 = v8;
        *v1 = v8;
        *v3 = v8 + 504;
        result = v8;
    } else {
        // 0x2565b
        *v1 = *v1 + 24;
        result = v4;
    }
    // 0x25698
    return result;
}

// Address range: 0x37d48 - 0x37e33
int64_t function_37d48(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x37d48
    uint32_t v2 = *v1; // 0x37d48
    if (v2 >= 0) {
        // 0x37d4f
        if ((int64_t)g6 != a1) {
            // 0x37d58
            *v1 = v2 + 1;
        }
        // 0x37d6e
        return a1 + 24;
    }
    uint64_t v3 = *(int64_t *)(a1 + 8); // 0x37d89
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x37d92
        function_542590("basic_string::_S_create");
    }
    int64_t v4 = a1; // 0x37da1
    if (v3 < a1) {
        uint64_t v5 = 2 * v3; // 0x37da3
        v4 = v5 > a1 ? v5 : a1;
    }
    uint64_t v6 = v4 + 57; // 0x37dae
    int64_t v7 = v4; // 0x37db8
    if (v6 > (int64_t)&g1 && v3 < v4) {
        uint64_t v8 = v4 + (int64_t)&g1 - (v6 & (int64_t)(int32_t)&g13); // 0x37dcb
        v7 = v8 < 0x3ffffffffffffff9 ? v8 : 0x3ffffffffffffff9;
    }
    int64_t v9 = v7 + 25; // 0x37ddf
    int64_t v10 = function_4efd30(v9); // 0x37de3
    *(int64_t *)(v10 + 8) = v7;
    int64_t result = v10 + 24; // 0x37df0
    *(int32_t *)(v10 + 16) = 0;
    if (v9 != 0) {
        char * v11 = (char *)(a1 + 24);
        if (v9 != 1) {
            // 0x37e0e
            __asm_rep_movsb_memcpy((char *)result, v11, v9);
        } else {
            // 0x37e06
            *(char *)result = *v11;
        }
    }
    // 0x37e1a
    if (v10 != (int64_t)g6) {
        // 0x37e23
        *(int64_t *)v10 = v9;
        *(char *)(result + v9) = 0;
    }
    // 0x37e2c
    return result;
}

// Address range: 0x41bfb - 0x41c51
int64_t function_41bfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_415ae(); // 0x41c1b
    if ((int32_t)v1 < 0) {
        // 0x41c46
        return 0;
    }
    // 0x41c24
    return function_418c6(a1, v1 & 0xffffffff, a3, a4, (int32_t)a5, a6);
}

// Address range: 0x4c367 - 0x4c3bd
int64_t function_4c367(int64_t a1, int64_t a2) {
    // 0x4c367
    int64_t result; // 0x4c367
    if (a1 == a2) {
        // 0x4c3b5
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x4c37c
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x4c380
    int64_t v3 = *v2; // 0x4c380
    int64_t v4 = v3; // 0x4c387
    int64_t v5 = v1; // 0x4c387
    int64_t v6; // 0x4c38d
    if (v1 != v3) {
        v6 = v4 + 16;
        function_2508e(v4 + 8);
        v4 = v6;
        while (v1 != v6) {
            // 0x4c389
            v6 = v4 + 16;
            function_2508e(v4 + 8);
            v4 = v6;
        }
        // 0x4c384
        v5 = *v2;
    }
    int64_t v7 = v5; // 0x4c398
    if (v7 != 0) {
        // 0x4c3a1
        function_4eeb50(v7);
    }
    int64_t v8 = a1 + 48; // 0x4c3aa
    function_2508e(a1 + 8);
    while (v8 != a2) {
        int64_t v9 = v8;
        v1 = *(int64_t *)(v9 + 24);
        v2 = (int64_t *)(v9 + 16);
        v3 = *v2;
        v4 = v3;
        v5 = v1;
        if (v1 != v3) {
            v6 = v4 + 16;
            function_2508e(v4 + 8);
            v4 = v6;
            while (v1 != v6) {
                // 0x4c389
                v6 = v4 + 16;
                function_2508e(v4 + 8);
                v4 = v6;
            }
            // 0x4c384
            v5 = *v2;
        }
        // 0x4c398
        v7 = v5;
        if (v7 != 0) {
            // 0x4c3a1
            function_4eeb50(v7);
        }
        // 0x4c3a6
        v8 = v9 + 48;
        function_2508e(v9 + 8);
    }
    // 0x4c3b5
    return result;
}

// Address range: 0x5f47b - 0x5f4cf
int64_t function_5f47b(int64_t result, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)function_4a8c6(a2, a3); // 0x5f4b6
    *(int64_t *)result = *v1;
    *v1 = (int64_t)&g10;
    return result;
}

// Address range: 0x6150e - 0x61562
int64_t function_6150e(int64_t a1, int64_t a2) {
    // 0x6150e
    *(int64_t *)(a1 + 8) = a2;
    *(int64_t *)(a1 + 16) = function_613d6(a2);
    *(int64_t *)(a1 + 48) = 0x7fffffffffffffff;
    *(int64_t *)(a1 + 40) = 60;
    function_44ae0(a1 + 64);
    function_7293a(a1 + (int64_t)&g11);
    function_61468(a1 + (int64_t)&g12);
    return function_613f0(a1);
}

// Address range: 0x6876e - 0x687c4
int64_t function_6876e(int64_t a1, int64_t a2) {
    // 0x6876e
    int64_t result; // 0x6876e
    if (*(int32_t *)(a1 + 116) != 1) {
        // 0x687bf
        return result;
    }
    // 0x68774
    function_686a0();
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x68789
    int64_t * v2 = (int64_t *)(a1 + 128); // 0x6878d
    *(int64_t *)(a1 + 120) = a2;
    if (v1 == *v2) {
        // 0x687bf
        return result;
    }
    if (v1 != 0) {
        // 0x6879f
        function_36902(v1);
    }
    int64_t v3 = *v2; // 0x687a7
    if (v3 != 0) {
        // 0x687b3
        function_4e1a6(v3);
    }
    // 0x687b8
    *v2 = v1;
    // 0x687bf
    return result;
}

// Address range: 0x48f7e4 - 0x48f839
int64_t function_48f7e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 - 24; // 0x48f7f0
    int64_t v2 = *(int64_t *)v1; // 0x48f7f0
    int32_t * v3 = (int32_t *)(a1 - 8);
    if (*v3 < 0) {
        // 0x48f82e
        return v2 - 1 + a1;
    }
    // 0x48f7ff
    if (v1 == (int64_t)g6) {
        // 0x48f82e
        return v2 - 1 + v1;
    }
    // 0x48f80c
    int32_t * v4; // 0x48f7e4
    int64_t v5; // 0x48f7e4
    if ((char)function_25622(v1) == 0) {
        // 0x48f80c
        v4 = (int32_t *)(a1 - 32);
        v5 = v1;
    } else {
        // 0x48f815
        function_25e90(a1, 0, 0, 0);
        v4 = v3;
        v5 = a1;
    }
    // 0x48f823
    *v4 = -1;
    // 0x48f82e
    return v2 - 1 + v5;
}

// Address range: 0x4c1e10 - 0x4c1e67
int64_t function_4c1e10(int64_t a1, int64_t a2) {
    // 0x4c1e10
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
    int64_t result = *(int64_t *)(a2 + 80); // 0x4c1e5e
    *(int64_t *)(a1 + 80) = result;
    return result;
}

// Address range: 0x4d7e50 - 0x4d7ea7
int64_t blake3_hasher_init(int64_t a1) {
    int128_t v1 = __asm_movdqa(g3); // 0x4d7e54
    int128_t v2 = __asm_movdqa(g2); // 0x4d7e5c
    *(int64_t *)(a1 + 64) = 0;
    *(int16_t *)(a1 + 136) = 0;
    __asm_movups(*(int128_t *)(a1 + 16), v1);
    __asm_movups(*(int128_t *)(a1 + 48), v1);
    int128_t v3 = __asm_pxor(v1, v1); // 0x4d7e7d
    *(char *)(a1 + 138) = 0;
    *(char *)(a1 + 144) = 0;
    int64_t v4; // 0x4d7e50
    __asm_movups(*(int128_t *)&v4, v2);
    __asm_movups(*(int128_t *)(a1 + 32), v2);
    __asm_movups(*(int128_t *)(a1 + 72), v3);
    __asm_movups(*(int128_t *)(a1 + 88), v3);
    __asm_movups(*(int128_t *)(a1 + 104), v3);
    __asm_movups(*(int128_t *)(a1 + 120), v3);
    return 0;
}

// Address range: 0x4d92b0 - 0x4d92f7
int64_t function_4d92b0(void) {
    uint32_t v1 = g8; // 0x4d92b8
    int64_t result = v1; // 0x4d92c3
    if (v1 == 0x40000000) {
        // 0x4d92c5
        result = function_4d8e90();
    }
    // 0x4d92ca
    if ((result & 96) == 96) {
        // 0x4d92ef
        return result;
    }
    int64_t result2 = 8; // 0x4d92dc
    if ((result & 16) == 0) {
        // 0x4d92de
        result2 = (result & 5) == 0 ? 1 : 4;
    }
    // 0x4d92ef
    return result2;
}

// Address range: 0x4fd330 - 0x4fd381
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_4fd330(int64_t result, int64_t a2, int64_t a3) {
    int64_t result2 = function_4f15a0(result + 104); // 0x4fd341
    if ((char)result2 != 0) {
        // 0x4fd35f
        return result;
    }
    if ((a3 || a2) == 0) {
        // 0x4fd354
        *(int64_t *)(result + 160) = 1;
        // 0x4fd35f
        return result;
    }
    if (a2 == 0 || a3 < 1) {
        // 0x4fd35f
        return result;
    }
    // 0x4fd37a
    *(int64_t *)(result + 152) = a2;
    return result2;
}

// Address range: 0x4fd390 - 0x4fd3e1
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_4fd390(int64_t result, int64_t a2, int64_t a3) {
    int64_t result2 = function_4f15a0(result + 104); // 0x4fd3a1
    if ((char)result2 != 0) {
        // 0x4fd3bf
        return result;
    }
    if ((a3 || a2) == 0) {
        // 0x4fd3b4
        *(int64_t *)(result + 160) = 1;
        // 0x4fd3bf
        return result;
    }
    if (a2 == 0 || a3 < 1) {
        // 0x4fd3bf
        return result;
    }
    // 0x4fd3da
    *(int64_t *)(result + 152) = a2;
    return result2;
}

// Address range: 0x54ceb0 - 0x54cf01
int64_t function_54ceb0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 40); // 0x54ceb7
    int64_t result; // 0x54ceb0
    if (v1 == 0) {
        // 0x54cf00
        return result;
    }
    int64_t v2 = v1; // 0x54cec7
    uint32_t result2; // 0x54ceb0
    while (true) {
        int64_t v3 = v2;
        int32_t * v4 = (int32_t *)(v3 + 20);
        result2 = *v4;
        int32_t v5 = result2 - 1;
        if (g7 != 0) {
            // 0x54ced0
            *v4 = v5;
            if (result2 != 0) {
                // break -> 0x54cf00
                break;
            }
        } else {
            // 0x54cef3
            *v4 = v5;
            if (result2 != 0) {
                // 0x54cf00
                result = result2;
                return result;
            }
        }
        // 0x54cede
        v2 = *(int64_t *)v3;
        result = function_4eeb50(v3);
        if (v2 == 0) {
          lab_0x54cf00_2:
            // 0x54cf00
            return result;
        }
    }
    // 0x54cf00
    return result2;
}

// Address range: 0x568460 - 0x5684b4
// From class:    std::__cxx11::numpunct<char>
// Type:          constructor
int64_t function_568460(int64_t a1) {
    // 0x568460
    *(int64_t *)a1 = (int64_t)&g4;
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x568477
    if (*(int64_t *)(v1 + 24) == 0) {
        // 0x5684a6
        return function_565970(a1);
    }
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x568482
    if (v2 != 0) {
        // 0x56848b
        function_4eeb40(v2);
    }
    // 0x5684a6
    return function_565970(a1);
}

// Address range: 0x568730 - 0x568784
// From class:    std::__cxx11::numpunct<wchar_t>
// Type:          constructor
int64_t function_568730(int64_t a1) {
    // 0x568730
    *(int64_t *)a1 = (int64_t)&g5;
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x568747
    if (*(int64_t *)(v1 + 24) == 0) {
        // 0x568776
        return function_565970(a1);
    }
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x568752
    if (v2 != 0) {
        // 0x56875b
        function_4eeb40(v2);
    }
    // 0x568776
    return function_565970(a1);
}
