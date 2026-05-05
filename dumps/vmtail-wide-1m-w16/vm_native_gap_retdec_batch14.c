/*
 * Targeted RetDec C for native executable gap queue batch 14.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4d8cc0-0x4d8e02 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4885ae-0x4886ef rank=- name=- kind=- bytes=- uncovered=-
 *   0x57b2f0-0x57b431 rank=- name=- kind=- bytes=- uncovered=-
 *   0x59b19-0x59c57 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ea000-0x4ea13d rank=- name=- kind=- bytes=- uncovered=-
 *   0x579bc0-0x579cfd rank=- name=- kind=- bytes=- uncovered=-
 *   0x6bb54-0x6bc90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x525bd0-0x525d0c rank=- name=- kind=- bytes=- uncovered=-
 *   0x525d20-0x525e5c rank=- name=- kind=- bytes=- uncovered=-
 *   0x54ed60-0x54ee9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x54eec0-0x54effc rank=- name=- kind=- bytes=- uncovered=-
 *   0x55b740-0x55b87c rank=- name=- kind=- bytes=- uncovered=-
 *   0x55b890-0x55b9cc rank=- name=- kind=- bytes=- uncovered=-
 *   0x577a20-0x577b5c rank=- name=- kind=- bytes=- uncovered=-
 *   0x577bc0-0x577cfc rank=- name=- kind=- bytes=- uncovered=-
 *   0x56788-0x568c3 rank=- name=- kind=- bytes=- uncovered=-
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
struct iovec;
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

int64_t function_1ff90();
int64_t function_2509a();
int64_t function_29cea();
int64_t function_29ef7();
int64_t function_360a0();
int64_t function_36b3c();
int64_t function_36ff8();
int64_t function_488396();
int64_t function_488452();
int64_t function_4885ae();
int64_t function_488d00();
int64_t function_489630();
int64_t function_4d5a50();
int64_t function_4ea000();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_524720();
int64_t function_525bd0();
int64_t function_525d20();
int64_t function_542470();
int64_t function_542590();
int64_t function_547e30();
int64_t function_54d830();
int64_t function_54ed10();
int64_t function_54ed60();
int64_t function_54eec0();
int64_t function_5509d0();
int64_t function_551820();
int64_t function_556610();
int64_t function_55a5d0();
int64_t function_55b740();
int64_t function_55b890();
int64_t function_56510();
int64_t function_56788();
int64_t function_577a20();
int64_t function_577bc0();
int64_t function_5797e0();
int64_t function_579a30();
int64_t function_579bc0();
int64_t function_57ac30();
int64_t function_57b2f0();
int64_t function_57b450();
int64_t function_57ba10();
int64_t function_57d580();
int64_t function_59b19();
int64_t function_6bb54();
int64_t function_6bd38();
int64_t function_6bd3e();
int64_t function_6bf2a();
int64_t function_6bfdb();
int64_t function_7826e();

// Address range: 0x56788 - 0x568c3
int64_t function_56788(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x56788
    if (a2 == 0) {
        // 0x5688a
        function_542470("basic_string::_S_construct null not valid");
        function_56510();
        *(int64_t *)"basic_string::_S_construct null not valid" = (int64_t)&g7;
        __asm_rep_movsd_memcpy("ot valid", NULL, 136);
        int64_t result; // 0x56788
        return result;
    }
    int64_t v1 = a2;
    int64_t result2 = v1 + 2; // 0x567a9
    while (*(int16_t *)v1 != 0) {
        // 0x567a3
        v1 = result2;
        result2 = v1 + 2;
    }
    // 0x567b7
    if (v1 == a2) {
        // 0x567c7
        *(int64_t *)a1 = (int64_t)&g10;
        return result2;
    }
    int64_t v2 = v1 - a2; // 0x567ad
    int64_t v3 = v2 >> 1; // 0x567e4
    if (v3 >= 0x1ffffffffffffffd) {
        // 0x567ec
        function_542590("basic_string::_S_create");
    }
    int64_t v4 = v2 & -2; // 0x567f8
    uint64_t v5 = v4 + 58; // 0x56800
    int64_t v6 = v3; // 0x5680a
    int64_t v7 = v4; // 0x5680a
    if (v3 != 0 && v5 > (int64_t)&g1) {
        uint64_t v8 = ((int64_t)&g1 - (v5 & (int64_t)(int32_t)&g14)) / 2 + v3; // 0x56821
        v6 = v8 < 0x1ffffffffffffffc ? v8 : 0x1ffffffffffffffc;
        v7 = 2 * v6;
    }
    int64_t result3 = function_4efd30(v7 + 26); // 0x5683c
    *(int64_t *)(result3 + 8) = v6;
    *(int32_t *)(result3 + 16) = 0;
    int64_t v9 = result3 + 24; // 0x56850
    if (v3 != 1) {
        if (v3 != 0) {
            // 0x56869
            __asm_rep_movsb_memcpy((char *)v9, (char *)a2, v2);
        }
    } else {
        // 0x5685b
        *(int16_t *)v9 = (int16_t)a2;
    }
    // 0x56871
    result3 = (int64_t)&g9;
    if (result3 != (int64_t)&g9) {
        // 0x5687a
        *(int64_t *)result3 = v3;
        *(int16_t *)(v9 + v2) = 0;
    }
    // 0x567c7
    *(int64_t *)a1 = v9;
    return result3;
}

// Address range: 0x59b19 - 0x59c57
int64_t function_59b19(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = function_36b3c(a2, 0, "basic_string::insert"); // 0x59b3c
    int64_t v2 = *(int64_t *)(a2 - 24); // 0x59b52
    function_36b3c(a3, 0, "basic_string::insert");
    int64_t v3 = *(int64_t *)((int64_t)"basic_string::insert" - 24); // 0x59b69
    if (v2 > 0xffffffffffffffe - v3) {
        // 0x59b75
        function_542590("basic_string::insert");
    }
    uint64_t v4 = 4 * v1 + a2; // 0x59b4d
    int64_t v5; // 0x59b19
    int64_t v6; // 0x59b19
    int64_t v7; // 0x59b19
    if (v4 >= (int64_t)"basic_string::insert") {
        if (v4 > 4 * v3 + (int64_t)"basic_string::insert") {
            goto lab_0x59b86;
        } else {
            // 0x59bb3
            if ((char)function_29cea((int64_t)"basic_string::insert" - 24) != 0) {
                goto lab_0x59b86;
            } else {
                int64_t v8 = v4 - v3; // 0x59bc0
                function_36ff8(a3, 0, 0, v2);
                int64_t v9 = v8 + 4 * v2; // 0x59be7
                v5 = v9;
                v7 = v9 == 0 ? v8 : v9;
                v6 = 0;
                goto lab_0x59c29;
            }
        }
    } else {
        goto lab_0x59b86;
    }
  lab_0x59b86:
    // 0x59b86
    function_36ff8(a3, 0, 0, v2);
    v5 = v2;
    v7 = v4;
    v6 = v2;
    if (v2 == 0) {
        // 0x59c2e
        *(int64_t *)result = v2;
        *(int64_t *)a3 = (int64_t)&g13;
        return result;
    }
    goto lab_0x59c29;
  lab_0x59c29:
    // 0x59c29
    function_29ef7(v6, v7, v2, v5);
    // 0x59c2e
    *(int64_t *)result = v2;
    *(int64_t *)a3 = (int64_t)&g13;
    return result;
}

// Address range: 0x6bb54 - 0x6bc90
int64_t function_6bb54(int64_t a1) {
    // 0x6bb54
    *(int32_t *)(a1 + 160) = 0;
    int64_t v1 = __readfsqword(40); // 0x6bb77
    int64_t v2; // bp-144, 0x6bb54
    function_6bf2a(&v2);
    int64_t v3 = a1 + 168; // 0x6bb8f
    int64_t v4 = a1 + 184; // 0x6bb9a
    int64_t v5; // bp-128, 0x6bb54
    function_6bfdb(v4, &v5);
    int64_t v6 = a1 + 216; // 0x6bbaf
    int64_t v7; // bp-96, 0x6bb54
    function_6bfdb(v6, &v7);
    int64_t * v8 = (int64_t *)v3; // 0x6bbbb
    int64_t v9 = v2; // 0x6bbc2
    v2 = *v8;
    *v8 = v9;
    int64_t v10; // 0x6bb54
    uint64_t v11 = v10 + 8; // 0x6bc08
    int64_t v12 = v10 + 8;
    int64_t v13 = v12; // 0x6bc16
    if (v11 > v12) {
        function_4eeb50(*(int64_t *)v13);
        v13 += 8;
        while (v11 > v13) {
            // 0x6bc18
            function_4eeb50(*(int64_t *)v13);
            v13 += 8;
        }
    }
    // 0x6bc31
    v7 = v5;
    function_6bd38(&v2);
    int64_t * v14 = (int64_t *)v4; // 0x6bc4d
    int64_t * v15 = (int64_t *)v6; // 0x6bc54
    if (*v15 != *v14) {
        function_6bd3e(v3);
        while (*v15 != *v14) {
            // 0x6bc5d
            function_6bd3e(v3);
        }
    }
    int64_t result = 0; // 0x6bc77
    if (v1 != __readfsqword(40)) {
        // 0x6bc79
        __stack_chk_fail();
        result = (int64_t)&g16;
    }
    // 0x6bc7e
    return result;
}

// Address range: 0x4885ae - 0x4886ef
int64_t function_4885ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0; // bp-96, 0x4885cb
    int64_t v2 = __readfsqword(40); // 0x4885dd
    int64_t v3 = 0; // bp-72, 0x4885f9
    int64_t v4 = function_488d00(&v3); // 0x488614
    int64_t v5 = v4; // 0x48861b
    int64_t v6 = 0; // 0x48861b
    if ((char)v4 != 0) {
        int64_t v7 = function_489630(a1, a2, &v3, &v1); // 0x48862f
        v5 = v7;
        v6 = 0;
        if (v7 == a2) {
            // 0x488639
            char * v8; // bp-104, 0x4885ae
            char * v9; // bp-112, 0x4885ae
            int64_t v10 = function_488452(a1, v7, (int64_t *)&v8, (int64_t *)&v9); // 0x488649
            v5 = v10;
            v6 = 0;
            if ((char)v10 != 0) {
                if (a3 != 0) {
                    // 0x48865a
                    __asm_rep_movsd_memcpy((char *)a3, v8, 16);
                }
                int64_t v11 = v10 % 256; // 0x488650
                v5 = v10;
                v6 = v11;
                if (a4 != 0) {
                    // 0x48866e
                    __asm_rep_movsd_memcpy((char *)a4, v9, 66);
                    v5 = v10;
                    v6 = v11;
                }
            }
        }
    }
    int64_t v12 = v5; // 0x48868a
    if (v3 != 0) {
        int64_t v13 = v3 + 64; // 0x488690
        function_488396(*(int64_t *)(v3 + 48) - 24);
        int64_t v14 = function_488396(*(int64_t *)(v3 + 40) - 24); // 0x4886a5
        while (v13 != 0) {
            int64_t v15 = v13;
            v13 = v15 + 64;
            function_488396(*(int64_t *)(v15 + 48) - 24);
            v14 = function_488396(*(int64_t *)(v15 + 40) - 24);
        }
        // 0x4886ac
        v12 = v14;
        if (v3 != 0) {
            // 0x4886b6
            v12 = function_4eeb50(v3);
        }
    }
    int64_t v16 = v12; // 0x4886c3
    if (v1 != 0) {
        // 0x4886c5
        v16 = function_4eeb50(v1);
    }
    // 0x4886ca
    if (v2 == __readfsqword(40)) {
        // 0x4886e2
        return v16 & -256 | v6;
    }
    // 0x4886dd
    __stack_chk_fail();
    // 0x4886e2
    return (int64_t)&g16;
}

// Address range: 0x4d8cc0 - 0x4d8e02
int64_t blake3_hasher_init_derive_key_raw(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int128_t v1 = __asm_movdqa(g6); // 0x4d8cd2
    int128_t v2 = __asm_movdqa(g5); // 0x4d8cda
    int64_t v3 = __readfsqword(40); // 0x4d8ce2
    __asm_movaps(v1);
    __asm_movaps(v1);
    int128_t v4 = __asm_pxor(v1, v1); // 0x4d8d0d
    int64_t v5 = __asm_movaps(v2); // bp-1992, 0x4d8d29
    __asm_movaps(v2);
    int128_t v6; // 0x4d8cc0
    __asm_movups(v6, v4);
    __asm_movups(v6, v4);
    __asm_movups(v6, v4);
    __asm_movups(v6, v4);
    if (a3 != 0) {
        // 0x4d8d52
        function_4d5a50(&v5);
    }
    // 0x4d8d5a
    int128_t v7; // bp-72, 0x4d8cc0
    function_1ff90(&v5, 0, (int64_t *)&v7, 32);
    int128_t v8 = __asm_movdqa(v6); // 0x4d8d73
    int128_t v9 = __asm_movdqa(0x8000000000000000 * v7 >> 64); // 0x4d8d7c
    int128_t v10 = __asm_movdqa(0x8000000000000000 * v7 >> 64); // 0x4d8d85
    *(int64_t *)(a1 + 64) = 0;
    int128_t v11 = __asm_movdqa(v6); // 0x4d8d96
    *(int16_t *)(a1 + 136) = 0;
    *(char *)(a1 + 138) = 64;
    *(char *)(a1 + 144) = 0;
    __asm_movups(*(int128_t *)(a1 + 16), v8);
    __asm_movups(*(int128_t *)(a1 + 48), v8);
    int128_t v12 = __asm_pxor(v8, v8); // 0x4d8dbc
    __asm_movaps(v10);
    __asm_movaps(v11);
    int64_t v13; // 0x4d8cc0
    __asm_movups(*(int128_t *)&v13, v9);
    __asm_movups(*(int128_t *)(a1 + 32), v9);
    __asm_movups(*(int128_t *)(a1 + 72), v12);
    __asm_movups(*(int128_t *)(a1 + 88), v12);
    __asm_movups(*(int128_t *)(a1 + 104), v12);
    __asm_movups(*(int128_t *)(a1 + 120), v12);
    int64_t result = v3 - __readfsqword(40); // 0x4d8de8
    if (result == 0) {
        // 0x4d8df3
        return result;
    }
    // 0x4d8dfd
    __stack_chk_fail();
    return (int64_t)&g16;
}

// Address range: 0x4ea000 - 0x4ea13d
int64_t function_4ea000(int64_t a1, int64_t result2, uint64_t a3) {
    char * v1 = (char *)(result2 + 8); // 0x4ea001
    unsigned char v2 = *v1; // 0x4ea001
    *(int16_t *)(result2 + 272) = (int16_t)(256 * (int64_t)v2 | a3 % 256);
    unsigned char v3 = (char)a3; // 0x4ea014
    int64_t result; // 0x4ea000
    if (v3 == 32) {
        // 0x4ea0c0
        if (v2 >= 12) {
            // 0x4ea06d
            return 0x80200002;
        }
        int64_t * v4 = (int64_t *)(a1 + 24); // 0x4ea0ca
        uint64_t v5 = *v4; // 0x4ea0ca
        result = 0x80200000;
        if (v5 >= 4) {
            // 0x4ea0d9
            *v1 = v2 + 4;
            int64_t * v6 = (int64_t *)(a1 + 16); // 0x4ea0e3
            int64_t v7 = *v6; // 0x4ea0e3
            *v4 = v5 - 4;
            *v6 = v7 + 4;
            *(int64_t *)(result2 + 264) = (int64_t)*(int32_t *)v7;
            result = 0x100000;
        }
        // 0x4ea06d
        return result;
    }
    if (v3 >= 33) {
        // 0x4ea078
        if (v2 >= 8) {
            // 0x4ea06d
            return 0x80200002;
        }
        int64_t * v8 = (int64_t *)(a1 + 24); // 0x4ea082
        uint64_t v9 = *v8; // 0x4ea082
        result = 0x80200000;
        if (v9 >= 8) {
            // 0x4ea091
            *v1 = v2 + 8;
            int64_t * v10 = (int64_t *)(a1 + 16); // 0x4ea09b
            int64_t v11 = *v10; // 0x4ea09b
            *v8 = v9 - 8;
            *v10 = v11 + 8;
            *(int64_t *)(result2 + 264) = *(int64_t *)v11;
            result = 0x100000;
        }
        // 0x4ea06d
        return result;
    }
    if (v3 != 8) {
        // 0x4ea108
        if (v2 >= 14) {
            // 0x4ea06d
            return 0x80200002;
        }
        int64_t * v12 = (int64_t *)(a1 + 24); // 0x4ea111
        uint64_t v13 = *v12; // 0x4ea111
        result = 0x80200000;
        if (v13 >= 2) {
            // 0x4ea124
            *v1 = v2 + 2;
            *v12 = v13 - 2;
            return result2;
        }
    } else {
        // 0x4ea02d
        if (v2 >= 15) {
            // 0x4ea06d
            return 0x80200002;
        }
        int64_t * v14 = (int64_t *)(a1 + 24); // 0x4ea032
        int64_t v15 = *v14; // 0x4ea032
        result = 0x80200000;
        if (v15 != 0) {
            int64_t * v16 = (int64_t *)(a1 + 16); // 0x4ea040
            int64_t v17 = *v16; // 0x4ea040
            *v16 = v17 + 1;
            *v1 = v2 + 1;
            *v14 = v15 - 1;
            *(int64_t *)(result2 + 264) = (int64_t)*(char *)v17;
            result = 0x100000;
        }
    }
    // 0x4ea06d
    return result;
}

// Address range: 0x525bd0 - 0x525d0a
// From class:    std::__cxx11::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_525bd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = *(int64_t *)(function_556610(a6 + 208) + 16); // 0x525c03
    int64_t result2 = function_524720(a1, a2, a3, a4, a5, a6, a7, a8, *(int64_t *)(v1 + 32)); // 0x525c28
    if (result2 == 0) {
        goto lab_0x525cf0;
    } else {
        if ((int32_t)a3 == -1) {
            // 0x525ca0
            if (*(int64_t *)(result2 + 16) >= *(int64_t *)(result2 + 24)) {
                // 0x525cd8
                if ((int32_t)*(int64_t *)result2 == -1) {
                    goto lab_0x525cf0;
                } else {
                    goto lab_0x525c61;
                }
            } else {
                goto lab_0x525c61;
            }
        } else {
            goto lab_0x525c61;
        }
    }
  lab_0x525cf0:;
    int64_t result = 0; // 0x525cf6
    if (a4 != 0) {
        // 0x525cfc
        if ((int32_t)a5 == -1) {
            // 0x525d06
            return *(int64_t *)(a4 + 24);
        }
        // 0x525c71
        return 0;
    }
    goto lab_0x525c6c;
  lab_0x525c6c:;
    int32_t * v2 = (int32_t *)a7; // 0x525c6c
    *v2 = *v2 | 2;
    // 0x525c71
    return result;
  lab_0x525c61:
    // 0x525c61
    if (a4 == 0) {
        // 0x525c71
        return result2;
    }
    // 0x525c66
    result = result2;
    if ((int32_t)a5 == -1) {
        uint64_t v3 = *(int64_t *)(a4 + 16); // 0x525cb7
        result = result2;
        if ((int32_t)a3 == -1 == v3 >= *(int64_t *)(a4 + 24)) {
            // 0x525c71
            return result2;
        }
    }
    goto lab_0x525c6c;
}

// Address range: 0x525d20 - 0x525e5a
// From class:    std::__cxx11::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_525d20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = *(int64_t *)(function_556610(a6 + 208) + 16); // 0x525d53
    int64_t result2 = function_524720(a1, a2, a3, a4, a5, a6, a7, a8, *(int64_t *)(v1 + 16)); // 0x525d78
    if (result2 == 0) {
        goto lab_0x525e40;
    } else {
        if ((int32_t)a3 == -1) {
            // 0x525df0
            if (*(int64_t *)(result2 + 16) >= *(int64_t *)(result2 + 24)) {
                // 0x525e28
                if ((int32_t)*(int64_t *)result2 == -1) {
                    goto lab_0x525e40;
                } else {
                    goto lab_0x525db1;
                }
            } else {
                goto lab_0x525db1;
            }
        } else {
            goto lab_0x525db1;
        }
    }
  lab_0x525e40:;
    int64_t result = 0; // 0x525e46
    if (a4 != 0) {
        // 0x525e4c
        if ((int32_t)a5 == -1) {
            // 0x525e56
            return *(int64_t *)(a4 + 24);
        }
        // 0x525dc1
        return 0;
    }
    goto lab_0x525dbc;
  lab_0x525dbc:;
    int32_t * v2 = (int32_t *)a7; // 0x525dbc
    *v2 = *v2 | 2;
    // 0x525dc1
    return result;
  lab_0x525db1:
    // 0x525db1
    if (a4 == 0) {
        // 0x525dc1
        return result2;
    }
    // 0x525db6
    result = result2;
    if ((int32_t)a5 == -1) {
        uint64_t v3 = *(int64_t *)(a4 + 16); // 0x525e07
        result = result2;
        if ((int32_t)a3 == -1 == v3 >= *(int64_t *)(a4 + 24)) {
            // 0x525dc1
            return result2;
        }
    }
    goto lab_0x525dbc;
}

// Address range: 0x54ed60 - 0x54ee9c
// From class:    std::__codecvt_utf8_utf16_base<char32_t>
// Type:          virtual member function
int64_t function_54ed60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    uint64_t v1 = *(int64_t *)(a1 + 16); // 0x54ed77
    int64_t v2 = a3; // bp-88, 0x54ed85
    __readfsqword(40);
    v2 = a3;
    if ((*(char *)(a1 + 24) & 4) != 0) {
        // 0x54ee70
        function_54ed10(&v2);
    }
    int64_t result2 = 0; // 0x54edb6
    int64_t v3 = a4; // 0x54edb6
    int64_t v4 = a6; // 0x54edb6
    if (v2 != a4) {
        int64_t v5 = v2; // 0x54edc3
        result2 = 0;
        v3 = v2;
        v4 = a6;
        if (a6 != a7) {
            int64_t v6 = a6;
            uint64_t result = function_54d830(&v2, v1); // 0x54edcb
            uint32_t v7 = (int32_t)result; // 0x54edd0
            while (v7 != -2) {
                if (v1 < (result & 0xffffffff)) {
                    // 0x54eea0
                    return result;
                }
                int64_t v8; // 0x54ed60
                if (v7 > (int32_t)&g15) {
                    // 0x54ee08
                    result2 = 1;
                    v3 = v5;
                    v4 = v6;
                    if (a7 - v6 == 4) {
                        goto lab_0x54ee45_3;
                    }
                    // 0x54ee14
                    *(int32_t *)(v6 + 4) = ((v7 & (int32_t)((int64_t)(int16_t)&g3 | -0x10000)) - (int32_t)(int16_t)&g2) % 0x10000;
                    *(int32_t *)v6 = ((int32_t)(result / 1024) - (int32_t)(int16_t)"\t\v") % 0x10000;
                    v8 = v6 + 8;
                } else {
                    // 0x54edeb
                    *(int32_t *)v6 = v7;
                    v8 = v6 + 4;
                }
                // 0x54edf2
                result2 = 0;
                v3 = v2;
                v4 = v8;
                if (v2 == a4) {
                    goto lab_0x54ee45_3;
                }
                // 0x54edc0
                v5 = v2;
                result2 = 0;
                v3 = v2;
                v4 = a7;
                if (v8 == a7) {
                    goto lab_0x54ee45_3;
                }
                v6 = v8;
                result = function_54d830(&v2, v1);
                v7 = (int32_t)result;
            }
            // 0x54ee90
            result2 = 1;
            v3 = v2;
            v4 = v6;
        }
    }
  lab_0x54ee45_3:
    // 0x54ee45
    *(int64_t *)a5 = v3;
    *(int64_t *)a8 = v4;
    __readfsqword(40);
    return result2;
}

// Address range: 0x54eec0 - 0x54effc
// From class:    std::__codecvt_utf8_utf16_base<wchar_t>
// Type:          virtual member function
int64_t function_54eec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    uint64_t v1 = *(int64_t *)(a1 + 24); // 0x54eed7
    int64_t v2 = a3; // bp-88, 0x54eee5
    __readfsqword(40);
    v2 = a3;
    if ((*(char *)(a1 + 32) & 4) != 0) {
        // 0x54efd0
        function_54ed10(&v2);
    }
    int64_t result2 = 0; // 0x54ef16
    int64_t v3 = a4; // 0x54ef16
    int64_t v4 = a6; // 0x54ef16
    if (v2 != a4) {
        int64_t v5 = v2; // 0x54ef23
        result2 = 0;
        v3 = v2;
        v4 = a6;
        if (a6 != a7) {
            int64_t v6 = a6;
            uint64_t result = function_54d830(&v2, v1); // 0x54ef2b
            uint32_t v7 = (int32_t)result; // 0x54ef30
            while (v7 != -2) {
                if (v1 < (result & 0xffffffff)) {
                    // 0x54f000
                    return result;
                }
                int64_t v8; // 0x54eec0
                if (v7 > (int32_t)&g15) {
                    // 0x54ef68
                    result2 = 1;
                    v3 = v5;
                    v4 = v6;
                    if (a7 - v6 == 4) {
                        goto lab_0x54efa5_3;
                    }
                    // 0x54ef74
                    *(int32_t *)(v6 + 4) = ((v7 & (int32_t)((int64_t)(int16_t)&g3 | -0x10000)) - (int32_t)(int16_t)&g2) % 0x10000;
                    *(int32_t *)v6 = ((int32_t)(result / 1024) - (int32_t)(int16_t)"\t\v") % 0x10000;
                    v8 = v6 + 8;
                } else {
                    // 0x54ef4b
                    *(int32_t *)v6 = v7;
                    v8 = v6 + 4;
                }
                // 0x54ef52
                result2 = 0;
                v3 = v2;
                v4 = v8;
                if (v2 == a4) {
                    goto lab_0x54efa5_3;
                }
                // 0x54ef20
                v5 = v2;
                result2 = 0;
                v3 = v2;
                v4 = a7;
                if (v8 == a7) {
                    goto lab_0x54efa5_3;
                }
                v6 = v8;
                result = function_54d830(&v2, v1);
                v7 = (int32_t)result;
            }
            // 0x54eff0
            result2 = 1;
            v3 = v2;
            v4 = v6;
        }
    }
  lab_0x54efa5_3:
    // 0x54efa5
    *(int64_t *)a5 = v3;
    *(int64_t *)a8 = v4;
    __readfsqword(40);
    return result2;
}

// Address range: 0x55b740 - 0x55b87a
// From class:    std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_55b740(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = *(int64_t *)(function_556610(a6 + 208) + 16); // 0x55b773
    int64_t result2 = function_55a5d0(a1, a2, a3, a4, a5, a6, a7, a8, *(int64_t *)(v1 + 32)); // 0x55b798
    if (result2 == 0) {
        goto lab_0x55b860;
    } else {
        if ((int32_t)a3 == -1) {
            // 0x55b810
            if (*(int64_t *)(result2 + 16) >= *(int64_t *)(result2 + 24)) {
                // 0x55b848
                if ((int32_t)*(int64_t *)result2 == -1) {
                    goto lab_0x55b860;
                } else {
                    goto lab_0x55b7d1;
                }
            } else {
                goto lab_0x55b7d1;
            }
        } else {
            goto lab_0x55b7d1;
        }
    }
  lab_0x55b860:;
    int64_t result = 0; // 0x55b866
    if (a4 != 0) {
        // 0x55b86c
        if ((int32_t)a5 == -1) {
            // 0x55b876
            return *(int64_t *)(a4 + 24);
        }
        // 0x55b7e1
        return 0;
    }
    goto lab_0x55b7dc;
  lab_0x55b7dc:;
    int32_t * v2 = (int32_t *)a7; // 0x55b7dc
    *v2 = *v2 | 2;
    // 0x55b7e1
    return result;
  lab_0x55b7d1:
    // 0x55b7d1
    if (a4 == 0) {
        // 0x55b7e1
        return result2;
    }
    // 0x55b7d6
    result = result2;
    if ((int32_t)a5 == -1) {
        uint64_t v3 = *(int64_t *)(a4 + 16); // 0x55b827
        result = result2;
        if ((int32_t)a3 == -1 == v3 >= *(int64_t *)(a4 + 24)) {
            // 0x55b7e1
            return result2;
        }
    }
    goto lab_0x55b7dc;
}

// Address range: 0x55b890 - 0x55b9ca
// From class:    std::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_55b890(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = *(int64_t *)(function_556610(a6 + 208) + 16); // 0x55b8c3
    int64_t result2 = function_55a5d0(a1, a2, a3, a4, a5, a6, a7, a8, *(int64_t *)(v1 + 16)); // 0x55b8e8
    if (result2 == 0) {
        goto lab_0x55b9b0;
    } else {
        if ((int32_t)a3 == -1) {
            // 0x55b960
            if (*(int64_t *)(result2 + 16) >= *(int64_t *)(result2 + 24)) {
                // 0x55b998
                if ((int32_t)*(int64_t *)result2 == -1) {
                    goto lab_0x55b9b0;
                } else {
                    goto lab_0x55b921;
                }
            } else {
                goto lab_0x55b921;
            }
        } else {
            goto lab_0x55b921;
        }
    }
  lab_0x55b9b0:;
    int64_t result = 0; // 0x55b9b6
    if (a4 != 0) {
        // 0x55b9bc
        if ((int32_t)a5 == -1) {
            // 0x55b9c6
            return *(int64_t *)(a4 + 24);
        }
        // 0x55b931
        return 0;
    }
    goto lab_0x55b92c;
  lab_0x55b92c:;
    int32_t * v2 = (int32_t *)a7; // 0x55b92c
    *v2 = *v2 | 2;
    // 0x55b931
    return result;
  lab_0x55b921:
    // 0x55b921
    if (a4 == 0) {
        // 0x55b931
        return result2;
    }
    // 0x55b926
    result = result2;
    if ((int32_t)a5 == -1) {
        uint64_t v3 = *(int64_t *)(a4 + 16); // 0x55b977
        result = result2;
        if ((int32_t)a3 == -1 == v3 >= *(int64_t *)(a4 + 24)) {
            // 0x55b931
            return result2;
        }
    }
    goto lab_0x55b92c;
}

// Address range: 0x577a20 - 0x577b5b
int64_t function_577a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __readfsqword(40); // 0x577a59
    function_7826e();
    int64_t result; // bp-72, 0x577a20
    int64_t v2; // bp-80, 0x577a20
    function_2509a(a2, &result, a3 & 0xffffffff, a4 & 0xffffffff, (int32_t)a5, &v2);
    int64_t v3 = result - 24; // 0x577aae
    *(int64_t *)(a2 + 32) = (int64_t)&g4;
    *(int64_t *)(a2 + 8) = *(int64_t *)v3;
    if (v3 != (int64_t)&g11) {
        // 0x577b00
        if (g8 == 0) {
            // 0x577b60
            return result;
        }
        int32_t * v4 = (int32_t *)(result - 8); // 0x577b0f
        int32_t v5 = *v4; // 0x577b0f
        *v4 = v5 - 1;
        if (v5 >= 0 != v5 != 0) {
            // 0x577b18
            int64_t v6; // bp-81, 0x577a20
            function_547e30(v3, &v6, v5);
        }
    }
    int64_t v7 = v2 - 24; // 0x577acf
    if (v7 == (int64_t)&g11) {
        // 0x577ad8
        return __readfsqword(40) ^ v1;
    }
    int32_t * v8 = (int32_t *)(v2 - 8);
    int32_t v9 = *v8;
    *v8 = v9 - 1;
    if (v9 >= 0 != v9 != 0) {
        // 0x577b40
        function_547e30(v7, &result, v9);
    }
    // 0x577ad8
    return __readfsqword(40) ^ v1;
}

// Address range: 0x577bc0 - 0x577cfb
int64_t function_577bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __readfsqword(40); // 0x577bf9
    function_551820();
    int64_t result; // bp-72, 0x577bc0
    int64_t v2; // bp-80, 0x577bc0
    function_360a0(a2, &result, a3 & 0xffffffff, a4 & 0xffffffff, (int32_t)a5, &v2);
    int64_t v3 = result - 24; // 0x577c4e
    *(int64_t *)(a2 + 32) = 0x575eb0;
    *(int64_t *)(a2 + 8) = *(int64_t *)v3;
    if (v3 != (int64_t)&g12) {
        // 0x577ca0
        if (g8 == 0) {
            // 0x577d00
            return result;
        }
        int32_t * v4 = (int32_t *)(result - 8); // 0x577caf
        int32_t v5 = *v4; // 0x577caf
        *v4 = v5 - 1;
        if (v5 >= 0 != v5 != 0) {
            // 0x577cb8
            int64_t v6; // bp-81, 0x577bc0
            function_5509d0(v3, &v6, v5);
        }
    }
    int64_t v7 = v2 - 24; // 0x577c6f
    if (v7 == (int64_t)&g12) {
        // 0x577c78
        return __readfsqword(40) ^ v1;
    }
    int32_t * v8 = (int32_t *)(v2 - 8);
    int32_t v9 = *v8;
    *v8 = v9 - 1;
    if (v9 >= 0 != v9 != 0) {
        // 0x577ce0
        function_5509d0(v7, &result, v9);
    }
    // 0x577c78
    return __readfsqword(40) ^ v1;
}

// Address range: 0x579bc0 - 0x579cfb
int64_t function_579bc0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 24; // 0x579bc3
    int64_t v2 = function_579a30(v1); // 0x579bc7
    int32_t v3 = v2; // 0x579bcc
    if (v3 < 1) {
        // 0x579cc0
        return 0;
    }
    int64_t * v4 = (int64_t *)v1; // 0x579bd4
    int64_t v5 = *v4; // 0x579bd4
    int64_t v6 = 0x100000000 * v2 >> 32; // 0x579bdc
    int64_t result; // 0x579bc0
    if (*(int64_t *)(a1 + 8) - v5 < v6) {
        // 0x579c4e
        result = 0;
        *(int64_t *)(a1 + 72) = result;
        return result;
    }
    int64_t v7 = v5 + v6; // 0x579be7
    *v4 = v7;
    int64_t v8; // 0x579bc0
    int64_t v9; // 0x579bc0
    int64_t v10; // 0x579bc0
    int64_t v11; // 0x579bc0
    if ((*(char *)(a1 + 16) & 4) == 0) {
        goto lab_0x579bfe;
    } else {
        // 0x579bf5
        if (*(char *)v7 == 36) {
            int64_t v12 = (int64_t)*(int32_t *)(a1 + 40); // 0x579ca7
            *v4 = v7 + 1;
            int64_t v13 = (int64_t)*(int32_t *)(a1 + 44); // 0x579caf
            v8 = v13;
            v10 = v12;
            v9 = v13;
            v11 = v12;
            if (v3 < 10) {
                goto lab_0x579c48;
            } else {
                goto lab_0x579c0b;
            }
        } else {
            goto lab_0x579bfe;
        }
    }
  lab_0x579bfe:;
    int64_t v14 = (int64_t)*(int32_t *)(a1 + 40); // 0x579c01
    int64_t v15 = (int64_t)*(int32_t *)(a1 + 44); // 0x579c05
    v8 = v15;
    v10 = v14;
    v9 = v15;
    v11 = v14;
    if (v3 < 10) {
        goto lab_0x579c48;
    } else {
        goto lab_0x579c0b;
    }
  lab_0x579c48:
    // 0x579c48
    if (v11 >= v9) {
        // 0x579c4e
        result = 0;
        *(int64_t *)(a1 + 72) = result;
        return result;
    }
    int64_t v16 = 0x100000000 * v11;
    int64_t v17 = *(int64_t *)(a1 + 32) + 8 * ((v16 >> 32) + (v16 >> 31)); // 0x579c71
    int32_t * v18 = (int32_t *)(v17 + 4); // 0x579c75
    *v18 = 0;
    *(int32_t *)(a1 + 40) = (int32_t)v11 + 1;
    int64_t result2 = 0; // 0x579c80
    if (v5 != 0) {
        // 0x579c82
        *v18 = 0;
        *(int32_t *)v17 = 0;
        *(int64_t *)(v17 + 8) = v5;
        *(int32_t *)(v17 + 16) = v3;
        result2 = v17;
    }
    // 0x579c4e
    *(int64_t *)(a1 + 72) = result2;
    return result2;
  lab_0x579c0b:
    // 0x579c0b
    v9 = v8;
    v11 = v10;
    if (*(int64_t *)v5 == 0x5f4c41424f4c475f) {
        char v19 = *(char *)(v5 + 8); // 0x579c1a
        v9 = v8;
        v11 = v10;
        if (v19 < 96) {
            // 0x579c27
            v9 = v8;
            v11 = v10;
            if ((1 << (int64_t)((v19 + 28) % 64) & 0x800000000000401) != 0) {
                // 0x579c37
                v9 = v8;
                v11 = v10;
                if (*(char *)(v5 + 9) == 78) {
                    int32_t * v20 = (int32_t *)(a1 + 80); // 0x579cd0
                    *v20 = 22 - v3 + *v20;
                    if (v10 < v8) {
                        // 0x579ce5
                        *(int32_t *)(a1 + 40) = (int32_t)v10 + 1;
                        return *(int64_t *)(a1 + 32);
                    }
                    // 0x579c4e
                    result = 0;
                    *(int64_t *)(a1 + 72) = result;
                    return result;
                }
            }
        }
    }
    goto lab_0x579c48;
}

// Address range: 0x57b2f0 - 0x57b430
int64_t function_57b2f0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x57b2fd
    int64_t v2 = *v1; // 0x57b2fd
    int64_t * v3 = (int64_t *)(a1 + 72); // 0x57b301
    int64_t v4 = __readfsqword(40); // 0x57b305
    char v5 = *(char *)v2; // 0x57b315
    if (v5 == 69) {
        int64_t v6 = __readfsqword(40); // 0x57b421
        *v1 = v2 + 1;
        return v6 ^ v4;
    }
    int64_t v7 = 0; // bp-56, 0x57b320
    int32_t * v8 = (int32_t *)(a1 + 84);
    char v9 = v5; // 0x57b32b
    int64_t v10 = v2; // 0x57b32b
    int64_t v11 = (int64_t)&v7; // 0x57b32b
    int64_t v12; // 0x57b2f0
    int64_t result; // 0x57b2f0
    while (true) {
      lab_0x57b37a:;
        char v13 = v9;
        if (v13 == 76) {
            // 0x57b3c0
            v12 = function_57d580(a1);
            goto lab_0x57b343;
        } else {
            if (v13 > 76) {
                if (v13 != 88) {
                    // 0x57b3d0
                    v12 = function_57ba10(a1);
                    goto lab_0x57b343;
                } else {
                    // 0x57b384
                    *v1 = v10 + 1;
                    *v8 = 1;
                    int64_t v14 = function_57ac30(a1); // 0x57b39a
                    int64_t v15 = *v1; // 0x57b39f
                    result = 0;
                    if (*(char *)v15 != 69) {
                        // break -> 0x57b3e2
                        break;
                    }
                    // 0x57b3ac
                    *v1 = v15 + 1;
                    v12 = v14;
                    goto lab_0x57b343;
                }
            } else {
                if (v13 < 75) {
                    // 0x57b33b
                    v12 = function_57b450(a1);
                    goto lab_0x57b343;
                } else {
                    // 0x57b3d0
                    v12 = function_57ba10(a1);
                    goto lab_0x57b343;
                }
            }
        }
    }
  lab_0x57b3e2_3:
    // 0x57b3e2
    __readfsqword(40);
    return result;
  lab_0x57b343:
    // 0x57b343
    result = 0;
    if (v12 == 0) {
        // break -> 0x57b3e2
        goto lab_0x57b3e2_3;
    }
    int64_t v16 = function_5797e0(a1, 47, v12, 0); // 0x57b359
    *(int64_t *)v11 = v16;
    result = 0;
    if (v16 == 0) {
        // break -> 0x57b3e2
        goto lab_0x57b3e2_3;
    }
    int64_t v17 = *v1; // 0x57b367
    v9 = *(char *)v17;
    v10 = v17;
    v11 = v16 + 16;
    if (v9 == 69) {
        // 0x57b400
        *v1 = v17 + 1;
        result = v7;
        goto lab_0x57b3e2_3;
    }
    goto lab_0x57b37a;
}
