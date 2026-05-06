/*
 * Targeted RetDec C for native executable gap queue batch 85.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x490448-0x49048f rank=37 name=fcn.00490448 kind=r2_discovered bytes=71 uncovered=71
 *   0x49048f-0x4904d6 rank=38 name=fcn.0049048f kind=r2_discovered bytes=71 uncovered=71
 *   0x49ef50-0x49ef97 rank=39 name=fcn.0049ef50 kind=r2_discovered bytes=71 uncovered=71
 *   0x4afc8b-0x4afcd2 rank=40 name=fcn.004afc8b kind=r2_discovered bytes=71 uncovered=71
 *   0x4c1bc0-0x4c1c07 rank=41 name=fcn.004c1bc0 kind=r2_discovered bytes=71 uncovered=71
 *   0x50e900-0x50e947 rank=42 name=method.std::num_put_wchar_t__std::ostreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_72 kind=native_discovered bytes=71 uncovered=71
 *   0x3dffc-0x3e042 rank=43 name=fcn.0003dffc kind=r2_discovered bytes=70 uncovered=70
 *   0x4c04e-0x4c094 rank=44 name=fcn.0004c04e kind=r2_discovered bytes=70 uncovered=70
 *   0x4e238-0x4e27e rank=45 name=fcn.0004e238 kind=r2_discovered bytes=70 uncovered=70
 *   0x68aa0-0x68ae6 rank=46 name=fcn.00068aa0 kind=r2_discovered bytes=70 uncovered=70
 *   0x48f582-0x48f5c8 rank=47 name=fcn.0048f582 kind=r2_discovered bytes=70 uncovered=70
 *   0x48f79e-0x48f7e4 rank=48 name=fcn.0048f79e kind=r2_discovered bytes=70 uncovered=70
 *   0x519280-0x5192c6 rank=49 name=method.std::__cxx11::moneypunct_char__false_.virtual_40 kind=native_discovered bytes=70 uncovered=70
 *   0x5192d0-0x519316 rank=50 name=method.std::__cxx11::moneypunct_char__false_.virtual_48 kind=native_discovered bytes=70 uncovered=70
 *   0x519320-0x519366 rank=51 name=method.std::__cxx11::moneypunct_char__false_.virtual_32 kind=native_discovered bytes=70 uncovered=70
 *   0x519370-0x5193b6 rank=52 name=method.std::__cxx11::moneypunct_char__false_.virtual_56 kind=native_discovered bytes=70 uncovered=70
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
int pthread_once(int32_t *once_control, int64_t init_routine);
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

int64_t function_24e1e();
int64_t function_25a28();
int64_t function_25e90();
int64_t function_29ef7();
int64_t function_35ef6();
int64_t function_36ff8();
int64_t function_3dffc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48f582(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_48f79e(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_490448(int64_t result);
int64_t function_49048f(int64_t result);
int64_t function_49ef50(int64_t str);
int64_t function_4afc8b(int64_t a1);
int64_t function_4c04e(int64_t a1);
int64_t function_4c1bc0(int64_t a1);
int64_t function_4e238(int64_t a1);
int64_t function_4eeb50();
int64_t function_50e6b0();
int64_t function_50e900(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_519050();
int64_t function_519280(int64_t result, int64_t a2);
int64_t function_5192d0(int64_t result, int64_t a2);
int64_t function_519320(int64_t result, int64_t a2);
int64_t function_519370(int64_t result, int64_t a2);
int64_t function_68a54();
int64_t function_68aa0(int64_t a1, int64_t a2);
int64_t function_7293a();

// Address range: 0x3dffc - 0x3e042
int64_t function_3dffc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3dffc
    if (a2 == 0) {
        // 0x3e041
        return 0;
    }
    int64_t v1 = a1 & 0xffffffff ^ 0xffffffff; // 0x3e00a
    if (a3 == 0) {
        // 0x3e041
        return v1 & 0xffffffff ^ 0xffffffff;
    }
    int64_t v2 = 0; // 0x3e013
    unsigned char v3 = *(char *)(v2 + a2); // 0x3e015
    v2++;
    int32_t v4 = *(int32_t *)((4 * (v1 ^ (int64_t)v3) & 60) + (int64_t)&g2); // 0x3e02a
    uint32_t v5 = v4 ^ (int32_t)v1 / 16; // 0x3e02a
    int32_t v6 = *(int32_t *)((int64_t)(4 * (v5 % 16 ^ (int32_t)(v3 / 16))) + (int64_t)&g2); // 0x3e039
    int64_t v7 = v5 / 16 ^ v6; // 0x3e039
    while (v2 != a3) {
        // 0x3e015
        v3 = *(char *)(v2 + a2);
        v2++;
        v4 = *(int32_t *)((4 * (v7 ^ (int64_t)v3) & 60) + (int64_t)&g2);
        v5 = v4 ^ (int32_t)v7 / 16;
        v6 = *(int32_t *)((int64_t)(4 * (v5 % 16 ^ (int32_t)(v3 / 16))) + (int64_t)&g2);
        v7 = v5 / 16 ^ v6;
    }
    // 0x3e041
    return v7 & 0xffffffff ^ 0xffffffff;
}

// Address range: 0x4c04e - 0x4c094
int64_t function_4c04e(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4c057
    int64_t v2 = *v1; // 0x4c057
    int64_t result; // 0x4c04e
    if (v2 == 0) {
        // 0x4c06d
        __asm_rep_stosb_memset(NULL, 0, 8 * *(int64_t *)(a1 + 8));
        *(int64_t *)(a1 + 24) = 0;
        *v1 = 0;
        return result;
    }
    int64_t v3 = *(int64_t *)v2; // 0x4c060
    function_4eeb50(v2);
    while (v3 != 0) {
        int64_t v4 = v3;
        v3 = *(int64_t *)v4;
        function_4eeb50(v4);
    }
    // 0x4c06d
    __asm_rep_stosb_memset(NULL, 0, 8 * *(int64_t *)(a1 + 8));
    *(int64_t *)(a1 + 24) = 0;
    *v1 = 0;
    return result;
}

// Address range: 0x4e238 - 0x4e27e
int64_t function_4e238(int64_t a1) {
    int64_t v1 = function_24e1e(); // 0x4e23c
    int64_t * v2 = (int64_t *)(a1 + 216); // 0x4e244
    int64_t v3 = v1 - *v2; // 0x4e244
    int64_t v4 = (0x8000000000000000 * (int128_t)(v3 >> 63) | (int128_t)v3) / 0xf4240; // 0x4e252
    int64_t result; // 0x4e238
    if (v4 < 1) {
        // 0x4e26f
        *(int16_t *)(a1 + 8) = 0;
        result = v4;
    } else {
        int64_t v5 = v4 - 0xffff; // 0x4e25a
        int64_t v6 = v5 < 0 == (0xfffe - v4 & v4) < 0 == (v5 != 0) ? (int64_t)&g5 : v4; // 0x4e265
        *(int16_t *)(a1 + 8) = (int16_t)v6;
        result = v6;
    }
    // 0x4e275
    *v2 = v1;
    return result;
}

// Address range: 0x68aa0 - 0x68ae6
int64_t function_68aa0(int64_t a1, int64_t a2) {
    // 0x68aa0
    *(int64_t *)a1 = (int64_t)&g4;
    function_7293a(a1 + 8);
    *(int64_t *)(a1 + 120) = 0;
    *(int64_t *)(a1 + 128) = 0;
    return function_68a54(a1, a2);
}

// Address range: 0x48f582 - 0x48f5c8
int64_t function_48f582(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x48f582
    function_36ff8();
    if (a5 != 0) {
        // 0x48f5aa
        function_29ef7(4 * a2 + result, a4, a5);
    }
    // 0x48f5bc
    return result;
}

// Address range: 0x48f79e - 0x48f7e4
int64_t function_48f79e(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x48f79e
    function_25e90();
    if (a5 != 0) {
        // 0x48f7c6
        function_25a28(a2 + result, a4, a5);
    }
    // 0x48f7d8
    return result;
}

// Address range: 0x490448 - 0x49048f
int64_t function_490448(int64_t result) {
    int64_t v1 = __readfsqword(40); // 0x49045c
    function_35ef6();
    if (v1 != __readfsqword(40)) {
        // 0x490481
        __stack_chk_fail();
    }
    // 0x490486
    return result;
}

// Address range: 0x49048f - 0x4904d6
int64_t function_49048f(int64_t result) {
    int64_t v1 = __readfsqword(40); // 0x4904a3
    function_35ef6();
    if (v1 != __readfsqword(40)) {
        // 0x4904c8
        __stack_chk_fail();
    }
    // 0x4904cd
    return result;
}

// Address range: 0x49ef50 - 0x49ef94
int64_t function_49ef50(int64_t str) {
    int64_t result; // 0x49ef50
    if (str == 0) {
        // 0x49ef8a
        return result;
    }
    int64_t v1 = (int64_t)&g3; // 0x49ef70
    result = v1;
    while (strcmp((char *)*(int64_t *)(v1 + 8), (char *)str) != 0) {
        // 0x49ef70
        v1 += 48;
        result = 0;
        if (*(int32_t *)v1 == 0) {
            // break -> 0x49ef8a
            break;
        }
        result = v1;
    }
    // 0x49ef8a
    return result;
}

// Address range: 0x4afc8b - 0x4afcd2
int64_t function_4afc8b(int64_t a1) {
    // 0x4afc8b
    int128_t v1; // 0x4afc8b
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(__asm_pshufd(v1, 85), v1); // 0x4afc90
    int128_t v4 = __asm_pslldq(v1, 4); // 0x4afc94
    int128_t v5 = __asm_pxor(v3, v4); // 0x4afc99
    int128_t v6 = __asm_pslldq(v4, 4); // 0x4afc9d
    int128_t v7 = __asm_pxor(__asm_pslldq(v6, 4), __asm_pxor(v5, v6)); // 0x4afcab
    *(int128_t *)a1 = (int128_t)__asm_movdqu(v7);
    int128_t v8 = __asm_pxor(__asm_pslldq(v2, 4), __asm_pxor(__asm_pshufd(v7, -1), v2)); // 0x4afcc5
    __asm_movq(*(int64_t *)(a1 + 16), v8);
    int64_t result; // 0x4afc8b
    return result;
}

// Address range: 0x4c1bc0 - 0x4c1c07
int64_t function_4c1bc0(int64_t a1) {
    if (a1 != 0) {
        // 0x4c1bd6
        if (*(int64_t *)(a1 + 16) != 0) {
            // 0x4c1bf9
            return 0;
        }
    }
    // 0x4c1bf9
    return 0xffffaf00;
}

// Address range: 0x50e900 - 0x50e947
// From class:    std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_50e900(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 24); // 0x50e910
    int32_t v2 = *v1; // 0x50e910
    *v1 = v2 & -0x404b | (int32_t)&g1;
    int64_t result = function_50e6b0(); // 0x50e924
    *v1 = v2;
    return result;
}

// Address range: 0x519280 - 0x5192c6
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_519280(int64_t result, int64_t a2) {
    int64_t str = *(int64_t *)(*(int64_t *)(a2 + 16) + 40); // 0x519294
    *(int64_t *)result = result + 16;
    int64_t v1 = -1; // 0x5192a2
    if (str != 0) {
        // 0x5192a4
        v1 = str + (int64_t)strlen((char *)str);
    }
    // 0x5192b1
    function_519050(result, str, v1);
    return result;
}

// Address range: 0x5192d0 - 0x519316
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_5192d0(int64_t result, int64_t a2) {
    int64_t str = *(int64_t *)(*(int64_t *)(a2 + 16) + 56); // 0x5192e4
    *(int64_t *)result = result + 16;
    int64_t v1 = -1; // 0x5192f2
    if (str != 0) {
        // 0x5192f4
        v1 = str + (int64_t)strlen((char *)str);
    }
    // 0x519301
    function_519050(result, str, v1);
    return result;
}

// Address range: 0x519320 - 0x519366
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_519320(int64_t result, int64_t a2) {
    int64_t str = *(int64_t *)(*(int64_t *)(a2 + 16) + 16); // 0x519334
    *(int64_t *)result = result + 16;
    int64_t v1 = -1; // 0x519342
    if (str != 0) {
        // 0x519344
        v1 = str + (int64_t)strlen((char *)str);
    }
    // 0x519351
    function_519050(result, str, v1);
    return result;
}

// Address range: 0x519370 - 0x5193b6
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_519370(int64_t result, int64_t a2) {
    int64_t str = *(int64_t *)(*(int64_t *)(a2 + 16) + 72); // 0x519384
    *(int64_t *)result = result + 16;
    int64_t v1 = -1; // 0x519392
    if (str != 0) {
        // 0x519394
        v1 = str + (int64_t)strlen((char *)str);
    }
    // 0x5193a1
    function_519050(result, str, v1);
    return result;
}
