/*
 * Targeted RetDec C for native executable gap queue batch 65.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x501260-0x5012d0 rank=18 name=fcn.00501260 kind=r2_discovered bytes=112 uncovered=112
 *   0x2b1e2-0x2b251 rank=19 name=fcn.0002b1e2 kind=r2_discovered bytes=111 uncovered=111
 *   0x4e958-0x4e9c7 rank=20 name=fcn.0004e958 kind=r2_discovered bytes=111 uncovered=111
 *   0x4353f8-0x435467 rank=21 name=fcn.004353f8 kind=r2_discovered bytes=111 uncovered=111
 *   0x48e0de-0x48e14d rank=22 name=fcn.0048e0de kind=r2_discovered bytes=111 uncovered=111
 *   0x48e2d8-0x48e347 rank=23 name=fcn.0048e2d8 kind=r2_discovered bytes=111 uncovered=111
 *   0x4f1b70-0x4f1bdf rank=24 name=fcn.004f1b70 kind=r2_discovered bytes=111 uncovered=111
 *   0x4ff200-0x4ff26f rank=25 name=fcn.004ff200 kind=r2_discovered bytes=111 uncovered=111
 *   0x501070-0x5010df rank=26 name=fcn.00501070 kind=r2_discovered bytes=111 uncovered=111
 *   0x547d80-0x547def rank=27 name=fcn.00547d80 kind=r2_discovered bytes=111 uncovered=111
 *   0x56eb80-0x56ebef rank=28 name=fcn.0056eb80 kind=r2_discovered bytes=111 uncovered=111
 *   0x4d906-0x4d974 rank=29 name=fcn.0004d906 kind=r2_discovered bytes=110 uncovered=110
 *   0x69a4e-0x69abc rank=30 name=fcn.00069a4e kind=r2_discovered bytes=110 uncovered=110
 *   0x48a0b7-0x48a125 rank=31 name=fcn.0048a0b7 kind=r2_discovered bytes=110 uncovered=110
 *   0x4c16b0-0x4c171e rank=32 name=fcn.004c16b0 kind=r2_discovered bytes=110 uncovered=110
 *   0x568110-0x56817e rank=33 name=fcn.00568110 kind=r2_discovered bytes=110 uncovered=110
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
extern int g3;
extern int g4;
extern int g6;
extern int g7;
extern int g8;
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
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_once(int32_t *once_control, void (*init_routine)(void));
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

int64_t function_200c0();
int64_t function_20210();
int64_t function_203b0();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_29cf4();
int64_t function_29d94();
int64_t function_29ef7();
int64_t function_2b1e2(int64_t a1);
int64_t function_2b64a();
int64_t function_2b776();
int64_t function_35fcc();
int64_t function_4353f8(void);
int64_t function_48a0b7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48d198();
int64_t function_48e0de(int64_t a1, int64_t a2);
int64_t function_48e2d8(int64_t a1, int64_t a2);
int64_t function_490604();
int64_t function_4c16b0(int64_t a1);
int64_t function_4d906(int64_t result, int64_t a2);
int64_t function_4e958(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4eeb40();
int64_t function_4f1b70(int64_t mutex);
int64_t function_4f2d50();
int64_t function_4ff200(int64_t a1);
int64_t function_501070(int64_t a1);
int64_t function_501260(int64_t a1, int64_t a2);
int64_t function_542470();
int64_t function_547d00();
int64_t function_547d80(int64_t a1, int64_t a2);
int64_t function_566100();
int64_t function_566180();
int64_t function_568110(int64_t a1);
int64_t function_56eb80(int64_t a1, int64_t a2);
int64_t function_5c3b0();
int64_t function_6746a();
int64_t function_69a4e(int64_t a1, int64_t a2, int64_t a3);

// Address range: 0x2b1e2 - 0x2b251
int64_t function_2b1e2(int64_t a1) {
    char * v1 = (char *)(a1 + 16); // 0x2b1ef
    if (*v1 % 2 != 0) {
        // 0x2b1f5
        function_2b64a(a1 + 8);
    }
    // 0x2b1fd
    *(int64_t *)(a1 + 24) = a1;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 32) = 0x2b160;
    int64_t v2 = function_2b776(); // 0x2b214
    if (v2 != 0) {
        // 0x2b21e
        function_6746a(v2, "SteamAPI_RegisterCallback");
    }
    int64_t result = 0; // 0x2b242
    if (*v1 % 2 != 0) {
        // 0x2b244
        *(char *)(a1 + 89) = 1;
        result = __asm_mfence();
    }
    // 0x2b24d
    return result;
}

// Address range: 0x4d906 - 0x4d974
int64_t function_4d906(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x4d90e
    *v1 = 0;
    int64_t v2 = __readfsqword(40); // 0x4d91a
    *(int64_t *)a2 = 0;
    *(int64_t *)result = a2;
    int64_t * v3 = (int64_t *)(result + 8); // 0x4d93a
    *v3 = *v1;
    int64_t v4 = *v3; // bp-24, 0x4d94c
    function_35fcc(&v4);
    if (v2 != __readfsqword(40)) {
        // 0x4d966
        __stack_chk_fail();
    }
    // 0x4d96b
    return result;
}

// Address range: 0x4e958 - 0x4e9c7
int64_t function_4e958(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e958
    int64_t v1; // 0x4e958
    char v2 = v1;
    if (v2 == 113) {
        // 0x4e98c
        return (int64_t)"quat";
    }
    int64_t result; // 0x4e958
    if (v2 > 113) {
        // 0x4e98d
        if (v2 == 117) {
            // 0x4e98c
            return (int64_t)"uint32";
        }
        if (v2 <= 117) {
            // 0x4e9bd
            if (v2 == 115) {
                // 0x4e98c
                return (int64_t)"string";
            }
            // 0x4e98c
            return (int64_t)"n/a";
        }
        // 0x4e9a7
        result = (int64_t)"vec3f";
        switch (v2) {
            case 118: {
                return result;
            }
            case 121: {
                // 0x4e98c
                result = (int64_t)"uint64";
                // 0x4e98c
                return result;
            }
            default: {
                return (int64_t)"n/a";
            }
        }
    } else {
        // 0x4e968
        result = (int64_t)"int64";
        switch (v2) {
            case 106: {
                return result;
            }
            case 112: {
                // 0x4e98c
                return (int64_t)"client";
            }
            default: {
                // 0x4e980
                if (v2 == 105) {
                    // 0x4e98c
                    return (int64_t)"int32";
                }
                // 0x4e98c
                return (int64_t)"n/a";
            }
        }
    }
}

// Address range: 0x69a4e - 0x69abc
int64_t function_69a4e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x69a62
    function_2509a();
    int64_t v2; // bp-40, 0x69a4e
    function_490604(&v2);
    function_29d94(function_5c3b0(a1 + 48, &v2), a3);
    function_2508e(&v2);
    int64_t result = 0; // 0x69aac
    if (v1 != __readfsqword(40)) {
        // 0x69aae
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x69ab3
    return result;
}

// Address range: 0x4353f8 - 0x435411
int64_t function_4353f8(void) {
    // 0x4353f8
    int64_t v1; // 0x4353f8
    int64_t v2 = v1;
    *(char *)(v2 & 0xffffffff) = (char)v2 - 55;
    return v1 & -256 | (int64_t)*(char *)-0xfcf4f9889069cc6;
}

// Address range: 0x48a0b7 - 0x48a125
int64_t function_48a0b7(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3; // 0x48a0c0
    if (a2 == a1) {
        // 0x48a11d
        return a2 - a1 + a3;
    }
    int64_t v2 = a1 + 64; // 0x48a0c9
    *(int64_t *)v1 = *(int64_t *)a1;
    *(int64_t *)(v1 + 8) = *(int64_t *)(a1 + 8);
    *(int64_t *)(v1 + 16) = *(int64_t *)(a1 + 16);
    *(char *)(v1 + 24) = *(char *)(a1 + 24);
    *(int64_t *)(v1 + 32) = *(int64_t *)(a1 + 32);
    int64_t * v3 = (int64_t *)(a1 + 40); // 0x48a0f0
    *(int64_t *)(v1 + 40) = *v3;
    int64_t * v4 = (int64_t *)(a1 + 48); // 0x48a0ff
    *v3 = (int64_t)&g6;
    *(int64_t *)(v1 + 48) = *v4;
    *v4 = (int64_t)&g6;
    *(int64_t *)(v1 + 56) = *(int64_t *)(a1 + 56);
    v1 += 64;
    while (v2 != a2) {
        int64_t v5 = v2;
        v2 = v5 + 64;
        *(int64_t *)v1 = *(int64_t *)v5;
        *(int64_t *)(v1 + 8) = *(int64_t *)(v5 + 8);
        *(int64_t *)(v1 + 16) = *(int64_t *)(v5 + 16);
        *(char *)(v1 + 24) = *(char *)(v5 + 24);
        *(int64_t *)(v1 + 32) = *(int64_t *)(v5 + 32);
        v3 = (int64_t *)(v5 + 40);
        *(int64_t *)(v1 + 40) = *v3;
        v4 = (int64_t *)(v5 + 48);
        *v3 = (int64_t)&g6;
        *(int64_t *)(v1 + 48) = *v4;
        *v4 = (int64_t)&g6;
        *(int64_t *)(v1 + 56) = *(int64_t *)(v5 + 56);
        v1 += 64;
    }
    // 0x48a11d
    return a2 - a1 + a3;
}

// Address range: 0x48e0de - 0x48e14d
int64_t function_48e0de(int64_t a1, int64_t a2) {
    // 0x48e0de
    if (a2 == a1) {
        // 0x48e142
        return (int64_t)&g7;
    }
    int64_t result; // 0x48e0de
    if (a1 == 0) {
        // 0x48e12b
        function_542470("basic_string::_S_construct null not valid");
        result = (int64_t)&g7;
    } else {
        int64_t v1 = a2 - a1 >> 2; // 0x48e0fd
        int64_t v2 = function_48d198(v1, 0); // 0x48e104
        int64_t v3 = v2 + 24; // 0x48e109
        function_29ef7(v3, a1, v1);
        function_29cf4(v2, v1);
        result = v3;
    }
    // 0x48e142
    return result;
}

// Address range: 0x48e2d8 - 0x48e347
int64_t function_48e2d8(int64_t a1, int64_t a2) {
    // 0x48e2d8
    if (a2 == a1) {
        // 0x48e33c
        return (int64_t)&g7;
    }
    int64_t result; // 0x48e2d8
    if (a1 == 0) {
        // 0x48e325
        function_542470("basic_string::_S_construct null not valid");
        result = (int64_t)&g7;
    } else {
        int64_t v1 = a2 - a1 >> 2; // 0x48e2f7
        int64_t v2 = function_48d198(v1, 0); // 0x48e2fe
        int64_t v3 = v2 + 24; // 0x48e303
        function_29ef7(v3, a1, v1);
        function_29cf4(v2, v1);
        result = v3;
    }
    // 0x48e33c
    return result;
}

// Address range: 0x4c16b0 - 0x4c171e
int64_t function_4c16b0(int64_t a1) {
    if (a1 == 0) {
        // 0x4c171c
        int64_t result; // 0x4c16b0
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4c16cd
    int64_t v2 = *v1; // 0x4c16cd
    if (v2 != 0) {
        int32_t v3 = 2 * *(int32_t *)(v2 + 20); // 0x4c16dc
        int64_t v4 = v2; // 0x4c16e3
        if (v3 != 0) {
            int64_t v5 = v2; // 0x4c16e8
            *(char *)v5 = 0;
            v5++;
            while (v5 != v2 + (int64_t)v3) {
                // 0x4c16f0
                *(char *)v5 = 0;
                v5++;
            }
            // 0x4c16fc
            v4 = *v1;
        }
        // 0x4c1700
        free((int64_t *)v4);
    }
    int64_t result2 = a1 + 24; // 0x4c1705
    int64_t v6 = a1; // 0x4c1709
    *(char *)v6 = 0;
    v6++;
    while (v6 != result2) {
        // 0x4c1710
        *(char *)v6 = 0;
        v6++;
    }
    // 0x4c171c
    return result2;
}

// Address range: 0x4f1b70 - 0x4f1bdd
int64_t function_4f1b70(int64_t mutex) {
    // 0x4f1b70
    if (g4 == 0) {
        // 0x4f1b90
        int64_t result; // 0x4f1b70
        return result;
    }
    int32_t result2 = pthread_mutex_unlock((int64_t *)mutex); // 0x4f1b81
    if (result2 == 0) {
        // 0x4f1b8a
        return result2;
    }
    int64_t v1 = function_20210(8); // 0x4f1b97
    *(int64_t *)v1 = (int64_t)&g2;
    _Unwind_Resume((struct _Unwind_Exception *)function_203b0(v1, 0x843278, 0x4f1a60));
    return function_200c0();
}

// Address range: 0x4ff200 - 0x4ff26f
int64_t function_4ff200(int64_t a1) {
    char * v1 = (char *)(a1 + 168); // 0x4ff201
    int64_t v2; // 0x4ff200
    if (*v1 != 0) {
        int64_t * v3 = (int64_t *)(a1 + 152); // 0x4ff20d
        int64_t v4 = *v3; // 0x4ff20d
        int64_t v5; // 0x4ff200
        if (v4 != 0) {
            // 0x4ff219
            v5 = function_4eeb40(v4);
        }
        // 0x4ff21e
        *v3 = 0;
        *v1 = 0;
        v2 = v5;
    }
    int64_t * v6 = (int64_t *)(a1 + 208); // 0x4ff230
    int64_t v7 = *v6; // 0x4ff230
    int64_t result = v2; // 0x4ff23a
    if (v7 != 0) {
        // 0x4ff23c
        result = function_4eeb40(v7);
    }
    // 0x4ff241
    *v6 = 0;
    *(int64_t *)(a1 + 216) = 0;
    *(int64_t *)(a1 + 224) = 0;
    *(int64_t *)(a1 + 232) = 0;
    return result;
}

// Address range: 0x501070 - 0x5010df
int64_t function_501070(int64_t a1) {
    char * v1 = (char *)(a1 + 168); // 0x501071
    int64_t v2; // 0x501070
    if (*v1 != 0) {
        int64_t * v3 = (int64_t *)(a1 + 152); // 0x50107d
        int64_t v4 = *v3; // 0x50107d
        int64_t v5; // 0x501070
        if (v4 != 0) {
            // 0x501089
            v5 = function_4eeb40(v4);
        }
        // 0x50108e
        *v3 = 0;
        *v1 = 0;
        v2 = v5;
    }
    int64_t * v6 = (int64_t *)(a1 + 208); // 0x5010a0
    int64_t v7 = *v6; // 0x5010a0
    int64_t result = v2; // 0x5010aa
    if (v7 != 0) {
        // 0x5010ac
        result = function_4eeb40(v7);
    }
    // 0x5010b1
    *v6 = 0;
    *(int64_t *)(a1 + 216) = 0;
    *(int64_t *)(a1 + 224) = 0;
    *(int64_t *)(a1 + 232) = 0;
    return result;
}

// Address range: 0x501260 - 0x5012d0
int64_t function_501260(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)*(int64_t *)(a1 + 200); // 0x501273
    if ((char)v1 != 0) {
        // 0x50127d
        return *(int64_t *)(a1 + 16) - *(int64_t *)(a1 + 24) >> 2;
    }
    int32_t v2 = *(int32_t *)(a1 + 232); // 0x5012c3
    return (int32_t)(*(int64_t *)(a1 + 208) + v1) - v2;
}

// Address range: 0x547d80 - 0x547de4
int64_t function_547d80(int64_t a1, int64_t a2) {
    // 0x547d80
    if (a1 == 0) {
        // 0x547d85
        return (int64_t)&g6;
    }
    int64_t v1 = function_547d00(); // 0x547da3
    int64_t v2 = v1 + 24; // 0x547daf
    int64_t v3; // 0x547d80
    int64_t v4; // 0x547d80
    if (a1 != 1) {
        int64_t set_mem = (int64_t)memset((void *)(int64_t)((int64_t *)v2), 0x1000000 * (int32_t)a2 >> 24, (int32_t)a1); // 0x547dda
        v3 = set_mem;
        v4 = set_mem;
    } else {
        // 0x547db5
        *(char *)v2 = (char)a2;
        v3 = v1;
        v4 = v2;
    }
    // 0x547d85
    return v1 != (int64_t)g3 ? v3 : v4;
}

// Address range: 0x568110 - 0x56817e
int64_t function_568110(int64_t a1) {
    // 0x568110
    *(int64_t *)(a1 + 8) = 6;
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 24) = (int32_t)&g1;
    int64_t v1 = __readfsqword(40); // 0x568136
    function_4f2d50();
    int64_t v2; // bp-40, 0x568110
    function_566100(a1 + 208, &v2);
    function_566180(&v2);
    int64_t result = __readfsqword(40) ^ v1; // 0x568167
    if (result == 0) {
        // 0x568172
        return result;
    }
    // 0x568179
    __stack_chk_fail();
    return (int64_t)&g8;
}

// Address range: 0x56eb80 - 0x56ebef
int64_t function_56eb80(int64_t a1, int64_t a2) {
    int64_t v1 = _ITM_RU1(a2); // 0x56ebab
    int64_t v2 = 1; // 0x56ebb2
    int64_t v3 = a2; // 0x56ebb2
    int64_t v4 = 1; // 0x56ebb2
    if ((char)v1 != 0) {
        v3++;
        v2++;
        int64_t v5 = _ITM_RU1(v3); // 0x56ebab
        v4 = v2;
        while ((char)v5 != 0) {
            // 0x56eba0
            v3++;
            v2++;
            v5 = _ITM_RU1(v3);
            v4 = v2;
        }
    }
    int64_t v6 = _ZGTtnam(v4 + 24); // 0x56ebb8
    int64_t v7 = v4 - 1; // 0x56ebbd
    int64_t v8 = v6 + 24; // 0x56ebc1
    *(int32_t *)(v6 + 16) = 0;
    *(int64_t *)(v6 + 8) = v7;
    *(int64_t *)v6 = v7;
    int64_t result = _ITM_memcpyRtWn(v8, a2, v4); // 0x56ebdc
    if (a1 != 0) {
        // 0x56ebe6
        *(int64_t *)a1 = v8;
    }
    // 0x56ebea
    return result;
}
