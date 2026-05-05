/*
 * Targeted RetDec C for native executable gap queue batch 28.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x592ee-0x593cd rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aedd0-0x4aeeaf rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b63a0-0x4b647f rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e18d-0x3e26b rank=- name=- kind=- bytes=- uncovered=-
 *   0x7826e-0x7834c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d4790-0x4d486e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ee710-0x4ee7ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x502870-0x50294e rank=- name=- kind=- bytes=- uncovered=-
 *   0x505130-0x50520e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36f05-0x36fe2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x67d18-0x67df5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x28cb6f-0x28cc4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f17f0-0x4f18cd rank=- name=- kind=- bytes=- uncovered=-
 *   0x24bd0-0x24cac rank=- name=- kind=- bytes=- uncovered=-
 *   0x423a3-0x4247f rank=- name=- kind=- bytes=- uncovered=-
 *   0x52c62-0x52d3e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_221a8();
int64_t function_24a76();
int64_t function_24bd0();
int64_t function_24e1e();
int64_t function_25018();
int64_t function_2515a();
int64_t function_251de();
int64_t function_252e0();
int64_t function_28cb6f();
int64_t function_29c3a();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_35c96();
int64_t function_36b3c();
int64_t function_36e82();
int64_t function_36f05();
int64_t function_36ff8();
int64_t function_3e04f();
int64_t function_3e0b9();
int64_t function_3e18d();
int64_t function_3e197();
int64_t function_3e19c();
int64_t function_423a3();
int64_t function_4aec20();
int64_t function_4aedd0();
int64_t function_4b0fa0();
int64_t function_4b1080();
int64_t function_4b5fe0();
int64_t function_4b60a0();
int64_t function_4b63a0();
int64_t function_4d4560();
int64_t function_4d4710();
int64_t function_4d4790();
int64_t function_4efd30();
int64_t function_4f1530();
int64_t function_4f15a0();
int64_t function_4f1700();
int64_t function_4f1720();
int64_t function_4f17f0();
int64_t function_4ff200();
int64_t function_4ff460();
int64_t function_501070();
int64_t function_5012d0();
int64_t function_502870();
int64_t function_505130();
int64_t function_52770();
int64_t function_527a4();
int64_t function_52876();
int64_t function_52c62();
int64_t function_52d3e();
int64_t function_542470();
int64_t function_542590();
int64_t function_592ee();
int64_t function_67ce4();
int64_t function_67d18();
int64_t function_7826e();
int64_t function_caf2a();

// Address range: 0x24bd0 - 0x24cac
int64_t function_24bd0(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x24bdb
    int64_t v2 = function_24a76(a1); // 0x24beb
    int64_t v3 = function_24e1e(); // 0x24bf3
    int32_t v4 = function_252e0(a1 + (int64_t)&g2); // 0x24c07
    int64_t v5 = (int64_t)&g1; // 0x24bd0
    int64_t v6; // 0x24bd0
    switch (v4) {
        case 1: {
            goto lab_0x24c31;
        }
        case 2: {
            // 0x24c1f
            v5 = function_24a76(a1);
            goto lab_0x24c31;
        }
        default: {
            // 0x24c11
            v5 = v2;
            if (v4 != 0) {
                goto lab_0x24c31;
            } else {
                // 0x24c15
                v6 = (int64_t)*(int32_t *)(a1 + (int64_t)&g5);
                goto lab_0x24c8e;
            }
        }
    }
  lab_0x24c31:;
    int64_t v7 = a1 + (int64_t)&g3; // 0x24c31
    int64_t * v8; // 0x24bd0
    if (v3 - *(int64_t *)v7 < 0x77359400) {
        // 0x24c31
        v8 = (int64_t *)(a1 + (int64_t)&g4);
    } else {
        // 0x24c4e
        function_251de(v7, v3);
        int64_t * v9 = (int64_t *)(a1 + (int64_t)&g4);
        *v9 = 0;
        __asm_mfence();
        v8 = v9;
    }
    uint64_t v10 = *v8; // 0x24c64
    v6 = 0;
    if (v5 > v10) {
        uint64_t v11 = (int64_t)*(int32_t *)(a1 + (int64_t)&g5); // 0x24c7f
        uint64_t v12 = v5 - v10; // 0x24c81
        v6 = v12 > v11 ? v11 : v12;
    }
    goto lab_0x24c8e;
  lab_0x24c8e:;
    int64_t result = v6; // 0x24c9c
    if (v1 != __readfsqword(40)) {
        // 0x24c9e
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x24ca3
    return result;
}

// Address range: 0x36f05 - 0x36fe2
int64_t function_36f05(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x36f24
    int64_t v2 = a3 - 1; // 0x36f34
    int64_t v3 = (0x8000000000000000 * (int128_t)(v2 >> 63) | (int128_t)v2) / 2; // 0x36f3a
    int64_t v4 = a2; // 0x36f45
    if (v3 > a2) {
        int64_t v5 = 2 * a2; // 0x36f47
        int64_t v6 = v5 + 2; // 0x36f55
        int64_t v7 = v5 | 1; // 0x36f58
        int64_t v8 = *(int64_t *)(8 * v7 + a1); // 0x36f60
        int64_t v9; // 0x36f05
        int64_t v10 = function_35c96(&v9, *(int64_t *)(8 * v6 + a1), v8); // 0x36f64
        int64_t v11 = (char)v10 != 0 ? v7 : v6; // 0x36f70
        *(int64_t *)(8 * a2 + a1) = *(int64_t *)(8 * v11 + a1);
        v4 = v11;
        while (v11 < v3) {
            int64_t v12 = v11;
            v5 = 2 * v12;
            v6 = v5 + 2;
            v7 = v5 | 1;
            v8 = *(int64_t *)(8 * v7 + a1);
            v10 = function_35c96(&v9, *(int64_t *)(8 * v6 + a1), v8);
            v11 = (char)v10 != 0 ? v7 : v6;
            *(int64_t *)(8 * v12 + a1) = *(int64_t *)(8 * v11 + a1);
            v4 = v11;
        }
    }
    int64_t v13 = v4; // 0x36f85
    if (a3 % 2 == 0) {
        int64_t v14 = a3 - 2; // 0x36f87
        v13 = v4;
        if (v4 == (int64_t)((0x8000000000000000 * (int128_t)(v14 >> 63) | (int128_t)v14) / 2)) {
            int64_t v15 = 2 * v4 | 1; // 0x36f9b
            *(int64_t *)(8 * v4 + a1) = *(int64_t *)(8 * v15 + a1);
            v13 = v15;
        }
    }
    // 0x36fab
    function_36e82(a1, v13, a2);
    int64_t result = 0; // 0x36fcc
    if (v1 != __readfsqword(40)) {
        // 0x36fce
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x36fd3
    return result;
}

// Address range: 0x3e18d - 0x3e197
int64_t function_3e18d(void) {
    // 0x3e18d
    return function_3e0b9();
}

// Address range: 0x3e197 - 0x3e19c
int64_t function_3e197(void) {
    // 0x3e197
    return function_3e04f();
}

// Address range: 0x3e19c - 0x3e26b
int64_t function_3e19c(int64_t a1, int64_t a2, int64_t result, uint64_t a4, uint64_t a5, int64_t a6, int32_t a7) {
    // 0x3e19c
    __readfsqword(40);
    int64_t v1 = -1; // 0x3e20d
    if ((a7 & 4) == 0) {
        // 0x3e20f
        v1 = a2 - 1 + result - a4 + a5;
    }
    int64_t v2 = v1;
    if (a5 >= a4 == (v2 + 1 & v2) == 0) {
        // 0x3e25b
        return (int64_t)*(int32_t *)(a1 + 32);
    }
    // 0x3e239
    *(int64_t *)a6 = 0;
    *(int64_t *)result = 0;
    return result;
}

// Address range: 0x423a3 - 0x4247f
int64_t function_423a3(int64_t a1, int64_t a2) {
    // 0x423a3
    if (a1 == 0) {
        // 0x4247a
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x423ac
    if (*v1 != 0 || *(int64_t *)(a1 + 72) == 0) {
        // 0x4247a
        return 0;
    }
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x423c2
    if (*v2 != 0) {
        // 0x4247a
        return 0;
    }
    uint32_t v3 = *(int32_t *)(a1 + 24); // 0x423cc
    if (v3 != 0) {
        // 0x423d3
        if ((v3 - 1 & v3) != 0) {
            // 0x4247a
            return 0;
        }
    }
    int64_t * v4 = (int64_t *)(a1 + 32); // 0x423df
    int64_t v5 = v3; // 0x423e4
    if (*v4 == 0) {
        // 0x423e6
        *v4 = 0x3ce6a;
        v5 = 0x3ce6a;
    }
    int64_t * v6 = (int64_t *)(a1 + 40); // 0x423f1
    int64_t v7 = v5; // 0x423f6
    if (*v6 == 0) {
        // 0x423f8
        *v6 = 0x3ce62;
        v7 = 0x3ce62;
    }
    int64_t * v8 = (int64_t *)(a1 + 48); // 0x42403
    int64_t v9 = v7; // 0x42408
    if (*v8 == 0) {
        // 0x4240a
        *v8 = 0x3de78;
        v9 = 0x3de78;
    }
    // 0x42415
    *(int64_t *)a1 = a2;
    *v2 = 2;
    *(int64_t *)(a1 + 8) = 0;
    *(int32_t *)(a1 + 16) = 0;
    *v1 = v9;
    int64_t result = 0; // 0x4244e
    if (v9 != 0) {
        // 0x42450
        __asm_rep_stosd_memset((char *)v9, 0, 32);
        int64_t v10 = *v1; // 0x4245c
        *(int32_t *)(v10 + 24) = 1;
        *(int32_t *)(v10 + 56) = 4;
        *(int32_t *)(v10 + 88) = 4;
        result = 1;
    }
    // 0x4247a
    return result;
}

// Address range: 0x52c62 - 0x52d3e
int64_t function_52c62(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 - 24;
    int64_t * v2 = (int64_t *)v1;
    uint64_t v3 = *v2; // 0x52c80
    int64_t result = function_52876(a1, v3, a2, "basic_string::resize"); // 0x52c87
    if (v3 >= a2) {
        if (v3 > a2) {
            // 0x52d08
            return function_36ff8(a1, function_36b3c(a1, a2, "basic_string::erase"), v3 - a2, 0);
        }
        // 0x52d35
        return result;
    }
    int64_t n = a2 - v3; // 0x52c9d
    function_52876(a1, 0, n, "basic_string::append");
    int64_t * v4; // 0x52c62
    int64_t v5; // 0x52c62
    if (*(int64_t *)(a1 - 16) < a2) {
        goto lab_0x52cb4;
    } else {
        // 0x52cc1
        if ((char)function_29cea(v1) != 0) {
            goto lab_0x52cb4;
        } else {
            // 0x52cc1
            v4 = (int64_t *)(a1 - 48);
            v5 = v1;
            goto lab_0x52cce;
        }
    }
  lab_0x52cb4:
    // 0x52cb4
    function_527a4(a1, a2);
    v4 = v2;
    v5 = a1;
    goto lab_0x52cce;
  lab_0x52cce:;
    int64_t v6 = 4 * *v4 + v5; // 0x52cd9
    int32_t wc = a3;
    int32_t * wstr = (int32_t *)v6;
    if (n != 1) {
        // 0x52ce4
        wmemset(wstr, wc, (int32_t)n);
    } else {
        // 0x52cdf
        *wstr = wc;
    }
    // 0x52cef
    return function_29cf4(v6 - 24, a2);
}

// Address range: 0x592ee - 0x593cd
int64_t function_592ee(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x592fc
    int32_t * v2 = (int32_t *)&g12; // bp-72, 0x59317
    int64_t v3 = a1; // 0x59323
    if (*(int64_t *)(a3 - 24) == 0) {
        // 0x59325
        function_542470("basic_string::_S_construct null not valid");
        v3 = (int64_t)"basic_string::_S_construct null not valid";
    }
    // 0x59331
    function_52770((int64_t *)&v2, a3);
    function_52d3e((int64_t *)&v2);
    int32_t * v4 = v2; // 0x5934d
    function_52d3e((int64_t *)&v2);
    int64_t v5 = 4 * g11 + (int64_t)v2; // 0x59361
    function_52d3e((int64_t *)&v2);
    int64_t wc = (int64_t)v2; // 0x5936a
    if (v5 != wc) {
        int64_t v6 = (int64_t)v4; // 0x592ee
        int64_t v7 = wc + 4; // 0x5937d
        *(int32_t *)v6 = towlower(*(int32_t *)wc);
        v6 += 4;
        while (v5 != v7) {
            int64_t wc2 = v7;
            v7 = wc2 + 4;
            *(int32_t *)v6 = towlower(*(int32_t *)wc2);
            v6 += 4;
        }
    }
    // 0x5938b
    *(int64_t *)v3 = wc;
    v2 = (int32_t *)&g12;
    function_29c3a((int64_t *)&v2);
    int64_t result = v3; // 0x593b7
    if (v1 != __readfsqword(40)) {
        // 0x593b9
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x593be
    return result;
}

// Address range: 0x67d18 - 0x67df5
int64_t function_67d18(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x67d23
    if (*(int32_t *)(a1 + 116) == 1) {
        // 0x67d40
        int64_t v2; // bp-136, 0x67d18
        int64_t v3; // bp-168, 0x67d18
        function_2515a(&v2, &v3);
        function_67ce4(a1, &v2, 0);
        function_25018(&v2);
        function_221a8(&v3);
    }
    int64_t result = 0; // 0x67de2
    if (v1 != __readfsqword(40)) {
        // 0x67de4
        __stack_chk_fail();
        result = (int64_t)&g14;
    }
    // 0x67de9
    return result;
}

// Address range: 0x7826e - 0x7834c
int64_t function_7826e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x7826e
    int64_t result; // 0x7826e
    if (a3 == 0) {
        // 0x7833d
        *(int64_t *)a1 = (int64_t)&g10;
        return result;
    }
    if (a2 == 0) {
        // 0x7832c
        result = function_542470("basic_string::_S_construct null not valid");
        // 0x7833d
        *(int64_t *)a1 = (int64_t)&g10;
        return result;
    }
    int64_t v1 = 0x3ffffffffffffff9; // 0x782a4
    if (a3 >= 0x3ffffffffffffffa) {
        // 0x782a6
        v1 = function_542590("basic_string::_S_create");
    }
    int64_t v2 = a3; // 0x782c0
    if (a3 < 0xffffffffffffffc7) {
        uint64_t v3 = v1;
        uint64_t v4 = a3 + (int64_t)&g1 - (a3 + 57 & (int64_t)(int32_t)&g13); // 0x782dc
        v2 = v4 > v3 ? v3 : v4;
    }
    int64_t result2 = function_4efd30(v2 + 25); // 0x782ef
    *(int64_t *)(result2 + 8) = v2;
    *(int32_t *)(result2 + 16) = 0;
    int64_t v5 = result2 + 24; // 0x78303
    if (a3 != 1) {
        // 0x78315
        __asm_rep_movsb_memcpy((char *)v5, (char *)a2, a3);
    } else {
        // 0x7830e
        *(char *)v5 = (char)a2;
    }
    // 0x7831d
    result2 = (int64_t)&g9;
    if (result2 != (int64_t)&g9) {
        // 0x78322
        *(int64_t *)result2 = a3;
        *(char *)(v5 + a3) = 0;
    }
    // 0x7833d
    *(int64_t *)a1 = v5;
    return result2;
}

// Address range: 0x28cb6f - 0x28cc4c
int64_t function_28cb6f(int64_t a1, int64_t a2) {
    int64_t v1 = 0x543a67da; // bp-8, 0x28cbea
    int64_t v2 = (int64_t)&v1; // 0x28cc20
    *(int64_t *)(v2 - 8) = 0x543a67da;
    *(int64_t *)(v2 - 16) = v2;
    return function_caf2a(a1);
}

// Address range: 0x4aedd0 - 0x4aeeaf
int64_t function_4aedd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    if ((int32_t)a2 != 0) {
        int64_t v1 = a3; // 0x4aedfe
        int64_t v2 = a6; // 0x4aedfe
        int64_t v3 = a7; // 0x4aedfe
        if (a3 == 0) {
            // 0x4aee00
            *(int64_t *)a4 = a4;
            return 0;
        }
        if (a4 == 0) {
            // 0x4aee57
            function_4aec20(a1, 1, a5, a5);
        }
        int64_t v4 = (a4 + 1) % 16; // 0x4aee34
        char * v5 = (char *)(a4 + a5); // 0x4aee37
        char v6 = *(char *)v2 ^ *v5; // 0x4aee3a
        *(char *)v3 = v6;
        v1--;
        *v5 = v6;
        v2++;
        v3++;
        while (v1 != 0) {
            int64_t v7 = v4;
            if (v7 == 0) {
                // 0x4aee57
                function_4aec20(a1, 1, a5, a5);
            }
            // 0x4aee2c
            v4 = (v7 + 1) % 16;
            v5 = (char *)(v7 + a5);
            v6 = *(char *)v2 ^ *v5;
            *(char *)v3 = v6;
            v1--;
            *v5 = v6;
            v2++;
            v3++;
        }
        // 0x4aee00
        *(int64_t *)a4 = v4;
        return 0;
    }
    // 0x4aee60
    if (a3 == 0) {
        // 0x4aee00
        *(int64_t *)a4 = a4;
        return 0;
    }
    int64_t v8 = a4; // 0x4aee68
    int64_t v9 = a3; // 0x4aee68
    int64_t v10 = a6; // 0x4aee68
    int64_t result; // 0x4aedd0
    if (a4 == 0) {
        // 0x4aeea1
        return result;
    }
    int64_t v11 = a7; // 0x4aee68
    char v12 = *(char *)v10; // 0x4aee70
    int64_t v13 = v8 + a5; // 0x4aee75
    v8 = (v8 + 1) % 16;
    char * v14 = (char *)v13; // 0x4aee86
    *(char *)v11 = *v14 ^ v12;
    v9--;
    *v14 = v12;
    while (v9 != 0) {
        // 0x4aee9c
        v10++;
        v11++;
        result = v13;
        if (v8 == 0) {
            // 0x4aeea1
            return result;
        }
        v12 = *(char *)v10;
        v13 = v8 + a5;
        v8 = (v8 + 1) % 16;
        v14 = (char *)v13;
        *(char *)v11 = *v14 ^ v12;
        v9--;
        *v14 = v12;
    }
    // 0x4aee00
    *(int64_t *)a4 = v8;
    return 0;
}

// Address range: 0x4b63a0 - 0x4b6479
int64_t function_4b63a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x4b63c6
    if (*v1 + a3 >= 385) {
        // 0x4b642f
        return 0xffffffc8;
    }
    // 0x4b63dc
    int64_t v2; // bp-424, 0x4b63a0
    __asm_rep_stosq_memset((char *)&v2, 0, 48);
    int64_t v3 = *v1; // 0x4b6407
    int64_t v4 = v3; // 0x4b640b
    if (a2 != 0 && a3 != 0) {
        // 0x4b6465
        memcpy((int64_t *)(v3 + (int64_t)&v2), (int64_t *)a2, (int32_t)a3);
        v4 = v3 + a3;
    }
    // 0x4b640d
    function_4b60a0(&v2, &v2, v4, 0);
    function_4b5fe0(a1, &v2);
    *(int32_t *)(a1 + 16) = 1;
    // 0x4b642f
    return 0;
}

// Address range: 0x4d4790 - 0x4d486d
int64_t function_4d4790(int64_t a1, uint64_t a2, int64_t result) {
    int64_t v1 = function_4b0fa0(result); // 0x4d47b4
    int64_t v2 = result - a2; // 0x4d47cc
    if (result < a2 || v1 > v2) {
        // 0x4d4831
        return result;
    }
    int64_t * v3 = (int64_t *)a1; // 0x4d47e4
    *v3 = result - v1;
    int64_t result2 = function_4b1080(result); // 0x4d47e8
    if ((int32_t)result2 != 0) {
        // 0x4d4831
        return result2;
    }
    int64_t v4 = v1; // 0x4d47f6
    int64_t v5; // 0x4d4790
    if ((char)result < 0 == *(int32_t *)&v5 == 1) {
        // 0x4d4850
        if (v2 < 1) {
            // 0x4d4831
            return result;
        }
        int64_t v6 = result - 1; // 0x4d485b
        *v3 = v6;
        *(char *)v6 = 0;
        v4 = v1 + 1;
    }
    int64_t v7 = function_4d4560(a1, a2, v4); // 0x4d480a
    int64_t result3 = v7; // 0x4d4811
    if ((int32_t)v7 >= 0) {
        int64_t v8 = 0x100000000 * v7 >> 32; // 0x4d4813
        int64_t v9 = function_4d4710(a1, a2, 2, v8); // 0x4d4824
        result3 = ((int32_t)v9 >= 0 ? v8 + v4 : 0) + v9 & 0xffffffff;
    }
    // 0x4d4831
    return result3;
}

// Address range: 0x4ee710 - 0x4ee7eb
int64_t ZydisRegisterGetLargestEnclosing(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a1; // 0x4ee714
    if (v1 < 6 != (int32_t)a2 < 266) {
        // 0x4ee7c0
        return 0;
    }
    int64_t v2 = 12 * (a2 & 0xffffffff); // 0x4ee736
    uint32_t v3 = *(int32_t *)(v2 + (int64_t)&g8); // 0x4ee736
    if (v3 == 0 || v1 != 0 == v3 == 4) {
        // 0x4ee7c0
        return 0;
    }
    int64_t result = v3; // 0x4ee736
    if (v1 == 3) {
        // 0x4ee7c0
        return result;
    }
    int64_t v4 = 0; // 0x4ee753
    char v5 = 0; // 0x4ee753
    if (v1 < 4) {
        // 0x4ee755
        if (v1 == 1) {
            // 0x4ee7c0
            return result;
        }
        // 0x4ee75e
        v4 = 2 * (int64_t)(v1 != 2);
        v5 = 2 * (char)(v1 != 2);
    }
    uint32_t result2 = *(int32_t *)(4 * (v4 + 3 * result) + (int64_t)&g7); // 0x4ee783
    if (result2 != 0) {
        // 0x4ee7c0
        return result2;
    }
    // 0x4ee78a
    if (v3 >= 5) {
        // 0x4ee7c0
        return result;
    }
    int64_t v6 = (int64_t)*(char *)(v2 + (int64_t)&g8 + 4); // 0x4ee78e
    int64_t v7 = v6; // 0x4ee79b
    if (v3 == 1) {
        // 0x4ee79d
        v7 = (int64_t)*(char *)(v6 + (int64_t)&g6);
    }
    // 0x4ee7a8
    return v7 + (v5 != 2 ? 21 : 53);
}

// Address range: 0x4f17f0 - 0x4f18cc
int64_t function_4f17f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = a5 + a3; // 0x4f1803
    __readfsqword(40);
    int64_t fd = function_4f1700(); // 0x4f1827
    int64_t v1 = result; // 0x4f1841
    int64_t v2 = a2; // 0x4f1841
    int64_t v3 = a3; // 0x4f1841
    int64_t result2; // 0x4f17f0
    int64_t v4; // 0x4f17f0
    while (true) {
        // 0x4f1848
        v4 = v1;
        int64_t iov = v2; // bp-104, 0x4f1853
        int32_t v5 = writev((int32_t)fd, (struct iovec *)&iov, 2); // 0x4f185d
        while (v5 == -1) {
            // 0x4f1880
            if (*__errno_location() != 4) {
                // break (via goto) -> 0x4f188a
                goto lab_0x4f188a;
            }
            iov = v2;
            v5 = writev((int32_t)fd, (struct iovec *)&iov, 2);
        }
        int64_t v6 = v5; // 0x4f185d
        v1 = v4 - v6;
        if (v1 == 0) {
            // 0x4f188d
            __readfsqword(40);
            return result;
        }
        int64_t v7 = v6 - v3; // 0x4f1870
        if (v7 >= 0) {
            // 0x4f18b0
            result2 = result - v1 + function_4f1530(fd & 0xffffffff, v7 + a4, a5 - v7);
            goto lab_0x4f188d;
        }
        // 0x4f1875
        v2 += v6;
        v3 -= v6;
    }
  lab_0x4f188a:
    // 0x4f188a
    result2 = result - v4;
  lab_0x4f188d:
    // 0x4f188d
    __readfsqword(40);
    return result2;
}

// Address range: 0x502870 - 0x50294c
int64_t function_502870(int64_t result) {
    // 0x502870
    __readfsqword(40);
    if ((char)function_4f15a0() == 0) {
        // 0x502929
        __readfsqword(40);
        return 0;
    }
    int64_t v1 = function_4ff460(result); // 0x5028a8
    *(int32_t *)(result + 120) = 0;
    *(char *)(result + 192) = 0;
    function_4ff200(result);
    int64_t v2 = *(int64_t *)(result + 152); // 0x5028d0
    *(char *)(result + 169) = 0;
    *(char *)(result + 170) = 0;
    *(int64_t *)(result + 40) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 48) = 0;
    *(int64_t *)(result + 8) = v2;
    *(int64_t *)(result + 16) = v2;
    *(int64_t *)(result + 24) = v2;
    int64_t v3 = *(int64_t *)(result + 124); // 0x502909
    *(int64_t *)(result + 132) = v3;
    *(int64_t *)(result + 140) = v3;
    if (function_4f1720(result + 104) == 0) {
        // 0x502929
        __readfsqword(40);
        return 0;
    }
    // 0x502925
    if ((char)v1 == 1) {
        // 0x502929
        __readfsqword(40);
        return result;
    }
    // 0x502929
    __readfsqword(40);
    return 0;
}

// Address range: 0x505130 - 0x50520c
int64_t function_505130(int64_t result) {
    // 0x505130
    __readfsqword(40);
    if ((char)function_4f15a0() == 0) {
        // 0x5051e9
        __readfsqword(40);
        return 0;
    }
    int64_t v1 = function_5012d0(result); // 0x505168
    *(int32_t *)(result + 120) = 0;
    *(char *)(result + 192) = 0;
    function_501070(result);
    int64_t v2 = *(int64_t *)(result + 152); // 0x505190
    *(char *)(result + 169) = 0;
    *(char *)(result + 170) = 0;
    *(int64_t *)(result + 40) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 48) = 0;
    *(int64_t *)(result + 8) = v2;
    *(int64_t *)(result + 16) = v2;
    *(int64_t *)(result + 24) = v2;
    int64_t v3 = *(int64_t *)(result + 124); // 0x5051c9
    *(int64_t *)(result + 132) = v3;
    *(int64_t *)(result + 140) = v3;
    if (function_4f1720(result + 104) == 0) {
        // 0x5051e9
        __readfsqword(40);
        return 0;
    }
    // 0x5051e5
    if ((char)v1 == 1) {
        // 0x5051e9
        __readfsqword(40);
        return result;
    }
    // 0x5051e9
    __readfsqword(40);
    return 0;
}
