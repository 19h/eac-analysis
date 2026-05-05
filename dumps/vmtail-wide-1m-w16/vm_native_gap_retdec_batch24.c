/*
 * Targeted RetDec C for native executable gap queue batch 24.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x573010-0x573103 rank=- name=- kind=- bytes=- uncovered=-
 *   0x569140-0x569232 rank=- name=- kind=- bytes=- uncovered=-
 *   0x72496-0x72587 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f1920-0x4f1a11 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49d220-0x49d310 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50b1c0-0x50b2b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54a3d0-0x54a4c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x473f6-0x474e5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5a470-0x5a55f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ee130-0x4ee21f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eec10-0x4eecff rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ef2e0-0x4ef3cf rank=- name=- kind=- bytes=- uncovered=-
 *   0x5142c0-0x5143ae rank=- name=- kind=- bytes=- uncovered=-
 *   0x529720-0x52980e rank=- name=- kind=- bytes=- uncovered=-
 *   0x53c390-0x53c47e rank=- name=- kind=- bytes=- uncovered=-
 *   0x55e9b0-0x55ea9e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g15;
extern int g16;
extern int g17;
extern int g18;
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

int64_t function_1ff80();
int64_t function_20110();
int64_t function_20210();
int64_t function_203b0();
int64_t function_20730();
int64_t function_20850();
int64_t function_24e1e();
int64_t function_2508e();
int64_t function_250b0();
int64_t function_256ba();
int64_t function_473f6();
int64_t function_48f087();
int64_t function_49b370();
int64_t function_49baf0();
int64_t function_49d220();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_4ae3c();
int64_t function_4e4f0();
int64_t function_4e554();
int64_t function_4eeb50();
int64_t function_4ef000();
int64_t function_4ef280();
int64_t function_4ef2e0();
int64_t function_4f0ad0();
int64_t function_4f1700();
int64_t function_4f1920();
int64_t function_4f3da();
int64_t function_4f73c();
int64_t function_4f754();
int64_t function_50b1c0();
int64_t function_512ca0();
int64_t function_5137b0();
int64_t function_5142c0();
int64_t function_526ea0();
int64_t function_5282e0();
int64_t function_529720();
int64_t function_539b70();
int64_t function_53af80();
int64_t function_53c390();
int64_t function_5423f0();
int64_t function_549a50();
int64_t function_54a3d0();
int64_t function_55d470();
int64_t function_55df10();
int64_t function_55e9b0();
int64_t function_5652c0();
int64_t function_565f30();
int64_t function_566390();
int64_t function_5678f0();
int64_t function_569140();
int64_t function_570890();
int64_t function_573010();
int64_t function_5a45a();
int64_t function_5a470();
int64_t function_5b526();
int64_t function_72496();
int64_t function_726d4();
int64_t function_7270e();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x473f6 - 0x474e5
int64_t function_473f6(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xffffffff; // 0x473fd
    uint32_t v2 = *(int32_t *)(function_4f3da(a2, 0, 0) + 28); // 0x47413
    int64_t v3 = function_4f754(v1); // 0x4741a
    int64_t v4 = function_4f754((int64_t)v2); // 0x47425
    if ((char)v3 == 0) {
        int64_t * v5 = (int64_t *)(a2 + 64); // 0x4744a
        uint64_t v6 = *v5; // 0x4744a
        if (v6 == 0) {
            goto lab_0x474b2;
        } else {
            int64_t v7 = a1 + 40; // 0x47453
            if (v6 < *(int64_t *)(function_4ae3c(v7) + 32)) {
                // 0x474aa
                *v5 = 0;
                goto lab_0x474b2;
            } else {
                int64_t v8 = function_24e1e() - *(int64_t *)(a2 + 72); // 0x4746a
                int64_t v9 = (0x8000000000000000 * (int128_t)(v8 >> 63) | (int128_t)v8) / 0x3b9aca00; // 0x47478
                if (*(int64_t *)(function_4ae3c(v7) + 40) > (v9 > 0 ? v9 : 0)) {
                    // 0x474aa
                    *v5 = 0;
                    goto lab_0x474b2;
                } else {
                    // 0x47495
                    *v5 = *v5 + 1;
                    function_4e4f0(a1 + (int64_t)&g4, 0, 0);
                    goto lab_0x474b2;
                }
            }
        }
    } else {
        int64_t * v10 = (int64_t *)(a2 + 64);
        if ((char)v4 == 0) {
            // 0x47433
            *v10 = 1;
            *(int64_t *)(a2 + 72) = function_24e1e();
        }
        // 0x47444
        *v10 = *v10 + 1;
        goto lab_0x474b2;
    }
  lab_0x474b2:;
    int64_t result = function_4f73c(a2, v1); // 0x474b8
    if ((char)result == 0) {
        // 0x474dc
        return result;
    }
    // 0x474c1
    return function_4e554(a1 + (int64_t)&g4);
}

// Address range: 0x5a470 - 0x5a55f
int64_t function_5a470(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x5a48a
    *(int64_t *)a1 = (int64_t)&g12;
    int64_t v2 = (int64_t)&g12; // bp-88, 0x5a4c2
    int64_t v3; // bp-72, 0x5a470
    int64_t v4; // bp-80, 0x5a470
    function_250b0(&v4, a3, &v3);
    if (g8 != 0) {
        goto lab_0x5a4f8;
    } else {
        // 0x5a4d5
        if ((char)function_5b526(a2, &v4, a1, &v2) != 0) {
            goto lab_0x5a51b;
        } else {
            // 0x5a4ea
            function_5a45a(a2, &v4, &v2);
            goto lab_0x5a4f8;
        }
    }
  lab_0x5a4f8:;
    // 0x5a4f8
    int64_t v5; // bp-89, 0x5a470
    function_250b0(&v3, a4, &v5);
    function_256ba(a1, &v3);
    function_2508e(&v3);
    goto lab_0x5a51b;
  lab_0x5a51b:
    // 0x5a51b
    function_48f087(a1, a5);
    function_2508e(&v4);
    function_2508e(&v2);
    int64_t result = a1; // 0x5a549
    if (v1 != __readfsqword(40)) {
        // 0x5a54b
        __stack_chk_fail();
        result = (int64_t)&g18;
    }
    // 0x5a550
    return result;
}

// Address range: 0x72496 - 0x72587
int64_t function_72496(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 160; // 0x724ad
    int64_t v2 = a1 + 168; // 0x724b4
    int64_t v3 = __readfsqword(40); // 0x724c9
    int64_t v4; // bp-80, 0x72496
    function_729b6(&v4, a1 + 360);
    int64_t v5; // bp-72, 0x72496
    function_729b6(&v5, a1 + 208);
    if (a2 != 0) {
        int64_t v6 = *(int64_t *)(a1 + 184); // 0x7252a
        if (v2 != v6) {
            int64_t v7; // 0x72496
            if (*(int64_t *)(v6 + 104) != a2) {
                // 0x72549
                v7 = function_4f0ad0(v6);
            } else {
                // 0x7253c
                v7 = function_7270e(v1, v6);
            }
            // 0x72531
            while (v2 != v7) {
                int64_t v8 = v7;
                if (*(int64_t *)(v8 + 104) != a2) {
                    // 0x72549
                    v7 = function_4f0ad0(v8);
                } else {
                    // 0x7253c
                    v7 = function_7270e(v1, v8);
                }
            }
        }
    } else {
        int64_t * v9 = (int64_t *)(a1 + 176); // 0x724f5
        function_726d4(v1, *v9);
        *v9 = 0;
        *(int64_t *)(a1 + 184) = v2;
        *(int64_t *)(a1 + 192) = v2;
        *(int64_t *)(a1 + 200) = 0;
    }
    // 0x72553
    function_729ce(&v5);
    function_729ce(&v4);
    int64_t result = 0; // 0x72571
    if (v3 != __readfsqword(40)) {
        // 0x72573
        __stack_chk_fail();
        result = (int64_t)&g18;
    }
    // 0x72578
    return result;
}

// Address range: 0x49d220 - 0x49d30c
int64_t function_49d220(int64_t a1) {
    // 0x49d220
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g13, "=> read record");
    int64_t v1 = function_49baf0(a1); // 0x49d253
    while ((int32_t)v1 == 0) {
        int64_t result2 = function_49b370(a1); // 0x49d261
        int32_t v2 = result2;
        if (v2 != -0x6680) {
            int64_t result = result2 & 0xffffffff; // 0x49d26f
            if (v2 != 0) {
                // 0x49d2e0
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g15, "mbedtls_ssl_handle_message_type", result);
                return result;
            }
            // 0x49d273
            if (*(int32_t *)(a1 + 216) == 22) {
                // 0x49d310
                return result2;
            }
            // 0x49d280
            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g16, "<= read record");
            return result;
        }
        v1 = function_49baf0(a1);
    }
    int64_t result3 = v1 & 0xffffffff; // 0x49d25a
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g14, "mbedtls_ssl_read_record_layer", result3);
    return result3;
}

// Address range: 0x4ee130 - 0x4ee21f
int64_t ZydisDecoderDecodeFull(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4ee130
    __readfsqword(40);
    if (a1 == 0 || a2 == 0 || a4 == 0 || a5 == 0) {
        // 0x4ee1f8
        __readfsqword(40);
        return 0x80100004;
    }
    // 0x4ee178
    if (a3 == 0) {
        // 0x4ee1f8
        __readfsqword(40);
        return 0x80200000;
    }
    // 0x4ee182
    if (*(char *)(a1 + 8) % 2 != 0) {
        // 0x4ee1f8
        __readfsqword(40);
        return 0x8010000d;
    }
    int64_t result = function_1ff80(); // 0x4ee19f
    if ((int32_t)result < 0) {
        // 0x4ee1f8
        __readfsqword(40);
        return result;
    }
    char * v1 = (char *)(a4 + 24); // 0x4ee1a8
    int64_t v2; // bp-88, 0x4ee130
    int64_t v3 = function_20850(a1, &v2, a4, a5, *v1); // 0x4ee1b9
    int64_t result2 = v3; // 0x4ee1c0
    if ((int32_t)v3 >= 0) {
        unsigned char v4 = *v1; // 0x4ee1c2
        memset((int64_t *)(80 * (int64_t)v4 + a5), 0, 80 * (10 - (int32_t)v4));
        result2 = 0x100000;
    }
    // 0x4ee1f8
    __readfsqword(40);
    return result2;
}

// Address range: 0x4eec10 - 0x4eecff
int64_t __cxa_guard_acquire(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4eec1a
    int32_t v2; // 0x4eec10
    int64_t v3; // 0x4eec10
    int64_t v4; // 0x4eec10
    int64_t v5; // 0x4eec10
    int64_t v6; // 0x4eec10
    int64_t v7; // 0x4eec10
    int64_t v8; // 0x4eec10
    int64_t v9; // 0x4eec10
    int64_t v10; // 0x4eec10
    if ((char)a1 != 0) {
        goto lab_0x4eec60;
    } else {
        // 0x4eec31
        v8 = a1;
        v7 = 256;
        v3 = 0;
        v4 = 1;
        if (g7 == 0) {
            char * v11 = (char *)(a1 + 1); // 0x4eec85
            if (*v11 != 0) {
                int64_t v12 = function_20210(8); // 0x4eecce
                function_5652c0(v12);
                int64_t v13; // 0x4eec10
                v2 = v13;
                v6 = function_203b0(v12, 0x847598, 0x565280);
                v10 = v12;
                goto lab_0x4eecf4;
            } else {
                // 0x4eec8b
                *v11 = 1;
                v5 = 1;
                v9 = a1;
                goto lab_0x4eec62;
            }
        } else {
            goto lab_0x4eec4c;
        }
    }
  lab_0x4eec60:
    // 0x4eec60
    v5 = 0;
    int64_t v14; // 0x4eec10
    v9 = v14;
    int64_t v15; // 0x4eec10
    int64_t v16 = v15; // 0x4eec60
    int64_t v17; // 0x4eec10
    int64_t v18 = v17; // 0x4eec60
    int64_t v19; // 0x4eec10
    int64_t v20 = v19; // 0x4eec60
    goto lab_0x4eec62;
  lab_0x4eec62:;
    int64_t result = v5; // 0x4eec70
    if (v1 == __readfsqword(40)) {
        // 0x4eec72
        return result;
    }
    // 0x4eec96
    __stack_chk_fail();
    int32_t v21 = (int64_t)&g18; // 0x4eec96
    int64_t v22 = v9; // 0x4eec96
    int64_t v23 = v16; // 0x4eec96
    int64_t v24 = v18; // 0x4eec96
    int64_t v25 = v20; // 0x4eec96
    goto lab_0x4eec9b;
  lab_0x4eec4c:;
    int32_t * v38 = (int32_t *)v8; // 0x4eec4f
    int32_t v39 = *v38; // 0x4eec4f
    *v38 = v39 == (int32_t)v3 ? (int32_t)v7 : v39;
    v5 = 1;
    v9 = v8;
    v16 = v7;
    v18 = v3;
    v20 = v4;
    v21 = v39;
    v22 = v8;
    v23 = v7;
    v24 = v3;
    v25 = v4;
    if (v39 != (int32_t)v3) {
        goto lab_0x4eec9b;
    } else {
        goto lab_0x4eec62;
    }
  lab_0x4eec9b:;
    int64_t v26 = v25;
    int64_t v27 = v24;
    int64_t v28 = v23;
    int64_t v29 = v22;
    int32_t v30 = v21;
    int32_t v31 = v26;
    v14 = v29;
    v15 = v28;
    v17 = v27;
    v19 = v26;
    int64_t v32; // 0x4eec10
    int64_t v33; // 0x4eec10
    int64_t v34; // 0x4eec10
    if (v30 == v31) {
        goto lab_0x4eec60;
    } else {
        int32_t v35 = v28; // 0x4eeca2
        if (v30 != v35) {
            goto lab_0x4eecb3;
        } else {
            int32_t * v36 = (int32_t *)v29; // 0x4eecad
            uint32_t v37 = *v36; // 0x4eecad
            *v36 = v37 == v35 ? (int32_t)&g1 : v37;
            v2 = v31;
            v6 = v37;
            v10 = v29;
            v34 = v28;
            v32 = v27;
            v33 = v26;
            if (v37 != v35) {
                goto lab_0x4eecf4;
            } else {
                goto lab_0x4eecb3;
            }
        }
    }
  lab_0x4eecf4:
    // 0x4eecf4
    v14 = v10;
    v15 = v34;
    v17 = v32;
    v19 = v33;
    result = v6;
    if (v2 != (int32_t)v6) {
        // 0x4eec72
        return result;
    }
    goto lab_0x4eec60;
  lab_0x4eecb3:
    // 0x4eecb3
    syscall(SYS_getegid32);
    v8 = v29;
    v7 = v28;
    v3 = v27;
    v4 = v26;
    goto lab_0x4eec4c;
}

// Address range: 0x4ef2e0 - 0x4ef3cf
int64_t function_4ef2e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0; // 0x4ef2f8
    if (a1 != 0) {
        // 0x4ef2fa
        v1 = _Unwind_GetRegionStart();
    }
    // 0x4ef2ff
    *(int64_t *)a3 = v1;
    int64_t v2; // 0x4ef2e0
    unsigned char v3 = *(char *)&v2; // 0x4ef302
    int64_t v4 = a2 + 1; // 0x4ef307
    if (v3 != -1) {
        int64_t v5 = v3; // 0x4ef302
        int64_t v6 = function_4ef000(v5, function_4ef280(v5, a1), v4, a3 + 8); // 0x4ef3ac
        char result = *(char *)v6; // 0x4ef3b4
        v2 = v6 + 1;
        *(char *)(a3 + 40) = result;
        if (result == -1) {
            // 0x4ef3c7
            *(int64_t *)(a3 + 24) = 0;
            return result;
        }
    } else {
        // 0x4ef312
        *(int64_t *)(a3 + 8) = v1;
        char v7 = *(char *)v4; // 0x4ef316
        v2 = a2 + 2;
        *(char *)(a3 + 40) = v7;
        if (v7 == -1) {
            // 0x4ef3c7
            *(int64_t *)(a3 + 24) = 0;
            return -1;
        }
    }
    int64_t v8 = 0; // 0x4ef32d
    int64_t v9 = 0; // 0x4ef32d
    int64_t v10 = v2; // 0x4ef330
    int64_t v11 = v10 + 1; // 0x4ef330
    v2 = v11;
    unsigned char v12 = *(char *)v10; // 0x4ef334
    v9 |= (int64_t)(v12 % 128) << v8 % 64;
    v8 = v8 + 7 & 0xffffffff;
    while (v12 < 0) {
        // 0x4ef330
        v10 = v11;
        v11 = v10 + 1;
        v2 = v11;
        v12 = *(char *)v10;
        v9 |= (int64_t)(v12 % 128) << v8 % 64;
        v8 = v8 + 7 & 0xffffffff;
    }
    // 0x4ef34b
    *(int64_t *)(a3 + 24) = v9 + v11;
    *(char *)(a3 + 41) = *(char *)v2;
    int64_t v13 = 0; // 0x4ef35d
    int64_t v14 = 0; // 0x4ef35d
    int64_t v15 = v2 + 1;
    int64_t result2 = v15 + 1; // 0x4ef360
    unsigned char v16 = *(char *)v15; // 0x4ef364
    v2 = v16;
    v14 |= (int64_t)(v16 % 128) << v13 % 64;
    v13 = v13 + 7 & 0xffffffff;
    while (v16 < 0) {
        // 0x4ef360
        v15 = result2;
        result2 = v15 + 1;
        v16 = *(char *)v15;
        v2 = v16;
        v14 |= (int64_t)(v16 % 128) << v13 % 64;
        v13 = v13 + 7 & 0xffffffff;
    }
    // 0x4ef37c
    *(int64_t *)(a3 + 32) = v14 + result2;
    return result2;
}

// Address range: 0x4f1920 - 0x4f1a11
int64_t function_4f1920(int64_t a1) {
    // 0x4f1920
    __readfsqword(40);
    if (ioctl((int32_t)function_4f1700(a1), (int32_t)&g2) == 0) {
        // 0x4f196c
        __readfsqword(40);
        return 0;
    }
    int64_t fds = 0x100000000 * function_4f1700(a1) >> 32; // bp-192, 0x4f199d
    if (poll((struct pollfd *)&fds, 1, 0) < 1) {
        // 0x4f196c
        __readfsqword(40);
        return 0;
    }
    // 0x4f19bb
    int64_t v1; // bp-184, 0x4f1920
    int32_t v2 = __fxstat64(1, (int32_t)function_4f1700(a1), (struct stat64 *)&v1); // 0x4f19cf
    int32_t v3; // 0x4f1920
    if ((v3 & (int32_t)&g17) == (int32_t)&g5 == v2 == 0) {
        // 0x4f19f0
        int64_t v4; // 0x4f1920
        return v4 - (int64_t)lseek64((int32_t)function_4f1700(a1), 0, 1);
    }
    // 0x4f196c
    __readfsqword(40);
    return 0;
}

// Address range: 0x50b1c0 - 0x50b2b0
int64_t function_50b1c0(int64_t a1) {
    uint64_t v1 = function_566390(&g9); // 0x50b1cb
    int64_t v2 = (int64_t)&g9; // 0x50b1db
    int64_t v3; // 0x50b1c0
    if (*(int64_t *)((int64_t)&g9 + 16) > v1) {
        int64_t v4 = *(int64_t *)((int64_t)&g9 + 8); // 0x50b1d7
        int64_t v5 = *(int64_t *)(v4 + 8 * v1); // 0x50b1dd
        v2 = 0;
        if (v5 == 0) {
            goto lab_0x50b202;
        } else {
            int64_t result = function_20730(v5, 0x847658, 0x843690, 0); // 0x50b1f6
            v3 = v5;
            if (result != 0) {
                // 0x50b200
                return result;
            }
            goto lab_0x50b207;
        }
    } else {
        goto lab_0x50b202;
    }
  lab_0x50b202:
    // 0x50b202
    function_5423f0();
    v3 = v2;
    goto lab_0x50b207;
  lab_0x50b207:
    // 0x50b207
    function_20110();
    uint64_t v6 = function_566390(&g10); // 0x50b21b
    int64_t v7 = *(int64_t *)v3; // 0x50b220
    int64_t v8 = (int64_t)&g10; // 0x50b22b
    int64_t v9; // 0x50b1c0
    if (*(int64_t *)(v7 + 16) > v6) {
        int64_t v10 = *(int64_t *)(*(int64_t *)(v7 + 8) + 8 * v6); // 0x50b22d
        v8 = 0;
        if (v10 == 0) {
            goto lab_0x50b252;
        } else {
            int64_t result2 = function_20730(v10, (int64_t)&g6, 0x8441a8, 0); // 0x50b246
            v9 = v10;
            if (result2 != 0) {
                // 0x50b200
                return result2;
            }
            goto lab_0x50b257;
        }
    } else {
        goto lab_0x50b252;
    }
  lab_0x50b252:
    // 0x50b252
    function_5423f0();
    v9 = v8;
    goto lab_0x50b257;
  lab_0x50b257:
    // 0x50b257
    function_20110();
    uint64_t v11 = function_566390(&g11); // 0x50b26b
    int64_t v12 = *(int64_t *)v9; // 0x50b270
    if (*(int64_t *)(v12 + 16) <= v11) {
        // 0x50b2a2
        function_5423f0();
        // 0x50b2a7
        return function_20110();
    }
    int64_t v13 = *(int64_t *)(*(int64_t *)(v12 + 8) + 8 * v11); // 0x50b27d
    if (v13 == 0) {
        // 0x50b2a2
        function_5423f0();
        // 0x50b2a7
        return function_20110();
    }
    int64_t result3 = function_20730(v13, (int64_t)&g6, 0x844210, 0); // 0x50b296
    if (result3 == 0) {
        // 0x50b2a7
        return function_20110();
    }
    // 0x50b200
    return result3;
}

// Address range: 0x5142c0 - 0x5143ab
// From class:    std::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_5142c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x5142c0
    __readfsqword(40);
    int64_t result; // 0x5142c0
    if ((char)a6 == 0) {
        // 0x514390
        result = function_5137b0();
    } else {
        // 0x51430c
        result = function_512ca0();
    }
    int64_t v1 = function_565f30(); // bp-72, 0x51434e
    function_5678f0((int64_t)&g12, a9, a8, &v1);
    __readfsqword(40);
    return result;
}

// Address range: 0x529720 - 0x52980e
// From class:    std::__cxx11::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_529720(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x529720
    __readfsqword(40);
    char v1 = 0; // bp-88, 0x52975e
    if ((char)a6 == 0) {
        // 0x529800
        return function_5282e0();
    }
    int64_t result = function_526ea0(); // 0x529779
    int64_t v2 = function_565f30(); // bp-112, 0x5297b7
    function_5678f0((int64_t)&v1, a9, a8, &v2);
    __readfsqword(40);
    return result;
}

// Address range: 0x53c390 - 0x53c47e
// From class:    std::__cxx11::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_53c390(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x53c390
    __readfsqword(40);
    char v1 = 0; // bp-88, 0x53c3ce
    if ((char)a6 == 0) {
        // 0x53c470
        return function_53af80();
    }
    int64_t result = function_539b70(); // 0x53c3e9
    int64_t v2 = function_565f30(); // bp-112, 0x53c427
    function_5678f0((int64_t)&v1, a9, a8, &v2);
    __readfsqword(40);
    return result;
}

// Address range: 0x54a3d0 - 0x54a4ba
int64_t function_54a3d0(int64_t wstr2, uint64_t a2) {
    int64_t * v1 = (int64_t *)(wstr2 + 8);
    uint64_t v2 = *v1; // 0x54a3d8
    uint64_t v3 = v2 <= a2 ? a2 : v2;
    int64_t result2 = v3;
    int64_t v4 = wstr2 + 16; // 0x54a3f1
    int64_t * v5 = (int64_t *)v4; // 0x54a3ff
    uint64_t v6 = *v5; // 0x54a3ff
    if (v6 == v3) {
        // 0x54a43d
        return wstr2;
    }
    int32_t v7 = wstr2;
    if (v3 <= 3 && v6 >= v3) {
        if (v2 == 0) {
            // 0x54a4b0
            *(int32_t *)v4 = v7;
        } else {
            // 0x54a429
            if (v2 != -1) {
                // 0x54a43d
                return wstr2;
            }
        }
        int64_t result = function_4eeb50(wstr2); // 0x54a435
        *(int64_t *)wstr2 = v4;
        // 0x54a43d
        return result;
    }
    int64_t wstr = function_549a50(wstr2, &result2, v6, v2); // 0x54a458
    int64_t v8 = *v1; // 0x54a460
    int64_t v9; // 0x54a3d0
    if (v8 == 0) {
        // 0x54a476
        *(int32_t *)wstr = v7;
        v9 = wstr2;
    } else {
        int64_t n = v8 + 1; // 0x54a467
        v9 = wstr2;
        if (n != 0) {
            // 0x54a476
            wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
            v9 = wstr;
            if (v4 == wstr) {
                // 0x54a480
                *(int64_t *)wstr2 = wstr;
                *v5 = result2;
                return result2;
            }
        }
    }
    // 0x54a47b
    function_4eeb50(v9);
    // 0x54a480
    *(int64_t *)wstr2 = wstr;
    *v5 = result2;
    return result2;
}

// Address range: 0x55e9b0 - 0x55ea9b
// From class:    std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_55e9b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x55e9b0
    __readfsqword(40);
    int64_t result; // 0x55e9b0
    if ((char)a6 == 0) {
        // 0x55ea80
        result = function_55df10();
    } else {
        // 0x55e9fc
        result = function_55d470();
    }
    int64_t v1 = function_565f30(); // bp-72, 0x55ea3e
    function_5678f0((int64_t)&g12, a9, a8, &v1);
    __readfsqword(40);
    return result;
}

// Address range: 0x569140 - 0x569231
int64_t function_569140(int64_t result, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x56914e
    uint64_t v2 = *v1; // 0x56914e
    int64_t * v3 = (int64_t *)(result + 24); // 0x569155
    char * v4 = (char *)a3; // 0x569159
    *v4 = 1;
    if (*v3 <= v2) {
        // 0x5691f6
        return result;
    }
    int64_t * v5 = (int64_t *)(a2 + 40);
    int64_t v6 = (int64_t)*(char *)v2; // 0x56916c
    int64_t v7 = *v3; // 0x56916c
    int64_t v8 = v2; // 0x56916c
    int64_t v9 = result; // 0x56916c
    int64_t v10 = 0; // 0x56916c
    int64_t v11; // 0x569140
    int64_t v12; // 0x569140
    int64_t result2; // 0x569140
    int64_t v13; // 0x569140
    int64_t v14; // 0x569140
    int64_t v15; // 0x569140
    int64_t result3; // 0x569181
    while (true) {
      lab_0x5691a0:;
        int64_t v16 = v10;
        int64_t v17 = v8;
        int64_t v18 = v7 - v17; // 0x5691a0
        if (v18 > 1) {
            int64_t v19 = *v1 + v17; // 0x56917d
            *v1 = v19;
            result3 = v16 + v17;
            v11 = v19;
            v14 = a2;
            v12 = result3;
            if (v18 > v17) {
                // break -> 0x5691f2
                break;
            }
            goto lab_0x569189;
        } else {
            uint64_t v20 = *v5; // 0x5691a9
            int64_t v21 = a2; // 0x5691b3
            if (v20 < *(int64_t *)(a2 + 48)) {
                // 0x5691b5
                *(char *)v20 = (char)v6;
                *v5 = *v5 + 1;
                v21 = v9;
            }
            int64_t v22 = v21;
            uint64_t v23 = *v1; // 0x5691bd
            uint64_t v24 = *v3; // 0x5691c1
            int64_t v25 = v16 + 1; // 0x5691c5
            int64_t v26; // 0x569140
            int64_t v27; // 0x569140
            if (v23 >= v24) {
                // 0x569208
                v26 = v23;
                v27 = result;
                result2 = v25;
                if ((int32_t)v22 == -1) {
                    // 0x5691f6
                    return result2;
                }
            } else {
                int64_t v28 = v23 + 1; // 0x5691ce
                *v1 = v28;
                v26 = v28;
                v27 = v22;
            }
            int64_t v29 = v27;
            int64_t v30 = v26;
            v11 = v30;
            v14 = v29;
            v12 = v25;
            if (v24 > v30) {
                // 0x5691db
                v8 = v30;
                v13 = (int64_t)*(char *)v30;
                v7 = v24;
                v15 = v29;
                v10 = v25;
                goto lab_0x56919c;
            } else {
                goto lab_0x569189;
            }
        }
    }
    // 0x5691f2
    *v4 = 0;
    // 0x5691f6
    return result3;
  lab_0x569189:
    // 0x569189
    result2 = v12;
    if ((int32_t)v14 == -1) {
        // 0x5691f6
        return result2;
    }
    // 0x569198
    v8 = v11;
    v13 = v14;
    v7 = *v3;
    v15 = result;
    v10 = v12;
    goto lab_0x56919c;
  lab_0x56919c:
    // 0x56919c
    v6 = v13;
    v9 = v15;
    goto lab_0x5691a0;
}

// Address range: 0x573010 - 0x573103
int64_t function_573010(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x573010
    int64_t v1; // 0x573010
    int64_t v2 = v1;
    int64_t v3 = __readfsqword(40); // 0x57303f
    int64_t v4; // bp-120, 0x573010
    int64_t v5 = (int64_t)&v4; // 0x57305e
    int64_t v6 = v5; // bp-136, 0x57305e
    function_570890(&v6, a6, a7 + a6, a4, a5, a6);
    int64_t * v7 = (int64_t *)a2; // 0x5730a2
    *v7 = a2 + 16;
    function_570890(v7, v2, v2 + v1, a4 & 0xffffffff, a5 & 0xffffffff, (int64_t)&v6);
    *(int64_t *)(a2 + 32) = (int64_t)&g3;
    int64_t v8; // bp-88, 0x573010
    if (v2 != (int64_t)&v8) {
        // 0x5730c7
        function_4eeb50(v2);
    }
    // 0x5730cc
    if (v6 != v5) {
        // 0x5730da
        function_4eeb50(v6);
    }
    int64_t result = __readfsqword(40) ^ v3; // 0x5730e4
    if (result == 0) {
        // 0x5730ef
        return result;
    }
    // 0x5730fe
    __stack_chk_fail();
    return (int64_t)&g18;
}
