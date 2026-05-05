/*
 * Targeted RetDec C for native executable gap queue batch 27.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4ad100-0x4ad1e4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x557390-0x557474 rank=- name=- kind=- bytes=- uncovered=-
 *   0x557a40-0x557b24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x497d70-0x497e53 rank=- name=- kind=- bytes=- uncovered=-
 *   0x498a40-0x498b23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d08f0-0x4d09d3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56ff90-0x570073 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5b204-0x5b2e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2d40-0x4d2e22 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564090-0x564172 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36a32-0x36b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bf880-0x4bf961 rank=- name=- kind=- bytes=- uncovered=-
 *   0x582a30-0x582b11 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bba20-0x4bbb00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c4530-0x4c4610 rank=- name=- kind=- bytes=- uncovered=-
 *   0x450d0-0x451af rank=- name=- kind=- bytes=- uncovered=-
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
int64_t function_25e90();
int64_t function_36a32();
int64_t function_36b14();
int64_t function_45059();
int64_t function_450d0();
int64_t function_451f2();
int64_t function_4976c0();
int64_t function_497970();
int64_t function_497d70();
int64_t function_498a40();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_4ac630();
int64_t function_4ad100();
int64_t function_4b0890();
int64_t function_4b0d80();
int64_t function_4b0fa0();
int64_t function_4b0fc0();
int64_t function_4ba840();
int64_t function_4bba20();
int64_t function_4bf880();
int64_t function_4c14d0();
int64_t function_4c1d00();
int64_t function_4c3260();
int64_t function_4c4530();
int64_t function_4cffb0();
int64_t function_4d0040();
int64_t function_4d0060();
int64_t function_4d08f0();
int64_t function_4d2b80();
int64_t function_4d2d40();
int64_t function_4efd30();
int64_t function_542590();
int64_t function_555a00();
int64_t function_555fe0();
int64_t function_557390();
int64_t function_557a40();
int64_t function_564090();
int64_t function_566390();
int64_t function_566890();
int64_t function_56ff90();
int64_t function_581610();
int64_t function_582a30();
int64_t function_5b1e1();
int64_t function_5b204();

// Address range: 0x36a32 - 0x36b13
int64_t function_36a32(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 - 24;
    int64_t * v2 = (int64_t *)v1;
    uint64_t v3 = *v2; // 0x36a52
    int64_t v4 = 0x3ffffffffffffff9; // 0x36a56
    int64_t v5 = a1; // 0x36a56
    if (a2 >= 0x3ffffffffffffffa) {
        // 0x36a58
        v4 = function_542590("basic_string::resize");
        v5 = (int64_t)"basic_string::resize";
    }
    if (v3 >= a2) {
        int64_t result; // 0x36a32
        if (v3 > a2) {
            // 0x36ade
            return function_25e90(a1, function_36b14(a1), v3 - a2, 0, result);
        }
        // 0x36b0b
        return result;
    }
    uint64_t v6 = a2 - v3; // 0x36a72
    int64_t v7 = v5; // 0x36a78
    if (v6 > v4 - v3) {
        // 0x36a7a
        function_542590("basic_string::append");
        v7 = (int64_t)"basic_string::append";
    }
    // 0x36a86
    int64_t v8; // 0x36a32
    int64_t * v9; // 0x36a32
    int64_t v10; // 0x36a32
    if (*(int64_t *)(v7 - 16) < a2) {
        goto lab_0x36a8c;
    } else {
        int64_t v11 = v7 - 24; // 0x36a99
        if ((char)function_25622(v11) != 0) {
            goto lab_0x36a8c;
        } else {
            int64_t v12 = v7 - 48;
            v9 = (int64_t *)v12;
            v8 = v12;
            v10 = v11;
            goto lab_0x36aa6;
        }
    }
  lab_0x36a8c:
    // 0x36a8c
    function_259ce(a1, a2);
    v9 = v2;
    v8 = v1;
    v10 = a1;
    goto lab_0x36aa6;
  lab_0x36aa6:;
    int64_t v13 = *v9 + v10; // 0x36aaa
    int64_t v14; // 0x36a32
    if (v6 != 1) {
        // 0x36ab9
        __asm_rep_stosb_memset((char *)v13, (char)a3, v6);
        bool v15; // 0x36a32
        v14 = v6 * (v15 ? -1 : 1) - 24 + v13;
    } else {
        // 0x36ab4
        *(char *)v13 = (char)a3;
        v14 = v8;
    }
    // 0x36ac4
    return function_2562c(v14, a2);
}

// Address range: 0x450d0 - 0x451af
int64_t function_450d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x450e8
    *(int64_t *)a1 = (int64_t)&g7;
    if (a3 != 0) {
        // 0x45110
        int64_t v2; // bp-56, 0x450d0
        int64_t v3 = (int64_t)&v2 | 1; // 0x45120
        int64_t v4 = a2; // 0x45110
        int64_t v5 = 0; // 0x450d0
        *(char *)(v5 + v3) = *(char *)v4;
        int64_t v6 = v5 + 1; // 0x45124
        int64_t v7; // bp-52, 0x450d0
        int64_t v8; // bp-55, 0x450d0
        if (v5 == 2) {
            // 0x4512b
            function_45059(&v8, &v7, a1, 4);
            v6 = 0;
        }
        // 0x45126
        v4++;
        int64_t v9 = v6;
        v5 = v9;
        while (a3 + a2 != v4) {
            // 0x45110
            *(char *)(v5 + v3) = *(char *)v4;
            v6 = v5 + 1;
            if (v5 == 2) {
                // 0x4512b
                function_45059(&v8, &v7, a1, 4);
                v6 = 0;
            }
            // 0x45126
            v4++;
            v9 = v6;
            v5 = v9;
        }
        if (v9 != 0) {
            // 0x4514c
            if (v9 < 3) {
                *(char *)(v9 + v3) = 0;
                int64_t v10 = v9 + 1; // 0x45157
                int64_t v11 = v10; // 0x45150
                while (v10 != 3) {
                    // 0x45152
                    *(char *)(v11 + v3) = 0;
                    v10 = v11 + 1;
                    v11 = v10;
                }
                // 0x4515c
                function_45059(&v8, &v7, a1, v9 + 1);
                int64_t v12 = v9; // 0x45180
                v12++;
                function_451f2(a1, 61);
                while (v12 != 3) {
                    // 0x45178
                    v12++;
                    function_451f2(a1, 61);
                }
            } else {
                // 0x4515c
                function_45059(&v8, &v7, a1, v9 + 1);
            }
        }
    }
    int64_t result = a1; // 0x4519b
    if (v1 != __readfsqword(40)) {
        // 0x4519d
        __stack_chk_fail();
        result = (int64_t)&g10;
    }
    // 0x451a2
    return result;
}

// Address range: 0x5b204 - 0x5b2e6
int64_t function_5b204(int64_t a1, int64_t result3, int64_t a3) {
    uint64_t v1 = result3 - a1;
    int64_t v2 = v1; // 0x5b225
    int64_t result = a1; // 0x5b225
    if (v1 < 32) {
        goto lab_0x5b280;
      lab_0x5b280:;
        int64_t v3 = v2 >> 3; // 0x5b286
        int64_t result2 = result; // 0x5b204
        int64_t result4; // 0x5b204
        switch (v3) {
            case 3: {
                int64_t v4 = function_5b1e1(result, a3); // 0x5b2a7
                result2 = result + 8;
                if ((char)v4 != 0) {
                    // 0x5b2da
                    return result;
                }
            }
            case 2: {
                // 0x5b2b5
                if ((char)function_5b1e1(result2, a3) != 0) {
                    // 0x5b2da
                    return result2;
                }
                // 0x5b2c4
                result4 = result2 + 8;
                // break -> 0x5b2c8
                break;
            }
            default: {
                // 0x5b296
                result4 = result;
                if (v3 != 1) {
                    // 0x5b2da
                    return result3;
                }
                // break -> 0x5b2c8
                break;
            }
        }
        // 0x5b2c8
        if ((char)function_5b1e1(result4, a3) != 0) {
            // 0x5b2da
            return result4;
        }
        // 0x5b2da
        return result3;
    }
    int64_t v5 = v1 / 32; // 0x5b204
    int64_t v6 = a1; // 0x5b204
    int64_t v7 = function_5b1e1(v6, a3); // 0x5b22d
    int64_t result5 = v6; // 0x5b234
    while ((char)v7 == 0) {
        int64_t v8 = v6 + 8; // 0x5b23a
        int64_t v9 = function_5b1e1(v8, a3); // 0x5b244
        result5 = v8;
        if ((char)v9 != 0) {
            // break -> 0x5b2da
            break;
        }
        int64_t v10 = v6 + 16; // 0x5b251
        int64_t v11 = function_5b1e1(v10, a3); // 0x5b25b
        result5 = v10;
        if ((char)v11 != 0) {
            // break -> 0x5b2da
            break;
        }
        int64_t v12 = v6 + 24; // 0x5b264
        int64_t v13 = function_5b1e1(v12, a3); // 0x5b272
        result5 = v12;
        if ((char)v13 != 0) {
            // break -> 0x5b2da
            break;
        }
        int64_t v14 = v5;
        result = v6 + 32;
        v5 = v14 - 1;
        v6 = result;
        if (v14 < 2) {
            // 0x5b21f
            v2 = result3 - result;
            goto lab_0x5b280;
        }
        v7 = function_5b1e1(v6, a3);
        result5 = v6;
    }
    // 0x5b2da
    return result5;
}

// Address range: 0x497d70 - 0x497e4f
int64_t function_497d70(int64_t a1) {
    // 0x497d70
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g1, "=> renegotiate");
    int64_t v1 = function_497970(a1); // 0x497d9b
    if ((int32_t)v1 != 0) {
        // 0x497df8
        return v1 & 0xffffffff;
    }
    unsigned char v2 = *(char *)(a1 + 372); // 0x497da9
    int32_t * v3 = (int32_t *)(a1 + 12);
    if ((v2 & 2) != 0) {
        // 0x497db4
        if (*v3 == 3) {
            int64_t result = *(int64_t *)(a1 + 96); // 0x497e3a
            if (v2 % 2 == 0) {
                // 0x497df8
                return result;
            }
            // 0x497e40
            *(int32_t *)(result + (int64_t)&g4) = 1;
        }
    }
    // 0x497dba
    *(int32_t *)(a1 + 8) = 0;
    *v3 = 1;
    int64_t v4 = function_4976c0(a1); // 0x497dcb
    int64_t result2 = v4 & 0xffffffff; // 0x497dd2
    if ((int32_t)v4 != 0) {
        // 0x497e08
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g2, "mbedtls_ssl_handshake", result2);
        return result2;
    }
    // 0x497dd6
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g3, "<= renegotiate");
    // 0x497df8
    return result2;
}

// Address range: 0x498a40 - 0x498b23
int64_t function_498a40(int64_t a1) {
    // 0x498a40
    function_4b0890(a1 + 248);
    function_4b0890(a1 + 272);
    int64_t * v1 = (int64_t *)(a1 + 296); // 0x498a61
    int64_t v2 = *v1; // 0x498a61
    if (v2 != 0) {
        int64_t * v3 = (int64_t *)(a1 + 304); // 0x498a6d
        int64_t v4 = *v3; // 0x498a6d
        if (v4 != 0) {
            *(char *)v2 = 0;
            int64_t v5 = v2 + 1; // 0x498a83
            int64_t v6 = v5; // 0x498a8a
            while (v5 != v4 + v2) {
                // 0x498a80
                *(char *)v6 = 0;
                v5 = v6 + 1;
                v6 = v5;
            }
        }
        int64_t * v7 = (int64_t *)(a1 + 320); // 0x498a8c
        int64_t v8 = *v7; // 0x498a8c
        int64_t * v9 = (int64_t *)(a1 + 312); // 0x498a93
        int64_t v10 = *v9; // 0x498a93
        if (v8 != 0) {
            *(char *)v10 = 0;
            int64_t v11 = v10 + 1; // 0x498aab
            int64_t v12 = v11; // 0x498ab2
            while (v11 != v10 + v8) {
                // 0x498aa8
                *(char *)v12 = 0;
                v11 = v12 + 1;
                v12 = v11;
            }
        }
        // 0x498ab4
        free((int64_t *)*v1);
        free((int64_t *)*v9);
        *v3 = 0;
        *v7 = 0;
    }
    int64_t v13 = *(int64_t *)(a1 + 208); // 0x498ae2
    if (v13 != 0) {
        int64_t v14 = *(int64_t *)(v13 + 16); // 0x498af0
        free((int64_t *)v13);
        while (v14 != 0) {
            int64_t v15 = v14;
            v14 = *(int64_t *)(v15 + 16);
            free((int64_t *)v15);
        }
    }
    int64_t result = a1 + 376; // 0x498b01
    int64_t v16 = a1; // 0x498b08
    *(char *)v16 = 0;
    v16++;
    while (v16 != result) {
        // 0x498b10
        *(char *)v16 = 0;
        v16++;
    }
    // 0x498b1c
    return result;
}

// Address range: 0x4ad100 - 0x4ad1e0
int64_t function_4ad100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4ad100
    if (a5 != 0) {
        // 0x4ad144
        return 0xffffd800;
    }
    int64_t result = function_4c3260(); // 0x4ad135
    if ((int32_t)result != 0) {
        // 0x4ad144
        return result - (int64_t)(int32_t)">\r" & 0xffffffff;
    }
    // 0x4ad13e
    if ((int32_t)a4 != 6) {
        // 0x4ad144
        return result;
    }
    int64_t * mem = calloc(1, 8); // 0x4ad18a
    int64_t result2 = (int64_t)mem; // 0x4ad18a
    if (mem == NULL) {
        // 0x4ad144
        return result2;
    }
    int64_t v1 = function_4ac630(a2, a3, result2, result2 + 4); // 0x4ad1a4
    int64_t result3; // 0x4ad100
    if ((int32_t)v1 != 0) {
        // 0x4ad1b8
        free(mem);
        result3 = v1 & 0xffffffff;
    } else {
        // 0x4ad1ad
        *(int64_t *)a5 = result2;
        result3 = v1;
    }
    // 0x4ad144
    return result3;
}

// Address range: 0x4bba20 - 0x4bbaf9
int64_t function_4bba20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if (a4 == 0) {
        // 0x4bbae5
        int64_t result; // 0x4bba20
        return result;
    }
    char v1 = a3;
    if (v1 == 0) {
        // 0x4bba47
        if (a4 == 1) {
            // 0x4bba51
            return function_4ba840(a2);
        }
        // 0x4bbae5
        return 0xffffb080;
    }
    int64_t result2 = function_4b0fa0(a1 + 8); // 0x4bba79
    if (v1 != 4) {
        // 0x4bbae5
        return result2;
    }
    // 0x4bba8b
    if ((2 * result2 || 1) != a4) {
        // 0x4bbae5
        return 0xffffb080;
    }
    int64_t v2 = a3 + 1; // 0x4bba95
    int64_t result3 = function_4b0fc0(a2, v2, result2, a4); // 0x4bba9f
    if ((int32_t)result3 != 0) {
        // 0x4bbae5
        return result3;
    }
    int64_t result4 = function_4b0fc0(a2 + 24, result2 + v2, result2, a4); // 0x4bbab4
    if ((int32_t)result4 == 0) {
        // 0x4bbabd
        return function_4b0d80(a2 + 48, 1);
    }
    // 0x4bbae5
    return result4;
}

// Address range: 0x4bf880 - 0x4bf95d
int64_t function_4bf880(int64_t a1) {
    uint32_t v1 = *(int32_t *)(a1 + 216); // 0x4bf894
    if (v1 == 0) {
        // 0x4bf940
        int64_t result; // 0x4bf880
        return result;
    }
    if (v1 <= 0) {
      lab_0x4bf955:
        // 0x4bf940
        return 0xffffffc3;
    }
    int64_t v2 = 0; // 0x4bf8b8
    int64_t v3 = 0;
    int64_t v4 = 0x100000000 * v2;
    int64_t v5 = (v4 >> 32) + (v4 >> 30); // 0x4bf8d6
    while ((int32_t)v5 == 0) {
        // 0x4bf907
        v3 = *(int32_t *)(a1 + 256 + 8 * v5) == 1 ? 1 : v3;
        v2 = v2 + 1 & 0xffffffff;
        if (v2 >= (int64_t)v1) {
            // 0x4bf93b
            if ((int32_t)v3 == 0) {
                return 0xffffffc3;
            } else {
                return v5 & 0xffffffff;
            }
        }
        v4 = 0x100000000 * v2;
        v5 = (v4 >> 32) + (v4 >> 30);
    }
  lab_0x4bf940:
    // 0x4bf940
    return v5 & 0xffffffff;
}

// Address range: 0x4c4530 - 0x4c460e
int64_t function_4c4530(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    if (a1 == 0) {
        // 0x4c45f0
        return 0xffffc180;
    }
    // 0x4c456f
    if (a4 != 0) {
        // 0x4c4579
        return *(int64_t *)(a1 + 40);
    }
    int64_t v1 = function_4c14d0(a2 & 0xffffffff); // 0x4c45cb
    if (v1 == 0) {
        // 0x4c45f0
        return 0xffffc180;
    }
    // 0x4c45d5
    function_4c1d00(v1);
    // 0x4c4579
    return *(int64_t *)(v1 + 40);
}

// Address range: 0x4d08f0 - 0x4d09d3
int64_t function_4d08f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4d08f0
    int32_t v1; // bp-312, 0x4d08f0
    function_4cffb0((int64_t *)&v1);
    int64_t v2 = function_4d0060((int64_t *)&v1, a2, a3 & 0xffffffff); // 0x4d0915
    if ((int32_t)v2 != 0) {
        // 0x4d09bd
        function_4d0040((int64_t *)&v1);
        return v2 & 0xffffffff;
    }
    // 0x4d0924
    *(int32_t *)a1 = v1;
    int64_t v3 = v1 == 4; // 0x4d092f
    int64_t v4 = (int64_t)&v1 + 192 + 64 * v3;
    *(int32_t *)(a1 + 4) = *(int32_t *)(v4 + 4);
    *(int32_t *)(a1 + 16) = *(int32_t *)(v4 + 16);
    *(int32_t *)(a1 + 8) = *(int32_t *)(v4 + 8);
    int64_t v5 = 8 * v3 | 22; // 0x4d095d
    int64_t v6 = v4 - 4; // 0x4d0960
    *(int32_t *)(a1 + 12) = *(int32_t *)(v4 + 12);
    int64_t v7 = a1 + 20; // 0x4d0969
    int64_t v8 = v6; // 0x4d0976
    int64_t v9 = v7; // 0x4d0976
    int64_t v10 = v5; // 0x4d0976
    *(int32_t *)v9 = *(int32_t *)v8;
    *(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
    v10--;
    v8 -= 8;
    v9 += 8;
    while (v10 != 0) {
        // 0x4d0980
        *(int32_t *)v9 = *(int32_t *)v8;
        *(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
        v10--;
        v8 -= 8;
        v9 += 8;
    }
    int64_t v11 = 8 * v5; // 0x4d099c
    int64_t v12 = v11 + v7; // 0x4d099c
    int64_t v13 = v6 - v11; // 0x4d09a3
    *(int32_t *)v12 = *(int32_t *)(v13 - 8);
    *(int32_t *)(v12 + 4) = *(int32_t *)(v13 - 4);
    *(int32_t *)(v12 + 8) = *(int32_t *)v13;
    *(int32_t *)(v12 + 12) = *(int32_t *)(v13 + 4);
    // 0x4d09bd
    function_4d0040((int64_t *)&v1);
    return v2 & 0xffffffff;
}

// Address range: 0x4d2d40 - 0x4d2e19
int64_t function_4d2d40(int64_t a1, int64_t a2, uint64_t a3) {
    if (a3 >= 257) {
        // 0x4d2dcb
        int64_t result; // 0x4d2d40
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 96); // 0x4d2d70
    if (*v1 + a3 >= 385) {
        // 0x4d2dcb
        return 0xfffffffb;
    }
    // 0x4d2d89
    int64_t v2; // bp-424, 0x4d2d40
    __asm_rep_stosq_memset((char *)&v2, 0, 48);
    int64_t v3 = *v1; // 0x4d2dae
    int64_t v4 = v3; // 0x4d2db2
    if (a2 != 0 && a3 != 0) {
        // 0x4d2e05
        memcpy((int64_t *)(v3 + (int64_t)&v2), (int64_t *)a2, (int32_t)a3);
        v4 = v3 + a3;
    }
    // 0x4d2db4
    function_4d2b80(a1, &v2, v4, 0);
    *(int32_t *)(a1 + 88) = 1;
    // 0x4d2dcb
    return 0;
}

// Address range: 0x557390 - 0x557473
// From class:    std::__moneypunct_cache<char, true>
// Type:          constructor
int64_t function_557390(int64_t a1, int64_t a2) {
    int64_t v1 = function_566390(&g8); // 0x5573a4
    int64_t * v2 = (int64_t *)(*(int64_t *)(a2 + 24) + 8 * v1); // 0x5573b8
    int64_t result = *v2; // 0x5573b8
    if (result != 0) {
        // 0x5573c1
        return result;
    }
    int64_t v3 = function_4efd30(112); // 0x5573d5
    *(int32_t *)(v3 + 8) = 0;
    *(int64_t *)(v3 + 16) = 0;
    *(int64_t *)(v3 + 24) = 0;
    *(char *)(v3 + 32) = 0;
    *(int64_t *)(v3 + 40) = 0;
    *(int64_t *)(v3 + 48) = 0;
    *(int64_t *)(v3 + 56) = 0;
    *(int64_t *)v3 = (int64_t)&g5;
    *(int64_t *)(v3 + 64) = 0;
    *(int16_t *)(v3 + 33) = (int16_t)((int32_t)&g5 ^ (int32_t)&g5);
    *(int64_t *)(v3 + 72) = 0;
    *(int64_t *)(v3 + 80) = 0;
    *(int64_t *)(v3 + 88) = 0;
    *(int32_t *)(v3 + 96) = 0;
    *(char *)(v3 + 111) = 0;
    function_555a00(v3, a2);
    function_566890(a2, v3, v1);
    return *v2;
}

// Address range: 0x557a40 - 0x557b23
// From class:    std::__moneypunct_cache<char, false>
// Type:          constructor
int64_t function_557a40(int64_t a1, int64_t a2) {
    int64_t v1 = function_566390(&g9); // 0x557a54
    int64_t * v2 = (int64_t *)(*(int64_t *)(a2 + 24) + 8 * v1); // 0x557a68
    int64_t result = *v2; // 0x557a68
    if (result != 0) {
        // 0x557a71
        return result;
    }
    int64_t v3 = function_4efd30(112); // 0x557a85
    *(int32_t *)(v3 + 8) = 0;
    *(int64_t *)(v3 + 16) = 0;
    *(int64_t *)(v3 + 24) = 0;
    *(char *)(v3 + 32) = 0;
    *(int64_t *)(v3 + 40) = 0;
    *(int64_t *)(v3 + 48) = 0;
    *(int64_t *)(v3 + 56) = 0;
    *(int64_t *)v3 = (int64_t)&g6;
    *(int64_t *)(v3 + 64) = 0;
    *(int16_t *)(v3 + 33) = (int16_t)((int32_t)&g6 ^ (int32_t)&g6);
    *(int64_t *)(v3 + 72) = 0;
    *(int64_t *)(v3 + 80) = 0;
    *(int64_t *)(v3 + 88) = 0;
    *(int32_t *)(v3 + 96) = 0;
    *(char *)(v3 + 111) = 0;
    function_555fe0(v3, a2);
    function_566890(a2, v3, v1);
    return *v2;
}

// Address range: 0x564090 - 0x564172
int64_t function_564090(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if (a3 == a5) {
        int64_t v1 = *(int64_t *)(a1 + 8); // 0x564150
        int64_t str2 = *(int64_t *)(a4 + 8); // 0x564154
        if (v1 == str2) {
            // 0x56411e
            int64_t result; // 0x564090
            return result;
        }
        char * str = (char *)v1; // 0x56415d
        if (*str != 42) {
            // 0x564166
            strcmp(str, (char *)str2);
            return 6;
        }
    }
    uint32_t v2 = *(int32_t *)(a1 + 20); // 0x5640b7
    if (v2 == 0) {
        // 0x56411e
        return 1;
    }
    int64_t v3 = v2; // 0x5640b7
    int64_t v4 = 0; // 0x564111
    int64_t v5 = a1 + 8 + 16 * v3;
    int64_t v6 = *(int64_t *)(v5 + 8); // 0x5640d0
    int32_t v7; // 0x564090
    uint32_t v8; // 0x5640df
    if ((v6 & 2) != 0) {
        // 0x5640d8
        v8 = (int32_t)v6 % 2;
        if (a2 == -3 != v8 != 0) {
            // 0x5640f6
            v7 = (int32_t)*(int64_t *)*(int64_t *)v5;
            if (v7 > 3) {
                // 0x564138
                return v8 | v7;
            }
        }
    }
    // 0x564111
    v4++;
    int64_t v9 = v5 - 16; // 0x56411c
    while (v4 != v3) {
        // 0x5640d0
        v5 = v9;
        v6 = *(int64_t *)(v5 + 8);
        if ((v6 & 2) != 0) {
            // 0x5640d8
            v8 = (int32_t)v6 % 2;
            if (a2 == -3 != v8 != 0) {
                // 0x5640f6
                v7 = (int32_t)*(int64_t *)*(int64_t *)v5;
                if (v7 > 3) {
                    // 0x564138
                    return v8 | v7;
                }
            }
        }
        // 0x564111
        v4++;
        v9 = v5 - 16;
    }
    // 0x56411e
    return 1;
}

// Address range: 0x56ff90 - 0x570073
// From class:    std::ctype_byname<wchar_t>
// Type:          virtual member function
int64_t function_56ff90(int64_t a1, uint64_t a2, uint64_t result, int64_t a4, int64_t a5) {
    struct __locale_struct * v1 = __uselocale((struct __locale_struct *)*(int64_t *)(a1 + 16)); // 0x56ffb1
    if (*(char *)(a1 + 24) == 0) {
        if (a2 < result) {
            // 0x570045
            int64_t c; // 0x56ff90
            int32_t v2 = wctob((int32_t)c); // 0x570063
            return v2 == -1 ? (int32_t)a4 : v2;
        }
        // 0x57001b
        __uselocale(v1);
        return result;
    }
    if (a2 >= result) {
        // 0x57001b
        __uselocale(v1);
        return result;
    }
    int64_t v3 = a5 + 1 + (-1 - a2 + result) / 4; // 0x56ffd4
    int64_t v4 = a5; // 0x56ffd9
    int64_t v5 = a2; // 0x56ffd9
    while (true) {
        int64_t v6 = v4;
        uint32_t c2 = *(int32_t *)v5; // 0x56fff6
        if (c2 < 128) {
            int64_t v7 = v6 + 1; // 0x56ffe6
            *(char *)v6 = *(char *)(a1 + 25 + (int64_t)c2);
            v4 = v7;
            if (v7 == v3) {
                // break -> 0x57001b
                break;
            }
        } else {
            int32_t v8 = wctob(c2); // 0x56ffff
            int64_t v9 = v6 + 1; // 0x57000b
            *(char *)v6 = (char)(v8 == -1 ? (int32_t)a4 : v8);
            v4 = v9;
            if (v9 == v3) {
                // break -> 0x57001b
                break;
            }
        }
        // 0x56fff6
        v5 += 4;
    }
    // 0x57001b
    __uselocale(v1);
    return result;
}

// Address range: 0x582a30 - 0x582b0e
int64_t function_582a30(int64_t a1, int64_t a2, int64_t a3) {
    if ((uint32_t)(int32_t)a3 < 49) {
        // 0x582b00
        return a3 & 0xffffffff;
    }
    int64_t * v1 = (int64_t *)(a1 + 256); // 0x582a42
    int64_t v2 = *v1; // 0x582a42
    int64_t v3 = v2 + 1; // 0x582a59
    int64_t v4 = v2; // 0x582a59
    if (v2 == 255) {
        // 0x582a5b
        *(char *)(a1 + 255) = 0;
        int64_t * v5 = (int64_t *)(a1 + 320); // 0x582a74
        *v5 = *v5 + 1;
        v3 = 1;
        v4 = 0;
    }
    // 0x582a83
    *v1 = v3;
    *(char *)(v4 + a1) = 40;
    char * v6 = (char *)(a1 + 264); // 0x582a94
    *v6 = 40;
    function_581610(a1, a2 & 0xffffffff, a3);
    int64_t v7 = *v1; // 0x582aa3
    int64_t v8 = v7 + 1; // 0x582ab4
    int64_t result = v7; // 0x582ab4
    if (v7 == 255) {
        // 0x582ab6
        *(char *)(a1 + 255) = 0;
        int64_t * v9 = (int64_t *)(a1 + 320); // 0x582ad2
        *v9 = *v9 + 1;
        v8 = 1;
        result = 0;
    }
    // 0x582ae1
    *v1 = v8;
    *(char *)(result + a1) = 41;
    *v6 = 41;
    return result;
}
