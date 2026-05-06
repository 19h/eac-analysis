/*
 * Targeted RetDec C for native executable gap queue batch 51.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3513ff-0x35148a rank=13 name=fcn.003513ff kind=r2_discovered bytes=139 uncovered=139
 *   0x4d7eb0-0x4d7f3b rank=14 name=sym.blake3_hasher_init_keyed kind=symbol_named bytes=139 uncovered=139
 *   0x35b6a-0x35bf4 rank=15 name=fcn.00035b6a kind=r2_discovered bytes=138 uncovered=138
 *   0x50688-0x50712 rank=16 name=fcn.00050688 kind=r2_discovered bytes=138 uncovered=138
 *   0x52d86-0x52e10 rank=17 name=fcn.00052d86 kind=r2_discovered bytes=138 uncovered=138
 *   0x53a58-0x53ae2 rank=18 name=fcn.00053a58 kind=r2_discovered bytes=138 uncovered=138
 *   0x54d04-0x54d8e rank=19 name=fcn.00054d04 kind=r2_discovered bytes=138 uncovered=138
 *   0x57c60-0x57cea rank=20 name=fcn.00057c60 kind=r2_discovered bytes=138 uncovered=138
 *   0x591b0-0x5923a rank=21 name=fcn.000591b0 kind=r2_discovered bytes=138 uncovered=138
 *   0x59f20-0x59faa rank=22 name=fcn.00059f20 kind=r2_discovered bytes=138 uncovered=138
 *   0x5a28a-0x5a314 rank=23 name=fcn.0005a28a kind=r2_discovered bytes=138 uncovered=138
 *   0x67668-0x676f2 rank=24 name=fcn.00067668 kind=r2_discovered bytes=138 uncovered=138
 *   0x48d198-0x48d222 rank=25 name=fcn.0048d198 kind=r2_discovered bytes=138 uncovered=138
 *   0x572430-0x5724ba rank=27 name=fcn.00572430 kind=r2_discovered bytes=138 uncovered=138
 *   0x5c710-0x5c799 rank=28 name=fcn.0005c710 kind=r2_discovered bytes=137 uncovered=137
 *   0x24da7f-0x24db08 rank=29 name=fcn.0024da7f kind=r2_discovered bytes=137 uncovered=137
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

int64_t function_24da44();
int64_t function_24da75();
int64_t function_24da7f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_24dac6(void);
int64_t function_2508e();
int64_t function_250b0();
int64_t function_27a38();
int64_t function_3513ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_35b6a(uint64_t a1, uint64_t a2);
int64_t function_48d198(uint64_t a1, uint64_t a2);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0ae0();
int64_t function_50688(uint64_t a1, uint64_t a2);
int64_t function_52d86(int64_t a1, int64_t a2);
int64_t function_53a58(uint64_t a1, uint64_t a2);
int64_t function_5423b0();
int64_t function_542590();
int64_t function_54d04(uint64_t a1, uint64_t a2);
int64_t function_570890();
int64_t function_572430(int64_t a1, int64_t a2);
int64_t function_57c60(uint64_t a1, uint64_t a2);
int64_t function_591b0(uint64_t a1, uint64_t a2);
int64_t function_59f20(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5a28a(uint64_t a1, uint64_t a2);
int64_t function_5c710(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5f302();
int64_t function_67668(int64_t result, int64_t a2, int64_t a3, int64_t a4);
int64_t function_69a4e();
int64_t function_cf3c7();

// Address range: 0x35b6a - 0x35bf4
int64_t function_35b6a(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x35b78
    if (a1 >= 0xfffffffffffffff) {
        // 0x35b7a
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x35b8c
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x35b8e
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x35b99
    uint64_t v6 = v5 + 60; // 0x35ba1
    int64_t v7 = v3; // 0x35bab
    int64_t v8 = v5; // 0x35bab
    if (v3 > a2 && v6 > (int64_t)&g1) {
        uint64_t v9 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g4)) / 4 + v3; // 0x35bc6
        v7 = v9 < 0xffffffffffffffe ? v9 : 0xffffffffffffffe;
        v8 = 4 * v7;
    }
    int64_t result = function_4efd30(v8 + 28); // 0x35be2
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x50688 - 0x50712
int64_t function_50688(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x50696
    if (a1 >= 0xfffffffffffffff) {
        // 0x50698
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x506aa
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x506ac
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x506b7
    uint64_t v6 = v5 + 60; // 0x506bf
    int64_t v7 = v3; // 0x506c9
    int64_t v8 = v5; // 0x506c9
    if (v3 > a2 && v6 > (int64_t)&g1) {
        uint64_t v9 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g4)) / 4 + v3; // 0x506e4
        v7 = v9 < 0xffffffffffffffe ? v9 : 0xffffffffffffffe;
        v8 = 4 * v7;
    }
    int64_t result = function_4efd30(v8 + 28); // 0x50700
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x52d86 - 0x52e10
int64_t function_52d86(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16);
    int64_t v2 = a1 + 8; // 0x52da3
    int64_t v3; // 0x52d86
    int64_t v4; // 0x52d86
    if (v1 == 0) {
        goto lab_0x52dcf;
    } else {
        v2 = v1;
        int64_t v5 = v2 + 32;
        int64_t v6 = function_27a38(a2, v5); // 0x52dac
        int64_t v7 = *(int64_t *)(((int32_t)v6 >= 0 ? 24 : 16) + v2);
        while (v7 != 0) {
            // 0x52da5
            v2 = v7;
            v5 = v2 + 32;
            v6 = function_27a38(a2, v5);
            v7 = *(int64_t *)(((int32_t)v6 >= 0 ? 24 : 16) + v2);
        }
        // 0x52dcb
        v3 = v5;
        v4 = v2;
        if ((int32_t)v6 >= 0) {
            return (int32_t)function_27a38(v3, a2) < 0 ? 0 : v4;
        } else {
            goto lab_0x52dcf;
        }
    }
  lab_0x52dcf:
    // 0x52dcf
    if (*(int64_t *)(a1 + 24) == v2) {
        // 0x52e05
        return 0;
    }
    int64_t v8 = function_4f0ae0(v2); // 0x52de0
    v3 = v8 + 32;
    v4 = v8;
    return (int32_t)function_27a38(v3, a2) < 0 ? 0 : v4;
    // 0x52e05
    return (int32_t)function_27a38(v3, a2) < 0 ? 0 : v4;
}

// Address range: 0x53a58 - 0x53ae2
int64_t function_53a58(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x53a66
    if (a1 >= 0xfffffffffffffff) {
        // 0x53a68
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x53a7a
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x53a7c
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x53a87
    uint64_t v6 = v5 + 60; // 0x53a8f
    int64_t v7 = v3; // 0x53a99
    int64_t v8 = v5; // 0x53a99
    if (v3 > a2 && v6 > (int64_t)&g1) {
        uint64_t v9 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g4)) / 4 + v3; // 0x53ab4
        v7 = v9 < 0xffffffffffffffe ? v9 : 0xffffffffffffffe;
        v8 = 4 * v7;
    }
    int64_t result = function_4efd30(v8 + 28); // 0x53ad0
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x54d04 - 0x54d8e
int64_t function_54d04(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x54d12
    if (a1 >= 0xfffffffffffffff) {
        // 0x54d14
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x54d26
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x54d28
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x54d33
    uint64_t v6 = v5 + 60; // 0x54d3b
    int64_t v7 = v3; // 0x54d45
    int64_t v8 = v5; // 0x54d45
    if (v3 > a2 && v6 > (int64_t)&g1) {
        uint64_t v9 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g4)) / 4 + v3; // 0x54d60
        v7 = v9 < 0xffffffffffffffe ? v9 : 0xffffffffffffffe;
        v8 = 4 * v7;
    }
    int64_t result = function_4efd30(v8 + 28); // 0x54d7c
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x57c60 - 0x57cea
int64_t function_57c60(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x57c6e
    if (a1 >= 0xfffffffffffffff) {
        // 0x57c70
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x57c82
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x57c84
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x57c8f
    uint64_t v6 = v5 + 60; // 0x57c97
    int64_t v7 = v3; // 0x57ca1
    int64_t v8 = v5; // 0x57ca1
    if (v3 > a2 && v6 > (int64_t)&g1) {
        uint64_t v9 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g4)) / 4 + v3; // 0x57cbc
        v7 = v9 < 0xffffffffffffffe ? v9 : 0xffffffffffffffe;
        v8 = 4 * v7;
    }
    int64_t result = function_4efd30(v8 + 28); // 0x57cd8
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x591b0 - 0x5923a
int64_t function_591b0(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x591be
    if (a1 >= 0xfffffffffffffff) {
        // 0x591c0
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x591d2
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x591d4
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x591df
    uint64_t v6 = v5 + 60; // 0x591e7
    int64_t v7 = v3; // 0x591f1
    int64_t v8 = v5; // 0x591f1
    if (v3 > a2 && v6 > (int64_t)&g1) {
        uint64_t v9 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g4)) / 4 + v3; // 0x5920c
        v7 = v9 < 0xffffffffffffffe ? v9 : 0xffffffffffffffe;
        v8 = 4 * v7;
    }
    int64_t result = function_4efd30(v8 + 28); // 0x59228
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x59f20 - 0x59faa
int64_t function_59f20(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x59f42
    int64_t v2; // bp-56, 0x59f20
    int64_t v3; // bp-65, 0x59f20
    function_250b0(&v2, a3, (int64_t)&v3);
    int64_t v4; // bp-64, 0x59f20
    int64_t v5; // bp-66, 0x59f20
    function_250b0(&v4, a2, (int64_t)&v5);
    function_69a4e(a1 + 8, &v4, &v2);
    function_2508e(&v4);
    function_2508e(&v2);
    int64_t result = 0; // 0x59f98
    if (v1 != __readfsqword(40)) {
        // 0x59f9a
        __stack_chk_fail();
        result = (int64_t)&g5;
    }
    // 0x59f9f
    return result;
}

// Address range: 0x5a28a - 0x5a314
int64_t function_5a28a(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x5a298
    if (a1 >= 0xfffffffffffffff) {
        // 0x5a29a
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x5a2ac
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x5a2ae
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x5a2b9
    uint64_t v6 = v5 + 60; // 0x5a2c1
    int64_t v7 = v3; // 0x5a2cb
    int64_t v8 = v5; // 0x5a2cb
    if (v3 > a2 && v6 > (int64_t)&g1) {
        uint64_t v9 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g4)) / 4 + v3; // 0x5a2e6
        v7 = v9 < 0xffffffffffffffe ? v9 : 0xffffffffffffffe;
        v8 = 4 * v7;
    }
    int64_t result = function_4efd30(v8 + 28); // 0x5a302
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x5c710 - 0x5c799
int64_t function_5c710(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 - a2; // 0x5c723
    uint64_t v2 = v1 >> 5; // 0x5c730
    int64_t v3 = 0; // 0x5c734
    if (v2 != 0) {
        if (v2 >= 0x800000000000000) {
            // 0x5c745
            function_5423b0();
        }
        // 0x5c74a
        v3 = function_4efd30(v1);
    }
    int64_t v4 = v3 + v1; // 0x5c759
    *(int64_t *)a1 = v3;
    *(int64_t *)(a1 + 16) = v4;
    int64_t v5 = v3; // 0x5c76c
    int64_t result; // 0x5c710
    if (a3 == a2) {
        // 0x5c783
        *(int64_t *)(a1 + 8) = v4;
        return result;
    }
    int64_t v6 = a2 + 32; // 0x5c774
    function_5f302(v5, a2);
    v5 += 32;
    while (v6 != a3) {
        int64_t v7 = v6;
        v6 = v7 + 32;
        function_5f302(v5, v7);
        v5 += 32;
    }
    // 0x5c783
    *(int64_t *)(a1 + 8) = v4;
    return result;
}

// Address range: 0x67668 - 0x676f2
int64_t function_67668(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = 0; // 0x67675
    if (a3 != 0) {
        int64_t v2 = -1; // 0x67680
        int64_t v3 = a3; // 0x67668
        int64_t v4 = 0; // 0x67680
        while (v2 != 0) {
            int64_t v5 = v3;
            v2--;
            bool v6; // 0x67668
            v3 = v5 + (v6 ? -1 : 1);
            v4 = v2;
            if (*(char *)v5 == 0) {
                // break -> 
                break;
            }
            v4 = 0;
        }
        v1 = *(int64_t *)(a2 + 8) - a2 == -2 - v4;
    }
    int64_t result2 = *(int64_t *)(result + 8); // 0x67699
    if (result2 == result) {
        // 0x676f0
        return result;
    }
    int64_t v7 = *(int64_t *)(a2 + 8); // 0x676a5
    uint64_t v8 = v7 - a2; // 0x676b5
    int64_t v9 = result; // 0x676eb
    int64_t v10; // 0x67668
    int64_t v11; // 0x67668
    int64_t v12; // 0x67668
    int64_t v13; // 0x676ca
    while (true) {
        // 0x676a5
        v10 = v9;
        v11 = a2;
        if (v7 == a2 || result2 - v10 < v8) {
            // break -> 0x676f0
            break;
        }
        while (true) {
          lab_0x676c7:
            // 0x676c7
            v12 = v11;
            v13 = v12 - a2;
            if (v1 == 0) {
                goto lab_0x676e3;
            } else {
                // 0x676d2
                if (*(char *)(v13 + a3) != 63) {
                    goto lab_0x676e3;
                } else {
                    goto lab_0x676d9;
                }
            }
        }
      lab_0x676eb:
        // 0x676eb
        v9 = v10 + 1;
        if (result2 == v9) {
            // 0x676f0
            return result2;
        }
    }
    // 0x676f0
    return result2 - v10 < v8 ? result2 : v10;
  lab_0x676e3:
    // 0x676e3
    if (*(char *)(v13 + v10) != *(char *)v12) {
        // break -> 0x676eb
        goto lab_0x676eb;
    }
    goto lab_0x676d9;
  lab_0x676d9:;
    int64_t v14 = v12 + 1; // 0x676d9
    v11 = v14;
    int64_t result3 = v10; // 0x676df
    if (v7 == v14) {
        // 0x676f0
        return result3;
    }
    goto lab_0x676c7;
}

// Address range: 0x24da7f - 0x24dac5
int64_t function_24da7f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x24da7f
    *(char *)0x2a01e8013d01e853 = (char)v2;
    uint32_t v3 = (int32_t)a4 % 32; // 0x24da94
    int64_t v4; // 0x24da7f
    int32_t v5; // 0x24da7f
    if (v3 == 0) {
        // 0x24da7f
        v4 = a1;
        v5 = a1;
    } else {
        unsigned char v6 = *(char *)(a2 + 0x7a813a00); // 0x24da88
        int32_t * v7 = (int32_t *)((256 * (int64_t)v6 | v2 & -0xff01) + 0x355a859c); // 0x24da94
        uint32_t v8 = *v7; // 0x24da94
        *v7 = v8 >> v3 | v8 << 32 - v3;
        v4 = v1;
        v5 = *(int32_t *)&v1;
    }
    unsigned char v9 = llvm_ctpop_i8((char)((int32_t)v2 - v5)); // 0x24da9a
    bool v10; // 0x24da7f
    int64_t v11 = unknown_34e4aca1(v4 + (v10 ? -4 : 4)); // 0x24daa0
    if (v9 % 2 != 0) {
        v11 = function_24da75();
    }
    int64_t v12 = v11;
    int64_t v13 = (v12 + a3) % 256 | v12 & -256; // 0x24dab0
    if (*(char *)((v2 + 0x1e83f86 & 0xffffffff) - 0x2b4217d6) != (char)a3) {
        v13 = function_24da44();
    }
    int32_t * v14 = (int32_t *)(a4 - 115); // 0x24dab4
    *v14 = *v14 + (int32_t)a2;
    char * v15 = (char *)((v13 & -0xff01 | (int64_t)&g3) + 100); // 0x24dabb
    *v15 = *v15 - (char)(a4 / 256);
    return unknown_6ae5a3c4();
}

// Address range: 0x24dac6 - 0x24dac7
int64_t function_24dac6(void) {
    // 0x24dac6
    int64_t result; // 0x24dac6
    return result;
}

// Address range: 0x3513ff - 0x35148a
int64_t function_3513ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x3513ff
    int64_t v1; // 0x3513ff
    v1 = (int64_t)&v1 + 16;
    return function_cf3c7();
}

// Address range: 0x48d198 - 0x48d222
int64_t function_48d198(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x48d1a6
    if (a1 >= 0xfffffffffffffff) {
        // 0x48d1a8
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x48d1ba
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x48d1bc
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x48d1c7
    uint64_t v6 = v5 + 60; // 0x48d1cf
    int64_t v7 = v3; // 0x48d1d9
    int64_t v8 = v5; // 0x48d1d9
    if (v3 > a2 && v6 > (int64_t)&g1) {
        uint64_t v9 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g4)) / 4 + v3; // 0x48d1f4
        v7 = v9 < 0xffffffffffffffe ? v9 : 0xffffffffffffffe;
        v8 = 4 * v7;
    }
    int64_t result = function_4efd30(v8 + 28); // 0x48d210
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x4d7eb0 - 0x4d7f3b
int64_t blake3_hasher_init_keyed(int64_t a1, int64_t a2) {
    // 0x4d7eb0
    int128_t v1; // 0x4d7eb0
    int128_t v2 = v1;
    int64_t v3; // 0x4d7eb0
    int128_t v4 = __asm_movdqu(*(int128_t *)&v3); // 0x4d7eb8
    int128_t v5 = __asm_movdqu(*(int128_t *)(a2 + 16)); // 0x4d7ebc
    int128_t v6 = __asm_pxor(v2, v2); // 0x4d7ec1
    int64_t v7 = __readfsqword(40); // 0x4d7ec5
    *(char *)(a1 + 138) = 16;
    int128_t v8 = __asm_movdqa((int128_t)__asm_movaps(v4)); // 0x4d7ee2
    *(int64_t *)(a1 + 64) = 0;
    *(int16_t *)(a1 + 136) = 0;
    *(char *)(a1 + 144) = 0;
    __asm_movaps(v5);
    int64_t v9; // 0x4d7eb0
    __asm_movups(*(int128_t *)&v9, v8);
    __asm_movups(*(int128_t *)(a1 + 16), v5);
    __asm_movups(*(int128_t *)(a1 + 32), v8);
    __asm_movups(*(int128_t *)(a1 + 48), v5);
    __asm_movups(*(int128_t *)(a1 + 72), v6);
    __asm_movups(*(int128_t *)(a1 + 88), v6);
    __asm_movups(*(int128_t *)(a1 + 104), v6);
    __asm_movups(*(int128_t *)(a1 + 120), v6);
    int64_t result = v7 - __readfsqword(40); // 0x4d7f26
    if (result == 0) {
        // 0x4d7f31
        return result;
    }
    // 0x4d7f36
    __stack_chk_fail();
    return (int64_t)&g5;
}

// Address range: 0x572430 - 0x5724ba
int64_t function_572430(int64_t a1, int64_t a2) {
    // 0x572430
    int64_t v1; // 0x572430
    int64_t v2 = v1;
    int64_t v3 = __readfsqword(40); // 0x57243c
    *(int64_t *)a2 = a2 + 16;
    function_570890(a2, v2, v2 + v1);
    *(int64_t *)(a2 + 32) = (int64_t)&g2;
    int64_t v4; // bp-56, 0x572430
    if (v2 != (int64_t)&v4) {
        // 0x572499
        function_4eeb50(v2);
    }
    int64_t result = __readfsqword(40) ^ v3; // 0x5724a3
    if (result == 0) {
        // 0x5724ae
        return result;
    }
    // 0x5724b5
    __stack_chk_fail();
    return (int64_t)&g5;
}
