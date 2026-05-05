/*
 * Targeted RetDec C for native executable gap queue batch 25.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4a1b4-0x4a2a1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x687c4-0x688b1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54df80-0x54e06d rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b4b6-0x2b5a2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e15fc-0x1e16e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efa60-0x4efb4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x57c670-0x57c75c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aad8-0x4abc3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56df8-0x56ee3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x632e0-0x633cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x7192a-0x71a15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ff5b0-0x4ff69b rank=- name=- kind=- bytes=- uncovered=-
 *   0x501420-0x50150b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36d98-0x36e82 rank=- name=- kind=- bytes=- uncovered=-
 *   0x380dc-0x381c6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ff30-0x5001a rank=- name=- kind=- bytes=- uncovered=-
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
extern int g23;
extern int g24;
extern int g25;
extern int g26;
extern int g27;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g32;
extern int g33;
extern int g35;
extern int g36;
extern int g37;
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

int64_t function_1e15fc();
int64_t function_1fd40();
int64_t function_20130();
int64_t function_20210();
int64_t function_203b0();
int64_t function_20540();
int64_t function_20a50();
int64_t function_24ded();
int64_t function_2508e();
int64_t function_254fe();
int64_t function_2b130();
int64_t function_2b4b6();
int64_t function_2b60e();
int64_t function_2b64a();
int64_t function_2cafa();
int64_t function_2ce9a();
int64_t function_2ceb0();
int64_t function_35fcc();
int64_t function_36990();
int64_t function_36d98();
int64_t function_4a1b4();
int64_t function_4a39a();
int64_t function_4a41e();
int64_t function_4aad8();
int64_t function_4d688();
int64_t function_4d906();
int64_t function_4eeb50();
int64_t function_4ef1f0();
int64_t function_4ef2e0();
int64_t function_4efc80();
int64_t function_4efce0();
int64_t function_4efd30();
int64_t function_4f0ae0();
int64_t function_4f0bc0();
int64_t function_4f18e0();
int64_t function_4ff30();
int64_t function_4ff460();
int64_t function_4ff5b0();
int64_t function_5012d0();
int64_t function_501420();
int64_t function_5423b0();
int64_t function_542590();
int64_t function_54df80();
int64_t function_56630();
int64_t function_56df8();
int64_t function_5797e0();
int64_t function_57ba10();
int64_t function_57c670();
int64_t function_63286();
int64_t function_632e0();
int64_t function_686a0();
int64_t function_687c4();
int64_t function_717ca();
int64_t function_717fa();
int64_t function_71842();
int64_t function_7192a();
int64_t function_71b9e();
int64_t function_71c60();
int64_t function_7259e();
int64_t function_7260a();
int64_t function_72994();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_72b18();
int64_t function_c6d58();

// Address range: 0x2b4b6 - 0x2b5a2
int64_t function_2b4b6(int64_t a1) {
    int64_t v1 = a1 + 136; // 0x2b4c5
    int64_t v2 = a1 + 8; // 0x2b4cf
    int64_t v3 = __readfsqword(40); // 0x2b4d7
    *(int64_t *)a1 = (int64_t)&g24;
    int64_t v4; // bp-56, 0x2b4b6
    function_729b6(&v4);
    function_7260a(v1);
    char * v5 = (char *)(a1 + 89); // 0x2b504
    if (*v5 != 0) {
        // 0x2b50b
        function_2b64a(v2);
        *v5 = 0;
        __asm_mfence(v2);
    }
    // 0x2b51a
    function_2b130(a1, a1 + 128);
    function_2b130(a1, a1 + 124);
    int64_t * v6 = (int64_t *)(a1 + 96); // 0x2b535
    *(int64_t *)(a1 + 104) = *v6;
    *(int32_t *)(a1 + 120) = 0;
    __asm_mfence((int64_t)&v4);
    function_729ce();
    function_7259e(v1);
    int64_t v7 = *v6; // 0x2b557
    if (v7 != 0) {
        // 0x2b560
        function_4eeb50(v7);
    }
    // 0x2b565
    function_72994(a1 + 48);
    *(int64_t *)v2 = (int64_t)&g23;
    function_2b60e(v2);
    int64_t result = 0; // 0x2b58e
    if (v3 != __readfsqword(40)) {
        // 0x2b590
        __stack_chk_fail();
        result = (int64_t)&g37;
    }
    // 0x2b595
    return result;
}

// Address range: 0x36d98 - 0x36e82
int64_t function_36d98(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x36dba
    int64_t v2 = a2 - a1;
    int64_t v3 = 0x1fffffffffffffff; // 0x36de2
    int64_t v4; // 0x36d98
    int64_t v5; // 0x36d98
    int64_t v6; // 0x36d98
    int64_t v7; // 0x36d98
    if (v3 > 0x1fffffffffffffff | v3 < *v1 - a1 >> 3) {
        goto lab_0x36e6d;
    } else {
        // 0x36ded
        v4 = v2;
        v5 = v3;
        v6 = a1;
        v7 = 0;
        if (v3 != 0) {
            goto lab_0x36e6d;
        } else {
            goto lab_0x36df5;
        }
    }
  lab_0x36e6d:;
    int64_t v8 = 8 * v3; // 0x36e6d
    int64_t v9 = function_4efd30(v8); // 0x36e75
    v4 = a2 - v8;
    v5 = v3;
    v6 = v8;
    v7 = v9;
    goto lab_0x36df5;
  lab_0x36df5:
    // 0x36df5
    *(int64_t *)(v7 + v2) = a3;
    if (v6 != a2) {
        // 0x36e0c
        memmove((int64_t *)v7, (int64_t *)v6, (int32_t)v4);
    }
    int64_t v10 = *v1; // 0x36e1a
    int64_t v11 = v4 + 8 + v7; // 0x36e1f
    int64_t v12 = v10 - a2; // 0x36e27
    if (v10 != a2) {
        // 0x36e2f
        __asm_rep_movsb_memcpy((char *)v11, (char *)a2, v12);
    }
    if (v6 != 0) {
        // 0x36e43
        function_4eeb50(v6);
    }
    // 0x36e4b
    *(int64_t *)a1 = v7;
    *v1 = v12 + v11;
    *(int64_t *)(a1 + 16) = v7 + 8 * v5;
    int64_t result; // 0x36d98
    return result;
}

// Address range: 0x380dc - 0x381c6
// Demangled:     long long
int64_t x(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x380dc
    *(int32_t *)&g33 = 0;
    int64_t v1 = __readfsqword(40); // 0x380ec
    uint32_t v2 = (int32_t)a2; // 0x380fc
    if ((int32_t)a1 < 3 == v2 > 19) {
        // 0x38111
        if (*(int32_t *)(a1 + 4) == v2) {
            // 0x3811a
            if (*(int32_t *)(a1 + 8) == 1) {
                char v3 = g31; // 0x3812b
                g31 = v3 == 0 ? 1 : v3;
                if (v3 == 0) {
                    // 0x3813b
                    if (*(int32_t *)(a1 + 20) < 3) {
                        int64_t v4 = function_4efd30((int64_t)&g7); // 0x38146
                        function_2cafa(v4);
                        int64_t v5 = *(int64_t *)(a1 + 12); // 0x38156
                        g32 = v4;
                        int64_t v6 = v5 != 0 ? v5 : (int64_t)&g33; // 0x3816b
                        int64_t v7 = function_2ce9a(); // 0x3816f
                        int32_t v8 = *(int32_t *)(a1 + 24); // 0x3817f
                        function_2ceb0(v7, v8, a1 + 28, a1 + 92, a1 + 156, a1 + 220, a1 + (int64_t)&g9, a4, v6);
                    }
                }
            }
        }
    }
    int64_t result = 0; // 0x381b8
    if (v1 != __readfsqword(40)) {
        // 0x381ba
        __stack_chk_fail();
        result = (int64_t)&g37;
    }
    // 0x381bf
    return result;
}

// Address range: 0x4a1b4 - 0x4a2a1
int64_t function_4a1b4(int64_t a1) {
    int64_t v1 = a1 + (int64_t)&g21; // 0x4a1c0
    *(int64_t *)(a1 + (int64_t)&g21 - 2000) = (int64_t)&g25;
    function_4a41e(v1);
    int64_t v2 = *(int64_t *)v1; // 0x4a1d7
    if (v2 != a1 + (int64_t)L"\n2") {
        // 0x4a1ea
        function_4eeb50(v2);
    }
    // 0x4a1ef
    function_72994(a1 + (int64_t)&g20);
    function_2508e(a1 + (int64_t)&g19);
    int64_t v3; // 0x4a1b4
    function_254fe(a1 + (int64_t)&g18, v3);
    function_4a39a(a1 + (int64_t)&g17);
    function_72994(a1 + (int64_t)&g15);
    int64_t * v4 = (int64_t *)(a1 + (int64_t)&g12); // 0x4a22b
    int64_t v5 = *v4; // 0x4a22b
    if (v5 != 0) {
        int64_t v6 = *(int64_t *)v5; // 0x4a237
        function_4eeb50(v5);
        while (v6 != 0) {
            int64_t v7 = v6;
            v6 = *(int64_t *)v7;
            function_4eeb50(v7);
        }
    }
    int64_t v8 = *(int64_t *)(a1 + (int64_t)&g11); // 0x4a244
    int64_t * v9 = (int64_t *)(a1 + (int64_t)&g10); // 0x4a24b
    __asm_rep_stosb_memset((char *)*v9, 0, 8 * v8);
    *(int64_t *)(a1 + (int64_t)&g13) = 0;
    *v4 = 0;
    int64_t v10 = *v9; // 0x4a27b
    if (v10 != a1 + (int64_t)&g14) {
        // 0x4a287
        function_4eeb50(v10);
    }
    // 0x4a28c
    function_4d688(a1 + 40);
    return function_2508e(a1 + 16);
}

// Address range: 0x4aad8 - 0x4abc3
int64_t function_4aad8(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x4aad8
    uint32_t v2 = *v1; // 0x4aad8
    if (v2 >= 0) {
        // 0x4aadf
        if ((int64_t)g30 != a1) {
            // 0x4aae8
            *v1 = v2 + 1;
        }
        // 0x4aafe
        return a1 + 24;
    }
    uint64_t v3 = *(int64_t *)(a1 + 8); // 0x4ab19
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x4ab22
        function_542590("basic_string::_S_create");
    }
    int64_t v4 = a1; // 0x4ab31
    if (v3 < a1) {
        uint64_t v5 = 2 * v3; // 0x4ab33
        v4 = v5 > a1 ? v5 : a1;
    }
    uint64_t v6 = v4 + 57; // 0x4ab3e
    int64_t v7 = v4; // 0x4ab48
    if (v6 > (int64_t)&g1 && v3 < v4) {
        uint64_t v8 = v4 + (int64_t)&g1 - (v6 & (int64_t)(int32_t)&g35); // 0x4ab5b
        v7 = v8 < 0x3ffffffffffffff9 ? v8 : 0x3ffffffffffffff9;
    }
    int64_t v9 = v7 + 25; // 0x4ab6f
    int64_t v10 = function_4efd30(v9); // 0x4ab73
    *(int64_t *)(v10 + 8) = v7;
    int64_t result = v10 + 24; // 0x4ab80
    *(int32_t *)(v10 + 16) = 0;
    if (v9 != 0) {
        char * v11 = (char *)(a1 + 24);
        if (v9 != 1) {
            // 0x4ab9e
            __asm_rep_movsb_memcpy((char *)result, v11, v9);
        } else {
            // 0x4ab96
            *(char *)result = *v11;
        }
    }
    // 0x4abaa
    if (v10 != (int64_t)g30) {
        // 0x4abb3
        *(int64_t *)v10 = v9;
        *(char *)(result + v9) = 0;
    }
    // 0x4abbc
    return result;
}

// Address range: 0x4ff30 - 0x5001a
int64_t function_4ff30(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4ff52
    int64_t v2 = a2 - a1;
    int64_t v3 = 0x1fffffffffffffff; // 0x4ff7a
    int64_t v4; // 0x4ff30
    int64_t v5; // 0x4ff30
    int64_t v6; // 0x4ff30
    int64_t v7; // 0x4ff30
    if (v3 > 0x1fffffffffffffff | v3 < *v1 - a1 >> 3) {
        goto lab_0x50005;
    } else {
        // 0x4ff85
        v4 = v2;
        v5 = v3;
        v6 = a1;
        v7 = 0;
        if (v3 != 0) {
            goto lab_0x50005;
        } else {
            goto lab_0x4ff8d;
        }
    }
  lab_0x50005:;
    int64_t v8 = 8 * v3; // 0x50005
    int64_t v9 = function_4efd30(v8); // 0x5000d
    v4 = a2 - v8;
    v5 = v3;
    v6 = v8;
    v7 = v9;
    goto lab_0x4ff8d;
  lab_0x4ff8d:
    // 0x4ff8d
    *(int64_t *)(v7 + v2) = a3;
    if (v6 != a2) {
        // 0x4ffa4
        memmove((int64_t *)v7, (int64_t *)v6, (int32_t)v4);
    }
    int64_t v10 = *v1; // 0x4ffb2
    int64_t v11 = v4 + 8 + v7; // 0x4ffb7
    int64_t v12 = v10 - a2; // 0x4ffbf
    if (v10 != a2) {
        // 0x4ffc7
        __asm_rep_movsb_memcpy((char *)v11, (char *)a2, v12);
    }
    if (v6 != 0) {
        // 0x4ffdb
        function_4eeb50(v6);
    }
    // 0x4ffe3
    *(int64_t *)a1 = v7;
    *v1 = v12 + v11;
    *(int64_t *)(a1 + 16) = v7 + 8 * v5;
    int64_t result; // 0x4ff30
    return result;
}

// Address range: 0x56df8 - 0x56ee3
int64_t function_56df8(int64_t a1, int64_t a2) {
    // 0x56df8
    function_56630();
    int64_t * v1 = (int64_t *)(a2 + (int64_t)&g3); // 0x56e0e
    int64_t * v2 = (int64_t *)(a2 + (int64_t)&g2); // 0x56e15
    int64_t v3 = *v1 - *v2; // 0x56e15
    int64_t v4 = a1 + 45; // 0x56e1c
    int64_t v5 = a2 + 12; // 0x56e20
    *(int64_t *)a1 = (int64_t)&g27;
    *(int64_t *)(a1 + 33) = v5;
    uint64_t v6 = v3 >> 5; // 0x56e3a
    *(int32_t *)(a1 + 41) = *(int32_t *)(a2 + 8);
    int32_t v7 = *(int32_t *)(a2 + (int64_t)"GNU"); // 0x56e41
    __asm_rep_movsd_memcpy((char *)v4, (char *)v5, 128);
    int64_t * v8 = (int64_t *)(a1 + (int64_t)&g5); // 0x56e49
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + (int64_t)&g6); // 0x56e54
    *v9 = 0;
    *(int32_t *)(a1 + (int64_t)&g4) = v7;
    int64_t * v10 = (int64_t *)(a1 + (int64_t)&g8); // 0x56e65
    *v10 = 0;
    int64_t v11 = 0; // 0x56e70
    if (v6 != 0) {
        if (v6 >= 0x800000000000000) {
            // 0x56e81
            bool v12; // 0x56df8
            int64_t v13 = (v12 ? -512 : 512) + v4; // 0x56e47
            function_5423b0(v13, v13);
        }
        // 0x56e86
        v11 = function_4efd30(v3);
    }
    // 0x56e95
    *v8 = v11;
    *v9 = v11;
    *v10 = v11 + v3;
    int64_t v14 = *v1; // 0x56ead
    int64_t v15 = *v2; // 0x56eb4
    int64_t v16 = v14 - v15; // 0x56ebe
    int64_t dest_mem = v11; // 0x56ec4
    if (v14 != v15) {
        // 0x56ec6
        dest_mem = (int64_t)memmove((int64_t *)v11, (int64_t *)v15, (int32_t)v16);
    }
    // 0x56ed4
    *v9 = dest_mem + v16;
    return dest_mem;
}

// Address range: 0x632e0 - 0x633cb
int64_t function_632e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 8; // 0x632f3
    int64_t result = function_4efd30(104); // 0x632fc
    int64_t v2 = result + 40; // 0x6330c
    int64_t * v3 = (int64_t *)(result + 32); // 0x63316
    *v3 = a2;
    function_63286(v2, a2 + 8);
    int64_t v4 = *(int64_t *)(a1 + 16);
    int64_t v5 = v1; // 0x63329
    int64_t * v6; // 0x632e0
    int64_t v7; // 0x632e0
    int64_t result2; // 0x632e0
    if (v4 == 0) {
        goto lab_0x6334f;
    } else {
        uint64_t v8 = *v3; // 0x6332f
        v5 = v4;
        int64_t * v9 = (int64_t *)(v5 + 32);
        uint64_t v10 = *v9; // 0x6332b
        int64_t v11 = *(int64_t *)((v8 >= v10 ? 24 : 16) + v5);
        while (v11 != 0) {
            // 0x6332b
            v5 = v11;
            v9 = (int64_t *)(v5 + 32);
            v10 = *v9;
            v11 = *(int64_t *)((v8 >= v10 ? 24 : 16) + v5);
        }
        // 0x6334b
        v6 = v9;
        v7 = v8;
        result2 = v5;
        if (v8 >= v10) {
            goto lab_0x63363;
        } else {
            goto lab_0x6334f;
        }
    }
  lab_0x6334f:;
    int64_t v12 = v5; // 0x63354
    if (*(int64_t *)(a1 + 24) == v5) {
        goto lab_0x6338b;
    } else {
        int64_t v13 = function_4f0ae0(v5); // 0x63359
        v6 = (int64_t *)(v13 + 32);
        v7 = *v3;
        result2 = v13;
        goto lab_0x63363;
    }
  lab_0x6338b:;
    int64_t v14 = 1; // 0x63391
    if (v1 != v12) {
        // 0x63393
        v14 = *v3 < *(int64_t *)(v12 + 32);
    }
    // 0x6339f
    function_4f0bc0(v14, result, v12, v1);
    int64_t * v15 = (int64_t *)(a1 + 40); // 0x633b1
    *v15 = *v15 + 1;
    // 0x633be
    return result;
  lab_0x63363:
    // 0x63363
    v12 = v5;
    if (*v6 >= v7) {
        // 0x63372
        function_254fe(v2, v7);
        function_4eeb50(result);
        // 0x633be
        return result2;
    }
    goto lab_0x6338b;
}

// Address range: 0x687c4 - 0x688b1
int64_t function_687c4(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x687cf
    function_686a0();
    if (*(int32_t *)(a1 + 116) == 1) {
        int64_t v2 = 0; // bp-40, 0x687fc
        int64_t v3 = function_4efd30(416); // 0x68805
        function_71c60(v3);
        int64_t v4 = function_4efd30(32); // 0x68822
        *(int64_t *)(v4 + 24) = v3;
        *(int64_t *)(v4 + 8) = 0x100000001;
        int64_t v5 = v3; // bp-48, 0x68840
        *(int64_t *)v4 = (int64_t)&g26;
        int64_t v6 = v2; // 0x6884b
        v2 = v4;
        int64_t v7 = v6; // bp-56, 0x6885a
        function_35fcc(&v7);
        int64_t v8 = a1 + 120; // 0x68863
        function_4d906(v8, &v5);
        int64_t * v9 = (int64_t *)v8; // 0x6886f
        function_35fcc(&v2);
        if (*v9 != 0) {
            // 0x68881
            function_72b18(*v9, 0);
            *(char *)(a1 + 136) = 1;
        }
    }
    int64_t result = 0; // 0x688a1
    if (v1 != __readfsqword(40)) {
        // 0x688a3
        __stack_chk_fail();
        result = (int64_t)&g37;
    }
    // 0x688a8
    return result;
}

// Address range: 0x7192a - 0x71a15
int64_t function_7192a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x71942
    int64_t v2 = function_717fa(); // bp-432, 0x7195d
    int64_t name; // bp-422, 0x7192a
    int32_t v3 = uname((struct utsname *)&name); // 0x71962
    int64_t v4; // bp-162, 0x7192a
    int64_t v5 = v3 != 0 ? (int64_t)&g16 : (int64_t)&v4; // 0x7197f
    function_71b9e(&v2, v5);
    int64_t v6; // 0x7192a
    int64_t v7; // 0x7192a
    if (function_36990(&v2, "x86_64", 0, function_24ded("x86_64")) == -1) {
        // 0x719c2
        v6 = function_24ded("32-bit");
        v7 = (int64_t)"32-bit";
    } else {
        // 0x719ad
        v6 = function_24ded("64-bit");
        v7 = (int64_t)"64-bit";
    }
    int64_t v8 = v7;
    int64_t v9 = function_71842((char *)v8, v8 + v6); // 0x719d9
    *(int64_t *)a1 = v9;
    function_717ca(v2 - 24);
    int64_t result = a1; // 0x71a04
    if (v1 != __readfsqword(40)) {
        // 0x71a06
        __stack_chk_fail();
        result = (int64_t)&g37;
    }
    // 0x71a0b
    return result;
}

// Address range: 0x1e15fc - 0x1e16e6
int64_t function_1e15fc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2 & 0xffffffff; // 0x1e15fc
    int64_t v2; // 0x1e15fc
    int64_t v3 = (int64_t)&v2; // 0x1e15fc
    int64_t v4; // 0x1e15fc
    bool v5; // 0x1e15fc
    int64_t result = v4 - (v5 ? 0xec834801 : 0xec834800) & 0xffffffff; // 0x1e15fe
    char * v6 = (char *)(result - 59); // 0x1e1603
    char v7 = *v6 | (char)(a4 / 256); // 0x1e1603
    *v6 = v7;
    if (v7 >= 0 != v7 != 0) {
        // 0x1e1608
        *(int64_t *)(v1 - 8) = v3;
        *(int64_t *)(v1 - 24) = result;
        return result;
    }
    int64_t * v8 = (int64_t *)(v1 + 8); // 0x1e1618
    int64_t * v9 = (int64_t *)v1; // 0x1e1621
    *v9 = v3;
    int64_t v10 = *(int64_t *)(v1 + 48); // 0x1e1650
    *v8 = v10;
    *v9 = v10;
    int64_t * v11 = (int64_t *)(v1 - 8); // 0x1e1657
    *v11 = v10;
    *v8 = 0x6ad84828;
    *v9 = 0x35643482;
    *v11 = v10;
    int64_t v12 = v1 + 24; // 0x1e1690
    int64_t * v13 = (int64_t *)v12; // 0x1e1690
    *v13 = *v8;
    *v9 = 0x4563efb0;
    *v11 = *(int64_t *)(v1 + 32);
    *(int64_t *)(v1 + 40) = *v8;
    *v8 = v12;
    int64_t v14 = *v13; // 0x1e16cb
    *(int64_t *)(v1 + 16) = v14;
    *v8 = v14;
    return function_c6d58(a1, &v2);
}

// Address range: 0x4efa60 - 0x4efb4c
int64_t __cxa_call_unexpected(int64_t a1) {
    // 0x4efa60
    __readfsqword(40);
    function_1fd40(a1);
    function_1fd40(function_4efce0(*(int64_t *)(a1 - 64)));
    int64_t v1 = *(int64_t *)function_20130(); // 0x4efaaf
    int64_t v2 = v1 + 112; // 0x4efaba
    if (*(char *)(v1 + 80) % 2 != 0) {
        // 0x4efabc
        v2 = *(int64_t *)v1;
    }
    int64_t v3 = (int64_t)*(int32_t *)(a1 - 36); // 0x4efa90
    int64_t v4 = v2;
    int64_t v5; // bp-104, 0x4efa60
    function_4ef2e0(0, *(int64_t *)(a1 - 24), &v5);
    int64_t v6 = function_4ef1f0(&v5, *(int64_t *)(v4 - 112), v4, v3); // 0x4efadc
    int64_t v7 = (int64_t)&v5; // 0x4efae3
    if ((char)v6 != 0) {
        // 0x4efae5
        v7 = function_20a50();
        function_20540();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v7);
    }
    int64_t v8 = function_4ef1f0((int64_t *)v7, (int64_t)&g28, 0, v3); // 0x4efb11
    if ((char)v8 != 0) {
        int64_t v9 = function_20210(8); // 0x4efb1f
        *(int64_t *)v9 = (int64_t)&g29;
        function_203b0(v9, &g28, 0x4efb60);
    }
    // 0x4efb44
    return function_4efc80(*(int64_t *)(a1 - 56));
}

// Address range: 0x4ff5b0 - 0x4ff699
int64_t function_4ff5b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4ff5b0
    __readfsqword(40);
    if ((char)function_4ff460() == 0) {
        // 0x4ff5ea
        __readfsqword(40);
        return -1;
    }
    // 0x4ff618
    function_4f18e0(a1 + 104, a2, a3 & 0xffffffff);
    int64_t result = -1; // 0x4ff62b
    if (result != -1) {
        int64_t v1 = *(int64_t *)(a1 + 208); // 0x4ff62d
        *(int64_t *)(a1 + 132) = a4;
        *(char *)(a1 + 169) = 0;
        *(char *)(a1 + 170) = 0;
        *(int64_t *)(a1 + 40) = 0;
        *(int64_t *)(a1 + 32) = 0;
        *(int64_t *)(a1 + 232) = v1;
        *(int64_t *)(a1 + 224) = v1;
        int64_t v2 = *(int64_t *)(a1 + 152); // 0x4ff66d
        *(int64_t *)(a1 + 48) = 0;
        *(int64_t *)(a1 + 8) = v2;
        *(int64_t *)(a1 + 16) = v2;
        *(int64_t *)(a1 + 24) = v2;
    }
    // 0x4ff5ea
    __readfsqword(40);
    return result;
}

// Address range: 0x501420 - 0x501509
int64_t function_501420(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x501420
    __readfsqword(40);
    if ((char)function_5012d0() == 0) {
        // 0x50145a
        __readfsqword(40);
        return -1;
    }
    // 0x501488
    function_4f18e0(a1 + 104, a2, a3 & 0xffffffff);
    int64_t result = -1; // 0x50149b
    if (result != -1) {
        int64_t v1 = *(int64_t *)(a1 + 208); // 0x50149d
        *(int64_t *)(a1 + 132) = a4;
        *(char *)(a1 + 169) = 0;
        *(char *)(a1 + 170) = 0;
        *(int64_t *)(a1 + 40) = 0;
        *(int64_t *)(a1 + 32) = 0;
        *(int64_t *)(a1 + 232) = v1;
        *(int64_t *)(a1 + 224) = v1;
        int64_t v2 = *(int64_t *)(a1 + 152); // 0x5014dd
        *(int64_t *)(a1 + 48) = 0;
        *(int64_t *)(a1 + 8) = v2;
        *(int64_t *)(a1 + 16) = v2;
        *(int64_t *)(a1 + 24) = v2;
    }
    // 0x50145a
    __readfsqword(40);
    return result;
}

// Address range: 0x54df80 - 0x54e06d
int64_t function_54df80(int64_t a1, uint64_t a2) {
    uint32_t v1 = (int32_t)a2; // 0x54df80
    if (v1 < 128) {
        // 0x54df85
        if (*(int64_t *)(a1 + 8) == a1) {
            // 0x54dfe3
            return 0;
        }
        // 0x54df90
        *(int64_t *)a1 = a1 + 1;
        *(char *)a1 = (char)a2;
        return 1;
    }
    int64_t * v2; // 0x54df80
    char * v3; // 0x54df80
    int64_t v4; // 0x54df80
    if (v1 > (int32_t)&g22) {
        if (v1 > (int32_t)&g36) {
            // 0x54e030
            if (v1 >= 0x110000 || *(int64_t *)(a1 + 8) - a1 < 4) {
                // 0x54dfe3
                return 0;
            }
            // 0x54e04a
            *(char *)a1 = (char)(v1 / 0x40000) - 16;
            *(int64_t *)a1 = a1 + 1;
            return a2 / 0x1000 % 64;
        }
        // 0x54dff0
        if (*(int64_t *)(a1 + 8) - a1 < 3) {
            // 0x54dfe3
            return 0;
        }
        int64_t v5 = a1 + 1;
        int64_t * v6 = (int64_t *)a1;
        char * v7 = (char *)a1;
        *v6 = v5;
        *v7 = (char)(v1 / 64) % 64 | -128;
        v3 = v7;
        v2 = v6;
        v4 = v5;
    } else {
        // 0x54dfa8
        if (*(int64_t *)(a1 + 8) - a1 < 2) {
            // 0x54dfe3
            return 0;
        }
        int64_t v8 = a1 + 1;
        int64_t * v9 = (int64_t *)a1;
        *v9 = v8;
        char * v10 = (char *)a1;
        *v10 = (char)(v1 / 64) - 64;
        v3 = v10;
        v2 = v9;
        v4 = v8;
    }
    // 0x54dfcb
    *v2 = v4;
    *v3 = (char)a2 % 64 | -128;
    // 0x54dfe3
    return 1;
}

// Address range: 0x57c670 - 0x57c759
int64_t function_57c670(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x57c676
    int64_t v2 = *v1; // 0x57c676
    __readfsqword(40);
    int32_t v3 = 0; // bp-40, 0x57c68a
    char v4 = *(char *)v2; // 0x57c692
    if (v4 == 46 || v4 == 69 || v4 == 0) {
        // 0x57c717
        __readfsqword(40);
        return 0;
    }
    int64_t v5 = (int64_t)&v3; // 0x57c670
    char v6 = v4;
    if (v6 != 82 != v6 != 79) {
        // 0x57c702
        if (*(char *)(v2 + 1) == 69) {
            goto lab_0x57c730_3;
        }
    }
    int64_t v7 = function_57ba10(a1, a2 & -256); // 0x57c70b
    int64_t result = 0; // 0x57c713
    while (v7 != 0) {
        int64_t v8 = function_5797e0(a1, 46, v7, 0); // 0x57c6cd
        *(int64_t *)v5 = v8;
        result = 0;
        if (v8 == 0) {
            // break -> 0x57c717
            break;
        }
        int64_t v9 = *v1; // 0x57c6db
        char v10 = *(char *)v9; // 0x57c6e3
        bool v11 = v10 == 0 | v10 == 69;
        if (v11) {
            goto lab_0x57c730_3;
        }
        int64_t v12 = v9; // 0x57c6f8
        v5 = v8 + 16;
        if (v10 == 46) {
            goto lab_0x57c730_3;
        }
        v6 = v10;
        if (v6 != 82 != v6 != 79) {
            // 0x57c702
            if (*(char *)(v12 + 1) == 69) {
                goto lab_0x57c730_3;
            }
        }
        // 0x57c708
        v7 = function_57ba10(a1, (int64_t)v11);
        result = 0;
    }
  lab_0x57c717:
    // 0x57c717
    __readfsqword(40);
    return result;
  lab_0x57c730_3:
    // 0x57c730
    result = 0;
    if (v3 == 0) {
        goto lab_0x57c717;
    } else {
        int64_t result2 = v3; // 0x57c730
        result = result2;
        if (*(int64_t *)(result2 + 16) != 0) {
            goto lab_0x57c717;
        } else {
            int64_t v13 = *(int64_t *)(result2 + 8); // 0x57c740
            result = result2;
            if (*(int32_t *)v13 != 39) {
                goto lab_0x57c717;
            } else {
                int64_t v14 = *(int64_t *)(v13 + 8); // 0x57c749
                result = result2;
                if (*(int32_t *)(v14 + 28) == 9) {
                    int32_t * v15 = (int32_t *)(a1 + 80); // 0x57c756
                    *v15 = *v15 - *(int32_t *)(v14 + 8);
                    return result2;
                }
                goto lab_0x57c717;
            }
        }
    }
}
