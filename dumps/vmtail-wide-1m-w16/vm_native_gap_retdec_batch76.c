/*
 * Targeted RetDec C for native executable gap queue batch 76.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x56b220-0x56b274 rank=21 name=fcn.0056b220 kind=r2_discovered bytes=84 uncovered=84
 *   0x56b4f0-0x56b544 rank=22 name=fcn.0056b4f0 kind=r2_discovered bytes=84 uncovered=84
 *   0x56fc10-0x56fc64 rank=23 name=method.std::ctype_wchar_t_.virtual_56 kind=native_discovered bytes=84 uncovered=84
 *   0x56fc80-0x56fcd4 rank=24 name=method.std::ctype_wchar_t_.virtual_72 kind=native_discovered bytes=84 uncovered=84
 *   0x2a17c-0x2a237 rank=25 name=fcn.0002a17c kind=r2_discovered bytes=187 uncovered=83
 *   0x4ae76-0x4aec9 rank=26 name=fcn.0004ae76 kind=r2_discovered bytes=83 uncovered=83
 *   0x4e1a6-0x4e1f9 rank=27 name=fcn.0004e1a6 kind=r2_discovered bytes=83 uncovered=83
 *   0x6a79c-0x6a7ef rank=28 name=fcn.0006a79c kind=r2_discovered bytes=83 uncovered=83
 *   0x7259e-0x725f1 rank=29 name=fcn.0007259e kind=r2_discovered bytes=83 uncovered=83
 *   0x4c14d0-0x4c1523 rank=30 name=fcn.004c14d0 kind=r2_discovered bytes=83 uncovered=83
 *   0x4d4880-0x4d48d3 rank=31 name=fcn.004d4880 kind=r2_discovered bytes=83 uncovered=83
 *   0x54cf10-0x54cf63 rank=32 name=fcn.0054cf10 kind=r2_discovered bytes=83 uncovered=83
 *   0x4a41e-0x4a470 rank=33 name=fcn.0004a41e kind=r2_discovered bytes=82 uncovered=82
 *   0x4bffc-0x4c04e rank=34 name=fcn.0004bffc kind=r2_discovered bytes=82 uncovered=82
 *   0x63150-0x631a2 rank=35 name=fcn.00063150 kind=r2_discovered bytes=82 uncovered=82
 *   0x772a6-0x772f8 rank=36 name=fcn.000772a6 kind=r2_discovered bytes=82 uncovered=82
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
int32_t __towlower_l(int32_t wc, struct __locale_struct *locale);
int32_t __towupper_l(int32_t wc, struct __locale_struct *locale);
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
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_2508e();
int64_t function_254fe();
int64_t function_2a0c4();
int64_t function_2a17c(int64_t a1, int64_t a2);
int64_t function_4a2f8();
int64_t function_4a41e(int64_t a1);
int64_t function_4ad0c();
int64_t function_4ae54();
int64_t function_4ae76(int64_t a1);
int64_t function_4bf94();
int64_t function_4bffc(int64_t a1);
int64_t function_4c14d0(int64_t a1);
int64_t function_4c1500(void);
int64_t function_4c1510(void);
int64_t function_4d4560();
int64_t function_4d4710();
int64_t function_4d4880(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e1a6(int64_t a1);
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0bc0();
int64_t function_54ce50();
int64_t function_54ceb0();
int64_t function_54cf10(int64_t a1, int64_t a2);
int64_t function_565970();
int64_t function_566180();
int64_t function_56b220(int64_t a1);
int64_t function_56b4f0(int64_t a1);
int64_t function_56fc10(int64_t a1, uint64_t a2, uint64_t result);
int64_t function_56fc80(int64_t a1, uint64_t a2, uint64_t result);
int64_t function_5bff9();
int64_t function_63150(int64_t a1);
int64_t function_6a79c(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_72588();
int64_t function_7259e(int64_t a1);
int64_t function_726d4();
int64_t function_7276e();
int64_t function_72994();
int64_t function_72c32();
int64_t function_772a6(int64_t a1);

// Address range: 0x2a17c - 0x2a237
int64_t function_2a17c(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x2a180
    int64_t v2 = *(int64_t *)(a1 + 16);
    uint32_t v3 = (int32_t)a2;
    int64_t v4 = v1; // 0x2a192
    if (v2 != 0) {
        int64_t v5 = v2;
        int64_t v6; // 0x2a17c
        int64_t v7; // 0x2a17c
        while (*(int32_t *)(v5 + 32) < v3) {
            // 0x2a1a4
            v6 = *(int64_t *)(v5 + 24);
            v7 = v1;
            if (v6 == 0) {
                // break (via goto) -> 0x2a1aa
                goto lab_0x2a1aa;
            }
            v5 = v6;
        }
        int64_t v8 = *(int64_t *)(v5 + 16);
        v7 = v5;
        while (v8 != 0) {
            int64_t v9 = v5;
            v5 = v8;
            while (*(int32_t *)(v5 + 32) < v3) {
                // 0x2a1a4
                v6 = *(int64_t *)(v5 + 24);
                v7 = v9;
                if (v6 == 0) {
                    // break (via goto) -> 0x2a1aa
                    goto lab_0x2a1aa;
                }
                v5 = v6;
            }
            // 0x2a19b
            v8 = *(int64_t *)(v5 + 16);
            v7 = v5;
        }
      lab_0x2a1aa:
        // 0x2a1aa
        v4 = v1;
        if (v1 != v7) {
            // 0x2a1af
            v4 = v7;
            if (*(int32_t *)(v7 + 32) <= v3) {
                // 0x2a22a
                return v7 + 36;
            }
        }
    }
    int64_t v10 = function_4efd30(40); // 0x2a1c1
    int64_t v11 = v10 + 32; // 0x2a1d0
    *(char *)(v10 + 36) = 0;
    int32_t * v12 = (int32_t *)v11; // 0x2a1de
    *v12 = v3;
    int64_t v13 = function_2a0c4(a1, v4, v11); // 0x2a1e1
    if (v11 == 0) {
        // 0x2a21f
        function_4eeb50(v10);
        // 0x2a22a
        return v13 + 36;
    }
    bool v14 = v1 == v11 | v13 != 0;
    bool v15 = v14; // 0x2a1fe
    if (!v14) {
        // 0x2a200
        v15 = *v12 < *(int32_t *)(v10 + 64);
    }
    // 0x2a20a
    function_4f0bc0((int64_t)v15, v10);
    int64_t * v16 = (int64_t *)(a1 + 40); // 0x2a219
    *v16 = *v16 + 1;
    // 0x2a22a
    return v10 + 36;
}

// Address range: 0x4a41e - 0x4a470
int64_t function_4a41e(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4a422
    int64_t v2 = *v1; // 0x4a422
    int64_t v3 = a1; // 0x4a42c
    if (v2 != 0) {
        int64_t v4 = *(int64_t *)v2; // 0x4a432
        function_4a2f8(v2 + 16);
        function_4eeb50(v2);
        v3 = v2;
        while (v4 != 0) {
            int64_t v5 = v4;
            v4 = *(int64_t *)v5;
            function_4a2f8(v5 + 16);
            function_4eeb50(v5);
            v3 = v5;
        }
    }
    // 0x4a448
    __asm_rep_stosb_memset((char *)v3, 0, 8 * *(int64_t *)(a1 + 8));
    *(int64_t *)(a1 + 24) = 0;
    *v1 = 0;
    return 0;
}

// Address range: 0x4ae76 - 0x4aec9
int64_t function_4ae76(int64_t a1) {
    // 0x4ae76
    if ((char)function_4ad0c(a1) != 0) {
        // 0x4ae83
        if (*(int64_t *)(a1 + 296) == 0) {
            // 0x4ae8d
            return function_4ae54();
        }
    }
    // 0x4ae95
    function_4ad0c(a1);
    int64_t result = function_4ad0c(a1); // 0x4aeb4
    if ((char)result == 0) {
        // 0x4aec7
        return result;
    }
    // 0x4aebd
    return *(int64_t *)(a1 + 48);
}

// Address range: 0x4bffc - 0x4c04e
int64_t function_4bffc(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4c000
    int64_t v2 = *v1; // 0x4c000
    int64_t v3 = a1; // 0x4c00a
    if (v2 != 0) {
        int64_t v4 = *(int64_t *)v2; // 0x4c010
        function_4bf94(v2 + 16);
        function_4eeb50(v2);
        v3 = v2;
        while (v4 != 0) {
            int64_t v5 = v4;
            v4 = *(int64_t *)v5;
            function_4bf94(v5 + 16);
            function_4eeb50(v5);
            v3 = v5;
        }
    }
    // 0x4c026
    __asm_rep_stosb_memset((char *)v3, 0, 8 * *(int64_t *)(a1 + 8));
    *(int64_t *)(a1 + 24) = 0;
    *v1 = 0;
    return 0;
}

// Address range: 0x4e1a6 - 0x4e1f9
int64_t function_4e1a6(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 8);
    uint32_t result = *v1 - 1;
    int32_t result3; // 0x4e1a6
    if (g8 == 0) {
        // 0x4e1ca
        *v1 = result;
        if (result != 0) {
            // 0x4e1f7
            return result;
        }
        int32_t * v2 = (int32_t *)(a1 + 12); // 0x4e1dd
        int32_t v3 = *v2 - 1;
        *v2 = v3;
        result3 = v3;
    } else {
        // 0x4e1b4
        *v1 = result;
        if (result != 0) {
            // 0x4e1f7
            int64_t result2; // 0x4e1a6
            return result2;
        }
        int32_t * v4 = (int32_t *)(a1 + 12); // 0x4e1c3
        int32_t v5 = *v4 - 1;
        *v4 = v5;
        result3 = v5;
    }
    // 0x4e1e6
    if (result3 != 0) {
        // 0x4e1f7
        return result3;
    }
    // 0x4e1ea
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x63150 - 0x631a2
int64_t function_63150(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x63154
    int64_t v2 = *v1; // 0x63154
    int64_t v3 = a1; // 0x6315e
    if (v2 != 0) {
        int64_t v4 = *(int64_t *)v2; // 0x63164
        function_254fe(v2 + 16);
        function_4eeb50(v2);
        v3 = v2;
        while (v4 != 0) {
            int64_t v5 = v4;
            v4 = *(int64_t *)v5;
            function_254fe(v5 + 16);
            function_4eeb50(v5);
            v3 = v5;
        }
    }
    // 0x6317a
    __asm_rep_stosb_memset((char *)v3, 0, 8 * *(int64_t *)(a1 + 8));
    *(int64_t *)(a1 + 24) = 0;
    *v1 = 0;
    return 0;
}

// Address range: 0x6a79c - 0x6a7ef
int64_t function_6a79c(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    int64_t v1 = 1; // 0x6a7b3
    if (a2 == 0 && a1 + 8 != a3) {
        // 0x6a7ba
        v1 = function_5bff9(result + 32, a3 + 32) % 256;
    }
    // 0x6a7d1
    function_4f0bc0(v1, result);
    int64_t * v2 = (int64_t *)(a1 + 40); // 0x6a7df
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0x7259e - 0x725f1
int64_t function_7259e(int64_t a1) {
    // 0x7259e
    *(int64_t *)a1 = (int64_t)&g3;
    function_72588();
    function_72994(a1 + 360);
    function_7276e(a1 + 248);
    function_72994(a1 + 208);
    function_726d4(a1 + 160, *(int64_t *)(a1 + 176));
    return function_72c32(a1);
}

// Address range: 0x772a6 - 0x772f8
int64_t function_772a6(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x772aa
    int64_t v2 = *v1; // 0x772aa
    int64_t v3 = a1; // 0x772b4
    if (v2 != 0) {
        int64_t v4 = *(int64_t *)v2; // 0x772ba
        function_2508e(v2 + 8);
        function_4eeb50(v2);
        v3 = v2;
        while (v4 != 0) {
            int64_t v5 = v4;
            v4 = *(int64_t *)v5;
            function_2508e(v5 + 8);
            function_4eeb50(v5);
            v3 = v5;
        }
    }
    // 0x772d0
    __asm_rep_stosb_memset((char *)v3, 0, 8 * *(int64_t *)(a1 + 8));
    *(int64_t *)(a1 + 24) = 0;
    *v1 = 0;
    return 0;
}

// Address range: 0x4c14d0 - 0x4c14f9
int64_t function_4c14d0(int64_t a1) {
    int64_t v1 = a1 + 0xfffffffd; // 0x4c14d0
    if ((int32_t)v1 >= 7) {
        // 0x4c14f7
        return 0;
    }
    int32_t v2 = *(int32_t *)((4 * v1 & 0x3fffffffc) + (int64_t)&g1); // 0x4c14e1
    return (int64_t)v2 + (int64_t)&g1;
}

// Address range: 0x4c1500 - 0x4c1508
int64_t function_4c1500(void) {
    // 0x4c1500
    return (int64_t)&g2;
}

// Address range: 0x4c1510 - 0x4c1518
int64_t function_4c1510(void) {
    // 0x4c1510
    return (int64_t)&g4;
}

// Address range: 0x4d4880 - 0x4d48d3
int64_t function_4d4880(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_4d4560(); // 0x4d489b
    int64_t result = v1; // 0x4d48a2
    if ((int32_t)v1 >= 0) {
        int64_t v2 = function_4d4710(a1, a2, 5); // 0x4d48b2
        result = ((int32_t)v2 >= 0 ? v1 : 0) + v2 & 0xffffffff;
    }
    // 0x4d48c0
    return result;
}

// Address range: 0x54cf10 - 0x54cf63
// From class:    std::ios_base
// Type:          constructor
int64_t function_54cf10(int64_t a1, int64_t a2) {
    // 0x54cf10
    *(int64_t *)a1 = (int64_t)&g6;
    function_54ce50();
    function_54ceb0(a1);
    int64_t * v1 = (int64_t *)(a1 + 200); // 0x54cf31
    int64_t v2 = *v1; // 0x54cf31
    if (v2 == a1 + 64) {
        // 0x54cf56
        return function_566180(a1 + 208);
    }
    if (v2 != 0) {
        // 0x54cf46
        function_4eeb40(v2);
    }
    // 0x54cf4b
    *v1 = 0;
    // 0x54cf56
    return function_566180(a1 + 208);
}

// Address range: 0x56b220 - 0x56b274
// From class:    std::numpunct<char>
// Type:          constructor
int64_t function_56b220(int64_t a1) {
    // 0x56b220
    *(int64_t *)a1 = (int64_t)&g7;
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x56b237
    if (*(int64_t *)(v1 + 24) == 0) {
        // 0x56b266
        return function_565970(a1);
    }
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x56b242
    if (v2 != 0) {
        // 0x56b24b
        function_4eeb40(v2);
    }
    // 0x56b266
    return function_565970(a1);
}

// Address range: 0x56b4f0 - 0x56b544
// From class:    std::numpunct<wchar_t>
// Type:          constructor
int64_t function_56b4f0(int64_t a1) {
    // 0x56b4f0
    *(int64_t *)a1 = (int64_t)&g5;
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x56b507
    if (*(int64_t *)(v1 + 24) == 0) {
        // 0x56b536
        return function_565970(a1);
    }
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x56b512
    if (v2 != 0) {
        // 0x56b51b
        function_4eeb40(v2);
    }
    // 0x56b536
    return function_565970(a1);
}

// Address range: 0x56fc10 - 0x56fc63
// From class:    std::ctype_byname<wchar_t>
// Type:          virtual member function
int64_t function_56fc10(int64_t a1, uint64_t a2, uint64_t result) {
    if (a2 >= result) {
        // 0x56fc5c
        return result;
    }
    int64_t v1 = a2; // 0x56fc3a
    int32_t * v2 = (int32_t *)v1; // 0x56fc44
    *v2 = __towupper_l(*v2, (struct __locale_struct *)*(int64_t *)(a1 + 16));
    while (v1 != (-1 - a2 + result & -4) + (int64_t)(a2 + 4)) {
        // 0x56fc44
        v1 += 4;
        v2 = (int32_t *)v1;
        *v2 = __towupper_l(*v2, (struct __locale_struct *)*(int64_t *)(a1 + 16));
    }
    // 0x56fc5c
    return result;
}

// Address range: 0x56fc80 - 0x56fcd3
// From class:    std::ctype_byname<wchar_t>
// Type:          virtual member function
int64_t function_56fc80(int64_t a1, uint64_t a2, uint64_t result) {
    if (a2 >= result) {
        // 0x56fccc
        return result;
    }
    int64_t v1 = a2; // 0x56fcaa
    int32_t * v2 = (int32_t *)v1; // 0x56fcb4
    *v2 = __towlower_l(*v2, (struct __locale_struct *)*(int64_t *)(a1 + 16));
    while (v1 != (-1 - a2 + result & -4) + (int64_t)(a2 + 4)) {
        // 0x56fcb4
        v1 += 4;
        v2 = (int32_t *)v1;
        *v2 = __towlower_l(*v2, (struct __locale_struct *)*(int64_t *)(a1 + 16));
    }
    // 0x56fccc
    return result;
}
