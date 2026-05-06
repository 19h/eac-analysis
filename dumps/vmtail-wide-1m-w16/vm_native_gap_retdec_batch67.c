/*
 * Targeted RetDec C for native executable gap queue batch 67.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x54e0c0-0x54e12b rank=18 name=fcn.0054e0c0 kind=r2_discovered bytes=107 uncovered=107
 *   0x451f2-0x4525c rank=19 name=fcn.000451f2 kind=r2_discovered bytes=106 uncovered=106
 *   0x57ee6-0x57f50 rank=20 name=fcn.00057ee6 kind=r2_discovered bytes=106 uncovered=106
 *   0x491fda-0x492044 rank=21 name=fcn.00491fda kind=r2_discovered bytes=106 uncovered=106
 *   0x4b0d80-0x4b0dea rank=22 name=fcn.004b0d80 kind=r2_discovered bytes=106 uncovered=106
 *   0x4bbc00-0x4bbc6a rank=23 name=fcn.004bbc00 kind=r2_discovered bytes=106 uncovered=106
 *   0x5433f0-0x54345a rank=24 name=fcn.005433f0 kind=r2_discovered bytes=106 uncovered=106
 *   0x545920-0x54598a rank=25 name=fcn.00545920 kind=r2_discovered bytes=106 uncovered=106
 *   0x5634a0-0x56350a rank=26 name=method.__gnu_cxx::stdio_sync_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_64 kind=native_discovered bytes=106 uncovered=106
 *   0x564be0-0x564c4a rank=27 name=sym.__cxa_rethrow kind=symbol_named bytes=106 uncovered=106
 *   0x5c046-0x5c0af rank=29 name=fcn.0005c046 kind=r2_discovered bytes=105 uncovered=105
 *   0x549b10-0x549b79 rank=31 name=fcn.00549b10 kind=r2_discovered bytes=105 uncovered=105
 *   0x5633a0-0x563409 rank=32 name=method.__gnu_cxx::stdio_sync_filebuf_char__std::char_traits_char___.virtual_32 kind=native_discovered bytes=105 uncovered=105
 *   0x563410-0x563479 rank=33 name=method.__gnu_cxx::stdio_sync_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_32 kind=native_discovered bytes=105 uncovered=105
 *   0x2c89a-0x2c902 rank=34 name=fcn.0002c89a kind=r2_discovered bytes=104 uncovered=104
 *   0x4c52c0-0x4c5328 rank=35 name=fcn.004c52c0 kind=r2_discovered bytes=104 uncovered=104
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
extern int g4;
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
void unknown_11c3039(void);
int64_t unknown_2a35274a(void);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_ffffffffd3dfe90d(void);
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
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
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
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
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
struct tm *gmtime_r(const int32_t *timep, struct tm *result);
struct _Unwind_Exception;
int64_t _Unwind_DeleteException(int64_t exception);
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_1fd40();
int64_t function_20650();
int64_t function_259ce();
int64_t function_2c89a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_451f2(int64_t a1, int64_t a2);
int64_t function_491fda(int64_t a1);
int64_t function_4b08f0();
int64_t function_4b0d80(int64_t a1, int64_t a2);
int64_t function_4ba4b0();
int64_t function_4bba20();
int64_t function_4bbc00(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4bbc70();
int64_t function_4c52c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4efcc0();
int64_t function_4f0ae0();
int64_t function_4fc010();
int64_t function_4fca70();
int64_t function_5425f0();
int64_t function_542c40();
int64_t function_5433f0(int64_t a1, int64_t a2);
int64_t function_545160();
int64_t function_545920(int64_t a1, int64_t a2);
int64_t function_549a50();
int64_t function_549b10(int64_t result, uint64_t n, int64_t a3);
int64_t function_54df80();
int64_t function_54e080();
int64_t function_54e0c0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_5633a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_563410(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5634a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_57ee6(int64_t a1, int64_t a2);
int64_t function_583640();
int64_t function_5bff9();
int64_t function_5c046(int64_t a1, int64_t a2);

// Address range: 0x2c89a - 0x2c902
int64_t function_2c89a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 16);
    int64_t v2; // 0x2c89a
    uint32_t v3 = (int32_t)v2;
    int64_t v4 = a1 + 8; // 0x2c8b0
    int32_t * v5; // 0x2c89a
    int64_t v6; // 0x2c89a
    if (v1 == 0) {
        goto lab_0x2c8d4;
    } else {
        v4 = v1;
        int32_t * v7 = (int32_t *)(v4 + 32);
        uint32_t v8 = *v7; // 0x2c8b2
        int64_t v9 = *(int64_t *)((v8 <= v3 ? 24 : 16) + v4);
        while (v9 != 0) {
            // 0x2c8b2
            v4 = v9;
            v7 = (int32_t *)(v4 + 32);
            v8 = *v7;
            v9 = *(int64_t *)((v8 <= v3 ? 24 : 16) + v4);
        }
        // 0x2c8d0
        v5 = v7;
        v6 = v4;
        if (v8 <= v3) {
            return *v5 < v3 ? 0 : v6;
        } else {
            goto lab_0x2c8d4;
        }
    }
  lab_0x2c8d4:
    // 0x2c8d4
    if (*(int64_t *)(a1 + 24) == v4) {
        // 0x2c8fe
        return 0;
    }
    int64_t v10 = function_4f0ae0(v4); // 0x2c8e4
    v5 = (int32_t *)(v10 + 32);
    v6 = v10;
    return *v5 < v3 ? 0 : v6;
    // 0x2c8fe
    return *v5 < v3 ? 0 : v6;
}

// Address range: 0x451f2 - 0x4525c
int64_t function_451f2(int64_t a1, int64_t a2) {
    int64_t v1 = a1 - 24; // 0x45205
    int64_t * v2 = (int64_t *)v1; // 0x45205
    int64_t v3 = *v2; // 0x45205
    uint64_t v4 = v3 + 1;
    int64_t v5; // 0x451f2
    if (v4 > *(int64_t *)(a1 - 16)) {
        goto lab_0x45214;
    } else {
        int32_t v6 = *(int32_t *)(a1 - 8); // 0x45221
        v5 = v3;
        if (v6 >= 0 == (v6 != 0)) {
            goto lab_0x45214;
        } else {
            goto lab_0x45228;
        }
    }
  lab_0x45214:
    // 0x45214
    function_259ce(a1, v4);
    v5 = *v2;
    goto lab_0x45228;
  lab_0x45228:
    // 0x45228
    *(char *)(v5 + a1) = (char)a2;
    if (v1 != (int64_t)g2) {
        // 0x45243
        *(int32_t *)(a1 - 8) = 0;
        *v2 = v4;
        *(char *)(v4 + a1) = 0;
    }
    // 0x45254
    int64_t result; // 0x451f2
    return result;
}

// Address range: 0x57ee6 - 0x57f50
int64_t function_57ee6(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x57ef1
    int64_t v2 = 0; // 0x57f07
    int64_t v3 = 0; // 0x57f07
    if (a1 != 0) {
        // 0x57f09
        *(int64_t *)a2 = 0;
        v2 = function_583640();
        v3 = 0;
        if ((int32_t)v2 == 0) {
            // 0x57f21
            v3 = 1;
        }
    }
    int64_t result = v2 & -256 | v3; // 0x57f3f
    if (v1 != __readfsqword(40)) {
        // 0x57f41
        __stack_chk_fail();
        result = (int64_t)&g4;
    }
    // 0x57f46
    return result;
}

// Address range: 0x5c046 - 0x5c0af
int64_t function_5c046(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x5c04a
    int64_t v2 = *(int64_t *)(a1 + 16);
    if (v2 == 0) {
        // 0x5c097
        function_5425f0("map::at");
        // 0x5c0a3
        return v1 + 40;
    }
    int64_t v3 = v2;
    int64_t v4; // 0x5c046
    int64_t v5; // 0x5c046
    while ((char)function_5bff9(v3 + 32, a2) != 0) {
        // 0x5c07c
        v5 = *(int64_t *)(v3 + 24);
        v4 = v1;
        if (v5 == 0) {
            // break (via goto) -> 0x5c082
            goto lab_0x5c082;
        }
        v3 = v5;
    }
    int64_t v6 = *(int64_t *)(v3 + 16);
    v4 = v3;
    while (v6 != 0) {
        int64_t v7 = v3;
        v3 = v6;
        while ((char)function_5bff9(v3 + 32, a2) != 0) {
            // 0x5c07c
            v5 = *(int64_t *)(v3 + 24);
            v4 = v7;
            if (v5 == 0) {
                // break (via goto) -> 0x5c082
                goto lab_0x5c082;
            }
            v3 = v5;
        }
        // 0x5c073
        v6 = *(int64_t *)(v3 + 16);
        v4 = v3;
    }
  lab_0x5c082:
    // 0x5c082
    if (v1 == v4) {
        // 0x5c097
        function_5425f0("map::at");
        // 0x5c0a3
        return v1 + 40;
    }
    // 0x5c087
    if ((char)function_5bff9(a2, v4 + 32) == 0) {
        // 0x5c0a3
        return v4 + 40;
    }
    // 0x5c097
    function_5425f0("map::at");
    // 0x5c0a3
    return v4 + 40;
}

// Address range: 0x491fda - 0x492044
int64_t function_491fda(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x49200a
    munmap((int64_t *)(0x39879829e16013bd * (v1 + 0x5e0a76393bfeda2b ^ -0x716204840bfb3545)), (int32_t)&g1);
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x49201d
    munmap((int64_t *)(0x39879829e16013bd * (v2 + 0x5e0a76393bfeda2b ^ -0x716204840bfb3545)), (int32_t)&g1);
    int64_t fd; // 0x491fda
    return close((int32_t)fd);
}

// Address range: 0x4b0d80 - 0x4b0dea
int64_t function_4b0d80(int64_t a1, int64_t a2) {
    int64_t v1 = function_4b08f0(); // 0x4b0d9e
    if ((int32_t)v1 == 0) {
        int64_t * v2 = (int64_t *)(a1 + 16); // 0x4b0dad
        memset((void *)(int64_t)((int64_t *)*v2), 0, 8 * (int32_t)*(int64_t *)(a1 + 8));
        int64_t v3 = a2 >> 63; // 0x4b0dc3
        *(int64_t *)*v2 = (v3 ^ a2) - v3;
        *(int32_t *)a1 = (int32_t)v3 | 1;
    }
    // 0x4b0dd5
    return v1 & 0xffffffff;
}

// Address range: 0x4bbc00 - 0x4bbc67
int64_t function_4bbc00(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x4bbc00
    int64_t v1; // 0x4bbc00
    int64_t v2 = function_4ba4b0((int32_t)v1); // 0x4bbc1e
    if (v2 == 0) {
        // 0x4bbc49
        return 0;
    }
    // 0x4bbc28
    *(int64_t *)a2 = 3;
    int64_t result = 0xffffb100; // 0x4bbc34
    if (a4 >= 3) {
        // 0x4bbc36
        *(char *)a3 = 3;
        *(char *)(a3 + 1) = *(char *)(v2 + 5);
        *(char *)(a3 + 2) = (char)*(int16_t *)(v2 + 4);
        result = 0;
    }
    // 0x4bbc49
    return result;
}

// Address range: 0x4c52c0 - 0x4c5328
int64_t function_4c52c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 + 272; // 0x4c52de
    int64_t v2 = function_4bba20(a3, v1, a1, a2 - a1); // 0x4c52f7
    int64_t result = v2; // 0x4c52fe
    if ((int32_t)v2 == 0) {
        // 0x4c5300
        result = function_4bbc70(a3, v1);
    }
    // 0x4c530b
    *(int64_t *)a1 = a2;
    return result;
}

// Address range: 0x5433f0 - 0x543458
int64_t function_5433f0(int64_t a1, int64_t a2) {
    // 0x5433f0
    *(char *)a1 = 0;
    *(int64_t *)(a1 + 8) = a2;
    int64_t * v1 = (int64_t *)(a2 - 24); // 0x543402
    int64_t v2 = *v1 + a2; // 0x543406
    int64_t v3 = *(int64_t *)(v2 + 216); // 0x543409
    uint32_t v4 = *(int32_t *)(v2 + 32); // 0x543413
    int64_t v5 = v4; // 0x543413
    int64_t result = v2; // 0x543419
    int64_t v6 = v5; // 0x543419
    int64_t v7; // 0x543423
    if (v3 != 0) {
        // 0x54341b
        if (v4 != 0) {
            // 0x54341f
            v7 = v5 & 0xfffffffb | 4;
            return function_4fc010(v2, v7, (int32_t)v7);
        }
        // 0x543438
        function_542c40(v3);
        result = *v1 + a2;
        v6 = (int64_t)*(int32_t *)(result + 32);
    }
    // 0x543454
    if (v6 == 0) {
        // 0x543458
        return result;
    }
    // 0x54341f
    v7 = v6 & 0xfffffffb | 4;
    return function_4fc010(result, v7, (int32_t)v7);
}

// Address range: 0x545920 - 0x545988
int64_t function_545920(int64_t a1, int64_t a2) {
    // 0x545920
    *(char *)a1 = 0;
    *(int64_t *)(a1 + 8) = a2;
    int64_t * v1 = (int64_t *)(a2 - 24); // 0x545932
    int64_t v2 = *v1 + a2; // 0x545936
    int64_t v3 = *(int64_t *)(v2 + 216); // 0x545939
    uint32_t v4 = *(int32_t *)(v2 + 32); // 0x545943
    int64_t v5 = v4; // 0x545943
    int64_t result = v2; // 0x545949
    int64_t v6 = v5; // 0x545949
    int64_t v7; // 0x545953
    if (v3 != 0) {
        // 0x54594b
        if (v4 != 0) {
            // 0x54594f
            v7 = v5 & 0xfffffffb | 4;
            return function_4fca70(v2, v7, (int32_t)v7);
        }
        // 0x545968
        function_545160(v3);
        result = *v1 + a2;
        v6 = (int64_t)*(int32_t *)(result + 32);
    }
    // 0x545984
    if (v6 == 0) {
        // 0x545988
        return result;
    }
    // 0x54594f
    v7 = v6 & 0xfffffffb | 4;
    return function_4fca70(result, v7, (int32_t)v7);
}

// Address range: 0x549b10 - 0x549b79
int64_t function_549b10(int64_t result, uint64_t n, int64_t a3) {
    if (n >= 4) {
        // 0x549b68
        return function_549a50();
    }
    if (n == 0) {
        // 0x549b49
        *(int64_t *)(result + 8) = n;
        *(int32_t *)(4 * n + result) = 0;
        return result;
    }
    int32_t wc = a3;
    int32_t * wstr = (int32_t *)result;
    if (n == 1) {
        // 0x549b60
        *wstr = wc;
    } else {
        // 0x549b37
        wmemset(wstr, wc, (int32_t)n);
    }
    // 0x549b49
    *(int64_t *)(result + 8) = n;
    *(int32_t *)(4 * n + result) = 0;
    return result;
}

// Address range: 0x54e0c0 - 0x54e12a
int64_t function_54e0c0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = a1; // 0x54e0cc
    if ((a4 & 2) != 0) {
        int64_t v1 = function_54e080(a2); // 0x54e11b
        result = a2;
        if ((char)v1 == 0) {
            // 0x54e10f
            return 1;
        }
    }
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x54e0d1
    if (result == *v2) {
        // 0x54e10f
        return result;
    }
    int64_t result2 = result & 0xffffffff; // 0x54e0d7
    if (result2 > a3) {
        // 0x54e10f
        return result2;
    }
    int64_t v3 = a2 + 4;
    int64_t v4 = result2; // 0x54e0f8
    int64_t result3 = 1; // 0x54e10d
    while ((char)function_54df80(a2, v4) != 0) {
        // 0x54e0e8
        *(int64_t *)a1 = v3;
        result3 = v3;
        if (*v2 == v3) {
            // break -> 0x54e10f
            break;
        }
        // 0x54e0f8
        v4 = (int64_t)*(int32_t *)v3;
        result3 = v4;
        if (v4 > a3) {
            // break -> 0x54e10f
            break;
        }
        result3 = 1;
    }
    // 0x54e10f
    return result3;
}

// Address range: 0x5633a0 - 0x563409
// From class:    __gnu_cxx::stdio_sync_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_5633a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x5633a8
    int32_t v2 = a3; // 0x5633b8
    int32_t v3 = 0; // 0x5633ba
    if (v2 != 0) {
        // 0x5633bc
        v3 = v2 != 1 ? 2 : 1;
    }
    int64_t * v4 = (int64_t *)(a1 + 64); // 0x5633c7
    int64_t result = -1; // 0x5633db
    if (fseeko64((struct _IO_FILE *)*v4, (int32_t)a2, v3) == 0) {
        // 0x5633dd
        result = ftello64((struct _IO_FILE *)*v4);
    }
    // 0x5633e9
    if (v1 == __readfsqword(40)) {
        // 0x5633fe
        return result;
    }
    // 0x563404
    __stack_chk_fail();
    return (int64_t)&g4;
}

// Address range: 0x563410 - 0x563479
// From class:    __gnu_cxx::stdio_sync_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_563410(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x563418
    int32_t v2 = a3; // 0x563428
    int32_t v3 = 0; // 0x56342a
    if (v2 != 0) {
        // 0x56342c
        v3 = v2 != 1 ? 2 : 1;
    }
    int64_t * v4 = (int64_t *)(a1 + 64); // 0x563437
    int64_t result = -1; // 0x56344b
    if (fseeko64((struct _IO_FILE *)*v4, (int32_t)a2, v3) == 0) {
        // 0x56344d
        result = ftello64((struct _IO_FILE *)*v4);
    }
    // 0x563459
    if (v1 == __readfsqword(40)) {
        // 0x56346e
        return result;
    }
    // 0x563474
    __stack_chk_fail();
    return (int64_t)&g4;
}

// Address range: 0x5634a0 - 0x563508
// From class:    __gnu_cxx::stdio_sync_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_5634a0(int64_t a1, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x5634e1
        *(int32_t *)(a1 + 72) = -1;
        return 0;
    }
    int64_t v1 = 0;
    int32_t v2 = getwc((struct _IO_FILE *)*(int64_t *)(a1 + 64)); // 0x5634d2
    uint32_t result; // 0x563500
    while (v2 != -1) {
        // 0x5634c0
        *(int32_t *)(4 * v1 + a2) = v2;
        int64_t v3 = v1 + 1; // 0x5634c5
        if (v3 == a3) {
            // 0x563500
            result = *(int32_t *)(a2 - 4 + 4 * a3);
            *(int32_t *)(a1 + 72) = result;
            return result;
        }
        v1 = v3;
        v2 = getwc((struct _IO_FILE *)*(int64_t *)(a1 + 64));
    }
    // 0x5634dc
    if (v1 == 0) {
        // 0x5634e1
        *(int32_t *)(a1 + 72) = -1;
        return 0;
    }
    // 0x563500
    result = *(int32_t *)(a2 - 4 + 4 * v1);
    *(int32_t *)(a1 + 72) = result;
    return result;
}

// Address range: 0x564be0 - 0x564c4a
int64_t __cxa_rethrow(void) {
    int64_t v1 = function_20650(); // 0x564be1
    int64_t * v2 = (int64_t *)v1; // 0x564be6
    int64_t v3 = *v2; // 0x564be6
    int32_t * v4 = (int32_t *)(v1 + 8); // 0x564be9
    *v4 = *v4 + 1;
    int64_t v5 = 0; // 0x564bf0
    int64_t v6; // 0x564be0
    int64_t v7; // 0x564be0
    int64_t v8; // 0x564be0
    if (v3 == 0) {
        goto lab_0x564c24;
    } else {
        int64_t v9 = v3 + 80;
        v7 = v9;
        v8 = v3;
        if ((*(int64_t *)v9 || 1) == 0x474e5543432b2b01) {
            goto lab_0x564c29;
        } else {
            // 0x564c09
            *v2 = 0;
            v6 = v9;
            goto lab_0x564c10;
        }
    }
  lab_0x564c24:
    // 0x564c24
    function_4efcc0();
    v7 = v5 + 80;
    v8 = v5;
    goto lab_0x564c29;
  lab_0x564c29:;
    int32_t * v10 = (int32_t *)(v8 + 40); // 0x564c36
    *v10 = -*v10;
    v6 = v7;
    goto lab_0x564c10;
  lab_0x564c10:
    // 0x564c10
    v5 = v6;
    _Unwind_Resume_or_Rethrow(v5);
    function_1fd40(v5);
    goto lab_0x564c24;
}
