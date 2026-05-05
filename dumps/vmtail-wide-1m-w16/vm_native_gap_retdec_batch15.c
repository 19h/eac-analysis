/*
 * Targeted RetDec C for native executable gap queue batch 15.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x56fab0-0x56fbea rank=- name=- kind=- bytes=- uncovered=-
 *   0x48e347-0x48e480 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27a86-0x27bbe rank=- name=- kind=- bytes=- uncovered=-
 *   0x59078-0x591b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x514590-0x5146c8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5148a0-0x5149d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51970f-0x519847 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6b56e-0x6b6a5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bb8d0-0x4bba05 rank=- name=- kind=- bytes=- uncovered=-
 *   0x573580-0x5736b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x692e6-0x69419 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38fcf-0x39101 rank=- name=- kind=- bytes=- uncovered=-
 *   0xfeebc-0xfefee rank=- name=- kind=- bytes=- uncovered=-
 *   0x6a512-0x6a643 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b8660-0x4b8791 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fdd8-0x4ff08 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
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

int64_t function_1fd40();
int64_t function_20540();
int64_t function_20a50();
int64_t function_24ded();
int64_t function_24dff();
int64_t function_2508e();
int64_t function_251e8();
int64_t function_256ba();
int64_t function_259ce();
int64_t function_25c34();
int64_t function_27a86();
int64_t function_29c3a();
int64_t function_35ef6();
int64_t function_36712();
int64_t function_36966();
int64_t function_38fcf();
int64_t function_48d2d2();
int64_t function_48e2d8();
int64_t function_48e347();
int64_t function_4b0df0();
int64_t function_4b0fa0();
int64_t function_4b1080();
int64_t function_4b1220();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b2d10();
int64_t function_4b38b0();
int64_t function_4b81c0();
int64_t function_4b8660();
int64_t function_4bb8d0();
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f75e();
int64_t function_4f954();
int64_t function_4fdd8();
int64_t function_4ff08();
int64_t function_5001a();
int64_t function_508620();
int64_t function_50f7d0();
int64_t function_511c20();
int64_t function_514590();
int64_t function_5148a0();
int64_t function_519680();
int64_t function_51970f();
int64_t function_519750();
int64_t function_5197f4();
int64_t function_5197f9();
int64_t function_519842();
int64_t function_52b400();
int64_t function_54c6d0();
int64_t function_565f30();
int64_t function_5677a0();
int64_t function_567850();
int64_t function_56fab0();
int64_t function_573580();
int64_t function_59078();
int64_t function_69166();
int64_t function_692e6();
int64_t function_6941a();
int64_t function_69a4e();
int64_t function_69abc();
int64_t function_6a114();
int64_t function_6a512();
int64_t function_6a648();
int64_t function_6a670();
int64_t function_6a7f0();
int64_t function_6b492();
int64_t function_6b56e();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_c4258();
int64_t function_feebc();

// Address range: 0x27a86 - 0x27bbe
int64_t function_27a86(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x27aa8
    int64_t v2 = 0x1fffffffffffffff; // 0x27ad0
    int64_t v3; // 0x27a86
    int64_t v4; // 0x27a86
    int64_t v5; // 0x27a86
    if (v2 > 0x1fffffffffffffff | v2 < *v1 - a1 >> 3) {
        goto lab_0x27ba9;
    } else {
        // 0x27adf
        v3 = v2;
        v4 = a1;
        v5 = 0;
        if (v2 != 0) {
            goto lab_0x27ba9;
        } else {
            goto lab_0x27aeb;
        }
    }
  lab_0x27ba9:;
    int64_t v6 = 8 * v2; // 0x27ba9
    int64_t v7 = function_4efd30(v6); // 0x27bb1
    v3 = v2;
    v4 = v6;
    v5 = v7;
    goto lab_0x27aeb;
  lab_0x27aeb:
    // 0x27aeb
    *(int64_t *)(a2 - a1 + v5) = a1;
    *(int64_t *)a3 = (int64_t)&g9;
    int64_t v8 = v5; // 0x27b11
    int64_t v9 = a2; // 0x27b11
    if (v4 != a2) {
        int64_t * v10 = (int64_t *)v4; // 0x27b13
        int64_t v11 = *v10; // 0x27b13
        int64_t v12 = v4 + 8; // 0x27b16
        *(int64_t *)v8 = v11;
        *v10 = (int64_t)&g9;
        v8 += 8;
        int64_t v13 = v12; // 0x27b11
        v9 = v11;
        while (v12 != a2) {
            // 0x27b13
            v10 = (int64_t *)v13;
            v11 = *v10;
            v12 = v13 + 8;
            *(int64_t *)v8 = v11;
            *v10 = (int64_t)&g9;
            v8 += 8;
            v13 = v12;
            v9 = v11;
        }
    }
    int64_t v14 = *v1; // 0x27b27
    int64_t v15 = v5 + 8 + (a2 - v4 & -8); // 0x27b36
    int64_t v16 = v9; // 0x27b44
    int64_t v17 = v15; // 0x27b44
    if (v14 != a2) {
        int64_t * v18 = (int64_t *)a2; // 0x27b54
        int64_t v19 = *v18; // 0x27b54
        int64_t v20 = a2 + 8; // 0x27b5b
        *(int64_t *)v17 = v19;
        *v18 = (int64_t)&g9;
        v16 = v19;
        v17 += 8;
        int64_t v21 = v20; // 0x27b44
        while (v14 != v20) {
            // 0x27b54
            v18 = (int64_t *)v21;
            v19 = *v18;
            v20 = v21 + 8;
            *(int64_t *)v17 = v19;
            *v18 = (int64_t)&g9;
            v16 = v19;
            v17 += 8;
            v21 = v20;
        }
    }
    int64_t v22 = v16; // 0x27b6c
    if (v14 != v4) {
        int64_t v23 = v4 + 8; // 0x27b71
        function_2508e(v4);
        v22 = v4;
        while (v14 != v23) {
            int64_t v24 = v23;
            v23 = v24 + 8;
            function_2508e(v24);
            v22 = v24;
        }
    }
    // 0x27b7c
    if (v22 != 0) {
        // 0x27b85
        function_4eeb50(v22);
    }
    // 0x27b8a
    *(int64_t *)a1 = v5;
    *v1 = v15 - a2 + v14;
    *(int64_t *)(a1 + 16) = v5 + 8 * v3;
    int64_t result; // 0x27a86
    return result;
}

// Address range: 0x38fcf - 0x39101
int64_t function_38fcf(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x38fda
    function_251e8(a1);
    int64_t buf = function_4eec00((int64_t *)&g1); // 0x38ff9
    int64_t path; // bp-47, 0x38fcf
    int64_t v2 = (int64_t)&path; // 0x3900b
    path = 0x21c2a9003b2e56a9;
    int32_t v3 = 0x545c2686; // 0x38fcf
    int64_t v4 = 0; // 0x3905b
    int32_t * v5 = (int32_t *)(v4 + v2); // 0x39053
    *v5 = *v5 ^ v3;
    v4 += 4;
    int32_t v6 = 0x43fd43fd * v3 + 0xc39ec3; // 0x3903b
    v3 = 2 * v6 | (int32_t)(v6 < 0);
    int64_t v7 = 12; // 0x39047
    int64_t v8 = 0x7cbec24e; // 0x39047
    while (v4 != 12) {
        // 0x39049
        v5 = (int32_t *)(v4 + v2);
        *v5 = *v5 ^ v3;
        v4 += 4;
        v6 = 0x43fd43fd * v3 + 0xc39ec3;
        v3 = 2 * v6 | (int32_t)(v6 < 0);
        v7 = 12;
        v8 = 0x7cbec24e;
    }
    char * v9 = (char *)(v7 + v2); // 0x39075
    *v9 = *v9 ^ (char)v8;
    int64_t v10 = v7 + 1; // 0x39082
    v7 = v10;
    v8 /= 256;
    while (v10 != 15) {
        // 0x3906b
        v9 = (char *)(v7 + v2);
        *v9 = *v9 ^ (char)v8;
        v10 = v7 + 1;
        v7 = v10;
        v8 /= 256;
    }
    int32_t v11 = readlink((char *)&path, (char *)buf, (int32_t)&g1); // 0x39096
    int64_t v12 = v11; // 0x39096
    if (v12 - 1 <= (int64_t)&g14) {
        // 0x390a8
        *(char *)(buf + v12) = 0;
        function_25c34(a1, buf, function_24ded(buf));
    }
    // 0x390c2
    function_4eeb40(buf);
    function_24dff(&path, 15);
    int64_t result = v2 & -256 | (int64_t)(*(int64_t *)(v2 - 24) != 0); // 0x390f1
    if (v1 != __readfsqword(40)) {
        // 0x390f3
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x390f8
    return result;
}

// Address range: 0x4fdd8 - 0x4ff08
int64_t function_4fdd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2; // bp-80, 0x4fdf6
    int64_t v2 = __readfsqword(40); // 0x4fe11
    function_729b6();
    int64_t v3 = function_4ff08(a1, &v1); // 0x4fe2c
    int64_t v4 = 0; // 0x4fe34
    int64_t v5; // 0x4fdd8
    uint64_t v6; // 0x4fdd8
    if (v3 != 0) {
        goto lab_0x4fed9;
    } else {
        // 0x4fe3a
        v4 = function_4efd30(264);
        function_4f75e(v4, v1, a3, a4, (int32_t)a5, a6);
        *(int64_t *)(v4 + 144) = 1;
        v6 = v1 % *(int64_t *)(a1 + 8);
        int64_t v7 = function_4f954(a1, v6, &v1); // 0x4fe89
        if (v7 == 0) {
            goto lab_0x4fe9f;
        } else {
            int64_t v8 = *(int64_t *)v7; // 0x4fe93
            v5 = v8;
            if (v8 != 0) {
                goto lab_0x4fed6;
            } else {
                goto lab_0x4fe9f;
            }
        }
    }
  lab_0x4fed9:;
    // 0x4fed9
    int64_t v9; // bp-72, 0x4fdd8
    function_729ce(&v9);
    int64_t result = v4; // 0x4fef2
    if (v2 != __readfsqword(40)) {
        // 0x4fef4
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x4fef9
    return result;
  lab_0x4fe9f:;
    int64_t v10 = function_4efd30(24); // 0x4fea4
    *(int64_t *)v10 = 0;
    *(int64_t *)(v10 + 16) = 0;
    *(int64_t *)(v10 + 8) = v1;
    v5 = function_5001a(a1, v6, v1, v10);
    goto lab_0x4fed6;
  lab_0x4fed6:
    // 0x4fed6
    *(int64_t *)(v5 + 16) = v4;
    goto lab_0x4fed9;
}

// Address range: 0x59078 - 0x591b0
int64_t function_59078(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x5909a
    int64_t v2 = 0x1fffffffffffffff; // 0x590c2
    int64_t v3; // 0x59078
    int64_t v4; // 0x59078
    int64_t v5; // 0x59078
    if (v2 > 0x1fffffffffffffff | v2 < *v1 - a1 >> 3) {
        goto lab_0x5919b;
    } else {
        // 0x590d1
        v3 = v2;
        v4 = a1;
        v5 = 0;
        if (v2 != 0) {
            goto lab_0x5919b;
        } else {
            goto lab_0x590dd;
        }
    }
  lab_0x5919b:;
    int64_t v6 = 8 * v2; // 0x5919b
    int64_t v7 = function_4efd30(v6); // 0x591a3
    v3 = v2;
    v4 = v6;
    v5 = v7;
    goto lab_0x590dd;
  lab_0x590dd:
    // 0x590dd
    *(int64_t *)(a2 - a1 + v5) = a1;
    *(int64_t *)a3 = (int64_t)&g11;
    int64_t v8 = v5; // 0x59103
    int64_t v9 = a2; // 0x59103
    if (v4 != a2) {
        int64_t * v10 = (int64_t *)v4; // 0x59105
        int64_t v11 = *v10; // 0x59105
        int64_t v12 = v4 + 8; // 0x59108
        *(int64_t *)v8 = v11;
        *v10 = (int64_t)&g11;
        v8 += 8;
        int64_t v13 = v12; // 0x59103
        v9 = v11;
        while (v12 != a2) {
            // 0x59105
            v10 = (int64_t *)v13;
            v11 = *v10;
            v12 = v13 + 8;
            *(int64_t *)v8 = v11;
            *v10 = (int64_t)&g11;
            v8 += 8;
            v13 = v12;
            v9 = v11;
        }
    }
    int64_t v14 = *v1; // 0x59119
    int64_t v15 = v5 + 8 + (a2 - v4 & -8); // 0x59128
    int64_t v16 = v9; // 0x59136
    int64_t v17 = v15; // 0x59136
    if (v14 != a2) {
        int64_t * v18 = (int64_t *)a2; // 0x59146
        int64_t v19 = *v18; // 0x59146
        int64_t v20 = a2 + 8; // 0x5914d
        *(int64_t *)v17 = v19;
        *v18 = (int64_t)&g11;
        v16 = v19;
        v17 += 8;
        int64_t v21 = v20; // 0x59136
        while (v14 != v20) {
            // 0x59146
            v18 = (int64_t *)v21;
            v19 = *v18;
            v20 = v21 + 8;
            *(int64_t *)v17 = v19;
            *v18 = (int64_t)&g11;
            v16 = v19;
            v17 += 8;
            v21 = v20;
        }
    }
    int64_t v22 = v16; // 0x5915e
    if (v14 != v4) {
        int64_t v23 = v4 + 8; // 0x59163
        function_29c3a(v4);
        v22 = v4;
        while (v14 != v23) {
            int64_t v24 = v23;
            v23 = v24 + 8;
            function_29c3a(v24);
            v22 = v24;
        }
    }
    // 0x5916e
    if (v22 != 0) {
        // 0x59177
        function_4eeb50(v22);
    }
    // 0x5917c
    *(int64_t *)a1 = v5;
    *v1 = v15 - a2 + v14;
    *(int64_t *)(a1 + 16) = v5 + 8 * v3;
    int64_t result; // 0x59078
    return result;
}

// Address range: 0x692e6 - 0x69419
int64_t function_692e6(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x69300
    function_251e8(a2);
    function_251e8(a3);
    int64_t v2 = a3; // 0x69326
    int64_t v3 = 0; // 0x69326
    if (*(int64_t *)(a3 - 24) >= 3) {
        int64_t v4 = function_6a670(a1, 58, 0); // 0x69336
        v2 = -1;
        v3 = 0;
        if (v4 != -1) {
            // 0x69348
            int64_t v5; // bp-56, 0x692e6
            function_36712(&v5, a1, 0, v4);
            function_256ba(a2, &v5);
            int64_t v6 = (int64_t)&v5; // 0x69366
            function_2508e(v6);
            int64_t v7 = v4 + 1; // 0x6936e
            function_36712(&v5, a1, (int32_t)v7, -1);
            function_256ba(a3, &v5);
            function_2508e(v6);
            int64_t v8 = *(int64_t *)(v4 - 23); // 0x6939b
            int64_t v9 = 0; // 0x693a2
            int64_t v10 = -1; // 0x693a2
            int64_t v11 = -1; // 0x693a2
            if (v8 != 0) {
                int64_t v12 = v9; // 0x693a8
                while (*(char *)(v9 + v7) == 32) {
                    int64_t v13 = v9 + 1; // 0x693aa
                    v9 = v13;
                    v12 = -1;
                    if (v8 == v13) {
                        // break -> 0x693bc
                        break;
                    }
                    v12 = v9;
                }
                int64_t v14 = v8 - 1;
                v10 = v12;
                v11 = v14;
                while (*(char *)(v14 + v7) == 32) {
                    int64_t v15 = v14 - 1; // 0x693c5
                    v10 = v12;
                    v11 = v15;
                    if (v14 == 0) {
                        // break -> 0x693ce
                        break;
                    }
                    v14 = v15;
                    v10 = v12;
                    v11 = v14;
                }
            }
            int64_t v16 = v10;
            function_36712(&v5, a3, (int32_t)v16, 1 - v16 + v11);
            function_256ba(a3, &v5);
            v2 = function_2508e(v6);
            int64_t v17; // bp-255, 0x692e6
            v3 = (int64_t)&v17 & 248;
        }
    }
    int64_t result = v2 & -256 | v3; // 0x69405
    if (v1 != __readfsqword(40)) {
        // 0x69407
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x6940c
    return result;
}

// Address range: 0x6a512 - 0x6a643
int64_t function_6a512(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)a5; // 0x6a532
    *v1 = 0;
    int64_t v2 = __readfsqword(40); // 0x6a539
    int64_t v3 = (int64_t)&g9; // bp-96, 0x6a560
    int64_t v4 = 5; // 0x6a57b
    if ((char)function_6941a() != 0) {
        // 0x6a581
        function_6a7f0(a1 + 8, &v3);
        int64_t v5; // bp-104, 0x6a512
        function_69166(&v5, "close");
        int64_t v6; // bp-112, 0x6a512
        function_69166(&v6, "Connection");
        function_69a4e(a1, &v6, &v5);
        function_2508e((int64_t)&v6);
        int64_t v7 = (int64_t)&v5; // 0x6a5cc
        function_2508e(v7);
        function_69abc(&v5, a1, &v3, a3);
        int64_t v8 = function_6a114(a1, &v3, (int32_t)a4 % 0x10000, &v5); // 0x6a5f3
        int64_t v9 = v8 & 0xffffffff; // 0x6a5fb
        function_2508e(v7);
        v4 = v9;
        if ((int32_t)v8 == 0) {
            // 0x6a608
            *v1 = *(int32_t *)(a1 + 168);
            v4 = v9;
        }
    }
    // 0x6a614
    function_6a648(&v3);
    int64_t result = v4; // 0x6a62d
    if (v2 != __readfsqword(40)) {
        // 0x6a62f
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x6a634
    return result;
}

// Address range: 0x6b56e - 0x6b6a5
int64_t function_6b56e(int64_t a1, int64_t addr) {
    int32_t * fd = (int32_t *)(a1 + 160); // 0x6b583
    int64_t v1 = __readfsqword(40); // 0x6b589
    int32_t v2 = fcntl(*fd, F_GETFL); // 0x6b599
    int32_t fd2 = *fd; // 0x6b59e
    int64_t v3 = v2; // 0x6b5a6
    int64_t v4 = 0; // 0x6b5a6
    if (fd2 != 0) {
        // 0x6b5af
        if (*(int16_t *)(a1 + 248) != 0) {
            // 0x6b5d1
            v3 = 0;
            v4 = 0;
            if (fcntl(fd2, F_SETFL) == -1) {
                goto lab_0x6b682;
            } else {
                int32_t * v5 = __errno_location(); // 0x6b5e8
                *v5 = 0;
                if (connect(*fd, (struct sockaddr *)addr, 16) != -1) {
                    goto lab_0x6b61e;
                } else {
                    uint32_t v6 = *v5; // 0x6b60d
                    if ((v6 || 1) == 115) {
                        goto lab_0x6b61e;
                    } else {
                        // 0x6b619
                        v3 = v6;
                        v4 = 0;
                        if (v6 != 11) {
                            goto lab_0x6b682;
                        } else {
                            goto lab_0x6b61e;
                        }
                    }
                }
            }
        } else {
            int32_t v7 = connect(fd2, (struct sockaddr *)addr, 16); // 0x6b5c1
            v3 = v7;
            v4 = v7 == 0;
            goto lab_0x6b682;
        }
    } else {
        goto lab_0x6b682;
    }
  lab_0x6b682:;
    int64_t result = v4 % 256 | v3 & -256; // 0x6b693
    if (v1 != __readfsqword(40)) {
        // 0x6b695
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x6b69a
    return result;
  lab_0x6b61e:
    // 0x6b61e
    v3 = 0;
    v4 = 0;
    if (fcntl(*fd, F_SETFL) != -1) {
        int64_t v8 = function_6b492(a1); // 0x6b63d
        v3 = v8;
        v4 = 0;
        if ((char)v8 != 0) {
            int64_t option_value = 0; // bp-56, 0x6b665
            int64_t option_len = 4; // bp-52, 0x6b66c
            int32_t v9 = getsockopt(*fd, SO_DEBUG, 4, &option_value, (int32_t *)&option_len) & -256;
            uint32_t v10 = (int32_t)option_value != 0 ? v9 : (int32_t)v8 % 256; // 0x6b67f
            v3 = v9;
            v4 = v10;
        }
    }
    goto lab_0x6b682;
}

// Address range: 0xfeebc - 0xfefee
int64_t function_feebc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xfeebc
    int64_t v1; // bp-24, 0xfeebc
    int64_t v2 = (int64_t)&v1; // 0xfef7c
    int64_t * v3 = (int64_t *)(v2 - 8); // 0xfef84
    int64_t v4 = v2 + 16; // 0xfef90
    int64_t * v5 = (int64_t *)v4; // 0xfef90
    *v5 = a7;
    v1 = 0x340ba89b;
    *(int64_t *)(v2 - 16) = 0xfd78b;
    *v3 = 0xfd78b;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v6 = (int64_t *)(v2 + 8); // 0xfefb9
    v1 = *v6;
    *v6 = *v5;
    *v3 = v2;
    v1 = v4;
    return function_c4258();
}

// Address range: 0x48e347 - 0x48e480
int64_t function_48e347(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x48e356
    int64_t v2; // bp-56, 0x48e347
    if (*(int64_t *)(a2 - 24) != 0) {
        // 0x48e389
        int64_t v3; // bp-96, 0x48e347
        function_35ef6((int64_t)&v3, (int64_t *)L"U82W_ERROR", &v2);
        int64_t v4 = *(int64_t *)((int64_t)L"U82W_ERROR" - 24); // 0x48e3a7
        int64_t inbytesleft = v4; // bp-88, 0x48e3ab
        int64_t v5 = 4 * v4; // 0x48e3b0
        int64_t outbytesleft = v5; // bp-80, 0x48e3b4
        int64_t v6 = function_4eec00((int64_t *)v5); // 0x48e3b9
        int32_t * inbuf = L"U82W_ERROR"; // bp-72, 0x48e3cc
        int64_t outbuf = v6; // bp-64, 0x48e3d4
        int64_t * cd = iconv_open("UTF-32LE", "UTF-8"); // 0x48e3d9
        if (cd != (int64_t *)-1) {
            int32_t v7 = iconv(cd, (char **)&inbuf, (int32_t *)&inbytesleft, (char **)&outbuf, (int32_t *)&outbytesleft); // 0x48e3fe
            if (v7 != -1) {
                // 0x48e408
                v2 = function_48e2d8(v6, outbuf);
                function_36966(&v3, &v2);
                function_29c3a((int64_t)&v2);
            }
            // 0x48e42d
            iconv_close(cd);
        }
        // 0x48e435
        function_4eeb40(v6);
        *(int64_t *)a1 = v3;
        v3 = (int64_t)&g11;
        function_48d2d2(&g10);
    } else {
        // 0x48e375
        function_35ef6(a1, &g6, &v2);
    }
    int64_t result = a1; // 0x48e46c
    if (v1 != __readfsqword(40)) {
        // 0x48e46e
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x48e473
    return result;
}

// Address range: 0x4b8660 - 0x4b8791
int64_t function_4b8660(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4b8660
    if (a4 - 1 >= a1) {
        // 0x4b8705
        return 0xffffcf80;
    }
    int64_t v1 = a1 + 8; // 0x4b8697
    if ((int32_t)function_4b1680(v1, 0) == 0) {
        // 0x4b8705
        return 0xffffcf80;
    }
    int64_t v2 = a1 + 56; // 0x4b86b8
    int32_t v3 = 12; // 0x4b86bd
    function_4b38b0(v2, 0x100000000 * a2 >> 32, a5, a6);
    int64_t v4 = function_4b1590(v2, v1); // 0x4b86e6
    int64_t v5; // 0x4b8660
    int64_t result; // 0x4b8660
    int64_t v6; // 0x4b86f7
    while ((int32_t)v4 >= 0) {
        // 0x4b86ef
        v6 = function_4b1220(v2, 1);
        v5 = v6;
        if ((int32_t)v6 != 0) {
            // 0x4b8700
            result = v5 - (int64_t)(int32_t)&g4 & 0xffffffff;
            return result;
        }
        v4 = function_4b1590(v2, v1);
    }
    // 0x4b8718
    v3--;
    result = v4;
    while (v3 != 0) {
        // 0x4b871f
        if ((int32_t)function_4b81c0(v2, v1) == 0) {
            int64_t v7 = a1 + 80; // 0x4b872e
            int64_t v8 = function_4b2d10(v7, a1 + 32, v2, v1, a1 + 152); // 0x4b8749
            if ((int32_t)v8 != 0) {
                // 0x4b8700
                result = v8 - (int64_t)(int32_t)&g4 & 0xffffffff;
                return result;
            } else {
                int64_t v9 = function_4b81c0(v7, v1); // 0x4b8758
                result = v9;
                if ((int32_t)v9 != 0) {
                    return result;
                } else {
                    int64_t v10 = function_4b1080(v7, a3, a4); // 0x4b876c
                    result = v10;
                    if ((int32_t)v10 == 0) {
                        return result;
                    } else {
                        // 0x4b8700
                        result = v10 - (int64_t)(int32_t)&g4 & 0xffffffff;
                        return result;
                    }
                }
            }
        }
        function_4b38b0(v2, 0x100000000 * a2 >> 32, a5, a6);
        v4 = function_4b1590(v2, v1);
        while ((int32_t)v4 >= 0) {
            // 0x4b86ef
            v6 = function_4b1220(v2, 1);
            v5 = v6;
            if ((int32_t)v6 != 0) {
                // 0x4b8700
                result = v5 - (int64_t)(int32_t)&g4 & 0xffffffff;
                return result;
            }
            v4 = function_4b1590(v2, v1);
        }
        // 0x4b8718
        v3--;
        result = v4;
    }
  lab_0x4b8705:
    // 0x4b8705
    return result;
}

// Address range: 0x4bb8d0 - 0x4bba03
int64_t function_4bb8d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x4bb8f4
    if (v1 >= 2) {
        // 0x4bb932
        return 0xffffb080;
    }
    int64_t v2 = function_4b1680(a2 + 48, 0); // 0x4bb912
    int64_t result; // 0x4bb8d0
    if ((int32_t)v2 == 0) {
        // 0x4bb91b
        result = v2;
        if (a6 != 0) {
            // 0x4bb924
            *(char *)a5 = 0;
            *(int64_t *)a4 = 1;
            result = 0;
        }
        // 0x4bb932
        return result;
    }
    int64_t v3 = function_4b0fa0(a1 + 8); // 0x4bb95c
    int64_t v4 = v3 + 1;
    if (v1 == 0) {
        int64_t v5 = v4 + v3; // 0x4bb9d0
        *(int64_t *)a4 = v5;
        result = v5;
        if (v5 <= a6) {
            // 0x4bb9dd
            *(char *)a5 = 4;
            return function_4b1080(a2, a5 + 1, v3);
        }
    } else {
        // 0x4bb968
        *(int64_t *)a4 = v4;
        result = v4;
        if (v4 <= a6) {
            // 0x4bb978
            *(char *)a5 = (char)function_4b0df0(a2 + 24, 0) + 2;
            return function_4b1080(a2, a5 + 1, v3);
        }
    }
    // 0x4bb932
    return result;
}

// Address range: 0x514590 - 0x5146c6
// From class:    std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_514590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x514590
    __readfsqword(40);
    int64_t v1 = a4; // bp-120, 0x5145d1
    int64_t v2 = (int64_t)&g9; // bp-80, 0x5145e5
    function_259ce();
    int64_t result = function_511c20(a1, a2, a3, a4, a5, a6, a7, &v2); // bp-104, 0x514616
    int64_t v3 = function_565f30(); // bp-72, 0x514633
    function_567850(v2, a8, a7, &v3);
    int64_t v4 = function_50f7d0(&result); // 0x514643
    if ((int32_t)v4 == -1 == (int32_t)function_50f7d0(&v1) == -1) {
        int32_t * v5 = (int32_t *)a7; // 0x514663
        *v5 = *v5 | 2;
    }
    // 0x514666
    if (g7 != &g8) {
        // 0x5146a0
        function_508620(&g8, &v3, 0x100000000 * a3 >> 32);
    }
    // 0x51467f
    __readfsqword(40);
    return result;
}

// Address range: 0x5148a0 - 0x5149d6
// From class:    std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_5148a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x5148a0
    __readfsqword(40);
    int64_t v1 = a4; // bp-120, 0x5148e1
    int64_t v2 = (int64_t)&g9; // bp-80, 0x5148f5
    function_259ce();
    int64_t result = function_511c20(a1, a2, a3, a4, a5, a6, a7, &v2); // bp-104, 0x514926
    int64_t v3 = function_565f30(); // bp-72, 0x514943
    function_5677a0(v2, a8, a7, &v3);
    int64_t v4 = function_50f7d0(&result); // 0x514953
    if ((int32_t)v4 == -1 == (int32_t)function_50f7d0(&v1) == -1) {
        int32_t * v5 = (int32_t *)a7; // 0x514973
        *v5 = *v5 | 2;
    }
    // 0x514976
    if (g7 != &g8) {
        // 0x5149b0
        function_508620(&g8, &v3, 0x100000000 * a3 >> 32);
    }
    // 0x51498f
    __readfsqword(40);
    return result;
}

// Address range: 0x51970f - 0x519750
int64_t function_51970f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x51970f
    int64_t v1; // 0x51970f
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x519717
    int64_t v3 = 15; // 0x519724
    if (v1 != a5) {
        // 0x519726
        v3 = *(int64_t *)(v1 + 16);
    }
    // 0x51972a
    if (v2 + 1 <= v3) {
        function_519680();
    }
    // 0x519733
    function_52b400(v1, v2, 0, 0, 1);
    return function_519680();
}

// Address range: 0x519750 - 0x5197f4
int64_t function_519750(int64_t a1, int64_t a2, int64_t a3) {
    // 0x519750
    int64_t result; // 0x519750
    function_4eeb40(result);
    if (a2 + 16 != a3) {
        // 0x51976b
        function_4eeb50(a3);
    }
    // 0x519770
    if (result == __readfsqword(40)) {
        // 0x519783
        return result;
    }
    while (true) {
        // 0x5197b3
        __stack_chk_fail();
        if (a2 + 16 != a3) {
            // 0x5197ce
            function_4eeb50(a3);
        }
        if (result != a1) {
            // 0x5197dd
            function_4eeb50(result);
        }
        // 0x5197e2
        _Unwind_Resume((struct _Unwind_Exception *)&g15);
        function_1fd40((int64_t)&g15);
        function_20a50();
    }
}

// Address range: 0x5197f4 - 0x5197f9
int64_t function_5197f4(void) {
    // 0x5197f4
    int64_t result; // 0x5197f4
    return result;
}

// Address range: 0x5197f9 - 0x519803
int64_t function_5197f9(void) {
    // 0x5197f9
    return function_20540();
}

// Address range: 0x519842 - 0x519845
int64_t function_519842(int64_t a1) {
    // 0x519842
    int64_t result; // 0x519842
    return result;
}

// Address range: 0x56fab0 - 0x56fbe4
int64_t function_56fab0(int64_t a1, int64_t a2) {
    uint16_t v1 = (int16_t)a2; // 0x56fab0
    if (v1 == (int16_t)&g5) {
        // 0x56fba0
        return __wctype_l("alpha", (struct __locale_struct *)*(int64_t *)(a1 + 16));
    }
    if (v1 <= (int16_t)&g5) {
        if (v1 == 4) {
            // 0x56fae7
            int64_t result; // 0x56fab0
            return result;
        }
        if (v1 < 5) {
            if (v1 == 1) {
                // 0x56fbd0
                return __wctype_l("blank", (struct __locale_struct *)*(int64_t *)(a1 + 16));
            }
            // 0x56fb2a
            if (v1 == 2) {
                // 0x56fb30
                return __wctype_l("cntrl", (struct __locale_struct *)*(int64_t *)(a1 + 16));
            }
        } else {
            if (v1 == 256) {
                // 0x56fb88
                return __wctype_l("upper", (struct __locale_struct *)*(int64_t *)(a1 + 16));
            }
            // 0x56fb07
            if (v1 == (int16_t)&g2) {
                // 0x56fb0e
                return __wctype_l("lower", (struct __locale_struct *)*(int64_t *)(a1 + 16));
            }
        }
        // 0x56fae7
        return 0;
    }
    if (v1 == (int16_t)&g13) {
        // 0x56fb40
        return __wctype_l("graph", (struct __locale_struct *)*(int64_t *)(a1 + 16));
    }
    if (v1 > (int16_t)&g13) {
        if (v1 == (int16_t)&g3) {
            // 0x56fb50
            return __wctype_l("space", (struct __locale_struct *)*(int64_t *)(a1 + 16));
        }
        if (v1 == (int16_t)"le") {
            // 0x56fbc0
            return __wctype_l("print", (struct __locale_struct *)*(int64_t *)(a1 + 16));
        }
        // 0x56fae7
        int64_t v2; // 0x56fab0
        return v1 == (int16_t)&g1 ? v2 : 0;
    }
    if (v1 == (int16_t)L"\n2") {
        // 0x56fbb0
        return __wctype_l("digit", (struct __locale_struct *)*(int64_t *)(a1 + 16));
    }
    // 0x56fb67
    if (v1 == (int16_t)&g12) {
        // 0x56fb72
        return __wctype_l("alnum", (struct __locale_struct *)*(int64_t *)(a1 + 16));
    }
    // 0x56fae7
    return 0;
}

// Address range: 0x573580 - 0x5736b4
int64_t function_573580(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t result, int64_t a10) {
    // 0x573580
    __readfsqword(40);
    if (result != 0) {
        // 0x5735d3
        __readfsqword(40);
        return result;
    }
    int32_t v1 = 0; // bp-88, 0x573608
    int64_t result2 = (int64_t)&v1; // 0x57361c
    if (*(int32_t *)a8 != 0) {
        // 0x5735d3
        __readfsqword(40);
        return result2;
    }
    // 0x573678
    *(int64_t *)a10 = a10 + 16;
    function_54c6d0(a10, result2, result2, 0);
    *(int64_t *)(a10 + 32) = 0x570470;
    return 0x570470;
}
