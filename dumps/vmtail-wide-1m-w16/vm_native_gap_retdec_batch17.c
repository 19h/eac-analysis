/*
 * Targeted RetDec C for native executable gap queue batch 17.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x715a1-0x716c8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c5fc0-0x4c60e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x621c2-0x622e7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ddb5d-0x3ddc80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2860-0x4d2983 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5efd2-0x5f0f4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5c4c0-0x5c5e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x696e0-0x69801 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5115a0-0x5116c1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5116e0-0x511801 rank=- name=- kind=- bytes=- uncovered=-
 *   0x538c20-0x538d41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x538d60-0x538e81 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a0c4-0x2a1e4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c28f0-0x4c2a10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c8320-0x4c8440 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cc7d0-0x4cc8f0 rank=- name=- kind=- bytes=- uncovered=-
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
int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcslen(const int32_t *s);
int wctob(int32_t wc);
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

int64_t function_2508e();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_255da();
int64_t function_29c3a();
int64_t function_2a05c();
int64_t function_2a0c4();
int64_t function_2a17c();
int64_t function_2a25c();
int64_t function_2b674();
int64_t function_3ddb5d();
int64_t function_48e347();
int64_t function_48eb2b();
int64_t function_4afe70();
int64_t function_4aff90();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4c1ea0();
int64_t function_4c28f0();
int64_t function_4c5fc0();
int64_t function_4c69e0();
int64_t function_4c8320();
int64_t function_4cb560();
int64_t function_4cc7d0();
int64_t function_4d23f0();
int64_t function_4d2860();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0a80();
int64_t function_4f0ae0();
int64_t function_4f0bc0();
int64_t function_50c440();
int64_t function_510590();
int64_t function_5115a0();
int64_t function_5116e0();
int64_t function_5378f0();
int64_t function_538c20();
int64_t function_538d60();
int64_t function_5b4f4();
int64_t function_5bff9();
int64_t function_5c136();
int64_t function_5c4c0();
int64_t function_5df38();
int64_t function_5eba0();
int64_t function_5efd2();
int64_t function_5f290();
int64_t function_61c46();
int64_t function_621c2();
int64_t function_63032();
int64_t function_69166();
int64_t function_696e0();
int64_t function_6a670();
int64_t function_7154a();
int64_t function_7157a();
int64_t function_715a1();
int64_t function_7293a();
int64_t function_caf2a();

// Address range: 0x2a0c4 - 0x2a17c
int64_t function_2a0c4(int64_t a1, int64_t result, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a3;
    if (a1 + 8 == result) {
        // 0x2a0dd
        if (*(int64_t *)(a1 + 40) == 0 || *(int32_t *)(*(int64_t *)(a1 + 32) + 32) >= v1) {
            // 0x2a15f
            return function_2a05c();
        }
        // 0x2a171
        return 0;
    }
    uint32_t v2 = *(int32_t *)(result + 32); // 0x2a0f4
    if (v2 > v1) {
        // 0x2a100
        if (*(int64_t *)(a1 + 24) == result) {
            // 0x2a171
            return result;
        }
        int64_t v3 = function_4f0ae0(result, a3); // 0x2a10c
        if (*(int32_t *)(v3 + 32) >= v1) {
            // 0x2a15f
            return function_2a05c();
        }
        // 0x2a171
        return *(int64_t *)(v3 + 24) != 0 ? result : 0;
    }
    // 0x2a128
    if (v2 >= v1) {
        // 0x2a171
        return result;
    }
    int64_t v4 = *(int64_t *)(a1 + 32); // 0x2a12a
    if (v4 == result) {
        // 0x2a171
        return 0;
    }
    int64_t result2 = function_4f0a80(result, a3, v4, 0); // 0x2a138
    if (*(int32_t *)(result2 + 32) <= v1) {
        // 0x2a15f
        return function_2a05c();
    }
    // 0x2a143
    if (*(int64_t *)(result + 24) != 0) {
        // 0x2a171
        return result2;
    }
    // 0x2a171
    return 0;
}

// Address range: 0x2a17c - 0x2a1e1
int64_t function_2a17c(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x2a180
    int64_t v2 = *(int64_t *)(a1 + 16);
    uint32_t v3 = (int32_t)a2;
    int64_t v4; // 0x2a1c1
    if (v2 == 0) {
        // 0x2a1b6
        v4 = function_4efd30(40);
        *(char *)(v4 + 36) = 0;
        *(int32_t *)(v4 + 32) = v3;
        return a2 & 0xffffffff;
    }
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
    if (v1 == v7) {
        // 0x2a1b6
        v4 = function_4efd30(40);
        *(char *)(v4 + 36) = 0;
        *(int32_t *)(v4 + 32) = v3;
        return a2 & 0xffffffff;
    }
    uint32_t result = *(int32_t *)(v7 + 32); // 0x2a1af
    if (result <= v3) {
        // 0x2a22a
        return result;
    }
    // 0x2a1b6
    v4 = function_4efd30(40);
    *(char *)(v4 + 36) = 0;
    *(int32_t *)(v4 + 32) = v3;
    return a2 & 0xffffffff;
}

// Address range: 0x5c4c0 - 0x5c5e1
int64_t function_5c4c0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x5c4cb
    int64_t v2 = *(int64_t *)(a1 + 16);
    int64_t v3 = a2; // 0x5c4e2
    if (v2 != 0) {
        int64_t v4 = v2;
        int64_t v5; // 0x5c4c0
        int64_t v6; // 0x5c4c0
        while ((char)function_5bff9(v4 + 32, a2) != 0) {
            // 0x5c4fd
            v5 = *(int64_t *)(v4 + 24);
            v6 = v1;
            if (v5 == 0) {
                // break (via goto) -> 0x5c503
                goto lab_0x5c503;
            }
            v4 = v5;
        }
        int64_t v7 = *(int64_t *)(v4 + 16);
        v6 = v4;
        while (v7 != 0) {
            int64_t v8 = v4;
            v4 = v7;
            while ((char)function_5bff9(v4 + 32, a2) != 0) {
                // 0x5c4fd
                v5 = *(int64_t *)(v4 + 24);
                v6 = v8;
                if (v5 == 0) {
                    // break (via goto) -> 0x5c503
                    goto lab_0x5c503;
                }
                v4 = v5;
            }
            // 0x5c4f4
            v7 = *(int64_t *)(v4 + 16);
            v6 = v4;
        }
      lab_0x5c503:
        // 0x5c503
        v3 = a2;
        if (v1 != v6) {
            int64_t v9 = v6 + 32; // 0x5c508
            int64_t v10 = function_5bff9(a2, v9); // 0x5c50f
            v3 = v9;
            if ((char)v10 == 0) {
                // 0x5c5ce
                return v6 + 40;
            }
        }
    }
    int64_t v11 = function_4efd30(88); // 0x5c524
    int64_t v12 = v11 + 32; // 0x5c52f
    int64_t v13 = v11 + 40; // 0x5c533
    *(int64_t *)v12 = function_5b4f4(v3 - 24);
    __asm_rep_stosd_memset((char *)v13, 0, 12);
    int64_t v14 = v11 + 48; // 0x5c557
    int64_t v15 = v11 + 64; // 0x5c55e
    *(int64_t *)v15 = v14;
    *(int64_t *)(v11 + 72) = v14;
    int64_t v16 = function_5c136(a1); // 0x5c566
    if (v12 == 0) {
        // 0x5c5af
        function_2a25c(v13, *(int64_t *)(v11 + 56));
        function_2508e(0);
        function_4eeb50(v11);
        // 0x5c5ce
        return v16 + 40;
    }
    bool v17 = v1 == v12 | v16 != 0;
    int64_t v18 = v17; // 0x5c583
    if (!v17) {
        // 0x5c585
        v18 = function_5bff9(v12, v15);
    }
    // 0x5c59b
    function_4f0bc0(v18 % 256, v11);
    int64_t * v19 = (int64_t *)(a1 + 40); // 0x5c5a9
    *v19 = *v19 + 1;
    // 0x5c5ce
    return v11 + 40;
}

// Address range: 0x5efd2 - 0x5f0f4
int64_t function_5efd2(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x5efe6
    int64_t v2; // bp-80, 0x5efd2
    function_5df38(&v2);
    int64_t v3 = 0; // 0x5f008
    if (*(int64_t *)(v2 - 24) != 0) {
        int64_t v4 = 1; // 0x5f018
        int64_t v5; // bp-72, 0x5efd2
        int64_t v6; // bp-81, 0x5efd2
        if ((a1 & 0xfffffffd) == 0) {
            // 0x5f01a
            function_255da(&v2);
            int64_t v7 = v2; // 0x5f027
            function_255da(&v2);
            function_5f290(&v5, v2, *(int64_t *)(v7 - 24) + v7, &v6);
            int64_t v8 = function_5eba0(0, &v5) % 256; // 0x5f05f
            v4 = v8;
            if (v5 != 0) {
                // 0x5f067
                function_4eeb50(v5);
                v4 = v8;
            }
        }
        // 0x5f06c
        v3 = v4;
        if ((int32_t)a1 < 3) {
            // 0x5f075
            function_255da(&v2);
            int64_t v9 = v2; // 0x5f082
            function_255da(&v2);
            function_5f290(&v5, v2, *(int64_t *)(v9 - 24) + v9, &v6);
            int64_t v10 = function_5eba0(1, &v5) & v4; // 0x5f0bd
            v3 = v10;
            if (v5 != 0) {
                // 0x5f0c4
                function_4eeb50(v5);
                v3 = v10;
            }
        }
    }
    int64_t result = function_2508e((int64_t)&v2) & -256 | v3 % 256; // 0x5f0e2
    if (v1 != __readfsqword(40)) {
        // 0x5f0e4
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x5f0e9
    return result;
}

// Address range: 0x621c2 - 0x622e7
int64_t function_621c2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x621c2
    *(char *)(a1 + 24) = (char)a2;
    *(int64_t *)a1 = (int64_t)&g6;
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x621de
    *v1 = (int64_t)&g1;
    *(int64_t *)(a1 + 16) = 0x101000;
    int64_t v2 = a1 + 56; // 0x621ee
    *(int64_t *)v2 = 0;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 72) = 0;
    *(char *)(a1 + 88) = 0;
    function_63032(a1 + 89);
    int64_t v3 = a1 + 208; // 0x6220f
    *(int64_t *)(a1 + 120) = 0;
    *(int64_t *)(a1 + 168) = 1;
    *(int64_t *)(a1 + 176) = 0;
    *(int64_t *)(a1 + 160) = v3;
    int64_t v4 = a1 + 224; // 0x62242
    *(int64_t *)(a1 + 184) = 0;
    *(int32_t *)(a1 + 192) = 0x3f800000;
    *(int64_t *)(a1 + 200) = 0;
    *(int64_t *)(a1 + 240) = v4;
    *(int64_t *)(a1 + 248) = v4;
    *(int64_t *)v3 = 0;
    *(int32_t *)v4 = 0;
    *(int64_t *)(a1 + 232) = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)(a1 + 280) = 0;
    *(int64_t *)(a1 + 288) = 0;
    *(int64_t *)(a1 + 296) = 0;
    function_7293a(a1 + 304);
    *(int64_t *)(a1 + 32) = *v1;
    function_2b674(v2, a3);
    return function_61c46(a1);
}

// Address range: 0x696e0 - 0x69801
int64_t function_696e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x696f6
    function_2509a();
    char * v2; // bp-56, 0x696e0
    if (*(int64_t *)(a2 - 24) != 0) {
        // 0x6972a
        function_255da((int64_t *)&v2);
        if (*v2 >= 97) {
            // 0x6973b
            function_255da((int64_t *)&v2);
            if (*v2 <= 122) {
                // 0x6974c
                function_255da((int64_t *)&v2);
                char * v3 = v2; // 0x69754
                *v3 = *v3 - 32;
            }
        }
        uint64_t v4 = function_6a670((int64_t *)&v2, 45, 0); // 0x69765
        if (v4 != -1) {
            // 0x69773
            if (*(int64_t *)((int64_t)v2 - 24) - 1 > v4) {
                int64_t v5 = v4 + 1;
                function_255da((int64_t *)&v2);
                if (*(char *)(v5 + (int64_t)v2) >= 97) {
                    // 0x6979a
                    function_255da((int64_t *)&v2);
                    if (*(char *)(v5 + (int64_t)v2) <= 122) {
                        // 0x697ad
                        function_255da((int64_t *)&v2);
                        char * v6 = (char *)(v5 + (int64_t)v2); // 0x697bc
                        *v6 = *v6 - 32;
                    }
                }
            }
        }
        // 0x697bf
        *(int64_t *)a1 = (int64_t)v2;
        v2 = (char *)&g3;
    } else {
        // 0x69716
        function_69166(a1, &g2);
    }
    // 0x697d6
    function_2508e((int64_t)&v2);
    int64_t result = a1; // 0x697ef
    if (v1 != __readfsqword(40)) {
        // 0x697f1
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x697f6
    return result;
}

// Address range: 0x715a1 - 0x716c8
int64_t function_715a1(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x715ab
    int64_t v2 = a1; // 0x715c3
    int64_t v3 = 0; // 0x715c3
    if (*(int64_t *)(a1 - 24) != 0) {
        int32_t * v4 = (int32_t *)(a2 - 8); // 0x715d2
        int64_t v5 = a2 - 24; // 0x715d5
        if (*v4 < 1) {
            if (v5 != (int64_t)&g4) {
                // 0x715fc
                *v4 = 0;
                *(int64_t *)v5 = 0;
                *(int32_t *)a2 = 0;
            }
        } else {
            if (v5 != (int64_t)&g4) {
                // 0x715e9
                function_7157a(v5);
            }
            // 0x715ee
            *(int64_t *)a2 = (int64_t)&g5;
        }
        // 0x71611
        char * name; // bp-56, 0x715a1
        function_48eb2b((int64_t *)&name, a1);
        char * env_val = getenv(name); // 0x71625
        v3 = 0;
        if (env_val != NULL) {
            // 0x7162f
            int64_t v6; // bp-40, 0x715a1
            int64_t v7; // bp-57, 0x715a1
            function_250b0(&v6, (int64_t)env_val, &v7);
            int64_t v8 = (int64_t)&v6; // 0x71649
            int64_t v9; // bp-48, 0x715a1
            function_48e347(&v9, &v6);
            int32_t * v10 = (int32_t *)(v8 - 8); // 0x71657
            if (*v10 < 0) {
                // 0x7165e
                *v10 = 0;
            }
            int32_t * v11 = (int32_t *)(v9 - 8); // 0x7166a
            if (*v11 < 0) {
                // 0x71671
                *v11 = 0;
            }
            // 0x71678
            *(int64_t *)a2 = v9;
            v9 = v8;
            function_29c3a(&v9);
            function_7154a(v6 - 24);
            int64_t v12; // bp-255, 0x715a1
            v3 = (int64_t)&v12;
        }
        // 0x71699
        v2 = function_7154a((int64_t)name - 24);
    }
    int64_t result = v3 % 256 | v2 & -256; // 0x716b8
    if (v1 != __readfsqword(40)) {
        // 0x716ba
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x716bf
    return result;
}

// Address range: 0x3ddb5d - 0x3ddc80
int64_t function_3ddb5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x3ddb5d
    int64_t v1; // 0x3ddb5d
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_caf2a(a7);
}

// Address range: 0x4c28f0 - 0x4c2a0f
int64_t function_4c28f0(int64_t a1, int64_t a2, uint64_t a3) {
    if (a3 == 0) {
        // 0x4c2987
        int64_t result; // 0x4c28f0
        return result;
    }
    uint32_t v1 = (int32_t)a1;
    int32_t v2 = a3;
    uint32_t v3 = v2 + v1; // 0x4c292a
    *(int32_t *)a1 = v3;
    if (v3 < v2) {
        int32_t * v4 = (int32_t *)(a1 + 4); // 0x4c2939
        *v4 = *v4 + 1;
    }
    uint32_t v5 = v1 % 64; // 0x4c292c
    int64_t v6 = v5; // 0x4c292c
    uint32_t v7 = 64 - v5; // 0x4c2932
    if (v5 != 0 && (int64_t)v7 <= a3) {
        // 0x4c29f1
        return (int64_t)memcpy((int64_t *)(a1 + 24 + v6), (int64_t *)a2, v7);
    }
    int64_t v8 = a2; // 0x4c294a
    if (a3 < 64) {
        // 0x4c29b0
        return (int64_t)memcpy((int64_t *)(a1 + 24 + v6), (int64_t *)a2, v2);
    }
    int64_t v9 = a3; // 0x4c294a
    v9 -= 64;
    function_4c1ea0(a1, v8);
    v8 += 64;
    while (v9 >= 64) {
        // 0x4c2958
        v9 -= 64;
        function_4c1ea0(a1, v8);
        v8 += 64;
    }
    uint64_t v10 = a3 % 64; // 0x4c2975
    int64_t result2 = a3 - 64 & -64; // 0x4c2979
    if (v10 == 0) {
        // 0x4c2987
        return result2;
    }
    int64_t v11 = a2 + 64 + result2;
    return (int64_t)memcpy((int64_t *)(a1 + 24 + v6), (int64_t *)v11, (int32_t)v10);
}

// Address range: 0x4c5fc0 - 0x4c60e5
int64_t function_4c5fc0(int64_t file_path, int64_t a2, int64_t a3) {
    struct _IO_FILE * file = fopen((char *)file_path, "rb"); // 0x4c5fe5
    if (file == NULL) {
        // 0x4c608f
        return 0xffffc200;
    }
    // 0x4c5ff6
    fseek(file, 0, SEEK_END);
    int32_t curr_file_offset = ftell(file); // 0x4c6008
    if (curr_file_offset == -1) {
        // 0x4c608f
        return -1;
    }
    // 0x4c601a
    fseek(file, 0, SEEK_SET);
    int64_t * v1 = (int64_t *)a3; // 0x4c602b
    *v1 = (int64_t)curr_file_offset;
    int64_t * mem = calloc(1, curr_file_offset + 1); // 0x4c6034
    *(int64_t *)a2 = (int64_t)mem;
    if (mem == NULL) {
        // 0x4c60d0
        fclose(file);
        // 0x4c608f
        return 0xffffc080;
    }
    int32_t items_read = fread(mem, 1, curr_file_offset, file); // 0x4c6054
    fclose(file);
    if (curr_file_offset != items_read) {
        // 0x4c60b0
        free((int64_t *)1);
        // 0x4c608f
        return 0xffffc200;
    }
    // 0x4c6062
    *(char *)2 = 0;
    int64_t result = 0; // 0x4c6086
    if (strstr("-----BEGIN ", "-----BEGIN ") != NULL) {
        // 0x4c6088
        *v1 = 2;
        result = 0;
    }
    // 0x4c608f
    return result;
}

// Address range: 0x4c8320 - 0x4c843f
int64_t function_4c8320(int64_t a1, int64_t a2, uint64_t a3) {
    if (a3 == 0) {
        // 0x4c83b7
        int64_t result; // 0x4c8320
        return result;
    }
    uint32_t v1 = (int32_t)a1;
    int32_t v2 = a3;
    uint32_t v3 = v2 + v1; // 0x4c835a
    *(int32_t *)a1 = v3;
    if (v3 < v2) {
        int32_t * v4 = (int32_t *)(a1 + 4); // 0x4c8369
        *v4 = *v4 + 1;
    }
    uint32_t v5 = v1 % 64; // 0x4c835c
    int64_t v6 = v5; // 0x4c835c
    uint32_t v7 = 64 - v5; // 0x4c8362
    if (v5 != 0 && (int64_t)v7 <= a3) {
        // 0x4c8421
        return (int64_t)memcpy((int64_t *)(a1 + 28 + v6), (int64_t *)a2, v7);
    }
    int64_t v8 = a2; // 0x4c837a
    if (a3 < 64) {
        // 0x4c83e0
        return (int64_t)memcpy((int64_t *)(a1 + 28 + v6), (int64_t *)a2, v2);
    }
    int64_t v9 = a3; // 0x4c837a
    v9 -= 64;
    function_4c69e0(a1, v8);
    v8 += 64;
    while (v9 >= 64) {
        // 0x4c8388
        v9 -= 64;
        function_4c69e0(a1, v8);
        v8 += 64;
    }
    uint64_t v10 = a3 % 64; // 0x4c83a5
    int64_t result2 = a3 - 64 & -64; // 0x4c83a9
    if (v10 == 0) {
        // 0x4c83b7
        return result2;
    }
    int64_t v11 = a2 + 64 + result2;
    return (int64_t)memcpy((int64_t *)(a1 + 28 + v6), (int64_t *)v11, (int32_t)v10);
}

// Address range: 0x4cc7d0 - 0x4cc8ef
int64_t function_4cc7d0(int64_t a1, int64_t a2, uint64_t a3) {
    if (a3 == 0) {
        // 0x4cc867
        int64_t result; // 0x4cc7d0
        return result;
    }
    uint32_t v1 = (int32_t)a1;
    int32_t v2 = a3;
    uint32_t v3 = v2 + v1; // 0x4cc80a
    *(int32_t *)a1 = v3;
    if (v3 < v2) {
        int32_t * v4 = (int32_t *)(a1 + 4); // 0x4cc819
        *v4 = *v4 + 1;
    }
    uint32_t v5 = v1 % 64; // 0x4cc80c
    int64_t v6 = v5; // 0x4cc80c
    uint32_t v7 = 64 - v5; // 0x4cc812
    if (v5 != 0 && (int64_t)v7 <= a3) {
        // 0x4cc8d1
        return (int64_t)memcpy((int64_t *)(a1 + 28 + v6), (int64_t *)a2, v7);
    }
    int64_t v8 = a2; // 0x4cc82a
    if (a3 < 64) {
        // 0x4cc890
        return (int64_t)memcpy((int64_t *)(a1 + 28 + v6), (int64_t *)a2, v2);
    }
    int64_t v9 = a3; // 0x4cc82a
    v9 -= 64;
    function_4cb560(a1, v8);
    v8 += 64;
    while (v9 >= 64) {
        // 0x4cc838
        v9 -= 64;
        function_4cb560(a1, v8);
        v8 += 64;
    }
    uint64_t v10 = a3 % 64; // 0x4cc855
    int64_t result2 = a3 - 64 & -64; // 0x4cc859
    if (v10 == 0) {
        // 0x4cc867
        return result2;
    }
    int64_t v11 = a2 + 64 + result2;
    return (int64_t)memcpy((int64_t *)(a1 + 28 + v6), (int64_t *)v11, (int32_t)v10);
}

// Address range: 0x4d2860 - 0x4d2980
int64_t function_4d2860(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 + a4; // 0x4d2877
    int64_t v2 = a4; // bp-136, 0x4d2897
    int64_t v3; // bp-120, 0x4d2860
    function_4b0870(&v3);
    int64_t v4; // bp-88, 0x4d2860
    function_4b0870(&v4);
    int64_t v5; // bp-128, 0x4d2860
    int64_t v6 = function_4afe70(&v2, v1, &v5, 48); // 0x4d28ba
    int64_t v7 = v6; // 0x4d28c1
    if ((int32_t)v6 == 0) {
        int64_t v8 = v5 + v2; // 0x4d28c7
        if (v8 != v1) {
            // 0x4d28f2
            function_4b0890(&v3);
            function_4b0890(&v4);
            return 0xffffb01a;
        }
        int64_t v9 = function_4aff90(&v2, v8, &v3); // 0x4d28e2
        v7 = v9;
        if ((int32_t)v9 == 0) {
            int64_t v10 = function_4aff90(&v2, v8, &v4); // 0x4d2943
            v7 = v10;
            if ((int32_t)v10 == 0) {
                int64_t v11 = function_4d23f0(a1, a2, a3, a1 + 272, &v3, &v4); // 0x4d2967
                if ((int32_t)v11 == 0) {
                    // 0x4d2977
                    return 0xffffb400;
                }
                // 0x4d28f2
                function_4b0890(&v3);
                function_4b0890(&v4);
                return v11 & 0xffffffff;
            }
        }
    }
    // 0x4d28f2
    function_4b0890(&v3);
    function_4b0890(&v4);
    return v7 + 0xffffb080 & 0xffffffff;
}

// Address range: 0x5115a0 - 0x5116b6
// From class:    std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_5115a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = *(int64_t *)(function_50c440(a6 + 208) + 16); // 0x5115d3
    int64_t result3 = function_510590(a1, a2, a3, a4, a5, a6, a7, a8, *(int64_t *)(v1 + 32)); // 0x5115f8
    if (result3 == 0) {
        goto lab_0x5116a0;
    } else {
        if ((int32_t)a3 == -1) {
            uint64_t result = *(int64_t *)(result3 + 16); // 0x511688
            if (result >= *(int64_t *)(result3 + 24)) {
                // 0x51163d
                return result;
            }
            // 0x511692
            if (*(int32_t *)result == -1) {
                goto lab_0x5116a0;
            } else {
                goto lab_0x51162d;
            }
        } else {
            goto lab_0x51162d;
        }
    }
  lab_0x5116a0:;
    int64_t result2 = 0; // 0x5116a6
    int64_t result5; // 0x5115a0
    char v2; // 0x5115a0
    if (a4 == 0) {
        goto lab_0x511638;
    } else {
        // 0x5116a8
        result5 = 0;
        v2 = 1;
        if ((int32_t)a5 != -1) {
            // 0x51163d
            return 0;
        }
        goto lab_0x51166b;
    }
  lab_0x511638:;
    int32_t * v3 = (int32_t *)a7; // 0x511638
    *v3 = *v3 | 2;
    // 0x51163d
    return result2;
  lab_0x51162d:
    // 0x51162d
    if (a4 == 0) {
        // 0x51163d
        return result3;
    }
    // 0x511632
    result2 = result3;
    result5 = result3;
    v2 = 0;
    if ((int32_t)a5 == -1) {
        goto lab_0x51166b;
    } else {
        goto lab_0x511638;
    }
  lab_0x51166b:;
    uint64_t result4 = *(int64_t *)(a4 + 16); // 0x51166b
    if (result4 >= *(int64_t *)(a4 + 24)) {
        // 0x51163d
        return result4;
    }
    // 0x511675
    result2 = result5;
    if (v2 != (char)(*(int32_t *)result4 == -1)) {
        // 0x51163d
        return result5;
    }
    goto lab_0x511638;
}

// Address range: 0x5116e0 - 0x5117f6
// From class:    std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_5116e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = *(int64_t *)(function_50c440(a6 + 208) + 16); // 0x511713
    int64_t result3 = function_510590(a1, a2, a3, a4, a5, a6, a7, a8, *(int64_t *)(v1 + 16)); // 0x511738
    if (result3 == 0) {
        goto lab_0x5117e0;
    } else {
        if ((int32_t)a3 == -1) {
            uint64_t result = *(int64_t *)(result3 + 16); // 0x5117c8
            if (result >= *(int64_t *)(result3 + 24)) {
                // 0x51177d
                return result;
            }
            // 0x5117d2
            if (*(int32_t *)result == -1) {
                goto lab_0x5117e0;
            } else {
                goto lab_0x51176d;
            }
        } else {
            goto lab_0x51176d;
        }
    }
  lab_0x5117e0:;
    int64_t result2 = 0; // 0x5117e6
    int64_t result5; // 0x5116e0
    char v2; // 0x5116e0
    if (a4 == 0) {
        goto lab_0x511778;
    } else {
        // 0x5117e8
        result5 = 0;
        v2 = 1;
        if ((int32_t)a5 != -1) {
            // 0x51177d
            return 0;
        }
        goto lab_0x5117ab;
    }
  lab_0x511778:;
    int32_t * v3 = (int32_t *)a7; // 0x511778
    *v3 = *v3 | 2;
    // 0x51177d
    return result2;
  lab_0x51176d:
    // 0x51176d
    if (a4 == 0) {
        // 0x51177d
        return result3;
    }
    // 0x511772
    result2 = result3;
    result5 = result3;
    v2 = 0;
    if ((int32_t)a5 == -1) {
        goto lab_0x5117ab;
    } else {
        goto lab_0x511778;
    }
  lab_0x5117ab:;
    uint64_t result4 = *(int64_t *)(a4 + 16); // 0x5117ab
    if (result4 >= *(int64_t *)(a4 + 24)) {
        // 0x51177d
        return result4;
    }
    // 0x5117b5
    result2 = result5;
    if (v2 != (char)(*(int32_t *)result4 == -1)) {
        // 0x51177d
        return result5;
    }
    goto lab_0x511778;
}

// Address range: 0x538c20 - 0x538d36
// From class:    std::__cxx11::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_538c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = *(int64_t *)(function_50c440(a6 + 208) + 16); // 0x538c53
    int64_t result3 = function_5378f0(a1, a2, a3, a4, a5, a6, a7, a8, *(int64_t *)(v1 + 32)); // 0x538c78
    if (result3 == 0) {
        goto lab_0x538d20;
    } else {
        if ((int32_t)a3 == -1) {
            uint64_t result = *(int64_t *)(result3 + 16); // 0x538d08
            if (result >= *(int64_t *)(result3 + 24)) {
                // 0x538cbd
                return result;
            }
            // 0x538d12
            if (*(int32_t *)result == -1) {
                goto lab_0x538d20;
            } else {
                goto lab_0x538cad;
            }
        } else {
            goto lab_0x538cad;
        }
    }
  lab_0x538d20:;
    int64_t result2 = 0; // 0x538d26
    int64_t result5; // 0x538c20
    char v2; // 0x538c20
    if (a4 == 0) {
        goto lab_0x538cb8;
    } else {
        // 0x538d28
        result5 = 0;
        v2 = 1;
        if ((int32_t)a5 != -1) {
            // 0x538cbd
            return 0;
        }
        goto lab_0x538ceb;
    }
  lab_0x538cb8:;
    int32_t * v3 = (int32_t *)a7; // 0x538cb8
    *v3 = *v3 | 2;
    // 0x538cbd
    return result2;
  lab_0x538cad:
    // 0x538cad
    if (a4 == 0) {
        // 0x538cbd
        return result3;
    }
    // 0x538cb2
    result2 = result3;
    result5 = result3;
    v2 = 0;
    if ((int32_t)a5 == -1) {
        goto lab_0x538ceb;
    } else {
        goto lab_0x538cb8;
    }
  lab_0x538ceb:;
    uint64_t result4 = *(int64_t *)(a4 + 16); // 0x538ceb
    if (result4 >= *(int64_t *)(a4 + 24)) {
        // 0x538cbd
        return result4;
    }
    // 0x538cf5
    result2 = result5;
    if (v2 != (char)(*(int32_t *)result4 == -1)) {
        // 0x538cbd
        return result5;
    }
    goto lab_0x538cb8;
}

// Address range: 0x538d60 - 0x538e76
// From class:    std::__cxx11::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_538d60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = *(int64_t *)(function_50c440(a6 + 208) + 16); // 0x538d93
    int64_t result3 = function_5378f0(a1, a2, a3, a4, a5, a6, a7, a8, *(int64_t *)(v1 + 16)); // 0x538db8
    if (result3 == 0) {
        goto lab_0x538e60;
    } else {
        if ((int32_t)a3 == -1) {
            uint64_t result = *(int64_t *)(result3 + 16); // 0x538e48
            if (result >= *(int64_t *)(result3 + 24)) {
                // 0x538dfd
                return result;
            }
            // 0x538e52
            if (*(int32_t *)result == -1) {
                goto lab_0x538e60;
            } else {
                goto lab_0x538ded;
            }
        } else {
            goto lab_0x538ded;
        }
    }
  lab_0x538e60:;
    int64_t result2 = 0; // 0x538e66
    int64_t result5; // 0x538d60
    char v2; // 0x538d60
    if (a4 == 0) {
        goto lab_0x538df8;
    } else {
        // 0x538e68
        result5 = 0;
        v2 = 1;
        if ((int32_t)a5 != -1) {
            // 0x538dfd
            return 0;
        }
        goto lab_0x538e2b;
    }
  lab_0x538df8:;
    int32_t * v3 = (int32_t *)a7; // 0x538df8
    *v3 = *v3 | 2;
    // 0x538dfd
    return result2;
  lab_0x538ded:
    // 0x538ded
    if (a4 == 0) {
        // 0x538dfd
        return result3;
    }
    // 0x538df2
    result2 = result3;
    result5 = result3;
    v2 = 0;
    if ((int32_t)a5 == -1) {
        goto lab_0x538e2b;
    } else {
        goto lab_0x538df8;
    }
  lab_0x538e2b:;
    uint64_t result4 = *(int64_t *)(a4 + 16); // 0x538e2b
    if (result4 >= *(int64_t *)(a4 + 24)) {
        // 0x538dfd
        return result4;
    }
    // 0x538e35
    result2 = result5;
    if (v2 != (char)(*(int32_t *)result4 == -1)) {
        // 0x538dfd
        return result5;
    }
    goto lab_0x538df8;
}
