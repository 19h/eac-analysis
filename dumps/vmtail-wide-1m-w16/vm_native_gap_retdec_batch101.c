/*
 * Targeted RetDec C for native executable gap queue batch 101.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x24ef4-0x24f27 rank=105 name=fcn.00024ef4 kind=r2_discovered bytes=51 uncovered=51
 *   0x4eab6-0x4eae9 rank=106 name=fcn.0004eab6 kind=r2_discovered bytes=51 uncovered=51
 *   0x52770-0x527a3 rank=107 name=fcn.00052770 kind=r2_discovered bytes=51 uncovered=51
 *   0x119b8e-0x119bc1 rank=108 name=fcn.00119b8e kind=r2_discovered bytes=51 uncovered=51
 *   0x494d90-0x494dc3 rank=109 name=fcn.00494d90 kind=r2_discovered bytes=51 uncovered=51
 *   0x4c48b0-0x4c48e3 rank=110 name=fcn.004c48b0 kind=r2_discovered bytes=51 uncovered=51
 *   0x54d2a0-0x54d2d3 rank=111 name=fcn.0054d2a0 kind=r2_discovered bytes=51 uncovered=51
 *   0x35b38-0x35bad rank=112 name=fcn.00035b38 kind=r2_discovered bytes=117 uncovered=50
 *   0x4e9c8-0x4e9fa rank=113 name=fcn.0004e9c8 kind=r2_discovered bytes=50 uncovered=50
 *   0x4eb52-0x4ebc7 rank=114 name=fcn.0004eb52 kind=r2_discovered bytes=117 uncovered=50
 *   0x5f202-0x5f278 rank=115 name=fcn.0005f202 kind=r2_discovered bytes=118 uncovered=50
 *   0x608d2-0x60904 rank=116 name=fcn.000608d2 kind=r2_discovered bytes=50 uncovered=50
 *   0x6304a-0x6307c rank=117 name=fcn.0006304a kind=r2_discovered bytes=50 uncovered=50
 *   0x69134-0x69166 rank=118 name=fcn.00069134 kind=r2_discovered bytes=50 uncovered=50
 *   0x34d253-0x34d285 rank=119 name=fcn.0034d253 kind=r2_discovered bytes=50 uncovered=50
 *   0x498b30-0x498b62 rank=120 name=fcn.00498b30 kind=r2_discovered bytes=50 uncovered=50
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
extern int g7;
extern int g8;
extern int g9;
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3(void);
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
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
int64_t unknown_ffffffffa83be585(void);
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
void __asm_wait(void);
float80_t __asm_fbstp(float80_t value);
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
void __stack_chk_fail(void);
int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);
int64_t _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(int64_t value);
int64_t _ZGTtdlPv(int64_t value);
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
int32_t ungetwc(int32_t wc, struct _IO_FILE *stream);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_mutex_init(void *mutex, void *attr);
int pthread_mutexattr_init(void *attr);
int pthread_mutexattr_settype(void *attr, int type);
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_once(int32_t *once_control, int64_t init_routine);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int pthread_cond_broadcast(void *cond);
int sem_init(int64_t *sem, int pshared, unsigned int value);
int sem_post(int64_t *sem);
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

int64_t function_119b7e();
int64_t function_119b8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ef4(int64_t result, int64_t a2, int64_t a3);
int64_t function_2508e();
int64_t function_34d253(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34d27d(int64_t a1);
int64_t function_35af4();
int64_t function_35b38(int64_t a1, int64_t a2);
int64_t function_35b83(int64_t a1);
int64_t function_455ee();
int64_t function_494d90(int64_t a1);
int64_t function_498b30(int64_t a1);
int64_t function_4c4450();
int64_t function_4c48b0(int64_t a1);
int64_t function_4e9c8(int64_t a1, int64_t a2);
int64_t function_4eab6(int64_t a1);
int64_t function_4eb0e();
int64_t function_4eb52(int64_t a1, int64_t a2);
int64_t function_4eb84(int64_t a1, int64_t a2);
int64_t function_4eeb50();
int64_t function_52770(int64_t result, int64_t a2);
int64_t function_54d2a0(int64_t a1);
int64_t function_565970();
int64_t function_5679e0();
int64_t function_5f202(int64_t a1);
int64_t function_607e2();
int64_t function_608d2(int64_t a1);
int64_t function_63032();
int64_t function_6304a(int64_t a1);
int64_t function_69134(int64_t a1);
int64_t function_6a710();

// Address range: 0x24ef4 - 0x24f27
int64_t function_24ef4(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = result + 8; // 0x24f02
    int64_t v2 = *(int64_t *)v1 - result; // 0x24f06
    *(int64_t *)(result + 4) = 1;
    *(int32_t *)result = (int32_t)v2;
    *(int32_t *)v1 = (int32_t)function_455ee(result, v2 & 0xffffffff, 0);
    return result;
}

// Address range: 0x35b38 - 0x35b69
int64_t function_35b38(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x35b38
    int32_t v2 = *v1; // 0x35b38
    if (v2 < 0) {
        // 0x35b60
        return function_35af4();
    }
    // 0x35b43
    if ((int64_t)g4 != a1) {
        // 0x35b4c
        *v1 = v2 + 1;
    }
    // 0x35b64
    return a1 + 24;
}

// Address range: 0x35b83 - 0x35b86
int64_t function_35b83(int64_t a1) {
    // 0x35b83
    int64_t result; // 0x35b83
    return result;
}

// Address range: 0x4e9c8 - 0x4e9fa
int64_t function_4e9c8(int64_t a1, int64_t a2) {
    // 0x4e9c8
    *(int32_t *)a1 = (int32_t)a2;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 8) = (int64_t)&g7;
    return (int64_t)&g7;
}

// Address range: 0x4eab6 - 0x4eae9
int64_t function_4eab6(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24); // 0x4eabb
    if (v1 == 0) {
        // 0x4eae3
        return 0;
    }
    int64_t v2 = v1 + a1; // 0x4eace
    int64_t v3 = a1; // 0x4eace
    while (v3 != v2) {
        char v4 = *(char *)v3; // 0x4ead6
        v3++;
        if (*(char *)((int64_t)v4 + (int64_t)&g1) == 0) {
            // 0x4eae3
            return 0;
        }
    }
    // 0x4eae3
    return v2 & -256 | 1;
}

// Address range: 0x4eb52 - 0x4eb83
int64_t function_4eb52(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x4eb52
    int32_t v2 = *v1; // 0x4eb52
    if (v2 < 0) {
        // 0x4eb7a
        return function_4eb0e();
    }
    // 0x4eb5d
    if ((int64_t)g4 != a1) {
        // 0x4eb66
        *v1 = v2 + 1;
    }
    // 0x4eb7e
    return a1 + 24;
}

// Address range: 0x4eb84 - 0x4ebc6
int64_t function_4eb84(int64_t a1, int64_t a2) {
    // 0x4eb84
    __readfsqword(40);
    int64_t v1; // 0x4eb84
    return (uint64_t)v1 % 256;
}

// Address range: 0x52770 - 0x527a3
int64_t function_52770(int64_t result, int64_t a2) {
    // 0x52770
    return result;
}

// Address range: 0x5f202 - 0x5f278
int64_t function_5f202(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x5f20d
    int64_t v2 = a1; // 0x5f217
    int64_t result; // 0x5f202
    if (v1 != a1) {
        int64_t v3 = *(int64_t *)(a1 + 16); // 0x5f219
        int64_t * v4 = (int64_t *)(a1 + 8); // 0x5f21d
        int64_t v5 = *v4; // 0x5f21d
        int64_t v6 = v5; // 0x5f224
        int64_t v7 = v3; // 0x5f224
        int64_t v8; // 0x5f232
        if (v3 != v5) {
            function_2508e(v6 + 8);
            v8 = v6 + 24;
            function_2508e(v6);
            v6 = v8;
            while (v3 != v8) {
                // 0x5f226
                function_2508e(v6 + 8);
                v8 = v6 + 24;
                function_2508e(v6);
                v6 = v8;
            }
            // 0x5f221
            v7 = *v4;
        }
        int64_t v9 = v7; // 0x5f23d
        if (v9 != 0) {
            // 0x5f246
            function_4eeb50(v9);
        }
        int64_t v10 = a1 + 32; // 0x5f24e
        result = function_2508e(a1);
        v2 = a1;
        while (v1 != v10) {
            int64_t v11 = v10;
            v3 = *(int64_t *)(v11 + 16);
            v4 = (int64_t *)(v11 + 8);
            v5 = *v4;
            v6 = v5;
            v7 = v3;
            if (v3 != v5) {
                function_2508e(v6 + 8);
                v8 = v6 + 24;
                function_2508e(v6);
                v6 = v8;
                while (v3 != v8) {
                    // 0x5f226
                    function_2508e(v6 + 8);
                    v8 = v6 + 24;
                    function_2508e(v6);
                    v6 = v8;
                }
                // 0x5f221
                v7 = *v4;
            }
            // 0x5f23d
            v9 = v7;
            if (v9 != 0) {
                // 0x5f246
                function_4eeb50(v9);
            }
            // 0x5f24b
            v10 = v11 + 32;
            result = function_2508e(v11);
            v2 = v11;
        }
    }
    // 0x5f259
    if (v2 == 0) {
        // 0x5f26f
        return result;
    }
    // 0x5f262
    return function_4eeb50(v2);
}

// Address range: 0x608d2 - 0x60904
int64_t function_608d2(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x608d3
    int64_t v2 = v1 - 24; // 0x608da
    int64_t result = v1; // 0x608e5
    if (v2 != *(int64_t *)0x848c20) {
        // 0x608e7
        result = function_607e2(v2);
    }
    int64_t v3 = v1 - 48; // 0x608ef
    if (v3 == g5) {
        // 0x60902
        return result;
    }
    // 0x608fc
    return function_607e2(v3);
}

// Address range: 0x6304a - 0x6307c
int64_t function_6304a(int64_t a1) {
    // 0x6304a
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    int64_t result = function_63032(a1 + 32); // 0x63069
    *(int64_t *)(a1 + 24) = 0;
    *(char *)(a1 + 56) = 0;
    return result;
}

// Address range: 0x69134 - 0x69166
int64_t function_69134(int64_t a1) {
    // 0x69134
    *(int32_t *)(a1 + 168) = 0;
    function_6a710(a1 + 48);
    function_6a710(a1 + 96);
    int64_t v1 = *(int64_t *)(a1 + 144); // 0x69154
    *(int64_t *)(a1 + 152) = v1;
    return v1 & -256 | 1;
}

// Address range: 0x119b8e - 0x119bc1
int64_t function_119b8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x119b8e
    int64_t v1; // 0x119b8e
    if (a4 != 1 && (int32_t)v1 != 0x5c342e01) {
        function_119b7e();
    }
    // 0x119b96
    *(char *)a2 = (char)a2 + 96;
    char v2 = *(char *)0x710aab; // 0x119ba4
    *(char *)0x710aab = v2 + (char)((uint64_t)v1 / 256);
    int64_t v3 = __asm_hlt(); // 0x119bab
    int32_t * v4 = (int32_t *)v3; // 0x119bbc
    *v4 = *v4 + (int32_t)v3;
    int64_t v5 = __asm_int1(); // 0x119bbe
    return (v5 + 136) % 256 | v5 & -256;
}

// Address range: 0x34d253 - 0x34d27b
int64_t function_34d253(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34d253
    int64_t v1; // 0x34d253
    int64_t result; // 0x34d253
    int64_t v2 = (int64_t)&v1 - result & 0xffffffff; // 0x34d255
    if (a4 == 1) {
        // 0x34d25b
        *(int64_t *)0xa5e34212 = 0;
        return *(int64_t *)v2 & 0xffffffff;
    }
    // 0x34d272
    *(int64_t *)(v2 - 8) = v2;
    if ((int16_t)result >= 0) {
        // 0x34d2b3
        return result;
    }
    // 0x34d279
    return result & -0xff01 | (int64_t)&g8;
}

// Address range: 0x34d27d - 0x34d280
int64_t function_34d27d(int64_t a1) {
    // 0x34d27d
    int64_t result; // 0x34d27d
    return result;
}

// Address range: 0x494d90 - 0x494dc3
int64_t function_494d90(int64_t a1) {
    // 0x494d90
    if (a1 == 0) {
        // 0x494dbc
        int64_t result; // 0x494d90
        return result;
    }
    int64_t v1 = a1; // 0x494d9c
    int64_t * v2 = (int64_t *)v1; // 0x494da0
    v1 += 24;
    free((int64_t *)*v2);
    free(v2);
    while (v1 != 0) {
        // 0x494da0
        v2 = (int64_t *)v1;
        v1 += 24;
        free((int64_t *)*v2);
        free(v2);
    }
    // 0x494dbc
    return (int64_t)&g9;
}

// Address range: 0x498b30 - 0x498b62
int64_t function_498b30(int64_t a1) {
    int64_t result = 1; // 0x498b45
    int64_t v1; // 0x498b30
    if ((int32_t)function_4c4450(a1, 1, v1) == 0) {
        // 0x498b47
        result = (int32_t)function_4c4450(a1, 4, 1) == 0 ? 0 : 3;
    }
    // 0x498b5e
    return result;
}

// Address range: 0x4c48b0 - 0x4c48d7
int64_t function_4c48b0(int64_t a1) {
    // 0x4c48b0
    int64_t v1; // 0x4c48b0
    return a1 == 0 ? v1 : 0;
}

// Address range: 0x54d2a0 - 0x54d2d3
// From class:    std::ctype<wchar_t>
// Type:          constructor
int64_t function_54d2a0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x54d2b3
    *v1 = (int64_t)&g3;
    function_5679e0(a1 + 16);
    *v1 = (int64_t)&g2;
    return function_565970(a1);
}
