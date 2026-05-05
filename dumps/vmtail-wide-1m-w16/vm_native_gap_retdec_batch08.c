/*
 * Targeted RetDec C for native executable gap queue batch 8.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x55ead0-0x55ec4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x497e60-0x497fdd rank=- name=- kind=- bytes=- uncovered=-
 *   0x5422a-0x543a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48c190-0x48c30c rank=- name=- kind=- bytes=- uncovered=-
 *   0x54d560-0x54d6dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x61792-0x6190c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ff270-0x4ff3e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5010e0-0x501258 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2247e-0x225f5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x327a0-0x32917 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36b64-0x36cda rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b51a-0x4b690 rank=- name=- kind=- bytes=- uncovered=-
 *   0x71d34-0x71eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c5bd0-0x4c5d45 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ea160-0x4ea2d5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x548780-0x5488f5 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1a46bb();
int64_t function_221a8();
int64_t function_2247e();
int64_t function_24e1e();
int64_t function_24f44();
int64_t function_25018();
int64_t function_2508e();
int64_t function_2515a();
int64_t function_254fe();
int64_t function_2556e();
int64_t function_255a8();
int64_t function_25856();
int64_t function_25e67();
int64_t function_25ff8();
int64_t function_2601b();
int64_t function_2603e();
int64_t function_27bbe();
int64_t function_30e70c();
int64_t function_327a0();
int64_t function_327e5();
int64_t function_327e7();
int64_t function_327ea();
int64_t function_32803();
int64_t function_328e7();
int64_t function_35a50();
int64_t function_35a5b();
int64_t function_36a32();
int64_t function_36b64();
int64_t function_3c2adbc0();
int64_t function_3c4f9f();
int64_t function_44912();
int64_t function_48a150();
int64_t function_48c190();
int64_t function_48c1d0();
int64_t function_48c1ed();
int64_t function_48c210();
int64_t function_48c22e();
int64_t function_48c239();
int64_t function_48c24e();
int64_t function_48c276();
int64_t function_48c2cc();
int64_t function_48c2d1();
int64_t function_497970();
int64_t function_497e60();
int64_t function_49e770();
int64_t function_4aa26();
int64_t function_4afe70();
int64_t function_4aff10();
int64_t function_4b51a();
int64_t function_4c42d0();
int64_t function_4c4300();
int64_t function_4c4360();
int64_t function_4c5100();
int64_t function_4c5330();
int64_t function_4c53c0();
int64_t function_4c592();
int64_t function_4c5930();
int64_t function_4c5bd0();
int64_t function_4ea160();
int64_t function_4efd30();
int64_t function_4f0ad0();
int64_t function_4f17c0();
int64_t function_4ff270();
int64_t function_5010e0();
int64_t function_519810();
int64_t function_52af50();
int64_t function_5415e();
int64_t function_5422a();
int64_t function_542470();
int64_t function_542650();
int64_t function_54365();
int64_t function_5437a();
int64_t function_547d00();
int64_t function_548780();
int64_t function_549920();
int64_t function_54d560();
int64_t function_552550();
int64_t function_554b00();
int64_t function_55d470();
int64_t function_55df10();
int64_t function_55ead0();
int64_t function_5858c();
int64_t function_61698();
int64_t function_61792();
int64_t function_61bbe();
int64_t function_63d4c();
int64_t function_71d16();
int64_t function_71d34();
int64_t function_71d49();
int64_t function_71da6();
int64_t function_71dae();
int64_t function_71e6a();
int64_t function_7214c();
int64_t function_7259e();
int64_t function_72994();
int64_t function_729b6();
int64_t function_729c2();
int64_t function_729ce();

// Address range: 0x2247e - 0x225f5
int64_t function_2247e(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + (int64_t)L"L\"" + 16); // 0x2249d
    *(int64_t *)(a1 + (int64_t)L"L\"" - 0x1880) = (int64_t)&g22;
    function_255a8(a1 + (int64_t)L"L\"", v1);
    function_72994(a1 + (int64_t)&g20);
    int64_t v2 = *(int64_t *)(a1 + (int64_t)&g16); // 0x224c0
    int64_t v3 = *(int64_t *)(a1 + (int64_t)&g17); // 0x224c7
    uint64_t v4 = *(int64_t *)(a1 + (int64_t)&g19); // 0x224ce
    int64_t v5 = *(int64_t *)(a1 + (int64_t)&g14); // 0x224d5
    int64_t v6 = v2 + 8;
    int64_t v7 = v6; // 0x22500
    if (v4 > v6) {
        int64_t v8 = *(int64_t *)v7; // 0x22502
        function_25ff8(v8, v8 + 504);
        v7 += 8;
        while (v4 > v7) {
            // 0x22502
            v8 = *(int64_t *)v7;
            function_25ff8(v8, v8 + 504);
            v7 += 8;
        }
    }
    if (v2 == v4) {
        // 0x22539
        function_25ff8(v5, v3);
    } else {
        // 0x2251d
        function_25ff8(v5, *(int64_t *)(a1 + (int64_t)&g15));
        function_25ff8(*(int64_t *)(a1 + (int64_t)&g18), v3);
    }
    // 0x22544
    function_2556e(a1 + (int64_t)&g13);
    function_72994(a1 + (int64_t)&g12);
    function_7259e(a1 + (int64_t)&g11);
    function_254fe(a1 + (int64_t)&g10);
    function_72994(a1 + (int64_t)&g9);
    function_72994(a1 + (int64_t)&g8);
    function_24f44(a1 + (int64_t)&g6);
    function_254fe(a1 + (int64_t)&g5);
    function_2508e(a1 + (int64_t)&g4);
    function_72994(a1 + (int64_t)&g3);
    function_2508e(a1 + (int64_t)&g2);
    function_72994(a1 + (int64_t)&g1);
    function_2603e(a1 + (int64_t)&g28);
    return function_63d4c(a1 + 24);
}

// Address range: 0x327a0 - 0x327ce
int64_t function_327a0(int64_t a1) {
    // 0x327a0
    __readfsqword(40);
    return function_1a46bb();
}

// Address range: 0x327e5 - 0x327e6
int64_t function_327e5(void) {
    // 0x327e5
    int64_t result; // 0x327e5
    return result;
}

// Address range: 0x327e7 - 0x327e8
int64_t function_327e7(void) {
    // 0x327e7
    int64_t result; // 0x327e7
    return result;
}

// Address range: 0x327ea - 0x327ef
int64_t function_327ea(void) {
    // 0x327ea
    return function_3c2adbc0();
}

// Address range: 0x32803 - 0x328e1
int64_t function_32803(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 / 256 ^ a3;
    uint64_t v2 = a4 - 1; // 0x3280c
    int64_t v3 = 0xffffff98 * a4 & 0xfffffff8; // 0x3280c
    if (v2 != 0 && (char)v1 != 0) {
        v3 = function_327e5();
    }
    // 0x3280e
    int64_t v4; // 0x32803
    char v5 = v4; // 0x32814
    unsigned char v6 = v5 + (char)(((int64_t)&g31 & -256 | 137) >> 8); // 0x32814
    int64_t result = (v3 | (int64_t)&g31 & -256 | 137) & -0xff77 | 256 * (int64_t)v6; // 0x32819
    if (v6 < 0 == ((v6 ^ (char)(((int64_t)&g31 & -256 | 137) >> 8)) & (v6 ^ v5)) < 0 == (v6 != 0)) {
        result = function_327e7();
    }
    unsigned char v7 = (char)(v4 / 256) + (char)v2 + (char)(v6 < (char)(((int64_t)&g31 & -256 | 137) >> 8)); // 0x3281b
    if (v7 < 0) {
        // 0x3281f
        return result;
    }
    int32_t * v8 = (int32_t *)(result + 0x74d43ac4); // 0x3286e
    *v8 = *v8 | -12;
    if (v2 == 0) {
        // 0x3281f
        return result;
    }
    int64_t v9 = 256 * v1 & 0xff00 | a3 & -0xff01; // 0x3280a
    int64_t v10 = (int64_t)*(int32_t *)(v4 - 34); // 0x32816
    unsigned char v11 = 2 * v7;
    int64_t v12 = 512 * (int64_t)v7 & 0xfe00 | v4 & -0xff01; // 0x32875
    __asm_out((int16_t)v9, (char)result);
    if (v11 != 0) {
        int32_t * v13 = (int32_t *)v9; // 0x32823
        *v13 = (int32_t)(v11 < v7) + (int32_t)v2 + *v13;
        *(char *)a1 = *(char *)v10;
        return v12 & 0xfffffeff;
    }
    uint32_t v14 = (int32_t)v4; // 0x3287c
    int32_t v15 = *(int32_t *)v9; // 0x3287c
    uint32_t v16 = v15 + v14; // 0x3287c
    int64_t v17 = v10; // 0x32883
    bool v18 = v16 < v14; // 0x32883
    if (v16 < 0 != ((v16 ^ v14) & (v16 ^ v15)) < 0) {
        if (((v16 ^ v14) & (v16 ^ v15)) >= 0) {
            // 0x328de
            return v12 & 0xfffffeff;
        }
        int64_t v19 = v16; // 0x3287c
        *(int64_t *)(v19 - 8) = v19;
        v17 = (uint64_t)v4 % 256 | v10;
        int32_t * v20 = (int32_t *)v17; // 0x32891
        int32_t v21 = *v20; // 0x32891
        uint32_t v22 = (int32_t)v9; // 0x32891
        *v20 = v21 + v22;
        v18 = -1 - v21 < v22;
    }
    int64_t v23 = __asm_int1(0xa1cf46e1); // 0x32894
    int32_t * v24 = (int32_t *)(v4 - 111); // 0x32895
    *v24 = (int32_t)v18 + (int32_t)v17 + *v24;
    return (v23 + v2 / 256) % 256 | v23 & -256;
}

// Address range: 0x328e7 - 0x328fd
int64_t function_328e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x328e7
    int64_t v1; // 0x328e7
    int64_t v2 = v1;
    char * v3 = (char *)(a4 + 0x60c80e52); // 0x328f1
    *v3 = *v3 + (char)(*(int16_t *)(v1 - 0x3e30558c) ^ (int16_t)a3);
    return (v2 + 206) % 256 | v2 & -256;
}

// Address range: 0x36b64 - 0x36cda
int64_t function_36b64(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result; // 0x36b64
    if (a4 == a3) {
        // 0x36ccd
        return result;
    }
    int64_t v1 = a4 - a3; // 0x36b7d
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x36b8a
    int64_t v3 = *v2; // 0x36b8a
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x36b8e
    if (*v4 - v3 < v1) {
        int64_t v5 = function_25856(); // 0x36c58
        int64_t v6 = a1; // 0x36c63
        int64_t v7 = 0; // 0x36c63
        if (v5 != 0) {
            // 0x36c65
            v7 = function_4efd30(v5);
            v6 = v5;
        }
        int64_t v8 = function_2601b(v6, a2, v7, a4); // 0x36c79
        int64_t v9 = 0; // 0x36c89
        if (v1 >= 1) {
            int64_t v10 = 0;
            *(char *)(v10 + v8) = *(char *)(v10 + a3);
            int64_t v11 = v10 + 1; // 0x36c93
            v9 = v1;
            while (v11 != v1) {
                // 0x36c8b
                v10 = v11;
                *(char *)(v10 + v8) = *(char *)(v10 + a3);
                v11 = v10 + 1;
                v9 = v1;
            }
        }
        int64_t v12 = function_2601b(a2, *v2, v8 + (v1 > 0 ? v1 : 0), v9); // 0x36cb2
        function_35a50(a2);
        *(int64_t *)a1 = v7;
        *v2 = v12;
        *v4 = v7 + v5;
        // 0x36ccd
        return result;
    }
    int64_t v13 = v3 - a2; // 0x36ba1
    if (v1 < v13) {
        int64_t v14 = v3 - v1; // 0x36bb2
        function_35a5b(v14, v3, v3);
        *v2 = *v2 + v1;
        function_25e67(a2, v14, v3);
        if (v1 < 1) {
            // 0x36ccd
            return result;
        }
        int64_t v15 = 0;
        *(char *)(v15 + a2) = *(char *)(v15 + a3);
        int64_t v16 = v15 + 1; // 0x36be9
        while (v16 != v1) {
            // 0x36be0
            v15 = v16;
            *(char *)(v15 + a2) = *(char *)(v15 + a3);
            v16 = v15 + 1;
        }
        // 0x36ccd
        return result;
    }
    int64_t v17 = v13 + a3; // 0x36bee
    uint64_t v18 = a4 - v17; // 0x36bf4
    int64_t v19 = v3; // 0x36c00
    if (v18 >= 1) {
        int64_t v20 = 0;
        *(char *)(v20 + v3) = *(char *)(v20 + v17);
        int64_t v21 = v20 + 1; // 0x36c0a
        while (v21 != v18) {
            // 0x36c02
            v20 = v21;
            *(char *)(v20 + v3) = *(char *)(v20 + v17);
            v21 = v20 + 1;
        }
        // 0x36bf7
        v19 = *v2;
    }
    int64_t v22 = v19 + v1 - v13; // 0x36c1c
    *v2 = v22;
    function_35a5b(a2, v3, v22);
    *v2 = *v2 + v13;
    if (v13 < 1) {
        // 0x36ccd
        return result;
    }
    int64_t v23 = 0;
    *(char *)(v23 + a2) = *(char *)(v23 + a3);
    int64_t v24 = v23 + 1; // 0x36c46
    while (v24 != v13) {
        // 0x36c3d
        v23 = v24;
        *(char *)(v23 + a2) = *(char *)(v23 + a3);
        v24 = v23 + 1;
    }
    // 0x36ccd
    return result;
}

// Address range: 0x4b51a - 0x4b690
int64_t function_4b51a(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 + 328; // 0x4b528
    int64_t v2 = a2; // bp-208, 0x4b536
    int64_t v3 = __readfsqword(40); // 0x4b540
    *(int64_t *)(a2 + 56) = a1;
    *(int64_t *)(a2 + 8) = *(int64_t *)(a1 + 216);
    int64_t v4; // bp-192, 0x4b51a
    function_729b6(&v4, a1 + 384);
    uint64_t v5 = a2 % *(int64_t *)(a1 + 336);
    int64_t v6 = function_4aa26(v1, v5, &v2); // 0x4b58b
    if (v6 == 0) {
        goto lab_0x4b59b;
    } else {
        // 0x4b595
        if (*(int64_t *)v6 != 0) {
            goto lab_0x4b5c1;
        } else {
            goto lab_0x4b59b;
        }
    }
  lab_0x4b59b:;
    int64_t v7 = function_4efd30(16); // 0x4b5a0
    *(int64_t *)v7 = 0;
    *(int64_t *)(v7 + 8) = a2;
    function_4c592(v1, v5, a2, v7);
    goto lab_0x4b5c1;
  lab_0x4b5c1:
    // 0x4b5c1
    function_729ce(&v4);
    int64_t v8; // bp-152, 0x4b51a
    int64_t v9; // bp-184, 0x4b51a
    function_2515a(&v8, &v9);
    function_7214c(a1 + 544, &v8);
    function_25018(&v8);
    function_221a8(&v9);
    int64_t result = 0; // 0x4b679
    if (v3 != __readfsqword(40)) {
        // 0x4b67b
        __stack_chk_fail();
        result = (int64_t)&g32;
    }
    // 0x4b680
    return result;
}

// Address range: 0x5422a - 0x542da
int64_t function_5422a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x5422a
    if (a6 == 0 | a5 == 0 | a4 == 0 | a3 == 0 | *(int64_t *)(a2 - 24) == 0) {
        // 0x542c6
        return 27;
    }
    // 0x54269
    *(int64_t *)(a9 + 8) = *(int64_t *)a9;
    if ((char)function_5858c(a2, a9, -1) == 0) {
        // 0x542c6
        return 27;
    }
    // 0x54294
    return function_5415e(a1, a3, a4, a5, a6, a7, a8, a9);
}

// Address range: 0x54365 - 0x54367
int64_t function_54365(void) {
    // 0x54365
    int64_t result; // 0x54365
    return result;
}

// Address range: 0x5437a - 0x5437d
int64_t function_5437a(void) {
    // 0x5437a
    int64_t result; // 0x5437a
    return result;
}

// Address range: 0x61792 - 0x6190c
int64_t function_61792(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x617a0
    int64_t v2 = 2; // 0x617b7
    int32_t v3; // 0x617bd
    int64_t v4; // 0x617bf
    if (a2 == 0) {
        goto lab_0x618e8;
    } else {
        // 0x617bd
        v3 = a3;
        v2 = 2;
        if (v3 == 0 || a4 == 0 || a5 == 0) {
            goto lab_0x618e8;
        } else {
            // 0x617e0
            v4 = a3 & 0xffffffff;
            v2 = 2;
            if (v4 + 22 > (a5 & 0xffffffff)) {
                goto lab_0x618e8;
            } else {
                if ((char)a1 == 0) {
                    // 0x618c8
                    v2 = function_61698(a1 + (int64_t)&g30, a2, v4, a4, a5);
                    goto lab_0x618e8;
                } else {
                    // 0x61804
                    if (*(int64_t *)(a1 + 8) == 2) {
                        // 0x6189e
                        if (*(char *)(a1 + 56) != 0) {
                            goto lab_0x6180f;
                        } else {
                            // 0x618a9
                            if (function_52af50() > function_61bbe(a1 + 48, 5)) {
                                goto lab_0x6180f;
                            } else {
                                // 0x618c8
                                v2 = function_61698(a1 + (int64_t)&g30, a2, v4, a4, a5);
                                goto lab_0x618e8;
                            }
                        }
                    } else {
                        goto lab_0x6180f;
                    }
                }
            }
        }
    }
  lab_0x618e8:;
    int64_t result = v2; // 0x618f6
    if (v1 != __readfsqword(40)) {
        // 0x618f8
        __stack_chk_fail();
        result = (int64_t)&g32;
    }
    // 0x618fd
    return result;
  lab_0x6180f:;
    int32_t * v5 = (int32_t *)(a1 + 36); // 0x61814
    int32_t v6 = *v5; // 0x61814
    *v5 = v6 + 1;
    int32_t v7 = v6; // bp-96, 0x61827
    int64_t v8; // bp-104, 0x61792
    function_729c2(&v8, a1 + (int64_t)&g29);
    int128_t v9; // bp-80, 0x61792
    int64_t v10 = function_44912(a1 + 64, (int64_t *)&v7, 16, (int64_t *)&v9, 16, a2, a4, v4); // 0x6185e
    function_729ce(&v8);
    if ((char)v10 == 0) {
        // 0x618c8
        v2 = function_61698(a1 + (int64_t)&g30, a2, v4, a4, a5);
        goto lab_0x618e8;
    } else {
        int64_t v11 = v4 + a4; // 0x6187e
        int128_t v12 = __asm_movups(0x8000000000000000 * v9 >> 64); // 0x61885
        *(int16_t *)(v11 + 4) = 257;
        *(int32_t *)v11 = v7;
        __asm_movups_133(*(int128_t *)(v11 + 6), v12);
        *(int32_t *)a5 = v3 + 22;
        v2 = 0;
        goto lab_0x618e8;
    }
}

// Address range: 0x71d34 - 0x71d49
int64_t function_71d34(int64_t a1) {
    // 0x71d34
    return function_30e70c();
}

// Address range: 0x71d49 - 0x71da5
int64_t function_71d49(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x71d49
    int64_t v1; // 0x71d49
    int64_t v2 = v1 & -256 | (int64_t)__asm_in(121); // 0x71d4c
    bool v3; // 0x71d49
    if (v3) {
        v2 = function_71d16();
    }
    // 0x71d4e
    *(int32_t *)a1 = (int32_t)a1 | -0x4e0b8758;
    int64_t v4 = v2 & 4 | 8; // 0x71d54
    char * v5 = (char *)(v4 | v2 & -256); // 0x71d99
    *v5 = 2 * (char)v4 + *v5;
    return a3 & 0xffffffff;
}

// Address range: 0x71da6 - 0x71dad
int64_t function_71da6(int64_t a1) {
    // 0x71da6
    return (int64_t)*(int32_t *)(a1 + 352);
}

// Address range: 0x71dae - 0x71e69
int64_t function_71dae(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x71dcb
    int64_t v2; // bp-56, 0x71dae
    function_729b6(&v2, a1 + 208);
    int64_t v3 = 0xffffffff; // 0x71de8
    if (*(int64_t *)(a1 + 200) != 0) {
        int64_t v4 = *(int64_t *)(a1 + 184); // 0x71dea
        int64_t v5 = a1 + 168; // 0x71df5
        int64_t v6 = 0; // 0x71dff
        if (v4 != v5) {
            int64_t v7 = *(int64_t *)(v4 + 120); // 0x71e03
            int64_t v8 = v7; // 0x71e07
            int64_t v9; // 0x71dae
            int64_t v10; // 0x71e09
            int64_t v11 = function_4f0ad0(v4); // 0x71e16
            int64_t v12 = v8; // 0x71dff
            int64_t v13 = v11; // 0x71dff
            v6 = v8;
            while (v11 != v5) {
                // 0x71e01
                v7 = *(int64_t *)(v13 + 120);
                v8 = v7;
                // 0x71e09
                v9 = v12;
                v10 = v7 - v9;
                v8 = v10 < 0 == ((v10 ^ v7) & (v7 ^ v9)) < 0 == (v10 != 0) ? v9 : v7;
                // 0x71e10
                v11 = function_4f0ad0(v13);
                v12 = v8;
                v13 = v11;
                v6 = v8;
            }
        }
        int64_t v14 = v6 - function_24e1e(); // 0x71e24
        int64_t v15 = (0x8000000000000000 * (int128_t)(v14 >> 63) | (int128_t)v14) / 0xf4240; // 0x71e36
        v3 = v15 >= 0 == (v15 != 0) ? v15 & 0xffffffff : 0;
    }
    // 0x71e3f
    function_729ce(&v2);
    int64_t result = v3; // 0x71e57
    if (v1 != __readfsqword(40)) {
        // 0x71e59
        __stack_chk_fail();
        result = (int64_t)&g32;
    }
    // 0x71e5e
    return result;
}

// Address range: 0x71e6a - 0x71e86
int64_t function_71e6a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = 0; // 0x71e74
    if (*(char *)(a1 + 408) != 0) {
        int32_t v1 = *(int32_t *)(a1 + 400); // 0x71e76
        int32_t v2 = *(int32_t *)(a1 + 404); // 0x71e7c
        result = (int64_t)(v2 == v1) | (int64_t)(v1 & -256);
    }
    // 0x71e85
    return result;
}

// Address range: 0x48c190 - 0x48c1b7
int64_t function_48c190(int64_t a1) {
    // 0x48c190
    __readfsqword(40);
    return function_3c4f9f();
}

// Address range: 0x48c1d0 - 0x48c1d6
int64_t function_48c1d0(int64_t a1) {
    // 0x48c1d0
    int64_t result; // 0x48c1d0
    return result;
}

// Address range: 0x48c1ed - 0x48c1f0
int64_t function_48c1ed(int64_t a1) {
    // 0x48c1ed
    int64_t result; // 0x48c1ed
    return result;
}

// Address range: 0x48c210 - 0x48c211
int64_t function_48c210(int64_t a1) {
    // 0x48c210
    int64_t result; // 0x48c210
    return result;
}

// Address range: 0x48c22e - 0x48c231
int64_t function_48c22e(void) {
    // 0x48c22e
    int64_t result; // 0x48c22e
    return result;
}

// Address range: 0x48c239 - 0x48c24e
int64_t function_48c239(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 18); // 0x48c249
    int64_t result; // 0x48c239
    *v1 = *v1 & (int32_t)result;
    return result;
}

// Address range: 0x48c24e - 0x48c276
int64_t function_48c24e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x48c24e
    int64_t v1; // 0x48c24e
    int64_t v2 = v1;
    *(int32_t *)-0x7a2ad35 = *(int32_t *)-0x7a2ad35 ^ (int32_t)v1;
    *(int64_t *)v2 = v2 + 8;
    int32_t result = __asm_in_134(111) & -256 | 45;
    __asm_out_135(-111, result);
    return result;
}

// Address range: 0x48c276 - 0x48c2cb
int64_t function_48c276(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x48c276
    int64_t v1; // 0x48c276
    __asm_out_135(-124, (int32_t)v1);
    int32_t * v2 = (int32_t *)(a2 + 0x3b0b46d7); // 0x48c27c
    uint32_t v3 = *v2; // 0x48c27c
    uint32_t v4 = (int32_t)v1; // 0x48c27c
    int32_t v5 = v3 + v4; // 0x48c27c
    *v2 = v5;
    if (v5 < 0) {
        // 0x48c289
        bool v6; // 0x48c276
        return function_48c2d1(a4, a2, v1, 0x4000 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | (int64_t)(v5 < v3) | 64 * (int64_t)(v5 == 0) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v3 % 16 + v4 % 16 > 15) | 2048 * (int64_t)(((v5 ^ v3) & (v5 ^ v4)) < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v5) % 2 == 0) | 2);
    }
    int32_t * v7 = (int32_t *)(result - 125); // 0x48c2c8
    *v7 = *v7 - 1;
    return result;
}

// Address range: 0x48c2cc - 0x48c2cf
int64_t function_48c2cc(void) {
    // 0x48c2cc
    int64_t result; // 0x48c2cc
    return result;
}

// Address range: 0x48c2d1 - 0x48c2ef
int64_t function_48c2d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_in_136((int16_t)a3); // 0x48c2d1
    char * v2 = (char *)(a2 + 72); // 0x48c2d2
    int64_t v3; // 0x48c2d1
    *v2 = *v2 | (char)((v3 | (int64_t)v1) / 256);
    return function_48a150(*(int64_t *)*(int64_t *)__tls_get_addr(&g23));
}

// Address range: 0x497e60 - 0x497fdd
int64_t function_497e60(int64_t a1, int64_t a2) {
    // 0x497e60
    *(int64_t *)a1 = a2;
    int64_t * mem = calloc(1, (int32_t)&g21); // 0x497e86
    int64_t v1 = (int64_t)mem; // 0x497e86
    int64_t * v2 = (int64_t *)(a1 + 160); // 0x497e91
    *v2 = v1;
    if (mem == NULL) {
        // 0x497f90
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g7, "alloc(%d bytes) failed", (int64_t *)&g21);
        free((int64_t *)*v2);
        *v2 = 0;
        return 0xffff8100;
    }
    int64_t * mem2 = calloc(1, (int32_t)&g21); // 0x497ea8
    int64_t v3 = (int64_t)mem2; // 0x497ea8
    *(int64_t *)(a1 + 288) = v3;
    if (mem2 == NULL) {
        // 0x497f90
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g7, "alloc(%d bytes) failed", (int64_t *)&g21);
        free((int64_t *)*v2);
        *v2 = 0;
        return 0xffff8100;
    }
    // 0x497ebd
    if ((*(char *)(a2 + 372) & 2) != 0) {
        // 0x497f40
        *(int64_t *)(a1 + 304) = v3;
        *(int64_t *)(a1 + 176) = v1;
        *(int64_t *)(a1 + 296) = v3 + 3;
        int64_t v4 = v3 + 13; // 0x497f5d
        *(int64_t *)(a1 + 320) = v4;
        *(int64_t *)(a1 + 328) = v4;
        *(int64_t *)(a1 + 312) = v3 + 11;
        *(int64_t *)(a1 + 168) = v1 + 3;
    } else {
        // 0x497ec8
        *(int64_t *)(a1 + 296) = v3;
        *(int64_t *)(a1 + 168) = v1;
        *(int64_t *)(a1 + 304) = v3 + 8;
        int64_t v5 = v3 + 13; // 0x497ee5
        *(int64_t *)(a1 + 320) = v5;
        *(int64_t *)(a1 + 328) = v5;
        *(int64_t *)(a1 + 312) = v3 + 11;
        *(int64_t *)(a1 + 176) = v1 + 8;
    }
    int64_t v6 = v1 + 13; // 0x497f0d
    *(int64_t *)(a1 + 192) = v6;
    *(int64_t *)(a1 + 200) = v6;
    *(int64_t *)(a1 + 184) = v1 + 11;
    return function_497970(a1);
}

// Address range: 0x4c5bd0 - 0x4c5d43
int64_t function_4c5bd0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2; // bp-64, 0x4c5beb
    int32_t v2 = 0; // bp-76, 0x4c5bfd
    int64_t v3; // bp-72, 0x4c5bd0
    int64_t v4 = function_4afe70(&v1, a3 + a2, &v3, 48); // 0x4c5c05
    if ((int32_t)v4 != 0) {
        // 0x4c5c14
        return v4 + 0xffffc300 & 0xffffffff;
    }
    int64_t v5 = v3 + v1; // 0x4c5c35
    int32_t v6; // bp-80, 0x4c5bd0
    int64_t v7 = function_4aff10(&v1, v5, (int64_t *)&v6); // 0x4c5c47
    if ((int32_t)v7 != 0) {
        // 0x4c5c14
        return v7 + 0xffffc300 & 0xffffffff;
    }
    // 0x4c5c50
    if (v6 != 0) {
        // 0x4c5c14
        return 0xffffc280;
    }
    // 0x4c5c5f
    int64_t v8; // bp-56, 0x4c5bd0
    int64_t v9 = function_4c5330(&v1, v5, &v2, &v8, (int64_t)v6); // 0x4c5c71
    if ((int32_t)v9 != 0) {
        // 0x4c5c14
        return v9 + 0xffffc300 & 0xffffffff;
    }
    int64_t v10 = function_4afe70(&v1, v5, &v3, 4); // 0x4c5c8c
    if ((int32_t)v10 != 0) {
        // 0x4c5c14
        return v10 + 0xffffc300 & 0xffffffff;
    }
    // 0x4c5c99
    if (v3 == 0) {
        // 0x4c5c14
        return 0xffffc2a0;
    }
    int64_t v11 = function_4c4300(v2); // 0x4c5cae
    if (v11 == 0) {
        // 0x4c5c14
        return 0xffffc380;
    }
    int64_t v12 = function_4c4360(a1, v11); // 0x4c5cbe
    int64_t result = v12 & 0xffffffff; // 0x4c5cc5
    if ((int32_t)v12 != 0) {
        // 0x4c5c14
        return result;
    }
    // 0x4c5ccd
    if (v2 == 1) {
        // 0x4c5d2b
        return function_4c5100(*(int64_t *)(a1 + 8), v1, v3);
    }
    // 0x4c5cd6
    if ((v2 || 1) != 3) {
        // 0x4c5c14
        return 0xffffc380;
    }
    int64_t * v13 = (int64_t *)(a1 + 8); // 0x4c5cde
    int64_t v14 = function_4c53c0(&v8, *v13); // 0x4c5ce7
    int64_t v15 = v14; // 0x4c5cf1
    if ((int32_t)v14 == 0) {
        // 0x4c5cf3
        v15 = function_4c5930(*v13, v1, v3);
        if ((int32_t)v15 == 0) {
            // 0x4c5c14
            return result;
        }
    }
    // 0x4c5d11
    function_4c42d0(a1);
    // 0x4c5c14
    return v15 & 0xffffffff;
}

// Address range: 0x4ea160 - 0x4ea2d2
int64_t function_4ea160(int64_t a1, int64_t result, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(result + 8); // 0x4ea168
    unsigned char v2 = *v1; // 0x4ea168
    *(int16_t *)(result + 296 + (-a3 & 24)) = (int16_t)(256 * (int64_t)v2 | a4 % 256);
    int64_t v3 = 24 * (a3 % 256) + result; // 0x4ea18a
    char v4 = a5; // 0x4ea18e
    *(char *)(v3 + 280) = v4;
    *(char *)(v3 + 281) = (char)a6;
    unsigned char v5 = (char)a4; // 0x4ea19c
    if (v5 == 32) {
        // 0x4ea228
        if (v2 >= 12) {
            // 0x4ea21d
            return 0x80200002;
        }
        int64_t * v6 = (int64_t *)(a1 + 24); // 0x4ea232
        uint64_t v7 = *v6; // 0x4ea232
        if (v7 < 4) {
            // 0x4ea21d
            return 0x80200000;
        }
        // 0x4ea241
        *v1 = v2 + 4;
        int64_t * v8 = (int64_t *)(a1 + 16); // 0x4ea24b
        int64_t v9 = *v8; // 0x4ea24b
        int64_t v10 = (int64_t)*(int32_t *)v9; // 0x4ea24f
        *v6 = v7 - 4;
        *v8 = v9 + 4;
        if (v4 != 0) {
            // 0x4ea2b0
            *(int64_t *)(v3 + 288) = v10;
            // 0x4ea21d
            return 0x100000;
        }
        // 0x4ea263
        *(int64_t *)(v3 + 288) = v10 & 0xffffffff;
        // 0x4ea21d
        return 0x100000;
    }
    if (v5 >= 33) {
        // 0x4ea200
        if (v2 >= 8) {
            // 0x4ea21d
            return 0x80200002;
        }
        // 0x4ea20a
        if (*(int64_t *)(a1 + 24) < 8) {
            // 0x4ea21d
            return 0x80200000;
        }
        // 0x4ea2c8
        *v1 = v2 + 8;
        return result;
    }
    if (v5 != 8) {
        // 0x4ea270
        if (v2 >= 14) {
            // 0x4ea21d
            return 0x80200002;
        }
        int64_t * v11 = (int64_t *)(a1 + 24); // 0x4ea275
        uint64_t v12 = *v11; // 0x4ea275
        if (v12 < 2) {
            // 0x4ea21d
            return 0x80200000;
        }
        // 0x4ea284
        *v1 = v2 + 2;
        int64_t * v13 = (int64_t *)(a1 + 16); // 0x4ea28e
        int64_t v14 = *v13; // 0x4ea28e
        uint64_t v15 = (int64_t)*(int16_t *)v14; // 0x4ea292
        *v11 = v12 - 2;
        *v13 = v14 + 2;
        // 0x4ea2b0
        *(int64_t *)(v3 + 288) = v4 != 0 ? v15 : v15 % 0x10000;
        // 0x4ea21d
        return 0x100000;
    }
    // 0x4ea1b5
    if (v2 >= 15) {
        // 0x4ea21d
        return 0x80200002;
    }
    int64_t * v16 = (int64_t *)(a1 + 24); // 0x4ea1ba
    int64_t v17 = *v16; // 0x4ea1ba
    if (v17 == 0) {
        // 0x4ea21d
        return 0x80200000;
    }
    int64_t * v18 = (int64_t *)(a1 + 16); // 0x4ea1c8
    int64_t v19 = *v18; // 0x4ea1c8
    *v18 = v19 + 1;
    int64_t v20 = (int64_t)*(char *)v19; // 0x4ea1db
    *v1 = v2 + 1;
    *v16 = v17 - 1;
    if (v4 != 0) {
        // 0x4ea2b0
        *(int64_t *)(v3 + 288) = v20;
        // 0x4ea21d
        return 0x100000;
    }
    // 0x4ea1ef
    *(int64_t *)(v3 + 288) = v20 % 256;
    // 0x4ea21d
    return 0x100000;
}

// Address range: 0x4ff270 - 0x4ff3e5
int64_t function_4ff270(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 200); // 0x4ff284
    int64_t v2 = *v1; // 0x4ff284
    __readfsqword(40);
    if (v2 == 0) {
        // 0x4ff3e5
        return 0;
    }
    // 0x4ff2a3
    int64_t v3; // 0x4ff270
    int64_t v4; // 0x4ff270
    int64_t v5; // 0x4ff270
    int64_t v6; // 0x4ff270
    int64_t v7; // 0x4ff270
    int64_t v8; // 0x4ff270
    int64_t v9; // 0x4ff270
    int64_t v10; // 0x4ff2fe
    int64_t v11; // 0x4ff2d9
    if ((char)*(int64_t *)v2 != 0) {
        goto lab_0x4ff322;
    } else {
        uint64_t v12 = *(int64_t *)*v1; // 0x4ff2be
        int64_t v13 = 0x100000000 * v12 / 0x100000000 * a3; // 0x4ff2d5
        int64_t v14; // bp-72, 0x4ff270
        v11 = (int64_t)&v14;
        int64_t v15 = a3 + a2; // 0x4ff2dd
        int64_t v16; // bp-120, 0x4ff270
        int64_t v17 = (int64_t)&v16 - (v13 + 30 & -16); // 0x4ff2f1
        int64_t * v18 = (int64_t *)(v17 - 8); // 0x4ff2fc
        int64_t v19; // bp-80, 0x4ff270
        int64_t v20 = (int64_t)&v19; // 0x4ff2fc
        *v18 = v20;
        v10 = v17 + 15 & -16;
        int64_t v21 = v10 + v13; // 0x4ff302
        int64_t * v22 = (int64_t *)(v17 - 16); // 0x4ff30b
        *v22 = v21;
        uint32_t v23 = (int32_t)v12; // 0x4ff312
        if (v23 < 2) {
            int64_t v24 = a1 + 104; // 0x4ff364
            int64_t v25 = v19 - v10; // 0x4ff378
            int64_t v26 = function_4f17c0(v24, v10, v25, v15, v19, v10); // 0x4ff37e
            if (v12 % 2 == 0 || v25 != v26) {
                // 0x4ff331
                v5 = v26;
                __readfsqword(40);
                return v5 & -256 | (int64_t)(v5 == v25);
            }
            // 0x4ff394
            *v18 = v20;
            *v22 = v19;
            int64_t v27 = *v18; // 0x4ff3bc
            v7 = v27;
            v8 = v19;
            v9 = a1 + 132;
            if ((int32_t)*(int64_t *)*v1 != 2) {
                int64_t v28 = v19 - v10; // 0x4ff3c9
                // 0x4ff331
                v5 = function_4f17c0(v24, v10, v28, v27, v11, v10);
                __readfsqword(40);
                return v5 & -256 | (int64_t)(v5 == v28);
            }
            return function_549920("basic_filebuf::_M_convert_to_external conversion error", v9, v8, v7, v11, v10);
        } else {
            // 0x4ff319
            v6 = v15;
            v3 = v11;
            v4 = v10;
            v7 = v15;
            v8 = a2;
            v9 = v21;
            if (v23 != 3) {
                return function_549920("basic_filebuf::_M_convert_to_external conversion error", v9, v8, v7, v11, v10);
            } else {
                goto lab_0x4ff322;
            }
        }
    }
  lab_0x4ff322:
    // 0x4ff331
    v5 = function_4f17c0(a1 + 104, a2, a3, v6, v3, v4);
    __readfsqword(40);
    return v5 & -256 | (int64_t)(v5 == a3);
    // 0x4ff3e5
    return function_549920("basic_filebuf::_M_convert_to_external conversion error", v9, v8, v7, v11, v10);
}

// Address range: 0x5010e0 - 0x501255
int64_t function_5010e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 200); // 0x5010f4
    int64_t v2 = *v1; // 0x5010f4
    __readfsqword(40);
    if (v2 == 0) {
        // 0x501255
        return 0;
    }
    // 0x501113
    int64_t v3; // 0x5010e0
    int64_t v4; // 0x5010e0
    int64_t v5; // 0x5010e0
    int64_t v6; // 0x5010e0
    int64_t v7; // 0x5010e0
    int64_t v8; // 0x5010e0
    int64_t v9; // 0x5010e0
    int64_t v10; // 0x50116e
    int64_t v11; // 0x501149
    if ((char)*(int64_t *)v2 != 0) {
        goto lab_0x501192;
    } else {
        uint64_t v12 = *(int64_t *)*v1; // 0x50112e
        int64_t v13 = 0x100000000 * v12 / 0x100000000 * a3; // 0x501145
        int64_t v14; // bp-72, 0x5010e0
        v11 = (int64_t)&v14;
        int64_t v15 = 4 * a3 + a2; // 0x50114d
        int64_t v16; // bp-120, 0x5010e0
        int64_t v17 = (int64_t)&v16 - (v13 + 30 & -16); // 0x501161
        int64_t * v18 = (int64_t *)(v17 - 8); // 0x50116c
        int64_t v19; // bp-80, 0x5010e0
        int64_t v20 = (int64_t)&v19; // 0x50116c
        *v18 = v20;
        v10 = v17 + 15 & -16;
        int64_t v21 = v10 + v13; // 0x501172
        int64_t * v22 = (int64_t *)(v17 - 16); // 0x50117b
        *v22 = v21;
        uint32_t v23 = (int32_t)v12; // 0x501182
        if (v23 < 2) {
            int64_t v24 = a1 + 104; // 0x5011d4
            int64_t v25 = v19 - v10; // 0x5011e8
            int64_t v26 = function_4f17c0(v24, v10, v25, v15, v19, v10); // 0x5011ee
            if (v12 % 2 == 0 || v25 != v26) {
                // 0x5011a1
                v5 = v26;
                __readfsqword(40);
                return v5 & -256 | (int64_t)(v5 == v25);
            }
            // 0x501204
            *v18 = v20;
            *v22 = v19;
            int64_t v27 = *v18; // 0x50122c
            v7 = v27;
            v8 = v19;
            v9 = a1 + 132;
            if ((int32_t)*(int64_t *)*v1 != 2) {
                int64_t v28 = v19 - v10; // 0x501239
                // 0x5011a1
                v5 = function_4f17c0(v24, v10, v28, v27, v11, v10);
                __readfsqword(40);
                return v5 & -256 | (int64_t)(v5 == v28);
            }
            return function_549920("basic_filebuf::_M_convert_to_external conversion error", v9, v8, v7, v11, v10);
        } else {
            // 0x501189
            v6 = v15;
            v3 = v11;
            v4 = v10;
            v7 = v15;
            v8 = a2;
            v9 = v21;
            if (v23 != 3) {
                return function_549920("basic_filebuf::_M_convert_to_external conversion error", v9, v8, v7, v11, v10);
            } else {
                goto lab_0x501192;
            }
        }
    }
  lab_0x501192:
    // 0x5011a1
    v5 = function_4f17c0(a1 + 104, a2, a3, v6, v3, v4);
    __readfsqword(40);
    return v5 & -256 | (int64_t)(v5 == a3);
    // 0x501255
    return function_549920("basic_filebuf::_M_convert_to_external conversion error", v9, v8, v7, v11, v10);
}

// Address range: 0x548780 - 0x5488ef
int64_t function_548780(int64_t a1, int64_t a2, uint64_t result, int64_t a4) {
    // 0x548780
    if (a2 == a1) {
        // 0x5487c0
        return (int64_t)&g27;
    }
    if (a1 != 0) {
        int64_t v1 = a2 - a1; // 0x548798
        int64_t v2 = function_547d00(v1, 0); // 0x5487a0
        int64_t v3 = v2 + 24; // 0x5487ac
        int64_t dest_mem; // 0x548780
        if (v1 == 1) {
            // 0x5487d0
            *(char *)v3 = (char)a1;
            dest_mem = v3;
        } else {
            // 0x5487b2
            dest_mem = v3;
            if (v1 != 0) {
                // 0x5487f0
                dest_mem = (int64_t)memcpy((int64_t *)v3, (int64_t *)a1, (int32_t)v1);
            }
        }
        // 0x5487b7
        if (v2 != (int64_t)g24) {
            // 0x548808
            *(int32_t *)(v2 + 16) = 0;
            *(int64_t *)v2 = v1;
            *(char *)(v3 + v1) = 0;
        }
        // 0x5487c0
        return dest_mem;
    }
    // 0x54881d
    function_542470("basic_string::_S_construct null not valid");
    uint64_t v4 = *(int64_t *)(a2 - 24); // 0x548837
    if (v4 >= result) {
        int64_t v5 = function_548780(result + a2, v4 + a2, a4, a4); // 0x548850
        *(int64_t *)"basic_string::_S_construct null not valid" = v5;
        return 0;
    }
    // 0x54885c
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string");
    int64_t v6 = __readfsqword(40); // 0x54888e
    if (result >= 0x6574) {
        // 0x5487c0
        return result;
    }
    uint64_t v7 = 0x6573 - result; // 0x5488a5
    int64_t v8 = v7 > v4 ? v4 : v7; // 0x5488ab
    int64_t v9 = result + 0x74735f6369736162;
    int64_t v10; // bp-49, 0x548780
    int64_t v11 = function_548780(v9, v8 + v9, (int64_t)&v10, v4); // 0x5488c8
    *(int64_t *)"%s: __pos (which is %zu) > this->size() (which is %zu)" = v11;
    return __readfsqword(40) ^ v6;
}

// Address range: 0x54d560 - 0x54d6dc
int64_t function_54d560(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x54d56e
    int64_t str; // bp-296, 0x54d560
    int64_t v2 = (int64_t)&str; // 0x54d581
    for (int64_t i = 0; i < 256; i++) {
        // 0x54d588
        *(char *)(i + v2) = (char)i;
    }
    int64_t str2 = a1 + 57; // 0x54d59b
    int64_t v3 = a1 + 56; // 0x54d59f
    if (*(int64_t *)v3 == g25) {
        // 0x54d5b0
        __asm_movups_133(*(int128_t *)str2, __asm_movdqa((int128_t)str));
        int128_t v4; // 0x54d560
        __asm_movups_133(*(int128_t *)(a1 + 73), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 89), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 105), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 121), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 137), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 153), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 169), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 185), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 201), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 217), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 233), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 249), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 265), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 281), __asm_movdqa(v4));
        __asm_movups_133(*(int128_t *)(a1 + 297), __asm_movdqa(v4));
    }
    char * v5 = (char *)v3; // 0x54d688
    *v5 = 1;
    if (memcmp(&str, (int64_t *)str2, 256) != 0) {
        // 0x54d6a0
        *v5 = 2;
    }
    int64_t result = __readfsqword(40) ^ v1; // 0x54d6ac
    if (result == 0) {
        // 0x54d6b7
        return result;
    }
    // 0x54d6d7
    __stack_chk_fail();
    return (int64_t)&g32;
}

// Address range: 0x55ead0 - 0x55ec4d
// From class:    std::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_55ead0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x55ead0
    __readfsqword(40);
    int64_t v1 = function_554b00(); // 0x55eb1c
    int64_t v2 = (int64_t)&g27; // bp-72, 0x55eb3e
    int64_t result; // 0x55ead0
    if ((char)a6 == 0) {
        // 0x55ebd0
        result = function_55df10(a1, a2, a3, a4, a5, a7, a8, &v2);
    } else {
        // 0x55eb4c
        result = function_55d470(a1, a2, a3, a4, a5, a7, a8, &v2);
    }
    // 0x55eb64
    int64_t v3; // bp-73, 0x55ead0
    if (g26 == 0) {
        int64_t v4 = v2 - 24; // 0x55eb91
        if (v4 != (int64_t)g24) {
            // 0x55ec44
            return function_552550(v4, &v3);
        }
        // 0x55eba2
        __readfsqword(40);
        return result;
    }
    // 0x55ebf0
    function_36a32(a9, g26, 0, a8);
    int64_t * v5 = (int64_t *)a9; // 0x55ec01
    int64_t v6 = *v5; // 0x55ec01
    int64_t v7 = v6; // 0x55ec09
    if (*(int32_t *)(v6 - 8) >= 0) {
        // 0x55ec0b
        function_27bbe(a9);
        v7 = *v5;
    }
    int64_t v8 = v2; // 0x55ec18
    function_519810(v1, v8, v8 + g26, v7);
    int64_t v9 = v2 - 24; // 0x55ec33
    if (v9 != (int64_t)g24) {
        // 0x55ec44
        return function_552550(v9, &v3);
    }
    // 0x55eba2
    __readfsqword(40);
    return result;
}
