/*
 * Targeted RetDec C for native executable gap queue batch 54.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4a39a-0x4a41d rank=- name=- kind=- bytes=- uncovered=-
 *   0x6ac18-0x6ac9b rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a4638-0x1a46bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x48d9cf-0x48da52 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5826b-0x582eb rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ce8f0-0x4ce973 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d8ff0-0x4d9073 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ef1f0-0x4ef273 rank=- name=- kind=- bytes=- uncovered=-
 *   0x563690-0x563713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x563720-0x5637a3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4976c0-0x497742 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ac420-0x4ac4a2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x7261c-0x7269d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c8e60-0x4c8ee1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5486d0-0x548751 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ddf8-0x3de78 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
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

int64_t function_1a4638(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_20050();
int64_t function_206b0();
int64_t function_221a8();
int64_t function_2508e();
int64_t function_2515a();
int64_t function_254fe();
int64_t function_29c3a();
int64_t function_35ef6();
int64_t function_3ddf8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48d9cf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_48eb2b();
int64_t function_48f4fd();
int64_t function_496b40();
int64_t function_497670();
int64_t function_4976c0(int64_t a1);
int64_t function_498740();
int64_t function_49e770();
int64_t function_4a336();
int64_t function_4a368();
int64_t function_4a39a(int64_t a1);
int64_t function_4ab2f0();
int64_t function_4ac420(uint64_t a1);
int64_t function_4b0f10();
int64_t function_4b1590();
int64_t function_4b6270();
int64_t function_4b6560();
int64_t function_4bf9e0();
int64_t function_4c8e60(int64_t a1);
int64_t function_4cdd20();
int64_t function_4cddb0();
int64_t function_4cdde0();
int64_t function_4ce440();
int64_t function_4ce580();
int64_t function_4ce8f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4d8e90();
int64_t function_4d8ff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4eef80();
int64_t function_4ef140();
int64_t function_4ef1f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_547d00();
int64_t function_5486d0(uint64_t a1, int64_t a2);
int64_t function_563690(int64_t a1, int64_t a2, int64_t a3);
int64_t function_563720(int64_t a1, int64_t a2, int64_t a3);
int64_t function_57f56();
int64_t function_5826b(int64_t a1);
int64_t function_68fa0();
int64_t function_6ac18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_7261c(int64_t result);
int64_t function_72994();
int64_t function_c57b8();

// Address range: 0x3ddf8 - 0x3de78
int64_t function_3ddf8(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x3de01
    int64_t * v2 = (int64_t *)(a3 + 8); // 0x3de09
    uint64_t v3 = *v2; // 0x3de09
    uint64_t v4 = v1 + a3; // 0x3de0d
    int64_t * v5; // 0x3ddf8
    if (v3 >= v4) {
        // 0x3ddf8
        v5 = (int64_t *)(a3 + 16);
    } else {
        // 0x3de18
        if (*(int32_t *)(a3 + 24) == 0) {
            // 0x3de6f
            return 0;
        }
        uint64_t v6 = 2 * v3; // 0x3de27
        int64_t v7 = v6 > 128 ? v6 : 128; // 0x3de31
        while (v4 > v7) {
            // 0x3de27
            v6 = 2 * v7;
            v7 = v6 > 128 ? v6 : 128;
        }
        int64_t * v8 = (int64_t *)(a3 + 16);
        int64_t * mem = realloc((int64_t *)*v8, (int32_t)v7); // 0x3de41
        if (mem == NULL) {
            // 0x3de6f
            return 0;
        }
        // 0x3de4b
        *v8 = (int64_t)mem;
        *v2 = v7;
        v5 = v8;
    }
    // 0x3de53
    __asm_rep_movsb_memcpy((char *)(*v5 + a3), (char *)a1, v1);
    *(int64_t *)a3 = v4;
    // 0x3de6f
    return 1;
}

// Address range: 0x4a39a - 0x4a41d
int64_t function_4a39a(int64_t a1) {
    // 0x4a39a
    function_72994(a1 + 400);
    function_72994(a1 + 360);
    function_72994(a1 + 320);
    function_72994(a1 + 280);
    function_72994(a1 + 240);
    function_4a368(a1 + 160, *(int64_t *)(a1 + 176));
    function_4a368(a1 + 112, *(int64_t *)(a1 + 128));
    function_4a336(a1 + 64, *(int64_t *)(a1 + 80));
    function_254fe(a1 + 40);
    return function_254fe(a1 + 16);
}

// Address range: 0x5826b - 0x582eb
int64_t function_5826b(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x58271
    int64_t v2 = 0; // 0x58284
    if (a1 != 0) {
        // 0x58286
        int64_t v3; // bp-48, 0x5826b
        int64_t v4; // bp-49, 0x5826b
        function_35ef6(&v3, a1, &v4);
        int64_t v5; // bp-40, 0x5826b
        function_48eb2b(&v5, &v3);
        v2 = function_57f56(v5);
        function_2508e(&v5);
        function_29c3a(&v3);
    }
    int64_t result = v2; // 0x582dd
    if (v1 != __readfsqword(40)) {
        // 0x582df
        __stack_chk_fail();
        result = (int64_t)&g20;
    }
    // 0x582e4
    return result;
}

// Address range: 0x6ac18 - 0x6ac9b
int64_t function_6ac18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1 + (int64_t)&g9; // 0x6ac26
    int64_t v2 = a1 + (int64_t)&g7; // 0x6ac2d
    function_496b40(a1 + (int64_t)&g10);
    function_498740(a1 + (int64_t)&g17);
    function_4ab2f0(a1 + 184);
    function_4b6270(v1);
    function_4bf9e0(v2);
    int64_t v3 = function_4b6560(v1, &g8, v2, 0, 0); // 0x6ac73
    int64_t v4 = v3; // 0x6ac7c
    int64_t v5 = 0; // 0x6ac7c
    if ((int32_t)v3 == 0) {
        // 0x6ac7e
        v4 = function_68fa0(a1, &g6, 0);
        *(char *)(a1 + (int64_t)&g19) = 1;
        v5 = 1;
    }
    // 0x6ac94
    return v4 & -256 | v5;
}

// Address range: 0x7261c - 0x7269d
int64_t function_7261c(int64_t result) {
    int64_t v1 = __readfsqword(40); // 0x7262a
    int128_t v2; // bp-64, 0x7261c
    function_2515a((int64_t *)&v2);
    int128_t v3 = __asm_movups(0x8000000000000000 * v2 >> 64); // 0x7264e
    int64_t v4; // 0x7261c
    int128_t v5 = *(int128_t *)&v4;
    int128_t v6 = __asm_movups(v5); // 0x7265c
    __asm_movups_133(v5, v3);
    __asm_movups_133(0x8000000000000000 * v2 >> 64, v6);
    function_221a8();
    if (v1 != __readfsqword(40)) {
        // 0x7268e
        __stack_chk_fail();
    }
    // 0x72693
    return result;
}

// Address range: 0x1a4638 - 0x1a46bb
int64_t function_1a4638(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int64_t v2; // 0x1a4638
    char * v3 = (char *)(v2 + 4); // 0x1a4638
    *v3 = *v3 | (char)(a4 / 256);
    v1 = (int64_t)&v1;
    return function_c57b8();
}

// Address range: 0x48d9cf - 0x48da52
int64_t function_48d9cf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48d9cf
    if (a3 == 0) {
        // 0x48da4f
        int64_t v1; // 0x48d9cf
        return v1 & -256 | 1;
    }
    char v2 = *(char *)a1; // 0x48d9ec
    char v3 = v2; // 0x48d9f1
    int64_t v4 = a3; // 0x48d9f1
    int64_t v5 = a1; // 0x48d9f1
    int64_t v6 = a2; // 0x48d9f1
    int64_t v7 = 0; // 0x48d9f1
    if (v2 != 0) {
        int64_t v8 = a2;
        int64_t v9 = v3;
        v4--;
        unsigned char v10 = *(char *)v8; // 0x48d9f6
        v6 = v8;
        v7 = v9;
        while (v4 != 0 && v10 != 0) {
            // 0x48da01
            if (v3 != v10) {
                int64_t v11 = function_48f4fd(v9); // 0x48da09
                v6 = v8;
                v7 = v9;
                if ((int32_t)v11 != (int32_t)function_48f4fd((int64_t)v10)) {
                    // break -> 0x48da2a
                    break;
                }
            }
            // 0x48da1f
            v5++;
            int64_t v12 = v8 + 1; // 0x48da22
            v3 = *(char *)v5;
            v6 = v12;
            v7 = 0;
            if (v3 == 0) {
                // break -> 0x48da2a
                break;
            }
            v8 = v12;
            v9 = v3;
            v4--;
            v10 = *(char *)v8;
            v6 = v8;
            v7 = v9;
        }
    }
    int64_t v13 = function_48f4fd(v7); // 0x48da2d
    int64_t v14 = function_48f4fd((int64_t)*(char *)v6); // 0x48da39
    return v14 & -256 | (int64_t)((int32_t)v13 == (int32_t)v14);
}

// Address range: 0x4976c0 - 0x497742
int64_t function_4976c0(int64_t a1) {
    int64_t result; // 0x4976c0
    if (a1 == 0) {
        // 0x497740
        return result;
    }
    int64_t result2 = function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g2, "=> handshake"); // 0x4976ee
    if (*(int32_t *)(a1 + 8) == 16) {
        // 0x497740
        return result2;
    }
    int64_t v1 = function_497670(a1); // 0x497701
    while ((int32_t)v1 == 0) {
        // 0x4976f8
        result = v1;
        if (*(int32_t *)(a1 + 8) == 16) {
            // 0x497740
            return result;
        }
        v1 = function_497670(a1);
    }
    // 0x49770c
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g3, "<= handshake");
    return v1 & 0xffffffff;
}

// Address range: 0x4ac420 - 0x4ac49e
int64_t function_4ac420(uint64_t a1) {
    // 0x4ac420
    if ((int32_t)a1 > (int32_t)&g5 || *(int32_t *)(a1 + 12) >= 24 || *(int32_t *)(a1 + 16) >= 60 || *(int32_t *)(a1 + 20) >= 60) {
        // 0x4ac480
        return 0xffffdc00;
    }
    uint32_t v1 = *(int32_t *)(a1 + 4); // 0x4ac43b
    if (v1 >= 13) {
        // 0x4ac480
        return 0xffffdc00;
    }
    uint32_t v2 = v1 % 64;
    int64_t v3 = v2 == 0 ? 1 : 1 << (int64_t)v2;
    int32_t v4 = v3; // 0x4ac44d
    if ((v4 & (int32_t)&g1) != 0) {
        // 0x4ac480
        return a1 & 0xffffffff;
    }
    if ((v4 & (int32_t)&g18) != 0) {
        // 0x4ac490
        if (*(int32_t *)(a1 + 8) >= 31) {
            // 0x4ac480
            return 0xffffdc00;
        }
        // 0x4ac480
        return 0;
    }
    // 0x4ac45d
    if ((v3 & 4) == 0) {
        // 0x4ac480
        return 0xffffdc00;
    }
    uint32_t v5 = *(int32_t *)(a1 + 8); // 0x4ac462
    if (v5 < 1) {
        // 0x4ac480
        return 0xffffdc00;
    }
    uint64_t v6 = a1 % 4; // 0x4ac469
    if ((v6 + 29 + (v6 ^ 0xffffffff) + (int64_t)(v6 == 0) & 0xffffffff) < (int64_t)v5) {
        // 0x4ac480
        return 0xffffdc00;
    }
    // 0x4ac480
    return 0;
}

// Address range: 0x4c8e60 - 0x4c8ee1
int64_t function_4c8e60(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 32); // 0x4c8e69
    if (v1 == 0) {
        // 0x4c8ed8
        return 0xffffbe00;
    }
    int64_t v2 = *(int64_t *)(a1 + 56); // 0x4c8e72
    if (v2 == 0 || *(char *)v1 % 2 == 0 || *(char *)v2 % 2 == 0) {
        // 0x4c8ed8
        return 0xffffbe00;
    }
    int64_t v3 = a1 + 16; // 0x4c8e85
    if (function_4b0f10(v3) < 128 || function_4b0f10(v3) > (int64_t)&g4) {
        // 0x4c8ed8
        return 0xffffbe00;
    }
    int64_t v4 = a1 + 40; // 0x4c8ea7
    if (function_4b0f10(v4) < 2) {
        // 0x4c8ed8
        return 0xffffbe00;
    }
    // 0x4c8eb9
    return (int32_t)function_4b1590(v4, v3) >> 31 & -0x4200 ^ -0x4200;
}

// Address range: 0x4ce8f0 - 0x4ce973
int64_t function_4ce8f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4ce8f0
    int64_t v1; // bp-264, 0x4ce8f0
    function_4cdd20(&v1);
    function_4cdde0(&v1, a4 & 0xffffffff);
    function_4ce440(&v1, a1, a2);
    function_4ce580(&v1, a3);
    return function_4cddb0(&v1);
}

// Address range: 0x4d8ff0 - 0x4d9072
int64_t function_4d8ff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint32_t v1 = g14; // 0x4d8fff
    int64_t result = v1; // 0x4d900a
    if (v1 == 0x40000000) {
        // 0x4d900c
        result = function_4d8e90();
    }
    // 0x4d9037
    if ((result & 64) != 0) {
        // 0x4d9068
        return function_20050();
    }
    if ((result & 4) != 0) {
        // 0x4d9078
        return result;
    }
    if (result % 2 != 0) {
        // 0x4d9058
        return function_206b0();
    }
    // 0x4d9078
    return result;
}

// Address range: 0x4ef1f0 - 0x4ef266
int64_t function_4ef1f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3; // bp-48, 0x4ef20c
    int64_t v2 = 0; // 0x4ef21c
    int64_t v3 = *(int64_t *)(a1 + 24) + -1 - a4; // 0x4ef21c
    int64_t v4 = v3 + 1; // 0x4ef220
    unsigned char v5 = *(char *)v3; // 0x4ef224
    int64_t v6 = (int64_t)(v5 % 128) << v2 % 64;
    int64_t v7 = v6; // 0x4ef235
    v2 = v2 + 7 & 0xffffffff;
    int64_t v8 = v7; // 0x4ef23a
    v3 = v4;
    while (v5 < 0) {
        // 0x4ef220
        v4 = v3 + 1;
        v5 = *(char *)v3;
        v6 = (int64_t)(v5 % 128) << v2 % 64;
        v7 = v6 | v8;
        v2 = v2 + 7 & 0xffffffff;
        v8 = v7;
        v3 = v4;
    }
    int64_t result = v6; // 0x4ef23f
    while (v7 != 0) {
        int64_t v9 = function_4eef80(function_4ef140(a1, v7), a2, &v1); // 0x4ef252
        result = v9;
        if ((char)v9 != 0) {
            // break -> 0x4ef25b
            break;
        }
        v2 = 0;
        v3 = v4;
        v4 = v3 + 1;
        v5 = *(char *)v3;
        v6 = (int64_t)(v5 % 128) << v2 % 64;
        v7 = v6;
        v2 = v2 + 7 & 0xffffffff;
        v8 = v7;
        v3 = v4;
        while (v5 < 0) {
            // 0x4ef220
            v4 = v3 + 1;
            v5 = *(char *)v3;
            v6 = (int64_t)(v5 % 128) << v2 % 64;
            v7 = v6 | v8;
            v2 = v2 + 7 & 0xffffffff;
            v8 = v7;
            v3 = v4;
        }
        // 0x4ef23c
        result = v6;
    }
    // 0x4ef25b
    return result;
}

// Address range: 0x5486d0 - 0x548751
int64_t function_5486d0(uint64_t a1, int64_t a2) {
    // 0x5486d0
    if (a2 == a1) {
        // 0x548707
        return (int64_t)&g16;
    }
    int64_t v1 = a2 - a1; // 0x5486e1
    int64_t v2 = function_547d00(v1, 0); // 0x5486e7
    int64_t v3 = v2 + 24; // 0x5486f3
    int64_t result2; // 0x5486d0
    int64_t result; // 0x5486d0
    if (v1 == 1) {
        // 0x548720
        *(char *)v3 = (char)a1;
        result2 = a1 % 256;
        result = v3;
    } else {
        // 0x5486f9
        result2 = v2;
        result = v3;
        if (v1 != 0) {
            int64_t dest_mem = (int64_t)memcpy((int64_t *)v3, (int64_t *)a1, (int32_t)v1); // 0x548739
            result2 = dest_mem;
            result = dest_mem;
        }
    }
    // 0x5486fe
    if (v2 == (int64_t)g12) {
        // 0x548707
        return result;
    }
    // 0x548748
    *(int32_t *)(v2 + 16) = 0;
    return result2;
}

// Address range: 0x563690 - 0x563711
// From class:    __gnu_cxx::stdio_sync_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_563690(int64_t a1, int64_t a2, int64_t a3) {
    // 0x563690
    __readfsqword(40);
    int64_t result = *(int64_t *)(a1 + 32); // 0x5636ab
    if (result != g13) {
        // 0x5636f8
        __readfsqword(40);
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x5636b8
    int64_t result2 = -1; // 0x5636cc
    if (fseeko64((struct _IO_FILE *)*v1, (int32_t)a2, 0) == 0) {
        // 0x5636ce
        result2 = ftello64((struct _IO_FILE *)*v1);
    }
    // 0x5636da
    __readfsqword(40);
    return result2;
}

// Address range: 0x563720 - 0x5637a1
// From class:    __gnu_cxx::stdio_sync_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_563720(int64_t a1, int64_t a2, int64_t a3) {
    // 0x563720
    __readfsqword(40);
    int64_t result = *(int64_t *)(a1 + 32); // 0x56373b
    if (result != g11) {
        // 0x563788
        __readfsqword(40);
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x563748
    int64_t result2 = -1; // 0x56375c
    if (fseeko64((struct _IO_FILE *)*v1, (int32_t)a2, 0) == 0) {
        // 0x56375e
        result2 = ftello64((struct _IO_FILE *)*v1);
    }
    // 0x56376a
    __readfsqword(40);
    return result2;
}
