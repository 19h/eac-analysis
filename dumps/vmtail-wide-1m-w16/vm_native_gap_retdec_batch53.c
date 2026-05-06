/*
 * Targeted RetDec C for native executable gap queue batch 53.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x488452-0x4884d9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48d222-0x48d2a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cebb0-0x4cec37 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52e3e0-0x52e469 rank=- name=- kind=- bytes=- uncovered=-
 *   0x392b45-0x392bcb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b8b30-0x4b8bb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x504b50-0x504bd6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x507540-0x5075c6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5195f0-0x519676 rank=- name=- kind=- bytes=- uncovered=-
 *   0x581610-0x581696 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ded4-0x4df59 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2da6fc-0x2da780 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48daa2-0x48db26 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496ff0-0x497074 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566800-0x566884 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36e82-0x36f05 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2da695();
int64_t function_2da6fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35c96();
int64_t function_35fcc();
int64_t function_36e82(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4);
int64_t function_392b2e();
int64_t function_392b3d();
int64_t function_392b45(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_488439();
int64_t function_488452(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_48d222(uint64_t a1, uint64_t a2);
int64_t function_48daa2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48f50b();
int64_t function_496ff0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b0890();
int64_t function_4b1ca0();
int64_t function_4b8b30(int64_t a1);
int64_t function_4cebb0(int64_t a1, int64_t a2);
int64_t function_4d906();
int64_t function_4ded4(int64_t a1);
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f1760();
int64_t function_502870();
int64_t function_504b50(int64_t a1);
int64_t function_505130();
int64_t function_507540(int64_t a1);
int64_t function_519050();
int64_t function_5195f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_52e3e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_542590();
int64_t function_542770();
int64_t function_54c860();
int64_t function_54cf10();
int64_t function_566180();
int64_t function_566390();
int64_t function_5663d0();
int64_t function_566800(int64_t a1, int64_t a2, int64_t a3);
int64_t function_57d700();
int64_t function_581610(int64_t a1, int64_t a2, int64_t a3);
int64_t function_72496();
int64_t function_7260a();

// Address range: 0x36e82 - 0x36f05
int64_t function_36e82(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2 - 1; // 0x36e82
    int64_t result = (0x8000000000000000 * (int128_t)(v1 >> 63) | (int128_t)v1) / 2; // 0x36e9b
    int64_t v2 = 8 * a2 + a1; // 0x36ead
    if (a2 <= a3) {
        // 0x36ef3
        *(int64_t *)v2 = a4;
        return result;
    }
    uint64_t v3 = result;
    int64_t v4 = v2;
    int64_t v5 = 8 * v3 + a1;
    int64_t * v6 = (int64_t *)v5; // 0x36ec4
    int64_t v7; // 0x36e82
    int64_t v8 = function_35c96(v7, *v6, a4); // 0x36ec8
    int64_t v9 = v4; // 0x36ecf
    int64_t result2 = v8; // 0x36ecf
    while ((char)v8 != 0) {
        // 0x36ed1
        *(int64_t *)v4 = *v6;
        int64_t v10 = v3 - 1; // 0x36ee5
        int64_t v11 = (0x8000000000000000 * (int128_t)(v10 >> 63) | (int128_t)v10) / 2;
        v9 = v5;
        result2 = v11;
        if (v3 <= a3) {
            // break -> 0x36ef3
            break;
        }
        v3 = v11;
        v4 = v5;
        v5 = 8 * v3 + a1;
        v6 = (int64_t *)v5;
        v8 = function_35c96(v7, *v6, a4);
        v9 = v4;
        result2 = v8;
    }
    // 0x36ef3
    *(int64_t *)v9 = a4;
    return result2;
}

// Address range: 0x4ded4 - 0x4df59
int64_t function_4ded4(int64_t a1) {
    int64_t v1 = a1 + 64; // 0x4dedd
    int64_t * v2 = (int64_t *)v1; // 0x4dedd
    int64_t v3 = __readfsqword(40); // 0x4dee1
    char * v4 = (char *)(a1 + 80);
    if (*v2 != 0) {
        // 0x4def6
        if (*v4 != 0) {
            // 0x4defc
            function_7260a();
        }
        // 0x4df01
        function_72496(*v2, a1);
    }
    int64_t v5 = 0; // bp-48, 0x4df16
    int64_t v6 = 0; // bp-40, 0x4df1f
    function_4d906(v1, &v5);
    function_35fcc(&v6);
    int64_t v7 = __readfsqword(40); // 0x4df3e
    *v4 = 0;
    int64_t result = 0; // 0x4df4b
    if (v3 != v7) {
        // 0x4df4d
        __stack_chk_fail();
        result = (int64_t)&g18;
    }
    // 0x4df52
    return result;
}

// Address range: 0x2da6fc - 0x2da715
int64_t function_2da6fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2da6fc
    int64_t v1; // 0x2da6fc
    bool v2; // 0x2da6fc
    if (!v2 && !v2) {
        v1 = function_2da695();
    }
    int64_t v3 = v1;
    char * v4 = (char *)(((v3 + (v2 ? 172 : 171)) % 256 | v3 & -256) - 0x61fa7df9); // 0x2da701
    int64_t v5; // 0x2da6fc
    *v4 = *v4 + (char)v5;
    return unknown_ffffffffd3dfe90d();
}

// Address range: 0x392b45 - 0x392baf
int64_t function_392b45(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = a3 + 152; // 0x392b45
    int64_t v2 = v1 % 256 | a3 & -256; // 0x392b45
    int64_t v3; // 0x392b45
    *(char *)0x6ed38f4f = *(char *)0x6ed38f4f + (char)(v3 / 256);
    int32_t * v4 = (int32_t *)(a2 + 0x31b4b3ff + 8 * v2); // 0x392b4e
    *v4 = *v4 + (int32_t)v3;
    int64_t v5 = unknown_6847365b(); // 0x392b55
    char v6 = a3 / 256; // 0x392b5a
    char v7 = v5 / 256; // 0x392b5a
    unsigned char v8 = v7 + v6; // 0x392b5a
    int64_t v9 = v5; // 0x392b5c
    if (((v8 ^ v6) & (v8 ^ v7)) >= 0) {
        v9 = function_392b3d();
    }
    char * v10 = (char *)(v9 + 0x3d00ee0e); // 0x392b5e
    *v10 = *v10 - (char)v1;
    int32_t * v11 = (int32_t *)(a1 - 115); // 0x392b64
    *v11 = *v11 + (int32_t)v3;
    uint64_t v12 = v9 & 0xffffffff | 0x100000000 * (256 * (int64_t)v8 | v2 & 0xffff00ff); // 0x392b67
    uint64_t v13 = a1 & 0xffffffff; // 0x392b67
    uint32_t v14 = (int32_t)(v12 / v13) & -0x40d12398; // 0x392b6b
    int64_t v15 = v14; // 0x392b77
    if (v14 == 0) {
        v15 = function_392b2e();
    }
    // 0x392b79
    bool v16; // 0x392b45
    int64_t v17 = (v16 ? -4 : 4) + a1; // 0x392b79
    unsigned char v18 = *(char *)v17; // 0x392b81
    __asm_out(27, (int32_t)v15);
    int32_t v19 = *(int32_t *)(v12 % v13); // 0x392b86
    int32_t * v20 = (int32_t *)(a4 - 68); // 0x392b88
    *v20 = *v20 ^ -61;
    *(char *)0xb9bdf768 = (char)a4;
    if (*(char *)(v15 % 256 + v3) <= 104) {
        int16_t result = *(int16_t *)(a4 & -256 | (int64_t)*(char *)0xb9bdf768); // 0x392ba3
        return result;
    }
    int64_t v21 = v16 ? 0xffffffff : 1; // 0x392b81
    int64_t result2 = unknown_3dc1cbae((int32_t)(v18 > (char)v15) + (int32_t)(v17 + v21) + v19); // 0x392ba8
    int32_t * v22 = (int32_t *)result2; // 0x392bad
    *v22 = *v22 + (int32_t)result2;
    return result2;
}

// Address range: 0x488452 - 0x4884d9
int64_t function_488452(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    bool v1 = a1 == 0 | a2 <= (int64_t)&g17;
    if (v1) {
        // 0x4884d8
        return 0;
    }
    // 0x488468
    int64_t v2; // 0x488452
    int64_t result = v2 & -256 | (int64_t)v1; // 0x488463
    if ((int16_t)a1 != (int16_t)&g4) {
        // 0x4884d8
        return result;
    }
    uint32_t v3 = *(int32_t *)(a1 + 60); // 0x48846f
    if (v3 == 0) {
        // 0x4884d8
        return result;
    }
    uint64_t v4 = (int64_t)v3; // 0x48846f
    if (v4 + 44 < a2 != (v3 < 0xffffffab && v4 < a2)) {
        // 0x4884d8
        return result;
    }
    int64_t v5 = v4 + a1; // 0x488498
    int64_t result2 = function_488439(v5, 264, a1, a2 + a1, a1, v5); // 0x4884b3
    if ((char)result2 == 0) {
        // 0x4884d8
        return result2;
    }
    // 0x4884bc
    if (*(int32_t *)v5 != (int32_t)&g3) {
        // 0x4884d8
        return 0;
    }
    if (a3 != 0) {
        // 0x4884ca
        *(int64_t *)a3 = a1;
    }
    // 0x4884cd
    if (a4 == 0) {
        // 0x4884d8
        return result2;
    }
    // 0x4884d2
    *(int64_t *)a4 = v5;
    return result2;
}

// Address range: 0x48d222 - 0x48d2a9
int64_t function_48d222(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x48d230
    if (a1 >= 0x1ffffffffffffffd) {
        // 0x48d232
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x48d244
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x48d246
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 2 * v3; // 0x48d251
    uint64_t v6 = v5 + 58; // 0x48d258
    int64_t v7 = v3; // 0x48d262
    int64_t v8 = v5; // 0x48d262
    if (v3 > a2 && v6 > (int64_t)&g1) {
        uint64_t v9 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g17)) / 2 + v3; // 0x48d27c
        v7 = v9 < 0x1ffffffffffffffc ? v9 : 0x1ffffffffffffffc;
        v8 = 2 * v7;
    }
    int64_t result = function_4efd30(v8 + 26); // 0x48d297
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x48daa2 - 0x48db26
int64_t function_48daa2(int64_t a1, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x48db23
        return 0;
    }
    int32_t v1 = *(int32_t *)a1; // 0x48dabf
    int32_t v2 = v1; // 0x48dac6
    int64_t v3 = a3; // 0x48dac6
    int64_t v4 = a1; // 0x48dac6
    int64_t v5 = a2; // 0x48dac6
    int64_t v6 = 0; // 0x48dac6
    if (v1 != 0) {
        int64_t v7 = a2;
        int64_t v8 = v2;
        v3--;
        uint32_t v9 = *(int32_t *)v7; // 0x48dacb
        v5 = v7;
        v6 = v8;
        while (v3 != 0 && v9 != 0) {
            // 0x48dad6
            if (v2 != v9) {
                int64_t v10 = function_48f50b(v8); // 0x48dade
                v5 = v7;
                v6 = v8;
                if ((int32_t)v10 != (int32_t)function_48f50b((int64_t)v9)) {
                    // break -> 0x48db00
                    break;
                }
            }
            // 0x48daf3
            v4 += 4;
            int64_t v11 = v7 + 4; // 0x48daf7
            v2 = *(int32_t *)v4;
            v5 = v11;
            v6 = 0;
            if (v2 == 0) {
                // break -> 0x48db00
                break;
            }
            v7 = v11;
            v8 = v2;
            v3--;
            v9 = *(int32_t *)v7;
            v5 = v7;
            v6 = v8;
        }
    }
    int64_t v12 = function_48f50b(v6); // 0x48db03
    int64_t v13 = function_48f50b((int64_t)*(int32_t *)v5); // 0x48db0d
    return v13 & -256 | (int64_t)((int32_t)v12 == (int32_t)v13);
}

// Address range: 0x496ff0 - 0x497072
int64_t function_496ff0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 248; // 0x496ff5
    int64_t result = function_4b1ca0(v1, 16, a2); // 0x49701b
    if ((int32_t)result == 0) {
        // 0x497060
        return result;
    }
    // 0x497024
    function_4b0890(v1);
    function_4b0890(a1 + 272);
    return result & 0xffffffff;
}

// Address range: 0x4b8b30 - 0x4b8bb6
int64_t function_4b8b30(int64_t a1) {
    // 0x4b8b30
    function_4b0890(a1 + 224);
    function_4b0890(a1 + 200);
    function_4b0890(a1 + 176);
    function_4b0890(a1 + 152);
    function_4b0890(a1 + 128);
    function_4b0890(a1 + 104);
    function_4b0890(a1 + 80);
    function_4b0890(a1 + 56);
    function_4b0890(a1 + 32);
    function_4b0890(a1 + 8);
    int64_t result = a1 + 248; // 0x4b8b9d
    int64_t v1 = a1; // 0x4b8ba4
    *(char *)v1 = 0;
    v1++;
    while (v1 != result) {
        // 0x4b8ba8
        *(char *)v1 = 0;
        v1++;
    }
    // 0x4b8bb4
    return result;
}

// Address range: 0x4cebb0 - 0x4cec37
int64_t function_4cebb0(int64_t a1, int64_t a2) {
    // 0x4cebb0
    int64_t tp; // bp-40, 0x4cebb0
    gettimeofday((struct timeval *)&tp, NULL);
    int32_t v1; // 0x4cebb0
    if ((int32_t)a2 == 0) {
        int64_t v2 = (int64_t)v1 - *(int64_t *)(a1 + 8); // 0x4cebdd
        return ((int64_t)(0x20c49ba5e353f7cf * (int128_t)v2 / 0x8000000000000000) >> 7) + (v2 >> 63 | (tp - (int64_t)&tp) * (int64_t)&g2);
    }
    // 0x4cec20
    *(int64_t *)a1 = tp;
    *(int64_t *)(a1 + 8) = (int64_t)v1;
    return 0;
}

// Address range: 0x504b50 - 0x504bd6
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504b50(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x504b5f
    int64_t v2 = v1 + 248; // 0x504b6a
    int64_t * v3 = (int64_t *)v2; // 0x504b6a
    *v3 = (int64_t)&g10;
    int64_t v4 = v1 + 8; // 0x504b78
    int64_t * v5 = (int64_t *)v1; // 0x504b7c
    *v5 = (int64_t)&g9;
    int64_t * v6 = (int64_t *)v4; // 0x504b83
    *v6 = (int64_t)&g7;
    function_502870(v4);
    function_4f1760(v1 + 112);
    *v6 = (int64_t)&g15;
    function_566180(v1 + 64);
    *v5 = (int64_t)&g8;
    *v3 = (int64_t)&g5;
    return function_54cf10(v2);
}

// Address range: 0x507540 - 0x5075c6
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_507540(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x50754f
    int64_t v2 = v1 + 248; // 0x50755a
    int64_t * v3 = (int64_t *)v2; // 0x50755a
    *v3 = (int64_t)&g14;
    int64_t v4 = v1 + 8; // 0x507568
    int64_t * v5 = (int64_t *)v1; // 0x50756c
    *v5 = (int64_t)&g13;
    int64_t * v6 = (int64_t *)v4; // 0x507573
    *v6 = (int64_t)&g11;
    function_505130(v4);
    function_4f1760(v1 + 112);
    *v6 = (int64_t)&g16;
    function_566180(v1 + 64);
    *v5 = (int64_t)&g12;
    *v3 = (int64_t)&g6;
    return function_54cf10(v2);
}

// Address range: 0x5195f0 - 0x519676
// From class:    std::__cxx11::collate_byname<char>
// Type:          virtual member function
int64_t function_5195f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5195f0
    *(int64_t *)(a1 + 8) = 0;
    int64_t v1 = a1 + 16; // 0x519612
    *(char *)v1 = 0;
    __readfsqword(40);
    *(int64_t *)a1 = v1;
    int64_t v2; // bp-88, 0x5195f0
    int64_t v3 = (int64_t)&v2; // bp-104, 0x519647
    function_519050(&v3, a3);
    return function_4eec00(2 * (a4 - a3));
}

// Address range: 0x52e3e0 - 0x52e469
// From class:    std::__cxx11::collate_byname<wchar_t>
// Type:          virtual member function
int64_t function_52e3e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x52e3e0
    __readfsqword(40);
    int64_t v1; // bp-120, 0x52e3e0
    int64_t v2 = (int64_t)&v1; // bp-136, 0x52e41a
    function_54c860((int64_t)&v2, a2, a3);
    int64_t v3; // bp-88, 0x52e3e0
    int64_t v4 = (int64_t)&v3; // bp-104, 0x52e43c
    function_54c860((int64_t)&v4, a4, a5);
    int64_t result; // 0x52e3e0
    return result;
}

// Address range: 0x566800 - 0x566884
int64_t function_566800(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = function_566390(a3); // 0x566810
    int64_t v2 = *(int64_t *)(a2 + 16); // 0x566815
    int64_t v3 = v2 - 1; // 0x566819
    int64_t v4 = v3; // 0x566820
    if (v3 >= v1) {
        int64_t v5 = *(int64_t *)(*(int64_t *)(a2 + 8) + 8 * v1); // 0x566826
        v4 = 0;
        if (v5 != 0) {
            // 0x56682f
            return function_5663d0(a1, a3, v5, v2);
        }
    }
    int64_t result = function_542770("locale::_Impl::_M_replace_facet"); // 0x566845
    int64_t v6 = *(int64_t *)v4; // 0x566857
    if (v6 == 0) {
        // 0x56687f
        return result;
    }
    int64_t v7 = v4; // 0x56685d
    v7 += 8;
    int64_t result2 = function_566800((int64_t)"locale::_Impl::_M_replace_facet", a2, v6); // 0x566872
    int64_t v8 = *(int64_t *)v7; // 0x566877
    while (v8 != 0) {
        // 0x566868
        v7 += 8;
        result2 = function_566800((int64_t)"locale::_Impl::_M_replace_facet", a2, v8);
        v8 = *(int64_t *)v7;
    }
    // 0x56687f
    return result2;
}

// Address range: 0x581610 - 0x581695
int64_t function_581610(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x581619
    if (a3 == 0) {
        // 0x581639
        *(int32_t *)(a1 + 304) = 1;
        return __readfsqword(40) ^ v1;
    }
    int32_t * v2 = (int32_t *)(a3 + 4); // 0x58162e
    int32_t v3 = *v2; // 0x58162e
    if (v3 >= 2) {
        // 0x581639
        *(int32_t *)(a1 + 304) = 1;
        return __readfsqword(40) ^ v1;
    }
    int64_t v4 = a3; // bp-56, 0x581663
    *v2 = v3 + 1;
    int64_t * v5 = (int64_t *)(a1 + 328); // 0x58166a
    int64_t result = *v5; // 0x58166a
    *v5 = (int64_t)&v4;
    function_57d700();
    *v5 = result;
    *v2 = *v2 - 1;
    return result;
}
