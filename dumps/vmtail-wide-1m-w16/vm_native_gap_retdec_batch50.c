/*
 * Targeted RetDec C for native executable gap queue batch 50.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x506f00-0x506f8e rank=- name=- kind=- bytes=- uncovered=-
 *   0x507020-0x5070ae rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dcac-0x3dd39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x71c60-0x71ced rank=- name=- kind=- bytes=- uncovered=-
 *   0x4978a0-0x49792d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d8f60-0x4d8fed rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e6e0-0x54e76d rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e770-0x54e7fd rank=- name=- kind=- bytes=- uncovered=-
 *   0x44ae0-0x44b6c rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e640-0x54e6cc rank=- name=- kind=- bytes=- uncovered=-
 *   0x550870-0x5508fc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2263e-0x226c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fbc4-0x4fc4f rank=- name=- kind=- bytes=- uncovered=-
 *   0x5c3b0-0x5c4c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x686a0-0x6872b rank=- name=- kind=- bytes=- uncovered=-
 *   0x126851-0x1268dc rank=- name=- kind=- bytes=- uncovered=-
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
int pthread_once(int32_t *once_control, int64_t init_routine);
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

int64_t function_126851(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_206d0();
int64_t function_208d0();
int64_t function_209b0();
int64_t function_2263e(int64_t a1, int64_t a2);
int64_t function_24e6a();
int64_t function_2508e();
int64_t function_251d6();
int64_t function_35fcc();
int64_t function_3dcac(int64_t a1);
int64_t function_44ae0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_497750();
int64_t function_4977a0();
int64_t function_4978a0(int64_t a1);
int64_t function_49e770();
int64_t function_4c0310();
int64_t function_4d8e90();
int64_t function_4d8f60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4d906();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0bc0();
int64_t function_4f1760();
int64_t function_4fbc4(int64_t a1, int64_t a2);
int64_t function_4ff08();
int64_t function_505130();
int64_t function_506f00(int64_t a1);
int64_t function_507020(int64_t a1);
int64_t function_54cf10();
int64_t function_54dd60();
int64_t function_54e5f0();
int64_t function_54e640(int64_t * a1, int64_t * a2, uint64_t a3, uint32_t a4);
int64_t function_54e6e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_54e770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_550870(uint64_t a1, uint64_t a2);
int64_t function_566180();
int64_t function_5b4f4();
int64_t function_5bff9();
int64_t function_5c2b6();
int64_t function_5c3b0(int64_t a1, int64_t a2);
int64_t function_686a0(int64_t a1);
int64_t function_71c60(int64_t a1);
int64_t function_72496();
int64_t function_7260a();
int64_t function_72750();
int64_t function_7293a();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_72a24();
int64_t function_c57b8();

// Address range: 0x2263e - 0x226c9
int64_t function_2263e(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x22651
    function_7260a();
    function_72496(a1 + (int64_t)&g6, 0);
    int64_t v2; // bp-40, 0x2263e
    int64_t v3; // 0x2263e
    function_729b6(&v2, a1 + (int64_t)&g5, v3);
    function_251d6(a1 + (int64_t)&g4, 0);
    *(int32_t *)(a1 + 12) = 0;
    __asm_mfence(a1 + 8, 0);
    function_24e6a();
    function_729ce(&v2);
    int64_t result = 0; // 0x226bb
    if (v1 != __readfsqword(40)) {
        // 0x226bd
        __stack_chk_fail();
        result = (int64_t)&g26;
    }
    // 0x226c2
    return result;
}

// Address range: 0x3dcac - 0x3dd39
int64_t function_3dcac(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x3dcac
    if (v1 != 0) {
        // 0x3dcbb
        *(int64_t *)v1 = *(int64_t *)(a1 + 176) - *(int64_t *)(a1 + 136);
    }
    int64_t * v2 = (int64_t *)(a1 + 160); // 0x3dccc
    int64_t v3 = *v2; // 0x3dccc
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(a1 + 116); // 0x3dcdb
        uint64_t v5 = (int64_t)*v4; // 0x3dcdb
        int64_t * v6 = (int64_t *)(a1 + 192); // 0x3dcde
        int64_t v7 = *v6; // 0x3dcde
        uint64_t v8 = *(int64_t *)v3 - v7; // 0x3dce5
        int64_t v9 = v8 > v5 ? v5 : v8; // 0x3dceb
        int32_t * v10 = (int32_t *)(a1 + 112); // 0x3dcef
        uint32_t v11 = *v10; // 0x3dcef
        int64_t v12 = *(int64_t *)(a1 + 144); // 0x3dcf2
        __asm_rep_movsb_memcpy((char *)(v12 + v7), (char *)(a1 + 0x392aa + (int64_t)v11), v9);
        int32_t v13 = v9; // 0x3dd09
        *v10 = *v10 + v13;
        *v4 = *v4 - v13;
        int64_t v14 = *v6 + v9; // 0x3dd0f
        *v6 = v14;
        *(int64_t *)*v2 = v14;
    }
    int64_t result = 0; // 0x3dd2d
    if (*(int32_t *)(a1 + 120) != 0) {
        // 0x3dd2f
        result = *(int32_t *)(a1 + 116) == 0;
    }
    // 0x3dd38
    return result;
}

// Address range: 0x44ae0 - 0x44b6c
int64_t function_44ae0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + (int64_t)&g21; // 0x44aed
    *(int64_t *)a1 = (int64_t)&g8;
    *(int64_t *)(a1 + 8) = (int64_t)&g7;
    int64_t v2 = v1 + 40; // 0x44b16
    function_7293a(v1);
    while (v2 != a1 + (int64_t)&g22) {
        int64_t v3 = v2;
        v2 = v3 + 40;
        function_7293a(v3);
    }
    // 0x44b24
    *(int32_t *)(a1 + (int64_t)&g23) = 8;
    *(int64_t *)(a1 + 3664) = 0x448dc;
    sem_init((int64_t *)(a1 + (int64_t)&g24), 0, 0);
    int64_t v4 = a1 + 16;
    int64_t v5 = v4 + 416; // 0x44b53
    function_4c0310(v4);
    while (v1 != v5) {
        // 0x44b50
        v4 = v5;
        v5 = v4 + 416;
        function_4c0310(v4);
    }
    // 0x44b64
    int64_t result; // 0x44ae0
    return result;
}

// Address range: 0x4fbc4 - 0x4fc4f
int64_t function_4fbc4(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4fbce
    int64_t v2 = a2; // bp-48, 0x4fbe1
    int64_t v3 = 0; // 0x4fbe6
    if (a2 != 0) {
        // 0x4fbe8
        int64_t v4; // bp-40, 0x4fbc4
        function_729b6(&v4, a1 + 56, 0);
        int64_t v5 = function_4ff08(a1, &v2); // 0x4fc04
        v3 = 0;
        if (v5 != 0) {
            int64_t v6 = *(int64_t *)(v5 + 16); // 0x4fc0e
            v3 = 0;
            if (*(char *)(v6 + 152) == 0) {
                int64_t * v7 = (int64_t *)(v6 + 144); // 0x4fc1b
                *v7 = *v7 + 1;
                v3 = v6;
            }
        }
        // 0x4fc26
        function_729ce(&v4);
    }
    int64_t result = v3; // 0x4fc3f
    if (v1 != __readfsqword(40)) {
        // 0x4fc41
        __stack_chk_fail();
        result = (int64_t)&g26;
    }
    // 0x4fc46
    return result;
}

// Address range: 0x5c3b0 - 0x5c4c0
int64_t function_5c3b0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x5c3bb
    int64_t v2 = *(int64_t *)(a1 + 16);
    int64_t v3 = v1; // 0x5c3d2
    int64_t v4 = a2; // 0x5c3d2
    if (v2 != 0) {
        int64_t v5 = v2;
        int64_t v6; // 0x5c3b0
        int64_t v7; // 0x5c3b0
        while ((char)function_5bff9(v5 + 32, a2) != 0) {
            // 0x5c3ed
            v6 = *(int64_t *)(v5 + 24);
            v7 = v1;
            if (v6 == 0) {
                // break (via goto) -> 0x5c3f3
                goto lab_0x5c3f3;
            }
            v5 = v6;
        }
        int64_t v8 = *(int64_t *)(v5 + 16);
        v7 = v5;
        while (v8 != 0) {
            int64_t v9 = v5;
            v5 = v8;
            while ((char)function_5bff9(v5 + 32, a2) != 0) {
                // 0x5c3ed
                v6 = *(int64_t *)(v5 + 24);
                v7 = v9;
                if (v6 == 0) {
                    // break (via goto) -> 0x5c3f3
                    goto lab_0x5c3f3;
                }
                v5 = v6;
            }
            // 0x5c3e4
            v8 = *(int64_t *)(v5 + 16);
            v7 = v5;
        }
      lab_0x5c3f3:
        // 0x5c3f3
        v3 = v1;
        v4 = a2;
        if (v1 != v7) {
            int64_t v10 = v7 + 32; // 0x5c3f8
            int64_t v11 = function_5bff9(a2, v10); // 0x5c3ff
            v3 = v7;
            v4 = v10;
            if ((char)v11 == 0) {
                // 0x5c4ad
                return v7 + 40;
            }
        }
    }
    int64_t v12 = function_4efd30(48); // 0x5c414
    int64_t v13 = v12 + 32; // 0x5c41f
    *(int64_t *)v13 = function_5b4f4(v4 - 24);
    int64_t v14 = v12 + 40; // 0x5c444
    *(int64_t *)v14 = (int64_t)&g20;
    int64_t v15 = function_5c2b6(a1, v3, v13); // 0x5c448
    if (v13 == 0) {
        // 0x5c491
        function_2508e(v14);
        function_2508e(0);
        function_4eeb50(v12);
        // 0x5c4ad
        return v15 + 40;
    }
    bool v16 = v1 == v13 | v15 != 0;
    int64_t v17 = v16; // 0x5c465
    if (!v16) {
        // 0x5c467
        v17 = function_5bff9(v13, v12 + 64);
    }
    // 0x5c47d
    function_4f0bc0(v17 % 256, v12);
    int64_t * v18 = (int64_t *)(a1 + 40); // 0x5c48b
    *v18 = *v18 + 1;
    // 0x5c4ad
    return v12 + 40;
}

// Address range: 0x686a0 - 0x6872b
int64_t function_686a0(int64_t a1) {
    int64_t v1 = a1 + 120; // 0x686a9
    int64_t * v2 = (int64_t *)v1; // 0x686a9
    int64_t v3 = __readfsqword(40); // 0x686ad
    char * v4 = (char *)(a1 + 136);
    if (*v2 != 0) {
        // 0x686c2
        if (*v4 != 0) {
            // 0x686cb
            function_7260a();
        }
        // 0x686d0
        function_72496(*v2, (int32_t)a1);
    }
    int64_t v5 = 0; // bp-48, 0x686e5
    int64_t v6 = 0; // bp-40, 0x686ee
    function_4d906(v1, &v5);
    function_35fcc(&v6);
    int64_t v7 = __readfsqword(40); // 0x6870d
    *v4 = 0;
    int64_t result = 0; // 0x6871d
    if (v3 != v7) {
        // 0x6871f
        __stack_chk_fail();
        result = (int64_t)&g26;
    }
    // 0x68724
    return result;
}

// Address range: 0x71c60 - 0x71ced
int64_t function_71c60(int64_t a1) {
    // 0x71c60
    function_72a24();
    int64_t v1 = a1 + 168; // 0x71c77
    *(int32_t *)v1 = 0;
    *(int64_t *)(a1 + 176) = 0;
    *(int64_t *)(a1 + 200) = 0;
    *(int64_t *)a1 = (int64_t)&g9;
    *(int64_t *)(a1 + 184) = v1;
    *(int64_t *)(a1 + 192) = v1;
    function_7293a(a1 + 208);
    function_72750(a1 + 248);
    int64_t v2 = a1 + 360; // 0x71cc0
    function_7293a(v2);
    *(int32_t *)(a1 + 352) = 0;
    *(int64_t *)(a1 + 400) = 0;
    *(char *)(a1 + 408) = 0;
    int64_t v3; // 0x71c60
    return __asm_mfence(v2, (int32_t)v3);
}

// Address range: 0x126851 - 0x1268dc
int64_t function_126851(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x126851
    return function_c57b8();
}

// Address range: 0x4978a0 - 0x49792d
int64_t function_4978a0(int64_t a1) {
    // 0x4978a0
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g2, "=> handshake wrapup: final free");
    int64_t * v1 = (int64_t *)(a1 + 96); // 0x4978c3
    function_4977a0(*v1);
    free((int64_t *)*v1);
    int64_t * v2 = (int64_t *)(a1 + 120); // 0x4978d5
    int64_t v3 = *v2; // 0x4978d5
    *v1 = 0;
    if (v3 != 0) {
        // 0x4978e6
        function_497750(v3);
        free((int64_t *)*v2);
    }
    int64_t * v4 = (int64_t *)(a1 + 128); // 0x4978f4
    *v4 = 0;
    *v2 = *v4;
    int64_t result = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g3, "<= handshake wrapup: final free"); // 0x497928
    return result;
}

// Address range: 0x4d8f60 - 0x4d8fea
int64_t function_4d8f60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = g19; // 0x4d8f6f
    int64_t result = v1; // 0x4d8f7a
    if (v1 == 0x40000000) {
        // 0x4d8f7c
        result = function_4d8e90();
    }
    // 0x4d8f9f
    if ((result & 64) != 0) {
        // 0x4d8fd0
        return function_208d0();
    }
    if ((result & 4) != 0) {
        // 0x4d8fe0
        return function_209b0();
    }
    if (result % 2 != 0) {
        // 0x4d8fc0
        return function_206d0();
    }
    // 0x4d9310
    return result;
}

// Address range: 0x506f00 - 0x506f8e
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_506f00(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x506f0f
    int64_t v2 = v1 + 248; // 0x506f1a
    int64_t * v3 = (int64_t *)v2; // 0x506f1a
    *v3 = (int64_t)&g17;
    int64_t v4 = v1 + 8; // 0x506f28
    int64_t * v5 = (int64_t *)v1; // 0x506f2c
    *v5 = (int64_t)&g16;
    int64_t * v6 = (int64_t *)v4; // 0x506f33
    *v6 = (int64_t)&g11;
    function_505130(v4);
    function_4f1760(v1 + 112);
    *v6 = (int64_t)&g18;
    function_566180(v1 + 64);
    *v5 = (int64_t)&g15;
    *v3 = (int64_t)&g10;
    function_54cf10(v2);
    return function_4eeb50(v1);
}

// Address range: 0x507020 - 0x5070ae
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_507020(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x50702f
    int64_t v2 = v1 + 256; // 0x50703a
    int64_t * v3 = (int64_t *)v2; // 0x50703a
    *v3 = (int64_t)&g14;
    int64_t v4 = v1 + 16; // 0x507048
    int64_t * v5 = (int64_t *)v1; // 0x50704c
    *v5 = (int64_t)&g13;
    int64_t * v6 = (int64_t *)v4; // 0x507053
    *v6 = (int64_t)&g11;
    function_505130(v4);
    function_4f1760(v1 + 120);
    *v6 = (int64_t)&g18;
    function_566180(v1 + 72);
    *(int64_t *)(v1 + 8) = 0;
    *v5 = (int64_t)&g12;
    *v3 = (int64_t)&g10;
    return function_54cf10(v2);
}

// Address range: 0x54e640 - 0x54e6c8
int64_t function_54e640(int64_t * a1, int64_t * a2, uint64_t a3, uint32_t a4) {
    int64_t v1 = (int64_t)a1;
    int32_t v2 = a4; // bp-12, 0x54e650
    function_54e5f0();
    int64_t * v3 = (int64_t *)(v1 + 8); // 0x54e659
    if (*v3 - v1 < 2) {
        // 0x54e6b2
        return 0;
    }
    int64_t * v4 = (int64_t *)((int64_t)a2 + 8); // 0x54e669
    if (*v4 == (int64_t)&v2) {
        // 0x54e6b2
        return 1;
    }
    int64_t v5 = a3 + 4;
    int64_t v6 = function_54dd60(v1, a3, (int64_t)a4); // 0x54e6a8
    int32_t v7 = v6; // 0x54e6ad
    int32_t v8 = v7; // 0x54e6b0
    if (v7 == -2) {
        // 0x54e6b2
        return 1;
    }
    int64_t v9 = v6; // 0x54e6b0
    int64_t result = v9; // 0x54e67d
    while ((v9 & 0xffffffff) <= a3) {
        // 0x54e67f
        *a2 = v5;
        *(int32_t *)a3 = v8;
        result = 0;
        if (*v3 - v1 < 2) {
            // break -> 0x54e6b2
            break;
        }
        // 0x54e698
        result = 1;
        if (*v4 == v5) {
            // break -> 0x54e6b2
            break;
        }
        // 0x54e698
        v9 = function_54dd60(v1, a3, (int64_t)v2);
        v8 = v9;
        result = 1;
        if (v8 == -2) {
            // break -> 0x54e6b2
            break;
        }
        result = v9;
    }
    // 0x54e6b2
    return result;
}

// Address range: 0x54e6e0 - 0x54e76d
// From class:    std::__codecvt_utf16_base<char32_t>
// Type:          virtual member function
int64_t function_54e6e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x54e6ee
    int64_t v2 = a3; // bp-72, 0x54e6fe
    int64_t v3 = *(int64_t *)(a1 + 16); // 0x54e70f
    int64_t v4 = a6; // bp-56, 0x54e720
    int64_t v5 = function_54e640(&v2, &v4, v3, *(int32_t *)(a1 + 24)); // 0x54e72a
    *(int64_t *)a5 = v2;
    *(int64_t *)a8 = v4;
    int64_t result = v5; // 0x54e742
    if ((int32_t)v5 == 0) {
        // 0x54e744
        result = v2 != a4 ? 2 : v5 & 0xffffffff;
    }
    // 0x54e74f
    if (v1 == __readfsqword(40)) {
        // 0x54e75f
        return result;
    }
    // 0x54e768
    __stack_chk_fail();
    return (int64_t)&g26;
}

// Address range: 0x54e770 - 0x54e7fd
// From class:    std::__codecvt_utf16_base<wchar_t>
// Type:          virtual member function
int64_t function_54e770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x54e77e
    int64_t v2 = a3; // bp-72, 0x54e78e
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x54e79f
    int64_t v4 = a6; // bp-56, 0x54e7b0
    int64_t v5 = function_54e640(&v2, &v4, v3, *(int32_t *)(a1 + 32)); // 0x54e7ba
    *(int64_t *)a5 = v2;
    *(int64_t *)a8 = v4;
    int64_t result = v5; // 0x54e7d2
    if ((int32_t)v5 == 0) {
        // 0x54e7d4
        result = v2 != a4 ? 2 : v5 & 0xffffffff;
    }
    // 0x54e7df
    if (v1 == __readfsqword(40)) {
        // 0x54e7ef
        return result;
    }
    // 0x54e7f8
    __stack_chk_fail();
    return (int64_t)&g26;
}

// Address range: 0x550870 - 0x5508f9
int64_t function_550870(uint64_t a1, uint64_t a2) {
    // 0x550870
    if (a1 >= 0xfffffffffffffff) {
        // 0x5508f2
        int64_t result; // 0x550870
        return result;
    }
    int64_t v1; // 0x550870
    int64_t v2; // 0x550870
    if (a1 > a2) {
        uint64_t v3 = 2 * a2; // 0x550888
        int64_t v4 = v3 > a1 ? v3 : a1; // 0x55088f
        int64_t v5 = 4 * v4; // 0x550893
        uint64_t v6 = v5 + 60; // 0x55089b
        v1 = v4;
        v2 = v5;
        if (v4 > a2 && v6 > (int64_t)&g1) {
            uint64_t v7 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g25)) / 4 + v4; // 0x5508c0
            int64_t v8 = v7 < 0xffffffffffffffe ? v7 : 0xffffffffffffffe; // 0x5508c6
            v1 = v8;
            v2 = 4 * v8;
        }
    } else {
        // 0x5508d8
        v1 = a1;
        v2 = 4 * a1;
    }
    int64_t result2 = function_4efd30(v2 + 28); // 0x5508e0
    *(int64_t *)(result2 + 8) = v1;
    *(int32_t *)(result2 + 16) = 0;
    return result2;
}
