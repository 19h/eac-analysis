/*
 * Targeted RetDec C for native executable gap queue batch 38.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x54e320-0x54e3d4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27bbe-0x27c71 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b466-0x4b519 rank=- name=- kind=- bytes=- uncovered=-
 *   0x68ee4-0x68f97 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f4e50-0x4f4f03 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f4f50-0x4f5003 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56adb0-0x56ae63 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56aeb0-0x56af63 rank=- name=- kind=- bytes=- uncovered=-
 *   0x576860-0x576913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x576940-0x5769f3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36712-0x367c4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x531be-0x53270 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b55b0-0x4b5662 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f7430-0x4f74e2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c2b6-0x4c367 rank=- name=- kind=- bytes=- uncovered=-
 *   0x584db-0x5858c rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2509a();
int64_t function_2562c();
int64_t function_25a28();
int64_t function_26106();
int64_t function_2617c();
int64_t function_27bbe(int64_t a1);
int64_t function_2b674();
int64_t function_35a7e();
int64_t function_360a0();
int64_t function_36712(int64_t result, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_36b14();
int64_t function_4aad8();
int64_t function_4b466(int64_t a1, int64_t a2);
int64_t function_4b55b0(int64_t a1, int64_t a2);
int64_t function_4b55e8(int64_t a1);
int64_t function_4b5608(int64_t a1);
int64_t function_4b5628(int64_t a1);
int64_t function_4b5648(int64_t a1);
int64_t function_4c2b6(int64_t a1);
int64_t function_4c3be();
int64_t function_4c478();
int64_t function_4eeb40();
int64_t function_4efd30();
int64_t function_4f4e50(int64_t a1);
int64_t function_4f4f50(int64_t a1);
int64_t function_4f5b50();
int64_t function_4f7430(int64_t result, int64_t a2, int64_t a3);
int64_t function_4fbd10();
int64_t function_4fc010();
int64_t function_530e6();
int64_t function_531be(int64_t a1, int64_t a2, uint64_t a3, int64_t result);
int64_t function_542470();
int64_t function_547e30();
int64_t function_54e080();
int64_t function_54e240();
int64_t function_54e320(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_5509d0();
int64_t function_565970();
int64_t function_56adb0(int64_t a1);
int64_t function_56aeb0(int64_t a1);
int64_t function_576860(int64_t a1, int64_t a2);
int64_t function_576940(int64_t a1, int64_t a2);
int64_t function_584db(int64_t file_path, int64_t a2, uint64_t a3);
int64_t function_68ee4(int64_t a1);
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x27bbe - 0x27c71
int64_t function_27bbe(int64_t a1) {
    int64_t v1 = a1 - 24; // 0x27bd2
    int64_t result; // 0x27bbe
    if (v1 == (int64_t)&g15) {
        // 0x27c69
        return result;
    }
    int32_t v2 = *(int32_t *)(a1 - 8); // 0x27bdf
    if (v2 < 1) {
        // 0x27c5e
        *(int32_t *)(a1 - 8) = -1;
        // 0x27c69
        return result;
    }
    int64_t v3 = *(int64_t *)v1; // 0x27be9
    int64_t v4 = function_26106(v3, *(int64_t *)(a1 - 16), v2) + 24; // 0x27c02
    int64_t v5 = 0; // 0x27c06
    if (v3 != 0) {
        if (v3 != 1) {
            // 0x27c24
            __asm_rep_movsb_memcpy((char *)v4, (char *)v3, v3);
            bool v6; // 0x27bbe
            v5 = v4 + v3 * (v6 ? -1 : 1);
        } else {
            // 0x27c1d
            *(char *)v4 = (char)v3;
            v5 = v3;
        }
    }
    int64_t v7 = v5 - 24; // 0x27c30
    if (v7 != (int64_t)&g15) {
        // 0x27c39
        function_2617c(v7);
    }
    // 0x27c3e
    *(int64_t *)a1 = v4;
    int64_t v8 = v5 - 48; // 0x27c46
    if (v8 != (int64_t)&g15) {
        // 0x27c4f
        *(int32_t *)(v5 - 32) = 0;
        *(int64_t *)v8 = v3;
        *(char *)(v7 + v3) = 0;
    }
    // 0x27c5e
    *(int32_t *)(v7 - 8) = -1;
    // 0x27c69
    return result;
}

// Address range: 0x36712 - 0x367c4
int64_t function_36712(int64_t result, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = function_36b14(a2, a3, "basic_string::substr"); // 0x36730
    uint64_t v2 = *(int64_t *)(a3 - 24) - v1; // 0x3674a
    int64_t v3 = (v2 > a4 ? a4 : v2) + v1; // 0x36754
    int64_t v4 = function_36b14(a2, v1, "basic_string::basic_string"); // 0x3675c
    int64_t v5 = v4 + a3; // 0x36761
    if (v3 + a3 == v5) {
        // 0x367b4
        *(int64_t *)result = (int64_t)&g16;
        return result;
    }
    int64_t v6; // 0x36712
    if (v5 == 0) {
        // 0x3679d
        function_542470("basic_string::_S_construct null not valid");
        v6 = (int64_t)&g16;
    } else {
        int64_t v7 = v3 - v4; // 0x3676e
        int64_t v8 = function_35a7e(v7, 0); // 0x36776
        int64_t v9 = v8 + 24; // 0x3677b
        function_25a28(v9, v5, v7);
        function_2562c(v8, v7);
        v6 = v9;
    }
    // 0x367b4
    *(int64_t *)result = v6;
    return result;
}

// Address range: 0x4b466 - 0x4b519
int64_t function_4b466(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x4b480
    function_729b6();
    int64_t * v2 = (int64_t *)(a1 + 256); // 0x4b495
    int64_t v3 = *v2; // 0x4b495
    if (v3 == *(int64_t *)(a1 + 264)) {
        // 0x4b4df
        function_4c478(a1 + 248, v3, a2);
    } else {
        // 0x4b4a5
        int64_t v4; // 0x4b466
        *(int32_t *)v3 = (int32_t)v4;
        *(int64_t *)(v3 + 8) = function_4aad8(*(int64_t *)(a2 + 8) - 24);
        function_4c3be(v3 + 16, a2 + 16);
        *(int64_t *)(v3 + 40) = *(int64_t *)(a2 + 40);
        *v2 = *v2 + 48;
    }
    // 0x4b4f1
    int64_t v5; // bp-56, 0x4b466
    function_729ce(&v5);
    int64_t result = 0; // 0x4b507
    if (v1 != __readfsqword(40)) {
        // 0x4b509
        __stack_chk_fail();
        result = (int64_t)&g18;
    }
    // 0x4b50e
    return result;
}

// Address range: 0x4c2b6 - 0x4c367
int64_t function_4c2b6(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x4c2bf
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x4c2c6
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + 24); // 0x4c2ce
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + 32); // 0x4c2d6
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + 40); // 0x4c2de
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a1 + 48); // 0x4c2e6
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a1 + 56); // 0x4c2ee
    *v7 = 0;
    int64_t * v8 = (int64_t *)(a1 + 64); // 0x4c2f6
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x4c2fe
    *v9 = 0;
    int64_t * v10 = (int64_t *)(a1 + 8); // 0x4c306
    *v10 = 8;
    int64_t v11 = function_4efd30(64); // 0x4c313
    *v1 = v11;
    int64_t v12 = (4 * *v10 - 4 & -8) + v11; // 0x4c330
    int64_t v13 = function_4efd30((int64_t)&g1); // 0x4c333
    int64_t v14 = v13 + (int64_t)&g1; // 0x4c338
    *(int64_t *)v12 = v13;
    *v5 = v12;
    *v9 = v12;
    *v3 = v13;
    *v4 = v14;
    *v7 = v13;
    *v8 = v14;
    *v2 = v13;
    *v6 = v13;
    int64_t result; // 0x4c2b6
    return result;
}

// Address range: 0x531be - 0x53270
int64_t function_531be(int64_t a1, int64_t a2, uint64_t a3, int64_t result) {
    int64_t v1 = a1 + 32; // 0x531d0
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x531d8
    int64_t v3 = *v2; // 0x531d8
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x531dc
    int64_t v5 = function_4fbd10(v1, *v4, v3, 1); // 0x531e5
    int64_t v6 = 1; // 0x531ec
    int64_t v7 = v1; // 0x531ec
    int64_t v8 = a2; // 0x531ec
    if ((char)v5 != 0) {
        // 0x531ee
        function_530e6(a1, v3);
        v6 = 0;
        v7 = a1;
        v8 = a3 % *v4;
    }
    int64_t * v9 = (int64_t *)(8 * v8 + v7); // 0x53218
    int64_t v10 = *v9; // 0x53218
    if (v10 != 0) {
        // 0x53221
        *(int64_t *)result = *(int64_t *)v10;
        *(int64_t *)*v9 = result;
        // 0x53261
        *v2 = *v2 + 1;
        return result;
    }
    int64_t v11 = a1 + 16; // 0x53234
    int64_t * v12 = (int64_t *)v11; // 0x53234
    *(int64_t *)result = *v12;
    *v12 = result;
    if (v6 != 0) {
        uint32_t v13 = *(int32_t *)(v6 | 8); // 0x5324c
        *(int64_t *)(8 * ((int64_t)v13 % *v4) + v7) = result;
    }
    // 0x53259
    *v9 = v11;
    // 0x53261
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0x584db - 0x5858c
int64_t function_584db(int64_t file_path, int64_t a2, uint64_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x584de
    *v1 = a2;
    if (file_path == 0 || a3 == 0) {
        // 0x5858b
        return 0;
    }
    struct _IO_FILE * file = fopen((char *)file_path, "rb"); // 0x58507
    int64_t v2; // 0x584db
    if (file == NULL) {
        // 0x5857c
        v2 = (int64_t)"rb";
        return v2 & -256 | (int64_t)(*v1 != v2);
    }
    // 0x58514
    fseek(file, 0, SEEK_END);
    int32_t curr_file_offset = ftell(file); // 0x58526
    int64_t v3 = 0; // 0x5852e
    if (curr_file_offset >= 1) {
        uint64_t v4 = (int64_t)curr_file_offset; // 0x58526
        int64_t data = v4 > a3 ? a3 : v4; // 0x58539
        function_2b674(a2, data);
        rewind(file);
        int32_t items_read = fread((int64_t *)data, 1, (int32_t)(*v1 - data), file); // 0x5855c
        v3 = 1;
        if (*v1 - 1 != (int64_t)items_read) {
            // 0x58570
            *v1 = 1;
            v3 = 1;
        }
    }
    // 0x58574
    fclose(file);
    // 0x5857c
    v2 = v3;
    return v2 & -256 | (int64_t)(*v1 != v2);
}

// Address range: 0x68ee4 - 0x68f97
int64_t function_68ee4(int64_t a1) {
    // 0x68ee4
    *(char *)(a1 + 40) = 0;
    int64_t v1 = a1 + 56; // 0x68eef
    *(int32_t *)v1 = 0;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)a1 = (int64_t)&g9;
    int64_t v2 = a1 + 104; // 0x68f10
    *(int32_t *)v2 = 0;
    *(int64_t *)(a1 + 112) = 0;
    *(int64_t *)(a1 + 136) = 0;
    *(int64_t *)(a1 + 144) = 0;
    *(int64_t *)(a1 + 152) = 0;
    *(int64_t *)(a1 + 160) = 0;
    *(int64_t *)(a1 + 8) = (int64_t)&g16;
    *(int64_t *)(a1 + 16) = (int64_t)&g16;
    *(int64_t *)(a1 + 24) = (int64_t)&g16;
    *(int64_t *)(a1 + 32) = (int64_t)&g16;
    *(int64_t *)(a1 + 168) = 0;
    *(int64_t *)(a1 + 72) = v1;
    *(int64_t *)(a1 + 80) = v1;
    *(int64_t *)(a1 + 120) = v2;
    *(int64_t *)(a1 + 128) = v2;
    *(int64_t *)(a1 + 176) = 0x4e2000004e20;
    return 0x4e2000004e20;
}

// Address range: 0x4b55b0 - 0x4b55e2
int64_t function_4b55b0(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x4b55ce
        int64_t result; // 0x4b55b0
        return result;
    }
    // 0x4b55b9
    if (*(int32_t *)(a1 + 4) != 2) {
        // 0x4b55ce
        return 0xffff9f00;
    }
    // 0x4b55c7
    if ((int32_t)a2 >= 5) {
        // 0x4b55ce
        return 0xffff9f80;
    }
    int32_t v1 = *(int32_t *)((4 * a2 & 0x3fffffffc) + (int64_t)&g8); // 0x4b55d9
    return (int64_t)v1 + (int64_t)&g8;
}

// Address range: 0x4b55e8 - 0x4b5601
int64_t function_4b55e8(int64_t a1) {
    // 0x4b55e8
    *(int64_t *)(a1 + 16) = (int64_t)&g6;
    *(int64_t *)(a1 + 24) = 0x4b4cc0;
    return 0;
}

// Address range: 0x4b5608 - 0x4b5621
int64_t function_4b5608(int64_t a1) {
    // 0x4b5608
    *(int64_t *)(a1 + 16) = 0x4b4c00;
    *(int64_t *)(a1 + 24) = (int64_t)&g5;
    return (int32_t)&g5 ^ (int32_t)&g5;
}

// Address range: 0x4b5628 - 0x4b5641
int64_t function_4b5628(int64_t a1) {
    // 0x4b5628
    *(int64_t *)(a1 + 16) = (int64_t)&g3;
    *(int64_t *)(a1 + 24) = (int64_t)&g4;
    return (int32_t)&g4 ^ (int32_t)&g4;
}

// Address range: 0x4b5648 - 0x4b5661
int64_t function_4b5648(int64_t a1) {
    // 0x4b5648
    *(int64_t *)(a1 + 16) = 0x4b4a80;
    *(int64_t *)(a1 + 24) = (int64_t)&g2;
    return (int32_t)&g2 ^ (int32_t)&g2;
}

// Address range: 0x4f4e50 - 0x4f4f00
// From class:    std::moneypunct<wchar_t, true>
// Type:          constructor
int64_t function_4f4e50(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4f4e5e
    int64_t v2 = *v1; // 0x4f4e5e
    *(int64_t *)a1 = (int64_t)&g10;
    int64_t v3 = v2; // 0x4f4e6e
    if (*(int64_t *)(v2 + 24) != 0) {
        int64_t v4 = *(int64_t *)(v2 + 16); // 0x4f4e70
        v3 = v2;
        if (v4 != 0) {
            // 0x4f4e79
            function_4eeb40(v4);
            v3 = *v1;
        }
    }
    int64_t v5 = v3; // 0x4f4e87
    if (*(int64_t *)(v3 + 72) != 0) {
        int64_t v6 = *(int64_t *)(v3 + 64); // 0x4f4e89
        v5 = v3;
        if (v6 != 0) {
            // 0x4f4e92
            function_4eeb40(v6);
            v5 = *v1;
        }
    }
    // 0x4f4e9b
    if (*(int64_t *)(v5 + 88) != 0) {
        int64_t wstr = *(int64_t *)(v5 + 80); // 0x4f4ea2
        if (wcscmp((int32_t *)wstr, L"()") != 0) {
            // 0x4f4ef8
            return function_4eeb40(wstr);
        }
    }
    // 0x4f4eb9
    if (*(int64_t *)(v5 + 56) == 0) {
        // 0x4f4ee9
        return function_565970(a1);
    }
    int64_t v7 = *(int64_t *)(v5 + 48); // 0x4f4ec0
    if (v7 != 0) {
        // 0x4f4ec9
        function_4eeb40(v7);
    }
    // 0x4f4ee9
    return function_565970(a1);
}

// Address range: 0x4f4f50 - 0x4f5000
// From class:    std::moneypunct<wchar_t, false>
// Type:          constructor
int64_t function_4f4f50(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4f4f5e
    int64_t v2 = *v1; // 0x4f4f5e
    *(int64_t *)a1 = (int64_t)&g11;
    int64_t v3 = v2; // 0x4f4f6e
    if (*(int64_t *)(v2 + 24) != 0) {
        int64_t v4 = *(int64_t *)(v2 + 16); // 0x4f4f70
        v3 = v2;
        if (v4 != 0) {
            // 0x4f4f79
            function_4eeb40(v4);
            v3 = *v1;
        }
    }
    int64_t v5 = v3; // 0x4f4f87
    if (*(int64_t *)(v3 + 72) != 0) {
        int64_t v6 = *(int64_t *)(v3 + 64); // 0x4f4f89
        v5 = v3;
        if (v6 != 0) {
            // 0x4f4f92
            function_4eeb40(v6);
            v5 = *v1;
        }
    }
    // 0x4f4f9b
    if (*(int64_t *)(v5 + 88) != 0) {
        int64_t wstr = *(int64_t *)(v5 + 80); // 0x4f4fa2
        if (wcscmp((int32_t *)wstr, L"()") != 0) {
            // 0x4f4ff8
            return function_4eeb40(wstr);
        }
    }
    // 0x4f4fb9
    if (*(int64_t *)(v5 + 56) == 0) {
        // 0x4f4fe9
        return function_565970(a1);
    }
    int64_t v7 = *(int64_t *)(v5 + 48); // 0x4f4fc0
    if (v7 != 0) {
        // 0x4f4fc9
        function_4eeb40(v7);
    }
    // 0x4f4fe9
    return function_565970(a1);
}

// Address range: 0x4f7430 - 0x4f74de
int64_t function_4f7430(int64_t result, int64_t a2, int64_t a3) {
    // 0x4f7430
    __readfsqword(40);
    int64_t v1 = *(int64_t *)(result - 24) + result; // 0x4f7454
    function_4fc010(v1, *(int32_t *)(v1 + 32) & -3);
    char v2; // bp-33, 0x4f7430
    function_4f5b50((int64_t *)&v2, result, 1);
    if (v2 == 0) {
        // 0x4f748c
        __readfsqword(40);
        return result;
    }
    int64_t v3 = *(int64_t *)((int64_t)&v2 - 24) + result; // 0x4f7483
    if ((*(char *)(v3 + 32) & 5) != 0) {
        // 0x4f748c
        __readfsqword(40);
        return result;
    }
    int64_t result2 = *(int64_t *)(v3 + 232); // 0x4f74b0
    if (*(int64_t *)result2 == -1) {
        // 0x4f74ce
        return result2;
    }
    // 0x4f748c
    __readfsqword(40);
    return result;
}

// Address range: 0x54e320 - 0x54e3d2
// From class:    std::__codecvt_utf8_base<char16_t>
// Type:          virtual member function
int64_t function_54e320(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x54e320
    __readfsqword(40);
    int64_t v1 = a3; // bp-72, 0x54e33e
    int64_t v2 = a6; // bp-56, 0x54e34d
    int64_t result; // 0x54e320
    if ((*(char *)(a1 + 24) & 2) != 0) {
        int64_t v3 = *(int64_t *)(a1 + 16); // 0x54e357
        int64_t v4 = (int32_t)v3 >= (int32_t)&g17 ? (int64_t)&g17 : v3 & 0xffffffff; // 0x54e367
        int64_t v5 = function_54e080(&v2, &v2, v4); // 0x54e3bd
        result = 1;
        if ((char)v5 != 0) {
            // 0x54e376
            result = function_54e240(&v1);
            goto lab_0x54e385;
        } else {
            goto lab_0x54e385;
        }
    } else {
        // 0x54e376
        result = function_54e240(&v1);
        goto lab_0x54e385;
    }
  lab_0x54e385:
    // 0x54e385
    *(int64_t *)a5 = v1;
    *(int64_t *)a8 = v2;
    __readfsqword(40);
    return result;
}

// Address range: 0x56adb0 - 0x56ae60
// From class:    std::__cxx11::moneypunct<wchar_t, true>
// Type:          constructor
int64_t function_56adb0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x56adbe
    int64_t v2 = *v1; // 0x56adbe
    *(int64_t *)a1 = (int64_t)&g12;
    int64_t v3 = v2; // 0x56adce
    if (*(int64_t *)(v2 + 24) != 0) {
        int64_t v4 = *(int64_t *)(v2 + 16); // 0x56add0
        v3 = v2;
        if (v4 != 0) {
            // 0x56add9
            function_4eeb40(v4);
            v3 = *v1;
        }
    }
    int64_t v5 = v3; // 0x56ade7
    if (*(int64_t *)(v3 + 72) != 0) {
        int64_t v6 = *(int64_t *)(v3 + 64); // 0x56ade9
        v5 = v3;
        if (v6 != 0) {
            // 0x56adf2
            function_4eeb40(v6);
            v5 = *v1;
        }
    }
    // 0x56adfb
    if (*(int64_t *)(v5 + 88) != 0) {
        int64_t wstr = *(int64_t *)(v5 + 80); // 0x56ae02
        if (wcscmp((int32_t *)wstr, L"()") != 0) {
            // 0x56ae58
            return function_4eeb40(wstr);
        }
    }
    // 0x56ae19
    if (*(int64_t *)(v5 + 56) == 0) {
        // 0x56ae49
        return function_565970(a1);
    }
    int64_t v7 = *(int64_t *)(v5 + 48); // 0x56ae20
    if (v7 != 0) {
        // 0x56ae29
        function_4eeb40(v7);
    }
    // 0x56ae49
    return function_565970(a1);
}

// Address range: 0x56aeb0 - 0x56af60
// From class:    std::__cxx11::moneypunct<wchar_t, false>
// Type:          constructor
int64_t function_56aeb0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x56aebe
    int64_t v2 = *v1; // 0x56aebe
    *(int64_t *)a1 = (int64_t)&g13;
    int64_t v3 = v2; // 0x56aece
    if (*(int64_t *)(v2 + 24) != 0) {
        int64_t v4 = *(int64_t *)(v2 + 16); // 0x56aed0
        v3 = v2;
        if (v4 != 0) {
            // 0x56aed9
            function_4eeb40(v4);
            v3 = *v1;
        }
    }
    int64_t v5 = v3; // 0x56aee7
    if (*(int64_t *)(v3 + 72) != 0) {
        int64_t v6 = *(int64_t *)(v3 + 64); // 0x56aee9
        v5 = v3;
        if (v6 != 0) {
            // 0x56aef2
            function_4eeb40(v6);
            v5 = *v1;
        }
    }
    // 0x56aefb
    if (*(int64_t *)(v5 + 88) != 0) {
        int64_t wstr = *(int64_t *)(v5 + 80); // 0x56af02
        if (wcscmp((int32_t *)wstr, L"()") != 0) {
            // 0x56af58
            return function_4eeb40(wstr);
        }
    }
    // 0x56af19
    if (*(int64_t *)(v5 + 56) == 0) {
        // 0x56af49
        return function_565970(a1);
    }
    int64_t v7 = *(int64_t *)(v5 + 48); // 0x56af20
    if (v7 != 0) {
        // 0x56af29
        function_4eeb40(v7);
    }
    // 0x56af49
    return function_565970(a1);
}

// Address range: 0x576860 - 0x576913
int64_t function_576860(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x57686c
    int64_t v2; // bp-40, 0x576860
    function_2509a(a2, &v2);
    int64_t v3 = v2 - 24; // 0x5768af
    *(int64_t *)(a2 + 32) = (int64_t)&g7;
    *(int64_t *)(a2 + 8) = *(int64_t *)v3;
    if (v3 == (int64_t)g14) {
        // 0x5768c8
        return __readfsqword(40) ^ v1;
    }
    int32_t * v4 = (int32_t *)(v2 - 8);
    int32_t v5 = *v4;
    *v4 = v5 - 1;
    if (v5 >= 0 != v5 != 0) {
        // 0x5768f8
        int64_t v6; // bp-41, 0x576860
        function_547e30(v3, &v6, v5);
    }
    // 0x5768c8
    return __readfsqword(40) ^ v1;
}

// Address range: 0x576940 - 0x5769f3
int64_t function_576940(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x57694c
    int64_t v2; // bp-40, 0x576940
    function_360a0(a2, &v2);
    int64_t v3 = v2 - 24; // 0x57698f
    *(int64_t *)(a2 + 32) = 0x575eb0;
    *(int64_t *)(a2 + 8) = *(int64_t *)v3;
    if (v3 == *(int64_t *)0x848c20) {
        // 0x5769a8
        return __readfsqword(40) ^ v1;
    }
    int32_t * v4 = (int32_t *)(v2 - 8);
    int32_t v5 = *v4;
    *v4 = v5 - 1;
    if (v5 >= 0 != v5 != 0) {
        // 0x5769d8
        int64_t v6; // bp-41, 0x576940
        function_5509d0(v3, &v6, v5);
    }
    // 0x5769a8
    return __readfsqword(40) ^ v1;
}
