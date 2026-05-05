/*
 * Targeted RetDec C for native executable gap queue batch 1.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x56b2c0-0x56b4a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cd00-0x4cee6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x268c9-0x26aae rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a6e6-0x4a8c5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57160-0x5733f rank=- name=- kind=- bytes=- uncovered=-
 *   0x55c790-0x55c96f rank=- name=- kind=- bytes=- uncovered=-
 *   0x55c9b0-0x55cb8f rank=- name=- kind=- bytes=- uncovered=-
 *   0x5725b0-0x57278f rank=- name=- kind=- bytes=- uncovered=-
 *   0x5727c0-0x57299f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b8430-0x4b860e rank=- name=- kind=- bytes=- uncovered=-
 *   0x538ea0-0x53907d rank=- name=- kind=- bytes=- uncovered=-
 *   0x5cb26-0x5cd02 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2cafa-0x2ccd5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aa650-0x4aa829 rank=- name=- kind=- bytes=- uncovered=-
 *   0x567f20-0x5680f7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x492898-0x492a6e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g34;
extern int g35;
extern int g36;
extern int g37;
extern int g38;
extern int g39;
extern int g40;
extern int g41;
extern int g42;
extern int g43;
extern int g44;
extern int g45;
extern int g46;
extern int g47;
extern int g48;
extern int g49;
extern int g50;
extern int g51;
extern int g52;
extern int g53;
extern int g54;
extern int g55;
extern int g56;
extern int g57;
extern int g58;
extern int g59;
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

int64_t function_20210();
int64_t function_203b0();
int64_t function_24dff();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_254fe();
int64_t function_256ba();
int64_t function_259ce();
int64_t function_2608e();
int64_t function_260d0();
int64_t function_268c9();
int64_t function_27998();
int64_t function_27a2a();
int64_t function_27c71();
int64_t function_28496();
int64_t function_2cafa();
int64_t function_3602c();
int64_t function_372b0();
int64_t function_380a0();
int64_t function_3af2e();
int64_t function_478b0();
int64_t function_48a130();
int64_t function_4901fa();
int64_t function_4927ac();
int64_t function_492814();
int64_t function_492898();
int64_t function_492a90();
int64_t function_4a6e6();
int64_t function_4a9850();
int64_t function_4aa430();
int64_t function_4aa5d0();
int64_t function_4aa650();
int64_t function_4ad720();
int64_t function_4ad750();
int64_t function_4b0fa0();
int64_t function_4b1080();
int64_t function_4b1220();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b2d10();
int64_t function_4b38b0();
int64_t function_4b81c0();
int64_t function_4b8430();
int64_t function_4c14d0();
int64_t function_4c18b0();
int64_t function_4c1d00();
int64_t function_4c4730();
int64_t function_4c714();
int64_t function_4c7e4();
int64_t function_4cbdc();
int64_t function_4cd00();
int64_t function_4d974();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f1b30();
int64_t function_4f1b70();
int64_t function_4fbd10();
int64_t function_507f6();
int64_t function_50ab00();
int64_t function_52cbf0();
int64_t function_5378f0();
int64_t function_538ea0();
int64_t function_5423b0();
int64_t function_552550();
int64_t function_55bec0();
int64_t function_55c790();
int64_t function_55c9b0();
int64_t function_55f32();
int64_t function_55f42();
int64_t function_56004();
int64_t function_56066();
int64_t function_56102();
int64_t function_56146();
int64_t function_5646c();
int64_t function_5659d0();
int64_t function_565f30();
int64_t function_566180();
int64_t function_5677a0();
int64_t function_5678f0();
int64_t function_567df0();
int64_t function_567f20();
int64_t function_56b2c0();
int64_t function_56ee4();
int64_t function_56f00();
int64_t function_56f16();
int64_t function_57160();
int64_t function_5725b0();
int64_t function_5727c0();
int64_t function_5cab4();
int64_t function_5cb26();
int64_t function_71c60();
int64_t function_7293a();

// Address range: 0x268c9 - 0x26aae
int64_t function_268c9(int64_t a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __readfsqword(40); // 0x268d7
    int64_t v2 = a1; // 0x268f8
    if (a4 != 1) {
        int64_t v3 = (int64_t)a3;
        if (a4 > a6) {
            uint128_t v4 = (int128_t)a4; // 0x269a4
            int64_t v5 = (0x8000000000000000 * (int128_t)(a4 >> 63) | v4) / 2; // 0x269a4
            int64_t v6 = 8 * v5 + a1; // 0x269a7
            int64_t v7; // bp-96, 0x268c9
            function_27998(&v7, v3, v4 % 2, 2);
            int64_t v8 = a4 - v5; // 0x269cc
            int64_t v9 = function_268c9(a1, v6, &v7, v5, a5, a6); // 0x269d2
            function_27a2a(&v7);
            function_27998(&v7, v3, (int128_t)(int64_t)&v7, v5);
            int64_t v10 = v6; // 0x269f8
            int64_t v11; // 0x268c9
            if (v8 == 0) {
              lab_0x26a29:
                // 0x26a29
                function_27a2a(&v7);
                v11 = v10;
            } else {
                int64_t v12 = v6;
                int64_t v13 = v8;
                int64_t v14 = function_2608e(v12, &v7, v12); // 0x26a0f
                int64_t v15 = v12 + 8; // 0x26a19
                int64_t v16; // 0x268c9
                while (v16 != v14) {
                    int64_t v17 = v13 - 1; // 0x26a24
                    v10 = v15;
                    if (v17 == 0) {
                        goto lab_0x26a29;
                    }
                    v12 = v15;
                    v13 = v17;
                    v14 = function_2608e(v12, &v7, v12);
                    v15 = v12 + 8;
                }
                // 0x26a36
                function_27a2a(&v7);
                function_27998(&v7, v3, (int128_t)v15, v5);
                int64_t v18 = function_268c9(v12, a2, &v7, v13, a5, a6); // 0x26a57
                function_27a2a(&v7);
                v11 = v18;
            }
            // 0x26a67
            function_27c71(v9, v6, v11);
            v2 = v9 - v6 + v11;
        } else {
            int64_t v19 = a5 + 8; // 0x26911
            function_256ba(a5, a1);
            int64_t v20 = a1 + 8;
            int64_t v21 = v19; // 0x2692a
            int64_t v22 = a1; // 0x2692a
            if (v20 != a2) {
                int64_t v23; // 0x268c9
                int64_t v24; // 0x268c9
                if ((char)function_260d0(v3, v20) == 0) {
                    // 0x2694c
                    function_256ba(v19, v20);
                    v24 = v19 + 8;
                    v23 = a1;
                } else {
                    // 0x2693e
                    function_256ba(a1, v20);
                    v24 = v19;
                    v23 = a1 + 8;
                }
                int64_t v25 = v20 + 8;
                v21 = v24;
                v22 = v23;
                while (v25 != a2) {
                    int64_t v26 = v24;
                    int64_t v27 = v23;
                    int64_t v28 = v25;
                    if ((char)function_260d0(v3, v28) == 0) {
                        // 0x2694c
                        function_256ba(v26, v28);
                        v24 = v26 + 8;
                        v23 = v27;
                    } else {
                        // 0x2693e
                        function_256ba(v27, v28);
                        v24 = v26;
                        v23 = v27 + 8;
                    }
                    // 0x26958
                    v25 = v28 + 8;
                    v21 = v24;
                    v22 = v23;
                }
            }
            uint64_t v29 = v21 - a5; // 0x2695e
            v2 = v22;
            if (v29 >= 8) {
                int64_t v30 = a5; // 0x268c9
                int64_t v31 = v22; // 0x268c9
                int64_t v32 = v29 / 8;
                function_256ba(v31, v30);
                int64_t v33 = v32 - 1; // 0x2696b
                v30 += 8;
                v31 += 8;
                v2 = v22;
                while (v32 >= 2) {
                    // 0x2696d
                    v32 = v33;
                    function_256ba(v31, v30);
                    v33 = v32 - 1;
                    v30 += 8;
                    v31 += 8;
                    v2 = v22;
                }
            }
        }
    }
    int64_t result = v2; // 0x26a98
    if (v1 != __readfsqword(40)) {
        // 0x26a9a
        __stack_chk_fail();
        result = (int64_t)&g59;
    }
    // 0x26a9f
    return result;
}

// Address range: 0x2cafa - 0x2ccd5
int64_t function_2cafa(int64_t a1) {
    // 0x2cafa
    function_28496();
    *(int64_t *)a1 = (int64_t)&g48;
    function_7293a(a1 + (int64_t)&g5);
    function_71c60(a1 + (int64_t)&g6);
    *(int64_t *)(a1 + (int64_t)&g7) = 0;
    *(int64_t *)(a1 + (int64_t)&g8) = 0;
    *(int64_t *)(a1 + (int64_t)&g9) = 0;
    function_71c60(a1 + (int64_t)&g10);
    function_71c60(a1 + (int64_t)&g11);
    function_507f6(a1 + (int64_t)&g13, a1);
    function_372b0(a1 + (int64_t)&g14);
    int64_t v1 = a1 + (int64_t)&g22; // 0x2cb79
    *(int64_t *)(a1 + (int64_t)&g17) = 1;
    *(int64_t *)(a1 + (int64_t)&g18) = 0;
    *(int64_t *)(a1 + (int64_t)&g19) = 0;
    *(int64_t *)(a1 + (int64_t)&g16) = v1;
    *(int32_t *)(a1 + (int64_t)&g20) = 0x3f800000;
    *(int64_t *)(a1 + (int64_t)&g21) = 0;
    *(int64_t *)v1 = 0;
    function_48a130(a1 + (int64_t)&g23);
    function_492a90(a1 + (int64_t)&g24);
    function_7293a(a1 + (int64_t)&g25);
    *(int64_t *)(a1 + (int64_t)&g28) = (int64_t)&g58;
    function_7293a(a1 + (int64_t)&g31);
    int64_t v2 = a1 + (int64_t)&g35; // 0x2cc0a
    *(int64_t *)(a1 + (int64_t)&g32) = 0;
    *(int64_t *)(a1 + (int64_t)&g33) = 0;
    *(int64_t *)(a1 + (int64_t)&g34) = 0;
    *(int32_t *)v2 = 0;
    *(int64_t *)(a1 + (int64_t)&g36) = 0;
    *(int64_t *)(a1 + (int64_t)&g37) = v2;
    *(int64_t *)(a1 + (int64_t)&g38) = v2;
    *(int64_t *)(a1 + (int64_t)&g39) = 0;
    *(int32_t *)(a1 + (int64_t)&g40) = 0;
    *(int64_t *)(a1 + (int64_t)&g41) = 0;
    *(int64_t *)(a1 + (int64_t)&g42) = 0;
    *(int64_t *)(a1 + (int64_t)&g43) = 0;
    int64_t result = function_7293a(a1 + (int64_t)&g44); // 0x2cc9f
    if (g55 == 0) {
        // 0x2cca1
        *(int32_t *)(a1 + (int64_t)&g12) = 0;
        *(char *)(a1 + (int64_t)&g15) = 0;
        *(char *)(a1 + (int64_t)&g27) = 1;
        g55 = a1;
        __asm_rep_stosd_memset((char *)(a1 + (int64_t)&g29), 0, 19);
        result = 0;
    }
    // 0x2ccd3
    return result;
}

// Address range: 0x4a6e6 - 0x4a8c5
int64_t function_4a6e6(int64_t result, int64_t a2) {
    if (a2 == result) {
        // 0x4a8b3
        return result;
    }
    int64_t v1 = a2 + 8; // 0x4a700
    int64_t * v2 = (int64_t *)v1; // 0x4a700
    int64_t v3 = *v2; // 0x4a700
    int64_t * v4 = (int64_t *)(result + 16); // 0x4a70d
    int64_t v5 = v3 - a2; // 0x4a714
    uint64_t v6 = v5 >> 4; // 0x4a721
    if (*v4 - result >> 4 < v6) {
        int64_t v7 = result; // 0x4a731
        int64_t v8 = 0; // 0x4a731
        if (v6 != 0) {
            if (v6 >= 0x1000000000000000) {
                // 0x4a742
                function_5423b0();
            }
            // 0x4a747
            v8 = function_4efd30(v5);
            v7 = v5;
        }
        int64_t v9 = v8; // 0x4a75d
        int64_t v10 = v7; // 0x4a75d
        if (v3 != a2) {
            int64_t v11 = a2 + 16; // 0x4a766
            *(char *)v9 = *(char *)a2;
            int64_t v12 = *(int64_t *)(a2 + 8) - 24; // 0x4a772
            *(int64_t *)(v9 + 8) = function_478b0(v12);
            v9 += 16;
            int64_t v13 = v11; // 0x4a75d
            v10 = v12;
            while (v3 != v11) {
                // 0x4a75f
                v11 = v13 + 16;
                *(char *)v9 = *(char *)v13;
                v12 = *(int64_t *)(v13 + 8) - 24;
                *(int64_t *)(v9 + 8) = function_478b0(v12);
                v9 += 16;
                v13 = v11;
                v10 = v12;
            }
        }
        int64_t * v14 = (int64_t *)(result + 8);
        int64_t v15 = *v14; // 0x4a781
        int64_t v16 = v10; // 0x4a78b
        if (v15 != v10) {
            int64_t v17 = v10 + 8; // 0x4a78d
            int64_t v18 = v10 + 16; // 0x4a791
            function_2508e(v17);
            int64_t v19 = v18; // 0x4a78b
            v16 = v17;
            while (v15 != v18) {
                // 0x4a78d
                v17 = v19 + 8;
                v18 = v19 + 16;
                function_2508e(v17);
                v19 = v18;
                v16 = v17;
            }
        }
        // 0x4a79c
        if (v16 != 0) {
            // 0x4a7a4
            function_4eeb50(v16, a2);
        }
        // 0x4a7a9
        *(int64_t *)result = v8;
        *v4 = v8 + v5;
        // 0x4a8ac
        *v14 = v16 + v5;
        // 0x4a8b3
        return result;
    }
    int64_t v20 = result + 8;
    int64_t * v21 = (int64_t *)v20;
    int64_t v22 = *v21; // 0x4a7b9
    int64_t v23 = v22 - result;
    int64_t v24 = v23 >> 4; // 0x4a7cb
    if (v6 <= v24) {
        int64_t v25 = result; // 0x4a7da
        int64_t v26 = v20; // 0x4a7da
        int64_t v27 = v1; // 0x4a7da
        if (v5 >= 0 == (v6 != 0)) {
            *(char *)(v26 - 8) = *(char *)(v27 - 8);
            function_380a0(v26, v27, v6, v6, v24);
            int64_t v28 = v6 - 1; // 0x4a81e
            v25 = v26;
            int64_t v29 = v28; // 0x4a7da
            v26 += 16;
            v27 += 16;
            while (v28 >= 0 == (v28 != 0)) {
                // 0x4a7f1
                *(char *)(v26 - 8) = *(char *)(v27 - 8);
                function_380a0(v26, v27, v29, v6, v24);
                v28 = v29 - 1;
                v25 = v26;
                v29 = v28;
                v26 += 16;
                v27 += 16;
            }
        }
        int64_t v30 = (v5 >= 0 ? v5 & -16 : 0) + result; // 0x4a7ec
        int64_t v31 = v30; // 0x4a826
        if (v22 == v30) {
            // 0x4a8ac
            *v21 = v25 + v5;
            // 0x4a8b3
            return result;
        }
        int64_t v32 = v31 + 8; // 0x4a82c
        v31 += 16;
        function_2508e(v32);
        while (v22 != v31) {
            // 0x4a82c
            v32 = v31 + 8;
            v31 += 16;
            function_2508e(v32);
        }
        // 0x4a8ac
        *v21 = v32 + v5;
        // 0x4a8b3
        return result;
    }
    int64_t v33 = v1; // 0x4a843
    int64_t v34 = v23; // 0x4a843
    int64_t v35 = v3; // 0x4a843
    int64_t v36 = v22; // 0x4a843
    int64_t v37 = result; // 0x4a843
    if (v23 >= 16) {
        int64_t v38 = v24;
        v37 = v20;
        *(char *)(v37 - 8) = *(char *)(v33 - 8);
        function_380a0(v37, v33, a2, v6, v38);
        int64_t v39 = v37 + 16; // 0x4a843
        int64_t v40 = v38 - 1; // 0x4a843
        v33 += 16;
        while (v38 >= 2) {
            // 0x4a845
            v38 = v40;
            v37 = v39;
            *(char *)(v37 - 8) = *(char *)(v33 - 8);
            function_380a0(v37, v33, a2, v6, v38);
            v39 = v37 + 16;
            v40 = v38 - 1;
            v33 += 16;
        }
        // 0x4a83b
        v36 = *v21;
        v34 = v36 - v37;
        v35 = *v2;
    }
    int64_t v41 = *(int64_t *)a2 + v34; // 0x4a880
    int64_t v42 = v36; // 0x4a886
    int64_t v43 = v37; // 0x4a886
    if (v35 != v41) {
        int64_t v44 = v41 + 16; // 0x4a88f
        *(char *)v42 = *(char *)v41;
        int64_t v45 = *(int64_t *)(v41 + 8) - 24; // 0x4a89c
        *(int64_t *)(v42 + 8) = function_478b0(v45);
        v42 += 16;
        v43 = v45;
        while (v35 != v44) {
            int64_t v46 = v44;
            v44 = v46 + 16;
            *(char *)v42 = *(char *)v46;
            v45 = *(int64_t *)(v46 + 8) - 24;
            *(int64_t *)(v42 + 8) = function_478b0(v45);
            v42 += 16;
            v43 = v45;
        }
    }
    // 0x4a8ac
    *v21 = v43 + v5;
    // 0x4a8b3
    return result;
}

// Address range: 0x4cd00 - 0x4cee6
int64_t function_4cd00(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4cd18
    int64_t v2; // bp-112, 0x4cd00
    function_2509a(&v2);
    int64_t v3; // bp-104, 0x4cd00
    function_4901fa(&v3);
    int64_t v4; // bp-88, 0x4cd00
    int64_t v5; // bp-96, 0x4cd00
    function_3af2e(&v4, 16, &v5);
    int64_t v6 = function_4c714(12, 0); // 0x4cd68
    int64_t v7 = v6 + 24; // 0x4cd74
    *(int64_t *)v7 = 0x494445564f4d4552;
    *(int32_t *)(v6 + 32) = 0x534f454e;
    if (v6 != (int64_t)g51) {
        // 0x4cd8f
        *(int32_t *)(v6 + 16) = 0;
        *(int64_t *)v6 = 12;
        *(char *)(v6 + 36) = 0;
    }
    // 0x4cda1
    v5 = v7;
    *(int64_t *)v4 = 0x100000011;
    *(int32_t *)(v4 + 12) = 0x20002;
    *(int32_t *)(v4 + 8) = *(int32_t *)(a1 + 224);
    int16_t v8 = (int16_t)*(int64_t *)(v2 - 24); // bp-114, 0x4cde9
    int64_t v9; // 0x4cd00
    function_4d974(&v4, v9, (int64_t *)&v8, &v2);
    int64_t v10 = v2; // 0x4cdf8
    function_4d974(&v4, v9, (int64_t *)v10, (int64_t *)(v10 + (int64_t)v8));
    v8 = (int16_t)*(int64_t *)(v5 - 24);
    function_4d974(&v4, v9, (int64_t *)&v8, &v2);
    int64_t v11 = v5; // 0x4ce33
    function_4d974(&v4, v9, (int64_t *)v11, (int64_t *)(v11 + (int64_t)v8));
    v8 = (int16_t)*(int64_t *)(v3 - 24);
    function_4d974(&v4, v9, (int64_t *)&v8, &v2);
    int64_t v12 = v3; // 0x4ce6e
    function_4d974(&v4, v9, (int64_t *)v12, (int64_t *)(v12 + (int64_t)v8));
    int64_t v13 = v4; // 0x4ce83
    function_4cbdc(a1, v13, v9 - v13);
    function_4c7e4(a1);
    function_2508e((int64_t)&v5);
    function_254fe(&v4);
    function_2508e((int64_t)&v3);
    function_2508e((int64_t)&v2);
    int64_t result = 0; // 0x4ced0
    if (v1 != __readfsqword(40)) {
        // 0x4ced2
        __stack_chk_fail();
        result = (int64_t)&g59;
    }
    // 0x4ced7
    return result;
}

// Address range: 0x57160 - 0x5733f
int64_t function_57160(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x5717d
    int64_t v2 = 23; // 0x5719e
    int64_t v3; // 0x57160
    int64_t v4; // 0x57160
    int64_t v5; // 0x57160
    int64_t v6; // 0x57160
    int64_t v7; // 0x57160
    int64_t v8; // 0x57160
    int64_t v9; // 0x57160
    int64_t v10; // 0x57160
    int64_t v11; // 0x57160
    int64_t v12; // 0x57160
    int64_t v13; // 0x57160
    int64_t v14; // 0x57160
    int32_t * v15; // 0x571f7
    int64_t v16; // 0x57272
    int64_t v17; // 0x571b2
    if ((char)function_5646c() != 0) {
        int64_t v18 = a1 + 33; // 0x571a4
        int64_t * v19 = (int64_t *)v18; // 0x571a4
        int64_t v20 = function_56066(a2, *v19); // 0x571ab
        v17 = v20 & 0xffffffff;
        v2 = v17;
        if ((int32_t)v20 == 0) {
            // 0x571bb
            v2 = v17;
            if (*v19 != 0) {
                // 0x571c6
                v2 = v17;
                if (*(char *)(a1 + 32) == 0) {
                    uint64_t v21 = function_56146(a2, v18); // 0x571d7
                    v2 = v17;
                    if ((char)v21 != 0) {
                        // 0x571e7
                        v15 = (int32_t *)(a1 + (int64_t)&g26);
                        v2 = v17;
                        if (*v15 != 0) {
                            int64_t v22 = v21 % 256; // 0x571de
                            int64_t v23; // bp-120, 0x57160
                            int64_t v24 = (int64_t)&v23; // 0x571f2
                            v11 = v22;
                            v7 = v22;
                            v3 = 0;
                            while (true) {
                              lab_0x57204:
                                // 0x57204
                                v4 = v3;
                                v8 = v7;
                                v12 = v11;
                                v23 = 0;
                                int64_t v25 = 0; // bp-112, 0x5721a
                                uint64_t v26 = function_55f42(a2, &v25, v24); // 0x57223
                                if ((char)v26 != 0) {
                                    // 0x57250
                                    int64_t v27; // bp-96, 0x57160
                                    int64_t v28 = function_56ee4(v23, v25, &v27); // 0x5726b
                                    v16 = v26 % 256;
                                    if ((char)v28 == 0) {
                                        goto lab_0x5729b;
                                    } else {
                                        int64_t v29 = *(int64_t *)(a1 + (int64_t)&g30); // 0x57284
                                        int64_t v30 = function_56f00((int64_t)&v27, v29 + 32 * v4); // 0x5728e
                                        v14 = v16;
                                        v6 = v4;
                                        v10 = v16;
                                        if ((char)v30 != 0) {
                                            goto lab_0x5730d;
                                        } else {
                                            goto lab_0x5729b;
                                        }
                                    }
                                } else {
                                    // 0x5722c
                                    v2 = 23;
                                    if (v12 == 0) {
                                        // break -> 0x57318
                                        break;
                                    }
                                    // 0x57235
                                    v2 = 23;
                                    if ((char)function_56004(a2) == 0) {
                                        // break -> 0x57318
                                        break;
                                    }
                                    // 0x57245
                                    v5 = v4 + 0xffffffff & 0xffffffff;
                                    v9 = v8;
                                    v13 = 0;
                                    goto lab_0x57300;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x57318_4:;
    int64_t result = v2; // 0x57329
    if (v1 != __readfsqword(40)) {
        // 0x5732b
        __stack_chk_fail();
        result = (int64_t)&g59;
    }
    // 0x57330
    return result;
  lab_0x5729b:
    // 0x5729b
    v14 = v16;
    v6 = v4;
    v10 = v16;
    if ((char)v8 == 0) {
        goto lab_0x5730d;
    } else {
        // 0x572a0
        v2 = 23;
        if ((char)function_56102(a2) == 0) {
            // break -> 0x57318
            goto lab_0x57318_4;
        }
        uint64_t v31 = function_56f16(a1, a2, v4); // 0x572b5
        v5 = v4;
        v9 = 0;
        v13 = v12;
        if ((char)v31 == 0) {
            // 0x572c1
            v2 = 26;
            if (a3 == 0) {
                // break -> 0x57318
                goto lab_0x57318_4;
            }
            // 0x572d1
            function_55f32(a2);
            v5 = v4;
            v9 = v31 % 256;
            v13 = v12;
            v2 = 26;
            if ((char)a3 == 0) {
                // break -> 0x57318
                goto lab_0x57318_4;
            }
        }
        goto lab_0x57300;
    }
  lab_0x57300:
    // 0x57300
    v14 = v13 % 256;
    v6 = v5;
    v10 = v9;
    goto lab_0x5730d;
  lab_0x5730d:;
    int64_t v32 = v6 + 1; // 0x5730d
    v11 = v14;
    v7 = v10;
    v3 = v32 & 0xffffffff;
    v2 = v17;
    if (*v15 <= (int32_t)v32) {
        // break -> 0x57318
        goto lab_0x57318_4;
    }
    goto lab_0x57204;
}

// Address range: 0x5cb26 - 0x5cd02
int64_t function_5cb26(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x5cb34
    int32_t v2 = a2; // 0x5cb52
    *(int64_t *)a1 = (int64_t)&g58;
    int64_t v3; // bp-211, 0x5cb26
    int32_t v4; // bp-224, 0x5cb26
    int64_t v5; // bp-256, 0x5cb26
    int64_t v6; // 0x5cb26
    if (v2 != 0) {
        if (v2 != 1) {
            goto lab_0x5ccdb;
        } else {
            int64_t v7 = (int64_t)&v3; // 0x5cc1c
            int64_t v8 = 0;
            *(char *)(v8 + v7) = 0;
            int64_t v9 = v8 + 1; // 0x5cc30
            int32_t v10 = 0x26af48ef; // 0x5cc30
            int64_t v11 = 0; // 0x5cc30
            while (v8 != 164) {
                // 0x5cc23
                v8 = v9;
                *(char *)(v8 + v7) = 0;
                v9 = v8 + 1;
                v10 = 0x26af48ef;
                v11 = 0;
            }
            int32_t v12 = *(int32_t *)(v11 + (int64_t)&g45); // 0x5cc6b
            *(int32_t *)(v11 + v7) = v12 ^ v10;
            int64_t v13 = v11 + 4; // 0x5cc76
            uint32_t v14 = 0x343fd * v10 + 0x269ec3; // 0x5cc50
            v10 = v14 / 8 | 0x20000000 * v14;
            v11 = v13;
            while (v13 != 164) {
                // 0x5cc61
                v12 = *(int32_t *)(v11 + (int64_t)&g45);
                *(int32_t *)(v11 + v7) = v12 ^ v10;
                v13 = v11 + 4;
                v14 = 0x343fd * v10 + 0x269ec3;
                v10 = v14 / 8 | 0x20000000 * v14;
                v11 = v13;
            }
            // 0x5cc7c
            v4 = v7;
            int64_t v15 = 0x100000000 * v7 >> 32; // 0x5cc90
            *(char *)(v15 + 164) = 0;
            function_5cab4(&v5, &v3, (int32_t)v15, (int64_t)&g45);
            int64_t v16 = (int64_t)&v5; // 0x5ccac
            function_256ba(a1, v16);
            function_2508e(v16);
            v6 = 165;
            goto lab_0x5ccc4;
        }
    } else {
        int64_t v17 = (int64_t)&v3; // 0x5cb5d
        int64_t v18 = 0;
        *(char *)(v18 + v17) = 0;
        int64_t v19 = v18 + 1; // 0x5cb71
        int32_t v20 = -0x4ea872f6; // 0x5cb71
        int64_t v21 = 0; // 0x5cb71
        while (v18 != 178) {
            // 0x5cb64
            v18 = v19;
            *(char *)(v18 + v17) = 0;
            v19 = v18 + 1;
            v20 = -0x4ea872f6;
            v21 = 0;
        }
        int32_t v22 = *(int32_t *)(v21 + (int64_t)&g46); // 0x5cbaa
        *(int32_t *)(v21 + v17) = v22 ^ v20;
        int64_t v23 = v21 + 4; // 0x5cbb5
        uint32_t v24 = 0x343fd * v20 + 0x269ec3; // 0x5cb90
        v20 = v24 / 8 | 0x20000000 * v24;
        v21 = v23;
        while (v23 != 176) {
            // 0x5cba1
            v22 = *(int32_t *)(v21 + (int64_t)&g46);
            *(int32_t *)(v21 + v17) = v22 ^ v20;
            v23 = v21 + 4;
            v24 = 0x343fd * v20 + 0x269ec3;
            v20 = v24 / 8 | 0x20000000 * v24;
            v21 = v23;
        }
        // 0x5cbbb
        v5 = v17;
        char v25 = *(char *)((int64_t)&g46 + 176); // 0x5cbcf
        *(char *)(v17 + 176) = v25 ^ 93;
        int64_t v26 = 177; // 0x5cbdc
        int64_t v27 = 0x7399f; // 0x5cb26
        char v28 = *(char *)(v26 + (int64_t)&g46); // 0x5cbcf
        *(char *)(v26 + v5) = v28 ^ (char)v27;
        v26++;
        v27 /= 256;
        while (v26 != 179) {
            // 0x5cbc5
            v28 = *(char *)(v26 + (int64_t)&g46);
            *(char *)(v26 + v5) = v28 ^ (char)v27;
            v26++;
            v27 /= 256;
        }
        // 0x5cbe7
        function_5cab4((int64_t *)&v4, &v3, 7, v5);
        int64_t v29 = (int64_t)&v4; // 0x5cbf7
        function_256ba(a1, v29);
        function_2508e(v29);
        v6 = 179;
        goto lab_0x5ccc4;
    }
  lab_0x5ccdb:;
    int64_t result = a1; // 0x5ccef
    if (v1 != __readfsqword(40)) {
        // 0x5ccf1
        __stack_chk_fail();
        result = (int64_t)&g59;
    }
    // 0x5ccf6
    return result;
  lab_0x5ccc4:
    // 0x5ccc4
    function_24dff(&v3, v6);
    function_3602c(a1, &g56);
    goto lab_0x5ccdb;
}

// Address range: 0x492898 - 0x492a6e
int64_t function_492898(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t result2 = function_4efd30(32); // 0x4928b1
    int64_t * v1 = (int64_t *)result2; // 0x4928bd
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x4928c4
    uint64_t v3 = *v2; // 0x4928c4
    int64_t v4 = result2 + 8; // 0x4928cd
    *(int64_t *)v4 = a2;
    int64_t * v5 = (int64_t *)(a2 + 8); // 0x4928d1
    *v5 = 0;
    int64_t v6 = result2 + 16; // 0x4928e2
    *(int64_t *)v6 = *v5;
    int64_t v7 = a2 % v3;
    int64_t v8 = function_492814(a1, v7, v4, a2); // 0x4928f6
    if (v8 != 0) {
        int64_t result = *(int64_t *)v8; // 0x492900
        if (result != 0) {
            // 0x492908
            function_4927ac(v6);
            function_4eeb50(result2, v7);
            // 0x492a5b
            return result;
        }
    }
    int64_t * v9 = (int64_t *)(a1 + 24); // 0x492920
    uint64_t v10 = *v9; // 0x492920
    int64_t v11 = a1 + 32; // 0x492924
    int64_t v12 = function_4fbd10(v11, v3, v10, 1); // 0x492930
    int64_t v13 = v11; // 0x49293a
    int64_t v14 = v7; // 0x49293a
    if ((char)v12 != 0) {
        int64_t v15; // 0x492898
        int64_t v16; // 0x492898
        if (v10 != 1) {
            if (v10 >= 0x2000000000000000) {
                // 0x492963
                function_5423b0();
            }
            int64_t v17 = 8 * v10; // 0x492968
            int64_t v18 = function_4efd30(v17); // 0x492973
            __asm_rep_stosb_memset((char *)v18, 0, v17);
            bool v19; // 0x492898
            v16 = v18 + v17 * (v19 ? -1 : 1);
            v15 = v18;
        } else {
            int64_t v20 = a1 + 48; // 0x492946
            *(int64_t *)v20 = 0;
            v16 = v11;
            v15 = v20;
        }
        int64_t v21 = a1 + 16; // 0x492985
        int64_t * v22 = (int64_t *)v21; // 0x492989
        int64_t v23 = *v22; // 0x492989
        *v22 = 0;
        int64_t v24 = 0; // 0x49299a
        int64_t v25 = v16; // 0x49299a
        if (v23 != 0) {
            int64_t v26 = 0;
            int64_t * v27 = (int64_t *)v23; // 0x4929a2
            int64_t v28 = *v27; // 0x4929a2
            int64_t v29 = *(int64_t *)(v23 + 24) % v10;
            int64_t * v30 = (int64_t *)(8 * v29 + v15); // 0x4929ac
            int64_t v31 = *v30; // 0x4929ac
            int64_t v32; // 0x492898
            int64_t v33; // 0x492898
            int64_t v34; // 0x4929b4
            if (v31 != 0) {
                // 0x4929d6
                *v27 = *(int64_t *)v31;
                *(int64_t *)*v30 = v23;
                v33 = v26;
                v32 = v31;
            } else {
                // 0x4929b4
                v34 = *v22;
                *v27 = v34;
                *v22 = v23;
                *v30 = v21;
                v33 = v29;
                v32 = v34;
                if (*v27 != 0) {
                    // 0x4929d0
                    *(int64_t *)(8 * v26 + v15) = v23;
                    v33 = v29;
                    v32 = v34;
                }
            }
            // 0x4929c8
            v24 = v33;
            v25 = v32;
            while (v28 != 0) {
                int64_t v35 = v28;
                v26 = v33;
                v27 = (int64_t *)v35;
                v28 = *v27;
                v29 = *(int64_t *)(v35 + 24) % v10;
                v30 = (int64_t *)(8 * v29 + v15);
                v31 = *v30;
                if (v31 != 0) {
                    // 0x4929d6
                    *v27 = *(int64_t *)v31;
                    *(int64_t *)*v30 = v35;
                    v33 = v26;
                    v32 = v31;
                } else {
                    // 0x4929b4
                    v34 = *v22;
                    *v27 = v34;
                    *v22 = v35;
                    *v30 = v21;
                    v33 = v29;
                    v32 = v34;
                    if (*v27 != 0) {
                        // 0x4929d0
                        *(int64_t *)(8 * v26 + v15) = v35;
                        v33 = v29;
                        v32 = v34;
                    }
                }
                // 0x4929c8
                v24 = v33;
                v25 = v32;
            }
        }
        // 0x4929e7
        v13 = v25;
        if (v13 != a1 + 48) {
            // 0x4929f3
            function_4eeb50(v13, v24);
        }
        // 0x4929f8
        *(int64_t *)a1 = v15;
        *v2 = v10;
        v14 = a2 % v10;
    }
    // 0x492a0a
    *(int64_t *)(result2 + 24) = a2;
    int64_t * v36 = (int64_t *)(8 * v14 + v13); // 0x492a15
    int64_t v37 = *v36; // 0x492a15
    if (v37 != 0) {
        // 0x492a1d
        *v1 = *(int64_t *)v37;
        *(int64_t *)*v36 = result2;
        // 0x492a52
        *v9 = *v9 + 1;
        // 0x492a5b
        return result2;
    }
    int64_t v38 = a1 + 16; // 0x492a2c
    int64_t * v39 = (int64_t *)v38; // 0x492a2c
    int64_t v40 = *v39; // 0x492a2c
    *v39 = result2;
    *v1 = v40;
    if (v40 != 0) {
        // 0x492a3d
        *(int64_t *)(8 * (*(int64_t *)(v40 + 24) % *v2) + v13) = result2;
    }
    // 0x492a4b
    *v36 = v38;
    // 0x492a52
    *v9 = *v9 + 1;
    // 0x492a5b
    return result2;
}

// Address range: 0x4aa650 - 0x4aa828
int64_t function_4aa650(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4aa650
    if (a2 == 0 || a3 == 0) {
        // 0x4aa810
        return 0;
    }
    int64_t v1 = a2 + 328; // 0x4aa686
    int64_t * str2 = (int64_t *)(a2 + 144);
    int64_t v2 = 0;
    int64_t v3 = v2; // 0x4aa6a7
    int64_t v4; // 0x4aa650
    int64_t result; // 0x4aa650
    int64_t v5; // 0x4aa650
    int64_t v6; // bp-120, 0x4aa650
    int64_t str; // 0x4aa6bd
    int64_t v7; // 0x4aa6d2
    int32_t * v8; // 0x4aa6df
    int32_t v9; // 0x4aa6df
    int32_t * v10; // 0x4aa6fa
    int64_t v11; // 0x4aa71c
    int64_t v12; // 0x4aa72e
    int64_t v13; // 0x4aa750
    int64_t v14; // 0x4aa75c
    int64_t v15; // 0x4aa76e
    uint64_t v16; // 0x4aa782
    int64_t v17; // 0x4aa79c
    int64_t v18; // 0x4aa7b9
    int64_t v19; // 0x4aa700
    int64_t v20; // 0x4aa700
    int64_t v21; // 0x4aa719
    int64_t v22; // 0x4aa76b
    int64_t v23; // 0x4aa7dc
    int64_t v24; // 0x4aa7ee
    int64_t n; // 0x4aa6a9
    if (*(int32_t *)(a3 + 48) != 0) {
        // 0x4aa6a9
        n = *(int64_t *)(a3 + 88);
        v3 = v2;
        if (n == *(int64_t *)(a2 + 136)) {
            // 0x4aa6b6
            str = *(int64_t *)(a3 + 96);
            v3 = v2;
            if (memcmp((int64_t *)str, (int64_t *)*str2, (int32_t)n) == 0) {
                // 0x4aa6ca
                v7 = function_4aa430(a2, 2);
                result = v7;
                if ((int32_t)v7 != 0) {
                    // 0x4aa825
                    return result;
                }
                // 0x4aa6df
                v8 = (int32_t *)(a3 + 392);
                v9 = *v8;
                v10 = (int32_t *)(a3 + 396);
                v11 = function_4c14d0(v9);
                if (v11 == 0) {
                    // 0x4aa825
                    return 0;
                }
                // 0x4aa72a
                v12 = *(int64_t *)(a3 + 40);
                function_4c18b0(v11, v12, *(int64_t *)(a3 + 32), &v6);
                v13 = function_4a9850(a4, *v10, v1);
                v14 = *(int64_t *)(a3 + 376);
                v15 = *(int64_t *)(a3 + 384);
                v16 = function_4c1d00(v11);
                v17 = *(int64_t *)(a3 + 400);
                v18 = function_4c4730(*v10, v17, v1, *v8, &v6, v16 % 256, v15, v14);
                result = v18;
                if ((int32_t)v18 != 0) {
                    // 0x4aa825
                    return result;
                }
                // 0x4aa7c2
                v19 = (1 << (v9 + 31) % 32 & (int32_t)a4) == 0 ? v2 | 0x20000 : v2;
                v20 = v19 & 0xffffffff;
                v21 = (1 << (*v10 + 31) % 32 & *(int32_t *)(a4 + 4)) == 0 ? v20 | 0x40000 : v20;
                v22 = (int32_t)v13 != 0 ? v21 | (int64_t)(int32_t)&g1 : v21;
                v23 = (int32_t)function_4ad720(a3 + 192) != 0 ? v22 | 32 : v22;
                v24 = v23 & 0xfffffbff | 1024;
                v4 = (int32_t)function_4ad750(a3 + 168) != 0 ? v24 : v23;
                v3 = v4 & 0xffffffff;
                if ((int32_t)function_4aa5d0(a1, a3, v24) != 0) {
                    // 0x4aa803
                    v5 = v4 & 0xfffffffd | 2;
                    return v5 & 0xffffffff;
                }
            }
        }
    }
    int64_t v25 = v3;
    int64_t v26 = *(int64_t *)(a3 + 408); // 0x4aa690
    v5 = v25;
    while (v26 != 0) {
        // 0x4aa6a0
        v2 = v25;
        int64_t v27 = v26;
        v3 = v2;
        if (*(int32_t *)(v27 + 48) != 0) {
            // 0x4aa6a9
            n = *(int64_t *)(v27 + 88);
            v3 = v2;
            if (n == *(int64_t *)(a2 + 136)) {
                // 0x4aa6b6
                str = *(int64_t *)(v27 + 96);
                v3 = v2;
                if (memcmp((int64_t *)str, (int64_t *)*str2, (int32_t)n) == 0) {
                    // 0x4aa6ca
                    v7 = function_4aa430(a2, 2);
                    result = v7;
                    if ((int32_t)v7 != 0) {
                        // 0x4aa825
                        return result;
                    }
                    // 0x4aa6df
                    v8 = (int32_t *)(v27 + 392);
                    v9 = *v8;
                    v10 = (int32_t *)(v27 + 396);
                    v11 = function_4c14d0(v9);
                    if (v11 == 0) {
                        // 0x4aa825
                        return 0;
                    }
                    // 0x4aa72a
                    v12 = *(int64_t *)(v27 + 40);
                    function_4c18b0(v11, v12, *(int64_t *)(v27 + 32), &v6);
                    v13 = function_4a9850(a4, *v10, v1);
                    v14 = *(int64_t *)(v27 + 376);
                    v15 = *(int64_t *)(v27 + 384);
                    v16 = function_4c1d00(v11);
                    v17 = *(int64_t *)(v27 + 400);
                    v18 = function_4c4730(*v10, v17, v1, *v8, &v6, v16 % 256, v15, v14);
                    result = v18;
                    if ((int32_t)v18 != 0) {
                        // 0x4aa825
                        return result;
                    }
                    // 0x4aa7c2
                    v19 = (1 << (v9 + 31) % 32 & (int32_t)a4) == 0 ? v2 | 0x20000 : v2;
                    v20 = v19 & 0xffffffff;
                    v21 = (1 << (*v10 + 31) % 32 & *(int32_t *)(a4 + 4)) == 0 ? v20 | 0x40000 : v20;
                    v22 = (int32_t)v13 != 0 ? v21 | (int64_t)(int32_t)&g1 : v21;
                    v23 = (int32_t)function_4ad720(v27 + 192) != 0 ? v22 | 32 : v22;
                    v24 = v23 & 0xfffffbff | 1024;
                    v4 = (int32_t)function_4ad750(v27 + 168) != 0 ? v24 : v23;
                    v3 = v4 & 0xffffffff;
                    if ((int32_t)function_4aa5d0(a1, v27, v24) != 0) {
                        // 0x4aa803
                        v5 = v4 & 0xfffffffd | 2;
                        return v5 & 0xffffffff;
                    }
                }
            }
        }
        // 0x4aa690
        v25 = v3;
        v26 = *(int64_t *)(v27 + 408);
        v5 = v25;
    }
  lab_0x4aa810:
    // 0x4aa810
    return v5 & 0xffffffff;
}

// Address range: 0x4b8430 - 0x4b860a
int64_t function_4b8430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 + 8; // 0x4b8447
    if ((int32_t)function_4b1680(v1, 0) == 0) {
        // 0x4b84b5
        return 0xffffcf80;
    }
    int64_t v2 = a1 + 56; // 0x4b846a
    int32_t v3 = 12; // 0x4b846f
    function_4b38b0(v2, 0x100000000 * a2 >> 32, a5, a6);
    int64_t v4 = function_4b1590(v2, v1); // 0x4b8496
    int64_t v5; // 0x4b8430
    int64_t result; // 0x4b8430
    int64_t v6; // 0x4b84a7
    while ((int32_t)v4 >= 0) {
        // 0x4b849f
        v6 = function_4b1220(v2, 1);
        v5 = v6;
        if ((int32_t)v6 != 0) {
            // 0x4b84b0
            result = v5 - (int64_t)(int32_t)"m_init" & 0xffffffff;
            return result;
        }
        v4 = function_4b1590(v2, v1);
    }
    // 0x4b84c8
    v3--;
    result = v4;
    while (v3 != 0) {
        // 0x4b84d3
        if ((int32_t)function_4b81c0(v2, v1) == 0) {
            int64_t v7 = a1 + 32; // 0x4b84e2
            int64_t v8 = a1 + 80; // 0x4b84e7
            int64_t v9 = function_4b2d10(v8, v7, v2, v1, a1 + 152); // 0x4b8500
            if ((int32_t)v9 != 0) {
                // 0x4b84b0
                result = v9 - (int64_t)(int32_t)"m_init" & 0xffffffff;
                return result;
            } else {
                int64_t v10 = function_4b81c0(v8, v1); // 0x4b850f
                result = v10;
                if ((int32_t)v10 != 0) {
                    return result;
                } else {
                    uint64_t v11 = function_4b0fa0(v1); // 0x4b851b
                    uint64_t v12 = function_4b0fa0(v7); // 0x4b8526
                    uint64_t v13 = function_4b0fa0(v8); // 0x4b8533
                    int64_t v14 = a3 + 2; // 0x4b8546
                    int64_t v15 = function_4b1080(v1, v14, v11, v1, v14); // 0x4b8552
                    if ((int32_t)v15 != 0) {
                        // 0x4b84b0
                        result = v15 - (int64_t)(int32_t)"m_init" & 0xffffffff;
                        return result;
                    } else {
                        int64_t v16 = v11 + v14; // 0x4b8569
                        int64_t v17 = v16 + 2; // 0x4b857c
                        *(char *)a3 = (char)(v11 / 256);
                        *(char *)(a3 + 1) = (char)v11;
                        int64_t v18 = function_4b1080(v7, v17, v12, v12, v17); // 0x4b8595
                        if ((int32_t)v18 != 0) {
                            // 0x4b84b0
                            result = v18 - (int64_t)(int32_t)"m_init" & 0xffffffff;
                            return result;
                        } else {
                            // 0x4b85ac
                            *(char *)(v16 + 1) = (char)v12;
                            *(char *)v16 = (char)(v12 / 256);
                            int64_t v19 = v17 + v12; // 0x4b85bf
                            int64_t v20 = v19 + 2; // 0x4b85c3
                            int64_t v21 = function_4b1080(v8, v20, v13, v12, v17); // 0x4b85ca
                            if ((int32_t)v21 != 0) {
                                // 0x4b84b0
                                result = v21 - (int64_t)(int32_t)"m_init" & 0xffffffff;
                                return result;
                            } else {
                                // 0x4b85d7
                                *(char *)(v19 + 1) = (char)v13;
                                *(char *)v19 = (char)(v13 / 256);
                                *(int64_t *)a4 = v13 - a3 + v20;
                                *(int64_t *)a1 = v11;
                                result = v21;
                                return result;
                            }
                        }
                    }
                }
            }
        }
        function_4b38b0(v2, 0x100000000 * a2 >> 32, a5, a6);
        v4 = function_4b1590(v2, v1);
        while ((int32_t)v4 >= 0) {
            // 0x4b849f
            v6 = function_4b1220(v2, 1);
            v5 = v6;
            if ((int32_t)v6 != 0) {
                // 0x4b84b0
                result = v5 - (int64_t)(int32_t)"m_init" & 0xffffffff;
                return result;
            }
            v4 = function_4b1590(v2, v1);
        }
        // 0x4b84c8
        v3--;
        result = v4;
    }
  lab_0x4b84b5:
    // 0x4b84b5
    return result;
}

// Address range: 0x538ea0 - 0x539076
// From class:    *NSt13__facet_shims12_GLOBAL__N_113time_get_shimIwEE
// Type:          virtual member function
int64_t function_538ea0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int32_t a10) {
    // 0x538ea0
    __readfsqword(40);
    int64_t v1 = function_50ab00(); // 0x538f02
    int32_t * v2 = (int32_t *)a7; // 0x538f0a
    *v2 = 0;
    int32_t v3 = v1; // bp-88, 0x538f23
    int64_t result3 = function_5378f0(a1, a2, a3, a4, a5, a6, a7, a8, &v3); // 0x538f7b
    if (result3 == 0) {
        goto lab_0x539058;
    } else {
        if ((int32_t)a3 == -1) {
            uint64_t result = *(int64_t *)(result3 + 16); // 0x539038
            if (result >= *(int64_t *)(result3 + 24)) {
                // 0x539080
                return result;
            }
            // 0x539043
            if (*(int32_t *)result == -1) {
                goto lab_0x539058;
            } else {
                goto lab_0x538fab;
            }
        } else {
            goto lab_0x538fab;
        }
    }
  lab_0x539058:;
    int64_t result2 = 0; // 0x53905e
    int64_t result5; // 0x538ea0
    char v4; // 0x538ea0
    if (a4 == 0) {
        goto lab_0x538fb6;
    } else {
        // 0x539064
        result5 = 0;
        v4 = 1;
        if ((int32_t)a5 != -1) {
            // 0x538fb9
            __readfsqword(40);
            return 0;
        }
        goto lab_0x53901b;
    }
  lab_0x538fb6:
    // 0x538fb6
    *v2 = *v2 | 2;
    // 0x538fb9
    __readfsqword(40);
    return result2;
  lab_0x538fab:
    // 0x538fab
    if (a4 == 0) {
        // 0x538fb9
        __readfsqword(40);
        return result3;
    }
    // 0x538fb0
    result2 = result3;
    result5 = result3;
    v4 = 0;
    if ((int32_t)a5 == -1) {
        goto lab_0x53901b;
    } else {
        goto lab_0x538fb6;
    }
  lab_0x53901b:;
    uint64_t result4 = *(int64_t *)(a4 + 16); // 0x53901b
    if (result4 >= *(int64_t *)(a4 + 24)) {
        // 0x539080
        return result4;
    }
    // 0x539025
    result2 = result5;
    if (v4 != (char)(*(int32_t *)result4 == -1)) {
        // 0x538fb9
        __readfsqword(40);
        return result5;
    }
    goto lab_0x538fb6;
}

// Address range: 0x55c790 - 0x55c96f
// From class:    std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_55c790(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x55c790
    __readfsqword(40);
    int32_t v1 = (int64_t)&g58; // bp-80, 0x55c7e8
    function_259ce((int64_t *)&v1, 32);
    int64_t v2 = function_55bec0(a1, a2, a3, a4, a5, a6, a7, (int64_t *)&v1); // 0x55c809
    int64_t v3 = a3 & 0xffffffff; // 0x55c83c
    int64_t v4 = function_565f30(); // bp-72, 0x55c844
    function_5677a0((int64_t)v1, a8, a7, &v4);
    int64_t v5; // 0x55c790
    if (v2 == 0) {
        goto lab_0x55c950;
    } else {
        // 0x55c871
        v5 = v3;
        if ((int32_t)a3 == -1) {
            uint64_t v6 = *(int64_t *)(v2 + 16); // 0x55c8d4
            if (v6 >= *(int64_t *)(v2 + 24)) {
                int64_t v7 = *(int64_t *)v2; // 0x55c934
                if ((int32_t)v7 == -1) {
                    goto lab_0x55c950;
                } else {
                    // 0x55c93f
                    v5 = v7 & 0xffffffff;
                    goto lab_0x55c876;
                }
            } else {
                // 0x55c8de
                v5 = (int64_t)*(char *)v6;
                goto lab_0x55c876;
            }
        } else {
            goto lab_0x55c876;
        }
    }
  lab_0x55c950:;
    int64_t v8 = 0; // 0x55c95b
    int64_t v9 = v3; // 0x55c95b
    int64_t v10; // 0x55c790
    int64_t result; // 0x55c790
    if (a4 == 0) {
        goto lab_0x55c881;
    } else {
        // 0x55c961
        result = 0;
        v10 = v3;
        if ((int32_t)a5 == -1) {
            // 0x55c96b
            return *(int64_t *)(a4 + 24);
        }
        goto lab_0x55c886;
    }
  lab_0x55c881:;
    int32_t * v11 = (int32_t *)a7; // 0x55c881
    *v11 = *v11 | 2;
    result = v8;
    v10 = v9;
    goto lab_0x55c886;
  lab_0x55c876:
    // 0x55c876
    v8 = v2;
    v9 = v5;
    result = v2;
    v10 = v5;
    if (a4 == 0) {
        goto lab_0x55c886;
    } else {
        goto lab_0x55c881;
    }
  lab_0x55c886:
    // 0x55c886
    if (g51 != &g57) {
        int64_t v12 = a3 < 0xffffffff00000001 ? a3 : a3 + 0xffffffff; // 0x55c890
        function_552550(&g57, (int64_t)&v4, v10 | v12);
    }
    // 0x55c8a8
    __readfsqword(40);
    return result;
}

// Address range: 0x55c9b0 - 0x55cb8f
// From class:    std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_55c9b0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x55c9b0
    __readfsqword(40);
    int32_t v1 = (int64_t)&g58; // bp-80, 0x55ca08
    function_259ce((int64_t *)&v1, 32);
    int64_t v2 = function_55bec0(a1, a2, a3, a4, a5, a6, a7, (int64_t *)&v1); // 0x55ca29
    int64_t v3 = a3 & 0xffffffff; // 0x55ca5c
    int64_t v4 = function_565f30(); // bp-72, 0x55ca64
    function_5678f0((int64_t)v1, a8, a7, &v4);
    int64_t v5; // 0x55c9b0
    if (v2 == 0) {
        goto lab_0x55cb70;
    } else {
        // 0x55ca91
        v5 = v3;
        if ((int32_t)a3 == -1) {
            uint64_t v6 = *(int64_t *)(v2 + 16); // 0x55caf4
            if (v6 >= *(int64_t *)(v2 + 24)) {
                int64_t v7 = *(int64_t *)v2; // 0x55cb54
                if ((int32_t)v7 == -1) {
                    goto lab_0x55cb70;
                } else {
                    // 0x55cb5f
                    v5 = v7 & 0xffffffff;
                    goto lab_0x55ca96;
                }
            } else {
                // 0x55cafe
                v5 = (int64_t)*(char *)v6;
                goto lab_0x55ca96;
            }
        } else {
            goto lab_0x55ca96;
        }
    }
  lab_0x55cb70:;
    int64_t v8 = 0; // 0x55cb7b
    int64_t v9 = v3; // 0x55cb7b
    int64_t v10; // 0x55c9b0
    int64_t result; // 0x55c9b0
    if (a4 == 0) {
        goto lab_0x55caa1;
    } else {
        // 0x55cb81
        result = 0;
        v10 = v3;
        if ((int32_t)a5 == -1) {
            // 0x55cb8b
            return *(int64_t *)(a4 + 24);
        }
        goto lab_0x55caa6;
    }
  lab_0x55caa1:;
    int32_t * v11 = (int32_t *)a7; // 0x55caa1
    *v11 = *v11 | 2;
    result = v8;
    v10 = v9;
    goto lab_0x55caa6;
  lab_0x55ca96:
    // 0x55ca96
    v8 = v2;
    v9 = v5;
    result = v2;
    v10 = v5;
    if (a4 == 0) {
        goto lab_0x55caa6;
    } else {
        goto lab_0x55caa1;
    }
  lab_0x55caa6:
    // 0x55caa6
    if (g51 != &g57) {
        int64_t v12 = a3 < 0xffffffff00000001 ? a3 : a3 + 0xffffffff; // 0x55cab0
        function_552550(&g57, (int64_t)&v4, v10 | v12);
    }
    // 0x55cac8
    __readfsqword(40);
    return result;
}

// Address range: 0x567f20 - 0x5680f7
int64_t function_567f20(int64_t mutex, int64_t str, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x567f3e
    int64_t mutex2 = mutex; // bp-80, 0x567f4e
    int64_t v2; // 0x567f20
    int64_t v3; // 0x567f20
    int64_t v4; // 0x567f20
    int32_t * v5; // 0x567f20
    int32_t v6; // 0x567f69
    if (g52 == 0) {
        int32_t * v7 = (int32_t *)(mutex + 40);
        uint32_t v8 = *v7; // 0x568040
        v5 = v7;
        v6 = v8;
        v3 = 0xffffffff;
        v2 = v8;
        if (v8 != 0x7fffffff) {
            goto lab_0x567f7a;
        } else {
            goto lab_0x568003;
        }
    } else {
        int32_t result = pthread_mutex_lock((int64_t *)mutex); // 0x567f5c
        v4 = a3;
        if (result != 0) {
            goto lab_0x568076;
        } else {
            // 0x567f69
            v5 = (int32_t *)(mutex + 40);
            v6 = *v5;
            if (v6 == 0x7fffffff) {
                // 0x5680f7
                return result;
            }
            goto lab_0x567f7a;
        }
    }
  lab_0x567f7a:
    // 0x567f7a
    *v5 = v6 + 1;
    int64_t v9; // bp-72, 0x567f20
    function_5659d0(&v9, a3);
    int64_t v10 = function_4efd30(24); // 0x567f96
    int32_t * v11 = (int32_t *)v10; // 0x567f9e
    *v11 = v6;
    int64_t v12 = v10 + 16; // 0x567fa4
    char * v13 = strdup((char *)str); // 0x567fa8
    int64_t v14 = (int64_t)&v9; // 0x567fad
    int64_t * v15 = (int64_t *)(v10 + 8); // 0x567fb0
    *v15 = (int64_t)v13;
    int64_t * v16 = (int64_t *)v12;
    function_5659d0(v16, v14);
    function_566180(&v9);
    int64_t v17; // 0x567f20
    if (*v15 == 0) {
        // 0x568028
        function_566180(v16);
        function_4eeb50(v10, v14);
        v17 = 0xffffffff;
    } else {
        int64_t * v18 = (int64_t *)(mutex + 56); // 0x567fcb
        int64_t v19 = *v18; // 0x567fcb
        v9 = v10;
        if (v19 == *(int64_t *)(mutex + 64)) {
            // 0x568060
            function_567df0(mutex + 48, v19, &v9);
        } else {
            if (v19 != 0) {
                // 0x567fe3
                *(int64_t *)v19 = v10;
            }
            // 0x567fe6
            *v18 = v19 + 8;
        }
        // 0x567fee
        v17 = (int64_t)*v11;
    }
    // 0x567ff0
    v3 = v17;
    v2 = v12;
    int64_t * v20; // 0x567f20
    int64_t v21; // 0x567f20
    if (g52 == 0) {
        goto lab_0x568003;
    } else {
        // 0x567ff5
        v3 = v17;
        v2 = v12;
        v20 = v16;
        v21 = v17;
        if (pthread_mutex_unlock((int64_t *)mutex2) != 0) {
            goto lab_0x56807b;
        } else {
            goto lab_0x568003;
        }
    }
  lab_0x568003:
    // 0x568003
    if (v1 == __readfsqword(40)) {
        // 0x568015
        return v3 & 0xffffffff;
    }
    // 0x568071
    __stack_chk_fail();
    v4 = v3;
    int64_t v22 = v2; // 0x568071
    goto lab_0x568076;
  lab_0x568076:
    // 0x568076
    function_4f1b30();
    v20 = (int64_t *)v22;
    v21 = v4;
    goto lab_0x56807b;
  lab_0x56807b:;
    int64_t v23 = function_20210(8); // 0x568080
    *(int64_t *)v23 = (int64_t)&g49;
    int64_t v24 = v21; // 0x567f20
    int64_t v25 = function_203b0(v23, 0x843278, 0x4f1a60); // 0x567f20
    while (true) {
        // 0x5680b2
        _Unwind_Resume((struct _Unwind_Exception *)v25);
        free((int64_t *)*(int64_t *)(v24 + 8));
        function_566180(v20);
        function_4eeb50(v24, 0x843278);
        function_4f1b70(&mutex2);
        v24 = (int64_t)&g59;
        v25 = (int64_t)&g59;
    }
}

// Address range: 0x56b2c0 - 0x56b4a5
int64_t function_56b2c0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x56b2d0
    int64_t v2 = *v1; // 0x56b2d0
    int64_t v3 = v2; // 0x56b2d5
    if (v2 == 0) {
        // 0x56b420
        v3 = function_4efd30(336);
        *(int32_t *)(v3 + 8) = 0;
        *(int64_t *)(v3 + 16) = 0;
        *(int64_t *)(v3 + 24) = 0;
        *(char *)(v3 + 32) = 0;
        *(int64_t *)(v3 + 40) = 0;
        *(int64_t *)(v3 + 48) = 0;
        *(int64_t *)(v3 + 56) = 0;
        *(int64_t *)v3 = (int64_t)&g50;
        *(int64_t *)(v3 + 64) = 0;
        *(int64_t *)(v3 + 72) = 0;
        *(char *)(v3 + 328) = 0;
        *v1 = v3;
    }
    int64_t v4; // 0x56b2c0
    if (a2 == 0) {
        // 0x56b368
        *(int64_t *)(v3 + 16) = (int64_t)&g47;
        *(int64_t *)(v3 + 24) = 0;
        *(int64_t *)(v3 + 72) = 0x2c0000002e;
        *(char *)(v3 + 32) = 0;
        int64_t v5 = (int32_t)&g53 ^ (int32_t)&g53; // 0x56b39d
        int64_t v6 = v5;
        char v7 = *(char *)(v6 + *(int64_t *)&g53); // 0x56b3a0
        *(int32_t *)(v3 + 80 + 4 * v6) = (int32_t)v7;
        v5 = v6 + 1;
        while (v6 != 35) {
            // 0x56b3a0
            v6 = v5;
            v7 = *(char *)(v6 + *(int64_t *)&g53);
            *(int32_t *)(v3 + 80 + 4 * v6) = (int32_t)v7;
            v5 = v6 + 1;
        }
        int64_t v8 = (int32_t)&g54 ^ (int32_t)&g54; // 0x56b3be
        int64_t v9 = v8;
        char v10 = *(char *)(v9 + *(int64_t *)&g54); // 0x56b3c0
        *(int32_t *)(v3 + 224 + 4 * v9) = (int32_t)v10;
        v4 = v3;
        v8 = v9 + 1;
        while (v9 != 25) {
            // 0x56b3c0
            v9 = v8;
            v10 = *(char *)(v9 + *(int64_t *)&g54);
            *(int32_t *)(v3 + 224 + 4 * v9) = (int32_t)v10;
            v4 = v3;
            v8 = v9 + 1;
        }
    } else {
        struct __locale_struct * v11 = (struct __locale_struct *)a2; // 0x56b2ec
        char * v12 = __nl_langinfo_l((int32_t)&g3, v11); // 0x56b2ec
        *(int32_t *)(*v1 + 72) = (int32_t)(int64_t)v12;
        char * v13 = __nl_langinfo_l((int32_t)&g4, v11); // 0x56b300
        int64_t v14 = *v1; // 0x56b305
        int32_t v15 = (int64_t)v13; // 0x56b309
        int32_t * v16 = (int32_t *)(v14 + 76); // 0x56b30b
        *v16 = v15;
        if (v15 != 0) {
            char * str = __nl_langinfo_l((int32_t)&g2, v11); // 0x56b3e8
            int32_t len = strlen(str); // 0x56b3f3
            int64_t v17 = len; // 0x56b3f3
            if (len != 0) {
                int64_t v18 = v17 + 1; // 0x56b48b
                int64_t v19 = function_4eec00(v18, a2); // 0x56b492
                return (int64_t)memcpy((int64_t *)v19, (int64_t *)str, (int32_t)v18);
            }
            int64_t v20 = *v1; // 0x56b404
            *(char *)(v20 + 32) = 0;
            *(int64_t *)(v20 + 16) = (int64_t)&g47;
            *(int64_t *)(v20 + 24) = v17;
            v4 = v20;
        } else {
            // 0x56b314
            *(int64_t *)(v14 + 24) = 0;
            *(char *)(v14 + 32) = 0;
            *v16 = 44;
            *(int64_t *)(v14 + 16) = (int64_t)&g47;
            v4 = v14;
        }
    }
    // 0x56b332
    *(int64_t *)(v4 + 48) = 4;
    *(int64_t *)(v4 + 64) = 5;
    *(int64_t *)(v4 + 40) = (int64_t)L"true";
    *(int64_t *)(v4 + 56) = (int64_t)L"false";
    return (int64_t)L"false";
}

// Address range: 0x5725b0 - 0x57278f
int64_t function_5725b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x5725c2
    char v2 = a1; // 0x5725db
    *(char *)(a2 + 33) = v2;
    *(char *)(a2 + 34) = v2;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x5725f5
    *v3 = 0;
    int32_t v4 = a1; // 0x5725fd
    *(int32_t *)(a2 + 88) = v4;
    int64_t * v5 = (int64_t *)(a2 + 40); // 0x572603
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a2 + 56); // 0x57260b
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a2 + 72); // 0x572616
    *v7 = 0;
    *(char *)(a2 + 111) = 1;
    int64_t v8; // 0x5725b0
    int64_t v9 = v8 + 1; // 0x57262e
    int64_t v10 = function_4eec00(v9, a1); // 0x572632
    int32_t v11; // bp-88, 0x5725b0
    function_52cbf0((int64_t *)&v11, v10, v8, 0);
    int64_t v12 = v11; // 0x57264a
    int64_t v13; // bp-72, 0x5725b0
    int64_t v14 = (int64_t)&v13; // 0x57264e
    *(char *)(v10 + v8) = 0;
    *v3 = v10;
    if (v12 != v14) {
        // 0x572665
        function_4eeb50(v12, v10);
    }
    int64_t v15 = function_4eec00(v9, a1); // 0x572680
    function_52cbf0((int64_t *)&v11, v15, v8, 0);
    int64_t v16 = v11; // 0x572698
    *(char *)(v15 + v8) = 0;
    *v5 = v15;
    if (v16 != v14) {
        // 0x5726b3
        function_4eeb50(v16, v15);
    }
    int64_t v17 = function_4eec00(v9, a1); // 0x5726ce
    function_52cbf0((int64_t *)&v11, v17, v8, 0);
    int64_t v18 = v11; // 0x5726e6
    *(char *)(v17 + v8) = 0;
    *v6 = v17;
    if (v18 != v14) {
        // 0x572701
        function_4eeb50(v18, v17);
    }
    int64_t v19 = function_4eec00(v9, a1); // 0x57271c
    function_52cbf0((int64_t *)&v11, v19, v8, 0);
    int64_t v20 = v11; // 0x572734
    *(char *)(v19 + v8) = 0;
    *v7 = v19;
    if (v20 != v14) {
        // 0x57274e
        function_4eeb50(v20, v19);
    }
    // 0x572753
    *(int32_t *)(a2 + 92) = v11;
    *(int32_t *)(a2 + 96) = v4;
    int64_t result = __readfsqword(40) ^ v1; // 0x572772
    if (result == 0) {
        // 0x57277d
        return result;
    }
    // 0x57278a
    __stack_chk_fail();
    return (int64_t)&g59;
}

// Address range: 0x5727c0 - 0x57299f
int64_t function_5727c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x5727d2
    char v2 = a1; // 0x5727eb
    *(char *)(a2 + 33) = v2;
    *(char *)(a2 + 34) = v2;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x572805
    *v3 = 0;
    int32_t v4 = a1; // 0x57280d
    *(int32_t *)(a2 + 88) = v4;
    int64_t * v5 = (int64_t *)(a2 + 40); // 0x572813
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a2 + 56); // 0x57281b
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a2 + 72); // 0x572826
    *v7 = 0;
    *(char *)(a2 + 111) = 1;
    int64_t v8; // 0x5727c0
    int64_t v9 = v8 + 1; // 0x57283e
    int64_t v10 = function_4eec00(v9, a1); // 0x572842
    int32_t v11; // bp-88, 0x5727c0
    function_52cbf0((int64_t *)&v11, v10, v8, 0);
    int64_t v12 = v11; // 0x57285a
    int64_t v13; // bp-72, 0x5727c0
    int64_t v14 = (int64_t)&v13; // 0x57285e
    *(char *)(v10 + v8) = 0;
    *v3 = v10;
    if (v12 != v14) {
        // 0x572875
        function_4eeb50(v12, v10);
    }
    int64_t v15 = function_4eec00(v9, a1); // 0x572890
    function_52cbf0((int64_t *)&v11, v15, v8, 0);
    int64_t v16 = v11; // 0x5728a8
    *(char *)(v15 + v8) = 0;
    *v5 = v15;
    if (v16 != v14) {
        // 0x5728c3
        function_4eeb50(v16, v15);
    }
    int64_t v17 = function_4eec00(v9, a1); // 0x5728de
    function_52cbf0((int64_t *)&v11, v17, v8, 0);
    int64_t v18 = v11; // 0x5728f6
    *(char *)(v17 + v8) = 0;
    *v6 = v17;
    if (v18 != v14) {
        // 0x572911
        function_4eeb50(v18, v17);
    }
    int64_t v19 = function_4eec00(v9, a1); // 0x57292c
    function_52cbf0((int64_t *)&v11, v19, v8, 0);
    int64_t v20 = v11; // 0x572944
    *(char *)(v19 + v8) = 0;
    *v7 = v19;
    if (v20 != v14) {
        // 0x57295e
        function_4eeb50(v20, v19);
    }
    // 0x572963
    *(int32_t *)(a2 + 92) = v11;
    *(int32_t *)(a2 + 96) = v4;
    int64_t result = __readfsqword(40) ^ v1; // 0x572982
    if (result == 0) {
        // 0x57298d
        return result;
    }
    // 0x57299a
    __stack_chk_fail();
    return (int64_t)&g59;
}
