/*
 * Targeted RetDec C for native executable gap queue batch 23.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2c7a0-0x2c899 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52b68-0x52c61 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52cc60-0x52cd59 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b252-0x2b34a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f5d10-0x1f5e08 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52bdc0-0x52beb8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54a8d0-0x54a9c8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36ff8-0x370ef rank=- name=- kind=- bytes=- uncovered=-
 *   0x522710-0x522807 rank=- name=- kind=- bytes=- uncovered=-
 *   0x507f6-0x508eb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b5690-0x4b5785 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b674-0x2b768 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5a160-0x5a254 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3a10-0x4c3b04 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52b8e0-0x52b9d4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48e88e-0x48e981 rank=- name=- kind=- bytes=- uncovered=-
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
struct eac_retdec_cpuid_regs { uint32_t e0; uint32_t e1; uint32_t e2; uint32_t e3; };
#define F_GETFL 3
#define F_SETFL 4
#define SO_DEBUG 1
#define _SC_PAGESIZE 30
#define SYS_getegid32 50
extern int g1;
extern int g2;
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
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
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
int32_t btowc(int c);
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

int64_t function_1f5d10();
int64_t function_21a2d();
int64_t function_2508e();
int64_t function_250b0();
int64_t function_29c3a();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_29ef7();
int64_t function_2b130();
int64_t function_2b148();
int64_t function_2b1e2();
int64_t function_2b252();
int64_t function_2b60a();
int64_t function_2b674();
int64_t function_2b858();
int64_t function_2c35e();
int64_t function_2c7a0();
int64_t function_2c89a();
int64_t function_35a30();
int64_t function_35b6a();
int64_t function_36712();
int64_t function_36990();
int64_t function_36fe2();
int64_t function_36ff8();
int64_t function_48e88e();
int64_t function_48f542();
int64_t function_4adc80();
int64_t function_4add10();
int64_t function_4ae080();
int64_t function_4aecc0();
int64_t function_4b55b0();
int64_t function_4b5690();
int64_t function_4c3810();
int64_t function_4c3a10();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0ae0();
int64_t function_4f0bc0();
int64_t function_507f6();
int64_t function_522710();
int64_t function_52b020();
int64_t function_52b400();
int64_t function_52b5a();
int64_t function_52b68();
int64_t function_52b8e0();
int64_t function_52bdc0();
int64_t function_52cc60();
int64_t function_542590();
int64_t function_549e80();
int64_t function_54a8d0();
int64_t function_554b00();
int64_t function_5a160();
int64_t function_6a512();
int64_t function_7293a();
int64_t function_c6d58();

// Address range: 0x2b252 - 0x2b34a
int64_t function_2b252(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x2b25d
    int32_t v2 = 0; // bp-36, 0x2b26d
    int64_t v3 = function_2b148(); // 0x2b275
    int64_t v4 = v3 % 256; // 0x2b27c
    int64_t v5 = v3; // 0x2b27f
    int64_t v6 = v4; // 0x2b27f
    if ((char)v3 == 0) {
        // 0x2b285
        if (*(char *)(a1 + 89) == 0) {
            // 0x2b28c
            function_2b1e2(a1);
        }
        int64_t v7 = a1 + 120; // 0x2b294
        int32_t * v8 = (int32_t *)(a1 + 124);
        if ((int32_t)function_2b60a(v7) == 3) {
            // 0x2b2a2
            if (*v8 != 0) {
                int64_t v9 = a1 + 128; // 0x2b2a8
                function_2b130(a1, v9);
                *v8 = 0;
                *(int32_t *)v9 = *v8;
            }
        }
        int64_t v10 = a1 + 96; // 0x2b2c7
        int64_t * v11 = (int64_t *)v10; // 0x2b2c7
        int64_t * v12 = (int64_t *)(a1 + 104); // 0x2b2d7
        *v12 = *v11;
        function_2b674(v10, L"\n2");
        int64_t v13 = *v11; // 0x2b2e0
        int32_t v14 = function_2b858(v13, *v12 - v13, &v2); // 0x2b2f5
        *v8 = v14;
        int32_t * v15 = (int32_t *)v7;
        if (v14 == 0) {
            // 0x2b317
            *v15 = 0;
            __asm_mfence(v13);
            int64_t v16 = *v11; // 0x2b321
            *v12 = v16;
            v5 = v16;
            v6 = v4;
        } else {
            // 0x2b2fc
            *v15 = 1;
            __asm_mfence(v10);
            v5 = function_2b674(v10, (int32_t *)(int64_t)v2);
            v6 = 1;
        }
    }
    int64_t result = v6 | v5 & -256; // 0x2b33a
    if (v1 != __readfsqword(40)) {
        // 0x2b33c
        __stack_chk_fail();
        result = (int64_t)&g2;
    }
    // 0x2b341
    return result;
}

// Address range: 0x2b674 - 0x2b768
int64_t function_2b674(int64_t result, int32_t * a2) {
    uint64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(result + 8); // 0x2b683
    int64_t v3 = *v2; // 0x2b683
    uint64_t v4 = v3 - result; // 0x2b68d
    if (v4 >= v1) {
        // 0x2b752
        if (v4 > v1) {
            // 0x2b754
            *v2 = v1 + result;
        }
        // 0x2b75b
        return result;
    }
    uint64_t v5 = v1 - v4; // 0x2b69c
    if (v5 == 0) {
        // 0x2b75b
        return result;
    }
    int64_t * v6 = (int64_t *)(result + 16); // 0x2b6a5
    if (v5 <= *v6 - v3) {
        // 0x2b6b1
        __asm_rep_stosb_memset((char *)v3, 0, v5);
        bool v7; // 0x2b674
        *v2 = v5 * (v7 ? -1 : 1) + v3;
        // 0x2b75b
        return 0;
    }
    if (v5 > -1 - v4) {
        // 0x2b6cf
        function_542590("vector::_M_default_append");
    }
    int64_t v8 = -1; // 0x2b6e8
    int64_t v9; // 0x2b674
    int64_t v10; // 0x2b674
    if (v8 < (v5 >= v4 ? v5 : v4)) {
        goto lab_0x2b6f8;
    } else {
        // 0x2b6ea
        v10 = v8;
        v9 = 0;
        if (v8 != 0) {
            goto lab_0x2b6f8;
        } else {
            goto lab_0x2b70d;
        }
    }
  lab_0x2b6f8:;
    int64_t v11 = function_4efd30(v8); // 0x2b700
    v10 = v8;
    v9 = v11;
    goto lab_0x2b70d;
  lab_0x2b70d:;
    int64_t v12 = v9 + v4; // 0x2b70d
    __asm_rep_stosb_memset((char *)v12, 0, v5);
    int64_t v13 = *v2 - v12; // 0x2b71e
    int64_t result2; // 0x2b674
    if (v13 == 0) {
        // 0x2b730
        result2 = 0;
        if (v12 == 0) {
            goto lab_0x2b73d;
        } else {
            // 0x2b735
            result2 = function_4eeb50(v12);
            goto lab_0x2b73d;
        }
    } else {
        // 0x2b723
        memmove((int64_t *)v9, (int64_t *)v12, (int32_t)v13);
        // 0x2b735
        result2 = function_4eeb50(v12);
        goto lab_0x2b73d;
    }
  lab_0x2b73d:
    // 0x2b73d
    *(int64_t *)result = v9;
    *v6 = v9 + v10;
    *v2 = v9 + v1;
    // 0x2b75b
    return result2;
}

// Address range: 0x2c7a0 - 0x2c899
int64_t function_2c7a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x2c7b1
    uint32_t v2 = (int32_t)a3;
    int64_t v3; // 0x2c7a0
    if (a1 + 8 != a2) {
        uint32_t v4 = *(int32_t *)(a2 + 32); // 0x2c7e9
        if (v4 <= v2) {
            // 0x2c822
            v3 = a2;
            if (v4 < v2) {
                int64_t v5 = a2; // bp-40, 0x2c828
                if (*(int64_t *)(a1 + 32) != a2) {
                    // 0x2c836
                    if (*(int32_t *)(*(int64_t *)function_2c35e(&v5) + 32) <= v2) {
                        // 0x2c86c
                        v3 = function_2c89a(a1);
                        goto lab_0x2c87b;
                    } else {
                        // 0x2c854
                        v3 = *(int64_t *)(a2 + 24) != 0 ? v5 : 0;
                        goto lab_0x2c87b;
                    }
                } else {
                    // 0x2c832
                    v3 = 0;
                    goto lab_0x2c87b;
                }
            } else {
                goto lab_0x2c87b;
            }
        } else {
            // 0x2c7ef
            v3 = a2;
            if (*(int64_t *)(a1 + 24) == a2) {
                goto lab_0x2c87b;
            } else {
                int64_t v6 = function_4f0ae0(a2); // 0x2c800
                if (*(int32_t *)(v6 + 32) < v2) {
                    // 0x2c813
                    v3 = a2;
                    if (*(int64_t *)(v6 + 24) == 0) {
                        // 0x2c832
                        v3 = 0;
                        goto lab_0x2c87b;
                    } else {
                        goto lab_0x2c87b;
                    }
                } else {
                    // 0x2c86c
                    v3 = function_2c89a(a1);
                    goto lab_0x2c87b;
                }
            }
        }
    } else {
        // 0x2c7ca
        if (*(int64_t *)(a1 + 40) == 0) {
            // 0x2c86c
            v3 = function_2c89a(a1);
            goto lab_0x2c87b;
        } else {
            // 0x2c7d5
            if (*(int32_t *)(*(int64_t *)(a1 + 32) + 32) >= v2) {
                // 0x2c86c
                v3 = function_2c89a(a1);
                goto lab_0x2c87b;
            } else {
                // 0x2c832
                v3 = 0;
                goto lab_0x2c87b;
            }
        }
    }
  lab_0x2c87b:;
    int64_t result = v3; // 0x2c889
    if (v1 != __readfsqword(40)) {
        // 0x2c88b
        __stack_chk_fail();
        result = (int64_t)&g2;
    }
    // 0x2c890
    return result;
}

// Address range: 0x36ff8 - 0x370ef
int64_t function_36ff8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 - 24; // 0x3701b
    int64_t v2 = *(int64_t *)v1; // 0x3701b
    int64_t v3 = v2 + a4 - a3; // 0x3701f
    int64_t v4 = v2 - a2 - a3; // 0x37025
    uint64_t v5 = *(int64_t *)(a1 - 16); // 0x37028
    int64_t v6 = v5; // 0x3702c
    if (v3 <= v5) {
        // 0x37065
        if ((char)function_29cea(v1) == 0) {
            int64_t v7 = v1; // 0x37075
            if (a4 != a3 && v4 != 0) {
                // 0x3707c
                v7 = 4 * (a4 + a2) + v1;
                function_36fe2(v7, 4 * (a3 + a2) + v1, v4);
            }
            // 0x370d2
            return function_29cf4(v7 - 24, v3);
        }
        // 0x37065
        v6 = *(int64_t *)(a1 - 40);
    }
    // 0x3702e
    function_35b6a(v3, v6);
    if (a2 != 0) {
        // 0x3704a
        function_29ef7(v3, v3, a2);
    }
    int64_t v8 = v3; // 0x3709a
    if (v4 != 0) {
        // 0x3709c
        v8 = v3 + 4 * (a4 + a2);
        function_29ef7(v8, v3 + 4 * (a3 + a2), v4);
    }
    int64_t v9 = v8 - 24; // 0x370b9
    if (v9 != *(int64_t *)0x848c20) {
        // 0x370c6
        function_35a30(v9);
    }
    // 0x370cb
    *(int64_t *)a1 = v3;
    // 0x370d2
    return function_29cf4(v9 - 24, v3);
}

// Address range: 0x507f6 - 0x508eb
int64_t function_507f6(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 16; // 0x507f6
    *(int64_t *)a1 = a2;
    *(int32_t *)v1 = 0;
    *(int64_t *)(a1 + 32) = v1;
    *(int64_t *)(a1 + 40) = v1;
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 48) = 0;
    function_7293a(a1 + 56);
    int64_t v2 = a1 + 104; // 0x50829
    *(int32_t *)v2 = 0;
    *(int64_t *)(a1 + 112) = 0;
    *(int64_t *)(a1 + 136) = 0;
    int64_t v3 = a1 + 152; // 0x50847
    *(int32_t *)v3 = 0;
    *(int64_t *)(a1 + 120) = v2;
    *(int64_t *)(a1 + 128) = v2;
    *(int64_t *)(a1 + 160) = 0;
    *(int64_t *)(a1 + 184) = 0;
    *(int64_t *)(a1 + 168) = v3;
    *(int64_t *)(a1 + 176) = v3;
    *(int64_t *)(a1 + 216) = 0;
    *(int64_t *)(a1 + 224) = 0;
    *(int64_t *)(a1 + 232) = 0;
    *(int64_t *)(a1 + 240) = 0;
    *(int64_t *)(a1 + 248) = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)(a1 + 192) = (int64_t)&g1;
    *(int64_t *)(a1 + 200) = (int64_t)&g1;
    *(int64_t *)(a1 + 208) = (int64_t)&g1;
    return (int64_t)&g1;
}

// Address range: 0x52b68 - 0x52c61
int64_t function_52b68(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x52b7d
    int64_t result = function_4efd30(48); // 0x52b85
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x52b91
    int64_t v3 = result + 32; // 0x52b95
    *(int64_t *)v3 = a2;
    *(int64_t *)a2 = (int64_t)&g1;
    *(int64_t *)(result + 40) = *(int64_t *)(a2 + 8);
    int64_t v4 = v1; // 0x52bbc
    int64_t v5; // 0x52b68
    int64_t result2; // 0x52b68
    if (v2 == 0) {
        goto lab_0x52be7;
    } else {
        v4 = v2;
        int64_t v6 = v4 + 32;
        int64_t v7 = function_52b5a(v3, v6); // 0x52bc6
        int64_t v8 = *(int64_t *)(((char)v7 == 0 ? 24 : 16) + v4);
        while (v8 != 0) {
            // 0x52bbe
            v4 = v8;
            v6 = v4 + 32;
            v7 = function_52b5a(v3, v6);
            v8 = *(int64_t *)(((char)v7 == 0 ? 24 : 16) + v4);
        }
        // 0x52be3
        v5 = v6;
        result2 = v4;
        if ((char)v7 == 0) {
            goto lab_0x52bfd;
        } else {
            goto lab_0x52be7;
        }
    }
  lab_0x52be7:;
    int64_t v9 = v4; // 0x52beb
    if (*(int64_t *)(a1 + 24) == v4) {
        goto lab_0x52c25;
    } else {
        int64_t v10 = function_4f0ae0(v4); // 0x52bf0
        v5 = v10 + 32;
        result2 = v10;
        goto lab_0x52bfd;
    }
  lab_0x52c25:;
    int64_t v11 = 1; // 0x52c2a
    if (v1 != v9) {
        // 0x52c2c
        v11 = function_52b5a(v3, v9 + 32) % 256;
    }
    // 0x52c38
    function_4f0bc0(v11, result, v9, v1);
    int64_t * v12 = (int64_t *)(a1 + 40); // 0x52c49
    *v12 = *v12 + 1;
    // 0x52c55
    return result;
  lab_0x52bfd:
    // 0x52bfd
    v9 = v4;
    if ((char)function_52b5a(v5, v3) == 0) {
        // 0x52c0e
        function_29c3a(v3);
        function_4eeb50(result);
        // 0x52c55
        return result2;
    }
    goto lab_0x52c25;
}

// Address range: 0x5a160 - 0x5a254
int64_t function_5a160(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 & 0xffffffff; // 0x5a170
    int64_t v2 = __readfsqword(40); // 0x5a181
    int32_t v3 = 0; // bp-100, 0x5a194
    int64_t v4 = 0; // bp-88, 0x5a19c
    int64_t v5 = 0; // 0x5a1b7
    if (v1 != 0) {
        // 0x5a1b9
        v5 = function_4efd30(v1);
    }
    // 0x5a1c1
    v4 = v5;
    function_21a2d(a4, v1 + a4, v5);
    int64_t v6; // bp-101, 0x5a160
    int64_t v7; // bp-96, 0x5a160
    function_250b0(&v7, a2, &v6);
    int64_t v8 = function_6a512(a1 + 8, &v7, &v4, a3 % 0x10000, &v3); // 0x5a20b
    int64_t v9 = function_2508e(&v7); // 0x5a227
    if (v4 != 0) {
        // 0x5a229
        v9 = function_4eeb50(v4);
    }
    int64_t result = v9 & -256 | (int64_t)((int32_t)v8 == 0); // 0x5a23e
    if (v2 != __readfsqword(40)) {
        // 0x5a240
        __stack_chk_fail();
        result = (int64_t)&g2;
    }
    // 0x5a245
    return result;
}

// Address range: 0x1f5d10 - 0x1f5e08
int64_t function_1f5d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 - 8; // 0x1f5d2f
    int64_t * v2 = (int64_t *)v1; // 0x1f5d2f
    *v2 = 0x15c35911;
    int64_t * v3 = (int64_t *)(a5 - 16); // 0x1f5d34
    *v3 = 0x1a06d348;
    int64_t * v4 = (int64_t *)(a5 - 24); // 0x1f5d44
    *v4 = a5;
    int64_t v5 = *(int64_t *)(a5 + 24); // 0x1f5d4a
    *v3 = v5;
    *v4 = v5;
    int64_t * v6 = (int64_t *)(a5 - 32); // 0x1f5d51
    *v6 = v5;
    int64_t v7 = *(int64_t *)(a5 + 8); // 0x1f5d63
    *v3 = v7;
    *v6 = v7;
    *v4 = v5;
    *(int64_t *)a5 = *v3;
    *v6 = v7;
    *v4 = v7;
    *(int64_t *)(a5 + 16) = *v3;
    *v3 = a5;
    *v3 = *v2;
    *v4 = v1;
    return function_c6d58();
}

// Address range: 0x48e88e - 0x48e981
int64_t function_48e88e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48e88e
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    int64_t v1 = __readfsqword(40); // 0x48e8b6
    *(int64_t *)(a1 + 16) = 0;
    int64_t v2 = function_36990(a2, a3, 0, *(int64_t *)(a3 - 24)); // 0x48e8de
    if (v2 != -1) {
        int64_t v3 = 0;
        int64_t v4; // bp-72, 0x48e88e
        if (v2 != v3) {
            // 0x48e924
            function_36712(&v4, a2, v3, v2 - v3);
            function_48f542(a1, &v4);
            function_2508e(&v4);
        }
        int64_t v5 = *(int64_t *)(v3 - 24);
        int64_t v6 = v5 + v2; // 0x48e952
        int64_t v7 = function_36990(a2, v3, v6, v5); // 0x48e8de
        while (v7 != -1) {
            // 0x48e91f
            v3 = v6;
            int64_t v8 = v7;
            if (v8 != v3) {
                // 0x48e924
                function_36712(&v4, a2, v3, v8 - v3);
                function_48f542(a1, &v4);
                function_2508e(&v4);
            }
            // 0x48e94b
            v5 = *(int64_t *)(v3 - 24);
            v6 = v5 + v8;
            v7 = function_36990(a2, v3, v6, v5);
        }
        if (v6 < 0xffffffffffffffff) {
            // 0x48e8f6
            function_36712(&v4, a2, v6, v7);
            function_48f542(a1, &v4);
            function_2508e(&v4);
        }
    }
    int64_t result = a1; // 0x48e96b
    if (v1 != __readfsqword(40)) {
        // 0x48e96d
        __stack_chk_fail();
        result = (int64_t)&g2;
    }
    // 0x48e972
    return result;
}

// Address range: 0x4b5690 - 0x4b5782
int64_t function_4b5690(uint64_t a1, int64_t a2) {
    int64_t result = 0xffff9f00; // 0x4b569c
    if (a1 == 0 || a2 == 0) {
        // 0x4b5711
        return result;
    }
    int64_t v1 = a1; // 0x4b56b7
    int64_t v2 = 88; // 0x4b56b7
    if (a1 % 2 != 0) {
        // 0x4b5760
        *(char *)a1 = 0;
        v1 = a1 + 1;
        v2 = 87;
    }
    int64_t v3 = v1; // 0x4b56c1
    int64_t v4 = v2; // 0x4b56c1
    if ((v1 & 2) != 0) {
        // 0x4b5770
        *(int16_t *)v1 = 0;
        v3 = v1 + 2;
        v4 = v2 + 126 & 95;
    }
    // 0x4b56c7
    if ((v3 & 4) != 0) {
        // 0x4b5711
        return result;
    }
    uint64_t v5 = v4 / 8 % 0x20000000; // 0x4b56d6
    __asm_rep_stosq_memset((char *)v3, 0, v5);
    bool v6; // 0x4b5690
    int64_t v7 = v5 * (v6 ? -8 : 8) + v3; // 0x4b56dd
    int64_t v8; // 0x4b5690
    int64_t v9; // 0x4b5690
    if ((v4 & 4) != 0) {
        // 0x4b5740
        *(int32_t *)v7 = 0;
        int64_t v10 = v7 + 4; // 0x4b5746
        v8 = v10;
        v9 = v10;
        if ((v4 & 2) == 0) {
            goto lab_0x4b56e8;
        } else {
            goto lab_0x4b5728;
        }
    } else {
        // 0x4b56e2
        v8 = v7;
        v9 = v7;
        if ((v4 & 2) != 0) {
            goto lab_0x4b5728;
        } else {
            goto lab_0x4b56e8;
        }
    }
  lab_0x4b56e8:
    // 0x4b56e8
    if (v4 % 2 != 0) {
        // 0x4b5720
        *(char *)v8 = 0;
        goto lab_0x4b56ee;
    } else {
        goto lab_0x4b56ee;
    }
  lab_0x4b5728:
    // 0x4b5728
    *(int16_t *)v9 = 0;
    if (v4 % 2 == 0) {
        goto lab_0x4b56ee;
    } else {
        // 0x4b5720
        *(char *)(v9 + 2) = 0;
        goto lab_0x4b56ee;
    }
  lab_0x4b56ee:;
    int64_t v11 = *(int64_t *)(a2 + 40); // 0x4b56ee
    *(int64_t *)(a1 + 80) = v11;
    if (v11 != 0) {
        // 0x4b5702
        *(int64_t *)a1 = a2;
        function_4b55b0(a1, 0);
    }
    // 0x4b5711
    return 0;
}

// Address range: 0x4c3a10 - 0x4c3b04
int64_t function_4c3a10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2 & 0xffffffff; // 0x4c3a4e
    int64_t v2; // bp-344, 0x4c3a10
    function_4adc80(&v2);
    int64_t v3; // bp-376, 0x4c3a10
    function_4c3810(&v3, v1, a1, a5, a6);
    function_4ae080(&v2, &v3, 8 * a2 & 0xfffffff8);
    function_4aecc0(&v2, 0, a4, a1, a3, a3);
    function_4add10(&v2);
    int64_t result = (int64_t)&v3; // 0x4c3aa7
    if (v1 == 0) {
        // 0x4c3acc
        return result;
    }
    int64_t result2 = result; // 0x4c3ab7
    *(char *)result2 = 0;
    result2++;
    while (result2 != v1 + result) {
        // 0x4c3ac0
        *(char *)result2 = 0;
        result2++;
    }
    // 0x4c3acc
    return result2;
}

// Address range: 0x522710 - 0x522806
int64_t function_522710(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x522710
    __readfsqword(40);
    function_554b00(a9 + 208);
    int64_t result = 4 * a8 + 30 & -16; // 0x522787
    if (result2 == 0) {
        // 0x522818
        return result;
    }
    if ((int32_t)a3 == -1) {
        // 0x522802
        return *(int64_t *)(result2 + 16);
    }
    // 0x5227a9
    if (a4 == 0) {
        // 0x522818
        return result;
    }
    // 0x5227b2
    if ((int32_t)a5 == -1) {
        // 0x522818
        return 0;
    }
    int32_t * v1 = (int32_t *)a10; // 0x5227c6
    *v1 = *v1 | 4;
    __readfsqword(40);
    return result2;
}

// Address range: 0x52b8e0 - 0x52b9c8
int64_t function_52b8e0(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8);
    uint64_t v2 = *v1; // 0x52b8e8
    uint64_t v3 = v2 <= a2 ? a2 : v2;
    int64_t result2 = v3;
    int64_t v4 = a1 + 16; // 0x52b901
    int64_t * v5 = (int64_t *)v4; // 0x52b90f
    uint64_t v6 = *v5; // 0x52b90f
    int64_t result; // 0x52b8e0
    if (v6 == v3) {
        // 0x52b94d
        return result;
    }
    if (v3 <= 15 && v6 >= v3) {
        if (v2 != 0 && v2 == -1) {
            int64_t v7 = function_4eeb50(a1); // 0x52b945
            *(int64_t *)a1 = v4;
            result = v7;
        }
        // 0x52b94d
        return result;
    }
    int64_t v8 = function_52b020(a1, &result2, v6, v2); // 0x52b968
    int64_t v9 = *v1; // 0x52b970
    int64_t v10; // 0x52b8e0
    if (v9 == 0) {
        // 0x52b986
        *(char *)v8 = (char)a1;
        v10 = a1;
    } else {
        int64_t v11 = v9 + 1; // 0x52b977
        v10 = a1;
        if (v11 != 0) {
            int64_t * v12 = (int64_t *)a1;
            memcpy((int64_t *)v8, v12, (int32_t)v11);
            v10 = v8;
            if (v4 == v8) {
                // 0x52b990
                *v12 = v8;
                *v5 = result2;
                return result2;
            }
        }
    }
    // 0x52b98b
    function_4eeb50(v10);
    // 0x52b990
    *(int64_t *)a1 = v8;
    *v5 = result2;
    return result2;
}

// Address range: 0x52bdc0 - 0x52beb7
int64_t function_52bdc0(int64_t result, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x52bdcb
    int64_t v2 = *v1; // 0x52bdcb
    if (a3 + 0x7fffffffffffffff - v2 < a4) {
        // 0x52bea2
        return function_542590("basic_string::_M_replace_aux");
    }
    uint64_t v3 = v2 + a4 - a3; // 0x52be03
    int64_t v4; // 0x52bdc0
    if (*(int64_t *)(result + 16) < v3) {
        // 0x52be80
        function_52b400(result, a2);
        v4 = result;
    } else {
        int64_t v5 = v2 - a2 - a3; // 0x52be17
        v4 = result;
        if (a4 != a3 && v5 != 0) {
            int64_t v6 = a2 + result; // 0x52be21
            int64_t v7 = v6 + a3; // 0x52be24
            int64_t v8 = v6 + a4; // 0x52be28
            if (v5 == 1) {
                // 0x52be98
                *(char *)v8 = *(char *)v7;
                v4 = v8;
            } else {
                // 0x52be31
                memmove((int64_t *)v8, (int64_t *)v7, (int32_t)v5);
                v4 = v8;
            }
        }
    }
    // 0x52be40
    if (a4 == 0) {
        // 0x52be5d
        *v1 = v3;
        *(char *)(v4 + v3) = 0;
        return result;
    }
    int64_t v9 = v4 + a2; // 0x52be45
    if (a4 == 1) {
        // 0x52be78
        *(char *)v9 = (char)a5;
    } else {
        // 0x52be4e
        memset((void *)(int64_t)((int64_t *)v9), 0x1000000 * (int32_t)a5 >> 24, (int32_t)a4);
    }
    // 0x52be5d
    *v1 = v3;
    *(char *)(v9 + v3) = 0;
    return result;
}

// Address range: 0x52cc60 - 0x52cd57
int64_t function_52cc60(int64_t a1, int64_t a2) {
    // 0x52cc60
    if (a1 == a2) {
        // 0x52cca8
        int64_t result; // 0x52cc60
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x52cc7b
    *(int64_t *)a1 = a2;
    *(int64_t *)a2 = a1;
    int64_t * v2 = (int64_t *)(a2 + 16); // 0x52cc87
    *v1 = *v2;
    *v2 = *v1;
    int64_t * v3 = (int64_t *)(a2 + 8); // 0x52cc93
    int64_t result2 = *v3; // 0x52cc93
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x52cc97
    *v4 = result2;
    *v3 = *v4;
    return result2;
}

// Address range: 0x54a8d0 - 0x54a9c7
int64_t function_54a8d0(int64_t result, int64_t a2, int64_t a3, uint64_t n2, int64_t a5) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x54a8db
    int64_t v2 = *v1; // 0x54a8db
    if (a3 + 0x1fffffffffffffff - v2 < n2) {
        // 0x54a9ae
        return function_542590("basic_string::_M_replace_aux");
    }
    uint64_t v3 = v2 + n2 - a3; // 0x54a90b
    int64_t v4; // 0x54a8d0
    if (*(int64_t *)(result + 16) < v3) {
        // 0x54a990
        function_549e80(result, a2);
        v4 = result;
    } else {
        int64_t n = v2 - a2 - a3; // 0x54a927
        v4 = result;
        if (n2 != a3 && n != 0) {
            int64_t v5 = 4 * a2 + result; // 0x54a931
            int64_t wstr2 = v5 + 4 * a3; // 0x54a939
            int64_t wstr = 4 * n2 + v5; // 0x54a93d
            if (n == 1) {
                // 0x54a9a8
                *(int32_t *)wstr = *(int32_t *)wstr2;
                v4 = result;
            } else {
                // 0x54a943
                wmemmove((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
                v4 = wstr;
            }
        }
    }
    // 0x54a950
    if (n2 == 0) {
        // 0x54a96d
        *v1 = v3;
        *(int32_t *)(v4 + 4 * v3) = 0;
        return result;
    }
    int64_t v6 = v4 + 4 * a2; // 0x54a959
    int32_t wc = a5;
    int32_t * wstr3 = (int32_t *)v6;
    int64_t v7; // 0x54a8d0
    if (n2 == 1) {
        // 0x54a988
        *wstr3 = wc;
        v7 = v4;
    } else {
        // 0x54a95f
        wmemset(wstr3, wc, (int32_t)n2);
        v7 = v6;
    }
    // 0x54a96d
    *v1 = v3;
    *(int32_t *)(v7 + 4 * v3) = 0;
    return result;
}
