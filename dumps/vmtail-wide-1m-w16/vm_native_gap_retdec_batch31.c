/*
 * Targeted RetDec C for native executable gap queue batch 31.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x52b320-0x52b3ef rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bcaa-0x4bd78 rank=- name=- kind=- bytes=- uncovered=-
 *   0x61c46-0x61d14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c8790-0x4c885e rank=- name=- kind=- bytes=- uncovered=-
 *   0x549da0-0x549e6e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fc50-0x4fd1d rank=- name=- kind=- bytes=- uncovered=-
 *   0x6a8a4-0x6a971 rank=- name=- kind=- bytes=- uncovered=-
 *   0x574600-0x5746cd rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dd22-0x4ddee rank=- name=- kind=- bytes=- uncovered=-
 *   0x50ae2-0x50bae rank=- name=- kind=- bytes=- uncovered=-
 *   0x5104a-0x51116 rank=- name=- kind=- bytes=- uncovered=-
 *   0x688b2-0x6897e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d1ea0-0x4d1f6c rank=- name=- kind=- bytes=- uncovered=-
 *   0x5700a0-0x57016c rank=- name=- kind=- bytes=- uncovered=-
 *   0x50d5a-0x50e24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b08f0-0x4b09ba rank=- name=- kind=- bytes=- uncovered=-
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
struct eac_retdec_cpuid_regs { uint32_t e0; uint32_t e1; uint32_t e2; uint32_t e3; };
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
int64_t function_35fcc();
int64_t function_48da52();
int64_t function_48fb27();
int64_t function_4b08f0();
int64_t function_4b0fc0();
int64_t function_4b1220();
int64_t function_4b1590();
int64_t function_4b19a0();
int64_t function_4baf6();
int64_t function_4bcaa();
int64_t function_4bffc();
int64_t function_4c04e();
int64_t function_4c0ce();
int64_t function_4c1820();
int64_t function_4c1850();
int64_t function_4c1880();
int64_t function_4c1d00();
int64_t function_4c367();
int64_t function_4c8790();
int64_t function_4d1ea0();
int64_t function_4d906();
int64_t function_4dd22();
int64_t function_4df9c();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0a80();
int64_t function_4fc50();
int64_t function_4ff08();
int64_t function_50a92();
int64_t function_50ae2();
int64_t function_50d5a();
int64_t function_5104a();
int64_t function_5236c();
int64_t function_5248a();
int64_t function_52586();
int64_t function_529c2();
int64_t function_52b020();
int64_t function_52b320();
int64_t function_549a50();
int64_t function_549da0();
int64_t function_56fab0();
int64_t function_5700a0();
int64_t function_5744f0();
int64_t function_574600();
int64_t function_574610();
int64_t function_574630();
int64_t function_574640();
int64_t function_574660();
int64_t function_5bff9();
int64_t function_5c2b6();
int64_t function_61c46();
int64_t function_63032();
int64_t function_6307c();
int64_t function_687c4();
int64_t function_688b2();
int64_t function_6a79c();
int64_t function_6a8a4();
int64_t function_7259e();
int64_t function_7293a();
int64_t function_72994();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x4bcaa - 0x4bd78
int64_t function_4bcaa(int64_t a1) {
    // 0x4bcaa
    *(int64_t *)a1 = (int64_t)&g4;
    function_4baf6();
    function_7259e(a1 + 544);
    function_72994(a1 + 504);
    function_4c0ce(a1 + 424);
    function_72994(a1 + 384);
    int64_t v1 = a1 + 328; // 0x4bced
    function_4c04e(v1);
    int64_t v2 = *(int64_t *)v1; // 0x4bcf9
    if (v2 != a1 + 376) {
        // 0x4bd0c
        function_4eeb50(v2);
    }
    int64_t v3 = a1 + 272; // 0x4bd11
    function_4bffc(v3);
    int64_t v4 = *(int64_t *)v3; // 0x4bd1d
    if (v4 != a1 + 320) {
        // 0x4bd30
        function_4eeb50(v4);
    }
    int64_t * v5 = (int64_t *)(a1 + 248); // 0x4bd35
    function_4c367(*v5, *(int64_t *)(a1 + 256));
    int64_t v6 = *v5; // 0x4bd48
    if (v6 != 0) {
        // 0x4bd54
        function_4eeb50(v6);
    }
    // 0x4bd59
    function_2508e(a1 + 232);
    function_4df9c(a1 + 104);
    return function_72994(a1 + 16);
}

// Address range: 0x4dd22 - 0x4ddee
int64_t function_4dd22(int64_t a1) {
    int64_t v1 = a1 + 64; // 0x4dd27
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)v1 = 0;
    *(int64_t *)(a1 + 72) = 0;
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 96) = 0;
    *(int64_t *)(a1 + 104) = 0;
    int64_t v2; // bp-48, 0x4dd22
    int64_t v3 = (int64_t)&v2; // 0x4dd73
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 56) = 0;
    v2 = 0;
    int64_t v4 = __readfsqword(40); // 0x4dda7
    int64_t v5 = 0; // bp-40, 0x4ddb7
    function_4d906(v1, v3);
    int64_t v6; // 0x4dd22
    function_35fcc(&v5, v3, v6, v6);
    int64_t v7 = __readfsqword(40); // 0x4ddd3
    *(char *)(a1 + 80) = 0;
    int64_t result = 0; // 0x4dde0
    if (v4 != v7) {
        // 0x4dde2
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x4dde7
    return result;
}

// Address range: 0x4fc50 - 0x4fd1d
int64_t function_4fc50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x4fc5e
    int64_t v2 = 0; // 0x4fc84
    int64_t v3 = 0; // 0x4fc84
    int64_t v4; // 0x4fc50
    int64_t v5; // bp-72, 0x4fc50
    int64_t v6; // 0x4fccc
    if (a2 == 0 || a3 == 0 || a4 == 0) {
        goto lab_0x4fcf7;
    } else {
        // 0x4fc86
        function_729b6(&v5, a1 + 56);
        int64_t v7 = 0; // 0x4fca5
        int64_t v8 = 8 * v7; // 0x4fcaa
        int64_t v9 = function_4ff08(a1, v8 + a3); // 0x4fcb1
        v3 = 0;
        while (v9 != 0) {
            int64_t v10 = *(int64_t *)(v9 + 16); // 0x4fcbb
            v3 = 0;
            if (*(char *)(v10 + 152) != 0) {
                // break -> 0x4fced
                break;
            }
            // 0x4fcc8
            *(int64_t *)(v8 + a4) = v10;
            v6 = v7 + 1;
            v7 = v6;
            v4 = 0;
            if (v6 == a2) {
                goto lab_0x4fcd6;
            }
            v8 = 8 * v7;
            v9 = function_4ff08(a1, v8 + a3);
            v3 = 0;
        }
        goto lab_0x4fced;
    }
  lab_0x4fcd6:;
    int64_t v11 = v4 + 1; // 0x4fcda
    int64_t * v12 = (int64_t *)(*(int64_t *)(8 * v4 + a4) + 144); // 0x4fcdd
    *v12 = *v12 + 1;
    v4 = v11;
    v3 = !((a2 == 0 | a3 == 0 | a4 == 0));
    if (v6 > v11) {
        goto lab_0x4fcd6;
    } else {
        goto lab_0x4fced;
    }
  lab_0x4fcf7:;
    int64_t result = v3 | v2; // 0x4fd07
    if (v1 != __readfsqword(40)) {
        // 0x4fd09
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x4fd0e
    return result;
  lab_0x4fced:
    // 0x4fced
    v2 = function_729ce((int64_t)&v5) & -256;
    goto lab_0x4fcf7;
}

// Address range: 0x50ae2 - 0x50bae
int64_t function_50ae2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x50af6
    int64_t v2 = 3; // 0x50b09
    if (a2 != 0) {
        // 0x50b0b
        int64_t v3; // bp-80, 0x50ae2
        if ((char)function_50a92(a2, a4 & 0xffffffff) == 0) {
            // 0x50b4b
            function_5236c(&v3, a2 + 72);
            int64_t v4; // bp-72, 0x50ae2
            function_35fcc(&v4, a3, (int32_t)a4 != 0 ? 0 : 0x515c2, a1);
            v2 = *(int64_t *)v3 & 0xffffffff;
        } else {
            // 0x50b2a
            v3 = 0x100000000 * a4 >> 32;
            int64_t v5 = function_5248a(a2, &v3); // 0x50b35
            v2 = 29;
            if (v5 != 0) {
                // 0x50b45
                v2 = (int64_t)*(int32_t *)(v5 + 12);
            }
        }
    }
    int64_t result = v2; // 0x50b98
    if (v1 != __readfsqword(40)) {
        // 0x50b9a
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x50b9f
    return result;
}

// Address range: 0x50d5a - 0x50e24
int64_t function_50d5a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x50d68
    int64_t v2 = 0x100000000 * a2 >> 32; // bp-92, 0x50d7a
    int64_t v3 = 0; // 0x50d7e
    if ((int32_t)a2 != 0) {
        int64_t v4 = a3 + 72; // 0x50d85
        int64_t v5; // bp-80, 0x50d5a
        function_5236c(&v5, v4);
        int64_t v6; // bp-72, 0x50d5a
        function_35fcc(&v6, v4, a3, 0);
        int64_t v7 = function_52586(a1 + 8, (int32_t *)&v2); // 0x50db2
        int64_t v8 = v7; // 0x50dc0
        v3 = 0;
        if (v7 != a3) {
            int64_t v9 = v8 + 112; // 0x50dc2
            function_5236c(&v5, v9);
            int64_t v10 = *(int64_t *)(v5 + 8); // 0x50dd6
            function_35fcc(&v6, v9, a3, 0);
            int64_t v11 = function_48da52(*(int64_t *)(v5 + 8), v10); // 0x50de5
            v3 = v11;
            while ((char)v11 == 0) {
                int64_t v12 = function_4f0a80(v8); // 0x50df1
                v8 = v12;
                v3 = 0;
                if (v12 == a3) {
                    // break -> 0x50e00
                    break;
                }
                v9 = v8 + 112;
                function_5236c(&v5, v9);
                v10 = *(int64_t *)(v5 + 8);
                function_35fcc(&v6, v9, a3, 0);
                v11 = function_48da52(*(int64_t *)(v5 + 8), v10);
                v3 = v11;
            }
        }
    }
    int64_t result = v3; // 0x50e0e
    if (v1 != __readfsqword(40)) {
        // 0x50e10
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x50e15
    return result;
}

// Address range: 0x5104a - 0x51116
int64_t function_5104a(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x51061
    int64_t v2; // bp-48, 0x5104a
    function_729b6(&v2, a2 + 56);
    int64_t v3 = a1 + 8; // 0x51079
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x5107d
    *v4 = 0;
    *(int32_t *)v3 = 0;
    int64_t * v5 = (int64_t *)(a1 + 40); // 0x5108c
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x51094
    *v6 = v3;
    int64_t * v7 = (int64_t *)(a1 + 32); // 0x51098
    *v7 = v3;
    int64_t v8 = *(int64_t *)(a2 + 24); // 0x5109c
    if (v8 != 0) {
        int64_t v9 = function_529c2(a1, v8); // 0x510b2
        int64_t v10 = v9;
        int64_t v11 = *(int64_t *)(v10 + 16); // 0x510ba
        while (v11 != 0) {
            // 0x510ba
            v10 = v11;
            v11 = *(int64_t *)(v10 + 16);
        }
        // 0x510c8
        *v6 = v10;
        int64_t v12 = v9;
        int64_t v13 = *(int64_t *)(v12 + 24); // 0x510cf
        while (v13 != 0) {
            // 0x510cf
            v12 = v13;
            v13 = *(int64_t *)(v12 + 24);
        }
        // 0x510dd
        *v7 = v12;
        *v4 = v9;
        *v5 = *(int64_t *)(a2 + 48);
    }
    // 0x510ed
    function_729ce((int64_t)&v2);
    int64_t result = a1; // 0x51106
    if (v1 != __readfsqword(40)) {
        // 0x51108
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x5110d
    return result;
}

// Address range: 0x61c46 - 0x61d14
int64_t function_61c46(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 40); // 0x61c51
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 48); // 0x61c59
    *v2 = 0;
    *(int64_t *)(a1 + 80) = 0;
    int64_t v3 = 0; // bp-72, 0x61c6c
    int64_t v4 = __readfsqword(40); // 0x61c74
    function_63032();
    int64_t v5 = a1 + 88; // 0x61c92
    char * v6 = (char *)v5; // 0x61c9e
    __asm_rep_movsd_memcpy(v6, (char *)&v3, 10);
    bool v7; // 0x61c46
    int64_t v8 = (v7 ? -40 : 40) + v5; // 0x61c9e
    *(char *)(a1 + 152) = 0;
    *(int64_t *)(a1 + 264) = 0;
    *(char *)(a1 + 272) = 0;
    int64_t v9 = function_48fb27(v8, v8);
    if (*(char *)(a1 + 24) == 0) {
        // 0x61ced
        *v2 = v9;
    } else {
        // 0x61cbf
        *v1 = v9;
        function_6307c(&v3, v9, 0, 8);
        __asm_rep_movsd_memcpy(v6, (char *)&v3, 10);
    }
    int64_t result = 0; // 0x61d04
    if (v4 != __readfsqword(40)) {
        // 0x61d06
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x61d0b
    return result;
}

// Address range: 0x688b2 - 0x6897e
int64_t function_688b2(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x688c1
    *(int64_t *)a1 = (int64_t)&g5;
    function_7293a();
    int64_t v2 = a1 + 120; // 0x688ec
    *(int64_t *)v2 = 0;
    *(int64_t *)(a1 + 128) = 0;
    memset((void *)(int64_t)(a1 + 48), 0, 64);
    *(int32_t *)(a1 + 116) = (int32_t)a2;
    *(int16_t *)(a1 + 112) = 0;
    int64_t v3 = 0; // bp-48, 0x6891a
    int64_t v4 = (int64_t)&v3; // 0x68923
    int64_t v5 = 0; // bp-40, 0x68926
    function_4d906(v2, v4);
    int64_t v6; // 0x688b2
    function_35fcc(&v5, v4, 64, v6);
    *(char *)(a1 + 136) = 0;
    *(int64_t *)(a1 + 144) = 0;
    *(int64_t *)(a1 + 152) = 0;
    function_687c4(a1);
    int64_t result = 0; // 0x68970
    if (v1 != __readfsqword(40)) {
        // 0x68972
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x68977
    return result;
}

// Address range: 0x6a8a4 - 0x6a971
int64_t function_6a8a4(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x6a8a6
    int64_t v2 = *(int64_t *)(a1 + 16);
    int64_t v3 = v1; // 0x6a8c0
    int64_t v4 = a2; // 0x6a8c0
    if (v2 != 0) {
        int64_t v5 = v2;
        int64_t v6; // 0x6a8a4
        int64_t v7; // 0x6a8a4
        while ((char)function_5bff9(v5 + 32, a2) != 0) {
            // 0x6a8db
            v6 = *(int64_t *)(v5 + 24);
            v7 = v1;
            if (v6 == 0) {
                // break (via goto) -> 0x6a8e1
                goto lab_0x6a8e1;
            }
            v5 = v6;
        }
        int64_t v8 = *(int64_t *)(v5 + 16);
        v7 = v5;
        while (v8 != 0) {
            int64_t v9 = v5;
            v5 = v8;
            while ((char)function_5bff9(v5 + 32, a2) != 0) {
                // 0x6a8db
                v6 = *(int64_t *)(v5 + 24);
                v7 = v9;
                if (v6 == 0) {
                    // break (via goto) -> 0x6a8e1
                    goto lab_0x6a8e1;
                }
                v5 = v6;
            }
            // 0x6a8d2
            v8 = *(int64_t *)(v5 + 16);
            v7 = v5;
        }
      lab_0x6a8e1:
        // 0x6a8e1
        v3 = v1;
        v4 = a2;
        if (v1 != v7) {
            int64_t v10 = v7 + 32; // 0x6a8e6
            int64_t v11 = function_5bff9(a2, v10); // 0x6a8ed
            v3 = v7;
            v4 = v10;
            if ((char)v11 == 0) {
                // 0x6a964
                return v7 + 40;
            }
        }
    }
    int64_t v12 = function_4efd30(48); // 0x6a8fb
    int64_t v13 = v12 + 32; // 0x6a903
    *(int64_t *)v13 = v4;
    *(int64_t *)a2 = (int64_t)&g6;
    int64_t v14 = v12 + 40; // 0x6a927
    *(int64_t *)v14 = (int64_t)&g6;
    int64_t v15 = function_5c2b6(a1, v3, v13); // 0x6a92b
    int64_t v16; // 0x6a8a4
    if (v13 == 0) {
        // 0x6a94b
        function_2508e(v14);
        function_2508e(0);
        function_4eeb50(v12);
        v16 = v15;
    } else {
        // 0x6a938
        v16 = function_6a79c(a1, v15);
    }
    // 0x6a964
    return v16 + 40;
}

// Address range: 0x4b08f0 - 0x4b09b1
int64_t function_4b08f0(int64_t a1, uint64_t nmemb) {
    if (nmemb > (uint64_t)(int64_t)&g1) {
        // 0x4b0926
        int64_t result; // 0x4b08f0
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4b0918
    uint64_t v2 = *v1; // 0x4b0918
    if (v2 >= nmemb) {
        // 0x4b0926
        return 0;
    }
    int64_t * mem = calloc((int32_t)nmemb, 8); // 0x4b0948
    int64_t result2 = (int64_t)mem; // 0x4b0948
    if (mem == NULL) {
        // 0x4b0926
        return result2;
    }
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x4b0955
    int64_t v4 = *v3; // 0x4b0955
    if (v4 == 0) {
        // 0x4b09a2
        *v1 = nmemb;
        *v3 = result2;
        // 0x4b0926
        return 0;
    }
    // 0x4b095e
    memcpy(mem, (int64_t *)v4, 8 * (int32_t)v2);
    int64_t v5 = *v1; // 0x4b096e
    int64_t v6 = *v3; // 0x4b0972
    int64_t v7 = v5; // 0x4b0980
    int64_t v8 = v6; // 0x4b0980
    if (v5 != 0) {
        v7--;
        *(int64_t *)v8 = 0;
        v8 += 8;
        while (v7 != 0) {
            // 0x4b0988
            v7--;
            *(int64_t *)v8 = 0;
            v8 += 8;
        }
    }
    // 0x4b099d
    free((int64_t *)v6);
    // 0x4b09a2
    *v1 = nmemb;
    *v3 = result2;
    // 0x4b0926
    return 0;
}

// Address range: 0x4c8790 - 0x4c885e
int64_t function_4c8790(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = 0; // bp-136, 0x4c87bc
    int64_t v2; // bp-120, 0x4c8790
    __asm_rep_stosq_memset((char *)&v2, 0, 8);
    int64_t result = function_4c1d00(a5); // 0x4c87cd
    if (a2 == 0) {
        // 0x4c884f
        return result;
    }
    uint64_t v3 = result % 256; // 0x4c87d7
    uint64_t v4 = a2;
    int64_t v5 = v4 > v3 ? v3 : v4; // 0x4c87e9
    function_4c1820(a5);
    function_4c1850(a5, a3, a4);
    function_4c1850(a5, (int64_t)&v1, 4);
    int64_t v6 = function_4c1880(a5, &v2); // 0x4c881b
    int64_t v7 = 0; // 0x4c8823
    int64_t v8 = v6; // 0x4c8823
    int64_t v9 = a1; // 0x4c8823
    char * v10; // 0x4c8836
    if (v5 != 0) {
        v10 = (char *)(v7 + a1);
        *v10 = *v10 ^ *(char *)(v7 + (int64_t)&v2);
        v8 = v7 + 1;
        v7 = v8;
        while (v8 != v5) {
            // 0x4c8830
            v10 = (char *)(v7 + a1);
            *v10 = *v10 ^ *(char *)(v7 + (int64_t)&v2);
            v8 = v7 + 1;
            v7 = v8;
        }
        // 0x4c8842
        v9 = v5 + a1;
    }
    int64_t v11 = v4 - v5; // 0x4c884a
    int64_t result2 = v8; // 0x4c884d
    while (v11 != 0) {
        // 0x4c87e0
        v4 = v11;
        int64_t v12 = v9;
        v5 = v4 > v3 ? v3 : v4;
        function_4c1820(a5);
        function_4c1850(a5, a3, a4);
        function_4c1850(a5, (int64_t)&v1, 4);
        v6 = function_4c1880(a5, &v2);
        v7 = 0;
        int64_t v13 = v6; // 0x4c8823
        v9 = v12;
        if (v5 != 0) {
            v10 = (char *)(v7 + v12);
            *v10 = *v10 ^ *(char *)(v7 + (int64_t)&v2);
            v8 = v7 + 1;
            v7 = v8;
            while (v8 != v5) {
                // 0x4c8830
                v10 = (char *)(v7 + v12);
                *v10 = *v10 ^ *(char *)(v7 + (int64_t)&v2);
                v8 = v7 + 1;
                v7 = v8;
            }
            // 0x4c8842
            v13 = v8;
            v9 = v5 + v12;
        }
        // 0x4c8845
        v11 = v4 - v5;
        result2 = v13;
    }
    // 0x4c884f
    return result2;
}

// Address range: 0x4d1ea0 - 0x4d1f6a
int64_t function_4d1ea0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t * v1 = (int64_t *)(a1 + 184); // 0x4d1ebb
    uint64_t v2 = (*v1 + 7) / 8; // 0x4d1ecf
    int64_t v3 = v2 < a4 ? v2 : a4; // 0x4d1ed9
    int64_t v4 = function_4b0fc0(a2, a3, v3); // 0x4d1ee0
    int64_t result = v4 & 0xffffffff; // 0x4d1ee7
    if ((int32_t)v4 != 0) {
        // 0x4d1f58
        return result;
    }
    uint64_t v5 = *v1; // 0x4d1eec
    uint64_t v6 = 8 * v3; // 0x4d1ef3
    if (v6 > v5) {
        int64_t v7 = function_4b1220(a2, v6 - v5, v5); // 0x4d1f49
        if ((int32_t)v7 != 0) {
            // 0x4d1f58
            return v7 & 0xffffffff;
        }
    }
    int64_t v8 = a1 + 152; // 0x4d1efc
    if ((int32_t)function_4b1590(a2, v8) >= 0) {
        // 0x4d1f12
        return function_4b19a0(a2, a2, v8);
    }
    // 0x4d1f58
    return result;
}

// Address range: 0x52b320 - 0x52b3ee
int64_t function_52b320(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int64_t v2 = __readfsqword(40); // 0x52b32c
    if (a1 == a2) {
        // 0x52b373
        return __readfsqword(40) ^ v2;
    }
    uint64_t v3 = *(int64_t *)(a2 + 8); // 0x52b34e
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x52b35c
    uint64_t v5 = *v4; // 0x52b35c
    int64_t v6; // 0x52b320
    int64_t result; // 0x52b320
    if (v5 < v3) {
        // 0x52b3b0
        int64_t v7; // bp-56, 0x52b320
        v1 = (int64_t)&v7;
        v7 = v3;
        int64_t v8 = function_52b020(a1, &v7, v5); // 0x52b3ba
        function_4eeb50(a1);
        *(int64_t *)a1 = v8;
        *v4 = v7;
        result = v7;
        v6 = v8;
    } else {
        // 0x52b365
        result = 0;
        v6 = a1;
        if (v3 == 0) {
            // 0x52b36a
            *(int64_t *)(a1 + 8) = v3;
            *(char *)(v3 + a1) = 0;
            // 0x52b373
            return __readfsqword(40) ^ v2;
        }
    }
    if (v3 != 1) {
        // 0x52b3e8
        return result;
    }
    // 0x52b39a
    *(char *)v6 = *(char *)&v1;
    // 0x52b36a
    *(int64_t *)(a1 + 8) = v3;
    *(char *)(v3 + a1) = 0;
    // 0x52b373
    return __readfsqword(40) ^ v2;
}

// Address range: 0x549da0 - 0x549e6e
int64_t function_549da0(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int64_t v2 = __readfsqword(40); // 0x549dac
    if (a1 == a2) {
        // 0x549df6
        return __readfsqword(40) ^ v2;
    }
    uint64_t v3 = *(int64_t *)(a2 + 8); // 0x549dce
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x549ddc
    uint64_t v5 = *v4; // 0x549ddc
    int64_t v6; // 0x549da0
    int64_t result; // 0x549da0
    if (v5 < v3) {
        // 0x549e30
        int64_t v7; // bp-56, 0x549da0
        v1 = (int64_t)&v7;
        v7 = v3;
        int64_t v8 = function_549a50(a1, &v7, v5); // 0x549e3a
        function_4eeb50(a1);
        *(int64_t *)a1 = v8;
        *v4 = v7;
        result = v7;
        v6 = v8;
    } else {
        // 0x549de5
        result = 0;
        v6 = a1;
        if (v3 == 0) {
            // 0x549dea
            *(int64_t *)(a1 + 8) = v3;
            *(int32_t *)(a1 + 4 * v3) = 0;
            // 0x549df6
            return __readfsqword(40) ^ v2;
        }
    }
    if (v3 != 1) {
        // 0x549e68
        return result;
    }
    // 0x549e22
    *(int32_t *)v6 = *(int32_t *)&v1;
    // 0x549dea
    *(int64_t *)(a1 + 8) = v3;
    *(int32_t *)(v6 + 4 * v3) = 0;
    // 0x549df6
    return __readfsqword(40) ^ v2;
}

// Address range: 0x5700a0 - 0x57016a
int64_t function_5700a0(int64_t a1) {
    struct __locale_struct * v1 = __uselocale((struct __locale_struct *)*(int64_t *)(a1 + 16)); // 0x5700b3
    int64_t c = 0;
    int32_t result = wctob((int32_t)c); // 0x5700d7
    while (result != -1) {
        // 0x5700c0
        *(char *)(a1 + 25 + c) = (char)result;
        if (c == 127) {
            // 0x570166
            *(char *)(a1 + 24) = 1;
            return result;
        }
        c++;
        result = wctob((int32_t)c);
    }
    // 0x5700e1
    *(char *)(a1 + 24) = 0;
    for (int64_t i = 0; i < 256; i++) {
        // 0x5700f0
        *(int32_t *)(a1 + 156 + 4 * i) = btowc((int32_t)i);
    }
    int64_t v2 = a1 + (int64_t)&g2; // 0x570131
    int64_t v3 = a1 + (int64_t)&g3;
    for (int64_t i = 0; i < 12; i++) {
        int32_t v4 = 1 << (int32_t)i % 32;
        uint32_t v5 = i >= 8 ? v4 >> 8 : 256 * v4; // 0x57012e
        *(int16_t *)(v2 + 2 * i) = (int16_t)v5;
        *(int64_t *)(v3 + 8 * i) = function_56fab0(a1, (int64_t)(v5 % 0x10000));
    }
    // 0x570154
    return (int64_t)__uselocale(v1);
}

// Address range: 0x574600 - 0x57460f
int64_t function_574600(int64_t a1, int64_t a2, int64_t a3) {
    // 0x574600
    *(int64_t *)a1 = a1 + 16;
    return function_5744f0();
}

// Address range: 0x574610 - 0x574629
int64_t function_574610(int64_t a1, int64_t a2) {
    // 0x574610
    *(int64_t *)a1 = a1 + 16;
    return function_5744f0();
}

// Address range: 0x574630 - 0x57463e
int64_t function_574630(int64_t result) {
    // 0x574630
    int64_t v1; // 0x574630
    function_52b320(result, v1);
    return result;
}

// Address range: 0x574640 - 0x57465a
int64_t function_574640(int64_t a1) {
    // 0x574640
    return function_4eeb50(a1);
}

// Address range: 0x574660 - 0x5746ab
int64_t function_574660(int64_t a1, int64_t a2) {
    int64_t result = a2 + 16; // 0x57466a
    *(int64_t *)a1 = a2;
    *(int64_t *)(a1 + 16) = *(int64_t *)result;
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x57467e
    *(int64_t *)(a1 + 8) = *v1;
    *(int64_t *)a2 = result;
    *v1 = 0;
    *(char *)result = 0;
    return result;
}
