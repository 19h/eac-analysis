/*
 * Targeted RetDec C for native executable gap queue batch 30.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x54f0e0-0x54f1b4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x24f44-0x25017 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51c60-0x51d33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48e14d-0x48e220 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b7730-0x4b7803 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b7cd0-0x4b7da3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52e467-0x52e53a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b5940-0x4b5a12 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e706-0x4e7d7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56188-0x56259 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bc0e4-0x3bc1b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0ac0-0x4b0b91 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c8fa0-0x4c9071 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27fbe-0x2808e rank=- name=- kind=- bytes=- uncovered=-
 *   0x570190-0x570260 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b1220-0x4b12ef rank=- name=- kind=- bytes=- uncovered=-
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
int vswprintf(int32_t *wcs, size_t maxlen, const int32_t *format, int64_t ap);
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

int64_t function_24f44();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_254fe();
int64_t function_25534();
int64_t function_25856();
int64_t function_2588a();
int64_t function_2601b();
int64_t function_260ec();
int64_t function_260f8();
int64_t function_27a38();
int64_t function_27df1();
int64_t function_27fbe();
int64_t function_29c3a();
int64_t function_35ef6();
int64_t function_3bc0e4();
int64_t function_48d2d2();
int64_t function_48e14d();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b08f0();
int64_t function_4b0ac0();
int64_t function_4b0d80();
int64_t function_4b0fc0();
int64_t function_4b1080();
int64_t function_4b1220();
int64_t function_4b1590();
int64_t function_4b2d10();
int64_t function_4b5940();
int64_t function_4b7490();
int64_t function_4b7730();
int64_t function_4b7810();
int64_t function_4b7cd0();
int64_t function_4c8fa0();
int64_t function_4d1b30();
int64_t function_4e706();
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4f15a0();
int64_t function_4f3da();
int64_t function_5045a0();
int64_t function_504ac0();
int64_t function_51c60();
int64_t function_52e10();
int64_t function_52e467();
int64_t function_542470();
int64_t function_54d830();
int64_t function_54f0e0();
int64_t function_56188();
int64_t function_56b9f0();
int64_t function_570190();
int64_t function_72994();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_c823b();

// Address range: 0x24f44 - 0x25017
int64_t function_24f44(int64_t a1) {
    // 0x24f44
    function_72994(a1 + 304);
    int64_t v1 = *(int64_t *)(a1 + 288); // 0x24f57
    int64_t * v2 = (int64_t *)(a1 + 280); // 0x24f5e
    int64_t v3 = *v2; // 0x24f5e
    int64_t v4 = v1; // 0x24f68
    if (v1 != v3) {
        int64_t v5 = v3 + 64; // 0x24f6d
        function_254fe(v3);
        while (v1 != v5) {
            int64_t v6 = v5;
            v5 = v6 + 64;
            function_254fe(v6);
        }
        // 0x24f65
        v4 = *v2;
    }
    // 0x24f78
    if (v4 != 0) {
        // 0x24f84
        function_4eeb50(v4);
    }
    // 0x24f89
    function_25534(a1 + 216, *(int64_t *)(a1 + 232));
    int64_t * v7 = (int64_t *)(a1 + 176); // 0x24f9c
    int64_t v8 = *v7; // 0x24f9c
    if (v8 != 0) {
        int64_t v9 = *(int64_t *)v8; // 0x24fac
        function_254fe(v8 + 16);
        function_4eeb50(v8);
        while (v9 != 0) {
            int64_t v10 = v9;
            v9 = *(int64_t *)v10;
            function_254fe(v10 + 16);
            function_4eeb50(v10);
        }
    }
    int64_t * v11 = (int64_t *)(a1 + 160); // 0x24fc9
    __asm_rep_stosb_memset((char *)*v11, 0, 8 * *(int64_t *)(a1 + 168));
    *(int64_t *)(a1 + 184) = 0;
    *v7 = 0;
    int64_t v12 = *v11; // 0x24ff9
    if (v12 != a1 + 208) {
        // 0x25005
        function_4eeb50(v12);
    }
    // 0x2500a
    return function_254fe(a1 + 56);
}

// Address range: 0x27fbe - 0x2808e
int64_t function_27fbe(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x27fd8
    int64_t v2 = *v1; // 0x27fd8
    int64_t v3 = v2; // 0x27fd8
    int64_t v4 = a2 - a1; // 0x27fdc
    int64_t * v5 = (int64_t *)(a1 + 16); // 0x27fdf
    char v6 = v2;
    if (v2 == *v5) {
        int64_t v7 = function_25856(); // 0x2802a
        int64_t v8 = function_260f8(v7); // 0x28035
        *(char *)(v8 + v4) = v6;
        int64_t v9 = function_2601b(a2, *v1, function_2601b(v7, a2, v8) + 1); // 0x2805e
        function_260ec(a2);
        *(int64_t *)a1 = v8;
        *v1 = v9;
        *v5 = v8 + v7;
        // 0x2807c
        return a2 + v4;
    }
    int64_t v10; // 0x27fbe
    if (v2 != a2) {
        // 0x27ff8
        *(char *)v2 = *(char *)(v2 - 1);
        int64_t v11 = *v1; // 0x27ffd
        *v1 = v11 + 1;
        function_27df1(a2, v11 - 1, v11);
        *(char *)a2 = *(char *)&v3;
        v10 = a2;
    } else {
        // 0x27fea
        *(char *)v2 = v6;
        *v1 = *v1 + 1;
        v10 = a1;
    }
    // 0x2807c
    return v10 + v4;
}

// Address range: 0x4e706 - 0x4e7d7
int64_t function_4e706(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4e721
    function_729b6();
    int64_t v2 = function_4f3da(a2, 0, 0); // 0x4e73d
    int64_t v3 = *(int64_t *)(a1 + 232); // 0x4e742
    int64_t * v4 = (int64_t *)(a2 + 160); // 0x4e749
    int64_t v5 = v2 + 18; // 0x4e750
    int64_t * v6 = (int64_t *)(a2 + 168);
    int64_t v7; // 0x4e706
    if (v3 != *v4) {
        goto lab_0x4e762;
    } else {
        int64_t v8 = *v6; // 0x4e756
        if (v8 != 0) {
            int64_t v9 = *(int64_t *)(a1 + 40) + v8; // 0x4e7a3
            __asm_rep_movsd_memcpy((char *)v9, (char *)v5, 27);
            bool v10; // 0x4e706
            v7 = v9 + (v10 ? -108 : 108);
            goto lab_0x4e7b1;
        } else {
            goto lab_0x4e762;
        }
    }
  lab_0x4e762:
    // 0x4e762
    *v4 = v3;
    int64_t * v11 = (int64_t *)(a1 + 48); // 0x4e769
    int64_t v12 = a1 + 40; // 0x4e771
    *v6 = *v11 - *(int64_t *)v12;
    function_2588a(v12, *v11, v5, v2 + 126);
    int16_t * v13 = (int16_t *)(a1 + 12); // 0x4e793
    *v13 = *v13 + 1;
    goto lab_0x4e7b1;
  lab_0x4e7b1:;
    // 0x4e7b1
    int64_t v14; // bp-40, 0x4e706
    function_729ce(&v14, v7);
    int64_t result = 0; // 0x4e7c7
    if (v1 != __readfsqword(40)) {
        // 0x4e7c9
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x4e7ce
    return result;
}

// Address range: 0x51c60 - 0x51d33
int64_t function_51c60(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x51c6c
    if (*(int64_t *)(a2 - 24) == 0) {
        goto lab_0x51d11;
    } else {
        int64_t v2 = a1 + 152; // 0x51c8a
        int64_t v3 = *(int64_t *)(a1 + 160);
        if (v3 == 0) {
            goto lab_0x51ce2;
        } else {
            int64_t v4 = v3;
            int64_t v5; // 0x51c60
            int64_t v6; // 0x51c60
            while ((int32_t)function_27a38(v4 + 32, a2) < 0) {
                // 0x51cbf
                v6 = *(int64_t *)(v4 + 24);
                v5 = v2;
                if (v6 == 0) {
                    // break (via goto) -> 0x51cc5
                    goto lab_0x51cc5;
                }
                v4 = v6;
            }
            int64_t v7 = *(int64_t *)(v4 + 16);
            v5 = v4;
            while (v7 != 0) {
                int64_t v8 = v4;
                v4 = v7;
                while ((int32_t)function_27a38(v4 + 32, a2) < 0) {
                    // 0x51cbf
                    v6 = *(int64_t *)(v4 + 24);
                    v5 = v8;
                    if (v6 == 0) {
                        // break (via goto) -> 0x51cc5
                        goto lab_0x51cc5;
                    }
                    v4 = v6;
                }
                // 0x51cb6
                v7 = *(int64_t *)(v4 + 16);
                v5 = v4;
            }
          lab_0x51cc5:
            // 0x51cc5
            if (v2 == v5) {
                goto lab_0x51ce2;
            } else {
                // 0x51cca
                if ((int32_t)function_27a38(a2, v5 + 32) < 0) {
                    goto lab_0x51ce2;
                } else {
                    int32_t * v9 = (int32_t *)(v5 + 40); // 0x51cdb
                    *v9 = *v9 + 1;
                    goto lab_0x51d11;
                }
            }
        }
    }
  lab_0x51d11:;
    int64_t result = 0; // 0x51d1f
    if (v1 != __readfsqword(40)) {
        // 0x51d21
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x51d26
    return result;
  lab_0x51ce2:;
    // 0x51ce2
    int64_t v10; // bp-64, 0x51c60
    function_2509a(&v10, a2);
    function_52e10(a1 + 144, &v10);
    function_2508e(&v10);
    goto lab_0x51d11;
}

// Address range: 0x56188 - 0x561d2
int64_t function_56188(int64_t a1) {
    // 0x56188
    if ((char)function_4f15a0(a1 + 120) != 0) {
        // 0x56199
        function_5045a0(a1);
    }
    int64_t * v1 = (int64_t *)(a1 + (int64_t)&g2); // 0x561a1
    int64_t v2 = *v1; // 0x561a1
    if (v2 != 0) {
        // 0x561ad
        function_4eeb40(v2);
        *v1 = 0;
    }
    // 0x561bd
    function_29c3a(a1 + (int64_t)&g1);
    return function_504ac0(a1);
}

// Address range: 0x3bc0e4 - 0x3bc1b5
int64_t function_3bc0e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x3bc0e4
    int64_t v1; // 0x3bc0e4
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_c823b(a1);
}

// Address range: 0x48e14d - 0x48e220
int64_t function_48e14d(int64_t a1, int64_t src) {
    int64_t v1 = __readfsqword(40); // 0x48e15c
    int64_t v2 = *(int64_t *)(src - 24); // 0x48e174
    int64_t v3; // bp-56, 0x48e14d
    if (v2 != 0) {
        uint64_t n = v2 + 1; // 0x48e18e
        int64_t dest = function_4eec00(n < 0x1fffffffffffffff ? 4 * n : -1); // 0x48e1af
        mbstowcs((int32_t *)dest, (char *)src, (int32_t)n);
        int64_t v4; // bp-57, 0x48e14d
        function_35ef6((int64_t)&v3, (int64_t *)dest, &v4);
        function_4eeb40(dest);
        *(int64_t *)a1 = v3;
        v3 = (int64_t)&g5;
        function_48d2d2(&g4);
    } else {
        // 0x48e17d
        function_35ef6(a1, &g3, &v3);
    }
    int64_t result = a1; // 0x48e20c
    if (v1 != __readfsqword(40)) {
        // 0x48e20e
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x48e213
    return result;
}

// Address range: 0x4b0ac0 - 0x4b0b89
int64_t function_4b0ac0(int64_t a1, int64_t a2) {
    int64_t result; // 0x4b0ac0
    if (a1 == a2) {
        // 0x4b0b2a
        return result;
    }
    int64_t * v1 = (int64_t *)(a2 + 16);
    int64_t v2 = *v1; // 0x4b0ad9
    if (v2 == 0) {
        // 0x4b0b2a
        return result;
    }
    int64_t v3 = *(int64_t *)(a2 + 8); // 0x4b0ae6
    int64_t v4 = v3 - 1; // 0x4b0aed
    int64_t v5 = 1; // 0x4b0af1
    if (v4 != 0) {
        // 0x4b0af3
        v5 = v3;
        if (*(int64_t *)(8 * v4 + v2) == 0) {
            int64_t v6 = v4;
            int64_t v7 = v6 - 1; // 0x4b0b07
            v5 = 1;
            while (v7 != 0) {
                // 0x4b0b00
                v5 = v6;
                if (*(int64_t *)(8 * v7 + v2) != 0) {
                    // break -> 0x4b0b12
                    break;
                }
                v6 = v7;
                v7 = v6 - 1;
                v5 = 1;
            }
        }
    }
    // 0x4b0b12
    *(int32_t *)a1 = (int32_t)a2;
    int64_t v8 = function_4b08f0(a1, v5); // 0x4b0b1e
    int64_t result2 = v8 & 0xffffffff; // 0x4b0b25
    if ((int32_t)v8 != 0) {
        // 0x4b0b2a
        return result2;
    }
    int64_t * v9 = (int64_t *)(a1 + 16); // 0x4b0b55
    memset((void *)(int64_t)((int64_t *)*v9), 0, 8 * (int32_t)*(int64_t *)(a1 + 8));
    memcpy((int64_t *)*v9, (int64_t *)*v1, 8 * (int32_t)v5);
    return result2;
}

// Address range: 0x4b1220 - 0x4b12ef
int64_t function_4b1220(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4b1220
    uint64_t v2 = *v1; // 0x4b1220
    uint64_t v3 = a2 / 64; // 0x4b122a
    if (v3 > v2) {
        // 0x4b12e5
        return function_4b0d80();
    }
    uint64_t v4 = a2 % 64; // 0x4b1227
    if (v3 == v2) {
        if (v4 != 0) {
            // 0x4b12e5
            return function_4b0d80();
        }
        // 0x4b12d4
        int64_t result; // 0x4b1220
        return result;
    }
    int64_t v5 = v2; // 0x4b1240
    if (a2 >= 64) {
        int64_t * v6 = (int64_t *)(a1 + 16); // 0x4b1242
        int64_t v7 = 0; // 0x4b124c
        int64_t v8 = 8 * v7 + *v6;
        *(int64_t *)v8 = *(int64_t *)(v8 + 8 * v3);
        uint64_t v9 = *v1; // 0x4b1258
        int64_t v10 = v7 + 1; // 0x4b125c
        v7 = v10;
        while (v9 - v3 > v10) {
            // 0x4b1250
            v8 = 8 * v7 + *v6;
            *(int64_t *)v8 = *(int64_t *)(v8 + 8 * v3);
            v9 = *v1;
            v10 = v7 + 1;
            v7 = v10;
        }
        // 0x4b126b
        v5 = v9;
        if (v10 < v9) {
            int64_t v11 = v10; // 0x4b1274
            *(int64_t *)(8 * v11 + *v6) = 0;
            v11++;
            uint64_t v12 = *v1; // 0x4b1284
            v5 = v12;
            while (v12 > v11) {
                // 0x4b1278
                *(int64_t *)(8 * v11 + *v6) = 0;
                v11++;
                v12 = *v1;
                v5 = v12;
            }
        }
    }
    // 0x4b128a
    if (v4 == 0 || v5 == 0) {
        // 0x4b12d4
        return 0;
    }
    int64_t v13 = v5; // 0x4b12a8
    int64_t * v14 = (int64_t *)(*(int64_t *)(a1 + 16) - 8 + 8 * v13); // 0x4b12b0
    uint64_t v15 = *v14; // 0x4b12b0
    *v14 = v15 >> v4;
    v13--;
    int64_t v16 = v15 << -a2 % 64; // 0x4b12d2
    while (v13 != 0) {
        // 0x4b12b0
        v14 = (int64_t *)(*(int64_t *)(a1 + 16) - 8 + 8 * v13);
        v15 = *v14;
        *v14 = v15 >> v4 | v16;
        v13--;
        v16 = v15 << -a2 % 64;
    }
    // 0x4b12d4
    return 0;
}

// Address range: 0x4b5940 - 0x4b5a11
int64_t function_4b5940(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x4b595c
    if (v1 == 6) {
        // 0x4b59d8
        *(int64_t *)a9 = a7;
        return 6;
    }
    if (v1 != 8) {
        // 0x4b59c0
        return 0xffff9f80;
    }
    // 0x4b5978
    *(int64_t *)a9 = a7;
    int64_t v2; // 0x4b5940
    return function_4d1b30(*(int64_t *)(a1 + 80), a7, a2, a3, a4, a5, v2, v2, v2);
}

// Address range: 0x4b7730 - 0x4b7803
int64_t function_4b7730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4b7730
    if (a3 % 8 != 0) {
        // 0x4b77a0
        return 0xffffffce;
    }
    if ((int32_t)a2 != 1) {
        // 0x4b775b
        if (a3 == 0) {
            // 0x4b77a0
            return 0;
        }
        int64_t v1 = a6; // 0x4b7730
        int64_t v2 = a3; // 0x4b7794
        int64_t v3 = a5; // 0x4b7730
        function_4b7490(a1, v3, v1);
        char * v4; // 0x4b777e
        for (int64_t i = 0; i < 8; i++) {
            // 0x4b7778
            v4 = (char *)(i + v1);
            *v4 = *v4 ^ *(char *)(i + a4);
        }
        // 0x4b778c
        v2 -= 8;
        *(int64_t *)a4 = *(int64_t *)v3;
        v1 += 8;
        v3 += 8;
        while (v2 != 0) {
            // 0x4b7760
            function_4b7490(a1, v3, v1);
            for (int64_t i = 0; i < 8; i++) {
                // 0x4b7778
                v4 = (char *)(i + v1);
                *v4 = *v4 ^ *(char *)(i + a4);
            }
            // 0x4b778c
            v2 -= 8;
            *(int64_t *)a4 = *(int64_t *)v3;
            v1 += 8;
            v3 += 8;
        }
        // 0x4b77a0
        return 0;
    }
    // 0x4b77af
    if (a3 == 0) {
        // 0x4b77a0
        return 0;
    }
    int64_t v5 = a3; // 0x4b77f0
    int64_t v6 = a5; // 0x4b7730
    int64_t v7 = a6;
    int64_t v8 = 0;
    char v9 = *(char *)(v8 + v6); // 0x4b77c6
    *(char *)(v8 + v7) = v9 ^ *(char *)(v8 + a4);
    int64_t v10 = v8 + 1; // 0x4b77cd
    while (v10 != 8) {
        // 0x4b77c0
        v8 = v10;
        v9 = *(char *)(v8 + v6);
        *(char *)(v8 + v7) = v9 ^ *(char *)(v8 + a4);
        v10 = v8 + 1;
    }
    // 0x4b77d7
    function_4b7490(a1, v7, v7);
    v5 -= 8;
    *(int64_t *)a4 = *(int64_t *)v7;
    int64_t v11 = v7 + 8; // 0x4b77f8
    v6 += 8;
    while (v5 != 0) {
        // 0x4b77b8
        v7 = v11;
        v8 = 0;
        v9 = *(char *)(v8 + v6);
        *(char *)(v8 + v7) = v9 ^ *(char *)(v8 + a4);
        v10 = v8 + 1;
        while (v10 != 8) {
            // 0x4b77c0
            v8 = v10;
            v9 = *(char *)(v8 + v6);
            *(char *)(v8 + v7) = v9 ^ *(char *)(v8 + a4);
            v10 = v8 + 1;
        }
        // 0x4b77d7
        function_4b7490(a1, v7, v7);
        v5 -= 8;
        *(int64_t *)a4 = *(int64_t *)v7;
        v11 = v7 + 8;
        v6 += 8;
    }
    // 0x4b77a0
    return 0;
}

// Address range: 0x4b7cd0 - 0x4b7da3
int64_t function_4b7cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4b7cd0
    if (a3 % 8 != 0) {
        // 0x4b7d40
        return 0xffffffce;
    }
    if ((int32_t)a2 != 1) {
        // 0x4b7cfb
        if (a3 == 0) {
            // 0x4b7d40
            return 0;
        }
        int64_t v1 = a6; // 0x4b7cd0
        int64_t v2 = a3; // 0x4b7d34
        int64_t v3 = a5; // 0x4b7cd0
        function_4b7810(a1, v3, v1);
        char * v4; // 0x4b7d1e
        for (int64_t i = 0; i < 8; i++) {
            // 0x4b7d18
            v4 = (char *)(i + v1);
            *v4 = *v4 ^ *(char *)(i + a4);
        }
        // 0x4b7d2c
        v2 -= 8;
        *(int64_t *)a4 = *(int64_t *)v3;
        v1 += 8;
        v3 += 8;
        while (v2 != 0) {
            // 0x4b7d00
            function_4b7810(a1, v3, v1);
            for (int64_t i = 0; i < 8; i++) {
                // 0x4b7d18
                v4 = (char *)(i + v1);
                *v4 = *v4 ^ *(char *)(i + a4);
            }
            // 0x4b7d2c
            v2 -= 8;
            *(int64_t *)a4 = *(int64_t *)v3;
            v1 += 8;
            v3 += 8;
        }
        // 0x4b7d40
        return 0;
    }
    // 0x4b7d4f
    if (a3 == 0) {
        // 0x4b7d40
        return 0;
    }
    int64_t v5 = a3; // 0x4b7d90
    int64_t v6 = a5; // 0x4b7cd0
    int64_t v7 = a6;
    int64_t v8 = 0;
    char v9 = *(char *)(v8 + v6); // 0x4b7d66
    *(char *)(v8 + v7) = v9 ^ *(char *)(v8 + a4);
    int64_t v10 = v8 + 1; // 0x4b7d6d
    while (v10 != 8) {
        // 0x4b7d60
        v8 = v10;
        v9 = *(char *)(v8 + v6);
        *(char *)(v8 + v7) = v9 ^ *(char *)(v8 + a4);
        v10 = v8 + 1;
    }
    // 0x4b7d77
    function_4b7810(a1, v7, v7);
    v5 -= 8;
    *(int64_t *)a4 = *(int64_t *)v7;
    int64_t v11 = v7 + 8; // 0x4b7d98
    v6 += 8;
    while (v5 != 0) {
        // 0x4b7d58
        v7 = v11;
        v8 = 0;
        v9 = *(char *)(v8 + v6);
        *(char *)(v8 + v7) = v9 ^ *(char *)(v8 + a4);
        v10 = v8 + 1;
        while (v10 != 8) {
            // 0x4b7d60
            v8 = v10;
            v9 = *(char *)(v8 + v6);
            *(char *)(v8 + v7) = v9 ^ *(char *)(v8 + a4);
            v10 = v8 + 1;
        }
        // 0x4b7d77
        function_4b7810(a1, v7, v7);
        v5 -= 8;
        *(int64_t *)a4 = *(int64_t *)v7;
        v11 = v7 + 8;
        v6 += 8;
    }
    // 0x4b7d40
    return 0;
}

// Address range: 0x4c8fa0 - 0x4c906f
int64_t function_4c8fa0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4c8fa0
    int64_t v1; // bp-72, 0x4c8fa0
    function_4b0870(&v1);
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x4c8fc9
    int64_t v3 = function_4b0fc0(&v1, a2, *v2); // 0x4c8fd3
    if ((int32_t)v3 != 0) {
        // 0x4c8fe2
        function_4b0890(&v1);
        // 0x4c8fea
        return v3 + 0xffffbd80 & 0xffffffff & 0xffffffff;
    }
    int64_t v4 = a1 + 16; // 0x4c9008
    if ((int32_t)function_4b1590(&v1, v4) >= 0) {
        // 0x4c8fe2
        function_4b0890(&v1);
        // 0x4c8fea
        return 0xffffbd7c;
    }
    int64_t v5 = function_4b2d10(&v1, &v1, a1 + 40, v4, a1 + 208); // 0x4c9038
    if ((int32_t)v5 != 0) {
        // 0x4c8fe2
        function_4b0890(&v1);
        // 0x4c8fea
        return v5 + 0xffffbd80 & 0xffffffff & 0xffffffff;
    }
    int64_t v6 = function_4b1080(&v1, a3, *v2); // 0x4c9052
    int64_t result = function_4b0890(&v1); // 0x4c905c
    if ((int32_t)v6 != 0) {
        // 0x4c9069
        return result;
    }
    // 0x4c8fea
    return 0;
}

// Address range: 0x52e467 - 0x52e538
int64_t function_52e467(void) {
    // 0x52e467
    int64_t result; // 0x52e467
    int64_t wstr = result;
    int64_t * wstr2 = (int64_t *)(result - 136); // 0x52e4be
    int64_t v1 = function_56b9f0(result, wstr, *wstr2); // 0x52e4cb
    int64_t v2 = v1 & 0xffffffff; // 0x52e4d2
    int64_t result2 = v2; // 0x52e4d5
    if ((int32_t)v1 == 0) {
        int64_t v3 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr; // 0x52e47f
        int64_t v4 = 4 * (int64_t)wcslen((int32_t *)*wstr2) + *wstr2; // 0x52e492
        bool v5 = result == v4; // 0x52e496
        int64_t v6 = v4; // 0x52e496
        int64_t v7 = v3; // 0x52e496
        int64_t v8 = v2; // 0x52e496
        bool v9 = result == v4; // 0x52e496
        if (result != v3) {
            while (!v5) {
                int64_t v10 = v6 + 4; // 0x52e4af
                int64_t wstr3 = v7 + 4; // 0x52e4b3
                *wstr2 = v10;
                int64_t v11 = function_56b9f0(result, wstr3, v10); // 0x52e4cb
                int64_t v12 = v11 & 0xffffffff; // 0x52e4d2
                result2 = v12;
                if ((int32_t)v11 != 0) {
                    goto lab_0x52e4d7;
                }
                int64_t v13 = 4 * (int64_t)wcslen((int32_t *)wstr3) + wstr3; // 0x52e47f
                int64_t v14 = 4 * (int64_t)wcslen((int32_t *)*wstr2) + *wstr2; // 0x52e492
                v5 = result == v14;
                v6 = v14;
                v7 = v13;
                v8 = v12;
                v9 = result == v14;
                if (result == v13) {
                    goto lab_0x52e470;
                }
            }
            // 0x52e540
            return result;
        }
      lab_0x52e470:
        // 0x52e470
        result2 = v9 ? v8 : 0xffffffff;
    }
  lab_0x52e4d7:;
    int64_t v15 = *(int64_t *)(result - 96); // 0x52e4de
    if (v15 != *(int64_t *)(result - 152) + 16) {
        // 0x52e4eb
        function_4eeb50(v15);
    }
    int64_t v16 = *(int64_t *)(result - 128); // 0x52e4f7
    if (v16 != *(int64_t *)(result - 144) + 16) {
        // 0x52e504
        function_4eeb50(v16);
    }
    // 0x52e509
    __readfsqword(40);
    return result2;
}

// Address range: 0x54f0e0 - 0x54f1b3
int64_t function_54f0e0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x54f0e0
    __readfsqword(40);
    int64_t result = a1; // bp-88, 0x54f108
    if ((a5 & 4) != 0) {
        // 0x54f1b0
        return 0;
    }
    int64_t v1 = a4 & 0xffffffff; // 0x54f0ed
    int64_t v2 = 1; // 0x54f11b
    if (a3 < 2) {
      lab_0x54f188:
        // 0x54f188
        if (v2 == a3) {
            int64_t v3 = (int32_t)a4 >= (int32_t)&g6 ? (int64_t)(int32_t)&g6 : v1; // 0x54f1a0
            function_54d830(&result, v3);
        }
        // 0x54f156
        __readfsqword(40);
        return result;
    }
    int64_t v4 = 1; // 0x54f13d
    int64_t v5 = 0; // 0x54f0e0
    uint32_t v6 = (int32_t)function_54d830(&result, v1); // 0x54f151
    while ((int32_t)a4 >= v6) {
        int64_t v7 = v6 > (int32_t)&g6 ? v4 : v5; // 0x54f135
        v4 = v7 + 2;
        v5 = v7 + 1;
        v2 = v4;
        if (v4 >= a3) {
            goto lab_0x54f188;
        }
        v6 = (int32_t)function_54d830(&result, v1);
    }
    // 0x54f156
    __readfsqword(40);
    return result;
}

// Address range: 0x570190 - 0x570260
int64_t function_570190(int64_t a1, int64_t a2) {
    int64_t v1 = a2 - a1; // 0x570197
    __readfsqword(40);
    int128_t v2 = __asm_movdqa(eac_retdec_i128(0x6563617073206867ull, 0x756f6e6520746f6eull)); // 0x5701d0
    int128_t v3 = __asm_movdqa(eac_retdec_i128(0x617078652074616dull, 0x726f6620726f6620ull)); // 0x5701dc
    int128_t v4 = __asm_movdqa(eac_retdec_i128(0x757320657361656cull, 0x5028206e6f69736eull)); // 0x5701ec
    int128_t v5 = __asm_movdqa(eac_retdec_i128(0x657220677562206cull, 0x6c75662074696d62ull)); // 0x5701f4
    int64_t v6; // bp-152, 0x570190
    int64_t v7 = 15 - (v1 + 135 & -16) + (int64_t)&v6 & -16; // 0x5701fc
    int64_t v8 = v7 + 104;
    *(int64_t *)(v7 + 96) = 0x202020200a3a292f;
    int128_t v9 = __asm_movdqa(eac_retdec_i128(0x2f2f3a7370747468ull, 0x2074612074726f70ull)); // 0x57020b
    int128_t v10 = __asm_movdqa(eac_retdec_i128(0x736775622f67726full, 0x2e756e672e636367ull)); // 0x570213
    *(int128_t *)v7 = (int128_t)__asm_movaps(v2);
    *(int128_t *)(v7 + 16) = (int128_t)__asm_movaps(v3);
    *(int128_t *)(v7 + 32) = (int128_t)__asm_movaps(v4);
    *(int128_t *)(v7 + 48) = (int128_t)__asm_movaps(v5);
    *(int128_t *)(v7 + 64) = (int128_t)__asm_movaps(v9);
    *(int128_t *)(v7 + 80) = (int128_t)__asm_movaps(v10);
    v6 = __asm_movaps(v2);
    __asm_movaps(v3);
    __asm_movaps(v4);
    __asm_movaps(v5);
    __asm_movaps(v9);
    __asm_movaps(v10);
    memcpy((int64_t *)v8, (int64_t *)a1, (int32_t)v1);
    *(char *)(v8 + v1) = 0;
    return function_542470(v7);
}
