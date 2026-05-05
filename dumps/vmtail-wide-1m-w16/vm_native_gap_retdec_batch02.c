/*
 * Targeted RetDec C for native executable gap queue batch 2.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4c6100-0x4c62d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b60-0x56d34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bcd80-0x4bcf54 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b8bc0-0x4b8d92 rank=- name=- kind=- bytes=- uncovered=-
 *   0x572230-0x572400 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b36d0-0x4b389f rank=- name=- kind=- bytes=- uncovered=-
 *   0x5586e0-0x5588ad rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f20e-0x4f3da rank=- name=- kind=- bytes=- uncovered=-
 *   0x50e4c0-0x50e68c rank=- name=- kind=- bytes=- uncovered=-
 *   0x619f2-0x61bbd rank=- name=- kind=- bytes=- uncovered=-
 *   0x502fa0-0x50316a rank=- name=- kind=- bytes=- uncovered=-
 *   0x505870-0x505a3a rank=- name=- kind=- bytes=- uncovered=-
 *   0x556610-0x5567da rank=- name=- kind=- bytes=- uncovered=-
 *   0x5100a0-0x510269 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55a0c0-0x55a289 rank=- name=- kind=- bytes=- uncovered=-
 *   0x530c90-0x530e56 rank=- name=- kind=- bytes=- uncovered=-
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
struct _TYPEDEF___mbstate_t;
struct _IO_FILE;
struct utsname;
extern int g1;
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
unsigned char llvm_ctpop_i8(unsigned char value);
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
int128_t __asm_movapd(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_cmpnlesd(int128_t left, int128_t right);
int128_t __asm_cvtsi2sd(int64_t value);
int128_t __asm_subsd(int128_t left, int128_t right);
int64_t __asm_cvttsd2si(int128_t value);
void __asm_ucomisd(int128_t left, int128_t right);
int128_t __asm_movups();
void __asm_movups_133();
float80_t __frontend_reg_load_fpr(int32_t reg);
void __frontend_reg_store_fpr(int32_t reg, float80_t value);
char *__nl_langinfo_l(int32_t item, struct __locale_struct *locale);
struct __locale_struct *__uselocale(struct __locale_struct *locale);
char *dgettext(char *domain, char *msgid);
char *gettext(char *msgid);
char *bind_textdomain_codeset(char *domainname, char *codeset);
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
void *memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
char *strdup(const char *s);
struct _Unwind_Exception;
void _Unwind_Resume(struct _Unwind_Exception *exception);

int64_t function_20110();
int64_t function_20730();
int64_t function_208a0();
int64_t function_2508e();
int64_t function_25622();
int64_t function_2562c();
int64_t function_25a28();
int64_t function_25e90();
int64_t function_29c3a();
int64_t function_35ef6();
int64_t function_449a8();
int64_t function_48eb2b();
int64_t function_4afe70();
int64_t function_4aff90();
int64_t function_4b0080();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0ac0();
int64_t function_4b0ec0();
int64_t function_4b0fa0();
int64_t function_4b1100();
int64_t function_4b1220();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1820();
int64_t function_4b36d0();
int64_t function_4b8b30();
int64_t function_4b8bc0();
int64_t function_4ba580();
int64_t function_4ba5b0();
int64_t function_4ba6b0();
int64_t function_4ba6e0();
int64_t function_4ba830();
int64_t function_4bbff0();
int64_t function_4bcbb0();
int64_t function_4bcd80();
int64_t function_4bcda0();
int64_t function_4bce10();
int64_t function_4bf0f0();
int64_t function_4c3b10();
int64_t function_4c3b30();
int64_t function_4c40e0();
int64_t function_4c42d0();
int64_t function_4c4300();
int64_t function_4c4360();
int64_t function_4c52c0();
int64_t function_4c5330();
int64_t function_4c53c0();
int64_t function_4c6100();
int64_t function_4c8e60();
int64_t function_4ccc30();
int64_t function_4cccc0();
int64_t function_4ccd50();
int64_t function_4cd7d0();
int64_t function_4cd900();
int64_t function_4e8b2();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f20e();
int64_t function_502870();
int64_t function_502fa0();
int64_t function_505130();
int64_t function_505870();
int64_t function_5088b0();
int64_t function_50ab00();
int64_t function_50c440();
int64_t function_50e0e0();
int64_t function_50e1e0();
int64_t function_50e4c0();
int64_t function_50f6f0();
int64_t function_50fc20();
int64_t function_5100a0();
int64_t function_524600();
int64_t function_52af50();
int64_t function_52cbf0();
int64_t function_52fb30();
int64_t function_5303e0();
int64_t function_530c90();
int64_t function_5403d0();
int64_t function_540b20();
int64_t function_5423f0();
int64_t function_542470();
int64_t function_542590();
int64_t function_542650();
int64_t function_549b10();
int64_t function_54b780();
int64_t function_54d560();
int64_t function_554b00();
int64_t function_556610();
int64_t function_556660();
int64_t function_558300();
int64_t function_558400();
int64_t function_5586e0();
int64_t function_559cd0();
int64_t function_55a0c0();
int64_t function_5659d0();
int64_t function_565f30();
int64_t function_566180();
int64_t function_566390();
int64_t function_56b60();
int64_t function_56d3b0();
int64_t function_572230();
int64_t function_5826b();
int64_t function_61428();
int64_t function_6190c();
int64_t function_619f2();
int64_t function_61bbe();
int64_t function_729c2();
int64_t function_729ce();

// Address range: 0x4f20e - 0x4f3da
int64_t function_4f20e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x4f228
    uint64_t v2 = *(int64_t *)(a1 - 24); // 0x4f238
    int64_t v3 = a3; // 0x4f23f
    int64_t v4 = a2; // 0x4f23f
    int64_t v5 = a1; // 0x4f23f
    if (v2 < a2) {
        // 0x4f241
        function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v2);
        v3 = a2;
        v4 = (int64_t)"basic_string::replace";
        v5 = (int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)";
    }
    uint64_t v6 = v3;
    uint64_t v7 = v2 - v4; // 0x4f267
    int64_t v8 = v7 > v6 ? v6 : v7; // 0x4f26d
    int64_t v9 = v5; // 0x4f27a
    if (0x3ffffffffffffff9 - v2 + v8 < a5) {
        // 0x4f27c
        function_542590("basic_string::replace");
        v9 = (int64_t)"basic_string::replace";
    }
    uint64_t v10 = v9;
    uint64_t v11; // 0x4f20e
    if (v10 > a4 || v10 + v2 < a4) {
        goto lab_0x4f28d;
    } else {
        int64_t v12 = v10 - 24; // 0x4f2c1
        if ((char)function_25622(v12) != 0) {
            goto lab_0x4f28d;
        } else {
            // 0x4f2ce
            v11 = v12 + a2;
            if (a5 + a4 > v11) {
                uint64_t v13 = v11 + v8; // 0x4f2e8
                if (v13 <= a4) {
                    goto lab_0x4f381;
                } else {
                    int64_t v14; // bp-72, 0x4f20e
                    if (a5 == 0) {
                        // 0x4f348
                        v14 = (int64_t)&g8;
                        function_25e90(a1, a2, v8, 0);
                    } else {
                        int64_t v15; // 0x4f20e
                        if (a4 == 0) {
                            // 0x4f331
                            function_542470("basic_string::_S_construct null not valid", v11, v12, v13);
                            v15 = (int64_t)&g8;
                        } else {
                            int64_t v16 = function_4e8b2(a5, 0, v12, v13); // 0x4f303
                            int64_t v17 = v16 + 24; // 0x4f308
                            function_25a28(v17, a4, a5);
                            function_2562c(v16, a5);
                            v15 = v17;
                        }
                        // 0x4f363
                        v14 = v15;
                        function_25e90(a1, a2, v8, a5);
                        function_25a28(a2 + a1, v15, a5);
                    }
                    // 0x4f375
                    function_2508e(&v14);
                    goto lab_0x4f3b3;
                }
            } else {
                goto lab_0x4f381;
            }
        }
    }
  lab_0x4f28d:
    // 0x4f28d
    function_25e90(a1, a2, v8, a5);
    if (a5 == 0) {
        goto lab_0x4f3b3;
    } else {
        // 0x4f3ae
        function_25a28(a2 + a1, a4, a5);
        goto lab_0x4f3b3;
    }
  lab_0x4f3b3:;
    int64_t result = a1; // 0x4f3c4
    if (v1 != __readfsqword(40)) {
        // 0x4f3c6
        __stack_chk_fail();
        result = (int64_t)&g12;
    }
    // 0x4f3cb
    return result;
  lab_0x4f381:;
    int64_t v18 = a5 + a4 > v11 ? a5 - v8 : 0;
    function_25e90(a1, a2, v8, a5);
    // 0x4f3ae
    function_25a28(a2 + a1, a4 + a1 + 24 - v10 + v18, a5);
    goto lab_0x4f3b3;
}

// Address range: 0x56b60 - 0x56d34
int64_t function_56b60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x56b71
    int64_t v2 = 23; // 0x56b87
    if (a2 != 0 == (a3 != 0)) {
        int64_t v3 = function_5826b(a2); // 0x56ba6
        v2 = 23;
        if (v3 < 0) {
            goto lab_0x56d08;
        } else {
            int64_t v4 = *(int64_t *)(a1 + 33); // 0x56bb0
            v2 = 24;
            if (v4 != v3) {
                goto lab_0x56d08;
            } else {
                if (v4 != 0) {
                    // 0x56be0
                    if (*(char *)(a1 + 32) != 0) {
                        // 0x56bcd
                        __asm_rep_stosd_memset((char *)a3, 0, 8);
                        v2 = 0;
                        goto lab_0x56d08;
                    } else {
                        // 0x56be8
                        int64_t v5; // bp-184, 0x56b60
                        int64_t v6; // bp-193, 0x56b60
                        function_35ef6(&v5, a2, &v6);
                        char * file_path; // bp-192, 0x56b60
                        function_48eb2b((int64_t *)&file_path, &v5);
                        struct _IO_FILE * file = fopen(file_path, "rb"); // 0x56c13
                        int64_t v7 = (int64_t)file_path; // 0x56c1b
                        int64_t v8 = v7 - 24; // 0x56c20
                        if (v8 != (int64_t)g4) {
                            // 0x56c2d
                            int32_t v9; // 0x56b60
                            if (g5 == 0) {
                                int32_t * v10 = (int32_t *)(v7 - 8); // 0x56c41
                                int32_t v11 = *v10; // 0x56c41
                                *v10 = v11 - 1;
                                v9 = v11;
                            } else {
                                int32_t * v12 = (int32_t *)(v7 - 8); // 0x56c3a
                                int32_t v13 = *v12; // 0x56c3a
                                int64_t v14; // bp-1, 0x56b60
                                *v12 = v13 + (int32_t)(int64_t)&v14;
                                v9 = v13;
                            }
                            int32_t v15 = v9;
                            if (v15 >= 0 != v15 != 0) {
                                // 0x56c4e
                                function_4eeb50(v8);
                            }
                        }
                        // 0x56c53
                        function_29c3a(&v5);
                        v2 = 23;
                        if (file != NULL) {
                            // 0x56c64
                            int64_t v16; // bp-172, 0x56b60
                            int64_t v17 = (int64_t)&v16; // 0x56c69
                            int64_t data = function_4efd30(0x400000); // 0x56c74
                            __asm_rep_stosd_memset((char *)data, 0, 0x100000);
                            function_4ccc30(&v16);
                            function_4ccd50(&v16, 0);
                            int64_t v18 = v4;
                            int64_t nmemb = v18 < 0x400000 ? v18 : 0x400000; // 0x56ca7
                            int32_t items_read = fread((int64_t *)data, 1, (int32_t)nmemb, file); // 0x56cb3
                            int64_t v19 = v18; // 0x56cbb
                            while (items_read != 0) {
                                int64_t v20 = items_read; // 0x56cb3
                                function_4cd7d0(&v16, data, v20);
                                int64_t v21 = v18 - v20; // 0x56cd5
                                v19 = v21;
                                if (v21 == 0) {
                                    // break -> 0x56cda
                                    break;
                                }
                                v18 = v21;
                                nmemb = v18 < 0x400000 ? v18 : 0x400000;
                                items_read = fread((int64_t *)data, 1, (int32_t)nmemb, file);
                                v19 = v18;
                            }
                            // 0x56cda
                            function_4cd900(&v16, a3);
                            function_4cccc0(&v16);
                            fclose(file);
                            function_4eeb50(data);
                            v2 = ((int64_t)(v19 == 0) | v17) + (v17 ^ 31) & 23;
                        }
                        goto lab_0x56d08;
                    }
                } else {
                    // 0x56bcd
                    __asm_rep_stosd_memset((char *)a3, 0, 8);
                    v2 = 0;
                    goto lab_0x56d08;
                }
            }
        }
    } else {
        goto lab_0x56d08;
    }
  lab_0x56d08:;
    int64_t result = v2; // 0x56d1b
    if (v1 != __readfsqword(40)) {
        // 0x56d1d
        __stack_chk_fail();
        result = (int64_t)&g12;
    }
    // 0x56d22
    return result;
}

// Address range: 0x619f2 - 0x61bbd
int64_t function_619f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x61a00
    int64_t v2 = 2; // 0x61a17
    if (a5 == 0 || a4 == 0 || a2 == 0 || (int32_t)a3 < 22) {
        goto lab_0x61b99;
    } else {
        uint64_t v3 = (a3 & 0xffffffff) - 22; // 0x61a49
        v2 = 2;
        if (v3 > (a5 & 0xffffffff)) {
            goto lab_0x61b99;
        } else {
            int64_t v4 = v3 + a2; // 0x61a56
            v2 = 5;
            if (*(char *)(v4 + 4) < 2) {
                uint64_t v5 = function_61428(); // 0x61a76
                v2 = 3;
                if ((char)v5 == 0) {
                    goto lab_0x61b99;
                } else {
                    int64_t v6 = 0x100000000 * a3 >> 32; // 0x61a13
                    int64_t v7; // 0x61b8d
                    if ((char)a1 == 0) {
                        // 0x61b79
                        v7 = function_6190c(a1 + (int64_t)&g11, a2, (int32_t)v6, a4, a5);
                        v2 = v7;
                        goto lab_0x61b99;
                    } else {
                        int64_t v8 = (int64_t)*(int32_t *)v4; // bp-80, 0x61a9b
                        if (*(char *)(v4 + 5) % 2 == 0) {
                            // 0x61b79
                            v7 = function_6190c(a1 + (int64_t)&g11, a2, (int32_t)v6, a4, a5);
                            v2 = v7;
                            goto lab_0x61b99;
                        } else {
                            // 0x61aaf
                            int64_t v9; // bp-88, 0x619f2
                            function_729c2(&v9, a1 + (int64_t)&g10, v5 % 256);
                            int64_t v10 = function_449a8(a1 + 64, &v8, 16, v4 + 6, 16, a2, a4, v3); // 0x61ae7
                            function_729ce((int64_t)&v9);
                            if ((char)v10 == 0) {
                                // 0x61b79
                                v7 = function_6190c(a1 + (int64_t)&g11, a2, (int32_t)v6, a4, a5);
                                v2 = v7;
                                goto lab_0x61b99;
                            } else {
                                // 0x61b03
                                if (*(int64_t *)(a1 + 8) == 2) {
                                    char * v11 = (char *)(a1 + 56); // 0x61b0a
                                    if (*v11 == 0) {
                                        int64_t v12 = a1 + 48; // 0x61b11
                                        if (function_52af50() < function_61bbe(v12, 5)) {
                                            // 0x61b2f
                                            *v11 = 1;
                                            __asm_mfence();
                                            if (function_61bbe(v12, 5) > function_52af50() + 0x2540be400) {
                                                // 0x61b5b
                                                *(int64_t *)v12 = function_52af50() + 0x2540be400;
                                                __asm_mfence();
                                            }
                                        }
                                    }
                                }
                                // 0x61b6a
                                *(int32_t *)a5 = (int32_t)v6 - 22;
                                v2 = 0;
                                goto lab_0x61b99;
                            }
                        }
                    }
                }
            } else {
                goto lab_0x61b99;
            }
        }
    }
  lab_0x61b99:;
    int64_t result = v2; // 0x61ba7
    if (v1 != __readfsqword(40)) {
        // 0x61ba9
        __stack_chk_fail();
        result = (int64_t)&g12;
    }
    // 0x61bae
    return result;
}

// Address range: 0x4b36d0 - 0x4b389b
int64_t function_4b36d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b36d0
    int64_t v1; // bp-120, 0x4b36d0
    function_4b0870(&v1);
    int64_t v2; // bp-88, 0x4b36d0
    function_4b0870(&v2);
    int64_t v3; // bp-56, 0x4b36d0
    function_4b0870(&v3);
    int64_t v4 = function_4b0ac0(&v2, a2); // 0x4b3707
    if ((int32_t)v4 != 0) {
        // 0x4b3710
        function_4b0890(&v1);
        function_4b0890(&v2);
        function_4b0890(&v3);
        return v4 & 0xffffffff;
    }
    int64_t v5 = function_4b0ac0(&v3, a3); // 0x4b3748
    if ((int32_t)v5 != 0) {
        // 0x4b3710
        function_4b0890(&v1);
        function_4b0890(&v2);
        function_4b0890(&v3);
        return v5 & 0xffffffff;
    }
    uint64_t v6 = function_4b0ec0(&v2); // 0x4b3756
    uint64_t v7 = function_4b0ec0(&v3); // 0x4b3763
    int64_t v8 = v7 > v6 ? v6 : v7; // 0x4b3770
    int64_t v9 = function_4b1220(&v2, v8); // 0x4b3777
    if ((int32_t)v9 != 0) {
        // 0x4b3710
        function_4b0890(&v1);
        function_4b0890(&v2);
        function_4b0890(&v3);
        return v9 & 0xffffffff;
    }
    int64_t v10 = function_4b1220(&v3, v8); // 0x4b3788
    if ((int32_t)v10 != 0) {
        // 0x4b3710
        function_4b0890(&v1);
        function_4b0890(&v2);
        function_4b0890(&v3);
        return v10 & 0xffffffff;
    }
    // 0x4b3795
    v3 = 1;
    v2 = 1;
    int64_t v11; // 0x4b36d0
    if ((int32_t)function_4b1680(&v2, 0) == 0) {
      lab_0x4b387e:;
        int64_t result = function_4b1100(&v3, v8); // 0x4b3886
        v11 = result;
        if ((int32_t)result == 0) {
            // 0x4b3893
            return result;
        }
    } else {
        int64_t v12 = function_4b1220(&v2, function_4b0ec0(&v2)); // 0x4b37ce
        v11 = v12;
        while ((int32_t)v12 == 0) {
            int64_t v13 = function_4b1220(&v3, function_4b0ec0(&v3)); // 0x4b37ed
            v11 = v13;
            if ((int32_t)v13 != 0) {
                // break -> 0x4b3710
                break;
            }
            // 0x4b37fa
            if ((int32_t)function_4b1590(&v2, &v3) < 0) {
                int64_t v14 = function_4b1820(&v3, &v3, &v2); // 0x4b3855
                v11 = v14;
                if ((int32_t)v14 != 0) {
                    // break -> 0x4b3710
                    break;
                }
                int64_t v15 = function_4b1220(&v3, 1); // 0x4b386c
                v11 = v15;
                if ((int32_t)v15 != 0) {
                    // break -> 0x4b3710
                    break;
                }
            } else {
                int64_t v16 = function_4b1820(&v2, &v2, &v3); // 0x4b381a
                v11 = v16;
                if ((int32_t)v16 != 0) {
                    // break -> 0x4b3710
                    break;
                }
                int64_t v17 = function_4b1220(&v2, 1); // 0x4b3831
                v11 = v17;
                if ((int32_t)v17 != 0) {
                    // break -> 0x4b3710
                    break;
                }
            }
            // 0x4b37a8
            if ((int32_t)function_4b1680(&v2, 0) == 0) {
                goto lab_0x4b387e;
            }
            v12 = function_4b1220(&v2, function_4b0ec0(&v2));
            v11 = v12;
        }
    }
    // 0x4b3710
    function_4b0890(&v1);
    function_4b0890(&v2);
    function_4b0890(&v3);
    return v11 & 0xffffffff;
}

// Address range: 0x4b8bc0 - 0x4b8d90
int64_t function_4b8bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3; // bp-128, 0x4b8beb
    int64_t v2; // bp-104, 0x4b8bc0
    function_4c3b10(&v2);
    int64_t v3 = 0; // 0x4b8bfd
    int64_t v4 = a2; // 0x4b8bfd
    if (a3 != 0) {
        // 0x4b8bff
        v3 = a3;
        v4 = a2;
        if (*(char *)(a2 - 1 + a3) == 0) {
            int64_t result = function_4c3b30(&v2, "-----BEGIN DH PARAMETERS-----", "-----END DH PARAMETERS-----", a2, 0, 0, &v1); // 0x4b8ce5
            int32_t v5 = result; // 0x4b8cea
            if (v5 != 0) {
                if (v5 == -0x1080) {
                    // 0x4b8d95
                    return result;
                }
                // 0x4b8c77
                function_4c40e0(&v2);
                // 0x4b8c81
                function_4b8b30(a1);
                // 0x4b8c40
                return result & 0xffffffff & 0xffffffff;
            }
            // 0x4b8cf4
            v4 = v2;
        }
    }
    int64_t v6 = v4; // bp-112, 0x4b8c1e
    int64_t v7; // bp-120, 0x4b8bc0
    int64_t v8 = function_4afe70(&v6, v4 + v3, &v7, 48); // 0x4b8c23
    int64_t v9; // 0x4b8bc0
    if ((int32_t)v8 == 0) {
        int64_t v10 = v7 + v6; // 0x4b8c95
        int64_t v11 = a1 + 8; // 0x4b8c9a
        int64_t v12 = function_4aff90(&v6, v10, v11); // 0x4b8caa
        if ((int32_t)v12 == 0) {
            int64_t v13 = function_4aff90(&v6, v10, a1 + 32); // 0x4b8d1d
            if ((int32_t)v13 != 0) {
                // 0x4b8cb5
                v9 = v13 - (int64_t)(int32_t)&g1;
                goto lab_0x4b8c32;
            } else {
                // 0x4b8d28
                if (v6 == v10) {
                    // 0x4b8d7a
                    *(int64_t *)a1 = function_4b0fa0(v11);
                    return function_4c40e0(&v2);
                }
                // 0x4b8d2f
                int64_t v14; // bp-72, 0x4b8bc0
                function_4b0870(&v14);
                int64_t v15 = function_4aff90(&v6, v10, (int64_t)&v14); // 0x4b8d46
                function_4b0890(&v14);
                if ((int32_t)v15 == 0) {
                    // 0x4b8d69
                    if (v6 == v10) {
                        // 0x4b8d7a
                        *(int64_t *)a1 = function_4b0fa0(v11);
                        return function_4c40e0(&v2);
                    }
                    // 0x4b8c32
                    function_4c40e0(&v2);
                    // 0x4b8c81
                    function_4b8b30(a1);
                    // 0x4b8c40
                    return 0xffffcc1a;
                }
                // 0x4b8d5d
                v9 = v15 + 0xffffcc80;
                goto lab_0x4b8c32;
            }
        } else {
            // 0x4b8cb5
            v9 = v12 - (int64_t)(int32_t)&g1;
            goto lab_0x4b8c32;
        }
    } else {
        // 0x4b8c2c
        v9 = v8 + 0xffffcc80;
        goto lab_0x4b8c32;
    }
  lab_0x4b8c32:;
    int64_t v16 = v9 & 0xffffffff;
    function_4c40e0(&v2);
    if (v16 == 0) {
        // 0x4b8c40
        return v16 & 0xffffffff;
    }
    // 0x4b8c81
    function_4b8b30(a1);
    // 0x4b8c40
    return v16 & 0xffffffff;
}

// Address range: 0x4bcd80 - 0x4bcd98
int64_t function_4bcd80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4bcd80
    return function_4bcbb0();
}

// Address range: 0x4bcda0 - 0x4bce0e
int64_t function_4bcda0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = function_4bf0f0(a2, a1 & 0xffffffff); // 0x4bcdc1
    if ((int32_t)result == 0) {
        // 0x4bcde0
        return function_4bcd80(a2, a2 + 248, a2 + 272, a3, a4);
    }
    // 0x4bcdca
    return result;
}

// Address range: 0x4bce10 - 0x4bcf54
int64_t function_4bce10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = a1;
    if (v1 == 0 || (int32_t)a2 != v1) {
        // 0x4bcef7
        return 0xffffb080;
    }
    int64_t * v2 = (int64_t *)(a2 + 272); // 0x4bce59
    if ((int32_t)function_4b1590((int64_t *)(a1 + 272), v2) != 0 || (int32_t)function_4b1590((int64_t *)(a1 + 296), (int64_t *)(a2 + 296)) != 0 || (int32_t)function_4b1590((int64_t *)(a1 + 320), (int64_t *)(a2 + 320)) != 0) {
        // 0x4bcef7
        return 0xffffb080;
    }
    // 0x4bcea2
    int64_t v3; // bp-376, 0x4bce10
    function_4ba580(&v3);
    int64_t v4; // bp-296, 0x4bce10
    function_4ba5b0(&v4);
    function_4ba830(&v4, a2);
    int64_t v5 = function_4bbff0(&v4, &v3, a2 + 248, a2 + 80, 0, 0); // 0x4bceda
    if ((int32_t)v5 == 0) {
        // 0x4bcf40
        return function_4b1590(&v3, v2);
    }
    // 0x4bcee5
    function_4ba6b0(&v3);
    function_4ba6e0(&v4);
    // 0x4bcef7
    return v5 & 0xffffffff;
}

// Address range: 0x4c6100 - 0x4c62d3
int64_t function_4c6100(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = 0; // bp-108, 0x4c6132
    int64_t * v2 = (int64_t *)a1; // 0x4c613a
    int64_t v3; // bp-104, 0x4c6100
    int64_t v4 = function_4afe70(v2, a2, &v3, 48); // 0x4c613a
    if ((int32_t)v4 != 0) {
        // 0x4c6149
        return v4 + 0xffffc300 & 0xffffffff & 0xffffffff;
    }
    int64_t v5 = v3 + a1; // 0x4c6174
    int64_t v6; // bp-88, 0x4c6100
    int64_t v7 = function_4c5330(a1, v5, &v1, &v6); // 0x4c6189
    if ((int32_t)v7 != 0) {
        // 0x4c6149
        return v7 & 0xffffffff & 0xffffffff;
    }
    int64_t v8 = function_4b0080(a1, v5, &v3); // 0x4c619f
    if ((int32_t)v8 != 0) {
        // 0x4c6149
        return v8 + 0xffffc500 & 0xffffffff & 0xffffffff;
    }
    int64_t v9 = v3 + a1; // 0x4c61b2
    if (v9 != v5) {
        // 0x4c6149
        return 0xffffc49a;
    }
    int64_t v10 = function_4c4300(v1); // 0x4c61c5
    if (v10 == 0) {
        // 0x4c6149
        return 0xffffc380;
    }
    int64_t v11 = function_4c4360(a3, v10); // 0x4c61d9
    int64_t v12 = v11 & 0xffffffff; // 0x4c61e0
    if ((int32_t)v11 != 0) {
        // 0x4c6149
        return v12 & 0xffffffff;
    }
    // 0x4c61e8
    int64_t v13; // 0x4c6100
    int64_t v14; // 0x4c6100
    int64_t v15; // 0x4c6100
    if (v1 == 1) {
        int64_t v16 = *(int64_t *)(a3 + 8); // 0x4c621b
        int64_t v17; // bp-96, 0x4c6100
        int64_t v18 = function_4afe70(v2, v9, &v17, 48); // 0x4c621f
        if ((int32_t)v18 != 0) {
            // 0x4c624d
            v15 = v18 + 0xffffc500;
            goto lab_0x4c6253;
        } else {
            // 0x4c6228
            if (v9 != v17 + a1) {
                // 0x4c61fe
                function_4c42d0(a3);
                // 0x4c6149
                return 0xffffc49a;
            }
            int64_t v19 = v16 + 16; // 0x4c6236
            int64_t v20 = function_4aff90(v2, v9, v19); // 0x4c6244
            if ((int32_t)v20 == 0) {
                int64_t v21 = function_4aff90(v2, v9, v16 + 40); // 0x4c62a4
                if ((int32_t)v21 != 0) {
                    // 0x4c624d
                    v15 = v21 + 0xffffc500;
                    goto lab_0x4c6253;
                } else {
                    // 0x4c62ad
                    if (v3 != 0) {
                        // 0x4c61fe
                        function_4c42d0(a3);
                        // 0x4c6149
                        return 0xffffc49a;
                    }
                    int64_t result = function_4c8e60(v16); // 0x4c62b6
                    if ((int32_t)result != 0) {
                        // 0x4c62ce
                        return result;
                    }
                    // 0x4c62bf
                    *(int64_t *)(v16 + 8) = function_4b0fa0(v19);
                    v13 = v12;
                    v14 = v19;
                    goto lab_0x4c6257;
                }
            } else {
                // 0x4c624d
                v15 = v20 + 0xffffc500;
                goto lab_0x4c6253;
            }
        }
    } else {
        // 0x4c61f1
        if ((v1 || 1) != 3) {
            // 0x4c61fe
            function_4c42d0(a3);
            // 0x4c6149
            return 0xffffc380;
        }
        int64_t * v22 = (int64_t *)(a3 + 8); // 0x4c6268
        int64_t v23 = function_4c53c0(&v6, *v22); // 0x4c6271
        if ((int32_t)v23 != 0) {
            // 0x4c61fe
            function_4c42d0(a3);
            // 0x4c6149
            return v23 & 0xffffffff & 0xffffffff;
        }
        // 0x4c627c
        v15 = function_4c52c0(a1, v9, *v22);
        goto lab_0x4c6253;
    }
  lab_0x4c6253:;
    int64_t v24 = v15 & 0xffffffff;
    v13 = v24;
    v14 = a1;
    if ((int32_t)v15 != 0) {
        // 0x4c61fe
        function_4c42d0(a3);
        // 0x4c6149
        return v24 & 0xffffffff;
    }
    goto lab_0x4c6257;
  lab_0x4c6257:
    // 0x4c6257
    if (v9 == v14) {
        // 0x4c6149
        return v13 & 0xffffffff;
    }
    // 0x4c61fe
    function_4c42d0(a3);
    // 0x4c6149
    return 0xffffc49a;
}

// Address range: 0x502fa0 - 0x50316a
int64_t function_502fa0(int64_t result, int64_t a2) {
    // 0x502fa0
    function_502870();
    function_5403d0(result, a2);
    int64_t * v1 = (int64_t *)(a2 + 104); // 0x502fbc
    int64_t * v2 = (int64_t *)(result + 104); // 0x502fc0
    *v2 = *v1;
    *v1 = *v2;
    char * v3 = (char *)(a2 + 112); // 0x502fcc
    char * v4 = (char *)(result + 112); // 0x502fd0
    *v4 = *v3;
    *v3 = *v4;
    int32_t * v5 = (int32_t *)(a2 + 120); // 0x502fda
    *v5 = 0;
    *(int32_t *)(result + 120) = *v5;
    int64_t * v6 = (int64_t *)(a2 + 124); // 0x502fe7
    *(int64_t *)(result + 124) = *v6;
    int64_t * v7 = (int64_t *)(a2 + 132); // 0x502fef
    *(int64_t *)(result + 132) = *v7;
    int64_t * v8 = (int64_t *)(a2 + 140); // 0x502ffd
    *(int64_t *)(result + 140) = *v8;
    int64_t * v9 = (int64_t *)(a2 + 152); // 0x50300b
    *v9 = 0;
    *(int64_t *)(result + 152) = *v9;
    int64_t * v10 = (int64_t *)(a2 + 160); // 0x503024
    *v10 = 1;
    *(int64_t *)(result + 160) = *v10;
    char * v11 = (char *)(a2 + 168); // 0x50303d
    *v11 = 0;
    *(char *)(result + 168) = *v11;
    int64_t * v12 = (int64_t *)(a2 + 208); // 0x503051
    *v12 = 0;
    *(int64_t *)(result + 208) = *v12;
    int64_t * v13 = (int64_t *)(a2 + 216); // 0x50306a
    *v13 = 0;
    *(int64_t *)(result + 216) = *v13;
    int64_t * v14 = (int64_t *)(a2 + 224); // 0x503083
    *v14 = 0;
    *(int64_t *)(result + 224) = *v14;
    int64_t * v15 = (int64_t *)(a2 + 232); // 0x50309c
    *v15 = 0;
    *(int64_t *)(result + 232) = *v15;
    char * v16 = (char *)(a2 + 169); // 0x5030b5
    *v16 = 0;
    *(char *)(result + 169) = *v16;
    char * v17 = (char *)(a2 + 170); // 0x5030c9
    *v17 = 0;
    *(char *)(result + 170) = *v17;
    int64_t * v18 = (int64_t *)(a2 + 176); // 0x5030dd
    *v18 = 0;
    *(int64_t *)(result + 176) = *v18;
    int64_t * v19 = (int64_t *)(a2 + 184); // 0x5030f6
    *v19 = 0;
    *(int64_t *)(result + 184) = *v19;
    char * v20 = (char *)(a2 + 192); // 0x50310f
    *v20 = 0;
    *(char *)(result + 192) = *v20;
    int64_t v21 = *v9; // 0x503123
    *(int64_t *)(a2 + 40) = 0;
    *(int64_t *)(a2 + 32) = 0;
    *(int64_t *)(a2 + 48) = 0;
    *(int64_t *)(a2 + 8) = v21;
    *(int64_t *)(a2 + 16) = v21;
    *(int64_t *)(a2 + 24) = v21;
    int64_t v22 = *v6; // 0x50314e
    *v7 = v22;
    *v8 = v22;
    return result;
}

// Address range: 0x505870 - 0x505a3a
int64_t function_505870(int64_t result, int64_t a2) {
    // 0x505870
    function_505130();
    function_540b20(result, a2);
    int64_t * v1 = (int64_t *)(a2 + 104); // 0x50588c
    int64_t * v2 = (int64_t *)(result + 104); // 0x505890
    *v2 = *v1;
    *v1 = *v2;
    char * v3 = (char *)(a2 + 112); // 0x50589c
    char * v4 = (char *)(result + 112); // 0x5058a0
    *v4 = *v3;
    *v3 = *v4;
    int32_t * v5 = (int32_t *)(a2 + 120); // 0x5058aa
    *v5 = 0;
    *(int32_t *)(result + 120) = *v5;
    int64_t * v6 = (int64_t *)(a2 + 124); // 0x5058b7
    *(int64_t *)(result + 124) = *v6;
    int64_t * v7 = (int64_t *)(a2 + 132); // 0x5058bf
    *(int64_t *)(result + 132) = *v7;
    int64_t * v8 = (int64_t *)(a2 + 140); // 0x5058cd
    *(int64_t *)(result + 140) = *v8;
    int64_t * v9 = (int64_t *)(a2 + 152); // 0x5058db
    *v9 = 0;
    *(int64_t *)(result + 152) = *v9;
    int64_t * v10 = (int64_t *)(a2 + 160); // 0x5058f4
    *v10 = 1;
    *(int64_t *)(result + 160) = *v10;
    char * v11 = (char *)(a2 + 168); // 0x50590d
    *v11 = 0;
    *(char *)(result + 168) = *v11;
    int64_t * v12 = (int64_t *)(a2 + 208); // 0x505921
    *v12 = 0;
    *(int64_t *)(result + 208) = *v12;
    int64_t * v13 = (int64_t *)(a2 + 216); // 0x50593a
    *v13 = 0;
    *(int64_t *)(result + 216) = *v13;
    int64_t * v14 = (int64_t *)(a2 + 224); // 0x505953
    *v14 = 0;
    *(int64_t *)(result + 224) = *v14;
    int64_t * v15 = (int64_t *)(a2 + 232); // 0x50596c
    *v15 = 0;
    *(int64_t *)(result + 232) = *v15;
    char * v16 = (char *)(a2 + 169); // 0x505985
    *v16 = 0;
    *(char *)(result + 169) = *v16;
    char * v17 = (char *)(a2 + 170); // 0x505999
    *v17 = 0;
    *(char *)(result + 170) = *v17;
    int64_t * v18 = (int64_t *)(a2 + 176); // 0x5059ad
    *v18 = 0;
    *(int64_t *)(result + 176) = *v18;
    int64_t * v19 = (int64_t *)(a2 + 184); // 0x5059c6
    *v19 = 0;
    *(int64_t *)(result + 184) = *v19;
    char * v20 = (char *)(a2 + 192); // 0x5059df
    *v20 = 0;
    *(char *)(result + 192) = *v20;
    int64_t v21 = *v9; // 0x5059f3
    *(int64_t *)(a2 + 40) = 0;
    *(int64_t *)(a2 + 32) = 0;
    *(int64_t *)(a2 + 48) = 0;
    *(int64_t *)(a2 + 8) = v21;
    *(int64_t *)(a2 + 16) = v21;
    *(int64_t *)(a2 + 24) = v21;
    int64_t v22 = *v6; // 0x505a1e
    *v7 = v22;
    *v8 = v22;
    return result;
}

// Address range: 0x50e4c0 - 0x50e68a
// From class:    std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_50e4c0(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t wc, int64_t a6) {
    uint32_t v1 = *(int32_t *)(a4 + 24); // 0x50e4da
    __readfsqword(40);
    if (v1 % 2 == 0) {
        int64_t result = function_50e1e0();
        __readfsqword(40);
        return result;
    }
    // 0x50e530
    int64_t v2; // bp-65, 0x50e4c0
    int64_t v3 = function_50e0e0(&v2, a4 + 208); // 0x50e54c
    uint64_t v4 = (int64_t)*(int32_t *)(v3 + ((char)a6 != 0 ? 48 : 64));
    int64_t * v5 = (int64_t *)(a4 + 16); // 0x50e569
    uint64_t v6 = *v5; // 0x50e569
    if (v6 <= v4) {
        // 0x50e572
        *v5 = 0;
        // 0x50e507
        __readfsqword(40);
        return result2;
    }
    int64_t result3 = wc & 0xffffffff; // 0x50e55b
    int64_t n = v6 - v4; // 0x50e5b0
    int64_t v7; // bp-104, 0x50e4c0
    int64_t wstr = (int64_t)&v7 + 15 - (4 * n + 30 & -16) & -16; // 0x50e5d9
    wmemset((int32_t *)wstr, (int32_t)wc, (int32_t)n);
    *v5 = 0;
    if ((v1 & 176) == 32) {
        // 0x50e660
        if ((char)a3 == 0) {
            // 0x50e687
            return result3;
        }
        // 0x50e507
        __readfsqword(40);
        return result2;
    }
    // 0x50e60a
    if ((char)a3 != 0) {
        // 0x50e507
        __readfsqword(40);
        return result2;
    }
    // 0x50e615
    if (0x100000000000000 * n >> 56 != result3) {
        // 0x50e687
        return result3;
    }
    // 0x50e634
    if (wstr != v4) {
        // 0x50e687
        return wstr;
    }
    // 0x50e507
    __readfsqword(40);
    return result2;
}

// Address range: 0x5100a0 - 0x510265
// From class:    std::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_5100a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t result = a2; // bp-216, 0x5100c1
    int64_t v1 = a4; // bp-232, 0x5100cb
    __readfsqword(40);
    int64_t v2 = function_50c440(); // 0x5100f8
    function_50ab00(a6 + 208);
    int32_t v3 = 0; // bp-188, 0x51010c
    int64_t v4 = *(int64_t *)(*(int64_t *)(v2 + 16) + 144); // bp-184, 0x51011e
    int32_t v5; // bp-192, 0x5100a0
    int64_t v6 = function_50fc20(a1, a2, a3, a4, a5, (int64_t *)&v5, &v4, 7, a6, &v3); // 0x5101ea
    result = v6;
    if (v3 != 0) {
        int32_t * v7 = (int32_t *)a7; // 0x510260
        *v7 = *v7 | 4;
    } else {
        // 0x510212
        *(int32_t *)(a8 + 24) = v5;
    }
    // 0x51021a
    if ((char)function_50f6f0(&result, &v1) != 0) {
        int32_t * v8 = (int32_t *)a7; // 0x51022d
        *v8 = *v8 | 2;
    }
    // 0x510230
    __readfsqword(40);
    return result;
}

// Address range: 0x530c90 - 0x530e55
// From class:    std::__cxx11::money_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_530c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x530c90
    __readfsqword(40);
    function_5659d0();
    int64_t v1; // bp-120, 0x530c90
    int64_t v2 = (int64_t)&v1; // 0x530ceb
    function_50ab00(v2);
    int64_t v3 = function_565f30(v2, a5 + 208); // bp-112, 0x530d0c
    int64_t v4; // bp-256, 0x530c90
    int64_t v5 = function_5088b0(&v3, &v4, 64, "%.*Lf", 0); // 0x530d38
    int64_t v6 = v5; // 0x530d42
    if ((int32_t)v5 >= 64) {
        int64_t v7 = v5 + 1; // 0x530d44
        int64_t v8; // bp-264, 0x530c90
        int64_t v9 = (int64_t)&v8 - ((0x100000000 * v7 >> 32) + 30 & -16); // 0x530d52
        int64_t v10 = function_565f30(a8, a7); // 0x530d61
        *(int64_t *)(v9 - 8) = a8;
        *(int64_t *)(v9 - 16) = a7;
        v3 = v10;
        v6 = function_5088b0(&v3, (int64_t *)(v9 + 15 & -16), v7 & 0xffffffff, "%.*Lf", 0);
    }
    // 0x530d8f
    int64_t v11; // bp-88, 0x530c90
    int64_t v12 = (int64_t)&v11; // 0x530da2
    int64_t v13 = v12; // bp-104, 0x530da2
    function_549b10(&v13, 0x100000000 * v6 >> 32, 0);
    int32_t v14 = a6;
    if ((char)a4 == 0) {
        // 0x530e50
        return function_5303e0(a1, a2, a3, a5, v14, &v13);
    }
    int64_t result = function_52fb30(a1, a2, a3, a5, v14, &v13); // 0x530ded
    if (v13 != v12) {
        // 0x530dff
        function_4eeb50(v13);
    }
    // 0x530e14
    function_566180(&v1);
    __readfsqword(40);
    return result;
}

// Address range: 0x556610 - 0x556660
int64_t function_556610(int64_t a1) {
    uint64_t v1 = function_566390(&g9); // 0x55661b
    if (*(int64_t *)((int64_t)&g9 + 16) <= v1) {
        // 0x556652
        function_5423f0();
        // 0x556657
        return function_20110();
    }
    int64_t v2 = *(int64_t *)((int64_t)&g9 + 8); // 0x556627
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x55662d
    if (v3 == 0) {
        // 0x556652
        function_5423f0();
        // 0x556657
        return function_20110();
    }
    int64_t result = function_20730(v3, &g3, 0x846838, 0); // 0x556646
    if (result == 0) {
        // 0x556657
        return function_20110();
    }
    // 0x556650
    return result;
}

// Address range: 0x556660 - 0x5567d9
// From class:    std::time_put_byname<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_556660(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int32_t a8) {
    int64_t v1 = a4 + 208; // 0x55666d
    __readfsqword(40);
    int64_t v2 = function_554b00(v1); // 0x5566a9
    int64_t v3 = function_556610(v1); // 0x5566b4
    char v4; // 0x556660
    if (*(char *)(v2 + 56) == 0) {
        // 0x5567b0
        function_54d560(v2);
        v4 = 37;
        if (*(int64_t *)(*(int64_t *)v2 + 48) != g6) {
            // 0x5567d1
            return 37;
        }
    } else {
        // 0x5566c7
        v4 = *(char *)(v2 + 94);
    }
    char v5 = v4; // bp-204, 0x5566cf
    int64_t v6; // bp-200, 0x556660
    function_56d3b0(v3, &v6, 128, &v5, a6);
    int64_t v7 = (int64_t)&v6; // 0x556702
    int32_t v8 = *(int32_t *)v7; // 0x556705
    v7 += 4;
    while (((v8 & -0x7f7f7f80 ^ -0x7f7f7f80) & v8 - 0x1010101) == 0) {
        // 0x556705
        v8 = *(int32_t *)v7;
        v7 += 4;
    }
    // 0x55671c
    __readfsqword(40);
    return result;
}

// Address range: 0x5586e0 - 0x5588ad
// From class:    std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_5586e0(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint32_t v1 = *(int32_t *)(a4 + 24); // 0x5586fa
    __readfsqword(40);
    if (v1 % 2 == 0) {
        int64_t result = function_558400();
        __readfsqword(40);
        return result;
    }
    // 0x558750
    int64_t v2; // bp-65, 0x5586e0
    int64_t v3 = function_558300(&v2, a4 + 208); // 0x55876c
    uint64_t v4 = (int64_t)*(int32_t *)(v3 + ((char)a6 != 0 ? 48 : 64));
    int64_t * v5 = (int64_t *)(a4 + 16); // 0x558789
    uint64_t v6 = *v5; // 0x558789
    if (v6 <= v4) {
        // 0x558792
        *v5 = 0;
        // 0x55872b
        __readfsqword(40);
        return result2;
    }
    int64_t v7 = v6 - v4; // 0x5587d0
    int64_t result3 = 0x100000000000000 * a5 >> 56; // 0x5587d3
    int64_t v8; // bp-104, 0x5586e0
    int64_t result4 = (int64_t)&v8 + 15 - (v7 + 30 & -16) & -16; // 0x5587f6
    memset((int64_t *)result4, (int32_t)result3, (int32_t)v7);
    *v5 = 0;
    if ((v1 & 176) == 32) {
        // 0x558880
        if ((char)a3 == 0) {
            // 0x5588a7
            return result3;
        }
        // 0x55872b
        __readfsqword(40);
        return result2;
    }
    // 0x558827
    if ((char)a3 != 0) {
        // 0x55872b
        __readfsqword(40);
        return result2;
    }
    // 0x558832
    if (0x100000000000000 * v7 >> 56 != result3) {
        // 0x5588a7
        return result3;
    }
    // 0x558851
    if (result4 != v4) {
        // 0x5588a7
        return result4;
    }
    // 0x55872b
    __readfsqword(40);
    return result2;
}

// Address range: 0x55a0c0 - 0x55a285
// From class:    std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_55a0c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a6 + 208; // 0x55a0cb
    int64_t result = a2; // bp-216, 0x55a0e1
    int64_t v2 = a4; // bp-232, 0x55a0eb
    __readfsqword(40);
    int64_t v3 = function_556610(v1); // 0x55a118
    function_554b00(v1);
    int32_t v4 = 0; // bp-188, 0x55a12c
    int64_t v5 = *(int64_t *)(*(int64_t *)(v3 + 16) + 144); // bp-184, 0x55a13e
    int32_t v6; // bp-192, 0x55a0c0
    int64_t v7 = function_559cd0(a1, a2, a3, a4, a5, (int64_t *)&v6, &v5, 7, a6, &v4); // 0x55a20a
    result = v7;
    if (v4 != 0) {
        int32_t * v8 = (int32_t *)a7; // 0x55a280
        *v8 = *v8 | 4;
    } else {
        // 0x55a232
        *(int32_t *)(a8 + 24) = v6;
    }
    // 0x55a23a
    if ((char)function_524600(&result, &v2) != 0) {
        int32_t * v9 = (int32_t *)a7; // 0x55a24d
        *v9 = *v9 | 2;
    }
    // 0x55a250
    __readfsqword(40);
    return result;
}

// Address range: 0x572230 - 0x572400
int64_t function_572230(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x572244
    int32_t v2 = a1; // 0x57225d
    *(int32_t *)(a2 + 72) = v2;
    *(int32_t *)(a2 + 76) = v2;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x572274
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a2 + 40); // 0x57227c
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a2 + 56); // 0x572287
    *v5 = 0;
    *(char *)(a2 + 328) = 1;
    int64_t v6; // 0x572230
    uint64_t v7 = v6 + 1; // 0x57229e
    int64_t v8 = function_4eec00(v7, a1); // 0x5722a2
    int64_t v9; // bp-104, 0x572230
    function_52cbf0(&v9, v8, v6, 0);
    int64_t v10; // bp-88, 0x572230
    int64_t v11 = (int64_t)&v10; // 0x5722be
    *(char *)(v8 + v6) = 0;
    *v3 = v8;
    if (v9 != v11) {
        // 0x5722d4
        function_4eeb50(v9);
    }
    int64_t v12; // 0x572230
    int64_t v13; // 0x572230
    int64_t v14; // 0x572230
    int64_t v15; // 0x572230
    int64_t v16; // 0x572230
    int64_t v17; // 0x572230
    if (v7 < 0x1fffffffffffffff) {
        int64_t v18 = 4 * v7; // 0x572302
        int64_t v19 = function_4eec00(v18, a1); // 0x57230d
        function_54b780(&v9, v19, v6, 0);
        int64_t v20 = v18 - 4;
        *(int32_t *)(v19 + v20) = 0;
        *v4 = v19;
        if (v9 != v11) {
            // 0x572343
            function_4eeb50(v9);
        }
        int64_t v21 = function_4eec00(v18, a1); // 0x572378
        function_54b780(&v9, v21, v6, 0);
        *(int32_t *)(v21 + v20) = 0;
        *v5 = v21;
        if (v9 != v11) {
            // 0x5723ae
            function_4eeb50(v9);
        }
        int64_t result = __readfsqword(40) ^ v1; // 0x5723b8
        v13 = v11;
        v16 = v21;
        v14 = v9;
        if (result == 0) {
            // 0x5723c3
            return result;
        }
        goto lab_0x5723f9;
    } else {
        int64_t v22 = function_208a0(v7, a1); // 0x5723d2
        v12 = (int64_t)&v9;
        v15 = a1;
        v17 = v22;
        goto lab_0x5723d7;
    }
  lab_0x5723f9:
    // 0x5723f9
    __stack_chk_fail();
    int64_t v23 = function_208a0(v14, v16); // 0x5723f9
    v12 = v13;
    v15 = v16;
    v17 = v23;
    goto lab_0x5723d7;
  lab_0x5723d7:;
    int64_t v24 = v12 + 16; // 0x5723db
    if (v9 != v24) {
        // 0x5723e7
        function_4eeb50(v9);
    }
    // 0x5723ec
    _Unwind_Resume((struct _Unwind_Exception *)v17);
    v13 = v24;
    v16 = v15;
    v14 = v17;
    goto lab_0x5723f9;
}
