/*
 * Targeted RetDec C for native executable gap queue batch 29.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6b492-0x6b56e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b95a0-0x4b967c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c8242-0x4c831d rank=- name=- kind=- bytes=- uncovered=-
 *   0x5088b0-0x50898b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b00e0-0x4b01ba rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bf9e0-0x4bfab9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x7742a-0x77502 rank=- name=- kind=- bytes=- uncovered=-
 *   0x289b2-0x28a89 rank=- name=- kind=- bytes=- uncovered=-
 *   0x530e6-0x531bd rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b1590-0x4b1667 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6897e-0x68a54 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3df27-0x3dffc rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e2a6-0x4e37b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b09d0-0x4b0aa4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b28b0-0x4b2984 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b8fd0-0x4b90a4 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2509a();
int64_t function_289b2();
int64_t function_35fcc();
int64_t function_3df27();
int64_t function_48d3d1();
int64_t function_4a336();
int64_t function_4a368();
int64_t function_4afe70();
int64_t function_4b00e0();
int64_t function_4b09d0();
int64_t function_4b0ac0();
int64_t function_4b0f10();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1820();
int64_t function_4b1900();
int64_t function_4b2680();
int64_t function_4b2760();
int64_t function_4b28b0();
int64_t function_4b8fd0();
int64_t function_4b95a0();
int64_t function_4ba580();
int64_t function_4ba6b0();
int64_t function_4bb7d0();
int64_t function_4bbc70();
int64_t function_4bbff0();
int64_t function_4bf990();
int64_t function_4bf9e0();
int64_t function_4c8242();
int64_t function_4cdde0();
int64_t function_4d906();
int64_t function_4e2a6();
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_5088b0();
int64_t function_530e6();
int64_t function_5423b0();
int64_t function_687c4();
int64_t function_6897e();
int64_t function_6b492();
int64_t function_7293a();
int64_t function_7742a();

// Address range: 0x289b2 - 0x28a89
int64_t function_289b2(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a3 - a2; // 0x289c0
    uint64_t v2 = -0x5555555555555555 * v1 / 8; // 0x289e0
    int64_t v3 = 0; // 0x289e7
    if (v2 != 0) {
        if (v2 >= 0xaaaaaaaaaaaaaab) {
            // 0x289f8
            function_5423b0();
        }
        // 0x289fd
        v3 = function_4efd30(v1);
    }
    // 0x28a0c
    *(int64_t *)a1 = v3;
    *(int64_t *)(a1 + 16) = v3 + v1;
    int64_t v4 = v3; // 0x28a1f
    int64_t result; // 0x289b2
    if (a3 == a2) {
        // 0x28a4d
        *(int64_t *)(a1 + 8) = v3 + 24 * (0xaaaaaaaaaaaaaab * v1 / 8 & 0x1fffffffffffffff);
        return result;
    }
    function_2509a(v4, a2);
    int64_t v5 = a2 + 24; // 0x28a35
    function_2509a(v4 + 8, a2 + 8);
    *(int32_t *)(v4 + 16) = *(int32_t *)(a2 + 16);
    v4 += 24;
    while (v5 != a3) {
        int64_t v6 = v5;
        function_2509a(v4, v6);
        v5 = v6 + 24;
        function_2509a(v4 + 8, v6 + 8);
        *(int32_t *)(v4 + 16) = *(int32_t *)(v6 + 16);
        v4 += 24;
    }
    // 0x28a4d
    *(int64_t *)(a1 + 8) = v3 + 24 * (0xaaaaaaaaaaaaaab * v1 / 8 & 0x1fffffffffffffff);
    return result;
}

// Address range: 0x3df27 - 0x3dffc
int64_t function_3df27(uint64_t a1, int64_t a2, uint64_t a3) {
    if (a2 == 0) {
        // 0x3dff6
        return 1;
    }
    int64_t v1 = (uint64_t)(a1 % 0x10000); // 0x3df42
    int64_t v2 = a1 / 0x10000; // 0x3df4b
    if (a3 == 0) {
        // 0x3dfed
        return 0x10000 * v2 + v1 & 0xffffffff;
    }
    int64_t v3 = a3; // 0x3dfd1
    uint64_t v4 = a3 % (int64_t)&g1;
    int64_t v5 = v1; // 0x3df6f
    int64_t v6 = a2; // 0x3df6f
    int64_t v7 = v2; // 0x3df6f
    int64_t v8; // 0x3df27
    int64_t v9; // 0x3df27
    int64_t v10; // 0x3df88
    int64_t v11; // 0x3df90
    int64_t v12; // 0x3df98
    int64_t v13; // 0x3dfa0
    int64_t v14; // 0x3dfa8
    int64_t v15; // 0x3dfb0
    int64_t v16; // 0x3dfb0
    int64_t v17; // 0x3dfb2
    int64_t v18; // 0x3df74
    int64_t v19; // 0x3df78
    int64_t v20; // 0x3df7e
    if (v4 > 7) {
        v18 = a2 + 8;
        v19 = v1 + (int64_t)*(char *)a2;
        v20 = v19 + (int64_t)*(char *)(a2 + 1);
        v10 = v20 + (int64_t)*(char *)(a2 + 2);
        v11 = v10 + (int64_t)*(char *)(a2 + 3);
        v12 = v11 + (int64_t)*(char *)(a2 + 4);
        v13 = v12 + (int64_t)*(char *)(a2 + 5);
        v14 = v13 + (int64_t)*(char *)(a2 + 6);
        v15 = v14 + (int64_t)*(char *)(a2 + 7);
        v16 = v15 & 0xffffffff;
        v17 = v19 + v2 + v20 + v10 + v11 + v12 + v13 + v14 + v15 & 0xffffffff;
        v5 = v16;
        v6 = v18;
        v7 = v17;
        v8 = v17;
        v9 = v18;
        while ((7 - a2 + v18 & 0xffffffff) < v4) {
            // 0x3df71
            v18 = v9 + 8;
            v19 = v16 + (int64_t)*(char *)v9;
            v20 = v19 + (int64_t)*(char *)(v9 + 1);
            v10 = v20 + (int64_t)*(char *)(v9 + 2);
            v11 = v10 + (int64_t)*(char *)(v9 + 3);
            v12 = v11 + (int64_t)*(char *)(v9 + 4);
            v13 = v12 + (int64_t)*(char *)(v9 + 5);
            v14 = v13 + (int64_t)*(char *)(v9 + 6);
            v15 = v14 + (int64_t)*(char *)(v9 + 7);
            v16 = v15 & 0xffffffff;
            v17 = v19 + v8 + v20 + v10 + v11 + v12 + v13 + v14 + v15 & 0xffffffff;
            v5 = v16;
            v6 = v18;
            v7 = v17;
            v8 = v17;
            v9 = v18;
        }
    }
    int64_t v21 = v7; // 0x3dfbe
    int64_t v22 = v6; // 0x3dfbe
    int64_t v23 = v5; // 0x3dfbe
    int64_t v24 = v5; // 0x3dfbe
    int64_t v25 = v6; // 0x3dfbe
    int64_t v26 = v7; // 0x3dfbe
    int64_t v27; // 0x3dfc0
    int64_t v28; // 0x3dfc7
    int64_t v29; // 0x3dfc7
    int64_t v30; // 0x3dfc9
    if ((v6 - a2 & 0xffffffff) < v4) {
        v27 = v22 + 1;
        v28 = v23 + (int64_t)*(char *)v22;
        v29 = v28 & 0xffffffff;
        v30 = v28 + v21 & 0xffffffff;
        v21 = v30;
        v22 = v27;
        v24 = v29;
        v25 = v27;
        v26 = v30;
        while ((v27 - a2 & 0xffffffff) < v4) {
            // 0x3dfc0
            v27 = v22 + 1;
            v28 = v29 + (int64_t)*(char *)v22;
            v29 = v28 & 0xffffffff;
            v30 = v28 + v21 & 0xffffffff;
            v21 = v30;
            v22 = v27;
            v24 = v29;
            v25 = v27;
            v26 = v30;
        }
    }
    // 0x3dfcd
    v3 -= v4;
    int64_t v31 = (v24 & 0xffffffff) % ((int64_t)&g6 & 0xffffffff); // 0x3dfd4
    int64_t v32 = (v26 & 0xffffffff) % ((int64_t)&g6 & 0xffffffff); // 0x3dfe3
    while (v3 != 0) {
        int64_t v33 = v25;
        v4 = (int64_t)&g1;
        int64_t v34 = 7 - v33; // 0x3df67
        v5 = v31;
        v6 = v33;
        v7 = v32;
        v8 = v32;
        v9 = v33;
        int64_t v35 = v31; // 0x3df6f
        if (v4 > 7) {
            v18 = v9 + 8;
            v19 = v35 + (int64_t)*(char *)v9;
            v20 = v19 + (int64_t)*(char *)(v9 + 1);
            v10 = v20 + (int64_t)*(char *)(v9 + 2);
            v11 = v10 + (int64_t)*(char *)(v9 + 3);
            v12 = v11 + (int64_t)*(char *)(v9 + 4);
            v13 = v12 + (int64_t)*(char *)(v9 + 5);
            v14 = v13 + (int64_t)*(char *)(v9 + 6);
            v15 = v14 + (int64_t)*(char *)(v9 + 7);
            v16 = v15 & 0xffffffff;
            v17 = v19 + v8 + v20 + v10 + v11 + v12 + v13 + v14 + v15 & 0xffffffff;
            v5 = v16;
            v6 = v18;
            v7 = v17;
            v8 = v17;
            v9 = v18;
            while ((v34 + v18 & 0xffffffff) < v4) {
                // 0x3df71
                v18 = v9 + 8;
                v19 = v16 + (int64_t)*(char *)v9;
                v20 = v19 + (int64_t)*(char *)(v9 + 1);
                v10 = v20 + (int64_t)*(char *)(v9 + 2);
                v11 = v10 + (int64_t)*(char *)(v9 + 3);
                v12 = v11 + (int64_t)*(char *)(v9 + 4);
                v13 = v12 + (int64_t)*(char *)(v9 + 5);
                v14 = v13 + (int64_t)*(char *)(v9 + 6);
                v15 = v14 + (int64_t)*(char *)(v9 + 7);
                v16 = v15 & 0xffffffff;
                v17 = v19 + v8 + v20 + v10 + v11 + v12 + v13 + v14 + v15 & 0xffffffff;
                v5 = v16;
                v6 = v18;
                v7 = v17;
                v8 = v17;
                v9 = v18;
            }
        }
        // 0x3dfb6
        v21 = v7;
        v22 = v6;
        v23 = v5;
        v24 = v5;
        v25 = v6;
        v26 = v7;
        if ((v6 - v33 & 0xffffffff) < v4) {
            v27 = v22 + 1;
            v28 = v23 + (int64_t)*(char *)v22;
            v29 = v28 & 0xffffffff;
            v30 = v28 + v21 & 0xffffffff;
            v21 = v30;
            v22 = v27;
            v24 = v29;
            v25 = v27;
            v26 = v30;
            while ((v27 - v33 & 0xffffffff) < v4) {
                // 0x3dfc0
                v27 = v22 + 1;
                v28 = v29 + (int64_t)*(char *)v22;
                v29 = v28 & 0xffffffff;
                v30 = v28 + v21 & 0xffffffff;
                v21 = v30;
                v22 = v27;
                v24 = v29;
                v25 = v27;
                v26 = v30;
            }
        }
        // 0x3dfcd
        v3 -= v4;
        v31 = (v24 & 0xffffffff) % ((int64_t)&g6 & 0xffffffff);
        v32 = (v26 & 0xffffffff) % ((int64_t)&g6 & 0xffffffff);
    }
    // 0x3dfed
    return 0x10000 * v32 + v31 & 0xffffffff;
}

// Address range: 0x4e2a6 - 0x4e37b
int64_t function_4e2a6(int64_t a1) {
    // 0x4e2a6
    int128_t v1; // 0x4e2a6
    int128_t v2 = v1;
    int128_t v3 = __asm_xorps(v2, v2); // 0x4e2ae
    *(int64_t *)(a1 + 24) = *(int64_t *)(a1 + 16);
    __asm_movups(*(int128_t *)a1, v3);
    *(int64_t *)(a1 + 48) = *(int64_t *)(a1 + 40);
    function_4a336();
    int64_t v4 = a1 + 72; // 0x4e2ce
    int64_t * v5 = (int64_t *)(a1 + 128); // 0x4e2d2
    *(int64_t *)(a1 + 80) = 0;
    *(int64_t *)(a1 + 104) = 0;
    *(int64_t *)(a1 + 88) = v4;
    *(int64_t *)(a1 + 96) = v4;
    function_4a368(a1 + 112, *v5);
    int64_t v6 = a1 + 120; // 0x4e2fa
    int64_t * v7 = (int64_t *)(a1 + 176); // 0x4e2fe
    *v5 = 0;
    *(int64_t *)(a1 + 152) = 0;
    *(int64_t *)(a1 + 136) = v6;
    *(int64_t *)(a1 + 144) = v6;
    function_4a368(a1 + 160, *v7);
    int64_t v8 = a1 + 168; // 0x4e335
    *v7 = 0;
    *(int64_t *)(a1 + 200) = 0;
    *(int64_t *)(a1 + 232) = 0;
    *(int64_t *)(a1 + 184) = v8;
    *(int64_t *)(a1 + 192) = v8;
    int64_t result = *(int64_t *)(a1 + 216); // 0x4e36b
    *(int64_t *)(a1 + 224) = result;
    return result;
}

// Address range: 0x530e6 - 0x531bd
int64_t function_530e6(int64_t a1, uint64_t a2) {
    // 0x530e6
    int64_t v1; // 0x530e6
    int64_t v2; // 0x530e6
    if (a2 != 1) {
        if (a2 >= 0x2000000000000000) {
            // 0x53118
            function_5423b0();
        }
        int64_t v3 = 8 * a2; // 0x5311d
        int64_t v4 = function_4efd30(v3); // 0x53128
        __asm_rep_stosb_memset((char *)v4, 0, v3);
        v1 = v4;
        bool v5; // 0x530e6
        v2 = v4 + (v5 ? -1 : 1) * v3;
    } else {
        int64_t v6 = a1 + 48; // 0x530fb
        *(int64_t *)v6 = 0;
        v1 = v6;
        v2 = a1;
    }
    int64_t v7 = a1 + 16; // 0x5313a
    int64_t * v8 = (int64_t *)v7; // 0x5313e
    int64_t v9 = *v8; // 0x5313e
    *v8 = 0;
    int64_t v10 = 0; // 0x5314f
    int64_t v11 = v2; // 0x5314f
    if (v9 != 0) {
        int64_t v12 = 0;
        int64_t * v13 = (int64_t *)v9; // 0x53156
        int64_t v14 = *v13; // 0x53156
        int64_t v15 = (int64_t)*(int32_t *)(v9 + 8) % a2; // 0x53159
        int64_t * v16 = (int64_t *)(8 * v15 + v1); // 0x53161
        int64_t v17 = *v16; // 0x53161
        int64_t v18; // 0x530e6
        int64_t v19; // 0x530e6
        int64_t v20; // 0x53169
        if (v17 != 0) {
            // 0x5318c
            *v13 = *(int64_t *)v17;
            *(int64_t *)*v16 = v9;
            v19 = v12;
            v18 = v17;
        } else {
            // 0x53169
            v20 = *v8;
            *v13 = v20;
            *v8 = v9;
            *v16 = v7;
            v19 = v15;
            v18 = v20;
            if (*v13 != 0) {
                // 0x53185
                *(int64_t *)(8 * v12 + v1) = v9;
                v19 = v15;
                v18 = v20;
            }
        }
        int64_t v21 = v19;
        v10 = v21;
        v11 = v18;
        while (v14 != 0) {
            int64_t v22 = v14;
            v12 = v21;
            v13 = (int64_t *)v22;
            v14 = *v13;
            v15 = (int64_t)*(int32_t *)(v22 + 8) % a2;
            v16 = (int64_t *)(8 * v15 + v1);
            v17 = *v16;
            if (v17 != 0) {
                // 0x5318c
                *v13 = *(int64_t *)v17;
                *(int64_t *)*v16 = v22;
                v19 = v12;
                v18 = v17;
            } else {
                // 0x53169
                v20 = *v8;
                *v13 = v20;
                *v8 = v22;
                *v16 = v7;
                v19 = v15;
                v18 = v20;
                if (*v13 != 0) {
                    // 0x53185
                    *(int64_t *)(8 * v12 + v1) = v22;
                    v19 = v15;
                    v18 = v20;
                }
            }
            // 0x5317d
            v21 = v19;
            v10 = v21;
            v11 = v18;
        }
    }
    // 0x5319d
    if (v11 != a1 + 48) {
        // 0x531a9
        function_4eeb50(v11, v10);
    }
    // 0x531ae
    *(int64_t *)(a1 + 8) = a2;
    *(int64_t *)a1 = v1;
    int64_t result; // 0x530e6
    return result;
}

// Address range: 0x6897e - 0x68a54
int64_t function_6897e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x68992
    *(int64_t *)a1 = (int64_t)&g5;
    function_7293a();
    int64_t v2 = a1 + 120; // 0x689c5
    *(int64_t *)v2 = 0;
    *(int64_t *)(a1 + 128) = 0;
    function_48d3d1(a1 + 48, a2, 64);
    *(int32_t *)(a1 + 116) = (int32_t)a4;
    *(int16_t *)(a1 + 112) = (int16_t)a3;
    *(char *)(a1 + 136) = 0;
    int64_t v3 = 0; // bp-48, 0x689f8
    int64_t v4 = 0; // bp-40, 0x68a01
    function_4d906(v2, &v3);
    function_35fcc(&v4);
    *(int64_t *)(a1 + 144) = 0;
    *(int64_t *)(a1 + 152) = 0;
    function_687c4(a1);
    int64_t result = 0; // 0x68a44
    if (v1 != __readfsqword(40)) {
        // 0x68a46
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x68a4b
    return result;
}

// Address range: 0x6b492 - 0x6b56e
int64_t function_6b492(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x6b4a7
    int32_t fd = epoll_create(50); // 0x6b4b7
    int32_t v2 = fd; // 0x6b4be
    int64_t v3 = 0; // 0x6b4be
    if (fd >= 0) {
        int32_t * v4 = (int32_t *)(a1 + 160); // 0x6b4c4
        int64_t v5 = 4; // bp-60, 0x6b4d8
        uint32_t v6 = epoll_ctl(fd, 1, *v4, (struct epoll_event *)&v5); // 0x6b4e4
        v3 = 0;
        if (v6 >= 0) {
            int64_t v7 = function_4eec00(&g2); // 0x6b4f2
            int32_t v8 = epoll_wait(fd, (struct epoll_event *)v7, 50, (int32_t)*(int16_t *)(a1 + 248)); // 0x6b50b
            int64_t v9 = 0; // 0x6b512
            if (v8 >= 0) {
                int64_t v10 = v7 + 4; // 0x6b516
                int64_t v11 = v10;
                v9 = 0;
                while (v11 != 12 * (int64_t)v8 + v10) {
                    // 0x6b526
                    v9 = 1;
                    if (*(int32_t *)v11 == *v4) {
                        // break -> 0x6b53c
                        break;
                    }
                    v11 += 12;
                    v9 = 0;
                }
            }
            // 0x6b53c
            function_4eeb40(v7);
            v3 = v9;
        }
        // 0x6b544
        v2 = close(fd);
    }
    int64_t result = v3 % 256 | (int64_t)(v2 & -256); // 0x6b55c
    if (v1 != __readfsqword(40)) {
        // 0x6b55e
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x6b563
    return result;
}

// Address range: 0x7742a - 0x77502
int64_t function_7742a(int64_t a1, uint64_t a2) {
    // 0x7742a
    int64_t v1; // 0x7742a
    int64_t v2; // 0x7742a
    if (a2 != 1) {
        if (a2 >= 0x2000000000000000) {
            // 0x7745c
            function_5423b0();
        }
        int64_t v3 = 8 * a2; // 0x77461
        int64_t v4 = function_4efd30(v3); // 0x7746c
        __asm_rep_stosb_memset((char *)v4, 0, v3);
        v1 = v4;
        bool v5; // 0x7742a
        v2 = v4 + (v5 ? -1 : 1) * v3;
    } else {
        int64_t v6 = a1 + 48; // 0x7743f
        *(int64_t *)v6 = 0;
        v1 = v6;
        v2 = a1;
    }
    int64_t v7 = a1 + 16; // 0x7747e
    int64_t * v8 = (int64_t *)v7; // 0x77482
    int64_t v9 = *v8; // 0x77482
    *v8 = 0;
    int64_t v10 = 0; // 0x77493
    int64_t v11 = v2; // 0x77493
    if (v9 != 0) {
        int64_t v12 = 0;
        int64_t * v13 = (int64_t *)v9; // 0x7749b
        int64_t v14 = *v13; // 0x7749b
        int64_t v15 = *(int64_t *)(v9 + 16) % a2;
        int64_t * v16 = (int64_t *)(8 * v15 + v1); // 0x774a6
        int64_t v17 = *v16; // 0x774a6
        int64_t v18; // 0x7742a
        int64_t v19; // 0x7742a
        int64_t v20; // 0x774ae
        if (v17 != 0) {
            // 0x774d1
            *v13 = *(int64_t *)v17;
            *(int64_t *)*v16 = v9;
            v19 = v12;
            v18 = v17;
        } else {
            // 0x774ae
            v20 = *v8;
            *v13 = v20;
            *v8 = v9;
            *v16 = v7;
            v19 = v15;
            v18 = v20;
            if (*v13 != 0) {
                // 0x774ca
                *(int64_t *)(8 * v12 + v1) = v9;
                v19 = v15;
                v18 = v20;
            }
        }
        int64_t v21 = v19;
        v10 = v21;
        v11 = v18;
        while (v14 != 0) {
            int64_t v22 = v14;
            v12 = v21;
            v13 = (int64_t *)v22;
            v14 = *v13;
            v15 = *(int64_t *)(v22 + 16) % a2;
            v16 = (int64_t *)(8 * v15 + v1);
            v17 = *v16;
            if (v17 != 0) {
                // 0x774d1
                *v13 = *(int64_t *)v17;
                *(int64_t *)*v16 = v22;
                v19 = v12;
                v18 = v17;
            } else {
                // 0x774ae
                v20 = *v8;
                *v13 = v20;
                *v8 = v22;
                *v16 = v7;
                v19 = v15;
                v18 = v20;
                if (*v13 != 0) {
                    // 0x774ca
                    *(int64_t *)(8 * v12 + v1) = v22;
                    v19 = v15;
                    v18 = v20;
                }
            }
            // 0x774c2
            v21 = v19;
            v10 = v21;
            v11 = v18;
        }
    }
    // 0x774e2
    if (v11 != a1 + 48) {
        // 0x774ee
        function_4eeb50(v11, v10);
    }
    // 0x774f3
    *(int64_t *)(a1 + 8) = a2;
    *(int64_t *)a1 = v1;
    int64_t result; // 0x7742a
    return result;
}

// Address range: 0x4b00e0 - 0x4b01b8
int64_t function_4b00e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b00e0
    int64_t v1; // bp-64, 0x4b00e0
    int64_t v2 = function_4afe70(a1, a2, &v1, 48); // 0x4b0104
    int64_t result = v2 & 0xffffffff; // 0x4b010b
    if ((int32_t)v2 != 0) {
        // 0x4b0170
        return result;
    }
    uint64_t v3 = v1 + a1; // 0x4b0116
    if (v3 != a2) {
        // 0x4b0170
        return 0xffffff9a;
    }
    int64_t v4 = a1; // 0x4b00e0
    int64_t v5 = a3;
    int64_t v6 = v4; // 0x4b0127
    while (v4 < v3) {
        // 0x4b0129
        *(int32_t *)v5 = (int32_t)*(char *)v4;
        int64_t * v7 = (int64_t *)(v5 + 8); // 0x4b013c
        int64_t v8 = function_4afe70(a1, v3, v7, a4 & 0xffffffff); // 0x4b013c
        int64_t result2 = v8; // 0x4b0143
        if ((int32_t)v8 != 0) {
            // 0x4b0170
            return result2;
        }
        // 0x4b0145
        *(int64_t *)(v5 + 16) = a1;
        uint64_t v9 = *v7 + a1; // 0x4b014f
        *(int64_t *)a1 = v9;
        v6 = a1;
        if (v3 <= v9) {
            // break -> 0x4b015b
            break;
        }
        int64_t * mem = calloc(1, 32); // 0x4b0192
        int64_t v10 = (int64_t)mem; // 0x4b0192
        *(int64_t *)(v5 + 24) = v10;
        v4 = 1;
        if (mem == NULL) {
            // 0x4b0170
            return 0;
        }
        v5 = v10;
        v6 = v4;
    }
    // 0x4b015b
    *(int64_t *)(v5 + 24) = 0;
    if (v3 != v6) {
        // 0x4b0170
        return 0xffffff9a;
    }
    // 0x4b0170
    return result;
}

// Address range: 0x4b09d0 - 0x4b0aa1
int64_t function_4b09d0(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4b09d4
    uint64_t v2 = *v1; // 0x4b09d4
    if (v2 <= a2) {
        // 0x4b0aa8
        int64_t result; // 0x4b09d0
        return result;
    }
    int64_t v3 = v2 - 1; // 0x4b09e7
    int64_t v4 = 1; // 0x4b09eb
    if (v3 != 0) {
        int64_t v5 = *(int64_t *)(a1 + 16); // 0x4b09ed
        v4 = v2;
        if (*(int64_t *)(v5 + 8 * v3) == 0) {
            int64_t v6 = v3;
            int64_t v7 = v6 - 1; // 0x4b0a0b
            v4 = 1;
            while (v7 != 0) {
                // 0x4b0a00
                v4 = v6;
                if (*(int64_t *)(8 * v7 + v5) != 0) {
                    // break -> 0x4b0a17
                    break;
                }
                v6 = v7;
                v7 = v6 - 1;
                v4 = 1;
            }
        }
    }
    uint64_t v8 = v4;
    int64_t v9 = v8 >= a2 ? v8 : a2; // 0x4b0a22
    int32_t nmemb = v9; // 0x4b0a29
    int64_t * mem = calloc(nmemb, 8); // 0x4b0a29
    int64_t result2 = (int64_t)mem; // 0x4b0a29
    if (mem == NULL) {
        // 0x4b0aa8
        return result2;
    }
    int64_t * v10 = (int64_t *)(a1 + 16); // 0x4b0a36
    int64_t v11 = *v10; // 0x4b0a36
    if (v11 == 0) {
        // 0x4b0a82
        *v1 = v9;
        *v10 = result2;
        return 0;
    }
    // 0x4b0a3f
    memcpy(mem, (int64_t *)v11, 8 * nmemb);
    int64_t v12 = *v1; // 0x4b0a4f
    int64_t v13 = *v10; // 0x4b0a53
    int64_t v14 = v12; // 0x4b0a61
    int64_t v15 = v13; // 0x4b0a61
    if (v12 == 0) {
        // 0x4b0a7d
        free((int64_t *)v13);
        // 0x4b0a82
        *v1 = v9;
        *v10 = result2;
        return 0;
    }
    v14--;
    *(int64_t *)v15 = 0;
    v15 += 8;
    while (v14 != 0) {
        // 0x4b0a68
        v14--;
        *(int64_t *)v15 = 0;
        v15 += 8;
    }
    // 0x4b0a7d
    free((int64_t *)v13);
    // 0x4b0a82
    *v1 = v9;
    *v10 = result2;
    return 0;
}

// Address range: 0x4b1590 - 0x4b1662
int64_t function_4b1590(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x4b1590
    int64_t v2 = 0; // 0x4b1597
    if (v1 != 0) {
        int64_t v3 = *(int64_t *)(a1 + 16); // 0x4b1599
        int64_t v4 = v1 - 1; // 0x4b159d
        v2 = v1;
        if (*(int64_t *)(v3 + 8 * v4) == 0) {
            // 0x4b15bc
            v2 = v4;
            if (v4 != 0) {
                int64_t v5 = v4; // 0x4b15b8
                v2 = v5;
                while (*(int64_t *)(v3 - 8 + 8 * v5) == 0) {
                    // 0x4b15b8
                    v5--;
                    v2 = v5;
                    if (v5 == 0) {
                        // break -> 0x4b15c4
                        break;
                    }
                    v2 = v5;
                }
            }
        }
    }
    int64_t v6 = v2;
    int64_t v7 = *(int64_t *)(a2 + 8); // 0x4b15c4
    int64_t v8 = 0; // 0x4b15cb
    if (v7 != 0) {
        int64_t v9 = *(int64_t *)(a2 + 16); // 0x4b15cd
        int64_t v10 = v7 - 1; // 0x4b15d1
        v8 = v7;
        if (*(int64_t *)(v9 + 8 * v10) == 0) {
            // 0x4b15ec
            v8 = v10;
            if (v10 != 0) {
                int64_t v11 = v10; // 0x4b15e8
                v8 = v11;
                while (*(int64_t *)(v9 - 8 + 8 * v11) == 0) {
                    // 0x4b15e8
                    v11--;
                    v8 = v11;
                    if (v11 == 0) {
                        // break -> 0x4b15f4
                        break;
                    }
                    v8 = v11;
                }
            }
        }
    }
    int64_t v12 = v8;
    if (v6 != v12 || (v12 || v6) == 0) {
        // 0x4b1657
        return 0;
    }
    int32_t v13 = a1;
    int32_t v14 = a2;
    int64_t result = a1 & 0xffffffff; // 0x4b1605
    if (v13 > 0 == v14 < 0) {
        // 0x4b1657
        return result;
    }
    // 0x4b1612
    if (v13 < 0 == v14 > 0) {
        // 0x4b1657
        return 0xffffffff;
    }
    // 0x4b161a
    if (v6 == 0) {
        // 0x4b1657
        return 0;
    }
    int64_t v15 = v6 - 1; // 0x4b1622
    int64_t v16 = *(int64_t *)(a1 + 16); // 0x4b1626
    int64_t v17 = *(int64_t *)(a2 + 16); // 0x4b162a
    int64_t v18 = 8 * v15; // 0x4b162e
    uint64_t v19 = *(int64_t *)(v17 + v18); // 0x4b162e
    uint64_t v20 = *(int64_t *)(v16 + v18); // 0x4b1632
    if (v20 <= v19 != v20 >= v19) {
        // 0x4b1657
        return result;
    }
    // 0x4b1652
    if (v15 == 0) {
        // 0x4b1657
        return 0;
    }
    int64_t v21 = v15; // 0x4b1655
    int64_t v22 = 8 * v21 - 8;
    int64_t result2 = result; // 0x4b164a
    while (*(int64_t *)(v22 + v16) == *(int64_t *)(v22 + v17)) {
        // 0x4b1652
        v21--;
        result2 = 0;
        if (v21 == 0) {
            // break -> 0x4b1657
            break;
        }
        v22 = 8 * v21 - 8;
        result2 = result;
    }
    // 0x4b1657
    return result2;
}

// Address range: 0x4b28b0 - 0x4b2980
int64_t function_4b28b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b28b0
    if ((int32_t)a2 >= 17) {
        // 0x4b28fb
        return 0xfffffffc;
    }
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x4b28dc
    int32_t v2; // bp-48, 0x4b28b0
    int64_t v3 = function_4b2760((int64_t *)&v2, a1, v1); // 0x4b28f0
    if ((int32_t)v3 != 0) {
        // 0x4b28fb
        return v3 & 0xffffffff;
    }
    int64_t v4 = function_4b2680(a1, 0, a1, v1); // 0x4b292b
    int64_t result = v4 & 0xffffffff; // 0x4b2932
    if ((int32_t)v4 != 0) {
        // 0x4b28fb
        return result;
    }
    int64_t result2 = function_4b1680(a1, 0, a1); // 0x4b293b
    if ((int32_t)result2 != 0) {
        // 0x4b28fb
        return result2;
    }
    char v5 = v2;
    if (v2 < 10) {
        // 0x4b294f
        *(char *)a1 = v5 + 48;
        *(int64_t *)a3 = a1 + 1;
    } else {
        // 0x4b2960
        *(char *)a1 = v5 + 55;
        *(int64_t *)a3 = a1 + 1;
    }
    // 0x4b28fb
    return result;
}

// Address range: 0x4b8fd0 - 0x4b90a4
int64_t function_4b8fd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4b8fd0
    int64_t v1; // bp-136, 0x4b8fd0
    function_4ba580(&v1);
    int64_t v2 = function_4bbc70(a1, a3); // 0x4b9019
    if ((int32_t)v2 != 0) {
        // 0x4b9029
        function_4ba6b0(&v1);
        return v2 & 0xffffffff;
    }
    int64_t v3 = function_4bbff0(a1, &v1, a4, a3, a5, a6); // 0x4b9079
    if ((int32_t)v3 != 0) {
        // 0x4b9029
        function_4ba6b0(&v1);
        return v3 & 0xffffffff;
    }
    // 0x4b9084
    if ((int32_t)function_4bb7d0(&v1) == 0) {
        // 0x4b9097
        return function_4b0ac0(a2, &v1);
    }
    // 0x4b9029
    function_4ba6b0(&v1);
    return 0xffffb080;
}

// Address range: 0x4b95a0 - 0x4b9678
int64_t function_4b95a0(int64_t a1, int64_t a2) {
    // 0x4b95a0
    int64_t result; // 0x4b95a0
    if (*(int64_t *)(a2 + 200) == 0) {
        // 0x4b9621
        return result;
    }
    if ((int32_t)a1 < 0) {
        // 0x4b9658
        if ((int32_t)function_4b1680(a1, 0, a1 & 0xffffffff) != 0) {
            // 0x4b9621
            return 0xffffb080;
        }
    }
    uint64_t v1 = function_4b0f10(a1); // 0x4b95c5
    int64_t v2 = 2 * *(int64_t *)(a2 + 176); // 0x4b95d1
    if (v1 > v2) {
        // 0x4b9621
        return 0xffffb080;
    }
    int64_t result2 = v1 & 0xffffffff; // 0x4b95e8
    if ((int32_t)v1 != 0) {
        // 0x4b9621
        return result2;
    }
    // 0x4b95ed
    int64_t v3; // 0x4b95a0
    while ((int32_t)a1 < 0) {
        // 0x4b95fe
        if ((int32_t)function_4b1680(a1, 0, v2) == 0) {
            // break -> 0x4b9630
            break;
        }
        int64_t v4 = function_4b1900(a1, a1, v2); // 0x4b9615
        v3 = v4;
        if ((int32_t)v4 != 0) {
            // 0x4b961e
            result = v3 & 0xffffffff;
            return result;
        }
    }
    result = result2;
    while ((int32_t)function_4b1590(a1, v2) >= 0) {
        int64_t v5 = function_4b1820(a1, a1, v2); // 0x4b9648
        v3 = v5;
        if ((int32_t)v5 != 0) {
            // 0x4b961e
            result = v3 & 0xffffffff;
            return result;
        }
        result = result2;
    }
  lab_0x4b9621:
    // 0x4b9621
    return result;
}

// Address range: 0x4bf9e0 - 0x4bfab9
int64_t function_4bf9e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4bf9e0
    int64_t v1; // 0x4bf9e0
    int64_t v2; // 0x4bf9e0
    int64_t v3; // 0x4bf9e0
    int64_t v4; // 0x4bf9e0
    if (a1 % 2 != 0) {
        int64_t v5 = a1 + 1; // 0x4bfa80
        *(char *)a1 = 0;
        v3 = (int64_t)&g4 & -0x10000 | (int64_t)&g3;
        v1 = v5;
        v4 = (int64_t)&g4 & -0x10000 | (int64_t)&g3;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x4bf9fc;
        } else {
            goto lab_0x4bfa98;
        }
    } else {
        // 0x4bf9f2
        v3 = (int64_t)&g4;
        v1 = a1;
        v4 = (int64_t)&g4;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4bfa98;
        } else {
            goto lab_0x4bf9fc;
        }
    }
  lab_0x4bf9fc:;
    int64_t v6 = v3; // 0x4bfa00
    int64_t v7 = v1; // 0x4bfa00
    if ((v1 & 4) != 0) {
        // 0x4bfab0
        *(int32_t *)v1 = 0;
        int64_t result; // 0x4bf9e0
        return result;
    }
    goto lab_0x4bfa06;
  lab_0x4bfa98:
    // 0x4bfa98
    *(int16_t *)v2 = 0;
    int64_t v13 = v2 + 2; // 0x4bfa9d
    v6 = v4 + 0xfffffffe & 0xffffffff;
    v7 = v13;
    if ((v13 & 4) != 0) {
        // 0x4bfab0
        int64_t v14; // 0x4bf9e0
        int64_t v15 = v14;
        *(int32_t *)v15 = 0;
        int64_t result2; // 0x4bf9e0
        return result2;
    }
    goto lab_0x4bfa06;
  lab_0x4bfa06:;
    uint64_t v8 = v6 / 8 % 0x20000000; // 0x4bfa0a
    __asm_rep_stosq_memset((char *)v7, 0, v8);
    bool v9; // 0x4bf9e0
    int64_t v10 = v8 * (v9 ? -8 : 8) + v7; // 0x4bfa11
    int64_t v11 = v10; // 0x4bfa14
    if ((v6 & 4) != 0) {
        // 0x4bfa16
        *(int32_t *)v10 = 0;
        v11 = v10 + 4;
    }
    int64_t v12 = v11; // 0x4bfa24
    if ((v6 & 2) != 0) {
        // 0x4bfa26
        *(int16_t *)v11 = 0;
        v12 = v11 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x4bfa34
        *(char *)v12 = 0;
    }
    // 0x4bfa37
    function_4cdde0(a1, 0);
    function_4bf990(a1, 0x4bffd0, 0, 32, 1);
    return function_4bf990(a1, 0x4c0070, 0, 4, 0);
}

// Address range: 0x4c8242 - 0x4c831d
int64_t function_4c8242(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    // 0x4c8242
    int64_t v1; // 0x4c8242
    int64_t v2 = v1;
    int64_t v3 = v2 & -256 | (int64_t)(*(char *)(2 * a4 - 62) | (char)v2); // 0x4c8242
    int64_t v4 = v1 + a6; // 0x4c8246
    uint32_t v5 = (int32_t)a5; // 0x4c8249
    int32_t v6 = v5 / 0x400000 | 1024 * v5; // 0x4c8249
    uint32_t v7 = (int32_t)(a4 ^ a3) + (int32_t)a2; // 0x4c8255
    uint32_t v8 = 2 * (int32_t)v1 + (int32_t)(v1 ^ v4); // 0x4c825b
    int32_t v9 = a1;
    uint32_t v10 = (v7 / 0x1000000 | 256 * v7) + v9; // 0x4c8267
    int32_t v11 = v1; // 0x4c8269
    uint32_t v12 = (v8 / 0x80000 | 0x2000 * v8) + v11; // 0x4c8269
    uint32_t v13 = (int32_t)a4; // 0x4c8278
    int32_t v14 = v13 / 0x400000 | 1024 * v13; // 0x4c827f
    int32_t v15; // 0x4c8242
    uint32_t v16 = v9 - 0x56ac02b2 + (v10 ^ (-1 - v6 | v13)) + v15; // 0x4c8284
    uint32_t v17 = (int32_t)v4; // 0x4c8289
    int32_t v18 = v17 / 0x400000 | 1024 * v17; // 0x4c8289
    int32_t v19 = (v16 / 0x8000000 | 32 * v16) + (int32_t)v3; // 0x4c8295
    int64_t v20 = (int64_t)v15 + 0xa953fd4e + v3; // 0x4c8297
    uint32_t v21 = (v12 ^ (int32_t)(v4 ^ v1)) + v11 + v15; // 0x4c829e
    int32_t v22 = v1; // 0x4c82ae
    int32_t v23 = (v21 / 0x200000 | 2048 * v21) + v22; // 0x4c82ae
    *(int32_t *)(v1 + 12) = v18 + (v10 / 0x400000 | 1024 * v10) + v15;
    uint32_t v24 = v22 + (int32_t)v1 + (v12 ^ v18 ^ v23); // 0x4c82cc
    int32_t v25 = v1; // 0x4c82d3
    *(int32_t *)(v1 + 16) = v14 + v25 + v15;
    uint32_t v26 = (v19 ^ (v10 | -1 - v14)) + (int32_t)v20; // 0x4c82ef
    *(int32_t *)(v1 + 20) = v6 + v25 + v15 + (v24 / 0x200000 | 2048 * v24);
    *(int32_t *)(v1 + 24) = v15 + v6 + v23 + (v26 / 0x4000000 | 64 * v26);
    *(int32_t *)(v1 + 8) = (v12 / 0x400000 | 1024 * v12) + v15 + v19;
    return v20 & 0xffffffff;
}

// Address range: 0x5088b0 - 0x50898b
int64_t function_5088b0(int64_t a1, int64_t str, int64_t size, int64_t format, int64_t a5, int64_t a6) {
    // 0x5088b0
    int64_t v1; // 0x5088b0
    if ((char)v1 != 0) {
        // 0x5088d3
        int128_t v2; // 0x5088b0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int64_t v3 = __readfsqword(40); // 0x50890a
    struct __locale_struct * v4 = __uselocale((struct __locale_struct *)a1); // 0x50891d
    int64_t v5 = 32; // bp-248, 0x508943
    uint32_t chars_printed = eac_retdec_vsnprintf((char *)str, (int32_t)size, (char *)format, (int64_t)&v5); // 0x508957
    __uselocale(v4);
    if (v3 == __readfsqword(40)) {
        // 0x508978
        return chars_printed;
    }
    // 0x508986
    __stack_chk_fail();
    return (int64_t)&g7;
}
