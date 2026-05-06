/*
 * Targeted RetDec C for native executable gap queue batch 47.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x50a470-0x50a506 rank=- name=- kind=- bytes=- uncovered=-
 *   0x554470-0x554506 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cbdc-0x4cc71 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54be6-0x54c7b rank=- name=- kind=- bytes=- uncovered=-
 *   0x494251-0x4942e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x494306-0x49439b rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0e20-0x4b0eb5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba5b0-0x4ba645 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54cb80-0x54cc15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26452-0x264e5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50c4e-0x50ce1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x330190-0x330223 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49baf0-0x49bb83 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bf7e0-0x4bf873 rank=- name=- kind=- bytes=- uncovered=-
 *   0x568aa0-0x568b33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b590-0x56b623 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
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

int64_t function_21a2d();
int64_t function_2508e();
int64_t function_254fe();
int64_t function_256ba();
int64_t function_261a4();
int64_t function_26452(int64_t a1, int64_t a2);
int64_t function_330190(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3af2e();
int64_t function_494251(int64_t a1, int64_t a2);
int64_t function_494306(int64_t a1, int64_t a2);
int64_t function_49b4a0();
int64_t function_49baf0(int64_t a1, int64_t a2);
int64_t function_4b08f0();
int64_t function_4b0e20(int64_t a1, uint64_t a2, uint64_t a3);
int64_t function_4ba5b0(uint64_t a1);
int64_t function_4bf7e0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4cbdc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ce440();
int64_t function_4ce8f0();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f2d50();
int64_t function_50a470(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_50c4e(int64_t a1, int64_t a2);
int64_t function_53a4c();
int64_t function_542290();
int64_t function_54be6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_54cb80(int64_t a1);
int64_t function_554470(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_555410();
int64_t function_5659d0();
int64_t function_565f80();
int64_t function_566180();
int64_t function_567a10();
int64_t function_567d40();
int64_t function_567f20();
int64_t function_568aa0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_56b590(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6837a();
int64_t function_c9849();

// Address range: 0x26452 - 0x264e5
int64_t function_26452(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x26463
    int64_t v2 = a1; // bp-56, 0x26479
    *(int64_t *)a1 = (int64_t)&g10;
    int64_t v3 = a1 - 8;
    int64_t v4 = function_261a4(a2, &v2, v3); // 0x26494
    int64_t v5 = a1; // 0x2649f
    if ((char)v4 != 0) {
        int64_t v6 = v3;
        function_256ba(a1, v6);
        int64_t v7 = v6 - 8;
        int64_t v8 = function_261a4(a2, &v2, v7); // 0x26494
        v5 = v6;
        while ((char)v8 != 0) {
            int64_t v9 = v6;
            v6 = v7;
            function_256ba(v9, v6);
            v7 = v6 - 8;
            v8 = function_261a4(a2, &v2, v7);
            v5 = v6;
        }
    }
    // 0x264b2
    function_256ba(v5, (int64_t)&v2);
    function_2508e(&v2);
    int64_t result = 0; // 0x264d3
    if (v1 != __readfsqword(40)) {
        // 0x264d5
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x264da
    return result;
}

// Address range: 0x4cbdc - 0x4cc71
int64_t function_4cbdc(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4cbfd
    int32_t * v2; // bp-72, 0x4cbdc
    function_3af2e((int64_t *)&v2);
    *v2 = (int32_t)a3;
    __asm_rep_movsb_memcpy((char *)((int64_t)v2 + 4), (char *)a2, a3);
    int64_t v3 = (int64_t)v2; // 0x4cc37
    int64_t v4; // 0x4cbdc
    function_6837a(a1 + (int64_t)&g1, v3, v4 - v3, 0);
    function_254fe((int64_t *)&v2);
    int64_t result = 0; // 0x4cc5f
    if (v1 != __readfsqword(40)) {
        // 0x4cc61
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x4cc66
    return result;
}

// Address range: 0x50c4e - 0x50ce1
int64_t function_50c4e(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x50c52
    int64_t v2 = a1; // bp-40, 0x50c6c
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x50c74
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x50c85
    *v4 = 0;
    *(int64_t *)a1 = a2;
    *(int64_t *)a2 = 0;
    int64_t * v5 = (int64_t *)(a2 + 8); // 0x50c9f
    *v3 = *v5;
    *v5 = *v3;
    int64_t * v6 = (int64_t *)(a2 + 16); // 0x50caf
    *v4 = *v6;
    *v6 = *v4;
    function_254fe(&v2);
    int64_t result = 0; // 0x50cd5
    if (v1 != __readfsqword(40)) {
        // 0x50cd7
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x50cdc
    return result;
}

// Address range: 0x54be6 - 0x54c7b
int64_t function_54be6(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a3 - a2; // 0x54bf7
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x54bfa
    if (v1 > *v2 - a1) {
        int64_t v3 = function_4efd30(v1); // 0x54c0f
        function_21a2d(a2, a3, v3);
        int64_t result = function_53a4c(a2); // 0x54c28
        *(int64_t *)a1 = v3;
        int64_t v4 = v3 + v1; // 0x54c30
        *(int64_t *)(a1 + 8) = v4;
        *v2 = v4;
        // 0x54c72
        return result;
    }
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x54c3d
    uint64_t v6 = *v5 - a1; // 0x54c41
    int64_t v7 = a1; // 0x54c47
    int64_t v8 = a2; // 0x54c47
    if (v1 > v6) {
        // 0x54c51
        v8 = v6 + a2;
        function_21a2d(a2, v8, a1);
        v7 = *v5;
    }
    int64_t result2 = function_21a2d(v8, a3, v7); // 0x54c69
    *v5 = result2;
    // 0x54c72
    return result2;
}

// Address range: 0x330190 - 0x330223
int64_t function_330190(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x330190
    int64_t v1; // 0x330190
    int64_t v2 = (int64_t)&v1; // 0x3301aa
    *(int64_t *)(v2 - 8) = a4;
    *(int64_t *)(v2 - 16) = a1;
    v1 = v2 + 16;
    return function_c9849(a1);
}

// Address range: 0x494251 - 0x4942e6
int64_t function_494251(int64_t a1, int64_t a2) {
    int64_t v1 = a2; // bp-24, 0x49425a
    int64_t v2 = __readfsqword(40); // 0x49425f
    *(int64_t *)__tls_get_addr(&g6) = (int64_t)&v1;
    *(int64_t *)__tls_get_addr(&g7) = 0x494231;
    if (g8 == 0) {
        // 0x4942c5
        function_542290(0xffffffff);
        goto lab_0x4942cc;
    } else {
        int32_t v3 = pthread_once((int32_t *)a1, g9); // 0x4942b7
        if (v3 == 0) {
            goto lab_0x4942cc;
        } else {
            // 0x4942c5
            function_542290((int64_t)v3 & 0xffffffff);
            goto lab_0x4942cc;
        }
    }
  lab_0x4942cc:;
    int64_t result = 0; // 0x4942da
    if (v2 != __readfsqword(40)) {
        // 0x4942dc
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x4942e1
    return result;
}

// Address range: 0x494306 - 0x49439b
int64_t function_494306(int64_t a1, int64_t a2) {
    int64_t v1 = a2; // bp-24, 0x49430f
    int64_t v2 = __readfsqword(40); // 0x494314
    *(int64_t *)__tls_get_addr(&g6) = (int64_t)&v1;
    *(int64_t *)__tls_get_addr(&g7) = 0x4942e6;
    if (g8 == 0) {
        // 0x49437a
        function_542290(0xffffffff);
        goto lab_0x494381;
    } else {
        int32_t v3 = pthread_once((int32_t *)a1, g9); // 0x49436c
        if (v3 == 0) {
            goto lab_0x494381;
        } else {
            // 0x49437a
            function_542290((int64_t)v3 & 0xffffffff);
            goto lab_0x494381;
        }
    }
  lab_0x494381:;
    int64_t result = 0; // 0x49438f
    if (v2 != __readfsqword(40)) {
        // 0x494391
        __stack_chk_fail();
        result = (int64_t)&g11;
    }
    // 0x494396
    return result;
}

// Address range: 0x49baf0 - 0x49bb81
int64_t function_49baf0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 272); // 0x49bb04
    uint64_t result = *v1; // 0x49bb04
    if (result != 0) {
        // 0x49bb10
        if (result < *(int64_t *)(a1 + 224)) {
            // 0x49bb5c
            return result;
        }
    }
    // 0x49bb20
    *v1 = 0;
    int64_t v2 = function_49b4a0(a1, (*(char *)(a1 + 372) & 2) == 0 ? 5 : 13); // 0x49bb4d
    // 0x49bb5c
    return (int32_t)v2 != 0 ? v2 : a1;
}

// Address range: 0x4b0e20 - 0x4b0eb4
int64_t function_4b0e20(int64_t a1, uint64_t a2, uint64_t a3) {
    unsigned char v1 = (char)a3; // 0x4b0e42
    if (v1 >= 2) {
        // 0x4b0e86
        return 0xfffffffc;
    }
    // 0x4b0e50
    if (64 * *(int64_t *)(a1 + 8) <= a2) {
        // 0x4b0ea0
        if (v1 == 0) {
            // 0x4b0e86
            return 0;
        }
        int64_t result = function_4b08f0(); // 0x4b0eab
        if ((int32_t)result != 0) {
            // 0x4b0e86
            return result;
        }
    }
    uint64_t v2 = a2 % 64; // 0x4b0e67
    int64_t v3 = -2; // 0x4b0e78
    if (v2 != 0) {
        v3 = 0xfffffffffffffffe >> 64 - v2 | -2 << v2;
    }
    int64_t * v4 = (int64_t *)(*(int64_t *)(a1 + 16) + 8 * a2 / 64); // 0x4b0e7b
    *v4 = *v4 & v3 | a3 % 256 << v2;
    // 0x4b0e86
    return 0;
}

// Address range: 0x4ba5b0 - 0x4ba645
int64_t function_4ba5b0(uint64_t a1) {
    // 0x4ba5b0
    int64_t result; // 0x4ba5b0
    if (a1 == 0) {
        // 0x4ba5ed
        return result;
    }
    if (a1 % 2 != 0) {
        // 0x4ba640
        *(char *)a1 = 0;
        int64_t result2; // 0x4ba5b0
        return result2;
    }
    if ((a1 & 2) != 0) {
        // 0x4ba5ed
        return result;
    }
    int64_t v1 = 248; // 0x4ba5d2
    int64_t v2 = a1; // 0x4ba5d2
    if ((a1 & 4) != 0) {
        // 0x4ba628
        *(int32_t *)a1 = 0;
        v1 = 244;
        v2 = a1 + 4;
    }
    uint64_t v3 = v1 / 8; // 0x4ba5d8
    __asm_rep_stosq_memset((char *)v2, 0, v3);
    if ((v1 & 4) != 0) {
        // 0x4ba610
        bool v4; // 0x4ba5b0
        *(int32_t *)(v3 * (v4 ? -8 : 8) + v2) = 0;
    }
    // 0x4ba5ed
    return 0;
}

// Address range: 0x4bf7e0 - 0x4bf872
int64_t function_4bf7e0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    if (a4 >= 65) {
        // 0x4bf858
        int64_t v1; // bp-104, 0x4bf7e0
        return function_4ce8f0(a3, a4, &v1, 0);
    }
    int64_t v2 = 0x100000000000000 * a2 >> 56; // bp-120, 0x4bf820
    function_4ce440(a1, &v2, 2);
    function_4ce440(a1, (int64_t *)a3, a4);
    return 0;
}

// Address range: 0x50a470 - 0x50a506
// From class:    std::messages<wchar_t>
// Type:          constructor
int64_t function_50a470(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x50a483
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x50a48e
    *v2 = 0;
    int64_t v3 = a2; // bp-32, 0x50a496
    *(int32_t *)(a1 + 8) = (int32_t)(a4 != 0);
    *(int64_t *)a1 = (int64_t)&g2;
    int64_t str2 = function_565f80(); // 0x50a4ac
    char * str = (char *)a3; // 0x50a4ba
    if (strcmp(str, (char *)str2) == 0) {
        // 0x50a4c3
        *v2 = str2;
        int64_t result = function_567a10(&v3); // 0x50a4cc
        *v1 = result;
        return result;
    }
    int64_t v4 = (int64_t)strlen(str) + 1; // 0x50a4e8
    int64_t v5 = function_4eec00(v4); // 0x50a4ef
    int64_t dest_mem = (int64_t)memcpy((int64_t *)v5, (int64_t *)a3, (int32_t)v4); // 0x50a4fd
    *v2 = dest_mem;
    return dest_mem;
}

// Address range: 0x54cb80 - 0x54cc15
// From class:    std::ios_base
// Type:          constructor
int64_t function_54cb80(int64_t a1) {
    int64_t v1 = a1 + 64; // 0x54cb87
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 24) = 0;
    *(int32_t *)(a1 + 28) = 0;
    *(int32_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)a1 = (int64_t)&g4;
    *(int64_t *)(a1 + 48) = 0;
    *(int64_t *)(a1 + 56) = 0;
    int64_t v2 = v1; // 0x54cbd9
    *(int64_t *)v2 = 0;
    *(int64_t *)(v2 + 8) = 0;
    while (a1 + 176 != v2) {
        // 0x54cbe0
        v2 += 16;
        *(int64_t *)v2 = 0;
        *(int64_t *)(v2 + 8) = 0;
    }
    // 0x54cbf8
    *(int32_t *)(a1 + 192) = 8;
    *(int64_t *)(a1 + 200) = v1;
    return function_4f2d50(a1 + 208);
}

// Address range: 0x554470 - 0x554506
// From class:    std::messages<char>
// Type:          constructor
int64_t function_554470(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x554483
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x55448e
    *v2 = 0;
    int64_t v3 = a2; // bp-32, 0x554496
    *(int32_t *)(a1 + 8) = (int32_t)(a4 != 0);
    *(int64_t *)a1 = (int64_t)&g5;
    int64_t str2 = function_565f80(); // 0x5544ac
    char * str = (char *)a3; // 0x5544ba
    if (strcmp(str, (char *)str2) == 0) {
        // 0x5544c3
        *v2 = str2;
        int64_t result = function_567a10(&v3); // 0x5544cc
        *v1 = result;
        return result;
    }
    int64_t v4 = (int64_t)strlen(str) + 1; // 0x5544e8
    int64_t v5 = function_4eec00(v4); // 0x5544ef
    int64_t dest_mem = (int64_t)memcpy((int64_t *)v5, (int64_t *)a3, (int32_t)v4); // 0x5544fd
    *v2 = dest_mem;
    return dest_mem;
}

// Address range: 0x568aa0 - 0x568b33
// From class:    std::__cxx11::messages_byname<char>
// Type:          virtual member function
int64_t function_568aa0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x568ab3
    int64_t v2 = *(int64_t *)(function_555410() + 16); // 0x568ac8
    bind_textdomain_codeset((char *)v2, __nl_langinfo_l(14, (struct __locale_struct *)v2));
    int64_t v3 = function_567d40(); // 0x568ae5
    int64_t v4; // bp-56, 0x568aa0
    function_5659d0(&v4, a3);
    int64_t v5 = function_567f20(v3, a3, &v4); // 0x568b02
    function_566180(&v4);
    if (v1 == __readfsqword(40)) {
        // 0x568b23
        return v5 & 0xffffffff;
    }
    // 0x568b2e
    __stack_chk_fail();
    return (int64_t)&g11;
}

// Address range: 0x56b590 - 0x56b623
// From class:    std::messages_byname<char>
// Type:          virtual member function
int64_t function_56b590(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x56b5a3
    int64_t v2 = *(int64_t *)(function_555410() + 16); // 0x56b5b8
    bind_textdomain_codeset((char *)v2, __nl_langinfo_l(14, (struct __locale_struct *)v2));
    int64_t v3 = function_567d40(); // 0x56b5d5
    int64_t v4; // bp-56, 0x56b590
    function_5659d0(&v4, a3);
    int64_t v5 = function_567f20(v3, a3, &v4); // 0x56b5f2
    function_566180(&v4);
    if (v1 == __readfsqword(40)) {
        // 0x56b613
        return v5 & 0xffffffff;
    }
    // 0x56b61e
    __stack_chk_fail();
    return (int64_t)&g11;
}
