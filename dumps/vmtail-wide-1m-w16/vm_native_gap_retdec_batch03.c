/*
 * Targeted RetDec C for native executable gap queue batch 3.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4b60a0-0x4b6264 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48bfc0-0x48c182 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cf380-0x4cf540 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d3930-0x4d3af0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x568c4-0x56a83 rank=- name=- kind=- bytes=- uncovered=-
 *   0x69abc-0x69c7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37c20-0x37dde rank=- name=- kind=- bytes=- uncovered=-
 *   0x66ea2-0x67060 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a3b70-0x4a3d2c rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b7e0-0x56b99c rank=- name=- kind=- bytes=- uncovered=-
 *   0x32360-0x3251a rank=- name=- kind=- bytes=- uncovered=-
 *   0x522540-0x5226f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x555240-0x5553f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50dec0-0x50e078 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5580e0-0x558297 rank=- name=- kind=- bytes=- uncovered=-
 *   0x59faa-0x5a160 rank=- name=- kind=- bytes=- uncovered=-
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
struct timespec;
struct timeval;
struct utsname;
#define F_GETFL 3
#define F_SETFL 4
#define SO_DEBUG 1
#define _SC_PAGESIZE 30
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
int gettimeofday(struct timeval *tv, void *tz);
int64_t sysconf(int name);
int mprotect(void *addr, size_t len, int prot);
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
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_191c8d();
int64_t function_1f01fd();
int64_t function_1ff50();
int64_t function_20550();
int64_t function_21a2d();
int64_t function_24dff();
int64_t function_2508e();
int64_t function_250b0();
int64_t function_2562c();
int64_t function_25a28();
int64_t function_25e90();
int64_t function_2601b();
int64_t function_27bbe();
int64_t function_29c3a();
int64_t function_2c340();
int64_t function_32360();
int64_t function_323d9();
int64_t function_323de();
int64_t function_32403();
int64_t function_324b5();
int64_t function_324d6();
int64_t function_324db();
int64_t function_324e8();
int64_t function_324ef();
int64_t function_324f6();
int64_t function_32513();
int64_t function_32578();
int64_t function_35ef6();
int64_t function_360a0();
int64_t function_36126();
int64_t function_379e0();
int64_t function_37c20();
int64_t function_37c46();
int64_t function_37c63();
int64_t function_37c79();
int64_t function_37c80();
int64_t function_37c93();
int64_t function_37cae();
int64_t function_37cf5();
int64_t function_37cfd();
int64_t function_37d08();
int64_t function_37d20();
int64_t function_37d48();
int64_t function_38bd2();
int64_t function_3b222();
int64_t function_455ee();
int64_t function_46d51();
int64_t function_46d75();
int64_t function_46e15();
int64_t function_48bfb0();
int64_t function_48bfc0();
int64_t function_48c69a();
int64_t function_48c7e6();
int64_t function_48c7ea();
int64_t function_48c7f8();
int64_t function_48c802();
int64_t function_48d50f();
int64_t function_48eb2b();
int64_t function_4901fa();
int64_t function_49a730();
int64_t function_49e770();
int64_t function_49e960();
int64_t function_4a3b70();
int64_t function_4a8c6();
int64_t function_4a93a();
int64_t function_4adc80();
int64_t function_4add10();
int64_t function_4add30();
int64_t function_4aec20();
int64_t function_4afe70();
int64_t function_4aff10();
int64_t function_4b60a0();
int64_t function_4cf380();
int64_t function_4d3530();
int64_t function_4d3930();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_508450();
int64_t function_5088b0();
int64_t function_50ab00();
int64_t function_50b1c0();
int64_t function_50d1e0();
int64_t function_50d900();
int64_t function_50dec0();
int64_t function_519810();
int64_t function_522120();
int64_t function_522540();
int64_t function_542590();
int64_t function_5509a0();
int64_t function_550a60();
int64_t function_5515b0();
int64_t function_552550();
int64_t function_554b00();
int64_t function_554e20();
int64_t function_555240();
int64_t function_5574b0();
int64_t function_557b60();
int64_t function_5580e0();
int64_t function_5659d0();
int64_t function_565f30();
int64_t function_566180();
int64_t function_567c30();
int64_t function_567d40();
int64_t function_568c4();
int64_t function_56b7e0();
int64_t function_59faa();
int64_t function_5f453();
int64_t function_65c24();
int64_t function_66c36();
int64_t function_66ea2();
int64_t function_67060();
int64_t function_68e3e();
int64_t function_69034();
int64_t function_6903c();
int64_t function_69166();
int64_t function_69802();
int64_t function_69a4e();
int64_t function_69abc();
int64_t function_6a82f();
int64_t function_6a892();
int64_t function_ffffffff84d949f8();

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

// Address range: 0x32403 - 0x324b4
int64_t function_32403(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32403
    __asm_int(45);
    int64_t result; // 0x32403
    // 0x3240e
    return result;
    int64_t v1 = a3 & -256 | 12; // 0x32409
    int64_t v2; // 0x32403
    int64_t v3 = (v2 ^ a2) & 0xffffffff; // 0x32437
    unsigned char v4 = *(char *)(v2 % 256 + v2); // 0x32439
    char * v5 = (char *)(a1 - 42); // 0x3243c
    *v5 = 128 * (char)(v4 < 90) | *v5 / 2;
    int64_t v6 = a4 & 0xffffffff; // 0x3243f
    int16_t v7 = v1; // 0x32442
    __asm_outsb(v7, *(char *)v3);
    char * v8 = (char *)(v6 + 0x367ecfb1); // 0x32444
    char v9 = v2; // 0x32444
    *v8 = *v8 | v9;
    char * v10 = (char *)(v3 + 0x62019300); // 0x3244a
    unsigned char v11 = *v10 | (char)a4; // 0x3244a
    result = v2 & -256 | (int64_t)(v4 - 90);
    if (v11 >= 0) {
      lab_0x3240e:
        // 0x3240e
        return result;
    }
    int32_t * v12 = (int32_t *)v1;
    int64_t v13 = a4 & -256 | (int64_t)v11;
    int32_t v14 = __asm_in(v7); // 0x3249e
    *v12 = *v12 - v14;
    char v15 = *(char *)-0x5f4050a1 | v11; // 0x324a8
    *(char *)-0x5f4050a1 = v15;
    while (v15 >= 0 == (v15 != 0)) {
        // 0x32444
        *v8 = *v8 | v9;
        unsigned char v16 = *v10 | (char)v13; // 0x3244a
        if (v16 >= 0) {
            // 0x32444
            result = v14;
            return result;
        }
        v13 = v13 & -256 | (int64_t)v16;
        v14 = __asm_in(v7);
        *v12 = *v12 - v14;
        v15 = *(char *)-0x5f4050a1 | v16;
        *(char *)-0x5f4050a1 = v15;
    }
    // 0x324b0
    *(int32_t *)v6 = *(int32_t *)v3;
    return v13 & 0xffffffff;
}

// Address range: 0x324b5 - 0x324b8
int64_t function_324b5(void) {
    // 0x324b5
    int64_t result; // 0x324b5
    __asm_out(65, (char)result);
    return result;
}

// Address range: 0x324d6 - 0x324d7
int64_t function_324d6(void) {
    // 0x324d6
    int64_t result; // 0x324d6
    return result;
}

// Address range: 0x324db - 0x324de
int64_t function_324db(int64_t a1) {
    // 0x324db
    int64_t result; // 0x324db
    return result;
}

// Address range: 0x324e8 - 0x324ef
int64_t function_324e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x324e8
    int64_t v1; // 0x324e8
    uint64_t result = v1;
    bool v2; // 0x324e8
    if (a4 == 1 || v2) {
        // 0x324ea
        *(char *)a2 = (char)(result / 256 & a2);
        return result;
    }
    // 0x3254f
    return result;
}

// Address range: 0x324ef - 0x324f2
int64_t function_324ef(int64_t a1) {
    // 0x324ef
    int64_t result; // 0x324ef
    return result;
}

// Address range: 0x324f6 - 0x324fc
int64_t function_324f6(int64_t a1, int64_t a2) {
    // 0x324f6
    int64_t v1; // 0x324f6
    if (llvm_ctpop_i8((char)v1 - (char)a2) % 2 != 0) {
        function_324d6();
    }
    // 0x324fa
    return function_32578();
}

// Address range: 0x32513 - 0x32514
int64_t function_32513(int64_t a1) {
    // 0x32513
    int64_t result; // 0x32513
    return result;
}

// Address range: 0x37c20 - 0x37c46
int64_t function_37c20(int64_t a1) {
    // 0x37c20
    __readfsqword(40);
    return function_1f01fd();
}

// Address range: 0x37c46 - 0x37c4f
int64_t function_37c46(int64_t a1, int64_t a2) {
    // 0x37c46
    int64_t v1; // 0x37c46
    bool v2; // 0x37c46
    return function_37c79(a1, (v2 ? -4 : 4) + a2, v1);
}

// Address range: 0x37c63 - 0x37c6a
int64_t function_37c63(void) {
    // 0x37c63
    return function_ffffffff84d949f8();
}

// Address range: 0x37c79 - 0x37c7f
int64_t function_37c79(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 - 0x5d4bfae8); // 0x37c79
    *v1 = *v1 + (char)a3;
    int64_t result; // 0x37c79
    return result;
}

// Address range: 0x37c80 - 0x37c89
int64_t function_37c80(void) {
    // 0x37c80
    int64_t v1; // 0x37c80
    return (int64_t)&v1;
}

// Address range: 0x37c93 - 0x37ca2
int64_t function_37c93(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 0x8451190); // 0x37c9b
    int64_t result; // 0x37c93
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x37cae - 0x37cf5
int64_t function_37cae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x37cae
    int64_t v1; // 0x37cae
    *(char *)0x50f2863fc7175f6f = (char)v1;
    int64_t result = 0; // 0x37ce9
    if (v1 != __readfsqword(40)) {
        // 0x37ceb
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x37cf0
    return result;
}

// Address range: 0x37cf5 - 0x37cfd
int64_t function_37cf5(int64_t a1, int64_t a2) {
    // 0x37cf5
    return function_379e0();
}

// Address range: 0x37cfd - 0x37d07
int64_t function_37cfd(int64_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a3 == 1) {
        // 0x37d01
        *(int64_t *)a1 = a2;
    }
    // 0x37d04
    return 0;
}

// Address range: 0x37d08 - 0x37d1f
int64_t function_37d08(int64_t a1) {
    // 0x37d08
    *(int64_t *)(a1 + 24) = 0x37cf5;
    *(int64_t *)(a1 + 16) = 0x37cfd;
    return 0x37cfd;
}

// Address range: 0x37d20 - 0x37d47
int64_t function_37d20(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    *v1 = result - 1;
    if (result >= 0 == (result != 0)) {
        // 0x37d46
        return result;
    }
    // 0x37d41
    return function_4eeb50(a1);
}

// Address range: 0x37d48 - 0x37ddb
int64_t function_37d48(uint64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x37d48
    uint32_t v2 = *v1; // 0x37d48
    if (v2 >= 0) {
        // 0x37d4f
        if ((int64_t)g6 != a1) {
            // 0x37d58
            *v1 = v2 + 1;
        }
        // 0x37d6e
        return a1 + 24;
    }
    uint64_t v3 = *(int64_t *)(a1 + 8); // 0x37d89
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x37d92
        function_542590("basic_string::_S_create");
    }
    int64_t v4 = a1; // 0x37da1
    if (v3 < a1) {
        uint64_t v5 = 2 * v3; // 0x37da3
        v4 = v5 > a1 ? v5 : a1;
    }
    uint64_t v6 = v4 + 57; // 0x37dae
    return v6 <= (int64_t)&g1 | v3 >= v4 ? v6 : 0x3ffffffffffffff9;
}

// Address range: 0x568c4 - 0x56a83
int64_t function_568c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // bp-192, 0x568e6
    int64_t v2 = __readfsqword(40); // 0x568f6
    function_35ef6();
    int64_t v3; // bp-160, 0x568c4
    char * file_path; // bp-168, 0x568c4
    function_48eb2b((int64_t *)&file_path, &v3);
    function_29c3a(&v3);
    struct _IO_FILE * file = fopen(file_path, "rb"); // 0x5692f
    int64_t v4 = 0; // 0x56937
    int64_t v5; // 0x568c4
    int64_t v6; // 0x568c4
    int64_t v7; // bp-152, 0x568c4
    int64_t v8; // 0x5694a
    if (file == NULL) {
        goto lab_0x56a1e;
    } else {
        // 0x5693d
        v8 = function_4efd30(0x1000000);
        __asm_rep_stosd_memset((char *)v8, 0, 0x400000);
        int64_t v9 = function_455ee(&v1, 8, 0, 0); // 0x56972
        function_46d51(&v7);
        function_46d75(&v7, &v1, 8);
        v6 = 0;
        v5 = v9;
        if (a2 == 0) {
            goto lab_0x569e3;
        } else {
            int64_t * data = (int64_t *)v8; // 0x569b2
            int64_t v10 = v9; // 0x568c4
            uint64_t v11 = a2;
            int32_t items_read = fread(data, 1, (int32_t)(v11 < 0x1000000 ? v11 : 0x1000000), file); // 0x569b2
            v4 = 0;
            while (items_read != 0) {
                int64_t v12 = items_read; // 0x569b2
                int64_t v13 = function_455ee(data, v12, (int32_t)v10, (int64_t)file); // 0x569c8
                int64_t v14 = v11 - v12; // 0x569d9
                function_46d75(&v7, data, v12);
                v10 = v13;
                if (v14 == 0) {
                    // 0x56992
                    v6 = v12 & -256;
                    v5 = v13;
                    goto lab_0x569e3;
                }
                v11 = v14;
                items_read = fread(data, 1, (int32_t)(v11 < 0x1000000 ? v11 : 0x1000000), file);
                v4 = 0;
            }
            goto lab_0x56a0e;
        }
    }
  lab_0x56a1e:;
    int64_t v15 = (int64_t)file_path; // 0x56a1e
    int64_t v16 = v15 - 24; // 0x56a23
    int64_t v17 = v15; // 0x56a2e
    if (v16 != (int64_t)g6) {
        int32_t * v18 = (int32_t *)(v15 - 8);
        int32_t v19 = *v18;
        *v18 = v19 - 1;
        v17 = v15;
        if (v19 >= 0 != v19 != 0) {
            // 0x56a51
            v17 = function_4eeb50(v16);
        }
    }
    int64_t result = v17 & -256 | v4; // 0x56a6a
    if (v2 != __readfsqword(40)) {
        // 0x56a6c
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x56a71
    return result;
  lab_0x569e3:
    // 0x569e3
    v4 = 0;
    if (v1 != 0) {
        // 0x569f9
        *(int32_t *)a3 = (int32_t)v5;
        function_46e15(&v7, a4, v6 | (int64_t)(v1 != 0));
        v4 = 1;
    }
    goto lab_0x56a0e;
  lab_0x56a0e:
    // 0x56a0e
    fclose(file);
    function_4eeb50(v8);
    goto lab_0x56a1e;
}

// Address range: 0x59faa - 0x5a160
int64_t function_59faa(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 8; // 0x59fae
    if (a2 != 0) {
        // 0x59fcd
        if (*(char *)&g7 == 0) {
            // 0x59fda
            if ((int32_t)function_20550(&g7) != 0) {
                // 0x59fea
                g8 = 0;
                g9 = 0;
                g10 = 0;
                function_1ff50(&g7);
                __cxa_atexit((void (*)(int64_t *))0x2513a, &g8, (int64_t *)0x849800);
            }
        }
        int64_t v2 = function_69034(v1); // 0x5a038
        int64_t * v3 = (int64_t *)(v2 + 8); // 0x5a03d
        int64_t v4 = *v3; // 0x5a03d
        int64_t * v5 = (int64_t *)v2; // 0x5a041
        int64_t v6 = *v5; // 0x5a041
        int64_t v7 = v4 - v6; // 0x5a041
        int64_t v8 = v4; // 0x5a047
        int64_t v9 = v6; // 0x5a047
        int64_t v10 = 0; // 0x5a047
        if (v7 != 0) {
            // 0x5a049
            v10 = function_4efd30(v7);
            v8 = *v3;
            v9 = *v5;
        }
        uint64_t v11 = v8 - v9; // 0x5a059
        int64_t v12; // 0x59faa
        if (v11 == 0) {
            // 0x5a079
            g9 = g8;
            v12 = g8;
        } else {
            // 0x5a085
            memmove((int64_t *)v10, (int64_t *)v9, (int32_t)v11);
            int64_t v13 = v11 + v10; // 0x5a069
            int64_t v14 = g8; // 0x5a06d
            if (g10 - v14 >= v11) {
                uint64_t v15 = g9 - v14; // 0x5a0df
                int64_t v16 = v14; // 0x5a0e5
                int64_t v17 = v10; // 0x5a0e5
                if (v15 < v11) {
                    // 0x5a0ef
                    v17 = v15 + v10;
                    function_21a2d(v10, v17, v14);
                    v16 = g9;
                }
                // 0x5a10b
                g9 = function_21a2d(v17, v13, v16);
                v12 = g8;
            } else {
                int64_t v18 = function_4efd30(v11); // 0x5a097
                function_21a2d(v10, v13, v18);
                int64_t v19 = g8; // 0x5a0ad
                if (v19 != 0) {
                    // 0x5a0b9
                    function_4eeb50(v19);
                }
                int64_t v20 = v18 + v11; // 0x5a0be
                g8 = v18;
                g9 = v20;
                g10 = v20;
                v12 = v18;
            }
        }
        // 0x5a117
        *(int64_t *)a2 = v12;
        if (v10 != 0) {
            // 0x5a126
            function_4eeb50(v10);
        }
    }
    if (a3 != 0) {
        int64_t v21 = function_69034(v1); // 0x5a138
        int64_t v22 = *(int64_t *)v21; // 0x5a141
        *(int32_t *)a3 = (int32_t)(*(int64_t *)(v21 + 8) - v22);
    }
    // 0x5a147
    return function_6903c(v1);
}

// Address range: 0x66ea2 - 0x67060
int64_t function_66ea2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __readfsqword(40); // bp-64, 0x66ec8
    int32_t v2 = 1; // bp-76, 0x66edd
    int64_t * v3 = (int64_t *)(a6 + 16); // 0x66eea
    int64_t * v4 = (int64_t *)(a6 + 8);
    if (*v3 - a6 <= (int64_t)&g4) {
        int64_t v5 = *v4; // 0x66ef9
        int64_t v6 = function_4efd30((int64_t)&g5); // 0x66f02
        function_2601b(a6, v5, v6);
        function_66c36(a6);
        *(int64_t *)a6 = v6;
        *v4 = v5 - a6 + v6;
        *v3 = v6 + (int64_t)&g5;
    }
    // 0x66f3f
    function_65c24(a6, &v2, &v1);
    int64_t v7; // bp-88, 0x66ea2
    function_4901fa(&v7);
    int64_t v8 = v7; // 0x66f63
    int32_t v9 = (int32_t)*(int64_t *)(v8 - 24); // bp-104, 0x66f7c
    int64_t v10; // bp-100, 0x66ea2
    function_36126(a6, *v4, (int64_t *)&v9, &v10);
    int64_t v11 = *v4; // 0x66f89
    function_36126(a6, v11, (int64_t *)v8, (int64_t *)(v8 + (int64_t)v9));
    v10 = 16;
    int64_t v12; // bp-96, 0x66ea2
    function_36126(a6, *v4, &v10, &v12);
    function_36126(a6, *v4, (int64_t *)a1, (int64_t *)(a1 + 16));
    int64_t * v13 = (int64_t *)(a5 + 8); // 0x66fd0
    v12 = 0x100000000 * (*v13 - a5) >> 32;
    int64_t v14; // bp-92, 0x66ea2
    function_36126(a6, *v4, &v12, &v14);
    function_67060(a6, *v4, a5, *v13);
    function_36126(a6, *v4, (int64_t *)a2, (int64_t *)(a2 + 4));
    v14 = 0x100000000 * (int64_t)&v14 >> 32;
    function_36126(a6, *v4, &v14, &v7);
    function_2508e(&v7);
    int64_t result = 0; // 0x6704a
    if (v1 != __readfsqword(40)) {
        // 0x6704c
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x67051
    return result;
}

// Address range: 0x69abc - 0x69c7b
int64_t function_69abc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x69aeb
    int64_t v2; // bp-104, 0x69abc
    function_6a82f(&v2);
    function_5f453(a1, &v2, " HTTP/1.1\r\n");
    function_2508e(&v2);
    int64_t v3; // bp-96, 0x69abc
    function_48d50f(&v3, 32, "%i", 0);
    function_69166(&v2, &v3);
    int64_t v4; // bp-112, 0x69abc
    function_69166(&v4, (int64_t *)"Content-Length");
    function_69a4e(a2, &v4, &v2);
    function_2508e(&v4);
    function_2508e(&v2);
    function_69802(&v2, a2, a3 + 16);
    function_4a8c6(a1, &v2);
    function_2508e(&v2);
    function_4a93a(a1, "\r\n");
    int64_t v5 = *(int64_t *)(a4 + 8); // 0x69baa
    if (v5 != 0) {
        int64_t v6 = function_6a892(a1); // 0x69bc2
        int64_t v7 = function_68e3e(v5, 0); // 0x69bcf
        int64_t v8 = v7 + 24; // 0x69bd7
        int64_t v9 = 0;
        *(char *)(v9 + v8) = *(char *)v9;
        int64_t v10 = v9 + 1; // 0x69beb
        while (v5 != v10) {
            // 0x69be2
            v9 = v10;
            *(char *)(v9 + v8) = *(char *)v9;
            v10 = v9 + 1;
        }
        // 0x69bf3
        function_2562c(v7, v5, v10);
        int64_t v11 = *(int64_t *)v7; // 0x69bfe
        v2 = v8;
        function_3b222(a1, 0, v11, "basic_string::_M_replace_dispatch");
        function_25e90(a1, v6 - a1, 0, v11);
        if (v11 != 0) {
            // 0x69c38
            function_25a28(v6, v8, v11);
        }
        // 0x69c4c
        function_2508e(&v2);
    }
    int64_t result = a1; // 0x69c65
    if (v1 != __readfsqword(40)) {
        // 0x69c67
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x69c6c
    return result;
}

// Address range: 0x48bfc0 - 0x48c182
int64_t function_48bfc0(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x48bfce
    int64_t v2; // bp-88, 0x48bfc0
    int64_t v3 = function_48bfb0(&v2); // 0x48bfe6
    int64_t v4; // bp-21, 0x48bfc0
    function_48c69a(&v4);
    int32_t v5 = *(int32_t *)v3; // 0x48c04f
    *(int32_t *)&v4 = v5 ^ ((int32_t)"_create" + 0x104fbd91 >> 2 | 0x40000000 * ((int32_t)"_create" + 0x104fbd91));
    char v6 = *(char *)(v3 + 4); // 0x48c080
    *(char *)((int64_t)&v4 | 4) = v6 ^ (char)(0x41c64e6d * ((int32_t)"_create" + 0x104fbd91 >> 2 | 0x40000000 * ((int32_t)"_create" + 0x104fbd91)) + (int32_t)"_create" >> 2);
    int64_t v7; // bp-104, 0x48bfc0
    int64_t v8; // bp-80, 0x48bfc0
    function_250b0(&v7, function_48c7e6(&v4), &v8);
    function_24dff(&v4, 5);
    int64_t v9 = a2 + 40; // 0x48c0cd
    uint64_t v10 = function_2c340(v9); // 0x48c0d4
    int64_t v11 = (int64_t)&v7; // 0x48c0e1
    int64_t v12 = 0; // 0x48c0f1
    if (v10 >= function_2c340(v11)) {
        // 0x48c0fa
        function_48c7ea(&v8, v9, v9);
        function_48c7f8(&v2, &v7, &v7);
        int64_t v13; // bp-96, 0x48bfc0
        function_48c7ea(&v13, v11, v11);
        int64_t v14 = function_48c802(&v13, &v2, &v8, &v2); // 0x48c151
        v12 = v14 & 0xffffffff;
    }
    // 0x48c158
    function_2508e(&v7);
    int64_t result = v12; // 0x48c175
    if (v1 != __readfsqword(40)) {
        // 0x48c177
        __stack_chk_fail();
        result = (int64_t)&g15;
    }
    // 0x48c17c
    return result;
}

// Address range: 0x4a3b70 - 0x4a3d2c
int64_t function_4a3b70(int64_t a1, int64_t result, uint64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 120); // 0x4a3b81
    int64_t v2; // 0x4a3b70
    if (*v1 == 0) {
        // 0x4a3ca8
        if (*(int64_t *)(a1 + 296) == 0 || *(int64_t *)(a1 + 312) == 0 || *(int64_t *)(a1 + 320) == 0 || *(int64_t *)(a1 + 304) == 0) {
            // 0x4a3cd4
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", 3219, "got no pre-shared key", v2, v2, v2, v2);
            // 0x4a3c02
            return 0xffff8a00;
        }
    }
    uint64_t v3 = result + 2; // 0x4a3b90
    if (v3 > a3) {
        // 0x4a3c02
        return result;
    }
    int64_t * v4 = (int64_t *)result; // 0x4a3ba4
    *v4 = v3;
    int64_t v5 = 256 * result & 0xff00 | (int64_t)*(char *)(result + 1); // 0x4a3bab
    if (v5 - 1 > (int64_t)&g14) {
        // 0x4a3d00
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g12, "bad client key exchange message", v3, v2, v2, v2);
        // 0x4a3c02
        return 0xffff8400;
    }
    int64_t v6 = v5 + v3; // 0x4a3bc1
    if (v6 > a3) {
        // 0x4a3d00
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t)&g12, "bad client key exchange message", v3, v2, v2, v2);
        // 0x4a3c02
        return 0xffff8400;
    }
    // 0x4a3bce
    int64_t v7; // 0x4a3c45
    if (*v1 != 0) {
        if ((int32_t)result == 0) {
            // 0x4a3bfc
            *v4 = v5 + a1;
            // 0x4a3c02
            return 0;
        }
        // 0x4a3c14
        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g13, "Unknown PSK identity");
        v7 = function_49a730(a1, 2, 115);
        return (int32_t)v7 == 0 ? 0xffff9380 : v7 & 0xffffffff;
    }
    uint64_t v8 = *(int64_t *)(a1 + 320); // 0x4a3c60
    if (v8 != v5) {
        // 0x4a3c14
        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g13, "Unknown PSK identity");
        v7 = function_49a730(a1, 2, 115);
        return (int32_t)v7 == 0 ? 0xffff9380 : v7 & 0xffffffff;
    }
    int64_t v9 = 0;
    char v10 = *(char *)(v9 + *(int64_t *)(a1 + 312)); // 0x4a3c85
    int64_t v11 = v9 + 1; // 0x4a3c89
    int64_t v12 = (int64_t)(v10 ^ *(char *)(v9 + v3)); // 0x4a3c8d
    while (v8 > v11) {
        // 0x4a3c80
        v9 = v11;
        v10 = *(char *)(v9 + *(int64_t *)(a1 + 312));
        v11 = v9 + 1;
        v12 |= (int64_t)(v10 ^ *(char *)(v9 + v3));
    }
    // 0x4a3c94
    if ((char)v12 == 0) {
        // 0x4a3bfc
        *v4 = v6;
        // 0x4a3c02
        return 0;
    }
    // 0x4a3c14
    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g13, "Unknown PSK identity");
    v7 = function_49a730(a1, 2, 115);
    return (int32_t)v7 == 0 ? 0xffff9380 : v7 & 0xffffffff;
}

// Address range: 0x4b60a0 - 0x4b6263
int64_t function_4b60a0(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x4b60a0
    if (a3 >= 385) {
        // 0x4b6256
        return 0xffffffc8;
    }
    // 0x4b60cb
    int64_t v1; // bp-872, 0x4b60a0
    int64_t v2 = (int64_t)&v1; // 0x4b60b2
    int64_t v3; // bp-472, 0x4b60a0
    __asm_rep_stosq_memset((char *)&v3, 0, 52);
    v1 = a2;
    int64_t v4; // bp-760, 0x4b60a0
    function_4adc80(&v4);
    int64_t v5; // bp-448, 0x4b60a0
    memcpy(&v5, (int64_t *)v1, (int32_t)a3);
    *(char *)(a3 + 424 + v2) = -128;
    int64_t v6 = 0;
    *(char *)(v2 + 32 + v6) = (char)v6;
    int64_t v7 = v6 + 1; // 0x4b6134
    while (v7 != 32) {
        // 0x4b6130
        v6 = v7;
        *(char *)(v2 + 32 + v6) = (char)v6;
        v7 = v6 + 1;
    }
    // 0x4b613e
    int64_t v8; // bp-840, 0x4b60a0
    function_4add30(&v4, &v8, 256);
    int64_t v9 = v2 + 16; // 0x4b6191
    int64_t v10; // bp-808, 0x4b60a0
    int64_t v11 = (int64_t)&v10; // 0x4b6159
    char v12 = 0; // bp-856, 0x4b615e
    int64_t v13 = (int64_t)&v3; // 0x4b6178
    uint64_t v14 = a3 + 25;
    *(char *)v9 = *(char *)v13;
    char * v15; // 0x4b60a0
    for (int64_t i = 1; i < 16; i++) {
        // 0x4b6188
        v15 = (char *)(i + v9);
        *v15 = *(char *)(i + v13) ^ *v15;
    }
    int64_t v16 = v14 - (v14 < 16 ? v14 : 16); // 0x4b61ba
    function_4aec20(&v4, 1, (int64_t *)&v12, (int64_t *)&v12);
    v13 += 16;
    while (v16 != 0) {
        // 0x4b6180
        v14 = v16;
        *(char *)v9 = *(char *)v13 ^ v12;
        for (int64_t i = 1; i < 16; i++) {
            // 0x4b6188
            v15 = (char *)(i + v9);
            *v15 = *(char *)(i + v13) ^ *v15;
        }
        // 0x4b619f
        v16 = v14 - (v14 < 16 ? v14 : 16);
        function_4aec20(&v4, 1, (int64_t *)&v12, (int64_t *)&v12);
        v13 += 16;
    }
    // 0x4b61d1
    *(int64_t *)v11 = (int64_t)v12;
    *(int64_t *)(v11 + 8) = 0;
    v11 += 16;
    while (v11 != (int64_t)&v4) {
        // 0x4b615e
        v12 = 0;
        v13 = (int64_t)&v3;
        v14 = a3 + 25;
        *(char *)v9 = *(char *)v13;
        for (int64_t i = 1; i < 16; i++) {
            // 0x4b6188
            v15 = (char *)(i + v9);
            *v15 = *(char *)(i + v13) ^ *v15;
        }
        // 0x4b619f
        v16 = v14 - (v14 < 16 ? v14 : 16);
        function_4aec20(&v4, 1, (int64_t *)&v12, (int64_t *)&v12);
        v13 += 16;
        while (v16 != 0) {
            // 0x4b6180
            v14 = v16;
            *(char *)v9 = *(char *)v13 ^ v12;
            for (int64_t i = 1; i < 16; i++) {
                // 0x4b6188
                v15 = (char *)(i + v9);
                *v15 = *(char *)(i + v13) ^ *v15;
            }
            // 0x4b619f
            v16 = v14 - (v14 < 16 ? v14 : 16);
            function_4aec20(&v4, 1, (int64_t *)&v12, (int64_t *)&v12);
            v13 += 16;
        }
        // 0x4b61d1
        *(int64_t *)v11 = (int64_t)v12;
        *(int64_t *)(v11 + 8) = 0;
        v11 += 16;
    }
    // 0x4b61f7
    function_4add30(&v4, &v10, 256);
    int64_t v17 = a1; // 0x4b621a
    int64_t v18; // bp-776, 0x4b60a0
    function_4aec20(&v4, 1, &v18, &v18);
    *(int64_t *)v17 = v18;
    while (v17 != a1 + 32) {
        // 0x4b621e
        v17 += 16;
        function_4aec20(&v4, 1, &v18, &v18);
        *(int64_t *)v17 = v18;
    }
    // 0x4b624a
    function_4add10(&v4);
    // 0x4b6256
    return 0;
}

// Address range: 0x4cf380 - 0x4cf53d
// Used cryptographic patterns:
//  - B64EncodeTable (8-bit)
int64_t function_4cf380(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if (a5 == 0) {
        // 0x4cf4d8
        *(int64_t *)a3 = 0;
        return 0;
    }
    // 0x4cf547
    return 0;
    while (false) {
        // continue -> 0x4cf3f8
    }
    // 0x4cf470
    return 0;
    // 0x4cf470
    return 0;
}

// Address range: 0x4d3930 - 0x4d3af0
int64_t function_4d3930(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int32_t v1 = 0; // bp-364, 0x4d395a
    if (a4 >= 129) {
        // 0x4d3a58
        return 0xffffe080;
    }
    // 0x4d3968
    int64_t v2; // bp-328, 0x4d3930
    int64_t v3 = (int64_t)&v2; // 0x4d3968
    int64_t v4 = 0; // bp-352, 0x4d3980
    int64_t v5 = a1 + 16; // 0x4d3995
    __asm_rep_stosq_memset((char *)&v2, 0, 32);
    int64_t * v6 = (int64_t *)v5; // 0x4d39a2
    bool v7; // 0x4d3930
    *(int16_t *)((v7 ? -256 : 256) + v3) = 0;
    if ((int32_t)a1 != 48) {
        // 0x4d3a58
        return 0xffffe11e;
    }
    int64_t v8 = *(int64_t *)(a1 + 8) + *v6; // 0x4d39a7
    int64_t v9 = function_4afe70(v5, v8, &v4, 4); // 0x4d39d3
    int64_t v10 = 0; // 0x4d39df
    int64_t v11 = v9; // 0x4d39df
    if ((int32_t)v9 == 0) {
        // 0x4d3a6a
        v10 = *v6;
        *v6 = v4 + v10;
        v11 = function_4aff10(v5, v8, &v1);
        if ((int32_t)v11 != 0) {
            goto lab_0x4d39e5;
        } else {
            // 0x4d3a96
            if (v8 != *v6) {
                // 0x4d3a58
                return 0xffffe11a;
            }
            goto lab_0x4d39ee;
        }
    } else {
        goto lab_0x4d39e5;
    }
  lab_0x4d39e5:;
    int64_t v12 = v11 - (int64_t)(int32_t)&g2; // 0x4d39e5
    if ((int32_t)v12 != 0) {
        // 0x4d3a58
        return v12 & 0xffffffff;
    }
    goto lab_0x4d39ee;
  lab_0x4d39ee:
    // 0x4d39ee
    if (a4 != 0) {
        int64_t v13 = 0;
        *(char *)(2 * v13 + (v3 | 1)) = *(char *)(v13 + a3);
        int64_t v14 = v13 + 1; // 0x4d3a02
        while (v14 != a4) {
            // 0x4d39f8
            v13 = v14;
            *(char *)(2 * v13 + (v3 | 1)) = *(char *)(v13 + a3);
            v14 = v13 + 1;
        }
    }
    int64_t v15 = 2 * a4 + 2; // 0x4d3a0f
    int64_t v16 = 0x100000000 * a2 >> 32; // 0x4d3a3a
    int64_t result = function_4d3530(a5, a6, &v2, v15, v10, v4, v16, 1, (int64_t)v1); // 0x4d3a3d
    if ((int32_t)result != 0) {
        // 0x4d3a58
        return result;
    }
    int64_t result2 = result; // 0x4d3a4f
    if (a7 != 0 && a8 != 0) {
        int64_t v17 = function_4d3530(a7, a8, &v2, v15, v10, v4, v16, 2, (int64_t)v1); // 0x4d3ae6
        result2 = v17;
    }
    // 0x4d3a58
    return result2;
}

// Address range: 0x50dec0 - 0x50e078
// From class:    std::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_50dec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x50dec0
    __readfsqword(40);
    function_5659d0();
    int64_t v1; // bp-80, 0x50dec0
    function_50ab00(&v1);
    int64_t v2 = function_565f30((int64_t)&v1, a5 + 208); // bp-72, 0x50df3f
    int64_t v3; // bp-224, 0x50dec0
    int64_t v4 = function_5088b0(&v2, &v3, 64, "%.*Lf", 0); // 0x50df53
    int64_t v5 = v4; // 0x50df5d
    if ((int32_t)v4 >= 64) {
        int64_t v6 = v4 + 1; // 0x50df5f
        int64_t v7; // bp-232, 0x50dec0
        int64_t v8 = (int64_t)&v7 - ((0x100000000 * v6 >> 32) + 30 & -16); // 0x50df6d
        int64_t v9 = function_565f30(a8, a7); // 0x50df7c
        *(int64_t *)(v8 - 8) = a8;
        *(int64_t *)(v8 - 16) = a7;
        v2 = v9;
        v5 = function_5088b0(&v2, (int64_t *)(v8 + 15 & -16), v6 & 0xffffffff, "%.*Lf", 0);
    }
    // 0x50dfa6
    int64_t v10; // bp-81, 0x50dec0
    function_5509a0(&v2, 0x100000000 * v5 >> 32, 0, &v10);
    if (*(int32_t *)(v2 - 8) >= 0) {
        // 0x50dfc8
        function_550a60(&v2);
    }
    int32_t v11 = a6;
    int64_t result; // 0x50dec0
    if ((char)a4 == 0) {
        // 0x50e058
        result = function_50d900(a1, a2, a3, a5, v11, &v2);
    } else {
        // 0x50e006
        result = function_50d1e0(a1, a2, a3, a5, v11, &v2);
    }
    int64_t v12 = v2 - 24; // 0x50e00f
    if (v12 != *(int64_t *)0x848c20) {
        // 0x50e060
        function_508450(v12, &v10);
        return result;
    }
    // 0x50e01c
    function_566180(&v1, v2);
    __readfsqword(40);
    return result;
}

// Address range: 0x522540 - 0x5226f9
// From class:    std::__cxx11::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_522540(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x522540
    __readfsqword(40);
    function_554b00(a6 + 208);
    int32_t v1 = 0; // bp-68, 0x522589
    int32_t v2; // bp-72, 0x522540
    int64_t result2 = function_522120(a1, a2, a3, a4, a5, (int64_t *)&v2, 0, &g3, 4, a6, &v1); // 0x5225c1
    if (v1 != 0) {
        int32_t * v3 = (int32_t *)a7; // 0x522668
        *v3 = *v3 | 4;
    } else {
        int32_t v4 = v2; // 0x5225f4
        *(int32_t *)(a8 + 20) = (v4 < 0 ? 100 : -1900) + v4;
    }
    if (result2 == 0) {
        goto lab_0x5226e0;
    } else {
        if ((int32_t)a3 == -1) {
            uint64_t v5 = *(int64_t *)(result2 + 24); // 0x522674
            if ((int32_t)result2 == -1 == *(int64_t *)(result2 + 16) >= v5) {
                goto lab_0x5226e0;
            } else {
                goto lab_0x52261a;
            }
        } else {
            goto lab_0x52261a;
        }
    }
  lab_0x5226e0:;
    int64_t result = 0; // 0x5226e5
    if (a4 != 0) {
        // 0x5226eb
        if ((int32_t)a5 == -1) {
            // 0x5226f5
            return *(int64_t *)(a4 + 24);
        }
        // 0x522629
        __readfsqword(40);
        return 0;
    }
    goto lab_0x522625;
  lab_0x522625:;
    int32_t * v6 = (int32_t *)a7; // 0x522625
    *v6 = *v6 | 2;
    // 0x522629
    __readfsqword(40);
    return result;
  lab_0x52261a:
    // 0x52261a
    if (a4 == 0) {
        // 0x522629
        __readfsqword(40);
        return result2;
    }
    // 0x52261f
    result = result2;
    if ((int32_t)a5 == -1) {
        // 0x522680
        result = result2;
        if (*(int64_t *)(a4 + 16) >= *(int64_t *)(a4 + 24)) {
            // 0x52268d
            result = result2;
            if ((int32_t)result2 == -1) {
                // 0x522629
                __readfsqword(40);
                return result2;
            }
        }
    }
    goto lab_0x522625;
}

// Address range: 0x555240 - 0x5553f9
// From class:    std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_555240(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x555240
    __readfsqword(40);
    function_554b00(a6 + 208);
    int32_t v1 = 0; // bp-68, 0x555289
    int32_t v2; // bp-72, 0x555240
    int64_t result2 = function_554e20(a1, a2, a3, a4, a5, (int64_t *)&v2, 0, &g3, 4, a6, &v1); // 0x5552c1
    if (v1 != 0) {
        int32_t * v3 = (int32_t *)a7; // 0x555368
        *v3 = *v3 | 4;
    } else {
        int32_t v4 = v2; // 0x5552f4
        *(int32_t *)(a8 + 20) = (v4 < 0 ? 100 : -1900) + v4;
    }
    if (result2 == 0) {
        goto lab_0x5553e0;
    } else {
        if ((int32_t)a3 == -1) {
            uint64_t v5 = *(int64_t *)(result2 + 24); // 0x555374
            if ((int32_t)result2 == -1 == *(int64_t *)(result2 + 16) >= v5) {
                goto lab_0x5553e0;
            } else {
                goto lab_0x55531a;
            }
        } else {
            goto lab_0x55531a;
        }
    }
  lab_0x5553e0:;
    int64_t result = 0; // 0x5553e5
    if (a4 != 0) {
        // 0x5553eb
        if ((int32_t)a5 == -1) {
            // 0x5553f5
            return *(int64_t *)(a4 + 24);
        }
        // 0x555329
        __readfsqword(40);
        return 0;
    }
    goto lab_0x555325;
  lab_0x555325:;
    int32_t * v6 = (int32_t *)a7; // 0x555325
    *v6 = *v6 | 2;
    // 0x555329
    __readfsqword(40);
    return result;
  lab_0x55531a:
    // 0x55531a
    if (a4 == 0) {
        // 0x555329
        __readfsqword(40);
        return result2;
    }
    // 0x55531f
    result = result2;
    if ((int32_t)a5 == -1) {
        // 0x555380
        result = result2;
        if (*(int64_t *)(a4 + 16) >= *(int64_t *)(a4 + 24)) {
            // 0x55538d
            result = result2;
            if ((int32_t)result2 == -1) {
                // 0x555329
                __readfsqword(40);
                return result2;
            }
        }
    }
    goto lab_0x555325;
}

// Address range: 0x5580e0 - 0x558294
// From class:    std::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_5580e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x5580e0
    __readfsqword(40);
    function_5659d0();
    int64_t v1; // bp-80, 0x5580e0
    int64_t v2 = (int64_t)&v1; // 0x55812d
    int64_t v3 = function_554b00(v2); // 0x558130
    int64_t v4 = function_565f30(v2, a5 + 208); // bp-72, 0x55815f
    int64_t v5; // bp-224, 0x5580e0
    int64_t v6 = function_5088b0(&v4, &v5, 64, "%.*Lf", 0); // 0x558173
    int64_t v7 = v6; // 0x55817d
    int64_t v8 = (int64_t)&v5; // 0x55817d
    if ((int32_t)v6 >= 64) {
        int64_t v9 = v6 + 1; // 0x55817f
        int64_t v10; // bp-232, 0x5580e0
        int64_t v11 = (int64_t)&v10 - ((0x100000000 * v9 >> 32) + 30 & -16); // 0x55818d
        v8 = v11 + 15 & -16;
        int64_t v12 = function_565f30(a8, a7); // 0x55819c
        *(int64_t *)(v11 - 8) = a8;
        *(int64_t *)(v11 - 16) = a7;
        v4 = v12;
        v7 = function_5088b0(&v4, (int64_t *)v8, v9 & 0xffffffff, "%.*Lf", 0);
    }
    int64_t v13 = v8;
    int64_t v14 = 0x100000000 * v7 >> 32; // 0x5581ca
    int64_t v15; // bp-81, 0x5580e0
    function_38bd2(&v4, v14, 0, &v15);
    if (*(int32_t *)(v4 - 8) >= 0) {
        // 0x5581e8
        function_27bbe(&v4);
    }
    // 0x5581f4
    function_519810(v3, v13, v14 + v13, v4);
    int32_t v16 = 0x100000000000000 * a6 >> 56;
    int64_t result; // 0x5580e0
    if ((char)a4 == 0) {
        // 0x558278
        result = function_557b60(a1, a2, a3, a5, v16, &v4);
    } else {
        // 0x558225
        result = function_5574b0(a1, a2, a3, a5, v16, &v4);
    }
    int64_t v17 = v4 - 24; // 0x55822e
    if (v17 != (int64_t)g6) {
        // 0x558280
        function_552550(v17, &v15);
        return result;
    }
    // 0x55823b
    function_566180(&v1, v4);
    __readfsqword(40);
    return result;
}

// Address range: 0x56b7e0 - 0x56b99b
// From class:    std::messages_byname<wchar_t>
// Type:          virtual member function
int64_t function_56b7e0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x56b7e0
    __readfsqword(40);
    int32_t v1 = a3; // 0x56b806
    if (v1 < 0) {
        // 0x56b814
        function_360a0(result, a6);
        // 0x56b81f
        __readfsqword(40);
        return result;
    }
    int64_t * v2 = (int64_t *)(a6 - 24); // 0x56b80d
    if (*v2 == 0) {
        // 0x56b814
        function_360a0(result, a6);
        // 0x56b81f
        __readfsqword(40);
        return result;
    }
    int64_t v3 = function_567c30(function_567d40(), a3 & 0xffffffff, v1); // 0x56b85b
    if (v3 == 0) {
        // 0x56b814
        function_360a0(result, a6);
        // 0x56b81f
        __readfsqword(40);
        return result;
    }
    int64_t v4 = (0x100000000 * *(int64_t *)function_50b1c0(v3 + 16) >> 32) * *v2; // 0x56b8a2
    char * v5; // bp-80, 0x56b7e0
    int64_t v6 = (int64_t)&v5; // 0x56b8b5
    int64_t v7 = v6; // bp-136, 0x56b8b5
    int64_t v8 = (int64_t)&v7 - (v4 + 31 & -16); // 0x56b8c1
    int64_t v9 = v8 + 15 & -16; // 0x56b8d0
    *(int64_t *)(v8 - 8) = v6;
    *(int64_t *)(v8 - 16) = v9 + v4;
    *v5 = 0;
    struct __locale_struct * v10 = __uselocale((struct __locale_struct *)*(int64_t *)(a2 + 16)); // 0x56b8f6
    char * str = dgettext((char *)*(int64_t *)(v3 + 8), (char *)v9); // 0x56b904
    int64_t v11 = (int64_t)str; // 0x56b904
    __uselocale(v10);
    if (v9 == v11) {
        // 0x56b814
        function_360a0(result, a6);
        // 0x56b81f
        __readfsqword(40);
        return result;
    }
    int64_t len = strlen(str); // 0x56b932
    int64_t v12 = 4 * len; // 0x56b937
    int64_t v13 = v8 - (v12 + 34 & -16); // 0x56b959
    *(int64_t *)(v13 - 8) = v7;
    int64_t v14 = v13 + 15 & -16; // 0x56b967
    int64_t v15 = v13 - 16; // 0x56b977
    *(int64_t *)v15 = v14 + v12;
    *(char *)v15 = 0;
    int64_t v16; // bp-88, 0x56b7e0
    int64_t v17; // bp-89, 0x56b7e0
    int64_t v18 = function_5515b0(v14, (int64_t)v5, &v17, len + v11, (int64_t)&v16, v14); // 0x56b98b
    *(int64_t *)result = v18;
    // 0x56b81f
    __readfsqword(40);
    return result;
}
