/*
 * Targeted RetDec C for native executable gap queue batch 89.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x545160-0x5451a2 rank=37 name=fcn.00545160 kind=r2_discovered bytes=66 uncovered=66
 *   0x25194-0x251d5 rank=38 name=fcn.00025194 kind=r2_discovered bytes=65 uncovered=65
 *   0x2608e-0x260cf rank=39 name=fcn.0002608e kind=r2_discovered bytes=65 uncovered=65
 *   0x2981e-0x2985f rank=40 name=fcn.0002981e kind=r2_discovered bytes=65 uncovered=65
 *   0x6bab2-0x6baf3 rank=41 name=fcn.0006bab2 kind=r2_discovered bytes=65 uncovered=65
 *   0x7270e-0x7274f rank=42 name=fcn.0007270e kind=r2_discovered bytes=65 uncovered=65
 *   0x374d29-0x374d6a rank=43 name=fcn.00374d29 kind=r2_discovered bytes=65 uncovered=65
 *   0x48d5bb-0x48d5fc rank=44 name=fcn.0048d5bb kind=r2_discovered bytes=65 uncovered=65
 *   0x496a10-0x496a51 rank=45 name=fcn.00496a10 kind=r2_discovered bytes=65 uncovered=65
 *   0x4c3260-0x4c32a1 rank=46 name=fcn.004c3260 kind=r2_discovered bytes=65 uncovered=65
 *   0x4d4740-0x4d4781 rank=47 name=fcn.004d4740 kind=r2_discovered bytes=65 uncovered=65
 *   0x3aeea-0x3af2a rank=48 name=fcn.0003aeea kind=r2_discovered bytes=64 uncovered=64
 *   0x61428-0x61468 rank=49 name=fcn.00061428 kind=r2_discovered bytes=64 uncovered=64
 *   0x4ee640-0x4ee680 rank=50 name=sym.ZydisRegisterEncode kind=symbol_named bytes=64 uncovered=64
 *   0x4ee970-0x4ee9b0 rank=51 name=sym.ZydisGetOperandDefinitions kind=symbol_named bytes=64 uncovered=64
 *   0x4f1b30-0x4f1b70 rank=52 name=fcn.004f1b30 kind=r2_discovered bytes=64 uncovered=64
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

int64_t function_20210();
int64_t function_203b0();
int64_t function_25018();
int64_t function_2508e();
int64_t function_25194(int64_t a1);
int64_t function_25e90();
int64_t function_2608e(int64_t a1, int64_t a2);
int64_t function_2981e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a17c();
int64_t function_36b14();
int64_t function_374d29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3aeea(int64_t result, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_48d385();
int64_t function_48d5bb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48d7ed();
int64_t function_496a10(int64_t a1, int64_t a2);
int64_t function_4c3060();
int64_t function_4c3260(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4d4740(uint64_t a1, uint64_t a2, int64_t a3, uint64_t a4);
int64_t function_4eeb50();
int64_t function_4f0ad0();
int64_t function_4f0eb0();
int64_t function_4f1b30(void);
int64_t function_52af50();
int64_t function_545160(int64_t a1);
int64_t function_5451a1(int64_t a1);
int64_t function_61428(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_61bbe();
int64_t function_6897e();
int64_t function_6bab2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6bf2a();
int64_t function_7270e(int64_t a1, int64_t a2);
int64_t function_c4258();

// Address range: 0x25194 - 0x251d5
int64_t function_25194(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x2519b
    int64_t v2 = a1; // 0x251a5
    int64_t result; // 0x25194
    if (v1 != a1) {
        function_2508e(a1 + 8);
        int64_t v3 = a1 + 24; // 0x251b3
        result = function_2508e(a1);
        v2 = a1;
        while (v1 != v3) {
            int64_t v4 = v3;
            function_2508e(v4 + 8);
            v3 = v4 + 24;
            result = function_2508e(v4);
            v2 = v4;
        }
    }
    // 0x251be
    if (v2 == 0) {
        // 0x251d0
        return result;
    }
    // 0x251c7
    return function_4eeb50(v2);
}

// Address range: 0x2608e - 0x260cf
int64_t function_2608e(int64_t a1, int64_t a2) {
    int64_t result = a2; // 0x2609e
    while (*(int64_t *)(a2 + 8) != result) {
        // 0x260a1
        if (function_48d7ed(a1, *(int64_t *)result) != 0) {
            // break -> 0x260c7
            break;
        }
        // 0x260aa
        result += 8;
    }
    // 0x260c7
    return result;
}

// Address range: 0x2981e - 0x2985f
int64_t function_2981e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + (int64_t)&g1; // 0x29820
    int64_t v2 = 0x100000000 * a2 >> 32; // bp-28, 0x29833
    int64_t v3 = function_2a17c(v1, &v2, a3); // 0x2983a
    int64_t v4 = v3; // 0x29844
    int64_t v5 = 0; // 0x29844
    if (*(char *)v3 == 0) {
        // 0x29846
        v4 = function_2a17c(v1, &v2, 0);
        *(char *)v4 = 1;
        v5 = 1;
    }
    // 0x29856
    return v4 & -256 | v5;
}

// Address range: 0x3aeea - 0x3af2a
int64_t function_3aeea(int64_t result, int64_t a2, uint64_t a3, int64_t a4) {
    uint64_t v1 = *(int64_t *)(result - 24) - a2; // 0x3aefd
    function_25e90(result, function_36b14(), v1 > a3 ? a3 : v1, 0);
    return result;
}

// Address range: 0x61428 - 0x61468
int64_t function_61428(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x61428
    if (a3 % 2 != 0 || *(int64_t *)(a1 + 8) != 2) {
        // 0x61460
        int64_t v1; // 0x61428
        return v1 & -256 | 1;
    }
    uint64_t v2 = function_52af50(); // 0x6143f
    uint64_t v3 = function_61bbe(a1 + 48, 5); // 0x61450
    int64_t result = 0; // 0x61458
    if (v2 <= v3) {
        // 0x6145e
        result = v3 & -256 | 1;
    }
    // 0x61460
    return result;
}

// Address range: 0x6bab2 - 0x6baf3
int64_t function_6bab2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6bab2
    function_6897e();
    *(int64_t *)a1 = (int64_t)&g7;
    int64_t result = function_6bf2a(a1 + 168); // 0x6bacf
    *(int32_t *)(a1 + 160) = 0;
    *(int32_t *)(a1 + 248) = 0;
    *(int16_t *)(a1 + 252) = 0;
    return result;
}

// Address range: 0x7270e - 0x7274f
int64_t function_7270e(int64_t a1, int64_t a2) {
    int64_t result = function_4f0ad0(a2); // 0x7271b
    int64_t v1 = function_4f0eb0(a2, a1 + 8); // 0x7272a
    function_25018(v1 + 32);
    function_4eeb50(v1);
    int64_t * v2 = (int64_t *)(a1 + 40); // 0x72746
    *v2 = *v2 - 1;
    return result;
}

// Address range: 0x374d29 - 0x374d6a
int64_t function_374d29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x374d29
    return function_c4258(a1);
}

// Address range: 0x48d5bb - 0x48d5fc
int64_t function_48d5bb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48d5bb
    if (a3 == 0) {
        // 0x48d5e9
        return function_48d385(a2);
    }
    int64_t v1 = a3 - 1;
    int64_t v2 = v1; // 0x48d5cc
    int64_t v3 = a2; // 0x48d5cc
    int64_t v4 = a1; // 0x48d5cc
    int64_t v5 = a1; // 0x48d5cc
    int64_t v6 = a2; // 0x48d5cc
    if (v1 != 0) {
        int32_t v7 = *(int32_t *)v3; // 0x48d5ce
        *(int32_t *)v4 = v7;
        v5 = v4;
        v6 = v3;
        while (v7 != 0) {
            // 0x48d5d6
            v3 += 4;
            v4 += 4;
            v2--;
            v5 = v4;
            v6 = v3;
            if (v2 == 0) {
                // break -> 0x48d5e3
                break;
            }
            v7 = *(int32_t *)v3;
            *(int32_t *)v4 = v7;
            v5 = v4;
            v6 = v3;
        }
    }
    // 0x48d5e3
    *(int32_t *)v5 = 0;
    // 0x48d5e9
    return function_48d385(v6) + (v5 - a1 >> 2);
}

// Address range: 0x496a10 - 0x496a4f
int64_t function_496a10(int64_t a1, int64_t a2) {
    // 0x496a10
    if (*(int32_t *)(a1 + 24) < 3) {
        int64_t result = *(int64_t *)(a1 + 96); // 0x496a30
        *(int64_t *)(result + (int64_t)&g6) = (int64_t)&g2;
        return result;
    }
    int64_t result2 = *(int64_t *)(a1 + 96); // 0x496a1a
    if (*(int32_t *)(a2 + 20) == 7) {
        // 0x496a48
        return result2;
    }
    // 0x496a20
    *(int64_t *)(result2 + (int64_t)&g6) = (int64_t)&g3;
    return result2;
}

// Address range: 0x4c3260 - 0x4c32a1
int64_t function_4c3260(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_4c3060(); // 0x4c3274
    int64_t result = 0xffffffd2; // 0x4c327c
    if (v1 != 0) {
        // 0x4c327e
        *(int32_t *)a2 = *(int32_t *)(v1 + 32);
        *(int32_t *)a3 = *(int32_t *)(v1 + 36);
        result = 0;
    }
    // 0x4c328b
    return result;
}

// Address range: 0x4d4740 - 0x4d477a
int64_t function_4d4740(uint64_t a1, uint64_t a2, int64_t a3, uint64_t a4) {
    int64_t result; // 0x4d4740
    if (a1 < a2) {
        // 0x4d4778
        return result;
    }
    // 0x4d474f
    result = 0xffffff94;
    if (a1 - a2 >= a4) {
        int64_t v1 = a1 - a4; // 0x4d4768
        *(int64_t *)a1 = v1;
        memcpy((int64_t *)v1, (int64_t *)a3, (int32_t)a4);
        result = a4 & 0xffffffff;
    }
    // 0x4d4778
    return result;
}

// Address range: 0x4ee640 - 0x4ee67d
int64_t ZydisRegisterEncode(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 0xffffffff; // 0x4ee644
    if ((int32_t)v1 >= 19) {
        // 0x4ee680
        return v1 & 0xffffffff;
    }
    int64_t v2 = a1 + 0xfffffff5; // 0x4ee64c
    if ((int32_t)v2 < 2) {
        // 0x4ee680
        return v2 & 0xffffffff;
    }
    int64_t v3 = 12 * (a1 & 0xffffffff); // 0x4ee665
    int32_t v4 = *(int32_t *)(v3 + (int64_t)&g5); // 0x4ee669
    int32_t v5 = *(int32_t *)(v3 + (int64_t)&g5 + 4); // 0x4ee66b
    uint32_t v6 = (int32_t)a2 % 256; // 0x4ee670
    return (int64_t)(v5 - v4 < v6 ? 0 : v4 + v6);
}

// Address range: 0x4ee970 - 0x4ee9ad
int64_t ZydisGetOperandDefinitions(int64_t a1) {
    // 0x4ee970
    if ((*(char *)(a1 + 1) & 120) == 0) {
        // 0x4ee9b0
        int64_t result; // 0x4ee970
        return result;
    }
    unsigned char v1 = *(char *)(a1 + 2); // 0x4ee97a
    unsigned char v2 = *(char *)(a1 + 3); // 0x4ee97e
    unsigned char v3 = *(char *)(a1 + 4); // 0x4ee98f
    return 13 * (64 * (int64_t)v2 | (int64_t)(v1 / 4) | 0x4000 * (int64_t)(v3 % 2)) + g9;
}

// Address range: 0x4f1b30 - 0x4f1b70
// From class:    __gnu_cxx::__concurrence_lock_error
// Type:          constructor
int64_t function_4f1b30(void) {
    int64_t v1 = function_20210(8); // 0x4f1b39
    *(int64_t *)v1 = (int64_t)&g8;
    return function_203b0(v1, 0x843260, &g4);
}

// Address range: 0x545160 - 0x5451a0
int64_t function_545160(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 232 + *(int64_t *)(a1 - 24)); // 0x54516b
    int64_t result = a1; // 0x545176
    if (v1 != 0) {
        // 0x545178
        result = (int32_t)*(int64_t *)v1 == -1 ? v1 : a1;
    }
    // 0x545183
    return result;
}

// Address range: 0x5451a1 - 0x5451a2
int64_t function_5451a1(int64_t a1) {
    // 0x5451a1
    int64_t result; // 0x5451a1
    return result;
}
