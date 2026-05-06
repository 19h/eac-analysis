/*
 * Targeted RetDec C for native executable gap queue batch 55.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x32f88d-0x32f90d rank=15 name=fcn.0032f88d kind=r2_discovered bytes=128 uncovered=128
 *   0x4c1b30-0x4c1bb0 rank=16 name=fcn.004c1b30 kind=r2_discovered bytes=128 uncovered=128
 *   0x4cdaa0-0x4cdb20 rank=17 name=fcn.004cdaa0 kind=r2_discovered bytes=128 uncovered=128
 *   0x5027f0-0x502870 rank=18 name=fcn.005027f0 kind=r2_discovered bytes=128 uncovered=128
 *   0x5050b0-0x505130 rank=19 name=fcn.005050b0 kind=r2_discovered bytes=128 uncovered=128
 *   0x5423f0-0x542470 rank=20 name=fcn.005423f0 kind=r2_discovered bytes=128 uncovered=128
 *   0x547d00-0x547d80 rank=21 name=fcn.00547d00 kind=r2_discovered bytes=128 uncovered=128
 *   0x572ed0-0x572f50 rank=22 name=fcn.00572ed0 kind=r2_discovered bytes=128 uncovered=128
 *   0x572f70-0x572ff0 rank=23 name=fcn.00572f70 kind=r2_discovered bytes=128 uncovered=128
 *   0x496ab0-0x496b2f rank=24 name=fcn.00496ab0 kind=r2_discovered bytes=127 uncovered=127
 *   0x496b40-0x496bbf rank=25 name=fcn.00496b40 kind=r2_discovered bytes=127 uncovered=127
 *   0x498740-0x4987bf rank=26 name=fcn.00498740 kind=r2_discovered bytes=127 uncovered=127
 *   0x4a8bb0-0x4a8c2f rank=27 name=fcn.004a8bb0 kind=r2_discovered bytes=127 uncovered=127
 *   0x4b4e60-0x4b4edf rank=31 name=fcn.004b4e60 kind=r2_discovered bytes=127 uncovered=127
 *   0x4ab2f0-0x4ab36f rank=29 name=fcn.004ab2f0 kind=r2_discovered bytes=127 uncovered=127
 *   0x4adc80-0x4adcff rank=30 name=fcn.004adc80 kind=r2_discovered bytes=127 uncovered=127
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
void __asm_out(uint16_t port, char value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
int64_t __asm_iretd(void);
int64_t unknown_34e4aca1(int64_t value);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_ffffffffd3dfe90d(void);
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
int128_t __asm_movdqu(int128_t value);
void __asm_movdqu_133();
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
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_20210();
int64_t function_203b0();
int64_t function_32f88d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_496ab0(int64_t a1);
int64_t function_496b40(int64_t a1);
int64_t function_498740(int64_t a1);
int64_t function_4a8bb0(int64_t a1);
int64_t function_4ab2f0(int64_t a1);
int64_t function_4adc80(int64_t a1);
int64_t function_4b4e60(int64_t a1);
int64_t function_4c1b30(int64_t a1, int64_t a2);
int64_t function_4ccc30();
int64_t function_4cccc0();
int64_t function_4ccd50();
int64_t function_4cd7d0();
int64_t function_4cd900();
int64_t function_4cdaa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4ff200();
int64_t function_501070();
int64_t function_5027f0(int64_t result);
int64_t function_5050b0(int64_t result);
int64_t function_5423f0(void);
int64_t function_542590();
int64_t function_547d00(uint64_t a1, uint64_t a2);
int64_t function_570890();
int64_t function_572ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_572f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_c9849();

// Address range: 0x32f88d - 0x32f90d
int64_t function_32f88d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x32f88d
    return function_c9849(a1);
}

// Address range: 0x496ab0 - 0x496b2e
int64_t function_496ab0(int64_t a1) {
    // 0x496ab0
    int64_t v1; // 0x496ab0
    int64_t v2; // 0x496ab0
    int64_t v3; // 0x496ab0
    int64_t v4; // 0x496ab0
    if (a1 % 2 != 0) {
        // 0x496b00
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x496b03
        v3 = 151;
        v1 = v5;
        v4 = 149;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x496ac1;
        } else {
            goto lab_0x496b10;
        }
    } else {
        // 0x496abb
        v3 = 152;
        v1 = a1;
        v4 = 150;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x496b10;
        } else {
            goto lab_0x496ac1;
        }
    }
  lab_0x496ac1:;
    int64_t v6 = v3; // 0x496ac5
    int64_t v7 = v1; // 0x496ac5
    if ((v1 & 4) != 0) {
        // 0x496b28
        *(int32_t *)v1 = 0;
        int64_t result; // 0x496ab0
        return result;
    }
    goto lab_0x496ac7;
  lab_0x496b10:
    // 0x496b10
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x496b15
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x496b28
        int64_t v14; // 0x496ab0
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x496ab0
        return result2;
    }
    goto lab_0x496ac7;
  lab_0x496ac7:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x496acb
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x496ab0
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x496ad1
    int64_t v11 = v10; // 0x496ad4
    if ((v6 & 4) != 0) {
        // 0x496ad6
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x496ae3
    if ((v6 & 2) != 0) {
        // 0x496ae5
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x496af3
        *(char *)v12 = 0;
    }
    // 0x496af6
    return 0;
}

// Address range: 0x496b40 - 0x496bbe
int64_t function_496b40(int64_t a1) {
    // 0x496b40
    int64_t v1; // 0x496b40
    int64_t v2; // 0x496b40
    int64_t v3; // 0x496b40
    int64_t v4; // 0x496b40
    if (a1 % 2 != 0) {
        // 0x496b90
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x496b93
        v3 = 439;
        v1 = v5;
        v4 = 437;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x496b51;
        } else {
            goto lab_0x496ba0;
        }
    } else {
        // 0x496b4b
        v3 = 440;
        v1 = a1;
        v4 = 438;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x496ba0;
        } else {
            goto lab_0x496b51;
        }
    }
  lab_0x496b51:;
    int64_t v6 = v3; // 0x496b55
    int64_t v7 = v1; // 0x496b55
    if ((v1 & 4) != 0) {
        // 0x496bb8
        *(int32_t *)v1 = 0;
        int64_t result; // 0x496b40
        return result;
    }
    goto lab_0x496b57;
  lab_0x496ba0:
    // 0x496ba0
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x496ba5
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x496bb8
        int64_t v14; // 0x496b40
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x496b40
        return result2;
    }
    goto lab_0x496b57;
  lab_0x496b57:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x496b5b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x496b40
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x496b61
    int64_t v11 = v10; // 0x496b64
    if ((v6 & 4) != 0) {
        // 0x496b66
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x496b73
    if ((v6 & 2) != 0) {
        // 0x496b75
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x496b83
        *(char *)v12 = 0;
    }
    // 0x496b86
    return 0;
}

// Address range: 0x498740 - 0x4987be
int64_t function_498740(int64_t a1) {
    // 0x498740
    int64_t v1; // 0x498740
    int64_t v2; // 0x498740
    int64_t v3; // 0x498740
    int64_t v4; // 0x498740
    if (a1 % 2 != 0) {
        // 0x498790
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x498793
        v3 = 375;
        v1 = v5;
        v4 = 373;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x498751;
        } else {
            goto lab_0x4987a0;
        }
    } else {
        // 0x49874b
        v3 = 376;
        v1 = a1;
        v4 = 374;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4987a0;
        } else {
            goto lab_0x498751;
        }
    }
  lab_0x498751:;
    int64_t v6 = v3; // 0x498755
    int64_t v7 = v1; // 0x498755
    if ((v1 & 4) != 0) {
        // 0x4987b8
        *(int32_t *)v1 = 0;
        int64_t result; // 0x498740
        return result;
    }
    goto lab_0x498757;
  lab_0x4987a0:
    // 0x4987a0
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4987a5
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4987b8
        int64_t v14; // 0x498740
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x498740
        return result2;
    }
    goto lab_0x498757;
  lab_0x498757:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x49875b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x498740
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x498761
    int64_t v11 = v10; // 0x498764
    if ((v6 & 4) != 0) {
        // 0x498766
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x498773
    if ((v6 & 2) != 0) {
        // 0x498775
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x498783
        *(char *)v12 = 0;
    }
    // 0x498786
    return 0;
}

// Address range: 0x4a8bb0 - 0x4a8c2e
int64_t function_4a8bb0(int64_t a1) {
    // 0x4a8bb0
    int64_t v1; // 0x4a8bb0
    int64_t v2; // 0x4a8bb0
    int64_t v3; // 0x4a8bb0
    int64_t v4; // 0x4a8bb0
    if (a1 % 2 != 0) {
        // 0x4a8c00
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4a8c03
        v3 = 415;
        v1 = v5;
        v4 = 413;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4a8bc1;
        } else {
            goto lab_0x4a8c10;
        }
    } else {
        // 0x4a8bbb
        v3 = 416;
        v1 = a1;
        v4 = 414;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4a8c10;
        } else {
            goto lab_0x4a8bc1;
        }
    }
  lab_0x4a8bc1:;
    int64_t v6 = v3; // 0x4a8bc5
    int64_t v7 = v1; // 0x4a8bc5
    if ((v1 & 4) != 0) {
        // 0x4a8c28
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4a8bb0
        return result;
    }
    goto lab_0x4a8bc7;
  lab_0x4a8c10:
    // 0x4a8c10
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4a8c15
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4a8c28
        int64_t v14; // 0x4a8bb0
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4a8bb0
        return result2;
    }
    goto lab_0x4a8bc7;
  lab_0x4a8bc7:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4a8bcb
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4a8bb0
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4a8bd1
    int64_t v11 = v10; // 0x4a8bd4
    if ((v6 & 4) != 0) {
        // 0x4a8bd6
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4a8be3
    if ((v6 & 2) != 0) {
        // 0x4a8be5
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4a8bf3
        *(char *)v12 = 0;
    }
    // 0x4a8bf6
    return 0;
}

// Address range: 0x4ab2f0 - 0x4ab36e
int64_t function_4ab2f0(int64_t a1) {
    // 0x4ab2f0
    int64_t v1; // 0x4ab2f0
    int64_t v2; // 0x4ab2f0
    int64_t v3; // 0x4ab2f0
    int64_t v4; // 0x4ab2f0
    if (a1 % 2 != 0) {
        // 0x4ab340
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4ab343
        v3 = (int64_t)&g2 & -256 | 39;
        v1 = v5;
        v4 = (int64_t)&g2 & -256 | 39;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4ab301;
        } else {
            goto lab_0x4ab350;
        }
    } else {
        // 0x4ab2fb
        v3 = (int64_t)&g2;
        v1 = a1;
        v4 = (int64_t)&g2;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4ab350;
        } else {
            goto lab_0x4ab301;
        }
    }
  lab_0x4ab301:;
    int64_t v6 = v3; // 0x4ab305
    int64_t v7 = v1; // 0x4ab305
    if ((v1 & 4) != 0) {
        // 0x4ab368
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4ab2f0
        return result;
    }
    goto lab_0x4ab307;
  lab_0x4ab350:
    // 0x4ab350
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4ab355
    v6 = v4 + 0xfffffffe & 0xffffffff;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4ab368
        int64_t v14; // 0x4ab2f0
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4ab2f0
        return result2;
    }
    goto lab_0x4ab307;
  lab_0x4ab307:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4ab30b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4ab2f0
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4ab311
    int64_t v11 = v10; // 0x4ab314
    if ((v6 & 4) != 0) {
        // 0x4ab316
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4ab323
    if ((v6 & 2) != 0) {
        // 0x4ab325
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4ab333
        *(char *)v12 = 0;
    }
    // 0x4ab336
    return 0;
}

// Address range: 0x4adc80 - 0x4adcfe
int64_t function_4adc80(int64_t a1) {
    // 0x4adc80
    int64_t v1; // 0x4adc80
    int64_t v2; // 0x4adc80
    int64_t v3; // 0x4adc80
    int64_t v4; // 0x4adc80
    if (a1 % 2 != 0) {
        // 0x4adcd0
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4adcd3
        v3 = 287;
        v1 = v5;
        v4 = 285;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4adc91;
        } else {
            goto lab_0x4adce0;
        }
    } else {
        // 0x4adc8b
        v3 = 288;
        v1 = a1;
        v4 = 286;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4adce0;
        } else {
            goto lab_0x4adc91;
        }
    }
  lab_0x4adc91:;
    int64_t v6 = v3; // 0x4adc95
    int64_t v7 = v1; // 0x4adc95
    if ((v1 & 4) != 0) {
        // 0x4adcf8
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4adc80
        return result;
    }
    goto lab_0x4adc97;
  lab_0x4adce0:
    // 0x4adce0
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4adce5
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4adcf8
        int64_t v14; // 0x4adc80
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4adc80
        return result2;
    }
    goto lab_0x4adc97;
  lab_0x4adc97:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4adc9b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4adc80
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4adca1
    int64_t v11 = v10; // 0x4adca4
    if ((v6 & 4) != 0) {
        // 0x4adca6
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4adcb3
    if ((v6 & 2) != 0) {
        // 0x4adcb5
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4adcc3
        *(char *)v12 = 0;
    }
    // 0x4adcc6
    return 0;
}

// Address range: 0x4b4e60 - 0x4b4ede
int64_t function_4b4e60(int64_t a1) {
    // 0x4b4e60
    int64_t v1; // 0x4b4e60
    int64_t v2; // 0x4b4e60
    int64_t v3; // 0x4b4e60
    int64_t v4; // 0x4b4e60
    if (a1 % 2 != 0) {
        // 0x4b4eb0
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x4b4eb3
        v3 = 87;
        v1 = v5;
        v4 = 85;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4b4e71;
        } else {
            goto lab_0x4b4ec0;
        }
    } else {
        // 0x4b4e6b
        v3 = 88;
        v1 = a1;
        v4 = 86;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4b4ec0;
        } else {
            goto lab_0x4b4e71;
        }
    }
  lab_0x4b4e71:;
    int64_t v6 = v3; // 0x4b4e75
    int64_t v7 = v1; // 0x4b4e75
    if ((v1 & 4) != 0) {
        // 0x4b4ed8
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4b4e60
        return result;
    }
    goto lab_0x4b4e77;
  lab_0x4b4ec0:
    // 0x4b4ec0
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4b4ec5
    v6 = v4;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4b4ed8
        int64_t v14; // 0x4b4e60
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4b4e60
        return result2;
    }
    goto lab_0x4b4e77;
  lab_0x4b4e77:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4b4e7b
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4b4e60
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4b4e81
    int64_t v11 = v10; // 0x4b4e84
    if ((v6 & 4) != 0) {
        // 0x4b4e86
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4b4e93
    if ((v6 & 2) != 0) {
        // 0x4b4e95
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4b4ea3
        *(char *)v12 = 0;
    }
    // 0x4b4ea6
    return 0;
}

// Address range: 0x4c1b30 - 0x4c1ba9
int64_t function_4c1b30(int64_t a1, int64_t a2) {
    int64_t result; // 0x4c1b30
    if (a1 != 0) {
        // 0x4c1b48
        result = a1;
        if (*(int64_t *)(a1 + 16) != 0) {
            // 0x4c1b51
            return 0;
        }
    }
    // 0x4c1b51
    return result;
}

// Address range: 0x4cdaa0 - 0x4cdb20
int64_t function_4cdaa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4cdaa0
    int64_t v1; // bp-152, 0x4cdaa0
    function_4ccc30(&v1);
    function_4ccd50(&v1, a4 & 0xffffffff);
    function_4cd7d0(&v1, a1, a2);
    function_4cd900(&v1, a3);
    return function_4cccc0(&v1);
}

// Address range: 0x5027f0 - 0x502870
int64_t function_5027f0(int64_t result) {
    // 0x5027f0
    *(int32_t *)(result + 120) = 0;
    *(char *)(result + 192) = 0;
    function_4ff200(result);
    *(char *)(result + 169) = 0;
    *(char *)(result + 170) = 0;
    int64_t v1 = *(int64_t *)(result + 152); // 0x502827
    *(int64_t *)(result + 40) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 48) = 0;
    *(int64_t *)(result + 8) = v1;
    *(int64_t *)(result + 16) = v1;
    *(int64_t *)(result + 24) = v1;
    int64_t v2 = *(int64_t *)(result + 124); // 0x502852
    *(int64_t *)(result + 132) = v2;
    *(int64_t *)(result + 140) = v2;
    return result;
}

// Address range: 0x5050b0 - 0x505130
int64_t function_5050b0(int64_t result) {
    // 0x5050b0
    *(int32_t *)(result + 120) = 0;
    *(char *)(result + 192) = 0;
    function_501070(result);
    *(char *)(result + 169) = 0;
    *(char *)(result + 170) = 0;
    int64_t v1 = *(int64_t *)(result + 152); // 0x5050e7
    *(int64_t *)(result + 40) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 48) = 0;
    *(int64_t *)(result + 8) = v1;
    *(int64_t *)(result + 16) = v1;
    *(int64_t *)(result + 24) = v1;
    int64_t v2 = *(int64_t *)(result + 124); // 0x505112
    *(int64_t *)(result + 132) = v2;
    *(int64_t *)(result + 140) = v2;
    return result;
}

// Address range: 0x5423f0 - 0x542470
// From class:    std::bad_typeid
// Type:          constructor
int64_t function_5423f0(void) {
    int64_t v1 = function_20210(8); // 0x5423f9
    *(int64_t *)v1 = (int64_t)&g5;
    function_203b0(v1, 0x847498, &g3);
    int64_t v2 = function_20210(8); // 0x542439
    *(int64_t *)v2 = (int64_t)&g6;
    return function_203b0(v2, 0x8475d8, &g4);
}

// Address range: 0x547d00 - 0x547d80
int64_t function_547d00(uint64_t a1, uint64_t a2) {
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x547d66
        return function_542590("basic_string::_S_create");
    }
    // 0x547d10
    int64_t result; // 0x547d54
    if (a1 <= a2) {
        int64_t v1 = a1;
        result = function_4efd30(v1 + 25);
        *(int64_t *)(result + 8) = v1;
        *(int32_t *)(result + 16) = 0;
        return result;
    }
    uint64_t v2 = 2 * a2; // 0x547d1c
    int64_t v3 = v2 > a1 ? v2 : a1; // 0x547d23
    uint64_t v4 = v3 + 57; // 0x547d27
    int64_t v5 = v3; // 0x547d32
    if (v4 > (int64_t)&g1 && v3 > a2) {
        uint64_t v6 = v3 + (int64_t)&g1 - (v4 & (int64_t)(int32_t)&g7); // 0x547d46
        v5 = v6 < 0x3ffffffffffffff9 ? v6 : 0x3ffffffffffffff9;
    }
    // 0x547d54
    result = function_4efd30(v5 + 25);
    *(int64_t *)(result + 8) = v5;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x572ed0 - 0x572f50
int64_t function_572ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x572ee6
    int64_t v2; // bp-72, 0x572ed0
    int64_t v3 = (int64_t)&v2; // 0x572efa
    int64_t v4; // bp-56, 0x572ed0
    int64_t v5 = (int64_t)&v4; // 0x572efd
    v2 = v5;
    function_570890(&v2);
    int64_t result = v3; // 0x572f23
    if (v2 != v5) {
        // 0x572f25
        function_4eeb50(v2, &v2, a4);
        result = v3 & 0xfffffff8;
    }
    // 0x572f32
    if (v1 == __readfsqword(40)) {
        // 0x572f42
        return result;
    }
    // 0x572f4b
    __stack_chk_fail();
    return (int64_t)&g8;
}

// Address range: 0x572f70 - 0x572ff0
int64_t function_572f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x572f86
    int64_t v2; // bp-72, 0x572f70
    int64_t v3 = (int64_t)&v2; // 0x572f9a
    int64_t v4; // bp-56, 0x572f70
    int64_t v5 = (int64_t)&v4; // 0x572f9d
    v2 = v5;
    function_570890(&v2);
    int64_t result = v3; // 0x572fc3
    if (v2 != v5) {
        // 0x572fc5
        function_4eeb50(v2, &v2, a4);
        result = v3 & 0xfffffff8;
    }
    // 0x572fd2
    if (v1 == __readfsqword(40)) {
        // 0x572fe2
        return result;
    }
    // 0x572feb
    __stack_chk_fail();
    return (int64_t)&g8;
}
