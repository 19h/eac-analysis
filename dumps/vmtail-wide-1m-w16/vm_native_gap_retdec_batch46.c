/*
 * Targeted RetDec C for native executable gap queue batch 46.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4c3970-0x4c3a0a rank=- name=- kind=- bytes=- uncovered=-
 *   0x556e50-0x556eea rank=- name=- kind=- bytes=- uncovered=-
 *   0x40c8c-0x40d25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c21c-0x4c2b5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b942-0x4b9da rank=- name=- kind=- bytes=- uncovered=-
 *   0x529c2-0x52a5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x60fae-0x61046 rank=- name=- kind=- bytes=- uncovered=-
 *   0x69044-0x690dc rank=- name=- kind=- bytes=- uncovered=-
 *   0x48fb27-0x48fbbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x567850-0x5678e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5688e0-0x568978 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56fce0-0x56fd78 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b5890-0x4b5927 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44912-0x449a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x504d80-0x504e16 rank=- name=- kind=- bytes=- uncovered=-
 *   0x507650-0x5076e6 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1ff50();
int64_t function_20550();
int64_t function_250b0();
int64_t function_29d94();
int64_t function_40abf();
int64_t function_40adf();
int64_t function_40c8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44912(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_44c72();
int64_t function_44cae();
int64_t function_48d50f();
int64_t function_48f972();
int64_t function_48fb27(void);
int64_t function_4aa62();
int64_t function_4b4f80();
int64_t function_4b4ff0();
int64_t function_4b5070();
int64_t function_4b51a();
int64_t function_4b53f0();
int64_t function_4b5890(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4b6bc0();
int64_t function_4b6c50();
int64_t function_4b7450();
int64_t function_4b7cd0();
int64_t function_4b942(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c0600();
int64_t function_4c0830();
int64_t function_4c0990();
int64_t function_4c0d4();
int64_t function_4c21c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c3810();
int64_t function_4c3970(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f1760();
int64_t function_502870();
int64_t function_504d80(int64_t a1);
int64_t function_505130();
int64_t function_507650(int64_t a1);
int64_t function_5271e();
int64_t function_529c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_547e30();
int64_t function_54cf10();
int64_t function_556cf0();
int64_t function_556e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_566180();
int64_t function_567850(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_568890();
int64_t function_5688e0(int64_t a1);
int64_t function_56fce0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_60fae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_69044(int64_t a1, int64_t a2, int64_t a3, int64_t a4);

// Address range: 0x40c8c - 0x40d25
int64_t function_40c8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40c8c
    if (a3 == 0 || a1 == 0 == (a2 != 0)) {
        // 0x40d14
        return 0;
    }
    int64_t * mem = calloc(1, 0x4df78); // 0x40cce
    if (mem == NULL) {
        // 0x40d14
        return 0;
    }
    int64_t v1 = (int64_t)mem; // 0x40cce
    int64_t result = 0; // 0x40cef
    if ((int32_t)function_40adf(v1, a3, a4, (int32_t)a5) == 0) {
        // 0x40cf1
        result = (int32_t)function_40abf(v1, a1, a2, 4) == 1;
    }
    // 0x40d09
    free(mem);
    // 0x40d14
    return result;
}

// Address range: 0x44912 - 0x449a8
int64_t function_44912(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a1 + 8; // 0x44922
    int64_t v2 = function_44cae(v1); // 0x44933
    int64_t v3 = function_4c0600(v2, 1, a2, 12, 0, 0); // 0x44951
    int32_t v4 = v3;
    if (v4 != 0) {
        // 0x44981
        function_44c72(v1, v2);
        return v3 & 0xffffff00 | (int64_t)(v4 == 0);
    }
    int64_t v5 = function_4c0830(v2, a8, a6, a7); // 0x4496a
    int32_t v6 = v5;
    int32_t v7 = v6; // 0x44971
    int64_t v8 = v5; // 0x44971
    if (v6 == 0) {
        // 0x44973
        v8 = function_4c0990(v2, a4, a5);
        v7 = v8;
    }
    // 0x44981
    function_44c72(v1, v2);
    return v8 & 0xffffff00 | (int64_t)(v7 == 0);
}

// Address range: 0x4b942 - 0x4b9da
int64_t function_4b942(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_4efd30(64); // 0x4b95b
    __asm_rep_stosd_memset((char *)v1, 0, 16);
    int64_t v2 = v1 + 24; // 0x4b97a
    *(int32_t *)v1 = (int32_t)a2;
    *(int64_t *)v2 = (int64_t)&g25;
    int64_t v3 = v1 + 32; // 0x4b989
    *(int64_t *)v3 = (int64_t)&g25;
    int64_t v4 = v1 + 48; // 0x4b98d
    *(int64_t *)v4 = (int64_t)&g25;
    *(int16_t *)(v1 + 16) = (int16_t)*(int32_t *)(a3 + 24);
    function_29d94(v2, a3 + 8);
    function_29d94(v3, a3 + 16);
    *(int32_t *)(v1 + 40) = *(int32_t *)(a3 + 56);
    if (*(int64_t *)-24 != 0) {
        // 0x4b9bb
        function_29d94(v4, a4);
    }
    // 0x4b9c7
    return function_4b51a(a1, v1);
}

// Address range: 0x4c21c - 0x4c2b5
int64_t function_4c21c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_4aa62(); // 0x4c241
    if (v1 != 0) {
        int64_t v2 = *(int64_t *)v1; // 0x4c24b
        if (v2 != 0) {
            // 0x4c2ad
            return v2 + 16;
        }
    }
    int64_t v3 = function_4efd30(56); // 0x4c25c
    *(int64_t *)v3 = 0;
    int64_t v4; // 0x4c21c
    *(int16_t *)(v3 + 8) = *(int16_t *)&v4;
    __asm_rep_stosd_memset((char *)(v3 + 16), 0, 10);
    *(int64_t *)(v3 + 24) = (int64_t)&g25;
    *(int64_t *)(v3 + 32) = (int64_t)&g25;
    *(int64_t *)(v3 + 48) = (int64_t)&g25;
    // 0x4c2ad
    return function_4c0d4(a1) + 16;
}

// Address range: 0x529c2 - 0x52a5a
int64_t function_529c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = function_5271e(a2); // 0x529df
    *(int64_t *)(result + 8) = a3;
    int64_t v1 = *(int64_t *)(a2 + 24); // 0x529e8
    if (v1 != 0) {
        // 0x529f4
        *(int64_t *)(result + 24) = function_529c2(a1, v1, result, a4);
    }
    int64_t v2 = *(int64_t *)(a2 + 16);
    int64_t v3 = v2; // 0x52a10
    if (v2 == 0) {
        // 0x52a4b
        return result;
    }
    int64_t v4 = function_5271e(v3); // 0x52a15
    *(int64_t *)(result + 16) = v4;
    *(int64_t *)(v4 + 8) = result;
    int64_t v5 = *(int64_t *)(v3 + 24); // 0x52a25
    if (v5 != 0) {
        // 0x52a2f
        *(int64_t *)(v4 + 24) = function_529c2(a1, v5, v4, a4);
    }
    // 0x52a41
    v3 += 16;
    while (v3 != 0) {
        int64_t v6 = v4;
        v4 = function_5271e(v3);
        *(int64_t *)(v6 + 16) = v4;
        *(int64_t *)(v4 + 8) = v6;
        v5 = *(int64_t *)(v3 + 24);
        if (v5 != 0) {
            // 0x52a2f
            *(int64_t *)(v4 + 24) = function_529c2(a1, v5, v4, a4);
        }
        // 0x52a41
        v3 += 16;
    }
    // 0x52a4b
    return result;
}

// Address range: 0x60fae - 0x61046
int64_t function_60fae(int64_t a1, int64_t a2, int64_t a3) {
    // 0x60fae
    if (a2 == a1) {
        // 0x6103e
        return a2 - a1 + a3;
    }
    int64_t v1 = a3; // 0x60fb7
    int64_t v2 = a1 + 64; // 0x60fc4
    *(int64_t *)v1 = *(int64_t *)a1;
    *(int64_t *)(v1 + 8) = *(int64_t *)(a1 + 8);
    int64_t * v3 = (int64_t *)(v1 + 32); // 0x60fd8
    *v3 = 0;
    int64_t * v4 = (int64_t *)(v1 + 40); // 0x60fe0
    *v4 = 0;
    int64_t * v5 = (int64_t *)(v1 + 24); // 0x60fe8
    *v5 = 0;
    *(int64_t *)(v1 + 16) = *(int64_t *)(a1 + 16);
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x60ff4
    *v5 = *v6;
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a1 + 32); // 0x61004
    *v3 = *v7;
    *v7 = *v3;
    int64_t * v8 = (int64_t *)(a1 + 40); // 0x61014
    *v4 = *v8;
    *v8 = *v4;
    *(int32_t *)(v1 + 48) = *(int32_t *)(a1 + 48);
    *(int32_t *)(v1 + 52) = *(int32_t *)(a1 + 52);
    *(int32_t *)(v1 + 56) = *(int32_t *)(a1 + 56);
    v1 += 64;
    while (v2 != a2) {
        int64_t v9 = v2;
        v2 = v9 + 64;
        *(int64_t *)v1 = *(int64_t *)v9;
        *(int64_t *)(v1 + 8) = *(int64_t *)(v9 + 8);
        v3 = (int64_t *)(v1 + 32);
        *v3 = 0;
        v4 = (int64_t *)(v1 + 40);
        *v4 = 0;
        v5 = (int64_t *)(v1 + 24);
        *v5 = 0;
        *(int64_t *)(v1 + 16) = *(int64_t *)(v9 + 16);
        v6 = (int64_t *)(v9 + 24);
        *v5 = *v6;
        *v6 = 0;
        v7 = (int64_t *)(v9 + 32);
        *v3 = *v7;
        *v7 = *v3;
        v8 = (int64_t *)(v9 + 40);
        *v4 = *v8;
        *v8 = *v4;
        *(int32_t *)(v1 + 48) = *(int32_t *)(v9 + 48);
        *(int32_t *)(v1 + 52) = *(int32_t *)(v9 + 52);
        *(int32_t *)(v1 + 56) = *(int32_t *)(v9 + 56);
        v1 += 64;
    }
    // 0x6103e
    return a2 - a1 + a3;
}

// Address range: 0x69044 - 0x690dc
int64_t function_69044(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x6905e
    int64_t v2; // bp-544, 0x69044
    function_48d50f(&v2);
    int64_t v3 = -1; // 0x6909a
    int64_t v4 = (int64_t)&v2;
    int64_t v5 = v4; // 0x6909a
    while (v3 != 0) {
        bool v6; // 0x69044
        int64_t v7 = v4 + (v6 ? -1 : 1); // 0x6909a
        v3--;
        v5 = v7;
        if (*(char *)v4 == 0) {
            // break -> 
            break;
        }
        v4 = v7;
        v5 = v4;
    }
    int64_t result = v5; // 0x690c9
    if (v1 != __readfsqword(40)) {
        // 0x690cb
        __stack_chk_fail();
        result = (int64_t)&g26;
    }
    // 0x690d0
    return result;
}

// Address range: 0x48fb27 - 0x48fbbf
int64_t function_48fb27(void) {
    // 0x48fb27
    if (*(char *)&g23 == 0) {
        // 0x48fb35
        if ((int32_t)function_20550(&g23) != 0) {
            // 0x48fb45
            g20 = function_48f972();
            g21 = function_48f972();
            g22 = function_48f972();
            function_1ff50(&g23);
        }
    }
    uint32_t v1 = g20; // 0x48fb72
    uint32_t v2 = g21; // 0x48fb78
    int32_t v3 = g19 - (v1 / 32 | 0x8000000 * v1); // 0x48fb89
    int32_t v4 = (v2 / 0x8000 | 0x20000 * v2) ^ v1; // 0x48fb90
    int32_t v5 = g22; // 0x48fb92
    g19 = v4;
    int32_t v6 = v4 + v3; // 0x48fb9e
    g22 = v6;
    int32_t v7 = v5 + v3; // 0x48fba8
    g21 = v7;
    g20 = v5 + v2;
    return 0x100000000 * (int64_t)v7 | (int64_t)v6;
}

// Address range: 0x4b5890 - 0x4b5927
int64_t function_4b5890(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t result = function_4b4f80(); // 0x4b58b4
    if ((int32_t)result != 0) {
        // 0x4b58bd
        return result;
    }
    int64_t result2 = function_4b4ff0(a1); // 0x4b58e3
    if ((int32_t)result2 != 0) {
        // 0x4b58bd
        return result2;
    }
    int64_t result3 = function_4b5070(a1, a4, a5, a6, a7); // 0x4b58fd
    if ((int32_t)result3 != 0) {
        // 0x4b58bd
        return result3;
    }
    // 0x4b5906
    int64_t v1; // bp-48, 0x4b5890
    return function_4b53f0(a1, *(int64_t *)a7 + a6, &v1);
}

// Address range: 0x4c3970 - 0x4c3a0a
int64_t function_4c3970(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4c3970
    int64_t v1; // bp-424, 0x4c3970
    function_4b6bc0(&v1);
    int64_t v2; // bp-456, 0x4c3970
    function_4c3810(&v2, 24, a1, a4, a5);
    function_4b7450(&v1, &v2);
    function_4b7cd0(&v1, 0, a3, a1, a2, a2);
    function_4b6c50(&v1);
    int64_t result = (int64_t)&v2; // 0x4c39ed
    *(char *)result = 0;
    result++;
    int64_t v3; // bp-432, 0x4c3970
    while (result != (int64_t)&v3) {
        // 0x4c39f0
        *(char *)result = 0;
        result++;
    }
    // 0x4c39fc
    return result;
}

// Address range: 0x504d80 - 0x504e16
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504d80(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x504d8f
    int64_t v2 = v1 + 256; // 0x504d9a
    int64_t * v3 = (int64_t *)v2; // 0x504d9a
    *v3 = (int64_t)&g10;
    int64_t v4 = v1 + 16; // 0x504da8
    int64_t * v5 = (int64_t *)v1; // 0x504dac
    *v5 = (int64_t)&g9;
    int64_t * v6 = (int64_t *)v4; // 0x504db3
    *v6 = (int64_t)&g7;
    function_502870(v4);
    function_4f1760(v1 + 120);
    *v6 = (int64_t)&g15;
    function_566180(v1 + 72);
    *(int64_t *)(v1 + 8) = 0;
    *v5 = (int64_t)&g8;
    *v3 = (int64_t)&g5;
    function_54cf10(v2);
    return function_4eeb50(v1);
}

// Address range: 0x507650 - 0x5076e6
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_507650(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x50765f
    int64_t v2 = v1 + 256; // 0x50766a
    int64_t * v3 = (int64_t *)v2; // 0x50766a
    *v3 = (int64_t)&g14;
    int64_t v4 = v1 + 16; // 0x507678
    int64_t * v5 = (int64_t *)v1; // 0x50767c
    *v5 = (int64_t)&g13;
    int64_t * v6 = (int64_t *)v4; // 0x507683
    *v6 = (int64_t)&g11;
    function_505130(v4);
    function_4f1760(v1 + 120);
    *v6 = (int64_t)&g16;
    function_566180(v1 + 72);
    *(int64_t *)(v1 + 8) = 0;
    *v5 = (int64_t)&g12;
    *v3 = (int64_t)&g6;
    function_54cf10(v2);
    return function_4eeb50(v1);
}

// Address range: 0x556e50 - 0x556ee8
int64_t function_556e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = 0x100000000000000 * a4 >> 56; // 0x556e5f
    int64_t v2; // 0x556e50
    if (a5 == 0) {
        int32_t * v3 = (int32_t *)a8; // 0x556ed0
        int32_t v4 = *v3; // 0x556ed0
        int64_t v5 = function_556cf0(a6, v1, a2, a3, a7, (int64_t)v4 + a7, v2, v2, v2, v2) - a6; // 0x556ee4
        *v3 = (int32_t)v5;
        return v5 & 0xffffffff;
    }
    int64_t v6 = a5 - a7; // 0x556e7e
    int64_t v7 = function_556cf0(a6, v1, a2, a3, a7, (0x100000000 * v6 >> 32) + a7, v2, v2, v2, v2); // 0x556e8a
    int32_t * v8 = (int32_t *)a8; // 0x556e8f
    int32_t v9 = v6; // 0x556e9a
    int32_t v10 = *v8 - v9; // 0x556e9a
    int32_t v11 = v10; // 0x556ea3
    if (v10 != 0) {
        // 0x556eb8
        memcpy((int64_t *)v7, (int64_t *)a5, v10);
        v11 = *v8 - v9;
    }
    int64_t v12 = v7 - a6 + (int64_t)v11; // 0x556ea5
    *v8 = (int32_t)v12;
    return v12 & 0xffffffff;
}

// Address range: 0x567850 - 0x5678e8
int64_t function_567850(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x567867
    char * v2; // bp-40, 0x567850
    float64_t v3 = __strtod_l((char *)a1, &v2, (struct __locale_struct *)a4); // 0x567877
    int128_t v4 = (float32_t)v3; // 0x567877
    int64_t v5 = __asm_movsd(v4); // 0x567880
    int64_t * v6 = (int64_t *)a2; // 0x567880
    *v6 = v5;
    if ((int64_t)v2 == a1 || *v2 != 0) {
        // 0x5678c0
        *v6 = 0;
        *(int32_t *)a3 = 4;
        // 0x5678d0
        return __readfsqword(40) ^ v1;
    }
    // 0x56789d
    __asm_ucomisd(v4, __asm_movsd_133(0x7fefffffffffffff));
    __asm_ucomisd(__asm_movsd_133(-0x10000000000001), v4);
    // 0x5678d0
    return __readfsqword(40) ^ v1;
}

// Address range: 0x5688e0 - 0x568976
int64_t function_5688e0(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x5688f3
    int64_t result; // bp-40, 0x5688e0
    function_250b0(&result);
    if (a1 != 0) {
        // 0x568910
        function_568890(a1, &result);
    }
    int64_t v2 = result - 24; // 0x568920
    if (v2 == (int64_t)g17) {
        // 0x56892d
        return __readfsqword(40) ^ v1;
    }
    // 0x568948
    if (g18 == 0) {
        // 0x568970
        return result;
    }
    int32_t * v3 = (int32_t *)(result - 8); // 0x568957
    int32_t v4 = *v3; // 0x568957
    *v3 = v4 - 1;
    if (v4 >= 0 != v4 != 0) {
        // 0x568960
        int64_t v5; // bp-41, 0x5688e0
        function_547e30(v2, &v5, v4);
    }
    // 0x56892d
    return __readfsqword(40) ^ v1;
}

// Address range: 0x56fce0 - 0x56fd74
// From class:    std::ctype_byname<wchar_t>
// Type:          virtual member function
int64_t function_56fce0(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a2; // 0x56fcf5
    if (*(int16_t *)(a1 + (int64_t)&g2) == v1) {
        int64_t v2 = *(int64_t *)(a1 + 16); // 0x56fd48
        int64_t v3 = *(int64_t *)(a1 + (int64_t)&g4); // 0x56fd4c
        int32_t v4 = __iswctype_l((int32_t)a3, (int32_t)v3, (struct __locale_struct *)v2); // 0x56fd56
        return (int64_t)(v4 != 0) | (int64_t)(v4 & -256);
    }
    for (int64_t i = 0; i < 12; i++) {
        int16_t * v5 = (int16_t *)(a1 + (int64_t)&g1 + 2 * i); // 0x56fd0a
        if ((*v5 & v1) != 0) {
            int64_t v6 = *(int64_t *)(a1 + (int64_t)&g3 + 8 * i); // 0x56fd19
            int32_t result = __iswctype_l((int32_t)a3, (int32_t)v6, (struct __locale_struct *)*(int64_t *)(a1 + 16)); // 0x56fd24
            if (result != 0) {
                // 0x56fd70
                return result;
            }
            // 0x56fd2d
            if (*v5 == v1) {
                // break -> 0x56fd38
                break;
            }
        }
    }
    // 0x56fd38
    return 0;
}
