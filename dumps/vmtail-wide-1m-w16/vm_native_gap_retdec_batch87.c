/*
 * Targeted RetDec C for native executable gap queue batch 87.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4b0ec0-0x4b0f05 rank=69 name=fcn.004b0ec0 kind=r2_discovered bytes=69 uncovered=69
 *   0x50f7d0-0x50f815 rank=70 name=fcn.0050f7d0 kind=r2_discovered bytes=69 uncovered=69
 *   0x5246d0-0x524715 rank=71 name=fcn.005246d0 kind=r2_discovered bytes=69 uncovered=69
 *   0x564de0-0x564e25 rank=72 name=fcn.00564de0 kind=r2_discovered bytes=69 uncovered=69
 *   0x565f30-0x565f75 rank=73 name=fcn.00565f30 kind=r2_discovered bytes=69 uncovered=69
 *   0x24d70-0x24db4 rank=74 name=fcn.00024d70 kind=r2_discovered bytes=68 uncovered=68
 *   0x28c8c-0x28cd0 rank=75 name=fcn.00028c8c kind=r2_discovered bytes=68 uncovered=68
 *   0x35bf4-0x35c38 rank=76 name=fcn.00035bf4 kind=r2_discovered bytes=68 uncovered=68
 *   0x50f90-0x50fd4 rank=77 name=fcn.00050f90 kind=r2_discovered bytes=68 uncovered=68
 *   0x53ee6-0x53f2a rank=78 name=fcn.00053ee6 kind=r2_discovered bytes=68 uncovered=68
 *   0x552be-0x55302 rank=79 name=fcn.000552be kind=r2_discovered bytes=68 uncovered=68
 *   0x76f4a-0x76f8e rank=80 name=fcn.00076f4a kind=r2_discovered bytes=68 uncovered=68
 *   0x48ca0e-0x48ca52 rank=81 name=fcn.0048ca0e kind=r2_discovered bytes=68 uncovered=68
 *   0x564b40-0x564b84 rank=82 name=sym.__cxa_init_primary_exception kind=symbol_named bytes=68 uncovered=68
 *   0x564b90-0x564bd4 rank=83 name=sym.__cxa_throw kind=symbol_named bytes=68 uncovered=68
 *   0x21700-0x21743 rank=84 name=entry.init0 kind=native_discovered bytes=67 uncovered=67
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
int64_t _Unwind_RaiseException(int64_t exception);
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_1fd40();
int64_t function_20650();
int64_t function_20660();
int64_t function_21670();
int64_t function_21700(void);
int64_t function_2170a(int64_t a1, int32_t a2, int32_t a3);
int64_t function_21736(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24cfa();
int64_t function_24d70(int64_t a1, int64_t a2);
int64_t function_2562c();
int64_t function_25a28();
int64_t function_2833e();
int64_t function_28c8c(int64_t a1, int64_t a2);
int64_t function_29cf4();
int64_t function_29ef7();
int64_t function_35b6a();
int64_t function_35bf4(int64_t a1, int64_t a2);
int64_t function_48c82e();
int64_t function_48ca0e(int64_t a1, int64_t a2);
int64_t function_4b0ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4efcb0();
int64_t function_4efcc0();
int64_t function_4efd00();
int64_t function_50688();
int64_t function_50f7d0(int64_t a1);
int64_t function_50f90(int64_t a1, int64_t a2);
int64_t function_5246d0(int64_t result4);
int64_t function_53a58();
int64_t function_53ee6(int64_t a1, int64_t a2);
int64_t function_54d04();
int64_t function_552be(int64_t a1, int64_t a2);
int64_t function_564de0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5659b0();
int64_t function_565f30(void);
int64_t function_76e68();
int64_t function_76f4a(int64_t a1, int64_t a2);

// Address range: 0x21700 - 0x2170a
int64_t function_21700(void) {
    // 0x21700
    return function_21670();
}

// Address range: 0x2170a - 0x21736
int64_t function_2170a(int64_t a1, int32_t a2, int32_t a3) {
    // 0x2170a
    *(int32_t *)a1 = a2;
    *(int16_t *)(a1 + 4) = (int16_t)a3;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    __asm_rep_stosd_memset((char *)(a1 + 32), 0, 8);
    return 0;
}

// Address range: 0x21736 - 0x2173c
int64_t function_21736(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21736
    return function_2170a(a1, 0, 0);
}

// Address range: 0x24d70 - 0x24db4
int64_t function_24d70(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x24d7a
    int64_t v2 = function_24cfa(v1, *(int64_t *)(a1 + 8)); // 0x24d81
    int64_t result = 0; // 0x24d93
    if (v1 != 0) {
        // 0x24d95
        function_25a28(result, a1 + 24, v1);
    }
    // 0x24da1
    function_2562c(v2, result);
    return result;
}

// Address range: 0x28c8c - 0x28cd0
int64_t function_28c8c(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x28c96
    int64_t v2 = function_2833e(v1, *(int64_t *)(a1 + 8)); // 0x28c9d
    int64_t result = 0; // 0x28caf
    if (v1 != 0) {
        // 0x28cb1
        function_29ef7(result, a1 + 24, v1);
    }
    // 0x28cbd
    function_29cf4(v2, result);
    return result;
}

// Address range: 0x35bf4 - 0x35c38
int64_t function_35bf4(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x35bfe
    int64_t v2 = function_35b6a(v1, *(int64_t *)(a1 + 8)); // 0x35c05
    int64_t result = 0; // 0x35c17
    if (v1 != 0) {
        // 0x35c19
        function_29ef7(result, a1 + 24, v1);
    }
    // 0x35c25
    function_29cf4(v2, result);
    return result;
}

// Address range: 0x50f90 - 0x50fd4
int64_t function_50f90(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x50f9a
    int64_t v2 = function_50688(v1, *(int64_t *)(a1 + 8)); // 0x50fa1
    int64_t result = 0; // 0x50fb3
    if (v1 != 0) {
        // 0x50fb5
        function_29ef7(result, a1 + 24, v1);
    }
    // 0x50fc1
    function_29cf4(v2, result);
    return result;
}

// Address range: 0x53ee6 - 0x53f2a
int64_t function_53ee6(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x53ef0
    int64_t v2 = function_53a58(v1, *(int64_t *)(a1 + 8)); // 0x53ef7
    int64_t result = 0; // 0x53f09
    if (v1 != 0) {
        // 0x53f0b
        function_29ef7(result, a1 + 24, v1);
    }
    // 0x53f17
    function_29cf4(v2, result);
    return result;
}

// Address range: 0x552be - 0x55302
int64_t function_552be(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x552c8
    int64_t v2 = function_54d04(v1, *(int64_t *)(a1 + 8)); // 0x552cf
    int64_t result = 0; // 0x552e1
    if (v1 != 0) {
        // 0x552e3
        function_29ef7(result, a1 + 24, v1);
    }
    // 0x552ef
    function_29cf4(v2, result);
    return result;
}

// Address range: 0x76f4a - 0x76f8e
int64_t function_76f4a(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x76f54
    int64_t v2 = function_76e68(v1, *(int64_t *)(a1 + 8)); // 0x76f5b
    int64_t result = 0; // 0x76f6d
    if (v1 != 0) {
        // 0x76f6f
        function_25a28(result, a1 + 24, v1);
    }
    // 0x76f7b
    function_2562c(v2, result);
    return result;
}

// Address range: 0x48ca0e - 0x48ca52
int64_t function_48ca0e(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + a1; // 0x48ca18
    int64_t v2 = function_48c82e(v1, *(int64_t *)(a1 + 8)); // 0x48ca1f
    int64_t result = 0; // 0x48ca31
    if (v1 != 0) {
        // 0x48ca33
        function_25a28(result, a1 + 24, v1);
    }
    // 0x48ca3f
    function_2562c(v2, result);
    return result;
}

// Address range: 0x4b0ec0 - 0x4b0f04
int64_t function_4b0ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4b0ec0
    int64_t result; // 0x4b0ec0
    if (*(int64_t *)(a1 + 8) == 0) {
        // 0x4b0ef3
        return result;
    }
    int64_t v1 = 0; // 0x4b0edd
    result = v1;
    while ((1 << v1 % 64 & *(int64_t *)*(int64_t *)(a1 + 16)) == 0) {
        // 0x4b0ee0
        v1++;
        result = 64;
        if (v1 == 64) {
            // break -> 0x4b0ef3
            break;
        }
        result = v1;
    }
    // 0x4b0ef3
    return result;
}

// Address range: 0x50f7d0 - 0x50f80a
int64_t function_50f7d0(int64_t a1) {
    // 0x50f7d0
    if (a1 == 0) {
        // 0x50f7e5
        return 0xffffffff;
    }
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x50f7dd
    uint32_t result = *v1; // 0x50f7dd
    if (result != -1) {
        // 0x50f7e5
        return result;
    }
    uint64_t result2 = *(int64_t *)(a1 + 16); // 0x50f7f1
    if (result2 >= *(int64_t *)(a1 + 24)) {
        // 0x50f7e5
        return result2;
    }
    uint32_t result3 = *(int32_t *)result2; // 0x50f7fe
    if (result3 == -1) {
        // 0x50f7e5
        return 0xffffffff;
    }
    // 0x50f805
    *v1 = result3;
    return result3;
}

// Address range: 0x5246d0 - 0x524715
int64_t function_5246d0(int64_t result4) {
    // 0x5246d0
    if (result4 == 0) {
        // 0x524717
        int64_t result; // 0x5246d0
        return result;
    }
    int32_t * v1 = (int32_t *)(result4 + 8); // 0x5246d8
    uint32_t result2 = *v1; // 0x5246d8
    if (result2 != -1) {
        // 0x5246e0
        return result2;
    }
    uint64_t v2 = *(int64_t *)(result4 + 16); // 0x5246e9
    if (v2 < *(int64_t *)(result4 + 24)) {
        unsigned char result3 = *(char *)v2; // 0x5246f6
        // 0x5246f9
        *v1 = (int32_t)result3;
        return result3;
    }
    int32_t v3 = result4;
    if (v3 == -1) {
        // 0x52470e
        *(int64_t *)result4 = 0;
        return result4;
    }
    // 0x5246f9
    *v1 = v3;
    return result4;
}

// Address range: 0x564b40 - 0x564b84
int64_t __cxa_init_primary_exception(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = a1 - 128; // 0x564b41
    *(int32_t *)result = 0;
    *(int64_t *)(a1 - 112) = a2;
    *(int64_t *)(a1 - 104) = a3;
    *(int64_t *)(a1 - 96) = function_4efd00();
    *(int64_t *)(a1 - 88) = function_4efcb0();
    *(int64_t *)(a1 - 32) = 0x474e5543432b2b00;
    *(int64_t *)(a1 - 24) = (int64_t)&g1;
    return result;
}

// Address range: 0x564b90 - 0x564bd4
int64_t __cxa_throw(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(function_20650() + 8); // 0x564ba3
    *v1 = *v1 + 1;
    int64_t v2 = function_20660(a1, a2, a3); // 0x564bb0
    int64_t v3 = v2 + 96; // 0x564bb5
    *(int32_t *)v2 = 1;
    _Unwind_RaiseException(v3);
    function_1fd40(v3);
    return function_4efcc0();
}

// Address range: 0x564de0 - 0x564e25
int64_t function_564de0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x564de7
    int64_t str2 = *(int64_t *)(a2 + 8); // 0x564dee
    if (v1 != str2) {
        char * str = (char *)v1; // 0x564df9
        if (*str == 42 || strcmp(str, (char *)str2) != 0) {
            // 0x564e1e
            return 0;
        }
    }
    // 0x564e07
    *(int64_t *)a4 = a3;
    *(int64_t *)(a4 + 16) = 16;
    *(int32_t *)(a4 + 8) = 6;
    // 0x564e1e
    return 1;
}

// Address range: 0x565f30 - 0x565f75
int64_t function_565f30(void) {
    // 0x565f30
    if (g2 != 0) {
        // 0x565f50
        pthread_once((int32_t *)&g3, (void (*)())0x5659b0);
        return g4;
    }
    // 0x565f3b
    if (g4 == 0) {
        // 0x565f70
        return function_5659b0();
    }
    // 0x565f4a
    return g4;
}
