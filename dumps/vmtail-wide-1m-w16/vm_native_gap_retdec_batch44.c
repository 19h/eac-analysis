/*
 * Targeted RetDec C for native executable gap queue batch 44.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2a672-0x2a711 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cee6-0x4cf85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50bae-0x50c4d rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c4fc5-0x2c5064 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3275b6-0x327655 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d1a60-0x4d1aff rank=- name=- kind=- bytes=- uncovered=-
 *   0x550d00-0x550d9f rank=- name=- kind=- bytes=- uncovered=-
 *   0x56fd80-0x56fe1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x6307c-0x6311a rank=- name=- kind=- bytes=- uncovered=-
 *   0x65c24-0x65cc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f6bf0-0x4f6c8e rank=- name=- kind=- bytes=- uncovered=-
 *   0x564d20-0x564dbe rank=- name=- kind=- bytes=- uncovered=-
 *   0x5732d0-0x57336e rank=- name=- kind=- bytes=- uncovered=-
 *   0x573380-0x57341e rank=- name=- kind=- bytes=- uncovered=-
 *   0x577da0-0x577e3e rank=- name=- kind=- bytes=- uncovered=-
 *   0x577e50-0x577eee rank=- name=- kind=- bytes=- uncovered=-
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
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
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
int pthread_once(int32_t *once_control, void (*init_routine)(void));
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
int64_t function_254fe();
int64_t function_25856();
int64_t function_2a56d();
int64_t function_2a672(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2c4fc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3275b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_36ff8();
int64_t function_455ee();
int64_t function_4b4e10();
int64_t function_4b4ef0();
int64_t function_4b4f20();
int64_t function_4b5690();
int64_t function_4c708();
int64_t function_4c78a();
int64_t function_4cee6(int64_t a1, uint64_t a2);
int64_t function_4d1a60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4efd30();
int64_t function_4f5b50();
int64_t function_4f6bf0(int64_t result, int64_t a2, int64_t a3);
int64_t function_4fc010();
int64_t function_50bae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_542590();
int64_t function_550d00(int64_t result, int64_t a2, int64_t a3, uint64_t n, int64_t a5);
int64_t function_564d20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_56fd80(int64_t a1, uint64_t a2, uint64_t result, int64_t a4);
int64_t function_5732d0(int64_t a1, int64_t a2, unsigned char a3);
int64_t function_573300(int64_t a1, int64_t a2);
int64_t function_573318(int64_t a1, int64_t a2);
int64_t function_573330(int64_t a1, int64_t a2);
int64_t function_573348(int64_t a1, int64_t a2);
int64_t function_573380(int64_t a1, int64_t a2, unsigned char a3);
int64_t function_5733b0(int64_t a1, int64_t a2);
int64_t function_5733c8(int64_t a1, int64_t a2);
int64_t function_5733e0(int64_t a1, int64_t a2);
int64_t function_5733f8(int64_t a1, int64_t a2);
int64_t function_577da0(int64_t a1, int64_t a2, unsigned char a3);
int64_t function_577dd0(int64_t a1, int64_t a2);
int64_t function_577de8(int64_t a1, int64_t a2);
int64_t function_577e00(int64_t a1, int64_t a2);
int64_t function_577e18(int64_t a1, int64_t a2);
int64_t function_577e50(int64_t a1, int64_t a2, unsigned char a3);
int64_t function_577e80(int64_t a1, int64_t a2);
int64_t function_577e98(int64_t a1, int64_t a2);
int64_t function_577eb0(int64_t a1, int64_t a2);
int64_t function_577ec8(int64_t a1, int64_t a2);
int64_t function_5858c();
int64_t function_619f2();
int64_t function_63032();
int64_t function_6307c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_65850();
int64_t function_65868();
int64_t function_65875();
int64_t function_65c24(int64_t a1, int64_t a2, int64_t a3);
int64_t function_caf2a();
int64_t function_cf3c7();

// Address range: 0x2a672 - 0x2a711
int64_t function_2a672(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a672
    if (a1 == 0) {
        // 0x2a70d
        return 10;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x2a681
    if (*v1 == 0) {
        // 0x2a70d
        return 10;
    }
    int32_t * v2 = (int32_t *)(a1 + 4); // 0x2a68c
    if (*v2 == 0) {
        // 0x2a70d
        return 10;
    }
    int32_t v3 = *(int32_t *)(a1 + 16); // 0x2a692
    if (v3 == 0 || a2 == 0 || a3 == 0) {
        // 0x2a70d
        return 10;
    }
    // 0x2a6a3
    if (g11 != 1) {
        // 0x2a70d
        return (int64_t)&g1 & 0xffffffff;
    }
    // 0x2a6b2
    *(int32_t *)a3 = v3;
    int64_t v4 = function_619f2(function_2a56d(), *v1, *v2, a2, a3); // 0x2a6dc
    int64_t result = 0x7fffffff; // 0x2a6ea
    if ((int32_t)v4 < 7) {
        uint32_t v5 = *(int32_t *)((4 * v4 & 0x3fffffffc) + (int64_t)&g5); // 0x2a6f5
        result = v5;
    }
    // 0x2a703
    return result;
}

// Address range: 0x4cee6 - 0x4cf85
int64_t function_4cee6(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4ceee
    int64_t v2 = *v1; // 0x4ceee
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x4cef5
    int64_t v4 = *v3 - v2; // 0x4cef9
    if (v4 >= a2) {
        int64_t result = v4; // 0x4cf08
        if (a2 != 0) {
            // 0x4cf0a
            __asm_rep_stosb_memset((char *)v2, 0, a2);
            result = 0;
        }
        // 0x4cf14
        *v1 = v2 + a2;
        // 0x4cf7c
        return result;
    }
    int64_t v5 = function_25856(); // 0x4cf26
    int64_t v6 = 0; // 0x4cf34
    if (v5 != 0) {
        // 0x4cf36
        v6 = function_4efd30(v5);
    }
    int64_t v7 = v6 + v2 - a1;
    __asm_rep_stosb_memset((char *)v7, 0, a2);
    bool v8; // 0x4cee6
    int64_t v9 = v7 + (v8 ? -1 : 1) * a2; // 0x4cf55
    function_4c78a(v9);
    int64_t result2 = function_4c708(v9); // 0x4cf62
    *(int64_t *)a1 = v6;
    *v1 = v7 + a2;
    *v3 = v6 + v5;
    // 0x4cf7c
    return result2;
}

// Address range: 0x50bae - 0x50c4d
int64_t function_50bae(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0; // bp-56, 0x50bbe
    int64_t v2 = __readfsqword(40); // 0x50bdb
    int64_t v3 = function_5858c(); // 0x50beb
    int64_t v4 = 0; // 0x50bf2
    if ((char)v3 != 0 && &g2 <= NULL) {
        int32_t memcmp_rc = memcmp(NULL, &g6, 4); // 0x50c1b
        v4 = 0;
        if (memcmp_rc == 0) {
            // 0x50c24
            v4 = (int64_t)*(int32_t *)4;
        }
    }
    // 0x50c27
    function_254fe(&v1);
    int64_t result = v4; // 0x50c3f
    if (v2 != __readfsqword(40)) {
        // 0x50c41
        __stack_chk_fail();
        result = (int64_t)&g12;
    }
    // 0x50c46
    return result;
}

// Address range: 0x6307c - 0x6311a
int64_t function_6307c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 + 1; // 0x6308d
    *(char *)a1 = 1;
    int64_t v2 = __readfsqword(40); // 0x630a0
    function_63032(v1);
    *(int64_t *)(a1 + 32) = 0;
    int128_t v3; // bp-72, 0x6307c
    function_63032((int64_t)&v3);
    function_455ee((int64_t *)&v3, 24, 0);
    int128_t v4 = __asm_movups(0x8000000000000000 * v3 >> 64); // 0x630ec
    int64_t v5 = __readfsqword(40); // 0x630f9
    __asm_movups_133(*(int128_t *)v1, v4);
    int64_t result = 0; // 0x63106
    if (v2 != v5) {
        // 0x63108
        __stack_chk_fail();
        result = (int64_t)&g12;
    }
    // 0x6310d
    return result;
}

// Address range: 0x65c24 - 0x65cc2
int64_t function_65c24(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a3 - a2; // 0x65c35
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x65c38
    if (v1 > *v2 - a1) {
        int64_t v3 = function_65868(v1); // 0x65c4d
        function_65875(a2, a3, v3);
        int64_t result = function_65850(a2); // 0x65c66
        *(int64_t *)a1 = v3;
        int64_t v4 = v3 + v1; // 0x65c6e
        *(int64_t *)(a1 + 8) = v4;
        *v2 = v4;
        // 0x65cb9
        return result;
    }
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x65c7b
    uint64_t v6 = *v5 - a1; // 0x65c7f
    int64_t result2; // 0x65c24
    if (v1 > v6) {
        int64_t v7 = v6 + a2; // 0x65c98
        function_21a2d(a2, v7, a1);
        int64_t v8 = function_21a2d(v7, a3, *v5); // 0x65cb0
        *v5 = v8;
        result2 = v8;
    } else {
        int64_t v9 = function_21a2d(a2, a3, a1); // 0x65c8d
        *v5 = v9;
        result2 = v9;
    }
    // 0x65cb9
    return result2;
}

// Address range: 0x2c4fc5 - 0x2c5064
int64_t function_2c4fc5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2c4fc5
    return function_cf3c7();
}

// Address range: 0x3275b6 - 0x327655
int64_t function_3275b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3275b6
    int64_t v1; // 0x3275b6
    char * v2 = (char *)(v1 - 121); // 0x3275b6
    *v2 = *v2 + (char)a4;
    return function_caf2a();
}

// Address range: 0x4d1a60 - 0x4d1afb
int64_t function_4d1a60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 & 0xffffffff; // 0x4d1a80
    int64_t result = function_4b4e10(a2 & 0xffffffff, v1, 1); // 0x4d1a8a
    if (result == 0) {
        // 0x4d1ab4
        return 0;
    }
    // 0x4d1a97
    if (*(int32_t *)(result + 32) != 16) {
        // 0x4d1ab4
        return result;
    }
    // 0x4d1a9d
    function_4b4ef0(a1);
    int64_t result2 = function_4b5690(a1, result); // 0x4d1aab
    if ((int32_t)result2 == 0) {
        // 0x4d1ad0
        return function_4b4f20(a1, a3, v1, 1);
    }
    // 0x4d1ab4
    return result2;
}

// Address range: 0x4f6bf0 - 0x4f6c8b
int64_t function_4f6bf0(int64_t result, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x4f6c09
    *v1 = 0;
    __readfsqword(40);
    function_4f5b50();
    char v2; // 0x4f6bf0
    if (v2 == 0) {
        // 0x4f6c32
        __readfsqword(40);
        return result;
    }
    // 0x4f6c50
    char v3; // bp-33, 0x4f6bf0
    int64_t v4 = *(int64_t *)((int64_t)&v3 - 24); // 0x4f6c59
    int64_t v5 = *(int64_t *)(result + 232 + v4); // 0x4f6c5d
    int64_t v6 = *(int64_t *)v5; // 0x4f6c65
    *v1 = v6;
    if (v6 != a3) {
        int64_t v7 = *(int64_t *)(v5 - 24) + result; // 0x4f6c7b
        function_4fc010(v7, *(int32_t *)(v7 + 32) | 6, a3);
    }
    // 0x4f6c32
    __readfsqword(40);
    return result;
}

// Address range: 0x550d00 - 0x550d9f
int64_t function_550d00(int64_t result, int64_t a2, int64_t a3, uint64_t n, int64_t a5) {
    // 0x550d00
    if (a3 + 0xffffffffffffffe - *(int64_t *)(result - 24) < n) {
        // 0x550d79
        function_542590("basic_string::_M_replace_aux");
        return 0x74735f6369736162;
    }
    // 0x550d26
    function_36ff8();
    if (n == 0) {
        // 0x550d55
        return result;
    }
    int32_t wc = a5;
    int32_t * wstr = (int32_t *)(4 * a2 + result);
    if (n == 1) {
        // 0x550d68
        *wstr = wc;
        return result;
    }
    // 0x550d4a
    wmemset(wstr, wc, (int32_t)n);
    // 0x550d55
    return result;
}

// Address range: 0x564d20 - 0x564db8
int64_t function_564d20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x564d30
    char * str3; // 0x564d20
    int64_t str4; // 0x564d20
    if (a5 == a7) {
        int64_t str2 = *(int64_t *)(a6 + 8); // 0x564d80
        if (str2 == v1) {
            // 0x564d69
            int64_t result; // 0x564d20
            return result;
        }
        char * str = (char *)v1;
        if (*str == 42) {
            // 0x564db0
            if (*(int64_t *)(a4 + 8) != v1) {
                // 0x564d69
                return 0;
            }
            goto lab_0x564d5a;
        } else {
            // 0x564d8e
            if (strcmp(str, (char *)str2) == 0) {
                // 0x564d69
                return 0;
            }
            int64_t v2 = *(int64_t *)(a4 + 8); // 0x564da4
            str3 = str;
            str4 = v2;
            if (v1 != v2) {
                goto lab_0x564d4e;
            } else {
                goto lab_0x564d5a;
            }
        }
    } else {
        int64_t v3 = *(int64_t *)(a4 + 8); // 0x564d40
        if (v3 == v1) {
            goto lab_0x564d5a;
        } else {
            char * v4 = (char *)v1;
            str3 = v4;
            str4 = v3;
            if (*v4 == 42) {
                // 0x564d69
                return 0;
            }
            goto lab_0x564d4e;
        }
    }
  lab_0x564d5a:
    // 0x564d5a
    *(int64_t *)a8 = a5;
    *(int32_t *)(a8 + 8) = (int32_t)a3;
    *(int32_t *)(a8 + 16) = 1;
    // 0x564d69
    return 0;
  lab_0x564d4e:
    // 0x564d4e
    if (strcmp(str3, (char *)str4) != 0) {
        // 0x564d69
        return 0;
    }
    goto lab_0x564d5a;
}

// Address range: 0x56fd80 - 0x56fe1f
// From class:    std::ctype_byname<wchar_t>
// Type:          virtual member function
int64_t function_56fd80(int64_t a1, uint64_t a2, uint64_t result, int64_t a4) {
    if (a2 >= result) {
        // 0x56fe10
        return result;
    }
    int64_t v1 = a4; // 0x56fdbc
    int64_t v2 = a2; // 0x56fdbc
    int64_t v3 = 0;
    int64_t v4 = 0;
    int64_t v5 = *(int64_t *)(a1 + (int64_t)&g4 + 8 * v3); // 0x56fdcc
    int32_t v6 = *(int32_t *)v2; // 0x56fdd4
    int64_t v7 = v4; // 0x56fdde
    int16_t v8; // 0x56fde0
    if (__iswctype_l(v6, (int32_t)v5, (struct __locale_struct *)*(int64_t *)(a1 + 16)) != 0) {
        // 0x56fde0
        v8 = *(int16_t *)(a1 + (int64_t)&g3 + 2 * v3);
        v7 = v8 | (int16_t)v4;
    }
    int64_t v9 = v7;
    int64_t v10 = v3 + 1; // 0x56fde9
    while (v10 != 12) {
        // 0x56fdc8
        v3 = v10;
        v4 = v9;
        v5 = *(int64_t *)(a1 + (int64_t)&g4 + 8 * v3);
        v6 = *(int32_t *)v2;
        v7 = v4;
        if (__iswctype_l(v6, (int32_t)v5, (struct __locale_struct *)*(int64_t *)(a1 + 16)) != 0) {
            // 0x56fde0
            v8 = *(int16_t *)(a1 + (int64_t)&g3 + 2 * v3);
            v7 = v8 | (int16_t)v4;
        }
        // 0x56fde9
        v9 = v7;
        v10 = v3 + 1;
    }
    // 0x56fdf3
    *(int16_t *)v1 = (int16_t)v9;
    v1 += 2;
    v2 += 4;
    while (v1 != (int64_t)(a4 + 2 + 2 * (-1 - a2 + result) / 4)) {
        // 0x56fdc0
        v3 = 0;
        v4 = 0;
        v5 = *(int64_t *)(a1 + (int64_t)&g4 + 8 * v3);
        v6 = *(int32_t *)v2;
        v7 = v4;
        if (__iswctype_l(v6, (int32_t)v5, (struct __locale_struct *)*(int64_t *)(a1 + 16)) != 0) {
            // 0x56fde0
            v8 = *(int16_t *)(a1 + (int64_t)&g3 + 2 * v3);
            v7 = v8 | (int16_t)v4;
        }
        // 0x56fde9
        v9 = v7;
        v10 = v3 + 1;
        while (v10 != 12) {
            // 0x56fdc8
            v3 = v10;
            v4 = v9;
            v5 = *(int64_t *)(a1 + (int64_t)&g4 + 8 * v3);
            v6 = *(int32_t *)v2;
            v7 = v4;
            if (__iswctype_l(v6, (int32_t)v5, (struct __locale_struct *)*(int64_t *)(a1 + 16)) != 0) {
                // 0x56fde0
                v8 = *(int16_t *)(a1 + (int64_t)&g3 + 2 * v3);
                v7 = v8 | (int16_t)v4;
            }
            // 0x56fde9
            v9 = v7;
            v10 = v3 + 1;
        }
        // 0x56fdf3
        *(int16_t *)v1 = (int16_t)v9;
        v1 += 2;
        v2 += 4;
    }
    // 0x56fe10
    return result;
}

// Address range: 0x5732d0 - 0x5732fe
int64_t function_5732d0(int64_t a1, int64_t a2, unsigned char a3) {
    int64_t v1 = (int64_t)a3 + 0xffffff9c; // 0x5732e0
    if ((char)v1 >= 22) {
        // 0x573374
        return v1 & 0xffffffff;
    }
    int32_t v2 = *(int32_t *)((4 * v1 & 1020) + (int64_t)&g7); // 0x5732f5
    return (int64_t)v2 + (int64_t)&g7;
}

// Address range: 0x573300 - 0x573314
int64_t function_573300(int64_t a1, int64_t a2) {
    // 0x573300
    return *(int64_t *)(a1 + 56);
}

// Address range: 0x573318 - 0x57332c
int64_t function_573318(int64_t a1, int64_t a2) {
    // 0x573318
    return *(int64_t *)(a1 + 40);
}

// Address range: 0x573330 - 0x573344
int64_t function_573330(int64_t a1, int64_t a2) {
    // 0x573330
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x573348 - 0x57335c
int64_t function_573348(int64_t a1, int64_t a2) {
    // 0x573348
    return *(int64_t *)(a1 + 48);
}

// Address range: 0x573380 - 0x5733ae
int64_t function_573380(int64_t a1, int64_t a2, unsigned char a3) {
    int64_t v1 = (int64_t)a3 + 0xffffff9c; // 0x573390
    if ((char)v1 >= 22) {
        // 0x573424
        return v1 & 0xffffffff;
    }
    int32_t v2 = *(int32_t *)((4 * v1 & 1020) + (int64_t)&g8); // 0x5733a5
    return (int64_t)v2 + (int64_t)&g8;
}

// Address range: 0x5733b0 - 0x5733c4
int64_t function_5733b0(int64_t a1, int64_t a2) {
    // 0x5733b0
    return *(int64_t *)(a1 + 56);
}

// Address range: 0x5733c8 - 0x5733dc
int64_t function_5733c8(int64_t a1, int64_t a2) {
    // 0x5733c8
    return *(int64_t *)(a1 + 40);
}

// Address range: 0x5733e0 - 0x5733f4
int64_t function_5733e0(int64_t a1, int64_t a2) {
    // 0x5733e0
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x5733f8 - 0x57340c
int64_t function_5733f8(int64_t a1, int64_t a2) {
    // 0x5733f8
    return *(int64_t *)(a1 + 48);
}

// Address range: 0x577da0 - 0x577dce
int64_t function_577da0(int64_t a1, int64_t a2, unsigned char a3) {
    int64_t v1 = (int64_t)a3 + 0xffffff9c; // 0x577db0
    if ((char)v1 >= 22) {
        // 0x577e44
        return v1 & 0xffffffff;
    }
    int32_t v2 = *(int32_t *)((4 * v1 & 1020) + (int64_t)&g9); // 0x577dc5
    return (int64_t)v2 + (int64_t)&g9;
}

// Address range: 0x577dd0 - 0x577de4
int64_t function_577dd0(int64_t a1, int64_t a2) {
    // 0x577dd0
    return *(int64_t *)(a1 + 56);
}

// Address range: 0x577de8 - 0x577dfc
int64_t function_577de8(int64_t a1, int64_t a2) {
    // 0x577de8
    return *(int64_t *)(a1 + 40);
}

// Address range: 0x577e00 - 0x577e14
int64_t function_577e00(int64_t a1, int64_t a2) {
    // 0x577e00
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x577e18 - 0x577e2c
int64_t function_577e18(int64_t a1, int64_t a2) {
    // 0x577e18
    return *(int64_t *)(a1 + 48);
}

// Address range: 0x577e50 - 0x577e7e
int64_t function_577e50(int64_t a1, int64_t a2, unsigned char a3) {
    int64_t v1 = (int64_t)a3 + 0xffffff9c; // 0x577e60
    if ((char)v1 >= 22) {
        // 0x577ef4
        return v1 & 0xffffffff;
    }
    int32_t v2 = *(int32_t *)((4 * v1 & 1020) + (int64_t)&g10); // 0x577e75
    return (int64_t)v2 + (int64_t)&g10;
}

// Address range: 0x577e80 - 0x577e94
int64_t function_577e80(int64_t a1, int64_t a2) {
    // 0x577e80
    return *(int64_t *)(a1 + 56);
}

// Address range: 0x577e98 - 0x577eac
int64_t function_577e98(int64_t a1, int64_t a2) {
    // 0x577e98
    return *(int64_t *)(a1 + 40);
}

// Address range: 0x577eb0 - 0x577ec4
int64_t function_577eb0(int64_t a1, int64_t a2) {
    // 0x577eb0
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x577ec8 - 0x577edc
int64_t function_577ec8(int64_t a1, int64_t a2) {
    // 0x577ec8
    return *(int64_t *)(a1 + 48);
}
