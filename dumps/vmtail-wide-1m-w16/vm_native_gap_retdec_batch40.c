/*
 * Targeted RetDec C for native executable gap queue batch 40.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x50e9e-0x50f4b rank=13 name=fcn.00050e9e kind=r2_discovered bytes=173 uncovered=173
 *   0x62114-0x621c1 rank=14 name=fcn.00062114 kind=r2_discovered bytes=173 uncovered=173
 *   0x4b92f0-0x4b939d rank=15 name=fcn.004b92f0 kind=r2_discovered bytes=173 uncovered=173
 *   0x48d50f-0x48d5bb rank=16 name=fcn.0048d50f kind=r2_discovered bytes=172 uncovered=172
 *   0x5048d0-0x50497c rank=17 name=method.std::basic_fstream_char__std::char_traits_char___.virtual_8 kind=native_discovered bytes=172 uncovered=172
 *   0x507330-0x5073dc rank=18 name=method.std::basic_fstream_wchar_t__std::char_traits_wchar_t___.virtual_8 kind=native_discovered bytes=172 uncovered=172
 *   0x524600-0x5246ac rank=19 name=fcn.00524600 kind=r2_discovered bytes=172 uncovered=172
 *   0x54f020-0x54f0cc rank=20 name=method.std::__codecvt_utf8_base_char16_t_.virtual_56 kind=native_discovered bytes=172 uncovered=172
 *   0x25e90-0x25f7a rank=21 name=fcn.00025e90 kind=r2_discovered bytes=234 uncovered=171
 *   0x4a9790-0x4a983b rank=22 name=fcn.004a9790 kind=r2_discovered bytes=171 uncovered=171
 *   0x577860-0x57790b rank=23 name=fcn.00577860 kind=r2_discovered bytes=171 uncovered=171
 *   0x577940-0x5779eb rank=24 name=fcn.00577940 kind=r2_discovered bytes=171 uncovered=171
 *   0x599ba-0x59a64 rank=25 name=fcn.000599ba kind=r2_discovered bytes=170 uncovered=170
 *   0x4aef80-0x4af02a rank=26 name=fcn.004aef80 kind=r2_discovered bytes=170 uncovered=170
 *   0x4d0e20-0x4d0eca rank=27 name=fcn.004d0e20 kind=r2_discovered bytes=170 uncovered=170
 *   0x50f6f0-0x50f79a rank=28 name=fcn.0050f6f0 kind=r2_discovered bytes=170 uncovered=170
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

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
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g22;
extern int g23;
extern int g24;
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
int128_t __asm_movups();
void __asm_movups_133();
int128_t __asm_movaps(int128_t value);
float80_t __frontend_reg_load_fpr(int32_t reg);
void __frontend_reg_store_fpr(int32_t reg, float80_t value);
char *__nl_langinfo_l(int32_t item, struct __locale_struct *locale);
struct __locale_struct *__uselocale(struct __locale_struct *locale);
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
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
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
char *strdup(const char *s);
int __sprintf_chk(char *str, int flag, size_t slen, const char *format, ...);
struct _Unwind_Exception;
int64_t _Unwind_GetRegionStart();
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_24cb0();
int64_t function_24cfa();
int64_t function_250b0();
int64_t function_25534();
int64_t function_25622();
int64_t function_2562c();
int64_t function_25a28();
int64_t function_25e90();
int64_t function_25f7a();
int64_t function_48d50f();
int64_t function_4a9790();
int64_t function_4aec20();
int64_t function_4aef80();
int64_t function_4b0ac0();
int64_t function_4b92f0();
int64_t function_4ba7d0();
int64_t function_4ba830();
int64_t function_4d09e0();
int64_t function_4d0e20();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f1760();
int64_t function_502870();
int64_t function_5048d0();
int64_t function_505130();
int64_t function_507330();
int64_t function_50e9e();
int64_t function_50f6f0();
int64_t function_5235e();
int64_t function_524600();
int64_t function_547e30();
int64_t function_54cf10();
int64_t function_54d830();
int64_t function_54dc8();
int64_t function_54ed10();
int64_t function_54f020();
int64_t function_566180();
int64_t function_577860();
int64_t function_577940();
int64_t function_599ba();
int64_t function_61c46();
int64_t function_62114();
int64_t function_6311a();
int64_t function_63150();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_7826e();

// Address range: 0x25e90 - 0x25f7a
int64_t function_25e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 - 24; // 0x25eb3
    int64_t v2 = *(int64_t *)v1; // 0x25eb3
    int64_t v3 = v2 + a4 - a3; // 0x25eb7
    int64_t v4 = v2 - a2 - a3; // 0x25ebd
    uint64_t v5 = *(int64_t *)(a1 - 16); // 0x25ec0
    int64_t v6 = v5; // 0x25ec4
    if (v3 <= v5) {
        // 0x25efd
        if ((char)function_25622(v1) == 0) {
            int64_t v7 = v1; // 0x25f0d
            if (a4 != a3 && v4 != 0) {
                int64_t v8 = v1 + a2;
                v7 = v8 + a4;
                function_25f7a(v7, v8 + a3, v4);
            }
            // 0x25f5d
            return function_2562c(v7 - 24, v3);
        }
        // 0x25efd
        v6 = *(int64_t *)(a1 - 40);
    }
    // 0x25ec6
    function_24cfa(v3, v6);
    if (a2 != 0) {
        // 0x25ee2
        function_25a28(v3, v3, a2);
    }
    int64_t v9 = v3; // 0x25f31
    if (v4 != 0) {
        // 0x25f33
        v9 = v3 + a2 + a4;
        function_25a28(v9, a3 + a2 + v3, v4);
    }
    int64_t v10 = v9 - 24; // 0x25f4d
    function_24cb0(v10);
    *(int64_t *)a1 = v3;
    // 0x25f5d
    return function_2562c(v10 - 24, v3);
}

// Address range: 0x50e9e - 0x50f4b
int64_t function_50e9e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x50eac
    int16_t v2 = a2; // 0x50ebc
    if (v2 == 4) {
        int64_t v3 = function_4efd30((int64_t *)24); // 0x50ee7
        *(int64_t *)(v3 + 8) = (int64_t)&g22;
        *(int64_t *)v3 = (int64_t)&g2;
        int64_t v4; // bp-33, 0x50e9e
        function_250b0(v3 + 16, a3, &v4);
        // 0x50f1e
        *(int64_t *)a1 = v3;
        goto lab_0x50f2a;
    } else {
        if (v2 != 5) {
            // 0x50f23
            *(int64_t *)a1 = 0;
            goto lab_0x50f2a;
        } else {
            int64_t v5 = function_4efd30(&g1); // 0x50ecd
            function_54dc8(v5, a3);
            // 0x50f1e
            *(int64_t *)a1 = v5;
            goto lab_0x50f2a;
        }
    }
  lab_0x50f2a:;
    int64_t result = a1; // 0x50f3b
    if (v1 != __readfsqword(40)) {
        // 0x50f3d
        __stack_chk_fail();
        result = (int64_t)&g24;
    }
    // 0x50f42
    return result;
}

// Address range: 0x599ba - 0x59a64
int64_t function_599ba(int64_t a1, int64_t c, uint64_t result, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 - 24); // 0x599d1
    if (a4 == 0) {
        // 0x599d7
        if (v1 >= result) {
            // 0x59a55
            return result;
        }
        // 0x59a55
        return -1;
    }
    if (v1 <= result) {
        // 0x59a55
        return -1;
    }
    int64_t v2 = v1 - result; // 0x59a01
    if (v2 < a4) {
        // 0x59a55
        return -1;
    }
    int64_t wstr = 4 * result + a1; // 0x599ba
    int64_t n = v2 + 1 - a4; // 0x59a0c
    int64_t result2; // 0x599ba
    while (n != 0) {
        int32_t * v3 = wmemchr((int32_t *)wstr, (int32_t)c, (int32_t)n); // 0x59a14
        if (v3 == NULL) {
            // break -> 0x59a51
            break;
        }
        int64_t v4 = (int64_t)v3;
        if ((int32_t)function_5235e(v4, c, a4) == 0) {
            // 0x59a33
            result2 = v4 - a1 >> 2;
            return result2;
        }
        int64_t v5 = (a1 - 4 + 4 * v1 - v4) / 4; // 0x59a4b
        wstr = v4 + 4;
        if (v5 < a4) {
            // break -> 0x59a51
            break;
        }
        n = v5 + 1 - a4;
    }
    // 0x59a51
    result2 = -1;
  lab_0x59a55:
    // 0x59a55
    return result2;
}

// Address range: 0x62114 - 0x621c1
int64_t function_62114(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x6212a
    function_729b6();
    function_63150(a1 + 160);
    int64_t * v2 = (int64_t *)(a1 + 232); // 0x6214b
    function_25534(a1 + 216, *v2);
    int64_t v3 = a1 + 224; // 0x6215e
    *v2 = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)(a1 + 240) = v3;
    *(int64_t *)(a1 + 248) = v3;
    function_6311a(a1 + 280);
    function_61c46(a1);
    int64_t v4; // bp-40, 0x62114
    function_729ce(&v4);
    int64_t result = 0; // 0x621b3
    if (v1 != __readfsqword(40)) {
        // 0x621b5
        __stack_chk_fail();
        result = (int64_t)&g24;
    }
    // 0x621ba
    return result;
}

// Address range: 0x48d50f - 0x48d5bb
int64_t function_48d50f(int64_t str, int64_t size, int64_t format, int64_t a4, int64_t a5, int64_t a6) {
    // 0x48d50f
    int64_t v1; // 0x48d50f
    if ((char)v1 != 0) {
        // 0x48d529
        int128_t v2; // 0x48d50f
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int64_t v3 = __readfsqword(40); // 0x48d560
    int64_t v4 = 24; // bp-216, 0x48d585
    int32_t chars_printed = eac_retdec_vsnprintf((char *)str, (int32_t)size, (char *)format, (int64_t)&v4); // 0x48d599
    int64_t result = chars_printed; // 0x48d5ac
    if (v3 != __readfsqword(40)) {
        // 0x48d5ae
        __stack_chk_fail();
        result = (int64_t)&g24;
    }
    // 0x48d5b3
    return result;
}

// Address range: 0x4a9790 - 0x4a9838
int64_t function_4a9790(int64_t str, uint64_t a2, int64_t a3, int64_t a4) {
    int32_t len = strlen((char *)str); // 0x4a97ac
    if (a2 > 2 != ((char)a3 == 42) || *(char *)(a3 + 1) != 46) {
        // 0x4a97c3
        return 0;
    }
    int64_t v1 = len; // 0x4a97ac
    int64_t v2 = str; // 0x4a97ef
    int64_t v3; // 0x4a9790
    if ((char)v3 == 46 || len == 0) {
        // 0x4a97c3
        return 0xffffffff;
    }
    int64_t v4 = 0; // 0x4a97ef
    v4++;
    while (v4 != v1) {
        // 0x4a9800
        v2++;
        if (*(char *)v2 == 46) {
            // 0x4a9820
            if (v4 != 0) {
                // 0x4a9825
                return v1 - v4 != a2 - 1 ? 0xffffffff : v1;
            }
            return 0xffffffff;
        }
        v4++;
    }
  lab_0x4a97c3:
    // 0x4a97c3
    return 0xffffffff;
}

// Address range: 0x4aef80 - 0x4af02a
int64_t function_4aef80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4aef80
    if (a2 == 0) {
        // 0x4af020
        *(int64_t *)a3 = a3;
        return 0;
    }
    int64_t v1 = a3; // 0x4aefc9
    int64_t v2 = a6; // 0x4aef80
    int64_t v3 = a2; // 0x4aefd3
    int64_t v4 = a7; // 0x4aef80
    int64_t v5; // 0x4aef80
    int64_t v6; // 0x4aef80
    char * v7; // 0x4aeff8
    char v8; // 0x4aeffd
    if (v1 == 0) {
        // 0x4aefde
        function_4aec20(a1, 1, a4, a5);
        v6 = 0;
        v7 = (char *)(a4 + 15 + v6);
        v8 = *v7 + 1;
        *v7 = v8;
        while (v8 == 0) {
            // 0x4af00b
            v5 = v6 - 1;
            if (v6 == -15) {
                // break -> 0x4aefb8
                break;
            }
            v6 = v5;
            v7 = (char *)(a4 + 15 + v6);
            v8 = *v7 + 1;
            *v7 = v8;
        }
    }
    char v9 = *(char *)(v1 + a5); // 0x4aefc1
    v1 = (v1 + 1) % 16;
    *(char *)v4 = v9 ^ *(char *)v2;
    v3--;
    v2++;
    v4++;
    while (v3 != 0) {
        // 0x4aefd9
        if (v1 == 0) {
            // 0x4aefde
            function_4aec20(a1, 1, a4, a5);
            v6 = 0;
            v7 = (char *)(a4 + 15 + v6);
            v8 = *v7 + 1;
            *v7 = v8;
            while (v8 == 0) {
                // 0x4af00b
                v5 = v6 - 1;
                if (v6 == -15) {
                    // break -> 0x4aefb8
                    break;
                }
                v6 = v5;
                v7 = (char *)(a4 + 15 + v6);
                v8 = *v7 + 1;
                *v7 = v8;
            }
        }
        // 0x4aefb8
        v9 = *(char *)(v1 + a5);
        v1 = (v1 + 1) % 16;
        *(char *)v4 = v9 ^ *(char *)v2;
        v3--;
        v2++;
        v4++;
    }
    // 0x4af020
    *(int64_t *)a3 = v1;
    return 0;
}

// Address range: 0x4b92f0 - 0x4b939d
int64_t function_4b92f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = function_4ba830(); // 0x4b930c
    if ((int32_t)result != 0) {
        // 0x4b9339
        return result;
    }
    int32_t v1 = a3; // 0x4b9315
    if (v1 == 1) {
        // 0x4b9378
        return function_4ba7d0(a1 + 344, a2 + 272);
    }
    // 0x4b931b
    if (v1 != 0) {
        // 0x4b9339
        return result;
    }
    int64_t result2 = function_4ba7d0(a1 + 272, a2 + 272); // 0x4b9330
    if ((int32_t)result2 == 0) {
        // 0x4b9350
        return function_4b0ac0(a1 + 248, a2 + 248);
    }
    // 0x4b9339
    return result2;
}

// Address range: 0x4d0e20 - 0x4d0eca
int64_t function_4d0e20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4d0e20
    if (a2 == 0) {
        // 0x4d0ec0
        *(int64_t *)a3 = a3;
        return 0;
    }
    int64_t v1 = a3; // 0x4d0e69
    int64_t v2 = a6; // 0x4d0e20
    int64_t v3 = a2; // 0x4d0e73
    int64_t v4 = a7; // 0x4d0e20
    int64_t v5; // 0x4d0e20
    int64_t v6; // 0x4d0e20
    char * v7; // 0x4d0e98
    char v8; // 0x4d0e9d
    if (v1 == 0) {
        // 0x4d0e7e
        function_4d09e0(a1, 1, a4, a5);
        v6 = 0;
        v7 = (char *)(a4 + 15 + v6);
        v8 = *v7 + 1;
        *v7 = v8;
        while (v8 == 0) {
            // 0x4d0eab
            v5 = v6 - 1;
            if (v6 == -15) {
                // break -> 0x4d0e58
                break;
            }
            v6 = v5;
            v7 = (char *)(a4 + 15 + v6);
            v8 = *v7 + 1;
            *v7 = v8;
        }
    }
    char v9 = *(char *)(v1 + a5); // 0x4d0e61
    v1 = (v1 + 1) % 16;
    *(char *)v4 = v9 ^ *(char *)v2;
    v3--;
    v2++;
    v4++;
    while (v3 != 0) {
        // 0x4d0e79
        if (v1 == 0) {
            // 0x4d0e7e
            function_4d09e0(a1, 1, a4, a5);
            v6 = 0;
            v7 = (char *)(a4 + 15 + v6);
            v8 = *v7 + 1;
            *v7 = v8;
            while (v8 == 0) {
                // 0x4d0eab
                v5 = v6 - 1;
                if (v6 == -15) {
                    // break -> 0x4d0e58
                    break;
                }
                v6 = v5;
                v7 = (char *)(a4 + 15 + v6);
                v8 = *v7 + 1;
                *v7 = v8;
            }
        }
        // 0x4d0e58
        v9 = *(char *)(v1 + a5);
        v1 = (v1 + 1) % 16;
        *(char *)v4 = v9 ^ *(char *)v2;
        v3--;
        v2++;
        v4++;
    }
    // 0x4d0ec0
    *(int64_t *)a3 = v1;
    return 0;
}

// Address range: 0x5048d0 - 0x50497c
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_5048d0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x5048e3
    int64_t v2 = v1 + 24; // 0x5048e6
    int64_t * v3 = (int64_t *)v1; // 0x5048ea
    *v3 = (int64_t)&g8;
    int64_t * v4 = (int64_t *)(v1 + 16); // 0x5048f5
    *v4 = (int64_t)&g9;
    int64_t v5 = v1 + 264; // 0x504900
    int64_t * v6 = (int64_t *)v5; // 0x504900
    *v6 = (int64_t)&g10;
    int64_t * v7 = (int64_t *)v2; // 0x50490b
    *v7 = (int64_t)&g5;
    function_502870(v2);
    function_4f1760(v1 + 128);
    *v7 = (int64_t)&g17;
    function_566180(v1 + 80);
    *(int64_t *)(v1 + 8) = 0;
    *v4 = (int64_t)&g6;
    *v3 = (int64_t)&g7;
    *v6 = (int64_t)&g3;
    function_54cf10(v5);
    return function_4eeb50(v1);
}

// Address range: 0x507330 - 0x5073dc
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_507330(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x507343
    int64_t v2 = v1 + 24; // 0x507346
    int64_t * v3 = (int64_t *)v1; // 0x50734a
    *v3 = (int64_t)&g14;
    int64_t * v4 = (int64_t *)(v1 + 16); // 0x507355
    *v4 = (int64_t)&g15;
    int64_t v5 = v1 + 264; // 0x507360
    int64_t * v6 = (int64_t *)v5; // 0x507360
    *v6 = (int64_t)&g16;
    int64_t * v7 = (int64_t *)v2; // 0x50736b
    *v7 = (int64_t)&g11;
    function_505130(v2);
    function_4f1760(v1 + 128);
    *v7 = (int64_t)&g18;
    function_566180(v1 + 80);
    *(int64_t *)(v1 + 8) = 0;
    *v4 = (int64_t)&g12;
    *v3 = (int64_t)&g13;
    *v6 = (int64_t)&g4;
    function_54cf10(v5);
    return function_4eeb50(v1);
}

// Address range: 0x50f6f0 - 0x50f792
int64_t function_50f6f0(int64_t a1, int64_t a2) {
    int64_t v1 = 1; // 0x50f6ff
    if (a1 != 0) {
        int32_t * v2 = (int32_t *)(a1 + 8); // 0x50f703
        v1 = 0;
        if (*v2 == -1) {
            uint64_t result = *(int64_t *)(a1 + 16); // 0x50f728
            if (result >= *(int64_t *)(a1 + 24)) {
                // 0x50f798
                return result;
            }
            int32_t v3 = *(int32_t *)result; // 0x50f732
            if (v3 == -1) {
                // 0x50f780
                *(int64_t *)a1 = 0;
                v1 = 1;
            } else {
                // 0x50f739
                *v2 = v3;
                v1 = 0;
            }
        }
    }
    // 0x50f709
    if (a2 == 0) {
        // 0x50f71a
        return v1 & 0xffffffff;
    }
    int32_t * v4 = (int32_t *)(a2 + 8); // 0x50f711
    if (*v4 != -1) {
        // 0x50f71a
        return (v1 ^ 1) & 0xffffffff;
    }
    uint64_t result2 = *(int64_t *)(a2 + 16); // 0x50f740
    if (result2 >= *(int64_t *)(a2 + 24)) {
        // 0x50f798
        return result2;
    }
    int32_t v5 = *(int32_t *)result2; // 0x50f74a
    if (v5 == -1) {
        // 0x50f770
        *(int64_t *)a2 = 0;
        // 0x50f71a
        return v1 & 0xffffffff;
    }
    // 0x50f751
    *v4 = v5;
    // 0x50f71a
    return (v1 ^ 1) & 0xffffffff;
}

// Address range: 0x524600 - 0x5246ab
int64_t function_524600(int64_t a1, int64_t result2) {
    if (a1 == 0) {
        // 0x524698
        int64_t result; // 0x524600
        return result;
    }
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x524617
    int64_t v2 = 0; // 0x52461b
    int32_t v3; // 0x524600
    if (*v1 == -1) {
        uint64_t v4 = *(int64_t *)(a1 + 16); // 0x524640
        if (v4 >= *(int64_t *)(a1 + 24)) {
            int32_t v5 = a1;
            v3 = v5;
            if (v5 != -1) {
                goto lab_0x52464d;
            } else {
                // 0x524685
                *(int64_t *)a1 = 0;
                v2 = 1;
                goto lab_0x52461d;
            }
        } else {
            // 0x52464a
            v3 = (int32_t)*(char *)v4;
            goto lab_0x52464d;
        }
    } else {
        goto lab_0x52461d;
    }
  lab_0x52461d:
    // 0x52461d
    if (result2 == 0) {
        // 0x52462e
        return v2 & 0xffffffff;
    }
    int32_t * v6 = (int32_t *)(result2 + 8); // 0x524625
    if (*v6 == -1) {
        uint64_t v7 = *(int64_t *)(result2 + 16); // 0x524658
        if (v7 >= *(int64_t *)(result2 + 24)) {
            // 0x524698
            return result2;
        }
        // 0x524662
        *v6 = (int32_t)*(char *)v7;
        // 0x52462e
        return (v2 ^ 1) & 0xffffffff;
    }
    // 0x52462e
    return (v2 ^ 1) & 0xffffffff;
  lab_0x52464d:
    // 0x52464d
    *v1 = v3;
    v2 = 0;
    goto lab_0x52461d;
}

// Address range: 0x54f020 - 0x54f0cb
// From class:    std::__codecvt_utf8_base<char16_t>
// Type:          virtual member function
int64_t function_54f020(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x54f02f
    __readfsqword(40);
    int64_t v2 = a3; // bp-72, 0x54f046
    if ((*(int32_t *)(a1 + 24) & 4) != 0) {
        // 0x54f0c0
        return function_54ed10(&v2);
    }
    // 0x54f055
    if (a5 == 0) {
        // 0x54f096
        __readfsqword(40);
        return 0;
    }
    int64_t v3 = (int32_t)v1 >= (int32_t)&g23 ? (int64_t)(int32_t)&g23 : v1 & 0xffffffff; // 0x54f064
    int64_t v4 = a5;
    while (!((v4 == 1 | (int32_t)v3 < (int32_t)function_54d830(&v2, v3)))) {
        // 0x54f078
        v4--;
    }
    // 0x54f096
    __readfsqword(40);
    return v2 - a3;
}

// Address range: 0x577860 - 0x57790b
int64_t function_577860(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x577860
    __readfsqword(40);
    int64_t v1; // bp-56, 0x577860
    int64_t result = (int64_t)&v1; // 0x57788a
    function_7826e(&v1);
    int64_t v2 = v1 - 24; // 0x5778a9
    if (v2 == (int64_t)g19) {
        // 0x5778b6
        __readfsqword(40);
        return result;
    }
    // 0x5778d8
    if (g20 == 0) {
        // 0x577908
        return result;
    }
    int32_t * v3 = (int32_t *)(v1 - 8); // 0x5778e7
    int32_t v4 = *v3; // 0x5778e7
    *v3 = v4 - 1;
    int64_t result2 = result; // 0x5778ee
    if (v4 >= 0 != v4 != 0) {
        // 0x5778f0
        int64_t v5; // bp-57, 0x577860
        function_547e30(v2, &v5, v1, v4);
        result2 = result & 0xfffffff8;
    }
    // 0x5778b6
    __readfsqword(40);
    return result2;
}

// Address range: 0x577940 - 0x5779eb
int64_t function_577940(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x577940
    __readfsqword(40);
    int64_t v1; // bp-56, 0x577940
    int64_t result = (int64_t)&v1; // 0x57796a
    function_7826e(&v1);
    int64_t v2 = v1 - 24; // 0x577989
    if (v2 == (int64_t)g19) {
        // 0x577996
        __readfsqword(40);
        return result;
    }
    // 0x5779b8
    if (g20 == 0) {
        // 0x5779e8
        return result;
    }
    int32_t * v3 = (int32_t *)(v1 - 8); // 0x5779c7
    int32_t v4 = *v3; // 0x5779c7
    *v3 = v4 - 1;
    int64_t result2 = result; // 0x5779ce
    if (v4 >= 0 != v4 != 0) {
        // 0x5779d0
        int64_t v5; // bp-57, 0x577940
        function_547e30(v2, &v5, v1, v4);
        result2 = result & 0xfffffff8;
    }
    // 0x577996
    __readfsqword(40);
    return result2;
}
