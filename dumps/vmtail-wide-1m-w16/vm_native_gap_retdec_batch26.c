/*
 * Targeted RetDec C for native executable gap queue batch 26.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x593ce-0x594b8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49ebd0-0x49ecb9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50d0c0-0x50d1a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50d7e0-0x50d8c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x67df6-0x67ede rank=- name=- kind=- bytes=- uncovered=-
 *   0x48f88a-0x48f972 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49a730-0x49a818 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0c90-0x4b0d77 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43215-0x432fb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ddee-0x4ded4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fd3f0-0x4fd4d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6190c-0x619f1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bcac0-0x4bcba5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53fbe0-0x53fcc5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50906-0x509ea rank=- name=- kind=- bytes=- uncovered=-
 *   0x631a2-0x63286 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g7;
extern int g8;
extern int g9;
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
int wctob(int32_t wc);
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

int64_t function_1ff50();
int64_t function_20550();
int64_t function_21a2d();
int64_t function_221a8();
int64_t function_25018();
int64_t function_2515a();
int64_t function_29c3a();
int64_t function_35fcc();
int64_t function_360a0();
int64_t function_36b3c();
int64_t function_36ff8();
int64_t function_43215();
int64_t function_449a8();
int64_t function_455ee();
int64_t function_48bde0();
int64_t function_48d222();
int64_t function_48d2aa();
int64_t function_48d385();
int64_t function_48d8a3();
int64_t function_48f839();
int64_t function_48f852();
int64_t function_48f86e();
int64_t function_48f88a();
int64_t function_498d40();
int64_t function_49a730();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49eba0();
int64_t function_49ebd0();
int64_t function_4b08f0();
int64_t function_4b0c90();
int64_t function_4ba580();
int64_t function_4ba6b0();
int64_t function_4ba880();
int64_t function_4bc9a0();
int64_t function_4bcac0();
int64_t function_4d906();
int64_t function_4ddee();
int64_t function_4efd30();
int64_t function_4f15a0();
int64_t function_4f1920();
int64_t function_4fd3f0();
int64_t function_4fd470();
int64_t function_50610();
int64_t function_50906();
int64_t function_50972();
int64_t function_50996();
int64_t function_50b7d0();
int64_t function_50bde0();
int64_t function_50d0c0();
int64_t function_50d7e0();
int64_t function_52770();
int64_t function_53fbe0();
int64_t function_5423f0();
int64_t function_542590();
int64_t function_566390();
int64_t function_566890();
int64_t function_57ebb();
int64_t function_593ce();
int64_t function_599ba();
int64_t function_6190c();
int64_t function_61bf0();
int64_t function_61bfc();
int64_t function_63032();
int64_t function_631a2();
int64_t function_67ce4();
int64_t function_67df6();
int64_t function_71c60();
int64_t function_72b18();

// Address range: 0x43215 - 0x432fb
int64_t function_43215(int64_t a1) {
    // 0x43215
    if (a1 == 0) {
        // 0x432f5
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x43224
    int64_t v2 = *v1; // 0x43224
    if (v2 == 0 || *(int64_t *)(a1 + 32) == 0 || *(int64_t *)(a1 + 40) == 0) {
        // 0x432f5
        return 0;
    }
    int32_t * v3 = (int32_t *)(a1 + 20); // 0x43249
    if ((*v3 || 1) != 3) {
        // 0x432f5
        return 0;
    }
    // 0x4325a
    *v1 = 0;
    __asm_rep_stosd_memset((char *)v2, 0, 8);
    __asm_rep_stosd_memset((char *)(v2 + 32), 0, 8);
    __asm_rep_stosd_memset((char *)(v2 + 64), 0, 8);
    if (*(int64_t *)(a1 + 72) != 0x3dd61) {
        // 0x432df
        *v3 = 0;
        // 0x432f5
        return 1;
    }
    int64_t * v4 = (int64_t *)(v2 + 104); // 0x432c4
    if (*v4 != 0) {
        // 0x432d5
        *v4 = 0;
    }
    // 0x432df
    *v3 = 0;
    // 0x432f5
    return 1;
}

// Address range: 0x4ddee - 0x4ded4
int64_t function_4ddee(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4ddf6
    int64_t v2 = a1 + 64; // 0x4de06
    int64_t * v3 = (int64_t *)v2; // 0x4de06
    if (*v3 == 0) {
        int64_t v4 = 0; // bp-40, 0x4de22
        int64_t v5 = function_4efd30(416); // 0x4de2b
        function_71c60(v5);
        int64_t v6 = function_4efd30(32); // 0x4de48
        *(int64_t *)(v6 + 24) = v5;
        *(int64_t *)(v6 + 8) = 0x100000001;
        int64_t v7 = v5; // bp-48, 0x4de66
        *(int64_t *)v6 = (int64_t)&g2;
        int64_t v8 = v4; // 0x4de71
        v4 = v6;
        int64_t v9 = v8; // bp-56, 0x4de80
        function_35fcc(&v9);
        function_4d906(v2, &v7);
        function_35fcc(&v4);
        if (*v3 != 0) {
            // 0x4dea7
            function_72b18(*v3, 0);
            *(char *)(a1 + 80) = 1;
        }
    }
    int64_t result = 0; // 0x4dec4
    if (v1 != __readfsqword(40)) {
        // 0x4dec6
        __stack_chk_fail();
        result = (int64_t)&g20;
    }
    // 0x4decb
    return result;
}

// Address range: 0x50906 - 0x50972
int64_t function_50906(int64_t a1, int64_t a2, int64_t a3) {
    // 0x50906
    if (*(char *)&g8 == 0) {
        // 0x50914
        if ((int32_t)function_20550(&g8) != 0) {
            // 0x50924
            g9 = function_48bde0(0);
            function_1ff50(&g8);
        }
    }
    // 0x5093d
    if (g9 != 0) {
        // 0x50949
        return function_50610(a1);
    }
    int64_t v1 = function_57ebb(a1); // 0x5094f
    return function_455ee(v1, 4 * function_48d385(v1), 0);
}

// Address range: 0x50972 - 0x50996
int64_t function_50972(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 208); // 0x50976
    int64_t result = 0; // 0x50984
    if (*(int64_t *)(v1 - 24) != 0) {
        int64_t v2 = function_48d8a3(a2, v1); // 0x50989
        result = v2 & -256 | (int64_t)(v2 == a2);
    }
    // 0x50994
    return result;
}

// Address range: 0x50996 - 0x509b1
int64_t function_50996(int64_t a1, int64_t a2) {
    int64_t v1 = function_48d8a3(a2, *(int64_t *)(a1 + 200)); // 0x509a4
    return v1 & -256 | (int64_t)(v1 == a2);
}

// Address range: 0x593ce - 0x594b8
int64_t function_593ce(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x593e3
    int64_t * v2 = (int64_t *)(a3 - 24); // 0x593fd
    int64_t v3 = (int64_t)&g15; // bp-56, 0x59406
    if (*v2 != 0) {
        int64_t v4 = *(int64_t *)(a2 - 24); // 0x5941b
        if (v4 == 0) {
            // 0x5940c
            *(int64_t *)a1 = (int64_t)&g15;
            goto lab_0x5948b;
        } else {
            // 0x59424
            if (function_599ba(a3, a2, 0, v4) == 0) {
                // 0x59440
                function_52770(&v3, a3);
                uint64_t v5 = g14; // 0x59452
                uint64_t v6 = *v2; // 0x59456
                int64_t v7 = v6 > v5 ? v5 : v6; // 0x5945a
                function_36ff8(&v3, function_36b3c(&v3, 0, "basic_string::erase"), v7, 0);
                int64_t v8 = v3; // 0x59480
                v3 = (int64_t)&g15;
                *(int64_t *)a1 = v8;
            } else {
                // 0x59436
                function_360a0(a1, a3);
            }
            goto lab_0x5948b;
        }
    } else {
        // 0x5940c
        *(int64_t *)a1 = (int64_t)&g15;
        goto lab_0x5948b;
    }
  lab_0x5948b:
    // 0x5948b
    function_29c3a(&v3);
    int64_t result = a1; // 0x594a4
    if (v1 != __readfsqword(40)) {
        // 0x594a6
        __stack_chk_fail();
        result = (int64_t)&g20;
    }
    // 0x594ab
    return result;
}

// Address range: 0x6190c - 0x619f1
int64_t function_6190c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x61912
    int64_t v2 = 2; // 0x61925
    if (a2 != 0) {
        uint32_t v3 = (int32_t)a3; // 0x6192b
        v2 = 2;
        if (v3 >= 22 && a4 != 0 && a5 != 0) {
            uint64_t v4 = (a3 & 0xffffffff) - 22; // 0x61956
            v2 = 2;
            if (v4 <= (a5 & 0xffffffff)) {
                // 0x6195f
                v2 = 6;
                if (*(char *)(a1 + (int64_t)&g16) != 0) {
                    int64_t v5 = v4 + a2; // 0x6196d
                    v2 = 5;
                    if (*(char *)(v5 + 4) < 2) {
                        // 0x6197f
                        v2 = 4;
                        if (*(char *)(v5 + 5) % 2 == 0) {
                            // 0x6198a
                            v2 = 1;
                            if ((char)function_449a8() != 0) {
                                // 0x619c4
                                *(int32_t *)a5 = v3 - 22;
                                v2 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    int64_t result = v2; // 0x619e3
    if (v1 != __readfsqword(40)) {
        // 0x619e5
        __stack_chk_fail();
        result = (int64_t)&g20;
    }
    // 0x619ea
    return result;
}

// Address range: 0x631a2 - 0x63286
int64_t function_631a2(int64_t result, int64_t a2, int64_t a3) {
    uint64_t v1 = a3 - 24; // 0x631a6
    int64_t v2 = result + 32; // 0x631b6
    int64_t v3 = a2 + 24; // 0x631bd
    int64_t * v4 = (int64_t *)result; // 0x631c5
    *v4 = 0;
    int64_t * v5 = (int64_t *)(result + 8); // 0x631cd
    *v5 = 0;
    int64_t * v6 = (int64_t *)(result + 16); // 0x631d5
    *v6 = 0;
    int64_t v7 = a3 + a2; // 0x631dd
    function_63032(v2);
    int64_t v8; // 0x631a2
    if (v1 > *v6 - v2) {
        int64_t v9 = function_61bfc(v1); // 0x631f7
        function_21a2d(v3, v7, v9);
        int64_t v10 = v9 + v1; // 0x63210
        function_61bf0(v3);
        *v4 = v9;
        *v5 = v10;
        *v6 = v10;
    } else {
        uint64_t v11 = *v5 - v2; // 0x63229
        int64_t v12 = v2; // 0x6322f
        int64_t v13 = v3; // 0x6322f
        if (v1 > v11) {
            // 0x63239
            v13 = v11 + v3;
            function_21a2d(v3, v13, v2);
            v12 = *v5;
        }
        // 0x63251
        v8 = v7;
        *v5 = function_21a2d(v13, v7, v12);
    }
    int128_t v14 = __asm_movups(*(int128_t *)&v8); // 0x6325a
    *(int64_t *)(result + 24) = 0;
    *(char *)(result + 56) = 0;
    __asm_movups_133(*(int128_t *)v2, v14);
    *(int64_t *)(result + 48) = *(int64_t *)(a2 + 16);
    return result;
}

// Address range: 0x67df6 - 0x67ede
int64_t function_67df6(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x67e04
    if (*(int32_t *)(a1 + 116) == 1) {
        // 0x67e21
        int64_t v2; // bp-136, 0x67df6
        int64_t v3; // bp-168, 0x67df6
        function_2515a(&v2, &v3);
        function_67ce4(a1, &v2, 1);
        function_25018(&v2);
        function_221a8(&v3);
    }
    int64_t result = 0; // 0x67ecb
    if (v1 != __readfsqword(40)) {
        // 0x67ecd
        __stack_chk_fail();
        result = (int64_t)&g20;
    }
    // 0x67ed2
    return result;
}

// Address range: 0x48f88a - 0x48f972
int64_t function_48f88a(int64_t result, uint64_t a2, uint64_t a3) {
    int64_t v1 = result; // 0x48f8a7
    if (a3 >= 0x1ffffffffffffffd) {
        // 0x48f8a9
        function_542590("basic_string::assign");
        v1 = (int64_t)"basic_string::assign";
    }
    // 0x48f8b5
    if (v1 <= a2) {
        int64_t v2 = v1 - 24; // 0x48f8c8
        if (2 * *(int64_t *)v2 + v1 >= a2) {
            // 0x48f8d5
            if (*(int32_t *)(v1 - 8) < 1) {
                uint64_t v3 = (a2 - v1) / 2; // 0x48f93e
                if (v3 < a3) {
                    if (v3 != 0) {
                        // 0x48f952
                        function_48f852();
                    }
                } else {
                    // 0x48f946
                    function_48f839(v1, a2, a3);
                }
                // 0x48f957
                function_48f86e(v2, a3);
                // 0x48f967
                return result;
            }
        }
    }
    uint64_t v4 = *(int64_t *)(v1 - 16); // 0x48f8c0
    int64_t v5; // 0x48f88a
    if (v4 < a3) {
        goto lab_0x48f8e5;
    } else {
        // 0x48f8de
        v5 = v1;
        if (*(int32_t *)(v1 - 8) < 1) {
            goto lab_0x48f912;
        } else {
            goto lab_0x48f8e5;
        }
    }
  lab_0x48f8e5:;
    int64_t v6 = function_48d222(a3, v4); // 0x48f8ec
    int64_t v7 = a3 - 24; // 0x48f8f8
    if (v7 != (int64_t)g6) {
        // 0x48f905
        function_48d2aa(v7);
    }
    // 0x48f90a
    *(int64_t *)result = v6 + 24;
    v5 = v7;
    goto lab_0x48f912;
  lab_0x48f912:;
    int64_t v8 = v5 - 24; // 0x48f919
    function_48f86e(v8, a3);
    if (a3 != 0) {
        // 0x48f927
        function_48f839(v8, a2, a3);
    }
    // 0x48f967
    return result;
}

// Address range: 0x49a730 - 0x49a815
int64_t function_49a730(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 == 0) {
        // 0x49a7d7
        int64_t result; // 0x49a730
        return result;
    }
    // 0x49a759
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g17, "=> send alert message");
    int64_t * v1 = (int64_t *)(a1 + 328); // 0x49a77d
    *(int32_t *)(a1 + 336) = 21;
    *(int64_t *)(a1 + 344) = 2;
    *(char *)*v1 = (char)a2;
    *(char *)(*v1 + 1) = (char)a3;
    int64_t v2 = function_498d40(a1); // 0x49a7aa
    int64_t result2 = v2 & 0xffffffff; // 0x49a7b1
    if ((int32_t)v2 != 0) {
        // 0x49a7f0
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g18, "mbedtls_ssl_write_record", result2);
    } else {
        // 0x49a7b5
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g19, "<= send alert message");
    }
    // 0x49a7d7
    return result2;
}

// Address range: 0x49ebd0 - 0x49ecb6
int64_t function_49ebd0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if (result == 0 || *(int64_t *)(result + 32) == 0 || (int64_t)g11 < a2) {
        // 0x49ec11
        return result;
    }
    char * v1 = (char *)a5; // 0x49ec70
    int64_t str; // bp-568, 0x49ebd0
    snprintf((char *)&str, (int32_t)&g1, "%s(X)", v1);
    function_49eba0(result, a2 & 0xffffffff, a3, a4 & 0xffffffff, &str, a6);
    int32_t chars_printed = snprintf((char *)&str, (int32_t)&g1, "%s(Y)", v1); // 0x49ec9f
    return chars_printed;
}

// Address range: 0x4b0c90 - 0x4b0d77
int64_t function_4b0c90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    if (a1 == a2) {
        // 0x4b0cc0
        return 0;
    }
    int64_t result = function_4b08f0(a1, *(int64_t *)(a2 + 8)); // 0x4b0cb7
    if ((int32_t)result != 0) {
        // 0x4b0cc0
        return result;
    }
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x4b0cd8
    int64_t result2 = function_4b08f0(a2, *v2); // 0x4b0cdf
    if ((int32_t)result2 != 0) {
        // 0x4b0cc0
        return result2;
    }
    int32_t v3 = a1;
    uint64_t v4 = (-a3 | a3) / 128 % 2; // 0x4b0d00
    int64_t v5 = v4 ^ 1; // 0x4b0d08
    int32_t v6 = v4;
    int32_t v7 = v5;
    *(int32_t *)a1 = v7 * v3 + v6 * (int32_t)a2;
    *(int32_t *)a2 = *(int32_t *)&v1 * v7 + v6 * v3;
    for (int64_t i = 0; i < *v2; i++) {
        int64_t v8 = 8 * i; // 0x4b0d40
        int64_t * v9 = (int64_t *)(v8 + *(int64_t *)(a1 + 16)); // 0x4b0d40
        int64_t v10 = *v9; // 0x4b0d40
        int64_t * v11 = (int64_t *)(v8 + *(int64_t *)(a2 + 16)); // 0x4b0d47
        *v9 = *v11 * v4 + v10 * v5;
        *v11 = *v11 * v5 + v10 * v4;
    }
    // 0x4b0cc0
    return result2;
}

// Address range: 0x4bcac0 - 0x4bcba2
int64_t function_4bcac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4bcac0
    if (*(int64_t *)(a1 + 96) == 0 || *(int64_t *)(a1 + 120) == 0) {
        // 0x4bcb3d
        return 0xffffb180;
    }
    // 0x4bcafb
    int64_t v1; // bp-136, 0x4bcac0
    function_4ba580(&v1);
    int64_t v2 = function_4bc9a0(a1, &v1, a3, a4); // 0x4bcb22
    if ((int32_t)v2 != 0) {
        // 0x4bcb2b
        function_4ba6b0(&v1);
        // 0x4bcb3d
        return v2 & 0xffffffff;
    }
    int64_t v3 = function_4bc9a0(a1, (int64_t *)a2, a5, a6); // 0x4bcb7c
    int64_t result = v3; // 0x4bcb83
    if ((int32_t)v3 == 0) {
        // 0x4bcb85
        result = function_4ba880(a1, a2, &v1, a2);
        if ((int32_t)result == 0) {
            // 0x4bcb3d
            return result;
        }
    }
    // 0x4bcb2b
    function_4ba6b0(&v1);
    // 0x4bcb3d
    return result & 0xffffffff;
}

// Address range: 0x4fd3f0 - 0x4fd470
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_4fd3f0(int64_t a1) {
    // 0x4fd3f0
    if ((*(char *)(a1 + 120) & 8) == 0) {
        // 0x4fd451
        return -1;
    }
    int64_t v1 = a1 + 104; // 0x4fd3fa
    if ((char)function_4f15a0(v1) == 0) {
        // 0x4fd451
        return -1;
    }
    int64_t * v2 = (int64_t *)(a1 + 200); // 0x4fd40d
    int64_t v3 = *v2; // 0x4fd40d
    if (v3 == 0) {
        // 0x4fd469
        return function_5423f0(0);
    }
    int64_t v4 = *(int64_t *)(a1 + 24) - *(int64_t *)(a1 + 16); // 0x4fd418
    int64_t result = v4; // 0x4fd429
    if ((int32_t)*(int64_t *)v3 >= 0) {
        int64_t v5 = function_4f1920(v1); // 0x4fd42e
        int64_t v6 = *(int64_t *)*v2; // 0x4fd43d
        result = v4 + (int64_t)((0x8000000000000000 * (int128_t)(v5 >> 63) | (int128_t)v5) / (int128_t)(0x100000000 * v6 >> 32));
    }
    // 0x4fd451
    return result;
}

// Address range: 0x4fd470 - 0x4fd4d5
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_4fd470(int64_t a1) {
    // 0x4fd470
    int64_t result; // 0x4fd470
    if ((*(char *)(a1 + 120) & 8) == 0) {
        // 0x4fd4d5
        return result;
    }
    int64_t v1 = a1 + 104; // 0x4fd47a
    int64_t result2 = function_4f15a0(v1); // 0x4fd484
    if ((char)result2 == 0) {
        // 0x4fd4d5
        return result2;
    }
    int64_t * v2 = (int64_t *)(a1 + 200); // 0x4fd495
    int64_t v3 = *v2; // 0x4fd495
    if (v3 == 0) {
        // 0x4fd4d5
        return result2;
    }
    int64_t v4 = *(int64_t *)v3; // 0x4fd4a5
    result = v4;
    if ((int32_t)v4 >= 0) {
        int64_t v5 = function_4f1920(v1); // 0x4fd4b2
        int64_t v6 = *(int64_t *)*v2; // 0x4fd4c1
        result = (0x8000000000000000 * (int128_t)(v5 >> 63) | (int128_t)v5) / (int128_t)(0x100000000 * v6 >> 32);
    }
    // 0x4fd4d5
    return result;
}

// Address range: 0x50d0c0 - 0x50d1a8
// From class:    std::__moneypunct_cache<wchar_t, true>
// Type:          constructor
int64_t function_50d0c0(int64_t a1, int64_t a2) {
    int64_t v1 = function_566390(&g12); // 0x50d0d4
    int64_t * v2 = (int64_t *)(*(int64_t *)(a2 + 24) + 8 * v1); // 0x50d0e8
    int64_t result = *v2; // 0x50d0e8
    if (result != 0) {
        // 0x50d0f1
        return result;
    }
    int64_t v3 = function_4efd30(160); // 0x50d105
    *(int32_t *)(v3 + 8) = 0;
    *(int64_t *)(v3 + 16) = 0;
    *(int64_t *)(v3 + 24) = 0;
    *(char *)(v3 + 32) = 0;
    *(int64_t *)(v3 + 36) = 0;
    *(int64_t *)(v3 + 48) = 0;
    *(int64_t *)(v3 + 56) = 0;
    *(int64_t *)v3 = (int64_t)&g3;
    *(int64_t *)(v3 + 64) = 0;
    *(int64_t *)(v3 + 72) = 0;
    *(int64_t *)(v3 + 80) = 0;
    *(int64_t *)(v3 + 88) = 0;
    *(int64_t *)(v3 + 96) = 0;
    *(int32_t *)(v3 + 104) = 0;
    *(char *)(v3 + 152) = 0;
    function_50b7d0(v3, a2);
    function_566890(a2, v3, v1);
    return *v2;
}

// Address range: 0x50d7e0 - 0x50d8c8
// From class:    std::__moneypunct_cache<wchar_t, false>
// Type:          constructor
int64_t function_50d7e0(int64_t a1, int64_t a2) {
    int64_t v1 = function_566390(&g13); // 0x50d7f4
    int64_t * v2 = (int64_t *)(*(int64_t *)(a2 + 24) + 8 * v1); // 0x50d808
    int64_t result = *v2; // 0x50d808
    if (result != 0) {
        // 0x50d811
        return result;
    }
    int64_t v3 = function_4efd30(160); // 0x50d825
    *(int32_t *)(v3 + 8) = 0;
    *(int64_t *)(v3 + 16) = 0;
    *(int64_t *)(v3 + 24) = 0;
    *(char *)(v3 + 32) = 0;
    *(int64_t *)(v3 + 36) = 0;
    *(int64_t *)(v3 + 48) = 0;
    *(int64_t *)(v3 + 56) = 0;
    *(int64_t *)v3 = (int64_t)&g4;
    *(int64_t *)(v3 + 64) = 0;
    *(int64_t *)(v3 + 72) = 0;
    *(int64_t *)(v3 + 80) = 0;
    *(int64_t *)(v3 + 88) = 0;
    *(int64_t *)(v3 + 96) = 0;
    *(int32_t *)(v3 + 104) = 0;
    *(char *)(v3 + 152) = 0;
    function_50bde0(v3, a2);
    function_566890(a2, v3, v1);
    return *v2;
}

// Address range: 0x53fbe0 - 0x53fcc0
// From class:    std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_53fbe0(int64_t a1, int64_t wstr, uint64_t a3) {
    int64_t result; // 0x53fbe0
    if ((int64_t)a3 < 1) {
        // 0x53fc2f
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x53fc04
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x53fc00
    int64_t wstr2 = *v1; // 0x53fc04
    int64_t v4 = a1; // 0x53fc0b
    int64_t v5 = v2; // 0x53fc0b
    int64_t v6 = wstr; // 0x53fc0b
    int64_t v7; // 0x53fc83
    int64_t v8; // 0x53fc5c
    int64_t v9; // 0x53fc46
    int64_t v10; // 0x53fc4a
    int64_t v11; // 0x53fc4d
    int64_t n; // 0x53fc50
    if (v3 != wstr2) {
        // 0x53fc40
        v9 = v3 - wstr2 >> 2;
        v10 = a3 - v2;
        v11 = v9 - v10;
        n = v11 == 0 | v11 < 0 != ((v11 ^ v9) & (v9 ^ v10)) < 0 ? v9 : v10;
        v7 = wstr2;
        v4 = a1;
        if (n != 0) {
            // 0x53fc78
            wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
            v7 = *v1;
            v4 = wstr;
        }
        // 0x53fc59
        v5 = n + v2;
        v8 = 4 * n;
        *v1 = v7 + v8;
        result = v5;
        if (v5 >= a3) {
            // 0x53fc2f
            return result;
        }
        // 0x53fc6c
        v6 = v8 + wstr;
    }
    int64_t v12 = v5;
    int64_t v13 = v4;
    while (*(int64_t *)(v13 + 80) != g5) {
        int32_t v14 = v13; // 0x53fc95
        result = v12;
        if (v14 == -1) {
            // 0x53fc2f
            return result;
        }
        int64_t v15 = v12 + 1; // 0x53fc9a
        *(int32_t *)v6 = v14;
        result = v15;
        if (v15 >= a3) {
            // 0x53fc2f
            return result;
        }
        int64_t wstr3 = v6 + 4;
        v2 = v15;
        v3 = *(int64_t *)(a1 + 24);
        wstr2 = *v1;
        int64_t v16 = a1; // 0x53fc0b
        v5 = v2;
        v6 = wstr3;
        if (v3 != wstr2) {
            // 0x53fc40
            v9 = v3 - wstr2 >> 2;
            v10 = a3 - v2;
            v11 = v9 - v10;
            n = v11 == 0 | v11 < 0 != ((v11 ^ v9) & (v9 ^ v10)) < 0 ? v9 : v10;
            v7 = wstr2;
            v4 = a1;
            if (n != 0) {
                // 0x53fc78
                wmemcpy((int32_t *)wstr3, (int32_t *)wstr2, (int32_t)n);
                v7 = *v1;
                v4 = wstr3;
            }
            // 0x53fc59
            v16 = v4;
            v5 = n + v2;
            v8 = 4 * n;
            *v1 = v7 + v8;
            result = v5;
            if (v5 >= a3) {
                // 0x53fc2f
                return result;
            }
            // 0x53fc6c
            v6 = v8 + wstr3;
        }
        // 0x53fc0d
        v12 = v5;
        v13 = v16;
    }
    int64_t v17 = *(int64_t *)(v13 + 72); // 0x53fc1e
    // 0x53fc2f
    return v17 != g7 ? v17 : v12;
}
