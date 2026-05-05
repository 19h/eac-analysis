/*
 * Targeted RetDec C for native executable gap queue batch 12.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4096a-0x40abf rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bd90-0x4bee5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x578220-0x578375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x498440-0x498594 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a9620-0x4a9774 rank=- name=- kind=- bytes=- uncovered=-
 *   0x508490-0x5085e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x281fa-0x2834a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d70e-0x4d85d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b66c0-0x4b680e rank=- name=- kind=- bytes=- uncovered=-
 *   0x20f9a-0x210e7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x578380-0x5784cd rank=- name=- kind=- bytes=- uncovered=-
 *   0x47660-0x477ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x53b22-0x53c6e rank=- name=- kind=- bytes=- uncovered=-
 *   0x54eda-0x55026 rank=- name=- kind=- bytes=- uncovered=-
 *   0x609f0-0x60b3b rank=- name=- kind=- bytes=- uncovered=-
 *   0x49044-0x4918e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g24;
extern int g25;
extern int g26;
extern int g27;
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

int64_t function_20d90();
int64_t function_20f9a();
int64_t function_221a8();
int64_t function_25018();
int64_t function_250b0();
int64_t function_2515a();
int64_t function_254fe();
int64_t function_25856();
int64_t function_2601b();
int64_t function_260ec();
int64_t function_260f8();
int64_t function_26206();
int64_t function_2798b();
int64_t function_27df1();
int64_t function_281fa();
int64_t function_29d94();
int64_t function_35ef6();
int64_t function_35fcc();
int64_t function_36126();
int64_t function_3ff6e();
int64_t function_4096a();
int64_t function_470d2();
int64_t function_47660();
int64_t function_49044();
int64_t function_4945c0();
int64_t function_494b1e75();
int64_t function_4978a0();
int64_t function_497930();
int64_t function_498440();
int64_t function_49e770();
int64_t function_4a8bb0();
int64_t function_4a8c40();
int64_t function_4a8d50();
int64_t function_4a95d0();
int64_t function_4a9620();
int64_t function_4ab2c0();
int64_t function_4ab2f0();
int64_t function_4ab380();
int64_t function_4ab520();
int64_t function_4b6570();
int64_t function_4b66c0();
int64_t function_4b66d0();
int64_t function_4b678a();
int64_t function_4b67cf();
int64_t function_4baf6();
int64_t function_4bd90();
int64_t function_4c842();
int64_t function_4d70e();
int64_t function_4d906();
int64_t function_4dfc2();
int64_t function_4e156();
int64_t function_4e66a();
int64_t function_4efd30();
int64_t function_4fa50();
int64_t function_4fbc4();
int64_t function_508450();
int64_t function_508490();
int64_t function_53b22();
int64_t function_542470();
int64_t function_542590();
int64_t function_547e30();
int64_t function_54eda();
int64_t function_5509d0();
int64_t function_551750();
int64_t function_551820();
int64_t function_5690f0();
int64_t function_578220();
int64_t function_578380();
int64_t function_607e2();
int64_t function_609f0();
int64_t function_6876e();
int64_t function_71c60();
int64_t function_7216c();
int64_t function_72b18();
int64_t function_7826e();

// Address range: 0x20f9a - 0x210e7
int64_t function_20f9a(void) {
    int64_t v1 = __readfsqword(40); // 0x20fb3
    int64_t v2; // bp-33, 0x20f9a
    function_35ef6((int64_t)&g22, (int64_t)L"EasyAntiCheat\\Localization\\", &v2);
    __cxa_atexit((void (*)(int64_t *))0x29c3a, &g22, (int64_t *)0x849800);
    function_35ef6((int64_t)&g21, (int64_t)L".cfg", &v2);
    __cxa_atexit((void (*)(int64_t *))0x29c3a, &g21, &g16);
    function_35ef6((int64_t)&g20, (int64_t)L"*.cfg", &v2);
    __cxa_atexit((void (*)(int64_t *))0x29c3a, &g20, &g16);
    function_250b0(&g19, "en", &v2);
    __cxa_atexit((void (*)(int64_t *))0x2508e, &g19, &g16);
    function_250b0(&g18, "us", &v2);
    __cxa_atexit((void (*)(int64_t *))0x2508e, &g18, &g16);
    function_250b0(&g17, "en_us", &v2);
    __cxa_atexit((void (*)(int64_t *))0x2508e, &g17, &g16);
    int64_t result = 0; // 0x210d9
    if (v1 != __readfsqword(40)) {
        // 0x210db
        __stack_chk_fail();
        result = (int64_t)&g27;
    }
    // 0x210e0
    return result;
}

// Address range: 0x281fa - 0x2833d
int64_t function_281fa(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x281fa
    if (a3 == 0) {
        // 0x2833c
        int64_t result; // 0x281fa
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x2821d
    int64_t v2 = *v1; // 0x2821d
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x28221
    if (*v3 - v2 < a3) {
        int64_t v4 = function_25856(); // 0x282bf
        int64_t v5 = function_260f8(v4); // 0x282d6
        int64_t v6 = v5 + a2 - a1; // 0x282e6
        function_2798b(v6, v6 + a3, a4 % 256 | (int64_t)"vector::_M_fill_insert" & -256);
        int64_t v7 = function_2601b(a2, *v1, function_2601b(v6, a2, v5) + a3); // 0x2830d
        int64_t result2 = function_260ec(a2); // 0x28319
        *(int64_t *)a1 = v5;
        *v1 = v7;
        *v3 = v5 + v4;
        return result2;
    }
    uint64_t v8 = a4 % 256; // 0x28234
    uint64_t v9 = v2 - a2; // 0x28237
    int64_t v10; // 0x281fa
    int64_t v11; // 0x281fa
    if (v9 <= a3) {
        int64_t v12 = a3 - v9 + v2; // 0x28278
        function_2798b(v2, v12, v8 | a3 & -256);
        *v1 = v12;
        function_26206(a2, v2, v12);
        *v1 = *v1 + v9;
        v10 = v12;
        v11 = v2;
    } else {
        int64_t v13 = v2 - a3; // 0x28245
        function_26206(v13, v2, v2);
        *v1 = *v1 + a3;
        function_27df1(a2, v13, v2);
        v10 = v2;
        v11 = a3 + a2;
    }
    // 0x2829f
    return function_2798b(a2, v11, v10 & -256 | v8);
}

// Address range: 0x4096a - 0x40abf
int64_t function_4096a(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x40976
    int64_t v2 = 0xfffffffe; // 0x40989
    if (a1 != 0) {
        int64_t * v3 = (int64_t *)(a1 + 56); // 0x40995
        int64_t v4 = *v3; // 0x40995
        v2 = 0xfffffffe;
        if (v4 == 0) {
            goto lab_0x40a9d;
        } else {
            uint32_t v5 = (int32_t)a2; // 0x409a1
            v2 = 0xfffffffe;
            if (v5 < 5) {
                int64_t * v6 = (int64_t *)(a1 + 24); // 0x409a8
                v2 = 0xfffffffe;
                if (*v6 == 0) {
                    goto lab_0x40a9d;
                } else {
                    int32_t * v7 = (int32_t *)(a1 + 32); // 0x409af
                    int32_t v8 = *v7; // 0x409af
                    if (v8 == 0) {
                        // 0x40a94
                        v2 = 0xfffffffb;
                        goto lab_0x40a9d;
                    } else {
                        int64_t v9 = v5 != 1 ? a2 & 0xffffffff : 2;
                        if (*(int32_t *)(v4 + 132) != 1) {
                            int64_t * v10 = (int64_t *)(a1 + 16); // 0x409df
                            int64_t * v11 = (int64_t *)(a1 + 40); // 0x409e3
                            int32_t * v12 = (int32_t *)(a1 + 8); // 0x409ec
                            uint32_t v13 = *v12; // 0x409ec
                            int64_t v14 = function_3ff6e(); // 0x40a12
                            int64_t v15 = v13; // 0x40a23
                            *(int64_t *)a1 = v4 + v15;
                            int64_t v16 = *v10 + v15; // 0x40a28
                            int32_t v17 = *v12 - v13; // 0x40a2c
                            *v12 = v17;
                            *v10 = v16;
                            *(int64_t *)(a1 + 96) = (int64_t)*(int32_t *)(*v3 + 32);
                            int64_t v18 = v8; // 0x40a45
                            *v6 = *v6 + v18;
                            int64_t v19 = *v11 + v18; // 0x40a4b
                            int32_t v20 = *v7 - v8; // 0x40a4f
                            int32_t v21 = v14; // 0x40a52
                            *v7 = v20;
                            *v11 = v19;
                            v2 = 0xfffffffe;
                            while (v21 >= 0) {
                                // 0x40a62
                                v2 = 1;
                                if (v21 == 1) {
                                    // break -> 0x40a9d
                                    break;
                                }
                                // 0x40a6a
                                v2 = 0;
                                if (v20 == 0) {
                                    // break -> 0x40a9d
                                    break;
                                }
                                if (v9 != 4 && v17 == 0) {
                                    // 0x40a80
                                    v2 = 0;
                                    if (v9 == 0 == v16 == *v10 == v19 == *v11) {
                                        // 0x40a94
                                        v2 = 0xfffffffb;
                                        goto lab_0x40a9d;
                                    } else {
                                        goto lab_0x40a9d;
                                    }
                                }
                                int32_t v22 = *v7; // 0x4096a
                                v13 = *v12;
                                v14 = function_3ff6e();
                                v15 = v13;
                                *(int64_t *)a1 = *v3 + v15;
                                v16 = *v10 + v15;
                                v17 = *v12 - v13;
                                *v12 = v17;
                                *v10 = v16;
                                *(int64_t *)(a1 + 96) = (int64_t)*(int32_t *)(*v3 + 32);
                                v18 = v22;
                                *v6 = *v6 + v18;
                                v19 = *v11 + v18;
                                v20 = *v7 - v22;
                                v21 = v14;
                                *v7 = v20;
                                *v11 = v19;
                                v2 = 0xfffffffe;
                            }
                            goto lab_0x40a9d;
                        } else {
                            // 0x409cc
                            v2 = 1;
                            if (v9 != 4) {
                                // 0x40a94
                                v2 = 0xfffffffb;
                                goto lab_0x40a9d;
                            } else {
                                goto lab_0x40a9d;
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40a9d;
            }
        }
    } else {
        goto lab_0x40a9d;
    }
  lab_0x40a9d:;
    int64_t result = v2; // 0x40aab
    if (v1 != __readfsqword(40)) {
        // 0x40aad
        __stack_chk_fail();
        result = (int64_t)&g27;
    }
    // 0x40ab2
    return result;
}

// Address range: 0x47660 - 0x477ac
int64_t function_47660(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + (int64_t)&g11; // 0x47669
    int64_t v2 = __readfsqword(40); // 0x4767c
    int64_t v3 = function_4fbc4(v1, a2); // 0x4768c
    if (v3 != 0) {
        int64_t v4 = 0; // 0x476a2
        if (a3 != 0) {
            // 0x476a4
            v4 = function_4fbc4(v1, a3);
        }
        int16_t v5 = (int16_t)*(int32_t *)(v3 + 24); // bp-84, 0x476b5
        int64_t v6 = 0x240000000a; // bp-120, 0x4770a
        int64_t v7 = function_470d2(36); // 0x4772e
        int64_t v8 = v7; // bp-112, 0x47737
        __asm_rep_movsd_memcpy((char *)v7, (char *)&v5, 9);
        function_4e66a(a1 + (int64_t)&g12, &v6, &v8, 0);
        function_254fe(&v8);
        if (v4 != 0) {
            // 0x47774
            function_4fa50(v1, v4);
        }
        // 0x4777f
        function_4fa50(v1, v3);
    }
    int64_t result = 0; // 0x47798
    if (v2 != __readfsqword(40)) {
        // 0x4779a
        __stack_chk_fail();
        result = (int64_t)&g27;
    }
    // 0x4779f
    return result;
}

// Address range: 0x49044 - 0x4918e
int64_t function_49044(int64_t a1) {
    int64_t v1 = a1 + (int64_t)&g11; // 0x4904b
    int64_t v2 = __readfsqword(40); // 0x4905d
    int64_t v3; // 0x49044
    int64_t v4 = function_4fbc4(v1, v3); // 0x4906d
    if (v4 != 0) {
        int64_t v5 = function_4efd30(4); // 0x490a1
        *(int32_t *)v5 = 0;
        int64_t v6 = v5; // bp-72, 0x490b0
        int16_t * v7 = (int16_t *)(v5 + 2);
        *v7 = 0;
        *(int16_t *)v5 = (int16_t)*(int32_t *)(v4 + 24);
        int64_t * v8 = (int64_t *)(v4 + 120); // 0x490d6
        int64_t v9 = *v8; // 0x490d6
        int64_t * v10 = (int64_t *)(v4 + 128); // 0x490da
        int64_t v11 = *v10; // 0x490da
        int16_t v12 = *v7; // 0x490e1
        int64_t v13 = 0; // 0x490f3
        int16_t v14 = v12; // 0x490f3
        int64_t v15 = 0; // 0x490f3
        if (-0x5555555555555555 * (v11 - v9 >> 3) != 0) {
            int64_t v16 = 24 * v13 + v9; // 0x490f9
            int64_t v17 = v11; // 0x49100
            int64_t v18 = v9; // 0x49100
            int64_t v19 = v5; // 0x49100
            if (*(int32_t *)(v16 + 4) != 0) {
                // 0x49102
                *v7 = v12 + 1;
                function_36126(&v6, v5 + 4, v16, v16 + 24);
                v19 = v6;
                v17 = *v10;
                v18 = *v8;
            }
            int64_t v20 = v13 + 1; // 0x49120
            int16_t * v21 = (int16_t *)(v19 + 2); // 0x490e1
            int16_t v22 = *v21; // 0x490e1
            int64_t v23 = -0x5555555555555555 * (v17 - v18 >> 3); // 0x490ec
            int64_t v24 = v17; // 0x490f3
            int64_t v25 = v18; // 0x490f3
            v13 = v20;
            int64_t v26 = v19; // 0x490f3
            v14 = v22;
            v15 = v23;
            while (v20 < v23) {
                // 0x490f5
                v16 = 24 * v13 + v25;
                v17 = v24;
                v18 = v25;
                v19 = v26;
                if (*(int32_t *)(v16 + 4) != 0) {
                    // 0x49102
                    *v21 = v22 + 1;
                    function_36126(&v6, v5 + 4, v16, v16 + 24);
                    v19 = v6;
                    v17 = *v10;
                    v18 = *v8;
                }
                // 0x49120
                v20 = v13 + 1;
                v21 = (int16_t *)(v19 + 2);
                v22 = *v21;
                v23 = -0x5555555555555555 * (v17 - v18 >> 3);
                v24 = v17;
                v25 = v18;
                v13 = v20;
                v26 = v19;
                v14 = v22;
                v15 = v23;
            }
        }
        // 0x49125
        if (v14 != 0) {
            int64_t v27 = 13; // bp-80, 0x49148
            function_4e66a(a1 + (int64_t)&g12, &v27, &v6, v15);
        }
        // 0x49159
        function_4fa50(v1, v4);
        function_254fe(&v6);
    }
    int64_t result = 0; // 0x4917a
    if (v2 != __readfsqword(40)) {
        // 0x4917c
        __stack_chk_fail();
        result = (int64_t)&g27;
    }
    // 0x49181
    return result;
}

// Address range: 0x4bd90 - 0x4bee5
int64_t function_4bd90(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4bd9d
    char * v2 = (char *)(a1 + 240); // 0x4bdb0
    if (*v2 == 0) {
        // 0x4bdbd
        function_4baf6();
        function_29d94(a1 + 232, a2);
        if ((char)function_4dfc2(a1 + 104, 0x4b933, 0x4abc3, a1) != 0) {
            int64_t v3 = a1 + (int64_t)&g6; // 0x4bdfd
            if ((char)function_72b18(v3, 0) != 0) {
                // 0x4be16
                int64_t v4; // bp-152, 0x4bd90
                int64_t v5; // bp-184, 0x4bd90
                function_2515a(&v4, &v5);
                function_7216c(v3, &v4, &g5, &g5);
                function_25018(&v4);
                function_221a8(&v5);
                *v2 = 1;
            }
        }
    }
    int64_t result = 0; // 0x4bed0
    if (v1 != __readfsqword(40)) {
        // 0x4bed2
        __stack_chk_fail();
        result = (int64_t)&g27;
    }
    // 0x4bed7
    return result;
}

// Address range: 0x4d70e - 0x4d85d
int64_t function_4d70e(int64_t a1) {
    int64_t v1 = a1 + (int64_t)&g9; // 0x4d71a
    int64_t v2 = __readfsqword(40); // 0x4d725
    int64_t v3; // 0x4d70e
    function_4bd90(a1, v3);
    int64_t v4 = 0; // bp-56, 0x4d748
    int64_t v5 = function_4efd30(416); // 0x4d751
    function_71c60(v5);
    int64_t v6 = function_4efd30(32); // 0x4d76e
    *(int64_t *)(v6 + 24) = v5;
    int64_t v7 = v5; // bp-64, 0x4d788
    *(int64_t *)(v6 + 8) = 0x100000001;
    *(int64_t *)v6 = (int64_t)&g13;
    int64_t v8 = v4; // 0x4d799
    v4 = v6;
    int64_t v9 = v8; // bp-72, 0x4d7a6
    function_35fcc(&v9);
    function_4d906(v1, &v7);
    int64_t * v10 = (int64_t *)v1; // 0x4d7ba
    int64_t v11 = *v10; // 0x4d7ba
    if (v11 == 0) {
        // 0x4d83d
        function_35fcc(&v4);
    } else {
        int64_t v12 = function_72b18(v11, 0); // 0x4d7c8
        function_35fcc(&v4);
        if ((char)v12 == 1) {
            // 0x4d7e1
            function_4c842(a1);
            function_6876e(a1 + (int64_t)&g7, v1);
            v7 = *v10;
            int64_t v13 = *(int64_t *)(a1 + (int64_t)&g10); // 0x4d808
            v4 = v13;
            if (v13 != 0) {
                int32_t * v14 = (int32_t *)(v13 + 8);
                *v14 = *v14 + 1;
            }
            // 0x4d82c
            function_4e156(a1 + 104, &v7);
            function_35fcc(&v4);
        }
    }
    int64_t result = 0; // 0x4d84b
    if (v2 != __readfsqword(40)) {
        // 0x4d84d
        __stack_chk_fail();
        result = (int64_t)&g27;
    }
    // 0x4d852
    return result;
}

// Address range: 0x53b22 - 0x53c6e
int64_t function_53b22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __readfsqword(40); // 0x53b42
    char v2 = 0; // 0x53b65
    if (a5 != 0) {
        // 0x53b67
        v2 = *(int64_t *)(a5 + 8) != a5;
    }
    // 0x53b72
    *(int32_t *)a6 = 0;
    function_4ab2f0(a7);
    int64_t v3 = function_4ab520(a7, a2, *(int64_t *)(a2 + 8) - a2); // 0x53b90
    int64_t v4 = v3; // 0x53b97
    int32_t v5; // 0x53b22
    int32_t v6; // 0x53b22
    int64_t v7; // 0x53b22
    int64_t v8; // 0x53b22
    int64_t v9; // bp-1032, 0x53b22
    int64_t v10; // bp-616, 0x53b22
    if ((int32_t)v3 != 0) {
        goto lab_0x53c34;
    } else {
        int64_t v11 = (int64_t)&v10; // 0x53ba5
        function_4ab2f0(v11);
        int64_t v12 = function_4ab520(v11, a4, *(int64_t *)(a4 + 8) - a4); // 0x53bbc
        int32_t v13 = v12;
        v5 = v13;
        v8 = v12;
        if (v13 != 0) {
            goto lab_0x53c20;
        } else {
            // 0x53bc5
            function_4a8bb0(&v9);
            if (v2 != 0) {
                int64_t v14 = function_4a8d50(&v9, a5, *(int64_t *)(a5 + 8) - a5); // 0x53c07
                int32_t v15 = v14;
                v6 = v15;
                v7 = v14;
                if (v15 == 0) {
                    goto lab_0x53bd7;
                } else {
                    goto lab_0x53c10;
                }
            } else {
                goto lab_0x53bd7;
            }
        }
    }
  lab_0x53c34:
    // 0x53c34
    function_4ab380((int64_t *)a7);
    int64_t v16 = v4 & 0xffffffff; // 0x53c40
    goto lab_0x53c44;
  lab_0x53c44:;
    int64_t result = v16; // 0x53c55
    if (v1 != __readfsqword(40)) {
        // 0x53c57
        __stack_chk_fail();
        result = (int64_t)&g27;
    }
    // 0x53c5c
    return result;
  lab_0x53c20:
    // 0x53c20
    function_4ab380(&v10);
    v4 = v8 & 0xffffffff;
    v16 = v4;
    if (v5 == 0) {
        goto lab_0x53c44;
    } else {
        goto lab_0x53c34;
    }
  lab_0x53bd7:;
    int64_t v17 = function_4ab2c0(a7, &v10, &v9, a3, a6, 0, 0); // 0x53bf1
    v6 = v17;
    v7 = v17;
    goto lab_0x53c10;
  lab_0x53c10:
    // 0x53c10
    function_4a8c40(&v9);
    v5 = v6;
    v8 = v7 & 0xffffffff;
    goto lab_0x53c20;
}

// Address range: 0x54eda - 0x55026
int64_t function_54eda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = __readfsqword(40); // 0x54efa
    char v2 = 0; // 0x54f1d
    if (a5 != 0) {
        // 0x54f1f
        v2 = *(int64_t *)(a5 + 8) != a5;
    }
    // 0x54f2a
    *(int32_t *)a6 = 0;
    function_4ab2f0(a7);
    int64_t v3 = function_4ab520(a7, a2, *(int64_t *)(a2 + 8) - a2); // 0x54f48
    int64_t v4 = v3; // 0x54f4f
    int32_t v5; // 0x54eda
    int32_t v6; // 0x54eda
    int64_t v7; // 0x54eda
    int64_t v8; // 0x54eda
    int64_t v9; // bp-1032, 0x54eda
    int64_t v10; // bp-616, 0x54eda
    if ((int32_t)v3 != 0) {
        goto lab_0x54fec;
    } else {
        int64_t v11 = (int64_t)&v10; // 0x54f5d
        function_4ab2f0(v11);
        int64_t v12 = function_4ab520(v11, a4, *(int64_t *)(a4 + 8) - a4); // 0x54f74
        int32_t v13 = v12;
        v5 = v13;
        v8 = v12;
        if (v13 != 0) {
            goto lab_0x54fd8;
        } else {
            // 0x54f7d
            function_4a8bb0(&v9);
            if (v2 != 0) {
                int64_t v14 = function_4a8d50(&v9, a5, *(int64_t *)(a5 + 8) - a5); // 0x54fbf
                int32_t v15 = v14;
                v6 = v15;
                v7 = v14;
                if (v15 == 0) {
                    goto lab_0x54f8f;
                } else {
                    goto lab_0x54fc8;
                }
            } else {
                goto lab_0x54f8f;
            }
        }
    }
  lab_0x54fec:
    // 0x54fec
    function_4ab380((int64_t *)a7);
    int64_t v16 = v4 & 0xffffffff; // 0x54ff8
    goto lab_0x54ffc;
  lab_0x54ffc:;
    int64_t result = v16; // 0x5500d
    if (v1 != __readfsqword(40)) {
        // 0x5500f
        __stack_chk_fail();
        result = (int64_t)&g27;
    }
    // 0x55014
    return result;
  lab_0x54fd8:
    // 0x54fd8
    function_4ab380(&v10);
    v4 = v8 & 0xffffffff;
    v16 = v4;
    if (v5 == 0) {
        goto lab_0x54ffc;
    } else {
        goto lab_0x54fec;
    }
  lab_0x54f8f:;
    int64_t v17 = function_4ab2c0(a7, &v10, &v9, a3, a6, 0, 0); // 0x54fa9
    v6 = v17;
    v7 = v17;
    goto lab_0x54fc8;
  lab_0x54fc8:
    // 0x54fc8
    function_4a8c40(&v9);
    v5 = v6;
    v8 = v7 & 0xffffffff;
    goto lab_0x54fd8;
}

// Address range: 0x609f0 - 0x60b3b
int64_t function_609f0(int64_t result, int64_t wstr2) {
    if (result == wstr2) {
        // 0x60b2f
        return result;
    }
    int32_t * v1 = (int32_t *)(wstr2 - 8); // 0x60a07
    int32_t v2 = *v1; // 0x60a07
    int64_t v3 = wstr2 - 24;
    int64_t v4; // 0x609f0
    int64_t v5; // 0x609f0
    if (v2 < 0) {
        int64_t * v6 = (int64_t *)v3; // 0x60a40
        uint64_t v7 = *v6; // 0x60a40
        uint64_t v8 = *(int64_t *)(wstr2 - 16); // 0x60a4e
        if (v7 >= 0xfffffffffffffff) {
            // 0x60a57
            function_542590("basic_string::_S_create");
        }
        int64_t v9 = v7; // 0x60a66
        if (v7 > v8) {
            uint64_t v10 = 2 * v8; // 0x60a68
            v9 = v7 < v10 ? v10 : v7;
        }
        int64_t v11 = 4 * v9; // 0x60a73
        uint64_t v12 = v11 + 60; // 0x60a7b
        int64_t v13 = v9; // 0x60a85
        int64_t v14 = v11; // 0x60a85
        if (v8 < v9 && v12 > (int64_t)&g1) {
            uint64_t v15 = ((int64_t)&g1 - (v12 & (int64_t)(int32_t)&g26)) / 4 + v9; // 0x60aa0
            v13 = v15 < 0xffffffffffffffe ? v15 : 0xffffffffffffffe;
            v14 = 4 * v13;
        }
        int64_t v16 = v14 + 28;
        int64_t v17 = function_4efd30(v16); // 0x60abc
        int64_t n = *v6; // 0x60ac1
        *(int64_t *)(v17 + 8) = v13;
        int32_t * v18 = (int32_t *)(v17 + 16); // 0x60acc
        *v18 = 0;
        int64_t wstr = v17 + 24; // 0x60ad3
        int64_t v19 = v16; // 0x60ada
        if (n != 0) {
            if (n != 1) {
                // 0x60aec
                wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
                v19 = wstr;
            } else {
                // 0x60ae2
                int64_t v20; // 0x609f0
                *(int32_t *)wstr = *(int32_t *)&v20;
                v19 = v16;
            }
        }
        // 0x60af7
        v4 = wstr;
        v5 = v19;
        if (v17 != (int64_t)&g24) {
            int64_t v21 = *v6; // 0x60afc
            *v18 = 0;
            *(int64_t *)v17 = v21;
            *(int32_t *)(4 * v21 + wstr) = 0;
            v4 = wstr;
            v5 = v19;
        }
    } else {
        // 0x60a1d
        v4 = wstr2;
        v5 = result;
        if (v3 != (int64_t)&g24) {
            // 0x60a26
            *v1 = v2 + 1;
            v4 = wstr2;
            v5 = result;
        }
    }
    int64_t v22 = v5 - 24; // 0x60b1d
    if (v22 != (int64_t)&g24) {
        // 0x60b26
        function_607e2(v22);
    }
    // 0x60b2b
    *(int64_t *)result = v4;
    // 0x60b2f
    return result;
}

// Address range: 0x498440 - 0x498593
int64_t function_498440(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 96); // 0x498461
    int32_t v2 = *(int32_t *)(*v1 + (int64_t)&g25); // 0x498465
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g2, "=> handshake wrapup");
    int32_t * v3 = (int32_t *)(a1 + 12); // 0x498472
    if (*v3 == 1) {
        // 0x498568
        *v3 = 2;
        *(int32_t *)(a1 + 16) = 0;
    }
    int64_t * v4 = (int64_t *)(a1 + 80); // 0x49847c
    int64_t v5 = *v4; // 0x49847c
    int64_t * v6; // 0x498440
    int64_t result; // 0x498440
    if (v5 == 0) {
        // 0x49847c
        v6 = (int64_t *)(a1 + 88);
        result = 0;
    } else {
        int64_t * v7 = (int64_t *)(a1 + 88);
        *(int32_t *)(*v7 + 148) = *(int32_t *)(v5 + 148);
        function_497930(v5);
        int64_t v8 = *v4; // 0x49849a
        free((int64_t *)v8);
        v6 = v7;
        result = v8;
    }
    int64_t v9 = *v6; // 0x4984a6
    *v6 = 0;
    int64_t v10 = *(int64_t *)(result + 72); // 0x4984b2
    *v4 = v9;
    int64_t v11 = result; // 0x4984bd
    if (v10 != 0) {
        // 0x4984bf
        v11 = result;
        if (!((v2 != 0 | *(int64_t *)(v9 + 16) == 0))) {
            if ((int32_t)result != 0) {
                // 0x498580
                return result;
            }
            // 0x49855a
            v11 = *(int64_t *)(result + 80);
        }
    }
    // 0x4984ca
    int32_t * v12; // 0x498518
    int64_t result2; // 0x49853f
    if ((*(char *)(v11 + 372) & 2) != 0) {
        // 0x4984d3
        if (*(int64_t *)(*v1 + (int64_t)&g8) != 0) {
            // 0x4984e1
            function_4945c0(a1, 0, v10);
            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g3, "skip freeing handshake and transform");
            // 0x498518
            v12 = (int32_t *)(a1 + 8);
            *v12 = *v12 + 1;
            result2 = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g4, "<= handshake wrapup");
            return result2;
        }
    }
    // 0x498510
    function_4978a0(a1);
    // 0x498518
    v12 = (int32_t *)(a1 + 8);
    *v12 = *v12 + 1;
    result2 = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g4, "<= handshake wrapup");
    return result2;
}

// Address range: 0x4a9620 - 0x4a9773
int64_t function_4a9620(int64_t a1, int64_t a2) {
    // 0x4a9620
    int64_t result; // 0x4a9620
    if (a2 == 0) {
        // 0x4a9738
        return result;
    }
    // 0x4a9639
    int64_t v1; // 0x4a9620
    if (a1 == 0 || (int32_t)v1 != (int32_t)v1) {
        // 0x4a9738
        return 0xffffffff;
    }
    int64_t v2 = *(int64_t *)(a2 + 8); // 0x4a9656
    int64_t n = v2; // 0x4a965e
    int64_t v3 = a2; // 0x4a965e
    if (*(int64_t *)(a1 + 8) != v2) {
        // 0x4a9738
        return 0xffffffff;
    }
    int64_t v4 = a1; // 0x4a965e
    int64_t v5; // 0x4a9620
    int64_t v6; // 0x4a9620
    int32_t v7; // 0x4a96ed
    int32_t v8; // 0x4a96e9
    while (true) {
      lab_0x4a96d8:
        // 0x4a96d8
        v5 = v4;
        v6 = v3;
        int64_t str2 = *(int64_t *)(v6 + 16); // 0x4a96d8
        int64_t str = *(int64_t *)(v5 + 16); // 0x4a96dc
        result = 0xffffffff;
        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) != 0) {
            // break -> 0x4a9738
            break;
        }
        // 0x4a96e9
        v8 = *(int32_t *)(v5 + 24);
        v7 = *(int32_t *)(v6 + 24);
        if (v8 != v7) {
            goto lab_0x4a9668;
        } else {
            int64_t n2 = *(int64_t *)(v5 + 32); // 0x4a96fa
            if (n2 != *(int64_t *)(v6 + 32)) {
                goto lab_0x4a9668;
            } else {
                int64_t str4 = *(int64_t *)(v6 + 40); // 0x4a9708
                int64_t str3 = *(int64_t *)(v5 + 40); // 0x4a970c
                if (memcmp((int64_t *)str3, (int64_t *)str4, (int32_t)n2) == 0) {
                    goto lab_0x4a969f;
                } else {
                    // 0x4a9719
                    switch (v8) {
                        case 19: {
                            goto lab_0x4a9672;
                        }
                        case 12: {
                            goto lab_0x4a9672;
                        }
                        default: {
                            return 0xffffffff;
                        }
                    }
                }
            }
        }
    }
  lab_0x4a9738_8:
    // 0x4a9738
    return result;
  lab_0x4a9668:
    // 0x4a9668
    switch (v8) {
        case 19: {
            goto lab_0x4a9672;
        }
        case 12: {
            goto lab_0x4a9672;
        }
        default: {
            return 0xffffffff;
        }
    }
  lab_0x4a9672:
    // 0x4a9672
    switch (v7) {
        case 19: {
            goto lab_0x4a967c;
        }
        case 12: {
            goto lab_0x4a967c;
        }
        default: {
            return 0xffffffff;
        }
    }
  lab_0x4a967c:;
    int64_t v9 = *(int64_t *)(v5 + 32); // 0x4a967c
    result = 0xffffffff;
    if (v9 != *(int64_t *)(v6 + 32)) {
        return result;
    }
    int64_t v10 = *(int64_t *)(v5 + 40); // 0x4a968e
    result = 0xffffffff;
    if ((int32_t)function_4a95d0(v10, *(int64_t *)(v6 + 40), v9) != 0) {
        return result;
    }
    goto lab_0x4a969f;
  lab_0x4a969f:
    // 0x4a969f
    result = 0xffffffff;
    if (*(char *)(v5 + 56) != *(char *)(v6 + 56)) {
        // break -> 0x4a9738
        goto lab_0x4a9738_8;
    }
    // 0x4a96ac
    v3 = *(int64_t *)(v6 + 48);
    v4 = *(int64_t *)(v5 + 48);
    result = 0;
    if (v3 == 0 && v4 == 0) {
        // break -> 0x4a9738
        goto lab_0x4a9738_8;
    }
    // 0x4a96bd
    result = 0xffffffff;
    if (v3 == 0 || v4 == 0) {
        // break -> 0x4a9738
        goto lab_0x4a9738_8;
    }
    // 0x4a96c7
    result = 0xffffffff;
    if (*(int32_t *)v4 != *(int32_t *)v3) {
        // break -> 0x4a9738
        goto lab_0x4a9738_8;
    }
    // 0x4a96ce
    n = *(int64_t *)(v4 + 8);
    result = 0xffffffff;
    if (n != *(int64_t *)(v3 + 8)) {
        // break -> 0x4a9738
        goto lab_0x4a9738_8;
    }
    goto lab_0x4a96d8;
}

// Address range: 0x4b66c0 - 0x4b66ca
int64_t function_4b66c0(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4b66c0
    return function_4b6570();
}

// Address range: 0x4b66d0 - 0x4b674f
int64_t function_4b66d0(int64_t a1, int64_t file_path) {
    struct _IO_FILE * file = fopen((char *)file_path, "wb"); // 0x4b66e6
    if (file == NULL) {
        // 0x4b6711
        return 0xffffffc6;
    }
    // 0x4b66f3
    int64_t data; // bp-280, 0x4b66d0
    int64_t v1; // 0x4b66d0
    int64_t v2 = function_4b66c0(a1, &data, 256, v1, v1); // 0x4b66fe
    int64_t v3 = v2 & 0xffffffff; // 0x4b6705
    int64_t v4 = v3; // 0x4b6707
    if ((int32_t)v2 == 0) {
        // 0x4b6720
        v4 = fwrite(&data, 1, 256, file) != 256 ? 0xffffffc6 : v3;
    }
    // 0x4b6709
    fclose(file);
    // 0x4b6711
    return v4 & 0xffffffff;
}

// Address range: 0x4b678a - 0x4b678b
int64_t function_4b678a(void) {
    // 0x4b678a
    int64_t result; // 0x4b678a
    return result;
}

// Address range: 0x4b67cf - 0x4b67d8
int64_t function_4b67cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b67cf
    int64_t v1; // 0x4b67cf
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_494b1e75();
}

// Address range: 0x508490 - 0x5085e0
// From class:    std::collate_byname<wchar_t>
// Type:          virtual member function
int64_t function_508490(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x508490
    int64_t v1; // bp-65, 0x508490
    int64_t v2 = (int64_t)&v1; // 0x5084b4
    __readfsqword(40);
    int64_t wstr = function_551750(a2, a3, v2); // 0x5084cc
    int64_t wstr2 = function_551750(a4, a5, v2); // 0x5084e5
    int64_t v3 = wstr - 24; // 0x5084f5
    int64_t v4 = wstr2 - 24; // 0x508502
    int64_t v5; // 0x508490
    int64_t v6 = function_5690f0(a1, wstr, wstr2, v5); // 0x508557
    int64_t v7 = v6 & 0xffffffff; // 0x50855e
    int64_t v8 = v6; // 0x508561
    int64_t result = v7; // 0x508561
    if ((int32_t)v6 == 0) {
        int64_t v9 = 4 * *(int64_t *)v3 + wstr; // 0x5084fe
        int64_t v10 = 4 * *(int64_t *)v4 + wstr2; // 0x508506
        int64_t v11 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr; // 0x50851c
        int64_t v12 = 4 * (int64_t)wcslen((int32_t *)wstr2) + wstr2; // 0x50852c
        int64_t v13 = v7; // 0x508530
        bool v14 = v9 == v11; // 0x508530
        int64_t v15 = v12; // 0x508530
        bool v16 = v10 == v12; // 0x508530
        if (v9 == v11 || v10 == v12) {
          lab_0x508510:;
            bool v17 = v14;
            v8 = v15;
            result = v17 ? v17 == v16 ? v13 : 0xffffffff : 1;
        } else {
            int64_t wstr4 = v12 + 4; // 0x508541
            int64_t wstr3 = v11 + 4; // 0x508545
            int64_t v18 = function_5690f0(a1, wstr3, wstr4, wstr2); // 0x508557
            int64_t v19 = v18 & 0xffffffff; // 0x50855e
            v8 = v18;
            result = v19;
            while ((int32_t)v18 == 0) {
                int64_t v20 = 4 * (int64_t)wcslen((int32_t *)wstr3) + wstr3; // 0x50851c
                int64_t v21 = 4 * (int64_t)wcslen((int32_t *)wstr4) + wstr4; // 0x50852c
                int64_t v22 = wstr4; // 0x508530
                v13 = v19;
                v14 = v9 == v20;
                v15 = v21;
                v16 = v10 == v21;
                if (v9 == v20 || v10 == v21) {
                    goto lab_0x508510;
                }
                wstr4 = v21 + 4;
                wstr3 = v20 + 4;
                v18 = function_5690f0(a1, wstr3, wstr4, v22);
                v19 = v18 & 0xffffffff;
                v8 = v18;
                result = v19;
            }
        }
    }
    // 0x508563
    int64_t result2; // 0x508490
    if (v4 != (int64_t)&g24) {
        // 0x5085c0
        result2 = function_508450(v4, v2);
        if (v3 == (int64_t)&g24) {
            // 0x508584
            __readfsqword(40);
            return result;
        }
    } else {
        // 0x508577
        result2 = v8;
        if (v3 == (int64_t)&g24) {
            // 0x508584
            __readfsqword(40);
            return result;
        }
    }
    // 0x5085e0
    return result2;
}

// Address range: 0x578220 - 0x578373
int64_t function_578220(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = __readfsqword(40); // 0x578240
    int64_t result = a1; // 0x578252
    int64_t v2; // 0x578220
    int64_t v3; // bp-72, 0x578220
    if (a9 == 0) {
        goto lab_0x5782c2;
    } else {
        // 0x578258
        if (*(int64_t *)(a9 + 32) == 0) {
            goto lab_0x57834a;
        } else {
            int64_t v4 = *(int64_t *)(a9 + 8); // 0x578267
            int64_t v5; // bp-73, 0x578220
            int64_t v6 = (int64_t)&v5; // 0x57827a
            int64_t v7 = (int64_t)&v3; // 0x578281
            function_7826e(&v3, *(int64_t *)a9, v4, &v5);
            int64_t v8 = v3 - 24; // 0x5782b5
            v2 = v6;
            result = v7;
            if (v8 != (int64_t)g14) {
                int32_t * v9 = (int32_t *)(v3 - 8);
                int32_t v10 = *v9;
                uint32_t v11 = v10 - 1;
                *v9 = v11;
                v2 = v6;
                result = v7;
                if (v10 >= 0 != v10 != 0) {
                    // 0x578318
                    int64_t v12; // 0x578220
                    int64_t v13 = g15 == 0 ? (int64_t)v11 : v12;
                    function_547e30(v8, v6, a3, v3, v13, 0x100000000000000 * a6 >> 56, v7, a3);
                    v2 = v6;
                    result = v7;
                }
            }
            goto lab_0x5782c2;
        }
    }
  lab_0x5782c2:
    // 0x5782c2
    if (v1 == __readfsqword(40)) {
        // 0x5782d1
        return result;
    }
    // 0x578345
    __stack_chk_fail();
    int64_t v14 = v2; // 0x578345
    goto lab_0x57834a;
  lab_0x57834a:
    // 0x57834a
    function_542470("uninitialized __any_string");
    int64_t v15 = v3 - 24; // 0x57835d
    int64_t result2 = v3; // 0x578368
    if (v15 != (int64_t)g14) {
        // 0x57836a
        result2 = function_20d90(v15, v14);
    }
    // 0x5782d1
    return result2;
}

// Address range: 0x578380 - 0x5784ca
int64_t function_578380(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = __readfsqword(40); // 0x5783a0
    int64_t result2 = a1; // 0x5783b2
    int64_t result; // bp-72, 0x578380
    if (a9 != 0) {
        // 0x5783b8
        if (*(int64_t *)(a9 + 32) == 0) {
            // 0x5784aa
            function_542470("uninitialized __any_string");
            return result;
        }
        int64_t v2 = *(int64_t *)a9; // 0x5783de
        int64_t v3 = (int64_t)&result; // 0x5783e1
        int64_t v4; // bp-73, 0x578380
        function_551820(&result, v2, *(int64_t *)(a9 + 8), &v4);
        int64_t v5 = result - 24; // 0x578411
        result2 = v3;
        if (v5 != *(int64_t *)0x848c20) {
            int32_t * v6 = (int32_t *)(result - 8);
            int32_t v7 = *v6;
            uint32_t v8 = v7 - 1;
            *v6 = v8;
            result2 = v3;
            if (v7 >= 0 != v7 != 0) {
                // 0x578478
                int64_t v9; // 0x578380
                int64_t v10 = g15 == 0 ? (int64_t)v8 : v9;
                function_5509d0(v5, (int64_t)&v4, a3, result, v10, (int32_t)a6, v3, a3);
                result2 = v3;
            }
        }
    }
    // 0x57841e
    if (v1 == __readfsqword(40)) {
        // 0x57842d
        return result2;
    }
    // 0x5784a5
    __stack_chk_fail();
    // 0x5784aa
    function_542470("uninitialized __any_string");
    return result;
}
