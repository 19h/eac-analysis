/*
 * Targeted RetDec C for native executable gap queue batch 16.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x60dea-0x60f19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cc900-0x4cca2f rank=- name=- kind=- bytes=- uncovered=-
 *   0x525f0-0x5271d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fa50-0x4fb7c rank=- name=- kind=- bytes=- uncovered=-
 *   0x60c84-0x60db0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49e770-0x49e89c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ce440-0x4ce56b rank=- name=- kind=- bytes=- uncovered=-
 *   0x58947-0x58a71 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c8450-0x4c857a rank=- name=- kind=- bytes=- uncovered=-
 *   0x25da6-0x25ecf rank=- name=- kind=- bytes=- uncovered=-
 *   0x35c96-0x35dbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x519120-0x519249 rank=- name=- kind=- bytes=- uncovered=-
 *   0x573430-0x573559 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29dd0-0x29ef7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57650-0x57777 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6a3ea-0x6a511 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1fdb0();
int64_t function_20480();
int64_t function_207f0();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_25da6();
int64_t function_25e67();
int64_t function_29c3a();
int64_t function_29dd0();
int64_t function_35c96();
int64_t function_35fcc();
int64_t function_36902();
int64_t function_48e347();
int64_t function_48eb2b();
int64_t function_49e770();
int64_t function_4c8320();
int64_t function_4c8450();
int64_t function_4cc7d0();
int64_t function_4cc900();
int64_t function_4cdef0();
int64_t function_4ce440();
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0a80();
int64_t function_4f0ae0();
int64_t function_4f954();
int64_t function_4f990();
int64_t function_4fa50();
int64_t function_519050();
int64_t function_519120();
int64_t function_5236c();
int64_t function_525f0();
int64_t function_5423b0();
int64_t function_55f42();
int64_t function_56004();
int64_t function_56146();
int64_t function_56b9a0();
int64_t function_570890();
int64_t function_573430();
int64_t function_57650();
int64_t function_58947();
int64_t function_59078();
int64_t function_5cd02();
int64_t function_60c84();
int64_t function_60dea();
int64_t function_60eae();
int64_t function_60f42();
int64_t function_60fae();
int64_t function_69166();
int64_t function_6941a();
int64_t function_699a6();
int64_t function_69a4e();
int64_t function_6a114();
int64_t function_6a3ea();
int64_t function_6a648();
int64_t function_6a7f0();
int64_t function_72994();
int64_t function_7299a();
int64_t function_729b0();

// Address range: 0x25da6 - 0x25e67
int64_t function_25da6(int64_t a1, int64_t result3, int64_t a3, int64_t a4) {
    int64_t result = a1 + 8; // 0x25da8
    if (result == result3) {
        // 0x25dbf
        if (*(int64_t *)(a1 + 40) == 0) {
            // 0x25e5c
            return result;
        }
        int64_t result2 = a3 & 0xffffffff; // 0x25dce
        if (result2 <= (int64_t)*(int32_t *)(*(int64_t *)(a1 + 32) + 32)) {
            // 0x25e5c
            return result2;
        }
        // 0x25e5c
        return 0;
    }
    int32_t v1 = a3;
    uint32_t v2 = *(int32_t *)(result3 + 32); // 0x25dda
    if (v2 > v1) {
        // 0x25de6
        if (*(int64_t *)(a1 + 24) == result3) {
            // 0x25e5c
            return result3;
        }
        int64_t v3 = function_4f0ae0(result3, a3); // 0x25df2
        int64_t result4 = v3; // 0x25dfb
        if (*(int32_t *)(v3 + 32) < v1) {
            // 0x25dfd
            result4 = *(int64_t *)(v3 + 24) != 0 ? result3 : 0;
        }
        // 0x25e5c
        return result4;
    }
    // 0x25e13
    if (v2 >= v1) {
        // 0x25e5c
        return result3;
    }
    int64_t v4 = *(int64_t *)(a1 + 32); // 0x25e15
    if (v4 == result3) {
        // 0x25e5c
        return 0;
    }
    int64_t result5 = function_4f0a80(result3, a3, v4, 0); // 0x25e23
    if (*(int32_t *)(result5 + 32) <= v1 || *(int64_t *)(result3 + 24) != 0) {
        // 0x25e5c
        return result5;
    }
    // 0x25e5c
    return 0;
}

// Address range: 0x25e67 - 0x25e90
int64_t function_25e67(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x25e6a
    int64_t result = a3 - v1; // 0x25e6d
    if (v1 == 0) {
        // 0x25e8c
        return result;
    }
    // 0x25e78
    return (int64_t)memmove((int64_t *)result, (int64_t *)a1, (int32_t)v1);
}

// Address range: 0x29dd0 - 0x29ef7
int64_t function_29dd0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x29de4
    function_5cd02();
    int64_t * v2 = (int64_t *)(a3 + 8); // 0x29df9
    int64_t v3 = *v2 - a3; // 0x29dfd
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x29e0b
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + 16); // 0x29e13
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x29e1b
    *v6 = 0;
    uint64_t v7 = -0x5555555555555555 * (v3 >> 3); // 0x29e2a
    int64_t v8 = -0x5555555555555555; // 0x29e31
    int64_t v9 = 0; // 0x29e31
    if (v7 != 0) {
        if (v7 >= 0xaaaaaaaaaaaaaab) {
            // 0x29e42
            function_5423b0();
        }
        // 0x29e47
        v8 = 0xaaaaaaaaaaaaaaa;
        v9 = function_4efd30(v3);
    }
    // 0x29e57
    *v4 = v9;
    *v5 = v9;
    *v6 = v9 + v3;
    int64_t v10 = *v2; // 0x29e6d
    int64_t v11 = v9; // 0x29e77
    if (v10 != v8) {
        function_2509a(v11, v8);
        int64_t v12 = v8 + 24; // 0x29e8c
        function_2509a(v11 + 8, v8 + 8);
        *(int32_t *)(v11 + 16) = *(int32_t *)(v8 + 16);
        v11 += 24;
        while (v10 != v12) {
            int64_t v13 = v12;
            function_2509a(v11, v13);
            v12 = v13 + 24;
            function_2509a(v11 + 8, v13 + 8);
            *(int32_t *)(v11 + 16) = *(int32_t *)(v13 + 16);
            v11 += 24;
        }
    }
    int64_t v14 = __readfsqword(40); // 0x29ed4
    *v5 = 24 * (0xaaaaaaaaaaaaaab * (v10 - v8) / 8 & 0x1fffffffffffffff) + v9;
    int64_t result = 0; // 0x29ee1
    if (v1 != v14) {
        // 0x29ee3
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x29ee8
    return result;
}

// Address range: 0x35c96 - 0x35dbf
int64_t function_35c96(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x35ca2
    int64_t v2 = 0; // 0x35cc0
    int64_t v3 = 0; // 0x35cc0
    if (a2 != 0 && a3 != 0) {
        int64_t * v4 = (int64_t *)(a2 + 80); // 0x35cc9
        int64_t v5 = *v4; // 0x35cc9
        int64_t * v6 = (int64_t *)(a2 + 72); // 0x35ccd
        int64_t v7 = v5; // bp-72, 0x35cdf
        if (v5 != 0) {
            // 0x35ce6
            function_36902();
        }
        if (*v6 == 0) {
            // 0x35d26
            v2 = function_35fcc(&v7);
            v3 = 0;
        } else {
            int64_t * v8 = (int64_t *)(a3 + 80);
            int64_t v9 = *v8; // 0x35cf6
            int64_t * v10 = (int64_t *)(a3 + 72);
            int64_t v11 = v9; // bp-56, 0x35d06
            if (v9 != 0) {
                // 0x35d0d
                function_36902();
            }
            // 0x35d26
            function_35fcc(&v11);
            v2 = function_35fcc(&v7);
            v3 = 0;
            if (*v10 != 0) {
                int64_t v12 = *v4; // 0x35d39
                v7 = v12;
                if (v12 != 0) {
                    // 0x35d52
                    function_36902();
                }
                int64_t v13 = *v8; // 0x35d5c
                v11 = v13;
                if (v13 != 0) {
                    // 0x35d77
                    function_36902();
                }
                uint64_t v14 = *(int64_t *)(*v10 + 16); // 0x35d86
                function_35fcc(&v11);
                v2 = function_35fcc(&v7);
                v3 = *(int64_t *)(*v6 + 16) > v14;
            }
        }
    }
    int64_t result = v2 & -256 | v3; // 0x35dab
    if (v1 != __readfsqword(40)) {
        // 0x35dad
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x35db2
    return result;
}

// Address range: 0x4fa50 - 0x4fb7c
int64_t function_4fa50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4fa50
    int64_t result; // 0x4fa50
    if (a2 == 0) {
        // 0x4fb7b
        return result;
    }
    int64_t * v1 = (int64_t *)(a2 + 144); // 0x4fa59
    int64_t v2 = *v1 - 1; // 0x4fa59
    *v1 = v2;
    if (v2 != 0 || *(char *)(a2 + 152) == 0) {
        // 0x4fb7b
        return result;
    }
    int64_t v3 = a1 + 56; // 0x4fa75
    function_7299a(v3);
    uint64_t v4 = *(int64_t *)(a1 + 8); // 0x4fa89
    int64_t v5 = a2 % v4;
    int64_t v6 = function_4f954(a1, v5, a2); // 0x4faa1
    int64_t v7 = a2; // 0x4faac
    int64_t v8; // 0x4fa50
    int64_t v9; // 0x4fa50
    int64_t v10; // 0x4fa50
    int64_t * v11; // 0x4fab2
    int64_t v12; // 0x4fab2
    int64_t v13; // 0x4fab5
    int64_t * v14; // 0x4fab9
    int64_t v15; // 0x4fab9
    int64_t * v16; // 0x4fabc
    if (v6 == 0) {
        goto lab_0x4fb20;
    } else {
        // 0x4faae
        v11 = (int64_t *)v6;
        v12 = *v11;
        v13 = 8 * v5 + a1;
        v14 = (int64_t *)v12;
        v15 = *v14;
        v16 = (int64_t *)v13;
        int64_t v17 = *v16; // 0x4fabc
        if (v6 != v17) {
            // 0x4fafa
            v10 = a2;
            if (v15 != 0) {
                int64_t v18 = *(int64_t *)(v15 + 8) % v4;
                v10 = v5;
                if (v5 != v18) {
                    // 0x4fb0d
                    *(int64_t *)(8 * v18 + a1) = v6;
                    v10 = v18;
                }
            }
            goto lab_0x4fb11;
        } else {
            // 0x4fac1
            v8 = v17;
            v9 = 0;
            if (v15 == 0) {
                goto lab_0x4fae4;
            } else {
                int64_t v19 = *(int64_t *)(v15 + 8) % v4;
                v10 = v5;
                if (v5 == v19) {
                    goto lab_0x4fb11;
                } else {
                    // 0x4fae0
                    *(int64_t *)(8 * v19 + a1) = v6;
                    v8 = *v16;
                    v9 = v19;
                    goto lab_0x4fae4;
                }
            }
        }
    }
  lab_0x4fb20:
    // 0x4fb20
    function_729b0(v3);
    function_72994(a2 + 208);
    int64_t v20 = *(int64_t *)(a2 + 120); // 0x4fb34
    int64_t v21; // 0x4fa50
    int64_t v22; // 0x4fa50
    int64_t v23; // 0x4fa50
    if (v20 != 0) {
        // 0x4fb3d
        function_4eeb50(v20, v6, v7, v23, v21, v22);
    }
    int64_t v24 = *(int64_t *)(a2 + 32); // 0x4fb42
    if (v24 != 0) {
        // 0x4fb4b
        function_4eeb50(v24, v6, v7, v23, v21, v22);
    }
    // 0x4fb50
    function_4f990(*(int64_t *)(a2 + 16) - 24);
    function_4f990(*(int64_t *)(a2 + 8) - 24);
    return function_4eeb30(a2, 264);
  lab_0x4fb11:
    // 0x4fb11
    v7 = v10;
    *v11 = *v14;
    function_4eeb50(v12, v6, v7, v15, a1, v13);
    int64_t * v25 = (int64_t *)(a1 + 24); // 0x4fb1c
    *v25 = *v25 - 1;
    v23 = v15;
    v21 = a1;
    v22 = v13;
    goto lab_0x4fb20;
  lab_0x4fae4:;
    int64_t v26 = a1 + 16; // 0x4fae4
    if (v8 == v26) {
        // 0x4faed
        *(int64_t *)v26 = v15;
    }
    // 0x4faf1
    *v16 = 0;
    v10 = v9;
    goto lab_0x4fb11;
}

// Address range: 0x525f0 - 0x5271d
int64_t function_525f0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 48; // 0x525f4
    uint64_t v2 = *(int64_t *)(a2 + 8); // 0x52604
    int128_t v3 = __asm_movups(*(int128_t *)(a2 + 32)); // 0x5260c
    int64_t * v4 = (int64_t *)a1; // 0x52610
    *v4 = 0;
    int64_t v5 = a1 + 16; // 0x52617
    int64_t * v6 = (int64_t *)v5; // 0x52617
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a1 + 8); // 0x52623
    *v7 = v2;
    *(int64_t *)(a1 + 24) = *(int64_t *)(a2 + 24);
    __asm_movups_133(*(int128_t *)(a1 + 32), v3);
    *(int64_t *)v1 = 0;
    int64_t v8 = v1; // 0x52637
    if (v2 != 1) {
        if (v2 >= 0x2000000000000000) {
            // 0x52648
            function_5423b0();
        }
        int64_t v9 = 8 * v2; // 0x5264d
        v8 = function_4efd30(v9);
        __asm_rep_stosb_memset((char *)v8, 0, v9);
    }
    int64_t v10 = *(int64_t *)(a2 + 16); // 0x5266d
    *v4 = v8;
    if (v10 != 0) {
        int64_t v11 = function_4efd30(16); // 0x5267e
        *(int64_t *)v11 = 0;
        int64_t v12 = *(int64_t *)(v10 + 8); // 0x5268d
        *v6 = v11;
        *(int64_t *)(v11 + 8) = v12;
        *(int64_t *)(8 * ((v12 & 0xffffffff) % *v7) + 16) = v5;
        int64_t v13 = *(int64_t *)v10;
        if (v13 != 0) {
            int64_t v14 = function_4efd30(16); // 0x526bb
            *(int64_t *)v14 = 0;
            int64_t v15 = v14 + 8; // 0x526d0
            *(int64_t *)v15 = *(int64_t *)(v13 + 8);
            *(int64_t *)v11 = v14;
            int64_t * v16 = (int64_t *)(8 * ((int64_t)*(int32_t *)v15 % *v7) + 16); // 0x526e6
            if (*v16 == 0) {
                // 0x526ec
                *v16 = v11;
            }
            int64_t v17 = *(int64_t *)v13;
            int64_t v18 = v17; // 0x526b4
            while (v17 != 0) {
                int64_t v19 = v14;
                v14 = function_4efd30(16);
                *(int64_t *)v14 = 0;
                v15 = v14 + 8;
                *(int64_t *)v15 = *(int64_t *)(v18 + 8);
                *(int64_t *)v19 = v14;
                v16 = (int64_t *)(8 * ((int64_t)*(int32_t *)v15 % *v7) + 16);
                if (*v16 == 0) {
                    // 0x526ec
                    *v16 = v19;
                }
                // 0x526ef
                v17 = *(int64_t *)v18;
                v18 = v17;
            }
        }
    }
    // 0x526f8
    *(int64_t *)(a1 + 56) = *(int64_t *)(a2 + 56);
    *(int32_t *)(a1 + 64) = *(int32_t *)(a2 + 64);
    return function_5236c(a1 + 72, a2 + 72);
}

// Address range: 0x57650 - 0x57777
int64_t function_57650(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5766c
    int64_t v2; // bp-1976, 0x57650
    function_20480(&v2);
    int64_t v3 = function_56146(a2, a1 + 33); // 0x5768e
    int64_t v4 = 2; // 0x5769e
    if ((char)v3 != 0) {
        // 0x576a4
        int64_t v5; // bp-2024, 0x57650
        int64_t v6 = (int64_t)&v5; // 0x576ab
        int32_t * v7 = (int32_t *)(a1 + (int64_t)&g3); // 0x576b0
        int64_t v8 = v3; // 0x576b6
        int64_t v9 = 0; // 0x576b6
        if (*v7 == 0) {
          lab_0x5771a:;
            // 0x5771a
            int64_t str; // bp-2008, 0x57650
            function_207f0(&v2, &str, 32);
            int32_t memcmp_rc = memcmp((int64_t *)(a1 + (int64_t)&g2), &str, 32); // 0x5773e
            v4 = memcmp_rc == 0 ? 0 : 26;
        } else {
            while (true) {
                int64_t v10 = v9;
                v5 = 0;
                int64_t v11 = 0; // bp-2016, 0x576ce
                int64_t v12 = function_55f42(a2, &v11, v6); // 0x576d7
                int64_t v13; // 0x57650
                if ((char)v12 != 0) {
                    // 0x576f8
                    function_1fdb0(&v2, v5, v11);
                    v13 = v10;
                } else {
                    // 0x576e3
                    v4 = 23;
                    if ((char)v8 == 0) {
                        // break -> 0x5774d
                        break;
                    }
                    // 0x576e8
                    v4 = 23;
                    if ((char)function_56004(a2) == 0) {
                        // break -> 0x5774d
                        break;
                    }
                    // 0x576f4
                    v13 = v10 + 0xffffffff & 0xffffffff;
                }
                int64_t v14 = v13 + 1; // 0x57713
                v8 = v12;
                v9 = v14 & 0xffffffff;
                if (*v7 <= (int32_t)v14) {
                    goto lab_0x5771a;
                }
            }
        }
    }
    int64_t result = v4; // 0x5775e
    if (v1 != __readfsqword(40)) {
        // 0x57760
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x57765
    return result;
}

// Address range: 0x58947 - 0x58a71
int64_t function_58947(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x5896a
    char * v2; // bp-160, 0x58947
    function_48eb2b((int64_t *)&v2);
    int64_t pglob; // bp-136, 0x58947
    int32_t v3 = glob(v2, 4, NULL, (struct _TYPEDEF_glob_t *)&pglob); // 0x58991
    if (pglob != 0) {
        // 0x589af
        int64_t v4; // bp-161, 0x58947
        int64_t v5 = (int64_t)&v4; // 0x5899f
        int64_t * v6 = (int64_t *)(a2 + 8);
        int64_t v7 = 0; // 0x58a1d
        int64_t v8; // 0x58947
        int64_t v9 = *(int64_t *)(8 * v7 + v8); // 0x589be
        int64_t v10; // bp-152, 0x58947
        function_250b0(&v10, (int64_t)__xpg_basename((char *)v9), v5);
        int64_t v11; // bp-144, 0x58947
        function_48e347(&v11, &v10);
        int64_t v12 = *v6; // 0x589e2
        if (v12 == *(int64_t *)(a2 + 16)) {
            // 0x58a0f
            function_59078(a2, v12, &v11);
        } else {
            // 0x589ec
            *(int64_t *)v12 = v11;
            *v6 = v12 + 8;
            v11 = (int64_t)&g7;
        }
        // 0x58a1a
        v7++;
        function_29c3a(&v11);
        function_2508e(&v10);
        while (pglob > v7) {
            // 0x589af
            v9 = *(int64_t *)(8 * v7 + v8);
            function_250b0(&v10, (int64_t)__xpg_basename((char *)v9), v5);
            function_48e347(&v11, &v10);
            v12 = *v6;
            if (v12 == *(int64_t *)(a2 + 16)) {
                // 0x58a0f
                function_59078(a2, v12, &v11);
            } else {
                // 0x589ec
                *(int64_t *)v12 = v11;
                *v6 = v12 + 8;
                v11 = (int64_t)&g7;
            }
            // 0x58a1a
            v7++;
            function_29c3a(&v11);
            function_2508e(&v10);
        }
    }
    // 0x58a32
    globfree((struct _TYPEDEF_glob_t *)&pglob);
    int64_t result = function_2508e((int64_t *)&v2) & -256 | (int64_t)(v3 == 0); // 0x58a58
    if (v1 != __readfsqword(40)) {
        // 0x58a5a
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x58a5f
    return result;
}

// Address range: 0x60c84 - 0x60db0
int64_t function_60c84(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x60ca6
    int64_t v2 = 0x3ffffffffffffff; // 0x60cce
    int64_t v3; // 0x60c84
    int64_t v4; // 0x60c84
    if (v2 > 0x3ffffffffffffff | v2 < *v1 - a1 >> 6) {
        goto lab_0x60d9c;
    } else {
        // 0x60cdd
        v3 = v2;
        v4 = 0;
        if (v2 != 0) {
            goto lab_0x60d9c;
        } else {
            goto lab_0x60ce9;
        }
    }
  lab_0x60d9c:;
    int64_t v5 = function_4efd30(64 * v2); // 0x60da3
    v3 = v2;
    v4 = v5;
    goto lab_0x60ce9;
  lab_0x60ce9:;
    int64_t v6 = v4 + a2 - a1; // 0x60ced
    int64_t v7 = v6 + 24; // 0x60cf4
    *(int64_t *)v6 = a1;
    *(int64_t *)(v6 + 8) = *(int64_t *)(a3 + 8);
    *(int64_t *)(v6 + 16) = *(int64_t *)(a3 + 16);
    function_60eae(v7, a3 + 24);
    *(int32_t *)(v6 + 48) = *(int32_t *)(a3 + 48);
    *(int32_t *)(v6 + 52) = *(int32_t *)(a3 + 52);
    *(int32_t *)(v6 + 56) = *(int32_t *)(a3 + 56);
    int64_t v8 = function_60fae(v7, a2, v4); // 0x60d32
    int64_t v9 = *v1; // 0x60d37
    int64_t v10 = v8 + 64; // 0x60d3b
    int64_t v11 = function_60fae(a2, v9, v10); // 0x60d42
    int64_t v12 = *v1; // 0x60d47
    int64_t v13 = a2; // 0x60d55
    int64_t result; // 0x60c84
    if (v12 != a2) {
        int64_t v14 = *(int64_t *)(a2 + 24); // 0x60d57
        if (v14 != 0) {
            // 0x60d61
            function_4eeb50(v14, v9, v10, result, result, result);
        }
        int64_t v15 = a2 + 64; // 0x60d66
        int64_t v16 = v15; // 0x60d55
        v13 = v14;
        while (v12 != v15) {
            // 0x60d57
            v14 = *(int64_t *)(v16 + 24);
            if (v14 != 0) {
                // 0x60d61
                function_4eeb50(v14, v9, v10, result, result, result);
            }
            // 0x60d66
            v15 = v16 + 64;
            v16 = v15;
            v13 = v14;
        }
    }
    // 0x60d6c
    if (v13 != 0) {
        // 0x60d75
        function_4eeb50(v13, v9, v10, result, result, result);
    }
    // 0x60d7a
    *(int64_t *)a1 = v4;
    *v1 = v11;
    *(int64_t *)(a1 + 16) = v4 + 64 * v3;
    return result;
}

// Address range: 0x60dea - 0x60ead
int64_t function_60dea(int64_t a1, int64_t result, uint64_t a3, int64_t a4) {
    if (a1 + 8 == result) {
        // 0x60e03
        if (*(int64_t *)(a1 + 40) == 0 || *(int64_t *)(*(int64_t *)(a1 + 32) + 32) >= a3) {
            // 0x60e90
            return function_60f42();
        }
        // 0x60ea2
        return 0;
    }
    uint64_t v1 = *(int64_t *)(result + 32); // 0x60e20
    if (v1 > a3) {
        // 0x60e2c
        if (*(int64_t *)(a1 + 24) == result) {
            // 0x60ea2
            return result;
        }
        int64_t v2 = function_4f0ae0(result, a3); // 0x60e38
        if (*(int64_t *)(v2 + 32) >= a3) {
            // 0x60e90
            return function_60f42();
        }
        // 0x60ea2
        return *(int64_t *)(v2 + 24) != 0 ? result : 0;
    }
    // 0x60e59
    if (v1 >= a3) {
        // 0x60ea2
        return result;
    }
    int64_t v3 = *(int64_t *)(a1 + 32); // 0x60e5b
    if (v3 == result) {
        // 0x60ea2
        return 0;
    }
    int64_t result2 = function_4f0a80(result, a3, v3, 0); // 0x60e69
    if (*(int64_t *)(result2 + 32) <= a3) {
        // 0x60e90
        return function_60f42();
    }
    // 0x60e74
    if (*(int64_t *)(result + 24) != 0) {
        // 0x60ea2
        return result2;
    }
    // 0x60ea2
    return 0;
}

// Address range: 0x60eae - 0x60f15
int64_t function_60eae(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 8) - a2; // 0x60ebc
    int64_t * v2 = (int64_t *)a1; // 0x60ebf
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x60ec6
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x60ece
    *v4 = 0;
    uint64_t v5 = v1 >> 3; // 0x60ed9
    int64_t result; // 0x60eae
    if (v5 == 0) {
        // 0x60eff
        result = 0;
        *v2 = result;
        *v3 = result;
        *v4 = result + v1;
        return result;
    }
    if (v5 >= 0x2000000000000000) {
        // 0x60eee
        function_5423b0();
    }
    // 0x60eff
    result = function_4efd30(v1);
    *v2 = result;
    *v3 = result;
    *v4 = result + v1;
    return result;
}

// Address range: 0x6a3ea - 0x6a511
int64_t function_6a3ea(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)a4; // 0x6a40a
    *v1 = 0;
    int64_t v2 = __readfsqword(40); // 0x6a410
    int64_t v3 = (int64_t)&g6; // bp-96, 0x6a433
    int64_t v4 = 5; // 0x6a44e
    if ((char)function_6941a() != 0) {
        // 0x6a454
        function_6a7f0(a1 + 8, &v3);
        int64_t v5; // bp-104, 0x6a3ea
        function_69166(&v5, "close");
        int64_t v6; // bp-112, 0x6a3ea
        function_69166(&v6, "Connection");
        function_69a4e(a1, &v6, &v5);
        function_2508e(&v6);
        function_2508e(&v5);
        function_699a6(&v5, a1, &v3);
        int64_t v7 = function_6a114(a1, &v3, a3 % 0x10000, &v5); // 0x6a4c2
        int64_t v8 = v7 & 0xffffffff; // 0x6a4ca
        function_2508e(&v5);
        v4 = v8;
        if ((int32_t)v7 == 0) {
            // 0x6a4d7
            *v1 = *(int32_t *)(a1 + 168);
            v4 = v8;
        }
    }
    // 0x6a4e2
    function_6a648(&v3);
    int64_t result = v4; // 0x6a4fb
    if (v2 != __readfsqword(40)) {
        // 0x6a4fd
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x6a502
    return result;
}

// Address range: 0x49e770 - 0x49e89a
int64_t function_49e770(int64_t result2, int64_t a2, int64_t a3, int64_t a4, int64_t format, int64_t a6) {
    // 0x49e770
    int64_t v1; // 0x49e770
    if ((char)v1 != 0) {
        // 0x49e7a2
        int128_t v2; // 0x49e770
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    if (result2 == 0) {
        // 0x49e7fe
        int64_t result; // 0x49e770
        return result;
    }
    // 0x49e7ef
    if (*(int64_t *)(result2 + 32) == 0 || (a2 & 0xffffffff) > (int64_t)g5) {
        // 0x49e7fe
        return result2;
    }
    int64_t v3 = 40; // bp-752, 0x49e84a
    int64_t str; // bp-728, 0x49e770
    uint32_t chars_printed = eac_retdec_vsnprintf((char *)&str, (int32_t)&g1, (char *)format, (int64_t)&v3); // 0x49e86c
    if (chars_printed < 511) {
        // 0x49e878
        int64_t v4; // bp-760, 0x49e770
        int64_t v5 = (int64_t)&v4 + 32; // 0x49e880
        *(char *)(v5 + (int64_t)chars_printed) = 10;
        *(char *)((0x100000000 * (int64_t)chars_printed + 0x100000000 >> 32) + v5) = 0;
    }
    // 0x49e7fe
    return (int64_t)&str;
}

// Address range: 0x4c8450 - 0x4c857a
// Used cryptographic patterns:
//  - padding_used_in_hashing_algorithms__0x80_0_____0_ (8-bit)
int64_t function_4c8450(int64_t a1, int64_t a2) {
    // 0x4c8450
    int64_t v1; // 0x4c8450
    uint32_t v2 = (int32_t)v1 % 64; // 0x4c8472
    int64_t v3 = 8 * (char)v1; // bp-40, 0x4c847b
    int32_t v4 = v2 < 56 ? 56 : 120;
    function_4c8320(a1, "\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", v4 - v2, v2);
    function_4c8320(a1, (char *)&v3, 8, v2);
    int32_t * v5 = (int32_t *)(a1 + 8); // 0x4c84e2
    *(char *)a2 = (char)*v5;
    *(char *)(a2 + 1) = (char)(*v5 / 256);
    *(char *)(a2 + 2) = (char)*(int16_t *)(a1 + 10);
    *(char *)(a2 + 3) = *(char *)(a1 + 11);
    int32_t * v6 = (int32_t *)(a1 + 12); // 0x4c84ff
    *(char *)(a2 + 4) = (char)*v6;
    *(char *)(a2 + 5) = (char)(*v6 / 256);
    *(char *)(a2 + 6) = (char)*(int16_t *)(a1 + 14);
    *(char *)(a2 + 7) = *(char *)(a1 + 15);
    int32_t * v7 = (int32_t *)(a1 + 16); // 0x4c851c
    *(char *)(a2 + 8) = (char)*v7;
    *(char *)(a2 + 9) = (char)(*v7 / 256);
    *(char *)(a2 + 10) = (char)*(int16_t *)(a1 + 18);
    *(char *)(a2 + 11) = *(char *)(a1 + 19);
    int32_t * v8 = (int32_t *)(a1 + 20); // 0x4c8539
    *(char *)(a2 + 12) = (char)*v8;
    *(char *)(a2 + 13) = (char)(*v8 / 256);
    *(char *)(a2 + 14) = (char)*(int16_t *)(a1 + 22);
    *(char *)(a2 + 15) = *(char *)(a1 + 23);
    int32_t * v9 = (int32_t *)(a1 + 24); // 0x4c8556
    *(char *)(a2 + 16) = (char)*v9;
    *(char *)(a2 + 17) = (char)(*v9 / 256);
    *(char *)(a2 + 18) = (char)*(int16_t *)(a1 + 26);
    unsigned char result = *(char *)(a1 + 27); // 0x4c856c
    *(char *)(a2 + 19) = result;
    return result;
}

// Address range: 0x4cc900 - 0x4cca2f
// Used cryptographic patterns:
//  - padding_used_in_hashing_algorithms__0x80_0_____0_ (8-bit)
int64_t function_4cc900(int64_t a1, int64_t a2) {
    // 0x4cc900
    int64_t v1; // 0x4cc900
    uint32_t v2 = (int32_t)v1 % 64; // 0x4cc922
    int64_t v3 = 0x100000000000000 * (int64_t)(*(int32_t *)(a1 + 4) / 0x200000) >> 56; // bp-40, 0x4cc932
    int32_t v4 = v2 < 56 ? 56 : 120;
    function_4cc7d0(a1, "\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", v4 - v2, v2);
    function_4cc7d0(a1, (char *)&v3, 8, v2);
    *(char *)a2 = *(char *)(a1 + 11);
    *(char *)(a2 + 1) = (char)*(int16_t *)(a1 + 10);
    int32_t * v5 = (int32_t *)(a1 + 8); // 0x4cc9a5
    *(char *)(a2 + 2) = (char)(*v5 / 256);
    *(char *)(a2 + 3) = (char)*v5;
    *(char *)(a2 + 4) = *(char *)(a1 + 15);
    *(char *)(a2 + 5) = (char)*(int16_t *)(a1 + 14);
    int32_t * v6 = (int32_t *)(a1 + 12); // 0x4cc9c2
    *(char *)(a2 + 6) = (char)(*v6 / 256);
    *(char *)(a2 + 7) = (char)*v6;
    *(char *)(a2 + 8) = *(char *)(a1 + 19);
    *(char *)(a2 + 9) = (char)*(int16_t *)(a1 + 18);
    int32_t * v7 = (int32_t *)(a1 + 16); // 0x4cc9df
    *(char *)(a2 + 10) = (char)(*v7 / 256);
    *(char *)(a2 + 11) = (char)*v7;
    *(char *)(a2 + 12) = *(char *)(a1 + 23);
    *(char *)(a2 + 13) = (char)*(int16_t *)(a1 + 22);
    int32_t * v8 = (int32_t *)(a1 + 20); // 0x4cc9fc
    *(char *)(a2 + 14) = (char)(*v8 / 256);
    *(char *)(a2 + 15) = (char)*v8;
    *(char *)(a2 + 16) = *(char *)(a1 + 27);
    *(char *)(a2 + 17) = (char)*(int16_t *)(a1 + 26);
    int32_t * v9 = (int32_t *)(a1 + 24); // 0x4cca19
    *(char *)(a2 + 18) = (char)(*v9 / 256);
    uint32_t result = *v9; // 0x4cca22
    *(char *)(a2 + 19) = (char)result;
    return result;
}

// Address range: 0x4ce440 - 0x4ce56a
int64_t function_4ce440(uint64_t a1, int64_t a2, uint64_t a3) {
    if (a3 == 0) {
        // 0x4ce4e2
        int64_t result; // 0x4ce440
        return result;
    }
    uint64_t v1 = a3 + a1; // 0x4ce47b
    *(int64_t *)a1 = v1;
    if (v1 < a3) {
        int64_t * v2 = (int64_t *)(a1 + 8); // 0x4ce48f
        *v2 = *v2 + 1;
    }
    uint64_t v3 = a1 % 128; // 0x4ce47e
    uint64_t v4 = 128 - v3; // 0x4ce487
    if (v3 != 0 && v4 <= a3) {
        // 0x4ce549
        return (int64_t)memcpy((int64_t *)(a1 + 80 + v3), (int64_t *)a2, (int32_t)v4);
    }
    int64_t v5 = a2; // 0x4ce4a1
    int64_t v6 = a3; // 0x4ce4a1
    int64_t * dest_mem; // 0x4ce535
    if (a3 < 128) {
        // 0x4ce508
        dest_mem = memcpy((int64_t *)(a1 + 80 + v3), (int64_t *)a2, (int32_t)a3);
        return (int64_t)dest_mem;
    }
    v6 -= 128;
    function_4cdef0(a1, v5);
    v5 += 128;
    while (v6 >= 128) {
        // 0x4ce4b0
        v6 -= 128;
        function_4cdef0(a1, v5);
        v5 += 128;
    }
    int64_t v7 = a3 % 128; // 0x4ce4cd
    int64_t result2 = a3 - 128 & -128; // 0x4ce4d1
    if (v7 == 0) {
        // 0x4ce4e2
        return result2;
    }
    int64_t v8 = a2 + 128 + result2;
    dest_mem = memcpy((int64_t *)(a1 + 80 + v3), (int64_t *)v8, (int32_t)v7);
    return (int64_t)dest_mem;
}

// Address range: 0x519120 - 0x519248
// From class:    std::__cxx11::collate_byname<char>
// Type:          virtual member function
int64_t function_519120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x519120
    char * str; // bp-136, 0x519120
    int64_t v1 = (int64_t)&str; // 0x519137
    __readfsqword(40);
    int64_t v2; // bp-120, 0x519120
    str = (char *)&v2;
    function_519050(v1, a2, a3);
    char * str2; // bp-104, 0x519120
    int64_t v3 = (int64_t)&str2; // 0x51915e
    int64_t v4; // bp-88, 0x519120
    str2 = (char *)&v4;
    function_519050(v3, a4, a5);
    int64_t v5 = (int64_t)str; // 0x51917c
    int64_t v6 = (int64_t)str2; // 0x519186
    int64_t v7 = function_56b9a0(a1, v5, v6); // 0x5191df
    int64_t v8 = v7 & 0xffffffff; // 0x5191e6
    int64_t v9 = v6; // 0x5191e9
    int64_t v10 = v5; // 0x5191e9
    int64_t result2 = v8; // 0x5191e9
    int64_t v11; // 0x519120
    if ((int32_t)v7 == 0) {
        int64_t v12 = v11 + v5; // 0x519190
        int64_t v13 = v11 + v6; // 0x519193
        int64_t v14 = (int64_t)strlen(str) + v5; // 0x5191ab
        int64_t len = strlen(str2); // 0x5191ae
        int64_t v15 = len + v6; // 0x5191b3
        bool v16 = v13 == v15; // 0x5191b9
        int64_t v17 = v15; // 0x5191b9
        int64_t result = len; // 0x5191b9
        int64_t v18 = v14; // 0x5191b9
        int64_t v19 = v8; // 0x5191b9
        int64_t v20 = v5; // 0x5191b9
        int64_t v21 = v6; // 0x5191b9
        bool v22 = v13 == v15; // 0x5191b9
        if (v12 != v14) {
            while (!v16) {
                int64_t str3 = v18 + 1; // 0x5191ce
                int64_t str4 = v17 + 1; // 0x5191d2
                int64_t v23 = function_56b9a0(a1, str3, str4); // 0x5191df
                int64_t v24 = v23 & 0xffffffff; // 0x5191e6
                v9 = str4;
                v10 = str3;
                result2 = v24;
                if ((int32_t)v23 != 0) {
                    goto lab_0x5191eb;
                }
                int64_t v25 = str3 + (int64_t)strlen((char *)str3); // 0x5191ab
                int64_t len2 = strlen((char *)str4); // 0x5191ae
                int64_t v26 = str4 + len2; // 0x5191b3
                v16 = v13 == v26;
                v17 = v26;
                result = len2;
                v18 = v25;
                v19 = v24;
                v20 = str3;
                v21 = str4;
                v22 = v13 == v26;
                if (v12 == v25) {
                    goto lab_0x5191a0;
                }
            }
            // 0x519250
            return result;
        }
      lab_0x5191a0:
        // 0x5191a0
        v9 = v21;
        v10 = v20;
        result2 = v22 ? v19 : 0xffffffff;
    }
  lab_0x5191eb:;
    int64_t v27 = (int64_t)str2; // 0x5191f0
    if (v3 + 16 != v27) {
        // 0x5191fe
        function_4eeb50(v27, v10, v9, a4, a5, v11);
    }
    int64_t v28 = (int64_t)str; // 0x519207
    if (v1 + 16 != v28) {
        // 0x519215
        function_4eeb50(v28, v10, v9, a4, a5, v11);
    }
    // 0x51921a
    __readfsqword(40);
    return result2;
}

// Address range: 0x573430 - 0x573557
int64_t function_573430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t result, int64_t a10) {
    // 0x573430
    __readfsqword(40);
    if (result != 0) {
        // 0x573483
        __readfsqword(40);
        return result;
    }
    char v1 = 0; // bp-88, 0x5734b8
    int64_t result2 = (int64_t)&v1; // 0x5734c9
    if (*(int32_t *)a8 != 0) {
        // 0x573483
        __readfsqword(40);
        return result2;
    }
    // 0x573528
    *(int64_t *)a10 = a10 + 16;
    function_570890(a10, result2, result2);
    return (int64_t)&g4;
}
