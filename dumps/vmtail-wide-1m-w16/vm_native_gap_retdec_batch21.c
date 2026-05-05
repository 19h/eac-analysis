/*
 * Targeted RetDec C for native executable gap queue batch 21.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4b01d0-0x4b02d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5033d0-0x5034d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x505ca0-0x505da6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c438-0x2c53d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aecc0-0x4aedc5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d0c20-0x4d0d25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4afd30-0x4afe34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e9ae0-0x4e9be4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x499ab0-0x499bb3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a8c40-0x4a8d43 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bc9a0-0x4bcaa3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2b80-0x4d2c83 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54cf90-0x54d093 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57a2b0-0x57a3b3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cdde0-0x4cdee1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x32260-0x32405 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g9;
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
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int fcntl(int fd, int cmd, ...);
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

int64_t function_18cadc();
int64_t function_191c8d();
int64_t function_2c438();
int64_t function_2c902();
int64_t function_32260();
int64_t function_322ad();
int64_t function_322ae();
int64_t function_322b0();
int64_t function_322ca();
int64_t function_322d7();
int64_t function_322da();
int64_t function_322fc();
int64_t function_32301();
int64_t function_32340();
int64_t function_32350();
int64_t function_32360();
int64_t function_323d9();
int64_t function_323de();
int64_t function_32403();
int64_t function_496540();
int64_t function_497610();
int64_t function_498d40();
int64_t function_499ab0();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_4a8c40();
int64_t function_4aec20();
int64_t function_4aecc0();
int64_t function_4afd30();
int64_t function_4afe70();
int64_t function_4b01d0();
int64_t function_4b1680();
int64_t function_4ba7d0();
int64_t function_4bbff0();
int64_t function_4bc9a0();
int64_t function_4c19e0();
int64_t function_4c1af0();
int64_t function_4c1b30();
int64_t function_4c1bc0();
int64_t function_4c1d00();
int64_t function_4cdde0();
int64_t function_4d09e0();
int64_t function_4d0c20();
int64_t function_4d2b80();
int64_t function_4eeb40();
int64_t function_4f15a0();
int64_t function_4f16b0();
int64_t function_4ff1c0();
int64_t function_501020();
int64_t function_502870();
int64_t function_5033d0();
int64_t function_505130();
int64_t function_505ca0();
int64_t function_54cf90();
int64_t function_54d058();
int64_t function_54d05f();
int64_t function_566100();
int64_t function_57a2b0();
int64_t function_ffffffff88deab31();

// Address range: 0x2c438 - 0x2c53d
int64_t function_2c438(int64_t result, int64_t a2) {
    if (a2 != result) {
        int64_t v1 = *(int64_t *)(a2 + 8); // 0x2c451
        function_2c902(v1, v1, result, 0, -0x5555555555555555);
        *(int64_t *)(result + 8) = v1;
    }
    // 0x2c52f
    return result;
}

// Address range: 0x32260 - 0x32296
int64_t function_32260(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32260
    __readfsqword(40);
    return function_18cadc();
}

// Address range: 0x322ad - 0x322ae
int64_t function_322ad(void) {
    // 0x322ad
    int64_t result; // 0x322ad
    return result;
}

// Address range: 0x322ae - 0x322af
int64_t function_322ae(void) {
    // 0x322ae
    int64_t result; // 0x322ae
    return result;
}

// Address range: 0x322b0 - 0x322b2
int64_t function_322b0(void) {
    // 0x322b0
    int64_t v1; // 0x322b0
    return function_322da(v1, v1, v1);
}

// Address range: 0x322ca - 0x322cb
int64_t function_322ca(void) {
    // 0x322ca
    int64_t result; // 0x322ca
    return result;
}

// Address range: 0x322d7 - 0x322da
int64_t function_322d7(void) {
    // 0x322d7
    int64_t result; // 0x322d7
    return result;
}

// Address range: 0x322da - 0x322ee
int64_t function_322da(int64_t a1, int64_t a2, int64_t a3) {
    // 0x322da
    int64_t v1; // 0x322da
    bool v2; // 0x322da
    if (true == !v2) {
        v1 = function_322ad();
    }
    int64_t v3 = a1;
    int64_t v4 = 0; // 0x322dc
    int64_t v5 = v3; // 0x322dc
    int64_t v6; // 0x322da
    while (v6 != 0) {
        int64_t v7 = v3 + (v2 ? -1 : 1); // 0x322dc
        int64_t v8 = v6 - 1; // 0x322dc
        v6 = v8;
        v4 = v8;
        v5 = v7;
        if (*(char *)v3 == (char)v1) {
            // break -> 
            break;
        }
        v3 = v7;
        v4 = 0;
        v5 = v3;
    }
    int64_t v9 = __asm_int1(); // 0x322e0
    uint32_t v10 = 13 * *(int32_t *)((v4 + (a3 & 0xff00) & 0xff00 | a3 & -0xff01) + 0x76d74542); // 0x322e1
    int64_t v11 = v10; // 0x322e1
    unsigned char v12 = (char)(v10 / 256) - *(char *)(v11 - 63); // 0x322e8
    int64_t result = v9; // 0x322eb
    if (v12 != 0 && (256 * (int64_t)v12 || v11 & 0xffff00ff) != 1) {
        result = function_322ae();
    }
    // 0x322ed
    *(char *)v5 = (char)a2;
    return result;
}

// Address range: 0x322fc - 0x32301
int64_t function_322fc(void) {
    // 0x322fc
    return function_ffffffff88deab31();
}

// Address range: 0x32301 - 0x3233a
int64_t function_32301(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32301
    int64_t v1; // 0x32301
    *(int32_t *)(v1 + 52) = 0;
    int64_t result = 0; // 0x3232b
    if (*(int64_t *)(v1 + 128) != __readfsqword(40)) {
        // 0x3232d
        __stack_chk_fail();
        result = (int64_t)&g9;
    }
    // 0x32332
    return result;
}

// Address range: 0x32340 - 0x3234d
int64_t function_32340(int64_t a1) {
    // 0x32340
    return (int64_t)&g4;
}

// Address range: 0x32350 - 0x3235d
int64_t function_32350(int64_t a1) {
    // 0x32350
    return (int64_t)&g5;
}

// Address range: 0x32360 - 0x3239a
int64_t function_32360(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32360
    __readfsqword(40);
    return function_191c8d();
}

// Address range: 0x323d9 - 0x323de
int64_t function_323d9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x323d9
    int64_t v1; // 0x323d9
    bool v2; // 0x323d9
    return v1 - a3 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x323de - 0x323e0
int64_t function_323de(void) {
    // 0x323de
    int64_t result; // 0x323de
    return result;
}

// Address range: 0x32403 - 0x32405
int64_t function_32403(void) {
    // 0x32403
    int64_t result; // 0x32403
    return result;
}

// Address range: 0x499ab0 - 0x499bb2
int64_t function_499ab0(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x499ab0
    function_497610();
    if (a3 < a3) {
        // 0x499ad6
        if ((*(char *)(a1 + 372) & 2) != 0) {
            // 0x499b84
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g1, "fragment larger than the (negotiated) maximum fragment length: %d > %d", a3, a3);
            return 0xffff8f00;
        }
    }
    // 0x499ae9
    int64_t v1; // 0x499ab0
    int64_t v2; // 0x499ab0
    int64_t v3; // 0x499ab0
    if (*(int64_t *)(a1 + 352) == 0) {
        int64_t v4 = *(int64_t *)(a1 + 328); // 0x499b28
        *(int64_t *)(a1 + 344) = a3;
        *(int32_t *)(a1 + 336) = 23;
        memcpy((int64_t *)v4, (int64_t *)a2, (int32_t)a3);
        int64_t v5 = function_498d40(a1); // 0x499b4e
        v2 = v5;
        v3 = (int64_t)&g3;
        v1 = (int64_t)"mbedtls_ssl_write_record";
        if ((int32_t)v5 == 0) {
            // 0x499b10
            return a3 & 0xffffffff;
        }
    } else {
        int64_t v6 = function_496540(a1); // 0x499af6
        v2 = v6;
        v3 = (int64_t)&g2;
        v1 = (int64_t)"mbedtls_ssl_flush_output";
        if ((int32_t)v6 == 0) {
            // 0x499b10
            return a3 & 0xffffffff;
        }
    }
    int64_t v7 = v2;
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v3, (char *)v1, v7 & 0xffffffff, 0x100000000 * v7 >> 32);
    // 0x499b10
    return v7 & 0xffffffff;
}

// Address range: 0x4a8c40 - 0x4a8d43
int64_t function_4a8c40(int64_t a1) {
    // 0x4a8c40
    if (a1 == 0) {
        // 0x4a8d3e
        int64_t result; // 0x4a8c40
        return result;
    }
    // 0x4a8c40
    free((int64_t *)*(int64_t *)(a1 + 400));
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x4a8c5f
    int64_t v2 = v1; // 0x4a8c69
    int64_t v3; // 0x4a8c40
    int64_t v4; // 0x4a8c40
    int64_t v5; // 0x4a8c70
    if (v1 != 0) {
        v5 = *(int64_t *)(v2 + 48);
        v4 = v2;
        *(char *)v4 = 0;
        v3 = v4 + 1;
        while (v4 != v2 + 63) {
            // 0x4a8c80
            v4 = v3;
            *(char *)v4 = 0;
            v3 = v4 + 1;
        }
        // 0x4a8c8c
        free((int64_t *)v2);
        v2 = v5;
        while (v5 != 0) {
            // 0x4a8c70
            v5 = *(int64_t *)(v2 + 48);
            v4 = v2;
            *(char *)v4 = 0;
            v3 = v4 + 1;
            while (v4 != v2 + 63) {
                // 0x4a8c80
                v4 = v3;
                *(char *)v4 = 0;
                v3 = v4 + 1;
            }
            // 0x4a8c8c
            free((int64_t *)v2);
            v2 = v5;
        }
    }
    int64_t v6 = *(int64_t *)(a1 + 312); // 0x4a8c99
    int64_t v7 = v6; // 0x4a8ca3
    int64_t v8; // 0x4a8c40
    int64_t v9; // 0x4a8c40
    int64_t v10; // 0x4a8ca8
    if (v6 != 0) {
        v10 = *(int64_t *)(v7 + 96);
        v9 = v7;
        *(char *)v9 = 0;
        v8 = v9 + 1;
        while (v9 != v7 + 103) {
            // 0x4a8cb8
            v9 = v8;
            *(char *)v9 = 0;
            v8 = v9 + 1;
        }
        // 0x4a8cc4
        free((int64_t *)v7);
        v7 = v10;
        while (v10 != 0) {
            // 0x4a8ca8
            v10 = *(int64_t *)(v7 + 96);
            v9 = v7;
            *(char *)v9 = 0;
            v8 = v9 + 1;
            while (v9 != v7 + 103) {
                // 0x4a8cb8
                v9 = v8;
                *(char *)v9 = 0;
                v8 = v9 + 1;
            }
            // 0x4a8cc4
            free((int64_t *)v7);
            v7 = v10;
        }
    }
    int64_t * v11 = (int64_t *)(a1 + 16); // 0x4a8cd1
    int64_t v12 = *v11; // 0x4a8cd1
    int64_t v13; // 0x4a8cda
    int64_t v14; // 0x4a8ce9
    int64_t v15; // 0x4a8cf2
    if (v12 != 0) {
        // 0x4a8cda
        v13 = *(int64_t *)(a1 + 8);
        v15 = v12;
        if (v13 != 0) {
            // 0x4a8ce3
            v14 = v12;
            *(char *)v14 = 0;
            v14++;
            while (v14 != v13 + v12) {
                // 0x4a8ce6
                *(char *)v14 = 0;
                v14++;
            }
            // 0x4a8cf2
            v15 = *v11;
        }
        // 0x4a8cf6
        free((int64_t *)v15);
    }
    int64_t v16 = *(int64_t *)(a1 + 408); // 0x4a8cfb
    while (v16 != 0) {
        int64_t v17 = v16;
        free((int64_t *)*(int64_t *)(v17 + 400));
        v1 = *(int64_t *)(v17 + 152);
        v2 = v1;
        if (v1 != 0) {
            v5 = *(int64_t *)(v2 + 48);
            v4 = v2;
            *(char *)v4 = 0;
            v3 = v4 + 1;
            while (v4 != v2 + 63) {
                // 0x4a8c80
                v4 = v3;
                *(char *)v4 = 0;
                v3 = v4 + 1;
            }
            // 0x4a8c8c
            free((int64_t *)v2);
            v2 = v5;
            while (v5 != 0) {
                // 0x4a8c70
                v5 = *(int64_t *)(v2 + 48);
                v4 = v2;
                *(char *)v4 = 0;
                v3 = v4 + 1;
                while (v4 != v2 + 63) {
                    // 0x4a8c80
                    v4 = v3;
                    *(char *)v4 = 0;
                    v3 = v4 + 1;
                }
                // 0x4a8c8c
                free((int64_t *)v2);
                v2 = v5;
            }
        }
        // 0x4a8c99
        v6 = *(int64_t *)(v17 + 312);
        v7 = v6;
        if (v6 != 0) {
            v10 = *(int64_t *)(v7 + 96);
            v9 = v7;
            *(char *)v9 = 0;
            v8 = v9 + 1;
            while (v9 != v7 + 103) {
                // 0x4a8cb8
                v9 = v8;
                *(char *)v9 = 0;
                v8 = v9 + 1;
            }
            // 0x4a8cc4
            free((int64_t *)v7);
            v7 = v10;
            while (v10 != 0) {
                // 0x4a8ca8
                v10 = *(int64_t *)(v7 + 96);
                v9 = v7;
                *(char *)v9 = 0;
                v8 = v9 + 1;
                while (v9 != v7 + 103) {
                    // 0x4a8cb8
                    v9 = v8;
                    *(char *)v9 = 0;
                    v8 = v9 + 1;
                }
                // 0x4a8cc4
                free((int64_t *)v7);
                v7 = v10;
            }
        }
        // 0x4a8cd1
        v11 = (int64_t *)(v17 + 16);
        v12 = *v11;
        if (v12 != 0) {
            // 0x4a8cda
            v13 = *(int64_t *)(v17 + 8);
            v15 = v12;
            if (v13 != 0) {
                // 0x4a8ce3
                v14 = v12;
                *(char *)v14 = 0;
                v14++;
                while (v14 != v13 + v12) {
                    // 0x4a8ce6
                    *(char *)v14 = 0;
                    v14++;
                }
                // 0x4a8cf2
                v15 = *v11;
            }
            // 0x4a8cf6
            free((int64_t *)v15);
        }
        // 0x4a8cfb
        v16 = *(int64_t *)(v17 + 408);
    }
    int64_t v18 = *(int64_t *)(a1 + 408); // 0x4a8d0e
    int64_t v19 = a1;
    *(char *)v19 = 0;
    int64_t v20 = v19 + 1; // 0x4a8d23
    while (v19 != a1 + 415) {
        // 0x4a8d20
        v19 = v20;
        *(char *)v19 = 0;
        v20 = v19 + 1;
    }
    int64_t result2 = v20; // 0x4a8d2f
    // 0x4a8d36
    while (v18 != 0) {
        int64_t v21 = v18;
        v18 = *(int64_t *)(v21 + 408);
        v19 = v21;
        *(char *)v19 = 0;
        v20 = v19 + 1;
        while (v19 != v21 + 415) {
            // 0x4a8d20
            v19 = v20;
            *(char *)v19 = 0;
            v20 = v19 + 1;
        }
        // 0x4a8d2c
        result2 = v20;
        if (v21 != a1) {
            // 0x4a8d31
            free((int64_t *)v21);
            result2 = (int64_t)&g9;
        }
    }
    // 0x4a8d3e
    return result2;
}

// Address range: 0x4aecc0 - 0x4aedc5
int64_t function_4aecc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4aecc0
    if (a3 % 16 != 0) {
        // 0x4aed52
        return 0xffffffde;
    }
    int32_t v1 = a2; // 0x4aecda
    if (v1 == 0) {
        // 0x4aeced
        if (a3 == 0) {
            // 0x4aed52
            return 0;
        }
        int64_t v2 = a6; // 0x4aecc0
        int64_t v3 = a3; // 0x4aed3e
        int64_t v4 = a5; // 0x4aecc0
        function_4aec20(a1, 0, v4, v2);
        char * v5; // 0x4aed25
        for (int64_t i = 0; i < 16; i++) {
            // 0x4aed20
            v5 = (char *)(i + v2);
            *v5 = *v5 ^ *(char *)(i + a4);
        }
        // 0x4aed32
        v3 -= 16;
        *(int64_t *)a4 = *(int64_t *)v4;
        *(int64_t *)(a4 + 8) = 0x100000000 * *(int64_t *)(v4 + 8) >> 32;
        v2 += 16;
        v4 += 16;
        while (v3 != 0) {
            // 0x4aecf8
            function_4aec20(a1, 0, v4, v2);
            for (int64_t i = 0; i < 16; i++) {
                // 0x4aed20
                v5 = (char *)(i + v2);
                *v5 = *v5 ^ *(char *)(i + a4);
            }
            // 0x4aed32
            v3 -= 16;
            *(int64_t *)a4 = *(int64_t *)v4;
            *(int64_t *)(a4 + 8) = 0x100000000 * *(int64_t *)(v4 + 8) >> 32;
            v2 += 16;
            v4 += 16;
        }
        // 0x4aed52
        return 0;
    }
    // 0x4aed61
    if (a3 == 0) {
        // 0x4aed52
        return 0;
    }
    int64_t v6 = a3; // 0x4aedb2
    int64_t v7 = a5; // 0x4aecc0
    int64_t v8 = a6;
    int64_t v9 = 0;
    char v10 = *(char *)(v9 + v7); // 0x4aed7d
    *(char *)(v9 + v8) = v10 ^ *(char *)(v9 + a4);
    int64_t v11 = v9 + 1; // 0x4aed85
    while (v11 != 16) {
        // 0x4aed78
        v9 = v11;
        v10 = *(char *)(v9 + v7);
        *(char *)(v9 + v8) = v10 ^ *(char *)(v9 + a4);
        v11 = v9 + 1;
    }
    // 0x4aed8f
    function_4aec20(a1, v1, v8, v8);
    *(int64_t *)a4 = *(int64_t *)v8;
    v6 -= 16;
    *(int64_t *)(a4 + 8) = *(int64_t *)(v8 + 8);
    int64_t v12 = v8 + 16; // 0x4aedba
    v7 += 16;
    while (v6 != 0) {
        // 0x4aed70
        v8 = v12;
        v9 = 0;
        v10 = *(char *)(v9 + v7);
        *(char *)(v9 + v8) = v10 ^ *(char *)(v9 + a4);
        v11 = v9 + 1;
        while (v11 != 16) {
            // 0x4aed78
            v9 = v11;
            v10 = *(char *)(v9 + v7);
            *(char *)(v9 + v8) = v10 ^ *(char *)(v9 + a4);
            v11 = v9 + 1;
        }
        // 0x4aed8f
        function_4aec20(a1, v1, v8, v8);
        *(int64_t *)a4 = *(int64_t *)v8;
        v6 -= 16;
        *(int64_t *)(a4 + 8) = *(int64_t *)(v8 + 8);
        v12 = v8 + 16;
        v7 += 16;
    }
    // 0x4aed52
    return 0;
}

// Address range: 0x4afd30 - 0x4afe33
int64_t function_4afd30(uint64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x4afd36
    if (v1 < 1) {
        // 0x4afd5f
        return 0xffffffa0;
    }
    char v2 = a1;
    int64_t v3; // 0x4afd30
    int64_t v4; // 0x4afd30
    if (v2 < 0) {
        unsigned char v5 = v2 ^ -128;
        if (v5 == 2) {
            if (v1 < 3) {
                // 0x4afd5f
                return 0xffffffa0;
            }
            unsigned char v6 = *(char *)(a1 + 2); // 0x4afd92
            int64_t v7 = a1 + 3; // 0x4afd97
            int64_t v8 = 256 * (int64_t)*(char *)(a1 + 1) | (int64_t)v6; // 0x4afd9f
            *(int64_t *)a3 = v8;
            *(int64_t *)a1 = v7;
            v3 = v7;
            v4 = v8;
        } else {
            if (v5 < 3) {
                // 0x4afd72
                return v5 == 1 ? a1 : 0xffffff9c;
            }
            if (v5 == 3) {
                if (v1 >= 4) {
                    // 0x4afe16
                    return a1 + 4;
                }
                // 0x4afd5f
                return 0xffffffa0;
            }
            // 0x4afdb5
            if (v5 != 4) {
                // 0x4afd5f
                return 0xffffff9c;
            }
            if (v1 < 5) {
                // 0x4afd5f
                return 0xffffffa0;
            }
            unsigned char v9 = *(char *)(a1 + 1); // 0x4afdc0
            unsigned char v10 = *(char *)(a1 + 2); // 0x4afdc4
            unsigned char v11 = *(char *)(a1 + 4); // 0x4afdd4
            unsigned char v12 = *(char *)(a1 + 3); // 0x4afddc
            int64_t v13 = a1 + 5; // 0x4afde1
            int64_t v14 = 0x10000 * (int64_t)v10 | 0x1000000 * (int64_t)v9 | (int64_t)v11 | 256 * (int64_t)v12; // 0x4afde9
            *(int64_t *)a3 = v14;
            *(int64_t *)a1 = v13;
            v3 = v13;
            v4 = v14;
        }
    } else {
        int64_t v15 = a1 % 256; // 0x4afd42
        int64_t v16 = a1 + 1; // 0x4afd49
        *(int64_t *)a3 = v15;
        *(int64_t *)a1 = v16;
        v3 = v16;
        v4 = v15;
    }
    // 0x4afd53
    if (a2 - v3 < v4) {
        // 0x4afd5f
        return 0xffffffa0;
    }
    // 0x4afd5f
    return 0;
}

// Address range: 0x4b01d0 - 0x4b02d6
int64_t function_4b01d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b01d0
    int64_t v1; // bp-48, 0x4b01d0
    int64_t result = function_4afe70(a1, a2, &v1, 48); // 0x4b01fe
    if (a2 - a1 < 1 || (int32_t)result != 0) {
        // 0x4b02a0
        return result;
    }
    int64_t v2 = v1 + a1; // 0x4b0221
    *(int32_t *)a3 = (int32_t)a1 % 256;
    int64_t * v3 = (int64_t *)(a3 + 8); // 0x4b023a
    int64_t result2 = function_4afe70(a1, v2, v3, 6); // 0x4b023a
    if ((int32_t)result2 != 0) {
        // 0x4b02a0
        return result2;
    }
    // 0x4b0243
    *(int64_t *)(a3 + 16) = a1;
    int64_t v4 = *v3 + a1; // 0x4b0250
    int64_t * v5 = (int64_t *)a1; // 0x4b0258
    *v5 = v4;
    if (v2 == v4) {
        int64_t v6 = a4;
        *(char *)v6 = 0;
        int64_t v7 = v6 + 1; // 0x4b02d2
        while (v6 != a4 + 23) {
            // 0x4b02c8
            v6 = v7;
            *(char *)v6 = 0;
            v7 = v6 + 1;
        }
        // 0x4b02a0
        return result2;
    }
    // 0x4b025e
    *(int32_t *)a4 = (int32_t)*(char *)v4;
    *v5 = v4 + 1;
    int64_t v8 = a4 + 8; // 0x4b0271
    int64_t v9 = function_4afd30(a1, v2, v8); // 0x4b0275
    int64_t result3 = v9; // 0x4b027c
    if ((int32_t)v9 == 0) {
        // 0x4b027e
        *(int64_t *)(a4 + 16) = a1;
        int64_t v10 = *(int64_t *)v8 + a1; // 0x4b028a
        *v5 = v10;
        result3 = v2 != v10 ? 0xffffff9a : v9 & 0xffffffff;
    }
    // 0x4b02a0
    return result3;
}

// Address range: 0x4bc9a0 - 0x4bcaa2
int64_t function_4bc9a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4bc9a0
    if ((int32_t)function_4b1680(a3, 1) == 0) {
        // 0x4bca50
        return function_4ba7d0(a2, a4);
    }
    // 0x4bc9d5
    if ((int32_t)function_4b1680(a3, -1) != 0) {
        // 0x4bca18
        return function_4bbff0(a1, a2, a3, a4, 0, 0);
    }
    int64_t v1 = function_4ba7d0(a2, a4); // 0x4bc9ee
    int64_t result = v1 & 0xffffffff; // 0x4bc9f5
    if ((int32_t)v1 != 0) {
        // 0x4bc9f9
        return result;
    }
    int64_t v2 = function_4b1680(a2 + 24, 0); // 0x4bca81
    return (int32_t)v2 == 0 ? result : v2;
}

// Address range: 0x4cdde0 - 0x4cdee0
int64_t function_4cdde0(int64_t a1, int64_t a2) {
    int32_t v1 = a2; // 0x4cdde0
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    int64_t * v2 = (int64_t *)(a1 + 16);
    if (v1 == 0) {
        // 0x4cde70
        *v2 = 0x6a09e667f3bcc908;
        *(int64_t *)(a1 + 24) = -0x4498517a7b3558c5;
        *(int64_t *)(a1 + 56) = -0x64fa9773d4c193e1;
        *(int64_t *)(a1 + 32) = 0x3c6ef372fe94f82b;
        *(int64_t *)(a1 + 64) = 0x1f83d9abfb41bd6b;
        *(int64_t *)(a1 + 40) = -0x5ab00ac5a0e2c90f;
        *(int64_t *)(a1 + 72) = 0x5be0cd19137e2179;
        *(int64_t *)(a1 + 48) = 0x510e527fade682d1;
        return 0x510e527fade682d1;
    }
    // 0x4cddf3
    *v2 = -0x344462a23efa6128;
    *(int64_t *)(a1 + 24) = 0x629a292a367cd507;
    *(int64_t *)(a1 + 32) = -0x6ea6fea5cf8f22e9;
    *(int64_t *)(a1 + 40) = 0x152fecd8f70e5939;
    *(int64_t *)(a1 + 48) = 0x67332667ffc00b31;
    *(int64_t *)(a1 + 56) = -0x714bb57897a7eaef;
    *(int64_t *)(a1 + 64) = -0x24f3d1f29b067059;
    *(int64_t *)(a1 + 72) = 0x47b5481dbefa4fa4;
    *(int32_t *)(a1 + 208) = v1;
    return 0x47b5481dbefa4fa4;
}

// Address range: 0x4d0c20 - 0x4d0d25
int64_t function_4d0c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4d0c20
    if (a3 % 16 != 0) {
        // 0x4d0cb2
        return 0xffffffda;
    }
    int32_t v1 = a2; // 0x4d0c3a
    if (v1 == 0) {
        // 0x4d0c4d
        if (a3 == 0) {
            // 0x4d0cb2
            return 0;
        }
        int64_t v2 = a6; // 0x4d0c20
        int64_t v3 = a3; // 0x4d0c9e
        int64_t v4 = a5; // 0x4d0c20
        function_4d09e0(a1, 0, v4, v2);
        char * v5; // 0x4d0c85
        for (int64_t i = 0; i < 16; i++) {
            // 0x4d0c80
            v5 = (char *)(i + v2);
            *v5 = *v5 ^ *(char *)(i + a4);
        }
        // 0x4d0c92
        v3 -= 16;
        *(int64_t *)a4 = *(int64_t *)v4;
        *(int64_t *)(a4 + 8) = 0x100000000 * *(int64_t *)(v4 + 8) >> 32;
        v2 += 16;
        v4 += 16;
        while (v3 != 0) {
            // 0x4d0c58
            function_4d09e0(a1, 0, v4, v2);
            for (int64_t i = 0; i < 16; i++) {
                // 0x4d0c80
                v5 = (char *)(i + v2);
                *v5 = *v5 ^ *(char *)(i + a4);
            }
            // 0x4d0c92
            v3 -= 16;
            *(int64_t *)a4 = *(int64_t *)v4;
            *(int64_t *)(a4 + 8) = 0x100000000 * *(int64_t *)(v4 + 8) >> 32;
            v2 += 16;
            v4 += 16;
        }
        // 0x4d0cb2
        return 0;
    }
    // 0x4d0cc1
    if (a3 == 0) {
        // 0x4d0cb2
        return 0;
    }
    int64_t v6 = a3; // 0x4d0d12
    int64_t v7 = a5; // 0x4d0c20
    int64_t v8 = a6;
    int64_t v9 = 0;
    char v10 = *(char *)(v9 + v7); // 0x4d0cdd
    *(char *)(v9 + v8) = v10 ^ *(char *)(v9 + a4);
    int64_t v11 = v9 + 1; // 0x4d0ce5
    while (v11 != 16) {
        // 0x4d0cd8
        v9 = v11;
        v10 = *(char *)(v9 + v7);
        *(char *)(v9 + v8) = v10 ^ *(char *)(v9 + a4);
        v11 = v9 + 1;
    }
    // 0x4d0cef
    function_4d09e0(a1, v1, v8, v8);
    *(int64_t *)a4 = *(int64_t *)v8;
    v6 -= 16;
    *(int64_t *)(a4 + 8) = *(int64_t *)(v8 + 8);
    int64_t v12 = v8 + 16; // 0x4d0d1a
    v7 += 16;
    while (v6 != 0) {
        // 0x4d0cd0
        v8 = v12;
        v9 = 0;
        v10 = *(char *)(v9 + v7);
        *(char *)(v9 + v8) = v10 ^ *(char *)(v9 + a4);
        v11 = v9 + 1;
        while (v11 != 16) {
            // 0x4d0cd8
            v9 = v11;
            v10 = *(char *)(v9 + v7);
            *(char *)(v9 + v8) = v10 ^ *(char *)(v9 + a4);
            v11 = v9 + 1;
        }
        // 0x4d0cef
        function_4d09e0(a1, v1, v8, v8);
        *(int64_t *)a4 = *(int64_t *)v8;
        v6 -= 16;
        *(int64_t *)(a4 + 8) = *(int64_t *)(v8 + 8);
        v12 = v8 + 16;
        v7 += 16;
    }
    // 0x4d0cb2
    return 0;
}

// Address range: 0x4d2b80 - 0x4d2c7b
int64_t function_4d2b80(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = (uint64_t)function_4c1d00(a1) % 256; // 0x4d2ba7
    int32_t v2 = 0;
    int64_t v3 = a1 + 24;
    function_4c1bc0(a1);
    function_4c1af0(a1, v3, v1);
    function_4c1af0(a1, (int64_t)&v2, 1);
    if (a3 != 0 == (a2 != 0)) {
        // 0x4d2c47
        function_4c1af0(a1, a2, a3);
    }
    // 0x4d2bd8
    int64_t v4; // bp-120, 0x4d2b80
    function_4c1b30(a1, &v4);
    function_4c19e0(a1, &v4, v1);
    function_4c1af0(a1, v3, v1);
    function_4c1b30(a1, (int64_t *)v3);
    uint32_t result = v2 % 256 + 1; // 0x4d2c0f
    v2 = 0x1000000 * result / 0x1000000;
    while ((a3 != 0 == (a2 != 0) ? 2 : 1) > (char)result) {
        // 0x4d2c1b
        function_4c1bc0(a1);
        function_4c1af0(a1, v3, v1);
        function_4c1af0(a1, (int64_t)&v2, 1);
        if (a3 != 0 == (a2 != 0)) {
            // 0x4d2c47
            function_4c1af0(a1, a2, a3);
        }
        // 0x4d2bd8
        function_4c1b30(a1, &v4);
        function_4c19e0(a1, &v4, v1);
        function_4c1af0(a1, v3, v1);
        function_4c1b30(a1, (int64_t *)v3);
        result = v2 % 256 + 1;
        v2 = 0x1000000 * result / 0x1000000;
    }
    // 0x4d2c80
    return result;
}

// Address range: 0x4e9ae0 - 0x4e9be0
int64_t ZydisCalcAbsoluteAddress(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4; // 0x4e9aea
    if (a1 == 0 || a2 == 0 || a4 == 0) {
        // 0x4e9b49
        return 0x80100004;
    }
    int32_t v2 = *(int32_t *)(a2 + 32); // 0x4e9b04
    if (v2 != 2) {
        // 0x4e9b0c
        if (v2 != 4 || *(char *)(a2 + 40) == 0 || *(char *)(a2 + 41) == 0) {
            // 0x4e9b49
            return 0x80100004;
        }
        int64_t v3 = (int64_t)*(char *)(a1 + 8) + a3 + *(int64_t *)(a2 + 48); // 0x4e9b25
        *(int64_t *)a4 = v3;
        int32_t v4 = *(int32_t *)&v1; // 0x4e9b2f
        if (v4 == 0) {
            // 0x4e9b49
            return 0x100000;
        }
        int64_t result = 0x80100004; // 0x4e9b3c
        if (v4 < 6) {
            // 0x4e9b3e
            result = *(char *)(a1 + 22) == 16 ? v3 : 0x100000;
        }
        // 0x4e9b49
        return result;
    }
    // 0x4e9b50
    if (*(char *)(a2 + 64) == 0) {
        // 0x4e9b49
        return 0x80100004;
    }
    int64_t v5 = a2 + 48; // 0x4e9b56
    switch (*(int32_t *)v5) {
        case 196: {
            int32_t v6 = *(int32_t *)(a2 + 72); // 0x4e9ba0
            unsigned char v7 = *(char *)(a1 + 8); // 0x4e9ba3
            *(int64_t *)a4 = (int64_t)(v6 + (int32_t)a3 + (int32_t)v7);
            // 0x4e9b49
            return 0x100000;
        }
        case 197: {
            int64_t v8 = *(int64_t *)(a2 + 72); // 0x4e9bb0
            *(int64_t *)a4 = v8 + a3 + (int64_t)*(char *)(a1 + 8);
            // 0x4e9b49
            return 0x100000;
        }
    }
    // 0x4e9b69
    if (*(int64_t *)v5 != 0) {
        // 0x4e9b49
        return 0x80100004;
    }
    char v9 = *(char *)(a1 + 23); // 0x4e9b80
    switch (v9) {
        case 32: {
            // 0x4e9bcd
            *(int64_t *)a4 = (int64_t)*(int32_t *)(a2 + 72);
            // 0x4e9b49
            return 0x100000;
        }
        case 64: {
            // 0x4e9bc1
            *(int64_t *)a4 = *(int64_t *)(a2 + 72);
            // 0x4e9b49
            return 0x100000;
        }
    }
    int64_t result2 = 0x80100004; // 0x4e9b92
    if (v9 == 16) {
        // 0x4e9b94
        *(int64_t *)a4 = (int64_t)*(int16_t *)(a2 + 72);
        result2 = 0x100000;
    }
    // 0x4e9b49
    return result2;
}

// Address range: 0x5033d0 - 0x5034d4
int64_t function_5033d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 104; // 0x5033d8
    __readfsqword(40);
    if ((char)function_4f15a0(v1) != 0) {
        // 0x50348a
        __readfsqword(40);
        return 0;
    }
    int64_t v2 = a3 & 0xffffffff; // 0x5033e0
    function_4f16b0(v1, a2, v2, 436);
    if ((char)function_4f15a0(v1) == 0) {
        // 0x50348a
        __readfsqword(40);
        return 0;
    }
    // 0x50342a
    function_4ff1c0(a1);
    int64_t v3 = *(int64_t *)(a1 + 152); // 0x503432
    *(int32_t *)(a1 + 120) = (int32_t)a3;
    *(char *)(a1 + 169) = 0;
    *(char *)(a1 + 170) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 8) = v3;
    *(int64_t *)(a1 + 16) = v3;
    *(int64_t *)(a1 + 24) = v3;
    int64_t v4 = *(int64_t *)(a1 + 124); // 0x50346b
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 132) = v4;
    *(int64_t *)(a1 + 140) = v4;
    int64_t result = a1; // 0x503485
    if (a1 == -1 && (a3 & 2) != 0) {
        // 0x5034c1
        function_502870(a1, 0, 2, v2);
        result = 0;
    }
    // 0x50348a
    __readfsqword(40);
    return result;
}

// Address range: 0x505ca0 - 0x505da4
int64_t function_505ca0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 104; // 0x505ca8
    __readfsqword(40);
    if ((char)function_4f15a0(v1) != 0) {
        // 0x505d5a
        __readfsqword(40);
        return 0;
    }
    int64_t v2 = a3 & 0xffffffff; // 0x505cb0
    function_4f16b0(v1, a2, v2, 436);
    if ((char)function_4f15a0(v1) == 0) {
        // 0x505d5a
        __readfsqword(40);
        return 0;
    }
    // 0x505cfa
    function_501020(a1);
    int64_t v3 = *(int64_t *)(a1 + 152); // 0x505d02
    *(int32_t *)(a1 + 120) = (int32_t)a3;
    *(char *)(a1 + 169) = 0;
    *(char *)(a1 + 170) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 8) = v3;
    *(int64_t *)(a1 + 16) = v3;
    *(int64_t *)(a1 + 24) = v3;
    int64_t v4 = *(int64_t *)(a1 + 124); // 0x505d3b
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 132) = v4;
    *(int64_t *)(a1 + 140) = v4;
    int64_t result = a1; // 0x505d55
    if (a1 == -1 && (a3 & 2) != 0) {
        // 0x505d91
        function_505130(a1, 0, 2, v2);
        result = 0;
    }
    // 0x505d5a
    __readfsqword(40);
    return result;
}

// Address range: 0x54cf90 - 0x54d055
int64_t function_54cf90(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 64; // 0x54cf95
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    *(int64_t *)(a1 + 16) = *(int64_t *)(a2 + 16);
    *(int32_t *)(a1 + 24) = *(int32_t *)(a2 + 24);
    *(int32_t *)(a1 + 28) = *(int32_t *)(a2 + 28);
    *(int32_t *)(a1 + 32) = *(int32_t *)(a2 + 32);
    int64_t * v2 = (int64_t *)(a2 + 40); // 0x54cfbf
    *v2 = 0;
    *(int64_t *)(a1 + 40) = *v2;
    int64_t * v3 = (int64_t *)(a1 + 200); // 0x54cfcf
    int64_t v4 = *v3; // 0x54cfcf
    if (v4 != 0 && v4 != v1) {
        // 0x54cfe0
        function_4eeb40(v4);
    }
    int64_t * v5 = (int64_t *)(a2 + 200); // 0x54cfef
    int64_t v6 = *v5; // 0x54cfef
    int64_t v7 = a2 + 64; // 0x54cff6
    if (v6 == v7) {
        // 0x54d040
        *v3 = v1;
        *(int32_t *)(a1 + 192) = 8;
        return function_54d05f(v4, a2, 0);
    }
    // 0x54cfff
    *v5 = v7;
    *v3 = v6;
    int32_t * v8 = (int32_t *)(a2 + 192); // 0x54d00d
    *v8 = 8;
    *(int32_t *)(a1 + 192) = *v8;
    return function_566100(a1 + 208, a2 + 208, v7);
}

// Address range: 0x54d058 - 0x54d05f
int64_t function_54d058(void) {
    // 0x54d058
    int64_t result; // 0x54d058
    return result;
}

// Address range: 0x54d05f - 0x54d092
int64_t function_54d05f(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a3;
    int64_t v2; // 0x54d05f
    int64_t result = v2 + v1; // 0x54d066
    int64_t v3 = *(int64_t *)(a2 + 200) + v1; // 0x54d06b
    int64_t * v4 = (int64_t *)v3; // 0x54d072
    *v4 = 0;
    *(int64_t *)(v3 + 8) = 0;
    *(int64_t *)result = *v4;
    return result;
}

// Address range: 0x57a2b0 - 0x57a3b0
int64_t function_57a2b0(int64_t a1, int64_t a2) {
    // 0x57a2b0
    int64_t v1; // bp-88, 0x57a2b0
    int64_t v2 = (int64_t)&v1; // 0x57a2d1
    int64_t v3 = __readfsqword(40); // 0x57a2d4
    __sprintf_chk((char *)&v1, 1, 25, "%d");
    int64_t v4 = v2;
    int32_t v5 = *(int32_t *)v4; // 0x57a2ef
    int64_t v6 = v4 + 4; // 0x57a2f1
    int32_t v7 = v5 - 0x1010101 & (v5 ^ -0x7f7f7f80); // 0x57a2fd
    uint32_t v8 = v7 & -0x7f7f7f80; // 0x57a2ff
    while (v8 == 0) {
        // 0x57a2ef
        v4 = v6;
        v5 = *(int32_t *)v4;
        v6 = v4 + 4;
        v7 = v5 - 0x1010101 & (v5 ^ -0x7f7f7f80);
        v8 = v7 & -0x7f7f7f80;
    }
    int32_t v9 = (v7 & (int32_t)&g6 & -0x7f7f7f80) == 0 ? v8 / 0x10000 : v8; // 0x57a310
    int64_t v10 = (v7 & (int32_t)&g6 & -0x7f7f7f80) == 0 ? v4 + 6 : v6; // 0x57a319
    unsigned char v11 = (char)v9; // 0x57a31d
    int64_t v12 = v10 - (-1 - v11 < v11 ? 4 : 3); // 0x57a320
    if (v12 == v2) {
        // 0x57a3a0
        return __readfsqword(40) ^ v3;
    }
    int64_t * v13 = (int64_t *)(a1 + 256); // 0x57a329
    int64_t * v14 = (int64_t *)(a1 + 320);
    int64_t v15 = v2; // 0x57a335
    int64_t v16 = *v13;
    char v17 = *(char *)v15; // 0x57a38c
    int64_t v18; // 0x57a2b0
    int64_t v19; // 0x57a2b0
    if (v16 == 255) {
        // 0x57a340
        *(char *)(a1 + 255) = 0;
        *v14 = *v14 + 1;
        v18 = 1;
        v19 = 0;
    } else {
        // 0x57a393
        v18 = v16 + 1;
        v19 = v16;
    }
    int64_t v20 = v18;
    v15++;
    *v13 = v20;
    *(char *)(v19 + a1) = v17;
    *(char *)(a1 + 264) = v17;
    while (v12 != v15) {
        // 0x57a386
        v16 = v20;
        v17 = *(char *)v15;
        if (v16 == 255) {
            // 0x57a340
            *(char *)(a1 + 255) = 0;
            *v14 = *v14 + 1;
            v18 = 1;
            v19 = 0;
        } else {
            // 0x57a393
            v18 = v16 + 1;
            v19 = v16;
        }
        // 0x57a36b
        v20 = v18;
        v15++;
        *v13 = v20;
        *(char *)(v19 + a1) = v17;
        *(char *)(a1 + 264) = v17;
    }
    // 0x57a3a0
    return __readfsqword(40) ^ v3;
}
