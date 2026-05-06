/*
 * Targeted RetDec C for native executable gap queue batch 84.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5568e0-0x556928 rank=21 name=fcn.005568e0 kind=r2_discovered bytes=72 uncovered=72
 *   0x556930-0x556978 rank=22 name=fcn.00556930 kind=r2_discovered bytes=72 uncovered=72
 *   0x556a20-0x556a68 rank=23 name=fcn.00556a20 kind=r2_discovered bytes=72 uncovered=72
 *   0x556a70-0x556ab8 rank=24 name=fcn.00556a70 kind=r2_discovered bytes=72 uncovered=72
 *   0x568180-0x5681c8 rank=25 name=fcn.00568180 kind=r2_discovered bytes=72 uncovered=72
 *   0x255da-0x25621 rank=26 name=fcn.000255da kind=r2_discovered bytes=71 uncovered=71
 *   0x2a2ac-0x2a2f3 rank=27 name=fcn.0002a2ac kind=r2_discovered bytes=71 uncovered=71
 *   0x3b248-0x3b28f rank=28 name=fcn.0003b248 kind=r2_discovered bytes=71 uncovered=71
 *   0x4bfb4-0x4bffb rank=29 name=fcn.0004bfb4 kind=r2_discovered bytes=71 uncovered=71
 *   0x4f5fc-0x4f643 rank=30 name=fcn.0004f5fc kind=r2_discovered bytes=71 uncovered=71
 *   0x52d3e-0x52d85 rank=31 name=fcn.00052d3e kind=r2_discovered bytes=71 uncovered=71
 *   0x5bfb2-0x5bff9 rank=32 name=fcn.0005bfb2 kind=r2_discovered bytes=71 uncovered=71
 *   0x717fa-0x71841 rank=33 name=fcn.000717fa kind=r2_discovered bytes=71 uncovered=71
 *   0x49016c-0x4901b3 rank=34 name=fcn.0049016c kind=r2_discovered bytes=71 uncovered=71
 *   0x4901b3-0x4901fa rank=35 name=fcn.004901b3 kind=r2_discovered bytes=71 uncovered=71
 *   0x4901fa-0x490241 rank=36 name=fcn.004901fa kind=r2_discovered bytes=71 uncovered=71
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
extern int g5;
extern int g6;
extern int g7;
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
int64_t _Unwind_RaiseException(int64_t exception);
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_20730();
int64_t function_2508e();
int64_t function_250b0();
int64_t function_255da(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25622();
int64_t function_2562c();
int64_t function_2570a();
int64_t function_25e90();
int64_t function_29cea();
int64_t function_29d94();
int64_t function_2a25c();
int64_t function_2a2ac(int64_t a1, int64_t a2);
int64_t function_36ff8();
int64_t function_3b248(int64_t str, int64_t str2);
int64_t function_455ee();
int64_t function_49016c(int64_t result);
int64_t function_4901b3(int64_t result);
int64_t function_4901fa(int64_t result);
int64_t function_4bfb4(int64_t result, int64_t a2);
int64_t function_4eeb50();
int64_t function_4f5fc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_504cb();
int64_t function_52768();
int64_t function_52d3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_54ce50();
int64_t function_5568e0(int64_t a1);
int64_t function_556930(int64_t a1);
int64_t function_556a20(int64_t a1);
int64_t function_556a70(int64_t a1);
int64_t function_5659d0();
int64_t function_566100();
int64_t function_566390();
int64_t function_568180(int64_t result, int64_t a2, int64_t a3);
int64_t function_5bfb2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_71754();
int64_t function_717fa(int64_t a1, int64_t a2);

// Address range: 0x255da - 0x25621
int64_t function_255da(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result2 = a1 - 24; // 0x255e1
    int64_t result = function_2570a(result2); // 0x255e5
    if ((char)result != 0) {
        // 0x2561f
        return result;
    }
    int64_t v1 = a1 - 48; // 0x255f1
    if (v1 == (int64_t)g2) {
        // 0x2561f
        return result2;
    }
    int64_t v2 = function_25622(v1); // 0x255fe
    int64_t result3 = v1; // 0x25605
    if ((char)v2 != 0) {
        // 0x25607
        function_25e90(a1, 0, 0, 0);
        result3 = a1;
    }
    // 0x25615
    *(int32_t *)(result3 - 8) = -1;
    // 0x2561f
    return result3;
}

// Address range: 0x2a2ac - 0x2a2f3
int64_t function_2a2ac(int64_t a1, int64_t a2) {
    // 0x2a2ac
    int64_t result; // 0x2a2ac
    if (a2 == 0) {
        // 0x2a2ee
        return result;
    }
    int64_t v1 = a2;
    function_2a2ac(a1, *(int64_t *)(v1 + 24));
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x2a2cf
    function_2a25c(v1 + 40, *(int64_t *)(v1 + 56));
    function_2508e(v1 + 32);
    result = function_4eeb50(v1);
    while (v2 != 0) {
        // 0x2a2bb
        v1 = v2;
        function_2a2ac(a1, *(int64_t *)(v1 + 24));
        v2 = *(int64_t *)(v1 + 16);
        function_2a25c(v1 + 40, *(int64_t *)(v1 + 56));
        function_2508e(v1 + 32);
        result = function_4eeb50(v1);
    }
    // 0x2a2ee
    return result;
}

// Address range: 0x3b248 - 0x3b28f
int64_t function_3b248(int64_t str, int64_t str2) {
    uint64_t v1 = *(int64_t *)(str + 8) - str; // 0x3b25c
    uint64_t v2 = *(int64_t *)(str2 + 8) - str2; // 0x3b25f
    int64_t n = v1 > v2 ? v2 : v1; // 0x3b268
    if (n == 0) {
        // 0x3b28b
        return str & -256 | (int64_t)(v1 < v2);
    }
    int32_t memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n); // 0x3b277
    if (memcmp_rc == 0) {
        // 0x3b28b
        return v1 < v2;
    }
    // 0x3b28b
    return memcmp_rc < 0;
}

// Address range: 0x4bfb4 - 0x4bffb
int64_t function_4bfb4(int64_t result, int64_t a2) {
    // 0x4bfb4
    *(int16_t *)result = (int16_t)*(int32_t *)a2;
    function_29d94(result + 8, a2 + 8);
    function_29d94(result + 16, a2 + 16);
    *(int32_t *)(result + 24) = *(int32_t *)(a2 + 24);
    function_29d94(result + 32, a2 + 32);
    return result;
}

// Address range: 0x4f5fc - 0x4f643
int64_t function_4f5fc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4f5fc
    if (*(int64_t *)(a1 + 176) < 2 || *(int64_t *)(a1 + 256) == a2) {
        // 0x4f642
        int64_t v1; // 0x4f5fc
        return v1 & -256 | 1;
    }
    int64_t v2 = *(int64_t *)(a1 + 32); // 0x4f624
    int64_t v3 = function_455ee(v2 + 18 + 126 * *(int64_t *)(a1 + 184), 108, 0); // 0x4f62c
    int32_t v4 = v3; // 0x4f631
    *(int32_t *)(a1 + 252) = v4;
    return v3 & -256 | (int64_t)(*(int32_t *)(a1 + 248) != v4);
}

// Address range: 0x52d3e - 0x52d85
int64_t function_52d3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result2 = a1 - 24; // 0x52d45
    int64_t result = function_52768(result2); // 0x52d49
    if ((char)result != 0) {
        // 0x52d83
        return result;
    }
    int64_t v1 = a1 - 48; // 0x52d55
    if (v1 == *(int64_t *)0x848c20) {
        // 0x52d83
        return result2;
    }
    int64_t v2 = function_29cea(v1); // 0x52d62
    int64_t result3 = v1; // 0x52d69
    if ((char)v2 != 0) {
        // 0x52d6b
        function_36ff8(a1, 0, 0, 0);
        result3 = a1;
    }
    // 0x52d79
    *(int32_t *)(result3 - 8) = -1;
    // 0x52d83
    return result3;
}

// Address range: 0x5bfb2 - 0x5bff9
int64_t function_5bfb2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x5bfc6
    if (v1 <= a3) {
        // 0x5bfed
        return -1;
    }
    int64_t v2 = a3; // 0x5bfcd
    int64_t v3 = function_504cb(a2, a4, v2 + a1); // 0x5bfda
    int64_t result = v2; // 0x5bfe2
    while (v3 != 0) {
        // 0x5bfe4
        v2++;
        result = -1;
        if (v2 >= v1) {
            // break -> 0x5bfed
            break;
        }
        v3 = function_504cb(a2, a4, v2 + a1);
        result = v2;
    }
    // 0x5bfed
    return result;
}

// Address range: 0x717fa - 0x71841
int64_t function_717fa(int64_t a1, int64_t a2) {
    int64_t v1 = function_71754(); // 0x71806
    int64_t result = v1 + 24; // 0x71812
    if (a1 == 1) {
        // 0x71818
        *(char *)result = (char)a2;
        // 0x7182e
        function_2562c(v1, a1, v1);
        return result;
    }
    if (a1 != 0) {
        // 0x71823
        __asm_rep_stosb_memset((char *)result, (char)a2, a1);
    }
    // 0x7182e
    function_2562c(v1, a1, v1);
    return result;
}

// Address range: 0x49016c - 0x4901b3
int64_t function_49016c(int64_t result) {
    int64_t v1 = __readfsqword(40); // 0x490180
    function_250b0();
    if (v1 != __readfsqword(40)) {
        // 0x4901a5
        __stack_chk_fail();
    }
    // 0x4901aa
    return result;
}

// Address range: 0x4901b3 - 0x4901fa
int64_t function_4901b3(int64_t result) {
    int64_t v1 = __readfsqword(40); // 0x4901c7
    function_250b0();
    if (v1 != __readfsqword(40)) {
        // 0x4901ec
        __stack_chk_fail();
    }
    // 0x4901f1
    return result;
}

// Address range: 0x4901fa - 0x490241
int64_t function_4901fa(int64_t result) {
    int64_t v1 = __readfsqword(40); // 0x49020e
    function_250b0();
    if (v1 != __readfsqword(40)) {
        // 0x490233
        __stack_chk_fail();
    }
    // 0x490238
    return result;
}

// Address range: 0x5568e0 - 0x556928
int64_t function_5568e0(int64_t a1) {
    uint64_t v1 = function_566390(&g5); // 0x5568eb
    if (*(int64_t *)((int64_t)&g5 + 16) <= v1) {
        // 0x556926
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g5 + 8); // 0x5568fe
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x556902
    int64_t result = 0; // 0x556909
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, 0x847658, 0x845fd8, 0); // 0x55691b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x556926
    return result;
}

// Address range: 0x556930 - 0x556978
int64_t function_556930(int64_t a1) {
    uint64_t v1 = function_566390(&g3); // 0x55693b
    if (*(int64_t *)((int64_t)&g3 + 16) <= v1) {
        // 0x556976
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g3 + 8); // 0x55694e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x556952
    int64_t result = 0; // 0x556959
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, (int64_t)&g1, 0x843678, 0); // 0x55696b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x556976
    return result;
}

// Address range: 0x556a20 - 0x556a68
int64_t function_556a20(int64_t a1) {
    uint64_t v1 = function_566390(&g6); // 0x556a2b
    if (*(int64_t *)((int64_t)&g6 + 16) <= v1) {
        // 0x556a66
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g6 + 8); // 0x556a3e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x556a42
    int64_t result = 0; // 0x556a49
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, (int64_t)&g1, 0x846808, 0); // 0x556a5b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x556a66
    return result;
}

// Address range: 0x556a70 - 0x556ab8
int64_t function_556a70(int64_t a1) {
    uint64_t v1 = function_566390(&g7); // 0x556a7b
    if (*(int64_t *)((int64_t)&g7 + 16) <= v1) {
        // 0x556ab6
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g7 + 8); // 0x556a8e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x556a92
    int64_t result = 0; // 0x556a99
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, (int64_t)&g1, 0x8467f0, 0); // 0x556aab
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x556ab6
    return result;
}

// Address range: 0x568180 - 0x5681c8
int64_t function_568180(int64_t result, int64_t a2, int64_t a3) {
    // 0x568180
    function_5659d0();
    function_566100(a2 + 208, a3);
    function_54ce50(a2, 1);
    return result;
}
