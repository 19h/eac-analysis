/*
 * Targeted RetDec C for native executable gap queue batch 45.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x490032-0x4900cf rank=- name=- kind=- bytes=- uncovered=-
 *   0x52d890-0x52d92d rank=- name=- kind=- bytes=- uncovered=-
 *   0x52d960-0x52d9fd rank=- name=- kind=- bytes=- uncovered=-
 *   0x253a6-0x25442 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4630a-0x463a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e66a-0x4e706 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b81c0-0x4b825c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e9c00-0x4e9c9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x549a50-0x549aec rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f550-0x54f5ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b71f0-0x4b728b rank=- name=- kind=- bytes=- uncovered=-
 *   0x582980-0x582a1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x29f0e-0x29fa8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5de9e-0x5df38 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a1fa3-0x1a203d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b4200-0x4b429a rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
struct addrinfo;
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
#define SIGALARM 14
#define SYS_getegid32 50
#define PTHREAD_MUTEX_RECURSIVE 1
extern int g1;
extern int g2;
extern int g3;
extern int g4;
extern int g5;
extern int g6;
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3(void);
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_insb(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint32_t __readgsdword(int64_t offset);
int64_t __asm_iretd(void);
int64_t __asm_sti(int64_t value, int64_t flags);
int64_t unknown_34e4aca1(int64_t value);
void unknown_11c3039(void);
int64_t unknown_2a35274a(void);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_3d2a4ac0(void);
int64_t unknown_3f58ba8f(void);
int64_t unknown_1a5f8c06(void);
int64_t unknown_fce9f06(void);
int64_t unknown_6830301e(void);
int64_t unknown_2f0fdc0b(void);
int64_t unknown_38ae20ec(void);
int64_t unknown_401c0cfa(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffffba4fa1e3(void);
int64_t unknown_ffffffffa83be585(void);
int64_t unknown_ffffffffc9a6c1f7(void);
int64_t unknown_ffffffff8d401ab3(void);
int64_t unknown_ffffffffc304842d(int64_t value);
int64_t unknown_ffffffffd64cfc2a(int64_t dst, int64_t src);
int64_t unknown_ffffffffe8914fc1(void);
int64_t _ITM_RU1(int64_t src);
int64_t _ZGTtnam(int64_t size);
int64_t _ITM_memcpyRtWn(int64_t dst, int64_t src, int64_t size);
void __asm_rcl(int32_t value);
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt(void);
int64_t __asm_mfence();
void __asm_wait(void);
float80_t __asm_fbstp(float80_t value);
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
void __stack_chk_fail(void);
int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);
int64_t _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(int64_t value);
int64_t _ZGTtdlPv(int64_t value);
int64_t blake3_hasher_init_derive_key_raw(int64_t hasher, int64_t context, int64_t context_len);
int64_t unknown_166c28d(void);
int128_t __asm_movsd(int64_t value);
int128_t __asm_movsd_133(int64_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
void __asm_movq(int64_t value, int128_t dst);
int128_t __asm_aesimc(int128_t value);
int128_t __asm_aeskeygenassist(int128_t value, int imm);
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
int128_t __asm_movapd(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pshufd(int128_t value, int imm);
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
void __asm_ucomiss(int128_t left, int64_t right);
void __asm_ucomiss_134(int128_t left, int128_t right);
int128_t __asm_movups();
void __asm_movups_133();
int128_t __asm_movaps(int128_t value);
float80_t __frontend_reg_load_fpr(int32_t reg);
void __frontend_reg_store_fpr(int32_t reg, float80_t value);
char *__nl_langinfo_l(int32_t item, struct __locale_struct *locale);
struct __locale_struct *__newlocale(int category_mask, const char *locale, struct __locale_struct *base);
struct __locale_struct *__uselocale(struct __locale_struct *locale);
float32_t __strtof_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float64_t __strtod_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float80_t strtold_l(const char *nptr, char **endptr, struct __locale_struct *locale);
int32_t __strcoll_l(const char *s1, const char *s2, struct __locale_struct *locale);
int32_t __wcscoll_l(const int32_t *s1, const int32_t *s2, struct __locale_struct *locale);
char *dgettext(char *domain, char *msgid);
char *gettext(char *msgid);
char *bind_textdomain_codeset(char *domainname, char *codeset);
void *iconv_open(const char *tocode, const char *fromcode);
int32_t iconv(void *cd, char **inbuf, int32_t *inbytesleft, char **outbuf, int32_t *outbytesleft);
int iconv_close(void *cd);
struct _IO_FILE *fopen(const char *path, const char *mode);
struct _IO_FILE *fopen64(const char *path, const char *mode);
struct _IO_FILE *fdopen(int fd, const char *mode);
size_t fread(void *ptr, size_t size, size_t nmemb, struct _IO_FILE *stream);
int32_t read(int fd, void *buf, size_t count);
void rewind(struct _IO_FILE *stream);
int fclose(struct _IO_FILE *stream);
int uname(struct utsname *buf);
int64_t __tls_get_addr(void *arg);
int32_t mbrtowc(int32_t *pwc, const char *s, size_t n, struct _TYPEDEF___mbstate_t *ps);
size_t mbstowcs(int32_t *dest, const char *src, size_t n);
int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcslen(const int32_t *s);
int wcscmp(const int32_t *s1, const int32_t *s2);
int wctob(int32_t wc);
int32_t btowc(int c);
int32_t towlower(int32_t wc);
int32_t __towlower_l(int32_t wc, struct __locale_struct *locale);
int32_t __towupper_l(int32_t wc, struct __locale_struct *locale);
int vswprintf(int32_t *wcs, size_t maxlen, const int32_t *format, int64_t ap);
int32_t *wmemchr(const int32_t *s, int32_t c, size_t n);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int32_t getwc(struct _IO_FILE *stream);
int32_t putwc(int32_t wc, struct _IO_FILE *stream);
int32_t ungetwc(int32_t wc, struct _IO_FILE *stream);
int64_t memset2(void *s, int c, size_t n);
int pthread_mutex_lock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_mutex_init(void *mutex, void *attr);
int pthread_mutexattr_init(void *attr);
int pthread_mutexattr_settype(void *attr, int type);
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_once(int32_t *once_control, ...);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int pthread_cond_broadcast(void *cond);
int sem_init(int64_t *sem, int pshared, unsigned int value);
int sem_post(int64_t *sem);
int sem_wait(int64_t *sem);
int sem_destroy(int64_t *sem);
int64_t signal(int signum, int64_t handler);
unsigned int alarm(unsigned int seconds);
int fcntl(int fd, int cmd, ...);
int32_t write(int fd, const void *buf, size_t nbyte);
int writev(int fd, const struct iovec *iov, int iovcnt);
int epoll_create(int size);
int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event);
int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);
int close(int fd);
int ioctl(int fd, unsigned long request, ...);
int poll(struct pollfd *fds, unsigned long nfds, int timeout);
int gettimeofday(struct timeval *tv, void *tz);
int clock_gettime(int clk_id, struct timespec *tp);
int64_t sysconf(int name);
int64_t syscall(int64_t number, ...);
int mprotect(void *addr, size_t len, int prot);
void *mmap(void *addr, size_t len, int prot, int flags, int fd, int64_t offset);
int munmap(void *addr, size_t len);
int __fxstat64(int ver, int fd, struct stat64 *buf);
int fseeko64(struct _IO_FILE *stream, int64_t offset, int whence);
int64_t ftello64(struct _IO_FILE *stream);
int64_t lseek64(int fd, int64_t offset, int whence);
int32_t *__errno_location(void);
int connect(int sockfd, const struct sockaddr *addr, int32_t addrlen);
int getsockopt(int sockfd, int level, int optname, void *optval, int32_t *optlen);
int setsockopt(int sockfd, int level, int optname, const void *optval, int32_t optlen);
int getaddrinfo(const char *node, const char *service, const struct addrinfo *hints, struct addrinfo **res);
void freeaddrinfo(struct addrinfo *res);
int64_t readlink(const char *path, char *buf, size_t bufsiz);
char *realpath(const char *path, char *resolved_path);
int glob(const char *pattern, int flags, void *errfunc, struct _TYPEDEF_glob_t *pglob);
void globfree(struct _TYPEDEF_glob_t *pglob);
char *__xpg_basename(char *path);
int32_t eac_retdec_vsnprintf(char *str, int32_t size, char *format, int64_t ap);
int64_t __wctype_l(const char *property, struct __locale_struct *locale);
int __iswctype_l(int32_t wc, int32_t desc, struct __locale_struct *locale);
char *strdup(const char *s);
int __sprintf_chk(char *str, int flag, size_t slen, const char *format, ...);
struct tm *gmtime_r(const time_t *timep, struct tm *result);
struct _Unwind_Exception;
int64_t _Unwind_DeleteException(int64_t exception);
int64_t _Unwind_GetDataRelBase(int64_t context);
int64_t _Unwind_GetRegionStart();
int64_t _Unwind_RaiseException(int64_t exception);
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_1a1fa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20030();
int64_t function_24ded();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_253a6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_256ba();
int64_t function_25712();
int64_t function_25c34();
int64_t function_27e7a();
int64_t function_2843e();
int64_t function_28c8c();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_29f0e(int64_t a1, int64_t a2);
int64_t function_380a0();
int64_t function_45b82();
int64_t function_4630a(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_48d50f();
int64_t function_48fd30();
int64_t function_490032(int64_t result);
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0d80();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1a80();
int64_t function_4b2830();
int64_t function_4b4200(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b6d30();
int64_t function_4b71f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b81c0(int64_t a1, int64_t a2);
int64_t function_4e66a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4efd30();
int64_t function_52b020();
int64_t function_52d890(int64_t a1, int64_t a2, int64_t a3);
int64_t function_52d960(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5423b0();
int64_t function_542590();
int64_t function_549a50(int64_t a1, uint64_t a2, uint64_t a3);
int64_t function_54d830();
int64_t function_54ed10();
int64_t function_54f550(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_581610();
int64_t function_582980(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5de9e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_729b6();
int64_t function_729ce();
int64_t function_c57b8();

// Address range: 0x253a6 - 0x25442
int64_t function_253a6(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x253b3
    function_2509a();
    *(int32_t *)(a1 + 16) = 1;
    int64_t v2 = a1 + 8; // 0x253f5
    *(int64_t *)v2 = (int64_t)&g5;
    int64_t v3; // bp-64, 0x253a6
    function_48d50f(&v3, 32, "%i", a3 & 0xffffffff);
    int64_t v4; // bp-72, 0x253a6
    int64_t v5; // bp-73, 0x253a6
    function_250b0(&v4, &v3, &v5);
    function_256ba(v2, &v4);
    function_2508e(&v4);
    int64_t result = 0; // 0x25432
    if (v1 != __readfsqword(40)) {
        // 0x25434
        __stack_chk_fail();
        result = (int64_t)&g6;
    }
    // 0x25439
    return result;
}

// Address range: 0x29f0e - 0x29fa8
int64_t function_29f0e(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 - 24) + 1; // 0x29f25
    uint64_t v2 = *(int64_t *)(a1 - 16); // 0x29f29
    int64_t v3 = v2; // 0x29f2d
    int64_t v4; // 0x29f0e
    if (v1 > v2) {
        goto lab_0x29f2f;
    } else {
        int64_t v5 = function_29cea(a1); // 0x29f3f
        v4 = a1;
        if ((char)v5 != 0) {
            // 0x29f3b
            v3 = *(int64_t *)(a1 - 40);
            goto lab_0x29f2f;
        } else {
            goto lab_0x29f89;
        }
    }
  lab_0x29f2f:;
    int64_t v6 = a1; // 0x29f37
    if (v1 != v3) {
        goto lab_0x29f57;
    } else {
        int64_t v7 = a1 - 24; // 0x29f4a
        int64_t v8 = function_29cea(v7); // 0x29f4e
        v6 = v7;
        v4 = v7;
        if ((char)v8 == 0) {
            goto lab_0x29f89;
        } else {
            goto lab_0x29f57;
        }
    }
  lab_0x29f57:;
    int64_t v9 = v6 - 24; // 0x29f5b
    uint64_t v10 = *(int64_t *)v9; // 0x29f5b
    int64_t v11 = function_28c8c(v9, (v1 >= v10 ? v1 : v10) - v10); // 0x29f70
    int64_t v12 = v6 - 48; // 0x29f7c
    function_2843e(v12);
    *(int64_t *)a1 = v11;
    v4 = v12;
    goto lab_0x29f89;
  lab_0x29f89:;
    int64_t v13 = v4 - 24; // 0x29f90
    *(int32_t *)(4 * *(int64_t *)v13 + v4) = (int32_t)a2;
    return function_29cf4(v13, v1);
}

// Address range: 0x4630a - 0x463a6
int64_t function_4630a(int64_t a1, int64_t a2, uint64_t a3) {
    uint32_t v1 = (int32_t)a1;
    uint32_t v2 = ((int32_t)a3 + v1) % 0x20000000; // 0x4631d
    *(int32_t *)a1 = v2;
    int32_t * v3 = (int32_t *)(a1 + 4);
    if (v2 < v1) {
        // 0x46329
        *v3 = *v3 + 1;
    }
    int64_t v4 = a3 / 0x20000000 % 8; // 0x4632c
    *v3 = *v3 + (int32_t)v4;
    uint32_t v5 = v1 % 64; // 0x46332
    int64_t v6 = 0; // 0x46335
    int64_t v7 = v4; // 0x46335
    int64_t v8 = a3; // 0x46335
    int64_t v9 = a2; // 0x46335
    int64_t result; // 0x4630a
    int64_t v10; // 0x4630a
    int64_t v11; // 0x4630a
    int64_t v12; // 0x4630a
    if (v5 == 0) {
        goto lab_0x46377;
    } else {
        int64_t v13 = v5; // 0x46332
        uint64_t v14 = 64 - v13; // 0x4633e
        int64_t v15 = a1 + 24; // 0x46341
        int64_t v16 = v15 + v13; // 0x46341
        v12 = v16;
        result = v16;
        v10 = a3;
        v11 = a2;
        if (v14 <= a3) {
            // 0x46356
            __asm_rep_movsb_memcpy((char *)v16, (char *)a2, v14);
            v6 = function_45b82(a1, v15, 64, 0);
            v7 = 0;
            v8 = a3 - v14;
            v9 = v14 + a2;
            goto lab_0x46377;
        } else {
            goto lab_0x4639f;
        }
    }
  lab_0x46377:;
    int64_t v17 = v6; // 0x4637b
    int64_t v18 = v8; // 0x4637b
    int64_t v19 = v9; // 0x4637b
    if (v8 >= 64) {
        int64_t v20 = function_45b82(a1, v9, v8 & 0xffffffc0, v7); // 0x4638b
        v17 = v20;
        v18 = v8 % 64;
        v19 = v20;
    }
    // 0x46393
    v12 = a1 + 24;
    result = v17;
    v10 = v18 & 0xffffffff;
    v11 = v19;
    goto lab_0x4639f;
  lab_0x4639f:
    // 0x4639f
    __asm_rep_movsb_memcpy((char *)v12, (char *)v11, v10);
    return result;
}

// Address range: 0x4e66a - 0x4e706
int64_t function_4e66a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 16; // 0x4e682
    int64_t v2 = __readfsqword(40); // 0x4e690
    function_729b6();
    int64_t * v3 = (int64_t *)(a1 + 24); // 0x4e6a9
    function_27e7a(v1, *v3, a2, a2 + 8);
    function_25712(v1, *v3, a2, *(int64_t *)(a3 + 8));
    int16_t * v4 = (int16_t *)(a1 + 14); // 0x4e6d6
    *v4 = *v4 + 1;
    int64_t v5; // bp-56, 0x4e66a
    function_729ce(&v5);
    int64_t result = 0; // 0x4e6f2
    if (v2 != __readfsqword(40)) {
        // 0x4e6f4
        __stack_chk_fail();
        result = (int64_t)&g6;
    }
    // 0x4e6f9
    return result;
}

// Address range: 0x5de9e - 0x5df38
int64_t function_5de9e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x5deb4
    function_380a0((int64_t)&g4, a1);
    function_380a0((int64_t)&g3, a2);
    function_380a0((int64_t)&g2, a3);
    if (*(int64_t *)(g1 - 24) == 0) {
        // 0x5def5
        int64_t v2; // bp-69, 0x5de9e
        function_48fd30(&v2);
        function_25c34(&g1, &v2, function_24ded(&v2));
    }
    int64_t result = 0; // 0x5df2a
    if (v1 != __readfsqword(40)) {
        // 0x5df2c
        __stack_chk_fail();
        result = (int64_t)&g6;
    }
    // 0x5df31
    return result;
}

// Address range: 0x1a1fa3 - 0x1a203d
int64_t function_1a1fa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a1fa3
    int64_t v1; // 0x1a1fa3
    v1 = (int64_t)&v1;
    return function_c57b8();
}

// Address range: 0x490032 - 0x4900cf
int64_t function_490032(int64_t result) {
    int64_t v1 = __readfsqword(40); // 0x49004c
    int64_t time_val = time(NULL); // bp-224, 0x49006c
    int64_t time2; // bp-216, 0x490032
    gmtime_r((const time_t *)&time_val, (struct tm *)&time2);
    int64_t str; // bp-160, 0x490032
    int32_t copied_chars = strftime((char *)&str, 128, "%H:%M:%S", (struct tm *)&time2); // 0x490088
    int64_t * v2 = copied_chars != 0 ? &str : (int64_t *)"00:00:00"; // 0x4900a3
    int64_t v3; // bp-225, 0x490032
    function_250b0((int64_t *)result, v2, &v3);
    if (v1 != __readfsqword(40)) {
        // 0x4900bb
        __stack_chk_fail();
    }
    // 0x4900c0
    return result;
}

// Address range: 0x4b4200 - 0x4b4299
int64_t function_4b4200(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // bp-56, 0x4b4212
    if ((int32_t)function_4b1680(&v1, 0) == 0 || (int32_t)function_4b1680(&v1, 1) == 0) {
        // 0x4b4259
        return 0xfffffff2;
    }
    // 0x4b4244
    if ((int32_t)function_4b1680(&v1, 2) == 0) {
        // 0x4b4259
        return 0;
    }
    int64_t result = function_4b2830(&v1); // 0x4b4263
    int32_t v2 = result; // 0x4b4268
    if (v2 == 0) {
        // 0x4b4259
        return result;
    }
    // 0x4b426c
    return v2 == 1 ? 0 : result & 0xffffffff;
}

// Address range: 0x4b71f0 - 0x4b728b
int64_t function_4b71f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b71f0
    function_4b6d30(a1, a3);
    function_4b6d30(a2 + 128, a3 + 8);
    function_4b6d30(a1 + 256, a3 + 16);
    int64_t v1 = 0; // 0x4b722b
    int64_t v2 = 0;
    int64_t v3 = v2 + a1;
    int64_t v4 = v1 + a2;
    *(int32_t *)v4 = *(int32_t *)(v3 + 376);
    *(int32_t *)(v4 + 4) = *(int32_t *)(v3 + 380);
    int64_t v5 = v2 + a2;
    int64_t v6 = v1 + a1;
    *(int32_t *)(v6 + 128) = *(int32_t *)(v5 + 248);
    *(int32_t *)(v6 + 132) = *(int32_t *)(v5 + 252);
    *(int32_t *)(v4 + 256) = *(int32_t *)(v3 + 120);
    *(int32_t *)(v4 + 260) = *(int32_t *)(v3 + 124);
    int64_t v7 = v2 - 8; // 0x4b7284
    v1 += 8;
    while (v2 != -120) {
        // 0x4b7230
        v2 = v7;
        v3 = v2 + a1;
        v4 = v1 + a2;
        *(int32_t *)v4 = *(int32_t *)(v3 + 376);
        *(int32_t *)(v4 + 4) = *(int32_t *)(v3 + 380);
        v5 = v2 + a2;
        v6 = v1 + a1;
        *(int32_t *)(v6 + 128) = *(int32_t *)(v5 + 248);
        *(int32_t *)(v6 + 132) = *(int32_t *)(v5 + 252);
        *(int32_t *)(v4 + 256) = *(int32_t *)(v3 + 120);
        *(int32_t *)(v4 + 260) = *(int32_t *)(v3 + 124);
        v7 = v2 - 8;
        v1 += 8;
    }
    // 0x4b7286
    return -128;
}

// Address range: 0x4b81c0 - 0x4b825c
int64_t function_4b81c0(int64_t a1, int64_t a2) {
    // 0x4b81c0
    int64_t v1; // bp-88, 0x4b81c0
    function_4b0870(&v1);
    int64_t v2; // bp-56, 0x4b81c0
    function_4b0870(&v2);
    int64_t v3 = function_4b0d80(&v1, 2); // 0x4b81f3
    if ((int32_t)v3 != 0) {
        // 0x4b81fe
        function_4b0890(&v1);
        function_4b0890(&v2);
        return v3 & 0xffffffff;
    }
    int64_t v4 = function_4b1a80(&v2, a2, 2); // 0x4b823d
    int64_t result = v4 & 0xffffffff; // 0x4b8244
    if ((int32_t)v4 != 0) {
        // 0x4b81fe
        function_4b0890(&v1);
        function_4b0890(&v2);
        return result;
    }
    int64_t result2 = function_4b1590(a1, &v1); // 0x4b824e
    if ((int32_t)result2 >= 0) {
        // 0x4b8257
        return result2;
    }
    // 0x4b81fe
    function_4b0890(&v1);
    function_4b0890(&v2);
    return result;
}

// Address range: 0x4e9c00 - 0x4e9c9c
int64_t ZydisCalcAbsoluteAddressEx(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if (a1 == 0 | a2 == 0 || a4 == 0 || a5 == 0) {
        // 0x4e9c6e
        return 0x80100004;
    }
    // 0x4e9c1e
    if (*(int32_t *)(a2 + 32) != 2) {
        // 0x4e9c80
        return function_20030();
    }
    int64_t v1 = a2 + 48; // 0x4e9c24
    if (*(int64_t *)v1 == 0) {
        // 0x4e9c80
        return function_20030();
    }
    uint32_t v2 = *(int32_t *)v1; // 0x4e9c2b
    if ((v2 || 1) == 197) {
        // 0x4e9c80
        return function_20030();
    }
    int64_t v3 = *(int64_t *)(a2 + 72); // 0x4e9c3c
    int64_t v4 = v3; // 0x4e9c43
    if (v2 != 0) {
        // 0x4e9c45
        v4 = *(int64_t *)(8 * (int64_t)v2 + a4) + v3;
    }
    uint32_t v5 = *(int32_t *)(a2 + 52); // 0x4e9c49
    int64_t v6 = v4; // 0x4e9c50
    if (v5 != 0) {
        int64_t v7 = *(int64_t *)(8 * (int64_t)v5 + a4); // 0x4e9c56
        v6 = v7 * (int64_t)*(char *)(a2 + 56) + v4;
    }
    int64_t v8 = v6; // 0x4e9c00
    switch (*(char *)(a1 + 23)) {
        case 32: {
            // 0x4e9c90
            v8 = v6 & 0xffffffff;
        }
        case 64: {
            // 0x4e9c93
            *(int64_t *)a5 = v8;
            return 0x100000;
        }
        default: {
            // 0x4e9c6e
            return 0x80100004;
        }
    }
}

// Address range: 0x52d890 - 0x52d92c
int64_t function_52d890(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a3 - a2; // 0x52d89d
    int64_t v2 = __readfsqword(40); // 0x52d8a4
    int64_t * dest_mem; // 0x52d927
    if (v1 >= 16) {
        int64_t v3 = function_52b020(); // 0x52d90d
        *(int64_t *)a1 = v3;
        *(int64_t *)(a1 + 16) = v1;
        // 0x52d91e
        dest_mem = memcpy((int64_t *)v3, (int64_t *)a2, (int32_t)v1);
        return (int64_t)dest_mem;
    }
    if (v1 == 1) {
        // 0x52d8f8
        int64_t v4; // 0x52d890
        *(char *)a1 = (char)v4;
        // 0x52d8cf
        *(int64_t *)(a1 + 8) = v1;
        *(char *)(v1 + a1) = 0;
        return __readfsqword(40) ^ v2;
    }
    // 0x52d8ca
    if (v1 != 0) {
        // 0x52d91e
        dest_mem = memcpy((int64_t *)a1, (int64_t *)a2, (int32_t)v1);
        return (int64_t)dest_mem;
    }
    // 0x52d8cf
    *(int64_t *)(a1 + 8) = v1;
    *(char *)(v1 + a1) = 0;
    return __readfsqword(40) ^ v2;
}

// Address range: 0x52d960 - 0x52d9fc
int64_t function_52d960(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a3 - a2; // 0x52d96d
    int64_t v2 = __readfsqword(40); // 0x52d974
    int64_t * dest_mem; // 0x52d9f7
    if (v1 >= 16) {
        int64_t v3 = function_52b020(); // 0x52d9dd
        *(int64_t *)a1 = v3;
        *(int64_t *)(a1 + 16) = v1;
        // 0x52d9ee
        dest_mem = memcpy((int64_t *)v3, (int64_t *)a2, (int32_t)v1);
        return (int64_t)dest_mem;
    }
    if (v1 == 1) {
        // 0x52d9c8
        int64_t v4; // 0x52d960
        *(char *)a1 = (char)v4;
        // 0x52d99f
        *(int64_t *)(a1 + 8) = v1;
        *(char *)(v1 + a1) = 0;
        return __readfsqword(40) ^ v2;
    }
    // 0x52d99a
    if (v1 != 0) {
        // 0x52d9ee
        dest_mem = memcpy((int64_t *)a1, (int64_t *)a2, (int32_t)v1);
        return (int64_t)dest_mem;
    }
    // 0x52d99f
    *(int64_t *)(a1 + 8) = v1;
    *(char *)(v1 + a1) = 0;
    return __readfsqword(40) ^ v2;
}

// Address range: 0x549a50 - 0x549aec
int64_t function_549a50(int64_t a1, uint64_t a2, uint64_t a3) {
    if (a2 >= 0x2000000000000000) {
        // 0x549ac5
        function_542590("basic_string::_M_create");
        return (int64_t)"_create";
    }
    int64_t v1 = a2; // 0x549a69
    if (a2 > a3) {
        uint64_t v2 = 2 * a3; // 0x549a90
        v1 = a2;
        if (v2 > a2) {
            int64_t * v3 = (int64_t *)a2;
            if (v2 > 0x1fffffffffffffff) {
                // 0x549a9d
                *v3 = 0x1fffffffffffffff;
                return function_4efd30(-0x8000000000000000);
            }
            // 0x549ab8
            *v3 = v2;
            v1 = v2;
        }
    }
    uint64_t v4 = v1 + 1; // 0x549a6b
    if (v4 < 0x4000000000000000) {
        // 0x549a7e
        return function_4efd30(4 * v4);
    }
    // 0x549ac0
    function_5423b0(v4);
    // 0x549ac5
    function_542590("basic_string::_M_create");
    return (int64_t)"_create";
}

// Address range: 0x54f550 - 0x54f5e9
int64_t function_54f550(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x54f550
    __readfsqword(40);
    int64_t result = a1; // bp-72, 0x54f570
    if ((a5 & 4) != 0) {
        // 0x54f5d0
        function_54ed10(&result);
    }
    if (a3 == 0) {
        // 0x54f5ae
        __readfsqword(40);
        return result;
    }
    int64_t v1 = a3;
    while (!((v1 == 1 | (int32_t)a4 < (int32_t)function_54d830(&result, a4 & 0xffffffff)))) {
        // 0x54f590
        v1--;
    }
    // 0x54f5ae
    __readfsqword(40);
    return result;
}

// Address range: 0x582980 - 0x582a1a
int64_t function_582980(int64_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a3 != 49) {
        // 0x582985
        return function_581610();
    }
    int64_t result = *(int64_t *)(a3 + 8); // 0x58299a
    int32_t v1 = *(int32_t *)(result + 16); // 0x58299e
    int64_t v2 = *(int64_t *)(result + 8); // 0x5829a2
    if (v1 == 0) {
        // 0x582a20
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 256); // 0x5829ae
    int64_t * v4 = (int64_t *)(a1 + 320);
    int64_t v5 = v2; // 0x5829b8
    int64_t v6 = *v3;
    while (v6 == 255) {
        char v7 = *(char *)v5; // 0x582a0c
        *(char *)(a1 + 255) = 0;
        *v4 = *v4 + 1;
        v5++;
        *v3 = 1;
        *(char *)a1 = v7;
        *(char *)(a1 + 264) = v7;
        if (v5 == v2 + (int64_t)v1) {
            // 0x582a20
            return 1;
        }
        v6 = 1;
    }
    // 0x582a13
    return v6 + 1;
}
