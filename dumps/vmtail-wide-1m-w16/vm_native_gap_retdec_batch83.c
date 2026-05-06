/*
 * Targeted RetDec C for native executable gap queue batch 83.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x50c7f0-0x50c838 rank=69 name=fcn.0050c7f0 kind=r2_discovered bytes=72 uncovered=72
 *   0x50c840-0x50c888 rank=70 name=fcn.0050c840 kind=r2_discovered bytes=72 uncovered=72
 *   0x52af50-0x52af98 rank=71 name=fcn.0052af50 kind=r2_discovered bytes=72 uncovered=72
 *   0x541f40-0x541f88 rank=72 name=fcn.00541f40 kind=r2_discovered bytes=72 uncovered=72
 *   0x551fb0-0x551ff8 rank=73 name=method.std::moneypunct_char__false_.virtual_32 kind=native_discovered bytes=72 uncovered=72
 *   0x552000-0x552048 rank=74 name=method.std::moneypunct_char__false_.virtual_40 kind=native_discovered bytes=72 uncovered=72
 *   0x552050-0x552098 rank=75 name=method.std::moneypunct_char__false_.virtual_48 kind=native_discovered bytes=72 uncovered=72
 *   0x5520a0-0x5520e8 rank=76 name=method.std::moneypunct_char__false_.virtual_56 kind=native_discovered bytes=72 uncovered=72
 *   0x5520f0-0x552138 rank=77 name=method.std::moneypunct_char__true_.virtual_32 kind=native_discovered bytes=72 uncovered=72
 *   0x552140-0x552188 rank=78 name=method.std::moneypunct_char__true_.virtual_40 kind=native_discovered bytes=72 uncovered=72
 *   0x552190-0x5521d8 rank=79 name=method.std::moneypunct_char__true_.virtual_48 kind=native_discovered bytes=72 uncovered=72
 *   0x5521e0-0x552228 rank=80 name=method.std::moneypunct_char__true_.virtual_56 kind=native_discovered bytes=72 uncovered=72
 *   0x552230-0x552278 rank=81 name=method.std::numpunct_char_.virtual_32 kind=native_discovered bytes=72 uncovered=72
 *   0x552280-0x5522c8 rank=82 name=method.std::numpunct_char_.virtual_40 kind=native_discovered bytes=72 uncovered=72
 *   0x5522d0-0x552318 rank=83 name=method.std::numpunct_char_.virtual_48 kind=native_discovered bytes=72 uncovered=72
 *   0x553d30-0x553d78 rank=84 name=fcn.00553d30 kind=r2_discovered bytes=72 uncovered=72
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
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_20210();
int64_t function_203b0();
int64_t function_20730();
int64_t function_250b0();
int64_t function_50c7f0(int64_t a1);
int64_t function_50c840(int64_t a1);
int64_t function_52af50(void);
int64_t function_541f40(void);
int64_t function_541f80(void);
int64_t function_551fb0(int64_t result, int64_t a2);
int64_t function_552000(int64_t result, int64_t a2);
int64_t function_552050(int64_t result, int64_t a2);
int64_t function_5520a0(int64_t result, int64_t a2);
int64_t function_5520f0(int64_t result, int64_t a2);
int64_t function_552140(int64_t result, int64_t a2);
int64_t function_552190(int64_t result, int64_t a2);
int64_t function_5521e0(int64_t result, int64_t a2);
int64_t function_552230(int64_t result, int64_t a2);
int64_t function_552280(int64_t result, int64_t a2);
int64_t function_5522d0(int64_t result, int64_t a2);
int64_t function_553d30(int64_t a1, int64_t a2, int64_t a3);
int64_t function_565f80();
int64_t function_566390();
int64_t function_56d3e0();

// Address range: 0x50c7f0 - 0x50c838
int64_t function_50c7f0(int64_t a1) {
    uint64_t v1 = function_566390(&g5); // 0x50c7fb
    if (*(int64_t *)((int64_t)&g5 + 16) <= v1) {
        // 0x50c836
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g5 + 8); // 0x50c80e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x50c812
    int64_t result = 0; // 0x50c819
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, &g4, 0x844258, 0); // 0x50c82b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x50c836
    return result;
}

// Address range: 0x50c840 - 0x50c888
int64_t function_50c840(int64_t a1) {
    uint64_t v1 = function_566390(&g6); // 0x50c84b
    if (*(int64_t *)((int64_t)&g6 + 16) <= v1) {
        // 0x50c886
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g6 + 8); // 0x50c85e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x50c862
    int64_t result = 0; // 0x50c869
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, &g4, 0x844240, 0); // 0x50c87b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x50c886
    return result;
}

// Address range: 0x52af50 - 0x52af98
int64_t function_52af50(void) {
    int64_t v1 = __readfsqword(40); // 0x52af5c
    int128_t tp; // bp-40, 0x52af50
    clock_gettime(1, (struct timespec *)&tp);
    if (v1 == __readfsqword(40)) {
        // 0x52af8e
        int64_t v2; // 0x52af50
        return 0x3b9aca00 * (int64_t)tp + v2;
    }
    // 0x52af93
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x541f40 - 0x541f80
// From class:    std::bad_function_call
// Type:          constructor
int64_t function_541f40(void) {
    int64_t v1 = function_20210(8); // 0x541f49
    *(int64_t *)v1 = (int64_t)&g2;
    return function_203b0(v1, 0x845b80, &g1);
}

// Address range: 0x541f80 - 0x541f88
// From class:    *N12_GLOBAL__N_122generic_error_categoryE
// Type:          virtual member function
int64_t function_541f80(void) {
    // 0x541f80
    return (int64_t)"generic";
}

// Address range: 0x551fb0 - 0x551ff8
// From class:    std::moneypunct<char, false>
// Type:          virtual member function
int64_t function_551fb0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x551fb8
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x551fea
        return result;
    }
    // 0x551ff3
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x552000 - 0x552048
// From class:    std::moneypunct<char, false>
// Type:          virtual member function
int64_t function_552000(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x552008
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x55203a
        return result;
    }
    // 0x552043
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x552050 - 0x552098
// From class:    std::moneypunct<char, false>
// Type:          virtual member function
int64_t function_552050(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x552058
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x55208a
        return result;
    }
    // 0x552093
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x5520a0 - 0x5520e8
// From class:    std::moneypunct<char, false>
// Type:          virtual member function
int64_t function_5520a0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5520a8
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x5520da
        return result;
    }
    // 0x5520e3
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x5520f0 - 0x552138
// From class:    std::moneypunct<char, true>
// Type:          virtual member function
int64_t function_5520f0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5520f8
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x55212a
        return result;
    }
    // 0x552133
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x552140 - 0x552188
// From class:    std::moneypunct<char, true>
// Type:          virtual member function
int64_t function_552140(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x552148
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x55217a
        return result;
    }
    // 0x552183
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x552190 - 0x5521d8
// From class:    std::moneypunct<char, true>
// Type:          virtual member function
int64_t function_552190(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x552198
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x5521ca
        return result;
    }
    // 0x5521d3
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x5521e0 - 0x552228
// From class:    std::moneypunct<char, true>
// Type:          virtual member function
int64_t function_5521e0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5521e8
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x55221a
        return result;
    }
    // 0x552223
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x552230 - 0x552278
// From class:    std::numpunct_byname<char>
// Type:          virtual member function
int64_t function_552230(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x552238
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x55226a
        return result;
    }
    // 0x552273
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x552280 - 0x5522c8
// From class:    std::numpunct_byname<char>
// Type:          virtual member function
int64_t function_552280(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x552288
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x5522ba
        return result;
    }
    // 0x5522c3
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x5522d0 - 0x552318
// From class:    std::numpunct_byname<char>
// Type:          virtual member function
int64_t function_5522d0(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5522d8
    function_250b0();
    if (v1 == __readfsqword(40)) {
        // 0x55230a
        return result;
    }
    // 0x552313
    __stack_chk_fail();
    return (int64_t)&g7;
}

// Address range: 0x553d30 - 0x553d78
// From class:    std::__timepunct<char>
// Type:          constructor
int64_t function_553d30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x553d30
    *(int64_t *)(a1 + 16) = a2;
    *(int64_t *)(a1 + 24) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a3 != 0);
    *(int64_t *)a1 = (int64_t)&g3;
    *(int64_t *)(a1 + 32) = function_565f80();
    return function_56d3e0(a1, 0);
}
