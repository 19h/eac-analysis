/*
 * Targeted RetDec C for native executable gap queue batch 73.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x259ce-0x25a28 rank=20 name=fcn.000259ce kind=r2_discovered bytes=90 uncovered=90
 *   0x4ba42-0x4ba9c rank=21 name=fcn.0004ba42 kind=r2_discovered bytes=90 uncovered=90
 *   0x4ba9c-0x4baf6 rank=22 name=fcn.0004ba9c kind=r2_discovered bytes=90 uncovered=90
 *   0x527a4-0x527fe rank=23 name=fcn.000527a4 kind=r2_discovered bytes=90 uncovered=90
 *   0x61d14-0x61d6e rank=24 name=fcn.00061d14 kind=r2_discovered bytes=90 uncovered=90
 *   0x63286-0x632e0 rank=25 name=fcn.00063286 kind=r2_discovered bytes=90 uncovered=90
 *   0x7293a-0x72994 rank=26 name=fcn.0007293a kind=r2_discovered bytes=90 uncovered=90
 *   0x2be60e-0x2be668 rank=27 name=fcn.002be60e kind=r2_discovered bytes=90 uncovered=90
 *   0x488c50-0x488caa rank=28 name=fcn.00488c50 kind=r2_discovered bytes=90 uncovered=90
 *   0x4afeb0-0x4aff0a rank=29 name=fcn.004afeb0 kind=r2_discovered bytes=90 uncovered=90
 *   0x4b0890-0x4b08ea rank=30 name=fcn.004b0890 kind=r2_discovered bytes=90 uncovered=90
 *   0x57f56-0x57faf rank=31 name=fcn.00057f56 kind=r2_discovered bytes=89 uncovered=89
 *   0x4b4f20-0x4b4f79 rank=32 name=fcn.004b4f20 kind=r2_discovered bytes=89 uncovered=89
 *   0x4f1530-0x4f1589 rank=33 name=fcn.004f1530 kind=r2_discovered bytes=89 uncovered=89
 *   0x4f2ff0-0x4f3049 rank=34 name=fcn.004f2ff0 kind=r2_discovered bytes=89 uncovered=89
 *   0x4f3080-0x4f30d9 rank=35 name=fcn.004f3080 kind=r2_discovered bytes=89 uncovered=89
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
int pthread_once(int32_t *once_control, ...);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int sem_init(int64_t *sem, int pshared, unsigned int value);
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

int64_t function_21a50();
int64_t function_24cb0();
int64_t function_24d70();
int64_t function_2508e();
int64_t function_25622();
int64_t function_259ce(int64_t a1, uint64_t a2);
int64_t function_29cea();
int64_t function_2be5f4();
int64_t function_2be60e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_488c28();
int64_t function_488c50(int64_t a1);
int64_t function_4afe70();
int64_t function_4afeb0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b0890(int64_t a1);
int64_t function_4b4f20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b942();
int64_t function_4ba42(int64_t a1, int64_t a2);
int64_t function_4ba9c(int64_t a1, int64_t a2);
int64_t function_4eeb40();
int64_t function_4f1530(int64_t fd, int64_t a2, int64_t result);
int64_t function_4f2ff0(int64_t a1);
int64_t function_4f3080(int64_t a1);
int64_t function_507a2();
int64_t function_50f90();
int64_t function_527a4(int64_t a1, uint64_t a2);
int64_t function_565970();
int64_t function_57f56(int64_t a1);
int64_t function_583640();
int64_t function_61d14(int64_t a1, int64_t a2);
int64_t function_63032();
int64_t function_63286(int64_t a1, int64_t a2);
int64_t function_7293a(int64_t mutex);
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x259ce - 0x25a28
int64_t function_259ce(int64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x259e1
    int64_t result; // 0x259ce
    if (*(int64_t *)(a1 - 16) == a2) {
        // 0x25a17
        v1 = a1 - 24;
        if ((char)function_25622(v1) == 0) {
            // 0x25a24
            return result;
        }
    }
    int64_t v2 = v1 - 24; // 0x259ea
    uint64_t v3 = *(int64_t *)v2; // 0x259ea
    int64_t v4 = function_24d70(v2, (v3 > a2 ? v3 : a2) - v3); // 0x259fc
    function_24cb0(v1 - 48);
    *(int64_t *)a1 = v4;
    // 0x25a24
    return result;
}

// Address range: 0x4ba42 - 0x4ba9c
int64_t function_4ba42(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4ba4f
    int64_t v2 = (int64_t)&g5; // bp-24, 0x4ba70
    function_4b942();
    function_2508e(&v2);
    int64_t result = 0; // 0x4ba8f
    if (v1 != __readfsqword(40)) {
        // 0x4ba91
        __stack_chk_fail();
        result = (int64_t)&g6;
    }
    // 0x4ba96
    return result;
}

// Address range: 0x4ba9c - 0x4baf6
int64_t function_4ba9c(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4baa9
    int64_t v2 = (int64_t)&g5; // bp-24, 0x4baca
    function_4b942();
    function_2508e(&v2);
    int64_t result = 0; // 0x4bae9
    if (v1 != __readfsqword(40)) {
        // 0x4baeb
        __stack_chk_fail();
        result = (int64_t)&g6;
    }
    // 0x4baf0
    return result;
}

// Address range: 0x527a4 - 0x527fe
int64_t function_527a4(int64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x527b7
    int64_t result; // 0x527a4
    if (*(int64_t *)(a1 - 16) == a2) {
        // 0x527ed
        v1 = a1 - 24;
        if ((char)function_29cea(v1) == 0) {
            // 0x527fa
            return result;
        }
    }
    int64_t v2 = v1 - 24; // 0x527c0
    uint64_t v3 = *(int64_t *)v2; // 0x527c0
    int64_t v4 = function_50f90(v2, (v3 > a2 ? v3 : a2) - v3); // 0x527d2
    function_507a2(v1 - 48);
    *(int64_t *)a1 = v4;
    // 0x527fa
    return result;
}

// Address range: 0x57f56 - 0x57faf
int64_t function_57f56(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x57f60
    int64_t v2 = 0; // 0x57f76
    if (a1 != 0) {
        // 0x57f78
        int64_t v3; // 0x57f56
        v2 = (int32_t)function_583640() != 0 ? 0 : v3;
    }
    int64_t result = v2; // 0x57f9f
    if (v1 != __readfsqword(40)) {
        // 0x57fa1
        __stack_chk_fail();
        result = (int64_t)&g6;
    }
    // 0x57fa6
    return result;
}

// Address range: 0x61d14 - 0x61d6e
int64_t function_61d14(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x61d2f
    function_729b6();
    *(int64_t *)(a1 + 32) = a2;
    int64_t v2; // bp-40, 0x61d14
    function_729ce(&v2);
    int64_t result = 0; // 0x61d5e
    if (v1 != __readfsqword(40)) {
        // 0x61d60
        __stack_chk_fail();
        result = (int64_t)&g6;
    }
    // 0x61d65
    return result;
}

// Address range: 0x63286 - 0x632e0
int64_t function_63286(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 32; // 0x6328b
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    function_63032(v1);
    function_21a50(a1, a2);
    int128_t v2 = __asm_movups(*(int128_t *)(a2 + 32)); // 0x632c2
    *(int64_t *)(a1 + 24) = *(int64_t *)(a2 + 24);
    __asm_movups_133(*(int128_t *)v1, v2);
    *(int64_t *)(a1 + 48) = *(int64_t *)(a2 + 48);
    *(char *)(a1 + 56) = *(char *)(a2 + 56);
    int64_t result; // 0x63286
    return result;
}

// Address range: 0x7293a - 0x72994
int64_t function_7293a(int64_t mutex) {
    int64_t v1 = __readfsqword(40); // 0x72948
    int64_t attr; // bp-36, 0x7293a
    pthread_mutexattr_init(&attr);
    pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);
    pthread_mutex_init((int64_t *)mutex, &attr);
    int64_t result = 0; // 0x72986
    if (v1 != __readfsqword(40)) {
        // 0x72988
        __stack_chk_fail();
        result = (int64_t)&g6;
    }
    // 0x7298d
    return result;
}

// Address range: 0x2be60e - 0x2be645
int64_t function_2be60e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2be60e
    *(char *)a1 = __asm_insb((int16_t)a3);
    *(char *)-0x175911cd = *(char *)-0x175911cd % 2;
    int64_t v1; // 0x2be60e
    int64_t v2 = __asm_sti(a4, v1 & 0xffffffff); // 0x2be61a
    *(int32_t *)-0x7fd231d6 = *(int32_t *)-0x7fd231d6 + (int32_t)a4;
    int64_t v3; // 0x2be60e
    *(char *)v3 = ((char)v2 ^ -97) - 117 + *(char *)&v3;
    return function_2be5f4();
}

// Address range: 0x488c50 - 0x488c83
int64_t function_488c50(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 48); // 0x488c51
    int64_t v2 = v1 - 24; // 0x488c58
    int64_t v3 = v2; // 0x488c63
    int64_t result = v1; // 0x488c63
    if (v2 != (int64_t)g3) {
        // 0x488c65
        v3 = (int64_t)g3;
        result = function_488c28(v2);
    }
    int64_t v4 = *(int64_t *)(a1 + 40) - 24; // 0x488c6e
    if (v4 == v3) {
        // 0x488c81
        return result;
    }
    // 0x488c7b
    return function_488c28(v4);
}

// Address range: 0x4afeb0 - 0x4aff03
int64_t function_4afeb0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = function_4afe70(); // 0x4afece
    int64_t v1; // 0x4afeb0
    if (v1 == 1 == (int32_t)result == 0) {
        // 0x4afedf
        *(int32_t *)a3 = (int32_t)((char)a1 != 0);
        *(int64_t *)a1 = a1 + 1;
    }
    // 0x4afef4
    return result;
}

// Address range: 0x4b0890 - 0x4b08ea
int64_t function_4b0890(int64_t a1) {
    if (a1 == 0) {
        // 0x4b08e8
        int64_t result; // 0x4b0890
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4b0899
    int64_t v2 = *v1; // 0x4b0899
    int64_t * v3 = (int64_t *)(a1 + 8);
    int64_t result2; // 0x4b0890
    if (v2 != 0) {
        int64_t v4 = *v3; // 0x4b08a2
        int64_t v5 = v2; // 0x4b08b0
        if (v4 != 0) {
            int64_t v6 = v4 - 1;
            *(int64_t *)v5 = 0;
            v5 += 8;
            int64_t v7 = v6; // 0x4b08cb
            while (v6 != 0) {
                // 0x4b08b8
                v6 = v7 - 1;
                *(int64_t *)v5 = 0;
                v5 += 8;
                v7 = v6;
            }
        }
        // 0x4b08cd
        free((int64_t *)v2);
        result2 = (int64_t)&g6;
    }
    // 0x4b08d2
    *(int32_t *)a1 = 1;
    *v3 = 0;
    *v1 = 0;
    // 0x4b08e8
    return result2;
}

// Address range: 0x4b4f20 - 0x4b4f78
int64_t function_4b4f20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if (a1 == 0) {
        // 0x4b4f65
        return 0xffff9f00;
    }
    // 0x4b4f2d
    int32_t * v1; // 0x4b4f20
    int32_t v2; // 0x4b4f20
    if ((*(char *)(a1 + 28) & 2) == 0) {
        int32_t * v3 = (int32_t *)(a1 + 8);
        int32_t v4 = a3;
        v1 = v3;
        v2 = v4;
        if (*v3 != v4) {
            // 0x4b4f65
            return 0xffff9f00;
        }
    } else {
        // 0x4b4f2d
        v1 = (int32_t *)(a1 + 8);
        v2 = a3;
    }
    int32_t v5 = a4; // 0x4b4f33
    *v1 = v2;
    *(int32_t *)(a1 + 12) = v5;
    if (v5 == 1) {
        // 0x4b4f70
        return *(int64_t *)(a1 + 40);
    }
    // 0x4b4f3e
    switch (*(int32_t *)(a1 + 4)) {
        case 3: {
        }
        case 5: {
            // 0x4b4f70
            return *(int64_t *)(a1 + 40);
        }
    }
    if (v5 != 0) {
        // 0x4b4f65
        return 0xffff9f00;
    }
    // 0x4b4f52
    return *(int64_t *)(*(int64_t *)(a1 + 40) + 56);
}

// Address range: 0x4f1530 - 0x4f1588
int64_t function_4f1530(int64_t fd, int64_t a2, int64_t result) {
    int64_t buf = a2; // 0x4f1546
    int64_t nbyte = result;
    int32_t v1 = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte); // 0x4f1559
    while (v1 == -1) {
        // 0x4f1570
        if (*__errno_location() != 4) {
            return result - nbyte;
        }
        v1 = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
    }
    int64_t v2 = v1; // 0x4f1559
    int64_t v3 = nbyte - v2; // 0x4f1564
    buf += v2;
    while (v3 != 0) {
        // 0x4f1550
        nbyte = v3;
        v1 = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
        while (v1 == -1) {
            // 0x4f1570
            if (*__errno_location() != 4) {
                return result - nbyte;
            }
            v1 = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
        }
        // 0x4f1564
        v2 = v1;
        v3 = nbyte - v2;
        buf += v2;
    }
    // 0x4f157d
    return result;
  lab_0x4f157a:
    // 0x4f157d
    return result - nbyte;
}

// Address range: 0x4f2ff0 - 0x4f3049
// From class:    std::__moneypunct_cache<char, true>
// Type:          constructor
int64_t function_4f2ff0(int64_t a1) {
    // 0x4f2ff0
    *(int64_t *)a1 = (int64_t)&g1;
    if (*(char *)(a1 + 111) == 0) {
        // 0x4f3040
        return function_565970(a1);
    }
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x4f3008
    if (v1 != 0) {
        // 0x4f3011
        function_4eeb40(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 40); // 0x4f3016
    if (v2 != 0) {
        // 0x4f301f
        function_4eeb40(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 56); // 0x4f3024
    if (v3 != 0) {
        // 0x4f302d
        function_4eeb40(v3);
    }
    int64_t v4 = *(int64_t *)(a1 + 72); // 0x4f3032
    if (v4 != 0) {
        // 0x4f303b
        function_4eeb40(v4);
    }
    // 0x4f3040
    return function_565970(a1);
}

// Address range: 0x4f3080 - 0x4f30d9
// From class:    std::__moneypunct_cache<char, false>
// Type:          constructor
int64_t function_4f3080(int64_t a1) {
    // 0x4f3080
    *(int64_t *)a1 = (int64_t)&g2;
    if (*(char *)(a1 + 111) == 0) {
        // 0x4f30d0
        return function_565970(a1);
    }
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x4f3098
    if (v1 != 0) {
        // 0x4f30a1
        function_4eeb40(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 40); // 0x4f30a6
    if (v2 != 0) {
        // 0x4f30af
        function_4eeb40(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 56); // 0x4f30b4
    if (v3 != 0) {
        // 0x4f30bd
        function_4eeb40(v3);
    }
    int64_t v4 = *(int64_t *)(a1 + 72); // 0x4f30c2
    if (v4 != 0) {
        // 0x4f30cb
        function_4eeb40(v4);
    }
    // 0x4f30d0
    return function_565970(a1);
}
