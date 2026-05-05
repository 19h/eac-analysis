/*
 * Targeted RetDec C for native executable gap queue batch 18.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4cd7d0-0x4cd8f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x542470-0x542590 rank=- name=- kind=- bytes=- uncovered=-
 *   0x542650-0x542770 rank=- name=- kind=- bytes=- uncovered=-
 *   0x567df0-0x567f10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4abec-0x4ad09 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49b370-0x49b48d rank=- name=- kind=- bytes=- uncovered=-
 *   0x5736e0-0x5737fd rank=- name=- kind=- bytes=- uncovered=-
 *   0x594b8-0x595d4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x573800-0x57391c rank=- name=- kind=- bytes=- uncovered=-
 *   0x264e5-0x26600 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e4c0-0x54e5db rank=- name=- kind=- bytes=- uncovered=-
 *   0x565f90-0x5660ab rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c478-0x4c592 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40f90-0x410a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30d540-0x30d658 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b1100-0x4b1218 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1fcc0();
int64_t function_20210();
int64_t function_203b0();
int64_t function_2508e();
int64_t function_256ba();
int64_t function_261a4();
int64_t function_26452();
int64_t function_264e5();
int64_t function_27998();
int64_t function_27a2a();
int64_t function_29c3a();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_30d540();
int64_t function_3e04f();
int64_t function_4096a();
int64_t function_40e90();
int64_t function_40f90();
int64_t function_40fa8();
int64_t function_4106e();
int64_t function_49aaf0();
int64_t function_49b370();
int64_t function_49e770();
int64_t function_4aad8();
int64_t function_4abec();
int64_t function_4b08f0();
int64_t function_4b0f10();
int64_t function_4b1100();
int64_t function_4bee5();
int64_t function_4c367();
int64_t function_4c3be();
int64_t function_4c478();
int64_t function_4ccde0();
int64_t function_4cd7d0();
int64_t function_4d9fc();
int64_t function_4eea40();
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_52770();
int64_t function_542470();
int64_t function_542650();
int64_t function_54c860();
int64_t function_54e460();
int64_t function_54e4c0();
int64_t function_565f90();
int64_t function_567df0();
int64_t function_56e790();
int64_t function_56e800();
int64_t function_56e820();
int64_t function_56e860();
int64_t function_570310();
int64_t function_570890();
int64_t function_5736e0();
int64_t function_573800();
int64_t function_5923a();
int64_t function_592ee();
int64_t function_593ce();
int64_t function_594b8();
int64_t function_59c58();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_c6d58();

// Address range: 0x264e5 - 0x26600
int64_t function_264e5(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x264f3
    if (a1 != a2) {
        int64_t v2 = a1 + 8; // 0x26511
        if (v2 != a2) {
            // 0x2652b
            int64_t v3; // bp-96, 0x264e5
            int64_t v4 = (int64_t)&v3;
            int64_t v5 = function_261a4(a3, v2, a1); // 0x26534
            int64_t v6 = v2 + 8; // 0x2653b
            int64_t v7; // 0x264e5
            int64_t v8; // 0x264e5
            int64_t v9; // 0x264e5
            int64_t v10; // bp-128, 0x264e5
            uint64_t v11; // 0x26562
            int64_t v12; // 0x26573
            int64_t * v13; // 0x26541
            if ((char)v5 == 0) {
                // 0x2659e
                function_27998(&v10, a3);
                function_27998(&v3, (int64_t)&v10);
                function_26452(v2, &v3);
                function_27a2a(&v3);
                function_27a2a(&v10);
            } else {
                // 0x26541
                v13 = (int64_t *)v2;
                v3 = *v13;
                *v13 = (int64_t)&g4;
                v11 = v6 + -8 - a1;
                if (v11 >= 8) {
                    // 0x2656f
                    v8 = v11 / 8;
                    v12 = v6 - 8;
                    function_256ba(v12, v6 - 16);
                    v7 = v8 - 1;
                    while (v8 >= 2) {
                        // 0x2656f
                        v8 = v7;
                        v9 = v12;
                        v12 = v9 - 8;
                        function_256ba(v12, v9 - 16);
                        v7 = v8 - 1;
                    }
                }
                // 0x26584
                function_256ba(a1, v4);
                function_2508e(&v3);
            }
            // 0x265d4
            while (v6 != a2) {
                int64_t v14 = v6;
                v5 = function_261a4(a3, v14, a1);
                v6 = v14 + 8;
                if ((char)v5 == 0) {
                    // 0x2659e
                    function_27998(&v10, a3);
                    function_27998(&v3, (int64_t)&v10);
                    function_26452(v14, &v3);
                    function_27a2a(&v3);
                    function_27a2a(&v10);
                } else {
                    // 0x26541
                    v13 = (int64_t *)v14;
                    v3 = *v13;
                    *v13 = (int64_t)&g4;
                    v11 = v6 + -8 - a1;
                    if (v11 >= 8) {
                        // 0x2656f
                        v8 = v11 / 8;
                        v12 = v6 - 8;
                        function_256ba(v12, v6 - 16);
                        v7 = v8 - 1;
                        while (v8 >= 2) {
                            // 0x2656f
                            v8 = v7;
                            v9 = v12;
                            v12 = v9 - 8;
                            function_256ba(v12, v9 - 16);
                            v7 = v8 - 1;
                        }
                    }
                    // 0x26584
                    function_256ba(a1, v4);
                    function_2508e(&v3);
                }
            }
        }
    }
    int64_t result = 0; // 0x265ea
    if (v1 != __readfsqword(40)) {
        // 0x265ec
        __stack_chk_fail();
        result = (int64_t)&g10;
    }
    // 0x265f1
    return result;
}

// Address range: 0x40f90 - 0x40fa8
int64_t function_40f90(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40f90
    return function_40e90();
}

// Address range: 0x40fa8 - 0x4106e
int64_t function_40fa8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t v1 = __readfsqword(40); // 0x40fc8
    int64_t v2; // bp-144, 0x40fa8
    __asm_rep_stosd_memset((char *)&v2, 0, 28);
    int64_t v3 = 0xffffd8f0; // 0x40fee
    if ((a4 || a2) < 0x100000000) {
        int64_t v4 = a5;
        v2 = a3;
        int64_t v5 = function_40f90(&v2, v4 & 0xffffffff, a3, 0xffffffff, v4, a4); // 0x41009
        v3 = v5 & 0xffffffff;
        if ((int32_t)v5 == 0) {
            int64_t v6 = function_4096a(&v2, 4); // 0x4101c
            int32_t v7 = v6; // 0x41021
            if (v7 == 1) {
                // 0x4103b
                v3 = function_3e04f(&v2) & 0xffffffff;
            } else {
                // 0x41028
                function_3e04f(&v2);
                v3 = v7 != 0 ? v6 & 0xffffffff : 0xfffffffb;
            }
        }
    }
    int64_t result = v3; // 0x4105e
    if (v1 != __readfsqword(40)) {
        // 0x41060
        __stack_chk_fail();
        result = (int64_t)&g10;
    }
    // 0x41065
    return result;
}

// Address range: 0x4106e - 0x41077
int64_t function_4106e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4106e
    return function_40fa8(a1, a2, a3, a4, -1);
}

// Address range: 0x4abec - 0x4ad09
int64_t function_4abec(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4abf7
    int64_t v2 = a1 + 504; // 0x4ac0a
    int64_t * v3 = (int64_t *)(a1 + 440);
    int64_t * v4 = (int64_t *)(a1 + 456);
    int64_t * v5 = (int64_t *)(a1 + 448);
    int64_t * v6 = (int64_t *)(a1 + 464);
    int64_t v7; // 0x4abec
    int64_t v8; // 0x4abec
    int64_t v9; // 0x4abec
    int64_t v10; // 0x4abec
    int64_t v11; // 0x4abec
    int64_t v12; // 0x4abec
    int64_t v13; // 0x4abec
    int64_t v14; // 0x4abec
    int64_t v15; // 0x4abec
    int64_t v16; // 0x4abec
    int64_t v17; // bp-40, 0x4abec
    while (true) {
      lab_0x4ac0a:
        // 0x4ac0a
        v11 = v10;
        v8 = v7;
        function_729b6(&v17, v2);
        int64_t v18 = *v3; // 0x4ac19
        if (v18 == *(int64_t *)(a1 + 472)) {
            // 0x4ac93
            function_729ce(&v17);
            if (v1 == __readfsqword(40)) {
                // break -> 0x4ad00
                break;
            }
            // 0x4acab
            __stack_chk_fail();
            v13 = (int64_t)&g10;
            v15 = v14;
            goto lab_0x4acb0;
        } else {
            int64_t v19 = *v4; // 0x4ac29
            int64_t v20 = *(int64_t *)v18; // 0x4ac37
            int64_t v21; // 0x4abec
            if (v18 == v19 - 8) {
                // 0x4ac49
                function_4eeb50(*v5, v2, v18, v19, v8, v11);
                int64_t v22 = *v6 + 8; // 0x4ac55
                int64_t v23 = *(int64_t *)v22; // 0x4ac59
                *v6 = v22;
                *v5 = v23;
                *v4 = v23 + (int64_t)&g1;
                v21 = v23;
            } else {
                // 0x4ac43
                v21 = v18 + 8;
            }
            // 0x4ac79
            *v3 = v21;
            function_729ce(&v17);
            int64_t v24 = *(int64_t *)v20; // 0x4ac88
            v13 = v24;
            v15 = v20;
            v16 = v20;
            v9 = v8;
            v12 = v11;
            if (v24 == 0) {
                goto lab_0x4acef;
            } else {
                goto lab_0x4acb0;
            }
        }
    }
    // 0x4ad00
    return 0;
  lab_0x4acb0:;
    int64_t v25 = v15;
    v16 = v25;
    v9 = v8;
    v12 = v11;
    if (v13 == *(int64_t *)(a1 + 216)) {
        int64_t v26 = *(int64_t *)((int64_t)&v17 + 56); // 0x4acbf
        int64_t v27 = *(int64_t *)(v25 + 48); // 0x4acc3
        if (v27 == 0) {
            // 0x4acd6
            v16 = v25;
            v9 = *(int64_t *)(v25 + 24);
            v12 = v26;
        } else {
            // 0x4accc
            v16 = v25;
            v9 = v27 + 4;
            v12 = v26;
        }
    }
    goto lab_0x4acef;
  lab_0x4acef:
    // 0x4acef
    function_4d9fc(a1 + 104, v16);
    v14 = v16;
    v7 = v9;
    v10 = v12;
    goto lab_0x4ac0a;
}

// Address range: 0x4c478 - 0x4c592
int64_t function_4c478(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4c49f
    int64_t v2 = 0x555555555555555; // 0x4c4d3
    int64_t v3; // 0x4c478
    int64_t v4; // 0x4c478
    if (v2 > 0x555555555555555 || v2 < -0x5555555555555555 * (*v1 - a1 >> 4)) {
        goto lab_0x4c581;
    } else {
        // 0x4c4e2
        v3 = v2;
        v4 = 0;
        if (v2 != 0) {
            goto lab_0x4c581;
        } else {
            goto lab_0x4c4ee;
        }
    }
  lab_0x4c581:;
    int64_t v5 = function_4efd30((int128_t)(48 * v2), a2, a1); // 0x4c585
    v3 = v2;
    v4 = v5;
    goto lab_0x4c4ee;
  lab_0x4c4ee:;
    int64_t v6 = v4 + a2 - a1; // 0x4c4f1
    *(int32_t *)v6 = (int32_t)a1;
    int64_t v7 = function_4aad8(*(int64_t *)(a3 + 8) - 24); // 0x4c500
    int64_t v8 = v6 + 16; // 0x4c509
    *(int64_t *)(v6 + 8) = v7;
    function_4c3be(v8, a3 + 16);
    *(int64_t *)(v6 + 40) = *(int64_t *)(a3 + 40);
    int64_t v9 = function_4bee5(v8, a2, v4) + 48; // 0x4c532
    int64_t v10 = function_4bee5(a2, *v1, v9); // 0x4c539
    int64_t v11 = *v1; // 0x4c542
    function_4c367(a2, v11);
    int64_t result; // 0x4c478
    if (a2 != 0) {
        // 0x4c558
        function_4eeb50(a2, v11, v9, result, result, result);
    }
    // 0x4c55d
    *(int64_t *)a1 = v4;
    *v1 = v10;
    *(int64_t *)(a1 + 16) = v4 + 48 * v3;
    return result;
}

// Address range: 0x594b8 - 0x595d4
int64_t function_594b8(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x594c7
    int64_t v2 = a2; // 0x594df
    int64_t v3 = 0; // 0x594df
    if (*(int64_t *)(a2 - 24) != 0) {
        int64_t v4 = a3 - 24; // 0x594f1
        if ((char)function_29cea(v4) == 0) {
            // 0x5951c
            function_29cf4(v4, 0);
        } else {
            // 0x59502
            function_5923a(v4);
            *(int64_t *)a3 = (int64_t)&g5;
        }
        // 0x59527
        int64_t v5; // bp-64, 0x594b8
        function_593ce(&v5, a1, a2);
        int64_t v6; // bp-56, 0x594b8
        function_592ee(&v6, a1, &v5);
        int64_t v7 = v6; // 0x59550
        uint64_t v8 = function_4eea40(v7, 4 * *(int64_t *)(v7 - 24), 0xc70f6907); // 0x59566
        int64_t v9 = function_59c58(a1 + 8, v8 % *(int64_t *)(a1 + 16), &v6, v8); // 0x5957e
        v3 = 0;
        if (v9 != 0) {
            int64_t v10 = *(int64_t *)v9; // 0x59588
            v3 = 0;
            if (v10 != 0) {
                // 0x59590
                function_52770(a3, v10 + 16);
                v3 = 1;
            }
        }
        // 0x5959f
        function_29c3a(&v6);
        v2 = function_29c3a(&v5);
    }
    int64_t result = v3 | v2 & -256; // 0x595c0
    if (v1 != __readfsqword(40)) {
        // 0x595c2
        __stack_chk_fail();
        result = (int64_t)&g10;
    }
    // 0x595c7
    return result;
}

// Address range: 0x30d540 - 0x30d658
int64_t function_30d540(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30d540
    return function_c6d58();
}

// Address range: 0x49b370 - 0x49b48b
int64_t function_49b370(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 216); // 0x49b378
    int32_t v2 = *v1; // 0x49b378
    int32_t v3 = v2; // 0x49b381
    if (v2 == 22) {
        int64_t result = function_49aaf0(); // 0x49b420
        if ((int32_t)result != 0) {
            // 0x49b38e
            return result;
        }
        // 0x49b42d
        v3 = *v1;
    }
    // 0x49b387
    if (v3 != 21) {
        // 0x49b38e
        return 0;
    }
    int64_t * v4 = (int64_t *)(a1 + 200); // 0x49b398
    char v5 = *(char *)*v4; // 0x49b3ba
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g6, "got an alert message, type: [%d:%d]", v5);
    int64_t v6 = *v4; // 0x49b3cc
    char v7 = *(char *)v6; // 0x49b3d3
    if (v7 == 2) {
        char v8 = *(char *)(v6 + 1); // 0x49b438
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g7, "is a fatal alert message (msg %d)", v8);
        // 0x49b38e
        return 0xffff8880;
    }
    // 0x49b3db
    if (v7 != 1) {
        // 0x49b38e
        return 0xffff9980;
    }
    char v9 = *(char *)(v6 + 1); // 0x49b3e5
    if (v9 == 0) {
        int64_t result2 = function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g8, "is a close notify message", v5); // 0x49b486
        return result2;
    }
    // 0x49b3ed
    if (v9 != 100) {
        // 0x49b38e
        return 0xffff9980;
    }
    // 0x49b3f2
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "is a SSLv3 no_cert", v5);
    return 0;
}

// Address range: 0x4b1100 - 0x4b1215
int64_t function_4b1100(int64_t a1, uint64_t a2) {
    int64_t v1 = function_4b0f10(); // 0x4b111d
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x4b1122
    uint64_t v3 = v1 + a2; // 0x4b1126
    uint64_t v4 = 64 * *v2; // 0x4b1129
    int64_t result = v1; // 0x4b1130
    if (v3 > v4) {
        // 0x4b11e0
        result = function_4b08f0(a1, v3 / 64 + (int64_t)(v3 % 64 != 0), v4);
        if ((int32_t)result != 0) {
            // 0x4b11cf
            return result;
        }
    }
    uint64_t v5 = a2 / 64; // 0x4b110a
    if (a2 >= 64) {
        uint64_t v6 = *v2; // 0x4b113b
        if (v5 >= v6) {
            // 0x4b120c
            if (v6 != 0) {
                // 0x4b11cf
                return result;
            }
        } else {
            int64_t v7 = *(int64_t *)(a1 + 16) - 8; // 0x4b1152
            int64_t v8 = 8 * v5; // 0x4b1157
            int64_t v9 = v7 + 8 * v6;
            *(int64_t *)v9 = *(int64_t *)((v8 ^ -8) + 8 + v9);
            int64_t v10 = v9 - 8; // 0x4b1168
            int64_t v11 = v5; // 0x4b116f
            while (v10 != v7 + v8) {
                // 0x4b1160
                v9 = v10;
                *(int64_t *)v9 = *(int64_t *)((v8 ^ -8) + 8 + v9);
                v10 = v9 - 8;
                v11 = v5;
            }
            *(int64_t *)(8 * v11 + v7) = 0;
            int64_t v12 = v11 - 1; // 0x4b1181
            v11 = v12;
            while (v12 != 0) {
                // 0x4b1178
                *(int64_t *)(8 * v11 + v7) = 0;
                v12 = v11 - 1;
                v11 = v12;
            }
        }
    }
    uint64_t v13 = a2 % 64; // 0x4b1112
    if (v13 == 0 || v5 >= *v2) {
        // 0x4b11cf
        return 0;
    }
    int64_t v14 = v5; // 0x4b11a5
    int64_t * v15 = (int64_t *)(8 * v14 + *(int64_t *)(a1 + 16)); // 0x4b11a8
    uint64_t v16 = *v15; // 0x4b11a8
    *v15 = v16 << v13;
    v14++;
    int64_t v17 = v16 >> -a2 % 64; // 0x4b11cb
    while (*v2 > v14) {
        // 0x4b11a8
        v15 = (int64_t *)(8 * v14 + *(int64_t *)(a1 + 16));
        v16 = *v15;
        *v15 = v16 << v13 | v17;
        v14++;
        v17 = v16 >> -a2 % 64;
    }
    // 0x4b11cf
    return 0;
}

// Address range: 0x4cd7d0 - 0x4cd8ef
int64_t function_4cd7d0(int64_t a1, int64_t a2, uint64_t a3) {
    if (a3 == 0) {
        // 0x4cd867
        int64_t result; // 0x4cd7d0
        return result;
    }
    uint32_t v1 = (int32_t)a1;
    int32_t v2 = a3;
    uint32_t v3 = v2 + v1; // 0x4cd80a
    *(int32_t *)a1 = v3;
    if (v3 < v2) {
        int32_t * v4 = (int32_t *)(a1 + 4); // 0x4cd819
        *v4 = *v4 + 1;
    }
    uint32_t v5 = v1 % 64; // 0x4cd80c
    int64_t v6 = v5; // 0x4cd80c
    uint32_t v7 = 64 - v5; // 0x4cd812
    if (v5 != 0 && (int64_t)v7 <= a3) {
        // 0x4cd8d1
        return (int64_t)memcpy((int64_t *)(a1 + 40 + v6), (int64_t *)a2, v7);
    }
    int64_t v8 = a2; // 0x4cd82a
    if (a3 < 64) {
        // 0x4cd890
        return (int64_t)memcpy((int64_t *)(a1 + 40 + v6), (int64_t *)a2, v2);
    }
    int64_t v9 = a3; // 0x4cd82a
    v9 -= 64;
    function_4ccde0(a1, v8);
    v8 += 64;
    while (v9 >= 64) {
        // 0x4cd838
        v9 -= 64;
        function_4ccde0(a1, v8);
        v8 += 64;
    }
    uint64_t v10 = a3 % 64; // 0x4cd855
    int64_t result2 = a3 - 64 & -64; // 0x4cd859
    if (v10 == 0) {
        // 0x4cd867
        return result2;
    }
    int64_t v11 = a2 + 64 + result2;
    return (int64_t)memcpy((int64_t *)(a1 + 40 + v6), (int64_t *)v11, (int32_t)v10);
}

// Address range: 0x542470 - 0x542590
int64_t function_542470(char * a1) {
    int64_t v1 = function_20210(16); // 0x54247e
    function_56e790(v1, (int64_t)gettext(a1));
    int64_t v2 = function_203b0(v1, 0x847688, 0x566b00); // 0x5424aa
    function_1fcc0(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v2);
    int64_t v3 = function_20210(16); // 0x5424de
    function_56e800(v3, (int64_t)gettext((char *)v2));
    int64_t v4 = function_203b0(v3, 0x8476a0, 0x566bb0); // 0x54250a
    function_1fcc0(v3);
    _Unwind_Resume((struct _Unwind_Exception *)v4);
    int64_t v5 = function_20210(16); // 0x54253e
    function_56e820(v5, (int64_t)gettext((char *)v4));
    int64_t v6 = function_203b0(v5, 0x8476b8, 0x566bf0); // 0x54256a
    function_1fcc0(v5);
    _Unwind_Resume((struct _Unwind_Exception *)v6);
    return (int64_t)&g10;
}

// Address range: 0x542650 - 0x542770
int64_t function_542650(int64_t str, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x542650
    int64_t v1; // 0x542650
    if ((char)v1 != 0) {
        // 0x542688
        int128_t v2; // 0x542650
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    // 0x5426ab
    __readfsqword(40);
    int64_t len = strlen((char *)str); // 0x5426c0
    int64_t v3 = 8; // bp-232, 0x5426e0
    int64_t v4 = (int64_t)&v3 + 15 - (len + (int64_t)&g2 & -16) & -16; // 0x54270e
    function_570310(v4, len + (int64_t)&g1, str, &v3);
    int64_t v5 = function_20210(16); // 0x542726
    function_56e860(v5, (int64_t)gettext((char *)v4));
    int64_t v6 = function_203b0(v5, 0x8476e8, 0x566c70); // 0x542752
    function_1fcc0(v5);
    _Unwind_Resume((struct _Unwind_Exception *)v6);
    return (int64_t)&g10;
}

// Address range: 0x54e4c0 - 0x54e5d4
// From class:    std::__codecvt_utf16_base<char16_t>
// Type:          virtual member function
int64_t function_54e4c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x54e4c0
    int64_t v1; // 0x54e4c0
    uint64_t v2 = v1;
    uint32_t v3 = *(int32_t *)(a1 + 24); // 0x54e4d6
    __readfsqword(40);
    int64_t v4 = a6; // 0x54e50a
    int64_t v5 = a3; // 0x54e50a
    int64_t result3 = 1; // 0x54e50a
    if ((char)function_54e460() != 0) {
        // 0x54e510
        v4 = a6;
        v5 = a3;
        result3 = 0;
        if (a3 != a4) {
            // 0x54e519
            v4 = a6;
            v5 = a3;
            result3 = 1;
            if (a7 - a6 >= 2) {
                int64_t result = v2 % 0x10000; // 0x54e52b
                uint32_t v6 = (int32_t)v2 % 0x10000;
                if (v6 - 0xd800 <= (int32_t)&g3) {
                    // 0x54e5d8
                    return result;
                }
                uint32_t v7 = (int32_t)*(int64_t *)(a1 + 16); // 0x54e546
                if (v6 > v7) {
                    // 0x54e5d8
                    return result;
                }
                int64_t v8 = a6; // 0x54e559
                int64_t v9 = a3; // 0x54e559
                int64_t v10 = result;
                v9 += 2;
                int64_t v11 = v3 % 2 == 0 ? (int64_t)llvm_bswap_i16((int16_t)v10) : v10;
                *(int16_t *)v8 = (int16_t)v11;
                v8 += 2;
                v4 = v8;
                v5 = v9;
                result3 = 0;
                while (v9 != a4) {
                    // 0x54e560
                    v4 = v8;
                    v5 = v9;
                    result3 = 1;
                    if (a7 - v8 < 2) {
                        // break -> 0x54e5b5
                        break;
                    }
                    uint16_t v12 = *(int16_t *)v9; // 0x54e56e
                    int64_t v13 = v12; // 0x54e56e
                    uint32_t v14 = (int32_t)v12;
                    int64_t result2 = v13; // 0x54e584
                    if (v7 < v14 || v14 - 0xd800 <= (int32_t)&g3) {
                        // 0x54e5d8
                        return result2;
                    }
                    v10 = v13;
                    v9 += 2;
                    v11 = v3 % 2 == 0 ? (int64_t)llvm_bswap_i16((int16_t)v10) : v10;
                    *(int16_t *)v8 = (int16_t)v11;
                    v8 += 2;
                    v4 = v8;
                    v5 = v9;
                    result3 = 0;
                }
            }
        }
    }
    // 0x54e5b5
    *(int64_t *)a5 = v5;
    *(int64_t *)a8 = v4;
    __readfsqword(40);
    return result3;
}

// Address range: 0x565f90 - 0x5660a9
int64_t function_565f90(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x565f99
    int64_t v2 = *v1; // 0x565f99
    if (v2 == 0) {
        goto lab_0x56600a;
    } else {
        int64_t * v3 = (int64_t *)(a1 + 16); // 0x565fa2
        int64_t v4 = *v3; // 0x565fa2
        int64_t v5 = 0; // 0x565fa7
        if (v4 == 0) {
            // 0x566005
            function_4eeb40(v2);
            goto lab_0x56600a;
        } else {
            int64_t v6 = *(int64_t *)(v2 + 8 * v5); // 0x565fcd
            int64_t v7 = v4; // 0x565fd4
            int64_t v8 = v2; // 0x565fd4
            int32_t * v9; // 0x565f90
            if (v6 != 0) {
                // 0x565fd6
                v9 = (int32_t *)(v6 + 8);
                *v9 = *v9 - 1;
                v8 = *v1;
                v7 = *v3;
            }
            int64_t v10 = v8;
            int64_t v11 = v5 + 1; // 0x565fc3
            int64_t v12 = v7; // 0x565fcb
            v5 = v11;
            int64_t v13 = v10; // 0x565fcb
            while (v7 > v11) {
                // 0x565fcd
                v6 = *(int64_t *)(v13 + 8 * v5);
                v7 = v12;
                v8 = v13;
                if (v6 != 0) {
                    // 0x565fd6
                    v9 = (int32_t *)(v6 + 8);
                    *v9 = *v9 - 1;
                    v8 = *v1;
                    v7 = *v3;
                }
                // 0x565fc3
                v10 = v8;
                v11 = v5 + 1;
                v12 = v7;
                v5 = v11;
                v13 = v10;
            }
            // 0x566000
            if (v10 == 0) {
                goto lab_0x56600a;
            } else {
                // 0x566005
                function_4eeb40(v10);
                goto lab_0x56600a;
            }
        }
    }
  lab_0x56600a:;
    int64_t * v14 = (int64_t *)(a1 + 24); // 0x56600a
    int64_t v15 = *v14; // 0x56600a
    if (v15 == 0) {
        goto lab_0x56607a;
    } else {
        int64_t * v16 = (int64_t *)(a1 + 16); // 0x566013
        int64_t v17 = *v16; // 0x566013
        int64_t v18 = 0; // 0x566018
        if (v17 == 0) {
            // 0x566075
            function_4eeb40(v15);
            goto lab_0x56607a;
        } else {
            int64_t v19 = *(int64_t *)(v15 + 8 * v18); // 0x56603d
            int64_t v20 = v17; // 0x566044
            int64_t v21 = v15; // 0x566044
            int32_t * v22; // 0x565f90
            if (v19 != 0) {
                // 0x566046
                v22 = (int32_t *)(v19 + 8);
                *v22 = *v22 - 1;
                v21 = *v14;
                v20 = *v16;
            }
            int64_t v23 = v21;
            int64_t v24 = v18 + 1; // 0x566033
            int64_t v25 = v20; // 0x56603b
            v18 = v24;
            int64_t v26 = v23; // 0x56603b
            while (v20 > v24) {
                // 0x56603d
                v19 = *(int64_t *)(v26 + 8 * v18);
                v20 = v25;
                v21 = v26;
                if (v19 != 0) {
                    // 0x566046
                    v22 = (int32_t *)(v19 + 8);
                    *v22 = *v22 - 1;
                    v21 = *v14;
                    v20 = *v16;
                }
                // 0x566033
                v23 = v21;
                v24 = v18 + 1;
                v25 = v20;
                v18 = v24;
                v26 = v23;
            }
            // 0x566070
            if (v23 == 0) {
                goto lab_0x56607a;
            } else {
                // 0x566075
                function_4eeb40(v23);
                goto lab_0x56607a;
            }
        }
    }
  lab_0x56607a:;
    int64_t * v27 = (int64_t *)(a1 + 32); // 0x56607a
    int64_t v28 = *v27; // 0x56607a
    if (v28 == 0) {
        // 0x5660a9
        return 0;
    }
    int64_t v29 = 0;
    int64_t v30 = *(int64_t *)(v29 + v28); // 0x566088
    int64_t result = v28; // 0x56608f
    if (v30 != 0) {
        // 0x566091
        function_4eeb40(v30);
        result = *v27;
    }
    int64_t v31 = result; // 0x5660a2
    int64_t v32 = v29 + 8; // 0x5660a2
    while (v29 != 88) {
        // 0x566088
        v29 = v32;
        v30 = *(int64_t *)(v29 + v31);
        result = v31;
        if (v30 != 0) {
            // 0x566091
            function_4eeb40(v30);
            result = *v27;
        }
        // 0x56609a
        v31 = result;
        v32 = v29 + 8;
    }
    // 0x5660a9
    return result;
}

// Address range: 0x567df0 - 0x567f10
int64_t function_567df0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x567e07
    uint64_t v2 = *v1 - a1 >> 3; // 0x567e17
    int64_t v3 = 1; // 0x567e1e
    int64_t v4; // 0x567df0
    int64_t v5; // 0x567df0
    if (v2 == 0) {
        goto lab_0x567ee5;
    } else {
        // 0x567e24
        v3 = 2 * v2;
        v5 = v3;
        v4 = -8;
        if (v2 < v3 == v3 < 0x2000000000000000) {
            goto lab_0x567ee5;
        } else {
            goto lab_0x567e38;
        }
    }
  lab_0x567ee5:
    // 0x567ee5
    v5 = v3;
    v4 = 8 * v3;
    goto lab_0x567e38;
  lab_0x567e38:;
    int64_t v6 = function_4efd30((int128_t)v4, v5, a3); // 0x567e3f
    int64_t v7 = *v1; // 0x567e48
    int64_t v8 = v6 + a2 - a1; // 0x567e5c
    int64_t v9 = v6; // 0x567e5f
    if (v8 != 0) {
        // 0x567e61
        *(int64_t *)v8 = a3;
        v9 = a3;
    }
    int64_t v10 = a2 - v4; // 0x567e59
    int64_t dest_mem = v9; // 0x567e6a
    int64_t v11 = a3; // 0x567e6a
    int64_t v12 = v5; // 0x567e6a
    if (v4 != a2) {
        // 0x567e6c
        dest_mem = (int64_t)memmove((int64_t *)v6, (int64_t *)v4, (int32_t)v10);
        v11 = v10;
        v12 = v4;
    }
    int64_t v13 = v6 + 8 + v10; // 0x567e8f
    int64_t v14 = v7 - a2; // 0x567e94
    int64_t v15 = dest_mem; // 0x567e9a
    int64_t v16 = v11; // 0x567e9a
    int64_t v17 = v12; // 0x567e9a
    int64_t v18 = v13; // 0x567e9a
    if (v7 != a2) {
        int64_t dest_mem2 = (int64_t)memcpy((int64_t *)v13, (int64_t *)a2, (int32_t)v14); // 0x567ea5
        v15 = dest_mem2;
        v16 = v14;
        v17 = a2;
        v18 = dest_mem2;
    }
    int64_t result = v15; // 0x567eb3
    if (v4 != 0) {
        // 0x567eb5
        int64_t v19; // 0x567df0
        result = function_4eeb50(v4, v17, v16, v7, v18, v19);
    }
    // 0x567ebd
    *(int64_t *)a1 = v6;
    *v1 = v18 + v14;
    *(int64_t *)(a1 + 16) = v6 + v4;
    return result;
}

// Address range: 0x5736e0 - 0x5737f6
int64_t function_5736e0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = __readfsqword(40); // 0x573704
    int64_t v2; // 0x5736e0
    int64_t v3; // 0x5736e0
    int64_t v4; // 0x5736e0
    int64_t v5; // 0x5736e0
    int64_t result; // 0x5736e0
    int64_t v6; // 0x5736e0
    int64_t v7; // 0x5736e0
    int64_t v8; // 0x5736e0
    int64_t v9; // 0x5736e0
    int64_t v10; // bp-104, 0x5736e0
    if (a9 == 0) {
        // 0x5737b0
        result = a1;
        v6 = a7;
        v8 = a8;
        v2 = a5;
        v4 = 0x100000000000000 * a6 >> 56;
        goto lab_0x57378f;
    } else {
        // 0x57371c
        v7 = 0;
        v9 = a2;
        v3 = a5;
        v5 = a6;
        if (*(int64_t *)(a9 + 32) == 0) {
            goto lab_0x5737cd;
        } else {
            int64_t v11 = *(int64_t *)a9; // 0x573727
            int64_t v12 = (int64_t)&v10; // 0x57373a
            int64_t v13; // bp-88, 0x5736e0
            int64_t v14 = (int64_t)&v13; // 0x573740
            v10 = v14;
            function_570890(&v10, v11, *(int64_t *)(a9 + 8) + v11, 0);
            int64_t v15 = a4 % 256; // 0x573751
            int64_t v16 = 0x100000000000000 * a6 >> 56; // 0x573756
            result = v12;
            v6 = v15;
            v8 = a2;
            v4 = v16;
            if (v10 != v14) {
                // 0x57377a
                int64_t v17; // 0x5736e0
                function_4eeb50(v10, a2, a3, v15, v17, v16);
                result = 0x100000000 * v12 >> 32;
                v6 = v15;
                v8 = a2;
                v4 = v16;
            }
            goto lab_0x57378f;
        }
    }
  lab_0x57378f:;
    int64_t v18 = __readfsqword(40) ^ v1; // 0x573793
    if (v18 == 0) {
        // 0x57379e
        return result;
    }
    // 0x5737c8
    __stack_chk_fail();
    v7 = v6;
    int64_t v19 = v18; // 0x5737c8
    v9 = v8;
    v3 = v2;
    v5 = v4;
    goto lab_0x5737cd;
  lab_0x5737cd:;
    int64_t v20 = function_542470("uninitialized __any_string"); // 0x5737d4
    if (v10 != v19 + 16) {
        // 0x5737e9
        function_4eeb50(v10, v9, a3, v7, v3, v5);
    }
    // 0x5737ee
    _Unwind_Resume((struct _Unwind_Exception *)v20);
    return (int64_t)&g10;
}

// Address range: 0x573800 - 0x57391a
int64_t function_573800(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = __readfsqword(40); // 0x573821
    int64_t result = a1; // 0x573833
    int64_t v2 = a7; // 0x573833
    int64_t v3 = a8; // 0x573833
    int64_t v4 = a6; // 0x573833
    int64_t v5; // 0x573800
    int64_t v6; // 0x573800
    int64_t v7; // 0x573800
    int64_t v8; // 0x573800
    int64_t v9; // bp-104, 0x573800
    if (a9 == 0) {
        goto lab_0x5738b6;
    } else {
        // 0x573839
        v7 = 0;
        v8 = a2;
        v5 = a5;
        v6 = a6;
        if (*(int64_t *)(a9 + 32) == 0) {
            goto lab_0x5738f1;
        } else {
            int64_t v10 = *(int64_t *)a9; // 0x573844
            int64_t v11 = (int64_t)&v9; // 0x573861
            int64_t v12; // bp-88, 0x573800
            int64_t v13 = (int64_t)&v12; // 0x573868
            v9 = v13;
            function_54c860(&v9, v10, 4 * *(int64_t *)(a9 + 8) + v10, 0);
            int64_t v14 = a4 % 256; // 0x573875
            int64_t v15 = a6 & 0xffffffff; // 0x57387d
            result = v11;
            v2 = v14;
            v3 = a2;
            v4 = v15;
            if (v9 != v13) {
                // 0x5738a1
                int64_t v16; // 0x573800
                function_4eeb50(v9, a2, a3, v14, v16, v15);
                result = v11;
                v2 = v14;
                v3 = a2;
                v4 = v15;
            }
            goto lab_0x5738b6;
        }
    }
  lab_0x5738b6:;
    int64_t v17 = __readfsqword(40) ^ v1; // 0x5738ba
    if (v17 == 0) {
        // 0x5738c5
        return result;
    }
    // 0x5738ec
    __stack_chk_fail();
    v7 = v2;
    int64_t v18 = v17; // 0x5738ec
    v8 = v3;
    v5 = a5;
    v6 = v4;
    goto lab_0x5738f1;
  lab_0x5738f1:;
    int64_t v19 = function_542470("uninitialized __any_string"); // 0x5738f8
    if (v9 != v18 + 16) {
        // 0x57390d
        function_4eeb50(v9, v8, a3, v7, v5, v6);
    }
    // 0x573912
    _Unwind_Resume((struct _Unwind_Exception *)v19);
    return (int64_t)&g10;
}
