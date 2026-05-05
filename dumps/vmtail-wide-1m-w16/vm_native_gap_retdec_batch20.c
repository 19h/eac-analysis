/*
 * Targeted RetDec C for native executable gap queue batch 20.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x573140-0x573250 rank=11 name=fcn.00573140 kind=r2_discovered bytes=272 uncovered=272
 *   0x4cfb40-0x4cfc4e rank=12 name=fcn.004cfb40 kind=r2_discovered bytes=270 uncovered=270
 *   0x46e15-0x46f22 rank=13 name=fcn.00046e15 kind=r2_discovered bytes=269 uncovered=269
 *   0x4c19e0-0x4c1aed rank=14 name=fcn.004c19e0 kind=r2_discovered bytes=269 uncovered=269
 *   0x4c2a20-0x4c2b2d rank=15 name=fcn.004c2a20 kind=r2_discovered bytes=269 uncovered=269
 *   0x511b7f-0x511c8b rank=16 name=fcn.00511b7f kind=r2_discovered bytes=268 uncovered=268
 *   0x4e37c-0x4e487 rank=17 name=fcn.0004e37c kind=r2_discovered bytes=267 uncovered=267
 *   0x3a262e-0x3a2739 rank=18 name=fcn.003a262e kind=r2_discovered bytes=267 uncovered=267
 *   0x567c30-0x567d3a rank=19 name=fcn.00567c30 kind=r2_discovered bytes=266 uncovered=266
 *   0x41448-0x41551 rank=20 name=fcn.00041448 kind=r2_discovered bytes=265 uncovered=265
 *   0x4ad450-0x4ad559 rank=21 name=fcn.004ad450 kind=r2_discovered bytes=265 uncovered=265
 *   0x4a470-0x4a578 rank=22 name=fcn.0004a470 kind=r2_discovered bytes=264 uncovered=264
 *   0x569250-0x569358 rank=23 name=fcn.00569250 kind=r2_discovered bytes=264 uncovered=264
 *   0x573fe-0x57505 rank=24 name=fcn.000573fe kind=r2_discovered bytes=263 uncovered=263
 *   0x62350-0x62456 rank=25 name=fcn.00062350 kind=r2_discovered bytes=262 uncovered=262
 *   0x72178-0x7227e rank=26 name=fcn.00072178 kind=r2_discovered bytes=262 uncovered=262
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
struct sockaddr;
struct utsname;
#define F_GETFL 3
#define F_SETFL 4
#define SO_DEBUG 1
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
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1(int32_t interrupt);
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
int64_t __asm_mfence(void);
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
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int fcntl(int fd, int cmd, ...);
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
struct _Unwind_Exception;
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_200c0();
int64_t function_20210();
int64_t function_203b0();
int64_t function_24e1e();
int64_t function_254fe();
int64_t function_3a262e();
int64_t function_41448();
int64_t function_46521();
int64_t function_46e15();
int64_t function_4a470();
int64_t function_4ad450();
int64_t function_4c19e0();
int64_t function_4c28f0();
int64_t function_4c2a20();
int64_t function_4cf8d0();
int64_t function_4cfb40();
int64_t function_4e2a6();
int64_t function_4e37c();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0ad0();
int64_t function_4f1b30();
int64_t function_511ada();
int64_t function_511b3d();
int64_t function_511b40();
int64_t function_511b7f();
int64_t function_511b90();
int64_t function_511c10();
int64_t function_511c81();
int64_t function_5423b0();
int64_t function_54c6d0();
int64_t function_54c860();
int64_t function_566c0();
int64_t function_567c30();
int64_t function_569250();
int64_t function_573140();
int64_t function_573fe();
int64_t function_62350();
int64_t function_63286();
int64_t function_633cc();
int64_t function_63514();
int64_t function_72178();
int64_t function_7261c();
int64_t function_7269e();
int64_t function_7270e();
int64_t function_7293a();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_c6d58();

// Address range: 0x41448 - 0x41551
int64_t function_41448(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 == 0) {
        // 0x4154e
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 88);
    int64_t v2 = *v1; // 0x4144f
    if (v2 == 0) {
        // 0x4154e
        return 0;
    }
    uint32_t v3 = (int32_t)a2;
    if (*(int32_t *)(a1 + 16) <= v3 || *(int32_t *)(a1 + 20) != 1) {
        // 0x4154e
        return 0;
    }
    int64_t v4 = 4 * a2 & 0x3fffffffc;
    uint32_t v5 = *(int32_t *)(*(int64_t *)(v2 + 32) + v4); // 0x41469
    int64_t v6 = *(int64_t *)v2 + (int64_t)v5; // 0x4146d
    if (a3 == 0 || v6 == 0) {
        // 0x4154e
        return 0;
    }
    // 0x41482
    *(int32_t *)a3 = v3;
    int64_t v7 = a3 + 60; // 0x4148a
    int64_t v8 = v6 + 46;
    *(int32_t *)(a3 + 4) = *(int32_t *)(*(int64_t *)(*v1 + 32) + v4);
    *(int16_t *)(a3 + 8) = *(int16_t *)(v6 + 4);
    *(int16_t *)(a3 + 10) = *(int16_t *)(v6 + 6);
    *(int16_t *)(a3 + 12) = *(int16_t *)(v6 + 8);
    *(int16_t *)(a3 + 14) = *(int16_t *)(v6 + 10);
    *(int32_t *)(a3 + 16) = *(int32_t *)(v6 + 16);
    *(int64_t *)(a3 + 24) = (int64_t)*(int32_t *)(v6 + 20);
    *(int64_t *)(a3 + 32) = (int64_t)*(int32_t *)(v6 + 24);
    *(int16_t *)(a3 + 40) = *(int16_t *)(v6 + 36);
    *(int32_t *)(a3 + 44) = *(int32_t *)(v6 + 38);
    *(int64_t *)(a3 + 48) = (int64_t)*(int32_t *)(v6 + 42);
    int16_t * v9 = (int16_t *)(v6 + 28); // 0x414ea
    uint64_t v10 = (int64_t)*v9; // 0x414ea
    int64_t v11 = a3 + 320; // 0x414f2
    int64_t v12 = v10 < 259 ? v10 : 259; // 0x41500
    __asm_rep_movsb_memcpy((char *)v7, (char *)v8, v12);
    *(char *)(v12 + v7) = 0;
    uint32_t v13 = (int32_t)*(int16_t *)(v6 + 32); // 0x41521
    uint32_t v14 = v13 < 255 ? v13 : 255; // 0x41521
    int64_t v15 = v14; // 0x41524
    *(int32_t *)(a3 + 56) = v14;
    uint16_t v16 = *v9; // 0x4152a
    uint16_t v17 = *(int16_t *)(v6 + 30); // 0x4152e
    __asm_rep_movsb_memcpy((char *)v11, (char *)(v8 + (int64_t)v16 + (int64_t)v17), v15);
    *(char *)(v11 + v15) = 0;
    return 1;
}

// Address range: 0x46e15 - 0x46f22
int64_t function_46e15(uint64_t a1, int64_t a2) {
    int64_t v1 = a1;
    uint64_t v2 = a1 % 64; // 0x46e2a
    int64_t v3 = a1 + 24; // 0x46e31
    *(char *)(v3 + v2) = -128;
    uint64_t v4 = v2 ^ 63; // 0x46e36
    int32_t v5; // 0x46e15
    int64_t v6; // 0x46e15
    int64_t v7; // 0x46e15
    if (v4 < 8) {
        // 0x46e3f
        __asm_rep_stosb_memset((char *)(v2 + 25 + v1), 0, v4);
        function_46521(a1);
        v5 = v1;
        v6 = 56;
        v7 = 0;
    } else {
        // 0x46e15
        v5 = *(int32_t *)&v1;
        v6 = v4 + 0xfffffff8 & 0xffffffff;
        v7 = v2 + 1;
    }
    // 0x46e64
    __asm_rep_stosb_memset((char *)(v7 + v3), 0, v6);
    int32_t v8 = 8 * v5; // 0x46e7b
    *(int32_t *)a1 = v8;
    *(char *)(a1 + 80) = (char)v8;
    *(char *)(a1 + 81) = (char)(v5 / 32);
    *(char *)(a1 + 83) = (char)(v5 / 0x200000);
    uint32_t v9 = *(int32_t *)(a1 + 4); // 0x46e91
    *(char *)(a1 + 82) = (char)(v5 / 0x2000);
    *(char *)(a1 + 84) = (char)v9;
    *(char *)(a1 + 85) = (char)(v9 / 256);
    *(char *)(a1 + 86) = (char)(v9 / 0x10000);
    *(char *)(a1 + 87) = (char)(v9 / 0x1000000);
    function_46521(a1);
    int32_t * v10 = (int32_t *)(a1 + 8); // 0x46eb5
    *(char *)a2 = (char)*v10;
    *(char *)(a2 + 1) = (char)(*v10 / 256);
    *(char *)(a2 + 2) = (char)*(int16_t *)(a1 + 10);
    *(char *)(a2 + 3) = *(char *)(a1 + 11);
    int32_t * v11 = (int32_t *)(a1 + 12); // 0x46ecf
    *(char *)(a2 + 4) = (char)*v11;
    *(char *)(a2 + 5) = (char)(*v11 / 256);
    *(char *)(a2 + 6) = (char)*(int16_t *)(a1 + 14);
    *(char *)(a2 + 7) = *(char *)(a1 + 15);
    int32_t * v12 = (int32_t *)(a1 + 16); // 0x46ee9
    *(char *)(a2 + 8) = (char)*v12;
    *(char *)(a2 + 9) = (char)(*v12 / 256);
    *(char *)(a2 + 10) = (char)*(int16_t *)(a1 + 18);
    *(char *)(a2 + 11) = *(char *)(a1 + 19);
    int32_t * v13 = (int32_t *)(a1 + 20); // 0x46f03
    *(char *)(a2 + 12) = (char)*v13;
    *(char *)(a2 + 13) = (char)(*v13 / 256);
    *(char *)(a2 + 14) = (char)*(int16_t *)(a1 + 22);
    unsigned char result = *(char *)(a1 + 23); // 0x46f16
    *(char *)(a2 + 15) = result;
    return result;
}

// Address range: 0x4a470 - 0x4a578
int64_t function_4a470(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4a497
    int64_t v2 = a2 - a1;
    int64_t v3 = 0xaaaaaaaaaaaaaaa; // 0x4a4cb
    int64_t v4; // 0x4a470
    int64_t v5; // 0x4a470
    int64_t v6; // 0x4a470
    int64_t v7; // 0x4a470
    if (v3 > 0xaaaaaaaaaaaaaaa || v3 < -0x5555555555555555 * (*v1 - a1 >> 3)) {
        goto lab_0x4a567;
    } else {
        // 0x4a4da
        v4 = v2;
        v5 = v3;
        v6 = a1;
        v7 = 0;
        if (v3 != 0) {
            goto lab_0x4a567;
        } else {
            goto lab_0x4a4e6;
        }
    }
  lab_0x4a567:;
    int64_t v8 = 24 * v3; // 0x4a567
    int64_t v9 = function_4efd30((int128_t)v8); // 0x4a56b
    v4 = a2 - v8;
    v5 = v3;
    v6 = v8;
    v7 = v9;
    goto lab_0x4a4e6;
  lab_0x4a4e6:;
    // 0x4a4e6
    int64_t v10; // 0x4a470
    int128_t v11 = __asm_movups(*(int128_t *)&v10); // 0x4a4ea
    int64_t v12 = v7 + v2;
    __asm_movups_133(*(int128_t *)v12, v11);
    *(int64_t *)(v12 + 16) = *(int64_t *)(a3 + 16);
    if (v6 != a2) {
        // 0x4a507
        memmove((int64_t *)v7, (int64_t *)v6, (int32_t)v4);
    }
    int64_t v13 = *v1; // 0x4a515
    int64_t v14 = v4 + 24 + v7; // 0x4a519
    int64_t v15 = v13 - a2; // 0x4a521
    v10 = v15;
    if (v13 != a2) {
        // 0x4a529
        __asm_rep_movsb_memcpy((char *)v14, (char *)a2, v15);
    }
    if (v6 != 0) {
        // 0x4a53d
        function_4eeb50(v6);
    }
    // 0x4a545
    *(int64_t *)a1 = v7;
    *v1 = v15 + v14;
    *(int64_t *)(a1 + 16) = v7 + 24 * v5;
    int64_t result; // 0x4a470
    return result;
}

// Address range: 0x4e37c - 0x4e487
int64_t function_4e37c(int64_t a1) {
    int64_t v1 = a1 + 72; // 0x4e37c
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 88) = v1;
    *(int64_t *)(a1 + 96) = v1;
    int64_t v2 = a1 + 120; // 0x4e39c
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 136) = v2;
    *(int64_t *)(a1 + 144) = v2;
    int64_t v3 = a1 + 168; // 0x4e3be
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 56) = 0;
    *(int64_t *)(a1 + 184) = v3;
    *(int64_t *)(a1 + 192) = v3;
    *(int32_t *)v1 = 0;
    *(int64_t *)(a1 + 80) = 0;
    *(int64_t *)(a1 + 104) = 0;
    *(int32_t *)v2 = 0;
    *(int64_t *)(a1 + 128) = 0;
    *(int64_t *)(a1 + 152) = 0;
    *(int32_t *)v3 = 0;
    *(int64_t *)(a1 + 176) = 0;
    *(int64_t *)(a1 + 200) = 0;
    *(int64_t *)(a1 + 216) = 0;
    *(int64_t *)(a1 + 224) = 0;
    function_7293a(a1 + 240);
    function_7293a(a1 + 280);
    function_7293a(a1 + 320);
    function_7293a(a1 + 360);
    function_7293a(a1 + 400);
    *(char *)(a1 + 208) = 0;
    return function_4e2a6(a1);
}

// Address range: 0x573fe - 0x57505
int64_t function_573fe(int64_t a1, int64_t a2) {
    // 0x573fe
    function_566c0();
    int64_t v1 = a2 + 12; // 0x57418
    *(int64_t *)a1 = (int64_t)&g14;
    *(int64_t *)(a1 + 33) = v1;
    *(int32_t *)(a1 + 41) = *(int32_t *)(a2 + 8);
    __asm_rep_movsd_memcpy((char *)(a1 + 45), (char *)v1, 128);
    int128_t v2 = __asm_movups(*(int128_t *)(a2 + (int64_t)"GNU")); // 0x57434
    __asm_movups_133(*(int128_t *)(a1 + (int64_t)&g3), v2);
    int128_t v3 = __asm_movups(*(int128_t *)(a2 + (int64_t)&g1)); // 0x57442
    __asm_movups_133(*(int128_t *)(a1 + (int64_t)&g6), v3);
    int32_t v4 = *(int32_t *)(a2 + (int64_t)&g2); // 0x57450
    *(int32_t *)(a1 + (int64_t)&g7) = v4;
    int64_t * v5 = (int64_t *)(a2 + (int64_t)&g5); // 0x5745c
    int64_t * v6 = (int64_t *)(a2 + (int64_t)&g4); // 0x57463
    int64_t v7 = *v5 - *v6; // 0x57463
    int64_t * v8 = (int64_t *)(a1 + (int64_t)&g8); // 0x5746a
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + (int64_t)&g9); // 0x57475
    *v9 = 0;
    int64_t * v10 = (int64_t *)(a1 + (int64_t)&g10); // 0x57480
    *v10 = 0;
    uint64_t v11 = v7 >> 5; // 0x5748e
    int64_t v12 = 0; // 0x57492
    if (v11 != 0) {
        if (v11 >= 0x800000000000000) {
            // 0x574a3
            function_5423b0();
        }
        // 0x574a8
        v12 = function_4efd30((int128_t)v7);
    }
    // 0x574b7
    *v8 = v12;
    *v9 = v12;
    *v10 = v12 + v7;
    int64_t v13 = *v5; // 0x574cf
    int64_t v14 = *v6; // 0x574d6
    int64_t v15 = v13 - v14; // 0x574e0
    int64_t dest_mem = v13; // 0x574e6
    if (v13 != v14) {
        // 0x574e8
        dest_mem = (int64_t)memmove((int64_t *)v12, (int64_t *)v14, (int32_t)v15);
    }
    // 0x574f6
    *v9 = dest_mem + v15;
    return dest_mem;
}

// Address range: 0x62350 - 0x62456
int64_t function_62350(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x62366
    int64_t * v2 = (int64_t *)(a1 + 288); // 0x62376
    int64_t v3 = *v2; // 0x62376
    int64_t v4 = v3; // 0x62382
    if ((char)a3 != 0) {
        // 0x62384
        v4 = *(int64_t *)(a1 + 280);
    }
    // 0x6238b
    if (v3 == *(int64_t *)(a1 + 296)) {
        // 0x62429
        function_633cc();
    } else {
        // 0x62398
        if (v4 != v3) {
            // 0x623b2
            int64_t v5; // bp-112, 0x62350
            int64_t v6 = (int64_t)&v5; // 0x623b9
            function_63286(v6, a2);
            int64_t v7 = *v2; // 0x623c3
            function_63286(v7, v7 - 64);
            int64_t v8 = *v2; // 0x623d3
            int64_t v9 = v8 - 64; // 0x623de
            *v2 = v8 + 64;
            uint64_t v10 = v9 - v4; // 0x623ec
            if (v10 >= 64) {
                int64_t v11 = v9; // 0x623f8
                int64_t v12 = v8; // 0x623fc
                int64_t v13 = v10 / 64;
                v11 -= 64;
                v12 -= 64;
                function_63514(v12, v11);
                int64_t v14 = v13 - 1; // 0x623f6
                while (v13 >= 2) {
                    // 0x623f8
                    v13 = v14;
                    v11 -= 64;
                    v12 -= 64;
                    function_63514(v12, v11);
                    v14 = v13 - 1;
                }
            }
            // 0x62410
            function_63514(v4, v6);
            function_254fe(&v5);
        } else {
            // 0x6239d
            function_63286(v4, a2);
            *v2 = *v2 + 64;
        }
    }
    int64_t result = 0; // 0x62442
    if (v1 != __readfsqword(40)) {
        // 0x62444
        __stack_chk_fail();
        result = (int64_t)&g19;
    }
    // 0x62449
    return result;
}

// Address range: 0x72178 - 0x7227e
int64_t function_72178(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 168; // 0x72197
    int64_t v2 = __readfsqword(40); // 0x721a8
    function_729b6();
    uint64_t v3 = function_24e1e(); // 0x721bd
    int64_t v4 = *(int64_t *)(a1 + 184); // 0x721c2
    int64_t v5 = 0; // 0x721cd
    if (v4 != v1) {
        int64_t v6 = v4;
        int64_t * v7 = (int64_t *)(v6 + 120);
        while (*v7 > v3) {
            int64_t v8 = function_4f0ad0(v6); // 0x72241
            v5 = 0;
            if (v8 == v1) {
                goto lab_0x72250;
            }
            v6 = v8;
            v7 = (int64_t *)(v6 + 120);
        }
        // 0x721d5
        function_7261c(a2, v6 + 32);
        *(int64_t *)(a2 + 32) = *(int64_t *)(v6 + 64);
        function_7269e(a2 + 40, v6 + 72);
        *(int64_t *)(a2 + 48) = *(int64_t *)(v6 + 80);
        *(char *)(a2 + 56) = *(char *)(v6 + 88);
        *(int32_t *)(a2 + 60) = *(int32_t *)(v6 + 92);
        *(int32_t *)(a2 + 64) = *(int32_t *)(v6 + 96);
        *(int64_t *)(a2 + 72) = *(int64_t *)(v6 + 104);
        *(int32_t *)(a2 + 80) = *(int32_t *)(v6 + 112);
        *(int64_t *)(a2 + 88) = *v7;
        *(int32_t *)(a2 + 96) = *(int32_t *)(v6 + 128);
        function_7270e(a1 + 160, v6);
        v5 = 1;
    }
  lab_0x72250:;
    // 0x72250
    int64_t v9; // bp-72, 0x72178
    int64_t result = function_729ce(&v9) & -256 | v5; // 0x72268
    if (v2 != __readfsqword(40)) {
        // 0x7226a
        __stack_chk_fail();
        result = (int64_t)&g19;
    }
    // 0x7226f
    return result;
}

// Address range: 0x3a262e - 0x3a2739
int64_t function_3a262e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 88); // 0x3a262e
    int64_t v2; // 0x3a262e
    *v1 = *v1 | (char)v2;
    int64_t v3; // bp-16, 0x3a262e
    int64_t v4 = (int64_t)&v3; // 0x3a269e
    v3 = 0x1a61e7bf;
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x3a26d2
    int64_t v6 = v4 + 16; // 0x3a26d5
    int64_t * v7 = (int64_t *)v6; // 0x3a26d5
    *v7 = v3;
    *(int64_t *)(v4 + 32) = 0x39da0d;
    int64_t v8 = v4 + 8; // 0x3a26f0
    *v5 = v8;
    int64_t * v9 = (int64_t *)v8; // 0x3a26ff
    int64_t v10 = *v9; // 0x3a26ff
    v3 = v10;
    *v5 = v10;
    *v9 = *v7;
    v3 = v6;
    return function_c6d58(a1, a2);
}

// Address range: 0x4ad450 - 0x4ad556
int64_t function_4ad450(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a3 + 8); // 0x4ad461
    if (*v1 < 33) {
        // 0x4ad530
        int64_t result; // 0x4ad450
        return result;
    }
    int64_t str2 = a1;
    int64_t v2 = 0; // 0x4ad4e4
    int64_t size2 = a2;
    int64_t str; // 0x4ad450
    int64_t v3; // 0x4ad450
    uint64_t v4; // 0x4ad450
    int64_t size; // 0x4ad450
    int64_t v5; // 0x4ad450
    int64_t v6; // 0x4ad493
    while (true) {
      lab_0x4ad490:
        // 0x4ad490
        size = size2;
        v4 = v2;
        str = str2;
        v6 = *(int64_t *)(a3 + 16);
        if (v4 != 0) {
            goto lab_0x4ad4a5;
        } else {
            // 0x4ad4a0
            v3 = str;
            v5 = size;
            if (*(char *)v6 == 0) {
                goto lab_0x4ad4e4;
            } else {
                goto lab_0x4ad4a5;
            }
        }
    }
  lab_0x4ad530_3:
    // 0x4ad530
    return 0xffffd680;
  lab_0x4ad4a5:;
    unsigned char v7 = *(char *)(v6 + v4); // 0x4ad4ac
    int64_t v8 = v4 < 27 ? (int64_t)&g12 : (int64_t)&g13; // 0x4ad4c1
    int32_t chars_printed = snprintf((char *)str, (int32_t)size, "%02X%s", (int32_t)v7, (char *)v8); // 0x4ad4ce
    if (chars_printed < 0) {
        return 0xffffd680;
    }
    uint64_t v9 = (int64_t)chars_printed; // 0x4ad4d7
    if (size <= v9) {
        return 0xffffd680;
    }
    // 0x4ad4de
    v3 = str + v9;
    v5 = size - v9;
    goto lab_0x4ad4e4;
  lab_0x4ad4e4:
    // 0x4ad4e4
    size2 = v5;
    str2 = v3;
    v2 = v4 + 1;
    if (v2 >= 28) {
        // 0x4ad4ed
        if (*v1 == 28) {
            // 0x4ad515
            return a2 - size2 & 0xffffffff;
        }
        int32_t chars_printed2 = snprintf((char *)str2, (int32_t)size2, "...."); // 0x4ad502
        if (chars_printed2 < 0) {
            goto lab_0x4ad530_3;
        } else {
            uint64_t v10 = (int64_t)chars_printed2; // 0x4ad50b
            if (size2 > v10) {
                // 0x4ad515
                return a2 - (size2 - v10) & 0xffffffff;
            }
            goto lab_0x4ad530_3;
        }
    }
    goto lab_0x4ad490;
}

// Address range: 0x4c19e0 - 0x4c1aed
int64_t function_4c19e0(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x4c19e0
    if (a1 == 0) {
        // 0x4c1a9e
        return 0xffffaf00;
    }
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x4c1a04
    if (v1 == 0) {
        // 0x4c1a9e
        return 0xffffaf00;
    }
    int64_t v2 = (int64_t)*(int32_t *)(a1 + 20); // 0x4c1a14
    int64_t v3 = v2; // 0x4c1a1e
    int64_t v4 = a2; // 0x4c1a1e
    int64_t v5 = a3; // 0x4c1a1e
    int64_t v6; // bp-104, 0x4c19e0
    if (v2 < a3) {
        int64_t v7 = *(int64_t *)(a1 + 8); // 0x4c1ac8
        v3 = (int64_t)*(int32_t *)(v7 + 20);
        v4 = (int64_t)&v6;
        v5 = (int64_t)*(int32_t *)(v7 + 16);
    }
    int64_t v8 = v3 + v1; // 0x4c1a2c
    memset((int64_t *)v1, 54, (int32_t)v3);
    memset((int64_t *)v8, 92, *(int32_t *)(v1 + 20));
    int64_t v9 = 0; // 0x4c1a4c
    if (v5 != 0) {
        char * v10 = (char *)(v9 + v4); // 0x4c1a50
        char * v11 = (char *)(v9 + v1); // 0x4c1a55
        *v11 = *v11 ^ *v10;
        char * v12 = (char *)(v9 + v8); // 0x4c1a5d
        *v12 = *v12 ^ *v10;
        v9++;
        while (v9 != v5) {
            // 0x4c1a50
            v10 = (char *)(v9 + v4);
            v11 = (char *)(v9 + v1);
            *v11 = *v11 ^ *v10;
            v12 = (char *)(v9 + v8);
            *v12 = *v12 ^ *v10;
            v9++;
        }
    }
    int64_t v13 = (int64_t)&v6; // 0x4c1a6d
    *(char *)v13 = 0;
    v13++;
    int64_t v14; // bp-40, 0x4c19e0
    while (v13 != (int64_t)&v14) {
        // 0x4c1a70
        *(char *)v13 = 0;
        v13++;
    }
    // 0x4c1a9e
    return 0;
}

// Address range: 0x4c2a20 - 0x4c2b2d
// Used cryptographic patterns:
//  - padding_used_in_hashing_algorithms__0x80_0_____0_ (8-bit)
int64_t function_4c2a20(int64_t a1, int64_t a2) {
    // 0x4c2a20
    int64_t v1; // 0x4c2a20
    uint32_t v2 = (int32_t)v1 % 64; // 0x4c2a42
    int64_t v3 = 8 * (char)v1; // bp-40, 0x4c2a4b
    int32_t v4 = v2 < 56 ? 56 : 120;
    function_4c28f0(a1, "\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", v4 - v2, v2);
    function_4c28f0(a1, (char *)&v3, 8, v2);
    int32_t * v5 = (int32_t *)(a1 + 8); // 0x4c2ab2
    *(char *)a2 = (char)*v5;
    *(char *)(a2 + 1) = (char)(*v5 / 256);
    *(char *)(a2 + 2) = (char)*(int16_t *)(a1 + 10);
    *(char *)(a2 + 3) = *(char *)(a1 + 11);
    int32_t * v6 = (int32_t *)(a1 + 12); // 0x4c2acf
    *(char *)(a2 + 4) = (char)*v6;
    *(char *)(a2 + 5) = (char)(*v6 / 256);
    *(char *)(a2 + 6) = (char)*(int16_t *)(a1 + 14);
    *(char *)(a2 + 7) = *(char *)(a1 + 15);
    int32_t * v7 = (int32_t *)(a1 + 16); // 0x4c2aec
    *(char *)(a2 + 8) = (char)*v7;
    *(char *)(a2 + 9) = (char)(*v7 / 256);
    *(char *)(a2 + 10) = (char)*(int16_t *)(a1 + 18);
    *(char *)(a2 + 11) = *(char *)(a1 + 19);
    int32_t * v8 = (int32_t *)(a1 + 20); // 0x4c2b09
    *(char *)(a2 + 12) = (char)*v8;
    *(char *)(a2 + 13) = (char)(*v8 / 256);
    *(char *)(a2 + 14) = (char)*(int16_t *)(a1 + 22);
    unsigned char result = *(char *)(a1 + 23); // 0x4c2b1f
    *(char *)(a2 + 15) = result;
    return result;
}

// Address range: 0x4cfb40 - 0x4cfc4e
int64_t function_4cfb40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)(a3 + 1); // 0x4cfb4c
    unsigned char v2 = *(char *)(a3 + 4); // 0x4cfb50
    unsigned char v3 = *(char *)(a3 + 3); // 0x4cfb5d
    unsigned char v4 = *(char *)(a3 + 2); // 0x4cfb67
    int64_t v5; // 0x4cfb40
    int64_t v6 = 0x10000 * (int64_t)v1 | 0x1000000 * v5 & 0xff000000 | (int64_t)v3 | 256 * (int64_t)v4; // 0x4cfb6e
    unsigned char v7 = *(char *)(a3 + 5); // 0x4cfb70
    unsigned char v8 = *(char *)(a3 + 7); // 0x4cfb7e
    unsigned char v9 = *(char *)(a3 + 6); // 0x4cfb82
    int64_t v10 = 0x10000 * (int64_t)v7 | 0x1000000 * (int64_t)v2 | (int64_t)v8 | 256 * (int64_t)v9; // 0x4cfb8c
    if ((int32_t)a2 != 0) {
        uint32_t v11 = (int32_t)v6; // 0x4cfb74
        uint32_t v12 = (int32_t)v10; // 0x4cfb91
        function_4cf8d0();
        *(char *)(a4 + 7) = v8;
        *(char *)(a4 + 3) = v3;
        *(char *)a4 = (char)(v11 / 0x1000000);
        *(char *)(a4 + 1) = (char)(v11 / 0x10000);
        *(char *)(a4 + 2) = (char)(v11 / 256);
        *(char *)(a4 + 4) = (char)(v12 / 0x1000000);
        *(char *)(a4 + 5) = (char)(v12 / 0x10000);
        *(char *)(a4 + 6) = (char)(v12 / 256);
        return 0;
    }
    int64_t v13 = a1 + (int64_t)&g11; // 0x4cfc1e
    int64_t v14 = a1 + (int64_t)&g16; // 0x4cfc2e
    int64_t v15 = a1 + (int64_t)&g18; // 0x4cfc35
    int64_t v16 = a1;
    uint32_t v17 = *(int32_t *)(v16 + 68) ^ (int32_t)v6; // 0x4cfc07
    int32_t v18 = *(int32_t *)(v13 + (int64_t)(v17 / 0x4000 & 1020)); // 0x4cfc1e
    int32_t v19 = *(int32_t *)(a1 + 72 + (int64_t)(4 * v17 / 0x1000000)); // 0x4cfc25
    int32_t v20 = *(int32_t *)(v14 + (int64_t)(v17 / 64 & 1020)); // 0x4cfc2e
    int32_t v21 = *(int32_t *)(v15 + (int64_t)(4 * v17 & 1020)); // 0x4cfc35
    uint32_t v22 = (v19 + v18 ^ v20) + v21 ^ (int32_t)v10; // 0x4cfc3d
    int64_t v23 = v16 - 4; // 0x4cfc46
    int64_t v24 = v17; // 0x4cfc46
    while (v16 != a1 - 60) {
        // 0x4cfc00
        v16 = v23;
        v17 = *(int32_t *)(v16 + 68) ^ (int32_t)(int64_t)v22;
        v18 = *(int32_t *)(v13 + (int64_t)(v17 / 0x4000 & 1020));
        v19 = *(int32_t *)(a1 + 72 + (int64_t)(4 * v17 / 0x1000000));
        v20 = *(int32_t *)(v14 + (int64_t)(v17 / 64 & 1020));
        v21 = *(int32_t *)(v15 + (int64_t)(4 * v17 & 1020));
        v22 = (v19 + v18 ^ v20) + v21 ^ (int32_t)v24;
        v23 = v16 - 4;
        v24 = v17;
    }
    // 0x4cfc48
    return (int64_t)(*(int32_t *)(a1 + 4) ^ v22);
}

// Address range: 0x511b7f - 0x511b8b
int64_t function_511b7f(void) {
    // 0x511b7f
    int64_t v1; // 0x511b7f
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_511ada();
}

// Address range: 0x511b90 - 0x511c0c
int64_t function_511b90(void) {
    // 0x511b90
    int64_t v1; // 0x511b90
    uint64_t v2 = *(int64_t *)(v1 + 16); // 0x511b93
    int64_t v3; // 0x511b90
    if (v2 < *(int64_t *)(v1 + 24)) {
        // 0x511b9f
        v3 = (int64_t)*(int32_t *)v2;
    }
    // 0x511ba1
    if ((int32_t)v3 == -1) {
        function_511b40();
    }
    // 0x511bac
    return function_511b3d();
}

// Address range: 0x511c10 - 0x511c13
int64_t function_511c10(void) {
    // 0x511c10
    int64_t result; // 0x511c10
    return result;
}

// Address range: 0x511c81 - 0x511c85
int64_t function_511c81(void) {
    // 0x511c81
    int64_t result; // 0x511c81
    int32_t * v1 = (int32_t *)(result - 119); // 0x511c81
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x567c30 - 0x567d38
int64_t function_567c30(int64_t mutex, int64_t a2) {
    // 0x567c30
    if (g17 == 0) {
        goto lab_0x567c58;
    } else {
        // 0x567c4b
        if (pthread_mutex_lock((int64_t *)mutex) != 0) {
            // 0x567cf2
            function_4f1b30();
            goto lab_0x567cf7;
        } else {
            goto lab_0x567c58;
        }
    }
  lab_0x567c58:;
    int64_t v1 = *(int64_t *)(mutex + 56); // 0x567c58
    int64_t v2 = *(int64_t *)(mutex + 48); // 0x567c5c
    uint64_t v3 = v1 - v2; // 0x567c63
    int64_t v4 = v2; // 0x567c70
    if (v3 >= 8) {
        int64_t v5 = a2 & 0xffffffff; // 0x567c39
        int64_t v6 = v3 / 8; // 0x567ce7
        int64_t v7 = v6 / 2;
        int64_t v8 = 8 * v7 + v2; // 0x567c78
        int64_t v9 = v7; // 0x567c81
        int64_t v10 = v6; // 0x567c81
        int64_t v11 = v8; // 0x567c81
        int64_t v12 = v7; // 0x567c81
        int64_t v13; // 0x567c30
        int64_t v14; // 0x567c8b
        int64_t v15; // 0x567c8e
        if (v5 <= (int64_t)*(int32_t *)*(int64_t *)v8) {
            v4 = v2;
            if (v9 == 0) {
                // break (via goto) -> 0x567ca1
                goto lab_0x567ca1;
            }
            // 0x567c88
            v14 = v9 >> 1;
            v15 = 8 * v14 + v2;
            v10 = v9;
            v11 = v15;
            v12 = v14;
            while (v5 <= (int64_t)*(int32_t *)*(int64_t *)v15) {
                // 0x567c9c
                v13 = v14;
                v4 = v2;
                if (v13 == 0) {
                    // break (via goto) -> 0x567ca1
                    goto lab_0x567ca1;
                }
                // 0x567c88
                v14 = v13 >> 1;
                v15 = 8 * v14 + v2;
                v10 = v13;
                v11 = v15;
                v12 = v14;
            }
        }
        int64_t v16 = v11 + 8; // 0x567ce3
        v6 = v10 + -1 - v12;
        v4 = v16;
        while (v6 >= 1) {
            int64_t v17 = v16;
            v7 = v6 / 2;
            v8 = 8 * v7 + v17;
            v9 = v7;
            v10 = v6;
            v11 = v8;
            v12 = v7;
            if (v5 <= (int64_t)*(int32_t *)*(int64_t *)v8) {
                v4 = v17;
                if (v9 == 0) {
                    // break (via goto) -> 0x567ca1
                    goto lab_0x567ca1;
                }
                // 0x567c88
                v14 = v9 >> 1;
                v15 = 8 * v14 + v17;
                v10 = v9;
                v11 = v15;
                v12 = v14;
                while (v5 <= (int64_t)*(int32_t *)*(int64_t *)v15) {
                    // 0x567c9c
                    v13 = v14;
                    v4 = v17;
                    if (v13 == 0) {
                        // break (via goto) -> 0x567ca1
                        goto lab_0x567ca1;
                    }
                    // 0x567c88
                    v14 = v13 >> 1;
                    v15 = 8 * v14 + v17;
                    v10 = v13;
                    v11 = v15;
                    v12 = v14;
                }
            }
            // 0x567ce0
            v16 = v11 + 8;
            v6 = v10 + -1 - v12;
            v4 = v16;
        }
    }
  lab_0x567ca1:;
    int64_t result = 0; // 0x567ca4
    if (v1 != v4) {
        int64_t v18 = *(int64_t *)v4; // 0x567ca6
        result = *(int32_t *)v18 != (int32_t)a2 ? 0 : v18;
    }
    // 0x567cb6
    if (g17 == 0 || pthread_mutex_unlock((int64_t *)mutex) == 0) {
        // 0x567cc7
        return result;
    }
    goto lab_0x567cf7;
  lab_0x567cf7:;
    int64_t v19 = function_20210(8); // 0x567cfc
    *(int64_t *)v19 = (int64_t)&g15;
    _Unwind_Resume((struct _Unwind_Exception *)function_203b0(v19, 0x843278, 0x4f1a60));
    return function_200c0();
}

// Address range: 0x569250 - 0x569356
int64_t function_569250(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x56925e
    uint64_t result = *v1; // 0x56925e
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x569265
    char * v3 = (char *)a3; // 0x569269
    *v3 = 1;
    if (*v2 <= result) {
        // 0x569315
        return result;
    }
    uint32_t v4 = *(int32_t *)result; // 0x569272
    if (v4 == -1) {
        // 0x569315
        return 0;
    }
    int64_t * v5 = (int64_t *)(a2 + 40);
    int64_t v6 = *v1; // 0x569250
    int64_t v7 = v4; // 0x569250
    int64_t v8 = a1; // 0x569250
    int64_t v9 = 0; // 0x569250
    int64_t v10; // 0x569250
    int64_t v11; // 0x569250
    int64_t result2; // 0x569250
    int64_t result3; // 0x569250
    int64_t v12; // 0x569250
    int64_t v13; // 0x569250
    int64_t v14; // 0x569250
    while (true) {
      lab_0x5692d2_2:;
        int64_t v15 = v9;
        int64_t v16 = v6; // 0x5692d2
        int64_t v17 = *v2; // 0x5692d6
        int64_t v18 = v17 - v16; // 0x5692da
        if (v18 < 5) {
            uint64_t v19 = *v5; // 0x569288
            int32_t v20 = v7;
            int64_t v21; // 0x569250
            int64_t v22; // 0x569250
            int64_t v23; // 0x569250
            if (v19 >= *(int64_t *)(a2 + 48)) {
                // 0x569328
                v21 = v17;
                v22 = v16;
                v23 = a2;
                result3 = v15;
                if (v20 == -1) {
                    // break -> 0x56933c
                    break;
                }
            } else {
                // 0x569296
                *(int32_t *)v19 = v20;
                *v5 = v19 + 4;
                v21 = *v2;
                v22 = *v1;
                v23 = v8;
            }
            int64_t v24 = v23;
            result2 = v24;
            if (v22 >= v21) {
                // 0x569315
                return result2;
            }
            int64_t v25 = v15 + 1; // 0x5692a0
            int64_t v26 = v22 + 4; // 0x5692b4
            *v1 = v26;
            result2 = v25;
            if (*(int32_t *)v22 == -1) {
                // 0x569315
                return result2;
            }
            // 0x5692c1
            v10 = v26;
            v14 = v24;
            v11 = v25;
            if (v26 >= *v2) {
                goto lab_0x569307;
            } else {
                uint32_t v27 = *(int32_t *)v26; // 0x5692cb
                v6 = v26;
                v12 = v27;
                v13 = v24;
                v9 = v25;
                result2 = v25;
                if (v27 == -1) {
                    // 0x569315
                    return result2;
                }
                goto lab_0x5692d2;
            }
        } else {
            int64_t v28 = v15 + v16; // 0x5692fb
            int64_t v29 = 5 * v16; // 0x5692fe
            *v1 = v29;
            v10 = v29;
            v14 = a2;
            v11 = v28;
            result3 = v28;
            if (v18 / 4 > v16) {
                // break -> 0x56933c
                break;
            }
            goto lab_0x569307;
        }
    }
    // 0x56933c
    *v3 = 0;
    return result3;
  lab_0x569307:
    // 0x569307
    v6 = v10;
    v12 = v14;
    v13 = a1;
    v9 = v11;
    result2 = v11;
    if ((int32_t)v14 == -1) {
        // 0x569315
        return result2;
    }
    goto lab_0x5692d2;
  lab_0x5692d2:
    // 0x5692d2
    v7 = v12;
    v8 = v13;
    goto lab_0x5692d2_2;
}

// Address range: 0x573140 - 0x573250
int64_t function_573140(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x573140
    int64_t v1; // 0x573140
    int64_t v2 = v1;
    int64_t v3 = __readfsqword(40); // 0x573168
    int64_t v4; // bp-120, 0x573140
    int64_t v5 = (int64_t)&v4; // 0x57318b
    int64_t v6 = v5; // bp-136, 0x57318b
    function_54c860(&v6);
    *(int64_t *)a2 = a2 + 16;
    function_54c6d0(a2, v2, v2 + 4 * v1, a4 & 0xffffffff, (int32_t)a5, &v6, 0);
    *(int64_t *)(a2 + 32) = 0x570470;
    int64_t v7; // bp-88, 0x573140
    if (v2 != (int64_t)&v7) {
        // 0x573216
        function_4eeb50(v2);
    }
    // 0x57321b
    if (v6 != v5) {
        // 0x573228
        function_4eeb50(v6);
    }
    int64_t result = __readfsqword(40) ^ v3; // 0x573231
    if (result == 0) {
        // 0x57323c
        return result;
    }
    // 0x57324b
    __stack_chk_fail();
    return (int64_t)&g19;
}
