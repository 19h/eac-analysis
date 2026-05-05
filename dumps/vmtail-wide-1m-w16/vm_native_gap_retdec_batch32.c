/*
 * Targeted RetDec C for native executable gap queue batch 32.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4b2760-0x4b282a rank=11 name=fcn.004b2760 kind=r2_discovered bytes=202 uncovered=202
 *   0x4e9cb0-0x4e9d7a rank=12 name=fcn.004e9cb0 kind=r2_discovered bytes=202 uncovered=202
 *   0x50e0e0-0x50e1aa rank=13 name=fcn.0050e0e0 kind=r2_discovered bytes=202 uncovered=202
 *   0x5019b0-0x501a79 rank=14 name=method.std::basic_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_40 kind=native_discovered bytes=201 uncovered=201
 *   0x494dd0-0x494e98 rank=15 name=fcn.00494dd0 kind=r2_discovered bytes=200 uncovered=200
 *   0x49a820-0x49a8e8 rank=16 name=fcn.0049a820 kind=r2_discovered bytes=200 uncovered=200
 *   0x54e240-0x54e308 rank=17 name=fcn.0054e240 kind=r2_discovered bytes=200 uncovered=200
 *   0x558300-0x5583c8 rank=18 name=fcn.00558300 kind=r2_discovered bytes=200 uncovered=200
 *   0x6a974-0x6aa3b rank=19 name=fcn.0006a974 kind=r2_discovered bytes=199 uncovered=199
 *   0x3cc938-0x3cc9ff rank=20 name=fcn.003cc938 kind=r2_discovered bytes=199 uncovered=199
 *   0x4b6490-0x4b6557 rank=21 name=fcn.004b6490 kind=r2_discovered bytes=199 uncovered=199
 *   0x4d8e90-0x4d8f57 rank=22 name=fcn.004d8e90 kind=r2_discovered bytes=199 uncovered=199
 *   0x5630c0-0x563187 rank=23 name=fcn.005630c0 kind=r2_discovered bytes=199 uncovered=199
 *   0x3ae24-0x3aeea rank=24 name=fcn.0003ae24 kind=r2_discovered bytes=198 uncovered=198
 *   0x4b91b0-0x4b9276 rank=25 name=fcn.004b91b0 kind=r2_discovered bytes=198 uncovered=198
 *   0x4ffb20-0x4ffbe6 rank=26 name=method.std::basic_filebuf_char__std::char_traits_char___.virtual_40 kind=native_discovered bytes=198 uncovered=198
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
struct stat64;
struct timespec;
struct timeval;
struct utsname;
struct iovec;
struct epoll_event;
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
extern int g21;
extern int g22;
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
int fclose(struct _IO_FILE *stream);
int uname(struct utsname *buf);
int64_t __tls_get_addr(void *arg);
int32_t mbrtowc(int32_t *pwc, const char *s, size_t n, struct _TYPEDEF___mbstate_t *ps);
size_t mbstowcs(int32_t *dest, const char *src, size_t n);
int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcslen(const int32_t *s);
int wctob(int32_t wc);
int32_t btowc(int c);
int32_t towlower(int32_t wc);
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

int64_t function_25622();
int64_t function_2562c();
int64_t function_259ce();
int64_t function_3ae24();
int64_t function_3b222();
int64_t function_3cc938();
int64_t function_494dd0();
int64_t function_4985b0();
int64_t function_498a40();
int64_t function_49a730();
int64_t function_49a820();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_4ab380();
int64_t function_4adc80();
int64_t function_4add30();
int64_t function_4b2760();
int64_t function_4b6300();
int64_t function_4b63a0();
int64_t function_4b6490();
int64_t function_4b8fc0();
int64_t function_4b91b0();
int64_t function_4bbb50();
int64_t function_4bbc00();
int64_t function_4bf970();
int64_t function_4d8e90();
int64_t function_4e9cb0();
int64_t function_4efd30();
int64_t function_4f15a0();
int64_t function_4ff5b0();
int64_t function_4ffb20();
int64_t function_501420();
int64_t function_5019b0();
int64_t function_50b2b0();
int64_t function_50e0e0();
int64_t function_54df80();
int64_t function_54e240();
int64_t function_555500();
int64_t function_558300();
int64_t function_5630c0();
int64_t function_565f30();
int64_t function_566390();
int64_t function_566890();
int64_t function_68e1a();
int64_t function_6a974();
int64_t function_c57b8();

// Address range: 0x3ae24 - 0x3aeea
int64_t function_3ae24(int64_t a1, uint64_t a2) {
    int64_t v1 = a1 - 24;
    int64_t * v2 = (int64_t *)v1;
    uint64_t v3 = *v2; // 0x3ae41
    int64_t v4 = function_3b222(a1, v3, a2, "basic_string::resize"); // 0x3ae48
    if (v3 >= a2) {
        // 0x3aee2
        int64_t v5; // 0x3ae24
        return v3 <= a2 ? v5 : v4;
    }
    int64_t v6 = a2 - v3; // 0x3ae55
    if (v6 == 0) {
        // 0x3aee2
        int64_t result; // 0x3ae24
        return result;
    }
    // 0x3ae61
    function_3b222(a1, 0, v6, "basic_string::append");
    int64_t v7; // 0x3ae24
    int64_t * v8; // 0x3ae24
    int64_t v9; // 0x3ae24
    if (*(int64_t *)(a1 - 16) < a2) {
        goto lab_0x3ae7b;
    } else {
        // 0x3ae88
        if ((char)function_25622(v1) != 0) {
            goto lab_0x3ae7b;
        } else {
            int64_t v10 = a1 - 48;
            v8 = (int64_t *)v10;
            v7 = v10;
            v9 = v1;
            goto lab_0x3ae95;
        }
    }
  lab_0x3ae7b:
    // 0x3ae7b
    function_259ce(a1, a2);
    v8 = v2;
    v7 = v1;
    v9 = a1;
    goto lab_0x3ae95;
  lab_0x3ae95:;
    int64_t v11 = *v8 + v9; // 0x3ae99
    char * v12 = (char *)v11;
    int64_t v13; // 0x3ae24
    if (v6 != 1) {
        // 0x3aea8
        __asm_rep_stosb_memset(v12, 0, v6);
        bool v14; // 0x3ae24
        v13 = v6 * (v14 ? -1 : 1) - 24 + v11;
    } else {
        // 0x3aea3
        *v12 = 0;
        v13 = v7;
    }
    // 0x3aeb2
    return function_2562c(v13, a2);
}

// Address range: 0x6a974 - 0x6aa33
int64_t function_6a974(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + (int64_t)&g13; // 0x6a97d
    int64_t v2 = a1 + 184; // 0x6a988
    int64_t v3 = a1 + (int64_t)&g20; // 0x6a99b
    int64_t v4 = a1 + (int64_t)&g12; // 0x6a9a2
    function_49a820(v1);
    int64_t v5 = a1 + (int64_t)&g8; // 0x6a9b1
    function_4ab380(v2);
    function_4985b0(v1);
    function_498a40(v3);
    function_4b6300(v4);
    function_4bf970(v5);
    __asm_rep_stosd_memset((char *)v2, 0, 138);
    __asm_rep_stosd_memset((char *)v5, 0, 256);
    __asm_rep_stosd_memset((char *)v4, 0, 86);
    __asm_rep_stosd_memset((char *)v1, 0, 110);
    __asm_rep_stosd_memset((char *)v3, 0, 94);
    *(char *)(a1 + (int64_t)&g22) = 0;
    return function_68e1a(a1);
}

// Address range: 0x3cc938 - 0x3cc9ff
int64_t function_3cc938(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3cc938
    int64_t v1; // 0x3cc938
    int64_t v2 = (int64_t)&v1; // 0x3cc957
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3cc98a
    int64_t v4 = v2 + 8; // 0x3cc98e
    int64_t * v5 = (int64_t *)v4; // 0x3cc98e
    int64_t v6; // 0x3cc938
    *v5 = v6 ^ 36;
    int64_t v7 = v2 - 16; // 0x3cc997
    *(int64_t *)v7 = v7;
    *v3 = a5;
    *(int64_t *)(v2 + 32) = v1;
    v1 = *v5;
    *v3 = v4;
    v1 = *v5;
    *v3 = v4;
    return function_c57b8();
}

// Address range: 0x494dd0 - 0x494e94
int64_t function_494dd0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 96); // 0x494dd0
    int64_t result = *v1; // 0x494dd0
    int64_t * v2 = (int64_t *)(a1 + 112); // 0x494ddf
    if (*v2 == *(int64_t *)(result + (int64_t)&g9)) {
        // 0x494e80
        return result;
    }
    // 0x494de9
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g21, "swap epochs");
    int64_t v3 = *v1; // 0x494e08
    int64_t * v4 = (int64_t *)(v3 + (int64_t)&g9); // 0x494e10
    *v2 = *v4;
    *v4 = *v2;
    int64_t * v5 = (int64_t *)*(int64_t *)(a1 + 296); // 0x494e30
    *v5 = *(int64_t *)(v3 + (int64_t)&g10);
    *(int64_t *)(*v1 + (int64_t)&g10) = *v5;
    int64_t v6 = *v2; // 0x494e41
    if (v6 == 0 || *(int32_t *)(a1 + 24) < 2) {
        int64_t result2 = *(int64_t *)(a1 + 320); // 0x494e70
        *(int64_t *)(a1 + 328) = result2;
        return result2;
    }
    int64_t v7 = *(int64_t *)(a1 + 320); // 0x494e58
    int64_t result3 = *(int64_t *)(v6 + 24) - *(int64_t *)(v6 + 32) + v7; // 0x494e58
    *(int64_t *)(a1 + 328) = result3;
    return result3;
}

// Address range: 0x49a820 - 0x49a8e8
int64_t function_49a820(int64_t a1) {
    if (a1 == 0) {
        // 0x49a88e
        int64_t result; // 0x49a820
        return result;
    }
    int64_t result2 = function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g1, "=> write close notify"); // 0x49a855
    if (*(int64_t *)(a1 + 352) != 0) {
        // 0x49a88e
        return result2;
    }
    // 0x49a864
    if (*(int32_t *)(a1 + 8) != 16) {
        // 0x49a86a
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g3, "<= write close notify");
        // 0x49a88e
        return 0;
    }
    int64_t v1 = function_49a730(a1, 1, 0); // 0x49a8a2
    if ((int32_t)v1 == 0) {
        // 0x49a86a
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g3, "<= write close notify");
        // 0x49a88e
        return 0;
    }
    int64_t result3 = v1 & 0xffffffff; // 0x49a8b9
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g2, "mbedtls_ssl_send_alert_message", result3, 0x100000000 * v1 >> 32);
    // 0x49a88e
    return result3;
}

// Address range: 0x4b2760 - 0x4b282a
int64_t function_4b2760(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = 0xfffffff4; // 0x4b2767
    if (a3 == 0) {
        // 0x4b2824
        return result;
    }
    if (a3 < 0) {
        // 0x4b2824
        return result;
    }
    switch (a3) {
        case 1: {
            // 0x4b2800
            *(int64_t *)a1 = 0;
            return 0;
        }
        case 2: {
            // 0x4b2810
            *(int64_t *)a1 = *(int64_t *)*(int64_t *)(a2 + 16) % 2;
            return 0;
        }
    }
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x4b2787
    if (v1 == 0) {
        // 0x4b27ea
        *(int64_t *)a1 = 0;
        return 0;
    }
    int64_t v2 = 0; // 0x4b279a
    int64_t v3 = v1; // 0x4b279a
    uint64_t v4 = *(int64_t *)(*(int64_t *)(a2 + 16) - 8 + 8 * v3); // 0x4b27a0
    v2 = (0x100000000 * ((v4 / 0x100000000 | 0x100000000 * v2) % a3) | v4 & 0xffffffff) % a3;
    v3--;
    while (v3 != 0) {
        // 0x4b27a0
        v4 = *(int64_t *)(*(int64_t *)(a2 + 16) - 8 + 8 * v3);
        v2 = (0x100000000 * ((v4 / 0x100000000 | 0x100000000 * v2) % a3) | v4 & 0xffffffff) % a3;
        v3--;
    }
    // 0x4b27e4
    if ((int32_t)a2 < 0) {
        // 0x4b27f0
        *(int64_t *)a1 = v2 != 0 ? a3 - v2 : v2;
        return 0;
    }
    // 0x4b27ea
    *(int64_t *)a1 = v2;
    return 0;
}

// Address range: 0x4b6490 - 0x4b6557
int64_t function_4b6490(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 + 40; // 0x4b6495
    int64_t v2 = 0; // bp-88, 0x4b64cd
    function_4adc80(v1);
    *(int64_t *)(a1 + 328) = a2;
    *(int64_t *)(a1 + 336) = a3;
    *(int32_t *)(a1 + 32) = (int32_t)&g7;
    *(int64_t *)(a1 + 24) = a6;
    function_4add30(v1, &v2, 256);
    return function_4b63a0(a1, a4, a5);
}

// Address range: 0x4b91b0 - 0x4b9276
int64_t function_4b91b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4b91b0
    if (a1 == 0 || *(int64_t *)(a1 + 176) == 0) {
        // 0x4b920d
        return 0xffffb080;
    }
    int64_t result = function_4b8fc0(); // 0x4b9204
    if ((int32_t)result != 0) {
        // 0x4b920d
        return result;
    }
    // 0x4b9230
    int64_t v1; // bp-56, 0x4b91b0
    int64_t result2 = function_4bbc00(a1, &v1, a3, a4); // 0x4b923c
    if ((int32_t)result2 != 0) {
        // 0x4b920d
        return result2;
    }
    int64_t v2 = v1; // 0x4b9245
    int32_t v3 = *(int32_t *)(a1 + 440); // 0x4b9249
    int64_t v4; // bp-48, 0x4b91b0
    return function_4bbb50(a1, a1 + 272, v3, &v4, v2 + a3, a4 - v2);
}

// Address range: 0x4d8e90 - 0x4d8f54
int64_t function_4d8e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    struct struct3 v1; // 0x4d8e95
    // 0x4d8e90
    v1 = __asm_cpuid(0);
    uint32_t v2 = __asm_cpuid_133(1).e2; // 0x4d8e9f
    int32_t v3 = v2 & (int32_t)&g4; // 0x4d8ea3
    int32_t v4 = v3 == 0 ? 5 : 7; // 0x4d8eb2
    uint32_t v5 = (v2 & 0x80000) == 0 ? (v3 - (v3 | (int32_t)(v3 == 0)) & -2) + 3 : v4; // 0x4d8ec7
    int64_t result = v5; // 0x4d8ec7
    if ((v2 & 0x8000000) == 0) {
        // 0x4d8eef
        *(int32_t *)&g17 = (int32_t)result;
        return result;
    }
    int64_t v6 = v2; // 0x4d8e9f
    int64_t v7 = __asm_xgetbv(v6); // 0x4d8ed7
    if ((v7 & 6) != 6) {
        // 0x4d8eef
        *(int32_t *)&g17 = (int32_t)result;
        return result;
    }
    int64_t result2 = (v6 & 0x10000000) != 0 ? result | 8 : result; // 0x4d8f0c
    if (v1.e0 < 7) {
        // 0x4d8eef
        *(int32_t *)&g17 = (int32_t)result2;
        return result2;
    }
    uint32_t v8 = __asm_cpuid_134(7).e1; // 0x4d8f1b
    int64_t result3 = (v8 & 32) != 0 ? result2 | 16 : result2; // 0x4d8f29
    if ((v7 & 224) == 224) {
        // 0x4d8f3c
        return result3 & 0xffffffdf | (int64_t)(v8 / 0x2000000 & 64 | 32);
    }
    // 0x4d8eef
    *(int32_t *)&g17 = (int32_t)result3;
    return result3;
}

// Address range: 0x4e9cb0 - 0x4e9d79
int64_t function_4e9cb0(int64_t result, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a2 + 8); // 0x4e9cb3
    unsigned char v2 = *v1; // 0x4e9cb3
    if ((int32_t)a4 % 256 + (int32_t)v2 > 15) {
        // 0x4e9cdb
        return 0x80200002;
    }
    uint64_t v3 = a4 % 256; // 0x4e9ccc
    int64_t * v4 = (int64_t *)(result + 24); // 0x4e9cd5
    if (*v4 < v3) {
        // 0x4e9cdb
        return 0x80200000;
    }
    // 0x4e9ce0
    *v1 = v2 + (char)a4;
    int64_t * v5 = (int64_t *)(result + 16); // 0x4e9ce7
    int64_t v6 = *v5; // 0x4e9ce7
    uint32_t v7 = (int32_t)v3; // 0x4e9ceb
    if (v7 < 8) {
        if ((a4 & 4) != 0) {
            // 0x4e9d6f
            *(int32_t *)a3 = *(int32_t *)v6;
            return result;
        }
        if (v7 == 0) {
            // 0x4e9d14
            *v5 = *v5 + v3;
            *v4 = *v4 - v3;
            return 0x100000;
        }
        // 0x4e9cfc
        *(char *)a3 = *(char *)v6;
        if ((a4 & 2) != 0) {
            // 0x4e9d08
            *(int16_t *)(v3 + a3 - 2) = *(int16_t *)(v3 - 2 + v6);
        }
        // 0x4e9d14
        *v5 = *v5 + v3;
        *v4 = *v4 - v3;
        return 0x100000;
    }
    int64_t v8 = a3 + 8 & -8; // 0x4e9d32
    *(int64_t *)a3 = *(int64_t *)v6;
    *(int64_t *)(v3 + a3 - 8) = *(int64_t *)(v3 - 8 + v6);
    int64_t v9 = a3 - v8; // 0x4e9d46
    uint32_t v10 = (int32_t)(v9 + v3); // 0x4e9d52
    if (v10 < 8) {
        // 0x4e9d14
        *v5 = *v5 + v3;
        *v4 = *v4 - v3;
        return 0x100000;
    }
    int64_t v11 = 0;
    int64_t v12 = v11 + 8; // 0x4e9d5e
    *(int64_t *)(v11 + v8) = *(int64_t *)(v6 - v9 + v11);
    while ((v10 & -8) > (int32_t)v12) {
        // 0x4e9d5c
        v11 = v12 & 0xffffffff;
        v12 = v11 + 8;
        *(int64_t *)(v11 + v8) = *(int64_t *)(v6 - v9 + v11);
    }
    // 0x4e9d14
    *v5 = *v5 + v3;
    *v4 = *v4 - v3;
    return 0x100000;
}

// Address range: 0x4ffb20 - 0x4ffbe5
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_4ffb20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4ffb20
    __readfsqword(40);
    if ((char)function_4f15a0() == 0) {
        // 0x4ffb6d
        __readfsqword(40);
        return -1;
    }
    char * v1 = (char *)(a1 + 192); // 0x4ffb4e
    if (*v1 == 0) {
        int64_t result = function_4ff5b0(a1, a2, 0, a3);
        __readfsqword(40);
        return result;
    }
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x4ffba8
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x4ffbac
    *v1 = 0;
    *v2 = *(int64_t *)(a1 + 152);
    *(int64_t *)(a1 + 24) = *(int64_t *)(a1 + 184);
    int64_t * v4 = (int64_t *)(a1 + 176); // 0x4ffbd3
    int64_t result2 = *v4 + (int64_t)(*v3 != *v2); // 0x4ffbd3
    *v4 = result2;
    *v3 = result2;
    return result2;
}

// Address range: 0x5019b0 - 0x501a78
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_5019b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5019b0
    __readfsqword(40);
    if ((char)function_4f15a0() == 0) {
        // 0x5019fd
        __readfsqword(40);
        return -1;
    }
    char * v1 = (char *)(a1 + 192); // 0x5019de
    if (*v1 == 0) {
        int64_t result = function_501420(a1, a2, 0, a3);
        __readfsqword(40);
        return result;
    }
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x501a38
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x501a3e
    int64_t * v4 = (int64_t *)(a1 + 176); // 0x501a42
    *v1 = 0;
    *v2 = *(int64_t *)(a1 + 152);
    int64_t result2 = 4 * (int64_t)(*v3 != *v2) + *v4; // 0x501a5e
    *v4 = result2;
    *v3 = result2;
    *(int64_t *)(a1 + 24) = *(int64_t *)(a1 + 184);
    return result2;
}

// Address range: 0x50e0e0 - 0x50e1a9
// From class:    std::__numpunct_cache<wchar_t>
// Type:          constructor
int64_t function_50e0e0(int64_t a1, int64_t a2) {
    int64_t v1 = function_566390(&g18); // 0x50e0f4
    int64_t * v2 = (int64_t *)(*(int64_t *)(a2 + 24) + 8 * v1); // 0x50e108
    int64_t result = *v2; // 0x50e108
    if (result != 0) {
        // 0x50e111
        return result;
    }
    int64_t v3 = function_4efd30(336); // 0x50e125
    *(int32_t *)(v3 + 8) = 0;
    *(int64_t *)(v3 + 16) = 0;
    *(int64_t *)(v3 + 24) = 0;
    *(char *)(v3 + 32) = 0;
    *(int64_t *)(v3 + 40) = 0;
    *(int64_t *)(v3 + 48) = 0;
    *(int64_t *)(v3 + 56) = 0;
    *(int64_t *)v3 = (int64_t)&g14;
    *(int64_t *)(v3 + 64) = 0;
    *(int64_t *)(v3 + 72) = 0;
    *(char *)(v3 + 328) = 0;
    function_50b2b0(v3, a2);
    function_566890(a2, v3, v1);
    return *v2;
}

// Address range: 0x54e240 - 0x54e306
int64_t function_54e240(int64_t result, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x54e243
    int64_t v2 = *v1; // 0x54e243
    if (v2 == result) {
        // 0x54e2ff
        return result;
    }
    int64_t v3 = v2 - result >> 1;
    uint16_t v4 = *(int16_t *)result; // 0x54e2d4
    int64_t v5 = v4; // 0x54e2d4
    int64_t v6 = v5 + 0xffff2800; // 0x54e2d7
    int64_t v7; // 0x54e240
    int64_t v8; // 0x54e240
    int64_t v9; // 0x54e240
    int64_t v10; // 0x54e283
    int64_t v11; // 0x54e287
    int64_t v12; // 0x54e29e
    if ((int32_t)v6 > (int32_t)&g11) {
        // 0x54e2e5
        v8 = v3;
        v9 = v5;
        v7 = 1;
        if (v5 > a3 || (int32_t)v4 - 0xdc00 <= (int32_t)&g11) {
            // break -> 0x54e2ff
            break;
        }
    } else {
        // 0x54e270
        if ((int32_t)a4 == 1) {
            // break -> 0x54e2ff
            break;
        }
        // 0x54e279
        if (v3 < 2) {
            // break -> 0x54e2ff
            break;
        }
        // 0x54e283
        v10 = (int64_t)*(int16_t *)(result + 2);
        v11 = v10 + 0xffff2400;
        if ((int32_t)v11 > (int32_t)&g11) {
            // break -> 0x54e2ff
            break;
        }
        // 0x54e295
        v12 = 1024 * v5 + 0xfca02400 + v10 & 0xffffffff;
        v8 = v11 & 0xffffffff;
        v9 = v12;
        v7 = 2;
        if (v12 > a3) {
            // break -> 0x54e2ff
            break;
        }
    }
    int64_t v13 = function_54df80(a2, v9, v8, v6 & 0xffffffff, v7); // 0x54e2af
    int64_t result2 = v13; // 0x54e2b6
    while ((char)v13 != 0) {
        int64_t v14 = *v1; // 0x54e2bb
        int64_t v15 = 2 * v7 + a2; // 0x54e2bf
        *(int64_t *)result = v15;
        result2 = v14;
        if (v14 == v15) {
            // break -> 0x54e2ff
            break;
        }
        int64_t v16 = v15;
        v3 = v14 - v15 >> 1;
        v4 = *(int16_t *)v16;
        v5 = v4;
        v6 = v5 + 0xffff2800;
        if ((int32_t)v6 > (int32_t)&g11) {
            // 0x54e2e5
            v8 = v3;
            v9 = v5;
            v7 = 1;
            result2 = 2;
            if (v5 > a3 || (int32_t)v4 - 0xdc00 <= (int32_t)&g11) {
                // break -> 0x54e2ff
                break;
            }
        } else {
            // 0x54e270
            result2 = 2;
            if ((int32_t)a4 == 1) {
                // break -> 0x54e2ff
                break;
            }
            // 0x54e279
            result2 = v16;
            if (v3 < 2) {
                // break -> 0x54e2ff
                break;
            }
            // 0x54e283
            v10 = (int64_t)*(int16_t *)(v16 + 2);
            v11 = v10 + 0xffff2400;
            result2 = 2;
            if ((int32_t)v11 > (int32_t)&g11) {
                // break -> 0x54e2ff
                break;
            }
            // 0x54e295
            v12 = 1024 * v5 + 0xfca02400 + v10 & 0xffffffff;
            v8 = v11 & 0xffffffff;
            v9 = v12;
            v7 = 2;
            result2 = 2;
            if (v12 > a3) {
                // break -> 0x54e2ff
                break;
            }
        }
        // 0x54e2ac
        v13 = function_54df80(a2, v9, v8, v6 & 0xffffffff, v7);
        result2 = v13;
    }
    // 0x54e2ff
    return result2;
}

// Address range: 0x558300 - 0x5583c7
// From class:    std::__numpunct_cache<char>
// Type:          constructor
int64_t function_558300(int64_t a1, int64_t a2) {
    int64_t v1 = function_566390(&g19); // 0x558314
    int64_t * v2 = (int64_t *)(*(int64_t *)(a2 + 24) + 8 * v1); // 0x558328
    int64_t result = *v2; // 0x558328
    if (result != 0) {
        // 0x558331
        return result;
    }
    int64_t v3 = function_4efd30(144); // 0x558345
    *(int32_t *)(v3 + 8) = 0;
    *(int64_t *)(v3 + 16) = 0;
    *(int64_t *)(v3 + 24) = 0;
    *(char *)(v3 + 32) = 0;
    *(int64_t *)(v3 + 40) = 0;
    *(int64_t *)(v3 + 48) = 0;
    *(int64_t *)(v3 + 56) = 0;
    *(int64_t *)v3 = (int64_t)&g16;
    *(int64_t *)(v3 + 64) = 0;
    *(int16_t *)(v3 + 72) = (int16_t)((int32_t)&g16 ^ (int32_t)&g16);
    *(char *)(v3 + 136) = 0;
    function_555500(v3, a2);
    function_566890(a2, v3, v1);
    return *v2;
}

// Address range: 0x5630c0 - 0x563187
// From class:    std::ctype<char>
// Type:          constructor
int64_t function_5630c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5630c0
    *(int32_t *)(a1 + 8) = (int32_t)(bool)(a4 != 0);
    *(int64_t *)a1 = (int64_t)&g15;
    int64_t v1 = function_565f30(); // 0x5630e6
    *(int64_t *)(a1 + 16) = v1;
    *(char *)(a1 + 24) = (char)((int64_t)(a2 != 0) & a3);
    *(int64_t *)(a1 + 32) = *(int64_t *)(v1 + 120);
    *(int64_t *)(a1 + 40) = *(int64_t *)(v1 + 112);
    int64_t v2 = a2; // 0x56310e
    if (a2 == 0) {
        // 0x563110
        v2 = *(int64_t *)(v1 + 104);
    }
    // 0x563114
    *(int64_t *)(a1 + 48) = v2;
    *(char *)(a1 + 56) = 0;
    int64_t v3 = a1 + 65 & -8; // 0x56312b
    *(char *)(a1 + (int64_t)&g6) = 0;
    *(int64_t *)(a1 + 57) = 0;
    *(int64_t *)(a1 + 305) = 0;
    int64_t v4 = a1 + 313;
    __asm_rep_stosq_memset((char *)v3, 0, (v4 - v3) / 8 % 0x20000000);
    *(int64_t *)v4 = 0;
    *(int64_t *)(a1 + (int64_t)&g5) = 0;
    int64_t v5 = a1 + 321 & -8; // 0x563170
    __asm_rep_stosq_memset((char *)v5, 0, (a1 + (int64_t)(int32_t)&g6 - v5) / 8 % 0x20000000);
    return 0;
}
