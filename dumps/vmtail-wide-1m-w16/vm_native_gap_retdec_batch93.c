/*
 * Targeted RetDec C for native executable gap queue batch 93.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x53e790-0x53e7cc rank=101 name=method.std::basic_iostream_wchar_t__std::char_traits_wchar_t___.virtual_0 kind=native_discovered bytes=60 uncovered=60
 *   0x550a60-0x550a9c rank=102 name=fcn.00550a60 kind=r2_discovered bytes=60 uncovered=60
 *   0x21176-0x211b1 rank=103 name=entry.init11 kind=native_discovered bytes=59 uncovered=59
 *   0x2b60e-0x2b649 rank=104 name=fcn.0002b60e kind=r2_discovered bytes=59 uncovered=59
 *   0x35fcc-0x36007 rank=105 name=fcn.00035fcc kind=r2_discovered bytes=59 uncovered=59
 *   0x44c72-0x44cad rank=106 name=fcn.00044c72 kind=r2_discovered bytes=59 uncovered=59
 *   0x4aa26-0x4aa61 rank=107 name=fcn.0004aa26 kind=r2_discovered bytes=59 uncovered=59
 *   0x4f954-0x4f98f rank=108 name=fcn.0004f954 kind=r2_discovered bytes=59 uncovered=59
 *   0x5100e-0x51049 rank=109 name=fcn.0005100e kind=r2_discovered bytes=59 uncovered=59
 *   0x61c0a-0x61c45 rank=110 name=fcn.00061c0a kind=r2_discovered bytes=59 uncovered=59
 *   0x30ea80-0x30eabb rank=111 name=fcn.0030ea80 kind=r2_discovered bytes=59 uncovered=59
 *   0x3d8b9b-0x3d8bd6 rank=112 name=fcn.003d8b9b kind=r2_discovered bytes=59 uncovered=59
 *   0x3e185b-0x3e1896 rank=113 name=fcn.003e185b kind=r2_discovered bytes=59 uncovered=59
 *   0x491098-0x4910d3 rank=114 name=fcn.00491098 kind=r2_discovered bytes=59 uncovered=59
 *   0x4910d4-0x49110f rank=115 name=fcn.004910d4 kind=r2_discovered bytes=59 uncovered=59
 *   0x4aa430-0x4aa46b rank=116 name=fcn.004aa430 kind=r2_discovered bytes=59 uncovered=59
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
extern int g9;
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
uint32_t __readgsdword(int64_t offset);
int64_t __asm_iretd(void);
int64_t __asm_sti(int64_t value, int64_t flags);
int64_t unknown_34e4aca1(int64_t value);
void unknown_11c3039(void);
int64_t unknown_2a35274a(void);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_3d2a4ac0(void);
int64_t unknown_3f58ba8f(void);
int64_t unknown_2f0fdc0b(void);
int64_t unknown_38ae20ec(void);
int64_t unknown_401c0cfa(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffffba4fa1e3(void);
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
float80_t __asm_fbstp(float80_t value);
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
void __stack_chk_fail(void);
int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);
int64_t _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(int64_t value);
int64_t unknown_166c28d(void);
int128_t __asm_movsd(int64_t value);
int128_t __asm_movsd_133(int64_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
void __asm_movq(int64_t value, int128_t dst);
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
struct _IO_FILE *fopen64(const char *path, const char *mode);
struct _IO_FILE *fdopen(int fd, const char *mode);
size_t fread(void *ptr, size_t size, size_t nmemb, struct _IO_FILE *stream);
int32_t read(int fd, void *buf, size_t count);
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
int32_t __towlower_l(int32_t wc, struct __locale_struct *locale);
int32_t __towupper_l(int32_t wc, struct __locale_struct *locale);
int vswprintf(int32_t *wcs, size_t maxlen, const int32_t *format, int64_t ap);
int32_t *wmemchr(const int32_t *s, int32_t c, size_t n);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int32_t getwc(struct _IO_FILE *stream);
int32_t putwc(int32_t wc, struct _IO_FILE *stream);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_mutex_init(void *mutex, void *attr);
int pthread_mutexattr_init(void *attr);
int pthread_mutexattr_settype(void *attr, int type);
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_once(int32_t *once_control, ...);
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
void *mmap(void *addr, size_t len, int prot, int flags, int fd, int64_t offset);
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
int64_t _Unwind_GetDataRelBase(int64_t context);
int64_t _Unwind_GetRegionStart();
int64_t _Unwind_RaiseException(int64_t exception);
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_21176(void);
int64_t function_2b60e(int64_t a1);
int64_t function_2b776();
int64_t function_30ea62();
int64_t function_30ea80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35fcc(int64_t a1);
int64_t function_36ff8();
int64_t function_3d8b70();
int64_t function_3d8b9b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d8bb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d8bd0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e185b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e1890(void);
int64_t function_44c42();
int64_t function_44c72(int64_t a1, int64_t a2, int64_t a3);
int64_t function_491098(int64_t a1, int64_t a2, int64_t * a3);
int64_t function_4910d4(int64_t a1, int64_t result, int64_t a3);
int64_t function_4aa26(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4aa430(int64_t a1, int64_t a2);
int64_t function_4f954(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5100e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_52770();
int64_t function_53e790(int64_t a1);
int64_t function_54cf10();
int64_t function_550a60(int64_t result, int64_t a2, int64_t a3, int64_t a4);
int64_t function_61c0a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6746a();
int64_t function_729b0();

// Address range: 0x21176 - 0x211b1
int64_t function_21176(void) {
    // 0x21176
    g5 = 0;
    g6 = 0;
    g7 = 0;
    int32_t result = __cxa_atexit((void (*)(int64_t *))0x370f0, &g5, (int64_t *)0x849800); // 0x211ac
    return result;
}

// Address range: 0x2b60e - 0x2b649
int64_t function_2b60e(int64_t a1) {
    // 0x2b60e
    *(int64_t *)a1 = (int64_t)&g1;
    if (*(char *)(a1 + 8) % 2 == 0) {
        // 0x2b640
        return (int64_t)&g1;
    }
    int64_t v1 = function_2b776(); // 0x2b622
    int64_t result = 0; // 0x2b62a
    if (v1 != 0) {
        // 0x2b62c
        result = function_6746a(v1, "SteamAPI_UnregisterCallback");
    }
    // 0x2b640
    return result;
}

// Address range: 0x35fcc - 0x36007
int64_t function_35fcc(int64_t a1) {
    if (a1 == 0) {
        // 0x36005
        int64_t result; // 0x35fcc
        return result;
    }
    uint32_t result2 = (int32_t)_ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(a1 + 8) - 1; // 0x35fde
    if (result2 != 0) {
        // 0x36005
        return result2;
    }
    uint32_t result3 = (int32_t)_ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(a1 + 12) - 1; // 0x35ff4
    if (result3 != 0) {
        // 0x36005
        return result3;
    }
    // 0x35ff8
    return *(int64_t *)(a1 + 36);
}

// Address range: 0x44c72 - 0x44cad
int64_t function_44c72(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44c72
    function_729b0(a1 + (int64_t)&g8 + 40 * (uint64_t)(-8 - a1 + a2) / 416);
    return function_44c42(a1 + (int64_t)&g9, 1);
}

// Address range: 0x4aa26 - 0x4aa61
int64_t function_4aa26(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = *(int64_t *)(8 * a2 + a1); // 0x4aa29
    if (result == 0) {
        // 0x4aa5d
        return 0;
    }
    int64_t v1 = *(int64_t *)result; // 0x4aa32
    if (*(int64_t *)(v1 + 8) == a3) {
        // 0x4aa5d
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)v2; // 0x4aa3e
    int64_t result2 = 0; // 0x4aa44
    while (v3 != 0) {
        uint64_t v4 = *(int64_t *)(v3 + 8); // 0x4aa4c
        result2 = 0;
        if (v4 % *(int64_t *)(a1 + 8) != a2) {
            // break -> 0x4aa5d
            break;
        }
        // 0x4aa38
        result2 = v2;
        if (v4 == a3) {
            // break -> 0x4aa5d
            break;
        }
        v2 = v3;
        v3 = *(int64_t *)v2;
        result2 = 0;
    }
    // 0x4aa5d
    return result2;
}

// Address range: 0x4f954 - 0x4f98f
int64_t function_4f954(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = *(int64_t *)(8 * a2 + a1); // 0x4f957
    if (result == 0) {
        // 0x4f98b
        return 0;
    }
    int64_t v1 = *(int64_t *)result; // 0x4f960
    if (*(int64_t *)(v1 + 8) == a3) {
        // 0x4f98b
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)v2; // 0x4f96c
    int64_t result2 = 0; // 0x4f972
    while (v3 != 0) {
        uint64_t v4 = *(int64_t *)(v3 + 8); // 0x4f97a
        result2 = 0;
        if (v4 % *(int64_t *)(a1 + 8) != a2) {
            // break -> 0x4f98b
            break;
        }
        // 0x4f966
        result2 = v2;
        if (v4 == a3) {
            // break -> 0x4f98b
            break;
        }
        v2 = v3;
        v3 = *(int64_t *)v2;
        result2 = 0;
    }
    // 0x4f98b
    return result2;
}

// Address range: 0x5100e - 0x51049
int64_t function_5100e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5100e
    function_52770(a1 + 192, a2);
    function_52770(a1 + 208, a3);
    return function_52770(a1 + 200, a4);
}

// Address range: 0x61c0a - 0x61c45
int64_t function_61c0a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = *(int64_t *)(8 * a2 + a1); // 0x61c0d
    if (result == 0) {
        // 0x61c41
        return 0;
    }
    int64_t v1 = *(int64_t *)result; // 0x61c16
    if (*(int64_t *)(v1 + 8) == a3) {
        // 0x61c41
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)v2; // 0x61c22
    int64_t result2 = 0; // 0x61c28
    while (v3 != 0) {
        uint64_t v4 = *(int64_t *)(v3 + 8); // 0x61c30
        result2 = 0;
        if (v4 % *(int64_t *)(a1 + 8) != a2) {
            // break -> 0x61c41
            break;
        }
        // 0x61c1c
        result2 = v2;
        if (v4 == a3) {
            // break -> 0x61c41
            break;
        }
        v2 = v3;
        v3 = *(int64_t *)v2;
        result2 = 0;
    }
    // 0x61c41
    return result2;
}

// Address range: 0x30ea80 - 0x30ea9d
int64_t function_30ea80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30ea80
    int64_t v1; // 0x30ea80
    char * v2 = (char *)(v1 + 0x2ab567fe); // 0x30ea80
    bool v3; // 0x30ea80
    char v4 = *v2 + (char)v1 + (char)v3; // 0x30ea80
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x30ea80
    *v2 = v4;
    if (v5 % 2 == 0) {
        function_30ea62();
    }
    int64_t result = unknown_3f58ba8f(); // 0x30ea89
    *(char *)a3 = (char)(v1 / 256);
    int32_t * v6 = (int32_t *)result; // 0x30ea98
    *v6 = *v6 ^ (int32_t)result;
    char * v7 = (char *)result; // 0x30ea9a
    *v7 = *v7 + 28;
    return result;
}

// Address range: 0x3d8b9b - 0x3d8baf
int64_t function_3d8b9b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d8b9b
    int64_t v1; // 0x3d8b9b
    int64_t result = v1 & 0xffffffff; // 0x3d8bad
    bool v2; // 0x3d8b9b
    if (!v2) {
        result = function_3d8b70();
    }
    // 0x3d8baf
    return result;
}

// Address range: 0x3d8bb1 - 0x3d8bca
int64_t function_3d8bb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d8bb1
    int64_t result; // 0x3d8bb1
    char * v1 = (char *)(result + 22); // 0x3d8bb7
    unsigned char v2 = *v1; // 0x3d8bb7
    *v1 = v2 / 128 | 2 * v2;
    return result;
}

// Address range: 0x3d8bd0 - 0x3d8bd5
int64_t function_3d8bd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d8bd0
    int64_t result; // 0x3d8bd0
    *(char *)a3 = (char)result + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x3e185b - 0x3e1887
int64_t function_3e185b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e185b
    int64_t v1; // 0x3e185b
    int32_t * v2 = (int32_t *)(v1 + 29 + 8 * v1); // 0x3e185b
    uint32_t v3 = *v2; // 0x3e185b
    uint32_t v4 = v3 + (int32_t)a1; // 0x3e185b
    bool v5; // 0x3e185b
    uint32_t v6 = v4 + (int32_t)v5; // 0x3e185b
    bool v7 = v5 ? v6 <= v3 : v4 < v3; // 0x3e185b
    *v2 = v6;
    if (v7) {
        int64_t v8 = (v7 ? 0xff00 : 0) | a4 & -0xff01; // 0x3e1860
        int32_t * v9 = (int32_t *)(a1 + 41); // 0x3e1875
        uint32_t v10 = *v9; // 0x3e1875
        uint32_t v11 = v10 + (int32_t)v8; // 0x3e1875
        *v9 = v11;
        char v12 = *(char *)(v1 - 38); // 0x3e1879
        int32_t v13 = *(int32_t *)(a3 + 44); // 0x3e187f
        uint32_t v14 = (int32_t)((char)v1 < 55) + (int32_t)a3 + v13; // 0x3e187f
        int64_t v15 = v5 ? -1 : 1; // 0x3e1885
        return __asm_int1(v15 + a1, v15 + a2, v14, v8 & -256 | (int64_t)((char)a4 - v12 + (char)(v11 < v10)));
    }
    // 0x3e1865
    return __readgsdword(0x779f5ed5e0996b41);
}

// Address range: 0x3e1890 - 0x3e1892
int64_t function_3e1890(void) {
    // 0x3e1890
    int64_t result; // 0x3e1890
    return result;
}

// Address range: 0x491098 - 0x4910d3
int64_t function_491098(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t result = *(int64_t *)(8 * a2 + a1); // 0x49109b
    if (result == 0) {
        // 0x4910cf
        return 0;
    }
    int64_t v1 = (int64_t)a3;
    int64_t v2 = *(int64_t *)result; // 0x4910a4
    if (*(int64_t *)(v2 + 8) == v1) {
        // 0x4910cf
        return result;
    }
    int64_t v3 = v2;
    int64_t v4 = *(int64_t *)v3; // 0x4910b0
    int64_t result2 = 0; // 0x4910b6
    while (v4 != 0) {
        uint64_t v5 = *(int64_t *)(v4 + 8); // 0x4910be
        result2 = 0;
        if (v5 % *(int64_t *)(a1 + 8) != a2) {
            // break -> 0x4910cf
            break;
        }
        // 0x4910aa
        result2 = v3;
        if (v5 == v1) {
            // break -> 0x4910cf
            break;
        }
        v3 = v4;
        v4 = *(int64_t *)v3;
        result2 = 0;
    }
    // 0x4910cf
    return result2;
}

// Address range: 0x4910d4 - 0x49110f
int64_t function_4910d4(int64_t a1, int64_t result, int64_t a3) {
    int64_t v1 = result; // bp-8, 0x4910e6
    int64_t v2 = function_491098(a1, result % *(int64_t *)(a1 + 8), &v1); // 0x4910f4
    if (v2 == 0) {
        // 0x49110a
        return result;
    }
    int64_t v3 = *(int64_t *)v2; // 0x4910fe
    int64_t result2 = result; // 0x491104
    if (v3 != 0) {
        // 0x491106
        result2 = *(int64_t *)(v3 + 16);
    }
    // 0x49110a
    return result2;
}

// Address range: 0x4aa430 - 0x4aa465
int64_t function_4aa430(int64_t a1, int64_t a2) {
    // 0x4aa430
    return 0;
}

// Address range: 0x53e790 - 0x53e7cc
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_53e790(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x53e793
    *(int64_t *)(v1 + 16) = (int64_t)&g3;
    *(int64_t *)(v1 + 8) = 0;
    int64_t v2 = v1 + 24; // 0x53e7b1
    *(int64_t *)v1 = (int64_t)&g4;
    *(int64_t *)v2 = (int64_t)&g2;
    return function_54cf10(v2);
}

// Address range: 0x550a60 - 0x550a9a
int64_t function_550a60(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x550a60
    if (result - 24 == *(int64_t *)0x848c20) {
        // 0x550a80
        return result;
    }
    int32_t * v1 = (int32_t *)(result - 8); // 0x550a70
    int32_t v2 = *v1; // 0x550a70
    if (v2 >= 0 == (v2 != 0)) {
        // 0x550a88
        function_36ff8();
        return result;
    }
    // 0x550a77
    *v1 = -1;
    return result;
}

// --------------- Statically Linked Functions ----------------

// int64_t _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(int64_t a1);
