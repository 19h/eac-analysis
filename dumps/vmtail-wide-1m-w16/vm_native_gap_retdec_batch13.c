/*
 * Targeted RetDec C for native executable gap queue batch 13.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4b188-0x4b2d2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3810-0x4c395a rank=- name=- kind=- bytes=- uncovered=-
 *   0x556cf0-0x556e3a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c0d4-0x4c21c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c592-0x4c6da rank=- name=- kind=- bytes=- uncovered=-
 *   0x633cc-0x63514 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ff460-0x4ff5a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5012d0-0x501417 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f250-0x54f397 rank=- name=- kind=- bytes=- uncovered=-
 *   0x552590-0x5526d7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25712-0x25856 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2588a-0x259ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x27e7a-0x27fbe rank=- name=- kind=- bytes=- uncovered=-
 *   0x45a3e-0x45b82 rank=- name=- kind=- bytes=- uncovered=-
 *   0x713da-0x7151e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d30d0-0x4d3213 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_21a2d();
int64_t function_24ce0();
int64_t function_24cec();
int64_t function_254fe();
int64_t function_25712();
int64_t function_25856();
int64_t function_2588a();
int64_t function_25e67();
int64_t function_2601b();
int64_t function_260ec();
int64_t function_260f8();
int64_t function_26206();
int64_t function_27df1();
int64_t function_27e7a();
int64_t function_45788();
int64_t function_45794();
int64_t function_45a3e();
int64_t function_4aa26();
int64_t function_4aaa0();
int64_t function_4abec();
int64_t function_4afd4();
int64_t function_4b188();
int64_t function_4bf94();
int64_t function_4c0d4();
int64_t function_4c16b0();
int64_t function_4c1d60();
int64_t function_4c1df0();
int64_t function_4c1e70();
int64_t function_4c28f0();
int64_t function_4c2a20();
int64_t function_4c3810();
int64_t function_4c592();
int64_t function_4d2f80();
int64_t function_4d30d0();
int64_t function_4d30e0();
int64_t function_4d3110();
int64_t function_4d31ca();
int64_t function_4d31e5();
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f17c0();
int64_t function_4fbd10();
int64_t function_4ff460();
int64_t function_5012d0();
int64_t function_548990();
int64_t function_54d830();
int64_t function_54ed10();
int64_t function_54f250();
int64_t function_552550();
int64_t function_552590();
int64_t function_556cf0();
int64_t function_5690a0();
int64_t function_63286();
int64_t function_633cc();
int64_t function_70ef4();
int64_t function_7100a();
int64_t function_713da();
int64_t function_7151e();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x25712 - 0x25856
int64_t function_25712(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25712
    if (a4 == a3) {
        // 0x25855
        int64_t result; // 0x25712
        return result;
    }
    uint64_t v1 = a4 - a3; // 0x2572b
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x25738
    int64_t v3 = *v2; // 0x25738
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x2573c
    if (*v4 - v3 < v1) {
        int64_t v5 = function_25856(); // 0x257ed
        int64_t v6 = function_24cec(v5); // 0x257f8
        int64_t v7 = function_2601b(a2, *v2, function_21a2d(a3, a4, function_2601b(v5, a2, v6))); // 0x25828
        int64_t result2 = function_24ce0(a2); // 0x25833
        *(int64_t *)a1 = v6;
        *v2 = v7;
        *v4 = v6 + v5;
        return result2;
    }
    uint64_t v8 = v3 - a2; // 0x25754
    int64_t v9; // 0x25712
    if (v1 >= v8) {
        int64_t v10 = v8 + a3; // 0x2578c
        function_21a2d(v10, a4, v3);
        int64_t v11 = *v2 + v1 - v8; // 0x257b2
        *v2 = v11;
        function_21a2d(a2, v3, v11);
        *v2 = *v2 + v8;
        v9 = v10;
    } else {
        int64_t v12 = v3 - v1; // 0x25765
        function_21a2d(v12, v3, v3);
        *v2 = *v2 + v1;
        function_25e67(a2, v12, v3);
        v9 = a4;
    }
    // 0x257cd
    return function_21a2d(a3, v9, a2);
}

// Address range: 0x2588a - 0x259ce
int64_t function_2588a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2588a
    if (a4 == a3) {
        // 0x259cd
        int64_t result; // 0x2588a
        return result;
    }
    uint64_t v1 = a4 - a3; // 0x258a3
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x258b0
    int64_t v3 = *v2; // 0x258b0
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x258b4
    if (*v4 - v3 < v1) {
        int64_t v5 = function_25856(); // 0x25965
        int64_t v6 = function_24cec(v5); // 0x25970
        int64_t v7 = function_2601b(a2, *v2, function_21a2d(a3, a4, function_2601b(v5, a2, v6))); // 0x259a0
        int64_t result2 = function_24ce0(a2); // 0x259ab
        *(int64_t *)a1 = v6;
        *v2 = v7;
        *v4 = v6 + v5;
        return result2;
    }
    uint64_t v8 = v3 - a2; // 0x258cc
    int64_t v9; // 0x2588a
    if (v1 >= v8) {
        int64_t v10 = v8 + a3; // 0x25904
        function_21a2d(v10, a4, v3);
        int64_t v11 = *v2 + v1 - v8; // 0x2592a
        *v2 = v11;
        function_21a2d(a2, v3, v11);
        *v2 = *v2 + v8;
        v9 = v10;
    } else {
        int64_t v12 = v3 - v1; // 0x258dd
        function_21a2d(v12, v3, v3);
        *v2 = *v2 + v1;
        function_25e67(a2, v12, v3);
        v9 = a4;
    }
    // 0x25945
    return function_21a2d(a3, v9, a2);
}

// Address range: 0x27e7a - 0x27fbe
int64_t function_27e7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27e7a
    if (a4 == a3) {
        // 0x27fbd
        int64_t result; // 0x27e7a
        return result;
    }
    uint64_t v1 = a4 - a3; // 0x27e93
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x27ea0
    int64_t v3 = *v2; // 0x27ea0
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x27ea4
    if (*v4 - v3 < v1) {
        int64_t v5 = function_25856(); // 0x27f55
        int64_t v6 = function_260f8(v5); // 0x27f60
        int64_t v7 = function_2601b(a2, *v2, function_21a2d(a3, a4, function_2601b(v5, a2, v6))); // 0x27f90
        int64_t result2 = function_260ec(a2); // 0x27f9b
        *(int64_t *)a1 = v6;
        *v2 = v7;
        *v4 = v6 + v5;
        return result2;
    }
    uint64_t v8 = v3 - a2; // 0x27ebc
    int64_t v9; // 0x27e7a
    if (v1 >= v8) {
        int64_t v10 = v8 + a3; // 0x27ef4
        function_26206(v10, a4, v3);
        int64_t v11 = *v2 + v1 - v8; // 0x27f1a
        *v2 = v11;
        function_26206(a2, v3, v11);
        *v2 = *v2 + v8;
        v9 = v10;
    } else {
        int64_t v12 = v3 - v1; // 0x27ecd
        function_26206(v12, v3, v3);
        *v2 = *v2 + v1;
        function_27df1(a2, v12, v3);
        v9 = a4;
    }
    // 0x27f35
    return function_21a2d(a3, v9, a2);
}

// Address range: 0x45a3e - 0x45b82
int64_t function_45a3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45a3e
    if (a4 == a3) {
        // 0x45b81
        int64_t result; // 0x45a3e
        return result;
    }
    uint64_t v1 = a4 - a3; // 0x45a57
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x45a64
    int64_t v3 = *v2; // 0x45a64
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x45a68
    if (*v4 - v3 < v1) {
        int64_t v5 = function_25856(); // 0x45b19
        int64_t v6 = function_45794(v5); // 0x45b24
        int64_t v7 = function_2601b(a2, *v2, function_21a2d(a3, a4, function_2601b(v5, a2, v6))); // 0x45b54
        int64_t result2 = function_45788(a2); // 0x45b5f
        *(int64_t *)a1 = v6;
        *v2 = v7;
        *v4 = v6 + v5;
        return result2;
    }
    uint64_t v8 = v3 - a2; // 0x45a80
    int64_t v9; // 0x45a3e
    if (v1 >= v8) {
        int64_t v10 = v8 + a3; // 0x45ab8
        function_21a2d(v10, a4, v3);
        int64_t v11 = *v2 + v1 - v8; // 0x45ade
        *v2 = v11;
        function_2601b(a2, v3, v11);
        *v2 = *v2 + v8;
        v9 = v10;
    } else {
        int64_t v12 = v3 - v1; // 0x45a91
        function_2601b(v12, v3, v3);
        *v2 = *v2 + v1;
        function_25e67(a2, v12, v3);
        v9 = a4;
    }
    // 0x45af9
    return function_21a2d(a3, v9, a2);
}

// Address range: 0x4b188 - 0x4b2d2
int64_t function_4b188(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b188
    int64_t v1; // 0x4b188
    int32_t v2 = v1;
    int64_t v3 = __readfsqword(40); // 0x4b190
    int64_t v4 = a2; // bp-48, 0x4b1a0
    if (v2 >= 0) {
        if (v2 < 3) {
            // 0x4b1ba
            function_4afd4();
        } else {
            if (v2 == 3) {
                // 0x4b1b3
                function_4abec();
            }
        }
    }
    int64_t * v5 = (int64_t *)(v4 + 56);
    int64_t v6; // bp-40, 0x4b188
    function_729b6(&v6, *v5 + 384);
    int64_t v7 = *v5; // 0x4b1e3
    uint64_t v8 = *(int64_t *)(v7 + 336); // 0x4b1e7
    int64_t v9 = v7 + 328; // 0x4b1ee
    uint64_t v10 = v4 % v8;
    int64_t v11 = function_4aa26(v9, v10, &v4); // 0x4b203
    int64_t v12; // 0x4b188
    int64_t * v13; // 0x4b217
    int64_t v14; // 0x4b217
    int64_t * v15; // 0x4b21e
    int64_t v16; // 0x4b21e
    int64_t * v17; // 0x4b221
    if (v11 == 0) {
        goto lab_0x4b28e;
    } else {
        int64_t v18 = *(int64_t *)v9; // 0x4b210
        v13 = (int64_t *)v11;
        v14 = *v13;
        v15 = (int64_t *)v14;
        v16 = *v15;
        v17 = (int64_t *)(v18 + 8 * v10);
        int64_t v19 = *v17; // 0x4b221
        if (v11 != v19) {
            if (v16 != 0) {
                uint64_t v20 = *(int64_t *)(v16 + 8) % v8;
                if (v10 != v20) {
                    // 0x4b278
                    *(int64_t *)(8 * v20 + v18) = v11;
                }
            }
            goto lab_0x4b27c;
        } else {
            // 0x4b226
            v12 = v19;
            if (v16 == 0) {
                goto lab_0x4b249;
            } else {
                uint64_t v21 = *(int64_t *)(v16 + 8) % v8;
                if (v10 == v21) {
                    goto lab_0x4b27c;
                } else {
                    // 0x4b245
                    *(int64_t *)(8 * v21 + v18) = v11;
                    v12 = *v17;
                    goto lab_0x4b249;
                }
            }
        }
    }
  lab_0x4b28e:
    // 0x4b28e
    function_729ce(&v6);
    if (v4 != 0) {
        // 0x4b2a0
        function_4bf94(v4 + 16);
        function_4eeb30(v4, 64);
    }
    int64_t result = 0; // 0x4b2c4
    if (v3 != __readfsqword(40)) {
        // 0x4b2c6
        __stack_chk_fail();
        result = (int64_t)&g3;
    }
    // 0x4b2cb
    return result;
  lab_0x4b27c:
    // 0x4b27c
    *v13 = *v15;
    function_4eeb50(v14, v11);
    int64_t * v22 = (int64_t *)(v7 + 352); // 0x4b287
    *v22 = *v22 - 1;
    goto lab_0x4b28e;
  lab_0x4b249:;
    int64_t v23 = v7 + 344; // 0x4b249
    if (v12 == v23) {
        // 0x4b255
        *(int64_t *)v23 = v16;
    }
    // 0x4b25c
    *v17 = 0;
    goto lab_0x4b27c;
}

// Address range: 0x4c0d4 - 0x4c21c
int64_t function_4c0d4(int64_t a1, int64_t a2, uint64_t a3, int64_t result) {
    int64_t v1 = a1 + 32; // 0x4c0ef
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x4c0f7
    uint64_t v3 = *v2; // 0x4c0f7
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x4c0fb
    int64_t v5 = function_4fbd10(v1, *v4, v3, 1); // 0x4c0ff
    int64_t v6 = 1; // 0x4c106
    int64_t v7 = v1; // 0x4c106
    int64_t v8 = a2; // 0x4c106
    if ((char)v5 != 0) {
        int64_t v9 = a1 + 48; // 0x4c113
        int64_t v10; // 0x4c0d4
        int64_t v11; // 0x4c0d4
        if (v3 != 1) {
            int64_t v12 = function_4aaa0(v3); // 0x4c129
            v10 = v3;
            v11 = v12;
        } else {
            // 0x4c119
            *(int64_t *)v9 = 0;
            v10 = v1;
            v11 = v9;
        }
        int64_t v13 = a1 + 16; // 0x4c131
        int64_t * v14 = (int64_t *)v13; // 0x4c135
        int64_t v15 = *v14; // 0x4c135
        *v14 = 0;
        int64_t v16 = 0; // 0x4c146
        int64_t v17 = v10; // 0x4c146
        if (v15 != 0) {
            int64_t v18 = 0;
            int64_t * v19 = (int64_t *)v15; // 0x4c14e
            int64_t v20 = *v19; // 0x4c14e
            int64_t v21 = (int64_t)*(int16_t *)(v15 + 8) % v3; // 0x4c151
            int64_t * v22 = (int64_t *)(8 * v21 + v11); // 0x4c159
            int64_t v23 = *v22; // 0x4c159
            int64_t v24; // 0x4c0d4
            if (v23 != 0) {
                // 0x4c184
                *v19 = *(int64_t *)v23;
                *(int64_t *)*v22 = v15;
                v24 = v18;
            } else {
                // 0x4c161
                *v19 = *v14;
                *v14 = v15;
                *v22 = v13;
                v24 = v21;
                if (*v19 != 0) {
                    // 0x4c17d
                    *(int64_t *)(8 * v18 + v11) = v15;
                    v24 = v21;
                }
            }
            // 0x4c175
            v16 = v24;
            v17 = 0;
            while (v20 != 0) {
                int64_t v25 = v20;
                v18 = v24;
                v19 = (int64_t *)v25;
                v20 = *v19;
                v21 = (int64_t)*(int16_t *)(v25 + 8) % v3;
                v22 = (int64_t *)(8 * v21 + v11);
                v23 = *v22;
                if (v23 != 0) {
                    // 0x4c184
                    *v19 = *(int64_t *)v23;
                    *(int64_t *)*v22 = v25;
                    v24 = v18;
                } else {
                    // 0x4c161
                    *v19 = *v14;
                    *v14 = v25;
                    *v22 = v13;
                    v24 = v21;
                    if (*v19 != 0) {
                        // 0x4c17d
                        *(int64_t *)(8 * v18 + v11) = v25;
                        v24 = v21;
                    }
                }
                // 0x4c175
                v16 = v24;
                v17 = 0;
            }
        }
        // 0x4c195
        v7 = v17;
        if (v7 != v9) {
            // 0x4c19d
            function_4eeb50(v7, v16);
        }
        // 0x4c1a2
        *(int64_t *)a1 = v11;
        *v4 = v3;
        v6 = 0;
        v8 = a3 % v3;
    }
    int64_t * v26 = (int64_t *)(8 * v8 + v7); // 0x4c1bf
    int64_t v27 = *v26; // 0x4c1bf
    if (v27 != 0) {
        // 0x4c1c8
        *(int64_t *)result = *(int64_t *)v27;
        *(int64_t *)*v26 = result;
        // 0x4c209
        *v2 = *v2 + 1;
        return result;
    }
    int64_t v28 = a1 + 16; // 0x4c1db
    int64_t * v29 = (int64_t *)v28; // 0x4c1db
    *(int64_t *)result = *v29;
    *v29 = result;
    if (v6 != 0) {
        uint16_t v30 = *(int16_t *)(v6 | 8); // 0x4c1f3
        *(int64_t *)(8 * ((int64_t)v30 % *v4) + v7) = result;
    }
    // 0x4c201
    *v26 = v28;
    // 0x4c209
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0x4c592 - 0x4c6da
int64_t function_4c592(int64_t a1, int64_t a2, uint64_t a3, int64_t result) {
    int64_t v1 = a1 + 32; // 0x4c5ad
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x4c5b5
    uint64_t v3 = *v2; // 0x4c5b5
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x4c5b9
    int64_t v5 = function_4fbd10(v1, *v4, v3, 1); // 0x4c5bd
    int64_t v6 = 1; // 0x4c5c4
    int64_t v7 = v1; // 0x4c5c4
    int64_t v8 = a2; // 0x4c5c4
    if ((char)v5 != 0) {
        int64_t v9 = a1 + 48; // 0x4c5d1
        int64_t v10; // 0x4c592
        int64_t v11; // 0x4c592
        if (v3 != 1) {
            int64_t v12 = function_4aaa0(v3); // 0x4c5e7
            v10 = v3;
            v11 = v12;
        } else {
            // 0x4c5d7
            *(int64_t *)v9 = 0;
            v10 = v1;
            v11 = v9;
        }
        int64_t v13 = a1 + 16; // 0x4c5ef
        int64_t * v14 = (int64_t *)v13; // 0x4c5f3
        int64_t v15 = *v14; // 0x4c5f3
        *v14 = 0;
        int64_t v16 = 0; // 0x4c604
        int64_t v17 = v10; // 0x4c604
        if (v15 != 0) {
            int64_t v18 = 0;
            int64_t * v19 = (int64_t *)v15; // 0x4c60c
            int64_t v20 = *v19; // 0x4c60c
            int64_t v21 = *(int64_t *)(v15 + 8) % v3;
            int64_t * v22 = (int64_t *)(8 * v21 + v11); // 0x4c617
            int64_t v23 = *v22; // 0x4c617
            int64_t v24; // 0x4c592
            if (v23 != 0) {
                // 0x4c642
                *v19 = *(int64_t *)v23;
                *(int64_t *)*v22 = v15;
                v24 = v18;
            } else {
                // 0x4c61f
                *v19 = *v14;
                *v14 = v15;
                *v22 = v13;
                v24 = v21;
                if (*v19 != 0) {
                    // 0x4c63b
                    *(int64_t *)(8 * v18 + v11) = v15;
                    v24 = v21;
                }
            }
            // 0x4c633
            v16 = v24;
            v17 = 0;
            while (v20 != 0) {
                int64_t v25 = v20;
                v18 = v24;
                v19 = (int64_t *)v25;
                v20 = *v19;
                v21 = *(int64_t *)(v25 + 8) % v3;
                v22 = (int64_t *)(8 * v21 + v11);
                v23 = *v22;
                if (v23 != 0) {
                    // 0x4c642
                    *v19 = *(int64_t *)v23;
                    *(int64_t *)*v22 = v25;
                    v24 = v18;
                } else {
                    // 0x4c61f
                    *v19 = *v14;
                    *v14 = v25;
                    *v22 = v13;
                    v24 = v21;
                    if (*v19 != 0) {
                        // 0x4c63b
                        *(int64_t *)(8 * v18 + v11) = v25;
                        v24 = v21;
                    }
                }
                // 0x4c633
                v16 = v24;
                v17 = 0;
            }
        }
        // 0x4c653
        v7 = v17;
        if (v7 != v9) {
            // 0x4c65b
            function_4eeb50(v7, v16);
        }
        // 0x4c660
        *(int64_t *)a1 = v11;
        *v4 = v3;
        v6 = 0;
        v8 = a3 % v3;
    }
    int64_t * v26 = (int64_t *)(8 * v8 + v7); // 0x4c67d
    int64_t v27 = *v26; // 0x4c67d
    if (v27 != 0) {
        // 0x4c686
        *(int64_t *)result = *(int64_t *)v27;
        *(int64_t *)*v26 = result;
        // 0x4c6c7
        *v2 = *v2 + 1;
        return result;
    }
    int64_t v28 = a1 + 16; // 0x4c699
    int64_t * v29 = (int64_t *)v28; // 0x4c699
    *(int64_t *)result = *v29;
    *v29 = result;
    if (v6 != 0) {
        // 0x4c6b1
        *(int64_t *)(8 * (*(int64_t *)(v6 | 8) % *v4) + v7) = result;
    }
    // 0x4c6bf
    *v26 = v28;
    // 0x4c6c7
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0x633cc - 0x63514
int64_t function_633cc(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x633ee
    int64_t v2 = 0x3ffffffffffffff; // 0x63416
    int64_t v3; // 0x633cc
    int64_t v4; // 0x633cc
    if (v2 > 0x3ffffffffffffff | v2 < *v1 - a1 >> 6) {
        goto lab_0x63500;
    } else {
        // 0x63425
        v3 = v2;
        v4 = 0;
        if (v2 != 0) {
            goto lab_0x63500;
        } else {
            goto lab_0x63431;
        }
    }
  lab_0x63500:;
    int64_t v5 = function_4efd30(64 * v2); // 0x63507
    v3 = v2;
    v4 = v5;
    goto lab_0x63431;
  lab_0x63431:;
    int64_t v6 = v4 + a2 - a1; // 0x63431
    function_63286(v6, a3);
    int64_t v7 = a3; // 0x63452
    int64_t v8 = v4; // 0x63452
    if (v6 != a2) {
        int64_t v9 = v4 + 64; // 0x63447
        int64_t v10 = v6 + 64; // 0x63457
        function_63286(v4, v6);
        int64_t v11 = v9; // 0x63452
        v7 = v6;
        v8 = v9;
        while (v10 != a2) {
            int64_t v12 = v10;
            v9 = v11 + 64;
            v10 = v12 + 64;
            function_63286(v11, v12);
            v11 = v9;
            v7 = v12;
            v8 = v9;
        }
    }
    int64_t v13 = *v1; // 0x63469
    int64_t v14 = v4 + 64 + (a2 - v6 & -64); // 0x63477
    int64_t v15 = a2; // 0x63482
    int64_t v16 = v7; // 0x63482
    int64_t v17 = v8; // 0x63482
    int64_t v18 = v14; // 0x63482
    if (v13 != a2) {
        int64_t v19 = a2;
        int64_t v20 = v14;
        int64_t v21 = v19 + 64; // 0x63493
        function_63286(v20, v19);
        int64_t v22 = v20 + 64; // 0x634a5
        while (v13 != v21) {
            // 0x63484
            v19 = v21;
            v20 = v22;
            v21 = v19 + 64;
            function_63286(v20, v19);
            v22 = v20 + 64;
        }
        // 0x6347f
        v15 = *v1;
        v16 = v19;
        v17 = v20;
        v18 = v22;
    }
    int64_t v23 = v18; // 0x634bd
    int64_t v24 = v15; // 0x634bd
    if (v15 != v17) {
        int64_t v25 = v17 + 64; // 0x634c2
        int64_t v26 = v25; // 0x634bd
        v23 = function_254fe(v17);
        v24 = v17;
        while (v15 != v25) {
            int64_t v27 = v26;
            v25 = v27 + 64;
            v26 = v25;
            v23 = function_254fe(v27);
            v24 = v27;
        }
    }
    int64_t result = v23; // 0x634d4
    if (v24 != 0) {
        // 0x634d6
        result = function_4eeb50(v24, v16);
    }
    // 0x634db
    *(int64_t *)a1 = v4;
    *v1 = v14 - a2 + v13;
    *(int64_t *)(a1 + 16) = v4 + 64 * v3;
    return result;
}

// Address range: 0x713da - 0x7151e
int64_t function_713da(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x713da
    if (a4 == a3) {
        // 0x7151d
        int64_t result; // 0x713da
        return result;
    }
    uint64_t v1 = a4 - a3; // 0x713f3
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x71400
    int64_t v3 = *v2; // 0x71400
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x71404
    if (*v4 - v3 < v1) {
        int64_t v5 = function_25856(); // 0x714b5
        int64_t v6 = function_7100a(v5); // 0x714c0
        int64_t v7 = function_2601b(a2, *v2, function_7151e(a3, a4, function_2601b(v5, a2, v6))); // 0x714f0
        int64_t result2 = function_70ef4(a2); // 0x714fb
        *(int64_t *)a1 = v6;
        *v2 = v7;
        *v4 = v6 + v5;
        return result2;
    }
    uint64_t v8 = v3 - a2; // 0x7141c
    int64_t v9; // 0x713da
    if (v1 >= v8) {
        int64_t v10 = v8 + a3; // 0x71454
        function_7151e(v10, a4, v3);
        int64_t v11 = *v2 + v1 - v8; // 0x7147a
        *v2 = v11;
        function_2601b(a2, v3, v11);
        *v2 = *v2 + v8;
        v9 = v10;
    } else {
        int64_t v12 = v3 - v1; // 0x7142d
        function_2601b(v12, v3, v3);
        *v2 = *v2 + v1;
        function_25e67(a2, v12, v3);
        v9 = a4;
    }
    // 0x71495
    return function_7151e(a3, v9, a2);
}

// Address range: 0x4c3810 - 0x4c395a
int64_t function_4c3810(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4c3810
    int64_t v1; // bp-136, 0x4c3810
    function_4c1d60(&v1);
    function_4c1e70(&v1);
    function_4c28f0(&v1, a4, a5);
    function_4c28f0(&v1, a3, 8);
    int64_t v2; // bp-152, 0x4c3810
    function_4c2a20(&v1, &v2);
    int64_t result; // 0x4c3810
    if (a2 < 17) {
        // 0x4c3874
        memcpy((int64_t *)a1, &v2, (int32_t)a2);
        function_4c1df0(&v1);
        int64_t v3 = (int64_t)&v2; // 0x4c3894
        *(char *)v3 = 0;
        v3++;
        result = v3;
        while (v3 != (int64_t)&v1) {
            // 0x4c3898
            *(char *)v3 = 0;
            v3++;
            result = v3;
        }
    } else {
        // 0x4c38b8
        *(int64_t *)a1 = v2;
        function_4c1e70(&v1);
        int64_t v4 = (int64_t)&v2; // 0x4c38dd
        function_4c28f0(&v1, v4, 16);
        function_4c28f0(&v1, a4, a5);
        function_4c28f0(&v1, a3, 8);
        function_4c2a20(&v1, &v2);
        int64_t v5 = a2 < 32 ? a2 + 0xfffffff0 : 16; // 0x4c3928
        memcpy((int64_t *)(a1 + 16), &v2, (int32_t)v5);
        function_4c1df0(&v1);
        int64_t v6 = v4; // 0x4c3943
        *(char *)v6 = 0;
        v6++;
        result = v6;
        while (v6 != (int64_t)&v1) {
            // 0x4c3948
            *(char *)v6 = 0;
            v6++;
            result = v6;
        }
    }
    // 0x4c38a4
    return result;
}

// Address range: 0x4d30d0 - 0x4d30da
int64_t function_4d30d0(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4d30d0
    return function_4d2f80();
}

// Address range: 0x4d30e0 - 0x4d3106
int64_t function_4d30e0(int64_t a1) {
    if (a1 == 0) {
        // 0x4d3104
        int64_t result; // 0x4d30e0
        return result;
    }
    // 0x4d30e9
    function_4c16b0();
    int64_t result2 = a1 + 128; // 0x4d30ee
    int64_t v1 = a1; // 0x4d30f5
    *(char *)v1 = 0;
    v1++;
    while (v1 != result2) {
        // 0x4d30f8
        *(char *)v1 = 0;
        v1++;
    }
    // 0x4d3104
    return result2;
}

// Address range: 0x4d3110 - 0x4d318f
int64_t function_4d3110(int64_t a1, int64_t file_path) {
    struct _IO_FILE * file = fopen((char *)file_path, "wb"); // 0x4d3126
    if (file == NULL) {
        // 0x4d3151
        return 0xfffffff9;
    }
    // 0x4d3133
    int64_t data; // bp-280, 0x4d3110
    int64_t v1; // 0x4d3110
    int64_t v2 = function_4d30d0(a1, &data, 256, v1, v1); // 0x4d313e
    int64_t v3 = v2 & 0xffffffff; // 0x4d3145
    int64_t v4 = v3; // 0x4d3147
    if ((int32_t)v2 == 0) {
        // 0x4d3160
        v4 = fwrite(&data, 1, 256, file) != 256 ? 0xfffffff9 : v3;
    }
    // 0x4d3149
    fclose(file);
    // 0x4d3151
    return v4 & 0xffffffff;
}

// Address range: 0x4d31ca - 0x4d31cb
int64_t function_4d31ca(void) {
    // 0x4d31ca
    int64_t result; // 0x4d31ca
    return result;
}

// Address range: 0x4d31e5 - 0x4d31e6
int64_t function_4d31e5(int64_t a1) {
    // 0x4d31e5
    int64_t result; // 0x4d31e5
    return result;
}

// Address range: 0x4ff460 - 0x4ff5a4
int64_t function_4ff460(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4ff479
    uint64_t v2 = *(int64_t *)(a1 + 40); // 0x4ff48c
    uint64_t v3 = *(int64_t *)(a1 + 32); // 0x4ff490
    int64_t v4 = (int32_t)a1 == -1 != v3 < v2;
    int64_t v5 = v4; // 0x4ff4af
    if (*(char *)(a1 + 170) != 0) {
        int64_t * v6 = (int64_t *)(a1 + 200); // 0x4ff4b1
        int64_t v7 = *v6; // 0x4ff4b1
        if (v7 == 0) {
            // 0x4ff545
            return v3 >= v2 ? v2 : a1;
        }
        int64_t v8 = *(int64_t *)v7; // 0x4ff4c1
        v5 = v4;
        if ((int32_t)a1 == -1 != v3 < v2 == (char)v8 == 0) {
            int64_t v9 = v8 & 0xffffffff; // 0x4ff4c9
            int64_t v10; // bp-200, 0x4ff460
            int64_t v11; // 0x4ff460
            int64_t v12 = v11 - (int64_t)&v10;
            int64_t v13 = a1 + 104;
            int32_t v14 = v8; // 0x4ff504
            int32_t v15 = v14; // 0x4ff507
            int64_t v16 = v9; // 0x4ff507
            if (v14 != 2) {
                int64_t v17 = v7; // 0x4ff50c
                while (v12 >= 1 && v15 <= 1) {
                    // 0x4ff56d
                    int64_t v18; // bp-72, 0x4ff460
                    int64_t v19 = function_4f17c0(v13, &v10, v12, &v18, v12); // 0x4ff57f
                    v16 = v9;
                    if (v12 != v19) {
                        goto lab_0x4ff523_2;
                    }
                    // 0x4ff591
                    v17 = v13;
                    if (v15 != 1) {
                        // break -> 0x4ff50e
                        break;
                    }
                    int64_t v20 = *v6;
                    int32_t v21 = (int32_t)*(int64_t *)v20; // 0x4ff504
                    v15 = v21;
                    v16 = v9;
                    if (v21 == 2) {
                        goto lab_0x4ff523_2;
                    }
                    v17 = v20;
                }
                // 0x4ff50e
                v16 = v8 & 0xffffff00 | (int64_t)((int32_t)v17 != -1);
            }
          lab_0x4ff523_2:
            // 0x4ff523
            v5 = v16 & 0xffffffff;
        }
    }
    int64_t result = v5; // 0x4ff543
    if (v1 != __readfsqword(40)) {
        // 0x4ff59f
        __stack_chk_fail();
        result = (int64_t)&g3;
    }
    // 0x4ff545
    return result;
}

// Address range: 0x5012d0 - 0x501414
int64_t function_5012d0(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x5012e9
    uint64_t v2 = *(int64_t *)(a1 + 40); // 0x5012fc
    uint64_t v3 = *(int64_t *)(a1 + 32); // 0x501300
    int64_t v4 = (int32_t)a1 == -1 != v3 < v2;
    int64_t v5 = v4; // 0x50131f
    if (*(char *)(a1 + 170) != 0) {
        int64_t * v6 = (int64_t *)(a1 + 200); // 0x501321
        int64_t v7 = *v6; // 0x501321
        if (v7 == 0) {
            // 0x5013b5
            return v3 >= v2 ? v2 : a1;
        }
        int64_t v8 = *(int64_t *)v7; // 0x501331
        v5 = v4;
        if ((int32_t)a1 == -1 != v3 < v2 == (char)v8 == 0) {
            int64_t v9 = v8 & 0xffffffff; // 0x501339
            int64_t v10; // bp-200, 0x5012d0
            int64_t v11; // 0x5012d0
            int64_t v12 = v11 - (int64_t)&v10;
            int64_t v13 = a1 + 104;
            int32_t v14 = v8; // 0x501374
            int32_t v15 = v14; // 0x501377
            int64_t v16 = v9; // 0x501377
            if (v14 != 2) {
                int64_t v17 = v7; // 0x50137c
                while (v12 >= 1 && v15 <= 1) {
                    // 0x5013dd
                    int64_t v18; // bp-72, 0x5012d0
                    int64_t v19 = function_4f17c0(v13, &v10, v12, &v18, v12); // 0x5013ef
                    v16 = v9;
                    if (v12 != v19) {
                        goto lab_0x501393_2;
                    }
                    // 0x501401
                    v17 = v13;
                    if (v15 != 1) {
                        // break -> 0x50137e
                        break;
                    }
                    int64_t v20 = *v6;
                    int32_t v21 = (int32_t)*(int64_t *)v20; // 0x501374
                    v15 = v21;
                    v16 = v9;
                    if (v21 == 2) {
                        goto lab_0x501393_2;
                    }
                    v17 = v20;
                }
                // 0x50137e
                v16 = v8 & 0xffffff00 | (int64_t)((int32_t)v17 != -1);
            }
          lab_0x501393_2:
            // 0x501393
            v5 = v16 & 0xffffffff;
        }
    }
    int64_t result = v5; // 0x5013b3
    if (v1 != __readfsqword(40)) {
        // 0x50140f
        __stack_chk_fail();
        result = (int64_t)&g3;
    }
    // 0x5013b5
    return result;
}

// Address range: 0x54f250 - 0x54f394
int64_t function_54f250(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    if ((a4 & 4) != 0) {
        // 0x54f348
        function_54ed10();
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x54f27c
    int64_t result = 0; // 0x54f287
    if (*v1 == a1) {
      lab_0x54f2eb_3:
        // 0x54f2eb
        return result;
    }
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x54f28c
    result = 0;
    if (*v2 == a2) {
        return result;
    }
    uint64_t result2 = function_54d830(a1, a3); // 0x54f298
    uint32_t v3 = (int32_t)result2; // 0x54f29d
    while (v3 != -2) {
        // 0x54f2a6
        result = 2;
        if ((result2 & 0xffffffff) > a3) {
            return result;
        }
        // 0x54f2b1
        if (v3 > (int32_t)&g2) {
            // break -> 0x54f300
            break;
        }
        if (*v2 == a3) {
            // 0x54f390
            *(int64_t *)a1 = a1;
            return result2;
        }
        int64_t v4 = a4 % 2 == 0 ? (int64_t)llvm_bswap_i16((int16_t)result2) : result2;
        *(int64_t *)a2 = a3 + 2;
        *(int16_t *)a3 = (int16_t)v4;
        result = 0;
        if (*v1 == a1) {
            return result;
        }
        result = 0;
        if (*v2 == a3) {
            return result;
        }
        // 0x54f292
        result2 = function_54d830(a1, a3);
        v3 = (int32_t)result2;
    }
    // 0x54f358
    return (int32_t)a5 != 0 ? 2 : 1;
}

// Address range: 0x552590 - 0x5526d6
// From class:    std::collate_byname<char>
// Type:          virtual member function
int64_t function_552590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x552590
    int64_t v1; // bp-65, 0x552590
    int64_t v2 = (int64_t)&v1; // 0x5525b4
    __readfsqword(40);
    int64_t str = function_548990(a2, a3, v2); // 0x5525cc
    int64_t str2 = function_548990(a4, a5, v2); // 0x5525e5
    int64_t v3 = str - 24; // 0x5525ea
    int64_t v4 = str2 - 24; // 0x5525ee
    int64_t v5 = function_5690a0(a1, str, str2); // 0x552652
    int64_t v6 = v5 & 0xffffffff; // 0x552659
    int64_t v7 = v5; // 0x55265c
    int64_t result = v6; // 0x55265c
    if ((int32_t)v5 == 0) {
        int64_t v8 = *(int64_t *)v3 + str; // 0x5525ff
        int64_t v9 = *(int64_t *)v4 + str2; // 0x552602
        int64_t v10 = str + (int64_t)strlen((char *)str); // 0x55261c
        int64_t v11 = str2 + (int64_t)strlen((char *)str2); // 0x552624
        int64_t v12 = v6; // 0x55262b
        int64_t v13 = v11; // 0x55262b
        bool v14 = v8 == v10; // 0x55262b
        bool v15 = v9 == v11; // 0x55262b
        if (v8 == v10 || v9 == v11) {
          lab_0x552610:;
            bool v16 = v14;
            v7 = v13;
            result = v16 ? v16 == v15 ? v12 : 0xffffffff : 1;
        } else {
            int64_t str4 = v11 + 1; // 0x55263c
            int64_t str3 = v10 + 1; // 0x552640
            int64_t v17 = function_5690a0(a1, str3, str4); // 0x552652
            int64_t v18 = v17 & 0xffffffff; // 0x552659
            v7 = v17;
            result = v18;
            while ((int32_t)v17 == 0) {
                int64_t v19 = str3 + (int64_t)strlen((char *)str3); // 0x55261c
                int64_t v20 = str4 + (int64_t)strlen((char *)str4); // 0x552624
                v12 = v18;
                v13 = v20;
                v14 = v8 == v19;
                v15 = v9 == v20;
                if (v8 == v19 || v9 == v20) {
                    goto lab_0x552610;
                }
                str4 = v20 + 1;
                str3 = v19 + 1;
                v17 = function_5690a0(a1, str3, str4);
                v18 = v17 & 0xffffffff;
                v7 = v17;
                result = v18;
            }
        }
    }
    // 0x55265e
    int64_t result2; // 0x552590
    if (v4 != (int64_t)&g1) {
        // 0x5526c0
        result2 = function_552550(v4, v2);
        if (v3 == (int64_t)&g1) {
            // 0x55267f
            __readfsqword(40);
            return result;
        }
    } else {
        // 0x552672
        result2 = v7;
        if (v3 == (int64_t)&g1) {
            // 0x55267f
            __readfsqword(40);
            return result;
        }
    }
    // 0x5526d6
    return result2;
}

// Address range: 0x556cf0 - 0x556e31
int64_t function_556cf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000000000 * a3 >> 56; // 0x556cf3
    int64_t v2 = 0; // 0x556d13
    int64_t v3 = 0; // 0x556d13
    int64_t v4; // 0x556cf0
    int64_t v5; // 0x556cf0
    if (v5 - a5 > v1) {
        int64_t v6 = 0;
        int64_t v7 = 0;
        int64_t v8 = v1;
        v2 = v6;
        int64_t v9; // 0x556cf0
        v4 = v9;
        v3 = v7;
        if ((char)v8 >= 127) {
            // break (via goto) -> 0x556d41
            goto lab_0x556d41_2;
        }
        int64_t v10 = v1;
        int64_t v11 = v9 - v10; // 0x556d1e
        int64_t v12; // 0x556d2a
        int64_t v13; // 0x556d31
        while (a4 - 1 > v7) {
            // 0x556d2a
            v12 = v7 + 1;
            v13 = (int64_t)*(char *)(v12 + a3);
            v2 = v6;
            v4 = v11;
            v3 = v12;
            if (v11 - a5 <= v13) {
                // break (via goto) -> 0x556d41
                goto lab_0x556d41_2;
            }
            v7 = v12;
            v8 = v13;
            v2 = v6;
            v4 = v11;
            v3 = v7;
            if ((char)v8 >= 127) {
                // break (via goto) -> 0x556d41
                goto lab_0x556d41_2;
            }
            // 0x556d1e
            v10 = v13;
            v11 -= v10;
        }
        int64_t v14 = v6 + 1; // 0x556e28
        v2 = v14;
        v4 = v11;
        v3 = v7;
        while (v11 - a5 > v10) {
            // 0x556d15
            v6 = v14;
            v13 = v8;
            v8 = v13;
            v2 = v6;
            v4 = v11;
            v3 = v7;
            if ((char)v8 >= 127) {
                // break (via goto) -> 0x556d41
                goto lab_0x556d41_2;
            }
            // 0x556d1e
            v10 = v13;
            v11 -= v10;
            while (a4 - 1 > v7) {
                // 0x556d2a
                v12 = v7 + 1;
                v13 = (int64_t)*(char *)(v12 + a3);
                v2 = v6;
                v4 = v11;
                v3 = v12;
                if (v11 - a5 <= v13) {
                    // break (via goto) -> 0x556d41
                    goto lab_0x556d41_2;
                }
                v7 = v12;
                v8 = v13;
                v2 = v6;
                v4 = v11;
                v3 = v7;
                if ((char)v8 >= 127) {
                    // break (via goto) -> 0x556d41
                    goto lab_0x556d41_2;
                }
                // 0x556d1e
                v10 = v13;
                v11 -= v10;
            }
            // 0x556e28
            v14 = v6 + 1;
            v2 = v14;
            v4 = v11;
            v3 = v7;
        }
    }
  lab_0x556d41_2:;
    int64_t v15 = a1; // 0x556d44
    int64_t v16 = a5; // 0x556d44
    if (v4 != a5) {
        // 0x556d50
        bool v17; // 0x556cf0
        int64_t v18 = v17 ? -1 : 1; // 0x556d50
        int64_t v19 = a5; // 0x556d50
        int64_t v20 = a1; // 0x556cf0
        *(char *)v20 = *(char *)v19;
        v19 += v18;
        v20 += v18;
        while (v4 != v19) {
            // 0x556d50
            *(char *)v20 = *(char *)v19;
            v19 += v18;
            v20 += v18;
        }
        // 0x556d56
        v15 = a1 - a5 + v4;
        v16 = v4;
    }
    int64_t result = v15; // 0x556d6b
    int64_t v21 = v16; // 0x556d6b
    int64_t result2; // 0x556cf0
    if (v2 == 0) {
      lab_0x556dc0:
        // 0x556dc0
        if (v3 == 0) {
            // 0x556e1f
            return result;
        }
        int64_t v22 = result; // 0x556e19
        int64_t v23 = v21; // 0x556cf0
        int64_t v24 = v3;
        v24--;
        *(char *)v22 = (char)a2;
        unsigned char v25 = *(char *)(v24 + a3); // 0x556dcd
        result2 = v22;
        while (v25 >= 1) {
            int64_t v26 = v22 + 1; // 0x556dd2
            int64_t v27 = 0;
            *(char *)(v27 + v26) = *(char *)(v27 + v23);
            int64_t v28 = v27 + 1; // 0x556e01
            while (v27 != (int64_t)(v25 - 1)) {
                // 0x556df0
                v27 = v28;
                *(char *)(v27 + v26) = *(char *)(v27 + v23);
                v28 = v27 + 1;
            }
            int64_t v29 = (0x100000000000000 * (int64_t)v25 - 0x100000000000000 >> 56) + 1; // 0x556e0e
            v22 = v29 + v26;
            v23 += v29;
            result2 = v22;
            if (v24 == 0) {
                // break -> 0x556e1f
                break;
            }
            v24--;
            *(char *)v22 = (char)a2;
            v25 = *(char *)(v24 + a3);
            result2 = v22;
        }
    } else {
        int64_t v30 = v15; // 0x556db9
        int64_t v31 = v2;
        int64_t v32 = v16; // 0x556db2
        *(char *)v30 = (char)a2;
        unsigned char v33 = *(char *)(v3 + a3); // 0x556d70
        result2 = v30;
        while (v33 >= 1) {
            // 0x556d82
            v31--;
            int64_t v34 = v30 + 1; // 0x556d75
            int64_t v35 = 0;
            *(char *)(v35 + v34) = *(char *)(v35 + v32);
            int64_t v36 = v35 + 1; // 0x556da1
            while (v35 != (int64_t)(v33 - 1)) {
                // 0x556d90
                v35 = v36;
                *(char *)(v35 + v34) = *(char *)(v35 + v32);
                v36 = v35 + 1;
            }
            int64_t v37 = (0x100000000000000 * (int64_t)v33 - 0x100000000000000 >> 56) + 1; // 0x556dae
            v32 += v37;
            v30 = v37 + v34;
            result = v30;
            v21 = v32;
            if (v31 == 0) {
                goto lab_0x556dc0;
            }
            *(char *)v30 = (char)a2;
            v33 = *(char *)(v3 + a3);
            result2 = v30;
        }
    }
    // 0x556e1f
    return result2;
}
