/*
 * Targeted RetDec C for native executable gap queue batch 19.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x54e8a0-0x54e9b8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x565070-0x565188 rank=- name=- kind=- bytes=- uncovered=-
 *   0x490294-0x4903ab rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ef000-0x4ef117 rank=- name=- kind=- bytes=- uncovered=-
 *   0x463a6-0x464bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e554-0x4e66a rank=- name=- kind=- bytes=- uncovered=-
 *   0x5b0cc-0x5b1e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a3e94-0x1a3fa9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5f302-0x5f416 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1060ab-0x1061bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a9410-0x4a9524 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6ad18-0x6ae2b rank=- name=- kind=- bytes=- uncovered=-
 *   0x54dc8-0x54eda rank=- name=- kind=- bytes=- uncovered=-
 *   0x4308a-0x4319b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a47d0-0x4a48e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f2d50-0x4f2e60 rank=- name=- kind=- bytes=- uncovered=-
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
#ifndef EAC_RETDEC_CPUID_REGS_DEFINED
#define EAC_RETDEC_CPUID_REGS_DEFINED 1
struct eac_retdec_cpuid_regs { uint32_t e0; uint32_t e1; uint32_t e2; uint32_t e3; };
#endif
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

int64_t function_1060ab();
int64_t function_1a3e94();
int64_t function_200c0();
int64_t function_20210();
int64_t function_203b0();
int64_t function_20480();
int64_t function_250b0();
int64_t function_2562c();
int64_t function_25a28();
int64_t function_29cea();
int64_t function_29ef7();
int64_t function_36990();
int64_t function_36b14();
int64_t function_36b3c();
int64_t function_36ff8();
int64_t function_3c99e();
int64_t function_4308a();
int64_t function_45b82();
int64_t function_463a6();
int64_t function_48f9d8();
int64_t function_490294();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49eba0();
int64_t function_4a47d0();
int64_t function_4a8d50();
int64_t function_4a9410();
int64_t function_4b8620();
int64_t function_4c3b10();
int64_t function_4c3b30();
int64_t function_4c40e0();
int64_t function_4c4920();
int64_t function_4ccc30();
int64_t function_4ccd50();
int64_t function_4cd900();
int64_t function_4e554();
int64_t function_4e897();
int64_t function_4ef000();
int64_t function_4ef078();
int64_t function_4ef088();
int64_t function_4ef0b0();
int64_t function_4ef0c0();
int64_t function_4ef0d0();
int64_t function_4efd30();
int64_t function_4f0ae0();
int64_t function_4f0bc0();
int64_t function_4f1ac0();
int64_t function_4f1b30();
int64_t function_4f2ce0();
int64_t function_4f2d50();
int64_t function_5423b0();
int64_t function_542470();
int64_t function_542590();
int64_t function_54dc8();
int64_t function_54dd60();
int64_t function_54e5f0();
int64_t function_54e8a0();
int64_t function_565070();
int64_t function_5659f0();
int64_t function_5b0cc();
int64_t function_5c6d6();
int64_t function_5f302();
int64_t function_6ac9c();
int64_t function_6ad18();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_c57b8();
int64_t function_caf2a();

// Address range: 0x4308a - 0x4319b
int64_t function_4308a(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x43092
    int64_t v2 = 0; // 0x430a5
    int64_t v3; // 0x4308a
    int64_t v4; // 0x4308a
    int32_t * v5; // 0x430ba
    if (a1 != 0) {
        int64_t v6 = *(int64_t *)(a1 + 88); // 0x430ae
        v2 = 0;
        if (v6 == 0) {
            goto lab_0x4317d;
        } else {
            // 0x430ba
            v5 = (int32_t *)(a1 + 20);
            v2 = 0;
            if (*v5 != 2) {
                goto lab_0x4317d;
            } else {
                uint32_t v7 = *(int32_t *)(a1 + 16); // 0x430c0
                v2 = 0;
                if (v7 > (int32_t)&g15) {
                    goto lab_0x4317d;
                } else {
                    int64_t v8 = *(int64_t *)(v6 + 8); // 0x430ce
                    v2 = 0;
                    if (a1 + 22 + v8 < 0x100000000) {
                        // 0x430e1
                        v4 = 0;
                        v3 = 0;
                        if (v7 == 0) {
                            goto lab_0x43108;
                        } else {
                            // 0x430e5
                            *(int64_t *)(a1 + 8) = a1;
                            v2 = 0;
                            if (v8 != v6) {
                                goto lab_0x4317d;
                            } else {
                                // 0x430fe
                                *(int64_t *)a1 = *(int64_t *)(a1 + 80) + v8;
                                v4 = v8 & 0xffffffff;
                                v3 = a1 & 0xffffffff;
                                goto lab_0x43108;
                            }
                        }
                    } else {
                        goto lab_0x4317d;
                    }
                }
            }
        }
    } else {
        goto lab_0x4317d;
    }
  lab_0x4317d:;
    int64_t result = v2; // 0x4318b
    if (v1 != __readfsqword(40)) {
        // 0x4318d
        __stack_chk_fail();
        result = (int64_t)&g16;
    }
    // 0x43192
    return result;
  lab_0x43108:;
    // 0x43108
    int64_t v9; // bp-50, 0x4308a
    __asm_rep_stosb_memset((char *)&v9, 0, 18);
    int64_t v10; // bp-42, 0x4308a
    function_3c99e(&v10, v4);
    int64_t v11; // bp-38, 0x4308a
    int64_t v12 = function_3c99e(&v11, v3); // 0x4314f
    v2 = 0;
    if (v12 == 22) {
        // 0x4316d
        *(int64_t *)a1 = *(int64_t *)(a1 + 80) + 22;
        *v5 = 3;
        v2 = 1;
    }
    goto lab_0x4317d;
}

// Address range: 0x463a6 - 0x464bc
int64_t function_463a6(uint64_t a1, int64_t a2) {
    int64_t v1 = a1;
    uint64_t v2 = a1 % 64; // 0x463bb
    int64_t v3 = a1 + 24; // 0x463c2
    *(char *)(v3 + v2) = -128;
    uint64_t v4 = v2 ^ 63; // 0x463c7
    int32_t v5; // 0x463a6
    int64_t v6; // 0x463a6
    int64_t v7; // 0x463a6
    if (v4 < 8) {
        // 0x463d0
        __asm_rep_stosb_memset((char *)(v2 + 25 + v1), 0, v4);
        function_45b82(a1);
        v5 = v1;
        v6 = 56;
        v7 = 0;
    } else {
        // 0x463a6
        v5 = *(int32_t *)&v1;
        v6 = v4 + 0xfffffff8 & 0xffffffff;
        v7 = v2 + 1;
    }
    // 0x463f5
    __asm_rep_stosb_memset((char *)(v7 + v3), 0, v6);
    int32_t v8 = 8 * v5; // 0x4640c
    *(int32_t *)a1 = v8;
    *(char *)(a1 + 80) = (char)v8;
    *(char *)(a1 + 81) = (char)(v5 / 32);
    *(char *)(a1 + 83) = (char)(v5 / 0x200000);
    uint32_t v9 = *(int32_t *)(a1 + 4); // 0x46422
    *(char *)(a1 + 82) = (char)(v5 / 0x2000);
    *(char *)(a1 + 84) = (char)v9;
    *(char *)(a1 + 85) = (char)(v9 / 256);
    *(char *)(a1 + 86) = (char)(v9 / 0x10000);
    *(char *)(a1 + 87) = (char)(v9 / 0x1000000);
    function_45b82(a1);
    int32_t * v10 = (int32_t *)(a1 + 8); // 0x46446
    *(char *)a2 = (char)*v10;
    *(char *)(a2 + 1) = (char)(*v10 / 256);
    *(char *)(a2 + 2) = (char)*(int16_t *)(a1 + 10);
    *(char *)(a2 + 3) = *(char *)(a1 + 11);
    int32_t * v11 = (int32_t *)(a1 + 12); // 0x46465
    *(char *)(a2 + 4) = (char)*v11;
    *(char *)(a2 + 5) = (char)(*v11 / 256);
    *(char *)(a2 + 6) = (char)*(int16_t *)(a1 + 14);
    *(char *)(a2 + 7) = *(char *)(a1 + 15);
    int32_t * v12 = (int32_t *)(a1 + 16); // 0x4647f
    *(char *)(a2 + 8) = (char)*v12;
    *(char *)(a2 + 9) = (char)(*v12 / 256);
    *(char *)(a2 + 10) = (char)*(int16_t *)(a1 + 18);
    *(char *)(a2 + 11) = *(char *)(a1 + 19);
    int32_t * v13 = (int32_t *)(a1 + 20); // 0x46499
    *(char *)(a2 + 12) = (char)*v13;
    *(char *)(a2 + 13) = (char)(*v13 / 256);
    *(char *)(a2 + 14) = (char)*(int16_t *)(a1 + 22);
    *(char *)(a2 + 15) = *(char *)(a1 + 23);
    __asm_rep_stosd_memset((char *)a1, 0, 38);
    return 0;
}

// Address range: 0x4e554 - 0x4e66a
int64_t function_4e554(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 72; // 0x4e572
    int64_t v2 = __readfsqword(40); // 0x4e581
    function_729b6();
    int64_t v3 = a2; // bp-80, 0x4e596
    int64_t v4 = *(int64_t *)(a1 + 80);
    int64_t v5 = v1; // 0x4e5ac
    int64_t v6; // 0x4e554
    int64_t v7; // 0x4e554
    if (v4 == 0) {
        goto lab_0x4e5d7;
    } else {
        v5 = v4;
        int64_t v8 = v5 + 32;
        int64_t v9 = function_4e897(&v3, v8); // 0x4e5b6
        int64_t v10 = *(int64_t *)(((char)v9 == 0 ? 24 : 16) + v5);
        while (v10 != 0) {
            // 0x4e5ae
            v5 = v10;
            v8 = v5 + 32;
            v9 = function_4e897(&v3, v8);
            v10 = *(int64_t *)(((char)v9 == 0 ? 24 : 16) + v5);
        }
        // 0x4e5d3
        v6 = v8;
        v7 = v5;
        if ((char)v9 == 0) {
            goto lab_0x4e5ea;
        } else {
            goto lab_0x4e5d7;
        }
    }
  lab_0x4e5d7:;
    int64_t v11 = v5; // 0x4e5db
    if (*(int64_t *)(a1 + 88) == v5) {
        goto lab_0x4e5fc;
    } else {
        // 0x4e5dd
        v6 = function_4f0ae0(v5) + 32;
        v7 = v5;
        goto lab_0x4e5ea;
    }
  lab_0x4e5fc:
    // 0x4e5fc
    if (v1 != v11) {
        // 0x4e604
        function_4e897(&v3, v11 + 32);
    }
    int64_t v12 = function_4efd30(48); // 0x4e61a
    __asm_movups_133(*(int128_t *)(v12 + 32), __asm_movups((int128_t)v3));
    function_4f0bc0();
    int64_t * v13 = (int64_t *)(a1 + 104); // 0x4e63a
    *v13 = *v13 + 1;
    goto lab_0x4e63e;
  lab_0x4e5ea:;
    int64_t v15 = function_4e897((int64_t *)v6, (int64_t)&v3); // 0x4e5f3
    v11 = v7;
    if ((char)v15 == 0) {
        goto lab_0x4e63e;
    } else {
        goto lab_0x4e5fc;
    }
  lab_0x4e63e:;
    // 0x4e63e
    int64_t v14; // bp-88, 0x4e554
    function_729ce(&v14);
    int64_t result = 0; // 0x4e654
    if (v2 != __readfsqword(40)) {
        // 0x4e656
        __stack_chk_fail();
        result = (int64_t)&g16;
    }
    // 0x4e65b
    return result;
}

// Address range: 0x54dc8 - 0x54eda
int64_t function_54dc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x54dc8
    *(int64_t *)a1 = (int64_t)&g4;
    *(int64_t *)(a1 + 8) = (int64_t)&g9;
    if (a2 == 0) {
        // 0x54ec7
        function_542470("basic_string::_S_construct null not valid");
        return (int64_t)&g1;
    }
    int64_t v1 = -1; // 0x54e00
    int64_t v2 = a2; // 0x54e00
    int64_t v3 = 0; // 0x54e00
    while (v1 != 0) {
        int64_t v4 = v2;
        v1--;
        bool v5; // 0x54dc8
        v2 = v4 + (v5 ? -1 : 1);
        v3 = v1;
        if (*(char *)v4 == 0) {
            // break -> 
            break;
        }
        v3 = 0;
    }
    int64_t v6 = -2 - v3; // 0x54e0e
    if (v6 == 0) {
        // 0x54e67
        *(int64_t *)(a1 + 16) = (int64_t)&g9;
        return function_20480(a1 + 24);
    }
    int64_t v7; // 0x54dc8
    int64_t v8; // 0x54dc8
    int64_t v9; // 0x54dc8
    if (v6 < 0x3ffffffffffffffa) {
        // 0x54e15
        v7 = 55 - v3;
        if (-v3 < 0xffffffffffffffc9) {
            goto lab_0x54e99;
        } else {
            // 0x54e29
            v8 = v6;
            v9 = 23 - v3;
            goto lab_0x54e30;
        }
    } else {
        // 0x54e8d
        v7 = function_542590("basic_string::_S_create");
        goto lab_0x54e99;
    }
  lab_0x54e99:;
    uint64_t v10 = (int64_t)&g14 - 1 - v3 - (v7 & (int64_t)(int32_t)&g14); // 0x54ea5
    int64_t v11 = v10 < 0x3ffffffffffffff9 ? v10 : 0x3ffffffffffffff9; // 0x54eab
    v8 = v11;
    v9 = v11 + 25;
    goto lab_0x54e30;
  lab_0x54e30:;
    int64_t v12 = function_4efd30(v9); // 0x54e35
    *(int64_t *)(v12 + 8) = v8;
    *(int32_t *)(v12 + 16) = 0;
    int64_t v13 = v12 + 24; // 0x54e49
    if (v6 != 1) {
        // 0x54ebd
        __asm_rep_movsb_memcpy((char *)v13, (char *)a2, v6);
    } else {
        // 0x54e54
        *(char *)v13 = (char)a2;
    }
    // 0x54e59
    if (v12 != (int64_t)&g8) {
        // 0x54e5e
        *(int64_t *)v12 = v6;
        *(char *)(v13 + v6) = 0;
    }
    // 0x54e67
    *(int64_t *)(a1 + 16) = v13;
    return function_20480(a1 + 24);
}

// Address range: 0x5b0cc - 0x5b1e1
int64_t function_5b0cc(int64_t result, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x5b0cc
    function_36b3c();
    int64_t v1 = *(int64_t *)(result - 24); // 0x5b100
    int64_t v2 = result; // 0x5b10a
    if (0xffffffffffffffe - v1 < a4) {
        // 0x5b10c
        function_542590("basic_string::insert");
        v2 = (int64_t)"basic_string::insert";
    }
    // 0x5b118
    if (v2 <= a3) {
        if (v2 + 4 * v1 >= a3) {
            int64_t v3 = v2 - 24; // 0x5b152
            if ((char)function_29cea(v3) == 0) {
                int64_t v4 = a3 - v3; // 0x5b15f
                int64_t v5 = 4 * a4; // 0x5b16e
                function_36ff8(result, a2, 0, a4);
                int64_t v6 = 4 * a2; // 0x5b17f
                int64_t v7 = v4 + result; // 0x5b18a
                int64_t v8 = v6 + result; // 0x5b18e
                int64_t v9 = v7 + v5; // 0x5b191
                int64_t v10 = a4; // 0x5b198
                int64_t v11 = v7; // 0x5b198
                int64_t v12 = v8; // 0x5b198
                if (v8 < v9) {
                    // 0x5b19a
                    v10 = a4;
                    v11 = v9;
                    v12 = v8;
                    if (v7 < v8) {
                        int64_t v13 = v6 - v4; // 0x5b1a7
                        int64_t v14 = v13 >> 2; // 0x5b1b3
                        function_29ef7(v8, v7, v14);
                        v10 = a4 - v14;
                        v11 = v5 + v8;
                        v12 = v13 + v8;
                    }
                }
                // 0x5b1cd
                function_29ef7(v12, v11, v10);
                // 0x5b1d2
                return result;
            }
        }
    }
    // 0x5b11d
    function_36ff8(result, a2, 0, a4);
    if (a4 == 0) {
        // 0x5b1d2
        return result;
    }
    // 0x5b1cd
    function_29ef7(4 * a2 + result, a3, a4);
    // 0x5b1d2
    return result;
}

// Address range: 0x5f302 - 0x5f416
int64_t function_5f302(int64_t a1, int64_t a2) {
    int64_t v1 = function_5c6d6(a2 - 24); // 0x5f31d
    int64_t * v2 = (int64_t *)(a2 + 16); // 0x5f322
    int64_t * v3 = (int64_t *)(a2 + 8); // 0x5f326
    int64_t v4 = *v2 - *v3; // 0x5f326
    *(int64_t *)a1 = v1;
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x5f338
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x5f340
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x5f348
    *v7 = 0;
    uint64_t v8 = -0x5555555555555555 * (v4 >> 3); // 0x5f357
    int64_t v9 = 0; // 0x5f35e
    if (v8 != 0) {
        if (v8 >= 0xaaaaaaaaaaaaaab) {
            // 0x5f36f
            function_5423b0();
        }
        // 0x5f374
        v9 = function_4efd30(v4);
    }
    // 0x5f384
    *v5 = v9;
    *v6 = v9;
    *v7 = v9 + v4;
    int64_t v10 = *v3; // 0x5f393
    int64_t v11 = *v2; // 0x5f39a
    int64_t v12 = v9; // 0x5f3a4
    int64_t result; // 0x5f302
    if (v11 == v10) {
        // 0x5f3da
        *v6 = 24 * (0xaaaaaaaaaaaaaab * (v11 - v10) / 8 & 0x1fffffffffffffff) + v9;
        return result;
    }
    int64_t v13 = v10 + 24; // 0x5f3ae
    *(int64_t *)v12 = function_5c6d6(*(int64_t *)v10 - 24);
    *(int64_t *)(v12 + 8) = function_5c6d6(*(int64_t *)(v10 + 8) - 24);
    *(int32_t *)(v12 + 16) = *(int32_t *)(v10 + 16);
    v12 += 24;
    while (v11 != v13) {
        int64_t v14 = v13;
        v13 = v14 + 24;
        *(int64_t *)v12 = function_5c6d6(*(int64_t *)v14 - 24);
        *(int64_t *)(v12 + 8) = function_5c6d6(*(int64_t *)(v14 + 8) - 24);
        *(int32_t *)(v12 + 16) = *(int32_t *)(v14 + 16);
        v12 += 24;
    }
    // 0x5f3da
    *v6 = 24 * (0xaaaaaaaaaaaaaab * (v11 - v10) / 8 & 0x1fffffffffffffff) + v9;
    return result;
}

// Address range: 0x6ad18 - 0x6ae2b
int64_t function_6ad18(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x6ad2c
    int64_t v2 = 0; // 0x6ad4d
    int64_t v3 = 0; // 0x6ad4d
    if (a2 != 0 && a3 != 0) {
        uint32_t v4 = (int32_t)function_4c4920(a1 + 328) - 1; // 0x6ad65
        int64_t v5 = v4; // 0x6ad65
        v2 = v5;
        v3 = 0;
        if (v4 == 0) {
            int64_t v6 = *(int64_t *)(a1 + 336); // 0x6ad6d
            v2 = v5;
            v3 = 0;
            if (v6 != 0) {
                // 0x6ad7d
                int64_t str; // bp-96, 0x6ad18
                __asm_rep_stosd_memset((char *)&str, 0, 8);
                int64_t v7; // bp-204, 0x6ad18
                function_4ccc30(&v7);
                function_4ccd50(&v7, 0);
                if ((char)function_6ac9c(v6 + 40, &v7) == 0) {
                    // 0x6adc9
                    v2 = function_4cd900(&v7, &str);
                    v3 = 0;
                } else {
                    uint64_t v8 = function_6ac9c(v6 + 16, &v7); // 0x6adc2
                    int64_t v9 = function_4cd900(&v7, &str); // 0x6adcf
                    int64_t v10 = 0; // 0x6add6
                    v2 = v9;
                    v3 = 0;
                    if ((char)v8 != 0) {
                        int32_t memcmp_rc = memcmp(&str, (int64_t *)(32 * v10 + a2), 32); // 0x6adec
                        v2 = 0;
                        v3 = v8 % 256;
                        while (memcmp_rc != 0) {
                            int64_t v11 = v10 + 1; // 0x6adf5
                            v10 = v11;
                            if (v11 == a3) {
                                // 0x6adff
                                v2 = memcmp_rc;
                                v3 = 0;
                                goto lab_0x6adff_2;
                            }
                            memcmp_rc = memcmp(&str, (int64_t *)(32 * v10 + a2), 32);
                            v2 = 0;
                            v3 = v8 % 256;
                        }
                    }
                }
            }
        }
    }
    goto lab_0x6adff_2;
  lab_0x6adff_2:;
    int64_t result = v3 | v2 & -256; // 0x6ae12
    if (v1 != __readfsqword(40)) {
        // 0x6ae14
        __stack_chk_fail();
        result = (int64_t)&g16;
    }
    // 0x6ae19
    return result;
}

// Address range: 0x1060ab - 0x1061bf
int64_t function_1060ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1060ab
    int64_t v1; // 0x1060ab
    int64_t v2 = v1;
    bool v3; // 0x1060ab
    *(char *)v2 = 2 * (char)v2 | (char)v3;
    int64_t v4; // 0x1060ab
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    int64_t v6 = v4;
    *(char *)v6 = *(char *)&v4 + (char)v6;
    return function_caf2a();
}

// Address range: 0x1a3e94 - 0x1a3fa9
int64_t function_1a3e94(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    uint32_t v2 = *(int32_t *)(a3 + 52); // 0x1a3e94
    int64_t v3; // 0x1a3e94
    *(char *)a2 = (char)(v3 & v3);
    int64_t v4 = v1;
    int64_t v5 = (int64_t)&v1; // 0x1a3ece
    v1 = v5;
    int64_t v6 = v5 - 8; // 0x1a3ee5
    int64_t * v7 = (int64_t *)v6; // 0x1a3ee6
    int64_t * v8 = (int64_t *)(v5 - 16); // 0x1a3ef2
    int64_t v9 = v5 - 24; // 0x1a3ef6
    int64_t * v10 = (int64_t *)v9; // 0x1a3ef6
    int64_t v11 = *(int64_t *)(v5 + 24); // 0x1a3f06
    *v8 = v11;
    *v10 = v11;
    int64_t * v12 = (int64_t *)(v5 - 32); // 0x1a3f0d
    *v12 = v11;
    int64_t * v13 = (int64_t *)(v5 + 8); // 0x1a3f1c
    int64_t v14 = *v13; // 0x1a3f1c
    *v8 = v14;
    *v10 = v14;
    *v12 = v9;
    *v7 = v11;
    *v10 = 0x28b3aa23;
    *v12 = 0x6af9e80d;
    int64_t * v15 = (int64_t *)(v5 - 40); // 0x1a3f5d
    *v15 = *v10;
    *v13 = *v10;
    int64_t v16 = *v8; // 0x1a3f67
    *v10 = v16;
    *v12 = v16;
    *v8 = *v7;
    *v10 = a5;
    *v12 = v6;
    *v15 = *v10;
    return function_c57b8(v4, v4, (v3 & 0xffffffff | 0x100000000 * a3) % (int64_t)v2 & 0xffffffff);
}

// Address range: 0x490294 - 0x4903ab
int64_t function_490294(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x4902b2
    int64_t v2 = function_36990(); // 0x4902c6
    if (v2 == -1) {
        // 0x490372
        int64_t v3; // bp-49, 0x490294
        function_250b0(a1, &g2, &v3);
    } else {
        uint64_t v4 = v2 - a4; // 0x4902dc
        int64_t v5 = function_36b14(a2, a4, "basic_string::substr"); // 0x4902e8
        uint64_t v6 = *(int64_t *)(a4 - 24) - v5; // 0x490302
        int64_t v7 = (v6 > v4 ? v4 : v6) + v5; // 0x49030c
        int64_t v8 = function_36b14(a2, v5, "basic_string::basic_string"); // 0x490314
        int64_t v9 = v8 + a4; // 0x490319
        int64_t v10 = (int64_t)&g9; // 0x49031f
        if (v7 + a4 != v9) {
            if (v9 == 0) {
                // 0x490355
                function_542470("basic_string::_S_construct null not valid");
                v10 = (int64_t)&g9;
            } else {
                int64_t v11 = v7 - v8; // 0x490326
                int64_t v12 = function_48f9d8(v11, 0); // 0x49032e
                int64_t v13 = v12 + 24; // 0x490333
                function_25a28(v13, v9, v11);
                function_2562c(v12, v11);
                v10 = v13;
            }
        }
        // 0x49036c
        *(int64_t *)a1 = v10;
    }
    int64_t result = a1; // 0x490397
    if (v1 != __readfsqword(40)) {
        // 0x490399
        __stack_chk_fail();
        result = (int64_t)&g16;
    }
    // 0x49039e
    return result;
}

// Address range: 0x4a47d0 - 0x4a48de
int64_t function_4a47d0(int64_t a1, int64_t a2, uint64_t a3) {
    uint64_t v1 = a2 + 2; // 0x4a47f1
    int64_t result; // 0x4a47d0
    if (v1 > a3) {
        // 0x4a485e
        return result;
    }
    int64_t * v2 = (int64_t *)a2; // 0x4a4805
    *v2 = v1;
    int64_t v3 = 256 * a2 & 0xff00 | (int64_t)*(char *)(a2 + 1); // 0x4a480b
    uint64_t v4 = v3 + v1;
    if (v4 > a3) {
        // 0x4a4880
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g12, "bad client key exchange message");
        // 0x4a485e
        return 0xffff8400;
    }
    int64_t * v5 = (int64_t *)(a1 + 96); // 0x4a4819
    int64_t v6 = function_4b8620(*v5 + 8, v1, v3, v1); // 0x4a4827
    int64_t v7 = v6 & 0xffffffff;
    if ((int32_t)v6 != 0) {
        // 0x4a48b0
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", "\bP", "mbedtls_dhm_read_public", v7);
        result = 0xffff8380;
    } else {
        // 0x4a4833
        *v2 = v4;
        function_49eba0(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g13, "DHM: GY", *v5 + 112);
        result = v7;
    }
    // 0x4a485e
    return result;
}

// Address range: 0x4a9410 - 0x4a951f
int64_t function_4a9410(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4a9410
    if (a1 == 0 || a2 == 0) {
        // 0x4a9452
        return 0xffffd800;
    }
    int64_t v1 = 0;
    int64_t v2 = a2;
    int64_t v3 = a3;
    int64_t v4; // bp-72, 0x4a9410
    function_4c3b10(&v4);
    int64_t v5 = v3; // 0x4a9445
    int64_t v6 = v2; // 0x4a9445
    int64_t v7 = v1; // 0x4a9445
    while (v3 != 0) {
        // 0x4a9460
        int64_t v8; // 0x4a9410
        int64_t v9; // 0x4a9410
        int64_t v10; // 0x4a9410
        int64_t v11; // 0x4a9410
        if (*(char *)(v3 - 1 + v2) == 0) {
            // 0x4a9480
            int64_t v12; // bp-80, 0x4a9410
            int64_t v13 = function_4c3b30(&v4, "-----BEGIN X509 CRL-----", "-----END X509 CRL-----", v2, 0, 0, &v12); // 0x4a94a5
            int64_t result = v13; // 0x4a94ac
            if ((int32_t)v13 != 0) {
                // 0x4a9452
                return result;
            }
            // 0x4a94ae
            int64_t v14; // 0x4a9410
            int64_t v15 = function_4a8d50(a1, v4, v14); // 0x4a94c6
            result = v15;
            if ((int32_t)v15 != 0) {
                // 0x4a9452
                return result;
            }
            // 0x4a94cf
            function_4c40e0(&v4);
            v10 = v3 - v12;
            v9 = v12 + v2;
            v8 = 1;
            v11 = 1;
        } else {
            // 0x4a9467
            v10 = v3;
            v9 = v2;
            v8 = v1;
            v11 = v1 & 0xffffffff;
        }
        // 0x4a946a
        v5 = v10;
        v6 = v9;
        v7 = v8;
        if (v10 < 2) {
            // break -> 0x4a9447
            break;
        }
        // 0x4a9470
        v5 = v10;
        v6 = v9;
        v7 = v8;
        if ((char)v11 == 0) {
            // break -> 0x4a9447
            break;
        }
        v1 = v8;
        v2 = v9;
        v3 = v10;
        function_4c3b10(&v4);
        v5 = v3;
        v6 = v2;
        v7 = v1;
    }
    // 0x4a9447
    if ((int32_t)v7 == 0) {
        // 0x4a94f0
        return function_4a8d50(a1, v6, v5);
    }
    // 0x4a9452
    return 0;
}

// Address range: 0x4ef000 - 0x4ef073
int64_t function_4ef000(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4ef000
    if ((char)a1 == 80) {
        int64_t v1 = a3 + 7 & -8; // 0x4ef064
        *(int64_t *)a4 = *(int64_t *)v1;
        return v1 + 8;
    }
    uint64_t v2 = a1 % 16; // 0x4ef00b
    if ((char)v2 >= 13) {
        // 0x4ef133
        int64_t result; // 0x4ef000
        return result;
    }
    int32_t v3 = *(int32_t *)(4 * v2 + (int64_t)&g3); // 0x4ef021
    return (int64_t)v3 + (int64_t)&g3;
}

// Address range: 0x4ef078 - 0x4ef082
int64_t function_4ef078(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ef078
    return a3 + 2;
}

// Address range: 0x4ef088 - 0x4ef0b0
int64_t function_4ef088(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = a3; // 0x4ef08e
    while (*(char *)result < 0) {
        // 0x4ef090
        result++;
    }
    // 0x4ef0ae
    return result;
}

// Address range: 0x4ef0b0 - 0x4ef0bd
int64_t function_4ef0b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ef0b0
    return a3 + 2;
}

// Address range: 0x4ef0c0 - 0x4ef0cc
int64_t function_4ef0c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ef0c0
    return a3 + 4;
}

// Address range: 0x4ef0d0 - 0x4ef0dc
int64_t function_4ef0d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ef0d0
    return a3 + 4;
}

// Address range: 0x4f2d50 - 0x4f2e5f
int64_t function_4f2d50(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x4f2d54
    *v1 = 0;
    function_4f2ce0();
    int32_t * v2 = (void *)(int64_t)g10; // 0x4f2d71
    int64_t result = (int64_t)v2; // 0x4f2d71
    *v1 = result;
    if (g11 == result) {
        // 0x4f2dd0
        *v2 = *v2 + 1;
        return result;
    }
    int64_t v3 = function_4f1ac0(); // 0x4f2d7d
    if (g6 == 0) {
        int32_t * v4 = (void *)(int64_t)g10; // 0x4f2dc0
        int64_t result2 = (int64_t)v4; // 0x4f2dc0
        *v4 = *v4 + 1;
        *v1 = result2;
        return result2;
    }
    int64_t * mutex = (int64_t *)v3; // 0x4f2d92
    bool v5; // 0x4f2d50
    int64_t v6; // 0x4f2d50
    if (pthread_mutex_lock(mutex) != 0) {
        int64_t v7 = function_4f1b30(); // 0x4f2df0
        v5 = (int64_t)&g11 == -1;
        v6 = v7;
        goto lab_0x4f2df5;
    } else {
        int32_t * v8 = (void *)(int64_t)g10; // 0x4f2d9b
        *v8 = *v8 + 1;
        *v1 = (int64_t)g10;
        int32_t result3 = pthread_mutex_unlock(mutex); // 0x4f2dad
        if (result3 == 0) {
            // 0x4f2db6
            return result3;
        }
        goto lab_0x4f2e03;
    }
  lab_0x4f2df5:;
    int64_t v9 = v6;
    if (v5) {
        // 0x4f2e33
        function_200c0(v9);
        function_4f2ce0();
        return function_5659f0(&g7, g11);
    }
    // 0x4f2dfe
    _Unwind_Resume((struct _Unwind_Exception *)v9);
    goto lab_0x4f2e03;
  lab_0x4f2e03:;
    int64_t v10 = function_20210(8); // 0x4f2e08
    *(int64_t *)v10 = (int64_t)&g5;
    v5 = false;
    v6 = function_203b0(v10, 0x843278, 0x4f1a60);
    goto lab_0x4f2df5;
}

// Address range: 0x54e8a0 - 0x54e9b8
// From class:    std::__codecvt_utf16_base<char16_t>
// Type:          virtual member function
int64_t function_54e8a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x54e8b7
    __readfsqword(40);
    int64_t v2 = a3; // bp-88, 0x54e8d8
    int32_t v3 = *(int32_t *)(a1 + 24); // bp-92, 0x54e8f2
    function_54e5f0(&v2, (int64_t *)&v3);
    int64_t v4 = v2; // 0x54e907
    v2 = v4;
    int64_t v5 = a6; // 0x54e91c
    if (a4 - v4 < 2) {
      lab_0x54e980:
        // 0x54e980
        *(int64_t *)a5 = v2;
        *(int64_t *)a8 = v5;
        // 0x54e990
        __readfsqword(40);
        return 2 * (int64_t)(v2 != a4);
    }
    // 0x54e91e
    if (a6 == a7) {
        // 0x54e9b0
        *(int64_t *)a5 = v4;
        return 1;
    }
    int64_t v6 = (int32_t)v1 >= (int32_t)&g15 ? (int64_t)(int32_t)&g15 : v1 & 0xffffffff; // 0x54e90c
    int64_t v7 = a6;
    int64_t v8 = function_54dd60(&v2, v6, (int64_t)v3); // 0x54e960
    while ((int32_t)v8 != -2 && (int32_t)v6 >= (int32_t)v8) {
        int64_t v9 = v7 + 2; // 0x54e935
        *(int16_t *)v7 = (int16_t)v8;
        v5 = v9;
        if (a4 - v2 < 2) {
            goto lab_0x54e980;
        }
        // 0x54e951
        if (v9 == a7) {
            // 0x54e9b0
            *(int64_t *)a5 = v2;
            return 1;
        }
        v7 = v9;
        v8 = function_54dd60(&v2, v6, (int64_t)v3);
    }
    // 0x54e96a
    *(int64_t *)a5 = v2;
    *(int64_t *)a8 = v7;
    // 0x54e990
    __readfsqword(40);
    return 2;
}

// Address range: 0x565070 - 0x565188
int64_t function_565070(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x565081
    int64_t str2 = *(int64_t *)(a4 + 8); // 0x565085
    int64_t v2 = a3; // 0x565096
    int64_t result; // 0x565070
    char * str; // 0x56509b
    char v3; // 0x56509b
    if (v1 == str2) {
        goto lab_0x565110;
    } else {
        // 0x565098
        str = (char *)v1;
        v3 = *str;
        if (v3 == 42) {
            goto lab_0x5650d7;
        } else {
            int32_t strcmp_rc = strcmp(str, (char *)str2); // 0x5650bb
            result = strcmp_rc;
            v2 = a3 & 0xffffffff;
            if (strcmp_rc == 0) {
                goto lab_0x565110;
            } else {
                goto lab_0x5650d7;
            }
        }
    }
  lab_0x565110:
    // 0x565110
    *(int64_t *)a8 = a5;
    *(int32_t *)(a8 + 8) = (int32_t)v2;
    if (a2 >= 0) {
        int32_t v4 = a5 + a2 == a7 ? 2 : 1; // 0x565127
        *(int32_t *)(a8 + 16) = 4 * (int32_t)(a5 + a2 == a7) | v4;
        // 0x56512e
        return 0;
    }
    // 0x565140
    if (a2 == -2) {
        // 0x565146
        *(int32_t *)(a8 + 16) = 1;
    }
    // 0x56512e
    return 0;
  lab_0x5650d7:
    if (a5 != a7) {
        // 0x5650dc
        return *(int64_t *)(*(int64_t *)*(int64_t *)(a1 + 16) + 56);
    }
    int64_t str3 = *(int64_t *)(a6 + 8); // 0x565150
    if (v1 == str3) {
        // 0x56512e
        return result;
    }
    if (v3 == 42) {
        // 0x5650dc
        return *(int64_t *)(*(int64_t *)*(int64_t *)(a1 + 16) + 56);
    }
    // 0x565162
    return strcmp(str, (char *)str3);
}
