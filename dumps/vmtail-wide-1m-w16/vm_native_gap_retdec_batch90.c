/*
 * Targeted RetDec C for native executable gap queue batch 90.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x504eb0-0x504ef0 rank=53 name=method.std::basic_filebuf_char__std::char_traits_char___.virtual_8 kind=native_discovered bytes=64 uncovered=64
 *   0x507780-0x5077c0 rank=54 name=method.std::basic_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_8 kind=native_discovered bytes=64 uncovered=64
 *   0x5423b0-0x5423f0 rank=55 name=fcn.005423b0 kind=r2_discovered bytes=64 uncovered=64
 *   0x564ef0-0x564f30 rank=56 name=sym.__cxa_bad_cast kind=symbol_named bytes=64 uncovered=64
 *   0x564f30-0x564f70 rank=57 name=sym.__cxa_bad_typeid kind=symbol_named bytes=64 uncovered=64
 *   0x564f70-0x564fb0 rank=58 name=sym.__cxa_throw_bad_array_new_length kind=symbol_named bytes=64 uncovered=64
 *   0x360a0-0x360df rank=59 name=fcn.000360a0 kind=r2_discovered bytes=63 uncovered=63
 *   0x52982-0x529c1 rank=60 name=fcn.00052982 kind=r2_discovered bytes=63 uncovered=63
 *   0x56066-0x560a5 rank=61 name=fcn.00056066 kind=r2_discovered bytes=63 uncovered=63
 *   0x6a7f0-0x6a82f rank=62 name=fcn.0006a7f0 kind=r2_discovered bytes=63 uncovered=63
 *   0x1aaadd-0x1aab1c rank=63 name=fcn.001aaadd kind=r2_discovered bytes=63 uncovered=63
 *   0x48f542-0x48f581 rank=64 name=fcn.0048f542 kind=r2_discovered bytes=63 uncovered=63
 *   0x4f0a80-0x4f0abf rank=65 name=fcn.004f0a80 kind=r2_discovered bytes=63 uncovered=63
 *   0x563640-0x56367f rank=66 name=method.__gnu_cxx::stdio_sync_filebuf_char__std::char_traits_char___.virtual_64 kind=native_discovered bytes=63 uncovered=63
 *   0x57a000-0x57a03f rank=67 name=fcn.0057a000 kind=r2_discovered bytes=63 uncovered=63
 *   0x4a2f8-0x4a336 rank=68 name=fcn.0004a2f8 kind=r2_discovered bytes=62 uncovered=62
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
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
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
int64_t _Unwind_GetDataRelBase(int64_t context);
int64_t _Unwind_GetRegionStart();
int64_t _Unwind_RaiseException(int64_t exception);
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_1aaadd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20210();
int64_t function_203b0();
int64_t function_2508e();
int64_t function_27a86();
int64_t function_29d94();
int64_t function_35bf4();
int64_t function_35c52();
int64_t function_360a0(int64_t a1, int64_t result2);
int64_t function_48f542(int64_t a1, int64_t a2);
int64_t function_4a2f8(int64_t a1);
int64_t function_4eeb50();
int64_t function_4f0a80(int64_t a1);
int64_t function_4f1760();
int64_t function_502870();
int64_t function_504eb0(int64_t a1);
int64_t function_505130();
int64_t function_507780(int64_t a1);
int64_t function_5289c();
int64_t function_52982(int64_t result, int64_t a2, int64_t a3);
int64_t function_5423b0(void);
int64_t function_56066(int64_t a1, int64_t a2);
int64_t function_563640(int64_t a1, int64_t data);
int64_t function_566180();
int64_t function_57a000(int64_t a1);
int64_t function_5826b();
int64_t function_6a7f0(int64_t result, int64_t a2);

// Address range: 0x360a0 - 0x360df
int64_t function_360a0(int64_t a1, int64_t result2) {
    int32_t * v1 = (int32_t *)(result2 - 8); // 0x360a7
    int32_t v2 = *v1; // 0x360a7
    int64_t v3 = result2 - 24; // 0x360aa
    if (v2 < 0) {
        int64_t result = function_35bf4(v3, 0);
        *(int64_t *)a1 = result;
        return result;
    }
    // 0x360b2
    if (v3 != *(int64_t *)0x848c20) {
        // 0x360bb
        *v1 = v2 + 1;
    }
    // 0x360da
    *(int64_t *)a1 = result2;
    return result2;
}

// Address range: 0x4a2f8 - 0x4a336
int64_t function_4a2f8(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x4a2fc
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x4a303
    int64_t v3 = *v2; // 0x4a303
    int64_t v4 = v1; // 0x4a30a
    if (v1 != v3) {
        int64_t v5 = v3 + 16; // 0x4a310
        function_2508e(v3 + 8);
        while (v1 != v5) {
            int64_t v6 = v5;
            v5 = v6 + 16;
            function_2508e(v6 + 8);
        }
        // 0x4a307
        v4 = *v2;
    }
    // 0x4a31b
    if (v4 != 0) {
        // 0x4a324
        function_4eeb50(v4);
    }
    // 0x4a329
    return function_2508e(a1 + 8);
}

// Address range: 0x52982 - 0x529c1
int64_t function_52982(int64_t result, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)function_5289c(a2, a3, function_35c52(a3)); // 0x529a5
    *(int64_t *)result = *v1;
    *v1 = (int64_t)&g16;
    return result;
}

// Address range: 0x56066 - 0x560a5
int64_t function_56066(int64_t a1, int64_t a2) {
    // 0x56066
    if (*(char *)(a1 + (int64_t)&g2) == 0) {
        // 0x5609e
        return 2;
    }
    uint64_t v1 = function_5826b(*(int64_t *)(a1 + (int64_t)&g1)); // 0x5607f
    int64_t result = 23; // 0x5608c
    if (v1 >= 0) {
        // 0x5608e
        result = v1 == a2 ? 0 : 24;
    }
    // 0x5609e
    return result;
}

// Address range: 0x6a7f0 - 0x6a82f
int64_t function_6a7f0(int64_t result, int64_t a2) {
    // 0x6a7f0
    function_29d94(result, a2);
    function_29d94(result + 8, a2 + 8);
    function_29d94(result + 16, a2 + 16);
    function_29d94(result + 24, a2 + 24);
    return result;
}

// Address range: 0x1aaadd - 0x1aab18
int64_t function_1aaadd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2 = unknown_ffffffffba4fa1e3(); // 0x1aaadd
    bool v3; // 0x1aaadd
    if (v3) {
        int64_t v4 = unknown_38ae20ec(); // 0x1aaae6
        return (int64_t)((int32_t)v4 - *(int32_t *)v4);
    }
    // 0x1aaaef
    int64_t v5; // 0x1aaadd
    char * v6 = (char *)(v2 + 2 * v5); // 0x1aaaef
    char v7 = a4; // 0x1aaaef
    *v6 = *v6 + v7;
    int64_t v8 = unknown_401c0cfa(); // 0x1aaaf4
    char * v9 = (char *)(v5 - 90); // 0x1aaaf9
    *v9 = *v9 + v7;
    *(char *)v1 = *(char *)&v1 + (char)v8;
    uint32_t v10 = (int32_t)v8 >> 31; // 0x1aaaff
    int64_t v11 = v10; // 0x1aaaff
    unsigned char v12 = (char)v5; // 0x1aab01
    unsigned char v13 = (char)v10 + v12; // 0x1aab01
    char * v14 = (char *)v11; // 0x1aab03
    char v15 = v5 / 256; // 0x1aab03
    *v14 = (char)(v13 < v12) - v15 + *v14;
    uint64_t v16 = unknown_2f0fdc0b(); // 0x1aab05
    int64_t result = v16 & -0xff01 | (int64_t)(256 * v10 & 0xff00); // 0x1aab0b
    *(int32_t *)v1 = (int32_t)result;
    char * v17 = (char *)(v16 / 256 % 256 | v11 & 0xffffff00); // 0x1aab0e
    *v17 = *v17 & v15;
    int32_t * v18 = (int32_t *)((v5 & -256 | (int64_t)v13) - 0x1712cb00); // 0x1aab11
    *v18 = *v18 - 1;
    return result;
}

// Address range: 0x48f542 - 0x48f581
int64_t function_48f542(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x48f545
    int64_t v2 = *v1; // 0x48f545
    int64_t v3; // 0x48f542
    if (v2 == *(int64_t *)(a1 + 16)) {
        // 0x48f572
        function_27a86();
        v3 = *v1;
    } else {
        int64_t v4 = v2 + 8; // 0x48f556
        *(int64_t *)v2 = v2;
        *(int64_t *)a2 = (int64_t)&g15;
        *v1 = v4;
        v3 = v4;
    }
    // 0x48f577
    return v3 - 8;
}

// Address range: 0x4f0a80 - 0x4f0abd
int64_t function_4f0a80(int64_t a1) {
    int64_t result2 = *(int64_t *)(a1 + 24); // 0x4f0a80
    if (result2 != 0) {
        int64_t result = result2;
        int64_t v1 = *(int64_t *)(result + 16); // 0x4f0a93
        while (v1 != 0) {
            // 0x4f0a93
            result = v1;
            v1 = *(int64_t *)(result + 16);
        }
        // 0x4f0a9c
        return result;
    }
    int64_t v2 = *(int64_t *)(a1 + 8); // 0x4f0aa0
    if (*(int64_t *)(v2 + 24) != a1) {
        // 0x4f0a9c
        return result2;
    }
    int64_t v3 = v2;
    int64_t result3 = *(int64_t *)(v3 + 8); // 0x4f0ab3
    while (*(int64_t *)(result3 + 24) == v3) {
        // 0x4f0ab3
        v3 = result3;
        result3 = *(int64_t *)(v3 + 8);
    }
    // 0x4f0a9c
    return result3;
}

// Address range: 0x504eb0 - 0x504ef0
// From class:    std::basic_filebuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504eb0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x504ebf
    *v1 = (int64_t)&g8;
    function_502870();
    function_4f1760(a1 + 104);
    *v1 = (int64_t)&g10;
    function_566180(a1 + 56);
    return function_4eeb50(a1);
}

// Address range: 0x507780 - 0x5077c0
// From class:    std::basic_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_507780(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x50778f
    *v1 = (int64_t)&g9;
    function_505130();
    function_4f1760(a1 + 104);
    *v1 = (int64_t)&g11;
    function_566180(a1 + 56);
    return function_4eeb50(a1);
}

// Address range: 0x5423b0 - 0x5423f0
// From class:    std::bad_alloc
// Type:          constructor
int64_t function_5423b0(void) {
    int64_t v1 = function_20210(8); // 0x5423b9
    *(int64_t *)v1 = (int64_t)&g7;
    return function_203b0(v1, 0x843220, &g3);
}

// Address range: 0x563640 - 0x56367f
// From class:    __gnu_cxx::stdio_sync_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_563640(int64_t a1, int64_t data) {
    int64_t stream = *(int64_t *)(a1 + 64); // 0x563651
    int64_t nmemb; // 0x563640
    int32_t items_read = fread((int64_t *)data, 1, (int32_t)nmemb, (struct _IO_FILE *)stream); // 0x563658
    int64_t result = items_read; // 0x563658
    if (items_read < 1) {
        // 0x563678
        *(int32_t *)(a1 + 72) = -1;
        return result;
    }
    // 0x563662
    *(int32_t *)(a1 + 72) = (int32_t)*(char *)(data - 1 + result);
    return result;
}

// Address range: 0x564ef0 - 0x564f30
// From class:    std::bad_cast
// Type:          constructor
int64_t __cxa_bad_cast(void) {
    int64_t v1 = function_20210(8); // 0x564ef9
    *(int64_t *)v1 = (int64_t)&g12;
    return function_203b0(v1, 0x847498, &g4);
}

// Address range: 0x564f30 - 0x564f62
// From class:    std::bad_typeid
// Type:          constructor
int64_t __cxa_bad_typeid(void) {
    int64_t v1 = function_20210(8); // 0x564f39
    *(int64_t *)v1 = (int64_t)&g13;
    return function_203b0(v1, 0x8475d8, &g5);
}

// Address range: 0x564f70 - 0x564fa2
// From class:    std::bad_array_new_length
// Type:          constructor
int64_t __cxa_throw_bad_array_new_length(void) {
    int64_t v1 = function_20210(8); // 0x564f79
    *(int64_t *)v1 = (int64_t)&g14;
    return function_203b0(v1, 0x847618, &g6);
}

// Address range: 0x57a000 - 0x57a03d
int64_t function_57a000(int64_t a1) {
    char v1 = a1;
    if (v1 < 115) {
        unsigned char v2 = (v1 + 53) % 64;
        // 0x57a02c
        return v2 == 0 ? 0x8000000801 : 0x8000000801 >> (int64_t)v2;
    }
    int64_t result = 0; // 0x57a010
    if (v1 == 68) {
        char v3 = *(char *)(a1 + 1); // 0x57a012
        result = v3 < 121 | (v3 & -33) == 79;
    }
    // 0x57a02c
    return result;
}
