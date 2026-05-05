/*
 * Targeted RetDec C for native executable gap queue batch 11.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x40adf-0x40c3e rank=- name=- kind=- bytes=- uncovered=-
 *   0x67060-0x671bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c0830-0x4c098f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4feb80-0x4fecdf rank=- name=- kind=- bytes=- uncovered=-
 *   0x5a828-0x5a984 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48f642-0x48f79d rank=- name=- kind=- bytes=- uncovered=-
 *   0x53c4b0-0x53c60b rank=- name=- kind=- bytes=- uncovered=-
 *   0x307d0-0x30929 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33b1f2-0x33b34b rank=- name=- kind=- bytes=- uncovered=-
 *   0x52b400-0x52b558 rank=- name=- kind=- bytes=- uncovered=-
 *   0x577f00-0x578058 rank=- name=- kind=- bytes=- uncovered=-
 *   0x578090-0x5781e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a9de-0x2ab35 rank=- name=- kind=- bytes=- uncovered=-
 *   0x495a4-0x496fb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f0b6-0x4f20d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c0990-0x4c0ae6 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g33;
extern int g34;
extern int g35;
extern int g36;
extern int g37;
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

int64_t function_1078ec();
int64_t function_169dd7();
int64_t function_21a2d();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_25856();
int64_t function_25e67();
int64_t function_2601b();
int64_t function_29c3a();
int64_t function_29cea();
int64_t function_29ef7();
int64_t function_2a56d();
int64_t function_2a9de();
int64_t function_2aa00();
int64_t function_2aa4d();
int64_t function_2ab0f();
int64_t function_307d0();
int64_t function_30801();
int64_t function_30811();
int64_t function_308db();
int64_t function_308f5();
int64_t function_33b1f2();
int64_t function_35ef6();
int64_t function_360a0();
int64_t function_36b3c();
int64_t function_36ff8();
int64_t function_40adf();
int64_t function_48e0de();
int64_t function_48f582();
int64_t function_48f642();
int64_t function_4918e();
int64_t function_4931c();
int64_t function_495a4();
int64_t function_4a336();
int64_t function_4a368();
int64_t function_4b5070();
int64_t function_4c00c0();
int64_t function_4c0830();
int64_t function_4c0990();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0ad0();
int64_t function_4f0b6();
int64_t function_4f1590();
int64_t function_4f2d50();
int64_t function_4feb80();
int64_t function_50ab00();
int64_t function_52b020();
int64_t function_52b400();
int64_t function_539b70();
int64_t function_53af80();
int64_t function_53c4b0();
int64_t function_542590();
int64_t function_547e30();
int64_t function_5509d0();
int64_t function_555410();
int64_t function_556930();
int64_t function_577f00();
int64_t function_578090();
int64_t function_5a828();
int64_t function_5b020();
int64_t function_61562();
int64_t function_66c36();
int64_t function_66c42();
int64_t function_66c4f();
int64_t function_67060();
int64_t function_c4258();

// Address range: 0x2a9de - 0x2aa00
int64_t function_2a9de(int64_t a1, int64_t a2) {
    // 0x2a9de
    return function_61562(function_2a56d(), a1, a2);
}

// Address range: 0x2aa00 - 0x2aa2f
int64_t function_2aa00(void) {
    // 0x2aa00
    __readfsqword(40);
    return function_1078ec();
}

// Address range: 0x2aa4d - 0x2aa50
int64_t function_2aa4d(int64_t a1) {
    // 0x2aa4d
    int64_t result; // 0x2aa4d
    return result;
}

// Address range: 0x2ab0f - 0x2ab12
int64_t function_2ab0f(void) {
    // 0x2ab0f
    int64_t result; // 0x2ab0f
    return result;
}

// Address range: 0x307d0 - 0x307fe
int64_t function_307d0(int64_t a1) {
    // 0x307d0
    __readfsqword(40);
    return function_169dd7();
}

// Address range: 0x30801 - 0x30811
int64_t function_30801(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30801
    int64_t v1; // 0x30801
    uint64_t v2 = v1;
    char v3 = *(char *)(a2 - 0x17b65e8f + 8 * v1); // 0x30807
    bool v4; // 0x30801
    return 256 * (int64_t)((char)v4 - v3 + (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x30811 - 0x30886
int64_t function_30811(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 - 1; // 0x30811
    int64_t result; // 0x30811
    bool v2; // 0x30811
    if (v1 != 0 == v2) {
        // 0x30884
        return result;
    }
    char * v3 = (char *)v1; // 0x3081a
    *v3 = *v3 / 2;
    return result & -256 | (int64_t)__asm_in(32);
}

// Address range: 0x308db - 0x308f5
int64_t function_308db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x308db
    int64_t v1; // 0x308db
    int32_t * v2 = (int32_t *)(v1 - 0x79e06b4e); // 0x308db
    bool v3; // 0x308db
    *v2 = *v2 - (v3 ? -0x4fb345f5 : -0x4fb345f6);
    return v1 & 0xffffffff;
}

// Address range: 0x308f5 - 0x3090d
int64_t function_308f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)0x3444d490f615a2; // 0x308f5
    int64_t v2; // 0x308f5
    *(int32_t *)v2 = 0x11f1150a;
    int64_t v3; // 0x308f5
    *(int32_t *)a1 = *(int32_t *)&v3;
    return (0x100000000 * a3 | (int64_t)v1) / (v2 & 0xffffffff) & 0xffffffff;
}

// Address range: 0x40adf - 0x40c3e
int64_t function_40adf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40adf
    *(int64_t *)a1 = a2;
    *(int64_t *)(a1 + 8) = a3;
    int64_t v1 = a4 & (int64_t)(int32_t)&g36; // 0x40ae8
    int32_t v2 = a4; // 0x40af8
    *(int32_t *)(a1 + 16) = v2;
    *(int32_t *)(a1 + 20) = (int32_t)((v1 | 0x100000000 * (int64_t)((int32_t)v1 >> 31) | 2) / 3) + 1;
    *(int32_t *)(a1 + 28) = v2 / 0x4000 % 2;
    int32_t v3 = v2 >> 2 & (int32_t)&g2; // 0x40b13
    *(int32_t *)(a1 + 24) = (int32_t)((0x100000000 * (int64_t)(v3 >> 31) | (int64_t)(v3 | 2)) / 3) + 1;
    int32_t v4 = v2 & (int32_t)&g21; // 0x40b25
    if (v4 == 0) {
        // 0x40b2c
        __asm_rep_stosd_memset((char *)(a1 + (int64_t)"D$("), v4, (int64_t)"le");
    }
    // 0x40b3d
    *(int32_t *)(a1 + 132) = 0;
    *(int64_t *)(a1 + 80) = 8;
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 48) = a1 + (int64_t)&g35;
    *(int64_t *)(a1 + 96) = 0;
    *(int64_t *)(a1 + 104) = 0;
    *(int64_t *)(a1 + 112) = 0;
    *(int64_t *)(a1 + 56) = a1 + (int64_t)&g34;
    int64_t v5 = a1 + 0x392aa; // 0x40b95
    *(int64_t *)(a1 + 120) = 0;
    *(int32_t *)(a1 + 128) = 0;
    *(int64_t *)(a1 + 32) = 1;
    *(int64_t *)(a1 + (int64_t)&g23 - 0x83ca) = v5;
    *(int64_t *)(a1 + (int64_t)&g23 - 0x83c2) = v5;
    *(int64_t *)(a1 + (int64_t)&g23 - 0x83e2) = 0;
    *(int64_t *)(a1 + (int64_t)&g23 - 0x8382) = 0;
    *(int64_t *)(a1 + (int64_t)&g23 - 0x837a) = 0;
    *(int64_t *)(a1 + (int64_t)&g23 - 0x8372) = 0;
    *(int64_t *)(a1 + (int64_t)&g23 - 0x836a) = 0;
    *(int32_t *)(a1 + (int64_t)&g23 - 0x8362) = 0;
    *(int64_t *)(a1 + (int64_t)&g23 - 0x835a) = 0;
    *(int64_t *)(a1 + (int64_t)&g23 - 0x8352) = 0;
    *(int64_t *)(a1 + (int64_t)&g23 - 0x834a) = 0;
    __asm_rep_stosd_memset((char *)(a1 + (int64_t)&g22), 0, 144);
    __asm_rep_stosd_memset((char *)(a1 + (int64_t)&g23), 0, 16);
    return 0;
}

// Address range: 0x495a4 - 0x496fb
int64_t function_495a4(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + (int64_t)&g9); // 0x495a8
    int64_t v2; // 0x495a4
    if (*v1 != 0) {
        int64_t * v3 = (int64_t *)(a1 + (int64_t)&g7); // 0x495b5
        int64_t v4 = *v3; // 0x495b5
        int64_t v5 = a1 + (int64_t)&g5; // 0x495bc
        if (v5 != v4) {
            int64_t v6 = v4;
            function_4931c(a1, *(int64_t *)(v6 + 32), *(int64_t *)(v6 + 40));
            int64_t v7 = function_4f0ad0(v6); // 0x495db
            while (v5 != v7) {
                // 0x495c8
                v6 = v7;
                function_4931c(a1, *(int64_t *)(v6 + 32), *(int64_t *)(v6 + 40));
                v7 = function_4f0ad0(v6);
            }
        }
        int64_t * v8 = (int64_t *)(a1 + (int64_t)&g6); // 0x495e5
        int64_t v9 = function_4a336(a1 + (int64_t)&g4, *v8); // 0x495f3
        *v8 = 0;
        *v3 = v5;
        *(int64_t *)(a1 + (int64_t)&g8) = v5;
        *v1 = 0;
        v2 = v9;
    }
    int64_t * v10 = (int64_t *)(a1 + (int64_t)&g15); // 0x4961c
    int64_t result = v2; // 0x49624
    if (*v10 != 0) {
        int64_t * v11 = (int64_t *)(a1 + (int64_t)&g13); // 0x49626
        int64_t v12 = *v11; // 0x49626
        int64_t v13 = a1 + (int64_t)&g11; // 0x4962d
        if (v13 != v12) {
            function_4918e(a1, *(int64_t *)(v12 + 32));
            int64_t v14 = function_4f0ad0(v12); // 0x49648
            int64_t v15 = v14; // 0x49637
            while (v13 != v14) {
                // 0x49639
                function_4918e(a1, *(int64_t *)(v15 + 32));
                v14 = function_4f0ad0(v15);
                v15 = v14;
            }
        }
        int64_t * v16 = (int64_t *)(a1 + (int64_t)&g12); // 0x49652
        result = function_4a368(a1 + (int64_t)&g10, *v16);
        *v16 = 0;
        *v11 = v13;
        *(int64_t *)(a1 + (int64_t)&g14) = v13;
        *v10 = 0;
    }
    int64_t * v17 = (int64_t *)(a1 + (int64_t)&g20); // 0x49689
    if (*v17 == 0) {
        // 0x496f6
        return result;
    }
    int64_t * v18 = (int64_t *)(a1 + (int64_t)&g18); // 0x49693
    int64_t v19 = *v18; // 0x49693
    int64_t v20 = v19; // 0x496a4
    int64_t * v21 = (int64_t *)(a1 + (int64_t)&g17); // 0x496bf
    int64_t result2 = function_4a368(a1 + (int64_t)&g16, *v21); // 0x496cd
    *v21 = 0;
    *v18 = v19;
    *(int64_t *)(a1 + (int64_t)&g19) = v19;
    *v17 = 0;
    // 0x496f6
    return result2;
}

// Address range: 0x4f0b6 - 0x4f20d
int64_t function_4f0b6(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4f0d8
    int64_t v2 = 0xfffffffffffffff; // 0x4f100
    int64_t v3; // 0x4f0b6
    int64_t v4; // 0x4f0b6
    int64_t v5; // 0x4f0b6
    if (v2 > 0xfffffffffffffff | v2 < *v1 - a1 >> 4) {
        goto lab_0x4f1f9;
    } else {
        // 0x4f10f
        v3 = v2;
        v4 = a1;
        v5 = 0;
        if (v2 != 0) {
            goto lab_0x4f1f9;
        } else {
            goto lab_0x4f11b;
        }
    }
  lab_0x4f1f9:;
    int64_t v6 = 16 * v2; // 0x4f1fc
    int64_t v7 = function_4efd30(v6); // 0x4f200
    v3 = v2;
    v4 = v6;
    v5 = v7;
    goto lab_0x4f11b;
  lab_0x4f11b:;
    int64_t v8 = v5 + a2 - a1; // 0x4f11e
    int64_t result; // 0x4f0b6
    *(char *)v8 = (char)result;
    int64_t * v9 = (int64_t *)(a3 + 8); // 0x4f12f
    *v9 = (int64_t)&g30;
    *(int64_t *)(v8 + 8) = *v9;
    int64_t v10 = v5; // 0x4f14d
    int64_t v11 = a2; // 0x4f14d
    if (v4 != a2) {
        int64_t v12 = v4 + 16; // 0x4f152
        *(char *)v10 = *(char *)v4;
        int64_t * v13 = (int64_t *)(v4 + 8); // 0x4f15a
        int64_t v14 = *v13; // 0x4f15a
        *(int64_t *)(v10 + 8) = v14;
        *v13 = (int64_t)&g30;
        v10 += 16;
        int64_t v15 = v12; // 0x4f14d
        v11 = v14;
        while (v12 != a2) {
            // 0x4f14f
            v12 = v15 + 16;
            *(char *)v10 = *(char *)v15;
            v13 = (int64_t *)(v15 + 8);
            v14 = *v13;
            *(int64_t *)(v10 + 8) = v14;
            *v13 = (int64_t)&g30;
            v10 += 16;
            v15 = v12;
            v11 = v14;
        }
    }
    int64_t v16 = *v1; // 0x4f16b
    int64_t v17 = v5 + 16 + (a2 - v4 & -16); // 0x4f17a
    int64_t v18 = v11; // 0x4f188
    int64_t v19 = v17; // 0x4f188
    if (v16 != a2) {
        int64_t v20 = a2 + 16; // 0x4f19f
        *(char *)v19 = *(char *)a2;
        int64_t * v21 = (int64_t *)(a2 + 8); // 0x4f1a7
        int64_t v22 = *v21; // 0x4f1a7
        *(int64_t *)(v19 + 8) = v22;
        *v21 = (int64_t)&g30;
        v18 = v22;
        v19 += 16;
        int64_t v23 = v20; // 0x4f188
        while (v16 != v20) {
            // 0x4f198
            v20 = v23 + 16;
            *(char *)v19 = *(char *)v23;
            v21 = (int64_t *)(v23 + 8);
            v22 = *v21;
            *(int64_t *)(v19 + 8) = v22;
            *v21 = (int64_t)&g30;
            v18 = v22;
            v19 += 16;
            v23 = v20;
        }
    }
    int64_t v24 = v18; // 0x4f1b8
    if (v16 != v4) {
        int64_t v25 = v4 + 8; // 0x4f1ba
        int64_t v26 = v4 + 16; // 0x4f1be
        function_2508e(v25);
        int64_t v27 = v26; // 0x4f1b8
        v24 = v25;
        while (v16 != v26) {
            // 0x4f1ba
            v25 = v27 + 8;
            v26 = v27 + 16;
            function_2508e(v25);
            v27 = v26;
            v24 = v25;
        }
    }
    // 0x4f1c9
    if (v24 != 0) {
        // 0x4f1d2
        function_4eeb50(v24, (int64_t)&g30);
    }
    // 0x4f1d7
    *(int64_t *)a1 = v5;
    *v1 = v17 - a2 + v16;
    *(int64_t *)(a1 + 16) = v5 + 16 * v3;
    return result;
}

// Address range: 0x5a828 - 0x5a984
int64_t function_5a828(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x5a843
    int64_t v2; // bp-33, 0x5a828
    if ((char)function_5b020(a3, (int64_t)"zh_tw.cfg", a3) != 0) {
        // 0x5a94e
        function_35ef6(a1, (int32_t *)(int64_t)L"en_us.cfg", &v2);
        goto lab_0x5a963;
    } else {
        int64_t v3 = (int64_t)&v2; // 0x5a85a
        if ((char)function_5b020(a3, (int64_t)"zh_hk.cfg", v3) != 0) {
            // 0x5a94e
            function_35ef6(a1, (int32_t *)(int64_t)L"zh_tw.cfg", &v2);
            goto lab_0x5a963;
        } else {
            // 0x5a88f
            if ((char)function_5b020(a3, (int64_t)"ast.cfg", v3) != 0) {
                // 0x5a94e
                function_35ef6(a1, (int32_t *)(int64_t)L"es_es.cfg", &v2);
                goto lab_0x5a963;
            } else {
                // 0x5a8a6
                if ((char)function_5b020(a3, (int64_t)"ast_es.cfg", v3) != 0) {
                    // 0x5a94e
                    function_35ef6(a1, (int32_t *)(int64_t)L"es_es.cfg", &v2);
                    goto lab_0x5a963;
                } else {
                    // 0x5a8bd
                    if ((char)function_5b020(a3, (int64_t)"eu.cfg", v3) != 0) {
                        // 0x5a94e
                        function_35ef6(a1, (int32_t *)(int64_t)L"es_es.cfg", &v2);
                        goto lab_0x5a963;
                    } else {
                        // 0x5a8d0
                        if ((char)function_5b020(a3, (int64_t)"eu_es.cfg", v3) != 0) {
                            // 0x5a94e
                            function_35ef6(a1, (int32_t *)(int64_t)L"es_es.cfg", &v2);
                            goto lab_0x5a963;
                        } else {
                            // 0x5a8e3
                            if ((char)function_5b020(a3, (int64_t)"ca.cfg", v3) != 0) {
                                // 0x5a94e
                                function_35ef6(a1, (int32_t *)(int64_t)L"es_es.cfg", &v2);
                                goto lab_0x5a963;
                            } else {
                                // 0x5a8f6
                                if ((char)function_5b020(a3, (int64_t)"ca_es.cfg", v3) != 0) {
                                    // 0x5a94e
                                    function_35ef6(a1, (int32_t *)(int64_t)L"es_es.cfg", &v2);
                                    goto lab_0x5a963;
                                } else {
                                    // 0x5a909
                                    if ((char)function_5b020(a3, (int64_t)"gl.cfg", v3) != 0) {
                                        // 0x5a94e
                                        function_35ef6(a1, (int32_t *)(int64_t)L"es_es.cfg", &v2);
                                        goto lab_0x5a963;
                                    } else {
                                        // 0x5a91c
                                        if ((char)function_5b020(a3, (int64_t)"gl_es.cfg", v3) != 0) {
                                            // 0x5a94e
                                            function_35ef6(a1, (int32_t *)(int64_t)L"es_es.cfg", &v2);
                                            goto lab_0x5a963;
                                        } else {
                                            // 0x5a92f
                                            if ((char)function_5b020(a3, (int64_t)"es_gq.cfg", v3) == 0) {
                                                // 0x5a958
                                                function_360a0(a1, a4);
                                                goto lab_0x5a963;
                                            } else {
                                                // 0x5a94e
                                                function_35ef6(a1, (int32_t *)(int64_t)L"es_es.cfg", &v2);
                                                goto lab_0x5a963;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x5a963:;
    int64_t result = a1; // 0x5a974
    if (v1 != __readfsqword(40)) {
        // 0x5a976
        __stack_chk_fail();
        result = (int64_t)&g37;
    }
    // 0x5a97b
    return result;
}

// Address range: 0x67060 - 0x671bf
int64_t function_67060(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x67060
    if (a4 == a3) {
        // 0x671a8
        return a2 - a1 + a1;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x6708a
    int64_t v2 = *v1; // 0x6708a
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x6708e
    uint64_t v4 = a4 - a3; // 0x67095
    if (v4 > *v3 - v2) {
        int64_t v5 = function_25856(); // 0x67148
        int64_t v6 = function_66c42(v5); // 0x67155
        int64_t v7 = function_2601b(a2, *v1, function_21a2d(a3, a4, function_2601b(v5, a2, v6))); // 0x67185
        function_66c36(a2);
        *(int64_t *)a1 = v6;
        *v1 = v7;
        *v3 = v6 + v5;
        // 0x671a8
        return a2 - a1 + a2;
    }
    uint64_t v8 = v2 - a2; // 0x670ad
    if (v4 >= v8) {
        int64_t v9 = v8 + a3; // 0x670f0
        function_21a2d(v9, a4, v2);
        int64_t v10 = *v1 + v4 - v8; // 0x67115
        *v1 = v10;
        function_66c4f(a2, v2, v10);
        *v1 = *v1 + v8;
        function_21a2d(a3, v9, a2);
    } else {
        int64_t v11 = v2 - v4; // 0x670be
        function_66c4f(v11, v2, v2);
        *v1 = *v1 + v4;
        function_25e67(a2, v11, v2);
        function_21a2d(a3, a4, a2);
    }
    // 0x671a8
    return a2 - a1 + a3;
}

// Address range: 0x33b1f2 - 0x33b34b
int64_t function_33b1f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x33b1f2
    int64_t v1; // 0x33b1f2
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_c4258(a6, a2, a3);
}

// Address range: 0x48f642 - 0x48f79d
int64_t function_48f642(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, uint64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x48f664
    function_36b3c();
    int64_t v2 = *(int64_t *)(a1 - 24); // 0x48f687
    uint64_t v3 = v2 - a2; // 0x48f68e
    int64_t v4 = v3 > a3 ? a3 : v3; // 0x48f694
    int64_t v5 = a1; // 0x48f6a1
    if (0xffffffffffffffe - v2 + v4 < a5) {
        // 0x48f6a3
        function_542590("basic_string::replace");
        v5 = (int64_t)"basic_string::replace";
    }
    // 0x48f6af
    int64_t v6; // 0x48f642
    uint64_t v7; // 0x48f6f9
    uint64_t v8; // 0x48f6fd
    int64_t v9; // 0x48f6f1
    if (v5 <= a4) {
        if (v5 + 4 * v2 < a4) {
            // 0x48f6b4
            v6 = function_48f582(a1, a2, v4, a4, a5);
            goto lab_0x48f778;
        } else {
            int64_t v10 = v5 - 24; // 0x48f6d6
            if ((char)function_29cea(v10) != 0) {
                // 0x48f6b4
                v6 = function_48f582(a1, a2, v4, a4, a5);
                goto lab_0x48f778;
            } else {
                // 0x48f6ed
                v9 = 4 * a2;
                v7 = 4 * a5 + a4;
                v8 = v10 + v9;
                if (v7 > v8) {
                    if (v10 + 4 * (v4 + a2) <= a4) {
                        goto lab_0x48f745;
                    } else {
                        int64_t v11 = function_48e0de(a4, v7, v4, v8); // 0x48f716
                        int64_t v12 = v11; // bp-56, 0x48f72c
                        int64_t v13 = function_48f582(a1, a2, v4, v11, a5); // 0x48f731
                        function_29c3a(&v12);
                        v6 = v13;
                        goto lab_0x48f778;
                    }
                } else {
                    goto lab_0x48f745;
                }
            }
        }
    } else {
        // 0x48f6b4
        v6 = function_48f582(a1, a2, v4, a4, a5);
        goto lab_0x48f778;
    }
  lab_0x48f778:;
    int64_t result = v6; // 0x48f789
    if (v1 != __readfsqword(40)) {
        // 0x48f78b
        __stack_chk_fail();
        result = (int64_t)&g37;
    }
    // 0x48f790
    return result;
  lab_0x48f745:
    // 0x48f745
    function_36ff8(a1, a2, v4, a5);
    int64_t v14 = v7 > v8 ? 4 * (a5 - v4) : 0;
    function_29ef7(v9 + a1, (24 - v5 + a4 + v14 & -4) + a1, a5);
    v6 = a1;
    goto lab_0x48f778;
}

// Address range: 0x4c0830 - 0x4c098e
int64_t function_4c0830(int64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    int64_t v1 = 0; // bp-80, 0x4c0847
    if (a4 > a3 == a4 - a3 < a2) {
        // 0x4c097a
        return 0xffffffec;
    }
    int64_t * v2 = (int64_t *)(a1 + 344); // 0x4c0864
    uint64_t v3 = *v2 + a2; // 0x4c0864
    if (v3 >= a2 != v3 < 0xfffffffe1) {
        // 0x4c097a
        return 0xffffffec;
    }
    // 0x4c0884
    *v2 = v3;
    if (a2 == 0) {
        // 0x4c097a
        return 0;
    }
    int64_t v4 = a1 + 392; // 0x4c089b
    int32_t * v5 = (int32_t *)(a1 + 408);
    int64_t v6 = a4;
    int64_t v7 = a3;
    uint64_t v8 = a2;
    int64_t v9 = v8 < 16 ? v8 : 16; // 0x4c08bf
    int64_t v10 = 16;
    char * v11 = (char *)(a1 + 375 + v10); // 0x4c08c3
    char v12 = *v11 + 1; // 0x4c08c3
    *v11 = v12;
    int64_t v13; // 0x4c0830
    while (v12 == 0) {
        // 0x4c08ce
        v13 = v10 - 1;
        if (v10 == 13) {
            // break -> 0x4c08d8
            break;
        }
        v10 = v13;
        v11 = (char *)(a1 + 375 + v10);
        v12 = *v11 + 1;
        *v11 = v12;
    }
    // 0x4c08d8
    int64_t v14; // bp-72, 0x4c0830
    int64_t v15 = function_4b5070(a1, a1 + 376, 16, &v14, &v1); // 0x4c08ef
    int64_t result = v15; // 0x4c08f6
    while ((int32_t)v15 == 0) {
        int64_t v16 = (int64_t)&v14; // 0x4c08ff
        if (v9 != 0) {
            int64_t v17 = 0; // 0x4c090d
            int32_t v18 = *v5; // 0x4c090d
            int64_t v19 = v7; // 0x4c090d
            uint32_t v20; // 0x4c093a
            while (true) {
                int64_t v21 = v19;
                int64_t v22 = v17;
                char * v23 = (char *)v21;
                if (v18 == 0) {
                    char * v24 = (char *)(v22 + v4); // 0x4c0924
                    *v24 = *v24 ^ *v23;
                }
                // 0x4c092c
                int64_t v25; // bp-104, 0x4c0830
                char v26 = *(char *)((int64_t)&v25 + 32 + v22) ^ *v23; // 0x4c0930
                *(char *)(v22 + v6) = v26;
                v20 = *v5;
                int64_t v27; // 0x4c0830
                if (v20 != 1) {
                    int64_t v28 = v22 + 1; // 0x4c0910
                    v27 = v28;
                    if (v28 == v9) {
                        // break -> 0x4c095b
                        break;
                    }
                } else {
                    char * v29 = (char *)(v22 + v4); // 0x4c0946
                    *v29 = *v29 ^ v26;
                    int64_t v30 = v22 + 1; // 0x4c094e
                    v27 = v30;
                    if (v30 == v9) {
                        // break -> 0x4c095b
                        break;
                    }
                }
                // 0x4c091d
                v17 = v27;
                v18 = v20;
                v19 = v21 + 1;
            }
            // 0x4c095b
            v16 = v20;
        }
        // 0x4c095b
        function_4c00c0(a1, v4, v4, v16);
        int64_t v31 = v8 - v9; // 0x4c096f
        result = 0;
        if (v31 == 0) {
            // break -> 0x4c097a
            break;
        }
        v6 += v9;
        v7 += v9;
        v8 = v31;
        v9 = v8 < 16 ? v8 : 16;
        v10 = 16;
        v11 = (char *)(a1 + 375 + v10);
        v12 = *v11 + 1;
        *v11 = v12;
        while (v12 == 0) {
            // 0x4c08ce
            v13 = v10 - 1;
            if (v10 == 13) {
                // break -> 0x4c08d8
                break;
            }
            v10 = v13;
            v11 = (char *)(a1 + 375 + v10);
            v12 = *v11 + 1;
            *v11 = v12;
        }
        // 0x4c08d8
        v15 = function_4b5070(a1, a1 + 376, 16, &v14, &v1);
        result = v15;
    }
    // 0x4c097a
    return result;
}

// Address range: 0x4c0990 - 0x4c0ae4
int64_t function_4c0990(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 352); // 0x4c09b2
    if (a3 >= 17) {
        // 0x4c09e6
        return 0xffffffec;
    }
    int64_t v2 = 8 * v1; // 0x4c09bd
    memcpy((int64_t *)a2, (int64_t *)(a1 + 360), (int32_t)a3);
    if ((8 * *(int64_t *)(a1 + 344) || v2) == 0) {
        // 0x4c09e6
        return 0;
    }
    // 0x4c09f8
    int64_t v3; // bp-56, 0x4c0990
    int64_t v4 = (int64_t)&v3; // 0x4c09a7
    v3 = v2 >> 56;
    int64_t v5 = a1 + 392; // 0x4c0aac
    char * v6 = (char *)v5;
    *v6 = *v6 ^ (char)(v1 / 0x20000000000000);
    unsigned char v7; // 0x4c0aa8
    for (int64_t i = 1; i < 16; i++) {
        // 0x4c0aa8
        v7 = *(char *)(i + v4);
        char * v8 = (char *)(i + v5); // 0x4c0aac
        *v8 = *v8 ^ v7;
    }
    // 0x4c0abd
    function_4c00c0(a1, v5, v5, (int64_t)v7);
    char * v9 = (char *)a2; // 0x4c0ae0
    *v9 = *v9 ^ *v6;
    return 0;
}

// Address range: 0x4feb80 - 0x4fecdf
// From class:    std::basic_filebuf<char, std::char_traits<char> >
// Type:          constructor
int64_t function_4feb80(int64_t a1) {
    // 0x4feb80
    int128_t v1; // 0x4feb80
    int128_t v2 = v1;
    int64_t v3 = a1 + 56; // 0x4feb8e
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    int64_t * v4 = (int64_t *)a1; // 0x4febb6
    *v4 = (int64_t)&g25;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 48) = 0;
    function_4f2d50(v3);
    int128_t v5 = __asm_pxor(v2, v2); // 0x4febd9
    *(int64_t *)(a1 + 96) = 0;
    __asm_movups(*(int128_t *)(a1 + 64), v5);
    __asm_movups(*(int128_t *)(a1 + 80), v5);
    *v4 = (int64_t)&g24;
    function_4f1590();
    *(int32_t *)(a1 + 120) = 0;
    *(int64_t *)(a1 + 124) = 0;
    *(int64_t *)(a1 + 132) = 0;
    *(int64_t *)(a1 + 140) = 0;
    *(int64_t *)(a1 + 152) = 0;
    *(int64_t *)(a1 + 160) = (int64_t)&g1;
    *(char *)(a1 + 168) = 0;
    *(char *)(a1 + 169) = 0;
    *(char *)(a1 + 170) = 0;
    *(char *)(a1 + 171) = 0;
    *(int64_t *)(a1 + 176) = 0;
    *(int64_t *)(a1 + 184) = 0;
    *(char *)(a1 + 192) = 0;
    int64_t * v6 = (int64_t *)(a1 + 200); // 0x4fec7e
    *v6 = 0;
    *(int64_t *)(a1 + 208) = 0;
    *(int64_t *)(a1 + 216) = 0;
    *(int64_t *)(a1 + 224) = 0;
    *(int64_t *)(a1 + 232) = 0;
    int64_t result = function_556930(v3); // 0x4fecb5
    if ((char)result == 0) {
        // 0x4fecbe
        return result;
    }
    int64_t result2 = function_555410(v3); // 0x4fecd3
    *v6 = result2;
    return result2;
}

// Address range: 0x52b400 - 0x52b552
int64_t function_52b400(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1 + 16;
    int64_t v2 = *(int64_t *)(a1 + 8); // 0x52b41b
    int64_t v3 = __readfsqword(40); // 0x52b41f
    int64_t v4 = a5 - a3 + v2; // bp-72, 0x52b449
    int64_t * v5 = (int64_t *)v1;
    int64_t v6 = function_52b020(a1, &v4, *v5); // 0x52b465
    int64_t v7 = a1; // 0x52b479
    int64_t result = v6; // 0x52b479
    int64_t v8 = (int64_t)&v4; // 0x52b479
    if (a2 != 0) {
        if (a2 != 1) {
            int64_t * dest_mem = memcpy((int64_t *)v6, (int64_t *)a1, (int32_t)a2); // 0x52b53f
            v7 = v6;
            result = (int64_t)dest_mem;
            v8 = a1;
        } else {
            // 0x52b488
            *(char *)v6 = (char)a1;
            v7 = a1;
            result = a1 % 256;
            v8 = a1;
        }
    }
    int64_t v9 = v7; // 0x52b491
    int64_t v10 = v8; // 0x52b491
    if (a4 != 0 && a5 != 0) {
        if (a5 == 1) {
            // 0x52b558
            return result;
        }
        // 0x52b4a6
        v9 = v6 + a2;
        memcpy((int64_t *)v9, (int64_t *)a4, (int32_t)a5);
        v10 = a4;
    }
    int64_t v11 = v2 - a2 - a3; // 0x52b443
    int64_t v12 = v9; // 0x52b4c6
    int64_t v13 = v10; // 0x52b4c6
    if (v11 != 0) {
        int64_t v14 = a3 + a2 + v9; // 0x52b4d0
        int64_t v15 = v6 + a2 + a5; // 0x52b4d7
        if (v11 != 1) {
            // 0x52b520
            memcpy((int64_t *)v15, (int64_t *)v14, (int32_t)v11);
            v12 = v15;
            v13 = v14;
        } else {
            // 0x52b4dd
            *(char *)v15 = *(char *)v14;
            v12 = v15;
            v13 = v14;
        }
    }
    // 0x52b4e5
    if (v1 != v12) {
        // 0x52b4ea
        function_4eeb50(v12, v13);
    }
    // 0x52b4ef
    *(int64_t *)a1 = v6;
    *v5 = v4;
    return __readfsqword(40) ^ v3;
}

// Address range: 0x53c4b0 - 0x53c609
// From class:    std::__cxx11::money_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_53c4b0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x53c4b0
    __readfsqword(40);
    function_50ab00();
    int64_t v1 = 0; // bp-88, 0x53c526
    int64_t v2 = (int64_t)&v1; // 0x53c52a
    int64_t v3 = v2; // bp-104, 0x53c52a
    int64_t result; // 0x53c4b0
    if ((char)a6 == 0) {
        // 0x53c5c0
        result = function_53af80(a1, a2, a3, a4, a5, a7, a8, &v3);
    } else {
        // 0x53c541
        result = function_539b70(a1, a2, a3, a4, a5, a7, a8, &v3);
    }
    // 0x53c556
    if (v3 != v2) {
        // 0x53c592
        function_4eeb50(v3, a3 < 0xffffffff00000001 ? a3 : a3 + 0xffffffff);
    }
    // 0x53c597
    __readfsqword(40);
    return result;
}

// Address range: 0x577f00 - 0x578057
int64_t function_577f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t result, int64_t a10) {
    // 0x577f00
    __readfsqword(40);
    if (result != 0) {
        // 0x577f53
        __readfsqword(40);
        return result;
    }
    int64_t v1 = (int64_t)&g30; // bp-72, 0x577f93
    v1 = (int64_t)&g30;
    if (*(int32_t *)a8 == 0) {
        // 0x578018
        function_2509a(a10, &v1);
        *(int64_t *)(a10 + 8) = g28;
        *(int64_t *)(a10 + 32) = (int64_t)&g3;
    }
    // 0x577fb2
    if (g26 == &g28) {
        // 0x577f53
        __readfsqword(40);
        return (int64_t)&g30;
    }
    // 0x577fda
    if (g27 == 0) {
        // 0x578050
        return (int64_t)&g30;
    }
    int32_t v2 = g29; // 0x577fe9
    g29 = v2 - 1;
    if (v2 >= 0 != v2 != 0) {
        // 0x577ff6
        int64_t v3; // bp-73, 0x577f00
        function_547e30(&g28, &v3, a3, v1);
    }
    // 0x577f53
    __readfsqword(40);
    return (int64_t)&g30;
}

// Address range: 0x578090 - 0x5781e7
int64_t function_578090(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t result, int64_t a10) {
    // 0x578090
    __readfsqword(40);
    if (result != 0) {
        // 0x5780e3
        __readfsqword(40);
        return result;
    }
    int64_t v1 = (int64_t)&g33; // bp-72, 0x578123
    v1 = (int64_t)&g33;
    if (*(int32_t *)a8 == 0) {
        // 0x5781a8
        function_360a0(a10, (int64_t)&v1);
        *(int64_t *)(a10 + 8) = g31;
        *(int64_t *)(a10 + 32) = 0x575eb0;
    }
    // 0x578142
    if (*(int64_t *)0x848c20 == (int64_t)&g31) {
        // 0x5780e3
        __readfsqword(40);
        return (int64_t)&g33;
    }
    // 0x57816a
    if (g27 == 0) {
        // 0x5781e0
        return (int64_t)&g33;
    }
    int32_t v2 = g32; // 0x578179
    g32 = v2 - 1;
    if (v2 >= 0 != v2 != 0) {
        // 0x578186
        int64_t v3; // bp-73, 0x578090
        function_5509d0(&g31, &v3, a3, v1);
    }
    // 0x5780e3
    __readfsqword(40);
    return (int64_t)&g33;
}
